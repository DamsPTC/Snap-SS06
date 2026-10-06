/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10729bba4; end: 10729bc6b;  */

void FUN_10729bba4(long param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 *puVar2;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 auStack_a0 [6];
  undefined4 uStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_58;
  undefined1 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar1 = param_1;
  func_0x0001077f3c4c();
  func_0x0001077f3790();
  auStack_a0[0] = (undefined4)param_1;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  ppuStack_80 = &PTR_FUN_110996720;
  uStack_78 = 0;
  uStack_58 = 0;
  uStack_54 = 1;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  puVar2 = auStack_a0;
  uStack_60 = auStack_a0[0];
  FUN_10729d56c(puVar2,&DAT_10f408bee,(&PTR_DAT_110998988)[param_2]);
  uStack_b0 = *(undefined8 *)(lVar1 + 8);
  uStack_a8 = 3;
  func_0x00010743f9dc((undefined8 *)(lVar1 + 8),puVar2,param_3,&uStack_b0,7);
  FUN_107262330(auStack_a0);
  return;
}



/* Entry: 10729bc6c; end: 10729bc7b;  */

void FUN_10729bc6c(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  
  uVar2 = (param_3 - param_2) / 0x1b0;
  func_0x00010729e524();
  if ((ulong)(extraout_x8 / 0x1b0) < uVar2) {
    unaff_x22 = unaff_x19;
    FUN_10729bd60();
    func_0x00010729ec28();
    FUN_10729bde0();
    func_0x00010729ebf0();
    func_0x00010729bd94();
    func_0x00010729e9ac();
  }
  else {
    if (unaff_x21 <= (ulong)((unaff_x19[1] - param_3) / 0x1b0)) {
      func_0x00010729ed90();
      FUN_10729bf30();
      plVar1 = unaff_x19;
      func_0x00010729e5f0();
      plVar1 = (long *)plVar1[1];
      while (plVar1 != unaff_x19) {
        plVar1 = plVar1 + -0x36;
        func_0x00010729abec();
      }
      *(long **)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    FUN_10729bf30();
    func_0x00010729e8bc(unaff_x19[1] - *unaff_x19);
  }
  func_0x00010729efa8();
  unaff_x22 = unaff_x22 + 2;
  func_0x00010729be38();
  unaff_x19[1] = (long)unaff_x22;
  return;
}



/* Entry: 10729bc7c; end: 10729bd33;  */

void FUN_10729bc7c(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long *plVar1;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  
  func_0x00010729e524();
  if ((ulong)(extraout_x8 / 0x1b0) < param_4) {
    unaff_x22 = unaff_x19;
    FUN_10729bd60();
    func_0x00010729ec28();
    FUN_10729bde0();
    func_0x00010729ebf0();
    func_0x00010729bd94();
    func_0x00010729e9ac();
  }
  else {
    if (unaff_x21 <= (ulong)((unaff_x19[1] - param_3) / 0x1b0)) {
      func_0x00010729ed90();
      FUN_10729bf30();
      plVar1 = unaff_x19;
      func_0x00010729e5f0();
      plVar1 = (long *)plVar1[1];
      while (plVar1 != unaff_x19) {
        plVar1 = plVar1 + -0x36;
        func_0x00010729abec();
      }
      *(long **)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    FUN_10729bf30();
    func_0x00010729e8bc(unaff_x19[1] - *unaff_x19);
  }
  func_0x00010729efa8();
  unaff_x22 = unaff_x22 + 2;
  func_0x00010729be38();
  unaff_x19[1] = (long)unaff_x22;
  return;
}



/* Entry: 10729bd34; end: 10729bd5f;  */

void FUN_10729bd34(long param_1)

{
  long unaff_x19;
  
  func_0x00010729efa8();
  param_1 = param_1 + 0x10;
  func_0x00010729be38();
  *(long *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 10729bd60; end: 10729bddf;  */

void FUN_10729bd60(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10729cb98();
    func_0x00010729ecc4();
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10729bde0; end: 10729be4b;  */

long * FUN_10729bde0(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if ((long *)0x97b425ed097b42 < param_2) {
    FUN_10729cba0();
    FUN_10729be4c();
    return param_1;
  }
  uVar1 = (param_1[2] - *param_1) / 0x1b0;
  plVar2 = (long *)(uVar1 * 2);
  if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
    plVar2 = param_2;
  }
  if (0x4bda12f684bda0 < uVar1) {
    plVar2 = (long *)0x97b425ed097b42;
  }
  return plVar2;
}



/* Entry: 10729be4c; end: 10729bec3;  */

long FUN_10729be4c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  long lStack_38;
  
  func_0x00010729e460();
  uStack_48 = 0;
  for (; param_2 != param_3; param_2 = param_2 + 0x1b0) {
    FUN_10729b464(param_4,param_2);
    param_4 = lStack_38 + 0x1b0;
    lStack_38 = param_4;
  }
  func_0x00010729ef18();
  FUN_10729bec4(auStack_60);
  return param_4;
}



/* Entry: 10729bec4; end: 10729beef;  */

void FUN_10729bec4(void)

{
  uint extraout_w8;
  
  func_0x00010729eba4();
  if ((extraout_w8 & 1) == 0) {
    FUN_10729bef0();
  }
  return;
}



/* Entry: 10729bef0; end: 10729beff;  */

void FUN_10729bef0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  func_0x00010729efec();
  while (param_3 != param_5) {
    param_3 = param_3 + -0x1b0;
    func_0x00010729abec();
  }
  return;
}



/* Entry: 10729bf00; end: 10729bf2f;  */

void FUN_10729bf00(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x1b0;
    func_0x00010729abec();
  }
  return;
}



/* Entry: 10729bf30; end: 10729bf4b;  */

void FUN_10729bf30(void)

{
  func_0x00010729e688();
  FUN_10729bf4c();
  return;
}



/* Entry: 10729bf4c; end: 10729bf8f;  */

void FUN_10729bf4c(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010729e624();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x1b0) {
    func_0x00010729f1b0();
    FUN_10729bf90();
  }
  func_0x00010729ea48();
  return;
}



/* Entry: 10729bf90; end: 10729c17f;  */

void FUN_10729bf90(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x00010729e5f0();
  func_0x00010729c000();
  FUN_107262f3c(unaff_x20 + 0xf0,unaff_x19 + 0xf0);
  FUN_107299380(unaff_x20 + 0x128,unaff_x19 + 0x128);
  func_0x0001006072c8(unaff_x20 + 0x138,unaff_x19 + 0x138);
  func_0x00010729c158(unaff_x20 + 0x150,unaff_x19 + 0x150);
  uVar4 = *(undefined8 *)(unaff_x19 + 400);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x188);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x1a0);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x198);
  uVar6 = *(undefined8 *)(unaff_x19 + 0x180);
  uVar5 = *(undefined8 *)(unaff_x19 + 0x178);
  *(undefined8 *)(unaff_x20 + 0x1a5) = *(undefined8 *)(unaff_x19 + 0x1a5);
  *(undefined8 *)(unaff_x20 + 400) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x188) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x1a0) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x198) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x180) = uVar6;
  *(undefined8 *)(unaff_x20 + 0x178) = uVar5;
  return;
}



/* Entry: 10729c180; end: 10729c233;  */

void FUN_10729c180(long param_1)

{
  long *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  
  func_0x00010729e8dc();
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10729c234();
    for (; (unaff_x19 != (long *)0x0 && (unaff_x21 != unaff_x20)); unaff_x21 = (long *)*unaff_x21) {
      FUN_10729c258();
      unaff_x19 = (long *)*unaff_x19;
      func_0x00010729e9ac();
      func_0x00010729c28c();
    }
    func_0x00010729e9ac();
    func_0x000107293af4();
  }
  for (; unaff_x21 != unaff_x20; unaff_x21 = (long *)*unaff_x21) {
    FUN_10729c2c0();
  }
  return;
}



/* Entry: 10729c234; end: 10729c257;  */

long FUN_10729c234(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
    *(undefined8 *)(*param_1 + lVar1 * 8) = 0;
  }
  lVar1 = param_1[2];
  param_1[2] = 0;
  param_1[3] = 0;
  return lVar1;
}



/* Entry: 10729c258; end: 10729c2bf;  */

undefined8 FUN_10729c258(undefined8 param_1,long param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 unaff_x19;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_2,param_3);
  func_0x00010729ebb0(param_2 + 0x18,param_3 + 0x18);
  if (!(bool)in_ZR) {
    func_0x00010729e894();
    FUN_10729c334();
  }
  return unaff_x19;
}



/* Entry: 10729c2c0; end: 10729c30b;  */

undefined8 FUN_10729c2c0(void)

{
  undefined8 unaff_x19;
  undefined8 auStack_38 [3];
  
  func_0x00010729efb4();
  FUN_10729cb1c();
  func_0x00010729c28c();
  auStack_38[0] = 0;
  FUN_107293a30(auStack_38);
  return unaff_x19;
}



/* Entry: 10729c30c; end: 10729c333;  */

void FUN_10729c30c(void)

{
  undefined1 in_ZR;
  
  func_0x00010729ebb0();
  if (!(bool)in_ZR) {
    func_0x00010729e894();
    FUN_10729c334();
  }
  return;
}



/* Entry: 10729c334; end: 10729c3e3;  */

void FUN_10729c334(long param_1)

{
  long *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  
  func_0x00010729e8dc();
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10729c3e4();
    for (; (unaff_x19 != (long *)0x0 && (unaff_x21 != unaff_x20)); unaff_x21 = (long *)*unaff_x21) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (unaff_x19 + 2,unaff_x21 + 2);
      unaff_x19 = (long *)*unaff_x19;
      func_0x00010729e9ac();
      FUN_10729c408();
    }
    func_0x00010729e9ac();
    func_0x0001005d0500();
  }
  for (; unaff_x21 != unaff_x20; unaff_x21 = (long *)*unaff_x21) {
    FUN_10729c43c();
  }
  return;
}



/* Entry: 10729c3e4; end: 10729c407;  */

long FUN_10729c3e4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
    *(undefined8 *)(*param_1 + lVar1 * 8) = 0;
  }
  lVar1 = param_1[2];
  param_1[2] = 0;
  param_1[3] = 0;
  return lVar1;
}



/* Entry: 10729c408; end: 10729c43b;  */

void FUN_10729c408(void)

{
  func_0x00010729e5f0();
  func_0x00010729f0dc();
  func_0x00010729e6c4();
  FUN_10729c488();
  func_0x00010729ea48();
  FUN_10729c580();
  return;
}



/* Entry: 10729c43c; end: 10729c487;  */

undefined8 FUN_10729c43c(void)

{
  undefined8 unaff_x19;
  undefined8 auStack_38 [3];
  
  func_0x00010729efb4();
  FUN_10729c7b0();
  FUN_10729c408();
  auStack_38[0] = 0;
  func_0x000100133b04(auStack_38);
  return unaff_x19;
}



/* Entry: 10729c488; end: 10729c57f;  */

long * FUN_10729c488(undefined8 param_1,undefined8 param_2,long *param_3)

{
  byte bVar1;
  undefined1 in_NG;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong unaff_x20;
  long *unaff_x21;
  long *plVar5;
  ulong unaff_x22;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  
  func_0x00010729f100();
  func_0x000100601028();
  func_0x00010729e924();
  if ((unaff_x22 == 0) || (func_0x00010729edac(param_1,param_2,(float)unaff_x22), (bool)in_NG)) {
    func_0x00010729e904();
    func_0x00010729e34c();
    param_3 = unaff_x21;
    FUN_10729c638();
    unaff_x22 = unaff_x21[1];
  }
  uVar6 = unaff_x22 - 1;
  if ((unaff_x22 & uVar6) == 0) {
    uVar7 = uVar6 & unaff_x20;
  }
  else {
    uVar7 = unaff_x20;
    if (unaff_x22 <= unaff_x20) {
      uVar7 = 0;
      if (unaff_x22 != 0) {
        uVar7 = unaff_x20 / unaff_x22;
      }
      uVar7 = unaff_x20 - uVar7 * unaff_x22;
    }
  }
  plVar5 = *(long **)(*unaff_x21 + uVar7 * 8);
  if (plVar5 != (long *)0x0) {
    uVar8 = 0;
    bVar1 = 0;
    for (; *plVar5 != 0; plVar5 = (long *)*plVar5) {
      uVar3 = *(ulong *)(*plVar5 + 8);
      if ((unaff_x22 & uVar6) == 0) {
        uVar4 = uVar3 & uVar6;
      }
      else {
        uVar4 = uVar3;
        if (unaff_x22 <= uVar3) {
          uVar4 = 0;
          if (unaff_x22 != 0) {
            uVar4 = uVar3 / unaff_x22;
          }
          uVar4 = uVar3 - uVar4 * unaff_x22;
        }
      }
      if (uVar4 != uVar7) {
        return plVar5;
      }
      if (uVar3 == unaff_x20) {
        func_0x00010729f08c();
      }
      else {
        param_3 = (long *)0x0;
      }
      bVar2 = (uint)param_3 != uVar8;
      if ((bool)(bVar1 & bVar2)) {
        return plVar5;
      }
      uVar8 = uVar8 | bVar2;
      bVar1 = bVar1 | bVar2;
    }
  }
  return plVar5;
}



/* Entry: 10729c580; end: 10729c637;  */

void FUN_10729c580(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong uVar2;
  long extraout_x9;
  ulong uVar3;
  ulong extraout_x10;
  ulong uVar4;
  long extraout_x11;
  
  uVar1 = param_1[1];
  uVar2 = param_2[1];
  uVar3 = uVar1 - 1;
  if ((uVar1 & uVar3) == 0) {
    uVar2 = uVar3 & uVar2;
  }
  else if (uVar1 <= uVar2) {
    uVar4 = 0;
    if (uVar1 != 0) {
      uVar4 = uVar2 / uVar1;
    }
    uVar2 = uVar2 - uVar4 * uVar1;
  }
  if (param_3 == (long *)0x0) {
    func_0x00010729efcc();
    if (extraout_x9 != 0) {
      uVar2 = *(ulong *)(extraout_x9 + 8);
      if ((extraout_x8 & extraout_x10) == 0) {
        uVar2 = uVar2 & extraout_x10;
      }
      else if (extraout_x8 <= uVar2) {
        uVar1 = 0;
        if (extraout_x8 != 0) {
          uVar1 = uVar2 / extraout_x8;
        }
        uVar2 = uVar2 - uVar1 * extraout_x8;
      }
      *(long **)(extraout_x11 + uVar2 * 8) = param_2;
    }
  }
  else {
    *param_2 = *param_3;
    *param_3 = (long)param_2;
    if (*param_2 != 0) {
      uVar4 = *(ulong *)(*param_2 + 8);
      if ((uVar1 & uVar3) == 0) {
        uVar4 = uVar4 & uVar3;
      }
      else if (uVar1 <= uVar4) {
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = uVar4 / uVar1;
        }
        uVar4 = uVar4 - uVar3 * uVar1;
      }
      if (uVar4 != uVar2) {
        *(long **)(*param_1 + uVar4 * 8) = param_2;
      }
    }
  }
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10729c638; end: 10729c6b3;  */

void FUN_10729c638(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  long extraout_x8_01;
  ulong extraout_x9;
  ulong extraout_x9_00;
  undefined8 extraout_x9_01;
  ulong unaff_x21;
  ulong unaff_x22;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  
  func_0x00010729ef90();
  if ((!(bool)in_ZR) && (func_0x00010729eef4(), !(bool)in_ZR)) {
    func_0x00010729ebe8();
  }
  func_0x00010729eed0();
  if (!(bool)in_CY || (bool)in_ZR) {
    if (!(bool)in_CY) {
      func_0x00010729e330();
      if (((bool)in_CY) && (func_0x00010729eec4(), extraout_x8 == 0)) {
        func_0x00010729e2b0();
      }
      else {
        __ZNSt3__112__next_primeEm();
      }
      func_0x00010729e884();
      if (!(bool)in_CY) goto LAB_10729c670;
    }
    return;
  }
LAB_10729c670:
  func_0x00010729eb1c();
  func_0x00010729f100();
  if (param_2 == 0) {
    func_0x000100133ac4(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    uVar3 = param_1 + 8;
    func_0x0001001339ac();
    func_0x00010729ebf0();
    func_0x000100133ac4();
    func_0x00010729edc8();
    uVar7 = extraout_x9;
    while (bVar2 = param_2 == uVar7, !bVar2) {
      func_0x00010729eeb8();
      uVar7 = extraout_x9_00;
    }
    plVar5 = *(long **)(param_1 + 0x10);
    if (plVar5 != (long *)0x0) {
      func_0x00010729ee48();
      if (bVar2) {
        unaff_x22 = unaff_x22 & unaff_x21;
      }
      else if (param_2 <= unaff_x22) {
        uVar7 = 0;
        if (param_2 != 0) {
          uVar7 = unaff_x22 / param_2;
        }
        unaff_x22 = unaff_x22 - uVar7 * param_2;
      }
      *(undefined8 *)(extraout_x8_00 + unaff_x22 * 8) = extraout_x9_01;
      lVar4 = extraout_x8_00;
      while (plVar6 = plVar5, plVar5 = (long *)*plVar6, plVar5 != (long *)0x0) {
        uVar7 = plVar5[1];
        if ((param_2 & unaff_x21) == 0) {
          uVar7 = uVar7 & unaff_x21;
        }
        else if (param_2 <= uVar7) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar1 * param_2;
        }
        if (uVar7 != unaff_x22) {
          if (*(long *)(lVar4 + uVar7 * 8) == 0) {
            *(long **)(lVar4 + uVar7 * 8) = plVar6;
            unaff_x22 = uVar7;
          }
          else {
            do {
              if (*plVar5 == 0) break;
              func_0x00010729f0c0();
              plVar5 = (long *)*plVar5;
            } while ((uVar3 & 1) != 0);
            func_0x00010729e544();
            plVar5 = plVar6;
            lVar4 = extraout_x8_01;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10729c6b4; end: 10729c7af;  */

void FUN_10729c6b4(long param_1,ulong param_2)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  ulong extraout_x9;
  ulong extraout_x9_00;
  undefined8 extraout_x9_01;
  ulong unaff_x21;
  ulong unaff_x22;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  
  func_0x00010729f100();
  if (param_2 == 0) {
    func_0x000100133ac4(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    uVar3 = param_1 + 8;
    func_0x0001001339ac();
    func_0x00010729ebf0();
    func_0x000100133ac4();
    func_0x00010729edc8();
    uVar7 = extraout_x9;
    while (bVar2 = param_2 == uVar7, !bVar2) {
      func_0x00010729eeb8();
      uVar7 = extraout_x9_00;
    }
    plVar5 = *(long **)(param_1 + 0x10);
    if (plVar5 != (long *)0x0) {
      func_0x00010729ee48();
      if (bVar2) {
        unaff_x22 = unaff_x22 & unaff_x21;
      }
      else if (param_2 <= unaff_x22) {
        uVar7 = 0;
        if (param_2 != 0) {
          uVar7 = unaff_x22 / param_2;
        }
        unaff_x22 = unaff_x22 - uVar7 * param_2;
      }
      *(undefined8 *)(extraout_x8 + unaff_x22 * 8) = extraout_x9_01;
      lVar4 = extraout_x8;
      while (plVar6 = plVar5, plVar5 = (long *)*plVar6, plVar5 != (long *)0x0) {
        uVar7 = plVar5[1];
        if ((param_2 & unaff_x21) == 0) {
          uVar7 = uVar7 & unaff_x21;
        }
        else if (param_2 <= uVar7) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar1 * param_2;
        }
        if (uVar7 != unaff_x22) {
          if (*(long *)(lVar4 + uVar7 * 8) == 0) {
            *(long **)(lVar4 + uVar7 * 8) = plVar6;
            unaff_x22 = uVar7;
          }
          else {
            do {
              if (*plVar5 == 0) break;
              func_0x00010729f0c0();
              plVar5 = (long *)*plVar5;
            } while ((uVar3 & 1) != 0);
            func_0x00010729e544();
            plVar5 = plVar6;
            lVar4 = extraout_x8_00;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10729c7b0; end: 10729c7f3;  */

void FUN_10729c7b0(undefined8 param_1)

{
  long unaff_x21;
  
  func_0x00010729f188();
  func_0x00010729f03c();
  func_0x00010729f1f4();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  func_0x00010729ebbc();
  *(undefined8 *)(unaff_x21 + 8) = param_1;
  return;
}



/* Entry: 10729c7f4; end: 10729c8eb;  */

long * FUN_10729c7f4(undefined8 param_1,undefined8 param_2,long *param_3)

{
  byte bVar1;
  undefined1 in_NG;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong unaff_x20;
  long *unaff_x21;
  long *plVar5;
  ulong unaff_x22;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  
  func_0x00010729f100();
  func_0x000100601028();
  func_0x00010729e924();
  if ((unaff_x22 == 0) || (func_0x00010729edac(param_1,param_2,(float)unaff_x22), (bool)in_NG)) {
    func_0x00010729e904();
    func_0x00010729e34c();
    param_3 = unaff_x21;
    FUN_10729c9a4();
    unaff_x22 = unaff_x21[1];
  }
  uVar6 = unaff_x22 - 1;
  if ((unaff_x22 & uVar6) == 0) {
    uVar7 = uVar6 & unaff_x20;
  }
  else {
    uVar7 = unaff_x20;
    if (unaff_x22 <= unaff_x20) {
      uVar7 = 0;
      if (unaff_x22 != 0) {
        uVar7 = unaff_x20 / unaff_x22;
      }
      uVar7 = unaff_x20 - uVar7 * unaff_x22;
    }
  }
  plVar5 = *(long **)(*unaff_x21 + uVar7 * 8);
  if (plVar5 != (long *)0x0) {
    uVar8 = 0;
    bVar1 = 0;
    for (; *plVar5 != 0; plVar5 = (long *)*plVar5) {
      uVar3 = *(ulong *)(*plVar5 + 8);
      if ((unaff_x22 & uVar6) == 0) {
        uVar4 = uVar3 & uVar6;
      }
      else {
        uVar4 = uVar3;
        if (unaff_x22 <= uVar3) {
          uVar4 = 0;
          if (unaff_x22 != 0) {
            uVar4 = uVar3 / unaff_x22;
          }
          uVar4 = uVar3 - uVar4 * unaff_x22;
        }
      }
      if (uVar4 != uVar7) {
        return plVar5;
      }
      if (uVar3 == unaff_x20) {
        func_0x00010729f08c();
      }
      else {
        param_3 = (long *)0x0;
      }
      bVar2 = (uint)param_3 != uVar8;
      if ((bool)(bVar1 & bVar2)) {
        return plVar5;
      }
      uVar8 = uVar8 | bVar2;
      bVar1 = bVar1 | bVar2;
    }
  }
  return plVar5;
}



/* Entry: 10729c8ec; end: 10729c9a3;  */

void FUN_10729c8ec(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong uVar2;
  long extraout_x9;
  ulong uVar3;
  ulong extraout_x10;
  ulong uVar4;
  long extraout_x11;
  
  uVar1 = param_1[1];
  uVar2 = param_2[1];
  uVar3 = uVar1 - 1;
  if ((uVar1 & uVar3) == 0) {
    uVar2 = uVar3 & uVar2;
  }
  else if (uVar1 <= uVar2) {
    uVar4 = 0;
    if (uVar1 != 0) {
      uVar4 = uVar2 / uVar1;
    }
    uVar2 = uVar2 - uVar4 * uVar1;
  }
  if (param_3 == (long *)0x0) {
    func_0x00010729efcc();
    if (extraout_x9 != 0) {
      uVar2 = *(ulong *)(extraout_x9 + 8);
      if ((extraout_x8 & extraout_x10) == 0) {
        uVar2 = uVar2 & extraout_x10;
      }
      else if (extraout_x8 <= uVar2) {
        uVar1 = 0;
        if (extraout_x8 != 0) {
          uVar1 = uVar2 / extraout_x8;
        }
        uVar2 = uVar2 - uVar1 * extraout_x8;
      }
      *(long **)(extraout_x11 + uVar2 * 8) = param_2;
    }
  }
  else {
    *param_2 = *param_3;
    *param_3 = (long)param_2;
    if (*param_2 != 0) {
      uVar4 = *(ulong *)(*param_2 + 8);
      if ((uVar1 & uVar3) == 0) {
        uVar4 = uVar4 & uVar3;
      }
      else if (uVar1 <= uVar4) {
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = uVar4 / uVar1;
        }
        uVar4 = uVar4 - uVar3 * uVar1;
      }
      if (uVar4 != uVar2) {
        *(long **)(*param_1 + uVar4 * 8) = param_2;
      }
    }
  }
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10729c9a4; end: 10729ca1f;  */

void FUN_10729c9a4(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  long extraout_x8_01;
  ulong extraout_x9;
  ulong extraout_x9_00;
  undefined8 extraout_x9_01;
  ulong unaff_x21;
  ulong unaff_x22;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  
  func_0x00010729ef90();
  if ((!(bool)in_ZR) && (func_0x00010729eef4(), !(bool)in_ZR)) {
    func_0x00010729ebe8();
  }
  func_0x00010729eed0();
  if (!(bool)in_CY || (bool)in_ZR) {
    if (!(bool)in_CY) {
      func_0x00010729e330();
      if (((bool)in_CY) && (func_0x00010729eec4(), extraout_x8 == 0)) {
        func_0x00010729e2b0();
      }
      else {
        __ZNSt3__112__next_primeEm();
      }
      func_0x00010729e884();
      if (!(bool)in_CY) goto LAB_10729c9dc;
    }
    return;
  }
LAB_10729c9dc:
  func_0x00010729eb1c();
  func_0x00010729f100();
  if (param_2 == 0) {
    FUN_107293790(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    uVar3 = param_1 + 8;
    FUN_1072937a8();
    func_0x00010729ebf0();
    FUN_107293790();
    func_0x00010729edc8();
    uVar7 = extraout_x9;
    while (bVar2 = param_2 == uVar7, !bVar2) {
      func_0x00010729eeb8();
      uVar7 = extraout_x9_00;
    }
    plVar5 = *(long **)(param_1 + 0x10);
    if (plVar5 != (long *)0x0) {
      func_0x00010729ee48();
      if (bVar2) {
        unaff_x22 = unaff_x22 & unaff_x21;
      }
      else if (param_2 <= unaff_x22) {
        uVar7 = 0;
        if (param_2 != 0) {
          uVar7 = unaff_x22 / param_2;
        }
        unaff_x22 = unaff_x22 - uVar7 * param_2;
      }
      *(undefined8 *)(extraout_x8_00 + unaff_x22 * 8) = extraout_x9_01;
      lVar4 = extraout_x8_00;
      while (plVar6 = plVar5, plVar5 = (long *)*plVar6, plVar5 != (long *)0x0) {
        uVar7 = plVar5[1];
        if ((param_2 & unaff_x21) == 0) {
          uVar7 = uVar7 & unaff_x21;
        }
        else if (param_2 <= uVar7) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar1 * param_2;
        }
        if (uVar7 != unaff_x22) {
          if (*(long *)(lVar4 + uVar7 * 8) == 0) {
            *(long **)(lVar4 + uVar7 * 8) = plVar6;
            unaff_x22 = uVar7;
          }
          else {
            do {
              if (*plVar5 == 0) break;
              func_0x00010729f0c0();
              plVar5 = (long *)*plVar5;
            } while ((uVar3 & 1) != 0);
            func_0x00010729e544();
            plVar5 = plVar6;
            lVar4 = extraout_x8_01;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10729ca20; end: 10729cb1b;  */

void FUN_10729ca20(long param_1,ulong param_2)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  ulong extraout_x9;
  ulong extraout_x9_00;
  undefined8 extraout_x9_01;
  ulong unaff_x21;
  ulong unaff_x22;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  
  func_0x00010729f100();
  if (param_2 == 0) {
    FUN_107293790(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    uVar3 = param_1 + 8;
    FUN_1072937a8();
    func_0x00010729ebf0();
    FUN_107293790();
    func_0x00010729edc8();
    uVar7 = extraout_x9;
    while (bVar2 = param_2 == uVar7, !bVar2) {
      func_0x00010729eeb8();
      uVar7 = extraout_x9_00;
    }
    plVar5 = *(long **)(param_1 + 0x10);
    if (plVar5 != (long *)0x0) {
      func_0x00010729ee48();
      if (bVar2) {
        unaff_x22 = unaff_x22 & unaff_x21;
      }
      else if (param_2 <= unaff_x22) {
        uVar7 = 0;
        if (param_2 != 0) {
          uVar7 = unaff_x22 / param_2;
        }
        unaff_x22 = unaff_x22 - uVar7 * param_2;
      }
      *(undefined8 *)(extraout_x8 + unaff_x22 * 8) = extraout_x9_01;
      lVar4 = extraout_x8;
      while (plVar6 = plVar5, plVar5 = (long *)*plVar6, plVar5 != (long *)0x0) {
        uVar7 = plVar5[1];
        if ((param_2 & unaff_x21) == 0) {
          uVar7 = uVar7 & unaff_x21;
        }
        else if (param_2 <= uVar7) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar1 * param_2;
        }
        if (uVar7 != unaff_x22) {
          if (*(long *)(lVar4 + uVar7 * 8) == 0) {
            *(long **)(lVar4 + uVar7 * 8) = plVar6;
            unaff_x22 = uVar7;
          }
          else {
            do {
              if (*plVar5 == 0) break;
              func_0x00010729f0c0();
              plVar5 = (long *)*plVar5;
            } while ((uVar3 & 1) != 0);
            func_0x00010729e544();
            plVar5 = plVar6;
            lVar4 = extraout_x8_00;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10729cb1c; end: 10729cb63;  */

void FUN_10729cb1c(void)

{
  undefined8 uVar1;
  long unaff_x21;
  
  func_0x00010729f188();
  uVar1 = 0x50;
  __Znwm();
  func_0x00010729f1f4();
  FUN_1072939f8();
  func_0x00010729ebbc();
  *(undefined8 *)(unaff_x21 + 8) = uVar1;
  return;
}



/* Entry: 10729cb64; end: 10729cb97;  */

void FUN_10729cb64(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010729e5f0();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x1b0;
    func_0x00010729abec();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10729cb98; end: 10729cb9f;  */

void FUN_10729cb98(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010729e5f0(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x1b0;
    func_0x00010729abec();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10729cba0; end: 10729cbab;  */

void FUN_10729cba0(void)

{
  func_0x00010729e410();
  FUN_10729cbcc();
  return;
}



/* Entry: 10729cbac; end: 10729cbcb;  */

void FUN_10729cbac(void)

{
  FUN_10729cbcc();
  return;
}



/* Entry: 10729cbcc; end: 10729cbf7;  */

long FUN_10729cbcc(long param_1,ulong param_2)

{
  undefined1 uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  uVar1 = 0x97b425ed097b42 < param_2;
  if (!(bool)uVar1) {
    lVar2 = param_2 * 0x1b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar2);
    return lVar2;
  }
  func_0x000104bd35f4();
  func_0x00010729eea8();
  if ((bool)uVar1) {
    FUN_10729cc58();
  }
  else {
    FUN_10729cc2c();
    param_1 = unaff_x20 + 0x1b0;
  }
  *(long *)(unaff_x19 + 8) = param_1;
  return param_1 + -0x1b0;
}



/* Entry: 10729cbf8; end: 10729cc2b;  */

long FUN_10729cbf8(long param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010729eea8();
  if ((bool)in_CY) {
    FUN_10729cc58();
  }
  else {
    FUN_10729cc2c();
    param_1 = unaff_x20 + 0x1b0;
  }
  *(long *)(unaff_x19 + 8) = param_1;
  return param_1 + -0x1b0;
}



/* Entry: 10729cc2c; end: 10729cc57;  */

void FUN_10729cc2c(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010729efa8();
  FUN_10729b464();
  *(long *)(unaff_x19 + 8) = unaff_x20 + 0x1b0;
  return;
}



/* Entry: 10729cc58; end: 10729ccd3;  */

undefined8 FUN_10729cc58(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x00010729e618();
  FUN_10729bde0();
  func_0x00010729e634();
  FUN_10729cd10();
  FUN_10729b464(lStack_48);
  lStack_48 = lStack_48 + 0x1b0;
  func_0x00010729ec1c();
  FUN_10729ccd4();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010729cdf4(auStack_58);
  return uVar1;
}



/* Entry: 10729ccd4; end: 10729cd0f;  */

void FUN_10729ccd4(void)

{
  func_0x00010729e5f0();
  func_0x00010729ee08();
  FUN_10729cd44();
  func_0x00010729e380();
  return;
}



/* Entry: 10729cd10; end: 10729cd43;  */

void FUN_10729cd10(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010729ee68();
  if (param_2 != 0) {
    FUN_10729cbac(param_4);
  }
  func_0x00010729e944(0x1b0);
  return;
}



/* Entry: 10729cd44; end: 10729cdc3;  */

void FUN_10729cd44(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long unaff_x19;
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  long lStack_38;
  
  func_0x000100601028();
  func_0x00010729e460();
  uStack_48 = 0;
  for (; param_2 != unaff_x19; param_2 = param_2 + 0x1b0) {
    FUN_10729b464(param_4,param_2);
    param_4 = lStack_38 + 0x1b0;
    lStack_38 = param_4;
  }
  func_0x00010729ef18();
  func_0x00010729eb34();
  FUN_10729cdc4();
  FUN_10729bec4(auStack_60);
  return;
}



/* Entry: 10729cdc4; end: 10729ce1f;  */

void FUN_10729cdc4(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x1b0) {
    func_0x00010729abec();
  }
  return;
}



/* Entry: 10729ce20; end: 10729ce27;  */

void FUN_10729ce20(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010729e5f0(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x1b0;
    func_0x00010729abec();
  }
  return;
}



/* Entry: 10729ce28; end: 10729ce5b;  */

void FUN_10729ce28(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010729e5f0();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x1b0;
    func_0x00010729abec();
  }
  return;
}



/* Entry: 10729ce5c; end: 10729d027;  */

void FUN_10729ce5c(undefined8 *param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  undefined1 uVar3;
  ulong extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong extraout_x9;
  long extraout_x10;
  long *unaff_x20;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong *puVar11;
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [56];
  undefined **ppuStack_1e8;
  undefined8 *puStack_1e0;
  undefined ***pppuStack_1d0;
  undefined1 auStack_1a8 [56];
  byte bStack_170;
  undefined1 auStack_168 [56];
  undefined1 auStack_130 [56];
  undefined8 uStack_f8;
  long *plStack_f0;
  long lStack_e8;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  ulong *puStack_98;
  ulong *puStack_90;
  long *plStack_88;
  long *plStack_80;
  undefined1 uStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x00010729e618();
  plVar8 = (long *)*param_1;
  uVar5 = plVar8[1];
  puVar11 = (ulong *)(plVar8 + 2);
  if (uVar5 < *puVar11) {
    func_0x00010729eb34();
    func_0x00010729d4b0();
    lVar9 = uVar5 + 0x1c0;
    plVar8[1] = lVar9;
LAB_10729cfd0:
    plVar8[1] = lVar9;
    return;
  }
  func_0x00010729ee78(0x2492);
  lVar6 = uVar5 - *plVar8;
  if (lVar6 / 0x1c0 + 1U <= extraout_x8) {
    func_0x00010729f15c();
    lVar10 = extraout_x10;
    if (0x49249249249248 < extraout_x9) {
      lVar10 = extraout_x8_00;
    }
    puStack_98 = puVar11;
    if (lVar10 == 0) {
      param_2 = 0;
    }
    else {
      FUN_10729b3b0();
    }
    lVar6 = lVar10 + lVar6;
    lVar10 = lVar10 + param_2 * 0x1c0;
    lStack_b0 = lVar6;
    lStack_a8 = lVar6;
    lStack_a0 = lVar10;
    func_0x00010729eb34();
    func_0x00010729d4b0();
    lVar9 = lVar6 + 0x1c0;
    lVar4 = *plVar8;
    lVar1 = plVar8[1];
    lVar6 = lVar6 + ((lVar1 - lVar4) / -0x1c0) * 0x1c0;
    plStack_88 = &lStack_70;
    plStack_80 = &lStack_68;
    uStack_78 = 0;
    lStack_68 = lVar6;
    lStack_a8 = lVar9;
    puStack_90 = puVar11;
    lStack_70 = lVar6;
    for (lVar7 = lVar4; lVar7 != lVar1; lVar7 = lVar7 + 0x1c0) {
      FUN_10729b42c(lStack_68,lVar7);
      lStack_68 = lStack_68 + 0x1c0;
    }
    uStack_78 = 1;
    for (; lVar4 != lVar1; lVar4 = lVar4 + 0x1c0) {
      FUN_10729abc4(lVar4);
    }
    func_0x00010729b3ec(&puStack_90);
    lStack_b8 = *plVar8;
    *plVar8 = lVar6;
    plVar8[1] = lVar9;
    lStack_a0 = plVar8[2];
    plVar8[2] = lVar10;
    lStack_b0 = lStack_b8;
    lStack_a8 = lStack_b8;
    func_0x00010729d4d8(&lStack_b8);
    goto LAB_10729cfd0;
  }
  FUN_10729b3a4();
  func_0x00010729d4d8(&lStack_b8);
  func_0x00010729e514();
  plStack_f0 = plVar8;
  lStack_e8 = lVar6;
  func_0x00010729e8dc();
  func_0x00010729e310();
  uStack_f8 = extraout_x8_01;
  FUN_107269c1c();
  func_0x000104c2fe00(auStack_130,lVar6 + 0xa8);
  func_0x000104c2fe00(auStack_168,lVar6 + 0x70);
  FUN_10726236c(auStack_1a8,lVar6 + 0x30);
  uVar3 = bStack_170 == 1;
  if ((bool)uVar3) {
    func_0x0001078696e8(auStack_238);
    FUN_10729d1b0(&ppuStack_1e8,auStack_130);
    if ((bStack_170 & 1) == 0) goto LAB_10729d140;
    func_0x000104c2fe00(auStack_220,auStack_1a8);
    (**(code **)(*unaff_x20 + 0xa8))();
    func_0x000104c2f714(auStack_220);
    func_0x00010724b3d8(&ppuStack_1e8);
    ppuStack_1e8 = &PTR_FUN_110998918;
    puStack_1e0 = param_1;
    pppuStack_1d0 = &ppuStack_1e8;
    func_0x000107869948(auStack_238,&ppuStack_1e8);
    FUN_107277390(&ppuStack_1e8);
    FUN_10726b264(auStack_238);
  }
  func_0x00010724b3d8(auStack_1a8);
  func_0x000104c2f714(auStack_168);
  func_0x000104c2f714(auStack_130);
  func_0x00010729e1e0(uStack_f8);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
LAB_10729d140:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10729d148);
  (*pcVar2)();
}



/* Entry: 10729d028; end: 10729d1af;  */

void FUN_10729d028(void)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [56];
  undefined **ppuStack_128;
  undefined1 auStack_e8 [56];
  byte bStack_b0;
  undefined1 auStack_a8 [56];
  undefined1 auStack_70 [56];
  undefined8 uStack_38;
  
  func_0x00010729e8dc();
  func_0x00010729e310();
  uStack_38 = extraout_x8;
  FUN_107269c1c();
  func_0x000104c2fe00(auStack_70,unaff_x21 + 0xa8);
  func_0x000104c2fe00(auStack_a8,unaff_x21 + 0x70);
  FUN_10726236c(auStack_e8,unaff_x21 + 0x30);
  uVar2 = bStack_b0 == 1;
  if ((bool)uVar2) {
    func_0x0001078696e8(auStack_178);
    FUN_10729d1b0(&ppuStack_128,auStack_70);
    if ((bStack_b0 & 1) == 0) goto LAB_10729d140;
    func_0x000104c2fe00(auStack_160,auStack_e8);
    (**(code **)(*unaff_x20 + 0xa8))();
    func_0x000104c2f714(auStack_160);
    func_0x00010724b3d8(&ppuStack_128);
    ppuStack_128 = &PTR_FUN_110998918;
    func_0x000107869948(auStack_178,&ppuStack_128);
    FUN_107277390(&ppuStack_128);
    FUN_10726b264(auStack_178);
  }
  func_0x00010724b3d8(auStack_e8);
  func_0x000104c2f714(auStack_a8);
  func_0x000104c2f714(auStack_70);
  func_0x00010729e1e0(uStack_38);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
LAB_10729d140:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10729d148);
  (*pcVar1)();
}



/* Entry: 10729d1b0; end: 10729d1cb;  */

void FUN_10729d1b0(long param_1)

{
  func_0x000104c2fe00();
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}



/* Entry: 10729d1cc; end: 10729d1d3;  */

void FUN_10729d1cc(void)

{
  return;
}



/* Entry: 10729d1d4; end: 10729d1ff;  */

void FUN_10729d1d4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  func_0x00010729ecd4();
  uVar2 = param_1[1];
  *puVar1 = &PTR_FUN_110998918;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10729d200; end: 10729d223;  */

void FUN_10729d200(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110998918;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10729d224; end: 10729d2e3;  */

void FUN_10729d224(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 extraout_x8;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [56];
  undefined1 auStack_c0 [64];
  undefined1 auStack_80 [64];
  char cStack_40;
  undefined8 uStack_38;
  
  func_0x00010729e5f0();
  func_0x00010729e310();
  uStack_38 = extraout_x8;
  FUN_10729d318(auStack_80,param_3,auStack_f8);
  uVar1 = cStack_40 == '\x01';
  if ((bool)uVar1) {
    uVar2 = *(undefined8 *)(unaff_x20 + 8);
    func_0x000104c2fe00(auStack_f8);
    func_0x000104c32a18(auStack_c0,auStack_80);
    FUN_10729d364(auStack_110,uVar2,auStack_f8);
    FUN_1072684c8(auStack_f8);
  }
  FUN_107267ed0();
  func_0x00010729e1e0(uStack_38);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  FUN_1072684c8(auStack_f8);
  FUN_107267ed0(auStack_80);
  func_0x00010729e514();
  func_0x00010729e9d0();
  func_0x00010729e744();
  func_0x00010729e3dc();
  return;
}



/* Entry: 10729d2e4; end: 10729d30b;  */

void FUN_10729d2e4(undefined8 param_1)

{
  func_0x00010729e9d0();
  func_0x00010729e744(param_1,&PTR_DAT_110998978);
  func_0x00010729e3dc();
  return;
}



/* Entry: 10729d30c; end: 10729d317;  */

undefined ** FUN_10729d30c(void)

{
  return &PTR_DAT_110998978;
}



/* Entry: 10729d318; end: 10729d363;  */

void FUN_10729d318(void)

{
  undefined1 in_ZR;
  undefined1 auStack_68 [64];
  undefined8 uStack_28;
  
  func_0x00010729e2fc();
  func_0x000107776804(auStack_68);
  func_0x00010729ec1c();
  FUN_10729d394();
  func_0x000104c3323c(auStack_68);
  func_0x00010729e1e0(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x00010729e5f0();
  func_0x0001072684ec();
  func_0x00010729ee18();
  func_0x00010729ea1c();
  FUN_10729d3cc();
  return;
}



/* Entry: 10729d364; end: 10729d393;  */

void FUN_10729d364(void)

{
  func_0x00010729e5f0();
  func_0x0001072684ec();
  func_0x00010729ee18();
  func_0x00010729ea1c();
  FUN_10729d3cc();
  return;
}



/* Entry: 10729d394; end: 10729d3cb;  */

void FUN_10729d394(long param_1)

{
  func_0x000104c32a18();
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 10729d3cc; end: 10729d3d3;  */

void FUN_10729d3cc(undefined8 param_1,long param_2)

{
  func_0x00010729e66c(param_1,param_2,param_2 + 0x38);
  FUN_10729d3f0();
  return;
}



/* Entry: 10729d3d4; end: 10729d3ef;  */

void FUN_10729d3d4(void)

{
  func_0x00010729e66c();
  FUN_10729d3f0();
  return;
}



/* Entry: 10729d3f0; end: 10729d443;  */

void FUN_10729d3f0(long param_1,ulong param_2)

{
  long lVar1;
  long *unaff_x19;
  undefined8 *unaff_x21;
  
  func_0x00010729f100();
  func_0x00010729e650();
  func_0x000104c32bd8();
  if ((param_2 & 1) != 0) {
    func_0x00010729e8ec();
    FUN_10729d444();
  }
  lVar1 = ((long *)*unaff_x21)[1];
  *unaff_x19 = *(long *)*unaff_x21 + param_1;
  unaff_x19[1] = lVar1 + param_1 * 0x78;
  *(char *)(unaff_x19 + 2) = (char)param_2;
  return;
}



/* Entry: 10729d444; end: 10729d46b;  */

void FUN_10729d444(long param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  func_0x00010729ee58(*(long *)(param_1 + 8) + param_2 * 0x78,*param_4,*param_5);
  FUN_10729d488();
  return;
}



/* Entry: 10729d46c; end: 10729d487;  */

void FUN_10729d46c(void)

{
  func_0x00010729ee58();
  FUN_10729d488();
  return;
}



/* Entry: 10729d488; end: 10729d56b;  */

void FUN_10729d488(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x00010729ed80();
  func_0x000104c32a18(param_1 + 0x38,*unaff_x19);
  return;
}



/* Entry: 10729d56c; end: 10729d5bf;  */

void FUN_10729d56c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  undefined1 auStack_38 [24];
  
  func_0x00010729e6ec();
  func_0x00010002b838();
  FUN_10729d5c0(unaff_x19 + 0x20,auStack_38,param_3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  *(undefined1 *)(unaff_x19 + 0x4c) = 1;
  return;
}



/* Entry: 10729d5c0; end: 10729d62b;  */

undefined8 FUN_10729d5c0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar1 = param_3;
  _strlen(param_3);
  FUN_10729d62c(param_1,&uStack_40,param_3,uVar1);
  func_0x00010729e878();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  return param_3;
}



/* Entry: 10729d62c; end: 10729d68f;  */

long FUN_10729d62c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_3;
  uStack_28 = param_4;
  func_0x0001000fecf4(param_1 + 8);
  func_0x0001004c38a0(param_1 + 8,&uStack_30);
  return param_1;
}



/* Entry: 10729d690; end: 10729d6a3;  */

void FUN_10729d690(void)

{
  func_0x00010729d664();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10729d6a4; end: 10729d6db;  */

undefined8 FUN_10729d6a4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xa0;
  __Znwm(0xa0);
  FUN_10729dba0();
  return uVar1;
}



/* Entry: 10729d6dc; end: 10729d6ff;  */

undefined8 * FUN_10729d6dc(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_SUB_1109989c8;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010729e450();
    } while (extraout_w10 != 0);
  }
  param_2[3] = puVar1[2];
  FUN_10729a42c(param_2 + 4,puVar1 + 3);
  return param_2;
}



/* Entry: 10729d700; end: 10729db6b;  */

void FUN_10729d700(long param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  code *pcVar5;
  undefined1 in_ZR;
  bool bVar6;
  long **pplVar7;
  long lVar8;
  long *plVar9;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  long *plStack_4d0;
  undefined8 uStack_4c8;
  undefined1 auStack_4c0 [16];
  long *plStack_4b0;
  long *plStack_4a8;
  long *plStack_4a0;
  long *plStack_498;
  long *plStack_490;
  undefined8 uStack_488;
  undefined1 auStack_480 [16];
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined1 uStack_330;
  undefined4 uStack_324;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long lStack_310;
  long lStack_308;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined1 uStack_90;
  undefined1 auStack_20 [16];
  undefined8 uStack_10;
  
  func_0x00010729f208();
  func_0x00010729e310();
  uStack_10 = extraout_x8;
  func_0x00010726fc00(&plStack_1d0,param_1 + 8);
  if (plStack_1d0 != (long *)0x0) {
    func_0x00010726fc3c();
    uStack_4c8 = uStack_1c8;
    plStack_4d0 = plStack_1d0;
    in_ZR = *plStack_1d0 == -1;
    if (!(bool)in_ZR) {
      uStack_1c8 = 0;
      plStack_1d0 = (long *)0x0;
      uStack_470 = 0;
      uStack_468 = 0;
      FUN_1072508cc(&uStack_470);
      goto LAB_10729d788;
    }
    func_0x00010726fc88();
  }
  func_0x00010729edc0();
  plStack_4d0 = (long *)0x0;
  uStack_4c8 = 0;
  uStack_1c8 = 0;
  plStack_1d0 = (long *)0x0;
LAB_10729d788:
  func_0x00010729edc0();
  pplVar7 = (long **)(param_1 + 8);
  func_0x00010726fc00(&plStack_1d0);
  if (plStack_1d0 == (long *)0x0) {
    func_0x00010729edc0();
  }
  else {
    lVar11 = *plStack_1d0;
    func_0x00010729edc0();
    in_ZR = lVar11 == -1;
    if (!(bool)in_ZR) {
      lVar11 = *(long *)(param_1 + 0x48);
      uStack_324 = *(undefined4 *)(param_1 + 0x24);
      uStack_318 = CONCAT44((float)*(double *)(param_1 + 0x40),(float)*(double *)(param_1 + 0x38));
      uStack_320 = CONCAT44((float)*(double *)(param_1 + 0x30),(float)*(double *)(param_1 + 0x28));
      if ((((*(long *)(lVar11 + 0xf8) != 0) && (*(char *)(lVar11 + 0x100) == '\x01')) &&
          ((*(byte *)(param_2 + 6) & 1) != 0)) && (param_2[3] != param_2[4])) {
        FUN_10729b42c(&plStack_1d0);
        FUN_1072d78d4(&lStack_310,&plStack_1d0);
        FUN_10729dc0c(&uStack_470,&lStack_310);
        uStack_330 = 1;
        FUN_107268400(auStack_480,auStack_20);
        func_0x000104c335c0(auStack_480);
        FUN_10729ded4(&uStack_470);
        func_0x00010729edb8();
        pplVar7 = &plStack_1d0;
        FUN_10729abc4();
      }
      uVar17 = 0;
      while( true ) {
        uVar3 = (param_2[1] - *param_2) / 0x18;
        in_ZR = uVar17 == uVar3;
        if (uVar3 <= uVar17) break;
        lVar14 = *(long *)(param_1 + 0x50);
        plVar16 = (long *)(*param_2 + uVar17 * 0x18);
        plStack_498 = (long *)0x0;
        plStack_490 = (long *)0x0;
        uStack_488 = 0;
        plStack_4b0 = (long *)0x0;
        plStack_4a8 = (long *)0x0;
        plStack_4a0 = (long *)0x0;
        lVar1 = plVar16[1];
        for (lVar12 = *plVar16; lVar12 != lVar1; lVar12 = lVar12 + 0x1c0) {
          FUN_1072d78d4(&lStack_310,lVar12);
          FUN_10729def4(&plStack_498,&lStack_310);
          func_0x00010729edb8();
        }
        plVar15 = (long *)0x0;
        lVar1 = plVar16[1];
        lVar12 = *plVar16;
        plVar16 = (long *)0x0;
        for (; lVar12 != lVar1; lVar12 = lVar12 + 0x1c0) {
          FUN_107268400(&lStack_310,lVar12 + 0x1b0);
          plVar4 = plStack_4b0;
          bVar6 = plVar15 <= plVar16;
          if (bVar6) {
            lVar21 = (long)plVar16 - (long)plStack_4b0;
            lVar19 = lVar21 >> 4;
            if (lVar19 + 1U >> 0x3c != 0) {
              plStack_4a8 = plVar16;
              plStack_4a0 = plVar15;
              FUN_10729e190();
LAB_10729dacc:
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10729dad0);
              (*pcVar5)();
            }
            func_0x00010729ef24();
            uVar3 = extraout_x8_00;
            if (bVar6) {
              uVar3 = 0xfffffffffffffff;
            }
            if (uVar3 == 0) {
              lVar8 = 0;
            }
            else {
              if (uVar3 >> 0x3c != 0) {
                plStack_4a8 = plVar16;
                plStack_4a0 = plVar15;
                func_0x000104bd35f4();
                goto LAB_10729dacc;
              }
              lVar8 = uVar3 << 4;
              __Znwm();
            }
            plVar18 = (long *)(lVar8 + lVar21);
            plVar18[1] = lStack_308;
            *plVar18 = lStack_310;
            lStack_310 = 0;
            lStack_308 = 0;
            plVar20 = plVar18 + lVar19 * -2;
            plVar15 = plVar20;
            for (plVar10 = plVar4; plVar9 = plVar4, plVar10 != plVar16; plVar10 = plVar10 + 2) {
              lVar19 = *plVar10;
              plVar15[1] = plVar10[1];
              *plVar15 = lVar19;
              *plVar10 = 0;
              plVar10[1] = 0;
              plVar15 = plVar15 + 2;
            }
            for (; plVar9 != plVar16; plVar9 = plVar9 + 2) {
              func_0x000104c335c0();
            }
            plVar18 = plVar18 + 2;
            plVar15 = (long *)(lVar8 + uVar3 * 0x10);
            plStack_4b0 = plVar20;
            if (plVar4 != (long *)0x0) {
              __ZdlPv(plVar4);
            }
          }
          else {
            plVar18 = plVar16 + 2;
            plVar16[1] = lStack_308;
            *plVar16 = lStack_310;
            lStack_310 = 0;
            lStack_308 = 0;
          }
          func_0x000104c335c0(&lStack_310);
          plVar16 = plVar18;
        }
        lVar14 = lVar14 + uVar17 * 0x48;
        puVar2 = *(undefined8 **)(lVar14 + 0x10);
        plStack_4a8 = plVar16;
        plStack_4a0 = plVar15;
        for (puVar13 = *(undefined8 **)(lVar14 + 8); puVar13 != puVar2; puVar13 = puVar13 + 2) {
          (**(code **)(*(long *)*puVar13 + 0x10))((long *)*puVar13,&uStack_324,&plStack_498);
        }
        if ((*(long *)(lVar11 + 0xf8) != 0) && (plStack_498 != plStack_490)) {
          FUN_1072934d0(&plStack_1d0);
          uStack_90 = 1;
          FUN_107268400(auStack_4c0,plStack_4b0);
          func_0x000104c335c0(auStack_4c0);
          FUN_10729ded4(&plStack_1d0);
        }
        FUN_10729e19c(&plStack_4b0);
        pplVar7 = &plStack_498;
        FUN_107298098();
        uVar17 = uVar17 + 1;
      }
      __ZNSt3__16chrono12steady_clock3nowEv();
      lStack_310 = ((long)pplVar7 - *(long *)(param_1 + 0x98)) / 1000;
      FUN_10729bba4(0x113,*(undefined4 *)(param_1 + 0x24),&lStack_310);
    }
  }
  func_0x000107270b00();
  func_0x00010729e1e0(uStack_10);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_10729ded4(&uStack_470);
  func_0x00010729edb8();
  FUN_10729abc4(&plStack_1d0);
  func_0x000107270b00(&plStack_4d0);
  func_0x00010729e514();
  func_0x00010729e9d0();
  func_0x00010729e744();
  func_0x00010729e3dc();
  return;
}



/* Entry: 10729db6c; end: 10729db93;  */

void FUN_10729db6c(undefined8 param_1)

{
  func_0x00010729e9d0();
  func_0x00010729e744(param_1,&PTR_DAT_110998a38);
  func_0x00010729e3dc();
  return;
}



/* Entry: 10729db94; end: 10729db9f;  */

undefined ** FUN_10729db94(void)

{
  return &PTR_DAT_110998a38;
}



/* Entry: 10729dba0; end: 10729dc0b;  */

undefined8 * FUN_10729dba0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  *param_1 = &PTR_SUB_1109989c8;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010729e450();
    } while (extraout_w10 != 0);
  }
  param_1[3] = param_2[2];
  FUN_10729a42c(param_1 + 4,param_2 + 3);
  return param_1;
}



/* Entry: 10729dc0c; end: 10729dc9f;  */

void FUN_10729dc0c(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x00010729e5f0();
  FUN_10729dca0();
  uVar2 = *(undefined8 *)(unaff_x19 + 0x60);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x58);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(unaff_x19 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x58) = 0;
  *(undefined8 *)(unaff_x19 + 0x60) = 0;
  *(undefined8 *)(unaff_x19 + 0x68) = 0;
  FUN_10729dd38(param_1 + 0x70,unaff_x19 + 0x70);
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  uVar1 = *(undefined8 *)(unaff_x19 + 0x98);
  *(undefined8 *)(unaff_x20 + 0xa0) = *(undefined8 *)(unaff_x19 + 0xa0);
  *(undefined8 *)(unaff_x20 + 0x98) = uVar1;
  *(undefined8 *)(unaff_x20 + 0xa8) = *(undefined8 *)(unaff_x19 + 0xa8);
  *(undefined8 *)(unaff_x19 + 0x98) = 0;
  *(undefined8 *)(unaff_x19 + 0xa0) = 0;
  *(undefined8 *)(unaff_x19 + 0xa8) = 0;
  func_0x00010729dd84(unaff_x20 + 0xb0,unaff_x19 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x19 + 0xe0);
  uVar1 = *(undefined8 *)(unaff_x19 + 0xd8);
  uVar4 = *(undefined8 *)(unaff_x19 + 0xf0);
  uVar3 = *(undefined8 *)(unaff_x19 + 0xe8);
  uVar5 = *(undefined8 *)(unaff_x19 + 0xf1);
  *(undefined8 *)(unaff_x20 + 0xf9) = *(undefined8 *)(unaff_x19 + 0xf9);
  *(undefined8 *)(unaff_x20 + 0xf1) = uVar5;
  *(undefined8 *)(unaff_x20 + 0xf0) = uVar4;
  *(undefined8 *)(unaff_x20 + 0xe8) = uVar3;
  *(undefined8 *)(unaff_x20 + 0xe0) = uVar2;
  *(undefined8 *)(unaff_x20 + 0xd8) = uVar1;
  FUN_10729ddd0(unaff_x20 + 0x108,unaff_x19 + 0x108);
  return;
}



/* Entry: 10729dca0; end: 10729dcab;  */

undefined8 FUN_10729dca0(undefined8 param_1)

{
  func_0x000107932c08(param_1,0);
  FUN_10729dcd8();
  return param_1;
}



/* Entry: 10729dcac; end: 10729dcd7;  */

undefined8 FUN_10729dcac(undefined8 param_1)

{
  func_0x000107932c08();
  FUN_10729dcd8();
  return param_1;
}



/* Entry: 10729dcd8; end: 10729dd37;  */

void FUN_10729dcd8(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong uVar2;
  long unaff_x19;
  
  func_0x00010729ebb0();
  if (!(bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      func_0x0001079331a0();
    }
    else {
      func_0x000107933170();
    }
  }
  return;
}



/* Entry: 10729dd38; end: 10729ddcf;  */

void FUN_10729dd38(long param_1)

{
  ulong uVar1;
  long extraout_x8;
  undefined8 *extraout_x9;
  long extraout_x10;
  long extraout_x11;
  ulong uVar2;
  ulong uVar3;
  
  func_0x00010729e964();
  if (extraout_x10 != 0) {
    uVar2 = *(ulong *)(extraout_x11 + 8);
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & uVar3 - 1) == 0) {
      uVar2 = uVar3 - 1 & uVar2;
    }
    else if (uVar3 <= uVar2) {
      uVar1 = 0;
      if (uVar3 != 0) {
        uVar1 = uVar2 / uVar3;
      }
      uVar2 = uVar2 - uVar1 * uVar3;
    }
    *(long *)(extraout_x8 + uVar2 * 8) = param_1 + 0x10;
    *extraout_x9 = 0;
    extraout_x9[1] = 0;
  }
  return;
}



/* Entry: 10729ddd0; end: 10729ddf7;  */

void FUN_10729ddd0(long param_1)

{
  func_0x00010729eb48();
  *(undefined1 *)(param_1 + 0x30) = 0;
  FUN_10729ddf8();
  return;
}



/* Entry: 10729ddf8; end: 10729de0b;  */

void FUN_10729ddf8(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_10729de28();
    *(undefined1 *)(param_1 + 0x30) = 1;
    return;
  }
  return;
}



/* Entry: 10729de0c; end: 10729de27;  */

void FUN_10729de0c(long param_1)

{
  FUN_10729de28();
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 10729de28; end: 10729de33;  */

undefined8 * FUN_10729de28(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_DAT_1109ec330;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_10729de74(param_1,param_2);
  return param_1;
}



/* Entry: 10729de34; end: 10729de73;  */

undefined8 * FUN_10729de34(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_DAT_1109ec330;
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_10729de74(param_1,param_3);
  return param_1;
}



/* Entry: 10729de74; end: 10729ded3;  */

void FUN_10729de74(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong uVar2;
  long unaff_x19;
  
  func_0x00010729ebb0();
  if (!(bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      func_0x000107931758();
    }
    else {
      func_0x000107931728();
    }
  }
  return;
}



/* Entry: 10729ded4; end: 10729def3;  */

void FUN_10729ded4(long param_1)

{
  if (*(char *)(param_1 + 0x140) == '\x01') {
    func_0x000107293c20();
  }
  return;
}



/* Entry: 10729def4; end: 10729df4b;  */

long FUN_10729def4(long param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010729eea8();
  if ((bool)in_CY) {
    FUN_10729df4c();
  }
  else {
    func_0x00010729df28();
    param_1 = unaff_x20 + 0x140;
  }
  *(long *)(unaff_x19 + 8) = param_1;
  return param_1 + -0x140;
}



/* Entry: 10729df4c; end: 10729dfc7;  */

undefined8 FUN_10729df4c(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x00010729e618();
  FUN_10729dfc8();
  func_0x00010729e634();
  FUN_10729e04c();
  FUN_10729dc0c(lStack_48);
  lStack_48 = lStack_48 + 0x140;
  func_0x00010729ec1c();
  FUN_10729e010();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010729e128(auStack_58);
  return uVar1;
}



/* Entry: 10729dfc8; end: 10729e00f;  */

long * FUN_10729dfc8(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if (param_2 < (long *)0xcccccccccccccd) {
    uVar1 = (param_1[2] - *param_1) / 0x140;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0x66666666666665 < uVar1) {
      plVar2 = (long *)0xcccccccccccccc;
    }
    return plVar2;
  }
  FUN_107293478();
  func_0x00010729e5f0();
  func_0x00010729ee08();
  FUN_10729e080();
  func_0x00010729e380();
  return param_1;
}



/* Entry: 10729e010; end: 10729e04b;  */

void FUN_10729e010(void)

{
  func_0x00010729e5f0();
  func_0x00010729ee08();
  FUN_10729e080();
  func_0x00010729e380();
  return;
}



/* Entry: 10729e04c; end: 10729e07f;  */

void FUN_10729e04c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010729ee68();
  if (param_2 != 0) {
    FUN_107293484(param_4);
  }
  func_0x00010729e944(0x140);
  return;
}



/* Entry: 10729e080; end: 10729e0f7;  */

void FUN_10729e080(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long unaff_x19;
  undefined1 auStack_60 [40];
  long lStack_38;
  
  func_0x000100601028();
  func_0x00010729e460();
  for (; param_2 != unaff_x19; param_2 = param_2 + 0x140) {
    FUN_10729dc0c(param_4,param_2);
    param_4 = lStack_38 + 0x140;
    lStack_38 = param_4;
  }
  func_0x00010729ef18();
  func_0x00010729eb34();
  FUN_10729e0f8();
  FUN_107293bb4(auStack_60);
  return;
}



/* Entry: 10729e0f8; end: 10729e153;  */

void FUN_10729e0f8(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x140) {
    func_0x000107293c20();
  }
  return;
}



/* Entry: 10729e154; end: 10729e15b;  */

void FUN_10729e154(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010729e5f0(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x140;
    func_0x000107293c20();
  }
  return;
}



/* Entry: 10729e15c; end: 10729e18f;  */

void FUN_10729e15c(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010729e5f0();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x140;
    func_0x000107293c20();
  }
  return;
}



/* Entry: 10729e190; end: 10729e19b;  */

long * FUN_10729e190(long *param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010729e410();
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x10;
      func_0x000104c335c0();
    }
    param_1[1] = lVar2;
    func_0x00010729ecc4();
  }
  return param_1;
}



/* Entry: 10729e19c; end: 10729e1df;  */

long * FUN_10729e19c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x10;
      func_0x000104c335c0();
    }
    param_1[1] = lVar2;
    func_0x00010729ecc4();
  }
  return param_1;
}



/* Entry: 10729e1e0; end: 10729f21f;  */

void FUN_10729e1e0(void)

{
  return;
}



/* Entry: 10729f220; end: 10729f27b;  */

void FUN_10729f220(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001077f3c4c();
  func_0x0001077f3790();
  lVar1 = *param_2;
  if (lRam0000000113847068 != 0) {
    lVar1 = lRam0000000113847068;
  }
  FUN_10729f27c(&uStack_30,lVar1);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10729f83c(&uStack_30);
  return;
}



/* Entry: 10729f27c; end: 10729f29f;  */

void FUN_10729f27c(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_10729f710(&uStack_11,param_1);
  return;
}


