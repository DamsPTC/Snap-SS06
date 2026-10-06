/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10732a444; end: 10732a467;  */

void FUN_10732a444(long param_1)

{
  func_0x000107345acc();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10732a468; end: 10732a487;  */

void FUN_10732a468(long param_1)

{
  if (*(char *)(param_1 + 0x1f8) == '\x01') {
    func_0x00010724b374();
  }
  return;
}



/* Entry: 10732a488; end: 10732a4e7;  */

/* WARNING: Possible PIC construction at 0x00010732a4bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010732a4c0) */

void FUN_10732a488(long param_1)

{
  func_0x0001072c91e8(param_1 + 0x110);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xf8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xe0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 200);
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    func_0x000107c60ca0();
  }
  return;
}



/* Entry: 10732a4e8; end: 10732a63b;  */

undefined *** FUN_10732a4e8(undefined ***param_1,undefined8 *param_2,long *param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined ***pppuVar3;
  long *plVar4;
  ulong extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined1 auStack_2f8 [8];
  long lStack_2f0;
  undefined1 **ppuStack_2e0;
  undefined8 uStack_2d8;
  undefined **ppuStack_2c8;
  undefined8 *puStack_2c0;
  long *plStack_2b8;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  undefined **ppuStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  long lStack_288;
  undefined8 uStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long alStack_260 [32];
  long lStack_160;
  undefined8 uStack_158;
  undefined1 *puStack_120;
  code *pcStack_118;
  long *plStack_f0;
  undefined8 auStack_d9 [4];
  char cStack_b8;
  undefined **appuStack_b0 [14];
  byte bStack_40;
  
  plVar4 = param_3;
  func_0x000107344b40(param_1);
  func_0x0001073458d4();
  plStack_f0 = plVar4;
  func_0x0001073466dc();
  uVar2 = cStack_b8 == '\x01';
  if ((bool)uVar2) {
    func_0x0001073453b0();
    if ((extraout_x8 & 1) == 0) {
      func_0x000107345398();
      func_0x000107347824();
      func_0x0001073460f0();
    }
    func_0x0001073479b8();
    if ((int)param_1 == 0) {
      func_0x00010734737c();
      func_0x00010732a94c();
      param_3 = (long *)(ulong)(((ulong)param_2 & 1) != 0);
    }
    else {
      func_0x000107345324(1);
      func_0x0001073457bc();
      func_0x000107346144();
      if ((bStack_40 & 1) == 0) {
        func_0x000107345370();
LAB_10732a5b8:
        func_0x000107346750();
      }
      else {
        param_1 = appuStack_b0;
        param_2 = auStack_d9;
        func_0x00010732a934();
        if (((ulong)param_2 & 1) == 0) {
          func_0x000107345360();
          goto LAB_10732a5b8;
        }
        param_3 = (long *)0x1;
      }
      func_0x000107346568();
    }
    func_0x000107345728();
    uVar2 = (int)param_3 == 0;
  }
  else {
    param_3 = (long *)0x0;
  }
  func_0x0001073466d4();
  func_0x0001073446ac();
  if ((bool)uVar2) {
    func_0x000107345dfc();
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107346258();
  func_0x000107296ad0();
  func_0x000107345728();
  func_0x0001073466d4();
  func_0x000107345604();
  pcStack_118 = FUN_10732a63c;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x0001073448a8();
  uStack_158 = extraout_x8_00;
  if ((char)plVar4[2] == '\x01' && plVar4[1] != 0) {
    puStack_2b0 = &UNK_10f40a5d5;
    uStack_2a8 = 0xc;
    lStack_290 = *plVar4;
    ppuStack_2a0 = (undefined **)*param_2;
    uStack_298 = param_2[1];
    lStack_288 = plVar4[1];
    func_0x00010734710c(alStack_260,0);
    func_0x000107346a88(&uStack_280);
    uVar1 = lStack_270 + lStack_160;
    ppuStack_2c8 = &puStack_2b0;
    uVar2 = uVar1 == 0x25;
    puStack_2c0 = param_2;
    plStack_2b8 = plVar4;
    if (0x25 < uVar1) {
      uVar2 = uVar1 == 0x51;
      if (0x51 < uVar1) {
        uStack_280 = (undefined **)*param_2;
        lStack_278 = param_2[1];
        lStack_270 = *plVar4;
        lStack_268 = plVar4[1];
        func_0x0001003a9204(&ppuStack_2a0,&UNK_10f40a5d5,0xc,0xdd,&uStack_280);
        func_0x0001072625b4(param_3,&ppuStack_2a0);
        pppuVar3 = &ppuStack_2a0;
        goto LAB_10732a8c4;
      }
      func_0x000107345808(&uStack_280);
      *(short *)uStack_280 = (short)uVar1;
      *(undefined1 *)((long)uStack_280 + uVar1 + 2) = 0;
      func_0x00010732a9a0(&ppuStack_2c8,(undefined2 *)((long)uStack_280 + 2),0x52);
      param_3[1] = lStack_278;
      *param_3 = (long)uStack_280;
      if (lStack_278 != 0) {
        do {
          func_0x000107345624();
        } while (extraout_w10_00 != 0);
      }
      goto LAB_10732a840;
    }
    uStack_280 = (undefined **)
                 (CONCAT62((int6)((ulong)uStack_280 >> 0x10),(short)uVar1) & 0xffffffffff00ffff);
    *(undefined1 *)((long)&uStack_280 + 2 + uVar1) = 0;
    pppuVar3 = &ppuStack_2c8;
    func_0x00010732a9a0(pppuVar3,(long)&uStack_280 + 2,0x26);
  }
  else {
    ppuStack_2c8 = (undefined **)&UNK_10f40a5e2;
    puStack_2c0 = (undefined8 *)0x9;
    ppuStack_2a0 = (undefined **)*param_2;
    uStack_298 = param_2[1];
    func_0x00010734710c(alStack_260,0);
    func_0x000107346a88(&uStack_280);
    uVar1 = lStack_270 + lStack_160;
    uVar2 = uVar1 == 0x25;
    if (0x25 < uVar1) {
      uVar2 = uVar1 == 0x51;
      if (0x51 < uVar1) {
        ppuStack_2a0 = (undefined **)*param_2;
        uStack_298 = param_2[1];
        func_0x000107347ba0(&uStack_280,&UNK_10f40a5e2,9);
        func_0x0001072625b4(param_3,&uStack_280);
        pppuVar3 = (undefined ***)&uStack_280;
LAB_10732a8c4:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pppuVar3);
        goto LAB_10732a8c8;
      }
      func_0x000107345808(&uStack_280);
      *(short *)uStack_280 = (short)uVar1;
      *(undefined1 *)((long)uStack_280 + uVar1 + 2) = 0;
      func_0x00010732a9f4(&ppuStack_2c8,param_2,(undefined2 *)((long)uStack_280 + 2),0x52);
      param_3[1] = lStack_278;
      *param_3 = (long)uStack_280;
      if (lStack_278 != 0) {
        do {
          func_0x000107345624();
        } while (extraout_w10 != 0);
      }
LAB_10732a840:
      func_0x0001073455a8(2);
      pppuVar3 = (undefined ***)&uStack_280;
      func_0x000104c2f784(pppuVar3);
      goto LAB_10732a8c8;
    }
    uStack_280 = (undefined **)
                 (CONCAT62((int6)((ulong)uStack_280 >> 0x10),(short)uVar1) & 0xffffffffff00ffff);
    *(undefined1 *)((long)&uStack_280 + 2 + uVar1) = 0;
    pppuVar3 = &ppuStack_2c8;
    func_0x00010732a9f4(pppuVar3,param_2,(long)&uStack_280 + 2,0x26);
  }
  param_3[1] = lStack_278;
  *param_3 = (long)uStack_280;
  param_3[3] = lStack_268;
  param_3[2] = lStack_270;
  param_3[4] = alStack_260[0];
  func_0x0001073455a8(1);
LAB_10732a8c8:
  func_0x0001073447cc(uStack_158);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x000104c2f784(&uStack_280);
    func_0x000107345604();
    uStack_2d8 = 0x10732a90c;
    ppuStack_2e0 = &puStack_120;
    FUN_10732aa50(auStack_2f8);
    return (undefined ***)(lStack_2f0 + 0x38);
  }
  return pppuVar3;
}



/* Entry: 10732a63c; end: 10732a90b;  */

undefined *** FUN_10732a63c(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined ***pppuVar3;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *unaff_x19;
  undefined1 auStack_1e8 [8];
  long lStack_1e0;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  undefined **ppuStack_1b8;
  undefined8 *puStack_1b0;
  long *plStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined **ppuStack_190;
  undefined8 uStack_188;
  long lStack_180;
  long lStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 auStack_150 [32];
  long lStack_50;
  undefined8 uStack_48;
  
  func_0x0001073448a8();
  uStack_48 = extraout_x8;
  if ((char)param_3[2] == '\x01' && param_3[1] != 0) {
    puStack_1a0 = &UNK_10f40a5d5;
    uStack_198 = 0xc;
    lStack_180 = *param_3;
    ppuStack_190 = (undefined **)*param_2;
    uStack_188 = param_2[1];
    lStack_178 = param_3[1];
    func_0x00010734710c(auStack_150,0);
    func_0x000107346a88(&uStack_170);
    uVar1 = lStack_160 + lStack_50;
    ppuStack_1b8 = &puStack_1a0;
    uVar2 = uVar1 == 0x25;
    puStack_1b0 = param_2;
    plStack_1a8 = param_3;
    if (0x25 < uVar1) {
      uVar2 = uVar1 == 0x51;
      if (0x51 < uVar1) {
        uStack_170 = (undefined **)*param_2;
        lStack_168 = param_2[1];
        lStack_160 = *param_3;
        lStack_158 = param_3[1];
        func_0x0001003a9204(&ppuStack_190,&UNK_10f40a5d5,0xc,0xdd,&uStack_170);
        func_0x0001072625b4();
        pppuVar3 = &ppuStack_190;
        goto LAB_10732a8c4;
      }
      func_0x000107345808(&uStack_170);
      *(short *)uStack_170 = (short)uVar1;
      *(undefined1 *)((long)uStack_170 + uVar1 + 2) = 0;
      func_0x00010732a9a0(&ppuStack_1b8,(undefined2 *)((long)uStack_170 + 2),0x52);
      unaff_x19[1] = lStack_168;
      *unaff_x19 = uStack_170;
      if (lStack_168 != 0) {
        do {
          func_0x000107345624();
        } while (extraout_w10_00 != 0);
      }
      goto LAB_10732a840;
    }
    uStack_170 = (undefined **)
                 (CONCAT62((int6)((ulong)uStack_170 >> 0x10),(short)uVar1) & 0xffffffffff00ffff);
    *(undefined1 *)((long)&uStack_170 + 2 + uVar1) = 0;
    pppuVar3 = &ppuStack_1b8;
    func_0x00010732a9a0(pppuVar3,(long)&uStack_170 + 2,0x26);
  }
  else {
    ppuStack_1b8 = (undefined **)&UNK_10f40a5e2;
    puStack_1b0 = (undefined8 *)0x9;
    ppuStack_190 = (undefined **)*param_2;
    uStack_188 = param_2[1];
    func_0x00010734710c(auStack_150,0);
    func_0x000107346a88(&uStack_170);
    uVar1 = lStack_160 + lStack_50;
    uVar2 = uVar1 == 0x25;
    if (0x25 < uVar1) {
      uVar2 = uVar1 == 0x51;
      if (0x51 < uVar1) {
        ppuStack_190 = (undefined **)*param_2;
        uStack_188 = param_2[1];
        func_0x000107347ba0(&uStack_170,&UNK_10f40a5e2,9);
        func_0x0001072625b4();
        pppuVar3 = (undefined ***)&uStack_170;
LAB_10732a8c4:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pppuVar3);
        goto LAB_10732a8c8;
      }
      func_0x000107345808(&uStack_170);
      *(short *)uStack_170 = (short)uVar1;
      *(undefined1 *)((long)uStack_170 + uVar1 + 2) = 0;
      func_0x00010732a9f4(&ppuStack_1b8,param_2,(undefined2 *)((long)uStack_170 + 2),0x52);
      unaff_x19[1] = lStack_168;
      *unaff_x19 = uStack_170;
      if (lStack_168 != 0) {
        do {
          func_0x000107345624();
        } while (extraout_w10 != 0);
      }
LAB_10732a840:
      func_0x0001073455a8(2);
      pppuVar3 = (undefined ***)&uStack_170;
      func_0x000104c2f784(pppuVar3);
      goto LAB_10732a8c8;
    }
    uStack_170 = (undefined **)
                 (CONCAT62((int6)((ulong)uStack_170 >> 0x10),(short)uVar1) & 0xffffffffff00ffff);
    *(undefined1 *)((long)&uStack_170 + 2 + uVar1) = 0;
    pppuVar3 = &ppuStack_1b8;
    func_0x00010732a9f4(pppuVar3,param_2,(long)&uStack_170 + 2,0x26);
  }
  unaff_x19[1] = lStack_168;
  *unaff_x19 = uStack_170;
  unaff_x19[3] = lStack_158;
  unaff_x19[2] = lStack_160;
  unaff_x19[4] = auStack_150[0];
  func_0x0001073455a8(1);
LAB_10732a8c8:
  func_0x0001073447cc(uStack_48);
  if ((bool)uVar2) {
    return pppuVar3;
  }
  ___stack_chk_fail();
  func_0x000104c2f784(&uStack_170);
  func_0x000107345604();
  pcStack_1c8 = FUN_10732a90c;
  puStack_1d0 = &stack0xfffffffffffffff0;
  FUN_10732aa50(auStack_1e8);
  return (undefined ***)(lStack_1e0 + 0x38);
}



/* Entry: 10732a90c; end: 10732a99f;  */

long FUN_10732a90c(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  FUN_10732aa50(auStack_28);
  return lStack_20 + 0x38;
}



/* Entry: 10732a9a0; end: 10732aa23;  */

void FUN_10732a9a0(long *param_1,long param_2,long param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_40 = *(undefined8 *)param_1[1];
  uStack_38 = ((undefined8 *)param_1[1])[1];
  uStack_30 = *(undefined8 *)param_1[2];
  uStack_28 = ((undefined8 *)param_1[2])[1];
  func_0x000107268a34(param_2,param_3,*(undefined8 *)*param_1,((undefined8 *)*param_1)[1],0xdd,
                      &uStack_40);
  *(undefined1 *)(param_2 + param_3) = 0;
  return;
}



/* Entry: 10732aa24; end: 10732aa4f;  */

void FUN_10732aa24(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *extraout_x8;
  
  if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010732aa40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x30))(param_1,param_2,param_3,param_4);
    return;
  }
  func_0x000104bfeb48();
  plVar2 = param_1;
  plVar3 = param_2;
  FUN_10732aab4();
  if (((ulong)plVar3 & 1) != 0) {
    FUN_10732acc0(param_1[1] + (long)plVar2 * 0x48,param_2);
  }
  lVar1 = param_1[1];
  *extraout_x8 = *param_1 + (long)plVar2;
  extraout_x8[1] = lVar1 + (long)plVar2 * 0x48;
  *(char *)(extraout_x8 + 2) = (char)plVar3;
  return;
}



/* Entry: 10732aa50; end: 10732aab3;  */

void FUN_10732aa50(long *param_1,long *param_2,ulong param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  
  plVar2 = param_2;
  uVar3 = param_3;
  FUN_10732aab4();
  if ((uVar3 & 1) != 0) {
    FUN_10732acc0(param_2[1] + (long)plVar2 * 0x48,param_3);
  }
  lVar1 = param_2[1];
  *param_1 = *param_2 + (long)plVar2;
  param_1[1] = lVar1 + (long)plVar2 * 0x48;
  *(char *)(param_1 + 2) = (char)uVar3;
  return;
}



/* Entry: 10732aab4; end: 10732ab1f;  */

void FUN_10732aab4(ulong param_1)

{
  uint extraout_w8;
  long unaff_x28;
  
  func_0x0001073459d0();
  func_0x000107344bd4();
  func_0x000107344ad0();
  while( true ) {
    func_0x000107344e30();
    while (unaff_x28 != 0) {
      func_0x000107344ea8();
      FUN_10732ab7c();
      if ((param_1 & 1) != 0) {
        return;
      }
      func_0x00010734706c();
    }
    func_0x0001073450b0();
    if ((extraout_w8 & 1) != 0) break;
    func_0x000107347060();
  }
  func_0x0001073460c8();
  FUN_10732ab20();
  func_0x00010734762c();
  return;
}



/* Entry: 10732ab20; end: 10732ab7b;  */

void FUN_10732ab20(void)

{
  undefined1 in_ZR;
  long extraout_x9;
  
  func_0x000107345658();
  func_0x000100061de0();
  func_0x0001073464fc();
  if ((extraout_x9 == 0) && (func_0x000107346ad8(), !(bool)in_ZR)) {
    FUN_10732abec();
    func_0x000107345130();
  }
  func_0x000107345560();
  func_0x00010734475c();
  return;
}



/* Entry: 10732ab7c; end: 10732ab87;  */

bool FUN_10732ab7c(undefined8 *param_1,long param_2)

{
  long unaff_x20;
  
  func_0x000104c2fe38(param_2,*param_1,param_2 + 0x38);
  func_0x000104c345b0();
  func_0x000104c2fe38();
  return unaff_x20 == param_2;
}



/* Entry: 10732ab88; end: 10732abeb;  */

void FUN_10732ab88(void)

{
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x000107348074();
  func_0x000107344ef0();
  FUN_107324d80();
  func_0x000107346698();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x000107346970();
      func_0x000107344cd8();
      func_0x000107344734();
      func_0x000107346680();
      FUN_10732ac1c();
    }
    func_0x000107347df8();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10732abec; end: 10732ac1b;  */

undefined * FUN_10732abec(undefined *param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 extraout_x8;
  undefined *puVar4;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  if ((8 < uVar3) &&
     (uVar1 = uVar3 * 0x19 + *(long *)(param_1 + 0x18) * -0x20 == 0,
     (ulong)(*(long *)(param_1 + 0x18) * 0x20) <= uVar3 * 0x19)) {
    func_0x000107344b50();
    puVar2 = &UNK_1109a38d0;
    func_0x00010734796c();
    func_0x0001073447cc(extraout_x8);
    if ((bool)uVar1) {
      return param_1;
    }
    ___stack_chk_fail();
    puVar4 = *(undefined **)(puVar2 + 0x30);
    if (puVar4 == (undefined *)0xffffffffffffffff) {
      puVar4 = puVar2;
      func_0x000104c2fcd4();
      func_0x000104c2fcf0(puVar2);
      func_0x0001001030f4(puVar4,puVar4 + (long)puVar2);
      func_0x000104c343b0();
      func_0x000104c2ffc0();
    }
    return puVar4;
  }
  func_0x000107348074(param_1,uVar3 << 1 | 1);
  func_0x000107344ef0();
  FUN_107324d80();
  func_0x000107346698();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x000107346970();
      func_0x000107344cd8();
      func_0x000107344734();
      func_0x000107346680();
      FUN_10732ac1c();
    }
    func_0x000107347df8();
  }
  if (unaff_x23 != 0) {
    puVar2 = (undefined *)(unaff_x22 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar2);
    return puVar2;
  }
  return param_1;
}



/* Entry: 10732ac1c; end: 10732ac7f;  */

undefined8 FUN_10732ac1c(void)

{
  undefined8 unaff_x19;
  
  func_0x0001073465a4();
  func_0x00010732ac40();
  func_0x000107346a38();
  func_0x00010726ee94();
  func_0x000107345ab0();
  return unaff_x19;
}



/* Entry: 10732ac80; end: 10732acb7;  */

undefined * FUN_10732ac80(undefined *param_1)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined8 extraout_x8;
  undefined *puVar2;
  
  func_0x000107344b50();
  puVar1 = &UNK_1109a38d0;
  func_0x00010734796c();
  func_0x0001073447cc(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar2 = *(undefined **)(puVar1 + 0x30);
  if (puVar2 == (undefined *)0xffffffffffffffff) {
    puVar2 = puVar1;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(puVar1);
    func_0x0001001030f4(puVar2,puVar2 + (long)puVar1);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return puVar2;
}



/* Entry: 10732acb8; end: 10732acbf;  */

long FUN_10732acb8(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x30);
  if (lVar1 == -1) {
    lVar1 = param_2;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(param_2);
    func_0x0001001030f4(lVar1,lVar1 + param_2);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return lVar1;
}



/* Entry: 10732acc0; end: 10732acd7;  */

void FUN_10732acc0(long param_1)

{
  func_0x000104c2fe00();
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 10732acd8; end: 10732acdb;  */

void FUN_10732acd8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  uVar3 = *param_2;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  *param_2 = &UNK_10e52b660;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Entry: 10732acdc; end: 10732ad0f;  */

long FUN_10732acdc(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_10732ad10(param_1);
    func_0x0001073457b0();
  }
  return param_1;
}



/* Entry: 10732ad10; end: 10732ad87;  */

void FUN_10732ad10(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = (char *)*param_1;
  lVar1 = param_1[1];
  for (lVar2 = param_1[2]; lVar2 != 0; lVar2 = lVar2 + -1) {
    if (-1 < *pcVar3) {
      func_0x00010732ac5c(lVar1);
    }
    pcVar3 = pcVar3 + 1;
    lVar1 = lVar1 + 0x48;
  }
  return;
}



/* Entry: 10732ad88; end: 10732ad8f;  */

void FUN_10732ad88(void)

{
  return;
}



/* Entry: 10732ad90; end: 10732adaf;  */

void FUN_10732ad90(undefined8 *param_1)

{
  func_0x000107345a98();
  *param_1 = &PTR_FUN_1109a14e0;
  return;
}



/* Entry: 10732adb0; end: 10732addf;  */

void FUN_10732adb0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_1109a14e0;
  return;
}



/* Entry: 10732ade0; end: 10732ae07;  */

void FUN_10732ade0(undefined8 param_1)

{
  func_0x000107345760();
  func_0x000107345650(param_1,&PTR_DAT_1109a1540);
  func_0x000107344bc4();
  return;
}



/* Entry: 10732ae08; end: 10732ae13;  */

undefined ** FUN_10732ae08(void)

{
  return &PTR_DAT_1109a1540;
}



/* Entry: 10732ae14; end: 10732ae9b;  */

void FUN_10732ae14(long param_1,long param_2)

{
  long unaff_x19;
  
  func_0x000107346b2c();
  if (param_1 == 0) {
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
  }
  else if (param_1 == param_2) {
    func_0x0001073448d0();
  }
  else {
    func_0x000107344fa8();
    *(long *)(unaff_x19 + 0x18) = param_1;
  }
  return;
}



/* Entry: 10732ae9c; end: 10732b18b;  */

undefined8 * FUN_10732ae9c(undefined8 param_1,long param_2,undefined8 *param_3,long param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined4 extraout_w8;
  undefined8 extraout_x8;
  undefined4 extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *unaff_x19;
  undefined8 *puStack_2a0;
  long lStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 auStack_270 [56];
  undefined1 auStack_238 [32];
  undefined1 auStack_218 [120];
  undefined1 auStack_1a0 [32];
  undefined1 uStack_180;
  undefined1 uStack_168;
  undefined1 auStack_160 [64];
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [120];
  undefined1 auStack_88 [32];
  undefined1 uStack_68;
  undefined1 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = param_3;
  func_0x0001073448a8();
  uStack_278 = puVar5[1];
  uStack_280 = *puVar5;
  uStack_48 = extraout_x8;
  if (puVar5[1] != 0) {
    do {
      func_0x000107345624();
    } while (extraout_w10 != 0);
  }
  FUN_10732b55c(auStack_100,param_2);
  FUN_10732b5a4(auStack_88,auStack_100);
  uStack_68 = 0;
  uStack_50 = 0;
  func_0x0001073479dc(auStack_160);
  func_0x000107347e5c();
  FUN_10732b99c(auStack_120,auStack_160);
  FUN_10732b18c();
  FUN_10732c10c(auStack_120);
  func_0x000107347284();
  func_0x00010732c140(auStack_88);
  FUN_107331bd4(auStack_100);
  func_0x0001072aa2e8(&uStack_280);
  *unaff_x19 = &PTR_FUN_1109a3570;
  FUN_1073af260();
  puVar5 = unaff_x19 + 0x2c;
  func_0x00010725b034(puVar5);
  uVar2 = *(undefined8 *)unaff_x19[0x2c];
  lVar3 = ((undefined8 *)unaff_x19[0x2c])[1];
  unaff_x19[0x2e] = unaff_x19;
  unaff_x19[0x2f] = uVar2;
  unaff_x19[0x30] = lVar3;
  if (lVar3 != 0) {
    do {
      func_0x000107345624();
    } while (extraout_w10_00 != 0);
  }
  uStack_288 = param_3[1];
  uStack_290 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  FUN_10732b55c(auStack_218,param_2);
  FUN_10732c19c(auStack_1a0,auStack_218);
  uStack_180 = 0;
  uStack_168 = 0;
  func_0x0001073479dc(auStack_270);
  FUN_10732c32c(auStack_238,auStack_270);
  puVar6 = auStack_238;
  FUN_10732c798(unaff_x19 + 0x31,&uStack_290,auStack_1a0,puVar6);
  FUN_10732e454(auStack_238);
  func_0x0001073465e4();
  func_0x00010732c140(auStack_1a0);
  FUN_107331bd4(auStack_218);
  func_0x0001072aa2e8(&uStack_290);
  FUN_10732acd8(unaff_x19 + 0x5d);
  unaff_x19[0x61] = &UNK_10e52b660;
  unaff_x19[0x62] = 0;
  unaff_x19[100] = 0;
  unaff_x19[99] = 0;
  unaff_x19[0x65] = *(undefined8 *)(param_2 + 0x38);
  *(undefined4 *)(unaff_x19 + 0x66) = *(undefined4 *)(param_2 + 0x40);
  func_0x000107347e5c();
  uVar1 = extraout_w9;
  if ((bool)in_ZR) {
    uVar1 = extraout_w8;
  }
  *(undefined4 *)((long)unaff_x19 + 0x334) = uVar1;
  unaff_x19[0x67] = 0;
  unaff_x19[0x68] = puVar5;
  unaff_x19[0x69] = 0;
  puVar4 = unaff_x19 + 0x5d;
  FUN_10732b204();
  lStack_298 = param_4;
  while (puStack_2a0 = puVar4, puVar4 != (undefined8 *)0x0) {
    FUN_107355174(*(undefined8 *)(lStack_298 + 0x38));
    FUN_10732b22c(&puStack_2a0);
    puVar4 = puStack_2a0;
  }
  func_0x0001073447cc(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010725b238(unaff_x19 + 0x68);
    FUN_10732e4c0(unaff_x19 + 0x67);
    FUN_10732e514(unaff_x19 + 0x61);
    FUN_10732acdc(unaff_x19 + 0x5d);
    func_0x00010732e5a8(unaff_x19 + 0x31);
    func_0x00010724ae28(unaff_x19 + 0x2f);
    func_0x00010724b54c(puVar5);
    FUN_10732b264();
    func_0x000107347a34();
    func_0x000107345eec(&UNK_1109a3ab8);
    FUN_10732bff8(unaff_x19 + 0xb,puVar6);
    FUN_10732c03c(puVar4);
    func_0x00010726ed14(unaff_x19 + 0x29);
    unaff_x19[0x2b] = unaff_x19;
    return unaff_x19;
  }
  return unaff_x19;
}



/* Entry: 10732b18c; end: 10732b203;  */

long FUN_10732b18c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107345eec(&UNK_1109a3ab8);
  FUN_10732bff8(param_1 + 0x58,param_4);
  FUN_10732c03c();
  func_0x00010726ed14(param_1 + 0x148);
  *(long *)(param_1 + 0x158) = param_1;
  return param_1;
}



/* Entry: 10732b204; end: 10732b22b;  */

undefined1  [16] FUN_10732b204(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  FUN_10732e488(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 10732b22c; end: 10732b25f;  */

long * FUN_10732b22c(long *param_1)

{
  param_1[1] = param_1[1] + 0x48;
  *param_1 = *param_1 + 1;
  FUN_10732e488();
  return param_1;
}



/* Entry: 10732b260; end: 10732b263;  */

long FUN_10732b260(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010734730c(&UNK_1109a3f08);
  FUN_10732e5f0(lVar1 + 0x148);
  FUN_10732caac(param_1 + 0x78);
  FUN_10732e454(param_1 + 0x58);
  func_0x000107346dd4();
  func_0x000107346c60();
  return param_1;
}



/* Entry: 10732b264; end: 10732b2ab;  */

long FUN_10732b264(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010734730c(&UNK_1109a3ab8);
  func_0x00010732e640(lVar1 + 0x148);
  FUN_10732c054(param_1 + 0x78);
  FUN_10732c10c(param_1 + 0x58);
  func_0x000107346dd4();
  func_0x000107346c60();
  return param_1;
}



/* Entry: 10732b2ac; end: 10732b2af;  */

void FUN_10732b2ac(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puStack_30;
  long lStack_28;
  
  *param_1 = &PTR_FUN_1109a3570;
  puVar1 = param_1 + 0x5d;
  FUN_10732b204();
  puStack_30 = puVar1;
  lStack_28 = param_2;
  while (puStack_30 != (undefined8 *)0x0) {
    FUN_1073554b4(*(undefined8 *)(lStack_28 + 0x38));
    FUN_10732b22c(&puStack_30);
  }
  func_0x00010725b238(param_1 + 0x68);
  FUN_10732e4c0(param_1 + 0x67);
  FUN_10732e514(param_1 + 0x61);
  FUN_10732acdc(param_1 + 0x5d);
  func_0x00010732e5a8(param_1 + 0x31);
  func_0x00010724ae28(param_1 + 0x2f);
  func_0x00010724b54c(param_1 + 0x2c);
  FUN_10732b264(param_1);
  return;
}



/* Entry: 10732b2b0; end: 10732b2c3;  */

void FUN_10732b2b0(void)

{
  FUN_10732e68c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10732b2c4; end: 10732b51b;  */

void FUN_10732b2c4(long param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined1 *puVar2;
  long lVar3;
  long **pplVar4;
  undefined8 *puVar5;
  code *pcVar6;
  long **pplVar7;
  int extraout_w10;
  undefined1 *unaff_x20;
  long unaff_x21;
  undefined1 auStack_3e8 [504];
  char cStack_1f0;
  long *plStack_1a8;
  long lStack_1a0;
  undefined1 auStack_190 [16];
  long lStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined2 uStack_134;
  undefined1 uStack_132;
  long *plStack_130;
  long lStack_128;
  long **pplStack_120;
  undefined1 uStack_118;
  undefined4 uStack_100;
  undefined1 uStack_f8;
  long *plStack_b8;
  long lStack_b0;
  long **pplStack_a8;
  undefined1 uStack_a0;
  undefined1 auStack_78 [48];
  undefined8 uStack_48;
  
  func_0x0001073450dc();
  func_0x0001073449c4();
  pcVar6 = FUN_10732e7d8;
  FUN_10732e72c(param_1 + 0x170,FUN_10732e7d8,0);
  uStack_140 = 0x4008000000000000;
  uStack_132 = 1;
  uStack_134 = 0x100;
  uStack_138 = 0x2000;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_150 = 0x3f800000;
  lVar3 = unaff_x21 + 0x2e8;
  FUN_10732b204();
  lStack_180 = lVar3;
  while (pcStack_178 = pcVar6, lStack_180 != 0) {
    (**(code **)(**(long **)(pcVar6 + 0x38) + 0x88))(&plStack_b8);
    func_0x000107331050(&plStack_130,auStack_78);
    func_0x0001072bf928(&plStack_1a8,&plStack_130,*unaff_x20,*(undefined4 *)(unaff_x20 + 4),
                        *(undefined4 *)(unaff_x20 + 8),&uStack_140);
    func_0x0001072c8ec0(auStack_190,&plStack_1a8);
    func_0x0001072c8f3c(&plStack_1a8);
    FUN_107327aec(&plStack_130);
    FUN_10732e918(&plStack_130,auStack_190);
    FUN_107331174(&uStack_170,pcVar6);
    FUN_10732e934();
    func_0x000107331610(&plStack_130);
    func_0x0001072c8f3c(auStack_190);
    func_0x000107331634(&plStack_b8);
    FUN_10732b22c(&lStack_180);
    pcVar6 = pcStack_178;
  }
  FUN_10733177c(&plStack_130,&uStack_170);
  FUN_10732e958(&plStack_1a8);
  pplVar4 = &plStack_130;
  FUN_107331a9c();
  plStack_b8 = plStack_1a8;
  lStack_b0 = lStack_1a0;
  if (lStack_1a0 != 0) {
    do {
      func_0x000107345624();
    } while (extraout_w10 != 0);
  }
  func_0x0001073472c4(*(undefined8 *)(*plStack_1a8 + 0x30));
  lStack_b0 = 0;
  uStack_a0 = 1;
  plStack_130 = plStack_1a8;
  lStack_128 = lStack_1a0;
  plStack_b8 = (long *)0x0;
  uStack_118 = 1;
  uStack_100 = 0;
  uStack_f8 = 1;
  pplVar7 = &plStack_130;
  pplStack_120 = pplVar4;
  pplStack_a8 = pplVar4;
  FUN_10732a3b8();
  FUN_10732a3d0(&plStack_130);
  FUN_10732a444(&plStack_b8);
  FUN_107331b20(&plStack_1a8);
  func_0x000107331b44(&uStack_170);
  func_0x0001073447cc(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107348028();
  FUN_10732a3d0();
  FUN_10732a444(&plStack_b8);
  FUN_107331b20(&plStack_1a8);
  puVar5 = &uStack_170;
  func_0x000107331b44();
  func_0x000107345604();
  if (*(int *)(puVar5 + 0x66) == 1) {
    func_0x000107344818();
    func_0x000107346e2c(auStack_3e8);
    uVar1 = cStack_1f0 == '\x01';
    if ((bool)uVar1) {
      func_0x00010734788c(*(undefined8 *)(*(long *)puVar5[1] + 0x20));
    }
    puVar2 = auStack_3e8;
    FUN_10732a468();
    func_0x0001073446ac();
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      func_0x000107345834();
      FUN_10732a468();
      func_0x000107345604();
      if (puVar2[0x50] != '\x01') {
        return;
      }
      goto LAB_107346324;
    }
  }
  else {
    if (*(int *)(puVar5 + 0x66) != 0) {
      return;
    }
    func_0x000107344818();
    func_0x000107346e2c(auStack_3e8);
    uVar1 = cStack_1f0 == '\x01';
    if ((bool)uVar1) {
      func_0x00010734788c(*(undefined8 *)(*(long *)puVar5[0x32] + 0x20));
    }
    puVar2 = auStack_3e8;
    FUN_10732a468();
    func_0x0001073446ac();
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      func_0x000107345834();
      FUN_10732a468();
      func_0x000107345604();
      if (puVar2[0x50] != '\x01') {
        return;
      }
LAB_107346324:
                    /* WARNING: Could not recover jumptable at 0x00010734633c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(puVar2 + 8) + 0x28))(*(long **)(puVar2 + 8),puVar2 + 0x38,pplVar7);
      return;
    }
  }
  return;
}



/* Entry: 10732b51c; end: 10732b55b;  */

void FUN_10732b51c(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_238 [504];
  char cStack_40;
  
  if (*(int *)(param_1 + 0x330) == 1) {
    func_0x000107344818();
    func_0x000107346e2c(auStack_238);
    uVar1 = cStack_40 == '\x01';
    if ((bool)uVar1) {
      func_0x00010734788c(*(undefined8 *)(**(long **)(param_1 + 8) + 0x20));
    }
    puVar2 = auStack_238;
    FUN_10732a468();
    func_0x0001073446ac();
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      func_0x000107345834();
      FUN_10732a468();
      func_0x000107345604();
      if (puVar2[0x50] != '\x01') {
        return;
      }
      goto LAB_107346324;
    }
  }
  else {
    if (*(int *)(param_1 + 0x330) != 0) {
      return;
    }
    func_0x000107344818();
    func_0x000107346e2c(auStack_238);
    uVar1 = cStack_40 == '\x01';
    if ((bool)uVar1) {
      func_0x00010734788c(*(undefined8 *)(**(long **)(param_1 + 400) + 0x20));
    }
    puVar2 = auStack_238;
    FUN_10732a468();
    func_0x0001073446ac();
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      func_0x000107345834();
      FUN_10732a468();
      func_0x000107345604();
      if (puVar2[0x50] != '\x01') {
        return;
      }
LAB_107346324:
                    /* WARNING: Could not recover jumptable at 0x00010734633c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(puVar2 + 8) + 0x28))(*(long **)(puVar2 + 8),puVar2 + 0x38,param_2);
      return;
    }
  }
  return;
}



/* Entry: 10732b55c; end: 10732b5a3;  */

void FUN_10732b55c(long param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107345658();
  func_0x000104c2fe00();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(unaff_x20 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  func_0x00010028b0c8(param_1 + 0x50,unaff_x20 + 0x50);
  return;
}



/* Entry: 10732b5a4; end: 10732b5db;  */

void FUN_10732b5a4(void)

{
  func_0x0001073451ec();
  func_0x000107345fdc();
  FUN_10732b5dc();
  func_0x000107346384();
  return;
}



/* Entry: 10732b5dc; end: 10732b5fb;  */

void FUN_10732b5dc(void)

{
  func_0x000107346a68();
  FUN_10732b55c();
  return;
}



/* Entry: 10732b5fc; end: 10732b5ff;  */

void FUN_10732b5fc(void)

{
  func_0x000107346a68();
  FUN_107331bd4();
  return;
}



/* Entry: 10732b600; end: 10732b613;  */

void FUN_10732b600(void)

{
  FUN_10732b6a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10732b614; end: 10732b647;  */

undefined8 FUN_10732b614(undefined8 param_1)

{
  func_0x000107345fdc();
  func_0x00010732b6c8();
  return param_1;
}



/* Entry: 10732b648; end: 10732b673;  */

void FUN_10732b648(long param_1,undefined8 param_2)

{
  func_0x000107346a68(param_2,param_1 + 8);
  FUN_10732b55c();
  return;
}



/* Entry: 10732b674; end: 10732b69b;  */

void FUN_10732b674(undefined8 param_1)

{
  func_0x000107345760();
  func_0x000107345650(param_1,&PTR_DAT_1109a3610);
  func_0x000107344bc4();
  return;
}



/* Entry: 10732b69c; end: 10732b6a7;  */

undefined ** FUN_10732b69c(void)

{
  return &PTR_DAT_1109a3610;
}



/* Entry: 10732b6a8; end: 10732b6e7;  */

void FUN_10732b6a8(void)

{
  func_0x000107346a68();
  FUN_107331bd4();
  return;
}



/* Entry: 10732b6e8; end: 10732b733;  */

void FUN_10732b6e8(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long unaff_x19;
  undefined8 *puVar2;
  ulong uStack_288;
  undefined1 auStack_280 [64];
  undefined1 auStack_220 [512];
  
  puVar1 = auStack_220;
  func_0x0001073447e0();
  FUN_10732b734(auStack_220);
  func_0x000107346020();
  func_0x00010732b980();
  func_0x00010724b374();
  func_0x00010734471c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x0001073447e0();
  func_0x000107526c60();
  uStack_288 = *(ulong *)(puVar1 + 0x38) / 1000;
  FUN_10732b7f0(auStack_280,&UNK_10f40a5f4,0x1b,&uStack_288);
  func_0x00010729515c(unaff_x19 + 0x170);
  func_0x000104c2f714();
  puVar2 = (undefined8 *)(puVar1 + 0x60);
  while (puVar2 = (undefined8 *)*puVar2, puVar2 != (undefined8 *)0x0) {
    func_0x00010060413c(unaff_x19 + 0x1d0,puVar2 + 2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  }
  func_0x00010734471c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000104c2f714(auStack_280);
    func_0x00010724b374();
    func_0x000107345614();
    func_0x0001073450dc();
    FUN_10732b824();
    func_0x00010734529c();
    FUN_10732b870();
    return;
  }
  return;
}



/* Entry: 10732b734; end: 10732b7ef;  */

void FUN_10732b734(long param_1)

{
  undefined1 in_ZR;
  long unaff_x19;
  long *plVar1;
  ulong uStack_68;
  undefined1 auStack_60 [64];
  
  func_0x0001073447e0();
  func_0x000107526c60();
  uStack_68 = *(ulong *)(param_1 + 0x38) / 1000;
  FUN_10732b7f0(auStack_60,&UNK_10f40a5f4,0x1b,&uStack_68);
  func_0x00010729515c(unaff_x19 + 0x170);
  func_0x000104c2f714();
  plVar1 = (long *)(param_1 + 0x60);
  while (plVar1 = (long *)*plVar1, plVar1 != (long *)0x0) {
    func_0x00010060413c(unaff_x19 + 0x1d0,plVar1 + 2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  }
  func_0x00010734471c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000104c2f714(auStack_60);
    func_0x00010724b374();
    func_0x000107345614();
    func_0x0001073450dc();
    FUN_10732b824();
    func_0x00010734529c();
    FUN_10732b870();
    return;
  }
  return;
}



/* Entry: 10732b7f0; end: 10732b823;  */

void FUN_10732b7f0(void)

{
  func_0x0001073450dc();
  FUN_10732b824();
  func_0x00010734529c();
  FUN_10732b870();
  return;
}



/* Entry: 10732b824; end: 10732b86f;  */

long FUN_10732b824(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long lVar2;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  int extraout_w10;
  undefined8 *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  
  lVar2 = param_1;
  func_0x000107344b40(param_2);
  func_0x0001073474dc();
  func_0x0001073452d4(0);
  func_0x000107346a88();
  func_0x0001073456e0();
  if ((bool)in_ZR) {
    return extraout_x9 + extraout_x8;
  }
  ___stack_chk_fail();
  func_0x000107346d60();
  func_0x0001073447e0();
  uVar1 = param_3 == 0x25;
  uStack_198 = extraout_x8_00;
  if (param_3 < 0x26) {
    func_0x000107345f24();
    FUN_10732b940();
    unaff_x19[1] = uStack_1b8;
    *unaff_x19 = uStack_1c0;
    unaff_x19[3] = uStack_1a8;
    unaff_x19[2] = uStack_1b0;
    unaff_x19[4] = uStack_1a0;
    func_0x0001073455a8(1);
    param_5 = unaff_x20;
  }
  else {
    uVar1 = unaff_x21 == 0x51;
    if (unaff_x21 < 0x52) {
      func_0x000107345808(&uStack_1c0);
      func_0x000107346038();
      func_0x00010734745c();
      FUN_10732b940();
      func_0x00010734744c();
      if (extraout_x8_01 != 0) {
        do {
          func_0x000107345624();
        } while (extraout_w10 != 0);
      }
      func_0x000107345348();
      param_5 = param_1;
    }
    else {
      FUN_10732b960(&uStack_1c0,param_5);
      func_0x000107346020();
      func_0x0001072625b4();
      func_0x000107345944();
    }
  }
  func_0x0001073447cc(uStack_198);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x000107345740();
    func_0x000104c2f784();
    func_0x000107345604();
    func_0x000107346008();
    func_0x0001072ba760();
    *(undefined1 *)((long)unaff_x19 + lVar2) = 0;
    return param_5;
  }
  return param_5;
}



/* Entry: 10732b870; end: 10732b93f;  */

void FUN_10732b870(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 uVar1;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  undefined8 *unaff_x19;
  ulong unaff_x21;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107346d60();
  func_0x0001073447e0();
  uVar1 = param_3 == 0x25;
  uStack_38 = extraout_x8;
  if (param_3 < 0x26) {
    func_0x000107345f24();
    FUN_10732b940();
    unaff_x19[1] = uStack_58;
    *unaff_x19 = uStack_60;
    unaff_x19[3] = uStack_48;
    unaff_x19[2] = uStack_50;
    unaff_x19[4] = uStack_40;
    func_0x0001073455a8(1);
  }
  else {
    uVar1 = unaff_x21 == 0x51;
    if (unaff_x21 < 0x52) {
      func_0x000107345808(&uStack_60);
      func_0x000107346038();
      func_0x00010734745c();
      FUN_10732b940();
      func_0x00010734744c();
      if (extraout_x8_00 != 0) {
        do {
          func_0x000107345624();
        } while (extraout_w10 != 0);
      }
      func_0x000107345348();
    }
    else {
      FUN_10732b960(&uStack_60,param_5);
      func_0x000107346020();
      func_0x0001072625b4();
      func_0x000107345944();
    }
  }
  func_0x0001073447cc(uStack_38);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x000107345740();
    func_0x000104c2f784();
    func_0x000107345604();
    func_0x000107346008();
    func_0x0001072ba760();
    *(undefined1 *)((long)unaff_x19 + param_2) = 0;
    return;
  }
  return;
}



/* Entry: 10732b940; end: 10732b95f;  */

void FUN_10732b940(undefined8 param_1,long param_2)

{
  long unaff_x19;
  
  func_0x000107346008();
  func_0x0001072ba760();
  *(undefined1 *)(unaff_x19 + param_2) = 0;
  return;
}



/* Entry: 10732b960; end: 10732b99b;  */

void FUN_10732b960(undefined8 param_1,undefined8 param_2)

{
  func_0x0001073476f8();
  func_0x0001003a9204(param_1,param_2,4);
  return;
}



/* Entry: 10732b99c; end: 10732b9d7;  */

void FUN_10732b99c(void)

{
  func_0x0001073451ec();
  __Znwm(0x48);
  FUN_10732b9d8();
  func_0x000107346384();
  return;
}



/* Entry: 10732b9d8; end: 10732b9f7;  */

void FUN_10732b9d8(void)

{
  func_0x000107346a24();
  FUN_10732ba98();
  return;
}



/* Entry: 10732b9f8; end: 10732b9fb;  */

void FUN_10732b9f8(void)

{
  func_0x000107346a24();
  func_0x000104c2f714();
  return;
}



/* Entry: 10732b9fc; end: 10732ba0f;  */

void FUN_10732b9fc(void)

{
  func_0x00010732bab4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10732ba10; end: 10732ba37;  */

undefined8 FUN_10732ba10(void)

{
  undefined8 unaff_x19;
  
  __Znwm(0x48);
  func_0x000107346a24();
  func_0x00010732baf4();
  return unaff_x19;
}



/* Entry: 10732ba38; end: 10732ba63;  */

void FUN_10732ba38(long param_1,undefined8 param_2)

{
  func_0x000107346a24(param_2,param_1 + 8);
  func_0x00010732baf4();
  return;
}



/* Entry: 10732ba64; end: 10732ba8b;  */

void FUN_10732ba64(undefined8 param_1)

{
  func_0x000107345760();
  func_0x000107345650(param_1,&PTR_DAT_1109a3690);
  func_0x000107344bc4();
  return;
}



/* Entry: 10732ba8c; end: 10732ba97;  */

undefined ** FUN_10732ba8c(void)

{
  return &PTR_DAT_1109a3690;
}



/* Entry: 10732ba98; end: 10732bb13;  */

void FUN_10732ba98(void)

{
  func_0x000107346368();
  func_0x0001073475d8();
  return;
}



/* Entry: 10732bb14; end: 10732bb4b;  */

void FUN_10732bb14(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 *extraout_x8;
  int extraout_w10;
  long unaff_x19;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  func_0x000100a2b988();
  func_0x000107264c5c();
  puVar5 = *(undefined1 **)(unaff_x19 + 0x10);
  if (puVar5 == (undefined1 *)0x0) {
    uStack_e8 = *(undefined8 *)(unaff_x19 + 0x28);
    uStack_f0 = *(undefined8 *)(unaff_x19 + 0x20);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      do {
        func_0x000107345624();
      } while (extraout_w10 != 0);
    }
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    func_0x0001073475fc();
    FUN_10732be90();
    FUN_10732bd2c(&uStack_90,auStack_d8);
    uVar3 = uStack_88;
    uVar2 = uStack_90;
    uStack_90 = 0;
    uStack_88 = 0;
    lStack_50 = (long)*(char *)(*(long *)(unaff_x19 + 0x20) + 0x17);
    if (lStack_50 < 0) {
      lStack_50 = *(long *)(*(long *)(unaff_x19 + 0x20) + 8);
    }
    uStack_58 = 0;
    uStack_48 = 0;
    extraout_x8[1] = uVar3;
    *extraout_x8 = uVar2;
    uStack_60 = 0;
    extraout_x8[2] = lStack_50;
    func_0x000107347d7c(0);
    FUN_10732a444(&uStack_60);
    FUN_10732bea8(&uStack_90);
    func_0x00010732becc(auStack_d8);
    func_0x0001072c9240(&uStack_108);
    func_0x000104c33970(&uStack_f0);
  }
  else {
    uVar1 = *puVar5;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_78,puVar5 + 8);
    uVar4 = uStack_68;
    uVar3 = uStack_70;
    uVar2 = uStack_78;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    *(undefined1 *)extraout_x8 = uVar1;
    extraout_x8[2] = uVar3;
    extraout_x8[1] = uVar2;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d0 = 0;
    extraout_x8[4] = 0;
    extraout_x8[5] = 0;
    extraout_x8[3] = uVar4;
    auStack_d8[0] = uVar1;
    func_0x000107346c28(auStack_d8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_78);
  }
  return;
}



/* Entry: 10732bb4c; end: 10732bd2b;  */

void FUN_10732bb4c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  int extraout_w10;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  puVar5 = *(undefined1 **)(param_4 + 0x10);
  if (puVar5 == (undefined1 *)0x0) {
    uStack_e8 = *(undefined8 *)(param_4 + 0x28);
    uStack_f0 = *(undefined8 *)(param_4 + 0x20);
    if (*(long *)(param_4 + 0x28) != 0) {
      do {
        func_0x000107345624();
      } while (extraout_w10 != 0);
    }
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    func_0x0001073475fc();
    FUN_10732be90();
    FUN_10732bd2c(&uStack_90,auStack_d8);
    uVar3 = uStack_88;
    uVar2 = uStack_90;
    uStack_90 = 0;
    uStack_88 = 0;
    lStack_50 = (long)*(char *)(*(long *)(param_4 + 0x20) + 0x17);
    if (lStack_50 < 0) {
      lStack_50 = *(long *)(*(long *)(param_4 + 0x20) + 8);
    }
    uStack_58 = 0;
    uStack_48 = 0;
    param_1[1] = uVar3;
    *param_1 = uVar2;
    uStack_60 = 0;
    param_1[2] = lStack_50;
    func_0x000107347d7c(0);
    FUN_10732a444(&uStack_60);
    FUN_10732bea8(&uStack_90);
    func_0x00010732becc(auStack_d8);
    func_0x0001072c9240(&uStack_108);
    func_0x000104c33970(&uStack_f0);
  }
  else {
    uVar1 = *puVar5;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_78,puVar5 + 8);
    uVar4 = uStack_68;
    uVar3 = uStack_70;
    uVar2 = uStack_78;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    *(undefined1 *)param_1 = uVar1;
    param_1[2] = uVar3;
    param_1[1] = uVar2;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d0 = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[3] = uVar4;
    auStack_d8[0] = uVar1;
    func_0x000107346c28(auStack_d8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_78);
  }
  return;
}



/* Entry: 10732bd2c; end: 10732bd47;  */

void FUN_10732bd2c(void)

{
  func_0x000107345eb4();
  FUN_10732bd4c();
  return;
}



/* Entry: 10732bd48; end: 10732bd4b;  */

long FUN_10732bd48(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010734730c(&UNK_1109a3be8);
  FUN_10732bf24(lVar1 + 0x38);
  func_0x0001072c9240(param_1 + 0x18);
  func_0x000104c33970();
  return param_1;
}



/* Entry: 10732bd4c; end: 10732bdaf;  */

void FUN_10732bd4c(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 uStack_30;
  
  func_0x0001073447e0();
  func_0x000107346378();
  FUN_10732bdb0();
  FUN_10732bdfc(uStack_30,param_2);
  func_0x000107344a14();
  func_0x00010732be80();
  func_0x0001073447cc(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107345740();
  func_0x00010732be80();
  func_0x000107345604();
  func_0x000107346404();
  FUN_10732bdd0();
  func_0x0001073465ec();
  return;
}



/* Entry: 10732bdb0; end: 10732bdcf;  */

void FUN_10732bdb0(void)

{
  func_0x000107346404();
  FUN_10732bdd0();
  func_0x0001073465ec();
  return;
}



/* Entry: 10732bdd0; end: 10732bdfb;  */

void FUN_10732bdd0(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0x2aaaaaaaaaaaaab) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x60);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010734771c();
  func_0x0001073474f4(&UNK_1109a3af8);
  FUN_10732be48();
  return;
}



/* Entry: 10732bdfc; end: 10732be27;  */

void FUN_10732bdfc(void)

{
  func_0x00010734771c();
  func_0x0001073474f4(&UNK_1109a3af8);
  FUN_10732be48();
  return;
}



/* Entry: 10732be28; end: 10732be2b;  */

void FUN_10732be28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a3b08;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10732be2c; end: 10732be3f;  */

void FUN_10732be2c(void)

{
  FUN_10732be74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10732be40; end: 10732be47;  */

void FUN_10732be40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001073478dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10732be48; end: 10732be73;  */

void FUN_10732be48(void)

{
  func_0x0001078506fc();
  func_0x000107347cd4();
  return;
}



/* Entry: 10732be74; end: 10732be8f;  */

void FUN_10732be74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a3b08;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10732be90; end: 10732bea7;  */

void FUN_10732be90(void)

{
  func_0x000107850678();
  func_0x000107347cd4();
  return;
}



/* Entry: 10732bea8; end: 10732bf0b;  */

void FUN_10732bea8(long param_1)

{
  func_0x000107345acc();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10732bf0c; end: 10732bf0f;  */

long FUN_10732bf0c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010734730c(&UNK_1109a3be8);
  FUN_10732bf24(lVar1 + 0x38);
  func_0x0001072c9240(param_1 + 0x18);
  func_0x000104c33970();
  return param_1;
}



/* Entry: 10732bf10; end: 10732bf23;  */

void FUN_10732bf10(void)

{
  func_0x00010732becc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10732bf24; end: 10732bf47;  */

void FUN_10732bf24(long param_1)

{
  func_0x000107345acc();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10732bf48; end: 10732bf4b;  */

long FUN_10732bf48(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010734730c(&UNK_1109a3ab8);
  func_0x00010732e640(lVar1 + 0x148);
  FUN_10732c054(param_1 + 0x78);
  FUN_10732c10c(param_1 + 0x58);
  func_0x000107346dd4();
  func_0x000107346c60();
  return param_1;
}



/* Entry: 10732bf4c; end: 10732bf5f;  */

void FUN_10732bf4c(void)

{
  FUN_10732b264();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10732bf60; end: 10732bfb3;  */

void FUN_10732bf60(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_10732bfb4();
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  if (*(char *)(param_2 + 0x38) == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  return;
}



/* Entry: 10732bfb4; end: 10732bff7;  */

void FUN_10732bfb4(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010734624c();
  if (extraout_x8 == 0) {
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
  }
  else if (extraout_x8 == param_2) {
    func_0x0001073449b0();
    func_0x000107345720();
  }
  else {
    func_0x0001073461ec();
  }
  return;
}



/* Entry: 10732bff8; end: 10732c03b;  */

void FUN_10732bff8(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010734624c();
  if (extraout_x8 == 0) {
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
  }
  else if (extraout_x8 == param_2) {
    func_0x0001073449b0();
    func_0x000107345720();
  }
  else {
    func_0x0001073461ec();
  }
  return;
}



/* Entry: 10732c03c; end: 10732c053;  */

void FUN_10732c03c(void)

{
  __ZNSt3__119__shared_mutex_baseC1Ev();
  func_0x0001073475a8();
  return;
}



/* Entry: 10732c054; end: 10732c0f3;  */

void FUN_10732c054(long param_1)

{
  func_0x00010732c07c(param_1 + 0xa8);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x70);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1);
  return;
}



/* Entry: 10732c0f4; end: 10732c10b;  */

void FUN_10732c0f4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10732c10c; end: 10732c19b;  */

void FUN_10732c10c(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x000107344e80();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x000107344d70(uVar1);
  return;
}



/* Entry: 10732c19c; end: 10732c1d3;  */

void FUN_10732c19c(void)

{
  func_0x0001073451ec();
  func_0x000107345fdc();
  FUN_10732c1d4();
  func_0x000107346384();
  return;
}



/* Entry: 10732c1d4; end: 10732c1f3;  */

void FUN_10732c1d4(void)

{
  func_0x000107346988();
  FUN_10732b55c();
  return;
}



/* Entry: 10732c1f4; end: 10732c1f7;  */

void FUN_10732c1f4(void)

{
  func_0x000107346988();
  FUN_107331bd4();
  return;
}



/* Entry: 10732c1f8; end: 10732c20b;  */

void FUN_10732c1f8(void)

{
  FUN_10732c2a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10732c20c; end: 10732c23f;  */

undefined8 FUN_10732c20c(undefined8 param_1)

{
  func_0x000107345fdc();
  func_0x00010732c2c0();
  return param_1;
}



/* Entry: 10732c240; end: 10732c26b;  */

void FUN_10732c240(long param_1,undefined8 param_2)

{
  func_0x000107346988(param_2,param_1 + 8);
  FUN_10732b55c();
  return;
}



/* Entry: 10732c26c; end: 10732c293;  */

void FUN_10732c26c(undefined8 param_1)

{
  func_0x000107345760();
  func_0x000107345650(param_1,&PTR_DAT_1109a3710);
  func_0x000107344bc4();
  return;
}



/* Entry: 10732c294; end: 10732c29f;  */

undefined ** FUN_10732c294(void)

{
  return &PTR_DAT_1109a3710;
}



/* Entry: 10732c2a0; end: 10732c2df;  */

void FUN_10732c2a0(void)

{
  func_0x000107346988();
  FUN_107331bd4();
  return;
}



/* Entry: 10732c2e0; end: 10732c32b;  */

void FUN_10732c2e0(void)

{
  undefined1 in_ZR;
  undefined1 auStack_220 [512];
  
  func_0x0001073447e0();
  FUN_10732b734(auStack_220);
  func_0x000107346020();
  func_0x00010732b980();
  func_0x00010724b374(auStack_220);
  func_0x00010734471c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x0001073451ec();
  func_0x000107346ee4();
  FUN_10732c364();
  func_0x000107346384();
  return;
}


