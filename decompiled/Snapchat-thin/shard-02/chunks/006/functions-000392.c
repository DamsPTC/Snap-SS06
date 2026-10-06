/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101f308e0; end: 101f3092f;  */

void FUN_101f308e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_101f31098();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101f30930; end: 101f3094b;  */

undefined1  [16] FUN_101f30930(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f01c670;
  auVar1._0_8_ = 0xd00000000000001e;
  return auVar1;
}



/* Entry: 101f3094c; end: 101f30993;  */

uint FUN_101f3094c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined2 uStack_58;
  undefined6 uStack_56;
  undefined2 uStack_50;
  undefined8 uStack_4e;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined2 uStack_28;
  undefined6 uStack_26;
  undefined2 uStack_20;
  undefined8 uStack_1e;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_60 = param_1[2];
  uStack_58 = (undefined2)param_1[3];
  uStack_4e = *(undefined8 *)((long)param_1 + 0x22);
  uStack_56 = (undefined6)*(undefined8 *)((long)param_1 + 0x1a);
  uStack_50 = (undefined2)((ulong)*(undefined8 *)((long)param_1 + 0x1a) >> 0x30);
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  uStack_28 = (undefined2)param_2[3];
  uStack_1e = *(undefined8 *)((long)param_2 + 0x22);
  uStack_26 = (undefined6)*(undefined8 *)((long)param_2 + 0x1a);
  uStack_20 = (undefined2)((ulong)*(undefined8 *)((long)param_2 + 0x1a) >> 0x30);
  FUN_101f309d4(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 101f30994; end: 101f309d3;  */

void FUN_101f30994(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined2 uStack_38;
  undefined6 uStack_36;
  undefined2 uStack_30;
  undefined8 uStack_2e;
  
  FUN_101f30ae8(&uStack_50);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_48;
    *param_1 = uStack_50;
    param_1[3] = CONCAT62(uStack_36,uStack_38);
    param_1[2] = uStack_40;
    *(undefined8 *)((long)param_1 + 0x22) = uStack_2e;
    *(ulong *)((long)param_1 + 0x1a) = CONCAT26(uStack_30,uStack_36);
  }
  return;
}



/* Entry: 101f309d4; end: 101f30ae7;  */

byte FUN_101f309d4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  byte bVar2;
  
  uVar1 = *param_1;
  if ((((uVar1 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar1 & 1) != 0)
       ) && ((double)param_1[2] == (double)param_2[2])) && ((char)param_1[3] == (char)param_2[3])) {
    uVar1 = param_1[4];
    if (uVar1 == 0) {
      if (param_2[4] == 0) goto LAB_101f30a4c;
    }
    else if ((param_2[4] != 0) && (func_0x00010142cfc4(), (uVar1 & 1) != 0)) {
LAB_101f30a4c:
      if ((char)param_1[5] == (char)param_2[5]) {
        bVar2 = *(byte *)((long)param_1 + 0x29) ^ *(byte *)((long)param_2 + 0x29) ^ 1;
        goto LAB_101f30a74;
      }
    }
  }
  bVar2 = 0;
LAB_101f30a74:
  return bVar2 & 1;
}



/* Entry: 101f30ae8; end: 101f30deb;  */

/* WARNING: Removing unreachable block (ram,0x000101f30d20) */
/* WARNING: Removing unreachable block (ram,0x000101f30d78) */
/* WARNING: Removing unreachable block (ram,0x000101f30cbc) */
/* WARNING: Removing unreachable block (ram,0x000101f30bb8) */

void FUN_101f30ae8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long unaff_x21;
  long lVar8;
  undefined1 auStack_90 [8];
  undefined4 uStack_88;
  uint uStack_84;
  undefined8 uStack_80;
  uint uStack_74;
  byte bStack_70;
  undefined7 uStack_6f;
  undefined1 uStack_61;
  
  lVar2 = 0x112e41990;
  func_0x0001000285a8(0x112e41990,&UNK_10da30868);
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar6 = *(undefined8 *)(param_3 + 0x18);
  uVar7 = *(undefined8 *)(param_3 + 0x20);
  lVar3 = param_3;
  func_0x0001000a8868(param_3,uVar6);
  FUN_101f31098();
  func_0x000107c606e0(auStack_90 + -extraout_x8,&UNK_1104a1aa0,&UNK_1104a1aa0,lVar3,uVar6,uVar7);
  if (unaff_x21 == 0) {
    bStack_70 = 0;
    pbVar4 = &bStack_70;
    lVar3 = lVar2;
    func_0x000107c604f4();
    bStack_70 = 1;
    pbVar5 = &bStack_70;
    func_0x000107c604fc(pbVar5,lVar2);
    uStack_61 = 2;
    func_0x000101f310d8();
    func_0x000107c60508(&bStack_70,&UNK_1104a1700,&uStack_61,lVar2,&UNK_1104a1700,pbVar5);
    uStack_74 = (uint)bStack_70;
    uVar6 = 0x112d38270;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    uStack_61 = 3;
    uVar7 = uVar6;
    FUN_10188fe58();
    func_0x000107c604e8(&bStack_70,uVar6,&uStack_61,lVar2,uVar6,uVar7);
    uStack_80 = CONCAT71(uStack_6f,bStack_70);
    uStack_61 = 4;
    func_0x000101f302f0();
    func_0x000107c60508(&bStack_70,&UNK_1104a1670,&uStack_61,lVar2,&UNK_1104a1670,uVar6);
    uStack_84 = (uint)bStack_70;
    bStack_70 = 5;
    pbVar5 = &bStack_70;
    func_0x000107c604f8(pbVar5,lVar2);
    uStack_88 = SUB84(pbVar5,0);
    (**(code **)(lVar8 + 8))(auStack_90 + -extraout_x8,lVar2);
    uVar6 = uStack_80;
    bVar1 = (byte)uStack_88;
    func_0x000107c61434(uStack_80);
    func_0x000107c61434(lVar3);
    func_0x0001000834e4(param_3);
    func_0x000107c6142c(uVar6);
    func_0x000107c6142c(lVar3);
    *param_1 = pbVar4;
    param_1[1] = lVar3;
    param_1[2] = param_2;
    *(char *)(param_1 + 3) = (char)uStack_74;
    param_1[4] = uVar6;
    *(char *)(param_1 + 5) = (char)uStack_84;
    *(byte *)((long)param_1 + 0x29) = bVar1 & 1;
  }
  else {
    func_0x0001000834e4(param_3);
  }
  return;
}



/* Entry: 101f30dec; end: 101f30e0f;  */

void FUN_101f30dec(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101f30e10();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101f30e10; end: 101f30e4f;  */

void FUN_101f30e10(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41988 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da30814;
  func_0x000107c61520(&UNK_10da30814,&UNK_1104a19f8);
  puRam0000000112e41988 = puVar1;
  return;
}



/* Entry: 101f30e50; end: 101f30ef7;  */

long FUN_101f30e50(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101f30ef8; end: 101f30f7b;  */

undefined8 * FUN_101f30ef8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)((long)param_1 + 0x29) = *(undefined1 *)((long)param_2 + 0x29);
  return param_1;
}



/* Entry: 101f30f7c; end: 101f30f8f;  */

void FUN_101f30f7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = *(undefined8 *)((long)param_2 + 0x1a);
  *(undefined8 *)((long)param_1 + 0x22) = *(undefined8 *)((long)param_2 + 0x22);
  *(undefined8 *)((long)param_1 + 0x1a) = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Entry: 101f30f90; end: 101f30ff3;  */

undefined8 * FUN_101f30f90(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar2 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c6142c(uVar2);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)((long)param_1 + 0x29) = *(undefined1 *)((long)param_2 + 0x29);
  return param_1;
}



/* Entry: 101f30ff4; end: 101f31097;  */

int FUN_101f30ff4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x2a) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101f31098; end: 101f31117;  */

void FUN_101f31098(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41998 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da30974;
  func_0x000107c61520(&UNK_10da30974,&UNK_1104a1aa0);
  puRam0000000112e41998 = puVar1;
  return;
}



/* Entry: 101f31118; end: 101f3127f;  */

int FUN_101f31118(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfa < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 5) {
      iVar2 = 4;
    }
    if (param_2 + 5 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101f31194;
        goto LAB_101f31178;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101f31178:
      return ((uint)*param_1 | uVar1 << 8) - 5;
    }
  }
LAB_101f31194:
  iVar2 = *param_1 - 6;
  if (*param_1 < 6) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101f31280; end: 101f312bf;  */

void FUN_101f31280(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e419a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da3094c;
  func_0x000107c61520(&UNK_10da3094c,&UNK_1104a1aa0);
  puRam0000000112e419a8 = puVar1;
  return;
}



/* Entry: 101f312c0; end: 101f312c3;  */

void FUN_101f312c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e419b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da308ac;
  func_0x000107c61520(&UNK_10da308ac,&UNK_1104a1aa0);
  puRam0000000112e419b0 = puVar1;
  return;
}



/* Entry: 101f312c4; end: 101f31303;  */

void FUN_101f312c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e419b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da308ac;
  func_0x000107c61520(&UNK_10da308ac,&UNK_1104a1aa0);
  puRam0000000112e419b0 = puVar1;
  return;
}



/* Entry: 101f31304; end: 101f31307;  */

void FUN_101f31304(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e419b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da30884;
  func_0x000107c61520(&UNK_10da30884,&UNK_1104a1aa0);
  puRam0000000112e419b8 = puVar1;
  return;
}



/* Entry: 101f31308; end: 101f31347;  */

void FUN_101f31308(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e419b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da30884;
  func_0x000107c61520(&UNK_10da30884,&UNK_1104a1aa0);
  puRam0000000112e419b8 = puVar1;
  return;
}



/* Entry: 101f31348; end: 101f3135b;  */

bool FUN_101f31348(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101f3135c; end: 101f315db;  */

void FUN_101f3135c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar3 = 0x800000010f01c5a0;
  uVar5 = 0xd000000000000015;
  if (bVar4 != 2) {
    uVar3 = 0xed00006c6c69665f;
    uVar5 = 0x6f6e5f64615f7369;
  }
  uVar1 = 0x64695f6563616c70;
  if (bVar4 != 0) {
    uVar1 = 0x6d617473656d6974;
  }
  uVar2 = 0xe800000000000000;
  if (bVar4 != 0) {
    uVar2 = 0xe900000000000070;
  }
  if (bVar4 < 2) {
    uVar3 = uVar2;
    uVar5 = uVar1;
  }
  func_0x000107c5fb58(auStack_68,uVar5,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 101f315dc; end: 101f316ff;  */

void FUN_101f315dc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar4 = *unaff_x20;
  uVar3 = 0x800000010f01c5a0;
  uVar5 = 0xd000000000000015;
  if (bVar4 != 2) {
    uVar3 = 0xed00006c6c69665f;
    uVar5 = 0x6f6e5f64615f7369;
  }
  uVar1 = 0x64695f6563616c70;
  if (bVar4 != 0) {
    uVar1 = 0x6d617473656d6974;
  }
  uVar2 = 0xe800000000000000;
  if (bVar4 != 0) {
    uVar2 = 0xe900000000000070;
  }
  if (bVar4 < 2) {
    uVar3 = uVar2;
    uVar5 = uVar1;
  }
  *param_1 = uVar5;
  param_1[1] = uVar3;
  return;
}



/* Entry: 101f31700; end: 101f31723;  */

void FUN_101f31700(undefined1 *param_1,undefined1 param_2)

{
  FUN_101f318b8();
  *param_1 = param_2;
  return;
}



/* Entry: 101f31724; end: 101f3173b;  */

undefined1  [16] FUN_101f31724(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 101f3173c; end: 101f3178b;  */

void FUN_101f3173c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_101f31d44();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101f3178c; end: 101f317ef;  */

undefined1  [16] FUN_101f3178c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f01c6b0;
  auVar1._0_8_ = 0xd000000000000018;
  return auVar1;
}



/* Entry: 101f317f0; end: 101f31827;  */

void FUN_101f317f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined2 param_5)

{
  long unaff_x21;
  
  FUN_101f3191c();
  if (unaff_x21 == 0) {
    *param_1 = param_3;
    param_1[1] = param_4;
    param_1[2] = param_2;
    *(char *)(param_1 + 3) = (char)param_5;
    *(byte *)((long)param_1 + 0x19) = (byte)((ushort)param_5 >> 8) & 1;
  }
  return;
}



/* Entry: 101f31828; end: 101f318b7;  */

bool FUN_101f31828(double param_1,double param_2,ulong param_3,long param_4,uint param_5,
                  ulong param_6,long param_7,uint param_8)

{
  uint uVar1;
  
  if ((param_3 == param_6) && (param_4 == param_7)) {
    if (param_1 != param_2) {
      return false;
    }
  }
  else {
    func_0x000107c605b8(param_3,param_4,param_6,param_7,0);
    if ((param_3 & 1) == 0) {
      return false;
    }
    if (param_1 != param_2) {
      return false;
    }
  }
  uVar1 = param_8 & 0xffff ^ param_5 & 0xffff;
  return (uVar1 & 0xff) == 0 && (uVar1 & 0x100) == 0;
}



/* Entry: 101f318b8; end: 101f3191b;  */

ulong FUN_101f318b8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (3 < uVar1) {
    uVar1 = 4;
  }
  return uVar1;
}



/* Entry: 101f3191c; end: 101f31b23;  */

/* WARNING: Removing unreachable block (ram,0x000101f31a9c) */
/* WARNING: Removing unreachable block (ram,0x000101f31aa0) */
/* WARNING: Removing unreachable block (ram,0x000101f31ab0) */
/* WARNING: Removing unreachable block (ram,0x000101f319e8) */

byte * FUN_101f3191c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_70 [4];
  uint uStack_6c;
  undefined1 uStack_65;
  undefined1 uStack_64;
  byte abStack_63 [3];
  
  lVar2 = 0x112e41a80;
  func_0x0001000285a8(0x112e41a80,&UNK_10da30a60);
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  pbVar4 = *(byte **)(param_1 + 0x20);
  lVar3 = param_1;
  func_0x0001000a8868(param_1,uVar1);
  FUN_101f31d44();
  func_0x000107c606e0(auStack_70 + -extraout_x8,&UNK_1104a1c98,&UNK_1104a1c98,lVar3,uVar1,pbVar4);
  if (unaff_x21 == 0) {
    abStack_63[2] = 0;
    pbVar4 = abStack_63 + 2;
    func_0x000107c604f4(pbVar4,lVar2);
    abStack_63[1] = 1;
    pbVar5 = abStack_63 + 1;
    func_0x000107c604fc(pbVar5,lVar2);
    uStack_64 = 2;
    func_0x000101f302f0();
    func_0x000107c60508(abStack_63,&UNK_1104a1670,&uStack_64,lVar2,&UNK_1104a1670,pbVar5);
    uStack_6c = (uint)abStack_63[0];
    uStack_65 = 3;
    func_0x000107c604f8(&uStack_65,lVar2);
    (**(code **)(lVar6 + 8))(auStack_70 + -extraout_x8,lVar2);
    func_0x0001000834e4(param_1);
  }
  else {
    func_0x0001000834e4(param_1);
  }
  return pbVar4;
}



/* Entry: 101f31b24; end: 101f31b47;  */

void FUN_101f31b24(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101f31b48();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101f31b48; end: 101f31b87;  */

void FUN_101f31b48(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41a78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da30a14;
  func_0x000107c61520(&UNK_10da30a14,&UNK_1104a1bf8);
  puRam0000000112e41a78 = puVar1;
  return;
}



/* Entry: 101f31b88; end: 101f31bb3;  */

long FUN_101f31b88(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101f31bb4; end: 101f31bbb;  */

void FUN_101f31bb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 101f31bbc; end: 101f31bf7;  */

undefined8 * FUN_101f31bbc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 3);
  func_0x000107c61434();
  return param_1;
}



/* Entry: 101f31bf8; end: 101f31c5b;  */

undefined8 * FUN_101f31bf8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)((long)param_1 + 0x19) = *(undefined1 *)((long)param_2 + 0x19);
  return param_1;
}



/* Entry: 101f31c5c; end: 101f31ca7;  */

undefined8 * FUN_101f31c5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)((long)param_1 + 0x19) = *(undefined1 *)((long)param_2 + 0x19);
  return param_1;
}



/* Entry: 101f31ca8; end: 101f31d43;  */

int FUN_101f31ca8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x1a) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101f31d44; end: 101f31d83;  */

void FUN_101f31d44(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41a88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da30b64;
  func_0x000107c61520(&UNK_10da30b64,&UNK_1104a1c98);
  puRam0000000112e41a88 = puVar1;
  return;
}



/* Entry: 101f31d84; end: 101f31eeb;  */

int FUN_101f31d84(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101f31e00;
        goto LAB_101f31de4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101f31de4:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_101f31e00:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101f31eec; end: 101f31f2b;  */

void FUN_101f31eec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41a90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da30b3c;
  func_0x000107c61520(&UNK_10da30b3c,&UNK_1104a1c98);
  puRam0000000112e41a90 = puVar1;
  return;
}



/* Entry: 101f31f2c; end: 101f31f2f;  */

void FUN_101f31f2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41a98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da30a9c;
  func_0x000107c61520(&UNK_10da30a9c,&UNK_1104a1c98);
  puRam0000000112e41a98 = puVar1;
  return;
}



/* Entry: 101f31f30; end: 101f31f6f;  */

void FUN_101f31f30(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41a98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da30a9c;
  func_0x000107c61520(&UNK_10da30a9c,&UNK_1104a1c98);
  puRam0000000112e41a98 = puVar1;
  return;
}



/* Entry: 101f31f70; end: 101f31f73;  */

void FUN_101f31f70(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41aa0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da30a74;
  func_0x000107c61520(&UNK_10da30a74,&UNK_1104a1c98);
  puRam0000000112e41aa0 = puVar1;
  return;
}



/* Entry: 101f31f74; end: 101f31fb3;  */

void FUN_101f31f74(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41aa0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da30a74;
  func_0x000107c61520(&UNK_10da30a74,&UNK_1104a1c98);
  puRam0000000112e41aa0 = puVar1;
  return;
}



/* Entry: 101f31fb4; end: 101f31fbb;  */

undefined8 FUN_101f31fb4(void)

{
  return 1;
}



/* Entry: 101f31fbc; end: 101f3200b;  */

void FUN_101f31fbc(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c5fb58(auStack_68,0x64695f6563616c70,0xe800000000000000);
  func_0x000107c606a8();
  return;
}



/* Entry: 101f3200c; end: 101f32023;  */

void FUN_101f3200c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)
            (param_1,0x64695f6563616c70,0xe800000000000000);
  return;
}



/* Entry: 101f32024; end: 101f3206f;  */

void FUN_101f32024(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  func_0x000107c5fb58(auStack_68,0x64695f6563616c70,0xe800000000000000);
  func_0x000107c606a8();
  return;
}



/* Entry: 101f32070; end: 101f320db;  */

void FUN_101f32070(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  lVar2 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar1);
  *(bool *)param_1 = lVar2 != 0;
  return;
}



/* Entry: 101f320dc; end: 101f3210f;  */

void FUN_101f320dc(undefined8 *param_1)

{
  *param_1 = 0x64695f6563616c70;
  param_1[1] = 0xe800000000000000;
  return;
}



/* Entry: 101f32110; end: 101f3217f;  */

void FUN_101f32110(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_3);
  *(bool *)param_1 = lVar1 != 0;
  return;
}



/* Entry: 101f32180; end: 101f32197;  */

undefined1  [16] FUN_101f32180(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 101f32198; end: 101f321e7;  */

void FUN_101f32198(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_101f321e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101f321e8; end: 101f32227;  */

void FUN_101f321e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41b38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da30d60;
  func_0x000107c61520(&UNK_10da30d60,&UNK_1104a1e88);
  puRam0000000112e41b38 = puVar1;
  return;
}



/* Entry: 101f32228; end: 101f32243;  */

undefined1  [16] FUN_101f32228(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f01c6d0;
  auVar1._0_8_ = 0xd000000000000027;
  return auVar1;
}



/* Entry: 101f32244; end: 101f32267;  */

void FUN_101f32244(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101f32268();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101f32268; end: 101f322a7;  */

void FUN_101f32268(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41b40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da30c0c;
  func_0x000107c61520(&UNK_10da30c0c,&UNK_1104a1df0);
  puRam0000000112e41b40 = puVar1;
  return;
}



/* Entry: 101f322a8; end: 101f322d7;  */

long FUN_101f322a8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != *param_2 || param_1[1] != param_2[1]) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )();
    return lVar1;
  }
  return 1;
}



/* Entry: 101f322d8; end: 101f323ff;  */

/* WARNING: Removing unreachable block (ram,0x000101f3239c) */

void FUN_101f322d8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  
  lVar3 = 0x112e41b30;
  func_0x0001000285a8(0x112e41b30,&UNK_10da30bc0);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_101f321e8();
  puVar5 = &UNK_1104a1e88;
  func_0x000107c606e0(&stack0xffffffffffffffa0 + -extraout_x8,&UNK_1104a1e88,&UNK_1104a1e88,lVar4,
                      uVar1,uVar2);
  if (unaff_x21 == 0) {
    lVar4 = lVar3;
    func_0x000107c604f4();
    (**(code **)(lVar6 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,lVar3);
    func_0x0001000834e4(param_2);
    *param_1 = puVar5;
    param_1[1] = lVar4;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 101f32400; end: 101f32407;  */

void FUN_101f32400(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 101f32408; end: 101f32477;  */

undefined8 * FUN_101f32408(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 101f32478; end: 101f325fb;  */

int FUN_101f32478(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101f325fc; end: 101f3263b;  */

void FUN_101f325fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41b48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da30d38;
  func_0x000107c61520(&UNK_10da30d38,&UNK_1104a1e88);
  puRam0000000112e41b48 = puVar1;
  return;
}



/* Entry: 101f3263c; end: 101f3263f;  */

void FUN_101f3263c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41b50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da30c98;
  func_0x000107c61520(&UNK_10da30c98,&UNK_1104a1e88);
  puRam0000000112e41b50 = puVar1;
  return;
}



/* Entry: 101f32640; end: 101f3267f;  */

void FUN_101f32640(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41b50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da30c98;
  func_0x000107c61520(&UNK_10da30c98,&UNK_1104a1e88);
  puRam0000000112e41b50 = puVar1;
  return;
}



/* Entry: 101f32680; end: 101f32683;  */

void FUN_101f32680(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41b58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da30c70;
  func_0x000107c61520(&UNK_10da30c70,&UNK_1104a1e88);
  puRam0000000112e41b58 = puVar1;
  return;
}



/* Entry: 101f32684; end: 101f326c3;  */

void FUN_101f32684(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41b58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da30c70;
  func_0x000107c61520(&UNK_10da30c70,&UNK_1104a1e88);
  puRam0000000112e41b58 = puVar1;
  return;
}



/* Entry: 101f326c4; end: 101f326d3;  */

undefined8 * FUN_101f326c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 101f326d4; end: 101f32723;  */

void FUN_101f326d4(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c5fb58(auStack_68,0x64695f6563616c70,0xe800000000000000);
  func_0x000107c606a8();
  return;
}



/* Entry: 101f32724; end: 101f3273b;  */

void FUN_101f32724(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)
            (param_1,0x64695f6563616c70,0xe800000000000000);
  return;
}



/* Entry: 101f3273c; end: 101f32787;  */

void FUN_101f3273c(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  func_0x000107c5fb58(auStack_68,0x64695f6563616c70,0xe800000000000000);
  func_0x000107c606a8();
  return;
}



/* Entry: 101f32788; end: 101f327f3;  */

void FUN_101f32788(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  lVar2 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar1);
  *(bool *)param_1 = lVar2 != 0;
  return;
}



/* Entry: 101f327f4; end: 101f32827;  */

void FUN_101f327f4(undefined8 *param_1)

{
  *param_1 = 0x64695f6563616c70;
  param_1[1] = 0xe800000000000000;
  return;
}



/* Entry: 101f32828; end: 101f32897;  */

void FUN_101f32828(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_3);
  *(bool *)param_1 = lVar1 != 0;
  return;
}



/* Entry: 101f32898; end: 101f328af;  */

undefined1  [16] FUN_101f32898(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 101f328b0; end: 101f328ff;  */

void FUN_101f328b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_101f32900();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101f32900; end: 101f3293f;  */

void FUN_101f32900(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41be8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da30f50;
  func_0x000107c61520(&UNK_10da30f50,&UNK_1104a2078);
  puRam0000000112e41be8 = puVar1;
  return;
}



/* Entry: 101f32940; end: 101f3295b;  */

undefined1  [16] FUN_101f32940(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f01c710;
  auVar1._0_8_ = 0xd000000000000027;
  return auVar1;
}



/* Entry: 101f3295c; end: 101f3297f;  */

void FUN_101f3295c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101f32980();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101f32980; end: 101f329bf;  */

void FUN_101f32980(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41bf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da30dfc;
  func_0x000107c61520(&UNK_10da30dfc,&UNK_1104a1fe0);
  puRam0000000112e41bf0 = puVar1;
  return;
}



/* Entry: 101f329c0; end: 101f329ef;  */

long FUN_101f329c0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != *param_2 || param_1[1] != param_2[1]) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )();
    return lVar1;
  }
  return 1;
}



/* Entry: 101f329f0; end: 101f32b17;  */

/* WARNING: Removing unreachable block (ram,0x000101f32ab4) */

void FUN_101f329f0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  
  lVar3 = 0x112e41be0;
  func_0x0001000285a8(0x112e41be0,&UNK_10da30db0);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_101f32900();
  puVar5 = &UNK_1104a2078;
  func_0x000107c606e0(&stack0xffffffffffffffa0 + -extraout_x8,&UNK_1104a2078,&UNK_1104a2078,lVar4,
                      uVar1,uVar2);
  if (unaff_x21 == 0) {
    lVar4 = lVar3;
    func_0x000107c604f4();
    (**(code **)(lVar6 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,lVar3);
    func_0x0001000834e4(param_2);
    *param_1 = puVar5;
    param_1[1] = lVar4;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 101f32b18; end: 101f32b1f;  */

void FUN_101f32b18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 101f32b20; end: 101f32b8f;  */

undefined8 * FUN_101f32b20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 101f32b90; end: 101f32d13;  */

int FUN_101f32b90(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101f32d14; end: 101f32d53;  */

void FUN_101f32d14(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41bf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da30f28;
  func_0x000107c61520(&UNK_10da30f28,&UNK_1104a2078);
  puRam0000000112e41bf8 = puVar1;
  return;
}



/* Entry: 101f32d54; end: 101f32d57;  */

void FUN_101f32d54(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41c00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da30e88;
  func_0x000107c61520(&UNK_10da30e88,&UNK_1104a2078);
  puRam0000000112e41c00 = puVar1;
  return;
}



/* Entry: 101f32d58; end: 101f32d97;  */

void FUN_101f32d58(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41c00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da30e88;
  func_0x000107c61520(&UNK_10da30e88,&UNK_1104a2078);
  puRam0000000112e41c00 = puVar1;
  return;
}



/* Entry: 101f32d98; end: 101f32d9b;  */

void FUN_101f32d98(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41c08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da30e60;
  func_0x000107c61520(&UNK_10da30e60,&UNK_1104a2078);
  puRam0000000112e41c08 = puVar1;
  return;
}



/* Entry: 101f32d9c; end: 101f32ddb;  */

void FUN_101f32d9c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e41c08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da30e60;
  func_0x000107c61520(&UNK_10da30e60,&UNK_1104a2078);
  puRam0000000112e41c08 = puVar1;
  return;
}



/* Entry: 101f32ddc; end: 101f32df7;  */

undefined8 * FUN_101f32ddc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 101f32df8; end: 101f32fcf;  */

void FUN_101f32df8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x63727369;
  if (cVar4 != '\x01') {
    uVar1 = 0xd000000000000015;
  }
  uVar2 = 0xe400000000000000;
  if (cVar4 != '\x01') {
    uVar2 = 0x800000010f01c780;
  }
  uVar3 = 0x800000010f01c760;
  uVar5 = 0xd000000000000011;
  if (cVar4 != '\0') {
    uVar3 = uVar2;
    uVar5 = uVar1;
  }
  func_0x000107c5fb58(auStack_68,uVar5,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 101f32fd0; end: 101f33083;  */

void FUN_101f32fd0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  char *unaff_x20;
  
  cVar4 = *unaff_x20;
  uVar1 = 0x63727369;
  if (cVar4 != '\x01') {
    uVar1 = 0xd000000000000015;
  }
  uVar2 = 0xe400000000000000;
  if (cVar4 != '\x01') {
    uVar2 = 0x800000010f01c780;
  }
  uVar3 = 0x800000010f01c760;
  uVar5 = 0xd000000000000011;
  if (cVar4 != '\0') {
    uVar3 = uVar2;
    uVar5 = uVar1;
  }
  *param_1 = uVar5;
  param_1[1] = uVar3;
  return;
}



/* Entry: 101f33084; end: 101f330a7;  */

void FUN_101f33084(undefined1 *param_1,undefined1 param_2)

{
  func_0x000101f33248();
  *param_1 = param_2;
  return;
}



/* Entry: 101f330a8; end: 101f330bf;  */

undefined1  [16] FUN_101f330a8(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 101f330c0; end: 101f3310f;  */

void FUN_101f330c0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_101f33720();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101f33110; end: 101f3312b;  */

undefined1  [16] FUN_101f33110(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f01c740;
  auVar1._0_8_ = 0xd000000000000015;
  return auVar1;
}



/* Entry: 101f3312c; end: 101f3316f;  */

uint FUN_101f3312c(undefined8 *param_1,undefined8 *param_2)

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
  FUN_101f331b0(&uStack_70,&uStack_40);
  return uVar1 & 1;
}


