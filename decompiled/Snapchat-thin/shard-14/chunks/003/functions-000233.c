/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b128778; end: 10b12878b;  */

void FUN_10b128778(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000107c350ac();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10b12878c; end: 10b1287af;  */

void FUN_10b12878c(long param_1)

{
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b1287b0; end: 10b128807;  */

void FUN_10b1287b0(void)

{
  func_0x00010b136458();
  FUN_10b128a38();
  return;
}



/* Entry: 10b128808; end: 10b12880b;  */

long FUN_10b128808(long param_1)

{
  long extraout_x8;
  
  func_0x00010b1359d0(&PTR_FUN_110cbd9a0);
  if (extraout_x8 != 0) {
    func_0x00010b1348f4();
    func_0x00010b134a28();
    FUN_10b128bc4();
    func_0x00010b135d24();
  }
  FUN_10b120a3c(param_1 + 0x18);
  FUN_10b120a3c();
  return param_1;
}



/* Entry: 10b12880c; end: 10b12885b;  */

undefined8 * FUN_10b12880c(undefined8 *param_1)

{
  int extraout_w10;
  
  *param_1 = &PTR_FUN_110cbd9a0;
  FUN_10b12885c(param_1 + 1);
  param_1[4] = param_1[2];
  param_1[3] = param_1[1];
  if (param_1[2] != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  return param_1;
}



/* Entry: 10b12885c; end: 10b12888b;  */

void FUN_10b12885c(void)

{
  undefined1 uStack_11;
  
  FUN_10b12888c(&uStack_11);
  return;
}



/* Entry: 10b12888c; end: 10b128923;  */

void FUN_10b12888c(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 *puStack_30;
  
  func_0x00010b133e68();
  func_0x00010b135868();
  FUN_10b128924();
  *puStack_30 = &PTR_FUN_110cbd9d0;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = 0;
  puStack_30[4] = 0;
  puStack_30[5] = 0;
  puStack_30[6] = 0x3cb0b1bb;
  puStack_30[8] = 0;
  puStack_30[7] = 0;
  puStack_30[10] = 0;
  puStack_30[9] = 0;
  puStack_30[0xb] = 0;
  puStack_30[0xc] = 0x32aaaba7;
  puStack_30[0xe] = 0;
  puStack_30[0xd] = 0;
  puStack_30[0x10] = 0;
  puStack_30[0xf] = 0;
  puStack_30[0x12] = 0;
  puStack_30[0x11] = 0;
  puStack_30[0x14] = 0;
  puStack_30[0x13] = 0;
  puStack_30[0x15] = 0;
  func_0x00010b134100();
  FUN_10b128a28();
  func_0x00010b133dfc(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x00010b13502c();
  FUN_10b128944();
  func_0x00010b134f40();
  return;
}



/* Entry: 10b128924; end: 10b128943;  */

void FUN_10b128924(void)

{
  func_0x00010b13502c();
  FUN_10b128944();
  func_0x00010b134f40();
  return;
}



/* Entry: 10b128944; end: 10b12896f;  */

void FUN_10b128944(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x1745d1745d1745e) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xb0);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110cbd9d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b128970; end: 10b128973;  */

void FUN_10b128970(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbd9d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b128974; end: 10b128987;  */

void FUN_10b128974(void)

{
  func_0x00010b128994();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b128988; end: 10b12899f;  */

void FUN_10b128988(long param_1)

{
  func_0x00010b1289e0(param_1 + 0xa8);
  __ZNSt13exception_ptrD1Ev(param_1 + 0xa0);
  __ZNSt3__15mutexD1Ev(param_1 + 0x60);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x30);
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x00010b125888();
  }
  return;
}



/* Entry: 10b1289a0; end: 10b128a07;  */

void FUN_10b1289a0(long param_1)

{
  func_0x00010b1289e0(param_1 + 0x90);
  __ZNSt13exception_ptrD1Ev(param_1 + 0x88);
  __ZNSt3__15mutexD1Ev(param_1 + 0x48);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x18);
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x00010b125888();
  }
  return;
}



/* Entry: 10b128a08; end: 10b128a27;  */

void FUN_10b128a08(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x00010b125888();
  }
  return;
}



/* Entry: 10b128a28; end: 10b128a37;  */

void FUN_10b128a28(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b128a38; end: 10b128acb;  */

void FUN_10b128a38(void)

{
  long unaff_x19;
  
  func_0x00010b134d1c();
  func_0x00010b1350d0();
  FUN_10b1209bc();
  func_0x00010b135a5c();
  FUN_10b1209e8();
  func_0x00010b1350a4();
  func_0x00010b13507c();
  func_0x00010b1351c0();
  func_0x00010b134abc();
  FUN_10b128acc();
  func_0x00010b133fd0();
  if (unaff_x19 == 0) {
    func_0x00010b1344dc();
  }
  else {
    func_0x00010b1346dc();
    func_0x00010b1344ac();
    func_0x00010b133f28();
  }
  func_0x00010b134e54();
  return;
}



/* Entry: 10b128acc; end: 10b128adb;  */

undefined8 * FUN_10b128acc(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int extraout_w10;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)*param_2;
  if (*(char *)(puVar1 + 2) == '\x01') {
    func_0x00010b128b30(puVar1);
  }
  else {
    lVar3 = puVar2[1];
    uVar4 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar4;
    if (lVar3 != 0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10 != 0);
    }
    func_0x00010b135604();
  }
  return puVar1;
}



/* Entry: 10b128adc; end: 10b128b67;  */

undefined8 * FUN_10b128adc(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 2) == '\x01') {
    func_0x00010b128b30(param_1);
  }
  else {
    lVar1 = param_2[1];
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    if (lVar1 != 0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10 != 0);
    }
    func_0x00010b135604();
  }
  return param_1;
}



/* Entry: 10b128b68; end: 10b128bc3;  */

long FUN_10b128b68(long param_1)

{
  long extraout_x8;
  
  func_0x00010b1359d0(&PTR_FUN_110cbd9a0);
  if (extraout_x8 != 0) {
    func_0x00010b1348f4();
    func_0x00010b134a28();
    FUN_10b128bc4();
    func_0x00010b135d24();
  }
  FUN_10b120a3c(param_1 + 0x18);
  FUN_10b120a3c();
  return param_1;
}



/* Entry: 10b128bc4; end: 10b128c03;  */

void FUN_10b128bc4(void)

{
  func_0x00010b1348f4();
  func_0x00010b135724();
  func_0x00010b134a28();
  FUN_10b128c04();
  func_0x00010b134484();
  func_0x00010b13589c();
  return;
}



/* Entry: 10b128c04; end: 10b128c1f;  */

void FUN_10b128c04(void)

{
  func_0x00010b136458();
  FUN_10b128c20();
  return;
}



/* Entry: 10b128c20; end: 10b128ca7;  */

void FUN_10b128c20(void)

{
  long unaff_x19;
  
  func_0x00010b134d1c();
  func_0x00010b1350d0();
  FUN_10b1209bc();
  func_0x00010b135a5c();
  FUN_10b1209e8();
  func_0x00010b1350a4();
  func_0x00010b13507c();
  func_0x00010b1351c0();
  func_0x00010b134abc();
  FUN_10b128ca8();
  func_0x00010b133fd0();
  if (unaff_x19 == 0) {
    func_0x00010b1344dc();
  }
  else {
    func_0x00010b1346dc();
    func_0x00010b1344ac();
    func_0x00010b133f28();
  }
  func_0x00010b134e54();
  return;
}



/* Entry: 10b128ca8; end: 10b128cab;  */

void FUN_10b128ca8(undefined8 *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13exception_ptraSERKS__1103461a0)(*param_2 + 0x88,*param_1);
  return;
}



/* Entry: 10b128cac; end: 10b128cc3;  */

void FUN_10b128cac(void)

{
  FUN_10b1290c4();
  return;
}



/* Entry: 10b128cc4; end: 10b128cf7;  */

void FUN_10b128cc4(void)

{
  func_0x00010b134874();
  func_0x00010b13619c();
  FUN_10b129164();
  func_0x00010b134484();
  return;
}



/* Entry: 10b128cf8; end: 10b128d37;  */

void FUN_10b128cf8(long param_1)

{
  func_0x00010b128d14();
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 10b128d38; end: 10b128d87;  */

undefined8 * FUN_10b128d38(undefined8 *param_1)

{
  int extraout_w10;
  
  *param_1 = &PTR_FUN_110cbcc18;
  func_0x00010b128da0(param_1 + 1);
  param_1[4] = param_1[2];
  param_1[3] = param_1[1];
  if (param_1[2] != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  return param_1;
}



/* Entry: 10b128d88; end: 10b128d8b;  */

long FUN_10b128d88(long param_1)

{
  long extraout_x8;
  
  func_0x00010b1359d0(&PTR_FUN_110cbcc18);
  if (extraout_x8 != 0) {
    func_0x00010b1348f4();
    func_0x00010b134a28();
    FUN_10b128fdc();
    func_0x00010b135d24();
  }
  func_0x00010539e8a8(param_1 + 0x18);
  func_0x00010539e8a8();
  return param_1;
}



/* Entry: 10b128d8c; end: 10b128dbb;  */

void FUN_10b128d8c(void)

{
  FUN_10b128f80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b128dbc; end: 10b128dbf;  */

long FUN_10b128dbc(long param_1)

{
  long extraout_x8;
  
  func_0x00010b1359d0(&PTR_FUN_110cbcc18);
  if (extraout_x8 != 0) {
    func_0x00010b1348f4();
    func_0x00010b134a28();
    FUN_10b128fdc();
    func_0x00010b135d24();
  }
  func_0x00010539e8a8(param_1 + 0x18);
  func_0x00010539e8a8();
  return param_1;
}



/* Entry: 10b128dc0; end: 10b128dd3;  */

void FUN_10b128dc0(void)

{
  FUN_10b128f80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b128dd4; end: 10b128e6b;  */

void FUN_10b128dd4(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 *puStack_30;
  
  func_0x00010b133e68();
  func_0x00010b135868();
  FUN_10b128e6c();
  *puStack_30 = &PTR_FUN_110cbcc38;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = 0;
  puStack_30[4] = 0;
  puStack_30[5] = 0;
  puStack_30[6] = 0x3cb0b1bb;
  puStack_30[8] = 0;
  puStack_30[7] = 0;
  puStack_30[10] = 0;
  puStack_30[9] = 0;
  puStack_30[0xb] = 0;
  puStack_30[0xc] = 0x32aaaba7;
  puStack_30[0xe] = 0;
  puStack_30[0xd] = 0;
  puStack_30[0x10] = 0;
  puStack_30[0xf] = 0;
  puStack_30[0x12] = 0;
  puStack_30[0x11] = 0;
  puStack_30[0x14] = 0;
  puStack_30[0x13] = 0;
  puStack_30[0x15] = 0;
  func_0x00010b134100();
  FUN_10b128f70();
  func_0x00010b133dfc(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x00010b13502c();
  FUN_10b128e8c();
  func_0x00010b134f40();
  return;
}



/* Entry: 10b128e6c; end: 10b128e8b;  */

void FUN_10b128e6c(void)

{
  func_0x00010b13502c();
  FUN_10b128e8c();
  func_0x00010b134f40();
  return;
}



/* Entry: 10b128e8c; end: 10b128eb7;  */

void FUN_10b128e8c(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x1745d1745d1745e) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xb0);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110cbcc38;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b128eb8; end: 10b128ebb;  */

void FUN_10b128eb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbcc38;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b128ebc; end: 10b128ecf;  */

void FUN_10b128ebc(void)

{
  func_0x00010b128edc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b128ed0; end: 10b128ee7;  */

void FUN_10b128ed0(long param_1)

{
  func_0x00010b128f28(param_1 + 0xa8);
  __ZNSt13exception_ptrD1Ev(param_1 + 0xa0);
  __ZNSt3__15mutexD1Ev(param_1 + 0x60);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x30);
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x00010539e938();
  }
  return;
}



/* Entry: 10b128ee8; end: 10b128f4f;  */

void FUN_10b128ee8(long param_1)

{
  func_0x00010b128f28(param_1 + 0x90);
  __ZNSt13exception_ptrD1Ev(param_1 + 0x88);
  __ZNSt3__15mutexD1Ev(param_1 + 0x48);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x18);
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x00010539e938();
  }
  return;
}



/* Entry: 10b128f50; end: 10b128f6f;  */

void FUN_10b128f50(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x00010539e938();
  }
  return;
}



/* Entry: 10b128f70; end: 10b128f7f;  */

void FUN_10b128f70(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b128f80; end: 10b128fdb;  */

long FUN_10b128f80(long param_1)

{
  long extraout_x8;
  
  func_0x00010b1359d0(&PTR_FUN_110cbcc18);
  if (extraout_x8 != 0) {
    func_0x00010b1348f4();
    func_0x00010b134a28();
    FUN_10b128fdc();
    func_0x00010b135d24();
  }
  func_0x00010539e8a8(param_1 + 0x18);
  func_0x00010539e8a8();
  return param_1;
}



/* Entry: 10b128fdc; end: 10b12901b;  */

void FUN_10b128fdc(void)

{
  func_0x00010b1348f4();
  func_0x00010b135724();
  func_0x00010b134a28();
  FUN_10b12901c();
  func_0x00010b134484();
  func_0x00010b13589c();
  return;
}



/* Entry: 10b12901c; end: 10b129037;  */

void FUN_10b12901c(void)

{
  func_0x00010b136458();
  FUN_10b129038();
  return;
}



/* Entry: 10b129038; end: 10b1290bf;  */

void FUN_10b129038(void)

{
  long unaff_x19;
  
  func_0x00010b134d1c();
  func_0x00010b1350d0();
  func_0x00010539e95c();
  func_0x00010b135a5c();
  func_0x00010539e9b0();
  func_0x00010b1358d4();
  func_0x00010b134690();
  func_0x00010b1351c0();
  func_0x00010b134abc();
  FUN_10b1290c0();
  func_0x00010b133fd0();
  if (unaff_x19 == 0) {
    func_0x00010b1344dc();
  }
  else {
    func_0x00010b1346dc();
    func_0x00010b1344ac();
    func_0x00010b133f28();
  }
  func_0x00010b134e4c();
  return;
}



/* Entry: 10b1290c0; end: 10b1290c3;  */

void FUN_10b1290c0(undefined8 *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13exception_ptraSERKS__1103461a0)(*param_2 + 0x88,*param_1);
  return;
}



/* Entry: 10b1290c4; end: 10b1290ff;  */

void FUN_10b1290c4(undefined8 *param_1,long param_2)

{
  undefined8 *extraout_x8;
  undefined8 extraout_x9;
  undefined8 uVar1;
  undefined8 extraout_x10;
  undefined8 uVar2;
  int extraout_w13;
  int extraout_w13_00;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = 0;
  if (*(long *)(param_2 + 0x20) != 0) {
    do {
      func_0x00010b1343e8();
    } while (extraout_w13 != 0);
    do {
      func_0x00010b1343e8();
      param_1 = extraout_x8;
      uVar1 = extraout_x9;
      uVar2 = extraout_x10;
    } while (extraout_w13_00 != 0);
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  func_0x00010b134690();
  return;
}



/* Entry: 10b129100; end: 10b12913f;  */

void FUN_10b129100(undefined8 param_1)

{
  undefined1 extraout_w8;
  long extraout_x8;
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined8 in_register_00005008;
  
  func_0x00010b134530();
  FUN_10b129140();
  func_0x00010b135194();
  unaff_x19[1] = in_register_00005008;
  *unaff_x19 = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  func_0x00010b135604();
  *(undefined1 *)(unaff_x19 + 3) = extraout_w8;
  return;
}



/* Entry: 10b129140; end: 10b129163;  */

void FUN_10b129140(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010b126ae8();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 10b129164; end: 10b12918f;  */

void FUN_10b129164(void)

{
  long unaff_x20;
  
  func_0x00010b135568();
  FUN_10b129140();
  func_0x00010b134c34();
  FUN_10b126f44();
  *(undefined1 *)(unaff_x20 + 0x18) = 1;
  return;
}



/* Entry: 10b129190; end: 10b12921f;  */

void FUN_10b129190(void)

{
  long unaff_x19;
  
  func_0x00010b134d1c();
  func_0x00010b1350d0();
  func_0x00010539e95c();
  func_0x00010b135a5c();
  func_0x00010539e9b0();
  func_0x00010b1358d4();
  func_0x00010b134690();
  func_0x00010b1351c0();
  func_0x00010b134abc();
  FUN_10b129220();
  func_0x00010b133fd0();
  if (unaff_x19 == 0) {
    func_0x00010b1344dc();
  }
  else {
    func_0x00010b1346dc();
    func_0x00010b1344ac();
    func_0x00010b133f28();
  }
  func_0x00010b134e4c();
  return;
}



/* Entry: 10b129220; end: 10b12922f;  */

undefined8 * FUN_10b129220(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  param_1 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)*param_2;
  if (*(char *)(puVar1 + 2) == '\x01') {
    func_0x00010b126eac(puVar1);
  }
  else {
    uVar2 = *param_1;
    puVar1[1] = param_1[1];
    *puVar1 = uVar2;
    *param_1 = 0;
    param_1[1] = 0;
    func_0x00010b135604();
  }
  return puVar1;
}



/* Entry: 10b129230; end: 10b129297;  */

undefined8 * FUN_10b129230(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 2) == '\x01') {
    func_0x00010b126eac(param_1);
  }
  else {
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    *param_2 = 0;
    param_2[1] = 0;
    func_0x00010b135604();
  }
  return param_1;
}



/* Entry: 10b129298; end: 10b129343;  */

void FUN_10b129298(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined1 *extraout_x8_01;
  undefined1 *puVar3;
  int extraout_w11;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000060;
  undefined1 *puStack_20;
  long lStack_18;
  undefined8 *puStack_10;
  code *pcStack_8;
  
  func_0x00010b136544();
  func_0x00010b13624c();
  func_0x00010b133e68();
  in_stack_00000018 = extraout_x8;
  func_0x00010b135868();
  FUN_10b129360();
  FUN_10b1293ac(in_stack_00000010);
  lVar2 = in_stack_00000010;
  in_stack_00000010 = 0;
  FUN_10b129344(lVar2 + 0x18);
  puVar1 = (undefined1 *)register0x00000008;
  FUN_10b129574();
  func_0x00010b133dfc(in_stack_00000018);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b134458();
  FUN_10b129574();
  func_0x00010b1343d0();
  *extraout_x8_00 = puVar1;
  extraout_x8_00[1] = lVar2;
  puVar3 = (undefined1 *)0x0;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1 + 8;
  }
  if ((puVar3 != (undefined1 *)0x0) &&
     ((*(long *)(puVar3 + 8) == 0 || (*(long *)(*(long *)(puVar3 + 8) + 8) == -1)))) {
    pcStack_8 = FUN_10b129344;
    lStack_18 = extraout_x8_00[1];
    puStack_20 = puVar1;
    puStack_10 = &stack0x00000060;
    if (lStack_18 != 0) {
      do {
        func_0x00010b133f58();
        puVar3 = extraout_x8_01;
      } while (extraout_w11 != 0);
    }
    FUN_10b129518(puVar3,&puStack_20);
    FUN_10b12878c(&puStack_20);
    return;
  }
  return;
}



/* Entry: 10b129344; end: 10b12935f;  */

void FUN_10b129344(long *param_1,long param_2,long param_3)

{
  long extraout_x8;
  long lVar1;
  int extraout_w11;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 8;
  }
  if ((lVar1 != 0) && ((*(long *)(lVar1 + 8) == 0 || (*(long *)(*(long *)(lVar1 + 8) + 8) == -1))))
  {
    lStack_18 = param_1[1];
    lStack_20 = param_2;
    if (lStack_18 != 0) {
      do {
        func_0x00010b133f58();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    FUN_10b129518(lVar1,&lStack_20);
    FUN_10b12878c(&lStack_20);
    return;
  }
  return;
}



/* Entry: 10b129360; end: 10b12937f;  */

void FUN_10b129360(void)

{
  func_0x00010b13502c();
  FUN_10b129380();
  func_0x00010b134f40();
  return;
}



/* Entry: 10b129380; end: 10b1293ab;  */

undefined8 * FUN_10b129380(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x9a90e7d95bc60a) {
    puVar1 = (undefined8 *)(param_2 * 0x1a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cbd900;
  param_1[1] = 0;
  FUN_10b12940c(param_1 + 3);
  return param_1;
}



/* Entry: 10b1293ac; end: 10b1293eb;  */

undefined8 * FUN_10b1293ac(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cbd900;
  param_1[1] = 0;
  FUN_10b12940c(param_1 + 3);
  return param_1;
}



/* Entry: 10b1293ec; end: 10b1293ef;  */

void FUN_10b1293ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbd900;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1293f0; end: 10b129403;  */

void FUN_10b1293f0(void)

{
  FUN_10b1294ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b129404; end: 10b12940b;  */

void FUN_10b129404(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b1340a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b12940c; end: 10b1294ab;  */

undefined8
FUN_10b12940c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  int extraout_w10;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_3[1];
  uStack_30 = *param_3;
  if (param_3[1] != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = param_6[1];
  uStack_50 = *param_6;
  *param_6 = 0;
  param_6[1] = 0;
  uStack_58 = param_7[1];
  uStack_60 = *param_7;
  *param_7 = 0;
  param_7[1] = 0;
  FUN_10b153254(param_1,param_2,&uStack_30,param_4,param_5,&uStack_50,&uStack_60);
  func_0x00010b134690();
  func_0x00010b1350a4();
  func_0x0001052a9ed0(&uStack_40);
  func_0x0001052a1398(&uStack_30);
  return param_1;
}



/* Entry: 10b1294ac; end: 10b1294b7;  */

void FUN_10b1294ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbd900;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1294b8; end: 10b129517;  */

void FUN_10b1294b8(long param_1,long param_2,undefined8 param_3)

{
  long extraout_x8;
  int extraout_w11;
  undefined8 uStack_20;
  long lStack_18;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = *(long *)(param_1 + 8);
    uStack_20 = param_3;
    if (lStack_18 != 0) {
      do {
        func_0x00010b133f58();
        param_2 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    FUN_10b129518(param_2,&uStack_20);
    FUN_10b12878c(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10b129518; end: 10b129573;  */

void FUN_10b129518(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010b13422c();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  func_0x00010b133fe4();
  func_0x00010b129550();
  return;
}



/* Entry: 10b129574; end: 10b129583;  */

void FUN_10b129574(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b129584; end: 10b1295a7;  */

void FUN_10b129584(long param_1)

{
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b1295a8; end: 10b129683;  */

void FUN_10b1295a8(long *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar1 = *param_1;
  puVar7 = (undefined8 *)param_1[1];
  lVar8 = param_1[2];
  param_1[2] = param_2;
  func_0x000107810840();
  lVar10 = param_1[1];
  for (lVar9 = 0; lVar8 != lVar9; lVar9 = lVar9 + 1) {
    if (-1 < *(char *)(lVar1 + lVar9)) {
      puVar4 = puVar7;
      FUN_10b129684();
      plVar3 = param_1;
      func_0x000107c2b954(param_1,puVar4);
      bVar2 = (byte)puVar4 & 0x7f;
      uVar5 = param_1[2];
      lVar6 = *param_1;
      *(byte *)(lVar6 + (long)plVar3) = bVar2;
      *(byte *)(lVar6 + ((long)plVar3 - 7U & uVar5) + (uVar5 & 7)) = bVar2;
      puVar4 = (undefined8 *)(lVar10 + (long)plVar3 * 0x18);
      uVar12 = puVar7[1];
      uVar11 = *puVar7;
      puVar4[2] = puVar7[2];
      puVar4[1] = uVar12;
      *puVar4 = uVar11;
    }
    puVar7 = puVar7 + 3;
  }
  if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 10b129684; end: 10b1296c7;  */

ulong FUN_10b129684(uint *param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  ulong extraout_x8;
  ulong extraout_x10;
  
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (long)&PTR_LOOP_110c8acd8 + (ulong)*param_1;
  uVar3 = SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^
          ((long)&PTR_LOOP_110c8acd8 + (ulong)*param_1) * -0x622015f714c7d297;
  lVar1 = *(long *)(param_1 + 4);
  func_0x000100062d4c(uVar3,*(undefined8 *)(param_1 + 2));
  func_0x000100061c28(uVar3 + lVar1);
  return extraout_x8 ^ extraout_x10;
}



/* Entry: 10b1296c8; end: 10b1297f3;  */

void FUN_10b1296c8(long param_1)

{
  long unaff_x19;
  
  if (param_1 != 0) {
    func_0x00010b134828();
    FUN_10b1296c8();
    FUN_10b1296c8(*(undefined8 *)(unaff_x19 + 8));
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      *(long *)(unaff_x19 + 0x30) = *(long *)(unaff_x19 + 0x28);
      __ZdlPv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1297f4; end: 10b12983b;  */

bool FUN_10b1297f4(int *param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  undefined8 uStack_20;
  long lStack_18;
  
  if (*param_1 == *param_2) {
    uStack_20 = *(undefined8 *)(param_1 + 2);
    lStack_18 = *(long *)(param_1 + 4);
    iVar1 = (int)&uStack_20;
    if (lStack_18 == *(long *)(param_2 + 4)) {
      func_0x000100067218(&uStack_20,*(undefined8 *)(param_2 + 2),*(long *)(param_2 + 4));
      bVar2 = iVar1 == 0;
    }
    else {
      bVar2 = false;
    }
    return bVar2;
  }
  return false;
}



/* Entry: 10b12983c; end: 10b1298e7;  */

void FUN_10b12983c(void)

{
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x00010b13647c();
  func_0x000106e5c56c();
  func_0x00010b20b440();
  func_0x000107c278b8(unaff_x20 + 0x10,unaff_x19);
  return;
}



/* Entry: 10b1298e8; end: 10b129ae7;  */

void FUN_10b1298e8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 extraout_x8_02;
  long lVar6;
  ulong unaff_x20;
  ulong unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar7;
  long *plVar8;
  ulong unaff_x27;
  undefined8 in_stack_00000050;
  undefined1 auStack_3a0 [24];
  undefined1 auStack_388 [40];
  undefined1 auStack_360 [40];
  undefined8 uStack_338;
  undefined8 uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  long lStack_318;
  undefined8 *puStack_310;
  code *pcStack_308;
  undefined1 auStack_300 [24];
  undefined1 auStack_2e8 [72];
  long lStack_2a0;
  byte bStack_290;
  long lStack_278;
  long lStack_268;
  char cStack_260;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [80];
  undefined8 uStack_8;
  
  func_0x00010b134cf8();
  func_0x00010b133e8c();
  plVar8 = *(long **)(param_1 + 0x10);
  puStack_70 = &uStack_68;
  uStack_68 = 0;
  uStack_60 = 0;
  lVar6 = plVar8[2];
  lVar1 = plVar8[3];
  uStack_8 = extraout_x8;
  do {
    uVar2 = lVar6 == lVar1;
    if ((bool)uVar2) {
      func_0x000107c27bec(&puStack_70);
      func_0x00010b133dfc(uStack_8);
      if ((bool)uVar2) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010b134458();
      FUN_10b120998();
      func_0x00010b134fd8();
      func_0x00010b134d88();
      func_0x000107c27bec(&puStack_70);
      func_0x00010b1343d0();
      puVar4 = auStack_3a0;
      pcStack_308 = FUN_10b129ae8;
      uStack_330 = unaff_x22;
      uStack_328 = unaff_x21;
      uStack_320 = unaff_x20;
      lStack_318 = lVar6;
      puStack_310 = &stack0x00000050;
      func_0x00010b133e10();
      uStack_338 = extraout_x8_02;
      FUN_10b12983c(auStack_388);
      func_0x00010b129878(auStack_360,param_3);
      func_0x00010b1346c4(auStack_3a0,auStack_388);
      func_0x00010b134528(lVar6,0xab,auStack_3a0);
      FUN_10b120998();
      do {
        func_0x00010b1355dc();
        func_0x00010b135170();
      } while (!(bool)uVar2);
      func_0x00010b133dfc(uStack_338);
      if ((bool)uVar2) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010b134458();
      FUN_10b120998();
      func_0x00010b134a34(auStack_388);
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        func_0x00010b134594();
      } while (!(bool)uVar2);
      func_0x00010b1343d0();
      if (*(long *)(puVar4 + 8) != 0) {
        FUN_10b114b3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)();
        return;
      }
      return;
    }
    FUN_10b1f697c(auStack_2e8,*(undefined8 *)(*plVar8 + 0x28),lVar6,1,0);
    if ((bStack_290 & 1) == 0) {
      param_3 = (undefined1 *)0x70020;
LAB_10b129980:
      func_0x00010b136210();
      FUN_10b129ae8();
    }
    else {
      if ((cStack_260 != '\x01' || lStack_268 != 0) || lStack_2a0 != 0) {
        param_3 = (undefined1 *)0x70021;
        goto LAB_10b129980;
      }
      if (lStack_278 == 0) {
        param_3 = (undefined1 *)0x70022;
        goto LAB_10b129980;
      }
      func_0x00010b135358();
      lVar3 = *(long *)(extraout_x8_00 + 0x10);
      FUN_10b20ed78(lVar3,*(undefined4 *)(lVar6 + 0x18));
      if (lVar3 < 1) {
        param_3 = (undefined1 *)0x70023;
        goto LAB_10b129980;
      }
      uVar5 = 0;
      func_0x0001089a1e4c(&puStack_70);
      param_3 = (undefined1 *)0x7001f;
      if ((uVar5 & 1) == 0) goto LAB_10b129980;
      uVar7 = *(undefined8 *)(*plVar8 + 0x28);
      FUN_10b202630(auStack_58,auStack_2e8);
      unaff_x20 = unaff_x20 & 0xffffffffffffff00;
      unaff_x27 = (ulong)((uint)unaff_x27 & 0xffffff00);
      unaff_x21 = unaff_x21 & 0xffffffff00000000 | unaff_x27;
      FUN_10b1f6940(uVar7,auStack_58,unaff_x20,unaff_x21);
      func_0x00010b121e00(auStack_58);
      func_0x00010b136210();
      FUN_10b129ae8();
      func_0x00010b135358();
      unaff_x22 = *extraout_x8_01;
      FUN_10b12983c(auStack_58,*(undefined4 *)(lVar6 + 0x18));
      func_0x00010b134904(auStack_300,auStack_58);
      param_3 = auStack_300;
      FUN_10b114b00(unaff_x22,0xac,auStack_300,lStack_278);
      FUN_10b120998(auStack_300);
      func_0x00010b134fd8();
    }
    func_0x00010b134d88();
    lVar6 = lVar6 + 0x20;
  } while( true );
}



/* Entry: 10b129ae8; end: 10b129bb7;  */

void FUN_10b129ae8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [40];
  undefined1 auStack_60 [40];
  undefined8 uStack_38;
  
  puVar1 = auStack_a0;
  func_0x00010b133e10();
  uStack_38 = extraout_x8;
  FUN_10b12983c(auStack_88);
  func_0x00010b129878(auStack_60,param_3);
  func_0x00010b1346c4(auStack_a0,auStack_88);
  func_0x00010b134528();
  FUN_10b120998();
  do {
    func_0x00010b1355dc();
    func_0x00010b135170();
  } while (!(bool)in_ZR);
  func_0x00010b133dfc(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b134458();
  FUN_10b120998();
  func_0x00010b134a34(auStack_88);
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x00010b134594();
  } while (!(bool)in_ZR);
  func_0x00010b1343d0();
  if (*(long *)(puVar1 + 8) != 0) {
    FUN_10b114b3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b129bb8; end: 10b129bd7;  */

void FUN_10b129bb8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b114b3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b129bd8; end: 10b129c1b;  */

void FUN_10b129bd8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b129c1c; end: 10b129c63;  */

void FUN_10b129c1c(long param_1)

{
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b129c64; end: 10b129e23;  */

long * FUN_10b129c64(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined1 in_NG;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *unaff_x19;
  long *plVar5;
  long *plVar6;
  long *unaff_x24;
  ulong uVar7;
  
  func_0x00010b136544();
  func_0x00010b1347f0();
  plVar6 = (long *)unaff_x19[1];
  plVar2 = param_3;
  if (plVar6 != (long *)0x0) {
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      unaff_x24 = (long *)(uVar7 & (ulong)param_3);
      in_NG = false;
    }
    else {
      in_NG = (long)param_3 - (long)plVar6 < 0;
      unaff_x24 = param_3;
      if (plVar6 <= param_3) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)param_3 / (ulong)plVar6;
        }
        unaff_x24 = (long *)((long)param_3 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*unaff_x19 + (long)unaff_x24 * 8);
    if (plVar5 != (long *)0x0) {
      do {
        while( true ) {
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) goto LAB_10b129d14;
          plVar3 = (long *)plVar5[1];
          in_NG = (long)plVar3 - (long)param_3 < 0;
          if (plVar3 != param_3) break;
          plVar2 = plVar5 + 2;
          func_0x000107c278d0(plVar2,param_4);
          if (((ulong)plVar2 & 1) != 0) goto LAB_10b129e08;
        }
        if (((ulong)plVar6 & uVar7) == 0) {
          plVar3 = (long *)((ulong)plVar3 & uVar7);
        }
        else if (plVar6 <= plVar3) {
          uVar1 = 0;
          if (plVar6 != (long *)0x0) {
            uVar1 = (ulong)plVar3 / (ulong)plVar6;
          }
          plVar3 = (long *)((long)plVar3 - uVar1 * (long)plVar6);
        }
        in_NG = (long)plVar3 - (long)unaff_x24 < 0;
      } while (plVar3 == unaff_x24);
    }
  }
LAB_10b129d14:
  plVar5 = unaff_x19 + 2;
  func_0x00010b135e30();
  *plVar2 = 0;
  plVar2[1] = (long)param_3;
  func_0x00010b1351c8(plVar2 + 2);
  _bzero(plVar2 + 5,0x310);
  func_0x00010b1345b0();
  if ((plVar6 == (long *)0x0) || (func_0x00010b135ab0(param_1,param_2,(float)plVar6), (bool)in_NG))
  {
    func_0x00010b1342d8((long)plVar6 << 1);
    func_0x00010b136014();
    plVar6 = (long *)unaff_x19[1];
    if (((ulong)plVar6 & (long)plVar6 - 1U) == 0) {
      unaff_x24 = (long *)((long)plVar6 - 1U & (ulong)param_3);
    }
    else {
      unaff_x24 = param_3;
      if (plVar6 <= param_3) {
        uVar7 = 0;
        if (plVar6 != (long *)0x0) {
          uVar7 = (ulong)param_3 / (ulong)plVar6;
        }
        unaff_x24 = (long *)((long)param_3 - uVar7 * (long)plVar6);
      }
    }
  }
  lVar4 = *unaff_x19;
  if (*(long *)(lVar4 + (long)unaff_x24 * 8) == 0) {
    *plVar2 = *plVar5;
    *plVar5 = (long)plVar2;
    *(long **)(lVar4 + (long)unaff_x24 * 8) = plVar5;
    if (*plVar2 != 0) {
      plVar5 = *(long **)(*plVar2 + 8);
      if (((ulong)plVar6 & (long)plVar6 - 1U) == 0) {
        plVar5 = (long *)((ulong)plVar5 & (long)plVar6 - 1U);
      }
      else if (plVar6 <= plVar5) {
        uVar7 = 0;
        if (plVar6 != (long *)0x0) {
          uVar7 = (ulong)plVar5 / (ulong)plVar6;
        }
        plVar5 = (long *)((long)plVar5 - uVar7 * (long)plVar6);
      }
      *(long **)(lVar4 + (long)plVar5 * 8) = plVar2;
    }
  }
  else {
    func_0x00010b135990();
  }
  func_0x00010b1342c0();
  FUN_10b129f9c();
  plVar5 = plVar2;
LAB_10b129e08:
  return plVar5 + 5;
}



/* Entry: 10b129e24; end: 10b129f83;  */

void FUN_10b129e24(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  long extraout_x8_00;
  long *plVar4;
  long *extraout_x9;
  long *extraout_x9_00;
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
    plVar4 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar7 < (long *)0x3) || (((ulong)plVar7 & (long)plVar7 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x00010b134418();
    }
    if (param_2 <= plVar4) {
      param_2 = plVar4;
    }
    if (plVar7 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      FUN_10b129f84(param_1,0);
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm(lVar2);
    FUN_10b129f84(param_1,lVar2);
    param_1[1] = (long)param_2;
    lVar2 = *param_1;
    for (plVar4 = (long *)0x0; param_2 != plVar4; plVar4 = (long *)((long)plVar4 + 1)) {
      *(undefined8 *)(lVar2 + (long)plVar4 * 8) = 0;
    }
    if (param_1[2] != 0) {
      func_0x00010b136188();
      func_0x00010b136174();
      lVar2 = extraout_x8;
      plVar4 = extraout_x9;
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
            func_0x00010b134964();
            lVar2 = extraout_x8_00;
            plVar4 = extraout_x9_00;
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



/* Entry: 10b129f84; end: 10b129f9b;  */

void FUN_10b129f84(long *param_1,long param_2)

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



/* Entry: 10b129f9c; end: 10b129fdb;  */

long * FUN_10b129f9c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10b1204e8(lVar1 + 0x10);
    }
    func_0x00010b134c8c();
  }
  return param_1;
}



/* Entry: 10b129fdc; end: 10b129feb;  */

void FUN_10b129fdc(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)**(undefined8 **)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010b1360f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined1 *)(*(undefined8 **)(param_1 + 0x10) + 0x51));
  return;
}



/* Entry: 10b129fec; end: 10b12a00b;  */

void FUN_10b129fec(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010b1172a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b12a00c; end: 10b12a00f;  */

void FUN_10b12a00c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b12a010; end: 10b12a523;  */

void FUN_10b12a010(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  undefined8 in_x7;
  undefined8 extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  undefined8 extraout_x9;
  code *extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w12;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  code **ppcVar9;
  undefined1 uVar10;
  undefined1 auStack_bd0 [16];
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  char cStack_ba0;
  long lStack_b90;
  long lStack_b88;
  long alStack_b80 [77];
  byte bStack_918;
  undefined1 uStack_908;
  long lStack_870;
  long lStack_868;
  undefined1 auStack_858 [384];
  undefined1 auStack_6d8 [384];
  undefined1 auStack_558 [88];
  byte bStack_500;
  byte bStack_4d0;
  byte bStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined4 uStack_2c0;
  undefined8 uStack_2bc;
  undefined8 uStack_2b4;
  undefined8 uStack_2ac;
  undefined8 uStack_2a4;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined1 auStack_290 [24];
  undefined1 uStack_278;
  long lStack_270;
  undefined8 uStack_268;
  undefined4 uStack_260;
  undefined1 uStack_258;
  undefined1 uStack_1b8;
  undefined1 auStack_1b0 [72];
  undefined1 uStack_168;
  undefined1 uStack_164;
  undefined1 uStack_160;
  undefined1 uStack_15c;
  undefined1 auStack_158 [64];
  undefined1 uStack_118;
  ulong uStack_110;
  undefined **ppuStack_108;
  code *pcStack_100;
  long lStack_f8;
  byte bStack_f0;
  undefined1 uStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  long *plStack_98;
  undefined1 uStack_70;
  undefined8 uStack_48;
  
  func_0x00010b133e38();
  lVar8 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(lVar8 + 0x80);
  lVar6 = *(long *)(lVar8 + 0x30);
  uVar10 = *(undefined1 *)(lVar8 + 0x38);
  auStack_158[0] = 0;
  uStack_118 = 0;
  if ((*(char *)(lVar8 + 0x68) == '\x01') && (*(long *)(lVar8 + 0x50) != *(long *)(lVar8 + 0x58))) {
    func_0x00010b114b5c(auStack_158);
    FUN_10b114b98();
    func_0x00010b135430(*(undefined8 *)(lVar8 + 0x58));
    if ((param_4 & 1) != 0) {
      func_0x00010b135424();
    }
    func_0x00010b13506c();
  }
  uStack_2d0 = 0;
  uStack_2d8 = 0;
  uStack_2c8 = 0;
  uStack_2c0 = (undefined4)*(undefined8 *)(lVar5 + 0x28);
  FUN_10b189390();
  uStack_2b4 = 0;
  uStack_2bc = 0;
  uStack_2a4 = 0;
  uStack_2ac = 0;
  uStack_29c = 0;
  uStack_298 = *(undefined4 *)(lVar8 + 0x28);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_290,lVar8 + 0x10)
  ;
  lStack_270 = lVar6 * 1000;
  uStack_268 = 0;
  uStack_260 = 0;
  uStack_258 = 0;
  uStack_1b8 = 0;
  uStack_278 = uVar10;
  FUN_10b12110c(auStack_1b0,auStack_158);
  uStack_168 = 0;
  uStack_164 = 0;
  uStack_160 = 0;
  uStack_15c = 0;
  uVar7 = *(undefined8 *)(lVar5 + 0x28);
  FUN_10b121208(auStack_6d8,&uStack_2d8);
  FUN_10b1f6ad4(auStack_558,uVar7,auStack_6d8);
  FUN_10b1213b8(auStack_6d8);
  if ((bStack_2e0 & 1) == 0) {
    func_0x00010b1213e8(auStack_858,&uStack_2d8);
    FUN_10b114ba8(&lStack_b90,lVar5,auStack_858,auStack_558,1);
    FUN_10b1213b8(auStack_858);
    func_0x00010b135b9c();
    uVar10 = bStack_918 == 1;
    if ((!(bool)uVar10) || (((bStack_500 & 1) == 0 && ((bStack_4d0 & 1) == 0)))) {
      func_0x00010b135b28();
      FUN_10b1ff1d0(&uStack_bb0);
      pcStack_100 = *(code **)(lVar8 + 0x70);
      ppuStack_a0 = *(undefined ***)(lVar8 + 0x78);
      lStack_f8 = 0;
      pcStack_a8 = pcStack_100;
      if (ppuStack_a0 != (undefined **)0x0) {
        do {
          func_0x00010b133f68();
          lStack_f8 = extraout_x8_00;
          pcStack_100 = extraout_x9_00;
        } while (extraout_w12 != 0);
      }
      bStack_f0 = (bStack_918 ^ 0xff) & 1;
      plStack_98 = (long *)((CONCAT71(plStack_98._1_7_,bStack_918) ^ 0xff) & 0xffffffffffffff01);
      uStack_110 = 0x10b129bdc;
      ppuStack_108 = &PTR_DAT_110cbccb0;
      if (lStack_f8 != 0) {
        plVar4 = (long *)(lStack_f8 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = *plVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      func_0x00010b1346b0();
      (*extraout_x8_01)();
      func_0x00010b133ea8(ppuStack_108);
      func_0x00010b0f7ee8(&pcStack_a8);
      func_0x00010b1355e4();
      func_0x00010b13526c();
      goto LAB_10b12a3c0;
    }
    func_0x00010b13526c();
  }
  uStack_110 = uStack_110 & 0xffffffffffffff00;
  uStack_b0 = 0;
  pcStack_a8 = (code *)((ulong)pcStack_a8 & 0xffffffffffffff00);
  uStack_70 = 0;
  uVar10 = 0;
  ppcVar9 = &pcStack_a8;
  func_0x00010b1359c0();
  func_0x00010b135e68(&lStack_b90,lVar5,auStack_558,0,0,lVar8 + 0x10,&uStack_110,in_x7,extraout_x9,
                      extraout_x8,ppcVar9,uVar10);
  lStack_868 = lStack_b88;
  lStack_870 = lStack_b90;
  lStack_b90 = 0;
  lStack_b88 = 0;
  func_0x00010b121a94(&lStack_b90);
  func_0x00010b121ac0(&uStack_110);
  (**(code **)(**(long **)(lVar8 + 0x40) + 0x20))(&uStack_bb0);
  if (cStack_ba0 == '\x01') {
    uStack_bb8 = uStack_ba8;
    uStack_bc0 = uStack_bb0;
    uStack_bb0 = 0;
    uStack_ba8 = 0;
    lVar5 = lStack_870;
    FUN_10b191350(lStack_870,&uStack_bc0);
    iVar3 = (int)lVar5;
    func_0x000107c27d78(&uStack_bc0);
  }
  else {
    iVar3 = 3;
  }
  FUN_10b11723c(&lStack_b90,lStack_870);
  func_0x00010b135b9c();
  func_0x00010b13526c();
  func_0x00010b134c50(&lStack_b90);
  FUN_10b129c64(alStack_b80[0],auStack_558);
  *(int *)(alStack_b80[0] + 0x308) = iVar3;
  func_0x000107c2798c(&lStack_b90);
  uVar10 = iVar3 == 0;
  func_0x00010b135b28();
  FUN_10b1ff1d0(auStack_bd0);
  lStack_b88 = *(long *)(lVar8 + 0x78);
  lStack_b90 = *(long *)(lVar8 + 0x70);
  if (*(long *)(lVar8 + 0x78) != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  plVar4 = alStack_b80;
  FUN_10b121c1c(plVar4,auStack_558);
  pcStack_a8 = FUN_10b129fdc;
  ppuStack_a0 = &PTR_FUN_110cbccc8;
  uStack_908 = iVar3 == 0;
  func_0x00010b1355f4();
  lVar6 = lStack_b88;
  lVar5 = lStack_b90;
  plVar4[1] = lStack_b88;
  *plVar4 = lVar5;
  if (lVar6 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_00 != 0);
  }
  func_0x00010b136330();
  FUN_10b121c1c();
  *(undefined1 *)(plVar4 + 0x51) = uStack_908;
  plStack_98 = plVar4;
  func_0x00010b1346dc();
  func_0x00010b134584();
  func_0x00010b133eb4(ppuStack_a0);
  func_0x00010b1172a0(&lStack_b90);
  func_0x00010b13558c();
  func_0x000107c27f18(&uStack_bb0);
  FUN_10b129c1c(&lStack_870);
LAB_10b12a3c0:
  func_0x00010b121af0(auStack_558);
  FUN_10b1213b8(&uStack_2d8);
  FUN_10b121398(auStack_158);
  func_0x00010b133dfc(uStack_48);
  if (!(bool)uVar10) {
    ___stack_chk_fail();
    func_0x000107c27d78(&uStack_bc0);
    func_0x000107c27f18(&uStack_bb0);
    do {
      FUN_10b129c1c(&lStack_870);
      func_0x00010b121af0(auStack_558);
      FUN_10b1213b8(&uStack_2d8);
      FUN_10b121398(auStack_158);
      func_0x00010b1343d0();
    } while( true );
  }
  return;
}



/* Entry: 10b12a524; end: 10b12a543;  */

void FUN_10b12a524(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b1174fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b12a544; end: 10b12a56f;  */

void FUN_10b12a544(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b12a570; end: 10b12a74f;  */

void FUN_10b12a570(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *extraout_x9;
  undefined8 uVar4;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  char cStack_118;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  byte bStack_60;
  undefined8 auStack_58 [3];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  lVar3 = *(long *)(param_2 + 0x20);
  uStack_40 = 0;
  uStack_38 = 0;
  if (*(char *)(lVar3 + 0x18) == '\x01') {
    FUN_10b152000(&uStack_e0);
  }
  else {
    if (*(char *)(lVar3 + 0x38) != '\x01') goto LAB_10b12a5d8;
    FUN_10b151eb0(&uStack_e0,lVar3 + 0x20);
  }
  func_0x00010880bd10(&uStack_40,&uStack_e0);
  func_0x00010529fde0(&uStack_e0);
LAB_10b12a5d8:
  func_0x00010b134a58(*(undefined8 *)(*(long *)(lVar1 + 0x18) + 0x20));
  (*extraout_x9)(auStack_58);
  FUN_10b17a83c(auStack_78,auStack_58[0]);
  if ((bStack_60 & 1) == 0) {
    func_0x00010b13552c();
    func_0x000105c3d6a8(&uStack_130,&UNK_10f72f5a1);
    uStack_d8 = uStack_88;
    uStack_e0 = uStack_90;
    func_0x00010b136434(uStack_80);
    uStack_c8 = 5;
    uStack_c0 = uStack_c0 & 0xffffffffffffff00;
    uStack_a8 = cStack_118 == '\x01';
    if ((bool)uStack_a8) {
      uStack_b8 = uStack_128;
      uStack_c0 = uStack_130;
      uStack_b0 = uStack_120;
      uStack_128 = 0;
      uStack_120 = 0;
      uStack_130 = 0;
    }
    func_0x0001052b8c70(param_1,&uStack_e0);
    func_0x0001052a03ac(&uStack_e0);
    func_0x00010b136098();
    func_0x00010b134c48();
  }
  else {
    uVar4 = *(undefined8 *)(lVar1 + 0x28);
    FUN_10b202630(&uStack_e0,auStack_78);
    FUN_10b202630(&uStack_130,uVar2);
    FUN_10b1f7560(param_1,uVar4,&uStack_e0,&uStack_130);
    func_0x00010b134cc8();
    func_0x00010b1354a4();
  }
  func_0x000107c279a4(auStack_78);
  func_0x0001052b60a4(auStack_58);
  func_0x00010529fde0(&uStack_40);
  return;
}



/* Entry: 10b12a750; end: 10b12a783;  */

void FUN_10b12a750(void)

{
  return;
}



/* Entry: 10b12a784; end: 10b12ab63;  */

void FUN_10b12a784(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined ****ppppuVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar9;
  ulong uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined1 auStack_400 [384];
  ulong uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  char cStack_268;
  ulong uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  ulong uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 uStack_1f8;
  undefined1 uStack_1f0;
  undefined ***pppuStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined1 auStack_198 [24];
  undefined1 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined1 uStack_160;
  undefined1 uStack_c0;
  undefined1 auStack_b8 [72];
  undefined1 uStack_70;
  undefined1 uStack_6c;
  undefined1 uStack_68;
  undefined1 uStack_64;
  undefined1 auStack_60 [64];
  undefined1 uStack_20;
  undefined1 auStack_18 [24];
  
  func_0x00010b134cf8();
  func_0x00010b135394();
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x00010b206f0c(&pppuStack_1e0,lVar2);
  uVar8 = uStack_1d8;
  ppppuVar6 = (undefined ****)pppuStack_1e0;
  if (-1 < (long)uStack_1d0) {
    uVar8 = uStack_1d0 >> 0x38;
    ppppuVar6 = &pppuStack_1e0;
  }
  FUN_10b205f70(auStack_18,ppppuVar6,uVar8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_1e0);
  uVar4 = *(undefined8 *)(*(long *)(lVar1 + 0x18) + 0x10);
  FUN_10b20edf0(uVar4,*(undefined4 *)(lVar2 + 0x18));
  plVar5 = *(long **)(lVar1 + 0x48);
  (**(code **)(*plVar5 + 0x88))(plVar5,uVar9);
  auStack_60[0] = 0;
  uStack_20 = 0;
  if (iVar3 != 0) {
    uStack_1d0 = 0;
    uStack_1d8 = 0;
    pppuStack_1e0 = (undefined ***)&PTR_FUN_110cfd560;
    uStack_1a0 = 0;
    puStack_1c8 = &DAT_11383d918;
    uStack_1c0 = 0;
    plStack_1b0 = (long *)0x0;
    uStack_1b8 = 0;
    ppppuVar6 = &pppuStack_1e0;
    FUN_10b117a1c();
    *(bool *)(ppppuVar6 + 2) = iVar3 == 1;
    puVar7 = auStack_60;
    func_0x00010b114b5c();
    FUN_10b114b98();
    FUN_10b4d1804(auStack_400,&pppuStack_1e0);
    uVar8 = *(ulong *)(puVar7 + 8);
    if ((uVar8 & 1) != 0) {
      uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
    }
    func_0x000107c3024c(puVar7 + 0x10,auStack_400,uVar8);
    func_0x00010b134aac();
    FUN_10b523f08(&pppuStack_1e0);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (&pppuStack_1e0,auStack_18);
  puStack_1c8 = (undefined *)0x100000001;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1a0 = *(undefined4 *)(lVar2 + 0x18);
  plStack_1b0 = plVar5;
  func_0x00010b135264(auStack_198);
  uStack_180 = 1;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_160 = 0;
  uStack_c0 = 0;
  uStack_178 = uVar4;
  FUN_10b12110c(auStack_b8,auStack_60);
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uVar8 = *(ulong *)(lVar1 + 0x28);
  func_0x00010b135c10(&uStack_230);
  FUN_10b202630(&uStack_280,auStack_18);
  func_0x00010b1213e8(auStack_400,&pppuStack_1e0);
  FUN_10b1f6d2c(uVar8,(undefined8 *)(lVar1 + 0x48),&uStack_230,&uStack_280,auStack_400,plVar5);
  func_0x00010b135594();
  func_0x00010b121e00(&uStack_280);
  func_0x00010b121e00(&uStack_230);
  uStack_230 = uStack_230 & 0xffffffffffffff00;
  uStack_1f0 = 0;
  if ((uVar8 & 1) == 0) {
    func_0x00010563bf78(&uStack_230);
    func_0x00010b136090();
    FUN_10b121e60(&uStack_280,&UNK_10f72f5bc);
    uStack_220 = uStack_410;
    uStack_228 = uStack_418;
    uStack_230 = uStack_420;
    uStack_418 = 0;
    uStack_410 = 0;
    uStack_420 = 0;
    uStack_218 = 4;
    uStack_210 = uStack_210 & 0xffffffffffffff00;
    uStack_1f8 = cStack_268 == '\x01';
    if ((bool)uStack_1f8) {
      uStack_208 = uStack_278;
      uStack_210 = uStack_280;
      uStack_200 = uStack_270;
      uStack_278 = 0;
      uStack_270 = 0;
      uStack_280 = 0;
    }
    func_0x000107c279a4(&uStack_280);
    func_0x00010b13458c();
    uStack_1f0 = 1;
  }
  func_0x000107c281f8(&uStack_420,auStack_18);
  func_0x0001052a07e8(&uStack_280,&uStack_230);
  FUN_10b1026dc();
  func_0x0001052a038c(&uStack_280);
  func_0x00010b136098();
  func_0x0001052a038c(&uStack_230);
  func_0x00010b1213b8(&pppuStack_1e0);
  FUN_10b121398(auStack_60);
  func_0x00010b135744();
  lVar2 = unaff_x19 + 0x20;
  if (*(char *)(unaff_x19 + 0x60) == '\0') {
    lVar2 = 0;
  }
  FUN_10b205d78(0xe,**(undefined8 **)(lVar1 + 0x18),lVar2,
                *(undefined4 *)(*(long *)(unaff_x20 + 0x18) + 0x18));
  return;
}



/* Entry: 10b12ab64; end: 10b12abab;  */

void FUN_10b12ab64(void)

{
  return;
}



/* Entry: 10b12abac; end: 10b12ac7f;  */

long FUN_10b12abac(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x000107c278c4();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar4 != plVar2) break;
        lVar3 = (long)(plVar5 + 2);
        func_0x000107c278d0(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 10b12ac80; end: 10b12acd7;  */

void FUN_10b12ac80(long param_1)

{
  func_0x000107c350ac();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10b12acd8; end: 10b12b1b3;  */

long * FUN_10b12acd8(long param_1)

{
  long *plVar1;
  undefined1 in_ZR;
  uint uVar2;
  undefined1 *puVar3;
  long *plVar4;
  byte extraout_w8;
  code *extraout_x8;
  ulong uVar5;
  long extraout_x9;
  int extraout_w10;
  ulong uVar6;
  long *extraout_x10;
  long *plVar7;
  int extraout_w13;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_890 [16];
  long *plStack_880;
  undefined1 auStack_878 [384];
  undefined1 auStack_6f8 [24];
  long alStack_6e0 [48];
  undefined1 auStack_560 [632];
  byte bStack_2e8;
  long *plStack_2e0;
  long *plStack_2d8;
  long lStack_2d0;
  code *pcStack_2c8;
  undefined **ppuStack_2c0;
  byte bStack_2b8;
  long *plStack_2b0;
  long lStack_2a8;
  undefined1 auStack_2a0 [40];
  undefined1 auStack_278 [8];
  byte bStack_270;
  undefined1 auStack_250 [16];
  byte bStack_240;
  byte bStack_50;
  undefined8 uStack_48;
  
  func_0x00010b133e38();
  lVar16 = *(long *)(param_1 + 0x10);
  lVar11 = *(long *)(lVar16 + 400);
  uVar13 = *(undefined8 *)(lVar11 + 0x28);
  FUN_10b121208(alStack_6e0,lVar16 + 0x10);
  FUN_10b1f6ad4(auStack_560,uVar13,alStack_6e0);
  plVar12 = alStack_6e0;
  FUN_10b1213b8();
  if ((bStack_2e8 & 1) == 0) {
    func_0x00010b135b28();
    func_0x00010b1ff218(&pcStack_2c8);
    lVar14 = *(long *)(pcStack_2c8 + 0x10);
    func_0x00010b1347b0();
    lVar15 = *plVar12;
    func_0x00010b1298c4(&pcStack_2c8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_6f8,auStack_560);
    FUN_10b121208(auStack_878,lVar16 + 0x10);
    FUN_10b114ba8(&pcStack_2c8,lVar11,auStack_878,auStack_560,lVar14 == lVar15);
    FUN_10b1213b8(auStack_878);
    bStack_2e8 = (bStack_50 ^ 1 | bStack_270 | bStack_240) & 1;
    in_ZR = lVar14 == lVar15;
    if ((((!(bool)in_ZR) && (((bStack_50 ^ 1) & 1) == 0)) && ((bStack_270 & 1) == 0)) &&
       ((bStack_240 & 1) == 0)) {
      func_0x00010b1352c0();
      func_0x00010b13547c();
      plVar12 = (long *)0x1;
      goto LAB_10b12b0d0;
    }
    uVar2 = (uint)*(undefined8 *)(lVar11 + 0x28);
    FUN_10b11d754();
    in_ZR = (uVar2 & bStack_50) == 1;
    if (((bool)in_ZR) && (((bStack_270 & 1) != 0 || ((bStack_240 & 1) != 0)))) {
      func_0x00010b134c50(auStack_890);
      puVar3 = auStack_6f8;
      func_0x000107c278d0(puVar3,&pcStack_2c8);
      plVar12 = plStack_880;
      if ((((ulong)puVar3 & 1) == 0) &&
         (plVar4 = plStack_880, FUN_10b12abac(plStack_880,auStack_6f8), plVar4 != (long *)0x0)) {
        uVar6 = plVar12[1];
        lVar11 = *plVar4;
        uVar5 = plVar4[1];
        uVar8 = uVar6 - 1;
        if ((uVar6 & uVar8) == 0) {
          uVar5 = uVar8 & uVar5;
        }
        else if (uVar6 <= uVar5) {
          uVar9 = 0;
          if (uVar6 != 0) {
            uVar9 = uVar5 / uVar6;
          }
          uVar5 = uVar5 - uVar9 * uVar6;
        }
        lVar14 = *plVar12;
        plVar1 = *(long **)(lVar14 + uVar5 * 8);
        do {
          plVar7 = plVar1;
          plVar1 = (long *)*plVar7;
        } while ((long *)*plVar7 != plVar4);
        plStack_2d8 = plVar12 + 2;
        in_ZR = true;
        if (plVar7 == plStack_2d8) {
LAB_10b12af20:
          if (lVar11 == 0) {
LAB_10b12af54:
            *(undefined8 *)(lVar14 + uVar5 * 8) = 0;
            lVar11 = *plVar4;
            goto LAB_10b12af5c;
          }
          uVar9 = *(ulong *)(lVar11 + 8);
          if ((uVar6 & uVar8) == 0) {
            uVar10 = uVar9 & uVar8;
          }
          else {
            uVar10 = uVar9;
            if (uVar6 <= uVar9) {
              uVar10 = 0;
              if (uVar6 != 0) {
                uVar10 = uVar9 / uVar6;
              }
              uVar10 = uVar9 - uVar10 * uVar6;
            }
          }
          in_ZR = uVar10 == uVar5;
          if (!(bool)in_ZR) goto LAB_10b12af54;
LAB_10b12af64:
          if ((uVar6 & uVar8) == 0) {
            uVar9 = uVar9 & uVar8;
          }
          else if (uVar6 <= uVar9) {
            uVar8 = 0;
            if (uVar6 != 0) {
              uVar8 = uVar9 / uVar6;
            }
            uVar9 = uVar9 - uVar8 * uVar6;
          }
          in_ZR = uVar9 == uVar5;
          if (!(bool)in_ZR) {
            *(long **)(lVar14 + uVar9 * 8) = plVar7;
            lVar11 = *plVar4;
          }
        }
        else {
          uVar9 = plVar7[1];
          if ((uVar6 & uVar8) == 0) {
            uVar9 = uVar9 & uVar8;
          }
          else if (uVar6 <= uVar9) {
            uVar10 = 0;
            if (uVar6 != 0) {
              uVar10 = uVar9 / uVar6;
            }
            uVar9 = uVar9 - uVar10 * uVar6;
          }
          in_ZR = uVar9 == uVar5;
          if (!(bool)in_ZR) goto LAB_10b12af20;
LAB_10b12af5c:
          if (lVar11 != 0) {
            uVar9 = *(ulong *)(lVar11 + 8);
            goto LAB_10b12af64;
          }
        }
        *plVar7 = lVar11;
        *plVar4 = 0;
        plVar12[3] = plVar12[3] + -1;
        lStack_2d0 = 1;
        plStack_2e0 = plVar4;
        FUN_10b129f9c(&plStack_2e0);
      }
      FUN_10b12abac(plStack_880,&pcStack_2c8);
      if (plStack_880 != (long *)0x0) {
        if ((int)plStack_880[0x66] != 3) {
          *(undefined4 *)(plStack_880 + 0x66) = 1;
        }
        in_ZR = (char)plStack_880[0x65] == '\x01';
        if ((bool)in_ZR) {
          func_0x00010b0faf64(plStack_880 + 8);
          *(undefined1 *)(plStack_880 + 0x65) = 0;
        }
        plStack_2d8 = (long *)0x0;
        plStack_2e0 = (long *)0x0;
        func_0x00010b1200c4(plStack_880 + 5,&plStack_2e0);
        func_0x00010b12ac80(&plStack_2e0);
      }
      func_0x00010b135308();
    }
    func_0x00010b1352c0();
    func_0x00010b13547c();
  }
  else {
    uVar13 = **(undefined8 **)(lVar11 + 0x18);
    func_0x00010b1341a0(&pcStack_2c8);
    FUN_10b12983c(auStack_2a0,*(undefined4 *)(lVar16 + 0x1b0));
    func_0x00010b12aca4(auStack_278,*(undefined4 *)(lVar16 + 0x88));
    func_0x00010b1349dc(auStack_250);
    func_0x00010b134cb0(auStack_878,&pcStack_2c8);
    func_0x00010b134528(uVar13,0xf,auStack_878);
    func_0x00010b134a8c();
    do {
      func_0x00010b13501c();
      func_0x00010b135388();
    } while (!(bool)in_ZR);
  }
  func_0x00010b135b28();
  FUN_10b1ff1d0(auStack_6f8);
  plStack_2e0 = (long *)CONCAT71(plStack_2e0._1_7_,bStack_2e8);
  plStack_2b0 = *(long **)(lVar16 + 0x1b8);
  lStack_2d0 = *(long *)(lVar16 + 0x1c0);
  lStack_2a8 = 0;
  plStack_2d8 = plStack_2b0;
  bStack_2b8 = bStack_2e8;
  if (lStack_2d0 != 0) {
    do {
      func_0x00010b1343e8();
      lStack_2a8 = extraout_x9;
      plStack_2b0 = extraout_x10;
      bStack_2b8 = extraout_w8;
    } while (extraout_w13 != 0);
  }
  pcStack_2c8 = FUN_10b12b1b4;
  ppuStack_2c0 = &PTR_DAT_110cbcd70;
  if (lStack_2a8 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  func_0x00010b1346b0();
  (*extraout_x8)();
  func_0x00010b133eb4(ppuStack_2c0);
  func_0x00010b0f7ee8(&plStack_2d8);
  FUN_10b127ebc(auStack_6f8);
  plVar12 = (long *)0x0;
LAB_10b12b0d0:
  func_0x00010b121af0(auStack_560);
  func_0x00010b133dfc(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b1352c0();
    func_0x00010b13547c();
    puVar3 = auStack_560;
    func_0x00010b121af0();
    func_0x00010b1343d0();
    plVar12 = *(long **)(puVar3 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010b134304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar12 + 0x10))(plVar12,puVar3[0x10]);
    return plVar12;
  }
  return plVar12;
}



/* Entry: 10b12b1b4; end: 10b12b203;  */

void FUN_10b12b1b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b134304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))
            (*(long **)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x10));
  return;
}



/* Entry: 10b12b204; end: 10b12b223;  */

void FUN_10b12b204(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b118450();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b12b224; end: 10b12b25f;  */

void FUN_10b12b224(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b12b260; end: 10b12b27f;  */

void FUN_10b12b260(void)

{
  func_0x00010b13502c();
  FUN_10b12b280();
  func_0x00010b134f40();
  return;
}



/* Entry: 10b12b280; end: 10b12b2ab;  */

void FUN_10b12b280(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x186186186186187) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xa8);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110cbd7d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b12b2ac; end: 10b12b2af;  */

void FUN_10b12b2ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbd7d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b12b2b0; end: 10b12b2c3;  */

void FUN_10b12b2b0(void)

{
  func_0x00010b12b2cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


