/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108b787e0; end: 108b789ff;  */

long * FUN_108b787e0(long *param_1,int param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined1 *puVar4;
  long *plVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auStack_258 [16];
  long lStack_248;
  undefined1 auStack_200 [8];
  undefined1 auStack_1f8 [8];
  undefined1 auStack_1f0 [8];
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [24];
  undefined8 uStack_1b8;
  long lStack_1b0;
  long *plStack_1a8;
  undefined1 **ppuStack_1a0;
  code *pcStack_198;
  long lStack_188;
  long lStack_180;
  undefined4 auStack_178 [2];
  undefined2 uStack_170;
  undefined1 auStack_168 [16];
  undefined8 uStack_158;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113828488 & 1) == 0) {
    param_1 = (long *)0x113828488;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107c31088(auStack_e8,&UNK_10f501c97);
      puVar2 = &UNK_10f501cb6;
      func_0x000107c31088(auStack_f0,&UNK_10f501cb6);
      func_0x000104bdbd7c();
      func_0x000107c27e98(auStack_e0,auStack_f0,puVar2);
      puVar2 = &UNK_10f501cbd;
      func_0x000107c31088(auStack_f8,&UNK_10f501cbd);
      func_0x000104bef4f0();
      func_0x000107c27e98(auStack_c8,auStack_f8,puVar2);
      puVar2 = &UNK_10f501cc9;
      func_0x000107c31088(auStack_100,&UNK_10f501cc9);
      FUN_108b78a28();
      func_0x000107c27e98(auStack_b0,auStack_100,puVar2);
      puVar2 = &UNK_10f501ce0;
      func_0x000107c31088(auStack_108,&UNK_10f501ce0);
      FUN_108b78a84();
      func_0x000107c27e98(auStack_98,auStack_108,puVar2);
      puVar2 = &UNK_10f501cf0;
      func_0x000107c31088(auStack_110,&UNK_10f501cf0);
      FUN_108b784d0();
      func_0x000107c27e98(auStack_80,auStack_110,puVar2);
      puVar2 = &UNK_10f501cf6;
      func_0x000107c31088(auStack_118,&UNK_10f501cf6);
      FUN_108b784d0();
      func_0x000107c27e98(auStack_68,auStack_118,puVar2);
      puVar2 = &UNK_10f501cfc;
      func_0x000107c31088(auStack_120,&UNK_10f501cfc);
      FUN_108b784d0();
      func_0x000107c27e98(auStack_50,auStack_120,puVar2);
      uVar7 = 0;
      func_0x000104bdbd44(0x113828478,auStack_e8,0,auStack_e0,7);
      lVar8 = 0x90;
      do {
        func_0x000107c27924(auStack_e0 + lVar8);
        param_2 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        in_ZR = lVar8 == -0x18;
      } while (!(bool)in_ZR);
      func_0x000107c278f4(auStack_120);
      func_0x000107c278f4(auStack_118);
      func_0x000107c278f4(auStack_110);
      func_0x000107c278f4(auStack_108);
      func_0x000107c278f4(auStack_100);
      func_0x000107c278f4(auStack_f8);
      func_0x000107c278f4(auStack_f0);
      func_0x000107c278f4(auStack_e8);
      param_1 = (long *)0x113828488;
      ___cxa_guard_release();
    }
  }
  func_0x000108b78af8(uStack_38);
  if ((bool)in_ZR) {
    return (long *)0x113828478;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((char)param_1[4] != '\x01') {
    *(undefined2 *)(extraout_x8 + 1) = 1;
    *extraout_x8 = 0;
    return param_1;
  }
  pcStack_128 = FUN_108b78a00;
  uStack_158 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_130 = &stack0xfffffffffffffff0;
  FUN_108b7c82c();
  func_0x000107c30f7c(&lStack_188,0x113828560);
  auStack_178[0] = (undefined4)*param_1;
  uStack_170 = 4;
  FUN_108b7c95c(auStack_168,param_1 + 1);
  func_0x000104bdb9bc(&lStack_180,&lStack_188,auStack_178,2);
  lVar8 = 0x10;
  do {
    func_0x00010b9a8d98((long)auStack_178 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x000107c27928(&lStack_188);
  plVar5 = &lStack_180;
  func_0x00010b9a8f60(extraout_x8);
  plVar3 = &lStack_180;
  func_0x000104bdbf78();
  func_0x000108b7cc80(uStack_158);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    puVar4 = auStack_168;
    lVar8 = -0x20;
    do {
      func_0x00010b9a8d98(puVar4);
      iVar6 = (int)plVar5;
      puVar4 = puVar4 + -0x10;
      lVar8 = lVar8 + 0x10;
      uVar1 = lVar8 == 0;
    } while (!(bool)uVar1);
    plVar5 = &lStack_188;
    func_0x000107c27928();
    func_0x000108b7cc64();
    pcStack_198 = FUN_108b7c82c;
    uStack_1b8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    lStack_1b0 = lVar8;
    plStack_1a8 = plVar3;
    ppuStack_1a0 = &puStack_130;
    if ((bRam0000000113828568 & 1) == 0) {
      plVar5 = (long *)0x113828568;
      ___cxa_guard_acquire();
      if ((int)plVar5 != 0) {
        func_0x000107c31088(auStack_1f0,&UNK_10f501f9f);
        puVar2 = &UNK_10f501fc5;
        func_0x000107c31088(auStack_1f8,&UNK_10f501fc5);
        FUN_108b7ca24();
        func_0x000107c27e98(auStack_1e8,auStack_1f8,puVar2);
        puVar2 = &UNK_10f501fcc;
        func_0x000107c31088(auStack_200,&UNK_10f501fcc);
        FUN_108b7ca7c();
        func_0x000107c27e98(auStack_1d0,auStack_200,puVar2);
        uVar7 = 0;
        func_0x000104bdbd44(0x113828558,auStack_1f0,0,auStack_1e8,2);
        lVar8 = 0x18;
        do {
          func_0x000107c27924(auStack_1e8 + lVar8);
          iVar6 = (int)uVar7;
          lVar8 = lVar8 + -0x18;
          uVar1 = lVar8 == -0x18;
        } while (!(bool)uVar1);
        func_0x000107c278f4(auStack_200);
        func_0x000107c278f4(auStack_1f8);
        func_0x000107c278f4(auStack_1f0);
        plVar5 = (long *)0x113828568;
        ___cxa_guard_release();
      }
    }
    func_0x000108b7cc80(uStack_1b8);
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      if (iVar6 == 0) {
        __Unwind_Resume();
      }
      func_0x000104bd46a0();
      func_0x00010b9abe10(&lStack_248,(plVar5[1] - *plVar5) / 0x28);
      lVar9 = 0;
      lVar8 = 0x18;
      for (uVar10 = 0; uVar10 < (ulong)((plVar5[1] - *plVar5) / 0x28); uVar10 = uVar10 + 1) {
        FUN_108b7c388(auStack_258,*plVar5 + lVar9);
        func_0x00010b9a9020(lStack_248 + lVar8,auStack_258);
        func_0x00010b9a8d98(auStack_258);
        lVar8 = lVar8 + 0x10;
        lVar9 = lVar9 + 0x28;
      }
      func_0x00010b9a8f84(extraout_x8_00,&lStack_248);
      plVar5 = &lStack_248;
      func_0x000104bddf38(plVar5);
      return plVar5;
    }
    return (long *)0x113828558;
  }
  return plVar3;
}



/* Entry: 108b78a00; end: 108b78a27;  */

long * FUN_108b78a00(undefined8 *param_1,long *param_2)

{
  undefined1 uVar1;
  long *plVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 extraout_x8;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auStack_138 [16];
  long lStack_128;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  long lStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  long lStack_68;
  long lStack_60;
  undefined4 auStack_58 [2];
  undefined2 uStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  if ((char)param_2[4] != '\x01') {
    *(undefined2 *)(param_1 + 1) = 1;
    *param_1 = 0;
    return param_2;
  }
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_108b7c82c();
  func_0x000107c30f7c(&lStack_68,0x113828560);
  auStack_58[0] = (undefined4)*param_2;
  uStack_50 = 4;
  FUN_108b7c95c(auStack_48,param_2 + 1);
  func_0x000104bdb9bc(&lStack_60,&lStack_68,auStack_58,2);
  lVar8 = 0x10;
  do {
    func_0x00010b9a8d98((long)auStack_58 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x000107c27928(&lStack_68);
  plVar4 = &lStack_60;
  func_0x00010b9a8f60(param_1);
  plVar2 = &lStack_60;
  func_0x000104bdbf78();
  func_0x000108b7cc80(uStack_38);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    puVar3 = auStack_48;
    lVar8 = -0x20;
    do {
      func_0x00010b9a8d98(puVar3);
      iVar6 = (int)plVar4;
      puVar3 = puVar3 + -0x10;
      lVar8 = lVar8 + 0x10;
      uVar1 = lVar8 == 0;
    } while (!(bool)uVar1);
    plVar4 = &lStack_68;
    func_0x000107c27928();
    func_0x000108b7cc64();
    pcStack_78 = FUN_108b7c82c;
    uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    lStack_90 = lVar8;
    plStack_88 = plVar2;
    puStack_80 = &stack0xfffffffffffffff0;
    if ((bRam0000000113828568 & 1) == 0) {
      plVar4 = (long *)0x113828568;
      ___cxa_guard_acquire();
      if ((int)plVar4 != 0) {
        func_0x000107c31088(auStack_d0,&UNK_10f501f9f);
        puVar5 = &UNK_10f501fc5;
        func_0x000107c31088(auStack_d8,&UNK_10f501fc5);
        FUN_108b7ca24();
        func_0x000107c27e98(auStack_c8,auStack_d8,puVar5);
        puVar5 = &UNK_10f501fcc;
        func_0x000107c31088(auStack_e0,&UNK_10f501fcc);
        FUN_108b7ca7c();
        func_0x000107c27e98(auStack_b0,auStack_e0,puVar5);
        uVar7 = 0;
        func_0x000104bdbd44(0x113828558,auStack_d0,0,auStack_c8,2);
        lVar8 = 0x18;
        do {
          func_0x000107c27924(auStack_c8 + lVar8);
          iVar6 = (int)uVar7;
          lVar8 = lVar8 + -0x18;
          uVar1 = lVar8 == -0x18;
        } while (!(bool)uVar1);
        func_0x000107c278f4(auStack_e0);
        func_0x000107c278f4(auStack_d8);
        func_0x000107c278f4(auStack_d0);
        plVar4 = (long *)0x113828568;
        ___cxa_guard_release();
      }
    }
    func_0x000108b7cc80(uStack_98);
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      if (iVar6 == 0) {
        __Unwind_Resume();
      }
      func_0x000104bd46a0();
      func_0x00010b9abe10(&lStack_128,(plVar4[1] - *plVar4) / 0x28);
      lVar9 = 0;
      lVar8 = 0x18;
      for (uVar10 = 0; uVar10 < (ulong)((plVar4[1] - *plVar4) / 0x28); uVar10 = uVar10 + 1) {
        FUN_108b7c388(auStack_138,*plVar4 + lVar9);
        func_0x00010b9a9020(lStack_128 + lVar8,auStack_138);
        func_0x00010b9a8d98(auStack_138);
        lVar8 = lVar8 + 0x10;
        lVar9 = lVar9 + 0x28;
      }
      func_0x00010b9a8f84(extraout_x8,&lStack_128);
      plVar4 = &lStack_128;
      func_0x000104bddf38(plVar4);
      return plVar4;
    }
    return (long *)0x113828558;
  }
  return plVar2;
}



/* Entry: 108b78a28; end: 108b78a83;  */

undefined8 FUN_108b78a28(void)

{
  int iVar1;
  
  if ((bRam000000011328ac68 & 1) == 0) {
    iVar1 = 0x1328ac68;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_108b7c82c();
      func_0x00010b990784(0x11328ac58);
      ___cxa_guard_release(0x11328ac68);
    }
  }
  return 0x11328ac58;
}



/* Entry: 108b78a84; end: 108b78adf;  */

undefined8 FUN_108b78a84(void)

{
  int iVar1;
  
  if ((bRam000000011328ac80 & 1) == 0) {
    iVar1 = 0x1328ac80;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_108b77df8();
      func_0x00010b990784(0x11328ac70);
      ___cxa_guard_release(0x11328ac80);
    }
  }
  return 0x11328ac70;
}



/* Entry: 108b78ae0; end: 108b78b0b;  */

void FUN_108b78ae0(undefined8 *param_1)

{
  *(undefined2 *)(param_1 + 1) = 1;
  *param_1 = 0;
  return;
}



/* Entry: 108b78b0c; end: 108b78c83;  */

void FUN_108b78b0c(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [80];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  long lStack_48;
  
  func_0x00010b9a97d0(&lStack_48);
  func_0x000104bdbf60(auStack_60,lStack_48 + 0x18);
  func_0x000104bdbf60(auStack_78,lStack_48 + 0x28);
  FUN_108b78c84(auStack_90,lStack_48 + 0x38);
  func_0x000104bdbf60(auStack_a8,lStack_48 + 0x48);
  lVar1 = lStack_48 + 0x58;
  func_0x00010b9a9518(lVar1);
  FUN_108b78d28(auStack_f8,lStack_48 + 0x68);
  uVar2 = lStack_48 + 0x78;
  func_0x000105287fb8(uVar2);
  FUN_108b8099c(auStack_110,lStack_48 + 0x88);
  FUN_108b78dc0(param_1,auStack_60,auStack_78,auStack_90,auStack_a8,lVar1,auStack_f8,uVar2 & 0xffff,
                auStack_110);
  func_0x000107c27914(auStack_110);
  FUN_108939728(auStack_f8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
  func_0x000108939774(auStack_90);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
  func_0x000104bdbf78(&lStack_48);
  return;
}



/* Entry: 108b78c84; end: 108b78d27;  */

void FUN_108b78c84(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (((char)param_2[1] == '\t') && (lVar3 = *param_2, lVar3 != 0)) {
    FUN_108b79204(param_1,*(undefined8 *)(lVar3 + 0x10));
    lVar2 = lVar3 + 0x18;
    for (uVar4 = 0; uVar4 < *(ulong *)(lVar3 + 0x10); uVar4 = uVar4 + 1) {
      lVar1 = lVar2;
      FUN_108b77f94();
      lStack_38 = lVar1;
      FUN_108b793a0(param_1,&lStack_38);
      lVar2 = lVar2 + 0x10;
    }
  }
  return;
}



/* Entry: 108b78d28; end: 108b78dbf;  */

void FUN_108b78d28(undefined8 *param_1,long param_2)

{
  bool bVar1;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  bVar1 = 1 < *(byte *)(param_2 + 8);
  if (bVar1) {
    FUN_108b75300(&uStack_68);
    param_1[1] = uStack_60;
    *param_1 = uStack_68;
    param_1[2] = uStack_58;
    uStack_68 = 0;
    uStack_60 = 0;
    param_1[4] = uStack_48;
    param_1[3] = uStack_50;
    param_1[5] = uStack_40;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    param_1[8] = uStack_28;
    param_1[7] = uStack_30;
    param_1[6] = uStack_38;
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_38 = 0;
    FUN_108939748(&uStack_68);
  }
  else {
    *(undefined1 *)param_1 = 0;
  }
  *(bool *)(param_1 + 9) = bVar1;
  return;
}



/* Entry: 108b78dc0; end: 108b78dc7;  */

long FUN_108b78dc0(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 param_7,undefined2 param_8,
                  undefined8 *param_9)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x000108b794d8();
  uVar3 = param_3[1];
  uVar2 = *param_3;
  *(undefined8 *)(lVar1 + 0x28) = param_3[2];
  *(undefined8 *)(lVar1 + 0x20) = uVar3;
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  uVar2 = *param_4;
  *(undefined8 *)(lVar1 + 0x38) = param_4[1];
  *(undefined8 *)(lVar1 + 0x30) = uVar2;
  *(undefined8 *)(lVar1 + 0x40) = param_4[2];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  uVar3 = param_5[1];
  uVar2 = *param_5;
  *(undefined8 *)(lVar1 + 0x58) = param_5[2];
  *(undefined8 *)(lVar1 + 0x50) = uVar3;
  *(undefined8 *)(lVar1 + 0x48) = uVar2;
  param_5[1] = 0;
  param_5[2] = 0;
  *param_5 = 0;
  *(undefined4 *)(lVar1 + 0x60) = param_6;
  FUN_108b79184(lVar1 + 0x68,param_7);
  *(undefined2 *)(param_1 + 0xb8) = param_8;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  uVar2 = *param_9;
  *(undefined8 *)(param_1 + 200) = param_9[1];
  *(undefined8 *)(param_1 + 0xc0) = uVar2;
  *(undefined8 *)(param_1 + 0xd0) = param_9[2];
  *param_9 = 0;
  param_9[1] = 0;
  param_9[2] = 0;
  return param_1;
}



/* Entry: 108b78dc8; end: 108b79013;  */

undefined8 FUN_108b78dc8(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001138284a0 & 1) == 0) {
    iVar1 = 0x138284a0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(auStack_100,&UNK_10f501d03);
      puVar2 = &UNK_10f501d23;
      func_0x000107c31088(auStack_108,&UNK_10f501d23);
      func_0x000104bdbd7c();
      func_0x000107c27e98(auStack_f8,auStack_108,puVar2);
      puVar2 = &UNK_10f501d2f;
      func_0x000107c31088(auStack_110,&UNK_10f501d2f);
      func_0x000104bdbd7c();
      func_0x000107c27e98(auStack_e0,auStack_110,puVar2);
      puVar2 = &UNK_10f501d3b;
      func_0x000107c31088(auStack_118,&UNK_10f501d3b);
      FUN_108b79014();
      func_0x000107c27e98(auStack_c8,auStack_118,puVar2);
      puVar2 = &UNK_10f501d45;
      func_0x000107c31088(auStack_120,&UNK_10f501d45);
      func_0x000104bdbd7c();
      func_0x000107c27e98(auStack_b0,auStack_120,puVar2);
      puVar2 = &UNK_10f501d4e;
      func_0x000107c31088(auStack_128,&UNK_10f501d4e);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_98,auStack_128,puVar2);
      puVar2 = &UNK_10f501d5c;
      func_0x000107c31088(auStack_130,&UNK_10f501d5c);
      FUN_108b79070();
      func_0x000107c27e98(auStack_80,auStack_130,puVar2);
      puVar2 = &UNK_10f501d6e;
      func_0x000107c31088(auStack_138,&UNK_10f501d6e);
      func_0x000105288360();
      func_0x000107c27e98(auStack_68,auStack_138,puVar2);
      puVar2 = &UNK_10f501d8b;
      func_0x000107c31088(auStack_140,&UNK_10f501d8b);
      FUN_108b80a94();
      func_0x000107c27e98(auStack_50,auStack_140,puVar2);
      uVar3 = 0;
      func_0x000104bdbd44(0x113828490,auStack_100,0,auStack_f8,8);
      lVar4 = 0xa8;
      do {
        func_0x000107c27924(auStack_f8 + lVar4);
        param_2 = (int)uVar3;
        lVar4 = lVar4 + -0x18;
        in_ZR = lVar4 == -0x18;
      } while (!(bool)in_ZR);
      func_0x000107c278f4(auStack_140);
      func_0x000107c278f4(auStack_138);
      func_0x000107c278f4(auStack_130);
      func_0x000107c278f4(auStack_128);
      func_0x000107c278f4(auStack_120);
      func_0x000107c278f4(auStack_118);
      func_0x000107c278f4(auStack_110);
      func_0x000107c278f4(auStack_108);
      func_0x000107c278f4(auStack_100);
      ___cxa_guard_release(0x1138284a0);
    }
  }
  func_0x000108b794c4(uStack_38);
  if ((bool)in_ZR) {
    return 0x113828490;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam000000011328ac98 & 1) == 0) {
    iVar1 = 0x1328ac98;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_108b77fec();
      func_0x00010b990868(0x11328ac88);
      ___cxa_guard_release(0x11328ac98);
    }
  }
  return 0x11328ac88;
}



/* Entry: 108b79014; end: 108b7906f;  */

undefined8 FUN_108b79014(void)

{
  int iVar1;
  
  if ((bRam000000011328ac98 & 1) == 0) {
    iVar1 = 0x1328ac98;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_108b77fec();
      func_0x00010b990868(0x11328ac88);
      ___cxa_guard_release(0x11328ac98);
    }
  }
  return 0x11328ac88;
}



/* Entry: 108b79070; end: 108b790cb;  */

undefined8 FUN_108b79070(void)

{
  int iVar1;
  
  if ((bRam000000011328acb0 & 1) == 0) {
    iVar1 = 0x1328acb0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_108b753c0();
      func_0x00010b990784(0x11328aca0);
      ___cxa_guard_release(0x11328acb0);
    }
  }
  return 0x11328aca0;
}



/* Entry: 108b790cc; end: 108b79183;  */

long FUN_108b790cc(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 param_7,undefined2 param_8,
                  undefined8 *param_9)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x000108b794d8();
  uVar3 = param_3[1];
  uVar2 = *param_3;
  *(undefined8 *)(lVar1 + 0x28) = param_3[2];
  *(undefined8 *)(lVar1 + 0x20) = uVar3;
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  uVar2 = *param_4;
  *(undefined8 *)(lVar1 + 0x38) = param_4[1];
  *(undefined8 *)(lVar1 + 0x30) = uVar2;
  *(undefined8 *)(lVar1 + 0x40) = param_4[2];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  uVar3 = param_5[1];
  uVar2 = *param_5;
  *(undefined8 *)(lVar1 + 0x58) = param_5[2];
  *(undefined8 *)(lVar1 + 0x50) = uVar3;
  *(undefined8 *)(lVar1 + 0x48) = uVar2;
  param_5[1] = 0;
  param_5[2] = 0;
  *param_5 = 0;
  *(undefined4 *)(lVar1 + 0x60) = param_6;
  FUN_108b79184(lVar1 + 0x68,param_7);
  *(undefined2 *)(param_1 + 0xb8) = param_8;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  uVar2 = *param_9;
  *(undefined8 *)(param_1 + 200) = param_9[1];
  *(undefined8 *)(param_1 + 0xc0) = uVar2;
  *(undefined8 *)(param_1 + 0xd0) = param_9[2];
  *param_9 = 0;
  param_9[1] = 0;
  param_9[2] = 0;
  return param_1;
}



/* Entry: 108b79184; end: 108b791af;  */

undefined1 * FUN_108b79184(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x48] = 0;
  FUN_108b791b0();
  return param_1;
}



/* Entry: 108b791b0; end: 108b79203;  */

void FUN_108b791b0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_2 + 0x48) == '\x01') {
    func_0x000108b794d8();
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    *(undefined8 *)(param_1 + 0x30) = uVar1;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  return;
}



/* Entry: 108b79204; end: 108b7927b;  */

void FUN_108b79204(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  
  if ((undefined8 *)(param_1[2] - *param_1 >> 3) < param_2) {
    if ((ulong)param_2 >> 0x3d != 0) {
      FUN_108b7927c();
      func_0x000108b794a8();
      func_0x000108b794a0();
      plVar1 = (long *)&UNK_10f501d9d;
      func_0x000104bd47e8();
      lVar2 = param_2[1] - (plVar1[1] - *plVar1);
      _memcpy(lVar2);
      param_2[1] = lVar2;
      lVar2 = *plVar1;
      plVar1[1] = lVar2;
      *plVar1 = param_2[1];
      param_2[1] = lVar2;
      lVar2 = plVar1[1];
      plVar1[1] = param_2[2];
      param_2[2] = lVar2;
      lVar2 = plVar1[2];
      plVar1[2] = param_2[3];
      param_2[3] = lVar2;
      *param_2 = param_2[1];
      return;
    }
    FUN_108b79310();
    func_0x000108b794b8();
    func_0x000108b794a8();
  }
  return;
}



/* Entry: 108b7927c; end: 108b7928f;  */

void FUN_108b7927c(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&UNK_10f501d9d;
  func_0x000104bd47e8();
  lVar2 = param_2[1] - (plVar1[1] - *plVar1);
  _memcpy(lVar2);
  param_2[1] = lVar2;
  lVar2 = *plVar1;
  plVar1[1] = lVar2;
  *plVar1 = param_2[1];
  param_2[1] = lVar2;
  lVar2 = plVar1[1];
  plVar1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = plVar1[2];
  plVar1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 108b79290; end: 108b7930f;  */

void FUN_108b79290(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] - (param_1[1] - *param_1);
  _memcpy(lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 108b79310; end: 108b79333;  */

void FUN_108b79310(void)

{
  FUN_108b79334();
  return;
}



/* Entry: 108b79334; end: 108b7934f;  */

long * FUN_108b79334(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_2 << 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_108b7937c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108b79350; end: 108b7937b;  */

long * FUN_108b79350(long *param_1)

{
  FUN_108b7937c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108b7937c; end: 108b7939f;  */

void FUN_108b7937c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 108b793a0; end: 108b793e3;  */

undefined8 * FUN_108b793a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    puVar2 = puVar1 + 1;
    *puVar1 = *param_2;
  }
  else {
    puVar2 = param_1;
    FUN_108b793e4();
  }
  param_1[1] = puVar2;
  return puVar2 + -1;
}



/* Entry: 108b793e4; end: 108b7949f;  */

/* WARNING: Possible PIC construction at 0x000108b7949c: Changing call to branch */

long * FUN_108b793e4(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  lVar5 = param_1[1] - *param_1;
  uVar1 = (lVar5 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    plVar4 = param_1 + 2;
    uVar2 = *plVar4 - *param_1;
    uVar3 = (long)uVar2 >> 2;
    if (uVar3 <= uVar1) {
      uVar3 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar2) {
      uVar3 = 0x1fffffffffffffff;
    }
    if (uVar3 == 0) {
      plVar4 = (long *)0x0;
    }
    else {
      FUN_108b79310();
    }
    *(undefined8 *)((long)plVar4 + lVar5) = *param_2;
    func_0x000108b794b8();
    plVar4 = (long *)param_1[1];
    func_0x000108b794a8();
    return plVar4;
  }
  FUN_108b7927c();
  func_0x000108b794a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)(param_1);
  return param_1;
}



/* Entry: 108b794a0; end: 108b794f3;  */

void FUN_108b794a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 108b794f4; end: 108b7993f;  */

void FUN_108b794f4(long *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  code *pcVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  long lVar8;
  long *plVar9;
  undefined8 in_register_00005008;
  code *pcStack_198;
  undefined8 auStack_190 [2];
  code *pcStack_180;
  undefined8 auStack_178 [2];
  undefined8 uStack_168;
  undefined8 auStack_160 [2];
  undefined8 uStack_150;
  undefined8 auStack_148 [2];
  code *pcStack_138;
  undefined8 auStack_130 [2];
  code *pcStack_120;
  undefined8 auStack_118 [2];
  code *pcStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  code *pcStack_e0;
  undefined8 *puStack_d8;
  byte abStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  
  func_0x000108b7a480();
  uStack_70 = extraout_x8;
  if ((bRam000000011372d6c8 & 1) == 0) {
    iVar6 = 0x1372d6c8;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      FUN_108b7a0ec();
      FUN_108b79c4c(0);
      FUN_108b79c4c(1);
      func_0x00010b9941f8(&pcStack_108);
      func_0x00010b993b40(&pcStack_e0,pcStack_108,0x1138284c0);
      if ((abStack_d0[0] & 1) == 0) goto LAB_108b798a0;
      func_0x000107c30f3c(0x11372d6d8,&pcStack_e0);
      func_0x000107c27930(&pcStack_e0);
      func_0x000104bdc2fc(&pcStack_108);
      ___cxa_guard_release(0x11372d6c8);
    }
  }
  func_0x000107c30f7c(auStack_f0,0x11372d6e0);
  pcStack_108 = FUN_108b79a4c;
  func_0x000108b7a444();
  uStack_100 = param_2;
  if (extraout_x8_00 != 0) {
    do {
      func_0x000108b7a3f4();
    } while (extraout_w10 != 0);
  }
  FUN_108b79940(&pcStack_e0,&pcStack_108);
  pcStack_120 = FUN_108b79aac;
  func_0x000108b7a444();
  auStack_118[0] = param_2;
  if (extraout_x8_01 != 0) {
    do {
      func_0x000108b7a3f4();
    } while (extraout_w10_00 != 0);
  }
  FUN_108b79940(abStack_d0,&pcStack_120);
  pcStack_138 = FUN_108b79b18;
  func_0x000108b7a444();
  auStack_130[0] = param_2;
  if (extraout_x8_02 != 0) {
    do {
      func_0x000108b7a3f4();
    } while (extraout_w10_01 != 0);
  }
  FUN_108b79940(auStack_c0,&pcStack_138);
  uStack_150 = 0x108b79b50;
  func_0x000108b7a444();
  auStack_148[0] = param_2;
  if (extraout_x8_03 != 0) {
    do {
      func_0x000108b7a3f4();
    } while (extraout_w10_02 != 0);
  }
  FUN_108b79940(auStack_b0,&uStack_150);
  uStack_168 = 0x108b79b88;
  func_0x000108b7a444();
  auStack_160[0] = param_2;
  if (extraout_x8_04 != 0) {
    do {
      func_0x000108b7a3f4();
    } while (extraout_w10_03 != 0);
  }
  FUN_108b79940(auStack_a0,&uStack_168);
  pcStack_180 = FUN_108b79bc0;
  func_0x000108b7a444();
  auStack_178[0] = param_2;
  if (extraout_x8_05 != 0) {
    do {
      func_0x000108b7a3f4();
    } while (extraout_w10_04 != 0);
  }
  FUN_108b79940(auStack_90,&pcStack_180);
  pcStack_198 = FUN_108b79c20;
  func_0x000108b7a444();
  auStack_190[0] = param_2;
  if (extraout_x8_06 != 0) {
    do {
      func_0x000108b7a3f4();
    } while (extraout_w10_05 != 0);
  }
  FUN_108b79940(auStack_80,&pcStack_198);
  func_0x000104bdb9bc(auStack_e8,auStack_f0,&pcStack_e0,7);
  lVar8 = 0x60;
  do {
    func_0x00010b9a8d98((long)&pcStack_e0 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar5 = lVar8 == -0x10;
  } while (!(bool)uVar5);
  FUN_108939580(auStack_190);
  FUN_108939580(auStack_178);
  FUN_108939580(auStack_160);
  FUN_108939580(auStack_148);
  FUN_108939580(auStack_130);
  FUN_108939580(auStack_118);
  func_0x000108b7a490();
  func_0x000107c27928(auStack_f0);
  puVar7 = (undefined8 *)0x50;
  __Znwm();
  plVar9 = puVar7 + 1;
  *plVar9 = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_DAT_110ab3ea0;
  pcVar4 = (code *)(puVar7 + 3);
  func_0x00010b9ace44(pcVar4,auStack_e8);
  puVar7[3] = &PTR_DAT_110ab3ef0;
  func_0x000108b7a444();
  puVar7[9] = in_register_00005008;
  puVar7[8] = param_2;
  if (extraout_x8_07 != 0) {
    do {
      func_0x000108b7a3f4();
    } while (extraout_w10_06 != 0);
  }
  if ((puVar7[5] == 0) || (uVar5 = *(long *)(puVar7[5] + 8) == -1, pcVar3 = pcVar4, (bool)uVar5)) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = *plVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    pcStack_e0 = pcVar4;
    puStack_d8 = puVar7;
    func_0x000107c278e4(puVar7 + 4,&pcStack_e0);
    func_0x000107c278ec(&pcStack_e0);
    pcStack_108 = pcVar4;
    pcVar3 = pcVar4;
    if (puVar7[5] != 0) goto LAB_108b797d8;
  }
  else {
LAB_108b797d8:
    do {
      pcStack_108 = pcVar3;
      func_0x000108b7a3f4();
      pcVar3 = pcStack_108;
    } while (extraout_w10_07 != 0);
  }
  *param_1 = (long)pcVar4;
  FUN_108b7a3bc(&pcStack_108);
  func_0x000104bdbf78(auStack_e8);
  func_0x000108b7a414(uStack_70);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
LAB_108b798a0:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x108b798a8);
  (*pcVar4)();
}



/* Entry: 108b79940; end: 108b79a4b;  */

void FUN_108b79940(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  code *pcVar3;
  code **ppcVar4;
  code **ppcVar5;
  int iVar6;
  undefined8 extraout_x8;
  code *pcVar7;
  undefined8 uVar8;
  undefined1 auStack_140 [112];
  code *pcStack_d0;
  code **ppcStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  func_0x000108b7a480();
  uStack_a8 = param_2[1];
  uStack_b0 = *param_2;
  uVar8 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  pcVar3 = (code *)0x40;
  uStack_98 = uStack_b0;
  uStack_48 = extraout_x8;
  __Znwm();
  pcStack_78 = FUN_108b7a1f0;
  ppuStack_70 = &PTR_FUN_110ab3e70;
  uStack_60 = uStack_a8;
  uStack_68 = uStack_b0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_58 = uVar8;
  func_0x00010b9ac22c();
  pcStack_80 = pcVar3;
  func_0x000108b7a460();
  pcVar7 = pcVar3 + 8;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(pcVar7,0x10);
    if (bVar2) {
      *(long *)pcVar7 = *(long *)pcVar7 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  iVar6 = (int)&pcStack_78;
  pcStack_78 = pcVar3;
  func_0x00010b9a8ef8(param_1);
  func_0x000104bda388(&pcStack_78);
  ppcVar4 = &pcStack_80;
  func_0x000104bda3d0();
  func_0x000108b7a490();
  func_0x000108b7a414(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    func_0x000108b7a458();
  }
  else {
    func_0x000108b7a460();
    __ZdlPv(pcVar3);
  }
  ppcVar5 = ppcVar4;
  func_0x000104bd46a0();
  pcStack_b8 = FUN_108b79a4c;
  pcStack_d0 = pcVar3;
  ppcStack_c8 = ppcVar4;
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x000108b7a3e8();
  pcVar7 = *ppcVar5;
  FUN_108b76714(auStack_140);
  func_0x000108b7a438(*(undefined8 *)(*(long *)pcVar7 + 0x10));
  FUN_108939864(auStack_140);
  func_0x000108b7a428();
  return;
}



/* Entry: 108b79a4c; end: 108b79aab;  */

void FUN_108b79a4c(undefined8 *param_1)

{
  long *plVar1;
  undefined1 auStack_90 [112];
  
  FUN_108b7a3e8();
  plVar1 = (long *)*param_1;
  FUN_108b76714(auStack_90);
  func_0x000108b7a438(*(undefined8 *)(*plVar1 + 0x10));
  FUN_108939864(auStack_90);
  func_0x000108b7a428();
  return;
}



/* Entry: 108b79aac; end: 108b79b17;  */

void FUN_108b79aac(undefined8 *param_1)

{
  long *plVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  FUN_108b7a3e8();
  plVar1 = (long *)*param_1;
  FUN_108b7c5cc(auStack_50);
  func_0x000108b7a438(*(undefined8 *)(*plVar1 + 0x18));
  FUN_10893e93c(auStack_48);
  func_0x000108b7a428();
  return;
}



/* Entry: 108b79b18; end: 108b79bbf;  */

void FUN_108b79b18(void)

{
  undefined8 *unaff_x19;
  long *plVar1;
  
  func_0x000108b7a4a0();
  func_0x000108b7a3e8();
  plVar1 = (long *)*unaff_x19;
  func_0x00010b9a9518();
  func_0x000108b7a498(*(undefined8 *)(*plVar1 + 0x20));
  func_0x000108b7a470();
  return;
}



/* Entry: 108b79bc0; end: 108b79c1f;  */

void FUN_108b79bc0(undefined8 *param_1)

{
  long *plVar1;
  undefined1 auStack_30 [16];
  
  FUN_108b7a3e8();
  plVar1 = (long *)*param_1;
  FUN_108b7fff4(auStack_30);
  func_0x000108b7a438(*(undefined8 *)(*plVar1 + 0x38));
  func_0x000107c27d78(auStack_30);
  func_0x000108b7a428();
  return;
}



/* Entry: 108b79c20; end: 108b79c4b;  */

void FUN_108b79c20(undefined8 *param_1)

{
  (**(code **)(*(long *)*param_1 + 0x40))();
  func_0x000108b7a428();
  return;
}



/* Entry: 108b79c4c; end: 108b7a04f;  */

void FUN_108b79c4c(ulong param_1)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined *puVar3;
  undefined8 extraout_x8;
  long lVar4;
  undefined1 auStack_258 [16];
  undefined1 auStack_248 [16];
  undefined8 uStack_238;
  undefined1 auStack_230 [16];
  undefined1 auStack_220 [16];
  undefined8 uStack_210;
  undefined1 auStack_208 [16];
  undefined1 auStack_1f8 [16];
  undefined8 uStack_1e8;
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [16];
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [16];
  undefined1 auStack_1a8 [16];
  undefined8 uStack_198;
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [16];
  undefined8 uStack_170;
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  undefined8 uStack_148;
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined8 uStack_e0;
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
  
  func_0x000108b7a480();
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x11372d6c0);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x11372d6c0) = 1;
  uStack_38 = extraout_x8;
  if ((bVar1 & 1) != 0) goto LAB_108b79ca0;
  if ((bRam000000011372d6d0 & 1) == 0) goto LAB_108b79cc4;
  while( true ) {
    FUN_108b80888(0x11372d6e8);
LAB_108b79ca0:
    func_0x000108b7a414(uStack_38);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_108b79cc4:
    iVar2 = 0x1372d6d0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_108b7a0ec();
      puVar3 = &UNK_10f501da4;
      func_0x000107c31088(&uStack_148,&UNK_10f501da4);
      func_0x000107c30f84(auStack_168);
      FUN_108b76820();
      func_0x000107c30f3c(auStack_f0,puVar3);
      func_0x000108b7a40c(auStack_158,auStack_168,auStack_f0);
      uStack_e0 = uStack_148;
      uStack_148 = 0;
      func_0x000107c30f40(auStack_d8,auStack_158);
      puVar3 = &UNK_10f501db8;
      func_0x000107c31088(&uStack_170,&UNK_10f501db8);
      func_0x000107c30f84(auStack_190);
      FUN_108b7c82c();
      func_0x000107c30f3c(auStack_100,puVar3);
      func_0x000108b7a40c(auStack_180,auStack_190,auStack_100);
      uStack_c8 = uStack_170;
      uStack_170 = 0;
      func_0x000107c30f40(auStack_c0,auStack_180);
      puVar3 = &UNK_10f501dd8;
      func_0x000107c31088(&uStack_198,&UNK_10f501dd8);
      func_0x000107c30f84(auStack_1b8);
      FUN_108b7a140();
      func_0x000107c30f3c(auStack_110,puVar3);
      func_0x000108b7a40c(auStack_1a8,auStack_1b8,auStack_110);
      uStack_b0 = uStack_198;
      uStack_198 = 0;
      func_0x000107c30f40(auStack_a8,auStack_1a8);
      puVar3 = &DAT_10f501ded;
      func_0x000107c31088(&uStack_1c0,&DAT_10f501ded);
      func_0x000107c30f84(auStack_1e0);
      FUN_108b7a198();
      func_0x000107c30f3c(auStack_120,puVar3);
      func_0x000108b7a40c(auStack_1d0,auStack_1e0,auStack_120);
      uStack_98 = uStack_1c0;
      uStack_1c0 = 0;
      func_0x000107c30f40(auStack_90,auStack_1d0);
      puVar3 = &UNK_10f501e02;
      func_0x000107c31088(&uStack_1e8,&UNK_10f501e02);
      func_0x000107c30f84(auStack_208);
      func_0x000104bef4f0();
      func_0x000107c30f3c(auStack_130,puVar3);
      func_0x000108b7a40c(auStack_1f8,auStack_208,auStack_130);
      uStack_80 = uStack_1e8;
      uStack_1e8 = 0;
      func_0x000107c30f40(auStack_78,auStack_1f8);
      puVar3 = &UNK_10f501e18;
      func_0x000107c31088(&uStack_210,&UNK_10f501e18);
      func_0x000107c30f84(auStack_230);
      FUN_108b8033c();
      func_0x000107c30f3c(auStack_140,puVar3);
      func_0x000108b7a40c(auStack_220,auStack_230,auStack_140);
      uStack_68 = uStack_210;
      uStack_210 = 0;
      func_0x000107c30f40(auStack_60,auStack_220);
      func_0x000107c31088(&uStack_238,&DAT_10f3ea17d);
      func_0x000107c30f84(auStack_258);
      func_0x000104bdbd48(auStack_248,auStack_258,0,0);
      uStack_50 = uStack_238;
      uStack_238 = 0;
      func_0x000107c30f40(auStack_48,auStack_248);
      func_0x000104bdbd44(0x11372d6e8,0x1138284c0,1,&uStack_e0,7);
      lVar4 = 0x90;
      do {
        func_0x000107c27924(auStack_d8 + lVar4 + -8);
        lVar4 = lVar4 + -0x18;
        in_ZR = lVar4 == -0x18;
      } while (!(bool)in_ZR);
      func_0x000108b7a404(auStack_248);
      func_0x000108b7a404(auStack_258);
      func_0x000107c278f4(&uStack_238);
      func_0x000108b7a404(auStack_220);
      func_0x000108b7a404(auStack_140);
      func_0x000108b7a404(auStack_230);
      func_0x000107c278f4(&uStack_210);
      func_0x000108b7a404(auStack_1f8);
      func_0x000108b7a404(auStack_130);
      func_0x000108b7a404(auStack_208);
      func_0x000107c278f4(&uStack_1e8);
      func_0x000108b7a404(auStack_1d0);
      func_0x000108b7a404(auStack_120);
      func_0x000108b7a404(auStack_1e0);
      func_0x000107c278f4(&uStack_1c0);
      func_0x000108b7a404(auStack_1a8);
      func_0x000108b7a404(auStack_110);
      func_0x000108b7a404(auStack_1b8);
      func_0x000107c278f4(&uStack_198);
      func_0x000108b7a404(auStack_180);
      func_0x000108b7a404(auStack_100);
      func_0x000108b7a404(auStack_190);
      func_0x000107c278f4(&uStack_170);
      func_0x000108b7a404(auStack_158);
      func_0x000108b7a404(auStack_f0);
      func_0x000108b7a404(auStack_168);
      func_0x000107c278f4(&uStack_148);
      ___cxa_guard_release(0x11372d6d0);
    }
  }
  return;
}



/* Entry: 108b7a050; end: 108b7a0eb;  */

undefined8 FUN_108b7a050(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam00000001138284b8 & 1) == 0) {
    iVar4 = 0x138284b8;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_108b7a0ec();
      lStack_20 = lRam00000001138284c0;
      if (lRam00000001138284c0 != 0) {
        piVar1 = (int *)(lRam00000001138284c0 + 8);
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
      func_0x000107c30fa8(0x1138284a8,&lStack_20);
      func_0x000107c278f4(&lStack_20);
      ___cxa_guard_release(0x1138284b8);
    }
  }
  return 0x1138284a8;
}



/* Entry: 108b7a0ec; end: 108b7a13f;  */

void FUN_108b7a0ec(void)

{
  int iVar1;
  
  if ((bRam00000001138284c8 & 1) == 0) {
    iVar1 = 0x138284c8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(0x1138284c0,&UNK_10f501e28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1138284c8);
      return;
    }
  }
  return;
}



/* Entry: 108b7a140; end: 108b7a197;  */

undefined8 FUN_108b7a140(void)

{
  int iVar1;
  
  if ((bRam000000011328acc8 & 1) == 0) {
    iVar1 = 0x1328acc8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x11328acb8);
      ___cxa_guard_release(0x11328acc8);
    }
  }
  return 0x11328acb8;
}



/* Entry: 108b7a198; end: 108b7a1ef;  */

undefined8 FUN_108b7a198(void)

{
  int iVar1;
  
  if ((bRam000000011328ace0 & 1) == 0) {
    iVar1 = 0x1328ace0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x11328acd0);
      ___cxa_guard_release(0x11328ace0);
    }
  }
  return 0x11328acd0;
}



/* Entry: 108b7a1f0; end: 108b7a257;  */

void FUN_108b7a1f0(undefined8 param_1,long param_2)

{
  func_0x000108b7a4a0();
  (**(code **)(param_2 + 0x10))(param_2 + 0x18);
  return;
}



/* Entry: 108b7a258; end: 108b7a2bf;  */

void FUN_108b7a258(long param_1)

{
  param_1 = param_1 + 0x10;
  func_0x000108939b1c();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 108b7a2c0; end: 108b7a2d3;  */

void FUN_108b7a2c0(void)

{
  FUN_108b7a3ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108b7a2d4; end: 108b7a2e7;  */

void FUN_108b7a2d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108b7a2dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108b7a2e8; end: 108b7a2fb;  */

void FUN_108b7a2e8(void)

{
  FUN_108b7a30c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108b7a2fc; end: 108b7a30b;  */

undefined1  [16] FUN_108b7a2fc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10;
  auVar1._0_8_ = "Djinni C++ Proxy";
  return auVar1;
}



/* Entry: 108b7a30c; end: 108b7a3ab;  */

void FUN_108b7a30c(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_28;
  
  *param_1 = &PTR_DAT_110ab3ef0;
  __ZNSt3__15mutex4lockEv(0x11328ada8);
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
  __ZNSt3__15mutex6unlockEv(0x11328ada8);
  FUN_108939580(puVar3);
  func_0x00010b9ace94(param_1);
  return;
}



/* Entry: 108b7a3ac; end: 108b7a3bb;  */

void FUN_108b7a3ac(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ab3ea0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108b7a3bc; end: 108b7a3e7;  */

long * FUN_108b7a3bc(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c3105c();
  }
  return param_1;
}



/* Entry: 108b7a3e8; end: 108b7a4ab;  */

undefined8 FUN_108b7a3e8(undefined8 param_1,long param_2)

{
  int iVar1;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    return *(undefined8 *)(param_2 + 8);
  }
  if ((bRam0000000113846a30 & 1) == 0) {
    iVar1 = 0x13846a30;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113846a28 = 1;
      uRam0000000113846a20 = 0;
      ___cxa_guard_release(0x113846a30);
    }
  }
  return 0x113846a20;
}



/* Entry: 108b7a4ac; end: 108b7ac6f;  */

void FUN_108b7a4ac(ulong param_1,ulong param_2)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_3e8 [16];
  undefined1 auStack_3d8 [16];
  undefined8 uStack_3c8;
  undefined1 auStack_3c0 [16];
  undefined1 auStack_3b0 [16];
  undefined8 uStack_3a0;
  undefined1 auStack_398 [16];
  undefined1 auStack_388 [16];
  undefined8 uStack_378;
  undefined1 auStack_370 [16];
  undefined1 auStack_360 [16];
  undefined8 uStack_350;
  undefined1 auStack_348 [16];
  undefined1 auStack_338 [16];
  undefined8 uStack_328;
  undefined1 auStack_320 [16];
  undefined1 auStack_310 [16];
  undefined8 uStack_300;
  undefined1 auStack_2f8 [16];
  undefined1 auStack_2e8 [16];
  undefined8 uStack_2d8;
  undefined1 auStack_2d0 [16];
  undefined1 auStack_2c0 [16];
  undefined8 uStack_2b0;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [16];
  undefined8 uStack_288;
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [16];
  undefined8 uStack_260;
  undefined1 auStack_258 [16];
  undefined1 auStack_248 [32];
  undefined1 auStack_228 [16];
  undefined1 auStack_218 [16];
  undefined1 auStack_208 [32];
  undefined1 auStack_1e8 [16];
  undefined1 auStack_1d8 [32];
  undefined1 auStack_1b8 [16];
  undefined1 auStack_1a8 [16];
  undefined1 auStack_198 [16];
  undefined1 auStack_188 [32];
  undefined1 auStack_168 [32];
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [16];
  undefined8 uStack_128;
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined1 auStack_108 [16];
  undefined8 uStack_f8;
  undefined1 auStack_f0 [16];
  undefined8 uStack_e0;
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
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x11372d6f8);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x11372d6f8) = 1;
  if ((bVar1 & 1) != 0) goto LAB_108b7a508;
  if ((bRam000000011372d700 & 1) == 0) goto LAB_108b7a52c;
  while( true ) {
    FUN_108b80888(0x11372d730,param_1);
    param_2 = param_1;
LAB_108b7a508:
    param_1 = param_2;
    func_0x000108b7b2e4(uStack_38);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_108b7a52c:
    iVar2 = 0x1372d700;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_108b7ad0c();
      puVar3 = &UNK_10f4bcb53;
      func_0x000107c31088(&uStack_260,&UNK_10f4bcb53);
      func_0x000107c30f84(auStack_280);
      func_0x000104bdbd7c();
      puVar4 = auStack_168;
      func_0x000107c30f3c(puVar4,puVar3);
      if ((bRam000000011372d708 & 1) == 0) {
        puVar4 = (undefined1 *)0x11372d708;
        ___cxa_guard_acquire();
        if ((int)puVar4 != 0) {
          FUN_108b787e0();
          func_0x00010b990868(0x11372d740);
          puVar4 = (undefined1 *)0x11372d708;
          ___cxa_guard_release(0x11372d708);
        }
      }
      func_0x000108b7b3a0();
      func_0x000104bdbd7c();
      puVar5 = auStack_148;
      func_0x000107c30f3c(puVar5,puVar4);
      func_0x000104bef4f0();
      func_0x000107c30f3c(auStack_138,puVar5);
      func_0x000104bdbd48(auStack_270,auStack_280,auStack_168,4);
      uStack_128 = uStack_260;
      uStack_260 = 0;
      func_0x000107c30f40(auStack_120,auStack_270);
      puVar3 = &DAT_10f6846a0;
      func_0x000107c31088(&uStack_288,&DAT_10f6846a0);
      func_0x000107c30f84(auStack_2a8);
      func_0x000104bef4f0();
      func_0x000107c30f3c(auStack_188,puVar3);
      FUN_108b75634();
      func_0x000108b7b3a0();
      func_0x000108b7b3e4(auStack_298,auStack_2a8,auStack_188);
      uStack_110 = uStack_288;
      uStack_288 = 0;
      func_0x000107c30f40(auStack_108,auStack_298);
      func_0x000107c31088(&uStack_2b0,&UNK_10f4ecff0);
      func_0x000107c30f84(auStack_2d0);
      if ((bRam000000011372d710 & 1) == 0) {
        iVar2 = 0x1372d710;
        ___cxa_guard_acquire();
        if (iVar2 != 0) {
          func_0x00010b990e20(0x11372d750);
          ___cxa_guard_release(0x11372d710);
        }
      }
      func_0x000107c30f3c(auStack_198,0x11372d750);
      func_0x000108b7b36c(auStack_2c0,auStack_2d0,auStack_198);
      uStack_f8 = uStack_2b0;
      uStack_2b0 = 0;
      func_0x000107c30f40(auStack_f0,auStack_2c0);
      puVar3 = &UNK_10f4ed00a;
      func_0x000107c31088(&uStack_2d8,&UNK_10f4ed00a);
      func_0x000107c30f84(auStack_2f8);
      func_0x000104bdbd7c();
      puVar4 = auStack_1d8;
      func_0x000107c30f3c(puVar4,puVar3);
      if ((bRam000000011372d718 & 1) == 0) {
        puVar4 = (undefined1 *)0x11372d718;
        ___cxa_guard_acquire();
        if ((int)puVar4 != 0) {
          func_0x00010b990e20(0x11372d760);
          puVar4 = (undefined1 *)0x11372d718;
          ___cxa_guard_release(0x11372d718);
        }
      }
      func_0x000108b7b3a0();
      func_0x000104bf1120();
      puVar5 = auStack_1b8;
      func_0x000107c30f3c(puVar5,puVar4);
      FUN_108b764e8();
      func_0x000107c30f3c(auStack_1a8,puVar5);
      func_0x000104bdbd48(auStack_2e8,auStack_2f8,auStack_1d8,4);
      uStack_e0 = uStack_2d8;
      uStack_2d8 = 0;
      func_0x000107c30f40(auStack_d8,auStack_2e8);
      func_0x000107c31088(&uStack_300,&UNK_10f4ed02a);
      func_0x000107c30f84(auStack_320);
      if ((bRam000000011372d720 & 1) == 0) {
        iVar2 = 0x1372d720;
        ___cxa_guard_acquire();
        if (iVar2 != 0) {
          func_0x000104bdbd7c();
          func_0x00010b991338(0x11372d770);
          ___cxa_guard_release(0x11372d720);
        }
      }
      func_0x000107c30f3c(auStack_1e8,0x11372d770);
      func_0x000108b7b36c(auStack_310,auStack_320,auStack_1e8);
      uStack_c8 = uStack_300;
      uStack_300 = 0;
      func_0x000107c30f40(auStack_c0,auStack_310);
      puVar3 = &UNK_10f4ed044;
      func_0x000107c31088(&uStack_328,&UNK_10f4ed044);
      func_0x000107c30f84(auStack_348);
      func_0x000104bdbd7c();
      func_0x000107c30f3c(auStack_208,puVar3);
      FUN_108b77df8();
      func_0x000108b7b3a0();
      func_0x000108b7b3e4(auStack_338,auStack_348,auStack_208);
      uStack_b0 = uStack_328;
      uStack_328 = 0;
      func_0x000107c30f40(auStack_a8,auStack_338);
      puVar3 = &UNK_10f4ed067;
      func_0x000107c31088(&uStack_350,&UNK_10f4ed067);
      func_0x000107c30f84(auStack_370);
      FUN_108b787e0();
      func_0x000107c30f3c(auStack_218,puVar3);
      func_0x000108b7b36c(auStack_360,auStack_370,auStack_218);
      uStack_98 = uStack_350;
      uStack_350 = 0;
      func_0x000107c30f40(auStack_90,auStack_360);
      func_0x000107c31088(&uStack_378,&UNK_10f4ed080);
      func_0x000107c30f84(auStack_398);
      if ((bRam000000011372d728 & 1) == 0) {
        uVar6 = 0x11372d728;
        ___cxa_guard_acquire();
        if ((int)uVar6 != 0) {
          func_0x000104bdbd7c();
          uVar7 = uVar6;
          func_0x000104bef760();
          func_0x00010b9912a0(0x11372d780,uVar6,uVar7);
          ___cxa_guard_release(0x11372d728);
        }
      }
      func_0x000107c30f3c(auStack_228,0x11372d780);
      func_0x000108b7b36c(auStack_388,auStack_398,auStack_228);
      uStack_80 = uStack_378;
      uStack_378 = 0;
      func_0x000107c30f40(auStack_78,auStack_388);
      puVar3 = &UNK_10f4ed091;
      func_0x000107c31088(&uStack_3a0,&UNK_10f4ed091);
      func_0x000107c30f84(auStack_3c0);
      FUN_108b7c82c();
      func_0x000107c30f3c(auStack_248,puVar3);
      func_0x000104bdbd7c();
      func_0x000108b7b3a0();
      func_0x000108b7b3e4(auStack_3b0,auStack_3c0,auStack_248);
      uStack_68 = uStack_3a0;
      uStack_3a0 = 0;
      func_0x000107c30f40(auStack_60,auStack_3b0);
      puVar3 = &UNK_10f4ed0b0;
      func_0x000107c31088(&uStack_3c8,&UNK_10f4ed0b0);
      func_0x000107c30f84(auStack_3e8);
      FUN_108b80a94();
      func_0x000107c30f3c(auStack_258,puVar3);
      func_0x000108b7b36c(auStack_3d8,auStack_3e8,auStack_258);
      uStack_50 = uStack_3c8;
      uStack_3c8 = 0;
      func_0x000107c30f40(auStack_48,auStack_3d8);
      func_0x000104bdbd44(0x11372d730,0x1138284e8,1,&uStack_128,10);
      lVar8 = 0xd8;
      do {
        func_0x000107c27924(auStack_120 + lVar8 + -8);
        lVar8 = lVar8 + -0x18;
        in_ZR = lVar8 == -0x18;
      } while (!(bool)in_ZR);
      func_0x000108b7b334(auStack_3d8);
      func_0x000108b7b334(auStack_258);
      func_0x000108b7b334(auStack_3e8);
      func_0x000107c278f4(&uStack_3c8);
      func_0x000108b7b334(auStack_3b0);
      do {
        func_0x000108b7b390();
        func_0x000108b7b3c4();
      } while (!(bool)in_ZR);
      func_0x000108b7b334(auStack_3c0);
      func_0x000107c278f4(&uStack_3a0);
      func_0x000108b7b334(auStack_388);
      func_0x000108b7b334(auStack_228);
      func_0x000108b7b334(auStack_398);
      func_0x000107c278f4(&uStack_378);
      func_0x000108b7b334(auStack_360);
      func_0x000108b7b334(auStack_218);
      func_0x000108b7b334(auStack_370);
      func_0x000107c278f4(&uStack_350);
      func_0x000108b7b334(auStack_338);
      do {
        func_0x000108b7b390();
        func_0x000108b7b3c4();
      } while (!(bool)in_ZR);
      func_0x000108b7b334(auStack_348);
      func_0x000107c278f4(&uStack_328);
      func_0x000108b7b334(auStack_310);
      func_0x000108b7b334(auStack_1e8);
      func_0x000108b7b334(auStack_320);
      func_0x000107c278f4(&uStack_300);
      func_0x000108b7b334(auStack_2e8);
      do {
        func_0x000108b7b390();
        func_0x000108b7b3c4();
      } while (!(bool)in_ZR);
      func_0x000108b7b334(auStack_2f8);
      func_0x000107c278f4(&uStack_2d8);
      func_0x000108b7b334(auStack_2c0);
      func_0x000108b7b334(auStack_198);
      func_0x000108b7b334(auStack_2d0);
      func_0x000107c278f4(&uStack_2b0);
      func_0x000108b7b334(auStack_298);
      do {
        func_0x000108b7b390();
        func_0x000108b7b3c4();
      } while (!(bool)in_ZR);
      func_0x000108b7b334(auStack_2a8);
      func_0x000107c278f4(&uStack_288);
      func_0x000108b7b334(auStack_270);
      do {
        func_0x000108b7b390();
        func_0x000108b7b3c4();
      } while (!(bool)in_ZR);
      func_0x000108b7b334(auStack_280);
      func_0x000107c278f4(&uStack_260);
      ___cxa_guard_release(0x11372d700);
    }
  }
  return;
}



/* Entry: 108b7ac70; end: 108b7ad0b;  */

undefined8 FUN_108b7ac70(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam00000001138284e0 & 1) == 0) {
    iVar4 = 0x138284e0;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_108b7ad0c();
      lStack_20 = lRam00000001138284e8;
      if (lRam00000001138284e8 != 0) {
        piVar1 = (int *)(lRam00000001138284e8 + 8);
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
      func_0x000107c30fa8(0x1138284d0,&lStack_20);
      func_0x000107c278f4(&lStack_20);
      ___cxa_guard_release(0x1138284e0);
    }
  }
  return 0x1138284d0;
}



/* Entry: 108b7ad0c; end: 108b7ad5f;  */

void FUN_108b7ad0c(void)

{
  int iVar1;
  
  if ((bRam00000001138284f0 & 1) == 0) {
    iVar1 = 0x138284f0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(0x1138284e8,&UNK_10f501e4d);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1138284f0);
      return;
    }
  }
  return;
}



/* Entry: 108b7ad60; end: 108b7ae1f;  */

undefined4 *
FUN_108b7ad60(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 *param_5)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  undefined8 extraout_x8_06;
  undefined8 extraout_x8_07;
  long lVar10;
  undefined4 auStack_3a8 [4];
  undefined1 auStack_398 [16];
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined1 *puStack_378;
  undefined8 uStack_370;
  undefined4 *puStack_368;
  undefined8 ******ppppppuStack_360;
  code *pcStack_358;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined4 *puStack_318;
  undefined8 ******ppppppuStack_310;
  code *pcStack_308;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined4 *puStack_2c8;
  undefined1 ******ppppppuStack_2c0;
  code *pcStack_2b8;
  undefined1 auStack_298 [16];
  undefined4 auStack_288 [4];
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined4 *puStack_268;
  undefined8 uStack_260;
  undefined4 *puStack_258;
  undefined1 *****pppppuStack_250;
  code *pcStack_248;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined4 *puStack_208;
  undefined1 ****ppppuStack_200;
  code *pcStack_1f8;
  undefined4 uStack_1c8;
  undefined2 uStack_1c0;
  undefined1 auStack_1b8 [16];
  undefined4 auStack_1a8 [4];
  undefined8 uStack_198;
  undefined1 ***pppuStack_160;
  code *pcStack_158;
  undefined1 auStack_148 [16];
  undefined4 auStack_138 [2];
  undefined2 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 *puStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined1 uStack_e8;
  undefined2 uStack_e0;
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 uStack_58;
  undefined2 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = param_3;
  puVar9 = param_5;
  func_0x000108b7b2f8();
  uStack_48 = extraout_x8;
  func_0x000108b7b354();
  FUN_10893ab30(auStack_78,param_3);
  func_0x0001052808e4(auStack_68);
  uStack_50 = 7;
  uStack_58 = SUB81(param_5,0);
  func_0x000108b7b318();
  uVar7 = 0;
  uVar8 = 4;
  func_0x000104be6a78();
  func_0x000108b7b344();
  do {
    func_0x000108b7b388();
    func_0x000108b7b3b8();
  } while (!(bool)in_ZR);
  func_0x000108b7b2e4(uStack_48);
  if ((bool)in_ZR) {
    return param_4;
  }
  ___stack_chk_fail();
  do {
    func_0x00010b9a8d98();
    func_0x000108b7b3ec();
    uStack_e8 = (undefined1)uVar7;
  } while (!(bool)in_ZR);
  func_0x000108b7b34c();
  uStack_c0 = 0xffffffffffffffc0;
  pcStack_a8 = FUN_108b7ae20;
  puStack_b8 = param_4;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000108b7b2f8();
  uStack_e0 = 7;
  uStack_c8 = extraout_x8_00;
  FUN_108b75534(auStack_d8);
  func_0x000108b7b318();
  uVar7 = 1;
  func_0x000108b7b3dc();
  func_0x000108b7b344();
  do {
    func_0x000108b7b388();
    func_0x000108b7b3b8();
  } while (!(bool)in_ZR);
  func_0x000108b7b2e4(uStack_c8);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_d8;
  do {
    func_0x00010b9a8d98();
    func_0x000108b7b3ec();
    auStack_138[0] = (undefined4)uVar7;
  } while (!(bool)in_ZR);
  func_0x000108b7b34c();
  uStack_120 = 0xffffffffffffffe0;
  pcStack_108 = FUN_108b7aebc;
  uStack_128 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_130 = 4;
  puVar4 = (undefined4 *)(puVar3 + 8);
  puVar6 = auStack_138;
  puStack_118 = puVar2;
  ppuStack_110 = &puStack_b0;
  func_0x000108b7b398(auStack_148,puVar4,2);
  func_0x000108b7b344();
  func_0x000108b7b33c();
  func_0x000108b7b2e4(uStack_128);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000108b7b30c();
    func_0x000108b7b34c();
    pcStack_158 = FUN_108b7af24;
    puVar5 = puVar6;
    pppuStack_160 = &ppuStack_110;
    func_0x000108b7b2f8();
    uStack_198 = extraout_x8_01;
    func_0x000108b7b354();
    uStack_1c0 = 4;
    uStack_1c8 = SUB84(puVar6,0);
    func_0x000105280820(auStack_1b8,uVar8);
    puVar2 = puVar9;
    FUN_10893abf0(auStack_1a8);
    func_0x000108b7b318();
    func_0x000104be6a78();
    func_0x000108b7b344();
    do {
      func_0x000108b7b388();
      func_0x000108b7b3b8();
    } while (!(bool)in_ZR);
    func_0x000108b7b2e4(uStack_198);
    if ((bool)in_ZR) {
      return puVar2;
    }
    ___stack_chk_fail();
    puVar4 = auStack_1a8;
    do {
      func_0x00010b9a8d98();
      func_0x000108b7b3ec();
    } while (!(bool)in_ZR);
    func_0x000108b7b34c();
    uStack_210 = 0xffffffffffffffc0;
    pcStack_1f8 = FUN_108b7affc;
    puStack_208 = puVar2;
    ppppuStack_200 = &pppuStack_160;
    func_0x000108b7b2f8();
    uStack_218 = extraout_x8_02;
    func_0x000108b7b360();
    FUN_10893ac10();
    func_0x000108b7b318();
    func_0x000108b7b398();
    func_0x000108b7b344();
    func_0x000108b7b33c();
    func_0x000108b7b2e4(uStack_218);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000108b7b30c();
      func_0x000108b7b34c();
      uStack_260 = 0xffffffffffffffc0;
      pcStack_248 = FUN_108b7b058;
      puVar6 = puVar5;
      uStack_270 = uVar8;
      puStack_268 = puVar9;
      puStack_258 = puVar2;
      pppppuStack_250 = &ppppuStack_200;
      func_0x000108b7b2f8();
      uStack_278 = extraout_x8_03;
      func_0x000108b7b354();
      FUN_108b77cf8(auStack_288);
      func_0x000108b7b318();
      func_0x000108b7b3dc();
      func_0x000108b7b344();
      do {
        func_0x000108b7b388();
        func_0x000108b7b3b8();
      } while (!(bool)in_ZR);
      func_0x000108b7b2e4(uStack_278);
      if ((bool)in_ZR) {
        return puVar5;
      }
      ___stack_chk_fail();
      puVar4 = auStack_288;
      do {
        func_0x00010b9a8d98();
        func_0x000108b7b3ec();
      } while (!(bool)in_ZR);
      func_0x000108b7b34c();
      uStack_2d0 = 0xffffffffffffffe0;
      pcStack_2b8 = FUN_108b7b0ec;
      puStack_2c8 = puVar5;
      ppppppuStack_2c0 = &pppppuStack_250;
      func_0x000108b7b2f8();
      uStack_2d8 = extraout_x8_04;
      func_0x000108b7b360();
      FUN_108b7866c();
      func_0x000108b7b318();
      func_0x000108b7b398();
      func_0x000108b7b344();
      func_0x000108b7b33c();
      func_0x000108b7b2e4(uStack_2d8);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x000108b7b30c();
        func_0x000108b7b34c();
        uStack_320 = 0xffffffffffffffe0;
        pcStack_308 = FUN_108b7b148;
        puStack_318 = puVar5;
        ppppppuStack_310 = &ppppppuStack_2c0;
        func_0x000108b7b2f8();
        uStack_328 = extraout_x8_05;
        func_0x000108b7b360();
        FUN_10893ac94();
        func_0x000108b7b318();
        func_0x000108b7b398();
        func_0x000108b7b344();
        func_0x000108b7b33c();
        func_0x000108b7b2e4(uStack_328);
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x000108b7b30c();
          func_0x000108b7b34c();
          uStack_370 = 0xffffffffffffffe0;
          pcStack_358 = FUN_108b7b1a4;
          uStack_380 = uVar8;
          puStack_378 = auStack_298;
          puStack_368 = puVar5;
          ppppppuStack_360 = &ppppppuStack_310;
          func_0x000108b7b2f8();
          uStack_388 = extraout_x8_06;
          func_0x000108b7b360();
          FUN_108b7c71c();
          func_0x0001052808e4(auStack_398);
          func_0x000108b7b318();
          func_0x000108b7b3dc();
          func_0x000108b7b344();
          do {
            func_0x000108b7b388();
            func_0x000108b7b3b8();
          } while (!(bool)in_ZR);
          func_0x000108b7b2e4(uStack_388);
          if ((bool)in_ZR) {
            return puVar6;
          }
          ___stack_chk_fail();
          lVar10 = 0x10;
          do {
            puVar4 = (undefined4 *)((long)auStack_3a8 + lVar10);
            func_0x00010b9a8d98(puVar4);
            lVar10 = lVar10 + -0x10;
            uVar1 = lVar10 == -0x10;
          } while (!(bool)uVar1);
          func_0x000108b7b34c();
          func_0x000108b7b2f8();
          func_0x000108b7b360();
          FUN_108b80a1c();
          func_0x000108b7b318();
          func_0x000108b7b398();
          func_0x000108b7b344();
          func_0x000108b7b33c();
          func_0x000108b7b2e4(extraout_x8_07);
          if (!(bool)uVar1) {
            ___stack_chk_fail();
            func_0x000108b7b30c();
            func_0x000108b7b34c();
            func_0x000108b7b3d0();
            return puVar6;
          }
        }
      }
    }
  }
  return puVar4;
}



/* Entry: 108b7ae20; end: 108b7aebb;  */

undefined4 *
FUN_108b7ae20(undefined8 param_1,undefined1 param_2,undefined4 *param_3,undefined8 param_4,
             undefined4 *param_5)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  undefined8 extraout_x8_06;
  long lVar8;
  undefined4 auStack_308 [4];
  undefined1 auStack_2f8 [16];
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined1 *puStack_2d8;
  undefined8 uStack_2d0;
  undefined4 *puStack_2c8;
  undefined8 *****pppppuStack_2c0;
  code *pcStack_2b8;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined4 *puStack_278;
  undefined8 *****pppppuStack_270;
  code *pcStack_268;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined4 *puStack_228;
  undefined1 *****pppppuStack_220;
  code *pcStack_218;
  undefined1 auStack_1f8 [16];
  undefined4 auStack_1e8 [4];
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined4 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined4 *puStack_1b8;
  undefined1 ****ppppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined4 *puStack_168;
  undefined1 ***pppuStack_160;
  code *pcStack_158;
  undefined4 uStack_128;
  undefined2 uStack_120;
  undefined1 auStack_118 [16];
  undefined4 auStack_108 [4];
  undefined8 uStack_f8;
  undefined1 **ppuStack_c0;
  code *pcStack_b8;
  undefined1 auStack_a8 [16];
  undefined4 auStack_98 [2];
  undefined2 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 uStack_48;
  undefined2 uStack_40;
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  uStack_48 = param_2;
  func_0x000108b7b2f8();
  uStack_40 = 7;
  uStack_28 = extraout_x8;
  FUN_108b75534(auStack_38);
  func_0x000108b7b318();
  uVar7 = 1;
  func_0x000108b7b3dc();
  func_0x000108b7b344();
  do {
    func_0x000108b7b388();
    func_0x000108b7b3b8();
  } while (!(bool)in_ZR);
  func_0x000108b7b2e4(uStack_28);
  if ((bool)in_ZR) {
    return param_3;
  }
  ___stack_chk_fail();
  puVar2 = auStack_38;
  do {
    func_0x00010b9a8d98();
    func_0x000108b7b3ec();
    auStack_98[0] = (undefined4)uVar7;
  } while (!(bool)in_ZR);
  func_0x000108b7b34c();
  uStack_80 = 0xffffffffffffffe0;
  pcStack_68 = FUN_108b7aebc;
  uStack_88 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_90 = 4;
  puVar3 = (undefined4 *)(puVar2 + 8);
  puVar4 = auStack_98;
  puStack_78 = param_3;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x000108b7b398(auStack_a8,puVar3,2);
  func_0x000108b7b344();
  func_0x000108b7b33c();
  func_0x000108b7b2e4(uStack_88);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000108b7b30c();
    func_0x000108b7b34c();
    pcStack_b8 = FUN_108b7af24;
    puVar5 = puVar4;
    ppuStack_c0 = &puStack_70;
    func_0x000108b7b2f8();
    uStack_f8 = extraout_x8_00;
    func_0x000108b7b354();
    uStack_120 = 4;
    uStack_128 = SUB84(puVar4,0);
    func_0x000105280820(auStack_118,param_4);
    puVar4 = param_5;
    FUN_10893abf0(auStack_108);
    func_0x000108b7b318();
    func_0x000104be6a78();
    func_0x000108b7b344();
    do {
      func_0x000108b7b388();
      func_0x000108b7b3b8();
    } while (!(bool)in_ZR);
    func_0x000108b7b2e4(uStack_f8);
    if ((bool)in_ZR) {
      return puVar4;
    }
    ___stack_chk_fail();
    puVar3 = auStack_108;
    do {
      func_0x00010b9a8d98();
      func_0x000108b7b3ec();
    } while (!(bool)in_ZR);
    func_0x000108b7b34c();
    uStack_170 = 0xffffffffffffffc0;
    pcStack_158 = FUN_108b7affc;
    puStack_168 = puVar4;
    pppuStack_160 = &ppuStack_c0;
    func_0x000108b7b2f8();
    uStack_178 = extraout_x8_01;
    func_0x000108b7b360();
    FUN_10893ac10();
    func_0x000108b7b318();
    func_0x000108b7b398();
    func_0x000108b7b344();
    func_0x000108b7b33c();
    func_0x000108b7b2e4(uStack_178);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000108b7b30c();
      func_0x000108b7b34c();
      uStack_1c0 = 0xffffffffffffffc0;
      pcStack_1a8 = FUN_108b7b058;
      puVar6 = puVar5;
      uStack_1d0 = param_4;
      puStack_1c8 = param_5;
      puStack_1b8 = puVar4;
      ppppuStack_1b0 = &pppuStack_160;
      func_0x000108b7b2f8();
      uStack_1d8 = extraout_x8_02;
      func_0x000108b7b354();
      FUN_108b77cf8(auStack_1e8);
      func_0x000108b7b318();
      func_0x000108b7b3dc();
      func_0x000108b7b344();
      do {
        func_0x000108b7b388();
        func_0x000108b7b3b8();
      } while (!(bool)in_ZR);
      func_0x000108b7b2e4(uStack_1d8);
      if ((bool)in_ZR) {
        return puVar5;
      }
      ___stack_chk_fail();
      puVar3 = auStack_1e8;
      do {
        func_0x00010b9a8d98();
        func_0x000108b7b3ec();
      } while (!(bool)in_ZR);
      func_0x000108b7b34c();
      uStack_230 = 0xffffffffffffffe0;
      pcStack_218 = FUN_108b7b0ec;
      puStack_228 = puVar5;
      pppppuStack_220 = &ppppuStack_1b0;
      func_0x000108b7b2f8();
      uStack_238 = extraout_x8_03;
      func_0x000108b7b360();
      FUN_108b7866c();
      func_0x000108b7b318();
      func_0x000108b7b398();
      func_0x000108b7b344();
      func_0x000108b7b33c();
      func_0x000108b7b2e4(uStack_238);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x000108b7b30c();
        func_0x000108b7b34c();
        uStack_280 = 0xffffffffffffffe0;
        pcStack_268 = FUN_108b7b148;
        puStack_278 = puVar5;
        pppppuStack_270 = &pppppuStack_220;
        func_0x000108b7b2f8();
        uStack_288 = extraout_x8_04;
        func_0x000108b7b360();
        FUN_10893ac94();
        func_0x000108b7b318();
        func_0x000108b7b398();
        func_0x000108b7b344();
        func_0x000108b7b33c();
        func_0x000108b7b2e4(uStack_288);
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x000108b7b30c();
          func_0x000108b7b34c();
          uStack_2d0 = 0xffffffffffffffe0;
          pcStack_2b8 = FUN_108b7b1a4;
          uStack_2e0 = param_4;
          puStack_2d8 = auStack_1f8;
          puStack_2c8 = puVar5;
          pppppuStack_2c0 = &pppppuStack_270;
          func_0x000108b7b2f8();
          uStack_2e8 = extraout_x8_05;
          func_0x000108b7b360();
          FUN_108b7c71c();
          func_0x0001052808e4(auStack_2f8);
          func_0x000108b7b318();
          func_0x000108b7b3dc();
          func_0x000108b7b344();
          do {
            func_0x000108b7b388();
            func_0x000108b7b3b8();
          } while (!(bool)in_ZR);
          func_0x000108b7b2e4(uStack_2e8);
          if ((bool)in_ZR) {
            return puVar6;
          }
          ___stack_chk_fail();
          lVar8 = 0x10;
          do {
            puVar3 = (undefined4 *)((long)auStack_308 + lVar8);
            func_0x00010b9a8d98(puVar3);
            lVar8 = lVar8 + -0x10;
            uVar1 = lVar8 == -0x10;
          } while (!(bool)uVar1);
          func_0x000108b7b34c();
          func_0x000108b7b2f8();
          func_0x000108b7b360();
          FUN_108b80a1c();
          func_0x000108b7b318();
          func_0x000108b7b398();
          func_0x000108b7b344();
          func_0x000108b7b33c();
          func_0x000108b7b2e4(extraout_x8_06);
          if (!(bool)uVar1) {
            ___stack_chk_fail();
            func_0x000108b7b30c();
            func_0x000108b7b34c();
            func_0x000108b7b3d0();
            return puVar6;
          }
        }
      }
    }
  }
  return puVar3;
}



/* Entry: 108b7aebc; end: 108b7af23;  */

undefined4 *
FUN_108b7aebc(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  long lVar6;
  undefined4 auStack_2a8 [4];
  undefined1 auStack_298 [16];
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined1 *puStack_278;
  undefined8 uStack_270;
  undefined4 *puStack_268;
  undefined8 *****pppppuStack_260;
  code *pcStack_258;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined4 *puStack_218;
  undefined1 *****pppppuStack_210;
  code *pcStack_208;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined4 *puStack_1c8;
  undefined1 ****ppppuStack_1c0;
  code *pcStack_1b8;
  undefined1 auStack_198 [16];
  undefined4 auStack_188 [4];
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined4 *puStack_168;
  undefined8 uStack_160;
  undefined4 *puStack_158;
  undefined1 ***pppuStack_150;
  code *pcStack_148;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 *puStack_108;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  undefined4 uStack_c8;
  undefined2 uStack_c0;
  undefined1 auStack_b8 [16];
  undefined4 auStack_a8 [4];
  undefined8 uStack_98;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_48 [16];
  undefined4 auStack_38 [2];
  undefined2 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = 4;
  puVar2 = (undefined4 *)(param_1 + 8);
  puVar3 = auStack_38;
  auStack_38[0] = param_2;
  func_0x000108b7b398(auStack_48,puVar2,2);
  func_0x000108b7b344();
  func_0x000108b7b33c();
  func_0x000108b7b2e4(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000108b7b30c();
    func_0x000108b7b34c();
    pcStack_58 = FUN_108b7af24;
    puVar4 = puVar3;
    puStack_60 = &stack0xfffffffffffffff0;
    func_0x000108b7b2f8();
    uStack_98 = extraout_x8;
    func_0x000108b7b354();
    uStack_c0 = 4;
    uStack_c8 = SUB84(puVar3,0);
    func_0x000105280820(auStack_b8,param_4);
    puVar3 = param_5;
    FUN_10893abf0(auStack_a8);
    func_0x000108b7b318();
    func_0x000104be6a78();
    func_0x000108b7b344();
    do {
      func_0x000108b7b388();
      func_0x000108b7b3b8();
    } while (!(bool)in_ZR);
    func_0x000108b7b2e4(uStack_98);
    if ((bool)in_ZR) {
      return puVar3;
    }
    ___stack_chk_fail();
    puVar2 = auStack_a8;
    do {
      func_0x00010b9a8d98();
      func_0x000108b7b3ec();
    } while (!(bool)in_ZR);
    func_0x000108b7b34c();
    uStack_110 = 0xffffffffffffffc0;
    pcStack_f8 = FUN_108b7affc;
    puStack_108 = puVar3;
    ppuStack_100 = &puStack_60;
    func_0x000108b7b2f8();
    uStack_118 = extraout_x8_00;
    func_0x000108b7b360();
    FUN_10893ac10();
    func_0x000108b7b318();
    func_0x000108b7b398();
    func_0x000108b7b344();
    func_0x000108b7b33c();
    func_0x000108b7b2e4(uStack_118);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000108b7b30c();
      func_0x000108b7b34c();
      uStack_160 = 0xffffffffffffffc0;
      pcStack_148 = FUN_108b7b058;
      puVar5 = puVar4;
      uStack_170 = param_4;
      puStack_168 = param_5;
      puStack_158 = puVar3;
      pppuStack_150 = &ppuStack_100;
      func_0x000108b7b2f8();
      uStack_178 = extraout_x8_01;
      func_0x000108b7b354();
      FUN_108b77cf8(auStack_188);
      func_0x000108b7b318();
      func_0x000108b7b3dc();
      func_0x000108b7b344();
      do {
        func_0x000108b7b388();
        func_0x000108b7b3b8();
      } while (!(bool)in_ZR);
      func_0x000108b7b2e4(uStack_178);
      if ((bool)in_ZR) {
        return puVar4;
      }
      ___stack_chk_fail();
      puVar2 = auStack_188;
      do {
        func_0x00010b9a8d98();
        func_0x000108b7b3ec();
      } while (!(bool)in_ZR);
      func_0x000108b7b34c();
      uStack_1d0 = 0xffffffffffffffe0;
      pcStack_1b8 = FUN_108b7b0ec;
      puStack_1c8 = puVar4;
      ppppuStack_1c0 = &pppuStack_150;
      func_0x000108b7b2f8();
      uStack_1d8 = extraout_x8_02;
      func_0x000108b7b360();
      FUN_108b7866c();
      func_0x000108b7b318();
      func_0x000108b7b398();
      func_0x000108b7b344();
      func_0x000108b7b33c();
      func_0x000108b7b2e4(uStack_1d8);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x000108b7b30c();
        func_0x000108b7b34c();
        uStack_220 = 0xffffffffffffffe0;
        pcStack_208 = FUN_108b7b148;
        puStack_218 = puVar4;
        pppppuStack_210 = &ppppuStack_1c0;
        func_0x000108b7b2f8();
        uStack_228 = extraout_x8_03;
        func_0x000108b7b360();
        FUN_10893ac94();
        func_0x000108b7b318();
        func_0x000108b7b398();
        func_0x000108b7b344();
        func_0x000108b7b33c();
        func_0x000108b7b2e4(uStack_228);
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x000108b7b30c();
          func_0x000108b7b34c();
          uStack_270 = 0xffffffffffffffe0;
          pcStack_258 = FUN_108b7b1a4;
          uStack_280 = param_4;
          puStack_278 = auStack_198;
          puStack_268 = puVar4;
          pppppuStack_260 = &pppppuStack_210;
          func_0x000108b7b2f8();
          uStack_288 = extraout_x8_04;
          func_0x000108b7b360();
          FUN_108b7c71c();
          func_0x0001052808e4(auStack_298);
          func_0x000108b7b318();
          func_0x000108b7b3dc();
          func_0x000108b7b344();
          do {
            func_0x000108b7b388();
            func_0x000108b7b3b8();
          } while (!(bool)in_ZR);
          func_0x000108b7b2e4(uStack_288);
          if ((bool)in_ZR) {
            return puVar5;
          }
          ___stack_chk_fail();
          lVar6 = 0x10;
          do {
            puVar2 = (undefined4 *)((long)auStack_2a8 + lVar6);
            func_0x00010b9a8d98(puVar2);
            lVar6 = lVar6 + -0x10;
            uVar1 = lVar6 == -0x10;
          } while (!(bool)uVar1);
          func_0x000108b7b34c();
          func_0x000108b7b2f8();
          func_0x000108b7b360();
          FUN_108b80a1c();
          func_0x000108b7b318();
          func_0x000108b7b398();
          func_0x000108b7b344();
          func_0x000108b7b33c();
          func_0x000108b7b2e4(extraout_x8_05);
          if (!(bool)uVar1) {
            ___stack_chk_fail();
            func_0x000108b7b30c();
            func_0x000108b7b34c();
            func_0x000108b7b3d0();
            return puVar5;
          }
        }
      }
    }
  }
  return puVar2;
}



/* Entry: 108b7af24; end: 108b7affb;  */

undefined1 *
FUN_108b7af24(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  long lVar6;
  undefined1 auStack_258 [16];
  undefined1 auStack_248 [16];
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined8 uStack_220;
  undefined1 *puStack_218;
  undefined8 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 *puStack_1c8;
  undefined8 ***pppuStack_1c0;
  code *pcStack_1b8;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 *puStack_178;
  undefined1 ***pppuStack_170;
  code *pcStack_168;
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [16];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 *puStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined4 uStack_78;
  undefined2 uStack_70;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  
  puVar4 = param_3;
  func_0x000108b7b2f8();
  uStack_48 = extraout_x8;
  func_0x000108b7b354();
  uStack_70 = 4;
  uStack_78 = SUB84(param_3,0);
  func_0x000105280820(auStack_68,param_4);
  puVar2 = param_5;
  FUN_10893abf0(auStack_58);
  func_0x000108b7b318();
  func_0x000104be6a78();
  func_0x000108b7b344();
  do {
    func_0x000108b7b388();
    func_0x000108b7b3b8();
  } while (!(bool)in_ZR);
  func_0x000108b7b2e4(uStack_48);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_58;
  do {
    func_0x00010b9a8d98();
    func_0x000108b7b3ec();
  } while (!(bool)in_ZR);
  func_0x000108b7b34c();
  uStack_c0 = 0xffffffffffffffc0;
  pcStack_a8 = FUN_108b7affc;
  puStack_b8 = puVar2;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000108b7b2f8();
  uStack_c8 = extraout_x8_00;
  func_0x000108b7b360();
  FUN_10893ac10();
  func_0x000108b7b318();
  func_0x000108b7b398();
  func_0x000108b7b344();
  func_0x000108b7b33c();
  func_0x000108b7b2e4(uStack_c8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000108b7b30c();
    func_0x000108b7b34c();
    uStack_110 = 0xffffffffffffffc0;
    pcStack_f8 = FUN_108b7b058;
    puVar5 = puVar4;
    uStack_120 = param_4;
    puStack_118 = param_5;
    puStack_108 = puVar2;
    ppuStack_100 = &puStack_b0;
    func_0x000108b7b2f8();
    uStack_128 = extraout_x8_01;
    func_0x000108b7b354();
    FUN_108b77cf8(auStack_138);
    func_0x000108b7b318();
    func_0x000108b7b3dc();
    func_0x000108b7b344();
    do {
      func_0x000108b7b388();
      func_0x000108b7b3b8();
    } while (!(bool)in_ZR);
    func_0x000108b7b2e4(uStack_128);
    if ((bool)in_ZR) {
      return puVar4;
    }
    ___stack_chk_fail();
    puVar3 = auStack_138;
    do {
      func_0x00010b9a8d98();
      func_0x000108b7b3ec();
    } while (!(bool)in_ZR);
    func_0x000108b7b34c();
    uStack_180 = 0xffffffffffffffe0;
    pcStack_168 = FUN_108b7b0ec;
    puStack_178 = puVar4;
    pppuStack_170 = &ppuStack_100;
    func_0x000108b7b2f8();
    uStack_188 = extraout_x8_02;
    func_0x000108b7b360();
    FUN_108b7866c();
    func_0x000108b7b318();
    func_0x000108b7b398();
    func_0x000108b7b344();
    func_0x000108b7b33c();
    func_0x000108b7b2e4(uStack_188);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000108b7b30c();
      func_0x000108b7b34c();
      uStack_1d0 = 0xffffffffffffffe0;
      pcStack_1b8 = FUN_108b7b148;
      puStack_1c8 = puVar4;
      pppuStack_1c0 = &pppuStack_170;
      func_0x000108b7b2f8();
      uStack_1d8 = extraout_x8_03;
      func_0x000108b7b360();
      FUN_10893ac94();
      func_0x000108b7b318();
      func_0x000108b7b398();
      func_0x000108b7b344();
      func_0x000108b7b33c();
      func_0x000108b7b2e4(uStack_1d8);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x000108b7b30c();
        func_0x000108b7b34c();
        uStack_220 = 0xffffffffffffffe0;
        pcStack_208 = FUN_108b7b1a4;
        uStack_230 = param_4;
        puStack_228 = auStack_148;
        puStack_218 = puVar4;
        pppuStack_210 = &pppuStack_1c0;
        func_0x000108b7b2f8();
        uStack_238 = extraout_x8_04;
        func_0x000108b7b360();
        FUN_108b7c71c();
        func_0x0001052808e4(auStack_248);
        func_0x000108b7b318();
        func_0x000108b7b3dc();
        func_0x000108b7b344();
        do {
          func_0x000108b7b388();
          func_0x000108b7b3b8();
        } while (!(bool)in_ZR);
        func_0x000108b7b2e4(uStack_238);
        if ((bool)in_ZR) {
          return puVar5;
        }
        ___stack_chk_fail();
        lVar6 = 0x10;
        do {
          puVar3 = auStack_258 + lVar6;
          func_0x00010b9a8d98(puVar3);
          lVar6 = lVar6 + -0x10;
          uVar1 = lVar6 == -0x10;
        } while (!(bool)uVar1);
        func_0x000108b7b34c();
        func_0x000108b7b2f8();
        func_0x000108b7b360();
        FUN_108b80a1c();
        func_0x000108b7b318();
        func_0x000108b7b398();
        func_0x000108b7b344();
        func_0x000108b7b33c();
        func_0x000108b7b2e4(extraout_x8_05);
        if (!(bool)uVar1) {
          ___stack_chk_fail();
          func_0x000108b7b30c();
          func_0x000108b7b34c();
          func_0x000108b7b3d0();
          return puVar5;
        }
      }
    }
  }
  return puVar3;
}



/* Entry: 108b7affc; end: 108b7b057;  */

undefined1 * FUN_108b7affc(undefined1 *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  long lVar3;
  undefined1 auStack_1b8 [16];
  undefined1 auStack_1a8 [16];
  undefined8 uStack_198;
  undefined1 auStack_98 [16];
  undefined8 uStack_88;
  
  func_0x000108b7b2f8();
  func_0x000108b7b360();
  FUN_10893ac10();
  func_0x000108b7b318();
  func_0x000108b7b398();
  func_0x000108b7b344();
  func_0x000108b7b33c();
  func_0x000108b7b2e4(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000108b7b30c();
    func_0x000108b7b34c();
    puVar2 = param_3;
    func_0x000108b7b2f8();
    uStack_88 = extraout_x8_00;
    func_0x000108b7b354();
    FUN_108b77cf8(auStack_98);
    func_0x000108b7b318();
    func_0x000108b7b3dc();
    func_0x000108b7b344();
    do {
      func_0x000108b7b388();
      func_0x000108b7b3b8();
    } while (!(bool)in_ZR);
    func_0x000108b7b2e4(uStack_88);
    if ((bool)in_ZR) {
      return param_3;
    }
    ___stack_chk_fail();
    param_1 = auStack_98;
    do {
      func_0x00010b9a8d98();
      func_0x000108b7b3ec();
    } while (!(bool)in_ZR);
    func_0x000108b7b34c();
    func_0x000108b7b2f8();
    func_0x000108b7b360();
    FUN_108b7866c();
    func_0x000108b7b318();
    func_0x000108b7b398();
    func_0x000108b7b344();
    func_0x000108b7b33c();
    func_0x000108b7b2e4(extraout_x8_01);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000108b7b30c();
      func_0x000108b7b34c();
      func_0x000108b7b2f8();
      func_0x000108b7b360();
      FUN_10893ac94();
      func_0x000108b7b318();
      func_0x000108b7b398();
      func_0x000108b7b344();
      func_0x000108b7b33c();
      func_0x000108b7b2e4(extraout_x8_02);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x000108b7b30c();
        func_0x000108b7b34c();
        func_0x000108b7b2f8();
        uStack_198 = extraout_x8_03;
        func_0x000108b7b360();
        FUN_108b7c71c();
        func_0x0001052808e4(auStack_1a8);
        func_0x000108b7b318();
        func_0x000108b7b3dc();
        func_0x000108b7b344();
        do {
          func_0x000108b7b388();
          func_0x000108b7b3b8();
        } while (!(bool)in_ZR);
        func_0x000108b7b2e4(uStack_198);
        if ((bool)in_ZR) {
          return puVar2;
        }
        ___stack_chk_fail();
        lVar3 = 0x10;
        do {
          param_1 = auStack_1b8 + lVar3;
          func_0x00010b9a8d98(param_1);
          lVar3 = lVar3 + -0x10;
          uVar1 = lVar3 == -0x10;
        } while (!(bool)uVar1);
        func_0x000108b7b34c();
        func_0x000108b7b2f8();
        func_0x000108b7b360();
        FUN_108b80a1c();
        func_0x000108b7b318();
        func_0x000108b7b398();
        func_0x000108b7b344();
        func_0x000108b7b33c();
        func_0x000108b7b2e4(extraout_x8_04);
        if (!(bool)uVar1) {
          ___stack_chk_fail();
          func_0x000108b7b30c();
          func_0x000108b7b34c();
          func_0x000108b7b3d0();
          return puVar2;
        }
      }
    }
  }
  return param_1;
}



/* Entry: 108b7b058; end: 108b7b0eb;  */

undefined1 * FUN_108b7b058(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  long lVar4;
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  undefined8 uStack_148;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  puVar3 = param_3;
  func_0x000108b7b2f8();
  uStack_38 = extraout_x8;
  func_0x000108b7b354();
  FUN_108b77cf8(auStack_48);
  func_0x000108b7b318();
  func_0x000108b7b3dc();
  func_0x000108b7b344();
  do {
    func_0x000108b7b388();
    func_0x000108b7b3b8();
  } while (!(bool)in_ZR);
  func_0x000108b7b2e4(uStack_38);
  if ((bool)in_ZR) {
    return param_3;
  }
  ___stack_chk_fail();
  puVar2 = auStack_48;
  do {
    func_0x00010b9a8d98();
    func_0x000108b7b3ec();
  } while (!(bool)in_ZR);
  func_0x000108b7b34c();
  func_0x000108b7b2f8();
  func_0x000108b7b360();
  FUN_108b7866c();
  func_0x000108b7b318();
  func_0x000108b7b398();
  func_0x000108b7b344();
  func_0x000108b7b33c();
  func_0x000108b7b2e4(extraout_x8_00);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000108b7b30c();
    func_0x000108b7b34c();
    func_0x000108b7b2f8();
    func_0x000108b7b360();
    FUN_10893ac94();
    func_0x000108b7b318();
    func_0x000108b7b398();
    func_0x000108b7b344();
    func_0x000108b7b33c();
    func_0x000108b7b2e4(extraout_x8_01);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000108b7b30c();
      func_0x000108b7b34c();
      func_0x000108b7b2f8();
      uStack_148 = extraout_x8_02;
      func_0x000108b7b360();
      FUN_108b7c71c();
      func_0x0001052808e4(auStack_158);
      func_0x000108b7b318();
      func_0x000108b7b3dc();
      func_0x000108b7b344();
      do {
        func_0x000108b7b388();
        func_0x000108b7b3b8();
      } while (!(bool)in_ZR);
      func_0x000108b7b2e4(uStack_148);
      if ((bool)in_ZR) {
        return puVar3;
      }
      ___stack_chk_fail();
      lVar4 = 0x10;
      do {
        puVar2 = auStack_168 + lVar4;
        func_0x00010b9a8d98(puVar2);
        lVar4 = lVar4 + -0x10;
        uVar1 = lVar4 == -0x10;
      } while (!(bool)uVar1);
      func_0x000108b7b34c();
      func_0x000108b7b2f8();
      func_0x000108b7b360();
      FUN_108b80a1c();
      func_0x000108b7b318();
      func_0x000108b7b398();
      func_0x000108b7b344();
      func_0x000108b7b33c();
      func_0x000108b7b2e4(extraout_x8_03);
      if (!(bool)uVar1) {
        ___stack_chk_fail();
        func_0x000108b7b30c();
        func_0x000108b7b34c();
        func_0x000108b7b3d0();
        return puVar3;
      }
    }
  }
  return puVar2;
}



/* Entry: 108b7b0ec; end: 108b7b147;  */

undefined1 * FUN_108b7b0ec(undefined1 *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  long lVar2;
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined8 uStack_d8;
  
  func_0x000108b7b2f8();
  func_0x000108b7b360();
  FUN_108b7866c();
  func_0x000108b7b318();
  func_0x000108b7b398();
  func_0x000108b7b344();
  func_0x000108b7b33c();
  func_0x000108b7b2e4(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000108b7b30c();
    func_0x000108b7b34c();
    func_0x000108b7b2f8();
    func_0x000108b7b360();
    FUN_10893ac94();
    func_0x000108b7b318();
    func_0x000108b7b398();
    func_0x000108b7b344();
    func_0x000108b7b33c();
    func_0x000108b7b2e4(extraout_x8_00);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000108b7b30c();
      func_0x000108b7b34c();
      func_0x000108b7b2f8();
      uStack_d8 = extraout_x8_01;
      func_0x000108b7b360();
      FUN_108b7c71c();
      func_0x0001052808e4(auStack_e8);
      func_0x000108b7b318();
      func_0x000108b7b3dc();
      func_0x000108b7b344();
      do {
        func_0x000108b7b388();
        func_0x000108b7b3b8();
      } while (!(bool)in_ZR);
      func_0x000108b7b2e4(uStack_d8);
      if ((bool)in_ZR) {
        return param_3;
      }
      ___stack_chk_fail();
      lVar2 = 0x10;
      do {
        param_1 = auStack_f8 + lVar2;
        func_0x00010b9a8d98(param_1);
        lVar2 = lVar2 + -0x10;
        uVar1 = lVar2 == -0x10;
      } while (!(bool)uVar1);
      func_0x000108b7b34c();
      func_0x000108b7b2f8();
      func_0x000108b7b360();
      FUN_108b80a1c();
      func_0x000108b7b318();
      func_0x000108b7b398();
      func_0x000108b7b344();
      func_0x000108b7b33c();
      func_0x000108b7b2e4(extraout_x8_02);
      if (!(bool)uVar1) {
        ___stack_chk_fail();
        func_0x000108b7b30c();
        func_0x000108b7b34c();
        func_0x000108b7b3d0();
        return param_3;
      }
    }
  }
  return param_1;
}



/* Entry: 108b7b148; end: 108b7b1a3;  */

undefined1 * FUN_108b7b148(undefined1 *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long lVar2;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined8 uStack_88;
  
  func_0x000108b7b2f8();
  func_0x000108b7b360();
  FUN_10893ac94();
  func_0x000108b7b318();
  func_0x000108b7b398();
  func_0x000108b7b344();
  func_0x000108b7b33c();
  func_0x000108b7b2e4(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000108b7b30c();
    func_0x000108b7b34c();
    func_0x000108b7b2f8();
    uStack_88 = extraout_x8_00;
    func_0x000108b7b360();
    FUN_108b7c71c();
    func_0x0001052808e4(auStack_98);
    func_0x000108b7b318();
    func_0x000108b7b3dc();
    func_0x000108b7b344();
    do {
      func_0x000108b7b388();
      func_0x000108b7b3b8();
    } while (!(bool)in_ZR);
    func_0x000108b7b2e4(uStack_88);
    if ((bool)in_ZR) {
      return param_3;
    }
    ___stack_chk_fail();
    lVar2 = 0x10;
    do {
      param_1 = auStack_a8 + lVar2;
      func_0x00010b9a8d98(param_1);
      lVar2 = lVar2 + -0x10;
      uVar1 = lVar2 == -0x10;
    } while (!(bool)uVar1);
    func_0x000108b7b34c();
    func_0x000108b7b2f8();
    func_0x000108b7b360();
    FUN_108b80a1c();
    func_0x000108b7b318();
    func_0x000108b7b398();
    func_0x000108b7b344();
    func_0x000108b7b33c();
    func_0x000108b7b2e4(extraout_x8_01);
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      func_0x000108b7b30c();
      func_0x000108b7b34c();
      func_0x000108b7b3d0();
      return param_3;
    }
  }
  return param_1;
}



/* Entry: 108b7b1a4; end: 108b7b243;  */

undefined1 * FUN_108b7b1a4(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar3;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000108b7b2f8();
  uStack_38 = extraout_x8;
  func_0x000108b7b360();
  FUN_108b7c71c();
  func_0x0001052808e4(auStack_48);
  func_0x000108b7b318();
  func_0x000108b7b3dc();
  func_0x000108b7b344();
  do {
    func_0x000108b7b388();
    func_0x000108b7b3b8();
  } while (!(bool)in_ZR);
  func_0x000108b7b2e4(uStack_38);
  if ((bool)in_ZR) {
    return param_3;
  }
  ___stack_chk_fail();
  lVar3 = 0x10;
  do {
    puVar2 = auStack_58 + lVar3;
    func_0x00010b9a8d98(puVar2);
    lVar3 = lVar3 + -0x10;
    uVar1 = lVar3 == -0x10;
  } while (!(bool)uVar1);
  func_0x000108b7b34c();
  func_0x000108b7b2f8();
  func_0x000108b7b360();
  FUN_108b80a1c();
  func_0x000108b7b318();
  func_0x000108b7b398();
  func_0x000108b7b344();
  func_0x000108b7b33c();
  func_0x000108b7b2e4(extraout_x8_00);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000108b7b30c();
  func_0x000108b7b34c();
  func_0x000108b7b3d0();
  return param_3;
}



/* Entry: 108b7b244; end: 108b7b297;  */

void FUN_108b7b244(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  
  func_0x000108b7b2f8();
  func_0x000108b7b360();
  FUN_108b80a1c();
  func_0x000108b7b318();
  func_0x000108b7b398();
  func_0x000108b7b344();
  func_0x000108b7b33c();
  func_0x000108b7b2e4(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000108b7b30c();
  func_0x000108b7b34c();
  func_0x000108b7b3d0();
  return;
}



/* Entry: 108b7b298; end: 108b7b2d7;  */

void FUN_108b7b298(void)

{
  func_0x000108b7b3d0();
  return;
}



/* Entry: 108b7b2d8; end: 108b7b3f7;  */

undefined8 * FUN_108b7b2d8(undefined8 *param_1)

{
  undefined4 uStack_24;
  
  *param_1 = &PTR_DAT_1107e7df0;
  __ZNSt3__15mutex4lockEv(0x11328ad68);
  uStack_24 = *(undefined4 *)(param_1[1] + 0x18);
  func_0x000104be7ab4(0x11328ad18,&uStack_24);
  __ZNSt3__15mutex6unlockEv(0x11328ad68);
  func_0x000104be7d74(param_1 + 5);
  func_0x000104be7db4(param_1 + 2);
  func_0x000104be7e54(param_1 + 1);
  return param_1;
}



/* Entry: 108b7b3f8; end: 108b7b5a3;  */

void FUN_108b7b3f8(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_220 [56];
  undefined1 auStack_1e8 [216];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [112];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  long lStack_58;
  
  func_0x00010b9a97d0(&lStack_58);
  lVar4 = lStack_58 + 0x18;
  func_0x00010b9a9608(lVar4);
  lVar5 = lStack_58 + 0x28;
  func_0x00010b9a9608(lVar5);
  func_0x000104bdbf60(auStack_70,lStack_58 + 0x38);
  func_0x000104bdbf60(auStack_88,lStack_58 + 0x48);
  FUN_108b76714(auStack_f8,lStack_58 + 0x58);
  FUN_108b7b5a4(auStack_110,lStack_58 + 0x68);
  FUN_108b78b0c(auStack_1e8,lStack_58 + 0x78);
  FUN_108b7480c(auStack_220,lStack_58 + 0x88);
  iVar1 = (int)lStack_58 + 0x98;
  func_0x00010b9a9518();
  iVar2 = (int)lStack_58 + 0xa8;
  func_0x00010b9a9518();
  iVar3 = (int)lStack_58 + 0xb8;
  func_0x00010b9a9518();
  FUN_108b7b994(param_1,lVar4,lVar5,auStack_70,auStack_88,auStack_f8,auStack_110,auStack_1e8,
                auStack_220,iVar1,iVar2,iVar3);
  func_0x0001089396bc(auStack_220);
  func_0x0001089396e4(auStack_1e8);
  FUN_1089397b0(auStack_110);
  FUN_108939864(auStack_f8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
  func_0x000104bdbf78(&lStack_58);
  return;
}



/* Entry: 108b7b5a4; end: 108b7b66b;  */

void FUN_108b7b5a4(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (((char)param_2[1] == '\t') && (lVar2 = *param_2, lVar2 != 0)) {
    FUN_108b7bbac(param_1,*(undefined8 *)(lVar2 + 0x10));
    lVar1 = lVar2 + 0x18;
    for (uVar3 = 0; uVar3 < *(ulong *)(lVar2 + 0x10); uVar3 = uVar3 + 1) {
      FUN_108b76558(auStack_60,lVar1);
      func_0x000108b7bec0(param_1,auStack_60);
      func_0x000107c27914(auStack_58);
      lVar1 = lVar1 + 0x10;
    }
  }
  return;
}



/* Entry: 108b7b66c; end: 108b7b993;  */

undefined8 FUN_108b7b66c(void)

{
  int iVar1;
  undefined *puVar2;
  undefined1 *unaff_x19;
  long lVar3;
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
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
  undefined1 auStack_e0 [48];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam000000011372d790 & 1) == 0) {
    iVar1 = 0x1372d790;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(auStack_148,&UNK_10f501e7a);
      puVar2 = &DAT_10f3589e7;
      func_0x000107c31088(auStack_150,&DAT_10f3589e7);
      func_0x000104bef4f0();
      func_0x000107c27e98(auStack_140,auStack_150,puVar2);
      puVar2 = &DAT_10f501ea2;
      func_0x000107c31088(auStack_158,&DAT_10f501ea2);
      func_0x000104bef4f0();
      func_0x000107c27e98(auStack_128,auStack_158,puVar2);
      puVar2 = &DAT_10f2f77e1;
      func_0x000107c31088(auStack_160,&DAT_10f2f77e1);
      func_0x000104bdbd7c();
      func_0x000107c27e98(auStack_110,auStack_160,puVar2);
      puVar2 = &UNK_10f501eac;
      func_0x000107c31088(auStack_168,&UNK_10f501eac);
      func_0x000104bdbd7c();
      func_0x000107c27e98(auStack_f8,auStack_168,puVar2);
      unaff_x19 = auStack_140;
      puVar2 = &UNK_10f501ebf;
      func_0x000107c31088(auStack_170,&UNK_10f501ebf);
      FUN_108b76820();
      func_0x000107c27e98(auStack_e0,auStack_170,puVar2);
      func_0x000107c31088(auStack_178,&UNK_10f501ed5);
      if ((bRam000000011372d798 & 1) == 0) goto LAB_108b7b954;
      goto LAB_108b7b7d4;
    }
  }
  while (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
LAB_108b7b954:
    iVar1 = 0x1372d798;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_108b765d0();
      func_0x00010b990868(0x11372d7b0);
      ___cxa_guard_release(0x11372d798);
    }
LAB_108b7b7d4:
    func_0x000107c27e98(unaff_x19 + 0x78,auStack_178,0x11372d7b0);
    puVar2 = &UNK_10f501eee;
    func_0x000107c31088(auStack_180,&UNK_10f501eee);
    FUN_108b78dc8();
    func_0x000107c27e98(auStack_b0,auStack_180,puVar2);
    puVar2 = &DAT_10f366df7;
    func_0x000107c31088(auStack_188,&DAT_10f366df7);
    FUN_108b748b4();
    func_0x000107c27e98(auStack_98,auStack_188,puVar2);
    puVar2 = &UNK_10f501eff;
    func_0x000107c31088(auStack_190,&UNK_10f501eff);
    func_0x000104bef760();
    func_0x000107c27e98(auStack_80,auStack_190,puVar2);
    puVar2 = &UNK_10f501f14;
    func_0x000107c31088(auStack_198,&UNK_10f501f14);
    FUN_108b7a140();
    func_0x000107c27e98(auStack_68,auStack_198,puVar2);
    puVar2 = &UNK_10f501f25;
    func_0x000107c31088(auStack_1a0,&UNK_10f501f25);
    FUN_108b7a198();
    func_0x000107c27e98(auStack_50,auStack_1a0,puVar2);
    unaff_x19 = auStack_140;
    func_0x000104bdbd44(0x11372d7a0,auStack_148,0,auStack_140,0xb);
    lVar3 = 0xf0;
    do {
      func_0x000107c27924(unaff_x19 + lVar3);
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x18);
    func_0x000107c278f4(auStack_1a0);
    func_0x000107c278f4(auStack_198);
    func_0x000107c278f4(auStack_190);
    func_0x000107c278f4(auStack_188);
    func_0x000107c278f4(auStack_180);
    func_0x000107c278f4(auStack_178);
    func_0x000107c278f4(auStack_170);
    func_0x000107c278f4(auStack_168);
    func_0x000107c278f4(auStack_160);
    func_0x000107c278f4(auStack_158);
    func_0x000107c278f4(auStack_150);
    func_0x000107c278f4(auStack_148);
    ___cxa_guard_release(0x11372d790);
  }
  return 0x11372d7a0;
}



/* Entry: 108b7b994; end: 108b7ba87;  */

undefined1 *
FUN_108b7b994(undefined1 *param_1,undefined1 param_2,undefined1 param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8,
             undefined4 *param_9,undefined8 param_10,undefined4 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  uVar2 = param_4[1];
  uVar1 = *param_4;
  *(undefined8 *)(param_1 + 0x18) = param_4[2];
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 8) = uVar1;
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  uVar2 = param_5[1];
  uVar1 = *param_5;
  *(undefined8 *)(param_1 + 0x30) = param_5[2];
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  param_5[1] = 0;
  param_5[2] = 0;
  *param_5 = 0;
  FUN_108b7ba88(param_1 + 0x38,param_6);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  uVar1 = *param_7;
  *(undefined8 *)(param_1 + 0xb0) = param_7[1];
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  *(undefined8 *)(param_1 + 0xb8) = param_7[2];
  *param_7 = 0;
  param_7[1] = 0;
  param_7[2] = 0;
  func_0x000108b7baec(param_1 + 0xc0,param_8);
  *(undefined4 *)(param_1 + 0x198) = *param_9;
  uVar2 = *(undefined8 *)(param_9 + 4);
  uVar1 = *(undefined8 *)(param_9 + 2);
  *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_9 + 6);
  *(undefined8 *)(param_1 + 0x1a8) = uVar2;
  *(undefined8 *)(param_1 + 0x1a0) = uVar1;
  *(undefined8 *)(param_9 + 4) = 0;
  *(undefined8 *)(param_9 + 6) = 0;
  *(undefined8 *)(param_9 + 2) = 0;
  uVar2 = *(undefined8 *)(param_9 + 10);
  uVar1 = *(undefined8 *)(param_9 + 8);
  *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_9 + 0xc);
  *(undefined8 *)(param_1 + 0x1c0) = uVar2;
  *(undefined8 *)(param_1 + 0x1b8) = uVar1;
  *(undefined8 *)(param_9 + 10) = 0;
  *(undefined8 *)(param_9 + 0xc) = 0;
  *(undefined8 *)(param_9 + 8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = param_10;
  *(undefined4 *)(param_1 + 0x1d8) = param_11;
  return param_1;
}



/* Entry: 108b7ba88; end: 108b7bbab;  */

void FUN_108b7ba88(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000108b7c018();
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  FUN_108b76a78(param_1 + 2,param_2 + 2);
  *(undefined1 *)(unaff_x20 + 0x40) = *(undefined1 *)(unaff_x19 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x58) = *(undefined8 *)(unaff_x19 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x50) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x48) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x50) = 0;
  *(undefined8 *)(unaff_x19 + 0x58) = 0;
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
  *(undefined4 *)(unaff_x20 + 0x60) = *(undefined4 *)(unaff_x19 + 0x60);
  *(undefined1 *)(unaff_x20 + 0x68) = *(undefined1 *)(unaff_x19 + 0x68);
  return;
}



/* Entry: 108b7bbac; end: 108b7bc1b;  */

void FUN_108b7bbac(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long *unaff_x20;
  undefined1 auStack_48 [40];
  
  if ((ulong)(param_1[2] - *param_1 >> 5) < param_2) {
    if (param_2 >> 0x3b != 0) {
      FUN_108b7bc1c();
      func_0x000108b7bffc();
      func_0x000108b7c010();
      plVar1 = (long *)&UNK_10f501f32;
      func_0x000104bd47e8();
      func_0x000108b7c018();
      lVar2 = *(long *)(param_2 + 8) + (*plVar1 - plVar1[1]);
      FUN_108b7bd34(plVar1 + 2,*plVar1,plVar1[1],lVar2);
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
    FUN_108b7bcac(auStack_48,param_2,param_1[1] - *param_1 >> 5);
    func_0x000108b7c004();
    func_0x000108b7bffc();
  }
  return;
}



/* Entry: 108b7bc1c; end: 108b7bc2f;  */

void FUN_108b7bc1c(undefined8 param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  plVar2 = (long *)&UNK_10f501f32;
  func_0x000104bd47e8();
  func_0x000108b7c018();
  lVar1 = *(long *)(param_2 + 8) + (*plVar2 - plVar2[1]);
  FUN_108b7bd34(plVar2 + 2,*plVar2,plVar2[1],lVar1);
  unaff_x19[1] = lVar1;
  uVar3 = *unaff_x20;
  unaff_x20[1] = uVar3;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar3;
  uVar3 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar3;
  uVar3 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar3;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 108b7bc30; end: 108b7bcab;  */

void FUN_108b7bc30(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x000108b7c018();
  lVar1 = *(long *)(param_2 + 8) + (*param_1 - param_1[1]);
  FUN_108b7bd34(param_1 + 2,*param_1,param_1[1],lVar1);
  unaff_x19[1] = lVar1;
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



/* Entry: 108b7bcac; end: 108b7bd17;  */

long * FUN_108b7bcac(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000108b7bcf4();
  }
  lVar1 = param_4 + param_3 * 0x20;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x20;
  return param_1;
}



/* Entry: 108b7bd18; end: 108b7bd33;  */

void FUN_108b7bd18(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 5);
    return;
  }
  func_0x000104bd35f4();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (uVar1 = param_2; lStack_48 = param_4, uVar1 != param_3; uVar1 = uVar1 + 0x20) {
    FUN_108b7bdcc(param_4,uVar1);
    param_4 = lStack_48 + 0x20;
  }
  uStack_58 = 1;
  for (; param_2 != param_3; param_2 = param_2 + 0x20) {
    func_0x000107c27914(param_2 + 8);
  }
  FUN_108b7bdf8(&uStack_70);
  return;
}



/* Entry: 108b7bd34; end: 108b7bdcb;  */

void FUN_108b7bd34(undefined8 param_1,long param_2,long param_3,long param_4)

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
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x20) {
    FUN_108b7bdcc(param_4,lVar1);
    param_4 = lStack_38 + 0x20;
  }
  uStack_48 = 1;
  for (; param_2 != param_3; param_2 = param_2 + 0x20) {
    func_0x000107c27914(param_2 + 8);
  }
  FUN_108b7bdf8(&uStack_60);
  return;
}



/* Entry: 108b7bdcc; end: 108b7bdf7;  */

void FUN_108b7bdcc(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  uVar1 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  return;
}



/* Entry: 108b7bdf8; end: 108b7be4f;  */

long FUN_108b7bdf8(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != lVar2; lVar1 = lVar1 + -0x20) {
      func_0x000107c27914(lVar1 + -0x18);
    }
  }
  return param_1;
}



/* Entry: 108b7be50; end: 108b7be7b;  */

long * FUN_108b7be50(long *param_1)

{
  FUN_108b7be7c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108b7be7c; end: 108b7be83;  */

void FUN_108b7be7c(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108b7c018(param_1,*(undefined8 *)(param_1 + 8));
  while (lVar1 = *(long *)(unaff_x20 + 0x10), unaff_x19 != lVar1) {
    *(long *)(unaff_x20 + 0x10) = lVar1 + -0x20;
    func_0x000107c27914(lVar1 + -0x18);
  }
  return;
}



/* Entry: 108b7be84; end: 108b7bf27;  */

void FUN_108b7be84(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108b7c018();
  while (lVar1 = *(long *)(unaff_x20 + 0x10), unaff_x19 != lVar1) {
    *(long *)(unaff_x20 + 0x10) = lVar1 + -0x20;
    func_0x000107c27914(lVar1 + -0x18);
  }
  return;
}



/* Entry: 108b7bf28; end: 108b7bfb3;  */

long FUN_108b7bf28(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  plVar1 = param_1;
  FUN_108b7bfb4(param_1,(param_1[1] - *param_1 >> 5) + 1);
  FUN_108b7bcac(auStack_48,plVar1,param_1[1] - *param_1 >> 5,param_1 + 2);
  FUN_108b7bdcc(lStack_38,param_2);
  lStack_38 = lStack_38 + 0x20;
  func_0x000108b7c004();
  lVar2 = param_1[1];
  func_0x000108b7bffc();
  return lVar2;
}



/* Entry: 108b7bfb4; end: 108b7bff3;  */

long * FUN_108b7bfb4(long *param_1,long *param_2)

{
  long *plVar1;
  
  if ((ulong)param_2 >> 0x3b == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 4);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7fffffffffffffdf < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0x7ffffffffffffff;
    }
    return plVar1;
  }
  FUN_108b7bc1c();
  return param_1;
}



/* Entry: 108b7bff4; end: 108b7c023;  */

void FUN_108b7bff4(void)

{
  return;
}



/* Entry: 108b7c024; end: 108b7c15b;  */

void FUN_108b7c024(ulong param_1)

{
  byte bVar1;
  int iVar2;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [16];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x1138284f8);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x1138284f8) = 1;
  if ((bVar1 & 1) != 0) goto LAB_108b7c07c;
  if ((bRam0000000113828528 & 1) == 0) goto LAB_108b7c0a8;
  while( true ) {
    FUN_108b80888(0x113828518);
LAB_108b7c07c:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) break;
    ___stack_chk_fail();
LAB_108b7c0a8:
    iVar2 = 0x13828528;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_108b7c1f8();
      func_0x000107c31088(&uStack_48,&UNK_10f501f39);
      FUN_108b7b66c();
      func_0x000104bdbd48(auStack_58);
      uStack_40 = uStack_48;
      uStack_48 = 0;
      func_0x000107c30f40(auStack_38,auStack_58);
      func_0x000104bdbd44(0x113828518,0x113828530,1,&uStack_40,1);
      func_0x000107c27924(&uStack_40);
      func_0x000107c27900(auStack_50);
      func_0x000107c278f4(&uStack_48);
      ___cxa_guard_release(0x113828528);
    }
  }
  return;
}



/* Entry: 108b7c15c; end: 108b7c1f7;  */

undefined8 FUN_108b7c15c(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam0000000113828510 & 1) == 0) {
    iVar4 = 0x13828510;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_108b7c1f8();
      lStack_20 = lRam0000000113828530;
      if (lRam0000000113828530 != 0) {
        piVar1 = (int *)(lRam0000000113828530 + 8);
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
      func_0x000107c30fa8(0x113828500,&lStack_20);
      func_0x000107c278f4(&lStack_20);
      ___cxa_guard_release(0x113828510);
    }
  }
  return 0x113828500;
}



/* Entry: 108b7c1f8; end: 108b7c24b;  */

void FUN_108b7c1f8(void)

{
  int iVar1;
  
  if ((bRam0000000113828538 & 1) == 0) {
    iVar1 = 0x13828538;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(0x113828530,&UNK_10f501f43);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113828538);
      return;
    }
  }
  return;
}



/* Entry: 108b7c24c; end: 108b7c2af;  */

void FUN_108b7c24c(undefined8 param_1,long param_2)

{
  undefined1 auStack_30 [16];
  
  func_0x000104be6a78(auStack_30,param_2 + 8,0,0,0);
  FUN_108b7b3f8(param_1,auStack_30);
  func_0x00010b9a8d98(auStack_30);
  return;
}



/* Entry: 108b7c2b0; end: 108b7c2ef;  */

void FUN_108b7c2b0(void)

{
  func_0x000108b7c2fc();
  return;
}



/* Entry: 108b7c2f0; end: 108b7c307;  */

undefined8 * FUN_108b7c2f0(undefined8 *param_1)

{
  undefined4 uStack_24;
  
  *param_1 = &PTR_DAT_1107e7df0;
  __ZNSt3__15mutex4lockEv(0x11328ad68);
  uStack_24 = *(undefined4 *)(param_1[1] + 0x18);
  func_0x000104be7ab4(0x11328ad18,&uStack_24);
  __ZNSt3__15mutex6unlockEv(0x11328ad68);
  func_0x000104be7d74(param_1 + 5);
  func_0x000104be7db4(param_1 + 2);
  func_0x000104be7e54(param_1 + 1);
  return param_1;
}



/* Entry: 108b7c308; end: 108b7c387;  */

void FUN_108b7c308(int *param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  func_0x00010b9a97d0(&lStack_28);
  iVar1 = (int)lStack_28 + 0x18;
  func_0x00010b9a9518();
  func_0x000105280c90(auStack_48,lStack_28 + 0x28);
  *param_1 = iVar1;
  func_0x000107c27b7c(param_1 + 2,auStack_48);
  func_0x000107c279c4(auStack_48);
  func_0x000104bdbf78(&lStack_28);
  return;
}



/* Entry: 108b7c388; end: 108b7c487;  */

undefined1 * FUN_108b7c388(undefined8 param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
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
  undefined4 auStack_58 [2];
  undefined2 uStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_108b7c488();
  func_0x000107c30f7c(auStack_68,0x113828548);
  auStack_58[0] = *param_2;
  uStack_50 = 4;
  func_0x0001052810a4(auStack_48,param_2 + 2);
  func_0x000104bdb9bc(auStack_60,auStack_68,auStack_58,2);
  lVar7 = 0x10;
  do {
    func_0x00010b9a8d98((long)auStack_58 + lVar7);
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x000107c27928(auStack_68);
  puVar3 = auStack_60;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_60;
  func_0x000104bdbf78();
  FUN_108b7c5b8(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  lVar7 = 0x10;
  do {
    func_0x00010b9a8d98((long)auStack_58 + lVar7);
    iVar5 = (int)puVar3;
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x000107c27928(auStack_68);
  puVar3 = puVar2;
  __Unwind_Resume(puVar2);
  pcStack_78 = FUN_108b7c488;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_90 = lVar7;
  puStack_88 = puVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam0000000113828550 & 1) == 0) {
    puVar3 = (undefined1 *)0x113828550;
    ___cxa_guard_acquire();
    if ((int)puVar3 != 0) {
      func_0x000107c31088(auStack_d0,&UNK_10f501f76);
      puVar4 = &UNK_10f501f96;
      func_0x000107c31088(auStack_d8,&UNK_10f501f96);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_c8,auStack_d8,puVar4);
      puVar4 = &UNK_10f501f99;
      func_0x000107c31088(auStack_e0,&UNK_10f501f99);
      func_0x0001052810e0();
      func_0x000107c27e98(auStack_b0,auStack_e0,puVar4);
      uVar6 = 0;
      func_0x000104bdbd44(0x113828540,auStack_d0,0,auStack_c8,2);
      lVar7 = 0x18;
      do {
        func_0x000107c27924(auStack_c8 + lVar7);
        iVar5 = (int)uVar6;
        lVar7 = lVar7 + -0x18;
        uVar1 = lVar7 == -0x18;
      } while (!(bool)uVar1);
      func_0x000107c278f4(auStack_e0);
      func_0x000107c278f4(auStack_d8);
      func_0x000107c278f4(auStack_d0);
      puVar3 = (undefined1 *)0x113828550;
      ___cxa_guard_release(0x113828550);
    }
  }
  FUN_108b7c5b8(uStack_98);
  if ((bool)uVar1) {
    return (undefined1 *)0x113828540;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar3;
}



/* Entry: 108b7c488; end: 108b7c5b7;  */

undefined8 FUN_108b7c488(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113828550 & 1) == 0) {
    param_1 = 0x113828550;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107c31088(auStack_60,&UNK_10f501f76);
      puVar1 = &UNK_10f501f96;
      func_0x000107c31088(auStack_68,&UNK_10f501f96);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_58,auStack_68,puVar1);
      puVar1 = &UNK_10f501f99;
      func_0x000107c31088(auStack_70,&UNK_10f501f99);
      func_0x0001052810e0();
      func_0x000107c27e98(auStack_40,auStack_70,puVar1);
      uVar2 = 0;
      func_0x000104bdbd44(0x113828540,auStack_60,0,auStack_58,2);
      lVar3 = 0x18;
      do {
        func_0x000107c27924(auStack_58 + lVar3);
        param_2 = (int)uVar2;
        lVar3 = lVar3 + -0x18;
        in_ZR = lVar3 == -0x18;
      } while (!(bool)in_ZR);
      func_0x000107c278f4(auStack_70);
      func_0x000107c278f4(auStack_68);
      func_0x000107c278f4(auStack_60);
      param_1 = 0x113828550;
      ___cxa_guard_release(0x113828550);
    }
  }
  FUN_108b7c5b8(uStack_28);
  if ((bool)in_ZR) {
    return 0x113828540;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 108b7c5b8; end: 108b7c5cb;  */

void FUN_108b7c5b8(void)

{
  return;
}



/* Entry: 108b7c5cc; end: 108b7c653;  */

void FUN_108b7c5cc(int *param_1)

{
  int iVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x00010b9a97d0(&lStack_28);
  iVar1 = (int)lStack_28 + 0x18;
  func_0x00010b9a9518();
  FUN_108b7c654(&uStack_40,lStack_28 + 0x28);
  *param_1 = iVar1;
  *(undefined8 *)(param_1 + 4) = uStack_38;
  *(undefined8 *)(param_1 + 2) = uStack_40;
  *(undefined8 *)(param_1 + 6) = uStack_30;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  FUN_10893e93c(&uStack_40);
  func_0x000104bdbf78(&lStack_28);
  return;
}



/* Entry: 108b7c654; end: 108b7c71b;  */

void FUN_108b7c654(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [32];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (((char)param_2[1] == '\t') && (lVar2 = *param_2, lVar2 != 0)) {
    FUN_108b7cad8(param_1,*(undefined8 *)(lVar2 + 0x10));
    lVar1 = lVar2 + 0x18;
    for (uVar3 = 0; uVar3 < *(ulong *)(lVar2 + 0x10); uVar3 = uVar3 + 1) {
      FUN_108b7c308(auStack_68,lVar1);
      FUN_108b7cb60(param_1,auStack_68);
      func_0x000107c279c4(auStack_60);
      lVar1 = lVar1 + 0x10;
    }
  }
  return;
}



/* Entry: 108b7c71c; end: 108b7c82b;  */

long * FUN_108b7c71c(undefined8 param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  long *plVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 extraout_x8;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auStack_138 [16];
  long lStack_128;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  long lStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  long lStack_68;
  long lStack_60;
  undefined4 auStack_58 [2];
  undefined2 uStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_108b7c82c();
  func_0x000107c30f7c(&lStack_68,0x113828560);
  auStack_58[0] = *param_2;
  uStack_50 = 4;
  FUN_108b7c95c(auStack_48,param_2 + 2);
  func_0x000104bdb9bc(&lStack_60,&lStack_68,auStack_58,2);
  lVar8 = 0x10;
  do {
    func_0x00010b9a8d98((long)auStack_58 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x000107c27928(&lStack_68);
  plVar4 = &lStack_60;
  func_0x00010b9a8f60(param_1);
  plVar2 = &lStack_60;
  func_0x000104bdbf78();
  func_0x000108b7cc80(uStack_38);
  if ((bool)uVar1) {
    return plVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_48;
  lVar8 = -0x20;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar6 = (int)plVar4;
    puVar3 = puVar3 + -0x10;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  plVar4 = &lStack_68;
  func_0x000107c27928();
  func_0x000108b7cc64();
  pcStack_78 = FUN_108b7c82c;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_90 = lVar8;
  plStack_88 = plVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam0000000113828568 & 1) == 0) {
    plVar4 = (long *)0x113828568;
    ___cxa_guard_acquire();
    if ((int)plVar4 != 0) {
      func_0x000107c31088(auStack_d0,&UNK_10f501f9f);
      puVar5 = &UNK_10f501fc5;
      func_0x000107c31088(auStack_d8,&UNK_10f501fc5);
      FUN_108b7ca24();
      func_0x000107c27e98(auStack_c8,auStack_d8,puVar5);
      puVar5 = &UNK_10f501fcc;
      func_0x000107c31088(auStack_e0,&UNK_10f501fcc);
      FUN_108b7ca7c();
      func_0x000107c27e98(auStack_b0,auStack_e0,puVar5);
      uVar7 = 0;
      func_0x000104bdbd44(0x113828558,auStack_d0,0,auStack_c8,2);
      lVar8 = 0x18;
      do {
        func_0x000107c27924(auStack_c8 + lVar8);
        iVar6 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x000107c278f4(auStack_e0);
      func_0x000107c278f4(auStack_d8);
      func_0x000107c278f4(auStack_d0);
      plVar4 = (long *)0x113828568;
      ___cxa_guard_release();
    }
  }
  func_0x000108b7cc80(uStack_98);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    if (iVar6 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010b9abe10(&lStack_128,(plVar4[1] - *plVar4) / 0x28);
    lVar9 = 0;
    lVar8 = 0x18;
    for (uVar10 = 0; uVar10 < (ulong)((plVar4[1] - *plVar4) / 0x28); uVar10 = uVar10 + 1) {
      FUN_108b7c388(auStack_138,*plVar4 + lVar9);
      func_0x00010b9a9020(lStack_128 + lVar8,auStack_138);
      func_0x00010b9a8d98(auStack_138);
      lVar8 = lVar8 + 0x10;
      lVar9 = lVar9 + 0x28;
    }
    func_0x00010b9a8f84(extraout_x8,&lStack_128);
    plVar4 = &lStack_128;
    func_0x000104bddf38(plVar4);
    return plVar4;
  }
  return (long *)0x113828558;
}



/* Entry: 108b7c82c; end: 108b7c95b;  */

long * FUN_108b7c82c(long *param_1,int param_2)

{
  undefined1 in_ZR;
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 extraout_x8;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_c8 [16];
  long lStack_b8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113828568 & 1) == 0) {
    param_1 = (long *)0x113828568;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107c31088(auStack_60,&UNK_10f501f9f);
      puVar1 = &UNK_10f501fc5;
      func_0x000107c31088(auStack_68,&UNK_10f501fc5);
      FUN_108b7ca24();
      func_0x000107c27e98(auStack_58,auStack_68,puVar1);
      puVar1 = &UNK_10f501fcc;
      func_0x000107c31088(auStack_70,&UNK_10f501fcc);
      FUN_108b7ca7c();
      func_0x000107c27e98(auStack_40,auStack_70,puVar1);
      uVar3 = 0;
      func_0x000104bdbd44(0x113828558,auStack_60,0,auStack_58,2);
      lVar6 = 0x18;
      do {
        func_0x000107c27924(auStack_58 + lVar6);
        param_2 = (int)uVar3;
        lVar6 = lVar6 + -0x18;
        in_ZR = lVar6 == -0x18;
      } while (!(bool)in_ZR);
      func_0x000107c278f4(auStack_70);
      func_0x000107c278f4(auStack_68);
      func_0x000107c278f4(auStack_60);
      param_1 = (long *)0x113828568;
      ___cxa_guard_release();
    }
  }
  func_0x000108b7cc80(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if (param_2 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010b9abe10(&lStack_b8,(param_1[1] - *param_1) / 0x28);
    lVar4 = 0;
    lVar6 = 0x18;
    for (uVar5 = 0; uVar5 < (ulong)((param_1[1] - *param_1) / 0x28); uVar5 = uVar5 + 1) {
      FUN_108b7c388(auStack_c8,*param_1 + lVar4);
      func_0x00010b9a9020(lStack_b8 + lVar6,auStack_c8);
      func_0x00010b9a8d98(auStack_c8);
      lVar6 = lVar6 + 0x10;
      lVar4 = lVar4 + 0x28;
    }
    func_0x00010b9a8f84(extraout_x8,&lStack_b8);
    plVar2 = &lStack_b8;
    func_0x000104bddf38(plVar2);
    return plVar2;
  }
  return (long *)0x113828558;
}



/* Entry: 108b7c95c; end: 108b7ca23;  */

void FUN_108b7c95c(undefined8 param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x00010b9abe10(&lStack_48,(param_2[1] - *param_2) / 0x28);
  lVar1 = 0;
  lVar3 = 0x18;
  for (uVar2 = 0; uVar2 < (ulong)((param_2[1] - *param_2) / 0x28); uVar2 = uVar2 + 1) {
    FUN_108b7c388(auStack_58,*param_2 + lVar1);
    func_0x00010b9a9020(lStack_48 + lVar3,auStack_58);
    func_0x00010b9a8d98(auStack_58);
    lVar3 = lVar3 + 0x10;
    lVar1 = lVar1 + 0x28;
  }
  func_0x00010b9a8f84(param_1,&lStack_48);
  func_0x000104bddf38(&lStack_48);
  return;
}



/* Entry: 108b7ca24; end: 108b7ca7b;  */

undefined8 FUN_108b7ca24(void)

{
  int iVar1;
  
  if ((bRam000000011328acf8 & 1) == 0) {
    iVar1 = 0x1328acf8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x11328ace8);
      ___cxa_guard_release(0x11328acf8);
    }
  }
  return 0x11328ace8;
}



/* Entry: 108b7ca7c; end: 108b7cad7;  */

undefined8 FUN_108b7ca7c(void)

{
  int iVar1;
  
  if ((bRam000000011328ad10 & 1) == 0) {
    iVar1 = 0x1328ad10;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_108b7c488();
      func_0x00010b990868(0x11328ad00);
      ___cxa_guard_release(0x11328ad10);
    }
  }
  return 0x11328ad00;
}



/* Entry: 108b7cad8; end: 108b7cb5f;  */

long * FUN_108b7cad8(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long alStack_48 [5];
  
  lVar3 = *param_1;
  if ((ulong)((param_1[2] - lVar3) / 0x28) < param_2) {
    if (0x666666666666666 < param_2) {
      FUN_10893e9a4();
      func_0x000108b7cc6c();
      func_0x000108b7cc64();
      uVar1 = param_1[1];
      if (uVar1 < (ulong)param_1[2]) {
        func_0x000108b7cba0();
        plVar2 = (long *)(uVar1 + 0x28);
      }
      else {
        plVar2 = param_1;
        FUN_108b7cbcc();
      }
      param_1[1] = (long)plVar2;
      return plVar2 + -5;
    }
    plVar2 = param_1 + 1;
    param_1 = alStack_48;
    FUN_1089407e4(param_1,param_2,(*plVar2 - lVar3) / 0x28);
    func_0x000108b7cc74();
    func_0x000108b7cc6c();
  }
  return param_1;
}



/* Entry: 108b7cb60; end: 108b7cbcb;  */

long FUN_108b7cb60(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x000108b7cba0();
    lVar2 = uVar1 + 0x28;
  }
  else {
    lVar2 = param_1;
    FUN_108b7cbcc();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x28;
}


