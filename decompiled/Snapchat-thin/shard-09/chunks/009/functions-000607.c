/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1072eefa4; end: 1072ef023;  */

uint FUN_1072eefa4(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  
  lVar4 = param_3;
  func_0x0001072f1b80();
  FUN_1072ef024();
  uVar2 = unaff_x19;
  FUN_1072ef024();
  if (lVar4 == 0) {
    if (param_3 == 0) {
LAB_1072ef004:
      func_0x0001072f1b8c();
      func_0x000104c342bc();
      func_0x000104c2fcd4(uVar2);
      func_0x000104c2fcf0(unaff_x19);
      uVar3 = unaff_x20;
      func_0x000104c2fcd4();
      func_0x000104c2fcf0(unaff_x20);
      func_0x00010006725c(uVar3,unaff_x20,uVar2,unaff_x19);
      return (uint)uVar3 >> 7 & 1;
    }
    uVar1 = 0;
  }
  else if (param_3 == 0) {
    uVar1 = 1;
  }
  else {
    if (*(uint *)(lVar4 + 0x48) == *(uint *)(param_3 + 0x48)) goto LAB_1072ef004;
    uVar1 = (uint)(*(uint *)(lVar4 + 0x48) < *(uint *)(param_3 + 0x48));
  }
  return uVar1;
}



/* Entry: 1072ef024; end: 1072ef0c3;  */

long FUN_1072ef024(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  ulong uVar1;
  ulong extraout_x8_00;
  ulong unaff_x20;
  long *unaff_x21;
  ulong uVar2;
  ulong unaff_x23;
  ulong unaff_x24;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 != 0) && (func_0x0001072f2318(), extraout_x8 != 0)) {
    func_0x0001072f1ef0();
    func_0x0001072f1ad4();
    if ((bool)in_ZR) {
      unaff_x24 = unaff_x20 & unaff_x23;
    }
    else {
      func_0x0001072f21e8();
      if ((bool)in_CY) {
        func_0x0001072f220c();
      }
    }
    func_0x0001072f2200();
    if (unaff_x21 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        unaff_x21 = (long *)*unaff_x21;
        if (unaff_x21 == (long *)0x0) {
          return 0;
        }
        uVar1 = unaff_x21[1];
        if (unaff_x20 != uVar1) break;
        func_0x0001072f1924();
        if ((int)param_1 != 0) {
          return (long)unaff_x21;
        }
      }
      if ((uVar2 & unaff_x23) == 0) {
        uVar1 = uVar1 & unaff_x23;
      }
      else if (uVar2 <= uVar1) {
        func_0x0001072f21d0();
        uVar1 = extraout_x8_00;
      }
    } while (uVar1 == unaff_x24);
  }
  return 0;
}



/* Entry: 1072ef0c4; end: 1072ef12b;  */

undefined8 * FUN_1072ef0c4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  code *pcVar9;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  undefined8 *puVar10;
  undefined8 *extraout_x8_02;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *puVar11;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  ulong uVar12;
  ulong uVar13;
  undefined8 auStack_4f0 [74];
  undefined8 uStack_2a0;
  undefined8 auStack_288 [9];
  undefined1 *puStack_240;
  code *pcStack_238;
  undefined8 uStack_38;
  
  func_0x0001072f1b80();
  func_0x0001072f1810();
  puVar10 = unaff_x20;
  uStack_38 = extraout_x8;
  func_0x0001072647dc(auStack_288);
  func_0x0001072f1b8c();
  FUN_1072edc2c();
  func_0x0001072f2ab4();
  FUN_1072edc2c();
  puVar11 = auStack_288;
  FUN_107264bb8();
  func_0x0001072f1710(uStack_38);
  if ((bool)in_ZR) {
    return puVar11;
  }
  ___stack_chk_fail();
  pcVar9 = FUN_1072ef12c;
  func_0x0001072f29a0();
  puVar7 = auStack_4f0;
  puVar8 = auStack_4f0;
  puStack_240 = &stack0xfffffffffffffff0;
  pcStack_238 = pcVar9;
  func_0x0001072f1810();
  uVar3 = 1 < param_3;
  uVar4 = param_3 - 2 == 0;
  puVar6 = puVar11;
  uStack_2a0 = extraout_x8_00;
  if (1 < (long)param_3) {
    uVar2 = ((long)param_4 - (long)puVar11) / 0x250;
    uVar12 = param_3 - 2 >> 1;
    uVar3 = uVar2 <= uVar12;
    uVar4 = uVar12 == uVar2;
    unaff_x21 = puVar11;
    unaff_x23 = param_4;
    if ((long)uVar2 <= (long)uVar12) {
      uVar1 = uVar2 << 1 | 1;
      puVar6 = puVar11 + uVar1 * 0x4a;
      uVar2 = uVar2 * 2 + 2;
      uVar3 = param_3 <= uVar2;
      uVar4 = uVar2 == param_3;
      puVar5 = puVar6;
      uVar13 = uVar1;
      if ((long)uVar2 < (long)param_3) {
        unaff_x24 = puVar6 + 0x4a;
        FUN_1072eefa4(puVar6,unaff_x24,*puVar10);
        uVar4 = (int)puVar5 == 0;
        uVar3 = true;
        puVar5 = unaff_x24;
        uVar13 = uVar2;
        if ((bool)uVar4) {
          puVar5 = puVar6;
          uVar13 = uVar1;
        }
      }
      puVar6 = puVar5;
      func_0x0001072f1e54();
      unaff_x20 = puVar10;
      if (((ulong)puVar6 & 1) == 0) {
        func_0x0001072647dc(auStack_4f0,param_4);
        do {
          unaff_x24 = puVar5;
          func_0x0001072f2070();
          FUN_1072edc2c();
          uVar3 = uVar13 <= uVar12;
          uVar4 = uVar12 == uVar13;
          unaff_x23 = param_4;
          if ((long)uVar12 < (long)uVar13) break;
          uVar1 = uVar13 << 1 | 1;
          puVar10 = puVar11 + uVar1 * 0x4a;
          uVar2 = uVar13 * 2 + 2;
          uVar3 = param_3 <= uVar2;
          uVar4 = uVar2 == param_3;
          puVar5 = puVar10;
          uVar13 = uVar1;
          if ((long)uVar2 < (long)param_3) {
            puVar7 = puVar10;
            func_0x0001072f1e54();
            uVar4 = (int)puVar7 == 0;
            uVar3 = true;
            puVar5 = puVar10 + 0x4a;
            uVar13 = uVar2;
            if ((bool)uVar4) {
              puVar5 = puVar10;
              uVar13 = uVar1;
            }
          }
          func_0x0001072f23ac();
          param_4 = unaff_x24;
          unaff_x23 = unaff_x24;
        } while ((int)puVar7 == 0);
        FUN_1072edc2c(unaff_x24,auStack_4f0);
        FUN_107264bb8();
        puVar6 = puVar8;
      }
    }
  }
  func_0x0001072f1710(uStack_2a0);
  if ((bool)uVar4) {
    return puVar6;
  }
  ___stack_chk_fail();
  func_0x0001072f1e30();
  FUN_107264bb8();
  func_0x0001072f1abc();
  puVar11 = (undefined8 *)puVar6[1];
  if ((puVar11 != (undefined8 *)0x0) && (func_0x0001072f2318(), extraout_x8_01 != 0)) {
    func_0x0001072f1ef0();
    func_0x0001072f1ad4();
    if ((bool)uVar4) {
      unaff_x24 = (undefined8 *)((ulong)unaff_x20 & (ulong)unaff_x23);
    }
    else {
      func_0x0001072f21e8();
      if ((bool)uVar3) {
        func_0x0001072f220c();
      }
    }
    func_0x0001072f2200();
    if (unaff_x21 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    do {
      while( true ) {
        unaff_x21 = (undefined8 *)*unaff_x21;
        if (unaff_x21 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        puVar10 = (undefined8 *)unaff_x21[1];
        if (unaff_x20 != puVar10) break;
        func_0x0001072f1924();
        if ((int)puVar6 != 0) {
          return unaff_x21;
        }
      }
      if (((ulong)puVar11 & (ulong)unaff_x23) == 0) {
        puVar10 = (undefined8 *)((ulong)puVar10 & (ulong)unaff_x23);
      }
      else if (puVar11 <= puVar10) {
        func_0x0001072f21d0();
        puVar10 = extraout_x8_02;
      }
    } while (puVar10 == unaff_x24);
  }
  return (undefined8 *)0x0;
}



/* Entry: 1072ef12c; end: 1072ef27f;  */

undefined8 *
FUN_1072ef12c(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar7;
  undefined8 *extraout_x8_01;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *puVar8;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  ulong uVar9;
  ulong uVar10;
  undefined8 auStack_260 [74];
  undefined8 uStack_10;
  
  func_0x0001072f29a0();
  puVar8 = auStack_260;
  puVar7 = auStack_260;
  func_0x0001072f1810();
  uVar3 = 1 < param_3;
  uVar4 = param_3 - 2 == 0;
  puVar6 = param_1;
  uStack_10 = extraout_x8;
  if (1 < (long)param_3) {
    uVar2 = ((long)param_4 - (long)param_1) / 0x250;
    uVar9 = param_3 - 2 >> 1;
    uVar3 = uVar2 <= uVar9;
    uVar4 = uVar9 == uVar2;
    unaff_x21 = param_1;
    unaff_x23 = param_4;
    if ((long)uVar2 <= (long)uVar9) {
      uVar1 = uVar2 << 1 | 1;
      puVar6 = param_1 + uVar1 * 0x4a;
      uVar2 = uVar2 * 2 + 2;
      uVar3 = param_3 <= uVar2;
      uVar4 = uVar2 == param_3;
      puVar5 = puVar6;
      uVar10 = uVar1;
      if ((long)uVar2 < (long)param_3) {
        unaff_x24 = puVar6 + 0x4a;
        FUN_1072eefa4(puVar6,unaff_x24,*param_2);
        uVar4 = (int)puVar5 == 0;
        uVar3 = true;
        puVar5 = unaff_x24;
        uVar10 = uVar2;
        if ((bool)uVar4) {
          puVar5 = puVar6;
          uVar10 = uVar1;
        }
      }
      puVar6 = puVar5;
      func_0x0001072f1e54();
      unaff_x20 = param_2;
      if (((ulong)puVar6 & 1) == 0) {
        func_0x0001072647dc(auStack_260,param_4);
        do {
          unaff_x24 = puVar5;
          func_0x0001072f2070();
          FUN_1072edc2c();
          uVar3 = uVar10 <= uVar9;
          uVar4 = uVar9 == uVar10;
          unaff_x23 = param_4;
          if ((long)uVar9 < (long)uVar10) break;
          uVar1 = uVar10 << 1 | 1;
          puVar6 = param_1 + uVar1 * 0x4a;
          uVar2 = uVar10 * 2 + 2;
          uVar3 = param_3 <= uVar2;
          uVar4 = uVar2 == param_3;
          puVar5 = puVar6;
          uVar10 = uVar1;
          if ((long)uVar2 < (long)param_3) {
            puVar8 = puVar6;
            func_0x0001072f1e54();
            uVar4 = (int)puVar8 == 0;
            uVar3 = true;
            puVar5 = puVar6 + 0x4a;
            uVar10 = uVar2;
            if ((bool)uVar4) {
              puVar5 = puVar6;
              uVar10 = uVar1;
            }
          }
          func_0x0001072f23ac();
          param_4 = unaff_x24;
          unaff_x23 = unaff_x24;
        } while ((int)puVar8 == 0);
        FUN_1072edc2c(unaff_x24,auStack_260);
        FUN_107264bb8();
        puVar6 = puVar7;
      }
    }
  }
  func_0x0001072f1710(uStack_10);
  if ((bool)uVar4) {
    return puVar6;
  }
  ___stack_chk_fail();
  func_0x0001072f1e30();
  FUN_107264bb8();
  func_0x0001072f1abc();
  puVar8 = (undefined8 *)puVar6[1];
  if ((puVar8 != (undefined8 *)0x0) && (func_0x0001072f2318(), extraout_x8_00 != 0)) {
    func_0x0001072f1ef0();
    func_0x0001072f1ad4();
    if ((bool)uVar4) {
      unaff_x24 = (undefined8 *)((ulong)unaff_x20 & (ulong)unaff_x23);
    }
    else {
      func_0x0001072f21e8();
      if ((bool)uVar3) {
        func_0x0001072f220c();
      }
    }
    func_0x0001072f2200();
    if (unaff_x21 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    do {
      while( true ) {
        unaff_x21 = (undefined8 *)*unaff_x21;
        if (unaff_x21 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        puVar7 = (undefined8 *)unaff_x21[1];
        if (unaff_x20 != puVar7) break;
        func_0x0001072f1924();
        if ((int)puVar6 != 0) {
          return unaff_x21;
        }
      }
      if (((ulong)puVar8 & (ulong)unaff_x23) == 0) {
        puVar7 = (undefined8 *)((ulong)puVar7 & (ulong)unaff_x23);
      }
      else if (puVar8 <= puVar7) {
        func_0x0001072f21d0();
        puVar7 = extraout_x8_01;
      }
    } while (puVar7 == unaff_x24);
  }
  return (undefined8 *)0x0;
}



/* Entry: 1072ef280; end: 1072ef31f;  */

long FUN_1072ef280(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  ulong uVar1;
  ulong extraout_x8_00;
  ulong unaff_x20;
  long *unaff_x21;
  ulong uVar2;
  ulong unaff_x23;
  ulong unaff_x24;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 != 0) && (func_0x0001072f2318(), extraout_x8 != 0)) {
    func_0x0001072f1ef0();
    func_0x0001072f1ad4();
    if ((bool)in_ZR) {
      unaff_x24 = unaff_x20 & unaff_x23;
    }
    else {
      func_0x0001072f21e8();
      if ((bool)in_CY) {
        func_0x0001072f220c();
      }
    }
    func_0x0001072f2200();
    if (unaff_x21 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        unaff_x21 = (long *)*unaff_x21;
        if (unaff_x21 == (long *)0x0) {
          return 0;
        }
        uVar1 = unaff_x21[1];
        if (unaff_x20 != uVar1) break;
        func_0x0001072f1924();
        if ((int)param_1 != 0) {
          return (long)unaff_x21;
        }
      }
      if ((uVar2 & unaff_x23) == 0) {
        uVar1 = uVar1 & unaff_x23;
      }
      else if (uVar2 <= uVar1) {
        func_0x0001072f21d0();
        uVar1 = extraout_x8_00;
      }
    } while (uVar1 == unaff_x24);
  }
  return 0;
}



/* Entry: 1072ef320; end: 1072efa23;  */

long * FUN_1072ef320(long *param_1,long *param_2,undefined8 *param_3,long *param_4,long *param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined1 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong uVar12;
  long *plVar13;
  long *unaff_x20;
  long lVar14;
  long *plVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  long *plVar18;
  long *plVar19;
  long *unaff_x28;
  undefined8 in_stack_00000088;
  undefined8 in_stack_000000e0;
  long alStack_100 [7];
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 **ppuStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [32];
  long *plStack_40;
  long *plStack_38;
  long *plStack_30;
  long *plStack_28;
  long *plStack_20;
  long *plStack_18;
  undefined8 *puStack_10;
  undefined8 uStack_8;
  
  func_0x0001072f2b98();
  plVar13 = param_1;
  plVar8 = param_2;
  plVar7 = param_4;
  func_0x0001072f1810();
  in_stack_00000088 = extraout_x8_01;
  do {
    plVar15 = param_2 + -7;
LAB_1072ef368:
    plVar18 = (long *)0x38;
    uVar12 = (long)param_2 - (long)param_1;
    plVar19 = (long *)((long)uVar12 / 0x38);
    uVar3 = plVar19 == (long *)0x5;
    switch(plVar19) {
    case (long *)0x0:
    case (long *)0x1:
      goto LAB_1072ef9a4;
    case (long *)0x2:
      func_0x0001072f1ca8();
      FUN_1072eefa4();
      if ((int)plVar13 != 0) {
        func_0x0001072f1e14();
        FUN_1072ec56c();
      }
      goto LAB_1072ef9a4;
    case (long *)0x3:
      plVar8 = param_1 + 7;
      plVar13 = param_1;
      func_0x0001072f2038(param_1,plVar8,plVar15);
      goto LAB_1072ef9a4;
    case (long *)0x4:
      plVar8 = param_1 + 7;
      plVar13 = param_1;
      plVar7 = plVar15;
      func_0x0001072efab0(param_1,plVar8,param_1 + 0xe,plVar15,param_3);
      goto LAB_1072ef9a4;
    case (long *)0x5:
      plVar8 = param_1 + 7;
      plVar7 = param_1 + 0x15;
      plVar13 = param_1;
      func_0x0001072efb18(param_1,plVar8,param_1 + 0xe,plVar7,plVar15,param_3);
      goto LAB_1072ef9a4;
    }
    if ((long)uVar12 < 0x540) {
      uVar3 = param_1 == param_2;
      if (((ulong)param_5 & 1) == 0) {
        if (!(bool)uVar3) {
          while( true ) {
            unaff_x20 = param_1;
            param_1 = unaff_x20 + 7;
            uVar3 = 1;
            if (param_1 == param_2) break;
            func_0x0001072f1c40();
            FUN_1072eefa4();
            if ((int)plVar13 != 0) {
              func_0x0001072f1b50();
              do {
                plVar13 = unaff_x20;
                func_0x0001072f1f10(plVar13 + 7);
                uVar12 = 0;
                func_0x0001072f1d04();
                unaff_x20 = plVar13 + -7;
              } while ((uVar12 & 1) != 0);
              func_0x0001072f24dc();
              func_0x0001072f1c4c();
            }
          }
        }
        break;
      }
      if ((bool)uVar3) break;
      param_4 = (long *)0x0;
      plVar8 = param_1;
      goto LAB_1072ef69c;
    }
    if (param_4 == (long *)0x0) {
      uVar3 = 1;
      if (param_1 == param_2) break;
      plVar18 = (long *)((ulong)((long)plVar19 - 2U) >> 1);
      unaff_x28 = plVar18;
      goto LAB_1072ef730;
    }
    if (uVar12 < 0x1c01) {
      func_0x0001072f22b0();
      func_0x0001072f2038();
    }
    else {
      func_0x0001072f1c40();
      func_0x0001072f2038();
      func_0x0001072f2038(param_1 + 7,param_1 + ((ulong)plVar19 >> 1) * 7 + -7,param_2 + -0xe);
      func_0x0001072f2038(param_1 + 0xe,param_1 + ((ulong)plVar19 >> 1) * 7 + 7,param_2 + -0x15);
      func_0x0001072f2af8();
      func_0x0001072f2038();
      func_0x0001072f1c40();
      FUN_1072ec56c();
    }
    param_4 = (long *)((long)param_4 - 1);
    if (((ulong)param_5 & 1) == 0) {
      plVar8 = param_1 + -7;
      func_0x0001072f1de0();
      if (((ulong)plVar8 & 1) != 0) goto LAB_1072ef408;
      func_0x0001072f1b50();
      plVar13 = (long *)&stack0x00000050;
      func_0x0001072f1f20();
      plVar19 = param_1;
      if (((ulong)plVar13 & 1) == 0) {
        do {
          plVar19 = plVar19 + 7;
          if (param_2 <= plVar19) break;
          plVar13 = (long *)&stack0x00000050;
          func_0x0001072f2040();
        } while ((int)plVar13 == 0);
      }
      else {
        do {
          plVar19 = plVar19 + 7;
          plVar13 = (long *)&stack0x00000050;
          func_0x0001072f2040();
        } while (((ulong)plVar13 & 1) == 0);
      }
      plVar8 = param_2;
      if (plVar19 < param_2) {
        do {
          plVar8 = plVar8 + -7;
          plVar13 = (long *)&stack0x00000050;
          func_0x0001072f251c();
        } while (((ulong)plVar13 & 1) != 0);
      }
      while (plVar19 < plVar8) {
        func_0x0001072f2650();
        FUN_1072ec56c();
        do {
          plVar19 = plVar19 + 7;
          iVar4 = (int)&stack0x00000050;
          func_0x0001072f2040();
        } while (iVar4 == 0);
        do {
          plVar8 = plVar8 + -7;
          plVar13 = (long *)&stack0x00000050;
          func_0x0001072f251c();
        } while (((ulong)plVar13 & 1) != 0);
      }
      unaff_x20 = plVar19 + -7;
      if (param_1 != unaff_x20) {
        func_0x0001072f1c40();
        func_0x000104c2f1f0();
      }
      plVar8 = (long *)&stack0x00000050;
      func_0x0001072f23a4();
      func_0x0001072f1c4c();
      param_1 = plVar19;
      goto LAB_1072ef5f0;
    }
LAB_1072ef408:
    func_0x0001072f1b50();
    lVar14 = 0;
    do {
      plVar13 = (long *)((long)param_1 + lVar14 + 0x38);
      FUN_1072eefa4(plVar13,&stack0x00000050,*param_3);
      lVar14 = lVar14 + 0x38;
    } while (((ulong)plVar13 & 1) != 0);
    plVar11 = (long *)((long)param_1 + lVar14);
    plVar8 = param_2;
    plVar19 = plVar11;
    if (lVar14 == 0x38) {
      do {
        unaff_x28 = plVar8;
        if (plVar8 <= plVar11) break;
        plVar8 = plVar8 + -7;
        func_0x0001072f2488();
        unaff_x28 = plVar8;
      } while (((ulong)plVar13 & 1) == 0);
    }
    else {
      do {
        plVar8 = plVar8 + -7;
        func_0x0001072f2488();
        unaff_x28 = plVar8;
      } while ((int)plVar13 == 0);
    }
    while (plVar19 < plVar8) {
      func_0x0001072f2af8();
      FUN_1072ec56c();
      do {
        plVar19 = plVar19 + 7;
        plVar13 = plVar19;
        FUN_1072eefa4(plVar19,&stack0x00000050,*param_3);
      } while (((ulong)plVar13 & 1) != 0);
      do {
        plVar8 = plVar8 + -7;
        func_0x0001072f27e4();
      } while (((ulong)plVar13 & 1) == 0);
    }
    unaff_x20 = plVar19 + -7;
    if (param_1 != unaff_x20) {
      func_0x0001072f1c40();
      func_0x000104c2f1f0();
    }
    plVar8 = (long *)&stack0x00000050;
    func_0x0001072f23a4();
    func_0x0001072f1c4c();
    uVar3 = plVar11 == unaff_x28;
    plVar18 = (long *)0x38;
    if (plVar11 < unaff_x28) goto LAB_1072ef504;
    func_0x0001072f1c40();
    FUN_1072efb9c();
    func_0x0001072f2ac0();
    FUN_1072efb9c();
    if ((int)plVar13 == 0) goto code_r0x0001072ef500;
    param_2 = unaff_x20;
  } while (((ulong)unaff_x28 & 1) == 0);
  goto LAB_1072ef9a4;
LAB_1072ef69c:
  plVar15 = plVar8 + 7;
  uVar3 = 1;
  if (plVar15 == param_2) goto LAB_1072ef9a4;
  func_0x0001072f23ac();
  if ((int)plVar13 != 0) {
    func_0x0001072f2504(&stack0x00000050);
    plVar8 = param_4;
    do {
      unaff_x20 = (long *)((long)param_1 + (long)plVar8);
      func_0x0001072f1f10(unaff_x20 + 7);
      plVar13 = param_1;
      if (plVar8 == (long *)0x0) goto LAB_1072ef6fc;
      puVar9 = &stack0x00000050;
      FUN_1072eefa4(puVar9,unaff_x20 + -7,*param_3);
      plVar8 = plVar8 + -7;
    } while (((ulong)puVar9 & 1) != 0);
    plVar13 = (long *)((undefined1 *)((long)param_1 + (long)plVar8) + 0x38);
LAB_1072ef6fc:
    func_0x0001072f24dc();
    func_0x0001072f1c4c();
    plVar18 = param_2;
  }
  param_4 = param_4 + 7;
  plVar8 = plVar15;
  goto LAB_1072ef69c;
code_r0x0001072ef500:
  param_1 = plVar19;
  if (((ulong)unaff_x28 & 1) == 0) {
LAB_1072ef504:
    func_0x0001072f1c40();
    plVar7 = param_4;
    FUN_1072ef320();
    param_1 = plVar19;
LAB_1072ef5f0:
    param_5 = (long *)0x0;
  }
  goto LAB_1072ef368;
LAB_1072ef730:
  do {
    if ((long)unaff_x28 <= (long)plVar18) {
      plVar13 = (long *)(((ulong)unaff_x28 & 0x3fffffffffffffff) << 1 | 1);
      plVar11 = param_1 + (long)plVar13 * 7;
      param_4 = (long *)((long)unaff_x28 * 2 + 2);
      plVar15 = plVar11;
      param_5 = plVar13;
      if ((long)param_4 < (long)plVar19) {
        plVar10 = plVar11;
        func_0x0001072f1d04();
        plVar15 = plVar11 + 7;
        param_5 = param_4;
        if ((int)plVar10 == 0) {
          plVar15 = plVar11;
          param_5 = plVar13;
        }
      }
      plVar13 = plVar15;
      func_0x0001072f1d04();
      if (((ulong)plVar13 & 1) == 0) {
        plVar8 = param_1 + (long)unaff_x28 * 7;
        func_0x000104c318bc(&stack0x00000050);
        plVar11 = param_1 + (long)unaff_x28 * 7;
        do {
          param_4 = plVar15;
          plVar13 = plVar11;
          func_0x0001072f2514();
          plVar15 = param_4;
          if ((long)plVar18 < (long)param_5) break;
          plVar11 = (long *)((long)param_5 << 1 | 1);
          plVar10 = param_1 + (long)plVar11 * 7;
          plVar8 = (long *)((long)param_5 * 2 + 2);
          plVar15 = plVar10;
          param_5 = plVar11;
          if ((long)plVar8 < (long)plVar19) {
            plVar13 = plVar10;
            func_0x0001072f1d04();
            plVar15 = plVar10 + 7;
            param_5 = plVar8;
            if ((int)plVar13 == 0) {
              plVar15 = plVar10;
              param_5 = plVar11;
            }
          }
          plVar8 = (long *)&stack0x00000050;
          func_0x0001072f23ac();
          plVar11 = param_4;
        } while ((int)plVar13 == 0);
        func_0x0001072f2128();
        func_0x0001072f1c4c();
      }
    }
    unaff_x28 = (long *)((long)unaff_x28 - 1);
  } while (-1 < (long)unaff_x28);
  plVar18 = (long *)0x38;
  while( true ) {
    unaff_x20 = (long *)((long)plVar19 - 2);
    uVar3 = unaff_x20 == (long *)0x0;
    if ((long)plVar19 < 2) break;
    func_0x000104c318bc(&stack0x00000018,param_1);
    plVar13 = (long *)0x0;
    plVar8 = param_1;
    do {
      plVar11 = plVar8 + (long)plVar13 * 7 + 7;
      plVar10 = (long *)((long)plVar13 << 1 | 1);
      unaff_x28 = (long *)((long)plVar13 * 2 + 2);
      plVar15 = plVar11;
      plVar5 = plVar10;
      if ((long)unaff_x28 < (long)plVar19) {
        param_4 = plVar8 + (long)plVar13 * 7 + 0xe;
        plVar13 = plVar11;
        func_0x0001072f1e54();
        plVar15 = param_4;
        plVar5 = unaff_x28;
        if ((int)plVar13 == 0) {
          plVar15 = plVar11;
          plVar5 = plVar10;
        }
      }
      plVar13 = plVar5;
      func_0x0001072f2514(plVar8);
      plVar8 = plVar15;
    } while ((long)plVar13 <= (long)((ulong)unaff_x20 >> 1));
    param_2 = param_2 + -7;
    if (plVar15 == param_2) {
      plVar8 = (long *)&stack0x00000018;
      func_0x000104c2f1f0(plVar15);
    }
    else {
      func_0x0001072f1f10(plVar15);
      plVar8 = (long *)&stack0x00000018;
      func_0x0001072f23a4();
      puVar9 = (undefined1 *)((long)plVar15 + (0x38 - (long)param_1));
      if (0x38 < (long)puVar9) {
        uVar12 = (ulong)puVar9 / 0x38 - 2 >> 1;
        plVar13 = param_1 + uVar12 * 7;
        func_0x0001072f1f20();
        if ((int)plVar13 != 0) {
          func_0x0001072f2504(&stack0x00000050);
          plVar13 = param_1 + uVar12 * 7;
          do {
            param_4 = plVar13;
            plVar11 = plVar15;
            func_0x0001072f1f10();
            if (uVar12 == 0) break;
            uVar12 = uVar12 - 1 >> 1;
            plVar8 = (long *)&stack0x00000050;
            func_0x0001072f27e4();
            plVar13 = param_1 + uVar12 * 7;
            plVar15 = param_4;
          } while (((ulong)plVar11 & 1) != 0);
          func_0x0001072f2128();
          func_0x0001072f1c4c();
        }
      }
    }
    plVar13 = (long *)&stack0x00000018;
    func_0x000104c2f714();
    plVar19 = (long *)((long)plVar19 - 1);
    param_5 = param_2;
  }
LAB_1072ef9a4:
  func_0x0001072f1710(in_stack_00000088);
  if ((bool)uVar3) {
    return plVar13;
  }
  ___stack_chk_fail();
  func_0x000104c2f714(&stack0x00000050);
  func_0x0001072f1abc();
  uStack_8 = 0x1072efa24;
  plVar11 = plVar7;
  plStack_40 = param_2;
  plStack_38 = param_4;
  plStack_30 = plVar15;
  plStack_28 = param_1;
  plStack_20 = unaff_x20;
  plStack_18 = plVar13;
  puStack_10 = &stack0x000000e0;
  func_0x0001072f1ae4();
  lVar14 = *plVar11;
  func_0x0001072f1de0();
  plVar13 = plVar8;
  func_0x0001072f1a10();
  if (((ulong)plVar8 & 1) == 0) {
    if ((int)plVar13 != 0) {
      func_0x0001072f1bcc();
      FUN_1072ec56c();
      lVar14 = *plVar7;
      func_0x0001072f1d0c();
      FUN_1072eefa4();
      if ((int)plVar13 != 0) {
        func_0x0001072f1c34();
        goto code_r0x0001072ec56c;
      }
    }
    return plVar13;
  }
  if ((int)plVar13 == 0) {
    func_0x0001072f1c34();
    FUN_1072ec56c();
    func_0x0001072f1a10();
    if ((int)plVar13 == 0) {
      return plVar13;
    }
  }
code_r0x0001072ec56c:
  plVar10 = plStack_18;
  plVar11 = plStack_20;
  plVar15 = plStack_28;
  plVar13 = plStack_30;
  plVar7 = plStack_38;
  plVar8 = plStack_40;
  puVar9 = auStack_60;
  func_0x0001072f1b80();
  func_0x0001072f1810();
  plStack_28 = (long *)extraout_x8;
  func_0x000104c318bc(auStack_60,plVar11);
  func_0x0001072f1b8c();
  func_0x000104c2f1f0();
  plVar5 = plVar10;
  func_0x000104c2f1f0();
  func_0x0001072f1cfc();
  func_0x0001072f1710(plStack_28);
  if ((bool)uVar3) {
    return plVar5;
  }
  ___stack_chk_fail();
  plVar6 = alStack_100;
  plStack_a0 = plVar8;
  plStack_98 = plVar7;
  plStack_90 = plVar13;
  plStack_88 = plVar15;
  plStack_80 = plVar11;
  plStack_78 = plVar10;
  pcStack_68 = FUN_1072ec5c8;
  plStack_c0 = unaff_x28;
  plStack_b8 = plVar19;
  plStack_b0 = param_5;
  plStack_a8 = plVar18;
  ppuStack_70 = &puStack_10;
  func_0x0001072f1810();
  uVar3 = puVar9 + -2 == (undefined1 *)0x0;
  plVar8 = plVar5;
  uStack_c8 = extraout_x8_00;
  if (1 < (long)puVar9) {
    puVar2 = (undefined1 *)((lVar14 - (long)plVar5) / 0x38);
    puVar16 = (undefined1 *)((ulong)(puVar9 + -2) >> 1);
    uVar3 = puVar16 == puVar2;
    plVar11 = plVar5;
    if ((long)puVar2 <= (long)puVar16) {
      puVar1 = (undefined1 *)((long)puVar2 << 1 | 1);
      plVar13 = plVar5 + (long)puVar1 * 7;
      puVar2 = (undefined1 *)((long)puVar2 * 2 + 2);
      uVar3 = puVar2 == puVar9;
      plVar7 = plVar13;
      puVar17 = puVar1;
      if ((long)puVar2 < (long)puVar9) {
        func_0x0001072f1f60();
        func_0x000104c2fc44();
        uVar3 = (int)plVar8 == 0;
        plVar7 = plVar13 + 7;
        puVar17 = puVar2;
        if ((bool)uVar3) {
          plVar7 = plVar13;
          puVar17 = puVar1;
        }
      }
      func_0x0001072f1e14();
      func_0x000104c2fc44();
      if (((ulong)plVar8 & 1) == 0) {
        func_0x0001072f2504();
        do {
          plVar8 = plVar7;
          iVar4 = (int)plVar6;
          func_0x0001072f1ca8();
          func_0x000104c2f1f0();
          uVar3 = puVar16 == puVar17;
          if ((long)puVar16 < (long)puVar17) break;
          puVar1 = (undefined1 *)((long)puVar17 << 1 | 1);
          plVar13 = plVar5 + (long)puVar1 * 7;
          puVar2 = (undefined1 *)((long)puVar17 * 2 + 2);
          uVar3 = puVar2 == puVar9;
          plVar7 = plVar13;
          puVar17 = puVar1;
          if ((long)puVar2 < (long)puVar9) {
            func_0x0001072f1e14();
            func_0x000104c2fc44();
            uVar3 = iVar4 == 0;
            plVar7 = plVar13 + 7;
            puVar17 = puVar2;
            if ((bool)uVar3) {
              plVar7 = plVar13;
              puVar17 = puVar1;
            }
          }
          plVar6 = plVar7;
          func_0x000104c2fc44(plVar7,alStack_100);
        } while ((int)plVar6 == 0);
        func_0x000104c2f1f0(plVar8,alStack_100);
        func_0x0001072f1cfc();
      }
    }
  }
  func_0x0001072f1710(uStack_c8);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    plVar7 = plVar8;
    func_0x0001072f1cfc();
    func_0x0001072f1abc();
    func_0x0001072f1c10();
    if ((char)plVar7[0x14] == '\x01') {
      func_0x0001072ec784();
      func_0x0001072ec7f4(plVar8 + 5,plVar11 + 5);
      FUN_1072e89fc(plVar8 + 10,plVar11 + 10);
      FUN_1072ebbd8(plVar8 + 0xf,plVar11 + 0xf);
    }
    else {
      FUN_1072e94d8();
      *(undefined1 *)(plVar8 + 0x14) = 1;
    }
    return plVar8;
  }
  return plVar8;
}



/* Entry: 1072efa24; end: 1072efb9b;  */

undefined1 * FUN_1072efa24(undefined8 param_1,undefined1 *param_2,undefined8 param_3,long *param_4)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 auStack_100 [56];
  undefined8 uStack_c8;
  undefined1 auStack_60 [32];
  
  plVar8 = param_4;
  func_0x0001072f1ae4();
  lVar7 = *plVar8;
  func_0x0001072f1de0();
  puVar6 = param_2;
  func_0x0001072f1a10();
  if (((ulong)param_2 & 1) != 0) {
    if ((int)puVar6 == 0) {
      func_0x0001072f1c34();
      FUN_1072ec56c();
      func_0x0001072f1a10();
      if ((int)puVar6 == 0) {
        return puVar6;
      }
    }
LAB_1072efaa0:
    puVar6 = auStack_60;
    func_0x0001072f1b80();
    func_0x0001072f1810();
    func_0x000104c318bc(auStack_60,unaff_x20);
    func_0x0001072f1b8c();
    func_0x000104c2f1f0();
    func_0x000104c2f1f0();
    func_0x0001072f1cfc();
    func_0x0001072f1710(extraout_x8);
    if ((bool)in_ZR) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    puVar5 = auStack_100;
    func_0x0001072f1810();
    uVar2 = puVar6 + -2 == (undefined1 *)0x0;
    puVar4 = unaff_x19;
    uStack_c8 = extraout_x8_00;
    if (1 < (long)puVar6) {
      puVar1 = (undefined1 *)((lVar7 - (long)unaff_x19) / 0x38);
      puVar12 = (undefined1 *)((ulong)(puVar6 + -2) >> 1);
      uVar2 = puVar12 == puVar1;
      unaff_x20 = unaff_x19;
      if ((long)puVar1 <= (long)puVar12) {
        puVar10 = (undefined1 *)((long)puVar1 << 1 | 1);
        puVar9 = unaff_x19 + (long)puVar10 * 0x38;
        puVar1 = (undefined1 *)((long)puVar1 * 2 + 2);
        uVar2 = puVar1 == puVar6;
        puVar11 = puVar9;
        puVar13 = puVar10;
        if ((long)puVar1 < (long)puVar6) {
          func_0x0001072f1f60();
          func_0x000104c2fc44();
          uVar2 = (int)puVar4 == 0;
          puVar11 = puVar9 + 0x38;
          puVar13 = puVar1;
          if ((bool)uVar2) {
            puVar11 = puVar9;
            puVar13 = puVar10;
          }
        }
        func_0x0001072f1e14();
        func_0x000104c2fc44();
        if (((ulong)puVar4 & 1) == 0) {
          func_0x0001072f2504();
          do {
            puVar4 = puVar11;
            iVar3 = (int)puVar5;
            func_0x0001072f1ca8();
            func_0x000104c2f1f0();
            uVar2 = puVar12 == puVar13;
            if ((long)puVar12 < (long)puVar13) break;
            puVar1 = (undefined1 *)((long)puVar13 << 1 | 1);
            puVar10 = unaff_x19 + (long)puVar1 * 0x38;
            puVar5 = (undefined1 *)((long)puVar13 * 2 + 2);
            uVar2 = puVar5 == puVar6;
            puVar11 = puVar10;
            puVar13 = puVar1;
            if ((long)puVar5 < (long)puVar6) {
              func_0x0001072f1e14();
              func_0x000104c2fc44();
              uVar2 = iVar3 == 0;
              puVar11 = puVar10 + 0x38;
              puVar13 = puVar5;
              if ((bool)uVar2) {
                puVar11 = puVar10;
                puVar13 = puVar1;
              }
            }
            puVar5 = puVar11;
            func_0x000104c2fc44(puVar11,auStack_100);
          } while ((int)puVar5 == 0);
          func_0x000104c2f1f0(puVar4,auStack_100);
          func_0x0001072f1cfc();
        }
      }
    }
    func_0x0001072f1710(uStack_c8);
    if (!(bool)uVar2) {
      ___stack_chk_fail();
      puVar6 = puVar4;
      func_0x0001072f1cfc();
      func_0x0001072f1abc();
      func_0x0001072f1c10();
      if (puVar6[0xa0] == '\x01') {
        func_0x0001072ec784();
        func_0x0001072ec7f4(puVar4 + 0x28,unaff_x20 + 0x28);
        FUN_1072e89fc(puVar4 + 0x50,unaff_x20 + 0x50);
        FUN_1072ebbd8(puVar4 + 0x78,unaff_x20 + 0x78);
      }
      else {
        FUN_1072e94d8();
        puVar4[0xa0] = 1;
      }
      return puVar4;
    }
    return puVar4;
  }
  if ((int)puVar6 != 0) {
    func_0x0001072f1bcc();
    FUN_1072ec56c();
    lVar7 = *param_4;
    func_0x0001072f1d0c();
    FUN_1072eefa4();
    if ((int)puVar6 != 0) {
      func_0x0001072f1c34();
      goto LAB_1072efaa0;
    }
  }
  return puVar6;
}



/* Entry: 1072efb9c; end: 1072efd2f;  */

void FUN_1072efb9c(void)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar2;
  undefined1 uVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long lVar7;
  ulong *extraout_x8_01;
  ulong uVar8;
  ulong *extraout_x8_02;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar9;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_90 [56];
  undefined8 uStack_58;
  
  func_0x0001072f2644();
  func_0x0001072f17a8();
  uStack_58 = extraout_x8;
  func_0x0001072f1f9c();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001072efbe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10de3442a)[extraout_x8_00] * 4 + 0x1072efbe8))(1);
    return;
  }
  func_0x0001072f22c8();
  FUN_1072efa24();
  lVar10 = 0;
  iVar11 = 0;
  lVar7 = unaff_x19 + 0xa8;
  do {
    if (lVar7 == unaff_x21) {
      puVar4 = (ulong *)0x1;
      bVar2 = true;
LAB_1072efcf4:
      func_0x0001072f1710(uStack_58);
      if (bVar2) {
        return;
      }
      ___stack_chk_fail();
      puVar5 = puVar4;
      func_0x0001072f1abc();
      func_0x0001072f1c10();
      uVar8 = puVar5[1];
      func_0x00010006818c();
      uVar3 = (int)uVar8 == (int)puVar5;
      if ((int)puVar5 <= (int)uVar8) {
        func_0x00010563f22c(puVar4);
        uVar8 = *puVar4;
        if ((uVar8 & 1) != 0) {
          *(int *)(uVar8 - 1) = *(int *)(uVar8 - 1) + 1;
        }
        uVar8 = puVar4[2];
        FUN_1072efdd0();
        *(int *)(puVar4 + 1) = (int)puVar4[1] + 1;
        func_0x0001072f21c0();
        if (!(bool)uVar3) {
          puVar4 = extraout_x8_02;
        }
        *puVar4 = uVar8;
        return;
      }
      *(int *)(puVar4 + 1) = (int)puVar4[1] + 1;
      func_0x0001072f21c0();
      if (!(bool)uVar3) {
        puVar4 = extraout_x8_01;
      }
      puVar6 = (undefined8 *)*puVar4;
      if (*(char *)((long)puVar6 + 0x17) < '\0') {
        func_0x000107c60e14(*puVar6);
      }
      uVar13 = unaff_x20[1];
      uVar12 = *unaff_x20;
      puVar6[2] = unaff_x20[2];
      puVar6[1] = uVar13;
      *puVar6 = uVar12;
      *(undefined1 *)((long)unaff_x20 + 0x17) = 0;
      *(undefined1 *)unaff_x20 = 0;
      return;
    }
    lVar9 = lVar7;
    func_0x0001072f1e54();
    if ((int)lVar9 != 0) {
      func_0x0001072f2504(auStack_90);
      lVar9 = lVar10;
      do {
        lVar1 = unaff_x19 + lVar9;
        func_0x000104c2f1f0(lVar1 + 0xa8,lVar1 + 0x70);
        if (lVar9 == -0x70) break;
        uVar8 = 0;
        FUN_1072eefa4(auStack_90,lVar1 + 0x38,*unaff_x20);
        lVar9 = lVar9 + -0x38;
      } while ((uVar8 & 1) != 0);
      func_0x000104c2f1f0();
      iVar11 = iVar11 + 1;
      func_0x0001072f1cfc();
      if (iVar11 == 8) {
        bVar2 = lVar7 + 0x38 == unaff_x21;
        puVar4 = (ulong *)(ulong)bVar2;
        goto LAB_1072efcf4;
      }
    }
    lVar7 = lVar7 + 0x38;
    lVar10 = lVar10 + 0x38;
  } while( true );
}



/* Entry: 1072efd30; end: 1072efdcf;  */

void FUN_1072efd30(long param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  ulong *extraout_x8;
  ulong uVar4;
  ulong *extraout_x8_00;
  ulong *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x0001072f1c10();
  iVar1 = *(int *)(param_1 + 8);
  func_0x00010006818c();
  uVar2 = iVar1 == (int)param_1;
  if (iVar1 < (int)param_1) {
    *(int *)(unaff_x19 + 1) = (int)unaff_x19[1] + 1;
    func_0x0001072f21c0();
    if (!(bool)uVar2) {
      unaff_x19 = extraout_x8;
    }
    puVar3 = (undefined8 *)*unaff_x19;
    if (*(char *)((long)puVar3 + 0x17) < '\0') {
      func_0x000107c60e14(*puVar3);
    }
    uVar6 = unaff_x20[1];
    uVar5 = *unaff_x20;
    puVar3[2] = unaff_x20[2];
    puVar3[1] = uVar6;
    *puVar3 = uVar5;
    *(undefined1 *)((long)unaff_x20 + 0x17) = 0;
    *(undefined1 *)unaff_x20 = 0;
    return;
  }
  func_0x00010563f22c();
  uVar4 = *unaff_x19;
  if ((uVar4 & 1) != 0) {
    *(int *)(uVar4 - 1) = *(int *)(uVar4 - 1) + 1;
  }
  uVar4 = unaff_x19[2];
  FUN_1072efdd0();
  *(int *)(unaff_x19 + 1) = (int)unaff_x19[1] + 1;
  func_0x0001072f21c0();
  if (!(bool)uVar2) {
    unaff_x19 = extraout_x8_00;
  }
  *unaff_x19 = uVar4;
  return;
}



/* Entry: 1072efdd0; end: 1072efdf3;  */

void FUN_1072efdd0(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_1072efdf4(&uStack_18);
  return;
}



/* Entry: 1072efdf4; end: 1072efe37;  */

void FUN_1072efdf4(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 == (undefined8 *)0x0) {
    func_0x0001072f2464();
  }
  else {
    func_0x00010b4d80a4();
  }
  uVar3 = param_2[1];
  uVar2 = *param_2;
  puVar1[2] = param_2[2];
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  return;
}



/* Entry: 1072efe38; end: 1072efe43;  */

void FUN_1072efe38(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x21;
  
  func_0x000107946698(param_1,0,param_2);
  func_0x000107946d88(&PTR_DAT_1109ed0f0);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107946680();
  }
  func_0x000107946f70();
  func_0x00010598fd00();
  lVar1 = unaff_x21 + 0x28;
  func_0x000107946ba4();
  *(long *)(unaff_x19 + 0x28) = lVar1;
  *(undefined4 *)(unaff_x19 + 0x30) = 0;
  return;
}



/* Entry: 1072efe44; end: 1072efea7;  */

/* WARNING: Possible PIC construction at 0x0001072efe98: Changing call to branch */

undefined1  [16] FUN_1072efe44(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  long lVar3;
  ulong extraout_x8;
  ulong uVar4;
  long unaff_x19;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  uVar2 = 0x492492492492491 < param_2;
  if (param_2 < 0x492492492492493) {
    uVar1 = (param_1[2] - *param_1) / 0x38;
    uVar4 = uVar1 * 2;
    if (uVar4 < param_2 || uVar4 - param_2 == 0) {
      uVar4 = param_2;
    }
    if (0x249249249249248 < uVar1) {
      uVar4 = 0x492492492492492;
    }
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = uVar4;
    return auVar8;
  }
  func_0x0001072f1cb4();
  func_0x0001072f26bc();
  if ((bool)uVar2) {
    func_0x000104bd35f4();
    func_0x0001072f2a84();
    if ((extraout_x8 & 1) == 0) {
      lVar5 = **(long **)(unaff_x19 + 8);
      lVar3 = **(long **)(unaff_x19 + 0x10);
      while (lVar3 != lVar5) {
        lVar3 = lVar3 + -0x38;
        func_0x000107942f50();
      }
    }
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = unaff_x19;
    return auVar7;
  }
  lVar3 = (long)param_1 * 0x38;
  __Znwm(lVar3);
  auVar6._8_8_ = param_1;
  auVar6._0_8_ = lVar3;
  return auVar6;
}



/* Entry: 1072efea8; end: 1072eff67;  */

void FUN_1072efea8(long param_1)

{
  undefined1 in_CY;
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  long lVar2;
  
  func_0x0001072f26bc();
  if (!(bool)in_CY) {
    __Znwm(param_1 * 0x38);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001072f2a84();
  if ((extraout_x8 & 1) == 0) {
    lVar2 = **(long **)(unaff_x19 + 8);
    lVar1 = **(long **)(unaff_x19 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x38;
      func_0x000107942f50();
    }
  }
  return;
}



/* Entry: 1072eff68; end: 1072eff73;  */

undefined8 * FUN_1072eff68(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x00010598fce8(param_1,param_2);
  return param_1;
}



/* Entry: 1072eff74; end: 1072f0013;  */

void FUN_1072eff74(long param_1)

{
  long unaff_x20;
  long unaff_x21;
  long lVar1;
  long lStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x0001072f2644();
  lVar1 = *(long *)(param_1 + 8);
  lStack_70 = param_1 + 0x10;
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_58 = 0;
  lStack_50 = lVar1;
  for (; lStack_48 = lVar1, unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x38) {
    func_0x0001072f1ca8();
    FUN_1072efe38();
    lVar1 = lStack_48 + 0x38;
  }
  func_0x0001072f230c();
  func_0x0001072efee0(&lStack_70);
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1072f0014; end: 1072f0057;  */

long FUN_1072f0014(void)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001072f1d6c();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x38) {
    func_0x0001072f1ca8();
    func_0x0001079431c0();
    unaff_x19 = unaff_x19 + 0x38;
  }
  return unaff_x19;
}



/* Entry: 1072f0058; end: 1072f00b3;  */

long FUN_1072f0058(long param_1,long param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x50);
  if (cVar1 == *(char *)(param_2 + 0x50)) {
    if (cVar1 != '\0') {
      FUN_1072ede30(param_1);
    }
  }
  else if (cVar1 == '\0') {
    func_0x000107270898(param_1);
  }
  else {
    FUN_107261f7c(param_1);
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  return param_1;
}



/* Entry: 1072f00b4; end: 1072f0137;  */

void FUN_1072f00b4(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072f1c10();
  FUN_107263b58();
  _memcpy(param_1 + 0x40,unaff_x20 + 0x40,0x41);
  func_0x00010028af84(unaff_x19 + 0x88,unaff_x20 + 0x88);
  func_0x00010028af84(unaff_x19 + 0xa8,unaff_x20 + 0xa8);
  FUN_107270038(unaff_x19 + 200,unaff_x20 + 200);
  return;
}



/* Entry: 1072f0138; end: 1072f0143;  */

long * FUN_1072f0138(long *param_1)

{
  ulong uVar1;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 uVar2;
  long *plVar3;
  long *plVar4;
  long *extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar5;
  long extraout_x9;
  long *extraout_x9_00;
  long *extraout_x9_01;
  ulong extraout_x10;
  long *unaff_x19;
  long *plVar6;
  long *plVar7;
  long *unaff_x24;
  long *unaff_x25;
  
  func_0x0001072f1cb4();
  func_0x0001072f2570();
  func_0x0001072f18cc();
  plVar7 = (long *)unaff_x19[1];
  plVar3 = param_1;
  if (plVar7 != (long *)0x0) {
    func_0x0001072f2a58();
    if ((bool)in_ZR) {
      unaff_x24 = (long *)((ulong)unaff_x25 & (ulong)param_1);
      in_ZR = true;
    }
    else {
      in_NG = (long)param_1 - (long)plVar7 < 0;
      in_ZR = param_1 == plVar7;
      unaff_x24 = param_1;
      if (plVar7 <= param_1) {
        uVar1 = 0;
        if (plVar7 != (long *)0x0) {
          uVar1 = (ulong)param_1 / (ulong)plVar7;
        }
        unaff_x24 = (long *)((long)param_1 - uVar1 * (long)plVar7);
      }
    }
    plVar6 = *(long **)(*unaff_x19 + (long)unaff_x24 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_1072f01e4;
          plVar4 = (long *)plVar6[1];
          in_NG = (long)plVar4 - (long)param_1 < 0;
          in_ZR = plVar4 == param_1;
          if (!(bool)in_ZR) break;
          plVar3 = plVar6 + 2;
          func_0x0001072f2264();
          if (((ulong)plVar3 & 1) != 0) goto LAB_1072f02b0;
        }
        if (((ulong)plVar7 & (ulong)unaff_x25) == 0) {
          plVar4 = (long *)((ulong)plVar4 & (ulong)unaff_x25);
        }
        else if (plVar7 <= plVar4) {
          func_0x0001072f2298();
          plVar4 = extraout_x8;
        }
        in_NG = (long)plVar4 - (long)unaff_x24 < 0;
        in_ZR = plVar4 == unaff_x24;
      } while ((bool)in_ZR);
    }
  }
LAB_1072f01e4:
  func_0x0001072f2064();
  *plVar3 = 0;
  plVar3[1] = (long)param_1;
  func_0x0001072f250c(plVar3 + 2);
  _bzero(plVar3 + 9,0x250);
  FUN_1072f02dc(plVar3 + 9);
  func_0x0001072f230c();
  func_0x0001072f17bc();
  if ((plVar7 == (long *)0x0) || (func_0x0001072f1ac4(), (bool)in_NG)) {
    func_0x0001072f18b4();
    uVar2 = plVar7 == (long *)0x3;
    func_0x0001072f16d8();
    func_0x0001072f27dc();
    func_0x0001072f1d44();
    if ((bool)uVar2) {
      in_ZR = 1;
      unaff_x24 = (long *)(extraout_x8_00 & (ulong)param_1);
    }
    else {
      in_ZR = param_1 == plVar7;
      unaff_x24 = param_1;
      if (plVar7 <= param_1) {
        uVar1 = 0;
        if (plVar7 != (long *)0x0) {
          uVar1 = (ulong)param_1 / (ulong)plVar7;
        }
        unaff_x24 = (long *)((long)param_1 - uVar1 * (long)plVar7);
      }
    }
  }
  func_0x0001072f2a38();
  if (extraout_x9 == 0) {
    *plVar3 = *unaff_x25;
    *unaff_x25 = (long)plVar3;
    *(long **)(extraout_x8_01 + (long)unaff_x24 * 8) = unaff_x25;
    if (*plVar3 != 0) {
      func_0x0001072f1b98();
      lVar5 = extraout_x8_02;
      if ((bool)in_ZR) {
        plVar6 = (long *)((ulong)extraout_x9_00 & extraout_x10);
      }
      else {
        plVar6 = extraout_x9_00;
        if (plVar7 <= extraout_x9_00) {
          func_0x0001072f235c();
          lVar5 = extraout_x8_03;
          plVar6 = extraout_x9_01;
        }
      }
      *(long **)(lVar5 + (long)plVar6 * 8) = plVar3;
    }
  }
  else {
    func_0x0001072f1fe0();
  }
  func_0x0001072f1780();
  FUN_1072e9348();
  plVar6 = plVar3;
LAB_1072f02b0:
  return plVar6 + 9;
}



/* Entry: 1072f0144; end: 1072f02db;  */

long * FUN_1072f0144(long *param_1)

{
  ulong uVar1;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 uVar2;
  long *plVar3;
  long *plVar4;
  long *extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar5;
  long extraout_x9;
  long *extraout_x9_00;
  long *extraout_x9_01;
  ulong extraout_x10;
  long *unaff_x19;
  long *plVar6;
  long *plVar7;
  long *unaff_x24;
  long *unaff_x25;
  
  func_0x0001072f2570();
  func_0x0001072f18cc();
  plVar7 = (long *)unaff_x19[1];
  plVar3 = param_1;
  if (plVar7 != (long *)0x0) {
    func_0x0001072f2a58();
    if ((bool)in_ZR) {
      unaff_x24 = (long *)((ulong)unaff_x25 & (ulong)param_1);
      in_ZR = true;
    }
    else {
      in_NG = (long)param_1 - (long)plVar7 < 0;
      in_ZR = param_1 == plVar7;
      unaff_x24 = param_1;
      if (plVar7 <= param_1) {
        uVar1 = 0;
        if (plVar7 != (long *)0x0) {
          uVar1 = (ulong)param_1 / (ulong)plVar7;
        }
        unaff_x24 = (long *)((long)param_1 - uVar1 * (long)plVar7);
      }
    }
    plVar6 = *(long **)(*unaff_x19 + (long)unaff_x24 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_1072f01e4;
          plVar4 = (long *)plVar6[1];
          in_NG = (long)plVar4 - (long)param_1 < 0;
          in_ZR = plVar4 == param_1;
          if (!(bool)in_ZR) break;
          plVar3 = plVar6 + 2;
          func_0x0001072f2264();
          if (((ulong)plVar3 & 1) != 0) goto LAB_1072f02b0;
        }
        if (((ulong)plVar7 & (ulong)unaff_x25) == 0) {
          plVar4 = (long *)((ulong)plVar4 & (ulong)unaff_x25);
        }
        else if (plVar7 <= plVar4) {
          func_0x0001072f2298();
          plVar4 = extraout_x8;
        }
        in_NG = (long)plVar4 - (long)unaff_x24 < 0;
        in_ZR = plVar4 == unaff_x24;
      } while ((bool)in_ZR);
    }
  }
LAB_1072f01e4:
  func_0x0001072f2064();
  *plVar3 = 0;
  plVar3[1] = (long)param_1;
  func_0x0001072f250c(plVar3 + 2);
  _bzero(plVar3 + 9,0x250);
  FUN_1072f02dc(plVar3 + 9);
  func_0x0001072f230c();
  func_0x0001072f17bc();
  if ((plVar7 == (long *)0x0) || (func_0x0001072f1ac4(), (bool)in_NG)) {
    func_0x0001072f18b4();
    uVar2 = plVar7 == (long *)0x3;
    func_0x0001072f16d8();
    func_0x0001072f27dc();
    func_0x0001072f1d44();
    if ((bool)uVar2) {
      in_ZR = 1;
      unaff_x24 = (long *)(extraout_x8_00 & (ulong)param_1);
    }
    else {
      in_ZR = param_1 == plVar7;
      unaff_x24 = param_1;
      if (plVar7 <= param_1) {
        uVar1 = 0;
        if (plVar7 != (long *)0x0) {
          uVar1 = (ulong)param_1 / (ulong)plVar7;
        }
        unaff_x24 = (long *)((long)param_1 - uVar1 * (long)plVar7);
      }
    }
  }
  func_0x0001072f2a38();
  if (extraout_x9 == 0) {
    *plVar3 = *unaff_x25;
    *unaff_x25 = (long)plVar3;
    *(long **)(extraout_x8_01 + (long)unaff_x24 * 8) = unaff_x25;
    if (*plVar3 != 0) {
      func_0x0001072f1b98();
      lVar5 = extraout_x8_02;
      if ((bool)in_ZR) {
        plVar6 = (long *)((ulong)extraout_x9_00 & extraout_x10);
      }
      else {
        plVar6 = extraout_x9_00;
        if (plVar7 <= extraout_x9_00) {
          func_0x0001072f235c();
          lVar5 = extraout_x8_03;
          plVar6 = extraout_x9_01;
        }
      }
      *(long **)(lVar5 + (long)plVar6 * 8) = plVar3;
    }
  }
  else {
    func_0x0001072f1fe0();
  }
  func_0x0001072f1780();
  FUN_1072e9348();
  plVar6 = plVar3;
LAB_1072f02b0:
  return plVar6 + 9;
}



/* Entry: 1072f02dc; end: 1072f037f;  */

void FUN_1072f02dc(long param_1)

{
  func_0x000104c2f64c();
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 0xf0) = 0;
  *(undefined1 *)(param_1 + 0x128) = 0;
  *(undefined1 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x148) = 0;
  *(undefined1 *)(param_1 + 0x150) = 0;
  *(undefined1 *)(param_1 + 0x168) = 0;
  *(undefined1 *)(param_1 + 0x170) = 0;
  *(undefined1 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1b8) = 0;
  *(undefined1 *)(param_1 + 0x1d0) = 0;
  *(undefined1 *)(param_1 + 0x220) = 0;
  *(undefined1 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  return;
}



/* Entry: 1072f0380; end: 1072f0537;  */

void FUN_1072f0380(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0x40;
    __Znwm();
  }
  else {
    lVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x40);
  }
  func_0x0001072f21b0(&UNK_110d22be8);
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(long *)(lVar1 + 0x28) = param_1;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined4 *)(lVar1 + 0x38) = 0;
  return;
}



/* Entry: 1072f0538; end: 1072f0587;  */

void FUN_1072f0538(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x0001072f1c10();
  func_0x0001072f2b28();
  for (param_3 = param_3 << 2; param_3 != 0; param_3 = param_3 + -4) {
    func_0x0001072f1bcc();
    func_0x000107271c90();
  }
  return;
}



/* Entry: 1072f0588; end: 1072f058b;  */

void FUN_1072f0588(void)

{
  return;
}



/* Entry: 1072f058c; end: 1072f05d3;  */

long FUN_1072f058c(long param_1,long param_2)

{
  long lVar1;
  code *extraout_x8;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    func_0x0001072f2104();
  }
  else {
    func_0x0001072f2698();
    (*extraout_x8)();
    *(long *)(param_1 + 0x18) = lVar1;
  }
  return param_1;
}



/* Entry: 1072f05d4; end: 1072f05e7;  */

void FUN_1072f05d4(void)

{
  FUN_1072f06cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072f05e8; end: 1072f060b;  */

undefined8 FUN_1072f05e8(undefined8 param_1)

{
  FUN_1072f060c(param_1,0);
  return param_1;
}



/* Entry: 1072f060c; end: 1072f0633;  */

void FUN_1072f060c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x000104bfec18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072f0634; end: 1072f06cb;  */

long FUN_1072f0634(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x10);
  lVar1 = param_1;
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 2);
    plVar2 = (long *)*plVar2;
    func_0x0001072ed92c();
    func_0x0001072f1dd8();
  }
  func_0x0001072f2aec();
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1072f06cc; end: 1072f07d7;  */

undefined8 * FUN_1072f06cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099d608;
  func_0x0001072ee0d8(param_1 + 0x16);
  func_0x000107276ba4(param_1 + 1);
  return param_1;
}



/* Entry: 1072f07d8; end: 1072f07eb;  */

void FUN_1072f07d8(void)

{
  func_0x0001072f07ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072f07ec; end: 1072f080f;  */

void FUN_1072f07ec(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int extraout_w10;
  undefined8 uVar4;
  
  puVar1 = param_1;
  func_0x0001072f224c();
  puVar2 = param_1 + 1;
  *puVar1 = &PTR_SUB_11099d648;
  lVar3 = param_1[2];
  uVar4 = *puVar2;
  puVar1[2] = param_1[2];
  puVar1[1] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x0001072f1cd8();
    } while (extraout_w10 != 0);
  }
  puVar1[3] = puVar2[2];
  puVar1[4] = puVar2[3];
  return;
}



/* Entry: 1072f0810; end: 1072f083b;  */

void FUN_1072f0810(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_SUB_11099d648;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x0001072f1cd8();
    } while (extraout_w10 != 0);
  }
  param_2[3] = puVar1[2];
  param_2[4] = puVar1[3];
  return;
}



/* Entry: 1072f083c; end: 1072f104f;  */

void FUN_1072f083c(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  long *plVar3;
  undefined **ppuVar4;
  uint uVar5;
  char cVar6;
  undefined1 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  undefined4 uVar13;
  long *extraout_x8;
  long *extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long lVar14;
  long extraout_x8_10;
  long extraout_x8_11;
  ulong *extraout_x8_12;
  ulong *extraout_x8_13;
  long *plVar15;
  long *plVar16;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  long extraout_x9_06;
  undefined **extraout_x9_07;
  long *extraout_x10;
  long *extraout_x10_00;
  long unaff_x19;
  long lVar17;
  long unaff_x20;
  undefined **ppuVar18;
  undefined *puVar19;
  ulong uVar20;
  long lVar21;
  undefined **ppuVar22;
  undefined *puVar23;
  long lVar24;
  ulong *puVar25;
  undefined **ppuStack_358;
  undefined8 uStack_350;
  undefined1 auStack_348 [8];
  ulong uStack_340;
  uint uStack_338;
  ulong uStack_2b8;
  long alStack_238 [2];
  undefined **ppuStack_228;
  ulong uStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  int iStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined **ppuStack_118;
  ulong uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  
  func_0x0001072f29a0();
  func_0x0001072f1b80();
  func_0x00010726fc00(&ppuStack_118,param_1 + 8);
  if (ppuStack_118 != (undefined **)0x0) {
    func_0x00010726fc3c();
    uStack_350 = uStack_110;
    ppuStack_358 = ppuStack_118;
    if (*ppuStack_118 != (undefined *)0xffffffffffffffff) {
      uStack_110 = 0;
      ppuStack_118 = (undefined **)0x0;
      ppuStack_228 = (undefined **)0x0;
      uStack_220 = 0;
      FUN_1072508cc(&ppuStack_228);
      goto LAB_1072f08b8;
    }
    func_0x00010726fc88();
  }
  func_0x0001072f24ac();
  ppuStack_358 = (undefined **)0x0;
  uStack_350 = 0;
  uStack_110 = 0;
  ppuStack_118 = (undefined **)0x0;
LAB_1072f08b8:
  func_0x0001072f24ac();
  func_0x00010726fc00(&ppuStack_118,unaff_x20 + 8);
  if (ppuStack_118 == (undefined **)0x0) {
    func_0x0001072f24ac();
  }
  else {
    puVar19 = *ppuStack_118;
    func_0x0001072f24ac();
    if (((puVar19 != (undefined *)0xffffffffffffffff) && (*(int *)(unaff_x19 + 0x28) == 0)) &&
       (uVar7 = *(int *)(unaff_x19 + 0x24) == 3, (bool)uVar7)) {
      ppuVar18 = *(undefined ***)(unaff_x20 + 0x20);
      lVar17 = *(long *)(unaff_x19 + 0x18);
      FUN_1072f11ac(auStack_348);
      uStack_338 = uStack_338 | 0x40;
      if (uStack_2b8 == 0) {
        uStack_2b8 = uStack_340;
        if ((uStack_340 & 1) != 0) {
          func_0x0001072f1e94();
          uStack_2b8 = uStack_340;
        }
        FUN_1072f11b4();
      }
      uVar8 = uStack_2b8;
      func_0x0001072f1f28();
      plVar15 = extraout_x8;
      if (!(bool)uVar7) {
        plVar15 = extraout_x10;
      }
      plVar2 = plVar15 + (int)extraout_x8[1];
      ppuVar22 = ppuVar18;
      for (; plVar15 != plVar2; plVar15 = plVar15 + 1) {
        lVar24 = *plVar15;
        lVar9 = uVar8 + 0x10;
        func_0x000100627dec(lVar9,0x1072f11f4);
        uStack_110 = 0;
        ppuStack_118 = &PTR_DAT_1109ee1d0;
        uStack_100 = 0;
        uStack_108 = 0;
        uStack_f0 = 0;
        uStack_f8 = 0;
        uStack_e0 = 0;
        uStack_e8 = 0;
        uStack_d8 = 0;
        puStack_d0 = &DAT_11383d918;
        puStack_c8 = &DAT_11383d918;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_a0 = 0;
        ppuVar4 = &PTR_PTR_11338cea0;
        if (*(undefined ***)(lVar24 + 0x50) != (undefined **)0x0) {
          ppuVar4 = *(undefined ***)(lVar24 + 0x50);
        }
        FUN_1072fdd14(&ppuStack_228,ppuVar4);
        if ((uStack_110 & 1) != 0) {
          func_0x0001072f22bc();
        }
        func_0x0001005f70e4(&puStack_d0,&ppuStack_228);
        func_0x0001072f28d8();
        uStack_108 = uStack_108 | 1;
        if (uStack_c0 == 0) {
          uVar20 = uStack_110;
          if ((uStack_110 & 1) != 0) {
            func_0x0001072f1e94();
          }
          func_0x0001072f1230();
          uStack_c0 = uVar20;
        }
        ppuVar4 = &PTR_PTR_1133b3758;
        if (*(undefined ***)(lVar24 + 0x58) != (undefined **)0x0) {
          ppuVar4 = *(undefined ***)(lVar24 + 0x58);
        }
        if ((*(ulong *)(uStack_c0 + 8) & 1) != 0) {
          func_0x0001072f265c(ppuVar4[2]);
        }
        func_0x0001072f1c9c();
        uStack_108 = uStack_108 | 2;
        if (uStack_b8 == 0) {
          uVar20 = uStack_110;
          if ((uStack_110 & 1) != 0) {
            func_0x0001072f1e94();
          }
          func_0x0001072f1230();
          uStack_b8 = uVar20;
        }
        uVar7 = *(undefined ***)(lVar24 + 0x60) == (undefined **)0x0;
        ppuVar4 = &PTR_PTR_1133b3758;
        if (!(bool)uVar7) {
          ppuVar4 = *(undefined ***)(lVar24 + 0x60);
        }
        if ((*(ulong *)(uStack_b8 + 8) & 1) != 0) {
          func_0x0001072f265c(ppuVar4[2]);
        }
        func_0x0001072f1c9c();
        uStack_a8 = *(undefined8 *)(lVar24 + 0x78);
        uStack_a0 = *(undefined1 *)(lVar24 + 0x88);
        if ((uStack_110 & 1) != 0) {
          func_0x0001072f22bc();
        }
        func_0x0001072f1ee0(*(undefined8 *)(lVar24 + 0x48),&puStack_c8);
        func_0x0001072f1d54();
        for (; puVar19 != (undefined *)0x0; puVar19 = puVar19 + -8) {
          ppuVar22 = ppuVar22 + 1;
          func_0x000100068f84(&uStack_e8);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
        }
        func_0x0001072f1f28();
        plVar16 = extraout_x8_00;
        if (!(bool)uVar7) {
          plVar16 = extraout_x10_00;
        }
        plVar3 = plVar16 + (int)extraout_x8_00[1];
        for (; plVar16 != plVar3; plVar16 = plVar16 + 1) {
          lVar21 = *plVar16;
          puVar10 = &uStack_100;
          func_0x000100627dec(puVar10,0x1072f12ac);
          uVar7 = *(undefined ***)(lVar21 + 0x60) == (undefined **)0x0;
          ppuVar4 = &PTR_PTR_11338cea0;
          if (!(bool)uVar7) {
            ppuVar4 = *(undefined ***)(lVar21 + 0x60);
          }
          FUN_1072fdd14(&ppuStack_228,ppuVar4);
          if ((puVar10[1] & 1) != 0) {
            func_0x0001072f22bc();
          }
          puVar11 = puVar10 + 0xc;
          func_0x0001005f70e4(puVar11,&ppuStack_228);
          func_0x0001072f28d8();
          puVar10[0xf] = *(undefined8 *)(lVar21 + 0x78);
          func_0x0001072f1d54();
          for (; puVar19 != (undefined *)0x0; puVar19 = puVar19 + -8) {
            puVar23 = *ppuVar22;
            puVar11 = puVar10 + 3;
            func_0x000100627dec(puVar11,0x1072f12e8);
            *(int *)(puVar11 + 4) = (int)*(undefined8 *)(puVar23 + 0x58);
            if ((puVar11[1] & 1) != 0) {
              func_0x0001072f22bc();
            }
            func_0x0001072f1c9c(*(undefined8 *)(puVar23 + 0x18));
            ppuVar22 = ppuVar22 + 1;
          }
          func_0x0001072f23dc();
          func_0x0001072f20e8();
          lVar14 = extraout_x9 + 0x948;
          if (!(bool)uVar7) {
            lVar14 = extraout_x8_01;
          }
          func_0x0001072f20c8(lVar14);
          lVar14 = extraout_x9_00 + 0x7c0;
          if (!(bool)uVar7) {
            lVar14 = extraout_x8_02;
          }
          if ((puVar11[1] & 1) != 0) {
            func_0x0001072f265c();
            lVar14 = extraout_x8_03;
          }
          func_0x0001072f1c9c(*(undefined8 *)(lVar14 + 0x10));
          func_0x0001072f23dc();
          func_0x0001072f20e8();
          lVar14 = extraout_x9_01 + 0x948;
          if (!(bool)uVar7) {
            lVar14 = extraout_x8_04;
          }
          func_0x0001072f20c8(lVar14);
          lVar14 = extraout_x9_02 + 0x7c0;
          if (!(bool)uVar7) {
            lVar14 = extraout_x8_05;
          }
          if ((puVar11[1] & 1) != 0) {
            func_0x0001072f265c();
            lVar14 = extraout_x8_06;
          }
          puVar11 = puVar11 + 3;
          func_0x0001072f1ee0(*(undefined8 *)(lVar14 + 0x18));
          func_0x0001072f23dc();
          func_0x0001072f20e8();
          lVar14 = extraout_x9_03 + 0x948;
          if (!(bool)uVar7) {
            lVar14 = extraout_x8_07;
          }
          func_0x0001072f20c8(lVar14);
          lVar14 = extraout_x9_04 + 0x7c0;
          if (!(bool)uVar7) {
            lVar14 = extraout_x8_08;
          }
          if ((puVar11[1] & 1) != 0) {
            func_0x0001072f265c();
            lVar14 = extraout_x8_09;
          }
          puVar11 = puVar11 + 4;
          func_0x0001072f1ee0(*(undefined8 *)(lVar14 + 0x20));
          func_0x0001072f23dc();
          func_0x0001072f20e8();
          lVar14 = extraout_x9_05 + 0x948;
          if (!(bool)uVar7) {
            lVar14 = extraout_x8_10;
          }
          func_0x0001072f20c8(lVar14);
          lVar14 = extraout_x9_06 + 0x7c0;
          if (!(bool)uVar7) {
            lVar14 = extraout_x8_11;
          }
          *(undefined1 *)(puVar11 + 6) = *(undefined1 *)(lVar14 + 0x28);
          *(undefined1 *)((long)puVar10 + 0x8c) = *(undefined1 *)(lVar21 + 0x84);
          puVar10[0x10] = *(undefined8 *)(lVar21 + 0x88);
          *(undefined1 *)((long)puVar10 + 0x8d) = *(undefined1 *)(lVar21 + 0x85);
          *(undefined4 *)(puVar10 + 0x13) = *(undefined4 *)(lVar21 + 0x94);
          ppuVar22 = (undefined **)(lVar21 + 0x48);
          func_0x0001072f2638(*ppuVar22);
          if (!(bool)uVar7) {
            ppuVar22 = extraout_x9_07;
          }
          puVar1 = puVar10 + 9;
          for (lVar21 = (long)*(int *)(lVar21 + 0x50) << 3; lVar21 != 0; lVar21 = lVar21 + -8) {
            puVar19 = *ppuVar22;
            ppuStack_228 = &PTR_DAT_1109ec6f0;
            uStack_220 = 0;
            puStack_218 = &DAT_11383d918;
            puStack_210 = &DAT_11383d918;
            uStack_1f8 = 0;
            iStack_208 = 0;
            func_0x0001001a53d4(&puStack_218,*(ulong *)(puVar19 + 0x10) & 0xfffffffffffffffc,0);
            if (*(int *)(puVar19 + 0x20) - 1U < 2) {
              iStack_208 = *(int *)(puVar19 + 0x20);
            }
            if (*(int *)(puVar19 + 0x34) == 100) {
              uVar20 = *(ulong *)(puVar19 + 0x28);
              if (uStack_1f8._4_4_ != 100) {
                func_0x000107934cec(&ppuStack_228);
                uVar13 = 100;
LAB_1072f0d68:
                uStack_1f8 = CONCAT44(uVar13,(undefined4)uStack_1f8);
                puStack_200 = &DAT_11383d918;
              }
LAB_1072f0d70:
              if ((uStack_220 & 1) != 0) {
                func_0x0001072f22bc();
              }
              func_0x0001001a53d4(&puStack_200,uVar20 & 0xfffffffffffffffc);
            }
            else if (*(int *)(puVar19 + 0x34) == 0x65) {
              uVar20 = *(ulong *)(puVar19 + 0x28);
              if (uStack_1f8._4_4_ != 0x65) {
                func_0x000107934cec(&ppuStack_228);
                uVar13 = 0x65;
                goto LAB_1072f0d68;
              }
              goto LAB_1072f0d70;
            }
            cVar6 = *(char *)((*(ulong *)(puVar19 + 0x18) & 0xfffffffffffffffc) + 0x17);
            if (cVar6 < '\0') {
              if (*(long *)((*(ulong *)(puVar19 + 0x18) & 0xfffffffffffffffc) + 8) != 0)
              goto LAB_1072f0da8;
            }
            else if (cVar6 != '\0') {
LAB_1072f0da8:
              if ((uStack_220 & 1) != 0) {
                func_0x0001072f22bc();
              }
              func_0x0001001a53d4(&puStack_210);
            }
            uVar5 = *(uint *)(puVar10 + 10);
            puVar19 = (undefined *)(ulong)uVar5;
            puVar12 = puVar1;
            func_0x00010006818c();
            uVar7 = uVar5 == (uint)puVar12;
            if ((int)uVar5 < (int)(uint)puVar12) {
              *(int *)(puVar10 + 10) = *(int *)(puVar10 + 10) + 1;
              func_0x0001072f21c0();
              puVar12 = puVar1;
              if (!(bool)uVar7) {
                puVar12 = extraout_x8_12;
              }
              FUN_1072f136c(*puVar12,&ppuStack_228);
            }
            else {
              puVar12 = puVar1;
              func_0x00010563f22c();
              uVar20 = *puVar1;
              if ((uVar20 & 1) != 0) {
                *(int *)(uVar20 - 1) = *(int *)(uVar20 - 1) + 1;
              }
              puVar25 = (ulong *)puVar10[0xb];
              if (puVar25 == (ulong *)0x0) {
                func_0x0001072f2254();
              }
              else {
                func_0x00010b4d80e0(puVar25,0x38);
                puVar12 = puVar25;
              }
              FUN_1072f13d0();
              *(int *)(puVar10 + 10) = *(int *)(puVar10 + 10) + 1;
              func_0x0001072f21c0();
              puVar25 = puVar1;
              if (!(bool)uVar7) {
                puVar25 = extraout_x8_13;
              }
              *puVar25 = (ulong)puVar12;
            }
            func_0x000107934c74(&ppuStack_228);
            ppuVar22 = ppuVar22 + 1;
          }
        }
        ppuVar22 = *(undefined ***)(lVar24 + 0x68);
        uStack_108 = uStack_108 | 4;
        if (uStack_b0 == 0) {
          uVar20 = uStack_110;
          if ((uStack_110 & 1) != 0) {
            func_0x0001072f1e94();
          }
          FUN_1072f13fc();
          uStack_b0 = uVar20;
        }
        ppuVar4 = &PTR_PTR_1133a3898;
        if (ppuVar22 != (undefined **)0x0) {
          ppuVar4 = ppuVar22;
        }
        FUN_1072fdd8c(ppuVar4);
        func_0x000107936658(lVar9,&ppuStack_118);
        func_0x00010793617c(&ppuStack_118);
      }
      *(undefined1 *)(uVar8 + 0x28) = *(undefined1 *)(lVar17 + 0x28);
      FUN_10724bb70(alStack_238,ppuVar18 + 4);
      if (alStack_238[0] != 0) {
        puVar19 = ppuVar18[3];
        FUN_1072f10d8(&ppuStack_228,auStack_348);
        ppuVar18 = (undefined **)0x130;
        __Znwm();
        FUN_1072f10d8(&ppuStack_118,&ppuStack_228);
        *ppuVar18 = (undefined *)&PTR_FUN_11099d6c8;
        ppuVar18[1] = puVar19;
        ppuVar18[3] = (undefined *)0x1;
        ppuVar18[2] = (undefined *)0x10;
        FUN_1072f10d8(ppuVar18 + 4,&ppuStack_118);
        func_0x000107939800(&ppuStack_118);
        ppuStack_118 = ppuVar18;
        func_0x000107939800(&ppuStack_228);
        func_0x0001073ae140(alStack_238[0],&ppuStack_118);
        ppuVar18 = ppuStack_118;
        ppuStack_118 = (undefined **)0x0;
        if (ppuVar18 != (undefined **)0x0) {
          func_0x0001072f2970();
        }
      }
      func_0x00010724bcd8(alStack_238);
      func_0x000107939800(auStack_348);
    }
  }
  func_0x000107270b00(&ppuStack_358);
  return;
}



/* Entry: 1072f1050; end: 1072f1087;  */

long FUN_1072f1050(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_11099d6f8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1072f1088; end: 1072f10d7;  */

undefined ** FUN_1072f1088(void)

{
  return &PTR_DAT_11099d6f8;
}



/* Entry: 1072f10d8; end: 1072f1143;  */

void FUN_1072f10d8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072f1c10();
  func_0x0001079397c8();
  if (param_1 != unaff_x20) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(unaff_x20 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      func_0x0001072f1bcc();
      func_0x00010793a888();
    }
    else {
      func_0x0001072f1bcc();
      func_0x00010793a858();
    }
  }
  return;
}



/* Entry: 1072f1144; end: 1072f1147;  */

undefined8 * FUN_1072f1144(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099d6c8;
  func_0x000107939800(param_1 + 4);
  return param_1;
}



/* Entry: 1072f1148; end: 1072f115b;  */

void FUN_1072f1148(void)

{
  FUN_1072f1180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072f115c; end: 1072f117f;  */

void FUN_1072f115c(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x0001072f117c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,param_1 + 0x20);
  return;
}



/* Entry: 1072f1180; end: 1072f11ab;  */

undefined8 * FUN_1072f1180(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099d6c8;
  func_0x000107939800(param_1 + 4);
  return param_1;
}



/* Entry: 1072f11ac; end: 1072f11b3;  */

undefined8 * FUN_1072f11ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_DAT_1109ee310;
  param_1[1] = 0;
  puVar1 = param_1;
  func_0x000107947304();
  _bzero(puVar1 + 0xc,0xb0);
  return param_1;
}



/* Entry: 1072f11b4; end: 1072f136b;  */

void FUN_1072f11b4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  if (param_1 == 0) {
    func_0x0001072f27f4();
  }
  else {
    func_0x0001072f2008();
  }
  func_0x0001072f21b0(&UNK_1109ee2b0);
  *(long *)(lVar1 + 0x20) = param_1;
  *(undefined4 *)(lVar1 + 0x2c) = 0;
  *(undefined1 *)(lVar1 + 0x28) = 0;
  return;
}



/* Entry: 1072f136c; end: 1072f13cf;  */

long FUN_1072f136c(long param_1,long param_2)

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
      func_0x00010793508c(param_1);
    }
    else {
      func_0x00010793505c(param_1);
    }
  }
  return param_1;
}



/* Entry: 1072f13d0; end: 1072f13fb;  */

undefined8 * FUN_1072f13d0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  *param_1 = &PTR_DAT_1109ec6f0;
  param_1[1] = param_2;
  param_1[2] = &DAT_11383d918;
  param_1[3] = &DAT_11383d918;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  if (param_1 != param_3) {
    uVar1 = param_1[1];
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = param_3[1];
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      func_0x00010793508c(param_1);
    }
    else {
      func_0x00010793505c(param_1);
    }
  }
  return param_1;
}



/* Entry: 1072f13fc; end: 1072f146b;  */

void FUN_1072f13fc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  if (param_1 == 0) {
    func_0x0001072f27f4();
  }
  else {
    func_0x0001072f2008();
  }
  func_0x0001072f21b0(&UNK_1109ed400);
  *(long *)(lVar1 + 0x20) = param_1;
  *(undefined4 *)(lVar1 + 0x28) = 0;
  return;
}



/* Entry: 1072f146c; end: 1072f15c3;  */

void FUN_1072f146c(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  long extraout_x8_00;
  long *plVar4;
  long *extraout_x9;
  long *extraout_x9_00;
  long *extraout_x9_01;
  ulong extraout_x10;
  ulong uVar5;
  ulong extraout_x10_00;
  long *extraout_x11;
  long *extraout_x11_00;
  long *plVar6;
  long *plVar7;
  
  plVar4 = param_1;
  plVar3 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar4 = param_2;
  }
  plVar7 = (long *)param_1[1];
  if (plVar7 > param_2 || param_2 == plVar7) {
    if (plVar7 <= param_2) {
      return;
    }
    func_0x0001072f1ff0((float)(ulong)param_1[3],(int)param_1[4]);
    if ((plVar7 < (long *)0x3) || (((ulong)plVar7 & (long)plVar7 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x0001072f16f0();
    }
    if (param_2 <= plVar4) {
      param_2 = plVar4;
    }
    if (plVar7 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      FUN_1072f15c4(param_1,0);
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm(lVar2);
    FUN_1072f15c4(param_1,lVar2);
    plVar4 = (long *)0x0;
    param_1[1] = (long)param_2;
    while (param_2 != plVar4) {
      func_0x0001072f1f90();
      plVar4 = extraout_x9;
    }
    if (param_1[2] != 0) {
      func_0x0001072f2a04();
      func_0x0001072f29f0();
      lVar2 = extraout_x8;
      plVar4 = extraout_x9_00;
      uVar5 = extraout_x10;
      plVar3 = extraout_x11;
      while (plVar7 = plVar4, plVar4 = (long *)*plVar7, plVar4 != (long *)0x0) {
        plVar6 = (long *)plVar4[1];
        if (((ulong)param_2 & uVar5) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar5);
        }
        else if (param_2 <= plVar6) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar6 / (ulong)param_2;
          }
          plVar6 = (long *)((long)plVar6 - uVar1 * (long)param_2);
        }
        if (plVar6 != plVar3) {
          if (*(long *)(lVar2 + (long)plVar6 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar6 * 8) = plVar7;
            plVar3 = plVar6;
          }
          else {
            *plVar7 = *plVar4;
            func_0x0001072f189c();
            lVar2 = extraout_x8_00;
            plVar4 = extraout_x9_01;
            uVar5 = extraout_x10_00;
            plVar3 = extraout_x11_00;
          }
        }
      }
    }
    return;
  }
  func_0x000104bd35f4();
  lVar2 = *plVar4;
  *plVar4 = (long)plVar3;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072f15c4; end: 1072f15db;  */

void FUN_1072f15c4(long *param_1,long param_2)

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



/* Entry: 1072f15dc; end: 1072f160f;  */

void FUN_1072f15dc(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x0001072f1d28();
  if (unaff_x20 != 0) {
    func_0x0001072f25e4();
    if ((bool)in_ZR) {
      func_0x0001072ed92c(unaff_x20 + 0x10);
    }
    func_0x0001072f1dd8();
  }
  return;
}



/* Entry: 1072f1610; end: 1072f162f;  */

void FUN_1072f1610(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001072f1620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  if (plVar1[3] != 0) {
    func_0x0001072bb7b4();
    plVar1[2] = 0;
    lVar3 = plVar1[1];
    for (lVar2 = 0; lVar3 != lVar2; lVar2 = lVar2 + 1) {
      *(undefined8 *)(*plVar1 + lVar2 * 8) = 0;
    }
    plVar1[3] = 0;
  }
  return;
}



/* Entry: 1072f1630; end: 1072f1683;  */

void FUN_1072f1630(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1[3] != 0) {
    func_0x0001072bb7b4(param_1,param_1[2]);
    param_1[2] = 0;
    lVar2 = param_1[1];
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*param_1 + lVar1 * 8) = 0;
    }
    param_1[3] = 0;
  }
  return;
}



/* Entry: 1072f1684; end: 1072f169b;  */

void FUN_1072f1684(long *param_1,long param_2)

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



/* Entry: 1072f169c; end: 1072f16c3;  */

long FUN_1072f169c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1072f16c4; end: 1072f2bb3;  */

void FUN_1072f16c4(void)

{
  long lVar1;
  long in_stack_00000090;
  undefined1 auStack_38 [24];
  
  lVar1 = in_stack_00000090 + 0x960;
  func_0x00010786b288(auStack_38,lVar1,&stack0x00000680,&stack0x000002b0);
  func_0x00010786970c();
  *(long *)(in_stack_00000090 + 0x970) = lVar1;
  return;
}



/* Entry: 1072f2bb4; end: 1072f2edf;  */

void FUN_1072f2bb4(undefined4 *param_1,long *param_2)

{
  undefined **ppuVar1;
  code *pcVar2;
  long *plVar3;
  undefined **ppuVar4;
  bool bVar5;
  long unaff_x22;
  long lVar6;
  long alStack_190 [2];
  long alStack_180 [3];
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [56];
  undefined4 auStack_118 [2];
  long lStack_110;
  char cStack_d8;
  long alStack_a0 [8];
  byte bStack_60;
  long lStack_58;
  
  plVar3 = alStack_190;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  switch(*(undefined4 *)((long)param_2 + 0x1c)) {
  case 0:
    *param_1 = 7;
    *(undefined1 *)(param_1 + 0x10) = 1;
    break;
  case 1:
    auStack_118[0] = 6;
    lStack_110 = CONCAT71(lStack_110._1_7_,(char)param_2[2]);
    goto code_r0x0001072f2dec;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (alStack_180,param_2[2] & 0xfffffffffffffffc);
    FUN_107268798(auStack_118,alStack_180);
    func_0x0001072f2efc();
    func_0x000104c3323c(auStack_118);
    param_2 = alStack_180;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_2);
    break;
  case 3:
    lStack_110 = param_2[2];
    auStack_118[0] = 5;
    goto code_r0x0001072f2dec;
  case 4:
    lStack_110 = param_2[2];
    auStack_118[0] = 4;
    goto code_r0x0001072f2dec;
  case 5:
    lStack_110 = param_2[2];
    auStack_118[0] = 3;
code_r0x0001072f2dec:
    func_0x0001072f2efc();
    param_2 = (long *)auStack_118;
    func_0x000104c3323c(param_2);
    break;
  case 6:
    FUN_107289330(alStack_a0);
    bVar5 = false;
    ppuVar1 = (undefined **)param_2[2];
    if (*(int *)((long)param_2 + 0x1c) != 6) {
      ppuVar1 = &PTR_PTR_1132342d0;
    }
    FUN_1072f2ee0(ppuVar1);
    for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
      FUN_1072f2bb4(auStack_118,*param_2);
      if (cStack_d8 == '\x01') {
        FUN_1072d7f0c(alStack_a0,auStack_118);
      }
      else {
        bVar5 = true;
      }
      FUN_107267ed0(auStack_118);
      param_2 = param_2 + 1;
    }
    if (bVar5) {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 0x10) = 0;
    }
    else {
      FUN_1072d8034(param_1,alStack_a0);
    }
    param_2 = alStack_a0;
    func_0x000104c33108(param_2);
    break;
  default:
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 0x10) = 0;
    break;
  case 8:
    FUN_107269c1c(alStack_190);
    bVar5 = false;
    ppuVar1 = (undefined **)param_2[2];
    if (*(int *)((long)param_2 + 0x1c) != 8) {
      ppuVar1 = &PTR_PTR_113234300;
    }
    FUN_1072f2ee0(ppuVar1);
    for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
      lVar6 = *param_2;
      ppuVar4 = *(undefined ***)(lVar6 + 0x20);
      ppuVar1 = &PTR_PTR_113234288;
      if (ppuVar4 != (undefined **)0x0) {
        ppuVar1 = ppuVar4;
      }
      FUN_1072f2bb4(alStack_a0,ppuVar1);
      if (bStack_60 == 1) {
        FUN_107262e9c(auStack_150,*(ulong *)(lVar6 + 0x18) & 0xfffffffffffffffc);
        if ((bStack_60 & 1) == 0) {
          func_0x000104bdc2c8();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1072f2e64);
          (*pcVar2)();
        }
        FUN_1072d807c(auStack_118,auStack_150,alStack_a0);
        FUN_10729d364(auStack_168,alStack_190,auStack_118);
        FUN_1072684c8(auStack_118);
        func_0x000104c2f714(auStack_150);
      }
      else {
        bVar5 = true;
      }
      FUN_107267ed0(alStack_a0);
      param_2 = param_2 + 1;
    }
    if (bVar5) {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 0x10) = 0;
    }
    else {
      FUN_1072d80b8(param_1,alStack_190);
    }
    func_0x000104c335c0(alStack_190);
    param_2 = plVar3;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    func_0x000104c335c0(alStack_190);
    __Unwind_Resume(param_2);
    return;
  }
  return;
}



/* Entry: 1072f2ee0; end: 1072f2f07;  */

void FUN_1072f2ee0(void)

{
  return;
}



/* Entry: 1072f2f08; end: 1072f2f2f;  */

undefined8 FUN_1072f2f08(undefined8 param_1)

{
  FUN_1072f2f30(param_1,0);
  return param_1;
}



/* Entry: 1072f2f30; end: 1072f2f47;  */

void FUN_1072f2f30(long *param_1,long param_2)

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



/* Entry: 1072f2f48; end: 1072f3027;  */

undefined8 *
FUN_1072f2f48(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_11099d788;
  param_1[1] = param_2;
  uVar2 = *param_3;
  param_1[3] = param_3[1];
  param_1[2] = uVar2;
  *param_3 = 0;
  param_3[1] = 0;
  param_1[5] = 0;
  param_1[4] = param_4;
  func_0x0001073af260();
  FUN_10725b034(param_1 + 6);
  param_1[8] = param_1;
  puVar1 = (undefined8 *)param_1[6];
  uVar2 = *puVar1;
  param_1[10] = puVar1[1];
  param_1[9] = uVar2;
  if (puVar1[1] != 0) {
    do {
      func_0x0001072f4970();
    } while (extraout_w10 != 0);
  }
  param_1[0xb] = param_1 + 6;
  param_1[0xc] = 0;
  FUN_10726ed14(param_1 + 0xd);
  param_1[0xf] = param_1;
  return param_1;
}



/* Entry: 1072f3028; end: 1072f34e3;  */

/* WARNING: Possible PIC construction at 0x0001072f3148: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001072f3470: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001072f3384: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001072f314c) */
/* WARNING: Removing unreachable block (ram,0x0001072f3160) */
/* WARNING: Removing unreachable block (ram,0x0001072f3164) */
/* WARNING: Removing unreachable block (ram,0x0001072f316c) */
/* WARNING: Removing unreachable block (ram,0x0001072f31a4) */
/* WARNING: Removing unreachable block (ram,0x0001072f31a8) */
/* WARNING: Removing unreachable block (ram,0x0001072f31b0) */
/* WARNING: Removing unreachable block (ram,0x0001072f31bc) */
/* WARNING: Removing unreachable block (ram,0x0001072f323c) */
/* WARNING: Removing unreachable block (ram,0x0001072f3250) */
/* WARNING: Removing unreachable block (ram,0x0001072f3254) */
/* WARNING: Removing unreachable block (ram,0x0001072f325c) */
/* WARNING: Removing unreachable block (ram,0x0001072f32b0) */
/* WARNING: Removing unreachable block (ram,0x0001072f32b4) */
/* WARNING: Removing unreachable block (ram,0x0001072f32bc) */
/* WARNING: Removing unreachable block (ram,0x0001072f32ec) */
/* WARNING: Removing unreachable block (ram,0x0001072f3364) */
/* WARNING: Removing unreachable block (ram,0x0001072f3368) */
/* WARNING: Removing unreachable block (ram,0x0001072f31d0) */
/* WARNING: Removing unreachable block (ram,0x0001072f31e4) */
/* WARNING: Removing unreachable block (ram,0x0001072f3388) */
/* WARNING: Removing unreachable block (ram,0x0001072f3474) */
/* WARNING: Removing unreachable block (ram,0x0001072f3494) */
/* WARNING: Removing unreachable block (ram,0x0001072f34a4) */
/* WARNING: Removing unreachable block (ram,0x0001072f34dc) */

long * FUN_1072f3028(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  long *unaff_x19;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_570 [16];
  long alStack_560 [4];
  undefined1 auStack_540 [48];
  undefined1 auStack_510 [224];
  undefined1 auStack_430 [328];
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  long alStack_1a0 [17];
  undefined1 uStack_118;
  undefined4 uStack_100;
  undefined1 uStack_f8;
  undefined1 auStack_f0 [152];
  undefined8 uStack_58;
  
  func_0x0001072f4a68();
  plVar4 = (long *)*param_2;
  plVar5 = (long *)0x0;
  uStack_58 = extraout_x8;
  if (plVar4 != (long *)0x0) {
    if (unaff_x19[4] != 0) {
      func_0x00010740ec5c(alStack_1a0,unaff_x19[4]);
      uVar6 = *(uint *)(alStack_1a0[0] + 0x10);
      uVar7 = *(uint *)(alStack_1a0[0] + 0x14);
      func_0x0001074119b0(alStack_1a0);
      NEON_ucvtf((ulong)uVar6);
      NEON_ucvtf((ulong)uVar7);
      uVar1 = *param_3;
      uVar2 = param_3[1];
      _bzero(alStack_1a0,0xe0);
      uStack_100 = 1;
      uStack_f8 = 1;
      FUN_107298794(&uStack_2e8,uVar1,uVar2);
      func_0x000107299c44(auStack_f0,&uStack_2e8);
      uStack_118 = 1;
      FUN_1072994b4(auStack_510,alStack_1a0);
      FUN_1072981bc(&uStack_2e8);
      FUN_1072997a8(alStack_1a0);
      if (param_2[1] != 0) {
        do {
          func_0x0001072f4970();
        } while (extraout_w10 != 0);
      }
      if (unaff_x19[0xe] != 0) {
        do {
          func_0x0001072f4970();
        } while (extraout_w10_00 != 0);
      }
      uStack_2e0 = 0;
      uStack_2e8 = 0;
      alStack_1a0[1] = 0;
      alStack_1a0[0] = 0;
      plVar4 = alStack_1a0;
      plVar5 = unaff_x19;
      goto SUB_10725b1d4;
    }
    alStack_1a0[1] = 0;
    alStack_1a0[0] = 0;
    alStack_1a0[2] = 0;
    (**(code **)(*plVar4 + 0x10))(plVar4,alStack_1a0);
    plVar5 = alStack_1a0;
    FUN_107298098();
  }
  func_0x0001072f4988(uStack_58);
  if (extraout_x9 == extraout_x8_00) {
    return plVar5;
  }
  ___stack_chk_fail();
  lVar3 = alStack_1a0[0];
  alStack_1a0[0] = 0;
  if (lVar3 != 0) {
    func_0x0001072f4a30();
  }
  func_0x00010724bcd8(auStack_540);
  func_0x0001072f4388(auStack_430);
  FUN_10724ae28(auStack_570);
  plVar4 = alStack_560;
SUB_10725b1d4:
  func_0x00010725c0a0();
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return plVar5;
}



/* Entry: 1072f34e4; end: 1072f3557;  */

undefined8 FUN_1072f34e4(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_1072f3624(param_1 + 0x20);
  func_0x00010725c0a0();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 1072f3558; end: 1072f359b;  */

void FUN_1072f3558(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x8;
  __Znwm();
  uVar2 = 1;
  __Znwm();
  *puVar1 = uVar2;
  *param_1 = puVar1;
  return;
}



/* Entry: 1072f359c; end: 1072f360b;  */

undefined8 * FUN_1072f359c(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_11099d788;
  plVar1 = param_1 + 0xd;
  if (*plVar1 != 0) {
    func_0x000107250860();
  }
  FUN_1072508a0(plVar1);
  FUN_1072508cc(plVar1);
  FUN_10725b238(param_1 + 0xb);
  FUN_10724ae28(param_1 + 9);
  FUN_10724b54c(param_1 + 6);
  FUN_1072f3bf4(param_1 + 5);
  func_0x00010725b6e0(param_1 + 2);
  return param_1;
}



/* Entry: 1072f360c; end: 1072f360f;  */

undefined8 * FUN_1072f360c(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_11099d788;
  plVar1 = param_1 + 0xd;
  if (*plVar1 != 0) {
    func_0x000107250860();
  }
  FUN_1072508a0(plVar1);
  FUN_1072508cc(plVar1);
  FUN_10725b238(param_1 + 0xb);
  FUN_10724ae28(param_1 + 9);
  FUN_10724b54c(param_1 + 6);
  FUN_1072f3bf4(param_1 + 5);
  func_0x00010725b6e0(param_1 + 2);
  return param_1;
}



/* Entry: 1072f3610; end: 1072f3623;  */

void FUN_1072f3610(void)

{
  FUN_1072f359c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072f3624; end: 1072f364b;  */

long FUN_1072f3624(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1072f364c; end: 1072f3793;  */

void FUN_1072f364c(long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  long *plVar2;
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined4 auStack_140 [6];
  undefined4 uStack_128;
  undefined **ppuStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_f8;
  undefined1 uStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d0 [112];
  
  plVar2 = (long *)(param_1 + 0x10);
  while (plVar2 = (long *)*plVar2, plVar2 != (long *)0x0) {
    uStack_128 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_118 = 0;
    ppuStack_120 = &PTR_FUN_110996720;
    uStack_f8 = 0;
    uStack_f4 = 1;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f0 = 0;
    auStack_140[0] = param_2;
    uStack_100 = param_2;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_158,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_170,plVar2 + 2)
    ;
    puVar1 = auStack_140;
    FUN_107273f9c(puVar1,auStack_158,auStack_170);
    FUN_10726e6c0(auStack_d0,puVar1);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_170);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_158);
    FUN_107262330(auStack_140);
    func_0x0001072f49b4();
    func_0x0001072f4a00();
    func_0x00010743fa44();
    func_0x0001072f49b4();
    func_0x0001072f4a00();
    func_0x00010743fa9c();
    FUN_107262330(auStack_d0);
  }
  return;
}



/* Entry: 1072f3794; end: 1072f3b4b;  */

long * FUN_1072f3794(long *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long *unaff_x25;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  plVar6 = param_1 + 3;
  func_0x000100102e7c();
  plVar13 = (long *)param_1[1];
  if (plVar13 != (long *)0x0) {
    uVar12 = (long)plVar13 - 1;
    if (((ulong)plVar13 & uVar12) == 0) {
      unaff_x25 = (long *)(uVar12 & (ulong)plVar6);
    }
    else {
      unaff_x25 = plVar6;
      if (plVar13 <= plVar6) {
        uVar5 = 0;
        if (plVar13 != (long *)0x0) {
          uVar5 = (ulong)plVar6 / (ulong)plVar13;
        }
        unaff_x25 = (long *)((long)plVar6 - uVar5 * (long)plVar13);
      }
    }
    plVar11 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar11 != (long *)0x0) {
      do {
        while( true ) {
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_1072f3854;
          plVar3 = (long *)plVar11[1];
          if (plVar3 != plVar6) break;
          uVar5 = (ulong)(plVar11 + 2);
          func_0x0001000e107c(uVar5,param_2);
          if ((uVar5 & 1) != 0) {
            return plVar11;
          }
        }
        if (((ulong)plVar13 & uVar12) == 0) {
          plVar3 = (long *)((ulong)plVar3 & uVar12);
        }
        else if (plVar13 <= plVar3) {
          uVar5 = 0;
          if (plVar13 != (long *)0x0) {
            uVar5 = (ulong)plVar3 / (ulong)plVar13;
          }
          plVar3 = (long *)((long)plVar3 - uVar5 * (long)plVar13);
        }
      } while (plVar3 == unaff_x25);
    }
  }
LAB_1072f3854:
  plVar11 = param_1 + 2;
  plVar3 = (long *)0x30;
  __Znwm();
  uStack_58 = 0;
  *plVar3 = 0;
  plVar3[1] = (long)plVar6;
  plStack_68 = plVar3;
  plStack_60 = plVar11;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar3 + 2,param_2);
  *(undefined1 *)(plVar3 + 5) = *(undefined1 *)(param_2 + 0x18);
  uStack_58 = CONCAT71(uStack_58._1_7_,1);
  if ((plVar13 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar13)) goto LAB_1072f3a98;
  uVar12 = 1;
  if ((long *)0x2 < plVar13) {
    uVar12 = (ulong)(((ulong)plVar13 & (long)plVar13 - 1U) != 0);
  }
  plVar4 = (long *)(uVar12 | (long)plVar13 << 1);
  plVar13 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar4 <= plVar13) {
    plVar4 = plVar13;
  }
  if ((long)plVar4 - 1U == 0) {
    plVar4 = (long *)0x2;
  }
  else if (((ulong)plVar4 & (long)plVar4 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar13 = (long *)param_1[1];
  if (plVar13 < plVar4) {
LAB_1072f390c:
    if ((ulong)plVar4 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1072f3b38);
      (*pcVar1)();
    }
    lVar2 = (long)plVar4 << 3;
    __Znwm(lVar2);
    FUN_1072f3b4c(param_1,lVar2);
    param_1[1] = (long)plVar4;
    lVar2 = *param_1;
    for (plVar13 = (long *)0x0; plVar4 != plVar13; plVar13 = (long *)((long)plVar13 + 1)) {
      *(undefined8 *)(lVar2 + (long)plVar13 * 8) = 0;
    }
    plVar7 = (long *)*plVar11;
    plVar13 = plVar4;
    if (plVar7 != (long *)0x0) {
      plVar8 = (long *)plVar7[1];
      uVar5 = (long)plVar4 - 1;
      uVar12 = 0;
      if (plVar4 != (long *)0x0) {
        uVar12 = (ulong)plVar8 / (ulong)plVar4;
      }
      plVar9 = plVar8;
      if (plVar4 <= plVar8) {
        plVar9 = (long *)((long)plVar8 - uVar12 * (long)plVar4);
      }
      if (((ulong)plVar4 & uVar5) == 0) {
        plVar9 = (long *)((ulong)plVar8 & uVar5);
      }
      *(long **)(lVar2 + (long)plVar9 * 8) = plVar11;
      while (plVar8 = plVar7, plVar7 = (long *)*plVar8, plVar7 != (long *)0x0) {
        plVar10 = (long *)plVar7[1];
        if (((ulong)plVar4 & uVar5) == 0) {
          plVar10 = (long *)((ulong)plVar10 & uVar5);
        }
        else if (plVar4 <= plVar10) {
          uVar12 = 0;
          if (plVar4 != (long *)0x0) {
            uVar12 = (ulong)plVar10 / (ulong)plVar4;
          }
          plVar10 = (long *)((long)plVar10 - uVar12 * (long)plVar4);
        }
        if (plVar10 != plVar9) {
          if (*(long *)(lVar2 + (long)plVar10 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar10 * 8) = plVar8;
            plVar9 = plVar10;
          }
          else {
            *plVar8 = *plVar7;
            *plVar7 = **(undefined8 **)(lVar2 + (long)plVar10 * 8);
            **(long **)(lVar2 + (long)plVar10 * 8) = (long)plVar7;
            plVar7 = plVar8;
          }
        }
      }
    }
  }
  else if (plVar4 < plVar13) {
    plVar7 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar13 < (long *)0x3) || (((ulong)plVar13 & (long)plVar13 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar7) {
      plVar7 = (long *)(1L << (-LZCOUNT((long)plVar7 - 1) & 0x3fU));
    }
    if (plVar4 <= plVar7) {
      plVar4 = plVar7;
    }
    if (plVar4 < plVar13) {
      if (plVar4 != (long *)0x0) goto LAB_1072f390c;
      FUN_1072f3b4c(param_1,0);
      param_1[1] = 0;
      plVar13 = (long *)0x0;
    }
    else {
      plVar13 = (long *)param_1[1];
    }
  }
  if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
    unaff_x25 = (long *)((long)plVar13 - 1U & (ulong)plVar6);
  }
  else {
    unaff_x25 = plVar6;
    if (plVar13 <= plVar6) {
      uVar12 = 0;
      if (plVar13 != (long *)0x0) {
        uVar12 = (ulong)plVar6 / (ulong)plVar13;
      }
      unaff_x25 = (long *)((long)plVar6 - uVar12 * (long)plVar13);
    }
  }
LAB_1072f3a98:
  lVar2 = *param_1;
  plVar6 = *(long **)(lVar2 + (long)unaff_x25 * 8);
  if (plVar6 == (long *)0x0) {
    *plVar3 = *plVar11;
    *plVar11 = (long)plVar3;
    *(long **)(lVar2 + (long)unaff_x25 * 8) = plVar11;
    if (*plVar3 != 0) {
      plVar6 = *(long **)(*plVar3 + 8);
      if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (long)plVar13 - 1U);
      }
      else if (plVar13 <= plVar6) {
        uVar12 = 0;
        if (plVar13 != (long *)0x0) {
          uVar12 = (ulong)plVar6 / (ulong)plVar13;
        }
        plVar6 = (long *)((long)plVar6 - uVar12 * (long)plVar13);
      }
      *(long **)(lVar2 + (long)plVar6 * 8) = plVar3;
    }
  }
  else {
    *plVar3 = *plVar6;
    *plVar6 = (long)plVar3;
  }
  plStack_68 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_1072f3b64(&plStack_68);
  return plVar3;
}



/* Entry: 1072f3b4c; end: 1072f3b63;  */

void FUN_1072f3b4c(long *param_1,long param_2)

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



/* Entry: 1072f3b64; end: 1072f3ba3;  */

long * FUN_1072f3b64(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x10);
    }
    func_0x0001072f49a4();
  }
  return param_1;
}



/* Entry: 1072f3ba4; end: 1072f3bf3;  */

long * FUN_1072f3ba4(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 2);
    plVar2 = (long *)*plVar2;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1);
    func_0x0001072f49a4();
  }
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1072f3bf4; end: 1072f3c17;  */

undefined8 FUN_1072f3bf4(undefined8 param_1)

{
  FUN_1072f3c18(param_1,0);
  return param_1;
}



/* Entry: 1072f3c18; end: 1072f3c2f;  */

void FUN_1072f3c18(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_1072f2f08(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072f3c30; end: 1072f3c6b;  */

void FUN_1072f3c30(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1072f2f08(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072f3c6c; end: 1072f3cc3;  */

undefined8 * FUN_1072f3c6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
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
  FUN_1072994b4(param_1 + 6,param_2 + 6);
  uVar1 = param_2[0x22];
  param_1[0x23] = param_2[0x23];
  param_1[0x22] = uVar1;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_1[0x24] = param_2[0x24];
  FUN_1072f3cc4(param_1 + 0x25,param_2 + 0x25);
  return param_1;
}



/* Entry: 1072f3cc4; end: 1072f3d13;  */

long FUN_1072f3cc4(long param_1,long param_2)

{
  long lVar1;
  code *extraout_x8;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    func_0x0001072f4a54();
    (*extraout_x8)();
  }
  else {
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 1072f3d14; end: 1072f3d17;  */

undefined8 * FUN_1072f3d14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099d7d8;
  func_0x0001072f4388(param_1 + 4);
  return param_1;
}



/* Entry: 1072f3d18; end: 1072f3d2b;  */

void FUN_1072f3d18(void)

{
  FUN_1072f3e10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072f3d2c; end: 1072f3e0f;  */

undefined8 * FUN_1072f3d2c(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x9;
  long extraout_x9_00;
  code *pcVar5;
  undefined8 auStack_1a0 [41];
  undefined1 auStack_58 [24];
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar3 = auStack_1a0;
  puVar4 = auStack_1a0;
  func_0x0001072f4988(param_1);
  pcVar5 = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    pcVar5 = *(code **)(*plVar1 + ((ulong)pcVar5 & 0xffffffff));
  }
  uStack_38 = extraout_x9;
  FUN_1072f3c6c(auStack_1a0,extraout_x8 + 0x20);
  puStack_40 = (undefined8 *)0x0;
  puVar2 = (undefined8 *)0x150;
  __Znwm();
  *puVar2 = &PTR_FUN_11099d818;
  FUN_1072f3c6c(puVar2 + 1,auStack_1a0);
  puStack_40 = puVar2;
  (*pcVar5)(plVar1,auStack_58);
  func_0x000107283e00(auStack_58);
  func_0x0001072f4388();
  func_0x0001072f4988(uStack_38);
  if (extraout_x9_00 == extraout_x8_00) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x000107283e00(auStack_58);
  func_0x0001072f4388();
  func_0x0001072f4968();
  *puVar4 = &PTR_FUN_11099d7d8;
  func_0x0001072f4388(puVar4 + 4);
  return puVar4;
}



/* Entry: 1072f3e10; end: 1072f3e3b;  */

undefined8 * FUN_1072f3e10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099d7d8;
  func_0x0001072f4388(param_1 + 4);
  return param_1;
}



/* Entry: 1072f3e3c; end: 1072f3e3f;  */

undefined8 * FUN_1072f3e3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099d818;
  func_0x0001072f4388(param_1 + 1);
  return param_1;
}



/* Entry: 1072f3e40; end: 1072f3e53;  */

void FUN_1072f3e40(void)

{
  FUN_1072f404c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072f3e54; end: 1072f3e8b;  */

undefined8 FUN_1072f3e54(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x150;
  __Znwm(0x150);
  FUN_1072f4078();
  return uVar1;
}



/* Entry: 1072f3e8c; end: 1072f3eaf;  */

undefined8 * FUN_1072f3e8c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_2 = &PTR_FUN_11099d818;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  param_2[6] = *(undefined8 *)(param_1 + 0x30);
  param_2[5] = uVar5;
  param_2[4] = uVar4;
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  FUN_1072994b4(param_2 + 7,param_1 + 0x38);
  FUN_107283e34(param_2 + 0x23,param_1 + 0x118);
  func_0x0001072f4334(param_2 + 0x26,param_1 + 0x130);
  return param_2;
}



/* Entry: 1072f3eb0; end: 1072f4013;  */

void FUN_1072f3eb0(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  code *pcVar5;
  long extraout_x9;
  long unaff_x19;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x0001072f4a68();
  pcVar5 = *(code **)(param_1 + 8);
  plVar2 = (long *)(param_2 + ((long)*(ulong *)(param_1 + 0x10) >> 1));
  if ((*(ulong *)(param_1 + 0x10) & 1) != 0) {
    pcVar5 = *(code **)(*plVar2 + ((ulong)pcVar5 & 0xffffffff));
  }
  puVar4 = (undefined1 *)(unaff_x19 + 0x18);
  (*pcVar5)(auStack_a8,plVar2,puVar4,unaff_x19 + 0x38);
  FUN_107284284(auStack_b8,unaff_x19 + 0x118);
  iVar1 = (int)unaff_x19 + 0x118;
  FUN_1072842e4();
  if (iVar1 != 0) {
    plVar2 = (long *)(unaff_x19 + 0x118);
    func_0x00010728433c();
    func_0x0001072f4334(auStack_90,unaff_x19 + 0x130);
    FUN_1072f40f4(&uStack_70,auStack_a8);
    puVar3 = (undefined8 *)0x40;
    __Znwm();
    func_0x0001072f49f0();
    *puVar3 = extraout_x8_00;
    FUN_1072f3cc4(puVar3 + 1,auStack_90);
    *(undefined8 *)(unaff_x19 + 0x30) = uStack_68;
    *(undefined8 *)(unaff_x19 + 0x28) = uStack_70;
    *(undefined8 *)(unaff_x19 + 0x38) = uStack_60;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    puVar4 = auStack_58;
    (**(code **)(*plVar2 + 0x10))(plVar2,puVar4);
    func_0x0001006393ec(auStack_58);
    func_0x0001072f430c(auStack_90);
  }
  func_0x0001072f49d0();
  func_0x00010729d51c();
  func_0x0001072f4988(extraout_x8);
  if (extraout_x9 == extraout_x8_01) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001006393ec(auStack_58);
  func_0x0001072f430c(auStack_90);
  func_0x0001072f49d0();
  func_0x00010729d51c(auStack_a8);
  func_0x0001072f4968();
  func_0x0001072f4a20(puVar4);
  func_0x0001072f49e0();
  return;
}



/* Entry: 1072f4014; end: 1072f403f;  */

void FUN_1072f4014(undefined8 param_1,undefined8 param_2)

{
  func_0x0001072f4a20(param_2,param_1,&PTR_DAT_11099d8f8);
  func_0x0001072f49e0();
  return;
}



/* Entry: 1072f4040; end: 1072f404b;  */

undefined ** FUN_1072f4040(void)

{
  return &PTR_DAT_11099d8f8;
}



/* Entry: 1072f404c; end: 1072f4077;  */

undefined8 * FUN_1072f404c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099d818;
  func_0x0001072f4388(param_1 + 1);
  return param_1;
}



/* Entry: 1072f4078; end: 1072f40f3;  */

undefined8 * FUN_1072f4078(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_11099d818;
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = param_2[4];
  param_1[6] = param_2[5];
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  param_1[1] = uVar1;
  FUN_1072994b4(param_1 + 7,param_2 + 6);
  FUN_107283e34(param_1 + 0x23,param_2 + 0x22);
  func_0x0001072f4334(param_1 + 0x26,param_2 + 0x25);
  return param_1;
}



/* Entry: 1072f40f4; end: 1072f412f;  */

undefined8 * FUN_1072f40f4(undefined8 *param_1,long *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1072f4130(param_1,*param_2,param_2[1],(param_2[1] - *param_2) / 0x1b0);
  return param_1;
}



/* Entry: 1072f4130; end: 1072f41af;  */

void FUN_1072f4130(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x00010729bd94(param_1,param_4);
    FUN_10729bd34(param_1,param_2,param_3,param_4);
  }
  uStack_38 = 1;
  FUN_1072f41b0(&uStack_40);
  return;
}



/* Entry: 1072f41b0; end: 1072f41db;  */

long FUN_1072f41b0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x00010729d540(param_1);
  }
  return param_1;
}



/* Entry: 1072f41dc; end: 1072f41df;  */

void FUN_1072f41dc(undefined8 *param_1)

{
  undefined8 extraout_x8;
  
  func_0x0001072f49f0();
  *param_1 = extraout_x8;
  FUN_1072f430c(param_1 + 1);
  return;
}



/* Entry: 1072f41e0; end: 1072f41f3;  */

void FUN_1072f41e0(void)

{
  FUN_1072f4298();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072f41f4; end: 1072f422b;  */

undefined8 FUN_1072f41f4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x40;
  __Znwm(0x40);
  FUN_1072f42bc();
  return uVar1;
}



/* Entry: 1072f422c; end: 1072f425f;  */

void FUN_1072f422c(long param_1,undefined8 *param_2)

{
  undefined8 extraout_x8;
  
  func_0x0001072f49f0();
  *param_2 = extraout_x8;
  func_0x0001072f4334(param_2 + 1);
  FUN_1072f40f4(param_2 + 5,param_1 + 0x28);
  return;
}



/* Entry: 1072f4260; end: 1072f428b;  */

void FUN_1072f4260(undefined8 param_1,undefined8 param_2)

{
  func_0x0001072f4a20(param_2,param_1,&PTR_DAT_11099d8e8);
  func_0x0001072f49e0();
  return;
}



/* Entry: 1072f428c; end: 1072f4297;  */

undefined ** FUN_1072f428c(void)

{
  return &PTR_DAT_11099d8e8;
}



/* Entry: 1072f4298; end: 1072f42bb;  */

void FUN_1072f4298(undefined8 *param_1)

{
  undefined8 extraout_x8;
  
  func_0x0001072f49f0();
  *param_1 = extraout_x8;
  FUN_1072f430c(param_1 + 1);
  return;
}


