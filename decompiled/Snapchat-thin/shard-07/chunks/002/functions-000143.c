/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1052abae0; end: 1052abae7;  */

void FUN_1052abae0(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001052ac0e8(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x50;
    func_0x0001001148fc();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1052abae8; end: 1052abb1b;  */

void FUN_1052abae8(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001052ac0e8();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x50;
    func_0x0001001148fc();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1052abb1c; end: 1052abba7;  */

void FUN_1052abb1c(long *param_1,ulong param_2)

{
  char *pcVar1;
  long *unaff_x20;
  long lVar2;
  undefined1 auStack_48 [40];
  
  if ((ulong)((param_1[2] - *param_1) / 0x68) < param_2) {
    if (0x276276276276276 < param_2) {
      FUN_1052abba8();
      func_0x0001052ac0b4();
      func_0x0001052ac0a4();
      pcVar1 = "vector";
      func_0x000104bd47e8();
      func_0x0001052ac0e8();
      lVar2 = *(long *)(param_2 + 8) +
              ((*(long *)((long)pcVar1 + 8) - *(long *)pcVar1) / -0x68) * 0x68;
      FUN_1052abce4((long *)((long)pcVar1 + 0x10),*(long *)pcVar1,*(long *)((long)pcVar1 + 8),lVar2)
      ;
      param_1[1] = lVar2;
      lVar2 = *unaff_x20;
      unaff_x20[1] = lVar2;
      *unaff_x20 = param_1[1];
      param_1[1] = lVar2;
      lVar2 = unaff_x20[1];
      unaff_x20[1] = param_1[2];
      param_1[2] = lVar2;
      lVar2 = unaff_x20[2];
      unaff_x20[2] = param_1[3];
      param_1[3] = lVar2;
      *param_1 = param_1[1];
      return;
    }
    FUN_1052abc44(auStack_48,param_2,(param_1[1] - *param_1) / 0x68);
    func_0x0001052ac0bc();
    func_0x0001052ac0b4();
  }
  return;
}



/* Entry: 1052abba8; end: 1052abbbb;  */

void FUN_1052abba8(undefined8 param_1,long param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar3;
  
  pcVar1 = "vector";
  func_0x000104bd47e8();
  func_0x0001052ac0e8();
  lVar3 = *(long *)(param_2 + 8) + ((*(long *)((long)pcVar1 + 8) - *(long *)pcVar1) / -0x68) * 0x68;
  FUN_1052abce4((long *)((long)pcVar1 + 0x10),*(long *)pcVar1,*(long *)((long)pcVar1 + 8),lVar3);
  unaff_x19[1] = lVar3;
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
  return;
}



/* Entry: 1052abbbc; end: 1052abc43;  */

void FUN_1052abbbc(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x0001052ac0e8();
  lVar2 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x68) * 0x68;
  FUN_1052abce4(param_1 + 2,*param_1,param_1[1],lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 1052abc44; end: 1052abcb3;  */

long * FUN_1052abc44(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001052abc90();
  }
  lVar1 = param_4 + param_3 * 0x68;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x68;
  return param_1;
}



/* Entry: 1052abcb4; end: 1052abce3;  */

void FUN_1052abcb4(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 < 0x276276276276277) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x68);
    return;
  }
  func_0x000104bd35f4();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (uVar1 = param_2; lStack_48 = param_4, uVar1 != param_3; uVar1 = uVar1 + 0x68) {
    FUN_1052abdb8(param_4,uVar1);
    param_4 = lStack_48 + 0x68;
  }
  uStack_58 = 1;
  FUN_1052abd88(param_1,param_2,param_3);
  FUN_1052abe58(&uStack_70);
  return;
}



/* Entry: 1052abce4; end: 1052abd87;  */

void FUN_1052abce4(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x68) {
    FUN_1052abdb8(param_4,lVar1);
    param_4 = lStack_38 + 0x68;
  }
  uStack_48 = 1;
  FUN_1052abd88(param_1,param_2,param_3);
  FUN_1052abe58(&uStack_60);
  return;
}



/* Entry: 1052abd88; end: 1052abdb7;  */

void FUN_1052abd88(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x68) {
    func_0x0001052aba48();
  }
  return;
}



/* Entry: 1052abdb8; end: 1052abe57;  */

void FUN_1052abdb8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  if (*(char *)(param_2 + 3) == '\x01') {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  if (*(char *)(param_2 + 7) == '\x01') {
    uVar2 = param_2[5];
    uVar1 = param_2[4];
    param_1[6] = param_2[6];
    param_1[5] = uVar2;
    param_1[4] = uVar1;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[4] = 0;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  uVar1 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar1;
  param_1[10] = param_2[10];
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  uVar1 = param_2[0xb];
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  param_1[0xb] = uVar1;
  return;
}



/* Entry: 1052abe58; end: 1052abe87;  */

long FUN_1052abe58(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1052abe88(param_1);
  }
  return param_1;
}



/* Entry: 1052abe88; end: 1052abea7;  */

void FUN_1052abe88(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x68;
    func_0x0001052aba48();
  }
  return;
}



/* Entry: 1052abea8; end: 1052abf03;  */

void FUN_1052abea8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x68;
    func_0x0001052aba48();
  }
  return;
}



/* Entry: 1052abf04; end: 1052abf0b;  */

void FUN_1052abf04(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001052ac0e8(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x68;
    func_0x0001052aba48();
  }
  return;
}



/* Entry: 1052abf0c; end: 1052abfa3;  */

void FUN_1052abf0c(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001052ac0e8();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x68;
    func_0x0001052aba48();
  }
  return;
}



/* Entry: 1052abfa4; end: 1052ac03b;  */

long FUN_1052abfa4(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  FUN_1052ac03c(param_1,(param_1[1] - *param_1) / 0x68 + 1);
  FUN_1052abc44(auStack_58,plVar1,(param_1[1] - *param_1) / 0x68,param_1 + 2);
  FUN_1052abdb8(lStack_48,param_2);
  lStack_48 = lStack_48 + 0x68;
  func_0x0001052ac0bc();
  lVar2 = param_1[1];
  func_0x0001052ac0b4();
  return lVar2;
}



/* Entry: 1052ac03c; end: 1052ac09b;  */

long * FUN_1052ac03c(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if ((long *)0x276276276276276 < param_2) {
    FUN_1052abba8();
    return param_1;
  }
  uVar1 = (param_1[2] - *param_1) / 0x68;
  plVar2 = (long *)(uVar1 * 2);
  if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
    plVar2 = param_2;
  }
  if (0x13b13b13b13b13a < uVar1) {
    plVar2 = (long *)0x276276276276276;
  }
  return plVar2;
}



/* Entry: 1052ac09c; end: 1052ac0f3;  */

void FUN_1052ac09c(void)

{
  return;
}



/* Entry: 1052ac0f4; end: 1052ac283;  */

undefined1 * FUN_1052ac0f4(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *extraout_x8;
  long lVar9;
  undefined1 auStack_250 [8];
  undefined1 auStack_248 [8];
  undefined1 auStack_240 [8];
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [24];
  undefined8 uStack_208;
  long lStack_200;
  undefined1 *puStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined1 auStack_1d8 [8];
  undefined1 auStack_1d0 [8];
  undefined1 auStack_1c8 [16];
  undefined4 auStack_1b8 [2];
  undefined2 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 **ppuStack_180;
  code *pcStack_178;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined8 uStack_c8;
  long lStack_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_1052ac284();
  func_0x0001003b2110(auStack_98,0x113818e68);
  FUN_1052ac6cc(auStack_88,param_2);
  if (*(char *)(param_2 + 0x14) == '\x01') {
    uStack_78 = CONCAT44(uStack_78._4_4_,*(undefined4 *)(param_2 + 0x10));
    uStack_70 = 4;
  }
  else {
    uStack_78 = 0;
    uStack_70 = 1;
  }
  uStack_6f = 0;
  FUN_1052ac440(auStack_68,param_2 + 0x18);
  uStack_58 = *(undefined8 *)(param_2 + 0x40);
  uStack_40 = 5;
  uStack_50 = uStack_40;
  if (*(char *)(param_2 + 0x48) == '\0') {
    uStack_50 = 1;
    uStack_58 = 0;
  }
  uStack_4f = 0;
  uStack_48 = *(undefined8 *)(param_2 + 0x50);
  if (*(char *)(param_2 + 0x58) == '\0') {
    uStack_40 = 1;
    uStack_48 = 0;
  }
  uStack_3f = 0;
  func_0x000104bdb9bc(auStack_90,auStack_98,auStack_88,5);
  lVar9 = 0x40;
  do {
    func_0x00010b9a8d98(auStack_88 + lVar9);
    lVar9 = lVar9 + -0x10;
    uVar1 = lVar9 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_98);
  puVar4 = auStack_90;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_90;
  func_0x000104bdbf78();
  func_0x0001052ac934(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = &uStack_48;
  lVar9 = -0x50;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar7 = (int)puVar4;
    puVar3 = puVar3 + -2;
    lVar9 = lVar9 + 0x10;
    uVar1 = lVar9 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_98);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_1052ac284;
  uStack_c8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_c0 = lVar9;
  puStack_b8 = puVar2;
  puStack_b0 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818e70 & 1) == 0) {
    puVar4 = (undefined1 *)0x113818e70;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x0001003a83dc(auStack_148,"_djinni_record_PrefetchContentMetadata");
      pcVar5 = "mainUrl";
      func_0x0001003a83dc(auStack_150,"mainUrl");
      FUN_1052ac460();
      func_0x0001003b1b50(auStack_140,auStack_150,pcVar5);
      pcVar5 = "streamingProtocol";
      func_0x0001003a83dc(auStack_158,"streamingProtocol");
      FUN_1052ac4bc();
      func_0x0001003b1b50(auStack_128,auStack_158,pcVar5);
      pcVar5 = "prefetchHint";
      func_0x0001003a83dc(auStack_160,"prefetchHint");
      FUN_1052ac518();
      func_0x0001003b1b50(auStack_110,auStack_160,pcVar5);
      pcVar5 = "contentLength";
      func_0x0001003a83dc(auStack_168,"contentLength");
      func_0x000104bef438();
      func_0x0001003b1b50(auStack_f8,auStack_168,pcVar5);
      pcVar5 = "cachedLength";
      func_0x0001003a83dc(auStack_170,"cachedLength");
      func_0x000104bef438();
      func_0x0001003b1b50(auStack_e0,auStack_170,pcVar5);
      uVar8 = 0;
      func_0x000104bdbd44(0x113818e60,auStack_148,0,auStack_140,5);
      lVar9 = 0x60;
      do {
        func_0x0001003b1c5c(auStack_140 + lVar9);
        iVar7 = (int)uVar8;
        lVar9 = lVar9 + -0x18;
        uVar1 = lVar9 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_170);
      func_0x0001003a8c94(auStack_168);
      func_0x0001003a8c94(auStack_160);
      func_0x0001003a8c94(auStack_158);
      func_0x0001003a8c94(auStack_150);
      func_0x0001003a8c94(auStack_148);
      puVar4 = (undefined1 *)0x113818e70;
      ___cxa_guard_release();
    }
  }
  func_0x0001052ac934(uStack_c8);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    if (iVar7 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    if (puVar4[0x20] != '\x01') {
      *(undefined2 *)(extraout_x8 + 1) = 1;
      *extraout_x8 = 0;
      return puVar4;
    }
    pcStack_178 = FUN_1052ac440;
    uStack_1a8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_180 = &puStack_b0;
    FUN_1052b66e4();
    func_0x0001003b2110(auStack_1d8,0x113819200);
    FUN_10527ecb8(auStack_1c8,puVar4);
    auStack_1b8[0] = *(undefined4 *)(puVar4 + 0x18);
    uStack_1b0 = 4;
    func_0x000104bdb9bc(auStack_1d0,auStack_1d8,auStack_1c8,2);
    lVar9 = 0x10;
    do {
      func_0x00010b9a8d98(auStack_1c8 + lVar9);
      lVar9 = lVar9 + -0x10;
      uVar1 = lVar9 == -0x10;
    } while (!(bool)uVar1);
    func_0x0001003b1f60(auStack_1d8);
    puVar4 = auStack_1d0;
    func_0x00010b9a8f60(extraout_x8);
    puVar2 = auStack_1d0;
    func_0x000104bdbf78();
    FUN_1052b6814(uStack_1a8);
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      puVar6 = auStack_1b8;
      lVar9 = -0x20;
      do {
        func_0x00010b9a8d98(puVar6);
        iVar7 = (int)puVar4;
        puVar6 = puVar6 + -4;
        lVar9 = lVar9 + 0x10;
        uVar1 = lVar9 == 0;
      } while (!(bool)uVar1);
      func_0x0001003b1f60(auStack_1d8);
      puVar4 = puVar2;
      __Unwind_Resume(puVar2);
      pcStack_1e8 = FUN_1052b66e4;
      uStack_208 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      lStack_200 = lVar9;
      puStack_1f8 = puVar2;
      pppuStack_1f0 = &ppuStack_180;
      if ((bRam0000000113819208 & 1) == 0) {
        puVar4 = (undefined1 *)0x113819208;
        ___cxa_guard_acquire();
        if ((int)puVar4 != 0) {
          func_0x0001003a83dc(auStack_240,"_djinni_record_PrefetchHint");
          pcVar5 = "kbPerTimeWindow";
          func_0x0001003a83dc(auStack_248,"kbPerTimeWindow");
          FUN_10527ed64();
          func_0x0001003b1b50(auStack_238,auStack_248,pcVar5);
          pcVar5 = "timeWindowMs";
          func_0x0001003a83dc(auStack_250,"timeWindowMs");
          func_0x000104bef760();
          func_0x0001003b1b50(auStack_220,auStack_250,pcVar5);
          uVar8 = 0;
          func_0x000104bdbd44(0x1138191f8,auStack_240,0,auStack_238,2);
          lVar9 = 0x18;
          do {
            func_0x0001003b1c5c(auStack_238 + lVar9);
            iVar7 = (int)uVar8;
            lVar9 = lVar9 + -0x18;
            uVar1 = lVar9 == -0x18;
          } while (!(bool)uVar1);
          func_0x0001003a8c94(auStack_250);
          func_0x0001003a8c94(auStack_248);
          func_0x0001003a8c94(auStack_240);
          puVar4 = (undefined1 *)0x113819208;
          ___cxa_guard_release(0x113819208);
        }
      }
      FUN_1052b6814(uStack_208);
      if (!(bool)uVar1) {
        ___stack_chk_fail();
        if (iVar7 == 0) {
          __Unwind_Resume();
        }
        func_0x000104bd46a0();
        return puVar4;
      }
      return (undefined1 *)0x1138191f8;
    }
    return puVar2;
  }
  return (undefined1 *)0x113818e60;
}



/* Entry: 1052ac284; end: 1052ac43f;  */

undefined1 * FUN_1052ac284(undefined1 *param_1,int param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *extraout_x8;
  long lVar8;
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [8];
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined8 uStack_168;
  long lStack_160;
  undefined1 *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [16];
  undefined4 auStack_118 [2];
  undefined2 uStack_110;
  undefined8 uStack_108;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818e70 & 1) == 0) {
    param_1 = (undefined1 *)0x113818e70;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_a8,"_djinni_record_PrefetchContentMetadata");
      pcVar2 = "mainUrl";
      func_0x0001003a83dc(auStack_b0,"mainUrl");
      FUN_1052ac460();
      func_0x0001003b1b50(auStack_a0,auStack_b0,pcVar2);
      pcVar2 = "streamingProtocol";
      func_0x0001003a83dc(auStack_b8,"streamingProtocol");
      FUN_1052ac4bc();
      func_0x0001003b1b50(auStack_88,auStack_b8,pcVar2);
      pcVar2 = "prefetchHint";
      func_0x0001003a83dc(auStack_c0,"prefetchHint");
      FUN_1052ac518();
      func_0x0001003b1b50(auStack_70,auStack_c0,pcVar2);
      pcVar2 = "contentLength";
      func_0x0001003a83dc(auStack_c8,"contentLength");
      func_0x000104bef438();
      func_0x0001003b1b50(auStack_58,auStack_c8,pcVar2);
      pcVar2 = "cachedLength";
      func_0x0001003a83dc(auStack_d0,"cachedLength");
      func_0x000104bef438();
      func_0x0001003b1b50(auStack_40,auStack_d0,pcVar2);
      uVar7 = 0;
      func_0x000104bdbd44(0x113818e60,auStack_a8,0,auStack_a0,5);
      lVar8 = 0x60;
      do {
        func_0x0001003b1c5c(auStack_a0 + lVar8);
        param_2 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        in_ZR = lVar8 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_d0);
      func_0x0001003a8c94(auStack_c8);
      func_0x0001003a8c94(auStack_c0);
      func_0x0001003a8c94(auStack_b8);
      func_0x0001003a8c94(auStack_b0);
      func_0x0001003a8c94(auStack_a8);
      param_1 = (undefined1 *)0x113818e70;
      ___cxa_guard_release();
    }
  }
  func_0x0001052ac934(uStack_28);
  if ((bool)in_ZR) {
    return (undefined1 *)0x113818e60;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if (param_1[0x20] != '\x01') {
    *(undefined2 *)(extraout_x8 + 1) = 1;
    *extraout_x8 = 0;
    return param_1;
  }
  pcStack_d8 = FUN_1052ac440;
  uStack_108 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_e0 = &stack0xfffffffffffffff0;
  FUN_1052b66e4();
  func_0x0001003b2110(auStack_138,0x113819200);
  FUN_10527ecb8(auStack_128,param_1);
  auStack_118[0] = *(undefined4 *)(param_1 + 0x18);
  uStack_110 = 4;
  func_0x000104bdb9bc(auStack_130,auStack_138,auStack_128,2);
  lVar8 = 0x10;
  do {
    func_0x00010b9a8d98(auStack_128 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_138);
  puVar5 = auStack_130;
  func_0x00010b9a8f60(extraout_x8);
  puVar3 = auStack_130;
  func_0x000104bdbf78();
  FUN_1052b6814(uStack_108);
  if ((bool)uVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar4 = auStack_118;
  lVar8 = -0x20;
  do {
    func_0x00010b9a8d98(puVar4);
    iVar6 = (int)puVar5;
    puVar4 = puVar4 + -4;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_138);
  puVar5 = puVar3;
  __Unwind_Resume(puVar3);
  pcStack_148 = FUN_1052b66e4;
  uStack_168 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_160 = lVar8;
  puStack_158 = puVar3;
  ppuStack_150 = &puStack_e0;
  if ((bRam0000000113819208 & 1) == 0) {
    puVar5 = (undefined1 *)0x113819208;
    ___cxa_guard_acquire();
    if ((int)puVar5 != 0) {
      func_0x0001003a83dc(auStack_1a0,"_djinni_record_PrefetchHint");
      pcVar2 = "kbPerTimeWindow";
      func_0x0001003a83dc(auStack_1a8,"kbPerTimeWindow");
      FUN_10527ed64();
      func_0x0001003b1b50(auStack_198,auStack_1a8,pcVar2);
      pcVar2 = "timeWindowMs";
      func_0x0001003a83dc(auStack_1b0,"timeWindowMs");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_180,auStack_1b0,pcVar2);
      uVar7 = 0;
      func_0x000104bdbd44(0x1138191f8,auStack_1a0,0,auStack_198,2);
      lVar8 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_198 + lVar8);
        iVar6 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_1b0);
      func_0x0001003a8c94(auStack_1a8);
      func_0x0001003a8c94(auStack_1a0);
      puVar5 = (undefined1 *)0x113819208;
      ___cxa_guard_release(0x113819208);
    }
  }
  FUN_1052b6814(uStack_168);
  if ((bool)uVar1) {
    return (undefined1 *)0x1138191f8;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar5;
}



/* Entry: 1052ac440; end: 1052ac45f;  */

undefined1 * FUN_1052ac440(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  long lStack_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [16];
  undefined4 auStack_48 [2];
  undefined2 uStack_40;
  undefined8 uStack_38;
  
  if (param_2[0x20] != '\x01') {
    *(undefined2 *)(param_1 + 1) = 1;
    *param_1 = 0;
    return param_2;
  }
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_1052b66e4();
  func_0x0001003b2110(auStack_68,0x113819200);
  FUN_10527ecb8(auStack_58,param_2);
  auStack_48[0] = *(undefined4 *)(param_2 + 0x18);
  uStack_40 = 4;
  func_0x000104bdb9bc(auStack_60,auStack_68,auStack_58,2);
  lVar8 = 0x10;
  do {
    func_0x00010b9a8d98(auStack_58 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar4 = auStack_60;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_60;
  func_0x000104bdbf78();
  FUN_1052b6814(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_48;
  lVar8 = -0x20;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar6 = (int)puVar4;
    puVar3 = puVar3 + -4;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar4 = puVar2;
  __Unwind_Resume(puVar2);
  pcStack_78 = FUN_1052b66e4;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_90 = lVar8;
  puStack_88 = puVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam0000000113819208 & 1) == 0) {
    puVar4 = (undefined1 *)0x113819208;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x0001003a83dc(auStack_d0,"_djinni_record_PrefetchHint");
      pcVar5 = "kbPerTimeWindow";
      func_0x0001003a83dc(auStack_d8,"kbPerTimeWindow");
      FUN_10527ed64();
      func_0x0001003b1b50(auStack_c8,auStack_d8,pcVar5);
      pcVar5 = "timeWindowMs";
      func_0x0001003a83dc(auStack_e0,"timeWindowMs");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_b0,auStack_e0,pcVar5);
      uVar7 = 0;
      func_0x000104bdbd44(0x1138191f8,auStack_d0,0,auStack_c8,2);
      lVar8 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_c8 + lVar8);
        iVar6 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_e0);
      func_0x0001003a8c94(auStack_d8);
      func_0x0001003a8c94(auStack_d0);
      puVar4 = (undefined1 *)0x113819208;
      ___cxa_guard_release(0x113819208);
    }
  }
  FUN_1052b6814(uStack_98);
  if ((bool)uVar1) {
    return (undefined1 *)0x1138191f8;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar4;
}



/* Entry: 1052ac460; end: 1052ac4bb;  */

undefined8 FUN_1052ac460(void)

{
  int iVar1;
  
  if ((bRam00000001130cc488 & 1) == 0) {
    iVar1 = 0x130cc488;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1052babec();
      func_0x00010b990784(0x1130cc478);
      ___cxa_guard_release(0x1130cc488);
    }
  }
  return 0x1130cc478;
}



/* Entry: 1052ac4bc; end: 1052ac517;  */

undefined8 FUN_1052ac4bc(void)

{
  int iVar1;
  
  if ((bRam00000001130cc4a0 & 1) == 0) {
    iVar1 = 0x130cc4a0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1052a9340();
      func_0x00010b990784(0x1130cc490);
      ___cxa_guard_release(0x1130cc4a0);
    }
  }
  return 0x1130cc490;
}



/* Entry: 1052ac518; end: 1052ac573;  */

undefined8 FUN_1052ac518(void)

{
  int iVar1;
  
  if ((bRam00000001130cc4b8 & 1) == 0) {
    iVar1 = 0x130cc4b8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1052b66e4();
      func_0x00010b990784(0x1130cc4a8);
      ___cxa_guard_release(0x1130cc4b8);
    }
  }
  return 0x1130cc4a8;
}



/* Entry: 1052ac574; end: 1052ac5d7;  */

undefined8 *
FUN_1052ac574(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[2] = param_3;
  FUN_1052ac5d8(param_1 + 3,param_4);
  param_1[8] = param_5;
  param_1[9] = param_6;
  param_1[10] = param_7;
  param_1[0xb] = param_8;
  return param_1;
}



/* Entry: 1052ac5d8; end: 1052ac607;  */

undefined1 * FUN_1052ac5d8(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x20] = 0;
  FUN_1052ac608();
  return param_1;
}



/* Entry: 1052ac608; end: 1052ac61b;  */

void FUN_1052ac608(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_1052ac638();
    *(undefined1 *)(param_1 + 0x20) = 1;
    return;
  }
  return;
}



/* Entry: 1052ac61c; end: 1052ac637;  */

void FUN_1052ac61c(long param_1)

{
  FUN_1052ac638();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 1052ac638; end: 1052ac663;  */

void FUN_1052ac638(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
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
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  return;
}



/* Entry: 1052ac664; end: 1052ac683;  */

void FUN_1052ac664(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x0001002920a0();
  }
  return;
}



/* Entry: 1052ac684; end: 1052ac6af;  */

long FUN_1052ac684(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1052ac6b0; end: 1052ac6cb;  */

void FUN_1052ac6b0(long param_1)

{
  FUN_1052ac638();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 1052ac6cc; end: 1052ac76b;  */

void FUN_1052ac6cc(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 uStack_29;
  long lStack_28;
  
  lVar4 = *param_2;
  if (lVar4 == 0) {
    *(undefined2 *)(param_1 + 1) = 1;
    *param_1 = 0;
  }
  else {
    ___dynamic_cast(lVar4,&PTR_DAT_110874d60,&PTR_DAT_1107e7dd0,0xfffffffffffffffe);
    if (lVar4 == 0) {
      FUN_1052ac76c(param_1,&uStack_29,param_2);
    }
    else {
      lStack_28 = *(long *)(lVar4 + 8);
      if ((lStack_28 != 0) && (*(long *)(lStack_28 + 0x10) != 0)) {
        plVar1 = (long *)(*(long *)(lStack_28 + 0x10) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_1052ac920();
      func_0x000104be7e54(&lStack_28);
    }
  }
  return;
}



/* Entry: 1052ac76c; end: 1052ac91f;  */

void FUN_1052ac76c(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 **ppuVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  int iStack_70;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar6 = &puStack_80;
  __ZNSt3__15mutex4lockEv(0x11328ada8);
  puStack_58 = (undefined8 *)*param_2;
  lVar4 = 0x11328ad40;
  func_0x000104bdbfcc(0x11328ad40,&puStack_58);
  if (lVar4 == 0) {
    iVar8 = 1;
  }
  else {
    iVar8 = *(int *)(lVar4 + 0x28);
    func_0x000104bf7d80(&puStack_58,lVar4 + 0x18);
    if (puStack_58 != (undefined8 *)0x0) {
      if (puStack_58[2] != 0) {
        plVar1 = (long *)(puStack_58[2] + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puStack_80 = puStack_58;
      FUN_1052ac920();
      func_0x000104be7e54(&puStack_80);
      ppuVar6 = &puStack_58;
      goto LAB_1052ac8dc;
    }
    iVar8 = iVar8 + 1;
    func_0x000104be7e54(&puStack_58);
  }
  FUN_1052b9400(&puStack_60,param_2);
  if (lVar4 == 0) {
    uVar7 = *param_2;
    func_0x000104bf822c(&puStack_80,puStack_60);
    puVar5 = (undefined8 *)0x30;
    iStack_70 = iVar8;
    __Znwm();
    uStack_50 = 0x11328ad50;
    uStack_48 = 1;
    puVar5[2] = uVar7;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[4] = uStack_78;
    puVar5[3] = puStack_80;
    puStack_80 = (undefined8 *)0x0;
    uStack_78 = 0;
    *(int *)(puVar5 + 5) = iVar8;
    uVar7 = 0x11328ad58;
    puStack_58 = puVar5;
    func_0x000104bf7ea8();
    puVar5[1] = uVar7;
    func_0x000104bf7e44(0x11328ad40);
    if (((ulong)puVar5 & 1) != 0) {
      puStack_58 = (undefined8 *)0x0;
    }
    func_0x000104bdc220(&puStack_58);
  }
  else {
    func_0x000104bf822c(&puStack_58,puStack_60);
    uStack_48 = CONCAT44(uStack_48._4_4_,iVar8);
    func_0x000104bf7db8(lVar4 + 0x18,&puStack_58);
    ppuVar6 = &puStack_58;
  }
  func_0x000104bdc2a0(ppuVar6);
  FUN_1052ac920();
  ppuVar6 = &puStack_60;
LAB_1052ac8dc:
  func_0x000104be7e54(ppuVar6);
  __ZNSt3__15mutex6unlockEv(0x11328ada8);
  return;
}



/* Entry: 1052ac920; end: 1052ac947;  */

void FUN_1052ac920(undefined8 param_1,long *param_2)

{
  long *unaff_x19;
  
  param_2 = (long *)*param_2;
  *(undefined2 *)(unaff_x19 + 1) = 0;
  if (param_2 == (long *)0x0) {
    *unaff_x19 = 0;
  }
  else {
    *unaff_x19 = (long)param_2;
    *(undefined1 *)(unaff_x19 + 1) = 0xe;
    *(undefined1 *)((long)unaff_x19 + 9) = 1;
    (**(code **)(*param_2 + 0x10))(param_2);
  }
  return;
}



/* Entry: 1052ac948; end: 1052ace27;  */

void FUN_1052ac948(long *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  code **ppcVar3;
  code *pcVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 ***pppuVar7;
  code **ppcVar8;
  undefined8 *puVar9;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  long lVar10;
  long *plVar11;
  long unaff_x28;
  undefined8 in_register_00005008;
  undefined8 **ppuStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  code **ppcStack_168;
  undefined8 auStack_160 [2];
  code *pcStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [8];
  code *pcStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 **ppuStack_f8;
  undefined8 **ppuStack_f0;
  undefined8 *puStack_e8;
  byte abStack_e0 [16];
  undefined8 *apuStack_d0 [2];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  code **ppcStack_a0;
  undefined **ppuStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_70;
  
  func_0x0001052aeaec();
  uStack_70 = extraout_x8;
  if ((bRam00000001136b9da8 & 1) == 0) {
    iVar6 = 0x136b9da8;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      FUN_1052ad8bc();
      FUN_1052ad450(0);
      FUN_1052ad450(1);
      func_0x00010b9941f8(&ppcStack_a0);
      func_0x00010b993b40(&ppuStack_f0,ppcStack_a0,0x113818e90);
      if ((abStack_e0[0] & 1) == 0) goto LAB_1052acd74;
      func_0x0001003adcc0(0x1136b9dd8,&ppuStack_f0);
      func_0x0001003b12dc(&ppuStack_f0);
      func_0x000104bdc2fc(&ppcStack_a0);
      ___cxa_guard_release(0x1136b9da8);
    }
  }
  func_0x0001003b2110(auStack_120,0x1136b9de0);
  pcStack_138 = FUN_1052acf28;
  func_0x0001052aec94();
  uStack_130 = param_2;
  if (extraout_x8_00 != 0) {
    do {
      func_0x0001052aeacc();
    } while (extraout_w10 != 0);
  }
  pppuVar7 = &ppuStack_f0;
  FUN_1052ace28(pppuVar7,&pcStack_138);
  pcStack_150 = FUN_1052acf54;
  func_0x0001052aec94();
  if (extraout_x8_01 != 0) {
    do {
      func_0x0001052aeacc();
    } while (extraout_w10_00 != 0);
  }
  pcStack_110 = FUN_1052acf54;
  uStack_148 = 0;
  uStack_140 = 0;
  func_0x0001052aec68();
  ppcStack_a0 = (code **)FUN_1052ae5ac;
  ppuStack_98 = &PTR_FUN_110874e58;
  pcStack_90 = FUN_1052acf54;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_88 = param_2;
  func_0x0001052aed94();
  ppcStack_168 = (code **)pppuVar7;
  func_0x0001052aeadc();
  do {
    func_0x0001052aeb70();
  } while (extraout_w10_01 != 0);
  ppcStack_a0 = (code **)pppuVar7;
  func_0x0001052aed9c(abStack_e0);
  func_0x0001052aed8c();
  func_0x000104bda3d0(&ppcStack_168);
  func_0x0001052aed78();
  ppcStack_168 = (code **)FUN_1052acfb8;
  func_0x0001052aec94();
  auStack_160[0] = param_2;
  if (extraout_x8_02 != 0) {
    do {
      func_0x0001052aeacc();
    } while (extraout_w10_02 != 0);
  }
  ppcVar8 = (code **)apuStack_d0;
  FUN_1052ace28(ppcVar8,&ppcStack_168);
  pcStack_180 = FUN_1052ad030;
  func_0x0001052aec94();
  if (extraout_x8_03 != 0) {
    do {
      func_0x0001052aeacc();
    } while (extraout_w10_03 != 0);
  }
  pcStack_110 = FUN_1052ad030;
  uStack_178 = 0;
  uStack_170 = 0;
  func_0x0001052aec68();
  func_0x0001052aebdc(FUN_1052ae624);
  func_0x0001052aed94();
  ppuStack_198 = (undefined8 **)ppcVar8;
  func_0x0001052aeadc();
  do {
    func_0x0001052aeb70();
  } while (extraout_w10_04 != 0);
  ppcStack_a0 = ppcVar8;
  func_0x0001052aed9c(auStack_c0);
  func_0x0001052aed8c();
  func_0x000104bda3d0(&ppuStack_198);
  ppcVar8 = (code **)(unaff_x28 + 8);
  FUN_1052a00dc();
  ppuStack_198 = (undefined8 **)FUN_1052ad240;
  func_0x0001052aec94();
  if (extraout_x8_04 != 0) {
    do {
      func_0x0001052aeacc();
    } while (extraout_w10_05 != 0);
  }
  pcStack_110 = FUN_1052ad240;
  uStack_190 = 0;
  uStack_188 = 0;
  func_0x0001052aec68();
  func_0x0001052aebdc(FUN_1052ae7d0);
  func_0x0001052aed94();
  ppuStack_f8 = (undefined8 **)ppcVar8;
  func_0x0001052aeadc();
  do {
    func_0x0001052aeb70();
  } while (extraout_w10_06 != 0);
  ppcStack_a0 = ppcVar8;
  func_0x0001052aed9c(auStack_b0);
  func_0x0001052aed8c();
  func_0x000104bda3d0(&ppuStack_f8);
  FUN_1052a00dc(unaff_x28 + 8);
  func_0x000104bdb9bc(auStack_118,auStack_120,&ppuStack_f0,5);
  lVar10 = 0x40;
  do {
    func_0x00010b9a8d98((long)&ppuStack_f0 + lVar10);
    lVar10 = lVar10 + -0x10;
    uVar5 = lVar10 == -0x10;
  } while (!(bool)uVar5);
  FUN_1052a00dc(&uStack_190);
  func_0x0001052aed78();
  FUN_1052a00dc(auStack_160);
  FUN_1052a00dc(&uStack_148);
  func_0x0001052aee08();
  func_0x0001003b1f60(auStack_120);
  puVar9 = (undefined8 *)0x50;
  __Znwm();
  plVar11 = puVar9 + 1;
  *plVar11 = 0;
  puVar9[2] = 0;
  *puVar9 = &PTR_DAT_110874ec8;
  ppcVar8 = (code **)(puVar9 + 3);
  func_0x00010b9ace44(ppcVar8,auStack_118);
  puVar9[3] = &PTR_DAT_110874f18;
  func_0x0001052aec94();
  puVar9[9] = in_register_00005008;
  puVar9[8] = param_2;
  if (extraout_x8_05 != 0) {
    do {
      func_0x0001052aeacc();
    } while (extraout_w10_07 != 0);
  }
  if ((puVar9[5] == 0) || (uVar5 = *(long *)(puVar9[5] + 8) == -1, ppcVar3 = ppcVar8, (bool)uVar5))
  {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    ppuStack_f0 = (undefined8 **)ppcVar8;
    puStack_e8 = puVar9;
    func_0x0001003a8180(puVar9 + 4,&ppuStack_f0);
    func_0x0001003a90c4(&ppuStack_f0);
    ppcStack_a0 = ppcVar8;
    ppcVar3 = ppcVar8;
    if (puVar9[5] != 0) goto LAB_1052accb0;
  }
  else {
LAB_1052accb0:
    do {
      ppcStack_a0 = ppcVar3;
      func_0x0001052aeacc();
      ppcVar3 = ppcStack_a0;
    } while (extraout_w10_08 != 0);
  }
  *param_1 = (long)ppcVar8;
  FUN_1052aea64(&ppcStack_a0);
  func_0x000104bdbf78(auStack_118);
  func_0x0001052aeaa8(uStack_70);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
LAB_1052acd74:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1052acd7c);
  (*pcVar4)();
}



/* Entry: 1052ace28; end: 1052acf27;  */

void FUN_1052ace28(code *param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  code *pcVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  pcVar1 = param_1;
  func_0x0001052aeaec();
  uVar6 = param_2[1];
  uVar5 = *param_2;
  uVar4 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  uStack_48 = extraout_x8;
  func_0x0001052aec68();
  pcStack_78 = FUN_1052ae508;
  ppuStack_70 = &PTR_FUN_110874e38;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_68 = uVar5;
  uStack_60 = uVar6;
  uStack_58 = uVar4;
  func_0x00010b9ac22c();
  pcStack_80 = pcVar1;
  func_0x0001052aecd0();
  do {
    func_0x0001052aeb70();
  } while (extraout_w10 != 0);
  iVar3 = (int)&pcStack_78;
  pcStack_78 = pcVar1;
  func_0x00010b9a8ef8(param_1);
  func_0x000104bda388(&pcStack_78);
  func_0x000104bda3d0(&pcStack_80);
  puVar2 = &uStack_90;
  FUN_1052a00dc();
  func_0x0001052aeaa8(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (iVar3 == 0) {
    func_0x0001052aeb2c();
  }
  else {
    func_0x0001052aecd0();
    __ZdlPv(pcVar1);
  }
  func_0x0001052aed58();
  func_0x0001052aeb88();
  (**(code **)(extraout_x8_00 + 0x10))();
  *(undefined2 *)(puVar2 + 1) = 1;
  *puVar2 = 0;
  return;
}



/* Entry: 1052acf28; end: 1052acf53;  */

void FUN_1052acf28(void)

{
  long extraout_x8;
  undefined8 *unaff_x19;
  
  func_0x0001052aeb88();
  (**(code **)(extraout_x8 + 0x10))();
  *(undefined2 *)(unaff_x19 + 1) = 1;
  *unaff_x19 = 0;
  return;
}



/* Entry: 1052acf54; end: 1052acfb7;  */

void FUN_1052acf54(void)

{
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  func_0x0001052aeb88();
  func_0x0001052aedc8();
  func_0x0001052aed18();
  FUN_1052a5218(auStack_40);
  FUN_1052a55c0(auStack_40);
  FUN_1052a55c0(auStack_30);
  return;
}



/* Entry: 1052acfb8; end: 1052ad02f;  */

void FUN_1052acfb8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_98 [120];
  
  func_0x00010b9abfa4(param_3,0);
  plVar1 = (long *)*param_2;
  FUN_1052be72c(auStack_98);
  (**(code **)(*plVar1 + 0x20))(plVar1,auStack_98);
  func_0x00010529fe04(auStack_98);
  *(undefined2 *)(param_1 + 1) = 1;
  *param_1 = 0;
  return;
}



/* Entry: 1052ad030; end: 1052ad23f;  */

void FUN_1052ad030(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x9;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  undefined1 auStack_e0 [48];
  undefined1 auStack_b0 [24];
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001052aeb88();
  func_0x0001052aedc8();
  func_0x0001052aed18();
  func_0x000104bf2d3c(&lStack_98);
  if ((lStack_98 != 0) && (*(long *)(lStack_98 + 0x10) != 0)) {
    do {
      func_0x0001052aeabc();
    } while (extraout_w11 != 0);
  }
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_1052ad910(auStack_40,auStack_e0,&uStack_50);
  FUN_1052ad944(&uStack_30,auStack_40);
  FUN_1052adbac(auStack_40);
  FUN_1052adbac(&uStack_50);
  func_0x0001003b69cc(&uStack_58);
  func_0x0001003b6c18(auStack_40,uStack_58);
  func_0x0001052aebbc();
  lStack_90 = extraout_x8 + 0xa0;
  lStack_88 = CONCAT71(lStack_88._1_7_,1);
  __ZNSt3__15mutex4lockEv();
  uVar1 = uStack_30;
  func_0x0001052ad97c();
  if ((int)uVar1 == 0) {
    uVar1 = 0x18;
    __Znwm();
    func_0x0001052aed28(&PTR_FUN_110874d98);
    lVar3 = *(long *)(extraout_x9 + 0xe8);
    *(undefined8 *)(extraout_x9 + 0xe8) = uVar1;
    if (lVar3 != 0) {
      func_0x0001052aece8();
    }
  }
  else {
    FUN_1052ad944(&lStack_80,&uStack_30);
  }
  func_0x0001052aece0();
  if (lStack_80 != 0) {
    lStack_90 = lStack_80;
    lStack_88 = lStack_78;
    if (lStack_78 != 0) {
      do {
        func_0x0001052aeacc();
      } while (extraout_w10 != 0);
    }
    FUN_1052ad9bc(auStack_70);
    FUN_1052adbac(&lStack_90);
  }
  func_0x0001052aee60();
  FUN_1052adbac();
  puVar2 = auStack_70;
  func_0x0001052ade90();
  func_0x0001052aec30();
  func_0x0001052aee20();
  if (puVar2 != (undefined1 *)0x0) {
    func_0x0001052aeb20();
  }
  func_0x0001052aec50();
  func_0x0001003b6c64(auStack_b0);
  func_0x0001052aeca0();
  if ((lStack_98 != 0) && (*(long *)(lStack_98 + 0x10) != 0)) {
    do {
      func_0x0001052aeabc();
    } while (extraout_w11_00 != 0);
  }
  func_0x0001052aeb68();
  func_0x000104bddedc(&uStack_30);
  func_0x0001052aec58();
  func_0x0001052aeba0();
  func_0x0001052aec78();
  return;
}



/* Entry: 1052ad240; end: 1052ad44f;  */

void FUN_1052ad240(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x9;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  undefined1 auStack_e0 [48];
  undefined1 auStack_b0 [24];
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001052aeb88();
  func_0x0001052aedc8();
  func_0x0001052aed18();
  func_0x000104bf2d3c(&lStack_98);
  if ((lStack_98 != 0) && (*(long *)(lStack_98 + 0x10) != 0)) {
    do {
      func_0x0001052aeabc();
    } while (extraout_w11 != 0);
  }
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_1052adeb0(auStack_40,auStack_e0,&uStack_50);
  FUN_1052adee4(&uStack_30,auStack_40);
  FUN_1052ae2f8(auStack_40);
  FUN_1052ae2f8(&uStack_50);
  func_0x0001003b69cc(&uStack_58);
  func_0x0001003b6c18(auStack_40,uStack_58);
  func_0x0001052aebbc();
  lStack_90 = extraout_x8 + 0x48;
  lStack_88 = CONCAT71(lStack_88._1_7_,1);
  __ZNSt3__15mutex4lockEv();
  uVar1 = uStack_30;
  func_0x0001052adf1c();
  if ((int)uVar1 == 0) {
    uVar1 = 0x18;
    __Znwm();
    func_0x0001052aed28(&PTR_FUN_110874de8);
    lVar3 = *(long *)(extraout_x9 + 0x90);
    *(undefined8 *)(extraout_x9 + 0x90) = uVar1;
    if (lVar3 != 0) {
      func_0x0001052aece8();
    }
  }
  else {
    FUN_1052adee4(&lStack_80,&uStack_30);
  }
  func_0x0001052aece0();
  if (lStack_80 != 0) {
    lStack_90 = lStack_80;
    lStack_88 = lStack_78;
    if (lStack_78 != 0) {
      do {
        func_0x0001052aeacc();
      } while (extraout_w10 != 0);
    }
    FUN_1052adf5c(auStack_70);
    FUN_1052ae2f8(&lStack_90);
  }
  func_0x0001052aee60();
  FUN_1052ae2f8();
  puVar2 = auStack_70;
  FUN_1052ae4e8();
  func_0x0001052aec30();
  func_0x0001052aee20();
  if (puVar2 != (undefined1 *)0x0) {
    func_0x0001052aeb20();
  }
  func_0x0001052aec48();
  func_0x0001003b6c64(auStack_b0);
  func_0x0001052aeca0();
  if ((lStack_98 != 0) && (*(long *)(lStack_98 + 0x10) != 0)) {
    do {
      func_0x0001052aeabc();
    } while (extraout_w11_00 != 0);
  }
  func_0x0001052aeb68();
  func_0x000104bddedc(&uStack_30);
  func_0x0001052aec58();
  func_0x0001052aeb98();
  func_0x0001052aec70();
  return;
}



/* Entry: 1052ad450; end: 1052ad81f;  */

void FUN_1052ad450(ulong param_1)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  char *pcVar3;
  undefined8 extraout_x8;
  long lVar4;
  undefined1 auStack_158 [16];
  undefined8 uStack_148;
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  undefined8 uStack_108;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a8 [16];
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x0001052aeaec();
  uStack_38 = extraout_x8;
  FUN_1052aa96c();
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x1136b9da0);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x1136b9da0) = 1;
  if ((bVar1 & 1) != 0) goto LAB_1052ad4ac;
  if ((bRam00000001136b9db0 & 1) == 0) goto LAB_1052ad4d0;
  while( true ) {
    func_0x000108b80888(0x1136b9de8,param_1);
LAB_1052ad4ac:
    func_0x0001052aeaa8(uStack_38);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_1052ad4d0:
    iVar2 = 0x136b9db0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_1052ad8bc();
      func_0x0001003a83dc(&uStack_c8,"cancel");
      func_0x0001003b166c(auStack_e8);
      func_0x0001052aeb14(auStack_d8,auStack_e8);
      uStack_b0 = uStack_c8;
      uStack_c8 = 0;
      func_0x0001003aef98(auStack_a8,auStack_d8);
      func_0x0001003a83dc(&uStack_f0,"futureError");
      FUN_1052a5910();
      func_0x0001052aeb14(auStack_100);
      uStack_98 = uStack_f0;
      uStack_f0 = 0;
      func_0x0001003aef98(auStack_90,auStack_100);
      pcVar3 = "updateRequestContext";
      func_0x0001003a83dc(&uStack_108,"updateRequestContext");
      func_0x0001003b166c(auStack_128);
      FUN_1052be804();
      func_0x0001003adcc0(auStack_c0,pcVar3);
      func_0x000104bdbd48(auStack_118,auStack_128,auStack_c0,1);
      uStack_80 = uStack_108;
      uStack_108 = 0;
      func_0x0001003aef98(auStack_78,auStack_118);
      func_0x0001003a83dc(&uStack_130,"futureMetadata");
      if ((bRam00000001136b9db8 & 1) == 0) {
        iVar2 = 0x136b9db8;
        ___cxa_guard_acquire();
        if (iVar2 != 0) {
          if ((bRam00000001136b9dc0 & 1) == 0) {
            iVar2 = 0x136b9dc0;
            ___cxa_guard_acquire();
            if (iVar2 != 0) {
              FUN_1052ac284();
              func_0x00010b990784(0x1136b9e08);
              ___cxa_guard_release(0x1136b9dc0);
            }
          }
          func_0x00010b9911c4(0x1136b9e08);
          ___cxa_guard_release(0x1136b9db8);
        }
      }
      func_0x0001052aeb14(auStack_140,0x1136b9df8);
      uStack_68 = uStack_130;
      uStack_130 = 0;
      func_0x0001003aef98(auStack_60,auStack_140);
      func_0x0001003a83dc(&uStack_148,"createContentStreamer");
      if ((bRam00000001136b9dc8 & 1) == 0) {
        iVar2 = 0x136b9dc8;
        ___cxa_guard_acquire();
        if (iVar2 != 0) {
          if ((bRam00000001136b9dd0 & 1) == 0) {
            iVar2 = 0x136b9dd0;
            ___cxa_guard_acquire();
            if (iVar2 != 0) {
              FUN_1052aac0c();
              func_0x00010b990784(0x1136b9e28);
              ___cxa_guard_release(0x1136b9dd0);
            }
          }
          func_0x00010b9911c4(0x1136b9e28);
          ___cxa_guard_release(0x1136b9dc8);
        }
      }
      func_0x0001052aeb14(auStack_158,0x1136b9e18);
      uStack_50 = uStack_148;
      uStack_148 = 0;
      func_0x0001003aef98(auStack_48,auStack_158);
      func_0x000104bdbd44(0x1136b9de8,0x113818e90,1,&uStack_b0,5);
      lVar4 = 0x60;
      do {
        func_0x0001003b1c5c(auStack_a8 + lVar4 + -8);
        lVar4 = lVar4 + -0x18;
        in_ZR = lVar4 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001052aeb34(auStack_158);
      func_0x0001003a8c94(&uStack_148);
      func_0x0001052aeb34(auStack_140);
      func_0x0001003a8c94(&uStack_130);
      func_0x0001052aeb34(auStack_118);
      func_0x0001052aeb34(auStack_c0);
      func_0x0001052aeb34(auStack_128);
      func_0x0001003a8c94(&uStack_108);
      func_0x0001052aeb34(auStack_100);
      func_0x0001003a8c94(&uStack_f0);
      func_0x0001052aeb34(auStack_d8);
      func_0x0001052aeb34(auStack_e8);
      func_0x0001003a8c94(&uStack_c8);
      ___cxa_guard_release(0x1136b9db0);
    }
  }
  return;
}



/* Entry: 1052ad820; end: 1052ad8bb;  */

undefined8 FUN_1052ad820(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam0000000113818e88 & 1) == 0) {
    iVar4 = 0x13818e88;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_1052ad8bc();
      lStack_20 = lRam0000000113818e90;
      if (lRam0000000113818e90 != 0) {
        piVar1 = (int *)(lRam0000000113818e90 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_18 = 0xff00;
      func_0x0001003ad9a4(0x113818e78,&lStack_20);
      func_0x0001003a8c94(&lStack_20);
      ___cxa_guard_release(0x113818e88);
    }
  }
  return 0x113818e78;
}



/* Entry: 1052ad8bc; end: 1052ad90f;  */

void FUN_1052ad8bc(void)

{
  int iVar1;
  
  if ((bRam0000000113818e98 & 1) == 0) {
    iVar1 = 0x13818e98;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x113818e90,"_djinni_interface_PrefetchContentResult");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113818e98);
      return;
    }
  }
  return;
}



/* Entry: 1052ad910; end: 1052ad943;  */

void FUN_1052ad910(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 uVar1;
  
  func_0x0001052aec18();
  __ZNSt3__18__sp_mut4lockEv();
  func_0x0001052aeb50();
  uVar1 = *unaff_x19;
  unaff_x21[1] = unaff_x19[1];
  *unaff_x21 = uVar1;
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 1052ad944; end: 1052ad9bb;  */

undefined8 * FUN_1052ad944(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x0001052aeba0();
  return param_1;
}



/* Entry: 1052ad9bc; end: 1052adbab;  */

undefined8 * FUN_1052ad9bc(long *param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *puVar3;
  int unaff_w21;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined2 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  char cStack_58;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  func_0x0001052aeaec();
  uStack_e8 = param_2;
  lStack_e0 = param_3;
  uStack_38 = extraout_x8;
  if (param_3 != 0) {
    do {
      func_0x0001052aeacc();
    } while (extraout_w10 != 0);
    do {
      func_0x0001052aeacc();
    } while (extraout_w10_00 != 0);
  }
  puVar3 = (undefined8 *)*param_1;
  uStack_d8 = param_2;
  lStack_d0 = param_3;
  FUN_1052adc5c(&uStack_b8,&uStack_d8);
  uVar1 = cStack_58 == '\x01';
  if ((bool)uVar1) {
    FUN_1052ac0f4(&uStack_c8,&uStack_b8);
  }
  else {
    uStack_c0 = 1;
    uStack_c8 = 0;
  }
  func_0x000104bf351c(auStack_50,&uStack_c8);
  func_0x0001052aeb80();
  func_0x000104bda914(auStack_50);
  func_0x00010b9a8d98(&uStack_c8);
  FUN_1052ade48(&uStack_b8);
  do {
    FUN_1052adbac(&uStack_d8);
    FUN_1052adbac(&uStack_e8);
    puVar2 = (undefined8 *)param_1[1];
    func_0x0001003b8370(puVar2);
    while( true ) {
      func_0x0001052aeaa8(uStack_38);
      if ((bool)uVar1) {
        return puVar2;
      }
      ___stack_chk_fail();
      func_0x0001052aebfc();
      puVar2 = &uStack_b8;
      FUN_1052ade48(puVar2);
      uVar1 = unaff_w21 == 1;
      if ((bool)uVar1) break;
      FUN_1052adbac(&uStack_d8);
      puVar2 = &uStack_e8;
      FUN_1052adbac(puVar2);
      uVar1 = unaff_w21 == 1;
      if (!(bool)uVar1) {
        __Unwind_Resume(puVar3);
        func_0x000104bd46a0();
        if (puVar3[1] != 0) {
          func_0x0001000df548();
        }
        return puVar3;
      }
      func_0x0001052aeca8();
      func_0x0001052aedb0();
      func_0x0001052aeda4();
      func_0x0001052aec80();
      ___cxa_end_catch();
    }
    func_0x0001052aeca8();
    func_0x0001052aecb0();
    func_0x00010b99f5f8(&uStack_c8,puVar2);
    uStack_b8 = 2;
    uStack_b0 = uStack_c8;
    uStack_c8 = 0;
    func_0x0001052aeb80();
    func_0x000104bda914(&uStack_b8);
    func_0x000104bda93c(&uStack_c8);
    ___cxa_end_catch();
  } while( true );
}



/* Entry: 1052adbac; end: 1052adbd3;  */

long FUN_1052adbac(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1052adbd4; end: 1052adbd7;  */

undefined8 * FUN_1052adbd4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110874d98;
  func_0x0001052ade90(param_1 + 1);
  return param_1;
}



/* Entry: 1052adbd8; end: 1052adbeb;  */

void FUN_1052adbd8(void)

{
  FUN_1052adc30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1052adbec; end: 1052adc2f;  */

void FUN_1052adbec(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x0001052aee38();
  if (param_3 != 0) {
    do {
      func_0x0001052aeacc();
    } while (extraout_w10 != 0);
  }
  FUN_1052ad9bc(param_1 + 8);
  func_0x0001052aeba0();
  return;
}



/* Entry: 1052adc30; end: 1052adc5b;  */

undefined8 * FUN_1052adc30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110874d98;
  func_0x0001052ade90(param_1 + 1);
  return param_1;
}



/* Entry: 1052adc5c; end: 1052add5b;  */

void FUN_1052adc5c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long extraout_x8;
  long lVar2;
  int extraout_w11;
  undefined1 auStack_68 [8];
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_30 = 0;
  lStack_28 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_1052ad910(&lStack_40,param_2,&uStack_50);
  FUN_1052ad944(&lStack_30,&lStack_40);
  FUN_1052adbac(&lStack_40);
  FUN_1052adbac(&uStack_50);
  lStack_40 = lStack_30 + 0xa0;
  uStack_38 = 1;
  __ZNSt3__15mutex4lockEv();
  lStack_60 = lStack_30;
  lStack_58 = lStack_28;
  lVar2 = lStack_30;
  if (lStack_28 != 0) {
    do {
      func_0x0001052aeabc();
      lVar2 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  FUN_1052add5c(lVar2 + 0x70,&lStack_40,&lStack_60);
  func_0x0001052aec78();
  if (*(long *)(lStack_30 + 0xe0) != 0) {
    __ZNSt13exception_ptrC1ERKS_(auStack_68,(long *)(lStack_30 + 0xe0));
    __ZSt17rethrow_exceptionSt13exception_ptr(auStack_68);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1052add24);
    (*pcVar1)();
  }
  FUN_1052add9c(param_1);
  func_0x0001052aecc8();
  func_0x0001052aec50();
  return;
}



/* Entry: 1052add5c; end: 1052add93;  */

void FUN_1052add5c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  while (uVar1 = param_3, FUN_1052add94(), (uVar1 & 1) == 0) {
    func_0x0001052aedd0();
  }
  return;
}



/* Entry: 1052add94; end: 1052add9b;  */

bool FUN_1052add94(long *param_1)

{
  bool bVar1;
  
  if ((*(byte *)(*param_1 + 0x68) & 1) == 0) {
    bVar1 = *(long *)(*param_1 + 0xe0) != 0;
    func_0x0001052aec60();
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 1052add9c; end: 1052addc7;  */

undefined1 * FUN_1052add9c(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x60] = 0;
  FUN_1052addc8();
  return param_1;
}



/* Entry: 1052addc8; end: 1052adddb;  */

void FUN_1052addc8(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_1052addf8();
    *(undefined1 *)(param_1 + 0x60) = 1;
    return;
  }
  return;
}



/* Entry: 1052adddc; end: 1052addf7;  */

void FUN_1052adddc(long param_1)

{
  FUN_1052addf8();
  *(undefined1 *)(param_1 + 0x60) = 1;
  return;
}



/* Entry: 1052addf8; end: 1052ade47;  */

undefined8 * FUN_1052addf8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[2] = param_2[2];
  FUN_1052ac5d8(param_1 + 3,param_2 + 3);
  uVar2 = param_2[9];
  uVar1 = param_2[8];
  uVar3 = *(undefined8 *)((long)param_2 + 0x49);
  *(undefined8 *)((long)param_1 + 0x51) = *(undefined8 *)((long)param_2 + 0x51);
  *(undefined8 *)((long)param_1 + 0x49) = uVar3;
  param_1[9] = uVar2;
  param_1[8] = uVar1;
  return param_1;
}



/* Entry: 1052ade48; end: 1052ade67;  */

void FUN_1052ade48(long param_1)

{
  if (*(char *)(param_1 + 0x60) == '\x01') {
    FUN_1052ade68();
  }
  return;
}



/* Entry: 1052ade68; end: 1052adeaf;  */

long FUN_1052ade68(long param_1)

{
  FUN_1052ac664(param_1 + 0x18);
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1052adeb0; end: 1052adee3;  */

void FUN_1052adeb0(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 uVar1;
  
  func_0x0001052aec18();
  __ZNSt3__18__sp_mut4lockEv();
  func_0x0001052aeb50();
  uVar1 = *unaff_x19;
  unaff_x21[1] = unaff_x19[1];
  *unaff_x21 = uVar1;
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 1052adee4; end: 1052adf5b;  */

undefined8 * FUN_1052adee4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x0001052aeb98();
  return param_1;
}



/* Entry: 1052adf5c; end: 1052ae2f7;  */

void FUN_1052adf5c(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x21;
  int iVar6;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 *apuStack_a8 [2];
  undefined8 uStack_98;
  undefined2 uStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  int iStack_70;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x0001052aeaec();
  uStack_c8 = param_2;
  lStack_c0 = param_3;
  uStack_48 = extraout_x8;
  if (param_3 != 0) {
    do {
      func_0x0001052aeacc();
    } while (extraout_w10 != 0);
    do {
      func_0x0001052aeacc();
    } while (extraout_w10_00 != 0);
  }
  uStack_b8 = param_2;
  lStack_b0 = param_3;
  FUN_1052ae3a8(apuStack_a8,&uStack_b8);
  if (apuStack_a8[0] == (undefined8 *)0x0) {
    uStack_90 = 1;
    uStack_98 = 0;
    goto LAB_1052ae16c;
  }
  puVar2 = apuStack_a8[0];
  ___dynamic_cast(apuStack_a8[0],&PTR_DAT_110874e28,&PTR_DAT_1107e7dd0,0xfffffffffffffffe);
  if (puVar2 != (undefined8 *)0x0) {
    puStack_60 = (undefined8 *)puVar2[1];
    if ((puStack_60 != (undefined8 *)0x0) && (puStack_60[2] != 0)) {
      do {
        func_0x0001052aeabc();
        puStack_60 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    func_0x00010b9a8f6c(&uStack_98,&puStack_60);
    func_0x000104be7e54(&puStack_60);
    goto LAB_1052ae16c;
  }
  func_0x0001052aedf0();
  puStack_60 = apuStack_a8[0];
  unaff_x21 = 0x11328ad40;
  lVar1 = unaff_x21;
  func_0x000104bdbfcc(0x11328ad40,&puStack_60);
  if (lVar1 == 0) {
    iVar6 = 1;
LAB_1052ae0a4:
    FUN_1052aa114(&puStack_88,apuStack_a8);
    if (lVar1 == 0) {
      func_0x000104bf822c(&puStack_80,puStack_88);
      puVar2 = (undefined8 *)0x30;
      iStack_70 = iVar6;
      __Znwm();
      uStack_58 = 0x11328ad50;
      uStack_50 = 1;
      puVar2[2] = apuStack_a8[0];
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[4] = uStack_78;
      puVar2[3] = puStack_80;
      puStack_80 = (undefined8 *)0x0;
      uStack_78 = 0;
      *(int *)(puVar2 + 5) = iVar6;
      uVar4 = 0x11328ad58;
      puStack_60 = puVar2;
      func_0x000104bf7ea8();
      puVar2[1] = uVar4;
      func_0x000104bf7e44(0x11328ad40);
      if (((ulong)puVar2 & 1) != 0) {
        puStack_60 = (undefined8 *)0x0;
      }
      func_0x000104bdc220(&puStack_60);
      ppuVar3 = &puStack_80;
    }
    else {
      func_0x000104bf822c(&puStack_60,puStack_88);
      uStack_50 = CONCAT44(uStack_50._4_4_,iVar6);
      func_0x000104bf7db8(lVar1 + 0x18,&puStack_60);
      ppuVar3 = &puStack_60;
    }
    func_0x000104bdc2a0(ppuVar3);
    func_0x00010b9a8f6c(&uStack_98,&puStack_88);
    ppuVar3 = &puStack_88;
  }
  else {
    iVar6 = *(int *)(lVar1 + 0x28);
    func_0x000104bf7d80(&puStack_60,lVar1 + 0x18);
    if (puStack_60 == (undefined8 *)0x0) {
      iVar6 = iVar6 + 1;
      func_0x000104be7e54(&puStack_60);
      goto LAB_1052ae0a4;
    }
    puStack_80 = puStack_60;
    if (puStack_60[2] != 0) {
      do {
        func_0x0001052aeabc();
        puStack_80 = extraout_x8_01;
      } while (extraout_w11_00 != 0);
    }
    func_0x00010b9a8f6c(&uStack_98,&puStack_80);
    func_0x000104be7e54(&puStack_80);
    ppuVar3 = &puStack_60;
  }
  func_0x000104be7e54(ppuVar3);
  func_0x0001052aedfc();
LAB_1052ae16c:
  func_0x000104bf351c(&puStack_60,&uStack_98);
  ppuVar3 = &puStack_60;
  func_0x0001052aeb80();
  func_0x000104bda914(&puStack_60);
  func_0x00010b9a8d98(&uStack_98);
  func_0x0001052aad48(apuStack_a8);
  FUN_1052ae2f8(&uStack_b8);
  FUN_1052ae2f8(&uStack_c8);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x0001003b8370(uVar4);
  while (func_0x0001052aeaa8(uStack_48), !(bool)in_ZR) {
    ___stack_chk_fail();
    if ((int)ppuVar3 == 0) goto LAB_1052ae1f4;
    func_0x000104bdc220(&puStack_60);
    while( true ) {
      uVar5 = uVar4;
      func_0x000104bd46a0(uVar4);
      func_0x0001052aec88();
      if (((int)unaff_x21 != 0) && (in_ZR = (int)unaff_x21 == 1, (bool)in_ZR)) break;
LAB_1052ae1f4:
      __Unwind_Resume(uVar4);
    }
    func_0x0001052aeca8();
    func_0x0001052aedb0();
    func_0x0001052aeda4();
    func_0x0001052aec80();
    ___cxa_end_catch();
    uVar4 = uVar5;
  }
  return;
}



/* Entry: 1052ae2f8; end: 1052ae31f;  */

long FUN_1052ae2f8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1052ae320; end: 1052ae323;  */

undefined8 * FUN_1052ae320(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110874de8;
  FUN_1052ae4e8(param_1 + 1);
  return param_1;
}



/* Entry: 1052ae324; end: 1052ae337;  */

void FUN_1052ae324(void)

{
  FUN_1052ae37c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1052ae338; end: 1052ae37b;  */

void FUN_1052ae338(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x0001052aee38();
  if (param_3 != 0) {
    do {
      func_0x0001052aeacc();
    } while (extraout_w10 != 0);
  }
  FUN_1052adf5c(param_1 + 8);
  func_0x0001052aeb98();
  return;
}



/* Entry: 1052ae37c; end: 1052ae3a7;  */

undefined8 * FUN_1052ae37c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110874de8;
  FUN_1052ae4e8(param_1 + 1);
  return param_1;
}



/* Entry: 1052ae3a8; end: 1052ae4a7;  */

void FUN_1052ae3a8(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 *extraout_x8;
  undefined8 *puVar2;
  int extraout_w11;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  undefined8 *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined1 uStack_38;
  undefined8 *puStack_30;
  long lStack_28;
  
  puStack_30 = (undefined8 *)0x0;
  lStack_28 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_1052adeb0(&puStack_40,param_2,&uStack_50);
  FUN_1052adee4(&puStack_30,&puStack_40);
  FUN_1052ae2f8(&puStack_40);
  FUN_1052ae2f8(&uStack_50);
  puStack_40 = puStack_30 + 9;
  uStack_38 = 1;
  __ZNSt3__15mutex4lockEv();
  puStack_60 = puStack_30;
  lStack_58 = lStack_28;
  puVar2 = puStack_30;
  if (lStack_28 != 0) {
    do {
      func_0x0001052aeabc();
      puVar2 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  FUN_1052ae4a8(puVar2 + 3,&puStack_40,&puStack_60);
  func_0x0001052aec70();
  if (puStack_30[0x11] != 0) {
    __ZNSt13exception_ptrC1ERKS_(auStack_68);
    __ZSt17rethrow_exceptionSt13exception_ptr(auStack_68);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1052ae470);
    (*pcVar1)();
  }
  uVar3 = *puStack_30;
  param_1[1] = puStack_30[1];
  *param_1 = uVar3;
  *puStack_30 = 0;
  puStack_30[1] = 0;
  func_0x0001052aecc8();
  func_0x0001052aec48();
  return;
}



/* Entry: 1052ae4a8; end: 1052ae4df;  */

void FUN_1052ae4a8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  while (uVar1 = param_3, FUN_1052ae4e0(), (uVar1 & 1) == 0) {
    func_0x0001052aedd0();
  }
  return;
}



/* Entry: 1052ae4e0; end: 1052ae4e7;  */

bool FUN_1052ae4e0(long *param_1)

{
  bool bVar1;
  
  if ((*(byte *)(*param_1 + 0x10) & 1) == 0) {
    bVar1 = *(long *)(*param_1 + 0x88) != 0;
    func_0x0001052aec60();
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 1052ae4e8; end: 1052ae507;  */

undefined8 FUN_1052ae4e8(void)

{
  undefined8 unaff_x19;
  
  func_0x0001052aed60();
  func_0x0001003b6ce0();
  func_0x000104bf3588();
  return unaff_x19;
}



/* Entry: 1052ae508; end: 1052ae563;  */

void FUN_1052ae508(void)

{
  func_0x0001052aed6c();
  return;
}



/* Entry: 1052ae564; end: 1052ae5ab;  */

void FUN_1052ae564(long param_1)

{
  param_1 = param_1 + 0x10;
  func_0x0001005f1e70();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1052ae5ac; end: 1052ae607;  */

void FUN_1052ae5ac(void)

{
  func_0x0001052aed6c();
  return;
}



/* Entry: 1052ae608; end: 1052ae623;  */

void FUN_1052ae608(long param_1)

{
  param_1 = param_1 + 0x10;
  func_0x0001005f1e70();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1052ae624; end: 1052ae7b3;  */

undefined8 **** FUN_1052ae624(undefined8 ****param_1,undefined8 ****param_2,undefined8 ***param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  int iVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 ***extraout_x8_01;
  undefined8 ***pppuVar5;
  undefined8 ***extraout_x8_02;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 ***pppuStack_78;
  undefined8 **ppuStack_70;
  undefined8 **ppuStack_68;
  undefined8 ***pppuStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  func_0x0001052aeaec();
  uStack_38 = extraout_x8;
  func_0x0001052aec38();
  while( true ) {
    func_0x0001052aeaa8(uStack_38);
    if ((bool)in_ZR) {
      return param_2;
    }
    ___stack_chk_fail();
    iVar4 = (int)param_3;
    if (iVar4 == 0) break;
    in_ZR = iVar4 == 3;
    if ((bool)in_ZR) {
      ___cxa_begin_catch();
      func_0x000104bf2d3c(&pppuStack_60);
      func_0x0001052aee74();
      if (extraout_x8_00 != 0) {
        plVar1 = (long *)(extraout_x8_00 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      func_0x00010b9a4940();
      func_0x0001052aecc0();
      pppuVar5 = pppuStack_60;
      if ((pppuStack_60 != (undefined8 ***)0x0) && (pppuStack_60[2] != (undefined8 **)0x0)) {
        do {
          func_0x0001052aeabc();
          pppuVar5 = extraout_x8_01;
        } while (extraout_w11 != 0);
      }
      param_3 = &ppuStack_68;
      ppuStack_68 = pppuVar5;
      func_0x0001052aeb68();
      func_0x000104bddedc(&ppuStack_68);
      param_2 = &pppuStack_60;
      func_0x000104bf3564();
    }
    else {
      in_ZR = iVar4 == 2;
      if (!(bool)in_ZR) goto LAB_1052ae7a8;
      ___cxa_begin_catch();
      func_0x0001003a8364();
      func_0x0001052aeba8();
      uStack_58 = 0;
      pppuStack_60 = param_2;
      func_0x0001052aee14();
      func_0x0001052aec08();
      func_0x0001052aed08();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
      func_0x000104bf2d3c(&ppuStack_68);
      pppuStack_78 = pppuStack_60;
      pppuStack_60 = (undefined8 ***)0x0;
      func_0x0001052aedbc();
      func_0x0001052aee4c();
      func_0x0001052aeb80();
      func_0x0001052aecc0();
      func_0x000104bda93c(&ppuStack_70);
      func_0x0001003a8c94(&pppuStack_78);
      pppuVar5 = (undefined8 ***)ppuStack_68;
      if (((undefined8 ***)ppuStack_68 != (undefined8 ***)0x0) &&
         ((undefined8 **)ppuStack_68[2] != (undefined8 **)0x0)) {
        do {
          func_0x0001052aeabc();
          pppuVar5 = extraout_x8_02;
        } while (extraout_w11_00 != 0);
      }
      param_3 = &ppuStack_70;
      ppuStack_70 = pppuVar5;
      func_0x0001052aeb68();
      func_0x000104bddedc(&ppuStack_70);
      func_0x000104bf3564(&ppuStack_68);
      param_2 = &pppuStack_60;
      func_0x0001003a8c94();
    }
    ___cxa_end_catch();
  }
FUN_1052a00dc:
  __Unwind_Resume();
  param_2 = param_2 + 2;
  func_0x0001005f1e70();
  if (param_2 != (undefined8 ****)0x0) {
    func_0x0001000df548();
  }
  return param_1;
LAB_1052ae7a8:
  do {
    func_0x000104bd46a0();
  } while ((int)param_3 != 0);
  goto FUN_1052a00dc;
}



/* Entry: 1052ae7b4; end: 1052ae7cf;  */

void FUN_1052ae7b4(long param_1)

{
  param_1 = param_1 + 0x10;
  func_0x0001005f1e70();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1052ae7d0; end: 1052ae95f;  */

undefined8 **** FUN_1052ae7d0(undefined8 ****param_1,undefined8 ****param_2,undefined8 ***param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  int iVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 ***extraout_x8_01;
  undefined8 ***pppuVar5;
  undefined8 ***extraout_x8_02;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 ***pppuStack_78;
  undefined8 **ppuStack_70;
  undefined8 **ppuStack_68;
  undefined8 ***pppuStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  func_0x0001052aeaec();
  uStack_38 = extraout_x8;
  func_0x0001052aec38();
  while( true ) {
    func_0x0001052aeaa8(uStack_38);
    if ((bool)in_ZR) {
      return param_2;
    }
    ___stack_chk_fail();
    iVar4 = (int)param_3;
    if (iVar4 == 0) break;
    in_ZR = iVar4 == 3;
    if ((bool)in_ZR) {
      ___cxa_begin_catch();
      func_0x000104bf2d3c(&pppuStack_60);
      func_0x0001052aee74();
      if (extraout_x8_00 != 0) {
        plVar1 = (long *)(extraout_x8_00 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      func_0x00010b9a4940();
      func_0x0001052aecc0();
      pppuVar5 = pppuStack_60;
      if ((pppuStack_60 != (undefined8 ***)0x0) && (pppuStack_60[2] != (undefined8 **)0x0)) {
        do {
          func_0x0001052aeabc();
          pppuVar5 = extraout_x8_01;
        } while (extraout_w11 != 0);
      }
      param_3 = &ppuStack_68;
      ppuStack_68 = pppuVar5;
      func_0x0001052aeb68();
      func_0x000104bddedc(&ppuStack_68);
      param_2 = &pppuStack_60;
      func_0x000104bf3564();
    }
    else {
      in_ZR = iVar4 == 2;
      if (!(bool)in_ZR) goto LAB_1052ae954;
      ___cxa_begin_catch();
      func_0x0001003a8364();
      func_0x0001052aeba8();
      uStack_58 = 0;
      pppuStack_60 = param_2;
      func_0x0001052aee14();
      func_0x0001052aec08();
      func_0x0001052aed08();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
      func_0x000104bf2d3c(&ppuStack_68);
      pppuStack_78 = pppuStack_60;
      pppuStack_60 = (undefined8 ***)0x0;
      func_0x0001052aedbc();
      func_0x0001052aee4c();
      func_0x0001052aeb80();
      func_0x0001052aecc0();
      func_0x000104bda93c(&ppuStack_70);
      func_0x0001003a8c94(&pppuStack_78);
      pppuVar5 = (undefined8 ***)ppuStack_68;
      if (((undefined8 ***)ppuStack_68 != (undefined8 ***)0x0) &&
         ((undefined8 **)ppuStack_68[2] != (undefined8 **)0x0)) {
        do {
          func_0x0001052aeabc();
          pppuVar5 = extraout_x8_02;
        } while (extraout_w11_00 != 0);
      }
      param_3 = &ppuStack_70;
      ppuStack_70 = pppuVar5;
      func_0x0001052aeb68();
      func_0x000104bddedc(&ppuStack_70);
      func_0x000104bf3564(&ppuStack_68);
      param_2 = &pppuStack_60;
      func_0x0001003a8c94();
    }
    ___cxa_end_catch();
  }
FUN_1052a00dc:
  __Unwind_Resume();
  param_2 = param_2 + 2;
  func_0x0001005f1e70();
  if (param_2 != (undefined8 ****)0x0) {
    func_0x0001000df548();
  }
  return param_1;
LAB_1052ae954:
  do {
    func_0x000104bd46a0();
  } while ((int)param_3 != 0);
  goto FUN_1052a00dc;
}



/* Entry: 1052ae960; end: 1052ae97f;  */

void FUN_1052ae960(long param_1)

{
  param_1 = param_1 + 0x10;
  func_0x0001005f1e70();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1052ae980; end: 1052ae993;  */

void FUN_1052ae980(void)

{
  FUN_1052aea54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1052ae994; end: 1052ae9a7;  */

void FUN_1052ae994(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001052ae99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1052ae9a8; end: 1052ae9bb;  */

void FUN_1052ae9a8(void)

{
  FUN_1052ae9cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1052ae9bc; end: 1052ae9cb;  */

undefined1  [16] FUN_1052ae9bc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10;
  auVar1._0_8_ = "Djinni C++ Proxy";
  return auVar1;
}



/* Entry: 1052ae9cc; end: 1052aea53;  */

void FUN_1052ae9cc(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_28;
  
  *param_1 = &PTR_DAT_110874f18;
  func_0x0001052aedf0();
  puVar3 = param_1 + 5;
  uStack_28 = *puVar3;
  lVar2 = 0x11328ad40;
  func_0x000104bdbfcc(0x11328ad40,&uStack_28);
  iVar1 = *(int *)(lVar2 + 0x28) + -1;
  *(int *)(lVar2 + 0x28) = iVar1;
  if (iVar1 == 0) {
    uStack_28 = *puVar3;
    func_0x000104bdc09c(0x11328ad40,&uStack_28);
  }
  func_0x0001052aedfc();
  FUN_1052a00dc(puVar3);
  func_0x00010b9ace94(param_1);
  return;
}



/* Entry: 1052aea54; end: 1052aea63;  */

void FUN_1052aea54(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110874ec8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1052aea64; end: 1052aea8b;  */

long * FUN_1052aea64(long *param_1)

{
  if (*param_1 != 0) {
    func_0x0001003a916c();
  }
  return param_1;
}



/* Entry: 1052aea8c; end: 1052aee87;  */

void FUN_1052aea8c(undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  
  *param_2 = param_1;
  uVar1 = *(undefined8 *)(param_3 + 8);
  param_2[2] = *(undefined8 *)(param_3 + 0x10);
  param_2[1] = uVar1;
  param_2[3] = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x18) = 0;
  return;
}



/* Entry: 1052aee88; end: 1052aef73;  */

void FUN_1052aee88(char *param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lStack_58;
  
  func_0x00010b9a97d0(&lStack_58);
  cVar3 = (char)lStack_58 + '\x18';
  func_0x00010b9a9608();
  lVar6 = lStack_58 + 0x28;
  func_0x000104bedf58();
  uVar1 = (ulong)param_3;
  lVar7 = lStack_58 + 0x38;
  func_0x000104bedf58();
  uVar2 = (ulong)param_3;
  cVar4 = (char)lStack_58 + 'H';
  func_0x00010b9a9608();
  cVar5 = (char)lStack_58 + 'X';
  func_0x00010b9a9608();
  lVar8 = lStack_58 + 0x68;
  FUN_1052aef74();
  *param_1 = cVar3;
  *(long *)(param_1 + 8) = lVar6;
  *(ulong *)(param_1 + 0x10) = uVar1 & 0xff;
  *(long *)(param_1 + 0x18) = lVar7;
  *(ulong *)(param_1 + 0x20) = uVar2 & 0xff;
  param_1[0x28] = cVar4;
  param_1[0x29] = cVar5;
  *(long *)(param_1 + 0x2c) = lVar8;
  *(uint *)(param_1 + 0x34) = param_3 & 0xff;
  func_0x000104bdbf78(&lStack_58);
  return;
}



/* Entry: 1052aef74; end: 1052aefa3;  */

undefined1  [16] FUN_1052aef74(long param_1)

{
  undefined1 auVar1 [16];
  
  if (*(byte *)(param_1 + 8) < 2) {
    return ZEXT816(0);
  }
  FUN_1052bd4b0();
  auVar1._8_8_ = 1;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 1052aefa4; end: 1052af197;  */

undefined8 FUN_1052aefa4(undefined8 param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818eb0 & 1) == 0) {
    iVar1 = 0x13818eb0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(auStack_c0,"_djinni_record_PrefetchSignals");
      pcVar2 = "completeDownload";
      func_0x0001003a83dc(auStack_c8,"completeDownload");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_b8,auStack_c8,pcVar2);
      pcVar2 = "videoFirstChunkDurationMs";
      func_0x0001003a83dc(auStack_d0,"videoFirstChunkDurationMs");
      func_0x000104bef438();
      func_0x0001003b1b50(auStack_a0,auStack_d0,pcVar2);
      pcVar2 = "firstChunkBytes";
      func_0x0001003a83dc(auStack_d8,"firstChunkBytes");
      func_0x000104bef438();
      func_0x0001003b1b50(auStack_88,auStack_d8,pcVar2);
      pcVar2 = "alwaysAttemptAsABR";
      func_0x0001003a83dc(auStack_e0,"alwaysAttemptAsABR");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_70,auStack_e0,pcVar2);
      pcVar2 = "requireHighestQualityVariant";
      func_0x0001003a83dc(auStack_e8,"requireHighestQualityVariant");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_58,auStack_e8,pcVar2);
      pcVar2 = "contentDistance";
      func_0x0001003a83dc(auStack_f0,"contentDistance");
      FUN_1052af198();
      func_0x0001003b1b50(auStack_40,auStack_f0,pcVar2);
      uVar3 = 0;
      func_0x000104bdbd44(0x113818ea0,auStack_c0,0,auStack_b8,6);
      lVar4 = 0x78;
      do {
        func_0x0001003b1c5c(auStack_b8 + lVar4);
        param_2 = (int)uVar3;
        lVar4 = lVar4 + -0x18;
      } while (lVar4 != -0x18);
      func_0x0001003a8c94(auStack_f0);
      func_0x0001003a8c94(auStack_e8);
      func_0x0001003a8c94(auStack_e0);
      func_0x0001003a8c94(auStack_d8);
      func_0x0001003a8c94(auStack_d0);
      func_0x0001003a8c94(auStack_c8);
      func_0x0001003a8c94(auStack_c0);
      ___cxa_guard_release(0x113818eb0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return 0x113818ea0;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam00000001130cc4d0 & 1) == 0) {
    iVar1 = 0x130cc4d0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1052bd508();
      func_0x00010b990784(0x1130cc4c0);
      ___cxa_guard_release(0x1130cc4d0);
    }
  }
  return 0x1130cc4c0;
}



/* Entry: 1052af198; end: 1052af1f3;  */

undefined8 FUN_1052af198(void)

{
  int iVar1;
  
  if ((bRam00000001130cc4d0 & 1) == 0) {
    iVar1 = 0x130cc4d0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1052bd508();
      func_0x00010b990784(0x1130cc4c0);
      ___cxa_guard_release(0x1130cc4d0);
    }
  }
  return 0x1130cc4c0;
}



/* Entry: 1052af1f4; end: 1052af24b;  */

undefined1  [16] FUN_1052af1f4(void)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  long lStack_28;
  
  func_0x00010b9a97d0(&lStack_28);
  lVar1 = lStack_28 + 0x18;
  func_0x00010b9a9588(lVar1);
  lVar2 = lStack_28 + 0x28;
  func_0x00010b9a9588(lVar2);
  func_0x000104bdbf78(&lStack_28);
  auVar3._8_8_ = lVar2;
  auVar3._0_8_ = lVar1;
  return auVar3;
}



/* Entry: 1052af24c; end: 1052af37b;  */

undefined8 FUN_1052af24c(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818ec8 & 1) == 0) {
    param_1 = 0x113818ec8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_60,"_djinni_record_Range");
      pcVar1 = "start";
      func_0x0001003a83dc(auStack_68,"start");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_58,auStack_68,pcVar1);
      pcVar1 = "end";
      func_0x0001003a83dc(auStack_70,"end");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_40,auStack_70,pcVar1);
      uVar2 = 0;
      func_0x000104bdbd44(0x113818eb8,auStack_60,0,auStack_58,2);
      lVar3 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_58 + lVar3);
        param_2 = (int)uVar2;
        lVar3 = lVar3 + -0x18;
        in_ZR = lVar3 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_70);
      func_0x0001003a8c94(auStack_68);
      func_0x0001003a8c94(auStack_60);
      param_1 = 0x113818ec8;
      ___cxa_guard_release(0x113818ec8);
    }
  }
  FUN_1052af37c(uStack_28);
  if ((bool)in_ZR) {
    return 0x113818eb8;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 1052af37c; end: 1052af38f;  */

void FUN_1052af37c(void)

{
  return;
}



/* Entry: 1052af390; end: 1052af4ef;  */

undefined8 FUN_1052af390(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818ee0 & 1) == 0) {
    param_1 = 0x113818ee0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_78,"_djinni_record_SegmentSpecifier");
      pcVar1 = "url";
      func_0x0001003a83dc(auStack_80,"url");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_70,auStack_80,pcVar1);
      pcVar1 = "intervalMs";
      func_0x0001003a83dc(auStack_88,"intervalMs");
      FUN_1052a09d8();
      func_0x0001003b1b50(auStack_58,auStack_88,pcVar1);
      pcVar1 = "byteRange";
      func_0x0001003a83dc(auStack_90,"byteRange");
      FUN_1052a09d8();
      func_0x0001003b1b50(auStack_40,auStack_90,pcVar1);
      uVar2 = 0;
      func_0x000104bdbd44(0x113818ed0,auStack_78,0,auStack_70,3);
      lVar3 = 0x30;
      do {
        func_0x0001003b1c5c(auStack_70 + lVar3);
        param_2 = (int)uVar2;
        lVar3 = lVar3 + -0x18;
        in_ZR = lVar3 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_90);
      func_0x0001003a8c94(auStack_88);
      func_0x0001003a8c94(auStack_80);
      func_0x0001003a8c94(auStack_78);
      param_1 = 0x113818ee0;
      ___cxa_guard_release(0x113818ee0);
    }
  }
  FUN_1052af4f0(uStack_28);
  if ((bool)in_ZR) {
    return 0x113818ed0;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 1052af4f0; end: 1052af503;  */

void FUN_1052af4f0(void)

{
  return;
}



/* Entry: 1052af504; end: 1052af81b;  */

void FUN_1052af504(ulong param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [16];
  undefined8 uStack_168;
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined8 uStack_140;
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  undefined8 uStack_118;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x1136b9e38);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x1136b9e38) = 1;
  if ((bVar1 & 1) != 0) goto LAB_1052af560;
  if ((bRam00000001136b9e40 & 1) == 0) goto LAB_1052af590;
  while( true ) {
    func_0x000108b80888(0x1136b9e48);
LAB_1052af560:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) break;
    ___stack_chk_fail();
LAB_1052af590:
    iVar2 = 0x136b9e40;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_1052af8b8();
      pcVar3 = "onMetadataAvailable";
      func_0x0001003a83dc(&uStack_f0,"onMetadataAvailable");
      func_0x0001003b166c(auStack_110);
      FUN_1052b0468();
      func_0x0001003adcc0(auStack_a8,pcVar3);
      func_0x000104bdbd48(auStack_100,auStack_110,auStack_a8,1);
      uStack_98 = uStack_f0;
      uStack_f0 = 0;
      func_0x0001003aef98(auStack_90,auStack_100);
      pcVar3 = "onDataReceived";
      func_0x0001003a83dc(&uStack_118,"onDataReceived");
      func_0x0001003b166c(auStack_138);
      FUN_1052af24c();
      puVar4 = auStack_c8;
      func_0x0001003adcc0(puVar4,pcVar3);
      FUN_1052ab298();
      func_0x0001003adcc0(auStack_b8,puVar4);
      func_0x000104bdbd48(auStack_128,auStack_138,auStack_c8,2);
      uStack_80 = uStack_118;
      uStack_118 = 0;
      func_0x0001003aef98(auStack_78,auStack_128);
      func_0x0001003a83dc(&uStack_140,"onComplete");
      func_0x0001003b166c(auStack_160);
      func_0x000104bdbd48(auStack_150,auStack_160,0,0);
      uStack_68 = uStack_140;
      uStack_140 = 0;
      func_0x0001003aef98(auStack_60,auStack_150);
      pcVar3 = "onFailure";
      func_0x0001003a83dc(&uStack_168,"onFailure");
      func_0x0001003b166c(auStack_188);
      FUN_1052af24c();
      puVar4 = auStack_e8;
      func_0x0001003adcc0(puVar4,pcVar3);
      FUN_1052c521c();
      func_0x0001003adcc0(auStack_d8,puVar4);
      func_0x000104bdbd48(auStack_178,auStack_188,auStack_e8,2);
      uStack_50 = uStack_168;
      uStack_168 = 0;
      func_0x0001003aef98(auStack_48,auStack_178);
      func_0x000104bdbd44(0x1136b9e48,0x113818f00,1,&uStack_98,4);
      lVar5 = 0x48;
      do {
        func_0x0001003b1c5c(auStack_90 + lVar5 + -8);
        lVar5 = lVar5 + -0x18;
      } while (lVar5 != -0x18);
      FUN_1052af90c(auStack_178);
      lVar5 = 0x18;
      do {
        func_0x0001003adc18(auStack_e8 + lVar5);
        lVar5 = lVar5 + -0x10;
      } while (lVar5 != -8);
      FUN_1052af90c(auStack_188);
      func_0x0001003a8c94(&uStack_168);
      FUN_1052af90c(auStack_150);
      FUN_1052af90c(auStack_160);
      func_0x0001003a8c94(&uStack_140);
      FUN_1052af90c(auStack_128);
      lVar5 = 0x18;
      do {
        func_0x0001003adc18(auStack_c8 + lVar5);
        lVar5 = lVar5 + -0x10;
      } while (lVar5 != -8);
      FUN_1052af90c(auStack_138);
      func_0x0001003a8c94(&uStack_118);
      FUN_1052af90c(auStack_100);
      FUN_1052af90c(auStack_a8);
      FUN_1052af90c(auStack_110);
      func_0x0001003a8c94(&uStack_f0);
      ___cxa_guard_release(0x1136b9e40);
    }
  }
  return;
}


