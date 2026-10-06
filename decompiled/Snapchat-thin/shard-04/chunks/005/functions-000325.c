/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103548424; end: 1035484b7;  */

void FUN_103548424(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x2f0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x2f0,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035484b8; end: 10354854b;  */

void FUN_1035484b8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x308;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x308,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10354854c; end: 1035485df;  */

void FUN_10354854c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 800;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  FUN_103559c30();
  (*pcVar2)(param_2 + 800,&UNK_11066ffa0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035485e0; end: 10354864b;  */

void FUN_1035485e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x21;
  
  FUN_10354864c(param_4,param_1,param_5,param_6);
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,param_2,param_3,param_5,param_6);
  }
  return;
}



/* Entry: 10354864c; end: 1035489e3;  */

/* WARNING: Removing unreachable block (ram,0x000103548748) */

void FUN_10354864c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 uVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long unaff_x21;
  long lVar7;
  code *pcVar8;
  long lVar9;
  long lStack_c0;
  undefined1 uStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  long lStack_80;
  undefined1 uStack_78;
  undefined1 auStack_68 [24];
  
  FUN_1035489e4();
  if (unaff_x21 != 0) {
    return;
  }
  FUN_103548a8c(param_1,param_2,param_3,param_4);
  FUN_103548b34(param_1,param_2,param_3,param_4);
  FUN_103548bdc(param_1,param_2,param_3,param_4);
  func_0x000107c61428(param_1 + 0x70,auStack_68,0,0);
  lVar7 = *(long *)(param_1 + 0x70);
  uVar1 = *(undefined1 *)(param_1 + 0x78);
  lVar9 = lVar7;
  func_0x00010355a214(lVar7,uVar1);
  lVar4 = 0;
  func_0x00010355a214(0,1);
  if (lVar9 != lVar4) {
    pcVar8 = *(code **)(param_4 + 0x80);
    lStack_80 = lVar7;
    uStack_78 = uVar1;
    func_0x000103502754();
    (*pcVar8)(&lStack_80,5,&UNK_110664e28,lVar4,param_3,param_4);
  }
  FUN_103548c84(param_1,param_2,param_3,param_4);
  FUN_103548d2c(param_1,param_2,param_3,param_4);
  FUN_103548dd4(param_1,param_2,param_3,param_4);
  func_0x000107c61428(param_1 + 200,&lStack_80,0,0);
  lVar9 = *(long *)(param_1 + 200);
  if (*(long *)(lVar9 + 0x10) != 0) {
    pcVar8 = *(code **)(param_4 + 0x118);
    FUN_103555e50();
    func_0x000107c61434(lVar9);
    (*pcVar8)();
    func_0x000107c6142c(lVar9);
  }
  FUN_103548e7c(param_1,param_2,param_3,param_4);
  func_0x000107c61428(param_1 + 0x230,auStack_98,0,0);
  lVar9 = *(long *)(param_1 + 0x230);
  uVar6 = *(ulong *)(param_1 + 0x238);
  uVar2 = (uint)(uVar6 >> 0x20);
  uVar5 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar5 != 0) {
      lVar4 = (long)(int)lVar9;
      lVar7 = lVar9 >> 0x20;
      goto LAB_1035488a8;
    }
    bVar3 = (uVar6 & 0xff000000000000) == 0;
  }
  else {
    if (uVar5 != 2) goto LAB_103548908;
    lVar4 = *(long *)(lVar9 + 0x10);
    lVar7 = *(long *)(lVar9 + 0x18);
LAB_1035488a8:
    bVar3 = lVar4 == lVar7;
  }
  if (!bVar3) {
    pcVar8 = *(code **)(param_4 + 0x78);
    func_0x00010006c00c(lVar9,uVar6);
    (*pcVar8)(lVar9,uVar6,0xb,param_3,param_4);
    func_0x00010006c090(lVar9,uVar6);
  }
LAB_103548908:
  FUN_103548f48(param_1,param_2,param_3,param_4);
  FUN_103549024(param_1,param_2,param_3,param_4);
  FUN_1035490d0(param_1,param_2,param_3,param_4);
  FUN_103549188(param_1,param_2,param_3,param_4);
  FUN_103549230(param_1,param_2,param_3,param_4);
  lVar9 = param_1 + 800;
  func_0x000107c61428(lVar9,auStack_b0,0,0);
  lStack_c0 = *(long *)(param_1 + 800);
  if (lStack_c0 != 0) {
    uStack_b8 = *(undefined1 *)(param_1 + 0x328);
    pcVar8 = *(code **)(param_4 + 0x80);
    FUN_103559c30();
    (*pcVar8)(&lStack_c0,0x11,&UNK_11066ffa0,lVar9,param_3,param_4);
  }
  return;
}



/* Entry: 1035489e4; end: 103548a8b;  */

void FUN_1035489e4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 auStack_70 [2];
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x10;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x20);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x18);
    auStack_70[0] = (undefined4)*(undefined8 *)(param_1 + 0x10);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar2)(auStack_70,1,&UNK_110790980,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103548a8c; end: 103548b33;  */

void FUN_103548a8c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 auStack_70 [2];
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x38);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x30);
    auStack_70[0] = (undefined4)*(undefined8 *)(param_1 + 0x28);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar2)(auStack_70,2,&UNK_110790980,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103548b34; end: 103548bdb;  */

void FUN_103548b34(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 auStack_70 [2];
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x40;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x50);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x48);
    auStack_70[0] = (undefined4)*(undefined8 *)(param_1 + 0x40);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar2)(auStack_70,3,&UNK_110790b00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103548bdc; end: 103548c83;  */

void FUN_103548bdc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 auStack_70 [2];
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x58;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x68);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x60);
    auStack_70[0] = (undefined4)*(undefined8 *)(param_1 + 0x58);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar2)(auStack_70,4,&UNK_110790b00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103548c84; end: 103548d2b;  */

void FUN_103548c84(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 auStack_70 [2];
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x80;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x90);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x88);
    auStack_70[0] = (undefined4)*(undefined8 *)(param_1 + 0x80);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar2)(auStack_70,6,&UNK_110790b00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103548d2c; end: 103548dd3;  */

void FUN_103548d2c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 auStack_70 [2];
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x98;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0xa8);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0xa0);
    auStack_70[0] = (undefined4)*(undefined8 *)(param_1 + 0x98);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar2)(auStack_70,7,&UNK_110790b00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103548dd4; end: 103548e7b;  */

void FUN_103548dd4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  byte abStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0xb0;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  if (*(byte *)(param_1 + 0xb0) != 2) {
    abStack_70[0] = *(byte *)(param_1 + 0xb0) & 1;
    uStack_60 = *(undefined8 *)(param_1 + 0xc0);
    uStack_68 = *(undefined8 *)(param_1 + 0xb8);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar2)(abStack_70,8,&UNK_110790c00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103548e7c; end: 103548f47;  */

void FUN_103548e7c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined1 *puVar2;
  code *pcVar3;
  undefined1 auStack_478 [352];
  undefined1 auStack_318 [24];
  undefined1 auStack_300 [352];
  undefined1 auStack_1a0 [352];
  
  func_0x000107c61428(param_1 + 0xd0,auStack_318,0,0);
  func_0x000107c610b4(auStack_300,param_1 + 0xd0,0x160);
  func_0x000107c610b4(auStack_1a0,param_1 + 0xd0,0x160);
  iVar1 = (int)auStack_300;
  FUN_103552a8c();
  if (iVar1 != 1) {
    puVar2 = auStack_478;
    func_0x000107c610b4(puVar2,auStack_1a0,0x160);
    pcVar3 = *(code **)(param_4 + 0x88);
    FUN_103555f4c();
    (*pcVar3)(auStack_478,10,&UNK_1106648c0,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 103548f48; end: 103549023;  */

void FUN_103548f48(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x240;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_a8 = *(ulong *)(param_1 + 0x248);
  uStack_a0 = *(ulong *)(param_1 + 0x250);
  if (((uStack_a8 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0 ||
      (uStack_a0 & 0xf000000000000007) != 0xb000000000000007) {
    uStack_b0 = *(undefined8 *)(param_1 + 0x240);
    uStack_90 = *(undefined8 *)(param_1 + 0x260);
    uStack_98 = *(undefined8 *)(param_1 + 600);
    uStack_80 = *(undefined8 *)(param_1 + 0x270);
    uStack_88 = *(undefined8 *)(param_1 + 0x268);
    uStack_70 = *(undefined8 *)(param_1 + 0x280);
    uStack_78 = *(undefined8 *)(param_1 + 0x278);
    uStack_60 = *(undefined8 *)(param_1 + 0x290);
    uStack_68 = *(undefined8 *)(param_1 + 0x288);
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_103556048();
    (*pcVar2)(&uStack_b0,0xc,&UNK_110664a08,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103549024; end: 1035490cf;  */

void FUN_103549024(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 auStack_70 [2];
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x298;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x2a8);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x2a0);
    auStack_70[0] = (undefined4)*(undefined8 *)(param_1 + 0x298);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar2)(auStack_70,0xd,&UNK_110790b00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1035490d0; end: 103549187;  */

void FUN_1035490d0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_1 + 0x2b0);
  puVar2 = puVar1;
  func_0x000107c61428(puVar1,auStack_58,0,0);
  uStack_78 = *(ulong *)(param_1 + 0x2d8);
  if ((uStack_78 & 0xff) != 3) {
    uStack_98 = *(undefined8 *)(param_1 + 0x2b8);
    uStack_a0 = *puVar1;
    uStack_88 = *(undefined8 *)(param_1 + 0x2c8);
    uStack_90 = *(undefined8 *)(param_1 + 0x2c0);
    uStack_80 = *(undefined8 *)(param_1 + 0x2d0);
    uStack_68 = *(undefined8 *)(param_1 + 0x2e8);
    uStack_70 = *(undefined8 *)(param_1 + 0x2e0);
    pcVar3 = *(code **)(param_4 + 0x88);
    FUN_103556174();
    (*pcVar3)(&uStack_a0,0xe,&UNK_110664b20,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 103549188; end: 10354922f;  */

void FUN_103549188(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x2f0;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x300);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x2f8);
    uStack_70 = *(undefined8 *)(param_1 + 0x2f0);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar2)(&uStack_70,0xf,&UNK_110790a00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103549230; end: 1035492db;  */

void FUN_103549230(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_1 + 0x308);
  puVar2 = puVar1;
  func_0x000107c61428(puVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x318);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x310);
    uStack_70 = *puVar1;
    pcVar3 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar3)(&uStack_70,0x10,&UNK_110790a00,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 1035492dc; end: 10354938b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1035492dc(byte *param_1,byte *param_2,ulong param_3,long param_4,ulong param_5,
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
    FUN_10354938c(param_3,param_6);
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



/* Entry: 10354938c; end: 10354a713;  */

undefined8 FUN_10354938c(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uStack_1340;
  undefined8 uStack_1338;
  undefined8 uStack_1330;
  undefined8 uStack_1328;
  undefined8 uStack_1320;
  undefined8 uStack_1318;
  undefined8 uStack_1310;
  undefined8 uStack_1308;
  undefined8 uStack_1300;
  undefined8 uStack_12f8;
  undefined8 uStack_12f0;
  undefined8 uStack_11e0;
  undefined8 uStack_11d8;
  undefined8 uStack_11d0;
  undefined8 uStack_11c8;
  undefined8 uStack_11c0;
  undefined8 uStack_11b8;
  undefined8 uStack_11b0;
  undefined8 uStack_11a8;
  undefined8 uStack_11a0;
  undefined8 uStack_1198;
  undefined8 uStack_1190;
  undefined8 uStack_1080;
  ulong uStack_1078;
  ulong uStack_1070;
  undefined8 uStack_1068;
  undefined8 uStack_1060;
  undefined8 uStack_1058;
  undefined8 uStack_1050;
  undefined8 uStack_1048;
  undefined8 uStack_1040;
  undefined8 uStack_1038;
  undefined8 uStack_1030;
  undefined8 uStack_1028;
  ulong uStack_1020;
  ulong uStack_1018;
  undefined8 uStack_1010;
  undefined8 uStack_1008;
  undefined8 uStack_1000;
  undefined8 uStack_ff8;
  undefined8 uStack_ff0;
  undefined8 uStack_fe8;
  undefined8 uStack_fe0;
  undefined8 uStack_fd8;
  undefined8 uStack_f20;
  undefined8 uStack_f18;
  undefined8 uStack_f10;
  undefined8 uStack_f08;
  undefined8 uStack_f00;
  undefined8 uStack_ef8;
  undefined8 uStack_ef0;
  undefined8 uStack_ee8;
  undefined1 auStack_ec0 [64];
  undefined8 uStack_e80;
  undefined8 uStack_e78;
  undefined8 uStack_e70;
  undefined8 uStack_e68;
  undefined8 uStack_e60;
  undefined8 uStack_e58;
  undefined8 uStack_e50;
  undefined8 uStack_e48;
  undefined1 auStack_e38 [24];
  undefined1 auStack_e20 [24];
  undefined1 auStack_e08 [24];
  undefined1 auStack_df0 [24];
  undefined1 auStack_dd8 [24];
  undefined8 uStack_dc0;
  ulong uStack_db8;
  ulong uStack_db0;
  undefined8 uStack_da8;
  undefined8 uStack_da0;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  undefined8 uStack_d78;
  undefined8 uStack_d70;
  undefined8 uStack_d68;
  undefined8 uStack_d60;
  undefined8 uStack_d58;
  undefined8 uStack_d50;
  undefined8 uStack_d48;
  undefined1 auStack_d40 [24];
  undefined1 auStack_d28 [24];
  undefined1 auStack_d10 [24];
  undefined1 auStack_cf8 [24];
  undefined8 uStack_ce0;
  ulong uStack_cd8;
  ulong uStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c80;
  ulong uStack_c78;
  ulong uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined8 uStack_c40;
  undefined8 uStack_c38;
  undefined8 uStack_c30;
  undefined1 auStack_c20 [24];
  undefined1 auStack_c08 [24];
  undefined1 auStack_bf0 [704];
  undefined8 uStack_930;
  ulong uStack_928;
  ulong uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined1 auStack_7d0 [352];
  undefined1 auStack_670 [24];
  undefined1 auStack_658 [24];
  undefined1 auStack_640 [352];
  undefined1 auStack_4e0 [352];
  undefined1 auStack_380 [24];
  undefined1 auStack_368 [24];
  undefined1 auStack_350 [24];
  undefined1 auStack_338 [24];
  undefined1 auStack_320 [24];
  undefined1 auStack_308 [24];
  undefined1 auStack_2f0 [24];
  undefined1 auStack_2d8 [24];
  undefined1 auStack_2c0 [24];
  undefined1 auStack_2a8 [24];
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [24];
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
  undefined1 auStack_230 [24];
  undefined1 auStack_218 [24];
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [352];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar9 = 0;
  func_0x000107c61428(param_1 + 0x10,auStack_1e8,0,0);
  func_0x000107c61428(param_2 + 0x10,auStack_200,0,0);
  lVar13 = *(long *)(param_1 + 0x10);
  uVar16 = *(ulong *)(param_1 + 0x18);
  uVar12 = *(ulong *)(param_1 + 0x20);
  lVar17 = *(long *)(param_2 + 0x10);
  uVar15 = *(ulong *)(param_2 + 0x18);
  uVar19 = *(ulong *)(param_2 + 0x20);
  uVar6 = uVar12;
  uVar7 = uVar16;
  lVar18 = lVar13;
  if (uVar12 >> 0x3c < 0xf) {
    if (uVar19 >> 0x3c < 0xf) {
      func_0x000100d55b38(lVar13,uVar16,uVar12);
      func_0x000100d55b38(lVar17,uVar15,uVar19);
      if ((float)lVar13 == (float)lVar17) {
        uVar6 = uVar16;
        func_0x000100e25fcc(uVar16,uVar12,uVar15,uVar19);
        func_0x000100d55b58(lVar17,uVar15,uVar19);
        if ((uVar6 & 1) == 0) goto LAB_10354a660;
        goto LAB_1035494ac;
      }
LAB_10354a644:
      func_0x000100d55b58(lVar17,uVar15,uVar19);
      goto LAB_10354a660;
    }
  }
  else if (0xe < uVar19 >> 0x3c) {
    func_0x000100d55b38(lVar13,uVar16,uVar12);
    func_0x000100d55b38(lVar17,uVar15,uVar19);
LAB_1035494ac:
    func_0x000100d55b58(lVar13,uVar16,uVar12);
    func_0x000107c61428(param_1 + 0x28,auStack_218,0,0);
    func_0x000107c61428(param_2 + 0x28,auStack_230,0,0);
    lVar13 = *(long *)(param_1 + 0x28);
    uVar16 = *(ulong *)(param_1 + 0x30);
    uVar12 = *(ulong *)(param_1 + 0x38);
    lVar17 = *(long *)(param_2 + 0x28);
    uVar15 = *(ulong *)(param_2 + 0x30);
    uVar19 = *(ulong *)(param_2 + 0x38);
    uVar6 = uVar12;
    uVar7 = uVar16;
    lVar18 = lVar13;
    if (uVar12 >> 0x3c < 0xf) {
      if (uVar19 >> 0x3c < 0xf) {
        func_0x000100d55b38(lVar13,uVar16,uVar12);
        func_0x000100d55b38(lVar17,uVar15,uVar19);
        if ((float)lVar13 != (float)lVar17) goto LAB_10354a644;
        uVar6 = uVar16;
        func_0x000100e25fcc(uVar16,uVar12,uVar15,uVar19);
        func_0x000100d55b58(lVar17,uVar15,uVar19);
        if ((uVar6 & 1) == 0) goto LAB_10354a660;
        goto LAB_10354959c;
      }
    }
    else if (0xe < uVar19 >> 0x3c) {
      func_0x000100d55b38(lVar13,uVar16,uVar12);
      func_0x000100d55b38(lVar17,uVar15,uVar19);
LAB_10354959c:
      func_0x000100d55b58(lVar13,uVar16,uVar12);
      func_0x000107c61428(param_1 + 0x40,auStack_248,0,0);
      func_0x000107c61428(param_2 + 0x40,auStack_260,0,0);
      lVar13 = *(long *)(param_1 + 0x40);
      uVar16 = *(ulong *)(param_1 + 0x48);
      uVar12 = *(ulong *)(param_1 + 0x50);
      lVar17 = *(long *)(param_2 + 0x40);
      uVar15 = *(ulong *)(param_2 + 0x48);
      uVar19 = *(ulong *)(param_2 + 0x50);
      uVar6 = uVar12;
      uVar7 = uVar16;
      lVar18 = lVar13;
      if (uVar12 >> 0x3c < 0xf) {
        if (uVar19 >> 0x3c < 0xf) {
          func_0x000100d55b38(lVar13,uVar16,uVar12);
          func_0x000100d55b38(lVar17,uVar15,uVar19);
          if ((int)lVar13 != (int)lVar17) goto LAB_10354a644;
          uVar6 = uVar16;
          func_0x000100e25fcc(uVar16,uVar12,uVar15,uVar19);
          func_0x000100d55b58(lVar17,uVar15,uVar19);
          if ((uVar6 & 1) == 0) goto LAB_10354a660;
          goto LAB_103549624;
        }
      }
      else if (0xe < uVar19 >> 0x3c) {
        func_0x000100d55b38(lVar13,uVar16,uVar12);
        func_0x000100d55b38(lVar17,uVar15,uVar19);
LAB_103549624:
        func_0x000100d55b58(lVar13,uVar16,uVar12);
        func_0x000107c61428(param_1 + 0x58,auStack_278,0,0);
        func_0x000107c61428(param_2 + 0x58,auStack_290,0,0);
        lVar13 = *(long *)(param_1 + 0x58);
        uVar16 = *(ulong *)(param_1 + 0x60);
        uVar12 = *(ulong *)(param_1 + 0x68);
        lVar17 = *(long *)(param_2 + 0x58);
        uVar15 = *(ulong *)(param_2 + 0x60);
        uVar19 = *(ulong *)(param_2 + 0x68);
        uVar6 = uVar12;
        uVar7 = uVar16;
        lVar18 = lVar13;
        if (uVar12 >> 0x3c < 0xf) {
          if (uVar19 >> 0x3c < 0xf) {
            func_0x000100d55b38(lVar13,uVar16,uVar12);
            func_0x000100d55b38(lVar17,uVar15,uVar19);
            if ((int)lVar13 != (int)lVar17) goto LAB_10354a644;
            uVar6 = uVar16;
            func_0x000100e25fcc(uVar16,uVar12,uVar15,uVar19);
            func_0x000100d55b58(lVar17,uVar15,uVar19);
            if ((uVar6 & 1) == 0) goto LAB_10354a660;
            goto LAB_1035496ac;
          }
        }
        else if (0xe < uVar19 >> 0x3c) {
          func_0x000100d55b38(lVar13,uVar16,uVar12);
          func_0x000100d55b38(lVar17,uVar15,uVar19);
LAB_1035496ac:
          func_0x000100d55b58(lVar13,uVar16,uVar12);
          func_0x000107c61428(param_1 + 0x70,auStack_2a8,0,0);
          lVar13 = *(long *)(param_1 + 0x70);
          uVar1 = *(undefined1 *)(param_1 + 0x78);
          func_0x000107c61428(param_2 + 0x70,auStack_2c0,0,0);
          lVar17 = *(long *)(param_2 + 0x70);
          uVar2 = *(undefined1 *)(param_2 + 0x78);
          func_0x00010355a214(lVar13,uVar1);
          func_0x00010355a214(lVar17,uVar2);
          if (lVar13 != lVar17) {
            return 0;
          }
          func_0x000107c61428(param_1 + 0x80,auStack_2d8,0,0);
          func_0x000107c61428(param_2 + 0x80,auStack_2f0,0,0);
          lVar13 = *(long *)(param_1 + 0x80);
          uVar16 = *(ulong *)(param_1 + 0x88);
          uVar12 = *(ulong *)(param_1 + 0x90);
          lVar17 = *(long *)(param_2 + 0x80);
          uVar15 = *(ulong *)(param_2 + 0x88);
          uVar19 = *(ulong *)(param_2 + 0x90);
          uVar6 = uVar12;
          uVar7 = uVar16;
          lVar18 = lVar13;
          if (uVar12 >> 0x3c < 0xf) {
            if (uVar19 >> 0x3c < 0xf) {
              func_0x000100d55b38(lVar13,uVar16,uVar12);
              func_0x000100d55b38(lVar17,uVar15,uVar19);
              if ((int)lVar13 != (int)lVar17) goto LAB_10354a644;
              uVar6 = uVar16;
              func_0x000100e25fcc(uVar16,uVar12,uVar15,uVar19);
              func_0x000100d55b58(lVar17,uVar15,uVar19);
              if ((uVar6 & 1) == 0) goto LAB_10354a660;
              goto LAB_103549798;
            }
          }
          else if (0xe < uVar19 >> 0x3c) {
            func_0x000100d55b38(lVar13,uVar16,uVar12);
            func_0x000100d55b38(lVar17,uVar15,uVar19);
LAB_103549798:
            func_0x000100d55b58(lVar13,uVar16,uVar12);
            func_0x000107c61428(param_1 + 0x98,auStack_308,0,0);
            func_0x000107c61428(param_2 + 0x98,auStack_320,0,0);
            lVar13 = *(long *)(param_1 + 0x98);
            uVar16 = *(ulong *)(param_1 + 0xa0);
            uVar12 = *(ulong *)(param_1 + 0xa8);
            lVar17 = *(long *)(param_2 + 0x98);
            uVar15 = *(ulong *)(param_2 + 0xa0);
            uVar19 = *(ulong *)(param_2 + 0xa8);
            uVar6 = uVar12;
            uVar7 = uVar16;
            lVar18 = lVar13;
            if (uVar12 >> 0x3c < 0xf) {
              if (uVar19 >> 0x3c < 0xf) {
                func_0x000100d55b38(lVar13,uVar16,uVar12);
                func_0x000100d55b38(lVar17,uVar15,uVar19);
                if ((int)lVar13 != (int)lVar17) goto LAB_10354a644;
                uVar6 = uVar16;
                func_0x000100e25fcc(uVar16,uVar12,uVar15,uVar19);
                func_0x000100d55b58(lVar17,uVar15,uVar19);
                if ((uVar6 & 1) == 0) goto LAB_10354a660;
                goto LAB_103549820;
              }
            }
            else if (0xe < uVar19 >> 0x3c) {
              func_0x000100d55b38(lVar13,uVar16,uVar12);
              func_0x000100d55b38(lVar17,uVar15,uVar19);
LAB_103549820:
              func_0x000100d55b58(lVar13,uVar16,uVar12);
              func_0x000107c61428(param_1 + 0xb0,auStack_338,0,0);
              func_0x000107c61428(param_2 + 0xb0,auStack_350,0,0);
              uVar16 = *(ulong *)(param_1 + 0xb0);
              uVar19 = *(ulong *)(param_1 + 0xb8);
              uVar14 = *(undefined8 *)(param_1 + 0xc0);
              uVar15 = *(ulong *)(param_2 + 0xb0);
              uVar6 = *(ulong *)(param_2 + 0xb8);
              uVar20 = *(undefined8 *)(param_2 + 0xc0);
              if ((uVar16 & 0xff) == 2) {
                if ((uVar15 & 0xff) == 2) {
                  func_0x000101541464(uVar16,uVar19,uVar14);
                  func_0x000101541464(uVar15,uVar6,uVar20);
LAB_1035498a4:
                  func_0x000101556278(uVar16,uVar19,uVar14);
                  func_0x000107c61428(param_1 + 200,auStack_368,0,0);
                  uVar15 = *(ulong *)(param_1 + 200);
                  func_0x000107c61428(param_2 + 200,auStack_380,0,0);
                  uVar14 = *(undefined8 *)(param_2 + 200);
                  func_0x000107c61434(uVar15);
                  func_0x000107c61434(uVar14);
                  uVar16 = uVar15;
                  FUN_10355213c(uVar15,uVar14);
                  func_0x000107c6142c(uVar15);
                  func_0x000107c6142c(uVar14);
                  if ((uVar16 & 1) == 0) {
                    return 0;
                  }
                  func_0x000107c61428(param_1 + 0xd0,auStack_658,0,0);
                  func_0x000107c61428(param_2 + 0xd0,auStack_670,0,0);
                  func_0x000107c610b4(auStack_640,param_1 + 0xd0,0x160);
                  func_0x000107c610b4(&uStack_930,param_1 + 0xd0,0x160);
                  func_0x000107c610b4(auStack_4e0,param_2 + 0xd0,0x160);
                  func_0x000107c610b4(auStack_7d0,param_2 + 0xd0,0x160);
                  iVar5 = (int)&uStack_930;
                  FUN_103552a8c();
                  if (iVar5 == 1) {
                    iVar5 = (int)auStack_7d0;
                    FUN_103552a8c();
                    if (iVar5 != 1) {
LAB_103549cac:
                      func_0x000107c610b4(auStack_bf0,&uStack_930,0x2c0);
                      FUN_103559c70(auStack_640,auStack_1d0,0x112f77a28,&UNK_10dbd9da0);
                      FUN_103559c70(auStack_4e0,auStack_1d0,0x112f77a28,&UNK_10dbd9da0);
                      func_0x000103559bf0(auStack_bf0,0x112f77a30,&UNK_10dbd9da8);
                      return 0;
                    }
                    func_0x000107c610b4(auStack_bf0,&uStack_930,0x160);
                    FUN_103559c70(auStack_640,auStack_1d0,0x112f77a28,&UNK_10dbd9da0);
                    FUN_103559c70(auStack_4e0,auStack_1d0,0x112f77a28,&UNK_10dbd9da0);
                    func_0x000103559bf0(auStack_bf0,0x112f77a28,&UNK_10dbd9da0);
                  }
                  else {
                    func_0x000107c610b4(&uStack_1080,&uStack_930,0x160);
                    iVar5 = (int)auStack_7d0;
                    FUN_103552a8c();
                    if (iVar5 == 1) goto LAB_103549cac;
                    func_0x000107c610b4(&uStack_11e0,auStack_7d0,0x160);
                    func_0x000107c610b4(auStack_bf0,auStack_7d0,0x160);
                    func_0x000107c610b4(auStack_1d0,&uStack_1080,0x160);
                    FUN_103559c70(auStack_640,&uStack_1340,0x112f77a28,&UNK_10dbd9da0);
                    FUN_103559c70(auStack_4e0,&uStack_1340,0x112f77a28,&UNK_10dbd9da0);
                    puVar8 = auStack_1d0;
                    func_0x000103552b2c(puVar8,auStack_bf0);
                    func_0x000103559bf0(&uStack_11e0,0x112f77a28,&UNK_10dbd9da0);
                    func_0x000103559bf0(&uStack_930,0x112f77a28,&UNK_10dbd9da0);
                    if (((ulong)puVar8 & 1) == 0) {
                      return 0;
                    }
                  }
                  func_0x000107c61428(param_1 + 0x230,auStack_c08,0,0);
                  uVar15 = *(ulong *)(param_1 + 0x230);
                  uVar14 = *(undefined8 *)(param_1 + 0x238);
                  func_0x000107c61428(param_2 + 0x230,auStack_c20,0,0);
                  uVar20 = *(undefined8 *)(param_2 + 0x230);
                  uVar21 = *(undefined8 *)(param_2 + 0x238);
                  func_0x00010006c00c(uVar15,uVar14);
                  func_0x00010006c00c(uVar20,uVar21);
                  uVar16 = uVar15;
                  func_0x000100e25fcc(uVar15,uVar14,uVar20,uVar21);
                  func_0x00010006c090(uVar20,uVar21);
                  func_0x00010006c090(uVar15,uVar14);
                  if ((uVar16 & 1) == 0) {
                    return 0;
                  }
                  puVar10 = (undefined8 *)(param_1 + 0x240);
                  func_0x000107c61428(puVar10,auStack_cf8,0,0);
                  func_0x000107c61428((undefined8 *)(param_2 + 0x240),auStack_d10,0,0);
                  uStack_cb8 = *(undefined8 *)(param_1 + 0x268);
                  uStack_cc0 = *(undefined8 *)(param_1 + 0x260);
                  uStack_ca8 = *(undefined8 *)(param_1 + 0x278);
                  uStack_cb0 = *(undefined8 *)(param_1 + 0x270);
                  uStack_c98 = *(undefined8 *)(param_1 + 0x288);
                  uStack_ca0 = *(undefined8 *)(param_1 + 0x280);
                  uStack_c90 = *(undefined8 *)(param_1 + 0x290);
                  uStack_cd8 = *(ulong *)(param_1 + 0x248);
                  uStack_ce0 = *(undefined8 *)(param_1 + 0x240);
                  uStack_cc8 = *(undefined8 *)(param_1 + 600);
                  uStack_cd0 = *(ulong *)(param_1 + 0x250);
                  uStack_c58 = *(undefined8 *)(param_2 + 0x268);
                  uStack_1008 = *(undefined8 *)(param_2 + 0x260);
                  uStack_c48 = *(undefined8 *)(param_2 + 0x278);
                  uStack_c50 = *(undefined8 *)(param_2 + 0x270);
                  uStack_c38 = *(undefined8 *)(param_2 + 0x288);
                  uStack_c40 = *(undefined8 *)(param_2 + 0x280);
                  uStack_c30 = *(undefined8 *)(param_2 + 0x290);
                  uStack_1020 = *(ulong *)(param_2 + 0x248);
                  uStack_1028 = *(undefined8 *)(param_2 + 0x240);
                  uStack_1010 = *(undefined8 *)(param_2 + 600);
                  uStack_1018 = *(ulong *)(param_2 + 0x250);
                  bVar3 = ((uStack_1020 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0;
                  bVar4 = (uStack_1018 & 0xf000000000000007) != 0xb000000000000007;
                  uStack_c80 = uStack_1028;
                  uStack_c78 = uStack_1020;
                  uStack_c70 = uStack_1018;
                  uStack_c68 = uStack_1010;
                  uStack_c60 = uStack_1008;
                  uStack_930 = uStack_ce0;
                  uStack_928 = uStack_cd8;
                  uStack_920 = uStack_cd0;
                  uStack_918 = uStack_cc8;
                  uStack_910 = uStack_cc0;
                  uStack_908 = uStack_cb8;
                  uStack_900 = uStack_cb0;
                  uStack_8f8 = uStack_ca8;
                  uStack_8f0 = uStack_ca0;
                  uStack_8e8 = uStack_c98;
                  uStack_8e0 = uStack_c90;
                  uStack_8d8 = uStack_1028;
                  uStack_8d0 = uStack_1020;
                  uStack_8c8 = uStack_1018;
                  uStack_8c0 = uStack_1010;
                  uStack_8b8 = uStack_1008;
                  uStack_8b0 = uStack_c58;
                  uStack_8a8 = uStack_c50;
                  uStack_8a0 = uStack_c48;
                  uStack_898 = uStack_c40;
                  uStack_890 = uStack_c38;
                  uStack_888 = uStack_c30;
                  if ((((uStack_cd8 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
                     ((uStack_cd0 & 0xf000000000000007) == 0xb000000000000007)) {
                    if (bVar3 || bVar4) {
LAB_103549fa8:
                      uStack_1080 = uStack_ce0;
                      uStack_1078 = uStack_cd8;
                      uStack_1070 = uStack_cd0;
                      uStack_1068 = uStack_cc8;
                      uStack_1060 = uStack_cc0;
                      uStack_1058 = uStack_cb8;
                      uStack_1050 = uStack_cb0;
                      uStack_1048 = uStack_ca8;
                      uStack_1040 = uStack_ca0;
                      uStack_1038 = uStack_c98;
                      uStack_1030 = uStack_c90;
                      uStack_1000 = uStack_c58;
                      uStack_ff8 = uStack_c50;
                      uStack_ff0 = uStack_c48;
                      uStack_fe8 = uStack_c40;
                      uStack_fe0 = uStack_c38;
                      uStack_fd8 = uStack_c30;
                      FUN_103559c70(&uStack_ce0,&uStack_11e0,0x112f77a38,&UNK_10dbd9db0);
                      FUN_103559c70(&uStack_c80,&uStack_11e0,0x112f77a38,&UNK_10dbd9db0);
                      uVar14 = 0x112f77a40;
                      puVar11 = &UNK_10dbd9db8;
                      goto LAB_10354a034;
                    }
                    uStack_1058 = *(undefined8 *)(param_1 + 0x268);
                    uStack_1060 = *(undefined8 *)(param_1 + 0x260);
                    uStack_1048 = *(undefined8 *)(param_1 + 0x278);
                    uStack_1050 = *(undefined8 *)(param_1 + 0x270);
                    uStack_1038 = *(undefined8 *)(param_1 + 0x288);
                    uStack_1040 = *(undefined8 *)(param_1 + 0x280);
                    uStack_1030 = *(undefined8 *)(param_1 + 0x290);
                    uStack_1078 = *(undefined8 *)(param_1 + 0x248);
                    uStack_1080 = *puVar10;
                    uStack_1068 = *(undefined8 *)(param_1 + 600);
                    uStack_1070 = *(undefined8 *)(param_1 + 0x250);
                    FUN_103559c70(&uStack_ce0,&uStack_11e0,0x112f77a38,&UNK_10dbd9db0);
                    FUN_103559c70(&uStack_c80,&uStack_11e0,0x112f77a38,&UNK_10dbd9db0);
                    func_0x000103559bf0(&uStack_1080,0x112f77a38,&UNK_10dbd9db0);
                  }
                  else {
                    if (!bVar3 && !bVar4) goto LAB_103549fa8;
                    uStack_11b8 = *(undefined8 *)(param_2 + 0x268);
                    uStack_11c0 = *(undefined8 *)(param_2 + 0x260);
                    uStack_11a8 = *(undefined8 *)(param_2 + 0x278);
                    uStack_11b0 = *(undefined8 *)(param_2 + 0x270);
                    uStack_1198 = *(undefined8 *)(param_2 + 0x288);
                    uStack_11a0 = *(undefined8 *)(param_2 + 0x280);
                    uStack_1190 = *(undefined8 *)(param_2 + 0x290);
                    uStack_11d8 = *(undefined8 *)(param_2 + 0x248);
                    uStack_11e0 = *(undefined8 *)(param_2 + 0x240);
                    uStack_11c8 = *(undefined8 *)(param_2 + 600);
                    uStack_11d0 = *(undefined8 *)(param_2 + 0x250);
                    uStack_1318 = *(undefined8 *)(param_1 + 0x268);
                    uStack_1320 = *(undefined8 *)(param_1 + 0x260);
                    uStack_1308 = *(undefined8 *)(param_1 + 0x278);
                    uStack_1310 = *(undefined8 *)(param_1 + 0x270);
                    uStack_12f8 = *(undefined8 *)(param_1 + 0x288);
                    uStack_1300 = *(undefined8 *)(param_1 + 0x280);
                    uStack_12f0 = *(undefined8 *)(param_1 + 0x290);
                    uStack_1338 = *(undefined8 *)(param_1 + 0x248);
                    uStack_1340 = *puVar10;
                    uStack_1328 = *(undefined8 *)(param_1 + 600);
                    uStack_1330 = *(undefined8 *)(param_1 + 0x250);
                    uStack_1080 = uStack_11e0;
                    uStack_1078 = uStack_11d8;
                    uStack_1070 = uStack_11d0;
                    uStack_1068 = uStack_11c8;
                    uStack_1060 = uStack_11c0;
                    uStack_1058 = uStack_11b8;
                    uStack_1050 = uStack_11b0;
                    uStack_1048 = uStack_11a8;
                    uStack_1040 = uStack_11a0;
                    uStack_1038 = uStack_1198;
                    uStack_1030 = uStack_1190;
                    FUN_103559c70(&uStack_ce0,&uStack_f20,0x112f77a38,&UNK_10dbd9db0);
                    FUN_103559c70(&uStack_c80,&uStack_f20,0x112f77a38,&UNK_10dbd9db0);
                    func_0x000103554168(&uStack_1340,&uStack_11e0);
                    func_0x000103559bf0(&uStack_1080,0x112f77a38,&UNK_10dbd9db0);
                    func_0x000103559bf0(&uStack_930,0x112f77a38,&UNK_10dbd9db0);
                    if ((uVar9 & 1) == 0) {
                      return 0;
                    }
                  }
                  func_0x000107c61428(param_1 + 0x298,auStack_d28,0,0);
                  func_0x000107c61428(param_2 + 0x298,auStack_d40,0,0);
                  lVar13 = *(long *)(param_1 + 0x298);
                  uVar16 = *(ulong *)(param_1 + 0x2a0);
                  uVar12 = *(ulong *)(param_1 + 0x2a8);
                  lVar17 = *(long *)(param_2 + 0x298);
                  uVar15 = *(ulong *)(param_2 + 0x2a0);
                  uVar19 = *(ulong *)(param_2 + 0x2a8);
                  uVar6 = uVar12;
                  uVar7 = uVar16;
                  lVar18 = lVar13;
                  if (uVar12 >> 0x3c < 0xf) {
                    if (uVar19 >> 0x3c < 0xf) {
                      func_0x000100d55b38(lVar13,uVar16,uVar12);
                      func_0x000100d55b38(lVar17,uVar15,uVar19);
                      if ((int)lVar13 != (int)lVar17) goto LAB_10354a644;
                      uVar9 = uVar16;
                      func_0x000100e25fcc(uVar16,uVar12,uVar15,uVar19);
                      func_0x000100d55b58(lVar17,uVar15,uVar19);
                      if ((uVar9 & 1) == 0) goto LAB_10354a660;
                      goto LAB_10354a174;
                    }
                  }
                  else if (0xe < uVar19 >> 0x3c) {
                    func_0x000100d55b38(lVar13,uVar16,uVar12);
                    func_0x000100d55b38(lVar17,uVar15,uVar19);
LAB_10354a174:
                    func_0x000100d55b58(lVar13,uVar16,uVar12);
                    func_0x000107c61428(param_1 + 0x2b0,auStack_dd8,0,0);
                    func_0x000107c61428(param_2 + 0x2b0,auStack_df0,0,0);
                    uStack_db8 = *(ulong *)(param_1 + 0x2b8);
                    uStack_dc0 = *(undefined8 *)(param_1 + 0x2b0);
                    uStack_da8 = *(undefined8 *)(param_1 + 0x2c8);
                    uStack_db0 = *(ulong *)(param_1 + 0x2c0);
                    uStack_d98 = *(undefined8 *)(param_1 + 0x2d8);
                    uStack_da0 = *(undefined8 *)(param_1 + 0x2d0);
                    uStack_d88 = *(undefined8 *)(param_1 + 0x2e8);
                    uStack_d90 = *(undefined8 *)(param_1 + 0x2e0);
                    uStack_d78 = *(undefined8 *)(param_2 + 0x2b8);
                    uStack_d80 = *(undefined8 *)(param_2 + 0x2b0);
                    uStack_d68 = *(undefined8 *)(param_2 + 0x2c8);
                    uStack_d70 = *(undefined8 *)(param_2 + 0x2c0);
                    uStack_8e8 = *(undefined8 *)(param_2 + 0x2b8);
                    uStack_8f0 = *(undefined8 *)(param_2 + 0x2b0);
                    uStack_1028 = *(undefined8 *)(param_2 + 0x2c8);
                    uStack_8e0 = *(undefined8 *)(param_2 + 0x2c0);
                    uStack_1018 = *(ulong *)(param_2 + 0x2d8);
                    uStack_1020 = *(ulong *)(param_2 + 0x2d0);
                    uStack_d48 = *(undefined8 *)(param_2 + 0x2e8);
                    uStack_d50 = *(undefined8 *)(param_2 + 0x2e0);
                    uStack_d58 = *(undefined8 *)(param_2 + 0x2d8);
                    uStack_d60 = *(undefined8 *)(param_2 + 0x2d0);
                    uStack_1008 = *(undefined8 *)(param_2 + 0x2e8);
                    uStack_1010 = *(undefined8 *)(param_2 + 0x2e0);
                    uStack_908._0_1_ = (char)uStack_d98;
                    uStack_930 = uStack_dc0;
                    uStack_928 = uStack_db8;
                    uStack_920 = uStack_db0;
                    uStack_918 = uStack_da8;
                    uStack_910 = uStack_da0;
                    uStack_908 = uStack_d98;
                    uStack_900 = uStack_d90;
                    uStack_8f8 = uStack_d88;
                    uStack_8d8 = uStack_1028;
                    uStack_8d0 = uStack_1020;
                    uStack_8c8 = uStack_1018;
                    uStack_8c0 = uStack_1010;
                    uStack_8b8 = uStack_1008;
                    if ((char)uStack_908 == '\x03') {
                      if ((uStack_1018 & 0xff) == 3) {
                        uStack_1078 = *(undefined8 *)(param_1 + 0x2b8);
                        uStack_1080 = *(undefined8 *)(param_1 + 0x2b0);
                        uStack_1068 = *(undefined8 *)(param_1 + 0x2c8);
                        uStack_1070 = *(undefined8 *)(param_1 + 0x2c0);
                        uStack_1058 = *(undefined8 *)(param_1 + 0x2d8);
                        uStack_1060 = *(undefined8 *)(param_1 + 0x2d0);
                        uStack_1048 = *(undefined8 *)(param_1 + 0x2e8);
                        uStack_1050 = *(undefined8 *)(param_1 + 0x2e0);
                        FUN_103559c70(&uStack_dc0,&uStack_f20,0x112f77a48,&UNK_10dbd9dc0);
                        FUN_103559c70(&uStack_d80,&uStack_f20,0x112f77a48,&UNK_10dbd9dc0);
                        func_0x000103559bf0(&uStack_1080,0x112f77a48,&UNK_10dbd9dc0);
LAB_10354a404:
                        func_0x000107c61428(param_1 + 0x2f0,&uStack_930,0,0);
                        func_0x000107c61428(param_2 + 0x2f0,&uStack_e80,0,0);
                        lVar13 = *(long *)(param_1 + 0x2f0);
                        uVar16 = *(ulong *)(param_1 + 0x2f8);
                        uVar12 = *(ulong *)(param_1 + 0x300);
                        lVar17 = *(long *)(param_2 + 0x2f0);
                        uVar15 = *(ulong *)(param_2 + 0x2f8);
                        uVar19 = *(ulong *)(param_2 + 0x300);
                        uVar6 = uVar12;
                        uVar7 = uVar16;
                        lVar18 = lVar13;
                        if (uVar12 >> 0x3c < 0xf) {
                          if (uVar19 >> 0x3c < 0xf) {
                            func_0x000100d55b38(lVar13,uVar16,uVar12);
                            if (lVar13 == lVar17) {
                              func_0x000100d55b38(lVar13,uVar15,uVar19);
                              uVar9 = uVar16;
                              func_0x000100e25fcc(uVar16,uVar12,uVar15,uVar19);
                              func_0x000100d55b58(lVar13,uVar15,uVar19);
                              if ((uVar9 & 1) == 0) goto LAB_10354a660;
                              goto LAB_10354a47c;
                            }
LAB_10354a634:
                            func_0x000100d55b38(lVar17,uVar15,uVar19);
                            goto LAB_10354a644;
                          }
                        }
                        else if (0xe < uVar19 >> 0x3c) {
                          func_0x000100d55b38(lVar13,uVar16,uVar12);
                          func_0x000100d55b38(lVar17,uVar15,uVar19);
LAB_10354a47c:
                          func_0x000100d55b58(lVar13,uVar16,uVar12);
                          func_0x000107c61428(param_1 + 0x308,auStack_ec0,0,0);
                          func_0x000107c61428(param_2 + 0x308,auStack_e08,0,0);
                          lVar13 = *(long *)(param_1 + 0x308);
                          uVar16 = *(ulong *)(param_1 + 0x310);
                          uVar12 = *(ulong *)(param_1 + 0x318);
                          lVar17 = *(long *)(param_2 + 0x308);
                          uVar15 = *(ulong *)(param_2 + 0x310);
                          uVar19 = *(ulong *)(param_2 + 0x318);
                          uVar6 = uVar12;
                          uVar7 = uVar16;
                          lVar18 = lVar13;
                          if (uVar12 >> 0x3c < 0xf) {
                            if (uVar19 >> 0x3c < 0xf) {
                              func_0x000100d55b38(lVar13,uVar16,uVar12);
                              if (lVar13 == lVar17) {
                                func_0x000100d55b38(lVar13,uVar15,uVar19);
                                uVar9 = uVar16;
                                func_0x000100e25fcc(uVar16,uVar12,uVar15,uVar19);
                                func_0x000100d55b58(lVar13,uVar15,uVar19);
                                if ((uVar9 & 1) != 0) goto LAB_10354a5cc;
                                goto LAB_10354a660;
                              }
                              goto LAB_10354a634;
                            }
                          }
                          else if (0xe < uVar19 >> 0x3c) {
                            func_0x000100d55b38(lVar13,uVar16,uVar12);
                            func_0x000100d55b38(lVar17,uVar15,uVar19);
LAB_10354a5cc:
                            func_0x000100d55b58(lVar13,uVar16,uVar12);
                            func_0x000107c61428(param_1 + 800,auStack_e20,0,0);
                            lVar17 = *(long *)(param_1 + 800);
                            func_0x000107c61428(param_2 + 800,auStack_e38,0,0);
                            lVar13 = *(long *)(param_2 + 800);
                            if (*(char *)(param_2 + 0x328) != '\x01') {
                              if (lVar17 != lVar13) {
                                return 0;
                              }
                              return 1;
                            }
                            if (3 < lVar13) {
                              if (5 < lVar13) {
                                if (lVar13 != 6) {
                                  if (lVar17 != 7) {
                                    return 0;
                                  }
                                  return 1;
                                }
                                if (lVar17 != 6) {
                                  return 0;
                                }
                                return 1;
                              }
                              if (lVar13 != 4) {
                                if (lVar17 != 5) {
                                  return 0;
                                }
                                return 1;
                              }
                              if (lVar17 != 4) {
                                return 0;
                              }
                              return 1;
                            }
                            if (1 < lVar13) {
                              if (lVar13 != 2) {
                                if (lVar17 != 3) {
                                  return 0;
                                }
                                return 1;
                              }
                              if (lVar17 != 2) {
                                return 0;
                              }
                              return 1;
                            }
                            if (lVar13 != 0) {
                              if (lVar17 != 1) {
                                return 0;
                              }
                              return 1;
                            }
                            if (lVar17 != 0) {
                              return 0;
                            }
                            return 1;
                          }
                        }
                        goto LAB_103549a70;
                      }
                    }
                    else if ((uStack_1018 & 0xff) != 3) {
                      uStack_1078 = *(undefined8 *)(param_2 + 0x2b8);
                      uStack_1080 = *(undefined8 *)(param_2 + 0x2b0);
                      uStack_1068 = *(undefined8 *)(param_2 + 0x2c8);
                      uStack_1070 = *(undefined8 *)(param_2 + 0x2c0);
                      uStack_1058 = *(undefined8 *)(param_2 + 0x2d8);
                      uStack_1060 = *(undefined8 *)(param_2 + 0x2d0);
                      uStack_1048 = *(undefined8 *)(param_2 + 0x2e8);
                      uStack_1050 = *(undefined8 *)(param_2 + 0x2e0);
                      uStack_f18 = *(undefined8 *)(param_1 + 0x2b8);
                      uStack_f20 = *(undefined8 *)(param_1 + 0x2b0);
                      uStack_f08 = *(undefined8 *)(param_1 + 0x2c8);
                      uStack_f10 = *(undefined8 *)(param_1 + 0x2c0);
                      uStack_ef8 = *(undefined8 *)(param_1 + 0x2d8);
                      uStack_f00 = *(undefined8 *)(param_1 + 0x2d0);
                      uStack_ee8 = *(undefined8 *)(param_1 + 0x2e8);
                      uStack_ef0 = *(undefined8 *)(param_1 + 0x2e0);
                      uStack_e80 = uStack_1080;
                      uStack_e78 = uStack_1078;
                      uStack_e70 = uStack_1070;
                      uStack_e68 = uStack_1068;
                      uStack_e60 = uStack_1060;
                      uStack_e58 = uStack_1058;
                      uStack_e50 = uStack_1050;
                      uStack_e48 = uStack_1048;
                      FUN_103559c70(&uStack_dc0,auStack_ec0,0x112f77a48,&UNK_10dbd9dc0);
                      FUN_103559c70(&uStack_d80,auStack_ec0,0x112f77a48,&UNK_10dbd9dc0);
                      puVar10 = &uStack_f20;
                      func_0x000103554810(puVar10,&uStack_1080);
                      func_0x000103559bf0(&uStack_e80,0x112f77a48,&UNK_10dbd9dc0);
                      func_0x000103559bf0(&uStack_930,0x112f77a48,&UNK_10dbd9dc0);
                      if (((ulong)puVar10 & 1) == 0) {
                        return 0;
                      }
                      goto LAB_10354a404;
                    }
                    uStack_1080 = uStack_dc0;
                    uStack_1078 = uStack_db8;
                    uStack_1070 = uStack_db0;
                    uStack_1068 = uStack_da8;
                    uStack_1060 = uStack_da0;
                    uStack_1058 = uStack_d98;
                    uStack_1050 = uStack_d90;
                    uStack_1048 = uStack_d88;
                    uStack_1040 = uStack_8f0;
                    uStack_1038 = uStack_8e8;
                    uStack_1030 = uStack_8e0;
                    FUN_103559c70(&uStack_dc0,&uStack_f20,0x112f77a48,&UNK_10dbd9dc0);
                    FUN_103559c70(&uStack_d80,&uStack_f20,0x112f77a48,&UNK_10dbd9dc0);
                    uVar14 = 0x112f77a50;
                    puVar11 = &UNK_10dbd9dc8;
LAB_10354a034:
                    func_0x000103559bf0(&uStack_1080,uVar14,puVar11);
                    return 0;
                  }
                  goto LAB_103549a70;
                }
              }
              else if ((uVar15 & 0xff) != 2) {
                func_0x000101541464(uVar16,uVar19,uVar14);
                func_0x000101541464(uVar15,uVar6,uVar20);
                if ((((uint)uVar15 ^ (uint)uVar16) & 1) != 0) {
                  func_0x000101556278(uVar15,uVar6,uVar20);
                  goto LAB_103549c84;
                }
                uVar7 = uVar19;
                func_0x000100e25fcc(uVar19,uVar14,uVar6,uVar20);
                func_0x000101556278(uVar15,uVar6,uVar20);
                if ((uVar7 & 1) == 0) goto LAB_103549c84;
                goto LAB_1035498a4;
              }
              func_0x000101541464(uVar16,uVar19,uVar14);
              func_0x000101541464(uVar15,uVar6,uVar20);
              func_0x000101556278(uVar16,uVar19,uVar14);
              uVar16 = uVar15;
              uVar19 = uVar6;
              uVar14 = uVar20;
LAB_103549c84:
              func_0x000101556278(uVar16,uVar19,uVar14);
              return 0;
            }
          }
        }
      }
    }
  }
LAB_103549a70:
  lVar13 = lVar17;
  uVar16 = uVar15;
  uVar12 = uVar19;
  func_0x000100d55b38(lVar18,uVar7,uVar6);
  func_0x000100d55b38(lVar13,uVar16,uVar12);
  func_0x000100d55b58(lVar18,uVar7,uVar6);
LAB_10354a660:
  func_0x000100d55b58(lVar13,uVar16,uVar12);
  return 0;
}



/* Entry: 10354a714; end: 10354a773;  */

void FUN_10354a714(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (lRam0000000112f77a58 != -1) {
    func_0x000107c61568(0x112f77a58,FUN_1035476d4);
  }
  uVar1 = uRam0000000112f77a60;
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 10354a774; end: 10354a797;  */

undefined1  [16] FUN_10354a774(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f155770;
  auVar1._0_8_ = 0xd000000000000030;
  return auVar1;
}



/* Entry: 10354a798; end: 10354a7c7;  */

undefined1  [16] FUN_10354a798(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 10354a7c8; end: 10354a7fb;  */

void FUN_10354a7c8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 10354a7fc; end: 10354a80f;  */

undefined8 FUN_10354a7fc(void)

{
  return 0x10354a80c;
}



/* Entry: 10354a810; end: 10354a847;  */

void FUN_10354a810(void)

{
  FUN_103547958();
  return;
}



/* Entry: 10354a848; end: 10354a84b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10354a848(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10354a84c; end: 10354a883;  */

uint FUN_10354a84c(long param_1,long param_2)

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
  func_0x000103559b84();
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



/* Entry: 10354a884; end: 10354a92b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10354a884(long *param_1)

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
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  byte *pbVar21;
  byte *unaff_x19;
  long lVar22;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar23;
  ulong unaff_x22;
  long lVar24;
  byte *unaff_x23;
  ulong uVar25;
  byte *unaff_x24;
  ulong uVar26;
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
  
  lVar22 = *param_1;
  uVar16 = param_1[1];
  uVar26 = param_1[2];
  pbVar9 = (byte *)*unaff_x20;
  pbVar23 = (byte *)unaff_x20[1];
  uVar25 = unaff_x20[2];
  if (uVar25 != uVar26) {
    func_0x000107c6157c(uVar25);
    func_0x000107c6157c(uVar26);
    uVar12 = uVar25;
    FUN_10354938c(uVar25,uVar26);
    func_0x000107c61574(uVar26);
    func_0x000107c61574(uVar25);
    if ((uVar12 & 1) == 0) {
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
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar23 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar20 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar13 = pbVar23;
    if ((ulong)pbVar23 >> 0x3e == 3) {
      uVar25 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar23 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar25 = 0, lVar22 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar25 = (ulong)pbVar23 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar19,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar25 = (ulong)(iVar19 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar20 == 0) {
        uVar26 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar22 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar22)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar25 == (long)(iVar19 - (int)lVar22)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar25 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar25 = 0;
      if (uVar20 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar20 == 2) {
        uVar26 = *(long *)(lVar22 + 0x18) - *(long *)(lVar22 + 0x10);
        if (SBORROW8(*(long *)(lVar22 + 0x18),*(long *)(lVar22 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar25 != uVar26) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar25 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar9;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar9 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar9 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar9 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar9 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar9 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar9 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar9 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar23;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar23 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar23 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar23 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar23 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar23 >> 0x28);
            pbVar13 = (byte *)((long)register0x00000008 + (((ulong)pbVar23 >> 0x30 & 0xff) - 0x70));
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
          unaff_x24 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar9 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar9;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar9;
            if (pbVar9 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar9;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar13 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar24 = *(long *)(pbVar9 + 0x10);
          unaff_x24 = *(byte **)(pbVar9 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar24,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + (lVar24 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar24;
          if (SBORROW8((long)unaff_x24,lVar24)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar9;
          unaff_x25 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar9;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (undefined8 *)((ulong)pbVar23 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar13,lVar22,
                            uVar16);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar16;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar25 == 0);
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
    pbVar21 = *(byte **)(pbVar8 + 0x18);
    bVar27 = pbVar8[0x28];
    pbVar23 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar14 = pbVar9;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar22 = *(long *)pbVar13;
          uVar10 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar22,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar22 = *(long *)pbVar13;
        uVar10 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar22,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 == pbVar15) && (pbVar23 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar22 = *(long *)(pbVar13 + 0x18);
        if ((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) {
          if (((pbVar8[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar21 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar22 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar22);
          func_0x000107c61174();
          pbVar9 = pbVar21;
          func_0x000107c60118();
          func_0x000107c61170(pbVar21);
          func_0x000107c61170(lVar22);
          pbVar21 = pbVar9;
joined_r0x000100e266a4:
          if (((ulong)pbVar21 & 1) == 0) {
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
      )(pbVar11,pbVar14,pbVar15,pbVar17,0);
      return pbVar11;
    }
    lVar24 = *(long *)(pbVar8 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) &&
           (pbVar11 = pbVar23, pbVar14 = pbVar21, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar23 == *(byte **)(pbVar13 + 0x10) && pbVar21 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar11 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar22 = *(long *)(pbVar13 + 0x20);
      if (pbVar23 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 != pbVar15) || (pbVar23 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar24 != 0) {
        if (lVar22 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar21 == *(byte **)(pbVar13 + 0x18)) && (lVar24 == lVar22)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar21,lVar24,*(byte **)(pbVar13 + 0x18),lVar22,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar22 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar24 == 0) && pbVar23 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar13 + 0x20);
        lVar22 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar22;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar24;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
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
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar23 == (byte *)0x0) &&
          lVar24 == 0)) {
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
      lVar24 = *(long *)(pbVar13 + 0x20);
      lVar22 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar22;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar24;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
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
      lVar22 = CONCAT17(bVar34 | auVar43[7],
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
    lVar22 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar24 = *(long *)pbVar13;
    uVar10 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar24,uVar10);
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



/* Entry: 10354a92c; end: 10354a9cb;  */

/* WARNING: Possible PIC construction at 0x00010354a978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010354a988: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010354a97c) */
/* WARNING: Removing unreachable block (ram,0x00010354a98c) */

void FUN_10354a92c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f77a68 != -1) {
    func_0x000107c61568(0x112f77a68,FUN_10354768c);
  }
  uVar5 = uRam0000000113808548;
  uVar4 = uRam0000000113808540;
  uVar3 = uRam0000000113808538;
  uVar2 = uRam0000000113808530;
  uVar1 = uRam0000000113808528;
  *param_1 = uRam0000000113808520;
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



/* Entry: 10354a9cc; end: 10354aa07;  */

void FUN_10354a9cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f77e28;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f77e28,&UNK_10dbda4c0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10354aa08; end: 10354ab0b;  */

void FUN_10354aa08(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = unaff_x20[2];
  uStack_48 = unaff_x20[1];
  uStack_50 = *unaff_x20;
  func_0x000107c6068c(auStack_98,0);
  func_0x000107c5fa50(auStack_98,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10354ab0c; end: 10354abb3;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10354ab0c(undefined8 *param_1,long *param_2)

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
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  byte *pbVar21;
  byte *unaff_x19;
  long lVar22;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar23;
  ulong unaff_x22;
  long lVar24;
  byte *unaff_x23;
  ulong uVar25;
  byte *unaff_x24;
  ulong uVar26;
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
  
  pbVar9 = (byte *)*param_1;
  pbVar23 = (byte *)param_1[1];
  uVar25 = param_1[2];
  lVar22 = *param_2;
  uVar16 = param_2[1];
  uVar26 = param_2[2];
  if (uVar25 != uVar26) {
    func_0x000107c6157c(uVar25);
    func_0x000107c6157c(uVar26);
    uVar12 = uVar25;
    FUN_10354938c(uVar25,uVar26);
    func_0x000107c61574(uVar26);
    func_0x000107c61574(uVar25);
    if ((uVar12 & 1) == 0) {
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
    uVar4 = (uint)((ulong)pbVar23 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar20 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar13 = pbVar23;
    if ((ulong)pbVar23 >> 0x3e == 3) {
      uVar25 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar23 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar25 = 0, lVar22 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar25 = (ulong)pbVar23 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar19,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar25 = (ulong)(iVar19 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar20 == 0) {
        uVar26 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar22 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar22)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar25 == (long)(iVar19 - (int)lVar22)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar25 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar25 = 0;
      if (uVar20 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar20 == 2) {
        uVar26 = *(long *)(lVar22 + 0x18) - *(long *)(lVar22 + 0x10);
        if (SBORROW8(*(long *)(lVar22 + 0x18),*(long *)(lVar22 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar25 != uVar26) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar25 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar9;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar9 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar9 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar9 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar9 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar9 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar9 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar9 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar23;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar23 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar23 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar23 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar23 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar23 >> 0x28);
            pbVar13 = (byte *)((long)register0x00000008 + (((ulong)pbVar23 >> 0x30 & 0xff) - 0x70));
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
          unaff_x24 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar9 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar9;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar9;
            if (pbVar9 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar9;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar13 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar24 = *(long *)(pbVar9 + 0x10);
          unaff_x24 = *(byte **)(pbVar9 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar24,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + (lVar24 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar24;
          if (SBORROW8((long)unaff_x24,lVar24)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar9;
          unaff_x25 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar9;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar23 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar13,lVar22,
                            uVar16);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar16;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar25 == 0);
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
    pbVar11 = *(byte **)pbVar8;
    pbVar9 = *(byte **)(pbVar8 + 8);
    pbVar21 = *(byte **)(pbVar8 + 0x18);
    bVar27 = pbVar8[0x28];
    pbVar23 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar14 = pbVar9;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar22 = *(long *)pbVar13;
          uVar10 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar22,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar22 = *(long *)pbVar13;
        uVar10 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar22,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 == pbVar15) && (pbVar23 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar22 = *(long *)(pbVar13 + 0x18);
        if ((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) {
          if (((pbVar8[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar21 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar22 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar22);
          func_0x000107c61174();
          pbVar9 = pbVar21;
          func_0x000107c60118();
          func_0x000107c61170(pbVar21);
          func_0x000107c61170(lVar22);
          pbVar21 = pbVar9;
joined_r0x000100e266a4:
          if (((ulong)pbVar21 & 1) == 0) {
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
      )(pbVar11,pbVar14,pbVar15,pbVar17,0);
      return pbVar11;
    }
    lVar24 = *(long *)(pbVar8 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) &&
           (pbVar11 = pbVar23, pbVar14 = pbVar21, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar23 == *(byte **)(pbVar13 + 0x10) && pbVar21 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar11 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar22 = *(long *)(pbVar13 + 0x20);
      if (pbVar23 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 != pbVar15) || (pbVar23 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar24 != 0) {
        if (lVar22 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar21 == *(byte **)(pbVar13 + 0x18)) && (lVar24 == lVar22)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar21,lVar24,*(byte **)(pbVar13 + 0x18),lVar22,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar22 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar24 == 0) && pbVar23 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar13 + 0x20);
        lVar22 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar22;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar24;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
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
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar23 == (byte *)0x0) &&
          lVar24 == 0)) {
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
      lVar24 = *(long *)(pbVar13 + 0x20);
      lVar22 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar22;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar24;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
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
      lVar22 = CONCAT17(bVar34 | auVar43[7],
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
    lVar22 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar24 = *(long *)pbVar13;
    uVar10 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar24,uVar10);
    if (((ulong)pbVar11 & 1) == 0) {
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



/* Entry: 10354abb4; end: 10354abfb;  */

void FUN_10354abb4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbda6c0,200,2);
  uRam0000000113808558 = uStack_38;
  uRam0000000113808550 = uStack_40;
  uRam0000000113808568 = uStack_28;
  uRam0000000113808560 = uStack_30;
  uRam0000000113808578 = uStack_18;
  uRam0000000113808570 = uStack_20;
  return;
}



/* Entry: 10354abfc; end: 10354ae77;  */

/* WARNING: Removing unreachable block (ram,0x00010354ae04) */
/* WARNING: Removing unreachable block (ram,0x00010354adcc) */
/* WARNING: Removing unreachable block (ram,0x00010354ad74) */
/* WARNING: Removing unreachable block (ram,0x00010354ad20) */
/* WARNING: Removing unreachable block (ram,0x00010354ae20) */
/* WARNING: Removing unreachable block (ram,0x00010354ad04) */
/* WARNING: Removing unreachable block (ram,0x00010354ad58) */
/* WARNING: Removing unreachable block (ram,0x00010354ae58) */
/* WARNING: Removing unreachable block (ram,0x00010354ae74) */
/* WARNING: Removing unreachable block (ram,0x00010354ae3c) */
/* WARNING: Removing unreachable block (ram,0x00010354ad3c) */
/* WARNING: Removing unreachable block (ram,0x00010354ad90) */

void FUN_10354abfc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  uVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x0001015d5420();
        goto code_r0x00010354ac88;
      case 2:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x0001015d5420();
        goto code_r0x00010354ac88;
      case 3:
        pcVar3 = *(code **)(param_3 + 0x180);
        func_0x000103502754();
        goto code_r0x00010354ac88;
      case 4:
        pcVar3 = *(code **)(param_3 + 0x180);
        func_0x000101568cc4();
code_r0x00010354ac88:
        (*pcVar3)();
        break;
      case 5:
        FUN_10354ae78();
        break;
      case 6:
        FUN_10354b238();
        break;
      case 7:
        FUN_10354b5b0();
        break;
      case 8:
        FUN_10354b998();
        break;
      case 9:
        FUN_10354bd10();
        break;
      case 10:
        FUN_10354c188();
        break;
      case 0xb:
        FUN_10354c500();
        break;
      case 0xc:
        FUN_10354c8e8();
        break;
      case 0xd:
        FUN_10354cce8();
        break;
      case 0xe:
        FUN_10354d0d0();
        break;
      case 0xf:
        FUN_10354d4b8();
        break;
      case 0x10:
        FUN_10354da8c();
      }
      uVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 10354ae78; end: 10354b237;  */

/* WARNING: Removing unreachable block (ram,0x00010354b0dc) */

void FUN_10354ae78(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long unaff_x21;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  long lStack_488;
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
  undefined1 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  long lStack_3c0;
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
  undefined1 uStack_320;
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
  undefined1 uStack_250;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_220;
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
  undefined1 uStack_150;
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
  undefined1 uStack_80;
  
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_a8 = *(undefined8 *)(param_1 + 0xb8);
  uStack_b0 = *(undefined8 *)(param_1 + 0xb0);
  uStack_168 = *(undefined8 *)(param_1 + 200);
  uStack_170 = *(undefined8 *)(param_1 + 0xc0);
  uStack_98 = *(undefined8 *)(param_1 + 200);
  uStack_a0 = *(undefined8 *)(param_1 + 0xc0);
  uStack_158 = *(undefined8 *)(param_1 + 0xd8);
  uStack_160 = *(undefined8 *)(param_1 + 0xd0);
  uStack_e8 = *(undefined8 *)(param_1 + 0x78);
  uStack_f0 = *(undefined8 *)(param_1 + 0x70);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x88);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x80);
  uStack_d8 = *(undefined8 *)(param_1 + 0x88);
  uStack_e0 = *(undefined8 *)(param_1 + 0x80);
  uStack_198 = *(undefined8 *)(param_1 + 0x98);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x90);
  uStack_c8 = *(undefined8 *)(param_1 + 0x98);
  uStack_d0 = *(undefined8 *)(param_1 + 0x90);
  uStack_188 = *(undefined8 *)(param_1 + 0xa8);
  uStack_190 = *(undefined8 *)(param_1 + 0xa0);
  uStack_b8 = *(undefined8 *)(param_1 + 0xa8);
  uStack_c0 = *(undefined8 *)(param_1 + 0xa0);
  uStack_178 = *(undefined8 *)(param_1 + 0xb8);
  uStack_180 = *(undefined8 *)(param_1 + 0xb0);
  uStack_128 = *(undefined8 *)(param_1 + 0x38);
  uStack_130 = *(undefined8 *)(param_1 + 0x30);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x48);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x40);
  uStack_118 = *(undefined8 *)(param_1 + 0x48);
  uStack_120 = *(undefined8 *)(param_1 + 0x40);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x58);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x50);
  uStack_108 = *(undefined8 *)(param_1 + 0x58);
  uStack_110 = *(undefined8 *)(param_1 + 0x50);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x68);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x60);
  uStack_f8 = *(undefined8 *)(param_1 + 0x68);
  uStack_100 = *(undefined8 *)(param_1 + 0x60);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x78);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x70);
  uStack_208 = *(undefined8 *)(param_1 + 0x28);
  uStack_210 = *(undefined8 *)(param_1 + 0x20);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x38);
  uStack_200 = *(undefined8 *)(param_1 + 0x30);
  uStack_138 = *(undefined8 *)(param_1 + 0x28);
  uStack_140 = *(undefined8 *)(param_1 + 0x20);
  uStack_88 = *(undefined8 *)(param_1 + 0xd8);
  uStack_90 = *(undefined8 *)(param_1 + 0xd0);
  lStack_220 = 1;
  uStack_150 = *(undefined1 *)(param_1 + 0xe0);
  uStack_80 = *(undefined1 *)(param_1 + 0xe0);
  puVar2 = &uStack_210;
  FUN_103554bd8();
  iVar1 = (int)puVar2;
  if (iVar1 != 1) {
    uStack_268 = uStack_98;
    uStack_270 = uStack_a0;
    uStack_258 = uStack_88;
    uStack_260 = uStack_90;
    uStack_250 = uStack_80;
    uStack_2a8 = uStack_d8;
    uStack_2b0 = uStack_e0;
    uStack_298 = uStack_c8;
    uStack_2a0 = uStack_d0;
    uStack_288 = uStack_b8;
    uStack_290 = uStack_c0;
    uStack_278 = uStack_a8;
    uStack_280 = uStack_b0;
    uStack_2e8 = uStack_118;
    uStack_2f0 = uStack_120;
    uStack_2d8 = uStack_108;
    uStack_2e0 = uStack_110;
    uStack_2c8 = uStack_f8;
    uStack_2d0 = uStack_100;
    uStack_2b8 = uStack_e8;
    uStack_2c0 = uStack_f0;
    uStack_308 = uStack_138;
    uStack_310 = uStack_140;
    uStack_2f8 = uStack_128;
    uStack_300 = uStack_130;
    puVar2 = &uStack_140;
    func_0x000103554bec();
    if ((int)puVar2 == 0) {
      puVar2 = &uStack_310;
      func_0x000103554bf4();
      lVar3 = puVar2[4];
      uVar8 = puVar2[1];
      uVar7 = *puVar2;
      uVar6 = puVar2[3];
      uVar5 = puVar2[2];
      uStack_338 = uStack_168;
      uStack_340 = uStack_170;
      uStack_328 = uStack_158;
      uStack_330 = uStack_160;
      uStack_320 = uStack_150;
      uStack_378 = uStack_1a8;
      uStack_380 = uStack_1b0;
      uStack_368 = uStack_198;
      uStack_370 = uStack_1a0;
      uStack_358 = uStack_188;
      uStack_360 = uStack_190;
      uStack_348 = uStack_178;
      uStack_350 = uStack_180;
      uStack_3b8 = uStack_1e8;
      lStack_3c0 = uStack_1f0;
      uStack_3a8 = uStack_1d8;
      uStack_3b0 = uStack_1e0;
      uStack_398 = uStack_1c8;
      uStack_3a0 = uStack_1d0;
      uStack_388 = uStack_1b8;
      uStack_390 = uStack_1c0;
      uStack_3d8 = uStack_208;
      uStack_3e0 = uStack_210;
      uStack_3c8 = uStack_1f8;
      uStack_3d0 = uStack_200;
      FUN_103554bf8(&uStack_3e0,&uStack_4a8);
      puVar2 = (undefined8 *)0x0;
      FUN_103502f94(0,0,0,0,1);
      uStack_240 = uVar7;
      uStack_238 = uVar8;
      uStack_230 = uVar5;
      uStack_228 = uVar6;
      lStack_220 = lVar3;
    }
  }
  pcVar4 = *(code **)(param_4 + 0x198);
  func_0x000103502794();
  (*pcVar4)(&uStack_240,&UNK_110669320,puVar2,param_3,param_4);
  lVar3 = lStack_220;
  uVar8 = uStack_228;
  uVar7 = uStack_230;
  uVar6 = uStack_238;
  uVar5 = uStack_240;
  if (unaff_x21 == 0) {
    if (lStack_220 == 1) {
      FUN_103502f94(uStack_240,uStack_238,uStack_230,uStack_228,1);
    }
    else {
      if (iVar1 == 1) {
        func_0x00010006c00c();
        func_0x0001034b0db8(uVar7,uVar8,lVar3);
      }
      else {
        pcVar4 = *(code **)(param_4 + 8);
        func_0x00010006c00c();
        func_0x0001034b0db8(uVar7,uVar8,lVar3);
        (*pcVar4)(param_3,param_4);
      }
      FUN_103502f94(uStack_240,uStack_238,uStack_230,uStack_228,lStack_220);
      uStack_4a8 = uVar5;
      uStack_4a0 = uVar6;
      uStack_498 = uVar7;
      uStack_490 = uVar8;
      lStack_488 = lVar3;
      func_0x0001034b0e14(&uStack_4a8);
      uStack_338 = uStack_400;
      uStack_340 = uStack_408;
      uStack_328 = uStack_3f0;
      uStack_330 = uStack_3f8;
      uStack_320 = uStack_3e8;
      uStack_378 = uStack_440;
      uStack_380 = uStack_448;
      uStack_368 = uStack_430;
      uStack_370 = uStack_438;
      uStack_358 = uStack_420;
      uStack_360 = uStack_428;
      uStack_348 = uStack_410;
      uStack_350 = uStack_418;
      uStack_3b8 = uStack_480;
      lStack_3c0 = lStack_488;
      uStack_3a8 = uStack_470;
      uStack_3b0 = uStack_478;
      uStack_398 = uStack_460;
      uStack_3a0 = uStack_468;
      uStack_388 = uStack_450;
      uStack_390 = uStack_458;
      uStack_3d8 = uStack_4a0;
      uStack_3e0 = uStack_4a8;
      uStack_3c8 = uStack_490;
      uStack_3d0 = uStack_498;
      func_0x0001034b0d74(&uStack_3e0);
      uStack_268 = *(undefined8 *)(param_1 + 200);
      uStack_270 = *(undefined8 *)(param_1 + 0xc0);
      uStack_258 = *(undefined8 *)(param_1 + 0xd8);
      uStack_260 = *(undefined8 *)(param_1 + 0xd0);
      uStack_250 = *(undefined1 *)(param_1 + 0xe0);
      uStack_2a8 = *(undefined8 *)(param_1 + 0x88);
      uStack_2b0 = *(undefined8 *)(param_1 + 0x80);
      uStack_298 = *(undefined8 *)(param_1 + 0x98);
      uStack_2a0 = *(undefined8 *)(param_1 + 0x90);
      uStack_288 = *(undefined8 *)(param_1 + 0xa8);
      uStack_290 = *(undefined8 *)(param_1 + 0xa0);
      uStack_278 = *(undefined8 *)(param_1 + 0xb8);
      uStack_280 = *(undefined8 *)(param_1 + 0xb0);
      uStack_2e8 = *(undefined8 *)(param_1 + 0x48);
      uStack_2f0 = *(undefined8 *)(param_1 + 0x40);
      uStack_2d8 = *(undefined8 *)(param_1 + 0x58);
      uStack_2e0 = *(undefined8 *)(param_1 + 0x50);
      uStack_2c8 = *(undefined8 *)(param_1 + 0x68);
      uStack_2d0 = *(undefined8 *)(param_1 + 0x60);
      uStack_2b8 = *(undefined8 *)(param_1 + 0x78);
      uStack_2c0 = *(undefined8 *)(param_1 + 0x70);
      uStack_308 = *(undefined8 *)(param_1 + 0x28);
      uStack_310 = *(undefined8 *)(param_1 + 0x20);
      uStack_2f8 = *(undefined8 *)(param_1 + 0x38);
      uStack_300 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 200) = uStack_338;
      *(undefined8 *)(param_1 + 0xc0) = uStack_340;
      *(undefined8 *)(param_1 + 0xd8) = uStack_328;
      *(undefined8 *)(param_1 + 0xd0) = uStack_330;
      *(undefined1 *)(param_1 + 0xe0) = uStack_320;
      *(undefined8 *)(param_1 + 0x88) = uStack_378;
      *(undefined8 *)(param_1 + 0x80) = uStack_380;
      *(undefined8 *)(param_1 + 0x98) = uStack_368;
      *(undefined8 *)(param_1 + 0x90) = uStack_370;
      *(undefined8 *)(param_1 + 0xa8) = uStack_358;
      *(undefined8 *)(param_1 + 0xa0) = uStack_360;
      *(undefined8 *)(param_1 + 0xb8) = uStack_348;
      *(undefined8 *)(param_1 + 0xb0) = uStack_350;
      *(undefined8 *)(param_1 + 0x48) = uStack_3b8;
      *(long *)(param_1 + 0x40) = lStack_3c0;
      *(undefined8 *)(param_1 + 0x58) = uStack_3a8;
      *(undefined8 *)(param_1 + 0x50) = uStack_3b0;
      *(undefined8 *)(param_1 + 0x68) = uStack_398;
      *(undefined8 *)(param_1 + 0x60) = uStack_3a0;
      *(undefined8 *)(param_1 + 0x78) = uStack_388;
      *(undefined8 *)(param_1 + 0x70) = uStack_390;
      *(undefined8 *)(param_1 + 0x28) = uStack_3d8;
      *(undefined8 *)(param_1 + 0x20) = uStack_3e0;
      *(undefined8 *)(param_1 + 0x38) = uStack_3c8;
      *(undefined8 *)(param_1 + 0x30) = uStack_3d0;
      func_0x000103559bf0(&uStack_310,0x112f73130,&UNK_10dbce400);
    }
  }
  else {
    FUN_103502f94(uStack_240,uStack_238,uStack_230,uStack_228,lStack_220);
  }
  return;
}



/* Entry: 10354b238; end: 10354b5af;  */

/* WARNING: Removing unreachable block (ram,0x00010354b490) */

void FUN_10354b238(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long unaff_x21;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_488;
  undefined8 uStack_480;
  long lStack_478;
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
  undefined1 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  long lStack_3b0;
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
  undefined1 uStack_300;
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
  undefined1 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long lStack_218;
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
  undefined1 uStack_150;
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
  undefined1 uStack_80;
  
  uStack_a8 = *(undefined8 *)(param_1 + 0xb8);
  uStack_b0 = *(undefined8 *)(param_1 + 0xb0);
  uStack_168 = *(undefined8 *)(param_1 + 200);
  uStack_170 = *(undefined8 *)(param_1 + 0xc0);
  uStack_98 = *(undefined8 *)(param_1 + 200);
  uStack_a0 = *(undefined8 *)(param_1 + 0xc0);
  uStack_158 = *(undefined8 *)(param_1 + 0xd8);
  uStack_160 = *(undefined8 *)(param_1 + 0xd0);
  uStack_e8 = *(undefined8 *)(param_1 + 0x78);
  uStack_f0 = *(undefined8 *)(param_1 + 0x70);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x88);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x80);
  uStack_d8 = *(undefined8 *)(param_1 + 0x88);
  uStack_e0 = *(undefined8 *)(param_1 + 0x80);
  uStack_198 = *(undefined8 *)(param_1 + 0x98);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x90);
  uStack_c8 = *(undefined8 *)(param_1 + 0x98);
  uStack_d0 = *(undefined8 *)(param_1 + 0x90);
  uStack_188 = *(undefined8 *)(param_1 + 0xa8);
  uStack_190 = *(undefined8 *)(param_1 + 0xa0);
  uStack_b8 = *(undefined8 *)(param_1 + 0xa8);
  uStack_c0 = *(undefined8 *)(param_1 + 0xa0);
  uStack_178 = *(undefined8 *)(param_1 + 0xb8);
  uStack_180 = *(undefined8 *)(param_1 + 0xb0);
  uStack_128 = *(undefined8 *)(param_1 + 0x38);
  uStack_130 = *(undefined8 *)(param_1 + 0x30);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x48);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x40);
  uStack_118 = *(undefined8 *)(param_1 + 0x48);
  uStack_120 = *(undefined8 *)(param_1 + 0x40);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x58);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x50);
  uStack_108 = *(undefined8 *)(param_1 + 0x58);
  uStack_110 = *(undefined8 *)(param_1 + 0x50);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x68);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x60);
  uStack_f8 = *(undefined8 *)(param_1 + 0x68);
  uStack_100 = *(undefined8 *)(param_1 + 0x60);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x78);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x70);
  uStack_208 = *(undefined8 *)(param_1 + 0x28);
  uStack_210 = *(undefined8 *)(param_1 + 0x20);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x38);
  uStack_200 = *(undefined8 *)(param_1 + 0x30);
  uStack_138 = *(undefined8 *)(param_1 + 0x28);
  uStack_140 = *(undefined8 *)(param_1 + 0x20);
  uStack_88 = *(undefined8 *)(param_1 + 0xd8);
  uStack_90 = *(undefined8 *)(param_1 + 0xd0);
  uStack_220 = 0;
  uStack_228 = 0;
  lStack_218 = 0;
  uStack_150 = *(undefined1 *)(param_1 + 0xe0);
  uStack_80 = *(undefined1 *)(param_1 + 0xe0);
  puVar2 = &uStack_210;
  FUN_103554bd8();
  iVar1 = (int)puVar2;
  if (iVar1 != 1) {
    uStack_248 = uStack_98;
    uStack_250 = uStack_a0;
    uStack_238 = uStack_88;
    uStack_240 = uStack_90;
    uStack_230 = uStack_80;
    uStack_288 = uStack_d8;
    uStack_290 = uStack_e0;
    uStack_278 = uStack_c8;
    uStack_280 = uStack_d0;
    uStack_268 = uStack_b8;
    uStack_270 = uStack_c0;
    uStack_258 = uStack_a8;
    uStack_260 = uStack_b0;
    uStack_2c8 = uStack_118;
    uStack_2d0 = uStack_120;
    uStack_2b8 = uStack_108;
    uStack_2c0 = uStack_110;
    uStack_2a8 = uStack_f8;
    uStack_2b0 = uStack_100;
    uStack_298 = uStack_e8;
    uStack_2a0 = uStack_f0;
    uStack_2e8 = uStack_138;
    uStack_2f0 = uStack_140;
    uStack_2d8 = uStack_128;
    uStack_2e0 = uStack_130;
    puVar2 = &uStack_140;
    func_0x000103554bec();
    if ((int)puVar2 == 1) {
      puVar2 = &uStack_2f0;
      FUN_103554c2c();
      uVar6 = puVar2[1];
      uVar5 = *puVar2;
      lVar3 = puVar2[2];
      uStack_398 = uStack_1e8;
      uStack_3a0 = uStack_1f0;
      uStack_388 = uStack_1d8;
      uStack_390 = uStack_1e0;
      uStack_358 = uStack_1a8;
      uStack_360 = uStack_1b0;
      uStack_348 = uStack_198;
      uStack_350 = uStack_1a0;
      uStack_378 = uStack_1c8;
      uStack_380 = uStack_1d0;
      uStack_368 = uStack_1b8;
      uStack_370 = uStack_1c0;
      uStack_300 = uStack_150;
      uStack_318 = uStack_168;
      uStack_320 = uStack_170;
      uStack_308 = uStack_158;
      uStack_310 = uStack_160;
      uStack_338 = uStack_188;
      uStack_340 = uStack_190;
      uStack_328 = uStack_178;
      uStack_330 = uStack_180;
      uStack_3b8 = uStack_208;
      uStack_3c0 = uStack_210;
      uStack_3a8 = uStack_1f8;
      lStack_3b0 = uStack_200;
      FUN_103554bf8(&uStack_3c0,&uStack_488);
      puVar2 = (undefined8 *)0x0;
      FUN_103559bc4(0,0,0);
      uStack_228 = uVar5;
      uStack_220 = uVar6;
      lStack_218 = lVar3;
    }
  }
  pcVar4 = *(code **)(param_4 + 0x198);
  func_0x0001035027d4();
  (*pcVar4)(&uStack_228,&UNK_110667f00,puVar2,param_3,param_4);
  lVar3 = lStack_218;
  uVar6 = uStack_220;
  uVar5 = uStack_228;
  if (unaff_x21 == 0) {
    if (lStack_218 != 0) {
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
      FUN_103559bc4(uStack_228,uStack_220,lStack_218);
      uStack_488 = uVar5;
      uStack_480 = uVar6;
      lStack_478 = lVar3;
      func_0x0001034b0e08(&uStack_488);
      uStack_318 = uStack_3e0;
      uStack_320 = uStack_3e8;
      uStack_308 = uStack_3d0;
      uStack_310 = uStack_3d8;
      uStack_300 = uStack_3c8;
      uStack_358 = uStack_420;
      uStack_360 = uStack_428;
      uStack_348 = uStack_410;
      uStack_350 = uStack_418;
      uStack_338 = uStack_400;
      uStack_340 = uStack_408;
      uStack_328 = uStack_3f0;
      uStack_330 = uStack_3f8;
      uStack_398 = uStack_460;
      uStack_3a0 = uStack_468;
      uStack_388 = uStack_450;
      uStack_390 = uStack_458;
      uStack_378 = uStack_440;
      uStack_380 = uStack_448;
      uStack_368 = uStack_430;
      uStack_370 = uStack_438;
      uStack_3b8 = uStack_480;
      uStack_3c0 = uStack_488;
      uStack_3a8 = uStack_470;
      lStack_3b0 = lStack_478;
      func_0x0001034b0d74(&uStack_3c0);
      uStack_248 = *(undefined8 *)(param_1 + 200);
      uStack_250 = *(undefined8 *)(param_1 + 0xc0);
      uStack_238 = *(undefined8 *)(param_1 + 0xd8);
      uStack_240 = *(undefined8 *)(param_1 + 0xd0);
      uStack_230 = *(undefined1 *)(param_1 + 0xe0);
      uStack_288 = *(undefined8 *)(param_1 + 0x88);
      uStack_290 = *(undefined8 *)(param_1 + 0x80);
      uStack_278 = *(undefined8 *)(param_1 + 0x98);
      uStack_280 = *(undefined8 *)(param_1 + 0x90);
      uStack_268 = *(undefined8 *)(param_1 + 0xa8);
      uStack_270 = *(undefined8 *)(param_1 + 0xa0);
      uStack_258 = *(undefined8 *)(param_1 + 0xb8);
      uStack_260 = *(undefined8 *)(param_1 + 0xb0);
      uStack_2c8 = *(undefined8 *)(param_1 + 0x48);
      uStack_2d0 = *(undefined8 *)(param_1 + 0x40);
      uStack_2b8 = *(undefined8 *)(param_1 + 0x58);
      uStack_2c0 = *(undefined8 *)(param_1 + 0x50);
      uStack_2a8 = *(undefined8 *)(param_1 + 0x68);
      uStack_2b0 = *(undefined8 *)(param_1 + 0x60);
      uStack_298 = *(undefined8 *)(param_1 + 0x78);
      uStack_2a0 = *(undefined8 *)(param_1 + 0x70);
      uStack_2e8 = *(undefined8 *)(param_1 + 0x28);
      uStack_2f0 = *(undefined8 *)(param_1 + 0x20);
      uStack_2d8 = *(undefined8 *)(param_1 + 0x38);
      uStack_2e0 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 200) = uStack_318;
      *(undefined8 *)(param_1 + 0xc0) = uStack_320;
      *(undefined8 *)(param_1 + 0xd8) = uStack_308;
      *(undefined8 *)(param_1 + 0xd0) = uStack_310;
      *(undefined1 *)(param_1 + 0xe0) = uStack_300;
      *(undefined8 *)(param_1 + 0x88) = uStack_358;
      *(undefined8 *)(param_1 + 0x80) = uStack_360;
      *(undefined8 *)(param_1 + 0x98) = uStack_348;
      *(undefined8 *)(param_1 + 0x90) = uStack_350;
      *(undefined8 *)(param_1 + 0xa8) = uStack_338;
      *(undefined8 *)(param_1 + 0xa0) = uStack_340;
      *(undefined8 *)(param_1 + 0xb8) = uStack_328;
      *(undefined8 *)(param_1 + 0xb0) = uStack_330;
      *(undefined8 *)(param_1 + 0x48) = uStack_398;
      *(undefined8 *)(param_1 + 0x40) = uStack_3a0;
      *(undefined8 *)(param_1 + 0x58) = uStack_388;
      *(undefined8 *)(param_1 + 0x50) = uStack_390;
      *(undefined8 *)(param_1 + 0x68) = uStack_378;
      *(undefined8 *)(param_1 + 0x60) = uStack_380;
      *(undefined8 *)(param_1 + 0x78) = uStack_368;
      *(undefined8 *)(param_1 + 0x70) = uStack_370;
      *(undefined8 *)(param_1 + 0x28) = uStack_3b8;
      *(undefined8 *)(param_1 + 0x20) = uStack_3c0;
      *(undefined8 *)(param_1 + 0x38) = uStack_3a8;
      *(long *)(param_1 + 0x30) = lStack_3b0;
      func_0x000103559bf0(&uStack_2f0,0x112f73130,&UNK_10dbce400);
      return;
    }
    lVar3 = 0;
  }
  FUN_103559bc4(uStack_228,uStack_220,lVar3);
  return;
}



/* Entry: 10354b5b0; end: 10354b997;  */

/* WARNING: Removing unreachable block (ram,0x00010354b870) */

void FUN_10354b5b0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  long lStack_500;
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
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined1 uStack_460;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  long lStack_430;
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
  undefined1 uStack_390;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  long lStack_360;
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
  undefined1 uStack_2c0;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
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
  
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_88 = *(undefined8 *)(param_1 + 0xb8);
  uStack_90 = *(undefined8 *)(param_1 + 0xb0);
  uStack_148 = *(undefined8 *)(param_1 + 200);
  uStack_150 = *(undefined8 *)(param_1 + 0xc0);
  uStack_78 = *(undefined8 *)(param_1 + 200);
  uStack_80 = *(undefined8 *)(param_1 + 0xc0);
  uStack_138 = *(undefined8 *)(param_1 + 0xd8);
  uStack_140 = *(undefined8 *)(param_1 + 0xd0);
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
  uStack_98 = *(undefined8 *)(param_1 + 0xa8);
  uStack_a0 = *(undefined8 *)(param_1 + 0xa0);
  uStack_158 = *(undefined8 *)(param_1 + 0xb8);
  uStack_160 = *(undefined8 *)(param_1 + 0xb0);
  uStack_108 = *(undefined8 *)(param_1 + 0x38);
  uStack_110 = *(undefined8 *)(param_1 + 0x30);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x48);
  lStack_1d0 = *(long *)(param_1 + 0x40);
  uStack_f8 = *(undefined8 *)(param_1 + 0x48);
  uStack_100 = *(undefined8 *)(param_1 + 0x40);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x58);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x50);
  uStack_e8 = *(undefined8 *)(param_1 + 0x58);
  uStack_f0 = *(undefined8 *)(param_1 + 0x50);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x68);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x60);
  uStack_d8 = *(undefined8 *)(param_1 + 0x68);
  uStack_e0 = *(undefined8 *)(param_1 + 0x60);
  uStack_198 = *(undefined8 *)(param_1 + 0x78);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x70);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x28);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x20);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x38);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x30);
  uStack_118 = *(undefined8 *)(param_1 + 0x28);
  uStack_120 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = *(undefined8 *)(param_1 + 0xd8);
  uStack_70 = *(undefined8 *)(param_1 + 0xd0);
  lStack_210 = 1;
  uStack_208 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_130 = *(undefined1 *)(param_1 + 0xe0);
  uStack_60 = *(undefined1 *)(param_1 + 0xe0);
  puVar2 = &uStack_1f0;
  FUN_103554bd8();
  iVar1 = (int)puVar2;
  if (iVar1 != 1) {
    uStack_2d8 = uStack_78;
    uStack_2e0 = uStack_80;
    uStack_2c8 = uStack_68;
    uStack_2d0 = uStack_70;
    uStack_2c0 = uStack_60;
    uStack_318 = uStack_b8;
    uStack_320 = uStack_c0;
    uStack_308 = uStack_a8;
    uStack_310 = uStack_b0;
    uStack_2f8 = uStack_98;
    uStack_300 = uStack_a0;
    uStack_2e8 = uStack_88;
    uStack_2f0 = uStack_90;
    uStack_358 = uStack_f8;
    lStack_360 = uStack_100;
    uStack_348 = uStack_e8;
    uStack_350 = uStack_f0;
    uStack_338 = uStack_d8;
    uStack_340 = uStack_e0;
    uStack_328 = uStack_c8;
    uStack_330 = uStack_d0;
    uStack_378 = uStack_118;
    uStack_380 = uStack_120;
    uStack_368 = uStack_108;
    uStack_370 = uStack_110;
    puVar2 = &uStack_120;
    func_0x000103554bec();
    if ((int)puVar2 == 2) {
      puVar3 = &uStack_380;
      FUN_103554c2c();
      uStack_268 = uStack_228;
      uStack_270 = uStack_230;
      uStack_258 = uStack_218;
      uStack_260 = uStack_220;
      uStack_248 = uStack_208;
      lStack_250 = lStack_210;
      uStack_238 = uStack_1f8;
      uStack_240 = uStack_200;
      uStack_3a8 = uStack_148;
      uStack_3b0 = uStack_150;
      uStack_398 = uStack_138;
      uStack_3a0 = uStack_140;
      uStack_390 = uStack_130;
      uStack_3e8 = uStack_188;
      uStack_3f0 = uStack_190;
      uStack_3d8 = uStack_178;
      uStack_3e0 = uStack_180;
      uStack_3c8 = uStack_168;
      uStack_3d0 = uStack_170;
      uStack_3b8 = uStack_158;
      uStack_3c0 = uStack_160;
      uStack_428 = uStack_1c8;
      lStack_430 = lStack_1d0;
      uStack_418 = uStack_1b8;
      uStack_420 = uStack_1c0;
      uStack_408 = uStack_1a8;
      uStack_410 = uStack_1b0;
      uStack_3f8 = uStack_198;
      uStack_400 = uStack_1a0;
      uStack_448 = uStack_1e8;
      uStack_450 = uStack_1f0;
      uStack_438 = uStack_1d8;
      uStack_440 = uStack_1e0;
      FUN_103554bf8(&uStack_450,&uStack_520);
      puVar2 = &uStack_270;
      func_0x000103559bf0(puVar2,0x112f74ce0,&UNK_10dbd0d78);
      uStack_208 = puVar3[5];
      lStack_210 = puVar3[4];
      uStack_1f8 = puVar3[7];
      uStack_200 = puVar3[6];
      uStack_228 = puVar3[1];
      uStack_230 = *puVar3;
      uStack_218 = puVar3[3];
      uStack_220 = puVar3[2];
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  func_0x000103502814();
  (*pcVar6)(&uStack_230,&UNK_1106688e8,puVar2,param_3,param_4);
  if (unaff_x21 == 0) {
    uStack_2a8 = uStack_228;
    uStack_2b0 = uStack_230;
    uStack_298 = uStack_218;
    uStack_2a0 = uStack_220;
    uStack_288 = uStack_208;
    lStack_290 = lStack_210;
    uStack_278 = uStack_1f8;
    uStack_280 = uStack_200;
    uStack_268 = uStack_228;
    uStack_270 = uStack_230;
    uStack_258 = uStack_218;
    uStack_260 = uStack_220;
    uStack_248 = uStack_208;
    lStack_250 = lStack_210;
    uStack_238 = uStack_1f8;
    uStack_240 = uStack_200;
    if (lStack_210 != 1) {
      if (iVar1 == 1) {
        uStack_378 = uStack_228;
        uStack_380 = uStack_230;
        uStack_368 = uStack_218;
        uStack_370 = uStack_220;
        uStack_358 = uStack_208;
        lStack_360 = lStack_210;
        uStack_348 = uStack_1f8;
        uStack_350 = uStack_200;
        FUN_1034e92d0(&uStack_380,&uStack_450);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        uStack_378 = uStack_228;
        uStack_380 = uStack_230;
        uStack_368 = uStack_218;
        uStack_370 = uStack_220;
        uStack_358 = uStack_208;
        lStack_360 = lStack_210;
        uStack_348 = uStack_1f8;
        uStack_350 = uStack_200;
        FUN_1034e92d0(&uStack_380,&uStack_450);
        (*pcVar6)(param_3,param_4);
      }
      func_0x000103559bf0(&uStack_230,0x112f74ce0,&UNK_10dbd0d78);
      uStack_518 = uStack_268;
      uStack_520 = uStack_270;
      uStack_508 = uStack_258;
      uStack_510 = uStack_260;
      uStack_4f8 = uStack_248;
      lStack_500 = lStack_250;
      uStack_4e8 = uStack_238;
      uStack_4f0 = uStack_240;
      func_0x000103554c34(&uStack_520);
      uStack_3a8 = uStack_478;
      uStack_3b0 = uStack_480;
      uStack_398 = uStack_468;
      uStack_3a0 = uStack_470;
      uStack_390 = uStack_460;
      uStack_3e8 = uStack_4b8;
      uStack_3f0 = uStack_4c0;
      uStack_3d8 = uStack_4a8;
      uStack_3e0 = uStack_4b0;
      uStack_3c8 = uStack_498;
      uStack_3d0 = uStack_4a0;
      uStack_3b8 = uStack_488;
      uStack_3c0 = uStack_490;
      uStack_428 = uStack_4f8;
      lStack_430 = lStack_500;
      uStack_418 = uStack_4e8;
      uStack_420 = uStack_4f0;
      uStack_408 = uStack_4d8;
      uStack_410 = uStack_4e0;
      uStack_3f8 = uStack_4c8;
      uStack_400 = uStack_4d0;
      uStack_448 = uStack_518;
      uStack_450 = uStack_520;
      uStack_438 = uStack_508;
      uStack_440 = uStack_510;
      func_0x0001034b0d74(&uStack_450);
      uStack_2d8 = *(undefined8 *)(param_1 + 200);
      uStack_2e0 = *(undefined8 *)(param_1 + 0xc0);
      uStack_2c8 = *(undefined8 *)(param_1 + 0xd8);
      uStack_2d0 = *(undefined8 *)(param_1 + 0xd0);
      uStack_2c0 = *(undefined1 *)(param_1 + 0xe0);
      uStack_318 = *(undefined8 *)(param_1 + 0x88);
      uStack_320 = *(undefined8 *)(param_1 + 0x80);
      uStack_308 = *(undefined8 *)(param_1 + 0x98);
      uStack_310 = *(undefined8 *)(param_1 + 0x90);
      uStack_2f8 = *(undefined8 *)(param_1 + 0xa8);
      uStack_300 = *(undefined8 *)(param_1 + 0xa0);
      uStack_2e8 = *(undefined8 *)(param_1 + 0xb8);
      uStack_2f0 = *(undefined8 *)(param_1 + 0xb0);
      uStack_358 = *(undefined8 *)(param_1 + 0x48);
      lStack_360 = *(undefined8 *)(param_1 + 0x40);
      uStack_348 = *(undefined8 *)(param_1 + 0x58);
      uStack_350 = *(undefined8 *)(param_1 + 0x50);
      uStack_338 = *(undefined8 *)(param_1 + 0x68);
      uStack_340 = *(undefined8 *)(param_1 + 0x60);
      uStack_328 = *(undefined8 *)(param_1 + 0x78);
      uStack_330 = *(undefined8 *)(param_1 + 0x70);
      uStack_378 = *(undefined8 *)(param_1 + 0x28);
      uStack_380 = *(undefined8 *)(param_1 + 0x20);
      uStack_368 = *(undefined8 *)(param_1 + 0x38);
      uStack_370 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 200) = uStack_3a8;
      *(undefined8 *)(param_1 + 0xc0) = uStack_3b0;
      *(undefined8 *)(param_1 + 0xd8) = uStack_398;
      *(undefined8 *)(param_1 + 0xd0) = uStack_3a0;
      *(undefined1 *)(param_1 + 0xe0) = uStack_390;
      *(undefined8 *)(param_1 + 0x88) = uStack_3e8;
      *(undefined8 *)(param_1 + 0x80) = uStack_3f0;
      *(undefined8 *)(param_1 + 0x98) = uStack_3d8;
      *(undefined8 *)(param_1 + 0x90) = uStack_3e0;
      *(undefined8 *)(param_1 + 0xa8) = uStack_3c8;
      *(undefined8 *)(param_1 + 0xa0) = uStack_3d0;
      *(undefined8 *)(param_1 + 0xb8) = uStack_3b8;
      *(undefined8 *)(param_1 + 0xb0) = uStack_3c0;
      *(undefined8 *)(param_1 + 0x48) = uStack_428;
      *(long *)(param_1 + 0x40) = lStack_430;
      *(undefined8 *)(param_1 + 0x58) = uStack_418;
      *(undefined8 *)(param_1 + 0x50) = uStack_420;
      *(undefined8 *)(param_1 + 0x68) = uStack_408;
      *(undefined8 *)(param_1 + 0x60) = uStack_410;
      *(undefined8 *)(param_1 + 0x78) = uStack_3f8;
      *(undefined8 *)(param_1 + 0x70) = uStack_400;
      *(undefined8 *)(param_1 + 0x28) = uStack_448;
      *(undefined8 *)(param_1 + 0x20) = uStack_450;
      *(undefined8 *)(param_1 + 0x38) = uStack_438;
      *(undefined8 *)(param_1 + 0x30) = uStack_440;
      uVar4 = 0x112f73130;
      puVar5 = &UNK_10dbce400;
      puVar2 = &uStack_380;
      goto LAB_10354b7ec;
    }
  }
  uVar4 = 0x112f74ce0;
  puVar5 = &UNK_10dbd0d78;
  puVar2 = &uStack_230;
LAB_10354b7ec:
  func_0x000103559bf0(puVar2,uVar4,puVar5);
  return;
}



/* Entry: 10354b998; end: 10354bd0f;  */

/* WARNING: Removing unreachable block (ram,0x00010354bbf0) */

void FUN_10354b998(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long unaff_x21;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_488;
  undefined8 uStack_480;
  long lStack_478;
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
  undefined1 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  long lStack_3b0;
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
  undefined1 uStack_300;
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
  undefined1 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long lStack_218;
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
  undefined1 uStack_150;
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
  undefined1 uStack_80;
  
  uStack_a8 = *(undefined8 *)(param_1 + 0xb8);
  uStack_b0 = *(undefined8 *)(param_1 + 0xb0);
  uStack_168 = *(undefined8 *)(param_1 + 200);
  uStack_170 = *(undefined8 *)(param_1 + 0xc0);
  uStack_98 = *(undefined8 *)(param_1 + 200);
  uStack_a0 = *(undefined8 *)(param_1 + 0xc0);
  uStack_158 = *(undefined8 *)(param_1 + 0xd8);
  uStack_160 = *(undefined8 *)(param_1 + 0xd0);
  uStack_e8 = *(undefined8 *)(param_1 + 0x78);
  uStack_f0 = *(undefined8 *)(param_1 + 0x70);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x88);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x80);
  uStack_d8 = *(undefined8 *)(param_1 + 0x88);
  uStack_e0 = *(undefined8 *)(param_1 + 0x80);
  uStack_198 = *(undefined8 *)(param_1 + 0x98);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x90);
  uStack_c8 = *(undefined8 *)(param_1 + 0x98);
  uStack_d0 = *(undefined8 *)(param_1 + 0x90);
  uStack_188 = *(undefined8 *)(param_1 + 0xa8);
  uStack_190 = *(undefined8 *)(param_1 + 0xa0);
  uStack_b8 = *(undefined8 *)(param_1 + 0xa8);
  uStack_c0 = *(undefined8 *)(param_1 + 0xa0);
  uStack_178 = *(undefined8 *)(param_1 + 0xb8);
  uStack_180 = *(undefined8 *)(param_1 + 0xb0);
  uStack_128 = *(undefined8 *)(param_1 + 0x38);
  uStack_130 = *(undefined8 *)(param_1 + 0x30);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x48);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x40);
  uStack_118 = *(undefined8 *)(param_1 + 0x48);
  uStack_120 = *(undefined8 *)(param_1 + 0x40);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x58);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x50);
  uStack_108 = *(undefined8 *)(param_1 + 0x58);
  uStack_110 = *(undefined8 *)(param_1 + 0x50);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x68);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x60);
  uStack_f8 = *(undefined8 *)(param_1 + 0x68);
  uStack_100 = *(undefined8 *)(param_1 + 0x60);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x78);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x70);
  uStack_208 = *(undefined8 *)(param_1 + 0x28);
  uStack_210 = *(undefined8 *)(param_1 + 0x20);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x38);
  uStack_200 = *(undefined8 *)(param_1 + 0x30);
  uStack_138 = *(undefined8 *)(param_1 + 0x28);
  uStack_140 = *(undefined8 *)(param_1 + 0x20);
  uStack_88 = *(undefined8 *)(param_1 + 0xd8);
  uStack_90 = *(undefined8 *)(param_1 + 0xd0);
  uStack_220 = 0;
  uStack_228 = 0;
  lStack_218 = 0;
  uStack_150 = *(undefined1 *)(param_1 + 0xe0);
  uStack_80 = *(undefined1 *)(param_1 + 0xe0);
  puVar2 = &uStack_210;
  FUN_103554bd8();
  iVar1 = (int)puVar2;
  if (iVar1 != 1) {
    uStack_248 = uStack_98;
    uStack_250 = uStack_a0;
    uStack_238 = uStack_88;
    uStack_240 = uStack_90;
    uStack_230 = uStack_80;
    uStack_288 = uStack_d8;
    uStack_290 = uStack_e0;
    uStack_278 = uStack_c8;
    uStack_280 = uStack_d0;
    uStack_268 = uStack_b8;
    uStack_270 = uStack_c0;
    uStack_258 = uStack_a8;
    uStack_260 = uStack_b0;
    uStack_2c8 = uStack_118;
    uStack_2d0 = uStack_120;
    uStack_2b8 = uStack_108;
    uStack_2c0 = uStack_110;
    uStack_2a8 = uStack_f8;
    uStack_2b0 = uStack_100;
    uStack_298 = uStack_e8;
    uStack_2a0 = uStack_f0;
    uStack_2e8 = uStack_138;
    uStack_2f0 = uStack_140;
    uStack_2d8 = uStack_128;
    uStack_2e0 = uStack_130;
    puVar2 = &uStack_140;
    func_0x000103554bec();
    if ((int)puVar2 == 3) {
      puVar2 = &uStack_2f0;
      func_0x000103554c40();
      uVar6 = puVar2[1];
      uVar5 = *puVar2;
      lVar3 = puVar2[2];
      uStack_398 = uStack_1e8;
      uStack_3a0 = uStack_1f0;
      uStack_388 = uStack_1d8;
      uStack_390 = uStack_1e0;
      uStack_358 = uStack_1a8;
      uStack_360 = uStack_1b0;
      uStack_348 = uStack_198;
      uStack_350 = uStack_1a0;
      uStack_378 = uStack_1c8;
      uStack_380 = uStack_1d0;
      uStack_368 = uStack_1b8;
      uStack_370 = uStack_1c0;
      uStack_300 = uStack_150;
      uStack_318 = uStack_168;
      uStack_320 = uStack_170;
      uStack_308 = uStack_158;
      uStack_310 = uStack_160;
      uStack_338 = uStack_188;
      uStack_340 = uStack_190;
      uStack_328 = uStack_178;
      uStack_330 = uStack_180;
      uStack_3b8 = uStack_208;
      uStack_3c0 = uStack_210;
      uStack_3a8 = uStack_1f8;
      lStack_3b0 = uStack_200;
      FUN_103554bf8(&uStack_3c0,&uStack_488);
      puVar2 = (undefined8 *)0x0;
      FUN_103559bc4(0,0,0);
      uStack_228 = uVar5;
      uStack_220 = uVar6;
      lStack_218 = lVar3;
    }
  }
  pcVar4 = *(code **)(param_4 + 0x198);
  func_0x000103502854();
  (*pcVar4)(&uStack_228,&UNK_11066a9c0,puVar2,param_3,param_4);
  lVar3 = lStack_218;
  uVar6 = uStack_220;
  uVar5 = uStack_228;
  if (unaff_x21 == 0) {
    if (lStack_218 != 0) {
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
      FUN_103559bc4(uStack_228,uStack_220,lStack_218);
      uStack_488 = uVar5;
      uStack_480 = uVar6;
      lStack_478 = lVar3;
      func_0x0001034b0dfc(&uStack_488);
      uStack_318 = uStack_3e0;
      uStack_320 = uStack_3e8;
      uStack_308 = uStack_3d0;
      uStack_310 = uStack_3d8;
      uStack_300 = uStack_3c8;
      uStack_358 = uStack_420;
      uStack_360 = uStack_428;
      uStack_348 = uStack_410;
      uStack_350 = uStack_418;
      uStack_338 = uStack_400;
      uStack_340 = uStack_408;
      uStack_328 = uStack_3f0;
      uStack_330 = uStack_3f8;
      uStack_398 = uStack_460;
      uStack_3a0 = uStack_468;
      uStack_388 = uStack_450;
      uStack_390 = uStack_458;
      uStack_378 = uStack_440;
      uStack_380 = uStack_448;
      uStack_368 = uStack_430;
      uStack_370 = uStack_438;
      uStack_3b8 = uStack_480;
      uStack_3c0 = uStack_488;
      uStack_3a8 = uStack_470;
      lStack_3b0 = lStack_478;
      func_0x0001034b0d74(&uStack_3c0);
      uStack_248 = *(undefined8 *)(param_1 + 200);
      uStack_250 = *(undefined8 *)(param_1 + 0xc0);
      uStack_238 = *(undefined8 *)(param_1 + 0xd8);
      uStack_240 = *(undefined8 *)(param_1 + 0xd0);
      uStack_230 = *(undefined1 *)(param_1 + 0xe0);
      uStack_288 = *(undefined8 *)(param_1 + 0x88);
      uStack_290 = *(undefined8 *)(param_1 + 0x80);
      uStack_278 = *(undefined8 *)(param_1 + 0x98);
      uStack_280 = *(undefined8 *)(param_1 + 0x90);
      uStack_268 = *(undefined8 *)(param_1 + 0xa8);
      uStack_270 = *(undefined8 *)(param_1 + 0xa0);
      uStack_258 = *(undefined8 *)(param_1 + 0xb8);
      uStack_260 = *(undefined8 *)(param_1 + 0xb0);
      uStack_2c8 = *(undefined8 *)(param_1 + 0x48);
      uStack_2d0 = *(undefined8 *)(param_1 + 0x40);
      uStack_2b8 = *(undefined8 *)(param_1 + 0x58);
      uStack_2c0 = *(undefined8 *)(param_1 + 0x50);
      uStack_2a8 = *(undefined8 *)(param_1 + 0x68);
      uStack_2b0 = *(undefined8 *)(param_1 + 0x60);
      uStack_298 = *(undefined8 *)(param_1 + 0x78);
      uStack_2a0 = *(undefined8 *)(param_1 + 0x70);
      uStack_2e8 = *(undefined8 *)(param_1 + 0x28);
      uStack_2f0 = *(undefined8 *)(param_1 + 0x20);
      uStack_2d8 = *(undefined8 *)(param_1 + 0x38);
      uStack_2e0 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 200) = uStack_318;
      *(undefined8 *)(param_1 + 0xc0) = uStack_320;
      *(undefined8 *)(param_1 + 0xd8) = uStack_308;
      *(undefined8 *)(param_1 + 0xd0) = uStack_310;
      *(undefined1 *)(param_1 + 0xe0) = uStack_300;
      *(undefined8 *)(param_1 + 0x88) = uStack_358;
      *(undefined8 *)(param_1 + 0x80) = uStack_360;
      *(undefined8 *)(param_1 + 0x98) = uStack_348;
      *(undefined8 *)(param_1 + 0x90) = uStack_350;
      *(undefined8 *)(param_1 + 0xa8) = uStack_338;
      *(undefined8 *)(param_1 + 0xa0) = uStack_340;
      *(undefined8 *)(param_1 + 0xb8) = uStack_328;
      *(undefined8 *)(param_1 + 0xb0) = uStack_330;
      *(undefined8 *)(param_1 + 0x48) = uStack_398;
      *(undefined8 *)(param_1 + 0x40) = uStack_3a0;
      *(undefined8 *)(param_1 + 0x58) = uStack_388;
      *(undefined8 *)(param_1 + 0x50) = uStack_390;
      *(undefined8 *)(param_1 + 0x68) = uStack_378;
      *(undefined8 *)(param_1 + 0x60) = uStack_380;
      *(undefined8 *)(param_1 + 0x78) = uStack_368;
      *(undefined8 *)(param_1 + 0x70) = uStack_370;
      *(undefined8 *)(param_1 + 0x28) = uStack_3b8;
      *(undefined8 *)(param_1 + 0x20) = uStack_3c0;
      *(undefined8 *)(param_1 + 0x38) = uStack_3a8;
      *(long *)(param_1 + 0x30) = lStack_3b0;
      func_0x000103559bf0(&uStack_2f0,0x112f73130,&UNK_10dbce400);
      return;
    }
    lVar3 = 0;
  }
  FUN_103559bc4(uStack_228,uStack_220,lVar3);
  return;
}



/* Entry: 10354bd10; end: 10354c187;  */

/* WARNING: Removing unreachable block (ram,0x00010354c050) */

void FUN_10354bd10(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  long lStack_590;
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
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined1 uStack_4f0;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  long lStack_4c0;
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
  undefined1 uStack_420;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  long lStack_3f0;
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
  undefined1 uStack_350;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long lStack_320;
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
  long lStack_2b0;
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
  long lStack_240;
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
  long lStack_1d0;
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
  
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_230 = 0;
  uStack_238 = 0;
  uStack_220 = 0;
  uStack_228 = 0;
  uStack_210 = 0;
  uStack_218 = 0;
  uStack_200 = 0;
  uStack_208 = 0;
  uStack_88 = *(undefined8 *)(param_1 + 0xb8);
  uStack_90 = *(undefined8 *)(param_1 + 0xb0);
  uStack_148 = *(undefined8 *)(param_1 + 200);
  uStack_150 = *(undefined8 *)(param_1 + 0xc0);
  uStack_78 = *(undefined8 *)(param_1 + 200);
  uStack_80 = *(undefined8 *)(param_1 + 0xc0);
  uStack_138 = *(undefined8 *)(param_1 + 0xd8);
  uStack_140 = *(undefined8 *)(param_1 + 0xd0);
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
  uStack_98 = *(undefined8 *)(param_1 + 0xa8);
  uStack_a0 = *(undefined8 *)(param_1 + 0xa0);
  uStack_158 = *(undefined8 *)(param_1 + 0xb8);
  uStack_160 = *(undefined8 *)(param_1 + 0xb0);
  uStack_108 = *(undefined8 *)(param_1 + 0x38);
  uStack_110 = *(undefined8 *)(param_1 + 0x30);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x48);
  lStack_1d0 = *(long *)(param_1 + 0x40);
  uStack_f8 = *(undefined8 *)(param_1 + 0x48);
  uStack_100 = *(undefined8 *)(param_1 + 0x40);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x58);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x50);
  uStack_e8 = *(undefined8 *)(param_1 + 0x58);
  uStack_f0 = *(undefined8 *)(param_1 + 0x50);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x68);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x60);
  uStack_d8 = *(undefined8 *)(param_1 + 0x68);
  uStack_e0 = *(undefined8 *)(param_1 + 0x60);
  uStack_198 = *(undefined8 *)(param_1 + 0x78);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x70);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x28);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x20);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x38);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x30);
  uStack_118 = *(undefined8 *)(param_1 + 0x28);
  uStack_120 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = *(undefined8 *)(param_1 + 0xd8);
  uStack_70 = *(undefined8 *)(param_1 + 0xd0);
  lStack_240 = 1;
  uStack_1f8 = 0;
  uStack_130 = *(undefined1 *)(param_1 + 0xe0);
  uStack_60 = *(undefined1 *)(param_1 + 0xe0);
  puVar2 = &uStack_1f0;
  FUN_103554bd8();
  iVar1 = (int)puVar2;
  if (iVar1 != 1) {
    uStack_368 = uStack_78;
    uStack_370 = uStack_80;
    uStack_358 = uStack_68;
    uStack_360 = uStack_70;
    uStack_350 = uStack_60;
    uStack_3a8 = uStack_b8;
    uStack_3b0 = uStack_c0;
    uStack_398 = uStack_a8;
    uStack_3a0 = uStack_b0;
    uStack_388 = uStack_98;
    uStack_390 = uStack_a0;
    uStack_378 = uStack_88;
    uStack_380 = uStack_90;
    uStack_3e8 = uStack_f8;
    lStack_3f0 = uStack_100;
    uStack_3d8 = uStack_e8;
    uStack_3e0 = uStack_f0;
    uStack_3c8 = uStack_d8;
    uStack_3d0 = uStack_e0;
    uStack_3b8 = uStack_c8;
    uStack_3c0 = uStack_d0;
    uStack_408 = uStack_118;
    uStack_410 = uStack_120;
    uStack_3f8 = uStack_108;
    uStack_400 = uStack_110;
    puVar2 = &uStack_120;
    func_0x000103554bec();
    if ((int)puVar2 == 4) {
      puVar3 = &uStack_410;
      func_0x000103554c44();
      uStack_288 = uStack_218;
      uStack_290 = uStack_220;
      uStack_278 = uStack_208;
      uStack_280 = uStack_210;
      uStack_268 = uStack_1f8;
      uStack_270 = uStack_200;
      uStack_2c8 = uStack_258;
      uStack_2d0 = uStack_260;
      uStack_2b8 = uStack_248;
      uStack_2c0 = uStack_250;
      uStack_2a8 = uStack_238;
      lStack_2b0 = lStack_240;
      uStack_298 = uStack_228;
      uStack_2a0 = uStack_230;
      uStack_4b8 = uStack_1c8;
      lStack_4c0 = lStack_1d0;
      uStack_4a8 = uStack_1b8;
      uStack_4b0 = uStack_1c0;
      uStack_4d8 = uStack_1e8;
      uStack_4e0 = uStack_1f0;
      uStack_4c8 = uStack_1d8;
      uStack_4d0 = uStack_1e0;
      uStack_478 = uStack_188;
      uStack_480 = uStack_190;
      uStack_468 = uStack_178;
      uStack_470 = uStack_180;
      uStack_498 = uStack_1a8;
      uStack_4a0 = uStack_1b0;
      uStack_488 = uStack_198;
      uStack_490 = uStack_1a0;
      uStack_420 = uStack_130;
      uStack_438 = uStack_148;
      uStack_440 = uStack_150;
      uStack_428 = uStack_138;
      uStack_430 = uStack_140;
      uStack_458 = uStack_168;
      uStack_460 = uStack_170;
      uStack_448 = uStack_158;
      uStack_450 = uStack_160;
      FUN_103554bf8(&uStack_4e0,&uStack_5b0);
      puVar2 = &uStack_2d0;
      func_0x000103559bf0(puVar2,0x112f74ce8,&UNK_10dbd0d80);
      uStack_248 = puVar3[3];
      uStack_250 = puVar3[2];
      uStack_238 = puVar3[5];
      lStack_240 = puVar3[4];
      uStack_258 = puVar3[1];
      uStack_260 = *puVar3;
      uStack_208 = puVar3[0xb];
      uStack_210 = puVar3[10];
      uStack_1f8 = puVar3[0xd];
      uStack_200 = puVar3[0xc];
      uStack_228 = puVar3[7];
      uStack_230 = puVar3[6];
      uStack_218 = puVar3[9];
      uStack_220 = puVar3[8];
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  func_0x000103502894();
  (*pcVar6)(&uStack_260,&UNK_110668730,puVar2,param_3,param_4);
  if (unaff_x21 == 0) {
    uStack_318 = uStack_238;
    lStack_320 = lStack_240;
    uStack_308 = uStack_228;
    uStack_310 = uStack_230;
    uStack_2f8 = uStack_218;
    uStack_300 = uStack_220;
    uStack_2e8 = uStack_208;
    uStack_2f0 = uStack_210;
    uStack_338 = uStack_258;
    uStack_340 = uStack_260;
    uStack_328 = uStack_248;
    uStack_330 = uStack_250;
    uStack_2b8 = uStack_248;
    uStack_2c0 = uStack_250;
    uStack_2a8 = uStack_238;
    lStack_2b0 = lStack_240;
    uStack_2d8 = uStack_1f8;
    uStack_2e0 = uStack_200;
    uStack_2c8 = uStack_258;
    uStack_2d0 = uStack_260;
    uStack_278 = uStack_208;
    uStack_280 = uStack_210;
    uStack_268 = uStack_1f8;
    uStack_270 = uStack_200;
    uStack_298 = uStack_228;
    uStack_2a0 = uStack_230;
    uStack_288 = uStack_218;
    uStack_290 = uStack_220;
    if (lStack_240 != 1) {
      if (iVar1 == 1) {
        uStack_3c8 = uStack_218;
        uStack_3d0 = uStack_220;
        uStack_3b8 = uStack_208;
        uStack_3c0 = uStack_210;
        uStack_3a8 = uStack_1f8;
        uStack_3b0 = uStack_200;
        uStack_408 = uStack_258;
        uStack_410 = uStack_260;
        uStack_3f8 = uStack_248;
        uStack_400 = uStack_250;
        uStack_3e8 = uStack_238;
        lStack_3f0 = lStack_240;
        uStack_3d8 = uStack_228;
        uStack_3e0 = uStack_230;
        FUN_1034e932c(&uStack_410,&uStack_4e0);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        uStack_3c8 = uStack_218;
        uStack_3d0 = uStack_220;
        uStack_3b8 = uStack_208;
        uStack_3c0 = uStack_210;
        uStack_3a8 = uStack_1f8;
        uStack_3b0 = uStack_200;
        uStack_408 = uStack_258;
        uStack_410 = uStack_260;
        uStack_3f8 = uStack_248;
        uStack_400 = uStack_250;
        uStack_3e8 = uStack_238;
        lStack_3f0 = lStack_240;
        uStack_3d8 = uStack_228;
        uStack_3e0 = uStack_230;
        FUN_1034e932c(&uStack_410,&uStack_4e0);
        (*pcVar6)(param_3,param_4);
      }
      func_0x000103559bf0(&uStack_260,0x112f74ce8,&UNK_10dbd0d80);
      uStack_568 = uStack_288;
      uStack_570 = uStack_290;
      uStack_558 = uStack_278;
      uStack_560 = uStack_280;
      uStack_548 = uStack_268;
      uStack_550 = uStack_270;
      uStack_5a8 = uStack_2c8;
      uStack_5b0 = uStack_2d0;
      uStack_598 = uStack_2b8;
      uStack_5a0 = uStack_2c0;
      uStack_588 = uStack_2a8;
      lStack_590 = lStack_2b0;
      uStack_578 = uStack_298;
      uStack_580 = uStack_2a0;
      func_0x000103554c48(&uStack_5b0);
      uStack_438 = uStack_508;
      uStack_440 = uStack_510;
      uStack_428 = uStack_4f8;
      uStack_430 = uStack_500;
      uStack_420 = uStack_4f0;
      uStack_478 = uStack_548;
      uStack_480 = uStack_550;
      uStack_468 = uStack_538;
      uStack_470 = uStack_540;
      uStack_458 = uStack_528;
      uStack_460 = uStack_530;
      uStack_448 = uStack_518;
      uStack_450 = uStack_520;
      uStack_4b8 = uStack_588;
      lStack_4c0 = lStack_590;
      uStack_4a8 = uStack_578;
      uStack_4b0 = uStack_580;
      uStack_498 = uStack_568;
      uStack_4a0 = uStack_570;
      uStack_488 = uStack_558;
      uStack_490 = uStack_560;
      uStack_4d8 = uStack_5a8;
      uStack_4e0 = uStack_5b0;
      uStack_4c8 = uStack_598;
      uStack_4d0 = uStack_5a0;
      func_0x0001034b0d74(&uStack_4e0);
      uStack_368 = *(undefined8 *)(param_1 + 200);
      uStack_370 = *(undefined8 *)(param_1 + 0xc0);
      uStack_358 = *(undefined8 *)(param_1 + 0xd8);
      uStack_360 = *(undefined8 *)(param_1 + 0xd0);
      uStack_350 = *(undefined1 *)(param_1 + 0xe0);
      uStack_3a8 = *(undefined8 *)(param_1 + 0x88);
      uStack_3b0 = *(undefined8 *)(param_1 + 0x80);
      uStack_398 = *(undefined8 *)(param_1 + 0x98);
      uStack_3a0 = *(undefined8 *)(param_1 + 0x90);
      uStack_388 = *(undefined8 *)(param_1 + 0xa8);
      uStack_390 = *(undefined8 *)(param_1 + 0xa0);
      uStack_378 = *(undefined8 *)(param_1 + 0xb8);
      uStack_380 = *(undefined8 *)(param_1 + 0xb0);
      uStack_3e8 = *(undefined8 *)(param_1 + 0x48);
      lStack_3f0 = *(undefined8 *)(param_1 + 0x40);
      uStack_3d8 = *(undefined8 *)(param_1 + 0x58);
      uStack_3e0 = *(undefined8 *)(param_1 + 0x50);
      uStack_3c8 = *(undefined8 *)(param_1 + 0x68);
      uStack_3d0 = *(undefined8 *)(param_1 + 0x60);
      uStack_3b8 = *(undefined8 *)(param_1 + 0x78);
      uStack_3c0 = *(undefined8 *)(param_1 + 0x70);
      uStack_408 = *(undefined8 *)(param_1 + 0x28);
      uStack_410 = *(undefined8 *)(param_1 + 0x20);
      uStack_3f8 = *(undefined8 *)(param_1 + 0x38);
      uStack_400 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 200) = uStack_438;
      *(undefined8 *)(param_1 + 0xc0) = uStack_440;
      *(undefined8 *)(param_1 + 0xd8) = uStack_428;
      *(undefined8 *)(param_1 + 0xd0) = uStack_430;
      *(undefined1 *)(param_1 + 0xe0) = uStack_420;
      *(undefined8 *)(param_1 + 0x88) = uStack_478;
      *(undefined8 *)(param_1 + 0x80) = uStack_480;
      *(undefined8 *)(param_1 + 0x98) = uStack_468;
      *(undefined8 *)(param_1 + 0x90) = uStack_470;
      *(undefined8 *)(param_1 + 0xa8) = uStack_458;
      *(undefined8 *)(param_1 + 0xa0) = uStack_460;
      *(undefined8 *)(param_1 + 0xb8) = uStack_448;
      *(undefined8 *)(param_1 + 0xb0) = uStack_450;
      *(undefined8 *)(param_1 + 0x48) = uStack_4b8;
      *(long *)(param_1 + 0x40) = lStack_4c0;
      *(undefined8 *)(param_1 + 0x58) = uStack_4a8;
      *(undefined8 *)(param_1 + 0x50) = uStack_4b0;
      *(undefined8 *)(param_1 + 0x68) = uStack_498;
      *(undefined8 *)(param_1 + 0x60) = uStack_4a0;
      *(undefined8 *)(param_1 + 0x78) = uStack_488;
      *(undefined8 *)(param_1 + 0x70) = uStack_490;
      *(undefined8 *)(param_1 + 0x28) = uStack_4d8;
      *(undefined8 *)(param_1 + 0x20) = uStack_4e0;
      *(undefined8 *)(param_1 + 0x38) = uStack_4c8;
      *(undefined8 *)(param_1 + 0x30) = uStack_4d0;
      uVar4 = 0x112f73130;
      puVar5 = &UNK_10dbce400;
      puVar2 = &uStack_410;
      goto LAB_10354bfac;
    }
  }
  uVar4 = 0x112f74ce8;
  puVar5 = &UNK_10dbd0d80;
  puVar2 = &uStack_260;
LAB_10354bfac:
  func_0x000103559bf0(puVar2,uVar4,puVar5);
  return;
}



/* Entry: 10354c188; end: 10354c4ff;  */

/* WARNING: Removing unreachable block (ram,0x00010354c3e0) */

void FUN_10354c188(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long unaff_x21;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_488;
  undefined8 uStack_480;
  long lStack_478;
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
  undefined1 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  long lStack_3b0;
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
  undefined1 uStack_300;
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
  undefined1 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long lStack_218;
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
  undefined1 uStack_150;
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
  undefined1 uStack_80;
  
  uStack_a8 = *(undefined8 *)(param_1 + 0xb8);
  uStack_b0 = *(undefined8 *)(param_1 + 0xb0);
  uStack_168 = *(undefined8 *)(param_1 + 200);
  uStack_170 = *(undefined8 *)(param_1 + 0xc0);
  uStack_98 = *(undefined8 *)(param_1 + 200);
  uStack_a0 = *(undefined8 *)(param_1 + 0xc0);
  uStack_158 = *(undefined8 *)(param_1 + 0xd8);
  uStack_160 = *(undefined8 *)(param_1 + 0xd0);
  uStack_e8 = *(undefined8 *)(param_1 + 0x78);
  uStack_f0 = *(undefined8 *)(param_1 + 0x70);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x88);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x80);
  uStack_d8 = *(undefined8 *)(param_1 + 0x88);
  uStack_e0 = *(undefined8 *)(param_1 + 0x80);
  uStack_198 = *(undefined8 *)(param_1 + 0x98);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x90);
  uStack_c8 = *(undefined8 *)(param_1 + 0x98);
  uStack_d0 = *(undefined8 *)(param_1 + 0x90);
  uStack_188 = *(undefined8 *)(param_1 + 0xa8);
  uStack_190 = *(undefined8 *)(param_1 + 0xa0);
  uStack_b8 = *(undefined8 *)(param_1 + 0xa8);
  uStack_c0 = *(undefined8 *)(param_1 + 0xa0);
  uStack_178 = *(undefined8 *)(param_1 + 0xb8);
  uStack_180 = *(undefined8 *)(param_1 + 0xb0);
  uStack_128 = *(undefined8 *)(param_1 + 0x38);
  uStack_130 = *(undefined8 *)(param_1 + 0x30);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x48);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x40);
  uStack_118 = *(undefined8 *)(param_1 + 0x48);
  uStack_120 = *(undefined8 *)(param_1 + 0x40);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x58);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x50);
  uStack_108 = *(undefined8 *)(param_1 + 0x58);
  uStack_110 = *(undefined8 *)(param_1 + 0x50);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x68);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x60);
  uStack_f8 = *(undefined8 *)(param_1 + 0x68);
  uStack_100 = *(undefined8 *)(param_1 + 0x60);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x78);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x70);
  uStack_208 = *(undefined8 *)(param_1 + 0x28);
  uStack_210 = *(undefined8 *)(param_1 + 0x20);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x38);
  uStack_200 = *(undefined8 *)(param_1 + 0x30);
  uStack_138 = *(undefined8 *)(param_1 + 0x28);
  uStack_140 = *(undefined8 *)(param_1 + 0x20);
  uStack_88 = *(undefined8 *)(param_1 + 0xd8);
  uStack_90 = *(undefined8 *)(param_1 + 0xd0);
  uStack_220 = 0;
  uStack_228 = 0;
  lStack_218 = 0;
  uStack_150 = *(undefined1 *)(param_1 + 0xe0);
  uStack_80 = *(undefined1 *)(param_1 + 0xe0);
  puVar2 = &uStack_210;
  FUN_103554bd8();
  iVar1 = (int)puVar2;
  if (iVar1 != 1) {
    uStack_248 = uStack_98;
    uStack_250 = uStack_a0;
    uStack_238 = uStack_88;
    uStack_240 = uStack_90;
    uStack_230 = uStack_80;
    uStack_288 = uStack_d8;
    uStack_290 = uStack_e0;
    uStack_278 = uStack_c8;
    uStack_280 = uStack_d0;
    uStack_268 = uStack_b8;
    uStack_270 = uStack_c0;
    uStack_258 = uStack_a8;
    uStack_260 = uStack_b0;
    uStack_2c8 = uStack_118;
    uStack_2d0 = uStack_120;
    uStack_2b8 = uStack_108;
    uStack_2c0 = uStack_110;
    uStack_2a8 = uStack_f8;
    uStack_2b0 = uStack_100;
    uStack_298 = uStack_e8;
    uStack_2a0 = uStack_f0;
    uStack_2e8 = uStack_138;
    uStack_2f0 = uStack_140;
    uStack_2d8 = uStack_128;
    uStack_2e0 = uStack_130;
    puVar2 = &uStack_140;
    func_0x000103554bec();
    if ((int)puVar2 == 5) {
      puVar2 = &uStack_2f0;
      func_0x000103554c54();
      uVar6 = puVar2[1];
      uVar5 = *puVar2;
      lVar3 = puVar2[2];
      uStack_398 = uStack_1e8;
      uStack_3a0 = uStack_1f0;
      uStack_388 = uStack_1d8;
      uStack_390 = uStack_1e0;
      uStack_358 = uStack_1a8;
      uStack_360 = uStack_1b0;
      uStack_348 = uStack_198;
      uStack_350 = uStack_1a0;
      uStack_378 = uStack_1c8;
      uStack_380 = uStack_1d0;
      uStack_368 = uStack_1b8;
      uStack_370 = uStack_1c0;
      uStack_300 = uStack_150;
      uStack_318 = uStack_168;
      uStack_320 = uStack_170;
      uStack_308 = uStack_158;
      uStack_310 = uStack_160;
      uStack_338 = uStack_188;
      uStack_340 = uStack_190;
      uStack_328 = uStack_178;
      uStack_330 = uStack_180;
      uStack_3b8 = uStack_208;
      uStack_3c0 = uStack_210;
      uStack_3a8 = uStack_1f8;
      lStack_3b0 = uStack_200;
      FUN_103554bf8(&uStack_3c0,&uStack_488);
      puVar2 = (undefined8 *)0x0;
      FUN_103559bc4(0,0,0);
      uStack_228 = uVar5;
      uStack_220 = uVar6;
      lStack_218 = lVar3;
    }
  }
  pcVar4 = *(code **)(param_4 + 0x198);
  func_0x000103502994();
  (*pcVar4)(&uStack_228,&UNK_110666c90,puVar2,param_3,param_4);
  lVar3 = lStack_218;
  uVar6 = uStack_220;
  uVar5 = uStack_228;
  if (unaff_x21 == 0) {
    if (lStack_218 != 0) {
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
      FUN_103559bc4(uStack_228,uStack_220,lStack_218);
      uStack_488 = uVar5;
      uStack_480 = uVar6;
      lStack_478 = lVar3;
      func_0x0001034b0df0(&uStack_488);
      uStack_318 = uStack_3e0;
      uStack_320 = uStack_3e8;
      uStack_308 = uStack_3d0;
      uStack_310 = uStack_3d8;
      uStack_300 = uStack_3c8;
      uStack_358 = uStack_420;
      uStack_360 = uStack_428;
      uStack_348 = uStack_410;
      uStack_350 = uStack_418;
      uStack_338 = uStack_400;
      uStack_340 = uStack_408;
      uStack_328 = uStack_3f0;
      uStack_330 = uStack_3f8;
      uStack_398 = uStack_460;
      uStack_3a0 = uStack_468;
      uStack_388 = uStack_450;
      uStack_390 = uStack_458;
      uStack_378 = uStack_440;
      uStack_380 = uStack_448;
      uStack_368 = uStack_430;
      uStack_370 = uStack_438;
      uStack_3b8 = uStack_480;
      uStack_3c0 = uStack_488;
      uStack_3a8 = uStack_470;
      lStack_3b0 = lStack_478;
      func_0x0001034b0d74(&uStack_3c0);
      uStack_248 = *(undefined8 *)(param_1 + 200);
      uStack_250 = *(undefined8 *)(param_1 + 0xc0);
      uStack_238 = *(undefined8 *)(param_1 + 0xd8);
      uStack_240 = *(undefined8 *)(param_1 + 0xd0);
      uStack_230 = *(undefined1 *)(param_1 + 0xe0);
      uStack_288 = *(undefined8 *)(param_1 + 0x88);
      uStack_290 = *(undefined8 *)(param_1 + 0x80);
      uStack_278 = *(undefined8 *)(param_1 + 0x98);
      uStack_280 = *(undefined8 *)(param_1 + 0x90);
      uStack_268 = *(undefined8 *)(param_1 + 0xa8);
      uStack_270 = *(undefined8 *)(param_1 + 0xa0);
      uStack_258 = *(undefined8 *)(param_1 + 0xb8);
      uStack_260 = *(undefined8 *)(param_1 + 0xb0);
      uStack_2c8 = *(undefined8 *)(param_1 + 0x48);
      uStack_2d0 = *(undefined8 *)(param_1 + 0x40);
      uStack_2b8 = *(undefined8 *)(param_1 + 0x58);
      uStack_2c0 = *(undefined8 *)(param_1 + 0x50);
      uStack_2a8 = *(undefined8 *)(param_1 + 0x68);
      uStack_2b0 = *(undefined8 *)(param_1 + 0x60);
      uStack_298 = *(undefined8 *)(param_1 + 0x78);
      uStack_2a0 = *(undefined8 *)(param_1 + 0x70);
      uStack_2e8 = *(undefined8 *)(param_1 + 0x28);
      uStack_2f0 = *(undefined8 *)(param_1 + 0x20);
      uStack_2d8 = *(undefined8 *)(param_1 + 0x38);
      uStack_2e0 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 200) = uStack_318;
      *(undefined8 *)(param_1 + 0xc0) = uStack_320;
      *(undefined8 *)(param_1 + 0xd8) = uStack_308;
      *(undefined8 *)(param_1 + 0xd0) = uStack_310;
      *(undefined1 *)(param_1 + 0xe0) = uStack_300;
      *(undefined8 *)(param_1 + 0x88) = uStack_358;
      *(undefined8 *)(param_1 + 0x80) = uStack_360;
      *(undefined8 *)(param_1 + 0x98) = uStack_348;
      *(undefined8 *)(param_1 + 0x90) = uStack_350;
      *(undefined8 *)(param_1 + 0xa8) = uStack_338;
      *(undefined8 *)(param_1 + 0xa0) = uStack_340;
      *(undefined8 *)(param_1 + 0xb8) = uStack_328;
      *(undefined8 *)(param_1 + 0xb0) = uStack_330;
      *(undefined8 *)(param_1 + 0x48) = uStack_398;
      *(undefined8 *)(param_1 + 0x40) = uStack_3a0;
      *(undefined8 *)(param_1 + 0x58) = uStack_388;
      *(undefined8 *)(param_1 + 0x50) = uStack_390;
      *(undefined8 *)(param_1 + 0x68) = uStack_378;
      *(undefined8 *)(param_1 + 0x60) = uStack_380;
      *(undefined8 *)(param_1 + 0x78) = uStack_368;
      *(undefined8 *)(param_1 + 0x70) = uStack_370;
      *(undefined8 *)(param_1 + 0x28) = uStack_3b8;
      *(undefined8 *)(param_1 + 0x20) = uStack_3c0;
      *(undefined8 *)(param_1 + 0x38) = uStack_3a8;
      *(long *)(param_1 + 0x30) = lStack_3b0;
      func_0x000103559bf0(&uStack_2f0,0x112f73130,&UNK_10dbce400);
      return;
    }
    lVar3 = 0;
  }
  FUN_103559bc4(uStack_228,uStack_220,lVar3);
  return;
}



/* Entry: 10354c500; end: 10354c8e7;  */

/* WARNING: Removing unreachable block (ram,0x00010354c7c0) */

void FUN_10354c500(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  long lStack_500;
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
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined1 uStack_460;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  long lStack_430;
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
  undefined1 uStack_390;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  long lStack_360;
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
  undefined1 uStack_2c0;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
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
  
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_88 = *(undefined8 *)(param_1 + 0xb8);
  uStack_90 = *(undefined8 *)(param_1 + 0xb0);
  uStack_148 = *(undefined8 *)(param_1 + 200);
  uStack_150 = *(undefined8 *)(param_1 + 0xc0);
  uStack_78 = *(undefined8 *)(param_1 + 200);
  uStack_80 = *(undefined8 *)(param_1 + 0xc0);
  uStack_138 = *(undefined8 *)(param_1 + 0xd8);
  uStack_140 = *(undefined8 *)(param_1 + 0xd0);
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
  uStack_98 = *(undefined8 *)(param_1 + 0xa8);
  uStack_a0 = *(undefined8 *)(param_1 + 0xa0);
  uStack_158 = *(undefined8 *)(param_1 + 0xb8);
  uStack_160 = *(undefined8 *)(param_1 + 0xb0);
  uStack_108 = *(undefined8 *)(param_1 + 0x38);
  uStack_110 = *(undefined8 *)(param_1 + 0x30);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x48);
  lStack_1d0 = *(long *)(param_1 + 0x40);
  uStack_f8 = *(undefined8 *)(param_1 + 0x48);
  uStack_100 = *(undefined8 *)(param_1 + 0x40);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x58);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x50);
  uStack_e8 = *(undefined8 *)(param_1 + 0x58);
  uStack_f0 = *(undefined8 *)(param_1 + 0x50);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x68);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x60);
  uStack_d8 = *(undefined8 *)(param_1 + 0x68);
  uStack_e0 = *(undefined8 *)(param_1 + 0x60);
  uStack_198 = *(undefined8 *)(param_1 + 0x78);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x70);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x28);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x20);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x38);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x30);
  uStack_118 = *(undefined8 *)(param_1 + 0x28);
  uStack_120 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = *(undefined8 *)(param_1 + 0xd8);
  uStack_70 = *(undefined8 *)(param_1 + 0xd0);
  lStack_210 = 1;
  uStack_208 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_130 = *(undefined1 *)(param_1 + 0xe0);
  uStack_60 = *(undefined1 *)(param_1 + 0xe0);
  puVar2 = &uStack_1f0;
  FUN_103554bd8();
  iVar1 = (int)puVar2;
  if (iVar1 != 1) {
    uStack_2d8 = uStack_78;
    uStack_2e0 = uStack_80;
    uStack_2c8 = uStack_68;
    uStack_2d0 = uStack_70;
    uStack_2c0 = uStack_60;
    uStack_318 = uStack_b8;
    uStack_320 = uStack_c0;
    uStack_308 = uStack_a8;
    uStack_310 = uStack_b0;
    uStack_2f8 = uStack_98;
    uStack_300 = uStack_a0;
    uStack_2e8 = uStack_88;
    uStack_2f0 = uStack_90;
    uStack_358 = uStack_f8;
    lStack_360 = uStack_100;
    uStack_348 = uStack_e8;
    uStack_350 = uStack_f0;
    uStack_338 = uStack_d8;
    uStack_340 = uStack_e0;
    uStack_328 = uStack_c8;
    uStack_330 = uStack_d0;
    uStack_378 = uStack_118;
    uStack_380 = uStack_120;
    uStack_368 = uStack_108;
    uStack_370 = uStack_110;
    puVar2 = &uStack_120;
    func_0x000103554bec();
    if ((int)puVar2 == 6) {
      puVar3 = &uStack_380;
      func_0x000103554c58();
      uStack_268 = uStack_228;
      uStack_270 = uStack_230;
      uStack_258 = uStack_218;
      uStack_260 = uStack_220;
      uStack_248 = uStack_208;
      lStack_250 = lStack_210;
      uStack_238 = uStack_1f8;
      uStack_240 = uStack_200;
      uStack_3a8 = uStack_148;
      uStack_3b0 = uStack_150;
      uStack_398 = uStack_138;
      uStack_3a0 = uStack_140;
      uStack_390 = uStack_130;
      uStack_3e8 = uStack_188;
      uStack_3f0 = uStack_190;
      uStack_3d8 = uStack_178;
      uStack_3e0 = uStack_180;
      uStack_3c8 = uStack_168;
      uStack_3d0 = uStack_170;
      uStack_3b8 = uStack_158;
      uStack_3c0 = uStack_160;
      uStack_428 = uStack_1c8;
      lStack_430 = lStack_1d0;
      uStack_418 = uStack_1b8;
      uStack_420 = uStack_1c0;
      uStack_408 = uStack_1a8;
      uStack_410 = uStack_1b0;
      uStack_3f8 = uStack_198;
      uStack_400 = uStack_1a0;
      uStack_448 = uStack_1e8;
      uStack_450 = uStack_1f0;
      uStack_438 = uStack_1d8;
      uStack_440 = uStack_1e0;
      FUN_103554bf8(&uStack_450,&uStack_520);
      puVar2 = &uStack_270;
      func_0x000103559bf0(puVar2,0x112f74d00,&UNK_10dbd0d98);
      uStack_208 = puVar3[5];
      lStack_210 = puVar3[4];
      uStack_1f8 = puVar3[7];
      uStack_200 = puVar3[6];
      uStack_228 = puVar3[1];
      uStack_230 = *puVar3;
      uStack_218 = puVar3[3];
      uStack_220 = puVar3[2];
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  func_0x000103502a54();
  (*pcVar6)(&uStack_230,&UNK_110668e10,puVar2,param_3,param_4);
  if (unaff_x21 == 0) {
    uStack_2a8 = uStack_228;
    uStack_2b0 = uStack_230;
    uStack_298 = uStack_218;
    uStack_2a0 = uStack_220;
    uStack_288 = uStack_208;
    lStack_290 = lStack_210;
    uStack_278 = uStack_1f8;
    uStack_280 = uStack_200;
    uStack_268 = uStack_228;
    uStack_270 = uStack_230;
    uStack_258 = uStack_218;
    uStack_260 = uStack_220;
    uStack_248 = uStack_208;
    lStack_250 = lStack_210;
    uStack_238 = uStack_1f8;
    uStack_240 = uStack_200;
    if (lStack_210 != 1) {
      if (iVar1 == 1) {
        uStack_378 = uStack_228;
        uStack_380 = uStack_230;
        uStack_368 = uStack_218;
        uStack_370 = uStack_220;
        uStack_358 = uStack_208;
        lStack_360 = lStack_210;
        uStack_348 = uStack_1f8;
        uStack_350 = uStack_200;
        FUN_1034e93d8(&uStack_380,&uStack_450);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        uStack_378 = uStack_228;
        uStack_380 = uStack_230;
        uStack_368 = uStack_218;
        uStack_370 = uStack_220;
        uStack_358 = uStack_208;
        lStack_360 = lStack_210;
        uStack_348 = uStack_1f8;
        uStack_350 = uStack_200;
        FUN_1034e93d8(&uStack_380,&uStack_450);
        (*pcVar6)(param_3,param_4);
      }
      func_0x000103559bf0(&uStack_230,0x112f74d00,&UNK_10dbd0d98);
      uStack_518 = uStack_268;
      uStack_520 = uStack_270;
      uStack_508 = uStack_258;
      uStack_510 = uStack_260;
      uStack_4f8 = uStack_248;
      lStack_500 = lStack_250;
      uStack_4e8 = uStack_238;
      uStack_4f0 = uStack_240;
      func_0x000103554c5c(&uStack_520);
      uStack_3a8 = uStack_478;
      uStack_3b0 = uStack_480;
      uStack_398 = uStack_468;
      uStack_3a0 = uStack_470;
      uStack_390 = uStack_460;
      uStack_3e8 = uStack_4b8;
      uStack_3f0 = uStack_4c0;
      uStack_3d8 = uStack_4a8;
      uStack_3e0 = uStack_4b0;
      uStack_3c8 = uStack_498;
      uStack_3d0 = uStack_4a0;
      uStack_3b8 = uStack_488;
      uStack_3c0 = uStack_490;
      uStack_428 = uStack_4f8;
      lStack_430 = lStack_500;
      uStack_418 = uStack_4e8;
      uStack_420 = uStack_4f0;
      uStack_408 = uStack_4d8;
      uStack_410 = uStack_4e0;
      uStack_3f8 = uStack_4c8;
      uStack_400 = uStack_4d0;
      uStack_448 = uStack_518;
      uStack_450 = uStack_520;
      uStack_438 = uStack_508;
      uStack_440 = uStack_510;
      func_0x0001034b0d74(&uStack_450);
      uStack_2d8 = *(undefined8 *)(param_1 + 200);
      uStack_2e0 = *(undefined8 *)(param_1 + 0xc0);
      uStack_2c8 = *(undefined8 *)(param_1 + 0xd8);
      uStack_2d0 = *(undefined8 *)(param_1 + 0xd0);
      uStack_2c0 = *(undefined1 *)(param_1 + 0xe0);
      uStack_318 = *(undefined8 *)(param_1 + 0x88);
      uStack_320 = *(undefined8 *)(param_1 + 0x80);
      uStack_308 = *(undefined8 *)(param_1 + 0x98);
      uStack_310 = *(undefined8 *)(param_1 + 0x90);
      uStack_2f8 = *(undefined8 *)(param_1 + 0xa8);
      uStack_300 = *(undefined8 *)(param_1 + 0xa0);
      uStack_2e8 = *(undefined8 *)(param_1 + 0xb8);
      uStack_2f0 = *(undefined8 *)(param_1 + 0xb0);
      uStack_358 = *(undefined8 *)(param_1 + 0x48);
      lStack_360 = *(undefined8 *)(param_1 + 0x40);
      uStack_348 = *(undefined8 *)(param_1 + 0x58);
      uStack_350 = *(undefined8 *)(param_1 + 0x50);
      uStack_338 = *(undefined8 *)(param_1 + 0x68);
      uStack_340 = *(undefined8 *)(param_1 + 0x60);
      uStack_328 = *(undefined8 *)(param_1 + 0x78);
      uStack_330 = *(undefined8 *)(param_1 + 0x70);
      uStack_378 = *(undefined8 *)(param_1 + 0x28);
      uStack_380 = *(undefined8 *)(param_1 + 0x20);
      uStack_368 = *(undefined8 *)(param_1 + 0x38);
      uStack_370 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 200) = uStack_3a8;
      *(undefined8 *)(param_1 + 0xc0) = uStack_3b0;
      *(undefined8 *)(param_1 + 0xd8) = uStack_398;
      *(undefined8 *)(param_1 + 0xd0) = uStack_3a0;
      *(undefined1 *)(param_1 + 0xe0) = uStack_390;
      *(undefined8 *)(param_1 + 0x88) = uStack_3e8;
      *(undefined8 *)(param_1 + 0x80) = uStack_3f0;
      *(undefined8 *)(param_1 + 0x98) = uStack_3d8;
      *(undefined8 *)(param_1 + 0x90) = uStack_3e0;
      *(undefined8 *)(param_1 + 0xa8) = uStack_3c8;
      *(undefined8 *)(param_1 + 0xa0) = uStack_3d0;
      *(undefined8 *)(param_1 + 0xb8) = uStack_3b8;
      *(undefined8 *)(param_1 + 0xb0) = uStack_3c0;
      *(undefined8 *)(param_1 + 0x48) = uStack_428;
      *(long *)(param_1 + 0x40) = lStack_430;
      *(undefined8 *)(param_1 + 0x58) = uStack_418;
      *(undefined8 *)(param_1 + 0x50) = uStack_420;
      *(undefined8 *)(param_1 + 0x68) = uStack_408;
      *(undefined8 *)(param_1 + 0x60) = uStack_410;
      *(undefined8 *)(param_1 + 0x78) = uStack_3f8;
      *(undefined8 *)(param_1 + 0x70) = uStack_400;
      *(undefined8 *)(param_1 + 0x28) = uStack_448;
      *(undefined8 *)(param_1 + 0x20) = uStack_450;
      *(undefined8 *)(param_1 + 0x38) = uStack_438;
      *(undefined8 *)(param_1 + 0x30) = uStack_440;
      uVar4 = 0x112f73130;
      puVar5 = &UNK_10dbce400;
      puVar2 = &uStack_380;
      goto LAB_10354c73c;
    }
  }
  uVar4 = 0x112f74d00;
  puVar5 = &UNK_10dbd0d98;
  puVar2 = &uStack_230;
LAB_10354c73c:
  func_0x000103559bf0(puVar2,uVar4,puVar5);
  return;
}



/* Entry: 10354c8e8; end: 10354cce7;  */

/* WARNING: Removing unreachable block (ram,0x00010354cbac) */

void FUN_10354c8e8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  long unaff_x21;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lStack_4a8;
  long lStack_4a0;
  long lStack_498;
  long lStack_490;
  long lStack_488;
  long lStack_480;
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
  undefined1 uStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
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
  undefined1 uStack_320;
  long lStack_310;
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
  undefined1 uStack_250;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
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
  undefined1 uStack_150;
  long lStack_140;
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
  undefined1 uStack_80;
  
  lStack_228 = 0;
  lStack_230 = 0;
  lStack_218 = 0;
  lStack_220 = 0;
  lStack_238 = 0;
  lStack_240 = 0;
  uStack_a8 = *(undefined8 *)(param_1 + 0xb8);
  uStack_b0 = *(undefined8 *)(param_1 + 0xb0);
  uStack_168 = *(undefined8 *)(param_1 + 200);
  uStack_170 = *(undefined8 *)(param_1 + 0xc0);
  uStack_98 = *(undefined8 *)(param_1 + 200);
  uStack_a0 = *(undefined8 *)(param_1 + 0xc0);
  uStack_158 = *(undefined8 *)(param_1 + 0xd8);
  uStack_160 = *(undefined8 *)(param_1 + 0xd0);
  uStack_e8 = *(undefined8 *)(param_1 + 0x78);
  uStack_f0 = *(undefined8 *)(param_1 + 0x70);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x88);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x80);
  uStack_d8 = *(undefined8 *)(param_1 + 0x88);
  uStack_e0 = *(undefined8 *)(param_1 + 0x80);
  uStack_198 = *(undefined8 *)(param_1 + 0x98);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x90);
  uStack_c8 = *(undefined8 *)(param_1 + 0x98);
  uStack_d0 = *(undefined8 *)(param_1 + 0x90);
  uStack_188 = *(undefined8 *)(param_1 + 0xa8);
  uStack_190 = *(undefined8 *)(param_1 + 0xa0);
  uStack_b8 = *(undefined8 *)(param_1 + 0xa8);
  uStack_c0 = *(undefined8 *)(param_1 + 0xa0);
  uStack_178 = *(undefined8 *)(param_1 + 0xb8);
  uStack_180 = *(undefined8 *)(param_1 + 0xb0);
  uStack_128 = *(undefined8 *)(param_1 + 0x38);
  uStack_130 = *(undefined8 *)(param_1 + 0x30);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x48);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x40);
  uStack_118 = *(undefined8 *)(param_1 + 0x48);
  uStack_120 = *(undefined8 *)(param_1 + 0x40);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x58);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x50);
  uStack_108 = *(undefined8 *)(param_1 + 0x58);
  uStack_110 = *(undefined8 *)(param_1 + 0x50);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x68);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x60);
  uStack_f8 = *(undefined8 *)(param_1 + 0x68);
  uStack_100 = *(undefined8 *)(param_1 + 0x60);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x78);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x70);
  uStack_208 = *(undefined8 *)(param_1 + 0x28);
  lStack_210 = *(long *)(param_1 + 0x20);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x38);
  uStack_200 = *(undefined8 *)(param_1 + 0x30);
  uStack_138 = *(undefined8 *)(param_1 + 0x28);
  lStack_140 = *(long *)(param_1 + 0x20);
  uStack_88 = *(undefined8 *)(param_1 + 0xd8);
  uStack_90 = *(undefined8 *)(param_1 + 0xd0);
  uStack_150 = *(undefined1 *)(param_1 + 0xe0);
  uStack_80 = *(undefined1 *)(param_1 + 0xe0);
  plVar2 = &lStack_210;
  FUN_103554bd8();
  iVar1 = (int)plVar2;
  if (iVar1 != 1) {
    uStack_268 = uStack_98;
    uStack_270 = uStack_a0;
    uStack_258 = uStack_88;
    uStack_260 = uStack_90;
    uStack_250 = uStack_80;
    uStack_2a8 = uStack_d8;
    uStack_2b0 = uStack_e0;
    uStack_298 = uStack_c8;
    uStack_2a0 = uStack_d0;
    uStack_288 = uStack_b8;
    uStack_290 = uStack_c0;
    uStack_278 = uStack_a8;
    uStack_280 = uStack_b0;
    uStack_2e8 = uStack_118;
    uStack_2f0 = uStack_120;
    uStack_2d8 = uStack_108;
    uStack_2e0 = uStack_110;
    uStack_2c8 = uStack_f8;
    uStack_2d0 = uStack_100;
    uStack_2b8 = uStack_e8;
    uStack_2c0 = uStack_f0;
    uStack_308 = uStack_138;
    lStack_310 = lStack_140;
    uStack_2f8 = uStack_128;
    uStack_300 = uStack_130;
    plVar2 = &lStack_140;
    func_0x000103554bec();
    if ((int)plVar2 == 7) {
      plVar2 = &lStack_310;
      func_0x000103554c68();
      lVar4 = *plVar2;
      lVar5 = plVar2[5];
      lVar9 = plVar2[2];
      lVar8 = plVar2[1];
      lVar7 = plVar2[4];
      lVar6 = plVar2[3];
      lStack_3b8 = uStack_1e8;
      lStack_3c0 = uStack_1f0;
      uStack_3a8 = uStack_1d8;
      uStack_3b0 = uStack_1e0;
      uStack_378 = uStack_1a8;
      uStack_380 = uStack_1b0;
      uStack_368 = uStack_198;
      uStack_370 = uStack_1a0;
      uStack_398 = uStack_1c8;
      uStack_3a0 = uStack_1d0;
      uStack_388 = uStack_1b8;
      uStack_390 = uStack_1c0;
      uStack_320 = uStack_150;
      uStack_338 = uStack_168;
      uStack_340 = uStack_170;
      uStack_328 = uStack_158;
      uStack_330 = uStack_160;
      uStack_358 = uStack_188;
      uStack_360 = uStack_190;
      uStack_348 = uStack_178;
      uStack_350 = uStack_180;
      lStack_3d8 = uStack_208;
      lStack_3e0 = lStack_210;
      lStack_3c8 = uStack_1f8;
      lStack_3d0 = uStack_200;
      FUN_103554bf8(&lStack_3e0,&lStack_4a8);
      plVar2 = (long *)0x0;
      FUN_103503080(0,0,0,0,0,0);
      lStack_240 = lVar4;
      lStack_238 = lVar8;
      lStack_230 = lVar9;
      lStack_228 = lVar6;
      lStack_220 = lVar7;
      lStack_218 = lVar5;
    }
  }
  pcVar3 = *(code **)(param_4 + 0x198);
  func_0x000103502a94();
  (*pcVar3)(&lStack_240,&UNK_1106651a0,plVar2,param_3,param_4);
  lVar9 = lStack_218;
  lVar8 = lStack_220;
  lVar7 = lStack_228;
  lVar6 = lStack_230;
  lVar5 = lStack_238;
  lVar4 = lStack_240;
  if (unaff_x21 == 0) {
    if (lStack_240 != 0) {
      if (iVar1 == 1) {
        func_0x000107c61434(lStack_240);
        func_0x00010006c00c(lVar5,lVar6);
        func_0x0001034b0db8(lVar7,lVar8,lVar9);
      }
      else {
        pcVar3 = *(code **)(param_4 + 8);
        func_0x000107c61434(lStack_240);
        func_0x00010006c00c(lVar5,lVar6);
        func_0x0001034b0db8(lVar7,lVar8,lVar9);
        (*pcVar3)(param_3,param_4);
      }
      FUN_103503080(lStack_240,lStack_238,lStack_230,lStack_228,lStack_220,lStack_218);
      lStack_4a8 = lVar4;
      lStack_4a0 = lVar5;
      lStack_498 = lVar6;
      lStack_490 = lVar7;
      lStack_488 = lVar8;
      lStack_480 = lVar9;
      FUN_1034b0de4(&lStack_4a8);
      uStack_338 = uStack_400;
      uStack_340 = uStack_408;
      uStack_328 = uStack_3f0;
      uStack_330 = uStack_3f8;
      uStack_320 = uStack_3e8;
      uStack_378 = uStack_440;
      uStack_380 = uStack_448;
      uStack_368 = uStack_430;
      uStack_370 = uStack_438;
      uStack_358 = uStack_420;
      uStack_360 = uStack_428;
      uStack_348 = uStack_410;
      uStack_350 = uStack_418;
      lStack_3b8 = lStack_480;
      lStack_3c0 = lStack_488;
      uStack_3a8 = uStack_470;
      uStack_3b0 = uStack_478;
      uStack_398 = uStack_460;
      uStack_3a0 = uStack_468;
      uStack_388 = uStack_450;
      uStack_390 = uStack_458;
      lStack_3d8 = lStack_4a0;
      lStack_3e0 = lStack_4a8;
      lStack_3c8 = lStack_490;
      lStack_3d0 = lStack_498;
      func_0x0001034b0d74(&lStack_3e0);
      uStack_268 = *(undefined8 *)(param_1 + 200);
      uStack_270 = *(undefined8 *)(param_1 + 0xc0);
      uStack_258 = *(undefined8 *)(param_1 + 0xd8);
      uStack_260 = *(undefined8 *)(param_1 + 0xd0);
      uStack_250 = *(undefined1 *)(param_1 + 0xe0);
      uStack_2a8 = *(undefined8 *)(param_1 + 0x88);
      uStack_2b0 = *(undefined8 *)(param_1 + 0x80);
      uStack_298 = *(undefined8 *)(param_1 + 0x98);
      uStack_2a0 = *(undefined8 *)(param_1 + 0x90);
      uStack_288 = *(undefined8 *)(param_1 + 0xa8);
      uStack_290 = *(undefined8 *)(param_1 + 0xa0);
      uStack_278 = *(undefined8 *)(param_1 + 0xb8);
      uStack_280 = *(undefined8 *)(param_1 + 0xb0);
      uStack_2e8 = *(undefined8 *)(param_1 + 0x48);
      uStack_2f0 = *(undefined8 *)(param_1 + 0x40);
      uStack_2d8 = *(undefined8 *)(param_1 + 0x58);
      uStack_2e0 = *(undefined8 *)(param_1 + 0x50);
      uStack_2c8 = *(undefined8 *)(param_1 + 0x68);
      uStack_2d0 = *(undefined8 *)(param_1 + 0x60);
      uStack_2b8 = *(undefined8 *)(param_1 + 0x78);
      uStack_2c0 = *(undefined8 *)(param_1 + 0x70);
      uStack_308 = *(undefined8 *)(param_1 + 0x28);
      lStack_310 = *(long *)(param_1 + 0x20);
      uStack_2f8 = *(undefined8 *)(param_1 + 0x38);
      uStack_300 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 200) = uStack_338;
      *(undefined8 *)(param_1 + 0xc0) = uStack_340;
      *(undefined8 *)(param_1 + 0xd8) = uStack_328;
      *(undefined8 *)(param_1 + 0xd0) = uStack_330;
      *(undefined1 *)(param_1 + 0xe0) = uStack_320;
      *(undefined8 *)(param_1 + 0x88) = uStack_378;
      *(undefined8 *)(param_1 + 0x80) = uStack_380;
      *(undefined8 *)(param_1 + 0x98) = uStack_368;
      *(undefined8 *)(param_1 + 0x90) = uStack_370;
      *(undefined8 *)(param_1 + 0xa8) = uStack_358;
      *(undefined8 *)(param_1 + 0xa0) = uStack_360;
      *(undefined8 *)(param_1 + 0xb8) = uStack_348;
      *(undefined8 *)(param_1 + 0xb0) = uStack_350;
      *(long *)(param_1 + 0x48) = lStack_3b8;
      *(long *)(param_1 + 0x40) = lStack_3c0;
      *(undefined8 *)(param_1 + 0x58) = uStack_3a8;
      *(undefined8 *)(param_1 + 0x50) = uStack_3b0;
      *(undefined8 *)(param_1 + 0x68) = uStack_398;
      *(undefined8 *)(param_1 + 0x60) = uStack_3a0;
      *(undefined8 *)(param_1 + 0x78) = uStack_388;
      *(undefined8 *)(param_1 + 0x70) = uStack_390;
      *(long *)(param_1 + 0x28) = lStack_3d8;
      *(long *)(param_1 + 0x20) = lStack_3e0;
      *(long *)(param_1 + 0x38) = lStack_3c8;
      *(long *)(param_1 + 0x30) = lStack_3d0;
      func_0x000103559bf0(&lStack_310,0x112f73130,&UNK_10dbce400);
      return;
    }
    lVar4 = 0;
  }
  FUN_103503080(lVar4,lStack_238,lStack_230,lStack_228,lStack_220,lStack_218);
  return;
}



/* Entry: 10354cce8; end: 10354d0cf;  */

/* WARNING: Removing unreachable block (ram,0x00010354cfa8) */

void FUN_10354cce8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  long lStack_500;
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
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined1 uStack_460;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  long lStack_430;
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
  undefined1 uStack_390;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  long lStack_360;
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
  undefined1 uStack_2c0;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
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
  
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_88 = *(undefined8 *)(param_1 + 0xb8);
  uStack_90 = *(undefined8 *)(param_1 + 0xb0);
  uStack_148 = *(undefined8 *)(param_1 + 200);
  uStack_150 = *(undefined8 *)(param_1 + 0xc0);
  uStack_78 = *(undefined8 *)(param_1 + 200);
  uStack_80 = *(undefined8 *)(param_1 + 0xc0);
  uStack_138 = *(undefined8 *)(param_1 + 0xd8);
  uStack_140 = *(undefined8 *)(param_1 + 0xd0);
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
  uStack_98 = *(undefined8 *)(param_1 + 0xa8);
  uStack_a0 = *(undefined8 *)(param_1 + 0xa0);
  uStack_158 = *(undefined8 *)(param_1 + 0xb8);
  uStack_160 = *(undefined8 *)(param_1 + 0xb0);
  uStack_108 = *(undefined8 *)(param_1 + 0x38);
  uStack_110 = *(undefined8 *)(param_1 + 0x30);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x48);
  lStack_1d0 = *(long *)(param_1 + 0x40);
  uStack_f8 = *(undefined8 *)(param_1 + 0x48);
  uStack_100 = *(undefined8 *)(param_1 + 0x40);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x58);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x50);
  uStack_e8 = *(undefined8 *)(param_1 + 0x58);
  uStack_f0 = *(undefined8 *)(param_1 + 0x50);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x68);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x60);
  uStack_d8 = *(undefined8 *)(param_1 + 0x68);
  uStack_e0 = *(undefined8 *)(param_1 + 0x60);
  uStack_198 = *(undefined8 *)(param_1 + 0x78);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x70);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x28);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x20);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x38);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x30);
  uStack_118 = *(undefined8 *)(param_1 + 0x28);
  uStack_120 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = *(undefined8 *)(param_1 + 0xd8);
  uStack_70 = *(undefined8 *)(param_1 + 0xd0);
  lStack_210 = 1;
  uStack_208 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_130 = *(undefined1 *)(param_1 + 0xe0);
  uStack_60 = *(undefined1 *)(param_1 + 0xe0);
  puVar2 = &uStack_1f0;
  FUN_103554bd8();
  iVar1 = (int)puVar2;
  if (iVar1 != 1) {
    uStack_2d8 = uStack_78;
    uStack_2e0 = uStack_80;
    uStack_2c8 = uStack_68;
    uStack_2d0 = uStack_70;
    uStack_2c0 = uStack_60;
    uStack_318 = uStack_b8;
    uStack_320 = uStack_c0;
    uStack_308 = uStack_a8;
    uStack_310 = uStack_b0;
    uStack_2f8 = uStack_98;
    uStack_300 = uStack_a0;
    uStack_2e8 = uStack_88;
    uStack_2f0 = uStack_90;
    uStack_358 = uStack_f8;
    lStack_360 = uStack_100;
    uStack_348 = uStack_e8;
    uStack_350 = uStack_f0;
    uStack_338 = uStack_d8;
    uStack_340 = uStack_e0;
    uStack_328 = uStack_c8;
    uStack_330 = uStack_d0;
    uStack_378 = uStack_118;
    uStack_380 = uStack_120;
    uStack_368 = uStack_108;
    uStack_370 = uStack_110;
    puVar2 = &uStack_120;
    func_0x000103554bec();
    if ((int)puVar2 == 8) {
      puVar3 = &uStack_380;
      func_0x000103554c6c();
      uStack_268 = uStack_228;
      uStack_270 = uStack_230;
      uStack_258 = uStack_218;
      uStack_260 = uStack_220;
      uStack_248 = uStack_208;
      lStack_250 = lStack_210;
      uStack_238 = uStack_1f8;
      uStack_240 = uStack_200;
      uStack_3a8 = uStack_148;
      uStack_3b0 = uStack_150;
      uStack_398 = uStack_138;
      uStack_3a0 = uStack_140;
      uStack_390 = uStack_130;
      uStack_3e8 = uStack_188;
      uStack_3f0 = uStack_190;
      uStack_3d8 = uStack_178;
      uStack_3e0 = uStack_180;
      uStack_3c8 = uStack_168;
      uStack_3d0 = uStack_170;
      uStack_3b8 = uStack_158;
      uStack_3c0 = uStack_160;
      uStack_428 = uStack_1c8;
      lStack_430 = lStack_1d0;
      uStack_418 = uStack_1b8;
      uStack_420 = uStack_1c0;
      uStack_408 = uStack_1a8;
      uStack_410 = uStack_1b0;
      uStack_3f8 = uStack_198;
      uStack_400 = uStack_1a0;
      uStack_448 = uStack_1e8;
      uStack_450 = uStack_1f0;
      uStack_438 = uStack_1d8;
      uStack_440 = uStack_1e0;
      FUN_103554bf8(&uStack_450,&uStack_520);
      puVar2 = &uStack_270;
      func_0x000103559bf0(puVar2,0x112f74d20,&UNK_10dbda6b0);
      uStack_208 = puVar3[5];
      lStack_210 = puVar3[4];
      uStack_1f8 = puVar3[7];
      uStack_200 = puVar3[6];
      uStack_228 = puVar3[1];
      uStack_230 = *puVar3;
      uStack_218 = puVar3[3];
      uStack_220 = puVar3[2];
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  func_0x000103502b94();
  (*pcVar6)(&uStack_230,&UNK_110664ff0,puVar2,param_3,param_4);
  if (unaff_x21 == 0) {
    uStack_2a8 = uStack_228;
    uStack_2b0 = uStack_230;
    uStack_298 = uStack_218;
    uStack_2a0 = uStack_220;
    uStack_288 = uStack_208;
    lStack_290 = lStack_210;
    uStack_278 = uStack_1f8;
    uStack_280 = uStack_200;
    uStack_268 = uStack_228;
    uStack_270 = uStack_230;
    uStack_258 = uStack_218;
    uStack_260 = uStack_220;
    uStack_248 = uStack_208;
    lStack_250 = lStack_210;
    uStack_238 = uStack_1f8;
    uStack_240 = uStack_200;
    if (lStack_210 != 1) {
      if (iVar1 == 1) {
        uStack_378 = uStack_228;
        uStack_380 = uStack_230;
        uStack_368 = uStack_218;
        uStack_370 = uStack_220;
        uStack_358 = uStack_208;
        lStack_360 = lStack_210;
        uStack_348 = uStack_1f8;
        uStack_350 = uStack_200;
        FUN_1034e94dc(&uStack_380,&uStack_450);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        uStack_378 = uStack_228;
        uStack_380 = uStack_230;
        uStack_368 = uStack_218;
        uStack_370 = uStack_220;
        uStack_358 = uStack_208;
        lStack_360 = lStack_210;
        uStack_348 = uStack_1f8;
        uStack_350 = uStack_200;
        FUN_1034e94dc(&uStack_380,&uStack_450);
        (*pcVar6)(param_3,param_4);
      }
      func_0x000103559bf0(&uStack_230,0x112f74d20,&UNK_10dbda6b0);
      uStack_518 = uStack_268;
      uStack_520 = uStack_270;
      uStack_508 = uStack_258;
      uStack_510 = uStack_260;
      uStack_4f8 = uStack_248;
      lStack_500 = lStack_250;
      uStack_4e8 = uStack_238;
      uStack_4f0 = uStack_240;
      func_0x000103554c70(&uStack_520);
      uStack_3a8 = uStack_478;
      uStack_3b0 = uStack_480;
      uStack_398 = uStack_468;
      uStack_3a0 = uStack_470;
      uStack_390 = uStack_460;
      uStack_3e8 = uStack_4b8;
      uStack_3f0 = uStack_4c0;
      uStack_3d8 = uStack_4a8;
      uStack_3e0 = uStack_4b0;
      uStack_3c8 = uStack_498;
      uStack_3d0 = uStack_4a0;
      uStack_3b8 = uStack_488;
      uStack_3c0 = uStack_490;
      uStack_428 = uStack_4f8;
      lStack_430 = lStack_500;
      uStack_418 = uStack_4e8;
      uStack_420 = uStack_4f0;
      uStack_408 = uStack_4d8;
      uStack_410 = uStack_4e0;
      uStack_3f8 = uStack_4c8;
      uStack_400 = uStack_4d0;
      uStack_448 = uStack_518;
      uStack_450 = uStack_520;
      uStack_438 = uStack_508;
      uStack_440 = uStack_510;
      func_0x0001034b0d74(&uStack_450);
      uStack_2d8 = *(undefined8 *)(param_1 + 200);
      uStack_2e0 = *(undefined8 *)(param_1 + 0xc0);
      uStack_2c8 = *(undefined8 *)(param_1 + 0xd8);
      uStack_2d0 = *(undefined8 *)(param_1 + 0xd0);
      uStack_2c0 = *(undefined1 *)(param_1 + 0xe0);
      uStack_318 = *(undefined8 *)(param_1 + 0x88);
      uStack_320 = *(undefined8 *)(param_1 + 0x80);
      uStack_308 = *(undefined8 *)(param_1 + 0x98);
      uStack_310 = *(undefined8 *)(param_1 + 0x90);
      uStack_2f8 = *(undefined8 *)(param_1 + 0xa8);
      uStack_300 = *(undefined8 *)(param_1 + 0xa0);
      uStack_2e8 = *(undefined8 *)(param_1 + 0xb8);
      uStack_2f0 = *(undefined8 *)(param_1 + 0xb0);
      uStack_358 = *(undefined8 *)(param_1 + 0x48);
      lStack_360 = *(undefined8 *)(param_1 + 0x40);
      uStack_348 = *(undefined8 *)(param_1 + 0x58);
      uStack_350 = *(undefined8 *)(param_1 + 0x50);
      uStack_338 = *(undefined8 *)(param_1 + 0x68);
      uStack_340 = *(undefined8 *)(param_1 + 0x60);
      uStack_328 = *(undefined8 *)(param_1 + 0x78);
      uStack_330 = *(undefined8 *)(param_1 + 0x70);
      uStack_378 = *(undefined8 *)(param_1 + 0x28);
      uStack_380 = *(undefined8 *)(param_1 + 0x20);
      uStack_368 = *(undefined8 *)(param_1 + 0x38);
      uStack_370 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 200) = uStack_3a8;
      *(undefined8 *)(param_1 + 0xc0) = uStack_3b0;
      *(undefined8 *)(param_1 + 0xd8) = uStack_398;
      *(undefined8 *)(param_1 + 0xd0) = uStack_3a0;
      *(undefined1 *)(param_1 + 0xe0) = uStack_390;
      *(undefined8 *)(param_1 + 0x88) = uStack_3e8;
      *(undefined8 *)(param_1 + 0x80) = uStack_3f0;
      *(undefined8 *)(param_1 + 0x98) = uStack_3d8;
      *(undefined8 *)(param_1 + 0x90) = uStack_3e0;
      *(undefined8 *)(param_1 + 0xa8) = uStack_3c8;
      *(undefined8 *)(param_1 + 0xa0) = uStack_3d0;
      *(undefined8 *)(param_1 + 0xb8) = uStack_3b8;
      *(undefined8 *)(param_1 + 0xb0) = uStack_3c0;
      *(undefined8 *)(param_1 + 0x48) = uStack_428;
      *(long *)(param_1 + 0x40) = lStack_430;
      *(undefined8 *)(param_1 + 0x58) = uStack_418;
      *(undefined8 *)(param_1 + 0x50) = uStack_420;
      *(undefined8 *)(param_1 + 0x68) = uStack_408;
      *(undefined8 *)(param_1 + 0x60) = uStack_410;
      *(undefined8 *)(param_1 + 0x78) = uStack_3f8;
      *(undefined8 *)(param_1 + 0x70) = uStack_400;
      *(undefined8 *)(param_1 + 0x28) = uStack_448;
      *(undefined8 *)(param_1 + 0x20) = uStack_450;
      *(undefined8 *)(param_1 + 0x38) = uStack_438;
      *(undefined8 *)(param_1 + 0x30) = uStack_440;
      uVar4 = 0x112f73130;
      puVar5 = &UNK_10dbce400;
      puVar2 = &uStack_380;
      goto LAB_10354cf24;
    }
  }
  uVar4 = 0x112f74d20;
  puVar5 = &UNK_10dbda6b0;
  puVar2 = &uStack_230;
LAB_10354cf24:
  func_0x000103559bf0(puVar2,uVar4,puVar5);
  return;
}



/* Entry: 10354d0d0; end: 10354d4b7;  */

/* WARNING: Removing unreachable block (ram,0x00010354d390) */

void FUN_10354d0d0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  long lStack_500;
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
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined1 uStack_460;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  long lStack_430;
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
  undefined1 uStack_390;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  long lStack_360;
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
  undefined1 uStack_2c0;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
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
  
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_88 = *(undefined8 *)(param_1 + 0xb8);
  uStack_90 = *(undefined8 *)(param_1 + 0xb0);
  uStack_148 = *(undefined8 *)(param_1 + 200);
  uStack_150 = *(undefined8 *)(param_1 + 0xc0);
  uStack_78 = *(undefined8 *)(param_1 + 200);
  uStack_80 = *(undefined8 *)(param_1 + 0xc0);
  uStack_138 = *(undefined8 *)(param_1 + 0xd8);
  uStack_140 = *(undefined8 *)(param_1 + 0xd0);
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
  uStack_98 = *(undefined8 *)(param_1 + 0xa8);
  uStack_a0 = *(undefined8 *)(param_1 + 0xa0);
  uStack_158 = *(undefined8 *)(param_1 + 0xb8);
  uStack_160 = *(undefined8 *)(param_1 + 0xb0);
  uStack_108 = *(undefined8 *)(param_1 + 0x38);
  uStack_110 = *(undefined8 *)(param_1 + 0x30);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x48);
  lStack_1d0 = *(long *)(param_1 + 0x40);
  uStack_f8 = *(undefined8 *)(param_1 + 0x48);
  uStack_100 = *(undefined8 *)(param_1 + 0x40);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x58);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x50);
  uStack_e8 = *(undefined8 *)(param_1 + 0x58);
  uStack_f0 = *(undefined8 *)(param_1 + 0x50);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x68);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x60);
  uStack_d8 = *(undefined8 *)(param_1 + 0x68);
  uStack_e0 = *(undefined8 *)(param_1 + 0x60);
  uStack_198 = *(undefined8 *)(param_1 + 0x78);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x70);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x28);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x20);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x38);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x30);
  uStack_118 = *(undefined8 *)(param_1 + 0x28);
  uStack_120 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = *(undefined8 *)(param_1 + 0xd8);
  uStack_70 = *(undefined8 *)(param_1 + 0xd0);
  lStack_210 = 1;
  uStack_208 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_130 = *(undefined1 *)(param_1 + 0xe0);
  uStack_60 = *(undefined1 *)(param_1 + 0xe0);
  puVar2 = &uStack_1f0;
  FUN_103554bd8();
  iVar1 = (int)puVar2;
  if (iVar1 != 1) {
    uStack_2d8 = uStack_78;
    uStack_2e0 = uStack_80;
    uStack_2c8 = uStack_68;
    uStack_2d0 = uStack_70;
    uStack_2c0 = uStack_60;
    uStack_318 = uStack_b8;
    uStack_320 = uStack_c0;
    uStack_308 = uStack_a8;
    uStack_310 = uStack_b0;
    uStack_2f8 = uStack_98;
    uStack_300 = uStack_a0;
    uStack_2e8 = uStack_88;
    uStack_2f0 = uStack_90;
    uStack_358 = uStack_f8;
    lStack_360 = uStack_100;
    uStack_348 = uStack_e8;
    uStack_350 = uStack_f0;
    uStack_338 = uStack_d8;
    uStack_340 = uStack_e0;
    uStack_328 = uStack_c8;
    uStack_330 = uStack_d0;
    uStack_378 = uStack_118;
    uStack_380 = uStack_120;
    uStack_368 = uStack_108;
    uStack_370 = uStack_110;
    puVar2 = &uStack_120;
    func_0x000103554bec();
    if ((int)puVar2 == 9) {
      puVar3 = &uStack_380;
      func_0x000103554c7c();
      uStack_268 = uStack_228;
      uStack_270 = uStack_230;
      uStack_258 = uStack_218;
      uStack_260 = uStack_220;
      uStack_248 = uStack_208;
      lStack_250 = lStack_210;
      uStack_238 = uStack_1f8;
      uStack_240 = uStack_200;
      uStack_3a8 = uStack_148;
      uStack_3b0 = uStack_150;
      uStack_398 = uStack_138;
      uStack_3a0 = uStack_140;
      uStack_390 = uStack_130;
      uStack_3e8 = uStack_188;
      uStack_3f0 = uStack_190;
      uStack_3d8 = uStack_178;
      uStack_3e0 = uStack_180;
      uStack_3c8 = uStack_168;
      uStack_3d0 = uStack_170;
      uStack_3b8 = uStack_158;
      uStack_3c0 = uStack_160;
      uStack_428 = uStack_1c8;
      lStack_430 = lStack_1d0;
      uStack_418 = uStack_1b8;
      uStack_420 = uStack_1c0;
      uStack_408 = uStack_1a8;
      uStack_410 = uStack_1b0;
      uStack_3f8 = uStack_198;
      uStack_400 = uStack_1a0;
      uStack_448 = uStack_1e8;
      uStack_450 = uStack_1f0;
      uStack_438 = uStack_1d8;
      uStack_440 = uStack_1e0;
      FUN_103554bf8(&uStack_450,&uStack_520);
      puVar2 = &uStack_270;
      func_0x000103559bf0(puVar2,0x112f74d28,&UNK_10dbd0dc0);
      uStack_208 = puVar3[5];
      lStack_210 = puVar3[4];
      uStack_1f8 = puVar3[7];
      uStack_200 = puVar3[6];
      uStack_228 = puVar3[1];
      uStack_230 = *puVar3;
      uStack_218 = puVar3[3];
      uStack_220 = puVar3[2];
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  func_0x000103502bd4();
  (*pcVar6)(&uStack_230,&UNK_110666ae0,puVar2,param_3,param_4);
  if (unaff_x21 == 0) {
    uStack_2a8 = uStack_228;
    uStack_2b0 = uStack_230;
    uStack_298 = uStack_218;
    uStack_2a0 = uStack_220;
    uStack_288 = uStack_208;
    lStack_290 = lStack_210;
    uStack_278 = uStack_1f8;
    uStack_280 = uStack_200;
    uStack_268 = uStack_228;
    uStack_270 = uStack_230;
    uStack_258 = uStack_218;
    uStack_260 = uStack_220;
    uStack_248 = uStack_208;
    lStack_250 = lStack_210;
    uStack_238 = uStack_1f8;
    uStack_240 = uStack_200;
    if (lStack_210 != 1) {
      if (iVar1 == 1) {
        uStack_378 = uStack_228;
        uStack_380 = uStack_230;
        uStack_368 = uStack_218;
        uStack_370 = uStack_220;
        uStack_358 = uStack_208;
        lStack_360 = lStack_210;
        uStack_348 = uStack_1f8;
        uStack_350 = uStack_200;
        FUN_1034e9528(&uStack_380,&uStack_450);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        uStack_378 = uStack_228;
        uStack_380 = uStack_230;
        uStack_368 = uStack_218;
        uStack_370 = uStack_220;
        uStack_358 = uStack_208;
        lStack_360 = lStack_210;
        uStack_348 = uStack_1f8;
        uStack_350 = uStack_200;
        FUN_1034e9528(&uStack_380,&uStack_450);
        (*pcVar6)(param_3,param_4);
      }
      func_0x000103559bf0(&uStack_230,0x112f74d28,&UNK_10dbd0dc0);
      uStack_518 = uStack_268;
      uStack_520 = uStack_270;
      uStack_508 = uStack_258;
      uStack_510 = uStack_260;
      uStack_4f8 = uStack_248;
      lStack_500 = lStack_250;
      uStack_4e8 = uStack_238;
      uStack_4f0 = uStack_240;
      func_0x000103554c80(&uStack_520);
      uStack_3a8 = uStack_478;
      uStack_3b0 = uStack_480;
      uStack_398 = uStack_468;
      uStack_3a0 = uStack_470;
      uStack_390 = uStack_460;
      uStack_3e8 = uStack_4b8;
      uStack_3f0 = uStack_4c0;
      uStack_3d8 = uStack_4a8;
      uStack_3e0 = uStack_4b0;
      uStack_3c8 = uStack_498;
      uStack_3d0 = uStack_4a0;
      uStack_3b8 = uStack_488;
      uStack_3c0 = uStack_490;
      uStack_428 = uStack_4f8;
      lStack_430 = lStack_500;
      uStack_418 = uStack_4e8;
      uStack_420 = uStack_4f0;
      uStack_408 = uStack_4d8;
      uStack_410 = uStack_4e0;
      uStack_3f8 = uStack_4c8;
      uStack_400 = uStack_4d0;
      uStack_448 = uStack_518;
      uStack_450 = uStack_520;
      uStack_438 = uStack_508;
      uStack_440 = uStack_510;
      func_0x0001034b0d74(&uStack_450);
      uStack_2d8 = *(undefined8 *)(param_1 + 200);
      uStack_2e0 = *(undefined8 *)(param_1 + 0xc0);
      uStack_2c8 = *(undefined8 *)(param_1 + 0xd8);
      uStack_2d0 = *(undefined8 *)(param_1 + 0xd0);
      uStack_2c0 = *(undefined1 *)(param_1 + 0xe0);
      uStack_318 = *(undefined8 *)(param_1 + 0x88);
      uStack_320 = *(undefined8 *)(param_1 + 0x80);
      uStack_308 = *(undefined8 *)(param_1 + 0x98);
      uStack_310 = *(undefined8 *)(param_1 + 0x90);
      uStack_2f8 = *(undefined8 *)(param_1 + 0xa8);
      uStack_300 = *(undefined8 *)(param_1 + 0xa0);
      uStack_2e8 = *(undefined8 *)(param_1 + 0xb8);
      uStack_2f0 = *(undefined8 *)(param_1 + 0xb0);
      uStack_358 = *(undefined8 *)(param_1 + 0x48);
      lStack_360 = *(undefined8 *)(param_1 + 0x40);
      uStack_348 = *(undefined8 *)(param_1 + 0x58);
      uStack_350 = *(undefined8 *)(param_1 + 0x50);
      uStack_338 = *(undefined8 *)(param_1 + 0x68);
      uStack_340 = *(undefined8 *)(param_1 + 0x60);
      uStack_328 = *(undefined8 *)(param_1 + 0x78);
      uStack_330 = *(undefined8 *)(param_1 + 0x70);
      uStack_378 = *(undefined8 *)(param_1 + 0x28);
      uStack_380 = *(undefined8 *)(param_1 + 0x20);
      uStack_368 = *(undefined8 *)(param_1 + 0x38);
      uStack_370 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 200) = uStack_3a8;
      *(undefined8 *)(param_1 + 0xc0) = uStack_3b0;
      *(undefined8 *)(param_1 + 0xd8) = uStack_398;
      *(undefined8 *)(param_1 + 0xd0) = uStack_3a0;
      *(undefined1 *)(param_1 + 0xe0) = uStack_390;
      *(undefined8 *)(param_1 + 0x88) = uStack_3e8;
      *(undefined8 *)(param_1 + 0x80) = uStack_3f0;
      *(undefined8 *)(param_1 + 0x98) = uStack_3d8;
      *(undefined8 *)(param_1 + 0x90) = uStack_3e0;
      *(undefined8 *)(param_1 + 0xa8) = uStack_3c8;
      *(undefined8 *)(param_1 + 0xa0) = uStack_3d0;
      *(undefined8 *)(param_1 + 0xb8) = uStack_3b8;
      *(undefined8 *)(param_1 + 0xb0) = uStack_3c0;
      *(undefined8 *)(param_1 + 0x48) = uStack_428;
      *(long *)(param_1 + 0x40) = lStack_430;
      *(undefined8 *)(param_1 + 0x58) = uStack_418;
      *(undefined8 *)(param_1 + 0x50) = uStack_420;
      *(undefined8 *)(param_1 + 0x68) = uStack_408;
      *(undefined8 *)(param_1 + 0x60) = uStack_410;
      *(undefined8 *)(param_1 + 0x78) = uStack_3f8;
      *(undefined8 *)(param_1 + 0x70) = uStack_400;
      *(undefined8 *)(param_1 + 0x28) = uStack_448;
      *(undefined8 *)(param_1 + 0x20) = uStack_450;
      *(undefined8 *)(param_1 + 0x38) = uStack_438;
      *(undefined8 *)(param_1 + 0x30) = uStack_440;
      uVar4 = 0x112f73130;
      puVar5 = &UNK_10dbce400;
      puVar2 = &uStack_380;
      goto LAB_10354d30c;
    }
  }
  uVar4 = 0x112f74d28;
  puVar5 = &UNK_10dbd0dc0;
  puVar2 = &uStack_230;
LAB_10354d30c:
  func_0x000103559bf0(puVar2,uVar4,puVar5);
  return;
}



/* Entry: 10354d4b8; end: 10354da8b;  */

/* WARNING: Removing unreachable block (ram,0x00010354d944) */

void FUN_10354d4b8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x21;
  code *pcVar7;
  undefined8 uStack_760;
  undefined8 uStack_758;
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
  undefined1 uStack_6a0;
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
  
  puVar4 = &uStack_760;
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
  uStack_88 = *(undefined8 *)(param_1 + 0xb8);
  uStack_90 = *(undefined8 *)(param_1 + 0xb0);
  uStack_148 = *(undefined8 *)(param_1 + 200);
  uStack_150 = *(undefined8 *)(param_1 + 0xc0);
  uStack_78 = *(undefined8 *)(param_1 + 200);
  uStack_80 = *(undefined8 *)(param_1 + 0xc0);
  uStack_138 = *(undefined8 *)(param_1 + 0xd8);
  uStack_140 = *(undefined8 *)(param_1 + 0xd0);
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
  uStack_98 = *(undefined8 *)(param_1 + 0xa8);
  uStack_a0 = *(undefined8 *)(param_1 + 0xa0);
  uStack_158 = *(undefined8 *)(param_1 + 0xb8);
  uStack_160 = *(undefined8 *)(param_1 + 0xb0);
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
  uStack_d8 = *(undefined8 *)(param_1 + 0x68);
  uStack_e0 = *(undefined8 *)(param_1 + 0x60);
  uStack_198 = *(undefined8 *)(param_1 + 0x78);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x70);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x28);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x20);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x38);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x30);
  uStack_118 = *(undefined8 *)(param_1 + 0x28);
  uStack_120 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = *(undefined8 *)(param_1 + 0xd8);
  uStack_70 = *(undefined8 *)(param_1 + 0xd0);
  uStack_130 = *(undefined1 *)(param_1 + 0xe0);
  uStack_60 = *(undefined1 *)(param_1 + 0xe0);
  puVar2 = &uStack_1f0;
  FUN_103554bd8();
  puVar3 = puVar2;
  if ((int)puVar2 != 1) {
    uStack_518 = uStack_78;
    uStack_520 = uStack_80;
    uStack_508 = uStack_68;
    uStack_510 = uStack_70;
    uStack_500 = uStack_60;
    uStack_558 = uStack_b8;
    uStack_560 = uStack_c0;
    uStack_548 = uStack_a8;
    uStack_550 = uStack_b0;
    uStack_538 = uStack_98;
    uStack_540 = uStack_a0;
    uStack_528 = uStack_88;
    uStack_530 = uStack_90;
    uStack_598 = uStack_f8;
    uStack_5a0 = uStack_100;
    uStack_588 = uStack_e8;
    uStack_590 = uStack_f0;
    uStack_578 = uStack_d8;
    uStack_580 = uStack_e0;
    uStack_568 = uStack_c8;
    uStack_570 = uStack_d0;
    uStack_5b8 = uStack_118;
    uStack_5c0 = uStack_120;
    uStack_5a8 = uStack_108;
    uStack_5b0 = uStack_110;
    puVar3 = &uStack_120;
    func_0x000103554bec();
    if ((int)puVar3 == 10) {
      puVar3 = &uStack_5c0;
      func_0x000103554c8c();
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
      uStack_5e8 = uStack_148;
      uStack_5f0 = uStack_150;
      uStack_5d8 = uStack_138;
      uStack_5e0 = uStack_140;
      uStack_5d0 = uStack_130;
      uStack_628 = uStack_188;
      uStack_630 = uStack_190;
      uStack_618 = uStack_178;
      uStack_620 = uStack_180;
      uStack_608 = uStack_168;
      uStack_610 = uStack_170;
      uStack_5f8 = uStack_158;
      uStack_600 = uStack_160;
      uStack_668 = uStack_1c8;
      uStack_670 = uStack_1d0;
      uStack_658 = uStack_1b8;
      uStack_660 = uStack_1c0;
      uStack_648 = uStack_1a8;
      uStack_650 = uStack_1b0;
      uStack_638 = uStack_198;
      uStack_640 = uStack_1a0;
      uStack_688 = uStack_1e8;
      uStack_690 = uStack_1f0;
      uStack_678 = uStack_1d8;
      uStack_680 = uStack_1e0;
      FUN_103554bf8(&uStack_690,&uStack_760);
      func_0x000103559bf0(&uStack_430,0x112f74d30,&UNK_10dbd4750);
      uStack_738 = puVar3[5];
      uStack_740 = puVar3[4];
      uStack_728 = puVar3[7];
      uStack_730 = puVar3[6];
      uStack_758 = puVar3[1];
      uStack_760 = *puVar3;
      uStack_748 = puVar3[3];
      uStack_750 = puVar3[2];
      uStack_6f8 = puVar3[0xd];
      uStack_700 = puVar3[0xc];
      uStack_6e8 = puVar3[0xf];
      uStack_6f0 = puVar3[0xe];
      uStack_718 = puVar3[9];
      uStack_720 = puVar3[8];
      uStack_708 = puVar3[0xb];
      uStack_710 = puVar3[10];
      uStack_6b8 = puVar3[0x15];
      uStack_6c0 = puVar3[0x14];
      uStack_6a8 = puVar3[0x17];
      uStack_6b0 = puVar3[0x16];
      uStack_6d8 = puVar3[0x11];
      uStack_6e0 = puVar3[0x10];
      uStack_6c8 = puVar3[0x13];
      uStack_6d0 = puVar3[0x12];
      func_0x00010350313c(&uStack_760);
      uStack_2e8 = uStack_6d8;
      uStack_2f0 = uStack_6e0;
      uStack_2d8 = uStack_6c8;
      uStack_2e0 = uStack_6d0;
      uStack_2c8 = uStack_6b8;
      uStack_2d0 = uStack_6c0;
      uStack_2b8 = uStack_6a8;
      uStack_2c0 = uStack_6b0;
      uStack_328 = uStack_718;
      uStack_330 = uStack_720;
      uStack_318 = uStack_708;
      uStack_320 = uStack_710;
      uStack_308 = uStack_6f8;
      uStack_310 = uStack_700;
      uStack_2f8 = uStack_6e8;
      uStack_300 = uStack_6f0;
      uStack_368 = uStack_758;
      uStack_370 = uStack_760;
      uStack_358 = uStack_748;
      uStack_360 = uStack_750;
      uStack_348 = uStack_738;
      uStack_350 = uStack_740;
      uStack_338 = uStack_728;
      uStack_340 = uStack_730;
      puVar3 = puVar4;
    }
  }
  pcVar7 = *(code **)(param_4 + 0x198);
  func_0x000103502c14();
  (*pcVar7)(&uStack_370,&UNK_110668c48,puVar3,param_3,param_4);
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
    iVar1 = (int)&uStack_4f0;
    FUN_10352184c();
    if (iVar1 != 1) {
      if ((int)puVar2 == 1) {
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
        pcVar7 = *(code **)(param_4 + 8);
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
        (*pcVar7)(param_3,param_4);
      }
      func_0x000103559bf0(&uStack_370,0x112f74d30,&UNK_10dbd4750);
      uStack_6d8 = uStack_3a8;
      uStack_6e0 = uStack_3b0;
      uStack_6c8 = uStack_398;
      uStack_6d0 = uStack_3a0;
      uStack_6b8 = uStack_388;
      uStack_6c0 = uStack_390;
      uStack_6a8 = uStack_378;
      uStack_6b0 = uStack_380;
      uStack_718 = uStack_3e8;
      uStack_720 = uStack_3f0;
      uStack_708 = uStack_3d8;
      uStack_710 = uStack_3e0;
      uStack_6f8 = uStack_3c8;
      uStack_700 = uStack_3d0;
      uStack_6e8 = uStack_3b8;
      uStack_6f0 = uStack_3c0;
      uStack_758 = uStack_428;
      uStack_760 = uStack_430;
      uStack_748 = uStack_418;
      uStack_750 = uStack_420;
      uStack_738 = uStack_408;
      uStack_740 = uStack_410;
      uStack_728 = uStack_3f8;
      uStack_730 = uStack_400;
      func_0x000103554c90(&uStack_760);
      uStack_5e8 = uStack_6b8;
      uStack_5f0 = uStack_6c0;
      uStack_5d8 = uStack_6a8;
      uStack_5e0 = uStack_6b0;
      uStack_5d0 = uStack_6a0;
      uStack_628 = uStack_6f8;
      uStack_630 = uStack_700;
      uStack_618 = uStack_6e8;
      uStack_620 = uStack_6f0;
      uStack_608 = uStack_6d8;
      uStack_610 = uStack_6e0;
      uStack_5f8 = uStack_6c8;
      uStack_600 = uStack_6d0;
      uStack_668 = uStack_738;
      uStack_670 = uStack_740;
      uStack_658 = uStack_728;
      uStack_660 = uStack_730;
      uStack_648 = uStack_718;
      uStack_650 = uStack_720;
      uStack_638 = uStack_708;
      uStack_640 = uStack_710;
      uStack_688 = uStack_758;
      uStack_690 = uStack_760;
      uStack_678 = uStack_748;
      uStack_680 = uStack_750;
      func_0x0001034b0d74(&uStack_690);
      uStack_518 = *(undefined8 *)(param_1 + 200);
      uStack_520 = *(undefined8 *)(param_1 + 0xc0);
      uStack_508 = *(undefined8 *)(param_1 + 0xd8);
      uStack_510 = *(undefined8 *)(param_1 + 0xd0);
      uStack_500 = *(undefined1 *)(param_1 + 0xe0);
      uStack_558 = *(undefined8 *)(param_1 + 0x88);
      uStack_560 = *(undefined8 *)(param_1 + 0x80);
      uStack_548 = *(undefined8 *)(param_1 + 0x98);
      uStack_550 = *(undefined8 *)(param_1 + 0x90);
      uStack_538 = *(undefined8 *)(param_1 + 0xa8);
      uStack_540 = *(undefined8 *)(param_1 + 0xa0);
      uStack_528 = *(undefined8 *)(param_1 + 0xb8);
      uStack_530 = *(undefined8 *)(param_1 + 0xb0);
      uStack_598 = *(undefined8 *)(param_1 + 0x48);
      uStack_5a0 = *(undefined8 *)(param_1 + 0x40);
      uStack_588 = *(undefined8 *)(param_1 + 0x58);
      uStack_590 = *(undefined8 *)(param_1 + 0x50);
      uStack_578 = *(undefined8 *)(param_1 + 0x68);
      uStack_580 = *(undefined8 *)(param_1 + 0x60);
      uStack_568 = *(undefined8 *)(param_1 + 0x78);
      uStack_570 = *(undefined8 *)(param_1 + 0x70);
      uStack_5b8 = *(undefined8 *)(param_1 + 0x28);
      uStack_5c0 = *(undefined8 *)(param_1 + 0x20);
      uStack_5a8 = *(undefined8 *)(param_1 + 0x38);
      uStack_5b0 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 200) = uStack_5e8;
      *(undefined8 *)(param_1 + 0xc0) = uStack_5f0;
      *(undefined8 *)(param_1 + 0xd8) = uStack_5d8;
      *(undefined8 *)(param_1 + 0xd0) = uStack_5e0;
      *(undefined1 *)(param_1 + 0xe0) = uStack_5d0;
      *(undefined8 *)(param_1 + 0x88) = uStack_628;
      *(undefined8 *)(param_1 + 0x80) = uStack_630;
      *(undefined8 *)(param_1 + 0x98) = uStack_618;
      *(undefined8 *)(param_1 + 0x90) = uStack_620;
      *(undefined8 *)(param_1 + 0xa8) = uStack_608;
      *(undefined8 *)(param_1 + 0xa0) = uStack_610;
      *(undefined8 *)(param_1 + 0xb8) = uStack_5f8;
      *(undefined8 *)(param_1 + 0xb0) = uStack_600;
      *(undefined8 *)(param_1 + 0x48) = uStack_668;
      *(undefined8 *)(param_1 + 0x40) = uStack_670;
      *(undefined8 *)(param_1 + 0x58) = uStack_658;
      *(undefined8 *)(param_1 + 0x50) = uStack_660;
      *(undefined8 *)(param_1 + 0x68) = uStack_648;
      *(undefined8 *)(param_1 + 0x60) = uStack_650;
      *(undefined8 *)(param_1 + 0x78) = uStack_638;
      *(undefined8 *)(param_1 + 0x70) = uStack_640;
      *(undefined8 *)(param_1 + 0x28) = uStack_688;
      *(undefined8 *)(param_1 + 0x20) = uStack_690;
      *(undefined8 *)(param_1 + 0x38) = uStack_678;
      *(undefined8 *)(param_1 + 0x30) = uStack_680;
      uVar5 = 0x112f73130;
      puVar6 = &UNK_10dbce400;
      puVar2 = &uStack_5c0;
      goto LAB_10354d880;
    }
  }
  uVar5 = 0x112f74d30;
  puVar6 = &UNK_10dbd4750;
  puVar2 = &uStack_370;
LAB_10354d880:
  func_0x000103559bf0(puVar2,uVar5,puVar6);
  return;
}



/* Entry: 10354da8c; end: 10354debf;  */

/* WARNING: Removing unreachable block (ram,0x00010354dd90) */

void FUN_10354da8c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  long lStack_560;
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
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined1 uStack_4c0;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  long lStack_490;
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
  undefined1 uStack_3f0;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  long lStack_3c0;
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
  undefined1 uStack_320;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long lStack_2f0;
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
  long lStack_290;
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
  long lStack_230;
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
  long lStack_1d0;
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
  
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_220 = 0;
  uStack_228 = 0;
  uStack_210 = 0;
  uStack_218 = 0;
  uStack_200 = 0;
  uStack_208 = 0;
  uStack_88 = *(undefined8 *)(param_1 + 0xb8);
  uStack_90 = *(undefined8 *)(param_1 + 0xb0);
  uStack_148 = *(undefined8 *)(param_1 + 200);
  uStack_150 = *(undefined8 *)(param_1 + 0xc0);
  uStack_78 = *(undefined8 *)(param_1 + 200);
  uStack_80 = *(undefined8 *)(param_1 + 0xc0);
  uStack_138 = *(undefined8 *)(param_1 + 0xd8);
  uStack_140 = *(undefined8 *)(param_1 + 0xd0);
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
  uStack_98 = *(undefined8 *)(param_1 + 0xa8);
  uStack_a0 = *(undefined8 *)(param_1 + 0xa0);
  uStack_158 = *(undefined8 *)(param_1 + 0xb8);
  uStack_160 = *(undefined8 *)(param_1 + 0xb0);
  uStack_108 = *(undefined8 *)(param_1 + 0x38);
  uStack_110 = *(undefined8 *)(param_1 + 0x30);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x48);
  lStack_1d0 = *(long *)(param_1 + 0x40);
  uStack_f8 = *(undefined8 *)(param_1 + 0x48);
  uStack_100 = *(undefined8 *)(param_1 + 0x40);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x58);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x50);
  uStack_e8 = *(undefined8 *)(param_1 + 0x58);
  uStack_f0 = *(undefined8 *)(param_1 + 0x50);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x68);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x60);
  uStack_d8 = *(undefined8 *)(param_1 + 0x68);
  uStack_e0 = *(undefined8 *)(param_1 + 0x60);
  uStack_198 = *(undefined8 *)(param_1 + 0x78);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x70);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x28);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x20);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x38);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x30);
  uStack_118 = *(undefined8 *)(param_1 + 0x28);
  uStack_120 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = *(undefined8 *)(param_1 + 0xd8);
  uStack_70 = *(undefined8 *)(param_1 + 0xd0);
  lStack_230 = 1;
  uStack_1f8 = 0;
  uStack_130 = *(undefined1 *)(param_1 + 0xe0);
  uStack_60 = *(undefined1 *)(param_1 + 0xe0);
  puVar2 = &uStack_1f0;
  FUN_103554bd8();
  iVar1 = (int)puVar2;
  if (iVar1 != 1) {
    uStack_338 = uStack_78;
    uStack_340 = uStack_80;
    uStack_328 = uStack_68;
    uStack_330 = uStack_70;
    uStack_320 = uStack_60;
    uStack_378 = uStack_b8;
    uStack_380 = uStack_c0;
    uStack_368 = uStack_a8;
    uStack_370 = uStack_b0;
    uStack_358 = uStack_98;
    uStack_360 = uStack_a0;
    uStack_348 = uStack_88;
    uStack_350 = uStack_90;
    uStack_3b8 = uStack_f8;
    lStack_3c0 = uStack_100;
    uStack_3a8 = uStack_e8;
    uStack_3b0 = uStack_f0;
    uStack_398 = uStack_d8;
    uStack_3a0 = uStack_e0;
    uStack_388 = uStack_c8;
    uStack_390 = uStack_d0;
    uStack_3d8 = uStack_118;
    uStack_3e0 = uStack_120;
    uStack_3c8 = uStack_108;
    uStack_3d0 = uStack_110;
    puVar2 = &uStack_120;
    func_0x000103554bec();
    if ((int)puVar2 == 0xb) {
      puVar3 = &uStack_3e0;
      func_0x000103554c9c();
      uStack_288 = uStack_228;
      lStack_290 = lStack_230;
      uStack_278 = uStack_218;
      uStack_280 = uStack_220;
      uStack_268 = uStack_208;
      uStack_270 = uStack_210;
      uStack_258 = uStack_1f8;
      uStack_260 = uStack_200;
      uStack_2a8 = uStack_248;
      uStack_2b0 = uStack_250;
      uStack_298 = uStack_238;
      uStack_2a0 = uStack_240;
      uStack_3f0 = uStack_130;
      uStack_408 = uStack_148;
      uStack_410 = uStack_150;
      uStack_3f8 = uStack_138;
      uStack_400 = uStack_140;
      uStack_428 = uStack_168;
      uStack_430 = uStack_170;
      uStack_418 = uStack_158;
      uStack_420 = uStack_160;
      uStack_448 = uStack_188;
      uStack_450 = uStack_190;
      uStack_438 = uStack_178;
      uStack_440 = uStack_180;
      uStack_468 = uStack_1a8;
      uStack_470 = uStack_1b0;
      uStack_458 = uStack_198;
      uStack_460 = uStack_1a0;
      uStack_488 = uStack_1c8;
      lStack_490 = lStack_1d0;
      uStack_478 = uStack_1b8;
      uStack_480 = uStack_1c0;
      uStack_4a8 = uStack_1e8;
      uStack_4b0 = uStack_1f0;
      uStack_498 = uStack_1d8;
      uStack_4a0 = uStack_1e0;
      FUN_103554bf8(&uStack_4b0,&uStack_580);
      puVar2 = &uStack_2b0;
      func_0x000103559bf0(puVar2,0x112f74d48,&UNK_10dbd0de0);
      uStack_248 = puVar3[1];
      uStack_250 = *puVar3;
      uStack_238 = puVar3[3];
      uStack_240 = puVar3[2];
      uStack_208 = puVar3[9];
      uStack_210 = puVar3[8];
      uStack_1f8 = puVar3[0xb];
      uStack_200 = puVar3[10];
      uStack_228 = puVar3[5];
      lStack_230 = puVar3[4];
      uStack_218 = puVar3[7];
      uStack_220 = puVar3[6];
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  func_0x000103502c94();
  (*pcVar6)(&uStack_250,&UNK_110668a98,puVar2,param_3,param_4);
  if (unaff_x21 == 0) {
    uStack_2e8 = uStack_228;
    lStack_2f0 = lStack_230;
    uStack_2d8 = uStack_218;
    uStack_2e0 = uStack_220;
    uStack_2c8 = uStack_208;
    uStack_2d0 = uStack_210;
    uStack_2b8 = uStack_1f8;
    uStack_2c0 = uStack_200;
    uStack_308 = uStack_248;
    uStack_310 = uStack_250;
    uStack_2f8 = uStack_238;
    uStack_300 = uStack_240;
    uStack_288 = uStack_228;
    lStack_290 = lStack_230;
    uStack_278 = uStack_218;
    uStack_280 = uStack_220;
    uStack_268 = uStack_208;
    uStack_270 = uStack_210;
    uStack_258 = uStack_1f8;
    uStack_260 = uStack_200;
    uStack_2a8 = uStack_248;
    uStack_2b0 = uStack_250;
    uStack_298 = uStack_238;
    uStack_2a0 = uStack_240;
    if (lStack_230 != 1) {
      if (iVar1 == 1) {
        uStack_3b8 = uStack_228;
        lStack_3c0 = lStack_230;
        uStack_3a8 = uStack_218;
        uStack_3b0 = uStack_220;
        uStack_398 = uStack_208;
        uStack_3a0 = uStack_210;
        uStack_388 = uStack_1f8;
        uStack_390 = uStack_200;
        uStack_3d8 = uStack_248;
        uStack_3e0 = uStack_250;
        uStack_3c8 = uStack_238;
        uStack_3d0 = uStack_240;
        FUN_1034e962c(&uStack_3e0,&uStack_4b0);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        uStack_3b8 = uStack_228;
        lStack_3c0 = lStack_230;
        uStack_3a8 = uStack_218;
        uStack_3b0 = uStack_220;
        uStack_398 = uStack_208;
        uStack_3a0 = uStack_210;
        uStack_388 = uStack_1f8;
        uStack_390 = uStack_200;
        uStack_3d8 = uStack_248;
        uStack_3e0 = uStack_250;
        uStack_3c8 = uStack_238;
        uStack_3d0 = uStack_240;
        FUN_1034e962c(&uStack_3e0,&uStack_4b0);
        (*pcVar6)(param_3,param_4);
      }
      func_0x000103559bf0(&uStack_250,0x112f74d48,&UNK_10dbd0de0);
      uStack_558 = uStack_288;
      lStack_560 = lStack_290;
      uStack_548 = uStack_278;
      uStack_550 = uStack_280;
      uStack_538 = uStack_268;
      uStack_540 = uStack_270;
      uStack_528 = uStack_258;
      uStack_530 = uStack_260;
      uStack_578 = uStack_2a8;
      uStack_580 = uStack_2b0;
      uStack_568 = uStack_298;
      uStack_570 = uStack_2a0;
      FUN_1034b0d68(&uStack_580);
      uStack_408 = uStack_4d8;
      uStack_410 = uStack_4e0;
      uStack_3f8 = uStack_4c8;
      uStack_400 = uStack_4d0;
      uStack_3f0 = uStack_4c0;
      uStack_448 = uStack_518;
      uStack_450 = uStack_520;
      uStack_438 = uStack_508;
      uStack_440 = uStack_510;
      uStack_428 = uStack_4f8;
      uStack_430 = uStack_500;
      uStack_418 = uStack_4e8;
      uStack_420 = uStack_4f0;
      uStack_488 = uStack_558;
      lStack_490 = lStack_560;
      uStack_478 = uStack_548;
      uStack_480 = uStack_550;
      uStack_468 = uStack_538;
      uStack_470 = uStack_540;
      uStack_458 = uStack_528;
      uStack_460 = uStack_530;
      uStack_4a8 = uStack_578;
      uStack_4b0 = uStack_580;
      uStack_498 = uStack_568;
      uStack_4a0 = uStack_570;
      func_0x0001034b0d74(&uStack_4b0);
      uStack_338 = *(undefined8 *)(param_1 + 200);
      uStack_340 = *(undefined8 *)(param_1 + 0xc0);
      uStack_328 = *(undefined8 *)(param_1 + 0xd8);
      uStack_330 = *(undefined8 *)(param_1 + 0xd0);
      uStack_320 = *(undefined1 *)(param_1 + 0xe0);
      uStack_378 = *(undefined8 *)(param_1 + 0x88);
      uStack_380 = *(undefined8 *)(param_1 + 0x80);
      uStack_368 = *(undefined8 *)(param_1 + 0x98);
      uStack_370 = *(undefined8 *)(param_1 + 0x90);
      uStack_358 = *(undefined8 *)(param_1 + 0xa8);
      uStack_360 = *(undefined8 *)(param_1 + 0xa0);
      uStack_348 = *(undefined8 *)(param_1 + 0xb8);
      uStack_350 = *(undefined8 *)(param_1 + 0xb0);
      uStack_3b8 = *(undefined8 *)(param_1 + 0x48);
      lStack_3c0 = *(undefined8 *)(param_1 + 0x40);
      uStack_3a8 = *(undefined8 *)(param_1 + 0x58);
      uStack_3b0 = *(undefined8 *)(param_1 + 0x50);
      uStack_398 = *(undefined8 *)(param_1 + 0x68);
      uStack_3a0 = *(undefined8 *)(param_1 + 0x60);
      uStack_388 = *(undefined8 *)(param_1 + 0x78);
      uStack_390 = *(undefined8 *)(param_1 + 0x70);
      uStack_3d8 = *(undefined8 *)(param_1 + 0x28);
      uStack_3e0 = *(undefined8 *)(param_1 + 0x20);
      uStack_3c8 = *(undefined8 *)(param_1 + 0x38);
      uStack_3d0 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 200) = uStack_408;
      *(undefined8 *)(param_1 + 0xc0) = uStack_410;
      *(undefined8 *)(param_1 + 0xd8) = uStack_3f8;
      *(undefined8 *)(param_1 + 0xd0) = uStack_400;
      *(undefined1 *)(param_1 + 0xe0) = uStack_3f0;
      *(undefined8 *)(param_1 + 0x88) = uStack_448;
      *(undefined8 *)(param_1 + 0x80) = uStack_450;
      *(undefined8 *)(param_1 + 0x98) = uStack_438;
      *(undefined8 *)(param_1 + 0x90) = uStack_440;
      *(undefined8 *)(param_1 + 0xa8) = uStack_428;
      *(undefined8 *)(param_1 + 0xa0) = uStack_430;
      *(undefined8 *)(param_1 + 0xb8) = uStack_418;
      *(undefined8 *)(param_1 + 0xb0) = uStack_420;
      *(undefined8 *)(param_1 + 0x48) = uStack_488;
      *(long *)(param_1 + 0x40) = lStack_490;
      *(undefined8 *)(param_1 + 0x58) = uStack_478;
      *(undefined8 *)(param_1 + 0x50) = uStack_480;
      *(undefined8 *)(param_1 + 0x68) = uStack_468;
      *(undefined8 *)(param_1 + 0x60) = uStack_470;
      *(undefined8 *)(param_1 + 0x78) = uStack_458;
      *(undefined8 *)(param_1 + 0x70) = uStack_460;
      *(undefined8 *)(param_1 + 0x28) = uStack_4a8;
      *(undefined8 *)(param_1 + 0x20) = uStack_4b0;
      *(undefined8 *)(param_1 + 0x38) = uStack_498;
      *(undefined8 *)(param_1 + 0x30) = uStack_4a0;
      uVar4 = 0x112f73130;
      puVar5 = &UNK_10dbce400;
      puVar2 = &uStack_3e0;
      goto LAB_10354dcfc;
    }
  }
  uVar4 = 0x112f74d48;
  puVar5 = &UNK_10dbd0de0;
  puVar2 = &uStack_250;
LAB_10354dcfc:
  func_0x000103559bf0(puVar2,uVar4,puVar5);
  return;
}



/* Entry: 10354dec0; end: 10354e2bb;  */

/* WARNING: Removing unreachable block (ram,0x00010354e014) */

void FUN_10354dec0(undefined8 param_1,undefined8 param_2,long param_3)

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
  long lStack_210;
  undefined1 uStack_208;
  long lStack_200;
  long lStack_1f8;
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
  undefined1 uStack_140;
  long lStack_130;
  long lStack_128;
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
  undefined1 uStack_70;
  
  FUN_10354e2bc();
  if (unaff_x21 == 0) {
    FUN_10354e344();
    lVar6 = *unaff_x20;
    lVar1 = unaff_x20[1];
    lVar3 = lVar6;
    func_0x00010355a214(lVar6,(char)lVar1);
    lVar4 = 0;
    func_0x00010355a214(0,1);
    if (lVar3 != lVar4) {
      pcVar7 = *(code **)(param_3 + 0x80);
      lStack_210 = lVar6;
      uStack_208 = (char)lVar1;
      func_0x000103502754();
      (*pcVar7)(&lStack_210,3,&UNK_110664e28,lVar4,param_2,param_3);
    }
    lVar6 = unaff_x20[2];
    lVar1 = unaff_x20[3];
    lVar3 = lVar6;
    func_0x000103559d2c(lVar6,(char)lVar1);
    lVar4 = 0;
    func_0x000103559d2c(0,1);
    if (lVar3 != lVar4) {
      pcVar7 = *(code **)(param_3 + 0x80);
      lStack_210 = lVar6;
      uStack_208 = (char)lVar1;
      func_0x000101568cc4();
      (*pcVar7)(&lStack_210,4,&UNK_110664c98,lVar4,param_2,param_3);
    }
    lStack_158 = unaff_x20[0x19];
    lStack_160 = unaff_x20[0x18];
    lStack_148 = unaff_x20[0x1b];
    lStack_150 = unaff_x20[0x1a];
    uStack_140 = (undefined1)unaff_x20[0x1c];
    lStack_198 = unaff_x20[0x11];
    lStack_1a0 = unaff_x20[0x10];
    lStack_188 = unaff_x20[0x13];
    lStack_190 = unaff_x20[0x12];
    lStack_178 = unaff_x20[0x15];
    lStack_180 = unaff_x20[0x14];
    lStack_168 = unaff_x20[0x17];
    lStack_170 = unaff_x20[0x16];
    lStack_1d8 = unaff_x20[9];
    lStack_1e0 = unaff_x20[8];
    lStack_1c8 = unaff_x20[0xb];
    lStack_1d0 = unaff_x20[10];
    lStack_1b8 = unaff_x20[0xd];
    lStack_1c0 = unaff_x20[0xc];
    lStack_1a8 = unaff_x20[0xf];
    lStack_1b0 = unaff_x20[0xe];
    lStack_1f8 = unaff_x20[5];
    lStack_200 = unaff_x20[4];
    lStack_1e8 = unaff_x20[7];
    lStack_1f0 = unaff_x20[6];
    iVar2 = (int)&lStack_200;
    FUN_103554bd8();
    if (iVar2 != 1) {
      lStack_88 = lStack_158;
      lStack_90 = lStack_160;
      lStack_78 = lStack_148;
      lStack_80 = lStack_150;
      uStack_70 = uStack_140;
      lStack_c8 = lStack_198;
      lStack_d0 = lStack_1a0;
      lStack_b8 = lStack_188;
      lStack_c0 = lStack_190;
      lStack_a8 = lStack_178;
      lStack_b0 = lStack_180;
      lStack_98 = lStack_168;
      lStack_a0 = lStack_170;
      lStack_108 = lStack_1d8;
      lStack_110 = lStack_1e0;
      lStack_f8 = lStack_1c8;
      lStack_100 = lStack_1d0;
      lStack_e8 = lStack_1b8;
      lStack_f0 = lStack_1c0;
      lStack_d8 = lStack_1a8;
      lStack_e0 = lStack_1b0;
      lStack_128 = lStack_1f8;
      lStack_130 = lStack_200;
      lStack_118 = lStack_1e8;
      lStack_120 = lStack_1f0;
      plVar5 = &lStack_130;
      func_0x000103554bec();
                    /* WARNING: Could not recover jumptable at 0x00010354e0d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10dbd9d51)[(ulong)plVar5 & 0xffffffff] * 4 + 0x10354e0dc))();
      return;
    }
    func_0x000100076224(param_1,unaff_x20[0x1d],unaff_x20[0x1e],param_2,param_3);
  }
  return;
}



/* Entry: 10354e2bc; end: 10354e343;  */

void FUN_10354e2bc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x108);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x100);
    uStack_60 = *(undefined8 *)(param_1 + 0xf8);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar1)(&uStack_60,1,&UNK_110790b00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10354e344; end: 10354e3cb;  */

void FUN_10354e344(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x120);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x118);
    uStack_60 = *(undefined8 *)(param_1 + 0x110);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar1)(&uStack_60,2,&UNK_110790b00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10354e3cc; end: 10354e4df;  */

void FUN_10354e3cc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
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
  undefined1 uStack_120;
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
  undefined1 uStack_50;
  
  uStack_138 = *(undefined8 *)(param_1 + 200);
  uStack_140 = *(undefined8 *)(param_1 + 0xc0);
  uStack_128 = *(undefined8 *)(param_1 + 0xd8);
  uStack_130 = *(undefined8 *)(param_1 + 0xd0);
  uStack_120 = *(undefined1 *)(param_1 + 0xe0);
  uStack_178 = *(undefined8 *)(param_1 + 0x88);
  uStack_180 = *(undefined8 *)(param_1 + 0x80);
  uStack_168 = *(undefined8 *)(param_1 + 0x98);
  uStack_170 = *(undefined8 *)(param_1 + 0x90);
  uStack_158 = *(undefined8 *)(param_1 + 0xa8);
  uStack_160 = *(undefined8 *)(param_1 + 0xa0);
  uStack_148 = *(undefined8 *)(param_1 + 0xb8);
  uStack_150 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x48);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x40);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x58);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x50);
  uStack_198 = *(undefined8 *)(param_1 + 0x68);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x60);
  uStack_188 = *(undefined8 *)(param_1 + 0x78);
  uStack_190 = *(undefined8 *)(param_1 + 0x70);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x28);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x20);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x38);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x30);
  iVar1 = (int)&uStack_1e0;
  FUN_103554bd8();
  if (iVar1 != 1) {
    uStack_68 = uStack_138;
    uStack_70 = uStack_140;
    uStack_58 = uStack_128;
    uStack_60 = uStack_130;
    uStack_50 = uStack_120;
    uStack_a8 = uStack_178;
    uStack_b0 = uStack_180;
    uStack_98 = uStack_168;
    uStack_a0 = uStack_170;
    uStack_88 = uStack_158;
    uStack_90 = uStack_160;
    uStack_78 = uStack_148;
    uStack_80 = uStack_150;
    uStack_e8 = uStack_1b8;
    uStack_f0 = uStack_1c0;
    uStack_d8 = uStack_1a8;
    uStack_e0 = uStack_1b0;
    uStack_c8 = uStack_198;
    uStack_d0 = uStack_1a0;
    uStack_b8 = uStack_188;
    uStack_c0 = uStack_190;
    uStack_108 = uStack_1d8;
    uStack_110 = uStack_1e0;
    uStack_f8 = uStack_1c8;
    uStack_100 = uStack_1d0;
    iVar1 = (int)&uStack_110;
    func_0x000103554bec();
    if (iVar1 == 0) {
      puVar2 = &uStack_110;
      func_0x000103554bf4();
      uStack_208 = puVar2[1];
      uStack_210 = *puVar2;
      uStack_1f8 = puVar2[3];
      uStack_200 = puVar2[2];
      uStack_1f0 = puVar2[4];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103502794();
      (*pcVar3)(&uStack_210,5,&UNK_110669320,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10354e4e0);
  (*pcVar3)();
}



/* Entry: 10354e4e0; end: 10354e5f7;  */

void FUN_10354e4e0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
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
  undefined1 uStack_120;
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
  undefined1 uStack_50;
  
  uStack_138 = *(undefined8 *)(param_1 + 200);
  uStack_140 = *(undefined8 *)(param_1 + 0xc0);
  uStack_128 = *(undefined8 *)(param_1 + 0xd8);
  uStack_130 = *(undefined8 *)(param_1 + 0xd0);
  uStack_120 = *(undefined1 *)(param_1 + 0xe0);
  uStack_178 = *(undefined8 *)(param_1 + 0x88);
  uStack_180 = *(undefined8 *)(param_1 + 0x80);
  uStack_168 = *(undefined8 *)(param_1 + 0x98);
  uStack_170 = *(undefined8 *)(param_1 + 0x90);
  uStack_158 = *(undefined8 *)(param_1 + 0xa8);
  uStack_160 = *(undefined8 *)(param_1 + 0xa0);
  uStack_148 = *(undefined8 *)(param_1 + 0xb8);
  uStack_150 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x48);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x40);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x58);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x50);
  uStack_198 = *(undefined8 *)(param_1 + 0x68);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x60);
  uStack_188 = *(undefined8 *)(param_1 + 0x78);
  uStack_190 = *(undefined8 *)(param_1 + 0x70);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x28);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x20);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x38);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x30);
  iVar1 = (int)&uStack_1e0;
  FUN_103554bd8();
  if (iVar1 != 1) {
    uStack_68 = uStack_138;
    uStack_70 = uStack_140;
    uStack_58 = uStack_128;
    uStack_60 = uStack_130;
    uStack_50 = uStack_120;
    uStack_a8 = uStack_178;
    uStack_b0 = uStack_180;
    uStack_98 = uStack_168;
    uStack_a0 = uStack_170;
    uStack_88 = uStack_158;
    uStack_90 = uStack_160;
    uStack_78 = uStack_148;
    uStack_80 = uStack_150;
    uStack_e8 = uStack_1b8;
    uStack_f0 = uStack_1c0;
    uStack_d8 = uStack_1a8;
    uStack_e0 = uStack_1b0;
    uStack_c8 = uStack_198;
    uStack_d0 = uStack_1a0;
    uStack_b8 = uStack_188;
    uStack_c0 = uStack_190;
    uStack_108 = uStack_1d8;
    uStack_110 = uStack_1e0;
    uStack_f8 = uStack_1c8;
    uStack_100 = uStack_1d0;
    iVar1 = (int)&uStack_110;
    func_0x000103554bec();
    if (iVar1 == 1) {
      puVar2 = &uStack_110;
      FUN_103554c2c();
      uStack_1f8 = puVar2[1];
      uStack_200 = *puVar2;
      uStack_1f0 = puVar2[2];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x0001035027d4();
      (*pcVar3)(&uStack_200,6,&UNK_110667f00,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10354e5f8);
  (*pcVar3)();
}



/* Entry: 10354e5f8; end: 10354e70f;  */

void FUN_10354e5f8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
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
  undefined1 uStack_120;
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
  undefined1 uStack_50;
  
  uStack_138 = *(undefined8 *)(param_1 + 200);
  uStack_140 = *(undefined8 *)(param_1 + 0xc0);
  uStack_128 = *(undefined8 *)(param_1 + 0xd8);
  uStack_130 = *(undefined8 *)(param_1 + 0xd0);
  uStack_120 = *(undefined1 *)(param_1 + 0xe0);
  uStack_178 = *(undefined8 *)(param_1 + 0x88);
  uStack_180 = *(undefined8 *)(param_1 + 0x80);
  uStack_168 = *(undefined8 *)(param_1 + 0x98);
  uStack_170 = *(undefined8 *)(param_1 + 0x90);
  uStack_158 = *(undefined8 *)(param_1 + 0xa8);
  uStack_160 = *(undefined8 *)(param_1 + 0xa0);
  uStack_148 = *(undefined8 *)(param_1 + 0xb8);
  uStack_150 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x48);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x40);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x58);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x50);
  uStack_198 = *(undefined8 *)(param_1 + 0x68);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x60);
  uStack_188 = *(undefined8 *)(param_1 + 0x78);
  uStack_190 = *(undefined8 *)(param_1 + 0x70);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x28);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x20);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x38);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x30);
  iVar1 = (int)&uStack_1e0;
  FUN_103554bd8();
  if (iVar1 != 1) {
    uStack_68 = uStack_138;
    uStack_70 = uStack_140;
    uStack_58 = uStack_128;
    uStack_60 = uStack_130;
    uStack_50 = uStack_120;
    uStack_a8 = uStack_178;
    uStack_b0 = uStack_180;
    uStack_98 = uStack_168;
    uStack_a0 = uStack_170;
    uStack_88 = uStack_158;
    uStack_90 = uStack_160;
    uStack_78 = uStack_148;
    uStack_80 = uStack_150;
    uStack_e8 = uStack_1b8;
    uStack_f0 = uStack_1c0;
    uStack_d8 = uStack_1a8;
    uStack_e0 = uStack_1b0;
    uStack_c8 = uStack_198;
    uStack_d0 = uStack_1a0;
    uStack_b8 = uStack_188;
    uStack_c0 = uStack_190;
    uStack_108 = uStack_1d8;
    uStack_110 = uStack_1e0;
    uStack_f8 = uStack_1c8;
    uStack_100 = uStack_1d0;
    iVar1 = (int)&uStack_110;
    func_0x000103554bec();
    if (iVar1 == 2) {
      puVar2 = &uStack_110;
      FUN_103554c2c();
      uStack_218 = puVar2[1];
      uStack_220 = *puVar2;
      uStack_208 = puVar2[3];
      uStack_210 = puVar2[2];
      uStack_1f8 = puVar2[5];
      uStack_200 = puVar2[4];
      uStack_1e8 = puVar2[7];
      uStack_1f0 = puVar2[6];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103502814();
      (*pcVar3)(&uStack_220,7,&UNK_1106688e8,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10354e710);
  (*pcVar3)();
}



/* Entry: 10354e710; end: 10354e827;  */

void FUN_10354e710(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
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
  undefined1 uStack_120;
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
  undefined1 uStack_50;
  
  uStack_138 = *(undefined8 *)(param_1 + 200);
  uStack_140 = *(undefined8 *)(param_1 + 0xc0);
  uStack_128 = *(undefined8 *)(param_1 + 0xd8);
  uStack_130 = *(undefined8 *)(param_1 + 0xd0);
  uStack_120 = *(undefined1 *)(param_1 + 0xe0);
  uStack_178 = *(undefined8 *)(param_1 + 0x88);
  uStack_180 = *(undefined8 *)(param_1 + 0x80);
  uStack_168 = *(undefined8 *)(param_1 + 0x98);
  uStack_170 = *(undefined8 *)(param_1 + 0x90);
  uStack_158 = *(undefined8 *)(param_1 + 0xa8);
  uStack_160 = *(undefined8 *)(param_1 + 0xa0);
  uStack_148 = *(undefined8 *)(param_1 + 0xb8);
  uStack_150 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x48);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x40);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x58);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x50);
  uStack_198 = *(undefined8 *)(param_1 + 0x68);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x60);
  uStack_188 = *(undefined8 *)(param_1 + 0x78);
  uStack_190 = *(undefined8 *)(param_1 + 0x70);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x28);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x20);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x38);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x30);
  iVar1 = (int)&uStack_1e0;
  FUN_103554bd8();
  if (iVar1 != 1) {
    uStack_68 = uStack_138;
    uStack_70 = uStack_140;
    uStack_58 = uStack_128;
    uStack_60 = uStack_130;
    uStack_50 = uStack_120;
    uStack_a8 = uStack_178;
    uStack_b0 = uStack_180;
    uStack_98 = uStack_168;
    uStack_a0 = uStack_170;
    uStack_88 = uStack_158;
    uStack_90 = uStack_160;
    uStack_78 = uStack_148;
    uStack_80 = uStack_150;
    uStack_e8 = uStack_1b8;
    uStack_f0 = uStack_1c0;
    uStack_d8 = uStack_1a8;
    uStack_e0 = uStack_1b0;
    uStack_c8 = uStack_198;
    uStack_d0 = uStack_1a0;
    uStack_b8 = uStack_188;
    uStack_c0 = uStack_190;
    uStack_108 = uStack_1d8;
    uStack_110 = uStack_1e0;
    uStack_f8 = uStack_1c8;
    uStack_100 = uStack_1d0;
    iVar1 = (int)&uStack_110;
    func_0x000103554bec();
    if (iVar1 == 3) {
      puVar2 = &uStack_110;
      func_0x000103554c40();
      uStack_1f8 = puVar2[1];
      uStack_200 = *puVar2;
      uStack_1f0 = puVar2[2];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103502854();
      (*pcVar3)(&uStack_200,8,&UNK_11066a9c0,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10354e828);
  (*pcVar3)();
}



/* Entry: 10354e828; end: 10354e94f;  */

void FUN_10354e828(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
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
  undefined1 uStack_120;
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
  undefined1 uStack_50;
  
  uStack_138 = *(undefined8 *)(param_1 + 200);
  uStack_140 = *(undefined8 *)(param_1 + 0xc0);
  uStack_128 = *(undefined8 *)(param_1 + 0xd8);
  uStack_130 = *(undefined8 *)(param_1 + 0xd0);
  uStack_120 = *(undefined1 *)(param_1 + 0xe0);
  uStack_178 = *(undefined8 *)(param_1 + 0x88);
  uStack_180 = *(undefined8 *)(param_1 + 0x80);
  uStack_168 = *(undefined8 *)(param_1 + 0x98);
  uStack_170 = *(undefined8 *)(param_1 + 0x90);
  uStack_158 = *(undefined8 *)(param_1 + 0xa8);
  uStack_160 = *(undefined8 *)(param_1 + 0xa0);
  uStack_148 = *(undefined8 *)(param_1 + 0xb8);
  uStack_150 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x48);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x40);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x58);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x50);
  uStack_198 = *(undefined8 *)(param_1 + 0x68);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x60);
  uStack_188 = *(undefined8 *)(param_1 + 0x78);
  uStack_190 = *(undefined8 *)(param_1 + 0x70);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x28);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x20);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x38);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x30);
  iVar1 = (int)&uStack_1e0;
  FUN_103554bd8();
  if (iVar1 != 1) {
    uStack_68 = uStack_138;
    uStack_70 = uStack_140;
    uStack_58 = uStack_128;
    uStack_60 = uStack_130;
    uStack_50 = uStack_120;
    uStack_a8 = uStack_178;
    uStack_b0 = uStack_180;
    uStack_98 = uStack_168;
    uStack_a0 = uStack_170;
    uStack_88 = uStack_158;
    uStack_90 = uStack_160;
    uStack_78 = uStack_148;
    uStack_80 = uStack_150;
    uStack_e8 = uStack_1b8;
    uStack_f0 = uStack_1c0;
    uStack_d8 = uStack_1a8;
    uStack_e0 = uStack_1b0;
    uStack_c8 = uStack_198;
    uStack_d0 = uStack_1a0;
    uStack_b8 = uStack_188;
    uStack_c0 = uStack_190;
    uStack_108 = uStack_1d8;
    uStack_110 = uStack_1e0;
    uStack_f8 = uStack_1c8;
    uStack_100 = uStack_1d0;
    iVar1 = (int)&uStack_110;
    func_0x000103554bec();
    if (iVar1 == 4) {
      puVar2 = &uStack_110;
      func_0x000103554c44();
      uStack_248 = puVar2[1];
      uStack_250 = *puVar2;
      uStack_238 = puVar2[3];
      uStack_240 = puVar2[2];
      uStack_228 = puVar2[5];
      uStack_230 = puVar2[4];
      uStack_218 = puVar2[7];
      uStack_220 = puVar2[6];
      uStack_208 = puVar2[9];
      uStack_210 = puVar2[8];
      uStack_1f8 = puVar2[0xb];
      uStack_200 = puVar2[10];
      uStack_1e8 = puVar2[0xd];
      uStack_1f0 = puVar2[0xc];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103502894();
      (*pcVar3)(&uStack_250,9,&UNK_110668730,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10354e950);
  (*pcVar3)();
}



/* Entry: 10354e950; end: 10354ea67;  */

void FUN_10354e950(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
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
  undefined1 uStack_120;
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
  undefined1 uStack_50;
  
  uStack_138 = *(undefined8 *)(param_1 + 200);
  uStack_140 = *(undefined8 *)(param_1 + 0xc0);
  uStack_128 = *(undefined8 *)(param_1 + 0xd8);
  uStack_130 = *(undefined8 *)(param_1 + 0xd0);
  uStack_120 = *(undefined1 *)(param_1 + 0xe0);
  uStack_178 = *(undefined8 *)(param_1 + 0x88);
  uStack_180 = *(undefined8 *)(param_1 + 0x80);
  uStack_168 = *(undefined8 *)(param_1 + 0x98);
  uStack_170 = *(undefined8 *)(param_1 + 0x90);
  uStack_158 = *(undefined8 *)(param_1 + 0xa8);
  uStack_160 = *(undefined8 *)(param_1 + 0xa0);
  uStack_148 = *(undefined8 *)(param_1 + 0xb8);
  uStack_150 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x48);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x40);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x58);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x50);
  uStack_198 = *(undefined8 *)(param_1 + 0x68);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x60);
  uStack_188 = *(undefined8 *)(param_1 + 0x78);
  uStack_190 = *(undefined8 *)(param_1 + 0x70);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x28);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x20);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x38);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x30);
  iVar1 = (int)&uStack_1e0;
  FUN_103554bd8();
  if (iVar1 != 1) {
    uStack_68 = uStack_138;
    uStack_70 = uStack_140;
    uStack_58 = uStack_128;
    uStack_60 = uStack_130;
    uStack_50 = uStack_120;
    uStack_a8 = uStack_178;
    uStack_b0 = uStack_180;
    uStack_98 = uStack_168;
    uStack_a0 = uStack_170;
    uStack_88 = uStack_158;
    uStack_90 = uStack_160;
    uStack_78 = uStack_148;
    uStack_80 = uStack_150;
    uStack_e8 = uStack_1b8;
    uStack_f0 = uStack_1c0;
    uStack_d8 = uStack_1a8;
    uStack_e0 = uStack_1b0;
    uStack_c8 = uStack_198;
    uStack_d0 = uStack_1a0;
    uStack_b8 = uStack_188;
    uStack_c0 = uStack_190;
    uStack_108 = uStack_1d8;
    uStack_110 = uStack_1e0;
    uStack_f8 = uStack_1c8;
    uStack_100 = uStack_1d0;
    iVar1 = (int)&uStack_110;
    func_0x000103554bec();
    if (iVar1 == 5) {
      puVar2 = &uStack_110;
      func_0x000103554c54();
      uStack_1f8 = puVar2[1];
      uStack_200 = *puVar2;
      uStack_1f0 = puVar2[2];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103502994();
      (*pcVar3)(&uStack_200,10,&UNK_110666c90,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10354ea68);
  (*pcVar3)();
}



/* Entry: 10354ea68; end: 10354eb7f;  */

void FUN_10354ea68(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
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
  undefined1 uStack_120;
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
  undefined1 uStack_50;
  
  uStack_138 = *(undefined8 *)(param_1 + 200);
  uStack_140 = *(undefined8 *)(param_1 + 0xc0);
  uStack_128 = *(undefined8 *)(param_1 + 0xd8);
  uStack_130 = *(undefined8 *)(param_1 + 0xd0);
  uStack_120 = *(undefined1 *)(param_1 + 0xe0);
  uStack_178 = *(undefined8 *)(param_1 + 0x88);
  uStack_180 = *(undefined8 *)(param_1 + 0x80);
  uStack_168 = *(undefined8 *)(param_1 + 0x98);
  uStack_170 = *(undefined8 *)(param_1 + 0x90);
  uStack_158 = *(undefined8 *)(param_1 + 0xa8);
  uStack_160 = *(undefined8 *)(param_1 + 0xa0);
  uStack_148 = *(undefined8 *)(param_1 + 0xb8);
  uStack_150 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x48);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x40);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x58);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x50);
  uStack_198 = *(undefined8 *)(param_1 + 0x68);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x60);
  uStack_188 = *(undefined8 *)(param_1 + 0x78);
  uStack_190 = *(undefined8 *)(param_1 + 0x70);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x28);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x20);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x38);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x30);
  iVar1 = (int)&uStack_1e0;
  FUN_103554bd8();
  if (iVar1 != 1) {
    uStack_68 = uStack_138;
    uStack_70 = uStack_140;
    uStack_58 = uStack_128;
    uStack_60 = uStack_130;
    uStack_50 = uStack_120;
    uStack_a8 = uStack_178;
    uStack_b0 = uStack_180;
    uStack_98 = uStack_168;
    uStack_a0 = uStack_170;
    uStack_88 = uStack_158;
    uStack_90 = uStack_160;
    uStack_78 = uStack_148;
    uStack_80 = uStack_150;
    uStack_e8 = uStack_1b8;
    uStack_f0 = uStack_1c0;
    uStack_d8 = uStack_1a8;
    uStack_e0 = uStack_1b0;
    uStack_c8 = uStack_198;
    uStack_d0 = uStack_1a0;
    uStack_b8 = uStack_188;
    uStack_c0 = uStack_190;
    uStack_108 = uStack_1d8;
    uStack_110 = uStack_1e0;
    uStack_f8 = uStack_1c8;
    uStack_100 = uStack_1d0;
    iVar1 = (int)&uStack_110;
    func_0x000103554bec();
    if (iVar1 == 6) {
      puVar2 = &uStack_110;
      func_0x000103554c58();
      uStack_218 = puVar2[1];
      uStack_220 = *puVar2;
      uStack_208 = puVar2[3];
      uStack_210 = puVar2[2];
      uStack_1f8 = puVar2[5];
      uStack_200 = puVar2[4];
      uStack_1e8 = puVar2[7];
      uStack_1f0 = puVar2[6];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103502a54();
      (*pcVar3)(&uStack_220,0xb,&UNK_110668e10,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10354eb80);
  (*pcVar3)();
}



/* Entry: 10354eb80; end: 10354ec97;  */

void FUN_10354eb80(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
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
  undefined1 uStack_120;
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
  undefined1 uStack_50;
  
  uStack_138 = *(undefined8 *)(param_1 + 200);
  uStack_140 = *(undefined8 *)(param_1 + 0xc0);
  uStack_128 = *(undefined8 *)(param_1 + 0xd8);
  uStack_130 = *(undefined8 *)(param_1 + 0xd0);
  uStack_120 = *(undefined1 *)(param_1 + 0xe0);
  uStack_178 = *(undefined8 *)(param_1 + 0x88);
  uStack_180 = *(undefined8 *)(param_1 + 0x80);
  uStack_168 = *(undefined8 *)(param_1 + 0x98);
  uStack_170 = *(undefined8 *)(param_1 + 0x90);
  uStack_158 = *(undefined8 *)(param_1 + 0xa8);
  uStack_160 = *(undefined8 *)(param_1 + 0xa0);
  uStack_148 = *(undefined8 *)(param_1 + 0xb8);
  uStack_150 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x48);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x40);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x58);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x50);
  uStack_198 = *(undefined8 *)(param_1 + 0x68);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x60);
  uStack_188 = *(undefined8 *)(param_1 + 0x78);
  uStack_190 = *(undefined8 *)(param_1 + 0x70);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x28);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x20);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x38);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x30);
  iVar1 = (int)&uStack_1e0;
  FUN_103554bd8();
  if (iVar1 != 1) {
    uStack_68 = uStack_138;
    uStack_70 = uStack_140;
    uStack_58 = uStack_128;
    uStack_60 = uStack_130;
    uStack_50 = uStack_120;
    uStack_a8 = uStack_178;
    uStack_b0 = uStack_180;
    uStack_98 = uStack_168;
    uStack_a0 = uStack_170;
    uStack_88 = uStack_158;
    uStack_90 = uStack_160;
    uStack_78 = uStack_148;
    uStack_80 = uStack_150;
    uStack_e8 = uStack_1b8;
    uStack_f0 = uStack_1c0;
    uStack_d8 = uStack_1a8;
    uStack_e0 = uStack_1b0;
    uStack_c8 = uStack_198;
    uStack_d0 = uStack_1a0;
    uStack_b8 = uStack_188;
    uStack_c0 = uStack_190;
    uStack_108 = uStack_1d8;
    uStack_110 = uStack_1e0;
    uStack_f8 = uStack_1c8;
    uStack_100 = uStack_1d0;
    iVar1 = (int)&uStack_110;
    func_0x000103554bec();
    if (iVar1 == 7) {
      puVar2 = &uStack_110;
      func_0x000103554c68();
      uStack_208 = puVar2[1];
      uStack_210 = *puVar2;
      uStack_1f8 = puVar2[3];
      uStack_200 = puVar2[2];
      uStack_1e8 = puVar2[5];
      uStack_1f0 = puVar2[4];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103502a94();
      (*pcVar3)(&uStack_210,0xc,&UNK_1106651a0,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10354ec98);
  (*pcVar3)();
}



/* Entry: 10354ec98; end: 10354edaf;  */

void FUN_10354ec98(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
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
  undefined1 uStack_120;
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
  undefined1 uStack_50;
  
  uStack_138 = *(undefined8 *)(param_1 + 200);
  uStack_140 = *(undefined8 *)(param_1 + 0xc0);
  uStack_128 = *(undefined8 *)(param_1 + 0xd8);
  uStack_130 = *(undefined8 *)(param_1 + 0xd0);
  uStack_120 = *(undefined1 *)(param_1 + 0xe0);
  uStack_178 = *(undefined8 *)(param_1 + 0x88);
  uStack_180 = *(undefined8 *)(param_1 + 0x80);
  uStack_168 = *(undefined8 *)(param_1 + 0x98);
  uStack_170 = *(undefined8 *)(param_1 + 0x90);
  uStack_158 = *(undefined8 *)(param_1 + 0xa8);
  uStack_160 = *(undefined8 *)(param_1 + 0xa0);
  uStack_148 = *(undefined8 *)(param_1 + 0xb8);
  uStack_150 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x48);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x40);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x58);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x50);
  uStack_198 = *(undefined8 *)(param_1 + 0x68);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x60);
  uStack_188 = *(undefined8 *)(param_1 + 0x78);
  uStack_190 = *(undefined8 *)(param_1 + 0x70);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x28);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x20);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x38);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x30);
  iVar1 = (int)&uStack_1e0;
  FUN_103554bd8();
  if (iVar1 != 1) {
    uStack_68 = uStack_138;
    uStack_70 = uStack_140;
    uStack_58 = uStack_128;
    uStack_60 = uStack_130;
    uStack_50 = uStack_120;
    uStack_a8 = uStack_178;
    uStack_b0 = uStack_180;
    uStack_98 = uStack_168;
    uStack_a0 = uStack_170;
    uStack_88 = uStack_158;
    uStack_90 = uStack_160;
    uStack_78 = uStack_148;
    uStack_80 = uStack_150;
    uStack_e8 = uStack_1b8;
    uStack_f0 = uStack_1c0;
    uStack_d8 = uStack_1a8;
    uStack_e0 = uStack_1b0;
    uStack_c8 = uStack_198;
    uStack_d0 = uStack_1a0;
    uStack_b8 = uStack_188;
    uStack_c0 = uStack_190;
    uStack_108 = uStack_1d8;
    uStack_110 = uStack_1e0;
    uStack_f8 = uStack_1c8;
    uStack_100 = uStack_1d0;
    iVar1 = (int)&uStack_110;
    func_0x000103554bec();
    if (iVar1 == 8) {
      puVar2 = &uStack_110;
      func_0x000103554c6c();
      uStack_218 = puVar2[1];
      uStack_220 = *puVar2;
      uStack_208 = puVar2[3];
      uStack_210 = puVar2[2];
      uStack_1f8 = puVar2[5];
      uStack_200 = puVar2[4];
      uStack_1e8 = puVar2[7];
      uStack_1f0 = puVar2[6];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103502b94();
      (*pcVar3)(&uStack_220,0xd,&UNK_110664ff0,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10354edb0);
  (*pcVar3)();
}



/* Entry: 10354edb0; end: 10354eec7;  */

void FUN_10354edb0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
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
  undefined1 uStack_120;
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
  undefined1 uStack_50;
  
  uStack_138 = *(undefined8 *)(param_1 + 200);
  uStack_140 = *(undefined8 *)(param_1 + 0xc0);
  uStack_128 = *(undefined8 *)(param_1 + 0xd8);
  uStack_130 = *(undefined8 *)(param_1 + 0xd0);
  uStack_120 = *(undefined1 *)(param_1 + 0xe0);
  uStack_178 = *(undefined8 *)(param_1 + 0x88);
  uStack_180 = *(undefined8 *)(param_1 + 0x80);
  uStack_168 = *(undefined8 *)(param_1 + 0x98);
  uStack_170 = *(undefined8 *)(param_1 + 0x90);
  uStack_158 = *(undefined8 *)(param_1 + 0xa8);
  uStack_160 = *(undefined8 *)(param_1 + 0xa0);
  uStack_148 = *(undefined8 *)(param_1 + 0xb8);
  uStack_150 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x48);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x40);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x58);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x50);
  uStack_198 = *(undefined8 *)(param_1 + 0x68);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x60);
  uStack_188 = *(undefined8 *)(param_1 + 0x78);
  uStack_190 = *(undefined8 *)(param_1 + 0x70);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x28);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x20);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x38);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x30);
  iVar1 = (int)&uStack_1e0;
  FUN_103554bd8();
  if (iVar1 != 1) {
    uStack_68 = uStack_138;
    uStack_70 = uStack_140;
    uStack_58 = uStack_128;
    uStack_60 = uStack_130;
    uStack_50 = uStack_120;
    uStack_a8 = uStack_178;
    uStack_b0 = uStack_180;
    uStack_98 = uStack_168;
    uStack_a0 = uStack_170;
    uStack_88 = uStack_158;
    uStack_90 = uStack_160;
    uStack_78 = uStack_148;
    uStack_80 = uStack_150;
    uStack_e8 = uStack_1b8;
    uStack_f0 = uStack_1c0;
    uStack_d8 = uStack_1a8;
    uStack_e0 = uStack_1b0;
    uStack_c8 = uStack_198;
    uStack_d0 = uStack_1a0;
    uStack_b8 = uStack_188;
    uStack_c0 = uStack_190;
    uStack_108 = uStack_1d8;
    uStack_110 = uStack_1e0;
    uStack_f8 = uStack_1c8;
    uStack_100 = uStack_1d0;
    iVar1 = (int)&uStack_110;
    func_0x000103554bec();
    if (iVar1 == 9) {
      puVar2 = &uStack_110;
      func_0x000103554c7c();
      uStack_218 = puVar2[1];
      uStack_220 = *puVar2;
      uStack_208 = puVar2[3];
      uStack_210 = puVar2[2];
      uStack_1f8 = puVar2[5];
      uStack_200 = puVar2[4];
      uStack_1e8 = puVar2[7];
      uStack_1f0 = puVar2[6];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103502bd4();
      (*pcVar3)(&uStack_220,0xe,&UNK_110666ae0,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10354eec8);
  (*pcVar3)();
}



/* Entry: 10354eec8; end: 10354efff;  */

void FUN_10354eec8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
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
  undefined1 uStack_120;
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
  undefined1 uStack_50;
  
  uStack_138 = *(undefined8 *)(param_1 + 200);
  uStack_140 = *(undefined8 *)(param_1 + 0xc0);
  uStack_128 = *(undefined8 *)(param_1 + 0xd8);
  uStack_130 = *(undefined8 *)(param_1 + 0xd0);
  uStack_120 = *(undefined1 *)(param_1 + 0xe0);
  uStack_178 = *(undefined8 *)(param_1 + 0x88);
  uStack_180 = *(undefined8 *)(param_1 + 0x80);
  uStack_168 = *(undefined8 *)(param_1 + 0x98);
  uStack_170 = *(undefined8 *)(param_1 + 0x90);
  uStack_158 = *(undefined8 *)(param_1 + 0xa8);
  uStack_160 = *(undefined8 *)(param_1 + 0xa0);
  uStack_148 = *(undefined8 *)(param_1 + 0xb8);
  uStack_150 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x48);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x40);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x58);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x50);
  uStack_198 = *(undefined8 *)(param_1 + 0x68);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x60);
  uStack_188 = *(undefined8 *)(param_1 + 0x78);
  uStack_190 = *(undefined8 *)(param_1 + 0x70);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x28);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x20);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x38);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x30);
  iVar1 = (int)&uStack_1e0;
  FUN_103554bd8();
  if (iVar1 != 1) {
    uStack_68 = uStack_138;
    uStack_70 = uStack_140;
    uStack_58 = uStack_128;
    uStack_60 = uStack_130;
    uStack_50 = uStack_120;
    uStack_a8 = uStack_178;
    uStack_b0 = uStack_180;
    uStack_98 = uStack_168;
    uStack_a0 = uStack_170;
    uStack_88 = uStack_158;
    uStack_90 = uStack_160;
    uStack_78 = uStack_148;
    uStack_80 = uStack_150;
    uStack_e8 = uStack_1b8;
    uStack_f0 = uStack_1c0;
    uStack_d8 = uStack_1a8;
    uStack_e0 = uStack_1b0;
    uStack_c8 = uStack_198;
    uStack_d0 = uStack_1a0;
    uStack_b8 = uStack_188;
    uStack_c0 = uStack_190;
    uStack_108 = uStack_1d8;
    uStack_110 = uStack_1e0;
    uStack_f8 = uStack_1c8;
    uStack_100 = uStack_1d0;
    iVar1 = (int)&uStack_110;
    func_0x000103554bec();
    if (iVar1 == 10) {
      puVar2 = &uStack_110;
      func_0x000103554c8c();
      uStack_298 = puVar2[1];
      uStack_2a0 = *puVar2;
      uStack_288 = puVar2[3];
      uStack_290 = puVar2[2];
      uStack_278 = puVar2[5];
      uStack_280 = puVar2[4];
      uStack_268 = puVar2[7];
      uStack_270 = puVar2[6];
      uStack_258 = puVar2[9];
      uStack_260 = puVar2[8];
      uStack_248 = puVar2[0xb];
      uStack_250 = puVar2[10];
      uStack_238 = puVar2[0xd];
      uStack_240 = puVar2[0xc];
      uStack_228 = puVar2[0xf];
      uStack_230 = puVar2[0xe];
      uStack_218 = puVar2[0x11];
      uStack_220 = puVar2[0x10];
      uStack_208 = puVar2[0x13];
      uStack_210 = puVar2[0x12];
      uStack_1f8 = puVar2[0x15];
      uStack_200 = puVar2[0x14];
      uStack_1e8 = puVar2[0x17];
      uStack_1f0 = puVar2[0x16];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103502c14();
      (*pcVar3)(&uStack_2a0,0xf,&UNK_110668c48,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10354f000);
  (*pcVar3)();
}



/* Entry: 10354f000; end: 10354f11f;  */

void FUN_10354f000(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
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
  undefined1 uStack_120;
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
  undefined1 uStack_50;
  
  uStack_138 = *(undefined8 *)(param_1 + 200);
  uStack_140 = *(undefined8 *)(param_1 + 0xc0);
  uStack_128 = *(undefined8 *)(param_1 + 0xd8);
  uStack_130 = *(undefined8 *)(param_1 + 0xd0);
  uStack_120 = *(undefined1 *)(param_1 + 0xe0);
  uStack_178 = *(undefined8 *)(param_1 + 0x88);
  uStack_180 = *(undefined8 *)(param_1 + 0x80);
  uStack_168 = *(undefined8 *)(param_1 + 0x98);
  uStack_170 = *(undefined8 *)(param_1 + 0x90);
  uStack_158 = *(undefined8 *)(param_1 + 0xa8);
  uStack_160 = *(undefined8 *)(param_1 + 0xa0);
  uStack_148 = *(undefined8 *)(param_1 + 0xb8);
  uStack_150 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x48);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x40);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x58);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x50);
  uStack_198 = *(undefined8 *)(param_1 + 0x68);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x60);
  uStack_188 = *(undefined8 *)(param_1 + 0x78);
  uStack_190 = *(undefined8 *)(param_1 + 0x70);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x28);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x20);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x38);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x30);
  iVar1 = (int)&uStack_1e0;
  FUN_103554bd8();
  if (iVar1 != 1) {
    uStack_68 = uStack_138;
    uStack_70 = uStack_140;
    uStack_58 = uStack_128;
    uStack_60 = uStack_130;
    uStack_50 = uStack_120;
    uStack_a8 = uStack_178;
    uStack_b0 = uStack_180;
    uStack_98 = uStack_168;
    uStack_a0 = uStack_170;
    uStack_88 = uStack_158;
    uStack_90 = uStack_160;
    uStack_78 = uStack_148;
    uStack_80 = uStack_150;
    uStack_e8 = uStack_1b8;
    uStack_f0 = uStack_1c0;
    uStack_d8 = uStack_1a8;
    uStack_e0 = uStack_1b0;
    uStack_c8 = uStack_198;
    uStack_d0 = uStack_1a0;
    uStack_b8 = uStack_188;
    uStack_c0 = uStack_190;
    uStack_108 = uStack_1d8;
    uStack_110 = uStack_1e0;
    uStack_f8 = uStack_1c8;
    uStack_100 = uStack_1d0;
    iVar1 = (int)&uStack_110;
    func_0x000103554bec();
    if (iVar1 == 0xb) {
      puVar2 = &uStack_110;
      func_0x000103554c9c();
      uStack_238 = puVar2[1];
      uStack_240 = *puVar2;
      uStack_228 = puVar2[3];
      uStack_230 = puVar2[2];
      uStack_218 = puVar2[5];
      uStack_220 = puVar2[4];
      uStack_208 = puVar2[7];
      uStack_210 = puVar2[6];
      uStack_1f8 = puVar2[9];
      uStack_200 = puVar2[8];
      uStack_1e8 = puVar2[0xb];
      uStack_1f0 = puVar2[10];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103502c94();
      (*pcVar3)(&uStack_240,0x10,&UNK_110668a98,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10354f120);
  (*pcVar3)();
}



/* Entry: 10354f120; end: 10354f22b;  */

void FUN_10354f120(undefined8 *param_1)

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
  
  FUN_1034b0c88(auStack_f8);
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
  *(ulong *)((long)param_1 + 0xb1) = CONCAT17(uStack_121,uStack_128);
  *(ulong *)((long)param_1 + 0xa9) = CONCAT17(uStack_129,uStack_130);
  *(ulong *)((long)param_1 + 0xc1) = CONCAT17(uStack_111,uStack_118);
  *(ulong *)((long)param_1 + 0xb9) = CONCAT17(uStack_119,uStack_120);
  *(ulong *)((long)param_1 + 0xd1) = CONCAT17(uStack_101,uStack_108);
  *(ulong *)((long)param_1 + 0xc9) = CONCAT17(uStack_109,uStack_110);
  *(ulong *)((long)param_1 + 0x71) = CONCAT17(uStack_161,uStack_168);
  *(ulong *)((long)param_1 + 0x69) = CONCAT17(uStack_169,uStack_170);
  *(ulong *)((long)param_1 + 0x81) = CONCAT17(uStack_151,uStack_158);
  *(ulong *)((long)param_1 + 0x79) = CONCAT17(uStack_159,uStack_160);
  *(ulong *)((long)param_1 + 0x91) = CONCAT17(uStack_141,uStack_148);
  *(ulong *)((long)param_1 + 0x89) = CONCAT17(uStack_149,uStack_150);
  *(ulong *)((long)param_1 + 0xa1) = CONCAT17(uStack_131,uStack_138);
  *(ulong *)((long)param_1 + 0x99) = CONCAT17(uStack_139,uStack_140);
  *(ulong *)((long)param_1 + 0x31) = CONCAT17(uStack_1a1,uStack_1a8);
  *(ulong *)((long)param_1 + 0x29) = CONCAT17(uStack_1a9,uStack_1b0);
  *(ulong *)((long)param_1 + 0x41) = CONCAT17(uStack_191,uStack_198);
  *(ulong *)((long)param_1 + 0x39) = CONCAT17(uStack_199,uStack_1a0);
  *(ulong *)((long)param_1 + 0x51) = CONCAT17(uStack_181,uStack_188);
  *(ulong *)((long)param_1 + 0x49) = CONCAT17(uStack_189,uStack_190);
  *(ulong *)((long)param_1 + 0x61) = CONCAT17(uStack_171,uStack_178);
  *(ulong *)((long)param_1 + 0x59) = CONCAT17(uStack_179,uStack_180);
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  *(ulong *)((long)param_1 + 0xd9) = CONCAT17(uStack_38,uStack_100);
  *(ulong *)((long)param_1 + 0x21) = CONCAT17(uStack_1b1,uStack_1b8);
  *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_1b9,uStack_1c0);
  param_1[0x1e] = 0xc000000000000000;
  param_1[0x1d] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0xf000000000000000;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0xf000000000000000;
  return;
}



/* Entry: 10354f22c; end: 10354f24f;  */

undefined1  [16] FUN_10354f22c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1557b0;
  auVar1._0_8_ = 0xd000000000000034;
  return auVar1;
}



/* Entry: 10354f250; end: 10354f27f;  */

undefined1  [16] FUN_10354f250(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0xe8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0xe8),
                      *(undefined8 *)(unaff_x20 + 0xf0));
  return auVar1;
}



/* Entry: 10354f280; end: 10354f2b3;  */

void FUN_10354f280(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0xe8),*(undefined8 *)(unaff_x20 + 0xf0));
  *(undefined8 *)(unaff_x20 + 0xe8) = param_1;
  *(undefined8 *)(unaff_x20 + 0xf0) = param_2;
  return;
}



/* Entry: 10354f2b4; end: 10354f2c7;  */

undefined1  [16] FUN_10354f2b4(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0xe8;
  auVar1._0_8_ = 0x10354f2c4;
  return auVar1;
}



/* Entry: 10354f2c8; end: 10354f2db;  */

void FUN_10354f2c8(void)

{
  FUN_10354abfc();
  return;
}



/* Entry: 10354f2dc; end: 10354f343;  */

void FUN_10354f2dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_168 [296];
  
  func_0x000107c610b4(auStack_168);
  FUN_10354dec0(param_1,param_2,param_3);
  return;
}



/* Entry: 10354f344; end: 10354f347;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10354f344(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10354f348; end: 10354f37f;  */

uint FUN_10354f348(long param_1,long param_2)

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
  func_0x000103559b44();
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



/* Entry: 10354f380; end: 10354f3cf;  */

uint FUN_10354f380(undefined8 param_1)

{
  uint uVar1;
  undefined1 auStack_270 [296];
  undefined1 auStack_148 [296];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_148,param_1,0x128);
  func_0x000107c610b4(auStack_270);
  FUN_1035554c8(auStack_270,auStack_148);
  return uVar1 & 1;
}



/* Entry: 10354f3d0; end: 10354f46f;  */

/* WARNING: Possible PIC construction at 0x00010354f41c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010354f42c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010354f420) */
/* WARNING: Removing unreachable block (ram,0x00010354f430) */

void FUN_10354f3d0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f77a78 != -1) {
    func_0x000107c61568(0x112f77a78,FUN_10354abb4);
  }
  uVar5 = uRam0000000113808578;
  uVar4 = uRam0000000113808570;
  uVar3 = uRam0000000113808568;
  uVar2 = uRam0000000113808560;
  uVar1 = uRam0000000113808558;
  *param_1 = uRam0000000113808550;
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



/* Entry: 10354f470; end: 10354f4ab;  */

void FUN_10354f470(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f77e18;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f77e18,&UNK_10dbda4b8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10354f4ac; end: 10354f5b7;  */

void FUN_10354f4ac(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_1a0 [72];
  undefined1 auStack_158 [296];
  
  func_0x000107c610b4(auStack_158);
  func_0x000107c6068c(auStack_1a0,0);
  func_0x000107c5fa50(auStack_1a0,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10354f5b8; end: 10354f60b;  */

uint FUN_10354f5b8(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_270 [296];
  undefined1 auStack_148 [296];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_270,param_1,0x128);
  func_0x000107c610b4(auStack_148,param_2,0x128);
  FUN_1035554c8(auStack_270,auStack_148);
  return uVar1 & 1;
}



/* Entry: 10354f60c; end: 10354f653;  */

void FUN_10354f60c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbda560,0x13d,2);
  uRam0000000113808588 = uStack_38;
  uRam0000000113808580 = uStack_40;
  uRam0000000113808598 = uStack_28;
  uRam0000000113808590 = uStack_30;
  uRam00000001138085a8 = uStack_18;
  uRam00000001138085a0 = uStack_20;
  return;
}



/* Entry: 10354f654; end: 10354f8ab;  */

/* WARNING: Removing unreachable block (ram,0x00010354f808) */
/* WARNING: Removing unreachable block (ram,0x00010354f874) */
/* WARNING: Removing unreachable block (ram,0x00010354f8a8) */

void FUN_10354f654(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar5 = *(code **)(param_3 + 0x10);
  uVar1 = param_2;
  lVar2 = param_3;
  (*pcVar5)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x0001015fdfec();
        lVar2 = unaff_x20 + 0x28;
        break;
      case 2:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x0001015fdfec();
        lVar2 = unaff_x20 + 0x40;
        break;
      case 3:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x0001015fdfec();
        lVar2 = unaff_x20 + 0x58;
        break;
      case 4:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        lVar2 = unaff_x20 + 0x70;
        goto code_r0x00010354f7e4;
      case 5:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x0001015fdfec();
        lVar2 = unaff_x20 + 0x88;
        break;
      case 6:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x0001015fdfec();
        lVar2 = unaff_x20 + 0xa0;
        break;
      case 7:
        FUN_10354f8ac();
        goto LAB_10354f6f0;
      case 8:
        FUN_10354fa34();
        goto LAB_10354f6f0;
      case 9:
        FUN_10354fbc0();
        goto LAB_10354f6f0;
      case 10:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x0001015fdfec();
        lVar2 = unaff_x20 + 0xb8;
        break;
      case 0xb:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x0001015fdfec();
        lVar2 = unaff_x20 + 0xd0;
        break;
      case 0xc:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x0001015fdfec();
        lVar2 = unaff_x20 + 0xe8;
        break;
      case 0xd:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x0001015c5cfc();
        lVar2 = unaff_x20 + 0x100;
        goto code_r0x00010354f850;
      case 0xe:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x0001015c5cfc();
        lVar2 = unaff_x20 + 0x118;
        goto code_r0x00010354f850;
      case 0xf:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x0001015c5cfc();
        lVar2 = unaff_x20 + 0x130;
code_r0x00010354f850:
        puVar3 = &UNK_110790a00;
        goto code_r0x00010354f6dc;
      case 0x10:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        lVar2 = unaff_x20 + 0x148;
code_r0x00010354f7e4:
        puVar3 = &UNK_110790980;
        goto code_r0x00010354f6dc;
      default:
        goto LAB_10354f6f0;
      }
      puVar3 = &UNK_110790c00;
code_r0x00010354f6dc:
      (*pcVar4)(lVar2,puVar3,uVar1,param_2,param_3);
LAB_10354f6f0:
      uVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 10354f8ac; end: 10354fa33;  */

/* WARNING: Removing unreachable block (ram,0x00010354f9dc) */

void FUN_10354f8ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long unaff_x21;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uStack_68 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uVar1 = param_1[1];
  uVar7 = param_1[2];
  bVar4 = ((uVar1 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  bVar5 = ((uVar7 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0;
  puVar6 = param_1;
  if (uVar7 >> 0x3e == 0 && (!bVar4 || !bVar5)) {
    uVar10 = *param_1;
    FUN_1035553e0(uVar10,uVar1,uVar7);
    puVar6 = (undefined8 *)0x0;
    FUN_103559bc4(0,0,0);
    uStack_78 = uVar10;
    uStack_70 = uVar1;
    uStack_68 = uVar7;
  }
  pcVar9 = *(code **)(param_4 + 0x198);
  func_0x0001035027d4();
  (*pcVar9)(&uStack_78,&UNK_110667f00,puVar6,param_3,param_4);
  uVar7 = uStack_68;
  uVar1 = uStack_70;
  uVar10 = uStack_78;
  if (unaff_x21 == 0) {
    if (uStack_68 != 0) {
      if (bVar4 && bVar5) {
        func_0x00010006c00c();
        func_0x000107c6157c(uVar7);
      }
      else {
        pcVar9 = *(code **)(param_4 + 8);
        func_0x00010006c00c();
        func_0x000107c6157c(uVar7);
        (*pcVar9)(param_3,param_4);
      }
      FUN_103559bc4(uStack_78,uStack_70,uStack_68);
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar8 = param_1[2];
      *param_1 = uVar10;
      param_1[1] = uVar1;
      param_1[2] = uVar7;
      func_0x000100d55b74(uVar2,uVar3,uVar8);
      return;
    }
    uVar7 = 0;
  }
  FUN_103559bc4(uStack_78,uStack_70,uVar7);
  return;
}



/* Entry: 10354fa34; end: 10354fbbf;  */

/* WARNING: Removing unreachable block (ram,0x00010354fb64) */

void FUN_10354fa34(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long unaff_x21;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uStack_68 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uVar1 = param_1[1];
  uVar7 = param_1[2];
  bVar4 = ((uVar1 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  bVar5 = ((uVar7 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0;
  puVar6 = param_1;
  if (uVar7 >> 0x3e == 1 && (!bVar4 || !bVar5)) {
    uVar10 = *param_1;
    FUN_1035553e0(uVar10,uVar1);
    puVar6 = (undefined8 *)0x0;
    FUN_103559bc4(0,0,0);
    uStack_78 = uVar10;
    uStack_70 = uVar1;
    uStack_68 = uVar7 & 0x3fffffffffffffff;
  }
  pcVar9 = *(code **)(param_4 + 0x198);
  func_0x000103502854();
  (*pcVar9)(&uStack_78,&UNK_11066a9c0,puVar6,param_3,param_4);
  uVar7 = uStack_68;
  uVar1 = uStack_70;
  uVar10 = uStack_78;
  if (unaff_x21 == 0) {
    if (uStack_68 != 0) {
      if (bVar4 && bVar5) {
        func_0x00010006c00c();
        func_0x000107c6157c(uVar7);
      }
      else {
        pcVar9 = *(code **)(param_4 + 8);
        func_0x00010006c00c();
        func_0x000107c6157c(uVar7);
        (*pcVar9)(param_3,param_4);
      }
      FUN_103559bc4(uStack_78,uStack_70,uStack_68);
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar8 = param_1[2];
      *param_1 = uVar10;
      param_1[1] = uVar1;
      param_1[2] = uVar7 | 0x4000000000000000;
      func_0x000100d55b74(uVar2,uVar3,uVar8);
      return;
    }
    uVar7 = 0;
  }
  FUN_103559bc4(uStack_78,uStack_70,uVar7);
  return;
}



/* Entry: 10354fbc0; end: 10354fd4b;  */

/* WARNING: Removing unreachable block (ram,0x00010354fcf0) */

void FUN_10354fbc0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long unaff_x21;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uStack_68 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uVar1 = param_1[1];
  uVar7 = param_1[2];
  bVar4 = ((uVar1 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  bVar5 = ((uVar7 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0;
  puVar6 = param_1;
  if ((long)uVar7 < -0x4000000000000000 && (!bVar4 || !bVar5)) {
    uVar10 = *param_1;
    FUN_1035553e0(uVar10,uVar1);
    puVar6 = (undefined8 *)0x0;
    FUN_103559bc4(0,0,0);
    uStack_78 = uVar10;
    uStack_70 = uVar1;
    uStack_68 = uVar7 & 0x3fffffffffffffff;
  }
  pcVar9 = *(code **)(param_4 + 0x198);
  func_0x000103502994();
  (*pcVar9)(&uStack_78,&UNK_110666c90,puVar6,param_3,param_4);
  uVar7 = uStack_68;
  uVar1 = uStack_70;
  uVar10 = uStack_78;
  if (unaff_x21 == 0) {
    if (uStack_68 != 0) {
      if (bVar4 && bVar5) {
        func_0x00010006c00c();
        func_0x000107c6157c(uVar7);
      }
      else {
        pcVar9 = *(code **)(param_4 + 8);
        func_0x00010006c00c();
        func_0x000107c6157c(uVar7);
        (*pcVar9)(param_3,param_4);
      }
      FUN_103559bc4(uStack_78,uStack_70,uStack_68);
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar8 = param_1[2];
      *param_1 = uVar10;
      param_1[1] = uVar1;
      param_1[2] = uVar7 | 0x8000000000000000;
      func_0x000100d55b74(uVar2,uVar3,uVar8);
      return;
    }
    uVar7 = 0;
  }
  FUN_103559bc4(uStack_78,uStack_70,uVar7);
  return;
}



/* Entry: 10354fd4c; end: 10354ff2b;  */

void FUN_10354fd4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long unaff_x20;
  long unaff_x21;
  
  FUN_10354ff2c();
  if (unaff_x21 == 0) {
    FUN_10354ffb4();
    FUN_10355003c();
    FUN_1035500c4();
    FUN_10355014c();
    FUN_1035501d4();
    if ((((*(ulong *)(unaff_x20 + 8) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
       ((*(ulong *)(unaff_x20 + 0x10) & 0xf000000000000007) != 0xf000000000000007)) {
      uVar1 = (uint)(*(ulong *)(unaff_x20 + 0x10) >> 0x3e);
      if (uVar1 == 0) {
        FUN_10355025c();
      }
      else if (uVar1 == 1) {
        FUN_103550304();
      }
      else {
        FUN_1035503b0();
      }
    }
    FUN_10355045c();
    FUN_1035504e4();
    FUN_10355056c();
    FUN_1035505f4();
    FUN_10355067c();
    FUN_103550708();
    FUN_103550790();
    func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                        param_2,param_3);
  }
  return;
}



/* Entry: 10354ff2c; end: 10354ffb3;  */

void FUN_10354ff2c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    (*pcVar1)(&uStack_58,1,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10354ffb4; end: 10355003b;  */

void FUN_10354ffb4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x40);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0x50);
    uStack_50 = *(undefined8 *)(param_1 + 0x48);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,2,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10355003c; end: 1035500c3;  */

void FUN_10355003c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x58);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0x68);
    uStack_50 = *(undefined8 *)(param_1 + 0x60);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,3,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035500c4; end: 10355014b;  */

void FUN_1035500c4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x80);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x78);
    uStack_60 = *(undefined8 *)(param_1 + 0x70);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,4,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10355014c; end: 1035501d3;  */

void FUN_10355014c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x88);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0x98);
    uStack_50 = *(undefined8 *)(param_1 + 0x90);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,5,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035501d4; end: 10355025b;  */

void FUN_1035501d4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0xa0);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0xb0);
    uStack_50 = *(undefined8 *)(param_1 + 0xa8);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,6,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10355025c; end: 103550303;  */

void FUN_10355025c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  uStack_50 = param_1[1];
  uStack_48 = param_1[2];
  if (uStack_48 >> 0x3e == 0 &&
      (((uStack_50 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0 ||
      ((uStack_48 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0)) {
    uStack_58 = *param_1;
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001035027d4();
    (*pcVar1)(&uStack_58,7,&UNK_110667f00,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103550304);
  (*pcVar1)();
}



/* Entry: 103550304; end: 1035503af;  */

void FUN_103550304(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  uStack_50 = param_1[1];
  uStack_48 = param_1[2];
  if (uStack_48 >> 0x3e == 1 &&
      (((uStack_50 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0 ||
      ((uStack_48 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0)) {
    uStack_58 = *param_1;
    uStack_48 = uStack_48 & 0x3fffffffffffffff;
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000103502854();
    (*pcVar1)(&uStack_58,8,&UNK_11066a9c0,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1035503b0);
  (*pcVar1)();
}



/* Entry: 1035503b0; end: 10355045b;  */

void FUN_1035503b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  uStack_50 = param_1[1];
  uStack_48 = param_1[2];
  if ((long)uStack_48 < -0x4000000000000000 &&
      (((uStack_50 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0 ||
      ((uStack_48 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0)) {
    uStack_58 = *param_1;
    uStack_48 = uStack_48 & 0x3fffffffffffffff;
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000103502994();
    (*pcVar1)(&uStack_58,9,&UNK_110666c90,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10355045c);
  (*pcVar1)();
}



/* Entry: 10355045c; end: 1035504e3;  */

void FUN_10355045c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0xb8);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 200);
    uStack_50 = *(undefined8 *)(param_1 + 0xc0);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,10,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035504e4; end: 10355056b;  */

void FUN_1035504e4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0xd0);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0xe0);
    uStack_50 = *(undefined8 *)(param_1 + 0xd8);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,0xb,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10355056c; end: 1035505f3;  */

void FUN_10355056c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0xe8);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0xf8);
    uStack_50 = *(undefined8 *)(param_1 + 0xf0);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,0xc,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035505f4; end: 10355067b;  */

void FUN_1035505f4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x110);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x108);
    uStack_60 = *(undefined8 *)(param_1 + 0x100);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,0xd,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10355067c; end: 103550707;  */

void FUN_10355067c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,0xe,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103550708; end: 10355078f;  */

void FUN_103550708(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x140);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x138);
    uStack_60 = *(undefined8 *)(param_1 + 0x130);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,0xf,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103550790; end: 10355081b;  */

void FUN_103550790(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x158);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x150);
    uStack_60 = *(undefined8 *)(param_1 + 0x148);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,0x10,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10355081c; end: 1035508bb;  */

void FUN_10355081c(undefined8 *param_1)

{
  param_1[1] = 0x3000000000000000;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0xf000000000000007;
  param_1[5] = 2;
  param_1[4] = 0xc000000000000000;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 2;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 2;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 2;
  param_1[0x10] = 0xf000000000000000;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 2;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 2;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 2;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 2;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x22] = 0xf000000000000000;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0xf000000000000000;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0xf000000000000000;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0xf000000000000000;
  return;
}



/* Entry: 1035508bc; end: 1035508eb;  */

undefined1  [16] FUN_1035508bc(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x18);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return auVar1;
}


