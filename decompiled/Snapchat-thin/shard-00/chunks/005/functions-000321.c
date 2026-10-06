/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1006b7494; end: 1006b74af;  */

void FUN_1006b7494(void)

{
  return;
}



/* Entry: 1006b74b0; end: 1006b7563;  */

void FUN_1006b74b0(void)

{
  long *unaff_x19;
  long unaff_x20;
  
  func_0x0001006b74a4();
  while (unaff_x20 != unaff_x19[2]) {
    unaff_x19[2] = unaff_x19[2] + -0x428;
    func_0x0001006b74f4();
  }
  if (*unaff_x19 != 0) {
    func_0x000107c60e14();
  }
  return;
}



/* Entry: 1006b7564; end: 1006b7573;  */

void FUN_1006b7564(void)

{
  long unaff_x19;
  
  if (*(char *)(unaff_x19 + 0x30) == '\x01') {
    func_0x000107c60ca0();
  }
  return;
}



/* Entry: 1006b7574; end: 1006b75af;  */

void FUN_1006b7574(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    FUN_1006b75b0();
  }
  else {
    func_0x000107c3491c();
  }
  *puVar1 = &PTR_DAT_110a8d1e8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  return;
}



/* Entry: 1006b75b0; end: 1006b75bf;  */

void FUN_1006b75b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x18);
  return;
}



/* Entry: 1006b75c0; end: 1006b766f;  */

void FUN_1006b75c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    FUN_100694bec();
  }
  else {
    func_0x000107c34924();
  }
  *puVar1 = &PTR_DAT_110a8d0a8;
  puVar1[1] = param_1;
  *(undefined4 *)((long)puVar1 + 0x1c) = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 1006b7670; end: 1006b7693;  */

undefined8 FUN_1006b7670(undefined8 param_1)

{
  FUN_10066b60c();
  return param_1;
}



/* Entry: 1006b7694; end: 1006b76b7;  */

undefined8 FUN_1006b7694(undefined8 param_1)

{
  FUN_10066b60c();
  return param_1;
}



/* Entry: 1006b76b8; end: 1006b7757;  */

undefined8 FUN_1006b76b8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  long extraout_x8;
  long lVar6;
  long extraout_x9;
  
  ppuVar5 = &PTR_PTR_11326af28;
  if (*(undefined ***)(param_1 + 0x20) != (undefined **)0x0) {
    ppuVar5 = *(undefined ***)(param_1 + 0x20);
  }
  if (*(int *)((long)ppuVar5 + 0x24) == 2) {
    ppuVar5 = (undefined **)ppuVar5[3];
  }
  else {
    ppuVar5 = &PTR_PTR_11326aee0;
  }
  lVar6 = (long)*(char *)(((ulong)ppuVar5[4] & 0xfffffffffffffffc) + 0x17);
  if (lVar6 < 0) {
    lVar6 = *(long *)(((ulong)ppuVar5[4] & 0xfffffffffffffffc) + 8);
  }
  bVar2 = false;
  if (lVar6 != 0) {
    lVar6 = (long)*(char *)(((ulong)ppuVar5[3] & 0xfffffffffffffffc) + 0x17);
    if (lVar6 < 0) {
      lVar6 = *(long *)(((ulong)ppuVar5[3] & 0xfffffffffffffffc) + 8);
    }
    bVar2 = lVar6 != 0;
  }
  lVar6 = (long)*(char *)(((ulong)ppuVar5[2] & 0xfffffffffffffffc) + 0x17);
  if (lVar6 < 0) {
    lVar6 = *(long *)(((ulong)ppuVar5[2] & 0xfffffffffffffffc) + 8);
  }
  if (lVar6 == 0) {
    bVar2 = true;
  }
  if (bVar2) {
    FUN_10069b43c(*(undefined8 *)(param_1 + 0x18));
    lVar6 = extraout_x9;
    if (!bVar2) {
      lVar6 = extraout_x8;
    }
    uVar4 = *param_2;
    uVar1 = param_2[1];
    func_0x0001006933dc();
    puVar3 = param_2;
    func_0x0001006933dc();
    func_0x000100693448(uVar4,uVar1,param_2,(long)puVar3 + lVar6);
    return uVar4;
  }
  return 0;
}



/* Entry: 1006b7758; end: 1006b77af;  */

void FUN_1006b7758(undefined1 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_40 [32];
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 == 0) {
    *param_1 = 0;
  }
  else {
    FUN_1006963ec(auStack_40);
    FUN_1006b77b0();
    FUN_100100fec();
  }
  param_1[0x18] = lVar2 != 0;
  return;
}



/* Entry: 1006b77b0; end: 1006b77db;  */

void FUN_1006b77b0(void)

{
  undefined8 *unaff_x19;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  unaff_x19[1] = in_stack_00000008;
  *unaff_x19 = in_stack_00000000;
  unaff_x19[2] = in_stack_00000010;
  return;
}



/* Entry: 1006b77dc; end: 1006b78d7;  */

void FUN_1006b77dc(undefined8 param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_100699898();
  if (*(ulong *)(lVar1 + 0x30) < 0x7fffffffffffffff) {
    FUN_1006b78d8(*(undefined8 *)(param_2 + 0x18));
    func_0x0001006b78ec();
    FUN_1003a91d4(0x11326a6a8);
    FUN_1003a9204();
  }
  else {
    FUN_1006b78d8(*(undefined8 *)(param_2 + 0x18));
    func_0x0001006b78ec();
    (**(code **)(*(long *)*param_3 + 0x10))();
    FUN_1003a91d4(0x11326a6bf);
    FUN_1003a9204();
  }
  func_0x0001006b78f4();
  return;
}



/* Entry: 1006b78d8; end: 1006b78fb;  */

undefined ** FUN_1006b78d8(undefined **param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR_PTR_11326cb58;
  if (param_1 != (undefined **)0x0) {
    ppuVar1 = param_1;
  }
  return ppuVar1;
}



/* Entry: 1006b78fc; end: 1006b791f;  */

void FUN_1006b78fc(void)

{
  FUN_1006b6d1c();
  FUN_1006b7920();
  return;
}



/* Entry: 1006b7920; end: 1006b7937;  */

void FUN_1006b7920(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    return;
  }
  return;
}



/* Entry: 1006b7938; end: 1006b795b;  */

void FUN_1006b7938(void)

{
  FUN_1006b6d1c();
  FUN_1006b795c();
  return;
}



/* Entry: 1006b795c; end: 1006b796f;  */

void FUN_1006b795c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    return;
  }
  return;
}



/* Entry: 1006b7970; end: 1006b7aab;  */

void FUN_1006b7970(undefined1 *param_1,long param_2)

{
  char cVar1;
  undefined **ppuVar2;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  *param_1 = 0;
  param_1[0x30] = 0;
  ppuVar2 = &PTR_PTR_11326af28;
  if (*(undefined ***)(param_2 + 0x20) != (undefined **)0x0) {
    ppuVar2 = *(undefined ***)(param_2 + 0x20);
  }
  if (*(int *)((long)ppuVar2 + 0x24) == 2) {
    ppuVar2 = (undefined **)ppuVar2[3];
  }
  else {
    ppuVar2 = &PTR_PTR_11326aee0;
  }
  cVar1 = *(char *)(((ulong)ppuVar2[4] & 0xfffffffffffffffc) + 0x17);
  if (cVar1 < '\0') {
    if (*(long *)(((ulong)ppuVar2[4] & 0xfffffffffffffffc) + 8) == 0) {
      return;
    }
  }
  else if (cVar1 == '\0') {
    return;
  }
  cVar1 = *(char *)(((ulong)ppuVar2[3] & 0xfffffffffffffffc) + 0x17);
  if (cVar1 < '\0') {
    if (*(long *)(((ulong)ppuVar2[3] & 0xfffffffffffffffc) + 8) == 0) {
      return;
    }
  }
  else if (cVar1 == '\0') {
    return;
  }
  FUN_1006963ec(&uStack_70);
  func_0x000100697868(&uStack_90);
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  uStack_40 = uStack_60;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  uStack_30 = uStack_88;
  uStack_38 = uStack_90;
  uStack_28 = uStack_80;
  func_0x00010069925c();
  if (param_1[0x30] == '\x01') {
    func_0x00010869d008(param_1,&uStack_50);
  }
  else {
    func_0x000104bfaeb4(param_1,&uStack_50);
  }
  func_0x000104be0e14(&uStack_50);
  func_0x000107c33fb8();
  func_0x000107c33ff0();
  return;
}



/* Entry: 1006b7aac; end: 1006b7ab7;  */

long FUN_1006b7aac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined1 param_8,
                  undefined4 param_9)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  FUN_1006b78fc();
  FUN_1006b7938(lVar1 + 0x20,param_3);
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  if (*(char *)(param_4 + 3) == '\x01') {
    uVar3 = param_4[1];
    uVar2 = *param_4;
    *(undefined8 *)(param_1 + 0x50) = param_4[2];
    *(undefined8 *)(param_1 + 0x48) = uVar3;
    *(undefined8 *)(param_1 + 0x40) = uVar2;
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  FUN_1006b7b9c(param_1 + 0x60,param_5);
  *(undefined8 *)(param_1 + 0x98) = param_6;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  uVar2 = *param_7;
  *(undefined8 *)(param_1 + 0xa8) = param_7[1];
  *(undefined8 *)(param_1 + 0xa0) = uVar2;
  *(undefined8 *)(param_1 + 0xb0) = param_7[2];
  *param_7 = 0;
  param_7[1] = 0;
  param_7[2] = 0;
  *(undefined1 *)(param_1 + 0xb8) = param_8;
  *(undefined4 *)(param_1 + 0xbc) = param_9;
  return param_1;
}



/* Entry: 1006b7ab8; end: 1006b7b87;  */

long FUN_1006b7ab8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined1 param_8,
                  undefined4 param_9)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  FUN_1006b78fc();
  FUN_1006b7938(lVar1 + 0x20,param_3);
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  if (*(char *)(param_4 + 3) == '\x01') {
    uVar3 = param_4[1];
    uVar2 = *param_4;
    *(undefined8 *)(param_1 + 0x50) = param_4[2];
    *(undefined8 *)(param_1 + 0x48) = uVar3;
    *(undefined8 *)(param_1 + 0x40) = uVar2;
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  FUN_1006b7b9c(param_1 + 0x60,param_5);
  *(undefined8 *)(param_1 + 0x98) = param_6;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  uVar2 = *param_7;
  *(undefined8 *)(param_1 + 0xa8) = param_7[1];
  *(undefined8 *)(param_1 + 0xa0) = uVar2;
  *(undefined8 *)(param_1 + 0xb0) = param_7[2];
  *param_7 = 0;
  param_7[1] = 0;
  param_7[2] = 0;
  *(undefined1 *)(param_1 + 0xb8) = param_8;
  *(undefined4 *)(param_1 + 0xbc) = param_9;
  return param_1;
}



/* Entry: 1006b7b88; end: 1006b7b9b;  */

void FUN_1006b7b88(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    func_0x000104bfaed0();
    *(undefined1 *)(param_1 + 0x30) = 1;
    return;
  }
  return;
}



/* Entry: 1006b7b9c; end: 1006b7bc7;  */

undefined1 * FUN_1006b7b9c(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x30] = 0;
  FUN_1006b7b88();
  return param_1;
}



/* Entry: 1006b7bc8; end: 1006b7c07;  */

void FUN_1006b7bc8(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x000104be0e14();
  }
  return;
}



/* Entry: 1006b7c08; end: 1006b7c9b;  */

long FUN_1006b7c08(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  FUN_1006b78fc();
  FUN_1006b7938(lVar1 + 0x20,param_2 + 0x20);
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  if (*(char *)(param_2 + 0x58) == '\x01') {
    uVar3 = *(undefined8 *)(param_2 + 0x48);
    uVar2 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x48) = uVar3;
    *(undefined8 *)(param_1 + 0x40) = uVar2;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  FUN_1006b7b9c(param_1 + 0x60,param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  FUN_1006b73f0();
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(undefined8 *)(param_2 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  return param_1;
}



/* Entry: 1006b7c9c; end: 1006b7cb7;  */

void FUN_1006b7c9c(long param_1)

{
  FUN_1006b7c08();
  *(undefined1 *)(param_1 + 0xc0) = 1;
  return;
}



/* Entry: 1006b7cb8; end: 1006b7cf3;  */

void FUN_1006b7cb8(long param_1)

{
  FUN_100100fec(param_1 + 0xa0);
  FUN_1006b7bc8(param_1 + 0x60);
  FUN_1006b7cf4();
  func_0x0001006b7be8(param_1 + 0x20);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_100100fec();
  }
  return;
}



/* Entry: 1006b7cf4; end: 1006b7d23;  */

void FUN_1006b7cf4(void)

{
  long unaff_x19;
  
  if (*(char *)(unaff_x19 + 0x58) == '\x01') {
    func_0x000107c60ca0();
  }
  return;
}



/* Entry: 1006b7d24; end: 1006b7d47;  */

undefined8 FUN_1006b7d24(undefined8 param_1)

{
  func_0x0001006b7cfc();
  return param_1;
}



/* Entry: 1006b7d48; end: 1006b7dc3;  */

void FUN_1006b7d48(void)

{
  undefined1 in_ZR;
  long unaff_x21;
  
  func_0x000100693a84();
  if ((bool)in_ZR) {
    FUN_1005ecc68();
    func_0x0001005ecc7c();
    if (!(bool)in_ZR) {
      func_0x000100458ae4();
      func_0x000107c34184();
      func_0x000107c341bc();
      func_0x000107c34228();
      FUN_10054f908();
      func_0x000107c34160();
      func_0x000107c34284();
      func_0x000107c34390();
      func_0x00010054f944();
      func_0x000107c34384();
    }
  }
  FUN_1006b7f80(*(long *)(unaff_x21 + 0x20) + 0xff8);
  return;
}



/* Entry: 1006b7dc4; end: 1006b7f7f;  */

uint FUN_1006b7dc4(long param_1,long *param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  ulong uVar3;
  uint uVar4;
  undefined1 auStack_3b8 [24];
  undefined1 auStack_3a0 [96];
  byte bStack_340;
  undefined **ppuStack_338;
  undefined **ppuStack_328;
  long lStack_320;
  undefined1 auStack_1e0 [424];
  byte bStack_38;
  
  FUN_1006b7d48(auStack_3a0,param_1,param_3,1);
  FUN_1006b90c8(auStack_1e0,auStack_3a0);
  FUN_1006928f0(auStack_3a0);
  if ((bStack_38 & 1) == 0) {
    uVar4 = 0;
    goto LAB_1006b7f1c;
  }
  func_0x0001086a125c(auStack_3a0,param_1,auStack_1e0);
  ppuVar1 = &PTR_PTR_11326cb58;
  if (ppuStack_338 != (undefined **)0x0) {
    ppuVar1 = ppuStack_338;
  }
  FUN_100696384(auStack_3b8,ppuVar1);
  puVar2 = auStack_3b8;
  FUN_1006760a8(puVar2,param_1 + 0x40);
  if ((int)puVar2 == 0) {
    (**(code **)(*param_2 + 0x20))(param_2,param_3);
    if (((ulong)param_2 & 1) != 0) goto LAB_1006b7edc;
    if (((bStack_340 >> 3 & 1) == 0) || ((*(byte *)(lStack_320 + 0x10) >> 2 & 1) == 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(byte *)(*(long *)(lStack_320 + 0x118) + 0x20) ^ 1;
    }
  }
  else {
    ppuVar1 = &PTR_PTR_113280c30;
    if (ppuStack_328 != (undefined **)0x0) {
      ppuVar1 = ppuStack_328;
    }
    uVar3 = (ulong)*(uint *)(ppuVar1 + 0x15);
    func_0x000100693194();
    uVar4 = 0;
    if ((1 << (ulong)((uint)uVar3 & 0x1f) & 0xf1b7c17fU) != 0) {
      func_0x000107c328bc();
      if ((uVar3 & 1) == 0) {
        func_0x000107c328bc();
        uVar4 = (uint)uVar3;
        if ((uVar3 & 1) == 0) {
          func_0x000107c328bc();
          goto LAB_1006b7f0c;
        }
      }
LAB_1006b7edc:
      uVar4 = 1;
    }
  }
LAB_1006b7f0c:
  FUN_100100fec(auStack_3b8);
  FUN_10068e154(auStack_3a0);
LAB_1006b7f1c:
  FUN_1006928bc(auStack_1e0);
  return uVar4 & 1;
}



/* Entry: 1006b7f80; end: 1006b7f8f;  */

void FUN_1006b7f80(void)

{
  func_0x000100693b34();
  FUN_1006b7fbc();
  FUN_100693c18();
  func_0x0001005edc5c();
  FUN_100693c80();
  FUN_100678c58();
  return;
}



/* Entry: 1006b7f90; end: 1006b7fbb;  */

void FUN_1006b7f90(void)

{
  func_0x000100693b34();
  FUN_1006b7fbc();
  FUN_100693c18();
  func_0x0001005edc5c();
  FUN_100693c80();
  FUN_100678c58();
  return;
}



/* Entry: 1006b7fbc; end: 1006b8067;  */

undefined1 * FUN_1006b7fbc(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 in_ZR;
  long lVar1;
  long extraout_x10;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_c8 [152];
  
  func_0x0001005ec5b4();
  FUN_1005ec6a8();
  do {
    func_0x0001005ec6b4();
    if ((bool)in_ZR) {
      func_0x0001005ec6c0();
      func_0x0001005ec6c8();
      if (param_4 < 0) {
        lVar1 = *(long *)(unaff_x19 + 0x48);
      }
      else {
        lVar1 = unaff_x19 + 0x48;
      }
      param_1 = auStack_c8;
      FUN_100678250(param_1,param_2,lVar1);
      func_0x0001005ec6f4();
      func_0x0001005ec700();
      func_0x0001005ec708();
      func_0x0001005ec710();
      func_0x0001005ec720();
      goto LAB_1006b8034;
    }
    func_0x0001005ed218();
  } while (extraout_x10 != 0);
  func_0x0001005ed224();
  if (!(bool)in_ZR) {
    FUN_1005f6f68();
  }
LAB_1006b8034:
  func_0x0001005ec750();
  func_0x0001005ec760();
  if ((bool)in_ZR) {
    return (undefined1 *)(unaff_x20 + 0x10);
  }
  func_0x000107c60e78();
  func_0x00010061eec8();
  func_0x000107c34360();
  func_0x0001005edc5c();
  FUN_100693c80();
  FUN_100678c58();
  return param_1;
}



/* Entry: 1006b8068; end: 1006b80bb;  */

void FUN_1006b8068(void)

{
  func_0x0001005edc5c();
  FUN_100693c80();
  FUN_100678c58();
  return;
}



/* Entry: 1006b80bc; end: 1006b8bfb; -[SCViewfinderEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006b80bc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined8 uVar24;
  char *pcVar25;
  long lVar26;
  undefined *puStack_1e8;
  undefined1 auStack_1b0 [8];
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined1 auStack_178 [8];
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined1 auStack_150 [8];
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  func_0x000107c61144(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  puStack_98 = &UNK_1062192e8;
  puStack_90 = &UNK_1109171a8;
  func_0x000107c6111c(auStack_88,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  lVar2 = param_1;
  FUN_1006b8bfc(param_1);
  func_0x000107c61180();
  lVar26 = lVar2;
  func_0x000107c4168c();
  func_0x000107c61180();
  func_0x000107c5df68();
  func_0x000107c61170(lVar26);
  func_0x000107c61170(lVar2);
  puVar3 = PTR_PTR_1126ae720;
  puStack_d0 = puVar6;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x1006b906c;
  puStack_b8 = &UNK_1109171d8;
  func_0x000107c6111c(auStack_b0,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  lVar26 = (long)_DAT_1127438e0;
  lVar2 = param_1 + lVar26;
  func_0x000107c61148();
  lVar4 = lVar2;
  func_0x000107c4129c();
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c40534();
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126b3770;
  func_0x000107c4d8b8(PTR_PTR_1126b3770);
  func_0x000107c61180();
  lVar7 = lVar5;
  func_0x000107c49d0c();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar2);
  if ((int)lVar7 == 0) {
    lVar2 = param_1 + lVar26;
    func_0x000107c61148();
    lVar4 = lVar2;
    func_0x000107c4129c();
    func_0x000107c61180();
    lVar5 = lVar4;
    func_0x000107c40534();
    func_0x000107c61180();
    puVar6 = PTR_PTR_1126b3770;
    func_0x000107c4ad00(PTR_PTR_1126b3770);
    func_0x000107c61180();
    lVar7 = lVar5;
    func_0x000107c49d0c();
    if ((int)lVar7 == 0) {
      uVar8 = param_1 + lVar26;
      func_0x000107c61148();
      uVar9 = uVar8;
      func_0x000107c4129c();
      func_0x000107c61180();
      uVar10 = uVar9;
      func_0x000107c40534();
      func_0x000107c61180();
      puVar11 = PTR_PTR_1126b3770;
      func_0x000107c5caac();
      func_0x000107c61180();
      uVar12 = uVar10;
      func_0x000107c49d0c();
      if ((uVar12 & 1) == 0) {
        lVar7 = param_1 + lVar26;
        func_0x000107c61148();
        lVar13 = lVar7;
        func_0x000107c4129c();
        func_0x000107c61180();
        lVar14 = lVar13;
        func_0x000107c40534();
        func_0x000107c61180();
        puVar15 = PTR_PTR_1126b3770;
        func_0x000107c4d394(PTR_PTR_1126b3770);
        func_0x000107c61180();
        lVar16 = lVar14;
        func_0x000107c49d0c();
        pcVar25 = (char *)(param_1 + _DAT_1127438e4);
        *pcVar25 = (char)lVar16;
        func_0x000107c61170(puVar15);
        func_0x000107c61170(lVar14);
        func_0x000107c61170(lVar13);
        func_0x000107c61170(lVar7);
      }
      else {
        pcVar25 = (char *)(param_1 + _DAT_1127438e4);
        *pcVar25 = '\x01';
      }
      func_0x000107c61170(puVar11);
      func_0x000107c61170(uVar10);
      func_0x000107c61170(uVar9);
      func_0x000107c61170(uVar8);
    }
    else {
      pcVar25 = (char *)(param_1 + _DAT_1127438e4);
      *pcVar25 = '\x01';
    }
    func_0x000107c61170(puVar6);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar2);
    lVar2 = param_1 + lVar26;
    func_0x000107c61148();
    lVar4 = lVar2;
    func_0x000107c50128();
    *(bool *)(param_1 + _DAT_1127438e8) = lVar4 == 3;
    func_0x000107c61170(lVar2);
    lVar26 = param_1 + lVar26;
    func_0x000107c61148();
    lVar2 = lVar26;
    func_0x000107c50128();
    *(bool *)(param_1 + _DAT_1127438ec) = lVar2 == 1;
    func_0x000107c61170(lVar26);
    if (*pcVar25 == '\x01') {
      puVar6 = (undefined *)(param_1 + _DAT_1127438f0);
      func_0x000107c61148();
      puVar15 = puVar6;
      func_0x000107c500a0();
      func_0x000107c61180();
      puVar11 = PTR___NSConcreteStackBlock_11034bd00;
      puVar17 = puVar15;
      func_0x000107c5c734();
      func_0x000107c61180();
      puStack_1e8 = puVar17;
      func_0x000107c4e600();
      func_0x000107c61180();
    }
    else {
      puVar6 = (undefined *)(param_1 + _DAT_1127438f4);
      func_0x000107c61148();
      puVar15 = puVar6;
      func_0x000107c4b2ec();
      func_0x000107c61180();
      puVar11 = PTR___NSConcreteStackBlock_11034bd00;
      puVar17 = puVar15;
      func_0x000107c5c734();
      func_0x000107c61180();
      puStack_1e8 = puVar17;
      func_0x000107c4b358();
      func_0x000107c61180();
    }
    func_0x000107c61170(puVar17);
    func_0x000107c61170(puVar15);
    func_0x000107c61170(puVar6);
    puVar6 = PTR_PTR_1126ae720;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = FUN_1006ba050;
    puStack_e0 = &UNK_110917368;
    puStack_f8 = puVar11;
    func_0x000107c6111c(auStack_d8,auStack_80);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    puVar15 = PTR_PTR_1126ae720;
    uStack_118 = 0xc2000000;
    puStack_110 = &UNK_1062193d0;
    puStack_108 = &UNK_110858d90;
    puStack_120 = puVar11;
    func_0x000107c6111c(auStack_100,auStack_80);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    puVar17 = PTR_PTR_1126ae720;
    uStack_140 = 0xc2000000;
    puStack_138 = &UNK_106219410;
    puStack_130 = &UNK_110917398;
    puStack_148 = puVar11;
    func_0x000107c6111c(auStack_128,auStack_80);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    puVar18 = PTR_PTR_1126ae720;
    uStack_168 = 0xc2000000;
    pcStack_160 = FUN_1006b8fa8;
    puStack_158 = &UNK_1109173c8;
    puStack_170 = puVar11;
    func_0x000107c6111c(auStack_150,auStack_80);
    func_0x000107c3e4fc(puVar18);
    func_0x000107c61180();
    puVar19 = PTR_PTR_1126ae720;
    uStack_1a0 = 0xc2000000;
    uStack_198 = 0x1006b918c;
    puStack_190 = &UNK_1109173f8;
    puStack_1a8 = puVar11;
    func_0x000107c6111c(auStack_178,auStack_80);
    puStack_188 = puVar17;
    func_0x000107c61174(puStack_1e8);
    puStack_180 = puStack_1e8;
    func_0x000107c3e4fc(puVar19);
    func_0x000107c61180();
    puVar11 = PTR_PTR_1126ae720;
    func_0x000107c6111c(auStack_1b0,auStack_80);
    func_0x000107c3e4fc(puVar11);
    func_0x000107c61180();
    puVar20 = PTR_PTR_1126c8f70;
    func_0x000107c610f4(PTR_PTR_1126c8f70);
    func_0x000107c463d4();
    puVar21 = PTR_PTR_1126c8fa0;
    func_0x000107c610f4(PTR_PTR_1126c8fa0);
    func_0x000107c48300();
    puVar22 = PTR_PTR_1126c8f90;
    func_0x000107c610f4(PTR_PTR_1126c8f90);
    func_0x000107c48110();
    lVar2 = param_1;
    func_0x000107c3b304();
    func_0x000107c61180();
    uVar24 = *(undefined8 *)(param_1 + _DAT_1127438f8);
    *(long *)(param_1 + _DAT_1127438f8) = lVar2;
    func_0x000107c61170(uVar24);
    puVar23 = puVar6;
    func_0x000107c5c734(puVar6);
    func_0x000107c61180();
    func_0x000107c53fcc();
    func_0x000107c61170(puVar23);
    puVar23 = puVar19;
    func_0x000107c5c734(puVar19);
    func_0x000107c61180();
    func_0x000107c53fcc();
    func_0x000107c61170(puVar23);
    uVar24 = *(undefined8 *)(param_1 + _DAT_11274390c);
    func_0x000107c61174(uVar24);
    func_0x000107c42c20(uVar24);
    func_0x000107c61170(uVar24);
    uVar24 = *(undefined8 *)(param_1 + _DAT_112743910);
    func_0x000107c61174(uVar24);
    func_0x000107c42c20(uVar24);
    func_0x000107c61170(uVar24);
    uVar24 = *(undefined8 *)(param_1 + _DAT_112743914);
    func_0x000107c61174(uVar24);
    func_0x000107c42c20(uVar24);
    func_0x000107c61170(uVar24);
    func_0x000107c61170(puVar22);
    func_0x000107c61170(puVar21);
    func_0x000107c61170(puVar20);
    func_0x000107c61170(puVar11);
    func_0x000107c61120(auStack_1b0);
    func_0x000107c61170(puVar19);
    func_0x000107c61170(puStack_180);
    func_0x000107c61120(auStack_178);
    func_0x000107c61170(puVar18);
    func_0x000107c61120(auStack_150);
    func_0x000107c61170(puVar17);
    func_0x000107c61120(auStack_128);
    func_0x000107c61170(puVar15);
    func_0x000107c61120(auStack_100);
    func_0x000107c61170(puVar6);
    func_0x000107c61120(auStack_d8);
  }
  else {
    puStack_1e8 = PTR_PTR_1126ae720;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    puVar6 = PTR_PTR_1126c8f70;
    func_0x000107c610f4(PTR_PTR_1126c8f70);
    func_0x000107c463d4();
    if (param_1 == 0) {
      uVar24 = 0;
    }
    else {
      uVar24 = *(undefined8 *)(param_1 + _DAT_11274390c);
    }
    func_0x000107c61174(uVar24);
    func_0x000107c42c20(uVar24);
    func_0x000107c61170(uVar24);
    puVar11 = PTR_PTR_1126ae720;
    func_0x000107c3e4fc(PTR_PTR_1126ae720);
    func_0x000107c61180();
    puVar15 = PTR_PTR_1126ae720;
    func_0x000107c3e4fc(PTR_PTR_1126ae720);
    func_0x000107c61180();
    puVar17 = PTR_PTR_1126ae720;
    func_0x000107c3e4fc(PTR_PTR_1126ae720);
    func_0x000107c61180();
    puVar18 = PTR_PTR_1126c8f90;
    func_0x000107c610f4(PTR_PTR_1126c8f90);
    func_0x000107c48110();
    if (param_1 == 0) {
      uVar24 = 0;
    }
    else {
      uVar24 = *(undefined8 *)(param_1 + _DAT_112743910);
    }
    func_0x000107c61174(uVar24);
    func_0x000107c42c20(uVar24);
    func_0x000107c61170(uVar24);
    puVar19 = PTR_PTR_1126ae720;
    func_0x000107c3e4fc(PTR_PTR_1126ae720);
    func_0x000107c61180();
    puVar20 = PTR_PTR_1126c8fa0;
    func_0x000107c610f4(PTR_PTR_1126c8fa0);
    puVar21 = PTR_PTR_1126ae720;
    func_0x000107c3e4fc(PTR_PTR_1126ae720);
    func_0x000107c61180();
    func_0x000107c48300(puVar20);
    func_0x000107c61170(puVar21);
    uVar24 = 0;
    if (param_1 != 0) {
      uVar24 = *(undefined8 *)(param_1 + _DAT_112743914);
    }
    func_0x000107c61174(uVar24);
    func_0x000107c42c20(uVar24);
    func_0x000107c61170(uVar24);
    func_0x000107c61170(puVar20);
    func_0x000107c61170(puVar19);
    func_0x000107c61170(puVar18);
    func_0x000107c61170(puVar17);
    func_0x000107c61170(puVar15);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puVar6);
  }
  func_0x000107c61170(puStack_1e8);
  func_0x000107c61170(puVar3);
  func_0x000107c61120(auStack_b0);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_80);
  return;
}



/* Entry: 1006b8bfc; end: 1006b8c1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006b8bfc(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_1127438e0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006b8c20; end: 1006b8c2b; -[_TtC17SCViewfinderScope17SCViewfinderScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006b8c20(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113074eb0;
  func_0x000107c61428(param_1 + _DAT_113074eb0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006b8c2c; end: 1006b8c6f;  */

void FUN_1006b8c2c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1006b8c70; end: 1006b8c8f; -[_TtC17SCViewfinderScope17SCViewfinderScope dataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006b8c70(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_113074ea0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006b8c90; end: 1006b8c97; -[SCCameraLegacyDataSource context] */

undefined8 FUN_1006b8c90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1006b8c98; end: 1006b8ccb; +[SCViewfinderDataSourceContext legacyCamera] */

void FUN_1006b8c98(void)

{
  func_0x000107c5fadc(0x435f59434147454c,0xed00004152454d41);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006b8ccc; end: 1006b8cdb; -[_TtC17SCViewfinderScope17SCViewfinderScope renderingModuleType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1006b8ccc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113074e98);
}



/* Entry: 1006b8cdc; end: 1006b8ceb; -[_TtC26SCCameraViewfinderServices26SCCameraViewfinderServices renderAgent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006b8cdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113076470));
  return;
}



/* Entry: 1006b8cec; end: 1006b8cf3; -[SCCameraViewfinderRenderAgentImpl performer] */

undefined8 FUN_1006b8cec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1006b8cf4; end: 1006b8d4b; -[_TtC30SCViewfinderDataSourceServices30SCViewfinderDataSourceServices initWithDataSourceCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006b8cf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112f66f20) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1006b8d4c; end: 1006b8ddb; -[_TtC22SCViewfinderUIServices22SCViewfinderUIServices initWithRenderTarget:uiHandler:touchController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006b8d4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_113076600) = param_3;
  *(undefined8 *)(param_1 + _DAT_113076608) = param_4;
  *(undefined8 *)(param_1 + _DAT_113076610) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 1006b8ddc; end: 1006b8e8b; -[_TtC32SCViewfinderDataPipelineServices32SCViewfinderDataPipelineServices initWithProcessingPipeline:audioProcessingPipeline:renderingPipeline:observationPipeline:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006b8ddc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_11302a380) = param_3;
  *(undefined8 *)(param_1 + _DAT_11302a388) = param_4;
  *(undefined8 *)(param_1 + _DAT_11302a390) = param_5;
  *(undefined8 *)(param_1 + _DAT_11302a398) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61154(&lStack_50,puVar1);
  return;
}



/* Entry: 1006b8e8c; end: 1006b8fa7; -[SCViewfinderEntryPoint _createPipelineCoordinatorWithProcessingPipeline:audioProcessingPipeline:renderingPipeline:observationPipeline:] */

void FUN_1006b8e8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126c8fd8;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  uVar2 = param_3;
  func_0x000107c5c734(param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  uVar3 = param_4;
  func_0x000107c5c734(param_4);
  func_0x000107c61180();
  func_0x000107c61170(param_4);
  uVar4 = param_5;
  func_0x000107c5c734(param_5);
  func_0x000107c61180();
  func_0x000107c61170(param_5);
  uVar5 = param_6;
  func_0x000107c5c734(param_6);
  func_0x000107c61180();
  func_0x000107c61170(param_6);
  func_0x000107c48110(puVar1,param_2,uVar2,uVar3,uVar4,uVar5);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1006b8fa8; end: 1006b8fe7;  */

void FUN_1006b8fa8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3b30c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1006b8fe8; end: 1006b9003; -[SCViewfinderEntryPoint _createProcessingPipeline] */

void FUN_1006b8fe8(void)

{
  func_0x000107c610fc(PTR_PTR_1126c8fb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006b9004; end: 1006b90ab; -[SCViewfinderPipelineBase init] */

undefined1 * FUN_1006b9004(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f0838;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = 0;
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1006b90ac; end: 1006b90c7; -[SCViewfinderEntryPoint _createAudioProcessingPipeline] */

void FUN_1006b90ac(void)

{
  func_0x000107c610fc(PTR_PTR_1126c8fc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006b90c8; end: 1006b915b;  */

void FUN_1006b90c8(undefined1 *param_1)

{
  long *plVar1;
  undefined1 auStack_3a0 [440];
  long lStack_1e8;
  undefined1 auStack_1e0 [424];
  char cStack_38;
  
  func_0x00010068e2b8(&lStack_1e8);
  func_0x000107c60ee4(auStack_3a0,0x1b8);
  if (cStack_38 == '\x01') {
    FUN_1006b915c();
    if (lStack_1e8 != 0) {
      plVar1 = &lStack_1e8;
      FUN_10068e438(plVar1);
      func_0x000108664bf8(param_1,plVar1);
      goto LAB_1006b9138;
    }
  }
  else {
    FUN_1006b915c();
  }
  *param_1 = 0;
  param_1[0x1a8] = 0;
LAB_1006b9138:
  FUN_1006928bc(auStack_1e0);
  return;
}



/* Entry: 1006b915c; end: 1006b916f;  */

void FUN_1006b915c(void)

{
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + 0x1b0) == '\x01') {
    FUN_10068e154();
  }
  return;
}



/* Entry: 1006b9170; end: 1006b91d3;  */

void FUN_1006b9170(void)

{
  FUN_1005ecb38();
  FUN_1005ecb64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 1006b91d4; end: 1006b91ef;  */

void FUN_1006b91d4(long param_1)

{
  FUN_1006b7c08();
  *(undefined1 *)(param_1 + 0xc0) = 1;
  return;
}



/* Entry: 1006b91f0; end: 1006b9203;  */

undefined4 FUN_1006b91f0(ulong param_1)

{
  return *(undefined4 *)(&UNK_10df61c00 + (param_1 & 0xf) * 4);
}



/* Entry: 1006b9204; end: 1006b93eb; -[SCViewfinderEntryPoint _createRenderingPipelineWithUIHandler:performer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006b9204(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar7 = (long)_DAT_1127438e0;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  lVar7 = param_1 + lVar7;
  func_0x000107c61148(lVar7);
  lVar1 = lVar7;
  func_0x000107c519d8();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c3feb8();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c413c0(0x3fd3333333333333);
  func_0x000107c61180();
  func_0x000107c61170(param_4);
  lVar4 = lVar3;
  func_0x000107c421ac(lVar3);
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar7);
  puVar5 = PTR_PTR_1126c8fc8;
  func_0x000107c610f4();
  func_0x000107c48fac();
  func_0x000107c61170(param_3);
  if (((*(byte *)(param_1 + _DAT_1127438e8) & 1) != 0) ||
     ((*(char *)(param_1 + _DAT_1127438ec) == '\x01' &&
      ((*(byte *)(param_1 + _DAT_1127438e4) & 1) == 0)))) {
    func_0x000107c61144(auStack_58,param_1);
    uVar6 = 0;
    func_0x000107c60f2c(0,0);
    func_0x000107c61180();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    puStack_78 = &UNK_106219548;
    puStack_70 = &UNK_110841fb0;
    func_0x000107c6111c(auStack_60,auStack_58);
    func_0x000107c61174(puVar5);
    puStack_68 = puVar5;
    FUN_10007380c(uVar6,&puStack_88);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(puStack_68);
    func_0x000107c61120(auStack_60);
    func_0x000107c61120(auStack_58);
  }
  func_0x000107c61170(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1006b93ec; end: 1006b93fb; -[_TtC17SCViewfinderScope17SCViewfinderScope screenLifecycleEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006b93ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113074ea8));
  return;
}



/* Entry: 1006b93fc; end: 1006b9457; -[SCObservable compactMap:] */

void FUN_1006b93fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e2e70;
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c47d80();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1006b9458; end: 1006b94e7; -[SCCompactMappedObservable initWithParentObservable:mapper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1006b9458(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_11270e448;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_initWithParentObservable__1125ea888,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112796658);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112796658) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1006b94e8; end: 1006b9553; -[SCObservable debounceWithTimeInterval:performer:] */

void FUN_1006b94e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e2e80;
  func_0x000107c61174(param_4);
  func_0x000107c610f4(puVar1);
  func_0x000107c47d94(param_1);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1006b9554; end: 1006b95f7; -[SCDebounceObservable initWithParentObservable:timeout:performer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1006b9554(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_5);
  puStack_48 = PTR_PTR_11270e458;
  uStack_50 = param_2;
  func_0x000107c61154(&uStack_50,PTR_s_initWithParentObservable__1125ea888,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112796668) = param_1;
    lVar3 = (long)_DAT_11279666c;
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 1006b95f8; end: 1006b9743; -[SCViewfinderRenderingPipelineImpl initWithUIHandler:rendererVisibilityObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1006b95f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_48 = PTR_PTR_1126f0848;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112743940;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    func_0x000107c61170(uVar2);
    *(undefined4 *)((long)puVar1 + (long)_DAT_112743944) = 0;
    func_0x000107c61144(auStack_58,puVar1);
    func_0x000107c6111c(auStack_60,auStack_58);
    uVar2 = param_4;
    func_0x000107c5c320();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112743948);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112743948) = uVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61120(auStack_60);
    func_0x000107c61120(auStack_58);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1006b9744; end: 1006b97e7; -[SCDebounceObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006b9744(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  func_0x000107c61174(param_3);
  lVar1 = param_1;
  func_0x000107c4e358(param_1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126e2e78;
  func_0x000107c610f4(PTR_PTR_1126e2e78);
  func_0x000107c47bbc(*(undefined8 *)(param_1 + _DAT_112796668));
  func_0x000107c61170(param_3);
  lVar3 = lVar1;
  func_0x000107c5c310(lVar1,param_2,puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1006b97e8; end: 1006b989f; -[SCDebounceObserver initWithObserver:timeout:performer:] */

undefined1 *
FUN_1006b97e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_48 = PTR_PTR_11270e460;
  uStack_50 = param_2;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    *(undefined4 *)((long)puVar1 + 0x28) = 0;
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1006b98a0; end: 1006b993f; -[SCCompactMappedObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006b98a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c4e358(param_1);
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126e2e68;
  func_0x000107c610f4(PTR_PTR_1126e2e68);
  func_0x000107c47b68();
  func_0x000107c61170(param_3);
  uVar2 = param_1;
  func_0x000107c5c310(param_1,param_2,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1006b9940; end: 1006b9a07; -[SCCompactMappedObserver initWithObservable:observer:mapper:] */

undefined1 *
FUN_1006b9940(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_11270e450;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),param_3);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1006b9a08; end: 1006b9a47;  */

void FUN_1006b9a08(long param_1)

{
  undefined8 in_x9;
  
  *(undefined8 *)(param_1 + 8) = in_x9;
  *(long *)(param_1 + 0x10) = param_1 + 0x10;
  *(long *)(param_1 + 0x18) = param_1 + 0x10;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 1006b9a48; end: 1006b9a53;  */

void FUN_1006b9a48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e820a60);
  return;
}



/* Entry: 1006b9a54; end: 1006b9b2b;  */

undefined1  [16] FUN_1006b9a54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *unaff_x20;
  code *pcVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_48;
  
  plVar7 = (long *)unaff_x20[2];
  uVar3 = 0;
  FUN_1006b9a48(0,*(undefined8 *)(*unaff_x20 + 0xa8),*(undefined8 *)(*unaff_x20 + 0xb0));
  FUN_1000b693c(param_2,param_3);
  lVar1 = unaff_x20[3];
  lVar2 = unaff_x20[4];
  func_0x000107c6157c(lVar2);
  FUN_1006b9bd4(param_2,lVar1,lVar2);
  pcVar6 = *(code **)(*plVar7 + 0x58);
  puVar4 = &DAT_10dd3b778;
  uStack_48 = param_2;
  func_0x000107c61520(&DAT_10dd3b778,uVar3);
  puVar5 = &uStack_48;
  (*pcVar6)(puVar5,uVar3,puVar4);
  func_0x000107c61574(param_2);
  auVar8._8_8_ = uVar3;
  auVar8._0_8_ = puVar5;
  return auVar8;
}



/* Entry: 1006b9b2c; end: 1006b9b2f;  */

void FUN_1006b9b2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 1006b9b30; end: 1006b9bd3;  */

void FUN_1006b9b30(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5eec8();
  if (param_2 < 0x40) {
    lStack_58 = *(long *)(lVar1 + -8) + 0x40;
    puStack_50 = PTR___sBoWV_11034d678 + 0x40;
    puStack_48 = PTR___syycWV_11034f1c0 + 0x40;
    puStack_38 = PTR___sBbWV_11034d660 + 0x40;
    puStack_28 = &UNK_10dd3b738;
    puStack_40 = puStack_50;
    puStack_30 = puStack_38;
    func_0x000107c61524(param_1,0,7,&lStack_58,param_1 + 0x60);
  }
  return;
}



/* Entry: 1006b9bd4; end: 1006b9c27;  */

undefined8 FUN_1006b9bd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_1006b9c28(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 1006b9c28; end: 1006b9d3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006b9c28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  func_0x000107c5eec4((long)unaff_x20 + _DAT_113815478);
  lVar2 = _DAT_113094e10;
  uVar3 = 0;
  FUN_10006a340();
  func_0x000107c613fc();
  FUN_10006a360();
  *(undefined8 *)((long)unaff_x20 + lVar2) = uVar3;
  lVar2 = _DAT_113094e18;
  uVar4 = 0;
  FUN_1006b9d40(0,*(undefined8 *)(lVar7 + 0x58));
  uVar3 = 0x113094ed8;
  FUN_1000285a8(0x113094ed8,&UNK_10dd3b9a0);
  puVar5 = &UNK_10dd3c970;
  func_0x000107c61520(&UNK_10dd3c970,uVar4);
  uVar6 = uVar4;
  func_0x000107c5f9cc(uVar4,uVar3,puVar5);
  *(undefined8 *)((long)unaff_x20 + lVar2) = uVar6;
  lVar2 = _DAT_113094e20;
  func_0x000107c5f9d8(uVar4,puVar5);
  *(undefined8 *)((long)unaff_x20 + lVar2) = uVar4;
  *(undefined1 *)((long)unaff_x20 + _DAT_113094e28) = 0;
  *(undefined8 *)((long)unaff_x20 + _DAT_113094e00) = param_1;
  puVar1 = (undefined8 *)((long)unaff_x20 + _DAT_113094e08);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  return;
}



/* Entry: 1006b9d40; end: 1006b9d4f;  */

void FUN_1006b9d40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e821b9c);
  return;
}



/* Entry: 1006b9d50; end: 1006b9ddb;  */

void FUN_1006b9d50(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5eec8();
  if (param_2 < 0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = &UNK_10dd3c8f0;
    puStack_28 = PTR___syycWV_11034f1c0 + 0x40;
    puStack_30 = &UNK_10dd3c908;
    func_0x000107c61524(param_1,0,4,&lStack_40,param_1 + 0x58);
  }
  return;
}



/* Entry: 1006b9ddc; end: 1006b9deb;  */

void FUN_1006b9ddc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dd3c948,param_1);
  return;
}



/* Entry: 1006b9dec; end: 1006b9df3;  */

void FUN_1006b9dec(void)

{
  long unaff_x19;
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20 + 0x10;
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x000107c37124();
    while (lVar1 != unaff_x19) {
      lVar1 = *(long *)(lVar1 + 8);
      func_0x0001006ed708();
    }
  }
  return;
}



/* Entry: 1006b9df4; end: 1006b9e3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006b9df4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_113815478;
  lVar3 = *unaff_x20;
  lVar2 = 0;
  func_0x000107c5eec8();
                    /* WARNING: Could not recover jumptable at 0x0001006b9e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 1006b9e40; end: 1006b9e97;  */

void FUN_1006b9e40(long param_1)

{
  if (*(char *)(param_1 + 0x1d8) == '\x01') {
    FUN_10066b5d4();
  }
  return;
}



/* Entry: 1006b9e98; end: 1006b9eb7;  */

void FUN_1006b9e98(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1006ba280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1006b9eb8; end: 1006b9ecf;  */

void FUN_1006b9eb8(void)

{
  long unaff_x23;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x23 + 8);
  return;
}



/* Entry: 1006b9ed0; end: 1006b9ee3; -[SCDebounceObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006b9ed0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11279666c,0);
  return;
}



/* Entry: 1006b9ee4; end: 1006b9ef7; -[SCCompactMappedObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006b9ee4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112796658,0);
  return;
}



/* Entry: 1006b9ef8; end: 1006b9f37;  */

void FUN_1006b9ef8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3b2f0();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1006b9f38; end: 1006b9f53; -[SCViewfinderEntryPoint _createObservationPipeline] */

void FUN_1006b9f38(void)

{
  func_0x000107c610fc(PTR_PTR_1126c8fd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006b9f54; end: 1006ba04f; -[SCViewfinderPipelineCoordinator initWithProcessingPipeline:audioProcessingPipeline:renderingPipeline:observationPipeline:] */

undefined1 *
FUN_1006b9f54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_1126f0840;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1006ba050; end: 1006ba08f;  */

void FUN_1006ba050(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3b218();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1006ba090; end: 1006ba1a3; -[SCViewfinderEntryPoint _createDataSourceCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006ba090(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  puVar1 = PTR_PTR_1126c8fa8;
  func_0x000107c610f4(PTR_PTR_1126c8fa8);
  lVar2 = param_1;
  FUN_1006b8bfc(param_1);
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4129c();
  func_0x000107c61180();
  lVar4 = 0;
  if (param_1 != 0) {
    lVar4 = param_1 + _DAT_112743904;
    func_0x000107c61148(lVar4);
  }
  lVar5 = lVar4;
  func_0x000107c5bca0(lVar4);
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar7 = lVar6;
  func_0x000107c3f314();
  func_0x000107c61180();
  lVar8 = lVar7;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c4646c(puVar1,param_2,lVar3,lVar8);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1006ba1a4; end: 1006ba273; -[SCViewfinderDataSourceCoordinatorImpl initWithDefaultDataSource:cameraViewfinderConfiguration:] */

undefined1 *
FUN_1006ba1a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126f0850;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    func_0x000107c61170(uVar2);
    uVar2 = param_4;
    func_0x000107c43958();
    *(char *)((long)puVar1 + 0x1c) = (char)uVar2;
    *(undefined4 *)((long)puVar1 + 0x18) = 0;
    func_0x000107c53fcc(*(undefined8 *)((long)puVar1 + 8));
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1006ba274; end: 1006ba27f;  */

long FUN_1006ba274(long param_1)

{
  return param_1 + 0x10;
}



/* Entry: 1006ba280; end: 1006ba333;  */

long FUN_1006ba280(void)

{
  long lVar1;
  long unaff_x19;
  
  FUN_1006ba274();
  func_0x0001006ba2a4();
  lVar1 = unaff_x19;
  FUN_1006248cc();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1006ba334; end: 1006ba35f;  */

void FUN_1006ba334(void)

{
  return;
}



/* Entry: 1006ba360; end: 1006ba937;  */

void FUN_1006ba360(float param_1,float param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  long param_6)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  ulong uVar6;
  code *pcVar7;
  undefined1 uVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  code *extraout_x8;
  long extraout_x8_00;
  ulong uVar12;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  code *extraout_x8_05;
  long extraout_x8_06;
  code *extraout_x8_07;
  long extraout_x8_08;
  int extraout_w9;
  ulong extraout_x9;
  ulong uVar13;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  long extraout_x9_02;
  ulong extraout_x9_03;
  ulong uVar14;
  int extraout_w10;
  int extraout_w10_00;
  long *extraout_x10;
  long *extraout_x10_00;
  undefined8 *puVar15;
  ulong extraout_x10_01;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  long *unaff_x21;
  undefined8 *puVar19;
  ulong unaff_x24;
  byte unaff_w25;
  uint uVar20;
  ulong unaff_x26;
  
  FUN_10062d020();
  FUN_10062db58();
  do {
    pbVar1 = (byte *)(*(long *)(param_3 + 0x140) + 0xa8);
    do {
      bVar3 = *pbVar1;
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar9) {
        *pbVar1 = unaff_w25;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while ((cVar4 != '\0') || ((bVar3 & 1) != 0));
    puVar19 = *(undefined8 **)(param_3 + 0x140);
    lVar11 = puVar19[0x1d];
    if (lVar11 == 0) {
      pbVar2 = (byte *)(puVar19 + 0x17);
      puVar19 = *(undefined8 **)(param_3 + 0x140);
      if ((*pbVar2 & 1) == 0) {
        lVar11 = puVar19[0x1d];
        goto LAB_1006ba3d8;
      }
      unaff_x21 = puVar19 + 0xb;
      FUN_1006716e8();
      *(undefined1 *)(param_3 + 0x20) = 0;
      *(undefined1 *)(param_3 + 0x80) = 0;
    }
    else {
LAB_1006ba3d8:
      FUN_1006ba938(lVar11);
      FUN_100100fec(unaff_x21);
      unaff_x21 = puVar19 + 2;
      FUN_1006716e8();
      func_0x0001006baa0c();
      func_0x0001006baa30();
    }
    *pbVar1 = 0;
    func_0x0001006baa3c();
    if (*(char *)(param_3 + 0x80) != '\x01') {
      func_0x0001006bac10();
      func_0x000107c33d8c();
      func_0x000107c33d70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(param_3);
      return;
    }
    func_0x0001006baac8(*(undefined8 *)(param_3 + 0x160));
    uVar8 = *(char *)(param_3 + 0x78) == '\x01';
    if ((((bool)uVar8) && ((*(byte *)(param_3 + 0x70) & 1) == 0)) &&
       ((*(byte *)(param_3 + 0x68) & 1) == 0)) {
      plVar17 = *(long **)(param_3 + 0x40);
      plVar18 = unaff_x21;
      func_0x000107c33dcc(*(undefined8 *)(param_3 + 0x160));
      (*extraout_x8)();
      uVar8 = plVar17 == plVar18;
      if ((long)plVar17 <= (long)plVar18) goto LAB_1006ba494;
      lVar11 = *(long *)(param_3 + 0x40);
      if ((unaff_x21 != (long *)0x0) && (uVar8 = true, unaff_x21[5] == lVar11)) goto LAB_1006ba4a8;
      uVar14 = param_3 + 0x20;
      func_0x000107c29eec();
      uVar13 = uVar14;
      func_0x000107c33eac();
      if (unaff_x26 != 0) {
        puVar19 = (undefined8 *)(unaff_x26 - 1);
        uVar20 = (uint)unaff_x26;
        if ((unaff_x26 & (ulong)puVar19) == 0) {
          unaff_x24 = uVar20 - 1 & uVar14;
        }
        else {
          unaff_x24 = uVar14;
          if (unaff_x26 <= uVar14) {
            uVar5 = 0;
            if (uVar20 != 0) {
              uVar5 = (uint)uVar14 / uVar20;
            }
            unaff_x24 = (ulong)((uint)uVar14 - uVar5 * uVar20);
          }
        }
        plVar18 = *(long **)(*(long *)(extraout_x8_00 + 0xb8) + unaff_x24 * 8);
        plVar17 = (long *)0x0;
        if (plVar18 != (long *)0x0) {
          do {
            while( true ) {
              plVar17 = (long *)*plVar18;
              if (plVar17 == (long *)0x0) goto LAB_1006ba510;
              uVar12 = plVar17[1];
              plVar18 = plVar17;
              if (uVar12 != uVar14) break;
              func_0x000107c33e7c();
              if ((uVar13 & 1) != 0) {
                plVar17[5] = lVar11;
                goto LAB_1006ba714;
              }
            }
            if ((unaff_x26 & (ulong)puVar19) == 0) {
              uVar12 = uVar12 & (ulong)puVar19;
            }
            else if (unaff_x26 <= uVar12) {
              uVar16 = 0;
              if (unaff_x26 != 0) {
                uVar16 = uVar12 / unaff_x26;
              }
              uVar12 = uVar12 - uVar16 * unaff_x26;
            }
          } while (uVar12 == unaff_x24);
        }
      }
LAB_1006ba510:
      func_0x000100555174();
      func_0x000107c33e18();
      FUN_10054f8dc();
      func_0x000107c33df8();
      if ((unaff_x26 == 0) ||
         (uVar8 = param_2 * (float)unaff_x26 == param_1, param_2 * (float)unaff_x26 < param_1)) {
        func_0x000107c33ec0();
        bVar9 = unaff_x26 == 3;
        func_0x000107c33e10();
        lVar11 = extraout_x8_01;
        if (bVar9) {
          unaff_x24 = 2;
        }
        else if ((unaff_x24 & extraout_x9) != 0) {
          func_0x000107c60c44();
          lVar11 = *(long *)(param_3 + 0x160);
          uVar13 = unaff_x24;
        }
        unaff_x26 = *(ulong *)(lVar11 + 0xc0);
        bVar9 = unaff_x26 <= unaff_x24;
        if (bVar9 && unaff_x24 != unaff_x26) {
LAB_1006ba580:
          if (unaff_x24 >> 0x3d != 0) {
            func_0x000104bd35f4();
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1006ba8a0);
            (*pcVar7)();
          }
          func_0x000107c60e20(unaff_x24 << 3);
          func_0x000107c33eb4();
          func_0x000107c29d94();
          plVar17[0x18] = unaff_x24;
          lVar11 = plVar17[0x17];
          for (uVar13 = 0; unaff_x24 != uVar13; uVar13 = uVar13 + 1) {
            *(undefined8 *)(lVar11 + uVar13 * 8) = 0;
          }
          unaff_x26 = unaff_x24;
          if (*(long *)(*(long *)(param_3 + 0x160) + 200) != 0) {
            func_0x000107c33ea0();
            func_0x000107c33e9c();
            lVar11 = extraout_x8_02;
            uVar13 = extraout_x9_00;
            plVar17 = extraout_x10;
            uVar12 = extraout_x11;
            while (plVar18 = plVar17, plVar17 = (long *)*plVar18, plVar17 != (long *)0x0) {
              uVar16 = plVar17[1];
              if ((unaff_x24 & uVar13) == 0) {
                uVar16 = uVar16 & uVar13;
              }
              else if (unaff_x24 <= uVar16) {
                uVar6 = 0;
                if (unaff_x24 != 0) {
                  uVar6 = uVar16 / unaff_x24;
                }
                uVar16 = uVar16 - uVar6 * unaff_x24;
              }
              if (uVar16 != uVar12) {
                if (*(long *)(lVar11 + uVar16 * 8) == 0) {
                  *(long **)(lVar11 + uVar16 * 8) = plVar18;
                  uVar12 = uVar16;
                }
                else {
                  func_0x000107c33dfc();
                  lVar11 = extraout_x8_03;
                  uVar13 = extraout_x9_01;
                  plVar17 = extraout_x10_00;
                  uVar12 = extraout_x11_00;
                }
              }
            }
          }
        }
        else if (!bVar9) {
          func_0x000107c33e14();
          if ((bVar9) && ((unaff_x26 & unaff_x26 - 1) == 0)) {
            func_0x000107c33e3c();
          }
          else {
            func_0x000107c60c44();
          }
          if (unaff_x24 <= uVar13) {
            unaff_x24 = uVar13;
          }
          if (unaff_x24 < unaff_x26) {
            if (unaff_x24 != 0) goto LAB_1006ba580;
            func_0x000107c33eb4();
            func_0x000107c29d94();
            plVar17[0x18] = 0;
            unaff_x26 = 0;
          }
          else {
            func_0x000107c33eac();
          }
        }
        if ((unaff_x26 & unaff_x26 - 1) == 0) {
          uVar8 = true;
          unaff_x24 = (int)unaff_x26 - 1 & uVar14;
        }
        else {
          uVar8 = uVar14 == unaff_x26;
          unaff_x24 = uVar14;
          if (unaff_x26 <= uVar14) {
            uVar13 = 0;
            if (unaff_x26 != 0) {
              uVar13 = uVar14 / unaff_x26;
            }
            unaff_x24 = uVar14 - uVar13 * unaff_x26;
          }
        }
      }
      puVar15 = *(undefined8 **)(*(long *)(*(long *)(param_3 + 0x160) + 0xb8) + unaff_x24 * 8);
      if (puVar15 == (undefined8 *)0x0) {
        func_0x000107c33e4c();
        if (extraout_x9_02 != 0) {
          func_0x000107c33ec0();
          if ((bool)uVar8) {
            uVar14 = extraout_x9_03 & extraout_x10_01;
          }
          else {
            uVar14 = extraout_x9_03;
            if (unaff_x26 <= extraout_x9_03) {
              uVar14 = 0;
              if (unaff_x26 != 0) {
                uVar14 = extraout_x9_03 / unaff_x26;
              }
              uVar14 = extraout_x9_03 - uVar14 * unaff_x26;
            }
          }
          *(undefined8 **)(extraout_x8_04 + uVar14 * 8) = puVar19;
        }
      }
      else {
        *puVar19 = *puVar15;
        *puVar15 = puVar19;
      }
      func_0x000107c33dbc();
LAB_1006ba714:
      uVar8 = unaff_x21 == (long *)0x0;
      bVar9 = true;
    }
    else {
LAB_1006ba494:
      if (unaff_x21 == (long *)0x0) {
LAB_1006ba4a8:
        bVar9 = false;
      }
      else {
        func_0x000107c33e08();
        bVar9 = true;
      }
    }
    FUN_1006babb0();
    iVar10 = (int)param_3 + 0x138;
    FUN_10002b838();
    func_0x0001006babd4();
    func_0x0001006babe0();
    func_0x0001006babe8();
    func_0x0001006babf4(*(undefined8 *)(*unaff_x21 + 0x50));
    func_0x0001006bac00();
    func_0x0001006bac08();
    if (bVar9) {
      func_0x000107c33dac();
      (*extraout_x8_05)();
      unaff_x21 = *(long **)(param_3 + 0x160);
      func_0x0001006bac08();
      func_0x000107c33e8c();
      func_0x000107c33ea8();
      if (((bool)uVar8) && (extraout_w9 != 0)) {
        func_0x000107c33e90();
        lVar11 = *(long *)(param_3 + 0x160);
        if ((iVar10 == 0) || (*(long *)(param_3 + 0xa0) != *(long *)(lVar11 + 0xa8))) {
LAB_1006ba7b4:
          cVar4 = *(char *)(lVar11 + 0xb0);
          if (cVar4 == *(char *)(param_3 + 0xa8)) {
            if (cVar4 != '\0') {
              func_0x000107c33e60();
              *(undefined8 *)(*(long *)(param_3 + 0x160) + 0xa8) = *(undefined8 *)(param_3 + 0xa0);
            }
          }
          else if (cVar4 == '\0') {
            func_0x000107c33e5c();
            *(byte *)(*(long *)(param_3 + 0x160) + 0xb0) = unaff_w25;
          }
          else {
            func_0x000107c33e00();
          }
          lVar11 = *(long *)(param_3 + 0x160);
          if (*(char *)(lVar11 + 0xb0) == '\x01') {
            func_0x000107c33e40();
            lVar11 = *(long *)(param_3 + 0x160);
          }
          func_0x000107c33dc4(lVar11);
          (*extraout_x8_07)();
          func_0x000107c33de0();
          func_0x0001005ed540(unaff_x21);
          FUN_10054ed98(param_3 + 0x138);
          func_0x000107c33e04();
          func_0x00010054ef4c(param_3 + 0x138);
        }
      }
      else {
        lVar11 = extraout_x8_06;
        if (extraout_w9 != extraout_w10) goto LAB_1006ba7b4;
      }
      func_0x000107c33e38();
    }
    func_0x0001006bac10();
    FUN_10062f874();
    if (extraout_x8_08 != 0) {
      do {
        func_0x00010062d030();
      } while (extraout_w10_00 != 0);
    }
    plVar17 = (long *)(param_3 + 0x138);
    func_0x00010061e2f8();
    if (((ulong)plVar17 & 1) == 0) {
      func_0x00010062f888();
      if (param_6 == 0) {
        FUN_10054ef74();
        param_6 = *plVar17;
      }
      func_0x00010062f89c();
      if (((ulong)plVar17 & 1) != 0) {
        return;
      }
    }
  } while( true );
}



/* Entry: 1006ba938; end: 1006ba98b;  */

void FUN_1006ba938(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x19;
  undefined8 *puVar4;
  long unaff_x23;
  undefined8 uVar5;
  
  puVar4 = (undefined8 *)
           (*(long *)(unaff_x23 + 0xc0) + *(long *)(unaff_x23 + 0xd0) * *(long *)(unaff_x23 + 0xd8))
  ;
  uVar1 = *(long *)(unaff_x23 + 0xd8) + 1;
  uVar3 = *(ulong *)(unaff_x23 + 0xa0);
  uVar2 = 0;
  if (uVar3 != 0) {
    uVar2 = uVar1 / uVar3;
  }
  *(ulong *)(unaff_x23 + 0xd8) = uVar1 - uVar2 * uVar3;
  *(long *)(unaff_x23 + 0xe8) = param_1 + -1;
  uVar5 = *puVar4;
  *(undefined8 *)(unaff_x19 + 0x90) = puVar4[1];
  *(undefined8 *)(unaff_x19 + 0x88) = uVar5;
  *(undefined8 *)(unaff_x19 + 0x98) = puVar4[2];
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(unaff_x19 + 0xa0,puVar4 + 3,0x48);
  return;
}



/* Entry: 1006ba98c; end: 1006ba997; -[SCCameraLegacyDataSource setDelegate:] */

void FUN_1006ba98c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 1006ba998; end: 1006ba9a3; -[SCViewfinderDataSourceCoordinatorImpl setDelegate:] */

void FUN_1006ba998(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 1006ba9a4; end: 1006ba9b7; -[SCViewfinderRenderingPipelineImpl setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006ba9a4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112743954,param_3);
  return;
}



/* Entry: 1006ba9b8; end: 1006baa0b;  */

void FUN_1006ba9b8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}


