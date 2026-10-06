/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b193ad0; end: 10b193b0f;  */

void FUN_10b193ad0(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010b198df4();
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  func_0x000107c27d2c(param_1 + 4,param_2 + 4);
  func_0x000107c27c5c(unaff_x20 + 0x38,unaff_x19 + 0x38);
  func_0x000107c27c5c(unaff_x20 + 0x58,unaff_x19 + 0x58);
  return;
}



/* Entry: 10b193b10; end: 10b193bc3;  */

void FUN_10b193b10(undefined1 *param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  long lVar2;
  
  func_0x00010b198c88();
  *param_1 = 0;
  param_1[0x78] = 0;
  lVar2 = *(long *)(param_2 + 0x790);
  for (lVar1 = *(long *)(param_2 + 0x788); lVar1 != lVar2; lVar1 = lVar1 + 0xb8) {
    if ((*(byte *)(lVar1 + 0x38) & 1) == 0) {
      if ((*(byte *)(unaff_x19 + 0x78) & 1) != 0) {
        FUN_10b193bf8();
      }
      FUN_10b193bc4();
    }
  }
  lVar1 = *(long *)(unaff_x20 + 0x788);
  do {
    lVar2 = lVar1;
    if (lVar2 == *(long *)(unaff_x20 + 0x790)) break;
    lVar1 = lVar2 + 0xb8;
  } while (((*(byte *)(lVar2 + 0x38) & 1) != 0) || ((*(byte *)(lVar2 + 0x44) & 1) != 0));
  *(bool *)(unaff_x19 + 4) = lVar2 == *(long *)(unaff_x20 + 0x790);
  return;
}



/* Entry: 10b193bc4; end: 10b193bf7;  */

long FUN_10b193bc4(long param_1)

{
  if (*(char *)(param_1 + 0x78) == '\x01') {
    FUN_10b193ad0();
  }
  else {
    FUN_10b196728();
  }
  return param_1;
}



/* Entry: 10b193bf8; end: 10b193c83;  */

undefined8 FUN_10b193bf8(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined1 *puVar1;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 auStack_120 [120];
  undefined1 auStack_a8 [120];
  
  func_0x00010b198df4();
  FUN_10b121fd0(auStack_a8);
  FUN_10b121fd0(auStack_120);
  puVar1 = auStack_a8;
  (*param_3)(puVar1,auStack_120);
  if ((int)puVar1 == 0) {
    unaff_x19 = unaff_x20;
  }
  func_0x00010529fe04(auStack_120);
  func_0x00010529fe04(auStack_a8);
  return unaff_x19;
}



/* Entry: 10b193c84; end: 10b193ca7;  */

bool FUN_10b193c84(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_2 + 8);
  bVar3 = SBORROW4(iVar1,iVar2);
  bVar4 = iVar1 - iVar2 < 0;
  if (iVar1 == iVar2) {
    bVar3 = SBORROW8(*(long *)(param_1 + 0x10),*(long *)(param_2 + 0x10));
    bVar4 = *(long *)(param_1 + 0x10) - *(long *)(param_2 + 0x10) < 0;
  }
  return bVar4 != bVar3;
}



/* Entry: 10b193ca8; end: 10b193d77;  */

bool FUN_10b193ca8(long param_1,long param_2)

{
  int extraout_w10;
  long lStack_30;
  long lStack_28;
  
  lStack_30 = param_1;
  lStack_28 = param_2;
  if (param_2 != 0) {
    do {
      func_0x00010b198bb4();
    } while (extraout_w10 != 0);
  }
  func_0x000107c27d78(&lStack_30);
  return param_1 == 0;
}



/* Entry: 10b193d78; end: 10b193da7;  */

void FUN_10b193d78(long param_1,undefined8 param_2,long *param_3,long *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long alStack_1d8 [2];
  long *plStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  char cStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_118;
  long lStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  char cStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined1 uStack_90;
  undefined1 auStack_80 [40];
  undefined1 auStack_58 [48];
  undefined8 uStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    uStack_18 = 0x10b193d90;
    puStack_20 = &stack0xfffffffffffffff0;
    func_0x000104bdc2c8();
    func_0x00010b199450();
    func_0x00010b198bf0();
    uStack_28 = extraout_x8;
    func_0x00010b197634(alStack_1d8);
    plVar5 = (long *)*param_3;
    lStack_1c0 = param_3[1];
    plStack_1c8 = plVar5;
    if (lStack_1c0 != 0) {
      do {
        func_0x00010b198bb4();
      } while (extraout_w10 != 0);
    }
    lVar8 = alStack_1d8[0];
    lStack_1b0 = param_4[1];
    lStack_1b8 = *param_4;
    *param_4 = 0;
    param_4[1] = 0;
    func_0x00010b198edc();
    (*extraout_x8_00)();
    plVar6 = plStack_1c8;
    (**(code **)(*plStack_1c8 + 0x28))();
    plVar10 = plStack_1c8;
    (**(code **)(*plStack_1c8 + 0x38))(&uStack_170);
    lStack_128 = lStack_1b0;
    lStack_130 = lStack_1b8;
    if (lStack_1b0 != 0) {
      do {
        func_0x00010b198bb4();
      } while (extraout_w10_00 != 0);
    }
    if (((int)plVar5 == 0xca) && (FUN_10b1969c0(), (int)plVar10 != 0)) {
      func_0x000107c278b8(&uStack_e8,&UNK_10e562912);
      FUN_10b1634c4(&uStack_108,&UNK_10f730fd0);
      uStack_c0 = uStack_d8;
      uStack_c8 = uStack_e0;
      uStack_d0 = uStack_e8;
      uStack_e0 = 0;
      uStack_d8 = 0;
      uStack_e8 = 0;
      uStack_b8 = 1;
      uStack_b0 = uStack_b0 & 0xffffffffffffff00;
      uVar3 = cStack_f0 == '\x01';
      if ((bool)uVar3) {
        uStack_a8 = uStack_100;
        uStack_b0 = uStack_108;
        uStack_a0 = uStack_f8;
        uStack_100 = 0;
        uStack_f8 = 0;
        uStack_108 = 0;
      }
      uStack_98 = uVar3;
      FUN_10b194544(lVar8,0xca,&uStack_d0);
      func_0x0001052a03ac(&uStack_d0);
      func_0x000107c279a4(&uStack_108);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_e8);
    }
    else {
      func_0x000107c316c4();
      *(long **)(lVar8 + 0x60) = plVar10;
      *(int *)(lVar8 + 0x70) = (int)plVar5;
      lVar9 = lStack_130;
      if (lStack_130 != 0) {
        func_0x00010b1991c4();
        (*extraout_x8_01)();
        plVar10 = *(long **)(lVar8 + 0x60);
      }
      *(long *)(lVar8 + 0x68) = lVar9;
      lVar12 = *(long *)(lVar8 + 0x58);
      uVar11 = **(undefined8 **)(lVar8 + 0x6b0);
      uVar1 = *(undefined4 *)(lVar8 + 0x358);
      uVar2 = *(undefined4 *)(lVar8 + 0x390);
      func_0x00010b1990e4();
      uVar7 = 0;
      if (*(char *)(lVar8 + 0x750) == '\0') {
        uVar7 = 2;
      }
      FUN_10b20b4e4(uVar11,uVar1,uVar2,*(undefined1 *)(lVar9 + 0x78),plVar5,(long)plVar10 - lVar12,
                    *(undefined8 *)(lVar8 + 0x68),uVar7,*(undefined8 *)(lVar8 + 0x7a0));
      lVar9 = *(long *)(lVar8 + 0x68);
      if (lVar9 == 0) {
        func_0x00010b1991e8();
        func_0x00010b198d5c(&uStack_d0);
        FUN_10b12983c(&uStack_a8,*(undefined4 *)(lVar8 + 0x358));
        func_0x00010b12aca4(auStack_80,*(undefined4 *)(lVar8 + 0x390));
        func_0x00010b19913c(auStack_58);
        func_0x00010b120648(&uStack_108,&uStack_d0,4);
        func_0x00010b198d68(plVar10,0x7f,&uStack_108);
        func_0x00010b198ddc();
        plVar10 = (long *)0x88;
        do {
          func_0x00010b1992d0();
          plVar10 = plVar10 + -5;
        } while (plVar10 != (long *)0xffffffffffffffe8);
      }
      if (*(char *)(lVar8 + 0x778) == '\x01') {
        func_0x00010b1991e8();
        func_0x00010b198d5c(&uStack_d0);
        FUN_10b12983c(&uStack_a8,*(undefined4 *)(lVar8 + 0x358));
        func_0x00010b12aca4(auStack_80,*(undefined4 *)(lVar8 + 0x390));
        func_0x00010b199064();
        FUN_10b11ef50(plVar10,0x4f,&uStack_108,lVar9);
        func_0x00010b198ddc();
        lVar12 = 0x60;
        do {
          func_0x00010b1992d0();
          lVar12 = lVar12 + -0x28;
        } while (lVar12 != -0x18);
        func_0x00010b1991e8();
        if (lVar9 < 1) {
          if (plVar6 == (long *)0x0) {
            func_0x00010b198fe8();
            func_0x00010b198cf8();
          }
          else {
            func_0x00010b198fe8();
            func_0x00010b198cf8();
          }
        }
        else if (plVar6 == (long *)0x0) {
          func_0x00010b198fe8();
          func_0x00010b198cf8();
        }
        else {
          func_0x00010b198fe8();
          func_0x00010b198cf8();
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_d0);
      }
      if (*(char *)(lVar8 + 0x7d8) == '\x01') {
        iVar4 = 0x10cc22d0;
        func_0x000107c2be10();
        if (iVar4 != 0) {
          func_0x00010b1991a4();
          FUN_10b12983c(&uStack_d0);
          func_0x00010b19909c(&uStack_108,&uStack_d0);
          func_0x00010b198d68(lVar9,0xbe,&uStack_108);
          func_0x00010b198ddc();
          func_0x00010b198ed4(&uStack_d0);
        }
      }
      func_0x00010b1991a4();
      FUN_10b12983c(&uStack_d0);
      func_0x00010b123d80(&uStack_a8,&DAT_10f2f1c38,9,*(undefined1 *)(lVar8 + 0x778));
      func_0x00010b123d80(auStack_80,&UNK_10f73105e,6,*(undefined1 *)(lVar8 + 0x378));
      func_0x00010b199064();
      FUN_10b11ef50(lVar9,0xc5,&uStack_108,plVar6);
      func_0x00010b198ddc();
      lVar9 = 0x60;
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                  ((long)&uStack_d0 + lVar9);
        lVar9 = lVar9 + -0x28;
      } while (lVar9 != -0x18);
      uStack_d0 = uStack_d0 & 0xffffffffffffff00;
      uStack_90 = 0;
      lStack_118 = lStack_130;
      lStack_110 = lStack_128;
      uVar3 = 1;
      if (lStack_128 != 0) {
        do {
          func_0x00010b198bb4();
        } while (extraout_w10_01 != 0);
      }
      FUN_10b191588(&uStack_108,lVar8);
      func_0x000107c27d78(&lStack_118);
      func_0x000107c281f4(&uStack_e8,&uStack_108);
      FUN_10b192534(lVar8,&uStack_e8,&uStack_d0);
      func_0x000107c27f18(&uStack_e8);
      func_0x00010b19939c();
      func_0x000107c27f18(&uStack_108);
      func_0x0001052a038c(&uStack_d0);
    }
    func_0x000107c27d78(&lStack_130);
    func_0x000107c279a4(&uStack_170);
    while( true ) {
      FUN_10b194518(alStack_1d8);
      func_0x00010b198ba0(uStack_28);
      if ((bool)uVar3) break;
      ___stack_chk_fail();
      func_0x00010b198c88();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_d0);
      while( true ) {
        func_0x000107c27d78(&lStack_130);
        func_0x000107c279a4(&uStack_170);
        if ((int)plVar6 == 1) break;
        FUN_10b194518(alStack_1d8);
        func_0x00010b198c78();
        func_0x00010b198c88();
        func_0x000107c27f18(&uStack_108);
        func_0x0001052a038c(&uStack_d0);
      }
      ___cxa_begin_catch(lVar8);
      lVar8 = alStack_1d8[0];
      func_0x000107c278b8(&uStack_188,&UNK_10e5628f7);
      func_0x0001077b6764(&uStack_1a8,&UNK_10f7310db);
      uStack_160 = uStack_178;
      uStack_168 = uStack_180;
      uStack_170 = uStack_188;
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_188 = 0;
      uStack_158 = 4;
      uStack_150 = uStack_150 & 0xffffffffffffff00;
      uVar3 = cStack_190 == '\x01';
      if ((bool)uVar3) {
        uStack_148 = uStack_1a0;
        uStack_150 = uStack_1a8;
        uStack_140 = uStack_198;
        uStack_1a0 = 0;
        uStack_198 = 0;
        uStack_1a8 = 0;
      }
      uStack_138 = uVar3;
      FUN_10b194544(lVar8,0,&uStack_170);
      func_0x0001052a03ac(&uStack_170);
      func_0x000107c279a4(&uStack_1a8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_188);
      ___cxa_end_catch();
    }
    return;
  }
  return;
}



/* Entry: 10b193da8; end: 10b194517;  */

void FUN_10b193da8(undefined8 param_1,undefined8 param_2,long *param_3,long *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long alStack_1b8 [2];
  long *plStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  ulong uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  char cStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  char cStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_60 [40];
  undefined1 auStack_38 [48];
  undefined8 uStack_8;
  
  func_0x00010b199450();
  func_0x00010b198bf0();
  uStack_8 = extraout_x8;
  func_0x00010b197634(alStack_1b8);
  plVar5 = (long *)*param_3;
  lStack_1a0 = param_3[1];
  plStack_1a8 = plVar5;
  if (lStack_1a0 != 0) {
    do {
      func_0x00010b198bb4();
    } while (extraout_w10 != 0);
  }
  lVar8 = alStack_1b8[0];
  lStack_190 = param_4[1];
  lStack_198 = *param_4;
  *param_4 = 0;
  param_4[1] = 0;
  func_0x00010b198edc();
  (*extraout_x8_00)();
  plVar6 = plStack_1a8;
  (**(code **)(*plStack_1a8 + 0x28))();
  plVar10 = plStack_1a8;
  (**(code **)(*plStack_1a8 + 0x38))(&uStack_150);
  lStack_108 = lStack_190;
  lStack_110 = lStack_198;
  if (lStack_190 != 0) {
    do {
      func_0x00010b198bb4();
    } while (extraout_w10_00 != 0);
  }
  if (((int)plVar5 == 0xca) && (FUN_10b1969c0(), (int)plVar10 != 0)) {
    func_0x000107c278b8(&uStack_c8,&UNK_10e562912);
    FUN_10b1634c4(&uStack_e8,&UNK_10f730fd0);
    uStack_a0 = uStack_b8;
    uStack_a8 = uStack_c0;
    uStack_b0 = uStack_c8;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_c8 = 0;
    uStack_98 = 1;
    uStack_90 = uStack_90 & 0xffffffffffffff00;
    uVar3 = cStack_d0 == '\x01';
    if ((bool)uVar3) {
      uStack_88 = uStack_e0;
      uStack_90 = uStack_e8;
      uStack_80 = uStack_d8;
      uStack_e0 = 0;
      uStack_d8 = 0;
      uStack_e8 = 0;
    }
    uStack_78 = uVar3;
    FUN_10b194544(lVar8,0xca,&uStack_b0);
    func_0x0001052a03ac(&uStack_b0);
    func_0x000107c279a4(&uStack_e8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_c8);
  }
  else {
    func_0x000107c316c4();
    *(long **)(lVar8 + 0x60) = plVar10;
    *(int *)(lVar8 + 0x70) = (int)plVar5;
    lVar9 = lStack_110;
    if (lStack_110 != 0) {
      func_0x00010b1991c4();
      (*extraout_x8_01)();
      plVar10 = *(long **)(lVar8 + 0x60);
    }
    *(long *)(lVar8 + 0x68) = lVar9;
    lVar12 = *(long *)(lVar8 + 0x58);
    uVar11 = **(undefined8 **)(lVar8 + 0x6b0);
    uVar1 = *(undefined4 *)(lVar8 + 0x358);
    uVar2 = *(undefined4 *)(lVar8 + 0x390);
    func_0x00010b1990e4();
    uVar7 = 0;
    if (*(char *)(lVar8 + 0x750) == '\0') {
      uVar7 = 2;
    }
    FUN_10b20b4e4(uVar11,uVar1,uVar2,*(undefined1 *)(lVar9 + 0x78),plVar5,(long)plVar10 - lVar12,
                  *(undefined8 *)(lVar8 + 0x68),uVar7,*(undefined8 *)(lVar8 + 0x7a0));
    lVar9 = *(long *)(lVar8 + 0x68);
    if (lVar9 == 0) {
      func_0x00010b1991e8();
      func_0x00010b198d5c(&uStack_b0);
      FUN_10b12983c(&uStack_88,*(undefined4 *)(lVar8 + 0x358));
      func_0x00010b12aca4(auStack_60,*(undefined4 *)(lVar8 + 0x390));
      func_0x00010b19913c(auStack_38);
      func_0x00010b120648(&uStack_e8,&uStack_b0,4);
      func_0x00010b198d68(plVar10,0x7f,&uStack_e8);
      func_0x00010b198ddc();
      plVar10 = (long *)0x88;
      do {
        func_0x00010b1992d0();
        plVar10 = plVar10 + -5;
      } while (plVar10 != (long *)0xffffffffffffffe8);
    }
    if (*(char *)(lVar8 + 0x778) == '\x01') {
      func_0x00010b1991e8();
      func_0x00010b198d5c(&uStack_b0);
      FUN_10b12983c(&uStack_88,*(undefined4 *)(lVar8 + 0x358));
      func_0x00010b12aca4(auStack_60,*(undefined4 *)(lVar8 + 0x390));
      func_0x00010b199064();
      FUN_10b11ef50(plVar10,0x4f,&uStack_e8,lVar9);
      func_0x00010b198ddc();
      lVar12 = 0x60;
      do {
        func_0x00010b1992d0();
        lVar12 = lVar12 + -0x28;
      } while (lVar12 != -0x18);
      func_0x00010b1991e8();
      if (lVar9 < 1) {
        if (plVar6 == (long *)0x0) {
          func_0x00010b198fe8();
          func_0x00010b198cf8();
        }
        else {
          func_0x00010b198fe8();
          func_0x00010b198cf8();
        }
      }
      else if (plVar6 == (long *)0x0) {
        func_0x00010b198fe8();
        func_0x00010b198cf8();
      }
      else {
        func_0x00010b198fe8();
        func_0x00010b198cf8();
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_b0);
    }
    if (*(char *)(lVar8 + 0x7d8) == '\x01') {
      iVar4 = 0x10cc22d0;
      func_0x000107c2be10();
      if (iVar4 != 0) {
        func_0x00010b1991a4();
        FUN_10b12983c(&uStack_b0);
        func_0x00010b19909c(&uStack_e8,&uStack_b0);
        func_0x00010b198d68(lVar9,0xbe,&uStack_e8);
        func_0x00010b198ddc();
        func_0x00010b198ed4(&uStack_b0);
      }
    }
    func_0x00010b1991a4();
    FUN_10b12983c(&uStack_b0);
    func_0x00010b123d80(&uStack_88,&DAT_10f2f1c38,9,*(undefined1 *)(lVar8 + 0x778));
    func_0x00010b123d80(auStack_60,&UNK_10f73105e,6,*(undefined1 *)(lVar8 + 0x378));
    func_0x00010b199064();
    FUN_10b11ef50(lVar9,0xc5,&uStack_e8,plVar6);
    func_0x00010b198ddc();
    lVar9 = 0x60;
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev((long)&uStack_b0 + lVar9)
      ;
      lVar9 = lVar9 + -0x28;
    } while (lVar9 != -0x18);
    uStack_b0 = uStack_b0 & 0xffffffffffffff00;
    uStack_70 = 0;
    lStack_f8 = lStack_110;
    lStack_f0 = lStack_108;
    uVar3 = 1;
    if (lStack_108 != 0) {
      do {
        func_0x00010b198bb4();
      } while (extraout_w10_01 != 0);
    }
    FUN_10b191588(&uStack_e8,lVar8);
    func_0x000107c27d78(&lStack_f8);
    func_0x000107c281f4(&uStack_c8,&uStack_e8);
    FUN_10b192534(lVar8,&uStack_c8,&uStack_b0);
    func_0x000107c27f18(&uStack_c8);
    func_0x00010b19939c();
    func_0x000107c27f18(&uStack_e8);
    func_0x0001052a038c(&uStack_b0);
  }
  func_0x000107c27d78(&lStack_110);
  func_0x000107c279a4(&uStack_150);
  while( true ) {
    FUN_10b194518(alStack_1b8);
    func_0x00010b198ba0(uStack_8);
    if ((bool)uVar3) break;
    ___stack_chk_fail();
    func_0x00010b198c88();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_b0);
    while( true ) {
      func_0x000107c27d78(&lStack_110);
      func_0x000107c279a4(&uStack_150);
      if ((int)plVar6 == 1) break;
      FUN_10b194518(alStack_1b8);
      func_0x00010b198c78();
      func_0x00010b198c88();
      func_0x000107c27f18(&uStack_e8);
      func_0x0001052a038c(&uStack_b0);
    }
    ___cxa_begin_catch(lVar8);
    lVar8 = alStack_1b8[0];
    func_0x000107c278b8(&uStack_168,&UNK_10e5628f7);
    func_0x0001077b6764(&uStack_188,&UNK_10f7310db);
    uStack_140 = uStack_158;
    uStack_148 = uStack_160;
    uStack_150 = uStack_168;
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_168 = 0;
    uStack_138 = 4;
    uStack_130 = uStack_130 & 0xffffffffffffff00;
    uVar3 = cStack_170 == '\x01';
    if ((bool)uVar3) {
      uStack_128 = uStack_180;
      uStack_130 = uStack_188;
      uStack_120 = uStack_178;
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_188 = 0;
    }
    uStack_118 = uVar3;
    FUN_10b194544(lVar8,0,&uStack_150);
    func_0x0001052a03ac(&uStack_150);
    func_0x000107c279a4(&uStack_188);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_168);
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 10b194518; end: 10b194543;  */

undefined8 FUN_10b194518(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c27d78(param_1 + 0x20);
  func_0x0001052bc108(param_1 + 0x10);
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b194544; end: 10b194edf;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b194544(long param_1,undefined8 param_2,undefined **param_3)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined1 uVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  int extraout_w8;
  int extraout_w8_00;
  undefined4 uVar10;
  undefined8 extraout_x8;
  long lVar11;
  ulong extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int iVar12;
  long lVar13;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  long alStack_480 [4];
  undefined4 uStack_460;
  undefined8 uStack_450;
  long lStack_448;
  undefined8 uStack_440;
  long lStack_438;
  undefined8 uStack_430;
  undefined8 uStack_420;
  long lStack_418;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined1 auStack_370 [16];
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long alStack_2f0 [3];
  undefined1 auStack_2d8 [40];
  undefined1 auStack_2b0 [40];
  char *pcStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  byte bStack_260;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  char *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_8;
  
  func_0x00010b199450();
  lVar6 = param_1;
  func_0x00010b198bf0();
  uStack_8 = extraout_x8;
  func_0x00010b198e30();
  lVar11 = *(long *)(param_1 + 0x788);
  do {
    uVar5 = true;
    if (lVar11 == *(long *)(param_1 + 0x790)) goto LAB_10b1945bc;
    pbVar1 = (byte *)(lVar11 + 0x38);
    lVar11 = lVar11 + 0xb8;
  } while ((*pbVar1 & 1) != 0);
  uVar5 = *(char *)(param_1 + 0x828) == '\x01';
  if ((bool)uVar5) {
    lVar6 = *(long *)(param_1 + 0x808);
    uVar5 = lVar6 == *(long *)(param_1 + 0x810);
    if (((bool)uVar5) || (*(int *)(param_1 + 0x850) != 0)) goto LAB_10b1945bc;
    FUN_10b4b3424(&uStack_348,lVar6,*(undefined4 *)(param_1 + 0x820),param_1 + 0x830);
    *(int *)(param_1 + 0x850) = *(int *)(param_1 + 0x850) + 1;
    func_0x000107c316c4();
    *(long *)(param_1 + 0x58) = lVar6;
    (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x6c0) + 0x58))(&uStack_420);
    alStack_480[1] = 0;
    alStack_480[0] = 0;
    alStack_480[3] = 0;
    alStack_480[2] = 0;
    uStack_460 = 0x3f800000;
    FUN_10b194f30(&uStack_60,&uStack_420,alStack_480);
    (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x6c0) + 0x70))(auStack_2d8);
    FUN_10b194f00(&uStack_440,&uStack_348,&uStack_60,auStack_2d8,*(undefined8 *)(param_1 + 0x6c0));
    func_0x0001052bb09c(auStack_2d8);
    func_0x000107c278e0(&uStack_60);
    func_0x000107c278e0(alStack_480);
    func_0x000107c27bb0(&uStack_420);
    lStack_418 = lStack_438;
    uStack_420 = uStack_440;
    if (lStack_438 != 0) {
      do {
        func_0x00010b198bb4();
      } while (extraout_w10_02 != 0);
    }
    FUN_10b193b10(auStack_2d8,param_1);
    if ((bStack_260 & 1) == 0) goto LAB_10b194c68;
    FUN_10b19365c(param_1,&uStack_420,auStack_2d8);
    FUN_10b0faf98(auStack_2d8);
    func_0x0001052ac684(&uStack_420);
    FUN_10b198334(&uStack_440);
    func_0x00010b199250();
LAB_10b19492c:
    func_0x00010b198cc8();
  }
  else {
LAB_10b1945bc:
    func_0x00010b198cc8();
    func_0x000107c316c4();
    *(long *)(param_1 + 0x60) = lVar6;
    lVar11 = *(long *)(param_1 + 0x58);
    iVar12 = (int)param_2;
    *(int *)(param_1 + 0x70) = iVar12;
    ppuVar7 = (undefined **)(param_1 + 0x2d0);
    func_0x0001056419c0(ppuVar7,param_3);
    func_0x00010b198c18(param_1 + 0x7a8);
    uVar5 = (bool)uVar5 && extraout_x9 == 3;
    if ((bool)uVar5) {
      lVar11 = *(long *)(param_1 + 0x60);
      lVar6 = *(long *)(param_1 + 0x7c8);
      func_0x00010b1991d0();
      iVar12 = extraout_w8;
      if ((bool)uVar5) {
        iVar12 = extraout_w8 + 1;
      }
      func_0x00010b199248();
      func_0x00010b198e40(auStack_2b0,3);
      func_0x00010b199408(auStack_2d8);
      func_0x00010b198cdc();
      func_0x00010b198d68(param_2,iVar12,&uStack_420);
      func_0x00010b198e54();
      do {
        func_0x00010b199258();
        func_0x00010b199468();
      } while (!(bool)uVar5);
      func_0x00010b1991d0();
      iVar12 = extraout_w8_00;
      if ((bool)uVar5) {
        iVar12 = extraout_w8_00 + 1;
      }
      func_0x00010b199248();
      func_0x00010b198e40(auStack_2b0,3);
      func_0x00010b199408(auStack_2d8);
      func_0x00010b198cdc();
      FUN_10b1135dc(0x60,iVar12,&uStack_420,(lVar11 - lVar6) * 1000000);
      func_0x00010b198e54();
      do {
        func_0x00010b199258();
        func_0x00010b199468();
      } while (!(bool)uVar5);
      FUN_10b193570(param_1,1,0);
      func_0x00010b199318();
      *(undefined8 *)(param_1 + 0x7a8) = 0x100000001;
      func_0x00010b19939c();
      goto LAB_10b19492c;
    }
    func_0x00010b199318();
    if (*(char *)(param_1 + 0x7d4) == '\x01') {
      FUN_10b2029a0();
      FUN_10b20345c();
      param_3 = &PTR_PTR_113386a18;
      if ((undefined **)ppuVar7[3] != (undefined **)0x0) {
        param_3 = (undefined **)ppuVar7[3];
      }
      ppuVar7 = (undefined **)param_3[6];
      uStack_60 = CONCAT44(uStack_60._4_4_,iVar12);
      func_0x00010564d10c(ppuVar7,(long)ppuVar7 + (long)*(int *)(param_3 + 5) * 4,&uStack_60,
                          alStack_480);
      uVar5 = (undefined **)(param_3[6] + (long)*(int *)(param_3 + 5) * 4) == ppuVar7;
      if ((bool)uVar5) goto LAB_10b194934;
      *(undefined1 *)(param_1 + 0x7d8) = 1;
      func_0x00010b198c94();
      if ((extraout_x9_00 == 0) && (uVar5 = (extraout_x8_00 & 0xffffffff) == 2, (bool)uVar5)) {
        *(undefined8 *)(param_1 + 0x7a8) = 0;
      }
      func_0x00010b198cc8();
      func_0x00010b197634(&uStack_60,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
      lStack_328 = lStack_58;
      uStack_330 = uStack_60;
      if (lStack_58 != 0) {
        do {
          func_0x00010b198bb4();
        } while (extraout_w10 != 0);
      }
      FUN_10b129c1c(&uStack_60);
      func_0x00010b1991a4();
      FUN_10b12983c();
      __ZNSt3__19to_stringEx(&uStack_348,(long)iVar12);
      pcStack_38 = "code";
      uStack_30 = 4;
      uStack_20 = uStack_340;
      uStack_28 = uStack_348;
      uStack_18 = uStack_338;
      uStack_348 = 0;
      uStack_340 = 0;
      uStack_338 = 0;
      func_0x00010b1993d8(alStack_480,&uStack_60);
      func_0x00010b198d68(lVar6,0xbd,alStack_480);
      func_0x00010b198fe0();
      do {
        func_0x00010b199258();
        func_0x00010b199468();
      } while (!(bool)uVar5);
      func_0x00010b199250();
      uStack_378 = *(undefined8 *)(param_1 + 0x6b8);
      uStack_380 = *(undefined8 *)(param_1 + 0x6b0);
      if (*(long *)(param_1 + 0x6b8) != 0) {
        do {
          func_0x00010b198bb4();
        } while (extraout_w10_00 != 0);
      }
      puVar8 = auStack_2d8;
      FUN_10b12394c(puVar8,param_1 + 0x340);
      func_0x00010b1990e4();
      FUN_10b121300(&uStack_420,puVar8);
      lStack_438 = *(long *)(param_1 + 0x6c8);
      uStack_440 = *(undefined8 *)(param_1 + 0x6c0);
      uStack_430 = *(undefined8 *)(param_1 + 0x6d0);
      *(undefined8 *)(param_1 + 0x6d0) = 0;
      *(undefined8 *)(param_1 + 0x6c8) = 0;
      *(undefined8 *)(param_1 + 0x6c0) = 0;
      FUN_10b1b3f8c(auStack_370,&uStack_380,auStack_2d8,&uStack_420,*(undefined4 *)(param_1 + 2000),
                    &uStack_440);
      lStack_448 = lStack_328;
      uStack_450 = uStack_330;
      uStack_330 = 0;
      lStack_328 = 0;
      alStack_480[0] = 0;
      alStack_480[1] = 0;
      alStack_2f0[1] = 0;
      alStack_2f0[2] = 0;
      FUN_10b195e24(&uStack_60,auStack_370,alStack_2f0 + 1);
      FUN_10b195e74(alStack_480,&uStack_60);
      func_0x00010b1960f8(&uStack_60);
      func_0x00010b1960f8(alStack_2f0 + 1);
      func_0x000107c27b48(alStack_2f0);
      func_0x000107c27b4c(&uStack_300,alStack_2f0[0]);
      lStack_50 = alStack_2f0[0];
      lStack_58 = lStack_448;
      uStack_60 = uStack_450;
      uStack_450 = 0;
      lStack_448 = 0;
      alStack_2f0[0] = 0;
      lStack_310 = 0;
      lStack_308 = 0;
      lStack_320 = alStack_480[0] + 0x6b0;
      lStack_318 = CONCAT71(lStack_318._1_7_,1);
      __ZNSt3__15mutex4lockEv();
      lVar11 = alStack_480[0];
      func_0x00010b195eac();
      if ((int)lVar11 == 0) {
        puVar9 = (undefined8 *)0x20;
        __Znwm();
        lVar11 = lStack_50;
        *puVar9 = &PTR_SUB_110cc22f8;
        puVar9[2] = lStack_58;
        puVar9[1] = uStack_60;
        uStack_60 = 0;
        lStack_58 = 0;
        lStack_50 = 0;
        puVar9[3] = lVar11;
        lVar11 = *(long *)(alStack_480[0] + 0x6f8);
        *(undefined8 **)(alStack_480[0] + 0x6f8) = puVar9;
        if (lVar11 != 0) {
          func_0x00010b199038();
        }
      }
      else {
        FUN_10b195e74(&lStack_310,alStack_480);
      }
      func_0x000107c2798c(&lStack_320);
      if (lStack_310 != 0) {
        lStack_320 = lStack_310;
        lStack_318 = lStack_308;
        if (lStack_308 != 0) {
          do {
            func_0x00010b198bb4();
          } while (extraout_w10_01 != 0);
        }
        FUN_10b196a68(&uStack_60);
        func_0x00010b1960f8(&lStack_320);
      }
      uStack_358 = uStack_2f8;
      uStack_360 = uStack_300;
      uStack_300 = 0;
      uStack_2f8 = 0;
      func_0x00010b1960f8(&lStack_310);
      FUN_10b196c04(&uStack_60);
      func_0x000107c27b58(&uStack_300);
      lVar11 = alStack_2f0[0];
      alStack_2f0[0] = 0;
      if (lVar11 != 0) {
        func_0x00010b198d04();
      }
      func_0x00010b198e8c();
      func_0x000107c27b58(&uStack_360);
      FUN_10b12ac80(&uStack_450);
      func_0x00010b1960f8(auStack_370);
      FUN_10b125534(&uStack_440);
      FUN_10b24f5cc(&uStack_420);
      func_0x00010b121af0(auStack_2d8);
      func_0x00010b1257d4(&uStack_380);
      FUN_10b12ac80(&uStack_330);
    }
    else {
LAB_10b194934:
      func_0x00010b198cc8();
      if ((iVar12 - 400U < 100) &&
         (0x10 < (ulong)(*(long *)(param_1 + 0x6c8) - *(long *)(param_1 + 0x6c0)))) {
        func_0x00010b1991e8();
        func_0x00010b199248();
        func_0x00010b19913c(auStack_2b0);
        __ZNSt3__19to_stringEi(&uStack_498,param_2);
        pcStack_288 = "code";
        uStack_280 = 4;
        uStack_270 = uStack_490;
        uStack_278 = uStack_498;
        uStack_268 = uStack_488;
        uStack_498 = 0;
        uStack_490 = 0;
        uStack_488 = 0;
        func_0x00010b198cdc();
        func_0x00010b198d68(param_3,0x3f,&uStack_420);
        func_0x00010b198e54();
        lVar13 = 0x60;
        ppuVar7 = param_3;
        do {
          func_0x00010b1992d0();
          lVar13 = lVar13 + -0x28;
        } while (lVar13 != -0x18);
        func_0x00010b198e7c();
        param_3 = (undefined **)0xffffffffffffffe8;
      }
      func_0x00010b1991e8();
      uVar2 = *(undefined4 *)(param_1 + 0x358);
      uVar3 = *(undefined4 *)(param_1 + 0x390);
      func_0x00010b1990e4();
      uVar10 = 0;
      if (*(char *)(param_1 + 0x750) == '\0') {
        uVar10 = 2;
      }
      FUN_10b20bb2c(param_3,uVar2,uVar3,*(undefined1 *)(ppuVar7 + 0xf),param_2,lVar6 - lVar11,uVar10
                    ,*(undefined8 *)(param_1 + 0x7a0));
      iVar12 = *(int *)(param_1 + 0x358);
      func_0x00010b205500(iVar12,param_2);
      uVar5 = iVar12 == 0;
      uVar10 = 3;
      if (!(bool)uVar5) {
        uVar10 = 4;
      }
      func_0x00010b198f78(param_1,uVar10);
      func_0x00010b19939c();
    }
  }
  func_0x00010b198ba0(uStack_8);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
LAB_10b194c68:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10b194c70);
  (*pcVar4)();
}



/* Entry: 10b194ee0; end: 10b194eff;  */

long FUN_10b194ee0(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b198eac();
  func_0x0001052bc108();
  lVar1 = unaff_x19;
  func_0x000107c350ac();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b194f00; end: 10b194f2f;  */

void FUN_10b194f00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uStack_11;
  
  FUN_10b198164(&uStack_11,param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 10b194f30; end: 10b194f43;  */

void FUN_10b194f30(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  if ((char)param_2[5] == '\0') {
    param_2 = param_3;
  }
  lVar2 = *param_2;
  *param_2 = 0;
  *param_1 = lVar2;
  lVar4 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long **)(lVar2 + uVar5 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 10b194f44; end: 10b194fb3;  */

void FUN_10b194f44(long *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  
  func_0x00010b198e30();
  lVar1 = *(long *)(param_2 + 0x758);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x00010b198bb4();
    } while (extraout_w10 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(param_2 + 0x18);
  return;
}



/* Entry: 10b194fb4; end: 10b19510b;  */

void FUN_10b194fb4(long param_1)

{
  undefined1 in_ZR;
  bool bVar1;
  ulong uVar2;
  long lVar3;
  int extraout_w10;
  long unaff_x20;
  long *plVar4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [64];
  undefined1 uStack_28;
  
  uVar2 = param_1 + 0x7e0;
  FUN_10b196cac();
  func_0x00010b198cb0(param_1 + 0x7a8);
  if ((bool)in_ZR) {
    auStack_68[0] = 0;
    uStack_28 = 0;
    FUN_10b195198(param_1,auStack_68);
    func_0x0001052a038c(auStack_68);
  }
  else {
    func_0x00010b19937c(*(undefined8 *)(param_1 + 0x6b0));
    bVar1 = *(long *)(param_1 + 0x7e8) - *(long *)(param_1 + 0x7e0) == 0x10;
    if ((uVar2 & 1) == 0) {
      if (bVar1) {
        uStack_88 = *(undefined8 *)(param_1 + 0x10);
        uStack_90 = *(undefined8 *)(param_1 + 8);
        if (*(long *)(param_1 + 0x10) != 0) {
          do {
            func_0x00010b198bb4();
          } while (extraout_w10 != 0);
        }
        FUN_10b1952ec(auStack_78,unaff_x20 + 0x100,&uStack_90);
        func_0x000107c27b58(auStack_78);
        FUN_10b12ac80(&uStack_90);
      }
    }
    else if (bVar1) {
      lVar3 = unaff_x20 + 0x100;
      FUN_10b12785c();
      plVar4 = *(long **)(lVar3 + 0x10);
      func_0x00010b198fd8(auStack_68);
      func_0x00010b197634(&uStack_b0,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
      uStack_98 = uStack_a8;
      uStack_a0 = uStack_b0;
      uStack_b0 = 0;
      uStack_a8 = 0;
      (**(code **)(*plVar4 + 0x30))(plVar4,auStack_68,&uStack_a0);
      func_0x0001052b81f4(&uStack_a0);
      func_0x00010b198d54();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
    }
  }
  return;
}



/* Entry: 10b19510c; end: 10b19513f;  */

void FUN_10b19510c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  while (lVar2 != lVar1) {
    lVar2 = lVar2 + -0x10;
    func_0x0001052b81f4();
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 10b195140; end: 10b195197;  */

void FUN_10b195140(void)

{
  undefined1 in_ZR;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b198c88();
  func_0x00010b198e30();
  func_0x00010b198c18(unaff_x19 + 0x7a8);
  if (((bool)in_ZR && extraout_x9 == 3) || (*(long *)(unaff_x19 + 0x728) != 0)) {
    FUN_10b196cac(unaff_x19 + 0x738);
  }
  else {
    func_0x00010b199388();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10b195198; end: 10b1952eb;  */

void FUN_10b195198(long param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  char cStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 uStack_80;
  undefined1 uStack_70;
  undefined1 auStack_68 [16];
  undefined1 uStack_58;
  undefined1 uStack_28;
  
  func_0x00010b199274();
  if ((bool)in_ZR) {
    uStack_c0 = *(undefined8 *)(param_1 + 0x3b8);
    uStack_b0 = CONCAT71(uStack_b0._1_7_,1);
    auStack_68[0] = 0;
    uStack_28 = 0;
    uStack_b8 = uStack_c0;
    func_0x00010b1990dc();
    func_0x00010b1990c4();
  }
  else if (*(char *)(param_2 + 0x40) == '\x01') {
    auStack_68[0] = 0;
    uStack_58 = 0;
    func_0x00010b1990dc();
  }
  else {
    uStack_80 = 0;
    uStack_70 = 0;
    func_0x000107c278b8(&uStack_d8,&UNK_10e55af5f,param_2);
    func_0x00010731ef9c(&uStack_f8,&UNK_10f731065);
    uStack_b0 = uStack_c8;
    uStack_b8 = uStack_d0;
    uStack_c0 = uStack_d8;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_d8 = 0;
    uStack_a8 = 3;
    uStack_a0 = uStack_a0 & 0xffffffffffffff00;
    uStack_88 = cStack_e0 == '\x01';
    if ((bool)uStack_88) {
      uStack_98 = uStack_f0;
      uStack_a0 = uStack_f8;
      uStack_90 = uStack_e8;
      uStack_f0 = 0;
      uStack_e8 = 0;
      uStack_f8 = 0;
    }
    func_0x0001052b8c70(auStack_68,&uStack_c0);
    func_0x00010b1990dc();
    func_0x00010b1990c4();
    func_0x00010b198f60();
    func_0x000107c279a4(&uStack_f8);
    func_0x00010b19911c();
  }
  return;
}



/* Entry: 10b1952ec; end: 10b1955bf;  */

void FUN_10b1952ec(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined ***pppuVar4;
  undefined1 extraout_w8;
  undefined8 extraout_x8;
  long lVar5;
  undefined ***extraout_x8_00;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  int extraout_w11_00;
  undefined *puVar6;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined **ppuStack_b8;
  long lStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_48;
  
  func_0x00010b198bf0();
  ppuVar1 = (undefined **)0x88;
  uStack_48 = extraout_x8;
  __Znwm();
  ppuVar2 = ppuVar1;
  func_0x00010b199218(FUN_10b198764);
  FUN_10b124f8c(ppuVar2 + 2);
  ppuVar2 = ppuVar1 + 0xe;
  func_0x00010b199350();
  lVar5 = param_1[1];
  puVar6 = (undefined *)*param_1;
  ppuVar1[0xd] = (undefined *)param_1[1];
  ppuVar1[0xc] = puVar6;
  if (lVar5 != 0) {
    do {
      func_0x00010b198bb4();
    } while (extraout_w10 != 0);
  }
  FUN_10b1278fc(ppuVar2,ppuVar1 + 0xc);
  ppuVar3 = ppuVar2;
  FUN_10b12d174();
  if (((ulong)ppuVar3 & 1) == 0) {
    *(undefined1 *)(ppuVar1 + 0x10) = 0;
    pppuVar4 = &ppuStack_e8;
    ppuStack_e8 = ppuVar1;
    ppuStack_e0 = ppuVar2;
    FUN_10b12d1c8(&pcStack_a8,ppuVar2);
    ppuVar1 = ppuStack_a0;
    if (ppuStack_a0 != (undefined **)0x0) {
      do {
        func_0x00010b198ec4();
      } while (extraout_w11_00 != 0);
      if (extraout_x9 == 0) {
        func_0x00010b19912c();
        ppuVar2 = ppuVar1;
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar1);
      }
    }
    while (func_0x00010b198ba0(uStack_48), !(bool)in_ZR) {
      ___stack_chk_fail();
      if ((int)pppuVar4 == 0) {
        do {
          __Unwind_Resume(ppuVar2);
        } while ((int)pppuVar4 == 0);
        func_0x00010b199158();
      }
      else {
        func_0x00010b198d1c(ppuStack_a0);
        func_0x00010b198358(&ppuStack_e8);
        func_0x000106e50c54(&uStack_c8);
        FUN_10b129c1c(&ppuStack_b8);
      }
      func_0x00010b198f10();
      ___cxa_begin_catch(ppuVar2);
      func_0x00010b1990d4();
      ___cxa_end_catch();
LAB_10b195450:
      func_0x00010b199144();
      *(undefined1 *)(ppuVar1 + 0x10) = extraout_w8;
      func_0x00010b1994e8();
      if ((bool)in_ZR) {
        ppuStack_b8 = (undefined **)&uStack_c8;
        ppuVar2 = ppuVar1 + 2;
        pppuVar4 = &ppuStack_b8;
        func_0x000107c27b6c(ppuVar2);
      }
      else {
        func_0x00010b199124(&uStack_c8);
        pppuVar4 = &ppuStack_b8;
        ppuStack_b8 = (undefined **)&uStack_c8;
        func_0x000104bf33ec(ppuVar1 + 2);
        ppuVar2 = (undefined **)&uStack_c8;
        __ZNSt13exception_ptrD1Ev(ppuVar2);
      }
      func_0x00010b198de4();
      func_0x00010b199430();
      func_0x00010b198dec();
    }
    return;
  }
  FUN_10b12d0d0(ppuVar2);
  func_0x00010b199158();
  func_0x00010b11fa90(&ppuStack_b8);
  if (ppuStack_b8 != (undefined **)0x0) {
    FUN_10b1fe814(&uStack_c8);
    ppuVar2 = ppuStack_b8;
    ppuStack_e8 = ppuStack_b8;
    ppuStack_e0 = (undefined **)lStack_b0;
    if (lStack_b0 != 0) {
      do {
        func_0x00010b198bb4();
      } while (extraout_w10_00 != 0);
    }
    ppuVar3 = ppuVar1 + 0xc;
    FUN_10b12785c();
    pppuVar4 = &ppuStack_e8;
    puStack_d8 = ppuVar3[2];
    puStack_d0 = ppuVar3[3];
    if (puStack_d0 != (undefined *)0x0) {
      do {
        func_0x00010b198d28();
        pppuVar4 = extraout_x8_00;
        lStack_b0 = (long)ppuStack_e0;
      } while (extraout_w11 != 0);
    }
    pcStack_a8 = FUN_10b198378;
    ppuStack_a0 = &PTR_FUN_110cc2558;
    ppuStack_98 = ppuVar2;
    ppuStack_e8 = (undefined **)0x0;
    ppuStack_e0 = (undefined **)0x0;
    lStack_90 = lStack_b0;
    puStack_88 = puStack_d8;
    puStack_80 = puStack_d0;
    pppuVar4[2] = (undefined **)0x0;
    pppuVar4[3] = (undefined **)0x0;
    (**(code **)(*(long *)CONCAT71(uStack_c7,uStack_c8) + 0x10))
              ((long *)CONCAT71(uStack_c7,uStack_c8),&pcStack_a8);
    func_0x00010b198d1c(ppuStack_a0);
    func_0x00010b198358(&ppuStack_e8);
    func_0x000106e50c54(&uStack_c8);
  }
  FUN_10b129c1c(&ppuStack_b8);
  func_0x00010b199150();
  func_0x00010b198f10();
  goto LAB_10b195450;
}



/* Entry: 10b1955c0; end: 10b19580f;  */

/* WARNING: Possible PIC construction at 0x00010b1957a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b1956d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b1957a8) */
/* WARNING: Removing unreachable block (ram,0x00010b1957b4) */
/* WARNING: Removing unreachable block (ram,0x00010b1957f4) */
/* WARNING: Removing unreachable block (ram,0x00010b19580c) */
/* WARNING: Removing unreachable block (ram,0x00010b1956dc) */

undefined *** FUN_10b1955c0(long param_1,undefined ***param_2,long param_3)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined8 extraout_x8;
  undefined ***unaff_x19;
  undefined ***pppuStack_148;
  undefined ***pppuStack_140;
  undefined ***pppuStack_138;
  undefined1 *puStack_130;
  undefined8 uStack_128;
  undefined **appuStack_120 [2];
  undefined **ppuStack_110;
  long alStack_108 [5];
  undefined **ppuStack_e0;
  undefined **appuStack_d8 [5];
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined8 uStack_48;
  
  pppuVar4 = appuStack_120;
  func_0x00010b198bdc();
  lVar2 = *(long *)(*(long *)(param_1 + 0x6b0) + 0x30);
  uStack_48 = extraout_x8;
  FUN_10b1ff1d0(appuStack_120,lVar2,*(undefined4 *)(unaff_x19 + 0x6b));
  ppuStack_e0 = (undefined **)&UNK_1053a6a3c;
  appuStack_d8[0] = &PTR_DAT_110a21c28;
  uVar1 = *(char *)(param_3 + 0x40) == '\x01';
  if ((bool)uVar1) {
    func_0x00010b1992a4();
    func_0x0001052a06f8(&ppuStack_98,param_3);
    ppuStack_e0 = (undefined **)FUN_10b198474;
    ppuStack_110 = &PTR_FUN_110cc2570;
    lVar3 = 0x60;
    __Znwm();
    lVar2 = lVar3;
    func_0x00010b199000();
    func_0x0001052a06f8(lVar2 + 0x18,&ppuStack_98);
    alStack_108[0] = lVar3;
    func_0x00010b1993fc();
    func_0x00010b198ff0();
    FUN_10b195810(&ppuStack_b0);
    FUN_10b19510c(unaff_x19 + 0xfc);
    ppuStack_110 = ppuStack_e0;
    pppuVar5 = &ppuStack_110;
    (*(code *)appuStack_d8[0][2])(alStack_108,appuStack_d8);
    ppuStack_b0 = (undefined **)FUN_10b1985fc;
    ppuStack_a8 = &PTR_DAT_110cc25b0;
    ppuStack_a0 = ppuStack_110;
    (**(code **)(alStack_108[0] + 0x10))(&ppuStack_98,alStack_108);
    (**(code **)(*appuStack_120[0] + 0x10))(appuStack_120[0],&ppuStack_b0);
    func_0x00010b198c50(ppuStack_a8);
    func_0x00010b198c44(alStack_108[0]);
    func_0x00010b198c5c(appuStack_d8[0]);
    FUN_10b127ebc();
    func_0x00010b198ba0(uStack_48);
    if ((bool)uVar1) {
      return pppuVar4;
    }
    ___stack_chk_fail();
    uStack_128 = 0x10b1957a8;
    unaff_x19 = pppuVar4;
    param_2 = pppuVar5;
  }
  else {
    func_0x00010b1992a4();
    ppuStack_90 = param_2[1];
    ppuStack_98 = *param_2;
    uStack_88 = *(undefined1 *)(param_2 + 2);
    ppuStack_e0 = (undefined **)FUN_10b19853c;
    ppuStack_110 = &PTR_FUN_110cc2590;
    func_0x00010b1993e8();
    func_0x00010b199000();
    *(undefined ***)(lVar2 + 0x20) = ppuStack_90;
    *(undefined ***)(lVar2 + 0x18) = ppuStack_98;
    *(ulong *)(lVar2 + 0x28) = CONCAT71(uStack_87,uStack_88);
    alStack_108[0] = lVar2;
    func_0x00010b1993fc();
    func_0x00010b198ff0();
    pppuVar5 = &ppuStack_b0;
    uStack_128 = 0x10b1956dc;
  }
  pppuStack_148 = pppuVar5;
  pppuStack_140 = param_2;
  pppuStack_138 = unaff_x19;
  puStack_130 = &stack0xfffffffffffffff0;
  func_0x00010b196550(&pppuStack_148);
  return pppuVar5;
}



/* Entry: 10b195810; end: 10b195837;  */

long FUN_10b195810(long param_1)

{
  long lStack_28;
  
  func_0x0001052a038c(param_1 + 0x18);
  lStack_28 = param_1;
  func_0x00010b196550(&lStack_28);
  return param_1;
}



/* Entry: 10b195838; end: 10b19592b;  */

void FUN_10b195838(long param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 *puVar2;
  code **ppcVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uStack_180;
  long lStack_178;
  undefined1 auStack_170 [64];
  undefined8 auStack_130 [2];
  undefined8 uStack_120;
  long lStack_118;
  code *pcStack_108;
  undefined **ppuStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_d8;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [8];
  long lStack_68;
  code *pcStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010b198df4();
  func_0x00010b198bf0();
  uStack_28 = extraout_x8;
  func_0x00010b197634(auStack_70,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  func_0x00010b1ff218(auStack_80,*(undefined8 *)(*(long *)(unaff_x20 + 0x6b0) + 0x30),
                      *(undefined4 *)(unaff_x20 + 0x358));
  if (lStack_68 != 0) {
    do {
      func_0x00010b198bb4();
    } while (extraout_w10 != 0);
  }
  uStack_30 = unaff_x19[1];
  uStack_38 = *unaff_x19;
  pcStack_58 = FUN_10b198634;
  ppuStack_50 = &PTR_FUN_110cc25c8;
  ppcVar3 = &pcStack_58;
  FUN_10b20a5ac();
  func_0x00010b198c44(ppuStack_50);
  func_0x00010b198d54();
  puVar1 = auStack_80;
  func_0x00010b1298c4();
  func_0x00010b198fc0();
  func_0x00010b198ba0(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b198c44(ppuStack_50);
    func_0x00010b198d54();
    func_0x00010b1298c4();
    func_0x00010b198fc0();
    func_0x00010b198c78();
    func_0x00010b198bdc();
    uStack_d8 = extraout_x8_00;
    func_0x00010b199374();
    func_0x00010b1ff218(auStack_130,*(undefined8 *)(*(long *)(puVar1 + 0x6b0) + 0x30),
                        *(undefined4 *)(puVar1 + 0x358));
    lStack_178 = lStack_118;
    uStack_180 = uStack_120;
    if (lStack_118 != 0) {
      do {
        func_0x00010b198bb4();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001052a0760(auStack_170,ppcVar3);
    pcStack_108 = FUN_10b1986c0;
    ppuStack_100 = &PTR_FUN_110cc25e0;
    puVar2 = (undefined8 *)0x50;
    __Znwm();
    puVar2[1] = lStack_178;
    *puVar2 = uStack_180;
    uStack_180 = 0;
    lStack_178 = 0;
    func_0x0001052a0760(puVar2 + 2,auStack_170);
    puStack_f8 = puVar2;
    FUN_10b20a5ac(auStack_130[0],&pcStack_108);
    func_0x00010b198c50(ppuStack_100);
    FUN_10b195a70(&uStack_180);
    func_0x00010b1298c4(auStack_130);
    func_0x00010b198f18();
    func_0x00010b198ba0(uStack_d8);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010b198c50(ppuStack_100);
      FUN_10b195a70(&uStack_180);
      func_0x00010b1298c4(auStack_130);
      func_0x00010b198f18();
      do {
        func_0x00010b198c78();
      } while( true );
    }
    return;
  }
  return;
}



/* Entry: 10b19592c; end: 10b195a6f;  */

void FUN_10b19592c(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  int extraout_w10;
  long unaff_x19;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined1 auStack_d0 [64];
  undefined8 auStack_90 [2];
  undefined8 uStack_80;
  long lStack_78;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_38;
  
  func_0x00010b198bdc();
  uStack_38 = extraout_x8;
  func_0x00010b199374();
  func_0x00010b1ff218(auStack_90,*(undefined8 *)(*(long *)(unaff_x19 + 0x6b0) + 0x30),
                      *(undefined4 *)(unaff_x19 + 0x358));
  lStack_d8 = lStack_78;
  uStack_e0 = uStack_80;
  if (lStack_78 != 0) {
    do {
      func_0x00010b198bb4();
    } while (extraout_w10 != 0);
  }
  func_0x0001052a0760(auStack_d0,param_2);
  pcStack_68 = FUN_10b1986c0;
  ppuStack_60 = &PTR_FUN_110cc25e0;
  puVar1 = (undefined8 *)0x50;
  __Znwm();
  puVar1[1] = lStack_d8;
  *puVar1 = uStack_e0;
  uStack_e0 = 0;
  lStack_d8 = 0;
  func_0x0001052a0760(puVar1 + 2,auStack_d0);
  puStack_58 = puVar1;
  FUN_10b20a5ac(auStack_90[0],&pcStack_68);
  func_0x00010b198c50(ppuStack_60);
  FUN_10b195a70(&uStack_e0);
  func_0x00010b1298c4(auStack_90);
  func_0x00010b198f18();
  func_0x00010b198ba0(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b198c50(ppuStack_60);
    FUN_10b195a70(&uStack_e0);
    func_0x00010b1298c4(auStack_90);
    func_0x00010b198f18();
    do {
      func_0x00010b198c78();
    } while( true );
  }
  return;
}



/* Entry: 10b195a70; end: 10b195a8f;  */

long FUN_10b195a70(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b198eac();
  func_0x0001052a03ac();
  lVar1 = unaff_x19;
  func_0x000107c350ac();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b195a90; end: 10b195a9b;  */

undefined1 FUN_10b195a90(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 uStack_28;
  
  iVar2 = 0x10cc2260;
  if ((bRam000000011336c408 & 1) == 0) {
    func_0x00010b1992b0(0x11336c408);
    if (iVar2 != 0) {
      uVar1 = uStack_28;
      func_0x000107c2be10();
      uRam000000011336c404 = uVar1;
      ___cxa_guard_release(0x11336c408);
    }
  }
  return uRam000000011336c404;
}



/* Entry: 10b195a9c; end: 10b195b13;  */

undefined1 FUN_10b195a9c(int param_1)

{
  undefined1 uVar1;
  undefined1 uStack_28;
  
  if ((bRam000000011336c408 & 1) == 0) {
    func_0x00010b1992b0(0x11336c408);
    if (param_1 != 0) {
      uVar1 = uStack_28;
      func_0x000107c2be10();
      uRam000000011336c404 = uVar1;
      ___cxa_guard_release(0x11336c408);
    }
  }
  return uRam000000011336c404;
}



/* Entry: 10b195b14; end: 10b195b47;  */

void FUN_10b195b14(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  func_0x00010b195ba4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10b195b48; end: 10b195b7b;  */

long FUN_10b195b48(long param_1,ulong param_2)

{
  long lVar1;
  undefined1 in_CY;
  long extraout_x8;
  long extraout_x9;
  long *unaff_x19;
  
  if (param_2 >> 0x3c == 0) {
    func_0x00010b198eac();
    FUN_10b195cf8();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    unaff_x19[2] = param_1 + param_2 * 0x10;
    return param_1;
  }
  FUN_10b195cec();
  if (param_2 >> 0x3c == 0) {
    func_0x00010b19954c();
    lVar1 = extraout_x9;
    if ((bool)in_CY) {
      lVar1 = extraout_x8;
    }
    return lVar1;
  }
  FUN_10b195cec();
  FUN_10b195bb8();
  return param_1;
}



/* Entry: 10b195b7c; end: 10b195bb7;  */

undefined8 FUN_10b195b7c(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 in_CY;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  
  if (param_2 >> 0x3c == 0) {
    func_0x00010b19954c();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    return uVar1;
  }
  FUN_10b195cec();
  FUN_10b195bb8();
  return param_1;
}



/* Entry: 10b195bb8; end: 10b195c27;  */

undefined8 *
FUN_10b195bb8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  for (; param_2 != param_3; param_2 = param_2 + 2) {
    lVar1 = param_2[1];
    uVar2 = *param_2;
    param_4[1] = param_2[1];
    *param_4 = uVar2;
    if (lVar1 != 0) {
      do {
        func_0x00010b198bb4();
      } while (extraout_w10 != 0);
    }
    param_4 = param_4 + 2;
  }
  func_0x00010b1990b4();
  return param_4;
}



/* Entry: 10b195c28; end: 10b195c57;  */

long FUN_10b195c28(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10b195c58(param_1);
  }
  return param_1;
}



/* Entry: 10b195c58; end: 10b195c77;  */

void FUN_10b195c58(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x10;
    func_0x0001052ac684();
  }
  return;
}



/* Entry: 10b195c78; end: 10b195ca7;  */

void FUN_10b195c78(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x10;
    func_0x0001052ac684();
  }
  return;
}



/* Entry: 10b195ca8; end: 10b195ceb;  */

long FUN_10b195ca8(void)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b199194();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x10) {
    func_0x00010b199160();
    FUN_10b110dec();
    unaff_x19 = unaff_x19 + 0x10;
  }
  return unaff_x19;
}



/* Entry: 10b195cec; end: 10b195cf7;  */

void FUN_10b195cec(void)

{
  func_0x00010b198e64();
  FUN_10b195d18();
  return;
}



/* Entry: 10b195cf8; end: 10b195d17;  */

void FUN_10b195cf8(void)

{
  FUN_10b195d18();
  return;
}



/* Entry: 10b195d18; end: 10b195d33;  */

undefined8 * FUN_10b195d18(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 >> 0x3c == 0) {
    puVar1 = (undefined8 *)(param_2 << 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10b195d64();
  return param_1;
}



/* Entry: 10b195d34; end: 10b195d63;  */

undefined8 * FUN_10b195d34(undefined8 *param_1,long param_2,long param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10b195d64(param_1,param_2,param_2 + param_3 * 0x10,param_3);
  return param_1;
}



/* Entry: 10b195d64; end: 10b195dc3;  */

void FUN_10b195d64(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
    FUN_10b195b48(param_1,param_4);
    func_0x00010b199160();
    FUN_10b195b14();
  }
  func_0x00010b1990a4();
  return;
}



/* Entry: 10b195dc4; end: 10b195e23;  */

long FUN_10b195dc4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x00010b125558(param_1);
  }
  return param_1;
}



/* Entry: 10b195e24; end: 10b195e73;  */

void FUN_10b195e24(undefined8 param_1)

{
  undefined8 *extraout_x8;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010b198df4();
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar1 = *unaff_x19;
  uVar3 = unaff_x20[1];
  uVar2 = *unaff_x20;
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar1;
  unaff_x19[1] = uVar3;
  *unaff_x19 = uVar2;
  __ZNSt3__18__sp_mut6unlockEv(param_1);
  uVar1 = *unaff_x19;
  extraout_x8[1] = unaff_x19[1];
  *extraout_x8 = uVar1;
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 10b195e74; end: 10b195eeb;  */

undefined8 * FUN_10b195e74(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x00010b198f20();
  return param_1;
}



/* Entry: 10b195eec; end: 10b1960d7;  */

long * FUN_10b195eec(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong *puVar1;
  undefined1 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 extraout_x8;
  ulong uVar5;
  int extraout_w10;
  int extraout_w10_00;
  long *unaff_x19;
  ulong uVar6;
  int unaff_w21;
  undefined1 auStack_718 [8];
  undefined8 uStack_710;
  long lStack_708;
  undefined8 uStack_700;
  long lStack_6f8;
  undefined1 auStack_6f0 [24];
  long alStack_6d8 [85];
  ulong uStack_430;
  int iStack_428;
  char cStack_68;
  undefined1 auStack_60 [40];
  undefined8 uStack_38;
  
  func_0x00010b198bdc();
  uStack_710 = param_2;
  lStack_708 = param_3;
  uStack_38 = extraout_x8;
  if (param_3 != 0) {
    do {
      func_0x00010b198bb4();
    } while (extraout_w10 != 0);
    do {
      func_0x00010b198bb4();
    } while (extraout_w10_00 != 0);
  }
  uStack_700 = param_2;
  lStack_6f8 = param_3;
  FUN_10b1961a0(alStack_6d8,&uStack_700);
  uVar2 = cStack_68 == '\x01' && iStack_428 == 1;
  if (cStack_68 == '\x01' && 0 < iStack_428) {
    lVar3 = *unaff_x19;
    func_0x00010b190fe8();
    uVar2 = *(int *)(lVar3 + 0x20) == 1;
    if (0 < *(int *)(lVar3 + 0x20)) {
      puVar1 = &uStack_430;
      if ((uStack_430 & 1) != 0) {
        puVar1 = (ulong *)(uStack_430 + 7);
      }
      uVar6 = *(ulong *)(*puVar1 + 0x48);
      lVar3 = *unaff_x19;
      func_0x00010b190fe8();
      uVar5 = *(ulong *)(lVar3 + 0x18);
      uVar2 = (uVar5 & 1) == 0;
      puVar1 = (ulong *)(lVar3 + 0x18);
      if (!(bool)uVar2) {
        puVar1 = (ulong *)(uVar5 + 7);
      }
      uVar5 = uVar6 & 0xfffffffffffffffc;
      func_0x000107c278d0(uVar5,*(ulong *)(*puVar1 + 0x48) & 0xfffffffffffffffc);
      if ((int)uVar5 != 0) {
        func_0x00010b1994d4();
        FUN_10b12983c(auStack_60);
        func_0x00010b19909c(auStack_6f0,auStack_60);
        func_0x00010b198d68(uVar6,0xbb,auStack_6f0);
        FUN_10b120998(auStack_6f0);
        func_0x00010b198ed4(auStack_60);
      }
    }
  }
  FUN_10b18fcf0(*unaff_x19,alStack_6d8);
  FUN_10b196360(alStack_6d8);
  func_0x00010b198e8c();
  func_0x00010b198fa8();
  plVar4 = (long *)unaff_x19[2];
  func_0x000107c27b68(plVar4);
  while( true ) {
    func_0x00010b198ba0(uStack_38);
    if ((bool)uVar2) {
      return plVar4;
    }
    ___stack_chk_fail();
    func_0x00010b198ee8();
    FUN_10b120998(auStack_6f0);
    func_0x00010b198ed4(auStack_60);
    plVar4 = alStack_6d8;
    FUN_10b196360(plVar4);
    func_0x00010b198e8c();
    func_0x00010b198fa8();
    uVar2 = unaff_w21 == 1;
    if (!(bool)uVar2) break;
    func_0x00010b198f30();
    unaff_x19 = (long *)unaff_x19[2];
    __ZSt17current_exceptionv(auStack_718);
    func_0x00010b1994b4();
    func_0x000104bf33cc();
    func_0x00010b198e84();
    ___cxa_end_catch();
  }
  func_0x00010b198cc0();
  func_0x00010b199174();
  func_0x00010b198eac();
  func_0x000107c27b70();
  plVar4 = unaff_x19;
  func_0x000107c350ac();
  if (plVar4 != (long *)0x0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b1960d8; end: 10b196147;  */

long FUN_10b1960d8(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b198eac();
  func_0x000107c27b70();
  lVar1 = unaff_x19;
  func_0x000107c350ac();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b196148; end: 10b19615b;  */

void FUN_10b196148(void)

{
  func_0x00010b19611c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b19615c; end: 10b19619f;  */

void FUN_10b19615c(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x00010b19952c();
  if (param_3 != 0) {
    do {
      func_0x00010b198bb4();
    } while (extraout_w10 != 0);
  }
  FUN_10b195eec(param_1 + 8);
  func_0x00010b198f20();
  return;
}



/* Entry: 10b1961a0; end: 10b1962b3;  */

void FUN_10b1961a0(undefined8 param_1,undefined8 param_2)

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
  FUN_10b195e24(&lStack_40,param_2,&uStack_50);
  FUN_10b195e74(&lStack_30,&lStack_40);
  func_0x00010b1960f8(&lStack_40);
  func_0x00010b198e8c();
  lStack_40 = lStack_30 + 0x6b0;
  uStack_38 = 1;
  __ZNSt3__15mutex4lockEv();
  lStack_60 = lStack_30;
  lStack_58 = lStack_28;
  lVar2 = lStack_30;
  if (lStack_28 != 0) {
    do {
      func_0x00010b198d28();
      lVar2 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  FUN_10b1962b4(lVar2 + 0x680,&lStack_40,&lStack_60);
  func_0x00010b198fa8();
  if (*(long *)(lStack_30 + 0x6f0) != 0) {
    __ZNSt13exception_ptrC1ERKS_(auStack_68,lStack_30 + 0x6f0);
    __ZSt17rethrow_exceptionSt13exception_ptr(auStack_68);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10b196270);
    (*pcVar1)();
  }
  FUN_10b1962f4(param_1);
  func_0x000107c2798c(&lStack_40);
  func_0x00010b1960f8(&lStack_30);
  return;
}



/* Entry: 10b1962b4; end: 10b1962eb;  */

void FUN_10b1962b4(void)

{
  ulong uVar1;
  ulong unaff_x19;
  
  func_0x00010b199194();
  while (uVar1 = unaff_x19, FUN_10b1962ec(), (uVar1 & 1) == 0) {
    __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE();
  }
  return;
}



/* Entry: 10b1962ec; end: 10b1962f3;  */

bool FUN_10b1962ec(long *param_1)

{
  bool bVar1;
  
  if ((*(byte *)(*param_1 + 0x678) & 1) == 0) {
    bVar1 = *(long *)(*param_1 + 0x6f0) != 0;
    func_0x00010b198e84();
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 10b1962f4; end: 10b19633f;  */

undefined8 * FUN_10b1962f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 0xce) = 0;
  if (*(char *)(param_2 + 0xce) == '\x01') {
    FUN_10b196340(param_1);
  }
  else {
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined1 *)(param_1 + 0xce) = 0;
  }
  return param_1;
}



/* Entry: 10b196340; end: 10b19635f;  */

void FUN_10b196340(long param_1)

{
  FUN_10b1254a0();
  *(undefined1 *)(param_1 + 0x670) = 1;
  return;
}



/* Entry: 10b196360; end: 10b196387;  */

void FUN_10b196360(long param_1)

{
  if (*(char *)(param_1 + 0x670) == '\x01') {
    func_0x00010b125584();
  }
  else {
    func_0x0001052ac684();
  }
  return;
}



/* Entry: 10b196388; end: 10b1963cb;  */

undefined8 * FUN_10b196388(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  undefined8 uVar2;
  
  func_0x00010b1991f4();
  if (param_1 < (undefined8 *)unaff_x19[2]) {
    uVar2 = *param_2;
    puVar1 = param_1 + 2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    puVar1 = unaff_x19;
    FUN_10b1963cc();
  }
  unaff_x19[1] = puVar1;
  return puVar1 + -2;
}



/* Entry: 10b1963cc; end: 10b19642f;  */

undefined8 FUN_10b1963cc(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 *puStack_38;
  
  func_0x00010b198c88();
  func_0x00010b19950c();
  FUN_10b195b7c();
  func_0x00010b199048();
  FUN_10b196450();
  uVar1 = *unaff_x20;
  puStack_38[1] = unaff_x20[1];
  *puStack_38 = uVar1;
  *unaff_x20 = 0;
  unaff_x20[1] = 0;
  puStack_38 = puStack_38 + 2;
  func_0x00010b1994b4();
  FUN_10b196430();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010b196488(auStack_48);
  return uVar1;
}



/* Entry: 10b196430; end: 10b19644f;  */

void FUN_10b196430(void)

{
  func_0x00010b198dbc();
  func_0x00010b198d70();
  return;
}



/* Entry: 10b196450; end: 10b1964b3;  */

void FUN_10b196450(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    FUN_10b195cf8(param_4);
  }
  func_0x00010b199200();
  return;
}



/* Entry: 10b1964b4; end: 10b1964bb;  */

void FUN_10b1964b4(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b198df4(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    func_0x0001052ac684();
  }
  return;
}



/* Entry: 10b1964bc; end: 10b196587;  */

void FUN_10b1964bc(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b198df4();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    func_0x0001052ac684();
  }
  return;
}



/* Entry: 10b196588; end: 10b1965db;  */

void FUN_10b196588(void)

{
  undefined1 in_ZR;
  
  func_0x00010b198f38();
  if (!(bool)in_ZR) {
    FUN_10b195b48();
    FUN_10b1965dc();
  }
  func_0x00010b1990a4();
  return;
}



/* Entry: 10b1965dc; end: 10b19665b;  */

void FUN_10b1965dc(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  int extraout_w10;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  for (; param_2 != param_3; param_2 = param_2 + 2) {
    lVar1 = param_2[1];
    uVar3 = *param_2;
    puVar2[1] = param_2[1];
    *puVar2 = uVar3;
    if (lVar1 != 0) {
      do {
        func_0x00010b198bb4();
      } while (extraout_w10 != 0);
    }
    puVar2 = puVar2 + 2;
  }
  func_0x00010b1990b4();
  *(undefined8 **)(param_1 + 8) = puVar2;
  return;
}



/* Entry: 10b19665c; end: 10b19669f;  */

long FUN_10b19665c(void)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b199194();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x10) {
    func_0x00010b199160();
    FUN_10b110dec();
    unaff_x19 = unaff_x19 + 0x10;
  }
  return unaff_x19;
}



/* Entry: 10b1966a0; end: 10b1966f3;  */

void FUN_10b1966a0(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b198df4();
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  (**(code **)(*(long *)(unaff_x19 + 0x10) + 0x10))(param_1 + 2,(long *)(unaff_x19 + 0x10));
  *(undefined1 *)(unaff_x20 + 0x38) = *(undefined1 *)(unaff_x19 + 0x38);
  FUN_10b0fafd4(unaff_x20 + 0x40,unaff_x19 + 0x40);
  return;
}



/* Entry: 10b1966f4; end: 10b1966ff;  */

void FUN_10b1966f4(void)

{
  long unaff_x19;
  
  func_0x00010b198e64();
  func_0x00010b1993b0();
  func_0x00010b1990cc(*(undefined8 *)(unaff_x19 + 0x10));
  return;
}



/* Entry: 10b196700; end: 10b196727;  */

void FUN_10b196700(void)

{
  long unaff_x19;
  
  func_0x00010b1993b0();
  func_0x00010b1990cc(*(undefined8 *)(unaff_x19 + 0x10));
  return;
}



/* Entry: 10b196728; end: 10b19676b;  */

void FUN_10b196728(long param_1)

{
  FUN_10b121fd0();
  *(undefined1 *)(param_1 + 0x78) = 1;
  return;
}



/* Entry: 10b19676c; end: 10b196797;  */

undefined1 * FUN_10b19676c(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x28] = 0;
  FUN_10b196798();
  return param_1;
}



/* Entry: 10b196798; end: 10b1967ab;  */

void FUN_10b196798(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_10b1967c8();
    *(undefined1 *)(param_1 + 0x28) = 1;
    return;
  }
  return;
}



/* Entry: 10b1967ac; end: 10b1967c7;  */

void FUN_10b1967ac(long param_1)

{
  FUN_10b1967c8();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 10b1967c8; end: 10b1967f7;  */

void FUN_10b1967c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  param_1[4] = param_2[4];
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  return;
}



/* Entry: 10b1967f8; end: 10b196817;  */

void FUN_10b1967f8(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_10b196818();
  }
  return;
}



/* Entry: 10b196818; end: 10b19683b;  */

void FUN_10b196818(void)

{
  long unaff_x19;
  
  func_0x00010b198eac();
  FUN_10b17dec8();
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10b19683c; end: 10b1968d3;  */

void FUN_10b19683c(undefined8 param_1)

{
  long extraout_x8;
  int extraout_w10;
  undefined1 auStack_b0 [40];
  undefined1 uStack_88;
  undefined8 auStack_80 [2];
  undefined1 auStack_70 [80];
  
  func_0x00010b198eb8();
  FUN_10b202630();
  func_0x00010b199500();
  auStack_80[0] = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x00010b198bb4();
    } while (extraout_w10 != 0);
  }
  auStack_b0[0] = 0;
  uStack_88 = 0;
  FUN_10b17d524();
  FUN_10b17d950(auStack_b0);
  func_0x000107c27d78(auStack_80);
  func_0x00010b121e00(auStack_70);
  return;
}



/* Entry: 10b1968d4; end: 10b1968f7;  */

void FUN_10b1968d4(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_10b24d1ec();
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}



/* Entry: 10b1968f8; end: 10b19694f;  */

undefined8
FUN_10b1968f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5)

{
  int extraout_w10;
  undefined8 uStack_30;
  long lStack_28;
  
  uStack_30 = param_3;
  lStack_28 = param_4;
  if (param_4 != 0) {
    do {
      func_0x00010b198bb4();
    } while (extraout_w10 != 0);
  }
  FUN_10b17d524(param_1,param_2,&uStack_30,param_5);
  func_0x000107c27d78(&uStack_30);
  return param_1;
}



/* Entry: 10b196950; end: 10b1969bf;  */

undefined8 * FUN_10b196950(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc6958;
  func_0x000107c27914(param_1 + 0x26);
  func_0x000107c27914(param_1 + 0x23);
  *param_1 = &PTR_DAT_110cc6910;
  func_0x000107c27914(param_1 + 1);
  return param_1;
}



/* Entry: 10b1969c0; end: 10b1969cb;  */

undefined1 FUN_10b1969c0(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 uStack_28;
  
  iVar2 = 0x10cc22b8;
  if ((bRam000000011336c418 & 1) == 0) {
    func_0x00010b1992b0(0x11336c418);
    if (iVar2 != 0) {
      uVar1 = uStack_28;
      func_0x000107c2be10();
      uRam000000011336c410 = uVar1;
      ___cxa_guard_release(0x11336c418);
    }
  }
  return uRam000000011336c410;
}



/* Entry: 10b1969cc; end: 10b196a43;  */

undefined1 FUN_10b1969cc(int param_1)

{
  undefined1 uVar1;
  undefined1 uStack_28;
  
  if ((bRam000000011336c418 & 1) == 0) {
    func_0x00010b1992b0(0x11336c418);
    if (param_1 != 0) {
      uVar1 = uStack_28;
      func_0x000107c2be10();
      uRam000000011336c410 = uVar1;
      ___cxa_guard_release(0x11336c418);
    }
  }
  return uRam000000011336c410;
}



/* Entry: 10b196a44; end: 10b196a67;  */

void FUN_10b196a44(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x000107c278a8();
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



/* Entry: 10b196a68; end: 10b196c03;  */

void FUN_10b196a68(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  undefined1 in_ZR;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uStack_6e8;
  long lStack_6e0;
  undefined8 uStack_6d8;
  long lStack_6d0;
  undefined1 auStack_6c8 [120];
  byte bStack_650;
  long alStack_50 [2];
  
  uStack_6e8 = param_2;
  lStack_6e0 = param_3;
  if (param_3 != 0) {
    do {
      func_0x00010b198bb4();
    } while (extraout_w10 != 0);
    do {
      func_0x00010b198bb4();
    } while (extraout_w10_00 != 0);
  }
  uStack_6d8 = param_2;
  lStack_6d0 = param_3;
  func_0x00010b11fa90(alStack_50,param_1);
  lVar1 = alStack_50[0];
  if (alStack_50[0] != 0) {
    FUN_10b1961a0(auStack_6c8,&uStack_6d8);
    FUN_10b18fcf0(lVar1,auStack_6c8);
    FUN_10b196360(auStack_6c8);
    lVar1 = alStack_50[0];
    __ZNSt3__115recursive_mutex4lockEv(alStack_50[0] + 0x18);
    func_0x00010b198c18(alStack_50[0] + 0x7a8);
    if (!(bool)in_ZR || extraout_x9 != 2) {
      FUN_10b193b10(auStack_6c8,alStack_50[0]);
      if ((bStack_650 & 1) == 0) {
        func_0x000104bdc2c8();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10b196b60);
        (*pcVar2)();
      }
      FUN_10b193564(alStack_50[0],auStack_6c8);
      FUN_10b0faf98(auStack_6c8);
    }
    __ZNSt3__115recursive_mutex6unlockEv(lVar1 + 0x18);
  }
  FUN_10b129c1c(alStack_50);
  func_0x00010b1960f8(&uStack_6d8);
  func_0x00010b1960f8(&uStack_6e8);
  func_0x000107c27b68(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 10b196c04; end: 10b196c53;  */

long FUN_10b196c04(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b198eac();
  func_0x000107c27b70();
  lVar1 = unaff_x19;
  func_0x000107c350ac();
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 10b196c54; end: 10b196c67;  */

void FUN_10b196c54(void)

{
  func_0x00010b196c28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b196c68; end: 10b196cab;  */

void FUN_10b196c68(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x00010b19952c();
  if (param_3 != 0) {
    do {
      func_0x00010b198bb4();
    } while (extraout_w10 != 0);
  }
  FUN_10b196a68(param_1 + 8);
  func_0x00010b198f20();
  return;
}



/* Entry: 10b196cac; end: 10b196ce7;  */

long FUN_10b196cac(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_10b196ce8();
    lVar2 = uVar1 + 0x10;
  }
  else {
    lVar2 = param_1;
    FUN_10b196d1c();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x10;
}



/* Entry: 10b196ce8; end: 10b196d1b;  */

void FUN_10b196ce8(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *extraout_x8;
  long lVar2;
  int extraout_w11;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  lVar2 = param_2[1];
  uVar3 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010b198d28();
      puVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *(undefined8 **)(param_1 + 8) = puVar1 + 2;
  return;
}



/* Entry: 10b196d1c; end: 10b196d97;  */

undefined8 FUN_10b196d1c(void)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 *puStack_38;
  
  func_0x00010b198c88();
  func_0x00010b19950c();
  FUN_10b196d98();
  func_0x00010b199048();
  FUN_10b196dec();
  lVar1 = unaff_x20[1];
  uVar2 = *unaff_x20;
  puStack_38[1] = unaff_x20[1];
  *puStack_38 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010b198bb4();
    } while (extraout_w10 != 0);
  }
  puStack_38 = puStack_38 + 2;
  func_0x00010b1994b4();
  FUN_10b196dc0();
  uVar2 = *(undefined8 *)(unaff_x19 + 8);
  FUN_10b196e60(auStack_48);
  return uVar2;
}



/* Entry: 10b196d98; end: 10b196dbf;  */

undefined8 FUN_10b196d98(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 in_CY;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  
  if (param_2 >> 0x3c == 0) {
    func_0x00010b19954c();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    return uVar1;
  }
  FUN_10b196de0();
  func_0x00010b198dbc();
  func_0x00010b198d70();
  return param_1;
}



/* Entry: 10b196dc0; end: 10b196ddf;  */

void FUN_10b196dc0(void)

{
  func_0x00010b198dbc();
  func_0x00010b198d70();
  return;
}



/* Entry: 10b196de0; end: 10b196deb;  */

void FUN_10b196de0(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010b198e64();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x00010b196e24(param_4);
  }
  func_0x00010b199200();
  return;
}



/* Entry: 10b196dec; end: 10b196e43;  */

void FUN_10b196dec(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x00010b196e24(param_4);
  }
  func_0x00010b199200();
  return;
}



/* Entry: 10b196e44; end: 10b196e5f;  */

long * FUN_10b196e44(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_2 << 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_10b196e8c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b196e60; end: 10b196e8b;  */

long * FUN_10b196e60(long *param_1)

{
  FUN_10b196e8c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b196e8c; end: 10b196e93;  */

void FUN_10b196e8c(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b198df4(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    func_0x0001052b81f4();
  }
  return;
}



/* Entry: 10b196e94; end: 10b196ec7;  */

void FUN_10b196e94(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b198df4();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    func_0x0001052b81f4();
  }
  return;
}



/* Entry: 10b196ec8; end: 10b196f63;  */

void FUN_10b196ec8(undefined8 param_1)

{
  code *pcVar1;
  undefined1 in_ZR;
  long *plVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 in_register_00005008;
  undefined1 auStack_40 [8];
  undefined1 uStack_38;
  
  func_0x00010b198f38();
  if (!(bool)in_ZR) {
    uVar3 = extraout_x8 >> 4;
    if (uVar3 >> 0x3c != 0) {
      FUN_10b196de0();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10b196f58);
      (*pcVar1)();
    }
    plVar2 = unaff_x19 + 2;
    func_0x00010b196e24();
    *unaff_x19 = (long)plVar2;
    unaff_x19[1] = (long)plVar2;
    unaff_x19[2] = (long)(plVar2 + uVar3 * 2);
    for (; unaff_x20 != unaff_x21; unaff_x20 = unaff_x20 + 0x10) {
      func_0x00010b199500();
      plVar2[1] = in_register_00005008;
      *plVar2 = param_1;
      if (extraout_x8_00 != 0) {
        do {
          func_0x00010b198bb4();
        } while (extraout_w10 != 0);
      }
      plVar2 = plVar2 + 2;
    }
    unaff_x19[1] = (long)plVar2;
  }
  uStack_38 = 1;
  FUN_10b196f64(auStack_40);
  return;
}



/* Entry: 10b196f64; end: 10b196f8f;  */

long FUN_10b196f64(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x00010b196550(param_1);
  }
  return param_1;
}



/* Entry: 10b196f90; end: 10b197007;  */

void FUN_10b196f90(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010b198c88();
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_10b121c1c(param_1 + 2,param_2 + 2);
  *(undefined8 *)(unaff_x19 + 0x288) = *(undefined8 *)(unaff_x20 + 0x288);
  *(undefined8 *)(unaff_x19 + 0x290) = *(undefined8 *)(unaff_x20 + 0x290);
  *(undefined8 *)(unaff_x20 + 0x290) = 0;
  *(undefined8 *)(unaff_x20 + 0x288) = 0;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x2a0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x298);
  *(undefined8 *)(unaff_x19 + 0x2a8) = *(undefined8 *)(unaff_x20 + 0x2a8);
  *(undefined8 *)(unaff_x19 + 0x2a0) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x298) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x298) = 0;
  *(undefined8 *)(unaff_x20 + 0x2a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2a0) = 0;
  return;
}



/* Entry: 10b197008; end: 10b19700b;  */

void FUN_10b197008(long *param_1)

{
  *param_1 = (long)(PTR___ZTVNSt3__117__assoc_sub_stateE_110346b28 + 0x10);
  func_0x000107c60d50(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  func_0x000107c60c18(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__114__shared_countD2Ev_110346530)(param_1);
  return;
}



/* Entry: 10b19700c; end: 10b19701f;  */

void FUN_10b19700c(void)

{
  func_0x000107c28060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b197020; end: 10b19708f;  */

long * FUN_10b197020(long *param_1)

{
  long lVar1;
  code *extraout_x8;
  long extraout_x9;
  int extraout_w11;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    do {
      func_0x00010b198ec4();
    } while (extraout_w11 != 0);
    if (extraout_x9 == 0) {
      func_0x00010b198edc();
      (*extraout_x8)();
    }
  }
  return param_1;
}



/* Entry: 10b197090; end: 10b1970a3;  */

void FUN_10b197090(void)

{
  func_0x00010b197060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


