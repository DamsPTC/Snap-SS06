/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10280b70c; end: 10280b71f;  */

undefined1  [16] FUN_10280b70c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x58;
  auVar1._0_8_ = 0x10280b71c;
  return auVar1;
}



/* Entry: 10280b720; end: 10280b733;  */

void FUN_10280b720(void)

{
  FUN_10280acbc();
  return;
}



/* Entry: 10280b734; end: 10280b77b;  */

void FUN_10280b734(void)

{
  FUN_10280b424();
  return;
}



/* Entry: 10280b77c; end: 10280b77f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10280b77c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10280b780; end: 10280b7b7;  */

uint FUN_10280b780(long param_1,long param_2)

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
  func_0x000102810bdc();
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



/* Entry: 10280b7b8; end: 10280b81f;  */

uint FUN_10280b7b8(undefined8 *param_1)

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
  func_0x00010280d254(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 10280b820; end: 10280b8bf;  */

/* WARNING: Possible PIC construction at 0x00010280b86c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010280b87c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010280b870) */
/* WARNING: Removing unreachable block (ram,0x00010280b880) */

void FUN_10280b820(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112ec3088 != -1) {
    func_0x000107c61568(0x112ec3088,FUN_10280ac74);
  }
  uVar5 = uRam0000000113804b00;
  uVar4 = uRam0000000113804af8;
  uVar3 = uRam0000000113804af0;
  uVar2 = uRam0000000113804ae8;
  uVar1 = uRam0000000113804ae0;
  *param_1 = uRam0000000113804ad8;
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



/* Entry: 10280b8c0; end: 10280b8fb;  */

void FUN_10280b8c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112ec31b8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112ec31b8,&UNK_10dae2cd0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10280b8fc; end: 10280ba27;  */

void FUN_10280b8fc(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10280ba28; end: 10280bad7;  */

uint FUN_10280ba28(undefined8 *param_1,undefined8 *param_2)

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
  func_0x00010280d254(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 10280bad8; end: 10280bb5b;  */

void FUN_10280bad8(undefined8 param_1,long param_2,long param_3)

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



/* Entry: 10280bb5c; end: 10280bbe3;  */

void FUN_10280bb5c(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4,
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



/* Entry: 10280bbe4; end: 10280bc1f;  */

void FUN_10280bbe4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  return;
}



/* Entry: 10280bc20; end: 10280bc4f;  */

undefined1  [16] FUN_10280bc20(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 10280bc50; end: 10280bc83;  */

void FUN_10280bc50(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 10280bc84; end: 10280bc97;  */

undefined1  [16] FUN_10280bc84(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x10280bc94;
  return auVar1;
}



/* Entry: 10280bc98; end: 10280bccf;  */

void FUN_10280bc98(void)

{
  FUN_10280bad8();
  return;
}



/* Entry: 10280bcd0; end: 10280bcd3;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10280bcd0(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10280bcd4; end: 10280bd0b;  */

uint FUN_10280bcd4(long param_1,long param_2)

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
  func_0x000102810b9c();
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



/* Entry: 10280bd0c; end: 10280be23;  */

/* WARNING: Possible PIC construction at 0x00010280bd40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x00010280bd44) */
/* WARNING: Removing unreachable block (ram,0x00010280bd6c) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10280bd0c(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulong uVar15;
  byte *pbVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  byte *pbVar22;
  byte *unaff_x19;
  long lVar23;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar24;
  ulong unaff_x22;
  long lVar25;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  byte bVar39;
  byte bVar40;
  byte bVar41;
  undefined1 auVar42 [16];
  
  lVar23 = param_1[2];
  uVar15 = param_1[3];
  pbVar9 = (byte *)unaff_x20[2];
  pbVar24 = (byte *)unaff_x20[3];
  pbVar11 = (byte *)*unaff_x20;
  pbVar13 = (byte *)unaff_x20[1];
  pbVar14 = (byte *)*param_1;
  pbVar16 = (byte *)param_1[1];
  if ((byte *)*unaff_x20 != (byte *)*param_1 || (byte *)unaff_x20[1] != (byte *)param_1[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar11,pbVar13,pbVar14,pbVar16,0);
    return pbVar11;
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar24 >> 0x20);
    uVar17 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar15 >> 0x20);
    uVar20 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar12 = pbVar24;
    if ((ulong)pbVar24 >> 0x3e == 3) {
      uVar19 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar24 != (byte *)0xc000000000000000)) ||
          (uVar15 >> 0x3e < 3)) || ((uVar19 = 0, lVar23 != 0 || (uVar15 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar17 == 0) {
        uVar19 = (ulong)pbVar24 >> 0x30 & 0xff;
      }
      else {
        iVar18 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar18,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar19 = (ulong)(iVar18 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar20 == 0) {
        uVar21 = uVar15 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar18 = (int)((ulong)lVar23 >> 0x20);
      if (SBORROW4(iVar18,(int)lVar23)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar19 == (long)(iVar18 - (int)lVar23)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar17 == 2) {
        uVar19 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar19 = 0;
      if (uVar20 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar20 == 2) {
        uVar21 = *(long *)(lVar23 + 0x18) - *(long *)(lVar23 + 0x10);
        if (SBORROW8(*(long *)(lVar23 + 0x18),*(long *)(lVar23 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar19 != uVar21) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar19 < 1) goto code_r0x000100e26128;
        if (uVar17 < 2) {
          if (uVar17 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar9;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar9 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar9 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar9 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar9 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar9 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar9 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar9 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar24;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar24 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar24 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar24 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar24 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar24 >> 0x28);
            pbVar12 = (byte *)((long)register0x00000008 + (((ulong)pbVar24 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)pbVar9 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar9 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar24;
          if (pbVar9 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar9 = (byte *)0x0;
          }
          else {
            pbVar12 = pbVar9;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar12)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + ((long)unaff_x25 - (long)pbVar12);
            func_0x000107c5ec38();
            unaff_x19 = pbVar9;
            if (pbVar9 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar12) {
                pbVar12 = unaff_x23;
              }
              pbVar12 = pbVar12 + (long)pbVar9;
              goto code_r0x000100e262a4;
            }
          }
          pbVar12 = (byte *)0x0;
        }
        else {
          if (uVar17 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar12 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar25 = *(long *)(pbVar9 + 0x10);
          unaff_x24 = *(byte **)(pbVar9 + 0x18);
          func_0x000107c5ec30();
          pbVar12 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar25,(long)pbVar12)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + (lVar25 - (long)pbVar12);
          }
          unaff_x23 = unaff_x24 + -lVar25;
          if (SBORROW8((long)unaff_x24,lVar25)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar9;
          unaff_x25 = pbVar24;
          if (pbVar9 == (byte *)0x0) {
            pbVar12 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar12) {
              pbVar12 = unaff_x23;
            }
            pbVar12 = pbVar12 + (long)pbVar9;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (undefined8 *)((ulong)pbVar24 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar12,lVar23,
                            uVar15);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar15;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar19 == 0);
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
    *(undefined8 **)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
    pbVar11 = *(byte **)pbVar8;
    pbVar9 = *(byte **)(pbVar8 + 8);
    pbVar22 = *(byte **)(pbVar8 + 0x18);
    bVar26 = pbVar8[0x28];
    pbVar24 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar13 = pbVar9;
    if (bVar26 < 3) {
      if (bVar26 == 0) {
        if (pbVar12[0x28] == 0) {
          lVar23 = *(long *)pbVar12;
          uVar10 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar23,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar26 == 1) {
        if (pbVar12[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)(pbVar12 + 8);
        pbVar16 = *(byte **)(pbVar12 + 0x10);
        lVar23 = *(long *)pbVar12;
        uVar10 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar23,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar13 = pbVar24;
        if ((pbVar9 == pbVar14) && (pbVar24 == pbVar16)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar12[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)pbVar12;
        pbVar16 = *(byte **)(pbVar12 + 8);
        lVar23 = *(long *)(pbVar12 + 0x18);
        if ((pbVar11 == pbVar14) && (pbVar9 == pbVar16)) {
          if (((pbVar8[0x10] ^ pbVar12[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar22 != (byte *)0x0) {
            if (lVar23 == 0) {
              return (byte *)0x0;
            }
            func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
            func_0x000107c61174(lVar23);
            func_0x000107c61174();
            pbVar9 = pbVar22;
            func_0x000107c60118();
            func_0x000107c61170(pbVar22);
            func_0x000107c61170(lVar23);
            pbVar22 = pbVar9;
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar23 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
      }
      goto code_r0x000107c605b8;
    }
    lVar25 = *(long *)(pbVar8 + 0x20);
    if (bVar26 < 5) {
      if (bVar26 != 3) {
        if (pbVar12[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)pbVar12;
        pbVar16 = *(byte **)(pbVar12 + 8);
        if (((pbVar11 == pbVar14) && (pbVar9 == pbVar16)) &&
           (pbVar11 = pbVar24, pbVar13 = pbVar22, pbVar14 = *(byte **)(pbVar12 + 0x10),
           pbVar16 = *(byte **)(pbVar12 + 0x18),
           pbVar24 == *(byte **)(pbVar12 + 0x10) && pbVar22 == *(byte **)(pbVar12 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar12[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar12 != ((uint)pbVar11 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar16 = *(byte **)(pbVar12 + 0x10);
      lVar23 = *(long *)(pbVar12 + 0x20);
      if (pbVar24 == (byte *)0x0) {
        if (pbVar16 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar16 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)(pbVar12 + 8);
        pbVar11 = pbVar9;
        pbVar13 = pbVar24;
        if ((pbVar9 != pbVar14) || (pbVar24 != pbVar16)) goto code_r0x000107c605b8;
      }
      if (lVar25 != 0) {
        if (lVar23 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar22 == *(byte **)(pbVar12 + 0x18)) && (lVar25 == lVar23)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar22,lVar25,*(byte **)(pbVar12 + 0x18),lVar23,0);
joined_r0x000100e266a4:
        if (((ulong)pbVar22 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
    }
    if (bVar26 != 5) {
      if ((((pbVar22 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar25 == 0) && pbVar24 == (byte *)0x0) {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar25 = *(long *)(pbVar12 + 0x20);
        lVar23 = *(long *)(pbVar12 + 0x18);
        bVar26 = pbVar12[8] | (byte)lVar23;
        bVar27 = pbVar12[9] | (byte)((ulong)lVar23 >> 8);
        bVar28 = pbVar12[10] | (byte)((ulong)lVar23 >> 0x10);
        bVar29 = pbVar12[0xb] | (byte)((ulong)lVar23 >> 0x18);
        bVar30 = pbVar12[0xc] | (byte)((ulong)lVar23 >> 0x20);
        bVar31 = pbVar12[0xd] | (byte)((ulong)lVar23 >> 0x28);
        bVar32 = pbVar12[0xe] | (byte)((ulong)lVar23 >> 0x30);
        bVar33 = pbVar12[0xf] | (byte)((ulong)lVar23 >> 0x38);
        bVar34 = pbVar12[0x10] | (byte)lVar25;
        bVar35 = pbVar12[0x11] | (byte)((ulong)lVar25 >> 8);
        bVar36 = pbVar12[0x12] | (byte)((ulong)lVar25 >> 0x10);
        bVar37 = pbVar12[0x13] | (byte)((ulong)lVar25 >> 0x18);
        bVar38 = pbVar12[0x14] | (byte)((ulong)lVar25 >> 0x20);
        bVar39 = pbVar12[0x15] | (byte)((ulong)lVar25 >> 0x28);
        bVar40 = pbVar12[0x16] | (byte)((ulong)lVar25 >> 0x30);
        bVar41 = pbVar12[0x17] | (byte)((ulong)lVar25 >> 0x38);
        auVar42[1] = bVar27;
        auVar42[0] = bVar26;
        auVar42[2] = bVar28;
        auVar42[3] = bVar29;
        auVar42[4] = bVar30;
        auVar42[5] = bVar31;
        auVar42[6] = bVar32;
        auVar42[7] = bVar33;
        auVar42[8] = bVar34;
        auVar42[9] = bVar35;
        auVar42[10] = bVar36;
        auVar42[0xb] = bVar37;
        auVar42[0xc] = bVar38;
        auVar42[0xd] = bVar39;
        auVar42[0xe] = bVar40;
        auVar42[0xf] = bVar41;
        auVar3[1] = bVar27;
        auVar3[0] = bVar26;
        auVar3[2] = bVar28;
        auVar3[3] = bVar29;
        auVar3[4] = bVar30;
        auVar3[5] = bVar31;
        auVar3[6] = bVar32;
        auVar3[7] = bVar33;
        auVar3[8] = bVar34;
        auVar3[9] = bVar35;
        auVar3[10] = bVar36;
        auVar3[0xb] = bVar37;
        auVar3[0xc] = bVar38;
        auVar3[0xd] = bVar39;
        auVar3[0xe] = bVar40;
        auVar3[0xf] = bVar41;
        auVar42 = NEON_ext(auVar42,auVar3,8,1);
        if (CONCAT17(bVar33 | auVar42[7],
                     CONCAT16(bVar32 | auVar42[6],
                              CONCAT15(bVar31 | auVar42[5],
                                       CONCAT14(bVar30 | auVar42[4],
                                                CONCAT13(bVar29 | auVar42[3],
                                                         CONCAT12(bVar28 | auVar42[2],
                                                                  CONCAT11(bVar27 | auVar42[1],
                                                                           bVar26 | auVar42[0]))))))
                    ) == 0 && *(long *)pbVar12 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar22 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar24 == (byte *)0x0) &&
          lVar25 == 0)) {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar12 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar12 != 2) {
          return (byte *)0x0;
        }
      }
      lVar25 = *(long *)(pbVar12 + 0x20);
      lVar23 = *(long *)(pbVar12 + 0x18);
      bVar26 = pbVar12[8] | (byte)lVar23;
      bVar27 = pbVar12[9] | (byte)((ulong)lVar23 >> 8);
      bVar28 = pbVar12[10] | (byte)((ulong)lVar23 >> 0x10);
      bVar29 = pbVar12[0xb] | (byte)((ulong)lVar23 >> 0x18);
      bVar30 = pbVar12[0xc] | (byte)((ulong)lVar23 >> 0x20);
      bVar31 = pbVar12[0xd] | (byte)((ulong)lVar23 >> 0x28);
      bVar32 = pbVar12[0xe] | (byte)((ulong)lVar23 >> 0x30);
      bVar33 = pbVar12[0xf] | (byte)((ulong)lVar23 >> 0x38);
      bVar34 = pbVar12[0x10] | (byte)lVar25;
      bVar35 = pbVar12[0x11] | (byte)((ulong)lVar25 >> 8);
      bVar36 = pbVar12[0x12] | (byte)((ulong)lVar25 >> 0x10);
      bVar37 = pbVar12[0x13] | (byte)((ulong)lVar25 >> 0x18);
      bVar38 = pbVar12[0x14] | (byte)((ulong)lVar25 >> 0x20);
      bVar39 = pbVar12[0x15] | (byte)((ulong)lVar25 >> 0x28);
      bVar40 = pbVar12[0x16] | (byte)((ulong)lVar25 >> 0x30);
      bVar41 = pbVar12[0x17] | (byte)((ulong)lVar25 >> 0x38);
      auVar1[1] = bVar27;
      auVar1[0] = bVar26;
      auVar1[2] = bVar28;
      auVar1[3] = bVar29;
      auVar1[4] = bVar30;
      auVar1[5] = bVar31;
      auVar1[6] = bVar32;
      auVar1[7] = bVar33;
      auVar1[8] = bVar34;
      auVar1[9] = bVar35;
      auVar1[10] = bVar36;
      auVar1[0xb] = bVar37;
      auVar1[0xc] = bVar38;
      auVar1[0xd] = bVar39;
      auVar1[0xe] = bVar40;
      auVar1[0xf] = bVar41;
      auVar2[1] = bVar27;
      auVar2[0] = bVar26;
      auVar2[2] = bVar28;
      auVar2[3] = bVar29;
      auVar2[4] = bVar30;
      auVar2[5] = bVar31;
      auVar2[6] = bVar32;
      auVar2[7] = bVar33;
      auVar2[8] = bVar34;
      auVar2[9] = bVar35;
      auVar2[10] = bVar36;
      auVar2[0xb] = bVar37;
      auVar2[0xc] = bVar38;
      auVar2[0xd] = bVar39;
      auVar2[0xe] = bVar40;
      auVar2[0xf] = bVar41;
      auVar42 = NEON_ext(auVar1,auVar2,8,1);
      lVar23 = CONCAT17(bVar33 | auVar42[7],
                        CONCAT16(bVar32 | auVar42[6],
                                 CONCAT15(bVar31 | auVar42[5],
                                          CONCAT14(bVar30 | auVar42[4],
                                                   CONCAT13(bVar29 | auVar42[3],
                                                            CONCAT12(bVar28 | auVar42[2],
                                                                     CONCAT11(bVar27 | auVar42[1],
                                                                              bVar26 | auVar42[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar12[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar23 = *(long *)(pbVar12 + 8);
    uVar15 = *(ulong *)(pbVar12 + 0x10);
    lVar25 = *(long *)pbVar12;
    uVar10 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar25,uVar10);
    if (((ulong)pbVar11 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(undefined8 **)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 10280be24; end: 10280be5f;  */

void FUN_10280be24(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112ec31a8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112ec31a8,&UNK_10dae2cc8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10280be60; end: 10280bfdb;  */

void FUN_10280be60(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_50 = *unaff_x20;
  uStack_48 = unaff_x20[1];
  uStack_38 = unaff_x20[3];
  uStack_40 = unaff_x20[2];
  func_0x000107c6068c(auStack_98,0);
  func_0x000107c5fa50(auStack_98,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10280bfdc; end: 10280c023;  */

void FUN_10280bfdc(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dae2cf5,0xe,2);
  uRam0000000113804b40 = uStack_38;
  uRam0000000113804b38 = uStack_40;
  uRam0000000113804b50 = uStack_28;
  uRam0000000113804b48 = uStack_30;
  uRam0000000113804b60 = uStack_18;
  uRam0000000113804b58 = uStack_20;
  return;
}



/* Entry: 10280c024; end: 10280c0d7;  */

/* WARNING: Removing unreachable block (ram,0x00010280c0d4) */

void FUN_10280c024(undefined8 param_1,long param_2,long param_3)

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
        func_0x000101568c04();
        (*pcVar4)(unaff_x20 + 0x10,&UNK_110790c80,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 10280c0d8; end: 10280c133;  */

void FUN_10280c0d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_10280c134();
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 10280c134; end: 10280c1b7;  */

void FUN_10280c134(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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



/* Entry: 10280c1b8; end: 10280c1f3;  */

void FUN_10280c1b8(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  return;
}



/* Entry: 10280c1f4; end: 10280c223;  */

undefined1  [16] FUN_10280c1f4(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 10280c224; end: 10280c257;  */

void FUN_10280c224(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 10280c258; end: 10280c26b;  */

undefined8 FUN_10280c258(void)

{
  return 0x10280c268;
}



/* Entry: 10280c26c; end: 10280c27f;  */

void FUN_10280c26c(void)

{
  FUN_10280c024();
  return;
}



/* Entry: 10280c280; end: 10280c2b7;  */

void FUN_10280c280(void)

{
  FUN_10280c0d8();
  return;
}



/* Entry: 10280c2b8; end: 10280c2bb;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10280c2b8(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10280c2bc; end: 10280c2f3;  */

uint FUN_10280c2bc(long param_1,long param_2)

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
  func_0x000102810b5c();
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



/* Entry: 10280c2f4; end: 10280c33b;  */

uint FUN_10280c2f4(undefined8 *param_1)

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
  FUN_10280cc20(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10280c33c; end: 10280c3db;  */

/* WARNING: Possible PIC construction at 0x00010280c388: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010280c398: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010280c38c) */
/* WARNING: Removing unreachable block (ram,0x00010280c39c) */

void FUN_10280c33c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112ec30a8 != -1) {
    func_0x000107c61568(0x112ec30a8,FUN_10280bfdc);
  }
  uVar5 = uRam0000000113804b60;
  uVar4 = uRam0000000113804b58;
  uVar3 = uRam0000000113804b50;
  uVar2 = uRam0000000113804b48;
  uVar1 = uRam0000000113804b40;
  *param_1 = uRam0000000113804b38;
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



/* Entry: 10280c3dc; end: 10280c417;  */

void FUN_10280c3dc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112ec3198;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112ec3198,&UNK_10dae2cc0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10280c418; end: 10280c51b;  */

void FUN_10280c418(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10280c51c; end: 10280c5a7;  */

uint FUN_10280c51c(undefined8 *param_1,undefined8 *param_2)

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
  FUN_10280cc20(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10280c5a8; end: 10280c677;  */

void FUN_10280c5a8(undefined8 param_1,long param_2,long param_3)

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
        func_0x000101568c04();
        lVar2 = unaff_x20 + 0x10;
LAB_10280c61c:
        (*pcVar4)(lVar2,&UNK_110790c80,lVar1,param_2,param_3);
      }
      else if (lVar1 == 2) {
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x000101568c04();
        lVar2 = unaff_x20 + 0x30;
        goto LAB_10280c61c;
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 10280c678; end: 10280c6eb;  */

void FUN_10280c678(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_10280c6ec();
  if (unaff_x21 == 0) {
    FUN_10280c770();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 10280c6ec; end: 10280c76f;  */

void FUN_10280c6ec(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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



/* Entry: 10280c770; end: 10280c7f3;  */

void FUN_10280c770(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x38);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x30);
    uStack_48 = *(undefined8 *)(param_1 + 0x48);
    uStack_50 = *(undefined8 *)(param_1 + 0x40);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar1)(&uStack_60,2,&UNK_110790c80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10280c7f4; end: 10280c833;  */

void FUN_10280c7f4(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  return;
}



/* Entry: 10280c834; end: 10280c863;  */

undefined1  [16] FUN_10280c834(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 10280c864; end: 10280c897;  */

void FUN_10280c864(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 10280c898; end: 10280c8ab;  */

undefined8 FUN_10280c898(void)

{
  return 0x10280c8a8;
}



/* Entry: 10280c8ac; end: 10280c8bf;  */

void FUN_10280c8ac(void)

{
  FUN_10280c5a8();
  return;
}



/* Entry: 10280c8c0; end: 10280c8ff;  */

void FUN_10280c8c0(void)

{
  FUN_10280c678();
  return;
}



/* Entry: 10280c900; end: 10280c903;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10280c900(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10280c904; end: 10280c93b;  */

uint FUN_10280c904(long param_1,long param_2)

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
  FUN_102810b1c();
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



/* Entry: 10280c93c; end: 10280c993;  */

uint FUN_10280c93c(undefined8 *param_1)

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
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_28 = param_1[7];
  uStack_30 = param_1[6];
  uStack_18 = param_1[9];
  uStack_20 = param_1[8];
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_68 = unaff_x20[9];
  uStack_70 = unaff_x20[8];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  func_0x00010280ce7c(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 10280c994; end: 10280ca33;  */

/* WARNING: Possible PIC construction at 0x00010280c9e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010280c9f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010280c9e4) */
/* WARNING: Removing unreachable block (ram,0x00010280c9f4) */

void FUN_10280c994(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112ec30b8 != -1) {
    func_0x000107c61568(0x112ec30b8,0x10280c560);
  }
  uVar5 = uRam0000000113804b90;
  uVar4 = uRam0000000113804b88;
  uVar3 = uRam0000000113804b80;
  uVar2 = uRam0000000113804b78;
  uVar1 = uRam0000000113804b70;
  *param_1 = uRam0000000113804b68;
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



/* Entry: 10280ca34; end: 10280ca6f;  */

void FUN_10280ca34(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112ec3188;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112ec3188,&UNK_10dae2cb8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10280ca70; end: 10280cb83;  */

void FUN_10280ca70(undefined8 param_1,undefined8 param_2)

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
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_48 = unaff_x20[7];
  uStack_50 = unaff_x20[6];
  uStack_38 = unaff_x20[9];
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



/* Entry: 10280cb84; end: 10280cbdb;  */

uint FUN_10280cb84(undefined8 *param_1,undefined8 *param_2)

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
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_18 = param_2[9];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  func_0x00010280ce7c(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 10280cbdc; end: 10280cbf3;  */

void FUN_10280cbdc(void)

{
  return;
}



/* Entry: 10280cbf4; end: 10280cc1f;  */

undefined8 FUN_10280cbf4(undefined8 param_1)

{
  FUN_10280fad0(param_1,&UNK_110552780);
  return param_1;
}



/* Entry: 10280cc20; end: 10280d6df;  */

uint FUN_10280cc20(undefined8 *param_1,undefined8 *param_2)

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
      FUN_10280d6e0(&uStack_80,auStack_c0,0x112db6f40,&UNK_10d9681d0);
      FUN_10280d6e0(&uStack_a0,auStack_c0,0x112db6f40,&UNK_10d9681d0);
LAB_10280cdd0:
      FUN_102810c5c(uVar3,lVar5,uVar7,uVar9);
      uVar9 = *param_1;
      func_0x000100e25fcc(uVar9,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar9;
      goto LAB_10280cdf0;
    }
LAB_10280cd24:
    FUN_10280d6e0(&uStack_80,auStack_c0,0x112db6f40,&UNK_10d9681d0);
    FUN_10280d6e0(&uStack_a0,auStack_c0,0x112db6f40,&UNK_10d9681d0);
    FUN_102810c5c(uVar3,lVar5,uVar7,uVar9);
    uVar3 = uVar4;
    lVar5 = lVar6;
    uVar7 = uVar8;
    uVar9 = uVar10;
  }
  else {
    if (lVar6 == 0) goto LAB_10280cd24;
    if (((uVar3 == uVar4) && (lVar5 == lVar6)) ||
       (uVar2 = uVar3, func_0x000107c605b8(uVar3,lVar5,uVar4,lVar6,0), (uVar2 & 1) != 0)) {
      FUN_10280d6e0(&uStack_80,auStack_c0,0x112db6f40,&UNK_10d9681d0);
      FUN_10280d6e0(&uStack_a0,auStack_c0,0x112db6f40,&UNK_10d9681d0);
      uVar2 = uVar7;
      func_0x000100e25fcc(uVar7,uVar9,uVar8,uVar10);
      FUN_102810c5c(uVar4,lVar6,uVar8,uVar10);
      if ((uVar2 & 1) != 0) goto LAB_10280cdd0;
    }
    else {
      FUN_10280d6e0(&uStack_80,auStack_c0,0x112db6f40,&UNK_10d9681d0);
      FUN_10280d6e0(&uStack_a0,auStack_c0,0x112db6f40,&UNK_10d9681d0);
      FUN_102810c5c(uVar4,lVar6,uVar8,uVar10);
    }
  }
  FUN_102810c5c(uVar3,lVar5,uVar7,uVar9);
  uVar1 = 0;
LAB_10280cdf0:
  return uVar1 & 1;
}



/* Entry: 10280d6e0; end: 10280d727;  */

undefined8 FUN_10280d6e0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10280d728; end: 10280d80b;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010280d7b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */
/* WARNING: Removing unreachable block (ram,0x00010280d7b8) */

ulong FUN_10280d728(ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,
                   ulong param_6)

{
  undefined1 *puVar1;
  uint uVar2;
  ulong unaff_x19;
  ulong unaff_x20;
  undefined1 *puVar3;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  char in_stack_00000010;
  
  puVar1 = &stack0xffffffffffffffb0;
  puVar3 = &stack0xfffffffffffffff0;
  if (in_stack_00000010 == '\x02') {
    unaff_x30 = 0x10280d7b8;
  }
  else {
    puVar1 = (undefined1 *)register0x00000008;
    puVar3 = unaff_x29;
    if (in_stack_00000010 == '\x01') {
      func_0x00010006c00c();
      if (param_4 == 0) {
        return param_3;
      }
      func_0x000107c61434(param_4);
      param_1 = param_5;
      param_2 = param_6;
      param_4 = unaff_x19;
      param_3 = unaff_x20;
    }
    else {
      if (in_stack_00000010 != '\0') {
        return param_1;
      }
      func_0x000107c61434(param_2);
      param_1 = param_3;
      param_2 = param_4;
      param_4 = unaff_x19;
      param_3 = unaff_x20;
    }
  }
  uVar2 = (uint)(param_2 >> 0x3e);
  if (uVar2 == 1) {
    param_1 = param_2 & 0x3fffffffffffffff;
  }
  else {
    if (uVar2 != 2) {
      return param_1;
    }
    *(ulong *)(puVar1 + -0x20) = param_3;
    *(ulong *)(puVar1 + -0x18) = param_4;
    *(undefined1 **)(puVar1 + -0x10) = puVar3;
    *(undefined8 *)(puVar1 + -8) = unaff_x30;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_1);
  return param_1;
}



/* Entry: 10280d80c; end: 10280d873;  */

undefined8 FUN_10280d80c(undefined8 param_1,undefined8 param_2)

{
  FUN_10280ff9c(param_2,param_1,&UNK_110552818);
  return param_2;
}



/* Entry: 10280d874; end: 10280d997;  */

uint FUN_10280d874(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uStack_d0;
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
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  uVar4 = *param_1;
  uStack_78 = param_1[1];
  uVar5 = param_1[2];
  uVar7 = param_1[3];
  if ((char)param_1[10] == '\0') {
    if ((char)param_2[10] == '\0') {
      uVar1 = param_2[2];
      uVar2 = param_2[3];
      if (((uVar4 == *param_2 && uStack_78 == param_2[1]) ||
          (func_0x000107c605b8(uVar4,uStack_78,*param_2,param_2[1],0), (uVar4 & 1) != 0)) &&
         (func_0x000100e25fcc(uVar5,uVar7,uVar1,uVar2), (uVar5 & 1) != 0)) {
        uVar3 = 1;
        goto LAB_10280d980;
      }
    }
  }
  else {
    uStack_80 = uVar4;
    uStack_70 = uVar5;
    uStack_68 = uVar7;
    if ((char)param_1[10] == '\x01') {
      uStack_58 = param_1[5];
      uStack_60 = param_1[4];
      if ((char)param_2[10] == '\x01') {
        uStack_c8 = param_2[1];
        uStack_d0 = *param_2;
        uStack_b8 = param_2[3];
        uStack_c0 = param_2[2];
        uStack_a8 = param_2[5];
        uStack_b0 = param_2[4];
        puVar6 = &uStack_80;
        FUN_10280cc20(puVar6,&uStack_d0);
        uVar3 = (uint)puVar6;
        goto LAB_10280d980;
      }
    }
    else {
      uStack_58 = param_1[5];
      uStack_60 = param_1[4];
      uStack_48 = param_1[7];
      uStack_50 = param_1[6];
      uStack_38 = param_1[9];
      uStack_40 = param_1[8];
      if ((char)param_2[10] == '\x02') {
        uStack_a8 = param_2[5];
        uStack_b0 = param_2[4];
        uStack_98 = param_2[7];
        uStack_a0 = param_2[6];
        uStack_88 = param_2[9];
        uStack_90 = param_2[8];
        uStack_c8 = param_2[1];
        uStack_d0 = *param_2;
        uStack_b8 = param_2[3];
        uStack_c0 = param_2[2];
        puVar6 = &uStack_80;
        func_0x00010280ce7c(puVar6,&uStack_d0);
        uVar3 = (uint)puVar6;
        goto LAB_10280d980;
      }
    }
  }
  uVar3 = 0;
LAB_10280d980:
  return uVar3 & 1;
}



/* Entry: 10280d998; end: 10280da17;  */

void FUN_10280d998(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec3070 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dae2488;
  func_0x000107c61520(&DAT_10dae2488,&UNK_1105525e0);
  puRam0000000112ec3070 = puVar1;
  return;
}



/* Entry: 10280da18; end: 10280e477;  */

long * FUN_10280da18(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined1 auStack_538 [104];
  long lStack_4d0;
  long lStack_4c8;
  long lStack_4c0;
  long lStack_4b8;
  long lStack_4b0;
  long lStack_4a8;
  long lStack_4a0;
  long lStack_498;
  long lStack_490;
  long lStack_488;
  long lStack_480;
  long lStack_478;
  long lStack_470;
  long lStack_460;
  long lStack_458;
  long lStack_450;
  long lStack_448;
  long lStack_440;
  long lStack_438;
  long lStack_430;
  long lStack_428;
  long lStack_420;
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
  long lStack_330;
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
  ulong uStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
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
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  long lStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  long lStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  long lStack_180;
  ulong uStack_178;
  ulong uStack_170;
  long lStack_160;
  ulong uStack_158;
  ulong uStack_150;
  long lStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_120;
  long lStack_118;
  ulong uStack_110;
  long lStack_108;
  ulong uStack_100;
  long lStack_f8;
  ulong uStack_f0;
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
  
  if ((char)param_2[1] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010280da40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dae2450)[*param_2] * 4 + 0x10280da44))();
    return param_1;
  }
  if (*param_1 != *param_2) {
    return (long *)0x0;
  }
  lVar4 = param_1[2];
  lVar5 = param_2[2];
  if ((char)param_2[3] == '\x01') {
    if (lVar5 < 2) {
      if (lVar5 == 0) {
        if (lVar4 != 0) {
          return (long *)0x0;
        }
      }
      else if (lVar4 != 1) {
        return (long *)0x0;
      }
    }
    else if (lVar5 == 2) {
      if (lVar4 != 2) {
        return (long *)0x0;
      }
    }
    else if (lVar5 == 3) {
      if (lVar4 != 3) {
        return (long *)0x0;
      }
    }
    else if (lVar4 != 4) {
      return (long *)0x0;
    }
  }
  else if (lVar4 != lVar5) {
    return (long *)0x0;
  }
  lVar4 = param_1[7];
  uVar6 = param_1[6];
  lVar5 = param_1[9];
  uVar10 = param_1[8];
  lVar9 = param_2[7];
  uVar8 = param_2[6];
  lVar12 = param_2[9];
  uVar11 = param_2[8];
  uStack_120 = uVar8;
  lStack_118 = lVar9;
  uStack_110 = uVar11;
  lStack_108 = lVar12;
  uStack_100 = uVar6;
  lStack_f8 = lVar4;
  uStack_f0 = uVar10;
  lStack_e8 = lVar5;
  if (lVar4 == 0) {
    if (lVar9 != 0) goto LAB_10280db94;
    FUN_10280d6e0(&uStack_100,&lStack_390,0x112db6f40,&UNK_10d9681d0);
    FUN_10280d6e0(&uStack_120,&lStack_390,0x112db6f40,&UNK_10d9681d0);
LAB_10280dcc4:
    FUN_102810c5c(uVar6,lVar4,uVar10,lVar5);
    uVar10 = param_1[0xb];
    lVar4 = param_1[10];
    uVar6 = param_1[0xc];
    uVar11 = param_2[0xb];
    lVar5 = param_2[10];
    uVar8 = param_2[0xc];
    lStack_160 = lVar5;
    uStack_158 = uVar11;
    uStack_150 = uVar8;
    lStack_140 = lVar4;
    uStack_138 = uVar10;
    uStack_130 = uVar6;
    if (uVar6 >> 0x3c < 0xf) {
      if (0xe < uVar8 >> 0x3c) goto LAB_10280e004;
      if ((int)lVar4 == (int)lVar5) {
        FUN_10280d6e0(&lStack_140,&lStack_390,0x112db80f8,&UNK_10d9671e0);
        FUN_10280d6e0(&lStack_160,&lStack_390,0x112db80f8,&UNK_10d9671e0);
        uVar2 = uVar10;
        func_0x000100e25fcc(uVar10,uVar6,uVar11,uVar8);
        func_0x0001015dc5d0(lVar5,uVar11,uVar8);
        if ((uVar2 & 1) != 0) goto LAB_10280dd60;
      }
      else {
        FUN_10280d6e0(&lStack_140,&lStack_390,0x112db80f8,&UNK_10d9671e0);
        plVar3 = &lStack_160;
LAB_10280e334:
        FUN_10280d6e0(plVar3,&lStack_390,0x112db80f8,&UNK_10d9671e0);
        func_0x0001015dc5d0(lVar5,uVar11,uVar8);
      }
    }
    else {
      if (0xe < uVar8 >> 0x3c) {
        FUN_10280d6e0(&lStack_140,&lStack_390,0x112db80f8,&UNK_10d9671e0);
        FUN_10280d6e0(&lStack_160,&lStack_390,0x112db80f8,&UNK_10d9671e0);
LAB_10280dd60:
        func_0x0001015dc5d0(lVar4,uVar10,uVar6);
        uVar10 = param_1[0xe];
        lVar4 = param_1[0xd];
        uVar6 = param_1[0xf];
        uVar11 = param_2[0xe];
        lVar5 = param_2[0xd];
        uVar8 = param_2[0xf];
        lStack_1a0 = lVar5;
        uStack_198 = uVar11;
        uStack_190 = uVar8;
        lStack_180 = lVar4;
        uStack_178 = uVar10;
        uStack_170 = uVar6;
        if (uVar6 >> 0x3c < 0xf) {
          if (0xe < uVar8 >> 0x3c) goto LAB_10280e110;
          if ((int)lVar4 != (int)lVar5) {
            FUN_10280d6e0(&lStack_180,&lStack_390,0x112db80f8,&UNK_10d9671e0);
            plVar3 = &lStack_1a0;
            goto LAB_10280e334;
          }
          FUN_10280d6e0(&lStack_180,&lStack_390,0x112db80f8,&UNK_10d9671e0);
          FUN_10280d6e0(&lStack_1a0,&lStack_390,0x112db80f8,&UNK_10d9671e0);
          uVar2 = uVar10;
          func_0x000100e25fcc(uVar10,uVar6,uVar11,uVar8);
          func_0x0001015dc5d0(lVar5,uVar11,uVar8);
          if ((uVar2 & 1) == 0) goto LAB_10280e360;
        }
        else {
          if (uVar8 >> 0x3c < 0xf) {
LAB_10280e110:
            FUN_10280d6e0(&lStack_180,&lStack_390,0x112db80f8,&UNK_10d9671e0);
            plVar3 = &lStack_1a0;
            uVar2 = uVar6;
            uVar7 = uVar10;
            lVar9 = lVar4;
            uVar6 = uVar8;
            uVar10 = uVar11;
            lVar4 = lVar5;
            goto LAB_10280e1ec;
          }
          FUN_10280d6e0(&lStack_180,&lStack_390,0x112db80f8,&UNK_10d9671e0);
          FUN_10280d6e0(&lStack_1a0,&lStack_390,0x112db80f8,&UNK_10d9671e0);
        }
        func_0x0001015dc5d0(lVar4,uVar10,uVar6);
        uVar10 = param_1[0x11];
        lVar4 = param_1[0x10];
        uVar6 = param_1[0x12];
        uVar11 = param_2[0x11];
        lVar5 = param_2[0x10];
        uVar8 = param_2[0x12];
        lStack_1e0 = lVar5;
        uStack_1d8 = uVar11;
        uStack_1d0 = uVar8;
        lStack_1c0 = lVar4;
        uStack_1b8 = uVar10;
        uStack_1b0 = uVar6;
        if (uVar6 >> 0x3c < 0xf) {
          if (0xe < uVar8 >> 0x3c) goto LAB_10280e1c4;
          if ((int)lVar4 != (int)lVar5) {
            FUN_10280d6e0(&lStack_1c0,&lStack_390,0x112db80f8,&UNK_10d9671e0);
            plVar3 = &lStack_1e0;
            goto LAB_10280e334;
          }
          FUN_10280d6e0(&lStack_1c0,&lStack_390,0x112db80f8,&UNK_10d9671e0);
          FUN_10280d6e0(&lStack_1e0,&lStack_390,0x112db80f8,&UNK_10d9671e0);
          uVar2 = uVar10;
          func_0x000100e25fcc(uVar10,uVar6,uVar11,uVar8);
          func_0x0001015dc5d0(lVar5,uVar11,uVar8);
          if ((uVar2 & 1) == 0) goto LAB_10280e360;
        }
        else {
          if (uVar8 >> 0x3c < 0xf) {
LAB_10280e1c4:
            FUN_10280d6e0(&lStack_1c0,&lStack_390,0x112db80f8,&UNK_10d9671e0);
            plVar3 = &lStack_1e0;
            uVar2 = uVar6;
            uVar7 = uVar10;
            lVar9 = lVar4;
            uVar6 = uVar8;
            uVar10 = uVar11;
            lVar4 = lVar5;
            goto LAB_10280e1ec;
          }
          FUN_10280d6e0(&lStack_1c0,&lStack_390,0x112db80f8,&UNK_10d9671e0);
          FUN_10280d6e0(&lStack_1e0,&lStack_390,0x112db80f8,&UNK_10d9671e0);
        }
        func_0x0001015dc5d0(lVar4,uVar10,uVar6);
        lStack_218 = param_1[0x1a];
        lStack_220 = param_1[0x19];
        lStack_208 = param_1[0x1c];
        lStack_210 = param_1[0x1b];
        lStack_1f8 = param_1[0x1e];
        lStack_200 = param_1[0x1d];
        lStack_1f0 = param_1[0x1f];
        lStack_248 = param_1[0x14];
        lStack_250 = param_1[0x13];
        lStack_238 = param_1[0x16];
        lStack_240 = param_1[0x15];
        lStack_228 = param_1[0x18];
        lStack_230 = param_1[0x17];
        lStack_2b8 = param_2[0x14];
        lStack_2c0 = param_2[0x13];
        lStack_2a8 = param_2[0x16];
        lStack_2b0 = param_2[0x15];
        lStack_298 = param_2[0x18];
        lStack_2a0 = param_2[0x17];
        lStack_288 = param_2[0x1a];
        lStack_290 = param_2[0x19];
        lStack_278 = param_2[0x1c];
        lStack_280 = param_2[0x1b];
        lStack_268 = param_2[0x1e];
        lStack_270 = param_2[0x1d];
        lStack_260 = param_2[0x1f];
        lStack_358 = param_1[0x1a];
        lStack_360 = param_1[0x19];
        lStack_348 = param_1[0x1c];
        lStack_350 = param_1[0x1b];
        lStack_338 = param_1[0x1e];
        lStack_340 = param_1[0x1d];
        lStack_330 = param_1[0x1f];
        lStack_388 = param_1[0x14];
        lStack_390 = param_1[0x13];
        lStack_378 = param_1[0x16];
        lStack_380 = param_1[0x15];
        lStack_368 = param_1[0x18];
        lStack_370 = param_1[0x17];
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
        lStack_3a0 = param_2[0x1e];
        uStack_3a8 = param_2[0x1d];
        lStack_398 = param_2[0x1f];
        lStack_328 = lStack_3f8;
        lStack_320 = lStack_3f0;
        lStack_318 = lStack_3e8;
        lStack_310 = lStack_3e0;
        lStack_308 = lStack_3d8;
        lStack_300 = lStack_3d0;
        lStack_2f8 = lStack_3c8;
        lStack_2f0 = lStack_3c0;
        lStack_2e8 = lStack_3b8;
        lStack_2e0 = lStack_3b0;
        uStack_2d8 = uStack_3a8;
        lStack_2d0 = lStack_3a0;
        lStack_2c8 = lStack_398;
        if ((char)lStack_340 == -2) {
          if ((uStack_3a8 & 0xff) == 0xfe) {
            lStack_428 = param_1[0x1a];
            lStack_430 = param_1[0x19];
            lStack_418 = param_1[0x1c];
            lStack_420 = param_1[0x1b];
            lStack_408 = param_1[0x1e];
            lStack_410 = param_1[0x1d];
            lStack_400 = param_1[0x1f];
            lStack_458 = param_1[0x14];
            lStack_460 = param_1[0x13];
            lStack_448 = param_1[0x16];
            lStack_450 = param_1[0x15];
            lStack_438 = param_1[0x18];
            lStack_440 = param_1[0x17];
            FUN_10280d6e0(&lStack_250,&lStack_e0,0x112ec3040,&UNK_10dae2470);
            FUN_10280d6e0(&lStack_2c0,&lStack_e0,0x112ec3040,&UNK_10dae2470);
            FUN_102810ce4(&lStack_460,0x112ec3040,&UNK_10dae2470);
LAB_10280e468:
            lVar4 = param_1[4];
            func_0x000100e25fcc(lVar4,param_1[5],param_2[4],param_2[5]);
            uVar1 = (uint)lVar4;
            goto LAB_10280e368;
          }
        }
        else if ((uStack_3a8 & 0xff) != 0xfe) {
          lStack_498 = param_2[0x1a];
          lStack_4a0 = param_2[0x19];
          lStack_488 = param_2[0x1c];
          lStack_490 = param_2[0x1b];
          lStack_478 = param_2[0x1e];
          lStack_480 = param_2[0x1d];
          lStack_470 = param_2[0x1f];
          lStack_4c8 = param_2[0x14];
          lStack_4d0 = param_2[0x13];
          lStack_4b8 = param_2[0x16];
          lStack_4c0 = param_2[0x15];
          lStack_4a8 = param_2[0x18];
          lStack_4b0 = param_2[0x17];
          lStack_a8 = param_1[0x1a];
          lStack_b0 = param_1[0x19];
          lStack_98 = param_1[0x1c];
          lStack_a0 = param_1[0x1b];
          lStack_88 = param_1[0x1e];
          lStack_90 = param_1[0x1d];
          lStack_80 = param_1[0x1f];
          lStack_d8 = param_1[0x14];
          lStack_e0 = param_1[0x13];
          lStack_c8 = param_1[0x16];
          lStack_d0 = param_1[0x15];
          lStack_b8 = param_1[0x18];
          lStack_c0 = param_1[0x17];
          lStack_460 = lStack_4d0;
          lStack_458 = lStack_4c8;
          lStack_450 = lStack_4c0;
          lStack_448 = lStack_4b8;
          lStack_440 = lStack_4b0;
          lStack_438 = lStack_4a8;
          lStack_430 = lStack_4a0;
          lStack_428 = lStack_498;
          lStack_420 = lStack_490;
          lStack_418 = lStack_488;
          lStack_410 = lStack_480;
          lStack_408 = lStack_478;
          lStack_400 = lStack_470;
          FUN_10280d6e0(&lStack_250,auStack_538,0x112ec3040,&UNK_10dae2470);
          FUN_10280d6e0(&lStack_2c0,auStack_538,0x112ec3040,&UNK_10dae2470);
          plVar3 = &lStack_e0;
          func_0x00010280d254(plVar3,&lStack_460);
          FUN_102810ce4(&lStack_4d0,0x112ec3040,&UNK_10dae2470);
          FUN_102810ce4(&lStack_390,0x112ec3040,&UNK_10dae2470);
          if (((ulong)plVar3 & 1) != 0) goto LAB_10280e468;
          goto LAB_10280e364;
        }
        lStack_460 = lStack_390;
        lStack_458 = lStack_388;
        lStack_450 = lStack_380;
        lStack_448 = lStack_378;
        lStack_440 = lStack_370;
        lStack_438 = lStack_368;
        lStack_430 = lStack_360;
        lStack_428 = lStack_358;
        lStack_420 = lStack_350;
        lStack_418 = lStack_348;
        lStack_410 = lStack_340;
        lStack_408 = lStack_338;
        lStack_400 = lStack_330;
        FUN_10280d6e0(&lStack_250,&lStack_e0,0x112ec3040,&UNK_10dae2470);
        FUN_10280d6e0(&lStack_2c0,&lStack_e0,0x112ec3040,&UNK_10dae2470);
        FUN_102810ce4(&lStack_460,0x112ec3048,&UNK_10dae2478);
        goto LAB_10280e364;
      }
LAB_10280e004:
      FUN_10280d6e0(&lStack_140,&lStack_390,0x112db80f8,&UNK_10d9671e0);
      plVar3 = &lStack_160;
      uVar2 = uVar6;
      uVar7 = uVar10;
      lVar9 = lVar4;
      uVar6 = uVar8;
      uVar10 = uVar11;
      lVar4 = lVar5;
LAB_10280e1ec:
      FUN_10280d6e0(plVar3,&lStack_390,0x112db80f8,&UNK_10d9671e0);
      func_0x0001015dc5d0(lVar9,uVar7,uVar2);
    }
LAB_10280e360:
    func_0x0001015dc5d0(lVar4,uVar10,uVar6);
  }
  else {
    if (lVar9 == 0) {
LAB_10280db94:
      FUN_10280d6e0(&uStack_100,&lStack_390,0x112db6f40,&UNK_10d9681d0);
      FUN_10280d6e0(&uStack_120,&lStack_390,0x112db6f40,&UNK_10d9681d0);
      FUN_102810c5c(uVar6,lVar4,uVar10,lVar5);
      uVar6 = uVar8;
      lVar4 = lVar9;
      uVar10 = uVar11;
      lVar5 = lVar12;
    }
    else if (((uVar6 == uVar8) && (lVar4 == lVar9)) ||
            (uVar2 = uVar6, func_0x000107c605b8(uVar6,lVar4,uVar8,lVar9,0), (uVar2 & 1) != 0)) {
      FUN_10280d6e0(&uStack_100,&lStack_390,0x112db6f40,&UNK_10d9681d0);
      FUN_10280d6e0(&uStack_120,&lStack_390,0x112db6f40,&UNK_10d9681d0);
      uVar2 = uVar10;
      func_0x000100e25fcc(uVar10,lVar5,uVar11,lVar12);
      FUN_102810c5c(uVar8,lVar9,uVar11,lVar12);
      if ((uVar2 & 1) != 0) goto LAB_10280dcc4;
    }
    else {
      FUN_10280d6e0(&uStack_100,&lStack_390,0x112db6f40,&UNK_10d9681d0);
      FUN_10280d6e0(&uStack_120,&lStack_390,0x112db6f40,&UNK_10d9681d0);
      FUN_102810c5c(uVar8,lVar9,uVar11,lVar12);
    }
    FUN_102810c5c(uVar6,lVar4,uVar10,lVar5);
  }
LAB_10280e364:
  uVar1 = 0;
LAB_10280e368:
  return (long *)(ulong)(uVar1 & 1);
}



/* Entry: 10280e478; end: 10280e5b7;  */

void FUN_10280e478(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec3080 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae2740;
  func_0x000107c61520(&UNK_10dae2740,&UNK_1105526e8);
  puRam0000000112ec3080 = puVar1;
  return;
}



/* Entry: 10280e5b8; end: 10280e5cb;  */

void FUN_10280e5b8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10280e5cc();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10280e60c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10280e5cc; end: 10280e677;  */

void FUN_10280e5cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec30c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae2520;
  func_0x000107c61520(&UNK_10dae2520,&UNK_1105525e0);
  puRam0000000112ec30c8 = puVar1;
  return;
}



/* Entry: 10280e678; end: 10280e67b;  */

void FUN_10280e678(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec30e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae2560;
  func_0x000107c61520(&UNK_10dae2560,&UNK_1105525e0);
  puRam0000000112ec30e8 = puVar1;
  return;
}



/* Entry: 10280e67c; end: 10280e6bb;  */

void FUN_10280e67c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec30e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae2560;
  func_0x000107c61520(&UNK_10dae2560,&UNK_1105525e0);
  puRam0000000112ec30e8 = puVar1;
  return;
}



/* Entry: 10280e6bc; end: 10280e6cf;  */

void FUN_10280e6bc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10280e6d0();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10280e710)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10280e6d0; end: 10280e77b;  */

void FUN_10280e6d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec30f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae2620;
  func_0x000107c61520(&UNK_10dae2620,&UNK_110552670);
  puRam0000000112ec30f0 = puVar1;
  return;
}



/* Entry: 10280e77c; end: 10280e7bf;  */

void FUN_10280e77c(long *param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10280e7c0; end: 10280e7c3;  */

void FUN_10280e7c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec3110 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae2660;
  func_0x000107c61520(&UNK_10dae2660,&UNK_110552670);
  puRam0000000112ec3110 = puVar1;
  return;
}



/* Entry: 10280e7c4; end: 10280e803;  */

void FUN_10280e7c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec3110 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae2660;
  func_0x000107c61520(&UNK_10dae2660,&UNK_110552670);
  puRam0000000112ec3110 = puVar1;
  return;
}



/* Entry: 10280e804; end: 10280e827;  */

void FUN_10280e804(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10280e828();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10280e828; end: 10280e867;  */

void FUN_10280e828(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec3118 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae2718;
  func_0x000107c61520(&UNK_10dae2718,&UNK_1105526e8);
  puRam0000000112ec3118 = puVar1;
  return;
}



/* Entry: 10280e868; end: 10280e87f;  */

void FUN_10280e868(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10280e478();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1027feae0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10280e880; end: 10280e8bf;  */

void FUN_10280e880(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec3120 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae2780;
  func_0x000107c61520(&UNK_10dae2780,&UNK_1105526e8);
  puRam0000000112ec3120 = puVar1;
  return;
}



/* Entry: 10280e8c0; end: 10280e8e3;  */

void FUN_10280e8c0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10280e8e4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10280e8e4; end: 10280e923;  */

void FUN_10280e8e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec3128 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae27f0;
  func_0x000107c61520(&UNK_10dae27f0,&UNK_110552780);
  puRam0000000112ec3128 = puVar1;
  return;
}



/* Entry: 10280e924; end: 10280e937;  */

void FUN_10280e924(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x10280e4b8)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_10280e938();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10280e938; end: 10280e977;  */

void FUN_10280e938(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec3130 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dae27a8;
  func_0x000107c61520(&DAT_10dae27a8,&UNK_110552780);
  puRam0000000112ec3130 = puVar1;
  return;
}



/* Entry: 10280e978; end: 10280e97b;  */

void FUN_10280e978(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec3138 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae2858;
  func_0x000107c61520(&UNK_10dae2858,&UNK_110552780);
  puRam0000000112ec3138 = puVar1;
  return;
}



/* Entry: 10280e97c; end: 10280e9bb;  */

void FUN_10280e97c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec3138 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae2858;
  func_0x000107c61520(&UNK_10dae2858,&UNK_110552780);
  puRam0000000112ec3138 = puVar1;
  return;
}



/* Entry: 10280e9bc; end: 10280e9df;  */

void FUN_10280e9bc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10280e9e0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10280e9e0; end: 10280ea1f;  */

void FUN_10280e9e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec3140 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae28c8;
  func_0x000107c61520(&UNK_10dae28c8,&UNK_110552890);
  puRam0000000112ec3140 = puVar1;
  return;
}



/* Entry: 10280ea20; end: 10280ea33;  */

void FUN_10280ea20(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x10280e4f8)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_10280ea34();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10280ea34; end: 10280ea73;  */

void FUN_10280ea34(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec3148 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dae2880;
  func_0x000107c61520(&DAT_10dae2880,&UNK_110552890);
  puRam0000000112ec3148 = puVar1;
  return;
}



/* Entry: 10280ea74; end: 10280ea77;  */

void FUN_10280ea74(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec3150 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae2930;
  func_0x000107c61520(&UNK_10dae2930,&UNK_110552890);
  puRam0000000112ec3150 = puVar1;
  return;
}



/* Entry: 10280ea78; end: 10280eab7;  */

void FUN_10280ea78(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec3150 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae2930;
  func_0x000107c61520(&UNK_10dae2930,&UNK_110552890);
  puRam0000000112ec3150 = puVar1;
  return;
}



/* Entry: 10280eab8; end: 10280eadb;  */

void FUN_10280eab8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10280eadc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10280eadc; end: 10280eb1b;  */

void FUN_10280eadc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec3158 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae29a0;
  func_0x000107c61520(&UNK_10dae29a0,&UNK_110552910);
  puRam0000000112ec3158 = puVar1;
  return;
}



/* Entry: 10280eb1c; end: 10280eb2f;  */

void FUN_10280eb1c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x10280e538)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_10280eb30();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10280eb30; end: 10280eb6f;  */

void FUN_10280eb30(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec3160 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dae2958;
  func_0x000107c61520(&DAT_10dae2958,&UNK_110552910);
  puRam0000000112ec3160 = puVar1;
  return;
}



/* Entry: 10280eb70; end: 10280eb73;  */

void FUN_10280eb70(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec3168 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae2a08;
  func_0x000107c61520(&UNK_10dae2a08,&UNK_110552910);
  puRam0000000112ec3168 = puVar1;
  return;
}



/* Entry: 10280eb74; end: 10280ebb3;  */

void FUN_10280eb74(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec3168 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae2a08;
  func_0x000107c61520(&UNK_10dae2a08,&UNK_110552910);
  puRam0000000112ec3168 = puVar1;
  return;
}



/* Entry: 10280ebb4; end: 10280ebd7;  */

void FUN_10280ebb4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10280ebd8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10280ebd8; end: 10280ec17;  */

void FUN_10280ebd8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec3170 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae2a78;
  func_0x000107c61520(&UNK_10dae2a78,&UNK_110552990);
  puRam0000000112ec3170 = puVar1;
  return;
}



/* Entry: 10280ec18; end: 10280ec2b;  */

void FUN_10280ec18(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x10280e578)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_10280ec5c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}


