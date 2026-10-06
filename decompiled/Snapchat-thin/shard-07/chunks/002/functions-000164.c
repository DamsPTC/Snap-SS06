/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105301714; end: 105301747;  */

void FUN_105301714(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  func_0x00010530175c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 105301748; end: 10530176f;  */

void FUN_105301748(void)

{
  func_0x000104bd47e8("vector");
  FUN_105301770();
  return;
}



/* Entry: 105301770; end: 1053017b7;  */

void FUN_105301770(void)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001005ad004();
  while (unaff_x21 != unaff_x19) {
    func_0x0001005ad0bc();
    func_0x0001005ad110();
  }
  func_0x0001005ad124();
  return;
}



/* Entry: 1053017b8; end: 1053017d7;  */

void FUN_1053017b8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x30;
    func_0x0001005acd08();
  }
  return;
}



/* Entry: 1053017d8; end: 10530182b;  */

void FUN_1053017d8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x30;
    func_0x0001005acd08();
  }
  return;
}



/* Entry: 10530182c; end: 105301883;  */

undefined8 *
FUN_10530182c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  func_0x0001005ad190(param_1 + 3,param_3);
  *(undefined4 *)(param_1 + 7) = param_4;
  FUN_105301884(param_1 + 8,param_5);
  return param_1;
}



/* Entry: 105301884; end: 1053018c3;  */

void FUN_105301884(undefined8 *param_1,undefined8 *param_2)

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
  param_1[4] = param_2[4];
  return;
}



/* Entry: 1053018c4; end: 105301927;  */

void FUN_1053018c4(long param_1)

{
  func_0x0001001148fc(param_1 + 0x40);
  func_0x0001005ad2a8(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 105301928; end: 10530192b;  */

void FUN_105301928(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110877d38;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10530192c; end: 10530193f;  */

void FUN_10530192c(void)

{
  func_0x000105301948();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105301940; end: 105301953;  */

void FUN_105301940(void)

{
  return;
}



/* Entry: 105301954; end: 1053019c3;  */

void FUN_105301954(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar4;
  int extraout_w11;
  int extraout_w11_00;
  undefined1 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar1 = auStack_40;
  func_0x000100688b18();
  func_0x000100688b94();
  FUN_1053019e0();
  FUN_105301a2c(lStack_30);
  lVar2 = lStack_30;
  lStack_30 = 0;
  FUN_1053019c4(lVar2 + 0x18);
  FUN_105301b58();
  func_0x0001005766b4(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010530304c();
  FUN_105301b58();
  func_0x000105303034();
  *extraout_x8 = puVar1;
  extraout_x8[1] = lVar2;
  puVar3 = (undefined8 *)0x0;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = (undefined8 *)(puVar1 + 8);
  }
  if ((puVar3 != (undefined8 *)0x0) && ((puVar3[1] == 0 || (*(long *)(puVar3[1] + 8) == -1)))) {
    pcStack_48 = FUN_1053019c4;
    lStack_68 = extraout_x8[1];
    uVar4 = 0;
    puStack_70 = puVar1;
    puStack_50 = &stack0xfffffffffffffff0;
    if (lStack_68 != 0) {
      do {
        func_0x00010530312c();
      } while (extraout_w11 != 0);
      do {
        func_0x00010530312c();
        uVar4 = extraout_x8_00;
      } while (extraout_w11_00 != 0);
    }
    uStack_58 = puVar3[1];
    uStack_60 = *puVar3;
    *puVar3 = puVar1;
    puVar3[1] = uVar4;
    FUN_105301d68(&uStack_60);
    FUN_105301b68(&puStack_70);
    return;
  }
  return;
}



/* Entry: 1053019c4; end: 1053019df;  */

void FUN_1053019c4(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long extraout_x8;
  long lVar2;
  int extraout_w11;
  int extraout_w11_00;
  long lStack_30;
  long lStack_28;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  plVar1 = (long *)0x0;
  if (param_2 != 0) {
    plVar1 = (long *)(param_2 + 8);
  }
  if ((plVar1 != (long *)0x0) && ((plVar1[1] == 0 || (*(long *)(plVar1[1] + 8) == -1)))) {
    lStack_28 = param_1[1];
    lVar2 = 0;
    lStack_30 = param_2;
    if (lStack_28 != 0) {
      do {
        func_0x00010530312c();
      } while (extraout_w11 != 0);
      do {
        func_0x00010530312c();
        lVar2 = extraout_x8;
      } while (extraout_w11_00 != 0);
    }
    lStack_18 = plVar1[1];
    lStack_20 = *plVar1;
    *plVar1 = param_2;
    plVar1[1] = lVar2;
    FUN_105301d68(&lStack_20);
    FUN_105301b68(&lStack_30);
    return;
  }
  return;
}



/* Entry: 1053019e0; end: 1053019ff;  */

void FUN_1053019e0(void)

{
  func_0x0001004b5274();
  FUN_105301a00();
  func_0x0001004b52e0();
  return;
}



/* Entry: 105301a00; end: 105301a2b;  */

undefined8 * FUN_105301a00(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x155555555555556) {
    puVar1 = (undefined8 *)(param_2 * 0xc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110877658;
  FUN_105301a84(param_1 + 3);
  return param_1;
}



/* Entry: 105301a2c; end: 105301a63;  */

undefined8 * FUN_105301a2c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110877658;
  FUN_105301a84(param_1 + 3);
  return param_1;
}



/* Entry: 105301a64; end: 105301a67;  */

void FUN_105301a64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110877658;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105301a68; end: 105301a7b;  */

void FUN_105301a68(void)

{
  FUN_105301ad8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105301a7c; end: 105301a83;  */

void FUN_105301a7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105303004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 105301a84; end: 105301ad7;  */

undefined8 FUN_105301a84(undefined8 param_1)

{
  long extraout_x8;
  int extraout_w10;
  undefined1 auStack_30 [16];
  
  func_0x00010057653c();
  if (extraout_x8 != 0) {
    do {
      func_0x000100576598();
    } while (extraout_w10 != 0);
  }
  FUN_1052ff50c(param_1,auStack_30);
  func_0x0001009d8b30(auStack_30);
  return param_1;
}



/* Entry: 105301ad8; end: 105301ae3;  */

void FUN_105301ad8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110877658;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105301ae4; end: 105301b57;  */

void FUN_105301ae4(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 uStack_30;
  long lStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if ((param_2 != (undefined8 *)0x0) && ((param_2[1] == 0 || (*(long *)(param_2[1] + 8) == -1)))) {
    lStack_28 = *(long *)(param_1 + 8);
    uVar1 = 0;
    uStack_30 = param_3;
    if (lStack_28 != 0) {
      do {
        func_0x00010530312c();
      } while (extraout_w11 != 0);
      do {
        func_0x00010530312c();
        uVar1 = extraout_x8;
      } while (extraout_w11_00 != 0);
    }
    uStack_18 = param_2[1];
    uStack_20 = *param_2;
    *param_2 = param_3;
    param_2[1] = uVar1;
    FUN_105301d68(&uStack_20);
    FUN_105301b68(&uStack_30);
    return;
  }
  return;
}



/* Entry: 105301b58; end: 105301b67;  */

void FUN_105301b58(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 105301b68; end: 105301b8b;  */

void FUN_105301b68(long param_1)

{
  func_0x000100554494();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 105301b8c; end: 105301b8f;  */

void FUN_105301b8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110877c58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105301b90; end: 105301ba3;  */

void FUN_105301b90(void)

{
  func_0x000105301d5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105301ba4; end: 105301baf;  */

void FUN_105301ba4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105303004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 105301bb0; end: 105301bc3;  */

void FUN_105301bb0(void)

{
  FUN_105301c68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105301bc4; end: 105301c33;  */

void FUN_105301bc4(long param_1,undefined8 param_2,long param_3)

{
  long extraout_x8;
  int extraout_w10;
  undefined8 uVar1;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010057653c();
  if (extraout_x8 != 0) {
    do {
      func_0x000100576598();
    } while (extraout_w10 != 0);
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
  FUN_105301c94(auStack_30,uVar1,auStack_40,param_1 + param_3 * 1000000);
  func_0x000100688f2c(auStack_30);
  func_0x000100576684(auStack_40);
  return;
}



/* Entry: 105301c34; end: 105301c67;  */

bool FUN_105301c34(undefined8 param_1)

{
  undefined **ppuVar1;
  long extraout_x8;
  
  ppuVar1 = &PTR___tlv_bootstrap_11340e260;
  (*(code *)PTR___tlv_bootstrap_11340e260)(param_1);
  return *ppuVar1 == *(undefined **)(extraout_x8 + 8);
}



/* Entry: 105301c68; end: 105301c93;  */

undefined8 FUN_105301c68(undefined8 param_1)

{
  func_0x000105303110(&UNK_110877c98);
  func_0x000100450be4();
  return param_1;
}



/* Entry: 105301c94; end: 105301d1b;  */

void FUN_105301c94(long param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  int extraout_w11;
  
  uVar1 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_2 + 8) != 0) {
    do {
      func_0x00010530312c();
    } while (extraout_w11 != 0);
  }
  func_0x00010bcce9b8();
  func_0x0001005766a8(&PTR_DAT_110877d00);
  func_0x0001005766b4(uVar1);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001053030c0();
    func_0x000105303034();
                    /* WARNING: Could not recover jumptable at 0x0001005ef1c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105301d1c; end: 105301d67;  */

void FUN_105301d1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001005ef1c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  return;
}



/* Entry: 105301d68; end: 105301daf;  */

void FUN_105301d68(long param_1)

{
  func_0x000100554494();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 105301db0; end: 105301db3;  */

void FUN_105301db0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108776a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105301db4; end: 105301dc7;  */

void FUN_105301db4(void)

{
  FUN_105301e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105301dc8; end: 105301dd3;  */

long FUN_105301dc8(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x18;
  func_0x0001052fead0(&lStack_28);
  return param_1 + 0x18;
}



/* Entry: 105301dd4; end: 105301dff;  */

long FUN_105301dd4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x0001052fead0(param_1);
  }
  return param_1;
}



/* Entry: 105301e00; end: 105301e0b;  */

void FUN_105301e00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108776a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105301e0c; end: 105301e2f;  */

void FUN_105301e0c(long param_1)

{
  func_0x000100554494();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 105301e30; end: 105301e33;  */

void FUN_105301e30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108776f8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105301e34; end: 105301e47;  */

void FUN_105301e34(void)

{
  func_0x000105301e54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105301e48; end: 105301e5f;  */

long FUN_105301e48(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x18;
  func_0x0001052fd24c(&lStack_28);
  return param_1 + 0x18;
}



/* Entry: 105301e60; end: 105301e83;  */

void FUN_105301e60(long param_1)

{
  func_0x000100554494();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 105301e84; end: 105301e87;  */

void FUN_105301e84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110877748;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105301e88; end: 105301e9b;  */

void FUN_105301e88(void)

{
  FUN_105301f94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105301e9c; end: 105301ea3;  */

void FUN_105301e9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010530319c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x20))();
  return;
}



/* Entry: 105301ea4; end: 105301f37;  */

void FUN_105301ea4(long param_1)

{
  int extraout_w10;
  int extraout_w10_00;
  long lVar1;
  undefined8 uStack_30;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x000105303168();
  if (uStack_30 != 0) {
    if (*(long *)(lVar1 + 0x40) != 0) {
      do {
        func_0x000100576598();
      } while (extraout_w10 != 0);
    }
    if (*(long *)(lVar1 + 0x50) != 0) {
      do {
        func_0x000100576598();
      } while (extraout_w10_00 != 0);
    }
    FUN_1052ffafc();
    func_0x000105303124();
    func_0x00010530307c();
  }
  func_0x0001053030f8();
  return;
}



/* Entry: 105301f38; end: 105301f73;  */

void FUN_105301f38(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 105301f74; end: 105301f93;  */

void FUN_105301f74(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10530012c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 105301f94; end: 105301faf;  */

void FUN_105301f94(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 105301fb0; end: 105301fd3;  */

void FUN_105301fb0(long param_1)

{
  func_0x000100554494();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 105301fd4; end: 10530202f;  */

void FUN_105301fd4(void)

{
  undefined1 in_ZR;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000100688b18();
  func_0x000100688b94();
  FUN_105302030();
  FUN_105302070(uStack_30);
  func_0x000100688bdc();
  func_0x000105302638();
  func_0x0001005766b4(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010530304c();
  func_0x000105302638();
  func_0x000105303034();
  func_0x0001004b5274();
  FUN_105302050();
  func_0x0001004b52e0();
  return;
}



/* Entry: 105302030; end: 10530204f;  */

void FUN_105302030(void)

{
  func_0x0001004b5274();
  FUN_105302050();
  func_0x0001004b52e0();
  return;
}



/* Entry: 105302050; end: 10530206f;  */

undefined8 * FUN_105302050(undefined8 param_1,long param_2)

{
  undefined1 in_CY;
  undefined8 *puVar1;
  undefined8 *unaff_x30;
  
  func_0x0001004b52a0();
  if (!(bool)in_CY) {
    puVar1 = (undefined8 *)(param_2 * 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  unaff_x30[2] = 0;
  *unaff_x30 = &PTR_FUN_1108777b0;
  unaff_x30[1] = 0;
  FUN_1053020cc(unaff_x30 + 3);
  return unaff_x30;
}



/* Entry: 105302070; end: 1053020ab;  */

undefined8 * FUN_105302070(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1108777b0;
  param_1[1] = 0;
  FUN_1053020cc(param_1 + 3);
  return param_1;
}



/* Entry: 1053020ac; end: 1053020af;  */

void FUN_1053020ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108777b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1053020b0; end: 1053020c3;  */

void FUN_1053020b0(void)

{
  FUN_10530262c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1053020c4; end: 1053020cb;  */

void FUN_1053020c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105303004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1053020cc; end: 10530212f;  */

undefined8 * FUN_1053020cc(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  
  *param_1 = &PTR_FUN_110877800;
  func_0x00010530314c();
  FUN_105302130(auStack_30,param_2);
  FUN_10530214c();
  FUN_1053025dc(auStack_30);
  return param_1;
}



/* Entry: 105302130; end: 10530214b;  */

void FUN_105302130(void)

{
  func_0x000100688af0();
  FUN_1053021cc();
  return;
}



/* Entry: 10530214c; end: 10530216f;  */

void FUN_10530214c(void)

{
  func_0x000105303008();
  FUN_1053025dc();
  return;
}



/* Entry: 105302170; end: 105302173;  */

undefined8 FUN_105302170(undefined8 param_1)

{
  func_0x000105303110(&UNK_1108777f0);
  FUN_1053025dc();
  return param_1;
}



/* Entry: 105302174; end: 105302187;  */

void FUN_105302174(void)

{
  func_0x000105302600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105302188; end: 1053021cb;  */

undefined8 FUN_105302188(void)

{
  return 1;
}



/* Entry: 1053021cc; end: 105302227;  */

void FUN_1053021cc(void)

{
  undefined1 in_ZR;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000100688b18();
  func_0x000100688b94();
  FUN_105302228();
  FUN_105302268(uStack_30);
  func_0x000100688bdc();
  func_0x0001053025cc();
  func_0x0001005766b4(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010530304c();
  func_0x0001053025cc();
  func_0x000105303034();
  func_0x0001004b5274();
  FUN_105302248();
  func_0x0001004b52e0();
  return;
}



/* Entry: 105302228; end: 105302247;  */

void FUN_105302228(void)

{
  func_0x0001004b5274();
  FUN_105302248();
  func_0x0001004b52e0();
  return;
}



/* Entry: 105302248; end: 105302267;  */

undefined8 * FUN_105302248(undefined8 param_1,long param_2)

{
  undefined1 in_CY;
  undefined8 *puVar1;
  undefined8 *unaff_x30;
  
  func_0x0001004b52a0();
  if (!(bool)in_CY) {
    puVar1 = (undefined8 *)(param_2 * 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  unaff_x30[2] = 0;
  *unaff_x30 = &PTR_FUN_110877868;
  unaff_x30[1] = 0;
  FUN_1053022c4(unaff_x30 + 3);
  return unaff_x30;
}



/* Entry: 105302268; end: 1053022a3;  */

undefined8 * FUN_105302268(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110877868;
  param_1[1] = 0;
  FUN_1053022c4(param_1 + 3);
  return param_1;
}



/* Entry: 1053022a4; end: 1053022a7;  */

void FUN_1053022a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110877868;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1053022a8; end: 1053022bb;  */

void FUN_1053022a8(void)

{
  FUN_1053025c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1053022bc; end: 1053022c3;  */

void FUN_1053022bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105303004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1053022c4; end: 105302327;  */

undefined8 * FUN_1053022c4(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  
  *param_1 = &PTR_FUN_1108778b8;
  func_0x00010530314c();
  FUN_105302328(auStack_30,param_2);
  FUN_105302344();
  FUN_105302570(auStack_30);
  return param_1;
}



/* Entry: 105302328; end: 105302343;  */

void FUN_105302328(void)

{
  func_0x000100688af0();
  FUN_1053023a8();
  return;
}



/* Entry: 105302344; end: 105302367;  */

void FUN_105302344(void)

{
  func_0x000105303008();
  FUN_105302570();
  return;
}



/* Entry: 105302368; end: 10530236b;  */

undefined8 FUN_105302368(undefined8 param_1)

{
  func_0x000105303110(&UNK_1108778a8);
  FUN_105302570();
  return param_1;
}



/* Entry: 10530236c; end: 10530237f;  */

void FUN_10530236c(void)

{
  func_0x000105302594();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105302380; end: 1053023a7;  */

void FUN_105302380(undefined8 *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 8);
  param_1[1] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000100576598(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1053023a8; end: 105302403;  */

void FUN_1053023a8(void)

{
  undefined1 in_ZR;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000100688b18();
  func_0x000100688b94();
  FUN_105302404();
  FUN_105302444(uStack_30);
  func_0x000100688bdc();
  func_0x000105302560();
  func_0x0001005766b4(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010530304c();
  func_0x000105302560();
  func_0x000105303034();
  func_0x0001004b5274();
  FUN_105302424();
  func_0x0001004b52e0();
  return;
}



/* Entry: 105302404; end: 105302423;  */

void FUN_105302404(void)

{
  func_0x0001004b5274();
  FUN_105302424();
  func_0x0001004b52e0();
  return;
}



/* Entry: 105302424; end: 105302443;  */

void FUN_105302424(undefined8 param_1,undefined8 *param_2)

{
  undefined1 in_CY;
  long lVar1;
  int extraout_w10;
  undefined8 *unaff_x30;
  undefined8 uVar2;
  
  func_0x0001004b52a0();
  if ((bool)in_CY) {
    func_0x000104bd35f4();
    *unaff_x30 = &PTR_DAT_110877908;
    unaff_x30[1] = 0;
    unaff_x30[2] = 0;
    unaff_x30[3] = &PTR_DAT_110877958;
    lVar1 = param_2[1];
    uVar2 = *param_2;
    unaff_x30[5] = param_2[1];
    unaff_x30[4] = uVar2;
    if (lVar1 != 0) {
      do {
        func_0x000100576598();
      } while (extraout_w10 != 0);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)((long)param_2 * 0x30);
  return;
}



/* Entry: 105302444; end: 10530248f;  */

void FUN_105302444(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  *param_1 = &PTR_DAT_110877908;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_DAT_110877958;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[5] = param_2[1];
  param_1[4] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000100576598();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 105302490; end: 1053024a3;  */

void FUN_105302490(void)

{
  FUN_105302554();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1053024a4; end: 1053024af;  */

void FUN_1053024a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105303004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1053024b0; end: 1053024c3;  */

void FUN_1053024b0(void)

{
  FUN_105302528();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1053024c4; end: 1053024cb;  */

undefined8 FUN_1053024c4(void)

{
  return 1;
}



/* Entry: 1053024cc; end: 10530251f;  */

undefined1  [16] FUN_1053024cc(long param_1)

{
  long lVar1;
  long lVar2;
  code *extraout_x8;
  code *extraout_x8_00;
  undefined1 auVar3 [16];
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    func_0x00010057663c();
    (*extraout_x8)();
    lVar2 = *(long *)(param_1 + 8);
    if (lVar2 != 0) {
      func_0x00010530315c();
      (*extraout_x8_00)();
      goto LAB_105302510;
    }
  }
  lVar2 = 0;
LAB_105302510:
  auVar3._8_8_ = lVar2;
  auVar3._0_8_ = lVar1;
  return auVar3;
}



/* Entry: 105302520; end: 105302527;  */

void FUN_105302520(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 105302528; end: 105302553;  */

undefined8 FUN_105302528(undefined8 param_1)

{
  func_0x000105303110(&UNK_110877948);
  func_0x0001000ff1ac();
  return param_1;
}



/* Entry: 105302554; end: 10530256f;  */

void FUN_105302554(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110877908;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105302570; end: 1053025bf;  */

void FUN_105302570(long param_1)

{
  func_0x000100554494();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1053025c0; end: 1053025db;  */

void FUN_1053025c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110877868;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1053025dc; end: 10530262b;  */

void FUN_1053025dc(long param_1)

{
  func_0x000100554494();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10530262c; end: 105302647;  */

void FUN_10530262c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108777b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105302648; end: 10530266b;  */

void FUN_105302648(long param_1)

{
  func_0x000100554494();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10530266c; end: 1053028d7;  */

void FUN_10530266c(ulong param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  code *extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long lVar4;
  long lVar5;
  long lVar6;
  long lStack_1d0;
  undefined8 uStack_1c0;
  undefined8 auStack_1b8 [7];
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_128 [144];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar4 = *(long *)(param_3 + 0x10);
  uVar3 = param_1;
  func_0x000105303168();
  if (lStack_1d0 != 0) {
    if ((param_1 & 1) == 0) {
      lVar5 = *(long *)(lVar4 + 0x80);
      lVar6 = *(long *)(lVar4 + 0xa0);
      if (*(long *)(lVar4 + 0xa8) != 0) {
        do {
          func_0x000100576598();
        } while (extraout_w10_02 != 0);
      }
      __ZNSt3__16chrono12steady_clock3nowEv();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_98,param_2);
      uStack_68 = uStack_88;
      lStack_50 = (long)uVar3 / 1000000;
      uStack_80 = uStack_80 & 0xffffffffffffff00;
      uStack_70 = uStack_90;
      uStack_78 = uStack_98;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
      lStack_48 = (long)(uVar3 - lVar5) / 1000000;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      FUN_105301648(&uStack_180,lVar4 + 0x30);
      func_0x0001053018f4(&uStack_1c0,&uStack_80);
      FUN_1052fe238(auStack_128,&uStack_180,&uStack_1c0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1b8);
      func_0x0001052fd1e8(&uStack_180);
      if (lVar6 != 0) {
        func_0x00010057663c();
        (*extraout_x8)();
      }
      func_0x0001052fd1c0(auStack_128);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_78);
      func_0x00010530307c();
      (*(code *)**(undefined8 **)(lVar4 + 0xb0))();
    }
    else {
      uStack_178 = *(undefined8 *)(lVar4 + 0x18);
      uStack_180 = *(undefined8 *)(lVar4 + 0x10);
      if (*(long *)(lVar4 + 0x18) != 0) {
        do {
          func_0x000100576598();
        } while (extraout_w10 != 0);
      }
      uVar1 = *(undefined8 *)(lVar4 + 0x20);
      uVar2 = *(undefined8 *)(lVar4 + 0x28);
      FUN_105301648(auStack_128,lVar4 + 0x30);
      uStack_78 = *(undefined8 *)(lVar4 + 0xa8);
      uStack_80 = *(ulong *)(lVar4 + 0xa0);
      if (*(long *)(lVar4 + 0xa8) != 0) {
        do {
          func_0x000100576598();
        } while (extraout_w10_00 != 0);
      }
      auStack_1b8[0] = *(undefined8 *)(lVar4 + 0xb8);
      uStack_1c0 = *(undefined8 *)(lVar4 + 0xb0);
      if (*(long *)(lVar4 + 0xb8) != 0) {
        do {
          func_0x000100576598();
        } while (extraout_w10_01 != 0);
      }
      FUN_105300160(lStack_1d0,&uStack_180,uVar1,uVar2,auStack_128);
      FUN_105301fb0(&uStack_1c0);
      func_0x0001052fd708(&uStack_80);
      func_0x0001052fd1e8(auStack_128);
      FUN_105301e60(&uStack_180);
    }
  }
  func_0x0001053030f8();
  return;
}



/* Entry: 1053028d8; end: 1053028f7;  */

void FUN_1053028d8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_105300e10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1053028f8; end: 1053028ff;  */

void FUN_1053028f8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 105302900; end: 105302913;  */

void FUN_105302900(void)

{
  func_0x00010530291c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105302914; end: 105302927;  */

void FUN_105302914(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010530319c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x20))();
  return;
}


