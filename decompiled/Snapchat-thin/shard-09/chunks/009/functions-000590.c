/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1072bbb54; end: 1072bbb5b;  */

void FUN_1072bbb54(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001072ce520(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -5;
    func_0x000107931394();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072bbb5c; end: 1072bbbdb;  */

void FUN_1072bbb5c(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072ce520();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x28;
    func_0x000107931394();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072bbbdc; end: 1072bbbe3;  */

void FUN_1072bbbdc(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001072ce520(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -4;
    func_0x0001079311cc();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072bbbe4; end: 1072bbc37;  */

void FUN_1072bbbe4(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072ce520();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x20;
    func_0x0001079311cc();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072bbc38; end: 1072bbca3;  */

undefined8 * FUN_1072bbc38(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109ec560;
  if (param_1 != param_2) {
    uVar1 = param_2[1];
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      func_0x000107931354(param_1);
    }
    else {
      func_0x000107931324(param_1);
    }
  }
  return param_1;
}



/* Entry: 1072bbca4; end: 1072bbcaf;  */

void FUN_1072bbca4(long param_1)

{
  func_0x0001072ce494();
  func_0x00010028ad98(param_1 + 0x90);
  func_0x0001001148fc(param_1 + 0x70);
  func_0x0001001148fc(param_1 + 0x50);
  func_0x0001001148fc(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 1072bbcb0; end: 1072bbd17;  */

void FUN_1072bbcb0(long param_1)

{
  func_0x00010028ad98(param_1 + 0x90);
  func_0x0001001148fc(param_1 + 0x70);
  func_0x0001001148fc(param_1 + 0x50);
  func_0x0001001148fc(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 1072bbd18; end: 1072bbd2b;  */

void FUN_1072bbd18(void)

{
  func_0x0001072bbcec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072bbd2c; end: 1072bbd5f;  */

void FUN_1072bbd2c(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x0001072ce7fc();
  func_0x0001072ceba0(&PTR_SUB_11099a790);
  if (extraout_x8 != 0) {
    do {
      func_0x0001072ced88();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1072bbd60; end: 1072bbda7;  */

void FUN_1072bbd60(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  *param_2 = &PTR_SUB_11099a790;
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001072ced88(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1072bbda8; end: 1072bbde7;  */

void FUN_1072bbda8(long param_1)

{
  code *extraout_x8;
  
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001072cf5a4();
    (*extraout_x8)();
  }
  return;
}



/* Entry: 1072bbde8; end: 1072bbe0f;  */

void FUN_1072bbde8(undefined8 param_1)

{
  func_0x0001072cea90();
  func_0x0001072cea04(param_1,&PTR_DAT_11099a800);
  func_0x0001072ce484();
  return;
}



/* Entry: 1072bbe10; end: 1072bbe1b;  */

undefined ** FUN_1072bbe10(void)

{
  return &PTR_DAT_11099a800;
}



/* Entry: 1072bbe1c; end: 1072bbe3f;  */

void FUN_1072bbe1c(long param_1)

{
  func_0x0001072cea78();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1072bbe40; end: 1072bbe8f;  */

void FUN_1072bbe40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  undefined1 auStack_38 [24];
  
  func_0x0001072ce934();
  func_0x00010002b838();
  FUN_1072bbe90(unaff_x19 + 0x20,auStack_38,param_3);
  func_0x0001003ac718();
  *(undefined1 *)(unaff_x19 + 0x4c) = 1;
  return;
}



/* Entry: 1072bbe90; end: 1072bbee7;  */

void FUN_1072bbe90(undefined8 param_1,undefined8 *param_2)

{
  func_0x0001072cfc44(*param_2);
  FUN_10729d5c0();
  func_0x0001072ce928();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  return;
}



/* Entry: 1072bbee8; end: 1072bbf1f;  */

long FUN_1072bbee8(long param_1)

{
  FUN_107261f5c(param_1 + 200);
  func_0x0001001148fc(param_1 + 0xa8);
  func_0x0001001148fc(param_1 + 0x88);
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x000104c2f714(param_1);
  }
  return param_1;
}



/* Entry: 1072bbf20; end: 1072bbf53;  */

undefined1  [16] FUN_1072bbf20(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar2 = (param_1 % 1000) * 4000000;
  lVar1 = lVar2 + 4000000000;
  if (-1 < param_1 % 1000) {
    lVar1 = lVar2;
  }
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = param_1 / 1000 + (lVar2 >> 0x3f);
  return auVar3;
}



/* Entry: 1072bbf54; end: 1072bbf73;  */

void FUN_1072bbf54(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_1072bbf74();
  }
  return;
}



/* Entry: 1072bbf74; end: 1072bbfc3;  */

void FUN_1072bbf74(void)

{
  func_0x0001072ce4a0();
  func_0x0001072bbf98();
  return;
}



/* Entry: 1072bbfc4; end: 1072bbfcb;  */

void FUN_1072bbfc4(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001072ce520(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x4a;
    FUN_107264bb8();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072bbfcc; end: 1072bbffb;  */

void FUN_1072bbfcc(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072ce520();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x250;
    FUN_107264bb8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072bbffc; end: 1072bc007;  */

void FUN_1072bbffc(void)

{
  func_0x0001072ce494();
  func_0x0001072ce69c();
  func_0x0001072cf838();
  func_0x0001072cdfc8();
  return;
}



/* Entry: 1072bc008; end: 1072bc02f;  */

void FUN_1072bc008(void)

{
  func_0x0001072ce69c();
  func_0x0001072cf838();
  func_0x0001072cdfc8();
  return;
}



/* Entry: 1072bc030; end: 1072bc07f;  */

void FUN_1072bc030(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001072ce6ac();
  if (param_2 != 0) {
    func_0x0001072bc060(param_4);
  }
  func_0x0001072cfbcc();
  return;
}



/* Entry: 1072bc080; end: 1072bc097;  */

long * FUN_1072bc080(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3b == 0) {
    plVar1 = (long *)(param_2 << 5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_1072bc0c4();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1072bc098; end: 1072bc0c3;  */

long * FUN_1072bc098(long *param_1)

{
  FUN_1072bc0c4();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1072bc0c4; end: 1072bc0e7;  */

void FUN_1072bc0c4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x20;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1072bc0e8; end: 1072bc10f;  */

long FUN_1072bc0e8(long param_1,ulong param_2)

{
  long lVar1;
  undefined1 in_CY;
  long extraout_x8;
  long extraout_x9;
  undefined8 uVar2;
  
  if (param_2 >> 0x3b == 0) {
    func_0x0001072d03a0();
    lVar1 = extraout_x9;
    if ((bool)in_CY) {
      lVar1 = extraout_x8;
    }
    return lVar1;
  }
  FUN_1072bbffc();
  func_0x000104c318bc();
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  return param_1;
}



/* Entry: 1072bc110; end: 1072bc137;  */

void FUN_1072bc110(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000104c318bc();
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  return;
}



/* Entry: 1072bc138; end: 1072bc143;  */

void FUN_1072bc138(void)

{
  func_0x0001072ce494();
  func_0x0001072cfa44();
  FUN_107283194();
  func_0x0001072ced78();
  return;
}



/* Entry: 1072bc144; end: 1072bc1b7;  */

void FUN_1072bc144(void)

{
  func_0x0001072cfa44();
  FUN_107283194();
  func_0x0001072ced78();
  return;
}



/* Entry: 1072bc1b8; end: 1072bc1bf;  */

void FUN_1072bc1b8(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001072ce520(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -9;
    FUN_1072bc144();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072bc1c0; end: 1072bc213;  */

void FUN_1072bc1c0(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072ce520();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x48;
    FUN_1072bc144();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072bc214; end: 1072bc227;  */

void FUN_1072bc214(undefined8 *param_1)

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



/* Entry: 1072bc228; end: 1072bc253;  */

void FUN_1072bc228(undefined8 param_1,undefined8 *param_2)

{
  func_0x0001072cf3c4();
  func_0x0001072d02e4();
  *param_2 = 0;
  FUN_1072bc254();
  return;
}



/* Entry: 1072bc254; end: 1072bc2fb;  */

void FUN_1072bc254(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  if (*(char *)(param_2 + 3) == '\x01') {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  if (*(char *)(param_2 + 7) == '\x01') {
    uVar2 = param_2[5];
    uVar1 = param_2[4];
    param_1[6] = param_2[6];
    param_1[5] = uVar2;
    param_1[4] = uVar1;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[4] = 0;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  if (*(char *)(param_2 + 0xb) == '\x01') {
    uVar2 = param_2[9];
    uVar1 = param_2[8];
    param_1[10] = param_2[10];
    param_1[9] = uVar2;
    param_1[8] = uVar1;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[8] = 0;
    *(undefined1 *)(param_1 + 0xb) = 1;
  }
  return;
}



/* Entry: 1072bc2fc; end: 1072bc39b;  */

/* WARNING: Possible PIC construction at 0x0001072bc310: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001072bc314) */

void FUN_1072bc2fc(void)

{
  long unaff_x19;
  
  func_0x0001072d00d8();
  if (*(char *)(unaff_x19 + 0x38) == '\x01') {
    func_0x000107c60ca0();
  }
  return;
}



/* Entry: 1072bc39c; end: 1072bc41f;  */

void FUN_1072bc39c(void)

{
  int iVar1;
  long extraout_x8;
  int extraout_w10;
  
  if ((bRam00000001131ad230 & 1) == 0) {
    iVar1 = 0x131ad230;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1072bc420(0x1131ad220);
      ___cxa_guard_release(0x1131ad230);
    }
  }
  func_0x0001072cfb08();
  if (extraout_x8 != 0) {
    do {
      func_0x0001072ced88();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1072bc420; end: 1072bc43b;  */

void FUN_1072bc420(void)

{
  undefined1 uStack_11;
  
  FUN_1072bc43c(&uStack_11);
  return;
}



/* Entry: 1072bc43c; end: 1072bc4a3;  */

void FUN_1072bc43c(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 *puStack_30;
  
  func_0x0001072ce294();
  func_0x0001072cf450();
  FUN_1072bc4a4();
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  *puStack_30 = &PTR_FUN_11099bbd8;
  puStack_30[4] = 0;
  puStack_30[3] = 0;
  puStack_30[6] = 0;
  puStack_30[5] = 0;
  func_0x0001072ce344();
  FUN_1072bc694();
  func_0x0001072ce0cc(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x0001072cfca4();
  FUN_1072bc4c4();
  func_0x0001072cfbc0();
  return;
}



/* Entry: 1072bc4a4; end: 1072bc4c3;  */

void FUN_1072bc4a4(void)

{
  func_0x0001072cfca4();
  FUN_1072bc4c4();
  func_0x0001072cfbc0();
  return;
}



/* Entry: 1072bc4c4; end: 1072bc4e3;  */

void FUN_1072bc4c4(undefined8 param_1,long param_2)

{
  undefined1 in_CY;
  undefined8 *unaff_x30;
  
  func_0x0001072cfba8();
  if (!(bool)in_CY) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x38);
    return;
  }
  func_0x000104bd35f4();
  *unaff_x30 = &PTR_FUN_11099bbd8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1072bc4e4; end: 1072bc4e7;  */

void FUN_1072bc4e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099bbd8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1072bc4e8; end: 1072bc4fb;  */

void FUN_1072bc4e8(void)

{
  func_0x0001072bc508();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072bc4fc; end: 1072bc513;  */

void FUN_1072bc4fc(long param_1)

{
  func_0x0001072ce4a0(param_1 + 0x18);
  func_0x0001072bc538();
  return;
}



/* Entry: 1072bc514; end: 1072bc563;  */

void FUN_1072bc514(void)

{
  func_0x0001072ce4a0();
  func_0x0001072bc538();
  return;
}



/* Entry: 1072bc564; end: 1072bc56b;  */

void FUN_1072bc564(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001072ce520(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0xb;
    func_0x0001072bc59c();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072bc56c; end: 1072bc613;  */

void FUN_1072bc56c(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072ce520();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x58;
    func_0x0001072bc59c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072bc614; end: 1072bc61b;  */

void FUN_1072bc614(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001072ce520(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x2c;
    func_0x0001072bc64c();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072bc61c; end: 1072bc693;  */

void FUN_1072bc61c(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072ce520();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x160;
    func_0x0001072bc64c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072bc694; end: 1072bc6a3;  */

void FUN_1072bc694(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072bc6a4; end: 1072bc6c3;  */

void FUN_1072bc6a4(void)

{
  func_0x0001072cebb4();
  FUN_1072bc6c4();
  return;
}



/* Entry: 1072bc6c4; end: 1072bc6db;  */

void FUN_1072bc6c4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x00010740df40(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072bc6dc; end: 1072bc6f7;  */

void FUN_1072bc6dc(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010740df40(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072bc6f8; end: 1072bc7d3;  */

void FUN_1072bc6f8(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001072cea84();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    func_0x0001072ce338();
  }
  return;
}



/* Entry: 1072bc7d4; end: 1072bc7fb;  */

void FUN_1072bc7d4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_107291c78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072bc7fc; end: 1072bc8a3;  */

void FUN_1072bc7fc(void)

{
  func_0x0001072cebb4();
  func_0x0001072bc81c();
  return;
}



/* Entry: 1072bc8a4; end: 1072bc8ab;  */

void FUN_1072bc8a4(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001072ce520(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -4;
    func_0x0001006393ec();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072bc8ac; end: 1072bc9cf;  */

void FUN_1072bc8ac(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072ce520();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x20;
    func_0x0001006393ec();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072bc9d0; end: 1072bc9e7;  */

void FUN_1072bc9d0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x00010731d440(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072bc9e8; end: 1072bca03;  */

void FUN_1072bc9e8(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010731d440(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072bca04; end: 1072bca9b;  */

void FUN_1072bca04(void)

{
  func_0x0001072cebb4();
  func_0x0001072bca24();
  return;
}



/* Entry: 1072bca9c; end: 1072bcac3;  */

void FUN_1072bca9c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_107285e34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072bcac4; end: 1072bcae3;  */

void FUN_1072bcac4(void)

{
  func_0x0001072cebb4();
  FUN_1072bcae4();
  return;
}



/* Entry: 1072bcae4; end: 1072bcb0b;  */

void FUN_1072bcae4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x00010736b378();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072bcb0c; end: 1072bcb2b;  */

void FUN_1072bcb0c(void)

{
  func_0x0001072cebb4();
  FUN_1072bcb2c();
  return;
}



/* Entry: 1072bcb2c; end: 1072bcb53;  */

void FUN_1072bcb2c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x0001072911c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072bcb54; end: 1072bcb73;  */

void FUN_1072bcb54(void)

{
  func_0x0001072cebb4();
  FUN_1072bcb74();
  return;
}



/* Entry: 1072bcb74; end: 1072bcb9b;  */

void FUN_1072bcb74(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10725d720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072bcb9c; end: 1072bcbbb;  */

void FUN_1072bcb9c(void)

{
  func_0x0001072cebb4();
  FUN_1072bcbbc();
  return;
}



/* Entry: 1072bcbbc; end: 1072bcbe3;  */

void FUN_1072bcbbc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_1072914d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072bcbe4; end: 1072bcc03;  */

void FUN_1072bcbe4(void)

{
  func_0x0001072cebb4();
  FUN_1072bcc04();
  return;
}



/* Entry: 1072bcc04; end: 1072bcc2b;  */

void FUN_1072bcc04(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_1072fe1e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072bcc2c; end: 1072bcc6f;  */

void FUN_1072bcc2c(long param_1)

{
  func_0x0001072cea78();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1072bcc70; end: 1072bcc97;  */

void FUN_1072bcc70(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x0001072d8fec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072bcc98; end: 1072bcd1f;  */

void FUN_1072bcc98(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001072cea84();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    func_0x0001072fde88();
    __ZdlPv();
  }
  return;
}



/* Entry: 1072bcd20; end: 1072bcd33;  */

void FUN_1072bcd20(void)

{
  func_0x0001072bccf4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072bcd34; end: 1072bcd67;  */

void FUN_1072bcd34(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x0001072ce7fc();
  func_0x0001072ceba0(&PTR_SUB_11099a820);
  if (extraout_x8 != 0) {
    do {
      func_0x0001072ced88();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1072bcd68; end: 1072bcdb7;  */

void FUN_1072bcd68(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  *param_2 = &PTR_SUB_11099a820;
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001072ced88(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1072bcdb8; end: 1072bcddf;  */

void FUN_1072bcdb8(undefined8 param_1)

{
  func_0x0001072cea90();
  func_0x0001072cea04(param_1,&PTR_DAT_11099a880);
  func_0x0001072ce484();
  return;
}



/* Entry: 1072bcde0; end: 1072bcdf3;  */

undefined ** FUN_1072bcde0(void)

{
  return &PTR_DAT_11099a880;
}



/* Entry: 1072bcdf4; end: 1072bce1b;  */

void FUN_1072bcdf4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001072ce718();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_11099a8a0;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1072bce1c; end: 1072bce3b;  */

void FUN_1072bce1c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_11099a8a0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1072bce3c; end: 1072bcee7;  */

void FUN_1072bce3c(undefined1 *param_1,long param_2)

{
  undefined1 in_ZR;
  long extraout_x8;
  long lVar1;
  undefined1 auStack_158 [80];
  undefined2 uStack_108;
  undefined1 uStack_f0;
  
  func_0x0001072ce248();
  lVar1 = *(long *)(param_1 + 8);
  if (*(long *)(lVar1 + 0x290) != 0) {
    param_1 = auStack_158;
    _memcpy(param_1,*(long *)(param_2 + 8) + 0x2b0,0x88);
    func_0x0001072ce9c4();
    func_0x00010739ed7c();
  }
  if (*(long *)(lVar1 + 0x128) != 0) {
    func_0x0001077f3c4c();
    func_0x0001077f3790();
    func_0x0001072d0374();
    (**(code **)(extraout_x8 + 0x20))(auStack_158);
    FUN_1072b86f4(param_1 + 8,&UNK_10f409195,uStack_108,uStack_f0);
    FUN_1072bbee8(auStack_158);
  }
  func_0x0001072ce098();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce934();
  FUN_1072bbee8();
  func_0x0001072ce900();
  func_0x0001072cea90();
  func_0x0001072cea04();
  func_0x0001072ce484();
  return;
}



/* Entry: 1072bcee8; end: 1072bcf0f;  */

void FUN_1072bcee8(undefined8 param_1)

{
  func_0x0001072cea90();
  func_0x0001072cea04(param_1,&PTR_DAT_11099a910);
  func_0x0001072ce484();
  return;
}



/* Entry: 1072bcf10; end: 1072bcf1b;  */

undefined ** FUN_1072bcf10(void)

{
  return &PTR_DAT_11099a910;
}



/* Entry: 1072bcf1c; end: 1072bcf4f;  */

void FUN_1072bcf1c(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x0001072ce5c4();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x0001072ce508(uVar1);
  return;
}



/* Entry: 1072bcf50; end: 1072bcf6f;  */

void FUN_1072bcf50(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    FUN_1072bcf70();
  }
  return;
}



/* Entry: 1072bcf70; end: 1072bcfcb;  */

undefined8 FUN_1072bcf70(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 unaff_x19;
  
  FUN_10724b884(param_1 + 0x20);
  func_0x0001072ce5c4();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return unaff_x19;
    }
    uVar1 = 0x28;
  }
  func_0x0001072ce508(uVar1);
  return unaff_x19;
}



/* Entry: 1072bcfcc; end: 1072bcfcf;  */

void FUN_1072bcfcc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099a930;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1072bcfd0; end: 1072bcfe3;  */

void FUN_1072bcfd0(void)

{
  func_0x0001072bcfec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072bcfe4; end: 1072bcffb;  */

void FUN_1072bcfe4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001072ce9e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1072bcffc; end: 1072bd00f;  */

void FUN_1072bcffc(void)

{
  func_0x0001072bd018();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072bd010; end: 1072bd027;  */

void FUN_1072bd010(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001072ce9e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1072bd028; end: 1072bd03b;  */

void FUN_1072bd028(void)

{
  func_0x0001072bd044();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072bd03c; end: 1072bd053;  */

void FUN_1072bd03c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001072ce9e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1072bd054; end: 1072bd067;  */

void FUN_1072bd054(void)

{
  func_0x0001072bd070();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072bd068; end: 1072bd07f;  */

void FUN_1072bd068(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001072ce9e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1072bd080; end: 1072bd093;  */

void FUN_1072bd080(void)

{
  func_0x0001072bd0a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


