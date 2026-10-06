/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10868b9bc; end: 10868be0b;  */

void FUN_10868b9bc(long *param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined1 in_ZR;
  bool bVar4;
  undefined1 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  long *plVar12;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long unaff_x19;
  long *plVar13;
  long unaff_x20;
  long *unaff_x23;
  undefined1 auStack_340 [20];
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  long lStack_320;
  long lStack_318;
  undefined1 uStack_310;
  long lStack_308;
  long lStack_300;
  undefined1 uStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  undefined8 *puStack_2d8;
  ulong uStack_1e8;
  long *plStack_1e0;
  ulong uStack_1d8;
  char cStack_1d0;
  undefined1 auStack_1c8 [48];
  long lStack_198;
  char cStack_190;
  undefined1 auStack_70 [16];
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = param_1 + 0x15;
  if (*plVar13 != 0) {
    plVar6 = param_1;
    if (param_1[0x13] == 0) goto LAB_10868bcac;
    func_0x00010868e9c8();
    if (!(bool)in_ZR) goto LAB_10868bcac;
    FUN_10886c7c4(&lStack_2f0,param_1[3]);
    func_0x00010868e944();
    func_0x00010868e844();
    func_0x00010868e83c();
    func_0x00010868e85c();
    plVar13 = (long *)param_1[0x13];
    func_0x00010868e934(param_1[0x15],&lStack_308);
    func_0x00010868e950();
    plVar11 = &lStack_2f0;
    plVar6 = plVar13;
    FUN_108697e10(plVar13,plVar11,2);
    param_2 = (int)plVar11;
    func_0x00010868e854();
    func_0x00010868e834();
    goto LAB_10868bcac;
  }
  in_ZR = param_1[0x21] == 1;
  if ((param_1[0x21] < 1) || (in_ZR = (char)param_1[0x34] == '\x01', !(bool)in_ZR)) {
LAB_10868bad4:
    unaff_x23 = param_1 + 0x13;
    if (*unaff_x23 == 0) goto LAB_10868bb04;
    func_0x00010868e9c8();
    if (!(bool)in_ZR) goto LAB_10868bb04;
    FUN_10886c7c4(&lStack_2f0,param_1[3]);
    func_0x00010868e944();
    func_0x00010868e844();
    func_0x00010868e83c();
    func_0x00010868e85c();
    goto LAB_10868bb04;
  }
  plVar6 = (long *)param_1[5];
  func_0x00010868e690();
  uVar1 = param_1[0x33] - (long)plVar6;
  if (uVar1 == 0 || param_1[0x33] < (long)plVar6) {
    in_ZR = (char)param_1[0x34] == '\x01';
    if ((bool)in_ZR) {
      *(undefined1 *)(param_1 + 0x34) = 0;
    }
    goto LAB_10868bad4;
  }
  uVar2 = uVar1 / 1000000;
  bVar4 = uVar2 * 1000000 - uVar1 == 0;
  if ((long)(uVar2 * 1000000) < (long)uVar1) {
    uVar2 = uVar2 + 1;
  }
  param_2 = (int)uVar2;
  func_0x00010868e5a0(uStack_58);
  if (!bVar4) {
    do {
      ___stack_chk_fail();
      func_0x00010868e83c();
      func_0x00010868e85c();
      in_ZR = param_2 == 2;
      if ((bool)in_ZR) {
        func_0x00010868e7e4();
        ___cxa_end_catch();
      }
      else {
        in_ZR = param_2 == 1;
        if (!(bool)in_ZR) {
          do {
            __Unwind_Resume(plVar6);
          } while( true );
        }
        func_0x00010868e7e4();
        ___cxa_end_catch();
      }
LAB_10868bb04:
      lVar7 = param_1[0x35];
      func_0x00010868cdcc(&lStack_2f0,param_1[1],param_1[2]);
      lStack_318 = lStack_2e8;
      lStack_320 = lStack_2f0;
      if (lStack_2e8 != 0) {
        do {
          func_0x00010868e600();
        } while (extraout_w10 != 0);
      }
      uStack_310 = (char)lVar7;
      func_0x00010868ce08(&lStack_2f0);
      lVar7 = param_1[3];
      FUN_108866e6c(lVar7,0);
      lVar8 = param_1[3];
      FUN_108866ef8(lVar8,0);
      lVar9 = param_1[3];
      FUN_108867778(lVar9,0);
      uStack_32c = (undefined4)lVar7;
      uStack_328 = (undefined4)lVar8;
      uStack_324 = (undefined4)lVar9;
      FUN_10868e0cc(auStack_70,1);
      puVar3 = puStack_60;
      lVar8 = lStack_318;
      lVar7 = lStack_320;
      puStack_60[2] = 0;
      *puStack_60 = &PTR_FUN_110a62a10;
      puStack_60[1] = 0;
      lStack_308 = lStack_320;
      lStack_300 = lStack_318;
      if (lStack_318 != 0) {
        do {
          func_0x00010868e600();
        } while (extraout_w10_00 != 0);
      }
      uVar5 = uStack_310;
      uStack_2f8 = uStack_310;
      puStack_2d8 = (undefined8 *)0x0;
      puVar10 = (undefined8 *)0x20;
      __Znwm();
      *puVar10 = &PTR_FUN_110a62a60;
      puVar10[1] = lVar7;
      puVar10[2] = lVar8;
      lStack_308 = 0;
      lStack_300 = 0;
      *(undefined1 *)(puVar10 + 3) = uVar5;
      puStack_2d8 = puVar10;
      FUN_1086936a4(puVar3 + 3,param_1 + 0xf,param_1 + 9,param_1 + 0xb,param_1 + 7,param_1 + 5,
                    param_1 + 0xd,0xb,&lStack_2f0,&uStack_32c,param_1 + 0x11,unaff_x23);
      FUN_10868e450(&lStack_2f0);
      func_0x00010868c9a0(&lStack_308);
      puVar3 = puStack_60;
      puStack_60 = (undefined8 *)0x0;
      func_0x00010868e0b0(auStack_340,puVar3 + 3);
      func_0x00010868e57c(auStack_70);
      param_2 = (int)auStack_340;
      func_0x00010868c708(plVar13);
      func_0x00010868cd80(auStack_340);
      param_1 = (long *)*unaff_x23;
      if (param_1 != (long *)0x0) {
        func_0x00010868e934(*plVar13,&lStack_308);
        func_0x00010868e950();
        plVar6 = &lStack_2f0;
        FUN_108697e10(param_1,plVar6,1);
        param_2 = (int)plVar6;
        func_0x00010868e854();
        func_0x00010868e834();
      }
      FUN_1086938d4(*plVar13);
      plVar6 = &lStack_320;
      func_0x00010868c9a0();
LAB_10868bcac:
      func_0x00010868e5a0(uStack_58);
    } while (!(bool)in_ZR);
    return;
  }
  func_0x00010868e5c4();
  func_0x00010868e89c();
  uVar5 = *(char *)(unaff_x19 + 400) == '\x01';
  if ((bool)uVar5) {
    uVar5 = *(long *)(unaff_x19 + 0x188) == unaff_x20;
    if (unaff_x20 < *(long *)(unaff_x19 + 0x188)) {
      func_0x00010868e718();
      goto LAB_10868c4d0;
    }
  }
  else {
LAB_10868c4d0:
    func_0x00010868e7ec();
    func_0x00010868e8c4();
    if (extraout_x8 != 0) {
      do {
        func_0x00010868e600();
      } while (extraout_w10_01 != 0);
    }
    func_0x00010868e79c(FUN_10868dfc0);
    func_0x00010868e654();
    func_0x00010868e5b4();
    func_0x00010868e794();
    func_0x00010868e69c();
    func_0x00010868e88c();
    if (extraout_x8_00 != 0) {
      do {
        func_0x00010868e600();
      } while (extraout_w10_02 != 0);
    }
    param_1 = (long *)(unaff_x19 + 0x178);
    func_0x00010868e980();
    func_0x00010868e970();
    func_0x00010868e93c();
  }
  func_0x00010868e5a0(unaff_x23);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010868e5b4();
  func_0x00010868e794();
  func_0x00010868e69c();
  func_0x00010868e640();
  plVar13 = param_1;
  func_0x00010868e968(auStack_1c8);
  lVar7 = lStack_198;
  if (cStack_190 == '\0') {
    lVar7 = 0;
  }
  func_0x00010868e700();
  (*extraout_x8_01)();
  if (param_1[0x23] == 0) {
    uStack_1e8 = 0;
    plStack_1e0 = (long *)0x0;
    uStack_1d8 = 0;
    plVar6 = param_1;
    FUN_10868bfcc(param_1,0,0,plVar13);
    func_0x00010868c8fc(&uStack_1e8);
  }
  else {
    func_0x00010868e7c8();
    plVar6 = (long *)0x0;
    if (((cStack_1d0 == '\x01') && ((uStack_1e8 & 1) == 0)) &&
       (plVar6 = plStack_1e0, (uStack_1d8 & 1) == 0)) {
      func_0x00010868e718();
      goto LAB_10868c674;
    }
  }
  if ((long *)(lVar7 + -1) < plVar13) {
    plVar12 = (long *)(lVar7 + param_1[0x21] * 1000);
    plVar11 = (long *)0x0;
    if (plVar13 <= plVar12) {
      plVar11 = (long *)((long)plVar12 - (long)plVar13);
    }
    if ((long)plVar11 <= (long)plVar6) {
      plVar11 = plVar6;
    }
    if ((long)plVar11 < 1) {
      func_0x00010868e7dc();
    }
    else {
      FUN_10868c498(param_1);
    }
  }
  else if ((long)plVar6 < 1) {
    func_0x00010868e7dc();
  }
  else {
    FUN_10868c498(param_1,plVar6);
  }
LAB_10868c674:
  func_0x00010868e6b4();
  return;
}



/* Entry: 10868be0c; end: 10868be23;  */

void FUN_10868be0c(long param_1)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  code *extraout_x8;
  ulong uVar4;
  undefined1 auStack_2c0 [632];
  ulong uStack_48;
  ulong uStack_40;
  
  if (*(long *)(param_1 + 0x108) < 1) {
    return;
  }
  *(undefined1 *)(param_1 + 0x1a8) = 0;
  uVar3 = *(ulong *)(param_1 + 0x18);
  FUN_10886c7c4(auStack_2c0);
  func_0x00010868e92c(&uStack_48);
  func_0x00010868e770();
  if ((*(long *)(param_1 + 0x110) < 1) ||
     (*(uint *)(param_1 + 0x134) < (uint)*(long *)(param_1 + 0x110))) {
    if (*(char *)(param_1 + 0x1a8) == '\x01') {
      FUN_10868b508(param_1,&uStack_48,0);
    }
    else {
      func_0x00010868e700();
      (*extraout_x8)();
      bVar2 = uStack_40 <= uStack_48;
      if ((uStack_48 == uStack_40) || (func_0x00010868e8d0(), !bVar2)) {
        func_0x00010868e6c0();
        for (uVar4 = uStack_48; uVar4 != uStack_40; uVar4 = uVar4 + 0x260) {
          if ((*(byte *)(uVar4 + 0x88) & 1) == 0) {
            uVar1 = 0;
            if (*(ulong *)(uVar4 + 0x128) <= uVar3) {
              uVar1 = uVar3 - *(ulong *)(uVar4 + 0x128);
            }
            if (uVar1 < *(ulong *)(param_1 + 0xf8)) {
              func_0x00010868e718();
              FUN_10868c2cc(param_1,uStack_48,uStack_40,uVar3,0);
              if ((uStack_48 & 1) != 0) {
                func_0x00010868e86c();
                FUN_10868c3c0();
              }
              goto LAB_10868bf38;
            }
          }
        }
        func_0x00010868e72c();
        FUN_10868c570(param_1);
      }
      else {
        func_0x00010868e748();
        func_0x00010868e72c();
        FUN_10868c570(param_1);
      }
    }
  }
  else {
    func_0x00010868e748();
  }
LAB_10868bf38:
  func_0x00010868e864();
  return;
}



/* Entry: 10868be24; end: 10868bf93;  */

void FUN_10868be24(long param_1)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  code *extraout_x8;
  ulong uVar4;
  undefined1 auStack_2c0 [632];
  ulong uStack_48;
  ulong uStack_40;
  
  uVar3 = *(ulong *)(param_1 + 0x18);
  FUN_10886c7c4(auStack_2c0);
  func_0x00010868e92c(&uStack_48);
  func_0x00010868e770();
  if ((*(long *)(param_1 + 0x110) < 1) ||
     (*(uint *)(param_1 + 0x134) < (uint)*(long *)(param_1 + 0x110))) {
    if (*(char *)(param_1 + 0x1a8) == '\x01') {
      FUN_10868b508(param_1,&uStack_48,0);
    }
    else {
      func_0x00010868e700();
      (*extraout_x8)();
      bVar2 = uStack_40 <= uStack_48;
      if ((uStack_48 == uStack_40) || (func_0x00010868e8d0(), !bVar2)) {
        func_0x00010868e6c0();
        for (uVar4 = uStack_48; uVar4 != uStack_40; uVar4 = uVar4 + 0x260) {
          if ((*(byte *)(uVar4 + 0x88) & 1) == 0) {
            uVar1 = 0;
            if (*(ulong *)(uVar4 + 0x128) <= uVar3) {
              uVar1 = uVar3 - *(ulong *)(uVar4 + 0x128);
            }
            if (uVar1 < *(ulong *)(param_1 + 0xf8)) {
              func_0x00010868e718();
              FUN_10868c2cc(param_1,uStack_48,uStack_40,uVar3,0);
              if ((uStack_48 & 1) != 0) {
                func_0x00010868e86c();
                FUN_10868c3c0();
              }
              goto LAB_10868bf38;
            }
          }
        }
        func_0x00010868e72c();
        FUN_10868c570(param_1);
      }
      else {
        func_0x00010868e748();
        func_0x00010868e72c();
        FUN_10868c570(param_1);
      }
    }
  }
  else {
    func_0x00010868e748();
  }
LAB_10868bf38:
  func_0x00010868e864();
  return;
}



/* Entry: 10868bf94; end: 10868bfcb;  */

void FUN_10868bf94(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010868e87c();
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 0x260) {
    FUN_10868b960();
  }
  return;
}



/* Entry: 10868bfcc; end: 10868c0df;  */

long FUN_10868bfcc(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auStack_78 [20];
  float fStack_64;
  byte bStack_48;
  
  if (param_2 == param_3) {
    FUN_10868c214();
    if ((param_4 & 1) == 0) {
      param_1 = 0;
    }
  }
  else {
    uVar4 = 0;
    uVar5 = 0;
    if (*(ulong *)(param_2 + 0x128) <= param_4) {
      uVar5 = param_4 - *(ulong *)(param_2 + 0x128);
    }
    lVar2 = 0;
    if (uVar5 <= *(ulong *)(param_1 + 0xf8)) {
      lVar2 = *(ulong *)(param_1 + 0xf8) - uVar5;
    }
    auStack_78[0] = 0;
    bStack_48 = 0;
    for (param_2 = param_2 + 0x130; param_2 + -0x130 != param_3; param_2 = param_2 + 0x260) {
      if (((*(char *)(param_2 + -0xa8) == '\x01') && (*(char *)(param_2 + 0x30) == '\x01')) &&
         (uVar5 = *(ulong *)(param_2 + -0xb0), bStack_48 != 1 || uVar4 <= uVar5)) {
        FUN_10868ca80(auStack_78,param_2);
        uVar4 = uVar5;
      }
    }
    param_1 = lVar2;
    if ((bStack_48 & 1) != 0) {
      lVar1 = (long)(fStack_64 * 1000.0) + uVar4;
      lVar3 = lVar1 - param_4;
      if (lVar3 == 0 || lVar1 < (long)param_4) {
        lVar3 = 0;
      }
      if (lVar3 <= lVar2) {
        param_1 = lVar3;
      }
    }
    func_0x000107c28d20(auStack_78);
  }
  return param_1;
}



/* Entry: 10868c0e0; end: 10868c12f;  */

void FUN_10868c0e0(void)

{
  ulong uVar1;
  ulong unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  func_0x00010868e994();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x260) {
    uVar1 = 0;
    if (*(ulong *)(unaff_x21 + 0x128) <= unaff_x19) {
      uVar1 = unaff_x19 - *(ulong *)(unaff_x21 + 0x128);
    }
    if (*(ulong *)(unaff_x22 + 0xf8) <= uVar1) {
      FUN_10868b960();
    }
  }
  return;
}



/* Entry: 10868c130; end: 10868c213;  */

undefined1  [16] FUN_10868c130(long param_1,ulong param_2)

{
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auStack_1c8 [24];
  long lStack_1b0;
  char cStack_1a8;
  undefined1 auStack_158 [20];
  float fStack_144;
  byte bStack_128;
  undefined8 uStack_38;
  
  func_0x00010868e5c4();
  func_0x00010868e89c();
  uVar1 = 0;
  if (*(char *)(unaff_x19 + 0x150) == '\x01') {
    uVar1 = *(long *)(unaff_x19 + 0x148) == unaff_x20;
    if (*(long *)(unaff_x19 + 0x148) <= unaff_x20) goto LAB_10868c1e0;
    func_0x00010089b2d0(unaff_x19 + 0x138);
    FUN_10868caf4(unaff_x19 + 0x138);
  }
  param_2 = *(ulong *)(unaff_x19 + 8);
  func_0x00010868e7ec();
  func_0x00010868e8c4();
  if (extraout_x8 != 0) {
    do {
      func_0x00010868e600();
    } while (extraout_w10 != 0);
  }
  func_0x00010868e79c(FUN_10868e060);
  func_0x00010868e654();
  func_0x00010868e5b4();
  func_0x00010868e794();
  func_0x00010868e69c();
  func_0x00010868e88c();
  if (extraout_x8_00 != 0) {
    do {
      func_0x00010868e600();
    } while (extraout_w10_00 != 0);
  }
  param_1 = unaff_x19 + 0x138;
  func_0x00010868e980();
  func_0x00010868e970();
  func_0x00010868e93c();
LAB_10868c1e0:
  func_0x00010868e5a0(uStack_38);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x00010868e5b4();
    func_0x00010868e794();
    func_0x00010868e69c();
    func_0x00010868e640();
    func_0x00010868e968(auStack_1c8);
    uVar3 = 0;
    if (cStack_1a8 == '\x01') {
      uVar2 = 0;
      uVar4 = 0;
      if ((bStack_128 & 1) != 0) {
        uVar4 = (long)(fStack_144 * 1000.0) + lStack_1b0;
        uVar3 = uVar4 - param_2;
        if (uVar4 < param_2 || uVar3 == 0) {
          uVar3 = 0;
          uVar4 = 0;
        }
        else {
          uVar4 = uVar3 & 0xffffffffffffff00;
          uVar3 = uVar3 & 0xff;
        }
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 0;
      uVar4 = 0;
    }
    func_0x000107c28d20(auStack_158);
    auVar5._0_8_ = uVar4 | uVar3;
    auVar5._8_8_ = uVar2;
    return auVar5;
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 10868c214; end: 10868c2cb;  */

undefined1  [16] FUN_10868c214(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_f8 [24];
  long lStack_e0;
  char cStack_d8;
  undefined1 auStack_88 [20];
  float fStack_74;
  byte bStack_58;
  
  func_0x00010868e968(auStack_f8);
  uVar2 = 0;
  if (cStack_d8 == '\x01') {
    uVar1 = 0;
    uVar3 = 0;
    if ((bStack_58 & 1) != 0) {
      uVar3 = (long)(fStack_74 * 1000.0) + lStack_e0;
      uVar2 = uVar3 - param_2;
      if (uVar3 < param_2 || uVar2 == 0) {
        uVar2 = 0;
        uVar3 = 0;
      }
      else {
        uVar3 = uVar2 & 0xffffffffffffff00;
        uVar2 = uVar2 & 0xff;
      }
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
    uVar3 = 0;
  }
  func_0x000107c28d20(auStack_88);
  auVar4._0_8_ = uVar3 | uVar2;
  auVar4._8_8_ = uVar1;
  return auVar4;
}



/* Entry: 10868c2cc; end: 10868c327;  */

undefined1  [16] FUN_10868c2cc(long param_1,long param_2,long param_3,ulong param_4,int param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  lVar4 = 0;
  uVar5 = 0;
  for (; param_2 != param_3; param_2 = param_2 + 0x260) {
    if ((param_5 != 0) || ((*(byte *)(param_2 + 0x88) & 1) == 0)) {
      uVar1 = 0;
      if (*(ulong *)(param_2 + 0x128) <= param_4) {
        uVar1 = param_4 - *(ulong *)(param_2 + 0x128);
      }
      lVar3 = *(ulong *)(param_1 + 0xf8) - uVar1;
      if (uVar1 <= *(ulong *)(param_1 + 0xf8) && lVar3 != 0) {
        lVar2 = lVar3;
        if (lVar4 <= lVar3) {
          lVar2 = lVar4;
        }
        lVar4 = lVar2;
        if ((int)uVar5 == 0) {
          lVar4 = lVar3;
        }
        uVar5 = 1;
      }
    }
  }
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = lVar4;
  return auVar6;
}



/* Entry: 10868c328; end: 10868c3bf;  */

void FUN_10868c328(undefined1 *param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  float fStack_2c;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  if ((*(char *)(param_3 + 0x20) == '\x01') && ((*(byte *)(param_3 + 0xa0) & 1) != 0)) {
    fStack_2c = (float)*(int *)(param_2 + 0x124);
    if (*(char *)(param_2 + 0x128) == '\0') {
      fStack_2c = *(float *)(param_3 + 0x84);
    }
    puVar1 = (undefined4 *)(param_2 + 300);
    if (*(char *)(param_2 + 0x130) == '\0') {
      puVar1 = (undefined4 *)(param_3 + 0x88);
    }
    uStack_28 = *puVar1;
    uStack_24 = *(undefined1 *)(param_3 + 0x90);
    FUN_108693534(param_1,param_2 + 0x118,&fStack_2c,param_3,param_4,
                  *(undefined1 *)(param_2 + 0x120));
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    *param_1 = 0;
  }
  param_1[0x18] = uVar2;
  return;
}



/* Entry: 10868c3c0; end: 10868c497;  */

void FUN_10868c3c0(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  code *extraout_x8_03;
  ulong uVar7;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long unaff_x19;
  long unaff_x20;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  char cStack_2a0;
  undefined1 auStack_298 [48];
  long lStack_268;
  char cStack_260;
  undefined8 uStack_108;
  undefined8 uStack_38;
  
  func_0x00010868e5c4();
  func_0x00010868e89c();
  uVar3 = *(char *)(unaff_x19 + 0x170) == '\x01';
  if ((bool)uVar3) {
    uVar3 = *(long *)(unaff_x19 + 0x168) == unaff_x20;
    if (unaff_x20 < *(long *)(unaff_x19 + 0x168)) {
      func_0x00010868e72c();
      goto LAB_10868c3f8;
    }
  }
  else {
LAB_10868c3f8:
    func_0x00010868e7ec();
    func_0x00010868e8c4();
    if (extraout_x8 != 0) {
      do {
        func_0x00010868e600();
      } while (extraout_w10 != 0);
    }
    func_0x00010868e79c(FUN_10868e010);
    func_0x00010868e654();
    func_0x00010868e5b4();
    func_0x00010868e794();
    func_0x00010868e69c();
    func_0x00010868e88c();
    if (extraout_x8_00 != 0) {
      do {
        func_0x00010868e600();
      } while (extraout_w10_00 != 0);
    }
    param_1 = unaff_x19 + 0x158;
    func_0x00010868e980();
    func_0x00010868e970();
    func_0x00010868e93c();
  }
  func_0x00010868e5a0(uStack_38);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  uVar4 = param_1;
  func_0x00010868e5b4();
  func_0x00010868e794();
  func_0x00010868e69c();
  func_0x00010868e640();
  func_0x00010868e5c4();
  func_0x00010868e89c();
  uVar3 = *(char *)(param_1 + 400) == '\x01';
  if ((bool)uVar3) {
    uVar3 = *(long *)(param_1 + 0x188) == unaff_x20;
    if (unaff_x20 < *(long *)(param_1 + 0x188)) {
      func_0x00010868e718();
      goto LAB_10868c4d0;
    }
  }
  else {
LAB_10868c4d0:
    func_0x00010868e7ec();
    func_0x00010868e8c4();
    if (extraout_x8_01 != 0) {
      do {
        func_0x00010868e600();
      } while (extraout_w10_01 != 0);
    }
    func_0x00010868e79c(FUN_10868dfc0);
    func_0x00010868e654();
    func_0x00010868e5b4();
    func_0x00010868e794();
    func_0x00010868e69c();
    func_0x00010868e88c();
    if (extraout_x8_02 != 0) {
      do {
        func_0x00010868e600();
      } while (extraout_w10_02 != 0);
    }
    uVar4 = param_1 + 0x178;
    func_0x00010868e980();
    func_0x00010868e970();
    func_0x00010868e93c();
  }
  func_0x00010868e5a0(uStack_108);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010868e5b4();
  func_0x00010868e794();
  func_0x00010868e69c();
  func_0x00010868e640();
  uVar5 = uVar4;
  func_0x00010868e968(auStack_298);
  lVar1 = lStack_268;
  if (cStack_260 == '\0') {
    lVar1 = 0;
  }
  func_0x00010868e700();
  (*extraout_x8_03)();
  if (*(long *)(uVar4 + 0x118) == 0) {
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    uVar6 = uVar4;
    FUN_10868bfcc(uVar4,0,0,uVar5);
    func_0x00010868c8fc(&uStack_2b8);
  }
  else {
    func_0x00010868e7c8();
    uVar6 = 0;
    if (((cStack_2a0 == '\x01') && ((uStack_2b8 & 1) == 0)) &&
       (uVar6 = uStack_2b0, (uStack_2a8 & 1) == 0)) {
      func_0x00010868e718();
      goto LAB_10868c674;
    }
  }
  if (lVar1 - 1U < uVar5) {
    uVar7 = lVar1 + *(long *)(uVar4 + 0x108) * 1000;
    uVar2 = 0;
    if (uVar5 <= uVar7) {
      uVar2 = uVar7 - uVar5;
    }
    if ((long)uVar2 <= (long)uVar6) {
      uVar2 = uVar6;
    }
    if ((long)uVar2 < 1) {
      func_0x00010868e7dc();
    }
    else {
      FUN_10868c498(uVar4);
    }
  }
  else if ((long)uVar6 < 1) {
    func_0x00010868e7dc();
  }
  else {
    FUN_10868c498(uVar4,uVar6);
  }
LAB_10868c674:
  func_0x00010868e6b4();
  return;
}



/* Entry: 10868c498; end: 10868c56f;  */

void FUN_10868c498(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 uVar3;
  ulong uVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  ulong uVar6;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  long unaff_x20;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  char cStack_1d0;
  undefined1 auStack_1c8 [48];
  long lStack_198;
  char cStack_190;
  undefined8 uStack_38;
  
  func_0x00010868e5c4();
  func_0x00010868e89c();
  uVar3 = *(char *)(unaff_x19 + 400) == '\x01';
  if ((bool)uVar3) {
    uVar3 = *(long *)(unaff_x19 + 0x188) == unaff_x20;
    if (unaff_x20 < *(long *)(unaff_x19 + 0x188)) {
      func_0x00010868e718();
      goto LAB_10868c4d0;
    }
  }
  else {
LAB_10868c4d0:
    func_0x00010868e7ec();
    func_0x00010868e8c4();
    if (extraout_x8 != 0) {
      do {
        func_0x00010868e600();
      } while (extraout_w10 != 0);
    }
    func_0x00010868e79c(FUN_10868dfc0);
    func_0x00010868e654();
    func_0x00010868e5b4();
    func_0x00010868e794();
    func_0x00010868e69c();
    func_0x00010868e88c();
    if (extraout_x8_00 != 0) {
      do {
        func_0x00010868e600();
      } while (extraout_w10_00 != 0);
    }
    param_1 = unaff_x19 + 0x178;
    func_0x00010868e980();
    func_0x00010868e970();
    func_0x00010868e93c();
  }
  func_0x00010868e5a0(uStack_38);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010868e5b4();
  func_0x00010868e794();
  func_0x00010868e69c();
  func_0x00010868e640();
  uVar4 = param_1;
  func_0x00010868e968(auStack_1c8);
  lVar1 = lStack_198;
  if (cStack_190 == '\0') {
    lVar1 = 0;
  }
  func_0x00010868e700();
  (*extraout_x8_01)();
  if (*(long *)(param_1 + 0x118) == 0) {
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uVar5 = param_1;
    FUN_10868bfcc(param_1,0,0,uVar4);
    func_0x00010868c8fc(&uStack_1e8);
  }
  else {
    func_0x00010868e7c8();
    uVar5 = 0;
    if (((cStack_1d0 == '\x01') && ((uStack_1e8 & 1) == 0)) &&
       (uVar5 = uStack_1e0, (uStack_1d8 & 1) == 0)) {
      func_0x00010868e718();
      goto LAB_10868c674;
    }
  }
  if (lVar1 - 1U < uVar4) {
    uVar6 = lVar1 + *(long *)(param_1 + 0x108) * 1000;
    uVar2 = 0;
    if (uVar4 <= uVar6) {
      uVar2 = uVar6 - uVar4;
    }
    if ((long)uVar2 <= (long)uVar5) {
      uVar2 = uVar5;
    }
    if ((long)uVar2 < 1) {
      func_0x00010868e7dc();
    }
    else {
      FUN_10868c498(param_1);
    }
  }
  else if ((long)uVar5 < 1) {
    func_0x00010868e7dc();
  }
  else {
    FUN_10868c498(param_1,uVar5);
  }
LAB_10868c674:
  func_0x00010868e6b4();
  return;
}



/* Entry: 10868c570; end: 10868c6b3;  */

void FUN_10868c570(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  code *extraout_x8;
  ulong uVar5;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  char cStack_100;
  undefined1 auStack_f8 [48];
  long lStack_c8;
  char cStack_c0;
  
  uVar3 = param_1;
  func_0x00010868e968(auStack_f8);
  lVar1 = lStack_c8;
  if (cStack_c0 == '\0') {
    lVar1 = 0;
  }
  func_0x00010868e700();
  (*extraout_x8)();
  if (*(long *)(param_1 + 0x118) == 0) {
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uVar4 = param_1;
    FUN_10868bfcc(param_1,0,0,uVar3);
    func_0x00010868c8fc(&uStack_118);
  }
  else {
    func_0x00010868e7c8();
    uVar4 = 0;
    if (((cStack_100 == '\x01') && ((uStack_118 & 1) == 0)) &&
       (uVar4 = uStack_110, (uStack_108 & 1) == 0)) {
      func_0x00010868e718();
      goto LAB_10868c674;
    }
  }
  if (lVar1 - 1U < uVar3) {
    uVar5 = lVar1 + *(long *)(param_1 + 0x108) * 1000;
    uVar2 = 0;
    if (uVar3 <= uVar5) {
      uVar2 = uVar5 - uVar3;
    }
    if ((long)uVar2 <= (long)uVar4) {
      uVar2 = uVar4;
    }
    if ((long)uVar2 < 1) {
      func_0x00010868e7dc();
    }
    else {
      FUN_10868c498(param_1);
    }
  }
  else if ((long)uVar4 < 1) {
    func_0x00010868e7dc();
  }
  else {
    FUN_10868c498(param_1,uVar4);
  }
LAB_10868c674:
  func_0x00010868e6b4();
  return;
}



/* Entry: 10868c6b4; end: 10868c777;  */

void FUN_10868c6b4(long param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x000107c32320();
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010868e7b0();
    FUN_108680190();
    uVar1 = unaff_x20[2];
  }
  else {
    uVar1 = *unaff_x20;
    unaff_x19[1] = unaff_x20[1];
    *unaff_x19 = uVar1;
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
    uVar1 = unaff_x20[2];
    *(undefined1 *)(unaff_x19 + 3) = 1;
  }
  unaff_x19[2] = uVar1;
  return;
}



/* Entry: 10868c778; end: 10868c86f;  */

void FUN_10868c778(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *extraout_x8;
  undefined8 *puVar5;
  undefined8 *extraout_x8_00;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  int extraout_w11;
  int extraout_w11_00;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar2 = *param_2;
  lVar3 = param_2[1];
  puVar5 = *(undefined8 **)(param_1 + 0xe8);
  if (puVar5 < *(undefined8 **)(param_1 + 0xf0)) {
    *puVar5 = uVar2;
    puVar5[1] = lVar3;
    if (lVar3 != 0) {
      do {
        func_0x00010868e784();
        puVar5 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    puVar5 = puVar5 + 2;
LAB_10868c85c:
    *(undefined8 **)(param_1 + 0xe8) = puVar5;
    return;
  }
  lVar9 = *(long *)(param_1 + 0xe0);
  lVar10 = (long)puVar5 - lVar9;
  lVar11 = lVar10 >> 4;
  uVar1 = lVar11 + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar7 = (long)*(undefined8 **)(param_1 + 0xf0) - lVar9;
    uVar8 = (long)uVar7 >> 3;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7fffffffffffffef < uVar7) {
      uVar8 = 0xfffffffffffffff;
    }
    if (uVar8 >> 0x3c == 0) {
      lVar4 = uVar8 << 4;
      __Znwm();
      puVar6 = (undefined8 *)(lVar4 + lVar10);
      *puVar6 = uVar2;
      puVar6[1] = lVar3;
      if (lVar3 != 0) {
        do {
          func_0x00010868e784();
        } while (extraout_w11_00 != 0);
        lVar9 = *(long *)(param_1 + 0xe0);
        lVar10 = *(long *)(param_1 + 0xe8) - lVar9;
        lVar11 = lVar10 >> 4;
        puVar6 = extraout_x8_00;
      }
      puVar5 = puVar6 + 2;
      _memcpy(puVar6 + lVar11 * -2,lVar9,lVar10);
      *(undefined8 **)(param_1 + 0xe0) = puVar6 + lVar11 * -2;
      *(undefined8 **)(param_1 + 0xe8) = puVar5;
      *(ulong *)(param_1 + 0xf0) = lVar4 + uVar8 * 0x10;
      if (lVar9 != 0) {
        __ZdlPv(lVar9);
      }
      goto LAB_10868c85c;
    }
  }
  else {
    FUN_10868cd74();
  }
  func_0x000104bd35f4();
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000107c27f44();
  }
  return;
}



/* Entry: 10868c870; end: 10868c88f;  */

void FUN_10868c870(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000107c27f44();
  }
  return;
}



/* Entry: 10868c890; end: 10868c963;  */

long * FUN_10868c890(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x10;
      func_0x00010868c8d8();
    }
    param_1[1] = lVar2;
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10868c964; end: 10868c96b;  */

void FUN_10868c964(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32358(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x260;
    func_0x000107c28d00();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10868c96c; end: 10868c9f7;  */

void FUN_10868c96c(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32358();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x260;
    func_0x000107c28d00();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10868c9f8; end: 10868ca63;  */

void FUN_10868c9f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x00010868e994();
    func_0x000107c279b0();
    func_0x0001006a2770();
  }
  uStack_38 = 1;
  func_0x000107c279b8(&uStack_40);
  return;
}



/* Entry: 10868ca64; end: 10868ca7f;  */

void FUN_10868ca64(long param_1)

{
  func_0x000107c27994();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 10868ca80; end: 10868caa7;  */

void FUN_10868ca80(long param_1,long param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x30);
  if (cVar1 != *(char *)(param_2 + 0x30)) {
    if (cVar1 == '\0') {
      FUN_10868cae8();
      *(undefined1 *)(param_1 + 0x30) = 1;
      return;
    }
    if (*(char *)(param_1 + 0x30) == '\x01') {
      func_0x000107c3040c();
      *(undefined1 *)(param_1 + 0x30) = 0;
    }
    return;
  }
  if (cVar1 == '\0') {
    return;
  }
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c30410();
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_2 + 0x14);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x1c) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_2 + 0x1c);
  }
  if (*(char *)(param_2 + 0x20) == '\x01') {
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  if (*(int *)(param_2 + 0x24) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_2 + 0x24);
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10868caa8; end: 10868cae7;  */

void FUN_10868caa8(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x000107c3040c();
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}



/* Entry: 10868cae8; end: 10868caf3;  */

undefined8 * FUN_10868cae8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_DAT_110cf3e18;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  func_0x00010b4f22b0(param_1,param_2);
  return param_1;
}



/* Entry: 10868caf4; end: 10868cb17;  */

void FUN_10868caf4(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000107c27f44();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 10868cb18; end: 10868cb9b;  */

void FUN_10868cb18(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32320();
  func_0x000107c28d24();
  func_0x000107c27cfc(unaff_x19 + 0x20,unaff_x20 + 0x20);
  func_0x000107c27cfc(unaff_x19 + 0x38,unaff_x20 + 0x38);
  func_0x000107c3232c(unaff_x19 + 0x50);
  func_0x000107c3239c();
  func_0x000107c28d24();
  func_0x000107c323a4();
  func_0x000107c28d24();
  func_0x000107c32344();
  func_0x000107c27c5c(unaff_x19 + 0x100,unaff_x20 + 0x100);
  func_0x000107c32340();
  FUN_10868ca80();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x168);
  *(undefined1 *)(unaff_x19 + 0x170) = *(undefined1 *)(unaff_x20 + 0x170);
  *(undefined8 *)(unaff_x19 + 0x168) = uVar1;
  func_0x000107c323a8();
  FUN_10868cbb8();
  func_0x000107c32314();
  return;
}



/* Entry: 10868cb9c; end: 10868cbb7;  */

void FUN_10868cb9c(long param_1)

{
  FUN_10868cc2c();
  *(undefined1 *)(param_1 + 0x260) = 1;
  return;
}



/* Entry: 10868cbb8; end: 10868cbdf;  */

void FUN_10868cbb8(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  ulong *puVar4;
  ulong *unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  cVar3 = *(char *)(param_1 + 0x78);
  if (cVar3 != *(char *)(param_2 + 0x78)) {
    if (cVar3 == '\0') {
      FUN_10868cc20();
      *(undefined1 *)(param_1 + 0x78) = 1;
      return;
    }
    if (*(char *)(param_1 + 0x78) == '\x01') {
      FUN_1089058f8();
      *(undefined1 *)(param_1 + 0x78) = 0;
    }
    return;
  }
  if (cVar3 == '\0') {
    return;
  }
  if (param_2 == param_1) {
    return;
  }
  func_0x000108907594();
  FUN_108905998();
  puVar4 = unaff_x20;
  func_0x000108907500();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000108907668();
  }
  func_0x00010890768c();
  if ((unaff_x20[2] & 1) != 0) {
    puVar4 = (ulong *)unaff_x21[6];
    if (puVar4 == (ulong *)0x0) {
      puVar4 = unaff_x22;
      FUN_1089071e4();
      unaff_x21[6] = (ulong)puVar4;
    }
    else {
      func_0x000108905f28();
    }
  }
  if (unaff_x20[7] != 0) {
    unaff_x21[7] = unaff_x20[7];
  }
  if (unaff_x20[8] != 0) {
    unaff_x21[8] = unaff_x20[8];
  }
  if (unaff_x20[9] != 0) {
    unaff_x21[9] = unaff_x20[9];
  }
  if (unaff_x20[10] != 0) {
    unaff_x21[10] = unaff_x20[10];
  }
  if ((char)unaff_x20[0xb] == '\x01') {
    *(undefined1 *)(unaff_x21 + 0xb) = 1;
  }
  func_0x0001089075a0();
  iVar1 = (int)unaff_x20[0xe];
  if (iVar1 == 0) goto LAB_108905e90;
  iVar2 = (int)unaff_x21[0xe];
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      puVar4 = unaff_x21;
      FUN_108905720();
    }
    *(int *)(unaff_x21 + 0xe) = iVar1;
  }
  if (iVar1 == 8) {
    if (iVar2 == 8) {
      puVar4 = (ulong *)unaff_x21[0xc];
      FUN_1088f5fd8();
      goto LAB_108905e90;
    }
    puVar4 = unaff_x22;
    func_0x000108907278();
  }
  else {
    if (iVar1 != 3) goto LAB_108905e90;
    if (iVar2 == 3) {
      puVar4 = (ulong *)unaff_x21[0xc];
      FUN_1088f5078();
      goto LAB_108905e90;
    }
    puVar4 = unaff_x22;
    FUN_108900670();
  }
  unaff_x21[0xc] = (ulong)puVar4;
LAB_108905e90:
  iVar1 = *(int *)((long)unaff_x20 + 0x74);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x74);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        puVar4 = unaff_x21;
        func_0x0001089057a0();
      }
      *(int *)((long)unaff_x21 + 0x74) = iVar1;
    }
    if (iVar1 == 7) {
      unaff_x21[0xd] = unaff_x20[0xd];
    }
    else if (iVar1 == 6) {
      if (iVar2 == 6) {
        puVar4 = (ulong *)unaff_x21[0xd];
        FUN_1088ec278();
      }
      else {
        func_0x0001089072b0();
        unaff_x21[0xd] = (ulong)unaff_x22;
        puVar4 = unaff_x22;
      }
    }
  }
  if ((unaff_x20[1] & 1) != 0) {
    func_0x00010890754c();
    if ((*puVar4 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10868cbe0; end: 10868cc1f;  */

void FUN_10868cbe0(long param_1)

{
  if (*(char *)(param_1 + 0x78) == '\x01') {
    FUN_1089058f8();
    *(undefined1 *)(param_1 + 0x78) = 0;
  }
  return;
}



/* Entry: 10868cc20; end: 10868cc2b;  */

undefined8 * FUN_10868cc20(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_110a90710;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010890752c();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  func_0x000108900070(param_1 + 3,0,param_2 + 0x18);
  iVar2 = *(int *)(param_2 + 0x70);
  *(int *)(param_1 + 0xe) = iVar2;
  *(undefined4 *)((long)param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    FUN_1089071e4(0,*(undefined8 *)(param_2 + 0x30));
    iVar2 = *(int *)(param_1 + 0xe);
  }
  param_1[6] = uVar1;
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  uVar5 = *(undefined8 *)(param_2 + 0x50);
  uVar4 = *(undefined8 *)(param_2 + 0x48);
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0x58);
  param_1[10] = uVar5;
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  param_1[7] = uVar1;
  if (iVar2 == 8) {
    uVar1 = 0;
    func_0x000108907278(0,*(undefined8 *)(param_2 + 0x60));
  }
  else {
    if (iVar2 != 3) goto LAB_1089058bc;
    uVar1 = 0;
    FUN_108900670(0,*(undefined8 *)(param_2 + 0x60));
  }
  param_1[0xc] = uVar1;
LAB_1089058bc:
  if (*(int *)((long)param_1 + 0x74) == 7) {
    param_1[0xd] = *(undefined8 *)(param_2 + 0x68);
  }
  else if (*(int *)((long)param_1 + 0x74) == 6) {
    uVar1 = 0;
    func_0x0001089072b0(0,*(undefined8 *)(param_2 + 0x68));
    param_1[0xd] = uVar1;
  }
  return param_1;
}



/* Entry: 10868cc2c; end: 10868cd07;  */

void FUN_10868cc2c(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c32320();
  func_0x000107c279d4();
  func_0x000107c27994(param_1 + 0x20,unaff_x20 + 0x20);
  func_0x000107c27994(unaff_x19 + 0x38,unaff_x20 + 0x38);
  func_0x000107c3232c(unaff_x19 + 0x50);
  func_0x000107c3239c();
  func_0x000107c279d4();
  func_0x000107c323a4();
  func_0x000107c279d4();
  func_0x000107c32344();
  func_0x000107c279a0(unaff_x19 + 0x100,unaff_x20 + 0x100);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x120);
  *(undefined8 *)(unaff_x19 + 0x128) = *(undefined8 *)(unaff_x20 + 0x128);
  *(undefined8 *)(unaff_x19 + 0x120) = uVar1;
  func_0x000107c28d2c(unaff_x19 + 0x130,unaff_x20 + 0x130);
  func_0x000107c32394();
  func_0x000107c323a8();
  FUN_10868cd08();
  func_0x000107c32314();
  return;
}



/* Entry: 10868cd08; end: 10868cd37;  */

void FUN_10868cd08(long param_1)

{
  func_0x000107c3235c();
  *(undefined1 *)(param_1 + 0x78) = 0;
  FUN_10868cd38();
  return;
}



/* Entry: 10868cd38; end: 10868cd4b;  */

void FUN_10868cd38(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_10868cc20();
    *(undefined1 *)(param_1 + 0x78) = 1;
    return;
  }
  return;
}



/* Entry: 10868cd4c; end: 10868cd73;  */

void FUN_10868cd4c(long param_1)

{
  func_0x000107c279a4(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10868cd74; end: 10868cd7f;  */

void FUN_10868cd74(long param_1)

{
  func_0x00010868e90c();
  func_0x000107c32348();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10868cd80; end: 10868ce2b;  */

void FUN_10868cd80(long param_1)

{
  func_0x000107c32348();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10868ce2c; end: 10868ce5f;  */

void FUN_10868ce2c(void)

{
  undefined8 uStack_30;
  
  func_0x00010868e5f0();
  if (uStack_30 != 0) {
    FUN_10868a8f4();
  }
  func_0x00010868e69c();
  return;
}



/* Entry: 10868ce60; end: 10868ce9b;  */

void FUN_10868ce60(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 10868ce9c; end: 10868ceab;  */

void FUN_10868ce9c(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000107c32348();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10868ceac; end: 10868cedf;  */

void FUN_10868ceac(void)

{
  undefined8 uStack_30;
  
  func_0x00010868e5f0();
  if (uStack_30 != 0) {
    FUN_10868a8f4();
  }
  func_0x00010868e69c();
  return;
}



/* Entry: 10868cee0; end: 10868ceef;  */

void FUN_10868cee0(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000107c32348();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10868cef0; end: 10868cf7f;  */

void FUN_10868cef0(void)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c32320();
  func_0x000107c28908();
  func_0x000107c3194c(unaff_x19 + 0x20,unaff_x20 + 0x20);
  func_0x000107c3194c(unaff_x19 + 0x38,unaff_x20 + 0x38);
  func_0x000107c3232c(unaff_x19 + 0x50);
  func_0x000107c3239c();
  func_0x000107c28908();
  func_0x000107c323a4();
  func_0x000107c28908();
  uVar3 = *(undefined8 *)(unaff_x20 + 0xf1);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xe9);
  uVar4 = *(undefined8 *)(unaff_x20 + 0xe0);
  *(undefined8 *)(unaff_x19 + 0xe8) = *(undefined8 *)(unaff_x20 + 0xe8);
  *(undefined8 *)(unaff_x19 + 0xe0) = uVar4;
  *(undefined8 *)(unaff_x19 + 0xf1) = uVar3;
  *(undefined8 *)(unaff_x19 + 0xe9) = uVar2;
  func_0x000107c27c54(unaff_x19 + 0x100,unaff_x20 + 0x100);
  func_0x000107c32340();
  FUN_10868cf80();
  uVar1 = *(undefined1 *)(unaff_x20 + 0x170);
  *(undefined8 *)(unaff_x19 + 0x168) = *(undefined8 *)(unaff_x20 + 0x168);
  *(undefined1 *)(unaff_x19 + 0x170) = uVar1;
  func_0x000107c323a8();
  FUN_10868cfcc();
  func_0x000107c32314();
  return;
}



/* Entry: 10868cf80; end: 10868cfa3;  */

undefined8 FUN_10868cf80(undefined8 param_1)

{
  FUN_10868cfa4();
  return param_1;
}



/* Entry: 10868cfa4; end: 10868cfcb;  */

long FUN_10868cfa4(long param_1,long param_2)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  
  cVar1 = *(char *)(param_1 + 0x30);
  if (cVar1 != *(char *)(param_2 + 0x30)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x30) == '\x01') {
        func_0x000107c3040c();
        *(undefined1 *)(param_1 + 0x30) = 0;
      }
      return param_1;
    }
    func_0x00010062af34();
    *(undefined1 *)(param_1 + 0x30) = 1;
    return param_1;
  }
  if (cVar1 != '\0') {
    if (param_1 != param_2) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      uVar3 = *(ulong *)(param_2 + 8);
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      if (uVar2 == uVar3) {
        func_0x00010062affc(param_1);
      }
      else {
        func_0x000107c30414(param_1);
      }
    }
    return param_1;
  }
  return param_1;
}



/* Entry: 10868cfcc; end: 10868cfef;  */

undefined8 FUN_10868cfcc(undefined8 param_1)

{
  FUN_10868cff0();
  return param_1;
}



/* Entry: 10868cff0; end: 10868d017;  */

long FUN_10868cff0(long param_1,long param_2)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  
  cVar1 = *(char *)(param_1 + 0x78);
  if (cVar1 != *(char *)(param_2 + 0x78)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x78) == '\x01') {
        FUN_1089058f8();
        *(undefined1 *)(param_1 + 0x78) = 0;
      }
      return param_1;
    }
    FUN_10868d098();
    *(undefined1 *)(param_1 + 0x78) = 1;
    return param_1;
  }
  if (cVar1 != '\0') {
    if (param_1 != param_2) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      uVar3 = *(ulong *)(param_2 + 8);
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      if (uVar2 == uVar3) {
        func_0x000108905fe0(param_1);
      }
      else {
        FUN_108905fac(param_1);
      }
    }
    return param_1;
  }
  return param_1;
}



/* Entry: 10868d018; end: 10868d07b;  */

long FUN_10868d018(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      func_0x000108905fe0(param_1);
    }
    else {
      FUN_108905fac(param_1);
    }
  }
  return param_1;
}



/* Entry: 10868d07c; end: 10868d097;  */

void FUN_10868d07c(long param_1)

{
  FUN_10868d098();
  *(undefined1 *)(param_1 + 0x78) = 1;
  return;
}



/* Entry: 10868d098; end: 10868d0a3;  */

undefined8 * FUN_10868d098(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110a90710;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0xe] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  *(undefined8 *)((long)param_1 + 0x51) = 0;
  *(undefined8 *)((long)param_1 + 0x49) = 0;
  FUN_10868d018(param_1,param_2);
  return param_1;
}



/* Entry: 10868d0a4; end: 10868d0ef;  */

undefined8 * FUN_10868d0a4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110a90710;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = param_2;
  param_1[0xe] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  *(undefined8 *)((long)param_1 + 0x51) = 0;
  *(undefined8 *)((long)param_1 + 0x49) = 0;
  FUN_10868d018(param_1,param_3);
  return param_1;
}



/* Entry: 10868d0f0; end: 10868d12f;  */

void FUN_10868d0f0(undefined8 param_1)

{
  undefined1 auStack_2a0 [624];
  
  FUN_10868d130(auStack_2a0,param_1);
  func_0x000107c323a0();
  FUN_10868d130();
  func_0x000107c32354();
  return;
}



/* Entry: 10868d130; end: 10868d14f;  */

void FUN_10868d130(void)

{
  func_0x00010868e9a8();
  FUN_10868d150();
  return;
}



/* Entry: 10868d150; end: 10868d177;  */

void FUN_10868d150(long param_1)

{
  func_0x000107c3235c();
  *(undefined1 *)(param_1 + 0x260) = 0;
  FUN_10868d178();
  return;
}



/* Entry: 10868d178; end: 10868d18b;  */

void FUN_10868d178(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x260) == '\x01') {
    func_0x00010062b1c0();
    *(undefined1 *)(param_1 + 0x260) = 1;
    return;
  }
  return;
}



/* Entry: 10868d18c; end: 10868d217;  */

undefined8 * FUN_10868d18c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_510 [624];
  undefined1 auStack_2a0 [624];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x00010868d6e8(auStack_2a0);
  func_0x00010868d6e8(auStack_510,param_3);
  FUN_10868d218(param_1,auStack_2a0,auStack_510);
  func_0x000107c32354();
  func_0x00010868e8fc();
  return param_1;
}



/* Entry: 10868d218; end: 10868d2a3;  */

void FUN_10868d218(undefined8 param_1)

{
  long *unaff_x19;
  long *unaff_x20;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  func_0x00010868e87c();
  uStack_38 = 0;
  uStack_40 = param_1;
  while ((((*(byte *)(unaff_x20 + 0x4d) & 1) != 0 || ((*(byte *)(unaff_x19 + 0x4d) & 1) != 0)) &&
         (*unaff_x20 != *unaff_x19))) {
    func_0x000107c28ce4();
    FUN_10868d2a4();
    func_0x000107c28d78();
  }
  uStack_38 = 1;
  func_0x00010868d6bc(&uStack_40);
  return;
}



/* Entry: 10868d2a4; end: 10868d303;  */

long FUN_10868d2a4(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x00010868d2e0();
    lVar2 = uVar1 + 0x260;
  }
  else {
    lVar2 = param_1;
    FUN_10868d304();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x260;
}



/* Entry: 10868d304; end: 10868d397;  */

long FUN_10868d304(undefined8 param_1)

{
  long *unaff_x19;
  long lVar1;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x000107c32320();
  FUN_10868d398();
  FUN_10868d484(auStack_58,param_1,(unaff_x19[1] - *unaff_x19) / 0x260,unaff_x19 + 2);
  func_0x000107c28d68(lStack_48);
  lStack_48 = lStack_48 + 0x260;
  FUN_10868d3f8();
  lVar1 = unaff_x19[1];
  func_0x00010868d654(auStack_58);
  return lVar1;
}



/* Entry: 10868d398; end: 10868d3f7;  */

long * FUN_10868d398(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar4;
  
  if (param_2 < (long *)0x6bca1af286bca2) {
    uVar1 = (param_1[2] - *param_1) / 0x260;
    plVar3 = (long *)(uVar1 * 2);
    if (plVar3 < param_2 || (long)plVar3 - (long)param_2 == 0) {
      plVar3 = param_2;
    }
    if (0x35e50d79435e4f < uVar1) {
      plVar3 = (long *)0x6bca1af286bca1;
    }
    return plVar3;
  }
  FUN_10868d478();
  func_0x000107c32358();
  plVar3 = param_1 + 2;
  lVar4 = param_2[1] + ((param_1[1] - *param_1) / -0x260) * 0x260;
  FUN_10868d524(plVar3,*param_1,param_1[1],lVar4);
  unaff_x19[1] = lVar4;
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
  return plVar3;
}



/* Entry: 10868d3f8; end: 10868d477;  */

void FUN_10868d3f8(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x000107c32358();
  lVar2 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x260) * 0x260;
  FUN_10868d524(param_1 + 2,*param_1,param_1[1],lVar2);
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



/* Entry: 10868d478; end: 10868d483;  */

long * FUN_10868d478(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  func_0x00010868e90c();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010868d4d0();
  }
  lVar1 = param_4 + param_3 * 0x260;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x260;
  return param_1;
}



/* Entry: 10868d484; end: 10868d4f3;  */

long * FUN_10868d484(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010868d4d0();
  }
  lVar1 = param_4 + param_3 * 0x260;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x260;
  return param_1;
}



/* Entry: 10868d4f4; end: 10868d523;  */

void FUN_10868d4f4(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  ulong unaff_x19;
  undefined1 auStack_70 [24];
  undefined1 uStack_58;
  long lStack_48;
  
  if (param_2 < 0x6bca1af286bca2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x260);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010868e87c();
  func_0x0001006a26cc();
  for (; param_2 != unaff_x19; param_2 = param_2 + 0x260) {
    func_0x000107c28d68(param_4,param_2);
    param_4 = lStack_48 + 0x260;
    lStack_48 = param_4;
  }
  uStack_58 = 1;
  FUN_10868d5a4();
  FUN_10868d5d4(auStack_70);
  return;
}



/* Entry: 10868d524; end: 10868d5a3;  */

void FUN_10868d524(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long unaff_x19;
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  long lStack_38;
  
  func_0x00010868e87c();
  func_0x0001006a26cc();
  for (; param_2 != unaff_x19; param_2 = param_2 + 0x260) {
    func_0x000107c28d68(param_4,param_2);
    param_4 = lStack_38 + 0x260;
    lStack_38 = param_4;
  }
  uStack_48 = 1;
  FUN_10868d5a4();
  FUN_10868d5d4(auStack_60);
  return;
}



/* Entry: 10868d5a4; end: 10868d5d3;  */

void FUN_10868d5a4(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x260) {
    func_0x000107c28d00();
  }
  return;
}



/* Entry: 10868d5d4; end: 10868d603;  */

long FUN_10868d5d4(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10868d604(param_1);
  }
  return param_1;
}



/* Entry: 10868d604; end: 10868d623;  */

void FUN_10868d604(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x260;
    func_0x000107c28d00();
  }
  return;
}



/* Entry: 10868d624; end: 10868d67f;  */

void FUN_10868d624(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x260;
    func_0x000107c28d00();
  }
  return;
}



/* Entry: 10868d680; end: 10868d687;  */

void FUN_10868d680(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32358(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x260;
    func_0x000107c28d00();
  }
  return;
}



/* Entry: 10868d688; end: 10868d707;  */

void FUN_10868d688(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32358();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x260;
    func_0x000107c28d00();
  }
  return;
}



/* Entry: 10868d708; end: 10868d737;  */

void FUN_10868d708(long param_1)

{
  func_0x000107c3235c();
  *(undefined1 *)(param_1 + 0x260) = 0;
  FUN_10868d738();
  return;
}



/* Entry: 10868d738; end: 10868d74b;  */

void FUN_10868d738(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x260) == '\x01') {
    FUN_10868cc2c();
    *(undefined1 *)(param_1 + 0x260) = 1;
    return;
  }
  return;
}



/* Entry: 10868d74c; end: 10868d827;  */

long FUN_10868d74c(long *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar8 = param_1[1];
  if ((uVar8 != 0) && (param_1[3] != 0)) {
    uVar3 = param_2;
    FUN_108848654();
    uVar9 = uVar8 - 1;
    if ((uVar8 & uVar9) == 0) {
      uVar10 = uVar3 & uVar9;
    }
    else {
      uVar10 = uVar3;
      if (uVar8 <= uVar3) {
        uVar1 = 0;
        uVar7 = (uint)uVar8;
        if (uVar7 != 0) {
          uVar1 = (uint)uVar3 / uVar7;
        }
        uVar10 = (ulong)((uint)uVar3 - uVar1 * uVar7);
      }
    }
    plVar6 = *(long **)(*param_1 + uVar10 * 8);
    if (plVar6 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
          return 0;
        }
        uVar5 = plVar6[1];
        if (uVar5 != uVar3) break;
        lVar4 = (long)(plVar6 + 2);
        func_0x000107c28078(lVar4,param_2);
        if ((int)lVar4 != 0) {
          return (long)plVar6;
        }
      }
      if ((uVar8 & uVar9) == 0) {
        uVar5 = uVar5 & uVar9;
      }
      else if (uVar8 <= uVar5) {
        uVar2 = 0;
        if (uVar8 != 0) {
          uVar2 = uVar5 / uVar8;
        }
        uVar5 = uVar5 - uVar2 * uVar8;
      }
    } while (uVar5 == uVar10);
  }
  return 0;
}



/* Entry: 10868d828; end: 10868d873;  */

void FUN_10868d828(void)

{
  undefined1 auStack_290 [608];
  
  func_0x000107c32358();
  func_0x000107c28d68(auStack_290);
  FUN_10868cef0();
  func_0x000107c323a0();
  FUN_10868cef0();
  func_0x000107c28d00(auStack_290);
  return;
}



/* Entry: 10868d874; end: 10868d8af;  */

void FUN_10868d874(void)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c32370();
  FUN_10868d8b0(auStack_38);
  func_0x000107c3233c();
  return;
}



/* Entry: 10868d8b0; end: 10868d90b;  */

void FUN_10868d8b0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = &PTR_FUN_110a90710;
  param_1[1] = 0;
  param_1[0xe] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  *(undefined8 *)((long)param_1 + 0x51) = 0;
  *(undefined8 *)((long)param_1 + 0x49) = 0;
  func_0x000107c3034c(param_1,*param_2,*(int *)(param_2 + 1) - (int)*param_2);
  return;
}



/* Entry: 10868d90c; end: 10868d927;  */

void FUN_10868d90c(long param_1)

{
  FUN_10868d098();
  *(undefined1 *)(param_1 + 0x78) = 1;
  return;
}



/* Entry: 10868d928; end: 10868db5b;  */

undefined1  [16] FUN_10868d928(long *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  ulong unaff_x26;
  ulong uVar11;
  undefined1 auVar12 [16];
  long *aplStack_78 [3];
  
  uVar7 = param_2;
  FUN_108848654();
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    uVar11 = uVar10 - 1;
    uVar9 = (uint)uVar10;
    if ((uVar10 & uVar11) == 0) {
      unaff_x26 = uVar9 - 1 & uVar7;
    }
    else {
      unaff_x26 = uVar7;
      if (uVar10 <= uVar7) {
        uVar1 = 0;
        if (uVar9 != 0) {
          uVar1 = (uint)uVar7 / uVar9;
        }
        unaff_x26 = (ulong)((uint)uVar7 - uVar1 * uVar9);
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x26 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_10868d9f8;
          uVar4 = plVar8[1];
          if (uVar4 != uVar7) break;
          plVar6 = plVar8 + 2;
          func_0x000107c28078(plVar6,param_2);
          if (((ulong)plVar6 & 1) != 0) {
            uVar3 = 0;
            goto LAB_10868db2c;
          }
        }
        if ((uVar10 & uVar11) == 0) {
          uVar4 = uVar4 & uVar11;
        }
        else if (uVar10 <= uVar4) {
          uVar2 = 0;
          if (uVar10 != 0) {
            uVar2 = uVar4 / uVar10;
          }
          uVar4 = uVar4 - uVar2 * uVar10;
        }
      } while (uVar4 == unaff_x26);
    }
  }
LAB_10868d9f8:
  func_0x00010868e7b0(aplStack_78);
  FUN_10868db5c();
  if ((uVar10 == 0) || (*(float *)(param_1 + 4) * (float)uVar10 < (float)(param_1[3] + 1))) {
    uVar11 = 1;
    if (2 < uVar10) {
      uVar11 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar11 = uVar11 | uVar10 << 1;
    uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar11 <= uVar10) {
      uVar11 = uVar10;
    }
    FUN_10868dbfc(param_1,uVar11);
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x26 = (int)uVar10 - 1 & uVar7;
    }
    else {
      unaff_x26 = uVar7;
      if (uVar10 <= uVar7) {
        uVar11 = 0;
        if (uVar10 != 0) {
          uVar11 = uVar7 / uVar10;
        }
        unaff_x26 = uVar7 - uVar11 * uVar10;
      }
    }
  }
  plVar8 = aplStack_78[0];
  lVar5 = *param_1;
  plVar6 = *(long **)(lVar5 + unaff_x26 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
    *(long **)(lVar5 + unaff_x26 * 8) = plVar6;
    if (*aplStack_78[0] != 0) {
      uVar7 = *(ulong *)(*aplStack_78[0] + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar7 = uVar7 & uVar10 - 1;
      }
      else if (uVar10 <= uVar7) {
        uVar11 = 0;
        if (uVar10 != 0) {
          uVar11 = uVar7 / uVar10;
        }
        uVar7 = uVar7 - uVar11 * uVar10;
      }
      *(long **)(lVar5 + uVar7 * 8) = aplStack_78[0];
    }
  }
  else {
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
  }
  aplStack_78[0] = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_10868ddf0(aplStack_78);
  uVar3 = 1;
LAB_10868db2c:
  auVar12._8_8_ = uVar3;
  auVar12._0_8_ = plVar8;
  return auVar12;
}



/* Entry: 10868db5c; end: 10868dbbf;  */

void FUN_10868db5c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  FUN_10868dbc0(puVar1 + 2,param_4,param_5);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10868dbc0; end: 10868dbfb;  */

long FUN_10868dbc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c27994();
  func_0x000107c27994(lVar1 + 0x18,param_3);
  return param_1;
}



/* Entry: 10868dbfc; end: 10868dcbf;  */

void FUN_10868dbfc(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar2 = param_1;
  plVar3 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar2 = param_2;
  }
  plVar8 = (long *)param_1[1];
  if (param_2 <= plVar8) {
    if (param_2 < plVar8) {
      plVar2 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((plVar8 < (long *)0x3) || (((ulong)plVar8 & (long)plVar8 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar2) {
        plVar2 = (long *)(1L << (-LZCOUNT((long)plVar2 - 1) & 0x3fU));
      }
      if (param_2 <= plVar2) {
        param_2 = plVar2;
      }
      if (param_2 < plVar8) goto LAB_10868dc44;
    }
    return;
  }
LAB_10868dc44:
  func_0x00010868e7b0();
  if (plVar3 == (long *)0x0) {
    FUN_10868ddbc(plVar2);
    plVar2[1] = 0;
  }
  else {
    plVar8 = plVar2 + 1;
    FUN_10868ddd4(plVar8);
    FUN_10868ddbc(plVar2,plVar8);
    plVar2[1] = (long)plVar3;
    lVar4 = *plVar2;
    for (plVar8 = (long *)0x0; plVar3 != plVar8; plVar8 = (long *)((long)plVar8 + 1)) {
      *(undefined8 *)(lVar4 + (long)plVar8 * 8) = 0;
    }
    plVar8 = (long *)plVar2[2];
    if (plVar8 != (long *)0x0) {
      plVar6 = (long *)plVar8[1];
      uVar5 = (long)plVar3 - 1;
      uVar1 = 0;
      if (plVar3 != (long *)0x0) {
        uVar1 = (ulong)plVar6 / (ulong)plVar3;
      }
      plVar7 = plVar6;
      if (plVar3 <= plVar6) {
        plVar7 = (long *)((long)plVar6 - uVar1 * (long)plVar3);
      }
      if (((ulong)plVar3 & uVar5) == 0) {
        plVar7 = (long *)((ulong)plVar6 & uVar5);
      }
      *(long **)(lVar4 + (long)plVar7 * 8) = plVar2 + 2;
      while (plVar2 = plVar8, plVar8 = (long *)*plVar2, plVar8 != (long *)0x0) {
        plVar6 = (long *)plVar8[1];
        if (((ulong)plVar3 & uVar5) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar5);
        }
        else if (plVar3 <= plVar6) {
          uVar1 = 0;
          if (plVar3 != (long *)0x0) {
            uVar1 = (ulong)plVar6 / (ulong)plVar3;
          }
          plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar3);
        }
        if (plVar6 != plVar7) {
          if (*(long *)(lVar4 + (long)plVar6 * 8) == 0) {
            *(long **)(lVar4 + (long)plVar6 * 8) = plVar2;
            plVar7 = plVar6;
          }
          else {
            *plVar2 = *plVar8;
            *plVar8 = **(undefined8 **)(lVar4 + (long)plVar6 * 8);
            **(long **)(lVar4 + (long)plVar6 * 8) = (long)plVar8;
            plVar8 = plVar2;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10868dcc0; end: 10868ddbb;  */

void FUN_10868dcc0(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_10868ddbc(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_10868ddd4(plVar3);
    FUN_10868ddbc(param_1,plVar3);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
      *(undefined8 *)(lVar1 + uVar2 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar6 = plVar3[1];
      uVar5 = param_2 - 1;
      uVar2 = 0;
      if (param_2 != 0) {
        uVar2 = uVar6 / param_2;
      }
      uVar7 = uVar6;
      if (param_2 <= uVar6) {
        uVar7 = uVar6 - uVar2 * param_2;
      }
      if ((param_2 & uVar5) == 0) {
        uVar7 = uVar6 & uVar5;
      }
      *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
      while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
        uVar2 = plVar3[1];
        if ((param_2 & uVar5) == 0) {
          uVar2 = uVar2 & uVar5;
        }
        else if (param_2 <= uVar2) {
          uVar6 = 0;
          if (param_2 != 0) {
            uVar6 = uVar2 / param_2;
          }
          uVar2 = uVar2 - uVar6 * param_2;
        }
        if (uVar2 != uVar7) {
          if (*(long *)(lVar1 + uVar2 * 8) == 0) {
            *(long **)(lVar1 + uVar2 * 8) = plVar4;
            uVar7 = uVar2;
          }
          else {
            *plVar4 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar1 + uVar2 * 8);
            **(long **)(lVar1 + uVar2 * 8) = (long)plVar3;
            plVar3 = plVar4;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10868ddbc; end: 10868ddd3;  */

void FUN_10868ddbc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10868ddd4; end: 10868ddef;  */

long FUN_10868ddd4(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  FUN_10868de14();
  return param_1;
}



/* Entry: 10868ddf0; end: 10868de13;  */

undefined8 FUN_10868ddf0(undefined8 param_1)

{
  FUN_10868de14(param_1,0);
  return param_1;
}



/* Entry: 10868de14; end: 10868de2b;  */

void FUN_10868de14(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x00010868cda4(lVar1 + 0x10);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10868de2c; end: 10868dea3;  */

void FUN_10868de2c(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x00010868cda4(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10868dea4; end: 10868dfbf;  */

void FUN_10868dea4(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10868df58;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10868df58;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_10868df58:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 10868dfc0; end: 10868dfff;  */

void FUN_10868dfc0(void)

{
  undefined8 uStack_30;
  
  func_0x00010868e5f0();
  if (uStack_30 != 0) {
    FUN_10868caf4(uStack_30 + 0x178);
    FUN_10868be24(uStack_30);
  }
  func_0x00010868e69c();
  return;
}



/* Entry: 10868e000; end: 10868e00f;  */

void FUN_10868e000(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000107c32348();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10868e010; end: 10868e04f;  */

void FUN_10868e010(void)

{
  undefined8 uStack_30;
  
  func_0x00010868e5f0();
  if (uStack_30 != 0) {
    FUN_10868caf4(uStack_30 + 0x158);
    FUN_10868be24(uStack_30);
  }
  func_0x00010868e69c();
  return;
}



/* Entry: 10868e050; end: 10868e05f;  */

void FUN_10868e050(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000107c32348();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10868e060; end: 10868e09f;  */

void FUN_10868e060(void)

{
  undefined8 uStack_30;
  
  func_0x00010868e5f0();
  if (uStack_30 != 0) {
    FUN_10868caf4(uStack_30 + 0x138);
    FUN_10868a8f4(uStack_30);
  }
  func_0x00010868e69c();
  return;
}



/* Entry: 10868e0a0; end: 10868e0cb;  */

void FUN_10868e0a0(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000107c32348();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10868e0cc; end: 10868e0f3;  */

long FUN_10868e0cc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10868e0f4();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10868e0f4; end: 10868e123;  */

void FUN_10868e0f4(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0xea0ea0ea0ea0eb) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x118);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110a62a10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10868e124; end: 10868e127;  */

void FUN_10868e124(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a62a10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10868e128; end: 10868e13b;  */

void FUN_10868e128(void)

{
  FUN_10868e494();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10868e13c; end: 10868e14b;  */

void FUN_10868e13c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010868e144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10868e14c; end: 10868e177;  */

undefined8 * FUN_10868e14c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a62a60;
  func_0x00010868c9a0(param_1 + 1);
  return param_1;
}


