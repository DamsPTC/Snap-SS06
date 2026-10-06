/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101f3f9f8; end: 101f3fb5f;  */

int FUN_101f3f9f8(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf4 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0xb) {
      iVar2 = 4;
    }
    if (param_2 + 0xb >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101f3fa74;
        goto LAB_101f3fa58;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101f3fa58:
      return ((uint)*param_1 | uVar1 << 8) - 0xb;
    }
  }
LAB_101f3fa74:
  iVar2 = *param_1 - 0xc;
  if (*param_1 < 0xc) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101f3fb60; end: 101f3fb9f;  */

void FUN_101f3fb60(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e425f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da330c4;
  func_0x000107c61520(&UNK_10da330c4,&UNK_1104a4228);
  puRam0000000112e425f0 = puVar1;
  return;
}



/* Entry: 101f3fba0; end: 101f3fba3;  */

void FUN_101f3fba0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e425f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da33024;
  func_0x000107c61520(&UNK_10da33024,&UNK_1104a4228);
  puRam0000000112e425f8 = puVar1;
  return;
}



/* Entry: 101f3fba4; end: 101f3fbe3;  */

void FUN_101f3fba4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e425f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da33024;
  func_0x000107c61520(&UNK_10da33024,&UNK_1104a4228);
  puRam0000000112e425f8 = puVar1;
  return;
}



/* Entry: 101f3fbe4; end: 101f3fbe7;  */

void FUN_101f3fbe4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42600 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da32ffc;
  func_0x000107c61520(&UNK_10da32ffc,&UNK_1104a4228);
  puRam0000000112e42600 = puVar1;
  return;
}



/* Entry: 101f3fbe8; end: 101f3fc27;  */

void FUN_101f3fbe8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42600 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da32ffc;
  func_0x000107c61520(&UNK_10da32ffc,&UNK_1104a4228);
  puRam0000000112e42600 = puVar1;
  return;
}



/* Entry: 101f3fc28; end: 101f3fc2f;  */

undefined8 FUN_101f3fc28(void)

{
  return 1;
}



/* Entry: 101f3fc30; end: 101f3fc7f;  */

void FUN_101f3fc30(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c5fb58(auStack_68,0x64692d6b63617274,0xe800000000000000);
  func_0x000107c606a8();
  return;
}



/* Entry: 101f3fc80; end: 101f3fc97;  */

void FUN_101f3fc80(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)
            (param_1,0x64692d6b63617274,0xe800000000000000);
  return;
}



/* Entry: 101f3fc98; end: 101f3fce3;  */

void FUN_101f3fc98(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  func_0x000107c5fb58(auStack_68,0x64692d6b63617274,0xe800000000000000);
  func_0x000107c606a8();
  return;
}



/* Entry: 101f3fce4; end: 101f3fd4f;  */

void FUN_101f3fce4(undefined8 param_1,long param_2)

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



/* Entry: 101f3fd50; end: 101f3fd83;  */

void FUN_101f3fd50(undefined8 *param_1)

{
  *param_1 = 0x64692d6b63617274;
  param_1[1] = 0xe800000000000000;
  return;
}



/* Entry: 101f3fd84; end: 101f3fdf3;  */

void FUN_101f3fd84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 101f3fdf4; end: 101f3fe0b;  */

undefined1  [16] FUN_101f3fdf4(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 101f3fe0c; end: 101f3fe5b;  */

void FUN_101f3fe0c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_101f3fe5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101f3fe5c; end: 101f3fe9b;  */

void FUN_101f3fe5c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42758 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da332d0;
  func_0x000107c61520(&UNK_10da332d0,&UNK_1104a43c0);
  puRam0000000112e42758 = puVar1;
  return;
}



/* Entry: 101f3fe9c; end: 101f3feb7;  */

undefined1  [16] FUN_101f3fe9c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f01c930;
  auVar1._0_8_ = 0xd000000000000015;
  return auVar1;
}



/* Entry: 101f3feb8; end: 101f3fedb;  */

void FUN_101f3feb8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101f3fedc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101f3fedc; end: 101f3ff1b;  */

void FUN_101f3fedc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42760 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da3318c;
  func_0x000107c61520(&UNK_10da3318c,&UNK_1104a4328);
  puRam0000000112e42760 = puVar1;
  return;
}



/* Entry: 101f3ff1c; end: 101f3ff2f;  */

bool FUN_101f3ff1c(double *param_1,double *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101f3ff30; end: 101f4004b;  */

void FUN_101f3ff30(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  
  lVar3 = 0x112e42750;
  func_0x0001000285a8(0x112e42750,&UNK_10da33140);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_3 + 0x18);
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  lVar4 = param_3;
  func_0x0001000a8868(param_3,uVar1);
  FUN_101f3fe5c();
  func_0x000107c606e0(&stack0xffffffffffffffa0 + -extraout_x8,&UNK_1104a43c0,&UNK_1104a43c0,lVar4,
                      uVar1,uVar2);
  if (unaff_x21 == 0) {
    func_0x000107c604fc();
    (**(code **)(lVar5 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,lVar3);
    func_0x0001000834e4(param_3);
    *param_1 = param_2;
  }
  else {
    func_0x0001000834e4(param_3);
  }
  return;
}



/* Entry: 101f4004c; end: 101f4014b;  */

undefined1  [16] FUN_101f4004c(void)

{
  return ZEXT816(0x1104a4328);
}



/* Entry: 101f4014c; end: 101f4018b;  */

void FUN_101f4014c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42768 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da332a8;
  func_0x000107c61520(&UNK_10da332a8,&UNK_1104a43c0);
  puRam0000000112e42768 = puVar1;
  return;
}



/* Entry: 101f4018c; end: 101f4018f;  */

void FUN_101f4018c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42770 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da33208;
  func_0x000107c61520(&UNK_10da33208,&UNK_1104a43c0);
  puRam0000000112e42770 = puVar1;
  return;
}



/* Entry: 101f40190; end: 101f401cf;  */

void FUN_101f40190(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42770 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da33208;
  func_0x000107c61520(&UNK_10da33208,&UNK_1104a43c0);
  puRam0000000112e42770 = puVar1;
  return;
}



/* Entry: 101f401d0; end: 101f401d3;  */

void FUN_101f401d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42778 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da331e0;
  func_0x000107c61520(&UNK_10da331e0,&UNK_1104a43c0);
  puRam0000000112e42778 = puVar1;
  return;
}



/* Entry: 101f401d4; end: 101f40213;  */

void FUN_101f401d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42778 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da331e0;
  func_0x000107c61520(&UNK_10da331e0,&UNK_1104a43c0);
  puRam0000000112e42778 = puVar1;
  return;
}



/* Entry: 101f40214; end: 101f40227;  */

bool FUN_101f40214(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101f40228; end: 101f402d3;  */

void FUN_101f40228(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101f402d4; end: 101f40327;  */

undefined1  [16] FUN_101f402d4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  undefined1 auVar5 [16];
  
  cVar4 = *unaff_x20;
  uVar3 = 0x656475746974616c;
  if (cVar4 != '\x01') {
    uVar3 = 0x64757469676e6f6c;
  }
  uVar1 = 0xe800000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xe900000000000065;
  }
  uVar2 = 0x6469;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe200000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = uVar2;
  return auVar5;
}



/* Entry: 101f40328; end: 101f4034b;  */

void FUN_101f40328(undefined1 *param_1,undefined1 param_2)

{
  FUN_101f4047c();
  *param_1 = param_2;
  return;
}



/* Entry: 101f4034c; end: 101f40363;  */

undefined1  [16] FUN_101f4034c(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 101f40364; end: 101f403b3;  */

void FUN_101f40364(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_101f40940();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101f403b4; end: 101f403cf;  */

undefined1  [16] FUN_101f403b4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f01c950;
  auVar1._0_8_ = 0xd000000000000012;
  return auVar1;
}



/* Entry: 101f403d0; end: 101f4044f;  */

bool FUN_101f403d0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  uVar1 = *param_1;
  dVar4 = (double)param_1[2];
  dVar2 = (double)param_1[3];
  dVar5 = (double)param_2[2];
  dVar3 = (double)param_2[3];
  if (uVar1 == *param_2 && param_1[1] == param_2[1]) {
    if (dVar4 != dVar5) {
      return false;
    }
  }
  else {
    func_0x000107c605b8();
    if ((uVar1 & 1) == 0) {
      return false;
    }
    if (dVar4 != dVar5) {
      return false;
    }
  }
  return dVar2 == dVar3;
}



/* Entry: 101f40450; end: 101f4047b;  */

void FUN_101f40450(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x21;
  
  FUN_101f40590();
  if (unaff_x21 == 0) {
    *param_1 = param_4;
    param_1[1] = param_5;
    param_1[2] = param_2;
    param_1[3] = param_3;
  }
  return;
}



/* Entry: 101f4047c; end: 101f4058f;  */

undefined4 FUN_101f4047c(long param_1,long param_2)

{
  ulong uVar1;
  
  if (param_1 != 0x6469 || param_2 != -0x1e00000000000000) {
    uVar1 = 0x6469;
    func_0x000107c605b8(0x6469,0xe200000000000000,param_1,param_2,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = 0;
      if (((param_1 != 0x656475746974616c) || (param_2 != -0x1800000000000000)) &&
         (func_0x000107c605b8(0x656475746974616c,0xe800000000000000,param_1,param_2,0),
         (uVar1 & 1) == 0)) {
        uVar1 = 0;
        if ((param_1 == 0x64757469676e6f6c) && (param_2 == -0x16ffffffffffff9b)) {
          func_0x000107c6142c(0xe900000000000065);
          return 2;
        }
        func_0x000107c605b8(0x64757469676e6f6c,0xe900000000000065,param_1,param_2,0);
        func_0x000107c6142c(param_2);
        if ((uVar1 & 1) != 0) {
          return 2;
        }
        return 3;
      }
      func_0x000107c6142c(param_2);
      return 1;
    }
  }
  func_0x000107c6142c(param_2);
  return 0;
}



/* Entry: 101f40590; end: 101f40743;  */

/* WARNING: Removing unreachable block (ram,0x000101f406d4) */
/* WARNING: Removing unreachable block (ram,0x000101f40724) */
/* WARNING: Removing unreachable block (ram,0x000101f4065c) */

undefined1 * FUN_101f40590(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined1 auStack_70 [13];
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  
  lVar2 = 0x112e42808;
  func_0x0001000285a8(0x112e42808,&UNK_10da333a8);
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puVar4 = *(undefined1 **)(param_1 + 0x20);
  lVar3 = param_1;
  func_0x0001000a8868(param_1,uVar1);
  FUN_101f40940();
  func_0x000107c606e0(auStack_70 + -extraout_x8,&UNK_1104a45b8,&UNK_1104a45b8,lVar3,uVar1,puVar4);
  if (unaff_x21 == 0) {
    uStack_61 = 0;
    puVar4 = &uStack_61;
    func_0x000107c604f4(puVar4,lVar2);
    uStack_62 = 1;
    func_0x000107c604fc(&uStack_62,lVar2);
    uStack_63 = 2;
    func_0x000107c604fc(&uStack_63,lVar2);
    (**(code **)(lVar5 + 8))(auStack_70 + -extraout_x8,lVar2);
    func_0x0001000834e4(param_1);
  }
  else {
    func_0x0001000834e4(param_1);
  }
  return puVar4;
}



/* Entry: 101f40744; end: 101f40767;  */

void FUN_101f40744(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101f40768();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101f40768; end: 101f407a7;  */

void FUN_101f40768(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42800 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da33364;
  func_0x000107c61520(&UNK_10da33364,&UNK_1104a4518);
  puRam0000000112e42800 = puVar1;
  return;
}



/* Entry: 101f407a8; end: 101f407d3;  */

long FUN_101f407a8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101f407d4; end: 101f407db;  */

void FUN_101f407d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 101f407dc; end: 101f4080f;  */

undefined8 * FUN_101f407dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 101f40810; end: 101f4086b;  */

undefined8 * FUN_101f40810(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return param_1;
}



/* Entry: 101f4086c; end: 101f408a7;  */

undefined8 * FUN_101f4086c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 101f408a8; end: 101f4093f;  */

int FUN_101f408a8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101f40940; end: 101f4097f;  */

void FUN_101f40940(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42810 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da33474;
  func_0x000107c61520(&UNK_10da33474,&UNK_1104a45b8);
  puRam0000000112e42810 = puVar1;
  return;
}



/* Entry: 101f40980; end: 101f40ae7;  */

int FUN_101f40980(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101f409fc;
        goto LAB_101f409e0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101f409e0:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_101f409fc:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101f40ae8; end: 101f40b27;  */

void FUN_101f40ae8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42818 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da3344c;
  func_0x000107c61520(&UNK_10da3344c,&UNK_1104a45b8);
  puRam0000000112e42818 = puVar1;
  return;
}



/* Entry: 101f40b28; end: 101f40b2b;  */

void FUN_101f40b28(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42820 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da333e4;
  func_0x000107c61520(&UNK_10da333e4,&UNK_1104a45b8);
  puRam0000000112e42820 = puVar1;
  return;
}



/* Entry: 101f40b2c; end: 101f40b6b;  */

void FUN_101f40b2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42820 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da333e4;
  func_0x000107c61520(&UNK_10da333e4,&UNK_1104a45b8);
  puRam0000000112e42820 = puVar1;
  return;
}



/* Entry: 101f40b6c; end: 101f40b6f;  */

void FUN_101f40b6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42828 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da333bc;
  func_0x000107c61520(&UNK_10da333bc,&UNK_1104a45b8);
  puRam0000000112e42828 = puVar1;
  return;
}



/* Entry: 101f40b70; end: 101f40baf;  */

void FUN_101f40b70(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42828 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da333bc;
  func_0x000107c61520(&UNK_10da333bc,&UNK_1104a45b8);
  puRam0000000112e42828 = puVar1;
  return;
}



/* Entry: 101f40bb0; end: 101f40bc3;  */

bool FUN_101f40bb0(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101f40bc4; end: 101f40e13;  */

void FUN_101f40bc4(void)

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
  uVar5 = 0x785f6e6565726373;
  if (bVar4 != 2) {
    uVar5 = 0x795f6e6565726373;
  }
  uVar1 = 0x64692d6563616c70;
  if (bVar4 != 0) {
    uVar1 = 0x692d646e65697266;
  }
  uVar2 = 0xe800000000000000;
  if (bVar4 != 0) {
    uVar2 = 0xe900000000000064;
  }
  uVar3 = 0xe800000000000000;
  if (bVar4 < 2) {
    uVar3 = uVar2;
    uVar5 = uVar1;
  }
  func_0x000107c5fb58(auStack_68,uVar5,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 101f40e14; end: 101f40f17;  */

void FUN_101f40e14(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar4 = *unaff_x20;
  uVar5 = 0x785f6e6565726373;
  if (bVar4 != 2) {
    uVar5 = 0x795f6e6565726373;
  }
  uVar1 = 0x64692d6563616c70;
  if (bVar4 != 0) {
    uVar1 = 0x692d646e65697266;
  }
  uVar2 = 0xe800000000000000;
  if (bVar4 != 0) {
    uVar2 = 0xe900000000000064;
  }
  uVar3 = 0xe800000000000000;
  if (bVar4 < 2) {
    uVar3 = uVar2;
    uVar5 = uVar1;
  }
  *param_1 = uVar5;
  param_1[1] = uVar3;
  return;
}



/* Entry: 101f40f18; end: 101f40f3b;  */

void FUN_101f40f18(undefined1 *param_1,undefined1 param_2)

{
  func_0x000101f410d0();
  *param_1 = param_2;
  return;
}



/* Entry: 101f40f3c; end: 101f40f53;  */

undefined1  [16] FUN_101f40f3c(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 101f40f54; end: 101f40fa3;  */

void FUN_101f40f54(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_101f415a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101f40fa4; end: 101f40fbf;  */

undefined1  [16] FUN_101f40fa4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f01c970;
  auVar1._0_8_ = 0xd000000000000011;
  return auVar1;
}



/* Entry: 101f40fc0; end: 101f41003;  */

uint FUN_101f40fc0(undefined8 *param_1,undefined8 *param_2)

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
  FUN_101f41044(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 101f41004; end: 101f41043;  */

void FUN_101f41004(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_101f41134(&uStack_50);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_48;
    *param_1 = uStack_50;
    param_1[3] = uStack_38;
    param_1[2] = uStack_40;
    param_1[5] = uStack_28;
    param_1[4] = uStack_30;
  }
  return;
}



/* Entry: 101f41044; end: 101f41133;  */

bool FUN_101f41044(ulong *param_1,ulong *param_2)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  if ((((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0)
       ) && ((uVar2 = param_1[2], uVar2 == param_2[2] && param_1[3] == param_2[3] ||
             (func_0x000107c605b8(), (uVar2 & 1) != 0)))) &&
     ((double)param_1[4] == (double)param_2[4])) {
    bVar1 = (double)param_1[5] == (double)param_2[5];
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 101f41134; end: 101f4133f;  */

/* WARNING: Removing unreachable block (ram,0x000101f41270) */
/* WARNING: Removing unreachable block (ram,0x000101f412ac) */
/* WARNING: Removing unreachable block (ram,0x000101f41300) */
/* WARNING: Removing unreachable block (ram,0x000101f41314) */
/* WARNING: Removing unreachable block (ram,0x000101f41204) */

void FUN_101f41134(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long extraout_x8;
  long unaff_x21;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_90 [8];
  undefined1 *puStack_88;
  long lStack_80;
  undefined1 *puStack_78;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar2 = 0x112e42838;
  func_0x0001000285a8(0x112e42838,&UNK_10da33560);
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar8 = *(undefined8 *)(param_3 + 0x18);
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  lVar3 = param_3;
  func_0x0001000a8868(param_3,uVar8);
  FUN_101f415a8();
  func_0x000107c606e0(auStack_90 + -extraout_x8,&UNK_1104a4790,&UNK_1104a4790,lVar3,uVar8,uVar1);
  if (unaff_x21 == 0) {
    uStack_51 = 0;
    puVar4 = &uStack_51;
    lVar3 = lVar2;
    func_0x000107c604f4();
    uStack_52 = 1;
    puVar5 = &uStack_52;
    lVar6 = lVar2;
    puStack_78 = puVar4;
    func_0x000107c604f4();
    uStack_53 = 2;
    puStack_88 = puVar5;
    lStack_80 = lVar6;
    func_0x000107c604fc(&uStack_53,lVar2);
    uStack_54 = 3;
    uVar8 = param_2;
    func_0x000107c604fc(&uStack_54,lVar2);
    (**(code **)(lVar7 + 8))(auStack_90 + -extraout_x8,lVar2);
    func_0x0001000834e4(param_3);
    *param_1 = puStack_78;
    param_1[1] = lVar3;
    param_1[2] = puStack_88;
    param_1[3] = lStack_80;
    param_1[4] = param_2;
    param_1[5] = uVar8;
  }
  else {
    func_0x0001000834e4(param_3);
  }
  return;
}



/* Entry: 101f41340; end: 101f41363;  */

void FUN_101f41340(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101f41364();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101f41364; end: 101f413a3;  */

void FUN_101f41364(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42830 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da33514;
  func_0x000107c61520(&UNK_10da33514,&UNK_1104a46f0);
  puRam0000000112e42830 = puVar1;
  return;
}



/* Entry: 101f413a4; end: 101f4143b;  */

long FUN_101f413a4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101f4143c; end: 101f414b7;  */

undefined8 * FUN_101f4143c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  return param_1;
}



/* Entry: 101f414b8; end: 101f41503;  */

undefined8 * FUN_101f414b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  return param_1;
}



/* Entry: 101f41504; end: 101f415a7;  */

int FUN_101f41504(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101f415a8; end: 101f415e7;  */

void FUN_101f415a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42840 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da33664;
  func_0x000107c61520(&UNK_10da33664,&UNK_1104a4790);
  puRam0000000112e42840 = puVar1;
  return;
}



/* Entry: 101f415e8; end: 101f4174f;  */

int FUN_101f415e8(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101f41664;
        goto LAB_101f41648;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101f41648:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_101f41664:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101f41750; end: 101f4178f;  */

void FUN_101f41750(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42848 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da3363c;
  func_0x000107c61520(&UNK_10da3363c,&UNK_1104a4790);
  puRam0000000112e42848 = puVar1;
  return;
}



/* Entry: 101f41790; end: 101f41793;  */

void FUN_101f41790(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42850 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da3359c;
  func_0x000107c61520(&UNK_10da3359c,&UNK_1104a4790);
  puRam0000000112e42850 = puVar1;
  return;
}



/* Entry: 101f41794; end: 101f417d3;  */

void FUN_101f41794(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42850 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da3359c;
  func_0x000107c61520(&UNK_10da3359c,&UNK_1104a4790);
  puRam0000000112e42850 = puVar1;
  return;
}



/* Entry: 101f417d4; end: 101f417d7;  */

void FUN_101f417d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42858 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da33574;
  func_0x000107c61520(&UNK_10da33574,&UNK_1104a4790);
  puRam0000000112e42858 = puVar1;
  return;
}



/* Entry: 101f417d8; end: 101f41817;  */

void FUN_101f417d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42858 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da33574;
  func_0x000107c61520(&UNK_10da33574,&UNK_1104a4790);
  puRam0000000112e42858 = puVar1;
  return;
}



/* Entry: 101f41818; end: 101f4182b;  */

bool FUN_101f41818(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101f4182c; end: 101f4189f;  */

void FUN_101f4182c(void)

{
  undefined8 uVar1;
  char cVar2;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x795f6e6565726373;
  if (cVar2 != '\x01') {
    uVar1 = 0x785f6e6565726373;
  }
  func_0x000107c5fb58(auStack_68,uVar1,0xe800000000000000);
  func_0x000107c6142c(0xe800000000000000);
  func_0x000107c606a8();
  return;
}



/* Entry: 101f418a0; end: 101f418e7;  */

void FUN_101f418a0(undefined8 param_1)

{
  undefined8 uVar1;
  char *unaff_x20;
  
  uVar1 = 0x795f6e6565726373;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x785f6e6565726373;
  }
  func_0x000107c5fb58(param_1,uVar1,0xe800000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(0xe800000000000000);
  return;
}



/* Entry: 101f418e8; end: 101f41957;  */

void FUN_101f418e8(void)

{
  undefined8 uVar1;
  char cVar2;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  func_0x000107c6068c(auStack_68);
  uVar1 = 0x795f6e6565726373;
  if (cVar2 != '\x01') {
    uVar1 = 0x785f6e6565726373;
  }
  func_0x000107c5fb58(auStack_68,uVar1,0xe800000000000000);
  func_0x000107c6142c(0xe800000000000000);
  func_0x000107c606a8();
  return;
}



/* Entry: 101f41958; end: 101f419cf;  */

void FUN_101f41958(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 101f419d0; end: 101f41a3b;  */

void FUN_101f419d0(undefined8 *param_1)

{
  undefined8 uVar1;
  char *unaff_x20;
  
  uVar1 = 0x795f6e6565726373;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x785f6e6565726373;
  }
  *param_1 = uVar1;
  param_1[1] = 0xe800000000000000;
  return;
}



/* Entry: 101f41a3c; end: 101f41ab7;  */

void FUN_101f41a3c(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long lVar2;
  undefined1 uVar3;
  
  lVar2 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_3);
  uVar3 = 1;
  if (lVar2 != 1) {
    uVar3 = 2;
  }
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = uVar3;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 101f41ab8; end: 101f41acf;  */

undefined1  [16] FUN_101f41ab8(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 101f41ad0; end: 101f41b1f;  */

void FUN_101f41ad0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_101f41da8();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101f41b20; end: 101f41b67;  */

undefined1  [16] FUN_101f41b20(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f01c990;
  auVar1._0_8_ = 0xd000000000000012;
  return auVar1;
}



/* Entry: 101f41b68; end: 101f41b8f;  */

void FUN_101f41b68(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x21;
  
  FUN_101f41b90();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
  }
  return;
}



/* Entry: 101f41b90; end: 101f41ceb;  */

/* WARNING: Removing unreachable block (ram,0x000101f41c58) */

undefined1  [16] FUN_101f41b90(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar6 [16];
  undefined1 auStack_70 [14];
  undefined1 uStack_62;
  undefined1 uStack_61;
  
  lVar3 = 0x112e428f0;
  func_0x0001000285a8(0x112e428f0,&UNK_10da33750);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_101f41da8();
  func_0x000107c606e0(auStack_70 + -extraout_x8,&UNK_1104a4980,&UNK_1104a4980,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    uStack_61 = 0;
    func_0x000107c604fc(&uStack_61,lVar3);
    uStack_62 = 1;
    unaff_d9 = param_1;
    func_0x000107c604fc(&uStack_62,lVar3);
    (**(code **)(lVar5 + 8))(auStack_70 + -extraout_x8,lVar3);
    func_0x0001000834e4(param_2);
  }
  else {
    func_0x0001000834e4(param_2);
    param_1 = unaff_d8;
  }
  auVar6._8_8_ = unaff_d9;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 101f41cec; end: 101f41d0f;  */

void FUN_101f41cec(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101f41d10();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101f41d10; end: 101f41d4f;  */

void FUN_101f41d10(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e428e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da33704;
  func_0x000107c61520(&UNK_10da33704,&UNK_1104a48e8);
  puRam0000000112e428e8 = puVar1;
  return;
}



/* Entry: 101f41d50; end: 101f41da7;  */

int FUN_101f41d50(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 101f41da8; end: 101f41de7;  */

void FUN_101f41da8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e428f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da33854;
  func_0x000107c61520(&UNK_10da33854,&UNK_1104a4980);
  puRam0000000112e428f8 = puVar1;
  return;
}



/* Entry: 101f41de8; end: 101f41f4f;  */

int FUN_101f41de8(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101f41e64;
        goto LAB_101f41e48;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101f41e48:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_101f41e64:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101f41f50; end: 101f41f8f;  */

void FUN_101f41f50(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42900 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da3382c;
  func_0x000107c61520(&UNK_10da3382c,&UNK_1104a4980);
  puRam0000000112e42900 = puVar1;
  return;
}



/* Entry: 101f41f90; end: 101f41f93;  */

void FUN_101f41f90(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42908 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da3378c;
  func_0x000107c61520(&UNK_10da3378c,&UNK_1104a4980);
  puRam0000000112e42908 = puVar1;
  return;
}



/* Entry: 101f41f94; end: 101f41fd3;  */

void FUN_101f41f94(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42908 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da3378c;
  func_0x000107c61520(&UNK_10da3378c,&UNK_1104a4980);
  puRam0000000112e42908 = puVar1;
  return;
}



/* Entry: 101f41fd4; end: 101f41fd7;  */

void FUN_101f41fd4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42910 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da33764;
  func_0x000107c61520(&UNK_10da33764,&UNK_1104a4980);
  puRam0000000112e42910 = puVar1;
  return;
}



/* Entry: 101f41fd8; end: 101f42017;  */

void FUN_101f41fd8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e42910 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da33764;
  func_0x000107c61520(&UNK_10da33764,&UNK_1104a4980);
  puRam0000000112e42910 = puVar1;
  return;
}



/* Entry: 101f42018; end: 101f421f7;  */

undefined8 FUN_101f42018(long param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  ulong uVar7;
  bool bVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
  lVar15 = *(long *)(param_1 + 0x10);
  if (lVar15 == *(long *)(param_2 + 0x10)) {
    if ((lVar15 != 0) && (param_1 != param_2)) {
      lVar16 = 0;
      do {
        puVar1 = (ulong *)(param_1 + 0x20 + lVar16 * 0x40);
        uVar9 = *puVar1;
        dVar20 = (double)puVar1[2];
        dVar19 = (double)puVar1[3];
        uVar10 = puVar1[4];
        uVar4 = puVar1[5];
        uVar7 = puVar1[6];
        uVar17 = puVar1[7];
        puVar2 = (ulong *)(param_2 + 0x20 + lVar16 * 0x40);
        dVar22 = (double)puVar2[2];
        dVar21 = (double)puVar2[3];
        uVar3 = puVar2[4];
        uVar5 = puVar2[5];
        bVar6 = (byte)puVar2[6];
        uVar18 = puVar2[7];
        if ((uVar9 == *puVar2) && (puVar1[1] == puVar2[1])) {
          bVar8 = false;
          if ((dVar20 == dVar22) && (bVar8 = false, !NAN(dVar19) && !NAN(dVar21))) {
            bVar8 = dVar19 == dVar21;
          }
          if (!bVar8) goto LAB_101f421cc;
        }
        else {
          func_0x000107c605b8();
          if ((uVar9 & 1) == 0) {
            return 0;
          }
          bVar8 = false;
          if ((dVar20 == dVar22) && (bVar8 = false, !NAN(dVar19) && !NAN(dVar21))) {
            bVar8 = dVar19 == dVar21;
          }
          if (!bVar8) {
            return 0;
          }
        }
        if (uVar4 == 0) {
          if (uVar5 != 0) goto LAB_101f421cc;
        }
        else if ((uVar5 == 0) ||
                (((uVar10 != uVar3 || (uVar4 != uVar5)) &&
                 (func_0x000107c605b8(uVar10,uVar4,uVar3,uVar5,0), (uVar10 & 1) == 0))))
        goto LAB_101f421cc;
        if ((byte)uVar7 == 2) {
          if (bVar6 != 2) goto LAB_101f421cc;
        }
        else {
          if (bVar6 == 2) {
            return 0;
          }
          if ((((byte)uVar7 ^ bVar6) & 1) != 0) {
            return 0;
          }
        }
        if (uVar17 == 0) {
          if (uVar18 != 0) goto LAB_101f421cc;
        }
        else {
          if ((uVar18 == 0) ||
             (lVar12 = *(long *)(uVar17 + 0x10), lVar12 != *(long *)(uVar18 + 0x10)))
          goto LAB_101f421cc;
          if ((lVar12 != 0) && (uVar17 != uVar18)) {
            plVar13 = (long *)(uVar18 + 0x28);
            plVar14 = (long *)(uVar17 + 0x28);
            do {
              uVar9 = plVar14[-1];
              if ((uVar9 != plVar13[-1] || *plVar14 != *plVar13) &&
                 (func_0x000107c605b8(), (uVar9 & 1) == 0)) goto LAB_101f421cc;
              plVar13 = plVar13 + 2;
              plVar14 = plVar14 + 2;
              lVar12 = lVar12 + -1;
            } while (lVar12 != 0);
          }
        }
        lVar16 = lVar16 + 1;
        if (lVar16 == lVar15) {
          return 1;
        }
      } while( true );
    }
    uVar11 = 1;
  }
  else {
LAB_101f421cc:
    uVar11 = 0;
  }
  return uVar11;
}


