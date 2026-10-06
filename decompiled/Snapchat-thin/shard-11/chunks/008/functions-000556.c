/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108955b98; end: 108955c37;  */

undefined1 * FUN_108955b98(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_40 [16];
  long lStack_30;
  long lStack_28;
  
  puVar2 = auStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_108955c38(auStack_40,1);
  FUN_108955c90(lStack_30);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x000108955d00();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000108955d00(auStack_40);
  __Unwind_Resume();
  *(undefined8 *)(puVar2 + 8) = param_3;
  puVar3 = puVar2;
  FUN_108955c60();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 108955c38; end: 108955c5f;  */

long FUN_108955c38(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_108955c60();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 108955c60; end: 108955c8f;  */

undefined8 * FUN_108955c60(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x492492492492493) {
    puVar1 = (undefined8 *)(param_2 * 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a9dfa0;
  FUN_10894d34c(param_1 + 3);
  return param_1;
}



/* Entry: 108955c90; end: 108955cd3;  */

undefined8 * FUN_108955c90(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a9dfa0;
  FUN_10894d34c(param_1 + 3);
  return param_1;
}



/* Entry: 108955cd4; end: 108955cd7;  */

void FUN_108955cd4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9dfa0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108955cd8; end: 108955ceb;  */

void FUN_108955cd8(void)

{
  func_0x000108955cf4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108955cec; end: 108955d0f;  */

void FUN_108955cec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108955fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 8))();
  return;
}



/* Entry: 108955d10; end: 108955d33;  */

void FUN_108955d10(long param_1)

{
  func_0x000108955fc0();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 108955d34; end: 108955d37;  */

void FUN_108955d34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9dff0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108955d38; end: 108955d4b;  */

void FUN_108955d38(void)

{
  func_0x000108955d5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108955d4c; end: 108955d67;  */

void FUN_108955d4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108955d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108955d68; end: 108955d8b;  */

void FUN_108955d68(long param_1)

{
  func_0x000108955fc0();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 108955d8c; end: 108955d8f;  */

void FUN_108955d8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9e040;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108955d90; end: 108955da3;  */

void FUN_108955d90(void)

{
  func_0x000108955dac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108955da4; end: 108955db7;  */

void FUN_108955da4(void)

{
  return;
}



/* Entry: 108955db8; end: 108955ddb;  */

void FUN_108955db8(long param_1)

{
  func_0x000108955fc0();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 108955ddc; end: 108955ddf;  */

void FUN_108955ddc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9e090;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108955de0; end: 108955df3;  */

void FUN_108955de0(void)

{
  func_0x000108955e04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108955df4; end: 108955e0f;  */

void FUN_108955df4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108955dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x18))();
  return;
}



/* Entry: 108955e10; end: 108955e33;  */

void FUN_108955e10(long param_1)

{
  func_0x000108955fc0();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 108955e34; end: 108955e37;  */

void FUN_108955e34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9e0e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108955e38; end: 108955e4b;  */

void FUN_108955e38(void)

{
  FUN_108955e78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108955e4c; end: 108955e53;  */

void FUN_108955e4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108955fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 8))();
  return;
}



/* Entry: 108955e54; end: 108955e77;  */

void FUN_108955e54(long param_1)

{
  func_0x000108955fc0();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 108955e78; end: 108955e83;  */

void FUN_108955e78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9e0e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108955e84; end: 108955ea7;  */

void FUN_108955e84(long param_1)

{
  func_0x000108955fc0();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 108955ea8; end: 108955eab;  */

void FUN_108955ea8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9e130;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108955eac; end: 108955ebf;  */

void FUN_108955eac(void)

{
  FUN_108955f14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108955ec0; end: 108955ecb;  */

long FUN_108955ec0(long param_1)

{
  func_0x000104c04a44(param_1 + 0x58);
  FUN_108955ecc(param_1 + 0x48);
  func_0x000108955ef0(param_1 + 0x38);
  func_0x000104c04a68(param_1 + 0x28);
  return param_1 + 0x18;
}



/* Entry: 108955ecc; end: 108955f13;  */

void FUN_108955ecc(long param_1)

{
  func_0x000108955fc0();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 108955f14; end: 108955f23;  */

void FUN_108955f14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9e130;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108955f24; end: 108955f37;  */

void FUN_108955f24(void)

{
  FUN_108955f64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108955f38; end: 108955f3f;  */

void FUN_108955f38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108955fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 8))();
  return;
}



/* Entry: 108955f40; end: 108955f63;  */

void FUN_108955f40(long param_1)

{
  func_0x000108955fc0();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 108955f64; end: 108955f6f;  */

void FUN_108955f64(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a9e180;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108955f70; end: 108955fb7;  */

void FUN_108955f70(long param_1)

{
  func_0x000108955fc0();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 108955fb8; end: 108955feb;  */

void FUN_108955fb8(void)

{
  return;
}



/* Entry: 108955fec; end: 10895623b;  */

void FUN_108955fec(long param_1,undefined1 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  int iVar6;
  undefined8 extraout_x8;
  long lVar7;
  undefined8 uVar8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  undefined8 extraout_x8_02;
  long extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  undefined8 *puVar9;
  undefined1 auStack_150 [24];
  long alStack_138 [4];
  undefined4 uStack_118;
  undefined8 *puStack_110;
  long lStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  
  func_0x00010895ba48();
  puVar9 = (undefined8 *)(param_1 + 0x28);
  *puVar9 = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  func_0x00010895bd54(&PTR_FUN_110a9e1d0);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x48) = *param_2;
  *(undefined8 *)(param_1 + 0x50) = param_4;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  FUN_108958044(param_1 + 0x68);
  *(undefined8 *)(unaff_x19 + 0x118) = *param_3;
  lVar7 = param_3[1];
  *(long *)(unaff_x19 + 0x120) = lVar7;
  if (lVar7 != 0) {
    do {
      func_0x00010895bbdc();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(unaff_x19 + 0x128) = param_5;
  *(undefined1 *)(unaff_x19 + 0x180) = 0;
  *(undefined8 *)(unaff_x19 + 0x150) = 0;
  *(undefined8 *)(unaff_x19 + 0x158) = 0;
  *(undefined8 *)(unaff_x19 + 0x148) = 0;
  *(undefined1 *)(unaff_x19 + 0x160) = 0;
  *(undefined8 *)(unaff_x19 + 0x188) = *param_8;
  lVar7 = param_8[1];
  *(long *)(unaff_x19 + 400) = lVar7;
  if (lVar7 != 0) {
    do {
      func_0x00010895bbdc();
    } while (extraout_w10_00 != 0);
  }
  *(undefined8 *)(unaff_x19 + 0x198) = 0;
  *(undefined8 *)(unaff_x19 + 0x1a0) = 0;
  *(undefined1 *)(unaff_x19 + 0x1a8) = 0;
  *(undefined1 *)(unaff_x19 + 0x1b0) = 0;
  *(undefined1 *)(unaff_x19 + 0x1b4) = 0;
  *(undefined1 *)(unaff_x19 + 0x1d0) = 0;
  *(undefined1 *)(unaff_x19 + 0x1d4) = 0;
  *(undefined1 *)(unaff_x19 + 0x1f0) = 0;
  *(undefined8 *)(unaff_x19 + 0x1f8) = 0;
  *(undefined8 *)(unaff_x19 + 0x208) = 0;
  *(undefined8 *)(unaff_x19 + 0x200) = 0;
  *(undefined8 *)(unaff_x19 + 0x220) = 0;
  *(undefined8 *)(unaff_x19 + 0x218) = 0;
  *(undefined8 **)(unaff_x19 + 0x210) = (undefined8 *)(unaff_x19 + 0x218);
  plVar5 = (long *)(unaff_x19 + 600);
  *(undefined8 *)(unaff_x19 + 600) = 0;
  *(undefined8 *)(unaff_x19 + 0x230) = 0;
  *(undefined8 *)(unaff_x19 + 0x228) = 0;
  *(undefined8 *)(unaff_x19 + 0x240) = 0;
  *(undefined8 *)(unaff_x19 + 0x238) = 0;
  *(undefined8 *)(unaff_x19 + 0x250) = 0;
  *(undefined8 *)(unaff_x19 + 0x248) = 0;
  uVar8 = *param_6;
  *param_6 = 0;
  *(undefined8 *)(unaff_x19 + 0x260) = uVar8;
  *(undefined1 *)(unaff_x19 + 0x268) = 0;
  *(undefined **)(unaff_x19 + 0x270) = &UNK_10e52b660;
  *(undefined8 *)(unaff_x19 + 0x278) = 0;
  *(undefined8 *)(unaff_x19 + 0x288) = 0;
  *(undefined8 *)(unaff_x19 + 0x280) = 0;
  *(undefined1 *)(unaff_x19 + 0x290) = 0;
  pcStack_88 = FUN_10895ad80;
  ppuStack_80 = &PTR_FUN_110a9e490;
  iVar6 = (int)&pcStack_88;
  (**(code **)*param_7)(&lStack_90,param_7);
  lVar7 = lStack_90;
  lStack_90 = 0;
  lVar2 = *plVar5;
  *plVar5 = lVar7;
  lVar7 = 0;
  if (lVar2 != 0) {
    func_0x00010895bcc4();
    (*extraout_x8_00)();
    lVar7 = lStack_90;
    lStack_90 = 0;
    if (lVar7 != 0) {
      func_0x00010895bcc4();
      (*extraout_x8_01)();
    }
  }
  func_0x00010895bde4();
  func_0x00010895b9e8(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010895bde4();
    func_0x000108958074(unaff_x19 + 0x270);
    FUN_10895ad54(unaff_x19 + 0x260);
    func_0x000108950b24(plVar5);
    FUN_10895aca0((undefined8 *)(unaff_x19 + 0x228));
    func_0x00010895ac44(unaff_x19 + 0x210);
    func_0x0001089580a0(unaff_x19 + 0x1f8);
    func_0x000108955b38(unaff_x19 + 0x188);
    func_0x00010895ac1c(unaff_x19 + 0x150);
    func_0x00010895abd8(unaff_x19 + 0x130);
    func_0x00010895abb0(unaff_x19 + 0x118);
    func_0x0001089381ec(unaff_x19 + 0x78);
    FUN_108955f70(puVar9);
    __Unwind_Resume();
    func_0x00010895ba48();
    func_0x00010895bd54(&PTR_FUN_110a9e1d0);
    *(undefined1 *)(lVar7 + 0x290) = 1;
    func_0x00010895bca4();
    uVar1 = *(int *)(lVar7 + 0x38) == 2;
    if (!(bool)uVar1) {
      FUN_108956318(2);
    }
    func_0x00010895bf14();
    func_0x000108958074(unaff_x19 + 0x270);
    FUN_10895ad54(unaff_x19 + 0x260);
    func_0x000108950b24(unaff_x19 + 600);
    FUN_10895aca0(unaff_x19 + 0x228);
    func_0x00010895ac44(unaff_x19 + 0x210);
    func_0x0001089580a0(unaff_x19 + 0x1f8);
    func_0x000108955b38(unaff_x19 + 0x188);
    func_0x00010895ac1c(unaff_x19 + 0x150);
    func_0x00010895abd8(unaff_x19 + 0x130);
    func_0x00010895abb0(unaff_x19 + 0x118);
    func_0x0001089381ec(unaff_x19 + 0x78);
    puVar3 = (undefined8 *)(unaff_x19 + 0x28);
    FUN_108955f70();
    func_0x00010895b9e8(extraout_x8_02);
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      if (iVar6 == 0) {
        __Unwind_Resume();
      }
      func_0x000104bd46a0();
      puVar4 = puVar3;
      puStack_110 = puVar9;
      FUN_1089a3c0c();
      func_0x00010895be7c();
      alStack_138[2] = 0;
      alStack_138[3] = 0;
      alStack_138[0] = extraout_x8_03 + 0x10;
      alStack_138[1] = 0;
      uStack_118 = 4;
      func_0x00010895bd94();
      plVar5 = alStack_138;
      FUN_108957f58(plVar5,auStack_150,puVar3);
      func_0x00010895bcc4(*puVar4,plVar5);
      func_0x00010895bc94();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_150);
      func_0x000104c03ee4(alStack_138);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10895623c; end: 108956317;  */

void FUN_10895623c(long param_1,int param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long unaff_x19;
  undefined1 auStack_c0 [24];
  long alStack_a8 [4];
  undefined4 uStack_88;
  
  func_0x00010895ba48();
  func_0x00010895bd54(&PTR_FUN_110a9e1d0);
  *(undefined1 *)(param_1 + 0x290) = 1;
  func_0x00010895bca4();
  uVar1 = *(int *)(param_1 + 0x38) == 2;
  if (!(bool)uVar1) {
    FUN_108956318(2);
  }
  func_0x00010895bf14();
  func_0x000108958074(unaff_x19 + 0x270);
  FUN_10895ad54(unaff_x19 + 0x260);
  func_0x000108950b24(unaff_x19 + 600);
  FUN_10895aca0(unaff_x19 + 0x228);
  func_0x00010895ac44(unaff_x19 + 0x210);
  func_0x0001089580a0(unaff_x19 + 0x1f8);
  func_0x000108955b38(unaff_x19 + 0x188);
  func_0x00010895ac1c(unaff_x19 + 0x150);
  func_0x00010895abd8(unaff_x19 + 0x130);
  func_0x00010895abb0(unaff_x19 + 0x118);
  func_0x0001089381ec(unaff_x19 + 0x78);
  puVar2 = (undefined8 *)(unaff_x19 + 0x28);
  FUN_108955f70();
  func_0x00010895b9e8(extraout_x8);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  puVar3 = puVar2;
  FUN_1089a3c0c();
  func_0x00010895be7c();
  alStack_a8[2] = 0;
  alStack_a8[3] = 0;
  alStack_a8[0] = extraout_x8_00 + 0x10;
  alStack_a8[1] = 0;
  uStack_88 = 4;
  func_0x00010895bd94();
  plVar4 = alStack_a8;
  FUN_108957f58(plVar4,auStack_c0,puVar2);
  func_0x00010895bcc4(*puVar3,plVar4);
  func_0x00010895bc94();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0);
  func_0x000104c03ee4(alStack_a8);
  return;
}



/* Entry: 108956318; end: 1089563a3;  */

void FUN_108956318(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long extraout_x8;
  undefined1 auStack_60 [24];
  long alStack_48 [4];
  undefined4 uStack_28;
  
  puVar1 = param_1;
  FUN_1089a3c0c();
  func_0x00010895be7c();
  alStack_48[2] = 0;
  alStack_48[3] = 0;
  alStack_48[0] = extraout_x8 + 0x10;
  alStack_48[1] = 0;
  uStack_28 = 4;
  func_0x00010895bd94();
  plVar2 = alStack_48;
  FUN_108957f58(plVar2,auStack_60,param_1);
  func_0x00010895bcc4(*puVar1,plVar2);
  func_0x00010895bc94();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
  func_0x000104c03ee4(alStack_48);
  return;
}



/* Entry: 1089563a4; end: 1089563c7;  */

void FUN_1089563a4(long param_1,int param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long unaff_x19;
  undefined1 auStack_c0 [24];
  long alStack_a8 [4];
  undefined4 uStack_88;
  
  func_0x00010895ba48();
  func_0x00010895bd54(&PTR_FUN_110a9e1d0);
  *(undefined1 *)(param_1 + 0x290) = 1;
  func_0x00010895bca4();
  uVar1 = *(int *)(param_1 + 0x38) == 2;
  if (!(bool)uVar1) {
    FUN_108956318(2);
  }
  func_0x00010895bf14();
  func_0x000108958074(unaff_x19 + 0x270);
  FUN_10895ad54(unaff_x19 + 0x260);
  func_0x000108950b24(unaff_x19 + 600);
  FUN_10895aca0(unaff_x19 + 0x228);
  func_0x00010895ac44(unaff_x19 + 0x210);
  func_0x0001089580a0(unaff_x19 + 0x1f8);
  func_0x000108955b38(unaff_x19 + 0x188);
  func_0x00010895ac1c(unaff_x19 + 0x150);
  func_0x00010895abd8(unaff_x19 + 0x130);
  func_0x00010895abb0(unaff_x19 + 0x118);
  func_0x0001089381ec(unaff_x19 + 0x78);
  puVar2 = (undefined8 *)(unaff_x19 + 0x28);
  FUN_108955f70();
  func_0x00010895b9e8(extraout_x8);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  puVar3 = puVar2;
  FUN_1089a3c0c();
  func_0x00010895be7c();
  alStack_a8[2] = 0;
  alStack_a8[3] = 0;
  alStack_a8[0] = extraout_x8_00 + 0x10;
  alStack_a8[1] = 0;
  uStack_88 = 4;
  func_0x00010895bd94();
  plVar4 = alStack_a8;
  FUN_108957f58(plVar4,auStack_c0,puVar2);
  func_0x00010895bcc4(*puVar3,plVar4);
  func_0x00010895bc94();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0);
  func_0x000104c03ee4(alStack_a8);
  return;
}



/* Entry: 1089563c8; end: 1089563db;  */

void FUN_1089563c8(void)

{
  FUN_10895623c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089563dc; end: 1089563fb;  */

void FUN_1089563dc(long param_1)

{
  FUN_10895623c(param_1 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089563fc; end: 10895646f;  */

void FUN_1089563fc(void)

{
  func_0x00010895b97c();
  func_0x00010895b9c0();
  func_0x00010895be40();
  func_0x00010bd42e30();
  func_0x00010895bb70();
  func_0x00010895b9fc(FUN_108958778);
  func_0x00010bd4058c();
  func_0x00010895badc();
  FUN_1089580c8();
  func_0x00010895bb68();
  func_0x00010895bb78();
  return;
}



/* Entry: 108956470; end: 10895655f;  */

void FUN_108956470(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long lStack_1c0;
  undefined1 auStack_1b8 [176];
  undefined1 auStack_108 [184];
  ulong uStack_50;
  ulong *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  func_0x00010895c00c();
  uVar3 = *(ulong *)(param_1 + 0x50);
  lStack_1c0 = param_1;
  func_0x00010895bb80(auStack_1b8);
  func_0x00010895c000();
  FUN_108958d08();
  uStack_50 = uVar3 | 1;
  puVar1 = auStack_108;
  FUN_108958c00(puVar1,&lStack_1c0);
  puStack_48 = &uStack_50;
  func_0x00010bd42e30();
  func_0x00010895bb70();
  puStack_38 = (undefined1 *)0x0;
  puVar2 = puVar1;
  puStack_40 = puVar1;
  func_0x00010895bd48(FUN_108958c2c);
  FUN_108958c00(puVar2 + 0x18,auStack_108);
  puStack_38 = puVar1;
  func_0x00010895ba7c(uStack_50);
  func_0x00010895bce4();
  func_0x00010895badc();
  FUN_108958bdc();
  FUN_108956560(auStack_108);
  FUN_108956560(&lStack_1c0);
  return;
}



/* Entry: 108956560; end: 108956583;  */

void FUN_108956560(void)

{
  func_0x00010895c024();
  FUN_1089593f4();
  func_0x00010895bcdc();
  return;
}



/* Entry: 108956584; end: 10895668f;  */

undefined1 * FUN_108956584(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  ulong unaff_x21;
  ulong uStack_1e8;
  ulong *puStack_1e0;
  undefined1 *puStack_1d8;
  undefined1 *puStack_1d0;
  undefined1 auStack_1c8 [200];
  undefined1 auStack_100 [200];
  undefined8 uStack_38;
  
  func_0x00010895c00c();
  func_0x00010895ba5c();
  func_0x00010895bfec();
  func_0x00010895bb80(unaff_x20 + 8);
  func_0x00010895c000();
  FUN_10895957c();
  uStack_1e8 = unaff_x21 | 1;
  puVar1 = auStack_100;
  FUN_10895944c(puVar1,auStack_1c8);
  puStack_1e0 = &uStack_1e8;
  func_0x00010bd42e30();
  func_0x00010895bb70();
  puStack_1d0 = (undefined1 *)0x0;
  puVar2 = puVar1;
  puStack_1d8 = puVar1;
  func_0x00010895bd48(FUN_108959478);
  FUN_10895944c(puVar2 + 0x18,auStack_100);
  puStack_1d0 = puVar1;
  func_0x00010895ba7c(uStack_1e8);
  func_0x00010895bce4();
  puStack_1d8 = (undefined1 *)0x0;
  puStack_1d0 = (undefined1 *)0x0;
  FUN_108959428(&puStack_1e0);
  FUN_108956690(auStack_100);
  puVar1 = auStack_1c8;
  FUN_108956690();
  func_0x00010895b9e8(uStack_38);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  FUN_108956690(auStack_1c8);
  func_0x00010895bb18();
  func_0x00010895c024();
  FUN_108959828();
  func_0x00010895bcdc();
  return puVar1;
}



/* Entry: 108956690; end: 1089566b3;  */

void FUN_108956690(void)

{
  func_0x00010895c024();
  FUN_108959828();
  func_0x00010895bcdc();
  return;
}



/* Entry: 1089566b4; end: 10895674b;  */

void FUN_1089566b4(long param_1,undefined2 param_2)

{
  undefined8 *unaff_x19;
  undefined8 uStack_60;
  
  func_0x00010895b97c();
  func_0x00010895b9c0();
  func_0x00010895be40();
  func_0x00010bd42e30();
  func_0x00010895bb70();
  func_0x00010895babc(FUN_108959874);
  *(undefined8 *)(param_1 + 0x28) = uStack_60;
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  *(undefined2 *)(param_1 + 0x30) = param_2;
  func_0x00010895ba30();
  func_0x00010bd4058c();
  func_0x00010895badc();
  FUN_108959850();
  func_0x00010895bb68();
  func_0x00010895bb78();
  return;
}



/* Entry: 10895674c; end: 108956833;  */

void FUN_10895674c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long unaff_x21;
  ulong unaff_x22;
  undefined1 auStack_e0 [24];
  undefined8 uStack_c8;
  undefined1 auStack_98 [72];
  ulong uStack_50;
  ulong *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  func_0x00010895bfc4(param_1);
  func_0x00010895bb80();
  uStack_c8 = param_2;
  FUN_10895ae60(unaff_x21 + 0x20,param_3);
  uStack_50 = unaff_x22 | 1;
  puVar1 = auStack_98;
  FUN_1089599fc(puVar1,auStack_e0);
  puStack_48 = &uStack_50;
  func_0x00010bd42e30();
  func_0x00010895bb70();
  puStack_38 = (undefined1 *)0x0;
  puVar2 = puVar1;
  puStack_40 = puVar1;
  func_0x00010895bd48(FUN_108959c34);
  FUN_1089599fc(puVar2 + 0x18,auStack_98);
  puStack_38 = puVar1;
  func_0x00010895ba7c(uStack_50);
  func_0x00010895bce4();
  func_0x00010895badc();
  FUN_1089599d8();
  FUN_108956834(auStack_98);
  FUN_108956834(auStack_e0);
  return;
}



/* Entry: 108956834; end: 10895685b;  */

long FUN_108956834(long param_1)

{
  func_0x000108959364(param_1 + 0x20);
  func_0x00010895bcdc();
  return param_1;
}



/* Entry: 10895685c; end: 108956907;  */

void FUN_10895685c(long param_1,undefined8 param_2)

{
  ulong unaff_x19;
  undefined8 uStack_80;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  func_0x00010895b97c();
  uStack_50 = unaff_x19 | 1;
  uStack_60 = uStack_80;
  uStack_58 = param_2;
  func_0x00010895be40();
  func_0x00010bd42e30();
  func_0x00010895bb70();
  func_0x00010895babc(FUN_108959e1c);
  *(undefined8 *)((ulong)auStack_70 | 8) = 0;
  ((undefined8 *)((ulong)auStack_70 | 8))[1] = 0;
  *(undefined8 *)(param_1 + 0x28) = uStack_60;
  *(undefined8 *)(param_1 + 0x30) = uStack_58;
  func_0x00010895ba30();
  func_0x00010bd4058c();
  func_0x00010895badc();
  FUN_108959df8();
  func_0x00010895bb68();
  func_0x00010895bb78();
  return;
}



/* Entry: 108956908; end: 1089569cb;  */

void FUN_108956908(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x23;
  long alStack_c0 [6];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_60;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  puVar3 = *(undefined8 **)(param_1 + 0x50);
  puVar1 = (undefined8 *)((ulong)alStack_c0 | 8);
  alStack_c0[0] = param_1;
  func_0x00010895bb80(param_1);
  func_0x00010895bbec();
  func_0x00010bd42e30();
  func_0x00010895bb70();
  *puVar1 = 0;
  puVar1[1] = FUN_108959f30;
  *(undefined4 *)(puVar1 + 2) = 0;
  puVar1[4] = uStack_88;
  puVar1[3] = uStack_90;
  *puVar3 = 0;
  puVar3[1] = 0;
  uVar2 = *(undefined8 *)(unaff_x23 + 0x18);
  puVar1[5] = uStack_80;
  puVar1[6] = uVar2;
  *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(unaff_x23 + 0x20);
  puStack_50 = puVar1;
  puStack_48 = puVar1;
  func_0x00010895ba7c(uStack_60);
  func_0x00010bd4058c();
  func_0x00010895be4c();
  FUN_108959f0c();
  func_0x00010895bb68();
  func_0x00010895bdc4();
  return;
}



/* Entry: 1089569cc; end: 108956a8f;  */

void FUN_1089569cc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x23;
  long alStack_c0 [6];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_60;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  puVar3 = *(undefined8 **)(param_1 + 0x50);
  puVar1 = (undefined8 *)((ulong)alStack_c0 | 8);
  alStack_c0[0] = param_1;
  func_0x00010895bb80(param_1);
  func_0x00010895bbec();
  func_0x00010bd42e30();
  func_0x00010895bb70();
  *puVar1 = 0;
  puVar1[1] = FUN_10895a004;
  *(undefined4 *)(puVar1 + 2) = 0;
  puVar1[4] = uStack_88;
  puVar1[3] = uStack_90;
  *puVar3 = 0;
  puVar3[1] = 0;
  uVar2 = *(undefined8 *)(unaff_x23 + 0x18);
  puVar1[5] = uStack_80;
  puVar1[6] = uVar2;
  *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(unaff_x23 + 0x20);
  puStack_50 = puVar1;
  puStack_48 = puVar1;
  func_0x00010895ba7c(uStack_60);
  func_0x00010bd4058c();
  func_0x00010895be4c();
  FUN_108959fe0();
  func_0x00010895bb68();
  func_0x00010895bdc4();
  return;
}



/* Entry: 108956a90; end: 108956b03;  */

void FUN_108956a90(void)

{
  func_0x00010895b97c();
  func_0x00010895b9c0();
  func_0x00010895be40();
  func_0x00010bd42e30();
  func_0x00010895bb70();
  func_0x00010895b9fc(FUN_10895a0d8);
  func_0x00010bd4058c();
  func_0x00010895badc();
  FUN_10895a0b4();
  func_0x00010895bb68();
  func_0x00010895bb78();
  return;
}



/* Entry: 108956b04; end: 108956b77;  */

void FUN_108956b04(void)

{
  func_0x00010895b97c();
  func_0x00010895b9c0();
  func_0x00010895be40();
  func_0x00010bd42e30();
  func_0x00010895bb70();
  func_0x00010895b9fc(FUN_10895a1d4);
  func_0x00010bd4058c();
  func_0x00010895badc();
  FUN_10895a1b0();
  func_0x00010895bb68();
  func_0x00010895bb78();
  return;
}



/* Entry: 108956b78; end: 108956c5b;  */

void FUN_108956b78(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long lStack_100;
  undefined1 auStack_f8 [80];
  undefined1 auStack_a8 [88];
  ulong uStack_50;
  ulong *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  func_0x00010895c00c();
  uVar3 = *(ulong *)(param_1 + 0x50);
  lStack_100 = param_1;
  func_0x00010895bb80(auStack_f8);
  func_0x00010895c000();
  FUN_108956c5c();
  uStack_50 = uVar3 | 1;
  puVar1 = auStack_a8;
  FUN_10895a2ac(puVar1,&lStack_100);
  puStack_48 = &uStack_50;
  func_0x00010bd42e30();
  func_0x00010895bb70();
  puStack_38 = (undefined1 *)0x0;
  puVar2 = puVar1;
  puStack_40 = puVar1;
  func_0x00010895bd48(FUN_10895a2d8);
  FUN_10895a2ac(puVar2 + 0x18,auStack_a8);
  puStack_38 = puVar1;
  func_0x00010895ba7c(uStack_50);
  func_0x00010895bce4();
  func_0x00010895badc();
  FUN_10895a288();
  FUN_108956c68(auStack_a8);
  FUN_108956c68(&lStack_100);
  return;
}



/* Entry: 108956c5c; end: 108956c67;  */

undefined8 * FUN_108956c5c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  *param_1 = &PTR_DAT_110cf6288;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b504094();
  }
  func_0x00010b50437c();
  func_0x00010b50299c();
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    func_0x00010b50307c(0,*(undefined8 *)(param_2 + 0x30));
  }
  param_1[6] = uVar1;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  return param_1;
}



/* Entry: 108956c68; end: 108956c8b;  */

void FUN_108956c68(void)

{
  func_0x00010895c024();
  func_0x00010b4fc988();
  func_0x00010895bcdc();
  return;
}



/* Entry: 108956c8c; end: 108956cff;  */

void FUN_108956c8c(void)

{
  func_0x00010895b97c();
  func_0x00010895b9c0();
  func_0x00010895be40();
  func_0x00010bd42e30();
  func_0x00010895bb70();
  func_0x00010895b9fc(FUN_10895a3d4);
  func_0x00010bd4058c();
  func_0x00010895badc();
  FUN_10895a3b0();
  func_0x00010895bb68();
  func_0x00010895bb78();
  return;
}



/* Entry: 108956d00; end: 108956de7;  */

void FUN_108956d00(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  undefined1 auStack_120 [96];
  undefined1 auStack_c0 [96];
  ulong uStack_60;
  ulong *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  
  func_0x00010895beb8();
  func_0x00010895bfc4();
  FUN_10895ae24();
  FUN_10895b3c8(unaff_x21 + 0x18,*(undefined8 *)(unaff_x20 + 0x128),*unaff_x19,unaff_x19[1]);
  uStack_60 = unaff_x22 | 1;
  puVar1 = auStack_c0;
  FUN_10895a59c(puVar1,auStack_120);
  puStack_58 = &uStack_60;
  func_0x00010bd42e30();
  func_0x00010895bb70();
  puVar2 = puVar1;
  puStack_50 = puVar1;
  func_0x00010895bd48(FUN_10895a63c);
  FUN_10895a59c(puVar2 + 0x18,auStack_c0);
  puStack_48 = puVar1;
  func_0x00010895ba7c(uStack_60);
  func_0x00010895bce4();
  func_0x00010895be4c();
  FUN_10895a578();
  FUN_108956de8(auStack_c0);
  func_0x00010895bd84();
  return;
}



/* Entry: 108956de8; end: 108956e07;  */

void FUN_108956de8(void)

{
  func_0x00010895bf98();
  func_0x00010895bcdc();
  return;
}



/* Entry: 108956e08; end: 108956eff;  */

undefined1 * FUN_108956e08(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  ulong unaff_x21;
  ulong uStack_c8;
  ulong *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 auStack_a8 [56];
  undefined1 auStack_70 [56];
  undefined8 uStack_38;
  
  func_0x00010895c00c();
  func_0x00010895ba5c();
  func_0x00010895bfec();
  func_0x00010895bb80(unaff_x20 + 8);
  func_0x00010895c000();
  func_0x00010895b458();
  uStack_c8 = unaff_x21 | 1;
  puVar1 = auStack_70;
  FUN_10895a728(puVar1,auStack_a8);
  puStack_c0 = &uStack_c8;
  func_0x00010bd42e30();
  func_0x00010895bb70();
  puStack_b0 = (undefined1 *)0x0;
  puVar2 = puVar1;
  puStack_b8 = puVar1;
  func_0x00010895bd48(FUN_10895a754);
  FUN_10895a728(puVar2 + 0x18,auStack_70);
  puStack_b0 = puVar1;
  func_0x00010895ba7c(uStack_c8);
  func_0x00010895bce4();
  puStack_b8 = (undefined1 *)0x0;
  puStack_b0 = (undefined1 *)0x0;
  FUN_10895a704(&puStack_c0);
  puVar1 = auStack_70;
  FUN_108956f00();
  func_0x00010895be00();
  func_0x00010895b9e8(uStack_38);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010895be00();
  func_0x00010895bb18();
  func_0x00010895c024();
  func_0x00010895abd8();
  func_0x00010895bcdc();
  return puVar1;
}



/* Entry: 108956f00; end: 108956f23;  */

void FUN_108956f00(void)

{
  func_0x00010895c024();
  func_0x00010895abd8();
  func_0x00010895bcdc();
  return;
}



/* Entry: 108956f24; end: 108956f2b;  */

undefined1 * FUN_108956f24(long param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  ulong unaff_x21;
  ulong uStack_c8;
  ulong *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 auStack_a8 [56];
  undefined1 auStack_70 [56];
  undefined8 uStack_38;
  
  func_0x00010895c00c(param_1 + -8);
  func_0x00010895ba5c();
  func_0x00010895bfec();
  func_0x00010895bb80(unaff_x20 + 8);
  func_0x00010895c000();
  func_0x00010895b458();
  uStack_c8 = unaff_x21 | 1;
  puVar1 = auStack_70;
  FUN_10895a728(puVar1,auStack_a8);
  puStack_c0 = &uStack_c8;
  func_0x00010bd42e30();
  func_0x00010895bb70();
  puStack_b0 = (undefined1 *)0x0;
  puVar2 = puVar1;
  puStack_b8 = puVar1;
  func_0x00010895bd48(FUN_10895a754);
  FUN_10895a728(puVar2 + 0x18,auStack_70);
  puStack_b0 = puVar1;
  func_0x00010895ba7c(uStack_c8);
  func_0x00010895bce4();
  puStack_b8 = (undefined1 *)0x0;
  puStack_b0 = (undefined1 *)0x0;
  FUN_10895a704(&puStack_c0);
  puVar1 = auStack_70;
  FUN_108956f00();
  func_0x00010895be00();
  func_0x00010895b9e8(uStack_38);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010895be00();
  func_0x00010895bb18();
  func_0x00010895c024();
  func_0x00010895abd8();
  func_0x00010895bcdc();
  return puVar1;
}



/* Entry: 108956f2c; end: 108956f7b;  */

void FUN_108956f2c(long *param_1,undefined8 param_2)

{
  undefined1 auStack_60 [64];
  
  FUN_108962e24(auStack_60,param_2);
  (**(code **)(*param_1 + 0x20))(param_1,auStack_60);
  func_0x00010b4fc988(auStack_60);
  return;
}



/* Entry: 108956f7c; end: 1089572af;  */

void FUN_108956f7c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  code *extraout_x8;
  ulong uVar6;
  int extraout_w10;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined2 uStack_e4;
  undefined1 uStack_e2;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined2 uStack_b4;
  undefined1 uStack_b2;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined2 uStack_74;
  undefined1 uStack_72;
  ulong uStack_70;
  ulong *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  uVar6 = *(ulong *)(param_1 + 0x248);
  puVar7 = (undefined8 *)((*(undefined8 **)(param_1 + 0x230))[uVar6 / 0x66] + (uVar6 % 0x66) * 0x28)
  ;
  uStack_d0 = *puVar7;
  uStack_c0 = puVar7[2];
  uStack_c8 = puVar7[1];
  uStack_b8 = *(undefined4 *)(puVar7 + 3);
  uStack_b4 = *(undefined2 *)((long)puVar7 + 0x1c);
  uStack_b2 = *(undefined1 *)((long)puVar7 + 0x1e);
  lStack_b0 = puVar7[4];
  *(long *)(param_1 + 0x250) = *(long *)(param_1 + 0x250) + -1;
  *(ulong *)(param_1 + 0x248) = uVar6 + 1;
  if (0xcb < uVar6 + 1) {
    __ZdlPv(**(undefined8 **)(param_1 + 0x230));
    *(long *)(param_1 + 0x230) = *(long *)(param_1 + 0x230) + 8;
    *(long *)(param_1 + 0x248) = *(long *)(param_1 + 0x248) + -0x66;
  }
  puVar7 = *(undefined8 **)(param_1 + 0x188);
  (**(code **)*puVar7)(&lStack_e0,puVar7,param_1 + 0x18,&uStack_d0,param_1 + 0x68);
  lVar5 = lStack_e0;
  if (lStack_e0 == 0) {
    uStack_70 = *(ulong *)(param_1 + 0x50);
    uStack_98 = *(undefined8 *)(param_1 + 0x30);
    uStack_a0 = *(undefined8 *)(param_1 + 0x28);
    if (*(long *)(param_1 + 0x30) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x30) + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_100 = (undefined4)uStack_d0;
    uStack_fc = uStack_d0._4_4_;
    uStack_f0 = uStack_c0;
    uStack_f8 = uStack_c8;
    uStack_e8 = uStack_b8;
    uStack_e4 = uStack_b4;
    uStack_e2 = uStack_b2;
    uStack_70 = uStack_70 | 1;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_90 = (undefined4)uStack_d0;
    uStack_8c = uStack_d0._4_4_;
    uStack_80 = uStack_c0;
    uStack_88 = uStack_c8;
    uStack_78 = uStack_b8;
    uStack_74 = uStack_b4;
    uStack_72 = uStack_b2;
    puStack_68 = &uStack_70;
    lStack_a8 = param_1;
    func_0x00010bd42e30();
    func_0x00010895bb70();
    puVar4 = puVar7;
    puStack_60 = puVar7;
    func_0x00010895bd48(FUN_10895a990);
    FUN_10895a954(puVar4 + 3,&lStack_a8);
    puStack_58 = puVar7;
    func_0x00010895ba7c(uStack_70);
    func_0x00010bd4058c();
    puStack_60 = (undefined8 *)0x0;
    puStack_58 = (undefined8 *)0x0;
    FUN_10895a930(&puStack_68);
    FUN_108955f70(&uStack_a0);
    FUN_108955f70(&uStack_110);
    lVar5 = lStack_e0;
  }
  puVar7 = *(undefined8 **)(param_1 + 0x218);
  if (*(undefined8 **)(param_1 + 0x218) == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)(param_1 + 0x218);
    puVar8 = puVar4;
  }
  else {
    do {
      while( true ) {
        puVar4 = puVar7;
        puVar7 = &uStack_d0;
        func_0x00010895b4ac(puVar7,puVar4 + 4);
        if (((uint)puVar7 >> 7 & 1) != 0) break;
        puVar7 = puVar4 + 4;
        func_0x00010895b4ac(puVar7,&uStack_d0);
        if (((uint)puVar7 >> 7 & 1) == 0) goto LAB_108957224;
        puVar7 = (undefined8 *)puVar4[1];
        if ((undefined8 *)puVar4[1] == (undefined8 *)0x0) {
          puVar8 = puVar4 + 1;
          goto LAB_1089571a8;
        }
      }
      puVar7 = (undefined8 *)*puVar4;
      puVar8 = puVar4;
    } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
  }
LAB_1089571a8:
  puVar7 = (undefined8 *)0x50;
  __Znwm();
  puVar7[4] = uStack_d0;
  puVar7[6] = uStack_c0;
  puVar7[5] = uStack_c8;
  *(undefined4 *)(puVar7 + 7) = uStack_b8;
  *(undefined2 *)((long)puVar7 + 0x3c) = uStack_b4;
  *(undefined1 *)((long)puVar7 + 0x3e) = uStack_b2;
  puVar7[8] = lVar5;
  puVar7[9] = lStack_d8;
  if (lStack_d8 != 0) {
    do {
      func_0x00010895bbdc();
    } while (extraout_w10 != 0);
  }
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[2] = puVar4;
  *puVar8 = puVar7;
  if (**(long **)(param_1 + 0x210) != 0) {
    *(long *)(param_1 + 0x210) = **(long **)(param_1 + 0x210);
  }
  func_0x000107c27be4(*(undefined8 *)(param_1 + 0x218));
  *(long *)(param_1 + 0x220) = *(long *)(param_1 + 0x220) + 1;
LAB_108957224:
  lVar5 = *(long *)(param_1 + 600);
  if ((*(byte *)(lVar5 + 0x10) & 1) == 0) {
    *(undefined1 *)(lVar5 + 0x10) = 1;
  }
  *(long *)(lVar5 + 8) = lStack_b0 * 1000000;
  func_0x00010895bea0();
  (*extraout_x8)();
  func_0x00010895ac1c(&lStack_e0);
  return;
}



/* Entry: 1089572b0; end: 1089575cf;  */

void FUN_1089572b0(long param_1)

{
  char cVar1;
  undefined1 in_ZR;
  undefined ***pppuVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  int extraout_w10;
  long unaff_x19;
  undefined ***unaff_x20;
  undefined ***unaff_x21;
  int *unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_1a8 [24];
  long alStack_190 [4];
  undefined4 uStack_170;
  undefined1 auStack_168 [40];
  int *piStack_140;
  undefined ***pppuStack_138;
  undefined ***pppuStack_130;
  undefined ***pppuStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long alStack_f0 [2];
  undefined1 auStack_b8 [24];
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_68;
  undefined8 uStack_48;
  
  func_0x00010895ba98();
  uStack_48 = extraout_x8;
  func_0x00010895bb4c();
  lStack_68 = param_1;
  if (*(int *)(param_1 + 0x38) == 0) {
    func_0x00010895bc24();
    FUN_10895b538(alStack_f0,unaff_x19 + 0x210);
    if (alStack_f0[0] == 0) {
      func_0x000107c2793c(&UNK_10f4ed56b);
      func_0x000107c3173c(&uStack_108);
      ppuStack_a0 = &PTR_FUN_110ab4390;
      uStack_98 = CONCAT44(uStack_98._4_4_,0x7e6);
      uStack_88 = uStack_100;
      uStack_90 = uStack_108;
      uStack_80 = uStack_f8;
      uStack_108 = 0;
      uStack_100 = 0;
      uStack_f8 = 0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_108);
      FUN_1089575d0();
      FUN_1089576b4();
      pppuVar2 = &ppuStack_a0;
      func_0x000108b80d84();
    }
    else {
      uVar8 = *(undefined8 *)(alStack_f0[0] + 0x48);
      uVar7 = *(undefined8 *)(alStack_f0[0] + 0x40);
      if (*(long *)(alStack_f0[0] + 0x48) != 0) {
        do {
          func_0x00010895bbdc();
        } while (extraout_w10 != 0);
      }
      uStack_98 = *(undefined8 *)(unaff_x19 + 0x158);
      ppuStack_a0 = *(undefined ***)(unaff_x19 + 0x150);
      *(undefined8 *)(unaff_x19 + 0x158) = uVar8;
      *(undefined8 *)(unaff_x19 + 0x150) = uVar7;
      unaff_x21 = &ppuStack_a0;
      func_0x00010895ac1c();
      unaff_x22 = (int *)((long)unaff_x20 + 0x1c);
      *(int *)(unaff_x19 + 0x160) = *(int *)unaff_x20;
      if (*(char *)(unaff_x19 + 0x180) == '\x01') {
        func_0x00010895bc44();
      }
      else {
        func_0x00010895bc44();
        *(undefined1 *)(unaff_x19 + 0x180) = 1;
      }
      cVar1 = *(char *)((long)unaff_x20 + 0x1e);
      FUN_1089a3c0c();
      uVar6 = 1;
      if (cVar1 != '\0') {
        uVar6 = 2;
      }
      uStack_90 = 0;
      uStack_88 = 0;
      ppuStack_a0 = &PTR_DAT_1107eac58;
      uStack_98 = 0;
      uStack_80 = CONCAT44(uStack_80._4_4_,uVar6);
      in_ZR = *(int *)unaff_x20 == 0;
      unaff_x20 = &ppuStack_a0;
      FUN_108957fd0(unaff_x20,!(bool)in_ZR);
      func_0x000107c278b8(auStack_b8,&DAT_10f3f0b49);
      pppuVar2 = unaff_x20;
      FUN_108957f58(unaff_x20,auStack_b8,*(undefined2 *)unaff_x22);
      func_0x00010895bcc4(*unaff_x21,pppuVar2);
      func_0x00010895bc94();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b8);
      func_0x000104c03ee4(&ppuStack_a0);
      puVar3 = &stack0xffffffffffffff20;
      FUN_108957ee4(puVar3,0x10003);
      func_0x000108942850(&ppuStack_a0,puVar3);
      puVar4 = (undefined8 *)&stack0xffffffffffffff20;
      func_0x000104c03ee4();
      FUN_1089a3c0c();
      func_0x00010895bcc4(*puVar4);
      func_0x00010895bc94();
      FUN_1089a3c0c();
      func_0x00010895bf80();
      func_0x00010895be6c();
      (*extraout_x8_00)();
      func_0x000104c03ee4(&ppuStack_a0);
      FUN_108957714();
      FUN_108957784(&ppuStack_a0,unaff_x19 + 0x118);
      if (ppuStack_a0 != (undefined **)0x0) {
        (**(code **)(*ppuStack_a0 + 0x28))();
      }
      pppuVar2 = &ppuStack_a0;
      FUN_108955f40();
      *(undefined4 *)(unaff_x19 + 0x38) = 1;
    }
    func_0x00010895bda4();
  }
  else {
    pppuVar2 = (undefined ***)0x4;
    FUN_108956318();
  }
  func_0x00010895be08();
  func_0x00010895b9e8(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_108955f40(&ppuStack_a0);
    func_0x00010895bda4();
    func_0x00010895be08();
    func_0x00010895bb18();
    func_0x00010895bc80();
    pcStack_118 = FUN_1089575d0;
    piStack_140 = unaff_x22;
    pppuStack_138 = unaff_x21;
    pppuStack_130 = unaff_x20;
    pppuStack_128 = pppuVar2;
    puStack_120 = &stack0xfffffffffffffff0;
    func_0x00010895bc24();
    alStack_190[2] = 0;
    alStack_190[3] = 0;
    func_0x00010895be7c();
    alStack_190[0] = extraout_x8_01 + 0x10;
    alStack_190[1] = 0;
    uStack_170 = 0;
    plVar5 = alStack_190;
    FUN_108957ee4(plVar5,0x10004);
    func_0x00010895bf1c();
    FUN_108957f58(plVar5,auStack_1a8,*(int *)(unaff_x20 + 1));
    func_0x000108942850(auStack_168,plVar5);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1a8);
    plVar5 = alStack_190;
    func_0x000104c03ee4();
    FUN_1089a3c0c();
    func_0x00010895bcc4(*plVar5);
    func_0x00010895bc94();
    FUN_1089a3c0c();
    func_0x00010895bf80();
    func_0x00010895be6c();
    (*extraout_x8_02)();
    func_0x000104c03ee4(auStack_168);
    return;
  }
  return;
}



/* Entry: 1089575d0; end: 1089576b3;  */

void FUN_1089575d0(void)

{
  long *plVar1;
  long extraout_x8;
  code *extraout_x8_00;
  long unaff_x20;
  undefined1 auStack_98 [24];
  long alStack_80 [4];
  undefined4 uStack_60;
  undefined1 auStack_58 [40];
  
  func_0x00010895bc24();
  alStack_80[2] = 0;
  alStack_80[3] = 0;
  func_0x00010895be7c();
  alStack_80[0] = extraout_x8 + 0x10;
  alStack_80[1] = 0;
  uStack_60 = 0;
  plVar1 = alStack_80;
  FUN_108957ee4(plVar1,0x10004);
  func_0x00010895bf1c();
  FUN_108957f58(plVar1,auStack_98,*(undefined4 *)(unaff_x20 + 8));
  func_0x000108942850(auStack_58,plVar1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
  plVar1 = alStack_80;
  func_0x000104c03ee4();
  FUN_1089a3c0c();
  func_0x00010895bcc4(*plVar1);
  func_0x00010895bc94();
  FUN_1089a3c0c();
  func_0x00010895bf80();
  func_0x00010895be6c();
  (*extraout_x8_00)();
  func_0x000104c03ee4(auStack_58);
  return;
}



/* Entry: 1089576b4; end: 108957713;  */

void FUN_1089576b4(void)

{
  code *extraout_x8;
  long unaff_x19;
  long alStack_30 [2];
  
  func_0x00010895bc24();
  FUN_108957784(alStack_30,unaff_x19 + 0x118);
  if (alStack_30[0] != 0) {
    func_0x00010895bea0();
    (*extraout_x8)();
  }
  func_0x00010895bc9c();
  *(undefined4 *)(unaff_x19 + 0x38) = 2;
  return;
}



/* Entry: 108957714; end: 108957783;  */

void FUN_108957714(long param_1)

{
  long lVar1;
  
  FUN_1089a46c0(*(undefined8 *)(param_1 + 600));
  lVar1 = *(long *)(param_1 + 0x210);
  while (lVar1 != param_1 + 0x218) {
    if (*(long **)(lVar1 + 0x40) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + 0x40) + 0x48))();
    }
    func_0x000107c27be0();
  }
  func_0x00010895ac68(*(undefined8 *)(param_1 + 0x218));
  *(long *)(param_1 + 0x210) = param_1 + 0x218;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  return;
}



/* Entry: 108957784; end: 1089577bf;  */

void FUN_108957784(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1089577c0; end: 1089577c7;  */

void FUN_1089577c0(long param_1)

{
  char cVar1;
  undefined1 in_ZR;
  undefined ***pppuVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  int extraout_w10;
  long unaff_x19;
  undefined ***unaff_x20;
  undefined ***unaff_x21;
  int *unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_1a8 [24];
  long alStack_190 [4];
  undefined4 uStack_170;
  undefined1 auStack_168 [40];
  int *piStack_140;
  undefined ***pppuStack_138;
  undefined ***pppuStack_130;
  undefined ***pppuStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long alStack_f0 [2];
  undefined1 auStack_b8 [24];
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_68;
  undefined8 uStack_48;
  
  param_1 = param_1 + -0x18;
  func_0x00010895ba98();
  uStack_48 = extraout_x8;
  func_0x00010895bb4c();
  lStack_68 = param_1;
  if (*(int *)(param_1 + 0x38) == 0) {
    func_0x00010895bc24();
    FUN_10895b538(alStack_f0,unaff_x19 + 0x210);
    if (alStack_f0[0] == 0) {
      func_0x000107c2793c(&UNK_10f4ed56b);
      func_0x000107c3173c(&uStack_108);
      ppuStack_a0 = &PTR_FUN_110ab4390;
      uStack_98 = CONCAT44(uStack_98._4_4_,0x7e6);
      uStack_88 = uStack_100;
      uStack_90 = uStack_108;
      uStack_80 = uStack_f8;
      uStack_108 = 0;
      uStack_100 = 0;
      uStack_f8 = 0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_108);
      FUN_1089575d0();
      FUN_1089576b4();
      pppuVar2 = &ppuStack_a0;
      func_0x000108b80d84();
    }
    else {
      uVar8 = *(undefined8 *)(alStack_f0[0] + 0x48);
      uVar7 = *(undefined8 *)(alStack_f0[0] + 0x40);
      if (*(long *)(alStack_f0[0] + 0x48) != 0) {
        do {
          func_0x00010895bbdc();
        } while (extraout_w10 != 0);
      }
      uStack_98 = *(undefined8 *)(unaff_x19 + 0x158);
      ppuStack_a0 = *(undefined ***)(unaff_x19 + 0x150);
      *(undefined8 *)(unaff_x19 + 0x158) = uVar8;
      *(undefined8 *)(unaff_x19 + 0x150) = uVar7;
      unaff_x21 = &ppuStack_a0;
      func_0x00010895ac1c();
      unaff_x22 = (int *)((long)unaff_x20 + 0x1c);
      *(int *)(unaff_x19 + 0x160) = *(int *)unaff_x20;
      if (*(char *)(unaff_x19 + 0x180) == '\x01') {
        func_0x00010895bc44();
      }
      else {
        func_0x00010895bc44();
        *(undefined1 *)(unaff_x19 + 0x180) = 1;
      }
      cVar1 = *(char *)((long)unaff_x20 + 0x1e);
      FUN_1089a3c0c();
      uVar6 = 1;
      if (cVar1 != '\0') {
        uVar6 = 2;
      }
      uStack_90 = 0;
      uStack_88 = 0;
      ppuStack_a0 = &PTR_DAT_1107eac58;
      uStack_98 = 0;
      uStack_80 = CONCAT44(uStack_80._4_4_,uVar6);
      in_ZR = *(int *)unaff_x20 == 0;
      unaff_x20 = &ppuStack_a0;
      FUN_108957fd0(unaff_x20,!(bool)in_ZR);
      func_0x000107c278b8(auStack_b8,&DAT_10f3f0b49);
      pppuVar2 = unaff_x20;
      FUN_108957f58(unaff_x20,auStack_b8,*(undefined2 *)unaff_x22);
      func_0x00010895bcc4(*unaff_x21,pppuVar2);
      func_0x00010895bc94();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b8);
      func_0x000104c03ee4(&ppuStack_a0);
      puVar3 = &stack0xffffffffffffff20;
      FUN_108957ee4(puVar3,0x10003);
      func_0x000108942850(&ppuStack_a0,puVar3);
      puVar4 = (undefined8 *)&stack0xffffffffffffff20;
      func_0x000104c03ee4();
      FUN_1089a3c0c();
      func_0x00010895bcc4(*puVar4);
      func_0x00010895bc94();
      FUN_1089a3c0c();
      func_0x00010895bf80();
      func_0x00010895be6c();
      (*extraout_x8_00)();
      func_0x000104c03ee4(&ppuStack_a0);
      FUN_108957714();
      FUN_108957784(&ppuStack_a0,unaff_x19 + 0x118);
      if (ppuStack_a0 != (undefined **)0x0) {
        (**(code **)(*ppuStack_a0 + 0x28))();
      }
      pppuVar2 = &ppuStack_a0;
      FUN_108955f40();
      *(undefined4 *)(unaff_x19 + 0x38) = 1;
    }
    func_0x00010895bda4();
  }
  else {
    pppuVar2 = (undefined ***)0x4;
    FUN_108956318();
  }
  func_0x00010895be08();
  func_0x00010895b9e8(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_108955f40(&ppuStack_a0);
    func_0x00010895bda4();
    func_0x00010895be08();
    func_0x00010895bb18();
    func_0x00010895bc80();
    pcStack_118 = FUN_1089575d0;
    piStack_140 = unaff_x22;
    pppuStack_138 = unaff_x21;
    pppuStack_130 = unaff_x20;
    pppuStack_128 = pppuVar2;
    puStack_120 = &stack0xfffffffffffffff0;
    func_0x00010895bc24();
    alStack_190[2] = 0;
    alStack_190[3] = 0;
    func_0x00010895be7c();
    alStack_190[0] = extraout_x8_01 + 0x10;
    alStack_190[1] = 0;
    uStack_170 = 0;
    plVar5 = alStack_190;
    FUN_108957ee4(plVar5,0x10004);
    func_0x00010895bf1c();
    FUN_108957f58(plVar5,auStack_1a8,*(int *)(unaff_x20 + 1));
    func_0x000108942850(auStack_168,plVar5);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1a8);
    plVar5 = alStack_190;
    func_0x000104c03ee4();
    FUN_1089a3c0c();
    func_0x00010895bcc4(*plVar5);
    func_0x00010895bc94();
    FUN_1089a3c0c();
    func_0x00010895bf80();
    func_0x00010895be6c();
    (*extraout_x8_02)();
    func_0x000104c03ee4(auStack_168);
    return;
  }
  return;
}



/* Entry: 1089577c8; end: 108957a5b;  */

void FUN_1089577c8(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x9;
  undefined4 extraout_w10;
  int extraout_w10_00;
  undefined4 extraout_var;
  undefined1 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  do {
    puVar4 = param_3;
    puVar3 = (undefined1 *)((long)register0x00000008 + -0xf0);
    puVar2 = (undefined8 *)((long)register0x00000008 + -0xf0);
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    puVar1 = param_2;
    param_3 = puVar4;
    func_0x00010895ba48();
    *(undefined8 *)((long)register0x00000008 + -0x48) = extraout_x8;
    func_0x00010895bb4c();
    *(undefined8 *)((long)register0x00000008 + -0x78) = extraout_x9;
    *(ulong *)((long)register0x00000008 + -0x70) = CONCAT44(extraout_var,extraout_w10);
    *(undefined1 **)((long)register0x00000008 + -0x68) = param_1;
    if (*(int *)(param_1 + 0x38) == 0) {
      puVar1 = (undefined8 *)(unaff_x19 + 0x210);
      param_3 = param_2;
      FUN_10895b538((undefined1 *)((long)register0x00000008 + -0xd0));
      unaff_x23 = *(long *)((long)register0x00000008 + -0xd0);
      if (unaff_x23 == 0) {
        puVar3 = (undefined1 *)0x1;
        FUN_108956318();
        unaff_x21 = param_2;
      }
      else {
        unaff_x22 = *(ulong *)(unaff_x19 + 0x50);
        FUN_10895ae24((undefined1 *)((long)register0x00000008 + -0xf0),unaff_x19 + 0x28);
        uVar6 = *(undefined8 *)(unaff_x23 + 0x48);
        uVar5 = *(undefined8 *)(unaff_x23 + 0x40);
        if (*(long *)(unaff_x23 + 0x48) != 0) {
          do {
            func_0x00010895bbdc();
          } while (extraout_w10_00 != 0);
        }
        uVar8 = *(undefined8 *)((long)register0x00000008 + -0xe8);
        uVar7 = *(undefined8 *)((long)register0x00000008 + -0xf0);
        *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x98) = uVar8;
        *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar7;
        *(undefined8 *)((long)register0x00000008 + -0x88) = uVar6;
        *(undefined8 *)((long)register0x00000008 + -0x90) = uVar5;
        *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
        *(ulong *)((long)register0x00000008 + -0xc0) = unaff_x22 | 1;
        *(undefined1 **)((long)register0x00000008 + -0xb8) =
             (undefined1 *)((long)register0x00000008 + -0xc0);
        func_0x00010bd42e30();
        func_0x00010895bb70();
        *puVar2 = 0;
        puVar2[1] = FUN_10895aae8;
        *(undefined4 *)(puVar2 + 2) = 0;
        uVar5 = *(undefined8 *)((long)register0x00000008 + -0xa0);
        puVar2[4] = *(undefined8 *)((long)register0x00000008 + -0x98);
        puVar2[3] = uVar5;
        *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
        uVar5 = *(undefined8 *)((long)register0x00000008 + -0x90);
        puVar2[6] = *(undefined8 *)((long)register0x00000008 + -0x88);
        puVar2[5] = uVar5;
        *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
        *(undefined8 **)((long)register0x00000008 + -0xb0) = puVar2;
        *(undefined8 **)((long)register0x00000008 + -0xa8) = puVar2;
        func_0x00010895ba7c(*(undefined8 *)((long)register0x00000008 + -0xc0));
        func_0x00010bd4058c();
        *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
        FUN_10895aac4((undefined1 *)((long)register0x00000008 + -0xb8));
        puVar3 = (undefined1 *)((long)register0x00000008 + -0xa0);
        FUN_108957a64();
        func_0x00010895bd8c();
        puVar1 = puVar2;
        unaff_x21 = (undefined8 *)((long)register0x00000008 + -0xf0);
      }
      func_0x00010895bda4();
      if (*(long *)(unaff_x19 + 0x220) == 0) {
        puVar3 = *(undefined1 **)(unaff_x19 + 600);
        FUN_1089a46c0();
        if (*(long *)(unaff_x19 + 0x250) == 0) {
          func_0x00010895bd3c();
          FUN_1089575d0();
LAB_1089579b8:
          func_0x00010895bd3c();
          FUN_1089576b4();
        }
        else {
          FUN_108956f7c();
          puVar3 = unaff_x19;
        }
      }
    }
    else {
      func_0x00010895bedc();
      if ((bool)in_ZR) {
        in_ZR = unaff_x19[0x180] == '\x01';
        if ((bool)in_ZR) {
          unaff_x21 = (undefined8 *)(unaff_x19 + 0x160);
          puVar1 = param_2;
          func_0x00010bd4370c();
          if ((((int)unaff_x21 != 0) &&
              (in_ZR = 0, *(short *)(unaff_x19 + 0x17c) == *(short *)((long)param_2 + 0x1c))) &&
             (in_ZR = unaff_x19[0x17e] == *(char *)((long)param_2 + 0x1e), (bool)in_ZR)) {
            FUN_1089a3c0c();
            func_0x00010895be7c();
            *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
            *(long *)((long)register0x00000008 + -0xa0) = extraout_x8_00 + 0x10;
            *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
            *(undefined4 *)((long)register0x00000008 + -0x80) = 3;
            func_0x00010895bd94();
            param_3 = (undefined8 *)(ulong)*(uint *)(puVar4 + 1);
            puVar1 = (undefined8 *)((long)register0x00000008 + -0xa0);
            FUN_108957f58(puVar1,(undefined1 *)((long)register0x00000008 + -0xf0));
            func_0x00010895bcc4(*unaff_x21);
            func_0x00010895bc94();
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
            func_0x00010895bddc();
            goto LAB_1089579b8;
          }
        }
        puVar3 = (undefined1 *)0x7;
      }
      else {
        puVar3 = (undefined1 *)0x6;
      }
      FUN_108956318();
      unaff_x21 = param_2;
    }
    param_2 = puVar1;
    func_0x00010895be08();
    func_0x00010895b9e8(*(undefined8 *)((long)register0x00000008 + -0x48));
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    param_1 = puVar3;
    func_0x00010895bddc();
    func_0x00010895be08();
    func_0x00010895bb18();
    unaff_x30 = FUN_108957a5c;
    func_0x00010895bc80();
    param_1 = param_1 + -0x18;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xf0);
    unaff_x19 = puVar3;
    unaff_x20 = puVar4;
  } while( true );
}



/* Entry: 108957a5c; end: 108957a63;  */

void FUN_108957a5c(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x9;
  undefined4 extraout_w10;
  int extraout_w10_00;
  undefined4 extraout_var;
  undefined1 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  do {
    puVar4 = param_3;
    param_1 = param_1 + -0x18;
    puVar3 = (undefined1 *)((long)register0x00000008 + -0xf0);
    puVar2 = (undefined8 *)((long)register0x00000008 + -0xf0);
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    puVar1 = param_2;
    param_3 = puVar4;
    func_0x00010895ba48();
    *(undefined8 *)((long)register0x00000008 + -0x48) = extraout_x8;
    func_0x00010895bb4c();
    *(undefined8 *)((long)register0x00000008 + -0x78) = extraout_x9;
    *(ulong *)((long)register0x00000008 + -0x70) = CONCAT44(extraout_var,extraout_w10);
    *(undefined1 **)((long)register0x00000008 + -0x68) = param_1;
    if (*(int *)(param_1 + 0x38) == 0) {
      puVar1 = (undefined8 *)(unaff_x19 + 0x210);
      param_3 = param_2;
      FUN_10895b538((undefined1 *)((long)register0x00000008 + -0xd0));
      unaff_x23 = *(long *)((long)register0x00000008 + -0xd0);
      if (unaff_x23 == 0) {
        puVar3 = (undefined1 *)0x1;
        FUN_108956318();
        unaff_x21 = param_2;
      }
      else {
        unaff_x22 = *(ulong *)(unaff_x19 + 0x50);
        FUN_10895ae24((undefined1 *)((long)register0x00000008 + -0xf0),unaff_x19 + 0x28);
        uVar6 = *(undefined8 *)(unaff_x23 + 0x48);
        uVar5 = *(undefined8 *)(unaff_x23 + 0x40);
        if (*(long *)(unaff_x23 + 0x48) != 0) {
          do {
            func_0x00010895bbdc();
          } while (extraout_w10_00 != 0);
        }
        uVar8 = *(undefined8 *)((long)register0x00000008 + -0xe8);
        uVar7 = *(undefined8 *)((long)register0x00000008 + -0xf0);
        *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x98) = uVar8;
        *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar7;
        *(undefined8 *)((long)register0x00000008 + -0x88) = uVar6;
        *(undefined8 *)((long)register0x00000008 + -0x90) = uVar5;
        *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
        *(ulong *)((long)register0x00000008 + -0xc0) = unaff_x22 | 1;
        *(undefined1 **)((long)register0x00000008 + -0xb8) =
             (undefined1 *)((long)register0x00000008 + -0xc0);
        func_0x00010bd42e30();
        func_0x00010895bb70();
        *puVar2 = 0;
        puVar2[1] = FUN_10895aae8;
        *(undefined4 *)(puVar2 + 2) = 0;
        uVar5 = *(undefined8 *)((long)register0x00000008 + -0xa0);
        puVar2[4] = *(undefined8 *)((long)register0x00000008 + -0x98);
        puVar2[3] = uVar5;
        *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
        uVar5 = *(undefined8 *)((long)register0x00000008 + -0x90);
        puVar2[6] = *(undefined8 *)((long)register0x00000008 + -0x88);
        puVar2[5] = uVar5;
        *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
        *(undefined8 **)((long)register0x00000008 + -0xb0) = puVar2;
        *(undefined8 **)((long)register0x00000008 + -0xa8) = puVar2;
        func_0x00010895ba7c(*(undefined8 *)((long)register0x00000008 + -0xc0));
        func_0x00010bd4058c();
        *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
        FUN_10895aac4((undefined1 *)((long)register0x00000008 + -0xb8));
        puVar3 = (undefined1 *)((long)register0x00000008 + -0xa0);
        FUN_108957a64();
        func_0x00010895bd8c();
        puVar1 = puVar2;
        unaff_x21 = (undefined8 *)((long)register0x00000008 + -0xf0);
      }
      func_0x00010895bda4();
      if (*(long *)(unaff_x19 + 0x220) == 0) {
        puVar3 = *(undefined1 **)(unaff_x19 + 600);
        FUN_1089a46c0();
        if (*(long *)(unaff_x19 + 0x250) == 0) {
          func_0x00010895bd3c();
          FUN_1089575d0();
LAB_1089579b8:
          func_0x00010895bd3c();
          FUN_1089576b4();
        }
        else {
          FUN_108956f7c();
          puVar3 = unaff_x19;
        }
      }
    }
    else {
      func_0x00010895bedc();
      if ((bool)in_ZR) {
        in_ZR = unaff_x19[0x180] == '\x01';
        if ((bool)in_ZR) {
          unaff_x21 = (undefined8 *)(unaff_x19 + 0x160);
          puVar1 = param_2;
          func_0x00010bd4370c();
          if ((((int)unaff_x21 != 0) &&
              (in_ZR = 0, *(short *)(unaff_x19 + 0x17c) == *(short *)((long)param_2 + 0x1c))) &&
             (in_ZR = unaff_x19[0x17e] == *(char *)((long)param_2 + 0x1e), (bool)in_ZR)) {
            FUN_1089a3c0c();
            func_0x00010895be7c();
            *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
            *(long *)((long)register0x00000008 + -0xa0) = extraout_x8_00 + 0x10;
            *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
            *(undefined4 *)((long)register0x00000008 + -0x80) = 3;
            func_0x00010895bd94();
            param_3 = (undefined8 *)(ulong)*(uint *)(puVar4 + 1);
            puVar1 = (undefined8 *)((long)register0x00000008 + -0xa0);
            FUN_108957f58(puVar1,(undefined1 *)((long)register0x00000008 + -0xf0));
            func_0x00010895bcc4(*unaff_x21);
            func_0x00010895bc94();
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
            func_0x00010895bddc();
            goto LAB_1089579b8;
          }
        }
        puVar3 = (undefined1 *)0x7;
      }
      else {
        puVar3 = (undefined1 *)0x6;
      }
      FUN_108956318();
      unaff_x21 = param_2;
    }
    param_2 = puVar1;
    func_0x00010895be08();
    func_0x00010895b9e8(*(undefined8 *)((long)register0x00000008 + -0x48));
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    param_1 = puVar3;
    func_0x00010895bddc();
    func_0x00010895be08();
    func_0x00010895bb18();
    unaff_x30 = FUN_108957a5c;
    func_0x00010895bc80();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xf0);
    unaff_x19 = puVar3;
    unaff_x20 = puVar4;
  } while( true );
}



/* Entry: 108957a64; end: 108957a8b;  */

undefined8 FUN_108957a64(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010895ac1c(param_1 + 0x10);
  func_0x000108955fc0();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 108957a8c; end: 108957adf;  */

void FUN_108957a8c(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [64];
  
  if ((char)param_1[0x36] == '\x01') {
    FUN_108962e24(auStack_60,param_2);
    (**(code **)(*param_1 + 0x20))(param_1,auStack_60);
    func_0x00010b4fc988(auStack_60);
    return;
  }
  lVar2 = 0x1b4;
  if (*(char *)((long)param_2 + 1) != '\x02') {
    lVar2 = 0x1d4;
  }
  puVar1 = (undefined8 *)((long)param_1 + lVar2);
  uVar4 = *(undefined8 *)((long)param_2 + 0x14);
  uVar3 = *(undefined8 *)((long)param_2 + 0xc);
  uVar5 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar5;
  *(undefined8 *)((long)puVar1 + 0x14) = uVar4;
  *(undefined8 *)((long)puVar1 + 0xc) = uVar3;
  if ((*(byte *)((long)puVar1 + 0x1c) & 1) == 0) {
    *(undefined1 *)((long)puVar1 + 0x1c) = 1;
  }
  return;
}



/* Entry: 108957ae0; end: 108957b6f;  */

void FUN_108957ae0(long param_1)

{
  char cVar1;
  undefined1 in_ZR;
  code *pcVar2;
  code *extraout_x8;
  undefined8 uStack_40;
  
  func_0x00010895bedc(param_1 + 0x38);
  if ((bool)in_ZR) {
    func_0x00010895be5c();
    cVar1 = *(char *)(param_1 + 0x268);
    *(undefined1 *)(param_1 + 0x268) = 1;
    if (cVar1 == '\x01') {
      pcVar2 = *(code **)(**(long **)(param_1 + 0x260) + 0x20);
    }
    else {
      func_0x00010895bea0();
      pcVar2 = extraout_x8;
    }
    (*pcVar2)();
    func_0x00010895bef0();
    if (uStack_40 != (undefined8 *)0x0) {
      (**(code **)*uStack_40)();
    }
    func_0x00010895bc9c();
  }
  return;
}



/* Entry: 108957b70; end: 108957b77;  */

void FUN_108957b70(long param_1)

{
  char cVar1;
  undefined1 in_ZR;
  long lVar2;
  code *pcVar3;
  code *extraout_x8;
  undefined8 uStack_40;
  
  lVar2 = param_1 + -0x18;
  func_0x00010895bedc(param_1 + 0x20);
  if ((bool)in_ZR) {
    func_0x00010895be5c();
    cVar1 = *(char *)(lVar2 + 0x268);
    *(undefined1 *)(lVar2 + 0x268) = 1;
    if (cVar1 == '\x01') {
      pcVar3 = *(code **)(**(long **)(lVar2 + 0x260) + 0x20);
    }
    else {
      func_0x00010895bea0();
      pcVar3 = extraout_x8;
    }
    (*pcVar3)();
    func_0x00010895bef0();
    if (uStack_40 != (undefined8 *)0x0) {
      (**(code **)*uStack_40)();
    }
    func_0x00010895bc9c();
  }
  return;
}



/* Entry: 108957b78; end: 108957bf7;  */

void FUN_108957b78(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  int *piVar1;
  undefined8 uStack_40;
  
  func_0x00010895bedc(param_1 + 0x38);
  if ((bool)in_ZR) {
    func_0x00010895bef0();
    if ((uStack_40 != (long *)0x0) && (*(char *)(param_1 + 0x180) == '\x01')) {
      piVar1 = (int *)(param_1 + 0x160);
      FUN_108957bf8();
      (**(code **)(*uStack_40 + 8))(uStack_40,param_2,*piVar1 == 1);
    }
    func_0x00010895bc9c();
  }
  return;
}



/* Entry: 108957bf8; end: 108957c0f;  */

void FUN_108957bf8(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  int *piVar1;
  long lVar2;
  undefined8 uStack_50;
  
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  lVar2 = param_1 + -0x18;
  func_0x00010895bedc(param_1 + 0x20);
  if ((bool)in_ZR) {
    func_0x00010895bef0();
    if ((uStack_50 != (long *)0x0) && (*(char *)(lVar2 + 0x180) == '\x01')) {
      piVar1 = (int *)(lVar2 + 0x160);
      FUN_108957bf8();
      (**(code **)(*uStack_50 + 8))(uStack_50,param_2,*piVar1 == 1);
    }
    func_0x00010895bc9c();
  }
  return;
}



/* Entry: 108957c10; end: 108957c17;  */

void FUN_108957c10(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  int *piVar1;
  long lVar2;
  undefined8 uStack_40;
  
  lVar2 = param_1 + -0x18;
  func_0x00010895bedc(param_1 + 0x20);
  if ((bool)in_ZR) {
    func_0x00010895bef0();
    if ((uStack_40 != (long *)0x0) && (*(char *)(lVar2 + 0x180) == '\x01')) {
      piVar1 = (int *)(lVar2 + 0x160);
      FUN_108957bf8();
      (**(code **)(*uStack_40 + 8))(uStack_40,param_2,*piVar1 == 1);
    }
    func_0x00010895bc9c();
  }
  return;
}



/* Entry: 108957c18; end: 108957cef;  */

void FUN_108957c18(undefined1 *param_1,undefined1 *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  code *extraout_x8;
  undefined8 extraout_x9;
  undefined1 *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010895ba5c();
    *(undefined8 *)((long)register0x00000008 + -0x38) = extraout_x9;
    param_1[0x290] = 1;
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0x10895b960;
    *(undefined ***)((long)register0x00000008 + -0x60) = &PTR_DAT_110a9e4b0;
    *(undefined1 **)((long)register0x00000008 + -0x58) = param_1;
    uVar1 = *(int *)(param_1 + 0x38) == 1;
    puVar2 = param_2;
    uVar3 = param_3;
    if ((bool)uVar1) {
      puVar2 = param_1 + 0x118;
      FUN_108957784((undefined1 *)((long)register0x00000008 + -0x78));
      if (*(long *)((long)register0x00000008 + -0x78) != 0) {
        func_0x00010895bdf4();
        puVar2 = param_2;
        uVar3 = param_3;
        (*extraout_x8)();
      }
      func_0x00010895bdac();
      unaff_x20 = param_3;
      unaff_x21 = param_2;
    }
    param_3 = uVar3;
    param_2 = puVar2;
    unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x68);
    func_0x000107c281f0();
    func_0x00010895b9e8(*(undefined8 *)((long)register0x00000008 + -0x38));
    if ((bool)uVar1) break;
    ___stack_chk_fail();
    func_0x00010895bdac();
    param_1 = (undefined1 *)((long)register0x00000008 + -0x68);
    func_0x000107c281f0();
    unaff_x30 = FUN_108957cf0;
    func_0x00010895bb18();
    param_1 = param_1 + -0x20;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  }
  return;
}



/* Entry: 108957cf0; end: 108957cf7;  */

void FUN_108957cf0(undefined1 *param_1,undefined1 *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  code *extraout_x8;
  undefined8 extraout_x9;
  undefined1 *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    param_1 = param_1 + -0x20;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010895ba5c();
    *(undefined8 *)((long)register0x00000008 + -0x38) = extraout_x9;
    param_1[0x290] = 1;
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0x10895b960;
    *(undefined ***)((long)register0x00000008 + -0x60) = &PTR_DAT_110a9e4b0;
    *(undefined1 **)((long)register0x00000008 + -0x58) = param_1;
    uVar1 = *(int *)(param_1 + 0x38) == 1;
    puVar2 = param_2;
    uVar3 = param_3;
    if ((bool)uVar1) {
      puVar2 = param_1 + 0x118;
      FUN_108957784((undefined1 *)((long)register0x00000008 + -0x78));
      if (*(long *)((long)register0x00000008 + -0x78) != 0) {
        func_0x00010895bdf4();
        puVar2 = param_2;
        uVar3 = param_3;
        (*extraout_x8)();
      }
      func_0x00010895bdac();
      unaff_x20 = param_3;
      unaff_x21 = param_2;
    }
    param_3 = uVar3;
    param_2 = puVar2;
    unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x68);
    func_0x000107c281f0();
    func_0x00010895b9e8(*(undefined8 *)((long)register0x00000008 + -0x38));
    if ((bool)uVar1) break;
    ___stack_chk_fail();
    func_0x00010895bdac();
    param_1 = (undefined1 *)((long)register0x00000008 + -0x68);
    func_0x000107c281f0();
    unaff_x30 = FUN_108957cf0;
    func_0x00010895bb18();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  }
  return;
}



/* Entry: 108957cf8; end: 108957de7;  */

void FUN_108957cf8(long param_1,undefined8 param_2,long param_3,undefined4 param_4,ulong param_5)

{
  undefined1 in_ZR;
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 uStack_41;
  
  func_0x00010895bedc(param_1 + 0x38);
  if ((bool)in_ZR) {
    (**(code **)(**(long **)(param_1 + 0x260) + 0x20))(*(long **)(param_1 + 0x260),param_3);
    if (((param_5 & 1) == 0) && (*(long *)(param_1 + 0x40) != param_3)) {
      lVar1 = param_1 + 0x270;
      lVar3 = param_3;
      func_0x000108957e24();
      if ((lVar1 != 0) && ((*(byte *)(lVar3 + 8) & 1) == 0)) {
        *(undefined1 *)(lVar3 + 8) = 1;
        FUN_108957784(&uStack_58,param_1 + 0x118);
        plVar2 = (long *)CONCAT44(uStack_54,uStack_58);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x20))(plVar2,param_3);
        }
        func_0x00010895bdac();
      }
    }
    plVar2 = *(long **)(param_1 + 0x148);
    if (plVar2 != (long *)0x0) {
      uStack_41 = (undefined1)param_5;
      uStack_58 = param_4;
      (**(code **)(*plVar2 + 0x30))(plVar2,param_2,&uStack_58,&uStack_41);
    }
  }
  return;
}



/* Entry: 108957de8; end: 108957ee3;  */

void FUN_108957de8(long param_1,undefined8 param_2,long param_3,undefined4 param_4,ulong param_5)

{
  undefined1 in_ZR;
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 uStack_41;
  
  lVar3 = param_1 + -0x18;
  func_0x00010895bedc(param_1 + 0x20);
  if ((bool)in_ZR) {
    (**(code **)(**(long **)(lVar3 + 0x260) + 0x20))(*(long **)(lVar3 + 0x260),param_3);
    if (((param_5 & 1) == 0) && (*(long *)(lVar3 + 0x40) != param_3)) {
      lVar1 = lVar3 + 0x270;
      lVar4 = param_3;
      func_0x000108957e24();
      if ((lVar1 != 0) && ((*(byte *)(lVar4 + 8) & 1) == 0)) {
        *(undefined1 *)(lVar4 + 8) = 1;
        FUN_108957784(&uStack_58,lVar3 + 0x118);
        plVar2 = (long *)CONCAT44(uStack_54,uStack_58);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x20))(plVar2,param_3);
        }
        func_0x00010895bdac();
      }
    }
    plVar2 = *(long **)(lVar3 + 0x148);
    if (plVar2 != (long *)0x0) {
      uStack_41 = (undefined1)param_5;
      uStack_58 = param_4;
      (**(code **)(*plVar2 + 0x30))(plVar2,param_2,&uStack_58,&uStack_41);
    }
  }
  return;
}



/* Entry: 108957ee4; end: 108957f57;  */

void FUN_108957ee4(void)

{
  func_0x00010895bfd8();
  func_0x00010895bf1c();
  func_0x00010895bf50();
  func_0x00010895ba8c();
  return;
}



/* Entry: 108957f58; end: 108957fcf;  */

undefined8 FUN_108957f58(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  __ZNSt3__19to_stringEi(auStack_58,param_3);
  FUN_1089427e0(param_1,&uStack_40,auStack_58);
  func_0x00010895ba8c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_40);
  return param_1;
}



/* Entry: 108957fd0; end: 108958043;  */

void FUN_108957fd0(void)

{
  func_0x00010895bfd8();
  func_0x00010895bf1c();
  func_0x00010895bf50();
  func_0x00010895ba8c();
  return;
}



/* Entry: 108958044; end: 1089580c7;  */

void FUN_108958044(undefined8 *param_1,long param_2)

{
  undefined8 extraout_x8;
  
  func_0x00010895bc74();
  *(undefined8 *)((long)param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *param_1 = extraout_x8;
  FUN_108939218(param_1 + 2,param_2 + 0x10);
  return;
}



/* Entry: 1089580c8; end: 1089580eb;  */

undefined8 FUN_1089580c8(undefined8 param_1)

{
  FUN_108958ba4();
  return param_1;
}



/* Entry: 1089580ec; end: 10895847f;  */

void FUN_1089580ec(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined2 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *puVar19;
  long *plVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  long *plStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  long *plStack_70;
  
  plVar15 = param_1 + 5;
  plVar20 = (long *)param_1[1];
  plVar2 = (long *)param_1[2];
  uVar4 = (long)plVar2 - (long)plVar20;
  lVar7 = 0;
  if (uVar4 != 0) {
    lVar7 = ((long)plVar2 - (long)plVar20 >> 3) * 0x66 + -1;
  }
  uVar11 = param_1[4];
  puVar9 = param_2;
  if (lVar7 != *plVar15 + uVar11) goto LAB_108958320;
  if (uVar11 < 0x66) {
    plVar18 = param_1 + 3;
    plVar16 = (long *)*plVar18;
    plVar17 = (long *)*param_1;
    if ((ulong)((long)plVar16 - (long)plVar17) <= uVar4) {
      puVar12 = (undefined8 *)((long)plVar16 - (long)plVar17 >> 2);
      if (plVar16 == plVar17) {
        puVar12 = (undefined8 *)0x1;
      }
      puVar10 = param_2;
      plStack_98 = plVar18;
      FUN_1089586a8();
      puVar21 = (undefined8 *)((long)puVar12 + uVar4);
      puVar22 = puVar12 + (long)puVar10;
      uVar8 = 0xff0;
      puVar9 = puVar10;
      puStack_b8 = puVar12;
      puStack_b0 = puVar21;
      puStack_a8 = puVar21;
      puStack_a0 = puVar22;
      __Znwm();
      uStack_c0 = 0x66;
      puVar19 = puVar21;
      plStack_c8 = plVar15;
      if (uVar4 == (long)puVar10 * 8) {
        if (plVar2 == plVar20) {
          puVar19 = (undefined8 *)0x1;
          uStack_d0 = uVar8;
          plStack_70 = plVar18;
          FUN_1089586a8();
          puStack_78 = puVar19 + (long)puVar9;
          puVar9 = puVar21;
          puStack_90 = puVar19;
          puStack_88 = puVar19;
          puStack_80 = puVar19;
          FUN_108958680(&puStack_90,puVar21,puVar21);
          puVar1 = puStack_78;
          puVar19 = puStack_80;
          puVar13 = puStack_88;
          puVar10 = puStack_90;
          puStack_b8 = puStack_90;
          puStack_b0 = puStack_88;
          puStack_a0 = puStack_78;
          puStack_90 = puVar12;
          puStack_88 = puVar21;
          puStack_80 = puVar21;
          puStack_78 = puVar22;
          func_0x00010895bf30();
          puVar12 = puVar10;
          puVar21 = puVar13;
          puVar22 = puVar1;
        }
        else {
          puVar21 = puVar21 + (((long)puVar21 - (long)puVar12 >> 3) + 1) / -2;
          puVar19 = puVar21;
          puStack_b0 = puVar21;
        }
      }
      puVar10 = puVar19 + 1;
      *puVar19 = uVar8;
      uStack_d0 = 0;
      puVar19 = (undefined8 *)param_1[2];
      puStack_a8 = puVar10;
      while (puVar13 = (undefined8 *)param_1[1], puVar19 != puVar13) {
        puVar13 = puVar21;
        if (puVar21 == puVar12) {
          if (puVar10 < puVar22) {
            lVar7 = (long)puVar10 - (long)puVar12;
            puVar1 = puVar10 + (((long)puVar22 - (long)puVar10 >> 3) + 1) / 2;
            puVar13 = (undefined8 *)((long)puVar1 - ((long)puVar10 - (long)puVar12));
            puVar10 = puVar1;
            if (lVar7 != 0) {
              _memmove(puVar13,puVar21,lVar7);
              puVar9 = puVar21;
            }
          }
          else {
            lVar7 = (long)puVar22 - (long)puVar12 >> 2;
            if ((long)puVar22 - (long)puVar12 == 0) {
              lVar7 = 1;
            }
            plStack_70 = plVar18;
            FUN_1089586a8(lVar7);
            func_0x00010895be88(lVar7 * 2 + 6);
            puVar9 = puVar12;
            FUN_108958680(&puStack_90,puVar12,puVar10);
            puVar6 = puStack_78;
            puVar5 = puStack_80;
            puVar13 = puStack_88;
            puVar1 = puStack_90;
            puStack_90 = puVar12;
            puStack_88 = puVar21;
            puStack_80 = puVar10;
            puStack_78 = puVar22;
            func_0x00010895bf30();
            puVar12 = puVar1;
            puVar10 = puVar5;
            puVar22 = puVar6;
          }
        }
        puVar19 = puVar19 + -1;
        puVar21 = puVar13 + -1;
        *puVar21 = *puVar19;
      }
      puStack_b8 = (undefined8 *)*param_1;
      *param_1 = (long)puVar12;
      param_1[1] = (long)puVar21;
      puStack_a0 = (undefined8 *)param_1[3];
      puStack_a8 = (undefined8 *)param_1[2];
      param_1[2] = (long)puVar10;
      param_1[3] = (long)puVar22;
      puStack_b0 = puVar13;
      func_0x0001089586dc(&uStack_d0);
      func_0x000108958704(&puStack_b8);
      goto LAB_108958320;
    }
    lVar7 = 0xff0;
    __Znwm();
    if (plVar16 != plVar2) {
      *plVar2 = lVar7;
      param_1[2] = param_1[2] + 8;
      goto LAB_108958320;
    }
    if (plVar20 == plVar17) {
      lVar14 = (long)plVar16 - (long)plVar20 >> 2;
      if (plVar2 == plVar20) {
        lVar14 = 1;
      }
      plStack_70 = plVar18;
      FUN_1089586a8();
      func_0x00010895be88(lVar14 * 2 + 6);
      FUN_108958680(&puStack_90,param_1[1],param_1[2]);
      puVar12 = (undefined8 *)param_1[1];
      puVar9 = (undefined8 *)*param_1;
      puVar22 = (undefined8 *)param_1[3];
      puVar21 = (undefined8 *)param_1[2];
      param_1[1] = (long)puStack_88;
      *param_1 = (long)puStack_90;
      param_1[3] = (long)puStack_78;
      param_1[2] = (long)puStack_80;
      puStack_90 = puVar9;
      puStack_88 = puVar12;
      puStack_80 = puVar21;
      puStack_78 = puVar22;
      func_0x00010895bf30();
      plVar20 = (long *)param_1[1];
    }
    plVar20[-1] = lVar7;
    lVar7 = param_1[1];
    param_1[1] = lVar7 + -8;
    puVar9 = *(undefined8 **)(lVar7 + -8);
    param_1[1] = lVar7;
  }
  else {
    param_1[4] = uVar11 - 0x66;
    puVar9 = (undefined8 *)*plVar20;
    param_1[1] = (long)(plVar20 + 1);
  }
  FUN_10895858c(param_1);
LAB_108958320:
  FUN_10895854c(param_1);
  *puVar9 = *param_2;
  uVar8 = param_2[1];
  puVar9[2] = param_2[2];
  puVar9[1] = uVar8;
  *(undefined4 *)(puVar9 + 3) = *(undefined4 *)(param_2 + 3);
  uVar3 = *(undefined2 *)((long)param_2 + 0x1c);
  *(undefined1 *)((long)puVar9 + 0x1e) = *(undefined1 *)((long)param_2 + 0x1e);
  *(undefined2 *)((long)puVar9 + 0x1c) = uVar3;
  puVar9[4] = 0xfa;
  param_1[5] = param_1[5] + 1;
  return;
}



/* Entry: 108958480; end: 1089584d3;  */

void FUN_108958480(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010895beb8();
  if (*(char *)(param_2 + 0x20) == '\x01') {
    puVar1 = (undefined8 *)unaff_x19[2];
    uVar2 = unaff_x19[3];
  }
  else {
    uVar2 = *(undefined8 *)*unaff_x19;
    puVar1 = unaff_x19;
    FUN_108958744();
    unaff_x19[2] = puVar1;
    unaff_x19[3] = uVar2;
    *(undefined1 *)(unaff_x19 + 4) = 1;
  }
  *unaff_x20 = puVar1;
  unaff_x20[1] = uVar2;
  unaff_x20[2] = unaff_x19;
  return;
}



/* Entry: 1089584d4; end: 108958507;  */

void FUN_1089584d4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  for (; (param_2 != param_4 && (*(char *)(param_2 + 0x1e) != '\0')); param_2 = param_2 + 0x20) {
  }
  return;
}



/* Entry: 108958508; end: 10895854b;  */

void FUN_108958508(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (param_2 < 0x924924924924925) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x1c);
    return;
  }
  func_0x000104bd35f4();
  if (*(long *)(puVar1 + 0x10) == *(long *)(puVar1 + 8)) {
    return;
  }
  return;
}



/* Entry: 10895854c; end: 10895858b;  */

void FUN_10895854c(long param_1)

{
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8)) {
    return;
  }
  return;
}



/* Entry: 10895858c; end: 10895867f;  */

void FUN_10895858c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong *puStack_50;
  
  func_0x00010895bc24();
  puStack_50 = (ulong *)(param_1 + 0x18);
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  if (puVar5 == (undefined8 *)*puStack_50) {
    uVar7 = *unaff_x19;
    uVar4 = unaff_x19[1];
    if (uVar4 < uVar7 || uVar4 - uVar7 == 0) {
      uVar6 = (long)((long)puVar5 - uVar7) >> 2;
      if ((long)puVar5 - uVar7 == 0) {
        uVar6 = 1;
      }
      uVar7 = uVar6;
      FUN_1089586a8();
      uStack_68 = uVar7 + (uVar6 >> 2) * 8;
      uStack_58 = uVar7 + uVar4 * 8;
      uStack_70 = uVar7;
      uStack_60 = uStack_68;
      FUN_108958680(&uStack_70,unaff_x19[1],unaff_x19[2]);
      uVar4 = unaff_x19[1];
      uVar7 = *unaff_x19;
      uVar8 = unaff_x19[3];
      uVar6 = unaff_x19[2];
      unaff_x19[1] = uStack_68;
      *unaff_x19 = uStack_70;
      unaff_x19[3] = uStack_58;
      unaff_x19[2] = uStack_60;
      uStack_70 = uVar7;
      uStack_68 = uVar4;
      uStack_60 = uVar6;
      uStack_58 = uVar8;
      func_0x000108958704(&uStack_70);
      puVar5 = (undefined8 *)unaff_x19[2];
    }
    else {
      lVar2 = (((long)(uVar4 - uVar7) >> 3) + 1) / -2;
      lVar1 = uVar4 + lVar2 * 8;
      lVar3 = (long)puVar5 - uVar4;
      if (lVar3 != 0) {
        _memmove(lVar1,uVar4,lVar3);
        uVar4 = unaff_x19[1];
      }
      puVar5 = (undefined8 *)(lVar1 + lVar3);
      unaff_x19[1] = uVar4 + lVar2 * 8;
      unaff_x19[2] = (ulong)puVar5;
    }
  }
  *puVar5 = unaff_x20;
  unaff_x19[2] = unaff_x19[2] + 8;
  return;
}



/* Entry: 108958680; end: 1089586a7;  */

void FUN_108958680(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  param_3 = param_3 - (long)param_2;
  lVar1 = (long)*(undefined8 **)(param_1 + 0x10) + param_3;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (; param_3 != 0; param_3 = param_3 + -8) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1089586a8; end: 108958743;  */

void FUN_1089586a8(ulong param_1)

{
  undefined8 *unaff_x19;
  
  if (param_1 >> 0x3d == 0) {
    __Znwm(param_1 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010895be34();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 108958744; end: 108958777;  */

void FUN_108958744(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  for (; (param_2 != param_4 && (*(char *)(param_2 + 0x1e) == '\0')); param_2 = param_2 + 0x20) {
  }
  return;
}


