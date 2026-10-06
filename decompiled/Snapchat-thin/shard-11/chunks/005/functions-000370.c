/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1086c3e24; end: 1086c3f43;  */

void FUN_1086c3e24(void)

{
  uint uVar1;
  code *extraout_x8;
  code *extraout_x8_00;
  long unaff_x20;
  undefined1 auStack_3d8 [44];
  byte bStack_3ac;
  undefined1 auStack_3a8 [448];
  undefined1 auStack_1e8 [40];
  char cStack_1c0;
  undefined1 auStack_198 [344];
  
  func_0x0001086da0b0();
  FUN_108862cf0(auStack_3a8);
  FUN_1086b9814(auStack_1e8,auStack_3a8);
  func_0x0001086db330();
  uVar1 = (uint)auStack_198;
  func_0x000107c29e78();
  if ((uVar1 & 0xfffffffb) == 1) {
    func_0x0001086da408(*(undefined8 *)(unaff_x20 + 0x58));
    (*extraout_x8)();
    if (cStack_1c0 == '\x01') {
      func_0x0001086da100();
      FUN_10885edd8(auStack_3a8);
      FUN_108655080(auStack_3d8,auStack_3a8);
      func_0x0001086da718();
      if ((bStack_3ac & 1) == 0) {
        func_0x000107c3271c(*(undefined8 *)(*(long *)(unaff_x20 + 0xd0) + 0x120));
        (*extraout_x8_00)();
      }
      func_0x000107c32710();
    }
  }
  else {
    func_0x0001086d9a80();
  }
  func_0x000107c288e0(auStack_1e8);
  return;
}



/* Entry: 1086c3f44; end: 1086c3f4b;  */

void FUN_1086c3f44(long param_1)

{
  uint uVar1;
  code *extraout_x8;
  code *extraout_x8_00;
  long unaff_x20;
  undefined1 auStack_3d8 [44];
  byte bStack_3ac;
  undefined1 auStack_3a8 [448];
  undefined1 auStack_1e8 [40];
  char cStack_1c0;
  undefined1 auStack_198 [344];
  
  func_0x0001086da0b0(param_1 + -0x20);
  FUN_108862cf0(auStack_3a8);
  FUN_1086b9814(auStack_1e8,auStack_3a8);
  func_0x0001086db330();
  uVar1 = (uint)auStack_198;
  func_0x000107c29e78();
  if ((uVar1 & 0xfffffffb) == 1) {
    func_0x0001086da408(*(undefined8 *)(unaff_x20 + 0x58));
    (*extraout_x8)();
    if (cStack_1c0 == '\x01') {
      func_0x0001086da100();
      FUN_10885edd8(auStack_3a8);
      FUN_108655080(auStack_3d8,auStack_3a8);
      func_0x0001086da718();
      if ((bStack_3ac & 1) == 0) {
        func_0x000107c3271c(*(undefined8 *)(*(long *)(unaff_x20 + 0xd0) + 0x120));
        (*extraout_x8_00)();
      }
      func_0x000107c32710();
    }
  }
  else {
    func_0x0001086d9a80();
  }
  func_0x000107c288e0(auStack_1e8);
  return;
}



/* Entry: 1086c3f4c; end: 1086c4027;  */

void FUN_1086c3f4c(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,long *param_5)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined4 uStack_48;
  
  uVar2 = param_4 == 1;
  if (1 < param_4) {
    func_0x0001086da3fc();
    func_0x0001086da408(*(undefined8 *)(*(long *)(param_1 + 0xd0) + 0x2a0));
    (*extraout_x8_02)();
    func_0x0001086d9ef4();
    uStack_80 = 0;
    uStack_48 = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_58 = 0;
    puVar3 = auStack_88;
    FUN_1086cf864();
    *(uint *)(puVar3 + 0x10) = param_4 - 2;
    func_0x0001086d9e40(*(undefined8 *)(param_1 + 0x58));
    func_0x0001086db444();
    func_0x0001086da610();
    func_0x0001086da768();
    func_0x0001086da5d4();
    func_0x0001086da5cc();
    FUN_10891cac8(auStack_88);
    return;
  }
  lVar4 = *param_5;
  lVar5 = param_5[1];
  puVar6 = (undefined8 *)0x0;
  func_0x0001086db620();
  func_0x0001086d9810();
  if (((extraout_x8 & 1) == 0) && (lVar4 != 0)) {
    func_0x0001086d9c18();
    if (lVar5 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10 != 0);
    }
    func_0x000107c28150();
    func_0x0001086da310();
    func_0x0001086da1e0();
    func_0x0001086d97f8(0x1086d1c6c);
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001086d995c();
    func_0x0001086d9ad8();
    func_0x0001086d9850();
    func_0x0001086da01c();
    if (unaff_x22 == 0) {
      func_0x0001086d990c();
      if (extraout_x8_01 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_01 != 0);
      }
      func_0x000107c3265c();
      func_0x0001086da218();
      func_0x0001086da044();
    }
    func_0x0001086da6b4();
  }
  func_0x000100864c10();
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x0001086d9af0();
    func_0x0001086da6b4();
    func_0x0001086d9ff8();
    func_0x0001086da128();
    FUN_1086d1d40();
    uVar1 = *puVar6;
    lVar4 = puVar6[1];
    if (lVar4 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_02 != 0);
    }
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    func_0x000107c3268c();
    func_0x0001086dabd4(&PTR_SUB_110a649c8);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    *(long *)(param_1 + 0x20) = lVar4;
    if (lVar4 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_03 != 0);
    }
    *(long *)(unaff_x19 + 0x18) = param_1;
    FUN_1086c1620(auStack_50);
    return;
  }
  return;
}



/* Entry: 1086c4028; end: 1086c402f;  */

void FUN_1086c4028(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,long *param_5)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined4 uStack_48;
  
  lVar4 = param_1 + -0x20;
  uVar2 = param_4 == 1;
  if (1 < param_4) {
    func_0x0001086da3fc();
    func_0x0001086da408(*(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x2a0));
    (*extraout_x8_02)();
    func_0x0001086d9ef4();
    uStack_80 = 0;
    uStack_48 = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_58 = 0;
    puVar3 = auStack_88;
    FUN_1086cf864();
    *(uint *)(puVar3 + 0x10) = param_4 - 2;
    func_0x0001086d9e40(*(undefined8 *)(param_1 + 0x38));
    func_0x0001086db444();
    func_0x0001086da610();
    func_0x0001086da768();
    func_0x0001086da5d4();
    func_0x0001086da5cc();
    FUN_10891cac8(auStack_88);
    return;
  }
  lVar5 = *param_5;
  lVar6 = param_5[1];
  puVar7 = (undefined8 *)0x0;
  func_0x0001086db620();
  func_0x0001086d9810();
  if (((extraout_x8 & 1) == 0) && (lVar5 != 0)) {
    func_0x0001086d9c18();
    if (lVar6 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10 != 0);
    }
    func_0x000107c28150();
    func_0x0001086da310();
    func_0x0001086da1e0();
    func_0x0001086d97f8(0x1086d1c6c);
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001086d995c();
    func_0x0001086d9ad8();
    func_0x0001086d9850();
    func_0x0001086da01c();
    if (unaff_x22 == 0) {
      func_0x0001086d990c();
      if (extraout_x8_01 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_01 != 0);
      }
      func_0x000107c3265c();
      func_0x0001086da218();
      func_0x0001086da044();
    }
    func_0x0001086da6b4();
  }
  func_0x000100864c10();
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x0001086d9af0();
    func_0x0001086da6b4();
    func_0x0001086d9ff8();
    func_0x0001086da128();
    FUN_1086d1d40();
    uVar1 = *puVar7;
    lVar5 = puVar7[1];
    if (lVar5 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_02 != 0);
    }
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    func_0x000107c3268c();
    func_0x0001086dabd4(&PTR_SUB_110a649c8);
    *(undefined8 *)(lVar4 + 0x18) = uVar1;
    *(long *)(lVar4 + 0x20) = lVar5;
    if (lVar5 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_03 != 0);
    }
    *(long *)(unaff_x19 + 0x18) = lVar4;
    FUN_1086c1620(auStack_50);
    return;
  }
  return;
}



/* Entry: 1086c4030; end: 1086c431f;  */

void FUN_1086c4030(undefined8 param_1,long *param_2,long param_3,long *param_4,long *param_5)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 extraout_x8;
  long lVar4;
  long extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar5;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined1 *unaff_x24;
  undefined1 *unaff_x25;
  long unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar6;
  undefined8 in_register_00005008;
  
  while( true ) {
    *(long *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined1 **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined1 **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    plVar3 = param_5;
    func_0x000107c325d4(param_2);
    *(undefined8 *)((long)register0x00000008 + -0x58) = extraout_x8;
    uVar1 = *param_4 == param_4[1];
    if ((bool)uVar1) {
      unaff_x20 = *(long *)(unaff_x19[0x1a] + 0x100);
      func_0x0001086db510();
      *(undefined8 *)((long)register0x00000008 + -0x88) = in_register_00005008;
      *(undefined8 *)((long)register0x00000008 + -0x90) = param_1;
      lVar4 = param_3;
      param_5 = param_4;
      if (extraout_x8_02 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_02 != 0);
      }
      func_0x000107c28150();
      func_0x0001086da310();
      func_0x0001086da1e0();
      unaff_x22 = (long *)unaff_x21[0xe];
      *(code **)((long)register0x00000008 + -0xe0) = FUN_1086d2f84;
      *(undefined ***)((long)register0x00000008 + -0xd8) = &PTR_DAT_110a64550;
      in_register_00005008 = *(undefined8 *)((long)register0x00000008 + -0x88);
      param_1 = *(undefined8 *)((long)register0x00000008 + -0x90);
      *(undefined8 *)((long)register0x00000008 + -200) = in_register_00005008;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = param_1;
      if (*(long *)((long)register0x00000008 + -0x88) != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_03 != 0);
      }
      unaff_x23 = (undefined8 *)((long)register0x00000008 + -0xe0);
      *(long **)((long)register0x00000008 + -0xb0) = unaff_x19;
      unaff_x19 = unaff_x21 + 9;
      func_0x0001086db914();
      func_0x0001086d9a28(*(undefined8 *)((long)register0x00000008 + -0xd8));
      func_0x0001086da01c();
      if (unaff_x22 == (long *)0x0) {
        func_0x0001086d9ab0();
        *(undefined8 *)((long)register0x00000008 + -0xd8) = in_register_00005008;
        *(undefined8 *)((long)register0x00000008 + -0xe0) = param_1;
        if (extraout_x8_03 != 0) {
          do {
            func_0x000107c325f8();
          } while (extraout_w10_04 != 0);
        }
        func_0x000107c3265c();
        func_0x0001086db91c();
        func_0x0001086da9f0();
      }
      func_0x0001086daaf4();
    }
    else {
      unaff_x24 = (undefined1 *)((long)register0x00000008 + -0xe0);
      func_0x000107c27994((undefined1 *)((long)register0x00000008 + -0xe0));
      lVar4 = unaff_x19[0x1a];
      lVar5 = *(long *)(lVar4 + 0x118);
      uVar6 = *(undefined8 *)(lVar4 + 0x110);
      *(undefined8 *)((long)register0x00000008 + -0xc0) = *(undefined8 *)(lVar4 + 0x118);
      *(undefined8 *)((long)register0x00000008 + -200) = uVar6;
      if (lVar5 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10 != 0);
        lVar4 = unaff_x19[0x1a];
      }
      lVar5 = *(long *)(lVar4 + 0xa8);
      uVar6 = *(undefined8 *)(lVar4 + 0xa0);
      *(undefined8 *)((long)register0x00000008 + -0xb0) = *(undefined8 *)(lVar4 + 0xa8);
      *(undefined8 *)((long)register0x00000008 + -0xb8) = uVar6;
      if (lVar5 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_00 != 0);
      }
      unaff_x26 = *param_4;
      lVar4 = param_4[1];
      puVar2 = (undefined8 *)((long)register0x00000008 + -0xa8);
      FUN_1086d2fbc(puVar2,1);
      unaff_x23 = *(undefined8 **)((long)register0x00000008 + -0x98);
      unaff_x23[2] = 0;
      *unaff_x23 = &PTR_FUN_110a64578;
      unaff_x23[1] = 0;
      *(code **)((long)register0x00000008 + -0x90) = FUN_1086d302c;
      *(undefined ***)((long)register0x00000008 + -0x88) = &PTR_FUN_110a645d0;
      func_0x0001086da7b4();
      uVar6 = *(undefined8 *)((long)register0x00000008 + -0xe0);
      lVar4 = lVar4 - unaff_x26 >> 3;
      puVar2[1] = *(undefined8 *)((long)register0x00000008 + -0xd8);
      *puVar2 = uVar6;
      unaff_x25 = (undefined1 *)((long)register0x00000008 + -0x90);
      puVar2[2] = *(undefined8 *)((long)register0x00000008 + -0xd0);
      *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
      uVar6 = *(undefined8 *)((long)register0x00000008 + -200);
      puVar2[4] = *(undefined8 *)((long)register0x00000008 + -0xc0);
      puVar2[3] = uVar6;
      *(undefined8 *)((long)register0x00000008 + -200) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
      in_register_00005008 = *(undefined8 *)((long)register0x00000008 + -0xb0);
      param_1 = *(undefined8 *)((long)register0x00000008 + -0xb8);
      puVar2[6] = in_register_00005008;
      puVar2[5] = param_1;
      *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
      *(undefined8 **)((long)register0x00000008 + -0x80) = puVar2;
      plVar3 = (long *)((long)register0x00000008 + -0x90);
      FUN_10883fc34(unaff_x23 + 3);
      func_0x0001086d9acc(*(undefined8 *)((long)register0x00000008 + -0x88));
      lVar5 = *(long *)((long)register0x00000008 + -0x98);
      *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
      *(long *)((long)register0x00000008 + -0xf0) = lVar5 + 0x18;
      *(long *)((long)register0x00000008 + -0xe8) = lVar5;
      func_0x0001086d32b4((undefined1 *)((long)register0x00000008 + -0xa8));
      unaff_x21 = (long *)param_4[1];
      for (unaff_x22 = (long *)*param_4; uVar1 = unaff_x22 == unaff_x21, !(bool)uVar1;
          unaff_x22 = unaff_x22 + 1) {
        param_5 = (long *)*unaff_x22;
        func_0x0001086da220(unaff_x19[0xb]);
        *(undefined8 *)((long)register0x00000008 + -0x88) = in_register_00005008;
        *(undefined8 *)((long)register0x00000008 + -0x90) = param_1;
        if (extraout_x8_00 != 0) {
          do {
            func_0x000107c325f8();
          } while (extraout_w10_01 != 0);
        }
        func_0x0001086da408();
        plVar3 = (long *)0x3;
        lVar4 = param_3;
        (*extraout_x8_01)();
        func_0x0001086daaf4();
      }
      FUN_1086d32c4((undefined1 *)((long)register0x00000008 + -0xf0));
      unaff_x19 = (long *)((long)register0x00000008 + -0xe0);
      FUN_1086b90a8();
      unaff_x20 = param_3;
    }
    func_0x000107c325c0(*(undefined8 *)((long)register0x00000008 + -0x58));
    if ((bool)uVar1) break;
    ___stack_chk_fail();
    param_2 = unaff_x19;
    func_0x0001086da9f0();
    func_0x0001086daaf4();
    unaff_x30 = FUN_1086c4320;
    func_0x0001086d9ff8();
    param_2 = param_2 + -4;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xf0);
    param_3 = lVar4;
    param_4 = param_5;
    param_5 = plVar3;
  }
  return;
}



/* Entry: 1086c4320; end: 1086c4327;  */

void FUN_1086c4320(undefined8 param_1,long *param_2,long param_3,long *param_4,long *param_5)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 extraout_x8;
  long lVar4;
  long extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar5;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined1 *unaff_x24;
  undefined1 *unaff_x25;
  long unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar6;
  undefined8 in_register_00005008;
  
  while( true ) {
    *(long *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined1 **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined1 **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    plVar3 = param_5;
    func_0x000107c325d4(param_2 + -4);
    *(undefined8 *)((long)register0x00000008 + -0x58) = extraout_x8;
    uVar1 = *param_4 == param_4[1];
    if ((bool)uVar1) {
      unaff_x20 = *(long *)(unaff_x19[0x1a] + 0x100);
      func_0x0001086db510();
      *(undefined8 *)((long)register0x00000008 + -0x88) = in_register_00005008;
      *(undefined8 *)((long)register0x00000008 + -0x90) = param_1;
      lVar4 = param_3;
      param_5 = param_4;
      if (extraout_x8_02 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_02 != 0);
      }
      func_0x000107c28150();
      func_0x0001086da310();
      func_0x0001086da1e0();
      unaff_x22 = (long *)unaff_x21[0xe];
      *(code **)((long)register0x00000008 + -0xe0) = FUN_1086d2f84;
      *(undefined ***)((long)register0x00000008 + -0xd8) = &PTR_DAT_110a64550;
      in_register_00005008 = *(undefined8 *)((long)register0x00000008 + -0x88);
      param_1 = *(undefined8 *)((long)register0x00000008 + -0x90);
      *(undefined8 *)((long)register0x00000008 + -200) = in_register_00005008;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = param_1;
      if (*(long *)((long)register0x00000008 + -0x88) != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_03 != 0);
      }
      unaff_x23 = (undefined8 *)((long)register0x00000008 + -0xe0);
      *(long **)((long)register0x00000008 + -0xb0) = unaff_x19;
      unaff_x19 = unaff_x21 + 9;
      func_0x0001086db914();
      func_0x0001086d9a28(*(undefined8 *)((long)register0x00000008 + -0xd8));
      func_0x0001086da01c();
      if (unaff_x22 == (long *)0x0) {
        func_0x0001086d9ab0();
        *(undefined8 *)((long)register0x00000008 + -0xd8) = in_register_00005008;
        *(undefined8 *)((long)register0x00000008 + -0xe0) = param_1;
        if (extraout_x8_03 != 0) {
          do {
            func_0x000107c325f8();
          } while (extraout_w10_04 != 0);
        }
        func_0x000107c3265c();
        func_0x0001086db91c();
        func_0x0001086da9f0();
      }
      func_0x0001086daaf4();
    }
    else {
      unaff_x24 = (undefined1 *)((long)register0x00000008 + -0xe0);
      func_0x000107c27994((undefined1 *)((long)register0x00000008 + -0xe0));
      lVar4 = unaff_x19[0x1a];
      lVar5 = *(long *)(lVar4 + 0x118);
      uVar6 = *(undefined8 *)(lVar4 + 0x110);
      *(undefined8 *)((long)register0x00000008 + -0xc0) = *(undefined8 *)(lVar4 + 0x118);
      *(undefined8 *)((long)register0x00000008 + -200) = uVar6;
      if (lVar5 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10 != 0);
        lVar4 = unaff_x19[0x1a];
      }
      lVar5 = *(long *)(lVar4 + 0xa8);
      uVar6 = *(undefined8 *)(lVar4 + 0xa0);
      *(undefined8 *)((long)register0x00000008 + -0xb0) = *(undefined8 *)(lVar4 + 0xa8);
      *(undefined8 *)((long)register0x00000008 + -0xb8) = uVar6;
      if (lVar5 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_00 != 0);
      }
      unaff_x26 = *param_4;
      lVar4 = param_4[1];
      puVar2 = (undefined8 *)((long)register0x00000008 + -0xa8);
      FUN_1086d2fbc(puVar2,1);
      unaff_x23 = *(undefined8 **)((long)register0x00000008 + -0x98);
      unaff_x23[2] = 0;
      *unaff_x23 = &PTR_FUN_110a64578;
      unaff_x23[1] = 0;
      *(code **)((long)register0x00000008 + -0x90) = FUN_1086d302c;
      *(undefined ***)((long)register0x00000008 + -0x88) = &PTR_FUN_110a645d0;
      func_0x0001086da7b4();
      uVar6 = *(undefined8 *)((long)register0x00000008 + -0xe0);
      lVar4 = lVar4 - unaff_x26 >> 3;
      puVar2[1] = *(undefined8 *)((long)register0x00000008 + -0xd8);
      *puVar2 = uVar6;
      unaff_x25 = (undefined1 *)((long)register0x00000008 + -0x90);
      puVar2[2] = *(undefined8 *)((long)register0x00000008 + -0xd0);
      *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
      uVar6 = *(undefined8 *)((long)register0x00000008 + -200);
      puVar2[4] = *(undefined8 *)((long)register0x00000008 + -0xc0);
      puVar2[3] = uVar6;
      *(undefined8 *)((long)register0x00000008 + -200) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
      in_register_00005008 = *(undefined8 *)((long)register0x00000008 + -0xb0);
      param_1 = *(undefined8 *)((long)register0x00000008 + -0xb8);
      puVar2[6] = in_register_00005008;
      puVar2[5] = param_1;
      *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
      *(undefined8 **)((long)register0x00000008 + -0x80) = puVar2;
      plVar3 = (long *)((long)register0x00000008 + -0x90);
      FUN_10883fc34(unaff_x23 + 3);
      func_0x0001086d9acc(*(undefined8 *)((long)register0x00000008 + -0x88));
      lVar5 = *(long *)((long)register0x00000008 + -0x98);
      *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
      *(long *)((long)register0x00000008 + -0xf0) = lVar5 + 0x18;
      *(long *)((long)register0x00000008 + -0xe8) = lVar5;
      func_0x0001086d32b4((undefined1 *)((long)register0x00000008 + -0xa8));
      unaff_x21 = (long *)param_4[1];
      for (unaff_x22 = (long *)*param_4; uVar1 = unaff_x22 == unaff_x21, !(bool)uVar1;
          unaff_x22 = unaff_x22 + 1) {
        param_5 = (long *)*unaff_x22;
        func_0x0001086da220(unaff_x19[0xb]);
        *(undefined8 *)((long)register0x00000008 + -0x88) = in_register_00005008;
        *(undefined8 *)((long)register0x00000008 + -0x90) = param_1;
        if (extraout_x8_00 != 0) {
          do {
            func_0x000107c325f8();
          } while (extraout_w10_01 != 0);
        }
        func_0x0001086da408();
        plVar3 = (long *)0x3;
        lVar4 = param_3;
        (*extraout_x8_01)();
        func_0x0001086daaf4();
      }
      FUN_1086d32c4((undefined1 *)((long)register0x00000008 + -0xf0));
      unaff_x19 = (long *)((long)register0x00000008 + -0xe0);
      FUN_1086b90a8();
      unaff_x20 = param_3;
    }
    func_0x000107c325c0(*(undefined8 *)((long)register0x00000008 + -0x58));
    if ((bool)uVar1) break;
    ___stack_chk_fail();
    param_2 = unaff_x19;
    func_0x0001086da9f0();
    func_0x0001086daaf4();
    unaff_x30 = FUN_1086c4320;
    func_0x0001086d9ff8();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xf0);
    param_3 = lVar4;
    param_4 = param_5;
    param_5 = plVar3;
  }
  return;
}



/* Entry: 1086c4328; end: 1086c43a7;  */

void FUN_1086c4328(undefined8 param_1,undefined8 param_2,long *param_3)

{
  code *extraout_x8;
  long unaff_x21;
  undefined1 auStack_200 [464];
  
  if (*param_3 != param_3[1]) {
    func_0x000107c325fc();
    func_0x000107c326c4();
    func_0x000107c29f60(auStack_200);
    func_0x0001086da8b0(*(undefined8 *)(*(long *)(unaff_x21 + 0xd0) + 0xe0));
    func_0x0001086db2ec();
    (*extraout_x8)();
    func_0x0001086da6d8();
    func_0x0001086db11c();
  }
  return;
}



/* Entry: 1086c43a8; end: 1086c43af;  */

void FUN_1086c43a8(long param_1,undefined8 param_2,long *param_3)

{
  code *extraout_x8;
  long unaff_x21;
  undefined1 auStack_200 [464];
  
  if (*param_3 != param_3[1]) {
    func_0x000107c325fc(param_1 + -0x20);
    func_0x000107c326c4();
    func_0x000107c29f60(auStack_200);
    func_0x0001086da8b0(*(undefined8 *)(*(long *)(unaff_x21 + 0xd0) + 0xe0));
    func_0x0001086db2ec();
    (*extraout_x8)();
    func_0x0001086da6d8();
    func_0x0001086db11c();
  }
  return;
}



/* Entry: 1086c43b0; end: 1086c479f;  */

undefined8 ******* FUN_1086c43b0(void)

{
  ulong uVar1;
  undefined1 in_ZR;
  undefined8 ******ppppppuVar2;
  undefined8 *******pppppppuVar3;
  long extraout_x8;
  undefined8 ******ppppppuVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  code *extraout_x8_03;
  ulong extraout_x8_04;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 *******unaff_x19;
  undefined8 ****unaff_x22;
  undefined8 *****pppppuVar5;
  undefined8 ***pppuVar6;
  undefined8 **ppuVar7;
  undefined8 ******ppppppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 *****pppppuStack_170;
  undefined8 ***pppuStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  undefined1 auStack_140 [32];
  undefined8 ******ppppppuStack_120;
  undefined8 *****pppppuStack_118;
  undefined8 ***pppuStack_110;
  undefined8 ***pppuStack_108;
  undefined8 ***pppuStack_100;
  char cStack_f8;
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined8 *****pppppuStack_c0;
  undefined8 ****ppppuStack_b8;
  undefined8 *****pppppuStack_b0;
  undefined8 ***pppuStack_a8;
  ulong uStack_a0;
  undefined8 ******ppppppuStack_98;
  undefined8 *****pppppuStack_90;
  undefined8 **ppuStack_88;
  undefined8 ******ppppppuStack_80;
  undefined1 uStack_78;
  undefined8 uStack_68;
  
  func_0x000107c32678();
  func_0x0001086d9990();
  FUN_10886a858(&ppppppuStack_120,*(undefined8 *)(extraout_x8 + 0x20));
  func_0x0001086dac38();
  pppppuStack_c0 = (undefined8 ******)0x0;
  ppppuStack_b8 = (undefined8 ****)((ulong)ppppuStack_b8 & 0xffffffffffffff00);
  uVar1 = uStack_a0 >> 8;
  uStack_a0 = uStack_a0 & 0xffffffffffffff00;
  if (cStack_f8 == '\0') {
    ppppppuVar4 = (undefined8 ******)0x0;
  }
  else {
    pppppuStack_b0 = (undefined8 *****)pppuStack_108;
    ppppuStack_b8 = (undefined8 ****)pppuStack_110;
    pppuStack_a8 = pppuStack_100;
    pppuStack_108 = (undefined8 ****)0x0;
    pppuStack_100 = (undefined8 ****)0x0;
    pppuStack_110 = (undefined8 ****)0x0;
    uStack_a0 = CONCAT71((int7)uVar1,1);
    FUN_10865f984(&pppuStack_110);
    ppppppuVar4 = (undefined8 ******)pppppuStack_c0;
  }
  pppppuStack_c0 = pppppuStack_118;
  uStack_150 = 0;
  ppppppuVar8 = (undefined8 ******)0x0;
  ppppuVar9 = (undefined8 ****)0x0;
  pppuStack_168 = (undefined8 ***)0x0;
  pppppuStack_170 = (undefined8 ******)0x0;
  uStack_158 = 0;
  uStack_160 = 0;
  pppppuStack_118 = ppppppuVar4;
  while ((((uStack_a0 & 1) != 0 || ((uStack_150 & 1) != 0)) &&
         (in_ZR = 1, pppppuStack_c0 != pppppuStack_170))) {
    unaff_x22 = ppppuStack_b8;
    pppppuVar5 = pppppuStack_b0;
    if ((uStack_a0 & 1) == 0) {
      pppppuVar5 = (undefined8 *****)pppppuStack_c0[1];
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_f0,pppppuStack_c0 + 0xb);
      func_0x000107c27f54(auStack_d8,&UNK_10f4b14dd,auStack_f0);
      func_0x00010bcc7444(pppppuVar5,0x65,auStack_d8);
      func_0x0001086db684();
      func_0x0001086dab18();
      unaff_x22 = ppppuStack_b8;
      pppppuVar5 = pppppuStack_b0;
    }
    for (; in_ZR = (undefined8 *****)unaff_x22 == pppppuVar5, !(bool)in_ZR;
        unaff_x22 = unaff_x22 + 3) {
      FUN_1086c2e14(auStack_140,unaff_x22);
    }
    FUN_1086d5350(&pppppuStack_c0);
  }
  func_0x000107c28754((ulong)&pppppuStack_170 | 8);
  ppppppuVar4 = (undefined8 ******)&ppppuStack_b8;
  func_0x000107c28754();
  func_0x000107c326c8();
  pppppuStack_170 = ppppppuVar8;
  pppuStack_168 = ppppuVar9;
  if (extraout_x8_00 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10 != 0);
  }
  func_0x0001086d9b74();
  func_0x000107c28150();
  pppuVar6 = unaff_x22[2];
  ppppppuVar2 = ppppppuVar4;
  func_0x0001086da518();
  ppuVar7 = pppuVar6[0xe];
  pppppuStack_c0 = (undefined8 *****)FUN_1086d5408;
  ppppuStack_b8 = (undefined8 ****)&PTR_FUN_110a64ce0;
  func_0x000107c3268c();
  func_0x0001086d9ed4();
  if (extraout_x8_01 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10_00 != 0);
  }
  func_0x0001086dbd08();
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_160 = 0;
  pppppuStack_b0 = ppppppuVar2;
  pppppuStack_90 = ppppppuVar4;
  func_0x000107c28154(pppuVar6 + 9,&pppppuStack_c0);
  func_0x0001086d9c64(ppppuStack_b8);
  func_0x0001086da258();
  if (ppuVar7 == (undefined8 **)0x0) {
    func_0x000107c3261c();
    pppppuStack_c0 = ppppppuVar8;
    ppppuStack_b8 = ppppuVar9;
    if (extraout_x8_02 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_01 != 0);
    }
    func_0x000107c3265c();
    (*extraout_x8_03)();
    func_0x000107c27e74(&pppppuStack_c0);
  }
  FUN_1086c47a0(&pppppuStack_170);
  func_0x000104be1594(auStack_140);
  pppppppuVar3 = &ppppppuStack_120;
  FUN_1086d52f4(pppppppuVar3);
  while( true ) {
    while( true ) {
      func_0x000107c325c0(uStack_68);
      if ((bool)in_ZR) {
        return pppppppuVar3;
      }
      ___stack_chk_fail();
      func_0x0001086d9fec();
      func_0x000107c27e74(&pppppuStack_c0);
      FUN_1086c47a0(&pppppuStack_170);
      func_0x000104be1594(auStack_140);
      pppppppuVar3 = &ppppppuStack_120;
      FUN_1086d52f4();
      in_ZR = (int)unaff_x22 == 2;
      if (!(bool)in_ZR) break;
      func_0x0001086da000();
      func_0x000108848514();
      func_0x0001086da750();
      pppppppuVar3 = unaff_x19;
      FUN_1086c47c4();
      ___cxa_end_catch();
    }
    in_ZR = (int)unaff_x22 == 1;
    if (!(bool)in_ZR) break;
    func_0x0001086da000();
    func_0x0001086da510();
    func_0x0001086d98d0();
    pppppuStack_118 = (undefined8 ******)0x0;
    pppuStack_110 = (undefined8 ***)&UNK_10f4b1264;
    pppuStack_108 = (undefined8 ****)0x0;
    ppppppuStack_120 = pppppppuVar3;
    func_0x0001086d9b3c();
    func_0x0001086da324(&pppppuStack_170);
    func_0x0001086da31c(&ppppppuStack_120);
    func_0x000107c316c4();
    pppppuStack_c0 = (undefined8 *****)CONCAT44(pppppuStack_c0._4_4_,0x10);
    ppppuStack_b8 = (undefined8 ****)0x0;
    pppuStack_a8 = pppuStack_168;
    pppppuStack_b0 = pppppuStack_170;
    func_0x0001086da834(uStack_160);
    pppppuStack_90 = pppppuStack_118;
    ppppppuStack_98 = ppppppuStack_120;
    ppuStack_88 = pppuStack_110;
    ppppppuStack_120 = (undefined8 ******)0x0;
    pppppuStack_118 = (undefined8 ******)0x0;
    pppuStack_110 = (undefined8 ****)0x0;
    uStack_78 = 0;
    uStack_a0 = extraout_x8_04;
    ppppppuStack_80 = pppppppuVar3;
    func_0x0001086da358();
    pppppppuVar3 = (undefined8 *******)&pppppuStack_c0;
    func_0x00010786e114(pppppppuVar3);
    func_0x0001086da644();
    func_0x000107c32690();
    func_0x0001086da504();
    FUN_1086c47c4();
    ___cxa_end_catch();
  }
  func_0x0001086da008();
  func_0x0001086da22c();
  func_0x000107c326a4();
  func_0x000104be1594();
  pppppppuVar3 = unaff_x19;
  func_0x0001006248cc();
  if (pppppppuVar3 != (undefined8 *******)0x0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 1086c47a0; end: 1086c47c3;  */

long FUN_1086c47a0(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107c326a4();
  func_0x000104be1594();
  lVar1 = unaff_x19;
  func_0x0001006248cc();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 1086c47c4; end: 1086c489f;  */

void FUN_1086c47c4(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  undefined1 in_ZR;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined ***pppuVar5;
  undefined4 uVar6;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 uVar7;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  long lVar8;
  long *plVar9;
  undefined4 in_stack_00000010;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined1 auStack_150 [24];
  undefined8 *puStack_138;
  undefined **ppuStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  long *plStack_f8;
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  func_0x0001086db620();
  func_0x0001086d9810();
  if (((extraout_x8 & 1) == 0) && (param_2 != 0)) {
    func_0x0001086d9c18();
    uVar6 = (undefined4)param_4;
    if (param_3 != 0) {
      do {
        func_0x000107c325f8();
        uVar6 = (undefined4)param_4;
      } while (extraout_w10 != 0);
    }
    in_stack_00000010 = uVar6;
    func_0x000107c28150();
    func_0x0001086da310();
    func_0x0001086da1e0();
    func_0x0001086d97f8(0x1086d5430);
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001086d995c();
    func_0x0001086d9ad8();
    func_0x0001086d9850();
    func_0x0001086da01c();
    if (unaff_x22 == 0) {
      func_0x0001086d990c();
      if (extraout_x8_01 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_01 != 0);
      }
      func_0x000107c3265c();
      func_0x0001086da218();
      func_0x0001086da044();
    }
    func_0x0001086217ac();
  }
  func_0x000100864c10();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001086d9af0();
  puVar3 = (undefined1 *)register0x00000008;
  func_0x0001086217ac();
  func_0x0001086d9ff8();
  func_0x0001086da550();
  func_0x0001086da4ac();
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  lStack_80 = 0;
  uStack_70 = 0x3f800000;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_a0 = 0x3f800000;
  uStack_d8 = 0;
  func_0x000107c28258();
  uStack_c8 = 1;
  lVar1 = unaff_x21[1];
  puStack_d0 = puVar3;
  for (lVar8 = *unaff_x21; lVar8 != lVar1; lVar8 = lVar8 + 0x18) {
    func_0x000107c32698();
    FUN_1086a1a54(&ppuStack_130);
    uVar7 = 0;
    for (plVar9 = (long *)lStack_120; plVar2 = plStack_f8, plVar9 != (long *)0x0;
        plVar9 = (long *)*plVar9) {
      FUN_1086c4ca0(uVar7,&uStack_90,lVar8);
      FUN_10867b1ac();
      uVar7 = 1;
    }
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      FUN_1086c4ca0(uVar7,&uStack_c0,lVar8);
      FUN_10867b1ac();
      uVar7 = 1;
    }
    FUN_1086cc73c(&ppuStack_130);
  }
  puVar4 = &uStack_d8;
  func_0x000107c2825c();
  puStack_138 = puVar4;
  func_0x0001086da9c0();
  lStack_120 = 0;
  uStack_118 = 0;
  ppuStack_130 = &PTR_FUN_110a609a8;
  uStack_128 = 0;
  uStack_110 = 0x161;
  func_0x0001086da408();
  (*extraout_x8_02)();
  func_0x000107c2882c(&ppuStack_130);
  func_0x0001086dac80(*(undefined8 *)(unaff_x19 + 0xd0));
  func_0x000107c278b8(auStack_150,&UNK_10f4b127c);
  func_0x0001086da67c(&ppuStack_130);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_150);
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  lStack_170 = 0;
  uStack_160 = 0x3f800000;
  for (plVar9 = (long *)lStack_80; plVar2 = plStack_b0, plVar9 != (long *)0x0;
      plVar9 = (long *)*plVar9) {
    func_0x0001086dba30();
  }
  for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    func_0x0001086dba30();
  }
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_190 = 0x3f800000;
  for (plVar9 = (long *)lStack_170; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
    FUN_1086d5914(&uStack_90,plVar9 + 2);
    FUN_1086d5914(&uStack_c0,plVar9 + 2);
    FUN_1086b7de0();
  }
  pppuVar5 = &ppuStack_130;
  func_0x000107c31428();
  func_0x0001086da5ac();
  (*(code *)(*pppuVar5)[0xf])();
  func_0x0001086da9d8();
  func_0x0001086da5ac();
  (*(code *)(*pppuVar5)[0xf])();
  func_0x0001086da9d8();
  func_0x0001086da5ac();
  func_0x0001086db6dc((*pppuVar5)[0xf]);
  func_0x0001086da9d8();
  func_0x000107c2825c();
  func_0x0001086da5ac();
  func_0x0001086da408();
  (*extraout_x8_03)();
  func_0x0001086da9d8();
  func_0x0001086da5ac();
  func_0x0001086da408();
  (*extraout_x8_04)();
  func_0x0001086da9d8();
  func_0x00010867bb84(&uStack_1b0);
  func_0x000100864b68(&uStack_180);
  func_0x000107c31424(&ppuStack_130);
  FUN_1086d2c8c(&uStack_c0);
  FUN_1086d2c8c(&uStack_90);
  return;
}



/* Entry: 1086c48a0; end: 1086c4c9f;  */

void FUN_1086c48a0(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined ***pppuVar4;
  undefined8 uVar5;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long unaff_x19;
  long *unaff_x21;
  long lVar6;
  long *plVar7;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined1 auStack_150 [24];
  undefined8 *puStack_138;
  undefined **ppuStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  long *plStack_f8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  func_0x0001086da550();
  func_0x0001086da4ac();
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  lStack_80 = 0;
  uStack_70 = 0x3f800000;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_a0 = 0x3f800000;
  uStack_d8 = 0;
  func_0x000107c28258();
  uStack_c8 = 1;
  lVar1 = unaff_x21[1];
  uStack_d0 = param_1;
  for (lVar6 = *unaff_x21; lVar6 != lVar1; lVar6 = lVar6 + 0x18) {
    func_0x000107c32698();
    FUN_1086a1a54(&ppuStack_130);
    uVar5 = 0;
    for (plVar7 = (long *)lStack_120; plVar2 = plStack_f8, plVar7 != (long *)0x0;
        plVar7 = (long *)*plVar7) {
      FUN_1086c4ca0(uVar5,&uStack_90,lVar6);
      FUN_10867b1ac();
      uVar5 = 1;
    }
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      FUN_1086c4ca0(uVar5,&uStack_c0,lVar6);
      FUN_10867b1ac();
      uVar5 = 1;
    }
    FUN_1086cc73c(&ppuStack_130);
  }
  puVar3 = &uStack_d8;
  func_0x000107c2825c();
  puStack_138 = puVar3;
  func_0x0001086da9c0();
  lStack_120 = 0;
  uStack_118 = 0;
  ppuStack_130 = &PTR_FUN_110a609a8;
  uStack_128 = 0;
  uStack_110 = 0x161;
  func_0x0001086da408();
  (*extraout_x8)();
  func_0x000107c2882c(&ppuStack_130);
  func_0x0001086dac80(*(undefined8 *)(unaff_x19 + 0xd0));
  func_0x000107c278b8(auStack_150,&UNK_10f4b127c);
  func_0x0001086da67c(&ppuStack_130);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_150);
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  lStack_170 = 0;
  uStack_160 = 0x3f800000;
  for (plVar7 = (long *)lStack_80; plVar2 = plStack_b0, plVar7 != (long *)0x0;
      plVar7 = (long *)*plVar7) {
    func_0x0001086dba30();
  }
  for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    func_0x0001086dba30();
  }
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_190 = 0x3f800000;
  for (plVar7 = (long *)lStack_170; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
    FUN_1086d5914(&uStack_90,plVar7 + 2);
    FUN_1086d5914(&uStack_c0,plVar7 + 2);
    FUN_1086b7de0();
  }
  pppuVar4 = &ppuStack_130;
  func_0x000107c31428();
  func_0x0001086da5ac();
  (*(code *)(*pppuVar4)[0xf])();
  func_0x0001086da9d8();
  func_0x0001086da5ac();
  (*(code *)(*pppuVar4)[0xf])();
  func_0x0001086da9d8();
  func_0x0001086da5ac();
  func_0x0001086db6dc((*pppuVar4)[0xf]);
  func_0x0001086da9d8();
  func_0x000107c2825c();
  func_0x0001086da5ac();
  func_0x0001086da408();
  (*extraout_x8_00)();
  func_0x0001086da9d8();
  func_0x0001086da5ac();
  func_0x0001086da408();
  (*extraout_x8_01)();
  func_0x0001086da9d8();
  func_0x00010867bb84(&uStack_1b0);
  func_0x000100864b68(&uStack_180);
  func_0x000107c31424(&ppuStack_130);
  FUN_1086d2c8c(&uStack_c0);
  FUN_1086d2c8c(&uStack_90);
  return;
}



/* Entry: 1086c4ca0; end: 1086c4ccf;  */

long FUN_1086c4ca0(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_1086d5474(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x28;
}



/* Entry: 1086c4cd0; end: 1086c4cd7;  */

void FUN_1086c4cd0(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined ***pppuVar4;
  undefined8 uVar5;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long unaff_x19;
  long *unaff_x21;
  long lVar6;
  long *plVar7;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined1 auStack_150 [24];
  undefined8 *puStack_138;
  undefined **ppuStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  long *plStack_f8;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  param_1 = param_1 + -0x28;
  func_0x0001086da550();
  func_0x0001086da4ac();
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  lStack_80 = 0;
  uStack_70 = 0x3f800000;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_a0 = 0x3f800000;
  uStack_d8 = 0;
  func_0x000107c28258();
  uStack_c8 = 1;
  lVar1 = unaff_x21[1];
  lStack_d0 = param_1;
  for (lVar6 = *unaff_x21; lVar6 != lVar1; lVar6 = lVar6 + 0x18) {
    func_0x000107c32698();
    FUN_1086a1a54(&ppuStack_130);
    uVar5 = 0;
    for (plVar7 = (long *)lStack_120; plVar2 = plStack_f8, plVar7 != (long *)0x0;
        plVar7 = (long *)*plVar7) {
      FUN_1086c4ca0(uVar5,&uStack_90,lVar6);
      FUN_10867b1ac();
      uVar5 = 1;
    }
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      FUN_1086c4ca0(uVar5,&uStack_c0,lVar6);
      FUN_10867b1ac();
      uVar5 = 1;
    }
    FUN_1086cc73c(&ppuStack_130);
  }
  puVar3 = &uStack_d8;
  func_0x000107c2825c();
  puStack_138 = puVar3;
  func_0x0001086da9c0();
  lStack_120 = 0;
  uStack_118 = 0;
  ppuStack_130 = &PTR_FUN_110a609a8;
  uStack_128 = 0;
  uStack_110 = 0x161;
  func_0x0001086da408();
  (*extraout_x8)();
  func_0x000107c2882c(&ppuStack_130);
  func_0x0001086dac80(*(undefined8 *)(unaff_x19 + 0xd0));
  func_0x000107c278b8(auStack_150,&UNK_10f4b127c);
  func_0x0001086da67c(&ppuStack_130);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_150);
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  lStack_170 = 0;
  uStack_160 = 0x3f800000;
  for (plVar7 = (long *)lStack_80; plVar2 = plStack_b0, plVar7 != (long *)0x0;
      plVar7 = (long *)*plVar7) {
    func_0x0001086dba30();
  }
  for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    func_0x0001086dba30();
  }
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_190 = 0x3f800000;
  for (plVar7 = (long *)lStack_170; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
    FUN_1086d5914(&uStack_90,plVar7 + 2);
    FUN_1086d5914(&uStack_c0,plVar7 + 2);
    FUN_1086b7de0();
  }
  pppuVar4 = &ppuStack_130;
  func_0x000107c31428();
  func_0x0001086da5ac();
  (*(code *)(*pppuVar4)[0xf])();
  func_0x0001086da9d8();
  func_0x0001086da5ac();
  (*(code *)(*pppuVar4)[0xf])();
  func_0x0001086da9d8();
  func_0x0001086da5ac();
  func_0x0001086db6dc((*pppuVar4)[0xf]);
  func_0x0001086da9d8();
  func_0x000107c2825c();
  func_0x0001086da5ac();
  func_0x0001086da408();
  (*extraout_x8_00)();
  func_0x0001086da9d8();
  func_0x0001086da5ac();
  func_0x0001086da408();
  (*extraout_x8_01)();
  func_0x0001086da9d8();
  func_0x00010867bb84(&uStack_1b0);
  func_0x000100864b68(&uStack_180);
  func_0x000107c31424(&ppuStack_130);
  FUN_1086d2c8c(&uStack_c0);
  FUN_1086d2c8c(&uStack_90);
  return;
}



/* Entry: 1086c4cd8; end: 1086c4f2b;  */

void FUN_1086c4cd8(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 in_ZR;
  long extraout_x8;
  undefined **ppuVar4;
  ulong uVar5;
  code *extraout_x8_00;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *unaff_x20;
  long *plVar10;
  long lStack_220;
  long lStack_218;
  undefined1 auStack_208 [136];
  undefined8 uStack_180;
  byte bStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined4 uStack_10;
  
  func_0x0001086dbb70();
  if (*(long *)(param_3 + 0x18) != 0) {
    func_0x0001086dbdd4();
    uStack_28 = 0;
    uStack_30 = 0;
    uStack_18 = 0;
    uStack_20 = 0;
    uStack_10 = 0x3f800000;
    FUN_1086d59e4(&uStack_30);
    plVar10 = unaff_x20 + 2;
    while (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0) {
      FUN_10867b1ac(&uStack_30,plVar10 + 2);
    }
    func_0x0001086da55c();
    func_0x0001086da598(auStack_208);
    if ((bStack_38 & 1) != 0) {
      func_0x0001086da2e8(uStack_180);
      if ((bool)in_ZR) {
        ppuVar4 = *(undefined ***)(extraout_x8 + 0x10);
      }
      else {
        ppuVar4 = &PTR_PTR_11326be60;
      }
      if (*(char *)((long)ppuVar4 + 0x21) == '\x01') {
        func_0x0001086da55c();
        FUN_108861b60(&lStack_220);
        for (; lStack_220 != lStack_218; lStack_220 = lStack_220 + 0x1a8) {
          if ((((*(char *)(lStack_220 + 0x28) == '\x01') &&
               (*(long *)(lStack_220 + 0x20) <= param_4)) && (uVar5 = unaff_x20[1], uVar5 != 0)) &&
             (unaff_x20[3] != 0)) {
            uVar6 = *(ulong *)(lStack_220 + 0x18);
            uVar7 = uVar5 - 1;
            if ((uVar5 & uVar7) == 0) {
              uVar8 = uVar7 & uVar6;
            }
            else {
              uVar8 = uVar6;
              if (uVar5 <= uVar6) {
                uVar8 = 0;
                if (uVar5 != 0) {
                  uVar8 = uVar6 / uVar5;
                }
                uVar8 = uVar6 - uVar8 * uVar5;
              }
            }
            plVar10 = *(long **)(*unaff_x20 + uVar8 * 8);
            if (plVar10 != (long *)0x0) {
              do {
                while( true ) {
                  plVar10 = (long *)*plVar10;
                  if (plVar10 == (long *)0x0) goto LAB_1086c4dbc;
                  uVar9 = plVar10[1];
                  if (uVar6 != uVar9) break;
                  if (plVar10[2] == uVar6) {
                    piVar1 = (int *)(lStack_220 + 0x110);
                    if ((*(char *)(lStack_220 + 0x114) != '\x01') || (1 < *piVar1 - 1U)) {
                      uVar2 = 0x100000002;
                      if ((*(uint *)(plVar10 + 3) & 0xfffffffd) != 0) {
                        uVar2 = 0x100000003;
                      }
                      if ((*(char *)(lStack_220 + 0x114) == '\0') || (*piVar1 != (int)uVar2)) {
                        *piVar1 = (int)uVar2;
                        *(char *)(lStack_220 + 0x114) = (char)((ulong)uVar2 >> 0x20);
                        func_0x0001086da55c();
                        func_0x000107c3265c();
                        (*extraout_x8_00)();
                      }
                    }
                    goto LAB_1086c4dbc;
                  }
                }
                if ((uVar5 & uVar7) == 0) {
                  uVar9 = uVar9 & uVar7;
                }
                else if (uVar5 <= uVar9) {
                  uVar3 = 0;
                  if (uVar5 != 0) {
                    uVar3 = uVar9 / uVar5;
                  }
                  uVar9 = uVar9 - uVar3 * uVar5;
                }
              } while (uVar9 == uVar8);
            }
          }
LAB_1086c4dbc:
        }
        func_0x00010867b9fc(&lStack_220);
      }
    }
    func_0x000107c288c8(auStack_208);
    func_0x00010867bb84(&uStack_30);
  }
  return;
}



/* Entry: 1086c4f2c; end: 1086c4f4b;  */

void FUN_1086c4f2c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 in_ZR;
  long extraout_x8;
  undefined **ppuVar4;
  ulong uVar5;
  code *extraout_x8_00;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *unaff_x20;
  long *plVar10;
  long lStack_220;
  long lStack_218;
  undefined1 auStack_208 [136];
  undefined8 uStack_180;
  byte bStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined4 uStack_10;
  
  func_0x0001086dbb70(param_1 + -0x28);
  if (*(long *)(param_3 + 0x18) != 0) {
    func_0x0001086dbdd4();
    uStack_28 = 0;
    uStack_30 = 0;
    uStack_18 = 0;
    uStack_20 = 0;
    uStack_10 = 0x3f800000;
    FUN_1086d59e4(&uStack_30);
    plVar10 = unaff_x20 + 2;
    while (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0) {
      FUN_10867b1ac(&uStack_30,plVar10 + 2);
    }
    func_0x0001086da55c();
    func_0x0001086da598(auStack_208);
    if ((bStack_38 & 1) != 0) {
      func_0x0001086da2e8(uStack_180);
      if ((bool)in_ZR) {
        ppuVar4 = *(undefined ***)(extraout_x8 + 0x10);
      }
      else {
        ppuVar4 = &PTR_PTR_11326be60;
      }
      if (*(char *)((long)ppuVar4 + 0x21) == '\x01') {
        func_0x0001086da55c();
        FUN_108861b60(&lStack_220);
        for (; lStack_220 != lStack_218; lStack_220 = lStack_220 + 0x1a8) {
          if ((((*(char *)(lStack_220 + 0x28) == '\x01') &&
               (*(long *)(lStack_220 + 0x20) <= param_4)) && (uVar5 = unaff_x20[1], uVar5 != 0)) &&
             (unaff_x20[3] != 0)) {
            uVar6 = *(ulong *)(lStack_220 + 0x18);
            uVar7 = uVar5 - 1;
            if ((uVar5 & uVar7) == 0) {
              uVar8 = uVar7 & uVar6;
            }
            else {
              uVar8 = uVar6;
              if (uVar5 <= uVar6) {
                uVar8 = 0;
                if (uVar5 != 0) {
                  uVar8 = uVar6 / uVar5;
                }
                uVar8 = uVar6 - uVar8 * uVar5;
              }
            }
            plVar10 = *(long **)(*unaff_x20 + uVar8 * 8);
            if (plVar10 != (long *)0x0) {
              do {
                while( true ) {
                  plVar10 = (long *)*plVar10;
                  if (plVar10 == (long *)0x0) goto LAB_1086c4dbc;
                  uVar9 = plVar10[1];
                  if (uVar6 != uVar9) break;
                  if (plVar10[2] == uVar6) {
                    piVar1 = (int *)(lStack_220 + 0x110);
                    if ((*(char *)(lStack_220 + 0x114) != '\x01') || (1 < *piVar1 - 1U)) {
                      uVar2 = 0x100000002;
                      if ((*(uint *)(plVar10 + 3) & 0xfffffffd) != 0) {
                        uVar2 = 0x100000003;
                      }
                      if ((*(char *)(lStack_220 + 0x114) == '\0') || (*piVar1 != (int)uVar2)) {
                        *piVar1 = (int)uVar2;
                        *(char *)(lStack_220 + 0x114) = (char)((ulong)uVar2 >> 0x20);
                        func_0x0001086da55c();
                        func_0x000107c3265c();
                        (*extraout_x8_00)();
                      }
                    }
                    goto LAB_1086c4dbc;
                  }
                }
                if ((uVar5 & uVar7) == 0) {
                  uVar9 = uVar9 & uVar7;
                }
                else if (uVar5 <= uVar9) {
                  uVar3 = 0;
                  if (uVar5 != 0) {
                    uVar3 = uVar9 / uVar5;
                  }
                  uVar9 = uVar9 - uVar3 * uVar5;
                }
              } while (uVar9 == uVar8);
            }
          }
LAB_1086c4dbc:
        }
        func_0x00010867b9fc(&lStack_220);
      }
    }
    func_0x000107c288c8(auStack_208);
    func_0x00010867bb84(&uStack_30);
  }
  return;
}



/* Entry: 1086c4f4c; end: 1086c4f8b;  */

void FUN_1086c4f4c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xd0);
  FUN_1086a3b08(lVar1 + 0x20,lVar1 + 0xa0,lVar1 + 0x30,0x18);
  return;
}



/* Entry: 1086c4f8c; end: 1086c5007;  */

void FUN_1086c4f8c(ulong param_1)

{
  ulong uVar1;
  long *unaff_x19;
  
  func_0x0001086dbf08();
  func_0x000107c326c4();
  FUN_10885eb34();
  uVar1 = param_1;
  func_0x0001086da55c();
  FUN_10885ebc4();
  (**(code **)(*unaff_x19 + 8))(param_1 & 0xffffffff | uVar1 << 0x20);
  return;
}



/* Entry: 1086c5008; end: 1086c51ab;  */

void FUN_1086c5008(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000107c32678();
  lVar3 = param_1[0x1a];
  plVar2 = *(long **)(lVar3 + 0x10);
  func_0x000107c32774();
  param_1[1] = 0;
  param_1[2] = 0;
  puVar1 = param_1 + 3;
  *param_1 = &PTR_DAT_110a64d20;
  FUN_10876b838(puVar1,lVar3 + 0x210,lVar3 + 0x100);
  uStack_60 = 0;
  uStack_58 = 0;
  puStack_b0 = puVar1;
  puStack_a8 = param_1;
  func_0x0001086dad6c(*(undefined8 *)(*plVar2 + 0x38));
  func_0x0001086d5a48(&puStack_b0);
  func_0x0001086d5a24(&uStack_60);
  return;
}



/* Entry: 1086c51ac; end: 1086c5287;  */

void FUN_1086c51ac(undefined8 param_1,long param_2,long *param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  code *extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  long unaff_x19;
  undefined8 *unaff_x22;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 auStack_100 [3];
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  uint auStack_c0 [2];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  ulong uStack_90;
  undefined *puStack_88;
  undefined8 *puStack_80;
  undefined1 uStack_78;
  undefined8 *puStack_70;
  ulong uStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  
  func_0x0001086db620();
  func_0x0001086d9810();
  if (((extraout_x8 & 1) == 0) && (param_2 != 0)) {
    func_0x0001086d9c18();
    if (param_3 != (long *)0x0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10 != 0);
    }
    func_0x000107c28150();
    func_0x0001086da310();
    func_0x0001086da1e0();
    func_0x0001086d97f8(FUN_1086d5a6c);
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001086d995c();
    func_0x0001086d9ad8();
    func_0x0001086d9850();
    func_0x0001086da01c();
    if (unaff_x22 == (undefined8 *)0x0) {
      func_0x0001086d990c();
      if (extraout_x8_01 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_01 != 0);
      }
      func_0x000107c3265c();
      func_0x0001086da218();
      func_0x0001086da044();
    }
    func_0x0001086217d0();
  }
  func_0x000100864c10();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001086d9af0();
  func_0x0001086217d0();
  func_0x0001086d9ff8();
  func_0x000100864738();
  if (*param_3 != 0) {
    func_0x0001086da060();
    func_0x0001086da3cc(auStack_c0);
    func_0x000107c29ef0(&uStack_d8,auStack_c0);
    func_0x000107c27914(auStack_c0);
    lVar3 = *(long *)(unaff_x19 + 0x18);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x10);
    uStack_110 = uVar2;
    lStack_108 = lVar3;
    if (*(long *)(unaff_x19 + 0x18) != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_02 != 0);
    }
    puVar1 = auStack_100;
    func_0x000107c27994(puVar1,&uStack_d8);
    func_0x0001086da81c();
    uStack_e8 = uVar2;
    lStack_e0 = lVar3;
    if (extraout_x8_02 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_03 != 0);
    }
    func_0x000107c326e0();
    *puVar1 = &PTR_FUN_110a64da0;
    unaff_x22 = puVar1 + 1;
    puVar1[2] = lStack_108;
    *unaff_x22 = uStack_110;
    uStack_110 = 0;
    lStack_108 = 0;
    func_0x000107c27994(puVar1 + 3,auStack_100);
    puVar1[7] = lStack_e0;
    puVar1[6] = uStack_e8;
    if (lStack_e0 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_04 != 0);
    }
    puStack_58 = puVar1;
    FUN_1086c5560(&uStack_110);
    auStack_c0[0] = auStack_c0[0] & 0xffffff00;
    uStack_90 = uStack_90 & 0xffffffffffffff00;
    func_0x000107c326e4(*(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0x90));
    (*extraout_x8_03)();
    func_0x00010086ab34(auStack_c0);
    FUN_1086d1cac(&puStack_70);
    func_0x000107c27914(&uStack_d8);
  }
LAB_1086c53b0:
  do {
    func_0x000100864c10();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001086d9fec();
    func_0x00010086ab34(auStack_c0);
    FUN_1086d1cac(&puStack_70);
    puVar1 = &uStack_d8;
    func_0x000107c27914();
    while( true ) {
      in_ZR = (int)unaff_x22 == 2;
      if ((bool)in_ZR) break;
      in_ZR = (int)unaff_x22 == 1;
      if ((bool)in_ZR) {
        func_0x0001086da000();
        func_0x0001086da510();
        func_0x0001086d98d0();
        uStack_68 = 0;
        puStack_60 = &DAT_10f4b12aa;
        puStack_58 = (undefined8 *)0x0;
        puStack_70 = puVar1;
        func_0x0001086d9b3c();
        func_0x0001086da324(&uStack_d8);
        func_0x0001086da31c(&puStack_70);
        func_0x000107c316c4();
        puStack_88 = puStack_60;
        auStack_c0[0] = 0x10;
        uStack_b8 = 0;
        uStack_a8 = uStack_d0;
        uStack_b0 = uStack_d8;
        uStack_a0 = uStack_c8;
        uStack_d8 = 0;
        uStack_d0 = 0;
        uStack_c8 = 0;
        uStack_90 = uStack_68;
        puStack_98 = puStack_70;
        puStack_70 = (undefined8 *)0x0;
        uStack_68 = 0;
        puStack_60 = (undefined *)0x0;
        uStack_78 = 0;
        puStack_80 = puVar1;
        func_0x0001086da358();
        func_0x0001086db188();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_70);
        func_0x0001086da710();
        func_0x0001086da504();
        FUN_1086c5584();
        ___cxa_end_catch();
        goto LAB_1086c53b0;
      }
      func_0x0001086da008();
      func_0x0001086da22c();
      func_0x0001086d9fec();
    }
    func_0x0001086da000();
    func_0x000108848514();
    func_0x0001086da750();
    FUN_1086c5584();
    ___cxa_end_catch();
  } while( true );
}



/* Entry: 1086c5288; end: 1086c555f;  */

void FUN_1086c5288(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long unaff_x19;
  undefined8 *unaff_x22;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 auStack_100 [3];
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  uint auStack_c0 [2];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  ulong uStack_90;
  undefined *puStack_88;
  undefined8 *puStack_80;
  undefined1 uStack_78;
  undefined8 *puStack_70;
  ulong uStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  
  func_0x000100864738();
  if (*param_3 != 0) {
    func_0x0001086da060();
    func_0x0001086da3cc(auStack_c0);
    func_0x000107c29ef0(&uStack_d8,auStack_c0);
    func_0x000107c27914(auStack_c0);
    lVar3 = *(long *)(unaff_x19 + 0x18);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x10);
    uStack_110 = uVar2;
    lStack_108 = lVar3;
    if (*(long *)(unaff_x19 + 0x18) != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10 != 0);
    }
    puVar1 = auStack_100;
    func_0x000107c27994(puVar1,&uStack_d8);
    func_0x0001086da81c();
    uStack_e8 = uVar2;
    lStack_e0 = lVar3;
    if (extraout_x8 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c326e0();
    *puVar1 = &PTR_FUN_110a64da0;
    unaff_x22 = puVar1 + 1;
    puVar1[2] = lStack_108;
    *unaff_x22 = uStack_110;
    uStack_110 = 0;
    lStack_108 = 0;
    func_0x000107c27994(puVar1 + 3,auStack_100);
    puVar1[7] = lStack_e0;
    puVar1[6] = uStack_e8;
    if (lStack_e0 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_01 != 0);
    }
    puStack_58 = puVar1;
    FUN_1086c5560(&uStack_110);
    auStack_c0[0] = auStack_c0[0] & 0xffffff00;
    uStack_90 = uStack_90 & 0xffffffffffffff00;
    func_0x000107c326e4(*(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0x90));
    (*extraout_x8_00)();
    func_0x00010086ab34(auStack_c0);
    FUN_1086d1cac(&puStack_70);
    func_0x000107c27914(&uStack_d8);
  }
LAB_1086c53b0:
  do {
    func_0x000100864c10();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001086d9fec();
    func_0x00010086ab34(auStack_c0);
    FUN_1086d1cac(&puStack_70);
    puVar1 = &uStack_d8;
    func_0x000107c27914();
    while( true ) {
      in_ZR = (int)unaff_x22 == 2;
      if ((bool)in_ZR) break;
      in_ZR = (int)unaff_x22 == 1;
      if ((bool)in_ZR) {
        func_0x0001086da000();
        func_0x0001086da510();
        func_0x0001086d98d0();
        uStack_68 = 0;
        puStack_60 = &DAT_10f4b12aa;
        puStack_58 = (undefined8 *)0x0;
        puStack_70 = puVar1;
        func_0x0001086d9b3c();
        func_0x0001086da324(&uStack_d8);
        func_0x0001086da31c(&puStack_70);
        func_0x000107c316c4();
        puStack_88 = puStack_60;
        auStack_c0[0] = 0x10;
        uStack_b8 = 0;
        uStack_a8 = uStack_d0;
        uStack_b0 = uStack_d8;
        uStack_a0 = uStack_c8;
        uStack_d8 = 0;
        uStack_d0 = 0;
        uStack_c8 = 0;
        uStack_90 = uStack_68;
        puStack_98 = puStack_70;
        puStack_70 = (undefined8 *)0x0;
        uStack_68 = 0;
        puStack_60 = (undefined *)0x0;
        uStack_78 = 0;
        puStack_80 = puVar1;
        func_0x0001086da358();
        func_0x0001086db188();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_70);
        func_0x0001086da710();
        func_0x0001086da504();
        FUN_1086c5584();
        ___cxa_end_catch();
        goto LAB_1086c53b0;
      }
      func_0x0001086da008();
      func_0x0001086da22c();
      func_0x0001086d9fec();
    }
    func_0x0001086da000();
    func_0x000108848514();
    func_0x0001086da750();
    FUN_1086c5584();
    ___cxa_end_catch();
  } while( true );
}



/* Entry: 1086c5560; end: 1086c5583;  */

long FUN_1086c5560(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107c32730();
  func_0x0001086217f4();
  func_0x000107c327f0();
  lVar1 = unaff_x19;
  func_0x00010055315c();
  if (lVar1 != 0) {
    func_0x000107c60d68();
  }
  return unaff_x19;
}



/* Entry: 1086c5584; end: 1086c565f;  */

undefined1 * FUN_1086c5584(undefined1 *param_1,long param_2,long param_3,undefined4 param_4)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long unaff_x22;
  undefined4 in_stack_00000010;
  undefined1 *puStack_28;
  
  func_0x0001086db620();
  func_0x0001086d9810();
  if (((extraout_x8 & 1) == 0) && (param_2 != 0)) {
    func_0x0001086d9c18();
    if (param_3 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10 != 0);
    }
    in_stack_00000010 = param_4;
    func_0x000107c28150();
    func_0x0001086da310();
    func_0x0001086da1e0();
    func_0x0001086d97f8(0x1086d5ab0);
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001086d995c();
    func_0x0001086d9ad8();
    func_0x0001086d9850();
    func_0x0001086da01c();
    if (unaff_x22 == 0) {
      func_0x0001086d990c();
      if (extraout_x8_01 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_01 != 0);
      }
      func_0x000107c3265c();
      func_0x0001086da218();
      func_0x0001086da044();
    }
    param_1 = (undefined1 *)register0x00000008;
    func_0x0001086217f4();
  }
  func_0x000100864c10();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001086d9af0();
    puVar1 = (undefined1 *)register0x00000008;
    func_0x0001086217f4();
    func_0x0001086d9ff8();
    FUN_1086cc6ac(puVar1 + 0x18);
    puStack_28 = puVar1;
    func_0x00010867ba30(&puStack_28);
    return puVar1;
  }
  return param_1;
}



/* Entry: 1086c5660; end: 1086c56a3;  */

long FUN_1086c5660(long param_1)

{
  long lStack_28;
  
  FUN_1086cc6ac(param_1 + 0x18);
  lStack_28 = param_1;
  func_0x00010867ba30(&lStack_28);
  return param_1;
}



/* Entry: 1086c56a4; end: 1086c5c13;  */

void FUN_1086c56a4(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined *param_4,
                  undefined1 param_5,undefined4 param_6,ulong *param_7)

{
  undefined ***pppuVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined1 in_ZR;
  undefined ***pppuVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  code *extraout_x8_05;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  undefined **unaff_x20;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined **ppuStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  undefined8 uStack_2d0;
  undefined1 *puStack_2c8;
  undefined1 *puStack_2c0;
  undefined1 *puStack_2b8;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined1 uStack_230;
  undefined4 uStack_228;
  undefined1 uStack_221;
  undefined *puStack_220;
  undefined4 uStack_214;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined **ppuStack_1e0;
  undefined1 *puStack_1d8;
  undefined ***pppuStack_1c8;
  undefined1 auStack_1c0 [24];
  undefined ***pppuStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined1 auStack_190 [32];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 auStack_158 [24];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_120 [24];
  undefined8 *puStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  undefined ***pppuStack_d0;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined1 auStack_70 [32];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 uStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [24];
  undefined1 auStack_18 [16];
  undefined8 uStack_8;
  
  uStack_221 = param_5;
  func_0x000107c32728();
  func_0x0001086d9934();
  puStack_240 = (undefined *)0x0;
  uStack_228 = param_6;
  puStack_220 = param_4;
  uStack_214 = param_3;
  uStack_8 = extraout_x8;
  func_0x000107c28258();
  uStack_230 = 1;
  ppuVar7 = &puStack_240;
  puStack_2c8 = &stack0xfffffffffffffd80;
  ppuStack_2e8 = &PTR_DAT_110a947b8;
  uStack_2e0 = 0;
  uVar8 = *param_7;
  uStack_2d0 = 0;
  pppuVar5 = &ppuStack_2e8;
  puStack_2c0 = puStack_2c8;
  puStack_2b8 = puStack_2c8;
  uStack_238 = param_1;
  func_0x000107c3034c(pppuVar5,uVar8,(int)param_7[1] - (int)uVar8);
  uVar4 = uStack_214;
  uVar3 = uStack_221;
  uVar2 = uStack_228;
  if ((int)pppuVar5 != 0) {
    in_ZR = uStack_2d0._4_4_ == 1;
    if ((bool)in_ZR) {
      pppuVar5 = &ppuStack_2e8;
      FUN_1086d0184(pppuVar5);
      FUN_1086c5c24(&stack0xfffffffffffffcf0,pppuVar5);
      goto LAB_1086c57f8;
    }
    if (uStack_2d0._4_4_ == 0xd) {
      ppuVar9 = *(undefined ***)(lStack_2d8 + 0x18);
      func_0x0001086da3c4();
      ppuVar12 = &PTR_PTR_11327f548;
      if (ppuVar9 != (undefined **)0x0) {
        ppuVar12 = ppuVar9;
      }
      *pppuVar5 = &PTR_DAT_110a64ee8;
      pppuVar5[2] = ppuVar7;
      pppuVar5[1] = unaff_x20;
      pppuVar5[3] = &puStack_220;
      puStack_1d8 = &stack0xfffffffffffffd80;
      ppuStack_1e0 = &PTR_DAT_110a64e68;
      pppuStack_1c8 = &ppuStack_1e0;
      ppuVar9 = unaff_x20;
      pppuStack_1a8 = pppuVar5;
      func_0x000107c326d0(*(undefined8 *)(*unaff_x20 + 0x290));
      (*extraout_x8_00)();
      pppuVar1 = pppuVar5;
      if ((uVar8 & 1) == 0) {
        pppuVar1 = (undefined ***)0x0;
      }
      in_ZR = (long)ppuVar12[7] - (long)pppuVar1 == 1;
      if ((long)ppuVar12[7] - (long)pppuVar1 < 2) {
        if ((bool)in_ZR) {
          func_0x0001086db510();
          ppuStack_78 = ppuVar7;
          if (extraout_x8_01 != 0) {
            do {
              func_0x000107c325f8();
            } while (extraout_w10 != 0);
          }
          FUN_1086d62d8(auStack_70,auStack_1c0);
          uStack_50 = uVar4;
          uStack_4c = uVar2;
          uStack_48 = uVar3;
          puStack_40 = ppuVar12[7];
          func_0x0001086db7c8(auStack_38);
          FUN_1086d1d40(auStack_18,unaff_x20[2],unaff_x20[3]);
          FUN_1086d0208(&ppuStack_100,ppuVar12);
          uStack_1f8 = 0;
          uStack_200 = 0;
          uStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_208 = 0;
          uStack_210 = 0;
          FUN_1086cf200(&uStack_210);
          FUN_1086c5e18(&uStack_1a0,&ppuStack_80);
          puStack_108 = (undefined8 *)0x0;
          puVar6 = (undefined8 *)0x80;
          __Znwm();
          *puVar6 = &PTR_SUB_110a64f68;
          puVar6[2] = lStack_198;
          puVar6[1] = uStack_1a0;
          if (lStack_198 != 0) {
            do {
              func_0x000107c325f8();
            } while (extraout_w10_00 != 0);
          }
          FUN_1086d62d8(puVar6 + 3,auStack_190);
          puVar6[8] = uStack_168;
          puVar6[7] = uStack_170;
          puVar6[9] = uStack_160;
          func_0x000107c27994(puVar6 + 10,auStack_158);
          puVar6[0xe] = uStack_138;
          puVar6[0xd] = uStack_140;
          puVar6[0xf] = uStack_130;
          uStack_138 = 0;
          uStack_130 = 0;
          puStack_108 = puVar6;
          func_0x000107c326d0(*(undefined8 *)(*unaff_x20 + 0x298));
          (*extraout_x8_02)();
          FUN_1086d665c(auStack_120);
          FUN_1086c5eb8(&uStack_1a0);
          func_0x0001086cf230(&uStack_210);
          func_0x000107c28d04(&ppuStack_100);
          FUN_1086c5eb8(&ppuStack_80);
        }
        else {
          lVar10 = *(long *)(unaff_x20[0x1a] + 0x100);
          func_0x0001086db510();
          ppuStack_80 = ppuVar9;
          ppuStack_78 = ppuVar7;
          if (extraout_x8_03 != 0) {
            do {
              func_0x000107c325f8();
            } while (extraout_w10_01 != 0);
          }
          func_0x000107c28150();
          lVar10 = *(long *)(lVar10 + 0x10);
          func_0x0001086da438();
          lVar11 = *(long *)(lVar10 + 0x70);
          ppuStack_100 = (undefined **)FUN_1086d6690;
          ppuStack_f8 = &PTR_FUN_110a65000;
          ppuStack_e8 = ppuStack_78;
          ppuStack_f0 = ppuStack_80;
          ppuVar7 = ppuStack_80;
          ppuVar12 = ppuStack_78;
          if (ppuStack_78 != (undefined **)0x0) {
            do {
              func_0x000107c325f8();
            } while (extraout_w10_02 != 0);
          }
          pppuStack_d0 = pppuVar5;
          func_0x000107c28154(lVar10 + 0x48,&ppuStack_100);
          func_0x0001086d9acc(ppuStack_f8);
          func_0x0001086da250();
          if (lVar11 == 0) {
            func_0x0001086d9eac();
            ppuStack_100 = ppuVar7;
            ppuStack_f8 = ppuVar12;
            if (extraout_x8_04 != 0) {
              do {
                func_0x000107c325f8();
              } while (extraout_w10_03 != 0);
            }
            func_0x000107c3265c();
            (*extraout_x8_05)();
            func_0x0001086db2d4();
          }
          func_0x000104be35c8(&ppuStack_80);
          ppuStack_100 = (undefined **)((ulong)ppuStack_100 & 0xffffffffffffff00);
          ppuStack_f8 = (undefined **)((ulong)ppuStack_f8 & 0xffffffffffffff00);
          func_0x0001086da6cc();
          FUN_1086d62bc();
        }
      }
      else {
        func_0x000104c003e8(&ppuStack_1e0);
      }
      func_0x000107c27938(&ppuStack_1e0);
      FUN_1086d3f14(auStack_1c0);
      goto LAB_1086c57f8;
    }
    in_ZR = uStack_2d0._4_4_ == 3;
    if ((bool)in_ZR) {
      ppuStack_f8 = (undefined **)0x0;
      ppuStack_100 = &PTR_FUN_110a94718;
      uStack_e0 = 0;
      ppuStack_f0 = (undefined **)0x0;
      ppuStack_e8 = (undefined **)0x0;
      FUN_1086cf9f0(&ppuStack_2e8);
      FUN_1086c5c14(&ppuStack_100);
      FUN_108919e8c();
      FUN_1086c5c24(&stack0xfffffffffffffcf0,&ppuStack_100);
      FUN_108917820(&ppuStack_100);
      goto LAB_1086c57f8;
    }
  }
  FUN_1086c5d30(&stack0xfffffffffffffd80);
LAB_1086c57f8:
  FUN_108916cd0();
  func_0x000107c325c0(uStack_8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001086db2d4();
    func_0x000104be35c8(&ppuStack_80);
    func_0x000107c27938(&ppuStack_1e0);
    FUN_1086d3f14(auStack_1c0);
    pppuVar5 = &ppuStack_2e8;
    FUN_108916cd0();
    func_0x0001086d9ff8();
    *(uint *)(pppuVar5 + 2) = *(uint *)(pppuVar5 + 2) | 1;
    if (pppuVar5[3] == (undefined **)0x0) {
      ppuVar7 = pppuVar5[1];
      if (((ulong)ppuVar7 & 1) != 0) {
        func_0x0001086da030();
      }
      func_0x0001086cfa40();
      pppuVar5[3] = ppuVar7;
    }
    return;
  }
  return;
}



/* Entry: 1086c5c14; end: 1086c5c23;  */

void FUN_1086c5c14(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001086da030();
    }
    func_0x0001086cfa40();
    *(ulong *)(param_1 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 1086c5c24; end: 1086c5d2f;  */

void FUN_1086c5c24(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 extraout_x8;
  undefined8 uVar4;
  code *extraout_x8_00;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_150 [16];
  undefined8 uStack_140;
  undefined1 auStack_130 [16];
  undefined8 uStack_120;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined ***pppuStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined ***pppuStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined ***pppuStack_60;
  undefined8 auStack_58 [3];
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  func_0x0001086d9934();
  uVar3 = *param_1;
  puVar1 = (undefined8 *)param_1[1];
  uStack_38 = extraout_x8;
  func_0x0001086da3c4();
  *param_1 = &PTR_FUN_110a63ea0;
  uVar4 = puVar1[2];
  uVar6 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar6;
  param_1[3] = uVar4;
  uStack_70 = **(undefined8 **)(unaff_x20 + 0x10);
  ppuStack_78 = &PTR_DAT_110a64e68;
  pppuStack_60 = &ppuStack_78;
  uStack_90 = **(undefined8 **)(unaff_x20 + 0x18);
  ppuStack_98 = &PTR_DAT_110a63fe0;
  pppuStack_80 = &ppuStack_98;
  uStack_b0 = **(undefined8 **)(unaff_x20 + 0x20);
  ppuStack_b8 = &PTR_DAT_110a64070;
  pppuStack_a0 = &ppuStack_b8;
  puStack_40 = param_1;
  func_0x0001086da6cc();
  FUN_1086bd560();
  FUN_1086d4198(&ppuStack_b8);
  func_0x0001086db028();
  func_0x0001086db138();
  FUN_1086d3f14(auStack_58);
  func_0x000107c325c0(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001086da024();
  FUN_1086d4198();
  func_0x0001086db028();
  func_0x0001086db138();
  puVar2 = auStack_58;
  FUN_1086d3f14();
  func_0x0001086d9ff8();
  plVar5 = (long *)*puVar2;
  puStack_f0 = puVar1;
  uStack_e8 = uVar3;
  func_0x0001086da304();
  func_0x0001086da94c();
  _uStack_110 = CONCAT44(uStack_10c,0x17d);
  func_0x0001086dbaf0(auStack_130,0x12);
  uVar3 = puVar2[1];
  func_0x000107c2825c();
  uStack_f8 = uVar3;
  func_0x0001086db594();
  func_0x0001086db16c();
  (*extraout_x8_00)();
  func_0x0001086da41c();
  func_0x000107c27994(auStack_150,puVar2[2]);
  func_0x0001086db12c(*(undefined4 *)puVar2[3]);
  uStack_120 = uStack_140;
  func_0x0001086dac08();
  uStack_108 = 1;
  func_0x0001086da03c();
  (**(code **)(*plVar5 + 0x168))
            (plVar5,auStack_130,*(undefined1 *)puVar2[5],*(undefined4 *)puVar2[6],puVar2[7]);
  func_0x0001086da498();
  return;
}



/* Entry: 1086c5d30; end: 1086c5e17;  */

void FUN_1086c5d30(undefined8 *param_1)

{
  undefined8 uVar1;
  code *extraout_x8;
  long *plVar2;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  plVar2 = (long *)*param_1;
  func_0x0001086da304();
  func_0x0001086da94c();
  _uStack_50 = CONCAT44(uStack_4c,0x17d);
  func_0x0001086dbaf0(auStack_70,0x12);
  uVar1 = param_1[1];
  func_0x000107c2825c();
  uStack_38 = uVar1;
  func_0x0001086db594();
  func_0x0001086db16c();
  (*extraout_x8)();
  func_0x0001086da41c();
  func_0x000107c27994(auStack_90,param_1[2]);
  func_0x0001086db12c(*(undefined4 *)param_1[3]);
  uStack_60 = uStack_80;
  func_0x0001086dac08();
  uStack_48 = 1;
  func_0x0001086da03c();
  (**(code **)(*plVar2 + 0x168))
            (plVar2,auStack_70,*(undefined1 *)param_1[5],*(undefined4 *)param_1[6],param_1[7]);
  func_0x0001086da498();
  return;
}



/* Entry: 1086c5e18; end: 1086c5eb7;  */

void FUN_1086c5e18(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c32678();
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10 != 0);
  }
  FUN_1086d62d8(unaff_x19 + 0x10,unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x19 + 0x38) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x30) = uVar2;
  func_0x000107c27994(unaff_x19 + 0x48,unaff_x20 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x60);
  *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)(unaff_x20 + 0x68);
  *(undefined8 *)(unaff_x19 + 0x60) = uVar2;
  lVar1 = *(long *)(unaff_x20 + 0x70);
  *(long *)(unaff_x19 + 0x70) = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 1086c5eb8; end: 1086c5eef;  */

undefined8 FUN_1086c5eb8(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c29120(param_1 + 0x68);
  func_0x000107c27914(param_1 + 0x48);
  FUN_1086d3f14(param_1 + 0x10);
  func_0x00010054ffe4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1086c5ef0; end: 1086c5fb7;  */

void FUN_1086c5ef0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined4 uStack_8;
  
  func_0x0001086dbb70();
  func_0x0001086da3fc();
  uStack_8 = 0;
  func_0x0001086d9ef4();
  uStack_40 = 0;
  func_0x0001086dbef4();
  puVar1 = auStack_48;
  FUN_1086d0224();
  puVar2 = puVar1;
  func_0x0001086d9cd8();
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(puVar1 + 8);
    if (((ulong)puVar2 & 1) != 0) {
      func_0x0001086da030();
    }
    func_0x000107c290fc();
    *(undefined1 **)(puVar1 + 0x18) = puVar2;
  }
  *(undefined8 *)(puVar2 + 0x40) = *param_4;
  puVar2 = auStack_48;
  FUN_1086d0224();
  *(undefined4 *)(puVar2 + 0x20) = *(undefined4 *)(param_4 + 1);
  func_0x0001086d9e40(*(undefined8 *)(param_1 + 0x58));
  func_0x0001086db444();
  func_0x0001086da610();
  func_0x0001086da768();
  func_0x0001086da5d4();
  func_0x0001086da5cc();
  func_0x0001086daf70();
  return;
}



/* Entry: 1086c5fb8; end: 1086c6087;  */

void FUN_1086c5fb8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  code *extraout_x8_01;
  long lVar1;
  int extraout_w11;
  int extraout_w11_00;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  func_0x0001086da3e4();
  lVar3 = param_1[0x1a];
  plVar2 = *(long **)(lVar3 + 0x200);
  func_0x000107c326e0();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110a65028;
  puStack_50 = param_1 + 3;
  *puStack_50 = &PTR_DAT_110a65078;
  lVar1 = param_4[1];
  uVar4 = *param_4;
  param_1[5] = param_4[1];
  param_1[4] = uVar4;
  if (lVar1 != 0) {
    do {
      func_0x000107c325ec();
      puStack_50 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  lVar1 = *(long *)(lVar3 + 0x108);
  uVar4 = *(undefined8 *)(lVar3 + 0x100);
  param_1[7] = *(undefined8 *)(lVar3 + 0x108);
  param_1[6] = uVar4;
  if (lVar1 != 0) {
    do {
      func_0x000107c325ec();
      puStack_50 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  uStack_60 = 0;
  uStack_58 = 0;
  puStack_48 = param_1;
  func_0x000107c326fc(*(undefined8 *)(*plVar2 + 0x10));
  (*extraout_x8_01)();
  func_0x000104be3c30(&puStack_50);
  FUN_1086d6cfc(&uStack_60);
  return;
}



/* Entry: 1086c6088; end: 1086c626b;  */

void FUN_1086c6088(undefined8 param_1,long param_2)

{
  ulong uVar1;
  int unaff_w21;
  undefined1 auStack_288 [112];
  undefined1 auStack_218 [464];
  byte bStack_48;
  
  func_0x0001086da8e8();
  func_0x0001086da234(auStack_218);
  func_0x000107c28078();
  func_0x000107c27914(auStack_218);
  if (unaff_w21 != 0) {
    func_0x0001086d9e5c();
    return;
  }
  func_0x0001086daea8();
  func_0x0001086da788(auStack_218);
  if ((bStack_48 & 1) != 0) {
    uVar1 = 0;
    FUN_1086a6978();
    if ((uVar1 & 1) != 0) {
      func_0x0001086d9790();
      func_0x0001086dabc4();
      func_0x0001086db2c0(0x12);
      if ((uVar1 & 1) != 0) {
        func_0x0001086da030();
      }
      func_0x0001086d02a0();
      func_0x0001086db528();
      func_0x0001086d9ccc();
      func_0x0001086d9c48();
      func_0x0001086da0d0();
      if (*(long *)(param_2 + 0x18) == 0) {
        uVar1 = *(ulong *)(param_2 + 8);
        if ((uVar1 & 1) != 0) {
          func_0x0001086da030();
        }
        func_0x000107c287e0();
        *(ulong *)(param_2 + 0x18) = uVar1;
      }
      func_0x0001086da388();
      func_0x0001086da134();
      func_0x0001086da03c();
      func_0x0001086daa50(auStack_288);
      *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 2;
      if (*(long *)(param_2 + 0x20) == 0) {
        uVar1 = *(ulong *)(param_2 + 8);
        if ((uVar1 & 1) != 0) {
          func_0x0001086da030();
        }
        func_0x000107c287e0();
        *(ulong *)(param_2 + 0x20) = uVar1;
      }
      func_0x0001086da388();
      func_0x0001086da134();
      func_0x0001086d98f8();
      func_0x0001086da268();
      goto LAB_1086c61a8;
    }
  }
  func_0x0001086d9a80();
LAB_1086c61a8:
  func_0x0001086da208();
  return;
}



/* Entry: 1086c626c; end: 1086c627f;  */

void FUN_1086c626c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001086c627c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_1 + 0xd0) + 0x1e0) + 0x10))();
  return;
}



/* Entry: 1086c6280; end: 1086c64db;  */

void FUN_1086c6280(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long *param_5)

{
  undefined4 *puVar1;
  undefined1 in_ZR;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  code *pcVar5;
  code *extraout_x8;
  code *extraout_x8_00;
  long unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  ulong uVar6;
  undefined4 *puVar7;
  byte bStack_2c8;
  long alStack_298 [3];
  undefined1 *puStack_280;
  code *pcStack_278;
  long *plStack_268;
  byte bStack_250;
  char cStack_240;
  long alStack_238 [58];
  byte bStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x0001086da010();
  func_0x000100864738();
  func_0x0001086da270();
  plVar2 = alStack_238;
  func_0x0001086da64c();
  if ((bStack_68 & 1) == 0) {
    plVar3 = *(long **)(param_3 + 8);
    func_0x0001086d9a80();
  }
  else {
    func_0x00010086492c();
    (**(code **)(*plVar2 + 0x18))(&puStack_280);
    in_ZR = cStack_240 == '\x01';
    if (((bool)in_ZR) && ((bStack_250 & 1) != 0)) {
      func_0x0001086da100();
      FUN_10886b2d0();
      if (((unaff_x21 & 1) == 0) || (in_ZR = plVar2 == plStack_268, !(bool)in_ZR)) {
        func_0x0001086da100();
        FUN_10886b404();
        func_0x0001086da32c();
        alStack_298[0] = 0;
        alStack_298[1] = 0;
        alStack_298[2] = 0;
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        func_0x0001086db2ec(*(undefined8 *)(*(long *)(unaff_x20 + 0xd0) + 0xe0));
        plVar3 = alStack_238;
        param_5 = alStack_298;
        func_0x0001086dad38();
        func_0x000104be1274(&uStack_60);
        func_0x00010867b9fc(alStack_298);
        unaff_x22 = *(long **)(*(long *)(unaff_x20 + 0xd0) + 0xa0);
        func_0x0001086da478(&uStack_60);
        func_0x0001086daf8c(alStack_298,&uStack_60);
        func_0x0001086da424(*(undefined8 *)(*unaff_x22 + 200));
        func_0x000107c27a04(alStack_298);
        func_0x000107c27914(&uStack_60);
        plVar2 = *(long **)(*(long *)(unaff_x20 + 0xd0) + 0x130);
        func_0x0001086d9c9c();
        func_0x0001086db5a0();
        (*extraout_x8)();
        func_0x0001086da6ac();
      }
      else {
        plVar3 = *(long **)(param_3 + 8);
        func_0x0001086da32c();
        unaff_x22 = plStack_268;
      }
    }
    else {
      plVar3 = *(long **)(param_3 + 8);
      func_0x0001086d9e5c();
    }
  }
  func_0x0001086da208();
  while( true ) {
    while( true ) {
      func_0x000100864c10();
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      func_0x0001086d9cac();
      func_0x000107c2882c();
      func_0x0001086da208();
      in_ZR = (int)unaff_x22 == 2;
      if (!(bool)in_ZR) break;
      func_0x0001086da000();
      func_0x000108848514();
      func_0x0001086da1d4();
      func_0x0001086da058();
      ___cxa_end_catch();
    }
    in_ZR = (int)unaff_x22 == 1;
    if (!(bool)in_ZR) break;
    func_0x0001086da000();
    plVar3 = (long *)&UNK_10f4b12cb;
    func_0x0001086d9a74();
    ___cxa_end_catch();
  }
  func_0x0001086da008();
  func_0x0001086da22c();
  pcVar5 = FUN_1086c64dc;
  func_0x0001086dbb70();
  puStack_280 = &stack0xfffffffffffffff0;
  pcStack_278 = pcVar5;
  func_0x0001086d9948();
  func_0x0001086da920();
  if ((bStack_2c8 & 1) == 0) {
    if (*param_5 != 0) {
      func_0x0001086da408();
      (*extraout_x8_00)();
    }
  }
  else {
    func_0x0001086d9828();
    func_0x0001086db9ac();
    func_0x0001086dbc08();
    if ((bool)in_ZR) {
      uVar6 = plVar2[2];
    }
    else {
      FUN_1088ff63c(plVar2);
      *(undefined4 *)((long)plVar2 + 0x1c) = 1;
      uVar6 = plVar2[1];
      if ((uVar6 & 1) != 0) {
        func_0x0001086da030();
      }
      func_0x0001086d0354();
      plVar2[2] = uVar6;
    }
    puVar1 = (undefined4 *)plVar3[1];
    for (puVar7 = (undefined4 *)*plVar3; puVar7 != puVar1; puVar7 = puVar7 + 1) {
      func_0x000107c29100(uVar6 + 0x10,*puVar7);
    }
    uVar4 = *(ulong *)(uVar6 + 8);
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x00010539283c(uVar6 + 0x28,param_4,5,uVar4);
    func_0x0001086d9a14();
    func_0x0001086da3dc();
  }
  func_0x0001086da33c();
  return;
}



/* Entry: 1086c64dc; end: 1086c65df;  */

void FUN_1086c64dc(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  long *param_5)

{
  undefined4 *puVar1;
  undefined1 in_ZR;
  ulong uVar2;
  code *extraout_x8;
  ulong uVar3;
  undefined4 *puVar4;
  byte bStack_8;
  
  func_0x0001086dbb70();
  func_0x0001086d9948();
  func_0x0001086da920();
  if ((bStack_8 & 1) == 0) {
    if (*param_5 != 0) {
      func_0x0001086da408();
      (*extraout_x8)();
    }
  }
  else {
    func_0x0001086d9828();
    func_0x0001086db9ac();
    func_0x0001086dbc08();
    if ((bool)in_ZR) {
      uVar3 = *(ulong *)(param_1 + 0x10);
    }
    else {
      FUN_1088ff63c(param_1);
      *(undefined4 *)(param_1 + 0x1c) = 1;
      uVar3 = *(ulong *)(param_1 + 8);
      if ((uVar3 & 1) != 0) {
        func_0x0001086da030();
      }
      func_0x0001086d0354();
      *(ulong *)(param_1 + 0x10) = uVar3;
    }
    puVar1 = (undefined4 *)param_3[1];
    for (puVar4 = (undefined4 *)*param_3; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      func_0x000107c29100(uVar3 + 0x10,*puVar4);
    }
    uVar2 = *(ulong *)(uVar3 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x00010539283c(uVar3 + 0x28,param_4,5,uVar2);
    func_0x0001086d9a14();
    func_0x0001086da3dc();
  }
  func_0x0001086da33c();
  return;
}



/* Entry: 1086c65e0; end: 1086c66c3;  */

void FUN_1086c65e0(long param_1)

{
  long lVar1;
  code *extraout_x8;
  long *unaff_x19;
  long *unaff_x21;
  ulong uVar2;
  long lVar3;
  byte bStack_48;
  
  func_0x0001086da8e8();
  func_0x0001086d9948();
  func_0x0001086da920();
  if ((bStack_48 & 1) == 0) {
    if (*unaff_x19 != 0) {
      func_0x0001086da408();
      (*extraout_x8)();
    }
  }
  else {
    func_0x0001086d9828();
    func_0x0001086db9ac();
    if (*(int *)(param_1 + 0x1c) == 2) {
      uVar2 = *(ulong *)(param_1 + 0x10);
    }
    else {
      FUN_1088ff63c(param_1);
      *(undefined4 *)(param_1 + 0x1c) = 2;
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        func_0x0001086da030();
      }
      func_0x0001086d039c();
      *(ulong *)(param_1 + 0x10) = uVar2;
    }
    lVar1 = unaff_x21[1];
    for (lVar3 = *unaff_x21; lVar3 != lVar1; lVar3 = lVar3 + 0x58) {
      FUN_1086d03d8(uVar2 + 0x10);
      FUN_1088f75d4();
    }
    func_0x0001086d9a14();
    func_0x0001086da3dc();
  }
  func_0x0001086da33c();
  return;
}



/* Entry: 1086c66c4; end: 1086c67fb;  */

void FUN_1086c66c4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 uStack_48;
  
  func_0x0001086da8e8();
  func_0x0001086d9948();
  func_0x0001086da920();
  if ((uStack_48 & 1) == 0) {
    func_0x0001086d9a80();
  }
  else {
    func_0x0001086d9828();
    func_0x0001086db9ac();
    if (*(int *)(param_1 + 0x1c) == 3) {
      uVar2 = *(ulong *)(param_1 + 0x10);
    }
    else {
      FUN_1088ff63c(param_1);
      *(undefined4 *)(param_1 + 0x1c) = 3;
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        func_0x0001086da030();
      }
      func_0x0001086d042c();
      *(ulong *)(param_1 + 0x10) = uVar2;
    }
    func_0x0001086da0d0();
    if (*(long *)(uVar2 + 0x18) == 0) {
      uVar1 = *(ulong *)(uVar2 + 8);
      if ((uVar1 & 1) != 0) {
        func_0x0001086da030();
      }
      FUN_1086d03e4();
      *(ulong *)(uVar2 + 0x18) = uVar1;
    }
    FUN_1088f75d4();
    func_0x0001086d9a14();
    func_0x0001086da3dc();
  }
  func_0x0001086da33c();
  return;
}



/* Entry: 1086c67fc; end: 1086c68b3;  */

bool FUN_1086c67fc(long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if ((bRam000000011372c520 & 1) == 0) {
    iVar2 = 0x1372c520;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107c27d7c(&uStack_40,&UNK_10df42bd8,&DAT_10df42be8);
      uRam000000011372c568 = uStack_38;
      uRam000000011372c560 = uStack_40;
      uRam000000011372c570 = uStack_30;
      func_0x0001086dac08();
      func_0x0001086da03c();
      ___cxa_guard_release(0x11372c520);
    }
  }
  if (*(int *)(param_1 + 0x68) == 0) {
    lVar3 = *(long *)(param_1 + 0xb8);
    func_0x000107c28da4(lVar3,*(undefined8 *)(param_1 + 0xc0),0x11372c560);
    bVar1 = *(long *)(param_1 + 0xc0) != lVar3;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 1086c68b4; end: 1086c6c07;  */

void FUN_1086c68b4(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined4 uVar4;
  code *extraout_x8;
  long unaff_x20;
  uint unaff_w21;
  ulong uVar5;
  ulong uStack_9f8;
  ulong uStack_9f0;
  undefined1 auStack_9d8 [1000];
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined5 uStack_5c8;
  byte bStack_338;
  byte bStack_220;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1e8;
  char cStack_1e4;
  undefined1 auStack_1d8 [464];
  byte bStack_8;
  
  func_0x0001086dbb70();
  func_0x0001086dafbc();
  func_0x0001086d9afc();
  func_0x0001086da788(auStack_1d8);
  if ((bStack_8 & 1) == 0) {
    func_0x0001086d9a80();
    goto LAB_1086c6aa8;
  }
  func_0x0001086da100();
  FUN_10885edd8(auStack_9d8);
  FUN_108663a10(&uStack_5f0,auStack_9d8);
  uStack_208 = uStack_5e8;
  uStack_210 = uStack_5f0;
  uStack_200 = uStack_5e0;
  uStack_5e0 = 0;
  uStack_5e8 = 0;
  uStack_5f0 = 0;
  uStack_1f8 = uStack_5d8;
  uStack_1e8 = (undefined4)uStack_5c8;
  cStack_1e4 = (char)((uint5)uStack_5c8 >> 0x20);
  FUN_1086569a0(&uStack_5f0);
  func_0x0001086da718();
  if (cStack_1e4 == '\x01') {
    func_0x0001086d9e5c();
  }
  else {
    func_0x0001086da100();
    FUN_1088660e8(auStack_9d8);
    uVar3 = 0;
    FUN_10869148c(&uStack_5f0);
    func_0x0001086db338();
    if ((bStack_220 & 1) == 0) {
      func_0x0001086d9a80();
    }
    else if (unaff_w21 == (bStack_338 ^ 1)) {
      func_0x0001086da32c();
    }
    else {
      if (unaff_w21 == 0) {
        func_0x0001086da100();
        FUN_108866f84(auStack_9d8);
        FUN_1086c6c08(&uStack_9f8,auStack_9d8);
        func_0x0001086db338();
        uVar3 = 0;
        FUN_1086c67fc();
        uVar1 = uStack_9f0;
        if ((uVar3 & 1) == 0) {
          uVar5 = 0;
          for (param_2 = uStack_9f8; param_2 != uVar1; param_2 = param_2 + 0x3d0) {
            uVar3 = param_2;
            FUN_1086c67fc();
            uVar5 = uVar5 + ((uint)uVar3 ^ 1);
          }
          uVar2 = uVar5 == *(ulong *)(unaff_x20 + 0x168);
          if (*(ulong *)(unaff_x20 + 0x168) <= uVar5) {
            func_0x000107c289e8(unaff_x20 + 0x2c0);
            func_0x0001086dbd7c();
            if ((bool)uVar2) {
              for (; uStack_9f8 != uStack_9f0; uStack_9f8 = uStack_9f8 + 0x3d0) {
                func_0x0001086d9d7c(*(undefined8 *)(unaff_x20 + 0xd0));
                (*extraout_x8)();
              }
            }
            func_0x0001086d9e5c();
            func_0x0001086db874();
            goto LAB_1086c6a9c;
          }
        }
        func_0x0001086db874();
      }
      func_0x0001086d9790();
      func_0x0001086dabc4();
      func_0x0001086db2c0(0x10);
      if ((uVar3 & 1) != 0) {
        func_0x0001086da030();
      }
      func_0x0001086d0460();
      func_0x0001086db528();
      func_0x0001086d9ccc();
      func_0x0001086d9c48();
      func_0x0001086da0d0();
      if (*(long *)(param_2 + 0x18) == 0) {
        uVar3 = *(ulong *)(param_2 + 8);
        if ((uVar3 & 1) != 0) {
          func_0x0001086da030();
        }
        func_0x000107c287e0();
        *(ulong *)(param_2 + 0x18) = uVar3;
      }
      func_0x0001086da388();
      func_0x0001086da134();
      func_0x0001086da03c();
      uVar4 = 2;
      if (unaff_w21 != 1) {
        uVar4 = 0;
      }
      if (unaff_w21 == 0) {
        uVar4 = 1;
      }
      *(undefined4 *)(param_2 + 0x20) = uVar4;
      func_0x0001086d9aa4();
      func_0x0001086da268();
    }
LAB_1086c6a9c:
    func_0x0001086db6ec();
  }
  func_0x000107c27914(&uStack_210);
LAB_1086c6aa8:
  func_0x000107c288c8(auStack_1d8);
  return;
}



/* Entry: 1086c6c08; end: 1086c6cbb;  */

void FUN_1086c6c08(undefined8 param_1)

{
  undefined1 auStack_fb0 [992];
  undefined1 auStack_bd0 [992];
  undefined1 auStack_7f0 [992];
  undefined1 auStack_410 [992];
  
  func_0x000107c288b4(auStack_7f0);
  FUN_1086d6d20(auStack_410,auStack_7f0);
  _bzero(auStack_fb0,0x3e0);
  FUN_1086d6d20(auStack_bd0,auStack_fb0);
  FUN_1086d6dbc(param_1,auStack_410,auStack_bd0);
  func_0x0001086db97c();
  func_0x0001086da904(auStack_fb0);
  func_0x0001086db1bc();
  func_0x0001086da904(auStack_7f0);
  return;
}



/* Entry: 1086c6cbc; end: 1086c6cef;  */

void FUN_1086c6cbc(long param_1,ulong param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  code *extraout_x8;
  undefined1 *extraout_x8_00;
  undefined1 auStack_180 [16];
  undefined8 uStack_170;
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined1 uStack_130;
  undefined2 uStack_12e;
  ulong uStack_128;
  undefined1 uStack_120;
  ulong uStack_118;
  undefined1 uStack_110;
  undefined4 auStack_108 [2];
  undefined8 uStack_100;
  byte bStack_f8;
  uint uStack_f0;
  ulong uStack_e8;
  char cStack_e0;
  undefined1 auStack_d8 [64];
  undefined1 uStack_98;
  byte bStack_90;
  undefined1 auStack_88 [32];
  char cStack_68;
  
  if (param_1 != 0) {
    func_0x0001086daf04();
    (*extraout_x8)();
    return;
  }
  func_0x000104bfeb48();
  lVar1 = 0x1132688c0;
  if (*param_3 != 0) {
    lVar1 = *param_3;
  }
  uVar2 = param_2;
  FUN_1086d72cc(auStack_88);
  func_0x0001086d7308(auStack_d8,param_1);
  func_0x0001086d7328();
  if (((cStack_68 == '\x01') && ((bStack_90 & 1) != 0)) && ((uVar2 & 1) != 0)) {
    FUN_10883e734(auStack_108,auStack_d8,lVar1);
    if (((bStack_f8 & 1) != 0) || (cStack_e0 != '\0')) {
      func_0x000107c29ee0(auStack_180,auStack_88);
      func_0x0001086db12c(uStack_98);
      uStack_150 = uStack_170;
      func_0x0001086dac08();
      if (bStack_f8 == 0) {
        auStack_108[0] = 0;
        uStack_100 = 0;
      }
      uStack_130 = (undefined1)param_2;
      uStack_12e = 2;
      if (cStack_e0 == '\0') {
        uStack_120 = false;
        uStack_128 = uStack_128 & 0xffffffffffffff00;
        uStack_118 = uStack_118 & 0xffffffffffffff00;
      }
      else {
        uStack_128 = (ulong)uStack_f0;
        uStack_120 = uStack_128 != 0;
        uStack_118 = uStack_e8;
      }
      uStack_110 = cStack_e0 != '\0' && uStack_e8 != 0;
      uStack_148 = auStack_108[0];
      uStack_140 = uStack_100;
      lStack_138 = param_1;
      FUN_1086d736c(extraout_x8_00,auStack_160);
      func_0x0001086da498();
      func_0x0001086da03c();
      goto LAB_1086d727c;
    }
  }
  *extraout_x8_00 = 0;
  extraout_x8_00[0x58] = 0;
LAB_1086d727c:
  FUN_1086d73b8(auStack_d8);
  func_0x0001086d73d8(auStack_88);
  return;
}



/* Entry: 1086c6cf0; end: 1086c6d07;  */

void FUN_1086c6cf0(undefined1 *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  undefined2 uStack_10e;
  ulong uStack_108;
  undefined1 uStack_100;
  ulong uStack_f8;
  undefined1 uStack_f0;
  undefined4 auStack_e8 [2];
  undefined8 uStack_e0;
  byte bStack_d8;
  uint uStack_d0;
  ulong uStack_c8;
  char cStack_c0;
  undefined1 auStack_b8 [64];
  undefined1 uStack_78;
  byte bStack_70;
  undefined1 auStack_68 [32];
  char cStack_48;
  
  lVar1 = 0x1132688c0;
  if (*param_4 != 0) {
    lVar1 = *param_4;
  }
  uVar2 = param_3;
  FUN_1086d72cc(auStack_68);
  func_0x0001086d7308(auStack_b8,param_2);
  func_0x0001086d7328();
  if (((cStack_48 == '\x01') && ((bStack_70 & 1) != 0)) && ((uVar2 & 1) != 0)) {
    FUN_10883e734(auStack_e8,auStack_b8,lVar1);
    if (((bStack_d8 & 1) != 0) || (cStack_c0 != '\0')) {
      func_0x000107c29ee0(auStack_160,auStack_68);
      func_0x0001086db12c(uStack_78);
      uStack_130 = uStack_150;
      func_0x0001086dac08();
      if (bStack_d8 == 0) {
        auStack_e8[0] = 0;
        uStack_e0 = 0;
      }
      uStack_110 = (undefined1)param_3;
      uStack_10e = 2;
      if (cStack_c0 == '\0') {
        uStack_100 = false;
        uStack_108 = uStack_108 & 0xffffffffffffff00;
        uStack_f8 = uStack_f8 & 0xffffffffffffff00;
      }
      else {
        uStack_108 = (ulong)uStack_d0;
        uStack_100 = uStack_108 != 0;
        uStack_f8 = uStack_c8;
      }
      uStack_f0 = cStack_c0 != '\0' && uStack_c8 != 0;
      uStack_128 = auStack_e8[0];
      uStack_120 = uStack_e0;
      uStack_118 = param_2;
      FUN_1086d736c(param_1,auStack_140);
      func_0x0001086da498();
      func_0x0001086da03c();
      goto LAB_1086d727c;
    }
  }
  *param_1 = 0;
  param_1[0x58] = 0;
LAB_1086d727c:
  FUN_1086d73b8(auStack_b8);
  func_0x0001086d73d8(auStack_68);
  return;
}



/* Entry: 1086c6d08; end: 1086c6d37;  */

void FUN_1086c6d08(long param_1,long *param_2,undefined4 *param_3)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  code *extraout_x8;
  long lVar4;
  double dStack_68;
  
  if (param_1 != 0) {
    func_0x0001086daf04();
    (*extraout_x8)();
    return;
  }
  func_0x000104bfeb48();
  if (*(char *)(param_1 + 0x160) != '\x01' || param_2 == (long *)0x0) {
    return;
  }
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x10))();
  func_0x0001086dbe00();
  if (*(char *)(param_3 + 1) == '\x01') {
    uVar2 = *param_3;
    if ((char)param_2[0x24] != '\x01') {
      return;
    }
    *(undefined1 *)(param_2 + 0x24) = 0;
    param_2[0x11] = (long)plVar3;
    *(undefined4 *)(param_2 + 0x17) = 1;
    *(int *)((long)param_2 + 0xbc) = (int)param_2[0x2b];
    *(undefined1 *)(param_2 + 0x18) = 1;
    *(undefined4 *)((long)param_2 + 0xc4) = uVar2;
    *(undefined1 *)(param_2 + 0x19) = 1;
  }
  else {
    if ((char)param_2[0x24] != '\x01') {
      return;
    }
    *(undefined1 *)(param_2 + 0x24) = 0;
    param_2[0x11] = (long)plVar3;
    *(undefined4 *)(param_2 + 0x17) = 0;
    if ((char)param_2[0x18] == '\x01') {
      *(undefined1 *)(param_2 + 0x18) = 0;
    }
    if ((char)param_2[0x19] == '\x01') {
      *(undefined1 *)(param_2 + 0x19) = 0;
    }
  }
  FUN_10875e624(param_2 + 0x25,param_2 + 0x2b);
  lVar4 = param_2[0x11];
  plVar3 = param_2 + 0x25;
  FUN_108843ecc();
  param_2[0x10] = (long)((double)lVar4 + (double)(long)plVar3 / -1000000.0);
  lVar1 = param_2[0x26];
  for (lVar4 = param_2[0x25]; lVar4 != lVar1; lVar4 = lVar4 + 0x10) {
    dStack_68 = (double)*(long *)(lVar4 + 8) / 1000000.0;
    FUN_108843ef4(param_2 + 0x12,lVar4,&dStack_68);
  }
  return;
}



/* Entry: 1086c6d38; end: 1086c6d83;  */

void FUN_1086c6d38(long param_1,long *param_2,undefined4 *param_3)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  double dStack_48;
  
  if (*(char *)(param_1 + 0x160) != '\x01' || param_2 == (long *)0x0) {
    return;
  }
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x10))();
  func_0x0001086dbe00();
  if (*(char *)(param_3 + 1) == '\x01') {
    uVar2 = *param_3;
    if ((char)param_2[0x24] != '\x01') {
      return;
    }
    *(undefined1 *)(param_2 + 0x24) = 0;
    param_2[0x11] = (long)plVar3;
    *(undefined4 *)(param_2 + 0x17) = 1;
    *(int *)((long)param_2 + 0xbc) = (int)param_2[0x2b];
    *(undefined1 *)(param_2 + 0x18) = 1;
    *(undefined4 *)((long)param_2 + 0xc4) = uVar2;
    *(undefined1 *)(param_2 + 0x19) = 1;
  }
  else {
    if ((char)param_2[0x24] != '\x01') {
      return;
    }
    *(undefined1 *)(param_2 + 0x24) = 0;
    param_2[0x11] = (long)plVar3;
    *(undefined4 *)(param_2 + 0x17) = 0;
    if ((char)param_2[0x18] == '\x01') {
      *(undefined1 *)(param_2 + 0x18) = 0;
    }
    if ((char)param_2[0x19] == '\x01') {
      *(undefined1 *)(param_2 + 0x19) = 0;
    }
  }
  FUN_10875e624(param_2 + 0x25,param_2 + 0x2b);
  lVar4 = param_2[0x11];
  plVar3 = param_2 + 0x25;
  FUN_108843ecc();
  param_2[0x10] = (long)((double)lVar4 + (double)(long)plVar3 / -1000000.0);
  lVar1 = param_2[0x26];
  for (lVar4 = param_2[0x25]; lVar4 != lVar1; lVar4 = lVar4 + 0x10) {
    dStack_48 = (double)*(long *)(lVar4 + 8) / 1000000.0;
    FUN_108843ef4(param_2 + 0x12,lVar4,&dStack_48);
  }
  return;
}



/* Entry: 1086c6d84; end: 1086c6dd3;  */

void FUN_1086c6d84(int param_1)

{
  int iVar1;
  ulong extraout_x8;
  undefined8 *unaff_x19;
  
  func_0x000107c32764();
  if ((extraout_x8 & 1) == 0) {
    iVar1 = *(int *)((long)unaff_x19 + 0xc);
    __ZSt19uncaught_exceptionsv();
    if (iVar1 == param_1) {
      FUN_1086d7064(*unaff_x19);
    }
    else {
      FUN_1086d7064(*unaff_x19);
    }
  }
  return;
}



/* Entry: 1086c6dd4; end: 1086c6e17;  */

long FUN_1086c6dd4(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107c326a4();
  func_0x000100864b68();
  lVar1 = unaff_x19;
  func_0x00010055315c();
  if (lVar1 != 0) {
    func_0x000107c60d68();
  }
  return unaff_x19;
}



/* Entry: 1086c6e18; end: 1086c738f;  */

void FUN_1086c6e18(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  code *pcVar6;
  undefined1 in_ZR;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  undefined8 extraout_x8;
  ulong uVar10;
  long lVar11;
  long extraout_x8_00;
  ulong uVar12;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  undefined **ppuVar13;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined **ppuVar14;
  undefined8 uVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long alStack_180 [5];
  byte bStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [32];
  undefined1 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  byte bStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [32];
  char cStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_20;
  undefined8 uStack_10;
  
  func_0x000107c32728();
  func_0x0001086dbdd4();
  func_0x0001086d9a34();
  uStack_10 = extraout_x8;
  func_0x000107c326c4();
  ppuVar13 = &puStack_d8;
  FUN_108863028(&puStack_d8);
  ppuStack_f0 = (undefined **)0x0;
  ppuStack_e8 = (undefined **)0x0;
  ppuStack_e0 = (undefined **)0x0;
  uStack_150 = 0;
  auStack_148[0] = 0;
  uStack_128 = 0;
  if (cStack_a8 == '\0') {
    uVar15 = 0;
  }
  else {
    FUN_1086d0ca0(auStack_148,auStack_c8);
    FUN_1086d0c1c(auStack_c8);
    uVar15 = uStack_150;
  }
  uStack_150 = uStack_d0;
  uStack_d0 = uVar15;
  FUN_1086c7390(&lStack_120,&uStack_150);
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  FUN_1086c7390(alStack_180,&uStack_1b0);
  ppuVar14 = ppuStack_e8;
  while ((((bStack_f8 & 1) != 0 || ((bStack_158 & 1) != 0)) &&
         (in_ZR = 1, lStack_120 != alStack_180[0]))) {
    if ((bStack_f8 & 1) == 0) {
      uVar15 = *(undefined8 *)(lStack_120 + 8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&ppuStack_80,lStack_120 + 0x58);
      func_0x000107c27f54(&ppuStack_50,&UNK_10f4b14dd,&ppuStack_80);
      func_0x00010bcc7444(uVar15,0x65,&ppuStack_50);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_50);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_80);
    }
    uStack_90 = uStack_108;
    uStack_98 = uStack_110;
    uStack_a0 = uStack_118;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_118 = 0;
    ppuStack_48 = (undefined **)0x0;
    ppuStack_40 = (undefined **)0x0;
    ppuStack_50 = (undefined **)0x0;
    uStack_88 = uStack_100;
    func_0x000107c27914(&ppuStack_50);
    ppuVar13 = ppuStack_e8;
    if (ppuStack_e8 < ppuStack_e0) {
      in_ZR = ppuVar14 == ppuStack_e8;
      if ((bool)in_ZR) {
        func_0x0001086da7f0();
        ppuStack_e8 = ppuVar13 + 4;
      }
      else {
        ppuVar16 = ppuStack_e8 + -4;
        ppuVar7 = ppuStack_e8;
        for (ppuVar17 = ppuVar16; ppuVar17 < ppuVar13; ppuVar17 = ppuVar17 + 4) {
          FUN_1086d0a2c(ppuVar7,ppuVar17);
          ppuVar7 = ppuVar7 + 4;
        }
        ppuStack_e8 = ppuVar7;
        for (ppuVar17 = ppuVar13 + -8; in_ZR = ppuVar17 + 4 == ppuVar14, !(bool)in_ZR;
            ppuVar17 = ppuVar17 + -4) {
          FUN_1086d0a04(ppuVar16,ppuVar17);
          ppuVar16 = ppuVar16 + -4;
        }
        FUN_1086d0a04(ppuVar14,&uStack_a0);
      }
    }
    else {
      uVar10 = ((long)ppuStack_e8 - (long)ppuStack_f0 >> 5) + 1;
      if (uVar10 >> 0x3b != 0) {
        FUN_1086d0a30();
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1086c72c8);
        (*pcVar6)();
      }
      uVar12 = (long)ppuStack_e0 - (long)ppuStack_f0 >> 4;
      if (uVar12 <= uVar10) {
        uVar12 = uVar10;
      }
      if (0x7fffffffffffffdf < (ulong)((long)ppuStack_e0 - (long)ppuStack_f0)) {
        uVar12 = 0x7ffffffffffffff;
      }
      FUN_1086d0a3c(&ppuStack_80,uVar12,(long)ppuVar14 - (long)ppuStack_f0 >> 5,&ppuStack_e0);
      ppuVar16 = ppuStack_68;
      ppuVar7 = ppuStack_70;
      ppuVar17 = ppuStack_78;
      ppuVar13 = ppuStack_80;
      if (ppuStack_70 == ppuStack_68) {
        if (ppuStack_78 < ppuStack_80 || (long)ppuStack_78 - (long)ppuStack_80 == 0) {
          in_ZR = (long)ppuStack_70 - (long)ppuStack_80 == 0;
          uVar10 = (long)ppuStack_70 - (long)ppuStack_80 >> 4;
          if ((bool)in_ZR) {
            uVar10 = 1;
          }
          FUN_1086d0a3c(&ppuStack_50,uVar10,uVar10 >> 2,ppuStack_60);
          lVar11 = (long)ppuVar7 - (long)ppuVar17;
          ppuVar1 = (undefined **)((long)ppuStack_40 + lVar11);
          ppuVar2 = ppuVar17;
          ppuVar3 = ppuStack_48;
          ppuVar8 = ppuStack_40;
          ppuVar4 = ppuStack_38;
          for (; lVar11 != 0; lVar11 = lVar11 + -0x20) {
            ppuStack_48 = ppuVar3;
            ppuStack_38 = ppuVar4;
            FUN_1086d0a2c(ppuVar8,ppuVar2);
            ppuVar8 = ppuVar8 + 4;
            ppuVar2 = ppuVar2 + 4;
            ppuVar3 = ppuStack_48;
            ppuVar4 = ppuStack_38;
          }
          ppuStack_50 = ppuVar13;
          ppuStack_48 = ppuVar17;
          ppuStack_40 = ppuVar7;
          ppuStack_38 = ppuVar16;
          ppuStack_78 = ppuVar3;
          ppuStack_70 = ppuVar1;
          ppuStack_68 = ppuVar4;
          func_0x0001086d0b44(&ppuStack_50);
        }
        else {
          lVar11 = (((long)ppuStack_78 - (long)ppuStack_80 >> 5) + 1) / -2;
          ppuVar17 = ppuStack_78 + lVar11 * 4;
          for (ppuVar13 = ppuStack_78; in_ZR = ppuVar13 == ppuVar7, !(bool)in_ZR;
              ppuVar13 = ppuVar13 + 4) {
            FUN_1086d0a04(ppuVar13 + lVar11 * 4,ppuVar13);
          }
          ppuStack_70 = ppuVar13 + lVar11 * 4;
          ppuStack_78 = ppuVar17;
        }
      }
      else {
        in_ZR = 0;
      }
      func_0x0001086da7f0();
      ppuVar13 = ppuStack_78;
      ppuVar17 = ppuStack_70 + 4;
      func_0x0001086d0a94(&ppuStack_e0,ppuVar14,ppuStack_e8,ppuVar17);
      lVar11 = (long)ppuStack_e8 - (long)ppuVar14;
      ppuVar7 = (undefined **)((long)ppuVar13 + ((long)ppuStack_f0 - (long)ppuVar14));
      ppuStack_e8 = ppuVar14;
      func_0x0001086d0a94(&ppuStack_e0,ppuStack_f0,ppuVar14,ppuVar7);
      ppuVar14 = ppuStack_e0;
      ppuStack_e0 = ppuStack_68;
      ppuStack_70 = ppuStack_f0;
      ppuStack_68 = ppuVar14;
      ppuStack_80 = ppuStack_f0;
      ppuStack_78 = ppuStack_f0;
      ppuStack_f0 = ppuVar7;
      ppuStack_e8 = (undefined **)((long)ppuVar17 + lVar11);
      func_0x0001086d0b44(&ppuStack_80);
      ppuVar14 = ppuVar13;
    }
    ppuVar14 = ppuVar14 + 4;
    func_0x000107c27914(&uStack_a0);
    FUN_1086d0b88(&lStack_120);
  }
  func_0x0001086dafd0(alStack_180);
  func_0x0001086db69c();
  puVar9 = &uStack_118;
  FUN_1086d0cf8();
  func_0x0001086dafd0(&uStack_150);
  lVar11 = *(long *)(*(long *)(unaff_x21 + 0xd0) + 0x100);
  ppuStack_78 = (undefined **)unaff_x20[1];
  ppuStack_80 = (undefined **)*unaff_x20;
  if (unaff_x20[1] != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10 != 0);
  }
  ppuStack_68 = ppuStack_e8;
  ppuStack_70 = ppuStack_f0;
  ppuStack_60 = ppuStack_e0;
  ppuStack_e8 = (undefined **)0x0;
  ppuStack_e0 = (undefined **)0x0;
  ppuStack_f0 = (undefined **)0x0;
  func_0x000107c28150();
  func_0x0001086da310();
  func_0x0001086da1e0();
  lVar5 = lRam8000000000000050;
  ppuStack_50 = (undefined **)FUN_1086d7804;
  ppuStack_48 = &PTR_FUN_110a65340;
  func_0x000107c3268c();
  ppuVar17 = ppuStack_78;
  ppuVar14 = ppuStack_80;
  puVar9[1] = ppuStack_78;
  *puVar9 = ppuVar14;
  if (ppuVar17 != (undefined **)0x0) {
    do {
      func_0x000107c325ec();
    } while (extraout_w11 != 0);
  }
  ppuVar17 = ppuStack_68;
  ppuVar14 = ppuStack_70;
  puVar9[3] = ppuStack_68;
  puVar9[2] = ppuVar14;
  func_0x0001086d9f54();
  ppuStack_40 = (undefined **)puVar9;
  ppuStack_20 = ppuVar13;
  func_0x0001086db824(0x8000000000000028);
  func_0x0001086d9a28(ppuStack_48);
  func_0x0001086da01c();
  if (lVar5 == 0) {
    func_0x0001086d9ab0();
    ppuStack_50 = ppuVar14;
    ppuStack_48 = ppuVar17;
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c3265c();
    func_0x0001086db82c();
    func_0x0001086da988();
  }
  func_0x0001086c73c0(&ppuStack_80);
  FUN_1086d0d18(&ppuStack_f0);
  FUN_1086d77a4();
  func_0x000107c325c0(uStack_10);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001086da988();
    func_0x0001086c73c0(&ppuStack_80);
    FUN_1086d0d18(&ppuStack_f0);
    FUN_1086d77a4(&puStack_d8);
    func_0x0001086d9ff8();
    func_0x000107c3275c();
    FUN_1086d0cbc();
    func_0x000107c32738();
    FUN_1086d0cbc();
    FUN_1086d0cf8(lVar11 + 8);
    return;
  }
  return;
}



/* Entry: 1086c7390; end: 1086c73e3;  */

void FUN_1086c7390(void)

{
  long unaff_x20;
  
  func_0x000107c3275c();
  FUN_1086d0cbc();
  func_0x000107c32738();
  FUN_1086d0cbc();
  FUN_1086d0cf8(unaff_x20 + 8);
  return;
}



/* Entry: 1086c73e4; end: 1086c7603;  */

void FUN_1086c73e4(long param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  long unaff_x20;
  long unaff_x21;
  long lVar3;
  long unaff_x23;
  long lVar4;
  undefined1 auStack_358 [40];
  undefined1 auStack_330 [24];
  undefined1 auStack_318 [8];
  ulong uStack_310;
  undefined4 uStack_2d0;
  undefined1 auStack_2c8 [152];
  undefined8 uStack_230;
  byte bStack_f8;
  undefined8 uStack_88;
  
  func_0x0001086d9934();
  (**(code **)(**(long **)(param_1 + 0x48) + 0x40))();
  lVar3 = *(long *)(*(long *)(unaff_x20 + 0xd0) + 0x100);
  func_0x0001086d9f1c();
  if (extraout_x8_00 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10 != 0);
  }
  func_0x000107c28150();
  func_0x000107c3278c();
  func_0x000107c3270c();
  lVar4 = *(long *)(unaff_x23 + 0x70);
  func_0x0001086d9920(0x1086d782c);
  if (extraout_x8_01 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10_00 != 0);
  }
  func_0x0001086da210(unaff_x23 + 0x48);
  func_0x0001086d9acc(uStack_88);
  func_0x000107c326b0();
  if (lVar4 == 0) {
    func_0x000107c3261c();
    if (extraout_x8_02 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_01 != 0);
    }
    func_0x000107c3265c();
    func_0x0001086da218();
    func_0x0001086da044();
  }
  func_0x0001086db0f4();
  while( true ) {
    func_0x000107c325c0(extraout_x8);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001086d9d28();
    func_0x000107c27e74();
    func_0x0001086db0f4();
    in_ZR = (int)lVar3 == 1;
    if (!(bool)in_ZR) break;
    func_0x0001086da000();
    unaff_x20 = *(long *)(*(long *)(unaff_x20 + 0xd0) + 0x100);
    func_0x0001086d9f1c();
    if (extraout_x8_03 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_02 != 0);
    }
    func_0x000107c28150();
    func_0x0001086db600();
    func_0x0001086da438();
    unaff_x21 = *(long *)(lVar3 + 0x70);
    func_0x0001086d9920(0x1086d787c);
    if (extraout_x8_04 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_03 != 0);
    }
    func_0x0001086da210(lVar3 + 0x48);
    func_0x0001086d9850();
    func_0x0001086da250();
    if (unaff_x21 == 0) {
      func_0x0001086d990c();
      if (extraout_x8_05 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_04 != 0);
      }
      func_0x000107c3265c();
      func_0x0001086da218();
      func_0x0001086da044();
    }
    func_0x0001086db0f4();
    ___cxa_end_catch();
  }
  func_0x0001086da008();
  func_0x0001086da22c();
  func_0x0001086dafbc();
  func_0x0001086d9948();
  FUN_1086b1f68(auStack_2c8);
  if ((bStack_f8 & 1) == 0) {
    func_0x0001086d9a80();
  }
  else {
    func_0x0001086da670(uStack_230);
    if ((uint)unaff_x21 == (uint)*(byte *)(extraout_x8_06 + 0x78)) {
      FUN_1086b18e0(unaff_x20,*param_2,param_2[1],6);
    }
    else {
      func_0x0001086d9b0c();
      func_0x0001086daf10();
      FUN_1088f9614(auStack_318);
      uStack_2d0 = 0x18;
      uVar1 = uStack_310;
      if ((uStack_310 & 1) != 0) {
        func_0x0001086da030();
        uVar1 = uStack_310;
      }
      func_0x0001086d0d54();
      *(char *)(uVar1 + 0x10) = (char)unaff_x21;
      func_0x0001086da234(auStack_330);
      func_0x0001086db950();
      puVar2 = auStack_318;
      FUN_1086c77e0(puVar2);
      func_0x0001086db124();
      func_0x0001086da6bc();
      func_0x0001086db26c();
      func_0x0001086d9aa4();
      func_0x0001086d9fb0();
      func_0x0001086da94c();
      func_0x000107c326d4();
      func_0x0001086db10c();
      func_0x000107c2884c(auStack_358,puVar2);
      func_0x0001086da84c();
      func_0x0001086da424();
      func_0x0001086daa40();
      func_0x0001086da10c();
      func_0x0001086da41c();
      func_0x0001086db0cc();
    }
  }
  func_0x0001086db294();
  return;
}



/* Entry: 1086c7604; end: 1086c77df;  */

void FUN_1086c7604(void)

{
  ulong uVar1;
  undefined1 *puVar2;
  long extraout_x8;
  uint unaff_w21;
  undefined1 auStack_2a8 [40];
  undefined1 auStack_280 [24];
  undefined1 auStack_268 [8];
  ulong uStack_260;
  undefined4 uStack_220;
  undefined1 auStack_218 [152];
  undefined8 uStack_180;
  byte bStack_48;
  
  func_0x0001086dafbc();
  func_0x0001086d9948();
  FUN_1086b1f68(auStack_218);
  if ((bStack_48 & 1) == 0) {
    func_0x0001086d9a80();
  }
  else {
    func_0x0001086da670(uStack_180);
    if (unaff_w21 == *(byte *)(extraout_x8 + 0x78)) {
      FUN_1086b18e0();
    }
    else {
      func_0x0001086d9b0c();
      func_0x0001086daf10();
      FUN_1088f9614(auStack_268);
      uStack_220 = 0x18;
      uVar1 = uStack_260;
      if ((uStack_260 & 1) != 0) {
        func_0x0001086da030();
        uVar1 = uStack_260;
      }
      func_0x0001086d0d54();
      *(char *)(uVar1 + 0x10) = (char)unaff_w21;
      func_0x0001086da234(auStack_280);
      func_0x0001086db950();
      puVar2 = auStack_268;
      FUN_1086c77e0(puVar2);
      func_0x0001086db124();
      func_0x0001086da6bc();
      func_0x0001086db26c();
      func_0x0001086d9aa4();
      func_0x0001086d9fb0();
      func_0x0001086da94c();
      func_0x000107c326d4();
      func_0x0001086db10c();
      func_0x000107c2884c(auStack_2a8,puVar2);
      func_0x0001086da84c();
      func_0x0001086da424();
      func_0x0001086daa40();
      func_0x0001086da10c();
      func_0x0001086da41c();
      func_0x0001086db0cc();
    }
  }
  func_0x0001086db294();
  return;
}



/* Entry: 1086c77e0; end: 1086c77ef;  */

void FUN_1086c77e0(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001086da030();
    }
    func_0x000107c287e0();
    *(ulong *)(param_1 + 0x20) = uVar1;
  }
  return;
}



/* Entry: 1086c77f0; end: 1086c7997;  */

void FUN_1086c77f0(void)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 unaff_w21;
  undefined1 auStack_2a8 [40];
  undefined1 auStack_280 [24];
  undefined1 auStack_268 [8];
  ulong uStack_260;
  undefined4 uStack_220;
  undefined1 auStack_218 [464];
  byte bStack_48;
  
  func_0x0001086dafbc();
  func_0x0001086d9948();
  FUN_1086b1f68(auStack_218);
  if ((bStack_48 & 1) == 0) {
    func_0x0001086d9a80();
  }
  else {
    func_0x0001086d9b0c();
    func_0x0001086daf10();
    FUN_1088f9614(auStack_268);
    uStack_220 = 0x22;
    uVar1 = uStack_260;
    if ((uStack_260 & 1) != 0) {
      func_0x0001086da030();
      uVar1 = uStack_260;
    }
    func_0x0001086d0dc4();
    *(undefined1 *)(uVar1 + 0x10) = unaff_w21;
    func_0x0001086da234(auStack_280);
    func_0x0001086db950();
    puVar2 = auStack_268;
    FUN_1086c77e0(puVar2);
    func_0x0001086db124();
    func_0x0001086da6bc();
    func_0x0001086db26c();
    func_0x0001086d9aa4();
    func_0x0001086d9fb0();
    func_0x0001086da94c();
    func_0x000107c326d4();
    func_0x0001086db10c();
    func_0x000107c2884c(auStack_2a8,puVar2);
    func_0x0001086da84c();
    func_0x0001086da424();
    func_0x0001086daa40();
    func_0x0001086da10c();
    func_0x0001086da41c();
    func_0x0001086db0cc();
  }
  func_0x0001086db294();
  return;
}



/* Entry: 1086c7998; end: 1086c7c0f;  */

undefined8 * FUN_1086c7998(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  undefined8 *unaff_x19;
  long unaff_x20;
  int unaff_w22;
  long unaff_x23;
  long lVar4;
  undefined **in_register_00005008;
  undefined8 auStack_410 [6];
  undefined1 auStack_3e0 [32];
  long lStack_3c0;
  long lStack_3b8;
  undefined8 auStack_3a8 [58];
  byte bStack_1d8;
  undefined8 uStack_1d0;
  undefined **ppuStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1a0;
  undefined8 uStack_8;
  
  func_0x0001086dbf74();
  puVar3 = auStack_410;
  func_0x0001086dac20();
  func_0x0001086d9934();
  uStack_8 = extraout_x8;
  func_0x0001086da270();
  puVar1 = auStack_3a8;
  func_0x0001086da64c(puVar1);
  if ((bStack_1d8 & 1) == 0) {
    func_0x0001086d9f90();
  }
  else {
    func_0x0001086da100();
    FUN_10886ba18(&uStack_1d0);
    FUN_10867b070(&lStack_3c0,&uStack_1d0);
    puVar1 = &uStack_1d0;
    func_0x000107c28948(puVar1);
    in_ZR = lStack_3c0 == lStack_3b8;
    if ((bool)in_ZR) {
      func_0x0001086d9f90();
    }
    else {
      uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0xd0) + 0x20);
      FUN_1086a13f8(auStack_3e0,uVar2,*(long *)(unaff_x20 + 0xd0) + 0x170,auStack_3a8,&lStack_3c0);
      unaff_w22 = (int)*(undefined8 *)(*(long *)(unaff_x20 + 0xd0) + 0x100);
      func_0x0001086d9f1c();
      if (extraout_x8_00 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10 != 0);
      }
      func_0x0001086d9b74();
      func_0x000107c28150();
      func_0x000107c3278c();
      func_0x000107c3270c();
      lVar4 = *(long *)(unaff_x23 + 0x70);
      uStack_1d0 = 0x1086d78bc;
      ppuStack_1c8 = &PTR_FUN_110a65388;
      func_0x000107c3268c();
      func_0x0001086d9e2c();
      if (extraout_x9 != 0) {
        do {
          func_0x000107c325ec();
        } while (extraout_w11 != 0);
      }
      func_0x0001086d9b58();
      uStack_1c0 = uVar2;
      uStack_1a0 = param_3;
      func_0x000107c28154(unaff_x23 + 0x48,&uStack_1d0);
      func_0x0001086d9acc(ppuStack_1c8);
      func_0x000107c326b0();
      if (lVar4 == 0) {
        func_0x000107c3261c();
        uStack_1d0 = param_1;
        ppuStack_1c8 = in_register_00005008;
        if (extraout_x8_01 != 0) {
          do {
            func_0x000107c325f8();
          } while (extraout_w10_00 != 0);
        }
        func_0x000107c3265c();
        (*extraout_x8_02)();
        func_0x000107c27e74(&uStack_1d0);
      }
      FUN_1086c7c10(auStack_410);
      func_0x0001086db098();
      puVar1 = puVar3;
    }
    func_0x0001086db198();
  }
  func_0x0001086daf2c();
  while( true ) {
    while( true ) {
      func_0x000107c325c0(uStack_8);
      if ((bool)in_ZR) {
        return puVar1;
      }
      ___stack_chk_fail();
      func_0x0001086d9fec();
      func_0x000107c27e74(&uStack_1d0);
      puVar1 = auStack_410;
      FUN_1086c7c10(auStack_410);
      func_0x0001086db098();
      func_0x0001086db198();
      func_0x0001086daf2c();
      in_ZR = unaff_w22 == 2;
      if (!(bool)in_ZR) break;
      func_0x0001086da000();
      func_0x000108848514();
      func_0x0001086da1d4();
      func_0x0001086dad84();
      ___cxa_end_catch();
    }
    in_ZR = unaff_w22 == 1;
    if (!(bool)in_ZR) break;
    func_0x0001086da000();
    func_0x0001086da04c();
    FUN_1086b50d8();
    ___cxa_end_catch();
  }
  func_0x0001086da008();
  func_0x0001086da22c();
  func_0x0001086da1c8();
  puVar1 = unaff_x19;
  func_0x00010054ffe4();
  if (puVar1 != (undefined8 *)0x0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1086c7c10; end: 1086c7c2b;  */

long FUN_1086c7c10(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001086da1c8();
  lVar1 = unaff_x19;
  func_0x00010054ffe4();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1086c7c2c; end: 1086c7e23;  */

void FUN_1086c7c2c(void)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined1 uVar3;
  undefined **ppuVar4;
  undefined **extraout_x8;
  int unaff_w21;
  ulong *puVar5;
  long lVar6;
  undefined1 auStack_248 [64];
  undefined **ppuStack_208;
  undefined *apuStack_1f8 [6];
  ulong uStack_1c8;
  int iStack_1c0;
  byte bStack_28;
  undefined1 auStack_20 [32];
  
  func_0x000107c32728();
  func_0x0001086dafbc();
  func_0x0001086da234(apuStack_1f8);
  func_0x000107c29ee4(auStack_20,apuStack_1f8);
  func_0x000107c27914(apuStack_1f8);
  func_0x0001086daea8();
  ppuVar4 = apuStack_1f8;
  func_0x0001086da788();
  if ((bStack_28 & 1) == 0) {
    func_0x0001086d9a80();
  }
  else {
    uVar3 = (uStack_1c8 & 1) == 0;
    puVar2 = &uStack_1c8;
    if (!(bool)uVar3) {
      puVar2 = (ulong *)(uStack_1c8 + 7);
    }
    puVar1 = puVar2 + iStack_1c0;
    for (lVar6 = (long)iStack_1c0 << 3; puVar5 = puVar1, lVar6 != 0; lVar6 = lVar6 + -8) {
      func_0x0001086db1a0(*puVar2);
      ppuVar4 = &PTR_PTR_11326cb58;
      if (!(bool)uVar3) {
        ppuVar4 = extraout_x8;
      }
      func_0x000107c287e8(ppuVar4,auStack_20);
      puVar5 = puVar2;
      if (((ulong)ppuVar4 & 1) != 0) break;
      puVar2 = puVar2 + 1;
    }
    puVar2 = &uStack_1c8;
    if ((uStack_1c8 & 1) != 0) {
      puVar2 = (ulong *)(uStack_1c8 + 7);
    }
    if ((puVar5 == puVar2 + iStack_1c0) || (*(int *)(*puVar5 + 0x58) == unaff_w21)) {
      func_0x0001086da058();
    }
    else {
      func_0x0001086d9828();
      func_0x0001086db1cc();
      func_0x0001086dbbe8(0x16);
      if (((ulong)ppuVar4 & 1) != 0) {
        func_0x0001086da030();
      }
      func_0x0001086d0e00();
      *(int *)(ppuVar4 + 2) = unaff_w21;
      ppuStack_208 = ppuVar4;
      FUN_1086c77e0(auStack_248);
      func_0x0001088bf408();
      func_0x0001086d9a14();
      func_0x0001086da3dc();
    }
  }
  func_0x0001086da33c();
  func_0x000107c2a2e0(auStack_20);
  return;
}



/* Entry: 1086c7e24; end: 1086c7e2b;  */

void FUN_1086c7e24(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001086db304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_3 + 0x18))((long *)*param_3,0);
  return;
}



/* Entry: 1086c7e2c; end: 1086c814b;  */

void FUN_1086c7e2c(void)

{
  undefined1 *puVar1;
  ulong uVar2;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  undefined1 auStack_460 [16];
  undefined1 uStack_450;
  undefined1 auStack_448 [464];
  undefined1 uStack_278;
  undefined1 auStack_270 [8];
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined4 uStack_230;
  undefined **ppuStack_228;
  ulong uStack_220;
  ulong uStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  ulong uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [40];
  byte bStack_1c8;
  undefined1 auStack_1a0 [24];
  undefined8 uStack_188;
  byte bStack_48;
  
  func_0x0001086dac20();
  func_0x0001086da010();
  func_0x000107c326c4();
  FUN_108862cf0(auStack_448);
  func_0x000107c28998(auStack_1f0,auStack_448);
  func_0x000107c28948(auStack_448);
  if ((bStack_48 & 1) == 0) {
    func_0x0001086d9a80();
    goto code_r0x0001006b7494;
  }
  func_0x0001086d9cfc(uStack_188);
  func_0x000107c29ee0(auStack_448);
  puVar1 = auStack_1a0;
  func_0x000107c28f54(puVar1,unaff_x20 + 0x98,auStack_448);
  func_0x000107c27914(auStack_448);
  if (((uint)puVar1 & (uint)bStack_1c8 & 1) == 0) {
    func_0x0001086d9e5c();
    goto code_r0x0001006b7494;
  }
  uStack_218 = 0;
  uStack_220 = 0;
  ppuStack_228 = &PTR_DAT_110a95ff0;
  puStack_210 = &DAT_11383d918;
  uStack_1f8 = 0;
  uStack_208 = 0;
  uStack_200 = 0;
  func_0x00010539283c(&puStack_210,*unaff_x22,unaff_x22[1] - *unaff_x22,0);
  if ((char)unaff_x22[6] == '\x01') {
    uStack_218 = uStack_218 | 2;
    if (uStack_200 == 0) {
      uVar2 = uStack_220;
      if ((uStack_220 & 1) != 0) {
        func_0x0001086da030();
      }
      func_0x0001086d0e38();
      uStack_200 = uVar2;
    }
    uVar2 = uStack_200;
    func_0x000107c3034c();
    if ((uVar2 & 1) != 0) goto LAB_1086c7f50;
    func_0x0001086d9e5c();
  }
  else {
LAB_1086c7f50:
    func_0x0001086d9ef4();
    uStack_268 = 0;
    uStack_230 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_240 = 0;
    func_0x0001086daa50(auStack_448);
    FUN_1086c814c(auStack_270);
    func_0x000107c287d0();
    func_0x000107c2a2e0(auStack_448);
    uStack_248 = *(undefined8 *)(unaff_x21 + 0x18);
    func_0x0001086d0ea8(auStack_270);
    FUN_10891f5a8();
    auStack_448[0] = 0;
    uStack_278 = 0;
    auStack_460[0] = 0;
    uStack_450 = 0;
    func_0x000107c326e4(*(undefined8 *)(unaff_x20 + 0x58));
    func_0x0001086da768();
    FUN_1086ccd68(auStack_460);
    func_0x0001086a7890(auStack_448);
    func_0x0001086d9c9c(*(undefined8 *)(*(long *)(unaff_x20 + 0xd0) + 0x130));
    func_0x0001086db5a0();
    func_0x0001086da780();
    func_0x0001086dadb8();
    FUN_10891cac8(auStack_270);
  }
  FUN_10891f33c(&ppuStack_228);
code_r0x0001006b7494:
  func_0x000107c288dc(auStack_1f0);
  return;
}



/* Entry: 1086c814c; end: 1086c815b;  */

void FUN_1086c814c(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001086da030();
    }
    func_0x000107c287e0();
    *(ulong *)(param_1 + 0x20) = uVar1;
  }
  return;
}



/* Entry: 1086c815c; end: 1086c8517;  */

void FUN_1086c815c(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  code *extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_490 [40];
  undefined1 auStack_468 [24];
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  long alStack_420 [4];
  undefined8 uStack_400;
  undefined1 uStack_3f8;
  undefined7 uStack_3f7;
  undefined1 uStack_3f0;
  undefined8 uStack_3ef;
  undefined4 uStack_3d8;
  undefined1 auStack_250 [24];
  byte bStack_238;
  undefined1 auStack_230 [24];
  undefined1 auStack_218 [64];
  undefined1 auStack_1d8 [24];
  undefined1 auStack_1c0 [240];
  int iStack_d0;
  byte bStack_8;
  
  func_0x000107c32728();
  func_0x0001086dac20();
  func_0x0001086d9afc();
  func_0x0001086da64c(auStack_1d8);
  if ((bStack_8 & 1) == 0) {
    func_0x0001086da864();
    func_0x000107c278b8(auStack_230,&UNK_10f4b13d7);
    func_0x0001086dae14(auStack_218);
    puVar2 = auStack_230;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar2);
    func_0x0001086d9f9c();
    (*extraout_x8)();
    puVar1 = *(undefined1 **)(unaff_x22 + 0x40);
    if (*(char *)(unaff_x22 + 0x48) == '\0') {
      puVar1 = puVar2;
    }
    uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0xd0) + 0x50);
    func_0x000107c3265c();
    (*extraout_x8_00)();
    func_0x000107c279d4(auStack_250,unaff_x22 + 0x50);
    if ((bStack_238 & 1) == 0) {
      FUN_108848684(alStack_420);
      FUN_10869026c(auStack_250,alStack_420);
      func_0x000107c27914(alStack_420);
    }
    uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + 0xd0) + 0x20);
    uVar6 = *(undefined8 *)(*(long *)(unaff_x20 + 0xd0) + 0xa0);
    uStack_450 = 0;
    uStack_448 = 0;
    uStack_440 = 0;
    if (*(char *)(unaff_x22 + 0x38) == '\x01') {
      func_0x000107c279ac(&uStack_438,unaff_x22 + 0x20);
    }
    else {
      uStack_438 = 0;
      uStack_430 = 0;
      uStack_428 = 0;
      uStack_448 = 0;
      uStack_440 = 0;
      uStack_450 = 0;
    }
    func_0x000104bff97c(auStack_468);
    FUN_1086a50f4(alStack_420,auStack_218,uVar5,uVar6,param_2,&uStack_438,puVar1,9,auStack_468,uVar3
                  ,auStack_250);
    func_0x000107c29058(auStack_1d8,alStack_420);
    func_0x0001086dba3c();
    func_0x0001086da710();
    func_0x000107c27a04(&uStack_438);
    func_0x0001086db990();
    func_0x000107c31428(auStack_218);
    func_0x0001086d9fb0();
    alStack_420[2] = 0;
    alStack_420[3] = 0;
    alStack_420[0] = extraout_x8_01 + 0x10;
    alStack_420[1] = 0;
    uStack_400 = CONCAT44(uStack_400._4_4_,0x259);
    plVar4 = alStack_420;
    func_0x0001086db7a0(plVar4,0x1bb);
    func_0x000107c2884c(auStack_490,plVar4);
    func_0x0001086da84c();
    func_0x0001086da424();
    func_0x000107c2882c(auStack_490);
    func_0x000107c2882c(alStack_420);
    func_0x000107c279dc(auStack_250);
    func_0x000107c31424(auStack_218);
  }
  if (iStack_d0 == 1) {
    puVar2 = auStack_1c0;
    FUN_1086a6978(puVar2,unaff_x20 + 0x98,0);
    if ((int)puVar2 == 0) {
      func_0x0001086d9b0c();
      alStack_420[1] = 0;
      uStack_3d8 = 0;
      alStack_420[3] = 0;
      alStack_420[2] = 0;
      uStack_3f8 = 0;
      uStack_400 = 0;
      uStack_3ef = 0;
      uStack_3f7 = 0;
      uStack_3f0 = 0;
      alStack_420[0] = extraout_x8_02;
      func_0x0001086d0f30(alStack_420);
      func_0x0001086dba98(auStack_218);
      FUN_1086c77e0(alStack_420);
      func_0x000107c287d0();
      func_0x0001086dbb24();
      func_0x0001086daa50(auStack_218);
      FUN_1086c1e2c(alStack_420);
      func_0x000107c287d0();
      func_0x0001086dbb24();
      func_0x0001086d9aa4();
      FUN_1088f9cb4(alStack_420);
    }
    else {
      func_0x0001086da32c();
    }
  }
  else {
    func_0x0001086d9e5c();
  }
  func_0x000107c288c8(auStack_1d8);
  return;
}



/* Entry: 1086c8518; end: 1086c8683;  */

long * FUN_1086c8518(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  long *plVar2;
  long *plVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar4;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w11;
  long unaff_x20;
  long *plVar5;
  undefined8 in_register_00005008;
  long *plStack_d8;
  long alStack_b0 [3];
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long alStack_68 [3];
  undefined1 *puStack_50;
  
  plVar2 = alStack_b0;
  plVar3 = alStack_b0;
  func_0x000107c32670();
  func_0x000100864738();
  FUN_10867a634(alStack_68,param_2 + 0x78);
  if (alStack_68[0] != 0) {
    func_0x000107c326e4();
    func_0x0001086db6e4();
  }
  func_0x000107c28a70(alStack_68);
  plVar5 = *(long **)(*(long *)(unaff_x20 + 0xd0) + 0x10);
  func_0x0001086db7c8();
  func_0x0001086db510();
  uStack_98 = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10 != 0);
  }
  func_0x0001086dbd34();
  if (extraout_x8_00 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10_00 != 0);
  }
  func_0x0001086da1e8();
  uStack_78 = param_1;
  uStack_70 = in_register_00005008;
  if (extraout_x8_01 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10_01 != 0);
  }
  puStack_50 = (undefined1 *)0x0;
  func_0x000107c32774();
  func_0x0001086db3f8();
  func_0x000107c27994();
  func_0x0001086dbdec();
  lVar4 = extraout_x8_02;
  if (extraout_x9 != 0) {
    do {
      func_0x000107c325ec();
      lVar4 = extraout_x8_03;
    } while (extraout_w11 != 0);
  }
  uVar1 = uStack_78;
  *(undefined8 *)(lVar4 + 0x28) = 0;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  *(undefined8 *)((long)plVar2 + 0x38) = uStack_80;
  *(undefined8 *)((long)plVar2 + 0x30) = uStack_88;
  *(undefined8 *)((long)plVar2 + 0x48) = uStack_70;
  *(undefined8 *)((long)plVar2 + 0x40) = uVar1;
  *(undefined8 *)(lVar4 + 0x38) = 0;
  *(undefined8 *)(lVar4 + 0x40) = 0;
  puStack_50 = (undefined1 *)plVar2;
  (**(code **)(*plVar5 + 200))(plVar5,unaff_x20 + 0x98);
  FUN_1086d7d10(alStack_68);
  FUN_1086c8684();
  func_0x000100864c10();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    plVar2 = alStack_68;
    func_0x000107c28a70();
    func_0x0001086d9ff8();
    func_0x000107c29124(plVar2 + 7);
    func_0x000107c2814c(plVar2 + 5);
    func_0x000104be3970(plVar2 + 3);
    plStack_d8 = plVar2;
    func_0x000100100fd4(&plStack_d8);
    return plVar2;
  }
  return plVar3;
}



/* Entry: 1086c8684; end: 1086c86b7;  */

long FUN_1086c8684(long param_1)

{
  long lStack_28;
  
  func_0x000107c29124(param_1 + 0x38);
  func_0x000107c2814c(param_1 + 0x28);
  func_0x000104be3970(param_1 + 0x18);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 1086c86b8; end: 1086c87cb;  */

undefined1 * FUN_1086c86b8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar3;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  long unaff_x20;
  long *plVar4;
  undefined1 *puStack_b8;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = auStack_90;
  puVar2 = auStack_90;
  func_0x0001086d9934();
  plVar4 = *(long **)(*(long *)(param_2 + 0xd0) + 0x10);
  uStack_38 = extraout_x8;
  func_0x000107c27994();
  func_0x0001086db510();
  uStack_78 = param_1;
  if (extraout_x8_00 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10 != 0);
  }
  func_0x0001086dbd34();
  if (extraout_x8_01 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10_00 != 0);
  }
  puStack_40 = (undefined1 *)0x0;
  func_0x000107c326e0();
  func_0x0001086db3e8();
  func_0x000107c27994();
  func_0x0001086dbdec();
  lVar3 = extraout_x8_02;
  if (extraout_x9 != 0) {
    do {
      func_0x000107c325ec();
      lVar3 = extraout_x8_03;
    } while (extraout_w11 != 0);
  }
  *(undefined8 *)(puVar1 + 0x38) = uStack_60;
  *(undefined8 *)(puVar1 + 0x30) = uStack_68;
  *(undefined8 *)(lVar3 + 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  puStack_40 = puVar1;
  (**(code **)(*plVar4 + 0xd0))(plVar4,unaff_x20 + 0x98,param_3,auStack_58);
  func_0x00010865f8f8(auStack_58);
  FUN_1086c87cc();
  func_0x000107c325c0(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010865f8f8(auStack_58);
    FUN_1086c87cc(auStack_90);
    func_0x0001086d9ff8();
    func_0x000107c32730();
    func_0x000107c2814c();
    func_0x000104be3970(puVar2 + 0x18);
    puStack_b8 = puVar2;
    func_0x000100100fd4(&puStack_b8);
    return puVar2;
  }
  return puVar2;
}



/* Entry: 1086c87cc; end: 1086c87f3;  */

void FUN_1086c87cc(void)

{
  long unaff_x19;
  
  func_0x000107c32730();
  func_0x000107c2814c();
  func_0x000104be3970(unaff_x19 + 0x18);
  func_0x000100100fd4(&stack0xffffffffffffffd8);
  return;
}



/* Entry: 1086c87f4; end: 1086c8a0f;  */

void FUN_1086c87f4(undefined8 param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined1 in_NG;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long unaff_x21;
  long *unaff_x22;
  ulong uVar6;
  uint uVar7;
  long *plVar8;
  long *unaff_x25;
  long *plVar9;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  func_0x0001086dae44();
  lVar4 = param_2 + 0x178;
  func_0x000107c28ecc();
  if (lVar4 == 0) {
    FUN_108848654();
    plVar8 = *(long **)(param_2 + 0x180);
    plVar5 = unaff_x22;
    if (plVar8 != (long *)0x0) {
      uVar6 = (long)plVar8 - 1;
      uVar7 = (uint)plVar8;
      if (((ulong)plVar8 & uVar6) == 0) {
        unaff_x25 = (long *)((ulong)(uVar7 - 1) & (ulong)unaff_x22);
        in_NG = false;
      }
      else {
        in_NG = (long)unaff_x22 - (long)plVar8 < 0;
        unaff_x25 = unaff_x22;
        if (plVar8 <= unaff_x22) {
          uVar1 = 0;
          if (uVar7 != 0) {
            uVar1 = (uint)unaff_x22 / uVar7;
          }
          unaff_x25 = (long *)(ulong)((uint)unaff_x22 - uVar1 * uVar7);
        }
      }
      plVar9 = *(long **)(*(long *)(param_2 + 0x178) + (long)unaff_x25 * 8);
      if (plVar9 != (long *)0x0) {
        do {
          while( true ) {
            plVar9 = (long *)*plVar9;
            if (plVar9 == (long *)0x0) goto LAB_1086c88cc;
            plVar3 = (long *)plVar9[1];
            in_NG = (long)plVar3 - (long)unaff_x22 < 0;
            if (plVar3 != unaff_x22) break;
            plVar5 = plVar9 + 2;
            func_0x000107c28078();
            if (((ulong)plVar5 & 1) != 0) {
              return;
            }
          }
          if (((ulong)plVar8 & uVar6) == 0) {
            plVar3 = (long *)((ulong)plVar3 & uVar6);
          }
          else if (plVar8 <= plVar3) {
            uVar2 = 0;
            if (plVar8 != (long *)0x0) {
              uVar2 = (ulong)plVar3 / (ulong)plVar8;
            }
            plVar3 = (long *)((long)plVar3 - uVar2 * (long)plVar8);
          }
          in_NG = (long)plVar3 - (long)unaff_x25 < 0;
        } while (plVar3 == unaff_x25);
      }
    }
LAB_1086c88cc:
    plVar9 = (long *)(param_2 + 0x188);
    func_0x0001086da334();
    uStack_58 = 0;
    *plVar5 = 0;
    plVar5[1] = (long)unaff_x22;
    plStack_68 = plVar5;
    plStack_60 = plVar9;
    func_0x000107c27994(plVar5 + 2);
    plVar5[5] = unaff_x21;
    func_0x000107c3273c();
    func_0x0001086dbec8(*(undefined8 *)(param_2 + 400));
    if ((plVar8 == (long *)0x0) ||
       (func_0x0001086dbc80(param_1,*(undefined4 *)(param_2 + 0x198),(float)plVar8), (bool)in_NG)) {
      func_0x0001086d9f3c((long)plVar8 << 1);
      FUN_10869f3f8(param_2 + 0x178);
      plVar8 = *(long **)(param_2 + 0x180);
      if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
        unaff_x25 = (long *)((ulong)((int)plVar8 - 1) & (ulong)unaff_x22);
      }
      else {
        unaff_x25 = unaff_x22;
        if (plVar8 <= unaff_x22) {
          uVar6 = 0;
          if (plVar8 != (long *)0x0) {
            uVar6 = (ulong)unaff_x22 / (ulong)plVar8;
          }
          unaff_x25 = (long *)((long)unaff_x22 - uVar6 * (long)plVar8);
        }
      }
    }
    lVar4 = *(long *)(param_2 + 0x178);
    plVar5 = *(long **)(lVar4 + (long)unaff_x25 * 8);
    if (plVar5 == (long *)0x0) {
      *plStack_68 = *plVar9;
      *plVar9 = (long)plStack_68;
      *(long **)(lVar4 + (long)unaff_x25 * 8) = plVar9;
      if (*plStack_68 != 0) {
        plVar5 = *(long **)(*plStack_68 + 8);
        if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
          plVar5 = (long *)((ulong)plVar5 & (long)plVar8 - 1U);
        }
        else if (plVar8 <= plVar5) {
          uVar6 = 0;
          if (plVar8 != (long *)0x0) {
            uVar6 = (ulong)plVar5 / (ulong)plVar8;
          }
          plVar5 = (long *)((long)plVar5 - uVar6 * (long)plVar8);
        }
        *(long **)(lVar4 + (long)plVar5 * 8) = plStack_68;
      }
    }
    else {
      *plStack_68 = *plVar5;
      *plVar5 = (long)plStack_68;
    }
    plStack_68 = (long *)0x0;
    *(long *)(param_2 + 400) = *(long *)(param_2 + 400) + 1;
    FUN_10869f5f0(&plStack_68);
  }
  else {
    *(long *)(lVar4 + 0x28) = unaff_x21;
  }
  return;
}



/* Entry: 1086c8a10; end: 1086c8b0b;  */

void FUN_1086c8a10(uint param_1)

{
  byte bStack_1ef;
  byte bStack_48;
  
  func_0x0001086d9948();
  func_0x0001086da920();
  if (((bStack_48 & 1) == 0) || ((bStack_1ef >> 3 & 1) == 0)) {
    func_0x0001086da058();
  }
  else {
    func_0x0001086d9828();
    func_0x0001086db1cc();
    func_0x0001086dbbe8(0x1d);
    if ((param_1 & 1) != 0) {
      func_0x0001086da030();
    }
    func_0x0001086d0fa8();
    func_0x0001086d9a14();
    func_0x0001086da3dc();
  }
  func_0x0001086da33c();
  return;
}



/* Entry: 1086c8b0c; end: 1086c8c07;  */

void FUN_1086c8b0c(uint param_1)

{
  byte bStack_1ef;
  byte bStack_48;
  
  func_0x0001086d9948();
  func_0x0001086da920();
  if (((bStack_48 & 1) == 0) || ((bStack_1ef >> 3 & 1) == 0)) {
    func_0x0001086da058();
  }
  else {
    func_0x0001086d9828();
    func_0x0001086db1cc();
    func_0x0001086dbbe8(0x1e);
    if ((param_1 & 1) != 0) {
      func_0x0001086da030();
    }
    func_0x0001086d0fe0();
    func_0x0001086d9a14();
    func_0x0001086da3dc();
  }
  func_0x0001086da33c();
  return;
}



/* Entry: 1086c8c08; end: 1086c92a3;  */

void FUN_1086c8c08(void)

{
  byte bVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  ulong *puVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  ulong uVar10;
  code *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  code *extraout_x8_05;
  undefined **ppuVar11;
  undefined **extraout_x8_06;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *unaff_x19;
  long unaff_x20;
  uint uVar12;
  undefined1 *unaff_x22;
  int iVar13;
  undefined1 *puVar14;
  int *piVar15;
  long lVar16;
  int iVar17;
  ulong uVar18;
  undefined **ppuVar19;
  undefined **ppuStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c88;
  undefined1 auStack_c60 [16];
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined8 uStack_c40;
  undefined1 auStack_c30 [8];
  undefined8 uStack_c28;
  long lStack_c10;
  ulong uStack_c08;
  undefined **ppuStack_c00;
  long lStack_bf8;
  ulong uStack_bf0;
  undefined **ppuStack_be8;
  undefined1 auStack_ba0 [424];
  undefined1 auStack_9f8 [32];
  undefined1 *puStack_9d8;
  byte bStack_9d0;
  char cStack_850;
  undefined **ppuStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined4 uStack_810;
  undefined1 auStack_808 [80];
  ulong auStack_7b8 [3];
  undefined1 auStack_7a0 [440];
  byte bStack_5e8;
  ulong uStack_5e0;
  undefined **ppuStack_5d8;
  ulong *puStack_5d0;
  ulong uStack_5b0;
  undefined8 uStack_8;
  
  iVar17 = (int)unaff_x22;
  func_0x000107c32728();
  func_0x0001086dac20();
  func_0x0001086d9934();
  uStack_8 = extraout_x8;
  func_0x0001086da270();
  func_0x0001086da64c(auStack_7b8);
  if ((bStack_5e8 & 1) == 0) {
    puVar3 = (ulong *)*unaff_x19;
    func_0x0001086d9f90();
    goto LAB_1086c8d7c;
  }
  uStack_818 = 0;
  uStack_820 = 0;
  uStack_828 = 0;
  ppuStack_830 = &PTR_FUN_110a609a8;
  uStack_810 = 0x289;
  func_0x0001086da9cc(auStack_808,*(long *)(unaff_x20 + 0xd0) + 0x130,&ppuStack_830);
  func_0x000107c2882c();
  func_0x0001086d9f9c();
  (*extraout_x8_00)();
  func_0x0001086da100();
  FUN_108862cf0(&uStack_5e0);
  func_0x000107c28998(auStack_9f8,&uStack_5e0);
  func_0x000107c28948(&uStack_5e0);
  in_ZR = cStack_850 == '\x01';
  if (((bool)in_ZR) && ((bStack_9d0 & 1) != 0)) {
    func_0x000107c28a9c(auStack_ba0,auStack_9f8);
    unaff_x22 = &stack0xfffffffffffff7b8;
    FUN_1086c92a4(unaff_x22,auStack_ba0);
    func_0x000107c288e0(auStack_ba0);
    if (((ulong)unaff_x22 & 1) == 0) goto LAB_1086c8d64;
    uStack_5e0 = uStack_5e0 & 0xffffffff00000000;
    puVar2 = auStack_7a0;
    puVar3 = &uStack_5e0;
    FUN_1086a3d00(puVar2,puVar3,unaff_x20 + 0x98);
    if ((((ulong)puVar3 & 1) == 0) ||
       (in_ZR = puVar2 == puStack_9d8, (long)puVar2 < (long)puStack_9d8)) {
      puVar3 = (ulong *)*unaff_x19;
      FUN_1086b4f14();
      unaff_x22 = puStack_9d8;
    }
    else {
      puVar3 = (ulong *)(unaff_x20 + 0x1d8);
      FUN_108679cf0();
      uVar10 = *puVar3;
      if ((long)uVar10 < 1) {
        puVar14 = (undefined1 *)0x0;
      }
      else {
        if ((long)(puStack_9d8 + (uVar10 >> 1)) <= (long)puVar2) {
          puVar2 = puStack_9d8 + (uVar10 >> 1);
        }
        puVar14 = (undefined1 *)
                  ((long)puVar2 - uVar10 &
                  ((long)((long)puVar2 - uVar10) >> 0x3f ^ 0xffffffffffffffffU));
      }
      piVar15 = (int *)(unaff_x20 + 0x244);
      if ((*(byte *)(unaff_x20 + 0x248) & 1) == 0) {
        lVar4 = *(long *)(unaff_x20 + 0x218);
        if (lVar4 == 0) {
          piVar15 = (int *)(unaff_x20 + 0x240);
          goto LAB_1086c8df4;
        }
        func_0x0001086da408();
        iVar17 = (int)lVar4;
        uVar10 = unaff_x20 + 0x228;
        (*extraout_x8_01)();
        bVar1 = *(byte *)(unaff_x20 + 0x248);
        if ((uint)bVar1 == ((uint)uVar10 & 0xff)) {
          if (bVar1 != 0) {
            *(int *)(unaff_x20 + 0x244) = iVar17;
          }
          if ((uVar10 & 1) == 0) {
LAB_1086c8e0c:
            piVar15 = (int *)(unaff_x20 + 0x240);
          }
        }
        else {
          if (bVar1 != 0) goto LAB_1086c8e0c;
          *piVar15 = iVar17;
        }
        iVar17 = *piVar15;
        *(int *)(unaff_x20 + 0x244) = iVar17;
        *(undefined1 *)(unaff_x20 + 0x248) = 1;
      }
      else {
LAB_1086c8df4:
        iVar17 = *piVar15;
      }
      lStack_bf8 = 0;
      uStack_bf0 = 0;
      ppuStack_be8 = (undefined **)0x0;
      if (puStack_9d8 + 1 <= puVar2) {
        FUN_1086c9384(&uStack_5e0,&stack0xfffffffffffff420,puStack_9d8 + 1,puVar2,1);
        func_0x0001086a9b44(&lStack_bf8,&uStack_5e0);
        func_0x0001086dbadc();
      }
      uVar10 = uStack_bf0;
      lVar4 = lStack_bf8;
      func_0x0001086dbeb0();
      func_0x0001086a9b00();
      ppuVar19 = ppuStack_be8;
      uVar18 = uStack_bf0;
      lStack_c10 = lStack_bf8;
      ppuStack_c00 = ppuStack_be8;
      uStack_c08 = uStack_bf0;
      lStack_bf8 = 0;
      uStack_bf0 = 0;
      ppuStack_be8 = (undefined **)0x0;
      if (puVar14 <= puStack_9d8) {
        FUN_1086c9384(&uStack_5e0,&stack0xfffffffffffff420,puVar14,puStack_9d8,0);
        func_0x0001086c0798(&lStack_c10,uStack_c08,uStack_5e0,ppuStack_5d8);
        func_0x0001086dbadc();
      }
      iVar9 = (int)((long)(uStack_c08 - lStack_c10) / 0x1a8);
      if (iVar17 < 1) {
        iVar17 = iVar9;
      }
      uVar12 = iVar17 / -2 + (int)((long)(uVar10 - lVar4) / 0x1a8);
      if ((int)uVar12 < 0) {
        uVar12 = 0;
        iVar13 = iVar17;
        if (iVar9 <= iVar17) {
          iVar13 = iVar9;
        }
      }
      else {
        iVar13 = uVar12 + iVar17;
        if (iVar9 < (int)(uVar12 + iVar17)) {
          uVar12 = iVar9 - iVar17 & (iVar9 - iVar17 >> 0x1f ^ 0xffffffffU);
          iVar13 = iVar9;
        }
      }
      func_0x0001086dac38();
      func_0x000104be6ea0(auStack_c30,(long)(int)(iVar13 - uVar12));
      uVar10 = (ulong)iVar13;
      lVar4 = (long)iVar13 * 0x1a8;
      while( true ) {
        in_ZR = uVar10 == uVar12;
        if ((long)uVar10 <= (long)(ulong)uVar12) break;
        func_0x000107c29260(&uStack_5e0,*(undefined8 *)(*(long *)(unaff_x20 + 0xd0) + 0x170),
                            lStack_c10 + lVar4 + -0x1a8,auStack_7b8);
        func_0x000107c27aa8(auStack_c30,&uStack_5e0);
        func_0x000107c27a10(&uStack_5e0);
        uVar10 = uVar10 - 1;
        lVar4 = lVar4 + -0x1a8;
      }
      func_0x000107c278b8(&uStack_5e0,&UNK_10f4b1428);
      func_0x000107c28af4(0);
      func_0x0001086db0e4();
      func_0x0001086dafd8();
      func_0x000107c32690();
      func_0x0001086dbad4();
      func_0x0001086dabb8();
      puVar5 = &uStack_5e0;
      func_0x000107c278b8();
      func_0x0001086da45c(uStack_c28);
      func_0x0001086db0e4();
      func_0x0001086dafd8();
      func_0x000107c32690();
      func_0x0001086dbad4();
      unaff_x22 = *(undefined1 **)(*(long *)(unaff_x20 + 0xd0) + 0x100);
      func_0x0001086d9f1c();
      if (extraout_x8_02 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10 != 0);
      }
      func_0x0001086d9b74();
      func_0x000107c28150();
      func_0x000107c3278c();
      func_0x000107c3270c();
      lVar16 = *(long *)(lVar4 + -0x138);
      uStack_5e0 = 0x1086d8038;
      ppuStack_5d8 = &PTR_FUN_110a65510;
      func_0x000107c3268c();
      func_0x0001086d9ed4();
      if (extraout_x8_03 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_00 != 0);
      }
      func_0x0001086dbd08();
      uStack_c48 = 0;
      uStack_c40 = 0;
      uStack_c50 = 0;
      puVar3 = &uStack_5e0;
      puStack_5d0 = puVar5;
      uStack_5b0 = uVar10;
      func_0x000107c28154(lVar4 + -0x160);
      func_0x000107c325e8(ppuStack_5d8);
      func_0x000107c326b0();
      if (lVar16 == 0) {
        func_0x000107c3261c();
        uStack_5e0 = uVar18;
        ppuStack_5d8 = ppuVar19;
        if (extraout_x8_04 != 0) {
          do {
            func_0x000107c325f8();
          } while (extraout_w10_01 != 0);
        }
        func_0x000107c3265c();
        puVar3 = &uStack_5e0;
        (*extraout_x8_05)();
        func_0x000107c27e74(&uStack_5e0);
      }
      FUN_1086c94bc(auStack_c60);
      func_0x0001086db098();
      func_0x0001086db198();
      func_0x00010867b9fc(&lStack_bf8);
    }
  }
  else {
LAB_1086c8d64:
    puVar3 = (ulong *)*unaff_x19;
    func_0x0001086d9f90();
  }
  iVar17 = (int)unaff_x22;
  func_0x000107c288dc(auStack_9f8);
  func_0x000107c28b40(auStack_808);
LAB_1086c8d7c:
  func_0x000107c288c8(auStack_7b8);
  while( true ) {
    while( true ) {
      func_0x000107c325c0(uStack_8);
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      func_0x0001086d9fec();
      func_0x000107c288dc(auStack_9f8);
      func_0x000107c28b40(auStack_808);
      puVar5 = auStack_7b8;
      func_0x000107c288c8();
      in_ZR = iVar17 == 2;
      if (!(bool)in_ZR) break;
      func_0x0001086da000();
      func_0x000108848514();
      func_0x0001086da1d4();
      func_0x0001086dad84();
      ___cxa_end_catch();
    }
    in_ZR = iVar17 == 1;
    if (!(bool)in_ZR) break;
    func_0x0001086da000();
    func_0x0001086da04c();
    FUN_1086b50d8();
    ___cxa_end_catch();
    puVar3 = puVar5;
  }
  func_0x0001086da008();
  func_0x0001086da22c();
  ppuVar11 = (undefined **)puVar3[0xf];
  ppuVar19 = &PTR_PTR_113280c30;
  if (ppuVar11 != (undefined **)0x0) {
    ppuVar19 = ppuVar11;
  }
  if ((*(int *)(ppuVar19 + 0x15) == 0x15 || *(int *)(ppuVar19 + 0x15) == 0) &&
     (func_0x0001086dbee0(), ppuVar11 = extraout_x8_06, *(int *)(extraout_x9 + 0x50) == 0)) {
    puVar6 = puVar3 + 10;
    FUN_108844804(puVar6,*puVar5 + 0x98,*(undefined8 *)puVar5[1]);
    if ((int)puVar6 == 0) {
      return;
    }
    ppuVar11 = (undefined **)puVar3[0xf];
  }
  ppuVar19 = &PTR_PTR_113280c30;
  if (ppuVar11 != (undefined **)0x0) {
    ppuVar19 = ppuVar11;
  }
  if (*(int *)(ppuVar19 + 0x15) == 2) {
    ppuStack_ca0 = &PTR_DAT_110a823c8;
    uStack_c98 = 0;
    uStack_c88 = 0;
    puVar7 = (undefined8 *)((ulong)ppuVar19[0xc] & 0xfffffffffffffffc);
    lVar4 = (long)*(char *)((long)puVar7 + 0x17);
    puVar8 = puVar7;
    if (lVar4 < 0) {
      puVar8 = (undefined8 *)*puVar7;
      lVar4 = puVar7[1];
    }
    func_0x000107c30344(&ppuStack_ca0,puVar8,lVar4);
    FUN_1088c238c(&ppuStack_ca0);
  }
  return;
}



/* Entry: 1086c92a4; end: 1086c9383;  */

void FUN_1086c92a4(long *param_1,long param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **extraout_x8;
  long extraout_x9;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  ppuVar5 = *(undefined ***)(param_2 + 0x78);
  ppuVar1 = &PTR_PTR_113280c30;
  if (ppuVar5 != (undefined **)0x0) {
    ppuVar1 = ppuVar5;
  }
  if ((*(int *)(ppuVar1 + 0x15) == 0x15 || *(int *)(ppuVar1 + 0x15) == 0) &&
     (func_0x0001086dbee0(), ppuVar5 = extraout_x8, *(int *)(extraout_x9 + 0x50) == 0)) {
    lVar4 = param_2 + 0x50;
    FUN_108844804(lVar4,*param_1 + 0x98,*(undefined8 *)param_1[1]);
    if ((int)lVar4 == 0) {
      return;
    }
    ppuVar5 = *(undefined ***)(param_2 + 0x78);
  }
  ppuVar1 = &PTR_PTR_113280c30;
  if (ppuVar5 != (undefined **)0x0) {
    ppuVar1 = ppuVar5;
  }
  if (*(int *)(ppuVar1 + 0x15) == 2) {
    ppuStack_40 = &PTR_DAT_110a823c8;
    uStack_38 = 0;
    uStack_28 = 0;
    puVar2 = (undefined8 *)((ulong)ppuVar1[0xc] & 0xfffffffffffffffc);
    lVar4 = (long)*(char *)((long)puVar2 + 0x17);
    puVar3 = puVar2;
    if (lVar4 < 0) {
      puVar3 = (undefined8 *)*puVar2;
      lVar4 = puVar2[1];
    }
    func_0x000107c30344(&ppuStack_40,puVar3,lVar4);
    FUN_1088c238c(&ppuStack_40);
  }
  return;
}



/* Entry: 1086c9384; end: 1086c94bb;  */

void FUN_1086c9384(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_718 [424];
  long alStack_570 [54];
  byte bStack_3c0;
  long alStack_3b8 [54];
  byte bStack_208;
  undefined1 auStack_200 [448];
  
  func_0x000107c32678();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  func_0x0001086da914(*param_2);
  FUN_108860d08(auStack_200);
  func_0x000107c288bc(alStack_3b8,auStack_200);
  func_0x00010086e188(alStack_570);
  while ((((bStack_208 & 1) != 0 || ((bStack_3c0 & 1) != 0)) && (alStack_3b8[0] != alStack_570[0])))
  {
    func_0x000107c288c0(alStack_3b8);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
    **(int **)(unaff_x20 + 0x18) = **(int **)(unaff_x20 + 0x18) + 1;
    func_0x0001086db1dc();
    func_0x000107c28a9c();
    FUN_1086c92a4(uVar1,auStack_718);
    func_0x000107c288e0(auStack_718);
    if ((int)uVar1 != 0) {
      func_0x0001086daeb4();
      func_0x0001086aa5b8();
    }
    func_0x000107c28980(alStack_3b8);
  }
  func_0x00010086e190(alStack_570);
  func_0x00010086e190(alStack_3b8);
  func_0x000107c28948(auStack_200);
  return;
}



/* Entry: 1086c94bc; end: 1086c94d7;  */

long FUN_1086c94bc(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001086da1c8();
  lVar1 = unaff_x19;
  func_0x00010054ffe4();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1086c94d8; end: 1086c98ff;  */

void FUN_1086c94d8(void)

{
  undefined **ppuVar1;
  uint uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long *unaff_x20;
  undefined1 auStack_800 [472];
  undefined1 auStack_628 [40];
  undefined8 uStack_600;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  char cStack_5c8;
  undefined **ppuStack_5c0;
  ulong uStack_5b8;
  undefined8 uStack_5b0;
  undefined1 auStack_5a8 [8];
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined1 auStack_588 [24];
  undefined1 auStack_570 [80];
  undefined1 auStack_520 [24];
  undefined8 uStack_508;
  undefined8 uStack_4f8;
  undefined **ppuStack_4f0;
  undefined8 uStack_4c0;
  undefined1 auStack_4a8 [224];
  undefined1 auStack_3c8 [424];
  byte bStack_220;
  undefined1 auStack_218 [284];
  int iStack_fc;
  byte bStack_48;
  
  func_0x0001086daaa8();
  func_0x0001086d9afc();
  func_0x0001086da64c(auStack_218);
  if (((bStack_48 & 1) == 0) || (iStack_fc != 3)) {
    func_0x0001086da058();
    goto code_r0x0001006b7494;
  }
  func_0x0001086da100();
  func_0x000107c29f90(auStack_800);
  func_0x000107c28998(auStack_3c8,auStack_800);
  func_0x0001086daa30();
  if ((bStack_220 & 1) == 0) {
    func_0x0001086da32c();
  }
  else {
    func_0x000107c3271c(*(undefined8 *)(unaff_x20[0x1a] + 0x2b0));
    func_0x0001086da978();
    func_0x0001086da100();
    FUN_1086a125c(auStack_570);
    func_0x0001086d9cfc(uStack_508);
    func_0x000107c29ee0(auStack_588);
    puVar3 = auStack_588;
    func_0x000107c28078(puVar3,unaff_x20 + 0x13);
    if ((int)puVar3 == 0) {
      uStack_5b0 = 0;
      uStack_5b8 = 0;
      ppuStack_5c0 = &PTR_DAT_110a95ff0;
      func_0x0001086daf64();
      uStack_5a0 = 0;
      uStack_590 = 0;
      uStack_598 = 0;
      (**(code **)(**(long **)(unaff_x20[0x1a] + 0x2b0) + 0x18))
                (&uStack_5e0,*(long **)(unaff_x20[0x1a] + 0x2b0),auStack_520);
      if (cStack_5c8 == '\x01') {
        func_0x000107c28068(auStack_800,uStack_5e0,uStack_5d8);
        uVar4 = uStack_5b8;
        if ((uStack_5b8 & 1) != 0) {
          uVar4 = *(ulong *)(uStack_5b8 & 0xfffffffffffffffe);
        }
        puVar3 = auStack_5a8;
        func_0x000107c3024c(puVar3,auStack_800,uVar4);
        func_0x0001086daa38();
      }
      else {
        func_0x0001086dafe8(uStack_4f8);
        uVar4 = uStack_5b8;
        if ((uStack_5b8 & 1) != 0) {
          uVar4 = *(ulong *)(uStack_5b8 & 0xfffffffffffffffe);
        }
        puVar3 = auStack_5a8;
        func_0x000107c30248(puVar3,*(ulong *)(extraout_x8_00 + 0x60) & 0xfffffffffffffffc,uVar4);
      }
      ppuVar1 = &PTR_PTR_113286e08;
      if (ppuStack_4f0 != (undefined **)0x0) {
        ppuVar1 = ppuStack_4f0;
      }
      if ((*(byte *)(ppuVar1 + 2) >> 2 & 1) != 0) {
        func_0x0001086daf3c();
        FUN_108927a18();
        func_0x0001086daf3c();
        func_0x000107c32818();
        func_0x0001086daf3c();
        *(undefined4 *)(puVar3 + 0x28) = 2;
        func_0x0001086daf3c();
        *(undefined4 *)(puVar3 + 0x24) = 0xffffffff;
      }
      func_0x0001086d9ef4();
      func_0x0001086dac98();
      func_0x0001086daa50(auStack_800);
      FUN_1086c814c(auStack_628);
      func_0x0001086db124();
      func_0x0001086da6bc();
      uStack_600 = uStack_4c0;
      func_0x0001086d0ea8(auStack_628);
      FUN_10891f5a8();
      func_0x0001086d9e40(unaff_x20[0xb]);
      func_0x0001086db444();
      func_0x0001086da768();
      func_0x0001086da5d4();
      func_0x0001086da5cc();
      func_0x0001086db28c();
      func_0x000107c279c4(&uStack_5e0);
      FUN_10891f33c(&ppuStack_5c0);
    }
    else {
      func_0x0001086dafe8(uStack_4f8);
      uVar2 = *(uint *)(extraout_x8 + 0xa8);
      func_0x000107c29e58();
      if ((1 << (ulong)(uVar2 & 0x1f) & 0xf1b7c17fU) == 0) {
LAB_1086c96b4:
        func_0x0001086da32c();
      }
      else {
        puVar3 = auStack_4a8;
        func_0x000107c27cf4(puVar3,&UNK_10f4b1463);
        if (((ulong)puVar3 & 1) == 0) {
          puVar3 = auStack_4a8;
          func_0x000107c27cf4(puVar3,&DAT_10f4b146d);
          if ((int)puVar3 == 0) goto LAB_1086c96b4;
        }
        func_0x0001086da544(*(undefined8 *)(*unaff_x20 + 0x98));
        func_0x0001086db1ac();
      }
    }
    func_0x000107c27914(auStack_588);
    func_0x000107c288e0(auStack_570);
  }
  func_0x000107c288dc(auStack_3c8);
code_r0x0001006b7494:
  func_0x000107c288c8(auStack_218);
  return;
}



/* Entry: 1086c9900; end: 1086c9933;  */

void FUN_1086c9900(long param_1)

{
  ulong uVar1;
  long unaff_x19;
  
  func_0x0001086dbf40();
  if (*(long *)(param_1 + 0x30) == 0) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001086da030();
    }
    func_0x0001086d1018();
    *(ulong *)(unaff_x19 + 0x30) = uVar1;
  }
  return;
}



/* Entry: 1086c9934; end: 1086c9ad3;  */

void FUN_1086c9934(void)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined **ppuStack_280;
  ulong uStack_278;
  undefined4 uStack_270;
  undefined1 auStack_268 [8];
  undefined1 *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 uStack_240;
  undefined7 uStack_23f;
  undefined1 uStack_238;
  undefined8 uStack_237;
  undefined1 *puStack_228;
  undefined4 uStack_220;
  undefined1 auStack_218 [464];
  byte bStack_48;
  
  func_0x0001086d9948();
  FUN_1086b1f68(auStack_218);
  if ((bStack_48 & 1) == 0) {
    func_0x0001086d9a80();
  }
  else {
    func_0x0001086d9b0c();
    puStack_260 = (undefined1 *)0x0;
    uStack_220 = 0;
    uStack_250 = 0;
    uStack_258 = 0;
    uStack_240 = 0;
    uStack_248 = 0;
    uStack_237 = 0;
    uStack_23f = 0;
    uStack_238 = 0;
    ppuStack_280 = &PTR_DAT_110a8e0b8;
    uStack_278 = 0;
    uStack_270 = 0;
    FUN_1088f9614(auStack_268);
    uStack_220 = 0x20;
    puVar1 = puStack_260;
    if (((ulong)puStack_260 & 1) != 0) {
      func_0x0001086da030();
    }
    func_0x0001086d1054();
    puStack_228 = puVar1;
    if ((undefined ***)puVar1 != &ppuStack_280) {
      uVar2 = *(ulong *)(puVar1 + 8);
      uVar3 = uVar2;
      if ((uVar2 & 1) != 0) {
        uVar3 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      uVar4 = uStack_278;
      if ((uStack_278 & 1) != 0) {
        uVar4 = *(ulong *)(uStack_278 & 0xfffffffffffffffe);
      }
      if (uVar3 == uVar4) {
        *(ulong *)(puVar1 + 8) = uStack_278;
        uStack_278 = uVar2;
      }
      else {
        FUN_1088fda2c();
      }
    }
    FUN_1088fd97c(&ppuStack_280);
    func_0x0001086d9aa4();
    FUN_1088f9cb4(auStack_268);
  }
  func_0x0001086daf2c();
  return;
}



/* Entry: 1086c9ad4; end: 1086c9ceb;  */

void FUN_1086c9ad4(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong in_x3;
  ulong extraout_x8;
  long extraout_x9;
  long unaff_x20;
  long lVar3;
  long lVar4;
  undefined1 auStack_3d0 [472];
  undefined1 auStack_1f8 [8];
  ulong uStack_1f0;
  undefined4 uStack_1b8;
  undefined1 auStack_1b0 [97];
  byte bStack_14f;
  long lStack_108;
  byte bStack_8;
  
  func_0x000107c32728();
  func_0x0001086dae44();
  func_0x0001086da0b0();
  FUN_108862cf0(auStack_3d0);
  func_0x000107c28998(auStack_1b0,auStack_3d0);
  func_0x0001086daa30();
  if (((bStack_8 & 1) == 0) || ((bStack_14f & 1) == 0)) {
    func_0x0001086da058();
    goto code_r0x000100572518;
  }
  func_0x0001086dbee0(*(undefined1 *)(lStack_108 + 0x20));
  if (((extraout_x8 & 1) == 0) && (lVar3 = *(long *)(extraout_x9 + 0x120), lVar3 != 0)) {
    lVar4 = *(long *)(lStack_108 + 0x10);
    if (lVar4 != 0) {
      uVar1 = *(ulong *)(*(long *)(unaff_x20 + 0xd0) + 0x30);
      func_0x000107c287d8();
      if ((ulong)(lVar4 + lVar3) <= uVar1) goto LAB_1086c9c40;
    }
LAB_1086c9b94:
    if (((in_x3 >> 0x20 & 1) == 0) ||
       ((-1 < (int)in_x3 && ((in_x3 & 0x7fffffff) < *(ulong *)(lStack_108 + 0x18))))) {
      func_0x0001086d9ef4();
      func_0x0001086dac98();
      FUN_10891c548(auStack_1f8);
      uStack_1b8 = 0x1b;
      uVar1 = uStack_1f0;
      if ((uStack_1f0 & 1) != 0) {
        func_0x0001086da030();
        uVar1 = uStack_1f0;
      }
      func_0x0001086d108c();
      if ((in_x3 >> 0x20 & 1) != 0) {
        *(uint *)(uVar1 + 0x10) = *(uint *)(uVar1 + 0x10) | 1;
        uVar2 = *(ulong *)(uVar1 + 0x18);
        if (uVar2 == 0) {
          uVar2 = *(ulong *)(uVar1 + 8);
          if ((uVar2 & 1) != 0) {
            func_0x0001086da030();
          }
          func_0x0001086d10c0();
          *(ulong *)(uVar1 + 0x18) = uVar2;
        }
        *(int *)(uVar2 + 0x10) = (int)in_x3;
      }
      func_0x0001086d9e40(*(undefined8 *)(unaff_x20 + 0x58));
      func_0x0001086db444();
      func_0x0001086da768();
      func_0x0001086da5d4();
      func_0x0001086da5cc();
      func_0x0001086db28c();
      goto code_r0x000100572518;
    }
  }
  else if ((extraout_x8 & 1) == 0) goto LAB_1086c9b94;
LAB_1086c9c40:
  func_0x0001086da058();
code_r0x000100572518:
  func_0x000107c288dc(auStack_1b0);
  return;
}



/* Entry: 1086c9cec; end: 1086ca18f;  */

code ** FUN_1086c9cec(undefined8 param_1,long param_2,char *param_3,code ***param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  code **ppcVar7;
  code *pcVar8;
  undefined8 extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w11;
  undefined8 *unaff_x19;
  long unaff_x20;
  code ***unaff_x22;
  long *unaff_x23;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  code **ppcVar13;
  code *pcVar14;
  code *pcVar15;
  undefined **ppuVar16;
  undefined8 in_stack_00000050;
  undefined8 auStack_950 [2];
  code *pcStack_940;
  undefined **ppuStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  code *pcStack_910;
  undefined **ppuStack_908;
  undefined8 uStack_900;
  undefined8 *puStack_8f8;
  undefined8 *puStack_8f0;
  undefined8 uStack_8e8;
  code *pcStack_8e0;
  undefined **ppuStack_8d8;
  undefined8 *puStack_8d0;
  undefined8 uStack_308;
  code *pcStack_300;
  code *pcStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  code **ppcStack_2e0;
  code **ppcStack_2d8;
  code *pcStack_2d0;
  undefined **ppuStack_2c8;
  code *pcStack_2c0;
  undefined8 *puStack_2b0;
  code *pcStack_2a8;
  code *pcStack_2a0;
  undefined8 uStack_298;
  code *pcStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  code *apcStack_278 [12];
  undefined1 auStack_218 [8];
  int iStack_210;
  byte bStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  code *pcStack_88;
  code *pcStack_80;
  code *pcStack_70;
  code *pcStack_68;
  code *pcStack_60;
  undefined **ppuStack_58;
  code *pcStack_50;
  undefined **ppuStack_48;
  long lStack_30;
  undefined1 auStack_20 [8];
  undefined8 uStack_18;
  code **ppcStack_10;
  undefined8 uStack_8;
  
  func_0x000107c32728();
  func_0x0001086dac20();
  func_0x0001086d9934();
  uStack_8 = extraout_x8;
  func_0x0001086da270();
  ppcVar13 = apcStack_278;
  func_0x0001086da64c(ppcVar13);
  if ((bStack_a8 & 1) == 0) {
    param_3 = (char *)unaff_x19[1];
    func_0x0001086d9f90();
  }
  else {
    pcStack_290 = (code *)0x0;
    pcStack_288 = (code *)0x0;
    uStack_280 = 0;
    ppcVar13 = &pcStack_290;
    func_0x000107c27acc(ppcVar13,(long)iStack_210);
    func_0x0001086db3b8(auStack_218);
    for (lVar10 = (long)iStack_210 << 3; lVar10 != 0; lVar10 = lVar10 + -8) {
      pcStack_60 = *(code **)(*unaff_x23 + 0x10);
      ppcVar13 = &pcStack_290;
      func_0x000107c27adc(ppcVar13,&pcStack_60);
      unaff_x23 = unaff_x23 + 1;
    }
    if (pcStack_290 == pcStack_288) {
      unaff_x22 = *(code ****)(*(long *)(unaff_x20 + 0xd0) + 0x100);
      ppuStack_2c8 = (undefined **)unaff_x19[1];
      pcStack_2d0 = (code *)*unaff_x19;
      in_ZR = 1;
      if (unaff_x19[1] != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_01 != 0);
      }
      func_0x000107c28150();
      func_0x000107c3278c();
      func_0x000107c3270c();
      lVar10 = unaff_x23[0xe];
      pcStack_60 = FUN_1086d8060;
      ppuStack_58 = &PTR_FUN_110a65528;
      ppuStack_48 = ppuStack_2c8;
      pcStack_50 = pcStack_2d0;
      pcVar8 = pcStack_2d0;
      ppuVar16 = ppuStack_2c8;
      if (ppuStack_2c8 != (undefined **)0x0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_02 != 0);
      }
      lStack_30 = param_2;
      func_0x000107c28154(unaff_x23 + 9,&pcStack_60);
      func_0x0001086d9acc(ppuStack_58);
      func_0x000107c326b0();
      if (lVar10 == 0) {
        func_0x000107c3261c();
        pcStack_60 = pcVar8;
        ppuStack_58 = ppuVar16;
        if (extraout_x8_00 != 0) {
          do {
            func_0x000107c325f8();
          } while (extraout_w10_03 != 0);
        }
        func_0x000107c3265c();
        (*extraout_x8_01)();
        func_0x000107c27e74(&pcStack_60);
      }
      func_0x000104be3f18(&pcStack_2d0);
    }
    else {
      func_0x0001086da100();
      FUN_108861df4(&pcStack_60);
      pcVar1 = pcStack_288;
      pcStack_2a8 = (code *)0x0;
      pcStack_2a0 = (code *)0x0;
      uStack_298 = 0;
      for (pcVar8 = pcStack_290; pcVar8 != pcVar1; pcVar8 = pcVar8 + 8) {
        pcStack_2d0 = *(code **)pcVar8;
        ppcVar13 = &pcStack_60;
        FUN_10867b354(ppcVar13,&pcStack_2d0);
        if (ppcVar13 == (code **)0x0) {
          ppcVar13 = &pcStack_2a8;
          func_0x000107c28944(ppcVar13,&pcStack_2d0);
        }
      }
      in_ZR = pcStack_2a8 == pcStack_2a0;
      if ((bool)in_ZR) {
        func_0x0001086da100();
        func_0x000107c29f84(&pcStack_2d0);
        param_3 = (char *)&pcStack_2d0;
        param_4 = unaff_x22;
        FUN_1086ca190();
        func_0x000107c291f0(&pcStack_2d0);
      }
      else {
        plVar9 = *(long **)(*(long *)(unaff_x20 + 0xd0) + 0x200);
        pcVar8 = *(code **)(unaff_x20 + 0x10);
        pcVar1 = *(code **)(unaff_x20 + 0x18);
        pcStack_300 = pcVar8;
        pcStack_2f8 = pcVar1;
        if (pcVar1 != (code *)0x0) {
          do {
            func_0x000107c325f8();
          } while (extraout_w10 != 0);
        }
        uStack_18 = 1;
        func_0x0001086dba88();
        ppcStack_10 = ppcVar13;
        ppcVar13[1] = (code *)0x0;
        ppcVar13[2] = (code *)0x0;
        *ppcVar13 = (code *)&PTR_FUN_110a65550;
        pcStack_300 = (code *)0x0;
        pcStack_2f8 = (code *)0x0;
        pcStack_70 = pcVar8;
        pcStack_68 = pcVar1;
        func_0x0001086da478(&pcStack_2d0);
        func_0x000107c291e8(&pcStack_90,&pcStack_290);
        pcVar15 = (code *)unaff_x19[1];
        pcVar14 = (code *)*unaff_x19;
        if (unaff_x19[1] != 0) {
          do {
            func_0x000107c325f8();
          } while (extraout_w10_00 != 0);
        }
        ppcVar13[3] = (code *)&PTR_FUN_110a655a0;
        ppcVar13[4] = pcVar8;
        ppcVar13[5] = pcVar1;
        pcStack_70 = (code *)0x0;
        pcStack_68 = (code *)0x0;
        ppcVar13[7] = (code *)ppuStack_2c8;
        ppcVar13[6] = pcStack_2d0;
        ppcVar13[8] = pcStack_2c0;
        func_0x0001086dac38();
        ppcVar13[10] = pcStack_88;
        ppcVar13[9] = pcStack_90;
        pcVar8 = pcStack_80;
        pcStack_90 = (code *)0x0;
        pcStack_88 = (code *)0x0;
        pcStack_80 = (code *)0x0;
        ppcVar13[0xb] = pcVar8;
        ppcVar13[0xc] = (code *)unaff_x22;
        ppcVar13[0xe] = pcVar15;
        ppcVar13[0xd] = pcVar14;
        uStack_a0 = 0;
        uStack_98 = 0;
        func_0x000104be3f18(&uStack_a0);
        func_0x000107c27ae4(&pcStack_90);
        func_0x0001086da684();
        func_0x000107c29124(&pcStack_70);
        ppcStack_10 = (code **)0x0;
        FUN_1086d80d0(auStack_20);
        uStack_2f0 = 0;
        uStack_2e8 = 0;
        param_3 = (char *)&pcStack_2a8;
        param_4 = &ppcStack_2e0;
        ppcStack_2e0 = ppcVar13 + 3;
        ppcStack_2d8 = ppcVar13;
        (**(code **)(*plVar9 + 0x10))(plVar9,param_2);
        func_0x000104be3c30(&ppcStack_2e0);
        FUN_1086ca480(&uStack_2f0);
        func_0x0001086dad5c();
      }
      func_0x0001086db030();
      func_0x00010867bb84(&pcStack_60);
    }
    ppcVar13 = &pcStack_290;
    func_0x000107c27ae4(ppcVar13);
  }
  func_0x0001086da208();
  while( true ) {
    while( true ) {
      func_0x000107c325c0(uStack_8);
      if ((bool)in_ZR) {
        return ppcVar13;
      }
      ___stack_chk_fail();
      func_0x0001086d9fec();
      func_0x000107c27e74(&pcStack_60);
      func_0x000104be3f18(&pcStack_2d0);
      ppcVar13 = &pcStack_290;
      func_0x000107c27ae4(ppcVar13);
      func_0x0001086da208();
      in_ZR = (int)unaff_x22 == 2;
      if (!(bool)in_ZR) break;
      func_0x0001086da000();
      func_0x000108848514();
      func_0x0001086da1d4();
      func_0x0001086dad84();
      ___cxa_end_catch();
    }
    in_ZR = (int)unaff_x22 == 1;
    if (!(bool)in_ZR) break;
    func_0x0001086da000();
    param_3 = "getAffinityMessages";
    func_0x0001086da04c();
    FUN_1086b50d8();
    ___cxa_end_catch();
  }
  func_0x0001086da008();
  func_0x0001086da22c();
  pcVar8 = FUN_1086ca190;
  func_0x000107c32728();
  puStack_2b0 = &stack0x00000050;
  pcStack_2a8 = pcVar8;
  func_0x0001086d9fec();
  func_0x0001086d9990();
  uVar5 = *(undefined8 *)(extraout_x8_02 + 0x30);
  func_0x000107c287d8(uVar5);
  puVar6 = (undefined8 *)(param_2 + 0x250);
  FUN_108679cf0();
  uVar12 = *puVar6;
  puStack_8f8 = (undefined8 *)0x0;
  puStack_8f0 = (undefined8 *)0x0;
  uStack_8e8 = 0;
  func_0x000107c27acc(&puStack_8f8,*(code **)((long)param_3 + 0x18));
  ppcVar13 = (code **)((long)param_3 + 0x10);
LAB_1086ca1ec:
  do {
    ppcVar13 = (code **)*ppcVar13;
    if (ppcVar13 == (code **)0x0) {
      puVar6 = puStack_8f8;
      if (puStack_8f8 != puStack_8f0) {
        FUN_1086d10f8(puStack_8f8,puStack_8f0,
                      LZCOUNT((long)puStack_8f0 - (long)puStack_8f8 >> 3) << 1 ^ 0x7e,1);
        puVar6 = puStack_8f0;
      }
      pcStack_910 = (code *)0x0;
      ppuStack_908 = (undefined **)0x0;
      uStack_900 = 0;
      uStack_928 = 0;
      uStack_920 = 0;
      uStack_918 = 0;
      func_0x000104be6ea0(&pcStack_910,(long)puVar6 - (long)puStack_8f8 >> 3);
      puVar6 = &uStack_928;
      func_0x000107c27acc(puVar6,(long)puStack_8f0 - (long)puStack_8f8 >> 3);
      puVar2 = puStack_8f0;
      puVar11 = puStack_8f8;
      while (uVar3 = puVar11 == puVar2, !(bool)uVar3) {
        auStack_950[0] = *puVar11;
        uVar5 = *(undefined8 *)(*(long *)(param_2 + 0xd0) + 0x170);
        ppcVar13 = (code **)param_3;
        FUN_1086d8330(param_3,auStack_950);
        if (ppcVar13 == (code **)0x0) {
          func_0x000104c03f28(&UNK_10f639994);
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1086ca400);
          (*pcVar8)();
        }
        func_0x000107c29260(&pcStack_8e0,uVar5,ppcVar13 + 3,unaff_x22);
        func_0x000107c27aa8(&pcStack_910,&pcStack_8e0);
        func_0x000107c27a10(&pcStack_8e0);
        puVar6 = &uStack_928;
        func_0x000107c28944(puVar6,ppuStack_908 + -0xb8);
        puVar11 = puVar11 + 1;
      }
      func_0x0001086d9f1c();
      if (extraout_x8_03 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_04 != 0);
      }
      ppuVar16 = ppuStack_908;
      pcVar8 = pcStack_910;
      ppuStack_938 = ppuStack_908;
      pcStack_940 = pcStack_910;
      uStack_930 = uStack_900;
      ppuStack_908 = (undefined **)0x0;
      uStack_900 = 0;
      pcStack_910 = (code *)0x0;
      func_0x000107c28150();
      func_0x0001086da310();
      func_0x0001086da1e0();
      lVar10 = *(long *)(param_2 + 0x70);
      pcStack_8e0 = (code *)0x1086d83cc;
      ppuStack_8d8 = &PTR_FUN_110a655d8;
      func_0x000107c3268c();
      func_0x0001086d9e2c();
      if (extraout_x9 != 0) {
        do {
          func_0x000107c325ec();
        } while (extraout_w11 != 0);
      }
      func_0x0001086d9b58();
      puStack_8d0 = puVar6;
      func_0x000107c28154(param_2 + 0x48,&pcStack_8e0);
      func_0x0001086d9a28(ppuStack_8d8);
      func_0x0001086da01c();
      if (lVar10 == 0) {
        func_0x0001086d9ab0();
        pcStack_8e0 = pcVar8;
        ppuStack_8d8 = ppuVar16;
        if (extraout_x8_04 != 0) {
          do {
            func_0x000107c325f8();
          } while (extraout_w10_05 != 0);
        }
        func_0x000107c3265c();
        func_0x000107c327f4();
        func_0x0001086db264();
      }
      func_0x0001086ca4a4(auStack_950);
      func_0x000107c27ae4(&uStack_928);
      ppcVar13 = &pcStack_910;
      func_0x000107c27a08();
      func_0x0001086db030();
      func_0x000107c325c0(uStack_308);
      if ((bool)uVar3) {
        return ppcVar13;
      }
      ___stack_chk_fail();
      func_0x0001086db264();
      func_0x0001086ca4a4(auStack_950);
      func_0x000107c27ae4(&uStack_928);
      ppcVar7 = &pcStack_910;
      func_0x000107c27a08();
      func_0x0001086db030();
      func_0x0001086d9ff8();
      func_0x000107c32694();
      if (ppcVar7 != (code **)0x0) {
        func_0x000107c278a0();
      }
      return ppcVar13;
    }
    ppcVar7 = ppcVar13 + 3;
    func_0x0001088427c4(ppcVar7,uVar5,uVar12);
  } while (((ulong)ppcVar7 & 1) == 0);
  if (((ulong)param_4 >> 0x20 & 1) != 0) goto code_r0x0001086ca20c;
  goto LAB_1086ca21c;
code_r0x0001086ca20c:
  iVar4 = (int)ppcVar13 + 0x68;
  FUN_108844938();
  if (iVar4 == (int)param_4) {
LAB_1086ca21c:
    func_0x000107c28944(&puStack_8f8,ppcVar13 + 2);
  }
  goto LAB_1086ca1ec;
}



/* Entry: 1086ca190; end: 1086ca47f;  */

undefined8 *
FUN_1086ca190(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,undefined8 param_5)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  long unaff_x21;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined **ppuVar12;
  undefined8 auStack_650 [2];
  undefined8 uStack_640;
  undefined **ppuStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined **ppuStack_608;
  undefined8 uStack_600;
  undefined8 *puStack_5f8;
  undefined8 *puStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined **ppuStack_5d8;
  undefined8 *puStack_5d0;
  undefined8 uStack_5b0;
  undefined8 uStack_8;
  
  func_0x000107c32728();
  func_0x0001086d9fec();
  func_0x0001086d9990();
  uVar4 = *(undefined8 *)(extraout_x8 + 0x30);
  func_0x000107c287d8(uVar4);
  puVar5 = (undefined8 *)(unaff_x21 + 0x250);
  FUN_108679cf0();
  uVar10 = *puVar5;
  puStack_5f8 = (undefined8 *)0x0;
  puStack_5f0 = (undefined8 *)0x0;
  uStack_5e8 = 0;
  func_0x000107c27acc(&puStack_5f8,*(undefined8 *)(param_3 + 0x18));
  plVar11 = (long *)(param_3 + 0x10);
LAB_1086ca1ec:
  do {
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) {
      puVar5 = puStack_5f8;
      if (puStack_5f8 != puStack_5f0) {
        FUN_1086d10f8(puStack_5f8,puStack_5f0,
                      LZCOUNT((long)puStack_5f0 - (long)puStack_5f8 >> 3) << 1 ^ 0x7e,1);
        puVar5 = puStack_5f0;
      }
      uStack_610 = 0;
      ppuStack_608 = (undefined **)0x0;
      uStack_600 = 0;
      uStack_628 = 0;
      uStack_620 = 0;
      uStack_618 = 0;
      func_0x000104be6ea0(&uStack_610,(long)puVar5 - (long)puStack_5f8 >> 3);
      puVar5 = &uStack_628;
      func_0x000107c27acc(puVar5,(long)puStack_5f0 - (long)puStack_5f8 >> 3);
      puVar7 = puStack_5f0;
      puVar9 = puStack_5f8;
      while (uVar2 = puVar9 == puVar7, !(bool)uVar2) {
        auStack_650[0] = *puVar9;
        uVar4 = *(undefined8 *)(*(long *)(unaff_x21 + 0xd0) + 0x170);
        lVar8 = param_3;
        FUN_1086d8330(param_3,auStack_650);
        if (lVar8 == 0) {
          func_0x000104c03f28(&UNK_10f639994);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1086ca400);
          (*pcVar1)();
        }
        func_0x000107c29260(&uStack_5e0,uVar4,lVar8 + 0x18);
        func_0x000107c27aa8(&uStack_610,&uStack_5e0);
        func_0x000107c27a10(&uStack_5e0);
        puVar5 = &uStack_628;
        func_0x000107c28944(puVar5,ppuStack_608 + -0xb8);
        puVar9 = puVar9 + 1;
      }
      func_0x0001086d9f1c();
      if (extraout_x8_00 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10 != 0);
      }
      ppuVar12 = ppuStack_608;
      uVar4 = uStack_610;
      ppuStack_638 = ppuStack_608;
      uStack_640 = uStack_610;
      uStack_630 = uStack_600;
      ppuStack_608 = (undefined **)0x0;
      uStack_600 = 0;
      uStack_610 = 0;
      func_0x000107c28150();
      func_0x0001086da310();
      func_0x0001086da1e0();
      lVar8 = *(long *)(unaff_x21 + 0x70);
      uStack_5e0 = 0x1086d83cc;
      ppuStack_5d8 = &PTR_FUN_110a655d8;
      func_0x000107c3268c();
      func_0x0001086d9e2c();
      if (extraout_x9 != 0) {
        do {
          func_0x000107c325ec();
        } while (extraout_w11 != 0);
      }
      func_0x0001086d9b58();
      puStack_5d0 = puVar5;
      uStack_5b0 = param_5;
      func_0x000107c28154(unaff_x21 + 0x48,&uStack_5e0);
      func_0x0001086d9a28(ppuStack_5d8);
      func_0x0001086da01c();
      if (lVar8 == 0) {
        func_0x0001086d9ab0();
        uStack_5e0 = uVar4;
        ppuStack_5d8 = ppuVar12;
        if (extraout_x8_01 != 0) {
          do {
            func_0x000107c325f8();
          } while (extraout_w10_00 != 0);
        }
        func_0x000107c3265c();
        func_0x000107c327f4();
        func_0x0001086db264();
      }
      func_0x0001086ca4a4(auStack_650);
      func_0x000107c27ae4(&uStack_628);
      puVar5 = &uStack_610;
      func_0x000107c27a08();
      func_0x0001086db030();
      func_0x000107c325c0(uStack_8);
      if (!(bool)uVar2) {
        ___stack_chk_fail();
        func_0x0001086db264();
        func_0x0001086ca4a4(auStack_650);
        func_0x000107c27ae4(&uStack_628);
        puVar7 = &uStack_610;
        func_0x000107c27a08();
        func_0x0001086db030();
        func_0x0001086d9ff8();
        func_0x000107c32694();
        if (puVar7 != (undefined8 *)0x0) {
          func_0x000107c278a0();
        }
        return puVar5;
      }
      return puVar5;
    }
    uVar6 = (ulong)(plVar11 + 3);
    func_0x0001088427c4(uVar6,uVar4,uVar10);
  } while ((uVar6 & 1) == 0);
  if ((param_4 >> 0x20 & 1) != 0) goto code_r0x0001086ca20c;
  goto LAB_1086ca21c;
code_r0x0001086ca20c:
  iVar3 = (int)plVar11 + 0x68;
  FUN_108844938();
  if (iVar3 == (int)param_4) {
LAB_1086ca21c:
    func_0x000107c28944(&puStack_5f8,plVar11 + 2);
  }
  goto LAB_1086ca1ec;
}



/* Entry: 1086ca480; end: 1086ca4e3;  */

void FUN_1086ca480(long param_1)

{
  func_0x000107c32694();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 1086ca4e4; end: 1086ca563;  */

void FUN_1086ca4e4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  func_0x0001086da8f4();
  func_0x0001086dba88();
  *param_1 = FUN_1086d8c7c;
  param_1[1] = FUN_1086d8d88;
  FUN_1086ca564(param_1 + 4);
  func_0x0001086db1f8();
  func_0x0001086d9e8c();
  param_1[0xc] = unaff_x20;
  *(undefined1 *)(param_1 + 0xe) = 0;
  func_0x000107c3265c(*unaff_x20);
  func_0x0001086da4f0();
  return;
}



/* Entry: 1086ca564; end: 1086ca5cb;  */

void FUN_1086ca564(undefined8 param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001086da3b0();
  func_0x0001086db398();
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar1 = *(long *)(param_2 + 0x20);
  *(long *)(unaff_x20 + 0x10) = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10 != 0);
  }
  func_0x000107c27994(unaff_x19 + 0x28,param_2 + 0x28);
  return;
}



/* Entry: 1086ca5cc; end: 1086cac0f;  */

void FUN_1086ca5cc(void)

{
  uint uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  uint extraout_w8;
  long *extraout_x8;
  long *plVar6;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  undefined8 extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  uint extraout_w9;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar7;
  long unaff_x20;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong unaff_x24;
  long lVar13;
  undefined1 auStack_8b0 [1072];
  undefined8 uStack_480;
  long lStack_478;
  undefined8 uStack_470;
  undefined1 auStack_468 [8];
  undefined1 uStack_460;
  undefined1 uStack_458;
  undefined1 uStack_454;
  undefined1 auStack_350 [24];
  undefined8 uStack_338;
  undefined1 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined1 uStack_318;
  undefined1 uStack_310;
  undefined1 uStack_308;
  undefined1 uStack_300;
  undefined1 uStack_2f8;
  uint uStack_2f4;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined1 uStack_2d8;
  undefined7 uStack_2d7;
  undefined1 uStack_2d0;
  undefined8 uStack_2cf;
  undefined1 uStack_2c0;
  undefined1 uStack_2b8;
  undefined1 uStack_2b4;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 *puStack_30;
  long lStack_10;
  undefined8 uStack_8;
  
  func_0x000107c32728();
  func_0x0001086dbe38();
  func_0x0001086d99bc();
  plVar4 = (long *)0xc0;
  __Znwm();
  *plVar4 = (long)FUN_1086d8678;
  plVar4[1] = (long)FUN_1086d8c54;
  plVar4[0x16] = unaff_x20;
  plVar12 = plVar4;
  func_0x0001086dad20();
  func_0x0001086d9e8c();
  plVar8 = plVar4 + 0x10;
  *plVar8 = *(long *)(unaff_x20 + 0x10);
  do {
    func_0x0001086d9cec();
  } while (extraout_w10 != 0);
  func_0x0001086da6f0(*plVar8);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(plVar4 + 0x17) = 0;
    lVar9 = plVar4[0x10];
    func_0x0001086d9a44();
    lVar10 = *plVar12;
    if (lVar10 == 0) {
      func_0x000107c3a5c0();
      lVar10 = *plVar12;
    }
    func_0x0001086dbed4();
    plVar6 = extraout_x8;
    do {
      if (*plVar6 == 0) {
        func_0x0001086d9db4();
        plVar6 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar7 = extraout_w11_00;
      }
      else {
        func_0x0001086da704();
        plVar6 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar7 = extraout_w11;
      }
      if ((uVar7 & 1) != 0) {
        lVar13 = *(long *)(lVar9 + 0x90);
        func_0x0001086dab34();
        if ((bool)in_ZR) {
          func_0x0001086d9da4();
          func_0x0001086d9a64();
          func_0x0001086d9b28();
          *(long **)(lVar13 + 8) = plVar12;
          *(long **)(lVar9 + 0x90) = plVar12;
        }
        func_0x0001086dab58();
        *(long *)(extraout_x8_07 + 0x20) = lVar10;
        func_0x0001086d9df4(*(undefined8 *)(lVar9 + 0x90));
        *(undefined8 *)(lVar9 + 0x10) = 0;
        goto LAB_1086ca93c;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x0001086dbebc(*plVar8);
  lVar9 = *plVar8;
  if ((extraout_w9 >> 5 & 1) == 0) {
    FUN_1086cac10(plVar4 + 0xc,lVar9 + 0x98);
    func_0x0001086daa58();
    func_0x0001086db388(plVar4[0xf]);
    lVar9 = extraout_x9;
    if (!(bool)in_ZR) {
      lVar9 = extraout_x8_02;
    }
    func_0x0001086d9cfc(*(undefined8 *)(lVar9 + 0x68));
    func_0x000107c29ee0(plVar8);
    func_0x0001086da2d8();
    iVar3 = (int)*(undefined8 *)(extraout_x8_03 + 0x20);
    FUN_1086b8b7c();
    if (iVar3 != 0) {
      func_0x0001086da2d8();
      func_0x0001086dac80();
      func_0x000107c278b8(plVar4 + 0x13,"");
      func_0x0001086da67c(plVar4 + 4);
      plVar12 = (long *)plVar4[0x16];
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(plVar4 + 0x13);
      uVar11 = *(undefined8 *)(*(long *)(*plVar12 + 0xd0) + 0x20);
      func_0x0001086dbb10();
      auStack_468[0] = 0;
      uStack_460 = 0;
      uStack_458 = 0;
      uStack_454 = 0;
      FUN_10885fef4(uVar11,&uStack_480);
      plVar12 = (long *)plVar4[0x16];
      func_0x000107c27914(&uStack_480);
      in_ZR = *(int *)(lVar9 + 0xf0) == 0;
      uStack_2f4 = 7;
      if (!(bool)in_ZR) {
        uStack_2f4 = 2;
      }
      unaff_x24 = (ulong)uStack_2f4;
      uVar11 = *(undefined8 *)(*(long *)(*plVar12 + 0xd0) + 0x20);
      func_0x0001086dbb10();
      func_0x000107c28dc8(auStack_468,lVar9);
      func_0x0001086dbc34();
      func_0x000107c278b8(auStack_350);
      uStack_338 = *(undefined8 *)(lVar9 + 0xe8);
      uStack_330 = 1;
      uStack_310 = 0;
      uStack_308 = 0;
      uStack_300 = 0;
      uStack_320 = 0;
      uStack_328 = 0;
      uStack_318 = 0;
      uStack_2f8 = 1;
      uStack_2c0 = 0;
      uStack_2b8 = 0;
      uStack_2b4 = 0;
      uStack_2cf = 0;
      uStack_2d0 = 0;
      uStack_2e8 = 0;
      uStack_2f0 = 0;
      uStack_2d8 = 0;
      uStack_2d7 = 0;
      uStack_2e0 = 0;
      FUN_10885ff98(uVar11,&uStack_480);
      func_0x000107c287e4(&uStack_480);
      func_0x000107c31428(plVar4 + 4);
      func_0x000107c31424(plVar4 + 4);
    }
    func_0x0001086da2d8();
    lStack_478 = 0;
    uStack_480 = 0;
    uStack_470 = 0;
    func_0x0001086da610(auStack_8b0,*(undefined8 *)(extraout_x8_04 + 0x210));
    func_0x0001086db868();
    lVar9 = plVar4[0x16];
    func_0x000107c27a04(&uStack_480);
    lStack_478 = *(long *)(lVar9 + 0x20);
    uStack_480 = *(undefined8 *)(lVar9 + 0x18);
    if (*(long *)(lVar9 + 0x20) != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_02 != 0);
    }
    puVar5 = &uStack_470;
    func_0x000107c27b74(puVar5,auStack_8b0);
    func_0x000107c28150();
    func_0x0001086dac8c();
    func_0x0001086da518();
    lVar13 = *(long *)(unaff_x24 + 0x70);
    func_0x0001086dbe84();
    uStack_40 = extraout_x8_05;
    lStack_38 = extraout_x9_00;
    func_0x0001086db078();
    lVar10 = lStack_478;
    uVar11 = uStack_480;
    puVar5[1] = lStack_478;
    *puVar5 = uVar11;
    if (lVar10 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_03 != 0);
    }
    func_0x0001086da99c();
    puStack_30 = puVar5;
    lStack_10 = lVar9;
    func_0x0001086da990();
    func_0x0001086d9c38();
    func_0x0001086da258();
    if (lVar13 == 0) {
      func_0x0001086d9eac();
      uStack_40 = uVar11;
      lStack_38 = lVar10;
      if (extraout_x8_06 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_04 != 0);
      }
      func_0x000107c3265c();
      func_0x0001086da95c();
      func_0x0001086da590();
    }
    FUN_1086cac1c(&uStack_480);
    func_0x000107c27a60(auStack_8b0);
    func_0x0001086dad74();
    FUN_108927338(plVar4 + 0xc);
    func_0x0001086da27c();
    func_0x0001086da114();
    func_0x000107c326a8();
LAB_1086ca93c:
    func_0x000107c325c0(uStack_8);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    lVar9 = extraout_x8_08;
  }
  __ZNSt13exception_ptrC1ERKS_(plVar4 + 4,lVar9 + 0x18);
  __ZSt17rethrow_exceptionSt13exception_ptr(plVar4 + 4);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1086ca970);
  (*pcVar2)();
}



/* Entry: 1086cac10; end: 1086cac1b;  */

undefined8 * FUN_1086cac10(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_110a98508;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    FUN_108900670(0,*(undefined8 *)(param_2 + 0x18));
  }
  param_1[3] = uVar2;
  return param_1;
}



/* Entry: 1086cac1c; end: 1086cac3f;  */

long FUN_1086cac1c(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107c326a4();
  func_0x000107c27a60();
  lVar1 = unaff_x19;
  func_0x00010054ffe4();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1086cac40; end: 1086cac43;  */

void FUN_1086cac40(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)**(undefined8 **)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001006cee64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 **)(param_1 + 0x10) + 2);
  return;
}



/* Entry: 1086cac44; end: 1086cac63;  */

void FUN_1086cac44(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1086cac1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086cac64; end: 1086caca3;  */

void FUN_1086cac64(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1086caca4; end: 1086caccf;  */

void FUN_1086caca4(long param_1)

{
  func_0x0001086d9d1c();
  if (*(char *)(param_1 + 0x5d8) == '\x01') {
    func_0x000107c27a10();
  }
  return;
}



/* Entry: 1086cacd0; end: 1086cacf3;  */

void FUN_1086cacd0(long param_1,long param_2)

{
  func_0x000107c27994();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  return;
}



/* Entry: 1086cacf4; end: 1086cadc3;  */

void FUN_1086cacf4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long unaff_x19;
  long lVar1;
  long lStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x000107c32648();
  func_0x0001086daa90();
  if (param_3 != 0) {
    FUN_1086cadc4();
    lVar1 = *(long *)(unaff_x19 + 8);
    lStack_70 = unaff_x19 + 0x10;
    plStack_68 = &lStack_50;
    plStack_60 = &lStack_48;
    uStack_58 = 0;
    lStack_50 = lVar1;
    for (param_3 = param_3 << 5; lStack_48 = lVar1, param_3 != 0; param_3 = param_3 + -0x20) {
      func_0x0001086da840();
      FUN_1086cacd0();
      lVar1 = lStack_48 + 0x20;
    }
    uStack_58 = 1;
    FUN_108621374(&lStack_70);
    *(long *)(unaff_x19 + 8) = lVar1;
  }
  func_0x0001086d9ee4();
  func_0x0001086cadf8();
  return;
}



/* Entry: 1086cadc4; end: 1086cae6f;  */

void FUN_1086cadc4(long param_1,ulong param_2)

{
  ulong extraout_x8;
  long *unaff_x19;
  
  if (param_2 >> 0x3b == 0) {
    func_0x000107c326a4();
    func_0x000108621338();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    unaff_x19[2] = param_1 + param_2 * 0x20;
    return;
  }
  FUN_108621254();
  func_0x000107c32764();
  if ((extraout_x8 & 1) == 0) {
    func_0x000108620ffc();
  }
  return;
}



/* Entry: 1086cae70; end: 1086cae77;  */

void FUN_1086cae70(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32670(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x5f8;
    func_0x0001086caeac();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1086cae78; end: 1086caed3;  */

void FUN_1086cae78(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32670();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x5f8;
    func_0x0001086caeac();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1086caed4; end: 1086caedf;  */

void FUN_1086caed4(void)

{
  long extraout_x8;
  long extraout_x9;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001086d9d1c();
  func_0x000107c32670();
  func_0x000107c327c8();
  FUN_1086cafb0();
  *(long *)(unaff_x19 + 8) = extraout_x8 + (extraout_x9 / -0x5f8) * 0x5f8;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x000107c325c4();
  return;
}



/* Entry: 1086caee0; end: 1086caf2f;  */

void FUN_1086caee0(void)

{
  long extraout_x8;
  long extraout_x9;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x000107c32670();
  func_0x000107c327c8();
  FUN_1086cafb0();
  *(long *)(unaff_x19 + 8) = extraout_x8 + (extraout_x9 / -0x5f8) * 0x5f8;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x000107c325c4();
  return;
}



/* Entry: 1086caf30; end: 1086caf83;  */

void FUN_1086caf30(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c3274c();
  if (param_2 != 0) {
    func_0x0001086caf64(param_4);
  }
  func_0x000107c32700(0x5f8);
  return;
}



/* Entry: 1086caf84; end: 1086cafaf;  */

void FUN_1086caf84(undefined8 param_1,ulong param_2)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_70 [40];
  long lStack_48;
  
  if (param_2 < 0x2ae3da78a0d674) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x5f8);
    return;
  }
  func_0x000104bd35f4();
  func_0x000107c325fc();
  func_0x000107c325e0();
  func_0x000107c3280c();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x5f8) {
    func_0x000107c32804();
    func_0x0001086cb048();
    lStack_48 = lStack_48 + 0x5f8;
  }
  func_0x000107c3273c();
  func_0x000107c326fc();
  func_0x0001086cb01c();
  FUN_1086cb074(auStack_70);
  return;
}



/* Entry: 1086cafb0; end: 1086cb01b;  */

void FUN_1086cafb0(void)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_60 [40];
  long lStack_38;
  
  func_0x000107c325fc();
  func_0x000107c325e0();
  func_0x000107c3280c();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x5f8) {
    func_0x000107c32804();
    func_0x0001086cb048();
    lStack_38 = lStack_38 + 0x5f8;
  }
  func_0x000107c3273c();
  func_0x000107c326fc();
  func_0x0001086cb01c();
  FUN_1086cb074(auStack_60);
  return;
}



/* Entry: 1086cb01c; end: 1086cb073;  */

void FUN_1086cb01c(long param_1)

{
  long unaff_x19;
  
  func_0x000107c32814();
  for (; param_1 != unaff_x19; param_1 = param_1 + 0x5f8) {
    func_0x0001086caeac();
  }
  return;
}



/* Entry: 1086cb074; end: 1086cb09f;  */

void FUN_1086cb074(void)

{
  uint extraout_w8;
  
  func_0x000107c32760();
  if ((extraout_w8 & 1) == 0) {
    FUN_1086cb0a0();
  }
  return;
}



/* Entry: 1086cb0a0; end: 1086cb0af;  */

void FUN_1086cb0a0(long param_1)

{
  long unaff_x19;
  
  func_0x0001086da870();
  func_0x0001086db4b0();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x5f8;
    func_0x0001086caeac();
  }
  return;
}


