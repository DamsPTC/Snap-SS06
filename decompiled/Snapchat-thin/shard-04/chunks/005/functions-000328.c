/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10355ba60; end: 10355ba73;  */

void FUN_10355ba60(void)

{
  FUN_10355b78c();
  return;
}



/* Entry: 10355ba74; end: 10355baab;  */

void FUN_10355ba74(void)

{
  FUN_10355b870();
  return;
}



/* Entry: 10355baac; end: 10355baaf;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10355baac(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10355bab0; end: 10355bae7;  */

uint FUN_10355bab0(long param_1,long param_2)

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
  FUN_10355c400();
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



/* Entry: 10355bae8; end: 10355bb2f;  */

uint FUN_10355bae8(undefined8 *param_1)

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
  FUN_10355be50(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10355bb30; end: 10355bbcf;  */

/* WARNING: Possible PIC construction at 0x00010355bb7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010355bb8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010355bb80) */
/* WARNING: Removing unreachable block (ram,0x00010355bb90) */

void FUN_10355bb30(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f78228 != -1) {
    func_0x000107c61568(0x112f78228,FUN_10355b744);
  }
  uVar5 = uRam00000001138086c8;
  uVar4 = uRam00000001138086c0;
  uVar3 = uRam00000001138086b8;
  uVar2 = uRam00000001138086b0;
  uVar1 = uRam00000001138086a8;
  *param_1 = uRam00000001138086a0;
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



/* Entry: 10355bbd0; end: 10355bc0b;  */

void FUN_10355bbd0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f78248;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f78248,&UNK_10dbdb0f8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10355bc0c; end: 10355bd2f;  */

void FUN_10355bc0c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_60 = *unaff_x20;
  uStack_38 = unaff_x20[5];
  uStack_50 = unaff_x20[2];
  uStack_58 = unaff_x20[1];
  uStack_40 = unaff_x20[4];
  uStack_48 = unaff_x20[3];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10355bd30; end: 10355bd73;  */

uint FUN_10355bd30(undefined8 *param_1,undefined8 *param_2)

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
  FUN_10355be50(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10355bd74; end: 10355be4f;  */

uint FUN_10355bd74(long param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  uint uVar3;
  undefined1 auStack_520 [416];
  undefined1 auStack_380 [416];
  undefined1 auStack_1e0 [416];
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    if ((lVar2 == 0) || (param_1 == param_2)) {
      uVar3 = 1;
    }
    else {
      param_1 = param_1 + 0x20;
      param_2 = param_2 + 0x20;
      do {
        lVar2 = lVar2 + -1;
        func_0x000107c610b4(auStack_380,param_1,0x1a0);
        func_0x000107c610b4(auStack_1e0,param_2,0x1a0);
        func_0x0001034a24c8(auStack_380,auStack_520);
        func_0x0001034a24c8(auStack_1e0,auStack_520);
        puVar1 = auStack_380;
        FUN_10355f2f0(puVar1,auStack_1e0);
        uVar3 = (uint)puVar1;
        func_0x0001034a2504(auStack_1e0);
        func_0x0001034a2504(auStack_380);
        if (((ulong)puVar1 & 1) == 0) break;
        param_2 = param_2 + 0x1a0;
        param_1 = param_1 + 0x1a0;
      } while (lVar2 != 0);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 1;
}



/* Entry: 10355be50; end: 10355bfb7;  */

uint FUN_10355be50(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uVar7 = param_1[4];
  uVar5 = param_1[3];
  uVar3 = param_1[5];
  uVar8 = param_2[4];
  uVar6 = param_2[3];
  lVar4 = param_2[5];
  uStack_a0 = uVar6;
  uStack_98 = uVar8;
  lStack_90 = lVar4;
  uStack_80 = uVar5;
  uStack_78 = uVar7;
  uStack_70 = uVar3;
  if (uVar3 == 0) {
    if (lVar4 != 0) goto LAB_10355bf0c;
    FUN_10355b6d0(&uStack_80,auStack_b8);
    FUN_10355b6d0(&uStack_a0,auStack_b8);
    func_0x00010349f458(uVar5,uVar7,0);
LAB_10355bf70:
    uVar3 = *param_1;
    FUN_10355bd74(uVar3,*param_2);
    if ((uVar3 & 1) != 0) {
      uVar3 = param_1[1];
      func_0x000100e25fcc(uVar3,param_1[2],param_2[1],param_2[2]);
      uVar1 = (uint)uVar3;
      goto LAB_10355bf94;
    }
  }
  else if (lVar4 == 0) {
LAB_10355bf0c:
    FUN_10355b6d0(&uStack_80,auStack_b8);
    FUN_10355b6d0(&uStack_a0,auStack_b8);
    func_0x00010349f458(uVar5,uVar7,uVar3);
    func_0x00010349f458(uVar6,uVar8,lVar4);
  }
  else {
    FUN_10355b6d0(&uStack_80,auStack_b8);
    FUN_10355b6d0(&uStack_a0,auStack_b8);
    uVar2 = uVar5;
    FUN_1035d8f6c(uVar5,uVar7,uVar3,uVar6,uVar8,lVar4);
    func_0x00010349f458(uVar6,uVar8,lVar4);
    func_0x00010349f458(uVar5,uVar7,uVar3);
    if ((uVar2 & 1) != 0) goto LAB_10355bf70;
  }
  uVar1 = 0;
LAB_10355bf94:
  return uVar1 & 1;
}



/* Entry: 10355bfb8; end: 10355bff7;  */

void FUN_10355bfb8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f78230 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdb028;
  func_0x000107c61520(&UNK_10dbdb028,&UNK_1106651a0);
  puRam0000000112f78230 = puVar1;
  return;
}



/* Entry: 10355bff8; end: 10355c01b;  */

void FUN_10355bff8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10355c01c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10355c01c; end: 10355c05b;  */

void FUN_10355c01c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f78238 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdb000;
  func_0x000107c61520(&UNK_10dbdb000,&UNK_1106651a0);
  puRam0000000112f78238 = puVar1;
  return;
}



/* Entry: 10355c05c; end: 10355c087;  */

void FUN_10355c05c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10355bfb8();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000103502a94();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10355c088; end: 10355c08b;  */

void FUN_10355c088(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f78240 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdb068;
  func_0x000107c61520(&UNK_10dbdb068,&UNK_1106651a0);
  puRam0000000112f78240 = puVar1;
  return;
}



/* Entry: 10355c08c; end: 10355c0cb;  */

void FUN_10355c08c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f78240 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdb068;
  func_0x000107c61520(&UNK_10dbdb068,&UNK_1106651a0);
  puRam0000000112f78240 = puVar1;
  return;
}



/* Entry: 10355c0cc; end: 10355c143;  */

long FUN_10355c0cc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10355c144; end: 10355c35b;  */

undefined8 * FUN_10355c144(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  func_0x000107c61434();
  func_0x00010006c00c(uVar3,uVar2);
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  lVar1 = param_2[5];
  if (lVar1 == 0) {
    uVar3 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar3;
    param_1[5] = param_2[5];
  }
  else {
    uVar3 = param_2[3];
    uVar2 = param_2[4];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[3] = uVar3;
    param_1[4] = uVar2;
    param_1[5] = lVar1;
    func_0x000107c6157c(lVar1);
  }
  return param_1;
}



/* Entry: 10355c35c; end: 10355c3ff;  */

int FUN_10355c35c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10355c400; end: 10355c43f;  */

void FUN_10355c400(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f78250 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbdafd4;
  func_0x000107c61520(&DAT_10dbdafd4,&UNK_1106651a0);
  puRam0000000112f78250 = puVar1;
  return;
}



/* Entry: 10355c440; end: 10355c46f;  */

int FUN_10355c440(long param_1)

{
  uint uVar1;
  
  uVar1 = 0xfffffffe;
  if (1 < *(byte *)(param_1 + 0x48)) {
    uVar1 = (*(byte *)(param_1 + 0x48) + 0x7ffffffe & 0x7fffffff) - 1;
  }
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10355c470; end: 10355c4a3;  */

undefined8 FUN_10355c470(undefined8 param_1)

{
  (*(code *)(undefined *)0x1035b8ae4)();
  return param_1;
}



/* Entry: 10355c4a4; end: 10355c4d7;  */

void FUN_10355c4a4(undefined8 *param_1)

{
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[8] = 0;
  param_1[9] = 3;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  return;
}



/* Entry: 10355c4d8; end: 10355c517;  */

void FUN_10355c4d8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f78368;
  func_0x0001000285a8(0x112f78368,&UNK_10dbdb208);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10355c518; end: 10355c52f;  */

void FUN_10355c518(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_103570dd4();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10355c530; end: 10355c603;  */

void FUN_10355c530(undefined8 *param_1)

{
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
  
  FUN_10355c4a4(&uStack_e0);
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[6] = 0xc000000000000000;
  param_1[5] = 0;
  param_1[0x18] = uStack_58;
  param_1[0x17] = uStack_60;
  param_1[0x1a] = uStack_48;
  param_1[0x19] = uStack_50;
  param_1[0x1c] = uStack_38;
  param_1[0x1b] = uStack_40;
  param_1[0x1e] = uStack_28;
  param_1[0x1d] = uStack_30;
  param_1[0x10] = uStack_98;
  param_1[0xf] = uStack_a0;
  param_1[0x12] = uStack_88;
  param_1[0x11] = uStack_90;
  param_1[0x14] = uStack_78;
  param_1[0x13] = uStack_80;
  param_1[0x16] = uStack_68;
  param_1[0x15] = uStack_70;
  param_1[8] = uStack_d8;
  param_1[7] = uStack_e0;
  param_1[10] = uStack_c8;
  param_1[9] = uStack_d0;
  param_1[0xc] = uStack_b8;
  param_1[0xb] = uStack_c0;
  param_1[0xe] = uStack_a8;
  param_1[0xd] = uStack_b0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x25] = 0xf000000000000000;
  param_1[0x27] = 0xf000000000000000;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  return;
}



/* Entry: 10355c604; end: 10355c61b;  */

void FUN_10355c604(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_78 [24];
  
  uVar4 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar6 = *(long *)(unaff_x20 + 0x10);
  if ((uVar4 & 1) == 0) {
    uVar5 = 0;
    FUN_103570de0(0);
    func_0x000107c613fc();
    FUN_10355fc04(lVar6,uVar5);
    *(long *)(unaff_x20 + 0x10) = lVar6;
  }
  func_0x000107c61428(lVar6 + 0x10,auStack_78,1,0);
  uVar5 = *(undefined8 *)(lVar6 + 0x10);
  uVar2 = *(undefined8 *)(lVar6 + 0x18);
  uVar1 = *(undefined8 *)(lVar6 + 0x20);
  uVar3 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined8 *)(lVar6 + 0x10) = param_1;
  *(undefined8 *)(lVar6 + 0x18) = param_2;
  *(undefined8 *)(lVar6 + 0x20) = param_3;
  *(undefined8 *)(lVar6 + 0x28) = param_4;
  func_0x000101597ae4(uVar5,uVar2,uVar1,uVar3);
  return;
}



/* Entry: 10355c61c; end: 10355cbf7;  */

void FUN_10355c61c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_58 [24];
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    FUN_103570de0(0);
    func_0x000107c613fc();
    FUN_10355fc04(lVar5,uVar3);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x30,auStack_58,1,0);
  uVar3 = *(undefined8 *)(lVar5 + 0x30);
  uVar1 = *(undefined8 *)(lVar5 + 0x38);
  uVar4 = *(undefined8 *)(lVar5 + 0x40);
  *(undefined8 *)(lVar5 + 0x30) = param_1;
  *(undefined8 *)(lVar5 + 0x38) = param_2;
  *(undefined8 *)(lVar5 + 0x40) = param_3;
  func_0x000100d55e4c(uVar3,uVar1,uVar4);
  return;
}



/* Entry: 10355cbf8; end: 10355ce37;  */

void FUN_10355cbf8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_48 [24];
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar4 = *(long *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    FUN_103570de0(0);
    func_0x000107c613fc();
    FUN_10355fc04(lVar4,uVar3);
    *(long *)(unaff_x20 + 0x10) = lVar4;
  }
  func_0x000107c61428(lVar4 + 0x128,auStack_48,1,0);
  uVar3 = *(undefined8 *)(lVar4 + 0x128);
  uVar1 = *(undefined8 *)(lVar4 + 0x130);
  *(undefined8 *)(lVar4 + 0x128) = param_1;
  *(undefined8 *)(lVar4 + 0x130) = param_2;
  func_0x00010006c090(uVar3,uVar1);
  return;
}



/* Entry: 10355ce38; end: 10355cf8f;  */

void FUN_10355ce38(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_1f8 [24];
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
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar4 = *(long *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    FUN_103570de0(0);
    func_0x000107c613fc();
    FUN_10355fc04(lVar4,uVar3);
    *(long *)(unaff_x20 + 0x10) = lVar4;
  }
  uStack_138 = param_1[0x15];
  uStack_140 = param_1[0x14];
  uStack_128 = param_1[0x17];
  uStack_130 = param_1[0x16];
  uStack_158 = param_1[0x11];
  uStack_160 = param_1[0x10];
  uStack_148 = param_1[0x13];
  uStack_150 = param_1[0x12];
  uStack_118 = param_1[0x19];
  uStack_120 = param_1[0x18];
  uStack_178 = param_1[0xd];
  uStack_180 = param_1[0xc];
  uStack_168 = param_1[0xf];
  uStack_170 = param_1[0xe];
  uStack_1b8 = param_1[5];
  uStack_1c0 = param_1[4];
  uStack_1a8 = param_1[7];
  uStack_1b0 = param_1[6];
  uStack_198 = param_1[9];
  uStack_1a0 = param_1[8];
  uStack_188 = param_1[0xb];
  uStack_190 = param_1[10];
  uStack_1d8 = param_1[1];
  uStack_1e0 = *param_1;
  uStack_1c8 = param_1[3];
  uStack_1d0 = param_1[2];
  func_0x000103570e28(&uStack_1e0);
  puVar1 = (undefined8 *)(lVar4 + 0x168);
  func_0x000107c61428(puVar1,auStack_1f8,1,0);
  uStack_68 = *(undefined8 *)(lVar4 + 0x210);
  uStack_70 = *(undefined8 *)(lVar4 + 0x208);
  uStack_58 = *(undefined8 *)(lVar4 + 0x220);
  uStack_60 = *(undefined8 *)(lVar4 + 0x218);
  uStack_48 = *(undefined8 *)(lVar4 + 0x230);
  uStack_50 = *(undefined8 *)(lVar4 + 0x228);
  uStack_a8 = *(undefined8 *)(lVar4 + 0x1d0);
  uStack_b0 = *(undefined8 *)(lVar4 + 0x1c8);
  uStack_98 = *(undefined8 *)(lVar4 + 0x1e0);
  uStack_a0 = *(undefined8 *)(lVar4 + 0x1d8);
  uStack_88 = *(undefined8 *)(lVar4 + 0x1f0);
  uStack_90 = *(undefined8 *)(lVar4 + 0x1e8);
  uStack_78 = *(undefined8 *)(lVar4 + 0x200);
  uStack_80 = *(undefined8 *)(lVar4 + 0x1f8);
  uStack_e8 = *(undefined8 *)(lVar4 + 400);
  uStack_f0 = *(undefined8 *)(lVar4 + 0x188);
  uStack_d8 = *(undefined8 *)(lVar4 + 0x1a0);
  uStack_e0 = *(undefined8 *)(lVar4 + 0x198);
  uStack_c8 = *(undefined8 *)(lVar4 + 0x1b0);
  uStack_d0 = *(undefined8 *)(lVar4 + 0x1a8);
  uStack_b8 = *(undefined8 *)(lVar4 + 0x1c0);
  uStack_c0 = *(undefined8 *)(lVar4 + 0x1b8);
  uStack_108 = *(undefined8 *)(lVar4 + 0x170);
  uStack_110 = *puVar1;
  uStack_f8 = *(undefined8 *)(lVar4 + 0x180);
  uStack_100 = *(undefined8 *)(lVar4 + 0x178);
  *(undefined8 *)(lVar4 + 0x210) = uStack_138;
  *(undefined8 *)(lVar4 + 0x208) = uStack_140;
  *(undefined8 *)(lVar4 + 0x220) = uStack_128;
  *(undefined8 *)(lVar4 + 0x218) = uStack_130;
  *(undefined8 *)(lVar4 + 0x230) = uStack_118;
  *(undefined8 *)(lVar4 + 0x228) = uStack_120;
  *(undefined8 *)(lVar4 + 0x1d0) = uStack_178;
  *(undefined8 *)(lVar4 + 0x1c8) = uStack_180;
  *(undefined8 *)(lVar4 + 0x1e0) = uStack_168;
  *(undefined8 *)(lVar4 + 0x1d8) = uStack_170;
  *(undefined8 *)(lVar4 + 0x1f0) = uStack_158;
  *(undefined8 *)(lVar4 + 0x1e8) = uStack_160;
  *(undefined8 *)(lVar4 + 0x200) = uStack_148;
  *(undefined8 *)(lVar4 + 0x1f8) = uStack_150;
  *(undefined8 *)(lVar4 + 400) = uStack_1b8;
  *(undefined8 *)(lVar4 + 0x188) = uStack_1c0;
  *(undefined8 *)(lVar4 + 0x1a0) = uStack_1a8;
  *(undefined8 *)(lVar4 + 0x198) = uStack_1b0;
  *(undefined8 *)(lVar4 + 0x1b0) = uStack_198;
  *(undefined8 *)(lVar4 + 0x1a8) = uStack_1a0;
  *(undefined8 *)(lVar4 + 0x1c0) = uStack_188;
  *(undefined8 *)(lVar4 + 0x1b8) = uStack_190;
  *(undefined8 *)(lVar4 + 0x170) = uStack_1d8;
  *puVar1 = uStack_1e0;
  *(undefined8 *)(lVar4 + 0x180) = uStack_1c8;
  *(undefined8 *)(lVar4 + 0x178) = uStack_1d0;
  FUN_1035789ec(&uStack_110,0x112f78370,&UNK_10dbdb210);
  return;
}



/* Entry: 10355cf90; end: 10355d027;  */

void FUN_10355cf90(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar4 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_103570de0(0);
    func_0x000107c613fc();
    FUN_10355fc04(lVar4,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar4;
  }
  func_0x000107c61428(lVar4 + 0x238,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar4 + 0x238);
  uVar3 = *(undefined8 *)(lVar4 + 0x240);
  *(undefined8 *)(lVar4 + 0x238) = param_1;
  *(undefined8 *)(lVar4 + 0x240) = param_2;
  func_0x00010006c090(uVar2,uVar3);
  return;
}



/* Entry: 10355d028; end: 10355d0d7;  */

void FUN_10355d028(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_58 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_103570de0(0);
    func_0x000107c613fc();
    FUN_10355fc04(lVar5,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x248,auStack_58,1,0);
  uVar2 = *(undefined8 *)(lVar5 + 0x248);
  uVar3 = *(undefined8 *)(lVar5 + 0x250);
  uVar4 = *(undefined8 *)(lVar5 + 600);
  *(ulong *)(lVar5 + 0x248) = param_1 & 1;
  *(undefined8 *)(lVar5 + 0x250) = param_2;
  *(undefined8 *)(lVar5 + 600) = param_3;
  func_0x000101556278(uVar2,uVar3,uVar4);
  return;
}



/* Entry: 10355d0d8; end: 10355d163;  */

void FUN_10355d0d8(undefined8 param_1,undefined1 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_103570de0(0);
    func_0x000107c613fc();
    FUN_10355fc04(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  func_0x000107c61428(lVar3 + 0x260,auStack_48,1,0);
  *(undefined8 *)(lVar3 + 0x260) = param_1;
  *(undefined1 *)(lVar3 + 0x268) = param_2;
  return;
}



/* Entry: 10355d164; end: 10355d76f;  */

void FUN_10355d164(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_58 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_103570de0(0);
    func_0x000107c613fc();
    FUN_10355fc04(lVar5,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x270,auStack_58,1,0);
  uVar2 = *(undefined8 *)(lVar5 + 0x270);
  uVar3 = *(undefined8 *)(lVar5 + 0x278);
  uVar4 = *(undefined8 *)(lVar5 + 0x280);
  *(undefined8 *)(lVar5 + 0x270) = param_1;
  *(undefined8 *)(lVar5 + 0x278) = param_2;
  *(undefined8 *)(lVar5 + 0x280) = param_3;
  func_0x000100d55e4c(uVar2,uVar3,uVar4);
  return;
}



/* Entry: 10355d770; end: 10355d7fb;  */

void FUN_10355d770(undefined8 param_1,undefined1 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_103570de0(0);
    func_0x000107c613fc();
    FUN_10355fc04(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  func_0x000107c61428(lVar3 + 0x3c0,auStack_48,1,0);
  *(undefined8 *)(lVar3 + 0x3c0) = param_1;
  *(undefined1 *)(lVar3 + 0x3c8) = param_2;
  return;
}



/* Entry: 10355d7fc; end: 10355dc13;  */

void FUN_10355d7fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_58 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_103570de0(0);
    func_0x000107c613fc();
    FUN_10355fc04(lVar5,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x3e0,auStack_58,1,0);
  uVar2 = *(undefined8 *)(lVar5 + 0x3e0);
  uVar3 = *(undefined8 *)(lVar5 + 1000);
  uVar4 = *(undefined8 *)(lVar5 + 0x3f0);
  *(undefined8 *)(lVar5 + 0x3e0) = param_1;
  *(undefined8 *)(lVar5 + 1000) = param_2;
  *(undefined8 *)(lVar5 + 0x3f0) = param_3;
  func_0x000100d55e4c(uVar2,uVar3,uVar4);
  return;
}



/* Entry: 10355dc14; end: 10355dd37;  */

void FUN_10355dc14(undefined8 param_1,undefined1 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_103570de0(0);
    func_0x000107c613fc();
    FUN_10355fc04(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  func_0x000107c61428(lVar3 + 0x4d8,auStack_48,1,0);
  *(undefined8 *)(lVar3 + 0x4d8) = param_1;
  *(undefined1 *)(lVar3 + 0x4e0) = param_2;
  return;
}



/* Entry: 10355dd38; end: 10355de93;  */

void FUN_10355dd38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_58 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_103570de0(0);
    func_0x000107c613fc();
    FUN_10355fc04(lVar5,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x530,auStack_58,1,0);
  uVar2 = *(undefined8 *)(lVar5 + 0x530);
  uVar3 = *(undefined8 *)(lVar5 + 0x538);
  uVar4 = *(undefined8 *)(lVar5 + 0x540);
  *(undefined8 *)(lVar5 + 0x530) = param_1;
  *(undefined8 *)(lVar5 + 0x538) = param_2;
  *(undefined8 *)(lVar5 + 0x540) = param_3;
  func_0x000100d55e4c(uVar2,uVar3,uVar4);
  return;
}



/* Entry: 10355de94; end: 10355df2b;  */

void FUN_10355de94(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar4 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_103570de0(0);
    func_0x000107c613fc();
    FUN_10355fc04(lVar4,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar4;
  }
  func_0x000107c61428(lVar4 + 0x5a8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar4 + 0x5a8);
  uVar3 = *(undefined8 *)(lVar4 + 0x5b0);
  *(undefined8 *)(lVar4 + 0x5a8) = param_1;
  *(undefined8 *)(lVar4 + 0x5b0) = param_2;
  func_0x00010006c090(uVar2,uVar3);
  return;
}



/* Entry: 10355df2c; end: 10355dfe3;  */

void FUN_10355df2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_58 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar6 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_103570de0(0);
    func_0x000107c613fc();
    FUN_10355fc04(lVar6,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar6;
  }
  func_0x000107c61428(lVar6 + 0x5b8,auStack_58,1,0);
  uVar2 = *(undefined8 *)(lVar6 + 0x5b8);
  uVar3 = *(undefined8 *)(lVar6 + 0x5c0);
  uVar4 = *(undefined8 *)(lVar6 + 0x5c8);
  uVar5 = *(undefined8 *)(lVar6 + 0x5d0);
  *(undefined8 *)(lVar6 + 0x5b8) = param_1;
  *(undefined8 *)(lVar6 + 0x5c0) = param_2;
  *(undefined8 *)(lVar6 + 0x5c8) = param_3;
  *(undefined8 *)(lVar6 + 0x5d0) = param_4;
  func_0x000101597ae4(uVar2,uVar3,uVar4,uVar5);
  return;
}



/* Entry: 10355dfe4; end: 10355e06f;  */

void FUN_10355dfe4(undefined8 param_1,undefined1 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_103570de0(0);
    func_0x000107c613fc();
    FUN_10355fc04(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  func_0x000107c61428(lVar3 + 0x5d8,auStack_48,1,0);
  *(undefined8 *)(lVar3 + 0x5d8) = param_1;
  *(undefined1 *)(lVar3 + 0x5e0) = param_2;
  return;
}



/* Entry: 10355e070; end: 10355e127;  */

void FUN_10355e070(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_58 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar6 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_103570de0(0);
    func_0x000107c613fc();
    FUN_10355fc04(lVar6,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar6;
  }
  func_0x000107c61428(lVar6 + 0x5e8,auStack_58,1,0);
  uVar2 = *(undefined8 *)(lVar6 + 0x5e8);
  uVar3 = *(undefined8 *)(lVar6 + 0x5f0);
  uVar4 = *(undefined8 *)(lVar6 + 0x5f8);
  uVar5 = *(undefined8 *)(lVar6 + 0x600);
  *(undefined8 *)(lVar6 + 0x5e8) = param_1;
  *(undefined8 *)(lVar6 + 0x5f0) = param_2;
  *(undefined8 *)(lVar6 + 0x5f8) = param_3;
  *(undefined8 *)(lVar6 + 0x600) = param_4;
  func_0x000101597ae4(uVar2,uVar3,uVar4,uVar5);
  return;
}



/* Entry: 10355e128; end: 10355e4cb;  */

void FUN_10355e128(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_e8 [24];
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
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar4 = *(long *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    FUN_103570de0(0);
    func_0x000107c613fc();
    FUN_10355fc04(lVar4,uVar3);
    *(long *)(unaff_x20 + 0x10) = lVar4;
  }
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  puVar1 = (undefined8 *)(lVar4 + 0x608);
  func_0x000107c61428(puVar1,auStack_e8,1,0);
  uStack_58 = *(undefined8 *)(lVar4 + 0x630);
  uStack_60 = *(undefined8 *)(lVar4 + 0x628);
  uStack_48 = *(undefined8 *)(lVar4 + 0x640);
  uStack_50 = *(undefined8 *)(lVar4 + 0x638);
  uStack_38 = *(undefined8 *)(lVar4 + 0x650);
  uStack_40 = *(undefined8 *)(lVar4 + 0x648);
  uStack_78 = *(undefined8 *)(lVar4 + 0x610);
  uStack_80 = *puVar1;
  uStack_68 = *(undefined8 *)(lVar4 + 0x620);
  uStack_70 = *(undefined8 *)(lVar4 + 0x618);
  *(undefined8 *)(lVar4 + 0x630) = uStack_a8;
  *(undefined8 *)(lVar4 + 0x628) = uStack_b0;
  *(undefined8 *)(lVar4 + 0x640) = uStack_98;
  *(undefined8 *)(lVar4 + 0x638) = uStack_a0;
  *(undefined8 *)(lVar4 + 0x650) = uStack_88;
  *(undefined8 *)(lVar4 + 0x648) = uStack_90;
  *(undefined8 *)(lVar4 + 0x610) = uStack_c8;
  *puVar1 = uStack_d0;
  *(undefined8 *)(lVar4 + 0x620) = uStack_b8;
  *(undefined8 *)(lVar4 + 0x618) = uStack_c0;
  FUN_1035789ec(&uStack_80,0x112f730a8,&UNK_10dbd1870);
  return;
}



/* Entry: 10355e4cc; end: 10355e57b;  */

void FUN_10355e4cc(uint param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_58 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_103570de0(0);
    func_0x000107c613fc();
    FUN_10355fc04(lVar5,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x6c0,auStack_58,1,0);
  uVar2 = *(undefined8 *)(lVar5 + 0x6c0);
  uVar3 = *(undefined8 *)(lVar5 + 0x6c8);
  uVar4 = *(undefined8 *)(lVar5 + 0x6d0);
  *(ulong *)(lVar5 + 0x6c0) = (ulong)param_1;
  *(undefined8 *)(lVar5 + 0x6c8) = param_2;
  *(undefined8 *)(lVar5 + 0x6d0) = param_3;
  func_0x000100d55e4c(uVar2,uVar3,uVar4);
  return;
}



/* Entry: 10355e57c; end: 10355e627;  */

void FUN_10355e57c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_58 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_103570de0(0);
    func_0x000107c613fc();
    FUN_10355fc04(lVar5,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x6d8,auStack_58,1,0);
  uVar2 = *(undefined8 *)(lVar5 + 0x6d8);
  uVar3 = *(undefined8 *)(lVar5 + 0x6e0);
  uVar4 = *(undefined8 *)(lVar5 + 0x6e8);
  *(undefined8 *)(lVar5 + 0x6d8) = param_1;
  *(undefined8 *)(lVar5 + 0x6e0) = param_2;
  *(undefined8 *)(lVar5 + 0x6e8) = param_3;
  func_0x000103571228(uVar2,uVar3,uVar4);
  return;
}



/* Entry: 10355e628; end: 10355e64f;  */

void FUN_10355e628(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[1] = puVar1;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 2;
  return;
}



/* Entry: 10355e650; end: 10355e7c7;  */

void FUN_10355e650(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_58 [24];
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar14 = param_1[3];
  uVar13 = param_1[2];
  uVar16 = param_1[5];
  uVar15 = param_1[4];
  uVar12 = param_1[6];
  uVar3 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar11 = *(long *)(unaff_x20 + 0x10);
  if ((uVar3 & 1) == 0) {
    FUN_103570de0(0);
    func_0x000107c613fc();
    FUN_10355fc04();
    *(long *)(unaff_x20 + 0x10) = lVar11;
  }
  func_0x000107c61428(lVar11 + 0x6f0,auStack_58,1,0);
  uVar4 = *(undefined8 *)(lVar11 + 0x6f0);
  uVar5 = *(undefined8 *)(lVar11 + 0x6f8);
  uVar6 = *(undefined8 *)(lVar11 + 0x700);
  uVar7 = *(undefined8 *)(lVar11 + 0x708);
  uVar8 = *(undefined8 *)(lVar11 + 0x710);
  uVar9 = *(undefined8 *)(lVar11 + 0x718);
  uVar10 = *(undefined8 *)(lVar11 + 0x720);
  *(undefined8 *)(lVar11 + 0x6f0) = uVar1;
  *(undefined8 *)(lVar11 + 0x6f8) = uVar2;
  *(undefined8 *)(lVar11 + 0x708) = uVar14;
  *(undefined8 *)(lVar11 + 0x700) = uVar13;
  *(undefined8 *)(lVar11 + 0x718) = uVar16;
  *(undefined8 *)(lVar11 + 0x710) = uVar15;
  *(undefined8 *)(lVar11 + 0x720) = uVar12;
  func_0x000103570f28(uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
  return;
}



/* Entry: 10355e7c8; end: 10355e887;  */

void FUN_10355e7c8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f783e8;
  func_0x0001000285a8(0x112f783e8,&UNK_10dbdb230);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10355e888; end: 10355e893;  */

void FUN_10355e888(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  (*(code *)0x103578d04)();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10355e894; end: 10355e8d3;  */

void FUN_10355e894(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f78518;
  func_0x0001000285a8(0x112f78518,&UNK_10dbdb248);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10355e8d4; end: 10355e8eb;  */

void FUN_10355e8d4(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x103578d04)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10355e8ec; end: 10355e92b;  */

void FUN_10355e8ec(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f78588;
  func_0x0001000285a8(0x112f78588,&UNK_10dbdb250);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10355e92c; end: 10355e937;  */

void FUN_10355e92c(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x103578d08)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10355e938; end: 10355e993;  */

undefined8 FUN_10355e938(void)

{
  if (lRam0000000112f78590 != -1) {
    func_0x000107c61568(0x112f78590,FUN_10355f8d8);
  }
  func_0x000107c6157c(uRam0000000112f78598);
  return 0;
}



/* Entry: 10355e994; end: 10355e9a3;  */

void FUN_10355e994(void)

{
  return;
}



/* Entry: 10355e9a4; end: 10355e9e3;  */

void FUN_10355e9a4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f78668;
  func_0x0001000285a8(0x112f78668,&UNK_10dbdb260);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10355e9e4; end: 10355e9fb;  */

void FUN_10355e9e4(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1035711c4();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10355e9fc; end: 10355ea6b;  */

void FUN_10355e9fc(undefined8 *param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4,
                  code *param_5)

{
  (*param_5)();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10355ea6c; end: 10355ea77;  */

void FUN_10355ea6c(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x1035711d0)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10355ea78; end: 10355eb2f;  */

void FUN_10355ea78(undefined8 *param_1,undefined8 *param_2,undefined2 param_3,undefined8 param_4,
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



/* Entry: 10355eb30; end: 10355ebf3;  */

void FUN_10355eb30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5,undefined8 param_6,code *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_78 [24];
  
  uVar4 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar6 = *(long *)(unaff_x20 + 0x10);
  if ((uVar4 & 1) == 0) {
    uVar5 = 0;
    (*param_5)(0);
    func_0x000107c613fc();
    (*param_7)(lVar6,uVar5);
    *(long *)(unaff_x20 + 0x10) = lVar6;
  }
  func_0x000107c61428(lVar6 + 0x10,auStack_78,1,0);
  uVar5 = *(undefined8 *)(lVar6 + 0x10);
  uVar2 = *(undefined8 *)(lVar6 + 0x18);
  uVar1 = *(undefined8 *)(lVar6 + 0x20);
  uVar3 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined8 *)(lVar6 + 0x10) = param_1;
  *(undefined8 *)(lVar6 + 0x18) = param_2;
  *(undefined8 *)(lVar6 + 0x20) = param_3;
  *(undefined8 *)(lVar6 + 0x28) = param_4;
  func_0x000101597ae4(uVar5,uVar2,uVar1,uVar3);
  return;
}



/* Entry: 10355ebf4; end: 10355ec3b;  */

void FUN_10355ebf4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbdd320,0x8f,2);
  uRam00000001138086d8 = uStack_38;
  uRam00000001138086d0 = uStack_40;
  uRam00000001138086e8 = uStack_28;
  uRam00000001138086e0 = uStack_30;
  uRam00000001138086f8 = uStack_18;
  uRam00000001138086f0 = uStack_20;
  return;
}



/* Entry: 10355ec3c; end: 10355ee1f;  */

/* WARNING: Removing unreachable block (ram,0x00010355ee1c) */

void FUN_10355ec3c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 5) {
        if (2 < lVar1) {
          if (lVar1 == 3) {
            pcVar3 = *(code **)(param_3 + 0x198);
            func_0x0001015c5cfc();
          }
          else {
            if (lVar1 != 4) goto LAB_10355ee0c;
            pcVar3 = *(code **)(param_3 + 0x1a0);
            func_0x000103502a14();
          }
          goto LAB_10355edf8;
        }
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x198);
          FUN_103578a2c();
          goto LAB_10355edf8;
        }
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x198);
          func_0x000101568c04();
          goto LAB_10355edf8;
        }
      }
      else {
        if (lVar1 < 7) {
          if (lVar1 == 5) {
            pcVar3 = *(code **)(param_3 + 0x198);
            func_0x000103509fb0();
          }
          else {
            if (lVar1 != 6) goto LAB_10355ee0c;
            pcVar3 = *(code **)(param_3 + 0x180);
            FUN_10357240c();
          }
        }
        else if (lVar1 == 7) {
          pcVar3 = *(code **)(param_3 + 0x180);
          func_0x00010357244c();
        }
        else {
          if (lVar1 != 8) goto LAB_10355ee0c;
          pcVar3 = *(code **)(param_3 + 0x198);
          func_0x000101568c04();
        }
LAB_10355edf8:
        (*pcVar3)();
      }
LAB_10355ee0c:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 10355ee20; end: 10355efc7;  */

void FUN_10355ee20(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long *unaff_x20;
  long unaff_x21;
  long lVar3;
  code *pcVar4;
  long lStack_60;
  undefined1 uStack_58;
  
  plVar2 = &lStack_60;
  FUN_10355efc8();
  if (unaff_x21 == 0) {
    FUN_10355f0c4();
    plVar1 = unaff_x20;
    FUN_10355f14c();
    lVar3 = *unaff_x20;
    if (*(long *)(lVar3 + 0x10) != 0) {
      pcVar4 = *(code **)(param_3 + 0x118);
      func_0x000103502a14();
      (*pcVar4)(lVar3,4,&UNK_110665b00,plVar1,param_2,param_3);
    }
    plVar1 = unaff_x20;
    FUN_10355f1d8();
    if (unaff_x20[1] != 0) {
      uStack_58 = (undefined1)unaff_x20[2];
      pcVar4 = *(code **)(param_3 + 0x80);
      lStack_60 = unaff_x20[1];
      FUN_10357240c();
      (*pcVar4)(&lStack_60,6,&UNK_110665a88,plVar1,param_2,param_3);
      plVar1 = plVar2;
    }
    if (unaff_x20[3] != 0) {
      uStack_58 = (undefined1)unaff_x20[4];
      pcVar4 = *(code **)(param_3 + 0x80);
      lStack_60 = unaff_x20[3];
      func_0x00010357244c();
      (*pcVar4)(&lStack_60,7,&UNK_110778be0,plVar1,param_2,param_3);
    }
    FUN_10355f26c();
    func_0x000100076224(param_1,unaff_x20[5],unaff_x20[6],param_2,param_3);
  }
  return;
}



/* Entry: 10355efc8; end: 10355f0c3;  */

void FUN_10355efc8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
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
  
  uStack_78 = *(undefined8 *)(param_1 + 0xc0);
  uStack_80 = *(undefined8 *)(param_1 + 0xb8);
  uStack_68 = *(undefined8 *)(param_1 + 0xd0);
  uStack_70 = *(undefined8 *)(param_1 + 200);
  uStack_58 = *(undefined8 *)(param_1 + 0xe0);
  uStack_60 = *(undefined8 *)(param_1 + 0xd8);
  uStack_48 = *(undefined8 *)(param_1 + 0xf0);
  uStack_50 = *(undefined8 *)(param_1 + 0xe8);
  uStack_b8 = *(undefined8 *)(param_1 + 0x80);
  uStack_c0 = *(undefined8 *)(param_1 + 0x78);
  uStack_a8 = *(undefined8 *)(param_1 + 0x90);
  uStack_b0 = *(undefined8 *)(param_1 + 0x88);
  uStack_98 = *(undefined8 *)(param_1 + 0xa0);
  uStack_a0 = *(undefined8 *)(param_1 + 0x98);
  uStack_88 = *(undefined8 *)(param_1 + 0xb0);
  uStack_90 = *(undefined8 *)(param_1 + 0xa8);
  uStack_f8 = *(undefined8 *)(param_1 + 0x40);
  uStack_100 = *(undefined8 *)(param_1 + 0x38);
  uStack_e8 = *(undefined8 *)(param_1 + 0x50);
  uStack_f0 = *(undefined8 *)(param_1 + 0x48);
  uStack_d8 = *(undefined8 *)(param_1 + 0x60);
  uStack_e0 = *(undefined8 *)(param_1 + 0x58);
  uStack_c8 = *(undefined8 *)(param_1 + 0x70);
  uStack_d0 = *(undefined8 *)(param_1 + 0x68);
  puVar1 = &uStack_100;
  FUN_10355c440();
  if ((int)puVar1 != 1) {
    uStack_138 = uStack_78;
    uStack_140 = uStack_80;
    uStack_128 = uStack_68;
    uStack_130 = uStack_70;
    uStack_118 = uStack_58;
    uStack_120 = uStack_60;
    uStack_108 = uStack_48;
    uStack_110 = uStack_50;
    uStack_178 = uStack_b8;
    uStack_180 = uStack_c0;
    uStack_168 = uStack_a8;
    uStack_170 = uStack_b0;
    uStack_158 = uStack_98;
    uStack_160 = uStack_a0;
    uStack_148 = uStack_88;
    uStack_150 = uStack_90;
    uStack_1b8 = uStack_f8;
    uStack_1c0 = uStack_100;
    uStack_1a8 = uStack_e8;
    uStack_1b0 = uStack_f0;
    uStack_198 = uStack_d8;
    uStack_1a0 = uStack_e0;
    uStack_188 = uStack_c8;
    uStack_190 = uStack_d0;
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_103578a2c();
    (*pcVar2)(&uStack_1c0,1,&UNK_110669bb8,puVar1,param_3,param_4);
  }
  return;
}



/* Entry: 10355f0c4; end: 10355f14b;  */

void FUN_10355f0c4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    (*pcVar1)(&uStack_60,2,&UNK_110790c80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10355f14c; end: 10355f1d7;  */

void FUN_10355f14c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    (*pcVar1)(&uStack_60,3,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10355f1d8; end: 10355f26b;  */

void FUN_10355f1d8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_88 = *(ulong *)(param_1 + 0x138);
  if (uStack_88 >> 0x3c < 0xf) {
    uStack_90 = *(undefined8 *)(param_1 + 0x130);
    uStack_78 = *(undefined8 *)(param_1 + 0x148);
    uStack_80 = *(undefined8 *)(param_1 + 0x140);
    uStack_68 = *(undefined8 *)(param_1 + 0x158);
    uStack_70 = *(undefined8 *)(param_1 + 0x150);
    uStack_58 = *(undefined8 *)(param_1 + 0x168);
    uStack_60 = *(undefined8 *)(param_1 + 0x160);
    uStack_48 = *(undefined8 *)(param_1 + 0x178);
    uStack_50 = *(undefined8 *)(param_1 + 0x170);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000103509fb0();
    (*pcVar1)(&uStack_90,5,&UNK_11066a6c0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10355f26c; end: 10355f2ef;  */

void FUN_10355f26c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x188);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x180);
    uStack_48 = *(undefined8 *)(param_1 + 0x198);
    uStack_50 = *(undefined8 *)(param_1 + 400);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar1)(&uStack_60,8,&UNK_110790c80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10355f2f0; end: 10355f2f3;  */

ulong FUN_10355f2f0(ulong *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uStack_980;
  ulong uStack_978;
  ulong uStack_970;
  ulong uStack_968;
  ulong uStack_960;
  ulong uStack_958;
  ulong uStack_950;
  ulong uStack_948;
  ulong uStack_940;
  ulong uStack_938;
  ulong uStack_8c0;
  ulong uStack_8b8;
  ulong uStack_8b0;
  ulong uStack_8a8;
  ulong uStack_8a0;
  ulong uStack_898;
  ulong uStack_890;
  ulong uStack_888;
  ulong uStack_880;
  ulong uStack_878;
  ulong uStack_870;
  ulong uStack_868;
  ulong uStack_860;
  ulong uStack_858;
  ulong uStack_850;
  ulong uStack_848;
  ulong uStack_840;
  ulong uStack_838;
  ulong uStack_830;
  ulong uStack_828;
  ulong uStack_820;
  ulong uStack_818;
  ulong uStack_810;
  ulong uStack_808;
  ulong uStack_800;
  ulong uStack_7f8;
  ulong uStack_7f0;
  ulong uStack_7e8;
  ulong uStack_7e0;
  ulong uStack_7d8;
  ulong uStack_7d0;
  ulong uStack_7c8;
  ulong uStack_7c0;
  ulong uStack_7b8;
  ulong uStack_7b0;
  ulong uStack_7a8;
  ulong uStack_7a0;
  ulong uStack_798;
  ulong uStack_790;
  ulong uStack_788;
  ulong uStack_780;
  ulong uStack_778;
  ulong uStack_770;
  ulong uStack_768;
  ulong uStack_760;
  ulong uStack_758;
  ulong uStack_750;
  ulong uStack_748;
  ulong uStack_740;
  ulong uStack_738;
  ulong uStack_730;
  ulong uStack_728;
  ulong uStack_6f0;
  ulong uStack_6e8;
  ulong uStack_6e0;
  ulong uStack_6d8;
  ulong uStack_6d0;
  ulong uStack_6c8;
  ulong uStack_6c0;
  ulong uStack_6b8;
  ulong uStack_6b0;
  ulong uStack_6a8;
  ulong auStack_6a0 [4];
  ulong uStack_680;
  ulong uStack_678;
  ulong uStack_670;
  ulong uStack_668;
  ulong uStack_660;
  ulong uStack_658;
  ulong uStack_650;
  ulong uStack_648;
  ulong uStack_640;
  ulong uStack_638;
  ulong uStack_630;
  ulong uStack_628;
  ulong uStack_620;
  ulong uStack_618;
  ulong uStack_610;
  ulong uStack_608;
  ulong uStack_600;
  ulong uStack_5f8;
  ulong uStack_5f0;
  ulong uStack_5e8;
  ulong uStack_5e0;
  ulong uStack_5d8;
  ulong uStack_5d0;
  ulong uStack_5c8;
  ulong uStack_500;
  ulong uStack_4f8;
  ulong uStack_4f0;
  ulong uStack_4e8;
  ulong uStack_4e0;
  ulong uStack_4d8;
  ulong uStack_4d0;
  ulong uStack_4c8;
  ulong uStack_4c0;
  ulong uStack_4b8;
  ulong uStack_4b0;
  ulong uStack_4a8;
  ulong uStack_4a0;
  ulong uStack_498;
  ulong uStack_490;
  ulong uStack_488;
  ulong uStack_480;
  ulong uStack_478;
  ulong uStack_470;
  ulong uStack_468;
  ulong uStack_460;
  ulong uStack_458;
  ulong uStack_450;
  ulong uStack_448;
  ulong uStack_440;
  ulong uStack_438;
  ulong uStack_430;
  ulong uStack_428;
  ulong uStack_420;
  ulong uStack_418;
  ulong uStack_410;
  ulong uStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  ulong uStack_3f0;
  ulong uStack_3e8;
  ulong uStack_3e0;
  ulong uStack_3d8;
  ulong uStack_3d0;
  ulong uStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  ulong uStack_398;
  ulong uStack_390;
  ulong uStack_388;
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
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
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
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
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
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
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
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  uStack_168 = param_1[0x18];
  uStack_170 = param_1[0x17];
  uStack_158 = param_1[0x1a];
  uStack_160 = param_1[0x19];
  uStack_148 = param_1[0x1c];
  uStack_150 = param_1[0x1b];
  uStack_138 = param_1[0x1e];
  uStack_140 = param_1[0x1d];
  uStack_1a8 = param_1[0x10];
  uStack_1b0 = param_1[0xf];
  uStack_198 = param_1[0x12];
  uStack_1a0 = param_1[0x11];
  uStack_188 = param_1[0x14];
  uStack_190 = param_1[0x13];
  uStack_178 = param_1[0x16];
  uStack_180 = param_1[0x15];
  uStack_1e8 = param_1[8];
  uStack_1f0 = param_1[7];
  uStack_1d8 = param_1[10];
  uStack_1e0 = param_1[9];
  uStack_1c8 = param_1[0xc];
  uStack_1d0 = param_1[0xb];
  uStack_1b8 = param_1[0xe];
  uStack_1c0 = param_1[0xd];
  uStack_228 = param_2[0x18];
  uStack_230 = param_2[0x17];
  uStack_218 = param_2[0x1a];
  uStack_220 = param_2[0x19];
  uStack_208 = param_2[0x1c];
  uStack_210 = param_2[0x1b];
  uStack_1f8 = param_2[0x1e];
  uStack_200 = param_2[0x1d];
  uStack_268 = param_2[0x10];
  uStack_270 = param_2[0xf];
  uStack_258 = param_2[0x12];
  uStack_260 = param_2[0x11];
  uStack_248 = param_2[0x14];
  uStack_250 = param_2[0x13];
  uStack_238 = param_2[0x16];
  uStack_240 = param_2[0x15];
  uStack_2a8 = param_2[8];
  uStack_2b0 = param_2[7];
  uStack_298 = param_2[10];
  uStack_2a0 = param_2[9];
  uStack_288 = param_2[0xc];
  uStack_290 = param_2[0xb];
  uStack_278 = param_2[0xe];
  uStack_280 = param_2[0xd];
  uStack_478 = param_1[0x18];
  uStack_480 = param_1[0x17];
  uStack_468 = param_1[0x1a];
  uStack_470 = param_1[0x19];
  uStack_458 = param_1[0x1c];
  uStack_460 = param_1[0x1b];
  uStack_448 = param_1[0x1e];
  uStack_450 = param_1[0x1d];
  uStack_4b8 = param_1[0x10];
  uStack_4c0 = param_1[0xf];
  uStack_4a8 = param_1[0x12];
  uStack_4b0 = param_1[0x11];
  uStack_498 = param_1[0x14];
  uStack_4a0 = param_1[0x13];
  uStack_488 = param_1[0x16];
  uStack_490 = param_1[0x15];
  uStack_4f8 = param_1[8];
  uStack_500 = param_1[7];
  uStack_4e8 = param_1[10];
  uStack_4f0 = param_1[9];
  uStack_4d8 = param_1[0xc];
  uStack_4e0 = param_1[0xb];
  uStack_4c8 = param_1[0xe];
  uStack_4d0 = param_1[0xd];
  uStack_3b8 = param_2[0x18];
  uStack_3c0 = param_2[0x17];
  uStack_3a8 = param_2[0x1a];
  uStack_3b0 = param_2[0x19];
  uStack_398 = param_2[0x1c];
  uStack_3a0 = param_2[0x1b];
  uStack_388 = param_2[0x1e];
  uStack_390 = param_2[0x1d];
  uStack_3f8 = param_2[0x10];
  uStack_400 = param_2[0xf];
  uStack_3e8 = param_2[0x12];
  uStack_3f0 = param_2[0x11];
  uStack_3d8 = param_2[0x14];
  uStack_3e0 = param_2[0x13];
  uStack_3c8 = param_2[0x16];
  uStack_3d0 = param_2[0x15];
  uStack_438 = param_2[8];
  uStack_440 = param_2[7];
  uStack_428 = param_2[10];
  uStack_430 = param_2[9];
  uStack_418 = param_2[0xc];
  uStack_420 = param_2[0xb];
  uStack_408 = param_2[0xe];
  uStack_410 = param_2[0xd];
  iVar1 = (int)&uStack_500;
  FUN_10355c440();
  if (iVar1 == 1) {
    iVar1 = (int)&uStack_440;
    FUN_10355c440();
    if (iVar1 != 1) goto LAB_10357280c;
    uStack_5f8 = uStack_478;
    uStack_600 = uStack_480;
    uStack_5e8 = uStack_468;
    uStack_5f0 = uStack_470;
    uStack_5d8 = uStack_458;
    uStack_5e0 = uStack_460;
    uStack_5c8 = uStack_448;
    uStack_5d0 = uStack_450;
    uStack_638 = uStack_4b8;
    uStack_640 = uStack_4c0;
    uStack_628 = uStack_4a8;
    uStack_630 = uStack_4b0;
    uStack_618 = uStack_498;
    uStack_620 = uStack_4a0;
    uStack_608 = uStack_488;
    uStack_610 = uStack_490;
    uStack_678 = uStack_4f8;
    uStack_680 = uStack_500;
    uStack_668 = uStack_4e8;
    uStack_670 = uStack_4f0;
    uStack_658 = uStack_4d8;
    uStack_660 = uStack_4e0;
    uStack_648 = uStack_4c8;
    uStack_650 = uStack_4d0;
    FUN_103571278(&uStack_1f0,&uStack_130,0x112f730b0,&UNK_10dbce2c0);
    FUN_103571278(&uStack_2b0,&uStack_130,0x112f730b0,&UNK_10dbce2c0);
    FUN_1035789ec(&uStack_680,0x112f730b0,&UNK_10dbce2c0);
LAB_103572984:
    uVar13 = param_1[0x20];
    uVar5 = param_1[0x1f];
    uVar10 = param_1[0x22];
    uVar9 = param_1[0x21];
    uVar14 = param_2[0x20];
    uVar11 = param_2[0x1f];
    uVar12 = param_2[0x22];
    uVar15 = param_2[0x21];
    uStack_2f0 = uVar11;
    uStack_2e8 = uVar14;
    uStack_2e0 = uVar15;
    uStack_2d8 = uVar12;
    uStack_2d0 = uVar5;
    uStack_2c8 = uVar13;
    uStack_2c0 = uVar9;
    uStack_2b8 = uVar10;
    if (uVar13 != 0) {
      if (uVar14 != 0) {
        if (((uVar5 == uVar11) && (uVar13 == uVar14)) ||
           (uVar4 = uVar5, func_0x000107c605b8(uVar5,uVar13,uVar11,uVar14,0), (uVar4 & 1) != 0)) {
          FUN_103571278(&uStack_2d0,&uStack_500,0x112db6f40,&UNK_10d9681d0);
          FUN_103571278(&uStack_2f0,&uStack_500,0x112db6f40,&UNK_10d9681d0);
          uVar4 = uVar9;
          func_0x000100e25fcc(uVar9,uVar10,uVar15,uVar12);
          func_0x000101597ae4(uVar11,uVar14,uVar15,uVar12);
          if ((uVar4 & 1) != 0) goto LAB_103572b5c;
        }
        else {
          FUN_103571278(&uStack_2d0,&uStack_500,0x112db6f40,&UNK_10d9681d0);
          puVar3 = &uStack_2f0;
LAB_103572da4:
          FUN_103571278(puVar3,&uStack_500,0x112db6f40,&UNK_10d9681d0);
          func_0x000101597ae4(uVar11,uVar14,uVar15,uVar12);
        }
LAB_103572dd8:
        func_0x000101597ae4(uVar5,uVar13,uVar9,uVar10);
        goto LAB_103572af8;
      }
LAB_103572a88:
      uStack_500 = uVar5;
      uStack_4f8 = uVar13;
      uStack_4f0 = uVar9;
      uStack_4e8 = uVar10;
      uStack_4e0 = uVar11;
      uStack_4d8 = uVar14;
      uStack_4d0 = uVar15;
      uStack_4c8 = uVar12;
      FUN_103571278(&uStack_2d0,&uStack_800,0x112db6f40,&UNK_10d9681d0);
      puVar3 = &uStack_2f0;
      puVar7 = &uStack_800;
LAB_103572ad4:
      FUN_103571278(puVar3,puVar7,0x112db6f40,&UNK_10d9681d0);
      uVar6 = 0x112db7ec0;
      puVar8 = &UNK_10d966840;
      puVar3 = &uStack_500;
      goto LAB_103572af4;
    }
    if (uVar14 != 0) goto LAB_103572a88;
    FUN_103571278(&uStack_2d0,&uStack_500,0x112db6f40,&UNK_10d9681d0);
    FUN_103571278(&uStack_2f0,&uStack_500,0x112db6f40,&UNK_10d9681d0);
LAB_103572b5c:
    func_0x000101597ae4(uVar5,uVar13,uVar9,uVar10);
    uVar13 = param_1[0x24];
    uVar5 = param_1[0x23];
    uVar9 = param_1[0x25];
    uVar15 = param_2[0x24];
    uVar12 = param_2[0x23];
    uVar10 = param_2[0x25];
    uStack_330 = uVar12;
    uStack_328 = uVar15;
    uStack_320 = uVar10;
    uStack_310 = uVar5;
    uStack_308 = uVar13;
    uStack_300 = uVar9;
    if (uVar9 >> 0x3c < 0xf) {
      if (uVar10 >> 0x3c < 0xf) {
        if (uVar5 == uVar12) {
          FUN_103571278(&uStack_310,&uStack_500,0x112db6f48,&UNK_10d969b40);
          FUN_103571278(&uStack_330,&uStack_500,0x112db6f48,&UNK_10d969b40);
          uVar12 = uVar13;
          func_0x000100e25fcc(uVar13,uVar9,uVar15,uVar10);
          func_0x000100d55e4c(uVar5,uVar15,uVar10);
          if ((uVar12 & 1) != 0) goto LAB_103572bf8;
        }
        else {
          FUN_103571278(&uStack_310,&uStack_500,0x112db6f48,&UNK_10d969b40);
          FUN_103571278(&uStack_330,&uStack_500,0x112db6f48,&UNK_10d969b40);
          func_0x000100d55e4c(uVar12,uVar15,uVar10);
        }
      }
      else {
LAB_103572d24:
        FUN_103571278(&uStack_310,&uStack_500,0x112db6f48,&UNK_10d969b40);
        FUN_103571278(&uStack_330,&uStack_500,0x112db6f48,&UNK_10d969b40);
        func_0x000100d55e4c(uVar5,uVar13,uVar9);
        uVar5 = uVar12;
        uVar13 = uVar15;
        uVar9 = uVar10;
      }
      func_0x000100d55e4c(uVar5,uVar13,uVar9);
      goto LAB_103572af8;
    }
    if (uVar10 >> 0x3c < 0xf) goto LAB_103572d24;
    FUN_103571278(&uStack_310,&uStack_500,0x112db6f48,&UNK_10d969b40);
    FUN_103571278(&uStack_330,&uStack_500,0x112db6f48,&UNK_10d969b40);
LAB_103572bf8:
    func_0x000100d55e4c(uVar5,uVar13,uVar9);
    uVar5 = *param_1;
    func_0x000103570808(uVar5,*param_2,FUN_103567330);
    if ((uVar5 & 1) != 0) {
      uStack_4e8 = param_1[0x29];
      uStack_4f0 = param_1[0x28];
      uStack_958 = param_1[0x2b];
      uStack_960 = param_1[0x2a];
      uStack_4d8 = param_1[0x2b];
      uStack_4e0 = param_1[0x2a];
      uStack_948 = param_1[0x2d];
      uStack_950 = param_1[0x2c];
      uStack_4c8 = param_1[0x2d];
      uStack_4d0 = param_1[0x2c];
      uStack_938 = param_1[0x2f];
      uStack_940 = param_1[0x2e];
      uStack_978 = param_1[0x27];
      uStack_980 = param_1[0x26];
      uStack_968 = param_1[0x29];
      uStack_970 = param_1[0x28];
      uStack_4f8 = param_1[0x27];
      uStack_500 = param_1[0x26];
      uStack_498 = param_2[0x29];
      uStack_4a0 = param_2[0x28];
      uStack_358 = param_2[0x2b];
      uStack_360 = param_2[0x2a];
      uStack_488 = param_2[0x2b];
      uStack_490 = param_2[0x2a];
      uStack_348 = param_2[0x2d];
      uStack_350 = param_2[0x2c];
      uStack_478 = param_2[0x2d];
      uStack_480 = param_2[0x2c];
      uStack_338 = param_2[0x2f];
      uStack_340 = param_2[0x2e];
      uStack_378 = param_2[0x27];
      uStack_380 = param_2[0x26];
      uStack_368 = param_2[0x29];
      uStack_370 = param_2[0x28];
      uStack_4a8 = param_2[0x27];
      uStack_4b0 = param_2[0x26];
      uStack_4b8 = param_1[0x2f];
      uStack_4c0 = param_1[0x2e];
      uStack_468 = param_2[0x2f];
      uStack_470 = param_2[0x2e];
      if (uStack_4f8 >> 0x3c < 0xf) {
        if (0xe < uStack_4a8 >> 0x3c) goto LAB_103572eb4;
        uStack_7d8 = param_2[0x2b];
        uStack_7e0 = param_2[0x2a];
        uStack_7c8 = param_2[0x2d];
        uStack_7d0 = param_2[0x2c];
        uStack_7b8 = param_2[0x2f];
        uStack_7c0 = param_2[0x2e];
        uStack_7f8 = param_2[0x27];
        uStack_800 = param_2[0x26];
        uStack_7e8 = param_2[0x29];
        uStack_7f0 = param_2[0x28];
        uStack_8b8 = param_1[0x27];
        uStack_8c0 = param_1[0x26];
        uStack_8a8 = param_1[0x29];
        uStack_8b0 = param_1[0x28];
        uStack_898 = param_1[0x2b];
        uStack_8a0 = param_1[0x2a];
        uStack_888 = param_1[0x2d];
        uStack_890 = param_1[0x2c];
        uStack_878 = param_1[0x2f];
        uStack_880 = param_1[0x2e];
        uStack_6f0 = uStack_800;
        uStack_6e8 = uStack_7f8;
        uStack_6e0 = uStack_7f0;
        uStack_6d8 = uStack_7e8;
        uStack_6d0 = uStack_7e0;
        uStack_6c8 = uStack_7d8;
        uStack_6c0 = uStack_7d0;
        uStack_6b8 = uStack_7c8;
        uStack_6b0 = uStack_7c0;
        uStack_6a8 = uStack_7b8;
        FUN_103571278(&uStack_980,&uStack_740,0x112f730a8,&UNK_10dbd1870);
        FUN_103571278(&uStack_380,&uStack_740,0x112f730a8,&UNK_10dbd1870);
        puVar3 = &uStack_8c0;
        FUN_1035c4a34(puVar3,&uStack_800);
        FUN_1035789ec(&uStack_6f0,0x112f730a8,&UNK_10dbd1870);
        FUN_1035789ec(&uStack_500,0x112f730a8,&UNK_10dbd1870);
        if (((ulong)puVar3 & 1) != 0) goto LAB_103572fe8;
        goto LAB_103572af8;
      }
      if (0xe < uStack_4a8 >> 0x3c) {
        uStack_7d8 = param_1[0x2b];
        uStack_7e0 = param_1[0x2a];
        uStack_7c8 = param_1[0x2d];
        uStack_7d0 = param_1[0x2c];
        uStack_7b8 = param_1[0x2f];
        uStack_7c0 = param_1[0x2e];
        uStack_7f8 = param_1[0x27];
        uStack_800 = param_1[0x26];
        uStack_7e8 = param_1[0x29];
        uStack_7f0 = param_1[0x28];
        FUN_103571278(&uStack_980,&uStack_8c0,0x112f730a8,&UNK_10dbd1870);
        FUN_103571278(&uStack_380,&uStack_8c0,0x112f730a8,&UNK_10dbd1870);
        FUN_1035789ec(&uStack_800,0x112f730a8,&UNK_10dbd1870);
LAB_103572fe8:
        uVar5 = param_1[1];
        func_0x00010355c524(uVar5,(char)param_1[2],param_2[1],*(undefined1 *)(param_2 + 2));
        if ((uVar5 & 1) == 0) goto LAB_103572af8;
        if (*(char *)(param_2 + 4) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000103573028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)(byte)(&UNK_10dbdb1d7)[param_2[3]] * 4 + 0x10357302c))();
          return uVar5;
        }
        if (param_1[3] != param_2[3]) goto LAB_103572af8;
        uVar13 = param_1[0x31];
        uVar5 = param_1[0x30];
        uVar10 = param_1[0x33];
        uVar9 = param_1[0x32];
        uVar14 = param_2[0x31];
        uVar11 = param_2[0x30];
        uVar12 = param_2[0x33];
        uVar15 = param_2[0x32];
        uStack_740 = uVar11;
        uStack_738 = uVar14;
        uStack_730 = uVar15;
        uStack_728 = uVar12;
        uStack_6f0 = uVar5;
        uStack_6e8 = uVar13;
        uStack_6e0 = uVar9;
        uStack_6d8 = uVar10;
        if (uVar13 == 0) {
          if (uVar14 == 0) {
            FUN_103571278(&uStack_6f0,&uStack_500,0x112db6f40,&UNK_10d9681d0);
            FUN_103571278(&uStack_740,&uStack_500,0x112db6f40,&UNK_10d9681d0);
            goto LAB_1035731a4;
          }
        }
        else if (uVar14 != 0) {
          if (((uVar5 != uVar11) || (uVar13 != uVar14)) &&
             (uVar4 = uVar5, func_0x000107c605b8(uVar5,uVar13,uVar11,uVar14,0), (uVar4 & 1) == 0)) {
            FUN_103571278(&uStack_6f0,&uStack_500,0x112db6f40,&UNK_10d9681d0);
            puVar3 = &uStack_740;
            goto LAB_103572da4;
          }
          FUN_103571278(&uStack_6f0,&uStack_500,0x112db6f40,&UNK_10d9681d0);
          FUN_103571278(&uStack_740,&uStack_500,0x112db6f40,&UNK_10d9681d0);
          uVar4 = uVar9;
          func_0x000100e25fcc(uVar9,uVar10,uVar15,uVar12);
          func_0x000101597ae4(uVar11,uVar14,uVar15,uVar12);
          if ((uVar4 & 1) == 0) goto LAB_103572dd8;
LAB_1035731a4:
          func_0x000101597ae4(uVar5,uVar13,uVar9,uVar10);
          uVar5 = param_1[5];
          func_0x000100e25fcc(uVar5,param_1[6],param_2[5],param_2[6]);
          uVar2 = (uint)uVar5;
          goto LAB_103572afc;
        }
        uStack_500 = uVar5;
        uStack_4f8 = uVar13;
        uStack_4f0 = uVar9;
        uStack_4e8 = uVar10;
        uStack_4e0 = uVar11;
        uStack_4d8 = uVar14;
        uStack_4d0 = uVar15;
        uStack_4c8 = uVar12;
        FUN_103571278(&uStack_6f0,auStack_6a0,0x112db6f40,&UNK_10d9681d0);
        puVar3 = &uStack_740;
        puVar7 = auStack_6a0;
        goto LAB_103572ad4;
      }
LAB_103572eb4:
      uStack_800 = uStack_500;
      uStack_7f8 = uStack_4f8;
      uStack_7f0 = uStack_4f0;
      uStack_7e8 = uStack_4e8;
      uStack_7e0 = uStack_4e0;
      uStack_7d8 = uStack_4d8;
      uStack_7d0 = uStack_4d0;
      uStack_7c8 = uStack_4c8;
      uStack_7c0 = uStack_4c0;
      uStack_7b8 = uStack_4b8;
      uStack_7b0 = uStack_4b0;
      uStack_7a8 = uStack_4a8;
      uStack_7a0 = uStack_4a0;
      uStack_798 = uStack_498;
      uStack_790 = uStack_490;
      uStack_788 = uStack_488;
      uStack_780 = uStack_480;
      uStack_778 = uStack_478;
      uStack_770 = uStack_470;
      uStack_768 = uStack_468;
      FUN_103571278(&uStack_980,&uStack_8c0,0x112f730a8,&UNK_10dbd1870);
      FUN_103571278(&uStack_380,&uStack_8c0,0x112f730a8,&UNK_10dbd1870);
      uVar6 = 0x112f74f28;
      puVar8 = &UNK_10dbdb200;
      puVar3 = &uStack_800;
      goto LAB_103572af4;
    }
  }
  else {
    uStack_778 = uStack_478;
    uStack_780 = uStack_480;
    uStack_768 = uStack_468;
    uStack_770 = uStack_470;
    uStack_758 = uStack_458;
    uStack_760 = uStack_460;
    uStack_748 = uStack_448;
    uStack_750 = uStack_450;
    uStack_7b8 = uStack_4b8;
    uStack_7c0 = uStack_4c0;
    uStack_7a8 = uStack_4a8;
    uStack_7b0 = uStack_4b0;
    uStack_798 = uStack_498;
    uStack_7a0 = uStack_4a0;
    uStack_788 = uStack_488;
    uStack_790 = uStack_490;
    uStack_7f8 = uStack_4f8;
    uStack_800 = uStack_500;
    uStack_7e8 = uStack_4e8;
    uStack_7f0 = uStack_4f0;
    uStack_7d8 = uStack_4d8;
    uStack_7e0 = uStack_4e0;
    uStack_7c8 = uStack_4c8;
    uStack_7d0 = uStack_4d0;
    iVar1 = (int)&uStack_440;
    FUN_10355c440();
    if (iVar1 != 1) {
      uStack_838 = uStack_3b8;
      uStack_840 = uStack_3c0;
      uStack_828 = uStack_3a8;
      uStack_830 = uStack_3b0;
      uStack_818 = uStack_398;
      uStack_820 = uStack_3a0;
      uStack_808 = uStack_388;
      uStack_810 = uStack_390;
      uStack_878 = uStack_3f8;
      uStack_880 = uStack_400;
      uStack_868 = uStack_3e8;
      uStack_870 = uStack_3f0;
      uStack_858 = uStack_3d8;
      uStack_860 = uStack_3e0;
      uStack_848 = uStack_3c8;
      uStack_850 = uStack_3d0;
      uStack_8b8 = uStack_438;
      uStack_8c0 = uStack_440;
      uStack_8a8 = uStack_428;
      uStack_8b0 = uStack_430;
      uStack_898 = uStack_418;
      uStack_8a0 = uStack_420;
      uStack_888 = uStack_408;
      uStack_890 = uStack_410;
      uStack_5f8 = uStack_3b8;
      uStack_600 = uStack_3c0;
      uStack_5e8 = uStack_3a8;
      uStack_5f0 = uStack_3b0;
      uStack_5d8 = uStack_398;
      uStack_5e0 = uStack_3a0;
      uStack_5c8 = uStack_388;
      uStack_5d0 = uStack_390;
      uStack_638 = uStack_3f8;
      uStack_640 = uStack_400;
      uStack_628 = uStack_3e8;
      uStack_630 = uStack_3f0;
      uStack_618 = uStack_3d8;
      uStack_620 = uStack_3e0;
      uStack_608 = uStack_3c8;
      uStack_610 = uStack_3d0;
      uStack_678 = uStack_438;
      uStack_680 = uStack_440;
      uStack_668 = uStack_428;
      uStack_670 = uStack_430;
      uStack_658 = uStack_418;
      uStack_660 = uStack_420;
      uStack_648 = uStack_408;
      uStack_650 = uStack_410;
      uStack_a8 = uStack_778;
      uStack_b0 = uStack_780;
      uStack_98 = uStack_768;
      uStack_a0 = uStack_770;
      uStack_88 = uStack_758;
      uStack_90 = uStack_760;
      uStack_78 = uStack_748;
      uStack_80 = uStack_750;
      uStack_e8 = uStack_7b8;
      uStack_f0 = uStack_7c0;
      uStack_d8 = uStack_7a8;
      uStack_e0 = uStack_7b0;
      uStack_c8 = uStack_798;
      uStack_d0 = uStack_7a0;
      uStack_b8 = uStack_788;
      uStack_c0 = uStack_790;
      uStack_128 = uStack_7f8;
      uStack_130 = uStack_800;
      uStack_118 = uStack_7e8;
      uStack_120 = uStack_7f0;
      uStack_108 = uStack_7d8;
      uStack_110 = uStack_7e0;
      uStack_f8 = uStack_7c8;
      uStack_100 = uStack_7d0;
      FUN_103571278(&uStack_1f0,&uStack_980,0x112f730b0,&UNK_10dbce2c0);
      FUN_103571278(&uStack_2b0,&uStack_980,0x112f730b0,&UNK_10dbce2c0);
      puVar3 = &uStack_130;
      FUN_1035b77e8(puVar3,&uStack_680);
      FUN_1035789ec(&uStack_8c0,0x112f730b0,&UNK_10dbce2c0);
      FUN_1035789ec(&uStack_500,0x112f730b0,&UNK_10dbce2c0);
      if (((ulong)puVar3 & 1) != 0) goto LAB_103572984;
      goto LAB_103572af8;
    }
LAB_10357280c:
    func_0x000107c610b4(&uStack_680,&uStack_500,0x180);
    FUN_103571278(&uStack_1f0,&uStack_130,0x112f730b0,&UNK_10dbce2c0);
    FUN_103571278(&uStack_2b0,&uStack_130,0x112f730b0,&UNK_10dbce2c0);
    uVar6 = 0x112f78258;
    puVar8 = &UNK_10dbdb1f0;
    puVar3 = &uStack_680;
LAB_103572af4:
    FUN_1035789ec(puVar3,uVar6,puVar8);
  }
LAB_103572af8:
  uVar2 = 0;
LAB_103572afc:
  return (ulong)(uVar2 & 1);
}



/* Entry: 10355f2f4; end: 10355f3c7;  */

void FUN_10355f2f4(undefined8 *param_1)

{
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
  
  FUN_10355c4a4(&uStack_e0);
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[6] = 0xc000000000000000;
  param_1[5] = 0;
  param_1[0x18] = uStack_58;
  param_1[0x17] = uStack_60;
  param_1[0x1a] = uStack_48;
  param_1[0x19] = uStack_50;
  param_1[0x1c] = uStack_38;
  param_1[0x1b] = uStack_40;
  param_1[0x1e] = uStack_28;
  param_1[0x1d] = uStack_30;
  param_1[0x10] = uStack_98;
  param_1[0xf] = uStack_a0;
  param_1[0x12] = uStack_88;
  param_1[0x11] = uStack_90;
  param_1[0x14] = uStack_78;
  param_1[0x13] = uStack_80;
  param_1[0x16] = uStack_68;
  param_1[0x15] = uStack_70;
  param_1[8] = uStack_d8;
  param_1[7] = uStack_e0;
  param_1[10] = uStack_c8;
  param_1[9] = uStack_d0;
  param_1[0xc] = uStack_b8;
  param_1[0xb] = uStack_c0;
  param_1[0xe] = uStack_a8;
  param_1[0xd] = uStack_b0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x25] = 0xf000000000000000;
  param_1[0x27] = 0xf000000000000000;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  return;
}



/* Entry: 10355f3c8; end: 10355f3eb;  */

undefined1  [16] FUN_10355f3c8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f155920;
  auVar1._0_8_ = 0xd000000000000037;
  return auVar1;
}



/* Entry: 10355f3ec; end: 10355f41b;  */

undefined1  [16] FUN_10355f3ec(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x28);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  return auVar1;
}



/* Entry: 10355f41c; end: 10355f44f;  */

void FUN_10355f41c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  return;
}



/* Entry: 10355f450; end: 10355f463;  */

undefined1  [16] FUN_10355f450(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x28;
  auVar1._0_8_ = 0x10355f460;
  return auVar1;
}



/* Entry: 10355f464; end: 10355f477;  */

void FUN_10355f464(void)

{
  FUN_10355ec3c();
  return;
}



/* Entry: 10355f478; end: 10355f4df;  */

void FUN_10355f478(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_1e0 [416];
  
  func_0x000107c610b4(auStack_1e0);
  FUN_10355ee20(param_1,param_2,param_3);
  return;
}



/* Entry: 10355f4e0; end: 10355f4e3;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10355f4e0(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10355f4e4; end: 10355f51b;  */

uint FUN_10355f4e4(long param_1,long param_2)

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
  func_0x00010357872c();
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



/* Entry: 10355f51c; end: 10355f56b;  */

uint FUN_10355f51c(undefined8 param_1)

{
  uint uVar1;
  undefined1 auStack_360 [416];
  undefined1 auStack_1c0 [416];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_1c0,param_1,0x1a0);
  func_0x000107c610b4(auStack_360);
  FUN_103572554(auStack_360,auStack_1c0);
  return uVar1 & 1;
}



/* Entry: 10355f56c; end: 10355f60b;  */

/* WARNING: Possible PIC construction at 0x00010355f5b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010355f5c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010355f5bc) */
/* WARNING: Removing unreachable block (ram,0x00010355f5cc) */

void FUN_10355f56c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f788c0 != -1) {
    func_0x000107c61568(0x112f788c0,FUN_10355ebf4);
  }
  uVar5 = uRam00000001138086f8;
  uVar4 = uRam00000001138086f0;
  uVar3 = uRam00000001138086e8;
  uVar2 = uRam00000001138086e0;
  uVar1 = uRam00000001138086d8;
  *param_1 = uRam00000001138086d0;
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



/* Entry: 10355f60c; end: 10355f647;  */

void FUN_10355f60c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f795f0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f795f0,&UNK_10dbdc828);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10355f648; end: 10355f753;  */

void FUN_10355f648(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_218 [72];
  undefined1 auStack_1d0 [416];
  
  func_0x000107c610b4(auStack_1d0);
  func_0x000107c6068c(auStack_218,0);
  func_0x000107c5fa50(auStack_218,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10355f754; end: 10355f7a7;  */

uint FUN_10355f754(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_360 [416];
  undefined1 auStack_1c0 [416];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_360,param_1,0x1a0);
  func_0x000107c610b4(auStack_1c0,param_2,0x1a0);
  FUN_103572554(auStack_360,auStack_1c0);
  return uVar1 & 1;
}



/* Entry: 10355f7a8; end: 10355f7ef;  */

void FUN_10355f7a8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbdd250,0xcc,2);
  uRam0000000113808708 = uStack_38;
  uRam0000000113808700 = uStack_40;
  uRam0000000113808718 = uStack_28;
  uRam0000000113808710 = uStack_30;
  uRam0000000113808728 = uStack_18;
  uRam0000000113808720 = uStack_20;
  return;
}



/* Entry: 10355f7f0; end: 10355f88f;  */

/* WARNING: Possible PIC construction at 0x00010355f83c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010355f84c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010355f840) */
/* WARNING: Removing unreachable block (ram,0x00010355f850) */

void FUN_10355f7f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f788e0 != -1) {
    func_0x000107c61568(0x112f788e0,FUN_10355f7a8);
  }
  uVar5 = uRam0000000113808728;
  uVar4 = uRam0000000113808720;
  uVar3 = uRam0000000113808718;
  uVar2 = uRam0000000113808710;
  uVar1 = uRam0000000113808708;
  *param_1 = uRam0000000113808700;
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



/* Entry: 10355f890; end: 10355f8d7;  */

void FUN_10355f890(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbdcce0,0x568,2);
  uRam0000000113808738 = uStack_38;
  uRam0000000113808730 = uStack_40;
  uRam0000000113808748 = uStack_28;
  uRam0000000113808740 = uStack_30;
  uRam0000000113808758 = uStack_18;
  uRam0000000113808750 = uStack_20;
  return;
}



/* Entry: 10355f8d8; end: 10355f913;  */

void FUN_10355f8d8(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_103570de0();
  func_0x000107c613fc();
  FUN_10355f914();
  uRam0000000112f78598 = uVar1;
  return;
}



/* Entry: 10355f914; end: 10355fc03;  */

void FUN_10355f914(void)

{
  long unaff_x20;
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
  
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 2;
  *(undefined8 *)(unaff_x20 + 0x78) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 2;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 2;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  *(undefined8 *)(unaff_x20 + 200) = 2;
  *(undefined8 *)(unaff_x20 + 0xd8) = 0;
  *(undefined8 *)(unaff_x20 + 0xd0) = 0;
  *(undefined8 *)(unaff_x20 + 0xe0) = 2;
  *(undefined8 *)(unaff_x20 + 0xf0) = 0;
  *(undefined8 *)(unaff_x20 + 0xe8) = 0;
  *(undefined8 *)(unaff_x20 + 0xf8) = 2;
  *(undefined8 *)(unaff_x20 + 0x108) = 0;
  *(undefined8 *)(unaff_x20 + 0x100) = 0;
  *(undefined8 *)(unaff_x20 + 0x118) = 0;
  *(undefined8 *)(unaff_x20 + 0x110) = 0;
  *(undefined8 *)(unaff_x20 + 0x128) = 0;
  *(undefined8 *)(unaff_x20 + 0x120) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x138) = 0;
  *(undefined8 *)(unaff_x20 + 0x130) = 0xc000000000000000;
  *(undefined8 *)(unaff_x20 + 0x148) = 0;
  *(undefined8 *)(unaff_x20 + 0x140) = 0xc000000000000000;
  *(undefined8 *)(unaff_x20 + 0x158) = 0;
  *(undefined8 *)(unaff_x20 + 0x150) = 0xc000000000000000;
  *(undefined8 *)(unaff_x20 + 0x160) = 0xc000000000000000;
  func_0x000103570e2c(&uStack_110);
  *(undefined8 *)(unaff_x20 + 0x210) = uStack_68;
  *(undefined8 *)(unaff_x20 + 0x208) = uStack_70;
  *(undefined8 *)(unaff_x20 + 0x220) = uStack_58;
  *(undefined8 *)(unaff_x20 + 0x218) = uStack_60;
  *(undefined8 *)(unaff_x20 + 0x230) = uStack_48;
  *(undefined8 *)(unaff_x20 + 0x228) = uStack_50;
  *(undefined8 *)(unaff_x20 + 0x1d0) = uStack_a8;
  *(undefined8 *)(unaff_x20 + 0x1c8) = uStack_b0;
  *(undefined8 *)(unaff_x20 + 0x1e0) = uStack_98;
  *(undefined8 *)(unaff_x20 + 0x1d8) = uStack_a0;
  *(undefined8 *)(unaff_x20 + 0x1f0) = uStack_88;
  *(undefined8 *)(unaff_x20 + 0x1e8) = uStack_90;
  *(undefined8 *)(unaff_x20 + 0x200) = uStack_78;
  *(undefined8 *)(unaff_x20 + 0x1f8) = uStack_80;
  *(undefined8 *)(unaff_x20 + 400) = uStack_e8;
  *(undefined8 *)(unaff_x20 + 0x188) = uStack_f0;
  *(undefined8 *)(unaff_x20 + 0x1a0) = uStack_d8;
  *(undefined8 *)(unaff_x20 + 0x198) = uStack_e0;
  *(undefined8 *)(unaff_x20 + 0x1b0) = uStack_c8;
  *(undefined8 *)(unaff_x20 + 0x1a8) = uStack_d0;
  *(undefined8 *)(unaff_x20 + 0x1c0) = uStack_b8;
  *(undefined8 *)(unaff_x20 + 0x1b8) = uStack_c0;
  *(undefined8 *)(unaff_x20 + 0x170) = uStack_108;
  *(undefined8 *)(unaff_x20 + 0x168) = uStack_110;
  *(undefined8 *)(unaff_x20 + 0x180) = uStack_f8;
  *(undefined8 *)(unaff_x20 + 0x178) = uStack_100;
  *(undefined8 *)(unaff_x20 + 0x238) = 0;
  *(undefined8 *)(unaff_x20 + 0x248) = 2;
  *(undefined8 *)(unaff_x20 + 0x240) = 0xc000000000000000;
  *(undefined8 *)(unaff_x20 + 0x250) = 0;
  *(undefined8 *)(unaff_x20 + 0x260) = 0;
  *(undefined8 *)(unaff_x20 + 600) = 0;
  *(undefined1 *)(unaff_x20 + 0x268) = 1;
  *(undefined8 *)(unaff_x20 + 0x278) = 0;
  *(undefined8 *)(unaff_x20 + 0x270) = 0;
  *(undefined8 *)(unaff_x20 + 0x280) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x290) = 0;
  *(undefined8 *)(unaff_x20 + 0x288) = 0;
  *(undefined8 *)(unaff_x20 + 0x298) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x2a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2b0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x2c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2c8) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x2d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2e0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x2f0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2e8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2f8) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x308) = 0;
  *(undefined8 *)(unaff_x20 + 0x300) = 0;
  *(undefined8 *)(unaff_x20 + 0x310) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 800) = 0;
  *(undefined8 *)(unaff_x20 + 0x318) = 0;
  *(undefined8 *)(unaff_x20 + 0x328) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x338) = 0;
  *(undefined8 *)(unaff_x20 + 0x330) = 0;
  *(undefined8 *)(unaff_x20 + 0x340) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x350) = 0;
  *(undefined8 *)(unaff_x20 + 0x348) = 0;
  *(undefined8 *)(unaff_x20 + 0x358) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x368) = 0;
  *(undefined8 *)(unaff_x20 + 0x360) = 0;
  *(undefined8 *)(unaff_x20 + 0x370) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x380) = 0;
  *(undefined8 *)(unaff_x20 + 0x378) = 0;
  *(undefined8 *)(unaff_x20 + 0x388) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x398) = 0;
  *(undefined8 *)(unaff_x20 + 0x390) = 0;
  *(undefined8 *)(unaff_x20 + 0x3a0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x3b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x3a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x3b8) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x3c0) = 0;
  *(undefined1 *)(unaff_x20 + 0x3c8) = 1;
  *(undefined8 *)(unaff_x20 + 0x3d8) = 0xc000000000000000;
  *(undefined8 *)(unaff_x20 + 0x3d0) = 0;
  *(undefined8 *)(unaff_x20 + 1000) = 0;
  *(undefined8 *)(unaff_x20 + 0x3e0) = 0;
  *(undefined8 *)(unaff_x20 + 0x3f0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x400) = 0;
  *(undefined8 *)(unaff_x20 + 0x3f8) = 0;
  *(undefined8 *)(unaff_x20 + 0x408) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x418) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x410) = 0;
  *(undefined8 *)(unaff_x20 + 0x428) = 0;
  *(undefined8 *)(unaff_x20 + 0x420) = 0;
  *(undefined8 *)(unaff_x20 + 0x438) = 0;
  *(undefined8 *)(unaff_x20 + 0x430) = 0;
  *(undefined8 *)(unaff_x20 + 0x448) = 0;
  *(undefined8 *)(unaff_x20 + 0x440) = 0;
  *(undefined8 *)(unaff_x20 + 0x458) = 0;
  *(undefined8 *)(unaff_x20 + 0x450) = 0;
  *(undefined8 *)(unaff_x20 + 0x468) = 0;
  *(undefined8 *)(unaff_x20 + 0x460) = 0;
  *(undefined8 *)(unaff_x20 + 0x478) = 0;
  *(undefined8 *)(unaff_x20 + 0x470) = 0;
  *(undefined8 *)(unaff_x20 + 0x488) = 0;
  *(undefined8 *)(unaff_x20 + 0x480) = 0;
  *(undefined8 *)(unaff_x20 + 0x498) = 0;
  *(undefined8 *)(unaff_x20 + 0x490) = 0;
  *(undefined8 *)(unaff_x20 + 0x4a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x4a8) = 1;
  *(undefined8 *)(unaff_x20 + 0x4d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x4d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x4c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x4c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x4b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x4b0) = 0;
  *(undefined1 *)(unaff_x20 + 0x4e0) = 1;
  *(undefined **)(unaff_x20 + 0x4e8) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + 0x4f0) = 2;
  *(undefined8 *)(unaff_x20 + 0x500) = 0;
  *(undefined8 *)(unaff_x20 + 0x4f8) = 0;
  *(undefined8 *)(unaff_x20 + 0x508) = 2;
  *(undefined8 *)(unaff_x20 + 0x520) = 0;
  *(undefined8 *)(unaff_x20 + 0x518) = 0;
  *(undefined8 *)(unaff_x20 + 0x510) = 0;
  *(undefined8 *)(unaff_x20 + 0x528) = 0xc000000000000000;
  *(undefined8 *)(unaff_x20 + 0x538) = 0;
  *(undefined8 *)(unaff_x20 + 0x530) = 0;
  *(undefined8 *)(unaff_x20 + 0x540) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x550) = 0;
  *(undefined8 *)(unaff_x20 + 0x548) = 0;
  *(undefined8 *)(unaff_x20 + 0x558) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x560) = 2;
  *(undefined8 *)(unaff_x20 + 0x570) = 0;
  *(undefined8 *)(unaff_x20 + 0x568) = 0;
  *(undefined8 *)(unaff_x20 + 0x578) = 2;
  *(undefined8 *)(unaff_x20 + 0x588) = 0;
  *(undefined8 *)(unaff_x20 + 0x580) = 0;
  *(undefined8 *)(unaff_x20 + 0x590) = 2;
  *(undefined8 *)(unaff_x20 + 0x5a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x5a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x598) = 0;
  *(undefined8 *)(unaff_x20 + 0x5b0) = 0xc000000000000000;
  *(undefined8 *)(unaff_x20 + 0x5d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x5c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x5b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x5d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x5c8) = 0;
  *(undefined1 *)(unaff_x20 + 0x5e0) = 1;
  *(undefined8 *)(unaff_x20 + 0x608) = 0;
  *(undefined8 *)(unaff_x20 + 0x5f0) = 0;
  *(undefined8 *)(unaff_x20 + 0x5e8) = 0;
  *(undefined8 *)(unaff_x20 + 0x600) = 0;
  *(undefined8 *)(unaff_x20 + 0x5f8) = 0;
  *(undefined8 *)(unaff_x20 + 0x610) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x658) = 0;
  *(undefined8 *)(unaff_x20 + 0x640) = 0;
  *(undefined8 *)(unaff_x20 + 0x638) = 0;
  *(undefined8 *)(unaff_x20 + 0x650) = 0;
  *(undefined8 *)(unaff_x20 + 0x648) = 0;
  *(undefined8 *)(unaff_x20 + 0x620) = 0;
  *(undefined8 *)(unaff_x20 + 0x618) = 0;
  *(undefined8 *)(unaff_x20 + 0x630) = 0;
  *(undefined8 *)(unaff_x20 + 0x628) = 0;
  *(undefined1 *)(unaff_x20 + 0x660) = 1;
  *(undefined8 *)(unaff_x20 + 0x668) = 2;
  *(undefined8 *)(unaff_x20 + 0x680) = 0;
  *(undefined8 *)(unaff_x20 + 0x678) = 0;
  *(undefined8 *)(unaff_x20 + 0x670) = 0;
  *(undefined1 *)(unaff_x20 + 0x688) = 1;
  *(undefined8 *)(unaff_x20 + 0x690) = 0;
  *(undefined1 *)(unaff_x20 + 0x698) = 1;
  *(undefined8 *)(unaff_x20 + 0x6a0) = 0;
  *(undefined1 *)(unaff_x20 + 0x6a8) = 1;
  *(undefined8 *)(unaff_x20 + 0x6b0) = 0;
  *(undefined1 *)(unaff_x20 + 0x6b8) = 1;
  *(undefined8 *)(unaff_x20 + 0x6c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x6c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x6d0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x710) = 0;
  *(undefined8 *)(unaff_x20 + 0x708) = 0;
  *(undefined8 *)(unaff_x20 + 0x720) = 0;
  *(undefined8 *)(unaff_x20 + 0x718) = 0;
  *(undefined8 *)(unaff_x20 + 0x6f0) = 0;
  *(undefined8 *)(unaff_x20 + 0x6e8) = 0;
  *(undefined8 *)(unaff_x20 + 0x700) = 0;
  *(undefined8 *)(unaff_x20 + 0x6f8) = 0;
  *(undefined8 *)(unaff_x20 + 0x6e0) = 0;
  *(undefined8 *)(unaff_x20 + 0x6d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x728) = 2;
  *(undefined8 *)(unaff_x20 + 0x738) = 0;
  *(undefined8 *)(unaff_x20 + 0x730) = 0;
  return;
}



/* Entry: 10355fc04; end: 103561b23;  */

void FUN_10355fc04(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long unaff_x20;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined1 auStack_11e8 [24];
  undefined1 auStack_11d0 [24];
  undefined1 auStack_11b8 [24];
  undefined1 auStack_11a0 [24];
  undefined1 auStack_1188 [24];
  undefined1 auStack_1170 [24];
  undefined1 auStack_1158 [24];
  undefined1 auStack_1140 [24];
  undefined1 auStack_1128 [24];
  undefined1 auStack_1110 [24];
  undefined1 auStack_10f8 [24];
  undefined1 auStack_10e0 [24];
  undefined1 auStack_10c8 [24];
  undefined1 auStack_10b0 [24];
  undefined1 auStack_1098 [24];
  undefined1 auStack_1080 [24];
  undefined1 auStack_1068 [24];
  undefined1 auStack_1050 [24];
  undefined1 auStack_1038 [24];
  undefined1 auStack_1020 [80];
  undefined1 auStack_fd0 [24];
  undefined1 auStack_fb8 [24];
  undefined1 auStack_fa0 [24];
  undefined1 auStack_f88 [24];
  undefined1 auStack_f70 [24];
  undefined1 auStack_f58 [24];
  undefined1 auStack_f40 [24];
  undefined1 auStack_f28 [24];
  undefined1 auStack_f10 [24];
  undefined1 auStack_ef8 [24];
  undefined1 auStack_ee0 [24];
  undefined1 auStack_ec8 [24];
  undefined1 auStack_eb0 [24];
  undefined1 auStack_e98 [24];
  undefined1 auStack_e80 [24];
  undefined1 auStack_e68 [24];
  undefined1 auStack_e50 [24];
  undefined1 auStack_e38 [24];
  undefined1 auStack_e20 [24];
  undefined1 auStack_e08 [24];
  undefined1 auStack_df0 [24];
  undefined1 auStack_dd8 [24];
  undefined1 auStack_dc0 [24];
  undefined1 auStack_da8 [24];
  undefined1 auStack_d90 [24];
  undefined1 auStack_d78 [24];
  undefined1 auStack_d60 [24];
  undefined1 auStack_d48 [24];
  undefined1 auStack_d30 [24];
  undefined1 auStack_d18 [24];
  undefined1 auStack_d00 [24];
  undefined1 auStack_ce8 [24];
  undefined8 uStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  undefined1 auStack_c70 [24];
  undefined1 auStack_c58 [24];
  undefined1 auStack_c40 [24];
  undefined1 auStack_c28 [24];
  undefined1 auStack_c10 [24];
  undefined1 auStack_bf8 [24];
  undefined1 auStack_be0 [24];
  undefined1 auStack_bc8 [24];
  undefined1 auStack_bb0 [24];
  undefined1 auStack_b98 [24];
  undefined1 auStack_b80 [24];
  undefined1 auStack_b68 [24];
  undefined1 auStack_b50 [24];
  undefined1 auStack_b38 [24];
  undefined1 auStack_b20 [24];
  undefined1 auStack_b08 [24];
  undefined1 auStack_af0 [24];
  undefined1 auStack_ad8 [24];
  undefined1 auStack_ac0 [24];
  undefined1 auStack_aa8 [24];
  undefined1 auStack_a90 [24];
  undefined1 auStack_a78 [24];
  undefined1 auStack_a60 [24];
  undefined1 auStack_a48 [24];
  undefined1 auStack_a30 [24];
  undefined1 auStack_a18 [24];
  undefined1 auStack_a00 [24];
  undefined1 auStack_9e8 [24];
  undefined1 auStack_9d0 [24];
  undefined1 auStack_9b8 [24];
  undefined1 auStack_9a0 [24];
  undefined1 auStack_988 [24];
  undefined1 auStack_970 [24];
  undefined1 auStack_958 [24];
  undefined1 auStack_940 [24];
  undefined1 auStack_928 [24];
  undefined1 auStack_910 [24];
  undefined1 auStack_8f8 [24];
  undefined1 auStack_8e0 [24];
  undefined1 auStack_8c8 [24];
  undefined1 auStack_8b0 [24];
  undefined1 auStack_898 [24];
  undefined1 auStack_880 [24];
  undefined1 auStack_868 [24];
  undefined1 auStack_850 [24];
  undefined1 auStack_838 [24];
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined1 auStack_750 [24];
  undefined1 auStack_738 [24];
  undefined1 auStack_720 [24];
  undefined1 auStack_708 [24];
  undefined1 auStack_6f0 [24];
  undefined1 auStack_6d8 [24];
  undefined1 auStack_6c0 [24];
  undefined1 auStack_6a8 [24];
  undefined1 auStack_690 [24];
  undefined1 auStack_678 [24];
  undefined1 auStack_660 [24];
  undefined1 auStack_648 [24];
  undefined1 auStack_630 [24];
  undefined1 auStack_618 [24];
  undefined1 auStack_600 [24];
  undefined1 auStack_5e8 [24];
  undefined1 auStack_5d0 [24];
  undefined1 auStack_5b8 [24];
  undefined1 auStack_5a0 [24];
  undefined1 auStack_588 [24];
  undefined1 auStack_570 [24];
  undefined1 auStack_558 [24];
  undefined1 auStack_540 [24];
  undefined1 auStack_528 [24];
  undefined1 auStack_510 [24];
  undefined1 auStack_4f8 [24];
  undefined1 auStack_4e0 [24];
  undefined1 auStack_4c8 [24];
  undefined1 auStack_4b0 [24];
  undefined1 auStack_498 [24];
  undefined1 auStack_480 [24];
  undefined1 auStack_468 [24];
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
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  puVar5 = (undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *puVar5 = 0;
  puVar6 = (undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *puVar6 = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0xf000000000000000;
  puVar7 = (undefined8 *)(unaff_x20 + 0x68);
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *puVar7 = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  puVar8 = (undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *puVar8 = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 2;
  *(undefined8 *)(unaff_x20 + 0x78) = 0xf000000000000000;
  puVar9 = (undefined8 *)(unaff_x20 + 0x98);
  *puVar9 = 2;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  puVar10 = (undefined8 *)(unaff_x20 + 0xb0);
  *puVar10 = 2;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  puVar11 = (undefined8 *)(unaff_x20 + 200);
  *puVar11 = 2;
  puVar12 = (undefined8 *)(unaff_x20 + 0xe0);
  *puVar12 = 2;
  *(undefined8 *)(unaff_x20 + 0xd8) = 0;
  *(undefined8 *)(unaff_x20 + 0xd0) = 0;
  *(undefined8 *)(unaff_x20 + 0xf0) = 0;
  *(undefined8 *)(unaff_x20 + 0xe8) = 0;
  puVar13 = (undefined8 *)(unaff_x20 + 0xf8);
  *puVar13 = 2;
  *(undefined8 *)(unaff_x20 + 0x108) = 0;
  *(undefined8 *)(unaff_x20 + 0x100) = 0;
  *(undefined8 *)(unaff_x20 + 0x118) = 0;
  *(undefined8 *)(unaff_x20 + 0x110) = 0;
  *(undefined8 *)(unaff_x20 + 0x128) = 0;
  *(undefined8 *)(unaff_x20 + 0x120) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x138) = 0;
  *(undefined8 *)(unaff_x20 + 0x130) = 0xc000000000000000;
  *(undefined8 *)(unaff_x20 + 0x148) = 0;
  *(undefined8 *)(unaff_x20 + 0x140) = 0xc000000000000000;
  *(undefined8 *)(unaff_x20 + 0x158) = 0;
  *(undefined8 *)(unaff_x20 + 0x150) = 0xc000000000000000;
  puVar1 = (undefined8 *)(unaff_x20 + 0x168);
  *(undefined8 *)(unaff_x20 + 0x160) = 0xc000000000000000;
  func_0x000103570e2c(&uStack_450);
  *(undefined8 *)(unaff_x20 + 0x210) = uStack_3a8;
  *(undefined8 *)(unaff_x20 + 0x208) = uStack_3b0;
  *(undefined8 *)(unaff_x20 + 0x220) = uStack_398;
  *(undefined8 *)(unaff_x20 + 0x218) = uStack_3a0;
  *(undefined8 *)(unaff_x20 + 0x230) = uStack_388;
  *(undefined8 *)(unaff_x20 + 0x228) = uStack_390;
  *(undefined8 *)(unaff_x20 + 0x1d0) = uStack_3e8;
  *(undefined8 *)(unaff_x20 + 0x1c8) = uStack_3f0;
  *(undefined8 *)(unaff_x20 + 0x1e0) = uStack_3d8;
  *(undefined8 *)(unaff_x20 + 0x1d8) = uStack_3e0;
  *(undefined8 *)(unaff_x20 + 0x1f0) = uStack_3c8;
  *(undefined8 *)(unaff_x20 + 0x1e8) = uStack_3d0;
  *(undefined8 *)(unaff_x20 + 0x200) = uStack_3b8;
  *(undefined8 *)(unaff_x20 + 0x1f8) = uStack_3c0;
  *(undefined8 *)(unaff_x20 + 400) = uStack_428;
  *(undefined8 *)(unaff_x20 + 0x188) = uStack_430;
  *(undefined8 *)(unaff_x20 + 0x1a0) = uStack_418;
  *(undefined8 *)(unaff_x20 + 0x198) = uStack_420;
  *(undefined8 *)(unaff_x20 + 0x1b0) = uStack_408;
  *(undefined8 *)(unaff_x20 + 0x1a8) = uStack_410;
  *(undefined8 *)(unaff_x20 + 0x1c0) = uStack_3f8;
  *(undefined8 *)(unaff_x20 + 0x1b8) = uStack_400;
  *(undefined8 *)(unaff_x20 + 0x170) = uStack_448;
  *puVar1 = uStack_450;
  *(undefined8 *)(unaff_x20 + 0x180) = uStack_438;
  *(undefined8 *)(unaff_x20 + 0x178) = uStack_440;
  *(undefined8 *)(unaff_x20 + 0x240) = 0xc000000000000000;
  *(undefined8 *)(unaff_x20 + 0x238) = 0;
  *(undefined8 *)(unaff_x20 + 0x248) = 2;
  *(undefined8 *)(unaff_x20 + 0x250) = 0;
  *(undefined8 *)(unaff_x20 + 0x260) = 0;
  *(undefined8 *)(unaff_x20 + 600) = 0;
  *(undefined1 *)(unaff_x20 + 0x268) = 1;
  *(undefined8 *)(unaff_x20 + 0x278) = 0;
  *(undefined8 *)(unaff_x20 + 0x270) = 0;
  *(undefined8 *)(unaff_x20 + 0x280) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x290) = 0;
  *(undefined8 *)(unaff_x20 + 0x288) = 0;
  *(undefined8 *)(unaff_x20 + 0x298) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x2a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2b0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x2c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2c8) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x2d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2e0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x2f0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2e8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2f8) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x308) = 0;
  *(undefined8 *)(unaff_x20 + 0x300) = 0;
  *(undefined8 *)(unaff_x20 + 0x310) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 800) = 0;
  *(undefined8 *)(unaff_x20 + 0x318) = 0;
  *(undefined8 *)(unaff_x20 + 0x328) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x338) = 0;
  *(undefined8 *)(unaff_x20 + 0x330) = 0;
  *(undefined8 *)(unaff_x20 + 0x340) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x350) = 0;
  *(undefined8 *)(unaff_x20 + 0x348) = 0;
  *(undefined8 *)(unaff_x20 + 0x358) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x368) = 0;
  *(undefined8 *)(unaff_x20 + 0x360) = 0;
  *(undefined8 *)(unaff_x20 + 0x370) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x380) = 0;
  *(undefined8 *)(unaff_x20 + 0x378) = 0;
  *(undefined8 *)(unaff_x20 + 0x388) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x398) = 0;
  *(undefined8 *)(unaff_x20 + 0x390) = 0;
  *(undefined8 *)(unaff_x20 + 0x3a0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x3b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x3a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x3c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x3b8) = 0xf000000000000000;
  *(undefined1 *)(unaff_x20 + 0x3c8) = 1;
  *(undefined8 *)(unaff_x20 + 0x3d8) = 0xc000000000000000;
  *(undefined8 *)(unaff_x20 + 0x3d0) = 0;
  *(undefined8 *)(unaff_x20 + 1000) = 0;
  *(undefined8 *)(unaff_x20 + 0x3e0) = 0;
  *(undefined8 *)(unaff_x20 + 0x3f0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x400) = 0;
  *(undefined8 *)(unaff_x20 + 0x3f8) = 0;
  *(undefined8 *)(unaff_x20 + 0x410) = 0;
  *(undefined8 *)(unaff_x20 + 0x408) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x418) = 0xf000000000000000;
  puVar2 = (undefined8 *)(unaff_x20 + 0x468);
  *(undefined8 *)(unaff_x20 + 0x428) = 0;
  *(undefined8 *)(unaff_x20 + 0x420) = 0;
  *(undefined8 *)(unaff_x20 + 0x438) = 0;
  *(undefined8 *)(unaff_x20 + 0x430) = 0;
  *(undefined8 *)(unaff_x20 + 0x448) = 0;
  *(undefined8 *)(unaff_x20 + 0x440) = 0;
  *(undefined8 *)(unaff_x20 + 0x458) = 0;
  *(undefined8 *)(unaff_x20 + 0x450) = 0;
  *(undefined8 *)(unaff_x20 + 0x468) = 0;
  *(undefined8 *)(unaff_x20 + 0x460) = 0;
  *(undefined8 *)(unaff_x20 + 0x478) = 0;
  *(undefined8 *)(unaff_x20 + 0x470) = 0;
  *(undefined8 *)(unaff_x20 + 0x488) = 0;
  *(undefined8 *)(unaff_x20 + 0x480) = 0;
  *(undefined8 *)(unaff_x20 + 0x498) = 0;
  *(undefined8 *)(unaff_x20 + 0x490) = 0;
  *(undefined8 *)(unaff_x20 + 0x4a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x4a8) = 1;
  *(undefined8 *)(unaff_x20 + 0x4d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x4d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x4c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x4c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x4b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x4b0) = 0;
  *(undefined1 *)(unaff_x20 + 0x4e0) = 1;
  *(undefined **)(unaff_x20 + 0x4e8) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + 0x4f0) = 2;
  *(undefined8 *)(unaff_x20 + 0x500) = 0;
  *(undefined8 *)(unaff_x20 + 0x4f8) = 0;
  *(undefined8 *)(unaff_x20 + 0x508) = 2;
  *(undefined8 *)(unaff_x20 + 0x520) = 0;
  *(undefined8 *)(unaff_x20 + 0x518) = 0;
  *(undefined8 *)(unaff_x20 + 0x510) = 0;
  *(undefined8 *)(unaff_x20 + 0x528) = 0xc000000000000000;
  *(undefined8 *)(unaff_x20 + 0x538) = 0;
  *(undefined8 *)(unaff_x20 + 0x530) = 0;
  *(undefined8 *)(unaff_x20 + 0x540) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x550) = 0;
  *(undefined8 *)(unaff_x20 + 0x548) = 0;
  *(undefined8 *)(unaff_x20 + 0x560) = 2;
  *(undefined8 *)(unaff_x20 + 0x558) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x570) = 0;
  *(undefined8 *)(unaff_x20 + 0x568) = 0;
  *(undefined8 *)(unaff_x20 + 0x578) = 2;
  *(undefined8 *)(unaff_x20 + 0x588) = 0;
  *(undefined8 *)(unaff_x20 + 0x580) = 0;
  *(undefined8 *)(unaff_x20 + 0x590) = 2;
  *(undefined8 *)(unaff_x20 + 0x5a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x5a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x598) = 0;
  *(undefined8 *)(unaff_x20 + 0x5b0) = 0xc000000000000000;
  *(undefined8 *)(unaff_x20 + 0x5d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x5c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x5b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x5d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x5c8) = 0;
  *(undefined1 *)(unaff_x20 + 0x5e0) = 1;
  puVar3 = (undefined8 *)(unaff_x20 + 0x608);
  *(undefined8 *)(unaff_x20 + 0x608) = 0;
  *(undefined8 *)(unaff_x20 + 0x5f0) = 0;
  *(undefined8 *)(unaff_x20 + 0x5e8) = 0;
  *(undefined8 *)(unaff_x20 + 0x600) = 0;
  *(undefined8 *)(unaff_x20 + 0x5f8) = 0;
  *(undefined8 *)(unaff_x20 + 0x610) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x658) = 0;
  *(undefined8 *)(unaff_x20 + 0x640) = 0;
  *(undefined8 *)(unaff_x20 + 0x638) = 0;
  *(undefined8 *)(unaff_x20 + 0x650) = 0;
  *(undefined8 *)(unaff_x20 + 0x648) = 0;
  *(undefined8 *)(unaff_x20 + 0x620) = 0;
  *(undefined8 *)(unaff_x20 + 0x618) = 0;
  *(undefined8 *)(unaff_x20 + 0x630) = 0;
  *(undefined8 *)(unaff_x20 + 0x628) = 0;
  *(undefined1 *)(unaff_x20 + 0x660) = 1;
  *(undefined8 *)(unaff_x20 + 0x668) = 2;
  *(undefined8 *)(unaff_x20 + 0x680) = 0;
  *(undefined8 *)(unaff_x20 + 0x678) = 0;
  *(undefined8 *)(unaff_x20 + 0x670) = 0;
  *(undefined1 *)(unaff_x20 + 0x688) = 1;
  *(undefined8 *)(unaff_x20 + 0x690) = 0;
  *(undefined1 *)(unaff_x20 + 0x698) = 1;
  *(undefined8 *)(unaff_x20 + 0x6a0) = 0;
  *(undefined1 *)(unaff_x20 + 0x6a8) = 1;
  *(undefined8 *)(unaff_x20 + 0x6b0) = 0;
  *(undefined1 *)(unaff_x20 + 0x6b8) = 1;
  *(undefined8 *)(unaff_x20 + 0x6c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x6c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x6d0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x710) = 0;
  *(undefined8 *)(unaff_x20 + 0x708) = 0;
  *(undefined8 *)(unaff_x20 + 0x720) = 0;
  *(undefined8 *)(unaff_x20 + 0x718) = 0;
  *(undefined8 *)(unaff_x20 + 0x6f0) = 0;
  *(undefined8 *)(unaff_x20 + 0x6e8) = 0;
  *(undefined8 *)(unaff_x20 + 0x700) = 0;
  *(undefined8 *)(unaff_x20 + 0x6f8) = 0;
  *(undefined8 *)(unaff_x20 + 0x6e0) = 0;
  *(undefined8 *)(unaff_x20 + 0x6d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x728) = 2;
  *(undefined8 *)(unaff_x20 + 0x738) = 0;
  *(undefined8 *)(unaff_x20 + 0x730) = 0;
  func_0x000107c61428(param_1 + 0x10,auStack_468,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x10);
  uVar20 = *(undefined8 *)(param_1 + 0x18);
  uVar15 = *(undefined8 *)(param_1 + 0x20);
  uVar16 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c61428(puVar6,auStack_480,1,0);
  uVar24 = *puVar6;
  uVar17 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar26 = *(undefined8 *)(unaff_x20 + 0x28);
  *puVar6 = uVar14;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar20;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar16;
  func_0x000101597350(uVar14,uVar20,uVar15,uVar16);
  func_0x000101597ae4(uVar24,uVar17,uVar19,uVar26);
  func_0x000107c61428(param_1 + 0x30,auStack_498,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x30);
  uVar17 = *(undefined8 *)(param_1 + 0x38);
  uVar16 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c61428(puVar5,auStack_4b0,1,0);
  uVar19 = *puVar5;
  uVar15 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x40);
  *puVar5 = uVar14;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar17;
  *(undefined8 *)(unaff_x20 + 0x40) = uVar16;
  func_0x000100d55e30(uVar14,uVar17,uVar16);
  func_0x000100d55e4c(uVar19,uVar15,uVar20);
  func_0x000107c61428(param_1 + 0x48,auStack_4c8,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x48);
  uVar20 = *(undefined8 *)(param_1 + 0x50);
  uVar15 = *(undefined8 *)(param_1 + 0x58);
  uVar16 = *(undefined8 *)(param_1 + 0x60);
  func_0x000107c61428(puVar8,auStack_4e0,1,0);
  uVar24 = *puVar8;
  uVar17 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar26 = *(undefined8 *)(unaff_x20 + 0x60);
  *puVar8 = uVar14;
  *(undefined8 *)(unaff_x20 + 0x50) = uVar20;
  *(undefined8 *)(unaff_x20 + 0x58) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x60) = uVar16;
  func_0x000101597350(uVar14,uVar20,uVar15,uVar16);
  func_0x000101597ae4(uVar24,uVar17,uVar19,uVar26);
  func_0x000107c61428(param_1 + 0x68,auStack_4f8,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x68);
  uVar17 = *(undefined8 *)(param_1 + 0x70);
  uVar16 = *(undefined8 *)(param_1 + 0x78);
  func_0x000107c61428(puVar7,auStack_510,1,0);
  uVar19 = *puVar7;
  uVar15 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x78);
  *puVar7 = uVar14;
  *(undefined8 *)(unaff_x20 + 0x70) = uVar17;
  *(undefined8 *)(unaff_x20 + 0x78) = uVar16;
  func_0x000100d55e30(uVar14,uVar17,uVar16);
  func_0x000100d55e4c(uVar19,uVar15,uVar20);
  func_0x000107c61428(param_1 + 0x80,auStack_528,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x80);
  uVar17 = *(undefined8 *)(param_1 + 0x88);
  uVar16 = *(undefined8 *)(param_1 + 0x90);
  func_0x000107c61428(unaff_x20 + 0x80,auStack_540,1,0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x90);
  *(undefined8 *)(unaff_x20 + 0x80) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x88) = uVar17;
  *(undefined8 *)(unaff_x20 + 0x90) = uVar16;
  func_0x000101541464(uVar14,uVar17,uVar16);
  func_0x000101556278(uVar15,uVar20,uVar19);
  func_0x000107c61428(param_1 + 0x98,auStack_558,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x98);
  uVar17 = *(undefined8 *)(param_1 + 0xa0);
  uVar16 = *(undefined8 *)(param_1 + 0xa8);
  func_0x000107c61428(puVar9,auStack_570,1,0);
  uVar19 = *puVar9;
  uVar15 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0xa8);
  *puVar9 = uVar14;
  *(undefined8 *)(unaff_x20 + 0xa0) = uVar17;
  *(undefined8 *)(unaff_x20 + 0xa8) = uVar16;
  func_0x000101541464(uVar14,uVar17,uVar16);
  func_0x000101556278(uVar19,uVar15,uVar20);
  func_0x000107c61428(param_1 + 0xb0,auStack_588,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0xb0);
  uVar17 = *(undefined8 *)(param_1 + 0xb8);
  uVar16 = *(undefined8 *)(param_1 + 0xc0);
  func_0x000107c61428(puVar10,auStack_5a0,1,0);
  uVar19 = *puVar10;
  uVar15 = *(undefined8 *)(unaff_x20 + 0xb8);
  uVar20 = *(undefined8 *)(unaff_x20 + 0xc0);
  *puVar10 = uVar14;
  *(undefined8 *)(unaff_x20 + 0xb8) = uVar17;
  *(undefined8 *)(unaff_x20 + 0xc0) = uVar16;
  func_0x000101541464(uVar14,uVar17,uVar16);
  func_0x000101556278(uVar19,uVar15,uVar20);
  func_0x000107c61428(param_1 + 200,auStack_5b8,0,0);
  uVar14 = *(undefined8 *)(param_1 + 200);
  uVar17 = *(undefined8 *)(param_1 + 0xd0);
  uVar16 = *(undefined8 *)(param_1 + 0xd8);
  func_0x000107c61428(puVar11,auStack_5d0,1,0);
  uVar19 = *puVar11;
  uVar15 = *(undefined8 *)(unaff_x20 + 0xd0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0xd8);
  *puVar11 = uVar14;
  *(undefined8 *)(unaff_x20 + 0xd0) = uVar17;
  *(undefined8 *)(unaff_x20 + 0xd8) = uVar16;
  func_0x000101541464(uVar14,uVar17,uVar16);
  func_0x000101556278(uVar19,uVar15,uVar20);
  func_0x000107c61428(param_1 + 0xe0,auStack_5e8,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0xe0);
  uVar17 = *(undefined8 *)(param_1 + 0xe8);
  uVar16 = *(undefined8 *)(param_1 + 0xf0);
  func_0x000107c61428(puVar12,auStack_600,1,0);
  uVar19 = *puVar12;
  uVar15 = *(undefined8 *)(unaff_x20 + 0xe8);
  uVar20 = *(undefined8 *)(unaff_x20 + 0xf0);
  *puVar12 = uVar14;
  *(undefined8 *)(unaff_x20 + 0xe8) = uVar17;
  *(undefined8 *)(unaff_x20 + 0xf0) = uVar16;
  func_0x000101541464(uVar14,uVar17,uVar16);
  func_0x000101556278(uVar19,uVar15,uVar20);
  func_0x000107c61428(param_1 + 0xf8,auStack_618,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0xf8);
  uVar17 = *(undefined8 *)(param_1 + 0x100);
  uVar16 = *(undefined8 *)(param_1 + 0x108);
  func_0x000107c61428(puVar13,auStack_630,1,0);
  uVar19 = *puVar13;
  uVar15 = *(undefined8 *)(unaff_x20 + 0x100);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x108);
  *puVar13 = uVar14;
  *(undefined8 *)(unaff_x20 + 0x100) = uVar17;
  *(undefined8 *)(unaff_x20 + 0x108) = uVar16;
  func_0x000101541464(uVar14,uVar17,uVar16);
  func_0x000101556278(uVar19,uVar15,uVar20);
  func_0x000107c61428(param_1 + 0x110,auStack_648,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x110);
  uVar17 = *(undefined8 *)(param_1 + 0x118);
  uVar16 = *(undefined8 *)(param_1 + 0x120);
  func_0x000107c61428(unaff_x20 + 0x110,auStack_660,1,0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x110);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x118);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x120);
  *(undefined8 *)(unaff_x20 + 0x110) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x118) = uVar17;
  *(undefined8 *)(unaff_x20 + 0x120) = uVar16;
  func_0x000100d55e30(uVar14,uVar17,uVar16);
  func_0x000100d55e4c(uVar15,uVar20,uVar19);
  func_0x000107c61428(param_1 + 0x128,auStack_678,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x128);
  uVar17 = *(undefined8 *)(param_1 + 0x130);
  func_0x000107c61428(unaff_x20 + 0x128,auStack_690,1,0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x128);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x130);
  *(undefined8 *)(unaff_x20 + 0x128) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x130) = uVar17;
  func_0x00010006c00c(uVar14,uVar17);
  func_0x00010006c090(uVar15,uVar20);
  func_0x000107c61428(param_1 + 0x138,auStack_6a8,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x138);
  uVar17 = *(undefined8 *)(param_1 + 0x140);
  func_0x000107c61428(unaff_x20 + 0x138,auStack_6c0,1,0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x138);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x140);
  *(undefined8 *)(unaff_x20 + 0x138) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x140) = uVar17;
  func_0x00010006c00c(uVar14,uVar17);
  func_0x00010006c090(uVar15,uVar20);
  func_0x000107c61428(param_1 + 0x148,auStack_6d8,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x148);
  uVar17 = *(undefined8 *)(param_1 + 0x150);
  func_0x000107c61428(unaff_x20 + 0x148,auStack_6f0,1,0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x148);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x150);
  *(undefined8 *)(unaff_x20 + 0x148) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x150) = uVar17;
  func_0x00010006c00c(uVar14,uVar17);
  func_0x00010006c090(uVar15,uVar20);
  func_0x000107c61428(param_1 + 0x158,auStack_708,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x158);
  uVar17 = *(undefined8 *)(param_1 + 0x160);
  func_0x000107c61428(unaff_x20 + 0x158,auStack_720,1,0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x158);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x160);
  *(undefined8 *)(unaff_x20 + 0x158) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x160) = uVar17;
  func_0x00010006c00c(uVar14,uVar17);
  func_0x00010006c090(uVar15,uVar20);
  func_0x000107c61428((undefined8 *)(param_1 + 0x168),auStack_738,0,0);
  uStack_2f8 = *(undefined8 *)(param_1 + 0x1f0);
  uStack_300 = *(undefined8 *)(param_1 + 0x1e8);
  uStack_2e8 = *(undefined8 *)(param_1 + 0x200);
  uStack_2f0 = *(undefined8 *)(param_1 + 0x1f8);
  uStack_2d8 = *(undefined8 *)(param_1 + 0x210);
  uStack_2e0 = *(undefined8 *)(param_1 + 0x208);
  uStack_2c8 = *(undefined8 *)(param_1 + 0x220);
  uStack_2d0 = *(undefined8 *)(param_1 + 0x218);
  uStack_2b8 = *(undefined8 *)(param_1 + 0x230);
  uStack_2c0 = *(undefined8 *)(param_1 + 0x228);
  uStack_338 = *(undefined8 *)(param_1 + 0x1b0);
  uStack_340 = *(undefined8 *)(param_1 + 0x1a8);
  uStack_328 = *(undefined8 *)(param_1 + 0x1c0);
  uStack_330 = *(undefined8 *)(param_1 + 0x1b8);
  uStack_318 = *(undefined8 *)(param_1 + 0x1d0);
  uStack_320 = *(undefined8 *)(param_1 + 0x1c8);
  uStack_308 = *(undefined8 *)(param_1 + 0x1e0);
  uStack_310 = *(undefined8 *)(param_1 + 0x1d8);
  uStack_378 = *(undefined8 *)(param_1 + 0x170);
  uStack_380 = *(undefined8 *)(param_1 + 0x168);
  uStack_368 = *(undefined8 *)(param_1 + 0x180);
  uStack_370 = *(undefined8 *)(param_1 + 0x178);
  uStack_358 = *(undefined8 *)(param_1 + 400);
  uStack_360 = *(undefined8 *)(param_1 + 0x188);
  uStack_348 = *(undefined8 *)(param_1 + 0x1a0);
  uStack_350 = *(undefined8 *)(param_1 + 0x198);
  func_0x000107c61428(puVar1,auStack_750,1,0);
  uStack_228 = *(undefined8 *)(unaff_x20 + 0x1f0);
  uStack_230 = *(undefined8 *)(unaff_x20 + 0x1e8);
  uStack_218 = *(undefined8 *)(unaff_x20 + 0x200);
  uStack_220 = *(undefined8 *)(unaff_x20 + 0x1f8);
  uStack_208 = *(undefined8 *)(unaff_x20 + 0x210);
  uStack_210 = *(undefined8 *)(unaff_x20 + 0x208);
  uStack_1f8 = *(undefined8 *)(unaff_x20 + 0x220);
  uStack_200 = *(undefined8 *)(unaff_x20 + 0x218);
  uStack_1e8 = *(undefined8 *)(unaff_x20 + 0x230);
  uStack_1f0 = *(undefined8 *)(unaff_x20 + 0x228);
  uStack_268 = *(undefined8 *)(unaff_x20 + 0x1b0);
  uStack_270 = *(undefined8 *)(unaff_x20 + 0x1a8);
  uStack_258 = *(undefined8 *)(unaff_x20 + 0x1c0);
  uStack_260 = *(undefined8 *)(unaff_x20 + 0x1b8);
  uStack_248 = *(undefined8 *)(unaff_x20 + 0x1d0);
  uStack_250 = *(undefined8 *)(unaff_x20 + 0x1c8);
  uStack_238 = *(undefined8 *)(unaff_x20 + 0x1e0);
  uStack_240 = *(undefined8 *)(unaff_x20 + 0x1d8);
  uStack_2a8 = *(undefined8 *)(unaff_x20 + 0x170);
  uStack_2b0 = *puVar1;
  uStack_298 = *(undefined8 *)(unaff_x20 + 0x180);
  uStack_2a0 = *(undefined8 *)(unaff_x20 + 0x178);
  uStack_288 = *(undefined8 *)(unaff_x20 + 400);
  uStack_290 = *(undefined8 *)(unaff_x20 + 0x188);
  uStack_278 = *(undefined8 *)(unaff_x20 + 0x1a0);
  uStack_280 = *(undefined8 *)(unaff_x20 + 0x198);
  *(undefined8 *)(unaff_x20 + 0x210) = uStack_2d8;
  *(undefined8 *)(unaff_x20 + 0x208) = uStack_2e0;
  *(undefined8 *)(unaff_x20 + 0x220) = uStack_2c8;
  *(undefined8 *)(unaff_x20 + 0x218) = uStack_2d0;
  *(undefined8 *)(unaff_x20 + 0x230) = uStack_2b8;
  *(undefined8 *)(unaff_x20 + 0x228) = uStack_2c0;
  *(undefined8 *)(unaff_x20 + 0x1d0) = uStack_318;
  *(undefined8 *)(unaff_x20 + 0x1c8) = uStack_320;
  *(undefined8 *)(unaff_x20 + 0x1e0) = uStack_308;
  *(undefined8 *)(unaff_x20 + 0x1d8) = uStack_310;
  *(undefined8 *)(unaff_x20 + 0x1f0) = uStack_2f8;
  *(undefined8 *)(unaff_x20 + 0x1e8) = uStack_300;
  *(undefined8 *)(unaff_x20 + 0x200) = uStack_2e8;
  *(undefined8 *)(unaff_x20 + 0x1f8) = uStack_2f0;
  *(undefined8 *)(unaff_x20 + 400) = uStack_358;
  *(undefined8 *)(unaff_x20 + 0x188) = uStack_360;
  *(undefined8 *)(unaff_x20 + 0x1a0) = uStack_348;
  *(undefined8 *)(unaff_x20 + 0x198) = uStack_350;
  *(undefined8 *)(unaff_x20 + 0x1b0) = uStack_338;
  *(undefined8 *)(unaff_x20 + 0x1a8) = uStack_340;
  *(undefined8 *)(unaff_x20 + 0x1c0) = uStack_328;
  *(undefined8 *)(unaff_x20 + 0x1b8) = uStack_330;
  *(undefined8 *)(unaff_x20 + 0x170) = uStack_378;
  *puVar1 = uStack_380;
  *(undefined8 *)(unaff_x20 + 0x180) = uStack_368;
  *(undefined8 *)(unaff_x20 + 0x178) = uStack_370;
  FUN_103571278(&uStack_380,&uStack_820,0x112f78370,&UNK_10dbdb210);
  FUN_1035789ec(&uStack_2b0,0x112f78370,&UNK_10dbdb210);
  func_0x000107c61428(param_1 + 0x238,auStack_838,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x238);
  uVar15 = *(undefined8 *)(param_1 + 0x240);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x238),auStack_850,1,0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x238);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x240);
  *(undefined8 *)(unaff_x20 + 0x238) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x240) = uVar15;
  func_0x00010006c00c(uVar14,uVar15);
  func_0x00010006c090(uVar17,uVar20);
  func_0x000107c61428(param_1 + 0x248,auStack_868,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x248);
  uVar15 = *(undefined8 *)(param_1 + 0x250);
  uVar17 = *(undefined8 *)(param_1 + 600);
  func_0x000107c61428(unaff_x20 + 0x248,auStack_880,1,0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x248);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x250);
  uVar19 = *(undefined8 *)(unaff_x20 + 600);
  *(undefined8 *)(unaff_x20 + 0x248) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x250) = uVar15;
  *(undefined8 *)(unaff_x20 + 600) = uVar17;
  func_0x000101541464(uVar14,uVar15,uVar17);
  func_0x000101556278(uVar20,uVar16,uVar19);
  func_0x000107c61428(param_1 + 0x260,auStack_898,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x260);
  uVar4 = *(undefined1 *)(param_1 + 0x268);
  func_0x000107c61428(unaff_x20 + 0x260,auStack_8b0,1,0);
  *(undefined8 *)(unaff_x20 + 0x260) = uVar14;
  *(undefined1 *)(unaff_x20 + 0x268) = uVar4;
  func_0x000107c61428(param_1 + 0x270,auStack_8c8,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x270);
  uVar15 = *(undefined8 *)(param_1 + 0x278);
  uVar17 = *(undefined8 *)(param_1 + 0x280);
  func_0x000107c61428(unaff_x20 + 0x270,auStack_8e0,1,0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x270);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x278);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x280);
  *(undefined8 *)(unaff_x20 + 0x270) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x278) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x280) = uVar17;
  func_0x000100d55e30(uVar14,uVar15,uVar17);
  func_0x000100d55e4c(uVar20,uVar16,uVar19);
  func_0x000107c61428(param_1 + 0x288,auStack_8f8,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x288);
  uVar15 = *(undefined8 *)(param_1 + 0x290);
  uVar17 = *(undefined8 *)(param_1 + 0x298);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x288),auStack_910,1,0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x288);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x290);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x298);
  *(undefined8 *)(unaff_x20 + 0x288) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x290) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x298) = uVar17;
  func_0x000100d55e30(uVar14,uVar15,uVar17);
  func_0x000100d55e4c(uVar20,uVar16,uVar19);
  func_0x000107c61428(param_1 + 0x2a0,auStack_928,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x2a0);
  uVar15 = *(undefined8 *)(param_1 + 0x2a8);
  uVar17 = *(undefined8 *)(param_1 + 0x2b0);
  func_0x000107c61428(unaff_x20 + 0x2a0,auStack_940,1,0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x2a0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x2a8);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x2b0);
  *(undefined8 *)(unaff_x20 + 0x2a0) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x2a8) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x2b0) = uVar17;
  func_0x000100d55e30(uVar14,uVar15,uVar17);
  func_0x000100d55e4c(uVar20,uVar16,uVar19);
  func_0x000107c61428(param_1 + 0x2b8,auStack_958,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x2b8);
  uVar15 = *(undefined8 *)(param_1 + 0x2c0);
  uVar17 = *(undefined8 *)(param_1 + 0x2c8);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x2b8),auStack_970,1,0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x2b8);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x2c0);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x2c8);
  *(undefined8 *)(unaff_x20 + 0x2b8) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x2c0) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x2c8) = uVar17;
  func_0x000100d55e30(uVar14,uVar15,uVar17);
  func_0x000100d55e4c(uVar20,uVar16,uVar19);
  func_0x000107c61428(param_1 + 0x2d0,auStack_988,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x2d0);
  uVar15 = *(undefined8 *)(param_1 + 0x2d8);
  uVar17 = *(undefined8 *)(param_1 + 0x2e0);
  func_0x000107c61428(unaff_x20 + 0x2d0,auStack_9a0,1,0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x2d0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x2d8);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x2e0);
  *(undefined8 *)(unaff_x20 + 0x2d0) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x2d8) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x2e0) = uVar17;
  func_0x000100d55e30(uVar14,uVar15,uVar17);
  func_0x000100d55e4c(uVar20,uVar16,uVar19);
  func_0x000107c61428(param_1 + 0x2e8,auStack_9b8,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x2e8);
  uVar15 = *(undefined8 *)(param_1 + 0x2f0);
  uVar17 = *(undefined8 *)(param_1 + 0x2f8);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x2e8),auStack_9d0,1,0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x2e8);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x2f0);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x2f8);
  *(undefined8 *)(unaff_x20 + 0x2e8) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x2f0) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x2f8) = uVar17;
  func_0x000100d55e30(uVar14,uVar15,uVar17);
  func_0x000100d55e4c(uVar20,uVar16,uVar19);
  func_0x000107c61428(param_1 + 0x300,auStack_9e8,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x300);
  uVar15 = *(undefined8 *)(param_1 + 0x308);
  uVar17 = *(undefined8 *)(param_1 + 0x310);
  func_0x000107c61428(unaff_x20 + 0x300,auStack_a00,1,0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x300);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x308);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x310);
  *(undefined8 *)(unaff_x20 + 0x300) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x308) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x310) = uVar17;
  func_0x000100d55e30(uVar14,uVar15,uVar17);
  func_0x000100d55e4c(uVar20,uVar16,uVar19);
  func_0x000107c61428(param_1 + 0x318,auStack_a18,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x318);
  uVar15 = *(undefined8 *)(param_1 + 800);
  uVar17 = *(undefined8 *)(param_1 + 0x328);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x318),auStack_a30,1,0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x318);
  uVar16 = *(undefined8 *)(unaff_x20 + 800);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x328);
  *(undefined8 *)(unaff_x20 + 0x318) = uVar14;
  *(undefined8 *)(unaff_x20 + 800) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x328) = uVar17;
  func_0x000100d55e30(uVar14,uVar15,uVar17);
  func_0x000100d55e4c(uVar20,uVar16,uVar19);
  func_0x000107c61428(param_1 + 0x330,auStack_a48,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x330);
  uVar15 = *(undefined8 *)(param_1 + 0x338);
  uVar17 = *(undefined8 *)(param_1 + 0x340);
  func_0x000107c61428(unaff_x20 + 0x330,auStack_a60,1,0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x330);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x338);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x340);
  *(undefined8 *)(unaff_x20 + 0x330) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x338) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x340) = uVar17;
  func_0x000100d55e30(uVar14,uVar15,uVar17);
  func_0x000100d55e4c(uVar20,uVar16,uVar19);
  func_0x000107c61428(param_1 + 0x348,auStack_a78,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x348);
  uVar15 = *(undefined8 *)(param_1 + 0x350);
  uVar17 = *(undefined8 *)(param_1 + 0x358);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x348),auStack_a90,1,0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x348);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x350);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x358);
  *(undefined8 *)(unaff_x20 + 0x348) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x350) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x358) = uVar17;
  func_0x000100d55e30(uVar14,uVar15,uVar17);
  func_0x000100d55e4c(uVar20,uVar16,uVar19);
  func_0x000107c61428(param_1 + 0x360,auStack_aa8,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x360);
  uVar15 = *(undefined8 *)(param_1 + 0x368);
  uVar17 = *(undefined8 *)(param_1 + 0x370);
  func_0x000107c61428(unaff_x20 + 0x360,auStack_ac0,1,0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x360);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x368);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x370);
  *(undefined8 *)(unaff_x20 + 0x360) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x368) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x370) = uVar17;
  func_0x000100d55e30(uVar14,uVar15,uVar17);
  func_0x000100d55e4c(uVar20,uVar16,uVar19);
  func_0x000107c61428(param_1 + 0x378,auStack_ad8,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x378);
  uVar15 = *(undefined8 *)(param_1 + 0x380);
  uVar17 = *(undefined8 *)(param_1 + 0x388);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x378),auStack_af0,1,0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x378);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x380);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x388);
  *(undefined8 *)(unaff_x20 + 0x378) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x380) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x388) = uVar17;
  func_0x000100d55e30(uVar14,uVar15,uVar17);
  func_0x000100d55e4c(uVar20,uVar16,uVar19);
  func_0x000107c61428(param_1 + 0x390,auStack_b08,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x390);
  uVar15 = *(undefined8 *)(param_1 + 0x398);
  uVar17 = *(undefined8 *)(param_1 + 0x3a0);
  func_0x000107c61428(unaff_x20 + 0x390,auStack_b20,1,0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x390);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x398);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x3a0);
  *(undefined8 *)(unaff_x20 + 0x390) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x398) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x3a0) = uVar17;
  func_0x000100d55e30(uVar14,uVar15,uVar17);
  func_0x000100d55e4c(uVar20,uVar16,uVar19);
  func_0x000107c61428(param_1 + 0x3a8,auStack_b38,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x3a8);
  uVar15 = *(undefined8 *)(param_1 + 0x3b0);
  uVar17 = *(undefined8 *)(param_1 + 0x3b8);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x3a8),auStack_b50,1,0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x3a8);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x3b0);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x3b8);
  *(undefined8 *)(unaff_x20 + 0x3a8) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x3b0) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x3b8) = uVar17;
  func_0x000100d55e30(uVar14,uVar15,uVar17);
  func_0x000100d55e4c(uVar20,uVar16,uVar19);
  func_0x000107c61428(param_1 + 0x3c0,auStack_b68,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x3c0);
  uVar4 = *(undefined1 *)(param_1 + 0x3c8);
  func_0x000107c61428(unaff_x20 + 0x3c0,auStack_b80,1,0);
  *(undefined8 *)(unaff_x20 + 0x3c0) = uVar14;
  *(undefined1 *)(unaff_x20 + 0x3c8) = uVar4;
  func_0x000107c61428(param_1 + 0x3d0,auStack_b98,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x3d0);
  uVar15 = *(undefined8 *)(param_1 + 0x3d8);
  func_0x000107c61428(unaff_x20 + 0x3d0,auStack_bb0,1,0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x3d0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x3d8);
  *(undefined8 *)(unaff_x20 + 0x3d0) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x3d8) = uVar15;
  func_0x00010006c00c(uVar14,uVar15);
  func_0x00010006c090(uVar17,uVar20);
  func_0x000107c61428(param_1 + 0x3e0,auStack_bc8,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x3e0);
  uVar15 = *(undefined8 *)(param_1 + 1000);
  uVar17 = *(undefined8 *)(param_1 + 0x3f0);
  func_0x000107c61428(unaff_x20 + 0x3e0,auStack_be0,1,0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x3e0);
  uVar16 = *(undefined8 *)(unaff_x20 + 1000);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x3f0);
  *(undefined8 *)(unaff_x20 + 0x3e0) = uVar14;
  *(undefined8 *)(unaff_x20 + 1000) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x3f0) = uVar17;
  func_0x000100d55e30(uVar14,uVar15,uVar17);
  func_0x000100d55e4c(uVar20,uVar16,uVar19);
  func_0x000107c61428(param_1 + 0x3f8,auStack_bf8,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x3f8);
  uVar15 = *(undefined8 *)(param_1 + 0x400);
  uVar17 = *(undefined8 *)(param_1 + 0x408);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x3f8),auStack_c10,1,0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x3f8);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x400);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x408);
  *(undefined8 *)(unaff_x20 + 0x3f8) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x400) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x408) = uVar17;
  func_0x000100d55e30(uVar14,uVar15,uVar17);
  func_0x000100d55e4c(uVar20,uVar16,uVar19);
  func_0x000107c61428(param_1 + 0x410,auStack_c28,0,0);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x438);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x430);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x448);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x440);
  uStack_198 = *(undefined8 *)(param_1 + 0x458);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x450);
  uStack_190 = *(undefined8 *)(param_1 + 0x460);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x418);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x410);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x428);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x420);
  func_0x000107c61428(unaff_x20 + 0x410,auStack_c40,1,0);
  uStack_158 = *(undefined8 *)(unaff_x20 + 0x438);
  uStack_160 = *(undefined8 *)(unaff_x20 + 0x430);
  uStack_148 = *(undefined8 *)(unaff_x20 + 0x448);
  uStack_150 = *(undefined8 *)(unaff_x20 + 0x440);
  uStack_138 = *(undefined8 *)(unaff_x20 + 0x458);
  uStack_140 = *(undefined8 *)(unaff_x20 + 0x450);
  uStack_130 = *(undefined8 *)(unaff_x20 + 0x460);
  uStack_178 = *(undefined8 *)(unaff_x20 + 0x418);
  uStack_180 = *(undefined8 *)(unaff_x20 + 0x410);
  uStack_168 = *(undefined8 *)(unaff_x20 + 0x428);
  uStack_170 = *(undefined8 *)(unaff_x20 + 0x420);
  *(undefined8 *)(unaff_x20 + 0x438) = uStack_1b8;
  *(undefined8 *)(unaff_x20 + 0x430) = uStack_1c0;
  *(undefined8 *)(unaff_x20 + 0x448) = uStack_1a8;
  *(undefined8 *)(unaff_x20 + 0x440) = uStack_1b0;
  *(undefined8 *)(unaff_x20 + 0x458) = uStack_198;
  *(undefined8 *)(unaff_x20 + 0x450) = uStack_1a0;
  *(undefined8 *)(unaff_x20 + 0x460) = uStack_190;
  *(undefined8 *)(unaff_x20 + 0x418) = uStack_1d8;
  *(undefined8 *)(unaff_x20 + 0x410) = uStack_1e0;
  *(undefined8 *)(unaff_x20 + 0x428) = uStack_1c8;
  *(undefined8 *)(unaff_x20 + 0x420) = uStack_1d0;
  FUN_103571278(&uStack_1e0,&uStack_820,0x112f78380,&UNK_10dbdb220);
  FUN_1035789ec(&uStack_180,0x112f78380,&UNK_10dbdb220);
  func_0x000107c61428((undefined8 *)(param_1 + 0x468),auStack_c58,0,0);
  uStack_f8 = *(undefined8 *)(param_1 + 0x490);
  uStack_100 = *(undefined8 *)(param_1 + 0x488);
  uStack_e8 = *(undefined8 *)(param_1 + 0x4a0);
  uStack_f0 = *(undefined8 *)(param_1 + 0x498);
  uStack_d8 = *(undefined8 *)(param_1 + 0x4b0);
  uStack_e0 = *(undefined8 *)(param_1 + 0x4a8);
  uStack_d0 = *(undefined8 *)(param_1 + 0x4b8);
  uStack_118 = *(undefined8 *)(param_1 + 0x470);
  uStack_120 = *(undefined8 *)(param_1 + 0x468);
  uStack_108 = *(undefined8 *)(param_1 + 0x480);
  uStack_110 = *(undefined8 *)(param_1 + 0x478);
  func_0x000107c61428(puVar2,auStack_c70,1,0);
  uStack_7f8 = *(undefined8 *)(unaff_x20 + 0x490);
  uStack_800 = *(undefined8 *)(unaff_x20 + 0x488);
  uStack_7e8 = *(undefined8 *)(unaff_x20 + 0x4a0);
  uStack_7f0 = *(undefined8 *)(unaff_x20 + 0x498);
  uStack_7d8 = *(undefined8 *)(unaff_x20 + 0x4b0);
  uStack_7e0 = *(undefined8 *)(unaff_x20 + 0x4a8);
  uStack_7d0 = *(undefined8 *)(unaff_x20 + 0x4b8);
  uStack_818 = *(undefined8 *)(unaff_x20 + 0x470);
  uStack_820 = *puVar2;
  uStack_808 = *(undefined8 *)(unaff_x20 + 0x480);
  uStack_810 = *(undefined8 *)(unaff_x20 + 0x478);
  *(undefined8 *)(unaff_x20 + 0x490) = uStack_f8;
  *(undefined8 *)(unaff_x20 + 0x488) = uStack_100;
  *(undefined8 *)(unaff_x20 + 0x4a0) = uStack_e8;
  *(undefined8 *)(unaff_x20 + 0x498) = uStack_f0;
  *(undefined8 *)(unaff_x20 + 0x4b0) = uStack_d8;
  *(undefined8 *)(unaff_x20 + 0x4a8) = uStack_e0;
  *(undefined8 *)(unaff_x20 + 0x4b8) = uStack_d0;
  *(undefined8 *)(unaff_x20 + 0x470) = uStack_118;
  *puVar2 = uStack_120;
  *(undefined8 *)(unaff_x20 + 0x480) = uStack_108;
  *(undefined8 *)(unaff_x20 + 0x478) = uStack_110;
  FUN_103571278(&uStack_120,&uStack_cd0,0x112f73c80,&UNK_10dbcfb80);
  FUN_1035789ec(&uStack_820,0x112f73c80,&UNK_10dbcfb80);
  func_0x000107c61428(param_1 + 0x4c0,auStack_ce8,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x4c0);
  uVar15 = *(undefined8 *)(param_1 + 0x4c8);
  uVar17 = *(undefined8 *)(param_1 + 0x4d0);
  func_0x000107c61428(unaff_x20 + 0x4c0,auStack_d00,1,0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x4c0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x4c8);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x4d0);
  *(undefined8 *)(unaff_x20 + 0x4c0) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x4c8) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x4d0) = uVar17;
  FUN_103570e54(uVar14,uVar15,uVar17);
  func_0x000103570e88(uVar20,uVar16,uVar19);
  func_0x000107c61428(param_1 + 0x4d8,auStack_d18,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x4d8);
  uVar4 = *(undefined1 *)(param_1 + 0x4e0);
  func_0x000107c61428(unaff_x20 + 0x4d8,auStack_d30,1,0);
  *(undefined8 *)(unaff_x20 + 0x4d8) = uVar14;
  *(undefined1 *)(unaff_x20 + 0x4e0) = uVar4;
  func_0x000107c61428(param_1 + 0x4e8,auStack_d48,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x4e8);
  func_0x000107c61428(unaff_x20 + 0x4e8,auStack_d60,1,0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x4e8);
  *(undefined8 *)(unaff_x20 + 0x4e8) = uVar14;
  func_0x000107c61434(uVar14);
  func_0x000107c6142c(uVar15);
  func_0x000107c61428(param_1 + 0x4f0,auStack_d78,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x4f0);
  uVar15 = *(undefined8 *)(param_1 + 0x4f8);
  uVar17 = *(undefined8 *)(param_1 + 0x500);
  func_0x000107c61428(unaff_x20 + 0x4f0,auStack_d90,1,0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x4f0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x4f8);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x500);
  *(undefined8 *)(unaff_x20 + 0x4f0) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x4f8) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x500) = uVar17;
  func_0x000101541464(uVar14,uVar15,uVar17);
  func_0x000101556278(uVar20,uVar16,uVar19);
  func_0x000107c61428(param_1 + 0x508,auStack_da8,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x508);
  uVar15 = *(undefined8 *)(param_1 + 0x510);
  uVar17 = *(undefined8 *)(param_1 + 0x518);
  func_0x000107c61428(unaff_x20 + 0x508,auStack_dc0,1,0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x508);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x510);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x518);
  *(undefined8 *)(unaff_x20 + 0x508) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x510) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x518) = uVar17;
  func_0x000101541464(uVar14,uVar15,uVar17);
  func_0x000101556278(uVar20,uVar16,uVar19);
  func_0x000107c61428(param_1 + 0x520,auStack_dd8,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x520);
  uVar15 = *(undefined8 *)(param_1 + 0x528);
  func_0x000107c61428(unaff_x20 + 0x520,auStack_df0,1,0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x520);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x528);
  *(undefined8 *)(unaff_x20 + 0x520) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x528) = uVar15;
  func_0x00010006c00c(uVar14,uVar15);
  func_0x00010006c090(uVar17,uVar20);
  func_0x000107c61428(param_1 + 0x530,auStack_e08,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x530);
  uVar15 = *(undefined8 *)(param_1 + 0x538);
  uVar17 = *(undefined8 *)(param_1 + 0x540);
  func_0x000107c61428(unaff_x20 + 0x530,auStack_e20,1,0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x530);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x538);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x540);
  *(undefined8 *)(unaff_x20 + 0x530) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x538) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x540) = uVar17;
  func_0x000100d55e30(uVar14,uVar15,uVar17);
  func_0x000100d55e4c(uVar20,uVar16,uVar19);
  func_0x000107c61428(param_1 + 0x548,auStack_e38,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x548);
  uVar15 = *(undefined8 *)(param_1 + 0x550);
  uVar17 = *(undefined8 *)(param_1 + 0x558);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x548),auStack_e50,1,0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x548);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x550);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x558);
  *(undefined8 *)(unaff_x20 + 0x548) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x550) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x558) = uVar17;
  func_0x000100d55e30(uVar14,uVar15,uVar17);
  func_0x000100d55e4c(uVar20,uVar16,uVar19);
  func_0x000107c61428(param_1 + 0x560,auStack_e68,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x560);
  uVar15 = *(undefined8 *)(param_1 + 0x568);
  uVar17 = *(undefined8 *)(param_1 + 0x570);
  func_0x000107c61428(unaff_x20 + 0x560,auStack_e80,1,0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x560);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x568);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x570);
  *(undefined8 *)(unaff_x20 + 0x560) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x568) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x570) = uVar17;
  func_0x000101541464(uVar14,uVar15,uVar17);
  func_0x000101556278(uVar20,uVar16,uVar19);
  func_0x000107c61428(param_1 + 0x578,auStack_e98,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x578);
  uVar15 = *(undefined8 *)(param_1 + 0x580);
  uVar17 = *(undefined8 *)(param_1 + 0x588);
  func_0x000107c61428(unaff_x20 + 0x578,auStack_eb0,1,0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x578);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x580);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x588);
  *(undefined8 *)(unaff_x20 + 0x578) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x580) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x588) = uVar17;
  func_0x000101541464(uVar14,uVar15,uVar17);
  func_0x000101556278(uVar20,uVar16,uVar19);
  func_0x000107c61428(param_1 + 0x590,auStack_ec8,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x590);
  uVar15 = *(undefined8 *)(param_1 + 0x598);
  uVar17 = *(undefined8 *)(param_1 + 0x5a0);
  func_0x000107c61428(unaff_x20 + 0x590,auStack_ee0,1,0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x590);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x598);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x5a0);
  *(undefined8 *)(unaff_x20 + 0x590) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x598) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x5a0) = uVar17;
  func_0x000101541464(uVar14,uVar15,uVar17);
  func_0x000101556278(uVar20,uVar16,uVar19);
  func_0x000107c61428(param_1 + 0x5a8,auStack_ef8,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x5a8);
  uVar15 = *(undefined8 *)(param_1 + 0x5b0);
  func_0x000107c61428(unaff_x20 + 0x5a8,auStack_f10,1,0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x5a8);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x5b0);
  *(undefined8 *)(unaff_x20 + 0x5a8) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x5b0) = uVar15;
  func_0x00010006c00c(uVar14,uVar15);
  func_0x00010006c090(uVar17,uVar20);
  func_0x000107c61428(param_1 + 0x5b8,auStack_f28,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x5b8);
  uVar15 = *(undefined8 *)(param_1 + 0x5c0);
  uVar17 = *(undefined8 *)(param_1 + 0x5c8);
  uVar20 = *(undefined8 *)(param_1 + 0x5d0);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x5b8),auStack_f40,1,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x5b8);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x5c0);
  uVar24 = *(undefined8 *)(unaff_x20 + 0x5c8);
  uVar26 = *(undefined8 *)(unaff_x20 + 0x5d0);
  *(undefined8 *)(unaff_x20 + 0x5b8) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x5c0) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x5c8) = uVar17;
  *(undefined8 *)(unaff_x20 + 0x5d0) = uVar20;
  func_0x000101597350(uVar14,uVar15,uVar17,uVar20);
  func_0x000101597ae4(uVar16,uVar19,uVar24,uVar26);
  func_0x000107c61428(param_1 + 0x5d8,auStack_f58,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x5d8);
  uVar4 = *(undefined1 *)(param_1 + 0x5e0);
  func_0x000107c61428(unaff_x20 + 0x5d8,auStack_f70,1,0);
  *(undefined8 *)(unaff_x20 + 0x5d8) = uVar14;
  *(undefined1 *)(unaff_x20 + 0x5e0) = uVar4;
  func_0x000107c61428(param_1 + 0x5e8,auStack_f88,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x5e8);
  uVar15 = *(undefined8 *)(param_1 + 0x5f0);
  uVar17 = *(undefined8 *)(param_1 + 0x5f8);
  uVar20 = *(undefined8 *)(param_1 + 0x600);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x5e8),auStack_fa0,1,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x5e8);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x5f0);
  uVar24 = *(undefined8 *)(unaff_x20 + 0x5f8);
  uVar26 = *(undefined8 *)(unaff_x20 + 0x600);
  *(undefined8 *)(unaff_x20 + 0x5e8) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x5f0) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x5f8) = uVar17;
  *(undefined8 *)(unaff_x20 + 0x600) = uVar20;
  func_0x000101597350(uVar14,uVar15,uVar17,uVar20);
  func_0x000101597ae4(uVar16,uVar19,uVar24,uVar26);
  func_0x000107c61428((undefined8 *)(param_1 + 0x608),auStack_fb8,0,0);
  uStack_b8 = *(undefined8 *)(param_1 + 0x610);
  uStack_c0 = *(undefined8 *)(param_1 + 0x608);
  uStack_a8 = *(undefined8 *)(param_1 + 0x620);
  uStack_b0 = *(undefined8 *)(param_1 + 0x618);
  uStack_98 = *(undefined8 *)(param_1 + 0x630);
  uStack_a0 = *(undefined8 *)(param_1 + 0x628);
  uStack_88 = *(undefined8 *)(param_1 + 0x640);
  uStack_90 = *(undefined8 *)(param_1 + 0x638);
  uStack_78 = *(undefined8 *)(param_1 + 0x650);
  uStack_80 = *(undefined8 *)(param_1 + 0x648);
  func_0x000107c61428(puVar3,auStack_fd0,1,0);
  uStack_ca8 = *(undefined8 *)(unaff_x20 + 0x630);
  uStack_cb0 = *(undefined8 *)(unaff_x20 + 0x628);
  uStack_c98 = *(undefined8 *)(unaff_x20 + 0x640);
  uStack_ca0 = *(undefined8 *)(unaff_x20 + 0x638);
  uStack_c88 = *(undefined8 *)(unaff_x20 + 0x650);
  uStack_c90 = *(undefined8 *)(unaff_x20 + 0x648);
  uStack_cc8 = *(undefined8 *)(unaff_x20 + 0x610);
  uStack_cd0 = *puVar3;
  uStack_cb8 = *(undefined8 *)(unaff_x20 + 0x620);
  uStack_cc0 = *(undefined8 *)(unaff_x20 + 0x618);
  *(undefined8 *)(unaff_x20 + 0x630) = uStack_98;
  *(undefined8 *)(unaff_x20 + 0x628) = uStack_a0;
  *(undefined8 *)(unaff_x20 + 0x640) = uStack_88;
  *(undefined8 *)(unaff_x20 + 0x638) = uStack_90;
  *(undefined8 *)(unaff_x20 + 0x650) = uStack_78;
  *(undefined8 *)(unaff_x20 + 0x648) = uStack_80;
  *(undefined8 *)(unaff_x20 + 0x610) = uStack_b8;
  *puVar3 = uStack_c0;
  *(undefined8 *)(unaff_x20 + 0x620) = uStack_a8;
  *(undefined8 *)(unaff_x20 + 0x618) = uStack_b0;
  FUN_103571278(&uStack_c0,auStack_1020,0x112f730a8,&UNK_10dbd1870);
  FUN_1035789ec(&uStack_cd0,0x112f730a8,&UNK_10dbd1870);
  func_0x000107c61428(param_1 + 0x658,auStack_1020,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x658);
  uVar4 = *(undefined1 *)(param_1 + 0x660);
  func_0x000107c61428(unaff_x20 + 0x658,auStack_1038,1,0);
  *(undefined8 *)(unaff_x20 + 0x658) = uVar14;
  *(undefined1 *)(unaff_x20 + 0x660) = uVar4;
  func_0x000107c61428(param_1 + 0x668,auStack_1050,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x668);
  uVar15 = *(undefined8 *)(param_1 + 0x670);
  uVar17 = *(undefined8 *)(param_1 + 0x678);
  func_0x000107c61428(unaff_x20 + 0x668,auStack_1068,1,0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x668);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x670);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x678);
  *(undefined8 *)(unaff_x20 + 0x668) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x670) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x678) = uVar17;
  func_0x000101541464(uVar14,uVar15,uVar17);
  func_0x000101556278(uVar20,uVar16,uVar19);
  func_0x000107c61428(param_1 + 0x680,auStack_1080,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x680);
  uVar4 = *(undefined1 *)(param_1 + 0x688);
  func_0x000107c61428(unaff_x20 + 0x680,auStack_1098,1,0);
  *(undefined8 *)(unaff_x20 + 0x680) = uVar14;
  *(undefined1 *)(unaff_x20 + 0x688) = uVar4;
  func_0x000107c61428(param_1 + 0x690,auStack_10b0,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x690);
  uVar4 = *(undefined1 *)(param_1 + 0x698);
  func_0x000107c61428(unaff_x20 + 0x690,auStack_10c8,1,0);
  *(undefined8 *)(unaff_x20 + 0x690) = uVar14;
  *(undefined1 *)(unaff_x20 + 0x698) = uVar4;
  func_0x000107c61428(param_1 + 0x6a0,auStack_10e0,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x6a0);
  uVar4 = *(undefined1 *)(param_1 + 0x6a8);
  func_0x000107c61428(unaff_x20 + 0x6a0,auStack_10f8,1,0);
  *(undefined8 *)(unaff_x20 + 0x6a0) = uVar14;
  *(undefined1 *)(unaff_x20 + 0x6a8) = uVar4;
  func_0x000107c61428(param_1 + 0x6b0,auStack_1110,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x6b0);
  uVar4 = *(undefined1 *)(param_1 + 0x6b8);
  func_0x000107c61428(unaff_x20 + 0x6b0,auStack_1128,1,0);
  *(undefined8 *)(unaff_x20 + 0x6b0) = uVar14;
  *(undefined1 *)(unaff_x20 + 0x6b8) = uVar4;
  func_0x000107c61428(param_1 + 0x6c0,auStack_1140,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x6c0);
  uVar15 = *(undefined8 *)(param_1 + 0x6c8);
  uVar17 = *(undefined8 *)(param_1 + 0x6d0);
  func_0x000107c61428(unaff_x20 + 0x6c0,auStack_1158,1,0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x6c0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x6c8);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x6d0);
  *(undefined8 *)(unaff_x20 + 0x6c0) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x6c8) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x6d0) = uVar17;
  func_0x000100d55e30(uVar14,uVar15,uVar17);
  func_0x000100d55e4c(uVar20,uVar16,uVar19);
  func_0x000107c61428(param_1 + 0x6d8,auStack_1170,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x6d8);
  uVar15 = *(undefined8 *)(param_1 + 0x6e0);
  uVar17 = *(undefined8 *)(param_1 + 0x6e8);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x6d8),auStack_1188,1,0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x6d8);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x6e0);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x6e8);
  *(undefined8 *)(unaff_x20 + 0x6d8) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x6e0) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x6e8) = uVar17;
  FUN_1035711fc(uVar14,uVar15,uVar17);
  func_0x000103571228(uVar20,uVar16,uVar19);
  func_0x000107c61428(param_1 + 0x6f0,auStack_11a0,0,0);
  uVar24 = *(undefined8 *)(param_1 + 0x6f0);
  uVar26 = *(undefined8 *)(param_1 + 0x6f8);
  uVar18 = *(undefined8 *)(param_1 + 0x700);
  uVar21 = *(undefined8 *)(param_1 + 0x708);
  uVar22 = *(undefined8 *)(param_1 + 0x710);
  uVar23 = *(undefined8 *)(param_1 + 0x718);
  uVar25 = *(undefined8 *)(param_1 + 0x720);
  func_0x000107c61428(unaff_x20 + 0x6f0,auStack_11b8,1,0);
  uVar27 = *(undefined8 *)(unaff_x20 + 0x6f0);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x6f8);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x700);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x708);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x710);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x718);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x720);
  *(undefined8 *)(unaff_x20 + 0x6f0) = uVar24;
  *(undefined8 *)(unaff_x20 + 0x6f8) = uVar26;
  *(undefined8 *)(unaff_x20 + 0x700) = uVar18;
  *(undefined8 *)(unaff_x20 + 0x708) = uVar21;
  *(undefined8 *)(unaff_x20 + 0x710) = uVar22;
  *(undefined8 *)(unaff_x20 + 0x718) = uVar23;
  *(undefined8 *)(unaff_x20 + 0x720) = uVar25;
  FUN_103570ebc(uVar24,uVar26,uVar18,uVar21,uVar22,uVar23,uVar25);
  func_0x000103570f28(uVar27,uVar14,uVar16,uVar15,uVar19,uVar17,uVar20);
  func_0x000107c61428(param_1 + 0x728,auStack_11d0,0,0);
  uVar20 = *(undefined8 *)(param_1 + 0x728);
  uVar16 = *(undefined8 *)(param_1 + 0x730);
  uVar19 = *(undefined8 *)(param_1 + 0x738);
  func_0x000101541464(uVar20,uVar16,uVar19);
  func_0x000107c61574(param_1);
  func_0x000107c61428(unaff_x20 + 0x728,auStack_11e8,1,0);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x728);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x730);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x738);
  *(undefined8 *)(unaff_x20 + 0x728) = uVar20;
  *(undefined8 *)(unaff_x20 + 0x730) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x738) = uVar19;
  func_0x000101556278(uVar14,uVar15,uVar17);
  return;
}



/* Entry: 103561b24; end: 103561f03;  */

void FUN_103561b24(void)

{
  long unaff_x20;
  
  func_0x000101597ae4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100d55e4c(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40));
  func_0x000101597ae4(*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                      *(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000100d55e4c(*(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70),
                      *(undefined8 *)(unaff_x20 + 0x78));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                      *(undefined8 *)(unaff_x20 + 0x90));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x98),*(undefined8 *)(unaff_x20 + 0xa0),
                      *(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                      *(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 200),*(undefined8 *)(unaff_x20 + 0xd0),
                      *(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                      *(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0xf8),*(undefined8 *)(unaff_x20 + 0x100),
                      *(undefined8 *)(unaff_x20 + 0x108));
  func_0x000100d55e4c(*(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                      *(undefined8 *)(unaff_x20 + 0x120));
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x128),*(undefined8 *)(unaff_x20 + 0x130));
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x138),*(undefined8 *)(unaff_x20 + 0x140));
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x148),*(undefined8 *)(unaff_x20 + 0x150));
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x158),*(undefined8 *)(unaff_x20 + 0x160));
  FUN_1035789ec(unaff_x20 + 0x168,0x112f78370,&UNK_10dbdb210);
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x238),*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x248),*(undefined8 *)(unaff_x20 + 0x250),
                      *(undefined8 *)(unaff_x20 + 600));
  func_0x000100d55e4c(*(undefined8 *)(unaff_x20 + 0x270),*(undefined8 *)(unaff_x20 + 0x278),
                      *(undefined8 *)(unaff_x20 + 0x280));
  func_0x000100d55e4c(*(undefined8 *)(unaff_x20 + 0x288),*(undefined8 *)(unaff_x20 + 0x290),
                      *(undefined8 *)(unaff_x20 + 0x298));
  func_0x000100d55e4c(*(undefined8 *)(unaff_x20 + 0x2a0),*(undefined8 *)(unaff_x20 + 0x2a8),
                      *(undefined8 *)(unaff_x20 + 0x2b0));
  func_0x000100d55e4c(*(undefined8 *)(unaff_x20 + 0x2b8),*(undefined8 *)(unaff_x20 + 0x2c0),
                      *(undefined8 *)(unaff_x20 + 0x2c8));
  func_0x000100d55e4c(*(undefined8 *)(unaff_x20 + 0x2d0),*(undefined8 *)(unaff_x20 + 0x2d8),
                      *(undefined8 *)(unaff_x20 + 0x2e0));
  func_0x000100d55e4c(*(undefined8 *)(unaff_x20 + 0x2e8),*(undefined8 *)(unaff_x20 + 0x2f0),
                      *(undefined8 *)(unaff_x20 + 0x2f8));
  func_0x000100d55e4c(*(undefined8 *)(unaff_x20 + 0x300),*(undefined8 *)(unaff_x20 + 0x308),
                      *(undefined8 *)(unaff_x20 + 0x310));
  func_0x000100d55e4c(*(undefined8 *)(unaff_x20 + 0x318),*(undefined8 *)(unaff_x20 + 800),
                      *(undefined8 *)(unaff_x20 + 0x328));
  func_0x000100d55e4c(*(undefined8 *)(unaff_x20 + 0x330),*(undefined8 *)(unaff_x20 + 0x338),
                      *(undefined8 *)(unaff_x20 + 0x340));
  func_0x000100d55e4c(*(undefined8 *)(unaff_x20 + 0x348),*(undefined8 *)(unaff_x20 + 0x350),
                      *(undefined8 *)(unaff_x20 + 0x358));
  func_0x000100d55e4c(*(undefined8 *)(unaff_x20 + 0x360),*(undefined8 *)(unaff_x20 + 0x368),
                      *(undefined8 *)(unaff_x20 + 0x370));
  func_0x000100d55e4c(*(undefined8 *)(unaff_x20 + 0x378),*(undefined8 *)(unaff_x20 + 0x380),
                      *(undefined8 *)(unaff_x20 + 0x388));
  func_0x000100d55e4c(*(undefined8 *)(unaff_x20 + 0x390),*(undefined8 *)(unaff_x20 + 0x398),
                      *(undefined8 *)(unaff_x20 + 0x3a0));
  func_0x000100d55e4c(*(undefined8 *)(unaff_x20 + 0x3a8),*(undefined8 *)(unaff_x20 + 0x3b0),
                      *(undefined8 *)(unaff_x20 + 0x3b8));
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x3d0),*(undefined8 *)(unaff_x20 + 0x3d8));
  func_0x000100d55e4c(*(undefined8 *)(unaff_x20 + 0x3e0),*(undefined8 *)(unaff_x20 + 1000),
                      *(undefined8 *)(unaff_x20 + 0x3f0));
  func_0x000100d55e4c(*(undefined8 *)(unaff_x20 + 0x3f8),*(undefined8 *)(unaff_x20 + 0x400),
                      *(undefined8 *)(unaff_x20 + 0x408));
  FUN_103578400(*(undefined8 *)(unaff_x20 + 0x410),*(undefined8 *)(unaff_x20 + 0x418),
                *(undefined8 *)(unaff_x20 + 0x420),*(undefined8 *)(unaff_x20 + 0x428),
                *(undefined8 *)(unaff_x20 + 0x430),*(undefined8 *)(unaff_x20 + 0x438),
                *(undefined8 *)(unaff_x20 + 0x440),*(undefined8 *)(unaff_x20 + 0x448),
                *(undefined8 *)(unaff_x20 + 0x450),*(undefined8 *)(unaff_x20 + 0x458),
                *(undefined8 *)(unaff_x20 + 0x460));
  FUN_103578498(*(undefined8 *)(unaff_x20 + 0x468),*(undefined8 *)(unaff_x20 + 0x470),
                *(undefined8 *)(unaff_x20 + 0x478),*(undefined8 *)(unaff_x20 + 0x480),
                *(undefined8 *)(unaff_x20 + 0x488),*(undefined8 *)(unaff_x20 + 0x490),
                *(undefined8 *)(unaff_x20 + 0x498),*(undefined8 *)(unaff_x20 + 0x4a0),
                *(undefined8 *)(unaff_x20 + 0x4a8),*(undefined8 *)(unaff_x20 + 0x4b0),
                *(undefined8 *)(unaff_x20 + 0x4b8));
  func_0x000103570e88(*(undefined8 *)(unaff_x20 + 0x4c0),*(undefined8 *)(unaff_x20 + 0x4c8),
                      *(undefined8 *)(unaff_x20 + 0x4d0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x4e8));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x4f0),*(undefined8 *)(unaff_x20 + 0x4f8),
                      *(undefined8 *)(unaff_x20 + 0x500));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x508),*(undefined8 *)(unaff_x20 + 0x510),
                      *(undefined8 *)(unaff_x20 + 0x518));
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x520),*(undefined8 *)(unaff_x20 + 0x528));
  func_0x000100d55e4c(*(undefined8 *)(unaff_x20 + 0x530),*(undefined8 *)(unaff_x20 + 0x538),
                      *(undefined8 *)(unaff_x20 + 0x540));
  func_0x000100d55e4c(*(undefined8 *)(unaff_x20 + 0x548),*(undefined8 *)(unaff_x20 + 0x550),
                      *(undefined8 *)(unaff_x20 + 0x558));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x560),*(undefined8 *)(unaff_x20 + 0x568),
                      *(undefined8 *)(unaff_x20 + 0x570));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x578),*(undefined8 *)(unaff_x20 + 0x580),
                      *(undefined8 *)(unaff_x20 + 0x588));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x590),*(undefined8 *)(unaff_x20 + 0x598),
                      *(undefined8 *)(unaff_x20 + 0x5a0));
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x5a8),*(undefined8 *)(unaff_x20 + 0x5b0));
  func_0x000101597ae4(*(undefined8 *)(unaff_x20 + 0x5b8),*(undefined8 *)(unaff_x20 + 0x5c0),
                      *(undefined8 *)(unaff_x20 + 0x5c8),*(undefined8 *)(unaff_x20 + 0x5d0));
  func_0x000101597ae4(*(undefined8 *)(unaff_x20 + 0x5e8),*(undefined8 *)(unaff_x20 + 0x5f0),
                      *(undefined8 *)(unaff_x20 + 0x5f8),*(undefined8 *)(unaff_x20 + 0x600));
  FUN_10350164c(*(undefined8 *)(unaff_x20 + 0x608),*(undefined8 *)(unaff_x20 + 0x610),
                *(undefined8 *)(unaff_x20 + 0x618),*(undefined8 *)(unaff_x20 + 0x620),
                *(undefined8 *)(unaff_x20 + 0x628),*(undefined8 *)(unaff_x20 + 0x630),
                *(undefined8 *)(unaff_x20 + 0x638),*(undefined8 *)(unaff_x20 + 0x640),
                *(undefined8 *)(unaff_x20 + 0x648),*(undefined8 *)(unaff_x20 + 0x650));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x668),*(undefined8 *)(unaff_x20 + 0x670),
                      *(undefined8 *)(unaff_x20 + 0x678));
  func_0x000100d55e4c(*(undefined8 *)(unaff_x20 + 0x6c0),*(undefined8 *)(unaff_x20 + 0x6c8),
                      *(undefined8 *)(unaff_x20 + 0x6d0));
  func_0x000103571228(*(undefined8 *)(unaff_x20 + 0x6d8),*(undefined8 *)(unaff_x20 + 0x6e0),
                      *(undefined8 *)(unaff_x20 + 0x6e8));
  func_0x000103570f28(*(undefined8 *)(unaff_x20 + 0x6f0),*(undefined8 *)(unaff_x20 + 0x6f8),
                      *(undefined8 *)(unaff_x20 + 0x700),*(undefined8 *)(unaff_x20 + 0x708),
                      *(undefined8 *)(unaff_x20 + 0x710),*(undefined8 *)(unaff_x20 + 0x718),
                      *(undefined8 *)(unaff_x20 + 0x720));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x728),*(undefined8 *)(unaff_x20 + 0x730),
                      *(undefined8 *)(unaff_x20 + 0x738));
  return;
}



/* Entry: 103561f04; end: 103562747;  */

/* WARNING: Removing unreachable block (ram,0x000103562000) */
/* WARNING: Removing unreachable block (ram,0x0001035622fc) */
/* WARNING: Removing unreachable block (ram,0x000103562220) */
/* WARNING: Removing unreachable block (ram,0x0001035624b8) */
/* WARNING: Removing unreachable block (ram,0x00010356250c) */
/* WARNING: Removing unreachable block (ram,0x0001035624f0) */
/* WARNING: Removing unreachable block (ram,0x000103562318) */
/* WARNING: Removing unreachable block (ram,0x0001035624d4) */
/* WARNING: Removing unreachable block (ram,0x000103562408) */
/* WARNING: Removing unreachable block (ram,0x00010356257c) */
/* WARNING: Removing unreachable block (ram,0x0001035622d0) */
/* WARNING: Removing unreachable block (ram,0x000103562694) */
/* WARNING: Removing unreachable block (ram,0x000103562640) */
/* WARNING: Removing unreachable block (ram,0x000103562528) */
/* WARNING: Removing unreachable block (ram,0x000103562544) */
/* WARNING: Removing unreachable block (ram,0x0001035620a8) */
/* WARNING: Removing unreachable block (ram,0x000103562038) */
/* WARNING: Removing unreachable block (ram,0x000103562598) */
/* WARNING: Removing unreachable block (ram,0x0001035623ec) */
/* WARNING: Removing unreachable block (ram,0x00010356201c) */
/* WARNING: Removing unreachable block (ram,0x000103562704) */
/* WARNING: Removing unreachable block (ram,0x0001035621a8) */
/* WARNING: Removing unreachable block (ram,0x000103562720) */
/* WARNING: Removing unreachable block (ram,0x000103562054) */
/* WARNING: Removing unreachable block (ram,0x0001035626cc) */
/* WARNING: Removing unreachable block (ram,0x0001035625d0) */
/* WARNING: Removing unreachable block (ram,0x000103562608) */
/* WARNING: Removing unreachable block (ram,0x000103562424) */
/* WARNING: Removing unreachable block (ram,0x000103562334) */
/* WARNING: Removing unreachable block (ram,0x00010356245c) */
/* WARNING: Removing unreachable block (ram,0x000103562258) */
/* WARNING: Removing unreachable block (ram,0x0001035621c4) */
/* WARNING: Removing unreachable block (ram,0x00010356208c) */
/* WARNING: Removing unreachable block (ram,0x0001035626b0) */
/* WARNING: Removing unreachable block (ram,0x0001035626e8) */
/* WARNING: Removing unreachable block (ram,0x000103562204) */
/* WARNING: Removing unreachable block (ram,0x000103562070) */
/* WARNING: Removing unreachable block (ram,0x000103562560) */
/* WARNING: Removing unreachable block (ram,0x0001035625ec) */
/* WARNING: Removing unreachable block (ram,0x00010356223c) */
/* WARNING: Removing unreachable block (ram,0x000103562678) */
/* WARNING: Removing unreachable block (ram,0x0001035620c4) */
/* WARNING: Removing unreachable block (ram,0x00010356218c) */
/* WARNING: Removing unreachable block (ram,0x0001035623b4) */
/* WARNING: Removing unreachable block (ram,0x00010356265c) */
/* WARNING: Removing unreachable block (ram,0x0001035620e0) */
/* WARNING: Removing unreachable block (ram,0x0001035622b4) */
/* WARNING: Removing unreachable block (ram,0x000103562624) */
/* WARNING: Removing unreachable block (ram,0x000103562478) */
/* WARNING: Removing unreachable block (ram,0x0001035625b4) */
/* WARNING: Removing unreachable block (ram,0x0001035623d0) */
/* WARNING: Removing unreachable block (ram,0x000103562298) */
/* WARNING: Removing unreachable block (ram,0x00010356236c) */
/* WARNING: Removing unreachable block (ram,0x000103562440) */
/* WARNING: Removing unreachable block (ram,0x000103562350) */
/* WARNING: Removing unreachable block (ram,0x000103562398) */
/* WARNING: Removing unreachable block (ram,0x000103562744) */

void FUN_103561f04(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  undefined1 auStack_68 [24];
  
  pcVar4 = *(code **)(param_4 + 0x10);
  lVar1 = param_3;
  lVar2 = param_4;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(lVar1) {
      case 1:
        FUN_10356d910(param_2,param_1,param_3,param_4);
        break;
      case 2:
        FUN_10356d9a4(param_2,param_1,param_3,param_4,&SUB_1015c5cfc,&UNK_110790a00);
        break;
      case 3:
        FUN_10356da44(param_2,param_1,param_3,param_4,&SUB_101568c04,&UNK_110790c80);
        break;
      case 4:
        FUN_103562748(param_2,param_1,param_3,param_4);
        break;
      case 5:
        FUN_1035627dc(param_2,param_1,param_3,param_4);
        break;
      case 6:
        FUN_103562870(param_2,param_1,param_3,param_4);
        break;
      case 7:
        FUN_103562904(param_2,param_1,param_3,param_4);
        break;
      case 8:
        FUN_103562998(param_2,param_1,param_3,param_4);
        break;
      case 9:
        FUN_103562a2c(param_2,param_1,param_3,param_4);
        break;
      case 10:
        FUN_103562ac0(param_2,param_1,param_3,param_4);
        break;
      case 0xb:
        FUN_103562b54(param_2,param_1,param_3,param_4);
        break;
      case 0xc:
        func_0x000107c61428(param_1 + 0x128,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x168);
        lVar1 = param_1 + 0x128;
        goto code_r0x000103561f8c;
      case 0xd:
        func_0x000107c61428(param_1 + 0x138,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x168);
        lVar1 = param_1 + 0x138;
        goto code_r0x000103561f8c;
      case 0xe:
        func_0x000107c61428(param_1 + 0x148,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x168);
        lVar1 = param_1 + 0x148;
        goto code_r0x000103561f8c;
      case 0xf:
        func_0x000107c61428(param_1 + 0x158,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x168);
        lVar1 = param_1 + 0x158;
        goto code_r0x000103561f8c;
      case 0x10:
        FUN_103562be8(param_2,param_1,param_3,param_4);
        break;
      case 0x11:
        func_0x000107c61428(param_1 + 0x238,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x168);
        lVar1 = param_1 + 0x238;
        goto code_r0x000103561f8c;
      case 0x12:
        FUN_103562c7c(param_2,param_1,param_3,param_4);
        break;
      case 0x13:
        FUN_103562d10(param_2,param_1,param_3,param_4);
        break;
      case 0x14:
        FUN_103562da4(param_2,param_1,param_3,param_4);
        break;
      case 0x15:
        FUN_103562e38(param_2,param_1,param_3,param_4);
        break;
      case 0x16:
        FUN_103562ecc(param_2,param_1,param_3,param_4);
        break;
      case 0x17:
        FUN_103562f60(param_2,param_1,param_3,param_4);
        break;
      case 0x18:
        FUN_103562ff4(param_2,param_1,param_3,param_4);
        break;
      case 0x19:
        FUN_103563088(param_2,param_1,param_3,param_4);
        break;
      case 0x1a:
        FUN_10356311c(param_2,param_1,param_3,param_4);
        break;
      case 0x1b:
        FUN_1035631b0(param_2,param_1,param_3,param_4);
        break;
      case 0x1c:
        FUN_103563244(param_2,param_1,param_3,param_4);
        break;
      case 0x1d:
        FUN_1035632d8(param_2,param_1,param_3,param_4);
        break;
      case 0x1e:
        FUN_10356336c(param_2,param_1,param_3,param_4);
        break;
      case 0x1f:
        FUN_103563400(param_2,param_1,param_3,param_4);
        break;
      case 0x20:
        FUN_103563494(param_2,param_1,param_3,param_4);
        break;
      case 0x21:
        FUN_103563528(param_2,param_1,param_3,param_4);
        break;
      case 0x22:
        FUN_1035635bc(param_2,param_1,param_3,param_4);
        break;
      case 0x23:
        func_0x000107c61428(param_1 + 0x3d0,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x168);
        lVar1 = param_1 + 0x3d0;
        goto code_r0x000103561f8c;
      case 0x24:
        FUN_103563650(param_2,param_1,param_3,param_4);
        break;
      case 0x25:
        FUN_1035636e4(param_2,param_1,param_3,param_4);
        break;
      case 0x26:
        FUN_103563778(param_2,param_1,param_3,param_4);
        break;
      case 0x27:
        FUN_10356380c(param_2,param_1,param_3,param_4);
        break;
      case 0x28:
        FUN_1035638a0(param_2,param_1,param_3,param_4);
        break;
      case 0x29:
        FUN_103563934(param_2,param_1,param_3,param_4);
        break;
      case 0x2a:
        FUN_1035639c8(param_2,param_1,param_3,param_4);
        break;
      case 0x2b:
        FUN_103563a5c(param_2,param_1,param_3,param_4);
        break;
      case 0x2c:
        FUN_103563af0(param_2,param_1,param_3,param_4);
        break;
      case 0x2d:
        func_0x000107c61428(param_1 + 0x520,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x168);
        lVar1 = param_1 + 0x520;
        goto code_r0x000103561f8c;
      case 0x2e:
        FUN_103563b84(param_2,param_1,param_3,param_4);
        break;
      case 0x2f:
        FUN_103563c18(param_2,param_1,param_3,param_4);
        break;
      case 0x30:
        FUN_103563cac(param_2,param_1,param_3,param_4);
        break;
      case 0x31:
        FUN_103563d40(param_2,param_1,param_3,param_4);
        break;
      case 0x32:
        FUN_103563dd4(param_2,param_1,param_3,param_4);
        break;
      case 0x33:
        func_0x000107c61428(param_1 + 0x5a8,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x168);
        lVar1 = param_1 + 0x5a8;
code_r0x000103561f8c:
        (*pcVar3)(lVar1,param_3,param_4);
        func_0x000107c614a8(auStack_68);
        break;
      case 0x34:
        FUN_103563e68(param_2,param_1,param_3,param_4);
        break;
      case 0x35:
        FUN_103563efc(param_2,param_1,param_3,param_4);
        break;
      case 0x36:
        FUN_103563f90(param_2,param_1,param_3,param_4);
        break;
      case 0x37:
        FUN_103564024(param_2,param_1,param_3,param_4);
        break;
      case 0x38:
        FUN_1035640b8(param_2,param_1,param_3,param_4);
        break;
      case 0x39:
        FUN_10356414c(param_2,param_1,param_3,param_4);
        break;
      case 0x3a:
        FUN_1035641e0(param_2,param_1,param_3,param_4);
        break;
      case 0x3b:
        FUN_103564274(param_2,param_1,param_3,param_4);
        break;
      case 0x3c:
        FUN_103564308(param_2,param_1,param_3,param_4);
        break;
      case 0x3d:
        FUN_10356439c(param_2,param_1,param_3,param_4);
        break;
      case 0x3e:
        FUN_103564430(param_2,param_1,param_3,param_4);
        break;
      case 0x3f:
        FUN_1035644c4(param_2,param_1,param_3,param_4);
        break;
      case 0x40:
        FUN_103564558(param_2,param_1,param_3,param_4);
        break;
      default:
        if (lVar1 == 0x41) {
          FUN_1035645ec(param_2,param_1,param_3,param_4);
        }
      }
      lVar1 = param_3;
      lVar2 = param_4;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103562748; end: 1035627db;  */

void FUN_103562748(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x68;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x68,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035627dc; end: 10356286f;  */

void FUN_1035627dc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x80;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfec();
  (*pcVar2)(param_2 + 0x80,&UNK_110790c00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103562870; end: 103562903;  */

void FUN_103562870(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x98;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfec();
  (*pcVar2)(param_2 + 0x98,&UNK_110790c00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103562904; end: 103562997;  */

void FUN_103562904(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xb0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfec();
  (*pcVar2)(param_2 + 0xb0,&UNK_110790c00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103562998; end: 103562a2b;  */

void FUN_103562998(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 200;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfec();
  (*pcVar2)(param_2 + 200,&UNK_110790c00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103562a2c; end: 103562abf;  */

void FUN_103562a2c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xe0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfec();
  (*pcVar2)(param_2 + 0xe0,&UNK_110790c00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103562ac0; end: 103562b53;  */

void FUN_103562ac0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xf8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfec();
  (*pcVar2)(param_2 + 0xf8,&UNK_110790c00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}


