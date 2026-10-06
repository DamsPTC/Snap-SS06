/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ab2a308; end: 10ab2a467;  */

undefined8 * FUN_10ab2a308(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -2;
  *puVar1 = &PTR_FUN_110c48d70;
  *param_1 = &PTR_FUN_110c48e18;
  param_1[5] = &PTR_DAT_110c48e70;
  func_0x00010a2021cc(param_1 + 0x1b);
  *puVar1 = &PTR_FUN_110c3ec18;
  *param_1 = &PTR_DAT_110c3ecb8;
  param_1[5] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x18);
  if (param_1[0x17] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0xe);
  if (param_1[0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return puVar1;
}



/* Entry: 10ab2a468; end: 10ab2a46b;  */

undefined8 * FUN_10ab2a468(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c48ea8;
  param_1[2] = &PTR_FUN_110c48f48;
  param_1[7] = &PTR_FUN_110c48fa0;
  FUN_10ab2aa74(param_1 + 0x24);
  if (*(char *)((long)param_1 + 0x10f) < '\0') {
    __ZdlPv(param_1[0x1f]);
  }
  FUN_10a3786c8(param_1 + 0x1c);
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10ab2a46c; end: 10ab2a47f;  */

void FUN_10ab2a46c(void)

{
  FUN_10ab2d42c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab2a480; end: 10ab2a487;  */

undefined8 * FUN_10ab2a480(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -2;
  *puVar1 = &PTR_FUN_110c48ea8;
  *param_1 = &PTR_FUN_110c48f48;
  param_1[5] = &PTR_FUN_110c48fa0;
  FUN_10ab2aa74(param_1 + 0x22);
  if (*(char *)((long)param_1 + 0xff) < '\0') {
    __ZdlPv(param_1[0x1d]);
  }
  FUN_10a3786c8(param_1 + 0x1a);
  *puVar1 = &PTR_FUN_110c3ec18;
  *param_1 = &PTR_DAT_110c3ecb8;
  param_1[5] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x18);
  if (param_1[0x17] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0xe);
  if (param_1[0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return puVar1;
}



/* Entry: 10ab2a488; end: 10ab2a49f;  */

void FUN_10ab2a488(long param_1)

{
  FUN_10ab2d42c(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab2a4a0; end: 10ab2a4a7;  */

undefined8 * FUN_10ab2a4a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -7;
  *puVar1 = &PTR_FUN_110c48ea8;
  param_1[-5] = &PTR_FUN_110c48f48;
  *param_1 = &PTR_FUN_110c48fa0;
  FUN_10ab2aa74(param_1 + 0x1d);
  if (*(char *)((long)param_1 + 0xd7) < '\0') {
    __ZdlPv(param_1[0x18]);
  }
  FUN_10a3786c8(param_1 + 0x15);
  *puVar1 = &PTR_FUN_110c3ec18;
  param_1[-5] = &PTR_DAT_110c3ecb8;
  *param_1 = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x13);
  if (param_1[0x12] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 9);
  if (param_1[8] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return puVar1;
}



/* Entry: 10ab2a4a8; end: 10ab2a4bf;  */

void FUN_10ab2a4a8(long param_1)

{
  FUN_10ab2d42c(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab2a4c0; end: 10ab2a4cb;  */

void FUN_10ab2a4c0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ab2a4c4);
  (*pcVar1)();
}



/* Entry: 10ab2a4cc; end: 10ab2a4df;  */

void FUN_10ab2a4cc(void)

{
  func_0x00010ab2d488();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab2a4e0; end: 10ab2a4ef;  */

long FUN_10ab2a4e0(long param_1)

{
  return param_1 + 0xe0;
}



/* Entry: 10ab2a4f0; end: 10ab2a507;  */

void FUN_10ab2a4f0(long param_1)

{
  func_0x00010ab2d488(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab2a508; end: 10ab2a50f;  */

undefined8 * FUN_10ab2a508(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -7;
  *puVar1 = &PTR_DAT_110c48b00;
  param_1[-5] = &PTR_DAT_110c48ba0;
  *param_1 = &PTR_FUN_110c48bf8;
  param_1[0x15] = &PTR_FUN_110c48c18;
  FUN_10ab35488(param_1[0x30]);
  if (*(char *)((long)param_1 + 0x177) < '\0') {
    __ZdlPv(param_1[0x2c]);
  }
  param_1[0x15] = &PTR_FUN_110c484b0;
  FUN_10a1c00f4(param_1 + 0x15);
  *puVar1 = &PTR_FUN_110c3ec18;
  param_1[-5] = &PTR_DAT_110c3ecb8;
  *param_1 = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x13);
  if (param_1[0x12] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 9);
  if (param_1[8] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return puVar1;
}



/* Entry: 10ab2a510; end: 10ab2a527;  */

void FUN_10ab2a510(long param_1)

{
  func_0x00010ab2d488(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab2a528; end: 10ab2a52f;  */

undefined8 * FUN_10ab2a528(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x1c;
  *puVar1 = &PTR_DAT_110c48b00;
  param_1[-0x1a] = &PTR_DAT_110c48ba0;
  param_1[-0x15] = &PTR_FUN_110c48bf8;
  *param_1 = &PTR_FUN_110c48c18;
  FUN_10ab35488(param_1[0x1b]);
  if (*(char *)((long)param_1 + 0xcf) < '\0') {
    __ZdlPv(param_1[0x17]);
  }
  *param_1 = &PTR_FUN_110c484b0;
  FUN_10a1c00f4(param_1);
  *puVar1 = &PTR_FUN_110c3ec18;
  param_1[-0x1a] = &PTR_DAT_110c3ecb8;
  param_1[-0x15] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + -2);
  if (param_1[-3] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + -0xc);
  if (param_1[-0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + -0x71) < '\0') {
    __ZdlPv(param_1[-0x11]);
  }
  if (param_1[-0x16] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x1a] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x19);
  return puVar1;
}



/* Entry: 10ab2a530; end: 10ab2a547;  */

void FUN_10ab2a530(long param_1)

{
  func_0x00010ab2d488(param_1 + -0xe0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab2a548; end: 10ab2a54b;  */

undefined8 * FUN_10ab2a548(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110c48c38;
  param_1[2] = &PTR_DAT_110c48cd8;
  param_1[7] = &PTR_FUN_110c48d30;
  puVar1 = param_1 + 0x1c;
  *puVar1 = &PTR_FUN_110c48d50;
  FUN_10ab2b118(param_1 + 0x33);
  *puVar1 = &PTR_FUN_110c484d0;
  FUN_10a1c00f4(puVar1);
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10ab2a54c; end: 10ab2a55f;  */

void FUN_10ab2a54c(void)

{
  FUN_10ab2d52c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab2a560; end: 10ab2a56f;  */

long FUN_10ab2a560(long param_1)

{
  return param_1 + 0xe0;
}



/* Entry: 10ab2a570; end: 10ab2a587;  */

void FUN_10ab2a570(long param_1)

{
  FUN_10ab2d52c(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab2a588; end: 10ab2a58f;  */

undefined8 * FUN_10ab2a588(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = param_1 + -7;
  *puVar1 = &PTR_FUN_110c48c38;
  param_1[-5] = &PTR_DAT_110c48cd8;
  *param_1 = &PTR_FUN_110c48d30;
  puVar2 = param_1 + 0x15;
  *puVar2 = &PTR_FUN_110c48d50;
  FUN_10ab2b118(param_1 + 0x2c);
  *puVar2 = &PTR_FUN_110c484d0;
  FUN_10a1c00f4(puVar2);
  *puVar1 = &PTR_FUN_110c3ec18;
  param_1[-5] = &PTR_DAT_110c3ecb8;
  *param_1 = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x13);
  if (param_1[0x12] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 9);
  if (param_1[8] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return puVar1;
}



/* Entry: 10ab2a590; end: 10ab2a5a7;  */

void FUN_10ab2a590(long param_1)

{
  FUN_10ab2d52c(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab2a5a8; end: 10ab2a5af;  */

undefined8 * FUN_10ab2a5a8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x1c;
  *puVar1 = &PTR_FUN_110c48c38;
  param_1[-0x1a] = &PTR_DAT_110c48cd8;
  param_1[-0x15] = &PTR_FUN_110c48d30;
  *param_1 = &PTR_FUN_110c48d50;
  FUN_10ab2b118(param_1 + 0x17);
  *param_1 = &PTR_FUN_110c484d0;
  FUN_10a1c00f4(param_1);
  *puVar1 = &PTR_FUN_110c3ec18;
  param_1[-0x1a] = &PTR_DAT_110c3ecb8;
  param_1[-0x15] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + -2);
  if (param_1[-3] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + -0xc);
  if (param_1[-0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + -0x71) < '\0') {
    __ZdlPv(param_1[-0x11]);
  }
  if (param_1[-0x16] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x1a] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x19);
  return puVar1;
}



/* Entry: 10ab2a5b0; end: 10ab2a5c7;  */

void FUN_10ab2a5b0(long param_1)

{
  FUN_10ab2d52c(param_1 + -0xe0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab2a5c8; end: 10ab2a6ef;  */

undefined8 * FUN_10ab2a5c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c47fa0;
  func_0x00010a05248c(param_1 + 9);
  func_0x00010a05248c(param_1 + 7);
  func_0x00010a05248c(param_1 + 5);
  func_0x00010a05248c(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10ab2a6f0; end: 10ab2a867;  */

void FUN_10ab2a6f0(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  param_2 = (undefined8 *)*param_2;
  uVar1 = *(undefined4 *)(param_2 + 1);
  puVar2 = (undefined4 *)*param_2;
  puVar3 = puVar2;
  if (puVar2[0xe] != 0) {
    FUN_10a22d0f8(puVar2);
    puVar2[0xe] = 0;
    puVar3 = (undefined4 *)*param_2;
  }
  *puVar2 = uVar1;
  FUN_10aad4480(param_1,puVar3);
  uVar5 = *(undefined8 *)(puVar3 + 0x12);
  uVar4 = *(undefined8 *)(puVar3 + 0x10);
  *(undefined8 *)(param_1 + 0x4d) = *(undefined8 *)((long)puVar3 + 0x4d);
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  *(undefined1 *)(param_1 + 0x58) = 1;
  return;
}



/* Entry: 10ab2a868; end: 10ab2a8f7;  */

void FUN_10ab2a868(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [56];
  char cStack_28;
  
  plVar2 = (long *)*param_2;
  FUN_10a7eb2e8(auStack_60,*param_3);
  if (cStack_28 != '\x01') {
    *param_1 = 0;
  }
  else {
    lVar1 = *plVar2;
    FUN_10aad472c(lVar1,lVar1,auStack_60);
    lVar1 = *plVar2;
    FUN_10aad4480(param_1,lVar1);
    uVar4 = *(undefined8 *)(lVar1 + 0x48);
    uVar3 = *(undefined8 *)(lVar1 + 0x40);
    *(undefined8 *)(param_1 + 0x4d) = *(undefined8 *)(lVar1 + 0x4d);
    *(undefined8 *)(param_1 + 0x48) = uVar4;
    *(undefined8 *)(param_1 + 0x40) = uVar3;
  }
  param_1[0x58] = cStack_28 == '\x01';
  func_0x00010a7fd678(auStack_60);
  return;
}



/* Entry: 10ab2a8f8; end: 10ab2a93b;  */

long FUN_10ab2a8f8(undefined8 *param_1)

{
  return (ulong)*(uint *)*param_1 << 0x20;
}



/* Entry: 10ab2a93c; end: 10ab2a94f;  */

undefined1  [16] FUN_10ab2a93c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)plVar1 >> 0x3c == 0) {
    lVar2 = (long)plVar1 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = plVar1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x10;
    func_0x00010ab2de08();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 10ab2a950; end: 10ab2a9cf;  */

undefined1  [16] FUN_10ab2a950(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((ulong)param_1 >> 0x3c == 0) {
    lVar1 = (long)param_1 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    func_0x00010ab2de08();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10ab2a9d0; end: 10ab2aa73;  */

void FUN_10ab2a9d0(ulong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  if (param_4 != (undefined8 *)0x0) {
    if ((ulong)param_4 >> 0x3c != 0) {
      FUN_10ab2a93c();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10ab2aa60);
      (*pcVar4)();
    }
    puVar5 = param_2;
    FUN_10ab2a950();
    *param_1 = (ulong)param_4;
    param_1[1] = (ulong)param_4;
    param_1[2] = (ulong)(param_4 + (long)puVar5 * 2);
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      lVar6 = param_2[1];
      uVar7 = *param_2;
      param_4[1] = param_2[1];
      *param_4 = uVar7;
      if (lVar6 != 0) {
        plVar1 = (long *)(lVar6 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      param_4 = param_4 + 2;
    }
    param_1[1] = (ulong)param_4;
  }
  return;
}



/* Entry: 10ab2aa74; end: 10ab2aacf;  */

void FUN_10ab2aa74(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x00010ab2de08();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10ab2aad0; end: 10ab2ab53;  */

undefined1 * FUN_10ab2aad0(undefined1 *param_1,long param_2)

{
  uint uVar1;
  undefined1 *puStack_38;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  FUN_10ab2ab54();
  uVar1 = *(uint *)(param_2 + 0x10);
  if (uVar1 != 0xffffffff) {
    puStack_38 = param_1;
    (*(code *)(&PTR_DAT_110c48220)[uVar1])(&puStack_38,param_2);
    *(uint *)(param_1 + 0x10) = uVar1;
  }
  return param_1;
}



/* Entry: 10ab2ab54; end: 10ab2aba7;  */

void FUN_10ab2ab54(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110c48208)[*(uint *)(param_1 + 0x10)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return;
}



/* Entry: 10ab2aba8; end: 10ab2ac17;  */

void FUN_10ab2aba8(void)

{
  return;
}



/* Entry: 10ab2ac18; end: 10ab2acff;  */

void FUN_10ab2ac18(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    FUN_10ab2ab54(lVar1);
    *(undefined4 *)(lVar1 + 0x10) = 0;
  }
  return;
}



/* Entry: 10ab2ad00; end: 10ab2ad13;  */

void FUN_10ab2ad00(undefined8 param_1,undefined *param_2,long param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)puVar2 >> 0x3b != 0) {
    func_0x000109ffded8();
    puVar3 = puVar2;
    if (puVar2 != param_2) {
      do {
        FUN_10ab2adc0(param_3,puVar3);
        uVar1 = *(undefined4 *)(puVar3 + 0x18);
        *(undefined *)(param_3 + 0x1c) = puVar3[0x1c];
        *(undefined4 *)(param_3 + 0x18) = uVar1;
        puVar3 = puVar3 + 0x20;
        param_3 = param_3 + 0x20;
      } while (puVar3 != param_2);
      do {
        FUN_10ab2ab54(puVar2);
        puVar2 = puVar2 + 0x20;
      } while (puVar2 != param_2);
    }
    return;
  }
  __Znwm((long)puVar2 << 5);
  return;
}



/* Entry: 10ab2ad14; end: 10ab2ad47;  */

void FUN_10ab2ad14(ulong param_1,ulong param_2,long param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  
  if (param_1 >> 0x3b != 0) {
    func_0x000109ffded8();
    uVar2 = param_1;
    if (param_1 != param_2) {
      do {
        FUN_10ab2adc0(param_3,uVar2);
        uVar1 = *(undefined4 *)(uVar2 + 0x18);
        *(undefined1 *)(param_3 + 0x1c) = *(undefined1 *)(uVar2 + 0x1c);
        *(undefined4 *)(param_3 + 0x18) = uVar1;
        uVar2 = uVar2 + 0x20;
        param_3 = param_3 + 0x20;
      } while (uVar2 != param_2);
      do {
        FUN_10ab2ab54(param_1);
        param_1 = param_1 + 0x20;
      } while (param_1 != param_2);
    }
    return;
  }
  __Znwm(param_1 << 5);
  return;
}



/* Entry: 10ab2ad48; end: 10ab2adbf;  */

void FUN_10ab2ad48(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = param_1;
  if (param_1 != param_2) {
    do {
      FUN_10ab2adc0(param_3,lVar2);
      uVar1 = *(undefined4 *)(lVar2 + 0x18);
      *(undefined1 *)(param_3 + 0x1c) = *(undefined1 *)(lVar2 + 0x1c);
      *(undefined4 *)(param_3 + 0x18) = uVar1;
      lVar2 = lVar2 + 0x20;
      param_3 = param_3 + 0x20;
    } while (lVar2 != param_2);
    do {
      FUN_10ab2ab54(param_1);
      param_1 = param_1 + 0x20;
    } while (param_1 != param_2);
  }
  return;
}



/* Entry: 10ab2adc0; end: 10ab2ae33;  */

undefined1 * FUN_10ab2adc0(undefined1 *param_1,long param_2)

{
  uint uVar1;
  undefined1 *puStack_38;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  FUN_10ab2ab54();
  uVar1 = *(uint *)(param_2 + 0x10);
  if (uVar1 != 0xffffffff) {
    puStack_38 = param_1;
    (*(code *)(&PTR_FUN_110c48250)[uVar1])(&puStack_38,param_2);
    *(uint *)(param_1 + 0x10) = uVar1;
  }
  return param_1;
}



/* Entry: 10ab2ae34; end: 10ab2ae5f;  */

void FUN_10ab2ae34(void)

{
  return;
}



/* Entry: 10ab2ae60; end: 10ab2aeab;  */

long * FUN_10ab2ae60(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x20;
    FUN_10ab2ab54();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10ab2aeac; end: 10ab2af13;  */

void FUN_10ab2aeac(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -0x20;
        FUN_10ab2ab54(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10ab2af14; end: 10ab2af27;  */

void FUN_10ab2af14(undefined8 param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)puVar1 >> 0x3b != 0) {
    func_0x000109ffded8();
    puVar2 = puVar1;
    if (puVar1 != param_2) {
      do {
        FUN_10ab2afc4(param_3,puVar2);
        puVar2 = puVar2 + 0x20;
        param_3 = param_3 + 0x20;
      } while (puVar2 != param_2);
      do {
        FUN_10ab2b038(puVar1);
        puVar1 = puVar1 + 0x20;
      } while (puVar1 != param_2);
    }
    return;
  }
  __Znwm((long)puVar1 << 5);
  return;
}



/* Entry: 10ab2af28; end: 10ab2af5b;  */

void FUN_10ab2af28(ulong param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  
  if (param_1 >> 0x3b != 0) {
    func_0x000109ffded8();
    uVar1 = param_1;
    if (param_1 != param_2) {
      do {
        FUN_10ab2afc4(param_3,uVar1);
        uVar1 = uVar1 + 0x20;
        param_3 = param_3 + 0x20;
      } while (uVar1 != param_2);
      do {
        FUN_10ab2b038(param_1);
        param_1 = param_1 + 0x20;
      } while (param_1 != param_2);
    }
    return;
  }
  __Znwm(param_1 << 5);
  return;
}



/* Entry: 10ab2af5c; end: 10ab2afc3;  */

void FUN_10ab2af5c(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  if (param_1 != param_2) {
    do {
      FUN_10ab2afc4(param_3,lVar1);
      lVar1 = lVar1 + 0x20;
      param_3 = param_3 + 0x20;
    } while (lVar1 != param_2);
    do {
      FUN_10ab2b038(param_1);
      param_1 = param_1 + 0x20;
    } while (param_1 != param_2);
  }
  return;
}



/* Entry: 10ab2afc4; end: 10ab2b037;  */

undefined1 * FUN_10ab2afc4(undefined1 *param_1,long param_2)

{
  uint uVar1;
  undefined1 *puStack_38;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  FUN_10ab2b038();
  uVar1 = *(uint *)(param_2 + 0x18);
  if (uVar1 != 0xffffffff) {
    puStack_38 = param_1;
    (*(code *)(&PTR_DAT_110c48278)[uVar1])(&puStack_38,param_2);
    *(uint *)(param_1 + 0x18) = uVar1;
  }
  return param_1;
}



/* Entry: 10ab2b038; end: 10ab2b08b;  */

void FUN_10ab2b038(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110c48268)[*(uint *)(param_1 + 0x18)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return;
}



/* Entry: 10ab2b08c; end: 10ab2b0cb;  */

long FUN_10ab2b08c(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_2 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_2;
}



/* Entry: 10ab2b0cc; end: 10ab2b117;  */

long * FUN_10ab2b0cc(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x20;
    FUN_10ab2b038();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10ab2b118; end: 10ab2b17f;  */

void FUN_10ab2b118(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -0x20;
        FUN_10ab2b038(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10ab2b180; end: 10ab2b1df;  */

void FUN_10ab2b180(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = (undefined8 *)*param_1;
  lVar5 = param_2[1];
  uVar6 = *param_2;
  puVar4[1] = param_2[1];
  *puVar4 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar4[2] = param_2[2];
  return;
}



/* Entry: 10ab2b1e0; end: 10ab2b24b;  */

void FUN_10ab2b1e0(long param_1,undefined8 param_2)

{
  FUN_10ab2b24c(param_1,param_2,*(undefined8 *)(param_1 + 8),(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10ab2b24c; end: 10ab2b297;  */

long FUN_10ab2b24c(undefined8 param_1,int *param_2,long param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_3 != 0) {
    lVar2 = param_4;
    do {
      uVar3 = 0xff;
      if (*param_2 <= *(int *)(param_3 + 0x20)) {
        uVar3 = 0;
      }
      if (*(int *)(param_3 + 0x20) == *param_2) {
        uVar1 = 0xff;
        if (*(byte *)(param_2 + 1) <= *(byte *)(param_3 + 0x24)) {
          uVar1 = 0;
        }
        uVar3 = 0;
        if (*(byte *)(param_3 + 0x24) != *(byte *)(param_2 + 1)) {
          uVar3 = uVar1;
        }
      }
      param_4 = param_3;
      if ((uVar3 & 0x80) != 0) {
        param_4 = lVar2;
      }
      param_3 = *(long *)(param_3 + ((uVar3 & 0x80) >> 4));
      lVar2 = param_4;
    } while (param_3 != 0);
  }
  return param_4;
}



/* Entry: 10ab2b298; end: 10ab2b2ab;  */

void FUN_10ab2b298(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((undefined8 *)0xaaaaaaaaaaaaaaa < puVar2) {
    func_0x000109ffded8();
    puVar3 = puVar2;
    if (puVar2 != param_2) {
      do {
        uVar4 = *puVar3;
        param_3[1] = puVar3[1];
        *param_3 = uVar4;
        *puVar3 = 0;
        puVar3[1] = 0;
        uVar1 = *(undefined4 *)(puVar3 + 2);
        *(undefined1 *)((long)param_3 + 0x14) = *(undefined1 *)((long)puVar3 + 0x14);
        *(undefined4 *)(param_3 + 2) = uVar1;
        puVar3 = puVar3 + 3;
        param_3 = param_3 + 3;
      } while (puVar3 != param_2);
      do {
        func_0x00010a1ff0cc();
        puVar2 = puVar2 + 3;
      } while (puVar2 != param_2);
    }
    return;
  }
  __Znwm((long)puVar2 * 0x18);
  return;
}



/* Entry: 10ab2b2ac; end: 10ab2b3fb;  */

void FUN_10ab2b2ac(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((undefined8 *)0xaaaaaaaaaaaaaaa < param_1) {
    func_0x000109ffded8();
    puVar2 = param_1;
    if (param_1 != param_2) {
      do {
        uVar3 = *puVar2;
        param_3[1] = puVar2[1];
        *param_3 = uVar3;
        *puVar2 = 0;
        puVar2[1] = 0;
        uVar1 = *(undefined4 *)(puVar2 + 2);
        *(undefined1 *)((long)param_3 + 0x14) = *(undefined1 *)((long)puVar2 + 0x14);
        *(undefined4 *)(param_3 + 2) = uVar1;
        puVar2 = puVar2 + 3;
        param_3 = param_3 + 3;
      } while (puVar2 != param_2);
      do {
        func_0x00010a1ff0cc();
        param_1 = param_1 + 3;
      } while (param_1 != param_2);
    }
    return;
  }
  __Znwm((long)param_1 * 0x18);
  return;
}



/* Entry: 10ab2b3fc; end: 10ab2bae3;  */

long * FUN_10ab2b3fc(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long *unaff_x22;
  long *plVar15;
  long *plStack_230;
  long lStack_228;
  long lStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plRam0000000113835680 = (long *)0x0;
  plRam0000000113835678 = (long *)0x0;
  uRam0000000113835690 = 0;
  plRam0000000113835688 = (long *)0x0;
  fRam0000000113835698 = 1.0;
  plVar2 = plRam00000001137ec480;
  if ((bRam00000001137ec400 & 1) == 0) {
    plVar8 = (long *)0x1137ec400;
    param_1 = plVar8;
    ___cxa_guard_acquire();
    plVar2 = plRam00000001137ec480;
    if ((int)param_1 != 0) {
      lStack_228 = 4;
      plStack_230 = (long *)&DAT_10f6904d1;
      lStack_220 = 100;
      uStack_210 = 0xb;
      puStack_218 = &DAT_10f691b57;
      uStack_208 = 0x100000064;
      uStack_1f8 = 10;
      puStack_200 = &DAT_10f6904e1;
      uStack_1f0 = 200;
      uStack_1e0 = 0x11;
      puStack_1e8 = &DAT_10f691b63;
      uStack_1d8 = 0x1000000c8;
      uStack_1c8 = 5;
      puStack_1d0 = &DAT_10f42ad1d;
      uStack_1c0 = 300;
      uStack_1b0 = 0xc;
      puStack_1b8 = &DAT_10f691b75;
      uStack_1a8 = 0x10000012c;
      uStack_198 = 7;
      puStack_1a0 = &DAT_10f42ad23;
      uStack_180 = 0xe;
      puStack_188 = &DAT_10f691b82;
      uStack_190 = 400;
      uStack_178 = 0x100000190;
      uStack_168 = 6;
      puStack_170 = &DAT_10f42ad2b;
      uStack_150 = 0xd;
      puStack_158 = &DAT_10f691b91;
      uStack_160 = 500;
      uStack_148 = 0x1000001f4;
      uStack_138 = 8;
      puStack_140 = &DAT_10f690524;
      uStack_120 = 0xf;
      puStack_128 = &DAT_10f691b9f;
      uStack_130 = 600;
      uStack_118 = 0x100000258;
      uStack_108 = 4;
      puStack_110 = &DAT_10f42ad32;
      uStack_f0 = 0xb;
      puStack_f8 = &DAT_10f691baf;
      uStack_100 = 700;
      uStack_e8 = 0x1000002bc;
      uStack_d8 = 9;
      puStack_e0 = &DAT_10f690547;
      uStack_c0 = 0x10;
      puStack_c8 = &DAT_10f691bbb;
      uStack_d0 = 800;
      uStack_b8 = 0x100000320;
      uStack_a8 = 5;
      puStack_b0 = &DAT_10f690561;
      uStack_90 = 0xc;
      puStack_98 = &DAT_10f691bcc;
      uStack_a0 = 900;
      uStack_88 = 0x100000384;
      FUN_10ab2baec(&plStack_230,0x12);
      ___cxa_atexit(0x10ab2bae8,0x1137ec470,0x100000000);
      ___cxa_guard_release();
      param_1 = plVar8;
      plVar2 = plRam00000001137ec480;
    }
  }
  do {
    if (plVar2 == (long *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
        ___stack_chk_fail();
        ___cxa_guard_abort(0x1137ec400);
        FUN_10ab2bfd0(0x113835678);
        __Unwind_Resume();
        plVar2 = (long *)param_1[2];
        while (plVar2 != (long *)0x0) {
          lVar14 = *plVar2;
          if (*(char *)((long)plVar2 + 0x27) < '\0') {
            __ZdlPv(plVar2[2]);
          }
          __ZdlPv(plVar2);
          plVar2 = (long *)lVar14;
        }
        lVar14 = *param_1;
        *param_1 = 0;
        if (lVar14 != 0) {
          __ZdlPv();
        }
        return param_1;
      }
      return param_1;
    }
    FUN_10ab203cc(&plStack_230,plVar2[2],plVar2[3]);
    plVar7 = (long *)0x113835678;
    func_0x000107c2b05c(0x113835678,&plStack_230);
    plVar8 = plRam0000000113835680;
    if (plRam0000000113835680 != (long *)0x0) {
      uVar13 = (long)plRam0000000113835680 - 1;
      if (((ulong)plRam0000000113835680 & uVar13) == 0) {
        unaff_x22 = (long *)(uVar13 & (ulong)plVar7);
      }
      else {
        unaff_x22 = plVar7;
        if (plRam0000000113835680 <= plVar7) {
          uVar1 = 0;
          if (plRam0000000113835680 != (long *)0x0) {
            uVar1 = (ulong)plVar7 / (ulong)plRam0000000113835680;
          }
          unaff_x22 = (long *)((long)plVar7 - uVar1 * (long)plRam0000000113835680);
        }
      }
      if ((long *)plRam0000000113835678[(long)unaff_x22] != (long *)0x0) {
        for (plVar15 = *(long **)plRam0000000113835678[(long)unaff_x22]; plVar15 != (long *)0x0;
            plVar15 = (long *)*plVar15) {
          plVar6 = (long *)plVar15[1];
          if (plVar6 == plVar7) {
            param_1 = (long *)0x113835678;
            func_0x000107c2b068(0x113835678,plVar15 + 2,&plStack_230);
            if (((ulong)param_1 & 1) != 0) goto LAB_10ab2b7d4;
          }
          else {
            if (((ulong)plVar8 & uVar13) == 0) {
              plVar6 = (long *)((ulong)plVar6 & uVar13);
            }
            else if (plVar8 <= plVar6) {
              uVar1 = 0;
              if (plVar8 != (long *)0x0) {
                uVar1 = (ulong)plVar6 / (ulong)plVar8;
              }
              plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar8);
            }
            if (plVar6 != unaff_x22) break;
          }
        }
      }
    }
    plVar15 = (long *)0x30;
    __Znwm();
    *plVar15 = 0;
    plVar15[1] = (long)plVar7;
    plVar15[3] = lStack_228;
    plVar15[2] = (long)plStack_230;
    plVar15[4] = lStack_220;
    plStack_230 = (long *)0x0;
    lStack_228 = 0;
    lStack_220 = 0;
    plVar15[5] = plVar2[4];
    param_1 = plVar15;
    if ((plVar8 == (long *)0x0) ||
       (fRam0000000113835698 * (float)plVar8 < (float)(uRam0000000113835690 + 1))) {
      uVar13 = 1;
      if ((long *)0x2 < plVar8) {
        uVar13 = (ulong)(((ulong)plVar8 & (long)plVar8 - 1U) != 0);
      }
      plVar6 = (long *)(uVar13 | (long)plVar8 << 1);
      plVar8 = (long *)(long)((float)(uRam0000000113835690 + 1) / fRam0000000113835698);
      if (plVar6 <= plVar8) {
        plVar6 = plVar8;
      }
      if ((long)plVar6 - 1U == 0) {
        plVar6 = (long *)0x2;
      }
      else if (((ulong)plVar6 & (long)plVar6 - 1U) != 0) {
        __ZNSt3__112__next_primeEm();
        param_1 = plVar6;
      }
      plVar4 = plRam0000000113835680;
      if (plRam0000000113835680 < plVar6) {
LAB_10ab2b5dc:
        if ((ulong)plVar6 >> 0x3d != 0) {
          func_0x000109ffded8();
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10ab2b874);
          (*pcVar5)();
        }
        plVar8 = (long *)((long)plVar6 << 3);
        __Znwm();
        param_1 = plRam0000000113835678;
        if (plRam0000000113835678 != (long *)0x0) {
          plRam0000000113835678 = plVar8;
          __ZdlPv();
          plVar8 = plRam0000000113835678;
        }
        plRam0000000113835678 = plVar8;
        plVar8 = (long *)0x0;
        plRam0000000113835680 = plVar6;
        do {
          plRam0000000113835678[(long)plVar8] = 0;
          plVar4 = plRam0000000113835688;
          plVar8 = (long *)((long)plVar8 + 1);
        } while (plVar6 != plVar8);
        plVar8 = plVar6;
        if (plRam0000000113835688 != (long *)0x0) {
          plVar9 = (long *)plRam0000000113835688[1];
          uVar13 = (long)plVar6 - 1;
          if (((ulong)plVar6 & uVar13) == 0) {
            plVar9 = (long *)((ulong)plVar9 & uVar13);
          }
          else if (plVar6 <= plVar9) {
            uVar1 = 0;
            if (plVar6 != (long *)0x0) {
              uVar1 = (ulong)plVar9 / (ulong)plVar6;
            }
            plVar9 = (long *)((long)plVar9 - uVar1 * (long)plVar6);
          }
          plRam0000000113835678[(long)plVar9] = 0x113835688;
          plVar10 = (long *)*plVar4;
          plVar3 = plRam0000000113835678;
          while (plRam0000000113835678 = plVar3, plVar10 != (long *)0x0) {
            plVar12 = (long *)plVar10[1];
            if (((ulong)plVar6 & uVar13) == 0) {
              plVar12 = (long *)((ulong)plVar12 & uVar13);
            }
            else if (plVar6 <= plVar12) {
              uVar1 = 0;
              if (plVar6 != (long *)0x0) {
                uVar1 = (ulong)plVar12 / (ulong)plVar6;
              }
              plVar12 = (long *)((long)plVar12 - uVar1 * (long)plVar6);
            }
            plVar11 = plVar10;
            if (plVar12 != plVar9) {
              if (plVar3[(long)plVar12] == 0) {
                plVar3[(long)plVar12] = (long)plVar4;
                plVar9 = plVar12;
              }
              else {
                *plVar4 = *plVar10;
                *plVar10 = *(long *)plVar3[(long)plVar12];
                *(long **)plVar3[(long)plVar12] = plVar10;
                plVar11 = plVar4;
              }
            }
            plVar3 = plRam0000000113835678;
            plVar4 = plVar11;
            plVar10 = (long *)*plVar11;
          }
        }
      }
      else {
        plVar8 = plRam0000000113835680;
        if (plVar6 < plRam0000000113835680) {
          param_1 = (long *)(long)((float)uRam0000000113835690 / fRam0000000113835698);
          if ((plRam0000000113835680 < (long *)0x3) ||
             (((ulong)plRam0000000113835680 & (long)plRam0000000113835680 - 1U) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if ((long *)0x1 < param_1) {
            param_1 = (long *)(1L << (-LZCOUNT((long)param_1 + -1) & 0x3fU));
          }
          plVar9 = plRam0000000113835678;
          if (plVar6 <= param_1) {
            plVar6 = param_1;
          }
          plVar8 = plRam0000000113835680;
          if (plVar6 < plVar4) {
            if (plVar6 != (long *)0x0) goto LAB_10ab2b5dc;
            plRam0000000113835678 = (long *)0x0;
            if (plVar9 != (long *)0x0) {
              __ZdlPv();
            }
            plRam0000000113835680 = (long *)0x0;
            param_1 = plVar9;
            plVar8 = (long *)0x0;
          }
        }
      }
      if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
        unaff_x22 = (long *)((long)plVar8 - 1U & (ulong)plVar7);
      }
      else {
        unaff_x22 = plVar7;
        if (plVar8 <= plVar7) {
          uVar13 = 0;
          if (plVar8 != (long *)0x0) {
            uVar13 = (ulong)plVar7 / (ulong)plVar8;
          }
          unaff_x22 = (long *)((long)plVar7 - uVar13 * (long)plVar8);
        }
      }
    }
    plVar6 = plRam0000000113835678;
    plVar7 = (long *)plRam0000000113835678[(long)unaff_x22];
    if (plVar7 == (long *)0x0) {
      *plVar15 = (long)plRam0000000113835688;
      plRam0000000113835688 = plVar15;
      plVar6[(long)unaff_x22] = 0x113835688;
      if (*plVar15 != 0) {
        plVar7 = *(long **)(*plVar15 + 8);
        if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
          plVar7 = (long *)((ulong)plVar7 & (long)plVar8 - 1U);
        }
        else if (plVar8 <= plVar7) {
          uVar13 = 0;
          if (plVar8 != (long *)0x0) {
            uVar13 = (ulong)plVar7 / (ulong)plVar8;
          }
          plVar7 = (long *)((long)plVar7 - uVar13 * (long)plVar8);
        }
        plVar7 = plRam0000000113835678 + (long)plVar7;
        goto LAB_10ab2b7c4;
      }
    }
    else {
      *plVar15 = *plVar7;
LAB_10ab2b7c4:
      *plVar7 = (long)plVar15;
    }
    uRam0000000113835690 = uRam0000000113835690 + 1;
LAB_10ab2b7d4:
    if (lStack_220 < 0) {
      param_1 = plStack_230;
      __ZdlPv();
    }
    plVar2 = (long *)*plVar2;
  } while( true );
}



/* Entry: 10ab2bae4; end: 10ab2baeb;  */

long * FUN_10ab2bae4(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (*(char *)((long)plVar1 + 0x27) < '\0') {
      __ZdlPv(plVar1[2]);
    }
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10ab2baec; end: 10ab2bf53;  */

void FUN_10ab2baec(long *param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  ulong unaff_x21;
  ulong uVar16;
  long lVar17;
  
  uRam00000001137ec478 = 0;
  lRam00000001137ec470 = 0;
  uRam00000001137ec488 = 0;
  plRam00000001137ec480 = (long *)0x0;
  fRam00000001137ec490 = 1.0;
  if (param_2 != 0) {
    plVar6 = param_1 + param_2 * 3;
    do {
      uVar12 = 0x1137ec470;
      FUN_10a054838(0x1137ec470,*param_1,param_1[1]);
      uVar9 = uRam00000001137ec478;
      if (uRam00000001137ec478 != 0) {
        uVar16 = uRam00000001137ec478 - 1;
        if ((uRam00000001137ec478 & uVar16) == 0) {
          unaff_x21 = uVar16 & uVar12;
        }
        else {
          unaff_x21 = uVar12;
          if (uRam00000001137ec478 <= uVar12) {
            uVar8 = 0;
            if (uRam00000001137ec478 != 0) {
              uVar8 = uVar12 / uRam00000001137ec478;
            }
            unaff_x21 = uVar12 - uVar8 * uRam00000001137ec478;
          }
        }
        plVar7 = *(long **)(lRam00000001137ec470 + unaff_x21 * 8);
        if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
          lVar5 = *param_1;
          lVar17 = param_1[1];
          do {
            uVar8 = plVar7[1];
            if (uVar8 == uVar12) {
              if (plVar7[3] == lVar17) {
                lVar4 = plVar7[2];
                _memcmp(lVar4,lVar5,lVar17);
                if ((int)lVar4 == 0) goto LAB_10ab2bea8;
              }
            }
            else {
              if ((uVar9 & uVar16) == 0) {
                uVar8 = uVar8 & uVar16;
              }
              else if (uVar9 <= uVar8) {
                uVar10 = 0;
                if (uVar9 != 0) {
                  uVar10 = uVar8 / uVar9;
                }
                uVar8 = uVar8 - uVar10 * uVar9;
              }
              if (uVar8 != unaff_x21) break;
            }
            plVar7 = (long *)*plVar7;
          } while (plVar7 != (long *)0x0);
        }
      }
      plVar7 = (long *)0x28;
      __Znwm();
      *plVar7 = 0;
      plVar7[1] = uVar12;
      lVar17 = param_1[1];
      lVar5 = *param_1;
      plVar7[4] = param_1[2];
      plVar7[3] = lVar17;
      plVar7[2] = lVar5;
      if ((uVar9 == 0) || (fRam00000001137ec490 * (float)uVar9 < (float)(uRam00000001137ec488 + 1)))
      {
        uVar16 = 1;
        if (2 < uVar9) {
          uVar16 = (ulong)((uVar9 & uVar9 - 1) != 0);
        }
        uVar16 = uVar16 | uVar9 << 1;
        uVar8 = (ulong)((float)(uRam00000001137ec488 + 1) / fRam00000001137ec490);
        if (uVar16 <= uVar8) {
          uVar16 = uVar8;
        }
        uVar8 = uVar9;
        if (uVar16 - 1 == 0) {
          uVar16 = 2;
        }
        else if ((uVar16 & uVar16 - 1) != 0) {
          __ZNSt3__112__next_primeEm();
          uVar8 = uRam00000001137ec478;
        }
        if (uVar8 < uVar16) {
LAB_10ab2bca4:
          if (uVar16 >> 0x3d != 0) {
            func_0x000109ffded8();
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10ab2bf28);
            (*pcVar3)();
          }
          lVar5 = uVar16 << 3;
          __Znwm();
          bVar1 = lRam00000001137ec470 != 0;
          lRam00000001137ec470 = lVar5;
          if (bVar1) {
            __ZdlPv();
          }
          uVar9 = 0;
          uRam00000001137ec478 = uVar16;
          do {
            *(undefined8 *)(lRam00000001137ec470 + uVar9 * 8) = 0;
            plVar11 = plRam00000001137ec480;
            uVar9 = uVar9 + 1;
          } while (uVar16 != uVar9);
          uVar9 = uVar16;
          if (plRam00000001137ec480 != (long *)0x0) {
            uVar8 = plRam00000001137ec480[1];
            uVar10 = uVar16 - 1;
            if ((uVar16 & uVar10) == 0) {
              uVar8 = uVar8 & uVar10;
            }
            else if (uVar16 <= uVar8) {
              uVar15 = 0;
              if (uVar16 != 0) {
                uVar15 = uVar8 / uVar16;
              }
              uVar8 = uVar8 - uVar15 * uVar16;
            }
            *(undefined8 *)(lRam00000001137ec470 + uVar8 * 8) = 0x1137ec480;
            plVar13 = (long *)*plVar11;
            lVar5 = lRam00000001137ec470;
            while (lRam00000001137ec470 = lVar5, plVar13 != (long *)0x0) {
              uVar15 = plVar13[1];
              if ((uVar16 & uVar10) == 0) {
                uVar15 = uVar15 & uVar10;
              }
              else if (uVar16 <= uVar15) {
                uVar2 = 0;
                if (uVar16 != 0) {
                  uVar2 = uVar15 / uVar16;
                }
                uVar15 = uVar15 - uVar2 * uVar16;
              }
              plVar14 = plVar13;
              if (uVar15 != uVar8) {
                if (*(long *)(lVar5 + uVar15 * 8) == 0) {
                  *(long **)(lVar5 + uVar15 * 8) = plVar11;
                  uVar8 = uVar15;
                }
                else {
                  *plVar11 = *plVar13;
                  *plVar13 = **(long **)(lVar5 + uVar15 * 8);
                  **(undefined8 **)(lVar5 + uVar15 * 8) = plVar13;
                  plVar14 = plVar11;
                }
              }
              lVar5 = lRam00000001137ec470;
              plVar11 = plVar14;
              plVar13 = (long *)*plVar14;
            }
          }
        }
        else {
          uVar9 = uVar8;
          if (uVar16 < uVar8) {
            uVar9 = (ulong)((float)uRam00000001137ec488 / fRam00000001137ec490);
            if ((uVar8 < 3) || ((uVar8 & uVar8 - 1) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if (1 < uVar9) {
              uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
            }
            lVar5 = lRam00000001137ec470;
            if (uVar16 <= uVar9) {
              uVar16 = uVar9;
            }
            uVar9 = uRam00000001137ec478;
            if (uVar16 < uVar8) {
              if (uVar16 != 0) goto LAB_10ab2bca4;
              lRam00000001137ec470 = 0;
              if (lVar5 != 0) {
                __ZdlPv();
              }
              uRam00000001137ec478 = 0;
              uVar9 = 0;
            }
          }
        }
        if ((uVar9 & uVar9 - 1) == 0) {
          unaff_x21 = uVar9 - 1 & uVar12;
        }
        else {
          unaff_x21 = uVar12;
          if (uVar9 <= uVar12) {
            uVar16 = 0;
            if (uVar9 != 0) {
              uVar16 = uVar12 / uVar9;
            }
            unaff_x21 = uVar12 - uVar16 * uVar9;
          }
        }
      }
      lVar5 = lRam00000001137ec470;
      plVar11 = *(long **)(lRam00000001137ec470 + unaff_x21 * 8);
      if (plVar11 == (long *)0x0) {
        *plVar7 = (long)plRam00000001137ec480;
        plRam00000001137ec480 = plVar7;
        *(undefined8 *)(lVar5 + unaff_x21 * 8) = 0x1137ec480;
        if (*plVar7 != 0) {
          uVar12 = *(ulong *)(*plVar7 + 8);
          if ((uVar9 & uVar9 - 1) == 0) {
            uVar12 = uVar12 & uVar9 - 1;
          }
          else if (uVar9 <= uVar12) {
            uVar16 = 0;
            if (uVar9 != 0) {
              uVar16 = uVar12 / uVar9;
            }
            uVar12 = uVar12 - uVar16 * uVar9;
          }
          plVar11 = (long *)(lRam00000001137ec470 + uVar12 * 8);
          goto LAB_10ab2be94;
        }
      }
      else {
        *plVar7 = *plVar11;
LAB_10ab2be94:
        *plVar11 = (long)plVar7;
      }
      uRam00000001137ec488 = uRam00000001137ec488 + 1;
LAB_10ab2bea8:
      param_1 = param_1 + 3;
    } while (param_1 != plVar6);
  }
  return;
}



/* Entry: 10ab2bf54; end: 10ab2bfcf;  */

long * FUN_10ab2bf54(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10ab2bfd0; end: 10ab2c033;  */

long * FUN_10ab2bfd0(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (*(char *)((long)plVar1 + 0x27) < '\0') {
      __ZdlPv(plVar1[2]);
    }
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10ab2c034; end: 10ab2c073;  */

void FUN_10ab2c034(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_10ab2c074();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10ab2c074; end: 10ab2c0c7;  */

void FUN_10ab2c074(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)*param_1;
  plVar3 = (long *)param_1[1];
  while (plVar2 = plVar3, plVar2 != plVar1) {
    plVar3 = plVar2 + -3;
    if (*plVar3 != 0) {
      plVar2[-2] = *plVar3;
      __ZdlPv();
    }
  }
  param_1[1] = (long)plVar1;
  return;
}



/* Entry: 10ab2c0c8; end: 10ab2c0db;  */

undefined1  [16] FUN_10ab2c0c8(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  plVar2 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((long *)0xaaaaaaaaaaaaaaa < plVar2) {
    func_0x000109ffded8();
    plVar1 = (long *)plVar2[1];
    plVar5 = (long *)plVar2[2];
    while (plVar4 = plVar5, plVar4 != plVar1) {
      plVar5 = plVar4 + -3;
      lVar3 = *plVar5;
      plVar2[2] = (long)plVar5;
      if (lVar3 != 0) {
        plVar4[-2] = lVar3;
        __ZdlPv();
        plVar5 = (long *)plVar2[2];
      }
    }
    if (*plVar2 != 0) {
      __ZdlPv();
    }
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = plVar2;
    return auVar7;
  }
  lVar3 = (long)plVar2 * 0x18;
  __Znwm(lVar3);
  auVar6._8_8_ = plVar2;
  auVar6._0_8_ = lVar3;
  return auVar6;
}



/* Entry: 10ab2c0dc; end: 10ab2c1af;  */

undefined1  [16] FUN_10ab2c0dc(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if ((long *)0xaaaaaaaaaaaaaaa < param_1) {
    func_0x000109ffded8();
    plVar1 = (long *)param_1[1];
    plVar4 = (long *)param_1[2];
    while (plVar3 = plVar4, plVar3 != plVar1) {
      plVar4 = plVar3 + -3;
      lVar2 = *plVar4;
      param_1[2] = (long)plVar4;
      if (lVar2 != 0) {
        plVar3[-2] = lVar2;
        __ZdlPv();
        plVar4 = (long *)param_1[2];
      }
    }
    if (*param_1 != 0) {
      __ZdlPv();
    }
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = param_1;
    return auVar6;
  }
  lVar2 = (long)param_1 * 0x18;
  __Znwm(lVar2);
  auVar5._8_8_ = param_1;
  auVar5._0_8_ = lVar2;
  return auVar5;
}



/* Entry: 10ab2c1b0; end: 10ab2ca9f;  */

void FUN_10ab2c1b0(long *param_1)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  long *plVar9;
  undefined *extraout_x8;
  undefined *puVar10;
  long lVar11;
  long ****pppplVar12;
  undefined *puVar13;
  long *plVar14;
  long lStack_178;
  long ***ppplStack_170;
  long *plStack_168;
  long lStack_160;
  undefined1 uStack_158;
  long ***ppplStack_150;
  long *plStack_148;
  undefined1 uStack_138;
  long ***ppplStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  long ***ppplStack_118;
  long *plStack_110;
  char cStack_101;
  long *plStack_100;
  long *plStack_f8;
  code **ppcStack_f0;
  int iStack_e8;
  long lStack_e0;
  long *plStack_d8;
  long lStack_d0;
  undefined ***pppuStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  undefined **ppuStack_a8;
  code *pcStack_a0;
  undefined **ppuStack_98;
  long lStack_90;
  long lStack_88;
  code **ppcStack_80;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(param_1 + 0xf) & 1) == 0) goto LAB_10ab2c81c;
  lStack_178 = param_1[0x10];
  param_1[0x10] = 0;
  pcStack_a0 = (code *)&UNK_10f653c20;
  ppuStack_98 = (undefined **)0x21;
  if (*(long *)(*(long *)(*(long *)(*param_1 + 0x50) + 0x100) + 0x260) == 0) {
    FUN_10a0edfc4(&pcStack_a0);
    goto LAB_10ab2c81c;
  }
  ppuVar6 = &PTR___tlv_bootstrap_11340dee8;
  (*(code *)PTR___tlv_bootstrap_11340dee8)();
  puVar13 = *ppuVar6;
  *ppuVar6 = extraout_x8;
  ppuVar7 = ppuVar6;
  __ZNSt3__16chrono12steady_clock3nowEv();
  plVar14 = param_1 + 2;
  lStack_90 = *plVar14;
  pppuStack_c0 = &ppuStack_a8;
  plStack_b8 = param_1;
  plStack_b0 = plVar14;
  ppuStack_a8 = ppuVar7;
  if (lStack_90 != 0) {
    lStack_88 = param_1[3];
    if (lStack_88 != 0) {
      plVar9 = (long *)(lStack_88 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = *plVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppcStack_f0 = (code **)param_1[4];
    plStack_f8 = (long *)0x0;
    pcStack_a0 = FUN_10ab2d184;
    ppuStack_98 = &PTR_FUN_110c48428;
    plStack_100 = (long *)0x0;
    ppcStack_80 = ppcStack_f0;
    FUN_10a3e05f0(param_1[5],param_1[6],&pcStack_a0);
    (*(code *)*ppuStack_98)(&ppuStack_98);
  }
  ppuStack_98 = (undefined **)param_1[1];
  pcStack_a0 = (code *)*param_1;
  if (param_1[1] != 0) {
    plVar9 = (long *)(param_1[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lStack_88 = param_1[8];
  lStack_90 = param_1[7];
  if (param_1[8] != 0) {
    plVar9 = (long *)(param_1[8] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  ppcStack_80 = (code **)param_1[4];
  plStack_d8 = (long *)param_1[1];
  lStack_e0 = *param_1;
  lStack_d0 = (long)ppcStack_80;
  if (param_1[1] != 0) {
    plVar9 = (long *)(param_1[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lStack_d0 = param_1[4];
  }
  lVar8 = param_1[5];
  FUN_10a3e03a0(lVar8,param_1[6]);
  iVar5 = (int)lVar8;
  ppcStack_f0 = &pcStack_a0;
  plStack_100 = param_1;
  plStack_f8 = param_1 + 6;
  __ZSt19uncaught_exceptionsv();
  iStack_e8 = iVar5;
  FUN_10ad055a0();
  if (iVar5 == 0) {
LAB_10ab2c38c:
    lVar8 = *param_1;
    plVar9 = (long *)0x38;
    __Znwm();
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&PTR_FUN_110c48998;
    pppplVar12 = (long ****)(plVar9 + 3);
    *pppplVar12 = (long ***)&PTR_DAT_110c48028;
    plVar9[5] = 0;
    plVar9[6] = 0;
    plVar9[4] = 0;
    *(undefined1 *)((long)plVar9 + 0x31) = 1;
    if ((char)param_1[0xd] == '\x01') {
      ppplStack_170 = (long ***)param_1[0xb];
      plStack_168 = (long *)param_1[0xc];
      ppplStack_118 = (long ***)pppplVar12;
      plStack_110 = plVar9;
      if (plStack_168 != (long *)0x0) {
        plVar9 = plStack_168 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    else {
      ppplStack_118 = (long ***)0x0;
      plStack_110 = (long *)0x0;
      ppplStack_170 = (long ***)pppplVar12;
      plStack_168 = plVar9;
    }
    plVar9 = plStack_168;
    FUN_10ab27cfc(&ppplStack_150,lVar8,0,param_1 + 9,ppplStack_170,*plVar14);
    if (plVar9 != (long *)0x0) {
      plVar14 = plVar9 + 1;
      do {
        lVar8 = *plVar14;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *plVar14 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    plVar14 = plStack_110;
    if (plStack_110 != (long *)0x0) {
      plVar9 = plStack_110 + 1;
      do {
        lVar8 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_110 + 0x10))(plStack_110);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
      }
    }
    *(char *)(ppplStack_150 + 1) = '\x01';
    for (pppplVar12 = (long ****)ppplStack_150[0x33];
        pppplVar12 != (long ****)(ppplStack_150 + 0x32); pppplVar12 = (long ****)pppplVar12[1]) {
      FUN_10a3e7798(pppplVar12[2],1);
    }
    func_0x00010a34e054(param_1[4] + 0x28,&ppplStack_150);
    plVar14 = plStack_148;
    if (plStack_148 != (long *)0x0) {
      plVar9 = plStack_148 + 1;
      do {
        lVar8 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_148 + 0x10))(plStack_148);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
      }
    }
    FUN_10ab2cdc4(&plStack_100);
    plVar14 = plStack_d8;
    if (plStack_d8 != (long *)0x0) {
      plVar9 = plStack_d8 + 1;
      do {
        lVar8 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
      }
    }
    if (lStack_88 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    ppuVar7 = ppuStack_98;
    if (ppuStack_98 != (undefined **)0x0) {
      ppuVar1 = ppuStack_98 + 1;
      do {
        puVar10 = *ppuVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
        if (bVar3) {
          *ppuVar1 = puVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (puVar10 == (undefined *)0x0) {
        (**(code **)(*ppuStack_98 + 0x10))(ppuStack_98);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar7);
      }
    }
    FUN_10ab2d07c(&pppuStack_c0);
    lVar8 = lStack_178;
    *ppuVar6 = puVar13;
    plVar14 = (long *)(lStack_178 + 0x10);
    do {
      lVar11 = *plVar14;
      if (lVar11 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *plVar14 = 2;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          FUN_109d1b4dc(lStack_178 + 0x18);
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar11 >> 1 & 1) == 0);
    if ((char)param_1[0xf] == '\x01') {
      if ((char)param_1[0xd] == '\x01') {
        FUN_10ab392d4(param_1 + 0xb);
      }
      FUN_10a0617bc(param_1 + 9);
      if (param_1[8] != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      FUN_10ab39e0c(param_1 + 2);
      func_0x00010a1d015c(param_1);
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
    lStack_178 = 0;
    if ((lVar8 != 0) && (func_0x0001092b4274(&lStack_178,lVar8), lStack_178 != 0)) {
      func_0x0001092b4274(&lStack_178);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    ppuVar7 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar7 == (undefined *)0x0) {
      ppuVar7 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar9 = (long *)*ppuVar7;
      if ((plVar9 == (long *)0x0) || ((**(code **)(*plVar9 + 0x18))(), plVar9 == (long *)0x0))
      goto LAB_10ab2c38c;
      plVar9 = plVar9 + 7;
    }
    else {
      plVar9 = (long *)(*ppuVar7 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar9 + 0x10) >> 1 & 1) == 0) goto LAB_10ab2c38c;
  }
  func_0x000107c2b054(&ppplStack_118,&UNK_10f691c78);
  lVar8 = *(long *)(*(long *)(*param_1 + 0x50) + 0x100);
  if (*(char *)(lVar8 + 0x21f) < '\0') {
    func_0x000107c3192c(&ppplStack_130,*(undefined8 *)(lVar8 + 0x208),*(undefined8 *)(lVar8 + 0x210)
                       );
  }
  else {
    plStack_128 = *(long **)(lVar8 + 0x210);
    ppplStack_130 = *(long ****)(lVar8 + 0x208);
    uStack_120 = *(long *)(lVar8 + 0x218);
  }
  if (cStack_101 < '\0') {
    ppplStack_150 = (long ***)"null";
    if (plStack_110 != (long *)0x0) {
      ppplStack_150 = ppplStack_118;
    }
  }
  else {
    ppplStack_150 = (long ***)"null";
    if (cStack_101 != '\0') {
      ppplStack_150 = (long ***)&ppplStack_118;
    }
  }
  if (uStack_120 < 0) {
    ppplStack_170 = (long ***)"null";
    if (plStack_128 != (long *)0x0) {
      ppplStack_170 = ppplStack_130;
    }
  }
  else {
    ppplStack_170 = (long ***)"null";
    if (uStack_120._7_1_ != '\0') {
      ppplStack_170 = (long ***)&ppplStack_130;
    }
  }
  FUN_10a224324(&ppplStack_150,&ppplStack_170);
  if (cStack_101 < '\0') {
    if (plStack_110 != (long *)0x0) {
      func_0x000107c3192c(&ppplStack_150,ppplStack_118);
      goto LAB_10ab2c7c0;
    }
LAB_10ab2c7a4:
    uStack_138 = 0;
    ppplStack_150 = (long ***)((ulong)ppplStack_150 & 0xffffffffffffff00);
  }
  else {
    if (cStack_101 == '\0') goto LAB_10ab2c7a4;
    plStack_148 = plStack_110;
    ppplStack_150 = ppplStack_118;
LAB_10ab2c7c0:
    uStack_138 = 1;
  }
  if (uStack_120 < 0) {
    if (plStack_128 != (long *)0x0) {
      func_0x000107c3192c(&ppplStack_170,ppplStack_130);
      goto LAB_10ab2c808;
    }
LAB_10ab2c7ec:
    uStack_158 = 0;
    ppplStack_170 = (long ***)((ulong)ppplStack_170 & 0xffffffffffffff00);
  }
  else {
    if (uStack_120._7_1_ == '\0') goto LAB_10ab2c7ec;
    plStack_168 = plStack_128;
    ppplStack_170 = ppplStack_130;
    lStack_160 = uStack_120;
LAB_10ab2c808:
    uStack_158 = 1;
  }
  FUN_10a234a0c(&ppplStack_150,&ppplStack_170);
LAB_10ab2c81c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ab2c820);
  (*pcVar4)();
}



/* Entry: 10ab2caa0; end: 10ab2cbd3;  */

undefined8 * FUN_10ab2caa0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c483c8;
  if (param_1[0x24] != 0) {
    func_0x0001092b4274(param_1 + 0x24);
  }
  if (*(char *)(param_1 + 0x23) == '\x01') {
    if (*(char *)(param_1 + 0x21) == '\x01') {
      FUN_10ab392d4(param_1 + 0x1f);
    }
    FUN_10a0617bc(param_1 + 0x1d);
    if (param_1[0x1c] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    FUN_10ab39e0c(param_1 + 0x16);
    func_0x00010a1d015c(param_1 + 0x14);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10ab2cbd4; end: 10ab2cc8f;  */

void FUN_10ab2cbd4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  *param_2 = 0;
  param_2[1] = 0;
  uVar5 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar5;
  param_2[2] = 0;
  param_2[3] = 0;
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  param_1[6] = param_2[6];
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  lVar4 = param_2[8];
  uVar5 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = param_2[10];
  uVar5 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  if (*(char *)(param_2 + 0xd) == '\x01') {
    lVar4 = param_2[0xc];
    uVar5 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar5;
    if (lVar4 != 0) {
      plVar1 = (long *)(lVar4 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *(undefined1 *)(param_1 + 0xd) = 1;
  }
  *(undefined1 *)(param_1 + 0xf) = 1;
  return;
}



/* Entry: 10ab2cc90; end: 10ab2cdc3;  */

undefined8 * FUN_10ab2cc90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c48400;
  if (param_1[0x24] != 0) {
    func_0x0001092b4274(param_1 + 0x24);
  }
  if (*(char *)(param_1 + 0x23) == '\x01') {
    if (*(char *)(param_1 + 0x21) == '\x01') {
      FUN_10ab392d4(param_1 + 0x1f);
    }
    FUN_10a0617bc(param_1 + 0x1d);
    if (param_1[0x1c] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    FUN_10ab39e0c(param_1 + 0x16);
    func_0x00010a1d015c(param_1 + 0x14);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10ab2cdc4; end: 10ab2cebf;  */

undefined *** FUN_10ab2cdc4(undefined ***param_1)

{
  undefined **ppuVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  undefined8 uVar6;
  undefined ***pppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  code **unaff_x20;
  undefined8 uStack_148;
  undefined **ppuStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  long lStack_108;
  undefined8 *puStack_100;
  undefined ***pppuStack_f8;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  undefined8 uStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  long lStack_98;
  code **ppcStack_90;
  undefined ***pppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar5 = param_1;
  __ZSt19uncaught_exceptionsv();
  if ((int)pppuVar5 <= *(int *)(param_1 + 3)) {
    uVar6 = *(undefined8 *)(**param_1 + 0x50);
    puVar8 = *param_1[1];
    ppuVar9 = param_1[2];
    pcStack_68 = FUN_10ab2d1f8;
    ppuStack_60 = &PTR_FUN_110c48440;
    puStack_50 = ppuVar9[1];
    puStack_58 = *ppuVar9;
    *ppuVar9 = (undefined *)0x0;
    ppuVar9[1] = (undefined *)0x0;
    puStack_40 = ppuVar9[3];
    puStack_48 = ppuVar9[2];
    if (ppuVar9[3] != (undefined *)0x0) {
      plVar2 = (long *)(ppuVar9[3] + 0x10);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    unaff_x20 = &pcStack_68;
    puStack_38 = ppuVar9[4];
    FUN_10a3e0c90(uVar6,puVar8,&pcStack_68);
    pppuVar5 = &ppuStack_60;
    (*(code *)*ppuStack_60)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(unaff_x20 + 1);
  pppuVar7 = pppuVar5;
  __Unwind_Resume();
  pcStack_78 = FUN_10ab2cec0;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *(undefined8 *)(**pppuVar7 + 0x50);
  puVar8 = *pppuVar7[1];
  ppuVar9 = pppuVar7[2];
  uStack_d8 = 0x10ab2d36c;
  ppuStack_d0 = &PTR_DAT_110c48458;
  puStack_c0 = ppuVar9[1];
  puStack_c8 = *ppuVar9;
  *ppuVar9 = (undefined *)0x0;
  ppuVar9[1] = (undefined *)0x0;
  puStack_b8 = ppuVar9[2];
  ppcStack_90 = unaff_x20;
  pppuStack_88 = pppuVar5;
  puStack_80 = &stack0xfffffffffffffff0;
  FUN_10a3e0e30(uVar6,puVar8,&uStack_d8);
  pppuVar5 = &ppuStack_d0;
  (*(code *)*ppuStack_d0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return pppuVar7;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_d0)(&ppuStack_d0);
  pppuVar7 = pppuVar5;
  __Unwind_Resume();
  pcStack_e8 = FUN_10ab2cf88;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *(undefined8 *)(**pppuVar7 + 0x50);
  puVar8 = *pppuVar7[1];
  ppuVar9 = pppuVar7[2];
  uStack_148 = 0x10ab2d36c;
  ppuStack_140 = &PTR_DAT_110c48458;
  puStack_130 = ppuVar9[1];
  puStack_138 = *ppuVar9;
  *ppuVar9 = (undefined *)0x0;
  ppuVar9[1] = (undefined *)0x0;
  puStack_128 = ppuVar9[2];
  puStack_100 = &uStack_d8;
  pppuStack_f8 = pppuVar5;
  ppuStack_f0 = &puStack_80;
  FUN_10a3e0e30(uVar6,puVar8,&uStack_148);
  pppuVar5 = &ppuStack_140;
  (*(code *)*ppuStack_140)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return pppuVar7;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_140)(&ppuStack_140);
  __Unwind_Resume();
  if (pppuVar5[3] != (undefined **)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  ppuVar9 = pppuVar5[1];
  if (ppuVar9 != (undefined **)0x0) {
    ppuVar1 = ppuVar9 + 1;
    do {
      puVar8 = *ppuVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar4) {
        *ppuVar1 = puVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar8 == (undefined *)0x0) {
      (**(code **)(*ppuVar9 + 0x10))(ppuVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar9);
    }
  }
  return pppuVar5;
}



/* Entry: 10ab2cec0; end: 10ab2cf87;  */

undefined *** FUN_10ab2cec0(undefined ***param_1)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  long lStack_98;
  undefined8 *puStack_90;
  undefined ***pppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(undefined8 *)(**param_1 + 0x50);
  puVar7 = *param_1[1];
  ppuVar8 = param_1[2];
  uStack_68 = 0x10ab2d36c;
  ppuStack_60 = &PTR_DAT_110c48458;
  puStack_50 = ppuVar8[1];
  puStack_58 = *ppuVar8;
  *ppuVar8 = (undefined *)0x0;
  ppuVar8[1] = (undefined *)0x0;
  puStack_48 = ppuVar8[2];
  FUN_10a3e0e30(uVar4,puVar7,&uStack_68);
  pppuVar5 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  pppuVar6 = pppuVar5;
  __Unwind_Resume();
  pcStack_78 = FUN_10ab2cf88;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(undefined8 *)(**pppuVar6 + 0x50);
  puVar7 = *pppuVar6[1];
  ppuVar8 = pppuVar6[2];
  uStack_d8 = 0x10ab2d36c;
  ppuStack_d0 = &PTR_DAT_110c48458;
  puStack_c0 = ppuVar8[1];
  puStack_c8 = *ppuVar8;
  *ppuVar8 = (undefined *)0x0;
  ppuVar8[1] = (undefined *)0x0;
  puStack_b8 = ppuVar8[2];
  puStack_90 = &uStack_68;
  pppuStack_88 = pppuVar5;
  puStack_80 = &stack0xfffffffffffffff0;
  FUN_10a3e0e30(uVar4,puVar7,&uStack_d8);
  pppuVar5 = &ppuStack_d0;
  (*(code *)*ppuStack_d0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return pppuVar6;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_d0)(&ppuStack_d0);
  __Unwind_Resume();
  if (pppuVar5[3] != (undefined **)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  ppuVar8 = pppuVar5[1];
  if (ppuVar8 != (undefined **)0x0) {
    ppuVar1 = ppuVar8 + 1;
    do {
      puVar7 = *ppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar3) {
        *ppuVar1 = puVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar7 == (undefined *)0x0) {
      (**(code **)(*ppuVar8 + 0x10))(ppuVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
    }
  }
  return pppuVar5;
}



/* Entry: 10ab2cf88; end: 10ab2d04f;  */

undefined *** FUN_10ab2cf88(undefined ***param_1)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined ***pppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(undefined8 *)(**param_1 + 0x50);
  puVar6 = *param_1[1];
  ppuVar7 = param_1[2];
  uStack_68 = 0x10ab2d36c;
  ppuStack_60 = &PTR_DAT_110c48458;
  puStack_50 = ppuVar7[1];
  puStack_58 = *ppuVar7;
  *ppuVar7 = (undefined *)0x0;
  ppuVar7[1] = (undefined *)0x0;
  puStack_48 = ppuVar7[2];
  FUN_10a3e0e30(uVar4,puVar6,&uStack_68);
  pppuVar5 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume();
  if (pppuVar5[3] != (undefined **)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  ppuVar7 = pppuVar5[1];
  if (ppuVar7 != (undefined **)0x0) {
    ppuVar1 = ppuVar7 + 1;
    do {
      puVar6 = *ppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar3) {
        *ppuVar1 = puVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar6 == (undefined *)0x0) {
      (**(code **)(*ppuVar7 + 0x10))(ppuVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar7);
    }
  }
  return pppuVar5;
}



/* Entry: 10ab2d050; end: 10ab2d07b;  */

long FUN_10ab2d050(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10ab2d07c; end: 10ab2d183;  */

undefined8 * FUN_10ab2d07c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar2;
  undefined8 ***pppuVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 **appuStack_58 [2];
  char cStack_41;
  
  puVar1 = param_1;
  __ZNSt3__16chrono12steady_clock3nowEv();
  if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    lVar2 = *(long *)*param_1;
    uVar5 = *(undefined8 *)param_1[1];
    puVar4 = *(undefined4 **)param_1[2];
    if (puVar4 == (undefined4 *)0x0) {
      pppuVar3 = (undefined8 ***)&UNK_10f650e06;
    }
    else {
      __ZNSt3__19to_stringEf(appuStack_58,*puVar4);
      pppuVar3 = (undefined8 ***)appuStack_58[0];
      if (-1 < cStack_41) {
        pppuVar3 = appuStack_58;
      }
    }
    func_0x00010ae06f08(1,8,&UNK_10f6914f5,&UNK_10f691c95,0xe9,&UNK_10f691eb7,in_x6,in_x7,uVar5,
                        pppuVar3,(double)((long)puVar1 - lVar2) / 1000000000.0);
    if ((puVar4 != (undefined4 *)0x0) && (cStack_41 < '\0')) {
      __ZdlPv(appuStack_58[0]);
    }
  }
  return param_1;
}



/* Entry: 10ab2d184; end: 10ab2d1cb;  */

void FUN_10ab2d184(long param_1)

{
  long lVar1;
  float fStack_14;
  
  fStack_14 = **(float **)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(float *)(lVar1 + 0x20) < fStack_14) {
    *(float *)(lVar1 + 0x20) = fStack_14;
    FUN_10a202b54(*(undefined8 *)(lVar1 + 0x58),&fStack_14);
  }
  return;
}



/* Entry: 10ab2d1cc; end: 10ab2d1f7;  */

long FUN_10ab2d1cc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1 + 8;
}



/* Entry: 10ab2d1f8; end: 10ab2d2f7;  */

void FUN_10ab2d1f8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_40;
  long lStack_38;
  long lStack_30;
  long *plStack_28;
  
  lStack_30 = 0;
  plStack_28 = (long *)0x0;
  plVar4 = *(long **)(param_1 + 0x28);
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_28 = plVar4;
    if (plVar4 != (long *)0x0) {
      lStack_30 = *(long *)(param_1 + 0x20);
      if (lStack_30 != 0) {
        FUN_10a0c3500(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x28));
      }
    }
  }
  lVar6 = *(long *)(param_1 + 0x30);
  lVar5 = *(long *)(lVar6 + 0x38);
  if (lVar5 != 0) {
    lStack_38 = *(long *)(lVar6 + 0x30);
    uStack_40 = *(undefined8 *)(lVar6 + 0x28);
    if (*(long *)(lVar6 + 0x30) != 0) {
      plVar1 = (long *)(*(long *)(lVar6 + 0x30) + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a329ce8(lVar5,&uStack_40);
    if (lStack_38 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10ab2d2f8; end: 10ab2d323;  */

long FUN_10ab2d2f8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1 + 8;
}



/* Entry: 10ab2d324; end: 10ab2d3af;  */

void FUN_10ab2d324(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c48440;
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar5;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar4 = *(long *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  return;
}



/* Entry: 10ab2d3b0; end: 10ab2d403;  */

void FUN_10ab2d3b0(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110c48470)[*(uint *)(param_1 + 0x18)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return;
}



/* Entry: 10ab2d404; end: 10ab2d42b;  */

void FUN_10ab2d404(undefined8 param_1,undefined8 *param_2)

{
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_2);
  return;
}



/* Entry: 10ab2d42c; end: 10ab2d4fb;  */

undefined8 * FUN_10ab2d42c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c48ea8;
  param_1[2] = &PTR_FUN_110c48f48;
  param_1[7] = &PTR_FUN_110c48fa0;
  FUN_10ab2aa74(param_1 + 0x24);
  if (*(char *)((long)param_1 + 0x10f) < '\0') {
    __ZdlPv(param_1[0x1f]);
  }
  FUN_10a3786c8(param_1 + 0x1c);
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10ab2d4fc; end: 10ab2d50b;  */

undefined8 * FUN_10ab2d4fc(undefined8 *param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  byte bVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  char *pcVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  uint6 uVar17;
  undefined8 uVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  byte bVar24;
  byte bVar25;
  undefined8 *puStack_68;
  
  *param_1 = &PTR_FUN_110c484b0;
  *param_1 = &PTR_FUN_110bacbc0;
  pcVar12 = (char *)param_1[3];
  plVar1 = (long *)param_1[4];
  cVar19 = *pcVar12;
  while (puVar7 = param_1, cVar19 < -1) {
    uVar18 = *(undefined8 *)pcVar12;
    uVar9 = CONCAT17(-(-2 < (char)((ulong)uVar18 >> 0x38)),
                     CONCAT16(-(-2 < (char)((ulong)uVar18 >> 0x30)),
                              CONCAT15(-(-2 < (char)((ulong)uVar18 >> 0x28)),
                                       CONCAT14(-(-2 < (char)((ulong)uVar18 >> 0x20)),
                                                CONCAT13(-(-2 < (char)((ulong)uVar18 >> 0x18)),
                                                         CONCAT12(-(-2 < (char)((ulong)uVar18 >>
                                                                               0x10)),
                                                                  CONCAT11(-(-2 < (char)((ulong)
                                                  uVar18 >> 8)),-(-2 < (char)uVar18))))))));
    uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20);
    pcVar12 = pcVar12 + (uVar9 >> 3);
    plVar1 = plVar1 + (uVar9 >> 3) * 2;
    cVar19 = *pcVar12;
  }
  while (cVar19 != -1) {
    plVar14 = plVar1 + 2;
    puVar7 = (undefined8 *)(*plVar1 + 0x10);
    puStack_68 = param_1;
    func_0x00010a1bd9e8(puVar7,&puStack_68);
    pcVar12 = pcVar12 + 1;
    cVar19 = *pcVar12;
    while (plVar1 = plVar14, cVar19 < -1) {
      uVar18 = *(undefined8 *)pcVar12;
      uVar9 = CONCAT17(-(-2 < (char)((ulong)uVar18 >> 0x38)),
                       CONCAT16(-(-2 < (char)((ulong)uVar18 >> 0x30)),
                                CONCAT15(-(-2 < (char)((ulong)uVar18 >> 0x28)),
                                         CONCAT14(-(-2 < (char)((ulong)uVar18 >> 0x20)),
                                                  CONCAT13(-(-2 < (char)((ulong)uVar18 >> 0x18)),
                                                           CONCAT12(-(-2 < (char)((ulong)uVar18 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-2 < (char)((ulong)
                                                  uVar18 >> 8)),-(-2 < (char)uVar18))))))));
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20);
      pcVar12 = pcVar12 + (uVar9 >> 3);
      plVar14 = plVar14 + (uVar9 >> 3) * 2;
      cVar19 = *pcVar12;
    }
  }
  pcVar12 = (char *)param_1[7];
  plVar1 = (long *)param_1[8];
  cVar19 = *pcVar12;
  while (cVar19 < -1) {
    uVar18 = *(undefined8 *)pcVar12;
    uVar9 = CONCAT17(-(-2 < (char)((ulong)uVar18 >> 0x38)),
                     CONCAT16(-(-2 < (char)((ulong)uVar18 >> 0x30)),
                              CONCAT15(-(-2 < (char)((ulong)uVar18 >> 0x28)),
                                       CONCAT14(-(-2 < (char)((ulong)uVar18 >> 0x20)),
                                                CONCAT13(-(-2 < (char)((ulong)uVar18 >> 0x18)),
                                                         CONCAT12(-(-2 < (char)((ulong)uVar18 >>
                                                                               0x10)),
                                                                  CONCAT11(-(-2 < (char)((ulong)
                                                  uVar18 >> 8)),-(-2 < (char)uVar18))))))));
    uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20);
    pcVar12 = pcVar12 + (uVar9 >> 3);
    plVar1 = plVar1 + (uVar9 >> 3) * 2;
    cVar19 = *pcVar12;
  }
  while (cVar19 != -1) {
    plVar14 = plVar1 + 2;
    puVar7 = (undefined8 *)(*plVar1 + 0x10);
    puStack_68 = param_1;
    func_0x00010a1bd9e8(puVar7,&puStack_68);
    pcVar12 = pcVar12 + 1;
    cVar19 = *pcVar12;
    while (plVar1 = plVar14, cVar19 < -1) {
      uVar18 = *(undefined8 *)pcVar12;
      uVar9 = CONCAT17(-(-2 < (char)((ulong)uVar18 >> 0x38)),
                       CONCAT16(-(-2 < (char)((ulong)uVar18 >> 0x30)),
                                CONCAT15(-(-2 < (char)((ulong)uVar18 >> 0x28)),
                                         CONCAT14(-(-2 < (char)((ulong)uVar18 >> 0x20)),
                                                  CONCAT13(-(-2 < (char)((ulong)uVar18 >> 0x18)),
                                                           CONCAT12(-(-2 < (char)((ulong)uVar18 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-2 < (char)((ulong)
                                                  uVar18 >> 8)),-(-2 < (char)uVar18))))))));
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20);
      pcVar12 = pcVar12 + (uVar9 >> 3);
      plVar14 = plVar14 + (uVar9 >> 3) * 2;
      cVar19 = *pcVar12;
    }
  }
  lVar13 = param_1[1];
  if (lVar13 != 0) {
    puStack_68 = param_1;
    FUN_10a1bd024();
    if (puVar7[8] == lVar13) {
      FUN_10a1bd024();
      func_0x00010a1bd968();
    }
    __ZNSt3__15mutex4lockEv(lVar13);
    func_0x00010a1bd968(lVar13 + 0x80,&puStack_68);
    lVar10 = lVar13 + 0x40;
    puVar7 = puStack_68;
    FUN_10a1bfb78(lVar10,puStack_68);
    if (lVar10 != 0) {
      FUN_10a1cc04c(puVar7);
      FUN_10ae6cb48(lVar13 + 0x40,lVar10,0x48);
    }
    lVar10 = 0;
    uVar15 = *(ulong *)(lVar13 + 0x60);
    Hint_Prefetch(uVar15,0,2,0);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = puStack_68 + 0x2219159b;
    uVar9 = (SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^
            (long)(puStack_68 + 0x2219159b) * -0x622015f714c7d297) + (long)puStack_68;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar9;
    uVar11 = SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar9 * -0x622015f714c7d297;
    uVar9 = uVar11 >> 7 ^ uVar15 >> 0xc;
    bVar6 = (byte)uVar11;
    uVar17 = CONCAT15(bVar6,CONCAT14(bVar6,CONCAT13(bVar6,CONCAT12(bVar6,CONCAT11(bVar6,bVar6))))) &
             0x7f7f7f7f7f7f;
    while( true ) {
      uVar9 = uVar9 & *(ulong *)(lVar13 + 0x70);
      uVar18 = *(undefined8 *)(uVar15 + uVar9);
      cVar19 = (char)((ulong)uVar18 >> 8);
      cVar20 = (char)((ulong)uVar18 >> 0x10);
      cVar21 = (char)((ulong)uVar18 >> 0x18);
      cVar22 = (char)((ulong)uVar18 >> 0x20);
      cVar23 = (char)((ulong)uVar18 >> 0x28);
      bVar24 = (byte)((ulong)uVar18 >> 0x30);
      bVar25 = (byte)((ulong)uVar18 >> 0x38);
      for (uVar11 = CONCAT17(-(bVar25 == (bVar6 & 0x7f)),
                             CONCAT16(-(bVar24 == (bVar6 & 0x7f)),
                                      CONCAT15(-(cVar23 == (char)(uVar17 >> 0x28)),
                                               CONCAT14(-(cVar22 == (char)(uVar17 >> 0x20)),
                                                        CONCAT13(-(cVar21 == (char)(uVar17 >> 0x18))
                                                                 ,CONCAT12(-(cVar20 ==
                                                                            (char)(uVar17 >> 0x10)),
                                                                           CONCAT11(-(cVar19 ==
                                                                                     (char)(uVar17 
                                                  >> 8)),-((char)uVar18 == (char)uVar17)))))))) &
                    0x8080808080808080; uVar11 != 0; uVar11 = uVar11 - 1 & uVar11) {
        uVar16 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
        uVar16 = uVar9 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3) &
                 *(ulong *)(lVar13 + 0x70);
        if (*(undefined8 **)(*(long *)(lVar13 + 0x68) + uVar16 * 0x48) == puStack_68) {
          if (uVar15 != 0) {
            FUN_10a1cbfa4();
            FUN_10ae6cb48((ulong *)(lVar13 + 0x60),uVar15 + uVar16,0x48);
          }
          goto LAB_10a1c03bc;
        }
      }
      if (CONCAT17(-(bVar25 == 0x80),
                   CONCAT16(-(bVar24 == 0x80),
                            CONCAT15(-(cVar23 == -0x80),
                                     CONCAT14(-(cVar22 == -0x80),
                                              CONCAT13(-(cVar21 == -0x80),
                                                       CONCAT12(-(cVar20 == -0x80),
                                                                CONCAT11(-(cVar19 == -0x80),
                                                                         -((char)uVar18 == -0x80))))
                                             )))) != 0) break;
      lVar10 = lVar10 + 8;
      uVar9 = lVar10 + uVar9;
    }
LAB_10a1c03bc:
    func_0x00010a1bd9e8(lVar13 + 0xe0,&puStack_68);
    if (puStack_68[1] == lVar13) {
      puStack_68[1] = 0;
    }
    if ((((*(byte *)(lVar13 + 0x120) & 1) != 0) || ((*(byte *)(lVar13 + 0x121) & 1) != 0)) ||
       ((*(byte *)(lVar13 + 0x122) & 1) != 0)) {
      lVar10 = 0;
      puVar8 = (ulong *)(lVar13 + 0xc0);
      uVar11 = *puVar8;
      Hint_Prefetch(uVar11,0,2,0);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = puStack_68 + 0x2219159b;
      uVar9 = (SUB168(auVar4 * ZEXT816(0x9ddfea08eb382d69),8) ^
              (long)(puStack_68 + 0x2219159b) * -0x622015f714c7d297) + (long)puStack_68;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar9;
      uVar9 = SUB168(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar9 * -0x622015f714c7d297;
      bVar6 = (byte)uVar9;
      uVar17 = CONCAT15(bVar6,CONCAT14(bVar6,CONCAT13(bVar6,CONCAT12(bVar6,CONCAT11(bVar6,bVar6)))))
               & 0x7f7f7f7f7f7f;
      uVar9 = uVar9 >> 7 ^ uVar11 >> 0xc;
      while( true ) {
        uVar9 = uVar9 & *(ulong *)(lVar13 + 0xd0);
        uVar18 = *(undefined8 *)(uVar11 + uVar9);
        cVar19 = (char)((ulong)uVar18 >> 8);
        cVar20 = (char)((ulong)uVar18 >> 0x10);
        cVar21 = (char)((ulong)uVar18 >> 0x18);
        cVar22 = (char)((ulong)uVar18 >> 0x20);
        cVar23 = (char)((ulong)uVar18 >> 0x28);
        bVar24 = (byte)((ulong)uVar18 >> 0x30);
        bVar25 = (byte)((ulong)uVar18 >> 0x38);
        uVar15 = CONCAT17(-(bVar25 == (bVar6 & 0x7f)),
                          CONCAT16(-(bVar24 == (bVar6 & 0x7f)),
                                   CONCAT15(-(cVar23 == (char)(uVar17 >> 0x28)),
                                            CONCAT14(-(cVar22 == (char)(uVar17 >> 0x20)),
                                                     CONCAT13(-(cVar21 == (char)(uVar17 >> 0x18)),
                                                              CONCAT12(-(cVar20 ==
                                                                        (char)(uVar17 >> 0x10)),
                                                                       CONCAT11(-(cVar19 ==
                                                                                 (char)(uVar17 >> 8)
                                                                                 ),-((char)uVar18 ==
                                                                                    (char)uVar17))))
                                                    )))) & 0x8080808080808080;
        if (uVar15 != 0) {
          do {
            uVar16 = (uVar15 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar15 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
            if (*(undefined8 **)
                 (*(long *)(lVar13 + 200) +
                 (uVar9 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3) &
                 *(ulong *)(lVar13 + 0xd0)) * 8) == puStack_68) goto LAB_10a1c04b8;
            uVar15 = uVar15 - 1 & uVar15;
          } while (uVar15 != 0);
        }
        if (CONCAT17(-(bVar25 == 0x80),
                     CONCAT16(-(bVar24 == 0x80),
                              CONCAT15(-(cVar23 == -0x80),
                                       CONCAT14(-(cVar22 == -0x80),
                                                CONCAT13(-(cVar21 == -0x80),
                                                         CONCAT12(-(cVar20 == -0x80),
                                                                  CONCAT11(-(cVar19 == -0x80),
                                                                           -((char)uVar18 == -0x80))
                                                                 )))))) != 0) break;
        lVar10 = lVar10 + 8;
        uVar9 = lVar10 + uVar9;
      }
      FUN_10a1d1adc();
      *(undefined8 **)(*(long *)(lVar13 + 200) + (long)puVar8 * 8) = puStack_68;
    }
LAB_10a1c04b8:
    __ZNSt3__15mutex6unlockEv(lVar13);
  }
  if (param_1[9] != 0) {
    __ZdlPv(param_1[7] + -8);
  }
  if (param_1[5] != 0) {
    __ZdlPv(param_1[3] + -8);
  }
  return param_1;
}



/* Entry: 10ab2d50c; end: 10ab2d52b;  */

void FUN_10ab2d50c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c484b0;
  FUN_10a1c00f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab2d52c; end: 10ab2d58f;  */

undefined8 * FUN_10ab2d52c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110c48c38;
  param_1[2] = &PTR_DAT_110c48cd8;
  param_1[7] = &PTR_FUN_110c48d30;
  puVar1 = param_1 + 0x1c;
  *puVar1 = &PTR_FUN_110c48d50;
  FUN_10ab2b118(param_1 + 0x33);
  *puVar1 = &PTR_FUN_110c484d0;
  FUN_10a1c00f4(puVar1);
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10ab2d590; end: 10ab2d59f;  */

undefined8 * FUN_10ab2d590(undefined8 *param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  byte bVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  char *pcVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  uint6 uVar17;
  undefined8 uVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  byte bVar24;
  byte bVar25;
  undefined8 *puStack_68;
  
  *param_1 = &PTR_FUN_110c484d0;
  *param_1 = &PTR_FUN_110bacbc0;
  pcVar12 = (char *)param_1[3];
  plVar1 = (long *)param_1[4];
  cVar19 = *pcVar12;
  while (puVar7 = param_1, cVar19 < -1) {
    uVar18 = *(undefined8 *)pcVar12;
    uVar9 = CONCAT17(-(-2 < (char)((ulong)uVar18 >> 0x38)),
                     CONCAT16(-(-2 < (char)((ulong)uVar18 >> 0x30)),
                              CONCAT15(-(-2 < (char)((ulong)uVar18 >> 0x28)),
                                       CONCAT14(-(-2 < (char)((ulong)uVar18 >> 0x20)),
                                                CONCAT13(-(-2 < (char)((ulong)uVar18 >> 0x18)),
                                                         CONCAT12(-(-2 < (char)((ulong)uVar18 >>
                                                                               0x10)),
                                                                  CONCAT11(-(-2 < (char)((ulong)
                                                  uVar18 >> 8)),-(-2 < (char)uVar18))))))));
    uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20);
    pcVar12 = pcVar12 + (uVar9 >> 3);
    plVar1 = plVar1 + (uVar9 >> 3) * 2;
    cVar19 = *pcVar12;
  }
  while (cVar19 != -1) {
    plVar14 = plVar1 + 2;
    puVar7 = (undefined8 *)(*plVar1 + 0x10);
    puStack_68 = param_1;
    func_0x00010a1bd9e8(puVar7,&puStack_68);
    pcVar12 = pcVar12 + 1;
    cVar19 = *pcVar12;
    while (plVar1 = plVar14, cVar19 < -1) {
      uVar18 = *(undefined8 *)pcVar12;
      uVar9 = CONCAT17(-(-2 < (char)((ulong)uVar18 >> 0x38)),
                       CONCAT16(-(-2 < (char)((ulong)uVar18 >> 0x30)),
                                CONCAT15(-(-2 < (char)((ulong)uVar18 >> 0x28)),
                                         CONCAT14(-(-2 < (char)((ulong)uVar18 >> 0x20)),
                                                  CONCAT13(-(-2 < (char)((ulong)uVar18 >> 0x18)),
                                                           CONCAT12(-(-2 < (char)((ulong)uVar18 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-2 < (char)((ulong)
                                                  uVar18 >> 8)),-(-2 < (char)uVar18))))))));
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20);
      pcVar12 = pcVar12 + (uVar9 >> 3);
      plVar14 = plVar14 + (uVar9 >> 3) * 2;
      cVar19 = *pcVar12;
    }
  }
  pcVar12 = (char *)param_1[7];
  plVar1 = (long *)param_1[8];
  cVar19 = *pcVar12;
  while (cVar19 < -1) {
    uVar18 = *(undefined8 *)pcVar12;
    uVar9 = CONCAT17(-(-2 < (char)((ulong)uVar18 >> 0x38)),
                     CONCAT16(-(-2 < (char)((ulong)uVar18 >> 0x30)),
                              CONCAT15(-(-2 < (char)((ulong)uVar18 >> 0x28)),
                                       CONCAT14(-(-2 < (char)((ulong)uVar18 >> 0x20)),
                                                CONCAT13(-(-2 < (char)((ulong)uVar18 >> 0x18)),
                                                         CONCAT12(-(-2 < (char)((ulong)uVar18 >>
                                                                               0x10)),
                                                                  CONCAT11(-(-2 < (char)((ulong)
                                                  uVar18 >> 8)),-(-2 < (char)uVar18))))))));
    uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20);
    pcVar12 = pcVar12 + (uVar9 >> 3);
    plVar1 = plVar1 + (uVar9 >> 3) * 2;
    cVar19 = *pcVar12;
  }
  while (cVar19 != -1) {
    plVar14 = plVar1 + 2;
    puVar7 = (undefined8 *)(*plVar1 + 0x10);
    puStack_68 = param_1;
    func_0x00010a1bd9e8(puVar7,&puStack_68);
    pcVar12 = pcVar12 + 1;
    cVar19 = *pcVar12;
    while (plVar1 = plVar14, cVar19 < -1) {
      uVar18 = *(undefined8 *)pcVar12;
      uVar9 = CONCAT17(-(-2 < (char)((ulong)uVar18 >> 0x38)),
                       CONCAT16(-(-2 < (char)((ulong)uVar18 >> 0x30)),
                                CONCAT15(-(-2 < (char)((ulong)uVar18 >> 0x28)),
                                         CONCAT14(-(-2 < (char)((ulong)uVar18 >> 0x20)),
                                                  CONCAT13(-(-2 < (char)((ulong)uVar18 >> 0x18)),
                                                           CONCAT12(-(-2 < (char)((ulong)uVar18 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-2 < (char)((ulong)
                                                  uVar18 >> 8)),-(-2 < (char)uVar18))))))));
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20);
      pcVar12 = pcVar12 + (uVar9 >> 3);
      plVar14 = plVar14 + (uVar9 >> 3) * 2;
      cVar19 = *pcVar12;
    }
  }
  lVar13 = param_1[1];
  if (lVar13 != 0) {
    puStack_68 = param_1;
    FUN_10a1bd024();
    if (puVar7[8] == lVar13) {
      FUN_10a1bd024();
      func_0x00010a1bd968();
    }
    __ZNSt3__15mutex4lockEv(lVar13);
    func_0x00010a1bd968(lVar13 + 0x80,&puStack_68);
    lVar10 = lVar13 + 0x40;
    puVar7 = puStack_68;
    FUN_10a1bfb78(lVar10,puStack_68);
    if (lVar10 != 0) {
      FUN_10a1cc04c(puVar7);
      FUN_10ae6cb48(lVar13 + 0x40,lVar10,0x48);
    }
    lVar10 = 0;
    uVar15 = *(ulong *)(lVar13 + 0x60);
    Hint_Prefetch(uVar15,0,2,0);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = puStack_68 + 0x2219159b;
    uVar9 = (SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^
            (long)(puStack_68 + 0x2219159b) * -0x622015f714c7d297) + (long)puStack_68;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar9;
    uVar11 = SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar9 * -0x622015f714c7d297;
    uVar9 = uVar11 >> 7 ^ uVar15 >> 0xc;
    bVar6 = (byte)uVar11;
    uVar17 = CONCAT15(bVar6,CONCAT14(bVar6,CONCAT13(bVar6,CONCAT12(bVar6,CONCAT11(bVar6,bVar6))))) &
             0x7f7f7f7f7f7f;
    while( true ) {
      uVar9 = uVar9 & *(ulong *)(lVar13 + 0x70);
      uVar18 = *(undefined8 *)(uVar15 + uVar9);
      cVar19 = (char)((ulong)uVar18 >> 8);
      cVar20 = (char)((ulong)uVar18 >> 0x10);
      cVar21 = (char)((ulong)uVar18 >> 0x18);
      cVar22 = (char)((ulong)uVar18 >> 0x20);
      cVar23 = (char)((ulong)uVar18 >> 0x28);
      bVar24 = (byte)((ulong)uVar18 >> 0x30);
      bVar25 = (byte)((ulong)uVar18 >> 0x38);
      for (uVar11 = CONCAT17(-(bVar25 == (bVar6 & 0x7f)),
                             CONCAT16(-(bVar24 == (bVar6 & 0x7f)),
                                      CONCAT15(-(cVar23 == (char)(uVar17 >> 0x28)),
                                               CONCAT14(-(cVar22 == (char)(uVar17 >> 0x20)),
                                                        CONCAT13(-(cVar21 == (char)(uVar17 >> 0x18))
                                                                 ,CONCAT12(-(cVar20 ==
                                                                            (char)(uVar17 >> 0x10)),
                                                                           CONCAT11(-(cVar19 ==
                                                                                     (char)(uVar17 
                                                  >> 8)),-((char)uVar18 == (char)uVar17)))))))) &
                    0x8080808080808080; uVar11 != 0; uVar11 = uVar11 - 1 & uVar11) {
        uVar16 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
        uVar16 = uVar9 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3) &
                 *(ulong *)(lVar13 + 0x70);
        if (*(undefined8 **)(*(long *)(lVar13 + 0x68) + uVar16 * 0x48) == puStack_68) {
          if (uVar15 != 0) {
            FUN_10a1cbfa4();
            FUN_10ae6cb48((ulong *)(lVar13 + 0x60),uVar15 + uVar16,0x48);
          }
          goto LAB_10a1c03bc;
        }
      }
      if (CONCAT17(-(bVar25 == 0x80),
                   CONCAT16(-(bVar24 == 0x80),
                            CONCAT15(-(cVar23 == -0x80),
                                     CONCAT14(-(cVar22 == -0x80),
                                              CONCAT13(-(cVar21 == -0x80),
                                                       CONCAT12(-(cVar20 == -0x80),
                                                                CONCAT11(-(cVar19 == -0x80),
                                                                         -((char)uVar18 == -0x80))))
                                             )))) != 0) break;
      lVar10 = lVar10 + 8;
      uVar9 = lVar10 + uVar9;
    }
LAB_10a1c03bc:
    func_0x00010a1bd9e8(lVar13 + 0xe0,&puStack_68);
    if (puStack_68[1] == lVar13) {
      puStack_68[1] = 0;
    }
    if ((((*(byte *)(lVar13 + 0x120) & 1) != 0) || ((*(byte *)(lVar13 + 0x121) & 1) != 0)) ||
       ((*(byte *)(lVar13 + 0x122) & 1) != 0)) {
      lVar10 = 0;
      puVar8 = (ulong *)(lVar13 + 0xc0);
      uVar11 = *puVar8;
      Hint_Prefetch(uVar11,0,2,0);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = puStack_68 + 0x2219159b;
      uVar9 = (SUB168(auVar4 * ZEXT816(0x9ddfea08eb382d69),8) ^
              (long)(puStack_68 + 0x2219159b) * -0x622015f714c7d297) + (long)puStack_68;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar9;
      uVar9 = SUB168(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar9 * -0x622015f714c7d297;
      bVar6 = (byte)uVar9;
      uVar17 = CONCAT15(bVar6,CONCAT14(bVar6,CONCAT13(bVar6,CONCAT12(bVar6,CONCAT11(bVar6,bVar6)))))
               & 0x7f7f7f7f7f7f;
      uVar9 = uVar9 >> 7 ^ uVar11 >> 0xc;
      while( true ) {
        uVar9 = uVar9 & *(ulong *)(lVar13 + 0xd0);
        uVar18 = *(undefined8 *)(uVar11 + uVar9);
        cVar19 = (char)((ulong)uVar18 >> 8);
        cVar20 = (char)((ulong)uVar18 >> 0x10);
        cVar21 = (char)((ulong)uVar18 >> 0x18);
        cVar22 = (char)((ulong)uVar18 >> 0x20);
        cVar23 = (char)((ulong)uVar18 >> 0x28);
        bVar24 = (byte)((ulong)uVar18 >> 0x30);
        bVar25 = (byte)((ulong)uVar18 >> 0x38);
        uVar15 = CONCAT17(-(bVar25 == (bVar6 & 0x7f)),
                          CONCAT16(-(bVar24 == (bVar6 & 0x7f)),
                                   CONCAT15(-(cVar23 == (char)(uVar17 >> 0x28)),
                                            CONCAT14(-(cVar22 == (char)(uVar17 >> 0x20)),
                                                     CONCAT13(-(cVar21 == (char)(uVar17 >> 0x18)),
                                                              CONCAT12(-(cVar20 ==
                                                                        (char)(uVar17 >> 0x10)),
                                                                       CONCAT11(-(cVar19 ==
                                                                                 (char)(uVar17 >> 8)
                                                                                 ),-((char)uVar18 ==
                                                                                    (char)uVar17))))
                                                    )))) & 0x8080808080808080;
        if (uVar15 != 0) {
          do {
            uVar16 = (uVar15 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar15 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
            if (*(undefined8 **)
                 (*(long *)(lVar13 + 200) +
                 (uVar9 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3) &
                 *(ulong *)(lVar13 + 0xd0)) * 8) == puStack_68) goto LAB_10a1c04b8;
            uVar15 = uVar15 - 1 & uVar15;
          } while (uVar15 != 0);
        }
        if (CONCAT17(-(bVar25 == 0x80),
                     CONCAT16(-(bVar24 == 0x80),
                              CONCAT15(-(cVar23 == -0x80),
                                       CONCAT14(-(cVar22 == -0x80),
                                                CONCAT13(-(cVar21 == -0x80),
                                                         CONCAT12(-(cVar20 == -0x80),
                                                                  CONCAT11(-(cVar19 == -0x80),
                                                                           -((char)uVar18 == -0x80))
                                                                 )))))) != 0) break;
        lVar10 = lVar10 + 8;
        uVar9 = lVar10 + uVar9;
      }
      FUN_10a1d1adc();
      *(undefined8 **)(*(long *)(lVar13 + 200) + (long)puVar8 * 8) = puStack_68;
    }
LAB_10a1c04b8:
    __ZNSt3__15mutex6unlockEv(lVar13);
  }
  if (param_1[9] != 0) {
    __ZdlPv(param_1[7] + -8);
  }
  if (param_1[5] != 0) {
    __ZdlPv(param_1[3] + -8);
  }
  return param_1;
}



/* Entry: 10ab2d5a0; end: 10ab2d5bf;  */

void FUN_10ab2d5a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c484d0;
  FUN_10a1c00f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab2d5c0; end: 10ab2d63b;  */

undefined8 * FUN_10ab2d5c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xe0;
  __Znwm();
  FUN_10aa7093c();
  *puVar1 = &PTR_DAT_110c47d68;
  puVar1[2] = &PTR_DAT_110c47e08;
  puVar1[7] = &PTR_DAT_110c47e60;
  return puVar1;
}



/* Entry: 10ab2d63c; end: 10ab2d65f;  */

void FUN_10ab2d63c(void)

{
  return;
}



/* Entry: 10ab2d660; end: 10ab2d747;  */

void FUN_10ab2d660(undefined8 *param_1,undefined8 param_2,int param_3)

{
  code *pcVar1;
  int aiStack_20 [2];
  undefined8 *puStack_18;
  
  if (param_1[2] != param_1[3]) {
    aiStack_20[0] = 3;
    puStack_18 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,param_2,aiStack_20);
    if ((3 < aiStack_20[0]) && (puStack_18 != (undefined8 *)0x0)) {
      (**(code **)*puStack_18)();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ab2d6d4);
  (*pcVar1)();
}



/* Entry: 10ab2d748; end: 10ab2d777;  */

undefined8 * FUN_10ab2d748(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar5 = *(long *)(param_2 + 0x10);
  uVar8 = param_1[1];
  uVar7 = *param_1;
  if (param_1[1] != 0) {
    plVar6 = (long *)(param_1[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar6 = *(long **)(lVar5 + 0x48);
  *(undefined8 *)(lVar5 + 0x48) = uVar8;
  *(undefined8 *)(lVar5 + 0x40) = uVar7;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return (undefined8 *)(lVar5 + 0x40);
}



/* Entry: 10ab2d778; end: 10ab2d873;  */

undefined1  [16] FUN_10ab2d778(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c49030;
  puVar1 = &UNK_10f68ffe7;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c49030;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c4efc0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10ab2d874; end: 10ab2d8cb;  */

ulong FUN_10ab2d874(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a052828(param_1,*param_2,FUN_10ab2d8cc,FUN_10ab2d988);
  }
  return param_1;
}



/* Entry: 10ab2d8cc; end: 10ab2d987;  */

void FUN_10ab2d8cc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10ab2da60(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[0x1c];
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(int)lVar5;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10ab2d988; end: 10ab2da5f;  */

void FUN_10ab2d988(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  func_0x00010ab2dac8(param_2,param_3);
  FUN_10a076f00(param_5);
  func_0x000109898518(param_2,param_4);
  if (0x7f < (uint)param_2) {
    FUN_10a00946c(&UNK_10f652c32);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10ab2da4c);
    (*pcVar1)();
  }
  *(uint *)(plVar4 + 0x1c) = (uint)param_2;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10ab2da60; end: 10ab2db87;  */

undefined ** FUN_10ab2da60(undefined **param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = param_1;
  func_0x000109898688();
  if (ppuVar1 != (undefined **)0x0) {
    FUN_10a052c2c();
    param_2 = ppuVar1;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return param_1;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  ppuVar1 = (undefined **)&UNK_10f68f52e;
  func_0x00010988bd28();
  ppuVar2 = ppuVar1;
  func_0x000109898688();
  if (ppuVar2 != (undefined **)0x0) {
    FUN_10a053854();
    param_2 = ppuVar2;
    if (ppuVar1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      ___dynamic_cast();
      if (ppuVar1 != (undefined **)0x0) {
        return ppuVar1;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  ppuVar1 = (undefined **)&UNK_10f68f52e;
  func_0x00010988bd28();
  ppuVar2 = ppuVar1;
  FUN_10a0051e8();
  if (((ulong)ppuVar2 & 1) == 0) {
    FUN_10a052828(ppuVar1,*param_2,FUN_10ab2db88,FUN_10ab2dc40);
  }
  return ppuVar1;
}



/* Entry: 10ab2db88; end: 10ab2dc3f;  */

void FUN_10ab2db88(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10ab2da60(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a2008c4(param_1,param_2,plVar4 + 0x1d);
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10ab2dc40; end: 10ab2dd4b;  */

void FUN_10ab2dc40(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffb8;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  func_0x00010ab2dac8(param_2,param_3);
  FUN_10a200948(param_5);
  FUN_10a20096c(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10a1e1460(plVar6 + 0x1d,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffb8 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
    }
  }
  *param_1 = 0;
  plVar6 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar7 = lVar9 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar9 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar9 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          lStack_70 = lVar13;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10ab2dd4c; end: 10ab2de5f;  */

void FUN_10ab2dd4c(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f691b2f,0x17);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ab2de08);
  (*pcVar4)();
}



/* Entry: 10ab2de60; end: 10ab2e00b;  */

void FUN_10ab2de60(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 in_stack_ffffffffffffffa0;
  long in_stack_ffffffffffffffb0;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = param_2;
  FUN_10ab2e00c(param_2,param_3);
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffffa0,param_2,param_4);
  FUN_10ab197d4(&lStack_70,plVar7,&stack0xffffffffffffffa0);
  if (in_stack_ffffffffffffffb0 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa0);
  }
  plVar7 = plStack_68;
  lStack_70 = 0;
  plStack_68 = (long *)0x0;
  func_0x000109899de4(param_1,param_2,&stack0xffffffffffffffa0,&stack0xffffffffffffffb8,0,0);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar10 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
    do {
      lVar10 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = plVar6 + 0x4b;
  lVar10 = plVar6[0x59];
  uVar8 = lVar10 - 1;
  plVar6[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar7[lVar10 + 2];
    if (plVar6[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar8) {
      return;
    }
  }
  lVar10 = *plVar7;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar10;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar8) {
    uVar16 = uVar8 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar14 - lVar10 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar10)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar10,lVar11);
          *plVar7 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar5 + uVar9 * 0x10;
          lStack_88 = lVar10;
          lStack_80 = lVar10;
          lStack_78 = lVar10;
          lStack_70 = lVar14;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar4)();
    }
    _bzero(lVar13,uVar16 * 0x10);
    plVar6[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar8 < uVar15) {
    lVar10 = lVar10 + uVar8 * 0x10;
    while (lVar13 != lVar10) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar10;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar8;
  return;
}



/* Entry: 10ab2e00c; end: 10ab2e073;  */

void FUN_10ab2e00c(undefined **param_1,undefined **param_2,undefined **param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined **ppuVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  undefined4 *extraout_x8;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lStack_c8;
  long lStack_c0;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar7 = param_1;
  func_0x000109898688();
  if (ppuVar7 != (undefined **)0x0) {
    FUN_10a053854(param_1,ppuVar7);
    param_2 = ppuVar7;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_3 = &PTR_DAT_110c48e80;
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar8 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar9 = plVar8;
  (**(code **)(*plVar8 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  plVar10 = plVar8;
  FUN_10ab2e00c(plVar8,param_2);
  FUN_10a0584c8(param_4);
  func_0x000109898570(&plStack_b0,plVar8,param_3);
  FUN_10ab196c4(plVar10);
  FUN_10a9df3e0(&lStack_c8,*(undefined8 *)(plVar10[10] + 0xa90),&plStack_b0,plVar10);
  if (uStack_a0._7_1_ < '\0') {
    __ZdlPv(plStack_b0);
  }
  lVar14 = lStack_c0 - lStack_c8 >> 4;
  (**(code **)(*plVar8 + 600))(&plStack_b0,plVar8,lVar14);
  plVar10 = plStack_b0;
  if (lStack_c0 != lStack_c8) {
    lVar17 = 0;
    do {
      puVar2 = (undefined8 *)(lStack_c8 + lVar17 * 0x10);
      plStack_a8 = (long *)puVar2[1];
      plStack_b0 = (long *)*puVar2;
      if (puVar2[1] != 0) {
        plVar16 = (long *)(puVar2[1] + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *plVar16 = *plVar16 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      func_0x000109899de4(&lStack_90,plVar8,&plStack_b0,&stack0xffffffffffffff88,0,0);
      plVar16 = plStack_a8;
      if (plStack_a8 != (long *)0x0) {
        plVar1 = plStack_a8 + 1;
        do {
          lVar13 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
        }
      }
      (**(code **)(*plVar8 + 0x290))(plVar8,&stack0xffffffffffffff80,lVar17,&lStack_90);
      if ((3 < (int)lStack_90) && (plStack_88 != (long *)0x0)) {
        (**(code **)*plStack_88)();
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 != lVar14);
  }
  *extraout_x8 = 7;
  *(long **)(extraout_x8 + 2) = plVar10;
  plStack_b0 = &lStack_c8;
  FUN_10a9f9204(&plStack_b0);
  plVar8 = plVar9 + 0x4b;
  lVar14 = plVar9[0x59];
  uVar11 = lVar14 - 1;
  plVar9[0x59] = uVar11;
  if (uVar11 < 8) {
    uVar11 = plVar8[lVar14 + 2];
    if (plVar9[0x5a] == uVar11) {
      return;
    }
  }
  else {
    uVar11 = *(ulong *)(plVar9[0x57] + -8);
    plVar9[0x57] = plVar9[0x57] + -8;
    if (plVar9[0x5a] == uVar11) {
      return;
    }
  }
  plVar10 = (long *)*plVar8;
  plVar16 = (long *)plVar9[0x4c];
  lVar14 = (long)plVar16 - (long)plVar10;
  uVar18 = lVar14 >> 4;
  if (uVar18 < uVar11) {
    uVar19 = uVar11 - uVar18;
    lVar17 = plVar9[0x4d];
    if ((ulong)(lVar17 - (long)plVar16 >> 4) < uVar19) {
      if (uVar11 >> 0x3c == 0) {
        uVar12 = lVar17 - (long)plVar10 >> 3;
        if (uVar12 <= uVar11) {
          uVar12 = uVar11;
        }
        if (0x7fffffffffffffef < (ulong)(lVar17 - (long)plVar10)) {
          uVar12 = 0xfffffffffffffff;
        }
        plStack_88 = plVar8;
        if (uVar12 >> 0x3c == 0) {
          lVar6 = uVar12 << 4;
          __Znwm();
          lVar13 = lVar6 + lVar14;
          _bzero(lVar13,uVar19 * 0x10);
          lVar15 = lVar13 + uVar18 * -0x10;
          _memcpy(lVar15,plVar10,lVar14);
          *plVar8 = lVar15;
          plVar9[0x4c] = lVar13 + uVar19 * 0x10;
          plVar9[0x4d] = lVar6 + uVar12 * 0x10;
          plStack_a8 = plVar10;
          uStack_a0 = plVar10;
          plStack_98 = plVar10;
          lStack_90 = lVar17;
          func_0x00010988c1b8(&plStack_a8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar5)();
    }
    _bzero(plVar16,uVar19 * 0x10);
    plVar9[0x4c] = (long)(plVar16 + uVar19 * 2);
  }
  else if (uVar11 < uVar18) {
    while (plVar16 != plVar10 + uVar11 * 2) {
      plVar16 = plVar16 + -2;
      func_0x00010988c204(plVar16);
    }
    plVar9[0x4c] = (long)(plVar10 + uVar11 * 2);
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar11;
  return;
}


