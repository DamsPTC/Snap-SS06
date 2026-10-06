/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105966a04; end: 105966a07;  */

void FUN_105966a04(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 105966a08; end: 105966a47;  */

void FUN_105966a08(void)

{
  func_0x000105967b48();
  return;
}



/* Entry: 105966a48; end: 105966b77;  */

void FUN_105966a48(long param_1)

{
  long extraout_x8;
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x000105967b40();
  if ((**(byte **)(lVar1 + 0x58) & 1) == 0) {
    func_0x000100904d2c(*(undefined8 *)(lVar1 + 8));
    (**(code **)(extraout_x8 + 0x30))();
    func_0x000105967b40();
    func_0x000100906e10();
    func_0x000100906e20();
    func_0x000100906e3c();
    func_0x000100906e4c();
    func_0x000100927cdc();
    func_0x0001009275c0();
    func_0x000100907740();
    func_0x000100907748();
    func_0x000100907780();
    func_0x000100907798();
    func_0x0001009077a8();
    func_0x000100927cf0();
    func_0x000100927cfc();
    func_0x0001009077e0();
    func_0x000100907748();
    func_0x0001009077e8();
    func_0x000100907800();
    func_0x000100907810();
    func_0x000100927cf0();
    func_0x000100927d08();
    func_0x00010090781c();
    func_0x000100907748();
    func_0x000100907824();
    func_0x00010090783c();
    func_0x00010090784c();
    func_0x000100927d14();
    func_0x000100927d20();
    func_0x00010090786c();
    func_0x000100907748();
  }
  return;
}



/* Entry: 105966b78; end: 105966b97;  */

void FUN_105966b78(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000105966a24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 105966b98; end: 105966b9f;  */

void FUN_105966b98(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 105966ba0; end: 105966bb3;  */

void FUN_105966ba0(void)

{
  func_0x000105966d54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105966bb4; end: 105966bbf;  */

void FUN_105966bb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105967bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 105966bc0; end: 105966bd3;  */

void FUN_105966bc0(void)

{
  FUN_105966d00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105966bd4; end: 105966cff;  */

undefined1 * FUN_105966bd4(undefined1 *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long lVar3;
  int extraout_w10;
  long unaff_x20;
  long lVar4;
  long lStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  plVar1 = &lStack_90;
  plVar2 = &lStack_90;
  func_0x000100904b40();
  lVar3 = *(long *)(param_1 + 8);
  uStack_48 = extraout_x8;
  if (lVar3 != 0) {
    uStack_88 = *(undefined8 *)(param_1 + 0x10);
    unaff_x20 = *(long *)(param_1 + 0x18);
    *(long *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    lStack_90 = lVar3;
    func_0x00010028c49c();
    lVar3 = *(long *)(unaff_x20 + 0x10);
    __ZNSt3__15mutex4lockEv(lVar3 + 8);
    lVar4 = *(long *)(lVar3 + 0x70);
    pcStack_80 = FUN_105966d30;
    ppuStack_78 = &PTR_DAT_1108c2a80;
    uStack_68 = uStack_88;
    lStack_70 = lStack_90;
    lStack_90 = 0;
    uStack_88 = 0;
    puStack_50 = param_1;
    func_0x0001005760fc(lVar3 + 0x48,&pcStack_80);
    func_0x000105967b08();
    __ZNSt3__15mutex6unlockEv(lVar3 + 8);
    if (lVar4 == 0) {
      ppuStack_78 = *(undefined ***)(unaff_x20 + 0x18);
      pcStack_80 = *(code **)(unaff_x20 + 0x10);
      if (*(long *)(unaff_x20 + 0x18) != 0) {
        do {
          func_0x000100904d1c();
        } while (extraout_w10 != 0);
      }
      func_0x000100904d38();
      (*extraout_x8_00)();
      func_0x000100576684(&pcStack_80);
    }
    FUN_10595ccc0();
    param_1 = (undefined1 *)plVar1;
  }
  func_0x000100904dbc(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000100576684(&pcStack_80);
    FUN_10595ccc0(&lStack_90);
    func_0x000105967a24();
    func_0x000105967b64(&PTR_DAT_1108c2a50);
    FUN_10595ccc0(unaff_x20);
    return (undefined1 *)plVar2;
  }
  return param_1;
}



/* Entry: 105966d00; end: 105966d2f;  */

undefined8 FUN_105966d00(undefined8 param_1)

{
  func_0x000105967b64(&PTR_DAT_1108c2a50);
  FUN_10595ccc0();
  return param_1;
}



/* Entry: 105966d30; end: 105966d63;  */

void FUN_105966d30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105966d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  return;
}



/* Entry: 105966d64; end: 105966dab;  */

void FUN_105966d64(long param_1)

{
  func_0x000100902b18();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 105966dac; end: 105966f1b;  */

void FUN_105966dac(long *param_1)

{
  ulong extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  
  func_0x000100927908();
  func_0x000100927a38();
  if ((extraout_x8 & 1) == 0) {
    func_0x000105967b9c();
    if (extraout_x8_00 != 0) {
      do {
        func_0x000100904d1c();
      } while (extraout_w10 != 0);
    }
    (**(code **)(*param_1 + 0x48))();
    func_0x000105967b7c();
    func_0x000100927c78();
    func_0x000100906e10();
    func_0x0001059679f8();
    func_0x000105967a18();
    func_0x000105967bfc();
    func_0x000105967ab8();
    func_0x000100927cdc();
    func_0x0001009275c0();
    func_0x000105967c04();
    func_0x000105967a2c();
    func_0x0001059679e4();
    func_0x000105967a18();
    func_0x000105967bd0();
    func_0x000105967aa0();
    func_0x000100927cf0();
    func_0x000100927cfc();
    func_0x000105967bd8();
    func_0x000105967a2c();
    func_0x0001059679e4();
    func_0x000105967a18();
    func_0x000105967be0();
    func_0x000105967aac();
    func_0x000100927cf0();
    func_0x000100927d08();
    func_0x000105967be8();
    func_0x000105967a2c();
    func_0x0001059679e4();
    func_0x000105967a18();
    func_0x000105967c0c();
    func_0x000105967a94();
    func_0x000100927d14();
    func_0x000100927d20();
    func_0x000100906f10();
    func_0x000105967a2c();
  }
  return;
}



/* Entry: 105966f1c; end: 105966f3b;  */

void FUN_105966f1c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000105966d88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 105966f3c; end: 105966f3f;  */

void FUN_105966f3c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 105966f40; end: 105966f63;  */

void FUN_105966f40(void)

{
  long unaff_x19;
  
  func_0x000100927710();
  FUN_105966d64(unaff_x19 + 0x10);
  return;
}



/* Entry: 105966f64; end: 1059670d3;  */

void FUN_105966f64(long *param_1)

{
  ulong extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  
  func_0x000100927908();
  func_0x000100927a38();
  if ((extraout_x8 & 1) == 0) {
    func_0x000105967b9c();
    if (extraout_x8_00 != 0) {
      do {
        func_0x000100904d1c();
      } while (extraout_w10 != 0);
    }
    (**(code **)(*param_1 + 0x50))();
    func_0x000105967b7c();
    func_0x000100927c78();
    func_0x000100906e10();
    func_0x0001059679f8();
    func_0x000105967a18();
    func_0x000105967bfc();
    func_0x000105967ab8();
    func_0x000100927cdc();
    func_0x0001009275c0();
    func_0x000105967c04();
    func_0x000105967a2c();
    func_0x0001059679e4();
    func_0x000105967a18();
    func_0x000105967bd0();
    func_0x000105967aa0();
    func_0x000100927cf0();
    func_0x000100927cfc();
    func_0x000105967bd8();
    func_0x000105967a2c();
    func_0x0001059679e4();
    func_0x000105967a18();
    func_0x000105967be0();
    func_0x000105967aac();
    func_0x000100927cf0();
    func_0x000100927d08();
    func_0x000105967be8();
    func_0x000105967a2c();
    func_0x0001059679e4();
    func_0x000105967a18();
    func_0x000105967c0c();
    func_0x000105967a94();
    func_0x000100927d14();
    func_0x000100927d20();
    func_0x000100906f10();
    func_0x000105967a2c();
  }
  return;
}



/* Entry: 1059670d4; end: 1059670f3;  */

void FUN_1059670d4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_105966f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1059670f4; end: 1059670f7;  */

void FUN_1059670f4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1059670f8; end: 10596723b;  */

void FUN_1059670f8(long param_1)

{
  long extraout_x8;
  long *plVar1;
  
  func_0x0001005e3518();
  if ((**(byte **)(param_1 + 0x50) & 1) == 0) {
    func_0x000100904d2c(*(undefined8 *)(param_1 + 0x18));
    (**(code **)(extraout_x8 + 0x58))();
    func_0x0001005e3518(param_1 + 0x20);
    func_0x000100906e10();
    plVar1 = *(long **)(param_1 + 0x40);
    func_0x000100906e20();
    func_0x000100906e3c();
    func_0x000100906e4c();
    func_0x000100906f18(*(undefined8 *)(*plVar1 + 0x18));
    func_0x000100907740();
    func_0x000100907748();
    func_0x000100907780();
    func_0x000100907798();
    func_0x0001009077a8();
    func_0x0001009077b4();
    func_0x0001009077c0();
    func_0x0001009077e0();
    func_0x000100907748();
    func_0x0001009077e8();
    func_0x000100907800();
    func_0x000100907810();
    func_0x0001009077b4();
    func_0x0001009077c0();
    func_0x00010090781c();
    func_0x000100907748();
    plVar1 = *(long **)(param_1 + 0x40);
    func_0x000100907824();
    func_0x00010090783c();
    func_0x00010090784c();
    func_0x0001009077c0(*(undefined8 *)(*plVar1 + 0x28));
    func_0x00010090786c();
    func_0x000100907748();
  }
  return;
}



/* Entry: 10596723c; end: 10596729b;  */

void FUN_10596723c(long param_1)

{
  param_1 = param_1 + 0x38;
  func_0x000100902b18();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10596729c; end: 1059672af;  */

void FUN_10596729c(void)

{
  FUN_1059677b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1059672b0; end: 1059672bb;  */

void FUN_1059672b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105967bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1059672bc; end: 1059672cf;  */

void FUN_1059672bc(void)

{
  FUN_105967444();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1059672d0; end: 105967443;  */

undefined1 * FUN_1059672d0(undefined1 *param_1)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long lVar5;
  int extraout_w10;
  long *unaff_x20;
  long lVar6;
  long lStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [32];
  code *pcStack_80;
  undefined **ppuStack_78;
  long *plStack_70;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  plVar3 = &lStack_b0;
  plVar4 = &lStack_b0;
  func_0x000100904b40();
  lVar5 = *(long *)(param_1 + 8);
  uStack_48 = extraout_x8;
  if (lVar5 != 0) {
    lStack_a8 = *(long *)(param_1 + 0x10);
    lVar1 = *(long *)(param_1 + 0x18);
    *(long *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    puVar2 = auStack_a0;
    lStack_b0 = lVar5;
    FUN_1059674ac();
    func_0x00010028c49c();
    lVar5 = *(long *)(lVar1 + 0x10);
    __ZNSt3__15mutex4lockEv(lVar5 + 8);
    lVar6 = *(long *)(lVar5 + 0x70);
    pcStack_80 = FUN_105967474;
    ppuStack_78 = &PTR_FUN_1108c2b70;
    unaff_x20 = (long *)0x28;
    __Znwm();
    unaff_x20[1] = lStack_a8;
    *unaff_x20 = lStack_b0;
    lStack_b0 = 0;
    lStack_a8 = 0;
    FUN_1059674ac(unaff_x20 + 2,auStack_a0);
    plStack_70 = unaff_x20;
    puStack_50 = puVar2;
    func_0x0001005760fc(lVar5 + 0x48,&pcStack_80);
    func_0x000105967b18();
    __ZNSt3__15mutex6unlockEv(lVar5 + 8);
    if (lVar6 == 0) {
      ppuStack_78 = *(undefined ***)(lVar1 + 0x18);
      pcStack_80 = *(code **)(lVar1 + 0x10);
      if (*(long *)(lVar1 + 0x18) != 0) {
        do {
          func_0x000100904d1c();
        } while (extraout_w10 != 0);
      }
      func_0x000100904d38();
      (*extraout_x8_00)();
      func_0x000100576684(&pcStack_80);
    }
    func_0x000105967764(&lStack_b0);
    param_1 = (undefined1 *)plVar3;
  }
  func_0x000100904dbc(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000105967c14();
    func_0x000100576684();
    func_0x000105967764(&lStack_b0);
    func_0x000105967a24();
    func_0x000105967b64(&PTR_DAT_1108c2b40);
    func_0x00010595cce4(unaff_x20);
    return (undefined1 *)plVar4;
  }
  return param_1;
}



/* Entry: 105967444; end: 105967473;  */

undefined8 FUN_105967444(undefined8 param_1)

{
  func_0x000105967b64(&PTR_DAT_1108c2b40);
  func_0x00010595cce4();
  return param_1;
}



/* Entry: 105967474; end: 105967487;  */

void FUN_105967474(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)**(undefined8 **)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000105967484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 **)(param_1 + 0x10) + 2);
  return;
}



/* Entry: 105967488; end: 1059674a7;  */

void FUN_105967488(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000105967764();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1059674a8; end: 1059674ab;  */

void FUN_1059674a8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1059674ac; end: 1059675d3;  */

undefined8 * FUN_1059674ac(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puStack_80;
  undefined1 uStack_78;
  undefined8 *puStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar6 = *param_2;
  lVar1 = param_2[1];
  uStack_78 = 0;
  lVar2 = lVar1 - lVar6;
  puStack_80 = param_1;
  if (lVar2 != 0) {
    uVar5 = lVar2 / 0x70;
    if (0x249249249249249 < uVar5) {
      FUN_1059675d4();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1059675b0);
      (*pcVar3)();
    }
    puVar4 = param_1 + 2;
    FUN_1059675e8();
    *param_1 = puVar4;
    param_1[1] = puVar4;
    param_1[2] = puVar4 + uVar5 * 0xe;
    ppuStack_68 = &puStack_50;
    ppuStack_60 = &puStack_48;
    uStack_58 = 0;
    puStack_70 = param_1 + 2;
    puStack_50 = puVar4;
    for (; puStack_48 = puVar4, lVar6 != lVar1; lVar6 = lVar6 + 0x70) {
      FUN_105966214(puVar4,lVar6);
      puVar4 = puStack_48 + 0xe;
    }
    uStack_58 = 1;
    FUN_10596763c(&puStack_70);
    param_1[1] = puVar4;
  }
  uStack_78 = 1;
  func_0x0001059676bc(&puStack_80);
  return param_1;
}



/* Entry: 1059675d4; end: 1059675e7;  */

void FUN_1059675d4(void)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
  FUN_10596760c();
  return;
}



/* Entry: 1059675e8; end: 10596760b;  */

void FUN_1059675e8(void)

{
  FUN_10596760c();
  return;
}



/* Entry: 10596760c; end: 10596763b;  */

long FUN_10596760c(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 < 0x24924924924924a) {
    lVar1 = param_2 * 0x70;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10596766c(param_1);
  }
  return param_1;
}



/* Entry: 10596763c; end: 10596766b;  */

long FUN_10596763c(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10596766c(param_1);
  }
  return param_1;
}



/* Entry: 10596766c; end: 10596768b;  */

void FUN_10596766c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x70;
    func_0x00010595cb7c();
  }
  return;
}



/* Entry: 10596768c; end: 105967723;  */

void FUN_10596768c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x70;
    func_0x00010595cb7c();
  }
  return;
}



/* Entry: 105967724; end: 10596772b;  */

void FUN_105967724(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x70;
    func_0x00010595cb7c();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 10596772c; end: 1059677b7;  */

void FUN_10596772c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x70;
    func_0x00010595cb7c();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 1059677b8; end: 1059677c7;  */

void FUN_1059677b8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108c2af0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1059677c8; end: 10596780f;  */

void FUN_1059677c8(long param_1)

{
  func_0x000100902b18();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 105967810; end: 1059679af;  */

void FUN_105967810(long param_1)

{
  long *plVar1;
  int extraout_w10;
  long lVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  long lStack_38;
  
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x000105967b40();
  if ((**(byte **)(lVar2 + 0x58) & 1) == 0) {
    plVar1 = *(long **)(*(long *)(lVar2 + 8) + 0x18);
    uStack_68 = *(undefined8 *)(lVar2 + 0x20);
    uStack_70 = *(undefined8 *)(lVar2 + 0x18);
    lStack_38 = param_1;
    if (*(long *)(lVar2 + 0x20) != 0) {
      do {
        func_0x000100904d1c();
      } while (extraout_w10 != 0);
    }
    (**(code **)(*plVar1 + 0x60))();
    func_0x00010595cce4(&uStack_70);
    func_0x000105967b40();
    func_0x000100906e10();
    uStack_60 = 0;
    uStack_58 = 0;
    func_0x0001059679f8();
    uStack_68 = 0;
    uStack_50 = 0;
    func_0x000105967a18();
    func_0x000105967bfc();
    func_0x000105967ab8();
    func_0x000100927cdc();
    func_0x0001009275c0();
    func_0x000105967c04();
    func_0x000105967a2c();
    func_0x000105967a08();
    uStack_50 = 1;
    func_0x000105967a18();
    func_0x000105967bd0();
    func_0x000105967aa0();
    func_0x000100927cf0();
    func_0x000100927cfc();
    func_0x000105967bd8();
    func_0x000105967a2c();
    func_0x000105967a08();
    uStack_50 = 2;
    func_0x000105967a18();
    func_0x000105967be0();
    func_0x000105967aac();
    func_0x000100927cf0();
    func_0x000100927d08();
    func_0x000105967be8();
    func_0x000105967a2c();
    func_0x000105967a08();
    uStack_50 = 3;
    func_0x000105967a18();
    func_0x000105967c0c();
    func_0x000105967a94();
    func_0x000100927d14();
    func_0x000100927d20();
    func_0x000100906f10();
    func_0x000105967a2c();
  }
  return;
}



/* Entry: 1059679b0; end: 1059679cf;  */

void FUN_1059679b0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001059677ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1059679d0; end: 105967c73;  */

void FUN_1059679d0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 105967c74; end: 105967da7;  */

undefined *** FUN_105967c74(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined ****ppppuVar13;
  undefined ****ppppuVar14;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  code *extraout_x8_01;
  undefined8 extraout_x8_02;
  code *extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  long unaff_x19;
  undefined4 uVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined ***pppuStack_490;
  undefined1 auStack_488 [24];
  undefined1 auStack_470 [64];
  undefined **ppuStack_430;
  undefined **ppuStack_428;
  undefined *puStack_418;
  undefined1 auStack_410 [96];
  undefined8 uStack_3b0;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined **ppuStack_390;
  undefined **ppuStack_388;
  undefined ***pppuStack_380;
  code *pcStack_378;
  undefined **ppuStack_370;
  undefined8 uStack_318;
  undefined ***pppuStack_2c0;
  undefined **appuStack_2b8 [14];
  undefined4 uStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined *puStack_228;
  undefined1 auStack_220 [128];
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined ***pppuStack_170;
  code *pcStack_168;
  undefined **ppuStack_160;
  undefined8 uStack_108;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined4 uStack_78;
  undefined8 uStack_38;
  
  func_0x000105968b4c();
  pbVar1 = (byte *)(param_1 + 0x38);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uStack_38 = extraout_x8;
  if ((bVar2 & 1) == 0) {
    FUN_10598945c(unaff_x19 + 0x28);
    lVar7 = *(long *)(unaff_x19 + 0x10);
    uVar5 = in_ZR;
    if (lVar7 != 0) {
      plVar16 = *(long **)(unaff_x19 + 0x28);
      uVar17 = *(undefined8 *)(unaff_x19 + 8);
      __ZNSt3__119__shared_weak_count4lockEv();
      uVar5 = in_ZR;
      if (lVar7 != 0) {
        ppuStack_98 = (undefined **)0x105968428;
        ppuStack_90 = &PTR_FUN_1108c2c38;
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_88 = uVar17;
        lStack_80 = lVar7;
        (**(code **)(*plVar16 + 0x10))(plVar16,&ppuStack_98);
        func_0x000105968aec(ppuStack_90);
        FUN_10596838c(&uStack_a8);
        pppuVar8 = *(undefined ****)(unaff_x19 + 0x28);
        func_0x00010bcceaec();
        goto LAB_105967d50;
      }
    }
    pppuVar8 = (undefined ***)0x0;
    FUN_10527822c();
  }
  else {
    uStack_88 = 0;
    lStack_80 = 0;
    ppuStack_98 = &PTR_FUN_1108c28b8;
    ppuStack_90 = (undefined **)0x0;
    uStack_78 = 0xe;
    (**(code **)(**(long **)(unaff_x19 + 0x40) + 0x18))(*(long **)(unaff_x19 + 0x40),&ppuStack_98);
    pppuVar8 = &ppuStack_98;
    func_0x000100907750();
LAB_105967d50:
    func_0x000105968b60(uStack_38);
    uVar5 = 0;
    if ((bool)in_ZR) {
      return pppuVar8;
    }
  }
  ___stack_chk_fail();
  pppuVar9 = pppuVar8;
  func_0x000105968bf4();
  uVar17 = param_3;
  func_0x000105968b4c();
  pppuVar10 = appuStack_2b8;
  pppuStack_2c0 = pppuVar9;
  uStack_108 = extraout_x8_00;
  FUN_105966214();
  uVar6 = SUB84(pppuVar10,0);
  uVar15 = (undefined4)param_3;
  ppuStack_238 = pppuVar8[9];
  ppuStack_240 = pppuVar8[8];
  uStack_248 = uVar15;
  if (pppuVar8[9] != (undefined **)0x0) {
    do {
      func_0x000105968af8();
      uVar6 = SUB84(pppuVar10,0);
    } while (extraout_w10 != 0);
  }
  if (((ulong)pppuVar8[7] & 1) == 0) {
    func_0x0001004b4e98();
    func_0x000105968bd4();
    (*extraout_x8_01)();
    puStack_228 = &UNK_10f31567c;
    FUN_10596849c(auStack_220,&pppuStack_2c0);
    uStack_1a0 = 0;
    uStack_194 = (undefined4)((ulong)param_3 >> 0x20);
    uStack_190 = CONCAT31(uStack_190._1_3_,1);
    ppuStack_178 = ppuStack_238;
    ppuStack_180 = ppuStack_240;
    uStack_198 = uVar15;
    uStack_188 = uVar6;
    if (ppuStack_238 != (undefined **)0x0) {
      do {
        func_0x000105968af8();
      } while (extraout_w10_00 != 0);
    }
    pcStack_168 = FUN_1059684fc;
    ppuStack_160 = &PTR_FUN_1108c2c50;
    puVar11 = (undefined8 *)0xc0;
    pppuStack_170 = pppuVar8 + 7;
    __Znwm();
    *puVar11 = puStack_228;
    FUN_10596849c(puVar11 + 1,auStack_220);
    puVar11[0x12] = CONCAT44(uStack_194,uStack_198);
    puVar11[0x11] = uStack_1a0;
    *(ulong *)((long)puVar11 + 0x9c) = CONCAT44(uStack_188,uStack_18c);
    *(ulong *)((long)puVar11 + 0x94) = CONCAT44(uStack_190,uStack_194);
    puVar11[0x16] = ppuStack_178;
    puVar11[0x15] = ppuStack_180;
    if (ppuStack_178 != (undefined **)0x0) {
      do {
        func_0x000105968af8();
      } while (extraout_w10_01 != 0);
    }
    puVar11[0x17] = pppuStack_170;
    func_0x000105968c68();
    func_0x000105968bfc();
    func_0x000105968adc();
    func_0x0001059684d0(&puStack_228);
  }
  func_0x000100902b24(&ppuStack_240);
  pppuVar8 = appuStack_2b8;
  func_0x00010595cb7c();
  func_0x000105968b60(uStack_108);
  if ((bool)uVar5) {
    return pppuVar8;
  }
  ___stack_chk_fail();
  func_0x000105968adc();
  func_0x0001059684d0(&puStack_228);
  func_0x000100902b24(&ppuStack_240);
  pppuVar10 = appuStack_2b8;
  func_0x00010595cb7c();
  func_0x000105968bf4();
  ppppuVar13 = &pppuStack_490;
  ppppuVar14 = &pppuStack_490;
  func_0x000105968b4c();
  pppuStack_490 = pppuVar10;
  uStack_318 = extraout_x8_02;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_488);
  puVar12 = auStack_470;
  FUN_105966264(puVar12,uVar17);
  uVar6 = SUB84(puVar12,0);
  ppuStack_428 = pppuVar8[9];
  ppuStack_430 = pppuVar8[8];
  if (pppuVar8[9] != (undefined **)0x0) {
    do {
      func_0x000105968af8();
      uVar6 = SUB84(puVar12,0);
    } while (extraout_w10_02 != 0);
  }
  if (((ulong)pppuVar8[7] & 1) == 0) {
    func_0x0001004b4e98();
    func_0x000105968bd4();
    (*extraout_x8_03)();
    puStack_418 = &UNK_10f315691;
    FUN_105968698(auStack_410,&pppuStack_490);
    uStack_3b0 = 0;
    uStack_3a8 = (undefined4)uVar17;
    uStack_3a4 = (undefined4)((ulong)uVar17 >> 0x20);
    uStack_3a0 = CONCAT31(uStack_3a0._1_3_,1);
    ppuStack_388 = ppuStack_428;
    ppuStack_390 = ppuStack_430;
    uStack_398 = uVar6;
    if (ppuStack_428 != (undefined **)0x0) {
      do {
        func_0x000105968af8();
      } while (extraout_w10_03 != 0);
    }
    pcStack_378 = FUN_105968724;
    ppuStack_370 = &PTR_FUN_1108c2c68;
    puVar11 = (undefined8 *)0xa0;
    pppuStack_380 = pppuVar8 + 7;
    __Znwm();
    *puVar11 = puStack_418;
    FUN_105968698(puVar11 + 1,auStack_410);
    puVar11[0xe] = CONCAT44(uStack_3a4,uStack_3a8);
    puVar11[0xd] = uStack_3b0;
    *(ulong *)((long)puVar11 + 0x7c) = CONCAT44(uStack_398,uStack_39c);
    *(ulong *)((long)puVar11 + 0x74) = CONCAT44(uStack_3a0,uStack_3a4);
    puVar11[0x12] = ppuStack_388;
    puVar11[0x11] = ppuStack_390;
    if (ppuStack_388 != (undefined **)0x0) {
      do {
        func_0x000105968af8();
      } while (extraout_w10_04 != 0);
    }
    puVar11[0x13] = pppuStack_380;
    func_0x000105968c68();
    func_0x000105968bfc();
    func_0x000105968adc();
    FUN_1059686f8(&puStack_418);
  }
  func_0x000105968c4c();
  FUN_105968140();
  func_0x000105968b60(uStack_318);
  if (!(bool)uVar5) {
    ___stack_chk_fail();
    func_0x000105968adc();
    FUN_1059686f8(&puStack_418);
    func_0x000105968c4c();
    FUN_105968140(&pppuStack_490);
    func_0x000105968bf4();
    func_0x00010595cba4(ppppuVar14 + 4);
    func_0x000105968c60();
    return (undefined ***)ppppuVar14;
  }
  return (undefined ***)ppppuVar13;
}



/* Entry: 105967da8; end: 105967f6b;  */

undefined1 * FUN_105967da8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 **ppuVar5;
  undefined1 **ppuVar6;
  undefined8 uVar7;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined8 extraout_x8_01;
  code *extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  long unaff_x19;
  undefined4 uVar8;
  undefined1 *puStack_3e0;
  undefined1 auStack_3d8 [24];
  undefined1 auStack_3c0 [64];
  undefined8 uStack_380;
  long lStack_378;
  undefined *puStack_368;
  undefined1 auStack_360 [96];
  undefined8 uStack_300;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  byte *pbStack_2d0;
  code *pcStack_2c8;
  undefined **ppuStack_2c0;
  undefined8 uStack_268;
  undefined8 uStack_210;
  undefined1 auStack_208 [112];
  undefined4 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined *puStack_178;
  undefined1 auStack_170 [128];
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  byte *pbStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_58;
  
  uVar7 = param_3;
  func_0x000105968b4c();
  puVar2 = auStack_208;
  uStack_210 = param_1;
  uStack_58 = extraout_x8;
  FUN_105966214();
  uVar1 = SUB84(puVar2,0);
  uVar8 = (undefined4)param_3;
  lStack_188 = *(long *)(unaff_x19 + 0x48);
  uStack_190 = *(undefined8 *)(unaff_x19 + 0x40);
  uStack_198 = uVar8;
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    do {
      func_0x000105968af8();
      uVar1 = SUB84(puVar2,0);
    } while (extraout_w10 != 0);
  }
  if ((*(byte *)(unaff_x19 + 0x38) & 1) == 0) {
    func_0x0001004b4e98();
    func_0x000105968bd4();
    (*extraout_x8_00)();
    puStack_178 = &UNK_10f31567c;
    FUN_10596849c(auStack_170,&uStack_210);
    uStack_f0 = 0;
    uStack_e4 = (undefined4)((ulong)param_3 >> 0x20);
    uStack_e0 = CONCAT31(uStack_e0._1_3_,1);
    lStack_c8 = lStack_188;
    uStack_d0 = uStack_190;
    uStack_e8 = uVar8;
    uStack_d8 = uVar1;
    if (lStack_188 != 0) {
      do {
        func_0x000105968af8();
      } while (extraout_w10_00 != 0);
    }
    pcStack_b8 = FUN_1059684fc;
    ppuStack_b0 = &PTR_FUN_1108c2c50;
    puVar3 = (undefined8 *)0xc0;
    pbStack_c0 = (byte *)(unaff_x19 + 0x38);
    __Znwm();
    *puVar3 = puStack_178;
    FUN_10596849c(puVar3 + 1,auStack_170);
    puVar3[0x12] = CONCAT44(uStack_e4,uStack_e8);
    puVar3[0x11] = uStack_f0;
    *(ulong *)((long)puVar3 + 0x9c) = CONCAT44(uStack_d8,uStack_dc);
    *(ulong *)((long)puVar3 + 0x94) = CONCAT44(uStack_e0,uStack_e4);
    puVar3[0x16] = lStack_c8;
    puVar3[0x15] = uStack_d0;
    if (lStack_c8 != 0) {
      do {
        func_0x000105968af8();
      } while (extraout_w10_01 != 0);
    }
    puVar3[0x17] = pbStack_c0;
    func_0x000105968c68();
    func_0x000105968bfc();
    func_0x000105968adc();
    func_0x0001059684d0(&puStack_178);
  }
  func_0x000100902b24(&uStack_190);
  puVar2 = auStack_208;
  func_0x00010595cb7c();
  func_0x000105968b60(uStack_58);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000105968adc();
  func_0x0001059684d0(&puStack_178);
  func_0x000100902b24(&uStack_190);
  puVar4 = auStack_208;
  func_0x00010595cb7c();
  func_0x000105968bf4();
  ppuVar5 = &puStack_3e0;
  ppuVar6 = &puStack_3e0;
  func_0x000105968b4c();
  puStack_3e0 = puVar4;
  uStack_268 = extraout_x8_01;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_3d8);
  puVar4 = auStack_3c0;
  FUN_105966264(puVar4,uVar7);
  uVar1 = SUB84(puVar4,0);
  lStack_378 = *(long *)(puVar2 + 0x48);
  uStack_380 = *(undefined8 *)(puVar2 + 0x40);
  if (*(long *)(puVar2 + 0x48) != 0) {
    do {
      func_0x000105968af8();
      uVar1 = SUB84(puVar4,0);
    } while (extraout_w10_02 != 0);
  }
  if ((puVar2[0x38] & 1) == 0) {
    func_0x0001004b4e98();
    func_0x000105968bd4();
    (*extraout_x8_02)();
    puStack_368 = &UNK_10f315691;
    FUN_105968698(auStack_360,&puStack_3e0);
    uStack_300 = 0;
    uStack_2f8 = (undefined4)uVar7;
    uStack_2f4 = (undefined4)((ulong)uVar7 >> 0x20);
    uStack_2f0 = CONCAT31(uStack_2f0._1_3_,1);
    lStack_2d8 = lStack_378;
    uStack_2e0 = uStack_380;
    uStack_2e8 = uVar1;
    if (lStack_378 != 0) {
      do {
        func_0x000105968af8();
      } while (extraout_w10_03 != 0);
    }
    pcStack_2c8 = FUN_105968724;
    ppuStack_2c0 = &PTR_FUN_1108c2c68;
    puVar3 = (undefined8 *)0xa0;
    pbStack_2d0 = puVar2 + 0x38;
    __Znwm();
    *puVar3 = puStack_368;
    FUN_105968698(puVar3 + 1,auStack_360);
    puVar3[0xe] = CONCAT44(uStack_2f4,uStack_2f8);
    puVar3[0xd] = uStack_300;
    *(ulong *)((long)puVar3 + 0x7c) = CONCAT44(uStack_2e8,uStack_2ec);
    *(ulong *)((long)puVar3 + 0x74) = CONCAT44(uStack_2f0,uStack_2f4);
    puVar3[0x12] = lStack_2d8;
    puVar3[0x11] = uStack_2e0;
    if (lStack_2d8 != 0) {
      do {
        func_0x000105968af8();
      } while (extraout_w10_04 != 0);
    }
    puVar3[0x13] = pbStack_2d0;
    func_0x000105968c68();
    func_0x000105968bfc();
    func_0x000105968adc();
    FUN_1059686f8(&puStack_368);
  }
  func_0x000105968c4c();
  FUN_105968140();
  func_0x000105968b60(uStack_268);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000105968adc();
    FUN_1059686f8(&puStack_368);
    func_0x000105968c4c();
    FUN_105968140(&puStack_3e0);
    func_0x000105968bf4();
    func_0x00010595cba4((undefined1 *)((long)ppuVar6 + 0x20));
    func_0x000105968c60();
    return (undefined1 *)ppuVar6;
  }
  return (undefined1 *)ppuVar5;
}



/* Entry: 105967f6c; end: 10596813f;  */

undefined8 * FUN_105967f6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long unaff_x19;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [64];
  undefined8 uStack_170;
  long lStack_168;
  undefined *puStack_158;
  undefined1 auStack_150 [96];
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  byte *pbStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_58;
  
  puVar4 = &uStack_1d0;
  puVar5 = &uStack_1d0;
  func_0x000105968b4c();
  uStack_1d0 = param_1;
  uStack_58 = extraout_x8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_1c8);
  puVar2 = auStack_1b0;
  FUN_105966264(puVar2,param_3);
  uVar1 = SUB84(puVar2,0);
  lStack_168 = *(long *)(unaff_x19 + 0x48);
  uStack_170 = *(undefined8 *)(unaff_x19 + 0x40);
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    do {
      func_0x000105968af8();
      uVar1 = SUB84(puVar2,0);
    } while (extraout_w10 != 0);
  }
  if ((*(byte *)(unaff_x19 + 0x38) & 1) == 0) {
    func_0x0001004b4e98();
    func_0x000105968bd4();
    (*extraout_x8_00)();
    puStack_158 = &UNK_10f315691;
    FUN_105968698(auStack_150,&uStack_1d0);
    uStack_f0 = 0;
    uStack_e8 = (undefined4)param_3;
    uStack_e4 = (undefined4)((ulong)param_3 >> 0x20);
    uStack_e0 = CONCAT31(uStack_e0._1_3_,1);
    lStack_c8 = lStack_168;
    uStack_d0 = uStack_170;
    uStack_d8 = uVar1;
    if (lStack_168 != 0) {
      do {
        func_0x000105968af8();
      } while (extraout_w10_00 != 0);
    }
    pcStack_b8 = FUN_105968724;
    ppuStack_b0 = &PTR_FUN_1108c2c68;
    puVar3 = (undefined8 *)0xa0;
    pbStack_c0 = (byte *)(unaff_x19 + 0x38);
    __Znwm();
    *puVar3 = puStack_158;
    FUN_105968698(puVar3 + 1,auStack_150);
    puVar3[0xe] = CONCAT44(uStack_e4,uStack_e8);
    puVar3[0xd] = uStack_f0;
    *(ulong *)((long)puVar3 + 0x7c) = CONCAT44(uStack_d8,uStack_dc);
    *(ulong *)((long)puVar3 + 0x74) = CONCAT44(uStack_e0,uStack_e4);
    puVar3[0x12] = lStack_c8;
    puVar3[0x11] = uStack_d0;
    if (lStack_c8 != 0) {
      do {
        func_0x000105968af8();
      } while (extraout_w10_01 != 0);
    }
    puVar3[0x13] = pbStack_c0;
    func_0x000105968c68();
    func_0x000105968bfc();
    func_0x000105968adc();
    FUN_1059686f8(&puStack_158);
  }
  func_0x000105968c4c();
  FUN_105968140();
  func_0x000105968b60(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000105968adc();
    FUN_1059686f8(&puStack_158);
    func_0x000105968c4c();
    FUN_105968140(&uStack_1d0);
    func_0x000105968bf4();
    func_0x00010595cba4((undefined1 *)((long)puVar5 + 0x20));
    func_0x000105968c60();
    return (undefined8 *)(undefined1 *)puVar5;
  }
  return puVar4;
}



/* Entry: 105968140; end: 105968167;  */

long FUN_105968140(long param_1)

{
  func_0x00010595cba4(param_1 + 0x20);
  func_0x000105968c60();
  return param_1;
}



/* Entry: 105968168; end: 10596834b;  */

undefined8 *
FUN_105968168(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long unaff_x19;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [24];
  undefined4 uStack_198;
  undefined1 uStack_194;
  undefined1 auStack_190 [48];
  undefined8 uStack_160;
  long lStack_158;
  undefined *puStack_150;
  undefined1 auStack_148 [88];
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  byte *pbStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_58;
  
  func_0x000105968b4c();
  uStack_1b8 = param_1;
  uStack_58 = extraout_x8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_1b0);
  uStack_198 = (undefined4)param_3;
  uStack_194 = (undefined1)((ulong)param_3 >> 0x20);
  puVar2 = auStack_190;
  FUN_105966300(puVar2,param_4);
  uVar1 = SUB84(puVar2,0);
  lStack_158 = *(long *)(unaff_x19 + 0x48);
  uStack_160 = *(undefined8 *)(unaff_x19 + 0x40);
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    do {
      func_0x000105968af8();
      uVar1 = SUB84(puVar2,0);
    } while (extraout_w10 != 0);
  }
  if ((*(byte *)(unaff_x19 + 0x38) & 1) == 0) {
    func_0x0001004b4e98();
    func_0x000105968bd4();
    (*extraout_x8_00)();
    puStack_150 = &UNK_10f3156a7;
    FUN_1059688c0(auStack_148,&uStack_1b8);
    uStack_f0 = 0;
    uStack_e8 = (undefined4)param_4;
    uStack_e4 = (undefined4)((ulong)param_4 >> 0x20);
    uStack_e0 = CONCAT31(uStack_e0._1_3_,1);
    lStack_c8 = lStack_158;
    uStack_d0 = uStack_160;
    uStack_d8 = uVar1;
    if (lStack_158 != 0) {
      do {
        func_0x000105968af8();
      } while (extraout_w10_00 != 0);
    }
    pcStack_b8 = FUN_10596893c;
    ppuStack_b0 = &PTR_FUN_1108c2c80;
    puVar3 = (undefined8 *)0x98;
    pbStack_c0 = (byte *)(unaff_x19 + 0x38);
    __Znwm();
    *puVar3 = puStack_150;
    FUN_1059688c0(puVar3 + 1,auStack_148);
    puVar3[0xd] = CONCAT44(uStack_e4,uStack_e8);
    puVar3[0xc] = uStack_f0;
    *(ulong *)((long)puVar3 + 0x74) = CONCAT44(uStack_d8,uStack_dc);
    *(ulong *)((long)puVar3 + 0x6c) = CONCAT44(uStack_e0,uStack_e4);
    puVar3[0x11] = lStack_c8;
    puVar3[0x10] = uStack_d0;
    if (lStack_c8 != 0) {
      do {
        func_0x000105968af8();
      } while (extraout_w10_01 != 0);
    }
    puVar3[0x12] = pbStack_c0;
    func_0x000105968c68();
    func_0x000105968bfc();
    func_0x000105968adc();
    FUN_105968910(&puStack_150);
  }
  func_0x000105968c4c();
  puVar3 = &uStack_1b8;
  FUN_10596834c();
  func_0x000105968b60(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000105968adc();
    FUN_105968910(&puStack_150);
    func_0x000105968c4c();
    puVar3 = &uStack_1b8;
    FUN_10596834c(puVar3);
    func_0x000105968bf4();
    func_0x00010595cbd4(puVar3 + 5);
    func_0x000105968c60();
    return puVar3;
  }
  return puVar3;
}



/* Entry: 10596834c; end: 105968373;  */

long FUN_10596834c(long param_1)

{
  func_0x00010595cbd4(param_1 + 0x28);
  func_0x000105968c60();
  return param_1;
}



/* Entry: 105968374; end: 105968377;  */

undefined8 * FUN_105968374(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c2bb0;
  func_0x000100902b24(param_1 + 8);
  func_0x000100450be4(param_1 + 5);
  func_0x00010595d4a8(param_1 + 3);
  func_0x000105968400(param_1 + 1);
  return param_1;
}



/* Entry: 105968378; end: 10596838b;  */

void FUN_105968378(void)

{
  func_0x0001059683b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10596838c; end: 105968477;  */

long FUN_10596838c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 105968478; end: 10596849b;  */

long FUN_105968478(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x0001000df548();
  }
  return param_1 + 8;
}



/* Entry: 10596849c; end: 1059684fb;  */

undefined8 * FUN_10596849c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_105966214(param_1 + 1,param_2 + 1);
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  return param_1;
}



/* Entry: 1059684fc; end: 105968673;  */

void FUN_1059684fc(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x0001005e3518();
  if ((**(byte **)(lVar2 + 0xb8) & 1) == 0) {
    plVar1 = *(long **)(*(long *)(lVar2 + 8) + 0x18);
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2 + 0x10,*(undefined4 *)(lVar2 + 0x80));
    func_0x0001005e3518(lVar2 + 0x88);
    func_0x000105968c78();
    plVar1 = *(long **)(lVar2 + 0xa8);
    func_0x000105968b30();
    func_0x000105968bbc();
    func_0x000105968c28();
    func_0x000105968c08(*(undefined8 *)(*plVar1 + 0x18));
    func_0x000105968ca0();
    func_0x000105968b74();
    func_0x000105968b08();
    func_0x000105968b8c();
    func_0x000105968c40();
    func_0x000105968c54();
    func_0x000105968bec();
    func_0x000105968c90();
    func_0x000105968b74();
    func_0x000105968b08();
    func_0x000105968bac();
    func_0x000105968c1c();
    func_0x000105968c54();
    func_0x000105968bec();
    func_0x000105968c88();
    func_0x000105968b74();
    plVar1 = *(long **)(lVar2 + 0xa8);
    func_0x000105968b08();
    func_0x000105968b9c();
    func_0x000105968c34();
    func_0x000105968bec(*(undefined8 *)(*plVar1 + 0x28));
    func_0x000105968c98();
    func_0x000105968b74();
  }
  return;
}



/* Entry: 105968674; end: 105968693;  */

void FUN_105968674(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001059684d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 105968694; end: 105968697;  */

void FUN_105968694(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 105968698; end: 1059686f7;  */

undefined8 * FUN_105968698(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 1,param_2 + 1);
  FUN_105966264(param_1 + 4,param_2 + 4);
  return param_1;
}



/* Entry: 1059686f8; end: 105968723;  */

long FUN_1059686f8(long param_1)

{
  func_0x000100902b24(param_1 + 0x88);
  FUN_105968140(param_1 + 8);
  return param_1;
}



/* Entry: 105968724; end: 10596889b;  */

void FUN_105968724(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x0001005e3518();
  if ((**(byte **)(lVar2 + 0x98) & 1) == 0) {
    plVar1 = *(long **)(*(long *)(lVar2 + 8) + 0x18);
    (**(code **)(*plVar1 + 0x20))(plVar1,lVar2 + 0x10,lVar2 + 0x28);
    func_0x0001005e3518(lVar2 + 0x68);
    func_0x000105968c78();
    plVar1 = *(long **)(lVar2 + 0x88);
    func_0x000105968b30();
    func_0x000105968bbc();
    func_0x000105968c28();
    func_0x000105968c08(*(undefined8 *)(*plVar1 + 0x18));
    func_0x000105968ca0();
    func_0x000105968b74();
    func_0x000105968b08();
    func_0x000105968b8c();
    func_0x000105968c40();
    func_0x000105968c54();
    func_0x000105968bec();
    func_0x000105968c90();
    func_0x000105968b74();
    func_0x000105968b08();
    func_0x000105968bac();
    func_0x000105968c1c();
    func_0x000105968c54();
    func_0x000105968bec();
    func_0x000105968c88();
    func_0x000105968b74();
    plVar1 = *(long **)(lVar2 + 0x88);
    func_0x000105968b08();
    func_0x000105968b9c();
    func_0x000105968c34();
    func_0x000105968bec(*(undefined8 *)(*plVar1 + 0x28));
    func_0x000105968c98();
    func_0x000105968b74();
  }
  return;
}



/* Entry: 10596889c; end: 1059688bb;  */

void FUN_10596889c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1059686f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1059688bc; end: 1059688bf;  */

void FUN_1059688bc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1059688c0; end: 10596890f;  */

undefined8 * FUN_1059688c0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 1,param_2 + 1);
  param_1[4] = param_2[4];
  FUN_105966300(param_1 + 5,param_2 + 5);
  return param_1;
}



/* Entry: 105968910; end: 10596893b;  */

long FUN_105968910(long param_1)

{
  func_0x000100902b24(param_1 + 0x80);
  FUN_10596834c(param_1 + 8);
  return param_1;
}



/* Entry: 10596893c; end: 105968ab7;  */

void FUN_10596893c(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x0001005e3518();
  if ((**(byte **)(lVar2 + 0x90) & 1) == 0) {
    plVar1 = *(long **)(*(long *)(lVar2 + 8) + 0x18);
    (**(code **)(*plVar1 + 0x28))(plVar1,lVar2 + 0x10,*(undefined8 *)(lVar2 + 0x28),lVar2 + 0x30);
    func_0x0001005e3518(lVar2 + 0x60);
    func_0x000105968c78();
    plVar1 = *(long **)(lVar2 + 0x80);
    func_0x000105968b30();
    func_0x000105968bbc();
    func_0x000105968c28();
    func_0x000105968c08(*(undefined8 *)(*plVar1 + 0x18));
    func_0x000105968ca0();
    func_0x000105968b74();
    func_0x000105968b08();
    func_0x000105968b8c();
    func_0x000105968c40();
    func_0x000105968c54();
    func_0x000105968bec();
    func_0x000105968c90();
    func_0x000105968b74();
    func_0x000105968b08();
    func_0x000105968bac();
    func_0x000105968c1c();
    func_0x000105968c54();
    func_0x000105968bec();
    func_0x000105968c88();
    func_0x000105968b74();
    plVar1 = *(long **)(lVar2 + 0x80);
    func_0x000105968b08();
    func_0x000105968b9c();
    func_0x000105968c34();
    func_0x000105968bec(*(undefined8 *)(*plVar1 + 0x28));
    func_0x000105968c98();
    func_0x000105968b74();
  }
  return;
}



/* Entry: 105968ab8; end: 105968ad7;  */

void FUN_105968ab8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_105968910();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 105968ad8; end: 105968ce3;  */

void FUN_105968ad8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 105968ce4; end: 105968e17;  */

undefined *** FUN_105968ce4(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined ****ppppuVar12;
  undefined ****ppppuVar13;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  code *extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long unaff_x19;
  undefined4 uVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined ***pppuStack_2e0;
  undefined1 auStack_2d8 [112];
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined4 uStack_258;
  undefined1 uStack_254;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  undefined *puStack_238;
  undefined1 auStack_230 [144];
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined ***pppuStack_170;
  code *pcStack_168;
  undefined **ppuStack_160;
  undefined8 uStack_108;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined4 uStack_78;
  undefined8 uStack_38;
  
  func_0x000105969f84();
  pbVar1 = (byte *)(param_1 + 0x38);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uStack_38 = extraout_x8;
  if ((bVar2 & 1) == 0) {
    FUN_10598945c(unaff_x19 + 0x28);
    lVar7 = *(long *)(unaff_x19 + 0x10);
    uVar5 = in_ZR;
    if (lVar7 != 0) {
      plVar15 = *(long **)(unaff_x19 + 0x28);
      uVar16 = *(undefined8 *)(unaff_x19 + 8);
      __ZNSt3__119__shared_weak_count4lockEv();
      uVar5 = in_ZR;
      if (lVar7 != 0) {
        ppuStack_98 = (undefined **)0x105969678;
        ppuStack_90 = &PTR_FUN_1108c2d38;
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_88 = uVar16;
        lStack_80 = lVar7;
        (**(code **)(*plVar15 + 0x10))(plVar15,&ppuStack_98);
        func_0x000105969eb8(ppuStack_90);
        FUN_1059695dc(&uStack_a8);
        pppuVar8 = *(undefined ****)(unaff_x19 + 0x28);
        func_0x00010bcceaec();
        goto LAB_105968dc0;
      }
    }
    pppuVar8 = (undefined ***)0x0;
    FUN_10527822c();
  }
  else {
    uStack_88 = 0;
    lStack_80 = 0;
    ppuStack_98 = &PTR_FUN_1108c28b8;
    ppuStack_90 = (undefined **)0x0;
    uStack_78 = 0xe;
    (**(code **)(**(long **)(unaff_x19 + 0x40) + 0x18))(*(long **)(unaff_x19 + 0x40),&ppuStack_98);
    pppuVar8 = &ppuStack_98;
    func_0x000100907750();
LAB_105968dc0:
    func_0x000105969f28(uStack_38);
    uVar5 = 0;
    if ((bool)in_ZR) {
      return pppuVar8;
    }
  }
  ___stack_chk_fail();
  pppuVar9 = pppuVar8;
  func_0x000105969fe8();
  ppppuVar12 = &pppuStack_2e0;
  ppppuVar13 = &pppuStack_2e0;
  func_0x000105969f84();
  puVar10 = auStack_2d8;
  pppuStack_2e0 = pppuVar9;
  uStack_108 = extraout_x8_00;
  FUN_105966214();
  uStack_260 = param_3[1];
  uStack_268 = *param_3;
  if (param_3[1] != 0) {
    do {
      func_0x000105969ef0();
    } while (extraout_w10 != 0);
  }
  uVar6 = SUB84(puVar10,0);
  uVar14 = (undefined4)param_4;
  uStack_254 = (undefined1)((ulong)param_4 >> 0x20);
  ppuStack_248 = pppuVar8[9];
  ppuStack_250 = pppuVar8[8];
  uStack_258 = uVar14;
  if (pppuVar8[9] != (undefined **)0x0) {
    do {
      func_0x000105969ef0();
      uVar6 = SUB84(puVar10,0);
    } while (extraout_w10_00 != 0);
  }
  if (((ulong)pppuVar8[7] & 1) == 0) {
    func_0x0001004b4e98();
    func_0x000105969fd0();
    (*extraout_x8_01)();
    puStack_238 = &UNK_10f31567c;
    FUN_1059696ec(auStack_230,&pppuStack_2e0);
    uStack_1a0 = 0;
    uStack_194 = (undefined4)((ulong)param_4 >> 0x20);
    uStack_190 = CONCAT31(uStack_190._1_3_,1);
    ppuStack_178 = ppuStack_248;
    ppuStack_180 = ppuStack_250;
    uStack_198 = uVar14;
    uStack_188 = uVar6;
    if (ppuStack_248 != (undefined **)0x0) {
      do {
        func_0x000105969ef0();
      } while (extraout_w10_01 != 0);
    }
    pcStack_168 = FUN_10596975c;
    ppuStack_160 = &PTR_FUN_1108c2d50;
    puVar11 = (undefined8 *)0xd0;
    pppuStack_170 = pppuVar8 + 7;
    __Znwm();
    *puVar11 = puStack_238;
    FUN_1059696ec(puVar11 + 1,auStack_230);
    puVar11[0x14] = CONCAT44(uStack_194,uStack_198);
    puVar11[0x13] = uStack_1a0;
    *(ulong *)((long)puVar11 + 0xac) = CONCAT44(uStack_188,uStack_18c);
    *(ulong *)((long)puVar11 + 0xa4) = CONCAT44(uStack_190,uStack_194);
    puVar11[0x18] = ppuStack_178;
    puVar11[0x17] = ppuStack_180;
    if (ppuStack_178 != (undefined **)0x0) {
      do {
        func_0x000105969ef0();
      } while (extraout_w10_02 != 0);
    }
    puVar11[0x19] = pppuStack_170;
    func_0x00010596a064();
    func_0x000105969ff8();
    func_0x000105969ea8();
    func_0x000105969730(&puStack_238);
  }
  func_0x000100902b24(&ppuStack_250);
  FUN_105969004();
  func_0x000105969f28(uStack_108);
  if (!(bool)uVar5) {
    ___stack_chk_fail();
    func_0x000105969ea8();
    func_0x000105969730(&puStack_238);
    func_0x000100902b24(&ppuStack_250);
    FUN_105969004(&pppuStack_2e0);
    func_0x000105969fe8();
    func_0x00010595cc04(ppppuVar13 + 0xf);
    func_0x00010595cb7c(ppppuVar13 + 1);
    return (undefined ***)ppppuVar13;
  }
  return (undefined ***)ppppuVar12;
}



/* Entry: 105968e18; end: 105969003;  */

undefined8 *
FUN_105968e18(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long unaff_x19;
  undefined4 uVar6;
  undefined8 uStack_230;
  undefined1 auStack_228 [112];
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined1 uStack_1a4;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined *puStack_188;
  undefined1 auStack_180 [144];
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  byte *pbStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_58;
  
  puVar4 = &uStack_230;
  puVar5 = &uStack_230;
  func_0x000105969f84();
  puVar2 = auStack_228;
  uStack_230 = param_1;
  uStack_58 = extraout_x8;
  FUN_105966214();
  uStack_1b0 = param_3[1];
  uStack_1b8 = *param_3;
  if (param_3[1] != 0) {
    do {
      func_0x000105969ef0();
    } while (extraout_w10 != 0);
  }
  uVar1 = SUB84(puVar2,0);
  uVar6 = (undefined4)param_4;
  uStack_1a4 = (undefined1)((ulong)param_4 >> 0x20);
  lStack_198 = *(long *)(unaff_x19 + 0x48);
  uStack_1a0 = *(undefined8 *)(unaff_x19 + 0x40);
  uStack_1a8 = uVar6;
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    do {
      func_0x000105969ef0();
      uVar1 = SUB84(puVar2,0);
    } while (extraout_w10_00 != 0);
  }
  if ((*(byte *)(unaff_x19 + 0x38) & 1) == 0) {
    func_0x0001004b4e98();
    func_0x000105969fd0();
    (*extraout_x8_00)();
    puStack_188 = &UNK_10f31567c;
    FUN_1059696ec(auStack_180,&uStack_230);
    uStack_f0 = 0;
    uStack_e4 = (undefined4)((ulong)param_4 >> 0x20);
    uStack_e0 = CONCAT31(uStack_e0._1_3_,1);
    lStack_c8 = lStack_198;
    uStack_d0 = uStack_1a0;
    uStack_e8 = uVar6;
    uStack_d8 = uVar1;
    if (lStack_198 != 0) {
      do {
        func_0x000105969ef0();
      } while (extraout_w10_01 != 0);
    }
    pcStack_b8 = FUN_10596975c;
    ppuStack_b0 = &PTR_FUN_1108c2d50;
    puVar3 = (undefined8 *)0xd0;
    pbStack_c0 = (byte *)(unaff_x19 + 0x38);
    __Znwm();
    *puVar3 = puStack_188;
    FUN_1059696ec(puVar3 + 1,auStack_180);
    puVar3[0x14] = CONCAT44(uStack_e4,uStack_e8);
    puVar3[0x13] = uStack_f0;
    *(ulong *)((long)puVar3 + 0xac) = CONCAT44(uStack_d8,uStack_dc);
    *(ulong *)((long)puVar3 + 0xa4) = CONCAT44(uStack_e0,uStack_e4);
    puVar3[0x18] = lStack_c8;
    puVar3[0x17] = uStack_d0;
    if (lStack_c8 != 0) {
      do {
        func_0x000105969ef0();
      } while (extraout_w10_02 != 0);
    }
    puVar3[0x19] = pbStack_c0;
    func_0x00010596a064();
    func_0x000105969ff8();
    func_0x000105969ea8();
    func_0x000105969730(&puStack_188);
  }
  func_0x000100902b24(&uStack_1a0);
  FUN_105969004();
  func_0x000105969f28(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000105969ea8();
    func_0x000105969730(&puStack_188);
    func_0x000100902b24(&uStack_1a0);
    FUN_105969004(&uStack_230);
    func_0x000105969fe8();
    func_0x00010595cc04((undefined1 *)((long)puVar5 + 0x78));
    func_0x00010595cb7c((undefined1 *)((long)puVar5 + 8));
    return (undefined8 *)(undefined1 *)puVar5;
  }
  return puVar4;
}



/* Entry: 105969004; end: 10596902f;  */

long FUN_105969004(long param_1)

{
  func_0x00010595cc04(param_1 + 0x78);
  func_0x00010595cb7c(param_1 + 8);
  return param_1;
}



/* Entry: 105969030; end: 1059691bb;  */

undefined ** FUN_105969030(undefined **param_1,undefined4 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined4 uVar4;
  undefined **ppuVar5;
  long *plVar6;
  long *plVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined1 **ppuVar12;
  undefined1 **ppuVar13;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  undefined1 *puStack_2e0;
  undefined1 auStack_2d8 [24];
  undefined1 auStack_2c0 [64];
  undefined8 uStack_280;
  long lStack_278;
  undefined *puStack_268;
  undefined1 auStack_260 [96];
  undefined8 uStack_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  byte *pbStack_1d0;
  code *pcStack_1c8;
  undefined **ppuStack_1c0;
  undefined8 uStack_168;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_f8;
  undefined **ppuStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined4 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  
  ppuVar8 = &puStack_110;
  ppuVar9 = &puStack_110;
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_108 = param_1[9];
  puStack_110 = param_1[8];
  ppuVar5 = param_1;
  if (param_1[9] != (undefined *)0x0) {
    do {
      func_0x000105969ef0();
    } while (extraout_w10 != 0);
  }
  ppuVar1 = param_1 + 7;
  if (((ulong)*ppuVar1 & 1) == 0) {
    func_0x0001004b4e98();
    plVar6 = *(long **)(param_1[5] + 0x18);
    (**(code **)(*plVar6 + 0x58))();
    plVar7 = (long *)param_1[5];
    puStack_f8 = &UNK_10f3156e2;
    uStack_e0 = 0;
    uStack_d0 = 1;
    uStack_c8 = SUB84(plVar6,0);
    puStack_c0 = puStack_110;
    puStack_b8 = puStack_108;
    if (puStack_108 != (undefined *)0x0) {
      plVar6 = (long *)(puStack_108 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pcStack_a8 = FUN_1059698e0;
    ppuStack_a0 = &PTR_FUN_1108c2d68;
    uStack_88 = CONCAT44(uStack_e4,param_2);
    puStack_98 = &UNK_10f3156e2;
    uStack_70 = CONCAT71(uStack_cf,1);
    uStack_80 = 0;
    puStack_60 = puStack_110;
    puStack_58 = puStack_108;
    ppuStack_f0 = param_1;
    uStack_e8 = param_2;
    ppuStack_d8 = ppuVar5;
    ppuStack_b0 = ppuVar1;
    ppuStack_90 = param_1;
    ppuStack_78 = ppuVar5;
    uStack_68 = uStack_c8;
    if (puStack_108 != (undefined *)0x0) {
      do {
        func_0x000105969ef0();
      } while (extraout_w10_00 != 0);
    }
    param_1 = &puStack_f8;
    ppuStack_50 = ppuVar1;
    (**(code **)(*plVar7 + 0x10))();
    func_0x000105969eb8(ppuStack_a0);
    func_0x000100902b24(&puStack_c0);
  }
  func_0x000100902b24();
  func_0x000105969f28(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000105969eb8(ppuStack_a0);
    func_0x000100902b24(param_1 + 7);
    func_0x000100902b24();
    func_0x000105969fe8();
    ppuVar12 = &puStack_2e0;
    ppuVar13 = &puStack_2e0;
    func_0x000105969f84();
    puStack_2e0 = (undefined1 *)ppuVar9;
    uStack_168 = extraout_x8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_2d8);
    puVar10 = auStack_2c0;
    FUN_105966264(puVar10,param_3);
    uVar4 = SUB84(puVar10,0);
    lStack_278 = *(long *)((long)ppuVar8 + 0x48);
    uStack_280 = *(undefined8 *)((long)ppuVar8 + 0x40);
    if (*(long *)((long)ppuVar8 + 0x48) != 0) {
      do {
        func_0x000105969ef0();
        uVar4 = SUB84(puVar10,0);
      } while (extraout_w10_01 != 0);
    }
    if ((*(byte *)((long)ppuVar8 + 0x38) & 1) == 0) {
      func_0x0001004b4e98();
      func_0x000105969fd0();
      (*extraout_x8_00)();
      puStack_268 = &UNK_10f315691;
      FUN_105969aa8(auStack_260,&puStack_2e0);
      uStack_200 = 0;
      uStack_1f8 = (undefined4)param_3;
      uStack_1f4 = (undefined4)((ulong)param_3 >> 0x20);
      uStack_1f0 = CONCAT31(uStack_1f0._1_3_,1);
      lStack_1d8 = lStack_278;
      uStack_1e0 = uStack_280;
      uStack_1e8 = uVar4;
      if (lStack_278 != 0) {
        do {
          func_0x000105969ef0();
        } while (extraout_w10_02 != 0);
      }
      pcStack_1c8 = FUN_105969b34;
      ppuStack_1c0 = &PTR_FUN_1108c2d80;
      puVar11 = (undefined8 *)0xa0;
      pbStack_1d0 = (byte *)((long)ppuVar8 + 0x38);
      __Znwm();
      *puVar11 = puStack_268;
      FUN_105969aa8(puVar11 + 1,auStack_260);
      puVar11[0xe] = CONCAT44(uStack_1f4,uStack_1f8);
      puVar11[0xd] = uStack_200;
      *(ulong *)((long)puVar11 + 0x7c) = CONCAT44(uStack_1e8,uStack_1ec);
      *(ulong *)((long)puVar11 + 0x74) = CONCAT44(uStack_1f0,uStack_1f4);
      puVar11[0x12] = lStack_1d8;
      puVar11[0x11] = uStack_1e0;
      if (lStack_1d8 != 0) {
        do {
          func_0x000105969ef0();
        } while (extraout_w10_03 != 0);
      }
      puVar11[0x13] = pbStack_1d0;
      func_0x00010596a064();
      func_0x000105969ff8();
      func_0x000105969ea8();
      FUN_105969b08(&puStack_268);
    }
    func_0x00010596a05c();
    FUN_105969390();
    func_0x000105969f28(uStack_168);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000105969ea8();
      FUN_105969b08(&puStack_268);
      func_0x00010596a05c();
      FUN_105969390(&puStack_2e0);
      func_0x000105969fe8();
      func_0x00010595cba4((undefined1 *)((long)ppuVar13 + 0x20));
      func_0x00010596a04c();
      return (undefined **)(undefined1 *)ppuVar13;
    }
    return ppuVar12;
  }
  return ppuVar8;
}



/* Entry: 1059691bc; end: 10596938f;  */

undefined8 * FUN_1059691bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long unaff_x19;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [64];
  undefined8 uStack_170;
  long lStack_168;
  undefined *puStack_158;
  undefined1 auStack_150 [96];
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  byte *pbStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_58;
  
  puVar4 = &uStack_1d0;
  puVar5 = &uStack_1d0;
  func_0x000105969f84();
  uStack_1d0 = param_1;
  uStack_58 = extraout_x8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_1c8);
  puVar2 = auStack_1b0;
  FUN_105966264(puVar2,param_3);
  uVar1 = SUB84(puVar2,0);
  lStack_168 = *(long *)(unaff_x19 + 0x48);
  uStack_170 = *(undefined8 *)(unaff_x19 + 0x40);
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    do {
      func_0x000105969ef0();
      uVar1 = SUB84(puVar2,0);
    } while (extraout_w10 != 0);
  }
  if ((*(byte *)(unaff_x19 + 0x38) & 1) == 0) {
    func_0x0001004b4e98();
    func_0x000105969fd0();
    (*extraout_x8_00)();
    puStack_158 = &UNK_10f315691;
    FUN_105969aa8(auStack_150,&uStack_1d0);
    uStack_f0 = 0;
    uStack_e8 = (undefined4)param_3;
    uStack_e4 = (undefined4)((ulong)param_3 >> 0x20);
    uStack_e0 = CONCAT31(uStack_e0._1_3_,1);
    lStack_c8 = lStack_168;
    uStack_d0 = uStack_170;
    uStack_d8 = uVar1;
    if (lStack_168 != 0) {
      do {
        func_0x000105969ef0();
      } while (extraout_w10_00 != 0);
    }
    pcStack_b8 = FUN_105969b34;
    ppuStack_b0 = &PTR_FUN_1108c2d80;
    puVar3 = (undefined8 *)0xa0;
    pbStack_c0 = (byte *)(unaff_x19 + 0x38);
    __Znwm();
    *puVar3 = puStack_158;
    FUN_105969aa8(puVar3 + 1,auStack_150);
    puVar3[0xe] = CONCAT44(uStack_e4,uStack_e8);
    puVar3[0xd] = uStack_f0;
    *(ulong *)((long)puVar3 + 0x7c) = CONCAT44(uStack_d8,uStack_dc);
    *(ulong *)((long)puVar3 + 0x74) = CONCAT44(uStack_e0,uStack_e4);
    puVar3[0x12] = lStack_c8;
    puVar3[0x11] = uStack_d0;
    if (lStack_c8 != 0) {
      do {
        func_0x000105969ef0();
      } while (extraout_w10_01 != 0);
    }
    puVar3[0x13] = pbStack_c0;
    func_0x00010596a064();
    func_0x000105969ff8();
    func_0x000105969ea8();
    FUN_105969b08(&puStack_158);
  }
  func_0x00010596a05c();
  FUN_105969390();
  func_0x000105969f28(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000105969ea8();
    FUN_105969b08(&puStack_158);
    func_0x00010596a05c();
    FUN_105969390(&uStack_1d0);
    func_0x000105969fe8();
    func_0x00010595cba4((undefined1 *)((long)puVar5 + 0x20));
    func_0x00010596a04c();
    return (undefined8 *)(undefined1 *)puVar5;
  }
  return puVar4;
}



/* Entry: 105969390; end: 1059693b7;  */

long FUN_105969390(long param_1)

{
  func_0x00010595cba4(param_1 + 0x20);
  func_0x00010596a04c();
  return param_1;
}



/* Entry: 1059693b8; end: 10596959b;  */

undefined8 *
FUN_1059693b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long unaff_x19;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [24];
  undefined4 uStack_198;
  undefined1 uStack_194;
  undefined1 auStack_190 [48];
  undefined8 uStack_160;
  long lStack_158;
  undefined *puStack_150;
  undefined1 auStack_148 [88];
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  byte *pbStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_58;
  
  func_0x000105969f84();
  uStack_1b8 = param_1;
  uStack_58 = extraout_x8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_1b0);
  uStack_198 = (undefined4)param_3;
  uStack_194 = (undefined1)((ulong)param_3 >> 0x20);
  puVar2 = auStack_190;
  FUN_105966300(puVar2,param_4);
  uVar1 = SUB84(puVar2,0);
  lStack_158 = *(long *)(unaff_x19 + 0x48);
  uStack_160 = *(undefined8 *)(unaff_x19 + 0x40);
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    do {
      func_0x000105969ef0();
      uVar1 = SUB84(puVar2,0);
    } while (extraout_w10 != 0);
  }
  if ((*(byte *)(unaff_x19 + 0x38) & 1) == 0) {
    func_0x0001004b4e98();
    func_0x000105969fd0();
    (*extraout_x8_00)();
    puStack_150 = &UNK_10f3156a7;
    FUN_105969cb4(auStack_148,&uStack_1b8);
    uStack_f0 = 0;
    uStack_e8 = (undefined4)param_4;
    uStack_e4 = (undefined4)((ulong)param_4 >> 0x20);
    uStack_e0 = CONCAT31(uStack_e0._1_3_,1);
    lStack_c8 = lStack_158;
    uStack_d0 = uStack_160;
    uStack_d8 = uVar1;
    if (lStack_158 != 0) {
      do {
        func_0x000105969ef0();
      } while (extraout_w10_00 != 0);
    }
    pcStack_b8 = FUN_105969d24;
    ppuStack_b0 = &PTR_FUN_1108c2d98;
    puVar3 = (undefined8 *)0x98;
    pbStack_c0 = (byte *)(unaff_x19 + 0x38);
    __Znwm();
    *puVar3 = puStack_150;
    FUN_105969cb4(puVar3 + 1,auStack_148);
    puVar3[0xd] = CONCAT44(uStack_e4,uStack_e8);
    puVar3[0xc] = uStack_f0;
    *(ulong *)((long)puVar3 + 0x74) = CONCAT44(uStack_d8,uStack_dc);
    *(ulong *)((long)puVar3 + 0x6c) = CONCAT44(uStack_e0,uStack_e4);
    puVar3[0x11] = lStack_c8;
    puVar3[0x10] = uStack_d0;
    if (lStack_c8 != 0) {
      do {
        func_0x000105969ef0();
      } while (extraout_w10_01 != 0);
    }
    puVar3[0x12] = pbStack_c0;
    func_0x00010596a064();
    func_0x000105969ff8();
    func_0x000105969ea8();
    FUN_105969cf8(&puStack_150);
  }
  func_0x00010596a05c();
  puVar3 = &uStack_1b8;
  FUN_10596959c();
  func_0x000105969f28(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000105969ea8();
    FUN_105969cf8(&puStack_150);
    func_0x00010596a05c();
    puVar3 = &uStack_1b8;
    FUN_10596959c(puVar3);
    func_0x000105969fe8();
    func_0x00010595cbd4(puVar3 + 5);
    func_0x00010596a04c();
    return puVar3;
  }
  return puVar3;
}



/* Entry: 10596959c; end: 1059695c3;  */

long FUN_10596959c(long param_1)

{
  func_0x00010595cbd4(param_1 + 0x28);
  func_0x00010596a04c();
  return param_1;
}



/* Entry: 1059695c4; end: 1059695c7;  */

undefined8 * FUN_1059695c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c2ca8;
  func_0x000100902b24(param_1 + 8);
  func_0x000100450be4(param_1 + 5);
  FUN_10595dcac(param_1 + 3);
  func_0x000105969650(param_1 + 1);
  return param_1;
}



/* Entry: 1059695c8; end: 1059695db;  */

void FUN_1059695c8(void)

{
  func_0x000105969604();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1059695dc; end: 1059696c7;  */

long FUN_1059695dc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1059696c8; end: 1059696eb;  */

long FUN_1059696c8(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x0001000df548();
  }
  return param_1 + 8;
}



/* Entry: 1059696ec; end: 10596975b;  */

void FUN_1059696ec(void)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x00010596a07c();
  FUN_105966214();
  lVar1 = *(long *)(unaff_x20 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x78);
  *(undefined8 *)(unaff_x19 + 0x80) = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined8 *)(unaff_x19 + 0x78) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000105969ef0();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)(unaff_x20 + 0x88);
  return;
}



/* Entry: 10596975c; end: 1059698bb;  */

void FUN_10596975c(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x0001005e3518();
  if ((**(byte **)(lVar2 + 200) & 1) == 0) {
    plVar1 = *(long **)(*(long *)(lVar2 + 8) + 0x18);
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2 + 0x10,lVar2 + 0x80,*(undefined8 *)(lVar2 + 0x90));
    func_0x0001005e3518(lVar2 + 0x98);
    func_0x00010596a018();
    plVar1 = *(long **)(lVar2 + 0xb8);
    func_0x000105969ed4();
    func_0x000105969f6c();
    func_0x000105969fa4();
    func_0x00010596a004(*(undefined8 *)(*plVar1 + 0x18));
    func_0x00010596a044();
    func_0x000105969f7c();
    func_0x000105969ec4();
    func_0x00010596a0d8();
    func_0x000105969f3c();
    func_0x000105969fb0();
    func_0x00010596a028();
    func_0x000105969ff0();
    func_0x00010596a03c();
    func_0x000105969f7c();
    func_0x000105969ec4();
    func_0x00010596a09c();
    func_0x000105969f5c();
    func_0x000105969f98();
    func_0x00010596a028();
    func_0x000105969ff0();
    func_0x00010596a034();
    func_0x000105969f7c();
    plVar1 = *(long **)(lVar2 + 0xb8);
    func_0x000105969ec4();
    func_0x00010596a090();
    func_0x000105969f4c();
    func_0x000105969fbc();
    func_0x000105969ff0(*(undefined8 *)(*plVar1 + 0x28));
    func_0x00010596a054();
    func_0x000105969f7c();
  }
  return;
}



/* Entry: 1059698bc; end: 1059698db;  */

void FUN_1059698bc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000105969730();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1059698dc; end: 1059698df;  */

void FUN_1059698dc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1059698e0; end: 105969a43;  */

void FUN_1059698e0(long param_1)

{
  long *plVar1;
  long lVar2;
  
  func_0x0001005e3518();
  if ((**(byte **)(param_1 + 0x58) & 1) == 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 0x18);
    (**(code **)(*plVar1 + 0x20))(plVar1,*(undefined4 *)(param_1 + 0x20));
    lVar2 = param_1 + 0x28;
    func_0x0001005e3518(lVar2);
    func_0x00010596a018();
    plVar1 = *(long **)(param_1 + 0x48);
    func_0x000105969ed4();
    func_0x000105969f6c();
    func_0x000105969fa4();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
    func_0x00010596a044();
    func_0x000105969f7c();
    plVar1 = *(long **)(param_1 + 0x48);
    func_0x000105969ec4();
    func_0x00010596a0d8();
    func_0x000105969f3c();
    func_0x000105969fb0();
    func_0x00010596a074(*(undefined8 *)(*plVar1 + 0x20));
    func_0x00010596a03c();
    func_0x000105969f7c();
    plVar1 = *(long **)(param_1 + 0x48);
    func_0x000105969ec4();
    func_0x00010596a09c();
    func_0x000105969f5c();
    func_0x000105969f98();
    func_0x00010596a074(*(undefined8 *)(*plVar1 + 0x20));
    func_0x00010596a034();
    func_0x000105969f7c();
    plVar1 = *(long **)(param_1 + 0x48);
    func_0x000105969ec4();
    func_0x00010596a090();
    func_0x000105969f4c();
    func_0x000105969fbc();
    func_0x00010596a074(*(undefined8 *)(*plVar1 + 0x28));
    func_0x00010596a054();
    func_0x000105969f7c();
  }
  return;
}



/* Entry: 105969a44; end: 105969aa7;  */

void FUN_105969a44(long param_1)

{
  param_1 = param_1 + 0x40;
  func_0x000100902b18();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 105969aa8; end: 105969b07;  */

undefined8 * FUN_105969aa8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 1,param_2 + 1);
  FUN_105966264(param_1 + 4,param_2 + 4);
  return param_1;
}



/* Entry: 105969b08; end: 105969b33;  */

long FUN_105969b08(long param_1)

{
  func_0x000100902b24(param_1 + 0x88);
  FUN_105969390(param_1 + 8);
  return param_1;
}



/* Entry: 105969b34; end: 105969c8f;  */

void FUN_105969b34(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x0001005e3518();
  if ((**(byte **)(lVar2 + 0x98) & 1) == 0) {
    plVar1 = *(long **)(*(long *)(lVar2 + 8) + 0x18);
    (**(code **)(*plVar1 + 0x28))(plVar1,lVar2 + 0x10,lVar2 + 0x28);
    func_0x0001005e3518(lVar2 + 0x68);
    func_0x00010596a018();
    plVar1 = *(long **)(lVar2 + 0x88);
    func_0x000105969ed4();
    func_0x000105969f6c();
    func_0x000105969fa4();
    func_0x00010596a004(*(undefined8 *)(*plVar1 + 0x18));
    func_0x00010596a044();
    func_0x000105969f7c();
    func_0x000105969ec4();
    func_0x00010596a0d8();
    func_0x000105969f3c();
    func_0x000105969fb0();
    func_0x00010596a028();
    func_0x000105969ff0();
    func_0x00010596a03c();
    func_0x000105969f7c();
    func_0x000105969ec4();
    func_0x00010596a09c();
    func_0x000105969f5c();
    func_0x000105969f98();
    func_0x00010596a028();
    func_0x000105969ff0();
    func_0x00010596a034();
    func_0x000105969f7c();
    plVar1 = *(long **)(lVar2 + 0x88);
    func_0x000105969ec4();
    func_0x00010596a090();
    func_0x000105969f4c();
    func_0x000105969fbc();
    func_0x000105969ff0(*(undefined8 *)(*plVar1 + 0x28));
    func_0x00010596a054();
    func_0x000105969f7c();
  }
  return;
}



/* Entry: 105969c90; end: 105969caf;  */

void FUN_105969c90(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_105969b08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 105969cb0; end: 105969cb3;  */

void FUN_105969cb0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 105969cb4; end: 105969cf7;  */

void FUN_105969cb4(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010596a07c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(unaff_x20 + 0x20);
  FUN_105966300(unaff_x19 + 0x28,unaff_x20 + 0x28);
  return;
}



/* Entry: 105969cf8; end: 105969d23;  */

long FUN_105969cf8(long param_1)

{
  func_0x000100902b24(param_1 + 0x80);
  FUN_10596959c(param_1 + 8);
  return param_1;
}



/* Entry: 105969d24; end: 105969e83;  */

void FUN_105969d24(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x0001005e3518();
  if ((**(byte **)(lVar2 + 0x90) & 1) == 0) {
    plVar1 = *(long **)(*(long *)(lVar2 + 8) + 0x18);
    (**(code **)(*plVar1 + 0x30))(plVar1,lVar2 + 0x10,*(undefined8 *)(lVar2 + 0x28),lVar2 + 0x30);
    func_0x0001005e3518(lVar2 + 0x60);
    func_0x00010596a018();
    plVar1 = *(long **)(lVar2 + 0x80);
    func_0x000105969ed4();
    func_0x000105969f6c();
    func_0x000105969fa4();
    func_0x00010596a004(*(undefined8 *)(*plVar1 + 0x18));
    func_0x00010596a044();
    func_0x000105969f7c();
    func_0x000105969ec4();
    func_0x00010596a0d8();
    func_0x000105969f3c();
    func_0x000105969fb0();
    func_0x00010596a028();
    func_0x000105969ff0();
    func_0x00010596a03c();
    func_0x000105969f7c();
    func_0x000105969ec4();
    func_0x00010596a09c();
    func_0x000105969f5c();
    func_0x000105969f98();
    func_0x00010596a028();
    func_0x000105969ff0();
    func_0x00010596a034();
    func_0x000105969f7c();
    plVar1 = *(long **)(lVar2 + 0x80);
    func_0x000105969ec4();
    func_0x00010596a090();
    func_0x000105969f4c();
    func_0x000105969fbc();
    func_0x000105969ff0(*(undefined8 *)(*plVar1 + 0x28));
    func_0x00010596a054();
    func_0x000105969f7c();
  }
  return;
}



/* Entry: 105969e84; end: 105969ea3;  */

void FUN_105969e84(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_105969cf8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 105969ea4; end: 10596a0e3;  */

void FUN_105969ea4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10596a0e4; end: 10596a2ff;  */

undefined8 * FUN_10596a0e4(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long lVar6;
  long lVar7;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [112];
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [32];
  code *pcStack_a0;
  undefined **ppuStack_98;
  undefined8 *puStack_90;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  
  puVar4 = &uStack_150;
  puVar5 = &uStack_150;
  func_0x00010596aa94();
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  uStack_148 = *(undefined8 *)(param_1 + 0x10);
  uStack_150 = *(undefined8 *)(param_1 + 8);
  uStack_68 = extraout_x8;
  if (*(long *)(param_1 + 0x10) != 0) {
    do {
      func_0x00010596aa1c();
    } while (extraout_w10 != 0);
  }
  FUN_105966214(auStack_140);
  lStack_c8 = param_3[1];
  uStack_d0 = *param_3;
  if (param_3[1] != 0) {
    do {
      func_0x00010596aa1c();
    } while (extraout_w10_00 != 0);
  }
  puVar2 = auStack_c0;
  FUN_10596a778(puVar2,param_4);
  func_0x00010028c49c();
  lVar6 = puVar1[2];
  __ZNSt3__15mutex4lockEv(lVar6 + 8);
  lVar7 = *(long *)(lVar6 + 0x70);
  pcStack_a0 = FUN_10596a950;
  ppuStack_98 = &PTR_FUN_1108c2e00;
  __Znwm(0xb0);
  func_0x00010596aaa4();
  FUN_105966214();
  param_3[0x11] = lStack_c8;
  param_3[0x10] = uStack_d0;
  if (lStack_c8 != 0) {
    do {
      func_0x00010596aa1c();
    } while (extraout_w10_01 != 0);
  }
  FUN_10596a778(param_3 + 0x12,auStack_c0);
  puStack_90 = param_3;
  puStack_70 = puVar2;
  func_0x0001005760fc(lVar6 + 0x48,&pcStack_a0);
  func_0x00010596aa44(ppuStack_98);
  __ZNSt3__15mutex6unlockEv(lVar6 + 8);
  if (lVar7 == 0) {
    plVar3 = (long *)*puVar1;
    ppuStack_98 = (undefined **)puVar1[3];
    pcStack_a0 = (code *)puVar1[2];
    if (puVar1[3] != 0) {
      do {
        func_0x00010596aa1c();
      } while (extraout_w10_02 != 0);
    }
    (**(code **)(*plVar3 + 0x10))();
    func_0x000100576684(&pcStack_a0);
  }
  FUN_10596a300();
  func_0x00010596aa50(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000100576684(&pcStack_a0);
    FUN_10596a300();
    func_0x00010596aa6c();
    FUN_10596a8f8((undefined1 *)((long)puVar5 + 0x90));
    func_0x00010595cc04((undefined1 *)((long)puVar5 + 0x80));
    func_0x00010595cb7c((undefined1 *)((long)puVar5 + 0x10));
    func_0x00010048d444();
    if (puVar5 != (undefined8 *)0x0) {
      func_0x0001000df548();
    }
    return (undefined8 *)(undefined1 *)puVar4;
  }
  return puVar4;
}



/* Entry: 10596a300; end: 10596a333;  */

undefined8 FUN_10596a300(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_10596a8f8(param_1 + 0x90);
  func_0x00010595cc04(param_1 + 0x80);
  func_0x00010595cb7c(param_1 + 0x10);
  func_0x00010048d444();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10596a334; end: 10596a537;  */

undefined8 *
FUN_10596a334(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long lVar6;
  long lVar7;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [24];
  undefined4 uStack_118;
  undefined1 auStack_110 [112];
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  puVar4 = &uStack_140;
  puVar5 = &uStack_140;
  func_0x00010596aa94();
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  uStack_138 = *(undefined8 *)(param_1 + 0x10);
  uStack_140 = *(undefined8 *)(param_1 + 8);
  uStack_58 = extraout_x8;
  if (*(long *)(param_1 + 0x10) != 0) {
    do {
      func_0x00010596aa1c();
    } while (extraout_w10 != 0);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_130);
  uStack_118 = (undefined4)param_4;
  puVar2 = auStack_110;
  FUN_105966214(puVar2,param_3);
  lStack_98 = param_5[1];
  uStack_a0 = *param_5;
  if (param_5[1] != 0) {
    do {
      func_0x00010596aa1c();
    } while (extraout_w10_00 != 0);
  }
  func_0x00010028c49c();
  lVar6 = puVar1[2];
  __ZNSt3__15mutex4lockEv(lVar6 + 8);
  lVar7 = *(long *)(lVar6 + 0x70);
  uStack_90 = 0x10596a990;
  ppuStack_88 = &PTR_FUN_1108c2e18;
  __Znwm(0xb0);
  func_0x00010596aaa4();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_4,auStack_130);
  *(undefined4 *)(param_3 + 0x28) = uStack_118;
  FUN_105966214(param_3 + 0x30,auStack_110);
  *(long *)(param_3 + 0xa8) = lStack_98;
  *(undefined8 *)(param_3 + 0xa0) = uStack_a0;
  if (lStack_98 != 0) {
    do {
      func_0x00010596aa1c();
    } while (extraout_w10_01 != 0);
  }
  lStack_80 = param_3;
  puStack_60 = puVar2;
  func_0x0001005760fc(lVar6 + 0x48,&uStack_90);
  func_0x00010596aa44(ppuStack_88);
  __ZNSt3__15mutex6unlockEv(lVar6 + 8);
  if (lVar7 == 0) {
    plVar3 = (long *)*puVar1;
    ppuStack_88 = (undefined **)puVar1[3];
    uStack_90 = puVar1[2];
    if (puVar1[3] != 0) {
      do {
        func_0x00010596aa1c();
      } while (extraout_w10_02 != 0);
    }
    (**(code **)(*plVar3 + 0x10))();
    func_0x00010596aa74();
  }
  FUN_10596a538();
  func_0x00010596aa50(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010596aa74();
    FUN_10596a538();
    func_0x00010596aa6c();
    func_0x00010595cc04((undefined1 *)((long)puVar5 + 0xa0));
    func_0x00010595cb7c((undefined1 *)((long)puVar5 + 0x30));
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
              ((undefined1 *)((long)puVar5 + 0x10));
    func_0x00010048d444();
    if (puVar5 != (undefined8 *)0x0) {
      func_0x0001000df548();
    }
    return (undefined8 *)(undefined1 *)puVar4;
  }
  return puVar4;
}



/* Entry: 10596a538; end: 10596a56b;  */

undefined8 FUN_10596a538(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010595cc04(param_1 + 0xa0);
  func_0x00010595cb7c(param_1 + 0x30);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x10);
  func_0x00010048d444();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10596a56c; end: 10596a733;  */

undefined8 * FUN_10596a56c(long param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long lVar7;
  long lVar8;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [112];
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  undefined8 *puStack_80;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  puVar5 = &uStack_130;
  puVar6 = &uStack_130;
  func_0x00010596aa94();
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  uStack_128 = *(undefined8 *)(param_1 + 0x10);
  uStack_130 = *(undefined8 *)(param_1 + 8);
  uStack_58 = extraout_x8;
  if (*(long *)(param_1 + 0x10) != 0) {
    do {
      func_0x00010596aa1c();
    } while (extraout_w10 != 0);
  }
  puVar2 = auStack_120;
  FUN_105966214();
  lStack_a0 = param_4[1];
  uStack_a8 = *param_4;
  uStack_b0 = param_3;
  if (param_4[1] != 0) {
    do {
      func_0x00010596aa1c();
    } while (extraout_w10_00 != 0);
  }
  func_0x00010028c49c();
  lVar7 = puVar1[2];
  __ZNSt3__15mutex4lockEv(lVar7 + 8);
  lVar8 = *(long *)(lVar7 + 0x70);
  uStack_90 = 0x10596a9d8;
  ppuStack_88 = &PTR_FUN_1108c2e30;
  puVar3 = (undefined8 *)0x98;
  __Znwm();
  puVar3[1] = uStack_128;
  *puVar3 = uStack_130;
  uStack_130 = 0;
  uStack_128 = 0;
  FUN_105966214(puVar3 + 2,auStack_120);
  *(undefined4 *)(puVar3 + 0x10) = uStack_b0;
  puVar3[0x12] = lStack_a0;
  puVar3[0x11] = uStack_a8;
  if (lStack_a0 != 0) {
    do {
      func_0x00010596aa1c();
    } while (extraout_w10_01 != 0);
  }
  puStack_80 = puVar3;
  puStack_60 = puVar2;
  func_0x0001005760fc(lVar7 + 0x48,&uStack_90);
  func_0x00010596aa84();
  __ZNSt3__15mutex6unlockEv(lVar7 + 8);
  if (lVar8 == 0) {
    plVar4 = (long *)*puVar1;
    ppuStack_88 = (undefined **)puVar1[3];
    uStack_90 = puVar1[2];
    if (puVar1[3] != 0) {
      do {
        func_0x00010596aa1c();
      } while (extraout_w10_02 != 0);
    }
    (**(code **)(*plVar4 + 0x10))();
    func_0x00010596aa74();
  }
  FUN_10596a734();
  func_0x00010596aa50(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010596aa74();
    FUN_10596a734();
    func_0x00010596aa6c();
    func_0x00010595cc04((undefined1 *)((long)puVar6 + 0x88));
    func_0x00010595cb7c((undefined1 *)((long)puVar6 + 0x10));
    func_0x00010048d444();
    if (puVar6 != (undefined8 *)0x0) {
      func_0x0001000df548();
    }
    return (undefined8 *)(undefined1 *)puVar5;
  }
  return puVar5;
}


