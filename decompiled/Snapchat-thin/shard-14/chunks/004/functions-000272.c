/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b1d8760; end: 10b1d8797;  */

void FUN_10b1d8760(long param_1)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x00010b1eae98();
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(unaff_x19 + 0x40) = 0;
  func_0x00010b1ecd0c();
  if ((bool)in_ZR) {
    FUN_10b1d8798();
  }
  return;
}



/* Entry: 10b1d8798; end: 10b1d87d7;  */

void FUN_10b1d8798(long param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010b1ec078();
  if ((bool)in_ZR) {
    func_0x00010b1ec250();
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}



/* Entry: 10b1d87d8; end: 10b1d87fb;  */

void FUN_10b1d87d8(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x000107c279a4();
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  return;
}



/* Entry: 10b1d87fc; end: 10b1d8827;  */

void FUN_10b1d87fc(void)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x00010b1eb398();
  uVar1 = *(undefined1 *)(unaff_x19 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  *(undefined1 *)(unaff_x20 + 0x30) = uVar1;
  return;
}



/* Entry: 10b1d8828; end: 10b1d8833;  */

void FUN_10b1d8828(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b1eafa8();
  func_0x00010b1eb65c();
  if ((param_1 != 0) && (func_0x000107c3141c(), (int)param_1 != 0)) {
    func_0x00010b1ed23c();
    FUN_10b1d88c4();
    func_0x00010b1eb918();
    FUN_10b1d8890();
    func_0x00010b1ed0e0();
    return;
  }
  lVar1 = unaff_x19 + 8;
  if (*(char *)(unaff_x19 + 0x40) == '\x01') {
    func_0x000107c279a4();
    *(undefined1 *)(lVar1 + 0x38) = 0;
  }
  return;
}



/* Entry: 10b1d8834; end: 10b1d888f;  */

void FUN_10b1d8834(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b1eb65c();
  if ((param_1 != 0) && (func_0x000107c3141c(), (int)param_1 != 0)) {
    func_0x00010b1ed23c();
    FUN_10b1d88c4();
    func_0x00010b1eb918();
    FUN_10b1d8890();
    func_0x00010b1ed0e0();
    return;
  }
  lVar1 = unaff_x19 + 8;
  if (*(char *)(unaff_x19 + 0x40) == '\x01') {
    func_0x000107c279a4();
    *(undefined1 *)(lVar1 + 0x38) = 0;
  }
  return;
}



/* Entry: 10b1d8890; end: 10b1d88c3;  */

long FUN_10b1d8890(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_10b1d87fc();
  }
  else {
    FUN_10b1d8798();
  }
  return param_1;
}



/* Entry: 10b1d88c4; end: 10b1d890f;  */

void FUN_10b1d88c4(undefined8 param_1,undefined1 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long unaff_x19;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (undefined4)param_1;
  func_0x00010b1eb720();
  func_0x00010b1eb06c();
  func_0x00010b1eb940();
  FUN_10b1d567c();
  *(undefined4 *)(unaff_x19 + 0x20) = uVar1;
  *(char *)(unaff_x19 + 0x24) = (char)uVar2;
  func_0x00010b1ebc20();
  func_0x000107c28930();
  *(ulong *)(unaff_x19 + 0x28) = CONCAT44(uVar2,uVar1);
  *(undefined1 *)(unaff_x19 + 0x30) = param_2;
  return;
}



/* Entry: 10b1d8910; end: 10b1d8937;  */

void FUN_10b1d8910(void)

{
  uint extraout_w8;
  
  func_0x00010b1eb8fc();
  if ((extraout_w8 & 1) == 0) {
    FUN_10b1d8938();
  }
  return;
}



/* Entry: 10b1d8938; end: 10b1d897b;  */

void FUN_10b1d8938(long param_1)

{
  long unaff_x21;
  
  func_0x00010b1ebf60();
  if (unaff_x21 != 0) {
    func_0x00010b1ec018();
    while (param_1 != unaff_x21) {
      param_1 = param_1 + -0x38;
      func_0x000107c279a4();
    }
    func_0x00010b1eb23c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1d897c; end: 10b1d89bb;  */

void FUN_10b1d897c(long param_1)

{
  undefined1 in_ZR;
  
  func_0x00010b1eada8();
  *(undefined1 *)(param_1 + 0x40) = 0;
  func_0x00010b1ecd0c();
  if ((bool)in_ZR) {
    func_0x00010b1ebec8();
    FUN_10b1d89bc();
    func_0x00010b1ee514();
  }
  return;
}



/* Entry: 10b1d89bc; end: 10b1d89e3;  */

void FUN_10b1d89bc(long param_1)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010b1ed9b8();
  uVar2 = *(undefined8 *)(unaff_x19 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(unaff_x19 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  return;
}



/* Entry: 10b1d89e4; end: 10b1d8a03;  */

void FUN_10b1d89e4(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x000107c279a4();
  }
  return;
}



/* Entry: 10b1d8a04; end: 10b1d8a27;  */

void FUN_10b1d8a04(void)

{
  func_0x00010b1eb198();
  FUN_10b1d8938();
  return;
}



/* Entry: 10b1d8a28; end: 10b1d8a7f;  */

long FUN_10b1d8a28(long param_1)

{
  long lVar1;
  undefined1 auStack_70 [64];
  undefined8 uStack_30;
  
  uStack_30 = 0;
  lVar1 = param_1;
  func_0x00010b1eb8c0();
  if (*(char *)(lVar1 + 0x48) != '\0') {
    FUN_10b1d87d8(param_1 + 0x10);
  }
  FUN_10b1d89e4((ulong)auStack_70 | 8);
  func_0x00010b1ebc2c();
  func_0x000107c31408();
  FUN_10b1d89e4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b1d8a80; end: 10b1d8a9f;  */

void FUN_10b1d8a80(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_10b1d8a04();
  }
  return;
}



/* Entry: 10b1d8aa0; end: 10b1d8ad7;  */

void FUN_10b1d8aa0(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x00010b1eb07c();
  if (!(bool)in_ZR) {
    func_0x00010b1eb014((&PTR_FUN_110cc3b08)[extraout_x8]);
  }
  func_0x00010b1eb924();
  return;
}



/* Entry: 10b1d8ad8; end: 10b1d8ae3;  */

void FUN_10b1d8ad8(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_10b1d8a04();
  }
  return;
}



/* Entry: 10b1d8ae4; end: 10b1d8b07;  */

void FUN_10b1d8ae4(void)

{
  func_0x00010b1eb198();
  func_0x00010b1d45bc();
  return;
}



/* Entry: 10b1d8b08; end: 10b1d8b13;  */

long * FUN_10b1d8b08(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x00010b1eafa8();
  func_0x00010b1eb648();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    if (unaff_x20 >> 0x3b != 0) {
      func_0x000104bd35f4();
      lVar2 = param_1[2];
      while (lVar2 != param_1[1]) {
        lVar2 = lVar2 + -0x20;
        param_1[2] = lVar2;
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    lVar2 = unaff_x20 << 5;
    __Znwm();
  }
  lVar1 = lVar2 + param_3 * 0x20;
  *unaff_x19 = lVar2;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = lVar2 + unaff_x20 * 0x20;
  return unaff_x19;
}



/* Entry: 10b1d8b14; end: 10b1d8b6b;  */

long * FUN_10b1d8b14(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x00010b1eb648();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    if (unaff_x20 >> 0x3b != 0) {
      func_0x000104bd35f4();
      lVar2 = param_1[2];
      while (lVar2 != param_1[1]) {
        lVar2 = lVar2 + -0x20;
        param_1[2] = lVar2;
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    lVar2 = unaff_x20 << 5;
    __Znwm();
  }
  lVar1 = lVar2 + param_3 * 0x20;
  *unaff_x19 = lVar2;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = lVar2 + unaff_x20 * 0x20;
  return unaff_x19;
}



/* Entry: 10b1d8b6c; end: 10b1d8bab;  */

long * FUN_10b1d8b6c(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x20;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b1d8bac; end: 10b1d8c4f;  */

void FUN_10b1d8bac(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  bool bVar3;
  long lVar4;
  ulong extraout_x8;
  ulong extraout_x9;
  long *unaff_x19;
  long lVar5;
  undefined8 unaff_x21;
  long lVar6;
  undefined8 *puVar7;
  
  func_0x00010b1ee670();
  func_0x00010b1ebbb0();
  puVar2 = *(undefined8 **)(param_1 + 8);
  bVar3 = *(undefined8 **)(param_1 + 0x10) <= puVar2;
  if (bVar3) {
    lVar5 = *unaff_x19;
    lVar6 = (long)puVar2 - lVar5 >> 3;
    if (lVar6 + 1U >> 0x3d != 0) {
      FUN_10b1d8c50();
LAB_10b1d8c4c:
      func_0x000104bd35f4();
      func_0x00010b1eafa8();
      func_0x00010b1eb65c();
      if (param_1 != 0) {
        unaff_x19[1] = param_1;
        __ZdlPv();
      }
      return;
    }
    func_0x00010b1eb7c8((long)*(undefined8 **)(param_1 + 0x10) - lVar5);
    uVar1 = extraout_x9;
    if (bVar3) {
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar1 >> 0x3d != 0) goto LAB_10b1d8c4c;
      lVar4 = uVar1 << 3;
      __Znwm();
    }
    puVar2 = (undefined8 *)(lVar4 + ((long)puVar2 - lVar5));
    puVar7 = puVar2 + 1;
    *puVar2 = unaff_x21;
    func_0x00010b1ecfc8();
    *unaff_x19 = (long)(puVar2 + -lVar6);
    unaff_x19[1] = (long)puVar7;
    unaff_x19[2] = lVar4 + uVar1 * 8;
    if (lVar5 != 0) {
      func_0x00010b1eb70c();
    }
  }
  else {
    puVar7 = puVar2 + 1;
    *puVar2 = unaff_x21;
  }
  unaff_x19[1] = (long)puVar7;
  return;
}



/* Entry: 10b1d8c50; end: 10b1d8c5b;  */

void FUN_10b1d8c50(long param_1)

{
  long unaff_x19;
  
  func_0x00010b1eafa8();
  func_0x00010b1eb65c();
  if (param_1 != 0) {
    *(long *)(unaff_x19 + 8) = param_1;
    __ZdlPv();
  }
  return;
}



/* Entry: 10b1d8c5c; end: 10b1d8c83;  */

void FUN_10b1d8c5c(long param_1)

{
  long unaff_x19;
  
  func_0x00010b1eb65c();
  if (param_1 != 0) {
    *(long *)(unaff_x19 + 8) = param_1;
    __ZdlPv();
  }
  return;
}



/* Entry: 10b1d8c84; end: 10b1d8ca3;  */

void FUN_10b1d8c84(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 10b1d8ca4; end: 10b1d8e7b;  */

undefined **
FUN_10b1d8ca4(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4,ulong param_5)

{
  undefined **ppuVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  int extraout_w8;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar7;
  undefined8 extraout_x9;
  long extraout_x9_00;
  int extraout_w11;
  undefined **unaff_x19;
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 uStack_258;
  undefined1 auStack_248 [96];
  undefined1 auStack_1e8 [296];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *apuStack_a0 [12];
  int iStack_40;
  undefined8 uStack_38;
  
  func_0x00010b1eaeac();
  uStack_38 = extraout_x8;
  func_0x00010bccbc98(auStack_248,param_3,extraout_x9);
  func_0x00010b1ec434();
  lVar7 = extraout_x8_00;
  if (extraout_x9_00 != 0) {
    do {
      func_0x00010b1eaf98();
      lVar7 = extraout_x8_01;
    } while (extraout_w11 != 0);
  }
  if ((param_5 & 1) != 0) {
    param_4 = *(code **)(*(long *)(*(long *)(lVar7 + 0x10) + ((long)param_5 >> 1)) +
                        ((ulong)param_4 & 0xffffffff));
  }
  (*param_4)(auStack_1e8);
  FUN_10b1d3ecc(&puStack_c0,auStack_1e8);
  uStack_268 = uStack_b8;
  puStack_270 = puStack_c0;
  uStack_260 = uStack_b0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  puStack_c0 = (undefined *)0x0;
  uStack_258 = 1;
  FUN_10b1d8ae4(&puStack_c0);
  FUN_10b1d4718(auStack_1e8);
  func_0x00010b1ebd30();
  func_0x00010b1ece08();
  func_0x00010b1ebf18();
  ppuVar6 = &puStack_270;
  FUN_10b1d4780(apuStack_a0);
  func_0x00010b1ed084();
  do {
    uVar3 = iStack_40 == 1;
    if ((bool)uVar3) {
      ppuVar5 = apuStack_a0;
      func_0x00010b1d47e4();
      func_0x00010b1ed704(iStack_40);
      uVar3 = extraout_w8 == 1;
      if (!(bool)uVar3) goto LAB_10b1d8da4;
      func_0x00010b1ecf68();
      FUN_10b1d481c();
    }
    else {
      func_0x00010b1ed704();
LAB_10b1d8da4:
      ppuVar6 = apuStack_a0;
      func_0x00010b1d4800();
      ppuVar5 = unaff_x19;
      FUN_10b1d47a8();
    }
    func_0x00010b1ed084();
    func_0x00010b1ebfa4(apuStack_a0);
    func_0x00010b1ec678();
    func_0x00010b1eaddc(uStack_38);
    if ((bool)uVar3) {
      return ppuVar5;
    }
    ___stack_chk_fail();
    func_0x00010b1ebfa4(apuStack_a0);
    func_0x00010b1ec678();
    do {
      func_0x00010b1eb598();
    } while ((int)ppuVar6 == 0);
    if ((int)ppuVar6 != 2) {
      func_0x00010b1ebbe8();
      bVar4 = ppuVar6 == (undefined **)0x0;
      bVar2 = ((ulong)ppuVar6 & 1) != 0;
      if ((ppuVar5 == (undefined **)FUN_10b1fb6fc) && (bVar4)) {
        return &PTR_DAT_110cc4e28;
      }
      ppuVar6 = &PTR_DAT_110cc4e88;
      if (ppuVar5 != (undefined **)FUN_10b1fbdd0 ||
          !bVar4 && (bVar2 || ppuVar5 != (undefined **)0x0)) {
        ppuVar6 = (undefined **)0x0;
      }
      ppuVar1 = &PTR_DAT_110cc4e58;
      if (ppuVar5 != (undefined **)FUN_10b1fbc04 ||
          !bVar4 && (bVar2 || ppuVar5 != (undefined **)0x0)) {
        ppuVar1 = ppuVar6;
      }
      return ppuVar1;
    }
    func_0x00010b1eb748();
    func_0x00010b1ed1f4(apuStack_a0);
    ___cxa_end_catch();
    ppuVar6 = ppuVar5;
  } while( true );
}



/* Entry: 10b1d8e7c; end: 10b1d8ef3;  */

undefined ** FUN_10b1d8e7c(code *param_1,ulong param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  bool bVar3;
  bool bVar4;
  
  bVar4 = param_2 == 0;
  bVar3 = (param_2 & 1) != 0;
  if ((param_1 == FUN_10b1fb6fc) && (bVar4)) {
    return &PTR_DAT_110cc4e28;
  }
  ppuVar1 = &PTR_DAT_110cc4e88;
  if (param_1 != FUN_10b1fbdd0 || !bVar4 && (bVar3 || param_1 != (code *)0x0)) {
    ppuVar1 = (undefined **)0x0;
  }
  ppuVar2 = &PTR_DAT_110cc4e58;
  if (param_1 != FUN_10b1fbc04 || !bVar4 && (bVar3 || param_1 != (code *)0x0)) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b1d8ef4; end: 10b1d8f53;  */

void FUN_10b1d8ef4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b1eb63c();
  *param_1 = *param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 1,param_2 + 1);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined4 *)(unaff_x20 + 0x28) = *(undefined4 *)(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  return;
}



/* Entry: 10b1d8f54; end: 10b1d8f57;  */

long FUN_10b1d8f54(long param_1)

{
  long lVar1;
  long extraout_x8;
  long *plVar2;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  long alStack_40 [2];
  
  func_0x00010b1ed474(&PTR_FUN_110cc3b70);
  if (extraout_x8 != 0) {
    func_0x00010b1eb3d4();
    alStack_40[0] = 0;
    alStack_40[1] = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    func_0x00010b1ed758(auStack_50);
    func_0x0001052a6eb0();
    func_0x0001052a6f04(alStack_40,auStack_50);
    func_0x00010b1edf24();
    func_0x0001052a6f94(&uStack_60);
    lVar1 = alStack_40[0];
    __ZNSt3__15mutex4lockEv(alStack_40[0] + 0x40);
    __ZNSt13exception_ptraSERKS_(alStack_40[0] + 0x80,auStack_68);
    plVar2 = *(long **)(alStack_40[0] + 0x88);
    *(undefined8 *)(alStack_40[0] + 0x88) = 0;
    __ZNSt3__15mutex6unlockEv(lVar1 + 0x40);
    if (plVar2 == (long *)0x0) {
      __ZNSt3__118condition_variable10notify_allEv(alStack_40[0] + 0x10);
    }
    else {
      func_0x00010b1edac4(*(undefined8 *)(*plVar2 + 0x10));
      func_0x00010b1eb140();
    }
    func_0x0001052a6f94(alStack_40);
    func_0x00010b1ec73c();
    func_0x00010b1ec5dc();
    func_0x00010b1ede74();
  }
  func_0x0001052a6f94(param_1 + 0x18);
  func_0x0001052a6f94();
  return param_1;
}



/* Entry: 10b1d8f58; end: 10b1d8f6b;  */

void FUN_10b1d8f58(void)

{
  FUN_10b1d8fec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1d8f6c; end: 10b1d8f6f;  */

long FUN_10b1d8f6c(long param_1)

{
  long lVar1;
  long extraout_x8;
  long *plVar2;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  long alStack_40 [2];
  
  func_0x00010b1ed474(&PTR_FUN_110cc3b70);
  if (extraout_x8 != 0) {
    func_0x00010b1eb3d4();
    alStack_40[0] = 0;
    alStack_40[1] = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    func_0x00010b1ed758(auStack_50);
    func_0x0001052a6eb0();
    func_0x0001052a6f04(alStack_40,auStack_50);
    func_0x00010b1edf24();
    func_0x0001052a6f94(&uStack_60);
    lVar1 = alStack_40[0];
    __ZNSt3__15mutex4lockEv(alStack_40[0] + 0x40);
    __ZNSt13exception_ptraSERKS_(alStack_40[0] + 0x80,auStack_68);
    plVar2 = *(long **)(alStack_40[0] + 0x88);
    *(undefined8 *)(alStack_40[0] + 0x88) = 0;
    __ZNSt3__15mutex6unlockEv(lVar1 + 0x40);
    if (plVar2 == (long *)0x0) {
      __ZNSt3__118condition_variable10notify_allEv(alStack_40[0] + 0x10);
    }
    else {
      func_0x00010b1edac4(*(undefined8 *)(*plVar2 + 0x10));
      func_0x00010b1eb140();
    }
    func_0x0001052a6f94(alStack_40);
    func_0x00010b1ec73c();
    func_0x00010b1ec5dc();
    func_0x00010b1ede74();
  }
  func_0x0001052a6f94(param_1 + 0x18);
  func_0x0001052a6f94();
  return param_1;
}



/* Entry: 10b1d8f70; end: 10b1d8f83;  */

void FUN_10b1d8f70(void)

{
  FUN_10b1d8fec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1d8f84; end: 10b1d8f87;  */

void FUN_10b1d8f84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc3b90;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1d8f88; end: 10b1d8f9b;  */

void FUN_10b1d8f88(void)

{
  FUN_10b1d8fdc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1d8f9c; end: 10b1d8fdb;  */

void FUN_10b1d8f9c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (lVar1 != 0) {
    func_0x00010b1eb318();
  }
  __ZNSt13exception_ptrD1Ev(param_1 + 0x98);
  __ZNSt3__15mutexD1Ev(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__118condition_variableD1Ev_110346608)(param_1 + 0x28);
  return;
}



/* Entry: 10b1d8fdc; end: 10b1d8feb;  */

void FUN_10b1d8fdc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1d8fec; end: 10b1d90ff;  */

long FUN_10b1d8fec(long param_1)

{
  long lVar1;
  long extraout_x8;
  long *plVar2;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  long alStack_40 [2];
  
  func_0x00010b1ed474(&PTR_FUN_110cc3b70);
  if (extraout_x8 != 0) {
    func_0x00010b1eb3d4();
    alStack_40[0] = 0;
    alStack_40[1] = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    func_0x00010b1ed758(auStack_50);
    func_0x0001052a6eb0();
    func_0x0001052a6f04(alStack_40,auStack_50);
    func_0x00010b1edf24();
    func_0x0001052a6f94(&uStack_60);
    lVar1 = alStack_40[0];
    __ZNSt3__15mutex4lockEv(alStack_40[0] + 0x40);
    __ZNSt13exception_ptraSERKS_(alStack_40[0] + 0x80,auStack_68);
    plVar2 = *(long **)(alStack_40[0] + 0x88);
    *(undefined8 *)(alStack_40[0] + 0x88) = 0;
    __ZNSt3__15mutex6unlockEv(lVar1 + 0x40);
    if (plVar2 == (long *)0x0) {
      __ZNSt3__118condition_variable10notify_allEv(alStack_40[0] + 0x10);
    }
    else {
      func_0x00010b1edac4(*(undefined8 *)(*plVar2 + 0x10));
      func_0x00010b1eb140();
    }
    func_0x0001052a6f94(alStack_40);
    func_0x00010b1ec73c();
    func_0x00010b1ec5dc();
    func_0x00010b1ede74();
  }
  func_0x0001052a6f94(param_1 + 0x18);
  func_0x0001052a6f94();
  return param_1;
}



/* Entry: 10b1d9100; end: 10b1d92cb;  */

void FUN_10b1d9100(long param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_38;
  
  func_0x00010b1eaf00();
  plVar6 = *(long **)(param_1 + 0x10);
  lVar4 = *plVar6;
  FUN_10b1bac30(lVar4);
  FUN_10b1c6774(lVar4,plVar6 + 1,0,0,plVar6[4],1);
  uVar5 = *(undefined8 *)(lVar4 + 0x238);
  FUN_10b12983c(&puStack_60,(int)plVar6[5]);
  func_0x00010b1eb654(auStack_88,&puStack_60);
  func_0x00010b1eb5b4(uVar5,0x9a,auStack_88);
  func_0x00010b1eb750();
  func_0x00010b1eb5ac(&puStack_60);
  uVar5 = *(undefined8 *)(lVar4 + 0x238);
  FUN_10b12983c(&puStack_60,(int)plVar6[5]);
  func_0x00010b1eb654(auStack_88,&puStack_60);
  uVar3 = 0;
  FUN_10b11ef50(uVar5,0x9a,auStack_88,plVar6[4] / 0x400);
  func_0x00010b1eb750();
  func_0x00010b1eb5ac(&puStack_60);
  func_0x00010b1ee07c();
  uVar1 = (uVar3 & 1) == 0;
  if ((bool)uVar1) {
    uVar5 = 0xffffffffffffffff;
  }
  puStack_60 = (undefined8 *)0x0;
  uStack_58 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  func_0x0001052a6eb0(auStack_88,plVar6 + 7,&uStack_70);
  func_0x0001052a6f04(&puStack_60,auStack_88);
  func_0x0001052a6f94(auStack_88);
  func_0x0001052a6f94(&uStack_70);
  puVar2 = puStack_60;
  __ZNSt3__15mutex4lockEv(puStack_60 + 8);
  *puStack_60 = uVar5;
  *(undefined1 *)(puStack_60 + 1) = 1;
  lVar4 = puStack_60[0x11];
  puStack_60[0x11] = 0;
  puVar2 = puVar2 + 8;
  __ZNSt3__15mutex6unlockEv();
  if (lVar4 == 0) {
    puVar2 = puStack_60 + 2;
    __ZNSt3__118condition_variable10notify_allEv();
  }
  else {
    func_0x00010b1ebe1c();
    func_0x00010b1ebbe0();
    func_0x00010b1eb174();
  }
  func_0x00010b1edf24();
  func_0x00010b1eaddc(uStack_38);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x00010b1eb174();
    func_0x00010b1edf24();
    func_0x00010b1eb590();
    if (puVar2[1] == 0) {
      return;
    }
    func_0x00010b1d8f2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1d92cc; end: 10b1d92eb;  */

void FUN_10b1d92cc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010b1d8f2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1d92ec; end: 10b1d92ef;  */

void FUN_10b1d92ec(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b1d92f0; end: 10b1d9313;  */

void FUN_10b1d92f0(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x000107c27b5c();
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}



/* Entry: 10b1d9314; end: 10b1d935f;  */

void FUN_10b1d9314(long *param_1)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  func_0x00010b1eb63c();
  if (*param_1 != 0) {
    FUN_10b128718();
    __ZdlPv(*unaff_x20);
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
    unaff_x20[2] = 0;
  }
  uVar1 = *unaff_x19;
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar1;
  unaff_x20[2] = unaff_x19[2];
  func_0x00010b1ec2c8();
  return;
}



/* Entry: 10b1d9360; end: 10b1d936b;  */

void FUN_10b1d9360(long param_1)

{
  ulong extraout_x8;
  undefined8 *unaff_x19;
  undefined1 auStack_48 [24];
  
  func_0x00010b1eafa8();
  func_0x00010b1eb65c();
  if ((param_1 == 0) || (func_0x000107c3141c(), (int)param_1 == 0)) {
    if (*(char *)(unaff_x19 + 4) == '\x01') {
      *(undefined1 *)(unaff_x19 + 4) = 0;
    }
  }
  else {
    func_0x00010b1d93c0(auStack_48,*unaff_x19);
    func_0x00010b1ed6a4();
    if ((extraout_x8 & 1) == 0) {
      func_0x00010b1ed80c();
    }
  }
  return;
}



/* Entry: 10b1d936c; end: 10b1d9417;  */

void FUN_10b1d936c(long param_1)

{
  ulong extraout_x8;
  undefined8 *unaff_x19;
  undefined1 auStack_38 [24];
  
  func_0x00010b1eb65c();
  if ((param_1 == 0) || (func_0x000107c3141c(), (int)param_1 == 0)) {
    if (*(char *)(unaff_x19 + 4) == '\x01') {
      *(undefined1 *)(unaff_x19 + 4) = 0;
    }
  }
  else {
    func_0x00010b1d93c0(auStack_38,*unaff_x19);
    func_0x00010b1ed6a4();
    if ((extraout_x8 & 1) == 0) {
      func_0x00010b1ed80c();
    }
  }
  return;
}



/* Entry: 10b1d9418; end: 10b1d942b;  */

void FUN_10b1d9418(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1d942c; end: 10b1d945b;  */

long FUN_10b1d942c(long param_1)

{
  *(undefined1 *)(param_1 + 0x28) = 0;
  func_0x00010b1eb490();
  func_0x000107c31408();
  return param_1;
}



/* Entry: 10b1d945c; end: 10b1d9483;  */

void FUN_10b1d945c(void)

{
  undefined1 in_ZR;
  
  func_0x00010b1eb60c();
  if ((bool)in_ZR) {
    FUN_10b1d9418();
  }
  return;
}



/* Entry: 10b1d9484; end: 10b1d94bb;  */

void FUN_10b1d9484(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x00010b1eb07c();
  if (!(bool)in_ZR) {
    func_0x00010b1eb014((&PTR_FUN_110cc3be8)[extraout_x8]);
  }
  func_0x00010b1eb924();
  return;
}



/* Entry: 10b1d94bc; end: 10b1d94c7;  */

void FUN_10b1d94bc(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  
  func_0x00010b1eb60c(param_2);
  if ((bool)in_ZR) {
    FUN_10b1d9418();
  }
  return;
}



/* Entry: 10b1d94c8; end: 10b1d94d3;  */

void FUN_10b1d94c8(long param_1)

{
  ulong extraout_x8;
  undefined8 *unaff_x19;
  undefined1 auStack_50 [32];
  
  func_0x00010b1eafa8();
  func_0x00010b1eb65c();
  if ((param_1 == 0) || (func_0x000107c3141c(), (int)param_1 == 0)) {
    if (*(char *)(unaff_x19 + 5) == '\x01') {
      *(undefined1 *)(unaff_x19 + 5) = 0;
    }
  }
  else {
    func_0x00010b1d9528(auStack_50,*unaff_x19);
    func_0x00010b1ee584();
    if ((extraout_x8 & 1) == 0) {
      func_0x00010b1ec94c();
    }
  }
  return;
}



/* Entry: 10b1d94d4; end: 10b1d959f;  */

void FUN_10b1d94d4(long param_1)

{
  ulong extraout_x8;
  undefined8 *unaff_x19;
  undefined1 auStack_40 [32];
  
  func_0x00010b1eb65c();
  if ((param_1 == 0) || (func_0x000107c3141c(), (int)param_1 == 0)) {
    if (*(char *)(unaff_x19 + 5) == '\x01') {
      *(undefined1 *)(unaff_x19 + 5) = 0;
    }
  }
  else {
    func_0x00010b1d9528(auStack_40,*unaff_x19);
    func_0x00010b1ee584();
    if ((extraout_x8 & 1) == 0) {
      func_0x00010b1ec94c();
    }
  }
  return;
}



/* Entry: 10b1d95a0; end: 10b1d95b3;  */

void FUN_10b1d95a0(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1d95b4; end: 10b1d95e3;  */

long FUN_10b1d95b4(long param_1)

{
  *(undefined8 *)(param_1 + 0x29) = 0;
  *(undefined8 *)(param_1 + 0x21) = 0;
  func_0x00010b1eb490();
  func_0x000107c31408();
  return param_1;
}



/* Entry: 10b1d95e4; end: 10b1d960b;  */

void FUN_10b1d95e4(void)

{
  undefined1 in_ZR;
  
  func_0x00010b1eb60c();
  if ((bool)in_ZR) {
    FUN_10b1d95a0();
  }
  return;
}



/* Entry: 10b1d960c; end: 10b1d9643;  */

void FUN_10b1d960c(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x00010b1eb07c();
  if (!(bool)in_ZR) {
    func_0x00010b1eb014((&PTR_FUN_110cc3bf8)[extraout_x8]);
  }
  func_0x00010b1eb924();
  return;
}



/* Entry: 10b1d9644; end: 10b1d964f;  */

void FUN_10b1d9644(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  
  func_0x00010b1eb60c(param_2);
  if ((bool)in_ZR) {
    FUN_10b1d95a0();
  }
  return;
}



/* Entry: 10b1d9650; end: 10b1d9727;  */

void FUN_10b1d9650(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 in_CY;
  long lVar3;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar4;
  ulong extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *puVar5;
  ulong extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  long *unaff_x19;
  long *plVar6;
  long lVar7;
  long unaff_x22;
  undefined8 unaff_x23;
  long lVar8;
  long lVar9;
  long unaff_x30;
  undefined1 auStack_c0 [24];
  undefined1 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  
  func_0x00010b1ee670();
  func_0x00010b1ee598();
  func_0x00010b1ed574();
  if (!(bool)in_CY) {
    *extraout_x8 = unaff_x23;
    extraout_x8[1] = unaff_x22;
    puVar4 = extraout_x8;
    if (unaff_x22 != 0) {
      do {
        func_0x00010b1eaf98();
        puVar4 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    puVar4 = puVar4 + 2;
LAB_10b1d9714:
    unaff_x19[1] = (long)puVar4;
    return;
  }
  plVar6 = (long *)*unaff_x19;
  lVar8 = (long)extraout_x8 - (long)plVar6 >> 4;
  if (lVar8 + 1U >> 0x3c == 0) {
    func_0x00010b1ec290();
    uVar1 = extraout_x8_01;
    if (0x7fffffffffffffef < extraout_x9) {
      uVar1 = 0xfffffffffffffff;
    }
    if (uVar1 >> 0x3c == 0) {
      lVar3 = uVar1 << 4;
      __Znwm();
      puVar5 = (undefined8 *)(lVar3 + ((long)extraout_x8 - (long)plVar6));
      *puVar5 = unaff_x23;
      puVar5[1] = unaff_x22;
      if (unaff_x22 != 0) {
        do {
          func_0x00010b1eaf98();
        } while (extraout_w11_00 != 0);
        plVar6 = (long *)*unaff_x19;
        lVar8 = unaff_x19[1] - (long)plVar6 >> 4;
        puVar5 = extraout_x8_02;
      }
      puVar4 = puVar5 + 2;
      func_0x00010b1ebb40();
      *unaff_x19 = (long)(puVar5 + lVar8 * -2);
      unaff_x19[1] = (long)puVar4;
      unaff_x19[2] = lVar3 + uVar1 * 0x10;
      if (plVar6 != (long *)0x0) {
        func_0x00010b1eb70c();
      }
      goto LAB_10b1d9714;
    }
  }
  else {
    FUN_10b1d9728();
  }
  func_0x000104bd35f4();
  func_0x00010b1eafa8();
  func_0x00010b1eafa8();
  func_0x00010b1eb648();
  param_1[3] = 0;
  param_1[4] = unaff_x30;
  if (param_2 != 0) {
    if ((long *)0x66666666666666 < plVar6) {
      func_0x000104bd35f4();
      lStack_90 = lVar8;
      func_0x00010b1eb63c();
      lVar7 = *param_1;
      lVar2 = param_1[1];
      lVar9 = *(long *)(param_2 + 8) + ((lVar2 - lVar7) / -0x280) * 0x280;
      lStack_a0 = lVar9;
      lStack_98 = lVar9;
      func_0x00010b1ebc7c();
      uStack_a8 = 0;
      lVar3 = lVar9;
      for (lVar8 = lVar7; lVar8 != lVar2; lVar8 = lVar8 + 0x280) {
        FUN_10b12394c(lVar3,lVar8);
        *(undefined8 *)(lVar3 + 0x278) = *(undefined8 *)(lVar8 + 0x278);
        lVar3 = lStack_98 + 0x280;
        lStack_98 = lVar3;
      }
      func_0x00010b1ebed4();
      for (; lVar7 != lVar2; lVar7 = lVar7 + 0x280) {
        func_0x00010b121af0(lVar7);
      }
      func_0x00010b1d98a4(auStack_c0);
      unaff_x19[1] = lVar9;
      plVar6[1] = *plVar6;
      *plVar6 = unaff_x19[1];
      func_0x00010b1eae3c();
      return;
    }
    __Znwm((long)plVar6 * 0x280);
  }
  func_0x00010b1ed674(0x280);
  return;
}



/* Entry: 10b1d9728; end: 10b1d973f;  */

void FUN_10b1d9728(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_c0 [24];
  undefined1 uStack_a8;
  long lStack_a0;
  long lStack_98;
  
  func_0x00010b1eafa8();
  func_0x00010b1eafa8();
  func_0x00010b1eb648();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 != 0) {
    if ((undefined8 *)0x66666666666666 < unaff_x20) {
      func_0x000104bd35f4();
      func_0x00010b1eb63c();
      lVar3 = *param_1;
      lVar1 = param_1[1];
      lVar5 = *(long *)(param_2 + 8) + ((lVar1 - lVar3) / -0x280) * 0x280;
      lStack_a0 = lVar5;
      lStack_98 = lVar5;
      func_0x00010b1ebc7c();
      uStack_a8 = 0;
      lVar2 = lVar5;
      for (lVar4 = lVar3; lVar4 != lVar1; lVar4 = lVar4 + 0x280) {
        FUN_10b12394c(lVar2,lVar4);
        *(undefined8 *)(lVar2 + 0x278) = *(undefined8 *)(lVar4 + 0x278);
        lVar2 = lStack_98 + 0x280;
        lStack_98 = lVar2;
      }
      func_0x00010b1ebed4();
      for (; lVar3 != lVar1; lVar3 = lVar3 + 0x280) {
        func_0x00010b121af0(lVar3);
      }
      func_0x00010b1d98a4(auStack_c0);
      *(long *)(unaff_x19 + 8) = lVar5;
      unaff_x20[1] = *unaff_x20;
      *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
      func_0x00010b1eae3c();
      return;
    }
    __Znwm((long)unaff_x20 * 0x280);
  }
  func_0x00010b1ed674(0x280);
  return;
}



/* Entry: 10b1d9740; end: 10b1d979b;  */

void FUN_10b1d9740(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_a0 [24];
  undefined1 uStack_88;
  long lStack_80;
  long lStack_78;
  
  func_0x00010b1eb648();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 != 0) {
    if ((undefined8 *)0x66666666666666 < unaff_x20) {
      func_0x000104bd35f4();
      func_0x00010b1eb63c();
      lVar3 = *param_1;
      lVar1 = param_1[1];
      lVar5 = *(long *)(param_2 + 8) + ((lVar1 - lVar3) / -0x280) * 0x280;
      lStack_80 = lVar5;
      lStack_78 = lVar5;
      func_0x00010b1ebc7c();
      uStack_88 = 0;
      lVar2 = lVar5;
      for (lVar4 = lVar3; lVar4 != lVar1; lVar4 = lVar4 + 0x280) {
        FUN_10b12394c(lVar2,lVar4);
        *(undefined8 *)(lVar2 + 0x278) = *(undefined8 *)(lVar4 + 0x278);
        lVar2 = lStack_78 + 0x280;
        lStack_78 = lVar2;
      }
      func_0x00010b1ebed4();
      for (; lVar3 != lVar1; lVar3 = lVar3 + 0x280) {
        func_0x00010b121af0(lVar3);
      }
      func_0x00010b1d98a4(auStack_a0);
      *(long *)(unaff_x19 + 8) = lVar5;
      unaff_x20[1] = *unaff_x20;
      *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
      func_0x00010b1eae3c();
      return;
    }
    __Znwm((long)unaff_x20 * 0x280);
  }
  func_0x00010b1ed674(0x280);
  return;
}



/* Entry: 10b1d979c; end: 10b1d9863;  */

void FUN_10b1d979c(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_70 [24];
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x00010b1eb63c();
  lVar3 = *param_1;
  lVar1 = param_1[1];
  lVar5 = *(long *)(param_2 + 8) + ((lVar1 - lVar3) / -0x280) * 0x280;
  lStack_50 = lVar5;
  lStack_48 = lVar5;
  func_0x00010b1ebc7c();
  uStack_58 = 0;
  lVar2 = lVar5;
  for (lVar4 = lVar3; lVar4 != lVar1; lVar4 = lVar4 + 0x280) {
    FUN_10b12394c(lVar2,lVar4);
    *(undefined8 *)(lVar2 + 0x278) = *(undefined8 *)(lVar4 + 0x278);
    lVar2 = lStack_48 + 0x280;
    lStack_48 = lVar2;
  }
  func_0x00010b1ebed4();
  for (; lVar3 != lVar1; lVar3 = lVar3 + 0x280) {
    func_0x00010b121af0(lVar3);
  }
  func_0x00010b1d98a4(auStack_70);
  *(long *)(unaff_x19 + 8) = lVar5;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010b1eae3c();
  return;
}



/* Entry: 10b1d9864; end: 10b1d9907;  */

void FUN_10b1d9864(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long *unaff_x19;
  
  func_0x00010b1ed388();
  while (func_0x00010b1ecd28(), !(bool)in_ZR) {
    unaff_x19[2] = extraout_x8 + -0x280;
    func_0x00010b121af0();
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10b1d9908; end: 10b1d9d7f;  */

void FUN_10b1d9908(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  ulong uVar5;
  ulong uVar6;
  ulong unaff_x19;
  ulong unaff_x20;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined1 auStack_288 [632];
  long lStack_10;
  
  func_0x00010b1ec024();
  func_0x00010b1eb63c();
  do {
LAB_10b1d9944:
    while( true ) {
      uVar6 = unaff_x19 - unaff_x20;
      uVar10 = (long)uVar6 / 0x280;
      cVar3 = SBORROW8(uVar10,5);
      cVar4 = (long)(uVar10 - 5) < 0;
      switch(uVar10) {
      case 0:
      case 1:
        goto FUN_10b1ead00;
      case 2:
        func_0x00010b1ed65c(*(undefined8 *)(unaff_x19 - 8));
        if (cVar4 == cVar3) {
          return;
        }
        func_0x00010b1ebebc();
        FUN_10b1da284();
        return;
      case 3:
        func_0x00010b1edee0(unaff_x20,unaff_x20 + 0x280);
        return;
      case 4:
        func_0x00010b1d9e08(unaff_x20,unaff_x20 + 0x280,unaff_x20 + 0x500,unaff_x19 - 0x280);
        return;
      case 5:
        FUN_10b1d9e68(unaff_x20,unaff_x20 + 0x280,unaff_x20 + 0x500,unaff_x20 + 0x780,
                      unaff_x19 - 0x280);
        goto FUN_10b1ead00;
      }
      if ((long)uVar6 < 0x3c00) {
        if ((param_4 & 1) == 0) {
          if (unaff_x20 == unaff_x19) {
            return;
          }
          while( true ) {
            uVar10 = unaff_x20;
            unaff_x20 = uVar10 + 0x280;
            cVar3 = SBORROW8(unaff_x20,unaff_x19);
            cVar4 = (long)(unaff_x20 - unaff_x19) < 0;
            if (unaff_x20 == unaff_x19) break;
            func_0x00010b1ed620(*(undefined8 *)(uVar10 + 0x4f8));
            if (cVar4 != cVar3) {
              func_0x00010b1ec744();
              do {
                uVar6 = uVar10;
                FUN_10b1da2d0(uVar6 + 0x280,uVar6);
                uVar10 = uVar6 - 0x280;
              } while (*(long *)(uVar6 - 8) < lStack_10);
              FUN_10b1da2d0(uVar6,auStack_288);
              func_0x00010b1ecae8();
            }
          }
          return;
        }
        if (unaff_x20 == unaff_x19) {
          return;
        }
        lVar11 = 0;
        uVar10 = unaff_x20;
        goto LAB_10b1d9c6c;
      }
      if (param_3 == 0) {
        func_0x00010b1ebdbc();
        FUN_10b1d9ef8();
        return;
      }
      lVar11 = unaff_x20 + (uVar10 >> 1) * 0x280;
      cVar3 = SBORROW8(uVar6,0x14000);
      cVar4 = (long)(uVar6 - 0x14000) < 0;
      if (uVar6 < 0x14001) {
        func_0x00010b1edee0(lVar11,unaff_x20);
      }
      else {
        func_0x00010b1ee380();
        func_0x00010b1edee0();
        FUN_10b1d9d80(unaff_x20 + 0x280,lVar11 + -0x280,unaff_x19 - 0x500);
        FUN_10b1d9d80(unaff_x20 + 0x500,lVar11 + 0x280,unaff_x19 - 0x780);
        FUN_10b1d9d80(lVar11 + -0x280,lVar11,lVar11 + 0x280);
        func_0x00010b1ee380();
        FUN_10b1da284();
      }
      param_3 = param_3 + -1;
      if (((param_4 & 1) != 0) ||
         (func_0x00010b1ed65c(*(undefined8 *)(unaff_x20 - 8)), cVar4 != cVar3)) break;
      func_0x00010b1ec744();
      uVar10 = unaff_x20;
      if (*(long *)(unaff_x19 - 8) < lStack_10) {
        do {
          uVar6 = uVar10 + 0x280;
          plVar1 = (long *)(uVar10 + 0x4f8);
          uVar10 = uVar6;
        } while (lStack_10 <= *plVar1);
      }
      else {
        do {
          uVar6 = uVar10 + 0x280;
          if (unaff_x19 <= uVar6) break;
          plVar1 = (long *)(uVar10 + 0x4f8);
          uVar10 = uVar6;
        } while (lStack_10 <= *plVar1);
      }
      uVar10 = unaff_x19;
      uVar9 = unaff_x19;
      if (uVar6 < unaff_x19) {
        do {
          uVar9 = uVar10 - 0x280;
          plVar1 = (long *)(uVar10 - 8);
          uVar10 = uVar9;
        } while (*plVar1 < lStack_10);
      }
      while (uVar6 < uVar9) {
        FUN_10b1da284(uVar6,uVar9);
        do {
          plVar1 = (long *)(uVar6 + 0x4f8);
          uVar6 = uVar6 + 0x280;
        } while (lStack_10 <= *plVar1);
        do {
          plVar1 = (long *)(uVar9 - 8);
          uVar9 = uVar9 - 0x280;
        } while (*plVar1 < lStack_10);
      }
      uVar10 = uVar6 - 0x280;
      if (unaff_x20 != uVar10) {
        FUN_10b1da2d0(unaff_x20,uVar10);
      }
      FUN_10b1da2d0(uVar10,auStack_288);
      func_0x00010b1ecae8();
      param_4 = 0;
      unaff_x20 = uVar6;
    }
    func_0x00010b1ec744();
    lVar11 = 0;
    do {
      lVar7 = unaff_x20 + lVar11;
      lVar11 = lVar11 + 0x280;
    } while (lStack_10 < *(long *)(lVar7 + 0x4f8));
    uVar6 = unaff_x20 + lVar11;
    uVar9 = unaff_x19;
    uVar10 = uVar6;
    if (lVar11 == 0x280) {
      do {
        uVar8 = uVar9;
        if (uVar9 <= uVar6) break;
        uVar8 = uVar9 - 0x280;
        plVar1 = (long *)(uVar9 - 8);
        uVar9 = uVar8;
      } while (*plVar1 <= lStack_10);
    }
    else {
      do {
        uVar8 = uVar9 - 0x280;
        plVar1 = (long *)(uVar9 - 8);
        uVar9 = uVar8;
      } while (*plVar1 <= lStack_10);
    }
    while (uVar10 < uVar8) {
      FUN_10b1da284(uVar10,uVar8);
      do {
        plVar1 = (long *)(uVar10 + 0x4f8);
        uVar10 = uVar10 + 0x280;
      } while (lStack_10 < *plVar1);
      do {
        plVar1 = (long *)(uVar8 - 8);
        uVar8 = uVar8 - 0x280;
      } while (*plVar1 <= lStack_10);
    }
    uVar8 = uVar10 - 0x280;
    if (unaff_x20 != uVar8) {
      func_0x00010b1ecf5c();
      FUN_10b1da2d0();
    }
    uVar5 = uVar8;
    FUN_10b1da2d0(uVar8,auStack_288);
    func_0x00010b1ecae8();
    if (uVar6 < uVar9) goto LAB_10b1d9ae0;
    func_0x00010b1ecf5c();
    FUN_10b1da0e4();
    uVar6 = uVar10;
    FUN_10b1da0e4(uVar10,unaff_x19);
    if ((int)uVar6 == 0) goto code_r0x00010b1d9adc;
    unaff_x19 = uVar8;
    if ((uVar5 & 1) != 0) {
FUN_10b1ead00:
      return;
    }
  } while( true );
LAB_10b1d9c6c:
  if (uVar10 + 0x280 == unaff_x19) {
    return;
  }
  if (*(long *)(uVar10 + 0x278) < *(long *)(uVar10 + 0x4f8)) {
    func_0x00010b1edec8(auStack_288);
    lVar7 = lVar11;
    do {
      FUN_10b1da2d0(unaff_x20 + lVar7 + 0x280);
      uVar6 = unaff_x20;
      if (lVar7 == 0) goto LAB_10b1d9ccc;
      lVar2 = unaff_x20 + lVar7;
      lVar7 = lVar7 + -0x280;
    } while (*(long *)(lVar2 + -8) < lStack_10);
    uVar6 = unaff_x20 + lVar7 + 0x280;
LAB_10b1d9ccc:
    FUN_10b1da2d0(uVar6,auStack_288);
    func_0x00010b1ecae8();
  }
  lVar11 = lVar11 + 0x280;
  uVar10 = uVar10 + 0x280;
  goto LAB_10b1d9c6c;
code_r0x00010b1d9adc:
  unaff_x20 = uVar10;
  if ((uVar5 & 1) == 0) {
LAB_10b1d9ae0:
    func_0x00010b1ecf5c();
    FUN_10b1d9908();
    param_4 = 0;
    unaff_x20 = uVar10;
  }
  goto LAB_10b1d9944;
}



/* Entry: 10b1d9d80; end: 10b1d9e67;  */

void FUN_10b1d9d80(long param_1,long param_2,long param_3)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  
  lVar4 = param_3;
  func_0x00010b1ecb30();
  lVar3 = *(long *)(param_2 + 0x278);
  lVar4 = *(long *)(lVar4 + 0x278);
  if (*(long *)(param_1 + 0x278) < lVar3) {
    cVar1 = SBORROW8(lVar3,lVar4);
    cVar2 = lVar3 - lVar4 < 0;
    if (lVar4 <= lVar3) {
      FUN_10b1da284();
      func_0x00010b1ee244(*(undefined8 *)(param_3 + 0x278));
      if (cVar2 == cVar1) {
        return;
      }
    }
code_r0x00010b1da284:
    func_0x00010b1eb63c();
    func_0x00010b1ee084();
    func_0x00010b1ebdbc();
    FUN_10b1da2d0();
    func_0x00010b1eb714();
    FUN_10b1da2d0();
    func_0x00010b1ebb80();
    return;
  }
  cVar1 = SBORROW8(lVar3,lVar4);
  cVar2 = lVar3 - lVar4 < 0;
  if (lVar3 < lVar4) {
    func_0x00010b1ec2e0();
    FUN_10b1da284();
    func_0x00010b1ed620(*(undefined8 *)(unaff_x19 + 0x278));
    if (cVar2 != cVar1) {
      func_0x00010b1ec8b0();
      goto code_r0x00010b1da284;
    }
  }
  return;
}



/* Entry: 10b1d9e68; end: 10b1d9ef7;  */

void FUN_10b1d9e68(void)

{
  char cVar1;
  char cVar2;
  long in_x4;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  
  func_0x00010b1eb324();
  func_0x00010b1d9e08();
  lVar3 = *(long *)(in_x4 + 0x278);
  lVar4 = *(long *)(unaff_x22 + 0x278);
  cVar1 = SBORROW8(lVar4,lVar3);
  cVar2 = lVar4 - lVar3 < 0;
  if (lVar4 < lVar3) {
    FUN_10b1da284();
    func_0x00010b1ed620(*(undefined8 *)(unaff_x22 + 0x278));
    if (cVar2 != cVar1) {
      func_0x00010b1ebdc8();
      FUN_10b1da284();
      func_0x00010b1ee244(*(undefined8 *)(unaff_x21 + 0x278));
      if (cVar2 != cVar1) {
        func_0x00010b1ec7a0();
        FUN_10b1da284();
        func_0x00010b1ed65c(*(undefined8 *)(unaff_x19 + 0x278));
        if (cVar2 != cVar1) {
          func_0x00010b1ebdbc();
          func_0x00010b1eb63c();
          func_0x00010b1ee084();
          func_0x00010b1ebdbc();
          FUN_10b1da2d0();
          func_0x00010b1eb714();
          FUN_10b1da2d0();
          func_0x00010b1ebb80();
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 10b1d9ef8; end: 10b1da0e3;  */

void FUN_10b1d9ef8(long param_1,long param_2,long param_3)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x9;
  long extraout_x10;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_280 [632];
  long lStack_8;
  
  func_0x00010b1ec024();
  if (param_1 != param_2) {
    func_0x00010b1eb63c();
    lVar4 = (param_2 - param_1) / 0x280;
    lVar3 = unaff_x19;
    if (0x280 < param_2 - param_1) {
      uVar5 = lVar4 - 2U >> 1;
      do {
        func_0x00010b1ebebc();
        FUN_10b1da2f8();
        uVar5 = uVar5 - 1;
      } while (-1 < (long)uVar5);
    }
    while( true ) {
      cVar1 = SBORROW8(lVar3,param_3);
      cVar2 = lVar3 - param_3 < 0;
      if (lVar3 == param_3) break;
      func_0x00010b1ed65c(*(undefined8 *)(lVar3 + 0x278));
      if (cVar2 != cVar1) {
        FUN_10b1da284(lVar3);
        func_0x00010b1ebebc();
        FUN_10b1da2f8();
      }
      lVar3 = lVar3 + 0x280;
    }
    for (; 1 < lVar4; lVar4 = lVar4 + -1) {
      func_0x00010b1ee084();
      lVar6 = 0;
      lVar3 = unaff_x20;
      do {
        lVar7 = lVar3 + lVar6 * 0x280 + 0x280;
        func_0x00010b1ee230();
        lVar3 = lVar7;
        lVar6 = extraout_x8;
        if ((extraout_x10 < lVar4) &&
           (lVar3 = extraout_x9 + 0x500, lVar6 = extraout_x10,
           *(long *)(extraout_x9 + 0x4f8) <= *(long *)(extraout_x9 + 0x778))) {
          lVar3 = lVar7;
          lVar6 = extraout_x8;
        }
        FUN_10b1da2d0();
      } while (lVar6 <= (long)(lVar4 - 2U >> 1));
      unaff_x19 = unaff_x19 + -0x280;
      if (lVar3 == unaff_x19) {
        func_0x00010b1edfe0();
      }
      else {
        FUN_10b1da2d0(lVar3,unaff_x19);
        func_0x00010b1eb714();
        FUN_10b1da2d0();
        uVar5 = (lVar3 - unaff_x20) + 0x280;
        if (0x280 < (long)uVar5) {
          uVar5 = uVar5 / 0x280 - 2 >> 1;
          lVar6 = unaff_x20 + uVar5 * 0x280;
          if (*(long *)(lVar3 + 0x278) < *(long *)(lVar6 + 0x278)) {
            func_0x00010b1d98e4(auStack_280,lVar3);
            do {
              lVar7 = lVar6;
              FUN_10b1da2d0(lVar3,lVar7);
              if (uVar5 == 0) break;
              uVar5 = uVar5 - 1 >> 1;
              lVar6 = unaff_x20 + uVar5 * 0x280;
              lVar3 = lVar7;
            } while (lStack_8 < *(long *)(lVar6 + 0x278));
            FUN_10b1da2d0(lVar7,auStack_280);
            func_0x00010b121af0(auStack_280);
          }
        }
      }
      func_0x00010b1ebb80();
    }
  }
  return;
}



/* Entry: 10b1da0e4; end: 10b1da283;  */

void FUN_10b1da0e4(long param_1,long param_2)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  undefined1 auStack_2d0 [632];
  long lStack_58;
  
  func_0x00010b1eb648();
  lVar6 = (param_2 - param_1) / 0x280;
  cVar1 = SBORROW8(lVar6,5);
  cVar2 = lVar6 + -5 < 0;
  switch(lVar6) {
  case 0:
  case 1:
    break;
  case 2:
    func_0x00010b1ee244(*(undefined8 *)(unaff_x20 + -8),1);
    if (cVar2 != cVar1) {
      FUN_10b1da284();
    }
    break;
  case 3:
    FUN_10b1d9d80();
    break;
  case 4:
    func_0x00010b1d9e08();
    break;
  case 5:
    FUN_10b1d9e68();
    break;
  default:
    FUN_10b1d9d80();
    lVar6 = 0;
    iVar7 = 0;
    lVar5 = unaff_x19 + 0x780;
    lVar4 = unaff_x19 + 0x500;
    while (lVar3 = lVar5, lVar3 != unaff_x20) {
      if (*(long *)(lVar4 + 0x278) < *(long *)(lVar3 + 0x278)) {
        func_0x00010b1edec8(auStack_2d0);
        lVar5 = lVar6;
        do {
          FUN_10b1da2d0(unaff_x19 + lVar5 + 0x780,unaff_x19 + lVar5 + 0x500);
          if (lVar5 == -0x500) break;
          lVar4 = unaff_x19 + lVar5;
          lVar5 = lVar5 + -0x280;
        } while (*(long *)(lVar4 + 0x4f8) < lStack_58);
        FUN_10b1da2d0();
        iVar7 = iVar7 + 1;
        func_0x00010b1ebb80();
        if (iVar7 == 8) {
          return;
        }
      }
      lVar6 = lVar6 + 0x280;
      lVar4 = lVar3;
      lVar5 = lVar3 + 0x280;
    }
  }
  return;
}



/* Entry: 10b1da284; end: 10b1da2cf;  */

void FUN_10b1da284(void)

{
  func_0x00010b1eb63c();
  func_0x00010b1ee084();
  func_0x00010b1ebdbc();
  FUN_10b1da2d0();
  func_0x00010b1eb714();
  FUN_10b1da2d0();
  func_0x00010b1ebb80();
  return;
}



/* Entry: 10b1da2d0; end: 10b1da2f7;  */

void FUN_10b1da2d0(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b1eb63c();
  FUN_10b1151e4();
  *(undefined8 *)(unaff_x20 + 0x278) = *(undefined8 *)(unaff_x19 + 0x278);
  return;
}



/* Entry: 10b1da2f8; end: 10b1da413;  */

void FUN_10b1da2f8(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  char cVar6;
  char cVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_280 [632];
  long lStack_8;
  
  func_0x00010b1ec024();
  if (1 < param_2) {
    lVar13 = (param_3 - param_1) / 0x280;
    uVar11 = param_2 - 2U >> 1;
    if (lVar13 <= (long)uVar11) {
      uVar4 = lVar13 << 1 | 1;
      lVar12 = param_1 + uVar4 * 0x280;
      uVar3 = lVar13 * 2 + 2;
      cVar7 = SBORROW8(uVar3,param_2);
      lVar13 = uVar3 - param_2;
      uVar8 = uVar4;
      if ((long)uVar3 < param_2) {
        lVar9 = *(long *)(lVar12 + 0x278);
        lVar10 = *(long *)(lVar12 + 0x4f8);
        cVar7 = SBORROW8(lVar10,lVar9);
        lVar13 = lVar10 - lVar9;
        lVar5 = 0x280;
        if (lVar9 <= lVar10) {
          lVar5 = 0;
        }
        lVar12 = lVar12 + lVar5;
        uVar8 = uVar3;
        if (lVar9 <= lVar10) {
          uVar8 = uVar4;
        }
      }
      cVar6 = lVar13 < 0;
      func_0x00010b1ed620(*(undefined8 *)(lVar12 + 0x278));
      if (cVar6 == cVar7) {
        func_0x00010b1edec8(auStack_280);
        do {
          func_0x00010b1ec8bc();
          FUN_10b1da2d0();
          if ((long)uVar11 < (long)uVar8) break;
          uVar4 = uVar8 << 1 | 1;
          lVar13 = param_1 + uVar4 * 0x280;
          uVar3 = uVar8 * 2 + 2;
          uVar8 = uVar4;
          if ((long)uVar3 < param_2) {
            plVar1 = (long *)(lVar13 + 0x278);
            plVar2 = (long *)(lVar13 + 0x4f8);
            lVar12 = 0x280;
            if (*plVar1 <= *plVar2) {
              lVar12 = 0;
            }
            lVar13 = lVar13 + lVar12;
            uVar8 = uVar3;
            if (*plVar1 <= *plVar2) {
              uVar8 = uVar4;
            }
          }
        } while (*(long *)(lVar13 + 0x278) <= lStack_8);
        func_0x00010b1edfe0();
        func_0x00010b1ebb80();
      }
    }
  }
  return;
}



/* Entry: 10b1da414; end: 10b1da41f;  */

void FUN_10b1da414(long param_1)

{
  undefined1 in_CY;
  ulong extraout_x8;
  long unaff_x20;
  
  func_0x00010b1eafa8();
  func_0x00010b1ed5f0();
  if (!(bool)in_CY) {
    __Znwm(param_1 * 0x278);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010b1ebd44();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010b1eb758();
    while (param_1 != unaff_x20) {
      param_1 = param_1 + -0x278;
      func_0x00010b121af0();
    }
  }
  return;
}



/* Entry: 10b1da420; end: 10b1da52f;  */

void FUN_10b1da420(long param_1)

{
  undefined1 in_CY;
  ulong extraout_x8;
  long unaff_x20;
  
  func_0x00010b1ed5f0();
  if (!(bool)in_CY) {
    __Znwm(param_1 * 0x278);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010b1ebd44();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010b1eb758();
    while (param_1 != unaff_x20) {
      param_1 = param_1 + -0x278;
      func_0x00010b121af0();
    }
  }
  return;
}



/* Entry: 10b1da530; end: 10b1da53b;  */

void FUN_10b1da530(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  func_0x00010b1eafa8();
  func_0x00010b1eb63c();
  puVar2 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  puVar6 = (undefined8 *)(*(long *)(param_2 + 8) + (((long)puVar1 - (long)puVar2) / -0x18) * 0x18);
  puVar3 = puVar6;
  for (puVar5 = puVar2; puVar5 != puVar1; puVar5 = puVar5 + 3) {
    uVar7 = *puVar5;
    puVar3[1] = puVar5[1];
    *puVar3 = uVar7;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar3[2] = puVar5[2];
    puVar3 = puVar3 + 3;
  }
  for (; puVar2 != puVar1; puVar2 = puVar2 + 3) {
    func_0x00010b121950();
  }
  *(undefined8 **)(unaff_x19 + 8) = puVar6;
  lVar4 = *unaff_x20;
  *unaff_x20 = (long)puVar6;
  unaff_x20[1] = lVar4;
  func_0x00010b1eae3c();
  return;
}



/* Entry: 10b1da53c; end: 10b1da61f;  */

void FUN_10b1da53c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  func_0x00010b1eb63c();
  puVar2 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  puVar6 = (undefined8 *)(*(long *)(param_2 + 8) + (((long)puVar1 - (long)puVar2) / -0x18) * 0x18);
  puVar3 = puVar6;
  for (puVar5 = puVar2; puVar5 != puVar1; puVar5 = puVar5 + 3) {
    uVar7 = *puVar5;
    puVar3[1] = puVar5[1];
    *puVar3 = uVar7;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar3[2] = puVar5[2];
    puVar3 = puVar3 + 3;
  }
  for (; puVar2 != puVar1; puVar2 = puVar2 + 3) {
    func_0x00010b121950();
  }
  *(undefined8 **)(unaff_x19 + 8) = puVar6;
  lVar4 = *unaff_x20;
  *unaff_x20 = (long)puVar6;
  unaff_x20[1] = lVar4;
  func_0x00010b1eae3c();
  return;
}



/* Entry: 10b1da620; end: 10b1da65f;  */

void FUN_10b1da620(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long *unaff_x19;
  
  func_0x00010b1ed388();
  while (func_0x00010b1ecd28(), !(bool)in_ZR) {
    unaff_x19[2] = extraout_x8 + -0x18;
    func_0x00010b121950();
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10b1da660; end: 10b1dabab;  */

void FUN_10b1da660(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  ulong param_5,undefined8 *param_6,undefined8 *param_7)

{
  long *plVar1;
  undefined8 ****ppppuVar2;
  bool bVar3;
  undefined8 ***pppuVar4;
  code *pcVar5;
  undefined1 uVar6;
  undefined8 ****ppppuVar7;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar8;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 extraout_x9;
  long extraout_x9_00;
  ulong extraout_x9_01;
  int extraout_w11;
  long lVar9;
  undefined8 ****ppppuVar10;
  long lVar11;
  undefined8 ****ppppuVar12;
  undefined8 ****ppppuVar13;
  undefined8 ***pppuStack_3c0;
  undefined8 ***pppuStack_3b8;
  undefined8 ***pppuStack_3b0;
  char cStack_3a8;
  undefined1 auStack_398 [96];
  undefined1 auStack_338 [8];
  undefined8 uStack_330;
  undefined1 auStack_328 [64];
  char cStack_2e8;
  undefined8 ***pppuStack_2e0;
  undefined8 ***pppuStack_2d8;
  undefined8 ***apppuStack_2d0 [2];
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
  undefined8 **appuStack_270 [10];
  undefined8 uStack_220;
  undefined1 auStack_218 [64];
  undefined1 uStack_1d8;
  undefined1 auStack_1d0 [80];
  long alStack_180 [9];
  byte bStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  byte bStack_e8;
  undefined8 ***pppuStack_e0;
  undefined1 uStack_d8;
  undefined8 ***apppuStack_d0 [3];
  undefined8 ***apppuStack_b8 [3];
  undefined8 ***pppuStack_a0;
  undefined8 ***pppuStack_98;
  undefined8 ***pppuStack_90;
  undefined1 uStack_88;
  int iStack_20;
  
  func_0x00010b1ec024();
  func_0x00010b1eae84();
  func_0x00010bccbc98(auStack_398,param_3,extraout_x9);
  func_0x00010b1ec434();
  lVar9 = extraout_x8;
  if (extraout_x9_00 != 0) {
    do {
      func_0x00010b1eaf98();
      lVar9 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  plVar1 = (long *)(*(long *)(lVar9 + 0x10) + ((long)param_5 >> 1));
  if ((param_5 & 1) != 0) {
    param_4 = *(code **)(*plVar1 + ((ulong)param_4 & 0xffffffff));
  }
  (*param_4)(auStack_338,plVar1,*param_6,*param_7);
  uStack_220 = 0;
  auStack_218[0] = 0;
  uStack_1d8 = 0;
  if (cStack_2e8 == '\0') {
    uVar8 = 0;
  }
  else {
    FUN_10b1dac44(auStack_218,auStack_328);
    FUN_10b1dac7c(auStack_328);
    uVar8 = uStack_220;
  }
  uStack_220 = uStack_330;
  uStack_330 = uVar8;
  FUN_10b1dabd8(auStack_1d0,&uStack_220);
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  FUN_10b1dabd8(appuStack_270,&uStack_2c0);
  pppuStack_2d8 = (undefined8 ****)0x0;
  apppuStack_2d0[0] = (undefined8 ****)0x0;
  pppuStack_2e0 = (undefined8 ****)0x0;
  FUN_10b1dae2c(&lStack_130,auStack_1d0);
  ppppuVar7 = (undefined8 ****)appuStack_270;
  FUN_10b1dae2c(alStack_180);
  pppuStack_e0 = &pppuStack_2e0;
  uStack_d8 = 0;
  while ((((bStack_e8 & 1) != 0 || ((bStack_138 & 1) != 0)) && (lStack_130 != alStack_180[0]))) {
    if ((bStack_e8 & 1) == 0) {
      func_0x00010b1eb9a4(apppuStack_d0);
      ppppuVar7 = apppuStack_d0;
      func_0x00010b1eb224(apppuStack_b8);
      func_0x00010b1eb3c8();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apppuStack_b8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apppuStack_d0);
    }
    if (pppuStack_2d8 < apppuStack_2d0[0]) {
      func_0x00010b1ed5a4(uStack_128);
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_128 = 0;
      *(undefined8 *)(extraout_x8_01 + 0x20) = uStack_108;
      *(undefined8 *)(extraout_x8_01 + 0x18) = uStack_110;
      *(undefined8 *)(extraout_x8_01 + 0x30) = 0;
      *(undefined8 *)(extraout_x8_01 + 0x38) = 0;
      *(undefined8 *)(extraout_x8_01 + 0x28) = 0;
      *(undefined8 *)(extraout_x8_01 + 0x30) = uStack_f8;
      *(undefined8 *)(extraout_x8_01 + 0x28) = uStack_100;
      *(undefined8 *)(extraout_x8_01 + 0x38) = uStack_f0;
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      ppppuVar10 = (undefined8 ****)(extraout_x8_01 + 0x40);
    }
    else {
      lVar9 = (long)pppuStack_2d8 - (long)pppuStack_2e0;
      if ((lVar9 >> 6) + 1U >> 0x3a != 0) {
        FUN_10b1dacd0();
        goto LAB_10b1daa6c;
      }
      func_0x00010b1ec290();
      lVar11 = extraout_x8_02;
      if (0x7fffffffffffffbf < extraout_x9_01) {
        lVar11 = 0x3ffffffffffffff;
      }
      if (lVar11 == 0) {
        lVar11 = 0;
        ppppuVar12 = (undefined8 ****)0x0;
      }
      else {
        FUN_10b1dacdc();
        ppppuVar12 = ppppuVar7;
      }
      lVar9 = lVar11 + lVar9;
      func_0x00010b1ec278(uStack_118,uStack_128);
      pppuVar4 = pppuStack_2d8;
      ppppuVar13 = (undefined8 ****)pppuStack_2e0;
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_128 = 0;
      *(undefined8 *)(lVar9 + 0x20) = uStack_108;
      *(undefined8 *)(lVar9 + 0x18) = uStack_110;
      *(undefined8 *)(lVar9 + 0x30) = 0;
      *(undefined8 *)(lVar9 + 0x38) = 0;
      *(undefined8 *)(lVar9 + 0x28) = 0;
      *(undefined8 *)(lVar9 + 0x30) = uStack_f8;
      *(undefined8 *)(lVar9 + 0x28) = uStack_100;
      *(undefined8 *)(lVar9 + 0x38) = uStack_f0;
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      ppppuVar2 = (undefined8 ****)((long)pppuStack_2e0 + (lVar9 - (long)pppuStack_2d8));
      pppuStack_98 = apppuStack_d0;
      pppuStack_90 = apppuStack_b8;
      apppuStack_b8[0] = ppppuVar2;
      apppuStack_d0[0] = ppppuVar2;
      pppuStack_a0 = apppuStack_2d0;
      for (ppppuVar10 = (undefined8 ****)pppuStack_2e0; ppppuVar10 != (undefined8 ****)pppuVar4;
          ppppuVar10 = ppppuVar10 + 8) {
        ppppuVar7 = ppppuVar10;
        FUN_10b1dac60(apppuStack_b8[0]);
        apppuStack_b8[0] = apppuStack_b8[0] + 8;
      }
      uStack_88 = 1;
      for (; ppppuVar13 != (undefined8 ****)pppuVar4; ppppuVar13 = ppppuVar13 + 8) {
        func_0x00010b12492c(ppppuVar13);
      }
      ppppuVar10 = (undefined8 ****)(lVar9 + 0x40);
      ppppuVar12 = (undefined8 ****)(lVar11 + (long)ppppuVar12 * 0x40);
      func_0x00010b1dad04(&pppuStack_a0);
      bVar3 = (undefined8 ****)pppuStack_2e0 != (undefined8 ****)0x0;
      pppuStack_2e0 = ppppuVar2;
      apppuStack_2d0[0] = ppppuVar12;
      if (bVar3) {
        pppuStack_2d8 = ppppuVar10;
        __ZdlPv();
      }
    }
    pppuStack_2d8 = ppppuVar10;
    FUN_10b1dad3c(&lStack_130);
  }
  uStack_d8 = 1;
  FUN_10b1dae04(&pppuStack_e0);
  func_0x00010b1ebe8c(alStack_180);
  FUN_10b1daea4(&uStack_128);
  func_0x00010b1ebe8c(appuStack_270);
  func_0x00010b1edc24();
  func_0x00010b1ebe8c(auStack_1d0);
  func_0x00010b1ebe8c(&uStack_220);
  pppuStack_3b8 = pppuStack_2d8;
  pppuStack_3c0 = pppuStack_2e0;
  pppuStack_3b0 = apppuStack_2d0[0];
  pppuStack_2e0 = (undefined8 ****)0x0;
  pppuStack_2d8 = (undefined8 ****)0x0;
  apppuStack_2d0[0] = (undefined8 ****)0x0;
  cStack_3a8 = '\x01';
  func_0x00010b1248a0(&pppuStack_2e0);
  FUN_10b1daec4(auStack_338);
  func_0x00010b1ebd30();
  func_0x00010b1ece08();
  func_0x00010b1ebf18();
  func_0x00010b1ecd94();
  uVar6 = cStack_3a8 == '\x01';
  if ((bool)uVar6) {
    func_0x00010b1ec5ec();
  }
  iStack_20 = 0;
  FUN_10b124a24(&pppuStack_3c0);
  pppuStack_a0 = (undefined8 ***)((ulong)pppuStack_a0 & 0xffffffffffffff00);
  uStack_88 = 0;
  if (iStack_20 == 0) {
    func_0x00010b1ec934();
    func_0x00010b1ecd88();
    if ((bool)uVar6) {
      func_0x00010b1ec3c8();
    }
  }
  else {
    uVar6 = iStack_20 == 1;
    if (!(bool)uVar6) goto LAB_10b1daa68;
    func_0x00010b1ec934();
  }
  FUN_10b124a24(&pppuStack_a0);
  func_0x00010b1ec3f0();
  FUN_10b1daf18();
  func_0x00010b1ec678();
  func_0x00010b1eadc4();
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
LAB_10b1daa68:
  func_0x00010563ab98();
LAB_10b1daa6c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10b1daa70);
  (*pcVar5)();
}



/* Entry: 10b1dabac; end: 10b1dabd7;  */

undefined ** FUN_10b1dabac(code *param_1,ulong param_2)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR_DAT_110cc4de8;
  if (((param_2 & 1) != 0 || param_1 != (code *)0x0) && param_2 != 0 || param_1 != FUN_10b1fabf4) {
    ppuVar1 = (undefined **)0x0;
  }
  return ppuVar1;
}



/* Entry: 10b1dabd8; end: 10b1dac07;  */

void FUN_10b1dabd8(void)

{
  long unaff_x20;
  
  func_0x00010b1eb548();
  FUN_10b1dac08();
  func_0x00010b1eb714();
  FUN_10b1dac08();
  FUN_10b1daea4(unaff_x20 + 8);
  return;
}



/* Entry: 10b1dac08; end: 10b1dac43;  */

void FUN_10b1dac08(long param_1,long param_2)

{
  long unaff_x19;
  
  func_0x00010b1eae98();
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(unaff_x19 + 0x48) = 0;
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_10b1dac44((undefined1 *)(param_1 + 8),param_2 + 8);
  }
  return;
}



/* Entry: 10b1dac44; end: 10b1dac5f;  */

void FUN_10b1dac44(long param_1)

{
  FUN_10b1dac60();
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 10b1dac60; end: 10b1dac7b;  */

void FUN_10b1dac60(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x30;
  
  func_0x00010b1ec250();
  func_0x00010b1ee0d4(param_1,param_2,unaff_x30);
  return;
}



/* Entry: 10b1dac7c; end: 10b1dac9f;  */

void FUN_10b1dac7c(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x00010b12492c();
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  return;
}



/* Entry: 10b1daca0; end: 10b1daccf;  */

void FUN_10b1daca0(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b1eb3a4();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined1 *)(unaff_x20 + 0x20) = *(undefined1 *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  func_0x00010b1edf5c();
  return;
}



/* Entry: 10b1dacd0; end: 10b1dacdb;  */

void FUN_10b1dacd0(ulong param_1)

{
  ulong extraout_x8;
  ulong unaff_x20;
  
  func_0x00010b1eafa8();
  if (param_1 >> 0x3a == 0) {
    func_0x00010b1ee098();
    return;
  }
  func_0x000104bd35f4();
  func_0x00010b1ebd44();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010b1eb758();
    while (param_1 != unaff_x20) {
      param_1 = param_1 - 0x40;
      func_0x00010b12492c();
    }
  }
  return;
}



/* Entry: 10b1dacdc; end: 10b1dad3b;  */

void FUN_10b1dacdc(ulong param_1)

{
  ulong extraout_x8;
  ulong unaff_x20;
  
  if (param_1 >> 0x3a == 0) {
    func_0x00010b1ee098();
    return;
  }
  func_0x000104bd35f4();
  func_0x00010b1ebd44();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010b1eb758();
    while (param_1 != unaff_x20) {
      param_1 = param_1 - 0x40;
      func_0x00010b12492c();
    }
  }
  return;
}



/* Entry: 10b1dad3c; end: 10b1dad97;  */

void FUN_10b1dad3c(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b1eb65c();
  if ((param_1 != 0) && (func_0x000107c3141c(), (int)param_1 != 0)) {
    func_0x00010b1ec2d4();
    FUN_10b1dadc4();
    func_0x00010b1eb714();
    FUN_10b1dad98();
    func_0x00010b1ed328();
    return;
  }
  lVar1 = unaff_x19 + 8;
  if (*(char *)(unaff_x19 + 0x48) == '\x01') {
    func_0x00010b12492c();
    *(undefined1 *)(lVar1 + 0x40) = 0;
  }
  return;
}



/* Entry: 10b1dad98; end: 10b1dadc3;  */

void FUN_10b1dad98(void)

{
  undefined1 in_ZR;
  
  func_0x00010b1ec7e8();
  if ((bool)in_ZR) {
    FUN_10b1daca0();
  }
  else {
    FUN_10b1dac44();
  }
  return;
}



/* Entry: 10b1dadc4; end: 10b1dae03;  */

void FUN_10b1dadc4(undefined8 param_1,undefined1 param_2)

{
  long unaff_x19;
  
  func_0x00010b1eb720();
  func_0x00010b1eb05c();
  func_0x00010b1eb940();
  func_0x000107c28930();
  *(undefined8 *)(unaff_x19 + 0x18) = param_1;
  *(undefined1 *)(unaff_x19 + 0x20) = param_2;
  func_0x00010b1ebc20(unaff_x19 + 0x28);
  func_0x000107c313e0();
  return;
}



/* Entry: 10b1dae04; end: 10b1dae2b;  */

void FUN_10b1dae04(void)

{
  uint extraout_w8;
  
  func_0x00010b1eb8fc();
  if ((extraout_w8 & 1) == 0) {
    func_0x00010b1248c4();
  }
  return;
}



/* Entry: 10b1dae2c; end: 10b1dae67;  */

void FUN_10b1dae2c(void)

{
  undefined1 in_ZR;
  
  func_0x00010b1eada8();
  func_0x00010b1ed544();
  if ((bool)in_ZR) {
    func_0x00010b1ebec8();
    FUN_10b1dae68();
    func_0x00010b1ec940();
  }
  return;
}



/* Entry: 10b1dae68; end: 10b1daea3;  */

void FUN_10b1dae68(long param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x00010b1eb648();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  func_0x000107c27994(param_1 + 0x28,unaff_x20 + 0x28);
  return;
}



/* Entry: 10b1daea4; end: 10b1daec3;  */

void FUN_10b1daea4(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x00010b12492c();
  }
  return;
}



/* Entry: 10b1daec4; end: 10b1daf17;  */

void FUN_10b1daec4(long param_1)

{
  long unaff_x19;
  ulong unaff_x20;
  
  func_0x00010b1eb538();
  func_0x00010b1eb7a8();
  if (*(char *)(param_1 + 0x50) != '\0') {
    FUN_10b1dac7c(unaff_x19 + 0x10);
  }
  FUN_10b1daea4(unaff_x20 | 8);
  func_0x00010b1ebc2c();
  func_0x000107c31408();
  FUN_10b1daea4(unaff_x19 + 0x10);
  return;
}



/* Entry: 10b1daf18; end: 10b1daf4f;  */

void FUN_10b1daf18(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x00010b1eb07c();
  if (!(bool)in_ZR) {
    func_0x00010b1eb014((&PTR_FUN_110cc3c08)[extraout_x8]);
  }
  func_0x00010b1eb924();
  return;
}



/* Entry: 10b1daf50; end: 10b1daf5b;  */

void FUN_10b1daf50(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    func_0x00010b1248a0();
  }
  return;
}



/* Entry: 10b1daf5c; end: 10b1db84f;  */

void FUN_10b1daf5c(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  undefined1 uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  long extraout_x8;
  ulong *puVar9;
  ulong extraout_x8_00;
  ulong uVar10;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong *extraout_x8_04;
  long extraout_x8_05;
  ulong extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  ulong *extraout_x8_09;
  ulong extraout_x9;
  ulong uVar11;
  ulong extraout_x9_00;
  ulong *extraout_x9_01;
  ulong extraout_x9_02;
  long extraout_x9_03;
  ulong *extraout_x9_04;
  ulong extraout_x10;
  ulong extraout_x10_00;
  long lVar12;
  ulong extraout_x10_01;
  long extraout_x10_02;
  long extraout_x10_03;
  uint extraout_w11;
  uint extraout_w11_00;
  ulong extraout_x11;
  ulong extraout_x11_00;
  uint extraout_w12;
  uint extraout_w12_00;
  ulong extraout_x12;
  ulong extraout_x12_00;
  ulong uVar13;
  ulong *unaff_x19;
  ulong *unaff_x20;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong in_stack_00000010;
  ulong in_stack_00000018;
  ulong in_stack_00000020;
  ulong in_stack_00000028;
  ulong in_stack_00000030;
  ulong in_stack_00000038;
  ulong in_stack_00000040;
  ulong in_stack_00000048;
  ulong in_stack_00000050;
  ulong in_stack_00000058;
  ulong in_stack_00000060;
  ulong in_stack_00000068;
  ulong in_stack_00000070;
  ulong in_stack_00000078;
  ulong in_stack_00000080;
  ulong in_stack_00000088;
  
  func_0x00010b1ee638();
  func_0x00010b1eb63c();
  do {
LAB_10b1daf90:
    while( true ) {
      uVar16 = (long)unaff_x19 - (long)unaff_x20 >> 6;
      bVar4 = uVar16 == 5;
      switch(uVar16) {
      case 0:
      case 1:
        goto LAB_10b1ebe3c;
      case 2:
        func_0x00010b1eb214((char)unaff_x19[-4]);
        if (!bVar4 || extraout_x9_00 <= extraout_x10_00) {
          return;
        }
        func_0x00010b1ebebc();
        FUN_10b1dbc68();
        return;
      case 3:
        func_0x00010b1ed144(unaff_x20,unaff_x20 + 8);
        return;
      case 4:
        func_0x00010b1db920(unaff_x20,unaff_x20 + 8,unaff_x20 + 0x10,unaff_x19 + -8);
        return;
      case 5:
        FUN_10b1db9b0(unaff_x20,unaff_x20 + 8,unaff_x20 + 0x10,unaff_x20 + 0x18,unaff_x19 + -8);
        goto LAB_10b1ebe3c;
      }
      if ((long)uVar16 < 0x18) {
        if ((param_4 & 1) == 0) {
          if (unaff_x20 == unaff_x19) {
            return;
          }
          while (puVar8 = unaff_x20, unaff_x20 = puVar8 + 8, unaff_x20 != unaff_x19) {
            uVar16 = puVar8[3];
            if ((char)puVar8[4] == '\0') {
              uVar16 = 0;
            }
            if ((char)puVar8[0xc] == '\x01' && uVar16 < puVar8[0xb]) {
              in_stack_00000058 = puVar8[9];
              in_stack_00000050 = *unaff_x20;
              in_stack_00000060 = puVar8[10];
              puVar8[9] = 0;
              puVar8[10] = 0;
              *unaff_x20 = 0;
              in_stack_00000070 = puVar8[0xc];
              in_stack_00000068 = puVar8[0xb];
              in_stack_00000080 = puVar8[0xe];
              in_stack_00000078 = puVar8[0xd];
              in_stack_00000088 = puVar8[0xf];
              puVar8[0xd] = 0;
              puVar8[0xe] = 0;
              puVar8[0xf] = 0;
              do {
                puVar7 = puVar8;
                func_0x00010b1eded0(puVar7 + 8);
                uVar16 = puVar7[-5];
                if ((char)puVar7[-4] == '\0') {
                  uVar16 = 0;
                }
              } while (((in_stack_00000070 & 1) != 0) &&
                      (puVar8 = puVar7 + -8, uVar16 < in_stack_00000068));
              FUN_10b1daca0(puVar7,&stack0x00000050);
              func_0x00010b1ec4a8();
            }
          }
          return;
        }
        if (unaff_x20 == unaff_x19) {
          return;
        }
        lVar12 = 0;
        puVar8 = unaff_x20;
        goto LAB_10b1db3ac;
      }
      if (param_3 == 0) {
        if (unaff_x20 == unaff_x19) {
          return;
        }
        uVar10 = uVar16 - 2 >> 1;
        uVar15 = uVar10;
        goto LAB_10b1db49c;
      }
      puVar8 = unaff_x20 + (uVar16 >> 1) * 8;
      uVar5 = uVar16 == 0x81;
      if (uVar16 < 0x81) {
        func_0x00010b1ed144(puVar8,unaff_x20);
      }
      else {
        func_0x00010b1ee380();
        func_0x00010b1ed144();
        FUN_10b1db850(unaff_x20 + 8,puVar8 + -8,unaff_x19 + -0x10);
        FUN_10b1db850(unaff_x20 + 0x10,puVar8 + 8,unaff_x19 + -0x18);
        FUN_10b1db850(puVar8 + -8,puVar8,puVar8 + 8);
        func_0x00010b1ee380();
        FUN_10b1dbc68();
      }
      param_3 = param_3 + -1;
      if (((param_4 & 1) != 0) ||
         (func_0x00010b1eb214((char)unaff_x20[-4]), (bool)uVar5 && extraout_x10 < extraout_x9))
      break;
      uVar15 = unaff_x20[1];
      uVar16 = *unaff_x20;
      in_stack_00000060 = unaff_x20[2];
      in_stack_00000050 = uVar16;
      in_stack_00000058 = uVar15;
      func_0x00010b1ec63c();
      in_stack_00000080 = unaff_x20[6];
      in_stack_00000078 = unaff_x20[5];
      in_stack_00000088 = unaff_x20[7];
      unaff_x20[6] = 0;
      unaff_x20[7] = 0;
      unaff_x20[5] = 0;
      in_stack_00000068 = uVar16;
      in_stack_00000070 = uVar15;
      func_0x00010b1ec6d8((char)unaff_x19[-4]);
      if (((uVar15 & 1) == 0) || (puVar8 = unaff_x20, uVar16 <= extraout_x8_00)) {
        puVar8 = unaff_x20 + 8;
        do {
          puVar7 = puVar8;
          if (unaff_x19 <= puVar7) break;
          uVar10 = puVar7[3];
          if ((char)puVar7[4] == '\0') {
            uVar10 = 0;
          }
          puVar8 = puVar7 + 8;
        } while (((uVar15 & 1) == 0) || (uVar16 <= uVar10));
      }
      else {
        do {
          puVar7 = puVar8 + 8;
          uVar10 = puVar8[0xb];
          if ((char)puVar8[0xc] == '\0') {
            uVar10 = 0;
          }
          puVar8 = puVar7;
        } while (uVar16 <= uVar10);
      }
      puVar8 = unaff_x19;
      puVar9 = unaff_x19;
      if (puVar7 < unaff_x19) {
        do {
          puVar8 = puVar9 + -8;
          func_0x00010b1ec6d8((char)puVar9[-4]);
          if ((uVar15 & 1) == 0) break;
          puVar9 = puVar8;
        } while (extraout_x8_01 < uVar16);
      }
      while (puVar7 < puVar8) {
        FUN_10b1dbc68(puVar7,puVar8);
        do {
          do {
            puVar9 = puVar7 + 0xc;
            puVar7 = puVar7 + 8;
            func_0x00010b1ec6d8((char)*puVar9);
          } while ((uVar15 & 1) == 0);
        } while (uVar16 <= extraout_x8_02);
        do {
          puVar9 = puVar8 + -4;
          puVar8 = puVar8 + -8;
          func_0x00010b1ec6d8((char)*puVar9);
        } while (extraout_x8_03 < uVar16);
      }
      puVar8 = puVar7 + -8;
      if (unaff_x20 != puVar8) {
        FUN_10b1daca0(unaff_x20,puVar8);
      }
      FUN_10b1daca0(puVar8,&stack0x00000050);
      func_0x00010b1ec4a8();
      param_4 = 0;
      unaff_x20 = puVar7;
    }
    uVar10 = unaff_x20[1];
    uVar15 = *unaff_x20;
    in_stack_00000060 = unaff_x20[2];
    in_stack_00000050 = uVar15;
    in_stack_00000058 = uVar10;
    func_0x00010b1ec63c(0);
    in_stack_00000080 = unaff_x20[6];
    in_stack_00000078 = unaff_x20[5];
    in_stack_00000088 = unaff_x20[7];
    unaff_x20[6] = 0;
    unaff_x20[7] = 0;
    unaff_x20[5] = 0;
    lVar12 = extraout_x8;
    uVar16 = uVar15;
    if ((uVar10 & 1) == 0) {
      uVar16 = 0;
    }
    do {
      lVar3 = lVar12 + 0x60;
      uVar11 = *(ulong *)((long)unaff_x20 + lVar12 + 0x58);
      lVar12 = lVar12 + 0x40;
      bVar4 = *(char *)((long)unaff_x20 + lVar3) != '\x01';
    } while ((!bVar4 && uVar16 <= uVar11) && (bVar4 || uVar11 != uVar16));
    puVar7 = (ulong *)((long)unaff_x20 + lVar12);
    puVar9 = unaff_x19;
    puVar8 = puVar7;
    in_stack_00000068 = uVar15;
    in_stack_00000070 = uVar10;
    if (lVar12 == 0x40) {
      do {
        puVar17 = puVar9;
        if (puVar9 <= puVar7) break;
        puVar17 = puVar9 + -8;
        puVar6 = puVar9 + -4;
        puVar1 = puVar9 + -5;
        puVar9 = puVar17;
      } while ((char)*puVar6 != '\x01' || *puVar1 <= uVar16);
    }
    else {
      do {
        puVar17 = puVar9 + -8;
        puVar6 = puVar9 + -4;
        puVar1 = puVar9 + -5;
        puVar9 = puVar17;
      } while ((char)*puVar6 != '\x01' || *puVar1 <= uVar16);
    }
    while (puVar8 < puVar17) {
      FUN_10b1dbc68(puVar8,puVar17);
      do {
        puVar6 = puVar8 + 0xc;
        puVar1 = puVar8 + 0xb;
        puVar8 = puVar8 + 8;
        bVar4 = (char)*puVar6 != '\x01';
      } while ((!bVar4 && uVar16 <= *puVar1) && (bVar4 || *puVar1 != uVar16));
      do {
        puVar6 = puVar17 + -4;
        puVar1 = puVar17 + -5;
        puVar17 = puVar17 + -8;
      } while ((char)*puVar6 != '\x01' || *puVar1 <= uVar16);
    }
    puVar17 = puVar8 + -8;
    if (unaff_x20 != puVar17) {
      func_0x00010b1ecf5c();
      FUN_10b1daca0();
    }
    puVar6 = puVar17;
    FUN_10b1daca0(puVar17,&stack0x00000050);
    func_0x00010b1ec4a8();
    if (puVar7 < puVar9) goto LAB_10b1db198;
    func_0x00010b1ecf5c();
    FUN_10b1dba7c();
    puVar7 = puVar8;
    FUN_10b1dba7c(puVar8,unaff_x19);
    if ((int)puVar7 == 0) goto code_r0x00010b1db194;
    unaff_x19 = puVar17;
    if (((ulong)puVar6 & 1) != 0) {
      return;
    }
  } while( true );
LAB_10b1db3ac:
  puVar7 = puVar8 + 8;
  if (puVar7 == unaff_x19) {
    return;
  }
  uVar16 = puVar8[3];
  if ((char)puVar8[4] == '\0') {
    uVar16 = 0;
  }
  if ((char)puVar8[0xc] == '\x01' && uVar16 < puVar8[0xb]) {
    in_stack_00000058 = puVar8[9];
    in_stack_00000050 = *puVar7;
    in_stack_00000060 = puVar8[10];
    puVar8[9] = 0;
    puVar8[10] = 0;
    *puVar7 = 0;
    in_stack_00000070 = puVar8[0xc];
    in_stack_00000068 = puVar8[0xb];
    in_stack_00000080 = puVar8[0xe];
    in_stack_00000078 = puVar8[0xd];
    in_stack_00000088 = puVar8[0xf];
    puVar8[0xd] = 0;
    puVar8[0xe] = 0;
    puVar8[0xf] = 0;
    lVar3 = lVar12;
    do {
      lVar14 = lVar3;
      func_0x00010b1eded0((long)unaff_x20 + lVar14 + 0x40);
      puVar8 = unaff_x20;
      if (lVar14 == 0) goto LAB_10b1db464;
      uVar16 = *(ulong *)((long)unaff_x20 + lVar14 + -0x28);
      if (*(char *)((long)unaff_x20 + lVar14 + -0x20) == '\0') {
        uVar16 = 0;
      }
    } while (((in_stack_00000070 & 1) != 0) && (lVar3 = lVar14 + -0x40, uVar16 < in_stack_00000068))
    ;
    puVar8 = (ulong *)((long)unaff_x20 + lVar14);
LAB_10b1db464:
    FUN_10b1daca0(puVar8,&stack0x00000050);
    func_0x00010b1ec4a8();
  }
  lVar12 = lVar12 + 0x40;
  puVar8 = puVar7;
  goto LAB_10b1db3ac;
LAB_10b1db49c:
  do {
    if ((long)uVar15 <= (long)uVar10) {
      uVar2 = (uVar15 & 0x3fffffffffffffff) << 1 | 1;
      uVar11 = uVar15 * 2 + 2;
      bVar4 = uVar11 == uVar16;
      uVar13 = uVar2;
      if ((long)uVar11 < (long)uVar16) {
        uVar13 = unaff_x20[uVar2 * 8 + 0xb];
        if ((char)unaff_x20[uVar2 * 8 + 0xc] == '\0') {
          uVar13 = 0;
        }
        bVar4 = ((byte)unaff_x20[uVar2 * 8 + 4] & uVar13 < unaff_x20[uVar2 * 8 + 3]) == 0;
        uVar13 = uVar11;
        if (bVar4) {
          uVar13 = uVar2;
        }
      }
      puVar8 = unaff_x20 + uVar15 * 8;
      func_0x00010b1eccc0();
      if (!bVar4 || extraout_x12 <= extraout_x11) {
        in_stack_00000058 = puVar8[1];
        in_stack_00000050 = *puVar8;
        in_stack_00000060 = puVar8[2];
        puVar8[1] = 0;
        puVar8[2] = 0;
        *puVar8 = 0;
        in_stack_00000070 = extraout_x9_01[1];
        in_stack_00000068 = *extraout_x9_01;
        in_stack_00000080 = puVar8[6];
        in_stack_00000078 = puVar8[5];
        in_stack_00000088 = puVar8[7];
        puVar8[5] = 0;
        puVar8[6] = 0;
        puVar8[7] = 0;
        puVar8 = extraout_x8_04;
        uVar11 = in_stack_00000068;
        if ((in_stack_00000070 & 1) == 0) {
          uVar11 = 0;
          puVar8 = extraout_x8_04;
        }
        do {
          puVar7 = puVar8;
          FUN_10b1daca0();
          if ((long)uVar10 < (long)uVar13) break;
          lVar12 = uVar13 * 2;
          uVar13 = uVar13 << 1 | 1;
          puVar8 = unaff_x20 + uVar13 * 8;
          if (lVar12 + 2 < (long)uVar16) {
            func_0x00010b1ee4a4();
            bVar4 = (extraout_w11 & extraout_w12) == 0;
            lVar12 = 0x40;
            if (bVar4) {
              lVar12 = 0;
            }
            puVar8 = (ulong *)(extraout_x8_05 + lVar12);
            uVar13 = extraout_x10_01;
            if (bVar4) {
              uVar13 = extraout_x9_02;
            }
          }
        } while ((char)puVar8[4] != '\x01' || puVar8[3] <= uVar11);
        FUN_10b1daca0(puVar7,&stack0x00000050);
        func_0x00010b1ec4a8();
      }
    }
    uVar15 = uVar15 - 1;
  } while (-1 < (long)uVar15);
  do {
    if ((long)uVar16 < 2) {
LAB_10b1ebe3c:
      return;
    }
    lVar12 = 0;
    uVar10 = unaff_x20[1];
    uVar15 = *unaff_x20;
    in_stack_00000020 = unaff_x20[2];
    in_stack_00000010 = uVar15;
    in_stack_00000018 = uVar10;
    func_0x00010b1ec63c(uVar16 - 2);
    in_stack_00000040 = unaff_x20[6];
    in_stack_00000038 = unaff_x20[5];
    in_stack_00000048 = unaff_x20[7];
    unaff_x20[6] = 0;
    unaff_x20[7] = 0;
    unaff_x20[5] = 0;
    puVar8 = unaff_x20;
    in_stack_00000028 = uVar15;
    in_stack_00000030 = uVar10;
    do {
      puVar7 = puVar8 + lVar12 * 8 + 8;
      func_0x00010b1ee230();
      puVar8 = puVar7;
      lVar12 = extraout_x8_07;
      if (extraout_x10_02 < (long)uVar16) {
        func_0x00010b1ee4a4();
        puVar8 = (ulong *)(extraout_x9_03 + 0x80);
        lVar12 = extraout_x10_03;
        if ((extraout_w11_00 & extraout_w12_00) == 0) {
          puVar8 = puVar7;
          lVar12 = extraout_x8_08;
        }
      }
      func_0x00010b1eded0();
    } while (lVar12 <= (long)(extraout_x8_06 >> 1));
    unaff_x19 = unaff_x19 + -8;
    if (puVar8 == unaff_x19) {
      FUN_10b1daca0(puVar8,&stack0x00000010);
    }
    else {
      func_0x00010b1ec8b0();
      FUN_10b1daca0();
      FUN_10b1daca0(unaff_x19,&stack0x00000010);
      lVar12 = (long)puVar8 + (0x40 - (long)unaff_x20) >> 6;
      uVar15 = lVar12 - 2;
      bVar4 = uVar15 == 0;
      if (1 < lVar12) {
        uVar15 = uVar15 >> 1;
        func_0x00010b1eccc0();
        if (bVar4 && extraout_x11_00 < extraout_x12_00) {
          in_stack_00000058 = puVar8[1];
          in_stack_00000050 = *puVar8;
          in_stack_00000060 = puVar8[2];
          puVar8[1] = 0;
          puVar8[2] = 0;
          *puVar8 = 0;
          in_stack_00000070 = extraout_x9_04[1];
          in_stack_00000068 = *extraout_x9_04;
          in_stack_00000080 = puVar8[6];
          in_stack_00000078 = puVar8[5];
          in_stack_00000088 = puVar8[7];
          puVar8[6] = 0;
          puVar8[7] = 0;
          puVar8[5] = 0;
          puVar7 = extraout_x8_09;
          uVar10 = in_stack_00000068;
          if ((in_stack_00000070 & 1) == 0) {
            uVar10 = 0;
            puVar7 = extraout_x8_09;
          }
          do {
            puVar9 = puVar7;
            FUN_10b1daca0(puVar8,puVar9);
            if (uVar15 == 0) break;
            uVar15 = uVar15 - 1 >> 1;
            puVar7 = unaff_x20 + uVar15 * 8;
            bVar4 = (char)puVar7[4] != '\x01';
            puVar8 = puVar9;
          } while ((!bVar4 && uVar10 <= puVar7[3]) && (bVar4 || puVar7[3] != uVar10));
          FUN_10b1daca0(puVar9,&stack0x00000050);
          func_0x00010b1ec4a8();
        }
      }
    }
    func_0x00010b12492c(&stack0x00000010);
    uVar16 = uVar16 - 1;
  } while( true );
code_r0x00010b1db194:
  unaff_x20 = puVar8;
  if (((ulong)puVar6 & 1) == 0) {
LAB_10b1db198:
    func_0x00010b1ecf5c();
    FUN_10b1daf5c();
    param_4 = 0;
    unaff_x20 = puVar8;
  }
  goto LAB_10b1daf90;
}



/* Entry: 10b1db850; end: 10b1db9af;  */

void FUN_10b1db850(undefined8 *param_1,long param_2,long param_3)

{
  char cVar1;
  undefined1 uVar2;
  long lVar3;
  ulong uVar4;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong uVar5;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong uVar6;
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  
  lVar3 = param_3;
  func_0x00010b1ecb30();
  uVar4 = *(ulong *)(param_2 + 0x18);
  uVar6 = param_1[3];
  if (*(char *)(param_1 + 4) == '\0') {
    uVar6 = 0;
  }
  cVar1 = *(char *)(lVar3 + 0x20);
  uVar5 = *(ulong *)(lVar3 + 0x18);
  if (*(char *)(param_2 + 0x20) != '\x01' || uVar4 <= uVar6) {
    if (*(char *)(param_2 + 0x20) == '\0') {
      uVar4 = 0;
    }
    uVar2 = cVar1 != '\0' && uVar5 == uVar4;
    if (cVar1 != '\0' && uVar4 < uVar5) {
      func_0x00010b1ec2e0();
      FUN_10b1dbc68();
      func_0x00010b1eb214(*(undefined1 *)(unaff_x19 + 4));
      if ((bool)uVar2 && extraout_x10 < extraout_x9) {
        func_0x00010b1ec8b0();
        unaff_x21 = param_1;
        goto LAB_10b1db918;
      }
    }
    return;
  }
  uVar2 = cVar1 != '\0' && uVar5 == uVar4;
  if (cVar1 == '\0' || uVar5 <= uVar4) {
    FUN_10b1dbc68();
    func_0x00010b1eb214(*(undefined1 *)(param_3 + 0x20));
    unaff_x21 = unaff_x19;
    if (!(bool)uVar2 || extraout_x9_00 <= extraout_x10_00) {
      return;
    }
  }
LAB_10b1db918:
  unaff_x21[1] = 0;
  unaff_x21[2] = 0;
  *unaff_x21 = 0;
  unaff_x21[5] = 0;
  unaff_x21[6] = 0;
  unaff_x21[7] = 0;
  FUN_10b1daca0();
  func_0x00010b1eb714();
  FUN_10b1daca0();
  func_0x00010b1ed328();
  return;
}



/* Entry: 10b1db9b0; end: 10b1dba7b;  */

void FUN_10b1db9b0(void)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  long in_x4;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x10_01;
  ulong extraout_x10_02;
  long unaff_x19;
  long unaff_x21;
  undefined8 *unaff_x22;
  
  func_0x00010b1eb324();
  func_0x00010b1db920();
  func_0x00010b1eb214(*(undefined1 *)(in_x4 + 0x20));
  uVar1 = (bool)in_ZR && extraout_x9 == extraout_x10;
  if ((bool)in_ZR && extraout_x10 < extraout_x9) {
    puVar3 = unaff_x22;
    FUN_10b1dbc68();
    func_0x00010b1eb214(*(undefined1 *)(unaff_x22 + 4));
    uVar2 = (bool)uVar1 && extraout_x9_00 == extraout_x10_00;
    if ((bool)uVar1 && extraout_x10_00 < extraout_x9_00) {
      func_0x00010b1ebdc8();
      FUN_10b1dbc68();
      func_0x00010b1eb214(*(undefined1 *)(unaff_x21 + 0x20));
      uVar1 = (bool)uVar2 && extraout_x9_01 == extraout_x10_01;
      if ((bool)uVar2 && extraout_x10_01 < extraout_x9_01) {
        func_0x00010b1ec7a0();
        FUN_10b1dbc68();
        func_0x00010b1eb214(*(undefined1 *)(unaff_x19 + 0x20));
        if (((bool)uVar1 && extraout_x10_02 <= extraout_x9_02) &&
            (!(bool)uVar1 || extraout_x9_02 != extraout_x10_02)) {
          func_0x00010b1ebdbc();
          puVar3[1] = 0;
          puVar3[2] = 0;
          *puVar3 = 0;
          puVar3[5] = 0;
          puVar3[6] = 0;
          puVar3[7] = 0;
          FUN_10b1daca0();
          func_0x00010b1eb714();
          FUN_10b1daca0();
          func_0x00010b1ed328();
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 10b1dba7c; end: 10b1dbc67;  */

void FUN_10b1dba7c(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong extraout_x9;
  ulong extraout_x10;
  ulong uVar6;
  ulong uVar7;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  
  func_0x00010b1eb648();
  lVar4 = param_2 - param_1 >> 6;
  bVar3 = lVar4 == 5;
  switch(lVar4) {
  case 0:
  case 1:
    break;
  case 2:
    func_0x00010b1eb214(*(undefined1 *)(unaff_x20 + -4),1);
    if (bVar3 && extraout_x10 < extraout_x9) {
      FUN_10b1dbc68();
    }
    break;
  case 3:
    func_0x00010b1db850();
    break;
  case 4:
    func_0x00010b1db920();
    break;
  case 5:
    FUN_10b1db9b0();
    break;
  default:
    func_0x00010b1ed144();
    lVar4 = 0;
    iVar10 = 0;
    puVar2 = (undefined8 *)(unaff_x19 + 0xc0);
    puVar8 = (undefined8 *)(unaff_x19 + 0x80);
    while (puVar5 = puVar2, puVar5 != unaff_x20) {
      uVar7 = puVar8[3];
      if (*(char *)(puVar8 + 4) == '\0') {
        uVar7 = 0;
      }
      if (*(char *)(puVar5 + 4) == '\x01' && uVar7 < (ulong)puVar5[3]) {
        puVar5[1] = 0;
        puVar5[2] = 0;
        *puVar5 = 0;
        uVar11 = puVar5[4];
        uVar7 = puVar5[3];
        puVar5[5] = 0;
        puVar5[6] = 0;
        puVar5[7] = 0;
        lVar9 = lVar4;
        while( true ) {
          lVar1 = unaff_x19 + lVar9;
          FUN_10b1daca0(lVar1 + 0xc0,lVar1 + 0x80);
          if (lVar9 == -0x80) break;
          uVar6 = *(ulong *)(lVar1 + 0x58);
          if (*(char *)(lVar1 + 0x60) == '\0') {
            uVar6 = 0;
          }
          lVar9 = lVar9 + -0x40;
          if (((uVar11 & 1) == 0) || (uVar7 <= uVar6)) break;
        }
        FUN_10b1daca0();
        iVar10 = iVar10 + 1;
        func_0x00010b1ed328();
        if (iVar10 == 8) {
          return;
        }
      }
      lVar4 = lVar4 + 0x40;
      puVar8 = puVar5;
      puVar2 = puVar5 + 8;
    }
  }
  return;
}



/* Entry: 10b1dbc68; end: 10b1dbccb;  */

void FUN_10b1dbc68(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_10b1daca0();
  func_0x00010b1eb714();
  FUN_10b1daca0();
  func_0x00010b1ed328();
  return;
}


