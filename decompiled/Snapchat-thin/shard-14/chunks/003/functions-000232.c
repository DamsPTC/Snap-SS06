/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b1267c0; end: 10b12693f;  */

void FUN_10b1267c0(void)

{
  long lVar1;
  undefined8 *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x9;
  int extraout_w10;
  undefined8 *unaff_x20;
  long lStack_b8;
  long lStack_b0;
  long alStack_a8 [3];
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  int aiStack_30 [4];
  
  func_0x00010b135114();
  func_0x00010539e95c(&uStack_80);
  func_0x00010539e9b0(aiStack_30,&uStack_80);
  func_0x00010539e8a8(&uStack_80);
  func_0x00010539e8a8(auStack_40);
  func_0x00010b135ec8();
  func_0x00010b135f44(uStack_48);
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  *unaff_x20 = 0;
  unaff_x20[1] = 0;
  func_0x00010b134930();
  func_0x00010b1359a0(extraout_x8 + 0x48);
  __ZNSt3__15mutex4lockEv();
  func_0x00010539e9f0();
  if (aiStack_30[0] == 0) {
    FUN_10b126bcc(alStack_a8,&uStack_80);
    func_0x00010b135960();
    lVar1 = *(long *)(extraout_x8_00 + 0x90);
    *(undefined8 *)(extraout_x8_00 + 0x90) = extraout_x9;
    if (lVar1 != 0) {
      func_0x00010b133ecc();
      lVar1 = alStack_a8[0];
      alStack_a8[0] = 0;
      if (lVar1 != 0) {
        func_0x00010b133ecc();
      }
    }
  }
  else {
    func_0x00010539e9b0(&lStack_90,aiStack_30);
  }
  func_0x00010b134e44();
  if (lStack_90 != 0) {
    lStack_b8 = lStack_90;
    lStack_b0 = lStack_88;
    if (lStack_88 != 0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10 != 0);
    }
    FUN_10b126b20(&uStack_80,&lStack_b8);
    func_0x00010539e8a8(&lStack_b8);
  }
  func_0x00010b134f68();
  func_0x00010539e8a8();
  puVar2 = &uStack_80;
  FUN_10b126f5c();
  func_0x00010b134fb4();
  func_0x00010b1356e8();
  if (puVar2 != (undefined8 *)0x0) {
    func_0x00010b133ecc();
  }
  func_0x00010539e8a8(aiStack_30);
  return;
}



/* Entry: 10b126940; end: 10b12699b;  */

void FUN_10b126940(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 uStack_30;
  
  func_0x00010b133e68();
  func_0x00010b135868();
  FUN_10b12699c();
  FUN_10b1269e8(uStack_30);
  func_0x00010b134100();
  FUN_10b126b10();
  func_0x00010b133dfc(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b134458();
  FUN_10b126b10();
  func_0x00010b1343d0();
  func_0x00010b13502c();
  FUN_10b1269bc();
  func_0x00010b134f40();
  return;
}



/* Entry: 10b12699c; end: 10b1269bb;  */

void FUN_10b12699c(void)

{
  func_0x00010b13502c();
  FUN_10b1269bc();
  func_0x00010b134f40();
  return;
}



/* Entry: 10b1269bc; end: 10b1269e7;  */

undefined8 * FUN_10b1269bc(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x1c71c71c71c71c8) {
    puVar1 = (undefined8 *)(param_2 * 0x90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cbda20;
  param_1[1] = 0;
  func_0x00010b126a4c(param_1 + 3);
  return param_1;
}



/* Entry: 10b1269e8; end: 10b126a27;  */

undefined8 * FUN_10b1269e8(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cbda20;
  param_1[1] = 0;
  func_0x00010b126a4c(param_1 + 3);
  return param_1;
}



/* Entry: 10b126a28; end: 10b126a2b;  */

void FUN_10b126a28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbda20;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b126a2c; end: 10b126a3f;  */

void FUN_10b126a2c(void)

{
  FUN_10b126a8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b126a40; end: 10b126a67;  */

void FUN_10b126a40(long param_1)

{
  func_0x000107c281bc(param_1 + 0x78);
  FUN_10b126ac8(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutexD1Ev_110346598)(param_1 + 0x18);
  return;
}



/* Entry: 10b126a68; end: 10b126a8b;  */

void FUN_10b126a68(long param_1)

{
  __ZNSt3__115recursive_mutexC1Ev();
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}



/* Entry: 10b126a8c; end: 10b126a97;  */

void FUN_10b126a8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbda20;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b126a98; end: 10b126ac7;  */

void FUN_10b126a98(long param_1)

{
  func_0x000107c281bc(param_1 + 0x60);
  FUN_10b126ac8(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutexD1Ev_110346598)(param_1);
  return;
}



/* Entry: 10b126ac8; end: 10b126b0f;  */

void FUN_10b126ac8(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010b126ae8();
  }
  return;
}



/* Entry: 10b126b10; end: 10b126b1f;  */

void FUN_10b126b10(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b126b20; end: 10b126bcb;  */

void FUN_10b126b20(void)

{
  long extraout_x9;
  int extraout_w11;
  int extraout_w12;
  long unaff_x19;
  
  func_0x00010b1359f0();
  if (extraout_x9 != 0) {
    do {
      func_0x00010b133f68();
    } while (extraout_w12 != 0);
    do {
      func_0x00010b1348e4();
    } while (extraout_w11 != 0);
  }
  func_0x00010b134abc();
  FUN_10b126ca0();
  func_0x00010b134e4c();
  func_0x00010b1358d4();
  func_0x000107c27b68(*(undefined8 *)(unaff_x19 + 0x10));
  return;
}



/* Entry: 10b126bcc; end: 10b126bef;  */

void FUN_10b126bcc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x00010b1347fc();
  FUN_10b126bf0();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 10b126bf0; end: 10b126c1b;  */

void FUN_10b126bf0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_110cbda70;
  uVar1 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = param_2[2];
  param_2[2] = 0;
  param_1[3] = uVar1;
  return;
}



/* Entry: 10b126c1c; end: 10b126c2f;  */

void FUN_10b126c1c(void)

{
  FUN_10b126c74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b126c30; end: 10b126c73;  */

void FUN_10b126c30(long param_1)

{
  long extraout_x8;
  int extraout_w10;
  undefined1 auStack_30 [16];
  
  func_0x00010b135a10();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  FUN_10b126b20(param_1 + 8,auStack_30);
  func_0x00010b134690();
  return;
}



/* Entry: 10b126c74; end: 10b126c9f;  */

undefined8 * FUN_10b126c74(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cbda70;
  FUN_10b126f5c(param_1 + 1);
  return param_1;
}



/* Entry: 10b126ca0; end: 10b126cf7;  */

void FUN_10b126ca0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  
  uStack_48 = param_1;
  uStack_40 = param_2;
  FUN_10b126cf8(&puStack_38,&uStack_48);
  for (puVar1 = puStack_38; puVar1 != puStack_30; puVar1 = puVar1 + 1) {
    (**(code **)*puVar1)();
  }
  func_0x000107c281bc(&puStack_38);
  return;
}



/* Entry: 10b126cf8; end: 10b126def;  */

void FUN_10b126cf8(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [16];
  
  uVar2 = *(undefined8 *)*param_2;
  __ZNSt3__115recursive_mutex4lockEv(uVar2);
  func_0x00010539ed04(auStack_40,param_2[1]);
  FUN_10b126df0(*(long *)*param_2 + 0x40,auStack_40);
  func_0x00010539e938(auStack_40);
  lVar1 = *(long *)*param_2;
  uVar3 = *(undefined8 *)(lVar1 + 0x60);
  param_1[1] = *(undefined8 *)(lVar1 + 0x68);
  *param_1 = uVar3;
  param_1[2] = *(undefined8 *)(lVar1 + 0x70);
  *(undefined8 *)(lVar1 + 0x68) = 0;
  *(undefined8 *)(lVar1 + 0x70) = 0;
  *(undefined8 *)(lVar1 + 0x60) = 0;
  __ZNSt3__115recursive_mutex6unlockEv(uVar2);
  return;
}



/* Entry: 10b126df0; end: 10b126f13;  */

void FUN_10b126df0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 extraout_w8;
  int extraout_w8_00;
  undefined8 *unaff_x19;
  undefined8 uVar1;
  
  func_0x00010b1364ac();
  if (extraout_w8_00 == 1) {
    func_0x00010b126e64();
  }
  else {
    uVar1 = *param_2;
    unaff_x19[1] = param_2[1];
    *unaff_x19 = uVar1;
    *param_2 = 0;
    param_2[1] = 0;
    func_0x00010b135604();
    *(undefined1 *)(unaff_x19 + 3) = extraout_w8;
  }
  return;
}



/* Entry: 10b126f14; end: 10b126f2b;  */

void FUN_10b126f14(void)

{
  FUN_10b126f2c();
  func_0x00010b135188();
  return;
}



/* Entry: 10b126f2c; end: 10b126f43;  */

void FUN_10b126f2c(void)

{
  FUN_10b126f44();
  return;
}



/* Entry: 10b126f44; end: 10b126f5b;  */

void FUN_10b126f44(long param_1)

{
  __ZNSt13exception_ptrC1ERKS_();
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 10b126f5c; end: 10b126f7f;  */

long FUN_10b126f5c(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b134958();
  func_0x000107c27b70();
  lVar1 = unaff_x19;
  func_0x000107c350ac();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b126f80; end: 10b126f8b;  */

void FUN_10b126f80(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cbc9a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b126f8c; end: 10b12704b;  */

undefined8 FUN_10b126f8c(undefined8 param_1,ulong param_2)

{
  if ((param_2 >> 0x13 & 0x1fff) == 0) {
    func_0x00010b13635c();
  }
  func_0x000106e5c56c(param_1);
  if (((uint)param_2 & 0xffff) < 0x25) {
    func_0x00010b135980();
  }
  func_0x00010b135ff4();
  return param_1;
}



/* Entry: 10b12704c; end: 10b127073;  */

void FUN_10b12704c(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = 0;
  uStack_18 = 0;
  FUN_10b127074(param_1 + 0x10,&uStack_20);
  func_0x00010b134558();
  return;
}



/* Entry: 10b127074; end: 10b127097;  */

void FUN_10b127074(void)

{
  func_0x00010b133dc4();
  func_0x00010b12592c();
  return;
}



/* Entry: 10b127098; end: 10b1270a7;  */

void FUN_10b127098(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b1270a8; end: 10b1270fb;  */

long FUN_10b1270a8(void)

{
  long lVar1;
  long alStack_30 [2];
  
  FUN_10b1270fc(alStack_30);
  func_0x00010b134918(alStack_30[0] + 0x48);
  __ZNSt3__15mutex4lockEv();
  lVar1 = alStack_30[0];
  FUN_10b120e80(alStack_30[0]);
  func_0x00010b135308();
  func_0x00010b134cd0();
  return lVar1;
}



/* Entry: 10b1270fc; end: 10b12713b;  */

void FUN_10b1270fc(undefined8 param_1,undefined8 param_2)

{
  long extraout_x8;
  int extraout_w10;
  undefined8 *unaff_x21;
  undefined8 in_register_00005008;
  
  func_0x00010b1344d0();
  __ZNSt3__18__sp_mut4lockEv();
  func_0x00010b135194();
  unaff_x21[1] = in_register_00005008;
  *unaff_x21 = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(param_2);
  return;
}



/* Entry: 10b12713c; end: 10b1272b7;  */

void FUN_10b12713c(void)

{
  long lVar1;
  long *plVar2;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x9;
  int extraout_w10;
  undefined8 *unaff_x20;
  long lStack_b8;
  long lStack_b0;
  long *aplStack_a8 [3];
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  int aiStack_30 [4];
  
  func_0x00010b135114();
  FUN_10b120d0c(&uStack_80);
  FUN_10b120d38(aiStack_30,&uStack_80);
  FUN_10b120e24(&uStack_80);
  FUN_10b120e24(auStack_40);
  func_0x00010b135ec8();
  func_0x00010b135f44(uStack_48);
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  func_0x00010b134930();
  func_0x00010b1359a0(extraout_x8 + 0x48);
  __ZNSt3__15mutex4lockEv();
  FUN_10b120e80();
  if (aiStack_30[0] == 0) {
    FUN_10b127364(aplStack_a8,&uStack_80);
    func_0x00010b135960();
    lVar1 = *(long *)(extraout_x8_00 + 0x90);
    *(undefined8 *)(extraout_x8_00 + 0x90) = extraout_x9;
    plVar2 = (long *)0x0;
    if (lVar1 != 0) {
      func_0x00010b133ecc();
      plVar2 = aplStack_a8[0];
      aplStack_a8[0] = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        func_0x00010b133ecc();
      }
    }
  }
  else {
    plVar2 = &lStack_90;
    FUN_10b120d38(plVar2,aiStack_30);
  }
  func_0x00010b134e44();
  if (lStack_90 != 0) {
    lStack_b8 = lStack_90;
    lStack_b0 = lStack_88;
    if (lStack_88 != 0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10 != 0);
    }
    FUN_10b1272b8(&uStack_80,&lStack_b8);
    plVar2 = &lStack_b8;
    FUN_10b120e24();
  }
  func_0x00010b134f68();
  FUN_10b120e24();
  func_0x00010b136204();
  if (plVar2 != (long *)0x0) {
    func_0x00010b133ecc();
  }
  func_0x00010b134fb4();
  func_0x00010b1356e8();
  if (plVar2 != (long *)0x0) {
    func_0x00010b133ecc();
  }
  func_0x00010b134e74();
  return;
}



/* Entry: 10b1272b8; end: 10b127363;  */

void FUN_10b1272b8(void)

{
  long extraout_x9;
  int extraout_w11;
  int extraout_w12;
  long unaff_x19;
  
  func_0x00010b1359f0();
  if (extraout_x9 != 0) {
    do {
      func_0x00010b133f68();
    } while (extraout_w12 != 0);
    do {
      func_0x00010b1348e4();
    } while (extraout_w11 != 0);
  }
  func_0x00010b134abc();
  FUN_10b127414();
  func_0x00010b134c58();
  func_0x00010b134cd0();
  func_0x000107c27b68(*(undefined8 *)(unaff_x19 + 0x10));
  return;
}



/* Entry: 10b127364; end: 10b127387;  */

void FUN_10b127364(void)

{
  func_0x00010b1347fc();
  func_0x00010b1353a0(&PTR_FUN_110cbd950);
  return;
}



/* Entry: 10b127388; end: 10b12738b;  */

undefined8 * FUN_10b127388(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbd950;
  func_0x000107c27b70(param_1 + 3);
  return param_1;
}



/* Entry: 10b12738c; end: 10b12739f;  */

void FUN_10b12738c(void)

{
  FUN_10b1273e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1273a0; end: 10b1273e7;  */

void FUN_10b1273a0(long param_1)

{
  long extraout_x8;
  int extraout_w10;
  undefined1 auStack_30 [16];
  
  func_0x00010b135a10();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  FUN_10b1272b8(param_1 + 8,auStack_30);
  func_0x00010b135074();
  return;
}



/* Entry: 10b1273e8; end: 10b127413;  */

undefined8 * FUN_10b1273e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbd950;
  func_0x000107c27b70(param_1 + 3);
  return param_1;
}



/* Entry: 10b127414; end: 10b127453;  */

void FUN_10b127414(void)

{
  code *extraout_x8;
  
  func_0x00010b1364b8();
  FUN_10b1270fc();
  func_0x00010b13534c();
  FUN_10b127454();
  func_0x00010b135074();
  func_0x00010b134da8();
  (*extraout_x8)();
  return;
}



/* Entry: 10b127454; end: 10b12747f;  */

void FUN_10b127454(void)

{
  func_0x00010b13448c();
  __ZNSt3__112__get_sp_mutEPKv();
  func_0x00010b136100();
  func_0x00010b1341ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)();
  return;
}



/* Entry: 10b127480; end: 10b1274e7;  */

undefined8 * FUN_10b127480(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 *puStack_40;
  
  func_0x00010b134b60();
  func_0x00010b133e68();
  func_0x00010b135868();
  FUN_10b126258();
  func_0x00010b135a20();
  FUN_10b1274e8();
  func_0x00010b134100();
  FUN_10b1262e4();
  func_0x00010b133dfc(extraout_x8);
  if ((bool)in_ZR) {
    return puStack_40;
  }
  ___stack_chk_fail();
  func_0x00010b134458();
  FUN_10b1262e4();
  func_0x00010b1343d0();
  puStack_40[2] = 0;
  *puStack_40 = &PTR_FUN_110cbd8b0;
  puStack_40[1] = 0;
  FUN_10b1f68fc(puStack_40 + 3);
  return puStack_40;
}



/* Entry: 10b1274e8; end: 10b127527;  */

undefined8 * FUN_10b1274e8(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cbd8b0;
  param_1[1] = 0;
  FUN_10b1f68fc(param_1 + 3);
  return param_1;
}



/* Entry: 10b127528; end: 10b12755f;  */

void FUN_10b127528(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  func_0x00010b13448c();
  FUN_10b127560();
  uVar1 = *unaff_x19;
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar1;
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  *(undefined1 *)(unaff_x20 + 2) = 1;
  *(undefined1 *)(unaff_x20 + 3) = 1;
  return;
}



/* Entry: 10b127560; end: 10b127583;  */

void FUN_10b127560(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_10b120f28();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 10b127584; end: 10b1275f7;  */

void FUN_10b127584(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  uStack_28 = puVar1[1];
  uStack_30 = *puVar1;
  if (puVar1[1] != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
    puVar2 = *(undefined8 **)(param_1 + 0x10);
  }
  (**(code **)(*(long *)*puVar2 + 0x68))();
  func_0x00010b134c34();
  FUN_10b1264ac();
  func_0x0001052a712c(&uStack_30);
  return;
}



/* Entry: 10b1275f8; end: 10b127607;  */

void FUN_10b1275f8(void)

{
  return;
}



/* Entry: 10b127608; end: 10b127663;  */

void FUN_10b127608(long param_1)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  uStack_28 = puVar1[1];
  uStack_30 = *puVar1;
  if (puVar1[1] != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  FUN_10b125ea0();
  func_0x0001052a712c(&uStack_30);
  return;
}



/* Entry: 10b127664; end: 10b127673;  */

void FUN_10b127664(void)

{
  return;
}



/* Entry: 10b127674; end: 10b12785b;  */

void FUN_10b127674(long param_1)

{
  char cVar1;
  code *pcVar2;
  undefined1 uVar3;
  long *plVar4;
  long lVar5;
  undefined4 *puVar6;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x20;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long alStack_e0 [3];
  char *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_48;
  
  func_0x00010b135394();
  func_0x00010b133e38();
  lVar5 = **(long **)(param_1 + 0x10);
  cVar1 = *(char *)(lVar5 + 200);
  if (cVar1 == '\x01') {
    puVar6 = (undefined4 *)(lVar5 + 0xc0);
  }
  else {
    puVar6 = (undefined4 *)(*(long *)(lVar5 + 0x10) + 0x30);
  }
  func_0x00010b205870(&uStack_f8,*puVar6);
  pcStack_c8 = "scope";
  uStack_c0 = 5;
  uStack_b0 = uStack_f0;
  uStack_b8 = uStack_f8;
  uStack_a8 = uStack_e8;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  func_0x00010b134904(alStack_e0,&pcStack_c8);
  func_0x00010b134fd8();
  func_0x00010b1352b8();
  func_0x00010b134508(&pcStack_c8);
  func_0x00010b134dc8();
  FUN_10b189580(&uStack_110);
  if (cVar1 == '\0') {
    lVar5 = *(long *)(**(long **)(unaff_x20 + 0x10) + 0x10) + 0x100;
    FUN_10b12785c();
    if (*(long *)(lVar5 + 8) != 0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10 != 0);
    }
  }
  func_0x00010b134620();
  if (*(long *)(*(long *)(unaff_x20 + 0x20) + 8) != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_00 != 0);
  }
  func_0x00010b13644c();
  uStack_110 = 0;
  uStack_108 = 0;
  uVar3 = cVar1 == '\0';
  FUN_10b1129cc();
  func_0x00010b134690();
  func_0x00010b135094();
  func_0x00010b134e5c();
  func_0x00010b1354b4();
  func_0x00010b135688();
  FUN_10b126438(&pcStack_c8);
  FUN_10b120998();
  func_0x00010b133dfc(uStack_48);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b135688();
  FUN_10b126438(&pcStack_c8);
  plVar4 = alStack_e0;
  FUN_10b120998();
  func_0x00010b1343d0();
  FUN_10b127880();
  if ((*(byte *)(*plVar4 + 0x70) & 1) == 0) {
    func_0x00010b134e8c();
    func_0x00010b134c7c();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10b1278f4);
    (*pcVar2)();
  }
  if ((*(byte *)(*plVar4 + 0x70) & 1) != 0) {
    return;
  }
  func_0x00010b13604c();
  func_0x00010b13570c();
  func_0x00010b135d2c();
  func_0x00010b1351ac();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10b127ae0);
  (*pcVar2)();
}



/* Entry: 10b12785c; end: 10b12787f;  */

void FUN_10b12785c(long *param_1)

{
  code *pcVar1;
  
  FUN_10b127880();
  if ((*(byte *)(*param_1 + 0x70) & 1) == 0) {
    func_0x00010b134e8c();
    func_0x00010b134c7c();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10b1278f4);
    (*pcVar1)();
  }
  if ((*(byte *)(*param_1 + 0x70) & 1) != 0) {
    return;
  }
  func_0x00010b13604c();
  func_0x00010b13570c();
  func_0x00010b135d2c();
  func_0x00010b1351ac();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b127ae0);
  (*pcVar1)();
}



/* Entry: 10b127880; end: 10b1278b7;  */

void FUN_10b127880(void)

{
  undefined1 auStack_30 [16];
  
  FUN_10b1278fc(auStack_30);
  FUN_10b124eb8(auStack_30);
  func_0x00010b13489c();
  return;
}



/* Entry: 10b1278b8; end: 10b1278fb;  */

void FUN_10b1278b8(long *param_1)

{
  code *pcVar1;
  
  if ((*(byte *)(*param_1 + 0x70) & 1) == 0) {
    func_0x00010b134e8c();
    func_0x00010b134c7c();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10b1278f4);
    (*pcVar1)();
  }
  if ((*(byte *)(*param_1 + 0x70) & 1) != 0) {
    return;
  }
  func_0x00010b13604c();
  func_0x00010b13570c();
  func_0x00010b135d2c();
  func_0x00010b1351ac();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b127ae0);
  (*pcVar1)();
}



/* Entry: 10b1278fc; end: 10b127a83;  */

void FUN_10b1278fc(undefined8 *param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  long extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x9;
  long extraout_x10;
  ulong unaff_x20;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 unaff_x23;
  long lVar7;
  undefined8 *puVar8;
  
  func_0x00010b13652c();
  func_0x00010b134ce0();
  func_0x00010b135704();
  *param_1 = FUN_10b133160;
  param_1[1] = FUN_10b1331f4;
  param_1[10] = unaff_x20;
  func_0x00010b136070();
  func_0x00010b134ff8();
  FUN_10b127a84();
  if ((unaff_x20 & 1) == 0) {
    *(undefined1 *)(param_1 + 0xb) = 0;
    plVar5 = (long *)param_1[10];
    lVar4 = *plVar5;
    func_0x00010b134c84();
    lVar7 = *plVar5;
    if ((*(byte *)(lVar7 + 0x78) & 1) == 0) {
      puVar8 = *(undefined8 **)(lVar7 + 0x88);
      uVar3 = *(undefined8 **)(lVar7 + 0x90) <= puVar8;
      if ((bool)uVar3) {
        lVar6 = *(long *)(lVar7 + 0x80);
        func_0x00010b134648();
        if (extraout_x10 != 0) {
          func_0x00010552fc6c();
LAB_10b127a2c:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10b127a30);
          (*pcVar2)();
        }
        func_0x00010b133e4c(extraout_x8 - lVar6);
        uVar1 = extraout_x9;
        if ((bool)uVar3) {
          uVar1 = extraout_x8_00;
        }
        if (uVar1 != 0) {
          if (uVar1 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10b127a2c;
          }
          __Znwm(uVar1 << 3);
        }
        func_0x00010b133f38();
        *(undefined8 *)(lVar7 + 0x80) = unaff_x23;
        *(undefined8 **)(lVar7 + 0x88) = puVar8;
        *(ulong *)(lVar7 + 0x90) = uVar1;
        if (lVar6 != 0) {
          func_0x00010b134bcc();
        }
      }
      else {
        *puVar8 = param_1;
        puVar8 = puVar8 + 1;
      }
      *(undefined8 **)(lVar7 + 0x88) = puVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(lVar4);
      return;
    }
    func_0x00010b134884();
    func_0x00010b134574(*param_1);
  }
  else {
    FUN_10b1278b8(param_1[10]);
    func_0x00010b134b1c();
    func_0x00010b13425c();
    if ((bool)in_ZR) {
      func_0x00010b1345a0();
      func_0x00010b134368();
    }
    else {
      func_0x00010b134068();
      func_0x00010b13435c();
      func_0x00010b1348a4();
    }
    func_0x00010b1346d4();
    func_0x00010b134560();
  }
  return;
}



/* Entry: 10b127a84; end: 10b127aab;  */

undefined1 FUN_10b127a84(void)

{
  undefined1 uVar1;
  long *unaff_x19;
  
  func_0x00010b134818();
  uVar1 = *(undefined1 *)(*unaff_x19 + 0x78);
  func_0x00010b134884();
  return uVar1;
}



/* Entry: 10b127aac; end: 10b127ae7;  */

void FUN_10b127aac(long param_1)

{
  code *pcVar1;
  
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    return;
  }
  func_0x00010b13604c();
  func_0x00010b13570c();
  func_0x00010b135d2c();
  func_0x00010b1351ac();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b127ae0);
  (*pcVar1)();
}



/* Entry: 10b127ae8; end: 10b127af7;  */

void FUN_10b127ae8(void)

{
  return;
}



/* Entry: 10b127af8; end: 10b127b83;  */

undefined8 * FUN_10b127af8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  if (param_3 == 0) {
    param_1[1] = 0;
    puVar1 = param_1;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = param_3;
    puVar1 = (undefined8 *)0x0;
    if (param_3 != 0) {
      return param_1;
    }
  }
  func_0x00010527822c();
  func_0x000107c350ac();
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b127b84; end: 10b127b97;  */

void FUN_10b127b84(void)

{
  func_0x00010b127b58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b127b98; end: 10b127bbb;  */

void FUN_10b127b98(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int extraout_w10;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = param_1;
  func_0x00010b134ad0();
  puVar2 = param_1 + 1;
  *puVar1 = &PTR_SUB_110cbca58;
  lVar3 = param_1[2];
  uVar4 = *puVar2;
  puVar1[2] = param_1[2];
  puVar1[1] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  uVar5 = puVar2[3];
  uVar4 = puVar2[2];
  puVar1[5] = puVar2[4];
  puVar1[4] = uVar5;
  puVar1[3] = uVar4;
  return;
}



/* Entry: 10b127bbc; end: 10b127bdb;  */

void FUN_10b127bbc(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_SUB_110cbca58;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  uVar4 = puVar1[3];
  uVar3 = puVar1[2];
  param_2[5] = puVar1[4];
  param_2[4] = uVar4;
  param_2[3] = uVar3;
  return;
}



/* Entry: 10b127bdc; end: 10b127e37;  */

long FUN_10b127bdc(long param_1)

{
  undefined1 in_ZR;
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a0 [24];
  long lStack_88;
  long lStack_80;
  undefined1 auStack_60 [40];
  undefined8 uStack_38;
  
  puVar3 = &uStack_c0;
  func_0x00010b133e10();
  uVar6 = **(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uStack_38 = extraout_x8;
  func_0x00010b1341a0(&lStack_88);
  func_0x00010b1349dc(auStack_60);
  func_0x00010b1346c4(auStack_a0,&lStack_88);
  lVar7 = unaff_x19 + 0x18;
  func_0x000107c28148(lVar7);
  FUN_10b1135dc(uVar6,0x1d,auStack_a0,lVar7);
  FUN_10b120998(auStack_a0);
  do {
    func_0x00010b13501c();
    func_0x00010b135388();
  } while (!(bool)in_ZR);
  lVar7 = *(long *)(unaff_x19 + 8);
  iVar1 = 0x10cbc880;
  func_0x000107c2be10();
  iVar2 = 0;
  if (iVar1 != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar7 + 0x18) + 0x40);
    FUN_10b1f74d0(uVar6,0xc);
    iVar2 = (int)uVar6;
  }
  func_0x00010b1349d4(*(undefined8 *)(*(long *)(lVar7 + 0x18) + 0x10));
  if (iVar2 != 0) {
    FUN_10b1f7538(*(undefined8 *)(*(long *)(lVar7 + 0x18) + 0x40));
  }
  lVar7 = *(long *)(unaff_x19 + 8);
  uStack_b8 = *(undefined8 *)(unaff_x19 + 0x20);
  uStack_c0 = *(undefined8 *)(unaff_x19 + 0x18);
  uStack_b0 = *(undefined8 *)(unaff_x19 + 0x28);
  if ((*(byte *)(*(long *)(lVar7 + 0x128) + 8) & 1) == 0) {
    (**(code **)(lVar7 + 0x120))(lVar7 + 0x120);
  }
  (**(code **)(**(long **)(lVar7 + 0x38) + 0x18))();
  uVar5 = **(undefined8 **)(lVar7 + 0x18);
  func_0x00010b1341a0(&lStack_88);
  func_0x00010b1349dc(auStack_60);
  func_0x00010b1346c4(auStack_a0,&lStack_88);
  func_0x000107c28148(&uStack_c0);
  uVar6 = 9;
  FUN_10b1135dc(uVar5,9,auStack_a0,puVar3);
  FUN_10b120998(auStack_a0);
  do {
    func_0x00010b135454();
    func_0x00010b135170();
  } while (!(bool)in_ZR);
  *(undefined1 *)(lVar7 + 0xe0) = 1;
  func_0x00010b135a50();
  lStack_88 = *(long *)(extraout_x8_00 + 0x20);
  lStack_80 = *(long *)(extraout_x8_00 + 0x28);
  if (lStack_80 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  FUN_10b113f44();
  func_0x00010b135db0();
  func_0x00010b135a50();
  lVar7 = *(long *)(extraout_x8_01 + 0x40);
  lStack_80 = *(long *)(extraout_x8_01 + 0x48);
  lStack_88 = lVar7;
  if (lStack_80 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_00 != 0);
  }
  FUN_10b113f44();
  func_0x00010b135db0();
  func_0x00010b133dfc(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b135db0();
    func_0x00010b1343d0();
    lVar4 = lVar7;
    func_0x00010b1360bc(uVar6);
    lVar7 = lVar7 + 8;
    if ((int)lVar4 == 0) {
      lVar7 = 0;
    }
    return lVar7;
  }
  return lVar7;
}



/* Entry: 10b127e38; end: 10b127e6b;  */

long FUN_10b127e38(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010b1360bc(param_2,param_1,&PTR_DAT_110cbcab8);
  param_1 = param_1 + 8;
  if ((int)lVar1 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10b127e6c; end: 10b127ebb;  */

undefined ** FUN_10b127e6c(void)

{
  return &PTR_DAT_110cbcab8;
}



/* Entry: 10b127ebc; end: 10b127edf;  */

void FUN_10b127ebc(long param_1)

{
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b127ee0; end: 10b127ee7;  */

void FUN_10b127ee0(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x00010b13448c(param_1,*param_1);
  for (lVar1 = param_1[1]; lVar1 != unaff_x19; lVar1 = lVar1 + -0x60) {
    func_0x00010b13508c(**(undefined8 **)(lVar1 + -0x58));
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b127ee8; end: 10b127f27;  */

void FUN_10b127ee8(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x00010b13448c();
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != unaff_x19; lVar1 = lVar1 + -0x60) {
    func_0x00010b13508c(**(undefined8 **)(lVar1 + -0x58));
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b127f28; end: 10b127f6f;  */

void FUN_10b127f28(long param_1)

{
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b127f70; end: 10b127f77;  */

void FUN_10b127f70(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  int extraout_w10;
  undefined1 auStack_40 [16];
  long lStack_30;
  long lStack_28;
  
  plVar3 = *(long **)(param_1 + 0x10);
  lVar1 = *plVar3;
  func_0x00010b135910(plVar3[1]);
  func_0x00010b1360e0();
  func_0x00010b120fc4(lVar1 + 0x38,&lStack_30);
  func_0x00010b125840(&lStack_30);
  FUN_10b0ff1ac(auStack_40);
  plVar2 = *(long **)(lVar1 + 0x38);
  lStack_28 = plVar3[4];
  lStack_30 = plVar3[3];
  if (plVar3[4] != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  (**(code **)(*plVar2 + 0x20))();
  func_0x0001052a1398(&lStack_30);
  return;
}



/* Entry: 10b127f78; end: 10b127f97;  */

void FUN_10b127f78(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b114114();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b127f98; end: 10b127f9b;  */

void FUN_10b127f98(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b127f9c; end: 10b127fef;  */

void FUN_10b127f9c(long param_1)

{
  long *plVar1;
  long *plStack_28;
  undefined8 **ppuStack_20;
  long **pplStack_18;
  
  plStack_28 = *(long **)(param_1 + 0x10) + 1;
  plVar1 = (long *)(**(long **)(param_1 + 0x10) + 0x118);
  if (*plVar1 != -1) {
    pplStack_18 = &plStack_28;
    ppuStack_20 = &pplStack_18;
    __ZNSt3__111__call_onceERVmPvPFvS2_E(plVar1,&ppuStack_20,FUN_10b127ff0);
  }
  return;
}



/* Entry: 10b127ff0; end: 10b12804f;  */

code ** FUN_10b127ff0(undefined8 *param_1)

{
  int iVar1;
  byte bVar2;
  code *pcVar3;
  code **ppcVar4;
  undefined8 **ppuVar5;
  ulong uVar6;
  code *pcVar7;
  undefined1 in_ZR;
  bool bVar8;
  undefined1 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 ****ppppuVar12;
  code **ppcVar13;
  long lVar14;
  undefined **ppuVar15;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *puVar16;
  undefined8 ****ppppuVar17;
  ulong extraout_x8_01;
  code *extraout_x8_02;
  ulong uVar18;
  ulong extraout_x9;
  int extraout_w10;
  code **unaff_x19;
  long *plVar19;
  undefined8 ****ppppuVar20;
  undefined8 ***pppuVar21;
  code **ppcVar22;
  undefined8 ****ppppuVar23;
  undefined8 ***pppuVar24;
  undefined8 ***pppuVar25;
  undefined8 **ppuVar26;
  undefined8 **ppuVar27;
  ulong uVar28;
  byte bVar29;
  uint6 uVar30;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  undefined8 uVar31;
  byte bVar37;
  code *pcStack_1d8;
  code *pcStack_1d0;
  code *pcStack_1c8;
  code **ppcStack_1c0;
  code **ppcStack_1b8;
  undefined8 auStack_1b0 [2];
  code *pcStack_1a0;
  code **ppcStack_198;
  code **ppcStack_190;
  undefined8 ***pppuStack_188;
  undefined8 ***pppuStack_180;
  long lStack_178;
  undefined8 **ppuStack_170;
  long lStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  code *pcStack_148;
  code *pcStack_140;
  undefined **ppuStack_138;
  code **ppcStack_130;
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [24];
  undefined8 uStack_f0;
  undefined *puStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plVar19 = *(long **)*param_1;
  func_0x00010b134da8();
  (*extraout_x8_02)();
  lVar14 = *plVar19;
  func_0x00010b133e10();
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  puStack_58 = &UNK_1053a6a3c;
  ppuStack_50 = &PTR_DAT_110873830;
  ppuVar15 = &puStack_58;
  uStack_28 = extraout_x8;
  func_0x000107c28168();
  func_0x00010b133ea8(ppuStack_50);
  func_0x00010b133dfc(uStack_28);
  if ((bool)in_ZR) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  func_0x00010b133e10();
  uStack_f0 = extraout_x8_00;
  FUN_10b127af8(&pcStack_150,*(undefined8 *)(lVar14 + 8),*(undefined8 *)(lVar14 + 0x10));
  ppuStack_170 = (undefined8 **)&UNK_10e52b660;
  lStack_168 = 0;
  uStack_160 = 0;
  uStack_158 = 0;
  ppuVar26 = (undefined8 **)*ppuVar15;
  ppuVar27 = (undefined8 **)ppuVar15[1];
  lVar14 = (long)ppuVar27 - (long)ppuVar26;
  if (lVar14 != 0) {
    if (lVar14 == 0xe0) {
      lVar14 = 8;
    }
    else {
      lVar14 = ((lVar14 >> 5) + -1) / 7 + (lVar14 >> 5);
    }
    uVar18 = 0xffffffffffffffff >> (LZCOUNT(lVar14) & 0x3fU);
    if (lVar14 == 0) {
      uVar18 = 1;
    }
    FUN_10b1295a8(&ppuStack_170,uVar18);
    ppuVar26 = (undefined8 **)*ppuVar15;
    ppuVar27 = (undefined8 **)ppuVar15[1];
  }
  pppuStack_180 = (undefined8 ****)0x0;
  lStack_178 = 0;
  pppuStack_188 = &pppuStack_180;
LAB_10b1145e8:
  ppppuVar12 = (undefined8 ****)pppuStack_188;
  if (ppuVar26 != ppuVar27) {
    pcStack_140 = (code *)CONCAT44(pcStack_140._4_4_,*(undefined4 *)(ppuVar26 + 3));
    bVar2 = *(byte *)((long)ppuVar26 + 0x17);
    uVar9 = bVar2 == 0;
    ppcStack_130 = (code **)ppuVar26[1];
    ppuStack_138 = (undefined **)*ppuVar26;
    if (-1 < (char)bVar2) {
      ppcStack_130 = (code **)(ulong)bVar2;
      ppuStack_138 = (undefined **)ppuVar26;
    }
    Hint_Prefetch(ppuStack_170,0,2,0);
    ppcVar13 = &pcStack_140;
    FUN_10b129684(ppuStack_170);
    uVar6 = uStack_160;
    ppuVar5 = ppuStack_170;
    lVar14 = 0;
    uVar18 = (ulong)ppuStack_170 >> 0xc ^ (ulong)ppcVar13 >> 7;
    bVar2 = (byte)ppcVar13;
    uVar30 = CONCAT15(bVar2,CONCAT14(bVar2,CONCAT13(bVar2,CONCAT12(bVar2,CONCAT11(bVar2,bVar2))))) &
             0x7f7f7f7f7f7f;
    do {
      uVar18 = uVar18 & uVar6;
      uVar31 = *(undefined8 *)((long)ppuVar5 + uVar18);
      cVar32 = (char)((ulong)uVar31 >> 8);
      cVar33 = (char)((ulong)uVar31 >> 0x10);
      cVar34 = (char)((ulong)uVar31 >> 0x18);
      cVar35 = (char)((ulong)uVar31 >> 0x20);
      cVar36 = (char)((ulong)uVar31 >> 0x28);
      bVar29 = (byte)((ulong)uVar31 >> 0x30);
      bVar37 = (byte)((ulong)uVar31 >> 0x38);
      uVar28 = CONCAT17(-(bVar37 == (bVar2 & 0x7f)),
                        CONCAT16(-(bVar29 == (bVar2 & 0x7f)),
                                 CONCAT15(-(cVar36 == (char)(uVar30 >> 0x28)),
                                          CONCAT14(-(cVar35 == (char)(uVar30 >> 0x20)),
                                                   CONCAT13(-(cVar34 == (char)(uVar30 >> 0x18)),
                                                            CONCAT12(-(cVar33 ==
                                                                      (char)(uVar30 >> 0x10)),
                                                                     CONCAT11(-(cVar32 ==
                                                                               (char)(uVar30 >> 8)),
                                                                              -((char)uVar31 ==
                                                                               (char)uVar30))))))))
               & 0x8080808080808080;
      if (uVar28 != 0) {
LAB_10b11465c:
        uVar10 = (uVar28 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar28 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = lStack_168 +
                 (uVar18 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) & uVar6) * 0x18;
        FUN_10b1297f4(uVar10,&pcStack_140);
        if ((uVar10 & 1) == 0) goto code_r0x00010b114684;
        uVar31 = *(undefined8 *)unaff_x19[3];
        FUN_10b12983c(&pcStack_140,*(undefined4 *)(ppuVar26 + 3));
        func_0x00010b129878(auStack_118,0x7001f);
        func_0x00010b1346c4(&pcStack_1d8,&pcStack_140);
        func_0x00010b134528(uVar31,0xab,&pcStack_1d8);
        func_0x00010b134754();
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_108);
          func_0x00010b135388();
        } while (!(bool)uVar9);
        goto LAB_10b114704;
      }
LAB_10b114690:
      bVar29 = NEON_umaxv(CONCAT17(-(bVar37 == 0x80),
                                   CONCAT16(-(bVar29 == 0x80),
                                            CONCAT15(-(cVar36 == -0x80),
                                                     CONCAT14(-(cVar35 == -0x80),
                                                              CONCAT13(-(cVar34 == -0x80),
                                                                       CONCAT12(-(cVar33 == -0x80),
                                                                                CONCAT11(-(cVar32 ==
                                                                                          -0x80),-((
                                                  char)uVar31 == -0x80)))))))),1);
      if ((bVar29 & 1) != 0) goto LAB_10b11470c;
      lVar14 = lVar14 + 8;
      uVar18 = lVar14 + uVar18;
    } while( true );
  }
  while (uVar9 = ppppuVar12 == &pppuStack_180, !(bool)uVar9) {
    pcStack_1a0 = (code *)0x0;
    ppcStack_198 = (code **)0x0;
    ppcStack_190 = (code **)0x0;
    ppcVar13 = &pcStack_1a0;
    FUN_10b0f7b44(ppcVar13,(long)ppppuVar12[6] - (long)ppppuVar12[5] >> 3);
    pppuVar21 = ppppuVar12[6];
    for (pppuVar25 = ppppuVar12[5]; ppcVar22 = ppcStack_198, pppuVar25 != pppuVar21;
        pppuVar25 = pppuVar25 + 1) {
      if (ppcStack_198 < ppcStack_190) {
        func_0x00010b1351d8();
        ppcVar22 = ppcVar22 + 4;
        ppcVar13 = ppcStack_198;
      }
      else {
        ppcVar13 = &pcStack_1a0;
        FUN_10b0f7e84(ppcVar13,((long)ppcStack_198 - (long)pcStack_1a0 >> 5) + 1);
        FUN_10b0f7c50(&pcStack_140,ppcVar13,(long)ppcStack_198 - (long)pcStack_1a0 >> 5,
                      &ppcStack_190);
        func_0x00010b1351d8(ppcStack_130);
        ppcStack_130 = ppcStack_130 + 4;
        FUN_10b0f7bd4(&pcStack_1a0,&pcStack_140);
        ppcVar22 = ppcStack_198;
        ppcVar13 = &pcStack_140;
        func_0x00010b0f7e1c();
      }
      ppcStack_198 = ppcVar22;
    }
    func_0x00010b135b28();
    func_0x00010b1ff218(auStack_1b0);
    pcVar7 = pcStack_150;
    uVar31 = auStack_1b0[0];
    pcStack_1d8 = pcStack_150;
    pcStack_1d0 = pcStack_148;
    if (pcStack_148 != (code *)0x0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10 != 0);
    }
    ppcVar4 = ppcStack_190;
    ppcVar22 = ppcStack_198;
    pcVar3 = pcStack_1a0;
    pcStack_1c8 = pcStack_1a0;
    ppcStack_1c0 = ppcStack_198;
    ppcStack_1b8 = ppcStack_190;
    pcStack_1a0 = (code *)0x0;
    ppcStack_198 = (code **)0x0;
    ppcStack_190 = (code **)0x0;
    pcStack_140 = FUN_10b1298e8;
    ppuStack_138 = &PTR_FUN_110cbcc98;
    func_0x00010b135678();
    *ppcVar13 = pcVar7;
    ppcVar13[1] = pcStack_1d0;
    pcStack_1d8 = (code *)0x0;
    pcStack_1d0 = (code *)0x0;
    ppcVar13[2] = pcVar3;
    ppcVar13[3] = (code *)ppcVar22;
    ppcVar13[4] = (code *)ppcVar4;
    ppcStack_1c0 = (code **)0x0;
    ppcStack_1b8 = (code **)0x0;
    pcStack_1c8 = (code *)0x0;
    ppcStack_130 = ppcVar13;
    FUN_10b20a5ac(uVar31,&pcStack_140);
    func_0x00010b135274();
    FUN_10b114b3c(&pcStack_1d8);
    func_0x00010b1298c4(auStack_1b0);
    func_0x00010b0f79e0(&pcStack_1a0);
    func_0x000107c27be0();
  }
  func_0x00010b1296c8(pppuStack_180);
  FUN_10b12103c(&ppuStack_170);
  ppcVar13 = &pcStack_150;
  func_0x00010b12592c(ppcVar13);
  func_0x00010b133dfc(uStack_f0);
  if ((bool)uVar9) {
    return ppcVar13;
  }
  ___stack_chk_fail();
LAB_10b114a24:
  FUN_10b121030();
LAB_10b114a30:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10b114a34);
  (*pcVar7)();
code_r0x00010b114684:
  uVar28 = uVar28 - 1 & uVar28;
  if (uVar28 == 0) goto LAB_10b114690;
  goto LAB_10b11465c;
LAB_10b11470c:
  ppppuVar12 = (undefined8 ****)&ppuStack_170;
  func_0x00010b129708(ppppuVar12,ppcVar13);
  puVar16 = (undefined8 *)(lStack_168 + (long)ppppuVar12 * 0x18);
  puVar16[2] = ppcStack_130;
  puVar16[1] = ppuStack_138;
  *puVar16 = pcStack_140;
  iVar1 = *(int *)(ppuVar26 + 3);
  ppppuVar17 = (undefined8 ****)pppuStack_180;
  ppppuVar20 = &pppuStack_180;
  while (ppppuVar23 = ppppuVar20, ppppuVar17 != (undefined8 ****)0x0) {
    while (ppppuVar20 = ppppuVar17, *(int *)(ppppuVar20 + 4) <= iVar1) {
      if (iVar1 <= *(int *)(ppppuVar20 + 4)) goto LAB_10b1147c8;
      ppppuVar17 = (undefined8 ****)ppppuVar20[1];
      if ((undefined8 ****)ppppuVar20[1] == (undefined8 ****)0x0) {
        ppppuVar23 = ppppuVar20 + 1;
        goto LAB_10b114780;
      }
    }
    ppppuVar17 = (undefined8 ****)*ppppuVar20;
  }
LAB_10b114780:
  func_0x00010b134ae0();
  *(int *)(ppppuVar12 + 4) = iVar1;
  ppppuVar12[6] = (undefined8 ***)0x0;
  ppppuVar12[7] = (undefined8 ***)0x0;
  ppppuVar12[5] = (undefined8 ***)0x0;
  *ppppuVar12 = (undefined8 ***)0x0;
  ppppuVar12[1] = (undefined8 ***)0x0;
  ppppuVar12[2] = ppppuVar20;
  *ppppuVar23 = ppppuVar12;
  if ((undefined8 ****)*pppuStack_188 != (undefined8 ****)0x0) {
    pppuStack_188 = (undefined8 ***)*pppuStack_188;
  }
  func_0x000107c27be4(pppuStack_180,ppppuVar12);
  lStack_178 = lStack_178 + 1;
  ppppuVar20 = ppppuVar12;
LAB_10b1147c8:
  pppuVar25 = ppppuVar20[6];
  bVar8 = ppppuVar20[7] <= pppuVar25;
  if (bVar8) {
    pppuVar21 = ppppuVar20[5];
    lVar14 = (long)pppuVar25 - (long)pppuVar21;
    if ((lVar14 >> 3) + 1U >> 0x3d != 0) goto LAB_10b114a24;
    func_0x00010b133e4c((long)ppppuVar20[7] - (long)pppuVar21);
    uVar18 = extraout_x9;
    if (bVar8) {
      uVar18 = extraout_x8_01;
    }
    if (uVar18 == 0) {
      lVar11 = 0;
    }
    else {
      if (uVar18 >> 0x3d != 0) {
        func_0x000104bd35f4();
        goto LAB_10b114a30;
      }
      lVar11 = uVar18 << 3;
      __Znwm();
    }
    puVar16 = (undefined8 *)(lVar11 + lVar14);
    pppuVar24 = (undefined8 ***)(puVar16 + 1);
    *puVar16 = ppuVar26;
    _memcpy(puVar16 + -(lVar14 >> 3),pppuVar21,lVar14);
    ppppuVar20[5] = (undefined8 ***)(puVar16 + -(lVar14 >> 3));
    ppppuVar20[6] = pppuVar24;
    ppppuVar20[7] = (undefined8 ***)(lVar11 + uVar18 * 8);
    if (pppuVar21 != (undefined8 ***)0x0) {
      func_0x00010b134bcc();
    }
  }
  else {
    pppuVar24 = pppuVar25 + 1;
    *pppuVar25 = ppuVar26;
  }
  ppppuVar20[6] = pppuVar24;
LAB_10b114704:
  ppuVar26 = ppuVar26 + 4;
  goto LAB_10b1145e8;
}



/* Entry: 10b128050; end: 10b128053;  */

void FUN_10b128050(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b128054; end: 10b12807f;  */

undefined8 * FUN_10b128054(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbcb08;
  func_0x00010b12581c(param_1 + 1);
  return param_1;
}



/* Entry: 10b128080; end: 10b128093;  */

void FUN_10b128080(void)

{
  FUN_10b128054();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b128094; end: 10b1280db;  */

void FUN_10b128094(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_FUN_110cbcb08;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10b1280dc; end: 10b128123;  */

void FUN_10b1280dc(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_110cbcb08;
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010b134088(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10b128124; end: 10b128167;  */

void FUN_10b128124(long param_1)

{
  long alStack_30 [2];
  
  FUN_10b125dc8(alStack_30,param_1 + 8);
  if (alStack_30[0] != 0) {
    (**(code **)(alStack_30[0] + 0x120))(alStack_30[0] + 0x120);
  }
  func_0x00010b134558();
  return;
}



/* Entry: 10b128168; end: 10b12819b;  */

long FUN_10b128168(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010b1360bc(param_2,param_1,&PTR_DAT_110cbcb68);
  param_1 = param_1 + 8;
  if ((int)lVar1 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10b12819c; end: 10b1281a7;  */

undefined ** FUN_10b12819c(void)

{
  return &PTR_DAT_110cbcb68;
}



/* Entry: 10b1281a8; end: 10b128223;  */

void FUN_10b1281a8(long param_1)

{
  long lStack_50;
  long *plStack_48;
  long alStack_40 [2];
  undefined1 **ppuStack_30;
  undefined1 *puStack_28;
  
  FUN_10b125dc8(alStack_40,param_1 + 0x10);
  if (alStack_40[0] != 0) {
    lStack_50 = param_1 + 0x20;
    plStack_48 = alStack_40;
    if (*(long *)(alStack_40[0] + 0x118) != -1) {
      ppuStack_30 = &puStack_28;
      puStack_28 = (undefined1 *)&lStack_50;
      __ZNSt3__111__call_onceERVmPvPFvS2_E
                ((long *)(alStack_40[0] + 0x118),&ppuStack_30,FUN_10b128224);
    }
  }
  func_0x00010b13509c();
  return;
}



/* Entry: 10b128224; end: 10b1282a7;  */

void FUN_10b128224(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = *(undefined8 **)*param_1;
  puVar1 = (undefined8 *)(*(long *)*puVar2 + 0x100);
  FUN_10b12785c();
  func_0x00010b135910(*puVar1);
  func_0x00010b1360e0();
  func_0x00010b120fc4(*(long *)puVar2[1] + 0x38,&uStack_30);
  func_0x00010b125840(&uStack_30);
  FUN_10b0ff1ac(&uStack_40);
  puVar2 = (undefined8 *)*puVar2;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_28 = puVar2[1];
  uStack_30 = *puVar2;
  *puVar2 = 0;
  puVar2[1] = 0;
  func_0x00010b12100c(&uStack_30);
  func_0x00010b12100c(&uStack_40);
  return;
}



/* Entry: 10b1282a8; end: 10b1282c7;  */

long FUN_10b1282a8(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b134958(param_1 + 8);
  func_0x00010b12100c();
  lVar1 = unaff_x19;
  func_0x000107c350ac();
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 10b1282c8; end: 10b128447;  */

long * FUN_10b1282c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined1 in_ZR;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long **pplVar5;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  code *pcVar6;
  long *plStack_e0;
  long lStack_d8;
  undefined8 auStack_d0 [3];
  undefined8 uStack_b8;
  long lStack_b0;
  long *plStack_a8;
  long lStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_38;
  
  pplVar5 = &plStack_e0;
  func_0x00010b133e10();
  plVar3 = (long *)(param_3 + 0x10);
  uStack_38 = extraout_x8;
  FUN_10b125dc8(&plStack_a8);
  if (plStack_a8 != (long *)0x0) {
    pcVar1 = *(code **)(*(long *)(plStack_a8[3] + 0x30) + 0x40);
    ppuStack_90 = *(undefined ***)(*(long *)(plStack_a8[3] + 0x30) + 0x48);
    pcStack_98 = pcVar1;
    if (ppuStack_90 != (undefined **)0x0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10 != 0);
    }
    func_0x00010b1347b0();
    pcVar6 = (code *)*plVar3;
    FUN_10b127ebc(&pcStack_98);
    in_ZR = pcVar1 == pcVar6;
    if ((bool)in_ZR) {
      FUN_10b11f6b4();
      plVar3 = plStack_a8;
    }
    else {
      uStack_b8 = *(undefined8 *)(*(long *)(plStack_a8[3] + 0x30) + 0x40);
      lStack_b0 = *(long *)(*(long *)(plStack_a8[3] + 0x30) + 0x48);
      if (lStack_b0 != 0) {
        do {
          func_0x00010b133f58();
          plStack_a8 = extraout_x8_00;
        } while (extraout_w11 != 0);
      }
      lStack_d8 = lStack_a0;
      plStack_e0 = plStack_a8;
      if (lStack_a0 != 0) {
        do {
          func_0x00010b134088();
        } while (extraout_w10_00 != 0);
      }
      puVar4 = auStack_d0;
      FUN_10b128498();
      pcStack_98 = FUN_10b128468;
      ppuStack_90 = &PTR_FUN_110cbcb90;
      func_0x00010b135678();
      puVar4[1] = lStack_d8;
      *puVar4 = plStack_e0;
      plStack_e0 = (long *)0x0;
      lStack_d8 = 0;
      FUN_10b128498(puVar4 + 2,auStack_d0);
      puStack_88 = puVar4;
      func_0x00010b1353c0();
      func_0x00010b1355d4();
      func_0x00010b133eb4(ppuStack_90);
      FUN_10b128448();
      func_0x00010b134d98();
      plVar3 = (long *)pplVar5;
    }
  }
  func_0x00010b135db8();
  func_0x00010b133dfc(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b135db8();
    func_0x00010b1343d0();
    func_0x00010b134958();
    func_0x00010b128754();
    plVar2 = plVar3;
    func_0x000107c350ac();
    if (plVar2 != (long *)0x0) {
      func_0x000107c278a0();
    }
    return plVar3;
  }
  return plVar3;
}



/* Entry: 10b128448; end: 10b128467;  */

long FUN_10b128448(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b134958();
  func_0x00010b128754();
  lVar1 = unaff_x19;
  func_0x000107c350ac();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b128468; end: 10b128473;  */

void FUN_10b128468(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  long lVar5;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  plVar3 = *(long **)(param_1 + 0x10);
  FUN_10b117280(auStack_48,*plVar3 + 0x58);
  lVar1 = plVar3[3];
  for (lVar5 = plVar3[2]; lVar5 != lVar1; lVar5 = lVar5 + 0x48) {
    lVar2 = lStack_38;
    FUN_10b12abac(lStack_38,lVar5 + 0x18);
    if (lVar2 != 0) {
      uVar4 = 3;
      if (*(char *)(lVar5 + 0x40) == '\0') {
        uVar4 = 1;
      }
      *(undefined4 *)(lVar2 + 0x330) = uVar4;
    }
  }
  func_0x00010b134e7c();
  return;
}



/* Entry: 10b128474; end: 10b128493;  */

void FUN_10b128474(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b128448();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b128494; end: 10b128497;  */

void FUN_10b128494(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b128498; end: 10b12857f;  */

void FUN_10b128498(void)

{
  code *pcVar1;
  undefined1 in_ZR;
  long *plVar2;
  ulong uVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x23;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [24];
  undefined1 uStack_58;
  long lStack_48;
  
  func_0x00010b135044();
  func_0x00010b136224();
  if (!(bool)in_ZR) {
    uVar3 = extraout_x8 / 0x48;
    if (0x38e38e38e38e38e < uVar3) {
      FUN_10b128580();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10b128560);
      (*pcVar1)();
    }
    plVar2 = unaff_x19 + 2;
    FUN_10b12858c();
    *unaff_x19 = (long)plVar2;
    unaff_x19[1] = (long)plVar2;
    func_0x00010b135754(plVar2 + uVar3 * 9);
    uStack_58 = 0;
    for (; unaff_x20 != unaff_x23; unaff_x20 = unaff_x20 + 0x48) {
      FUN_10b1285e0(plVar2,unaff_x20);
      plVar2 = (long *)(lStack_48 + 0x48);
      lStack_48 = (long)plVar2;
    }
    uStack_58 = 1;
    FUN_10b128628(auStack_70);
    unaff_x19[1] = (long)plVar2;
  }
  func_0x00010b134ecc();
  func_0x00010b1286c4(auStack_80);
  return;
}



/* Entry: 10b128580; end: 10b12858b;  */

void FUN_10b128580(void)

{
  func_0x00010b134d60();
  FUN_10b1285b0();
  return;
}



/* Entry: 10b12858c; end: 10b1285af;  */

void FUN_10b12858c(void)

{
  FUN_10b1285b0();
  return;
}



/* Entry: 10b1285b0; end: 10b1285df;  */

void FUN_10b1285b0(long param_1,ulong param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 < 0x38e38e38e38e38f) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x48);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010b134530();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x18,unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined2 *)(unaff_x19 + 0x40) = *(undefined2 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x30) = uVar1;
  return;
}



/* Entry: 10b1285e0; end: 10b128627;  */

void FUN_10b1285e0(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010b134530();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x18,unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined2 *)(unaff_x19 + 0x40) = *(undefined2 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x30) = uVar1;
  return;
}



/* Entry: 10b128628; end: 10b128653;  */

void FUN_10b128628(void)

{
  uint extraout_w8;
  
  func_0x00010b1364ac();
  if ((extraout_w8 & 1) == 0) {
    FUN_10b128654();
  }
  return;
}



/* Entry: 10b128654; end: 10b128673;  */

void FUN_10b128654(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x48;
    func_0x00010b1286a4();
  }
  return;
}



/* Entry: 10b128674; end: 10b128717;  */

void FUN_10b128674(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x48;
    func_0x00010b1286a4();
  }
  return;
}



/* Entry: 10b128718; end: 10b12871f;  */

void FUN_10b128718(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b13448c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x48;
    func_0x00010b1286a4();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b128720; end: 10b128777;  */

void FUN_10b128720(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b13448c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x48;
    func_0x00010b1286a4();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}


