/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1077e31f4; end: 1077e3207;  */

void FUN_1077e31f4(void)

{
  func_0x0001077e3510();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077e3610; end: 1077e3647;  */

void FUN_1077e3610(void)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001077efa58();
  for (; unaff_x21 != unaff_x19; unaff_x21 = unaff_x21 + 0x18) {
    func_0x0001077efe94();
    func_0x0001077e3648();
  }
  return;
}



/* Entry: 1077e3748; end: 1077e374f;  */

void FUN_1077e3748(undefined8 param_1)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001000d03a8(param_1,0x1138369c0);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 1077e3894; end: 1077e3897;  */

void FUN_1077e3894(void)

{
  func_0x0001077ee234();
  func_0x0001077e38b8();
  return;
}



/* Entry: 1077e39c4; end: 1077e3a13;  */

ulong FUN_1077e39c4(uint *param_1,long param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 auStack_44 [20];
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  if (param_1[0x10] == 0) {
    func_0x0001077ef5bc();
    param_1 = *(uint **)param_1;
  }
  else if (param_1[0x10] != 1) {
    puVar1 = *(uint **)(param_2 + 0x18);
    uVar2 = *puVar1;
    uVar3 = 0;
    uStack_2c = puVar1[1];
    uStack_28 = puVar1[2];
    uStack_24 = puVar1[3];
    uStack_30 = uVar2;
    func_0x000107438924(auStack_44,param_1,*(undefined8 *)(param_2 + 8),
                        *(undefined8 *)(param_2 + 0x10));
    puVar1 = param_1 + 10;
    if ((char)param_1[0xe] == '\0') {
      puVar1 = &uStack_30;
    }
    func_0x0001074389b0(auStack_44,puVar1);
    return CONCAT44(uVar3,uVar2);
  }
  return (ulong)*param_1;
}



/* Entry: 1077e3b9c; end: 1077e3bf7;  */

void FUN_1077e3b9c(void)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_60 [48];
  
  func_0x0001077ee5cc();
  while (unaff_x22 != unaff_x19) {
    func_0x0001077f1758();
    func_0x0001077e27bc();
    func_0x0001077f1b84();
  }
  func_0x0001077efeac();
  func_0x0001077ef0e0();
  func_0x0001077e3bf8();
  func_0x0001077e3c28(auStack_60);
  return;
}



/* Entry: 1077e3d38; end: 1077e3d73;  */

void FUN_1077e3d38(undefined8 *param_1,undefined8 param_2)

{
  func_0x0001077f06b8();
  func_0x0001077e3d74();
  *param_1 = param_2;
  return;
}



/* Entry: 1077e3fdc; end: 1077e403f;  */

void FUN_1077e3fdc(void)

{
  func_0x0001077efe7c();
  func_0x0001077f06b8();
  func_0x0001077ef838();
  func_0x0001077ef864();
  func_0x0001077ef464();
  func_0x0001077e4040();
  func_0x0001077eefe8();
  func_0x0001077ef370();
  return;
}



/* Entry: 1077e42ac; end: 1077e42cb;  */

byte FUN_1077e42ac(long param_1)

{
  byte bVar1;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    bVar1 = *(byte *)(param_1 + 0x10) >> 1 & 1;
    if (*(int *)(param_1 + 0x30) == 1) {
      bVar1 = 1;
    }
    return bVar1;
  }
  return 1;
}



/* Entry: 1077e4524; end: 1077e4537;  */

void FUN_1077e4524(void)

{
  func_0x0001077e4a44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077e4cd0; end: 1077e4e73;  */

void FUN_1077e4cd0(long param_1)

{
  func_0x0001077f0070();
  func_0x0001077efda8(param_1 + 0x198);
  return;
}



/* Entry: 1077e5154; end: 1077e516f;  */

void FUN_1077e5154(void)

{
  func_0x0001077ef51c();
  func_0x0001077e5170();
  return;
}



/* Entry: 1077e52a0; end: 1077e52d3;  */

void FUN_1077e52a0(void)

{
  undefined1 in_ZR;
  
  func_0x0001077ee1ec();
  func_0x0001077ee2d0();
  func_0x0001077ef1a8();
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077ef51c();
  func_0x0001077e52f0();
  return;
}



/* Entry: 1077e55ec; end: 1077e5643;  */

long FUN_1077e55ec(long param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001077efb28();
  if ((bool)in_CY) {
    func_0x0001077e5644();
  }
  else {
    func_0x0001077e5620();
    param_1 = unaff_x20 + 0x58;
  }
  *(long *)(unaff_x19 + 8) = param_1;
  return param_1 + -0x58;
}



/* Entry: 1077e57e4; end: 1077e5813;  */

void FUN_1077e57e4(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001077ef62c();
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 0x58) {
    func_0x0001077e24b8(unaff_x20);
  }
  return;
}



/* Entry: 1077e5954; end: 1077e596f;  */

void FUN_1077e5954(long param_1)

{
  func_0x0001077e2734();
  *(undefined4 *)(param_1 + 0x50) = 1;
  return;
}



/* Entry: 1077e5e10; end: 1077e5e9b;  */

bool FUN_1077e5e10(void)

{
  uint uVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  int extraout_w8;
  ulong extraout_x8;
  ulong uVar5;
  long extraout_x9;
  long lVar6;
  long extraout_x9_00;
  long extraout_x10;
  long lVar7;
  long extraout_x10_00;
  int extraout_w11;
  int iVar8;
  int extraout_w11_00;
  uint extraout_w13;
  undefined4 extraout_w13_00;
  undefined4 extraout_var;
  
  func_0x0001077ef1b8();
  func_0x0001077e9a48();
  FUN_1077e42ac();
  func_0x0001077f0bd8();
  func_0x0001077ee5f4();
  uVar5 = extraout_x8;
  lVar6 = extraout_x9;
  lVar7 = extraout_x10;
  iVar8 = extraout_w11;
  while ((bVar4 = (int)uVar5 == iVar8, bVar2 = lVar6 == lVar7 && bVar4, lVar6 != lVar7 || !bVar4 &&
         (uVar3 = bVar2, func_0x0001077f03b4(), (extraout_w13 & 1) != 0))) {
    func_0x0001077f038c();
    lVar6 = extraout_x9_00 + CONCAT44(extraout_var,extraout_w13_00);
    uVar1 = 0;
    if (!(bool)uVar3) {
      uVar1 = extraout_w8 + 1;
    }
    uVar5 = (ulong)uVar1;
    lVar7 = extraout_x10_00;
    iVar8 = extraout_w11_00;
  }
  func_0x0001077eff98();
  return bVar2;
}



/* Entry: 1077e601c; end: 1077e606b;  */

void FUN_1077e601c(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001077ef0d4();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    func_0x0001077ee6cc();
  }
  return;
}



/* Entry: 1077e61dc; end: 1077e61ef;  */

void FUN_1077e61dc(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    func_0x0001077e620c();
    *(undefined1 *)(param_1 + 0x20) = 1;
    return;
  }
  return;
}



/* Entry: 1077e6330; end: 1077e638f;  */

undefined8 * FUN_1077e6330(long param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x28);
  func_0x0001077ef1b8(param_1);
  func_0x0001077e60b0();
  puVar1 = unaff_x19;
  func_0x0001077ef0d4();
  *unaff_x19 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    func_0x0001077ee6cc();
  }
  return unaff_x19;
}



/* Entry: 1077e6be4; end: 1077e70d3;  */

void FUN_1077e6be4(void)

{
  func_0x0001077f0020();
  func_0x0001077ee99c();
  func_0x0001077e7e00();
  return;
}



/* Entry: 1077e735c; end: 1077e737b;  */

void FUN_1077e735c(void)

{
  func_0x0001077f002c();
  func_0x0001077ee880();
  return;
}



/* Entry: 1077e770c; end: 1077e7bff;  */

undefined1 *
FUN_1077e770c(undefined1 *param_1,undefined1 *param_2,undefined8 *param_3,undefined4 *param_4,
             undefined4 *param_5,undefined8 *param_6,undefined4 *param_7,undefined8 *param_8,
             undefined4 *param_9,undefined8 *param_10,undefined1 *param_11,undefined1 *param_12,
             undefined1 *param_13,undefined1 *param_14,undefined1 *param_15,undefined1 *param_16,
             undefined8 *param_17,undefined8 *param_18,undefined8 *param_19,undefined8 *param_20,
             undefined1 *param_21,undefined1 *param_22,undefined1 *param_23,undefined1 *param_24,
             undefined8 *param_25,undefined8 *param_26,undefined8 *param_27,undefined8 *param_28,
             undefined8 *param_29,undefined8 *param_30,undefined8 *param_31,undefined8 *param_32,
             undefined8 *param_33,undefined8 *param_34,undefined8 *param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined1 *param_39,undefined1 *param_40,
             undefined8 *param_41,undefined1 *param_42,undefined8 *param_43,undefined4 *param_44,
             undefined4 *param_45,undefined8 *param_46,undefined4 *param_47)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0xc) = param_3[1];
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = *param_4;
  *(undefined4 *)(param_1 + 0x18) = *param_5;
  uVar1 = *param_6;
  *(undefined8 *)(param_1 + 0x24) = param_6[1];
  *(undefined8 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = *param_7;
  *(undefined8 *)(param_1 + 0x30) = *param_8;
  *(undefined4 *)(param_1 + 0x38) = *param_9;
  uVar1 = *param_10;
  *(undefined8 *)(param_1 + 0x44) = param_10[1];
  *(undefined8 *)(param_1 + 0x3c) = uVar1;
  param_1[0x4c] = *param_11;
  param_1[0x4d] = *param_12;
  param_1[0x4e] = *param_13;
  param_1[0x4f] = *param_14;
  param_1[0x50] = *param_15;
  param_1[0x51] = *param_16;
  uVar2 = param_17[1];
  uVar1 = *param_17;
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_17 + 2);
  *(undefined8 *)(param_1 + 0x5c) = uVar2;
  *(undefined8 *)(param_1 + 0x54) = uVar1;
  uVar2 = param_18[1];
  uVar1 = *param_18;
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_18 + 2);
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  uVar2 = param_19[1];
  uVar1 = *param_19;
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_19 + 2);
  *(undefined8 *)(param_1 + 0x84) = uVar2;
  *(undefined8 *)(param_1 + 0x7c) = uVar1;
  uVar2 = param_20[1];
  uVar1 = *param_20;
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_20 + 2);
  *(undefined8 *)(param_1 + 0x98) = uVar2;
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  param_1[0xa4] = *param_21;
  param_1[0xa5] = *param_22;
  param_1[0xa6] = *param_23;
  param_1[0xa7] = *param_24;
  *(undefined8 *)(param_1 + 0xa8) = *param_25;
  *(undefined8 *)(param_1 + 0xb0) = *param_26;
  *(undefined8 *)(param_1 + 0xb8) = *param_27;
  *(undefined8 *)(param_1 + 0xc0) = *param_28;
  *(undefined8 *)(param_1 + 200) = *param_29;
  *(undefined8 *)(param_1 + 0xd0) = *param_30;
  *(undefined8 *)(param_1 + 0xd8) = *param_31;
  *(undefined8 *)(param_1 + 0xe0) = *param_32;
  *(undefined8 *)(param_1 + 0xe8) = *param_33;
  *(undefined8 *)(param_1 + 0xf0) = *param_34;
  *(undefined8 *)(param_1 + 0xf8) = *param_35;
  func_0x00010726ccd4(param_1 + 0x100,param_36);
  func_0x000104c318bc(param_1 + 0x160,param_37);
  func_0x000104c318bc(param_1 + 0x198,param_38);
  param_1[0x1d0] = *param_39;
  param_1[0x1d1] = *param_40;
  uVar1 = *param_41;
  *(undefined8 *)(param_1 + 0x1dc) = param_41[1];
  *(undefined8 *)(param_1 + 0x1d4) = uVar1;
  param_1[0x1e4] = *param_42;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  uVar1 = *param_43;
  *(undefined8 *)(param_1 + 0x1f0) = param_43[1];
  *(undefined8 *)(param_1 + 0x1e8) = uVar1;
  *(undefined8 *)(param_1 + 0x1f8) = param_43[2];
  *param_43 = 0;
  param_43[1] = 0;
  param_43[2] = 0;
  *(undefined4 *)(param_1 + 0x200) = *param_44;
  *(undefined4 *)(param_1 + 0x204) = *param_45;
  uVar1 = *param_46;
  *(undefined8 *)(param_1 + 0x210) = param_46[1];
  *(undefined8 *)(param_1 + 0x208) = uVar1;
  *param_46 = 0;
  param_46[1] = 0;
  *(undefined4 *)(param_1 + 0x218) = *param_47;
  return param_1;
}



/* Entry: 1077e7dfc; end: 1077e7dff;  */

long FUN_1077e7dfc(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_78 [40];
  
  param_1 = (long *)*param_1;
  lVar5 = param_1[1];
  lVar1 = *param_2;
  lVar2 = (param_2[1] - lVar1) / 0x88;
  if (0 < lVar2) {
    lVar6 = param_1[1];
    if ((param_1[2] - lVar6) / 0x88 < lVar2) {
      plVar4 = param_1;
      func_0x0001077de50c(param_1,(lVar6 - *param_1) / 0x88 + lVar2);
      func_0x0001077dea24(auStack_78,plVar4,(lVar5 - *param_1) / 0x88,param_1 + 2);
      func_0x0001077de55c(auStack_78,lVar1,lVar2);
      func_0x0001077de5c8(param_1,auStack_78,lVar5);
      func_0x0001077ef21c();
      func_0x0001077deaf0();
    }
    else {
      lVar6 = lVar6 - lVar5;
      lVar3 = lVar2 - lVar6 / 0x88;
      if (lVar3 == 0 || lVar2 < lVar6 / 0x88) {
        func_0x0001077ef474();
        func_0x0001077de3fc();
        func_0x0001077efe94();
      }
      else {
        FUN_1077de3d4(param_1,lVar1 + lVar6,param_2[1],lVar3);
        if (lVar6 < 1) {
          return lVar5;
        }
        func_0x0001077ef474();
        func_0x0001077de3fc();
        func_0x0001077efe94();
      }
      func_0x0001077de47c();
    }
  }
  return lVar5;
}



/* Entry: 1077e7fe4; end: 1077e801b;  */

undefined4 FUN_1077e7fe4(undefined4 *param_1,ulong *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_1[0xc] == 0) {
    param_1 = (undefined4 *)*param_2;
  }
  else if (param_1[0xc] != 1) {
    uVar2 = *(undefined4 *)param_2[3];
    puVar1 = param_1;
    func_0x00010727f740(param_1,param_2[1],param_2[2]);
    if (((ulong)puVar1 >> 0x20 & 1) == 0) {
      if (*(char *)(param_1 + 0xb) == '\x01') {
        uVar2 = param_1[10];
      }
    }
    else {
      uVar2 = SUB84(puVar1,0);
    }
    return uVar2;
  }
  return *param_1;
}



/* Entry: 1077e80f8; end: 1077e8137;  */

uint FUN_1077e80f8(byte *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    return (uint)*(byte *)*param_2;
  }
  uVar1 = *(int *)(param_1 + 0x30) == 1;
  if ((bool)uVar1) {
    return (uint)*param_1;
  }
  param_2 = param_2 + 1;
  func_0x0001077f06c8(param_2,param_1);
  uVar2 = (uint)param_2;
  func_0x0001077f00b8();
  func_0x0001077e8168();
  if (((uVar2 >> 8 & 1) == 0) && (func_0x0001077eed54(), (bool)uVar1)) {
    uVar2 = (uint)*(byte *)(unaff_x19 + 0x28);
  }
  return uVar2 & 0xff;
}



/* Entry: 1077e8320; end: 1077e835f;  */

uint FUN_1077e8320(byte *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    return (uint)*(byte *)*param_2;
  }
  uVar1 = *(int *)(param_1 + 0x30) == 1;
  if ((bool)uVar1) {
    return (uint)*param_1;
  }
  param_2 = param_2 + 1;
  func_0x0001077f06c8(param_2,param_1);
  uVar2 = (uint)param_2;
  func_0x0001077f00b8();
  func_0x0001077e8390();
  if (((uVar2 >> 8 & 1) == 0) && (func_0x0001077eed54(), (bool)uVar1)) {
    uVar2 = (uint)*(byte *)(unaff_x19 + 0x28);
  }
  return uVar2 & 0xff;
}



/* Entry: 1077e8550; end: 1077e85a3;  */

void FUN_1077e8550(undefined8 *param_1,long param_2,long *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  if (*(int *)(param_2 + 0x48) == 0) {
    puVar2 = (undefined8 *)*param_3;
    uVar1 = *(undefined4 *)(puVar2 + 2);
    uVar3 = *puVar2;
    param_1[1] = puVar2[1];
    *param_1 = uVar3;
    *(undefined4 *)(param_1 + 2) = uVar1;
    return;
  }
  if (*(int *)(param_2 + 0x48) == 1) {
    uVar3 = *(undefined8 *)(param_2 + 8);
    param_1[1] = *(undefined8 *)(param_2 + 0x10);
    *param_1 = uVar3;
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x18);
    return;
  }
  puVar2 = (undefined8 *)param_3[3];
  uStack_20 = *(undefined4 *)(puVar2 + 2);
  uStack_28 = puVar2[1];
  uStack_30 = *puVar2;
  func_0x0001077e85e0(param_2 + 8,param_3[1],param_3[2],&uStack_30);
  return;
}



/* Entry: 1077e87c8; end: 1077e87ff;  */

void FUN_1077e87c8(void)

{
  func_0x0001077ee210();
  func_0x0001077e87e4();
  return;
}



/* Entry: 1077e89f0; end: 1077e8a27;  */

void FUN_1077e89f0(void)

{
  func_0x0001077ee210();
  func_0x0001077e8a0c();
  return;
}



/* Entry: 1077e8ca0; end: 1077e8cf7;  */

void FUN_1077e8ca0(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x9;
  undefined1 auStack_98 [104];
  
  func_0x0001077ee254();
  func_0x0001077f0980();
  func_0x000107278acc(auStack_98);
  func_0x0001077eec28();
  func_0x0001073df0ac();
  func_0x0001077ef564();
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077eedc4();
  func_0x0001077ef068();
  func_0x0001077ee270();
  func_0x0001077e8d24(extraout_x9);
  return;
}



/* Entry: 1077e8e08; end: 1077e8e3b;  */

uint FUN_1077e8e08(byte *param_1,undefined8 *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    return (uint)*(byte *)*param_2;
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    return (uint)*param_1;
  }
  bVar1 = *(byte *)param_2[3];
  pbVar3 = param_1;
  func_0x0001072804a4(param_1,param_2[1],param_2[2]);
  uVar2 = (uint)pbVar3;
  if (((uVar2 >> 8 & 1) == 0) && (uVar2 = (uint)bVar1, param_1[0x29] == 1)) {
    uVar2 = (uint)param_1[0x28];
  }
  return uVar2 & 1;
}



/* Entry: 1077e8f98; end: 1077e8fd7;  */

/* WARNING: Possible PIC construction at 0x0001077e8ff8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077e8ffc) */
/* WARNING: Removing unreachable block (ram,0x0001077ee9dc) */

undefined8 * FUN_1077e8f98(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auStack_50 [8];
  undefined8 auStack_48 [3];
  
  if ((int)param_2[9] == 0) {
    param_2 = (long *)*param_3;
  }
  else if ((int)param_2[9] != 1) {
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x0001077ef398(param_3 + 1);
    func_0x0001077f0980();
    param_1 = auStack_48;
    unaff_x30 = &UNK_1077e8ffc;
    register0x00000008 = (BADSPACEBASE *)auStack_50;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000107278820(param_1,*param_2,param_2[1],(param_2[1] - *param_2) / 0x120);
  return param_1;
}



/* Entry: 1077e91d0; end: 1077e91f7;  */

void FUN_1077e91d0(void)

{
  func_0x0001077ef34c();
  func_0x0001077f1144();
  func_0x0001077e9270();
  func_0x0001077ee520();
  return;
}



/* Entry: 1077e9338; end: 1077e9393;  */

void FUN_1077e9338(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x20;
    func_0x0001077e608c();
  }
  return;
}



/* Entry: 1077e9670; end: 1077e96bb;  */

void FUN_1077e9670(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x0001077f0fb8();
  if (param_4 != 0) {
    func_0x0001077eead8();
    func_0x0001077e96bc(param_1,param_4);
    func_0x0001077eeecc();
    func_0x0001077e96f0();
  }
  func_0x0001077efac0();
  func_0x0001077e977c();
  return;
}



/* Entry: 1077e987c; end: 1077e9997;  */

undefined1 * FUN_1077e987c(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  param_1[0xac] = 0;
  param_1[0xb0] = 0;
  param_1[0xb4] = 0;
  param_1[0xb8] = 0;
  param_1[0xbc] = 0;
  param_1[0xc0] = 0;
  param_1[0xc4] = 0;
  param_1[200] = 0;
  param_1[0xcc] = 0;
  param_1[0xd0] = 0;
  param_1[0xd4] = 0;
  param_1[0xd8] = 0;
  param_1[0xdc] = 0;
  param_1[0xe0] = 0;
  param_1[0xe4] = 0;
  param_1[0xe8] = 0;
  param_1[0xec] = 0;
  param_1[0xf0] = 0;
  param_1[0xf4] = 0;
  param_1[0xf8] = 0;
  param_1[0xfc] = 0;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  param_1[0xa8] = 0;
  func_0x0001077e9998(param_1 + 0x100);
  func_0x000104c2f64c(param_1 + 0x160);
  func_0x000104c2f64c(param_1 + 0x198);
  *(undefined2 *)(param_1 + 0x1d0) = 0;
  param_1[0x1e4] = 0;
  *(undefined8 *)(param_1 + 0x1dc) = 0;
  *(undefined8 *)(param_1 + 0x1d4) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  func_0x0001072f6da0(param_1 + 0x208);
  *(undefined4 *)(param_1 + 0x218) = 0;
  return param_1;
}



/* Entry: 1077e9c6c; end: 1077e9c9b;  */

void FUN_1077e9c6c(long param_1)

{
  func_0x0001077e6178();
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 1077eaf48; end: 1077eb3f7;  */

void FUN_1077eaf48(long param_1)

{
  undefined1 uStack_11;
  
  func_0x0001077f0064();
  func_0x0001077ebc5c(param_1 + 8,&uStack_11);
  return;
}



/* Entry: 1077eb67c; end: 1077eb69b;  */

void FUN_1077eb67c(long param_1)

{
  func_0x0001077f0070();
  func_0x0001077effa0(param_1 + 0xc48);
  return;
}



/* Entry: 1077ebd5c; end: 1077ebd77;  */

void FUN_1077ebd5c(void)

{
  func_0x0001077ef51c();
  func_0x0001077ebd78();
  return;
}



/* Entry: 1077ebea8; end: 1077ebedb;  */

void FUN_1077ebea8(void)

{
  undefined1 in_ZR;
  
  func_0x0001077ee1ec();
  func_0x0001077ee2d0();
  func_0x0001077ef1a8();
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077ef51c();
  func_0x0001077ebef8();
  return;
}



/* Entry: 1077ebff8; end: 1077ec027;  */

void FUN_1077ebff8(long param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  if ((*(int *)(param_2 + 0x30) != 0) && (uVar1 = *(int *)(param_2 + 0x30) == 1, !(bool)uVar1)) {
    func_0x0001077ee1ec(param_3,param_2);
    func_0x0001077ee2d0();
    func_0x0001077ef1a8();
    func_0x0001077ee28c();
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      func_0x0001077ef51c();
      func_0x0001077ec078();
      return;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 1077ec15c; end: 1077ec177;  */

void FUN_1077ec15c(void)

{
  func_0x0001077ef51c();
  func_0x0001077ec178();
  return;
}



/* Entry: 1077ec2a8; end: 1077ec2db;  */

void FUN_1077ec2a8(void)

{
  undefined1 in_ZR;
  
  func_0x0001077ee1ec();
  func_0x0001077ee2d0();
  func_0x0001077ef1a8();
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077ef51c();
  func_0x0001077ec2f8();
  return;
}



/* Entry: 1077ec3f8; end: 1077ec427;  */

void FUN_1077ec3f8(long param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  if ((*(int *)(param_2 + 0x70) != 0) && (uVar1 = *(int *)(param_2 + 0x70) == 1, !(bool)uVar1)) {
    func_0x0001077ee1ec(param_3,param_2 + 8);
    func_0x0001077ee2d0();
    func_0x0001077ef1a8();
    func_0x0001077ee28c();
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      func_0x0001077ef51c();
      func_0x0001077ec478();
      return;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 1077ec55c; end: 1077ec577;  */

void FUN_1077ec55c(void)

{
  func_0x0001077ef51c();
  func_0x0001077ec578();
  return;
}



/* Entry: 1077ec990; end: 1077ece37;  */

undefined1 *
FUN_1077ec990(undefined1 *param_1,undefined1 *param_2,undefined8 param_3,undefined4 *param_4,
             undefined4 *param_5,undefined8 param_6,undefined4 *param_7,undefined8 *param_8,
             undefined4 *param_9,undefined8 param_10,undefined1 *param_11,undefined1 *param_12,
             undefined1 *param_13,undefined1 *param_14,undefined1 *param_15,undefined1 *param_16,
             undefined8 *param_17,undefined8 *param_18,undefined8 *param_19,undefined8 *param_20,
             undefined1 *param_21,undefined1 *param_22,undefined1 *param_23,undefined1 *param_24,
             undefined8 *param_25,undefined8 *param_26,undefined8 *param_27,undefined8 *param_28,
             undefined8 *param_29,undefined8 *param_30,undefined8 *param_31,undefined8 *param_32,
             undefined8 *param_33,undefined8 *param_34,undefined8 *param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined1 *param_39,undefined1 *param_40,
             undefined8 param_41,undefined1 *param_42,undefined8 param_43,undefined4 *param_44,
             undefined4 *param_45,undefined8 param_46,undefined4 *param_47)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 0x30) = 1;
  func_0x0001077ece38(param_1 + 0x38,param_3);
  *(undefined4 *)(param_1 + 0x80) = *param_4;
  *(undefined4 *)(param_1 + 0xb8) = *param_5;
  *(undefined4 *)(param_1 + 0xb0) = 1;
  *(undefined4 *)(param_1 + 0xe8) = 1;
  func_0x0001077ece3c(param_1 + 0xf0,param_6);
  *(undefined4 *)(param_1 + 0x138) = *param_7;
  *(undefined4 *)(param_1 + 0x168) = 1;
  *(undefined8 *)(param_1 + 0x170) = *param_8;
  *(undefined4 *)(param_1 + 0x1a8) = 1;
  *(undefined4 *)(param_1 + 0x1b0) = *param_9;
  *(undefined4 *)(param_1 + 0x1e0) = 1;
  func_0x0001077ece40(param_1 + 0x1e8,param_10);
  param_1[0x230] = *param_11;
  *(undefined4 *)(param_1 + 0x260) = 1;
  param_1[0x268] = *param_12;
  *(undefined4 *)(param_1 + 0x298) = 1;
  param_1[0x2a0] = *param_13;
  *(undefined4 *)(param_1 + 0x2d0) = 1;
  param_1[0x2d8] = *param_14;
  *(undefined4 *)(param_1 + 0x308) = 1;
  param_1[0x310] = *param_15;
  *(undefined4 *)(param_1 + 0x340) = 1;
  param_1[0x348] = *param_16;
  *(undefined4 *)(param_1 + 0x378) = 1;
  uVar2 = param_17[1];
  uVar1 = *param_17;
  *(undefined4 *)(param_1 + 0x398) = *(undefined4 *)(param_17 + 2);
  *(undefined8 *)(param_1 + 0x390) = uVar2;
  *(undefined8 *)(param_1 + 0x388) = uVar1;
  *(undefined4 *)(param_1 + 0x3c8) = 1;
  uVar2 = param_18[1];
  uVar1 = *param_18;
  *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(param_18 + 2);
  *(undefined8 *)(param_1 + 0x3e0) = uVar2;
  *(undefined8 *)(param_1 + 0x3d8) = uVar1;
  *(undefined4 *)(param_1 + 0x418) = 1;
  uVar2 = param_19[1];
  uVar1 = *param_19;
  *(undefined4 *)(param_1 + 0x438) = *(undefined4 *)(param_19 + 2);
  *(undefined8 *)(param_1 + 0x430) = uVar2;
  *(undefined8 *)(param_1 + 0x428) = uVar1;
  *(undefined4 *)(param_1 + 0x468) = 1;
  uVar2 = param_20[1];
  uVar1 = *param_20;
  *(undefined4 *)(param_1 + 0x488) = *(undefined4 *)(param_20 + 2);
  *(undefined8 *)(param_1 + 0x480) = uVar2;
  *(undefined8 *)(param_1 + 0x478) = uVar1;
  *(undefined4 *)(param_1 + 0x4b8) = 1;
  param_1[0x4c0] = *param_21;
  *(undefined4 *)(param_1 + 0x4f0) = 1;
  param_1[0x4f8] = *param_22;
  *(undefined4 *)(param_1 + 0x528) = 1;
  param_1[0x530] = *param_23;
  *(undefined4 *)(param_1 + 0x560) = 1;
  param_1[0x568] = *param_24;
  *(undefined4 *)(param_1 + 0x598) = 1;
  *(undefined8 *)(param_1 + 0x5a8) = *param_25;
  *(undefined4 *)(param_1 + 0x5e0) = 1;
  *(undefined8 *)(param_1 + 0x5f0) = *param_26;
  *(undefined4 *)(param_1 + 0x628) = 1;
  *(undefined8 *)(param_1 + 0x638) = *param_27;
  *(undefined4 *)(param_1 + 0x670) = 1;
  *(undefined8 *)(param_1 + 0x680) = *param_28;
  *(undefined4 *)(param_1 + 0x6b8) = 1;
  *(undefined8 *)(param_1 + 0x6c8) = *param_29;
  *(undefined4 *)(param_1 + 0x700) = 1;
  *(undefined8 *)(param_1 + 0x710) = *param_30;
  *(undefined4 *)(param_1 + 0x748) = 1;
  *(undefined8 *)(param_1 + 0x758) = *param_31;
  *(undefined4 *)(param_1 + 0x790) = 1;
  *(undefined8 *)(param_1 + 0x7a0) = *param_32;
  *(undefined4 *)(param_1 + 0x7d8) = 1;
  *(undefined8 *)(param_1 + 0x7e8) = *param_33;
  *(undefined4 *)(param_1 + 0x820) = 1;
  *(undefined8 *)(param_1 + 0x830) = *param_34;
  *(undefined4 *)(param_1 + 0x868) = 1;
  *(undefined8 *)(param_1 + 0x878) = *param_35;
  *(undefined4 *)(param_1 + 0x8b0) = 1;
  func_0x0001077ece44(param_1 + 0x8b8,param_36);
  func_0x0001077ece84(param_1 + 0x958,param_37);
  func_0x0001077ecebc(param_1 + 0x9d0,param_38);
  param_1[0xa48] = *param_39;
  *(undefined4 *)(param_1 + 0xa78) = 1;
  param_1[0xa80] = *param_40;
  *(undefined4 *)(param_1 + 0xab0) = 1;
  func_0x0001077ecef4(param_1 + 0xab8,param_41);
  param_1[0xb00] = *param_42;
  *(undefined4 *)(param_1 + 0xb30) = 1;
  func_0x0001077ecef8(param_1 + 0xb38,param_43);
  *(undefined4 *)(param_1 + 0xb88) = *param_44;
  *(undefined4 *)(param_1 + 3000) = 1;
  *(undefined4 *)(param_1 + 0xbc0) = *param_45;
  *(undefined4 *)(param_1 + 0xbf0) = 1;
  func_0x0001077ecf44(param_1 + 0xbf8,param_46);
  *(undefined4 *)(param_1 + 0xc40) = *param_47;
  *(undefined4 *)(param_1 + 0xc70) = 1;
  return param_1;
}



/* Entry: 1077ed094; end: 1077ed09f;  */

void FUN_1077ed094(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001077eed88();
  func_0x0001077efa68();
  if (param_2 != 0) {
    func_0x0001077ed0d4(param_4);
  }
  func_0x0001077efa00(0x58);
  return;
}



/* Entry: 1077ed244; end: 1077ed24b;  */

void FUN_1077ed244(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x0001077ef34c(param_1,*(undefined8 *)(param_1 + 8));
  while (func_0x0001077f0fac(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x58;
    func_0x0001077e5f08();
  }
  return;
}



/* Entry: 1077ed438; end: 1077ed43b;  */

long FUN_1077ed438(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001077ef940(&PTR_FUN_1109de4a8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x1c8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x1b0);
  func_0x0001077ed9d4();
  return param_1;
}



/* Entry: 1077eda80; end: 1077edb23;  */

long * FUN_1077eda80(void)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long *plVar2;
  long lStack_e0;
  long lStack_d8;
  undefined1 auStack_c8 [152];
  
  plVar2 = &lStack_e0;
  func_0x0001077ee374();
  _bzero(auStack_c8,0x90);
  func_0x0001077dde7c(&lStack_e0,auStack_c8,6);
  do {
    func_0x0001077efd08();
    func_0x0001077f05fc();
  } while (!(bool)in_ZR);
  func_0x0001077efcb8();
  while (uVar1 = lStack_e0 == lStack_d8, !(bool)uVar1) {
    func_0x0001077f1618();
    func_0x0001077f0c4c();
  }
  func_0x0001077f0c28();
  func_0x0001077ee28c();
  if ((bool)uVar1) {
    return plVar2;
  }
  ___stack_chk_fail();
  do {
    func_0x0001077f00f4();
    func_0x0001077f0960();
  } while (!(bool)uVar1);
  func_0x0001077ef0b0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
            ((undefined1 *)((long)plVar2 + 0x48));
  func_0x0001077f03e8();
  return (long *)(undefined1 *)plVar2;
}



/* Entry: 1077edf44; end: 1077ee03b;  */

bool FUN_1077edf44(undefined1 param_1)

{
  uint uVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  int extraout_w8;
  ulong extraout_x8;
  ulong uVar5;
  long extraout_x9;
  long lVar6;
  long extraout_x9_00;
  long extraout_x10;
  long lVar7;
  long extraout_x10_00;
  int extraout_w11;
  int iVar8;
  int extraout_w11_00;
  uint extraout_w13;
  undefined4 extraout_w13_00;
  undefined4 extraout_var;
  char unaff_w19;
  undefined1 uStack_3c;
  undefined1 uStack_3b;
  undefined1 uStack_3a;
  char cStack_39;
  undefined1 auStack_38 [24];
  
  uStack_3c = param_1;
  func_0x0001077ef1b8();
  func_0x0001077df888();
  uStack_3b = uStack_3c;
  func_0x0001077f1184();
  uStack_3a = uStack_3b;
  func_0x0001077f118c();
  cStack_39 = unaff_w19 + -0x10;
  func_0x0001077df020();
  func_0x0001077df080(auStack_38,&uStack_3c,4);
  func_0x0001077ee5f4();
  uVar5 = extraout_x8;
  lVar6 = extraout_x9;
  lVar7 = extraout_x10;
  iVar8 = extraout_w11;
  while ((bVar4 = (int)uVar5 == iVar8, bVar2 = lVar6 == lVar7 && bVar4, lVar6 != lVar7 || !bVar4 &&
         (uVar3 = bVar2, func_0x0001077f03b4(), (extraout_w13 & 1) != 0))) {
    func_0x0001077f038c();
    lVar6 = extraout_x9_00 + CONCAT44(extraout_var,extraout_w13_00);
    uVar1 = 0;
    if (!(bool)uVar3) {
      uVar1 = extraout_w8 + 1;
    }
    uVar5 = (ulong)uVar1;
    lVar7 = extraout_x10_00;
    iVar8 = extraout_w11_00;
  }
  func_0x0001077eff98();
  return bVar2;
}



/* Entry: 1077ee1b4; end: 1077ee1eb;  */

void FUN_1077ee1b4(void)

{
  func_0x0001077eeaec();
  func_0x0001075620d4();
  return;
}



/* Entry: 1077f21a0; end: 1077f21cf;  */

long FUN_1077f21a0(long param_1)

{
  func_0x000107266968(param_1 + 0x38);
  func_0x000104c2f714(param_1);
  return param_1;
}



/* Entry: 1077f25d8; end: 1077f262b;  */

/* WARNING: Removing unreachable block (ram,0x0001077f261c) */

uint FUN_1077f25d8(undefined8 param_1)

{
  uint extraout_w8;
  int extraout_w9;
  
  func_0x0001077f35ec();
  do {
    func_0x0001077f35cc();
    func_0x0001077f35a8();
    func_0x0001077f35e0();
  } while ((int)param_1 == 0);
  func_0x0001077f3604();
  return extraout_w8 | extraout_w9 << 8;
}



/* Entry: 1077f28a0; end: 1077f28ef;  */

uint FUN_1077f28a0(undefined8 param_1)

{
  uint extraout_w8;
  uint extraout_w8_00;
  uint uVar1;
  int extraout_w9;
  int extraout_w9_00;
  int iVar2;
  long unaff_x23;
  
  func_0x0001077f35ec();
  func_0x0001077f362c(&UNK_1109dece8);
  do {
    if (unaff_x23 == 0) {
      func_0x0001077f35f8();
      iVar2 = extraout_w9_00;
      uVar1 = extraout_w8_00;
      goto LAB_1077f28e4;
    }
    func_0x0001077f35cc();
    func_0x0001077f35a8();
    func_0x0001077f35e0();
  } while ((int)param_1 == 0);
  func_0x0001077f3604();
  iVar2 = extraout_w9;
  uVar1 = extraout_w8;
LAB_1077f28e4:
  return uVar1 | iVar2 << 8;
}



/* Entry: 1077f2b10; end: 1077f2b5f;  */

uint FUN_1077f2b10(undefined8 param_1)

{
  uint extraout_w8;
  uint extraout_w8_00;
  uint uVar1;
  int extraout_w9;
  int extraout_w9_00;
  int iVar2;
  long unaff_x23;
  
  func_0x0001077f35ec();
  func_0x0001077f3638(&UNK_1109dedc8);
  do {
    if (unaff_x23 == 0) {
      func_0x0001077f35f8();
      iVar2 = extraout_w9_00;
      uVar1 = extraout_w8_00;
      goto LAB_1077f2b54;
    }
    func_0x0001077f35cc();
    func_0x0001077f35a8();
    func_0x0001077f35e0();
  } while ((int)param_1 == 0);
  func_0x0001077f3604();
  iVar2 = extraout_w9;
  uVar1 = extraout_w8;
LAB_1077f2b54:
  return uVar1 | iVar2 << 8;
}



/* Entry: 1077f2dd0; end: 1077f34cb;  */

/* WARNING: Removing unreachable block (ram,0x0001077f2e14) */

uint FUN_1077f2dd0(undefined8 param_1)

{
  uint extraout_w8;
  int extraout_w9;
  
  func_0x0001077f35ec();
  do {
    func_0x0001077f35cc();
    func_0x0001077f35a8();
    func_0x0001077f35e0();
  } while ((int)param_1 == 0);
  func_0x0001077f3604();
  return extraout_w8 | extraout_w9 << 8;
}



/* Entry: 1077f3840; end: 1077f386f;  */

void FUN_1077f3840(undefined8 param_1)

{
  func_0x0001077f3870(0x113822cf8,0);
  uRam0000000113822d00 = param_1;
  return;
}



/* Entry: 1077f39e8; end: 1077f3a17;  */

void FUN_1077f39e8(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3c == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 4);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001077f3a18();
  return;
}



/* Entry: 1077f3c3c; end: 1077f3c4b;  */

void FUN_1077f3c3c(void)

{
  return;
}



/* Entry: 1077f3e18; end: 1077f3e23;  */

undefined ** FUN_1077f3e18(void)

{
  return &PTR_DAT_1109df6f0;
}



/* Entry: 1077f4598; end: 1077f45bf;  */

void FUN_1077f4598(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  param_3 = param_3 - (long)param_2;
  lVar1 = (long)*(undefined8 **)(param_1 + 0x10) + param_3;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (; param_3 != 0; param_3 = param_3 + -8) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1077f4dc0; end: 1077f4df7;  */

void FUN_1077f4dc0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x0001077f4ec0(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x20;
  return;
}



/* Entry: 1077f5080; end: 1077f50b3;  */

void FUN_1077f5080(float *param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  
  pfVar1 = param_1;
  if (param_1 != param_2) {
    while (pfVar2 = pfVar1, param_1 = param_1 + 1, param_1 != param_2) {
      pfVar1 = param_1;
      if (*pfVar2 <= *param_1) {
        pfVar1 = pfVar2;
      }
    }
  }
  return;
}



/* Entry: 1077f5678; end: 1077f572b;  */

undefined8 FUN_1077f5678(float param_1,float param_2,float param_3,float param_4)

{
  float *in_x3;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  
  func_0x0001077f572c();
  fVar6 = *in_x3 - param_1;
  fVar5 = param_3 - *in_x3;
  if (fVar6 <= fVar5) {
    fVar5 = fVar6;
  }
  uVar2 = (uint)fVar5;
  uVar1 = 2;
  if ((int)uVar2 < 1) {
    param_1 = in_x3[2] - param_1;
    param_3 = param_3 - in_x3[2];
    if (param_1 <= param_3) {
      param_3 = param_1;
    }
    uVar2 = (uint)param_3;
    uVar1 = 2;
    if ((int)uVar2 < 1) {
      uVar1 = 0;
    }
    uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  }
  fVar6 = in_x3[1] - param_2;
  fVar5 = param_4 - in_x3[1];
  if (fVar6 <= fVar5) {
    fVar5 = fVar6;
  }
  uVar4 = (uint)fVar5;
  if ((int)uVar4 < 1) {
    param_2 = in_x3[3] - param_2;
    param_4 = param_4 - in_x3[3];
    if (param_2 <= param_4) {
      param_4 = param_2;
    }
    uVar4 = (uint)param_4;
    uVar3 = uVar2;
    if ((int)uVar4 < 1) goto LAB_1077f571c;
  }
  uVar1 = uVar1 | 1;
  uVar3 = uVar4;
  if (uVar2 <= uVar4) {
    uVar3 = uVar2;
  }
LAB_1077f571c:
  return CONCAT44(uVar3,uVar1);
}



/* Entry: 1077f6510; end: 1077f653f;  */

double FUN_1077f6510(float param_1,float *param_2)

{
  return (double)(*param_2 - param_1);
}



/* Entry: 1077f77e4; end: 1077f7857;  */

void FUN_1077f77e4(void)

{
  undefined1 auStack_38 [24];
  
  func_0x00010002b838(auStack_38,&UNK_10f42aca2);
  func_0x0001077f86e8();
  func_0x0001077f8678();
  func_0x00010002b838(auStack_38,&UNK_10f42acac);
  func_0x0001077f86e8();
  func_0x0001077f8678();
  return;
}



/* Entry: 1077f7b14; end: 1077f7bab;  */

void FUN_1077f7b14(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x0001072ab860();
  uVar1 = *(undefined8 *)(param_2 + 0x120);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 0x128);
  *(undefined8 *)(param_1 + 0x120) = uVar1;
  return;
}



/* Entry: 1077f7e48; end: 1077f7ef3;  */

void FUN_1077f7e48(undefined8 param_1,long param_2)

{
  func_0x0001077f8664();
  func_0x0001077f86c4(*(undefined8 *)(param_2 + 8));
  func_0x0001077f858c();
  return;
}



/* Entry: 1077f80fc; end: 1077f8163;  */

long FUN_1077f80fc(long param_1)

{
  func_0x0001077f8120(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 1077f830c; end: 1077f8333;  */

void FUN_1077f830c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_1109df800;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 1077f875c; end: 1077f8a03;  */

undefined8 *
FUN_1077f875c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
             undefined4 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 uVar4;
  ulong uVar5;
  code *pcVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined4 *)(param_1 + 2) = param_5;
  func_0x000104c318bc(param_1 + 3,param_6);
  puVar17 = param_1 + 0xb;
  *puVar17 = 0;
  plVar15 = param_1 + 10;
  *plVar15 = (long)puVar17;
  param_1[0xc] = 0;
  lVar18 = *param_4;
  lVar3 = param_4[1];
  do {
    if (lVar18 == lVar3) {
      return param_1;
    }
    if (*(int *)(lVar18 + 0x658) != -1) {
      puVar10 = (undefined8 *)*puVar17;
      puVar9 = puVar17;
      while (puVar13 = puVar9, puVar10 != (undefined8 *)0x0) {
        while( true ) {
          puVar9 = puVar10;
          lVar14 = lVar18 + 0x5a0;
          func_0x0001074099a8(lVar14,puVar9 + 4);
          if (((uint)lVar14 >> 7 & 1) != 0) break;
          puVar10 = puVar9 + 4;
          func_0x0001074099a8(puVar10,lVar18 + 0x5a0);
          if (((uint)puVar10 >> 7 & 1) == 0) {
            puVar10 = (undefined8 *)*puVar13;
            if (puVar10 == (undefined8 *)0x0) goto LAB_1077f8828;
            goto LAB_1077f8898;
          }
          puVar13 = puVar9 + 1;
          puVar10 = (undefined8 *)*puVar13;
          if ((undefined8 *)*puVar13 == (undefined8 *)0x0) goto LAB_1077f8828;
        }
        puVar10 = (undefined8 *)*puVar9;
      }
LAB_1077f8828:
      puVar10 = (undefined8 *)0x50;
      __Znwm();
      uStack_68 = 0;
      puStack_78 = puVar10;
      puStack_70 = puVar17;
      func_0x000107407a9c(puVar10 + 4,lVar18 + 0x5a0);
      puVar10[8] = 0;
      puVar10[9] = 0;
      puVar10[7] = 0;
      uStack_68 = CONCAT71(uStack_68._1_7_,1);
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[2] = puVar9;
      *puVar13 = puVar10;
      if (*(long *)*plVar15 != 0) {
        *plVar15 = *(long *)*plVar15;
      }
      func_0x00010002c5b0(param_1[0xb],puVar10);
      param_1[0xc] = param_1[0xc] + 1;
      puStack_78 = (undefined8 *)0x0;
      func_0x0001077f9580(&puStack_78);
LAB_1077f8898:
      uVar7 = (ulong)*(byte *)((long)param_1 + 4);
      puVar9 = param_1;
      func_0x0001077f8a04(*(undefined4 *)(lVar18 + 0x10),*(undefined4 *)(lVar18 + 0x14));
      uVar4 = *(undefined4 *)(lVar18 + 0x658);
      puVar2 = (undefined4 *)puVar10[8];
      if (puVar2 < (undefined4 *)puVar10[9]) {
        *puVar2 = uVar4;
        puVar12 = puVar2 + 6;
        *(ulong *)(puVar2 + 2) = uVar7;
        *(undefined8 **)(puVar2 + 4) = puVar9;
      }
      else {
        lVar14 = puVar10[7];
        lVar16 = (long)puVar2 - lVar14;
        uVar1 = lVar16 / 0x18 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar1) {
          func_0x0001077f9510();
LAB_1077f89c8:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1077f89cc);
          (*pcVar6)();
        }
        uVar5 = ((long)puVar10[9] - lVar14) / 0x18;
        uVar11 = uVar5 * 2;
        if (uVar11 < uVar1 || uVar11 - uVar1 == 0) {
          uVar11 = uVar1;
        }
        if (0x555555555555554 < uVar5) {
          uVar11 = 0xaaaaaaaaaaaaaaa;
        }
        if (uVar11 == 0) {
          lVar8 = 0;
        }
        else {
          if (0xaaaaaaaaaaaaaaa < uVar11) {
            func_0x000104bd35f4();
            goto LAB_1077f89c8;
          }
          lVar8 = uVar11 * 0x18;
          __Znwm();
        }
        puVar2 = (undefined4 *)(lVar8 + lVar16);
        *puVar2 = uVar4;
        *(ulong *)(puVar2 + 2) = uVar7;
        *(undefined8 **)(puVar2 + 4) = puVar9;
        puVar12 = puVar2 + 6;
        _memcpy(puVar2 + (lVar16 / -0x18) * 6,lVar14,lVar16);
        puVar10[7] = puVar2 + (lVar16 / -0x18) * 6;
        puVar10[8] = puVar12;
        puVar10[9] = lVar8 + uVar11 * 0x18;
        if (lVar14 != 0) {
          __ZdlPv(lVar14);
        }
      }
      puVar10[8] = puVar12;
    }
    lVar18 = lVar18 + 0x670;
  } while( true );
}



/* Entry: 1077f9164; end: 1077f9183;  */

long FUN_1077f9164(long param_1)

{
  func_0x0001077fa5b4();
  FUN_1077f9af0();
  return param_1 + 0x28;
}



/* Entry: 1077f9524; end: 1077f957f;  */

void FUN_1077f9524(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long *plVar4;
  
  func_0x0001077fa5cc();
  plVar4 = (long *)(param_1 + 8);
  func_0x0001074f50ac();
  *unaff_x20 = *unaff_x19;
  plVar1 = unaff_x19 + 1;
  lVar2 = *plVar1;
  *plVar4 = lVar2;
  lVar3 = unaff_x19[2];
  unaff_x20[2] = lVar3;
  if (lVar3 == 0) {
    *unaff_x20 = plVar4;
  }
  else {
    *(long **)(lVar2 + 0x10) = plVar4;
    *unaff_x19 = plVar1;
    *plVar1 = 0;
    unaff_x19[2] = 0;
  }
  return;
}



/* Entry: 1077f9820; end: 1077f983f;  */

void FUN_1077f9820(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001077f9840(param_1,param_2,param_2,param_3);
  return;
}



/* Entry: 1077f9af0; end: 1077f9b4f;  */

undefined1  [16] FUN_1077f9af0(long *param_1)

{
  bool bVar1;
  long lVar2;
  undefined1 auVar3 [16];
  long alStack_60 [4];
  
  func_0x0001077fa56c();
  func_0x0001077f9b50();
  lVar2 = *param_1;
  bVar1 = lVar2 == 0;
  if (bVar1) {
    func_0x0001077fa588();
    func_0x0001077f9ba0();
    func_0x0001077fa644();
    func_0x0001077f9bc0();
    lVar2 = alStack_60[0];
    alStack_60[0] = 0;
    func_0x0001077f9be8(alStack_60);
  }
  auVar3[8] = bVar1;
  auVar3._0_8_ = lVar2;
  auVar3._9_7_ = 0;
  return auVar3;
}



/* Entry: 1077f9d88; end: 1077f9e03;  */

undefined1  [16] FUN_1077f9d88(long *param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_40;
  long alStack_38 [3];
  
  func_0x0001077f9e04(alStack_38);
  plVar2 = param_1;
  func_0x0001077f9cf8(param_1,&uStack_40,alStack_38[0] + 0x20);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    func_0x0001077f9788(param_1,uStack_40,plVar2,alStack_38[0]);
    lVar3 = alStack_38[0];
    alStack_38[0] = 0;
  }
  func_0x0001077fa600();
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 1077fa074; end: 1077fa08b;  */

void FUN_1077fa074(void)

{
  func_0x0001077fa08c();
  return;
}



/* Entry: 1077fa294; end: 1077fa2b3;  */

void FUN_1077fa294(void)

{
  func_0x0001077fa66c();
  func_0x0001077fa2b4();
  return;
}



/* Entry: 1077fa678; end: 1077fa84f;  */

ulong * FUN_1077fa678(double param_1,ulong *param_2,long param_3,ulong *param_4,int param_5)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  *param_2 = 0;
  param_2[1] = 0;
  func_0x000104c6257c(param_2 + 2);
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_90 = 1;
  uStack_88 = *(undefined8 *)(param_3 + 8);
  uStack_80 = *(undefined8 *)(param_3 + 0x10);
  uVar2 = *param_4;
  func_0x000109754840(uVar2,&uStack_90,0,param_2);
  if ((int)uVar2 == 0) {
    uVar2 = *param_2;
    func_0x000109755708(uVar2,0,(long)(param_1 * (double)param_5 * 64.0),0,0);
    uVar3 = *param_2;
    if ((int)uVar2 == 0) {
      func_0x0001096fc5f0(uVar3,0);
      param_2[1] = uVar3;
      if (uVar3 != 0x1132e0130) {
        return param_2;
      }
      puVar4 = (undefined8 *)*param_2;
      func_0x000109754ce4();
      func_0x0001077fa980();
      func_0x00010002b838(auStack_a8,&UNK_10f42ad04);
      __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                (puVar4,auStack_a8);
      *puVar4 = &PTR_DAT_1109df8e8;
      ___cxa_throw(puVar4,&PTR_DAT_1109df898,&DAT_1077fa854);
    }
    else {
      func_0x000109754ce4();
      func_0x0001077fa980();
      uStack_50 = uVar2 & 0xffffffff;
      uStack_48 = 0;
      func_0x0001003a91d4(&UNK_10f42ace8);
      func_0x0001077fa970();
      func_0x0001077fa988();
      func_0x0001077fa954();
    }
  }
  else {
    func_0x0001077fa980();
    uStack_50 = uVar2 & 0xffffffff;
    uStack_48 = 0;
    func_0x0001003a91d4(&UNK_10f42acc4);
    func_0x0001077fa970();
    func_0x0001077fa988();
    func_0x0001077fa954();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1077fa808);
  (*pcVar1)();
}



/* Entry: 1077faca4; end: 1077fb133;  */

void FUN_1077faca4(double param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,double param_7,double param_8,undefined8 param_9,int param_10)

{
  uint uVar1;
  
  if (param_10 != 0x21) {
    uVar1 = 2;
    if (ABS(-((param_7 - param_1) * (param_4 - param_8)) + (param_8 - param_2) * (param_3 - param_7)
           ) <= 1e-30) {
      uVar1 = 0;
    }
    if (1e-30 < ABS(-((param_7 - param_1) * (param_6 - param_8)) +
                    (param_8 - param_2) * (param_5 - param_7))) {
      uVar1 = uVar1 + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x0001077fade8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dea61a8)[uVar1] * 4 + 0x1077fadec))();
    return;
  }
  return;
}



/* Entry: 1077fb610; end: 1077fb61b;  */

void FUN_1077fb610(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100048240(param_1,*(long *)(param_1 + 8) + -8);
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    func_0x0001003a8c94();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1077fbdd0; end: 1077fbeaf;  */

long FUN_1077fbdd0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  ulong extraout_x8;
  ulong *unaff_x19;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint6 uVar10;
  undefined8 uVar11;
  
  func_0x00010780907c();
  func_0x000107809a08();
  lVar6 = 0;
  uVar1 = unaff_x19[1];
  uVar2 = unaff_x19[2];
  uVar7 = *unaff_x19;
  uVar5 = uVar7 >> 0xc ^ param_1 >> 7;
  bVar3 = (byte)param_1;
  uVar10 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar5 = uVar5 & uVar2;
    uVar11 = *(undefined8 *)(uVar7 + uVar5);
    for (uVar8 = CONCAT17(-((byte)((ulong)uVar11 >> 0x38) == (bVar3 & 0x7f)),
                          CONCAT16(-((byte)((ulong)uVar11 >> 0x30) == (bVar3 & 0x7f)),
                                   CONCAT15(-((char)((ulong)uVar11 >> 0x28) ==
                                             (char)(uVar10 >> 0x28)),
                                            CONCAT14(-((char)((ulong)uVar11 >> 0x20) ==
                                                      (char)(uVar10 >> 0x20)),
                                                     CONCAT13(-((char)((ulong)uVar11 >> 0x18) ==
                                                               (char)(uVar10 >> 0x18)),
                                                              CONCAT12(-((char)((ulong)uVar11 >>
                                                                               0x10) ==
                                                                        (char)(uVar10 >> 0x10)),
                                                                       CONCAT11(-((char)((ulong)
                                                  uVar11 >> 8) == (char)(uVar10 >> 8)),
                                                  -((char)uVar11 == (char)uVar10)))))))) &
                 0x8080808080808080; uVar8 != 0; uVar8 = uVar8 - 1 & uVar8) {
      uVar9 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar5 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) & uVar2;
      iVar4 = (int)uVar1 + (int)uVar9 * 0x50;
      func_0x000107809e1c();
      if (iVar4 != 0) {
        return *unaff_x19 + uVar9;
      }
    }
    func_0x000107809b8c();
    if ((extraout_x8 & 1) != 0) break;
    lVar6 = lVar6 + 8;
    uVar5 = lVar6 + uVar5;
  }
  return 0;
}



/* Entry: 1077fc3a8; end: 1077fc47b;  */

undefined8 FUN_1077fc3a8(long param_1)

{
  ulong uVar1;
  short sVar2;
  short *psVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  short *unaff_x19;
  long unaff_x20;
  ulong uVar7;
  long lVar8;
  
  if ((*(byte *)(param_1 + 0x6a8) & 1) != 0) {
    return 1;
  }
  func_0x00010780a21c();
  func_0x000107808f04();
  func_0x0001077fc368(param_1 + 0x660);
  puVar4 = (undefined8 *)(unaff_x20 + 0x660);
  func_0x0001073982a4();
  uVar7 = 0;
  do {
    if ((ulong)(((long *)*puVar4)[1] - *(long *)*puVar4 >> 6) <= uVar7) {
      return 0;
    }
    if ((uVar7 & 1) != 0) {
      uVar1 = *(ulong *)(unaff_x19 + 4);
      psVar3 = *(short **)unaff_x19;
      if (-1 < (char)*(byte *)((long)unaff_x19 + 0x17)) {
        uVar1 = (ulong)*(byte *)((long)unaff_x19 + 0x17);
        psVar3 = unaff_x19;
      }
      for (lVar8 = uVar1 << 1; lVar8 != 0; lVar8 = lVar8 + -2) {
        sVar2 = *psVar3;
        func_0x000107809f6c();
        plVar5 = (long *)(extraout_x8 + uVar7 * 0x40 + -0x40);
        func_0x0001077fc380();
        func_0x000107809f6c();
        lVar6 = extraout_x8_00 + uVar7 * 0x40;
        func_0x0001077fc380();
        if ((plVar5 != (long *)0x0) && (lVar6 != 0)) {
          if (*plVar5 == 0) {
            return 1;
          }
          if (sVar2 != 0) {
            return 1;
          }
        }
        psVar3 = psVar3 + 1;
      }
    }
    uVar7 = uVar7 + 1;
  } while( true );
}



/* Entry: 1077fdfe0; end: 1077fe007;  */

undefined8 FUN_1077fdfe0(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x0001072af654(param_1 + 0x20);
  func_0x00010725c0a0();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 1077fe270; end: 1077fe3b3;  */

/* WARNING: Possible PIC construction at 0x0001077fe2a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077fe340: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077fe2a8) */
/* WARNING: Removing unreachable block (ram,0x0001077fe344) */
/* WARNING: Removing unreachable block (ram,0x0001077fe354) */
/* WARNING: Removing unreachable block (ram,0x0001077fe384) */
/* WARNING: Removing unreachable block (ram,0x000107808ed0) */

ulong * FUN_1077fe270(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  ulong *puVar5;
  long *unaff_x19;
  ulong *unaff_x20;
  ulong uVar6;
  ulong unaff_x22;
  ulong *puStack_b0;
  undefined1 uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong *puStack_90;
  ulong uStack_68;
  ulong *puStack_60;
  ulong *puStack_58;
  long lStack_50;
  ulong *puStack_48;
  
  func_0x00010780907c();
  puVar5 = param_1 + 2;
  uVar6 = param_1[1];
  if (uVar6 < *puVar5) {
    func_0x00010780918c();
    puVar5 = unaff_x20;
    goto code_r0x0001077fe3b4;
  }
  uVar6 = uVar6 - *unaff_x19;
  uVar4 = (long)uVar6 / 0x18 + 1;
  if (uVar4 < 0xaaaaaaaaaaaaaab) {
    uVar1 = (long)(*puVar5 - *unaff_x19) / 0x18;
    unaff_x22 = uVar1 * 2;
    if (unaff_x22 < uVar4 || unaff_x22 - uVar4 == 0) {
      unaff_x22 = uVar4;
    }
    if (0x555555555555554 < uVar1) {
      unaff_x22 = 0xaaaaaaaaaaaaaaa;
    }
    puStack_48 = puVar5;
    if (unaff_x22 == 0) {
      uVar4 = 0;
    }
    else {
      puVar5 = param_1;
      if (0xaaaaaaaaaaaaaaa < unaff_x22) goto LAB_1077fe394;
      uVar4 = unaff_x22 * 0x18;
      __Znwm();
    }
    param_1 = (ulong *)(uVar4 + uVar6);
    lStack_50 = uVar4 + unaff_x22 * 0x18;
    param_2 = unaff_x20;
    puVar5 = unaff_x20;
    uStack_68 = uVar4;
    puStack_60 = param_1;
    puStack_58 = param_1;
  }
  else {
    func_0x0001077fe494();
    puVar5 = param_1;
LAB_1077fe394:
    func_0x000104bd35f4();
    param_1 = &uStack_68;
    func_0x0001077fe4a0();
    func_0x000107809184();
  }
code_r0x0001077fe3b4:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_a8 = 0;
  lVar2 = param_2[1] - *param_2;
  puStack_b0 = param_1;
  uStack_a0 = unaff_x22;
  uStack_98 = uVar6;
  puStack_90 = puVar5;
  if (lVar2 != 0) {
    uVar6 = lVar2 >> 3;
    if (uVar6 >> 0x3d != 0) {
      func_0x0001077fe1f0();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1077fe440);
      (*pcVar3)();
    }
    func_0x0001077fe1fc();
    *param_1 = uVar6;
    param_1[1] = uVar6;
    param_1[2] = uVar6 + (long)param_2 * 8;
    _memmove();
    param_1[1] = uVar6 + lVar2;
  }
  uStack_a8 = 1;
  func_0x0001077fe450(&puStack_b0);
  return param_1;
}



/* Entry: 1077fe6f4; end: 1077fe773;  */

void FUN_1077fe6f4(ulong *param_1,int param_2,ulong *param_3,ulong *param_4)

{
  ulong *puStack_18;
  
  if (param_2 == 0) {
    param_3[1] = (ulong)param_1;
    if (param_3 != param_4) {
      if (param_3 == (ulong *)param_4[1]) {
        param_4[1] = (ulong)param_1;
      }
      goto LAB_1077fe740;
    }
    *param_4 = *param_4 & 1 | (ulong)param_1;
  }
  else {
    param_3[2] = (ulong)param_1;
    if (param_3 != (ulong *)param_4[2]) goto LAB_1077fe740;
  }
  param_4[2] = (ulong)param_1;
LAB_1077fe740:
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_1 & 1 | (ulong)param_3;
  puStack_18 = param_4;
  func_0x0001077fe7d4(param_1,&puStack_18);
  return;
}



/* Entry: 1077feafc; end: 1077feb2f;  */

long FUN_1077feafc(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x0001077feb30(param_1,param_1);
  }
  return param_1;
}



/* Entry: 1077fecd0; end: 1077fed33;  */

long FUN_1077fecd0(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x0001077fed0c();
    lVar2 = uVar1 + 0x88;
  }
  else {
    lVar2 = param_1;
    func_0x0001077fed34();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x88;
}



/* Entry: 1077fef1c; end: 1077fef8b;  */

long * FUN_1077fef1c(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001077fef68();
  }
  lVar1 = param_4 + param_3 * 0x88;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x88;
  return param_1;
}



/* Entry: 1077ff138; end: 1077ff16b;  */

void FUN_1077ff138(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107808f04();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x88;
    func_0x0001074058d8();
  }
  return;
}



/* Entry: 1077ff3b8; end: 1077ff51f;  */

undefined8 * FUN_1077ff3b8(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puStack_80;
  undefined1 uStack_78;
  undefined8 *puStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_78 = 0;
  puStack_80 = param_1;
  if (param_3 != 0) {
    if (0x1e1e1e1e1e1e1e1 < param_3) {
      func_0x0001077fef10();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1077ff4dc);
      (*pcVar1)();
    }
    puVar2 = param_1;
    lVar3 = param_2;
    func_0x00010780a114();
    func_0x0001077fef68();
    *param_1 = puVar2;
    param_1[1] = puVar2;
    param_1[2] = puVar2 + lVar3 * 0x11;
    ppuStack_68 = &puStack_50;
    ppuStack_60 = &puStack_48;
    uStack_58 = 0;
    lVar3 = param_2 + 0x68;
    puStack_70 = param_1 + 2;
    puStack_50 = puVar2;
    for (lVar4 = param_3 * 0x88; puStack_48 = puVar2, lVar4 != 0; lVar4 = lVar4 + -0x88) {
      func_0x000107407a9c(puVar2,param_2);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      puVar2[4] = *(undefined8 *)(param_2 + 0x20);
      puVar2[3] = uVar5;
      func_0x000107263b58(puVar2 + 5,lVar3 + -0x40);
      func_0x0001077ff520(puVar2 + 0xd,lVar3);
      param_2 = param_2 + 0x88;
      puVar2 = puStack_48 + 0x11;
      lVar3 = lVar3 + 0x88;
    }
    uStack_58 = 1;
    func_0x0001077ff084(&puStack_70);
    param_1[1] = puVar2;
  }
  uStack_78 = 1;
  func_0x0001077ff63c(&puStack_80);
  return param_1;
}



/* Entry: 1077ff688; end: 1077ff6db;  */

long * FUN_1077ff688(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    for (lVar1 = param_1[1]; lVar1 != lVar2; lVar1 = lVar1 + -0x38) {
      func_0x000107807a88(lVar1 + -8);
    }
    param_1[1] = lVar2;
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 1077ffa7c; end: 1077ffa83;  */

void FUN_1077ffa7c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)();
  return;
}



/* Entry: 1077ffbf0; end: 1077ffc1b;  */

long FUN_1077ffbf0(long param_1)

{
  func_0x0001053010fc(param_1 + 0x10);
  __ZNSt9exceptionD2Ev(param_1 + 8);
  return param_1;
}



/* Entry: 1077ffd78; end: 1077ffd8b;  */

void FUN_1077ffd78(int *param_1)

{
  if (-1 < *param_1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 2));
  return;
}



/* Entry: 107801280; end: 1078012fb;  */

void FUN_107801280(ulong *param_1,long param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *unaff_x19;
  long unaff_x21;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  puVar1 = param_3;
  func_0x000107809f40();
  uVar3 = (long)puVar1 - param_2 >> 5;
  if (uVar3 < *param_1) {
    func_0x00010780918c();
    FUN_1078036c0();
  }
  else {
    FUN_1078036c0();
    puVar2 = unaff_x19 + *unaff_x19 * 4 + 1;
    for (puVar1 = (ulong *)(unaff_x21 + *unaff_x19 * 0x20); puVar1 != param_3; puVar1 = puVar1 + 4)
    {
      uVar4 = *puVar1;
      uVar6 = puVar1[3];
      uVar5 = puVar1[2];
      puVar2[1] = puVar1[1];
      *puVar2 = uVar4;
      puVar2[3] = uVar6;
      puVar2[2] = uVar5;
      puVar2 = puVar2 + 4;
    }
  }
  *unaff_x19 = uVar3;
  return;
}



/* Entry: 107801d8c; end: 107801d9f;  */

double FUN_107801d8c(undefined8 *param_1)

{
  return (double)((float)param_1[1] - (float)*param_1) *
         (double)((float)((ulong)param_1[1] >> 0x20) - (float)((ulong)*param_1 >> 0x20));
}


