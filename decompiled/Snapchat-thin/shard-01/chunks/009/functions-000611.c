/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10164c364; end: 10164c367;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10164c364(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10164c368; end: 10164c39f;  */

uint FUN_10164c368(long param_1,long param_2)

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
  FUN_10164cd0c();
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



/* Entry: 10164c3a0; end: 10164c3e7;  */

uint FUN_10164c3a0(undefined8 *param_1)

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
  FUN_10164c610(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10164c3e8; end: 10164c487;  */

/* WARNING: Possible PIC construction at 0x00010164c434: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010164c444: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010164c438) */
/* WARNING: Removing unreachable block (ram,0x00010164c448) */

void FUN_10164c3e8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbc928 != -1) {
    func_0x000107c61568(0x112dbc928,FUN_10164bfa8);
  }
  uVar5 = uRam0000000113802240;
  uVar4 = uRam0000000113802238;
  uVar3 = uRam0000000113802230;
  uVar2 = uRam0000000113802228;
  uVar1 = uRam0000000113802220;
  *param_1 = uRam0000000113802218;
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



/* Entry: 10164c488; end: 10164c4c3;  */

void FUN_10164c488(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbc948;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbc948,&UNK_10d974088);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10164c4c4; end: 10164c5c7;  */

void FUN_10164c4c4(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10164c5c8; end: 10164c60f;  */

uint FUN_10164c5c8(undefined8 *param_1,undefined8 *param_2)

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
  FUN_10164c610(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10164c610; end: 10164c7e7;  */

uint FUN_10164c610(byte *param_1,byte *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_138 [40];
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if (((((*param_1 ^ *param_2) & 1) != 0) || (((param_1[1] ^ param_2[1]) & 1) != 0)) ||
     (((param_1[2] ^ param_2[2]) & 1) != 0)) {
    return 0;
  }
  lVar7 = *(long *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar11 = *(undefined8 *)(param_1 + 0x30);
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  lVar8 = *(long *)(param_2 + 0x20);
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  uVar12 = *(undefined8 *)(param_2 + 0x30);
  uVar10 = *(undefined8 *)(param_2 + 0x28);
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  uStack_110 = uVar6;
  lStack_108 = lVar8;
  uStack_100 = uVar10;
  uStack_f8 = uVar12;
  uStack_f0 = uVar4;
  uStack_e0 = uVar5;
  lStack_d8 = lVar7;
  uStack_d0 = uVar9;
  uStack_c8 = uVar11;
  uStack_c0 = uVar3;
  if (lVar7 == 0) {
    if (lVar8 != 0) goto LAB_10164c730;
    FUN_10164bf58(&uStack_e0,&uStack_90);
    FUN_10164bf58(&uStack_110,&uStack_90);
    FUN_10164bf0c(uVar5,0,uVar9,uVar11,uVar3);
  }
  else {
    if (lVar8 == 0) {
LAB_10164c730:
      FUN_10164bf58(&uStack_e0,&uStack_90);
      FUN_10164bf58(&uStack_110,&uStack_90);
      FUN_10164bf0c(uVar5,lVar7,uVar9,uVar11,uVar3);
      FUN_10164bf0c(uVar6,lVar8,uVar10,uVar12,uVar4);
      uVar1 = 0;
      goto LAB_10164c7c4;
    }
    uStack_b8 = uVar5;
    lStack_b0 = lVar7;
    uStack_a8 = uVar9;
    uStack_a0 = uVar11;
    uStack_98 = uVar3;
    uStack_90 = uVar6;
    lStack_88 = lVar8;
    uStack_80 = uVar10;
    uStack_78 = uVar12;
    uStack_70 = uVar4;
    FUN_10164bf58(&uStack_e0,auStack_138);
    FUN_10164bf58(&uStack_110,auStack_138);
    puVar2 = &uStack_b8;
    func_0x000101672d1c(puVar2,&uStack_90);
    FUN_10164bf0c(uVar6,lVar8,uVar10,uVar12,uVar4);
    FUN_10164bf0c(uVar5,lVar7,uVar9,uVar11,uVar3);
    if (((ulong)puVar2 & 1) == 0) {
      uVar1 = 0;
      goto LAB_10164c7c4;
    }
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  FUN_100e25fcc(uVar3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 8),
                *(undefined8 *)(param_2 + 0x10));
  uVar1 = (uint)uVar3;
LAB_10164c7c4:
  return uVar1 & 1;
}



/* Entry: 10164c7e8; end: 10164c827;  */

void FUN_10164c7e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbc930 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d973fb8;
  func_0x000107c61520(&UNK_10d973fb8,&UNK_1103ed890);
  puRam0000000112dbc930 = puVar1;
  return;
}



/* Entry: 10164c828; end: 10164c84b;  */

void FUN_10164c828(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10164c84c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10164c84c; end: 10164c88b;  */

void FUN_10164c84c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbc938 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d973f90;
  func_0x000107c61520(&UNK_10d973f90,&UNK_1103ed890);
  puRam0000000112dbc938 = puVar1;
  return;
}



/* Entry: 10164c88c; end: 10164c8b7;  */

void FUN_10164c88c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10164c7e8();
  *(long *)(param_1 + 8) = lVar1;
  FUN_101553e18();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10164c8b8; end: 10164c8bb;  */

void FUN_10164c8b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbc940 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d973ff8;
  func_0x000107c61520(&UNK_10d973ff8,&UNK_1103ed890);
  puRam0000000112dbc940 = puVar1;
  return;
}



/* Entry: 10164c8bc; end: 10164c8fb;  */

void FUN_10164c8bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbc940 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d973ff8;
  func_0x000107c61520(&UNK_10d973ff8,&UNK_1103ed890);
  puRam0000000112dbc940 = puVar1;
  return;
}



/* Entry: 10164c8fc; end: 10164c973;  */

long FUN_10164c8fc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10164c974; end: 10164cb57;  */

undefined1 * FUN_10164c974(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  uVar4 = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010006c00c(uVar4,uVar1);
  *(undefined8 *)(param_1 + 8) = uVar4;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  lVar2 = *(long *)(param_2 + 0x20);
  if (lVar2 == 0) {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = uVar4;
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  }
  else {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(long *)(param_1 + 0x20) = lVar2;
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = uVar4;
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    func_0x000107c61434();
    func_0x000107c61434(uVar4);
    func_0x00010006c00c(uVar1,uVar3);
    *(undefined8 *)(param_1 + 0x30) = uVar1;
    *(undefined8 *)(param_1 + 0x38) = uVar3;
  }
  return param_1;
}



/* Entry: 10164cb58; end: 10164cc3b;  */

undefined8 FUN_10164cb58(undefined8 param_1)

{
  (*(code *)&DAT_1016745a8)();
  return param_1;
}



/* Entry: 10164cc3c; end: 10164cd0b;  */

int FUN_10164cc3c(int *param_1,uint param_2)

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



/* Entry: 10164cd0c; end: 10164cd4b;  */

void FUN_10164cd0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbc950 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d973f64;
  func_0x000107c61520(&DAT_10d973f64,&UNK_1103ed890);
  puRam0000000112dbc950 = puVar1;
  return;
}



/* Entry: 10164cd4c; end: 10164cd5b;  */

void FUN_10164cd4c(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 10164cd5c; end: 10164cd8b;  */

void FUN_10164cd5c(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_10164d804();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10164cd8c; end: 10164cd93;  */

undefined8 FUN_10164cd8c(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 10164cd94; end: 10164ce07;  */

void FUN_10164cd94(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112dbc9c0;
  func_0x0001000285a8(0x112dbc9c0,&UNK_10d9740f8);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10164ce08; end: 10164ce13;  */

void FUN_10164ce08(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10164ce14; end: 10164cebf;  */

void FUN_10164ce14(void)

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



/* Entry: 10164cec0; end: 10164ced3;  */

bool FUN_10164cec0(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10164ced4; end: 10164cf2f;  */

void FUN_10164ced4(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8();
  *param_1 = puVar1;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[4] = 0;
  param_1[5] = 0xe000000000000000;
  param_1[7] = 0xc000000000000000;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  return;
}



/* Entry: 10164cf30; end: 10164cf77;  */

void FUN_10164cf30(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d974390,0x8f,2);
  uRam0000000113802250 = uStack_38;
  uRam0000000113802248 = uStack_40;
  uRam0000000113802260 = uStack_28;
  uRam0000000113802258 = uStack_30;
  uRam0000000113802270 = uStack_18;
  uRam0000000113802268 = uStack_20;
  return;
}



/* Entry: 10164cf78; end: 10164d0e3;  */

/* WARNING: Removing unreachable block (ram,0x00010164d0b8) */
/* WARNING: Removing unreachable block (ram,0x00010164d0d8) */

void FUN_10164cf78(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          (**(code **)(param_3 + 0x1b8))();
        }
        else if (lVar1 == 2) {
          pcVar5 = *(code **)(param_3 + 0x48);
          lVar1 = unaff_x20 + 8;
          goto LAB_10164d0c8;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar5 = *(code **)(param_3 + 0x180);
          FUN_10164d810();
          lVar2 = unaff_x20 + 0x10;
          puVar3 = &UNK_1103edb30;
        }
        else {
          if (lVar1 == 4) {
            pcVar5 = *(code **)(param_3 + 0x150);
            lVar1 = unaff_x20 + 0x20;
LAB_10164d0c8:
            (*pcVar5)(lVar1,param_2,param_3);
            goto LAB_10164d018;
          }
          if (lVar1 != 5) goto LAB_10164d018;
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x00010164ad74();
          lVar2 = unaff_x20 + 0x40;
          puVar3 = &UNK_1103f14e0;
        }
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
LAB_10164d018:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 10164d0e4; end: 10164d227;  */

void FUN_10164d0e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar3;
  long lStack_50;
  undefined1 uStack_48;
  
  if (((*(long *)(*unaff_x20 + 0x10) == 0) ||
      ((**(code **)(param_3 + 0x198))
                 (*unaff_x20,1,&UNK_110787f98,&UNK_110787f98,&PTR_DAT_110787db0,&PTR_DAT_110787dc8,
                  param_2,param_3), unaff_x21 == 0)) &&
     ((uVar2 = (ulong)*(uint *)(unaff_x20 + 1), *(uint *)(unaff_x20 + 1) == 0 ||
      ((**(code **)(param_3 + 0x18))(uVar2,2,param_2,param_3), unaff_x21 == 0)))) {
    if (unaff_x20[2] != 0) {
      uStack_48 = (undefined1)unaff_x20[3];
      pcVar3 = *(code **)(param_3 + 0x80);
      lStack_50 = unaff_x20[2];
      FUN_10164d810();
      (*pcVar3)(&lStack_50,3,&UNK_1103edb30,uVar2,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    uVar1 = unaff_x20[5];
    uVar2 = unaff_x20[4] & 0xffffffffffff;
    if ((uVar1 & 0x2000000000000000) != 0) {
      uVar2 = uVar1 >> 0x38 & 0xf;
    }
    if (((uVar2 == 0) ||
        ((**(code **)(param_3 + 0x70))(unaff_x20[4],uVar1,4,param_2,param_3), unaff_x21 == 0)) &&
       (FUN_10164d228(), unaff_x21 == 0)) {
      func_0x000100076224(param_1,unaff_x20[6],unaff_x20[7],param_2,param_3);
    }
  }
  return;
}



/* Entry: 10164d228; end: 10164d2af;  */

void FUN_10164d228(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_60 = *(long *)(param_1 + 0x48);
  if (lStack_60 != 0) {
    uStack_68 = *(undefined8 *)(param_1 + 0x40);
    uStack_50 = *(undefined8 *)(param_1 + 0x58);
    uStack_58 = *(undefined8 *)(param_1 + 0x50);
    uStack_48 = *(undefined8 *)(param_1 + 0x60);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010164ad74();
    (*pcVar1)(&uStack_68,5,&UNK_1103f14e0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10164d2b0; end: 10164d2b3;  */

uint FUN_10164d2b0(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined1 auStack_138 [40];
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar2 = *param_1;
  func_0x000101058cd4(uVar2,*param_2);
  if (((uVar2 & 1) != 0) && ((int)param_1[1] == *(int *)(param_2 + 1))) {
    uVar2 = param_1[2];
    uVar4 = param_2[2];
    if (*(char *)(param_2 + 3) == '\x01') {
      if ((long)uVar4 < 2) {
        if (uVar4 == 0) {
          if (uVar2 == 0) {
LAB_10164d8c8:
            uVar2 = param_1[4];
            if (((uVar2 == param_2[4]) && (param_1[5] == param_2[5])) ||
               (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
              uVar7 = param_1[9];
              uVar4 = param_1[8];
              uVar11 = param_1[0xb];
              uVar9 = param_1[10];
              uVar2 = param_1[0xc];
              lVar8 = param_2[9];
              uVar6 = param_2[8];
              uVar12 = param_2[0xb];
              uVar10 = param_2[10];
              uVar5 = param_2[0xc];
              uStack_110 = uVar6;
              lStack_108 = lVar8;
              uStack_100 = uVar10;
              uStack_f8 = uVar12;
              uStack_f0 = uVar5;
              uStack_e0 = uVar4;
              uStack_d8 = uVar7;
              uStack_d0 = uVar9;
              uStack_c8 = uVar11;
              uStack_c0 = uVar2;
              if (uVar7 == 0) {
                if (lVar8 == 0) {
                  FUN_10164bf58(&uStack_e0,&uStack_90);
                  FUN_10164bf58(&uStack_110,&uStack_90);
                  FUN_10164bf0c(uVar4,0,uVar9,uVar11,uVar2);
LAB_10164da80:
                  uVar2 = param_1[6];
                  FUN_100e25fcc(uVar2,param_1[7],param_2[6],param_2[7]);
                  uVar1 = (uint)uVar2;
                  goto LAB_10164da24;
                }
              }
              else if (lVar8 != 0) {
                uStack_b8 = uVar4;
                uStack_b0 = uVar7;
                uStack_a8 = uVar9;
                uStack_a0 = uVar11;
                uStack_98 = uVar2;
                uStack_90 = uVar6;
                lStack_88 = lVar8;
                uStack_80 = uVar10;
                uStack_78 = uVar12;
                uStack_70 = uVar5;
                FUN_10164bf58(&uStack_e0,auStack_138);
                FUN_10164bf58(&uStack_110,auStack_138);
                puVar3 = &uStack_b8;
                func_0x000101672d1c(puVar3,&uStack_90);
                FUN_10164bf0c(uVar6,lVar8,uVar10,uVar12,uVar5);
                FUN_10164bf0c(uVar4,uVar7,uVar9,uVar11,uVar2);
                if (((ulong)puVar3 & 1) != 0) goto LAB_10164da80;
                goto LAB_10164da20;
              }
              FUN_10164bf58(&uStack_e0,&uStack_90);
              FUN_10164bf58(&uStack_110,&uStack_90);
              FUN_10164bf0c(uVar4,uVar7,uVar9,uVar11,uVar2);
              FUN_10164bf0c(uVar6,lVar8,uVar10,uVar12,uVar5);
            }
          }
        }
        else if (uVar2 == 1) goto LAB_10164d8c8;
      }
      else if (uVar4 == 2) {
        if (uVar2 == 2) goto LAB_10164d8c8;
      }
      else if (uVar2 == 3) goto LAB_10164d8c8;
    }
    else if (uVar2 == uVar4) goto LAB_10164d8c8;
  }
LAB_10164da20:
  uVar1 = 0;
LAB_10164da24:
  return uVar1 & 1;
}



/* Entry: 10164d2b4; end: 10164d30f;  */

void FUN_10164d2b4(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8();
  *param_1 = puVar1;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[4] = 0;
  param_1[5] = 0xe000000000000000;
  param_1[7] = 0xc000000000000000;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  return;
}



/* Entry: 10164d310; end: 10164d333;  */

undefined1  [16] FUN_10164d310(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010efb3df0;
  auVar1._0_8_ = 0xd000000000000026;
  return auVar1;
}



/* Entry: 10164d334; end: 10164d363;  */

undefined1  [16] FUN_10164d334(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x30);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38));
  return auVar1;
}



/* Entry: 10164d364; end: 10164d397;  */

void FUN_10164d364(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  return;
}



/* Entry: 10164d398; end: 10164d3ab;  */

undefined1  [16] FUN_10164d398(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x30;
  auVar1._0_8_ = 0x10164d3a8;
  return auVar1;
}



/* Entry: 10164d3ac; end: 10164d3bf;  */

void FUN_10164d3ac(void)

{
  FUN_10164cf78();
  return;
}



/* Entry: 10164d3c0; end: 10164d407;  */

void FUN_10164d3c0(void)

{
  FUN_10164d0e4();
  return;
}



/* Entry: 10164d408; end: 10164d40b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10164d408(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10164d40c; end: 10164d443;  */

uint FUN_10164d40c(long param_1,long param_2)

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
  FUN_10164e1b0();
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



/* Entry: 10164d444; end: 10164d4ab;  */

uint FUN_10164d444(undefined8 *param_1)

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
  FUN_10164d850(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 10164d4ac; end: 10164d54b;  */

/* WARNING: Possible PIC construction at 0x00010164d4f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010164d508: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010164d4fc) */
/* WARNING: Removing unreachable block (ram,0x00010164d50c) */

void FUN_10164d4ac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbc9c8 != -1) {
    func_0x000107c61568(0x112dbc9c8,FUN_10164cf30);
  }
  uVar5 = uRam0000000113802270;
  uVar4 = uRam0000000113802268;
  uVar3 = uRam0000000113802260;
  uVar2 = uRam0000000113802258;
  uVar1 = uRam0000000113802250;
  *param_1 = uRam0000000113802248;
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



/* Entry: 10164d54c; end: 10164d587;  */

void FUN_10164d54c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbca20;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbca20,&UNK_10d974340);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10164d588; end: 10164d6b3;  */

void FUN_10164d588(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10164d6b4; end: 10164d763;  */

uint FUN_10164d6b4(undefined8 *param_1,undefined8 *param_2)

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
  FUN_10164d850(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 10164d764; end: 10164d803;  */

/* WARNING: Possible PIC construction at 0x00010164d7b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010164d7c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010164d7b4) */
/* WARNING: Removing unreachable block (ram,0x00010164d7c4) */

void FUN_10164d764(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbc9e0 != -1) {
    func_0x000107c61568(0x112dbc9e0,0x10164d71c);
  }
  uVar5 = uRam00000001138022a0;
  uVar4 = uRam0000000113802298;
  uVar3 = uRam0000000113802290;
  uVar2 = uRam0000000113802288;
  uVar1 = uRam0000000113802280;
  *param_1 = uRam0000000113802278;
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



/* Entry: 10164d804; end: 10164d80f;  */

void FUN_10164d804(void)

{
  return;
}



/* Entry: 10164d810; end: 10164d84f;  */

void FUN_10164d810(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbc9d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d974100;
  func_0x000107c61520(&DAT_10d974100,&UNK_1103edb30);
  puRam0000000112dbc9d0 = puVar1;
  return;
}



/* Entry: 10164d850; end: 10164da8f;  */

uint FUN_10164d850(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined1 auStack_138 [40];
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar2 = *param_1;
  func_0x000101058cd4(uVar2,*param_2);
  if (((uVar2 & 1) != 0) && ((int)param_1[1] == *(int *)(param_2 + 1))) {
    uVar2 = param_1[2];
    uVar4 = param_2[2];
    if (*(char *)(param_2 + 3) == '\x01') {
      if ((long)uVar4 < 2) {
        if (uVar4 == 0) {
          if (uVar2 == 0) {
LAB_10164d8c8:
            uVar2 = param_1[4];
            if (((uVar2 == param_2[4]) && (param_1[5] == param_2[5])) ||
               (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
              uVar7 = param_1[9];
              uVar4 = param_1[8];
              uVar11 = param_1[0xb];
              uVar9 = param_1[10];
              uVar2 = param_1[0xc];
              lVar8 = param_2[9];
              uVar6 = param_2[8];
              uVar12 = param_2[0xb];
              uVar10 = param_2[10];
              uVar5 = param_2[0xc];
              uStack_110 = uVar6;
              lStack_108 = lVar8;
              uStack_100 = uVar10;
              uStack_f8 = uVar12;
              uStack_f0 = uVar5;
              uStack_e0 = uVar4;
              uStack_d8 = uVar7;
              uStack_d0 = uVar9;
              uStack_c8 = uVar11;
              uStack_c0 = uVar2;
              if (uVar7 == 0) {
                if (lVar8 == 0) {
                  FUN_10164bf58(&uStack_e0,&uStack_90);
                  FUN_10164bf58(&uStack_110,&uStack_90);
                  FUN_10164bf0c(uVar4,0,uVar9,uVar11,uVar2);
LAB_10164da80:
                  uVar2 = param_1[6];
                  FUN_100e25fcc(uVar2,param_1[7],param_2[6],param_2[7]);
                  uVar1 = (uint)uVar2;
                  goto LAB_10164da24;
                }
              }
              else if (lVar8 != 0) {
                uStack_b8 = uVar4;
                uStack_b0 = uVar7;
                uStack_a8 = uVar9;
                uStack_a0 = uVar11;
                uStack_98 = uVar2;
                uStack_90 = uVar6;
                lStack_88 = lVar8;
                uStack_80 = uVar10;
                uStack_78 = uVar12;
                uStack_70 = uVar5;
                FUN_10164bf58(&uStack_e0,auStack_138);
                FUN_10164bf58(&uStack_110,auStack_138);
                puVar3 = &uStack_b8;
                func_0x000101672d1c(puVar3,&uStack_90);
                FUN_10164bf0c(uVar6,lVar8,uVar10,uVar12,uVar5);
                FUN_10164bf0c(uVar4,uVar7,uVar9,uVar11,uVar2);
                if (((ulong)puVar3 & 1) != 0) goto LAB_10164da80;
                goto LAB_10164da20;
              }
              FUN_10164bf58(&uStack_e0,&uStack_90);
              FUN_10164bf58(&uStack_110,&uStack_90);
              FUN_10164bf0c(uVar4,uVar7,uVar9,uVar11,uVar2);
              FUN_10164bf0c(uVar6,lVar8,uVar10,uVar12,uVar5);
            }
          }
        }
        else if (uVar2 == 1) goto LAB_10164d8c8;
      }
      else if (uVar4 == 2) {
        if (uVar2 == 2) goto LAB_10164d8c8;
      }
      else if (uVar2 == 3) goto LAB_10164d8c8;
    }
    else if (uVar2 == uVar4) goto LAB_10164d8c8;
  }
LAB_10164da20:
  uVar1 = 0;
LAB_10164da24:
  return uVar1 & 1;
}



/* Entry: 10164da90; end: 10164dacf;  */

void FUN_10164da90(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbc9d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d974270;
  func_0x000107c61520(&UNK_10d974270,&UNK_1103eda88);
  puRam0000000112dbc9d8 = puVar1;
  return;
}



/* Entry: 10164dad0; end: 10164dae3;  */

void FUN_10164dad0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10164dae4();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10164db24)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10164dae4; end: 10164db63;  */

void FUN_10164dae4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbc9e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d974198;
  func_0x000107c61520(&UNK_10d974198,&UNK_1103edb30);
  puRam0000000112dbc9e8 = puVar1;
  return;
}



/* Entry: 10164db64; end: 10164db67;  */

void FUN_10164db64(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112dbc9f8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112dbca00;
  func_0x00010002969c(0x112dbca00,&UNK_10d974120);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112dbc9f8 = puVar2;
  return;
}



/* Entry: 10164db68; end: 10164dbb7;  */

void FUN_10164db68(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112dbc9f8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112dbca00;
  func_0x00010002969c(0x112dbca00,&UNK_10d974120);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112dbc9f8 = puVar2;
  return;
}



/* Entry: 10164dbb8; end: 10164dbbb;  */

void FUN_10164dbb8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbca08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9741d8;
  func_0x000107c61520(&UNK_10d9741d8,&UNK_1103edb30);
  puRam0000000112dbca08 = puVar1;
  return;
}



/* Entry: 10164dbbc; end: 10164dbfb;  */

void FUN_10164dbbc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbca08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9741d8;
  func_0x000107c61520(&UNK_10d9741d8,&UNK_1103edb30);
  puRam0000000112dbca08 = puVar1;
  return;
}



/* Entry: 10164dbfc; end: 10164dc1f;  */

void FUN_10164dbfc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10164dc20();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10164dc20; end: 10164dc5f;  */

void FUN_10164dc20(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbca10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d974248;
  func_0x000107c61520(&UNK_10d974248,&UNK_1103eda88);
  puRam0000000112dbca10 = puVar1;
  return;
}



/* Entry: 10164dc60; end: 10164dc73;  */

void FUN_10164dc60(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10164da90();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10164ae74)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10164dc74; end: 10164dca3;  */

void FUN_10164dc74(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10164dca4; end: 10164dca7;  */

void FUN_10164dca4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbca18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9742b0;
  func_0x000107c61520(&UNK_10d9742b0,&UNK_1103eda88);
  puRam0000000112dbca18 = puVar1;
  return;
}



/* Entry: 10164dca8; end: 10164dce7;  */

void FUN_10164dca8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbca18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9742b0;
  func_0x000107c61520(&UNK_10d9742b0,&UNK_1103eda88);
  puRam0000000112dbca18 = puVar1;
  return;
}



/* Entry: 10164dce8; end: 10164dd6b;  */

long FUN_10164dce8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10164dd6c; end: 10164de33;  */

undefined8 * FUN_10164dd6c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar4 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar4;
  uVar3 = param_2[6];
  uVar2 = param_2[7];
  func_0x000107c61434();
  func_0x000107c61434(uVar4);
  func_0x00010006c00c(uVar3,uVar2);
  param_1[6] = uVar3;
  param_1[7] = uVar2;
  lVar1 = param_2[9];
  if (lVar1 == 0) {
    uVar3 = param_2[8];
    uVar2 = param_2[0xb];
    uVar4 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar3;
    param_1[0xb] = uVar2;
    param_1[10] = uVar4;
    param_1[0xc] = param_2[0xc];
  }
  else {
    param_1[8] = param_2[8];
    param_1[9] = lVar1;
    uVar3 = param_2[10];
    uVar4 = param_2[0xb];
    param_1[10] = uVar3;
    uVar2 = param_2[0xc];
    func_0x000107c61434();
    func_0x000107c61434(uVar3);
    func_0x00010006c00c(uVar4,uVar2);
    param_1[0xb] = uVar4;
    param_1[0xc] = uVar2;
  }
  return param_1;
}



/* Entry: 10164de34; end: 10164df9b;  */

undefined8 * FUN_10164de34(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  uVar1 = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[2] = uVar1;
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[6];
  uVar3 = param_2[7];
  func_0x00010006c00c(uVar1,uVar3);
  uVar4 = param_1[6];
  uVar5 = param_1[7];
  param_1[6] = uVar1;
  param_1[7] = uVar3;
  func_0x00010006c090(uVar4,uVar5);
  lVar2 = param_1[9];
  if (lVar2 == 0) {
    if (param_2[9] == 0) {
      uVar4 = param_2[9];
      uVar1 = param_2[8];
      uVar5 = param_2[0xb];
      uVar3 = param_2[10];
      param_1[0xc] = param_2[0xc];
      param_1[9] = uVar4;
      param_1[8] = uVar1;
      param_1[0xb] = uVar5;
      param_1[10] = uVar3;
    }
    else {
      param_1[8] = param_2[8];
      param_1[9] = param_2[9];
      uVar3 = param_2[10];
      param_1[10] = uVar3;
      uVar1 = param_2[0xb];
      uVar4 = param_2[0xc];
      func_0x000107c61434();
      func_0x000107c61434(uVar3);
      func_0x00010006c00c(uVar1,uVar4);
      param_1[0xb] = uVar1;
      param_1[0xc] = uVar4;
    }
  }
  else if (param_2[9] == 0) {
    FUN_10164cb58(param_1 + 8);
    uVar1 = param_2[0xc];
    uVar5 = param_2[8];
    uVar3 = param_2[0xb];
    uVar4 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar5;
    param_1[0xb] = uVar3;
    param_1[10] = uVar4;
    param_1[0xc] = uVar1;
  }
  else {
    param_1[8] = param_2[8];
    param_1[9] = param_2[9];
    func_0x000107c61434();
    func_0x000107c6142c(lVar2);
    uVar1 = param_1[10];
    param_1[10] = param_2[10];
    func_0x000107c61434();
    func_0x000107c6142c(uVar1);
    uVar1 = param_2[0xb];
    uVar3 = param_2[0xc];
    func_0x00010006c00c(uVar1,uVar3);
    uVar4 = param_1[0xb];
    uVar5 = param_1[0xc];
    param_1[0xb] = uVar1;
    param_1[0xc] = uVar3;
    func_0x00010006c090(uVar4,uVar5);
  }
  return param_1;
}



/* Entry: 10164df9c; end: 10164e05f;  */

undefined8 * FUN_10164df9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6142c(uVar1);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_1[6];
  uVar2 = param_1[7];
  uVar4 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  if (param_1[9] != 0) {
    lVar3 = param_2[9];
    if (lVar3 != 0) {
      param_1[8] = param_2[8];
      param_1[9] = lVar3;
      func_0x000107c6142c();
      uVar1 = param_1[10];
      param_1[10] = param_2[10];
      func_0x000107c6142c(uVar1);
      uVar1 = param_1[0xb];
      uVar2 = param_1[0xc];
      uVar4 = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      param_1[0xb] = uVar4;
      func_0x00010006c090(uVar1,uVar2);
      return param_1;
    }
    FUN_10164cb58(param_1 + 8);
  }
  uVar1 = param_2[8];
  uVar4 = param_2[0xb];
  uVar2 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar1;
  param_1[0xb] = uVar4;
  param_1[10] = uVar2;
  param_1[0xc] = param_2[0xc];
  return param_1;
}



/* Entry: 10164e060; end: 10164e1af;  */

int FUN_10164e060(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xd] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10164e1b0; end: 10164e1ef;  */

void FUN_10164e1b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbca28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d97421c;
  func_0x000107c61520(&DAT_10d97421c,&UNK_1103eda88);
  puRam0000000112dbca28 = puVar1;
  return;
}



/* Entry: 10164e1f0; end: 10164e243;  */

void FUN_10164e1f0(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  param_1[4] = 0xc000000000000000;
  param_1[3] = 0;
  return;
}



/* Entry: 10164e244; end: 10164e357;  */

void FUN_10164e244(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_128 [104];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
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
  
  uStack_a8 = *(undefined8 *)(unaff_x20 + 0x80);
  lStack_b0 = *(long *)(unaff_x20 + 0x78);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0xa0);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x98);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0xb0);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0xa8);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0xc0);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0xb8);
  uStack_60 = *(undefined8 *)(unaff_x20 + 200);
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_c0 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x90);
  uStack_a0 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar1 = uStack_c0;
  uVar2 = uStack_b8;
  uVar3 = uStack_68;
  lVar4 = lStack_b0;
  uVar5 = uStack_60;
  uStack_170 = uStack_88;
  uStack_168 = uStack_80;
  uStack_160 = uStack_a8;
  uStack_158 = uStack_a0;
  uStack_150 = uStack_98;
  uStack_148 = uStack_90;
  uStack_140 = uStack_78;
  uStack_138 = uStack_70;
  if (lStack_b0 == 0) {
    uStack_138 = 0;
    uStack_140 = 0xf000000000000000;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0xc000000000000000;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
    lVar4 = -0x2000000000000000;
    uVar5 = 0xf000000000000000;
  }
  FUN_10165596c(&uStack_c0,auStack_128,0x112dbca30,&UNK_10d974420);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = lVar4;
  param_1[6] = uStack_148;
  param_1[5] = uStack_150;
  param_1[4] = uStack_158;
  param_1[3] = uStack_160;
  param_1[10] = uStack_138;
  param_1[9] = uStack_140;
  param_1[8] = uStack_168;
  param_1[7] = uStack_170;
  param_1[0xb] = uVar3;
  param_1[0xc] = uVar5;
  return;
}



/* Entry: 10164e358; end: 10164e497;  */

bool FUN_10164e358(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(ulong *)(unaff_x20 + 0x48);
  uVar4 = uVar3 >> 0x3c;
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  uStack_40 = uVar3;
  if (uVar4 < 0xf) {
    FUN_10165596c(&uStack_50,auStack_68,0x112db6f48,&UNK_10d969b40);
    func_0x000100cb725c(uVar1,uVar2,uVar3);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0xf000000000000000;
  }
  else {
    FUN_10165596c(&uStack_50,auStack_68,0x112db6f48,&UNK_10d969b40);
  }
  func_0x000100cb725c(uVar1,uVar2,uVar3);
  return uVar4 < 0xf;
}



/* Entry: 10164e498; end: 10164e4e3;  */

undefined1  [16] FUN_10164e498(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x30,auStack_38,0,0);
  auVar1 = *(undefined1 (*) [16])(param_3 + 0x30);
  func_0x000107c61434(*(undefined8 *)(param_3 + 0x38));
  return auVar1;
}



/* Entry: 10164e4e4; end: 10164e6bf;  */

void FUN_10164e4e4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
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
  undefined1 auStack_268 [240];
  undefined1 auStack_178 [24];
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
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
  
  func_0x000107c61428(param_4 + 0x40,auStack_178,0,0);
  uStack_98 = *(undefined8 *)(param_4 + 0x108);
  uStack_a0 = *(undefined8 *)(param_4 + 0x100);
  uStack_88 = *(undefined8 *)(param_4 + 0x118);
  uStack_90 = *(undefined8 *)(param_4 + 0x110);
  uStack_78 = *(undefined8 *)(param_4 + 0x128);
  uStack_80 = *(undefined8 *)(param_4 + 0x120);
  uStack_d8 = *(undefined8 *)(param_4 + 200);
  uStack_e0 = *(undefined8 *)(param_4 + 0xc0);
  uStack_c8 = *(undefined8 *)(param_4 + 0xd8);
  uStack_d0 = *(undefined8 *)(param_4 + 0xd0);
  uStack_b8 = *(undefined8 *)(param_4 + 0xe8);
  uStack_c0 = *(undefined8 *)(param_4 + 0xe0);
  uStack_a8 = *(undefined8 *)(param_4 + 0xf8);
  uStack_b0 = *(undefined8 *)(param_4 + 0xf0);
  uStack_118 = *(undefined8 *)(param_4 + 0x88);
  uStack_120 = *(undefined8 *)(param_4 + 0x80);
  uStack_108 = *(undefined8 *)(param_4 + 0x98);
  puStack_110 = *(undefined **)(param_4 + 0x90);
  uStack_f8 = *(undefined8 *)(param_4 + 0xa8);
  uStack_100 = *(undefined8 *)(param_4 + 0xa0);
  uStack_e8 = *(undefined8 *)(param_4 + 0xb8);
  uStack_f0 = *(undefined8 *)(param_4 + 0xb0);
  uStack_158 = *(undefined8 *)(param_4 + 0x48);
  puStack_160 = *(undefined **)(param_4 + 0x40);
  uStack_148 = *(undefined8 *)(param_4 + 0x58);
  uStack_150 = *(undefined8 *)(param_4 + 0x50);
  uStack_138 = *(undefined8 *)(param_4 + 0x68);
  uStack_140 = *(undefined8 *)(param_4 + 0x60);
  uStack_128 = *(undefined8 *)(param_4 + 0x78);
  uStack_130 = *(undefined8 *)(param_4 + 0x70);
  iVar1 = (int)&puStack_160;
  FUN_101655954();
  if (iVar1 == 1) {
    uStack_278 = 0;
    uStack_270 = 0;
    uStack_288 = 0;
    uStack_280 = 0;
    uStack_290 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0xc000000000000000;
    uStack_2a0 = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_2f8 = 0;
    uStack_300 = 0;
    uVar2 = 0xf000000000000000;
    uVar3 = 0xe000000000000000;
    uVar4 = 0xe000000000000000;
    uVar5 = 0xe000000000000000;
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar7 = 0xe000000000000000;
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar9 = 0;
    uVar10 = 0;
  }
  else {
    uStack_278 = uStack_148;
    uStack_270 = uStack_158;
    uStack_288 = uStack_128;
    uStack_280 = uStack_138;
    uStack_290 = uStack_120;
    uStack_2a8 = uStack_f0;
    uStack_2b0 = uStack_f8;
    uStack_298 = uStack_100;
    uStack_2a0 = uStack_108;
    uStack_2c8 = uStack_d0;
    uStack_2d0 = uStack_d8;
    uStack_2b8 = uStack_e0;
    uStack_2c0 = uStack_e8;
    uStack_2e8 = uStack_b0;
    uStack_2f0 = uStack_b8;
    uStack_2d8 = uStack_c0;
    uStack_2e0 = uStack_c8;
    uStack_308 = uStack_90;
    uStack_310 = uStack_98;
    uStack_2f8 = uStack_a0;
    uStack_300 = uStack_a8;
    uVar2 = uStack_78;
    uVar3 = uStack_140;
    uVar4 = uStack_130;
    uVar5 = uStack_118;
    puVar6 = puStack_160;
    uVar7 = uStack_150;
    puVar8 = puStack_110;
    uVar9 = uStack_88;
    uVar10 = uStack_80;
  }
  FUN_10165596c(&puStack_160,auStack_268,0x112dbca48,&UNK_10d974438);
  *param_1 = puVar6;
  param_1[1] = uStack_270;
  param_1[2] = uVar7;
  param_1[3] = uStack_278;
  param_1[4] = uVar3;
  param_1[5] = uStack_280;
  param_1[6] = uVar4;
  param_1[7] = uStack_288;
  param_1[8] = uStack_290;
  param_1[9] = uVar5;
  param_1[10] = puVar8;
  param_1[0xe] = uStack_2a8;
  param_1[0xd] = uStack_2b0;
  param_1[0xc] = uStack_298;
  param_1[0xb] = uStack_2a0;
  param_1[0x12] = uStack_2c8;
  param_1[0x11] = uStack_2d0;
  param_1[0x10] = uStack_2b8;
  param_1[0xf] = uStack_2c0;
  param_1[0x16] = uStack_2e8;
  param_1[0x15] = uStack_2f0;
  param_1[0x14] = uStack_2d8;
  param_1[0x13] = uStack_2e0;
  param_1[0x1a] = uStack_308;
  param_1[0x19] = uStack_310;
  param_1[0x18] = uStack_2f8;
  param_1[0x17] = uStack_300;
  param_1[0x1b] = uVar9;
  param_1[0x1c] = uVar10;
  param_1[0x1d] = uVar2;
  return;
}



/* Entry: 10164e6c0; end: 10164e6ff;  */

void FUN_10164e6c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x148,auStack_38,0,0);
  func_0x000107c61434(*(undefined8 *)(param_3 + 0x148));
  return;
}



/* Entry: 10164e700; end: 10164e747;  */

void FUN_10164e700(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d975200,0x1a,2);
  uRam00000001138022b0 = uStack_38;
  uRam00000001138022a8 = uStack_40;
  uRam00000001138022c0 = uStack_28;
  uRam00000001138022b8 = uStack_30;
  uRam00000001138022d0 = uStack_18;
  uRam00000001138022c8 = uStack_20;
  return;
}



/* Entry: 10164e748; end: 10164e81b;  */

/* WARNING: Removing unreachable block (ram,0x00010164e818) */

void FUN_10164e748(undefined8 param_1,long param_2,long param_3)

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
        pcVar4 = *(code **)(param_3 + 0x1a0);
        FUN_101656030();
        (*pcVar4)();
      }
      else if (lVar1 == 2) {
        (**(code **)(param_3 + 0x168))(unaff_x20 + 8,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 10164e81c; end: 10164e907;  */

void FUN_10164e81c(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long *unaff_x20;
  long unaff_x21;
  long lVar7;
  code *pcVar8;
  
  lVar7 = *unaff_x20;
  if (*(long *)(lVar7 + 0x10) != 0) {
    pcVar8 = *(code **)(param_3 + 0x118);
    uVar3 = param_1;
    FUN_101656030();
    (*pcVar8)(lVar7,1,&UNK_1103ee3d0,uVar3,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  lVar7 = unaff_x20[1];
  uVar1 = unaff_x20[2];
  uVar2 = (uint)(uVar1 >> 0x20);
  uVar4 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar4 != 0) {
      lVar5 = (long)(int)lVar7;
      lVar6 = lVar7 >> 0x20;
      goto LAB_10164e8bc;
    }
    if ((uVar1 & 0xff000000000000) == 0) goto LAB_10164e8dc;
  }
  else {
    if (uVar4 != 2) goto LAB_10164e8dc;
    lVar5 = *(long *)(lVar7 + 0x10);
    lVar6 = *(long *)(lVar7 + 0x18);
LAB_10164e8bc:
    if (lVar5 == lVar6) goto LAB_10164e8dc;
  }
  (**(code **)(param_3 + 0x78))(lVar7,uVar1,2,param_2,param_3);
  if (unaff_x21 != 0) {
    return;
  }
LAB_10164e8dc:
  func_0x000100076224(param_1,unaff_x20[3],unaff_x20[4],param_2,param_3);
  return;
}



/* Entry: 10164e908; end: 10164e963;  */

uint FUN_10164e908(long *param_1,long *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_320 [240];
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
  
  lVar5 = *param_1;
  lVar4 = *param_2;
  lVar6 = *(long *)(lVar5 + 0x10);
  if (lVar6 == *(long *)(lVar4 + 0x10)) {
    if (lVar6 != 0 && lVar5 != lVar4) {
      puVar7 = (undefined8 *)(lVar5 + 0x20);
      puVar8 = (undefined8 *)(lVar4 + 0x20);
      do {
        uStack_228 = puVar7[1];
        uStack_230 = *puVar7;
        uStack_218 = puVar7[3];
        uStack_220 = puVar7[2];
        uStack_208 = puVar7[5];
        uStack_210 = puVar7[4];
        uStack_1f8 = puVar7[7];
        uStack_200 = puVar7[6];
        uStack_1e8 = puVar7[9];
        uStack_1f0 = puVar7[8];
        uStack_1d8 = puVar7[0xb];
        uStack_1e0 = puVar7[10];
        uStack_1c8 = puVar7[0xd];
        uStack_1d0 = puVar7[0xc];
        uStack_1b8 = puVar7[0xf];
        uStack_1c0 = puVar7[0xe];
        uStack_1a8 = puVar7[0x11];
        uStack_1b0 = puVar7[0x10];
        uStack_198 = puVar7[0x13];
        uStack_1a0 = puVar7[0x12];
        uStack_188 = puVar7[0x15];
        uStack_190 = puVar7[0x14];
        uStack_178 = puVar7[0x17];
        uStack_180 = puVar7[0x16];
        uStack_168 = puVar7[0x19];
        uStack_170 = puVar7[0x18];
        uStack_158 = puVar7[0x1b];
        uStack_160 = puVar7[0x1a];
        uStack_148 = puVar7[0x1d];
        uStack_150 = puVar7[0x1c];
        uStack_138 = puVar8[1];
        uStack_140 = *puVar8;
        uStack_128 = puVar8[3];
        uStack_130 = puVar8[2];
        uStack_118 = puVar8[5];
        uStack_120 = puVar8[4];
        uStack_108 = puVar8[7];
        uStack_110 = puVar8[6];
        uStack_f8 = puVar8[9];
        uStack_100 = puVar8[8];
        uStack_e8 = puVar8[0xb];
        uStack_f0 = puVar8[10];
        uStack_d8 = puVar8[0xd];
        uStack_e0 = puVar8[0xc];
        uStack_c8 = puVar8[0xf];
        uStack_d0 = puVar8[0xe];
        uStack_b8 = puVar8[0x11];
        uStack_c0 = puVar8[0x10];
        uStack_a8 = puVar8[0x13];
        uStack_b0 = puVar8[0x12];
        uStack_98 = puVar8[0x15];
        uStack_a0 = puVar8[0x14];
        uStack_88 = puVar8[0x17];
        uStack_90 = puVar8[0x16];
        uStack_78 = puVar8[0x19];
        uStack_80 = puVar8[0x18];
        uStack_68 = puVar8[0x1b];
        uStack_70 = puVar8[0x1a];
        uStack_58 = puVar8[0x1d];
        uStack_60 = puVar8[0x1c];
        FUN_101553fa0(&uStack_230,auStack_320);
        FUN_101553fa0(&uStack_140,auStack_320);
        puVar2 = &uStack_230;
        FUN_101655a1c(puVar2,&uStack_140);
        func_0x000101554010(&uStack_140);
        func_0x000101554010(&uStack_230);
        if (((ulong)puVar2 & 1) == 0) goto LAB_101656238;
        puVar8 = puVar8 + 0x1e;
        puVar7 = puVar7 + 0x1e;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    uVar3 = param_1[1];
    FUN_100e25fcc(uVar3,param_1[2],param_2[1],param_2[2]);
    if ((uVar3 & 1) != 0) {
      lVar6 = param_1[3];
      FUN_100e25fcc(lVar6,param_1[4],param_2[3],param_2[4]);
      uVar1 = (uint)lVar6;
      goto LAB_10165623c;
    }
  }
LAB_101656238:
  uVar1 = 0;
LAB_10165623c:
  return uVar1 & 1;
}



/* Entry: 10164e964; end: 10164e98b;  */

void FUN_10164e964(void)

{
  FUN_10164e748();
  return;
}



/* Entry: 10164e98c; end: 10164e9c3;  */

uint FUN_10164e98c(long param_1,long param_2)

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
  func_0x000101658f84();
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



/* Entry: 10164e9c4; end: 10164ea0b;  */

uint FUN_10164e9c4(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
  uStack_20 = param_1[4];
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_50 = unaff_x20[4];
  FUN_1016560fc(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10164ea0c; end: 10164eaab;  */

/* WARNING: Possible PIC construction at 0x00010164ea58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010164ea68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010164ea5c) */
/* WARNING: Removing unreachable block (ram,0x00010164ea6c) */

void FUN_10164ea0c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbca68 != -1) {
    func_0x000107c61568(0x112dbca68,FUN_10164e700);
  }
  uVar5 = uRam00000001138022d0;
  uVar4 = uRam00000001138022c8;
  uVar3 = uRam00000001138022c0;
  uVar2 = uRam00000001138022b8;
  uVar1 = uRam00000001138022b0;
  *param_1 = uRam00000001138022a8;
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



/* Entry: 10164eaac; end: 10164eabf;  */

void FUN_10164eaac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbcdf8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbcdf8,&UNK_10d974f10);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10164eac0; end: 10164ebcb;  */

void FUN_10164eac0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a0 [72];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = *unaff_x20;
  uStack_48 = unaff_x20[2];
  uStack_50 = unaff_x20[1];
  uStack_38 = unaff_x20[4];
  uStack_40 = unaff_x20[3];
  func_0x000107c6068c(auStack_a0,0);
  func_0x000107c5fa50(auStack_a0,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10164ebcc; end: 10164ec5b;  */

uint FUN_10164ebcc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = param_2[4];
  FUN_1016560fc(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10164ec5c; end: 10164ec93;  */

undefined1  [16] FUN_10164ec5c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010efb3e70;
  auVar1._0_8_ = 0xd00000000000002e;
  return auVar1;
}



/* Entry: 10164ec94; end: 10164ecdb;  */

void FUN_10164ec94(void)

{
  FUN_101652ccc();
  return;
}



/* Entry: 10164ecdc; end: 10164ed13;  */

uint FUN_10164ecdc(long param_1,long param_2)

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
  func_0x000101658f44();
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



/* Entry: 10164ed14; end: 10164ed5b;  */

uint FUN_10164ed14(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
  uStack_20 = param_1[4];
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_50 = unaff_x20[4];
  FUN_10165636c(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10164ed5c; end: 10164edfb;  */

/* WARNING: Possible PIC construction at 0x00010164eda8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010164edb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010164edac) */
/* WARNING: Removing unreachable block (ram,0x00010164edbc) */

void FUN_10164ed5c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbca80 != -1) {
    func_0x000107c61568(0x112dbca80,0x10164ec14);
  }
  uVar5 = uRam0000000113802300;
  uVar4 = uRam00000001138022f8;
  uVar3 = uRam00000001138022f0;
  uVar2 = uRam00000001138022e8;
  uVar1 = uRam00000001138022e0;
  *param_1 = uRam00000001138022d8;
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



/* Entry: 10164edfc; end: 10164ee0f;  */

void FUN_10164edfc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbcde8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbcde8,&UNK_10d974f08);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10164ee10; end: 10164ee47;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10164ee10(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = param_1;
  func_0x000101656560();
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (*(code *)puVar1[9])(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,puVar1);
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



/* Entry: 10164ee48; end: 10164eed7;  */

uint FUN_10164ee48(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = param_2[4];
  FUN_10165636c(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10164eed8; end: 10164f03f;  */

/* WARNING: Removing unreachable block (ram,0x00010164f03c) */

void FUN_10164eed8(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  long unaff_x21;
  code *pcVar5;
  
  pcVar5 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar5)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 4) {
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x150);
        }
        else {
          if (lVar1 == 2) {
            pcVar4 = *(code **)(param_3 + 0x1a0);
            func_0x000101656520();
            lVar2 = unaff_x20 + 0x10;
            puVar3 = &UNK_1103ee610;
            goto LAB_10164f028;
          }
          if (lVar1 != 3) goto LAB_10164ef60;
          pcVar4 = *(code **)(param_3 + 0x168);
        }
LAB_10164ef50:
        (*pcVar4)();
      }
      else {
        if (5 < lVar1) {
          if (lVar1 == 6) {
            pcVar4 = *(code **)(param_3 + 0x60);
          }
          else {
            if (lVar1 != 7) goto LAB_10164ef60;
            pcVar4 = *(code **)(param_3 + 0x150);
          }
          goto LAB_10164ef50;
        }
        if (lVar1 == 4) {
          pcVar4 = *(code **)(param_3 + 0x1a0);
          func_0x000101656560();
          lVar2 = unaff_x20 + 0x28;
          puVar3 = &UNK_1103ee2b0;
LAB_10164f028:
          (*pcVar4)(lVar2,puVar3,lVar1,param_2,param_3);
        }
        else if (lVar1 == 5) {
          pcVar4 = *(code **)(param_3 + 0x60);
          goto LAB_10164ef50;
        }
      }
LAB_10164ef60:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 10164f040; end: 10164f20b;  */

void FUN_10164f040(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar6;
  ulong uVar7;
  code *pcVar8;
  
  uVar7 = *unaff_x20;
  uVar1 = unaff_x20[1];
  uVar6 = uVar7 & 0xffffffffffff;
  if ((uVar1 & 0x2000000000000000) != 0) {
    uVar6 = uVar1 >> 0x38 & 0xf;
  }
  if ((uVar6 != 0) && ((**(code **)(param_3 + 0x70))(uVar7,uVar1,1,param_2,param_3), unaff_x21 != 0)
     ) {
    return;
  }
  uVar6 = unaff_x20[2];
  if (*(long *)(uVar6 + 0x10) != 0) {
    pcVar8 = *(code **)(param_3 + 0x118);
    func_0x000101656520();
    (*pcVar8)(uVar6,2,&UNK_1103ee610,uVar7,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  uVar6 = unaff_x20[3];
  uVar7 = unaff_x20[4];
  uVar2 = (uint)(uVar7 >> 0x20);
  uVar3 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar3 != 0) {
      lVar4 = (long)(int)uVar6;
      lVar5 = (long)uVar6 >> 0x20;
      goto LAB_10164f110;
    }
    if ((uVar7 & 0xff000000000000) == 0) goto LAB_10164f130;
  }
  else {
    if (uVar3 != 2) goto LAB_10164f130;
    lVar4 = *(long *)(uVar6 + 0x10);
    lVar5 = *(long *)(uVar6 + 0x18);
LAB_10164f110:
    if (lVar4 == lVar5) goto LAB_10164f130;
  }
  (**(code **)(param_3 + 0x78))(uVar6,uVar7,3,param_2,param_3);
  if (unaff_x21 != 0) {
    return;
  }
LAB_10164f130:
  uVar7 = unaff_x20[5];
  if (*(long *)(uVar7 + 0x10) != 0) {
    pcVar8 = *(code **)(param_3 + 0x118);
    func_0x000101656560();
    (*pcVar8)(uVar7,4,&UNK_1103ee2b0,uVar6,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (((unaff_x20[6] == 0) ||
      ((**(code **)(param_3 + 0x20))(unaff_x20[6],5,param_2,param_3), unaff_x21 == 0)) &&
     ((unaff_x20[7] == 0 ||
      ((**(code **)(param_3 + 0x20))(unaff_x20[7],6,param_2,param_3), unaff_x21 == 0)))) {
    uVar7 = unaff_x20[9];
    uVar6 = unaff_x20[8] & 0xffffffffffff;
    if ((uVar7 & 0x2000000000000000) != 0) {
      uVar6 = uVar7 >> 0x38 & 0xf;
    }
    if ((uVar6 == 0) ||
       ((**(code **)(param_3 + 0x70))(unaff_x20[8],uVar7,7,param_2,param_3), unaff_x21 == 0)) {
      func_0x000100076224(param_1,unaff_x20[10],unaff_x20[0xb],param_2,param_3);
    }
  }
  return;
}



/* Entry: 10164f20c; end: 10164f267;  */

/* WARNING: Possible PIC construction at 0x0001016562cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101656340: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000101656344) */
/* WARNING: Removing unreachable block (ram,0x0001016562d0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10164f20c(undefined8 *param_1,undefined8 *param_2)

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
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
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
  
  pbVar13 = (byte *)*param_1;
  pbVar16 = (byte *)param_1[1];
  pbVar17 = (byte *)*param_2;
  pbVar12 = (byte *)param_2[1];
  if (pbVar13 != pbVar17 || pbVar16 != pbVar12) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar13,pbVar16,pbVar17,pbVar12,0);
    return pbVar13;
  }
  uVar14 = param_1[2];
  FUN_101653854(uVar14,param_2[2]);
  if ((uVar14 & 1) != 0) {
    uVar14 = param_1[3];
    FUN_100e25fcc(uVar14,param_1[4],param_2[3],param_2[4]);
    if ((uVar14 & 1) != 0) {
      uVar14 = param_1[5];
      func_0x000101653d34(uVar14,param_2[5]);
      if ((((uVar14 & 1) != 0) && (param_1[6] == param_2[6])) && (param_1[7] == param_2[7])) {
        pbVar13 = (byte *)param_1[8];
        pbVar16 = (byte *)param_1[9];
        pbVar17 = (byte *)param_2[8];
        pbVar12 = (byte *)param_2[9];
        if ((pbVar13 == pbVar17) && (pbVar16 == pbVar12)) {
          pbVar10 = (byte *)param_1[10];
          pbVar25 = (byte *)param_1[0xb];
          lVar24 = param_2[10];
          uVar14 = param_2[0xb];
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
            uVar4 = (uint)((ulong)pbVar25 >> 0x20);
            uVar18 = uVar4 >> 0x1e;
            uVar5 = (uint)(uVar14 >> 0x20);
            uVar21 = uVar5 >> 0x1e;
            iVar8 = (int)pbVar10;
            pbVar15 = pbVar25;
            if ((ulong)pbVar25 >> 0x3e == 3) {
              uVar20 = 0;
              if (((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
                 ((uVar14 >> 0x3e < 3 ||
                  ((uVar20 = 0, lVar24 != 0 || (uVar14 != 0xc000000000000000))))))
              goto joined_r0x000100e26170;
LAB_100e26128:
              pbVar9 = (byte *)0x1;
            }
            else if (uVar4 >> 0x1e < 2) {
              if (uVar18 == 0) {
                uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
              }
              else {
                iVar19 = (int)((ulong)pbVar10 >> 0x20);
                if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                  (*pcVar6)();
                }
                uVar20 = (ulong)(iVar19 - iVar8);
              }
joined_r0x000100e26170:
              if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
              if (uVar21 == 0) {
                uVar22 = uVar14 >> 0x30 & 0xff;
                goto LAB_100e2608c;
              }
              iVar19 = (int)((ulong)lVar24 >> 0x20);
              if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
                (*pcVar6)();
              }
              if (uVar20 == (long)(iVar19 - (int)lVar24)) goto LAB_100e26094;
LAB_100e26154:
              pbVar9 = (byte *)0x0;
            }
            else {
              if (uVar18 == 2) {
                uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
                if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                  (*pcVar6)();
                }
                goto joined_r0x000100e26170;
              }
              uVar20 = 0;
              if (uVar21 < 2) goto LAB_100e26084;
LAB_100e26050:
              if (uVar21 == 2) {
                uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
                if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                  (*pcVar6)();
                }
LAB_100e2608c:
                if (uVar20 != uVar22) goto LAB_100e26154;
LAB_100e26094:
                if ((long)uVar20 < 1) goto LAB_100e26128;
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
                    puVar7[-0x68] = (char)pbVar25;
                    puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
                    puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
                    puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
                    puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
                    puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
                    pbVar15 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
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
                  unaff_x24 = pbVar25;
                  if (pbVar10 == (byte *)0x0) {
                    func_0x000107c5ec38();
                    pbVar10 = (byte *)0x0;
                  }
                  else {
                    pbVar15 = pbVar10;
                    func_0x000107c5ec3c();
                    if (SBORROW8((long)unaff_x25,(long)pbVar15)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                      (*pcVar6)();
                    }
                    pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar15);
                    func_0x000107c5ec38();
                    unaff_x19 = pbVar10;
                    if (pbVar10 != (byte *)0x0) {
                      if ((long)unaff_x23 <= (long)pbVar15) {
                        pbVar15 = unaff_x23;
                      }
                      pbVar15 = pbVar15 + (long)pbVar10;
                      goto LAB_100e262a4;
                    }
                  }
                  pbVar15 = (byte *)0x0;
                }
                else {
                  if (uVar18 != 2) {
                    *(undefined8 *)(puVar7 + -0x6a) = 0;
                    *(undefined8 *)(puVar7 + -0x70) = 0;
                    pbVar15 = puVar7 + -0x70;
                    goto LAB_100e26260;
                  }
                  lVar26 = *(long *)(pbVar10 + 0x10);
                  unaff_x24 = *(byte **)(pbVar10 + 0x18);
                  func_0x000107c5ec30();
                  pbVar15 = pbVar10;
                  if (pbVar10 != (byte *)0x0) {
                    func_0x000107c5ec3c();
                    if (SBORROW8(lVar26,(long)pbVar15)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                      (*pcVar6)();
                    }
                    pbVar10 = pbVar10 + (lVar26 - (long)pbVar15);
                  }
                  unaff_x23 = unaff_x24 + -lVar26;
                  if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                    (*pcVar6)();
                  }
                  func_0x000107c5ec38();
                  unaff_x19 = pbVar10;
                  unaff_x25 = pbVar25;
                  if (pbVar10 == (byte *)0x0) {
                    pbVar15 = (byte *)0x0;
                  }
                  else {
                    if ((long)unaff_x23 <= (long)pbVar15) {
                      pbVar15 = unaff_x23;
                    }
                    pbVar15 = pbVar15 + (long)pbVar10;
                  }
                }
LAB_100e262a4:
                unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
                unaff_x21 = 0;
                FUN_100e25bdc(puVar7 + -0x70,pbVar10,pbVar15,lVar24,uVar14);
                pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
                unaff_x22 = uVar14;
              }
              else {
                pbVar9 = (byte *)(ulong)(uVar20 == 0);
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
            pbVar13 = *(byte **)pbVar9;
            pbVar10 = *(byte **)(pbVar9 + 8);
            pbVar23 = *(byte **)(pbVar9 + 0x18);
            bVar27 = pbVar9[0x28];
            pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                               (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
            pbVar16 = pbVar10;
            if (bVar27 < 3) {
              if (bVar27 == 0) {
                if (pbVar15[0x28] == 0) {
                  lVar24 = *(long *)pbVar15;
                  uVar11 = 0;
                  FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                  func_0x000107c60118(pbVar13,lVar24,uVar11);
                  return (byte *)(ulong)((uint)pbVar13 & 1);
                }
                return (byte *)0x0;
              }
              if (bVar27 == 1) {
                if (pbVar15[0x28] != 1) {
                  return (byte *)0x0;
                }
                pbVar17 = *(byte **)(pbVar15 + 8);
                pbVar12 = *(byte **)(pbVar15 + 0x10);
                lVar24 = *(long *)pbVar15;
                uVar11 = 0;
                FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar13,lVar24,uVar11);
                if (((ulong)pbVar13 & 1) == 0) {
                  return (byte *)0x0;
                }
                pbVar13 = pbVar10;
                pbVar16 = pbVar25;
                if ((pbVar10 == pbVar17) && (pbVar25 == pbVar12)) {
                  return (byte *)0x1;
                }
              }
              else {
                if (pbVar15[0x28] != 2) {
                  return (byte *)0x0;
                }
                pbVar17 = *(byte **)pbVar15;
                pbVar12 = *(byte **)(pbVar15 + 8);
                lVar24 = *(long *)(pbVar15 + 0x18);
                if ((pbVar13 == pbVar17) && (pbVar10 == pbVar12)) {
                  if (((pbVar9[0x10] ^ pbVar15[0x10]) & 1) != 0) {
                    return (byte *)0x0;
                  }
                  if (pbVar23 != (byte *)0x0) {
                    if (lVar24 == 0) {
                      return (byte *)0x0;
                    }
                    FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                    func_0x000107c61174(lVar24);
                    func_0x000107c61174();
                    pbVar12 = pbVar23;
                    func_0x000107c60118();
                    func_0x000107c61170(pbVar23);
                    func_0x000107c61170(lVar24);
                    pbVar23 = pbVar12;
                    goto joined_r0x000100e266a4;
                  }
joined_r0x000100e26620:
                  if (lVar24 == 0) {
                    return (byte *)0x1;
                  }
                  return (byte *)0x0;
                }
              }
              break;
            }
            lVar26 = *(long *)(pbVar9 + 0x20);
            if (bVar27 < 5) {
              if (bVar27 != 3) {
                if (pbVar15[0x28] != 4) {
                  return (byte *)0x0;
                }
                pbVar17 = *(byte **)pbVar15;
                pbVar12 = *(byte **)(pbVar15 + 8);
                if (((pbVar13 == pbVar17) && (pbVar10 == pbVar12)) &&
                   (pbVar13 = pbVar25, pbVar16 = pbVar23, pbVar17 = *(byte **)(pbVar15 + 0x10),
                   pbVar12 = *(byte **)(pbVar15 + 0x18),
                   pbVar25 == *(byte **)(pbVar15 + 0x10) && pbVar23 == *(byte **)(pbVar15 + 0x18)))
                {
                  return (byte *)0x1;
                }
                break;
              }
              if (pbVar15[0x28] != 3) {
                return (byte *)0x0;
              }
              if ((uint)*pbVar15 != ((uint)pbVar13 & 0xff)) {
                return (byte *)0x0;
              }
              pbVar12 = *(byte **)(pbVar15 + 0x10);
              lVar24 = *(long *)(pbVar15 + 0x20);
              if (pbVar25 == (byte *)0x0) {
                if (pbVar12 != (byte *)0x0) {
                  return (byte *)0x0;
                }
              }
              else {
                if (pbVar12 == (byte *)0x0) {
                  return (byte *)0x0;
                }
                pbVar17 = *(byte **)(pbVar15 + 8);
                pbVar13 = pbVar10;
                pbVar16 = pbVar25;
                if ((pbVar10 != pbVar17) || (pbVar25 != pbVar12)) break;
              }
              if (lVar26 != 0) {
                if (lVar24 == 0) {
                  return (byte *)0x0;
                }
                if ((pbVar23 == *(byte **)(pbVar15 + 0x18)) && (lVar26 == lVar24)) {
                  return (byte *)0x1;
                }
                func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar15 + 0x18),lVar24,0);
joined_r0x000100e266a4:
                if (((ulong)pbVar23 & 1) == 0) {
                  return (byte *)0x0;
                }
                return (byte *)0x1;
              }
              goto joined_r0x000100e26620;
            }
            if (bVar27 != 5) {
              if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar13 == (byte *)0x0) &&
                  lVar26 == 0) && pbVar25 == (byte *)0x0) {
                if (pbVar15[0x28] != 6) {
                  return (byte *)0x0;
                }
                lVar26 = *(long *)(pbVar15 + 0x20);
                lVar24 = *(long *)(pbVar15 + 0x18);
                bVar27 = pbVar15[8] | (byte)lVar24;
                bVar28 = pbVar15[9] | (byte)((ulong)lVar24 >> 8);
                bVar29 = pbVar15[10] | (byte)((ulong)lVar24 >> 0x10);
                bVar30 = pbVar15[0xb] | (byte)((ulong)lVar24 >> 0x18);
                bVar31 = pbVar15[0xc] | (byte)((ulong)lVar24 >> 0x20);
                bVar32 = pbVar15[0xd] | (byte)((ulong)lVar24 >> 0x28);
                bVar33 = pbVar15[0xe] | (byte)((ulong)lVar24 >> 0x30);
                bVar34 = pbVar15[0xf] | (byte)((ulong)lVar24 >> 0x38);
                bVar35 = pbVar15[0x10] | (byte)lVar26;
                bVar36 = pbVar15[0x11] | (byte)((ulong)lVar26 >> 8);
                bVar37 = pbVar15[0x12] | (byte)((ulong)lVar26 >> 0x10);
                bVar38 = pbVar15[0x13] | (byte)((ulong)lVar26 >> 0x18);
                bVar39 = pbVar15[0x14] | (byte)((ulong)lVar26 >> 0x20);
                bVar40 = pbVar15[0x15] | (byte)((ulong)lVar26 >> 0x28);
                bVar41 = pbVar15[0x16] | (byte)((ulong)lVar26 >> 0x30);
                bVar42 = pbVar15[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
                                                                          CONCAT11(bVar28 | auVar43[
                                                  1],bVar27 | auVar43[0]))))))) == 0 &&
                    *(long *)pbVar15 == 0) {
                  return (byte *)0x1;
                }
                return (byte *)0x0;
              }
              if ((pbVar13 == (byte *)0x1) &&
                 (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
                  lVar26 == 0)) {
                if (pbVar15[0x28] != 6) {
                  return (byte *)0x0;
                }
                if (*(long *)pbVar15 != 1) {
                  return (byte *)0x0;
                }
              }
              else {
                if (pbVar15[0x28] != 6) {
                  return (byte *)0x0;
                }
                if (*(long *)pbVar15 != 2) {
                  return (byte *)0x0;
                }
              }
              lVar26 = *(long *)(pbVar15 + 0x20);
              lVar24 = *(long *)(pbVar15 + 0x18);
              bVar27 = pbVar15[8] | (byte)lVar24;
              bVar28 = pbVar15[9] | (byte)((ulong)lVar24 >> 8);
              bVar29 = pbVar15[10] | (byte)((ulong)lVar24 >> 0x10);
              bVar30 = pbVar15[0xb] | (byte)((ulong)lVar24 >> 0x18);
              bVar31 = pbVar15[0xc] | (byte)((ulong)lVar24 >> 0x20);
              bVar32 = pbVar15[0xd] | (byte)((ulong)lVar24 >> 0x28);
              bVar33 = pbVar15[0xe] | (byte)((ulong)lVar24 >> 0x30);
              bVar34 = pbVar15[0xf] | (byte)((ulong)lVar24 >> 0x38);
              bVar35 = pbVar15[0x10] | (byte)lVar26;
              bVar36 = pbVar15[0x11] | (byte)((ulong)lVar26 >> 8);
              bVar37 = pbVar15[0x12] | (byte)((ulong)lVar26 >> 0x10);
              bVar38 = pbVar15[0x13] | (byte)((ulong)lVar26 >> 0x18);
              bVar39 = pbVar15[0x14] | (byte)((ulong)lVar26 >> 0x20);
              bVar40 = pbVar15[0x15] | (byte)((ulong)lVar26 >> 0x28);
              bVar41 = pbVar15[0x16] | (byte)((ulong)lVar26 >> 0x30);
              bVar42 = pbVar15[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
              lVar24 = CONCAT17(bVar34 | auVar43[7],
                                CONCAT16(bVar33 | auVar43[6],
                                         CONCAT15(bVar32 | auVar43[5],
                                                  CONCAT14(bVar31 | auVar43[4],
                                                           CONCAT13(bVar30 | auVar43[3],
                                                                    CONCAT12(bVar29 | auVar43[2],
                                                                             CONCAT11(bVar28 | 
                                                  auVar43[1],bVar27 | auVar43[0])))))));
              goto joined_r0x000100e26620;
            }
            if (pbVar15[0x28] != 5) {
              return (byte *)0x0;
            }
            lVar24 = *(long *)(pbVar15 + 8);
            uVar14 = *(ulong *)(pbVar15 + 0x10);
            lVar26 = *(long *)pbVar15;
            uVar11 = 0;
            FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar13,lVar26,uVar11);
            if (((ulong)pbVar13 & 1) == 0) {
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
        goto code_r0x000107c605b8;
      }
    }
  }
  return (byte *)0x0;
}



/* Entry: 10164f268; end: 10164f297;  */

undefined1  [16] FUN_10164f268(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x50);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x50),
                      *(undefined8 *)(unaff_x20 + 0x58));
  return auVar1;
}



/* Entry: 10164f298; end: 10164f2cb;  */

void FUN_10164f298(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  *(undefined8 *)(unaff_x20 + 0x50) = param_1;
  *(undefined8 *)(unaff_x20 + 0x58) = param_2;
  return;
}



/* Entry: 10164f2cc; end: 10164f2df;  */

undefined1  [16] FUN_10164f2cc(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x50;
  auVar1._0_8_ = 0x10164f2dc;
  return auVar1;
}


