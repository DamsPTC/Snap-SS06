/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10884e104; end: 10884e2e3;  */

void FUN_10884e104(undefined8 *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  uint extraout_w8;
  uint extraout_w8_00;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *plVar2;
  long *extraout_x8_03;
  long *extraout_x8_04;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  int extraout_w10_02;
  uint extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  uint extraout_w11_01;
  uint extraout_w11_02;
  undefined8 unaff_x21;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  func_0x00010885cac8();
  func_0x00010885c58c();
  func_0x00010885c148();
  *param_1 = FUN_108858984;
  param_1[1] = FUN_108858a9c;
  param_1[8] = unaff_x21;
  func_0x00010885be08();
  func_0x00010885beb4();
  param_1[4] = unaff_x21;
  func_0x00010885c57c(param_1 + 5);
  in_stack_00000000 = param_1[4];
  in_stack_00000008 = param_1[5];
  param_1[5] = 0;
  FUN_108854354(param_1 + 7);
  func_0x00010885c128();
  func_0x00010885be10();
  param_1[6] = param_1[7];
  do {
    func_0x00010885b868();
  } while (extraout_w10 != 0);
  func_0x00010885baa4();
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 9) = 0;
    func_0x00010885b6f0();
    if (*(long *)register0x00000008 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x00010885bcd8();
    plVar2 = extraout_x8;
    do {
      if (*plVar2 == 0) {
        func_0x00010885b89c();
        plVar2 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar3 = extraout_w11_00;
      }
      else {
        func_0x00010885bc8c();
        plVar2 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar3 = extraout_w11;
      }
      if ((uVar3 & 1) != 0) goto LAB_10884e25c;
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x00010885bfa4();
  func_0x00010885bc98();
  func_0x00010885bcbc();
  func_0x00010885c88c();
  func_0x00010885bb94();
  do {
    func_0x00010885b868();
  } while (extraout_w10_02 != 0);
  func_0x00010885baa4();
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    func_0x00010885ca68();
    func_0x00010885b6f0();
    if (*(long *)register0x00000008 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x00010885bcd8();
    plVar2 = extraout_x8_02;
    do {
      if (*plVar2 == 0) {
        func_0x00010885b89c();
        plVar2 = extraout_x8_04;
        uVar1 = extraout_w10_04;
        uVar3 = extraout_w11_02;
      }
      else {
        func_0x00010885bc8c();
        plVar2 = extraout_x8_03;
        uVar1 = extraout_w10_03;
        uVar3 = extraout_w11_01;
      }
      if ((uVar3 & 1) != 0) {
LAB_10884e25c:
        func_0x00010885b774();
        if ((bool)in_ZR) {
          func_0x00010885b88c();
          func_0x00010885b700();
          func_0x00010885b6a4();
        }
        func_0x00010885b678();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x00010885bfa4();
  func_0x00010885bc98();
  func_0x00010885bcbc();
  func_0x00010885bc28();
  func_0x00010885bbf0();
  func_0x00010885bc18();
  return;
}



/* Entry: 10884e2e4; end: 10884e32b;  */

void FUN_10884e2e4(long param_1,undefined8 *param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x00010884d864(param_1 + 0x160,&uStack_30);
  func_0x000104bf8920(&uStack_30);
  return;
}



/* Entry: 10884e32c; end: 10884e453;  */

void FUN_10884e32c(undefined8 param_1)

{
  long extraout_x8;
  int extraout_w10;
  undefined8 uStack_c0;
  undefined8 auStack_b8 [5];
  undefined1 auStack_90 [8];
  undefined **appuStack_88 [5];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x00010885bd28();
  uStack_c0 = param_1;
  func_0x00010885c0b4(auStack_b8);
  uStack_60 = uStack_c0;
  uStack_58 = auStack_b8[0];
  auStack_b8[0] = 0;
  func_0x00010885c69c();
  FUN_108854510();
  func_0x00010885c7c8();
  func_0x00010885c128();
  FUN_108825a58(appuStack_88);
  appuStack_88[0] = &PTR_FUN_110a7c130;
  func_0x000108825a1c(appuStack_88);
  func_0x000107c3a5c0();
  func_0x00010885c6ac();
  if (extraout_x8 != 0) {
    do {
      func_0x00010885b868();
    } while (extraout_w10 != 0);
  }
  func_0x00010885bc3c();
  FUN_108854950();
  FUN_1088546f0(auStack_90);
  FUN_108854988(&uStack_60);
  FUN_108854988(&uStack_c0);
  func_0x00010885c924();
  FUN_108825ce8(appuStack_88);
  func_0x00010885bd9c();
  return;
}



/* Entry: 10884e454; end: 10884e4df;  */

void FUN_10884e454(void)

{
  undefined1 auStack_48 [24];
  
  func_0x00010885bd28();
  func_0x00010885c0b4(auStack_48);
  func_0x00010885bf18();
  FUN_1088549a8();
  func_0x00010885c7c8();
  func_0x00010885c128();
  func_0x00010885c348();
  func_0x00010885bd9c();
  return;
}



/* Entry: 10884e4e0; end: 10884e5ab;  */

void FUN_10884e4e0(void)

{
  int extraout_w10;
  long *unaff_x21;
  long lStack_c0;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined **ppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [48];
  
  func_0x00010885bca8();
  FUN_108825ef0(&ppuStack_88);
  ppuStack_88 = &PTR_FUN_110a7c168;
  func_0x000108825eb4(&ppuStack_88);
  func_0x000107c3a5c0();
  lStack_c0 = *unaff_x21;
  if (lStack_c0 != 0) {
    do {
      func_0x00010885b868();
    } while (extraout_w10 != 0);
  }
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  uStack_70 = 0;
  uStack_68 = 0;
  ppuStack_b8 = &PTR_FUN_110a7c168;
  FUN_108854e48(auStack_60,&lStack_c0);
  FUN_108854be4(auStack_90);
  FUN_108854e80(auStack_60);
  FUN_108854e80(&lStack_c0);
  func_0x000107c27f9c(auStack_90);
  FUN_108826178(&ppuStack_88);
  return;
}



/* Entry: 10884e5ac; end: 10884e5d7;  */

void FUN_10884e5ac(undefined8 param_1)

{
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  uStack_18 = 0xb;
  uStack_14 = 0;
  FUN_108825e54(param_1,&uStack_18);
  return;
}



/* Entry: 10884e5d8; end: 10884e72f;  */

void FUN_10884e5d8(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined1 uVar2;
  long extraout_x8;
  int extraout_w10;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 auStack_a0 [2];
  undefined1 auStack_90 [8];
  undefined **appuStack_88 [5];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 auStack_40 [2];
  
  uVar2 = (undefined1)((ulong)param_4 >> 0x20);
  uVar1 = (undefined4)param_4;
  uStack_b0 = param_3;
  func_0x00010885bd28();
  uStack_a4 = CONCAT31(uStack_a4._1_3_,uVar2);
  uStack_c0 = param_1;
  uStack_b8 = param_2;
  uStack_a8 = uVar1;
  func_0x00010885c0b4(auStack_a0);
  uStack_48 = CONCAT44(uStack_a4,uStack_a8);
  uStack_50 = CONCAT71(uStack_af,uStack_b0);
  uStack_58 = uStack_b8;
  uStack_60 = uStack_c0;
  auStack_40[0] = auStack_a0[0];
  auStack_a0[0] = 0;
  func_0x00010885c69c();
  FUN_108854ea0();
  func_0x000107c288ac(auStack_40);
  func_0x000107c288ac(auStack_a0);
  FUN_108826354(appuStack_88);
  appuStack_88[0] = &PTR_FUN_110a7c1a0;
  func_0x000108826318(appuStack_88);
  func_0x000107c3a5c0();
  func_0x00010885c6ac();
  if (extraout_x8 != 0) {
    do {
      func_0x00010885b868();
    } while (extraout_w10 != 0);
  }
  func_0x00010885bc3c();
  FUN_108855674();
  FUN_108855134(auStack_90);
  FUN_1088556ac(&uStack_60);
  FUN_1088556ac(&uStack_c0);
  func_0x00010885c924();
  FUN_10882678c(appuStack_88);
  func_0x00010885bd9c();
  return;
}



/* Entry: 10884e730; end: 10884e86b;  */

void FUN_10884e730(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long extraout_x8;
  int extraout_w10;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined8 auStack_a8 [3];
  undefined1 auStack_90 [8];
  undefined **appuStack_88 [5];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 auStack_48 [3];
  
  uStack_b0 = param_3;
  func_0x00010885bd28();
  uStack_c0 = param_1;
  uStack_b8 = param_2;
  func_0x00010885c0b4(auStack_a8);
  uStack_58 = uStack_b8;
  uStack_60 = uStack_c0;
  uStack_50 = CONCAT71(uStack_af,uStack_b0);
  auStack_48[0] = auStack_a8[0];
  auStack_a8[0] = 0;
  func_0x00010885c69c();
  FUN_1088556cc();
  func_0x000107c288ac(auStack_48);
  func_0x000107c288ac(auStack_a8);
  FUN_10882696c(appuStack_88);
  appuStack_88[0] = &PTR_FUN_110a7c1d8;
  func_0x000108826930(appuStack_88);
  func_0x000107c3a5c0();
  func_0x00010885c6ac();
  if (extraout_x8 != 0) {
    do {
      func_0x00010885b868();
    } while (extraout_w10 != 0);
  }
  func_0x00010885bc3c();
  FUN_108855b78();
  FUN_108855908(auStack_90);
  FUN_108855bb0(&uStack_60);
  FUN_108855bb0(&uStack_c0);
  func_0x00010885c924();
  FUN_108826c08(appuStack_88);
  func_0x00010885bd9c();
  return;
}



/* Entry: 10884e86c; end: 10884e963;  */

void FUN_10884e86c(void)

{
  undefined8 uVar1;
  long unaff_x21;
  long unaff_x22;
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [40];
  
  func_0x00010885ca40();
  func_0x000107c291e8(unaff_x22 + 8);
  uVar1 = *(undefined8 *)(unaff_x21 + 0xf0);
  func_0x000108855bd0(auStack_90,auStack_b8);
  func_0x00010885c57c(auStack_70);
  FUN_108855c9c(auStack_68,auStack_90);
  FUN_108855c1c(auStack_98,auStack_68,uVar1);
  func_0x000108855bf8(auStack_68);
  func_0x000108855bf8(auStack_90);
  func_0x00010885c348();
  func_0x00010885c378();
  func_0x00010885c4f8();
  return;
}



/* Entry: 10884e964; end: 10884ea17;  */

void FUN_10884e964(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 auStack_40 [2];
  
  func_0x00010885bd28();
  uStack_68 = param_1;
  uStack_60 = param_2;
  func_0x00010885c0b4(&uStack_58);
  uStack_48 = uStack_60;
  uStack_50 = uStack_68;
  auStack_40[0] = uStack_58;
  uStack_58 = 0;
  FUN_108855de8(auStack_70,&uStack_50);
  func_0x000107c288ac(auStack_40);
  func_0x000107c288ac(&uStack_58);
  func_0x00010885c348();
  func_0x00010885bfac();
  return;
}



/* Entry: 10884ea18; end: 10884eb17;  */

void FUN_10884ea18(void)

{
  undefined8 uVar1;
  long unaff_x21;
  long unaff_x22;
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [40];
  
  func_0x00010885ca40();
  func_0x000107c27994(unaff_x22 + 8);
  uVar1 = *(undefined8 *)(unaff_x21 + 0xf0);
  FUN_108855f74(auStack_90,auStack_b8);
  func_0x00010885c57c(auStack_70);
  FUN_108856044(auStack_68,auStack_90);
  FUN_108855fc4(auStack_98,auStack_68,uVar1);
  func_0x000108855f9c(auStack_68);
  func_0x000108855f9c(auStack_90);
  func_0x00010885c348();
  func_0x00010885c378();
  func_0x000107c27914(unaff_x22 + 8);
  return;
}



/* Entry: 10884eb18; end: 10884ebc7;  */

void FUN_10884eb18(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_60 = param_3;
  func_0x00010885bd28();
  uStack_70 = param_1;
  uStack_68 = param_2;
  func_0x00010885c0b4(&uStack_58);
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  uStack_40 = CONCAT71(uStack_5f,uStack_60);
  uStack_38 = uStack_58;
  uStack_58 = 0;
  FUN_108856198(auStack_78,&uStack_50);
  func_0x000107c288ac(&uStack_38);
  func_0x000107c288ac(&uStack_58);
  func_0x00010885c348();
  func_0x00010885bd9c();
  return;
}



/* Entry: 10884ebc8; end: 10884ed43;  */

void FUN_10884ebc8(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  undefined8 uVar4;
  long unaff_x21;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
  func_0x00010885c9a8();
  func_0x00010885c58c();
  func_0x00010885bd94();
  func_0x00010885bf50(FUN_10885873c);
  func_0x00010885beb4();
  uVar4 = *(undefined8 *)(unaff_x21 + 0xf0);
  func_0x00010885c57c(&stack0x00000008);
  in_stack_00000018 = in_stack_00000008;
  in_stack_00000008 = 0;
  plVar2 = &stack0x00000010;
  FUN_108856330(param_1 + 0x28,plVar2,uVar4);
  func_0x00010885c128();
  func_0x00010885c7c8();
  func_0x00010885b9c8();
  do {
    func_0x00010885b868();
  } while (extraout_w10 != 0);
  func_0x00010885b998();
  if ((extraout_w8 >> 1 & 1) == 0) {
    func_0x00010885b6c4();
    if (*plVar2 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x00010885bcd8();
    plVar2 = extraout_x8;
    do {
      if (*plVar2 == 0) {
        func_0x00010885b89c();
        plVar2 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar3 = extraout_w11_00;
      }
      else {
        func_0x00010885bc8c();
        plVar2 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar3 = extraout_w11;
      }
      if ((uVar3 & 1) != 0) {
        func_0x00010885b774();
        if ((bool)in_ZR) {
          func_0x00010885b88c();
          func_0x00010885b700();
          func_0x00010885b6a4();
        }
        func_0x00010885b678();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x00010885bf60();
  func_0x00010885bc10();
  func_0x00010885bc08();
  func_0x00010885bc28();
  func_0x00010885bbf0();
  func_0x00010885bc18();
  return;
}



/* Entry: 10884ed44; end: 10884f16b;  */

void FUN_10884ed44(void)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  code *pcVar4;
  undefined1 in_ZR;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  uint extraout_w8;
  undefined4 uVar8;
  undefined8 extraout_x8;
  long lVar9;
  long *extraout_x8_00;
  long *plVar10;
  long *extraout_x8_01;
  long *extraout_x8_02;
  undefined8 *extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  int extraout_w11;
  int extraout_w11_00;
  uint extraout_w11_01;
  uint extraout_w11_02;
  uint uVar11;
  undefined8 *puVar12;
  long unaff_x21;
  code **ppcVar13;
  long lStack_d8;
  undefined1 auStack_c8 [16];
  undefined8 *puStack_b8;
  code *pcStack_b0;
  undefined **ppuStack_a8;
  long lStack_a0;
  code *pcStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  undefined8 uStack_48;
  
  func_0x00010885c58c();
  func_0x00010885ba64();
  puVar5 = (undefined8 *)0xc8;
  uStack_48 = extraout_x8;
  __Znwm();
  *puVar5 = FUN_108858460;
  puVar5[1] = FUN_108858578;
  puVar5[0x17] = unaff_x21;
  puVar6 = puVar5;
  func_0x00010885be08();
  func_0x00010885beb4();
  puVar12 = puVar5 + 10;
  *puVar12 = 0;
  puVar5[0xb] = 0;
  *(undefined1 *)(puVar5 + 0xc) = 0;
  func_0x000107c28258();
  puVar5[0xb] = puVar6;
  func_0x00010885c628();
  func_0x000107c27994(puVar5 + 0xd,unaff_x21 + 0x28);
  puVar5[5] = puVar5[0xe];
  puVar5[4] = puVar5[0xd];
  puVar5[6] = puVar5[0xf];
  puVar5[0xe] = 0;
  puVar5[0xf] = 0;
  puVar5[0xd] = 0;
  *(undefined4 *)(puVar5 + 7) = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  func_0x000107c27914(puVar5 + 0xd);
  func_0x000107c289cc(puVar5 + 0x10);
  lVar9 = puVar5[0x11];
  if (lVar9 == 0) {
    lStack_d8 = 0;
  }
  else {
    do {
      func_0x00010885c6bc();
    } while (extraout_w11 != 0);
    lStack_d8 = puVar5[0x11];
    if (lStack_d8 != 0) {
      do {
        func_0x00010885c6bc();
      } while (extraout_w11_00 != 0);
    }
  }
  FUN_1086d1f2c(auStack_c8,1);
  puStack_b8[1] = 0;
  puStack_b8[2] = 0;
  *puStack_b8 = &PTR_FUN_110a64258;
  ppcVar13 = &pcStack_80;
  pcStack_80 = FUN_1088564a0;
  ppuStack_78 = &PTR_DAT_110a7c200;
  pcStack_b0 = FUN_1088564ec;
  ppuStack_a8 = &PTR_FUN_110a7c2b0;
  lStack_a0 = lStack_d8;
  lStack_70 = lVar9;
  FUN_1086d24e0(puStack_b8 + 3,&pcStack_80,&pcStack_b0);
  (*(code *)*ppuStack_a8)(&ppuStack_a8);
  func_0x00010885c184(ppuStack_78);
  puVar6 = puStack_b8;
  puStack_b8 = (undefined8 *)0x0;
  puVar5[0x12] = puVar6 + 3;
  puVar5[0x13] = puVar6;
  func_0x0001086d25d0(auStack_c8);
  func_0x00010885c098();
  func_0x00010885c17c();
  plVar7 = *(long **)(unaff_x21 + 0x40);
  ppuStack_78 = (undefined **)puVar5[0x13];
  pcStack_80 = (code *)puVar5[0x12];
  if (puVar5[0x13] != 0) {
    plVar10 = (long *)(puVar5[0x13] + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = *plVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  (**(code **)(*plVar7 + 0x168))(plVar7,puVar5 + 4,0,5,&pcStack_80);
  func_0x000104be35c8(&pcStack_80);
  puVar5[0x16] = puVar5[0x10];
  if (puVar5[0x10] != 0) {
    do {
      func_0x00010885b868();
    } while (extraout_w10 != 0);
  }
  plVar7 = (long *)(unaff_x21 + 0xe0);
  puVar6 = puVar5 + 0x16;
  func_0x000107c2883c(puVar5 + 0x15);
  puVar5[0x14] = puVar5[0x15];
  do {
    func_0x00010885b868();
  } while (extraout_w10_00 != 0);
  func_0x00010885bc30(puVar5[0x14]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0x18) = 0;
    lVar9 = puVar5[0x14];
    func_0x00010885b6f0();
    ppcVar13 = (code **)*plVar7;
    if (ppcVar13 == (code **)0x0) {
      func_0x000107c3a5c0();
      ppcVar13 = (code **)*plVar7;
    }
    func_0x00010885c3f0();
    plVar10 = extraout_x8_00;
    do {
      if (*plVar10 == 0) {
        func_0x00010885b89c();
        plVar10 = extraout_x8_02;
        uVar3 = extraout_w10_02;
        uVar11 = extraout_w11_02;
      }
      else {
        func_0x00010885bc8c();
        plVar10 = extraout_x8_01;
        uVar3 = extraout_w10_01;
        uVar11 = extraout_w11_01;
      }
      if ((uVar11 & 1) != 0) {
        puVar12 = *(undefined8 **)(lVar9 + 0x90);
        func_0x00010885b9b8();
        if ((bool)in_ZR) {
          func_0x00010885b88c();
          func_0x00010885b700();
          func_0x00010885b720();
          func_0x00010885bc5c();
        }
        func_0x00010885b7cc();
        *extraout_x8_03 = 0;
        goto LAB_10884f018;
      }
    } while ((uVar3 >> 1 & 1) == 0);
  }
  func_0x000107c28834(puVar5 + 0x14);
  func_0x00010885c5b0();
  func_0x00010885c314();
  func_0x00010885c2f4();
  plVar7 = (long *)puVar5[0x17];
  puVar6 = puVar12;
  FUN_10884f16c(plVar7,puVar12,0);
  func_0x00010885c2ec();
  func_0x00010885c2d4();
  func_0x00010885c044();
  func_0x00010885bc28();
  while( true ) {
    func_0x00010885bbf0();
    func_0x00010885bc18();
LAB_10884f018:
    func_0x00010885b878(uStack_48);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    if (((int)puVar6 == 0) || (func_0x00010885c8d8(), (int)puVar6 == 0)) {
      func_0x00010885c034();
      func_0x000104be35c8(&pcStack_80);
      if ((int)ppcVar13 == 3) {
        ___cxa_begin_catch();
        ___cxa_rethrow();
      }
      else {
        ___cxa_begin_catch();
        if ((int)ppcVar13 == 2) {
          uVar8 = 1;
          if ((int)plVar7[2] == 1 || (int)plVar7[2] == 7) {
            uVar8 = 2;
          }
          FUN_10884f16c(puVar5[0x17],puVar12,uVar8);
          ___cxa_rethrow();
        }
        else {
          FUN_10884f16c(puVar5[0x17],puVar12,1);
          ___cxa_rethrow();
        }
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10884f0f4);
      (*pcVar4)();
    }
    func_0x00010885c2ec();
    func_0x00010885c2d4();
    func_0x00010885c044();
    func_0x00010885bd20();
    func_0x00010885bc00();
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 10884f16c; end: 10884f24b;  */

void FUN_10884f16c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  code *extraout_x8;
  long *plVar2;
  undefined1 auStack_98 [40];
  undefined1 *puStack_70;
  undefined1 auStack_68 [32];
  undefined4 uStack_48;
  
  plVar2 = *(long **)(param_1 + 0xc0);
  func_0x00010885c130();
  uStack_48 = 0x2c4;
  puVar1 = auStack_68;
  func_0x000107c28b38(puVar1,param_3);
  func_0x00010885c82c();
  puStack_70 = puVar1;
  (**(code **)(*plVar2 + 0x18))(plVar2);
  func_0x00010885c090();
  plVar2 = *(long **)(param_1 + 0xc0);
  func_0x00010885c130();
  uStack_48 = 0x2c1;
  puVar1 = auStack_68;
  FUN_1088531ec(puVar1,0x7a0274);
  func_0x000107c28b38();
  func_0x000107c2884c(auStack_98,puVar1);
  func_0x00010885c4c4(*(undefined8 *)(*plVar2 + 0x50));
  (*extraout_x8)();
  func_0x00010885bf9c();
  func_0x00010885c090();
  return;
}



/* Entry: 10884f24c; end: 10884f3db;  */

void FUN_10884f24c(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  
  func_0x00010885b824();
  plVar2 = param_1;
  func_0x00010885c03c(FUN_10885af48);
  func_0x00010885bb88();
  func_0x00010885c1ec();
  FUN_10884ed44();
  func_0x00010885b9c8();
  do {
    func_0x00010885b868();
  } while (extraout_w10 != 0);
  func_0x00010885b998();
  if ((extraout_w8 >> 1 & 1) == 0) {
    func_0x00010885b6c4();
    if (*plVar2 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x00010885bcd8();
    plVar2 = extraout_x8;
    do {
      if (*plVar2 == 0) {
        func_0x00010885b89c();
        plVar2 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar3 = extraout_w11_00;
      }
      else {
        func_0x00010885bc8c();
        plVar2 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar3 = extraout_w11;
      }
      if ((uVar3 & 1) != 0) {
        func_0x00010885b774();
        if ((bool)in_ZR) {
          func_0x00010885b88c();
          func_0x00010885b700();
          func_0x00010885b6a4();
        }
        func_0x00010885b678();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x00010885bf60();
  func_0x00010885bc10();
  func_0x00010885bc08();
  func_0x00010885bd84();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10884f3dc; end: 10884f413;  */

void FUN_10884f3dc(undefined8 param_1,long param_2)

{
  int extraout_w10;
  
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    do {
      func_0x00010885b868();
    } while (extraout_w10 != 0);
  }
  func_0x00010885bb60(param_2);
  return;
}



/* Entry: 10884f414; end: 10884f463;  */

void FUN_10884f414(long *param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  uint uStack_38;
  
  lVar6 = param_1[1];
  lVar4 = param_2;
  do {
    func_0x00010885b7b4();
    if ((int)param_1 != 0) {
      *(int *)(lVar6 + 0x98) = (int)param_2;
      *(undefined1 *)(lVar6 + 0x9c) = 0;
      func_0x00010885ca74();
      func_0x00010885b79c();
      break;
    }
  } while ((uStack_38 >> 1 & 1) == 0);
  func_0x00010885c1e0();
  if (lVar4 != 0) {
    plVar7 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar7 = (long *)*param_1;
  if (plVar7 != (long *)0x0) {
    puVar1 = (ulong *)(plVar7 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar5 >> 0x21 == 1) {
      (**(code **)(*plVar7 + 0x10))(plVar7,1,param_1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  *param_1 = lVar4;
  return;
}



/* Entry: 10884f464; end: 10884f487;  */

undefined4 FUN_10884f464(int param_1)

{
  if (param_1 - 1U < 0xc) {
    return *(undefined4 *)(&UNK_10df641fc + (ulong)(param_1 - 1U) * 4);
  }
  return 0;
}



/* Entry: 10884f488; end: 10884f49b;  */

undefined4 FUN_10884f488(int param_1)

{
  func_0x000108848514();
  if (param_1 - 1U < 0xc) {
    return *(undefined4 *)(&UNK_10df641fc + (ulong)(param_1 - 1U) * 4);
  }
  return 0;
}



/* Entry: 10884f49c; end: 10884f4eb;  */

void FUN_10884f49c(long *param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  uint in_stack_ffffffffffffffd8;
  
  lVar5 = param_1[1];
  do {
    func_0x00010885b7b4();
    if ((int)param_1 != 0) {
      *(undefined1 *)(lVar5 + 0x9c) = 1;
      *(undefined1 *)(lVar5 + 0xa0) = 1;
      func_0x00010885b79c();
      break;
    }
  } while ((in_stack_ffffffffffffffd8 >> 1 & 1) == 0);
  func_0x00010885c1e0();
  if (param_2 != 0) {
    plVar6 = (long *)(param_2 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar6 = (long *)*param_1;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      (**(code **)(*plVar6 + 0x10))(plVar6,1,param_1);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  *param_1 = param_2;
  return;
}



/* Entry: 10884f4ec; end: 10884f58f;  */

void FUN_10884f4ec(undefined8 param_1,long param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined4 uStack_20c;
  undefined1 auStack_208 [24];
  undefined1 auStack_1f0 [440];
  byte bStack_38;
  
  func_0x00010885c1b0();
  FUN_1086a1148(auStack_208,*(undefined8 *)(param_2 + 0xb0),param_2 + 0x28,2);
  if ((bStack_38 & 1) == 0) {
    uVar4 = 0;
    *(undefined1 *)unaff_x19 = 0;
  }
  else {
    uStack_20c = 0;
    puVar1 = auStack_1f0;
    puVar3 = &uStack_20c;
    FUN_1086a3d00(puVar1,puVar3,unaff_x20 + 0x10);
    if (((ulong)puVar3 & 1) == 0) {
      puVar1 = (undefined1 *)0x0;
    }
    uVar2 = *(undefined8 *)(unaff_x20 + 0xb0);
    FUN_108863330(uVar2,unaff_x20 + 0x28,puVar1 + 1,0x7fffffffffffffff);
    *unaff_x19 = (int)uVar2;
    *(undefined1 **)(unaff_x19 + 2) = puVar1;
    uVar4 = 1;
  }
  *(undefined1 *)(unaff_x19 + 4) = uVar4;
  func_0x00010885c274();
  return;
}



/* Entry: 10884f590; end: 10884f63f;  */

long FUN_10884f590(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_108 [192];
  undefined1 auStack_48 [24];
  
  func_0x000107c29fb4(auStack_108,param_2,param_3);
  func_0x000107c28ffc(auStack_48,auStack_108);
  FUN_1086a0728(param_1,auStack_48);
  func_0x000107c28f98(auStack_48);
  func_0x000107c28fe8(auStack_108);
  FUN_1086a0a58(param_1 + 0x28,param_2,param_3);
  return param_1;
}



/* Entry: 10884f640; end: 10884f667;  */

undefined8 FUN_10884f640(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x0001086a9a34(param_1 + 0x28);
  func_0x0001086b07b0(param_1);
  func_0x0001086ac760();
  func_0x0001086b050c(unaff_x19);
  FUN_1086ac7b4();
  return unaff_x19;
}



/* Entry: 10884f668; end: 10884f81b;  */

void FUN_10884f668(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 auStack_78 [3];
  uint auStack_60 [4];
  byte bStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  FUN_1088566a8(auStack_78);
  FUN_10884f81c(param_1,auStack_78[0]);
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x000107c28258();
  uStack_38 = 1;
  uStack_40 = param_1;
  FUN_10884f854(param_2);
  FUN_10884f4ec(auStack_60,param_2);
  if ((bStack_50 & 1) == 0) {
    func_0x00010885c818(*(undefined8 *)(param_2 + 0xc0),0x26e,param_4,&uStack_48);
    uVar1 = 0;
  }
  else {
    func_0x00010885bbb4(*(undefined8 *)(param_2 + 0xc0),0x26e,param_4,&uStack_48);
    uVar1 = (ulong)(0 < (int)auStack_60[0]) | (ulong)auStack_60[0] << 0x20;
  }
  FUN_10884f9d4(auStack_78,uVar1);
  func_0x00010885c8ec();
  return;
}



/* Entry: 10884f81c; end: 10884f853;  */

void FUN_10884f81c(undefined8 param_1,long param_2)

{
  int extraout_w10;
  
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    do {
      func_0x00010885b868();
    } while (extraout_w10 != 0);
  }
  func_0x00010885bb60(param_2);
  return;
}



/* Entry: 10884f854; end: 10884f8f7;  */

void FUN_10884f854(long param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long *plVar2;
  code *extraout_x8;
  code *extraout_x8_00;
  long *plVar3;
  undefined1 auStack_f8 [40];
  undefined1 *puStack_d0;
  undefined1 auStack_c8 [32];
  undefined4 uStack_a8;
  undefined1 auStack_58 [24];
  long alStack_40 [3];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = *(long **)(param_1 + 0xa0);
  func_0x000107c27994(alStack_40,param_1 + 0x28);
  plVar2 = alStack_40;
  func_0x00010868c9c4(auStack_58,plVar2,1);
  func_0x00010885c4b8(*(undefined8 *)(*plVar3 + 0x10));
  (*extraout_x8)();
  func_0x000107c27a04(auStack_58);
  func_0x000107c27914(alStack_40);
  func_0x00010885b878(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010885bef4();
  func_0x000107c27a04();
  plVar3 = alStack_40;
  func_0x000107c27914();
  func_0x00010885bcf8();
  func_0x00010885c130();
  uStack_a8 = 0x2c0;
  puVar1 = auStack_c8;
  FUN_1088531ec();
  func_0x000107c28b38();
  func_0x00010885c82c();
  puStack_d0 = puVar1;
  (**(code **)(*plVar3 + 0x18))(plVar3);
  func_0x00010885c090();
  func_0x00010885c130();
  uStack_a8 = 0x2c1;
  puVar1 = auStack_c8;
  FUN_1088531ec(puVar1,plVar2);
  func_0x000107c28b38();
  func_0x000107c2884c(auStack_f8,puVar1);
  func_0x00010885c4b8(*(undefined8 *)(*plVar3 + 0x50));
  (*extraout_x8_00)();
  func_0x00010885bf9c();
  func_0x00010885c090();
  return;
}



/* Entry: 10884f8f8; end: 10884f9d3;  */

void FUN_10884f8f8(long *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  code *extraout_x8;
  undefined1 auStack_98 [40];
  undefined1 *puStack_70;
  undefined1 auStack_68 [32];
  undefined4 uStack_48;
  
  func_0x00010885c130();
  uStack_48 = 0x2c0;
  puVar1 = auStack_68;
  FUN_1088531ec();
  func_0x000107c28b38();
  func_0x00010885c82c();
  puStack_70 = puVar1;
  (**(code **)(*param_1 + 0x18))(param_1);
  func_0x00010885c090();
  func_0x00010885c130();
  uStack_48 = 0x2c1;
  puVar1 = auStack_68;
  FUN_1088531ec(puVar1,param_2);
  func_0x000107c28b38();
  func_0x000107c2884c(auStack_98,puVar1);
  func_0x00010885c4b8(*(undefined8 *)(*param_1 + 0x50));
  (*extraout_x8)();
  func_0x00010885bf9c();
  func_0x00010885c090();
  return;
}



/* Entry: 10884f9d4; end: 10884fa1b;  */

void FUN_10884f9d4(long *param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined1 extraout_w8;
  ulong uVar4;
  long unaff_x20;
  long *plVar5;
  undefined8 unaff_x21;
  uint uStack_38;
  
  func_0x00010885bf30();
  do {
    func_0x00010885b7b4();
    if ((int)param_1 != 0) {
      *(undefined8 *)(unaff_x20 + 0x98) = unaff_x21;
      func_0x00010885ca74();
      *(undefined1 *)(unaff_x20 + 0xa4) = extraout_w8;
      func_0x00010885b79c();
      break;
    }
  } while ((uStack_38 >> 1 & 1) == 0);
  func_0x00010885c1e0();
  if (param_2 != 0) {
    plVar5 = (long *)(param_2 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5,1,param_1);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  *param_1 = param_2;
  return;
}



/* Entry: 10884fa1c; end: 10884fa47;  */

undefined4 FUN_10884fa1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  FUN_10884f8f8(param_1,param_2,1,param_3);
  func_0x000108848514();
  if (param_4 - 1U < 0xc) {
    return *(undefined4 *)(&UNK_10df641fc + (ulong)(param_4 - 1U) * 4);
  }
  return 0;
}



/* Entry: 10884fa48; end: 10884fbc7;  */

void FUN_10884fa48(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  ulong *puVar3;
  undefined4 *puVar4;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar5;
  long unaff_x20;
  ulong uVar6;
  
  func_0x00010885bca8();
  func_0x00010885bf00();
  func_0x00010885c03c(FUN_10885a44c);
  func_0x00010885be90();
  (**(code **)(**(long **)(unaff_x20 + 0x50) + 0x20))
            (param_1 + 0x30,*(long **)(unaff_x20 + 0x50),unaff_x20 + 0x28);
  plVar2 = (long *)(unaff_x20 + 0xe0);
  FUN_10884fbc8(param_1 + 0x28,plVar2,param_1 + 0x30);
  func_0x00010885b9c8();
  do {
    func_0x00010885b868();
  } while (extraout_w10 != 0);
  func_0x00010885b998();
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x40) = 0;
    func_0x00010885b6dc();
    if (*plVar2 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x00010885bcd8();
    plVar2 = extraout_x8;
    do {
      if (*plVar2 == 0) {
        func_0x00010885b89c();
        plVar2 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar5 = extraout_w11_00;
      }
      else {
        func_0x00010885bc8c();
        plVar2 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar5 = extraout_w11;
      }
      if ((uVar5 & 1) != 0) {
        func_0x00010885b774();
        if ((bool)in_ZR) {
          func_0x00010885b88c();
          func_0x00010885b700();
          func_0x00010885b6a4();
        }
        func_0x00010885b678();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  puVar3 = (ulong *)(param_1 + 0x20);
  FUN_1086cc64c();
  uVar6 = *puVar3;
  *(ulong *)(param_1 + 0x38) = uVar6;
  func_0x00010885bc10();
  func_0x00010885bc08();
  func_0x00010885bc98();
  if (uVar6 >> 0x20 == 0) {
    puVar4 = (undefined4 *)(param_1 + 0x38);
    FUN_1086cc694();
    FUN_10884f464(*puVar4);
    func_0x00010885be68();
  }
  else {
    func_0x00010885bd84();
  }
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10884fbc8; end: 10884fe73;  */

void FUN_10884fbc8(long param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  long *plVar3;
  uint extraout_w8;
  uint extraout_w8_00;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long *extraout_x8_01;
  long *plVar4;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long *extraout_x8_05;
  long *extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  int extraout_w10;
  int extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  int extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar5;
  uint extraout_w11_01;
  uint extraout_w11_02;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar6;
  long lVar7;
  long in_stack_00000008;
  long in_stack_00000018;
  
  func_0x00010885c9a8();
  func_0x00010885c64c();
  func_0x00010885bf00();
  func_0x00010885c740(FUN_10885a2a8);
  if (extraout_x8_00 != 0) {
    do {
      func_0x00010885b868();
    } while (extraout_w10 != 0);
  }
  func_0x0001087522f0(param_1 + 0x10);
  FUN_108752270(extraout_x8,param_1 + 0x10);
  func_0x00010885c77c();
  func_0x00010885c770();
  func_0x00010885c22c();
  func_0x000107c28890();
  func_0x00010885c240();
  lVar6 = in_stack_00000018;
  func_0x000107c28894(in_stack_00000018,0,unaff_x21 + 0x38);
  func_0x000107c28898(lVar6,1);
  lVar7 = in_stack_00000008;
  in_stack_00000008 = 0;
  *(long *)(param_1 + 0x30) = lVar7;
  func_0x00010885bfac();
  plVar3 = &stack0x00000008;
  func_0x000107c2889c();
  *(long *)(param_1 + 0x28) = lVar7;
  do {
    func_0x00010885b868();
  } while (extraout_w10_00 != 0);
  func_0x00010885bc30(*(undefined8 *)(param_1 + 0x28));
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x40) = 0;
    func_0x00010885bad4();
    lVar7 = *plVar3;
    if (lVar7 == 0) {
      func_0x000107c3a5c0();
      lVar7 = *plVar3;
    }
    func_0x00010885c07c();
    plVar4 = extraout_x8_01;
    do {
      if (*plVar4 == 0) {
        func_0x00010885b89c();
        plVar4 = extraout_x8_03;
        uVar1 = extraout_w10_02;
        uVar5 = extraout_w11_00;
      }
      else {
        func_0x00010885bc8c();
        plVar4 = extraout_x8_02;
        uVar1 = extraout_w10_01;
        uVar5 = extraout_w11;
      }
      if ((uVar5 & 1) != 0) {
        func_0x00010885b928();
        if ((bool)in_ZR) {
          func_0x00010885b88c();
          func_0x00010885b900();
          func_0x00010885b7f4();
          *(long **)(lVar6 + 0x90) = plVar3;
        }
        func_0x00010885b9a8();
        *(long *)(extraout_x8_07 + 0x20) = lVar7;
        goto LAB_10884fdb8;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x00010885c5a0();
  lVar6 = *plVar3;
  func_0x00010885bc08();
  func_0x00010885bc98();
  if (lVar6 == 0) {
    func_0x00010885c210();
    func_0x00010885c064();
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_();
    func_0x00010885c7a4();
    func_0x00010885bdf4();
    ___cxa_throw(plVar3);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10884fdf8);
    (*pcVar2)();
  }
  func_0x00010885c728(*unaff_x20);
  do {
    func_0x00010885b868();
  } while (extraout_w10_03 != 0);
  func_0x00010885bc30(*(undefined8 *)(param_1 + 0x28));
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    func_0x00010885c058();
    func_0x00010885bad4();
    lVar7 = *plVar3;
    if (lVar7 == 0) {
      func_0x000107c3a5c0();
      lVar7 = *plVar3;
    }
    func_0x00010885c07c();
    plVar3 = extraout_x8_04;
    do {
      if (*plVar3 == 0) {
        func_0x00010885b89c();
        plVar3 = extraout_x8_06;
        uVar1 = extraout_w10_05;
        uVar5 = extraout_w11_02;
      }
      else {
        func_0x00010885bc8c();
        plVar3 = extraout_x8_05;
        uVar1 = extraout_w10_04;
        uVar5 = extraout_w11_01;
      }
      if ((uVar5 & 1) != 0) {
        func_0x00010885b928();
        if ((bool)in_ZR) {
          func_0x00010885b88c();
          func_0x00010885b700();
          func_0x00010885b720();
          func_0x00010885bab4();
        }
        func_0x00010885b9a8();
        *(long *)(extraout_x8_08 + 0x20) = lVar7;
LAB_10884fdb8:
        func_0x00010885b8ac(*(undefined8 *)(lVar6 + 0x90));
        func_0x00010885c468();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  lVar7 = param_1 + 0x28;
  FUN_1086cc64c(lVar7);
  func_0x0001087522bc(param_1 + 0x10,lVar7);
  func_0x00010885bc08();
  func_0x00010885bbf0();
  func_0x00010885bd8c();
  func_0x00010885bc18();
  return;
}



/* Entry: 10884fe74; end: 1088503f7;  */

/* WARNING: Removing unreachable block (ram,0x000108850114) */

void FUN_10884fe74(long param_1,undefined8 param_2,long *param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  undefined1 uVar3;
  code *pcVar4;
  char cVar5;
  undefined1 in_ZR;
  undefined1 uVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  byte *pbVar11;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong uVar12;
  ulong extraout_x8_04;
  undefined1 extraout_w9;
  long *extraout_x9;
  long lVar13;
  uint extraout_w10;
  int extraout_w10_00;
  long *plVar14;
  long *plVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  bool bVar19;
  byte bVar20;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  byte bStack_18;
  undefined8 uStack_10;
  
  func_0x00010885cab0();
  func_0x00010885ba64();
  puVar8 = (undefined8 *)0x2e0;
  uStack_10 = extraout_x8_00;
  __Znwm();
  *puVar8 = FUN_10885a4fc;
  puVar8[1] = FUN_10885a934;
  plVar14 = puVar8 + 0x51;
  puVar8[0x58] = param_1;
  FUN_108856810(puVar8 + 2);
  uVar9 = extraout_x8;
  FUN_1088503f8(extraout_x8,puVar8[2]);
  *(undefined1 *)(puVar8 + 0x53) = 0;
  puVar8[0x52] = 0;
  *plVar14 = 0;
  func_0x000107c28258();
  puVar8[0x52] = uVar9;
  *(undefined1 *)(puVar8 + 0x53) = 1;
  iVar16 = (int)param_4;
  if (((param_4 >> 0x20 & 1) == 0) || (in_ZR = iVar16 == 0, 0 < iVar16)) {
    FUN_10884f854(param_1);
    func_0x00010885c000(&lStack_1e8,*(undefined8 *)(param_1 + 0xb0),param_1 + 0x28);
    func_0x00010885c274();
    if ((bStack_18 & 1) != 0) {
      plVar10 = puVar8 + 0x54;
      in_ZR = ((ulong)param_3 & 1) == 0;
      cVar5 = '\0';
      cVar7 = '\0';
      if ((bool)in_ZR) {
        param_2 = 0x7fffffffffffffff;
      }
      puVar8[0x56] = param_2;
      bVar19 = (param_4 >> 0x20 & 1) == 0;
      if (bVar19) {
        *(undefined1 *)plVar10 = 0;
      }
      else {
        *plVar10 = (long)iVar16;
      }
      *(bool *)(puVar8 + 0x55) = !bVar19;
      *(undefined1 *)(puVar8 + 0x44) = 0;
      puVar8[0x3f] = 0;
      *(undefined1 *)(puVar8 + 0x40) = 0;
      puVar8[0x45] = param_1;
      puVar8[0x46] = puVar8 + 0x56;
      puVar8[0x47] = plVar10;
      puVar8[0x48] = puVar8 + 0x3f;
      plVar10 = puVar8 + 0x49;
      FUN_10885052c(plVar10,puVar8 + 0x45);
      plVar1 = puVar8 + 0x4d;
      func_0x00010885b6f0();
      plVar15 = (long *)0x0;
      bVar19 = false;
      iVar16 = 0;
      bVar20 = 0;
      while( true ) {
        *(int *)((long)puVar8 + 0x2d4) = iVar16;
        *(int *)(puVar8 + 0x5a) = (int)param_3;
        *(undefined1 *)((long)puVar8 + 0x2d9) = 1;
        if (((*(uint *)(puVar8 + 0x55) & 1) == 0) || (func_0x00010885c3fc(), cVar5 == cVar7))
        goto LAB_108850270;
        pbVar11 = (byte *)(puVar8[0x58] + 0x60);
        func_0x000107c289e8();
        if ((*pbVar11 & 1) == 0) {
          func_0x00010885bdc0(*(undefined1 *)(puVar8 + 0x44));
          if ((extraout_x8_02 & 1) == 0) {
            func_0x00010885ca80();
          }
          goto LAB_108850270;
        }
        func_0x00010885c000(puVar8 + 4,*(undefined8 *)(puVar8[0x58] + 0xb0),puVar8[0x58] + 0x28);
        if ((*(byte *)(puVar8 + 0x3e) & 1) == 0) break;
        if ((*(byte *)(puVar8 + 0x35) & 1) == 0) {
          func_0x00010885bbc0();
          func_0x00010885ca2c();
LAB_108850260:
          func_0x00010885c560();
          uVar12 = extraout_x8_04;
          goto joined_r0x000108850224;
        }
        func_0x00010885c5f8();
        param_3 = extraout_x9;
        if ((extraout_w8_00 & extraout_w10) == 0) {
          param_3 = (long *)0x7fffffffffffffff;
        }
        if (bVar19) {
          in_ZR = param_3 == plVar15;
          if ((bool)in_ZR) {
            func_0x00010885bbc0();
            func_0x00010885ca18();
            goto LAB_108850260;
          }
          in_ZR = ((long)plVar15 <= (long)param_3 & bVar20) == 1;
          if (!(bool)in_ZR) {
            bVar20 = (long)plVar15 <= (long)param_3 | bVar20;
            goto LAB_1088500a4;
          }
LAB_1088501e4:
          func_0x00010885b8c8();
          func_0x00010885c584();
          param_3 = (long *)0x0;
LAB_108850244:
          FUN_1088506d4(puVar8 + 2);
          func_0x00010885bd7c();
          goto LAB_108850284;
        }
LAB_1088500a4:
        *(byte *)((long)puVar8 + 0x2db) = bVar20 & 1;
        in_ZR = iVar16 == 3;
        if ((bool)in_ZR) goto LAB_1088501e4;
        plVar15 = (long *)puVar8[0x58];
        FUN_10884fa48(puVar8 + 0x57);
        *plVar1 = puVar8[0x57];
        do {
          func_0x00010885b868();
        } while (extraout_w10_00 != 0);
        func_0x00010885bc30(*plVar1);
        if ((extraout_w8_01 >> 1 & 1) == 0) {
          *(undefined1 *)(puVar8 + 0x5b) = 0;
          lVar18 = *plVar1;
          lVar17 = *plVar10;
          if (lVar17 == 0) {
            func_0x000107c3a5c0();
            lVar17 = *plVar15;
          }
          plVar2 = (long *)(lVar18 + 0x10);
          do {
            lVar13 = *plVar2;
            if (lVar13 == 0) {
              cVar5 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar19) {
                *plVar2 = 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
              in_ZR = cVar5 == '\0';
              if ((bool)in_ZR) {
                uVar6 = 1;
                plVar14 = *(long **)(lVar18 + 0x90);
                func_0x00010885b9b8();
                if ((bool)in_ZR) {
                  func_0x00010885b88c();
                  uVar3 = extraout_w8;
                  if ((bool)uVar6) {
                    uVar3 = extraout_w9;
                  }
                  func_0x00010885c528();
                  *(undefined1 *)plVar15 = uVar3;
                  func_0x00010885b810(0);
                  *(long **)(lVar18 + 0x90) = plVar15;
                }
                func_0x00010885b9a8();
                *(long *)(extraout_x8_01 + 0x20) = lVar17;
                func_0x00010885b8ac(*(undefined8 *)(lVar18 + 0x90));
                *(undefined8 *)(lVar18 + 0x10) = 0;
                goto LAB_10884ffb0;
              }
            }
            else {
              ClearExclusiveLocal();
            }
          } while (((uint)lVar13 >> 1 & 1) == 0);
        }
        param_3 = plVar1;
        FUN_108850730();
        param_3 = (long *)*param_3;
        func_0x00010885c31c();
        func_0x00010885c898();
        if (((ulong)param_3 >> 0x20 & 1) == 0) {
          func_0x00010885b8c8();
          func_0x00010885c584();
          goto LAB_108850244;
        }
        FUN_10885052c(plVar1,puVar8 + 0x45);
        func_0x000108826720(puVar8 + 0x49,plVar1);
        puVar8[0x4c] = puVar8[0x50];
        func_0x0001052c2794(plVar1);
        func_0x00010885bd7c();
        bVar20 = *(byte *)((long)puVar8 + 0x2db);
        plVar15 = (long *)puVar8[0x59];
        iVar16 = *(int *)((long)puVar8 + 0x2d4) + 1;
        cVar5 = '\0';
        in_ZR = (*(byte *)((long)puVar8 + 0x2da) & 0 < (long)plVar15) == 0;
        cVar7 = '\0';
        if ((bool)in_ZR) {
          plVar15 = (long *)0x7fffffffffffffff;
        }
        bVar19 = true;
      }
      func_0x00010885bdc0(*(undefined1 *)(puVar8 + 0x44));
      uVar12 = extraout_x8_03;
joined_r0x000108850224:
      if ((uVar12 & 1) == 0) {
        func_0x00010885ca80();
      }
      func_0x00010885bd7c();
LAB_108850270:
      func_0x00010885b8c8();
      param_3 = plVar14;
      FUN_108850430();
      func_0x00010885c8b4();
LAB_108850284:
      plVar15 = puVar8 + 0x49;
      goto LAB_10884ffa4;
    }
    FUN_108850430(param_1,plVar14,3,0);
  }
  else {
    FUN_108850430(param_1,plVar14,0,0);
  }
  lStack_1e8 = 0;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  param_3 = &lStack_1e8;
  FUN_1088504c0(puVar8 + 2);
  plVar15 = &lStack_1e8;
LAB_10884ffa4:
  func_0x0001052c2794(plVar15);
  while( true ) {
    func_0x00010885bbf0();
    func_0x00010885bc18();
LAB_10884ffb0:
    func_0x00010885b878(uStack_10);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    iVar16 = (int)param_3;
    if (iVar16 == 0) {
      do {
        func_0x00010885c034();
        func_0x00010885c8d8();
        iVar16 = (int)param_3;
      } while (iVar16 == 0);
    }
    else {
      func_0x00010885bd7c();
    }
    func_0x00010885c634();
    in_ZR = iVar16 == 4;
    if ((bool)in_ZR) {
      func_0x00010885bd20();
      func_0x00010885c8a8();
      ___cxa_end_catch();
    }
    else {
      in_ZR = iVar16 == 3;
      if ((bool)in_ZR) {
        lVar17 = puVar8[0x58];
        func_0x00010885bd20();
        param_3 = *(long **)(lVar17 + 0xc0);
        FUN_10884fa1c(param_3,0x7a026f,plVar14,plVar15);
        plVar15 = puVar8 + 2;
        FUN_1088506d4();
        ___cxa_end_catch();
      }
      else {
        in_ZR = iVar16 == 2;
        if ((bool)in_ZR) {
          lVar17 = puVar8[0x58];
          func_0x00010885bd20();
          func_0x00010885bba4(*(undefined8 *)(lVar17 + 0xc0),0x26f);
          ___cxa_rethrow();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1088503c0);
          (*pcVar4)();
        }
        func_0x00010885bd20();
        func_0x00010885bc00();
        ___cxa_end_catch();
      }
    }
  }
  return;
}



/* Entry: 1088503f8; end: 10885042f;  */

void FUN_1088503f8(undefined8 param_1,long param_2)

{
  int extraout_w10;
  
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    do {
      func_0x00010885b868();
    } while (extraout_w10 != 0);
  }
  func_0x00010885bb60(param_2);
  return;
}



/* Entry: 108850430; end: 1088504bf;  */

void FUN_108850430(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined ***pppuVar1;
  long *plVar2;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  FUN_10884f8f8(*(undefined8 *)(param_1 + 0xc0),0x7a026f,param_3,param_2);
  plVar2 = *(long **)(param_1 + 0xc0);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_58 = &PTR_FUN_110a609a8;
  uStack_50 = 0;
  uStack_38 = 0x2c2;
  pppuVar1 = &ppuStack_58;
  func_0x000107c28b38(pppuVar1,param_3);
  (**(code **)(*plVar2 + 0x78))(plVar2,pppuVar1,param_4);
  func_0x00010885bf9c();
  return;
}



/* Entry: 1088504c0; end: 10885052b;  */

void FUN_1088504c0(long *param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long unaff_x20;
  long *plVar5;
  undefined8 *unaff_x21;
  undefined8 uVar6;
  uint uStack_38;
  
  func_0x00010885bf30();
  do {
    func_0x00010885b7b4();
    if ((int)param_1 != 0) {
      param_1 = (long *)(unaff_x20 + 0x98);
      FUN_1088550b4();
      *(undefined8 *)(unaff_x20 + 0x98) = 0;
      *(undefined8 *)(unaff_x20 + 0xa0) = 0;
      *(undefined8 *)(unaff_x20 + 0xa8) = 0;
      uVar6 = *unaff_x21;
      *(undefined8 *)(unaff_x20 + 0xa0) = unaff_x21[1];
      *(undefined8 *)(unaff_x20 + 0x98) = uVar6;
      *(undefined8 *)(unaff_x20 + 0xa8) = unaff_x21[2];
      func_0x00010885ca8c();
      *(undefined1 *)(unaff_x20 + 0xb0) = 1;
      *(undefined1 *)(unaff_x20 + 0xb8) = 1;
      func_0x00010885b79c();
      break;
    }
  } while ((uStack_38 >> 1 & 1) == 0);
  func_0x00010885c1e0();
  if (param_2 != 0) {
    plVar5 = (long *)(param_2 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5,1,param_1);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  *param_1 = param_2;
  return;
}



/* Entry: 10885052c; end: 1088506d3;  */

void FUN_10885052c(long *param_1,long *param_2)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined1 in_ZR;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 extraout_x8;
  long lVar8;
  long extraout_x8_00;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  ulong unaff_x21;
  ulong unaff_x22;
  undefined8 uVar12;
  uint uStack_2c8;
  long *plStack_288;
  long *plStack_280;
  byte *pbStack_278;
  undefined8 *puStack_270;
  undefined1 auStack_268 [455];
  byte bStack_a1;
  undefined1 auStack_a0 [80];
  undefined8 uStack_50;
  undefined1 uStack_41;
  code *pcStack_40;
  undefined **ppuStack_38;
  undefined1 *puStack_30;
  long **pplStack_28;
  undefined1 *puStack_20;
  long **pplStack_18;
  undefined8 uStack_10;
  
  func_0x00010885cab0();
  plVar11 = param_1;
  func_0x00010885ba64();
  lVar10 = *param_2;
  uStack_50 = *(undefined8 *)param_2[1];
  lVar2 = *(long *)param_2[2];
  uVar9 = ((long *)param_2[2])[1];
  plVar11[1] = 0;
  *plVar11 = 0;
  plVar11[3] = 0;
  plVar11[2] = 0;
  uStack_10 = extraout_x8;
  FUN_10884f590(auStack_a0,*(undefined8 *)(lVar10 + 0xb0),lVar10 + 0x28);
  lVar8 = 0;
  bStack_a1 = 0;
  do {
    *(int *)(param_1 + 3) = (int)param_1[3] + 1;
    if ((uVar9 & 1) == 0) {
      unaff_x22 = unaff_x22 & 0xffffffffffffff00;
      unaff_x21 = unaff_x21 & 0xffffffffffffff00;
    }
    else {
      func_0x00010885c6ec(lVar8);
      unaff_x22 = extraout_x8_00 + lVar2;
      unaff_x21 = unaff_x21 & 0xffffffffffffff00 | 1;
    }
    FUN_108868254(auStack_268,*(undefined8 *)(lVar10 + 0xb0),lVar10 + 0x28,1,uStack_50,unaff_x22,
                  unaff_x21);
    bStack_a1 = 1;
    pbStack_278 = &bStack_a1;
    puStack_270 = &uStack_50;
    uStack_41 = 0;
    pcStack_40 = FUN_10885670c;
    ppuStack_38 = &PTR_FUN_110a7c350;
    puStack_30 = auStack_a0;
    puVar6 = auStack_268;
    plStack_288 = param_1;
    plStack_280 = param_1;
    pplStack_28 = &plStack_280;
    puStack_20 = &uStack_41;
    pplStack_18 = &plStack_288;
    FUN_1086adc48(auStack_a0,puVar6,&pcStack_40);
    func_0x00010885c284();
    func_0x000107c28948(auStack_268);
    if (((uint)uVar9 & (bStack_a1 ^ 0xffffffff) & 1) == 0) break;
    lVar8 = param_1[1];
    lVar3 = (lVar8 - *param_1) / 0x48;
    in_ZR = lVar3 == lVar2;
  } while (lVar3 < lVar2);
  FUN_10884f640();
  uVar12 = *(undefined8 *)param_2[3];
  *(undefined8 *)param_2[3] =
       CONCAT44((int)((ulong)uVar12 >> 0x20) + (int)((ulong)param_1[3] >> 0x20),
                (int)uVar12 + (int)param_1[3]);
  func_0x00010885b878(uStack_10);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001052c2794();
  func_0x00010885bca0();
  lVar10 = param_1[1];
  puVar7 = puVar6;
  do {
    func_0x00010885b7b4();
    if ((int)param_1 != 0) {
      param_1 = (long *)(lVar10 + 0x98);
      FUN_1088550b4();
      *(int *)(lVar10 + 0x98) = (int)puVar6;
      *(undefined1 *)(lVar10 + 0xb0) = 0;
      *(undefined1 *)(lVar10 + 0xb8) = 1;
      func_0x00010885b79c();
      break;
    }
  } while ((uStack_2c8 >> 1 & 1) == 0);
  func_0x00010885c1e0();
  if (puVar7 != (undefined1 *)0x0) {
    plVar11 = (long *)(puVar7 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = *plVar11 + 0x200000000;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar11 = (long *)*param_1;
  if (plVar11 != (long *)0x0) {
    puVar1 = (ulong *)(plVar11 + 1);
    do {
      uVar9 = *puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar9 - 0x200000000;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (uVar9 >> 0x21 == 1) {
      (**(code **)(*plVar11 + 0x10))(plVar11,1,param_1);
      do {
        uVar9 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar9 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar9 - 1 == 0) {
        (**(code **)(*plVar11 + 8))(plVar11);
      }
    }
  }
  *param_1 = (long)puVar7;
  return;
}



/* Entry: 1088506d4; end: 10885072f;  */

void FUN_1088506d4(long *param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  uint uStack_38;
  
  lVar6 = param_1[1];
  lVar4 = param_2;
  do {
    func_0x00010885b7b4();
    if ((int)param_1 != 0) {
      param_1 = (long *)(lVar6 + 0x98);
      FUN_1088550b4();
      *(int *)(lVar6 + 0x98) = (int)param_2;
      *(undefined1 *)(lVar6 + 0xb0) = 0;
      *(undefined1 *)(lVar6 + 0xb8) = 1;
      func_0x00010885b79c();
      break;
    }
  } while ((uStack_38 >> 1 & 1) == 0);
  func_0x00010885c1e0();
  if (lVar4 != 0) {
    plVar7 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar7 = (long *)*param_1;
  if (plVar7 != (long *)0x0) {
    puVar1 = (ulong *)(plVar7 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar5 >> 0x21 == 1) {
      (**(code **)(*plVar7 + 0x10))(plVar7,1,param_1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  *param_1 = lVar4;
  return;
}



/* Entry: 108850730; end: 108850767;  */

long FUN_108850730(void)

{
  code *pcVar1;
  long extraout_x8;
  uint extraout_w9;
  
  func_0x00010885bda4();
  if ((extraout_w9 >> 5 & 1) == 0) {
    return extraout_x8 + 0x98;
  }
  func_0x00010885be38();
  func_0x00010885c4d8();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108850760);
  (*pcVar1)();
}



/* Entry: 108850768; end: 108850a9f;  */

void FUN_108850768(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  code **ppcVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uStack_4d8;
  long alStack_4d0 [2];
  undefined1 uStack_4a1;
  undefined1 uStack_4a0;
  undefined7 uStack_49f;
  undefined1 uStack_498;
  undefined7 uStack_497;
  undefined4 uStack_484;
  code *pcStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined1 auStack_2c0 [80];
  undefined8 auStack_270 [58];
  byte bStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 uStack_79;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  func_0x00010885c1b0();
  func_0x00010885ba64();
  uStack_48 = extraout_x8_00;
  FUN_1088568a4(&uStack_4d8);
  FUN_108850aa0(extraout_x8,uStack_4d8);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  func_0x000107c28258();
  uStack_88 = 1;
  FUN_10884f854();
  func_0x00010885c000(auStack_270,*(undefined8 *)(unaff_x19 + 0xb0),unaff_x19 + 0x28);
  if ((bStack_a0 & 1) == 0) {
    func_0x00010885c818(*(undefined8 *)(unaff_x19 + 0xc0),0x275);
    pcStack_480._0_4_ = 0;
    uStack_478 = 0;
    uStack_470 = 0;
    ppcVar6 = &pcStack_480;
    FUN_108850ad8(&uStack_4d8);
  }
  else {
    FUN_10884f590(auStack_2c0,*(undefined8 *)(unaff_x19 + 0xb0),unaff_x19 + 0x28);
    in_ZR = (param_3 & 1) == 0;
    if ((bool)in_ZR) {
      unaff_x20 = 0x7fffffffffffffff;
    }
    FUN_108868254(&pcStack_480,*(undefined8 *)(unaff_x19 + 0xb0),unaff_x19 + 0x28,1,unaff_x20,0,0);
    uStack_484 = 0;
    uStack_4a0 = 0;
    uStack_498 = 0;
    uStack_79 = 0;
    pcStack_78 = FUN_108856908;
    ppuStack_70 = &PTR_FUN_110a7c3e8;
    puStack_68 = auStack_2c0;
    puStack_60 = &uStack_4a1;
    puStack_58 = &uStack_79;
    puStack_50 = &stack0xfffffffffffffb40;
    FUN_1086adc48(auStack_2c0,&pcStack_480,&pcStack_78);
    func_0x00010885c184(ppuStack_70);
    func_0x00010885bbb4(*(undefined8 *)(unaff_x19 + 0xc0),0x275);
    pcStack_78 = (code *)CONCAT44(pcStack_78._4_4_,uStack_484);
    puStack_68 = (undefined1 *)CONCAT71(uStack_497,uStack_498);
    ppuStack_70 = (undefined **)CONCAT71(uStack_49f,uStack_4a0);
    ppcVar6 = &pcStack_78;
    FUN_108850ad8(&uStack_4d8);
    func_0x000107c28948(&pcStack_480);
    FUN_10884f640(auStack_2c0);
  }
  func_0x000107c288c8(auStack_270);
  do {
    while( true ) {
      func_0x000107c27fb8(&uStack_4d8);
      func_0x00010885b878(uStack_48);
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      iVar5 = (int)ppcVar6;
      if (iVar5 != 0) break;
      do {
        func_0x00010885bca0();
      } while ((int)ppcVar6 == 0);
      ___cxa_end_catch();
LAB_1088509e8:
      func_0x00010885bbf8();
      func_0x0001053360b0(&uStack_4d8);
      ___cxa_end_catch();
    }
    func_0x000107c28948(&pcStack_480);
    FUN_10884f640(auStack_2c0);
    puVar2 = auStack_270;
    func_0x000107c288c8(puVar2);
    in_ZR = iVar5 == 3;
    if (!(bool)in_ZR) {
      in_ZR = 0;
      if (iVar5 == 2) {
        func_0x00010885bbf8();
        func_0x00010885ba00(*(undefined8 *)(unaff_x19 + 0xc0),0x275);
        ___cxa_rethrow();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x108850a54);
        (*pcVar1)();
      }
      goto LAB_1088509e8;
    }
    func_0x00010885bbf8();
    uVar3 = *(undefined8 *)(unaff_x19 + 0xc0);
    func_0x00010885c120(uVar3,0x275,&uStack_98,puVar2);
    unaff_x19 = alStack_4d0[0];
    do {
      auStack_270[0] = 0;
      lVar4 = unaff_x19 + 0x10;
      func_0x00010885b91c(lVar4,auStack_270);
      if ((int)lVar4 != 0) {
        *(int *)(unaff_x19 + 0x98) = (int)uVar3;
        *(undefined1 *)(unaff_x19 + 0xb0) = 0;
        *(undefined1 *)(unaff_x19 + 0xb8) = 1;
        *(undefined8 *)(unaff_x19 + 0x10) = 2;
        func_0x000107c31508(unaff_x19,alStack_4d0);
        break;
      }
    } while (((uint)auStack_270[0] >> 1 & 1) == 0);
    ppcVar6 = (code **)0x0;
    func_0x000107c27fa0(alStack_4d0);
    ___cxa_end_catch();
  } while( true );
}



/* Entry: 108850aa0; end: 108850ad7;  */

void FUN_108850aa0(undefined8 param_1,long param_2)

{
  int extraout_w10;
  
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    do {
      func_0x00010885b868();
    } while (extraout_w10 != 0);
  }
  func_0x00010885bb60(param_2);
  return;
}



/* Entry: 108850ad8; end: 108850b3f;  */

void FUN_108850ad8(long *param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long unaff_x20;
  long *plVar5;
  undefined8 *unaff_x21;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uStack_38;
  
  func_0x00010885bf30();
  do {
    func_0x00010885b7b4();
    if ((int)param_1 != 0) {
      if (*(char *)(unaff_x20 + 0xb8) == '\x01') {
        *(undefined1 *)(unaff_x20 + 0xb8) = 0;
      }
      uVar7 = unaff_x21[1];
      uVar6 = *unaff_x21;
      *(undefined8 *)(unaff_x20 + 0xa8) = unaff_x21[2];
      *(undefined8 *)(unaff_x20 + 0xa0) = uVar7;
      *(undefined8 *)(unaff_x20 + 0x98) = uVar6;
      *(undefined1 *)(unaff_x20 + 0xb0) = 1;
      *(undefined1 *)(unaff_x20 + 0xb8) = 1;
      func_0x00010885b79c();
      break;
    }
  } while ((uStack_38 >> 1 & 1) == 0);
  func_0x00010885c1e0();
  if (param_2 != 0) {
    plVar5 = (long *)(param_2 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5,1,param_1);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  *param_1 = param_2;
  return;
}



/* Entry: 108850b40; end: 10885114f;  */

void FUN_108850b40(long param_1,long param_2,long *param_3)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  code *pcVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined ***pppuVar11;
  long lVar12;
  uint extraout_w8;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  long *plVar13;
  long *extraout_x8_01;
  long *extraout_x8_02;
  code *extraout_x8_03;
  long extraout_x8_04;
  int extraout_w10;
  int extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  int extraout_w11;
  int extraout_w11_00;
  uint extraout_w11_01;
  uint extraout_w11_02;
  uint uVar14;
  int iVar15;
  long *unaff_x26;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_68;
  
  func_0x00010885ba64();
  puVar7 = (undefined8 *)0x128;
  uStack_68 = extraout_x8;
  __Znwm();
  *puVar7 = FUN_108859a38;
  puVar7[1] = FUN_108859c00;
  lVar12 = *param_3;
  puVar7[0xe] = param_3[1];
  puVar7[0xd] = lVar12;
  puVar7[0x23] = param_2;
  puVar7[0xf] = param_3[2];
  puVar8 = puVar7;
  func_0x00010885ca8c();
  func_0x00010885c010();
  func_0x00010885c7f0();
  puVar7[0x10] = 0;
  puVar7[0x11] = 0;
  *(undefined1 *)(puVar7 + 0x12) = 0;
  func_0x000107c28258();
  puVar7[0x11] = puVar8;
  *(undefined1 *)(puVar7 + 0x12) = 1;
  lVar12 = puVar7[0xd];
  uVar6 = lVar12 == puVar7[0xe];
  if ((bool)uVar6) {
    plVar10 = *(long **)(param_2 + 0xc0);
    pppuVar11 = (undefined ***)0x270;
    func_0x00010885b964();
    func_0x00010885bd50();
    func_0x00010885c788(*(undefined8 *)(*plVar10 + 0x78));
    func_0x00010885c0ac();
    func_0x00010885bd84();
  }
  else {
    FUN_1086d27d8(puVar7 + 0x13,lVar12,puVar7[0xe],&ppuStack_98);
    FUN_108861c90(puVar7 + 0x16,*(undefined8 *)(param_2 + 0xb0),param_2 + 0x28,puVar7 + 0x13);
    uVar6 = puVar7[0x16] == puVar7[0x17];
    if ((bool)uVar6) {
      plVar10 = *(long **)(param_2 + 0xc0);
      pppuVar11 = (undefined ***)0x270;
      func_0x00010885b964();
      func_0x00010885bd50();
      func_0x00010885c788(*(undefined8 *)(*plVar10 + 0x78));
      func_0x00010885c0ac();
      func_0x00010885bd84();
    }
    else {
      puVar7[0x19] = 0;
      puVar7[0x1a] = 0;
      puVar7[0x1b] = 0;
      func_0x000107c27acc(puVar7 + 0x19,(long)(puVar7[0x17] - puVar7[0x16]) / 0x1a8);
      lVar12 = puVar7[0x16];
      lVar9 = puVar7[0x17];
      while( true ) {
        uVar6 = lVar12 == lVar9;
        if ((bool)uVar6) break;
        func_0x000107c28944(puVar7 + 0x19,lVar12 + 0x18);
        lVar12 = lVar12 + 0x1a8;
      }
      func_0x00010885c1bc();
      func_0x000107c29ee4(&ppuStack_98,param_2 + 0x10);
      FUN_1086a7b48(puVar7 + 4);
      func_0x000107c287d0();
      func_0x000107c2a2e0(&ppuStack_98);
      ppuStack_98 = &PTR_DAT_110a95780;
      ppuStack_90 = (undefined **)0x0;
      uStack_88 = (ulong)uStack_88._4_4_ << 0x20;
      func_0x0001086a7bf8(puVar7 + 4);
      FUN_1086a7b58();
      FUN_10891ee58(&ppuStack_98);
      func_0x000107c289cc(puVar7 + 0x1c);
      lVar12 = puVar7[0x1d];
      if (lVar12 != 0) {
        do {
          func_0x00010885c6bc();
        } while (extraout_w11 != 0);
        if (puVar7[0x1d] != 0) {
          do {
            func_0x00010885c6bc();
          } while (extraout_w11_00 != 0);
        }
      }
      param_1 = 0x80;
      __Znwm();
      lVar9 = param_1;
      func_0x00010885c48c();
      ppuVar1 = (undefined **)(lVar9 + 0x18);
      ppuStack_98 = (undefined **)0x108856a24;
      ppuStack_90 = &PTR_DAT_110a7c450;
      uStack_88 = lVar12;
      func_0x00010885c3b0(FUN_108856a70);
      FUN_108856b50(ppuVar1);
      func_0x00010885c43c();
      func_0x00010885c42c();
      puVar7[0x1e] = ppuVar1;
      puVar7[0x1f] = param_1;
      func_0x00010885c098();
      func_0x00010885c17c();
      plVar10 = *(long **)(param_2 + 0x40);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x26,0x10);
        if (bVar3) {
          *unaff_x26 = *unaff_x26 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      ppuStack_98 = ppuVar1;
      ppuStack_90 = (undefined **)param_1;
      (**(code **)(*plVar10 + 0x318))(plVar10,param_2 + 0x28,puVar7 + 0x19,puVar7 + 4,&ppuStack_98);
      func_0x00010885c4e8();
      puVar7[0x22] = puVar7[0x1c];
      if (puVar7[0x1c] != 0) {
        do {
          func_0x00010885b868();
        } while (extraout_w10 != 0);
      }
      plVar10 = (long *)(param_2 + 0xe0);
      pppuVar11 = (undefined ***)(puVar7 + 0x22);
      func_0x000107c2883c(puVar7 + 0x21);
      puVar7[0x20] = puVar7[0x21];
      do {
        func_0x00010885b868();
      } while (extraout_w10_00 != 0);
      func_0x00010885bc30(puVar7[0x20]);
      if ((extraout_w8 >> 1 & 1) == 0) {
        *(undefined1 *)(puVar7 + 0x24) = 0;
        lVar12 = puVar7[0x20];
        func_0x00010885b6f0();
        param_1 = *plVar10;
        if (param_1 == 0) {
          func_0x000107c3a5c0();
          param_1 = *plVar10;
        }
        func_0x00010885c07c();
        plVar13 = extraout_x8_00;
        do {
          if (*plVar13 == 0) {
            func_0x00010885b89c();
            plVar13 = extraout_x8_02;
            uVar4 = extraout_w10_02;
            uVar14 = extraout_w11_02;
          }
          else {
            func_0x00010885bc8c();
            plVar13 = extraout_x8_01;
            uVar4 = extraout_w10_01;
            uVar14 = extraout_w11_01;
          }
          if ((uVar14 & 1) != 0) {
            func_0x00010885b928();
            if ((bool)uVar6) {
              func_0x00010885b88c();
              func_0x00010885b900();
              func_0x00010885b7f4();
              *(long **)(lVar12 + 0x90) = plVar10;
            }
            func_0x00010885b9a8();
            *(long *)(extraout_x8_04 + 0x20) = param_1;
            func_0x00010885b8ac(*(undefined8 *)(lVar12 + 0x90));
            func_0x00010885c468();
            goto LAB_108850ecc;
          }
        } while ((uVar4 >> 1 & 1) == 0);
      }
      func_0x000107c28834(puVar7 + 0x20);
      lVar12 = puVar7[0x23];
      func_0x00010885c674();
      func_0x00010885c3a0();
      func_0x00010885c398();
      func_0x00010885b964(*(undefined8 *)(lVar12 + 0xc0),0x270);
      func_0x00010885bd50();
      func_0x00010885c658();
      pppuVar11 = &ppuStack_98;
      (*extraout_x8_03)();
      func_0x00010885c0ac();
      func_0x00010885bd84();
      func_0x00010885c390();
      func_0x00010885c358();
      func_0x00010885bf58();
      func_0x00010885c254();
    }
    func_0x00010885c2fc();
    func_0x00010885c25c();
  }
  while( true ) {
    func_0x00010885bbf0();
    func_0x00010885c388();
    func_0x00010885bc18();
LAB_108850ecc:
    func_0x00010885b878(uStack_68);
    if ((bool)uVar6) break;
    ___stack_chk_fail();
    if ((int)pppuVar11 != 0) goto LAB_108850f24;
    do {
      func_0x00010885c598();
LAB_108850f24:
      func_0x00010885c8a0();
      func_0x00010885bf70();
      iVar15 = (int)param_1;
    } while (iVar15 == 0);
    func_0x00010885c0ac();
    func_0x00010885c2fc();
    func_0x00010885c25c();
    uVar6 = iVar15 == 3;
    if ((bool)uVar6) {
      param_1 = puVar7[0x23];
      func_0x00010885bd18();
      pppuVar11 = *(undefined ****)(param_1 + 0xc0);
      func_0x00010885c80c(pppuVar11,0x270);
      func_0x00010885bec0();
      ___cxa_end_catch();
    }
    else {
      uVar6 = iVar15 == 2;
      if ((bool)uVar6) {
        lVar12 = puVar7[0x23];
        func_0x00010885bd18();
        func_0x00010885ba34(*(undefined8 *)(lVar12 + 0xc0),0x270);
        ___cxa_rethrow();
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10885110c);
        (*pcVar5)();
      }
      func_0x00010885bd18();
      func_0x00010885bc00();
      ___cxa_end_catch();
    }
  }
  return;
}



/* Entry: 108851150; end: 108851797;  */

/* WARNING: Removing unreachable block (ram,0x0001088515a0) */

void FUN_108851150(void)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  code *pcVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long *plVar9;
  int *piVar10;
  undefined8 *puVar11;
  int iVar12;
  uint extraout_w8;
  uint extraout_w8_00;
  undefined8 extraout_x8;
  ulong uVar13;
  long lVar14;
  long *extraout_x8_00;
  long *plVar15;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long *extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  int extraout_w10;
  int extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  int extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w10_05;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong extraout_x11_01;
  ulong extraout_x11_02;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar16;
  long lVar17;
  undefined8 uStack_78;
  
  func_0x00010885bf7c();
  func_0x00010885ba64();
  puVar7 = (undefined8 *)0xf8;
  __Znwm();
  *puVar7 = FUN_108859508;
  puVar7[1] = FUN_108859820;
  puVar7[0x1b] = unaff_x21;
  puVar7[0x1c] = unaff_x22;
  puVar11 = puVar7;
  func_0x00010885c010();
  func_0x00010885be84();
  puVar7[0xd] = 0;
  puVar7[0xe] = 0;
  *(undefined1 *)(puVar7 + 0xf) = 0;
  func_0x000107c28258();
  puVar7[0xe] = puVar11;
  *(undefined1 *)(puVar7 + 0xf) = 1;
  FUN_108721c84(puVar7 + 0x10,&stack0xffffffffffffff90,1,&uStack_78);
  puVar11 = (undefined8 *)(unaff_x21 + 0x28);
  FUN_108861c90(puVar7 + 0x13,*(undefined8 *)(unaff_x21 + 0xb0),puVar11,puVar7 + 0x10);
  uVar6 = puVar7[0x13] == puVar7[0x14];
  if ((bool)uVar6) {
    func_0x00010885bff4(*(undefined8 *)(unaff_x21 + 0xc0));
    func_0x00010885c8f4();
    func_0x00010885bd84();
  }
  else {
    uVar16 = *(undefined8 *)(puVar7[0x13] + 0x18);
    puVar7[0x1d] = uVar16;
    func_0x00010885c1bc();
    func_0x000107c29ee4(&stack0xffffffffffffff90,unaff_x21 + 0x10);
    FUN_1086a7b48(puVar7 + 4);
    func_0x000107c287d0();
    func_0x000107c2a2e0(&stack0xffffffffffffff90);
    if (*(int *)(puVar7 + 0xc) == 0x1c) {
      puVar8 = (undefined1 *)puVar7[0xb];
    }
    else {
      FUN_10891c548(puVar7 + 4);
      *(undefined4 *)(puVar7 + 0xc) = 0x1c;
      puVar8 = (undefined1 *)puVar7[5];
      if (((ulong)puVar8 & 1) != 0) {
        puVar8 = *(undefined1 **)((ulong)puVar8 & 0xfffffffffffffffe);
      }
      FUN_108853248();
      puVar7[0xb] = puVar8;
    }
    uVar6 = puVar8 == &stack0xffffffffffffff90;
    if (!(bool)uVar6) {
      uVar13 = *(ulong *)(puVar8 + 8);
      if ((uVar13 & 1) != 0) {
        uVar13 = *(ulong *)(uVar13 & 0xfffffffffffffffe);
      }
      uVar6 = uVar13 == 0;
      if ((bool)uVar6) {
        *(undefined8 *)(puVar8 + 8) = 0;
      }
      else {
        FUN_10891f0b0();
      }
    }
    FUN_10891f008(&stack0xffffffffffffff90);
    FUN_1086708f8(puVar7 + 0x16);
    plVar9 = *(long **)(unaff_x21 + 0x40);
    if (puVar7[0x17] != 0) {
      plVar15 = (long *)(puVar7[0x17] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar3) {
          *plVar15 = *plVar15 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    (**(code **)(*plVar9 + 800))
              (plVar9,unaff_x21 + 0x28,uVar16,0,puVar7 + 4,&stack0xffffffffffffff90);
    func_0x000104be3970(&stack0xffffffffffffff90);
    lVar14 = *(long *)(puVar7[0x16] + 8);
    puVar7[0x1a] = lVar14;
    if (lVar14 != 0) {
      do {
        func_0x00010885b868();
      } while (extraout_w10 != 0);
    }
    plVar9 = (long *)(unaff_x21 + 0xe0);
    puVar11 = puVar7 + 0x1a;
    FUN_108851798(puVar7 + 0x19);
    func_0x00010885c6fc();
    do {
      func_0x00010885b868();
    } while (extraout_w10_00 != 0);
    func_0x00010885bc30(puVar7[0x18]);
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar7 + 0x1e) = 0;
      lVar14 = puVar7[0x18];
      func_0x00010885bb10();
      lVar17 = *plVar9;
      if (lVar17 == 0) {
        func_0x000107c3a5c0();
        lVar17 = *plVar9;
      }
      func_0x00010885c07c();
      plVar15 = extraout_x8_00;
      do {
        if (*plVar15 == 0) {
          func_0x00010885b89c();
          plVar15 = extraout_x8_02;
          uVar4 = extraout_w10_02;
          uVar13 = extraout_x11_00;
        }
        else {
          func_0x00010885bc8c();
          plVar15 = extraout_x8_01;
          uVar4 = extraout_w10_01;
          uVar13 = extraout_x11;
        }
        if ((uVar13 & 1) != 0) {
          func_0x00010885b928();
          if ((bool)uVar6) {
            func_0x00010885b88c();
            func_0x00010885b900();
            func_0x00010885b7f4();
            *(long **)(lVar14 + 0x90) = plVar9;
          }
          func_0x00010885b9a8();
          *(long *)(extraout_x8_06 + 0x20) = lVar17;
          goto LAB_108851564;
        }
      } while ((uVar4 >> 1 & 1) == 0);
    }
    piVar10 = (int *)(puVar7 + 0x18);
    func_0x000107c28a1c();
    iVar12 = *piVar10;
    bVar1 = *(byte *)(piVar10 + 1);
    func_0x00010885bfbc();
    func_0x00010885bf94();
    func_0x00010885bfb4();
    if (((bVar1 & 1) == 0) || (iVar12 == 6)) {
      uStack_78 = puVar7[0x1d];
      uVar16 = *(undefined8 *)(puVar7[0x1b] + 0xb0);
      func_0x00010885c7e8(&stack0xffffffffffffff90,&uStack_78);
      puVar11 = (undefined8 *)(puVar7[0x1b] + 0x28);
      FUN_108864508(uVar16,puVar11,&stack0xffffffffffffff90);
      lVar14 = puVar7[0x1b];
      func_0x000107c27ae4(&stack0xffffffffffffff90);
      uVar6 = *(long *)(lVar14 + 0x168) == *(long *)(lVar14 + 0x170);
      if (!(bool)uVar6) {
        puVar11 = (undefined8 *)puVar7[0x1c];
        FUN_10884d968(puVar7[0x1b] + 0x160);
        plVar9 = (long *)puVar7[0x1b];
        FUN_1088519f8(puVar7 + 0x19);
        func_0x00010885c6fc();
        do {
          func_0x00010885b868();
        } while (extraout_w10_03 != 0);
        func_0x00010885bc30(puVar7[0x18]);
        if ((extraout_w8_00 >> 1 & 1) == 0) {
          *(undefined1 *)(puVar7 + 0x1e) = 1;
          lVar14 = puVar7[0x18];
          func_0x00010885bb10();
          lVar17 = *plVar9;
          if (lVar17 == 0) {
            func_0x000107c3a5c0();
            lVar17 = *plVar9;
          }
          func_0x00010885c07c();
          plVar9 = extraout_x8_03;
          do {
            if (*plVar9 == 0) {
              func_0x00010885b89c();
              plVar9 = extraout_x8_05;
              uVar4 = extraout_w10_05;
              uVar13 = extraout_x11_02;
            }
            else {
              func_0x00010885bc8c();
              plVar9 = extraout_x8_04;
              uVar4 = extraout_w10_04;
              uVar13 = extraout_x11_01;
            }
            if ((uVar13 & 1) != 0) {
              func_0x00010885b928();
              if ((bool)uVar6) {
                func_0x00010885b88c();
                func_0x00010885b700();
                func_0x00010885b720();
                func_0x00010885bab4();
              }
              func_0x00010885b9a8();
              *(long *)(extraout_x8_07 + 0x20) = lVar17;
LAB_108851564:
              func_0x00010885b8ac(*(undefined8 *)(lVar14 + 0x90));
              func_0x00010885c468();
              goto LAB_108851570;
            }
          } while ((uVar4 >> 1 & 1) == 0);
        }
        func_0x000107c28834(puVar7 + 0x18);
        func_0x00010885bfbc();
        func_0x00010885bf94();
      }
      func_0x00010885c5b8();
      func_0x00010885bff4();
      func_0x00010885c8f4();
      func_0x00010885bd84();
    }
    else {
      uVar6 = iVar12 == 5;
      if ((bool)uVar6) {
        func_0x00010885c5b8();
        func_0x00010885bba4();
        puVar11 = (undefined8 *)0x5;
      }
      else {
        func_0x00010885c5b8();
        func_0x00010885bba4();
        puVar11 = (undefined8 *)0x0;
      }
      FUN_10884f414(puVar7 + 2);
    }
    func_0x00010885c30c();
    func_0x00010885bf58();
  }
  func_0x00010885bf08();
  func_0x00010885c2dc();
  while( true ) {
    func_0x00010885bbf0();
    func_0x00010885bc18();
LAB_108851570:
    func_0x00010885b878(extraout_x8);
    if ((bool)uVar6) break;
    ___stack_chk_fail();
    if ((int)puVar11 != 0) goto LAB_1088515e0;
    do {
      func_0x00010885c034();
LAB_1088515e0:
      func_0x00010885c8d8();
      iVar12 = (int)puVar11;
    } while (iVar12 == 0);
    func_0x000107c27ae4(&stack0xffffffffffffff90);
    func_0x00010885c30c();
    func_0x00010885bf58();
    func_0x00010885bf08();
    func_0x00010885c2dc();
    uVar6 = iVar12 == 3;
    if ((bool)uVar6) {
      lVar14 = puVar7[0x1b];
      func_0x00010885bd20();
      puVar11 = *(undefined8 **)(lVar14 + 0xc0);
      func_0x00010885bff4();
      FUN_10884fa1c();
      func_0x00010885bec0();
      ___cxa_end_catch();
    }
    else {
      uVar6 = iVar12 == 2;
      if ((bool)uVar6) {
        lVar14 = puVar7[0x1b];
        func_0x00010885bd20();
        func_0x00010885bba4(*(undefined8 *)(lVar14 + 0xc0),0x271);
        ___cxa_rethrow();
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1088516f4);
        (*pcVar5)();
      }
      func_0x00010885bd20();
      func_0x00010885bc00();
      ___cxa_end_catch();
    }
  }
  return;
}



/* Entry: 108851798; end: 1088519f7;  */

void FUN_108851798(long param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  long *plVar3;
  uint extraout_w8;
  uint extraout_w8_00;
  long extraout_x8;
  long extraout_x8_00;
  long *extraout_x8_01;
  long *plVar4;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long *extraout_x8_05;
  long *extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  int extraout_w10;
  int extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  int extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar5;
  uint extraout_w11_01;
  uint extraout_w11_02;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar6;
  long lVar7;
  
  func_0x00010885c9a8();
  func_0x00010885c64c();
  func_0x00010885bf00();
  func_0x00010885c740(FUN_108859364);
  if (extraout_x8_00 != 0) {
    do {
      func_0x00010885b868();
    } while (extraout_w10 != 0);
  }
  func_0x000107c295fc(param_1 + 0x10);
  func_0x000107c295e8(extraout_x8,param_1 + 0x10);
  plVar3 = (long *)(unaff_x21 + 0x38);
  FUN_108856c58(param_1 + 0x30);
  func_0x00010885c728(*(undefined8 *)(param_1 + 0x30));
  do {
    func_0x00010885b868();
  } while (extraout_w10_00 != 0);
  func_0x00010885bc30(*(undefined8 *)(param_1 + 0x28));
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x40) = 0;
    func_0x00010885bad4();
    lVar7 = *plVar3;
    if (lVar7 == 0) {
      func_0x000107c3a5c0();
      lVar7 = *plVar3;
    }
    func_0x00010885c07c();
    plVar4 = extraout_x8_01;
    do {
      if (*plVar4 == 0) {
        func_0x00010885b89c();
        plVar4 = extraout_x8_03;
        uVar1 = extraout_w10_02;
        uVar5 = extraout_w11_00;
      }
      else {
        func_0x00010885bc8c();
        plVar4 = extraout_x8_02;
        uVar1 = extraout_w10_01;
        uVar5 = extraout_w11;
      }
      if ((uVar5 & 1) != 0) {
        func_0x00010885b928();
        if ((bool)in_ZR) {
          func_0x00010885b88c();
          func_0x00010885b900();
          func_0x00010885b7f4();
          *(long **)(extraout_x8 + 0x90) = plVar3;
        }
        func_0x00010885b9a8();
        *(long *)(extraout_x8_07 + 0x20) = lVar7;
        lVar7 = extraout_x8;
        goto LAB_108851944;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x00010885c5a0();
  lVar7 = *plVar3;
  func_0x00010885bc08();
  func_0x00010885bc98();
  if (lVar7 == 0) {
    func_0x00010885c210();
    func_0x00010885c064();
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_();
    func_0x00010885c7a4();
    func_0x00010885bdf4();
    ___cxa_throw(plVar3);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x108851984);
    (*pcVar2)();
  }
  func_0x00010885c728(*unaff_x20);
  do {
    func_0x00010885b868();
  } while (extraout_w10_03 != 0);
  func_0x00010885bc30(*(undefined8 *)(param_1 + 0x28));
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    func_0x00010885c058();
    func_0x00010885bad4();
    lVar6 = *plVar3;
    if (lVar6 == 0) {
      func_0x000107c3a5c0();
      lVar6 = *plVar3;
    }
    func_0x00010885c07c();
    plVar3 = extraout_x8_04;
    do {
      if (*plVar3 == 0) {
        func_0x00010885b89c();
        plVar3 = extraout_x8_06;
        uVar1 = extraout_w10_05;
        uVar5 = extraout_w11_02;
      }
      else {
        func_0x00010885bc8c();
        plVar3 = extraout_x8_05;
        uVar1 = extraout_w10_04;
        uVar5 = extraout_w11_01;
      }
      if ((uVar5 & 1) != 0) {
        func_0x00010885b928();
        if ((bool)in_ZR) {
          func_0x00010885b88c();
          func_0x00010885b700();
          func_0x00010885b720();
          func_0x00010885bab4();
        }
        func_0x00010885b9a8();
        *(long *)(extraout_x8_08 + 0x20) = lVar6;
LAB_108851944:
        func_0x00010885b8ac(*(undefined8 *)(lVar7 + 0x90));
        func_0x00010885c468();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  lVar7 = param_1 + 0x28;
  func_0x000107c28a1c(lVar7);
  func_0x000107c29748(param_1 + 0x10,lVar7);
  func_0x00010885bc08();
  func_0x00010885bbf0();
  func_0x00010885bd8c();
  func_0x00010885bc18();
  return;
}



/* Entry: 1088519f8; end: 108851b47;  */

void FUN_1088519f8(long *param_1)

{
  uint uVar1;
  undefined1 uVar2;
  long *plVar3;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long lVar4;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar5;
  long unaff_x20;
  
  func_0x00010885be5c();
  func_0x00010885bf00();
  *param_1 = (long)FUN_1088579ac;
  param_1[1] = (long)FUN_108857a34;
  param_1[6] = unaff_x20;
  plVar3 = param_1;
  func_0x00010885be08();
  func_0x00010885b948();
  uVar2 = *(long *)(unaff_x20 + 0x168) == *(long *)(unaff_x20 + 0x170);
  if (!(bool)uVar2) {
    func_0x00010885c1ec();
    FUN_10884f668();
    func_0x00010885b9c8();
    do {
      func_0x00010885b868();
    } while (extraout_w10 != 0);
    func_0x00010885b998();
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)((long)param_1 + 0x44) = 0;
      func_0x00010885b6dc();
      if (*plVar3 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x00010885bcd8();
      plVar3 = extraout_x8;
      do {
        if (*plVar3 == 0) {
          func_0x00010885b89c();
          plVar3 = extraout_x8_01;
          uVar1 = extraout_w10_01;
          uVar5 = extraout_w11_00;
        }
        else {
          func_0x00010885bc8c();
          plVar3 = extraout_x8_00;
          uVar1 = extraout_w10_00;
          uVar5 = extraout_w11;
        }
        if ((uVar5 & 1) != 0) {
          func_0x00010885b774();
          if ((bool)uVar2) {
            func_0x00010885b88c();
            func_0x00010885b700();
            func_0x00010885b6a4();
          }
          func_0x00010885b678();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
    plVar3 = param_1 + 4;
    FUN_10885318c();
    lVar4 = *plVar3;
    *(int *)(param_1 + 8) = (int)plVar3[1];
    param_1[7] = lVar4;
    func_0x00010885bc10();
    func_0x00010885bc08();
    if (((char)param_1[8] == '\x01') &&
       (*(long *)(param_1[6] + 0x168) != *(long *)(param_1[6] + 0x170))) {
      func_0x00010885c8e0();
    }
  }
  func_0x00010885bc28();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108851b48; end: 108851df3;  */

void FUN_108851b48(long *param_1,long *param_2)

{
  uint uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint extraout_w8;
  long lVar5;
  long *extraout_x8;
  long *plVar6;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long extraout_x8_02;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar7;
  long *plVar8;
  long lVar9;
  int in_stack_00000008;
  char in_stack_00000018;
  
  func_0x00010885c9a8();
  puVar3 = (undefined8 *)0x78;
  __Znwm();
  *puVar3 = FUN_1088590d0;
  puVar3[1] = FUN_10885919c;
  lVar5 = *param_2;
  plVar8 = puVar3 + 4;
  puVar3[5] = param_2[1];
  *plVar8 = lVar5;
  puVar3[0xc] = param_1;
  puVar3[6] = param_2[2];
  puVar4 = puVar3;
  func_0x00010885ca8c();
  func_0x00010885c010();
  func_0x00010885c7f0();
  puVar3[7] = 0;
  func_0x000107c28258();
  puVar3[8] = puVar4;
  func_0x00010885ca68();
  if (puVar3[5] - *plVar8 == 0x10) {
    FUN_1088439b0(&stack0x00000008,plVar8);
    func_0x000107c27b9c(param_1 + 0x29,&stack0x00000008);
    func_0x00010885beec();
  }
  else {
    func_0x000107c27fa8(param_1 + 0x29);
  }
  lVar5 = param_1[0x28];
  puVar3[0xd] = lVar5;
  param_1[0x28] = lVar5 + 1;
  FUN_10884f854(param_1);
  FUN_10884f4ec(&stack0x00000008,param_1);
  lVar5 = (long)in_stack_00000008;
  uVar2 = in_stack_00000018 == '\0';
  if ((bool)uVar2) {
    lVar5 = 0;
  }
  (**(code **)(*(long *)param_1[0x1a] + 0x10))((long *)param_1[0x1a],lVar5,param_1 + 0x29);
  FUN_10884ed44(puVar3 + 0xb);
  func_0x00010885bd40();
  do {
    func_0x00010885b868();
  } while (extraout_w10 != 0);
  func_0x00010885bc30(puVar3[10]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar3 + 0xe) = 0;
    lVar5 = puVar3[10];
    func_0x00010885b6f0();
    lVar9 = *param_1;
    if (lVar9 == 0) {
      func_0x000107c3a5c0();
      lVar9 = *param_1;
    }
    func_0x00010885c07c();
    plVar6 = extraout_x8;
    do {
      if (*plVar6 == 0) {
        func_0x00010885b89c();
        plVar6 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar7 = extraout_w11_00;
      }
      else {
        func_0x00010885bc8c();
        plVar6 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar7 = extraout_w11;
      }
      if ((uVar7 & 1) != 0) {
        func_0x00010885b928();
        if ((bool)uVar2) {
          func_0x00010885b88c();
          func_0x00010885b900();
          func_0x00010885b7f4();
          *(long **)(lVar5 + 0x90) = param_1;
        }
        func_0x00010885b9a8();
        *(long *)(extraout_x8_02 + 0x20) = lVar9;
        func_0x00010885b8ac(*(undefined8 *)(lVar5 + 0x90));
        func_0x00010885c468();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x00010885c0f4();
  func_0x00010885bcc4();
  func_0x00010885bd08();
  FUN_108851df4(puVar3[0xc],puVar3[0xd] + 1);
  func_0x00010885b964(*(undefined8 *)(puVar3[0xc] + 0xc0),0x272);
  func_0x00010885bd84();
  func_0x00010885bbf0();
  func_0x000107c27914(plVar8);
  func_0x00010885bc18();
  return;
}



/* Entry: 108851df4; end: 108851ecb;  */

long * FUN_108851df4(long param_1,long param_2)

{
  long *plVar1;
  undefined1 auStack_208 [464];
  byte bStack_38;
  
  if (param_2 == *(long *)(param_1 + 0x140)) {
    plVar1 = *(long **)(param_1 + 0x90);
    func_0x00010885c7c0(*(undefined8 *)(*plVar1 + 200));
    if (((ulong)plVar1 & 1) == 0) {
      func_0x00010885c000(auStack_208,*(undefined8 *)(param_1 + 0xb0),param_1 + 0x28);
      if ((bStack_38 & 1) == 0) {
        plVar1 = (long *)0x0;
      }
      else {
        (**(code **)(**(long **)(param_1 + 0x90) + 0x40))(*(long **)(param_1 + 0x90),auStack_208);
        plVar1 = *(long **)(param_1 + 0x90);
        func_0x00010885c7c0(*(undefined8 *)(*plVar1 + 200));
      }
      func_0x00010885c274();
    }
    else {
      plVar1 = (long *)0x1;
    }
  }
  else {
    plVar1 = (long *)0x0;
  }
  return plVar1;
}



/* Entry: 108851ecc; end: 1088523ff;  */

void FUN_108851ecc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  code *pcVar4;
  undefined1 in_ZR;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  undefined8 *puVar10;
  uint extraout_w8;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  long *plVar11;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  int extraout_w11;
  int extraout_w11_00;
  uint extraout_w11_01;
  uint extraout_w11_02;
  uint uVar12;
  undefined8 *puVar13;
  ulong unaff_x22;
  long lVar14;
  undefined8 uVar15;
  long *unaff_x26;
  
  func_0x00010885bf70();
  func_0x00010885ba64();
  puVar5 = (undefined8 *)0xf8;
  __Znwm();
  *puVar5 = FUN_108858ac0;
  puVar5[1] = FUN_108858c48;
  puVar5[0x1d] = unaff_x22;
  puVar10 = puVar5;
  func_0x00010885c010();
  func_0x00010885be84();
  puVar5[0xb] = 0;
  *(undefined1 *)(puVar5 + 0xc) = 0;
  puVar5[10] = 0;
  func_0x000107c28258();
  puVar13 = puVar5 + 4;
  *puVar13 = FUN_108856d00;
  puVar5[0xb] = puVar10;
  func_0x00010885c628();
  lVar14 = *(long *)(unaff_x22 + 0x140) + 1;
  *(long *)(unaff_x22 + 0x140) = lVar14;
  puVar5[5] = &PTR_FUN_110a7c4d8;
  puVar5[6] = unaff_x22;
  puVar5[7] = lVar14;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (puVar5 + 0xd,unaff_x22 + 0x148);
  func_0x000107c27fa8(unaff_x22 + 0x148);
  (**(code **)(**(long **)(unaff_x22 + 0xd0) + 0x18))(*(long **)(unaff_x22 + 0xd0),puVar5 + 0xd);
  if ((param_3 & 1) == 0) {
    puVar10 = (undefined8 *)0x273;
    func_0x00010885b964(*(undefined8 *)(unaff_x22 + 0xc0));
    func_0x00010885bd84();
  }
  else {
    func_0x00010885c7e8(puVar5 + 0x10,&stack0xffffffffffffff68);
    FUN_108861dec(puVar5 + 0x13,*(undefined8 *)(unaff_x22 + 0xb0),unaff_x22 + 0x28,puVar5 + 0x10,0);
    in_ZR = puVar5[0x13] == puVar5[0x14];
    if ((bool)in_ZR) {
      puVar10 = (undefined8 *)0x273;
      func_0x00010885b964(*(undefined8 *)(unaff_x22 + 0xc0));
      func_0x00010885bd84();
    }
    else {
      uVar15 = *(undefined8 *)(puVar5[0x13] + 0x18);
      uVar6 = unaff_x22;
      FUN_108851df4();
      if ((uVar6 & 1) == 0) {
        puVar10 = (undefined8 *)0x273;
        func_0x00010885ba34(*(undefined8 *)(unaff_x22 + 0xc0));
        func_0x00010885ba98();
      }
      else {
        func_0x000107c289cc(puVar5 + 0x16);
        if (puVar5[0x17] != 0) {
          do {
            func_0x00010885c6bc();
          } while (extraout_w11 != 0);
          if (puVar5[0x17] != 0) {
            do {
              func_0x00010885c6bc();
            } while (extraout_w11_00 != 0);
          }
        }
        lVar7 = 0x80;
        __Znwm();
        lVar14 = lVar7;
        func_0x00010885c48c();
        func_0x00010885c3b0(FUN_108856de8);
        FUN_108856b50(lVar14 + 0x18);
        func_0x00010885c43c();
        func_0x00010885c42c();
        puVar5[0x18] = lVar14 + 0x18;
        puVar5[0x19] = lVar7;
        func_0x00010885c098();
        func_0x00010885c17c();
        plVar8 = *(long **)(unaff_x22 + 0x40);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(unaff_x26,0x10);
          if (bVar2) {
            *unaff_x26 = *unaff_x26 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        (**(code **)(*plVar8 + 0x68))(plVar8,unaff_x22 + 0x28,uVar15,&stack0xffffffffffffff68);
        func_0x00010885c4e8();
        puVar5[0x1c] = puVar5[0x16];
        if (puVar5[0x16] != 0) {
          do {
            func_0x00010885b868();
          } while (extraout_w10 != 0);
        }
        plVar8 = (long *)(unaff_x22 + 0xe0);
        puVar10 = puVar5 + 0x1c;
        func_0x000107c2883c(puVar5 + 0x1b);
        puVar5[0x1a] = puVar5[0x1b];
        do {
          func_0x00010885b868();
        } while (extraout_w10_00 != 0);
        func_0x00010885bc30(puVar5[0x1a]);
        if ((extraout_w8 >> 1 & 1) == 0) {
          *(undefined1 *)(puVar5 + 0x1e) = 0;
          lVar14 = puVar5[0x1a];
          func_0x00010885b6f0();
          lVar7 = *plVar8;
          if (lVar7 == 0) {
            func_0x000107c3a5c0();
            lVar7 = *plVar8;
          }
          func_0x00010885c07c();
          plVar11 = extraout_x8_00;
          do {
            if (*plVar11 == 0) {
              func_0x00010885b89c();
              plVar11 = extraout_x8_02;
              uVar3 = extraout_w10_02;
              uVar12 = extraout_w11_02;
            }
            else {
              func_0x00010885bc8c();
              plVar11 = extraout_x8_01;
              uVar3 = extraout_w10_01;
              uVar12 = extraout_w11_01;
            }
            if ((uVar12 & 1) != 0) {
              func_0x00010885b928();
              if ((bool)in_ZR) {
                func_0x00010885b88c();
                func_0x00010885b900();
                func_0x00010885b7f4();
                *(long **)(lVar14 + 0x90) = plVar8;
              }
              func_0x00010885b9a8();
              *(long *)(extraout_x8_03 + 0x20) = lVar7;
              func_0x00010885b8ac(*(undefined8 *)(lVar14 + 0x90));
              func_0x00010885c468();
              goto LAB_1088521d8;
            }
          } while ((uVar3 >> 1 & 1) == 0);
        }
        func_0x000107c28834(puVar5 + 0x1a);
        lVar14 = puVar5[0x1d];
        func_0x00010885bfb4();
        func_0x00010885c27c();
        func_0x00010885c350();
        puVar10 = (undefined8 *)0x273;
        func_0x00010885b964(*(undefined8 *)(lVar14 + 0xc0));
        func_0x00010885bd84();
        func_0x00010885c324();
        func_0x00010885c304();
      }
    }
    func_0x00010885bf08();
    func_0x00010885c2e4();
  }
  func_0x00010885c380();
  do {
    func_0x000107c281f0(puVar13);
    while( true ) {
      func_0x00010885bbf0();
      func_0x00010885bc18();
LAB_1088521d8:
      func_0x00010885b878(extraout_x8);
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      if ((int)puVar10 != 0) goto LAB_108852230;
      do {
        func_0x00010885c598();
LAB_108852230:
        func_0x00010885c8a0();
        iVar9 = (int)puVar10;
      } while (iVar9 == 0);
      func_0x00010885c324();
      func_0x00010885c304();
      func_0x00010885bf08();
      func_0x00010885c2e4();
      func_0x00010885c380();
      in_ZR = iVar9 == 3;
      if ((bool)in_ZR) break;
      in_ZR = iVar9 == 2;
      if ((bool)in_ZR) {
        lVar14 = puVar5[0x1d];
        func_0x00010885bd18();
        func_0x00010885ba34(*(undefined8 *)(lVar14 + 0xc0),0x273);
        ___cxa_rethrow();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1088523c0);
        (*pcVar4)();
      }
      func_0x000107c281f0(puVar13);
      func_0x00010885bd18();
      func_0x00010885bc00();
      ___cxa_end_catch();
    }
    lVar14 = puVar5[0x1d];
    func_0x00010885bd18();
    puVar10 = *(undefined8 **)(lVar14 + 0xc0);
    func_0x00010885c80c(puVar10,0x273);
    func_0x00010885bec0();
    ___cxa_end_catch();
  } while( true );
}



/* Entry: 108852400; end: 108852473;  */

void FUN_108852400(ulong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  func_0x00010885be44(param_2);
  if ((param_1 & 1) == 0) {
    func_0x00010885c860();
    func_0x00010885bf18();
    FUN_108856e88();
    func_0x000107c288ac(auStack_38);
    func_0x00010885c128();
    func_0x00010885bd9c();
  }
  return;
}



/* Entry: 108852474; end: 10885247b;  */

void FUN_108852474(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 auStack_38 [8];
  
  uVar1 = param_1 - 8;
  func_0x00010885be44(param_2);
  if ((uVar1 & 1) == 0) {
    func_0x00010885c860();
    func_0x00010885bf18();
    FUN_108856e88();
    func_0x000107c288ac(auStack_38);
    func_0x00010885c128();
    func_0x00010885bd9c();
  }
  return;
}



/* Entry: 10885247c; end: 108852667;  */

void FUN_10885247c(ulong param_1,undefined8 param_2,undefined8 param_3,long *param_4,long *param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong auStack_140 [7];
  undefined1 auStack_108 [8];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = param_1;
  func_0x00010885be44(param_2);
  if ((uVar2 & 1) == 0) {
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    func_0x000107c27acc(&uStack_e0,(param_4[1] - *param_4) / 0x5d8);
    lVar1 = param_4[1];
    for (lVar3 = *param_4; lVar3 != lVar1; lVar3 = lVar3 + 0x5d8) {
      func_0x000107c28944(&uStack_e0,lVar3 + 0x18);
    }
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27acc(&uStack_100,param_5[1] - *param_5 >> 5);
    lVar1 = param_5[1];
    for (lVar3 = *param_5; uStack_a8 = uStack_d0, uStack_b0 = uStack_d8, uStack_b8 = uStack_e0,
        uStack_90 = uStack_f0, uStack_98 = uStack_f8, uStack_a0 = uStack_100, lVar3 != lVar1;
        lVar3 = lVar3 + 0x20) {
      func_0x000107c28944(&uStack_100,lVar3 + 0x18);
    }
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_100 = 0;
    uVar5 = *(undefined8 *)(param_1 + 0xf0);
    auStack_140[1] = 0;
    auStack_140[2] = 0;
    auStack_140[3] = 0;
    auStack_140[4] = 0;
    auStack_140[5] = 0;
    auStack_140[6] = 0;
    auStack_140[0] = param_1;
    uStack_c0 = param_1;
    func_0x000107c288a8(&uStack_88,param_1 + 0xe0);
    uStack_50 = uStack_90;
    uStack_58 = uStack_98;
    uStack_60 = uStack_a0;
    puVar4 = (undefined8 *)((ulong)&uStack_c0 | 8);
    uStack_78 = uStack_b8;
    uStack_80 = uStack_c0;
    uStack_68 = uStack_a8;
    uStack_70 = uStack_b0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a0 = 0;
    uStack_48 = uStack_88;
    uStack_88 = 0;
    FUN_108857124(auStack_108,&uStack_80,uVar5);
    FUN_1088570fc(&uStack_80);
    FUN_1088570fc(&uStack_c0);
    FUN_108852668(auStack_140);
    func_0x000107c27f9c(auStack_108);
    func_0x000107c27ae4(&uStack_100);
    func_0x000107c27ae4(&uStack_e0);
  }
  return;
}



/* Entry: 108852668; end: 10885268b;  */

void FUN_108852668(void)

{
  func_0x00010885bde8();
  func_0x000107c27ae4();
  func_0x00010885c79c();
  return;
}



/* Entry: 10885268c; end: 1088526a3;  */

void FUN_10885268c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4,long *param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong auStack_140 [7];
  undefined1 auStack_108 [8];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar3 = param_1 - 8;
  uVar2 = uVar3;
  func_0x00010885be44(param_2);
  if ((uVar2 & 1) == 0) {
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    func_0x000107c27acc(&uStack_e0,(param_4[1] - *param_4) / 0x5d8);
    lVar1 = param_4[1];
    for (lVar4 = *param_4; lVar4 != lVar1; lVar4 = lVar4 + 0x5d8) {
      func_0x000107c28944(&uStack_e0,lVar4 + 0x18);
    }
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27acc(&uStack_100,param_5[1] - *param_5 >> 5);
    lVar1 = param_5[1];
    for (lVar4 = *param_5; uStack_a8 = uStack_d0, uStack_b0 = uStack_d8, uStack_b8 = uStack_e0,
        uStack_90 = uStack_f0, uStack_98 = uStack_f8, uStack_a0 = uStack_100, lVar4 != lVar1;
        lVar4 = lVar4 + 0x20) {
      func_0x000107c28944(&uStack_100,lVar4 + 0x18);
    }
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_100 = 0;
    uVar6 = *(undefined8 *)(param_1 + 0xe8);
    auStack_140[1] = 0;
    auStack_140[2] = 0;
    auStack_140[3] = 0;
    auStack_140[4] = 0;
    auStack_140[5] = 0;
    auStack_140[6] = 0;
    auStack_140[0] = uVar3;
    uStack_c0 = uVar3;
    func_0x000107c288a8(&uStack_88,param_1 + 0xd8);
    uStack_50 = uStack_90;
    uStack_58 = uStack_98;
    uStack_60 = uStack_a0;
    puVar5 = (undefined8 *)((ulong)&uStack_c0 | 8);
    uStack_78 = uStack_b8;
    uStack_80 = uStack_c0;
    uStack_68 = uStack_a8;
    uStack_70 = uStack_b0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a0 = 0;
    uStack_48 = uStack_88;
    uStack_88 = 0;
    FUN_108857124(auStack_108,&uStack_80,uVar6);
    FUN_1088570fc(&uStack_80);
    FUN_1088570fc(&uStack_c0);
    FUN_108852668(auStack_140);
    func_0x000107c27f9c(auStack_108);
    func_0x000107c27ae4(&uStack_100);
    func_0x000107c27ae4(&uStack_e0);
  }
  return;
}



/* Entry: 1088526a4; end: 108852717;  */

void FUN_1088526a4(ulong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  func_0x00010885be44(param_2);
  if ((param_1 & 1) == 0) {
    func_0x00010885c860();
    func_0x00010885bf18();
    FUN_108857448();
    func_0x000107c288ac(auStack_38);
    func_0x00010885c128();
    func_0x00010885bd9c();
  }
  return;
}



/* Entry: 108852718; end: 108852727;  */

void FUN_108852718(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 auStack_38 [8];
  
  uVar1 = param_1 - 8;
  func_0x00010885be44(param_2);
  if ((uVar1 & 1) == 0) {
    func_0x00010885c860();
    func_0x00010885bf18();
    FUN_108857448();
    func_0x000107c288ac(auStack_38);
    func_0x00010885c128();
    func_0x00010885bd9c();
  }
  return;
}



/* Entry: 108852728; end: 10885286f;  */

void FUN_108852728(ulong param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar2 = param_1;
  func_0x00010885be44(param_2);
  if ((uVar2 & 1) == 0) {
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    func_0x000107c27acc(&uStack_b0,(param_3[1] - *param_3) / 0x5d8);
    lVar1 = param_3[1];
    for (lVar3 = *param_3; uStack_78 = uStack_a0, uStack_80 = uStack_a8, uStack_88 = uStack_b0,
        lVar3 != lVar1; lVar3 = lVar3 + 0x5d8) {
      func_0x000107c28944(&uStack_b0,lVar3 + 0x18);
    }
    puVar4 = (undefined8 *)((ulong)&uStack_90 | 8);
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b0 = 0;
    uVar5 = *(undefined8 *)(param_1 + 0xf0);
    uStack_90 = param_1;
    func_0x000107c288a8(auStack_70,param_1 + 0xe0);
    uStack_58 = uStack_88;
    uStack_60 = uStack_90;
    uStack_48 = uStack_78;
    uStack_50 = uStack_80;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    uStack_40 = auStack_70[0];
    auStack_70[0] = 0;
    FUN_108857668(auStack_b8,&uStack_60,uVar5);
    FUN_108857644(&uStack_60);
    FUN_108857644(&uStack_90);
    func_0x00010885c4f8();
    func_0x00010885c378();
    func_0x000107c27ae4(&uStack_b0);
  }
  return;
}



/* Entry: 108852870; end: 108852877;  */

void FUN_108852870(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar2 = param_1 - 8U;
  func_0x00010885be44(param_2);
  if ((uVar2 & 1) == 0) {
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    func_0x000107c27acc(&uStack_b0,(param_3[1] - *param_3) / 0x5d8);
    lVar1 = param_3[1];
    for (lVar3 = *param_3; uStack_78 = uStack_a0, uStack_80 = uStack_a8, uStack_88 = uStack_b0,
        lVar3 != lVar1; lVar3 = lVar3 + 0x5d8) {
      func_0x000107c28944(&uStack_b0,lVar3 + 0x18);
    }
    puVar4 = (undefined8 *)((ulong)&uStack_90 | 8);
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b0 = 0;
    uVar5 = *(undefined8 *)(param_1 + 0xe8);
    uStack_90 = param_1 - 8U;
    func_0x000107c288a8(auStack_70,param_1 + 0xd8);
    uStack_58 = uStack_88;
    uStack_60 = uStack_90;
    uStack_48 = uStack_78;
    uStack_50 = uStack_80;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    uStack_40 = auStack_70[0];
    auStack_70[0] = 0;
    FUN_108857668(auStack_b8,&uStack_60,uVar5);
    FUN_108857644(&uStack_60);
    FUN_108857644(&uStack_90);
    func_0x00010885c4f8();
    func_0x00010885c378();
    func_0x000107c27ae4(&uStack_b0);
  }
  return;
}



/* Entry: 108852878; end: 108852c3f;  */

void FUN_108852878(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  long *extraout_x8;
  long *plVar6;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long extraout_x8_02;
  undefined1 extraout_w9;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined1 auStack_78 [40];
  
  puVar4 = (undefined8 *)0x238;
  __Znwm();
  *puVar4 = FUN_108857f54;
  puVar4[1] = FUN_108857ffc;
  uVar11 = *param_3;
  puVar4[0x40] = param_3[1];
  puVar4[0x3f] = uVar11;
  puVar4[0x41] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  uVar11 = *param_4;
  puVar4[0x43] = param_4[1];
  puVar4[0x42] = uVar11;
  puVar4[0x44] = param_4[2];
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  func_0x00010885be08();
  func_0x000107c287c4(param_1,puVar4 + 2);
  if (puVar4[0x3f] != puVar4[0x40]) {
    func_0x00010885c000(puVar4 + 4,param_2[0x16],param_2 + 5);
    if ((*(byte *)(puVar4 + 0x3e) & 1) != 0) {
      FUN_108857948(auStack_78,puVar4[0x3f],puVar4[0x40]);
      FUN_108861b60(&uStack_90,param_2[0x16],param_2 + 5,auStack_78,1);
      uStack_a8 = 0;
      uStack_a0 = 0;
      uStack_98 = 0;
      lStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      FUN_108852c40(param_2[0x16],puVar4 + 4,&uStack_90,&uStack_a8,&lStack_c0);
      if (uStack_a8 != uStack_a0) {
        lVar8 = 0;
        for (uVar10 = 0; uVar10 < (ulong)((long)(uStack_a0 - uStack_a8) / 0x48); uVar10 = uVar10 + 1
            ) {
          uVar5 = uStack_a8;
          FUN_10867b1ac(param_2 + 0x30);
          if ((uVar5 & 1) != 0) {
            (**(code **)(*(long *)param_2[0x1a] + 0x20))
                      ((long *)param_2[0x1a],lStack_c0 + lVar8,lStack_c0 + lVar8 + 0x18,
                       param_2 + 0x29);
          }
          lVar8 = lVar8 + 0x30;
        }
        FUN_10884d8e8(param_2 + 0x2c,&uStack_a8);
      }
      FUN_108853878(&lStack_c0);
      func_0x0001052c2794(&uStack_a8);
      func_0x00010885c4b0();
      func_0x00010885c4f0();
    }
    func_0x00010885bd7c();
  }
  uVar2 = (ulong)puVar4[0x43] <= (ulong)puVar4[0x42];
  uVar3 = puVar4[0x42] == puVar4[0x43];
  if (!(bool)uVar3) {
    FUN_108857948(auStack_78);
    FUN_108861b60(&uStack_90,param_2[0x16],param_2 + 5,auStack_78,0);
    uVar10 = uStack_90;
    while( true ) {
      uVar2 = uStack_88 <= uVar10;
      uVar3 = uVar10 == uStack_88;
      if ((bool)uVar3) break;
      if (*(char *)(uVar10 + 0x28) == '\x01') {
        FUN_10884d968(param_2 + 0x2c,*(undefined8 *)(uVar10 + 0x20));
      }
      uVar10 = uVar10 + 0x1a8;
    }
    func_0x00010885c4b0();
    func_0x00010885c4f0();
  }
  FUN_1088519f8(puVar4 + 0x45);
  puVar4[4] = puVar4[0x45];
  do {
    func_0x00010885b868();
  } while (extraout_w10 != 0);
  func_0x00010885b998();
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar4 + 0x46) = 0;
    lVar8 = puVar4[4];
    func_0x00010885b6f0();
    lVar9 = *param_2;
    if (lVar9 == 0) {
      func_0x000107c3a5c0();
      lVar9 = *param_2;
    }
    func_0x00010885c3f0();
    plVar6 = extraout_x8;
    do {
      if (*plVar6 == 0) {
        func_0x00010885b89c();
        plVar6 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar7 = extraout_w11_00;
      }
      else {
        func_0x00010885bc8c();
        plVar6 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar7 = extraout_w11;
      }
      if ((uVar7 & 1) != 0) {
        func_0x00010885b9b8();
        if ((bool)uVar3) {
          func_0x00010885b88c();
          uVar3 = extraout_w8;
          if ((bool)uVar2) {
            uVar3 = extraout_w9;
          }
          func_0x00010885c528();
          *(undefined1 *)param_2 = uVar3;
          func_0x00010885b810(0);
          *(long **)(lVar8 + 0x90) = param_2;
        }
        func_0x00010885b9a8();
        *(long *)(extraout_x8_02 + 0x20) = lVar9;
        func_0x00010885b8ac(*(undefined8 *)(lVar8 + 0x90));
        *(undefined8 *)(lVar8 + 0x10) = 0;
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x00010885bf60();
  func_0x00010885bc10();
  func_0x00010885c898();
  func_0x00010885bc28();
  func_0x00010885bbf0();
  func_0x00010885c484();
  func_0x00010885c388();
  func_0x00010885bc18();
  return;
}



/* Entry: 108852c40; end: 108852dcf;  */

void FUN_108852c40(undefined8 param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  code *pcVar7;
  long *plVar8;
  uint extraout_w8;
  uint extraout_w8_00;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  undefined8 *extraout_x8_05;
  long extraout_x8_06;
  undefined8 *puVar9;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  int extraout_w10_02;
  uint extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar10;
  uint extraout_w11_01;
  uint extraout_w11_02;
  long lVar11;
  long lVar12;
  long *plStack_f0;
  long **pplStack_e8;
  undefined1 uStack_d9;
  long alStack_d8 [7];
  undefined1 *puStack_a0;
  code *pcStack_98;
  long *plStack_88;
  undefined1 uStack_79;
  code *pcStack_78;
  undefined **ppuStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  plVar6 = param_2;
  plVar4 = param_4;
  plVar8 = param_5;
  func_0x00010885ba64();
  plStack_88 = plVar8;
  uStack_48 = extraout_x8;
  func_0x00010885c44c(plVar4[1] - *plVar4);
  func_0x00010885c9bc();
  if (!(bool)in_CY || (bool)in_ZR) {
LAB_108852cc4:
    if (param_5 != (long *)0x0) {
      func_0x00010885c44c(param_5[1] - *param_5);
      func_0x00010885c9bc();
      if ((bool)in_CY && !(bool)in_ZR) {
        in_ZR = plVar6 == (long *)0x555555555555556;
        if ((long *)0x555555555555555 < plVar6) goto LAB_108852db0;
        func_0x0001088534ac(alStack_d8);
        func_0x000108853408(param_5,alStack_d8);
        FUN_108853518(alStack_d8);
      }
    }
    FUN_10884f590(alStack_d8,param_1,param_2);
    in_ZR = param_5 == (long *)0x0;
    uStack_79 = !(bool)in_ZR;
    pplStack_e8 = &plStack_88;
    pcStack_78 = FUN_108853560;
    ppuStack_70 = &PTR_FUN_110a7c108;
    puStack_60 = &uStack_d9;
    puStack_58 = &uStack_79;
    plStack_f0 = param_4;
    plStack_68 = alStack_d8;
    puStack_50 = (undefined1 *)&plStack_f0;
    FUN_1086adbb4(alStack_d8,param_3,&pcStack_78);
    func_0x00010885c63c();
    FUN_10884f640(alStack_d8);
    func_0x00010885b878(uStack_48);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    plVar6 = param_3;
  }
  else {
    in_CY = (long *)0x38e38e38e38e38e < plVar6;
    in_ZR = plVar6 == (long *)0x38e38e38e38e38f;
    if (!(bool)in_CY) {
      FUN_108853360(alStack_d8);
      plVar6 = alStack_d8;
      FUN_108853290(param_4);
      func_0x0001088533ac(alStack_d8);
      goto LAB_108852cc4;
    }
  }
  FUN_10882b8a0();
LAB_108852db0:
  FUN_1088533f4();
  func_0x00010885c63c();
  plVar4 = alStack_d8;
  FUN_10884f640();
  func_0x00010885bcf8();
  pcVar7 = FUN_108852dd0;
  func_0x00010885cab0();
  puVar5 = (undefined8 *)0x280;
  puStack_a0 = &stack0xfffffffffffffff0;
  pcStack_98 = pcVar7;
  __Znwm();
  *puVar5 = FUN_108857a58;
  puVar5[1] = FUN_108857b50;
  lVar11 = *plVar6;
  puVar5[0x45] = plVar6[1];
  puVar5[0x44] = lVar11;
  puVar5[0x46] = plVar6[2];
  *plVar6 = 0;
  plVar6[1] = 0;
  plVar6[2] = 0;
  func_0x00010885be08();
  func_0x00010885b948();
  func_0x00010885c000(puVar5 + 4,plVar4[0x16],plVar4 + 5);
  puVar9 = puVar5 + 0x47;
  if ((*(byte *)(puVar5 + 0x3e) & 1) == 0) {
    FUN_1088519f8(puVar9);
    puVar5[0x3f] = *puVar9;
    do {
      func_0x00010885b868();
    } while (extraout_w10 != 0);
    func_0x00010885bc30(puVar5[0x3f]);
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar5 + 0x4f) = 0;
      func_0x00010885c900();
      if (*plVar4 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x00010885c3f0();
      plVar6 = extraout_x8_00;
      do {
        if (*plVar6 == 0) {
          func_0x00010885b89c();
          plVar6 = extraout_x8_02;
          uVar2 = extraout_w10_01;
          uVar10 = extraout_w11_00;
        }
        else {
          func_0x00010885bc8c();
          plVar6 = extraout_x8_01;
          uVar2 = extraout_w10_00;
          uVar10 = extraout_w11;
        }
        if ((uVar10 & 1) != 0) {
          func_0x00010885b9b8();
          if ((bool)in_ZR) {
            func_0x00010885b88c();
            func_0x00010885b700();
            func_0x00010885b720();
            func_0x00010885bc5c();
          }
          func_0x00010885b7cc();
          puVar9 = extraout_x8_05;
          goto LAB_1088530b0;
        }
      } while ((uVar2 >> 1 & 1) == 0);
    }
    func_0x000107c28834(puVar5 + 0x3f);
    func_0x00010885c368();
    func_0x00010885bd8c();
    func_0x00010885bc28();
    func_0x00010885bd7c();
  }
  else {
    FUN_108857948(puVar5 + 0x3f,puVar5[0x44],puVar5[0x45]);
    FUN_108861b60(puVar9,plVar4[0x16],plVar4 + 5,puVar5 + 0x3f,1);
    func_0x00010885ca8c();
    FUN_108852c40(plVar4[0x16],puVar5 + 4,puVar9,puVar5 + 0x4a,0);
    puVar1 = puVar5 + 0x4d;
    lVar12 = puVar5[0x4b];
    for (lVar11 = puVar5[0x4a]; lVar11 != lVar12; lVar11 = lVar11 + 0x48) {
      FUN_10867b1ac(plVar4 + 0x30,lVar11);
    }
    lVar11 = puVar5[0x4a];
    lVar12 = puVar5[0x4b];
    uVar3 = lVar11 == lVar12;
    if (!(bool)uVar3) {
      FUN_1088538c0(lVar11,lVar12,LZCOUNT((lVar12 - lVar11) / 0x48) << 1 ^ 0x7e,1);
    }
    FUN_10884d958(plVar4 + 0x2c,puVar5 + 0x4a);
    FUN_1088519f8(puVar5 + 0x4e);
    *puVar1 = puVar5[0x4e];
    do {
      func_0x00010885b868();
    } while (extraout_w10_02 != 0);
    func_0x00010885bc30(*puVar1);
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar5 + 0x4f) = 1;
      lVar12 = puVar5[0x4d];
      func_0x00010885c900();
      lVar11 = *plVar4;
      if (lVar11 == 0) {
        func_0x000107c3a5c0();
        lVar11 = *plVar4;
      }
      plVar6 = (long *)(lVar12 + 0x10);
      do {
        if (*plVar6 == 0) {
          func_0x00010885b89c();
          plVar6 = extraout_x8_04;
          uVar2 = extraout_w10_04;
          uVar10 = extraout_w11_02;
        }
        else {
          func_0x00010885bc8c();
          plVar6 = extraout_x8_03;
          uVar2 = extraout_w10_03;
          uVar10 = extraout_w11_01;
        }
        if ((uVar10 & 1) != 0) {
          func_0x00010885b9b8();
          if ((bool)uVar3) {
            func_0x00010885b88c();
            func_0x00010885b900();
            func_0x00010885b7f4();
            *(long **)(lVar12 + 0x90) = plVar4;
          }
          func_0x00010885b9a8();
          *(long *)(extraout_x8_06 + 0x20) = lVar11;
          func_0x00010885b8ac(*(undefined8 *)(lVar12 + 0x90));
          puVar9 = (undefined8 *)(lVar12 + 0x10);
LAB_1088530b0:
          *puVar9 = 0;
          return;
        }
      } while ((uVar2 >> 1 & 1) == 0);
    }
    func_0x000107c28834(puVar1);
    func_0x000107c27f9c(puVar1);
    func_0x00010885c31c();
    func_0x00010885c5a8();
    func_0x00010867b9fc(puVar9);
    func_0x00010885c370();
    func_0x00010885bd7c();
    func_0x00010885bc28();
  }
  func_0x00010885bbf0();
  func_0x00010885c620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar5);
  return;
}



/* Entry: 108852dd0; end: 10885318b;  */

void FUN_108852dd0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined8 *puVar4;
  uint extraout_w8;
  uint extraout_w8_00;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *plVar5;
  long *extraout_x8_02;
  long *extraout_x8_03;
  undefined8 *extraout_x8_04;
  long extraout_x8_05;
  undefined8 *puVar6;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  int extraout_w10_02;
  uint extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar7;
  uint extraout_w11_01;
  uint extraout_w11_02;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  func_0x00010885cab0();
  puVar4 = (undefined8 *)0x280;
  __Znwm();
  *puVar4 = FUN_108857a58;
  puVar4[1] = FUN_108857b50;
  uVar10 = *param_2;
  puVar4[0x45] = param_2[1];
  puVar4[0x44] = uVar10;
  puVar4[0x46] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  func_0x00010885be08();
  func_0x00010885b948();
  func_0x00010885c000(puVar4 + 4,param_1[0x16],param_1 + 5);
  puVar6 = puVar4 + 0x47;
  if ((*(byte *)(puVar4 + 0x3e) & 1) == 0) {
    FUN_1088519f8(puVar6);
    puVar4[0x3f] = *puVar6;
    do {
      func_0x00010885b868();
    } while (extraout_w10 != 0);
    func_0x00010885bc30(puVar4[0x3f]);
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar4 + 0x4f) = 0;
      func_0x00010885c900();
      if (*param_1 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x00010885c3f0();
      plVar5 = extraout_x8;
      do {
        if (*plVar5 == 0) {
          func_0x00010885b89c();
          plVar5 = extraout_x8_01;
          uVar2 = extraout_w10_01;
          uVar7 = extraout_w11_00;
        }
        else {
          func_0x00010885bc8c();
          plVar5 = extraout_x8_00;
          uVar2 = extraout_w10_00;
          uVar7 = extraout_w11;
        }
        if ((uVar7 & 1) != 0) {
          func_0x00010885b9b8();
          if ((bool)in_ZR) {
            func_0x00010885b88c();
            func_0x00010885b700();
            func_0x00010885b720();
            func_0x00010885bc5c();
          }
          func_0x00010885b7cc();
          puVar6 = extraout_x8_04;
          goto LAB_1088530b0;
        }
      } while ((uVar2 >> 1 & 1) == 0);
    }
    func_0x000107c28834(puVar4 + 0x3f);
    func_0x00010885c368();
    func_0x00010885bd8c();
    func_0x00010885bc28();
    func_0x00010885bd7c();
  }
  else {
    FUN_108857948(puVar4 + 0x3f,puVar4[0x44],puVar4[0x45]);
    FUN_108861b60(puVar6,param_1[0x16],param_1 + 5,puVar4 + 0x3f,1);
    func_0x00010885ca8c();
    FUN_108852c40(param_1[0x16],puVar4 + 4,puVar6,puVar4 + 0x4a,0);
    puVar1 = puVar4 + 0x4d;
    lVar9 = puVar4[0x4b];
    for (lVar8 = puVar4[0x4a]; lVar8 != lVar9; lVar8 = lVar8 + 0x48) {
      FUN_10867b1ac(param_1 + 0x30,lVar8);
    }
    lVar8 = puVar4[0x4a];
    lVar9 = puVar4[0x4b];
    uVar3 = lVar8 == lVar9;
    if (!(bool)uVar3) {
      FUN_1088538c0(lVar8,lVar9,LZCOUNT((lVar9 - lVar8) / 0x48) << 1 ^ 0x7e,1);
    }
    FUN_10884d958(param_1 + 0x2c,puVar4 + 0x4a);
    FUN_1088519f8(puVar4 + 0x4e);
    *puVar1 = puVar4[0x4e];
    do {
      func_0x00010885b868();
    } while (extraout_w10_02 != 0);
    func_0x00010885bc30(*puVar1);
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar4 + 0x4f) = 1;
      lVar9 = puVar4[0x4d];
      func_0x00010885c900();
      lVar8 = *param_1;
      if (lVar8 == 0) {
        func_0x000107c3a5c0();
        lVar8 = *param_1;
      }
      plVar5 = (long *)(lVar9 + 0x10);
      do {
        if (*plVar5 == 0) {
          func_0x00010885b89c();
          plVar5 = extraout_x8_03;
          uVar2 = extraout_w10_04;
          uVar7 = extraout_w11_02;
        }
        else {
          func_0x00010885bc8c();
          plVar5 = extraout_x8_02;
          uVar2 = extraout_w10_03;
          uVar7 = extraout_w11_01;
        }
        if ((uVar7 & 1) != 0) {
          func_0x00010885b9b8();
          if ((bool)uVar3) {
            func_0x00010885b88c();
            func_0x00010885b900();
            func_0x00010885b7f4();
            *(long **)(lVar9 + 0x90) = param_1;
          }
          func_0x00010885b9a8();
          *(long *)(extraout_x8_05 + 0x20) = lVar8;
          func_0x00010885b8ac(*(undefined8 *)(lVar9 + 0x90));
          puVar6 = (undefined8 *)(lVar9 + 0x10);
LAB_1088530b0:
          *puVar6 = 0;
          return;
        }
      } while ((uVar2 >> 1 & 1) == 0);
    }
    func_0x000107c28834(puVar1);
    func_0x000107c27f9c(puVar1);
    func_0x00010885c31c();
    func_0x00010885c5a8();
    func_0x00010867b9fc(puVar6);
    func_0x00010885c370();
    func_0x00010885bd7c();
    func_0x00010885bc28();
  }
  func_0x00010885bbf0();
  func_0x00010885c620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar4);
  return;
}



/* Entry: 10885318c; end: 1088531c3;  */

long FUN_10885318c(void)

{
  code *pcVar1;
  long extraout_x8;
  uint extraout_w9;
  
  func_0x00010885bda4();
  if ((extraout_w9 >> 5 & 1) == 0) {
    return extraout_x8 + 0x98;
  }
  func_0x00010885be38();
  func_0x00010885c4d8();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1088531bc);
  (*pcVar1)();
}



/* Entry: 1088531c4; end: 1088531c7;  */

long FUN_1088531c4(long param_1)

{
  func_0x00010867bb84(param_1 + 0x180);
  func_0x0001088257a4(param_1 + 0x160);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x148);
  FUN_10865a95c(param_1 + 0xe0);
  FUN_1088256f0(param_1 + 0xd0);
  func_0x000107c288a4(param_1 + 0xc0);
  func_0x000107c28808(param_1 + 0xb0);
  func_0x000107c28e48(param_1 + 0xa0);
  func_0x000107c29cc8(param_1 + 0x90);
  func_0x000107c289f8(param_1 + 0x60);
  func_0x000107c29188(param_1 + 0x50);
  func_0x000107c2911c(param_1 + 0x40);
  func_0x00010882f744();
  func_0x00010882ee28();
  return param_1;
}



/* Entry: 1088531c8; end: 1088531db;  */

void FUN_1088531c8(void)

{
  FUN_108825720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088531dc; end: 1088531eb;  */

long FUN_1088531dc(long param_1)

{
  func_0x00010867bb84(param_1 + 0x178);
  func_0x0001088257a4(param_1 + 0x158);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x140);
  FUN_10865a95c(param_1 + 0xd8);
  FUN_1088256f0(param_1 + 200);
  func_0x000107c288a4(param_1 + 0xb8);
  func_0x000107c28808(param_1 + 0xa8);
  func_0x000107c28e48(param_1 + 0x98);
  func_0x000107c29cc8(param_1 + 0x88);
  func_0x000107c289f8(param_1 + 0x58);
  func_0x000107c29188(param_1 + 0x48);
  func_0x000107c2911c(param_1 + 0x38);
  func_0x00010882f744();
  func_0x00010882ee28();
  return param_1 + -8;
}



/* Entry: 1088531ec; end: 108853247;  */

undefined8 FUN_1088531ec(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c278b8(auStack_38,PTR_DAT_113268f88);
  func_0x00010885c4c4();
  func_0x000107c28824();
  func_0x00010885bed4();
  return param_2;
}



/* Entry: 108853248; end: 10885328f;  */

void FUN_108853248(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x18);
  }
  *puVar1 = &PTR_DAT_110a956e0;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 2) = 0;
  return;
}



/* Entry: 108853290; end: 10885335f;  */

void FUN_108853290(long *param_1,long param_2)

{
  long lVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x00010885c04c();
  lVar2 = *param_1;
  lVar1 = param_1[1];
  lVar4 = *(long *)(param_2 + 8) + ((lVar1 - lVar2) / -0x48) * 0x48;
  plStack_70 = param_1 + 2;
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  lStack_48 = lVar4;
  lStack_50 = lVar4;
  for (lVar3 = lVar2; lVar3 != lVar1; lVar3 = lVar3 + 0x48) {
    FUN_10884d810(lStack_48,lVar3);
    lStack_48 = lStack_48 + 0x48;
  }
  uStack_58 = 1;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0x48) {
    func_0x0001052c283c(lVar2);
  }
  FUN_10882bb68(&plStack_70);
  *(long *)(unaff_x19 + 8) = lVar4;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010885bfc4();
  return;
}



/* Entry: 108853360; end: 1088533f3;  */

long * FUN_108853360(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    FUN_10882b8ac();
  }
  lVar1 = param_4 + param_3 * 0x48;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x48;
  return param_1;
}



/* Entry: 1088533f4; end: 108853407;  */

void FUN_1088533f4(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar2 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  func_0x00010885c04c();
  puVar3 = (undefined8 *)*puVar2;
  puVar1 = (undefined8 *)puVar2[1];
  puVar6 = (undefined8 *)(*(long *)(param_2 + 8) + (((long)puVar1 - (long)puVar3) / -0x30) * 0x30);
  puVar4 = puVar6;
  for (puVar2 = puVar3; puVar2 != puVar1; puVar2 = puVar2 + 6) {
    uVar8 = puVar2[1];
    uVar7 = *puVar2;
    puVar4[2] = puVar2[2];
    puVar4[1] = uVar8;
    *puVar4 = uVar7;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    uVar8 = puVar2[4];
    uVar7 = puVar2[3];
    puVar4[5] = puVar2[5];
    puVar4[4] = uVar8;
    puVar4[3] = uVar7;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[3] = 0;
    puVar4 = puVar4 + 6;
  }
  for (; puVar3 != puVar1; puVar3 = puVar3 + 6) {
    FUN_10884d798();
  }
  *(undefined8 **)(unaff_x19 + 8) = puVar6;
  lVar5 = *unaff_x20;
  *unaff_x20 = (long)puVar6;
  unaff_x20[1] = lVar5;
  func_0x00010885bfc4();
  return;
}



/* Entry: 108853408; end: 108853517;  */

void FUN_108853408(undefined8 *param_1,long param_2)

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
  undefined8 uVar8;
  
  func_0x00010885c04c();
  puVar2 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  puVar6 = (undefined8 *)(*(long *)(param_2 + 8) + (((long)puVar1 - (long)puVar2) / -0x30) * 0x30);
  puVar3 = puVar6;
  for (puVar5 = puVar2; puVar5 != puVar1; puVar5 = puVar5 + 6) {
    uVar8 = puVar5[1];
    uVar7 = *puVar5;
    puVar3[2] = puVar5[2];
    puVar3[1] = uVar8;
    *puVar3 = uVar7;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    uVar8 = puVar5[4];
    uVar7 = puVar5[3];
    puVar3[5] = puVar5[5];
    puVar3[4] = uVar8;
    puVar3[3] = uVar7;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[3] = 0;
    puVar3 = puVar3 + 6;
  }
  for (; puVar2 != puVar1; puVar2 = puVar2 + 6) {
    FUN_10884d798();
  }
  *(undefined8 **)(unaff_x19 + 8) = puVar6;
  lVar4 = *unaff_x20;
  *unaff_x20 = (long)puVar6;
  unaff_x20[1] = lVar4;
  func_0x00010885bfc4();
  return;
}



/* Entry: 108853518; end: 10885355f;  */

long * FUN_108853518(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x30;
    FUN_10884d798();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108853560; end: 1088536f3;  */

void FUN_108853560(void)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar4;
  long unaff_x19;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined1 auStack_e0 [72];
  char cStack_98;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined8 uStack_88;
  undefined8 uStack_80;
  byte bStack_60;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  func_0x00010885bce4();
  uStack_90 = 0;
  bStack_60 = 0;
  func_0x00010885c6cc();
  if ((bool)in_ZR) {
    FUN_1088536f4(&uStack_90);
  }
  FUN_10884d3c8(auStack_e0);
  if (cStack_98 == '\x01') {
    puVar5 = *(undefined8 **)(unaff_x19 + 0x28);
    FUN_108853728(*puVar5,auStack_e0);
    plVar6 = *(long **)puVar5[1];
    if (plVar6 != (long *)0x0) {
      if ((bStack_60 & 1) == 0) {
        func_0x000104bdc2c8();
LAB_1088536d0:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1088536d4);
        (*pcVar3)();
      }
      puVar5 = (undefined8 *)plVar6[1];
      if (puVar5 < (undefined8 *)plVar6[2]) {
        puVar5[2] = uStack_80;
        puVar5[1] = uStack_88;
        *puVar5 = CONCAT71(uStack_8f,uStack_90);
        func_0x00010885c3d0();
        lVar7 = extraout_x8 + 0x30;
      }
      else {
        uVar1 = ((long)puVar5 - *plVar6) / 0x30 + 1;
        if (0x555555555555555 < uVar1) {
          FUN_1088533f4();
          goto LAB_1088536d0;
        }
        uVar2 = (plVar6[2] - *plVar6) / 0x30;
        uVar4 = uVar2 * 2;
        if (uVar4 < uVar1 || uVar4 - uVar1 == 0) {
          uVar4 = uVar1;
        }
        if (0x2aaaaaaaaaaaaa9 < uVar2) {
          uVar4 = 0x555555555555555;
        }
        func_0x0001088534ac(auStack_58,uVar4);
        puStack_48[1] = uStack_88;
        *puStack_48 = CONCAT71(uStack_8f,uStack_90);
        puStack_48[2] = uStack_80;
        func_0x00010885c3d0();
        puStack_48 = (undefined8 *)(extraout_x8_00 + 0x30);
        func_0x000108853408(plVar6,auStack_58);
        lVar7 = plVar6[1];
        FUN_108853518(auStack_58);
      }
      plVar6[1] = lVar7;
    }
  }
  func_0x000108853828(auStack_e0);
  func_0x000108853848(&uStack_90);
  return;
}



/* Entry: 1088536f4; end: 108853727;  */

void FUN_1088536f4(undefined8 *param_1)

{
  if (*(char *)(param_1 + 6) == '\x01') {
    FUN_10884d798();
  }
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  return;
}



/* Entry: 108853728; end: 1088537c7;  */

void FUN_108853728(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long *unaff_x19;
  long lVar3;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x00010885c1b0();
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x00010885c008();
    lVar3 = uVar1 + 0x48;
  }
  else {
    plVar2 = unaff_x19;
    FUN_1088537c8();
    FUN_108853360(auStack_58,plVar2,(unaff_x19[1] - *unaff_x19) / 0x48,(ulong *)(param_1 + 0x10));
    func_0x00010885c008();
    lStack_48 = lStack_48 + 0x48;
    func_0x00010885c4b8();
    FUN_108853290();
    lVar3 = unaff_x19[1];
    func_0x0001088533ac(auStack_58);
  }
  unaff_x19[1] = lVar3;
  return;
}



/* Entry: 1088537c8; end: 108853867;  */

long * FUN_1088537c8(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if ((long *)0x38e38e38e38e38e < param_2) {
    FUN_10882b8a0();
    if ((char)param_1[9] == '\x01') {
      func_0x0001052c283c();
    }
    return param_1;
  }
  uVar1 = (param_1[2] - *param_1) / 0x48;
  plVar2 = (long *)(uVar1 * 2);
  if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
    plVar2 = param_2;
  }
  if (0x1c71c71c71c71c6 < uVar1) {
    plVar2 = (long *)0x38e38e38e38e38e;
  }
  return plVar2;
}



/* Entry: 108853868; end: 108853877;  */

void FUN_108853868(void)

{
  return;
}



/* Entry: 108853878; end: 1088538bf;  */

long * FUN_108853878(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x30;
      FUN_10884d798();
    }
    param_1[1] = lVar2;
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 1088538c0; end: 108853f63;  */

void FUN_1088538c0(undefined8 param_1,undefined8 param_2,long param_3,uint param_4)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x19;
  ulong unaff_x20;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_f8 [72];
  undefined1 auStack_b0 [40];
  long lStack_88;
  
  func_0x00010885c04c();
  do {
    uVar10 = unaff_x20;
LAB_108853904:
    while( true ) {
      unaff_x20 = uVar10;
      uVar8 = unaff_x19 - unaff_x20;
      uVar10 = (long)uVar8 / 0x48;
      cVar4 = SBORROW8(uVar10,5);
      cVar5 = (long)(uVar10 - 5) < 0;
      bVar6 = uVar10 == 5;
      switch(uVar10) {
      case 0:
      case 1:
        return;
      case 2:
        func_0x00010885c9e8(*(undefined8 *)(unaff_x19 - 0x20));
        if (bVar6 || cVar5 != cVar4) {
          return;
        }
        func_0x00010885c7b8(unaff_x20);
        return;
      case 3:
        func_0x00010885c794(unaff_x20,unaff_x20 + 0x48);
        return;
      case 4:
        func_0x000108853ff8(unaff_x20,unaff_x20 + 0x48,unaff_x20 + 0x90,unaff_x19 - 0x48);
        return;
      case 5:
        FUN_108854060(unaff_x20,unaff_x20 + 0x48,unaff_x20 + 0x90,unaff_x20 + 0xd8,unaff_x19 - 0x48)
        ;
        return;
      }
      if ((long)uVar8 < 0x6c0) {
        if ((param_4 & 1) == 0) {
          if (unaff_x20 == unaff_x19) {
            return;
          }
          while( true ) {
            uVar10 = unaff_x20;
            unaff_x20 = uVar10 + 0x48;
            cVar4 = SBORROW8(unaff_x20,unaff_x19);
            cVar5 = (long)(unaff_x20 - unaff_x19) < 0;
            bVar6 = unaff_x20 == unaff_x19;
            if (bVar6) break;
            func_0x00010885c734(*(undefined8 *)(uVar10 + 0x70));
            if (!bVar6 && cVar5 == cVar4) {
              func_0x00010885c008(auStack_b0);
              do {
                uVar8 = uVar10;
                func_0x0001088542cc(uVar8 + 0x48,uVar8);
                uVar10 = uVar8 - 0x48;
              } while (*(long *)(uVar8 - 0x20) < lStack_88);
              func_0x0001088542cc(uVar8,auStack_b0);
              func_0x00010885c174();
            }
          }
          return;
        }
        if (unaff_x20 == unaff_x19) {
          return;
        }
        lVar14 = 0;
        uVar10 = unaff_x20;
        goto LAB_108853c48;
      }
      if (param_3 == 0) {
        if (unaff_x20 == unaff_x19) {
          return;
        }
        uVar13 = uVar10 - 2 >> 1;
        uVar8 = uVar13;
        goto LAB_108853cdc;
      }
      lVar14 = unaff_x20 + (uVar10 >> 1) * 0x48;
      cVar4 = SBORROW8(uVar8,0x2401);
      cVar5 = (long)(uVar8 - 0x2401) < 0;
      uVar7 = uVar8 == 0x2401;
      if (uVar8 < 0x2401) {
        func_0x00010885c794(lVar14,unaff_x20);
      }
      else {
        func_0x00010885c794(unaff_x20,lVar14);
        FUN_108853f64(unaff_x20 + 0x48,lVar14 + -0x48,unaff_x19 - 0x90);
        FUN_108853f64(unaff_x20 + 0x90,lVar14 + 0x48,unaff_x19 - 0xd8);
        FUN_108853f64(lVar14 + -0x48,lVar14,lVar14 + 0x48);
        FUN_108854288(unaff_x20,lVar14);
      }
      param_3 = param_3 + -1;
      if (((param_4 & 1) != 0) ||
         (func_0x00010885c9e8(*(undefined8 *)(unaff_x20 - 0x20)), !(bool)uVar7 && cVar5 == cVar4))
      break;
      func_0x00010885c008(auStack_b0);
      uVar8 = unaff_x20;
      if (*(long *)(unaff_x19 - 0x20) < lStack_88) {
        do {
          uVar10 = uVar8 + 0x48;
          plVar2 = (long *)(uVar8 + 0x70);
          uVar8 = uVar10;
        } while (lStack_88 <= *plVar2);
      }
      else {
        do {
          uVar10 = uVar8 + 0x48;
          if (unaff_x19 <= uVar10) break;
          plVar2 = (long *)(uVar8 + 0x70);
          uVar8 = uVar10;
        } while (lStack_88 <= *plVar2);
      }
      uVar8 = unaff_x19;
      uVar13 = unaff_x19;
      if (uVar10 < unaff_x19) {
        do {
          uVar13 = uVar8 - 0x48;
          plVar2 = (long *)(uVar8 - 0x20);
          uVar8 = uVar13;
        } while (*plVar2 < lStack_88);
      }
      while (uVar10 < uVar13) {
        FUN_108854288(uVar10,uVar13);
        do {
          plVar2 = (long *)(uVar10 + 0x70);
          uVar10 = uVar10 + 0x48;
        } while (lStack_88 <= *plVar2);
        do {
          plVar2 = (long *)(uVar13 - 0x20);
          uVar13 = uVar13 - 0x48;
        } while (*plVar2 < lStack_88);
      }
      uVar8 = uVar10 - 0x48;
      if (unaff_x20 != uVar8) {
        func_0x0001088542cc(unaff_x20,uVar8);
      }
      func_0x0001088542cc(uVar8,auStack_b0);
      func_0x00010885c174();
      param_4 = 0;
    }
    func_0x00010885c008(auStack_b0);
    lVar14 = 0;
    do {
      lVar11 = unaff_x20 + lVar14;
      lVar14 = lVar14 + 0x48;
    } while (lStack_88 < *(long *)(lVar11 + 0x70));
    uVar8 = unaff_x20 + lVar14;
    uVar13 = unaff_x19;
    uVar10 = uVar8;
    if (lVar14 == 0x48) {
      do {
        uVar12 = uVar13;
        if (uVar13 <= uVar8) break;
        uVar12 = uVar13 - 0x48;
        plVar2 = (long *)(uVar13 - 0x20);
        uVar13 = uVar12;
      } while (*plVar2 <= lStack_88);
    }
    else {
      do {
        uVar12 = uVar13 - 0x48;
        plVar2 = (long *)(uVar13 - 0x20);
        uVar13 = uVar12;
      } while (*plVar2 <= lStack_88);
    }
    while (uVar10 < uVar12) {
      FUN_108854288(uVar10,uVar12);
      do {
        plVar2 = (long *)(uVar10 + 0x70);
        uVar10 = uVar10 + 0x48;
      } while (lStack_88 < *plVar2);
      do {
        plVar2 = (long *)(uVar12 - 0x20);
        uVar12 = uVar12 - 0x48;
      } while (*plVar2 <= lStack_88);
    }
    uVar12 = uVar10 - 0x48;
    if (unaff_x20 != uVar12) {
      func_0x0001088542cc(unaff_x20,uVar12);
    }
    func_0x0001088542cc(uVar12,auStack_b0);
    func_0x00010885c174();
    if (uVar8 < uVar13) goto LAB_108853ab4;
    uVar8 = unaff_x20;
    FUN_1088540f8(unaff_x20,uVar12);
    uVar13 = uVar10;
    FUN_1088540f8(uVar10,unaff_x19);
    if ((int)uVar13 == 0) goto code_r0x000108853ab0;
    unaff_x19 = uVar12;
    if ((uVar8 & 1) != 0) {
      return;
    }
  } while( true );
LAB_108853c48:
  if (uVar10 + 0x48 == unaff_x19) {
    return;
  }
  if (*(long *)(uVar10 + 0x28) < *(long *)(uVar10 + 0x70)) {
    func_0x00010885c7b0(auStack_b0);
    lVar11 = lVar14;
    do {
      lVar15 = unaff_x20 + lVar11;
      func_0x0001088542cc(lVar15 + 0x48,lVar15);
      uVar8 = unaff_x20;
      if (lVar11 == 0) goto LAB_108853ca8;
      lVar11 = lVar11 + -0x48;
    } while (*(long *)(lVar15 + -0x20) < lStack_88);
    uVar8 = unaff_x20 + lVar11 + 0x48;
LAB_108853ca8:
    func_0x0001088542cc(uVar8,auStack_b0);
    func_0x00010885c174();
  }
  lVar14 = lVar14 + 0x48;
  uVar10 = uVar10 + 0x48;
  goto LAB_108853c48;
LAB_108853cdc:
  do {
    if ((long)uVar8 <= (long)uVar13) {
      uVar3 = (uVar8 & 0x3fffffffffffffff) << 1 | 1;
      lVar14 = unaff_x20 + uVar3 * 0x48;
      uVar12 = uVar8 * 2 + 2;
      uVar9 = uVar3;
      if ((long)uVar12 < (long)uVar10) {
        plVar2 = (long *)(lVar14 + 0x28);
        plVar1 = (long *)(lVar14 + 0x70);
        lVar11 = 0x48;
        if (*plVar2 <= *plVar1) {
          lVar11 = 0;
        }
        lVar14 = lVar14 + lVar11;
        uVar9 = uVar12;
        if (*plVar2 <= *plVar1) {
          uVar9 = uVar3;
        }
      }
      lVar11 = unaff_x20 + uVar8 * 0x48;
      if (*(long *)(lVar14 + 0x28) <= *(long *)(lVar11 + 0x28)) {
        FUN_10884d810(auStack_b0,lVar11);
        do {
          lVar15 = lVar14;
          func_0x0001088542cc(lVar11,lVar15);
          if ((long)uVar13 < (long)uVar9) break;
          uVar3 = uVar9 << 1 | 1;
          lVar14 = unaff_x20 + uVar3 * 0x48;
          uVar12 = uVar9 * 2 + 2;
          uVar9 = uVar3;
          if ((long)uVar12 < (long)uVar10) {
            plVar2 = (long *)(lVar14 + 0x28);
            plVar1 = (long *)(lVar14 + 0x70);
            lVar11 = 0x48;
            if (*plVar2 <= *plVar1) {
              lVar11 = 0;
            }
            lVar14 = lVar14 + lVar11;
            uVar9 = uVar12;
            if (*plVar2 <= *plVar1) {
              uVar9 = uVar3;
            }
          }
          lVar11 = lVar15;
        } while (*(long *)(lVar14 + 0x28) <= lStack_88);
        func_0x0001088542cc(lVar15,auStack_b0);
        func_0x00010885c174();
      }
    }
    uVar8 = uVar8 - 1;
  } while (-1 < (long)uVar8);
  do {
    if ((long)uVar10 < 2) {
      return;
    }
    func_0x00010885c008(auStack_f8);
    uVar13 = 0;
    uVar8 = unaff_x20;
    do {
      lVar14 = uVar8 + uVar13 * 0x48;
      uVar3 = uVar13 << 1 | 1;
      uVar12 = uVar13 * 2 + 2;
      uVar9 = lVar14 + 0x48U;
      uVar13 = uVar3;
      if (((long)uVar12 < (long)uVar10) &&
         (uVar9 = lVar14 + 0x90, uVar13 = uVar12,
         *(long *)(lVar14 + 0x70) <= *(long *)(lVar14 + 0xb8))) {
        uVar9 = lVar14 + 0x48U;
        uVar13 = uVar3;
      }
      func_0x0001088542cc(uVar8,uVar9);
      uVar8 = uVar9;
    } while ((long)uVar13 <= (long)(uVar10 - 2 >> 1));
    unaff_x19 = unaff_x19 - 0x48;
    if (uVar9 == unaff_x19) {
      func_0x0001088542cc(uVar9,auStack_f8);
    }
    else {
      func_0x0001088542cc(uVar9,unaff_x19);
      func_0x0001088542cc(unaff_x19,auStack_f8);
      uVar8 = (uVar9 - unaff_x20) + 0x48;
      cVar4 = SBORROW8(uVar8,0x49);
      cVar5 = (long)((uVar9 - unaff_x20) + -1) < 0;
      bVar6 = uVar8 == 0x49;
      if (0x48 < (long)uVar8) {
        uVar13 = uVar8 / 0x48 - 2 >> 1;
        uVar8 = unaff_x20 + uVar13 * 0x48;
        func_0x00010885c734(*(undefined8 *)(uVar8 + 0x28));
        if (!bVar6 && cVar5 == cVar4) {
          func_0x00010885c7b0(auStack_b0);
          do {
            uVar12 = uVar8;
            func_0x0001088542cc(uVar9,uVar12);
            if (uVar13 == 0) break;
            uVar13 = uVar13 - 1 >> 1;
            uVar8 = unaff_x20 + uVar13 * 0x48;
            uVar9 = uVar12;
          } while (lStack_88 < *(long *)(uVar8 + 0x28));
          func_0x0001088542cc(uVar12,auStack_b0);
          func_0x00010885c174();
        }
      }
    }
    func_0x0001052c283c(auStack_f8);
    uVar10 = uVar10 - 1;
  } while( true );
code_r0x000108853ab0:
  if ((uVar8 & 1) == 0) {
LAB_108853ab4:
    FUN_1088538c0(unaff_x20,uVar12,param_3,param_4 & 1);
    param_4 = 0;
  }
  goto LAB_108853904;
}



/* Entry: 108853f64; end: 10885405f;  */

void FUN_108853f64(long param_1,long param_2,long param_3)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 auStack_68 [56];
  
  lVar4 = *(long *)(param_2 + 0x28);
  lVar5 = *(long *)(param_3 + 0x28);
  if (*(long *)(param_1 + 0x28) < lVar4) {
    cVar1 = SBORROW8(lVar5,lVar4);
    cVar2 = lVar5 - lVar4 < 0;
    uVar3 = lVar5 == lVar4;
    if (lVar5 <= lVar4) {
      FUN_108854288(param_1,param_2);
      func_0x00010885c9d0(*(undefined8 *)(param_3 + 0x28));
      param_1 = param_2;
      if ((bool)uVar3 || cVar2 != cVar1) {
        return;
      }
    }
LAB_108853fe8:
    func_0x00010885c04c(param_1,param_3);
    func_0x00010885c008(auStack_68);
    func_0x0001088542cc(unaff_x20,unaff_x19);
    func_0x00010885c4b8();
    func_0x0001088542cc();
    func_0x0001052c283c(auStack_68);
    return;
  }
  cVar1 = SBORROW8(lVar5,lVar4);
  cVar2 = lVar5 - lVar4 < 0;
  uVar3 = lVar5 == lVar4;
  if (lVar4 < lVar5) {
    FUN_108854288(param_2,param_3);
    func_0x00010885c734(*(undefined8 *)(param_2 + 0x28));
    param_3 = param_2;
    if (!(bool)uVar3 && cVar2 == cVar1) goto LAB_108853fe8;
  }
  return;
}



/* Entry: 108854060; end: 1088540f7;  */

void FUN_108854060(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined1 auStack_68 [40];
  
  func_0x00010885c04c();
  func_0x000108853ff8();
  lVar4 = *(long *)(param_5 + 0x28);
  lVar5 = *(long *)(param_4 + 0x28);
  cVar1 = SBORROW8(lVar4,lVar5);
  cVar2 = lVar4 - lVar5 < 0;
  uVar3 = lVar4 == lVar5;
  if (lVar5 < lVar4) {
    FUN_108854288(param_4,param_5);
    func_0x00010885c734(*(undefined8 *)(param_4 + 0x28));
    if (!(bool)uVar3 && cVar2 == cVar1) {
      func_0x00010885c8cc();
      func_0x00010885c9d0(*(undefined8 *)(param_3 + 0x28));
      if (!(bool)uVar3 && cVar2 == cVar1) {
        func_0x00010885c7b8();
        func_0x00010885c9e8(*(undefined8 *)(unaff_x19 + 0x28));
        if (!(bool)uVar3 && cVar2 == cVar1) {
          func_0x00010885c04c();
          func_0x00010885c008(auStack_68);
          func_0x0001088542cc(unaff_x20,unaff_x19);
          func_0x00010885c4b8();
          func_0x0001088542cc();
          func_0x0001052c283c(auStack_68);
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 1088540f8; end: 108854287;  */

void FUN_1088540f8(long param_1,long param_2)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined1 auStack_98 [40];
  long lStack_70;
  
  func_0x00010885c1b0();
  lVar7 = (param_2 - param_1) / 0x48;
  cVar1 = SBORROW8(lVar7,5);
  cVar2 = lVar7 + -5 < 0;
  bVar3 = lVar7 == 5;
  switch(lVar7) {
  case 0:
  case 1:
    break;
  case 2:
    func_0x00010885c9d0(*(undefined8 *)(unaff_x20 + -0x20),1);
    if (!bVar3 && cVar2 == cVar1) {
      func_0x000108854288();
    }
    break;
  case 3:
    FUN_108853f64();
    break;
  case 4:
    func_0x000108853ff8();
    break;
  case 5:
    FUN_108854060();
    break;
  default:
    FUN_108853f64();
    lVar7 = 0;
    iVar8 = 0;
    lVar6 = unaff_x19 + 0xd8;
    lVar5 = unaff_x19 + 0x90;
    while (lVar4 = lVar6, lVar4 != unaff_x20) {
      if (*(long *)(lVar5 + 0x28) < *(long *)(lVar4 + 0x28)) {
        func_0x00010885c7b0(auStack_98);
        lVar6 = lVar7;
        do {
          lVar5 = unaff_x19 + lVar6;
          func_0x0001088542cc(lVar5 + 0xd8,lVar5 + 0x90);
          if (lVar6 == -0x90) break;
          lVar6 = lVar6 + -0x48;
        } while (*(long *)(lVar5 + 0x70) < lStack_70);
        func_0x0001088542cc();
        iVar8 = iVar8 + 1;
        func_0x0001052c283c(auStack_98);
        if (iVar8 == 8) {
          return;
        }
      }
      lVar7 = lVar7 + 0x48;
      lVar5 = lVar4;
      lVar6 = lVar4 + 0x48;
    }
  }
  return;
}



/* Entry: 108854288; end: 108854353;  */

void FUN_108854288(void)

{
  undefined1 auStack_68 [72];
  
  func_0x00010885c04c();
  func_0x00010885c008(auStack_68);
  func_0x0001088542cc();
  func_0x00010885c4b8();
  func_0x0001088542cc();
  func_0x0001052c283c(auStack_68);
  return;
}



/* Entry: 108854354; end: 1088543c3;  */

void FUN_108854354(void)

{
  func_0x00010885ba44();
  func_0x00010885bf00();
  func_0x00010885b834(FUN_10885886c);
  func_0x000107c27f94();
  func_0x00010885ba8c();
  func_0x00010885b980();
  func_0x00010885b93c();
  return;
}



/* Entry: 1088543c4; end: 1088544bf;  */

void FUN_1088543c4(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  
  func_0x00010885b824();
  plVar2 = param_1;
  func_0x00010885bf50(FUN_1088587fc);
  func_0x00010885b948();
  func_0x00010885c1ec();
  FUN_1088544c0();
  func_0x00010885b9c8();
  do {
    func_0x00010885b868();
  } while (extraout_w10 != 0);
  func_0x00010885b998();
  if ((extraout_w8 >> 1 & 1) == 0) {
    func_0x00010885b6c4();
    if (*plVar2 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x00010885bcd8();
    plVar2 = extraout_x8;
    do {
      if (*plVar2 == 0) {
        func_0x00010885b89c();
        plVar2 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar3 = extraout_w11_00;
      }
      else {
        func_0x00010885bc8c();
        plVar2 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar3 = extraout_w11;
      }
      if ((uVar3 & 1) != 0) {
        func_0x00010885b774();
        if ((bool)in_ZR) {
          func_0x00010885b88c();
          func_0x00010885b700();
          func_0x00010885b6a4();
        }
        func_0x00010885b678();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x00010885bf60();
  func_0x00010885bc10();
  func_0x00010885bc08();
  func_0x00010885bc28();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1088544c0; end: 10885450f;  */

void FUN_1088544c0(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_2;
  func_0x000107c27f94(auStack_48);
  func_0x000107c287c4(param_1,auStack_48);
  FUN_108825830(lVar1 + 0x168);
  func_0x000107c287c8(auStack_48);
  func_0x00010885c8ec();
  return;
}



/* Entry: 108854510; end: 108854587;  */

void FUN_108854510(void)

{
  func_0x00010885ba44();
  func_0x00010885bf00();
  func_0x00010885b834(FUN_10885b2a4);
  FUN_1088566a8();
  FUN_10884f81c();
  func_0x00010885b980();
  func_0x00010885b93c();
  return;
}



/* Entry: 108854588; end: 1088546d7;  */

void FUN_108854588(undefined8 *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  undefined8 uVar3;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  uint in_stack_00000008;
  
  func_0x00010885cac8();
  func_0x00010885b824();
  *param_1 = FUN_10885b1e4;
  param_1[1] = FUN_10885b280;
  FUN_1088566a8(param_1 + 2);
  FUN_10884f81c();
  plVar2 = (long *)*unaff_x20;
  FUN_10884f668(param_1 + 5);
  func_0x00010885b9c8();
  do {
    func_0x00010885b868();
  } while (extraout_w10 != 0);
  func_0x00010885b998();
  if ((extraout_w8 >> 1 & 1) == 0) {
    func_0x00010885b6c4();
    unaff_x21 = *plVar2;
    if (unaff_x21 == 0) {
      func_0x000107c3a5c0();
      unaff_x21 = *plVar2;
    }
    func_0x00010885bcd8();
    plVar2 = extraout_x8;
    do {
      if (*plVar2 == 0) {
        func_0x00010885b89c();
        plVar2 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar4 = extraout_w11_00;
      }
      else {
        func_0x00010885bc8c();
        plVar2 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar4 = extraout_w11;
      }
      if ((uVar4 & 1) != 0) {
        func_0x00010885b774();
        if ((bool)in_ZR) {
          func_0x00010885b88c();
          func_0x00010885b700();
          func_0x00010885b6a4();
        }
        func_0x00010885b678();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  param_1 = param_1 + 4;
  FUN_10885318c();
  func_0x00010885bac4();
  do {
    func_0x00010885b75c();
    if ((int)param_1 != 0) {
      if (*(char *)(unaff_x21 + 0xa4) == '\x01') {
        *(undefined1 *)(unaff_x21 + 0xa4) = 0;
      }
      uVar3 = *unaff_x22;
      *(undefined4 *)(unaff_x21 + 0xa0) = *(undefined4 *)(unaff_x22 + 1);
      *(undefined8 *)(unaff_x21 + 0x98) = uVar3;
      *(undefined1 *)(unaff_x21 + 0xa4) = 1;
      func_0x00010885b744();
      break;
    }
  } while ((in_stack_00000008 >> 1 & 1) == 0);
  func_0x00010885ba18();
  func_0x00010885bc10();
  func_0x00010885bc08();
  func_0x00010885bbf0();
  func_0x00010885bc18();
  return;
}



/* Entry: 1088546d8; end: 1088546db;  */

long FUN_1088546d8(long param_1)

{
  long extraout_x8;
  
  func_0x00010882f0a8(&UNK_110a78c60);
  if (extraout_x8 != 0) {
    func_0x00010882ecc4();
    func_0x000107c33ad4();
    FUN_108825d40();
    func_0x00010882f9f4();
  }
  func_0x0001052c1970(param_1 + 0x18);
  func_0x0001052c1970();
  return param_1;
}



/* Entry: 1088546dc; end: 1088546ef;  */

void FUN_1088546dc(void)

{
  FUN_108825ce8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088546f0; end: 10885475f;  */

void FUN_1088546f0(void)

{
  func_0x00010885bc7c();
  func_0x00010885c360();
  func_0x00010885c758(FUN_10885b55c);
  FUN_108854950();
  func_0x00010885c2cc();
  func_0x00010885b948();
  func_0x00010885bbd8();
  func_0x00010885b93c();
  return;
}



/* Entry: 108854760; end: 10885494f;  */

void FUN_108854760(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 uVar3;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *in_stack_00000010;
  
  func_0x00010885c9a8();
  func_0x00010885be5c();
  func_0x00010885c148();
  *param_1 = (long)FUN_10885b400;
  param_1[1] = (long)FUN_10885b53c;
  param_1[8] = (long)unaff_x20;
  plVar2 = param_1;
  func_0x00010885be08();
  func_0x00010885b948();
  func_0x00010885c10c();
  do {
    func_0x00010885b868();
  } while (extraout_w10 != 0);
  func_0x00010885bc30(*unaff_x20);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 9) = 0;
    unaff_x21 = (undefined8 *)param_1[6];
    func_0x00010885b6f0();
    if (*plVar2 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x00010885c3f0();
    plVar2 = extraout_x8;
    do {
      if (*plVar2 == 0) {
        func_0x00010885b89c();
        plVar2 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar4 = extraout_w11_00;
      }
      else {
        func_0x00010885bc8c();
        plVar2 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar4 = extraout_w11;
      }
      if ((uVar4 & 1) != 0) {
        func_0x00010885b9b8();
        if ((bool)in_ZR) {
          func_0x00010885b88c();
          func_0x00010885b700();
          func_0x00010885b720();
          func_0x00010885bc5c();
        }
        func_0x00010885b7cc();
        *extraout_x8_02 = 0;
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  FUN_10885318c();
  func_0x00010885c150();
  func_0x00010885c614();
  func_0x0001052c16b4();
  func_0x0001052c16dc(&stack0x00000010);
  func_0x00010885c874();
  func_0x00010885c68c();
  __ZNSt3__15mutex4lockEv(in_stack_00000010 + 8);
  if (*(char *)((long)in_stack_00000010 + 0xc) == '\x01') {
    uVar3 = *unaff_x21;
    *(undefined1 *)(in_stack_00000010 + 1) = *(undefined1 *)(unaff_x21 + 1);
    *in_stack_00000010 = uVar3;
  }
  else {
    func_0x00010885ca54();
  }
  func_0x00010885c218();
  if (unaff_x21 == (undefined8 *)0x0) {
    func_0x00010885c5d4(in_stack_00000010);
  }
  else {
    func_0x00010885c9dc();
    func_0x00010885c0a0();
    func_0x00010885ba24();
  }
  func_0x00010885c90c();
  func_0x00010885bd8c();
  func_0x00010885bc28();
  func_0x00010885bbf0();
  func_0x00010885bc18();
  return;
}



/* Entry: 108854950; end: 10885496f;  */

void FUN_108854950(void)

{
  func_0x00010885bdd4();
  FUN_108854970();
  return;
}



/* Entry: 108854970; end: 108854987;  */

void FUN_108854970(undefined8 *param_1)

{
  func_0x00010885c70c();
  *param_1 = &PTR_FUN_110a7c130;
  return;
}



/* Entry: 108854988; end: 1088549a7;  */

void FUN_108854988(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  long *plVar5;
  
  func_0x00010885caa4();
  FUN_108825ce8();
  plVar5 = (long *)*unaff_x19;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return;
}



/* Entry: 1088549a8; end: 108854a17;  */

void FUN_1088549a8(void)

{
  func_0x00010885ba44();
  func_0x00010885bf00();
  func_0x00010885b834(FUN_10885b0c4);
  FUN_108856644();
  func_0x00010885be90();
  func_0x00010885b980();
  func_0x00010885b93c();
  return;
}



/* Entry: 108854a18; end: 108854a6f;  */

void FUN_108854a18(long *param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long unaff_x20;
  long *plVar5;
  undefined8 *unaff_x21;
  uint uStack_38;
  
  func_0x00010885bf30();
  do {
    func_0x00010885b7b4();
    if ((int)param_1 != 0) {
      if (*(char *)(unaff_x20 + 0xa0) == '\x01') {
        *(undefined1 *)(unaff_x20 + 0xa0) = 0;
      }
      *(undefined8 *)(unaff_x20 + 0x98) = *unaff_x21;
      func_0x00010885ca74();
      func_0x00010885b79c();
      break;
    }
  } while ((uStack_38 >> 1 & 1) == 0);
  func_0x00010885c1e0();
  if (param_2 != 0) {
    plVar5 = (long *)(param_2 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5,1,param_1);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  *param_1 = param_2;
  return;
}



/* Entry: 108854a70; end: 108854b73;  */

void FUN_108854a70(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  undefined8 *unaff_x20;
  
  func_0x00010885b824();
  func_0x00010885c03c(FUN_10885b050);
  func_0x00010885bb88();
  plVar2 = (long *)*unaff_x20;
  FUN_10884f24c(param_1 + 0x28);
  func_0x00010885b9c8();
  do {
    func_0x00010885b868();
  } while (extraout_w10 != 0);
  func_0x00010885b998();
  if ((extraout_w8 >> 1 & 1) == 0) {
    func_0x00010885b6c4();
    if (*plVar2 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x00010885bcd8();
    plVar2 = extraout_x8;
    do {
      if (*plVar2 == 0) {
        func_0x00010885b89c();
        plVar2 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar3 = extraout_w11_00;
      }
      else {
        func_0x00010885bc8c();
        plVar2 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar3 = extraout_w11;
      }
      if ((uVar3 & 1) != 0) {
        func_0x00010885b774();
        if ((bool)in_ZR) {
          func_0x00010885b88c();
          func_0x00010885b700();
          func_0x00010885b6a4();
        }
        func_0x00010885b678();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x00010885c3a8();
  func_0x00010885bf40();
  func_0x00010885bc10();
  func_0x00010885bc08();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108854b74; end: 108854bcb;  */

void FUN_108854b74(long *param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long unaff_x20;
  long *plVar5;
  undefined8 *unaff_x21;
  uint uStack_38;
  
  func_0x00010885bf30();
  do {
    func_0x00010885b7b4();
    if ((int)param_1 != 0) {
      if (*(char *)(unaff_x20 + 0xa0) == '\x01') {
        *(undefined1 *)(unaff_x20 + 0xa0) = 0;
      }
      *(undefined8 *)(unaff_x20 + 0x98) = *unaff_x21;
      func_0x00010885ca74();
      func_0x00010885b79c();
      break;
    }
  } while ((uStack_38 >> 1 & 1) == 0);
  func_0x00010885c1e0();
  if (param_2 != 0) {
    plVar5 = (long *)(param_2 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5,1,param_1);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  *param_1 = param_2;
  return;
}



/* Entry: 108854bcc; end: 108854bcf;  */

long FUN_108854bcc(long param_1)

{
  long extraout_x8;
  
  func_0x00010882f0a8(&UNK_110a78ce0);
  if (extraout_x8 != 0) {
    func_0x00010882ecc4();
    func_0x000107c33ad4();
    FUN_1088261d0();
    func_0x00010882f9f4();
  }
  func_0x0001052c2004(param_1 + 0x18);
  func_0x0001052c2004();
  return param_1;
}


