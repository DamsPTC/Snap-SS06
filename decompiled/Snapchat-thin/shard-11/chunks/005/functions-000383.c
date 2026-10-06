/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1086f14dc; end: 1086f1523;  */

void FUN_1086f14dc(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_1 + param_2 * 0x58;
  for (; param_1 != lVar1; param_1 = param_1 + 0x58) {
    FUN_1086f1488(param_3,param_1);
    param_3 = param_3 + 0x58;
  }
  return;
}



/* Entry: 1086f1524; end: 1086f170b;  */

undefined8 **
FUN_1086f1524(long *param_1,undefined8 **param_2,undefined8 *param_3,undefined8 *param_4,
             long param_5)

{
  undefined8 **ppuVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long *plStack_88;
  undefined8 **ppuStack_80;
  undefined8 **ppuStack_78;
  undefined1 uStack_70;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  if (0 < param_5) {
    plVar3 = param_1 + 2;
    puVar5 = (undefined8 *)param_1[1];
    if ((*plVar3 - (long)puVar5) / 0x18 < param_5) {
      func_0x00010528d470(param_1,((long)puVar5 - *param_1) / 0x18 + param_5);
      func_0x0001086f18c8();
      func_0x00010528d210();
      ppuVar1 = ppuStack_78 + param_5 * 3;
      for (param_5 = param_5 * 0x18; param_5 != 0; param_5 = param_5 + -0x18) {
        *ppuStack_78 = (undefined8 *)0x0;
        ppuStack_78[1] = (undefined8 *)0x0;
        ppuStack_78[2] = (undefined8 *)0x0;
        puVar5 = (undefined8 *)*param_3;
        ppuStack_78[1] = (undefined8 *)param_3[1];
        *ppuStack_78 = puVar5;
        ppuStack_78[2] = (undefined8 *)param_3[2];
        *param_3 = 0;
        param_3[1] = 0;
        param_3[2] = 0;
        ppuStack_78 = ppuStack_78 + 3;
        param_3 = param_3 + 3;
      }
      ppuStack_78 = ppuVar1;
      func_0x00010528d284(plVar3,param_2,param_1[1]);
      func_0x0001086f18a8();
      func_0x00010528d284(plVar3);
      func_0x0001086f1884();
      func_0x00010528d384();
      param_2 = ppuStack_80;
    }
    else {
      lVar6 = (long)puVar5 - (long)param_2;
      if (lVar6 / 0x18 < param_5) {
        ppuStack_80 = &puStack_60;
        ppuStack_78 = &puStack_58;
        puVar4 = puVar5;
        for (puVar2 = (undefined8 *)(lVar6 + (long)param_3); puVar2 != param_4; puVar2 = puVar2 + 3)
        {
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4[2] = 0;
          uVar7 = *puVar2;
          puVar4[1] = puVar2[1];
          *puVar4 = uVar7;
          puVar4[2] = puVar2[2];
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2[2] = 0;
          puVar4 = puVar4 + 3;
        }
        uStack_70 = 1;
        plStack_88 = plVar3;
        puStack_60 = puVar5;
        puStack_58 = puVar4;
        func_0x00010528d304(&plStack_88);
        param_1[1] = (long)puVar4;
        if (lVar6 < 1) {
          return param_2;
        }
        func_0x0001086f186c();
        param_5 = lVar6 / 0x18;
      }
      else {
        func_0x0001086f186c();
      }
      func_0x0001086f1794(param_3,param_5,param_2);
    }
  }
  return param_2;
}



/* Entry: 1086f170c; end: 1086f17d3;  */

void FUN_1086f170c(long param_1,long param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  puVar3 = puVar1;
  for (puVar2 = (undefined8 *)((long)puVar1 + (param_2 - param_4)); puVar2 < param_3;
      puVar2 = puVar2 + 3) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    uVar4 = *puVar2;
    puVar3[1] = puVar2[1];
    *puVar3 = uVar4;
    puVar3[2] = puVar2[2];
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar3 = puVar3 + 3;
  }
  *(undefined8 **)(param_1 + 8) = puVar3;
  for (param_4 = param_4 - (long)puVar1; param_4 != 0; param_4 = param_4 + 0x18) {
    func_0x0001086f18e0();
  }
  return;
}



/* Entry: 1086f17d4; end: 1086f1847;  */

void FUN_1086f17d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  func_0x0001086f1810();
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 1086f1848; end: 1086f18eb;  */

void FUN_1086f1848(void)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long lVar3;
  long unaff_x20;
  long unaff_x22;
  ulong uVar4;
  long lVar5;
  ulong unaff_x24;
  
  lVar2 = unaff_x19 + unaff_x22 * 0x58;
  lVar5 = *(long *)(unaff_x20 + 8);
  lVar3 = lVar5;
  for (uVar4 = unaff_x19 + (lVar5 - lVar2); uVar4 < unaff_x24; uVar4 = uVar4 + 0x58) {
    func_0x00010528f540(lVar3,uVar4);
    lVar3 = lVar3 + 0x58;
  }
  *(long *)(unaff_x20 + 8) = lVar3;
  lVar1 = lVar5 + -0x58;
  lVar3 = unaff_x19 + (lVar1 - lVar2);
  for (lVar2 = lVar2 - lVar5; lVar2 != 0; lVar2 = lVar2 + 0x58) {
    FUN_1086f1488(lVar1,lVar3);
    lVar3 = lVar3 + -0x58;
    lVar1 = lVar1 + -0x58;
  }
  return;
}



/* Entry: 1086f18ec; end: 1086f198b;  */

void FUN_1086f18ec(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_38;
  
  func_0x0001086f1a00(param_2[1] - *param_2);
  func_0x0001086f1a00(param_2[1] - *param_2);
  lVar1 = param_2[1];
  for (lVar3 = *param_2; lVar3 != lVar1; lVar3 = lVar3 + 0x18) {
    plVar4 = *(long **)(param_1 + 0xa0);
    lVar2 = lVar3;
    func_0x000107c2825c();
    lStack_38 = lVar2;
    (**(code **)(*plVar4 + 0x10))(plVar4,param_1,&lStack_38);
  }
  return;
}



/* Entry: 1086f198c; end: 1086f19e3;  */

void FUN_1086f198c(undefined8 *param_1)

{
  func_0x000107c3297c();
                    /* WARNING: Could not recover jumptable at 0x0001005fad24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)*param_1)();
  return;
}



/* Entry: 1086f19e4; end: 1086f1a0b;  */

void FUN_1086f19e4(void)

{
  return;
}



/* Entry: 1086f1a0c; end: 1086f1b47;  */

undefined8 * FUN_1086f1a0c(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x22;
  long lVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  
  puVar2 = &uStack_e0;
  puVar3 = &uStack_e0;
  func_0x000107c32994();
  ppuVar6 = *(undefined ***)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uStack_e0 = uVar5;
  ppuStack_d8 = ppuVar6;
  if (*(long *)(param_1 + 0x28) != 0) {
    do {
      func_0x000107c329a8();
    } while (extraout_w10 != 0);
  }
  func_0x000107c329e8();
  func_0x0001086f26ec();
  func_0x000107c28150();
  func_0x000107c329e4();
  func_0x000107c329d4();
  lVar4 = *(long *)(unaff_x22 + 0x70);
  uStack_90 = 0x1086f2af4;
  ppuStack_88 = &PTR_FUN_110a66cc0;
  uVar1 = 0x48;
  __Znwm();
  func_0x000107c329a4();
  func_0x0001086f26ec();
  uStack_80 = uVar1;
  func_0x000107c28154(unaff_x22 + 0x48,&uStack_90);
  func_0x000107c329ac(ppuStack_88);
  func_0x000107c329c8();
  if (lVar4 == 0) {
    func_0x000107c329b8();
    uStack_90 = uVar5;
    ppuStack_88 = ppuVar6;
    if (extraout_x8 != 0) {
      do {
        func_0x000107c329a8();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c329dc();
    (*extraout_x8_00)();
    func_0x000107c27e74(&uStack_90);
  }
  FUN_1086f1b48();
  func_0x000107c32990();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c27e74(&uStack_90);
    FUN_1086f1b48();
    func_0x0001086f2e08();
    func_0x000107c279dc((undefined1 *)((long)puVar3 + 0x18));
    func_0x00010054ffe4();
    if (puVar3 != (undefined8 *)0x0) {
      func_0x0001000df548();
    }
    return (undefined8 *)(undefined1 *)puVar2;
  }
  return puVar2;
}



/* Entry: 1086f1b48; end: 1086f1b6f;  */

undefined8 FUN_1086f1b48(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c279dc(param_1 + 0x18);
  func_0x00010054ffe4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1086f1b70; end: 1086f1c5f;  */

undefined1 * FUN_1086f1b70(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined1 *unaff_x19;
  long unaff_x22;
  long lVar2;
  undefined1 auStack_4d0 [1168];
  undefined8 uStack_40;
  undefined **ppuStack_38;
  
  func_0x0001086f2e18();
  puVar1 = auStack_4d0;
  func_0x000107c32994();
  func_0x0001086f2dec();
  if (extraout_x8 != 0) {
    do {
      func_0x000107c329a8();
    } while (extraout_w10 != 0);
  }
  func_0x000107c329e8();
  func_0x000108687808();
  func_0x000107c28150();
  func_0x000107c329e4();
  func_0x000107c329d4();
  lVar2 = *(long *)(unaff_x22 + 0x70);
  uStack_40 = 0x1086f2b34;
  ppuStack_38 = &PTR_FUN_110a66cd8;
  __Znwm(0x488);
  func_0x000107c329a0();
  func_0x000108687808();
  func_0x000107c32a04();
  func_0x000107c329bc();
  func_0x000107c32998();
  func_0x000107c329c8();
  if (lVar2 == 0) {
    func_0x000107c329b4();
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c329a8();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c329dc();
    func_0x000107c329f0();
    func_0x000107c329d0();
  }
  FUN_1086f1c60(auStack_4d0);
  func_0x000107c32990();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001086f2de0();
    FUN_1086f1c60(auStack_4d0);
    func_0x0001086f2e08();
    func_0x000107c329e0();
    func_0x000108684fe8();
    puVar1 = unaff_x19;
    func_0x000107c3221c();
    if (puVar1 != (undefined1 *)0x0) {
      func_0x000107c278a0();
    }
    return unaff_x19;
  }
  return puVar1;
}



/* Entry: 1086f1c60; end: 1086f1c7f;  */

long FUN_1086f1c60(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107c329e0();
  func_0x000108684fe8();
  lVar1 = unaff_x19;
  func_0x000107c3221c();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 1086f1c80; end: 1086f1d6f;  */

undefined1 * FUN_1086f1c80(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined1 *unaff_x19;
  long unaff_x22;
  long lVar2;
  undefined1 auStack_480 [1088];
  undefined8 uStack_40;
  undefined **ppuStack_38;
  
  func_0x0001086f2e18();
  puVar1 = auStack_480;
  func_0x000107c32994();
  func_0x0001086f2dec();
  if (extraout_x8 != 0) {
    do {
      func_0x000107c329a8();
    } while (extraout_w10 != 0);
  }
  func_0x000107c329e8();
  func_0x000107c27b74();
  func_0x000107c28150();
  func_0x000107c329e4();
  func_0x000107c329d4();
  lVar2 = *(long *)(unaff_x22 + 0x70);
  uStack_40 = 0x1086f2b78;
  ppuStack_38 = &PTR_FUN_110a66cf0;
  __Znwm(0x438);
  func_0x000107c329a0();
  func_0x000107c27b74();
  func_0x000107c32a04();
  func_0x000107c329bc();
  func_0x000107c32998();
  func_0x000107c329c8();
  if (lVar2 == 0) {
    func_0x000107c329b4();
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c329a8();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c329dc();
    func_0x000107c329f0();
    func_0x000107c329d0();
  }
  FUN_1086f1d70(auStack_480);
  func_0x000107c32990();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001086f2de0();
    FUN_1086f1d70(auStack_480);
    func_0x0001086f2e08();
    func_0x000107c329e0();
    func_0x000107c27a60();
    puVar1 = unaff_x19;
    func_0x000107c3221c();
    if (puVar1 != (undefined1 *)0x0) {
      func_0x000107c278a0();
    }
    return unaff_x19;
  }
  return puVar1;
}



/* Entry: 1086f1d70; end: 1086f1d8f;  */

long FUN_1086f1d70(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107c329e0();
  func_0x000107c27a60();
  lVar1 = unaff_x19;
  func_0x000107c3221c();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 1086f1d90; end: 1086f1e7f;  */

undefined1 * FUN_1086f1d90(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined1 *unaff_x19;
  long unaff_x22;
  long lVar2;
  undefined1 auStack_410 [976];
  undefined8 uStack_40;
  undefined **ppuStack_38;
  
  func_0x0001086f2e18();
  puVar1 = auStack_410;
  func_0x000107c32994();
  func_0x0001086f2dec();
  if (extraout_x8 != 0) {
    do {
      func_0x000107c329a8();
    } while (extraout_w10 != 0);
  }
  func_0x000107c329e8();
  func_0x0001086f2744();
  func_0x000107c28150();
  func_0x000107c329e4();
  func_0x000107c329d4();
  lVar2 = *(long *)(unaff_x22 + 0x70);
  uStack_40 = 0x1086f2bb0;
  ppuStack_38 = &PTR_FUN_110a66d08;
  __Znwm(0x3c8);
  func_0x000107c329a0();
  func_0x0001086f2744();
  func_0x000107c32a04();
  func_0x000107c329bc();
  func_0x000107c32998();
  func_0x000107c329c8();
  if (lVar2 == 0) {
    func_0x000107c329b4();
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c329a8();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c329dc();
    func_0x000107c329f0();
    func_0x000107c329d0();
  }
  FUN_1086f1e80(auStack_410);
  func_0x000107c32990();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001086f2de0();
    FUN_1086f1e80(auStack_410);
    func_0x0001086f2e08();
    func_0x000107c329e0();
    func_0x0001086858b0();
    puVar1 = unaff_x19;
    func_0x000107c3221c();
    if (puVar1 != (undefined1 *)0x0) {
      func_0x000107c278a0();
    }
    return unaff_x19;
  }
  return puVar1;
}



/* Entry: 1086f1e80; end: 1086f1e9f;  */

long FUN_1086f1e80(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107c329e0();
  func_0x0001086858b0();
  lVar1 = unaff_x19;
  func_0x000107c3221c();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 1086f1ea0; end: 1086f1f8f;  */

undefined1 * FUN_1086f1ea0(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined1 *unaff_x19;
  long unaff_x22;
  long lVar2;
  undefined1 auStack_660 [1568];
  undefined8 uStack_40;
  undefined **ppuStack_38;
  
  func_0x0001086f2e18();
  puVar1 = auStack_660;
  func_0x000107c32994();
  func_0x0001086f2dec();
  if (extraout_x8 != 0) {
    do {
      func_0x000107c329a8();
    } while (extraout_w10 != 0);
  }
  func_0x000107c329e8();
  func_0x0001086f27a0();
  func_0x000107c28150();
  func_0x000107c329e4();
  func_0x000107c329d4();
  lVar2 = *(long *)(unaff_x22 + 0x70);
  uStack_40 = 0x1086f2be8;
  ppuStack_38 = &PTR_FUN_110a66d20;
  __Znwm(0x620);
  func_0x000107c329a0();
  func_0x0001086f27a0();
  func_0x000107c32a04();
  func_0x000107c329bc();
  func_0x000107c32998();
  func_0x000107c329c8();
  if (lVar2 == 0) {
    func_0x000107c329b4();
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c329a8();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c329dc();
    func_0x000107c329f0();
    func_0x000107c329d0();
  }
  FUN_1086f1f90(auStack_660);
  func_0x000107c32990();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001086f2de0();
    FUN_1086f1f90(auStack_660);
    func_0x0001086f2e08();
    func_0x000107c329e0();
    func_0x000108686860();
    puVar1 = unaff_x19;
    func_0x000107c3221c();
    if (puVar1 != (undefined1 *)0x0) {
      func_0x000107c278a0();
    }
    return unaff_x19;
  }
  return puVar1;
}



/* Entry: 1086f1f90; end: 1086f1faf;  */

long FUN_1086f1f90(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107c329e0();
  func_0x000108686860();
  lVar1 = unaff_x19;
  func_0x000107c3221c();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 1086f1fb0; end: 1086f20ab;  */

undefined1 * FUN_1086f1fb0(undefined8 param_1,long *param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  long lVar3;
  undefined **in_register_00005008;
  undefined1 auStack_b0 [48];
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_48;
  
  puVar2 = auStack_b0;
  func_0x000107c329b0();
  lVar3 = *param_2;
  uStack_48 = extraout_x8;
  func_0x0001086f2dec();
  if (extraout_x8_00 != 0) {
    do {
      func_0x000107c329a8();
    } while (extraout_w10 != 0);
  }
  func_0x0001008531fc();
  func_0x000107c28150();
  lVar3 = *(long *)(lVar3 + 0x10);
  func_0x000100853218();
  lVar3 = *(long *)(lVar3 + 0x70);
  uStack_80 = 0x1086f2c20;
  ppuStack_78 = &PTR_FUN_110a66d38;
  __Znwm(0x28);
  func_0x000100853220();
  func_0x000100853250();
  func_0x000100853260();
  func_0x000100853290();
  if (lVar3 == 0) {
    func_0x000100853298();
    uStack_80 = param_1;
    ppuStack_78 = in_register_00005008;
    if (extraout_x8_01 != 0) {
      do {
        func_0x000107c329a8();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c329dc();
    (*extraout_x8_02)();
    func_0x0001008532a8();
  }
  FUN_1086f20ac();
  func_0x000107c3299c(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001008532a8();
    FUN_1086f20ac(auStack_b0);
    func_0x0001086f2e08();
    func_0x000107c329e0();
    func_0x000107c27914();
    puVar1 = puVar2;
    func_0x000107c3221c();
    if (puVar1 != (undefined1 *)0x0) {
      func_0x000107c278a0();
    }
    return puVar2;
  }
  return puVar2;
}



/* Entry: 1086f20ac; end: 1086f20cb;  */

long FUN_1086f20ac(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107c329e0();
  func_0x000107c27914();
  lVar1 = unaff_x19;
  func_0x000107c3221c();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 1086f20cc; end: 1086f21bb;  */

undefined1 * FUN_1086f20cc(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined1 *unaff_x19;
  long unaff_x22;
  long lVar2;
  undefined1 auStack_480 [1088];
  undefined8 uStack_40;
  undefined **ppuStack_38;
  
  func_0x0001086f2e18();
  puVar1 = auStack_480;
  func_0x000107c32994();
  func_0x0001086f2dec();
  if (extraout_x8 != 0) {
    do {
      func_0x000107c329a8();
    } while (extraout_w10 != 0);
  }
  func_0x000107c329e8();
  func_0x000107c27b74();
  func_0x000107c28150();
  func_0x000107c329e4();
  func_0x000107c329d4();
  lVar2 = *(long *)(unaff_x22 + 0x70);
  uStack_40 = 0x1086f2c58;
  ppuStack_38 = &PTR_FUN_110a66d50;
  __Znwm(0x438);
  func_0x000107c329a0();
  func_0x000107c27b74();
  func_0x000107c32a04();
  func_0x000107c329bc();
  func_0x000107c32998();
  func_0x000107c329c8();
  if (lVar2 == 0) {
    func_0x000107c329b4();
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c329a8();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c329dc();
    func_0x000107c329f0();
    func_0x000107c329d0();
  }
  FUN_1086f21bc(auStack_480);
  func_0x000107c32990();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001086f2de0();
    FUN_1086f21bc(auStack_480);
    func_0x0001086f2e08();
    func_0x000107c329e0();
    func_0x000107c27a60();
    puVar1 = unaff_x19;
    func_0x000107c3221c();
    if (puVar1 != (undefined1 *)0x0) {
      func_0x000107c278a0();
    }
    return unaff_x19;
  }
  return puVar1;
}



/* Entry: 1086f21bc; end: 1086f21db;  */

long FUN_1086f21bc(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107c329e0();
  func_0x000107c27a60();
  lVar1 = unaff_x19;
  func_0x000107c3221c();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 1086f21dc; end: 1086f22f3;  */

undefined8 * FUN_1086f21dc(long param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x22;
  long lVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined8 uStack_d0;
  undefined **ppuStack_c8;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  
  puVar3 = &uStack_d0;
  func_0x000107c32994();
  ppuVar6 = *(undefined ***)(param_1 + 0x38);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uStack_d0 = uVar5;
  ppuStack_c8 = ppuVar6;
  if (*(long *)(param_1 + 0x38) != 0) {
    do {
      func_0x000107c329a8();
    } while (extraout_w10 != 0);
  }
  func_0x000107c329e8();
  FUN_108687974();
  func_0x000107c28150();
  func_0x000107c329e4();
  func_0x000107c329d4();
  lVar4 = *(long *)(unaff_x22 + 0x70);
  uStack_90 = 0x1086f2c90;
  ppuStack_88 = &PTR_FUN_110a66d68;
  uVar2 = 0x40;
  __Znwm();
  func_0x000107c329a4();
  FUN_108687974();
  uStack_80 = uVar2;
  func_0x000107c32a1c();
  func_0x000107c329ac(ppuStack_88);
  func_0x000107c329c8();
  if (lVar4 == 0) {
    func_0x000107c329b8();
    uStack_90 = uVar5;
    ppuStack_88 = ppuVar6;
    if (extraout_x8 != 0) {
      do {
        func_0x000107c329a8();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c329dc();
    (*extraout_x8_00)();
    func_0x000107c32a08();
  }
  FUN_1086f22f4();
  func_0x000107c32990();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c32a08();
    FUN_1086f22f4(&uStack_d0);
    func_0x0001086f2e08();
    func_0x000107c329e0();
    FUN_10868713c();
    puVar1 = (undefined1 *)puVar3;
    func_0x0001005528ec();
    if (puVar1 != (undefined1 *)0x0) {
      func_0x0001000df548();
    }
    return (undefined8 *)(undefined1 *)puVar3;
  }
  return puVar3;
}



/* Entry: 1086f22f4; end: 1086f2317;  */

long FUN_1086f22f4(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107c329e0();
  FUN_10868713c();
  lVar1 = unaff_x19;
  func_0x0001005528ec();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1086f2318; end: 1086f2453;  */

undefined8 * FUN_1086f2318(long param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x22;
  long lVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined8 uStack_110;
  undefined **ppuStack_108;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  
  puVar3 = &uStack_110;
  func_0x000107c32994();
  ppuVar6 = *(undefined ***)(param_1 + 0x38);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uStack_110 = uVar5;
  ppuStack_108 = ppuVar6;
  if (*(long *)(param_1 + 0x38) != 0) {
    do {
      func_0x000107c329a8();
    } while (extraout_w10 != 0);
  }
  func_0x000107c329e8();
  func_0x0001086f29f4();
  func_0x000107c28150();
  func_0x000107c329e4();
  func_0x000107c329d4();
  lVar4 = *(long *)(unaff_x22 + 0x70);
  uStack_90 = 0x1086f2cb8;
  ppuStack_88 = &PTR_FUN_110a66db0;
  uVar2 = 0x78;
  __Znwm();
  func_0x000107c329a4();
  func_0x0001086f29f4();
  uStack_80 = uVar2;
  func_0x000107c28154(unaff_x22 + 0x48,&uStack_90);
  func_0x000107c329ac(ppuStack_88);
  func_0x000107c329c8();
  if (lVar4 == 0) {
    func_0x000107c329b8();
    uStack_90 = uVar5;
    ppuStack_88 = ppuVar6;
    if (extraout_x8 != 0) {
      do {
        func_0x000107c329a8();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c329dc();
    (*extraout_x8_00)();
    func_0x000107c27e74(&uStack_90);
  }
  FUN_1086f2454();
  func_0x000107c32990();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c27e74(&uStack_90);
    FUN_1086f2454(&uStack_110);
    func_0x0001086f2e08();
    func_0x000107c329e0();
    func_0x0001086871e4();
    puVar1 = (undefined1 *)puVar3;
    func_0x0001005528ec();
    if (puVar1 != (undefined1 *)0x0) {
      func_0x0001000df548();
    }
    return (undefined8 *)(undefined1 *)puVar3;
  }
  return puVar3;
}



/* Entry: 1086f2454; end: 1086f2477;  */

long FUN_1086f2454(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107c329e0();
  func_0x0001086871e4();
  lVar1 = unaff_x19;
  func_0x0001005528ec();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1086f2478; end: 1086f2567;  */

undefined1 * FUN_1086f2478(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined1 *unaff_x19;
  long unaff_x22;
  long lVar2;
  undefined1 auStack_490 [1104];
  undefined8 uStack_40;
  undefined **ppuStack_38;
  
  func_0x0001086f2e18();
  puVar1 = auStack_490;
  func_0x000107c32994();
  func_0x0001086f2dec();
  if (extraout_x8 != 0) {
    do {
      func_0x000107c329a8();
    } while (extraout_w10 != 0);
  }
  func_0x000107c329e8();
  func_0x0001086f2a74();
  func_0x000107c28150();
  func_0x000107c329e4();
  func_0x000107c329d4();
  lVar2 = *(long *)(unaff_x22 + 0x70);
  uStack_40 = 0x1086f2cfc;
  ppuStack_38 = &PTR_FUN_110a66dc8;
  __Znwm(0x450);
  func_0x000107c329a0();
  func_0x0001086f2a74();
  func_0x000107c32a04();
  func_0x000107c329bc();
  func_0x000107c32998();
  func_0x000107c329c8();
  if (lVar2 == 0) {
    func_0x000107c329b4();
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c329a8();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c329dc();
    func_0x000107c329f0();
    func_0x000107c329d0();
  }
  FUN_1086f2568(auStack_490);
  func_0x000107c32990();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001086f2de0();
    FUN_1086f2568(auStack_490);
    func_0x0001086f2e08();
    func_0x000107c329e0();
    func_0x00010868501c();
    puVar1 = unaff_x19;
    func_0x000107c3221c();
    if (puVar1 != (undefined1 *)0x0) {
      func_0x000107c278a0();
    }
    return unaff_x19;
  }
  return puVar1;
}



/* Entry: 1086f2568; end: 1086f2587;  */

long FUN_1086f2568(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107c329e0();
  func_0x00010868501c();
  lVar1 = unaff_x19;
  func_0x000107c3221c();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 1086f2588; end: 1086f26cb;  */

code ** FUN_1086f2588(long *param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  code **ppcVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined **ppuVar6;
  code *pcStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined **ppuStack_78;
  code *pcStack_70;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  ppcVar2 = &pcStack_a0;
  func_0x000107c329b0();
  lVar3 = *param_1;
  uStack_48 = extraout_x8;
  func_0x0001086f2dec();
  if (extraout_x8_00 != 0) {
    do {
      func_0x000107c329a8();
    } while (extraout_w10 != 0);
  }
  uStack_88 = param_2[1];
  uStack_90 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000107c329a8();
    } while (extraout_w10_00 != 0);
  }
  func_0x000107c28150();
  lVar3 = *(long *)(lVar3 + 0x10);
  func_0x000100853218();
  ppuVar6 = ppuStack_98;
  pcVar5 = pcStack_a0;
  lVar4 = *(long *)(lVar3 + 0x70);
  pcStack_80 = FUN_1086f2d38;
  ppuStack_78 = &PTR_FUN_110a66de0;
  pcStack_a0 = (code *)0x0;
  ppuStack_98 = (undefined **)0x0;
  ppuStack_68 = ppuVar6;
  pcStack_70 = pcVar5;
  uStack_58 = uStack_88;
  uStack_60 = uStack_90;
  uStack_90 = 0;
  uStack_88 = 0;
  plStack_50 = param_1;
  func_0x000107c28154(lVar3 + 0x48,&pcStack_80);
  func_0x0001086f2dfc(ppuStack_78);
  func_0x000100853290();
  if (lVar4 == 0) {
    func_0x000100853298();
    pcStack_80 = pcVar5;
    ppuStack_78 = ppuVar6;
    if (extraout_x8_01 != 0) {
      do {
        func_0x000107c329a8();
      } while (extraout_w10_01 != 0);
    }
    func_0x000107c329dc();
    (*extraout_x8_02)();
    func_0x000107c27e74(&pcStack_80);
  }
  FUN_1086f26cc();
  func_0x000107c3299c(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c27e74(&pcStack_80);
    FUN_1086f26cc(&pcStack_a0);
    func_0x0001086f2e08();
    func_0x000107c329e0();
    func_0x000107c27a64();
    puVar1 = (undefined1 *)ppcVar2;
    func_0x000107c3221c();
    if (puVar1 != (undefined1 *)0x0) {
      func_0x000107c278a0();
    }
    return (code **)(undefined1 *)ppcVar2;
  }
  return ppcVar2;
}



/* Entry: 1086f26cc; end: 1086f2abb;  */

long FUN_1086f26cc(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107c329e0();
  func_0x000107c27a64();
  lVar1 = unaff_x19;
  func_0x000107c3221c();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 1086f2abc; end: 1086f2abf;  */

void FUN_1086f2abc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a66c68;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1086f2ac0; end: 1086f2ad3;  */

void FUN_1086f2ac0(void)

{
  func_0x0001086f2ae4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086f2ad4; end: 1086f2b0f;  */

void FUN_1086f2ad4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001086f2adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1086f2b10; end: 1086f2b2f;  */

void FUN_1086f2b10(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1086f1b48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086f2b30; end: 1086f2b53;  */

void FUN_1086f2b30(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1086f2b54; end: 1086f2b73;  */

void FUN_1086f2b54(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1086f1c60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086f2b74; end: 1086f2b8b;  */

void FUN_1086f2b74(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1086f2b8c; end: 1086f2bab;  */

void FUN_1086f2b8c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1086f1d70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086f2bac; end: 1086f2bc3;  */

void FUN_1086f2bac(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1086f2bc4; end: 1086f2be3;  */

void FUN_1086f2bc4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1086f1e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086f2be4; end: 1086f2bfb;  */

void FUN_1086f2be4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1086f2bfc; end: 1086f2c1b;  */

void FUN_1086f2bfc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1086f1f90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086f2c1c; end: 1086f2c33;  */

void FUN_1086f2c1c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1086f2c34; end: 1086f2c53;  */

void FUN_1086f2c34(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1086f20ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086f2c54; end: 1086f2c6b;  */

void FUN_1086f2c54(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1086f2c6c; end: 1086f2c8b;  */

void FUN_1086f2c6c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1086f21bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086f2c8c; end: 1086f2c93;  */

void FUN_1086f2c8c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1086f2c94; end: 1086f2cb3;  */

void FUN_1086f2c94(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1086f22f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086f2cb4; end: 1086f2cd7;  */

void FUN_1086f2cb4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1086f2cd8; end: 1086f2cf7;  */

void FUN_1086f2cd8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1086f2454();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086f2cf8; end: 1086f2d13;  */

void FUN_1086f2cf8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1086f2d14; end: 1086f2d33;  */

void FUN_1086f2d14(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1086f2568();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086f2d34; end: 1086f2d37;  */

void FUN_1086f2d34(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1086f2d38; end: 1086f2d9b;  */

void FUN_1086f2d38(long param_1)

{
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)(param_1 + 0x28);
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    do {
      func_0x000107c329a8();
    } while (extraout_w10 != 0);
  }
  func_0x00010880a8fc();
  func_0x000107c27a64(&uStack_30);
  return;
}



/* Entry: 1086f2d9c; end: 1086f2e2b;  */

long FUN_1086f2d9c(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107c329e0(param_1 + 8);
  func_0x000107c27a64();
  lVar1 = unaff_x19;
  func_0x000107c3221c();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 1086f2e2c; end: 1086f2ea3;  */

bool FUN_1086f2e2c(ulong param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001086f3cd0();
  func_0x000107c2a620();
  if ((((param_1 & 1) == 0) && (*(char *)(unaff_x20 + 0x29) == *(char *)(unaff_x19 + 0x29))) &&
     (*(char *)(unaff_x20 + 0x2a) == *(char *)(unaff_x19 + 0x2a))) {
    FUN_1086f2ea4();
    lVar2 = param_2;
    FUN_1086f2ea4();
    bVar1 = unaff_x20 <= unaff_x19 && lVar2 <= param_2;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 1086f2ea4; end: 1086f2f43;  */

undefined1  [16] FUN_1086f2ea4(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  uVar3 = *(uint *)(param_1 + 0x20);
  uVar4 = (ulong)uVar3;
  uVar5 = *(uint *)(param_1 + 0x24);
  uVar6 = (ulong)uVar5;
  auVar11._8_8_ = *(long *)(param_1 + 0x18);
  if (0 < (int)uVar3 && 0 < (int)uVar5) {
    lVar7 = auVar11._8_8_ - uVar4;
    if (lVar7 == 0 || auVar11._8_8_ < (long)uVar4) {
      lVar7 = 0;
    }
    lVar2 = 0x7fffffffffffffff;
    if (auVar11._8_8_ <= (long)(uVar6 ^ 0x7fffffffffffffff)) {
      lVar2 = auVar11._8_8_ + uVar6;
    }
    auVar9._8_8_ = lVar2;
    auVar9._0_8_ = lVar7;
    return auVar9;
  }
  if ((int)uVar3 < 1) {
    if (0 < (int)uVar5) {
      lVar7 = 0x7fffffffffffffff;
      if (auVar11._8_8_ <= (long)(uVar6 ^ 0x7fffffffffffffff)) {
        lVar7 = auVar11._8_8_ + uVar6;
      }
      auVar10._8_8_ = lVar7;
      auVar10._0_8_ =
           auVar11._8_8_ +
           (ulong)((uint)(auVar11._8_8_ != 0x7fffffffffffffff) &
                  (*(byte *)(param_1 + 0x28) ^ 0xffffffff));
      return auVar10;
    }
    auVar11._0_8_ = auVar11._8_8_;
    return auVar11;
  }
  lVar7 = auVar11._8_8_ - uVar4;
  if (lVar7 == 0 || auVar11._8_8_ < (long)uVar4) {
    lVar7 = 0;
  }
  lVar2 = auVar11._8_8_;
  if (auVar11._8_8_ < 2) {
    lVar2 = 1;
  }
  lVar1 = auVar11._8_8_;
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    lVar1 = lVar2 + -1;
  }
  auVar8._8_8_ = lVar1;
  auVar8._0_8_ = lVar7;
  return auVar8;
}



/* Entry: 1086f2f44; end: 1086f304b;  */

void FUN_1086f2f44(undefined1 *param_1,ulong *param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auStack_b8 [48];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [48];
  
  FUN_1086f321c(auStack_70);
  uVar3 = *param_2;
  uVar1 = param_2[1];
  while ((uVar4 = uVar1, uVar3 != uVar1 &&
         (uVar2 = uVar3, FUN_1086f2e2c(uVar3,auStack_70), uVar4 = uVar3, (uVar2 & 1) == 0))) {
    uVar3 = uVar3 + 0x48;
  }
  if (uVar4 == param_2[1]) {
    FUN_1086f321c(auStack_b8,auStack_70);
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    func_0x0001086f35d4(param_2,auStack_b8);
    func_0x0001086f397c(auStack_b8);
    FUN_1086f304c(param_2[1] - 0x18,param_3);
    FUN_1086f39a4(param_1,auStack_70);
  }
  else {
    FUN_1086f304c(uVar4 + 0x30,param_3);
    *param_1 = 0;
    param_1[0x30] = 0;
  }
  func_0x000107c27914(auStack_70);
  return;
}



/* Entry: 1086f304c; end: 1086f3087;  */

long FUN_1086f304c(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x0001086f3248();
    lVar2 = uVar1 + 0x40;
  }
  else {
    lVar2 = param_1;
    FUN_1086f3270();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x40;
}



/* Entry: 1086f3088; end: 1086f315f;  */

void FUN_1086f3088(undefined8 *param_1,ulong *param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar4 = *param_2;
  uVar1 = param_2[1];
  while ((uVar3 = uVar1, uVar4 != uVar1 &&
         (uVar2 = uVar4, FUN_1086f39c0(uVar4,param_3), uVar3 = uVar4, (uVar2 & 1) == 0))) {
    uVar4 = uVar4 + 0x48;
  }
  if (uVar3 == param_2[1]) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    uStack_58 = *(undefined8 *)(uVar3 + 0x38);
    uStack_60 = *(undefined8 *)(uVar3 + 0x30);
    uStack_50 = *(undefined8 *)(uVar3 + 0x40);
    *(undefined8 *)(uVar3 + 0x38) = 0;
    *(undefined8 *)(uVar3 + 0x40) = 0;
    *(undefined8 *)(uVar3 + 0x30) = 0;
    FUN_1086f3160(param_2,uVar3);
    param_1[1] = uStack_58;
    *param_1 = uStack_60;
    param_1[2] = uStack_50;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    func_0x0001086f3c0c(&uStack_60);
  }
  return;
}



/* Entry: 1086f3160; end: 1086f3193;  */

void FUN_1086f3160(long param_1)

{
  long unaff_x19;
  
  func_0x0001086f3cd0();
  FUN_1086f3a80(unaff_x19 + 0x48,*(undefined8 *)(param_1 + 8));
  func_0x0001086f3a4c();
  return;
}



/* Entry: 1086f3194; end: 1086f321b;  */

ulong FUN_1086f3194(undefined8 param_1,long param_2)

{
  long extraout_x8;
  ulong extraout_x9;
  
  FUN_108848654(param_2);
  func_0x0001086f3cdc(0x9e3779b9);
  func_0x0001086f3cdc();
  func_0x0001086f3cdc();
  func_0x0001086f3cdc();
  return ((ulong)*(byte *)(param_2 + 0x2a) | extraout_x9 << 6) + (extraout_x9 >> 2) + extraout_x8 ^
         extraout_x9;
}



/* Entry: 1086f321c; end: 1086f326f;  */

void FUN_1086f321c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c27994();
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x27) = *(undefined4 *)(param_2 + 0x27);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}



/* Entry: 1086f3270; end: 1086f32ff;  */

long FUN_1086f3270(undefined8 param_1)

{
  long *unaff_x19;
  long lVar1;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  func_0x0001086f3d40();
  FUN_1086f335c();
  FUN_1086f33e0(auStack_48,param_1,unaff_x19[1] - *unaff_x19 >> 6,unaff_x19 + 2);
  FUN_1086f3300(lStack_38);
  lStack_38 = lStack_38 + 0x40;
  FUN_1086f339c();
  lVar1 = unaff_x19[1];
  func_0x0001086f356c(auStack_48);
  return lVar1;
}



/* Entry: 1086f3300; end: 1086f3327;  */

void FUN_1086f3300(long param_1,long param_2)

{
  undefined8 uVar1;
  
  FUN_1086f3328();
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  return;
}



/* Entry: 1086f3328; end: 1086f335b;  */

void FUN_1086f3328(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
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
  uVar2 = param_2[4];
  uVar1 = param_2[3];
  *(undefined4 *)((long)param_1 + 0x27) = *(undefined4 *)((long)param_2 + 0x27);
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  return;
}



/* Entry: 1086f335c; end: 1086f339b;  */

long * FUN_1086f335c(long *param_1,long *param_2)

{
  long *plVar1;
  
  if ((ulong)param_2 >> 0x3a == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 5);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7fffffffffffffbf < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0x3ffffffffffffff;
    }
    return plVar1;
  }
  FUN_1086f33d4();
  func_0x0001086f3cd0();
  plVar1 = param_1 + 2;
  FUN_1086f3468(plVar1,*param_1,param_1[1],param_2[1] + (*param_1 - param_1[1]));
  func_0x0001086f3c84();
  return plVar1;
}



/* Entry: 1086f339c; end: 1086f33d3;  */

void FUN_1086f339c(long *param_1,long param_2)

{
  func_0x0001086f3cd0();
  FUN_1086f3468(param_1 + 2,*param_1,param_1[1],*(long *)(param_2 + 8) + (*param_1 - param_1[1]));
  func_0x0001086f3c84();
  return;
}



/* Entry: 1086f33d4; end: 1086f33df;  */

long * FUN_1086f33d4(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  func_0x0001086f3d28();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001086f3428();
  }
  lVar1 = param_4 + param_3 * 0x40;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x40;
  return param_1;
}



/* Entry: 1086f33e0; end: 1086f344b;  */

long * FUN_1086f33e0(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001086f3428();
  }
  lVar1 = param_4 + param_3 * 0x40;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x40;
  return param_1;
}



/* Entry: 1086f344c; end: 1086f3467;  */

void FUN_1086f344c(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_70 [24];
  undefined1 uStack_58;
  long lStack_48;
  
  if (param_2 >> 0x3a == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 6);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001086f3cec();
  for (; unaff_x21 != unaff_x19; unaff_x21 = unaff_x21 + 0x40) {
    FUN_1086f3300(param_4,unaff_x21);
    param_4 = lStack_48 + 0x40;
    lStack_48 = param_4;
  }
  uStack_58 = 1;
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 0x40) {
    FUN_1086f34d8(unaff_x20);
  }
  func_0x0001086f3528(auStack_70);
  return;
}



/* Entry: 1086f3468; end: 1086f34d7;  */

void FUN_1086f3468(void)

{
  long in_x3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  long lStack_38;
  
  func_0x0001086f3cec();
  for (; unaff_x21 != unaff_x19; unaff_x21 = unaff_x21 + 0x40) {
    FUN_1086f3300(in_x3,unaff_x21);
    in_x3 = lStack_38 + 0x40;
    lStack_38 = in_x3;
  }
  uStack_48 = 1;
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 0x40) {
    FUN_1086f34d8(unaff_x20);
  }
  func_0x0001086f3528(auStack_60);
  return;
}



/* Entry: 1086f34d8; end: 1086f3597;  */

long FUN_1086f34d8(long param_1)

{
  long lStack_28;
  
  func_0x0001086f3500(param_1 + 0x30);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 1086f3598; end: 1086f359f;  */

void FUN_1086f3598(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001086f3cd0(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x40;
    FUN_1086f34d8();
  }
  return;
}



/* Entry: 1086f35a0; end: 1086f3637;  */

void FUN_1086f35a0(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001086f3cd0();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x40;
    FUN_1086f34d8();
  }
  return;
}



/* Entry: 1086f3638; end: 1086f36d3;  */

long FUN_1086f3638(undefined8 param_1)

{
  long *unaff_x19;
  long lVar1;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x0001086f3d40();
  FUN_1086f3710();
  FUN_1086f37c0(auStack_58,param_1,(unaff_x19[1] - *unaff_x19) / 0x48,unaff_x19 + 2);
  FUN_1086f36d4(lStack_48);
  lStack_48 = lStack_48 + 0x48;
  FUN_1086f3770();
  lVar1 = unaff_x19[1];
  func_0x0001086f3914(auStack_58);
  return lVar1;
}



/* Entry: 1086f36d4; end: 1086f370f;  */

void FUN_1086f36d4(long param_1,long param_2)

{
  undefined8 uVar1;
  
  FUN_1086f3328();
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  return;
}



/* Entry: 1086f3710; end: 1086f376f;  */

long * FUN_1086f3710(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if (param_2 < (long *)0x38e38e38e38e38f) {
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
  FUN_1086f37b4();
  func_0x0001086f3cd0();
  plVar2 = param_1 + 2;
  FUN_1086f3860(plVar2,*param_1,param_1[1],param_2[1] + ((param_1[1] - *param_1) / -0x48) * 0x48);
  func_0x0001086f3c84();
  return plVar2;
}



/* Entry: 1086f3770; end: 1086f37b3;  */

void FUN_1086f3770(long *param_1,long param_2)

{
  func_0x0001086f3cd0();
  FUN_1086f3860(param_1 + 2,*param_1,param_1[1],
                *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x48) * 0x48);
  func_0x0001086f3c84();
  return;
}



/* Entry: 1086f37b4; end: 1086f37bf;  */

long * FUN_1086f37b4(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  func_0x0001086f3d28();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001086f380c();
  }
  lVar1 = param_4 + param_3 * 0x48;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x48;
  return param_1;
}



/* Entry: 1086f37c0; end: 1086f382f;  */

long * FUN_1086f37c0(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001086f380c();
  }
  lVar1 = param_4 + param_3 * 0x48;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x48;
  return param_1;
}



/* Entry: 1086f3830; end: 1086f385f;  */

void FUN_1086f3830(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_70 [24];
  undefined1 uStack_58;
  long lStack_48;
  
  if (param_2 < 0x38e38e38e38e38f) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x48);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001086f3cec();
  for (; unaff_x21 != unaff_x19; unaff_x21 = unaff_x21 + 0x48) {
    FUN_1086f36d4(param_4,unaff_x21);
    param_4 = lStack_48 + 0x48;
    lStack_48 = param_4;
  }
  uStack_58 = 1;
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 0x48) {
    func_0x0001086f397c(unaff_x20);
  }
  FUN_1086f38d0(auStack_70);
  return;
}



/* Entry: 1086f3860; end: 1086f38cf;  */

void FUN_1086f3860(void)

{
  long in_x3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  long lStack_38;
  
  func_0x0001086f3cec();
  for (; unaff_x21 != unaff_x19; unaff_x21 = unaff_x21 + 0x48) {
    FUN_1086f36d4(in_x3,unaff_x21);
    in_x3 = lStack_38 + 0x48;
    lStack_38 = in_x3;
  }
  uStack_48 = 1;
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 0x48) {
    func_0x0001086f397c(unaff_x20);
  }
  FUN_1086f38d0(auStack_60);
  return;
}



/* Entry: 1086f38d0; end: 1086f393f;  */

long FUN_1086f38d0(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x48;
      func_0x0001086f397c();
    }
  }
  return param_1;
}



/* Entry: 1086f3940; end: 1086f3947;  */

void FUN_1086f3940(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001086f3cd0(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x48;
    func_0x0001086f397c();
  }
  return;
}



/* Entry: 1086f3948; end: 1086f39a3;  */

void FUN_1086f3948(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001086f3cd0();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x48;
    func_0x0001086f397c();
  }
  return;
}



/* Entry: 1086f39a4; end: 1086f39bf;  */

void FUN_1086f39a4(long param_1)

{
  FUN_1086f321c();
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 1086f39c0; end: 1086f3a7f;  */

void FUN_1086f39c0(void)

{
  func_0x0001086f3cd0();
  func_0x000107c28078();
  return;
}



/* Entry: 1086f3a80; end: 1086f3aab;  */

void FUN_1086f3a80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_1086f3aac(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 1086f3aac; end: 1086f3b07;  */

undefined1  [16] FUN_1086f3aac(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 0x48) {
    FUN_1086f3b08(lVar1,param_2);
    lVar1 = lVar1 + 0x48;
    param_4 = param_4 + 0x48;
  }
  auVar2._8_8_ = param_4;
  auVar2._0_8_ = param_3;
  return auVar2;
}



/* Entry: 1086f3b08; end: 1086f3bcf;  */

void FUN_1086f3b08(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001086f3cd0();
  func_0x0001086f3b34();
  func_0x0001086f3b64(unaff_x20 + 0x30,unaff_x19 + 0x30);
  return;
}



/* Entry: 1086f3bd0; end: 1086f3bd7;  */

void FUN_1086f3bd0(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001086f3cd0(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x40;
    FUN_1086f34d8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1086f3bd8; end: 1086f3c7b;  */

void FUN_1086f3bd8(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001086f3cd0();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x40;
    FUN_1086f34d8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1086f3c7c; end: 1086f3d57;  */

void FUN_1086f3c7c(void)

{
  return;
}



/* Entry: 1086f3d58; end: 1086f3d6b;  */

void FUN_1086f3d58(void)

{
  func_0x0001086f3d78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086f3d6c; end: 1086f3d87;  */

long FUN_1086f3d6c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x0001000df548();
  }
  return param_1 + 0x18;
}



/* Entry: 1086f3d88; end: 1086f3de3;  */

void FUN_1086f3d88(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x50) {
    uStack_50 = *(undefined8 *)(param_2 + 0x18);
    uStack_48 = (undefined4)*(undefined8 *)(param_2 + 0x20);
    uStack_3c = *(undefined8 *)(param_2 + 0x2c);
    uStack_44 = (undefined4)*(undefined8 *)(param_2 + 0x24);
    uStack_40 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x24) >> 0x20);
    FUN_1086e6818(lVar2,&uStack_50);
  }
  return;
}



/* Entry: 1086f3de4; end: 1086f3e4f;  */

undefined8 * FUN_1086f3de4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = 0;
  func_0x00010086a184(param_1 + 2,param_3);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  func_0x000100869f5c(param_1 + 6,param_2);
  return param_1;
}



/* Entry: 1086f3e50; end: 1086f3ee7;  */

void FUN_1086f3e50(long *param_1,long param_2)

{
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  if (*(int *)(param_2 + 0x30) == 0) {
    param_1[1] = param_1[1] + 1;
  }
  func_0x0001086e81c8(param_1 + 6);
  lStack_38 = param_1[6];
  lStack_30 = param_1[7];
  if ((lStack_30 - lStack_38) / 0x38 == *param_1) {
    lStack_28 = param_1[8];
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    func_0x00010086a66c(param_1 + 2,&lStack_38);
    func_0x00010086aa78(&lStack_38);
  }
  return;
}



/* Entry: 1086f3ee8; end: 1086f3f0f;  */

long FUN_1086f3ee8(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x50) & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x70);
    if (*(long *)(param_1 + 0x70) <= *(long *)(param_2 + 0x20)) {
      lVar2 = *(long *)(param_2 + 0x20);
    }
    *(long *)(param_1 + 0x70) = lVar2;
    lVar2 = param_1 + 0x58;
    uVar1 = *(ulong *)(param_1 + 0x60);
    if (uVar1 < *(ulong *)(param_1 + 0x68)) {
      func_0x0001086e72b0();
      lVar2 = uVar1 + 0x50;
    }
    else {
      FUN_1086e72d4();
    }
    *(long *)(param_1 + 0x60) = lVar2;
    return lVar2 + -0x50;
  }
  if (*(char *)(param_1 + 0x50) == '\x01') {
    FUN_1086e777c();
  }
  else {
    FUN_1086e8f1c();
  }
  return param_1;
}


