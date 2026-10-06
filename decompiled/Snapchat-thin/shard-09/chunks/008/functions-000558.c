/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10725ab14; end: 10725ab9f;  */

void FUN_10725ab14(long param_1)

{
  func_0x00010725c0a0();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10725aba0; end: 10725ac67;  */

void FUN_10725aba0(double param_1,double param_2,double param_3,double param_4,double *param_5)

{
  double *pdVar1;
  double *extraout_x8;
  double dVar2;
  double dVar3;
  double dStack_50;
  double dStack_48;
  
  *param_5 = param_1;
  param_5[1] = param_2;
  param_5[2] = param_3;
  param_5[3] = param_4;
  if (NAN(param_1)) {
    func_0x00010725c3a8();
    FUN_107246610();
  }
  else if (NAN(param_2)) {
    func_0x00010725c3a8();
    FUN_107246610();
  }
  else if (NAN(param_3)) {
    func_0x00010725c3a8();
    FUN_107246610();
  }
  else {
    if (!NAN(param_4)) {
      return;
    }
    func_0x00010725c3a8();
    FUN_107246610();
  }
  pdVar1 = (double *)PTR___ZTISt12domain_error_110352230;
  ___cxa_throw(param_5,PTR___ZTISt12domain_error_110352230,PTR___ZNSt12domain_errorD1Ev_110346160);
  func_0x00010725bed0();
  ___cxa_free_exception();
  func_0x00010725be3c();
  dVar3 = param_5[1];
  dVar2 = *param_5;
  extraout_x8[1] = dVar3;
  *extraout_x8 = dVar2;
  extraout_x8[3] = dVar3;
  extraout_x8[2] = dVar2;
  *(undefined1 *)(extraout_x8 + 4) = 1;
  dVar2 = *extraout_x8;
  if (*pdVar1 <= *extraout_x8) {
    dVar2 = *pdVar1;
  }
  dVar3 = extraout_x8[1];
  if (pdVar1[1] <= extraout_x8[1]) {
    dVar3 = pdVar1[1];
  }
  func_0x00010725bfa8(dVar2,dVar3);
  extraout_x8[1] = dStack_48;
  *extraout_x8 = dStack_50;
  dVar2 = extraout_x8[2];
  if (extraout_x8[2] <= *pdVar1) {
    dVar2 = *pdVar1;
  }
  dVar3 = extraout_x8[3];
  if (extraout_x8[3] <= pdVar1[1]) {
    dVar3 = pdVar1[1];
  }
  func_0x00010725bfa8(dVar2,dVar3);
  extraout_x8[3] = dStack_48;
  extraout_x8[2] = dStack_50;
  return;
}



/* Entry: 10725ac68; end: 10725ac7f;  */

void FUN_10725ac68(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dStack_30;
  double dStack_28;
  
  dVar2 = param_2[1];
  dVar1 = *param_2;
  param_1[1] = dVar2;
  *param_1 = dVar1;
  param_1[3] = dVar2;
  param_1[2] = dVar1;
  *(undefined1 *)(param_1 + 4) = 1;
  dVar1 = *param_1;
  if (*param_3 <= *param_1) {
    dVar1 = *param_3;
  }
  dVar2 = param_1[1];
  if (param_3[1] <= param_1[1]) {
    dVar2 = param_3[1];
  }
  func_0x00010725bfa8(dVar1,dVar2);
  param_1[1] = dStack_28;
  *param_1 = dStack_30;
  dVar1 = param_1[2];
  if (param_1[2] <= *param_3) {
    dVar1 = *param_3;
  }
  dVar2 = param_1[3];
  if (param_1[3] <= param_3[1]) {
    dVar2 = param_3[1];
  }
  func_0x00010725bfa8(dVar1,dVar2);
  param_1[3] = dStack_28;
  param_1[2] = dStack_30;
  return;
}



/* Entry: 10725ac80; end: 10725ac93;  */

void FUN_10725ac80(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&UNK_10f406a17;
  func_0x000104bd47e8();
  lVar2 = param_2[1] - (plVar1[1] - *plVar1);
  _memcpy(lVar2);
  param_2[1] = lVar2;
  lVar2 = *plVar1;
  plVar1[1] = lVar2;
  *plVar1 = param_2[1];
  param_2[1] = lVar2;
  lVar2 = plVar1[1];
  plVar1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = plVar1[2];
  plVar1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10725ac94; end: 10725ad0b;  */

void FUN_10725ac94(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] - (param_1[1] - *param_1);
  _memcpy(lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10725ad0c; end: 10725ad77;  */

long * FUN_10725ad0c(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010725ad54();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 10725ad78; end: 10725ad93;  */

long * FUN_10725ad78(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_2 << 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_10725adc0();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10725ad94; end: 10725adbf;  */

long * FUN_10725ad94(long *param_1)

{
  FUN_10725adc0();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10725adc0; end: 10725ade3;  */

void FUN_10725adc0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x10;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10725ade4; end: 10725ae27;  */

undefined8 * FUN_10725ade4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar2 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar2;
    puVar1 = puVar1 + 2;
  }
  else {
    puVar1 = param_1;
    FUN_10725ae28();
  }
  param_1[1] = puVar1;
  return puVar1 + -2;
}



/* Entry: 10725ae28; end: 10725aeb3;  */

long FUN_10725ae28(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  undefined8 *puStack_38;
  
  plVar1 = param_1;
  FUN_10725aeb4(param_1,(param_1[1] - *param_1 >> 4) + 1);
  FUN_10725ad0c(auStack_48,plVar1,param_1[1] - *param_1 >> 4,param_1 + 2);
  uVar3 = *param_2;
  puStack_38[1] = param_2[1];
  *puStack_38 = uVar3;
  puStack_38 = puStack_38 + 2;
  func_0x00010725c774();
  lVar2 = param_1[1];
  func_0x00010725c430();
  return lVar2;
}



/* Entry: 10725aeb4; end: 10725aef3;  */

long * FUN_10725aeb4(long *param_1,long *param_2)

{
  long *plVar1;
  long *plStack_38;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 3);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0xfffffffffffffff;
    }
    return plVar1;
  }
  FUN_10725ac80();
  plStack_38 = param_1;
  FUN_10725af20(&plStack_38);
  return param_1;
}



/* Entry: 10725aef4; end: 10725af1f;  */

undefined8 FUN_10725aef4(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_10725af20(&uStack_28);
  return param_1;
}



/* Entry: 10725af20; end: 10725af37;  */

void FUN_10725af20(undefined8 *param_1)

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



/* Entry: 10725af38; end: 10725af57;  */

void FUN_10725af38(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_10725af58();
  }
  return;
}



/* Entry: 10725af58; end: 10725b00b;  */

void FUN_10725af58(long param_1)

{
  func_0x00010725c0a0();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10725b00c; end: 10725b00f;  */

void FUN_10725b00c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110995a30;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10725b010; end: 10725b023;  */

void FUN_10725b010(void)

{
  FUN_10725b268();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10725b024; end: 10725b033;  */

void FUN_10725b024(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010725b02c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10725b034; end: 10725b057;  */

void FUN_10725b034(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_10725b0e4(&uStack_11,param_1);
  return;
}



/* Entry: 10725b058; end: 10725b05b;  */

undefined8 * FUN_10725b058(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110995a80;
  FUN_10725b238(param_1 + 9);
  FUN_10724b54c(param_1 + 6);
  *param_1 = &PTR_DAT_110995b00;
  func_0x00010725b1d4(param_1 + 3);
  return param_1;
}



/* Entry: 10725b05c; end: 10725b06f;  */

void FUN_10725b05c(void)

{
  func_0x00010725b1f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10725b070; end: 10725b09b;  */

bool FUN_10725b070(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010054f924();
  return *(long *)(param_1 + 0x10) == lVar1;
}



/* Entry: 10725b09c; end: 10725b0e3;  */

undefined8 FUN_10725b09c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10725b0e4; end: 10725b167;  */

undefined8 * FUN_10725b0e4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 auStack_40 [2];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  puVar3 = auStack_40;
  func_0x00010725bc5c();
  uStack_28 = extraout_x8;
  FUN_10724b48c(auStack_40,1);
  FUN_10725b168(lStack_30,param_3);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  FUN_10724b570();
  func_0x00010725bb10(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  FUN_10724b570();
  func_0x00010725be74();
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_110995268;
  puVar3[1] = 0;
  func_0x0001073ad8c0(puVar3 + 3);
  return puVar3;
}



/* Entry: 10725b168; end: 10725b1a7;  */

undefined8 * FUN_10725b168(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110995268;
  param_1[1] = 0;
  func_0x0001073ad8c0(param_1 + 3);
  return param_1;
}



/* Entry: 10725b1a8; end: 10725b237;  */

undefined8 * FUN_10725b1a8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110995b00;
  func_0x00010725b1d4(param_1 + 3);
  return param_1;
}



/* Entry: 10725b238; end: 10725b267;  */

void FUN_10725b238(void)

{
  func_0x00010725c0a0();
  func_0x0001073ada2c();
  return;
}



/* Entry: 10725b268; end: 10725b277;  */

void FUN_10725b268(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110995a30;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10725b278; end: 10725b29b;  */

void FUN_10725b278(long param_1)

{
  func_0x00010725c0a0();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10725b29c; end: 10725b29f;  */

undefined8 * FUN_10725b29c(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110995b40;
  if (*(char *)(param_1 + 7) == '\x01') {
    func_0x000107898014(param_1 + 6);
  }
  FUN_10725ab14(param_1 + 4);
  _objc_destroyWeak(param_1 + 2);
  lVar1 = param_1[1];
  param_1[1] = 0;
  if (lVar1 != 0) {
    func_0x00010725bcdc();
  }
  return param_1;
}



/* Entry: 10725b2a0; end: 10725b2b3;  */

void FUN_10725b2a0(void)

{
  FUN_10725b514();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10725b2b4; end: 10725b2e3;  */

void FUN_10725b2b4(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  if (plVar1 != (long *)0x0) {
    *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010725be98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}



/* Entry: 10725b2e4; end: 10725b35b;  */

void FUN_10725b2e4(long param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  uVar3 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  func_0x00010725c720();
  if (*(char *)(param_1 + 0x38) != '\x01') {
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010c1cbe80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  lVar1 = *(long *)(param_1 + 0x30);
  uVar2 = lVar1 + 0x20;
  func_0x000107897ee0(uVar2,5);
  if ((uVar2 & 1) != 0) {
    return;
  }
  _CFRunLoopSourceSignal(*(undefined8 *)(lVar1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdba760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFRunLoopWakeUp_11034a820)(*(undefined8 *)(lVar1 + 0x28));
  return;
}



/* Entry: 10725b35c; end: 10725b38b;  */

void FUN_10725b35c(long param_1)

{
  if (*(long **)(param_1 + 8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010725b36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 8) + 0xc0))();
    return;
  }
  return;
}



/* Entry: 10725b38c; end: 10725b3ef;  */

void FUN_10725b38c(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_28;
  
  plVar2 = *(long **)(param_1 + 8);
  if (plVar2 != (long *)0x0) {
    lStack_28 = *param_2;
    *param_2 = 0;
    (**(code **)(*plVar2 + 0x118))(plVar2,&lStack_28);
    lVar1 = lStack_28;
    lStack_28 = 0;
    if (lVar1 != 0) {
      func_0x00010725bcdc();
    }
  }
  return;
}



/* Entry: 10725b3f0; end: 10725b50f;  */

void FUN_10725b3f0(long param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined1 auStack_a8 [64];
  undefined1 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [32];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = *(long **)(param_1 + 8);
  if (plVar1 == (long *)0x0) {
    if (param_2[4] != 0) {
      auStack_b8[0] = 3;
      uStack_b0 = *param_2;
      plVar1 = (long *)auStack_b8;
      auStack_a8[0] = 0;
      uStack_68 = 0;
      func_0x00010725b570(param_2 + 1,auStack_b8);
      func_0x00010725b590(auStack_a8);
    }
  }
  else {
    FUN_10725b620(auStack_60,param_2);
    (**(code **)(*plVar1 + 0x170))(plVar1,auStack_60);
    FUN_10725b6a4(auStack_58);
    in_ZR = *(char *)(param_1 + 0x38) == '\x01';
    if ((bool)in_ZR) {
      func_0x000107897e94(param_1 + 0x30);
    }
    else {
      _objc_loadWeakRetained(param_1 + 0x10);
      func_0x00010c1cbe80();
      func_0x00010725be1c();
    }
  }
  FUN_10725bb10(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010725b590(plVar1 + 2);
  func_0x00010725be74();
  return;
}



/* Entry: 10725b510; end: 10725b513;  */

void FUN_10725b510(void)

{
  return;
}



/* Entry: 10725b514; end: 10725b56f;  */

undefined8 * FUN_10725b514(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110995b40;
  if (*(char *)(param_1 + 7) == '\x01') {
    func_0x000107898014(param_1 + 6);
  }
  FUN_10725ab14(param_1 + 4);
  _objc_destroyWeak(param_1 + 2);
  lVar1 = param_1[1];
  param_1[1] = 0;
  if (lVar1 != 0) {
    func_0x00010725bcdc();
  }
  return param_1;
}



/* Entry: 10725b570; end: 10725b5af;  */

void FUN_10725b570(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010725b580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  if ((char)plVar1[8] == '\x01') {
    FUN_10725b5b0();
  }
  return;
}



/* Entry: 10725b5b0; end: 10725b607;  */

long FUN_10725b5b0(long param_1)

{
  func_0x00010725b5dc(param_1 + 0x28);
  FUN_10724e5b8(param_1 + 0x20);
  return param_1;
}



/* Entry: 10725b608; end: 10725b61f;  */

void FUN_10725b608(undefined8 *param_1)

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



/* Entry: 10725b620; end: 10725b647;  */

undefined8 * FUN_10725b620(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_10725b648(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 10725b648; end: 10725b6a3;  */

long FUN_10725b648(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    (**(code **)(**(long **)(param_2 + 0x18) + 0x18))(*(long **)(param_2 + 0x18),param_1);
  }
  else {
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 10725b6a4; end: 10725b787;  */

long FUN_10725b6a4(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) == param_1) {
    uVar1 = 0x20;
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) {
      return param_1;
    }
    uVar1 = 0x28;
  }
  func_0x00010725c6a4(uVar1);
  return param_1;
}



/* Entry: 10725b788; end: 10725b7af;  */

void FUN_10725b788(long param_1,undefined8 param_2)

{
  func_0x00010725bf7c(&PTR_DAT_110995bc8,param_2,*(undefined8 *)(param_1 + 8));
  func_0x00010725c8a4();
  return;
}



/* Entry: 10725b7b0; end: 10725b7d7;  */

void FUN_10725b7b0(undefined8 param_1)

{
  func_0x00010725c850();
  func_0x00010725c450(param_1,&PTR_DAT_110995c28);
  func_0x00010725c1a4();
  return;
}



/* Entry: 10725b7d8; end: 10725b7e3;  */

undefined ** FUN_10725b7d8(void)

{
  return &PTR_DAT_110995c28;
}



/* Entry: 10725b7e4; end: 10725b86b;  */

void FUN_10725b7e4(void)

{
  func_0x00010725bf7c(&PTR_DAT_110995bc8);
  func_0x00010725c8a4();
  return;
}



/* Entry: 10725b86c; end: 10725b893;  */

void FUN_10725b86c(long param_1,undefined8 param_2)

{
  func_0x00010725bf7c(&PTR_DAT_110995c48,param_2,*(undefined8 *)(param_1 + 8));
  func_0x00010725c8a4();
  return;
}



/* Entry: 10725b894; end: 10725b8bb;  */

void FUN_10725b894(undefined8 param_1)

{
  func_0x00010725c850();
  func_0x00010725c450(param_1,&PTR_DAT_110995ca8);
  func_0x00010725c1a4();
  return;
}



/* Entry: 10725b8bc; end: 10725b8c7;  */

undefined ** FUN_10725b8bc(void)

{
  return &PTR_DAT_110995ca8;
}



/* Entry: 10725b8c8; end: 10725b94f;  */

void FUN_10725b8c8(void)

{
  func_0x00010725bf7c(&PTR_DAT_110995c48);
  func_0x00010725c8a4();
  return;
}



/* Entry: 10725b950; end: 10725b977;  */

void FUN_10725b950(long param_1,undefined8 param_2)

{
  func_0x00010725bf7c(&PTR_DAT_110995cc8,param_2,*(undefined8 *)(param_1 + 8));
  func_0x00010725c8a4();
  return;
}



/* Entry: 10725b978; end: 10725b99f;  */

void FUN_10725b978(undefined8 param_1)

{
  func_0x00010725c850();
  func_0x00010725c450(param_1,&PTR_DAT_110995d28);
  func_0x00010725c1a4();
  return;
}



/* Entry: 10725b9a0; end: 10725b9ab;  */

undefined ** FUN_10725b9a0(void)

{
  return &PTR_DAT_110995d28;
}



/* Entry: 10725b9ac; end: 10725ba33;  */

void FUN_10725b9ac(void)

{
  func_0x00010725bf7c(&PTR_DAT_110995cc8);
  func_0x00010725c8a4();
  return;
}



/* Entry: 10725ba34; end: 10725ba5b;  */

void FUN_10725ba34(long param_1,undefined8 param_2)

{
  func_0x00010725bf7c(&PTR_DAT_110995d48,param_2,*(undefined8 *)(param_1 + 8));
  func_0x00010725c8a4();
  return;
}



/* Entry: 10725ba5c; end: 10725ba83;  */

void FUN_10725ba5c(undefined8 param_1)

{
  func_0x00010725c850();
  func_0x00010725c450(param_1,&PTR_DAT_110995da8);
  func_0x00010725c1a4();
  return;
}



/* Entry: 10725ba84; end: 10725ba8f;  */

undefined ** FUN_10725ba84(void)

{
  return &PTR_DAT_110995da8;
}



/* Entry: 10725ba90; end: 10725badb;  */

void FUN_10725ba90(void)

{
  func_0x00010725bf7c(&PTR_DAT_110995d48);
  func_0x00010725c8a4();
  return;
}



/* Entry: 10725badc; end: 10725baf3;  */

void FUN_10725badc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_10725af58(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10725baf4; end: 10725bb0f;  */

void FUN_10725baf4(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10725af58(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10725bb10; end: 10725c903;  */

void FUN_10725bb10(void)

{
  return;
}



/* Entry: 10725c904; end: 10725c95b; -[SCDirectionalPanGestureRecognizer initWithDirection:target:action:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10725c904(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f8d58;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithTarget_action__1125f1c48,param_4,param_5);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112766078) = param_3;
  }
  return;
}



/* Entry: 10725c95c; end: 10725ca7f; -[SCDirectionalPanGestureRecognizer touchesMoved:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10725c95c(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  long lStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f8d58;
  lStack_50 = param_3;
  _objc_msgSendSuper2(&lStack_50,PTR_s_touchesMoved_withEvent__11252ca58,param_5,param_6);
  lVar4 = param_3;
  func_0x00010c252440();
  if (lVar4 == 1) {
    lVar4 = param_3;
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297a00(param_3);
    _objc_release(lVar4);
    param_1 = ABS(param_1);
    param_2 = ABS(param_2);
    if (*(long *)(param_3 + _DAT_112766078) == 0) {
      if (param_1 <= param_2) goto LAB_10725ca30;
    }
    else {
      bVar1 = false;
      bVar2 = true;
      bVar3 = false;
      if (*(long *)(param_3 + _DAT_112766078) == 1) {
        bVar1 = false;
        bVar2 = false;
        bVar3 = true;
        if (!NAN(param_2) && !NAN(param_1)) {
          bVar1 = param_2 < param_1;
          bVar2 = param_2 == param_1;
          bVar3 = false;
        }
      }
      if (bVar2 || bVar1 != bVar3) goto LAB_10725ca30;
    }
    func_0x00010c209fc0(param_3);
  }
LAB_10725ca30:
  _objc_release(param_6);
  func_0x00010725cb2c();
  return;
}



/* Entry: 10725ca80; end: 10725cb0b; -[SCDirectionalPanGestureRecognizer shouldReceiveEvent:] */

undefined1 * FUN_10725ca80(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar2 = &uStack_30;
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bfb2160();
  if ((int)uVar1 == 0) {
    puStack_28 = PTR_PTR_1126f8d58;
    uStack_30 = param_1;
    _objc_msgSendSuper2(&uStack_30,PTR_s_shouldReceiveEvent__112537c78,param_3);
  }
  else {
    func_0x00010c27dd80(param_3);
    puVar2 = (undefined8 *)(ulong)(param_3 == 10);
  }
  func_0x00010725cb2c();
  return (undefined1 *)puVar2;
}



/* Entry: 10725cb0c; end: 10725cb1b; -[SCDirectionalPanGestureRecognizer fixTiltForSPS] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10725cb0c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276607c);
}



/* Entry: 10725cb1c; end: 10725cb33; -[SCDirectionalPanGestureRecognizer setFixTiltForSPS:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10725cb1c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276607c) = param_3;
  return;
}



/* Entry: 10725cb34; end: 10725cb6b; +[MGLCameraManagerUtils toLatLngDouble:] */

void FUN_10725cb34(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc(PTR_PTR_1126c5ba8);
  func_0x00010c0219a0(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10725cb6c; end: 10725cba3; +[MGLCameraManagerUtils toPoint2dDouble:] */

void FUN_10725cb6c(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc(PTR_PTR_1126c6030);
  func_0x00010c063600(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10725cba4; end: 10725cbf3; +[MGLCameraManagerUtils toEdgeInsetsDouble:] */

void FUN_10725cba4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_alloc(PTR_PTR_1126d55f0);
  func_0x00010c0541a0(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10725cbf4; end: 10725cc17; +[MGLCameraManagerUtils cameraOptions] */

void FUN_10725cbf4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010725d1c8();
  _objc_alloc();
  func_0x00010725d190(param_1,param_2,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10725cc18; end: 10725cc53; +[MGLCameraManagerUtils cameraOptionsWithZoom:] */

void FUN_10725cc18(void)

{
  func_0x00010725d15c();
  func_0x00010725d1c8();
  _objc_alloc();
  func_0x00010725d190();
  func_0x00010725d148();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10725cc54; end: 10725ccab; +[MGLCameraManagerUtils cameraOptionsWithZoom:bearing:] */

void FUN_10725cc54(undefined8 param_1)

{
  func_0x00010725d15c();
  func_0x00010725d1a4();
  func_0x00010725d1c8();
  _objc_alloc();
  func_0x00010725d190();
  func_0x00010725d168();
  func_0x00010725d154();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10725ccac; end: 10725cd23; +[MGLCameraManagerUtils cameraOptionsWithZoom:bearing:pitch:] */

void FUN_10725ccac(void)

{
  undefined8 in_x4;
  
  func_0x00010725d15c();
  func_0x00010725d1a4();
  _objc_retain(in_x4);
  func_0x00010725d1c8();
  _objc_alloc();
  func_0x00010c063760();
  func_0x00010725d178();
  func_0x00010725d168();
  func_0x00010725d154();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(in_x4);
  return;
}



/* Entry: 10725cd24; end: 10725cdbf; +[MGLCameraManagerUtils cameraOptionsWithZoom:bearing:pitch:layerGate:] */

void FUN_10725cd24(void)

{
  undefined8 in_x4;
  undefined8 in_x5;
  
  func_0x00010725d15c();
  func_0x00010725d1a4();
  _objc_retain(in_x4);
  _objc_retain(in_x5);
  func_0x00010725d1c8();
  _objc_alloc();
  func_0x00010c063760();
  func_0x00010725d170();
  func_0x00010725d178();
  func_0x00010725d168();
  func_0x00010725d154();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(in_x5);
  return;
}



/* Entry: 10725cdc0; end: 10725cdf7; +[MGLCameraManagerUtils animationOptions:] */

void FUN_10725cdc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010725d1bc();
  _objc_alloc();
  func_0x00010725d180(param_1,param_2,param_3,&PTR__OBJC_CLASS___NSConstantDoubleNumber_111184f30);
  func_0x00010c02c960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10725cdf8; end: 10725ce73; +[MGLCameraManagerUtils animationOptions:duration:] */

void FUN_10725cdf8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x00010725d1bc();
  _objc_alloc();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1 * 1000.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010725d180(param_2,param_3,param_4,puVar1);
  func_0x00010c02c960();
  func_0x00010725d148();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 10725ce74; end: 10725cebf; +[MGLCameraManagerUtils animationOptions:completionHandler:] */

void FUN_10725ce74(void)

{
  func_0x00010725d1dc();
  func_0x00010725d1bc();
  _objc_alloc();
  func_0x00010725d180();
  func_0x00010c02c960();
  func_0x00010725d148();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10725cec0; end: 10725cf57; +[MGLCameraManagerUtils animationOptions:duration:completionHandler:] */

void FUN_10725cec0(double param_1,undefined8 param_2)

{
  func_0x00010725d1dc();
  func_0x00010725d1bc();
  _objc_alloc();
  func_0x00010c0df720(param_1 * 1000.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010725d180(param_2);
  func_0x00010c02c960();
  func_0x00010725d178();
  func_0x00010725d154();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10725cf58; end: 10725d023; +[MGLCameraManagerUtils animationOptions:duration:easing:completionHandler:] */

void FUN_10725cf58(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = param_5;
  _objc_retain(param_5);
  func_0x00010725d1a4();
  func_0x00010725d1bc();
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1 * 1000.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02c960(uVar1,param_3,param_4,puVar2,0,0,param_5,param_6);
  func_0x00010725d170();
  func_0x00010725d168();
  func_0x00010725d154();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10725d024; end: 10725d147; +[MGLCameraManagerUtils toUnitBezierDouble:] */

void FUN_10725d024(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uStack_48 = 0x3f8000003f800000;
  uStack_40 = 0;
  func_0x00010bfc4180(param_3,param_2,1,&uStack_40);
  func_0x00010bfc4180(param_3,param_2,2,&uStack_48);
  puVar1 = PTR_PTR_1126c6038;
  _objc_alloc(PTR_PTR_1126c6038);
  puVar2 = PTR_PTR_1126c6030;
  _objc_alloc(PTR_PTR_1126c6030);
  func_0x00010c063600((double)(float)uStack_40,(double)uStack_40._4_4_);
  puVar3 = PTR_PTR_1126c6030;
  _objc_alloc(PTR_PTR_1126c6030);
  func_0x00010c063600((double)(float)uStack_48,(double)uStack_48._4_4_);
  func_0x00010c032b60(puVar1,param_2,puVar2,puVar3);
  func_0x00010725d170();
  func_0x00010725d168();
  func_0x00010725d154();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  func_0x00010725d170();
  func_0x00010725d168();
  func_0x00010725d154();
  func_0x00010725d1f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10725d148; end: 10725d1fb;  */

void FUN_10725d148(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10725d1fc; end: 10725d297; -[MGLCameraManagerCompletionHandlerWithBlock initWithBlock:] */

undefined1 * FUN_10725d1fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f8d60;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  func_0x00010725d324();
  return (undefined1 *)puVar1;
}



/* Entry: 10725d298; end: 10725d307; -[MGLCameraManagerCompletionHandlerWithBlock onComplete] */

void FUN_10725d298(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf1d1e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010bf1d1e0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10725d308; end: 10725d30f; -[MGLCameraManagerCompletionHandlerWithBlock block] */

undefined8 FUN_10725d308(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10725d310; end: 10725d317; -[MGLCameraManagerCompletionHandlerWithBlock setBlock:] */

void FUN_10725d310(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10725d318; end: 10725d32b; -[MGLCameraManagerCompletionHandlerWithBlock .cxx_destruct] */

void FUN_10725d318(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10725d32c; end: 10725d71f;  */

long * FUN_10725d32c(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5,
                    long *param_6,long *param_7,long *param_8,long *param_9,long param_10)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  long *plVar2;
  int extraout_w10;
  long lVar3;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 *puStack_78;
  undefined8 uStack_68;
  
  func_0x000107274388();
  uStack_68 = extraout_x8;
  func_0x0001073af260();
  FUN_10725b034(param_1);
  param_1[2] = (long)param_1;
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  param_1[4] = plVar2[1];
  param_1[3] = lVar3;
  if (plVar2[1] != 0) {
    do {
      func_0x000107274880();
    } while (extraout_w10 != 0);
  }
  func_0x0001073af27c(&lStack_90,0,0);
  param_1[6] = lStack_88;
  param_1[5] = lStack_90;
  lStack_88 = 0;
  lStack_90 = 0;
  plVar2 = &lStack_90;
  func_0x00010724b8b8();
  lVar3 = *param_2;
  param_1[8] = param_2[1];
  param_1[7] = lVar3;
  param_2[1] = 0;
  *param_2 = 0;
  lVar3 = *param_3;
  param_1[10] = param_3[1];
  param_1[9] = lVar3;
  param_3[1] = 0;
  *param_3 = 0;
  lVar3 = *param_4;
  param_1[0xc] = param_4[1];
  param_1[0xb] = lVar3;
  param_4[1] = 0;
  *param_4 = 0;
  lVar3 = *param_5;
  param_1[0xe] = param_5[1];
  param_1[0xd] = lVar3;
  param_5[1] = 0;
  *param_5 = 0;
  lVar3 = *param_6;
  param_1[0x10] = param_6[1];
  param_1[0xf] = lVar3;
  param_6[1] = 0;
  *param_6 = 0;
  lVar3 = *param_7;
  param_1[0x12] = param_7[1];
  param_1[0x11] = lVar3;
  param_7[1] = 0;
  *param_7 = 0;
  lVar3 = *param_8;
  param_1[0x14] = param_8[1];
  param_1[0x13] = lVar3;
  param_8[1] = 0;
  *param_8 = 0;
  lVar3 = *param_9;
  param_1[0x16] = param_9[1];
  param_1[0x15] = lVar3;
  param_9[1] = 0;
  *param_9 = 0;
  param_1[0x17] = param_10;
  __ZNSt3__16chrono12steady_clock3nowEv();
  param_1[0x18] = (long)plVar2;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x21] = -0x3fa9800000000000;
  param_1[0x20] = 0;
  param_1[0x23] = 0x4056800000000000;
  param_1[0x22] = -0x3f99800000000000;
  param_1[0x24] = 0x4066800000000000;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined1 *)((long)param_1 + 0x144) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x43) = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0x3f800000;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0x3f800000;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0x3f800000;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  param_1[100] = 0;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0x3f800000;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0x3f800000;
  param_1[0x73] = 0;
  param_1[0x72] = 0;
  param_1[0x75] = 0;
  param_1[0x74] = 0;
  *(undefined4 *)(param_1 + 0x71) = 0;
  param_1[0x6e] = 0;
  param_1[0x6d] = 0;
  param_1[0x70] = 0;
  param_1[0x6f] = 0;
  param_1[0x6c] = 0;
  param_1[0x6b] = 0;
  *(undefined4 *)(param_1 + 0x76) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x77) = 0;
  param_1[0x78] = (long)&UNK_10e52b660;
  param_1[0x7b] = 0;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  param_1[0x7c] = (long)param_1;
  param_1[0x7d] = 0;
  FUN_10726ed14(param_1 + 0x7e);
  param_1[0x80] = (long)param_1;
  plVar2 = (long *)param_1[7];
  puVar1 = &uStack_b0;
  func_0x000107275794();
  puStack_78 = (undefined8 *)0x0;
  plStack_98 = param_1;
  func_0x000107275294();
  *puVar1 = &PTR_SUB_110995ff8;
  puVar1[2] = uStack_a8;
  puVar1[1] = uStack_b0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  puVar1[3] = uStack_a0;
  puVar1[4] = param_1;
  puStack_78 = puVar1;
  (**(code **)(*plVar2 + 0x40))(plVar2,&lStack_90);
  *(int *)(param_1 + 0x1f) = (int)plVar2;
  func_0x000107270b28(&lStack_90);
  puVar1 = &uStack_b0;
  func_0x00010725b1d4();
  func_0x00010727416c(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107270b28(&lStack_90);
    func_0x00010725b1d4(&uStack_b0);
    FUN_10726f368(param_1 + 0x7e);
    FUN_10725b238(param_1 + 0x7c);
    FUN_107261dac(param_1 + 0x78);
    FUN_10726f2e4(param_1 + 0x72);
    FUN_10726f130(param_1 + 0x6b);
    FUN_10726f0a4(param_1 + 0x66);
    FUN_10726eb88(param_1 + 0x61);
    FUN_10726f018(param_1 + 0x5c);
    FUN_10726ef8c(param_1 + 0x57);
    FUN_10726ec88(param_1 + 0x52);
    FUN_107261e1c(param_1 + 0x4f);
    FUN_107261e1c(param_1 + 0x4c);
    FUN_107261e1c(param_1 + 0x49);
    func_0x00010726ef00(param_1 + 0x44);
    FUN_107261f2c(param_1 + 0x31);
    func_0x00010724b3d8(param_1 + 0x29);
    func_0x00010726eedc(param_1 + 0x15);
    func_0x00010725b6e0(param_1 + 0x13);
    func_0x00010726eeb8(param_1 + 0x11);
    func_0x00010726ee94(param_1 + 0xf);
    func_0x00010726ee70(param_1 + 0xd);
    func_0x00010726ee4c(param_1 + 0xb);
    func_0x00010726ee28(param_1 + 9);
    func_0x00010726ee04(param_1 + 7);
    func_0x00010724b8b8(param_1 + 5);
    FUN_10724ae28(param_1 + 3);
    FUN_10724b54c(param_1);
    __Unwind_Resume();
    plVar2 = (long *)puVar1[7];
    (**(code **)(*plVar2 + 0x48))(plVar2,*(undefined4 *)(puVar1 + 0x1f));
    FUN_10726f368(puVar1 + 0x7e);
    FUN_10725b238(puVar1 + 0x7c);
    FUN_107261dac(puVar1 + 0x78);
    FUN_10726f2e4(puVar1 + 0x72);
    FUN_10726f130(puVar1 + 0x6b);
    FUN_10726f0a4(puVar1 + 0x66);
    FUN_10726eb88(puVar1 + 0x61);
    FUN_10726f018(puVar1 + 0x5c);
    FUN_10726ef8c(puVar1 + 0x57);
    FUN_10726ec88(puVar1 + 0x52);
    FUN_107261e1c(puVar1 + 0x4f);
    FUN_107261e1c(puVar1 + 0x4c);
    FUN_107261e1c(puVar1 + 0x49);
    func_0x00010726ef00(puVar1 + 0x44);
    FUN_107261f2c(puVar1 + 0x31);
    func_0x00010724b3d8(puVar1 + 0x29);
    func_0x00010726eedc(puVar1 + 0x15);
    func_0x00010725b6e0(puVar1 + 0x13);
    func_0x00010726eeb8(puVar1 + 0x11);
    func_0x00010726ee94(puVar1 + 0xf);
    func_0x00010726ee70(puVar1 + 0xd);
    func_0x00010726ee4c(puVar1 + 0xb);
    func_0x00010726ee28(puVar1 + 9);
    func_0x00010726ee04(puVar1 + 7);
    func_0x00010724b8b8(puVar1 + 5);
    FUN_10724ae28(puVar1 + 3);
    func_0x00010724ce4c();
    if (puVar1 != (undefined8 *)0x0) {
      func_0x0001000df548();
    }
    return param_1;
  }
  return param_1;
}



/* Entry: 10725d720; end: 10725d82b;  */

undefined8 FUN_10725d720(long param_1)

{
  long *plVar1;
  undefined8 unaff_x19;
  
  plVar1 = *(long **)(param_1 + 0x38);
  (**(code **)(*plVar1 + 0x48))(plVar1,*(undefined4 *)(param_1 + 0xf8));
  FUN_10726f368(param_1 + 0x3f0);
  FUN_10725b238(param_1 + 0x3e0);
  FUN_107261dac(param_1 + 0x3c0);
  FUN_10726f2e4(param_1 + 0x390);
  FUN_10726f130(param_1 + 0x358);
  FUN_10726f0a4(param_1 + 0x330);
  FUN_10726eb88(param_1 + 0x308);
  FUN_10726f018(param_1 + 0x2e0);
  FUN_10726ef8c(param_1 + 0x2b8);
  FUN_10726ec88(param_1 + 0x290);
  FUN_107261e1c(param_1 + 0x278);
  FUN_107261e1c(param_1 + 0x260);
  FUN_107261e1c(param_1 + 0x248);
  func_0x00010726ef00(param_1 + 0x220);
  FUN_107261f2c(param_1 + 0x188);
  func_0x00010724b3d8(param_1 + 0x148);
  func_0x00010726eedc(param_1 + 0xa8);
  func_0x00010725b6e0(param_1 + 0x98);
  func_0x00010726eeb8(param_1 + 0x88);
  func_0x00010726ee94(param_1 + 0x78);
  func_0x00010726ee70(param_1 + 0x68);
  func_0x00010726ee4c(param_1 + 0x58);
  func_0x00010726ee28(param_1 + 0x48);
  func_0x00010726ee04((undefined8 *)(param_1 + 0x38));
  func_0x00010724b8b8(param_1 + 0x28);
  FUN_10724ae28(param_1 + 0x18);
  func_0x00010724ce4c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10725d82c; end: 10725d8e7;  */

void FUN_10725d82c(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 auStack_98 [6];
  undefined4 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_50;
  undefined1 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    lVar1 = param_1;
    __ZNSt3__16chrono12steady_clock3nowEv();
    plVar2 = (long *)(param_1 + 200);
    FUN_10725d8e8();
    func_0x000107275494(lVar1 - *plVar2);
    auStack_98[0] = 0x149;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x000107274ef4();
    uStack_70 = 0;
    uStack_50 = 0;
    uStack_4c = 1;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_48 = 0;
    func_0x000107275064();
    FUN_107262330(auStack_98);
  }
  return;
}



/* Entry: 10725d8e8; end: 10725d8ff;  */

void FUN_10725d8e8(long param_1)

{
  long *plVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  *(undefined1 *)(param_1 + 0x3b8) = 1;
  plVar1 = *(long **)(param_1 + 0xa8);
  func_0x00010002b838(&uStack_60,PTR_DAT_1131ad060);
  (**(code **)(*plVar1 + 0x28))(plVar1,&uStack_60);
  func_0x000107275210();
  if ((((uint)plVar1 ^ 0xffffffff) & 0x101) == 0) {
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_40 = 0x3f800000;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_70 = 0x3f800000;
    FUN_10725d9b8(param_1,&uStack_60,&uStack_90);
    FUN_10726ea70(&uStack_90);
    FUN_10726eb88(&uStack_60);
  }
  return;
}



/* Entry: 10725d900; end: 10725d9b7;  */

void FUN_10725d900(long param_1)

{
  long *plVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  *(undefined1 *)(param_1 + 0x3b8) = 1;
  plVar1 = *(long **)(param_1 + 0xa8);
  func_0x00010002b838(&uStack_50,PTR_DAT_1131ad060);
  (**(code **)(*plVar1 + 0x28))(plVar1,&uStack_50);
  func_0x000107275210();
  if ((((uint)plVar1 ^ 0xffffffff) & 0x101) == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_30 = 0x3f800000;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_60 = 0x3f800000;
    FUN_10725d9b8(param_1,&uStack_50,&uStack_80);
    FUN_10726ea70(&uStack_80);
    FUN_10726eb88(&uStack_50);
  }
  return;
}



/* Entry: 10725d9b8; end: 10725d9f3;  */

void FUN_10725d9b8(long param_1)

{
  undefined1 auStack_44 [20];
  
  func_0x000107274670();
  func_0x00010725dcd4(auStack_44,param_1 + 0x100);
  func_0x000107275250();
  FUN_10725dd1c();
  return;
}



/* Entry: 10725d9f4; end: 10725dc8f;  */

void FUN_10725d9f4(double param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  bool bVar10;
  bool bVar11;
  long lVar12;
  long *plVar13;
  undefined8 extraout_x8;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  uint uStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  undefined1 auStack_100 [16];
  long *plStack_f0;
  char cStack_d8;
  long alStack_c0 [8];
  undefined8 uStack_80;
  
  lVar15 = param_2;
  func_0x000107274388();
  uStack_80 = extraout_x8;
  FUN_10725dc90(lVar15 + 0x3c0);
  lVar16 = ((long *)*param_4)[1];
  for (lVar15 = *(long *)*param_4; uVar9 = lVar15 == lVar16, !(bool)uVar9; lVar15 = lVar15 + 0x58) {
    lVar1 = *(long *)(lVar15 + 0x48);
    for (lVar17 = *(long *)(lVar15 + 0x40); lVar17 != lVar1; lVar17 = lVar17 + 0x160) {
      if (*(char *)(lVar17 + 200) == '\x01') {
        func_0x000100060964(auStack_100,"friends");
        lVar12 = lVar17 + 0x110;
        FUN_107262364(lVar12,auStack_100);
        func_0x000104c2f714(auStack_100);
        if ((int)lVar12 != 0) {
          FUN_10726236c(auStack_100,lVar17);
          FUN_107262398(alStack_c0,auStack_100,0x1138369c0);
          func_0x00010724b3d8(auStack_100);
          uVar14 = 0;
          func_0x000104c2d614();
          if ((uVar14 & 1) == 0) {
            (**(code **)(**(long **)(param_2 + 0x78) + 0x98))
                      (auStack_100,*(long **)(param_2 + 0x78),(int)param_1,alStack_c0);
            plVar13 = plStack_f0;
            if (cStack_d8 == '\x01') {
              for (; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
                FUN_1072628ec(&uStack_118,param_2 + 0x3c0,plVar13 + 2);
              }
            }
            else {
              FUN_1072628ec(&uStack_118,param_2 + 0x3c0,alStack_c0);
            }
            FUN_107262afc(auStack_100);
          }
          func_0x000104c2f714(alStack_c0);
        }
      }
    }
  }
  bVar6 = *(byte *)(param_2 + 0x130);
  iVar2 = *(int *)(param_2 + 0x134);
  iVar3 = *(int *)(param_2 + 0x138);
  iVar4 = *(int *)(param_2 + 0x13c);
  iVar5 = *(int *)(param_2 + 0x140);
  bVar7 = *(byte *)(param_2 + 0x144);
  uVar8 = *(undefined1 *)(param_3 + 4);
  uVar21 = param_3[1];
  uVar20 = *param_3;
  uVar19 = param_3[3];
  uVar18 = param_3[2];
  *(double *)(param_2 + 0x100) = param_1;
  *(undefined8 *)(param_2 + 0x110) = uVar21;
  *(undefined8 *)(param_2 + 0x108) = uVar20;
  *(undefined8 *)(param_2 + 0x120) = uVar19;
  *(undefined8 *)(param_2 + 0x118) = uVar18;
  *(undefined1 *)(param_2 + 0x128) = uVar8;
  *(undefined1 *)(param_2 + 0x130) = 0;
  *(undefined1 *)(param_2 + 0x144) = 0;
  func_0x00010725dcd4(&uStack_118);
  if (((((bVar7 & 1) == 0) || (uVar9 = 0, (uStack_118 & 0xff) != (uint)bVar6)) ||
      (bVar10 = iStack_114 == iVar2, bVar11 = iStack_110 == iVar3, uVar9 = bVar10 && bVar11,
      !bVar10 || !bVar11)) ||
     ((bVar10 = iStack_10c == iVar4, bVar11 = iStack_108 == iVar5, uVar9 = bVar10 && bVar11,
      !bVar10 || !bVar11 || (*(long *)(param_2 + 800) != 0)))) {
    *(ulong *)(param_2 + 0x138) = CONCAT44(iStack_10c,iStack_110);
    *(ulong *)(param_2 + 0x130) = CONCAT44(iStack_114,uStack_118);
    *(int *)(param_2 + 0x140) = iStack_108;
    if ((*(byte *)(param_2 + 0x144) & 1) == 0) {
      *(undefined1 *)(param_2 + 0x144) = 1;
    }
    func_0x000107275950();
    FUN_10725dd1c(param_2,auStack_100,alStack_c0,&uStack_118);
    FUN_10726ea70();
    func_0x00010727529c();
  }
  func_0x00010727416c(uStack_80);
  if (!(bool)uVar9) {
    ___stack_chk_fail();
    plVar13 = alStack_c0;
    FUN_10726ea70();
    func_0x00010727529c();
    func_0x00010727477c();
    uVar14 = plVar13[2];
    if (uVar14 != 0) {
      FUN_107261ddc();
      plVar13[3] = 0;
      if (uVar14 < 0x80) {
        lVar16 = plVar13[2];
        lVar15 = *plVar13;
        _memset(lVar15,0x80,lVar16 + 8);
        *(undefined1 *)(lVar15 + lVar16) = 0xff;
        uVar14 = plVar13[2];
        lVar15 = 6;
        if (uVar14 != 7) {
          lVar15 = uVar14 - (uVar14 >> 3);
        }
        *(long *)(*plVar13 + -8) = lVar15 - plVar13[3];
      }
      else {
        (*(code *)&DAT_104c32e5c)(plVar13);
        plVar13[1] = 0;
        plVar13[2] = 0;
        *plVar13 = (long)&UNK_10e52b660;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 10725dc90; end: 10725dd1b;  */

void FUN_10725dc90(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = param_1[2];
  if (uVar1 != 0) {
    FUN_107261ddc();
    param_1[3] = 0;
    if (uVar1 < 0x80) {
      lVar3 = param_1[2];
      lVar2 = *param_1;
      _memset(lVar2,0x80,lVar3 + 8);
      *(undefined1 *)(lVar2 + lVar3) = 0xff;
      uVar1 = param_1[2];
      lVar2 = 6;
      if (uVar1 != 7) {
        lVar2 = uVar1 - (uVar1 >> 3);
      }
      *(long *)(*param_1 + -8) = lVar2 - param_1[3];
    }
    else {
      (*(code *)&DAT_104c32e5c)(param_1);
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = (long)&UNK_10e52b660;
    }
    return;
  }
  return;
}



/* Entry: 10725dd1c; end: 10725f1db;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x00010725ea14 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

long ****** FUN_10725dd1c(long *****param_1,long param_2,long param_3,byte *param_4)

{
  uint uVar1;
  long ******pppppplVar2;
  char cVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  double dVar6;
  float fVar7;
  double dVar8;
  long ***ppplVar9;
  code *pcVar10;
  undefined1 in_NG;
  undefined1 in_ZR;
  bool bVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  uint uVar14;
  undefined1 *puVar15;
  long *plVar16;
  long *plVar17;
  long ******pppppplVar18;
  long ******pppppplVar19;
  byte *pbVar20;
  undefined4 extraout_w8;
  undefined4 extraout_w8_00;
  undefined4 extraout_w8_01;
  undefined4 extraout_w8_02;
  undefined8 extraout_x8;
  ulong uVar21;
  long *****ppppplVar22;
  long **pplVar23;
  long *****ppppplVar24;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long ******pppppplVar25;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long ******extraout_x8_05;
  long ****pppplVar26;
  long *****ppppplVar27;
  long ******extraout_x9;
  undefined8 uVar28;
  long ******extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  undefined8 extraout_x9_03;
  int iVar29;
  int extraout_w10;
  long ****pppplVar30;
  ulong uVar31;
  ulong extraout_x10;
  ulong extraout_x10_00;
  long extraout_x10_01;
  long ****pppplVar32;
  long lVar33;
  long *****ppppplVar34;
  long lVar35;
  undefined8 uVar36;
  undefined8 *puVar37;
  long *plVar38;
  long ****pppplVar39;
  long *****ppppplVar40;
  long ******pppppplVar41;
  long *plVar42;
  long ******pppppplVar43;
  undefined8 *puVar44;
  long ******pppppplVar45;
  long ******pppppplVar46;
  long **pplVar47;
  long ****unaff_x25;
  long *plVar48;
  long lVar49;
  long ******pppppplVar50;
  long ******pppppplVar51;
  long ******unaff_x27;
  long **pplVar52;
  long *****ppppplVar53;
  long *plVar54;
  float fVar55;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  undefined4 uVar56;
  float fVar57;
  undefined4 uVar58;
  float fVar59;
  long ******pppppplVar60;
  undefined4 uStack_8e4;
  long *****ppppplStack_8e0;
  long *****ppppplStack_8d8;
  long ****pppplStack_8d0;
  undefined8 uStack_8c8;
  undefined8 *puStack_8c0;
  undefined8 uStack_8b8;
  undefined4 uStack_8b0;
  long *****ppppplStack_890;
  undefined1 auStack_888 [16];
  long ****pppplStack_878;
  undefined1 auStack_850 [96];
  long *****ppppplStack_7f0;
  long *****ppppplStack_7e8;
  long ***ppplStack_7e0;
  long *****ppppplStack_7d8;
  long *****ppppplStack_7d0;
  long *****ppppplStack_7c8;
  undefined4 uStack_7c0;
  undefined4 uStack_7bc;
  undefined8 *puStack_738;
  undefined8 *puStack_730;
  long *****ppppplStack_728;
  long ****pppplStack_720;
  long *****ppppplStack_718;
  long ***ppplStack_710;
  undefined8 uStack_708;
  long *****ppppplStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  long *****ppppplStack_6e8;
  long *****ppppplStack_6e0;
  uint uStack_6d8;
  undefined1 uStack_6d4;
  undefined4 uStack_690;
  long **pplStack_688;
  undefined1 uStack_680;
  long ****pppplStack_668;
  long ****pppplStack_660;
  undefined8 uStack_658;
  undefined8 *puStack_650;
  undefined8 uStack_648;
  undefined8 *puStack_628;
  long lStack_620;
  long lStack_618;
  long *****ppppplStack_610;
  long *****ppppplStack_608;
  long ****pppplStack_600;
  long *****ppppplStack_5f8;
  undefined1 auStack_5f0 [16];
  long *plStack_5e0;
  code *pcStack_5d8;
  long ****pppplStack_5c0;
  long ***ppplStack_5b8;
  long ****pppplStack_5b0;
  long **pplStack_5a8;
  undefined4 uStack_5a0;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined2 uStack_580;
  long *aplStack_570 [2];
  long ****pppplStack_560;
  undefined8 uStack_558;
  long lStack_550;
  undefined8 uStack_548;
  undefined4 uStack_540;
  long ****pppplStack_538;
  long ****pppplStack_530;
  undefined8 uStack_528;
  long ****pppplStack_520;
  long lStack_518;
  undefined8 uStack_510;
  long lStack_508;
  long ****pppplStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined4 uStack_4e0;
  long *****ppppplStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined4 uStack_4b0;
  long ****apppplStack_4a8 [3];
  undefined8 uStack_490;
  long *****ppppplStack_488;
  undefined8 uStack_480;
  undefined4 uStack_478;
  undefined **ppuStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined4 uStack_450;
  undefined4 uStack_448;
  undefined1 uStack_444;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  long *****ppppplStack_150;
  ulong uStack_148;
  long *plStack_140;
  long lStack_138;
  undefined4 uStack_130;
  undefined1 uStack_88;
  undefined8 uStack_80;
  
  lVar33 = param_3;
  pbVar20 = param_4;
  lStack_620 = param_2;
  func_0x000107274388();
  uStack_580 = CONCAT11(*pbVar20,*pbVar20);
  uStack_588 = *(undefined8 *)(pbVar20 + 0xc);
  uStack_590 = *(undefined8 *)(pbVar20 + 4);
  ppplStack_5b8 = (long ***)0x0;
  pppplStack_5c0 = (long ****)0x0;
  pplStack_5a8 = (long **)0x0;
  pppplStack_5b0 = (long ****)0x0;
  uStack_5a0 = 0x3f800000;
  uStack_80 = extraout_x8;
  FUN_10726b878(&pppplStack_5c0,(long)(float)*(ulong *)(lVar33 + 0x18));
  puVar44 = (undefined8 *)(param_3 + 0x10);
  ppppplStack_5f8 = (long *****)((long)param_1 + 0x308);
  plVar38 = (long *)((long)param_1 + 0x330);
  ppppplStack_608 = &pppplStack_5b0;
  pppplStack_600 = (long ****)((long)param_1 + 0x348);
  ppppplStack_610 = (long *****)((long)param_1 + 0x340);
  puStack_628 = puVar44;
  lStack_618 = param_3;
LAB_10725ddc0:
  puVar44 = (undefined8 *)*puVar44;
  if (puVar44 != (undefined8 *)0x0) {
    lVar33 = (long)param_1 + 0x220;
    FUN_107264dc4(lVar33,puVar44 + 2);
    if (lVar33 != 0) {
      uVar14 = (uint)*param_4;
      unaff_x27 = (long ******)(lVar33 + 0xd8);
      FUN_10726b7a4();
      uStack_148 = CONCAT44(uStack_148._4_4_,uVar14);
      pppplVar30 = (long ****)&pplStack_5a8;
      ppppplStack_150 = (long *****)unaff_x27;
      func_0x00010784b234(pppplVar30,&ppppplStack_150);
      pppplVar39 = (long ****)ppplStack_5b8;
      if ((long ****)ppplStack_5b8 != (long ****)0x0) {
        uVar21 = (long)ppplStack_5b8 - 1;
        if (((ulong)ppplStack_5b8 & uVar21) == 0) {
          unaff_x25 = (long ****)((long)ppplStack_5b8 + 0x7fffffffffffffffU & (ulong)pppplVar30);
          in_ZR = true;
          in_NG = false;
        }
        else {
          in_NG = (long)pppplVar30 - (long)ppplStack_5b8 < 0;
          in_ZR = pppplVar30 == (long ****)ppplStack_5b8;
          unaff_x25 = pppplVar30;
          if (ppplStack_5b8 <= pppplVar30) {
            uVar31 = 0;
            if ((long ****)ppplStack_5b8 != (long ****)0x0) {
              uVar31 = (ulong)pppplVar30 / (ulong)ppplStack_5b8;
            }
            unaff_x25 = (long ****)((long)pppplVar30 - uVar31 * (long)ppplStack_5b8);
          }
        }
        pppplVar26 = (long ****)pppplStack_5c0[(long)unaff_x25];
        if (pppplVar26 != (long ****)0x0) {
          do {
            while( true ) {
              pppplVar26 = (long ****)*pppplVar26;
              if (pppplVar26 == (long ****)0x0) goto LAB_10725deb0;
              pppplVar32 = (long ****)pppplVar26[1];
              if (pppplVar32 != pppplVar30) break;
              uVar1 = (uint)unaff_x27 & 0xff;
              in_NG = (int)(*(byte *)(pppplVar26 + 2) - uVar1) < 0;
              in_ZR = false;
              if (*(byte *)(pppplVar26 + 2) == uVar1) {
                iVar29 = (int)((ulong)unaff_x27 >> 0x20);
                in_NG = *(int *)((long)pppplVar26 + 0x14) - iVar29 < 0;
                in_ZR = false;
                if (*(int *)((long)pppplVar26 + 0x14) == iVar29) {
                  in_NG = (int)(*(uint *)(pppplVar26 + 3) - uVar14) < 0;
                  in_ZR = *(uint *)(pppplVar26 + 3) == uVar14;
                  if ((bool)in_ZR) goto LAB_10725dfcc;
                }
              }
            }
            if (((ulong)ppplStack_5b8 & uVar21) == 0) {
              pppplVar32 = (long ****)((ulong)pppplVar32 & uVar21);
            }
            else if (ppplStack_5b8 <= pppplVar32) {
              uVar31 = 0;
              if ((long ****)ppplStack_5b8 != (long ****)0x0) {
                uVar31 = (ulong)pppplVar32 / (ulong)ppplStack_5b8;
              }
              pppplVar32 = (long ****)((long)pppplVar32 - uVar31 * (long)ppplStack_5b8);
            }
            in_NG = (long)pppplVar32 - (long)unaff_x25 < 0;
            in_ZR = pppplVar32 == unaff_x25;
          } while ((bool)in_ZR);
        }
      }
LAB_10725deb0:
      ppppplVar40 = (long *****)0x20;
      __Znwm();
      ppppplStack_488 = ppppplStack_608;
      uStack_480 = 1;
      *ppppplVar40 = (long ****)0x0;
      ppppplVar40[1] = pppplVar30;
      ppppplVar40[2] = (long ****)ppppplStack_150;
      *(undefined4 *)(ppppplVar40 + 3) = (undefined4)uStack_148;
      uStack_490 = (long ******)ppppplVar40;
      func_0x000107274964(pplStack_5a8);
      if (pppplVar39 == (long ****)0x0) {
LAB_10725def8:
        func_0x000107275860();
        func_0x00010727413c();
        FUN_10726b878(&pppplStack_5c0);
        pppplVar39 = (long ****)ppplStack_5b8;
        if (((ulong)ppplStack_5b8 & (long)ppplStack_5b8 - 1U) == 0) {
          in_ZR = 1;
          bVar11 = false;
          unaff_x25 = (long ****)((long)ppplStack_5b8 + 0x7fffffffffffffffU & (ulong)pppplVar30);
        }
        else {
          bVar11 = (long)pppplVar30 - (long)ppplStack_5b8 < 0;
          in_ZR = pppplVar30 == (long ****)ppplStack_5b8;
          unaff_x25 = pppplVar30;
          if (ppplStack_5b8 <= pppplVar30) {
            uVar21 = 0;
            if ((long ****)ppplStack_5b8 != (long ****)0x0) {
              uVar21 = (ulong)pppplVar30 / (ulong)ppplStack_5b8;
            }
            unaff_x25 = (long ****)((long)pppplVar30 - uVar21 * (long)ppplStack_5b8);
          }
        }
      }
      else {
        func_0x000107274958(CONCAT17(in_register_00005007,
                                     CONCAT16(in_register_00005006,
                                              CONCAT15(in_register_00005005,
                                                       CONCAT14(in_register_00005004,
                                                                CONCAT13(in_register_00005003,
                                                                         CONCAT12(
                                                  in_register_00005002,
                                                  CONCAT11(in_register_00005001,in_b0))))))),
                            uStack_5a0,(float)pppplVar39);
        bVar11 = false;
        if ((bool)in_NG) goto LAB_10725def8;
      }
      in_NG = bVar11;
      pppplVar30 = (long ****)pppplStack_5c0[(long)unaff_x25];
      if (pppplVar30 == (long ****)0x0) {
        *uStack_490 = (long *****)pppplStack_5b0;
        pppplStack_5b0 = (long ****)uStack_490;
        pppplStack_5c0[(long)unaff_x25] = (long ***)ppppplStack_608;
        if (*uStack_490 != (long *****)0x0) {
          pppplVar30 = (*uStack_490)[1];
          if (((ulong)pppplVar39 & (long)pppplVar39 - 1U) == 0) {
            pppplVar30 = (long ****)((ulong)pppplVar30 & (long)pppplVar39 - 1U);
            in_ZR = true;
            in_NG = false;
          }
          else {
            in_NG = (long)pppplVar30 - (long)pppplVar39 < 0;
            in_ZR = pppplVar30 == pppplVar39;
            if (pppplVar39 <= pppplVar30) {
              uVar21 = 0;
              if (pppplVar39 != (long ****)0x0) {
                uVar21 = (ulong)pppplVar30 / (ulong)pppplVar39;
              }
              pppplVar30 = (long ****)((long)pppplVar30 - uVar21 * (long)pppplVar39);
            }
          }
          pppplStack_5c0[(long)pppplVar30] = (long ***)uStack_490;
        }
      }
      else {
        *uStack_490 = (long *****)*pppplVar30;
        *pppplVar30 = (long ***)uStack_490;
      }
      uStack_490 = (long ******)0x0;
      pplStack_5a8 = (long **)((long)pplStack_5a8 + 1);
      FUN_10726b9d0(&uStack_490);
    }
LAB_10725dfcc:
    FUN_10726ba08(ppppplStack_5f8,puVar44 + 2);
    ppppplVar40 = *(long ******)((long)param_1 + 0x338);
    if ((ppppplVar40 != (long *****)0x0) && ((long ****)*pppplStack_600 != (long ****)0x0)) {
      ppppplVar27 = (long *****)pppplStack_600;
      FUN_10726364c(pppplStack_600,puVar44 + 2);
      unaff_x25 = (long ****)((long)ppppplVar40 + -1);
      if (((ulong)ppppplVar40 & (ulong)unaff_x25) == 0) {
        ppppplVar53 = (long *****)((ulong)ppppplVar27 & (ulong)unaff_x25);
        in_ZR = true;
        in_NG = false;
      }
      else {
        in_NG = (long)ppppplVar27 - (long)ppppplVar40 < 0;
        in_ZR = ppppplVar27 == ppppplVar40;
        ppppplVar53 = ppppplVar27;
        if (ppppplVar40 <= ppppplVar27) {
          uVar21 = 0;
          if (ppppplVar40 != (long *****)0x0) {
            uVar21 = (ulong)ppppplVar27 / (ulong)ppppplVar40;
          }
          ppppplVar53 = (long *****)((long)ppppplVar27 - uVar21 * (long)ppppplVar40);
        }
      }
      unaff_x27 = *(long *******)(*plVar38 + (long)ppppplVar53 * 8);
      if (unaff_x27 != (long ******)0x0) {
        do {
          while( true ) {
            unaff_x27 = (long ******)*unaff_x27;
            if (unaff_x27 == (long ******)0x0) goto LAB_10725ddc0;
            ppppplVar22 = unaff_x27[1];
            in_NG = (long)ppppplVar22 - (long)ppppplVar27 < 0;
            in_ZR = ppppplVar22 == ppppplVar27;
            if ((bool)in_ZR) break;
            if (((ulong)ppppplVar40 & (ulong)unaff_x25) == 0) {
              ppppplVar22 = (long *****)((ulong)ppppplVar22 & (ulong)unaff_x25);
            }
            else if (ppppplVar40 <= ppppplVar22) {
              uVar21 = 0;
              if (ppppplVar40 != (long *****)0x0) {
                uVar21 = (ulong)ppppplVar22 / (ulong)ppppplVar40;
              }
              ppppplVar22 = (long *****)((long)ppppplVar22 - uVar21 * (long)ppppplVar40);
            }
            in_NG = (long)ppppplVar22 - (long)ppppplVar53 < 0;
            in_ZR = ppppplVar22 == ppppplVar53;
            if (!(bool)in_ZR) goto LAB_10725ddc0;
          }
          pppppplVar41 = unaff_x27 + 2;
          func_0x000104c32db4(pppppplVar41,puVar44 + 2);
        } while ((int)pppppplVar41 == 0);
        ppppplVar27 = *(long ******)((long)param_1 + 0x338);
        ppppplVar40 = unaff_x27[1];
        uVar21 = (long)ppppplVar27 - 1;
        if (((ulong)ppppplVar27 & uVar21) == 0) {
          ppppplVar40 = (long *****)(uVar21 & (ulong)ppppplVar40);
        }
        else if (ppppplVar27 <= ppppplVar40) {
          uVar31 = 0;
          if (ppppplVar27 != (long *****)0x0) {
            uVar31 = (ulong)ppppplVar40 / (ulong)ppppplVar27;
          }
          ppppplVar40 = (long *****)((long)ppppplVar40 - uVar31 * (long)ppppplVar27);
        }
        ppppplVar53 = *unaff_x27;
        lVar33 = *plVar38;
        pppppplVar41 = *(long *******)(lVar33 + (long)ppppplVar40 * 8);
        do {
          pppppplVar60 = pppppplVar41;
          pppppplVar41 = (long ******)*pppppplVar60;
        } while ((long ******)*pppppplVar60 != unaff_x27);
        in_NG = (long)pppppplVar60 - (long)ppppplStack_610 < 0;
        in_ZR = true;
        if (pppppplVar60 == (long ******)ppppplStack_610) {
LAB_10725e104:
          if (ppppplVar53 == (long *****)0x0) {
LAB_10725e138:
            *(undefined8 *)(lVar33 + (long)ppppplVar40 * 8) = 0;
            ppppplVar53 = *unaff_x27;
            goto LAB_10725e140;
          }
          ppppplVar22 = (long *****)ppppplVar53[1];
          if (((ulong)ppppplVar27 & uVar21) == 0) {
            ppppplVar34 = (long *****)((ulong)ppppplVar22 & uVar21);
          }
          else {
            ppppplVar34 = ppppplVar22;
            if (ppppplVar27 <= ppppplVar22) {
              uVar31 = 0;
              if (ppppplVar27 != (long *****)0x0) {
                uVar31 = (ulong)ppppplVar22 / (ulong)ppppplVar27;
              }
              ppppplVar34 = (long *****)((long)ppppplVar22 - uVar31 * (long)ppppplVar27);
            }
          }
          in_NG = (long)ppppplVar34 - (long)ppppplVar40 < 0;
          in_ZR = ppppplVar34 == ppppplVar40;
          if (!(bool)in_ZR) goto LAB_10725e138;
LAB_10725e148:
          if (((ulong)ppppplVar27 & uVar21) == 0) {
            ppppplVar22 = (long *****)((ulong)ppppplVar22 & uVar21);
          }
          else if (ppppplVar27 <= ppppplVar22) {
            uVar21 = 0;
            if (ppppplVar27 != (long *****)0x0) {
              uVar21 = (ulong)ppppplVar22 / (ulong)ppppplVar27;
            }
            ppppplVar22 = (long *****)((long)ppppplVar22 - uVar21 * (long)ppppplVar27);
          }
          in_NG = (long)ppppplVar22 - (long)ppppplVar40 < 0;
          in_ZR = ppppplVar22 == ppppplVar40;
          if (!(bool)in_ZR) {
            *(long *******)(lVar33 + (long)ppppplVar22 * 8) = pppppplVar60;
            ppppplVar53 = *unaff_x27;
          }
        }
        else {
          ppppplVar22 = pppppplVar60[1];
          if (((ulong)ppppplVar27 & uVar21) == 0) {
            ppppplVar22 = (long *****)((ulong)ppppplVar22 & uVar21);
          }
          else if (ppppplVar27 <= ppppplVar22) {
            uVar31 = 0;
            if (ppppplVar27 != (long *****)0x0) {
              uVar31 = (ulong)ppppplVar22 / (ulong)ppppplVar27;
            }
            ppppplVar22 = (long *****)((long)ppppplVar22 - uVar31 * (long)ppppplVar27);
          }
          in_NG = (long)ppppplVar22 - (long)ppppplVar40 < 0;
          in_ZR = ppppplVar22 == ppppplVar40;
          if (!(bool)in_ZR) goto LAB_10725e104;
LAB_10725e140:
          if (ppppplVar53 != (long *****)0x0) {
            ppppplVar22 = (long *****)ppppplVar53[1];
            goto LAB_10725e148;
          }
        }
        *pppppplVar60 = ppppplVar53;
        *unaff_x27 = (long *****)0x0;
        *pppplStack_600 = (long ***)((long)*pppplStack_600 + -1);
        ppppplStack_488 = ppppplStack_610;
        uStack_480 = 1;
        uStack_490 = unaff_x27;
        FUN_10726bbd8(&uStack_490);
      }
    }
    goto LAB_10725ddc0;
  }
  func_0x000107275950();
  pppppplVar41 = (long ******)((long)param_1 + 0x318);
  ppppplStack_610 = (long *****)pppppplVar41;
  while (pppppplVar41 = (long ******)*pppppplVar41, pppppplVar41 != (long ******)0x0) {
    pppppplVar60 = pppppplVar41 + 0x1b;
    FUN_10726b7a4(pppppplVar60,*param_4);
    func_0x000107275040();
    iVar29 = (int)pppppplVar60;
    if ((((ulong)pppppplVar60 & 1) != 0) || (func_0x000107275690(), iVar29 != 0)) {
      FUN_10726b5b8(&uStack_490,pppppplVar41 + 2,pppppplVar41 + 9);
      FUN_107264f28(auStack_5f0,&uStack_490);
      func_0x0001072656f4(&uStack_490);
    }
  }
  plVar54 = (long *)(lStack_620 + 0x10);
  pppppplVar41 = (long ******)0x18;
  ppppplStack_608 = param_1;
LAB_10725e220:
  plVar54 = (long *)*plVar54;
  if (plVar54 != (long *)0x0) {
    uVar21 = (ulong)(plVar54 + 0x1b);
    FUN_10726b7a4(uVar21,*param_4);
    func_0x000107275040();
    iVar29 = (int)uVar21;
    if (((uVar21 & 1) == 0) && (func_0x000107275690(), iVar29 == 0)) {
      pppppplVar60 = (long ******)ppppplStack_5f8;
      FUN_10726bb3c(ppppplStack_5f8,plVar54 + 2);
      if (pppppplVar60 == (long ******)0x0) {
        func_0x00010727561c(0);
      }
      else {
        func_0x0001072751bc();
      }
      FUN_10726be1c(ppppplStack_5f8,plVar54 + 2,&uStack_490);
    }
    else {
      puVar15 = auStack_5f0;
      FUN_10726bb3c(puVar15,plVar54 + 2);
      if (puVar15 == (undefined1 *)0x0) {
        func_0x00010727561c(0);
      }
      else {
        func_0x0001072751bc();
      }
      FUN_10726be1c(auStack_5f0,plVar54 + 2,&uStack_490);
    }
    plVar16 = &uStack_490;
    func_0x000107265718();
    func_0x0001072745f4();
    in_NG = *plVar16 - plVar16[1] < 0;
    in_ZR = *plVar16 == plVar16[1];
    if (!(bool)in_ZR) goto code_r0x00010725e2c0;
    goto LAB_10725e2e8;
  }
  pppppplVar46 = *(long *******)((long)param_1 + 0xa8);
  func_0x00010002b838(&uStack_490,PTR_DAT_1131ad068);
  pppppplVar19 = (long ******)&uStack_490;
  pppppplVar60 = pppppplVar46;
  (*(code *)(*pppppplVar46)[5])();
  uVar14 = (uint)pppppplVar60;
  func_0x000107274e5c();
  if ((((uVar14 ^ 0xffffffff) & 0x101) == 0) && ((*(byte *)((long)param_1 + 0x3b8) & 1) == 0)) {
    pppppplVar60 = (long ******)((long)param_1 + 800);
    for (plVar38 = plStack_5e0; pppppplVar46 = (long ******)0x0, plVar38 != (long *)0x0;
        plVar38 = (long *)*plVar38) {
      pppppplVar46 = pppppplVar60;
      FUN_10726364c(pppppplVar60,plVar38 + 2);
      pppppplVar50 = *(long *******)((long)param_1 + 0x310);
      pppppplVar41 = pppppplVar46;
      if (pppppplVar50 != (long ******)0x0) {
        pppppplVar45 = (long ******)((long)pppppplVar50 + -1);
        if (((ulong)pppppplVar50 & (ulong)pppppplVar45) == 0) {
          unaff_x27 = (long ******)((ulong)pppppplVar45 & (ulong)pppppplVar46);
          in_ZR = true;
          in_NG = false;
        }
        else {
          in_NG = (long)pppppplVar46 - (long)pppppplVar50 < 0;
          in_ZR = pppppplVar46 == pppppplVar50;
          unaff_x27 = pppppplVar46;
          if (pppppplVar50 <= pppppplVar46) {
            uVar21 = 0;
            if (pppppplVar50 != (long ******)0x0) {
              uVar21 = (ulong)pppppplVar46 / (ulong)pppppplVar50;
            }
            unaff_x27 = (long ******)((long)pppppplVar46 - uVar21 * (long)pppppplVar50);
          }
        }
        pppplVar30 = (long ****)(*ppppplStack_5f8)[(long)unaff_x27];
        if (pppplVar30 != (long ****)0x0) {
          do {
            while( true ) {
              pppplVar30 = (long ****)*pppplVar30;
              if (pppplVar30 == (long ****)0x0) goto LAB_10725e9d8;
              pppppplVar19 = (long ******)pppplVar30[1];
              in_NG = (long)pppppplVar19 - (long)pppppplVar46 < 0;
              in_ZR = pppppplVar19 == pppppplVar46;
              if (!(bool)in_ZR) break;
              pppppplVar41 = (long ******)(pppplVar30 + 2);
              func_0x000104c32db4(pppppplVar41,plVar38 + 2);
              if (((ulong)pppppplVar41 & 1) != 0) {
                pppppplVar19 = (long ******)(plVar38 + 9);
                FUN_10726bfdc(pppplVar30 + 9);
                pppppplVar41 = pppppplVar45;
                goto LAB_10725eaec;
              }
            }
            if (((ulong)pppppplVar50 & (ulong)pppppplVar45) == 0) {
              pppppplVar19 = (long ******)((ulong)pppppplVar19 & (ulong)pppppplVar45);
            }
            else if (pppppplVar50 <= pppppplVar19) {
              uVar21 = 0;
              if (pppppplVar50 != (long ******)0x0) {
                uVar21 = (ulong)pppppplVar19 / (ulong)pppppplVar50;
              }
              pppppplVar19 = (long ******)((long)pppppplVar19 - uVar21 * (long)pppppplVar50);
            }
            in_NG = (long)pppppplVar19 - (long)unaff_x27 < 0;
            in_ZR = pppppplVar19 == unaff_x27;
          } while ((bool)in_ZR);
        }
      }
LAB_10725e9d8:
      func_0x0001072757b0();
      ppppplStack_488 = ppppplStack_610;
      uStack_480 = 0;
      *pppppplVar41 = (long *****)0x0;
      pppppplVar41[1] = (long *****)pppppplVar46;
      pppppplVar19 = (long ******)(plVar38 + 2);
      uStack_490 = pppppplVar41;
      FUN_10726b5b8(pppppplVar41 + 2,pppppplVar19,plVar38 + 9);
      uStack_480 = CONCAT71(uStack_480._1_7_,1);
      func_0x000107274964(*(undefined8 *)((long)param_1 + 800));
      if (pppppplVar50 == (long ******)0x0) {
LAB_10725ea1c:
        func_0x00010727593c();
        func_0x00010727413c();
        FUN_107265450(ppppplStack_5f8);
        pppppplVar50 = *(long *******)((long)param_1 + 0x310);
        if (((ulong)pppppplVar50 & (ulong)((long)pppppplVar50 + -1)) == 0) {
          in_ZR = 1;
          bVar11 = false;
          unaff_x27 = (long ******)((ulong)((long)pppppplVar50 + -1) & (ulong)pppppplVar46);
        }
        else {
          bVar11 = (long)pppppplVar46 - (long)pppppplVar50 < 0;
          in_ZR = pppppplVar46 == pppppplVar50;
          unaff_x27 = pppppplVar46;
          if (pppppplVar50 <= pppppplVar46) {
            uVar21 = 0;
            if (pppppplVar50 != (long ******)0x0) {
              uVar21 = (ulong)pppppplVar46 / (ulong)pppppplVar50;
            }
            unaff_x27 = (long ******)((long)pppppplVar46 - uVar21 * (long)pppppplVar50);
          }
        }
      }
      else {
        func_0x000107274958(CONCAT17(in_register_00005007,
                                     CONCAT16(in_register_00005006,
                                              CONCAT15(in_register_00005005,
                                                       CONCAT14(in_register_00005004,
                                                                CONCAT13(in_register_00005003,
                                                                         CONCAT12(
                                                  in_register_00005002,
                                                  CONCAT11(in_register_00005001,in_b0))))))),
                            *(undefined4 *)((long)param_1 + 0x328),(float)pppppplVar50);
        bVar11 = false;
        if ((bool)in_NG) goto LAB_10725ea1c;
      }
      in_NG = bVar11;
      ppppplVar40 = (long *****)*ppppplStack_5f8;
      pppplVar30 = ppppplVar40[(long)unaff_x27];
      if (pppplVar30 == (long ****)0x0) {
        *pppppplVar41 = (long *****)*ppppplStack_610;
        *ppppplStack_610 = (long ****)pppppplVar41;
        ppppplVar40[(long)unaff_x27] = (long ****)ppppplStack_610;
        if (*pppppplVar41 != (long *****)0x0) {
          func_0x000107275394();
          if ((bool)in_ZR) {
            pppppplVar46 = (long ******)((ulong)extraout_x9 & extraout_x10);
            in_ZR = true;
          }
          else {
            in_NG = (long)extraout_x9 - (long)pppppplVar50 < 0;
            in_ZR = extraout_x9 == pppppplVar50;
            pppppplVar46 = extraout_x9;
            if (pppppplVar50 <= extraout_x9) {
              uVar21 = 0;
              if (pppppplVar50 != (long ******)0x0) {
                uVar21 = (ulong)extraout_x9 / (ulong)pppppplVar50;
              }
              pppppplVar46 = (long ******)((long)extraout_x9 - uVar21 * (long)pppppplVar50);
            }
          }
          *(long *******)(extraout_x8_00 + (long)pppppplVar46 * 8) = pppppplVar41;
        }
      }
      else {
        *pppppplVar41 = (long *****)*pppplVar30;
        *pppplVar30 = (long ***)pppppplVar41;
      }
      uStack_490 = (long ******)0x0;
      *pppppplVar60 = (long *****)((long)*pppppplVar60 + 1);
      FUN_10726558c(&uStack_490);
LAB_10725eaec:
    }
  }
  else {
    pplVar52 = &plStack_5e0;
    pppppplVar50 = (long ******)ppppplStack_5f8;
    for (plVar54 = plStack_5e0; ppppplStack_5f8 = (long *****)pppppplVar50, plVar54 != (long *)0x0;
        plVar54 = (long *)*plVar54) {
      pppppplVar19 = (long ******)(plVar54 + 2);
      FUN_10726ba08();
      pppppplVar60 = pppppplVar50;
      pppppplVar50 = (long ******)ppppplStack_5f8;
    }
    in_ZR = (long)pcStack_5d8 + *(long *)(lStack_618 + 0x18) == 0;
    if (!(bool)in_ZR) {
      pppplStack_520 = (long ****)&UNK_10e52b660;
      lStack_518 = 0;
      uStack_510 = 0;
      lStack_508 = 0;
      pplVar47 = pplVar52;
      while (pplVar47 = (long **)*pplVar47, pplVar47 != (long **)0x0) {
        ppppplStack_150 = (long *****)&UNK_10e52b660;
        plStack_140 = (long *)0x0;
        lStack_138 = 0;
        uStack_148 = 0;
        func_0x000107274800();
        if (((ulong)pppppplVar60 & 1) == 0) {
          pplVar23 = pplVar47 + 100;
          FUN_10726c724(pplVar23,1);
          if ((int)pplVar23 != 0) goto LAB_10725e51c;
        }
        else {
LAB_10725e51c:
          pplVar23 = (long **)&uStack_490;
          func_0x000100060964(pplVar23,&DAT_10f3500df);
          pppplStack_500 = (long ****)(double)(((long)pplVar47[0x1a] / 1000) * 1000);
          func_0x0001072747ec();
          func_0x000107274c24();
        }
        func_0x000107274800();
        if (((ulong)pplVar23 & 1) == 0) {
          pplVar23 = pplVar47 + 100;
          FUN_10726c724(pplVar23,2);
          if ((int)pplVar23 != 0) goto LAB_10725e55c;
        }
        else {
LAB_10725e55c:
          pplVar23 = (long **)&uStack_490;
          func_0x000100060964(pplVar23,&DAT_10f406a73);
          pppplStack_500 = (long ****)(double)(long)pplVar47[0x44];
          func_0x0001072747ec();
          func_0x000107274c24();
        }
        func_0x000107274800();
        if (((ulong)pplVar23 & 1) == 0) {
          pplVar23 = pplVar47 + 100;
          FUN_10726c724(pplVar23,3);
          if ((int)pplVar23 != 0) goto LAB_10725e598;
        }
        else {
LAB_10725e598:
          pplVar23 = (long **)&uStack_490;
          func_0x000100060964(pplVar23,"battery_level");
          pppplStack_500 =
               (long ****)(double)((float)(int)(*(float *)(pplVar47 + 0x45) * 20.0) / 20.0);
          func_0x0001072747ec();
          func_0x000107274c24();
        }
        func_0x000107274800();
        if (((ulong)pplVar23 & 1) == 0) {
          pppppplVar41 = (long ******)(pplVar47 + 100);
          FUN_10726c724(pppppplVar41,10);
          if ((int)pppppplVar41 != 0) goto LAB_10725e5e0;
        }
        else {
LAB_10725e5e0:
          func_0x000100060964(&uStack_490,&DAT_10f406a95);
          pppppplVar41 = &ppppplStack_4d0;
          FUN_10726d3d4(pppppplVar41,&ppppplStack_150,&uStack_490,pplVar47 + 0x52);
          func_0x000107274c24();
        }
        func_0x000107274800();
        if (((ulong)pppppplVar41 & 1) == 0) {
          iVar29 = (int)pplVar47 + 800;
          pppppplVar19 = (long ******)0xb;
          FUN_10726c724();
          if (iVar29 != 0) goto LAB_10725e620;
        }
        else {
LAB_10725e620:
          func_0x000100060964(&uStack_490,&DAT_10f406abc);
          pppppplVar19 = &ppppplStack_150;
          FUN_10726d3d4(&ppppplStack_4d0,pppppplVar19,&uStack_490,(long)pplVar47 + 0x291);
          func_0x000107274c24();
        }
        if (lStack_138 != 0) {
          func_0x0001078697d4(&ppppplStack_4d0,&ppppplStack_150);
          func_0x000104c2fe00(&uStack_490,pplVar47 + 2);
          ppppplVar40 = &pppplStack_520;
          uVar21 = 0;
          FUN_10726d4a8(ppppplVar40);
          if ((uVar21 & 1) != 0) {
            lVar33 = lStack_518 + (long)ppppplVar40 * 0x50;
            func_0x000104c318bc(lVar33,&uStack_490);
            func_0x0001078696e8(lVar33 + 0x38);
          }
          pppppplVar19 = &ppppplStack_4d0;
          FUN_10726c924(lStack_518 + (long)ppppplVar40 * 0x50 + 0x38);
          func_0x000107274c24();
          FUN_10726b264(&ppppplStack_4d0);
        }
        pppppplVar60 = &ppppplStack_150;
        FUN_10726ae88();
      }
      pppplStack_538 = (long ****)0x0;
      pppplStack_530 = (long ****)0x0;
      pppppplVar41 = (long ******)0x1371;
      uStack_528 = 0;
      ppppplVar40 = ppppplStack_608;
      ppppplVar27 = (long *****)pppplStack_600;
      pplVar47 = pplVar52;
LAB_10725e6dc:
      pplVar47 = (long **)*pplVar47;
      if (pplVar47 != (long **)0x0) {
        pplVar23 = pplVar47 + 0x66;
        do {
          pplVar23 = (long **)*pplVar23;
          if (pplVar23 == (long **)0x0) goto LAB_10725e6dc;
        } while (0xc < *(uint *)(pplVar23 + 2) ||
                 (1 << (ulong)(*(uint *)(pplVar23 + 2) & 0x1f) & 0x1371U) == 0);
        lVar33 = (long)ppppplVar40 + 0x290;
        FUN_10726b2e8(lVar33,pplVar47 + 2);
        if (lVar33 == 0) {
          ppppplStack_150 = (long *****)((ulong)ppppplStack_150 & 0xffffffffffffff00);
        }
        else {
          FUN_10726ac38(&ppppplStack_150,lVar33 + 0x48);
        }
        uStack_88 = lVar33 != 0;
        ppppplVar22 = *(long ******)((long)ppppplVar40 + 0x338);
        pppppplVar60 = (long ******)0x0;
        fVar57 = 0.0;
        ppppplVar53 = ppppplVar27;
        if ((ppppplVar22 != (long *****)0x0) && (*ppppplVar27 != (long ****)0x0)) {
          FUN_10726364c(ppppplVar27,pplVar47 + 9);
          uVar21 = (long)ppppplVar22 - 1;
          if (((ulong)ppppplVar22 & uVar21) == 0) {
            ppppplVar34 = (long *****)((ulong)ppppplVar27 & uVar21);
          }
          else {
            ppppplVar34 = ppppplVar27;
            if (ppppplVar22 <= ppppplVar27) {
              uVar31 = 0;
              if (ppppplVar22 != (long *****)0x0) {
                uVar31 = (ulong)ppppplVar27 / (ulong)ppppplVar22;
              }
              ppppplVar34 = (long *****)((long)ppppplVar27 - uVar31 * (long)ppppplVar22);
            }
          }
          plVar54 = *(long **)(*plVar38 + (long)ppppplVar34 * 8);
          ppppplVar40 = ppppplStack_608;
          ppppplVar53 = (long *****)pppplStack_600;
          if (plVar54 != (long *)0x0) {
            do {
              while( true ) {
                plVar54 = (long *)*plVar54;
                ppppplVar40 = ppppplStack_608;
                ppppplVar53 = (long *****)pppplStack_600;
                if (plVar54 == (long *)0x0) goto LAB_10725e804;
                ppppplVar24 = (long *****)plVar54[1];
                if (ppppplVar27 != ppppplVar24) break;
                lVar33 = (long)(plVar54 + 2);
                func_0x000104c32db4(lVar33,pplVar47 + 9);
                if ((int)lVar33 != 0) {
                  plVar16 = (long *)plVar54[9];
                  lVar33 = plVar54[10] - (long)plVar16;
                  ppppplVar40 = ppppplStack_608;
                  ppppplVar53 = (long *****)pppplStack_600;
                  if (1 < (ulong)(lVar33 / 0x18)) {
                    dVar8 = *(double *)((long)plVar16 + lVar33 + -8);
                    dVar6 = *(double *)((long)plVar16 + lVar33 + -0x10);
                    fVar57 = 0.0;
                    lVar35 = *(long *)((long)plVar16 + lVar33 + -0x18) - *plVar16;
                    if (lVar35 != 0) {
                      fVar57 = (float)(dVar6 - (double)plVar16[1]);
                      fVar59 = (float)(dVar8 - (double)plVar16[2]);
                      fVar57 = SQRT(fVar57 * fVar57 + fVar59 * fVar59) / ((float)lVar35 / 1000.0);
                    }
                    dVar6 = dVar6 - *(double *)((long)plVar16 + lVar33 + -0x28);
                    dVar8 = dVar8 - *(double *)((long)plVar16 + lVar33 + -0x20);
                    auVar5[8] = SUB81(dVar8,0);
                    auVar5._0_8_ = dVar6;
                    auVar5[9] = (char)((ulong)dVar8 >> 8);
                    auVar5[10] = (char)((ulong)dVar8 >> 0x10);
                    auVar5[0xb] = (char)((ulong)dVar8 >> 0x18);
                    auVar5[0xc] = (char)((ulong)dVar8 >> 0x20);
                    auVar5[0xd] = (char)((ulong)dVar8 >> 0x28);
                    auVar5[0xe] = (char)((ulong)dVar8 >> 0x30);
                    auVar5[0xf] = (char)((ulong)dVar8 >> 0x38);
                    fVar59 = (float)dVar6;
                    fVar7 = (float)auVar5._8_8_;
                    in_register_00005004 = SUB41(fVar7,0);
                    in_register_00005005 = (undefined1)((uint)fVar7 >> 8);
                    in_register_00005006 = (undefined1)((uint)fVar7 >> 0x10);
                    in_register_00005007 = (undefined1)((uint)fVar7 >> 0x18);
                    fVar55 = (float)(CONCAT17(in_register_00005007,
                                              CONCAT16(in_register_00005006,
                                                       CONCAT15(in_register_00005005,
                                                                CONCAT14(in_register_00005004,fVar59
                                                                        )))) >> 0x20);
                    fVar55 = SQRT(fVar59 * fVar59 + fVar55 * fVar55);
                    if (fVar55 != 0.0) {
                      fVar7 = fVar7 / fVar55;
                      in_register_00005004 = SUB41(fVar7,0);
                      in_register_00005005 = (undefined1)((uint)fVar7 >> 8);
                      in_register_00005006 = (undefined1)((uint)fVar7 >> 0x10);
                      in_register_00005007 = (undefined1)((uint)fVar7 >> 0x18);
                      pppppplVar60 = (long ******)
                                     NEON_rev64(CONCAT17(in_register_00005007,
                                                         CONCAT16(in_register_00005006,
                                                                  CONCAT15(in_register_00005005,
                                                                           CONCAT14(
                                                  in_register_00005004,fVar59 / fVar55)))),4);
                    }
                  }
                  goto LAB_10725e804;
                }
              }
              if (((ulong)ppppplVar22 & uVar21) == 0) {
                ppppplVar24 = (long *****)((ulong)ppppplVar24 & uVar21);
              }
              else if (ppppplVar22 <= ppppplVar24) {
                uVar31 = 0;
                if (ppppplVar22 != (long *****)0x0) {
                  uVar31 = (ulong)ppppplVar24 / (ulong)ppppplVar22;
                }
                ppppplVar24 = (long *****)((long)ppppplVar24 - uVar31 * (long)ppppplVar22);
              }
            } while (ppppplVar24 == ppppplVar34);
          }
        }
LAB_10725e804:
        uStack_4c8._0_5_ = CONCAT14(1,fVar57);
        ppppplStack_4d0 = (long *****)pppppplVar60;
        FUN_107266b1c(&uStack_490,pplVar47 + 9,&ppppplStack_4d0,&ppppplStack_150,
                      (long)ppppplVar40 + 0x148);
        pppppplVar19 = (long ******)&uStack_490;
        FUN_10726d718(&pppplStack_538);
        func_0x000107269e60(&uStack_490);
        pppppplVar60 = &ppppplStack_150;
        FUN_107269dd4();
        ppppplVar27 = ppppplVar53;
        goto LAB_10725e6dc;
      }
      if (pppplStack_538 == pppplStack_530) {
        iVar29 = 0;
        lVar33 = lStack_618;
      }
      else {
        iVar29 = 0;
        uStack_558 = 0;
        pppplStack_560 = (long ****)0x0;
        uStack_548 = 0;
        lStack_550 = 0;
        uStack_540 = 0x3f800000;
        while (pplVar52 = (long **)*pplVar52, pplVar52 != (long **)0x0) {
          FUN_10726b65c(&pppplStack_560,pplVar52[0x66]);
          plVar38 = pplVar52[0x54];
          if (-1 < (char)*(byte *)((long)pplVar52 + 0x2af)) {
            plVar38 = (long *)(ulong)*(byte *)((long)pplVar52 + 0x2af);
          }
          if (plVar38 == (long *)0x0) {
            iVar29 = iVar29 + 1;
          }
        }
        pppppplVar19 = (long ******)&pppplStack_538;
        FUN_1072729a4(aplStack_570);
        lVar33 = lStack_618;
        uStack_4c8 = (long ******)0x0;
        ppppplStack_4d0 = (long *****)0x0;
        uStack_4b8 = 0;
        uStack_4c0 = 0;
        uStack_4b0 = 0x3f800000;
        uStack_4f8 = 0;
        pppplStack_500 = (long ****)0x0;
        uStack_4e8 = 0;
        uStack_4f0 = 0;
        uStack_4e0 = 0x3f800000;
        lVar49 = aplStack_570[0][1];
        for (lVar35 = *aplStack_570[0]; lVar35 != lVar49; lVar35 = lVar35 + 0x70) {
          pppppplVar41 = (long ******)(lVar35 + 0x30);
          FUN_10726236c(&uStack_490,pppppplVar41);
          FUN_107262398(&ppppplStack_150,&uStack_490,0x1138369c0);
          FUN_10724ef84(apppplStack_4a8,&ppppplStack_150);
          pppppplVar19 = (long ******)apppplStack_4a8;
          FUN_10726db00(&ppppplStack_4d0);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apppplStack_4a8);
          func_0x000104c2f714(&ppppplStack_150);
          func_0x00010724b3d8(&uStack_490);
        }
        ppppplStack_150 = &pppplStack_500;
        uStack_148 = uStack_4f0;
        for (plVar38 = (long *)lStack_550; plVar38 != (long *)0x0; plVar38 = (long *)*plVar38) {
          func_0x00010002b838(&uStack_490,(&PTR_DAT_110996860)[*(uint *)(plVar38 + 2)]);
          pppppplVar19 = (long ******)&uStack_490;
          FUN_10726dcdc(&ppppplStack_150);
          func_0x000107274e5c();
        }
        func_0x0001005d0538(&pppplStack_500);
        func_0x0001005d0538(&ppppplStack_4d0);
        FUN_10726dd08(aplStack_570);
        pppppplVar60 = (long ******)&pppplStack_560;
        FUN_10726b534();
      }
      if ((*(long *)(lVar33 + 0x18) != 0) || (pppplStack_538 != pppplStack_530)) {
        plVar38 = *(long **)((long)ppppplStack_608 + 0x78);
        FUN_10726ddb0(&uStack_490,*puStack_628,0);
        FUN_1072729a4(&ppppplStack_150,&pppplStack_538);
        pppppplVar19 = (long ******)&uStack_490;
        (**(code **)(*plVar38 + 0x48))(plVar38,pppppplVar19,&ppppplStack_150);
        FUN_10726dd08(&ppppplStack_150);
        pppppplVar60 = (long ******)&uStack_490;
        FUN_10726e078();
      }
      ppppplVar40 = ppppplStack_608;
      if (lStack_508 != 0) {
        pppppplVar60 = *(long *******)((long)ppppplStack_608 + 0x78);
        pppppplVar19 = (long ******)&pppplStack_520;
        (*(code *)(*pppppplVar60)[0x17])();
      }
      puVar44 = *(undefined8 **)((long)ppppplVar40 + 0xb8);
      pppppplVar46 = (long ******)
                     (((long)pppplStack_530 - (long)pppplStack_538) / 0x70 +
                     *(long *)(lVar33 + 0x18));
      if (pppppplVar46 != (long ******)0x0) {
        func_0x00010727479c(0x144);
        ppppplVar40 = ppppplStack_608;
        ppuStack_470 = &PTR_FUN_110996720;
        uStack_468 = 0;
        uStack_448 = 0;
        uStack_444 = 1;
        uStack_438 = 0;
        uStack_430 = 0;
        uStack_440 = 0;
        uStack_450 = extraout_w8;
        func_0x000107275364(*(undefined8 *)((long)ppppplStack_608 + 0x2a8));
        func_0x0001072749ac();
        func_0x000107274bbc();
        lStack_138 = 0;
        plStack_140 = (long *)0x0;
        uStack_148 = 0;
        ppppplStack_150 = (long *****)0x0;
        uStack_130 = 0x3f800000;
        plVar38 = (long *)((long)ppppplVar40 + 0x2a0);
        while (plVar38 = (long *)*plVar38, plVar54 = plStack_140, plVar38 != (long *)0x0) {
          FUN_107267f50(&ppppplStack_4d0,*(undefined4 *)(plVar38 + 0x1b));
          ppppplStack_488 = (long *****)uStack_4c8;
          uStack_490 = (long ******)ppppplStack_4d0;
          uStack_480 = uStack_4c0;
          uStack_4c8 = (long ******)0x0;
          uStack_4c0 = 0;
          ppppplStack_4d0 = (long *****)0x0;
          uStack_478 = 1;
          pppppplVar41 = &ppppplStack_150;
          pppppplVar60 = (long ******)&uStack_490;
          func_0x00010726e0c0();
          pppppplVar19 = pppppplVar60;
          func_0x000107274e5c();
          func_0x000107274dac();
          if (((ulong)pppppplVar60 & 1) == 0) {
            *(int *)(pppppplVar41 + 5) = *(int *)(pppppplVar41 + 5) + 1;
          }
        }
        for (; plVar54 != (long *)0x0; plVar54 = (long *)*plVar54) {
          uVar21 = (ulong)uStack_490 >> 0x20;
          uStack_490 = (long ******)CONCAT44((int)uVar21,0x145);
          uStack_478 = 0;
          uStack_460 = 0;
          uStack_458 = 0;
          uStack_468 = 0;
          ppuStack_470 = &PTR_FUN_110996720;
          uStack_450 = 0x145;
          uStack_448 = 0;
          uStack_444 = 1;
          uStack_438 = 0;
          uStack_430 = 0;
          uStack_440 = 0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (&ppppplStack_4d0,plVar54 + 2);
          pppppplVar19 = (long ******)&uStack_490;
          FUN_10726e300(pppppplVar19,&UNK_10f406af7,&ppppplStack_4d0);
          pppplStack_500 = (long ****)CONCAT44(pppplStack_500._4_4_,*(undefined4 *)(plVar54 + 5));
          uStack_4f8 = CONCAT44(uStack_4f8._4_4_,1);
          func_0x00010726e09c(puVar44,pppppplVar19,&pppplStack_500);
          func_0x000107274dac();
          func_0x000107274bbc();
        }
        pppppplVar60 = &ppppplStack_150;
        func_0x00010726e3b0();
        func_0x00010727479c(0x146);
        ppuStack_470 = &PTR_FUN_110996720;
        uStack_468 = 0;
        uStack_448 = 0;
        uStack_444 = 1;
        uStack_438 = 0;
        uStack_430 = 0;
        uStack_440 = 0;
        ppppplStack_150 = (long *****)CONCAT44(ppppplStack_150._4_4_,1);
        uStack_148 = uStack_148 & 0xffffffff00000000;
        ppppplStack_4d0 = (long *****)*puVar44;
        pppppplVar41 = (long ******)0x3;
        uStack_4c8 = (long ******)CONCAT44(uStack_4c8._4_4_,3);
        func_0x000107274dfc();
        func_0x000107274bbc();
        func_0x00010727479c(0x14b);
        ppuStack_470 = &PTR_FUN_110996720;
        uStack_468 = 0;
        uStack_448 = 0;
        uStack_444 = 1;
        uStack_438 = 0;
        uStack_430 = 0;
        uStack_440 = 0;
        uStack_148 = CONCAT44(uStack_148._4_4_,3);
        ppppplStack_150 = (long *****)pppppplVar46;
        func_0x0001072749ac();
        func_0x000107274bbc();
      }
      func_0x000107274308(0x14f);
      ppppplStack_150 = (long *****)CONCAT44(ppppplStack_150._4_4_,iVar29);
      uStack_148 = CONCAT44(uStack_148._4_4_,extraout_w8_00);
      func_0x0001072749ac();
      func_0x000107274bbc();
      if (iVar29 != 0) {
        func_0x000107274308(0x14f);
        ppppplStack_150 = (long *****)CONCAT44(ppppplStack_150._4_4_,iVar29);
        uStack_148 = CONCAT44(uStack_148._4_4_,extraout_w8_01);
        ppppplStack_4d0 = (long *****)*puVar44;
        uStack_4c8 = (long ******)CONCAT44(uStack_4c8._4_4_,3);
        func_0x000107274dfc();
        func_0x000107274bbc();
      }
      __ZNSt3__16chrono12steady_clock3nowEv();
      ppppplVar40 = ppppplStack_608;
      if (*(char *)((long)ppppplStack_608 + 0xe0) == '\x01') {
        pppppplVar50 = (long ******)((long)ppppplStack_608 + 0xd8);
        FUN_10725d8e8();
        func_0x000107275494((long)pppppplVar60 - (long)*pppppplVar50);
        func_0x000107274308(0x147);
        func_0x000107275364(*puVar44);
        func_0x000107274de4();
        pppppplVar60 = pppppplVar50;
      }
      else {
        func_0x000107275494((long)pppppplVar60 - *(long *)((long)ppppplStack_608 + 0xc0));
        func_0x000107274308(0x148);
        func_0x000107275364(*puVar44);
        func_0x000107274de4();
      }
      func_0x000107274bbc();
      __ZNSt3__16chrono12steady_clock3nowEv();
      if ((*(byte *)((long)ppppplVar40 + 0xe0) & 1) == 0) {
        *(undefined1 *)((long)ppppplVar40 + 0xe0) = 1;
      }
      *(long *******)((long)ppppplVar40 + 0xd8) = pppppplVar60;
      puVar44 = (undefined8 *)((long)ppppplVar40 + 0xd8);
      FUN_10725d8e8();
      in_ZR = *(byte *)((long)ppppplVar40 + 0xd0) == 0;
      puVar37 = (undefined8 *)((long)ppppplVar40 + 200);
      if ((bool)in_ZR) {
        puVar37 = puVar44;
      }
      uVar28 = *puVar37;
      if ((*(byte *)((long)ppppplVar40 + 0xd0) & 1) == 0) {
        *(undefined1 *)((long)ppppplVar40 + 0xd0) = 1;
      }
      *(undefined8 *)((long)ppppplVar40 + 200) = uVar28;
      FUN_10726e43c(&pppplStack_538);
      FUN_10726e4c8(&pppplStack_520);
    }
  }
  func_0x00010727529c();
  pppppplVar60 = (long ******)&pppplStack_5c0;
  FUN_107272920(pppppplVar60);
  func_0x00010727416c(uStack_80);
  if ((bool)in_ZR) {
    return pppppplVar60;
  }
  ___stack_chk_fail();
  func_0x000107274bbc();
  FUN_10726e43c(&pppplStack_538);
  FUN_10726e4c8(&pppplStack_520);
  func_0x00010727529c();
  pppppplVar60 = (long ******)&pppplStack_5c0;
  FUN_107272920();
  func_0x00010727477c();
  pcVar10 = FUN_10725f1dc;
  func_0x0001072754a0();
  pppppplVar50 = pppppplVar60;
  pppppplVar45 = pppppplVar19;
  plStack_5e0 = (long *)&stack0xfffffffffffffff0;
  pcStack_5d8 = pcVar10;
  func_0x000107274388();
  cVar3 = *(char *)(pppppplVar45 + 0xe);
  uStack_648 = extraout_x8_01;
  if (cVar3 == '\x01') {
    ppppplStack_7f0 = (long *****)0x0;
    ppppplStack_7e8 = (long *****)0x0;
    ppplStack_7e0 = (long ***)0x0;
    ppppplVar40 = pppppplVar19[10];
    pppppplVar41 = pppppplVar19 + 10;
    if (((ulong)ppppplVar40 & 1) != 0) {
      pppppplVar41 = (long ******)((long)ppppplVar40 + 7);
    }
    pppppplVar46 = (long ******)0x1;
    lVar33 = (long)*(int *)(pppppplVar19 + 0xb) << 3;
    for (; lVar33 != 0; lVar33 = lVar33 + -8) {
      ppppplVar40 = *pppppplVar41;
      if (*(int *)(ppppplVar40 + 6) - 1U < 3) {
        func_0x0001072749f0(ppppplVar40[3]);
        ppppplStack_6e8 =
             (long *****)CONCAT44(ppppplStack_6e8._4_4_,*(undefined4 *)(ppppplVar40 + 6));
        uStack_690 = 0;
        uStack_680 = (*(byte *)(ppppplVar40 + 2) >> 1 & 1) != 0;
        if ((bool)uStack_680) {
          pplStack_688 = (long **)ppppplVar40[5][2];
        }
        else {
          pplStack_688 = (long **)((ulong)pplStack_688 & 0xffffffffffffff00);
        }
        func_0x000107274a38();
        func_0x00010727506c();
      }
      if ((((ulong)ppppplVar40[2] & 1) != 0) && (*(char *)(ppppplVar40[4] + 8) == '\x01')) {
        func_0x0001072749f0(ppppplVar40[3]);
        pppplVar30 = (long ****)&PTR_PTR_113234390;
        if (ppppplVar40[4] != (long ****)0x0) {
          pppplVar30 = ppppplVar40[4];
        }
        FUN_107262edc(&ppppplStack_6e8,pppplVar30);
        uStack_690 = 1;
        pplStack_688 = (long **)((ulong)pplStack_688 & 0xffffffffffffff00);
        uStack_680 = 0;
        func_0x000107274a38();
        func_0x00010727506c();
      }
      pppppplVar41 = pppppplVar41 + 1;
      pppppplVar19 = pppppplVar45;
    }
    pppppplVar50 = pppppplVar60 + 0x49;
    func_0x0001072756fc();
    func_0x0001072752ac();
    pppppplVar41 = (long ******)0x0;
    if (pppppplVar60[0xb] != (long *****)0x0) {
      ppppplVar27 = pppppplVar60[0x4a];
      pppppplVar43 = pppppplVar60 + 0x5c;
      pppppplVar18 = pppppplVar60 + 0x5f;
      pppppplVar2 = pppppplVar60 + 0x5e;
      for (ppppplVar40 = pppppplVar60[0x49]; ppppplVar40 != ppppplVar27;
          ppppplVar40 = ppppplVar40 + 0x15) {
        if (*(int *)(ppppplVar40 + 0x12) == 1) {
          FUN_1072687e8(&pppplStack_8d0,ppppplVar40[9],ppppplVar40[0xd]);
          pppppplVar50 = pppppplVar43;
          FUN_10726e5fc(pppppplVar43,&pppplStack_8d0);
          if (pppppplVar50 == (long ******)0x0) {
            FUN_10726e534(pppppplVar60[0x17],0x141,*(undefined4 *)(ppppplVar40 + 0x12));
            pppppplVar41 = &ppppplStack_890;
            ppppplStack_890 = (long *****)pppppplVar60;
            func_0x000104c2fe00(auStack_888,&pppplStack_8d0);
            FUN_10726ec14(auStack_850,ppppplVar40 + 7);
            func_0x000107275794(&ppppplStack_7f0);
            pppppplVar19 = &ppppplStack_7d8;
            FUN_10726ea1c(pppppplVar19,&ppppplStack_890);
            puStack_730 = (undefined8 *)0x1;
            func_0x0001072756cc();
            ppppplStack_728 = (long *****)pppppplVar19;
            pppppplVar19[1] = (long *****)0x0;
            pppppplVar19[2] = (long *****)0x0;
            *pppppplVar19 = (long *****)&PTR_FUN_110996300;
            FUN_10727303c(&pppplStack_720,&ppppplStack_7f0);
            puStack_650 = (undefined8 *)0x0;
            puVar44 = (undefined8 *)0xc0;
            __Znwm();
            *puVar44 = &PTR_FUN_110996350;
            FUN_10727303c(puVar44 + 1,&pppplStack_720);
            puStack_650 = puVar44;
            pppppplVar19[3] = (long *****)&PTR_FUN_110996540;
            FUN_10727406c(pppppplVar19 + 4,&pppplStack_668);
            FUN_1072740c8(&pppplStack_668);
            FUN_107261d10(&pppplStack_720);
            ppppplStack_728 = (long *****)0x0;
            func_0x000107272fe8(&puStack_738);
            ppppplStack_8e0 = (long *****)(pppppplVar19 + 3);
            ppppplStack_8d8 = (long *****)pppppplVar19;
            FUN_107261d10(&ppppplStack_7f0);
            func_0x000107261d34(&ppppplStack_890);
            func_0x000104c2fe00(&pppplStack_720,&pppplStack_8d0);
            ppppplStack_6e0 = ppppplStack_8d8;
            ppppplStack_6e8 = ppppplStack_8e0;
            if ((long ******)ppppplStack_8d8 != (long ******)0x0) {
              do {
                func_0x000107274880();
              } while (extraout_w10 != 0);
            }
            uStack_6d8 = 1;
            pppppplVar50 = pppppplVar18;
            FUN_10726364c(pppppplVar18,&pppplStack_720);
            pppppplVar51 = (long ******)pppppplVar60[0x5d];
            pppppplVar19 = pppppplVar50;
            if (pppppplVar51 != (long ******)0x0) {
              pppppplVar46 = (long ******)((long)pppppplVar51 + -1);
              if (((ulong)pppppplVar51 & (ulong)pppppplVar46) == 0) {
                pppppplVar41 = (long ******)((ulong)pppppplVar46 & (ulong)pppppplVar50);
              }
              else {
                pppppplVar41 = pppppplVar50;
                if (pppppplVar51 <= pppppplVar50) {
                  uVar21 = 0;
                  if (pppppplVar51 != (long ******)0x0) {
                    uVar21 = (ulong)pppppplVar50 / (ulong)pppppplVar51;
                  }
                  pppppplVar41 = (long ******)((long)pppppplVar50 - uVar21 * (long)pppppplVar51);
                }
              }
              pppplVar30 = (*pppppplVar43)[(long)pppppplVar41];
              if (pppplVar30 != (long ****)0x0) {
                do {
                  while( true ) {
                    pppplVar30 = (long ****)*pppplVar30;
                    if (pppplVar30 == (long ****)0x0) goto LAB_10725f540;
                    pppppplVar25 = (long ******)pppplVar30[1];
                    if (pppppplVar25 != pppppplVar50) break;
                    pppppplVar19 = (long ******)(pppplVar30 + 2);
                    func_0x000104c32db4(pppppplVar19,&pppplStack_720);
                    if (((ulong)pppppplVar19 & 1) != 0) goto LAB_10725f698;
                  }
                  if (((ulong)pppppplVar51 & (ulong)pppppplVar46) == 0) {
                    pppppplVar25 = (long ******)((ulong)pppppplVar25 & (ulong)pppppplVar46);
                  }
                  else if (pppppplVar51 <= pppppplVar25) {
                    uVar21 = 0;
                    if (pppppplVar51 != (long ******)0x0) {
                      uVar21 = (ulong)pppppplVar25 / (ulong)pppppplVar51;
                    }
                    pppppplVar25 = (long ******)((long)pppppplVar25 - uVar21 * (long)pppppplVar51);
                  }
                } while (pppppplVar25 == pppppplVar41);
              }
            }
LAB_10725f540:
            func_0x0001072756b0();
            ppplStack_7e0 = (long ***)0x1;
            *pppppplVar19 = (long *****)0x0;
            pppppplVar19[1] = (long *****)pppppplVar50;
            ppppplStack_7f0 = (long *****)pppppplVar19;
            ppppplStack_7e8 = (long *****)pppppplVar2;
            func_0x000104c2fe00(pppppplVar19 + 2,&pppplStack_720);
            pppppplVar46 = pppppplVar19 + 9;
            *(undefined1 *)pppppplVar46 = 0;
            *(undefined4 *)(pppppplVar19 + 0xb) = 0xffffffff;
            FUN_10726e80c(pppppplVar46);
            uVar14 = uStack_6d8;
            uVar12 = (int)(uStack_6d8 + 1) < 0;
            uVar13 = uStack_6d8 == 0xffffffff;
            if (!(bool)uVar13) {
              ppppplStack_890 = (long *****)pppppplVar46;
              (*(code *)(&PTR_DAT_110995fb8)[uStack_6d8])(&ppppplStack_890,&ppppplStack_6e8);
              *(uint *)(pppppplVar19 + 0xb) = uVar14;
            }
            func_0x000107274964(pppppplVar60[0x5f]);
            if ((pppppplVar51 == (long ******)0x0) ||
               (func_0x000107274958(CONCAT17(in_register_00005007,
                                             CONCAT16(in_register_00005006,
                                                      CONCAT15(in_register_00005005,
                                                               CONCAT14(in_register_00005004,
                                                                        CONCAT13(
                                                  in_register_00005003,
                                                  CONCAT12(in_register_00005002,
                                                           CONCAT11(in_register_00005001,in_b0))))))
                                            ),*(undefined4 *)(pppppplVar60 + 0x60),
                                    (float)pppppplVar51), (bool)uVar12)) {
              func_0x00010727593c();
              func_0x00010727413c();
              FUN_10726e864(pppppplVar43);
              pppppplVar51 = (long ******)pppppplVar60[0x5d];
              if (((ulong)pppppplVar51 & (ulong)((long)pppppplVar51 + -1)) == 0) {
                uVar13 = 1;
                pppppplVar41 = (long ******)((ulong)((long)pppppplVar51 + -1) & (ulong)pppppplVar50)
                ;
              }
              else {
                uVar13 = pppppplVar50 == pppppplVar51;
                pppppplVar41 = pppppplVar50;
                if (pppppplVar51 <= pppppplVar50) {
                  uVar21 = 0;
                  if (pppppplVar51 != (long ******)0x0) {
                    uVar21 = (ulong)pppppplVar50 / (ulong)pppppplVar51;
                  }
                  pppppplVar41 = (long ******)((long)pppppplVar50 - uVar21 * (long)pppppplVar51);
                }
              }
            }
            ppppplVar53 = *pppppplVar43;
            pppplVar30 = ppppplVar53[(long)pppppplVar41];
            if (pppplVar30 == (long ****)0x0) {
              *pppppplVar19 = *pppppplVar2;
              *pppppplVar2 = (long *****)pppppplVar19;
              ppppplVar53[(long)pppppplVar41] = (long ****)pppppplVar2;
              if (*pppppplVar19 != (long *****)0x0) {
                func_0x000107275394();
                if ((bool)uVar13) {
                  pppppplVar46 = (long ******)((ulong)extraout_x9_00 & extraout_x10_00);
                }
                else {
                  pppppplVar46 = extraout_x9_00;
                  if (pppppplVar51 <= extraout_x9_00) {
                    uVar21 = 0;
                    if (pppppplVar51 != (long ******)0x0) {
                      uVar21 = (ulong)extraout_x9_00 / (ulong)pppppplVar51;
                    }
                    pppppplVar46 = (long ******)((long)extraout_x9_00 - uVar21 * (long)pppppplVar51)
                    ;
                  }
                }
                *(long *******)(extraout_x8_02 + (long)pppppplVar46 * 8) = pppppplVar19;
              }
            }
            else {
              *pppppplVar19 = (long *****)*pppplVar30;
              *pppplVar30 = (long ***)pppppplVar19;
            }
            ppppplStack_7f0 = (long *****)0x0;
            *pppppplVar18 = (long *****)((long)*pppppplVar18 + 1);
            func_0x00010726e9a0(&ppppplStack_7f0);
            pppppplVar46 = pppppplVar19;
LAB_10725f698:
            func_0x00010726e9d4(&pppplStack_720);
            ppppplVar53 = pppppplVar60[0xb];
            if (*(int *)((long)ppppplVar40 + 0x8c) == 3) {
              func_0x000107936978(&pppplStack_720,0,ppppplVar40[0x10]);
            }
            else {
              uVar13 = *(int *)((long)ppppplVar40 + 0x8c) == 2;
              if ((bool)uVar13) {
                func_0x000107275440(&PTR_DAT_1109ed2d0);
                pppppplVar41 = (long ******)ppppplVar40[0x10][2];
                func_0x000107936a5c(&pppplStack_720);
                uStack_6f8 = (long ******)CONCAT44(2,(undefined4)uStack_6f8);
                ppppplStack_700 = (long *****)&DAT_11383d918;
                ppppplVar22 = ppppplStack_718;
                if (((ulong)ppppplStack_718 & 1) != 0) {
                  ppppplVar22 = *(long ******)((ulong)ppppplStack_718 & 0xfffffffffffffffe);
                }
                func_0x0001001a53d4(&ppppplStack_700,(ulong)pppppplVar41 & 0xfffffffffffffffc,
                                    ppppplVar22);
                func_0x0001072758b4();
                lVar33 = extraout_x9_01;
                if (!(bool)uVar13) {
                  lVar33 = extraout_x8_03 + 8;
                }
                ppppplVar22 = ppppplStack_718;
                if (((ulong)ppppplStack_718 & 1) != 0) {
                  ppppplVar22 = *(long ******)((ulong)ppppplStack_718 & 0xfffffffffffffffe);
                }
                func_0x0001001a53d4(&ppplStack_710,*(ulong *)(lVar33 + 0x18) & 0xfffffffffffffffc,
                                    ppppplVar22);
                func_0x0001072758b4();
                lVar33 = extraout_x9_02;
                if (!(bool)uVar13) {
                  lVar33 = extraout_x8_04 + 8;
                }
                ppppplVar22 = ppppplStack_718;
                if (((ulong)ppppplStack_718 & 1) != 0) {
                  ppppplVar22 = *(long ******)((ulong)ppppplStack_718 & 0xfffffffffffffffe);
                }
                func_0x0001001a53d4(&uStack_708,*(ulong *)(lVar33 + 0x20) & 0xfffffffffffffffc,
                                    ppppplVar22);
              }
              else {
                func_0x000107275440(&PTR_DAT_1109ed2d0);
              }
            }
            (*(code *)(*ppppplVar53)[2])(ppppplVar53,&pppplStack_720,&ppppplStack_8e0);
            func_0x0001079369e4(&pppplStack_720);
            func_0x00010726e9f8(&ppppplStack_8e0);
            pppppplVar19 = pppppplVar45;
          }
          pppppplVar50 = (long ******)&pppplStack_8d0;
          func_0x000104c2f714();
        }
      }
    }
    if (*(char *)(pppppplVar60 + 0x1e) == '\x01') {
      __ZNSt3__16chrono12steady_clock3nowEv();
      if (((ulong)pppppplVar60[0x1e] & 1) == 0) {
        *(undefined1 *)(pppppplVar60 + 0x1e) = 1;
      }
      pppppplVar60[0x1d] = (long *****)pppppplVar50;
      pppppplVar50 = pppppplVar60 + 0x1d;
      FUN_10725d8e8();
      ppppplVar40 = pppppplVar60[0x17];
      func_0x000107275494((long)*pppppplVar50 - (long)pppppplVar60[0x18]);
      pppplStack_720 = (long ****)CONCAT44(pppplStack_720._4_4_,0x14a);
      uStack_708 = (long ******)((ulong)uStack_708._4_4_ << 0x20);
      uStack_6f0 = 0;
      ppppplStack_6e8 = (long *****)0x0;
      ppppplStack_890 = (long *****)extraout_x8_05;
      func_0x000107274ef4();
      *(undefined8 *)(extraout_x10_01 + 0x20) = extraout_x9_03;
      *(undefined8 *)(extraout_x10_01 + 0x28) = 0;
      ppppplStack_6e0 = (long *****)CONCAT44(ppppplStack_6e0._4_4_,extraout_w8_02);
      uStack_6d8 = 0;
      uStack_6d4 = 1;
      *(undefined8 *)(extraout_x10_01 + 0x58) = 0;
      *(undefined8 *)(extraout_x10_01 + 0x60) = 0;
      *(undefined8 *)(extraout_x10_01 + 0x50) = 0;
      ppppplStack_7f0 = (long *****)*ppppplVar40;
      ppppplStack_7e8 = (long *****)CONCAT44(ppppplStack_7e8._4_4_,3);
      func_0x000107275064();
      pppppplVar50 = (long ******)&pppplStack_720;
      FUN_107262330();
    }
  }
  plVar38 = (long *)(ulong)(*(char *)(pppppplVar19 + 0x22) != '\0' || cVar3 != '\0');
  if (*(char *)(pppppplVar19 + 7) == '\x01') {
    pppppplVar50 = pppppplVar19;
    FUN_10725ffc4(pppppplVar19);
    if (*(char *)(pppppplVar60 + 0x30) == '\x01') {
      pppppplVar43 = pppppplVar60 + 0x29;
      FUN_107262f24(pppppplVar43,pppppplVar50);
    }
    else {
      pppppplVar43 = (long ******)0x1;
    }
    pppppplVar18 = pppppplVar19;
    FUN_10725ffc4(pppppplVar19);
    pppppplVar50 = pppppplVar60 + 0x29;
    FUN_10725ffdc(pppppplVar50,pppppplVar18);
  }
  else {
    pppppplVar43 = (long ******)0x0;
  }
  if (*(char *)(pppppplVar19 + 0x3a) == '\x01') {
    pppppplVar50 = pppppplVar19 + 0x37;
    func_0x00010549026c(pppppplVar50);
    pppppplVar18 = pppppplVar60 + 0x31;
    FUN_107260010(pppppplVar18,pppppplVar50);
    if (((ulong)pppppplVar43 & 1) == 0) {
      pppppplVar43 = (long ******)(ulong)((uint)*(byte *)(pppppplVar60 + 0x30) & (uint)pppppplVar18)
      ;
    }
    else {
      pppppplVar43 = (long ******)0x1;
    }
    pppppplVar18 = pppppplVar19 + 0x37;
    func_0x00010549026c(pppppplVar18);
    pppppplVar50 = pppppplVar60 + 0x31;
    func_0x0001002a8234(pppppplVar50,pppppplVar18);
  }
  if (*(char *)(pppppplVar19 + 0x49) != '\x01') goto LAB_10725f9b8;
  if (*(char *)(pppppplVar60 + 0x3f) == '\x01') {
    func_0x000107275674();
    func_0x000107274f64();
    pppppplVar50 = pppppplVar41 + 3;
    func_0x0001000e107c(pppppplVar50,pppppplVar19 + 0x42);
    if ((int)pppppplVar50 == 0) goto LAB_10725f998;
    func_0x000107275674();
    func_0x000107274f64();
    pppppplVar50 = pppppplVar41 + 6;
    func_0x0001000e107c(pppppplVar50,pppppplVar19 + 0x45);
    if ((int)pppppplVar50 == 0) goto LAB_10725f998;
    func_0x000107275674();
    func_0x000107274f64();
    func_0x0001000e107c(pppppplVar41,pppppplVar19 + 0x3f);
    uVar14 = (uint)pppppplVar41 ^ 1;
    if (((ulong)pppppplVar43 & 1) != 0) goto LAB_10725f9a0;
LAB_10725f98c:
    pppppplVar43 = (long ******)(ulong)(*(byte *)(pppppplVar60 + 0x30) & uVar14);
  }
  else {
LAB_10725f998:
    uVar14 = 1;
    if (((ulong)pppppplVar43 & 1) == 0) goto LAB_10725f98c;
LAB_10725f9a0:
    pppppplVar43 = (long ******)0x1;
  }
  func_0x000107260050(pppppplVar19 + 0x3f);
  pppppplVar50 = pppppplVar60 + 0x35;
  FUN_107260068(pppppplVar50,pppppplVar19 + 0x3f);
LAB_10725f9b8:
  if (*(char *)(pppppplVar19 + 0x3e) == '\x01') {
    pppppplVar41 = pppppplVar19 + 0x3b;
    func_0x00010549026c(pppppplVar41);
    pppppplVar50 = pppppplVar60 + 0x40;
    FUN_107260010(pppppplVar50,pppppplVar41);
    if (((ulong)pppppplVar43 & 1) == 0) {
      pppppplVar43 = (long ******)(ulong)((uint)*(byte *)(pppppplVar60 + 0x30) & (uint)pppppplVar50)
      ;
    }
    else {
      pppppplVar43 = (long ******)0x1;
    }
    pppppplVar41 = pppppplVar19 + 0x3b;
    func_0x00010549026c(pppppplVar41);
    pppppplVar50 = pppppplVar60 + 0x40;
    func_0x0001002a8234(pppppplVar50,pppppplVar41);
  }
  if (*(char *)(pppppplVar19 + 0x15) == '\x01') {
    ppppplStack_7f0 = (long *****)0x0;
    ppppplStack_7e8 = (long *****)0x0;
    ppplStack_7e0 = (long ***)0x0;
    func_0x00010727522c();
    for (pppppplVar19 = pppppplVar19 + 0x11; pppppplVar19 != (long ******)0x0;
        pppppplVar19 = pppppplVar19 + -1) {
      lVar33 = *plVar38;
      if (*(int *)(lVar33 + 0x38) != 0) {
        func_0x0001072749f0(*(undefined8 *)(lVar33 + 0x10));
        FUN_1072633e4(pppppplVar46 + 7,lVar33);
        uStack_690 = 2;
        pplStack_688 = (long **)((ulong)pplStack_688 & 0xffffffffffffff00);
        uStack_680 = 0;
        func_0x000107274a38();
        func_0x00010727506c();
      }
      plVar38 = plVar38 + 1;
    }
    pppppplVar50 = pppppplVar60 + 0x4c;
    func_0x0001072756fc();
    func_0x0001072752ac();
    plVar38 = (long *)0x1;
    pppppplVar19 = pppppplVar45;
  }
  if (*(char *)(pppppplVar19 + 0x1c) == '\x01') {
    ppppplStack_7f0 = (long *****)0x0;
    ppppplStack_7e8 = (long *****)0x0;
    ppplStack_7e0 = (long ***)0x0;
    func_0x00010727522c();
    for (pppppplVar19 = pppppplVar19 + 0x18; pppppplVar19 != (long ******)0x0;
        pppppplVar19 = pppppplVar19 + -1) {
      lVar33 = *plVar38;
      func_0x0001072749f0(*(undefined8 *)(lVar33 + 0x10));
      func_0x0001072633f0(pppppplVar46 + 7,lVar33);
      uStack_690 = 3;
      pplStack_688 = (long **)((ulong)pplStack_688 & 0xffffffffffffff00);
      uStack_680 = 0;
      func_0x000107274a38();
      func_0x00010727506c();
      plVar38 = plVar38 + 1;
    }
    pppppplVar50 = pppppplVar60 + 0x4f;
    func_0x0001072756fc();
    func_0x0001072752ac();
    plVar38 = (long *)0x1;
    pppppplVar19 = pppppplVar45;
  }
  if (*(char *)(pppppplVar19 + 0x5c) == '\x01') {
    pppppplVar41 = pppppplVar19 + 0x59;
    while (pppppplVar41 = (long ******)*pppppplVar41, pppppplVar41 != (long ******)0x0) {
      FUN_107262e9c(&pppplStack_720,pppppplVar41 + 2);
      pppppplVar50 = pppppplVar60 + 0x57;
      FUN_1072633fc(pppppplVar50,&pppplStack_720);
      func_0x00010793c22c();
      func_0x000107275224();
    }
  }
  uVar13 = *(char *)(pppppplVar19 + 0x28) == '\x01';
  if ((bool)uVar13) {
    FUN_107260464(pppppplVar19 + 0x23);
    ppppplStack_7e8 = (long *****)0x0;
    ppppplStack_7f0 = (long *****)0x0;
    ppppplStack_7d8 = (long *****)0x0;
    ppplStack_7e0 = (long ***)0x0;
    ppppplStack_7d0 = (long *****)CONCAT44(ppppplStack_7d0._4_4_,0x3f800000);
    ppppplVar40 = &pppplStack_720;
    FUN_10726047c(ppppplVar40,pppppplVar19 + 0x1d,&ppppplStack_7f0);
    uVar56 = SUB84(ppppplVar40,0);
    func_0x00010727577c();
    uStack_8e4 = uVar56;
    FUN_10726ea70(&pppplStack_720);
    FUN_10726ea70(&ppppplStack_7f0);
    pppppplVar41 = pppppplVar19 + 0x23;
    FUN_107260464();
    pppplStack_668 = (long ****)0x0;
    pppplStack_660 = (long ****)0x0;
    pppppplVar19 = pppppplVar19 + 0x25;
    uStack_658 = 0;
    while (pppppplVar19 = (long ******)*pppppplVar19, pppppplVar19 != (long ******)0x0) {
      pppppplVar41 = pppppplVar60 + 0x57;
      FUN_1072638f8(pppppplVar41,pppppplVar19 + 2);
      if (pppppplVar41 == (long ******)0x0) {
        FUN_10724ef84(&pppplStack_720,pppppplVar19 + 2);
        func_0x0001000fecf4(&pppplStack_668,&pppplStack_720);
        pppppplVar41 = (long ******)&pppplStack_720;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      }
    }
    uVar13 = pppplStack_668 == pppplStack_660;
    if ((bool)uVar13) {
      FUN_107260494(pppppplVar60 + 0x72,&uStack_8e4);
      FUN_1072604ac(pppppplVar60);
    }
    else {
      __ZNSt3__16chrono12steady_clock3nowEv();
      ppppplVar22 = pppppplVar60[9];
      func_0x000107275794(&ppppplStack_7f0);
      uStack_7c0 = 0;
      ppppplVar40 = &pppplStack_8d0;
      ppppplStack_7d8 = (long *****)pppppplVar60;
      ppppplStack_7d0 = (long *****)pppppplVar41;
      ppppplStack_7c8 = (long *****)pppppplVar60;
      uStack_7bc = uVar56;
      FUN_1072712d8(ppppplVar40,1);
      ppplVar9 = ppplStack_7e0;
      ppppplVar53 = ppppplStack_7e8;
      ppppplVar27 = ppppplStack_7f0;
      puVar44 = puStack_8c0;
      puStack_8c0[2] = 0;
      *puStack_8c0 = &PTR_FUN_110996168;
      puStack_8c0[1] = 0;
      pppplStack_720 = (long ****)ppppplStack_7f0;
      ppppplStack_718 = ppppplStack_7e8;
      ppppplStack_7f0 = (long *****)0x0;
      ppppplStack_7e8 = (long *****)0x0;
      ppplStack_710 = ppplStack_7e0;
      ppppplStack_700 = ppppplStack_7d0;
      uStack_708 = (long ******)ppppplStack_7d8;
      uStack_6f0 = CONCAT44(uStack_7bc,uStack_7c0);
      uStack_6f8 = (long ******)ppppplStack_7c8;
      pppplStack_878 = (long ****)0x0;
      func_0x0001072756cc();
      *ppppplVar40 = (long ****)&PTR_FUN_1109961b8;
      ppppplVar40[1] = (long ****)ppppplVar27;
      pppplStack_720 = (long ****)0x0;
      ppppplStack_718 = (long *****)0x0;
      ppppplVar40[2] = (long ****)ppppplVar53;
      ppppplVar40[3] = (long ****)ppplVar9;
      ppppplVar53 = ppppplStack_7c8;
      ppppplVar27 = ppppplStack_7d8;
      pppplVar30 = (long ****)CONCAT44(uStack_7bc,uStack_7c0);
      ppppplVar40[5] = (long ****)ppppplStack_7d0;
      ppppplVar40[4] = (long ****)ppppplVar27;
      ppppplVar40[7] = pppplVar30;
      ppppplVar40[6] = (long ****)ppppplVar53;
      pppplStack_878 = (long ****)ppppplVar40;
      func_0x00010727157c(puVar44 + 3,&ppppplStack_890);
      FUN_10727163c(&ppppplStack_890);
      func_0x00010725b1d4(&pppplStack_720);
      puVar44 = puStack_8c0;
      puStack_8c0 = (undefined8 *)0x0;
      func_0x00010727167c(&pppplStack_8d0);
      puStack_730 = puVar44;
      ppppplStack_8e0 = (long *****)0x0;
      ppppplStack_8d8 = (long *****)0x0;
      puStack_738 = puVar44 + 3;
      (*(code *)(*ppppplVar22)[2])(ppppplVar22,&pppplStack_668,&puStack_738);
      func_0x0001072716b0(&puStack_738);
      func_0x00010727168c(&ppppplStack_8e0);
      func_0x00010727579c();
    }
    pppppplVar50 = (long ******)&pppplStack_668;
    func_0x0001000e30f4();
  }
  else if ((int)plVar38 == 0) {
    if (((ulong)pppppplVar43 & 1) != 0) {
      func_0x000107275578();
    }
  }
  else {
    ppppplStack_7e8 = (long *****)0x0;
    ppppplStack_7f0 = (long *****)0x0;
    ppppplStack_7d8 = (long *****)0x0;
    ppplStack_7e0 = (long ***)0x0;
    ppppplStack_7d0 = (long *****)CONCAT44(ppppplStack_7d0._4_4_,0x3f800000);
    FUN_107263994(&pppplStack_720,&ppppplStack_7f0);
    uStack_8c8 = 0;
    pppplStack_8d0 = (long ****)0x0;
    uStack_8b8 = 0;
    puStack_8c0 = (undefined8 *)0x0;
    uStack_8b0 = 0x3f800000;
    pppppplVar41 = &ppppplStack_890;
    FUN_10726047c(pppppplVar41,pppppplVar19 + 0x1d,&pppplStack_8d0);
    uVar56 = SUB84(pppppplVar41,0);
    func_0x00010727577c();
    FUN_10726ea70(&ppppplStack_890);
    FUN_10726ea70(&pppplStack_8d0);
    FUN_10726eafc(&pppplStack_720);
    FUN_10726eafc(&ppppplStack_7f0);
    pppplStack_668 = (long ****)CONCAT44(pppplStack_668._4_4_,uVar56);
    pppppplVar50 = pppppplVar60 + 0x72;
    FUN_107260494(pppppplVar50,&pppplStack_668);
    func_0x000107275578();
  }
  func_0x00010727416c(uStack_648);
  if (!(bool)uVar13) {
    ___stack_chk_fail();
    FUN_10726ea70(&ppppplStack_890);
    FUN_10726ea70(&pppplStack_8d0);
    FUN_10726eafc(&pppplStack_720);
    pppppplVar41 = &ppppplStack_7f0;
    FUN_10726eafc();
    func_0x00010727477c();
    if (((ulong)pppppplVar41[7] & 1) == 0) {
      func_0x000104bdc2c8();
      if (*(char *)(pppppplVar41 + 7) == '\x01') {
        FUN_107262f3c();
      }
      else {
        FUN_107262f68();
      }
      return pppppplVar41;
    }
    return pppppplVar41;
  }
  return pppppplVar50;
code_r0x00010725e2c0:
  func_0x0001072745f4();
  lVar35 = plVar16[1];
  lVar33 = (long)(plVar54 + 100);
  FUN_10726c724(lVar33,6);
  if ((int)lVar33 == 0) goto LAB_10725e220;
  lVar33 = *(long *)(lVar35 + -0x18);
  lVar35 = plVar54[0x1a];
  in_NG = lVar33 - lVar35 < 0;
  in_ZR = lVar33 == lVar35;
  if (lVar35 <= lVar33) goto LAB_10725e220;
LAB_10725e2e8:
  uVar56 = (undefined4)plVar54[0x1b];
  uVar58 = (undefined4)((ulong)plVar54[0x1b] >> 0x20);
  uVar28 = plVar54[0x1c];
  in_b0 = (undefined1)uVar28;
  in_register_00005001 = (undefined1)((ulong)uVar28 >> 8);
  in_register_00005002 = (undefined1)((ulong)uVar28 >> 0x10);
  in_register_00005003 = (undefined1)((ulong)uVar28 >> 0x18);
  in_register_00005004 = (undefined1)((ulong)uVar28 >> 0x20);
  in_register_00005005 = (undefined1)((ulong)uVar28 >> 0x28);
  in_register_00005006 = (undefined1)((ulong)uVar28 >> 0x30);
  in_register_00005007 = (undefined1)((ulong)uVar28 >> 0x38);
  FUN_107246514(&uStack_490,0);
  plVar16 = &uStack_490;
  FUN_10726c7c0();
  uVar28 = CONCAT17(in_register_00005007,
                    CONCAT16(in_register_00005006,
                             CONCAT15(in_register_00005005,
                                      CONCAT14(in_register_00005004,
                                               CONCAT13(in_register_00005003,
                                                        CONCAT12(in_register_00005002,
                                                                 CONCAT11(in_register_00005001,in_b0
                                                                         )))))));
  func_0x0001072745f4();
  uVar36 = plVar54[0x1a];
  puVar44 = (undefined8 *)plVar16[1];
  if ((undefined8 *)plVar16[2] <= puVar44) {
    plVar48 = (long *)*plVar16;
    unaff_x27 = (long ******)((long)puVar44 - (long)plVar48);
    uVar21 = (long)unaff_x27 / 0x18 + 1;
    if (uVar21 < 0xaaaaaaaaaaaaaab) {
      uVar4 = (plVar16[2] - (long)plVar48) / 0x18;
      uVar31 = uVar4 * 2;
      if (uVar31 < uVar21 || uVar31 - uVar21 == 0) {
        uVar31 = uVar21;
      }
      if (0x555555555555554 < uVar4) {
        uVar31 = 0xaaaaaaaaaaaaaaa;
      }
      if (uVar31 < 0xaaaaaaaaaaaaaab) {
        lVar33 = uVar31 * 0x18;
        __Znwm();
        puVar44 = (undefined8 *)(lVar33 + (long)unaff_x27);
        *puVar44 = uVar36;
        puVar44[1] = uVar28;
        puVar44[2] = CONCAT44(uVar58,uVar56);
        puVar37 = puVar44 + 3;
        plVar42 = puVar44 + ((long)unaff_x27 / -0x18) * 3;
        plVar17 = plVar42;
        _memcpy(plVar42,plVar48,unaff_x27);
        *plVar16 = (long)plVar42;
        plVar16[1] = (long)puVar37;
        plVar16[2] = lVar33 + uVar31 * 0x18;
        param_1 = ppppplStack_608;
        if (plVar48 != (long *)0x0) {
          __ZdlPv();
          plVar17 = plVar48;
          param_1 = ppppplStack_608;
        }
        goto LAB_10725e3d0;
      }
      func_0x000104bd35f4();
    }
    else {
      FUN_10726c918();
    }
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x10725efd0);
    (*pcVar10)();
  }
  *puVar44 = uVar36;
  puVar37 = puVar44 + 3;
  puVar44[1] = uVar28;
  puVar44[2] = CONCAT44(uVar58,uVar56);
  plVar17 = plVar16;
LAB_10725e3d0:
  plVar16[1] = (long)puVar37;
  func_0x0001072745f4();
  uVar21 = (plVar17[1] - *plVar17) / 0x18;
  in_NG = (long)(uVar21 - 0xb) < 0;
  in_ZR = uVar21 == 0xb;
  if (10 < uVar21) {
    func_0x0001072745f4();
    lVar33 = *plVar17;
    lVar35 = plVar17[1];
    func_0x0001072745f4();
    plVar16 = plVar17;
    func_0x0001072745f4();
    lVar49 = *plVar16;
    func_0x0001072745f4();
    lVar33 = (lVar35 - lVar33) + *plVar16 + -0xf0;
    in_NG = lVar49 - lVar33 < 0;
    in_ZR = lVar49 == lVar33;
    if (!(bool)in_ZR) {
      lVar33 = plVar17[1] - lVar33;
      in_NG = lVar33 < 0;
      in_ZR = lVar33 == 0;
      if (!(bool)in_ZR) {
        func_0x0001072755bc(lVar49);
      }
      plVar17[1] = lVar49 + lVar33;
    }
  }
  goto LAB_10725e220;
}



/* Entry: 10725f1dc; end: 10725ffc3;  */

long ***** FUN_10725f1dc(long *****param_1,long param_2)

{
  long *****ppppplVar1;
  long *****ppppplVar2;
  ulong *puVar3;
  undefined **ppuVar4;
  char cVar5;
  long **pplVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  long *****ppppplVar10;
  undefined8 *puVar11;
  long lVar12;
  long ****pppplVar13;
  undefined4 extraout_w8;
  uint uVar14;
  undefined8 extraout_x8;
  long *****ppppplVar15;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long *****extraout_x8_03;
  ulong uVar16;
  long *****extraout_x9;
  long *****ppppplVar17;
  long extraout_x9_00;
  long extraout_x9_01;
  undefined8 extraout_x9_02;
  int extraout_w10;
  ulong extraout_x10;
  long extraout_x10_00;
  long *****ppppplVar18;
  long *****unaff_x22;
  long lVar19;
  long *plVar20;
  long ****pppplVar21;
  long ****pppplVar22;
  long *plVar23;
  long *****unaff_x24;
  long ***ppplVar24;
  long *****ppppplVar25;
  long ****pppplVar26;
  undefined4 uStack_2b4;
  long ****pppplStack_2b0;
  long ****pppplStack_2a8;
  long ***ppplStack_2a0;
  undefined8 uStack_298;
  undefined8 *puStack_290;
  undefined8 uStack_288;
  undefined4 uStack_280;
  long ****pppplStack_260;
  undefined1 auStack_258 [16];
  long ***ppplStack_248;
  undefined1 auStack_220 [96];
  long ****pppplStack_1c0;
  long ****pppplStack_1b8;
  long **pplStack_1b0;
  long ****pppplStack_1a8;
  long ****pppplStack_1a0;
  long ****pppplStack_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  long ****pppplStack_f8;
  long ***ppplStack_f0;
  long ****pppplStack_e8;
  long **pplStack_e0;
  undefined8 uStack_d8;
  long ****pppplStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long ****pppplStack_b8;
  long ****pppplStack_b0;
  uint uStack_a8;
  undefined1 uStack_a4;
  undefined4 uStack_60;
  ulong uStack_58;
  undefined1 uStack_50;
  long ***ppplStack_38;
  long ***ppplStack_30;
  undefined8 uStack_28;
  undefined8 *puStack_20;
  undefined8 uStack_18;
  
  func_0x0001072754a0();
  ppppplVar10 = param_1;
  lVar12 = param_2;
  func_0x000107274388();
  cVar5 = *(char *)(lVar12 + 0x70);
  uStack_18 = extraout_x8;
  if (cVar5 == '\x01') {
    pppplStack_1c0 = (long ****)0x0;
    pppplStack_1b8 = (long ****)0x0;
    pplStack_1b0 = (long **)0x0;
    uVar16 = *(ulong *)(param_2 + 0x50);
    puVar3 = (ulong *)(param_2 + 0x50);
    if ((uVar16 & 1) != 0) {
      puVar3 = (ulong *)(uVar16 + 7);
    }
    unaff_x24 = (long *****)0x1;
    lVar19 = (long)*(int *)(param_2 + 0x58) << 3;
    for (; lVar19 != 0; lVar19 = lVar19 + -8) {
      uVar16 = *puVar3;
      if (*(int *)(uVar16 + 0x30) - 1U < 3) {
        func_0x0001072749f0(*(undefined8 *)(uVar16 + 0x18));
        pppplStack_b8 = (long ****)CONCAT44(pppplStack_b8._4_4_,*(undefined4 *)(uVar16 + 0x30));
        uStack_60 = 0;
        uStack_50 = (*(byte *)(uVar16 + 0x10) >> 1 & 1) != 0;
        if ((bool)uStack_50) {
          uStack_58 = *(ulong *)(*(long *)(uVar16 + 0x28) + 0x10);
        }
        else {
          uStack_58 = uStack_58 & 0xffffffffffffff00;
        }
        func_0x000107274a38();
        func_0x00010727506c();
      }
      if (((*(byte *)(uVar16 + 0x10) & 1) != 0) &&
         (*(char *)(*(long *)(uVar16 + 0x20) + 0x40) == '\x01')) {
        func_0x0001072749f0(*(undefined8 *)(uVar16 + 0x18));
        ppuVar4 = &PTR_PTR_113234390;
        if (*(undefined ***)(uVar16 + 0x20) != (undefined **)0x0) {
          ppuVar4 = *(undefined ***)(uVar16 + 0x20);
        }
        FUN_107262edc(&pppplStack_b8,ppuVar4);
        uStack_60 = 1;
        uStack_58 = uStack_58 & 0xffffffffffffff00;
        uStack_50 = 0;
        func_0x000107274a38();
        func_0x00010727506c();
      }
      puVar3 = puVar3 + 1;
      param_2 = lVar12;
    }
    ppppplVar10 = param_1 + 0x49;
    func_0x0001072756fc();
    func_0x0001072752ac();
    unaff_x22 = (long *****)0x0;
    if (param_1[0xb] != (long ****)0x0) {
      pppplVar21 = param_1[0x4a];
      ppppplVar18 = param_1 + 0x5c;
      ppppplVar1 = param_1 + 0x5f;
      ppppplVar2 = param_1 + 0x5e;
      for (pppplVar26 = param_1[0x49]; pppplVar26 != pppplVar21; pppplVar26 = pppplVar26 + 0x15) {
        if (*(int *)(pppplVar26 + 0x12) == 1) {
          FUN_1072687e8(&ppplStack_2a0,pppplVar26[9],pppplVar26[0xd]);
          ppppplVar10 = ppppplVar18;
          FUN_10726e5fc(ppppplVar18,&ppplStack_2a0);
          if (ppppplVar10 == (long *****)0x0) {
            FUN_10726e534(param_1[0x17],0x141,*(undefined4 *)(pppplVar26 + 0x12));
            unaff_x22 = &pppplStack_260;
            pppplStack_260 = (long ****)param_1;
            func_0x000104c2fe00(auStack_258,&ppplStack_2a0);
            FUN_10726ec14(auStack_220,pppplVar26 + 7);
            func_0x000107275794(&pppplStack_1c0);
            ppppplVar10 = &pppplStack_1a8;
            FUN_10726ea1c(ppppplVar10,&pppplStack_260);
            puStack_100 = (undefined8 *)0x1;
            func_0x0001072756cc();
            pppplStack_f8 = (long ****)ppppplVar10;
            ppppplVar10[1] = (long ****)0x0;
            ppppplVar10[2] = (long ****)0x0;
            *ppppplVar10 = (long ****)&PTR_FUN_110996300;
            FUN_10727303c(&ppplStack_f0,&pppplStack_1c0);
            puStack_20 = (undefined8 *)0x0;
            puVar11 = (undefined8 *)0xc0;
            __Znwm();
            *puVar11 = &PTR_FUN_110996350;
            FUN_10727303c(puVar11 + 1,&ppplStack_f0);
            puStack_20 = puVar11;
            ppppplVar10[3] = (long ****)&PTR_FUN_110996540;
            FUN_10727406c(ppppplVar10 + 4,&ppplStack_38);
            FUN_1072740c8(&ppplStack_38);
            FUN_107261d10(&ppplStack_f0);
            pppplStack_f8 = (long ****)0x0;
            func_0x000107272fe8(&puStack_108);
            pppplStack_2b0 = (long ****)(ppppplVar10 + 3);
            pppplStack_2a8 = (long ****)ppppplVar10;
            FUN_107261d10(&pppplStack_1c0);
            func_0x000107261d34(&pppplStack_260);
            func_0x000104c2fe00(&ppplStack_f0,&ppplStack_2a0);
            pppplStack_b0 = pppplStack_2a8;
            pppplStack_b8 = pppplStack_2b0;
            if ((long *****)pppplStack_2a8 != (long *****)0x0) {
              do {
                func_0x000107274880();
              } while (extraout_w10 != 0);
            }
            uStack_a8 = 1;
            ppppplVar17 = ppppplVar1;
            FUN_10726364c(ppppplVar1,&ppplStack_f0);
            ppppplVar25 = (long *****)param_1[0x5d];
            ppppplVar10 = ppppplVar17;
            if (ppppplVar25 != (long *****)0x0) {
              unaff_x24 = (long *****)((long)ppppplVar25 + -1);
              if (((ulong)ppppplVar25 & (ulong)unaff_x24) == 0) {
                unaff_x22 = (long *****)((ulong)unaff_x24 & (ulong)ppppplVar17);
              }
              else {
                unaff_x22 = ppppplVar17;
                if (ppppplVar25 <= ppppplVar17) {
                  uVar16 = 0;
                  if (ppppplVar25 != (long *****)0x0) {
                    uVar16 = (ulong)ppppplVar17 / (ulong)ppppplVar25;
                  }
                  unaff_x22 = (long *****)((long)ppppplVar17 - uVar16 * (long)ppppplVar25);
                }
              }
              ppplVar24 = (*ppppplVar18)[(long)unaff_x22];
              if (ppplVar24 != (long ***)0x0) {
                do {
                  while( true ) {
                    ppplVar24 = (long ***)*ppplVar24;
                    if (ppplVar24 == (long ***)0x0) goto LAB_10725f540;
                    ppppplVar15 = (long *****)ppplVar24[1];
                    if (ppppplVar15 != ppppplVar17) break;
                    ppppplVar10 = (long *****)(ppplVar24 + 2);
                    func_0x000104c32db4(ppppplVar10,&ppplStack_f0);
                    if (((ulong)ppppplVar10 & 1) != 0) goto LAB_10725f698;
                  }
                  if (((ulong)ppppplVar25 & (ulong)unaff_x24) == 0) {
                    ppppplVar15 = (long *****)((ulong)ppppplVar15 & (ulong)unaff_x24);
                  }
                  else if (ppppplVar25 <= ppppplVar15) {
                    uVar16 = 0;
                    if (ppppplVar25 != (long *****)0x0) {
                      uVar16 = (ulong)ppppplVar15 / (ulong)ppppplVar25;
                    }
                    ppppplVar15 = (long *****)((long)ppppplVar15 - uVar16 * (long)ppppplVar25);
                  }
                } while (ppppplVar15 == unaff_x22);
              }
            }
LAB_10725f540:
            func_0x0001072756b0();
            pplStack_1b0 = (long **)0x1;
            *ppppplVar10 = (long ****)0x0;
            ppppplVar10[1] = (long ****)ppppplVar17;
            pppplStack_1c0 = (long ****)ppppplVar10;
            pppplStack_1b8 = (long ****)ppppplVar2;
            func_0x000104c2fe00(ppppplVar10 + 2,&ppplStack_f0);
            ppppplVar15 = ppppplVar10 + 9;
            *(undefined1 *)ppppplVar15 = 0;
            *(undefined4 *)(ppppplVar10 + 0xb) = 0xffffffff;
            FUN_10726e80c(ppppplVar15);
            uVar14 = uStack_a8;
            uVar7 = (int)(uStack_a8 + 1) < 0;
            uVar8 = uStack_a8 == 0xffffffff;
            if (!(bool)uVar8) {
              pppplStack_260 = (long ****)ppppplVar15;
              (*(code *)(&PTR_DAT_110995fb8)[uStack_a8])(&pppplStack_260,&pppplStack_b8);
              *(uint *)(ppppplVar10 + 0xb) = uVar14;
            }
            func_0x000107274964(param_1[0x5f]);
            if ((ppppplVar25 == (long *****)0x0) || (func_0x000107274958(), (bool)uVar7)) {
              func_0x00010727593c();
              func_0x00010727413c();
              FUN_10726e864(ppppplVar18);
              ppppplVar25 = (long *****)param_1[0x5d];
              if (((ulong)ppppplVar25 & (ulong)((long)ppppplVar25 + -1)) == 0) {
                uVar8 = 1;
                unaff_x22 = (long *****)((ulong)((long)ppppplVar25 + -1) & (ulong)ppppplVar17);
              }
              else {
                uVar8 = ppppplVar17 == ppppplVar25;
                unaff_x22 = ppppplVar17;
                if (ppppplVar25 <= ppppplVar17) {
                  uVar16 = 0;
                  if (ppppplVar25 != (long *****)0x0) {
                    uVar16 = (ulong)ppppplVar17 / (ulong)ppppplVar25;
                  }
                  unaff_x22 = (long *****)((long)ppppplVar17 - uVar16 * (long)ppppplVar25);
                }
              }
            }
            pppplVar22 = *ppppplVar18;
            ppplVar24 = pppplVar22[(long)unaff_x22];
            if (ppplVar24 == (long ***)0x0) {
              *ppppplVar10 = *ppppplVar2;
              *ppppplVar2 = (long ****)ppppplVar10;
              pppplVar22[(long)unaff_x22] = (long ***)ppppplVar2;
              if (*ppppplVar10 != (long ****)0x0) {
                func_0x000107275394();
                if ((bool)uVar8) {
                  ppppplVar17 = (long *****)((ulong)extraout_x9 & extraout_x10);
                }
                else {
                  ppppplVar17 = extraout_x9;
                  if (ppppplVar25 <= extraout_x9) {
                    uVar16 = 0;
                    if (ppppplVar25 != (long *****)0x0) {
                      uVar16 = (ulong)extraout_x9 / (ulong)ppppplVar25;
                    }
                    ppppplVar17 = (long *****)((long)extraout_x9 - uVar16 * (long)ppppplVar25);
                  }
                }
                *(long ******)(extraout_x8_00 + (long)ppppplVar17 * 8) = ppppplVar10;
              }
            }
            else {
              *ppppplVar10 = (long ****)*ppplVar24;
              *ppplVar24 = (long **)ppppplVar10;
            }
            pppplStack_1c0 = (long ****)0x0;
            *ppppplVar1 = (long ****)((long)*ppppplVar1 + 1);
            func_0x00010726e9a0(&pppplStack_1c0);
            unaff_x24 = ppppplVar10;
LAB_10725f698:
            func_0x00010726e9d4(&ppplStack_f0);
            pppplVar22 = param_1[0xb];
            if (*(int *)((long)pppplVar26 + 0x8c) == 3) {
              func_0x000107936978(&ppplStack_f0,0,pppplVar26[0x10]);
            }
            else {
              uVar8 = *(int *)((long)pppplVar26 + 0x8c) == 2;
              if ((bool)uVar8) {
                func_0x000107275440(&PTR_DAT_1109ed2d0);
                unaff_x22 = (long *****)pppplVar26[0x10][2];
                func_0x000107936a5c(&ppplStack_f0);
                uStack_c8 = (long *****)CONCAT44(2,(undefined4)uStack_c8);
                pppplStack_d0 = (long ****)&DAT_11383d918;
                pppplVar13 = pppplStack_e8;
                if (((ulong)pppplStack_e8 & 1) != 0) {
                  pppplVar13 = *(long *****)((ulong)pppplStack_e8 & 0xfffffffffffffffe);
                }
                func_0x0001001a53d4(&pppplStack_d0,(ulong)unaff_x22 & 0xfffffffffffffffc,pppplVar13)
                ;
                func_0x0001072758b4();
                lVar19 = extraout_x9_00;
                if (!(bool)uVar8) {
                  lVar19 = extraout_x8_01 + 8;
                }
                pppplVar13 = pppplStack_e8;
                if (((ulong)pppplStack_e8 & 1) != 0) {
                  pppplVar13 = *(long *****)((ulong)pppplStack_e8 & 0xfffffffffffffffe);
                }
                func_0x0001001a53d4(&pplStack_e0,*(ulong *)(lVar19 + 0x18) & 0xfffffffffffffffc,
                                    pppplVar13);
                func_0x0001072758b4();
                lVar19 = extraout_x9_01;
                if (!(bool)uVar8) {
                  lVar19 = extraout_x8_02 + 8;
                }
                pppplVar13 = pppplStack_e8;
                if (((ulong)pppplStack_e8 & 1) != 0) {
                  pppplVar13 = *(long *****)((ulong)pppplStack_e8 & 0xfffffffffffffffe);
                }
                func_0x0001001a53d4(&uStack_d8,*(ulong *)(lVar19 + 0x20) & 0xfffffffffffffffc,
                                    pppplVar13);
              }
              else {
                func_0x000107275440(&PTR_DAT_1109ed2d0);
              }
            }
            (*(code *)(*pppplVar22)[2])(pppplVar22,&ppplStack_f0,&pppplStack_2b0);
            func_0x0001079369e4(&ppplStack_f0);
            func_0x00010726e9f8(&pppplStack_2b0);
            param_2 = lVar12;
          }
          ppppplVar10 = (long *****)&ppplStack_2a0;
          func_0x000104c2f714();
        }
      }
    }
    if (*(char *)(param_1 + 0x1e) == '\x01') {
      __ZNSt3__16chrono12steady_clock3nowEv();
      if (((ulong)param_1[0x1e] & 1) == 0) {
        *(undefined1 *)(param_1 + 0x1e) = 1;
      }
      param_1[0x1d] = (long ****)ppppplVar10;
      ppppplVar10 = param_1 + 0x1d;
      FUN_10725d8e8();
      pppplVar26 = param_1[0x17];
      func_0x000107275494((long)*ppppplVar10 - (long)param_1[0x18]);
      ppplStack_f0 = (long ***)CONCAT44(ppplStack_f0._4_4_,0x14a);
      uStack_d8 = (long *****)((ulong)uStack_d8._4_4_ << 0x20);
      uStack_c0 = 0;
      pppplStack_b8 = (long ****)0x0;
      pppplStack_260 = (long ****)extraout_x8_03;
      func_0x000107274ef4();
      *(undefined8 *)(extraout_x10_00 + 0x20) = extraout_x9_02;
      *(undefined8 *)(extraout_x10_00 + 0x28) = 0;
      pppplStack_b0 = (long ****)CONCAT44(pppplStack_b0._4_4_,extraout_w8);
      uStack_a8 = 0;
      uStack_a4 = 1;
      *(undefined8 *)(extraout_x10_00 + 0x58) = 0;
      *(undefined8 *)(extraout_x10_00 + 0x60) = 0;
      *(undefined8 *)(extraout_x10_00 + 0x50) = 0;
      pppplStack_1c0 = (long ****)*pppplVar26;
      pppplStack_1b8 = (long ****)CONCAT44(pppplStack_1b8._4_4_,3);
      func_0x000107275064();
      ppppplVar10 = (long *****)&ppplStack_f0;
      FUN_107262330();
    }
  }
  plVar23 = (long *)(ulong)(*(char *)(param_2 + 0x110) != '\0' || cVar5 != '\0');
  if (*(char *)(param_2 + 0x38) == '\x01') {
    lVar19 = param_2;
    FUN_10725ffc4(param_2);
    if (*(char *)(param_1 + 0x30) == '\x01') {
      ppppplVar18 = param_1 + 0x29;
      FUN_107262f24(ppppplVar18,lVar19);
    }
    else {
      ppppplVar18 = (long *****)0x1;
    }
    lVar19 = param_2;
    FUN_10725ffc4(param_2);
    ppppplVar10 = param_1 + 0x29;
    FUN_10725ffdc(ppppplVar10,lVar19);
  }
  else {
    ppppplVar18 = (long *****)0x0;
  }
  if (*(char *)(param_2 + 0x1d0) == '\x01') {
    lVar19 = param_2 + 0x1b8;
    func_0x00010549026c(lVar19);
    ppppplVar10 = param_1 + 0x31;
    FUN_107260010(ppppplVar10,lVar19);
    if (((ulong)ppppplVar18 & 1) == 0) {
      ppppplVar18 = (long *****)(ulong)((uint)*(byte *)(param_1 + 0x30) & (uint)ppppplVar10);
    }
    else {
      ppppplVar18 = (long *****)0x1;
    }
    lVar19 = param_2 + 0x1b8;
    func_0x00010549026c(lVar19);
    ppppplVar10 = param_1 + 0x31;
    func_0x0001002a8234(ppppplVar10,lVar19);
  }
  if (*(char *)(param_2 + 0x248) != '\x01') goto LAB_10725f9b8;
  if (*(char *)(param_1 + 0x3f) == '\x01') {
    func_0x000107275674();
    func_0x000107274f64();
    ppppplVar10 = unaff_x22 + 3;
    func_0x0001000e107c(ppppplVar10,param_2 + 0x210);
    if ((int)ppppplVar10 == 0) goto LAB_10725f998;
    func_0x000107275674();
    func_0x000107274f64();
    ppppplVar10 = unaff_x22 + 6;
    func_0x0001000e107c(ppppplVar10,param_2 + 0x228);
    if ((int)ppppplVar10 == 0) goto LAB_10725f998;
    func_0x000107275674();
    func_0x000107274f64();
    func_0x0001000e107c(unaff_x22,param_2 + 0x1f8);
    uVar14 = (uint)unaff_x22 ^ 1;
    if (((ulong)ppppplVar18 & 1) != 0) goto LAB_10725f9a0;
LAB_10725f98c:
    ppppplVar18 = (long *****)(ulong)(*(byte *)(param_1 + 0x30) & uVar14);
  }
  else {
LAB_10725f998:
    uVar14 = 1;
    if (((ulong)ppppplVar18 & 1) == 0) goto LAB_10725f98c;
LAB_10725f9a0:
    ppppplVar18 = (long *****)0x1;
  }
  func_0x000107260050(param_2 + 0x1f8);
  ppppplVar10 = param_1 + 0x35;
  FUN_107260068(ppppplVar10,param_2 + 0x1f8);
LAB_10725f9b8:
  if (*(char *)(param_2 + 0x1f0) == '\x01') {
    lVar19 = param_2 + 0x1d8;
    func_0x00010549026c(lVar19);
    ppppplVar10 = param_1 + 0x40;
    FUN_107260010(ppppplVar10,lVar19);
    if (((ulong)ppppplVar18 & 1) == 0) {
      ppppplVar18 = (long *****)(ulong)((uint)*(byte *)(param_1 + 0x30) & (uint)ppppplVar10);
    }
    else {
      ppppplVar18 = (long *****)0x1;
    }
    lVar19 = param_2 + 0x1d8;
    func_0x00010549026c(lVar19);
    ppppplVar10 = param_1 + 0x40;
    func_0x0001002a8234(ppppplVar10,lVar19);
  }
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    pppplStack_1c0 = (long ****)0x0;
    pppplStack_1b8 = (long ****)0x0;
    pplStack_1b0 = (long **)0x0;
    func_0x00010727522c();
    for (param_2 = param_2 + 0x88; param_2 != 0; param_2 = param_2 + -8) {
      lVar19 = *plVar23;
      if (*(int *)(lVar19 + 0x38) != 0) {
        func_0x0001072749f0(*(undefined8 *)(lVar19 + 0x10));
        FUN_1072633e4(unaff_x24 + 7,lVar19);
        uStack_60 = 2;
        uStack_58 = uStack_58 & 0xffffffffffffff00;
        uStack_50 = 0;
        func_0x000107274a38();
        func_0x00010727506c();
      }
      plVar23 = plVar23 + 1;
    }
    ppppplVar10 = param_1 + 0x4c;
    func_0x0001072756fc();
    func_0x0001072752ac();
    plVar23 = (long *)0x1;
    param_2 = lVar12;
  }
  if (*(char *)(param_2 + 0xe0) == '\x01') {
    pppplStack_1c0 = (long ****)0x0;
    pppplStack_1b8 = (long ****)0x0;
    pplStack_1b0 = (long **)0x0;
    func_0x00010727522c();
    for (param_2 = param_2 + 0xc0; param_2 != 0; param_2 = param_2 + -8) {
      lVar19 = *plVar23;
      func_0x0001072749f0(*(undefined8 *)(lVar19 + 0x10));
      func_0x0001072633f0(unaff_x24 + 7,lVar19);
      uStack_60 = 3;
      uStack_58 = uStack_58 & 0xffffffffffffff00;
      uStack_50 = 0;
      func_0x000107274a38();
      func_0x00010727506c();
      plVar23 = plVar23 + 1;
    }
    ppppplVar10 = param_1 + 0x4f;
    func_0x0001072756fc();
    func_0x0001072752ac();
    plVar23 = (long *)0x1;
    param_2 = lVar12;
  }
  if (*(char *)(param_2 + 0x2e0) == '\x01') {
    plVar20 = (long *)(param_2 + 0x2c8);
    while (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0) {
      FUN_107262e9c(&ppplStack_f0,plVar20 + 2);
      ppppplVar10 = param_1 + 0x57;
      FUN_1072633fc(ppppplVar10,&ppplStack_f0);
      func_0x00010793c22c();
      func_0x000107275224();
    }
  }
  uVar8 = *(char *)(param_2 + 0x140) == '\x01';
  if ((bool)uVar8) {
    FUN_107260464(param_2 + 0x118);
    pppplStack_1b8 = (long ****)0x0;
    pppplStack_1c0 = (long ****)0x0;
    pppplStack_1a8 = (long ****)0x0;
    pplStack_1b0 = (long **)0x0;
    pppplStack_1a0 = (long ****)CONCAT44(pppplStack_1a0._4_4_,0x3f800000);
    pppplVar26 = &ppplStack_f0;
    FUN_10726047c(pppplVar26,param_2 + 0xe8,&pppplStack_1c0);
    uVar9 = SUB84(pppplVar26,0);
    func_0x00010727577c();
    uStack_2b4 = uVar9;
    FUN_10726ea70(&ppplStack_f0);
    FUN_10726ea70(&pppplStack_1c0);
    ppppplVar10 = (long *****)(param_2 + 0x118);
    FUN_107260464();
    ppplStack_38 = (long ***)0x0;
    ppplStack_30 = (long ***)0x0;
    plVar23 = (long *)(param_2 + 0x128);
    uStack_28 = 0;
    while (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0) {
      ppppplVar10 = param_1 + 0x57;
      FUN_1072638f8(ppppplVar10,plVar23 + 2);
      if (ppppplVar10 == (long *****)0x0) {
        FUN_10724ef84(&ppplStack_f0,plVar23 + 2);
        func_0x0001000fecf4(&ppplStack_38,&ppplStack_f0);
        ppppplVar10 = (long *****)&ppplStack_f0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      }
    }
    uVar8 = ppplStack_38 == ppplStack_30;
    if ((bool)uVar8) {
      FUN_107260494(param_1 + 0x72,&uStack_2b4);
      FUN_1072604ac(param_1);
    }
    else {
      __ZNSt3__16chrono12steady_clock3nowEv();
      pppplVar13 = param_1[9];
      func_0x000107275794(&pppplStack_1c0);
      uStack_190 = 0;
      pppplVar26 = &ppplStack_2a0;
      pppplStack_1a8 = (long ****)param_1;
      pppplStack_1a0 = (long ****)ppppplVar10;
      pppplStack_198 = (long ****)param_1;
      uStack_18c = uVar9;
      FUN_1072712d8(pppplVar26,1);
      pplVar6 = pplStack_1b0;
      pppplVar22 = pppplStack_1b8;
      pppplVar21 = pppplStack_1c0;
      puVar11 = puStack_290;
      puStack_290[2] = 0;
      *puStack_290 = &PTR_FUN_110996168;
      puStack_290[1] = 0;
      ppplStack_f0 = (long ***)pppplStack_1c0;
      pppplStack_e8 = pppplStack_1b8;
      pppplStack_1c0 = (long ****)0x0;
      pppplStack_1b8 = (long ****)0x0;
      pplStack_e0 = pplStack_1b0;
      pppplStack_d0 = pppplStack_1a0;
      uStack_d8 = (long *****)pppplStack_1a8;
      uStack_c0 = CONCAT44(uStack_18c,uStack_190);
      uStack_c8 = (long *****)pppplStack_198;
      ppplStack_248 = (long ***)0x0;
      func_0x0001072756cc();
      *pppplVar26 = (long ***)&PTR_FUN_1109961b8;
      pppplVar26[1] = (long ***)pppplVar21;
      ppplStack_f0 = (long ***)0x0;
      pppplStack_e8 = (long ****)0x0;
      pppplVar26[2] = (long ***)pppplVar22;
      pppplVar26[3] = (long ***)pplVar6;
      pppplVar22 = pppplStack_198;
      pppplVar21 = pppplStack_1a8;
      ppplVar24 = (long ***)CONCAT44(uStack_18c,uStack_190);
      pppplVar26[5] = (long ***)pppplStack_1a0;
      pppplVar26[4] = (long ***)pppplVar21;
      pppplVar26[7] = ppplVar24;
      pppplVar26[6] = (long ***)pppplVar22;
      ppplStack_248 = (long ***)pppplVar26;
      func_0x00010727157c(puVar11 + 3,&pppplStack_260);
      FUN_10727163c(&pppplStack_260);
      func_0x00010725b1d4(&ppplStack_f0);
      puVar11 = puStack_290;
      puStack_290 = (undefined8 *)0x0;
      func_0x00010727167c(&ppplStack_2a0);
      puStack_100 = puVar11;
      pppplStack_2b0 = (long ****)0x0;
      pppplStack_2a8 = (long ****)0x0;
      puStack_108 = puVar11 + 3;
      (*(code *)(*pppplVar13)[2])(pppplVar13,&ppplStack_38,&puStack_108);
      func_0x0001072716b0(&puStack_108);
      func_0x00010727168c(&pppplStack_2b0);
      func_0x00010727579c();
    }
    ppppplVar10 = (long *****)&ppplStack_38;
    func_0x0001000e30f4();
  }
  else if ((int)plVar23 == 0) {
    if (((ulong)ppppplVar18 & 1) != 0) {
      func_0x000107275578();
    }
  }
  else {
    pppplStack_1b8 = (long ****)0x0;
    pppplStack_1c0 = (long ****)0x0;
    pppplStack_1a8 = (long ****)0x0;
    pplStack_1b0 = (long **)0x0;
    pppplStack_1a0 = (long ****)CONCAT44(pppplStack_1a0._4_4_,0x3f800000);
    FUN_107263994(&ppplStack_f0,&pppplStack_1c0);
    uStack_298 = 0;
    ppplStack_2a0 = (long ***)0x0;
    uStack_288 = 0;
    puStack_290 = (undefined8 *)0x0;
    uStack_280 = 0x3f800000;
    ppppplVar10 = &pppplStack_260;
    FUN_10726047c(ppppplVar10,param_2 + 0xe8,&ppplStack_2a0);
    uVar9 = SUB84(ppppplVar10,0);
    func_0x00010727577c();
    FUN_10726ea70(&pppplStack_260);
    FUN_10726ea70(&ppplStack_2a0);
    FUN_10726eafc(&ppplStack_f0);
    FUN_10726eafc(&pppplStack_1c0);
    ppplStack_38 = (long ***)CONCAT44(ppplStack_38._4_4_,uVar9);
    ppppplVar10 = param_1 + 0x72;
    FUN_107260494(ppppplVar10,&ppplStack_38);
    func_0x000107275578();
  }
  func_0x00010727416c(uStack_18);
  if (!(bool)uVar8) {
    ___stack_chk_fail();
    FUN_10726ea70(&pppplStack_260);
    FUN_10726ea70(&ppplStack_2a0);
    FUN_10726eafc(&ppplStack_f0);
    ppppplVar10 = &pppplStack_1c0;
    FUN_10726eafc();
    func_0x00010727477c();
    if (((ulong)ppppplVar10[7] & 1) == 0) {
      func_0x000104bdc2c8();
      if (*(char *)(ppppplVar10 + 7) == '\x01') {
        FUN_107262f3c();
      }
      else {
        FUN_107262f68();
      }
      return ppppplVar10;
    }
    return ppppplVar10;
  }
  return ppppplVar10;
}



/* Entry: 10725ffc4; end: 10725ffdb;  */

long FUN_10725ffc4(long param_1)

{
  if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_107262f3c();
  }
  else {
    FUN_107262f68();
  }
  return param_1;
}


