/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1086d634c; end: 1086d635f;  */

void FUN_1086d634c(void)

{
  func_0x0001086d632c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086d6360; end: 1086d6397;  */

undefined8 FUN_1086d6360(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x80;
  __Znwm(0x80);
  FUN_1086d65c8();
  return uVar1;
}



/* Entry: 1086d6398; end: 1086d63bb;  */

void FUN_1086d6398(long param_1,undefined8 param_2)

{
  func_0x0001086dbf2c(param_2,param_1 + 8);
  FUN_1086c5e18();
  return;
}



/* Entry: 1086d63bc; end: 1086d6593;  */

void FUN_1086d63bc(long param_1,long *param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x8_01;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  undefined8 uStack_58;
  long lStack_50;
  
  lVar1 = param_1;
  func_0x000100864738();
  plVar3 = *(long **)(lVar1 + 0x68);
  if ((int)param_2[3] == 0) {
    func_0x000107c27994(&uStack_b0,param_1 + 0x50);
    ppuStack_78 = (undefined **)uStack_a8;
    uStack_80 = uStack_b0;
    lStack_70 = lStack_a0;
    func_0x0001086dac08(*(undefined4 *)(param_1 + 0x38));
    uStack_58 = 1;
    func_0x0001086da03c();
    (**(code **)(*plVar3 + 0x168))
              (plVar3,&uStack_80,*(undefined1 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x3c),
               param_1 + 8);
    func_0x0001086da684();
  }
  else {
    lVar4 = *(long *)(plVar3[0x1a] + 0x100);
    uStack_a8 = *(undefined8 *)(param_1 + 0x10);
    uStack_b0 = *(undefined8 *)(param_1 + 8);
    if (*(long *)(param_1 + 0x10) != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10 != 0);
    }
    lStack_a0 = *param_2;
    uStack_98 = (undefined4)param_2[1];
    uStack_8c = *(undefined8 *)((long)param_2 + 0x14);
    uStack_94 = (undefined4)*(undefined8 *)((long)param_2 + 0xc);
    uStack_90 = (undefined4)((ulong)*(undefined8 *)((long)param_2 + 0xc) >> 0x20);
    func_0x000107c28150();
    lVar5 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar1;
    func_0x0001086da438();
    lVar6 = *(long *)(lVar5 + 0x70);
    uStack_80 = 0x1086d65e8;
    ppuStack_78 = &PTR_LAB_110a64fd8;
    func_0x0001086da334();
    func_0x0001086d9e2c();
    lVar2 = extraout_x8;
    if (extraout_x9 != 0) {
      do {
        func_0x000107c325ec();
        lVar2 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    uVar7 = *(undefined8 *)(lVar2 + 0x10);
    *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
    *(undefined8 *)(lVar4 + 0x10) = uVar7;
    ppuVar8 = *(undefined ***)(lVar2 + 0x24);
    uVar7 = *(undefined8 *)(lVar2 + 0x1c);
    *(undefined ***)(lVar4 + 0x24) = ppuVar8;
    *(undefined8 *)(lVar4 + 0x1c) = uVar7;
    lStack_70 = lVar4;
    lStack_50 = lVar1;
    func_0x0001086db87c(lVar5 + 0x48);
    func_0x0001086d9be4(ppuStack_78);
    func_0x0001086da250();
    if (lVar6 == 0) {
      func_0x0001086da0e0();
      uStack_80 = uVar7;
      ppuStack_78 = ppuVar8;
      if (extraout_x8_01 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_00 != 0);
      }
      func_0x000107c3265c();
      func_0x0001086db884();
      func_0x0001086da9e0();
    }
    func_0x0001086daa20();
    uStack_80 = *(undefined8 *)(param_1 + 0x48);
    ppuStack_78 = (undefined **)CONCAT71(ppuStack_78._1_7_,1);
    FUN_1086d62bc(*(undefined8 *)(param_1 + 0x30),param_1 + 0x50,&uStack_80);
  }
  func_0x000100864c10();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001086da75c();
    func_0x000107c27e74();
    func_0x0001086daa20();
    func_0x0001086d9ff8();
    func_0x0001086da3f0();
    func_0x0001086da290();
    func_0x0001086d9b48();
    return;
  }
  return;
}



/* Entry: 1086d6594; end: 1086d65bb;  */

void FUN_1086d6594(undefined8 param_1)

{
  func_0x0001086da3f0();
  func_0x0001086da290(param_1,&PTR_DAT_110a64ff0);
  func_0x0001086d9b48();
  return;
}



/* Entry: 1086d65bc; end: 1086d65c7;  */

undefined ** FUN_1086d65bc(void)

{
  return &PTR_DAT_110a64ff0;
}



/* Entry: 1086d65c8; end: 1086d661b;  */

void FUN_1086d65c8(void)

{
  func_0x0001086dbf2c();
  FUN_1086c5e18();
  return;
}



/* Entry: 1086d661c; end: 1086d6657;  */

void FUN_1086d661c(long param_1)

{
  if (*(int *)(param_1 + 0x18) == 1) {
    return;
  }
  func_0x00010563ab98();
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000104be35c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086d6658; end: 1086d665b;  */

void FUN_1086d6658(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1086d665c; end: 1086d668f;  */

void FUN_1086d665c(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x00010086ab64();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x00010086abd4(uVar1);
  return;
}



/* Entry: 1086d6690; end: 1086d66a7;  */

void FUN_1086d6690(void)

{
  func_0x0001086d9d58();
  return;
}



/* Entry: 1086d66a8; end: 1086d66df;  */

void FUN_1086d66a8(long param_1)

{
  param_1 = param_1 + 8;
  func_0x00010054ffe4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1086d66e0; end: 1086d66f3;  */

void FUN_1086d66e0(void)

{
  func_0x0001086d6cf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086d66f4; end: 1086d66ff;  */

void FUN_1086d66f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001086d9c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1086d6700; end: 1086d6713;  */

void FUN_1086d6700(void)

{
  FUN_1086d69a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086d6714; end: 1086d68c3;  */

undefined *** FUN_1086d6714(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined1 *puVar6;
  undefined ***pppuVar7;
  long extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long unaff_x20;
  long lVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined4 auStack_c0 [4];
  code *pcStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined ***pppuStack_80;
  undefined ***pppuStack_60;
  undefined8 uStack_58;
  
  pppuVar4 = &ppuStack_d0;
  pppuVar5 = &ppuStack_d0;
  func_0x0001086d99d0();
  lVar8 = *(long *)(param_1 + 0x18);
  ppuStack_c8 = *(undefined ***)(param_1 + 0x10);
  ppuStack_d0 = *(undefined ***)(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10 != 0);
  }
  FUN_1086d6a18(auStack_c0);
  pppuVar2 = &ppuStack_a8;
  FUN_1086d6b5c(pppuVar2,param_3);
  func_0x000107c28150();
  lVar8 = *(long *)(lVar8 + 0x10);
  pppuVar3 = pppuVar2;
  func_0x000107c3270c();
  lVar9 = *(long *)(lVar8 + 0x70);
  ppuStack_90 = (undefined **)FUN_1086d69dc;
  ppuStack_88 = &PTR_FUN_110a650b0;
  func_0x000107c326e0();
  ppuVar11 = ppuStack_c8;
  ppuVar10 = ppuStack_d0;
  pppuVar3[1] = ppuStack_c8;
  *pppuVar3 = ppuStack_d0;
  ppuStack_d0 = (undefined **)0x0;
  ppuStack_c8 = (undefined **)0x0;
  FUN_1086d6a18(pppuVar3 + 2,auStack_c0);
  FUN_1086d6b5c(pppuVar3 + 5,&ppuStack_a8);
  pppuVar7 = &ppuStack_90;
  pppuStack_80 = pppuVar3;
  pppuStack_60 = pppuVar2;
  func_0x000107c28154(lVar8 + 0x48);
  func_0x0001086d9d10(ppuStack_88);
  func_0x000107c326b0();
  if (lVar9 == 0) {
    func_0x000107c3261c();
    ppuStack_90 = ppuVar10;
    ppuStack_88 = ppuVar11;
    if (extraout_x8 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c3265c();
    pppuVar7 = &ppuStack_90;
    (*extraout_x8_00)();
    func_0x000107c27e74(&ppuStack_90);
  }
  FUN_1086d6c78();
  func_0x000107c325c0(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c27e74(&ppuStack_90);
    FUN_1086d6c78();
    func_0x0001086d9ff8();
    func_0x0001086db620();
    func_0x000100864738();
    auStack_c0[0] = SUB84(pppuVar7,0);
    uVar1 = *(undefined8 *)((long)pppuVar5 + 0x18);
    ppuStack_c8 = *(undefined ***)((long)pppuVar5 + 0x10);
    ppuStack_d0 = *(undefined ***)((long)pppuVar5 + 8);
    if (*(long *)((long)pppuVar5 + 0x10) != 0) {
      do {
        func_0x000107c325f8();
        auStack_c0[0] = SUB84(pppuVar7,0);
      } while (extraout_w10_01 != 0);
    }
    func_0x000107c28150();
    func_0x0001086da310();
    func_0x0001086da1e0();
    pcStack_b0 = FUN_1086d6cc8;
    ppuStack_a8 = &PTR_DAT_110a650c8;
    uStack_98 = ppuStack_c8;
    ppuStack_a0 = ppuStack_d0;
    ppuStack_d0 = (undefined **)0x0;
    ppuStack_c8 = (undefined **)0x0;
    ppuStack_90 = (undefined **)CONCAT44(ppuStack_90._4_4_,auStack_c0[0]);
    pppuStack_80 = pppuVar4;
    func_0x0001086d9ad8();
    func_0x0001086d9850();
    func_0x0001086da01c();
    if (unaff_x20 == 0) {
      func_0x0001086d990c();
      if (extraout_x8_01 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_02 != 0);
      }
      func_0x000107c3265c();
      func_0x0001086da218();
      func_0x0001086da044();
    }
    func_0x0001086db93c();
    func_0x000100864c10();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001086d9af0();
      func_0x0001086db93c();
      func_0x0001086d9ff8();
      puVar6 = (undefined1 *)pppuVar5;
      func_0x0001086dbe58(&PTR_DAT_110a65078);
      func_0x000107c2814c(puVar6 + 0x18);
      func_0x000104be3c30(uVar1);
      return (undefined ***)(undefined1 *)pppuVar5;
    }
    return pppuVar5;
  }
  return pppuVar4;
}



/* Entry: 1086d68c4; end: 1086d69a3;  */

long FUN_1086d68c4(long param_1)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  long extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  long lVar2;
  
  func_0x0001086db620();
  func_0x000100864738();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  if (*(long *)(param_1 + 0x10) != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10 != 0);
  }
  func_0x000107c28150();
  func_0x0001086da310();
  func_0x0001086da1e0();
  lVar2 = *(long *)(unaff_x21 + 0x70);
  func_0x0001086d9ad8();
  func_0x0001086d9850();
  func_0x0001086da01c();
  if (lVar2 == 0) {
    func_0x0001086d990c();
    if (extraout_x8 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c3265c();
    func_0x0001086da218();
    func_0x0001086da044();
  }
  func_0x0001086db93c();
  func_0x000100864c10();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001086d9af0();
    func_0x0001086db93c();
    func_0x0001086d9ff8();
    lVar2 = param_1;
    func_0x0001086dbe58(&PTR_DAT_110a65078);
    func_0x000107c2814c(lVar2 + 0x18);
    func_0x000104be3c30(uVar1);
    return param_1;
  }
  return param_1;
}



/* Entry: 1086d69a4; end: 1086d69db;  */

long FUN_1086d69a4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001086dbe58(&PTR_DAT_110a65078);
  func_0x000107c2814c(lVar1 + 0x18);
  func_0x000104be3c30();
  return param_1;
}



/* Entry: 1086d69dc; end: 1086d69f3;  */

void FUN_1086d69dc(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001086d69f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,puVar1 + 2,puVar1 + 5);
  return;
}



/* Entry: 1086d69f4; end: 1086d6a13;  */

void FUN_1086d69f4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1086d6c78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086d6a14; end: 1086d6a17;  */

void FUN_1086d6a14(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1086d6a18; end: 1086d6b33;  */

void FUN_1086d6a18(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  ulong uVar5;
  long *unaff_x19;
  long lVar6;
  long *plStack_70;
  long **pplStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long *plStack_50;
  long lStack_48;
  
  func_0x000107c32648();
  lVar6 = *param_2;
  lVar1 = param_2[1];
  func_0x0001086daa90();
  lVar2 = lVar1 - lVar6;
  if (lVar2 != 0) {
    uVar5 = lVar2 / 0x5f8;
    if (0x2ae3da78a0d673 < uVar5) {
      FUN_1086caed4();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1086d6b00);
      (*pcVar3)();
    }
    plVar4 = unaff_x19 + 2;
    func_0x0001086caf64();
    *unaff_x19 = (long)plVar4;
    unaff_x19[1] = (long)plVar4;
    unaff_x19[2] = (long)(plVar4 + uVar5 * 0xbf);
    pplStack_68 = &plStack_50;
    plStack_60 = &lStack_48;
    uStack_58 = 0;
    plStack_70 = unaff_x19 + 2;
    plStack_50 = plVar4;
    for (; lStack_48 = (long)plVar4, lVar6 != lVar1; lVar6 = lVar6 + 0x5f8) {
      func_0x0001086daecc();
      func_0x000107c28b7c();
      FUN_1086cacd0((long)plVar4 + 0x5d8,lVar6 + 0x5d8);
      plVar4 = (long *)(lStack_48 + 0x5f8);
    }
    uStack_58 = 1;
    FUN_1086cb074(&plStack_70);
    unaff_x19[1] = (long)plVar4;
  }
  func_0x0001086d9ee4();
  FUN_1086d6b34();
  return;
}



/* Entry: 1086d6b34; end: 1086d6b5b;  */

void FUN_1086d6b34(void)

{
  uint extraout_w8;
  
  func_0x000107c32764();
  if ((extraout_w8 & 1) == 0) {
    func_0x0001086cae44();
  }
  return;
}



/* Entry: 1086d6b5c; end: 1086d6bef;  */

void FUN_1086d6b5c(undefined8 param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  ulong uVar4;
  long extraout_x8;
  long *unaff_x19;
  
  func_0x000107c32648();
  lVar1 = *param_2;
  func_0x0001086daa90(param_2[1]);
  lVar1 = extraout_x8 - lVar1;
  if (lVar1 != 0) {
    uVar4 = lVar1 >> 4;
    if (uVar4 >> 0x3c != 0) {
      FUN_1086d6bf0();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1086d6be4);
      (*pcVar2)();
    }
    plVar3 = unaff_x19 + 2;
    FUN_1086d6bfc();
    *unaff_x19 = (long)plVar3;
    unaff_x19[1] = (long)plVar3;
    unaff_x19[2] = (long)(plVar3 + uVar4 * 2);
    _memmove();
    unaff_x19[1] = (long)plVar3 + lVar1;
  }
  func_0x0001086d9ee4();
  FUN_1086d6c38();
  return;
}



/* Entry: 1086d6bf0; end: 1086d6bfb;  */

void FUN_1086d6bf0(void)

{
  func_0x0001086d9d1c();
  FUN_1086d6c1c();
  return;
}



/* Entry: 1086d6bfc; end: 1086d6c1b;  */

void FUN_1086d6bfc(void)

{
  FUN_1086d6c1c();
  return;
}



/* Entry: 1086d6c1c; end: 1086d6c37;  */

void FUN_1086d6c1c(undefined8 param_1,ulong param_2)

{
  ulong extraout_x8;
  
  if (param_2 >> 0x3c == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 4);
    return;
  }
  func_0x000104bd35f4();
  func_0x000107c32764();
  if ((extraout_x8 & 1) == 0) {
    FUN_1086d6c60();
  }
  return;
}



/* Entry: 1086d6c38; end: 1086d6c5f;  */

void FUN_1086d6c38(void)

{
  uint extraout_w8;
  
  func_0x000107c32764();
  if ((extraout_w8 & 1) == 0) {
    FUN_1086d6c60();
  }
  return;
}



/* Entry: 1086d6c60; end: 1086d6c77;  */

void FUN_1086d6c60(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086d6c78; end: 1086d6cc7;  */

long FUN_1086d6c78(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107c32730();
  func_0x0001086d6ca4();
  func_0x0001086cae20(unaff_x19 + 0x10);
  lVar1 = unaff_x19;
  func_0x00010054ffe4();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1086d6cc8; end: 1086d6cfb;  */

void FUN_1086d6cc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001086d97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))
            (*(long **)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20));
  return;
}



/* Entry: 1086d6cfc; end: 1086d6d1f;  */

void FUN_1086d6cfc(long param_1)

{
  func_0x000107c32694();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 1086d6d20; end: 1086d6d5f;  */

void FUN_1086d6d20(undefined8 param_1)

{
  undefined1 auStack_410 [992];
  
  FUN_1086d6d60(auStack_410,param_1);
  func_0x000107c32738();
  FUN_1086d6d60();
  func_0x0001086db1bc();
  return;
}



/* Entry: 1086d6d60; end: 1086d6d7f;  */

void FUN_1086d6d60(void)

{
  func_0x0001086dbf54();
  FUN_1086d6d80();
  return;
}



/* Entry: 1086d6d80; end: 1086d6da7;  */

void FUN_1086d6d80(long param_1)

{
  func_0x000107c327c4();
  *(undefined1 *)(param_1 + 0x3d0) = 0;
  FUN_1086d6da8();
  return;
}



/* Entry: 1086d6da8; end: 1086d6dbb;  */

void FUN_1086d6da8(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x3d0) == '\x01') {
    func_0x000100656cbc();
    *(undefined1 *)(param_1 + 0x3d0) = 1;
    return;
  }
  return;
}



/* Entry: 1086d6dbc; end: 1086d6e33;  */

void FUN_1086d6dbc(void)

{
  undefined1 auStack_410 [992];
  
  func_0x000107c32648();
  func_0x0001086d6fe4(auStack_410);
  func_0x000107c327a8();
  func_0x0001086d6fe4();
  FUN_1086d6e34();
  func_0x0001086db1bc();
  func_0x0001086db97c();
  return;
}



/* Entry: 1086d6e34; end: 1086d6ea7;  */

void FUN_1086d6e34(void)

{
  long extraout_x8;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c325fc();
  func_0x0001086daa90();
  while ((((*(byte *)(unaff_x20 + 0x3d8) & 1) != 0 || ((*(byte *)(unaff_x19 + 0x3d8) & 1) != 0)) &&
         (func_0x000107c327d0(), extraout_x8 != extraout_x9))) {
    func_0x000107c288b8();
    FUN_1086d6ea8();
    func_0x000107c28920();
  }
  func_0x0001086d9ee4();
  func_0x0001086d6fbc();
  return;
}



/* Entry: 1086d6ea8; end: 1086d6eff;  */

long FUN_1086d6ea8(long param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001086da600();
  if ((bool)in_CY) {
    FUN_1086d6f00();
  }
  else {
    func_0x0001086d6edc();
    param_1 = unaff_x20 + 0x3d0;
  }
  *(long *)(unaff_x19 + 8) = param_1;
  return param_1 + -0x3d0;
}



/* Entry: 1086d6f00; end: 1086d6f73;  */

void FUN_1086d6f00(void)

{
  undefined8 uStack_48;
  
  func_0x000107c32678();
  func_0x0001086db480();
  func_0x000107c291bc();
  func_0x0001086da2bc();
  func_0x000107c291c8();
  func_0x000107c28918(uStack_48);
  func_0x000107c326ec();
  func_0x000107c291c0();
  func_0x0001086db474();
  func_0x000107c291dc();
  return;
}



/* Entry: 1086d6f74; end: 1086d6f7f;  */

void FUN_1086d6f74(long param_1)

{
  long unaff_x19;
  
  func_0x0001086d9d1c();
  func_0x0001086da870();
  func_0x0001086db4b0();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x3d0;
    func_0x000107c288d0();
  }
  return;
}



/* Entry: 1086d6f80; end: 1086d6f8f;  */

void FUN_1086d6f80(long param_1)

{
  long unaff_x19;
  
  func_0x0001086da870();
  func_0x0001086db4b0();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x3d0;
    func_0x000107c288d0();
  }
  return;
}



/* Entry: 1086d6f90; end: 1086d7003;  */

void FUN_1086d6f90(long param_1)

{
  long unaff_x19;
  
  func_0x0001086db4b0();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x3d0;
    func_0x000107c288d0();
  }
  return;
}



/* Entry: 1086d7004; end: 1086d7033;  */

void FUN_1086d7004(long param_1)

{
  func_0x000107c327c4();
  *(undefined1 *)(param_1 + 0x3d0) = 0;
  FUN_1086d7034();
  return;
}



/* Entry: 1086d7034; end: 1086d7047;  */

void FUN_1086d7034(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x3d0) == '\x01') {
    func_0x000107c291e0();
    *(undefined1 *)(param_1 + 0x3d0) = 1;
    return;
  }
  return;
}



/* Entry: 1086d7048; end: 1086d7063;  */

void FUN_1086d7048(long param_1)

{
  func_0x000107c291e0();
  *(undefined1 *)(param_1 + 0x3d0) = 1;
  return;
}



/* Entry: 1086d7064; end: 1086d70b3;  */

void FUN_1086d7064(long *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined1 auStack_f0 [40];
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined1 auStack_a0 [40];
  undefined1 auStack_78 [24];
  
  lVar9 = *param_1;
  if (*(char *)(lVar9 + 0x160) == '\x01') {
    if (param_1[1] != 0) {
      func_0x000107c3265c();
      func_0x0001086db7d0();
    }
    plVar7 = (long *)param_1[2];
    if (plVar7 != (long *)0x0) {
      puVar5 = auStack_f0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      ppuStack_c8 = &PTR_FUN_110a609a8;
      uStack_c0 = 0;
      uStack_a8 = 0x16c;
      uVar3 = 0x1400bb;
      if (*(int *)(lVar9 + 0x30) != 2) {
        uVar3 = 0x1400ba;
      }
      uVar1 = 0x1400b9;
      if (*(int *)(lVar9 + 0x30) != 0) {
        uVar1 = uVar3;
      }
      lVar10 = lVar9;
      func_0x0001088438f4(lVar9,uVar1);
      FUN_108659af8();
      func_0x000107c2884c(auStack_a0,lVar10);
      func_0x0001088438fc();
      func_0x000107c2884c(auStack_f0,auStack_a0);
      func_0x0001088439a4();
      func_0x000108843924();
      func_0x00010884391c();
      lVar10 = 0;
      plVar11 = (long *)(lVar9 + 0xa0);
      plVar8 = plVar11;
      while (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0) {
        lVar4 = 0;
        if (*(int *)(plVar8 + 2) != 2) {
          lVar4 = plVar8[3];
        }
        lVar10 = lVar4 + lVar10;
      }
      uStack_b8 = 0;
      uStack_b0 = 0;
      ppuStack_c8 = &PTR_FUN_110a609a8;
      uStack_c0 = 0;
      func_0x0001088438c4(0x16d);
      func_0x0001088438f4();
      FUN_108659af8();
      puVar6 = auStack_a0;
      func_0x000107c28af0(puVar6,puVar5);
      func_0x0001088438fc();
      ppuStack_c8 = (undefined **)(lVar10 * 1000000);
      func_0x000108843894(*(undefined8 *)(*plVar7 + 0x18));
      while (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0) {
        uStack_c0 = 0;
        uStack_b8 = 0;
        uStack_b0 = 0;
        ppuStack_c8 = &PTR_FUN_110a609a8;
        func_0x0001088438c4(0x16e);
        func_0x0001088438f4();
        lVar4 = plVar11[2];
        func_0x000107c278b8(auStack_78,PTR_DAT_113268c60);
        lVar10 = 0xbe;
        if ((int)lVar4 == 2) {
          lVar10 = 0xbf;
        }
        lVar2 = 0xbd;
        if ((int)lVar4 != 0) {
          lVar2 = lVar10;
        }
        func_0x000107c28824(puVar6,auStack_78,(&PTR_s_success_113269028)[lVar2]);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
        uVar3 = 0x30011;
        if (*(int *)(lVar9 + 0xb8) != 0) {
          uVar3 = 0x30012;
        }
        FUN_108659af8(puVar6,uVar3);
        puVar5 = auStack_a0;
        func_0x000107c28af0(puVar5,puVar6);
        func_0x0001088438fc();
        ppuStack_c8 = (undefined **)(plVar11[3] * 1000000);
        func_0x000108843894(*(undefined8 *)(*plVar7 + 0x18));
        puVar6 = puVar5;
      }
      func_0x000107c2882c(auStack_a0);
      return;
    }
  }
  return;
}



/* Entry: 1086d70b4; end: 1086d70bb;  */

void FUN_1086d70b4(void)

{
  return;
}



/* Entry: 1086d70bc; end: 1086d70db;  */

void FUN_1086d70bc(undefined8 *param_1)

{
  func_0x0001086da65c();
  *param_1 = &PTR_FUN_110a650f0;
  return;
}



/* Entry: 1086d70dc; end: 1086d70f7;  */

void FUN_1086d70dc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110a650f0;
  return;
}



/* Entry: 1086d70f8; end: 1086d711b;  */

void FUN_1086d70f8(void)

{
  func_0x0001086d9e04();
  func_0x0001086dbea4();
  func_0x0001086dbd28();
  func_0x0001086da03c();
  return;
}



/* Entry: 1086d711c; end: 1086d7143;  */

void FUN_1086d711c(undefined8 param_1)

{
  func_0x0001086da3f0();
  func_0x0001086da290(param_1,&PTR_DAT_110a65150);
  func_0x0001086d9b48();
  return;
}



/* Entry: 1086d7144; end: 1086d714f;  */

undefined ** FUN_1086d7144(void)

{
  return &PTR_DAT_110a65150;
}



/* Entry: 1086d7150; end: 1086d72cb;  */

void FUN_1086d7150(undefined1 *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
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
  
  uVar1 = param_3;
  FUN_1086d72cc(auStack_68);
  func_0x0001086d7308(auStack_b8,param_2);
  func_0x0001086d7328();
  if (((cStack_48 == '\x01') && ((bStack_70 & 1) != 0)) && ((uVar1 & 1) != 0)) {
    FUN_10883e734(auStack_e8,auStack_b8,param_4);
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



/* Entry: 1086d72cc; end: 1086d736b;  */

void FUN_1086d72cc(undefined1 *param_1,long param_2)

{
  long lVar1;
  
  if ((((*(byte *)(param_2 + 0x10) >> 1 & 1) != 0) &&
      (*(int *)(*(long *)(param_2 + 0x20) + 0x28) == 1)) &&
     (lVar1 = *(long *)(*(long *)(param_2 + 0x20) + 0x20), (*(byte *)(lVar1 + 0x10) & 1) != 0)) {
    FUN_10865ecd8(param_1,*(undefined8 *)(lVar1 + 0x18));
    func_0x0001086b0f18();
    return;
  }
  *param_1 = 0;
  param_1[0x20] = 0;
  return;
}



/* Entry: 1086d736c; end: 1086d7387;  */

void FUN_1086d736c(long param_1)

{
  FUN_1086d7388();
  *(undefined1 *)(param_1 + 0x58) = 1;
  return;
}



/* Entry: 1086d7388; end: 1086d73b7;  */

void FUN_1086d7388(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x0001086da928();
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  uVar6 = *(undefined8 *)(param_2 + 0x40);
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  uVar7 = *(undefined8 *)(param_2 + 0x41);
  *(undefined8 *)(param_1 + 0x49) = *(undefined8 *)(param_2 + 0x49);
  *(undefined8 *)(param_1 + 0x41) = uVar7;
  *(undefined8 *)(param_1 + 0x40) = uVar6;
  *(undefined8 *)(param_1 + 0x38) = uVar5;
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}



/* Entry: 1086d73b8; end: 1086d73f7;  */

void FUN_1086d73b8(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    func_0x000107c2a2cc();
  }
  return;
}



/* Entry: 1086d73f8; end: 1086d7403;  */

void FUN_1086d73f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a65170;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1086d7404; end: 1086d7417;  */

void FUN_1086d7404(void)

{
  FUN_1086d73f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086d7418; end: 1086d741f;  */

void FUN_1086d7418(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001086d9c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1086d7420; end: 1086d745b;  */

long FUN_1086d7420(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001086dbe58(&PTR_FUN_110a651c0);
  func_0x000107c288a4(lVar1 + 0x30);
  func_0x000107c286e0(param_1 + 0x20);
  func_0x0001086dad74();
  return param_1;
}



/* Entry: 1086d745c; end: 1086d746f;  */

void FUN_1086d745c(void)

{
  FUN_1086d7420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086d7470; end: 1086d74e3;  */

void FUN_1086d7470(long param_1)

{
  long *plVar1;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_30;
  
  plVar1 = *(long **)(param_1 + 0x20);
  func_0x000107c27994(auStack_60,param_1 + 8);
  func_0x0001086db12c();
  uStack_30 = uStack_50;
  func_0x0001086dac08();
  func_0x0001086dad8c(*(undefined8 *)(*plVar1 + 0x48));
  func_0x0001086da498();
  func_0x0001086da03c();
  FUN_1086a63e4(*(undefined8 *)(param_1 + 0x30),0);
  return;
}



/* Entry: 1086d74e4; end: 1086d74f3;  */

void FUN_1086d74e4(long param_1,ulong param_2)

{
  ulong uVar1;
  code *extraout_x8;
  ulong uStack_28;
  
  uVar1 = param_2 & 0xffffffff | 0x100000000;
  uStack_28 = uVar1;
  func_0x0001086b08ac(*(undefined8 *)(param_1 + 0x30));
  if ((uVar1 >> 0x20 & 1) == 0) {
    func_0x0001086b0d38();
  }
  else {
    func_0x0001086b0d44();
    func_0x0001086b07ec();
    FUN_108843ae8(&uStack_28);
    func_0x0001086b07dc();
    func_0x0001086b0978();
  }
  func_0x0001086b0ddc();
  func_0x0001086b0bec();
  func_0x0001086b069c();
  (*extraout_x8)();
  func_0x0001086b0824();
  func_0x0001086b0970();
  return;
}



/* Entry: 1086d74f4; end: 1086d751b;  */

long FUN_1086d74f4(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1086d751c; end: 1086d7527;  */

void FUN_1086d751c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a65208;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1086d7528; end: 1086d753b;  */

void FUN_1086d7528(void)

{
  FUN_1086d751c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086d753c; end: 1086d7543;  */

void FUN_1086d753c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001086d9c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1086d7544; end: 1086d7577;  */

long FUN_1086d7544(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001086dbe58(&PTR_FUN_110a65258);
  func_0x000107c288a4(lVar1 + 0x20);
  func_0x0001086dad74();
  return param_1;
}



/* Entry: 1086d7578; end: 1086d758b;  */

void FUN_1086d7578(void)

{
  FUN_1086d7544();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086d758c; end: 1086d75a7;  */

/* WARNING: Removing unreachable block (ram,0x00010883ebe4) */

void FUN_1086d758c(long param_1)

{
  long *plVar1;
  undefined1 auStack_90 [64];
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined8 uStack_28;
  
  plVar1 = *(long **)(param_1 + 0x20);
  uStack_28 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  ppuStack_50 = &PTR_FUN_110a609a8;
  uStack_48 = 0;
  uStack_30 = 0x175;
  func_0x000107c28b38(&ppuStack_50,0);
  func_0x000107c2884c(auStack_90,&ppuStack_50);
  (**(code **)(*plVar1 + 0x50))(plVar1,auStack_90);
  func_0x000107c2882c(auStack_90);
  func_0x000107c2882c(&ppuStack_50);
  return;
}



/* Entry: 1086d75a8; end: 1086d771f;  */

void FUN_1086d75a8(void)

{
  long *plVar1;
  long extraout_x8;
  long unaff_x19;
  long *plVar2;
  long lStack_2a8;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined1 auStack_280 [24];
  undefined1 auStack_268 [48];
  byte bStack_238;
  char cStack_228;
  long alStack_220 [58];
  byte bStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x0001086da024();
  FUN_1086ce034();
  if ((lStack_2a8 != 0) && ((*(byte *)(lStack_2a8 + 0x110) & 1) == 0)) {
    lStack_48 = 0;
    lStack_40 = 0;
    uStack_38 = 0;
    func_0x000107c27ab0(&lStack_48,*(undefined8 *)(unaff_x19 + 0x38));
    plVar2 = (long *)(unaff_x19 + 0x30);
    while (plVar2 = (long *)*plVar2, plVar2 != (long *)0x0) {
      func_0x0001086daea8();
      plVar1 = alStack_220;
      FUN_1086b1f68();
      if ((bStack_50 & 1) != 0) {
        func_0x00010086492c();
        (**(code **)(*plVar1 + 0x18))(auStack_268);
        if ((cStack_228 == '\x01') && ((bStack_238 & 1) != 0)) {
          func_0x000107c28840(&lStack_48,plVar2 + 2);
          func_0x0001086dac38(*(undefined8 *)(*(long *)(lStack_2a8 + 0xd0) + 0xe0));
          uStack_298 = 0;
          uStack_290 = 0;
          uStack_288 = 0;
          func_0x0001086db2ec();
          func_0x0001086dad38();
          func_0x000104be1274(&uStack_298);
          func_0x00010867b9fc(auStack_280);
        }
      }
      func_0x0001086db274();
    }
    if (lStack_48 != lStack_40) {
      func_0x0001086da720(*(undefined8 *)(lStack_2a8 + 0xd0));
      (**(code **)(extraout_x8 + 200))();
    }
    func_0x000107c27a04(&lStack_48);
  }
  func_0x0001086db1c4();
  return;
}



/* Entry: 1086d7720; end: 1086d775b;  */

undefined8 * FUN_1086d7720(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110a65290;
  uVar1 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1086ac478(param_1 + 3,param_2 + 2);
  return param_1;
}



/* Entry: 1086d775c; end: 1086d7777;  */

long FUN_1086d775c(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107c326a4(param_1 + 8);
  func_0x000100864b68();
  lVar1 = unaff_x19;
  func_0x00010055315c();
  if (lVar1 != 0) {
    func_0x000107c60d68();
  }
  return unaff_x19;
}



/* Entry: 1086d7778; end: 1086d778b;  */

void FUN_1086d7778(void)

{
  func_0x0001086d776c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086d778c; end: 1086d77a3;  */

void FUN_1086d778c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001086d9c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1086d77a4; end: 1086d7803;  */

long FUN_1086d77a4(long param_1)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  if (*(char *)(param_1 + 0x30) != '\0') {
    FUN_1086d0c1c(param_1 + 0x10);
  }
  FUN_1086d0cf8((ulong)&uStack_50 | 8);
  func_0x000107c327dc();
  func_0x000107c31408();
  FUN_1086d0cf8(param_1 + 0x10);
  return param_1;
}



/* Entry: 1086d7804; end: 1086d7807;  */

void FUN_1086d7804(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)**(undefined8 **)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001006cee64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 **)(param_1 + 0x10) + 2);
  return;
}



/* Entry: 1086d7808; end: 1086d7827;  */

void FUN_1086d7808(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001086c73c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086d7828; end: 1086d78bf;  */

void FUN_1086d7828(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1086d78c0; end: 1086d78df;  */

void FUN_1086d78c0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1086c7c10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086d78e0; end: 1086d78e3;  */

void FUN_1086d78e0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1086d78e4; end: 1086d7907;  */

undefined8 FUN_1086d78e4(undefined8 param_1)

{
  func_0x0001086db3f8();
  FUN_1086c8684();
  return param_1;
}



/* Entry: 1086d7908; end: 1086d791b;  */

void FUN_1086d7908(void)

{
  FUN_1086d78e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086d791c; end: 1086d794f;  */

undefined8 FUN_1086d791c(undefined8 param_1)

{
  func_0x000107c32774();
  FUN_1086d7c08();
  return param_1;
}



/* Entry: 1086d7950; end: 1086d7973;  */

void FUN_1086d7950(undefined8 param_1,long param_2,undefined8 param_3)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 in_register_00005008;
  
  func_0x000107c32678(param_3,param_2 + 8);
  func_0x0001086db3f8();
  func_0x000107c27994();
  func_0x0001086db468();
  *(undefined8 *)(unaff_x19 + 0x28) = in_register_00005008;
  *(undefined8 *)(unaff_x19 + 0x20) = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10 != 0);
  }
  func_0x0001086db3c8();
  if (extraout_x8_00 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10_00 != 0);
  }
  lVar1 = *(long *)(unaff_x20 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x19 + 0x48) = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x19 + 0x40) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10_01 != 0);
  }
  return;
}



/* Entry: 1086d7974; end: 1086d7bd3;  */

void FUN_1086d7974(long param_1,ulong *param_2,long param_3)

{
  undefined1 uVar1;
  bool bVar2;
  long extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  code *extraout_x8_04;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  ulong uVar3;
  long unaff_x23;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_f8 [80];
  undefined1 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  long lStack_80;
  undefined8 uStack_78;
  undefined4 uStack_60;
  long lStack_50;
  
  func_0x000100864738();
  uVar3 = *param_2;
  auStack_f8[0] = 0;
  uStack_a8 = 0;
  bVar2 = *(char *)(param_3 + 0x50) == '\x01';
  uVar1 = bVar2;
  if (bVar2) {
    func_0x0001086d7ce4(auStack_f8,param_3);
  }
  uStack_a8 = bVar2;
  FUN_1086ce034(&lStack_80,param_1 + 0x40);
  if (lStack_80 != 0) {
    FUN_10867a634(&lStack_a0,lStack_80 + 0x78);
    if (lStack_a0 != 0) {
      func_0x000107c326e4();
      func_0x0001086db7b8();
    }
    func_0x000107c28a70(&lStack_a0);
  }
  func_0x000107c29120(&lStack_80);
  lStack_50 = param_1;
  if ((uVar3 >> 0x20 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    lVar4 = *(long *)(param_1 + 0x20);
    lStack_a0 = lVar4;
    uStack_98 = uVar5;
    if (*(long *)(param_1 + 0x28) != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10 != 0);
    }
    func_0x000107c28150();
    func_0x0001086db600();
    func_0x0001086da438();
    func_0x0001086db5c4(0x1086d7cac);
    if (extraout_x8 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001086dbb50();
    func_0x0001086d9d10(uStack_78);
    func_0x0001086da250();
    if (unaff_x23 != 0) goto LAB_1086d7b40;
    func_0x0001086d9ab0();
    lStack_80 = lVar4;
    uStack_78 = uVar5;
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_01 != 0);
    }
    func_0x000107c3265c();
    (*extraout_x8_01)();
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    lVar4 = *(long *)(param_1 + 0x20);
    lStack_a0 = lVar4;
    uStack_98 = uVar5;
    if (*(long *)(param_1 + 0x28) != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_02 != 0);
    }
    uStack_90 = (undefined4)uVar3;
    func_0x000107c28150();
    func_0x0001086db600();
    func_0x0001086da438();
    func_0x0001086db5c4(0x1086d7c74);
    if (extraout_x8_02 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_03 != 0);
    }
    uStack_60 = uStack_90;
    func_0x0001086dbb50();
    func_0x0001086d9d10(uStack_78);
    func_0x0001086da250();
    if (unaff_x23 != 0) goto LAB_1086d7b40;
    func_0x0001086d9ab0();
    lStack_80 = lVar4;
    uStack_78 = uVar5;
    if (extraout_x8_03 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_04 != 0);
    }
    func_0x000107c3265c();
    (*extraout_x8_04)();
  }
  func_0x000107c27e74(&lStack_80);
LAB_1086d7b40:
  func_0x0001086daaf4();
  FUN_1086d7cf0();
  func_0x000100864c10();
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x000107c27e74(&lStack_80);
    func_0x0001086daaf4();
    FUN_1086d7cf0(auStack_f8);
    func_0x0001086d9ff8();
    func_0x0001086da3f0();
    func_0x0001086da290();
    func_0x0001086d9b48();
    return;
  }
  return;
}



/* Entry: 1086d7bd4; end: 1086d7bfb;  */

void FUN_1086d7bd4(undefined8 param_1)

{
  func_0x0001086da3f0();
  func_0x0001086da290(param_1,&PTR_DAT_110a65450);
  func_0x0001086d9b48();
  return;
}



/* Entry: 1086d7bfc; end: 1086d7c07;  */

undefined ** FUN_1086d7bfc(void)

{
  return &PTR_DAT_110a65450;
}



/* Entry: 1086d7c08; end: 1086d7c73;  */

void FUN_1086d7c08(undefined8 param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 in_register_00005008;
  
  func_0x000107c32678();
  func_0x0001086db3f8();
  func_0x000107c27994();
  func_0x0001086db468();
  *(undefined8 *)(unaff_x19 + 0x28) = in_register_00005008;
  *(undefined8 *)(unaff_x19 + 0x20) = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10 != 0);
  }
  func_0x0001086db3c8();
  if (extraout_x8_00 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10_00 != 0);
  }
  lVar1 = *(long *)(unaff_x20 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x19 + 0x48) = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x19 + 0x40) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10_01 != 0);
  }
  return;
}



/* Entry: 1086d7c74; end: 1086d7cef;  */

void FUN_1086d7c74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001086d97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))
            (*(long **)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20));
  return;
}



/* Entry: 1086d7cf0; end: 1086d7d0f;  */

void FUN_1086d7cf0(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    FUN_1088bbc0c();
  }
  return;
}



/* Entry: 1086d7d10; end: 1086d7d67;  */

void FUN_1086d7d10(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x00010086ab64();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x00010086abd4(uVar1);
  return;
}



/* Entry: 1086d7d68; end: 1086d7d7b;  */

void FUN_1086d7d68(void)

{
  func_0x0001086d7d44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086d7d7c; end: 1086d7daf;  */

undefined8 FUN_1086d7d7c(undefined8 param_1)

{
  func_0x000107c326e0();
  FUN_1086d7f78();
  return param_1;
}



/* Entry: 1086d7db0; end: 1086d7dd3;  */

void FUN_1086d7db0(undefined8 param_1,long param_2,undefined8 param_3)

{
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  undefined8 in_register_00005008;
  
  func_0x000107c32678(param_3,param_2 + 8);
  func_0x0001086db3e8();
  func_0x000107c27994();
  func_0x0001086db468();
  *(undefined8 *)(unaff_x19 + 0x28) = in_register_00005008;
  *(undefined8 *)(unaff_x19 + 0x20) = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10 != 0);
  }
  func_0x0001086db3c8();
  if (extraout_x8_00 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 1086d7dd4; end: 1086d7f43;  */

void FUN_1086d7dd4(long param_1,ulong *param_2)

{
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w11;
  long unaff_x22;
  
  func_0x0001086db620();
  func_0x000100864738();
  if ((*param_2 >> 0x20 & 1) == 0) {
    if (*(long *)(param_1 + 0x28) != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10 != 0);
    }
    func_0x000107c28150();
    func_0x0001086da310();
    func_0x0001086da1e0();
    func_0x0001086d97f8(0x1086d8000);
    if (extraout_x8 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001086d9ad8();
    func_0x0001086d9850();
    func_0x0001086da01c();
    if (unaff_x22 != 0) goto LAB_1086d7f00;
    func_0x0001086d990c();
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_01 != 0);
    }
    func_0x000107c3265c();
    func_0x0001086da218();
  }
  else {
    if (*(long *)(param_1 + 0x28) != 0) {
      do {
        func_0x000107c325ec();
      } while (extraout_w11 != 0);
    }
    func_0x000107c28150();
    func_0x0001086da310();
    func_0x0001086da1e0();
    func_0x0001086d97f8(FUN_1086d7fc8);
    if (extraout_x8_01 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_02 != 0);
    }
    func_0x0001086d995c();
    func_0x0001086d9ad8();
    func_0x0001086d9850();
    func_0x0001086da01c();
    if (unaff_x22 != 0) goto LAB_1086d7f00;
    func_0x0001086d990c();
    if (extraout_x8_02 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_03 != 0);
    }
    func_0x000107c3265c();
    func_0x0001086da218();
  }
  func_0x0001086da044();
LAB_1086d7f00:
  func_0x0001086da6b4();
  func_0x000100864c10();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001086d9af0();
    func_0x0001086da6b4();
    func_0x0001086d9ff8();
    func_0x0001086da3f0();
    func_0x0001086da290();
    func_0x0001086d9b48();
    return;
  }
  return;
}



/* Entry: 1086d7f44; end: 1086d7f6b;  */

void FUN_1086d7f44(undefined8 param_1)

{
  func_0x0001086da3f0();
  func_0x0001086da290(param_1,&PTR_DAT_110a65500);
  func_0x0001086d9b48();
  return;
}



/* Entry: 1086d7f6c; end: 1086d7f77;  */

undefined ** FUN_1086d7f6c(void)

{
  return &PTR_DAT_110a65500;
}


