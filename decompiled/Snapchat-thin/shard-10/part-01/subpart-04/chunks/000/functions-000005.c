/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1077a10c0; end: 1077a1157;  */

long FUN_1077a10c0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107785684();
  func_0x0001077a3274();
  func_0x0001074c3fe8(lVar1 + 0x168,param_2 + 0x168);
  func_0x0001074c4610(param_1 + 0x860,param_2 + 0x860);
  func_0x0001077a1158(param_1 + 0xfc8,param_2 + 0xfc8);
  func_0x0001077a14c4(param_1 + 0xfe0,param_2 + 0xfe0);
  return param_1;
}



/* Entry: 1077a1304; end: 1077a139b;  */

long FUN_1077a1304(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_48 = 0;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (; lStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 0xe98) {
    func_0x0001074c3f94(param_4,param_2);
    param_4 = lStack_38 + 0xe98;
  }
  uStack_48 = 1;
  func_0x0001077a139c(&uStack_60);
  return param_4;
}



/* Entry: 1077a1564; end: 1077a1597;  */

void FUN_1077a1564(void)

{
  func_0x0001077a157c();
  return;
}



/* Entry: 1077a1a70; end: 1077a1a73;  */

undefined8 FUN_1077a1a70(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 extraout_w8;
  undefined1 *extraout_x9;
  undefined1 *extraout_x9_00;
  undefined1 *extraout_x9_01;
  long extraout_x9_02;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  
  uVar1 = *(undefined8 *)*param_1;
  func_0x000107349544(uVar1,0);
  func_0x00010734ac10(uVar1);
  func_0x000107349658();
  func_0x00010734aa78();
  *extraout_x9 = 0x6e;
  func_0x00010734aa78();
  *extraout_x9_00 = 0x75;
  func_0x00010734aa78();
  *extraout_x9_01 = 0x6c;
  func_0x00010734ab28();
  *(undefined8 *)(extraout_x9_02 + 0x18) = extraout_x11;
  *extraout_x10 = extraout_w8;
  return 1;
}



/* Entry: 1077a1bd4; end: 1077a1bf3;  */

void FUN_1077a1bd4(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001077a1bf4(&uStack_18);
  return;
}



/* Entry: 1077a1d08; end: 1077a1d2b;  */

void FUN_1077a1d08(void)

{
  func_0x0001077a2fbc();
  func_0x0001077f2a50();
  func_0x0001077a2dac();
  return;
}



/* Entry: 1077a1e68; end: 1077a1ecf;  */

undefined8 FUN_1077a1e68(long param_1)

{
  long extraout_x8;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 **ppuStack_28;
  
  uStack_30 = 0;
  if (*(int *)(param_1 + 0x30) == 0) {
    uStack_30 = 0;
  }
  else {
    puStack_38 = &uStack_30;
    func_0x0001073f6a54();
    ppuStack_28 = &puStack_38;
    func_0x0001077a2ef8(*(undefined4 *)(param_1 + 0x30));
    (*(code *)(&PTR_DAT_1109da240)[extraout_x8])(&ppuStack_28,param_1);
  }
  return uStack_30;
}



/* Entry: 1077a2010; end: 1077a204f;  */

void FUN_1077a2010(void)

{
  func_0x0001077a321c();
  func_0x0001077a2a74();
  return;
}



/* Entry: 1077a211c; end: 1077a2123;  */

void FUN_1077a211c(undefined8 *param_1)

{
  ulong uVar1;
  
  uVar1 = **(ulong **)*param_1;
  **(ulong **)*param_1 = uVar1 * 0x1000 + (uVar1 >> 4) + 0x9e3779b97f4a7c15 ^ uVar1;
  return;
}



/* Entry: 1077a2320; end: 1077a235f;  */

long FUN_1077a2320(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0xfc8) + (ulong)*(ushort *)*param_1 * 0xe98 + 0x3a8;
  func_0x000107483150(lVar1,param_1[1] + 8);
  return lVar1;
}



/* Entry: 1077a2560; end: 1077a25ff;  */

void FUN_1077a2560(void)

{
  int extraout_w8;
  long unaff_x19;
  
  func_0x0001077a3144();
  if (extraout_w8 != 0) {
    func_0x0001074c44f4();
    *(undefined4 *)(unaff_x19 + 0x30) = 0;
  }
  return;
}



/* Entry: 1077a27f0; end: 1077a288b;  */

void FUN_1077a27f0(void)

{
  int extraout_w8;
  long unaff_x19;
  
  func_0x0001077a3144();
  if (extraout_w8 != 0) {
    func_0x0001077a3214();
    *(undefined4 *)(unaff_x19 + 0x30) = 0;
  }
  return;
}



/* Entry: 1077a374c; end: 1077a37c3;  */

/* WARNING: Possible PIC construction at 0x0001077a38b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077a38b4) */

undefined1 * FUN_1077a374c(long param_1)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  short *extraout_x8;
  undefined8 ***pppuVar6;
  undefined *puVar7;
  undefined8 auStack_fa0 [2];
  undefined8 **ppuStack_f70;
  undefined *puStack_f68;
  undefined1 auStack_f60 [56];
  undefined1 auStack_f28 [1784];
  undefined1 auStack_830 [1904];
  undefined8 *puStack_a0;
  undefined *puStack_98;
  undefined4 uStack_84;
  undefined1 auStack_80 [56];
  undefined1 uStack_48;
  undefined8 uStack_40;
  
  func_0x0001077a400c();
  auStack_80[0] = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_84 = 0;
  puVar5 = auStack_80;
  func_0x0001073837dc(param_1 + 0x168);
  puVar2 = auStack_80;
  func_0x00010724b3d8();
  func_0x0001077a3fe0();
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar2 = auStack_80;
  func_0x00010724b3d8();
  func_0x0001077a4004();
  puStack_98 = &UNK_1077a37c4;
  puVar3 = auStack_f60;
  puVar4 = auStack_f60;
  puVar1 = (undefined8 *)auStack_f60;
  puStack_a0 = (undefined8 *)&stack0xfffffffffffffff0;
  func_0x0001077a400c();
  func_0x000104c2f64c(auStack_f60);
  _bzero(auStack_f28,0x6f8);
  func_0x0001077a17f0(auStack_830);
  func_0x0001077a3934(puVar2 + 0xfc8,auStack_f60);
  func_0x0001074c49a8();
  *extraout_x8 = (short)((*(long *)(puVar2 + 0xfd0) - *(long *)(puVar2 + 0xfc8)) / 0xe98) + -1;
  extraout_x8[0xc] = 1;
  extraout_x8[0xd] = 0;
  func_0x0001077a3fe0();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001074c49a8();
    func_0x0001077a4004();
    puStack_f68 = &DAT_1077a386c;
    ppuStack_f70 = &puStack_a0;
    if ((*(long *)(puVar4 + 0x10) == 0) || (*(long *)(*(long *)(puVar4 + 0x10) + 8) != 0)) {
      func_0x00010779d418(auStack_fa0,*(undefined8 *)(puVar4 + 8));
      func_0x0001077a4020(auStack_fa0[0]);
      puVar1 = auStack_fa0;
      puVar3 = puVar5;
      puVar2 = puVar4;
      pppuVar6 = &ppuStack_f70;
      puVar7 = &UNK_1077a38b4;
    }
    else {
      func_0x0001077a4020(*(undefined8 *)(puVar4 + 8));
      pppuVar6 = (undefined8 ***)ppuStack_f70;
      puVar7 = puStack_f68;
    }
    *(undefined1 **)((long)puVar1 + -0x20) = puVar2;
    *(undefined1 **)((long)puVar1 + -0x18) = puVar3;
    *(undefined8 ****)((long)puVar1 + -0x10) = pppuVar6;
    *(undefined **)((long)puVar1 + -8) = puVar7;
    func_0x000104c342bc();
    func_0x000104c2f698();
    *(undefined8 *)(puVar2 + 0x30) = *(undefined8 *)(puVar3 + 0x30);
    return puVar2;
  }
  return puVar3;
}



/* Entry: 1077a3a44; end: 1077a3d47;  */

long FUN_1077a3a44(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000104c318bc();
  func_0x0001077a3a80(lVar1 + 0x38,param_2 + 0x38);
  func_0x0001077a3bdc(param_1 + 0x730,param_2 + 0x730);
  return param_1;
}



/* Entry: 1077a3fcc; end: 1077a4033;  */

void FUN_1077a3fcc(void)

{
  return;
}



/* Entry: 1077a439c; end: 1077a43cf;  */

void FUN_1077a439c(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001077a9518(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001077acb74();
  return;
}



/* Entry: 1077a58c0; end: 1077a593b;  */

void FUN_1077a58c0(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  ulong unaff_x21;
  undefined8 uStack_40;
  
  func_0x0001077ac9ec();
  func_0x000107786038();
  if ((unaff_x21 & 1) == 0) {
    if ((*(long *)(unaff_x19 + 0x10) == 0) || (*(long *)(*(long *)(unaff_x19 + 0x10) + 8) != 0)) {
      func_0x0001077aca38();
      func_0x0001077acee0(uStack_40);
      func_0x0001077aca44();
      func_0x0001077acb74();
    }
    else {
      func_0x0001077acee0(*unaff_x20);
    }
    func_0x0001077ac848();
  }
  return;
}



/* Entry: 1077a91d8; end: 1077a926f;  */

/* WARNING: Possible PIC construction at 0x0001077a9220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077a92a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077a9224) */
/* WARNING: Removing unreachable block (ram,0x0001077a92ac) */

undefined1 *
FUN_1077a91d8(undefined1 *param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 in_ZR;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  int extraout_w8;
  undefined8 extraout_x8;
  long extraout_x9;
  long extraout_x10;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 ****ppppuVar7;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [64];
  undefined8 uStack_98;
  undefined8 ***pppuStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [64];
  undefined8 uStack_28;
  
  puVar4 = param_1;
  func_0x0001077ac834();
  if (*(int *)(param_2 + 0x30) == 0) {
    func_0x0001077ac93c();
  }
  else {
    in_ZR = *(int *)(param_2 + 0x30) == 1;
    if ((bool)in_ZR) {
      func_0x0001077acfe8(*param_2);
      in_ZR = extraout_w8 == 0;
      lVar1 = extraout_x9;
      if (!(bool)in_ZR) {
        lVar1 = extraout_x10;
      }
      param_2 = *(byte **)(lVar1 + 8);
      puVar5 = auStack_68;
      puStack_e8 = (undefined *)0x1077a9224;
      puVar2 = auStack_70;
      puVar4 = param_1;
      ppppuVar7 = (undefined8 ****)&stack0xfffffffffffffff0;
      goto code_r0x00010724ae4c;
    }
    puVar4 = *(undefined1 **)param_2;
    func_0x0001077acb18();
    func_0x0001077acb30();
    func_0x0001077aca60();
    param_1[0x40] = 2;
    func_0x0001077acad0();
  }
  func_0x0001077ac76c(uStack_28);
  puVar5 = puVar4;
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    __Unwind_Resume();
    puVar2 = auStack_e0;
    puStack_78 = &UNK_1077a9270;
    ppppuVar7 = &pppuStack_80;
    puVar5 = puVar4;
    pppuStack_80 = (undefined8 ***)&stack0xfffffffffffffff0;
    func_0x0001077ac834();
    if (*(int *)(param_2 + 0x30) == 0) {
      func_0x0001077ac93c();
    }
    else {
      in_ZR = *(int *)(param_2 + 0x30) == 1;
      if ((bool)in_ZR) {
        param_2 = (byte *)(ulong)*param_2;
        func_0x0001077f2c38(param_2);
        puVar5 = auStack_d8;
        puStack_e8 = &UNK_1077a92ac;
        puVar2 = auStack_e0;
        goto code_r0x00010724ae4c;
      }
      puVar5 = *(undefined1 **)param_2;
      func_0x0001077acb18();
      func_0x0001077acb30();
      func_0x0001077aca60();
      puVar4[0x40] = 2;
      func_0x0001077acad0();
    }
    func_0x0001077ac76c(uStack_98);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      __Unwind_Resume();
      puStack_e8 = &UNK_1077a92f8;
      func_0x0001077f27dc(param_2);
code_r0x00010724ae4c:
      uVar6 = SUB81(puVar2 + -0x60,0);
      puVar3 = puVar2 + -0x60;
      *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
      *(undefined1 **)(puVar2 + -0x18) = puVar4;
      *(undefined8 *****)(puVar2 + -0x10) = ppppuVar7;
      *(undefined **)(puVar2 + -8) = puStack_e8;
      func_0x00010724cc70(puVar5,param_2);
      *(undefined8 *)(puVar2 + -0x28) = extraout_x8;
      func_0x000100060964(puVar2 + -0x60);
      func_0x000104c33004(puVar5);
      func_0x000104c2f714();
      func_0x00010724cc40(*(undefined8 *)(puVar2 + -0x28));
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        *(undefined8 *)(puVar2 + -0x90) = unaff_x22;
        *(undefined8 *)(puVar2 + -0x88) = unaff_x21;
        *(undefined8 *)(puVar2 + -0x80) = unaff_x20;
        *(undefined1 **)(puVar2 + -0x78) = puVar5;
        *(undefined1 **)(puVar2 + -0x70) = puVar2 + -0x10;
        *(undefined **)(puVar2 + -0x68) = &UNK_10724aea8;
        *puVar3 = uVar6;
        puVar3[1] = param_5;
        *(undefined2 *)(puVar3 + 2) = 0;
        func_0x000104c2fe00(puVar3 + 8,param_3);
        puVar3[0x40] = 0;
        puVar3[0x78] = 0;
        func_0x00010724af54(puVar3 + 0x80,param_4);
        func_0x00010724afdc(puVar3 + 0xd0,param_6);
        puVar3[0x110] = 0;
        puVar3[0x118] = 0;
        puVar3[0x120] = 0;
        puVar3[0x128] = 0;
        puVar3[0x130] = 0;
        puVar3[0x148] = 0;
        puVar3[0x170] = 0;
        puVar3[0x1a8] = 0;
        *(undefined2 *)(puVar3 + 0x1b0) = 0;
        *(undefined8 *)(puVar3 + 0x158) = 0;
        *(undefined8 *)(puVar3 + 0x160) = 0;
        *(undefined8 *)(puVar3 + 0x150) = 0;
        puVar3[0x168] = 0;
        *(undefined8 *)(puVar3 + 0x1c0) = 0;
        *(undefined8 *)(puVar3 + 0x1b8) = 0;
        *(undefined8 *)(puVar3 + 0x1d0) = 0;
        *(undefined8 *)(puVar3 + 0x1c8) = 0;
        *(undefined8 *)(puVar3 + 0x1e0) = 0;
        *(undefined8 *)(puVar3 + 0x1d8) = 0;
        *(undefined8 *)(puVar3 + 0x1e8) = 0;
        *(undefined4 *)(puVar3 + 0x1f0) = 0x3f800000;
        return puVar3;
      }
      return puVar5;
    }
  }
  return puVar5;
}



/* Entry: 1077a963c; end: 1077a963f;  */

void FUN_1077a963c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109dae58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1077a9788; end: 1077a97b3;  */

void FUN_1077a9788(void)

{
  func_0x0001077ace44();
  func_0x0001077a97b4();
  return;
}



/* Entry: 1077aa3e8; end: 1077aa3ef;  */

void FUN_1077aa3e8(void)

{
  return;
}



/* Entry: 1077aa478; end: 1077aa47f;  */

void FUN_1077aa478(void)

{
  return;
}



/* Entry: 1077aa56c; end: 1077aa75f;  */

long FUN_1077aa56c(long param_1)

{
  func_0x00010755fd04(param_1 + 0xdb8);
  func_0x00010755ed9c(param_1 + 0xd70);
  func_0x00010755fa04(param_1 + 0xd38);
  func_0x000107266a30(param_1 + 0xd00);
  func_0x00010755e654(param_1 + 0xcc8);
  func_0x000107266a30(param_1 + 0xc90);
  func_0x000107266a30(param_1 + 0xc58);
  func_0x00010755e654(param_1 + 0xc20);
  func_0x000107266a30(param_1 + 0xbe8);
  func_0x00010727fc1c(param_1 + 0xbb0);
  func_0x0001072ca524(param_1 + 0xb70);
  func_0x000107266a30(param_1 + 0xb38);
  func_0x000107266a30(param_1 + 0xb00);
  func_0x000107266a30(param_1 + 0xac8);
  func_0x000107266a30(param_1 + 0xa90);
  func_0x00010727fc1c(param_1 + 0xa58);
  func_0x00010755f910(param_1 + 0xa20);
  func_0x00010755f398(param_1 + 0x9e8);
  func_0x00010727fc1c(param_1 + 0x9b0);
  func_0x0001072ca648(param_1 + 0x968);
  func_0x00010755fb88(param_1 + 0x918);
  func_0x0001072ca7a0(param_1 + 0x8e0);
  func_0x00010727fc1c(param_1 + 0x8a8);
  func_0x00010755f48c(param_1 + 0x870);
  func_0x000107266a30(param_1 + 0x838);
  func_0x0001072ca648(param_1 + 0x7f0);
  func_0x0001072dbce8(param_1 + 0x7a8);
  func_0x000107266a30(param_1 + 0x770);
  func_0x000107266a30(param_1 + 0x738);
  func_0x00010727fc1c(param_1 + 0x700);
  func_0x000107266a30(param_1 + 0x6c8);
  func_0x000107266a30(param_1 + 0x690);
  func_0x000107266a30(param_1 + 0x658);
  func_0x000107266a30(param_1 + 0x620);
  func_0x000107266a30(param_1 + 0x5e8);
  func_0x0001072ca7f0(param_1 + 0x5b0);
  func_0x00010755f2a4(param_1 + 0x578);
  func_0x0001072ca648(param_1 + 0x530);
  func_0x00010755f100(param_1 + 0x4f8);
  func_0x0001072ca524(param_1 + 0x4b8);
  func_0x000107266a30(param_1 + 0x480);
  func_0x00010727fc1c(param_1 + 0x448);
  func_0x00010727fc1c(param_1 + 0x410);
  func_0x0001072ca648(param_1 + 0x3c8);
  func_0x00010727fc70(param_1 + 0x380);
  func_0x00010755e748(param_1 + 0x348);
  func_0x000107266a30(param_1 + 0x310);
  func_0x00010755e654(param_1 + 0x2d8);
  func_0x000107266a30(param_1 + 0x2a0);
  func_0x00010755e654(param_1 + 0x268);
  func_0x000107266a30(param_1 + 0x230);
  func_0x00010727fc1c(param_1 + 0x1f8);
  func_0x0001072ca524(param_1 + 0x1b8);
  func_0x00010727fc1c(param_1 + 0x180);
  func_0x0001072ca37c(param_1 + 0xe8);
  func_0x00010755f398(param_1 + 0xa8);
  func_0x00010727fc1c(param_1 + 0x70);
  func_0x0001072ca7a0(param_1 + 0x38);
  func_0x00010727fc1c(param_1);
  return param_1;
}



/* Entry: 1077aa9dc; end: 1077aaa13;  */

void FUN_1077aa9dc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 extraout_x8;
  int extraout_w9;
  undefined8 extraout_x10;
  
  func_0x0001077ad010(&UNK_1109dec38,*(undefined8 *)*param_1);
  uVar1 = extraout_x8;
  if (extraout_w9 != 0) {
    uVar1 = extraout_x10;
  }
  func_0x0001077acd70(uVar1);
  return;
}



/* Entry: 1077aab30; end: 1077aab77;  */

undefined8 * FUN_1077aab30(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined1 extraout_w8;
  undefined1 *extraout_x9;
  undefined1 *extraout_x9_00;
  undefined1 *extraout_x9_01;
  long extraout_x9_02;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  undefined8 uStack_28;
  
  func_0x0001077ac6d8();
  func_0x0001077acb30();
  func_0x0001077ac958();
  func_0x0001077acad0();
  func_0x0001077ac76c(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001077ac994();
  func_0x0001077acae8();
  uVar1 = *(undefined8 *)*param_1;
  func_0x000107349544(uVar1,0);
  func_0x00010734ac10(uVar1);
  func_0x000107349658();
  func_0x00010734aa78();
  *extraout_x9 = 0x6e;
  func_0x00010734aa78();
  *extraout_x9_00 = 0x75;
  func_0x00010734aa78();
  *extraout_x9_01 = 0x6c;
  func_0x00010734ab28();
  *(undefined8 *)(extraout_x9_02 + 0x18) = extraout_x11;
  *extraout_x10 = extraout_w8;
  return (undefined8 *)0x1;
}



/* Entry: 1077aac8c; end: 1077aacaf;  */

void FUN_1077aac8c(void)

{
  func_0x0001077acab8();
  func_0x0001077f2704();
  func_0x0001077ac894();
  return;
}



/* Entry: 1077aadec; end: 1077aadfb;  */

undefined8 FUN_1077aadec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 extraout_w8;
  undefined1 *extraout_x9;
  undefined1 *extraout_x9_00;
  undefined1 *extraout_x9_01;
  long extraout_x9_02;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  
  uVar1 = *(undefined8 *)*param_1;
  func_0x000107349544(uVar1,0);
  func_0x00010734ac10(uVar1);
  func_0x000107349658();
  func_0x00010734aa78();
  *extraout_x9 = 0x6e;
  func_0x00010734aa78();
  *extraout_x9_00 = 0x75;
  func_0x00010734aa78();
  *extraout_x9_01 = 0x6c;
  func_0x00010734ab28();
  *(undefined8 *)(extraout_x9_02 + 0x18) = extraout_x11;
  *extraout_x10 = extraout_w8;
  return 1;
}



/* Entry: 1077aaf24; end: 1077aaf27;  */

undefined8 FUN_1077aaf24(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 extraout_w8;
  undefined1 *extraout_x9;
  undefined1 *extraout_x9_00;
  undefined1 *extraout_x9_01;
  long extraout_x9_02;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  
  uVar1 = *(undefined8 *)*param_1;
  func_0x000107349544(uVar1,0);
  func_0x00010734ac10(uVar1);
  func_0x000107349658();
  func_0x00010734aa78();
  *extraout_x9 = 0x6e;
  func_0x00010734aa78();
  *extraout_x9_00 = 0x75;
  func_0x00010734aa78();
  *extraout_x9_01 = 0x6c;
  func_0x00010734ab28();
  *(undefined8 *)(extraout_x9_02 + 0x18) = extraout_x11;
  *extraout_x10 = extraout_w8;
  return 1;
}



/* Entry: 1077ab194; end: 1077ab1af;  */

void FUN_1077ab194(void)

{
  func_0x0001077ac824();
  func_0x0001077ac6ac();
  return;
}



/* Entry: 1077ab22c; end: 1077ab26f;  */

void FUN_1077ab22c(void)

{
  func_0x0001077ac824();
  func_0x0001077ac6ac();
  return;
}



/* Entry: 1077ab2e4; end: 1077ab2ff;  */

void FUN_1077ab2e4(void)

{
  func_0x0001077ac824();
  func_0x0001077ac6ac();
  return;
}



/* Entry: 1077ab3b8; end: 1077ab3d3;  */

void FUN_1077ab3b8(void)

{
  func_0x0001077ac824();
  func_0x0001077ac6ac();
  return;
}



/* Entry: 1077ab60c; end: 1077ab64b;  */

void FUN_1077ab60c(void)

{
  int extraout_w8;
  int extraout_w9;
  
  func_0x0001077acc34();
  if (extraout_w8 != -1 && extraout_w9 == extraout_w8) {
    func_0x0001077acc28();
    func_0x0001077ac9c8();
  }
  return;
}



/* Entry: 1077ab86c; end: 1077ab8ab;  */

void FUN_1077ab86c(void)

{
  int extraout_w8;
  int extraout_w9;
  
  func_0x0001077acc34();
  if (extraout_w8 != -1 && extraout_w9 == extraout_w8) {
    func_0x0001077acc28();
    func_0x0001077ac9c8();
  }
  return;
}



/* Entry: 1077abacc; end: 1077abb0b;  */

void FUN_1077abacc(void)

{
  int extraout_w8;
  int extraout_w9;
  
  func_0x0001077acc34();
  if (extraout_w8 != -1 && extraout_w9 == extraout_w8) {
    func_0x0001077acc28();
    func_0x0001077ac9c8();
  }
  return;
}



/* Entry: 1077abcc4; end: 1077abd5b;  */

void FUN_1077abcc4(void)

{
  int extraout_w8;
  long unaff_x19;
  
  func_0x0001077accc4();
  if (extraout_w8 != 0) {
    func_0x0001072ca7f0();
    *(undefined4 *)(unaff_x19 + 0x30) = 0;
  }
  return;
}



/* Entry: 1077abf48; end: 1077ac01f;  */

void FUN_1077abf48(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x48) != 0) {
    func_0x0001077acf60();
    *(undefined4 *)(lVar1 + 0x48) = 0;
  }
  return;
}



/* Entry: 1077ac1ec; end: 1077ac27f;  */

void FUN_1077ac1ec(void)

{
  int extraout_w8;
  long unaff_x19;
  
  func_0x0001077accc4();
  if (extraout_w8 != 0) {
    func_0x0001077acf70();
    *(undefined4 *)(unaff_x19 + 0x30) = 0;
  }
  return;
}



/* Entry: 1077ac4a8; end: 1077ac4ef;  */

undefined8 FUN_1077ac4a8(void)

{
  return 1;
}



/* Entry: 1077ad6c8; end: 1077ada3b;  */

/* WARNING: Possible PIC construction at 0x0001077ad964: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077ad968) */

void FUN_1077ad6c8(long param_1,long *param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined8 **ppuVar5;
  undefined1 in_ZR;
  bool bVar6;
  undefined1 uVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar11;
  ulong uVar12;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 **unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_180 [80];
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined1 uStack_111;
  long lStack_110;
  long lStack_108;
  ulong uStack_f0;
  long *plStack_e8;
  ulong uStack_e0;
  undefined1 auStack_d8 [16];
  long lStack_c8;
  undefined1 auStack_a0 [56];
  undefined8 uStack_68;
  
  ppuVar5 = &puStack_130;
  puVar1 = &stack0xfffffffffffffff0;
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (*(int *)(param_1 + 0xac8) == 0) {
LAB_1077ad974:
    func_0x0001077ade80();
    if ((bool)in_ZR) {
      return;
    }
  }
  else {
    puVar10 = (undefined8 *)(param_1 + 0xad0);
    bVar6 = *(int *)(param_1 + 0xb10) == 1;
    if (!bVar6) {
      if (*(int *)(param_1 + 0xb10) == 0) {
        func_0x000100060964(auStack_d8,&UNK_10f4102f6);
        func_0x000100060964(auStack_a0,&UNK_10f410308);
        func_0x000107404228(&lStack_110,auStack_d8,2);
        plVar8 = param_2;
        func_0x0001077ada80(param_2,&puStack_130,&lStack_110);
        if (*plVar8 == 0) {
          lVar9 = 0x30;
          __Znwm();
          plStack_e8 = param_2 + 1;
          uStack_e0 = 1;
          *(long *)(lVar9 + 0x28) = lStack_108;
          *(long *)(lVar9 + 0x20) = lStack_110;
          lStack_110 = 0;
          lStack_108 = 0;
          func_0x0001077adafc(param_2,puStack_130,plVar8,lVar9);
          uStack_f0 = 0;
          func_0x0001077adb4c(&uStack_f0);
        }
        func_0x00010726b09c(&lStack_110);
        lVar9 = 0x38;
        do {
          func_0x000104c2f714(auStack_d8 + lVar9);
          lVar9 = lVar9 + -0x38;
        } while (lVar9 != -0x38);
        in_ZR = 1;
      }
      else {
        (**(code **)(*(long *)*puVar10 + 0x20))(&lStack_110);
        puStack_128 = (undefined8 *)0x0;
        puStack_120 = (undefined8 *)0x0;
        puStack_130 = (undefined8 *)0x0;
        if (lStack_108 - lStack_110 != 0) {
          uVar2 = (lStack_108 - lStack_110) / 0x78;
          if (0xaaaaaaaaaaaaaaa < uVar2) goto LAB_1077ad9a8;
          func_0x0001077add10(auStack_d8,uVar2,0,&puStack_120);
          func_0x0001077adeac();
          func_0x0001077add80(auStack_d8);
        }
        unaff_x23 = lStack_108;
        unaff_x24 = 1;
        for (lVar9 = lStack_110; lVar9 != unaff_x23; lVar9 = lVar9 + 0x78) {
          if (*(char *)(lVar9 + 0x70) == '\x01') {
            func_0x0001077755e0(&uStack_f0,lVar9,&uStack_111);
          }
          else {
            uStack_f0 = uStack_f0 & 0xffffffffffffff00;
            uStack_e0 = uStack_e0 & 0xffffffffffffff00;
          }
          bVar6 = puStack_128 == puStack_120;
          if (puStack_128 < puStack_120) {
            func_0x0001077aded4();
            lVar11 = extraout_x8;
            if (bVar6) {
              func_0x0001077adec0();
              lVar11 = extraout_x8_00;
            }
            puVar10 = (undefined8 *)(lVar11 + 0x18);
          }
          else {
            lVar11 = ((long)puStack_128 - (long)puStack_130) / 0x18;
            uVar2 = lVar11 + 1;
            if (0xaaaaaaaaaaaaaaa < uVar2) {
              func_0x0001077adc40();
              goto LAB_1077ad9ac;
            }
            uVar3 = ((long)puStack_120 - (long)puStack_130) / 0x18;
            uVar12 = uVar3 * 2;
            if (uVar12 < uVar2 || uVar12 - uVar2 == 0) {
              uVar12 = uVar2;
            }
            uVar7 = uVar3 == 0x555555555555555;
            if (0x555555555555554 < uVar3) {
              uVar12 = 0xaaaaaaaaaaaaaaa;
            }
            func_0x0001077add10(auStack_d8,uVar12,lVar11,&puStack_120);
            func_0x0001077aded4(lStack_c8);
            lVar11 = extraout_x8_01;
            if ((bool)uVar7) {
              func_0x0001077adec0();
              lVar11 = extraout_x8_02;
            }
            lStack_c8 = lVar11 + 0x18;
            func_0x0001077adeac();
            puVar10 = puStack_128;
            func_0x0001077add80(auStack_d8);
          }
          puStack_128 = puVar10;
          func_0x00010726b07c(&uStack_f0);
        }
        func_0x00010756c400(&lStack_110);
        in_ZR = puStack_130 == puStack_128;
        if ((!(bool)in_ZR) && (in_ZR = false, *(char *)(puStack_130 + 2) == '\x01')) {
          unaff_x30 = 0x1077ad968;
          register0x00000008 = (BADSPACEBASE *)&puStack_130;
          puVar10 = puStack_130;
          unaff_x19 = param_2;
          unaff_x20 = puStack_130;
          unaff_x21 = puStack_128;
          unaff_x22 = ppuVar5;
          unaff_x29 = puVar1;
          goto code_r0x0001077adb90;
        }
        func_0x0001077adea4();
      }
      goto LAB_1077ad974;
    }
    func_0x0001077ade80();
    if (bVar6) {
code_r0x0001077adb90:
      *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
      *(undefined8 ***)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
      *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      plVar8 = param_2;
      func_0x0001077ada80(param_2,(undefined1 *)((long)register0x00000008 + -0x48),puVar10);
      if (*plVar8 == 0) {
        lVar9 = 0x30;
        __Znwm();
        *(long *)((long)register0x00000008 + -0x60) = lVar9;
        *(long **)((long)register0x00000008 + -0x58) = param_2 + 1;
        *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
        func_0x000107278b70(lVar9 + 0x20,puVar10);
        *(undefined1 *)((long)register0x00000008 + -0x50) = 1;
        func_0x0001077adafc(param_2,*(undefined8 *)((long)register0x00000008 + -0x48),plVar8,lVar9);
        *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
        func_0x0001077adb4c((undefined1 *)((long)register0x00000008 + -0x60));
      }
      return;
    }
  }
  ___stack_chk_fail();
LAB_1077ad9a8:
  func_0x0001077adc40();
LAB_1077ad9ac:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1077ad9b0);
  (*pcVar4)();
}



/* Entry: 1077adc54; end: 1077add0f;  */

void FUN_1077adc54(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *param_1;
  lVar1 = param_1[1];
  lVar5 = param_2[1] + ((lVar1 - lVar4) / -0x18) * 0x18;
  lVar2 = lVar5;
  for (lVar3 = lVar4; lVar3 != lVar1; lVar3 = lVar3 + 0x18) {
    func_0x0001072ca5c0(lVar2,lVar3);
    lVar2 = lVar2 + 0x18;
  }
  for (; lVar4 != lVar1; lVar4 = lVar4 + 0x18) {
    func_0x00010726b07c(lVar4);
  }
  param_2[1] = lVar5;
  lVar3 = *param_1;
  *param_1 = lVar5;
  param_1[1] = lVar3;
  param_2[1] = lVar3;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1077adfc0; end: 1077ae0f7;  */

ulong FUN_1077adfc0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  bool bVar11;
  
  bVar11 = *(int *)(param_1 + 0x60) == 0;
  uVar1 = 2;
  if (bVar11) {
    uVar1 = 3;
  }
  if (*(int *)(param_1 + 0x98) != 0) {
    uVar1 = (ulong)bVar11;
  }
  uVar2 = uVar1 | 4;
  if (*(int *)(param_1 + 0xe0) != 0) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 | 8;
  if (*(int *)(param_1 + 0x118) != 0) {
    uVar1 = uVar2;
  }
  uVar2 = 0x10;
  if (*(int *)(param_1 + 0x150) != 0) {
    uVar2 = 0;
  }
  uVar3 = 0x20;
  if (*(int *)(param_1 + 0x188) != 0) {
    uVar3 = 0;
  }
  uVar4 = 0x40;
  if (*(int *)(param_1 + 0x1d0) != 0) {
    uVar4 = 0;
  }
  uVar5 = 0x80;
  if (*(int *)(param_1 + 0x218) != 0) {
    uVar5 = 0;
  }
  uVar6 = 0x100;
  if (*(int *)(param_1 + 0x250) != 0) {
    uVar6 = 0;
  }
  uVar7 = 0x200;
  if (*(int *)(param_1 + 0x298) != 0) {
    uVar7 = 0;
  }
  uVar8 = 0x400;
  if (*(int *)(param_1 + 0x2d0) != 0) {
    uVar8 = 0;
  }
  uVar9 = 0x800;
  if (*(int *)(param_1 + 0x308) != 0) {
    uVar9 = 0;
  }
  uVar10 = 0x1000;
  if (*(int *)(param_1 + 0x340) != 0) {
    uVar10 = 0;
  }
  return uVar3 | uVar2 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar1;
}



/* Entry: 1077ae294; end: 1077ae2d3;  */

void FUN_1077ae294(void)

{
  undefined8 uStack_30;
  
  func_0x0001077af1dc();
  func_0x0001077af248(uStack_30 + 0x9e8);
  func_0x0001077af1f8();
  func_0x0001077af210();
  func_0x0001077af240();
  func_0x0001077af230();
  return;
}



/* Entry: 1077ae494; end: 1077ae4d3;  */

void FUN_1077ae494(void)

{
  undefined8 uStack_30;
  
  func_0x0001077af1dc();
  func_0x0001077af248(uStack_30 + 0x758);
  func_0x0001077af1f8();
  func_0x0001077af210();
  func_0x0001077af240();
  func_0x0001077af230();
  return;
}



/* Entry: 1077ae69c; end: 1077ae6df;  */

void FUN_1077ae69c(void)

{
  undefined8 uStack_30;
  
  func_0x0001077af1dc();
  func_0x000107310c44(uStack_30 + 0x698);
  func_0x0001077af1f8();
  func_0x0001077af210();
  func_0x0001077af240();
  func_0x0001077af230();
  return;
}



/* Entry: 1077ae8bc; end: 1077ae8fb;  */

void FUN_1077ae8bc(undefined8 param_1,undefined8 param_2)

{
  long extraout_x8;
  undefined1 extraout_w9;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  
  func_0x0001077af1dc();
  func_0x0001077af220();
  *(undefined8 *)(extraout_x8 + 0x128) = in_register_00005028;
  *(undefined8 *)(extraout_x8 + 0x120) = param_2;
  *(undefined8 *)(extraout_x8 + 0x138) = in_register_00005008;
  *(undefined8 *)(extraout_x8 + 0x130) = param_1;
  *(undefined1 *)(extraout_x8 + 0x140) = extraout_w9;
  func_0x0001077af1f8();
  func_0x0001077af210();
  func_0x0001077af240();
  func_0x0001077af230();
  return;
}



/* Entry: 1077aead0; end: 1077aeb13;  */

void FUN_1077aead0(undefined8 param_1,undefined8 param_2)

{
  long extraout_x8;
  undefined1 extraout_w9;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  
  func_0x0001077af1dc();
  func_0x0001077af220();
  *(undefined8 *)(extraout_x8 + 0x738) = in_register_00005028;
  *(undefined8 *)(extraout_x8 + 0x730) = param_2;
  *(undefined8 *)(extraout_x8 + 0x748) = in_register_00005008;
  *(undefined8 *)(extraout_x8 + 0x740) = param_1;
  *(undefined1 *)(extraout_x8 + 0x750) = extraout_w9;
  func_0x0001077af1f8();
  func_0x0001077af210();
  func_0x0001077af240();
  func_0x0001077af230();
  return;
}



/* Entry: 1077aecf4; end: 1077aed33;  */

void FUN_1077aecf4(undefined8 param_1,undefined8 param_2)

{
  long extraout_x8;
  undefined1 extraout_w9;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  
  func_0x0001077af1dc();
  func_0x0001077af220();
  *(undefined8 *)(extraout_x8 + 0x2a8) = in_register_00005028;
  *(undefined8 *)(extraout_x8 + 0x2a0) = param_2;
  *(undefined8 *)(extraout_x8 + 0x2b8) = in_register_00005008;
  *(undefined8 *)(extraout_x8 + 0x2b0) = param_1;
  *(undefined1 *)(extraout_x8 + 0x2c0) = extraout_w9;
  func_0x0001077af1f8();
  func_0x0001077af210();
  func_0x0001077af240();
  func_0x0001077af230();
  return;
}



/* Entry: 1077af1a0; end: 1077af1db;  */

undefined8 * FUN_1077af1a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x000107410da4(&uStack_30);
  return param_1;
}



/* Entry: 1077af96c; end: 1077af973;  */

void FUN_1077af96c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001077afedc(&uStack_30,*param_2);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001077b00b4();
  return;
}



/* Entry: 1077afd88; end: 1077afd9b;  */

void FUN_1077afd88(void)

{
  func_0x0001077afebc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077aff00; end: 1077aff67;  */

/* WARNING: Possible PIC construction at 0x0001077aff24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077aff28) */
/* WARNING: Removing unreachable block (ram,0x0001077aff4c) */
/* WARNING: Removing unreachable block (ram,0x0001077aff60) */
/* WARNING: Removing unreachable block (ram,0x0001077aff44) */
/* WARNING: Removing unreachable block (ram,0x0001077b0130) */

void FUN_1077aff00(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  
  func_0x0001077b00f4();
  func_0x0001077b013c();
  func_0x0001077b00dc(uStack_30,param_2);
  func_0x0001077aff9c();
  return;
}



/* Entry: 1077b0394; end: 1077b08e7;  */

/* WARNING: Possible PIC construction at 0x0001077b05e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077b09bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077b09dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077b0a4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077b0a74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077b0958: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077b0a78) */
/* WARNING: Removing unreachable block (ram,0x0001077b0a50) */
/* WARNING: Removing unreachable block (ram,0x0001077b09e0) */
/* WARNING: Removing unreachable block (ram,0x0001077b09c0) */
/* WARNING: Removing unreachable block (ram,0x0001077b05e8) */
/* WARNING: Removing unreachable block (ram,0x0001077b095c) */

undefined **
FUN_1077b0394(undefined **param_1,undefined **param_2,long *param_3,undefined **param_4,
             undefined **param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar3;
  undefined1 uVar4;
  int iVar5;
  undefined **ppuVar6;
  long *plVar7;
  ulong uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  char *pcVar13;
  undefined1 uVar14;
  undefined8 extraout_x8;
  undefined **extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  long lVar15;
  undefined **unaff_x24;
  undefined8 ****ppppuVar16;
  undefined8 ***pppuVar17;
  undefined *puVar18;
  float fVar19;
  undefined1 auStack_630 [328];
  undefined *apuStack_4e8 [7];
  undefined *apuStack_4b0 [9];
  undefined8 uStack_468;
  undefined **ppuStack_460;
  undefined **ppuStack_458;
  undefined8 ***pppuStack_450;
  undefined *puStack_448;
  undefined1 auStack_440 [8];
  undefined *apuStack_438 [4];
  undefined *apuStack_418 [6];
  undefined *puStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined1 auStack_3c8 [56];
  undefined1 auStack_390 [72];
  undefined8 uStack_348;
  undefined8 **ppuStack_320;
  undefined *puStack_318;
  undefined1 auStack_310 [6];
  undefined2 uStack_30a;
  undefined *puStack_308;
  undefined *apuStack_300 [5];
  undefined4 uStack_2d8;
  undefined4 uStack_2d0;
  byte bStack_2c8;
  byte bStack_220;
  byte bStack_1e8;
  byte bStack_1e0;
  undefined *puStack_1d8;
  undefined *apuStack_1d0 [5];
  undefined4 uStack_1a8;
  undefined4 auStack_1a0 [2];
  undefined1 auStack_198 [40];
  undefined4 uStack_170;
  undefined1 auStack_160 [24];
  undefined4 uStack_148;
  undefined4 uStack_130;
  undefined1 auStack_128 [48];
  undefined4 uStack_f8;
  undefined4 auStack_f0 [12];
  undefined4 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_a8;
  undefined *apuStack_a0 [2];
  char cStack_90;
  undefined8 uStack_68;
  undefined1 *puVar2;
  
  pppuVar17 = (undefined8 ***)&stack0xfffffffffffffff0;
  puVar3 = auStack_310;
  ppuVar6 = param_2;
  plVar7 = param_3;
  pcVar13 = (char *)param_4;
  func_0x0001077b0e08();
  iVar5 = (int)ppuVar6;
  uVar4 = (char)plVar7[2] == '\x01';
  uStack_68 = extraout_x8;
  if ((bool)uVar4) {
    plVar7 = param_3 + 1;
    (**(code **)(*param_3 + 0x30))();
    iVar5 = (int)plVar7;
    if (((ulong)plVar7 & 1) != 0) goto LAB_1077b03f0;
    ppuVar6 = (undefined **)&UNK_10f42a235;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc();
LAB_1077b084c:
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 0x27) = 0;
  }
  else {
LAB_1077b03f0:
    unaff_x24 = &puStack_1d8;
    func_0x0001077b0eac();
    if (iVar5 == 0) {
      ppuVar6 = (undefined **)&UNK_10f415ce6;
      func_0x0001077b0eac();
      if (iVar5 == 0) {
        func_0x0001077b0eac();
        if (iVar5 != 0) {
          uStack_a8 = 3;
          ppuVar9 = &puStack_1d8;
          ppuVar6 = &puStack_1d8;
          puVar18 = (undefined *)0x1077b05e8;
          ppuVar10 = param_1;
          goto code_r0x0001077b0db0;
        }
        func_0x0001077b0eac();
        if (iVar5 == 0) {
          func_0x00010002b838(apuStack_a0,&UNK_10f42a254);
          func_0x000100610910(&puStack_308);
          func_0x00010048a6c8(&puStack_1d8,&puStack_308,&DAT_10f3b3c06);
          ppuVar6 = &puStack_1d8;
          func_0x000100066230(param_4);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_1d8);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_308);
          param_4 = apuStack_a0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
          goto LAB_1077b084c;
        }
        uStack_1a8 = 0;
        uStack_170 = 0;
        uStack_f8 = 0;
        uStack_c0 = 0;
        puStack_308._0_4_ = 0x3eb33333;
        uStack_2d8 = 1;
        param_2 = &puStack_1d8;
        func_0x0001077b0e54(&puStack_1d8);
        func_0x0001077b0e4c();
        puStack_308._0_4_ = 0;
        uStack_2d8 = 1;
        func_0x0001077b0e54(auStack_1a0);
        func_0x0001077b0e4c();
        func_0x0001077b0e64();
        func_0x0001077b0f20();
        ppuVar6 = apuStack_300;
        func_0x000107383540(auStack_160);
        func_0x00010732442c(apuStack_300);
        func_0x000104c2f714(apuStack_a0);
        puStack_308 = (undefined *)CONCAT44(puStack_308._4_4_,0x3eb33333);
        uStack_2d8 = 1;
        func_0x0001077b0e54(auStack_f0);
        func_0x0001077b0e4c();
        pcVar13 = "bottom";
        uVar8 = 0;
        func_0x0001077b0df8();
        if ((uVar8 & 1) == 0) {
LAB_1077b07a8:
          puStack_308 = (undefined *)((ulong)puStack_308 & 0xffffffffffffff00);
          bStack_1e8 = 0;
        }
        else {
          pcVar13 = &UNK_10f42a22d;
          uVar8 = 0;
          func_0x0001077b0df8();
          if ((uVar8 & 1) == 0) goto LAB_1077b07a8;
          uVar8 = 0;
          func_0x0001077b0e9c();
          if ((uVar8 & 1) == 0) goto LAB_1077b07a8;
          pcVar13 = "top";
          uVar8 = 0;
          func_0x0001077b0df8();
          if ((uVar8 & 1) == 0) goto LAB_1077b07a8;
          ppuVar6 = &puStack_1d8;
          func_0x0001074e157c(&puStack_308);
          bStack_1e8 = 1;
        }
        param_4 = &puStack_1d8;
        func_0x0001073e652c();
        if ((bStack_1e8 & 1) == 0) goto LAB_1077b084c;
        param_4 = apuStack_1d0;
        ppuVar6 = &puStack_308;
        func_0x0001074e157c();
        func_0x0001077b0e18(4);
        func_0x0001077b0e74();
        uVar4 = bStack_1e8 == 1;
        if ((bool)uVar4) {
          param_4 = &puStack_308;
          func_0x0001073e652c();
        }
      }
      else {
        auStack_1a0[0] = 0;
        uStack_148 = 0;
        auStack_f0[0] = 0;
        uStack_b8 = 0;
        puStack_308 = (undefined *)0x0;
        apuStack_300[0]._0_4_ = 0;
        uStack_2d0 = 1;
        func_0x0001077b0f0c();
        func_0x0001073e64d8(&puStack_308);
        if ((*(byte *)(param_3 + 2) & 1) == 0) {
          apuStack_a0[0]._0_1_ = 0;
          cStack_90 = '\0';
LAB_1077b05f8:
          func_0x0001077b0f04();
          pcVar13 = &UNK_10f42a1ef;
          uVar8 = 0;
          func_0x0001077b0e8c();
          if ((uVar8 & 1) == 0) goto LAB_1077b0800;
          pcVar13 = &UNK_10f42a1ff;
          uVar8 = 0;
          func_0x0001077b0e8c();
          if ((uVar8 & 1) == 0) goto LAB_1077b0800;
          pcVar13 = &UNK_10f42a20f;
          uVar8 = 0;
          func_0x0001077b0df8();
          if ((uVar8 & 1) == 0) goto LAB_1077b0800;
          ppuVar6 = &puStack_1d8;
          func_0x0001074e1490(&puStack_308);
          bStack_1e0 = 1;
        }
        else {
          ppuVar6 = (undefined **)&UNK_10f42a1e2;
          (**(code **)(*param_3 + 0x38))(apuStack_a0,param_3 + 1);
          uVar4 = cStack_90 == '\x01';
          if (!(bool)uVar4) goto LAB_1077b05f8;
          uStack_30a = 0;
          pcVar13 = (char *)param_5;
          func_0x000107797a58(&puStack_308,apuStack_a0,param_4,param_5,(long)&uStack_30a + 1,
                              &uStack_30a);
          if ((bStack_2c8 & 1) != 0) {
            func_0x0001077b0f0c();
            func_0x000107554964(&puStack_308);
            ppuVar6 = param_4;
            goto LAB_1077b05f8;
          }
          func_0x000107554964(&puStack_308);
          func_0x0001077b0f04();
          ppuVar6 = param_4;
LAB_1077b0800:
          puStack_308 = (undefined *)((ulong)puStack_308 & 0xffffffffffffff00);
          bStack_1e0 = 0;
        }
        param_4 = &puStack_1d8;
        func_0x0001073e6448();
        if ((bStack_1e0 & 1) == 0) goto LAB_1077b084c;
        param_4 = apuStack_1d0;
        ppuVar6 = &puStack_308;
        func_0x0001074e1490();
        func_0x0001077b0e18(2);
        func_0x0001077b0e74();
        uVar4 = bStack_1e0 == 1;
        if ((bool)uVar4) {
          param_4 = &puStack_308;
          func_0x0001073e6448();
        }
      }
    }
    else {
      uStack_1a8 = 0;
      uStack_130 = 0;
      uStack_f8 = 0;
      puStack_308._0_4_ = 0x3f800000;
      uStack_2d8 = 1;
      param_2 = &puStack_1d8;
      func_0x0001077b0e54(&puStack_1d8);
      func_0x0001077b0e4c();
      func_0x0001077b0e64();
      func_0x0001077b0f20();
      ppuVar6 = apuStack_300;
      func_0x000107383540(auStack_198);
      func_0x00010732442c(apuStack_300);
      func_0x000104c2f714(apuStack_a0);
      puStack_308 = (undefined *)CONCAT44(puStack_308._4_4_,0x3f400000);
      uStack_2d8 = 1;
      func_0x0001077b0e54(auStack_128);
      func_0x0001077b0e4c();
      pcVar13 = &DAT_10f4154b4;
      uVar8 = 0;
      func_0x0001077b0df8();
      if ((uVar8 & 1) == 0) {
LAB_1077b0560:
        puStack_308 = (undefined *)((ulong)puStack_308 & 0xffffffffffffff00);
        bStack_220 = 0;
      }
      else {
        uVar8 = 0;
        func_0x0001077b0e9c();
        if ((uVar8 & 1) == 0) goto LAB_1077b0560;
        pcVar13 = &DAT_10f2e8c7d;
        uVar8 = 0;
        func_0x0001077b0df8();
        if ((uVar8 & 1) == 0) goto LAB_1077b0560;
        ppuVar6 = &puStack_1d8;
        func_0x0001074e1450(&puStack_308);
        bStack_220 = 1;
      }
      param_4 = &puStack_1d8;
      func_0x0001073e6414();
      if ((bStack_220 & 1) == 0) goto LAB_1077b084c;
      param_4 = apuStack_1d0;
      ppuVar6 = &puStack_308;
      func_0x0001074e1450();
      func_0x0001077b0e18(1);
      func_0x0001077b0e74();
      uVar4 = bStack_220 == 1;
      if ((bool)uVar4) {
        param_4 = &puStack_308;
        func_0x0001073e6414();
      }
    }
  }
  func_0x0001077b0de4(uStack_68);
  if ((bool)uVar4) {
    return param_4;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_308);
  ppuVar9 = apuStack_a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x0001077b0e28();
  puVar1 = auStack_440;
  puVar2 = auStack_440;
  puStack_318 = &UNK_1077b08e8;
  ppppuVar16 = (undefined8 ****)&ppuStack_320;
  ppuStack_320 = pppuVar17;
  func_0x0001077b0e08();
  puStack_3e8 = &UNK_10e52b660;
  uStack_3e0 = 0;
  uStack_3d8 = 0;
  uStack_3d0 = 0;
  uVar4 = *(int *)(ppuVar9 + 0x26) + -1 == 3;
  uStack_348 = extraout_x8_01;
  switch(*(int *)(ppuVar9 + 0x26) + -1) {
  case 0:
    func_0x0001077b0f34();
    ppuVar6 = &puStack_3e8;
    ppuVar12 = ppuVar9 + 8;
    puVar18 = &UNK_1077b095c;
    ppuVar11 = extraout_x8_00;
    goto code_r0x0001077b0bac;
  case 1:
    if (*(int *)(ppuVar9 + 8) != 0) {
      func_0x000107797c64(auStack_390,ppuVar9 + 1);
      func_0x000100060964(auStack_3c8,&UNK_10f42a1e2);
      func_0x000107267f10(&puStack_3e8,auStack_3c8);
      func_0x0001072d80fc();
      func_0x0001077b0eb4();
      func_0x000104c3323c(auStack_390);
    }
    ppuVar12 = (undefined **)&UNK_10f42a1ef;
    ppuVar10 = &puStack_3e8;
    pcVar13 = (char *)(ppuVar9 + 9);
    puVar18 = &UNK_1077b0a50;
    ppuVar11 = extraout_x8_00;
    goto code_r0x0001077b0c3c;
  case 2:
    ppuVar9 = apuStack_418;
    func_0x0001077b0e44(apuStack_418);
    func_0x0001077b0ee0();
    apuStack_438[0] = apuStack_418[0];
    break;
  case 3:
    func_0x0001077b0f34();
    ppuVar6 = (undefined **)&UNK_10f42a22d;
    ppuVar11 = &puStack_3e8;
    pcVar13 = (char *)(ppuVar9 + 8);
    puVar18 = &UNK_1077b09c0;
    ppuVar10 = extraout_x8_00;
    goto code_r0x0001077b0b1c;
  default:
    ppuVar9 = apuStack_438;
    func_0x0001077b0e44(apuStack_438);
    func_0x0001077b0ee0();
  }
  extraout_x8_00[1] = apuStack_438[0];
  extraout_x8_00[2] = ppuVar9[1];
  *ppuVar9 = (undefined *)0x0;
  ppuVar9[1] = (undefined *)0x0;
  func_0x000104c335c0(ppuVar9);
  ppuVar10 = &puStack_3e8;
  func_0x000104c33548();
  func_0x0001077b0de4(uStack_348);
  if ((bool)uVar4) {
    return ppuVar10;
  }
  ___stack_chk_fail();
  func_0x000104c3323c(auStack_390);
  ppuVar11 = &puStack_3e8;
  func_0x000104c33548();
  puVar18 = &UNK_1077b0b1c;
  func_0x0001077b0e28();
code_r0x0001077b0b1c:
  puVar2 = auStack_630 + 0x140;
  ppuStack_460 = ppuVar9;
  ppuStack_458 = ppuVar10;
  pppuStack_450 = ppppuVar16;
  puStack_448 = puVar18;
  func_0x0001077b0e08();
  uStack_468 = extraout_x8_02;
  ppuVar12 = ppuVar6;
  if (*(int *)((long)pcVar13 + 0x30) != 0) {
    func_0x000107784b60(apuStack_4b0,pcVar13);
    ppuVar11 = (undefined **)(auStack_630 + 0x148);
    func_0x000100060964(ppuVar11,ppuVar6);
    func_0x0001077b0f2c();
    ppuVar12 = apuStack_4b0;
    func_0x0001072d80fc();
    func_0x0001077b0ebc();
    func_0x0001077b0e5c();
    ppuVar9 = ppuVar6;
  }
  func_0x0001077b0de4(uStack_468);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    ppuVar6 = ppuVar11;
    func_0x0001077b0e5c();
    puVar18 = &UNK_1077b0bac;
    func_0x0001077b0e28();
    ppppuVar16 = &pppuStack_450;
code_r0x0001077b0bac:
    puVar1 = puVar2 + -0xb0;
    *(undefined ***)(puVar2 + -0x20) = ppuVar9;
    *(undefined ***)(puVar2 + -0x18) = ppuVar11;
    *(undefined8 *****)(puVar2 + -0x10) = ppppuVar16;
    *(undefined **)(puVar2 + -8) = puVar18;
    ppppuVar16 = (undefined8 ****)(puVar2 + -0x10);
    func_0x0001077b0e08();
    *(undefined8 *)(puVar2 + -0x28) = extraout_x8_03;
    ppuVar11 = ppuVar6;
    if (*(int *)(ppuVar12 + 0xe) != 0) {
      func_0x00010778b104(puVar2 + -0x70,ppuVar12);
      ppuVar11 = (undefined **)(puVar2 + -0xa8);
      func_0x000100060964(ppuVar11,"source");
      func_0x0001077b0f2c();
      ppuVar12 = (undefined **)(puVar2 + -0x70);
      func_0x0001072d80fc();
      func_0x0001077b0ebc();
      func_0x0001077b0e5c();
    }
    func_0x0001077b0de4(*(undefined8 *)(puVar2 + -0x28));
    if (!(bool)uVar4) {
      ___stack_chk_fail();
      ppuVar10 = ppuVar11;
      func_0x0001077b0e5c();
      puVar18 = &UNK_1077b0c3c;
      func_0x0001077b0e28();
code_r0x0001077b0c3c:
      puVar3 = puVar1 + -0x100;
      *(undefined ***)(puVar1 + -0x40) = unaff_x24;
      *(undefined ***)(puVar1 + -0x38) = param_2;
      *(long **)(puVar1 + -0x30) = param_3;
      *(undefined ***)(puVar1 + -0x28) = param_5;
      *(undefined ***)(puVar1 + -0x20) = ppuVar9;
      *(undefined ***)(puVar1 + -0x18) = ppuVar11;
      *(undefined8 *****)(puVar1 + -0x10) = ppppuVar16;
      *(undefined **)(puVar1 + -8) = puVar18;
      pppuVar17 = (undefined8 ***)(puVar1 + -0x10);
      func_0x0001077b0e08();
      *(undefined8 *)(puVar1 + -0x48) = extraout_x8_04;
      ppuVar6 = ppuVar12;
      if (*(int *)((long)pcVar13 + 0x50) != 0) {
        uVar4 = *(int *)((long)pcVar13 + 0x50) == 1;
        if ((bool)uVar4) {
          *(undefined8 *)(puVar1 + -0xe8) = 0;
          *(undefined8 *)(puVar1 + -0xe0) = 0;
          *(undefined8 *)(puVar1 + -0xd8) = 0;
          func_0x0001072ac134(puVar1 + -0xe8,9);
          for (lVar15 = 0; uVar4 = lVar15 == 0x24, !(bool)uVar4; lVar15 = lVar15 + 4) {
            fVar19 = *(float *)((long)pcVar13 + lVar15);
            *(undefined4 *)(puVar1 + -0x88) = 3;
            *(double *)(puVar1 + -0x80) = (double)fVar19;
            func_0x0001072aad1c(puVar1 + -0xe8,puVar1 + -0x88);
            func_0x0001077b0f18();
          }
          func_0x000107327958(puVar1 + -0x100,puVar1 + -0xe8);
          *(undefined4 *)(puVar1 + -0x88) = 0;
          *(undefined8 *)(puVar1 + -0x78) = *(undefined8 *)(puVar1 + -0xf8);
          *(undefined8 *)(puVar1 + -0x80) = *(undefined8 *)(puVar1 + -0x100);
          *(undefined8 *)(puVar1 + -0x100) = 0;
          *(undefined8 *)(puVar1 + -0xf8) = 0;
          func_0x000104c33108(puVar1 + -0x100);
          func_0x000107269124(puVar1 + -0xe8);
          func_0x0001077b0f40();
          uVar14 = 1;
        }
        else {
          (**(code **)(**(long **)pcVar13 + 0x28))(puVar1 + -0x88);
          func_0x0001077b0f40();
          uVar14 = 2;
        }
        puVar1[-0x90] = uVar14;
        func_0x0001077b0f18();
        func_0x000100060964(puVar1 + -0x88,ppuVar12);
        func_0x0001077b0f2c();
        ppuVar6 = (undefined **)(puVar1 + -0xd0);
        func_0x0001072d80fc();
        func_0x0001077b0eb4();
        ppuVar10 = (undefined **)(puVar1 + -0xd0);
        func_0x000104c3323c();
        ppuVar9 = ppuVar12;
      }
      func_0x0001077b0de4(*(undefined8 *)(puVar1 + -0x48));
      if ((bool)uVar4) {
        return ppuVar10;
      }
      ___stack_chk_fail();
      puVar18 = &SUB_1077b0db0;
      param_1 = ppuVar10;
      func_0x0001077b0e28();
code_r0x0001077b0db0:
      *(undefined ***)(puVar3 + -0x20) = ppuVar9;
      *(undefined ***)(puVar3 + -0x18) = ppuVar10;
      *(undefined8 ****)(puVar3 + -0x10) = pppuVar17;
      *(undefined **)(puVar3 + -8) = puVar18;
      func_0x0001074e13c8(param_1 + 1,ppuVar6 + 1);
      *(undefined1 *)(param_1 + 0x27) = 1;
      return param_1;
    }
  }
  return ppuVar11;
}



/* Entry: 1077b1090; end: 1077b10ef;  */

void FUN_1077b1090(void)

{
  long lVar1;
  long extraout_x8;
  long unaff_x19;
  undefined8 *unaff_x21;
  
  func_0x0001077b1728();
  lVar1 = extraout_x8 + 0x10;
  func_0x0001077b10f0();
  if (*(int *)(lVar1 + 0x28) == 1) {
    *(undefined4 *)(unaff_x19 + 0x10) = 1;
  }
  else if (*(int *)(lVar1 + 0x28) == 0) {
    FUN_107750418(*unaff_x21);
  }
  else {
    FUN_1077b16f0();
  }
  return;
}



/* Entry: 1077b1310; end: 1077b132f;  */

void FUN_1077b1310(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x0001077b1330();
  }
  return;
}



/* Entry: 1077b149c; end: 1077b14af;  */

void FUN_1077b149c(void)

{
  func_0x0001077b15ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077b16f0; end: 1077b170b;  */

void FUN_1077b16f0(long param_1)

{
  func_0x0001073dd510();
  *(undefined4 *)(param_1 + 0x10) = 2;
  return;
}



/* Entry: 1077b1ad0; end: 1077b1f47;  */

void FUN_1077b1ad0(undefined1 *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  bool bVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined8 extraout_x8;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong *unaff_x21;
  ulong *unaff_x22;
  long lVar14;
  ulong *unaff_x23;
  long lVar15;
  ulong *unaff_x24;
  long *plVar16;
  ulong *unaff_x25;
  long lVar17;
  ulong unaff_x26;
  ulong *unaff_x27;
  long lVar18;
  ulong *unaff_x28;
  ulong *puVar19;
  long *plStack_2f8;
  long *plStack_2f0;
  long *plStack_2e8;
  long lStack_2e0;
  long lStack_2d0;
  long lStack_2c8;
  ulong *puStack_2c0;
  ulong *puStack_2b8;
  ulong uStack_2b0;
  ulong *puStack_2a8;
  ulong *puStack_2a0;
  ulong *puStack_298;
  ulong *puStack_290;
  ulong *puStack_288;
  ulong *puStack_280;
  ulong *puStack_278;
  undefined1 *puStack_270;
  undefined *puStack_268;
  undefined1 *puStack_258;
  ulong *puStack_250;
  char cStack_241;
  long alStack_240 [29];
  ulong auStack_158 [29];
  undefined8 uStack_70;
  
  puVar4 = param_2;
  puStack_258 = param_1;
  func_0x0001077b3d14();
  cStack_241 = '\0';
  uVar12 = *puVar4;
  uVar11 = puVar4[1];
  uStack_70 = extraout_x8;
  if (uVar12 == uVar11) {
    uVar2 = param_2[3] == param_2[4];
    if (!(bool)uVar2) {
      func_0x0001077b3e24();
      uVar12 = *param_2;
      uVar11 = param_2[1];
      goto LAB_1077b1b24;
    }
  }
  else {
LAB_1077b1b24:
    uVar2 = uVar12 == uVar11;
    if (!(bool)uVar2) {
      if (((char)param_2[0x16] == '\x01') &&
         (__ZNSt3__16chrono12steady_clock3nowEv(),
         (long)param_2[0x19] < (long)((long)puVar4 - param_2[0x17]) / 1000000)) {
        func_0x0001077b3e24();
      }
      if (cStack_241 == '\x01') {
        puVar4 = param_2;
        func_0x0001077b216c(param_2,*param_2,param_2[1]);
        uVar12 = *param_2;
        if (0xe8 < (long)(param_2[1] - uVar12)) {
          unaff_x24 = (ulong *)((long)(param_2[1] - uVar12) / 0xe8);
          unaff_x25 = (ulong *)((long)unaff_x24 - 2U >> 1);
          puStack_250 = (ulong *)(uVar12 + 0xe8);
          unaff_x27 = (ulong *)0xe8;
          unaff_x28 = unaff_x25;
          do {
            if ((long)unaff_x28 <= (long)unaff_x25) {
              uVar1 = ((ulong)unaff_x28 & 0x3fffffffffffffff) << 1 | 1;
              unaff_x21 = (ulong *)(uVar1 * 0xe8 + uVar12);
              uVar11 = (long)unaff_x28 * 2 + 2;
              unaff_x26 = uVar1;
              if ((long)uVar11 < (long)unaff_x24) {
                func_0x0001077b3d40();
                bVar3 = (int)puVar4 == 0;
                lVar10 = 0xe8;
                if (bVar3) {
                  lVar10 = 0;
                }
                unaff_x21 = (ulong *)((long)unaff_x21 + lVar10);
                unaff_x26 = uVar11;
                if (bVar3) {
                  unaff_x26 = uVar1;
                }
              }
              unaff_x22 = (ulong *)(uVar12 + (long)unaff_x28 * 0xe8);
              puVar4 = param_2;
              func_0x0001077b2e30(param_2,unaff_x21,unaff_x22);
              if (((ulong)puVar4 & 1) == 0) {
                func_0x0001077b3de0();
                do {
                  puVar4 = unaff_x22;
                  unaff_x22 = unaff_x21;
                  func_0x0001077b3658(puVar4,unaff_x22);
                  unaff_x21 = unaff_x22;
                  if ((long)unaff_x25 < (long)unaff_x26) break;
                  uVar1 = (unaff_x26 & 0x3fffffffffffffff) << 1 | 1;
                  unaff_x21 = (ulong *)(uVar1 * 0xe8 + uVar12);
                  uVar11 = unaff_x26 * 2 + 2;
                  unaff_x26 = uVar1;
                  if ((long)uVar11 < (long)unaff_x24) {
                    func_0x0001077b3d40();
                    bVar3 = (int)puVar4 == 0;
                    lVar10 = 0xe8;
                    if (bVar3) {
                      lVar10 = 0;
                    }
                    unaff_x21 = (ulong *)((long)unaff_x21 + lVar10);
                    unaff_x26 = uVar11;
                    if (bVar3) {
                      unaff_x26 = uVar1;
                    }
                  }
                  func_0x0001077b3d40();
                } while ((int)puVar4 == 0);
                func_0x0001077b3e58();
                func_0x0001077b3d8c();
              }
            }
            unaff_x28 = (ulong *)((long)unaff_x28 + -1);
          } while (-1 < (long)unaff_x28);
        }
        *(undefined1 *)(param_2 + 0x16) = 0;
        __ZNSt3__16chrono12steady_clock3nowEv();
        param_2[0x17] = (ulong)puVar4;
      }
      else if (((char)param_2[0x1a] == '\x01') &&
              (unaff_x21 = param_2 + 3, *unaff_x21 != param_2[4])) {
        func_0x0001077b216c(param_2);
        puVar4 = (ulong *)param_2[4];
        unaff_x26 = 0xe8;
        for (unaff_x22 = (ulong *)param_2[3]; unaff_x22 != puVar4; unaff_x22 = unaff_x22 + 0x1d) {
          func_0x0001077b3124(param_2,unaff_x22);
          unaff_x27 = (ulong *)*param_2;
          uVar12 = param_2[1] - (long)unaff_x27;
          if (0xe8 < (long)uVar12) {
            puVar19 = (ulong *)(uVar12 / 0xe8 - 2 >> 1);
            unaff_x25 = (ulong *)(param_2[1] - 0xe8);
            puVar5 = param_2;
            func_0x0001077b2e30(param_2,unaff_x27 + (long)puVar19 * 0x1d,unaff_x25);
            unaff_x28 = puVar19;
            if ((int)puVar5 != 0) {
              func_0x0001077b3230(auStack_158,unaff_x25);
              puVar5 = unaff_x27 + (long)puVar19 * 0x1d;
              do {
                unaff_x24 = puVar5;
                puVar6 = unaff_x25;
                func_0x0001077b3658(unaff_x25,unaff_x24);
                unaff_x28 = (ulong *)0x0;
                if (puVar19 == (ulong *)0x0) break;
                puVar19 = (ulong *)((long)puVar19 - 1U >> 1);
                func_0x0001077b3d9c();
                puVar5 = unaff_x27 + (long)puVar19 * 0x1d;
                unaff_x25 = unaff_x24;
                unaff_x28 = puVar19;
              } while (((ulong)puVar6 & 1) != 0);
              func_0x0001077b3e8c();
              func_0x0001077b3d8c();
            }
          }
        }
        func_0x0001077b2e04(unaff_x21);
      }
      unaff_x23 = (ulong *)*param_2;
      uVar12 = param_2[1];
      lVar10 = uVar12 - (long)unaff_x23;
      uVar2 = lVar10 == 0xe9;
      if (0xe8 < lVar10) {
        unaff_x24 = (ulong *)(lVar10 / 0xe8);
        func_0x0001077b3e78(alStack_240);
        unaff_x27 = (ulong *)0x0;
        unaff_x25 = (ulong *)((long)unaff_x24 - 2U >> 1);
        unaff_x26 = 0xe8;
        puStack_250 = unaff_x23;
        do {
          unaff_x28 = unaff_x23 + (long)unaff_x27 * 0x1d;
          puVar4 = unaff_x28 + 0x1d;
          puVar5 = (ulong *)((long)unaff_x27 << 1 | 1);
          unaff_x21 = (ulong *)((long)unaff_x27 * 2 + 2);
          unaff_x22 = puVar4;
          unaff_x27 = puVar5;
          if ((long)unaff_x21 < (long)unaff_x24) {
            puVar19 = param_2;
            func_0x0001077b2e30(param_2,puVar4,unaff_x28 + 0x3a);
            unaff_x22 = unaff_x28 + 0x3a;
            unaff_x27 = unaff_x21;
            if ((int)puVar19 == 0) {
              unaff_x22 = puVar4;
              unaff_x27 = puVar5;
            }
          }
          func_0x0001077b3658(unaff_x23,unaff_x22);
          unaff_x23 = unaff_x22;
        } while ((long)unaff_x27 <= (long)unaff_x25);
        unaff_x23 = (ulong *)(uVar12 - 0xe8);
        uVar2 = unaff_x22 == unaff_x23;
        if ((bool)uVar2) {
          func_0x0001077b3e58();
        }
        else {
          func_0x0001077b3e60();
          func_0x0001077b3658(unaff_x23,alStack_240);
          unaff_x21 = puStack_250;
          uVar12 = (long)unaff_x22 + (0xe8 - (long)puStack_250);
          uVar2 = uVar12 == 0xe9;
          if (0xe8 < (long)uVar12) {
            uVar12 = uVar12 / 0xe8 - 2 >> 1;
            unaff_x23 = puStack_250 + uVar12 * 0x1d;
            puVar4 = param_2;
            func_0x0001077b2e30(param_2,unaff_x23,unaff_x22);
            if ((int)puVar4 != 0) {
              func_0x0001077b3de0();
              unaff_x25 = (ulong *)0xe8;
              do {
                unaff_x24 = unaff_x23;
                func_0x0001077b3e60();
                unaff_x23 = unaff_x24;
                if (uVar12 == 0) break;
                uVar12 = uVar12 - 1 >> 1;
                unaff_x23 = unaff_x21 + uVar12 * 0x1d;
                func_0x0001077b3d9c();
                unaff_x22 = unaff_x24;
              } while (((ulong)puVar4 & 1) != 0);
              func_0x0001077b3e8c();
              func_0x0001077b3d8c();
            }
          }
        }
        func_0x0001077b356c(alStack_240);
        uVar12 = param_2[1];
      }
      func_0x0001077b3538(auStack_158,uVar12 - 0xe8);
      func_0x0001077b3940(param_2,param_2[1] - 0xe8);
      param_3 = auStack_158;
      puVar7 = puStack_258;
      func_0x0001077b3538();
      puVar7[0xd0] = 1;
      puVar4 = auStack_158;
      func_0x000107273efc();
      goto LAB_1077b1edc;
    }
  }
  *puStack_258 = 0;
  puStack_258[0xd0] = 0;
LAB_1077b1edc:
  func_0x0001077b3cec(uStack_70);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    plVar8 = alStack_240;
    func_0x0001077b356c();
    func_0x0001077b3d2c();
    puStack_268 = &UNK_1077b1f48;
    lVar15 = plVar8[3];
    lVar13 = plVar8[4];
    lVar10 = lVar13 - lVar15;
    puStack_2c0 = unaff_x28;
    puStack_2b8 = unaff_x27;
    uStack_2b0 = unaff_x26;
    puStack_2a8 = unaff_x25;
    puStack_2a0 = unaff_x24;
    puStack_298 = unaff_x23;
    puStack_290 = unaff_x22;
    puStack_288 = unaff_x21;
    puStack_280 = param_2;
    puStack_278 = puVar4;
    puStack_270 = &stack0xfffffffffffffff0;
    if (0 < lVar10) {
      lVar14 = *plVar8;
      plVar16 = plVar8 + 2;
      lVar17 = plVar8[1];
      lVar18 = lVar10 / 0xe8;
      if (*plVar16 - lVar17 < lVar10) {
        plVar9 = plVar8;
        FUN_1077b3260(plVar8,(lVar17 - lVar14) / 0xe8 + lVar18);
        func_0x0001077b3354(&plStack_2f8,plVar9,(lVar14 - *plVar8) / 0xe8,plVar16);
        lVar13 = (long)plStack_2e8 + lVar10;
        for (; lVar10 != 0; lVar10 = lVar10 + -0xe8) {
          func_0x0001077b3e78(plStack_2e8);
          plStack_2e8 = plStack_2e8 + 0x1d;
        }
        plStack_2e8 = (long *)lVar13;
        func_0x0001077b33f4(plVar16,lVar14,plVar8[1],lVar13);
        lVar10 = *plVar8;
        plStack_2e8 = (long *)((long)plStack_2e8 + (plVar8[1] - lVar14));
        plVar8[1] = lVar14;
        func_0x0001077b33f4(plVar16,lVar10,lVar14,plStack_2f0 + ((lVar14 - lVar10) / -0xe8) * 0x1d);
        plStack_2f8 = (long *)*plVar8;
        *plVar8 = (long)(plStack_2f0 + ((lVar14 - lVar10) / -0xe8) * 0x1d);
        lVar10 = plVar8[2];
        plVar8[2] = lStack_2e0;
        plVar8[1] = (long)plStack_2e8;
        plStack_2f0 = plStack_2f8;
        plStack_2e8 = plStack_2f8;
        lStack_2e0 = lVar10;
        func_0x0001077b34d0(&plStack_2f8);
      }
      else {
        lVar10 = lVar17 - lVar14;
        if (lVar10 / 0xe8 < lVar18) {
          plStack_2f0 = &lStack_2d0;
          plStack_2e8 = &lStack_2c8;
          plStack_2f8 = plVar16;
          lStack_2d0 = lVar17;
          for (lVar18 = lVar10 + lVar15; lStack_2c8 = lVar17, lVar18 != lVar13;
              lVar18 = lVar18 + 0xe8) {
            func_0x0001077b3230(lVar17,lVar18);
            lVar17 = lStack_2c8 + 0xe8;
          }
          lStack_2e0 = CONCAT71(lStack_2e0._1_7_,1);
          func_0x0001077b348c(&plStack_2f8);
          plVar8[1] = lVar17;
          if (0 < lVar10) {
            func_0x0001077b3d58();
            func_0x0001077b38f8(lVar15,lVar10 / 0xe8,lVar14);
          }
        }
        else {
          func_0x0001077b3d58();
          func_0x0001077b38f8(lVar15,lVar18,lVar14);
        }
      }
    }
    func_0x0001077b2e04(plVar8 + 3);
    *(undefined1 *)param_3 = 1;
    return;
  }
  return;
}



/* Entry: 1077b3074; end: 1077b3097;  */

undefined8 FUN_1077b3074(undefined8 param_1)

{
  func_0x0001077b3098();
  return param_1;
}



/* Entry: 1077b3260; end: 1077b32bf;  */

long * FUN_1077b3260(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar4;
  
  if (param_2 < (long *)0x11a7b9611a7b962) {
    uVar1 = (param_1[2] - *param_1) / 0xe8;
    plVar3 = (long *)(uVar1 * 2);
    if (plVar3 < param_2 || (long)plVar3 - (long)param_2 == 0) {
      plVar3 = param_2;
    }
    if (0x8d3dcb08d3dcaf < uVar1) {
      plVar3 = (long *)0x11a7b9611a7b961;
    }
    return plVar3;
  }
  func_0x0001077b3340();
  func_0x0001077b3d80();
  plVar3 = param_1 + 2;
  lVar4 = param_2[1] + ((param_1[1] - *param_1) / -0xe8) * 0xe8;
  func_0x0001077b33f4(plVar3,*param_1,param_1[1],lVar4);
  unaff_x19[1] = lVar4;
  uVar2 = *unaff_x20;
  unaff_x20[1] = uVar2;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar2;
  uVar2 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar2;
  uVar2 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar2;
  *unaff_x19 = unaff_x19[1];
  return plVar3;
}



/* Entry: 1077b3504; end: 1077b3593;  */

void FUN_1077b3504(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001077b3d80();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0xe8;
    func_0x0001077b356c();
  }
  return;
}



/* Entry: 1077b37a8; end: 1077b37cf;  */

void FUN_1077b37a8(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 3);
  if (cVar1 != *(char *)(param_2 + 3)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 3) == '\x01') {
        func_0x00010725aef4();
        *(undefined1 *)(param_1 + 3) = 0;
      }
      return;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x000107479ce4();
    func_0x0001074714c8();
    func_0x00010747a468();
    return;
  }
  return;
}



/* Entry: 1077b3a44; end: 1077b3ab3;  */

/* WARNING: Possible PIC construction at 0x0001077b3a68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077b3a6c) */
/* WARNING: Removing unreachable block (ram,0x0001077b3aac) */
/* WARNING: Removing unreachable block (ram,0x0001077b3aa4) */
/* WARNING: Removing unreachable block (ram,0x0001077b3e08) */

undefined1 * FUN_1077b3a44(void)

{
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  func_0x0001077b3d14();
  uStack_38 = 1;
  func_0x0001077b3adc();
  return auStack_40;
}



/* Entry: 1077b3c5c; end: 1077b3ceb;  */

long * FUN_1077b3c5c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001077b3594(lVar1 + 0x18);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 1077b4688; end: 1077b46ff;  */

void FUN_1077b4688(long *param_1,ulong param_2)

{
  long *plVar1;
  undefined8 *extraout_x8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  plVar1 = param_1 + 2;
  if ((ulong)(*plVar1 - *param_1 >> 3) < param_2) {
    if (param_2 >> 0x3d != 0) {
      func_0x000107269d00();
      func_0x0001077b4da0();
      func_0x0001077b4d98();
      func_0x0001074739a0(&uStack_80,plVar1 + 10);
      extraout_x8[1] = uStack_78;
      *extraout_x8 = uStack_80;
      uStack_80 = 0;
      uStack_78 = 0;
      *(undefined4 *)(extraout_x8 + 2) = 2;
      func_0x0001073e0028(&uStack_80);
      return;
    }
    func_0x000107269d0c();
    func_0x0001077b4dd4();
    func_0x0001077b4da0();
  }
  return;
}



/* Entry: 1077b4910; end: 1077b499b;  */

long FUN_1077b4910(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_48 = 0;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (; lStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 0x38) {
    func_0x00010727d614(param_4,param_2);
    param_4 = lStack_38 + 0x38;
  }
  uStack_48 = 1;
  func_0x0001077b499c(&uStack_60);
  return param_4;
}



/* Entry: 1077b4c88; end: 1077b4cab;  */

void FUN_1077b4c88(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1077b50d0; end: 1077b512f;  */

long FUN_1077b50d0(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  long *unaff_x19;
  long lStack_30;
  
  func_0x0001077b5480();
  func_0x0001077b54c8();
  lVar1 = lStack_30;
  func_0x0001077b5188();
  *unaff_x19 = lStack_30 + 0x18;
  unaff_x19[1] = lStack_30;
  func_0x0001077b5460();
  func_0x0001077b5498();
  if ((bool)in_ZR) {
    return lVar1;
  }
  ___stack_chk_fail();
  func_0x0001077b5460();
  __Unwind_Resume();
  *(undefined8 *)(lVar1 + 8) = param_2;
  lVar2 = lVar1;
  func_0x0001077b5158();
  *(long *)(lVar1 + 0x10) = lVar2;
  return lVar1;
}



/* Entry: 1077b51fc; end: 1077b5223;  */

void FUN_1077b51fc(undefined8 param_1)

{
  _bzero(param_1,0x180);
  func_0x0001077b523c(param_1);
  return;
}



/* Entry: 1077b5420; end: 1077b54d3;  */

void FUN_1077b5420(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 *puStack_20;
  undefined8 uStack_18;
  
  puStack_20 = param_1;
  uStack_18 = param_2;
  func_0x0001077b52a8(&uStack_30,*param_1);
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001077b5448();
  return;
}



/* Entry: 1077b5718; end: 1077b576f;  */

void FUN_1077b5718(long param_1,int param_2)

{
  undefined8 uStack_40;
  
  if (*(int *)(*(long *)(param_1 + 8) + 100) != param_2) {
    func_0x0001077b5824();
    *(int *)(uStack_40 + 100) = param_2;
    func_0x0001077b584c();
    func_0x0001077b5834();
    func_0x0001077b5858();
    func_0x0001077b5844();
  }
  return;
}



/* Entry: 1077b590c; end: 1077b5943;  */

undefined8 * FUN_1077b590c(undefined8 *param_1,undefined8 *param_2)

{
  if (param_1 != param_2) {
    func_0x0001077b5944(param_1,*param_2,param_2[1]);
  }
  return param_1;
}



/* Entry: 1077b5ee4; end: 1077b6063;  */

void FUN_1077b5ee4(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_80;
  undefined8 auStack_78 [3];
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  if (*(int *)(param_1 + 0x58) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    puVar1 = (undefined8 *)(param_1 + 0x48);
    func_0x0001077b6850();
    func_0x0001077b7240();
    if (extraout_x8_00 != 0) {
      do {
        func_0x0001077b7198();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001077b7278();
    puVar2 = puVar1;
    func_0x0001077b7298();
    puVar3 = puVar2 + 3;
    *puVar2 = extraout_x8_01;
    func_0x0001077b7410(puVar3,uVar4,&uStack_80);
    puStack_50 = (undefined8 *)0x0;
    puStack_48 = (undefined8 *)0x0;
    puStack_60 = puVar3;
    puStack_58 = puVar1;
    func_0x0001077b66dc(&puStack_50);
    func_0x0001077b6064(param_1 + 8,&puStack_60);
    func_0x0001077b66dc(&puStack_60);
    func_0x00010724ae28(auStack_78);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 8);
    puVar1 = (undefined8 *)(param_1 + 0x48);
    func_0x0001077b6868();
    lVar5 = puVar1[1];
    uVar7 = puVar1[1];
    uVar6 = *puVar1;
    func_0x0001077b7278();
    puVar2 = puVar1;
    func_0x0001077b7298();
    *puVar2 = extraout_x8;
    uStack_80 = uVar6;
    auStack_78[0] = uVar7;
    if (lVar5 != 0) {
      do {
        func_0x0001077b7198();
      } while (extraout_w10 != 0);
    }
    func_0x0001077b7454(puVar2 + 3,uVar4,&uStack_80);
    func_0x00010750b98c(&uStack_80);
    puStack_50 = puVar2 + 3;
    puStack_48 = puVar1;
    func_0x0001077b72d0();
    func_0x0001077b6064(param_1 + 8,&puStack_50);
    func_0x0001077b66dc(&puStack_50);
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(*(long **)(param_1 + 0x18),param_1);
  return;
}



/* Entry: 1077b6450; end: 1077b64cb;  */

void FUN_1077b6450(long *param_1)

{
  long lVar1;
  undefined8 uStack_50;
  
  func_0x0001077b71e8();
  if (uStack_50 != 0) {
    lVar1 = *param_1;
    func_0x0001077b72b8();
    func_0x0001077b6e38();
    func_0x0001077b71dc();
    func_0x0001077b71f4();
    if (lVar1 != 0) {
      func_0x0001077b716c();
    }
  }
  func_0x0001077b7200();
  return;
}



/* Entry: 1077b6764; end: 1077b677f;  */

void FUN_1077b6764(long param_1)

{
  func_0x00010002b838();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 1077b6930; end: 1077b6933;  */

void FUN_1077b6930(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109db8b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1077b6b40; end: 1077b6b9b;  */

void FUN_1077b6b40(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *extraout_x8;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x0001077b7208();
  puVar3 = (undefined8 *)0x40;
  __Znwm();
  uVar5 = unaff_x20[1];
  uVar4 = *unaff_x20;
  puVar3[4] = *unaff_x19;
  *(undefined4 *)(puVar3 + 5) = *(undefined4 *)(unaff_x19 + 1);
  uVar1 = unaff_x19[2];
  uVar2 = unaff_x19[3];
  unaff_x19[2] = 0;
  *puVar3 = &PTR_DAT_1109db900;
  puVar3[1] = unaff_x21;
  puVar3[3] = uVar5;
  puVar3[2] = uVar4;
  puVar3[6] = uVar1;
  puVar3[7] = uVar2;
  *extraout_x8 = puVar3;
  return;
}



/* Entry: 1077b6dcc; end: 1077b6dcf;  */

undefined8 * FUN_1077b6dcc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109db940;
  func_0x0001073787dc(param_1 + 6);
  return param_1;
}



/* Entry: 1077b6f48; end: 1077b6f73;  */

undefined8 FUN_1077b6f48(undefined8 param_1)

{
  func_0x0001077b7318(&PTR_DAT_1109db980);
  func_0x0001077b6f08();
  return param_1;
}



/* Entry: 1077b706c; end: 1077b70cf;  */

void FUN_1077b706c(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_2;
  func_0x0001077b732c();
  *param_1 = extraout_x8;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(lVar1 + 8);
  func_0x000104c2fe00(param_1 + 2,lVar1 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x50);
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  uVar4 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(unaff_x19 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(unaff_x19 + 0x58) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x50) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x48) = uVar2;
  func_0x000107332298(unaff_x19 + 0x68,param_2 + 0x68);
  return;
}



/* Entry: 1077b7410; end: 1077b7497;  */

void FUN_1077b7410(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long extraout_x8;
  
  func_0x0001077b7750();
  func_0x0001077b7760();
  if (extraout_x8 != 0) {
    plVar1 = (long *)(extraout_x8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x0001077b7794();
  func_0x0001077b7534();
  return;
}



/* Entry: 1077b75b4; end: 1077b75f3;  */

undefined8 FUN_1077b75b4(undefined8 *param_1)

{
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  
  *param_1 = &PTR_DAT_1109dba00;
  func_0x00010750b900(param_1 + 0x13);
  func_0x00010750bd10(param_1 + 0x10);
  func_0x0001077b732c();
  *param_1 = extraout_x8;
  func_0x0001072c9240(param_1 + 0xd);
  func_0x000104c2f714(param_1 + 2);
  return unaff_x19;
}



/* Entry: 1077b77a8; end: 1077b784f;  */

void FUN_1077b77a8(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  int extraout_w10;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000113822cf0 & 1) == 0) {
    iVar2 = 0x13822cf0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001077b7850(&uStack_40);
      uRam0000000113822ce0 = uStack_40;
      lRam0000000113822ce8 = lStack_38;
      uStack_40 = 0;
      lStack_38 = 0;
      func_0x000107563ce4(&uStack_40);
      ___cxa_guard_release(0x113822cf0);
    }
  }
  lVar1 = lRam0000000113822ce8;
  *param_1 = uRam0000000113822ce0;
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x0001077b8c98();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1077b7acc; end: 1077b7b37;  */

void FUN_1077b7acc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_40 [16];
  
  lVar1 = *(long *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (lVar1 != 0) {
    func_0x0001077b8cb8();
  }
  func_0x0001077b7c14(auStack_40,*(undefined8 *)(param_1 + 8),param_2);
  func_0x0001077b7c40((undefined8 *)(param_1 + 8),auStack_40);
  func_0x0001077b8d10();
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))(*(long **)(param_1 + 0x18),param_1);
  return;
}



/* Entry: 1077b7efc; end: 1077b7f17;  */

void FUN_1077b7efc(void)

{
  undefined1 uStack_11;
  
  func_0x0001077b7f18(&uStack_11);
  return;
}



/* Entry: 1077b8108; end: 1077b8133;  */

void FUN_1077b8108(void)

{
  func_0x0001077b8d78();
  func_0x0001077b8158();
  return;
}



/* Entry: 1077b8208; end: 1077b8277;  */

/* WARNING: Possible PIC construction at 0x0001077b8240: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077b8244) */
/* WARNING: Removing unreachable block (ram,0x0001077b8260) */
/* WARNING: Removing unreachable block (ram,0x0001077b8274) */
/* WARNING: Removing unreachable block (ram,0x0001077b8258) */
/* WARNING: Removing unreachable block (ram,0x0001077b8d18) */

undefined8
FUN_1077b8208(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_40;
  
  func_0x0001077b8c7c();
  func_0x0001077b8dc0();
  func_0x0001077b8d78(uStack_40,param_3,param_4);
  func_0x0001077b82a4();
  return param_1;
}



/* Entry: 1077b85ec; end: 1077b8617;  */

void FUN_1077b85ec(undefined8 param_1,undefined8 param_2)

{
  func_0x0001077b8da4(param_2,param_1,&PTR_DAT_1109dbc98);
  func_0x0001077b8d48();
  return;
}



/* Entry: 1077b87d4; end: 1077b89af;  */

void FUN_1077b87d4(long param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 extraout_x8;
  undefined8 uVar4;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [32];
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [120];
  char cStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1;
  func_0x0001077b8c7c();
  uStack_38 = extraout_x8;
  func_0x000107284284(auStack_108,lVar1 + 8);
  uVar2 = param_1 + 8;
  func_0x0001072842e4();
  if ((uVar2 & 1) != 0) {
    func_0x0001077b8698(auStack_140,param_1 + 0x40);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    func_0x00010754a75c(auStack_b8,*(undefined8 *)(param_1 + 0x30),&uStack_d8);
    in_ZR = cStack_40 == '\x01';
    if ((bool)in_ZR) {
      func_0x0001077b7b38(auStack_f8,auStack_b8,uVar4);
      func_0x0001077b8a98(&uStack_e8,auStack_f8);
      func_0x00010750c6cc(auStack_f8);
    }
    func_0x000107362064(auStack_b8);
    func_0x0001077b7c14(auStack_b8,uVar4,&uStack_e8);
    func_0x0001077b81b4(auStack_118,auStack_b8);
    func_0x0001077b7ed4(auStack_b8);
    func_0x00010750c6cc(&uStack_e8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_d8);
    plVar3 = (long *)(param_1 + 8);
    func_0x00010728433c();
    func_0x0001077b8a44(auStack_b8,auStack_140);
    uStack_c0 = 0;
    uVar4 = 0x40;
    __Znwm();
    func_0x0001077b8d68();
    func_0x0001077b8a44();
    param_2 = &uStack_d8;
    uStack_c0 = uVar4;
    (**(code **)(*plVar3 + 0x10))(plVar3,param_2);
    func_0x0001006393ec(&uStack_d8);
    func_0x0001077b8a6c(auStack_b8);
    func_0x0001077b8a6c(auStack_140);
  }
  func_0x000107270b00();
  func_0x0001077b8c5c(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107362064(auStack_b8);
  func_0x00010750c6cc(&uStack_e8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_d8);
  func_0x00010725b1d4(auStack_138);
  func_0x000107270b00(auStack_108);
  func_0x0001077b8cb0();
  func_0x0001077b8da4(param_2);
  func_0x0001077b8d48();
  return;
}



/* Entry: 1077b8b4c; end: 1077b8bdf;  */

void FUN_1077b8b4c(long param_1)

{
  int iVar1;
  int extraout_w10;
  long lVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)(param_1 + 0x38);
  uStack_30 = *(undefined8 *)(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != 0) {
    do {
      func_0x0001077b8c98();
    } while (extraout_w10 != 0);
  }
  lVar2 = *(long *)(param_1 + 8);
  iVar1 = (int)param_1 + 0x10;
  func_0x0001073789cc();
  if ((iVar1 != 0) && (*(long *)(param_1 + 0x28) == *(long *)(lVar2 + 0x78))) {
    func_0x00010750b8bc(lVar2 + 8,&uStack_30);
    *(undefined1 *)(lVar2 + 0x20) = 1;
    (**(code **)(**(long **)(lVar2 + 0x18) + 0x10))(*(long **)(lVar2 + 0x18),lVar2);
  }
  func_0x0001074f7454(&uStack_30);
  return;
}



/* Entry: 1077b9df8; end: 1077b9e0b;  */

void FUN_1077b9df8(void)

{
  func_0x0001077b9dc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077ba054; end: 1077ba19f;  */

void FUN_1077ba054(undefined8 param_1,long param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  uint *puStack_70;
  long *plStack_68;
  byte *pbStack_60;
  byte bStack_55;
  uint uStack_54;
  
  func_0x000107330040(param_1);
  uStack_54 = (uint)param_3;
  uVar1 = uStack_54 & 0x1f;
  lVar4 = param_2 + 0x70;
  lStack_88 = param_2 + 8;
  uStack_80 = param_1;
  func_0x0001077bb658(lVar4,uVar1);
  if (lVar4 == 0) {
    func_0x0001077be94c();
    func_0x0001077be84c();
  }
  else {
    uVar6 = param_3 >> 5 & 0x7ffffff;
    lVar2 = *(long *)(lVar4 + 0x50);
    if (uVar6 < (ulong)((*(long *)(lVar4 + 0x58) - lVar2) / 0x28)) {
      dVar8 = (double)NEON_ucvtf((ulong)*(ushort *)(param_2 + 0x1a));
      dVar9 = (double)NEON_ucvtf((ulong)*(ushort *)(param_2 + 0x1c));
      dVar7 = (double)(uVar1 - 1);
      _exp2(dVar7);
      puVar5 = (undefined8 *)(lVar2 + uVar6 * 0x28);
      bStack_55 = 0;
      lStack_78 = lVar4 + 0x18;
      puStack_70 = &uStack_54;
      plStack_68 = &lStack_88;
      pbStack_60 = &bStack_55;
      func_0x0001077bea3c(*(undefined8 *)(lVar4 + 0x20),*puVar5,puVar5[1],dVar8 / (dVar7 * dVar9));
      func_0x0001077bedc8();
      func_0x0001077bbf94();
      if ((bStack_55 & 1) != 0) {
        return;
      }
      func_0x0001077be94c();
      func_0x0001077be84c();
    }
    else {
      func_0x0001077be94c();
      func_0x0001077be84c();
    }
  }
  func_0x0001077be824();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1077ba178);
  (*pcVar3)();
}



/* Entry: 1077ba764; end: 1077ba7a3;  */

long * FUN_1077ba764(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001077bb10c(lVar1 + 0x18);
    }
    func_0x0001077be9c0();
  }
  return param_1;
}



/* Entry: 1077bab00; end: 1077bab4b;  */

long * FUN_1077bab00(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  while (lVar1 = param_1[2], lVar2 != lVar1) {
    param_1[2] = lVar1 + -0x28;
    func_0x0001077baab4(lVar1 + -8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1077badf4; end: 1077bb053;  */

void FUN_1077badf4(undefined8 *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  long extraout_x8;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  double dVar5;
  
  func_0x0001077bee04();
  func_0x0001077beddc(param_2 & 0xffffffff);
  while( true ) {
    uVar2 = (uint)param_3;
    uVar1 = (uint)param_4;
    if (uVar1 <= uVar2) break;
    if (600 < uVar1 - uVar2) {
      func_0x0001077bea54();
      func_0x0001077beb84();
      func_0x0001077be8dc();
      FUN_1077badf4();
    }
    dVar5 = *(double *)(param_1[3] + extraout_x8 * 0x10);
    func_0x0001077beb78();
    func_0x0001077bb054();
    uVar4 = param_3;
    if (dVar5 < *(double *)(param_1[3] + (param_4 & 0xffffffff) * 0x10)) {
      func_0x0001077beb78();
      func_0x0001077bb054();
    }
    while( true ) {
      if ((uint)param_4 <= (uint)uVar4) break;
      func_0x0001077bb054(*param_1,param_1[3],uVar4,param_4);
      do {
        uVar4 = (ulong)((int)uVar4 + 1);
      } while (*(double *)(param_1[3] + uVar4 * 0x10) < dVar5);
      do {
        param_4 = (ulong)((int)param_4 - 1);
      } while (dVar5 < *(double *)(param_1[3] + param_4 * 0x10));
    }
    if (*(double *)(param_1[3] + (param_3 & 0xffffffff) * 0x10) == dVar5) {
      func_0x0001077beb78();
    }
    else {
      param_4 = (ulong)((uint)param_4 + 1);
    }
    func_0x0001077bb054();
    uVar3 = (uint)param_4;
    if (uVar3 <= (uint)param_2) {
      uVar2 = uVar3 + 1;
    }
    param_3 = (ulong)uVar2;
    if ((uint)param_2 <= uVar3) {
      uVar1 = uVar3 - 1;
    }
    param_4 = (ulong)uVar1;
  }
  return;
}



/* Entry: 1077bb5a0; end: 1077bb5ef;  */

long * FUN_1077bb5a0(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 3);
    plVar2 = (long *)*plVar2;
    func_0x0001077bb10c(lVar1);
    func_0x0001077be9c0();
  }
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1077bbeec; end: 1077bbf6b;  */

long FUN_1077bbeec(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 uVar3;
  
  lVar1 = param_1;
  puVar2 = param_3;
  func_0x0001077be83c();
  func_0x0001072c6f80();
  uVar3 = *param_3;
  *(undefined8 *)(lVar1 + 0x28) = param_3[1];
  *(undefined8 *)(lVar1 + 0x20) = uVar3;
  *param_3 = 0;
  param_3[1] = 0;
  lVar1 = lVar1 + 0x30;
  func_0x0001072692b0(lVar1,param_4);
  func_0x0001077becd0();
  func_0x0001077be7ec(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000104c318bc();
  *(undefined4 *)(lVar1 + 0x38) = 5;
  *(undefined8 **)(lVar1 + 0x40) = puVar2;
  return lVar1;
}



/* Entry: 1077bc4fc; end: 1077bc5ab;  */

void FUN_1077bc4fc(undefined8 param_1,undefined8 param_2,ulong param_3,uint param_4,ulong param_5)

{
  char cVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  char cVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int unaff_w25;
  double unaff_d12;
  double unaff_d14;
  double unaff_d15;
  
  func_0x0001077be874();
  func_0x0001077be76c();
  do {
    func_0x0001077beaac();
    if ((bool)in_ZR) {
      return;
    }
    func_0x0001077be8cc();
    if (!(bool)in_CY || (bool)in_ZR) {
      while( true ) {
        uVar5 = (uint)param_3;
        bVar3 = param_4 <= uVar5;
        bVar4 = uVar5 == param_4;
        if (bVar3 && !bVar4) break;
        func_0x0001077be800();
        if (!bVar3 || bVar4) {
          func_0x0001077be964();
          func_0x0001077bc5ac();
        }
        param_3 = (ulong)(uVar5 + 1);
      }
      return;
    }
    func_0x0001077be79c();
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x0001077be954();
      func_0x0001077bc5ac();
    }
    in_ZR = (param_5 & 0xff) == 0;
    cVar1 = '\0';
    in_CY = false;
    cVar2 = '\0';
    if ((bool)in_ZR) {
      func_0x0001077beb04();
      if (!(bool)in_CY || (bool)in_ZR) goto LAB_1077bc560;
LAB_1077bc578:
      func_0x0001077bebcc();
      if (cVar1 != cVar2) {
        return;
      }
    }
    else {
      cVar2 = NAN(unaff_d12) || NAN(unaff_d15);
      in_CY = unaff_d15 <= unaff_d12;
      in_ZR = unaff_d12 == unaff_d15;
      cVar1 = unaff_d12 < unaff_d15;
      if (!(bool)in_CY || (bool)in_ZR) {
LAB_1077bc560:
        func_0x0001077be7c0();
        FUN_1077bc4fc();
        if (unaff_w25 == 0) goto LAB_1077bc578;
      }
      in_CY = unaff_d15 <= unaff_d14;
      in_ZR = unaff_d14 == unaff_d15;
      if (unaff_d14 < unaff_d15) {
        return;
      }
    }
    func_0x0001077bebb4();
  } while( true );
}



/* Entry: 1077bc874; end: 1077bc89b;  */

undefined8 FUN_1077bc874(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_1077bd340(param_1 + 0x58);
  func_0x0001077bed9c(param_1 + 0x38);
  func_0x0001077bd3b0();
  return unaff_x19;
}



/* Entry: 1077bd340; end: 1077bd38f;  */

long * FUN_1077bd340(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 3);
    plVar2 = (long *)*plVar2;
    func_0x0001072c8e94(lVar1);
    func_0x0001077be9c0();
  }
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}


