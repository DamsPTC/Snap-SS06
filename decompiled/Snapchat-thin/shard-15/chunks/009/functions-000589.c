/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bd43f34; end: 10bd43f47;  */

void FUN_10bd43f34(void)

{
  FUN_10bd43f08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd43f48; end: 10bd43f73;  */

undefined8 FUN_10bd43f48(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_10bd43f74(&uStack_28);
  return param_1;
}



/* Entry: 10bd43f74; end: 10bd43f8b;  */

void FUN_10bd43f74(undefined8 *param_1)

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



/* Entry: 10bd43f8c; end: 10bd43fbf;  */

void FUN_10bd43f8c(undefined8 *param_1)

{
  __ZNSt8bad_castC2Ev();
  *param_1 = &PTR_FUN_110d9e280;
  return;
}



/* Entry: 10bd43fc0; end: 10bd43fcb;  */

undefined * FUN_10bd43fc0(void)

{
  return &UNK_10f836cf8;
}



/* Entry: 10bd43fcc; end: 10bd43fef;  */

void FUN_10bd43fcc(void)

{
  func_0x00010bd4521c();
  __ZNSt13exception_ptrD1Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)();
  return;
}



/* Entry: 10bd43ff0; end: 10bd4402b;  */

long * FUN_10bd43ff0(long *param_1)

{
  long lVar1;
  
  while (lVar1 = *param_1, lVar1 != 0) {
    FUN_10bd40700(param_1);
    func_0x00010894ef90(lVar1);
  }
  return param_1;
}



/* Entry: 10bd4402c; end: 10bd44063;  */

long FUN_10bd4402c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  *(long *)(param_1 + 0x18) = lVar1;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  (**(code **)(lVar1 + 8))();
  return param_1;
}



/* Entry: 10bd44064; end: 10bd440bb;  */

void FUN_10bd44064(long param_1,long param_2)

{
  long unaff_x20;
  
  func_0x00010bd452a0();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined ***)(param_2 + 0x18) = &PTR_DAT_110a9cc38;
  *(undefined ***)(param_2 + 0x28) = &PTR_DAT_110a9cc58;
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  return;
}



/* Entry: 10bd440bc; end: 10bd440eb;  */

void FUN_10bd440bc(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuStack_20;
  undefined8 uStack_18;
  
  ppuStack_20 = &PTR_DAT_110d9e2b0;
  uStack_18 = 0;
  FUN_10bd41fd0(param_1,&ppuStack_20,param_2);
  return;
}



/* Entry: 10bd440ec; end: 10bd44133;  */

undefined8 FUN_10bd440ec(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x118;
  __Znwm(0x118);
  FUN_10bd41708();
  return uVar1;
}



/* Entry: 10bd44134; end: 10bd4415b;  */

void FUN_10bd44134(void)

{
  long unaff_x19;
  
  func_0x00010bd45498();
  FUN_10bd4415c();
  FUN_10bd4415c(*(undefined8 *)(unaff_x19 + 8));
  return;
}



/* Entry: 10bd4415c; end: 10bd441af;  */

void FUN_10bd4415c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  while (param_1 != (long *)0x0) {
    lVar1 = *param_1;
    lVar2 = 0x88;
    do {
      FUN_10bd43ff0((long)param_1 + lVar2);
      lVar2 = lVar2 + -0x10;
    } while (lVar2 != 0x58);
    FUN_10bd43b48(param_1 + 3);
    __ZdlPv(param_1);
    param_1 = (long *)lVar1;
  }
  return;
}



/* Entry: 10bd441b0; end: 10bd441e7;  */

undefined8 FUN_10bd441b0(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xa0;
  __Znwm(0xa0);
  FUN_10bd441e8();
  return uVar1;
}



/* Entry: 10bd441e8; end: 10bd4421b;  */

long FUN_10bd441e8(long param_1)

{
  FUN_10bd43b1c(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return param_1;
}



/* Entry: 10bd4421c; end: 10bd4424f;  */

undefined8 * FUN_10bd4421c(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) == '\x01') {
    _pthread_mutex_unlock(*param_1);
  }
  return param_1;
}



/* Entry: 10bd44250; end: 10bd44257;  */

void FUN_10bd44250(void)

{
  return;
}



/* Entry: 10bd44258; end: 10bd4427f;  */

void FUN_10bd44258(long param_1)

{
  func_0x00010bd455f8(*(undefined8 *)(param_1 + 8));
  FUN_10bd3fbf0();
  return;
}



/* Entry: 10bd44280; end: 10bd442bb;  */

undefined8 * FUN_10bd44280(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  uVar1 = 0x113847398;
  FUN_10bd442bc();
  param_1[2] = uVar1;
  func_0x00010bd45480();
  func_0x00010bd442c4();
  return param_1;
}



/* Entry: 10bd442bc; end: 10bd442cb;  */

void FUN_10bd442bc(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf7a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_getspecific_11034c8c0)(*param_1);
  return;
}



/* Entry: 10bd442cc; end: 10bd442fb;  */

long FUN_10bd442cc(long param_1)

{
  func_0x00010bd442c4(0x113847398,*(undefined8 *)(param_1 + 0x10));
  return param_1;
}



/* Entry: 10bd442fc; end: 10bd44333;  */

void FUN_10bd442fc(undefined8 *param_1)

{
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x19;
  
  func_0x00010bd44f8c();
  *param_1 = extraout_x8;
  FUN_10bd44338(param_1 + 1);
  func_0x00010bd45460();
  func_0x00010bd4507c(&PTR_FUN_110d9e368);
  *(undefined8 *)(unaff_x19 + 0x18) = extraout_x8_00;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  return;
}



/* Entry: 10bd44334; end: 10bd44337;  */

void FUN_10bd44334(void)

{
  func_0x00010bd45578();
  func_0x00010bd45408();
  return;
}



/* Entry: 10bd44338; end: 10bd44357;  */

void FUN_10bd44338(undefined8 *param_1)

{
  __ZNSt11logic_errorC2ERKS_();
  *param_1 = &PTR_FUN_110d9df58;
  return;
}



/* Entry: 10bd44358; end: 10bd44393;  */

undefined8 FUN_10bd44358(undefined8 param_1)

{
  func_0x00010bd45554();
  FUN_10bd44404();
  func_0x00010bd455d4();
  return param_1;
}



/* Entry: 10bd44394; end: 10bd443cb;  */

void FUN_10bd44394(void)

{
  func_0x00010bd45548();
  func_0x00010bd44400();
  func_0x00010bd45330();
  func_0x00010bd450a0();
  func_0x00010bd450fc();
  FUN_10bd44454();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd443cc; end: 10bd443df;  */

void FUN_10bd443cc(void)

{
  FUN_10bd44454();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd443e0; end: 10bd44403;  */

void FUN_10bd443e0(long param_1)

{
  func_0x00010bd45578(param_1 + -8);
  func_0x00010bd45408();
  return;
}



/* Entry: 10bd44404; end: 10bd44453;  */

void FUN_10bd44404(void)

{
  undefined8 extraout_x8;
  long unaff_x19;
  
  func_0x00010bd44f8c();
  func_0x00010bd4563c();
  FUN_10bd44338();
  func_0x00010bd45510();
  func_0x00010bd4507c(&PTR_FUN_110d9e368);
  *(undefined8 *)(unaff_x19 + 0x18) = extraout_x8;
  return;
}



/* Entry: 10bd44454; end: 10bd444ab;  */

void FUN_10bd44454(void)

{
  func_0x00010bd45578();
  func_0x00010bd45408();
  return;
}



/* Entry: 10bd444ac; end: 10bd444af;  */

void FUN_10bd444ac(void)

{
  func_0x00010bd45578();
  func_0x00010bd45408();
  return;
}



/* Entry: 10bd444b0; end: 10bd444cf;  */

void FUN_10bd444b0(undefined8 *param_1)

{
  __ZNSt11logic_errorC2ERKS_();
  *param_1 = &PTR_DAT_110d9df30;
  return;
}



/* Entry: 10bd444d0; end: 10bd4450b;  */

undefined8 FUN_10bd444d0(undefined8 param_1)

{
  func_0x00010bd45554();
  FUN_10bd4457c();
  func_0x00010bd455d4();
  return param_1;
}



/* Entry: 10bd4450c; end: 10bd44543;  */

void FUN_10bd4450c(void)

{
  func_0x00010bd45548();
  func_0x00010bd44578();
  func_0x00010bd45330();
  func_0x00010bd450a0();
  func_0x00010bd450fc();
  FUN_10bd445cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd44544; end: 10bd44557;  */

void FUN_10bd44544(void)

{
  FUN_10bd445cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd44558; end: 10bd4457b;  */

void FUN_10bd44558(long param_1)

{
  func_0x00010bd45578(param_1 + -8);
  func_0x00010bd45408();
  return;
}



/* Entry: 10bd4457c; end: 10bd445cb;  */

void FUN_10bd4457c(void)

{
  undefined8 extraout_x8;
  long unaff_x19;
  
  func_0x00010bd44f8c();
  func_0x00010bd4563c();
  FUN_10bd444b0();
  func_0x00010bd45510();
  func_0x00010bd4507c(&PTR_FUN_110d9e428);
  *(undefined8 *)(unaff_x19 + 0x18) = extraout_x8;
  return;
}



/* Entry: 10bd445cc; end: 10bd445eb;  */

void FUN_10bd445cc(void)

{
  func_0x00010bd45578();
  func_0x00010bd45408();
  return;
}



/* Entry: 10bd445ec; end: 10bd445f3;  */

void FUN_10bd445ec(undefined8 *param_1)

{
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x19;
  
  func_0x00010bd44f8c();
  *param_1 = extraout_x8;
  func_0x000108969890(param_1 + 1);
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
  *(undefined4 *)(unaff_x19 + 0x50) = 0xffffffff;
  func_0x00010bd4507c(&PTR_FUN_110d9e4e8);
  *(undefined8 *)(unaff_x19 + 0x30) = extraout_x8_00;
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  return;
}



/* Entry: 10bd445f4; end: 10bd44633;  */

void FUN_10bd445f4(undefined8 *param_1)

{
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x19;
  
  func_0x00010bd44f8c();
  *param_1 = extraout_x8;
  func_0x000108969890(param_1 + 1);
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
  *(undefined4 *)(unaff_x19 + 0x50) = 0xffffffff;
  func_0x00010bd4507c(&PTR_FUN_110d9e4e8);
  *(undefined8 *)(unaff_x19 + 0x30) = extraout_x8_00;
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  return;
}



/* Entry: 10bd44634; end: 10bd4467f;  */

long FUN_10bd44634(long param_1)

{
  long lVar1;
  
  lVar1 = 0x58;
  __Znwm(0x58);
  FUN_10bd446e0();
  func_0x00010530126c(lVar1 + 0x30,param_1 + 0x30);
  return lVar1;
}



/* Entry: 10bd44680; end: 10bd446a7;  */

void FUN_10bd44680(void)

{
  func_0x00010bd45560();
  func_0x00010bd446dc();
  func_0x00010bd45230();
  func_0x00010bd450a0();
  func_0x00010bd450fc();
  FUN_10bd44740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd446a8; end: 10bd446bb;  */

void FUN_10bd446a8(void)

{
  FUN_10bd44740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd446bc; end: 10bd446df;  */

long FUN_10bd446bc(long param_1)

{
  func_0x0001053010fc(param_1 + 0x28);
  __ZNSt13runtime_errorD2Ev(param_1);
  return param_1 + -8;
}



/* Entry: 10bd446e0; end: 10bd4473f;  */

void FUN_10bd446e0(undefined8 *param_1,long param_2)

{
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x19;
  
  func_0x00010bd44f8c();
  *param_1 = extraout_x8;
  func_0x000108969890(param_1 + 1,param_2 + 8);
  func_0x00010bd45510();
  func_0x00010bd4507c(&PTR_FUN_110d9e4e8);
  *(undefined8 *)(unaff_x19 + 0x30) = extraout_x8_00;
  return;
}



/* Entry: 10bd44740; end: 10bd44803;  */

long FUN_10bd44740(long param_1)

{
  func_0x0001053010fc(param_1 + 0x30);
  __ZNSt13runtime_errorD2Ev(param_1 + 8);
  return param_1;
}



/* Entry: 10bd44804; end: 10bd44897;  */

long FUN_10bd44804(undefined8 param_1)

{
  long *unaff_x19;
  long lVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_48 [16];
  undefined8 *puStack_38;
  
  func_0x00010bd452a0();
  FUN_10bd44898();
  FUN_10bd44960(auStack_48,param_1,unaff_x19[1] - *unaff_x19 >> 4,unaff_x19 + 2);
  uVar2 = *unaff_x20;
  puStack_38[1] = unaff_x20[1];
  *puStack_38 = uVar2;
  puStack_38 = puStack_38 + 2;
  FUN_10bd448d8();
  lVar1 = unaff_x19[1];
  FUN_10bd449e8(auStack_48);
  return lVar1;
}



/* Entry: 10bd44898; end: 10bd448d7;  */

ulong FUN_10bd44898(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar3;
  
  if (param_2 >> 0x3c == 0) {
    uVar2 = param_1[2] - *param_1 >> 3;
    if (uVar2 <= param_2) {
      uVar2 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      uVar2 = 0xfffffffffffffff;
    }
    return uVar2;
  }
  FUN_10bd4494c();
  func_0x00010bd451a0();
  uVar3 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  uVar2 = uVar3;
  _memcpy(uVar3);
  unaff_x19[1] = uVar3;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return uVar2;
}



/* Entry: 10bd448d8; end: 10bd4494b;  */

void FUN_10bd448d8(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x00010bd451a0();
  lVar2 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  _memcpy(lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 10bd4494c; end: 10bd4495f;  */

long * FUN_10bd4494c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)&UNK_10f836cf1;
  func_0x000104bd47e8();
  plVar2[3] = 0;
  plVar2[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010bd449a8();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *plVar2 = param_4;
  plVar2[1] = lVar1;
  plVar2[2] = lVar1;
  plVar2[3] = param_4 + param_2 * 0x10;
  return plVar2;
}



/* Entry: 10bd44960; end: 10bd449cb;  */

long * FUN_10bd44960(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010bd449a8();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 10bd449cc; end: 10bd449e7;  */

long * FUN_10bd449cc(long *param_1,ulong param_2)

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
  FUN_10bd44a14();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10bd449e8; end: 10bd44a13;  */

long * FUN_10bd449e8(long *param_1)

{
  FUN_10bd44a14();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10bd44a14; end: 10bd44a37;  */

void FUN_10bd44a14(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x10;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10bd44a38; end: 10bd44a77;  */

void FUN_10bd44a38(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar3 = *(long *)(param_1 + 0x18);
  puVar1 = (undefined8 *)(lVar3 + param_2 * 0x10);
  uVar5 = puVar1[1];
  uVar4 = *puVar1;
  puVar1 = (undefined8 *)(lVar3 + param_3 * 0x10);
  uVar6 = *puVar1;
  puVar2 = (undefined8 *)(lVar3 + param_2 * 0x10);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar6;
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x18) + param_3 * 0x10);
  puVar1[1] = uVar5;
  *puVar1 = uVar4;
  lVar3 = *(long *)(param_1 + 0x18);
  *(long *)(*(long *)(lVar3 + param_2 * 0x10 + 8) + 0x10) = param_2;
  *(long *)(*(long *)(lVar3 + param_3 * 0x10 + 8) + 0x10) = param_3;
  return;
}



/* Entry: 10bd44a78; end: 10bd44adf;  */

long * FUN_10bd44a78(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lStack_20;
  long lStack_18;
  
  if (param_1 + 0x8000000000000002U < 3 || param_2 + 0x8000000000000002U < 3) {
    plVar2 = &lStack_18;
    lStack_20 = param_2;
    lStack_18 = param_1;
    func_0x00010896b290(plVar2,&lStack_20);
    plVar1 = plVar2;
    if (plVar2 != (long *)0x8000000000000000) {
      plVar1 = (long *)0x7ffffffffffffffe;
    }
    if (plVar2 != (long *)0x7fffffffffffffff) {
      plVar2 = plVar1;
    }
    return plVar2;
  }
  return (long *)(param_1 - param_2);
}



/* Entry: 10bd44ae0; end: 10bd44c2b;  */

void FUN_10bd44ae0(void)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  code *pcVar6;
  uint *puVar7;
  long lVar8;
  undefined2 uStack_9e;
  undefined4 uStack_9c;
  undefined1 auStack_98 [56];
  undefined8 uStack_60;
  undefined8 uStack_58;
  uint uStack_50;
  undefined4 uStack_44;
  ulong auStack_40 [2];
  
  _gettimeofday(&uStack_58,0);
  uStack_60 = uStack_58;
  puVar7 = (uint *)&uStack_60;
  _gmtime_r(puVar7,auStack_98);
  if (puVar7 != (uint *)0x0) {
    func_0x00010896a758(auStack_40,(short)puVar7[5] + 0x76c);
    func_0x00010896aa30(&uStack_44,(short)puVar7[4] + 1);
    func_0x00010896acc0(&uStack_9e,(short)puVar7[3]);
    func_0x00010896a748(&uStack_9c,auStack_40[0] & 0xffff,(undefined2)uStack_44,uStack_9e);
    uVar2 = puVar7[1];
    lVar3 = (long)(int)uVar2;
    uVar4 = puVar7[2];
    lVar5 = (long)(int)uVar4;
    lVar8 = (long)(int)*puVar7;
    lVar1 = -lVar5;
    if (-1 < lVar5) {
      lVar1 = lVar5;
    }
    lVar5 = -lVar3;
    if (-1 < lVar3) {
      lVar5 = lVar3;
    }
    lVar3 = -lVar8;
    if (-1 < lVar8) {
      lVar3 = lVar8;
    }
    auStack_40[0] =
         (ulong)uStack_50 + ((long)(int)uVar4 * 0xe10 + (long)(int)uVar2 * 0x3c + lVar8) * 1000000;
    if (((long)(int)(uVar2 | uVar4 | *puVar7) & 0x8000000000000000U) != 0) {
      auStack_40[0] = ((lVar1 * -0xe10 + lVar5 * -0x3c) - lVar3) * 1000000 - (ulong)uStack_50;
    }
    uStack_44 = uStack_9c;
    func_0x00010896e9b4(&uStack_44,auStack_40,0);
    return;
  }
  __ZNSt13runtime_errorC1EPKc(auStack_40,&UNK_10f836d09);
  func_0x00010bdb43cc();
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10bd44c1c);
  (*pcVar6)();
}



/* Entry: 10bd44c2c; end: 10bd44c6f;  */

void FUN_10bd44c2c(undefined8 *param_1)

{
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  
  func_0x00010bd44f8c();
  *param_1 = extraout_x8;
  __ZNSt13runtime_errorC2ERKS_(param_1 + 1);
  func_0x00010bd45460();
  *unaff_x19 = &PTR_DAT_110a7a480;
  unaff_x19[1] = &PTR_DAT_110a7a4b0;
  unaff_x19[3] = &PTR_DAT_110a7a4d8;
  unaff_x19[4] = 0;
  return;
}



/* Entry: 10bd44c70; end: 10bd44dbb;  */

void FUN_10bd44c70(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  ulong uVar5;
  ulong uVar6;
  
  func_0x00010bd451a0();
  lVar3 = *(long *)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x18) != lVar3) {
    uVar5 = *(ulong *)(unaff_x19 + 0x10);
    uVar1 = lVar3 - *(long *)(param_1 + 0x18) >> 4;
    if (uVar5 < uVar1) {
      if (uVar5 == uVar1 - 1) {
        *(undefined8 *)(unaff_x19 + 0x10) = 0xffffffffffffffff;
        *(long *)(unaff_x20 + 0x20) = lVar3 + -0x10;
      }
      else {
        func_0x00010bd45630();
        FUN_10bd44a38();
        *(undefined8 *)(unaff_x19 + 0x10) = 0xffffffffffffffff;
        lVar3 = *(long *)(unaff_x20 + 0x20) + -0x10;
        *(long *)(unaff_x20 + 0x20) = lVar3;
        if ((uVar5 == 0) ||
           (*(long *)(*(long *)(unaff_x20 + 0x18) + (uVar5 * 8 - 8 & 0xfffffffffffffff0)) <=
            *(long *)(*(long *)(unaff_x20 + 0x18) + uVar5 * 0x10))) {
          while( true ) {
            uVar6 = uVar5 << 1 | 1;
            lVar4 = *(long *)(unaff_x20 + 0x18);
            uVar1 = lVar3 - lVar4 >> 4;
            if (uVar1 <= uVar6) break;
            uVar2 = uVar5 * 2 + 2;
            if ((uVar2 != uVar1) &&
               (*(long *)(lVar4 + uVar2 * 0x10) <= *(long *)(lVar4 + uVar6 * 0x10))) {
              uVar6 = uVar2;
            }
            if (*(long *)(lVar4 + uVar5 * 0x10) < *(long *)(lVar4 + uVar6 * 0x10)) break;
            func_0x00010bd45630();
            FUN_10bd44a38();
            lVar3 = *(long *)(unaff_x20 + 0x20);
            uVar5 = uVar6;
          }
        }
        else {
          func_0x00010bd45630();
          func_0x00010bd4476c();
        }
      }
    }
  }
  lVar3 = *(long *)(unaff_x19 + 0x18);
  if (*(long *)(unaff_x20 + 0x10) == unaff_x19) {
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x18) = lVar3;
  }
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x20) = lVar4;
  }
  *(long *)(unaff_x19 + 0x18) = 0;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  return;
}



/* Entry: 10bd44dbc; end: 10bd44dbf;  */

long FUN_10bd44dbc(long param_1)

{
  func_0x0001053010fc(param_1 + 0x10);
  __ZNSt8bad_castD2Ev(param_1 + 8);
  return param_1;
}



/* Entry: 10bd44dc0; end: 10bd44e0b;  */

long FUN_10bd44dc0(long param_1)

{
  long lVar1;
  
  lVar1 = 0x38;
  __Znwm(0x38);
  FUN_10bd44e84();
  func_0x00010530126c(lVar1 + 0x10,param_1 + 0x10);
  return lVar1;
}



/* Entry: 10bd44e0c; end: 10bd44e4b;  */

void FUN_10bd44e0c(void)

{
  ___cxa_allocate_exception(0x38);
  func_0x00010bd44e80();
  func_0x00010bd45330();
  func_0x00010bd450a0();
  func_0x00010bd450fc();
  FUN_10bd44edc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd44e4c; end: 10bd44e5f;  */

void FUN_10bd44e4c(void)

{
  FUN_10bd44edc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd44e60; end: 10bd44e83;  */

long FUN_10bd44e60(long param_1)

{
  func_0x0001053010fc(param_1 + 8);
  __ZNSt8bad_castD2Ev(param_1);
  return param_1 + -8;
}



/* Entry: 10bd44e84; end: 10bd44edb;  */

void FUN_10bd44e84(undefined8 *param_1,long param_2)

{
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x19;
  
  func_0x00010bd44f8c();
  *param_1 = extraout_x8;
  *(undefined ***)(unaff_x19 + 8) = &PTR_FUN_110d9e280;
  func_0x000105301370(param_1 + 2,param_2 + 0x10);
  func_0x00010bd4507c(&PTR_FUN_110d9e5a8);
  *(undefined8 *)(unaff_x19 + 0x10) = extraout_x8_00;
  return;
}



/* Entry: 10bd44edc; end: 10bd44f07;  */

long FUN_10bd44edc(long param_1)

{
  func_0x0001053010fc(param_1 + 0x10);
  __ZNSt8bad_castD2Ev(param_1 + 8);
  return param_1;
}



/* Entry: 10bd44f08; end: 10bd4569b;  */

void FUN_10bd44f08(void)

{
  return;
}



/* Entry: 10bd4569c; end: 10bd458ab;  */

long * FUN_10bd4569c(long *param_1,undefined4 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar1 = param_1 + 1;
  *param_1 = 0;
  func_0x000107c316e4();
  func_0x000107c2b290();
  switch(param_2) {
  case 0:
  case 1:
  case 2:
    func_0x00010894fc44(&uStack_48,0x16,0);
    func_0x00010bd46288();
    goto code_r0x00010bd4581c;
  case 3:
    func_0x00010bd4625c();
    goto code_r0x00010bd45798;
  case 4:
    func_0x00010bd4625c();
    goto code_r0x00010bd45798;
  case 5:
    func_0x00010bd4625c();
code_r0x00010bd45798:
    *param_1 = (long)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = 0x300;
      func_0x000107c2b8a4();
code_r0x00010bd45810:
      func_0x000107c2b8a8(*param_1,uVar2);
code_r0x00010bd4581c:
      if (*param_1 != 0) goto LAB_10bd45864;
    }
    goto code_r0x00010bd45850;
  case 6:
    func_0x00010bd4625c();
    goto code_r0x00010bd4574c;
  case 7:
    func_0x00010bd4625c();
    goto code_r0x00010bd4574c;
  case 8:
    func_0x00010bd4625c();
code_r0x00010bd4574c:
    *param_1 = (long)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = 0x301;
      func_0x000107c2b8a4();
      goto code_r0x00010bd45810;
    }
    goto code_r0x00010bd45850;
  case 9:
    func_0x00010bd4625c();
    break;
  case 10:
    func_0x00010bd4625c();
    break;
  case 0xb:
    func_0x00010bd4625c();
    break;
  case 0xc:
    func_0x00010bd4625c();
    goto code_r0x00010bd457c4;
  case 0xd:
    func_0x00010bd4625c();
    goto code_r0x00010bd457c4;
  case 0xe:
    func_0x00010bd4625c();
code_r0x00010bd457c4:
    *param_1 = (long)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = 0x302;
      func_0x000107c2b8a4();
      goto code_r0x00010bd45810;
    }
    goto code_r0x00010bd45850;
  case 0xf:
    func_0x00010bd4625c();
    goto code_r0x00010bd457fc;
  case 0x10:
    func_0x00010bd4625c();
    goto code_r0x00010bd457fc;
  case 0x11:
    func_0x00010bd4625c();
code_r0x00010bd457fc:
    *param_1 = (long)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = 0x303;
      func_0x000107c2b8a4();
      goto code_r0x00010bd45810;
    }
    goto code_r0x00010bd45850;
  case 0x12:
    func_0x00010bd4625c();
    goto code_r0x00010bd457e0;
  case 0x13:
    func_0x00010bd4625c();
    goto code_r0x00010bd457e0;
  case 0x14:
    func_0x00010bd4625c();
code_r0x00010bd457e0:
    *param_1 = (long)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = 0x304;
      func_0x000107c2b8a4();
      goto code_r0x00010bd45810;
    }
    goto code_r0x00010bd45850;
  case 0x15:
    func_0x00010bd4625c();
    goto code_r0x00010bd4582c;
  case 0x16:
    func_0x00010bd4625c();
    goto code_r0x00010bd4582c;
  case 0x17:
    func_0x00010bd4625c();
code_r0x00010bd4582c:
    *param_1 = (long)plVar1;
    if (plVar1 != (long *)0x0) {
      func_0x000107c2b8a4();
      goto code_r0x00010bd4581c;
    }
    goto code_r0x00010bd45850;
  default:
    plVar1 = (long *)0x0;
    func_0x000107c2b7a0();
  }
  *param_1 = (long)plVar1;
  if (plVar1 == (long *)0x0) {
code_r0x00010bd45850:
    func_0x00010ae29af8();
    func_0x00010bd46274();
    func_0x00010bd46288();
  }
LAB_10bd45864:
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010bd46288();
  return param_1;
}



/* Entry: 10bd458ac; end: 10bd45923;  */

long * FUN_10bd458ac(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x168) != 0) {
      func_0x00010bd462a0();
      lVar1 = *param_1;
      *(undefined8 *)(lVar1 + 0x168) = 0;
    }
    plVar2 = *(long **)(lVar1 + 0x178);
    if (((plVar2 != (long *)0x0) && (*plVar2 != 0)) && (*(long *)plVar2[1] != 0)) {
      func_0x00010bd462a0();
      func_0x00010bd462c4(*param_1 + 0x178);
      lVar1 = *param_1;
    }
    func_0x000107c2b7a4(lVar1);
  }
  FUN_10bd461d8(param_1 + 1);
  return param_1;
}



/* Entry: 10bd45924; end: 10bd4595f;  */

void FUN_10bd45924(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  FUN_10bd45960(auStack_40,param_1,param_2,&uStack_28);
  func_0x000107c2a674(&uStack_28,&UNK_10f836de7);
  return;
}



/* Entry: 10bd45960; end: 10bd45a83;  */

void FUN_10bd45960(undefined8 *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x000107c2b290();
  lVar2 = *param_3;
  func_0x000107c2b1e0(lVar2,(int)param_3[1]);
  if ((lVar2 != 0) && (lVar5 = *(long *)(*param_2 + 0xf0), lVar5 != 0)) {
    bVar1 = 0;
    while (lVar3 = lVar2, func_0x00010ae46814(lVar2,0,0,0), lStack_48 = lVar3, lVar3 != 0) {
      lVar4 = lVar5;
      func_0x000107c2b5f4(lVar5,lVar3);
      if ((int)lVar4 == 0) {
        func_0x00010ae29af8();
        lVar3 = lVar4;
        goto LAB_10bd45a48;
      }
      func_0x00010bd462b0();
      bVar1 = 1;
    }
    func_0x00010ae29af8();
    if (!(bool)(bVar1 & ((uint)lVar3 & 0xff000fff) == 0x900006e)) {
LAB_10bd45a48:
      func_0x000107c2a670(&uStack_60,lVar3,&PTR_PTR_113409a60);
      param_4[1] = uStack_58;
      *param_4 = uStack_60;
      param_4[2] = uStack_50;
      uVar6 = *param_4;
      param_1[1] = param_4[1];
      *param_1 = uVar6;
      param_1[2] = uStack_50;
      func_0x00010bd462b0();
      goto joined_r0x00010bd45a20;
    }
    func_0x00010bd462b0();
  }
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
joined_r0x00010bd45a20:
  if (lVar2 != 0) {
    func_0x000107c2b1cc(lVar2);
  }
  return;
}



/* Entry: 10bd45a84; end: 10bd45aff;  */

long * FUN_10bd45a84(long *param_1,long param_2)

{
  undefined8 auStack_38 [3];
  
  func_0x000107c2b7ac();
  *param_1 = param_2;
  if (param_2 == 0) {
    func_0x00010ae29af8();
    func_0x00010bd46274();
    func_0x00010bd46288();
    param_2 = *param_1;
  }
  *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) | 3;
  auStack_38[0] = 0;
  func_0x000107c2b1e4(auStack_38,0,param_1 + 1,0);
  func_0x000107c2b7b8(*param_1,auStack_38[0],auStack_38[0]);
  return param_1;
}



/* Entry: 10bd45b00; end: 10bd45b6b;  */

long * FUN_10bd45b00(long *param_1)

{
  long *plVar1;
  
  if (((*param_1 != 0) && (plVar1 = *(long **)(*param_1 + 0x78), plVar1 != (long *)0x0)) &&
     (*plVar1 != 0)) {
    if (*(long *)plVar1[1] != 0) {
      func_0x00010bd462b8();
      func_0x00010bd462c4(*param_1 + 0x78);
    }
  }
  if (param_1[1] != 0) {
    func_0x000107c2b1cc();
  }
  if (*param_1 != 0) {
    func_0x000107c2b7b0();
  }
  return param_1;
}



/* Entry: 10bd45b6c; end: 10bd45bfb;  */

void FUN_10bd45b6c(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *param_2;
  plVar2 = *(long **)(lVar1 + 0x78);
  if (((plVar2 != (long *)0x0) && (*plVar2 != 0)) && (*(long *)plVar2[1] != 0)) {
    func_0x00010bd462b8();
    lVar1 = *param_2;
  }
  func_0x000107c2b2e8(lVar1 + 0x78,0,param_3);
  if (*(long *)(*param_2 + 8) != 0) {
    *(code **)(*(long *)(*param_2 + 8) + 0x28) = FUN_10bd45bfc;
  }
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}



/* Entry: 10bd45bfc; end: 10bd45c73;  */

long * FUN_10bd45bfc(int param_1,long param_2)

{
  long *plVar1;
  long lStack_18;
  
  if ((((param_2 != 0) && (plVar1 = *(long **)(param_2 + 0xe0), plVar1 != (long *)0x0)) &&
      (*plVar1 != 0)) &&
     (((*(long *)plVar1[1] != 0 &&
       (plVar1 = *(long **)(*(long *)plVar1[1] + 0x78), plVar1 != (long *)0x0)) &&
      ((*plVar1 != 0 && (plVar1 = *(long **)plVar1[1], plVar1 != (long *)0x0)))))) {
    lStack_18 = param_2;
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1 != 0,&lStack_18);
    return plVar1;
  }
  return (long *)0x0;
}



/* Entry: 10bd45c74; end: 10bd45ca3;  */

/* WARNING: Removing unreachable block (ram,0x00010bd45cf4) */
/* WARNING: Removing unreachable block (ram,0x00010bd45d44) */
/* WARNING: Removing unreachable block (ram,0x00010bd45d4c) */

uint FUN_10bd45c74(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  int iVar8;
  undefined1 auStack_68 [24];
  
  pcVar1 = FUN_10bd45e2c;
  if (param_2 != 0) {
    pcVar1 = (code *)0x10bd45e34;
  }
  uVar3 = param_1[1];
  func_0x00010ae1e284();
  func_0x000107c2b290();
  puVar4 = param_1;
  (*pcVar1)(param_1,0,0);
  uVar5 = *param_1;
  func_0x000107c2b7d8(uVar5,puVar4);
  uVar6 = uVar5;
  func_0x00010ae29af8();
  uVar7 = param_1[1];
  func_0x00010ae1e284();
  iVar8 = (int)uVar5;
  if (iVar8 == 5) {
    if ((int)uVar6 == 0) {
      func_0x00010bd45f94(param_3,2);
      goto LAB_10bd45d88;
    }
  }
  else if (iVar8 != 1) {
    if (iVar8 == 3) {
      *param_3 = 0;
      param_3[1] = 0;
      uVar2 = 0xffffffff;
    }
    else {
      if (uVar3 < uVar7) {
        *param_3 = 0;
        param_3[1] = 0;
        param_3[2] = 0;
        if ((int)puVar4 < 1) {
          return 0xffffffff;
        }
        return 1;
      }
      if (iVar8 != 0) {
        if (iVar8 == 6) {
          func_0x00010bd3fd3c(param_3,2);
        }
        else {
          if (iVar8 == 2) {
            *param_3 = 0;
            param_3[1] = 0;
            uVar2 = 0xfffffffe;
            goto LAB_10bd45d64;
          }
          func_0x00010bd45f94(param_3,3);
        }
        return 0;
      }
      uVar2 = 0;
      *param_3 = 0;
      param_3[1] = 0;
    }
LAB_10bd45d64:
    param_3[2] = 0;
    return uVar2;
  }
  func_0x000107c2a670(auStack_68,uVar6,&PTR_PTR_113409a60);
  func_0x00010bd462e4();
LAB_10bd45d88:
  return (uint)(uVar3 < uVar7);
}



/* Entry: 10bd45ca4; end: 10bd45e2b;  */

uint FUN_10bd45ca4(undefined8 *param_1,code *param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,ulong *param_7)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  undefined1 auStack_68 [24];
  
  uVar2 = param_1[1];
  func_0x00010ae1e284();
  func_0x000107c2b290();
  plVar3 = (long *)((long)param_1 + ((long)param_3 >> 1));
  if ((param_3 & 1) != 0) {
    param_2 = *(code **)(*plVar3 + ((ulong)param_2 & 0xffffffff));
  }
  (*param_2)(plVar3,param_4,param_5);
  uVar4 = *param_1;
  func_0x000107c2b7d8(uVar4,plVar3);
  uVar5 = uVar4;
  func_0x00010ae29af8();
  uVar6 = param_1[1];
  func_0x00010ae1e284();
  iVar7 = (int)uVar4;
  if (iVar7 == 5) {
    if ((int)uVar5 == 0) {
      func_0x00010bd45f94(param_6,2);
      goto LAB_10bd45d88;
    }
  }
  else if (iVar7 != 1) {
    if ((param_7 != (ulong *)0x0) && (0 < (int)plVar3)) {
      *param_7 = (ulong)plVar3 & 0xffffffff;
    }
    if (iVar7 == 3) {
      *param_6 = 0;
      param_6[1] = 0;
      uVar1 = 0xffffffff;
    }
    else {
      if (uVar2 < uVar6) {
        *param_6 = 0;
        param_6[1] = 0;
        param_6[2] = 0;
        if ((int)plVar3 < 1) {
          return 0xffffffff;
        }
        return 1;
      }
      if (iVar7 != 0) {
        if (iVar7 == 6) {
          func_0x00010bd3fd3c(param_6,2);
        }
        else {
          if (iVar7 == 2) {
            *param_6 = 0;
            param_6[1] = 0;
            uVar1 = 0xfffffffe;
            goto LAB_10bd45d64;
          }
          func_0x00010bd45f94(param_6,3);
        }
        return 0;
      }
      uVar1 = 0;
      *param_6 = 0;
      param_6[1] = 0;
    }
LAB_10bd45d64:
    param_6[2] = 0;
    return uVar1;
  }
  func_0x000107c2a670(auStack_68,uVar5,&PTR_PTR_113409a60);
  func_0x00010bd462e4();
LAB_10bd45d88:
  return (uint)(uVar2 < uVar6);
}



/* Entry: 10bd45e2c; end: 10bd45ec3;  */

long FUN_10bd45e2c(undefined8 *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  byte bStack_21;
  
  puVar3 = (undefined4 *)*param_1;
  if (*(long *)(puVar3 + 10) == 0) {
    *(byte *)(puVar3 + 0x29) = *(byte *)(puVar3 + 0x29) & 0xfe;
    *(undefined **)(puVar3 + 10) = &UNK_1001e8f5c;
  }
  *(undefined4 *)(*(long *)(puVar3 + 0xc) + 0xbc) = 0;
  puVar1 = puVar3;
  func_0x0001001e83a0();
  func_0x000107c60e5c();
  *puVar1 = 0;
  if (*(long *)(puVar3 + 10) == 0) {
    func_0x0001004d2c58(0x10,0,0x86,&UNK_10f6d0a17,0x33d);
    lVar2 = 0xffffffff;
  }
  else {
    lVar2 = *(long *)(*(long *)(puVar3 + 0xc) + 0x110);
    if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x618) >> 3 & 1) == 0)) {
      bStack_21 = 0;
      func_0x0001001e8cac(lVar2,&bStack_21);
      uVar4 = 0x2002;
      if ((*(byte *)(puVar3 + 0x29) & 1) == 0) {
        uVar4 = 0x1002;
      }
      pcVar5 = *(code **)(puVar3 + 0x18);
      if ((pcVar5 != (code *)0x0) ||
         (pcVar5 = *(code **)(*(long *)(puVar3 + 0x1a) + 0x180), pcVar5 != (code *)0x0)) {
        (*pcVar5)(puVar3,uVar4,lVar2);
      }
      if ((int)lVar2 < 1) {
        return lVar2;
      }
      if ((bStack_21 & 1) == 0) {
        func_0x0001001e6ca4(*(long *)(puVar3 + 0xc) + 0x110,0);
        func_0x0001001e8164(puVar3);
      }
    }
    lVar2 = 1;
  }
  return lVar2;
}



/* Entry: 10bd45ec4; end: 10bd460a7;  */

undefined1  [16] FUN_10bd45ec4(uint param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *unaff_x19;
  undefined1 auVar3 [16];
  
  func_0x00010bd462d0();
  func_0x000107c2b1d0();
  uVar2 = (ulong)(param_1 & ((int)param_1 >> 0x1f ^ 0xffffffffU));
  uVar1 = unaff_x19[1];
  if (uVar2 <= (ulong)unaff_x19[1]) {
    uVar1 = uVar2;
  }
  auVar3._8_8_ = uVar1;
  auVar3._0_8_ = *unaff_x19;
  return auVar3;
}



/* Entry: 10bd460a8; end: 10bd460b3;  */

undefined * FUN_10bd460a8(void)

{
  return &UNK_10f836e08;
}



/* Entry: 10bd460b4; end: 10bd46163;  */

void FUN_10bd460b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010ae29cb0(param_3);
  func_0x000107c278b8(param_1,param_3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc();
  func_0x00010bd46290();
  func_0x00010bd46290();
  func_0x00010bd46290();
  func_0x00010bd46290();
  return;
}



/* Entry: 10bd46164; end: 10bd4619b;  */

undefined * FUN_10bd46164(void)

{
  return &UNK_10f836e11;
}



/* Entry: 10bd4619c; end: 10bd461c3;  */

long * FUN_10bd4619c(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c2b648();
  }
  return param_1;
}



/* Entry: 10bd461c4; end: 10bd461d7;  */

undefined8 * FUN_10bd461c4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = param_2;
  func_0x000100069674(param_2,&PTR_PTR_113409a78);
  *(int *)param_1 = (int)param_2;
  uVar1 = 2;
  if ((int)uVar2 != 0) {
    uVar1 = 3;
  }
  param_1[1] = &PTR_PTR_113409a78;
  param_1[2] = uVar1;
  return param_1;
}



/* Entry: 10bd461d8; end: 10bd461ff;  */

long FUN_10bd461d8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10bd46200; end: 10bd46203;  */

void FUN_10bd46200(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10bd46204; end: 10bd46217;  */

void FUN_10bd46204(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd46218; end: 10bd4621f;  */

void FUN_10bd46218(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10bd46220; end: 10bd46257;  */

long FUN_10bd46220(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110d9e740);
  param_1 = param_1 + 0x18;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10bd46258; end: 10bd462f7;  */

void FUN_10bd46258(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd462f8; end: 10bd4634b;  */

long FUN_10bd462f8(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  long lStack_20;
  long lStack_18;
  
  puVar2 = (undefined4 *)0x4;
  _clock_gettime(4,&lStack_20);
  if ((int)puVar2 == 0) {
    return lStack_18 + lStack_20 * 1000000000;
  }
  ___error();
  __ZNSt3__120__throw_system_errorEiPKc(*puVar2,&UNK_10f836e73);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd46348);
  (*pcVar1)();
}



/* Entry: 10bd4634c; end: 10bd463b7; -[DJSharedSate init] */

long FUN_10bd4634c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010bd471f0(param_1,PTR_s_init_1125d9248);
  if (param_1 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSCondition_1126db998;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar1;
    func_0x00010bd47194(uVar2);
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return param_1;
}



/* Entry: 10bd463b8; end: 10bd463d7; -[DJSharedSate isReady] */

bool FUN_10bd463b8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    return true;
  }
  return *(long *)(param_1 + 0x18) != 0;
}



/* Entry: 10bd463d8; end: 10bd463df; -[DJSharedSate value] */

undefined8 FUN_10bd463d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10bd463e0; end: 10bd463ff; -[DJSharedSate setValue:] */

void FUN_10bd463e0(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10bd47104();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bd46400; end: 10bd46407; -[DJSharedSate exception] */

undefined8 FUN_10bd46400(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10bd46408; end: 10bd46427; -[DJSharedSate setException:] */

void FUN_10bd46408(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10bd47104();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bd46428; end: 10bd4642f; -[DJSharedSate cond] */

undefined8 FUN_10bd46428(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10bd46430; end: 10bd4644f; -[DJSharedSate setCond:] */

void FUN_10bd46430(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10bd47104();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bd46450; end: 10bd46457; -[DJSharedSate handler] */

undefined8 FUN_10bd46450(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}


