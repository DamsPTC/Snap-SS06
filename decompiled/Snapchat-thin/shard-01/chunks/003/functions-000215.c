/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100ea1b0c; end: 100ea1b57;  */

undefined4 * FUN_100ea1b0c(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 4);
  uVar2 = *(undefined8 *)(param_1 + 4);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 6);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 6) = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 100ea1b58; end: 100ea1c0b;  */

int FUN_100ea1b58(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100ea1c0c; end: 100ea1c8b;  */

void FUN_100ea1c0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d466c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d90d764;
  func_0x000107c61520(&DAT_10d90d764,&UNK_110360348);
  puRam0000000112d466c0 = puVar1;
  return;
}



/* Entry: 100ea1c8c; end: 100ea1dd3;  */

void FUN_100ea1c8c(ulong *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = (ulong)(param_2 - 1);
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 100ea1dd4; end: 100ea1e13;  */

void FUN_100ea1dd4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112d46720;
  func_0x0001000285a8(0x112d46720,&UNK_10d90daf0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 100ea1e14; end: 100ea1e4f;  */

void FUN_100ea1e14(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 < 2;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 100ea1e50; end: 100ea1f2f;  */

void FUN_100ea1e50(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar3 = *unaff_x20;
  uVar2 = unaff_x20[1];
  func_0x000107c6068c(auStack_68,0);
  uVar1 = (ulong)(uVar3 != 0);
  if ((char)uVar2 != '\x01') {
    uVar1 = uVar3;
  }
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 100ea1f30; end: 100ea1f6b;  */

bool FUN_100ea1f30(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)(*param_1 != 0);
  if ((char)param_1[1] != '\x01') {
    uVar1 = *param_1;
  }
  uVar2 = (ulong)(*param_2 != 0);
  if ((char)param_2[1] != '\x01') {
    uVar2 = *param_2;
  }
  return uVar1 == uVar2;
}



/* Entry: 100ea1f6c; end: 100ea1fb3;  */

void FUN_100ea1f6c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d90dd80,0x17,2);
  uRam00000001137feff8 = uStack_38;
  uRam00000001137feff0 = uStack_40;
  uRam00000001137ff008 = uStack_28;
  uRam00000001137ff000 = uStack_30;
  uRam00000001137ff018 = uStack_18;
  uRam00000001137ff010 = uStack_20;
  return;
}



/* Entry: 100ea1fb4; end: 100ea2087;  */

/* WARNING: Removing unreachable block (ram,0x000100ea2084) */

void FUN_100ea1fb4(undefined8 param_1,long param_2,long param_3)

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
        pcVar4 = *(code **)(param_3 + 0x180);
        FUN_100ea2154();
        (*pcVar4)();
      }
      else if (lVar1 == 2) {
        (**(code **)(param_3 + 0x150))(unaff_x20 + 0x10,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 100ea2088; end: 100ea2153;  */

void FUN_100ea2088(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar4;
  long lStack_50;
  undefined1 uStack_48;
  
  if (*unaff_x20 != 0) {
    uStack_48 = (undefined1)unaff_x20[1];
    pcVar4 = *(code **)(param_3 + 0x80);
    uVar3 = param_1;
    lStack_50 = *unaff_x20;
    FUN_100ea2154();
    (*pcVar4)(&lStack_50,1,&UNK_1103606b0,uVar3,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  uVar2 = unaff_x20[3];
  uVar1 = unaff_x20[2] & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,2,param_2,param_3), unaff_x21 == 0)) {
    func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
  }
  return;
}



/* Entry: 100ea2154; end: 100ea2193;  */

void FUN_100ea2154(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d46730 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d90daf8;
  func_0x000107c61520(&DAT_10d90daf8,&UNK_1103606b0);
  puRam0000000112d46730 = puVar1;
  return;
}



/* Entry: 100ea2194; end: 100ea21db;  */

void FUN_100ea2194(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 100ea21dc; end: 100ea220b;  */

undefined1  [16] FUN_100ea21dc(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 100ea220c; end: 100ea223f;  */

void FUN_100ea220c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 100ea2240; end: 100ea2253;  */

undefined1  [16] FUN_100ea2240(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x100ea2250;
  return auVar1;
}



/* Entry: 100ea2254; end: 100ea227b;  */

void FUN_100ea2254(void)

{
  FUN_100ea1fb4();
  return;
}



/* Entry: 100ea227c; end: 100ea227f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_100ea227c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 100ea2280; end: 100ea22b7;  */

uint FUN_100ea2280(long param_1,long param_2)

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
  FUN_100ea2bf4();
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



/* Entry: 100ea22b8; end: 100ea22ff;  */

uint FUN_100ea22b8(undefined8 *param_1)

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
  FUN_100ea262c(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 100ea2300; end: 100ea239f;  */

/* WARNING: Possible PIC construction at 0x000100ea234c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ea235c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ea2350) */
/* WARNING: Removing unreachable block (ram,0x000100ea2360) */

void FUN_100ea2300(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112d46728 != -1) {
    func_0x000107c61568(0x112d46728,FUN_100ea1f6c);
  }
  uVar5 = uRam00000001137ff018;
  uVar4 = uRam00000001137ff010;
  uVar3 = uRam00000001137ff008;
  uVar2 = uRam00000001137ff000;
  uVar1 = uRam00000001137feff8;
  *param_1 = uRam00000001137feff0;
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



/* Entry: 100ea23a0; end: 100ea23db;  */

void FUN_100ea23a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112d46780;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112d46780,&UNK_10d90dd40);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 100ea23dc; end: 100ea24ff;  */

void FUN_100ea23dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_60 = *unaff_x20;
  uStack_58 = *(undefined1 *)(unaff_x20 + 1);
  uStack_50 = unaff_x20[2];
  uStack_48 = unaff_x20[3];
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 100ea2500; end: 100ea258b;  */

uint FUN_100ea2500(undefined8 *param_1,undefined8 *param_2)

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
  FUN_100ea262c(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 100ea258c; end: 100ea262b;  */

/* WARNING: Possible PIC construction at 0x000100ea25d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ea25e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ea25dc) */
/* WARNING: Removing unreachable block (ram,0x000100ea25ec) */

void FUN_100ea258c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112d46740 != -1) {
    func_0x000107c61568(0x112d46740,0x100ea2544);
  }
  uVar5 = uRam00000001137ff048;
  uVar4 = uRam00000001137ff040;
  uVar3 = uRam00000001137ff038;
  uVar2 = uRam00000001137ff030;
  uVar1 = uRam00000001137ff028;
  *param_1 = uRam00000001137ff020;
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



/* Entry: 100ea262c; end: 100ea26df;  */

/* WARNING: Possible PIC construction at 0x000100ea26a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100ea26ac) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_100ea262c(ulong *param_1,ulong *param_2)

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
  ulong uVar15;
  byte *pbVar16;
  ulong uVar17;
  byte *pbVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  byte *pbVar24;
  byte *unaff_x19;
  long lVar25;
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
  
  uVar15 = (ulong)(*param_1 != 0);
  if ((char)param_1[1] != '\x01') {
    uVar15 = *param_1;
  }
  if ((char)param_2[1] == '\x01') {
    if (*param_2 == 0) {
      if (uVar15 == 0) goto LAB_100ea2674;
    }
    else if (uVar15 == 1) {
LAB_100ea2674:
      pbVar12 = (byte *)param_1[2];
      pbVar14 = (byte *)param_1[3];
      pbVar16 = (byte *)param_2[2];
      pbVar18 = (byte *)param_2[3];
      if ((byte *)param_1[2] != (byte *)param_2[2] || (byte *)param_1[3] != (byte *)param_2[3]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
        )(pbVar12,pbVar14,pbVar16,pbVar18,0);
        return pbVar12;
      }
      pbVar10 = (byte *)param_1[4];
      pbVar26 = (byte *)param_1[5];
      uVar15 = param_2[4];
      uVar17 = param_2[5];
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
        uVar19 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar17 >> 0x20);
        uVar22 = uVar5 >> 0x1e;
        iVar8 = (int)pbVar10;
        pbVar13 = pbVar26;
        if ((ulong)pbVar26 >> 0x3e == 3) {
          uVar21 = 0;
          if ((((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
              (uVar17 >> 0x3e < 3)) || ((uVar21 = 0, uVar15 != 0 || (uVar17 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
LAB_100e26128:
          pbVar9 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar19 == 0) {
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
          if (uVar22 == 0) {
            uVar23 = uVar17 >> 0x30 & 0xff;
            goto LAB_100e2608c;
          }
          iVar20 = (int)(uVar15 >> 0x20);
          if (SBORROW4(iVar20,(int)uVar15)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar21 == (long)(iVar20 - (int)uVar15)) goto LAB_100e26094;
LAB_100e26154:
          pbVar9 = (byte *)0x0;
        }
        else {
          if (uVar19 == 2) {
            uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
            if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar6)();
            }
            goto joined_r0x000100e26170;
          }
          uVar21 = 0;
          if (uVar22 < 2) goto LAB_100e26084;
LAB_100e26050:
          if (uVar22 == 2) {
            uVar23 = *(long *)(uVar15 + 0x18) - *(long *)(uVar15 + 0x10);
            if (SBORROW8(*(long *)(uVar15 + 0x18),*(long *)(uVar15 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar6)();
            }
LAB_100e2608c:
            if (uVar21 != uVar23) goto LAB_100e26154;
LAB_100e26094:
            if ((long)uVar21 < 1) goto LAB_100e26128;
            if (uVar19 < 2) {
              if (uVar19 == 0) {
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
              if (uVar19 != 2) {
                *(undefined8 *)(puVar7 + -0x6a) = 0;
                *(undefined8 *)(puVar7 + -0x70) = 0;
                pbVar13 = puVar7 + -0x70;
                goto LAB_100e26260;
              }
              lVar25 = *(long *)(pbVar10 + 0x10);
              unaff_x24 = *(byte **)(pbVar10 + 0x18);
              func_0x000107c5ec30();
              pbVar13 = pbVar10;
              if (pbVar10 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar25,(long)pbVar13)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + (lVar25 - (long)pbVar13);
              }
              unaff_x23 = unaff_x24 + -lVar25;
              if (SBORROW8((long)unaff_x24,lVar25)) {
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
            FUN_100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,uVar15,uVar17);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
            unaff_x22 = uVar17;
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
        pbVar24 = *(byte **)(pbVar9 + 0x18);
        bVar28 = pbVar9[0x28];
        pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
        pbVar14 = pbVar10;
        if (bVar28 < 3) {
          if (bVar28 == 0) {
            if (pbVar13[0x28] == 0) {
              lVar25 = *(long *)pbVar13;
              uVar11 = 0;
              FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar25,uVar11);
              return (byte *)(ulong)((uint)pbVar12 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar28 == 1) {
            if (pbVar13[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)(pbVar13 + 8);
            pbVar18 = *(byte **)(pbVar13 + 0x10);
            lVar25 = *(long *)pbVar13;
            uVar11 = 0;
            FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,lVar25,uVar11);
            if (((ulong)pbVar12 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar12 = pbVar10;
            pbVar14 = pbVar26;
            if ((pbVar10 == pbVar16) && (pbVar26 == pbVar18)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar13[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)pbVar13;
            pbVar18 = *(byte **)(pbVar13 + 8);
            lVar25 = *(long *)(pbVar13 + 0x18);
            if ((pbVar12 == pbVar16) && (pbVar10 == pbVar18)) {
              if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar24 != (byte *)0x0) {
                if (lVar25 == 0) {
                  return (byte *)0x0;
                }
                FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                func_0x000107c61174(lVar25);
                func_0x000107c61174();
                pbVar12 = pbVar24;
                func_0x000107c60118();
                func_0x000107c61170(pbVar24);
                func_0x000107c61170(lVar25);
                pbVar24 = pbVar12;
                goto joined_r0x000100e266a4;
              }
joined_r0x000100e26620:
              if (lVar25 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
          }
          goto code_r0x000107c605b8;
        }
        lVar27 = *(long *)(pbVar9 + 0x20);
        if (bVar28 < 5) {
          if (bVar28 != 3) {
            if (pbVar13[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)pbVar13;
            pbVar18 = *(byte **)(pbVar13 + 8);
            if (((pbVar12 == pbVar16) && (pbVar10 == pbVar18)) &&
               (pbVar12 = pbVar26, pbVar14 = pbVar24, pbVar16 = *(byte **)(pbVar13 + 0x10),
               pbVar18 = *(byte **)(pbVar13 + 0x18),
               pbVar26 == *(byte **)(pbVar13 + 0x10) && pbVar24 == *(byte **)(pbVar13 + 0x18))) {
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
          pbVar18 = *(byte **)(pbVar13 + 0x10);
          lVar25 = *(long *)(pbVar13 + 0x20);
          if (pbVar26 == (byte *)0x0) {
            if (pbVar18 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar18 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)(pbVar13 + 8);
            pbVar12 = pbVar10;
            pbVar14 = pbVar26;
            if ((pbVar10 != pbVar16) || (pbVar26 != pbVar18)) goto code_r0x000107c605b8;
          }
          if (lVar27 != 0) {
            if (lVar25 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar24 == *(byte **)(pbVar13 + 0x18)) && (lVar27 == lVar25)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar24,lVar27,*(byte **)(pbVar13 + 0x18),lVar25,0);
joined_r0x000100e266a4:
            if (((ulong)pbVar24 & 1) == 0) {
              return (byte *)0x0;
            }
            return (byte *)0x1;
          }
          goto joined_r0x000100e26620;
        }
        if (bVar28 != 5) {
          if ((((pbVar24 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
              lVar27 == 0) && pbVar26 == (byte *)0x0) {
            if (pbVar13[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar27 = *(long *)(pbVar13 + 0x20);
            lVar25 = *(long *)(pbVar13 + 0x18);
            bVar28 = pbVar13[8] | (byte)lVar25;
            bVar29 = pbVar13[9] | (byte)((ulong)lVar25 >> 8);
            bVar30 = pbVar13[10] | (byte)((ulong)lVar25 >> 0x10);
            bVar31 = pbVar13[0xb] | (byte)((ulong)lVar25 >> 0x18);
            bVar32 = pbVar13[0xc] | (byte)((ulong)lVar25 >> 0x20);
            bVar33 = pbVar13[0xd] | (byte)((ulong)lVar25 >> 0x28);
            bVar34 = pbVar13[0xe] | (byte)((ulong)lVar25 >> 0x30);
            bVar35 = pbVar13[0xf] | (byte)((ulong)lVar25 >> 0x38);
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
          if ((pbVar12 == (byte *)0x1) &&
             (((pbVar24 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
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
          lVar25 = *(long *)(pbVar13 + 0x18);
          bVar28 = pbVar13[8] | (byte)lVar25;
          bVar29 = pbVar13[9] | (byte)((ulong)lVar25 >> 8);
          bVar30 = pbVar13[10] | (byte)((ulong)lVar25 >> 0x10);
          bVar31 = pbVar13[0xb] | (byte)((ulong)lVar25 >> 0x18);
          bVar32 = pbVar13[0xc] | (byte)((ulong)lVar25 >> 0x20);
          bVar33 = pbVar13[0xd] | (byte)((ulong)lVar25 >> 0x28);
          bVar34 = pbVar13[0xe] | (byte)((ulong)lVar25 >> 0x30);
          bVar35 = pbVar13[0xf] | (byte)((ulong)lVar25 >> 0x38);
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
          lVar25 = CONCAT17(bVar35 | auVar44[7],
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
        uVar15 = *(ulong *)(pbVar13 + 8);
        uVar17 = *(ulong *)(pbVar13 + 0x10);
        lVar25 = *(long *)pbVar13;
        uVar11 = 0;
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar25,uVar11);
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
  }
  else if (uVar15 == *param_2) goto LAB_100ea2674;
  return (byte *)0x0;
}



/* Entry: 100ea26e0; end: 100ea271f;  */

void FUN_100ea26e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d46738 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90dc68;
  func_0x000107c61520(&UNK_10d90dc68,&UNK_110360610);
  puRam0000000112d46738 = puVar1;
  return;
}



/* Entry: 100ea2720; end: 100ea2733;  */

void FUN_100ea2720(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100ea2734();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x100ea2774)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 100ea2734; end: 100ea27b3;  */

void FUN_100ea2734(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d46748 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90db90;
  func_0x000107c61520(&UNK_10d90db90,&UNK_1103606b0);
  puRam0000000112d46748 = puVar1;
  return;
}



/* Entry: 100ea27b4; end: 100ea27b7;  */

void FUN_100ea27b4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d46758 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d46760;
  func_0x00010002969c(0x112d46760,&UNK_10d90db18);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112d46758 = puVar2;
  return;
}



/* Entry: 100ea27b8; end: 100ea2807;  */

void FUN_100ea27b8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d46758 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d46760;
  func_0x00010002969c(0x112d46760,&UNK_10d90db18);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112d46758 = puVar2;
  return;
}



/* Entry: 100ea2808; end: 100ea280b;  */

void FUN_100ea2808(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d46768 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90dbd0;
  func_0x000107c61520(&UNK_10d90dbd0,&UNK_1103606b0);
  puRam0000000112d46768 = puVar1;
  return;
}



/* Entry: 100ea280c; end: 100ea284b;  */

void FUN_100ea280c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d46768 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90dbd0;
  func_0x000107c61520(&UNK_10d90dbd0,&UNK_1103606b0);
  puRam0000000112d46768 = puVar1;
  return;
}



/* Entry: 100ea284c; end: 100ea286f;  */

void FUN_100ea284c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100ea2870();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 100ea2870; end: 100ea28af;  */

void FUN_100ea2870(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d46770 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90dc40;
  func_0x000107c61520(&UNK_10d90dc40,&UNK_110360610);
  puRam0000000112d46770 = puVar1;
  return;
}



/* Entry: 100ea28b0; end: 100ea28c3;  */

void FUN_100ea28b0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100ea26e0();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x100e9e5bc)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 100ea28c4; end: 100ea28f3;  */

void FUN_100ea28c4(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 100ea28f4; end: 100ea28f7;  */

void FUN_100ea28f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d46778 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90dca8;
  func_0x000107c61520(&UNK_10d90dca8,&UNK_110360610);
  puRam0000000112d46778 = puVar1;
  return;
}



/* Entry: 100ea28f8; end: 100ea2937;  */

void FUN_100ea28f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d46778 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90dca8;
  func_0x000107c61520(&UNK_10d90dca8,&UNK_110360610);
  puRam0000000112d46778 = puVar1;
  return;
}



/* Entry: 100ea2938; end: 100ea298b;  */

long FUN_100ea2938(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100ea298c; end: 100ea2a5b;  */

undefined8 * FUN_100ea298c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  return param_1;
}



/* Entry: 100ea2a5c; end: 100ea2aaf;  */

undefined8 * FUN_100ea2a5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 100ea2ab0; end: 100ea2bf3;  */

int FUN_100ea2ab0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100ea2bf4; end: 100ea2c33;  */

void FUN_100ea2bf4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d46788 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d90dc14;
  func_0x000107c61520(&DAT_10d90dc14,&UNK_110360610);
  puRam0000000112d46788 = puVar1;
  return;
}



/* Entry: 100ea2c34; end: 100ea2ca7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea2c34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d46790) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d46798) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d467a0) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100ea2ca8; end: 100ea2e3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea2ca8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar6 = &puStack_70;
  puVar2 = PTR_PTR_1126aeae0;
  func_0x000107c61168(PTR_PTR_1126aeae0);
  func_0x000107c52028();
  func_0x000107c61180();
  puVar3 = puVar2;
  FUN_100ea3198();
  puVar4 = PTR_PTR_1126aeaf0;
  func_0x000107c610f8(PTR_PTR_1126aeaf0);
  func_0x000107c5fadc(puVar3,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c48dac(puVar4);
  func_0x000107c61170(puVar3);
  puVar3 = &UNK_110360810;
  func_0x000107c613fc(&UNK_110360810,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar5 = PTR_PTR_1126aeae8;
  func_0x000107c610f8(PTR_PTR_1126aeae8);
  pcStack_50 = FUN_100ea3174;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_100ea3124;
  puStack_58 = &UNK_110360828;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c6157c(puVar3);
  func_0x000107c48560(puVar5);
  func_0x000107c60bd0(ppuVar6);
  puVar1 = puStack_48;
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar1);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d46790);
  func_0x000107c4e9e4(uVar7);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar7);
  return;
}



/* Entry: 100ea2e40; end: 100ea2e9f; -[_TtC31SCConnectedAccountsSettingsImpl35ConnectedAccountsSettingsEntryPoint init] */

void FUN_100ea2e40(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCConnectedAccountsSettingsImpl.ConnectedAccountsSettingsEntryPoint",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ea2e6c);
  (*pcVar1)();
}



/* Entry: 100ea2ea0; end: 100ea2ee7; -[_TtC31SCConnectedAccountsSettingsImpl35ConnectedAccountsSettingsEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100ea2ebc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ea2ec0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea2ea0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d46790));
  return;
}



/* Entry: 100ea2ee8; end: 100ea2f43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea2ee8(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  
  lVar1 = *(long *)(*unaff_x20 + _DAT_112d46798);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000106bfdb88();
    func_0x000107c615e8(lVar1);
    if ((int)lVar2 != 0) {
      FUN_100ea2ca8();
    }
  }
  return;
}



/* Entry: 100ea2f44; end: 100ea2f4b;  */

undefined8 FUN_100ea2f44(void)

{
  return 0;
}



/* Entry: 100ea2f4c; end: 100ea3057;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea2f4c(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (param_1 != 0) {
      func_0x000107c4d508();
      func_0x000107c61180();
      if (param_1 != 0) {
        puVar1 = PTR_PTR_1126aead0;
        func_0x000107c610f8(PTR_PTR_1126aead0);
        func_0x000107c47994();
        FUN_100ea3c54(0);
        func_0x000107c610f8();
        func_0x000107c61174(puVar1);
        lVar2 = param_2;
        func_0x000107c61174();
        func_0x000100ea3a64(puVar1,param_2);
        func_0x000107c42c1c(*(undefined8 *)(lVar2 + _DAT_112d467a0));
        func_0x000107c61170(lVar2);
        func_0x000107c61170(param_1);
        func_0x000107c61170(puVar1);
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 100ea3058; end: 100ea3103; -[_TtC31SCConnectedAccountsSettingsImpl35ConnectedAccountsSettingsEntryPoint connectedAccountsExited] */

/* WARNING: Possible PIC construction at 0x000100ea30cc: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea3058(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d467a0;
  lVar3 = *(long *)(param_1 + _DAT_112d467a0);
  lVar2 = param_1;
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar3 == 0) {
    uVar4 = *(undefined8 *)(param_1 + lVar1);
    func_0x000107c4ffe8(uVar4);
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
  }
  else {
    uVar4 = *(undefined8 *)(lVar3 + _DAT_112d46818);
    func_0x000107c615f0(uVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c41864(uVar4,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar4);
  return;
}



/* Entry: 100ea3104; end: 100ea3123;  */

void FUN_100ea3104(void)

{
  func_0x000107c61168(&PTR_PTR_11279cb10);
  return;
}



/* Entry: 100ea3124; end: 100ea3173;  */

void FUN_100ea3124(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 100ea3174; end: 100ea3197;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea3174(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if (param_1 != 0) {
      func_0x000107c4d508();
      func_0x000107c61180();
      if (param_1 != 0) {
        puVar2 = PTR_PTR_1126aead0;
        func_0x000107c610f8(PTR_PTR_1126aead0);
        func_0x000107c47994();
        FUN_100ea3c54(0);
        func_0x000107c610f8();
        func_0x000107c61174(puVar2);
        lVar3 = lVar1;
        func_0x000107c61174();
        func_0x000100ea3a64(puVar2,lVar1);
        func_0x000107c42c1c(*(undefined8 *)(lVar3 + _DAT_112d467a0));
        func_0x000107c61170(lVar3);
        func_0x000107c61170(param_1);
        func_0x000107c61170(puVar2);
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 100ea3198; end: 100ea3263;  */

undefined1  [16] FUN_100ea3198(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe4;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef16af0);
  uVar3 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010ef16b10);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ea3264);
  (*pcVar1)();
}



/* Entry: 100ea3264; end: 100ea326f; -[SCConnectedAccountsSettingsEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea3264(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d467d0;
  func_0x000107c61428(param_1 + _DAT_112d467d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ea3270; end: 100ea327b; -[SCConnectedAccountsSettingsEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea3270(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d467d0;
  func_0x000107c61428(param_1 + _DAT_112d467d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ea327c; end: 100ea3287; -[SCConnectedAccountsSettingsEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea327c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d467d8;
  func_0x000107c61428(param_1 + _DAT_112d467d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ea3288; end: 100ea32cb;  */

void FUN_100ea3288(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ea32cc; end: 100ea32d7; -[SCConnectedAccountsSettingsEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea32cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d467d8;
  func_0x000107c61428(param_1 + _DAT_112d467d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ea32d8; end: 100ea332b;  */

void FUN_100ea32d8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ea332c; end: 100ea3373; -[SCConnectedAccountsSettingsEntryPoint connectedAccountsScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea332c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d467e0;
  func_0x000107c61428(param_1 + _DAT_112d467e0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100ea3374; end: 100ea33d7; -[SCConnectedAccountsSettingsEntryPoint setConnectedAccountsScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea3374(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d467e0;
  func_0x000107c61428(param_1 + _DAT_112d467e0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100ea33d8; end: 100ea355f;  */

/* WARNING: Possible PIC construction at 0x000100ea34ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ea34fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ea353c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ea3500) */
/* WARNING: Removing unreachable block (ram,0x000100ea34f0) */
/* WARNING: Removing unreachable block (ram,0x000100ea3540) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea33d8(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  plVar5 = &lStack_60;
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar6 = unaff_x20;
  func_0x000107c3fa0c();
  func_0x000107c61180();
  if (lVar6 != 0) {
    func_0x000107c401f0();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar3 = 0;
      FUN_100ea3104();
      lVar4 = lVar3;
      func_0x000107c610f8();
      *(long *)(lVar4 + _DAT_112d46790) = lVar2;
      *(long *)(lVar4 + _DAT_112d46798) = lVar6;
      *(long *)(lVar4 + _DAT_112d467a0) = unaff_x20;
      puVar1 = PTR_s_init_1125d9248;
      lStack_60 = lVar4;
      lStack_58 = lVar3;
      func_0x000107c61174(unaff_x20);
      func_0x000107c61174(lVar6);
      func_0x000107c61174(lVar2);
      func_0x000107c61154(&lStack_60,puVar1);
      lVar6 = *(long *)((long)plVar5 + _DAT_112d46798);
      func_0x000107c3fa04();
      func_0x000107c61180();
      if (lVar6 != 0) {
        lVar4 = lVar6;
        func_0x000106bfdb88();
        func_0x000107c615e8(lVar6);
        if ((int)lVar4 != 0) {
          FUN_100ea2ca8();
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100ea3560; end: 100ea3587; -[SCConnectedAccountsSettingsEntryPoint begin] */

void FUN_100ea3560(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100ea33d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ea3588; end: 100ea35cb; -[SCConnectedAccountsSettingsEntryPoint end] */

void FUN_100ea3588(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ea35cc; end: 100ea37cf;  */

void FUN_100ea35cc(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef10ed550)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000001a,0x800000010ef12ab0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd00000000000001d;
        if (((param_2 != -0x2fffffffffffffe3) || (param_3 != -0x7ffffffef10e94d0)) &&
           (func_0x000107c605b8(0xd00000000000001d,0x800000010ef16b30,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "SCConnectedAccountsSettingsImpl/SCConnectedAccountsSettingsEntryPoint.swift"
                              ,0x4b,2,0x2e,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100ea37d0);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5375c();
        goto LAB_100ea3658;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53414();
  }
LAB_100ea3658:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100ea37d0; end: 100ea387b; -[SCConnectedAccountsSettingsEntryPoint setValue:forIvarName:] */

void FUN_100ea37d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100ea35cc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100ea387c; end: 100ea38fb; -[SCConnectedAccountsSettingsEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea387c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d467d0,0);
  func_0x000107c61614(param_1 + _DAT_112d467d8,0);
  *(undefined8 *)(param_1 + _DAT_112d467e0) = 0;
  *(undefined8 *)(param_1 + _DAT_112d467e8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100ea38fc; end: 100ea392f;  */

void FUN_100ea38fc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100ea3930; end: 100ea3987; -[SCConnectedAccountsSettingsEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100ea396c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ea3970) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea3930(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d467d0);
  func_0x000107c61610(param_1 + _DAT_112d467d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d467e0));
  return;
}



/* Entry: 100ea3988; end: 100ea39a7;  */

void FUN_100ea3988(void)

{
  func_0x000107c61168(&PTR_PTR_11279cbe0);
  return;
}



/* Entry: 100ea39a8; end: 100ea3b1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100ea39a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112d46820;
  func_0x000107c61614(unaff_x20 + _DAT_112d46820,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d46818) = param_1;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_2);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  puVar3 = auStack_68;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  return puVar3;
}



/* Entry: 100ea3b20; end: 100ea3bc3; -[_TtC24SCConnectedAccountsScope22ConnectedAccountsScope initWithUiContainer:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea3b20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = param_1;
  func_0x000107c614f0();
  lVar2 = _DAT_112d46820;
  func_0x000107c61614(param_1 + _DAT_112d46820,0);
  *(undefined8 *)(param_1 + _DAT_112d46818) = param_3;
  func_0x000107c61428(param_1 + lVar2,auStack_58,1,0);
  func_0x000107c61604(param_1 + lVar2,param_4);
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  lStack_60 = lVar3;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_68,puVar1);
  return;
}



/* Entry: 100ea3bc4; end: 100ea3bf7;  */

void FUN_100ea3bc4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100ea3bf8; end: 100ea3c53; -[_TtC24SCConnectedAccountsScope22ConnectedAccountsScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100ea3bf8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d46818));
  param_1 = param_1 + _DAT_112d46820;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100ea3c54; end: 100ea3c73;  */

void FUN_100ea3c54(void)

{
  func_0x000107c61168(&PTR_PTR_11279ccb0);
  return;
}



/* Entry: 100ea3c74; end: 100ea3d57;  */

void FUN_100ea3c74(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 100ea3d58; end: 100ea3d83;  */

void FUN_100ea3d58(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100ea3d84; end: 100ea3da3;  */

void FUN_100ea3d84(void)

{
  func_0x000100ea3cb0();
  return;
}



/* Entry: 100ea3da4; end: 100ea3dab;  */

undefined8 FUN_100ea3da4(void)

{
  return 0;
}



/* Entry: 100ea3dac; end: 100ea3e0b; -[_TtC25GoogleSignInLogoutCleanup32GoogleSignInLogoutCleanupHandler init] */

void FUN_100ea3dac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GoogleSignInLogoutCleanup.GoogleSignInLogoutCleanupHandler",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ea3dd8);
  (*pcVar1)();
}



/* Entry: 100ea3e0c; end: 100ea3e1b; -[_TtC25GoogleSignInLogoutCleanup32GoogleSignInLogoutCleanupHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea3e0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d468f8));
  return;
}



/* Entry: 100ea3e1c; end: 100ea3e3f; -[_TtC25GoogleSignInLogoutCleanup32GoogleSignInLogoutCleanupHandler cleanUpUserData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea3e1c(long param_1)

{
  func_0x000107c5afc4(*(undefined8 *)(param_1 + _DAT_112d468f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 100ea3e40; end: 100ea3e83; -[SCGoogleSignInLogoutCleanupEntryPoint end] */

void FUN_100ea3e40(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ea3e84; end: 100ea3eb7;  */

void FUN_100ea3e84(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100ea3eb8; end: 100ea3eff; -[SCGoogleSignInLogoutCleanupEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea3eb8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d46928);
  func_0x000107c61610(param_1 + _DAT_112d46930);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d46938));
  return;
}



/* Entry: 100ea3f00; end: 100ea3f1f;  */

void FUN_100ea3f00(void)

{
  func_0x000107c61168(&PTR_PTR_11279ce38);
  return;
}



/* Entry: 100ea3f20; end: 100ea3f67;  */

void FUN_100ea3f20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  return;
}



/* Entry: 100ea3f68; end: 100ea41cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ea3f68(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [40];
  long alStack_68 [5];
  
  uVar6 = 0;
  ppuVar8 = &puStack_c0;
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100ea41cc);
    (*pcVar1)();
  }
  uVar3 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010ef16c60);
  lVar4 = lVar2;
  func_0x000107c3ebd4();
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar3);
  if ((int)lVar4 == 0) {
    return;
  }
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x18) + _DAT_112d48320);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    uVar3 = 0x112d46970;
    alStack_68[0] = lVar2;
    func_0x0001000285a8(0x112d46970,&UNK_10d90df48);
    uVar5 = 0x112d46978;
    func_0x0001000285a8(0x112d46978,&UNK_10d90df50);
    func_0x000107c6147c(&puStack_c0,alStack_68,uVar3,uVar5,6);
    if ((uVar6 & 1) != 0) {
      if (puStack_a8 != (undefined *)0x0) {
        FUN_100ea4214(&puStack_c0,alStack_68);
        lVar2 = *(long *)(*(long *)(unaff_x20 + 0x20) + _DAT_113093a98);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar2 != 0) {
          uVar3 = 0xd00000000000002d;
          func_0x000107c5fadc(0xd00000000000002d,0x800000010ef16c90);
          lVar4 = lVar2;
          func_0x000107c4e60c(lVar2);
          func_0x000107c61180();
          func_0x000107c615e8(lVar2);
          func_0x000107c61170(uVar3);
          FUN_100ea422c(alStack_68,auStack_90);
          puVar7 = &UNK_110360a08;
          func_0x000107c613fc(&UNK_110360a08,0x38,7);
          FUN_100ea4214(auStack_90,puVar7 + 0x10);
          pcStack_a0 = FUN_100ea4270;
          puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_b8 = 0x42000000;
          puStack_b0 = &UNK_1000f6b44;
          puStack_a8 = &UNK_110360a20;
          puStack_98 = puVar7;
          func_0x000107c60bc4(&puStack_c0);
          puVar7 = puStack_98;
          func_0x000107c615f0(lVar4);
          func_0x000107c61574(puVar7);
          func_0x000107c4e524(lVar4);
          func_0x000107c60bd0(ppuVar8);
          func_0x000107c615ec(lVar4,2);
        }
        func_0x0001000834e4(alStack_68);
        return;
      }
      goto LAB_100ea41a8;
    }
  }
  pcStack_a0 = (code *)0x0;
  uStack_b8 = 0;
  puStack_c0 = (undefined *)0x0;
  puStack_a8 = (undefined *)0x0;
  puStack_b0 = (undefined *)0x0;
LAB_100ea41a8:
  FUN_100ea41cc(&puStack_c0);
  return;
}



/* Entry: 100ea41cc; end: 100ea4213;  */

undefined8 FUN_100ea41cc(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112d46968;
  func_0x0001000285a8(0x112d46968,&UNK_10d90df40);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 100ea4214; end: 100ea422b;  */

undefined8 * FUN_100ea4214(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 100ea422c; end: 100ea426f;  */

long FUN_100ea422c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100ea4270; end: 100ea42b3;  */

void FUN_100ea4270(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  func_0x0001000a8868(unaff_x20 + 0x10,uVar1);
  (**(code **)(lVar2 + 8))(uVar1,lVar2);
  return;
}



/* Entry: 100ea42b4; end: 100ea42cf;  */

void FUN_100ea42b4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100ea42d0; end: 100ea4303;  */

void FUN_100ea42d0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100ea4304; end: 100ea4323;  */

void FUN_100ea4304(void)

{
  FUN_100ea3f68();
  return;
}



/* Entry: 100ea4324; end: 100ea432b;  */

undefined8 FUN_100ea4324(void)

{
  return 0;
}



/* Entry: 100ea432c; end: 100ea434b;  */

void FUN_100ea432c(void)

{
  func_0x000107c61168(&PTR_PTR_112d469c0);
  return;
}


