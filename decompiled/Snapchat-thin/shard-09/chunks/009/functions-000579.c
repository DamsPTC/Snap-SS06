/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107299934; end: 1072999a7;  */

long * FUN_107299934(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if ((long *)0x492492492492492 < param_2) {
    FUN_10726deb8();
    func_0x00010729e688();
    FUN_1072999a8();
    return param_1;
  }
  uVar1 = (param_1[2] - *param_1) / 0x38;
  plVar2 = (long *)(uVar1 * 2);
  if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
    plVar2 = param_2;
  }
  if (0x249249249249248 < uVar1) {
    plVar2 = (long *)0x492492492492492;
  }
  return plVar2;
}



/* Entry: 1072999a8; end: 1072999eb;  */

void FUN_1072999a8(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010729e624();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x38) {
    func_0x00010729f1b0();
    FUN_107262f3c();
  }
  func_0x00010729ea48();
  return;
}



/* Entry: 1072999ec; end: 107299a43;  */

long FUN_1072999ec(long param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010729eea8();
  if ((bool)in_CY) {
    FUN_107299a44();
  }
  else {
    func_0x000107299a20();
    param_1 = unaff_x20 + 0x38;
  }
  *(long *)(unaff_x19 + 8) = param_1;
  return param_1 + -0x38;
}



/* Entry: 107299a44; end: 107299abf;  */

undefined8 FUN_107299a44(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x00010729e618();
  FUN_107299934();
  func_0x00010729e634();
  FUN_107299afc();
  func_0x000104c318bc(lStack_48);
  lStack_48 = lStack_48 + 0x38;
  func_0x00010729ec1c();
  FUN_107299ac0();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x000107299bdc(auStack_58);
  return uVar1;
}



/* Entry: 107299ac0; end: 107299afb;  */

void FUN_107299ac0(void)

{
  func_0x00010729e5f0();
  func_0x00010729ee08();
  FUN_107299b30();
  func_0x00010729e380();
  return;
}



/* Entry: 107299afc; end: 107299b2f;  */

void FUN_107299afc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010729ee68();
  if (param_2 != 0) {
    FUN_10726dec4(param_4);
  }
  func_0x00010729e944(0x38);
  return;
}



/* Entry: 107299b30; end: 107299ba7;  */

void FUN_107299b30(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long unaff_x19;
  undefined1 auStack_60 [40];
  long lStack_38;
  
  func_0x000100601028();
  func_0x00010729e460();
  for (; param_2 != unaff_x19; param_2 = param_2 + 0x38) {
    func_0x000104c318bc(param_4,param_2);
    param_4 = lStack_38 + 0x38;
    lStack_38 = param_4;
  }
  func_0x00010729ef18();
  func_0x00010729eb34();
  FUN_107299ba8();
  FUN_10726df70(auStack_60);
  return;
}



/* Entry: 107299ba8; end: 107299c07;  */

void FUN_107299ba8(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x38) {
    func_0x000104c2f714(param_2);
  }
  return;
}



/* Entry: 107299c08; end: 107299c0f;  */

void FUN_107299c08(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010729e5f0(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x38;
    func_0x000104c2f714();
  }
  return;
}



/* Entry: 107299c10; end: 107299c9f;  */

void FUN_107299c10(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010729e5f0();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x38;
    func_0x000104c2f714();
  }
  return;
}



/* Entry: 107299ca0; end: 107299d4f;  */

void FUN_107299ca0(long param_1)

{
  long *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  
  func_0x00010729e8dc();
  if (*(long *)(param_1 + 8) != 0) {
    FUN_107299d50();
    for (; (unaff_x19 != (long *)0x0 && (unaff_x21 != unaff_x20)); unaff_x21 = (long *)*unaff_x21) {
      FUN_107262f3c(unaff_x19 + 2,unaff_x21 + 2);
      unaff_x19 = (long *)*unaff_x19;
      func_0x00010729e9ac();
      FUN_107299d74();
    }
    func_0x00010729e9ac();
    func_0x0001072981e4();
  }
  for (; unaff_x21 != unaff_x20; unaff_x21 = (long *)*unaff_x21) {
    FUN_107299dac();
  }
  return;
}



/* Entry: 107299d50; end: 107299d73;  */

long FUN_107299d50(long *param_1)

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



/* Entry: 107299d74; end: 107299dab;  */

void FUN_107299d74(undefined8 param_1,long param_2)

{
  func_0x00010729e5f0();
  func_0x000104c2fe38(param_2 + 0x10);
  func_0x00010729e6c4();
  FUN_107299df4();
  func_0x00010729ea48();
  FUN_107299ef4();
  return;
}



/* Entry: 107299dac; end: 107299df3;  */

undefined8 FUN_107299dac(void)

{
  undefined8 unaff_x19;
  
  func_0x00010729efb4();
  FUN_10729a12c();
  FUN_107299d74();
  func_0x00010729eb14();
  return unaff_x19;
}



/* Entry: 107299df4; end: 107299ef3;  */

long * FUN_107299df4(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  undefined1 in_NG;
  bool bVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong unaff_x20;
  long *unaff_x21;
  long *plVar7;
  ulong unaff_x22;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  
  func_0x00010729f100();
  func_0x000100601028();
  func_0x00010729e924();
  if ((unaff_x22 == 0) || (func_0x00010729edac(param_1,param_2,(float)unaff_x22), (bool)in_NG)) {
    func_0x00010729e904();
    func_0x00010729e34c();
    FUN_107299fac();
    unaff_x22 = unaff_x21[1];
  }
  uVar8 = unaff_x22 - 1;
  if ((unaff_x22 & uVar8) == 0) {
    uVar9 = uVar8 & unaff_x20;
  }
  else {
    uVar9 = unaff_x20;
    if (unaff_x22 <= unaff_x20) {
      uVar9 = 0;
      if (unaff_x22 != 0) {
        uVar9 = unaff_x20 / unaff_x22;
      }
      uVar9 = unaff_x20 - uVar9 * unaff_x22;
    }
  }
  plVar7 = *(long **)(*unaff_x21 + uVar9 * 8);
  if (plVar7 != (long *)0x0) {
    uVar10 = 0;
    bVar1 = 0;
    for (; lVar4 = *plVar7, lVar4 != 0; plVar7 = (long *)*plVar7) {
      uVar5 = *(ulong *)(lVar4 + 8);
      if ((unaff_x22 & uVar8) == 0) {
        uVar6 = uVar5 & uVar8;
      }
      else {
        uVar6 = uVar5;
        if (unaff_x22 <= uVar5) {
          uVar6 = 0;
          if (unaff_x22 != 0) {
            uVar6 = uVar5 / unaff_x22;
          }
          uVar6 = uVar5 - uVar6 * unaff_x22;
        }
      }
      if (uVar6 != uVar9) {
        return plVar7;
      }
      if (uVar5 == unaff_x20) {
        uVar3 = (int)lVar4 + 0x10;
        func_0x000104c32db4();
      }
      else {
        uVar3 = 0;
      }
      bVar2 = uVar3 != uVar10;
      if ((bool)(bVar1 & bVar2)) {
        return plVar7;
      }
      uVar10 = uVar10 | bVar2;
      bVar1 = bVar1 | bVar2;
    }
  }
  return plVar7;
}



/* Entry: 107299ef4; end: 107299fab;  */

void FUN_107299ef4(long *param_1,long *param_2,long *param_3)

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



/* Entry: 107299fac; end: 10729a027;  */

void FUN_107299fac(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar2;
  long *plVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  long *plVar5;
  long extraout_x8_01;
  ulong extraout_x9;
  ulong extraout_x9_00;
  undefined8 extraout_x9_01;
  ulong unaff_x21;
  ulong unaff_x22;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  
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
      if (!(bool)in_CY) goto LAB_107299fe4;
    }
    return;
  }
LAB_107299fe4:
  func_0x00010729eb1c();
  func_0x00010729f100();
  if (param_2 == 0) {
    FUN_107270cf0(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    FUN_107270d08(param_1 + 8);
    func_0x00010729ebf0();
    FUN_107270cf0();
    func_0x00010729edc8();
    uVar8 = extraout_x9;
    while (bVar2 = param_2 == uVar8, !bVar2) {
      func_0x00010729eeb8();
      uVar8 = extraout_x9_00;
    }
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar6 != (long *)0x0) {
      func_0x00010729ee48();
      if (bVar2) {
        unaff_x22 = unaff_x22 & unaff_x21;
      }
      else if (param_2 <= unaff_x22) {
        uVar8 = 0;
        if (param_2 != 0) {
          uVar8 = unaff_x22 / param_2;
        }
        unaff_x22 = unaff_x22 - uVar8 * param_2;
      }
      *(undefined8 *)(extraout_x8_00 + unaff_x22 * 8) = extraout_x9_01;
      lVar4 = extraout_x8_00;
      while (plVar7 = plVar6, plVar6 = (long *)*plVar7, plVar6 != (long *)0x0) {
        uVar8 = plVar6[1];
        if ((param_2 & unaff_x21) == 0) {
          uVar8 = uVar8 & unaff_x21;
        }
        else if (param_2 <= uVar8) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar8 / param_2;
          }
          uVar8 = uVar8 - uVar1 * param_2;
        }
        if (uVar8 != unaff_x22) {
          plVar5 = plVar6;
          if (*(long *)(lVar4 + uVar8 * 8) == 0) {
            *(long **)(lVar4 + uVar8 * 8) = plVar7;
            unaff_x22 = uVar8;
          }
          else {
            do {
              if (*plVar5 == 0) break;
              plVar3 = plVar6 + 2;
              func_0x000104c32db4(plVar3,*plVar5 + 0x10);
              plVar5 = (long *)*plVar5;
            } while (((ulong)plVar3 & 1) != 0);
            func_0x00010729e544();
            plVar6 = plVar7;
            lVar4 = extraout_x8_01;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10729a028; end: 10729a12b;  */

void FUN_10729a028(long param_1,ulong param_2)

{
  ulong uVar1;
  bool bVar2;
  long *plVar3;
  long extraout_x8;
  long lVar4;
  long *plVar5;
  long extraout_x8_00;
  ulong extraout_x9;
  ulong extraout_x9_00;
  undefined8 extraout_x9_01;
  ulong unaff_x21;
  ulong unaff_x22;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  
  func_0x00010729f100();
  if (param_2 == 0) {
    FUN_107270cf0(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    FUN_107270d08(param_1 + 8);
    func_0x00010729ebf0();
    FUN_107270cf0();
    func_0x00010729edc8();
    uVar8 = extraout_x9;
    while (bVar2 = param_2 == uVar8, !bVar2) {
      func_0x00010729eeb8();
      uVar8 = extraout_x9_00;
    }
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar6 != (long *)0x0) {
      func_0x00010729ee48();
      if (bVar2) {
        unaff_x22 = unaff_x22 & unaff_x21;
      }
      else if (param_2 <= unaff_x22) {
        uVar8 = 0;
        if (param_2 != 0) {
          uVar8 = unaff_x22 / param_2;
        }
        unaff_x22 = unaff_x22 - uVar8 * param_2;
      }
      *(undefined8 *)(extraout_x8 + unaff_x22 * 8) = extraout_x9_01;
      lVar4 = extraout_x8;
      while (plVar7 = plVar6, plVar6 = (long *)*plVar7, plVar6 != (long *)0x0) {
        uVar8 = plVar6[1];
        if ((param_2 & unaff_x21) == 0) {
          uVar8 = uVar8 & unaff_x21;
        }
        else if (param_2 <= uVar8) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar8 / param_2;
          }
          uVar8 = uVar8 - uVar1 * param_2;
        }
        if (uVar8 != unaff_x22) {
          plVar5 = plVar6;
          if (*(long *)(lVar4 + uVar8 * 8) == 0) {
            *(long **)(lVar4 + uVar8 * 8) = plVar7;
            unaff_x22 = uVar8;
          }
          else {
            do {
              if (*plVar5 == 0) break;
              plVar3 = plVar6 + 2;
              func_0x000104c32db4(plVar3,*plVar5 + 0x10);
              plVar5 = (long *)*plVar5;
            } while (((ulong)plVar3 & 1) != 0);
            func_0x00010729e544();
            plVar6 = plVar7;
            lVar4 = extraout_x8_00;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10729a12c; end: 10729a183;  */

void FUN_10729a12c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 unaff_x22;
  
  func_0x00010729eb28();
  *param_1 = param_2;
  param_1[1] = unaff_x22;
  param_1[2] = 1;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x000104c2fe00(param_2 + 2,param_3);
  puVar1 = param_2 + 2;
  func_0x000104c2fe38();
  param_2[1] = puVar1;
  return;
}



/* Entry: 10729a184; end: 10729a3f7;  */

ulong * FUN_10729a184(ulong *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *extraout_x8;
  long lVar8;
  int extraout_w10;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong *puStack_e8;
  undefined1 uStack_e0;
  ulong *puStack_d8;
  undefined8 **ppuStack_d0;
  undefined8 **ppuStack_c8;
  undefined1 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined1 uStack_a0;
  ulong *puStack_98;
  undefined8 **ppuStack_90;
  undefined8 **ppuStack_88;
  undefined1 uStack_80;
  undefined8 *puStack_78;
  undefined8 *apuStack_70 [2];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar10 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)param_2[1];
  uStack_e0 = 0;
  lVar8 = (long)puVar1 - (long)puVar10;
  puStack_e8 = param_1;
  if (lVar8 != 0) {
    puVar5 = (undefined8 *)(lVar8 / 0x48);
    plVar7 = param_2;
    func_0x00010729ee28(0xe38f);
    if (extraout_x8 <= puVar5) {
      FUN_107298868();
LAB_10729a394:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10729a398);
      (*pcVar4)();
    }
    FUN_107298874();
    *param_1 = (ulong)puVar5;
    param_1[1] = (ulong)puVar5;
    puStack_d8 = param_1 + 2;
    *puStack_d8 = (ulong)(puVar5 + (long)plVar7 * 9);
    ppuStack_d0 = &puStack_b8;
    ppuStack_c8 = &puStack_b0;
    uStack_c0 = 0;
    puStack_b8 = puVar5;
    for (; puStack_b0 = puVar5, puVar10 != puVar1; puVar10 = puVar10 + 9) {
      *puVar5 = *puVar10;
      puStack_a8 = puVar5 + 1;
      *puStack_a8 = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar9 = (undefined8 *)puVar10[1];
      puVar2 = (undefined8 *)puVar10[2];
      uStack_a0 = 0;
      lVar8 = (long)puVar2 - (long)puVar9;
      if (lVar8 != 0) {
        puVar6 = (undefined8 *)(lVar8 >> 4);
        if ((ulong)puVar6 >> 0x3c != 0) {
          FUN_1072988f0();
          goto LAB_10729a394;
        }
        FUN_1072988fc();
        puStack_98 = puVar5 + 3;
        *puStack_98 = (ulong)(puVar6 + (long)plVar7 * 2);
        puVar5[1] = puVar6;
        puVar5[2] = puVar6;
        ppuStack_90 = &puStack_78;
        ppuStack_88 = apuStack_70;
        puStack_78 = puVar6;
        for (; apuStack_70[0] = puVar6, puVar9 != puVar2; puVar9 = puVar9 + 2) {
          lVar8 = puVar9[1];
          uVar11 = *puVar9;
          puVar6[1] = puVar9[1];
          *puVar6 = uVar11;
          if (lVar8 != 0) {
            do {
              func_0x00010729e450();
            } while (extraout_w10 != 0);
          }
          puVar6 = puVar6 + 2;
        }
        uStack_80 = 1;
        func_0x00010729892c(&puStack_98);
        puVar5[2] = puVar6;
      }
      uStack_a0 = 1;
      func_0x00010729896c(&puStack_a8);
      plVar7 = puVar10 + 4;
      FUN_107298994(puVar5 + 4);
      puVar5 = puStack_b0 + 9;
    }
    uStack_c0 = 1;
    func_0x0001072988b0(&puStack_d8);
    param_1[1] = (ulong)puVar5;
  }
  uStack_e0 = 1;
  FUN_10729a3f8(&puStack_e8);
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  func_0x00010729f0cc();
  uVar3 = *(uint *)(param_2 + 8);
  if (uVar3 != 0xffffffff) {
    puStack_98 = param_1 + 3;
    (*(code *)(&PTR_FUN_110998510)[uVar3])(&puStack_98,param_2 + 3);
    *(uint *)(param_1 + 8) = uVar3;
  }
  return param_1;
}



/* Entry: 10729a3f8; end: 10729a41f;  */

void FUN_10729a3f8(void)

{
  uint extraout_w8;
  
  func_0x00010729ec80();
  if ((extraout_w8 & 1) == 0) {
    func_0x00010729823c();
  }
  return;
}



/* Entry: 10729a420; end: 10729a42b;  */

void FUN_10729a420(undefined8 *param_1)

{
  func_0x000100600fcc(*param_1);
  FUN_107298658();
  FUN_1072989d0();
  return;
}



/* Entry: 10729a42c; end: 10729a487;  */

void FUN_10729a42c(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x00010729e5f0();
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  FUN_10729a184(param_1 + 6,param_2 + 6);
  *(undefined8 *)(unaff_x20 + 0x78) = *(undefined8 *)(unaff_x19 + 0x78);
  return;
}



/* Entry: 10729a488; end: 10729a49f;  */

void FUN_10729a488(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_107291d8c(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10729a4a0; end: 10729a4bb;  */

void FUN_10729a4a0(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_107291d8c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10729a4bc; end: 10729a4ef;  */

long * FUN_10729a4bc(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107250860();
  }
  FUN_1072508a0(param_1);
  if (param_1[1] != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10729a4f0; end: 10729a4f7;  */

void FUN_10729a4f0(void)

{
  return;
}



/* Entry: 10729a4f8; end: 10729a517;  */

void FUN_10729a4f8(undefined8 *param_1)

{
  func_0x00010729ecd4();
  *param_1 = &PTR_FUN_110998530;
  return;
}



/* Entry: 10729a518; end: 10729a537;  */

void FUN_10729a518(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110998530;
  return;
}



/* Entry: 10729a538; end: 10729a59b;  */

void FUN_10729a538(undefined8 param_1)

{
  func_0x00010729e74c();
  func_0x00010729ed9c(param_1,"start");
  func_0x00010729ef78();
  func_0x00010729e59c();
  func_0x00010729ea30();
  func_0x00010729e9c8();
  func_0x00010729ea14();
  return;
}



/* Entry: 10729a59c; end: 10729a5c3;  */

void FUN_10729a59c(undefined8 param_1)

{
  func_0x00010729e9d0();
  func_0x00010729e744(param_1,&PTR_DAT_1109985a0);
  func_0x00010729e3dc();
  return;
}



/* Entry: 10729a5c4; end: 10729a5cf;  */

undefined ** FUN_10729a5c4(void)

{
  return &PTR_DAT_1109985a0;
}



/* Entry: 10729a5d0; end: 10729a70b;  */

undefined1 * FUN_10729a5d0(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  ulong unaff_x20;
  ulong unaff_x21;
  double dVar2;
  undefined1 auStack_168 [56];
  undefined1 auStack_130 [56];
  double dStack_f8;
  undefined1 uStack_f0;
  undefined1 uStack_e8;
  undefined8 uStack_e7;
  undefined1 auStack_d8 [56];
  undefined1 auStack_a0 [56];
  double dStack_68;
  undefined1 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010729f128();
  func_0x00010729e310();
  uStack_48 = extraout_x8;
  func_0x000100060964(auStack_d8);
  func_0x000100060964(auStack_a0,&UNK_10f408bea);
  dStack_68 = (double)((ulong)dStack_68 & 0xffffffffffffff00);
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  if ((unaff_x21 >> 0x20 != 0) || (unaff_x20 >> 0x20 != 0)) {
    uStack_60 = 1;
    dStack_68 = (double)(float)unaff_x21;
    if (unaff_x21 >> 0x20 == 0) {
      dStack_68 = 0.0;
    }
    uStack_50 = 1;
    dVar2 = (double)(float)unaff_x20;
    in_ZR = unaff_x20 >> 0x20 == 0;
    if ((bool)in_ZR) {
      dVar2 = 0.0;
    }
    uStack_58 = SUB81(dVar2,0);
    uStack_57 = (undefined7)((ulong)dVar2 >> 8);
  }
  func_0x000104c318bc(auStack_168,auStack_d8);
  func_0x000104c318bc(auStack_130,auStack_a0);
  uStack_f0 = uStack_60;
  dStack_f8 = dStack_68;
  uStack_e7 = CONCAT17(uStack_50,uStack_57);
  uStack_e8 = uStack_58;
  func_0x000107746fdc(param_1,auStack_168);
  FUN_10729a70c(auStack_168);
  puVar1 = auStack_d8;
  FUN_10729a70c(puVar1);
  func_0x00010729e1e0(uStack_48);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010729e6ec();
  FUN_10729a70c();
  puVar1 = auStack_d8;
  FUN_10729a70c(puVar1);
  func_0x00010729e514();
  func_0x000104c2f714(puVar1 + 0x38);
  func_0x00010729ebe0();
  return puVar1;
}



/* Entry: 10729a70c; end: 10729a733;  */

long FUN_10729a70c(long param_1)

{
  func_0x000104c2f714(param_1 + 0x38);
  func_0x00010729ebe0();
  return param_1;
}



/* Entry: 10729a734; end: 10729a73b;  */

void FUN_10729a734(void)

{
  return;
}



/* Entry: 10729a73c; end: 10729a75b;  */

void FUN_10729a73c(undefined8 *param_1)

{
  func_0x00010729ecd4();
  *param_1 = &PTR_FUN_1109985c0;
  return;
}



/* Entry: 10729a75c; end: 10729a77b;  */

void FUN_10729a75c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_1109985c0;
  return;
}



/* Entry: 10729a77c; end: 10729a7df;  */

void FUN_10729a77c(undefined8 param_1)

{
  func_0x00010729e74c();
  func_0x00010729ed9c(param_1,"end");
  func_0x00010729ef78();
  func_0x00010729e59c();
  func_0x00010729ea30();
  func_0x00010729e9c8();
  func_0x00010729ea14();
  return;
}



/* Entry: 10729a7e0; end: 10729a807;  */

void FUN_10729a7e0(undefined8 param_1)

{
  func_0x00010729e9d0();
  func_0x00010729e744(param_1,&PTR_DAT_110998620);
  func_0x00010729e3dc();
  return;
}



/* Entry: 10729a808; end: 10729a81b;  */

undefined ** FUN_10729a808(void)

{
  return &PTR_DAT_110998620;
}



/* Entry: 10729a81c; end: 10729a847;  */

void FUN_10729a81c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  func_0x00010729ecd4();
  uVar2 = param_1[1];
  *puVar1 = &PTR_DAT_110998640;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10729a848; end: 10729a86f;  */

void FUN_10729a848(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110998640;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  return;
}



/* Entry: 10729a870; end: 10729a8e3;  */

void FUN_10729a870(void)

{
  long unaff_x20;
  undefined1 auStack_60 [16];
  undefined1 uStack_50;
  undefined1 uStack_40;
  
  func_0x00010729e5f0();
  func_0x00010729e74c();
  uStack_50 = 0;
  uStack_40 = 0;
  FUN_10729a5d0(auStack_60,"update",(ulong)*(uint *)(unaff_x20 + 8) | 0x100000000,
                (ulong)*(uint *)(unaff_x20 + 0xc) | 0x100000000);
  func_0x00010729ef78();
  func_0x00010729e59c();
  func_0x00010729ea30();
  func_0x00010729e9c8();
  func_0x00010729ea14();
  return;
}



/* Entry: 10729a8e4; end: 10729a90b;  */

void FUN_10729a8e4(undefined8 param_1)

{
  func_0x00010729e9d0();
  func_0x00010729e744(param_1,&PTR_DAT_1109986a0);
  func_0x00010729e3dc();
  return;
}



/* Entry: 10729a90c; end: 10729a917;  */

undefined ** FUN_10729a90c(void)

{
  return &PTR_DAT_1109986a0;
}



/* Entry: 10729a918; end: 10729a9cf;  */

long FUN_10729a918(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    func_0x00010729e474();
  }
  else {
    func_0x00010729ea74();
    *(long *)(param_1 + 0x18) = lVar1;
  }
  return param_1;
}



/* Entry: 10729a9d0; end: 10729a9d7;  */

void FUN_10729a9d0(void)

{
  return;
}



/* Entry: 10729a9d8; end: 10729aa03;  */

void FUN_10729a9d8(undefined8 *param_1)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x00010729f0f4();
  *param_1 = &PTR_FUN_1109986c0;
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  param_1[2] = *(undefined8 *)(unaff_x19 + 0x10);
  param_1[1] = uVar1;
  return;
}



/* Entry: 10729aa04; end: 10729aa2b;  */

void FUN_10729aa04(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_1109986c0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 10729aa2c; end: 10729aa77;  */

void FUN_10729aa2c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_58 [56];
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010729aac0(auStack_58,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18),param_2);
  func_0x00010729aaac(*(undefined8 *)(lVar1 + 0x18),auStack_58);
  FUN_10729aae8(auStack_58);
  return;
}



/* Entry: 10729aa78; end: 10729aa9f;  */

void FUN_10729aa78(undefined8 param_1)

{
  func_0x00010729e9d0();
  func_0x00010729e744(param_1,&PTR_DAT_110998720);
  func_0x00010729e3dc();
  return;
}



/* Entry: 10729aaa0; end: 10729aaab;  */

undefined ** FUN_10729aaa0(void)

{
  return &PTR_DAT_110998720;
}



/* Entry: 10729aaac; end: 10729aae7;  */

long * FUN_10729aaac(long *param_1,long *param_2,undefined8 param_3)

{
  long *unaff_x19;
  
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010729f030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x30))();
    return param_1;
  }
  func_0x000104bfeb48();
  if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010729aad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x30))(param_1,param_2,param_3);
    return param_2;
  }
  func_0x000104bfeb48();
  func_0x00010729f1e8();
  FUN_10729ab30();
  func_0x00010729e564();
  FUN_10729ac2c();
  return unaff_x19;
}



/* Entry: 10729aae8; end: 10729ab2f;  */

undefined8 FUN_10729aae8(void)

{
  undefined8 unaff_x19;
  
  func_0x00010729f1e8();
  FUN_10729ab30();
  func_0x00010729e564();
  FUN_10729ac2c();
  return unaff_x19;
}



/* Entry: 10729ab30; end: 10729ab4f;  */

void FUN_10729ab30(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_10729ab50();
  }
  return;
}



/* Entry: 10729ab50; end: 10729ab73;  */

void FUN_10729ab50(void)

{
  func_0x00010729e564();
  FUN_10729ab74();
  return;
}



/* Entry: 10729ab74; end: 10729abc3;  */

void FUN_10729ab74(long *param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = (long *)*param_1;
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x1c0;
      FUN_10729abc4();
    }
    param_1[1] = lVar2;
    func_0x00010729ec54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10729abc4; end: 10729ac2b;  */

undefined8 FUN_10729abc4(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000104c335c0(param_1 + 0x1b0);
  func_0x000107293acc(param_1 + 0x150);
  func_0x0001000e30f4(param_1 + 0x138);
  FUN_107283194(param_1 + 0x128);
  func_0x000104c2f714(param_1 + 0xf0);
  func_0x000104c335c0(param_1 + 0xe0);
  func_0x000104c2f714(param_1 + 0xa8);
  func_0x000104c2f714(param_1 + 0x70);
  func_0x000104c319e0(param_1 + 0x30);
  func_0x000104c335c0(param_1 + 0x20);
  func_0x000104c3463c(param_1);
  func_0x000104c31c04();
  return unaff_x19;
}



/* Entry: 10729ac2c; end: 10729ac7b;  */

void FUN_10729ac2c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = (long *)*param_1;
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x18;
      FUN_10729ab50();
    }
    param_1[1] = lVar2;
    func_0x00010729ec54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10729ac7c; end: 10729acdf;  */

void FUN_10729ac7c(long param_1)

{
  long unaff_x21;
  undefined8 uVar1;
  
  func_0x00010729eacc();
  FUN_10729a918();
  uVar1 = *(undefined8 *)(unaff_x21 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(unaff_x21 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x21 + 0x20) = 0;
  *(undefined8 *)(unaff_x21 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(unaff_x21 + 0x30);
  func_0x00010729a95c(param_1 + 0x38,unaff_x21 + 0x38);
  return;
}



/* Entry: 10729ace0; end: 10729ad0b;  */

undefined8 * FUN_10729ace0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110998740;
  func_0x00010729a9a0(param_1 + 4);
  return param_1;
}



/* Entry: 10729ad0c; end: 10729ad1f;  */

void FUN_10729ad0c(void)

{
  FUN_10729ace0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10729ad20; end: 10729ade7;  */

undefined8 * FUN_10729ad20(long param_1)

{
  long *plVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long extraout_x8;
  undefined8 extraout_x9;
  code *pcVar5;
  undefined8 auStack_b0 [11];
  undefined1 auStack_58 [24];
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar2 = auStack_b0;
  puVar3 = auStack_b0;
  puVar4 = auStack_b0;
  func_0x00010729f148();
  pcVar5 = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    pcVar5 = *(code **)(*plVar1 + ((ulong)pcVar5 & 0xffffffff));
  }
  uStack_38 = extraout_x9;
  FUN_10729ac7c(auStack_b0,extraout_x8 + 0x20);
  puStack_40 = (undefined8 *)0x0;
  func_0x00010729ecbc();
  *puVar2 = &PTR_FUN_110998780;
  FUN_10729ac7c(puVar2 + 1,auStack_b0);
  puStack_40 = puVar2;
  (*pcVar5)(plVar1,auStack_58);
  func_0x000107283e00(auStack_58);
  func_0x00010729a9a0();
  func_0x00010729e1e0(uStack_38);
  if ((bool)in_ZR) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x000107283e00(auStack_58);
  func_0x00010729a9a0();
  func_0x00010729e514();
  *puVar4 = &PTR_FUN_110998780;
  func_0x00010729a9a0(puVar4 + 1);
  return puVar4;
}



/* Entry: 10729ade8; end: 10729ae13;  */

undefined8 * FUN_10729ade8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110998780;
  func_0x00010729a9a0(param_1 + 1);
  return param_1;
}



/* Entry: 10729ae14; end: 10729ae27;  */

void FUN_10729ae14(void)

{
  FUN_10729ade8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10729ae28; end: 10729ae5b;  */

undefined8 FUN_10729ae28(undefined8 param_1)

{
  func_0x00010729ecbc();
  FUN_10729b04c();
  return param_1;
}



/* Entry: 10729ae5c; end: 10729ae7f;  */

void FUN_10729ae5c(long param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010729e618(param_2,param_1 + 8);
  *param_2 = &PTR_FUN_110998780;
  FUN_10729a918(param_2 + 1);
  FUN_107283e34(unaff_x19 + 0x28,unaff_x20 + 0x20);
  func_0x00010729a95c(param_2 + 8,unaff_x20 + 0x38);
  return;
}



/* Entry: 10729ae80; end: 10729b017;  */

void FUN_10729ae80(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [56];
  undefined1 auStack_b0 [32];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  char cStack_60;
  undefined1 auStack_58 [24];
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  lVar2 = param_1;
  func_0x00010729e310(param_1,param_2,param_2);
  uStack_38 = extraout_x8;
  func_0x00010729aac0(auStack_e8,*(undefined8 *)(lVar2 + 0x20));
  FUN_107284284(auStack_f8,param_1 + 0x28);
  iVar1 = (int)param_1 + 0x28;
  FUN_1072842e4();
  if (iVar1 != 0) {
    plVar3 = (long *)(param_1 + 0x28);
    func_0x00010728433c();
    func_0x00010729a95c(auStack_b0,param_1 + 0x40);
    puVar4 = &uStack_90;
    FUN_10729b0b4(puVar4,auStack_e8);
    puStack_40 = (undefined8 *)0x0;
    func_0x00010729ecbc();
    *puVar4 = &PTR_FUN_1109987f0;
    func_0x00010729a95c(puVar4 + 1,auStack_b0);
    puVar4[6] = uStack_88;
    puVar4[5] = uStack_90;
    puVar4[7] = uStack_80;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_90 = 0;
    *(undefined1 *)(puVar4 + 8) = 0;
    *(undefined1 *)(puVar4 + 0xb) = 0;
    in_ZR = cStack_60 == '\x01';
    if ((bool)in_ZR) {
      puVar4[9] = uStack_70;
      puVar4[8] = uStack_78;
      puVar4[10] = uStack_68;
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_78 = 0;
      *(undefined1 *)(puVar4 + 0xb) = 1;
    }
    puStack_40 = puVar4;
    (**(code **)(*plVar3 + 0x10))(plVar3,auStack_58);
    func_0x0001006393ec(auStack_58);
    FUN_10729b1d8(auStack_b0);
  }
  func_0x000107270b00(auStack_f8);
  FUN_10729aae8();
  func_0x00010729e1e0(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001006393ec(auStack_58);
  FUN_10729b1d8(auStack_b0);
  func_0x000107270b00(auStack_f8);
  FUN_10729aae8(auStack_e8);
  func_0x00010729e514();
  func_0x00010729e9d0();
  func_0x00010729e744();
  func_0x00010729e3dc();
  return;
}



/* Entry: 10729b018; end: 10729b03f;  */

void FUN_10729b018(undefined8 param_1)

{
  func_0x00010729e9d0();
  func_0x00010729e744(param_1,&PTR_DAT_110998860);
  func_0x00010729e3dc();
  return;
}



/* Entry: 10729b040; end: 10729b04b;  */

undefined ** FUN_10729b040(void)

{
  return &PTR_DAT_110998860;
}



/* Entry: 10729b04c; end: 10729b0b3;  */

void FUN_10729b04c(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010729e618();
  *param_1 = &PTR_FUN_110998780;
  FUN_10729a918(param_1 + 1);
  FUN_107283e34(unaff_x19 + 0x28,unaff_x20 + 0x20);
  func_0x00010729a95c(param_1 + 8,unaff_x20 + 0x38);
  return;
}



/* Entry: 10729b0b4; end: 10729b1d7;  */

void FUN_10729b0b4(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  ulong extraout_x8;
  ulong *unaff_x19;
  long unaff_x20;
  long lVar5;
  ulong uStack_48;
  
  func_0x00010729e618();
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  lVar5 = *param_2;
  lVar1 = param_2[1];
  func_0x00010729ef3c();
  lVar2 = lVar1 - lVar5;
  if (lVar2 != 0) {
    uVar4 = lVar2 / 0x18;
    func_0x00010729f00c();
    if (extraout_x8 <= uVar4) {
      FUN_10729b228();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10729b19c);
      (*pcVar3)();
    }
    FUN_10729b234();
    *unaff_x19 = uVar4;
    unaff_x19[1] = uVar4;
    func_0x00010729eaac(0x18);
    func_0x00010729edf8();
    for (; lVar5 != lVar1; lVar5 = lVar5 + 0x18) {
      FUN_10729b29c(uVar4,lVar5);
      uVar4 = uStack_48 + 0x18;
      uStack_48 = uVar4;
    }
    func_0x00010729edd8();
    func_0x00010729b25c();
    unaff_x19[1] = uVar4;
  }
  func_0x00010729e8ac();
  func_0x00010729b200();
  *(undefined1 *)(unaff_x19 + 3) = 0;
  *(undefined1 *)(unaff_x19 + 6) = 0;
  if (*(char *)(unaff_x20 + 0x30) == '\x01') {
    FUN_10729b29c(unaff_x19 + 3,unaff_x20 + 0x18);
    *(undefined1 *)(unaff_x19 + 6) = 1;
  }
  return;
}



/* Entry: 10729b1d8; end: 10729b227;  */

undefined8 FUN_10729b1d8(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 unaff_x19;
  
  FUN_10729aae8(param_1 + 0x20);
  func_0x00010729ee98();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return unaff_x19;
    }
    uVar1 = 0x28;
  }
  func_0x00010729eac0(uVar1);
  return unaff_x19;
}



/* Entry: 10729b228; end: 10729b233;  */

void FUN_10729b228(long param_1)

{
  func_0x00010729e410();
  __Znwm(param_1 * 0x18);
  return;
}



/* Entry: 10729b234; end: 10729b29b;  */

void FUN_10729b234(long param_1)

{
  __Znwm(param_1 * 0x18);
  return;
}



/* Entry: 10729b29c; end: 10729b37b;  */

ulong * FUN_10729b29c(ulong *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  ulong extraout_x8;
  long lVar5;
  ulong uStack_48;
  
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  lVar5 = *param_2;
  lVar1 = param_2[1];
  func_0x00010729ef3c();
  lVar2 = lVar1 - lVar5;
  if (lVar2 != 0) {
    uVar4 = lVar2 / 0x1c0;
    func_0x00010729ee78(0x2493);
    if (extraout_x8 <= uVar4) {
      FUN_10729b3a4();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10729b358);
      (*pcVar3)();
    }
    FUN_10729b3b0();
    *param_1 = uVar4;
    param_1[1] = uVar4;
    func_0x00010729eaac(0x1c0);
    func_0x00010729edf8();
    for (; lVar5 != lVar1; lVar5 = lVar5 + 0x1c0) {
      func_0x00010729ed90();
      FUN_10729b42c();
      uVar4 = uStack_48 + 0x1c0;
      uStack_48 = uVar4;
    }
    func_0x00010729edd8();
    func_0x00010729b3ec();
    param_1[1] = uVar4;
  }
  func_0x00010729e8ac();
  FUN_10729b37c();
  return param_1;
}



/* Entry: 10729b37c; end: 10729b3a3;  */

void FUN_10729b37c(void)

{
  uint extraout_w8;
  
  func_0x00010729ec80();
  if ((extraout_w8 & 1) == 0) {
    FUN_10729ab74();
  }
  return;
}



/* Entry: 10729b3a4; end: 10729b3af;  */

void FUN_10729b3a4(ulong param_1)

{
  long lVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long lVar2;
  
  func_0x00010729e410();
  func_0x00010729ee78(0x2493);
  if (param_1 < extraout_x8) {
    __Znwm(param_1 * 0x1c0);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010729eba4();
  if ((extraout_x8_00 & 1) == 0) {
    lVar1 = **(long **)(unaff_x19 + 0x10);
    lVar2 = **(long **)(unaff_x19 + 8);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x1c0;
      FUN_10729abc4();
    }
  }
  return;
}



/* Entry: 10729b3b0; end: 10729b42b;  */

void FUN_10729b3b0(ulong param_1)

{
  long lVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long lVar2;
  
  func_0x00010729ee78(0x2493);
  if (param_1 < extraout_x8) {
    __Znwm(param_1 * 0x1c0);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010729eba4();
  if ((extraout_x8_00 & 1) == 0) {
    lVar1 = **(long **)(unaff_x19 + 0x10);
    lVar2 = **(long **)(unaff_x19 + 8);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x1c0;
      FUN_10729abc4();
    }
  }
  return;
}



/* Entry: 10729b42c; end: 10729b463;  */

void FUN_10729b42c(long param_1)

{
  long unaff_x20;
  
  func_0x00010729e618();
  FUN_10729b464();
  FUN_107268400(param_1 + 0x1b0,unaff_x20 + 0x1b0);
  return;
}



/* Entry: 10729b464; end: 10729b503;  */

void FUN_10729b464(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010729e618();
  FUN_10728451c();
  func_0x000104c2fe00(param_1 + 0xf0,unaff_x20 + 0xf0);
  func_0x000107299490(unaff_x19 + 0x128,unaff_x20 + 0x128);
  func_0x00010015bc98(unaff_x19 + 0x138,unaff_x20 + 0x138);
  FUN_1072935a0(unaff_x19 + 0x150,unaff_x20 + 0x150);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x180);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x178);
  uVar4 = *(undefined8 *)(unaff_x20 + 400);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x188);
  *(undefined8 *)(unaff_x19 + 0x198) = *(undefined8 *)(unaff_x20 + 0x198);
  *(undefined8 *)(unaff_x19 + 0x180) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x178) = uVar1;
  *(undefined8 *)(unaff_x19 + 400) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x188) = uVar3;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x1a0);
  *(undefined8 *)(unaff_x19 + 0x1a8) = *(undefined8 *)(unaff_x20 + 0x1a8);
  *(undefined8 *)(unaff_x19 + 0x1a0) = uVar1;
  return;
}



/* Entry: 10729b504; end: 10729b52f;  */

undefined8 * FUN_10729b504(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109987f0;
  FUN_10729b1d8(param_1 + 1);
  return param_1;
}



/* Entry: 10729b530; end: 10729b543;  */

void FUN_10729b530(void)

{
  FUN_10729b504();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10729b544; end: 10729b577;  */

undefined8 FUN_10729b544(undefined8 param_1)

{
  func_0x00010729ecbc();
  FUN_10729b5e0();
  return param_1;
}



/* Entry: 10729b578; end: 10729b5ab;  */

void FUN_10729b578(long param_1,undefined8 *param_2)

{
  long unaff_x20;
  
  func_0x00010729e618(param_2,param_1 + 8);
  *param_2 = &PTR_FUN_1109987f0;
  func_0x00010729a95c(param_2 + 1);
  FUN_10729b0b4(param_2 + 5,unaff_x20 + 0x20);
  return;
}



/* Entry: 10729b5ac; end: 10729b5d3;  */

void FUN_10729b5ac(undefined8 param_1)

{
  func_0x00010729e9d0();
  func_0x00010729e744(param_1,&PTR_DAT_110998850);
  func_0x00010729e3dc();
  return;
}



/* Entry: 10729b5d4; end: 10729b5df;  */

undefined ** FUN_10729b5d4(void)

{
  return &PTR_DAT_110998850;
}



/* Entry: 10729b5e0; end: 10729b633;  */

void FUN_10729b5e0(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x00010729e618();
  *param_1 = &PTR_FUN_1109987f0;
  func_0x00010729a95c(param_1 + 1);
  FUN_10729b0b4(param_1 + 5,unaff_x20 + 0x20);
  return;
}



/* Entry: 10729b634; end: 10729b65f;  */

undefined8 * FUN_10729b634(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110998880;
  func_0x0001072930c0(param_1 + 1);
  return param_1;
}



/* Entry: 10729b660; end: 10729b673;  */

void FUN_10729b660(void)

{
  FUN_10729b634();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10729b674; end: 10729b6ab;  */

undefined8 FUN_10729b674(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x158;
  __Znwm(0x158);
  FUN_10729bb14();
  return uVar1;
}



/* Entry: 10729b6ac; end: 10729b6cf;  */

void FUN_10729b6ac(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  func_0x00010729e618();
  *param_2 = &PTR_FUN_110998880;
  uVar2 = *puVar1;
  param_2[2] = puVar1[1];
  param_2[1] = uVar2;
  FUN_1072994b4(param_2 + 3,puVar1 + 2);
  FUN_10729a184(unaff_x19 + 0xf8,unaff_x20 + 0xf0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x140);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x138);
  *(undefined4 *)(unaff_x19 + 0x150) = *(undefined4 *)(unaff_x20 + 0x148);
  *(undefined8 *)(unaff_x19 + 0x148) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x140) = uVar2;
  return;
}



/* Entry: 10729b6d0; end: 10729ba63;  */

void FUN_10729b6d0(long param_1,long ****param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long ***ppplVar4;
  code *pcVar5;
  undefined1 uVar6;
  long ****pppplVar7;
  long lVar8;
  ulong *extraout_x8;
  undefined8 extraout_x8_00;
  long ****extraout_x8_01;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long ****pppplVar13;
  long lVar14;
  ulong uVar15;
  long ***ppplStack_220;
  long ***ppplStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long lStack_200;
  long ***ppplStack_1f0;
  long **pplStack_1e8;
  ulong uStack_1e0;
  long alStack_1d0 [54];
  undefined1 auStack_20 [16];
  undefined8 uStack_10;
  
  func_0x00010729f208();
  lVar10 = param_1;
  pppplVar13 = param_2;
  func_0x00010729e310();
  lVar11 = *(long *)(lVar10 + 0x140);
  lVar8 = lVar10 + 8;
  pppplVar7 = param_2;
  uStack_10 = extraout_x8_00;
  (*(code *)(*pppplVar13)[0xc])(&lStack_208,param_2,lVar8,lVar10 + 0x18);
  *(undefined1 *)(extraout_x8 + 6) = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  *extraout_x8 = 0;
  *(undefined1 *)(extraout_x8 + 3) = 0;
  lVar10 = *(long *)(param_1 + 0x100) - *(long *)(param_1 + 0xf8);
  if (lVar10 == 0) {
    pppplVar13 = (long ****)0x0;
  }
  else {
    pppplVar13 = (long ****)(lVar10 / 0x48);
    func_0x00010729f00c();
    if (extraout_x8_01 <= pppplVar13) goto LAB_10729b9c4;
    pppplVar7 = pppplVar13;
    FUN_10729b234();
    for (lVar10 = 0; (long)pppplVar13 * 0x18 - lVar10 != 0; lVar10 = lVar10 + 0x18) {
      puVar1 = (undefined8 *)((long)pppplVar7 + lVar10);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
    }
    *extraout_x8 = (ulong)pppplVar7;
    extraout_x8[1] = (ulong)(pppplVar7 + (long)pppplVar13 * 3);
    extraout_x8[2] = (ulong)(pppplVar7 + lVar8 * 3);
    pppplVar13 = pppplVar7;
  }
  uVar15 = 0;
  while( true ) {
    lVar8 = lStack_200;
    uVar3 = (*(long *)(param_1 + 0x100) - *(long *)(param_1 + 0xf8)) / 0x48;
    uVar6 = uVar15 == uVar3;
    if (uVar3 <= uVar15) break;
    lVar10 = *(long *)(param_1 + 0xf8) + uVar15 * 0x48;
    ppplStack_220 = (long ***)0x0;
    ppplStack_218 = (long ***)0x0;
    uStack_210 = 0;
    if (*(long *)(lVar10 + 0x38) == 0) {
      FUN_10729bb7c(&ppplStack_220,&lStack_208);
    }
    else {
      for (lVar14 = lStack_208; lVar14 != lVar8; lVar14 = lVar14 + 0x1b0) {
        lVar9 = *(long *)(lVar14 + 0x128);
        pplStack_1e8 = (long **)0x0;
        uStack_1e0 = 0;
        ppplStack_1f0 = (long ***)0x0;
        lVar2 = lVar10 + 0x20;
        if (*(ulong *)(lVar10 + 0x38) <= *(ulong *)(lVar9 + 0x18)) {
          lVar2 = lVar9;
          lVar9 = lVar10 + 0x20;
        }
        plVar12 = (long *)(lVar9 + 0x10);
        while (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0) {
          lVar9 = lVar2;
          FUN_1072623d4(lVar2,plVar12 + 2);
          if (lVar9 != 0) {
            FUN_10724ef84(alStack_1d0,plVar12 + 2);
            func_0x0001000fecf4(&ppplStack_1f0,alStack_1d0);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_1d0);
          }
        }
        if (ppplStack_1f0 != (long ***)pplStack_1e8) {
          FUN_10729cbf8(&ppplStack_220,lVar14);
        }
        func_0x0001000e30f4(&ppplStack_1f0);
      }
    }
    ppplVar4 = ppplStack_218;
    ppplStack_1f0 = (long ***)(pppplVar13 + uVar15 * 3);
    for (pppplVar7 = (long ****)ppplStack_220; pppplVar7 != (long ****)ppplVar4;
        pppplVar7 = pppplVar7 + 0x36) {
      FUN_10729b464(alStack_1d0,pppplVar7);
      FUN_10729d028(auStack_20,pppplVar7,param_2);
      FUN_10729ce5c(&ppplStack_1f0,alStack_1d0);
      func_0x00010729ed68();
    }
    pppplVar7 = &ppplStack_220;
    func_0x00010729d51c();
    uVar15 = uVar15 + 1;
  }
  if (((*(byte *)(lVar11 + 0x100) & 1) != 0) && (uVar6 = lStack_208 == lStack_200, !(bool)uVar6)) {
    ppplStack_1f0 = (long ***)0x0;
    pplStack_1e8 = (long **)0x0;
    uStack_1e0 = 0;
    ppplStack_220 = (long ***)&ppplStack_1f0;
    for (lVar8 = lStack_208; uVar6 = lVar8 == lStack_200, !(bool)uVar6; lVar8 = lVar8 + 0x1b0) {
      FUN_10729b464(alStack_1d0,lVar8);
      FUN_10729d028(auStack_20,lVar8,param_2);
      FUN_10729ce5c(&ppplStack_220,alStack_1d0);
      func_0x00010729ed68();
    }
    extraout_x8[4] = (ulong)pplStack_1e8;
    extraout_x8[3] = (ulong)ppplStack_1f0;
    extraout_x8[5] = uStack_1e0;
    ppplStack_1f0 = (long ***)0x0;
    pplStack_1e8 = (long **)0x0;
    uStack_1e0 = 0;
    *(undefined1 *)(extraout_x8 + 6) = 1;
    pppplVar7 = &ppplStack_1f0;
    FUN_10729ab50();
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
  alStack_1d0[0] = ((long)pppplVar7 - *(long *)(param_1 + 0x148)) / 1000;
  FUN_10729bba4(0x112,*(undefined4 *)(param_1 + 0x150),alStack_1d0);
  func_0x00010729d51c(&lStack_208);
  func_0x00010729e1e0(uStack_10);
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
LAB_10729b9c4:
  FUN_10729b228();
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10729b9cc);
  (*pcVar5)();
}



/* Entry: 10729ba64; end: 10729ba8b;  */

void FUN_10729ba64(undefined8 param_1)

{
  func_0x00010729e9d0();
  func_0x00010729e744(param_1,&PTR_DAT_1109989a8);
  func_0x00010729e3dc();
  return;
}



/* Entry: 10729ba8c; end: 10729ba97;  */

undefined ** FUN_10729ba8c(void)

{
  return &PTR_DAT_1109989a8;
}



/* Entry: 10729ba98; end: 10729bac3;  */

void FUN_10729ba98(long param_1)

{
  func_0x00010729eb48();
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  FUN_10729bac4();
  return;
}



/* Entry: 10729bac4; end: 10729bb07;  */

void FUN_10729bac4(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010729e618();
  FUN_107299204();
  iVar1 = *(int *)(unaff_x20 + 0x10);
  if (iVar1 != -1) {
    func_0x00010729e6f8(&PTR_FUN_1109988f0);
    *(int *)(unaff_x19 + 0x10) = iVar1;
  }
  return;
}



/* Entry: 10729bb08; end: 10729bb13;  */

void FUN_10729bb08(void)

{
  return;
}



/* Entry: 10729bb14; end: 10729bb7b;  */

void FUN_10729bb14(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010729e618();
  *param_1 = &PTR_FUN_110998880;
  uVar1 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar1;
  FUN_1072994b4(param_1 + 3,param_2 + 2);
  FUN_10729a184(unaff_x19 + 0xf8,unaff_x20 + 0xf0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x140);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x138);
  *(undefined4 *)(unaff_x19 + 0x150) = *(undefined4 *)(unaff_x20 + 0x148);
  *(undefined8 *)(unaff_x19 + 0x148) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x140) = uVar1;
  return;
}



/* Entry: 10729bb7c; end: 10729bba3;  */

void FUN_10729bb7c(void)

{
  undefined1 in_ZR;
  
  func_0x00010729ebb0();
  if (!(bool)in_ZR) {
    func_0x00010729ede8();
    FUN_10729bc6c();
  }
  return;
}


