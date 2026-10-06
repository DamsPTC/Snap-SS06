/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a69ad78; end: 10a69ad7f;  */

void FUN_10a69ad78(long param_1)

{
  *(undefined1 *)(param_1 + 0x2c) = 0;
  return;
}



/* Entry: 10a69ad80; end: 10a69addf;  */

undefined8 * FUN_10a69ad80(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a69ade0; end: 10a69ade3;  */

undefined8 * FUN_10a69ade0(undefined8 *param_1)

{
  param_1[0x61] = &PTR_FUN_110bd3170;
  if ((undefined8 *)param_1[100] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[100] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x62);
  *param_1 = &PTR_DAT_110c0b3c8;
  param_1[2] = &PTR_FUN_110c0f860;
  param_1[7] = &PTR_DAT_110c0f8b8;
  param_1[0x13] = &PTR_FUN_110c0b488;
  param_1[0x66] = &PTR_FUN_110c0b500;
  FUN_10a58e034(param_1 + 0x1c);
  FUN_10a3a75a8(param_1 + 0x18);
  param_1[0x13] = &PTR_DAT_110c0b550;
  param_1[0x66] = &PTR_FUN_110c0b5c8;
  func_0x00010a004e5c(param_1 + 0x16);
  func_0x00010a004e04(param_1 + 0x14);
  *param_1 = &PTR_DAT_110bf4248;
  param_1[2] = &PTR_DAT_110bf42e0;
  param_1[7] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    FUN_10a688c1c(param_1 + 0xd);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a69ade4; end: 10a69adf7;  */

void FUN_10a69ade4(void)

{
  func_0x00010a69c630();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69adf8; end: 10a69ae1f;  */

void FUN_10a69adf8(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  FUN_10a5ae930(*(undefined8 *)(param_1 + 0x310));
  plVar3 = *(long **)(param_1 + 0xb0);
  if (*(char *)((long)plVar3 + 0x3c) == '\x01') {
    FUN_10a3cf620(plVar3[6],(int)plVar3[7],plVar3);
    *(undefined4 *)(plVar3 + 7) = 0;
  }
  else {
    if (*(char *)((long)plVar3 + 0x3c) != '\x02') {
      return;
    }
    lVar1 = *plVar3;
    plVar2 = (long *)plVar3[1];
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
  }
  *(undefined1 *)((long)plVar3 + 0x3c) = 0;
  return;
}



/* Entry: 10a69ae20; end: 10a69ae2f;  */

void FUN_10a69ae20(long param_1)

{
  *(undefined4 *)(param_1 + 0x328) = 0;
  return;
}



/* Entry: 10a69ae30; end: 10a69ae47;  */

void FUN_10a69ae30(long param_1)

{
  func_0x00010a69c630(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69ae48; end: 10a69ae4f;  */

undefined8 * FUN_10a69ae48(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -7;
  param_1[0x5a] = &PTR_FUN_110bd3170;
  if ((undefined8 *)param_1[0x5d] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x5d] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x5b);
  *puVar1 = &PTR_DAT_110c0b3c8;
  param_1[-5] = &PTR_FUN_110c0f860;
  *param_1 = &PTR_DAT_110c0f8b8;
  param_1[0xc] = &PTR_FUN_110c0b488;
  param_1[0x5f] = &PTR_FUN_110c0b500;
  FUN_10a58e034(param_1 + 0x15);
  FUN_10a3a75a8(param_1 + 0x11);
  param_1[0xc] = &PTR_DAT_110c0b550;
  param_1[0x5f] = &PTR_FUN_110c0b5c8;
  func_0x00010a004e5c(param_1 + 0xf);
  func_0x00010a004e04(param_1 + 0xd);
  *puVar1 = &PTR_DAT_110bf4248;
  param_1[-5] = &PTR_DAT_110bf42e0;
  *param_1 = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 10) == '\x01') {
    FUN_10a688c1c(param_1 + 6);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return puVar1;
}



/* Entry: 10a69ae50; end: 10a69ae67;  */

void FUN_10a69ae50(long param_1)

{
  func_0x00010a69c630(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69ae68; end: 10a69ae6f;  */

undefined8 * FUN_10a69ae68(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x13;
  param_1[0x4e] = &PTR_FUN_110bd3170;
  if ((undefined8 *)param_1[0x51] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x51] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x4f);
  *puVar1 = &PTR_DAT_110c0b3c8;
  param_1[-0x11] = &PTR_FUN_110c0f860;
  param_1[-0xc] = &PTR_DAT_110c0f8b8;
  *param_1 = &PTR_FUN_110c0b488;
  param_1[0x53] = &PTR_FUN_110c0b500;
  FUN_10a58e034(param_1 + 9);
  FUN_10a3a75a8(param_1 + 5);
  *param_1 = &PTR_DAT_110c0b550;
  param_1[0x53] = &PTR_FUN_110c0b5c8;
  func_0x00010a004e5c(param_1 + 3);
  func_0x00010a004e04(param_1 + 1);
  *puVar1 = &PTR_DAT_110bf4248;
  param_1[-0x11] = &PTR_DAT_110bf42e0;
  param_1[-0xc] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + -2) == '\x01') {
    FUN_10a688c1c(param_1 + -6);
  }
  if (param_1[-0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x11] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x10);
  return puVar1;
}



/* Entry: 10a69ae70; end: 10a69ae87;  */

void FUN_10a69ae70(long param_1)

{
  func_0x00010a69c630(param_1 + -0x98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69ae88; end: 10a69ae8f;  */

undefined8 * FUN_10a69ae88(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x61;
  *param_1 = &PTR_FUN_110bd3170;
  if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[3] = 0;
  }
  func_0x00010a004e5c(param_1 + 1);
  *puVar1 = &PTR_DAT_110c0b3c8;
  param_1[-0x5f] = &PTR_FUN_110c0f860;
  param_1[-0x5a] = &PTR_DAT_110c0f8b8;
  param_1[-0x4e] = &PTR_FUN_110c0b488;
  param_1[5] = &PTR_FUN_110c0b500;
  FUN_10a58e034(param_1 + -0x45);
  FUN_10a3a75a8(param_1 + -0x49);
  param_1[-0x4e] = &PTR_DAT_110c0b550;
  param_1[5] = &PTR_FUN_110c0b5c8;
  func_0x00010a004e5c(param_1 + -0x4b);
  func_0x00010a004e04(param_1 + -0x4d);
  *puVar1 = &PTR_DAT_110bf4248;
  param_1[-0x5f] = &PTR_DAT_110bf42e0;
  param_1[-0x5a] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + -0x50) == '\x01') {
    FUN_10a688c1c(param_1 + -0x54);
  }
  if (param_1[-0x5b] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x5f] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x5e);
  return puVar1;
}



/* Entry: 10a69ae90; end: 10a69aea7;  */

void FUN_10a69ae90(long param_1)

{
  func_0x00010a69c630(param_1 + -0x308);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69aea8; end: 10a69aeb7;  */

undefined8 * FUN_10a69aea8(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  puVar1[0x61] = &PTR_FUN_110bd3170;
  if ((undefined8 *)puVar1[100] != (undefined8 *)0x0) {
    *(undefined8 *)puVar1[100] = 0;
  }
  func_0x00010a004e5c(puVar1 + 0x62);
  *puVar1 = &PTR_DAT_110c0b3c8;
  puVar1[2] = &PTR_FUN_110c0f860;
  puVar1[7] = &PTR_DAT_110c0f8b8;
  puVar1[0x13] = &PTR_FUN_110c0b488;
  puVar1[0x66] = &PTR_FUN_110c0b500;
  FUN_10a58e034(puVar1 + 0x1c);
  FUN_10a3a75a8(puVar1 + 0x18);
  puVar1[0x13] = &PTR_DAT_110c0b550;
  puVar1[0x66] = &PTR_FUN_110c0b5c8;
  func_0x00010a004e5c(puVar1 + 0x16);
  func_0x00010a004e04(puVar1 + 0x14);
  *puVar1 = &PTR_DAT_110bf4248;
  puVar1[2] = &PTR_DAT_110bf42e0;
  puVar1[7] = &PTR_DAT_110bf4338;
  if (*(char *)(puVar1 + 0x11) == '\x01') {
    FUN_10a688c1c(puVar1 + 0xd);
  }
  if (puVar1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puVar1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(puVar1 + 3);
  return puVar1;
}



/* Entry: 10a69aeb8; end: 10a69aee7;  */

void FUN_10a69aeb8(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  func_0x00010a69c630((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a69aee8; end: 10a69aeeb;  */

undefined8 * FUN_10a69aee8(undefined8 *param_1)

{
  param_1[0x61] = &PTR_FUN_110bd3170;
  if ((undefined8 *)param_1[100] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[100] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x62);
  *param_1 = &PTR_DAT_110c0b650;
  param_1[2] = &PTR_FUN_110c0f860;
  param_1[7] = &PTR_DAT_110c0f8b8;
  param_1[0x13] = &PTR_FUN_110c0b710;
  param_1[0x66] = &PTR_FUN_110c0b788;
  FUN_10a58e034(param_1 + 0x1c);
  FUN_10a3a75a8(param_1 + 0x18);
  param_1[0x13] = &PTR_DAT_110c0b7d8;
  param_1[0x66] = &PTR_FUN_110c0b850;
  func_0x00010a004e5c(param_1 + 0x16);
  func_0x00010a004e04(param_1 + 0x14);
  *param_1 = &PTR_DAT_110bf4248;
  param_1[2] = &PTR_DAT_110bf42e0;
  param_1[7] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    FUN_10a688c1c(param_1 + 0xd);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a69aeec; end: 10a69aeff;  */

void FUN_10a69aeec(void)

{
  func_0x00010a69c6d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69af00; end: 10a69af27;  */

void FUN_10a69af00(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  FUN_10a5ae930(*(undefined8 *)(param_1 + 0x310));
  plVar3 = *(long **)(param_1 + 0xb0);
  if (*(char *)((long)plVar3 + 0x3c) == '\x01') {
    FUN_10a3cf620(plVar3[6],(int)plVar3[7],plVar3);
    *(undefined4 *)(plVar3 + 7) = 0;
  }
  else {
    if (*(char *)((long)plVar3 + 0x3c) != '\x02') {
      return;
    }
    lVar1 = *plVar3;
    plVar2 = (long *)plVar3[1];
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
  }
  *(undefined1 *)((long)plVar3 + 0x3c) = 0;
  return;
}



/* Entry: 10a69af28; end: 10a69af33;  */

void FUN_10a69af28(void)

{
  return;
}



/* Entry: 10a69af34; end: 10a69af4b;  */

void FUN_10a69af34(long param_1)

{
  func_0x00010a69c6d4(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69af4c; end: 10a69af53;  */

undefined8 * FUN_10a69af4c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -7;
  param_1[0x5a] = &PTR_FUN_110bd3170;
  if ((undefined8 *)param_1[0x5d] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x5d] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x5b);
  *puVar1 = &PTR_DAT_110c0b650;
  param_1[-5] = &PTR_FUN_110c0f860;
  *param_1 = &PTR_DAT_110c0f8b8;
  param_1[0xc] = &PTR_FUN_110c0b710;
  param_1[0x5f] = &PTR_FUN_110c0b788;
  FUN_10a58e034(param_1 + 0x15);
  FUN_10a3a75a8(param_1 + 0x11);
  param_1[0xc] = &PTR_DAT_110c0b7d8;
  param_1[0x5f] = &PTR_FUN_110c0b850;
  func_0x00010a004e5c(param_1 + 0xf);
  func_0x00010a004e04(param_1 + 0xd);
  *puVar1 = &PTR_DAT_110bf4248;
  param_1[-5] = &PTR_DAT_110bf42e0;
  *param_1 = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 10) == '\x01') {
    FUN_10a688c1c(param_1 + 6);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return puVar1;
}



/* Entry: 10a69af54; end: 10a69af6b;  */

void FUN_10a69af54(long param_1)

{
  func_0x00010a69c6d4(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69af6c; end: 10a69af73;  */

undefined8 * FUN_10a69af6c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x13;
  param_1[0x4e] = &PTR_FUN_110bd3170;
  if ((undefined8 *)param_1[0x51] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x51] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x4f);
  *puVar1 = &PTR_DAT_110c0b650;
  param_1[-0x11] = &PTR_FUN_110c0f860;
  param_1[-0xc] = &PTR_DAT_110c0f8b8;
  *param_1 = &PTR_FUN_110c0b710;
  param_1[0x53] = &PTR_FUN_110c0b788;
  FUN_10a58e034(param_1 + 9);
  FUN_10a3a75a8(param_1 + 5);
  *param_1 = &PTR_DAT_110c0b7d8;
  param_1[0x53] = &PTR_FUN_110c0b850;
  func_0x00010a004e5c(param_1 + 3);
  func_0x00010a004e04(param_1 + 1);
  *puVar1 = &PTR_DAT_110bf4248;
  param_1[-0x11] = &PTR_DAT_110bf42e0;
  param_1[-0xc] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + -2) == '\x01') {
    FUN_10a688c1c(param_1 + -6);
  }
  if (param_1[-0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x11] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x10);
  return puVar1;
}



/* Entry: 10a69af74; end: 10a69af8b;  */

void FUN_10a69af74(long param_1)

{
  func_0x00010a69c6d4(param_1 + -0x98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69af8c; end: 10a69af93;  */

undefined8 * FUN_10a69af8c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x61;
  *param_1 = &PTR_FUN_110bd3170;
  if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[3] = 0;
  }
  func_0x00010a004e5c(param_1 + 1);
  *puVar1 = &PTR_DAT_110c0b650;
  param_1[-0x5f] = &PTR_FUN_110c0f860;
  param_1[-0x5a] = &PTR_DAT_110c0f8b8;
  param_1[-0x4e] = &PTR_FUN_110c0b710;
  param_1[5] = &PTR_FUN_110c0b788;
  FUN_10a58e034(param_1 + -0x45);
  FUN_10a3a75a8(param_1 + -0x49);
  param_1[-0x4e] = &PTR_DAT_110c0b7d8;
  param_1[5] = &PTR_FUN_110c0b850;
  func_0x00010a004e5c(param_1 + -0x4b);
  func_0x00010a004e04(param_1 + -0x4d);
  *puVar1 = &PTR_DAT_110bf4248;
  param_1[-0x5f] = &PTR_DAT_110bf42e0;
  param_1[-0x5a] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + -0x50) == '\x01') {
    FUN_10a688c1c(param_1 + -0x54);
  }
  if (param_1[-0x5b] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x5f] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x5e);
  return puVar1;
}



/* Entry: 10a69af94; end: 10a69afab;  */

void FUN_10a69af94(long param_1)

{
  func_0x00010a69c6d4(param_1 + -0x308);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69afac; end: 10a69afbb;  */

undefined8 * FUN_10a69afac(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  puVar1[0x61] = &PTR_FUN_110bd3170;
  if ((undefined8 *)puVar1[100] != (undefined8 *)0x0) {
    *(undefined8 *)puVar1[100] = 0;
  }
  func_0x00010a004e5c(puVar1 + 0x62);
  *puVar1 = &PTR_DAT_110c0b650;
  puVar1[2] = &PTR_FUN_110c0f860;
  puVar1[7] = &PTR_DAT_110c0f8b8;
  puVar1[0x13] = &PTR_FUN_110c0b710;
  puVar1[0x66] = &PTR_FUN_110c0b788;
  FUN_10a58e034(puVar1 + 0x1c);
  FUN_10a3a75a8(puVar1 + 0x18);
  puVar1[0x13] = &PTR_DAT_110c0b7d8;
  puVar1[0x66] = &PTR_FUN_110c0b850;
  func_0x00010a004e5c(puVar1 + 0x16);
  func_0x00010a004e04(puVar1 + 0x14);
  *puVar1 = &PTR_DAT_110bf4248;
  puVar1[2] = &PTR_DAT_110bf42e0;
  puVar1[7] = &PTR_DAT_110bf4338;
  if (*(char *)(puVar1 + 0x11) == '\x01') {
    FUN_10a688c1c(puVar1 + 0xd);
  }
  if (puVar1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puVar1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(puVar1 + 3);
  return puVar1;
}



/* Entry: 10a69afbc; end: 10a69afeb;  */

void FUN_10a69afbc(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  func_0x00010a69c6d4((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a69afec; end: 10a69afef;  */

undefined8 * FUN_10a69afec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c0e760;
  param_1[2] = &PTR_FUN_110c0e7f8;
  param_1[7] = &PTR_FUN_110c0e850;
  if (param_1[0x16] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_FUN_110bf6870;
  param_1[2] = &PTR_DAT_110bf6908;
  param_1[7] = &PTR_DAT_110bf6960;
  if (param_1[0x14] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110bf4248;
  param_1[2] = &PTR_DAT_110bf42e0;
  param_1[7] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    FUN_10a688c1c(param_1 + 0xd);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a69aff0; end: 10a69b003;  */

void FUN_10a69aff0(void)

{
  func_0x00010a69c778();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69b004; end: 10a69b00b;  */

undefined8 * FUN_10a69b004(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -2;
  *puVar1 = &PTR_FUN_110c0e760;
  *param_1 = &PTR_FUN_110c0e7f8;
  param_1[5] = &PTR_FUN_110c0e850;
  if (param_1[0x14] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar1 = &PTR_FUN_110bf6870;
  *param_1 = &PTR_DAT_110bf6908;
  param_1[5] = &PTR_DAT_110bf6960;
  if (param_1[0x12] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar1 = &PTR_DAT_110bf4248;
  *param_1 = &PTR_DAT_110bf42e0;
  param_1[5] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0xf) == '\x01') {
    FUN_10a688c1c(param_1 + 0xb);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return puVar1;
}



/* Entry: 10a69b00c; end: 10a69b023;  */

void FUN_10a69b00c(long param_1)

{
  func_0x00010a69c778(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69b024; end: 10a69b02b;  */

undefined8 * FUN_10a69b024(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -7;
  *puVar1 = &PTR_FUN_110c0e760;
  param_1[-5] = &PTR_FUN_110c0e7f8;
  *param_1 = &PTR_FUN_110c0e850;
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar1 = &PTR_FUN_110bf6870;
  param_1[-5] = &PTR_DAT_110bf6908;
  *param_1 = &PTR_DAT_110bf6960;
  if (param_1[0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar1 = &PTR_DAT_110bf4248;
  param_1[-5] = &PTR_DAT_110bf42e0;
  *param_1 = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 10) == '\x01') {
    FUN_10a688c1c(param_1 + 6);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return puVar1;
}



/* Entry: 10a69b02c; end: 10a69b043;  */

void FUN_10a69b02c(long param_1)

{
  func_0x00010a69c778(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69b044; end: 10a69b047;  */

undefined8 * FUN_10a69b044(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c0e100;
  param_1[2] = &PTR_FUN_110c0e198;
  param_1[7] = &PTR_FUN_110c0e1f0;
  if (param_1[0x16] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_FUN_110bf6870;
  param_1[2] = &PTR_DAT_110bf6908;
  param_1[7] = &PTR_DAT_110bf6960;
  if (param_1[0x14] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110bf4248;
  param_1[2] = &PTR_DAT_110bf42e0;
  param_1[7] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    FUN_10a688c1c(param_1 + 0xd);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a69b048; end: 10a69b05b;  */

void FUN_10a69b048(void)

{
  func_0x00010a69c7e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69b05c; end: 10a69b063;  */

undefined8 * FUN_10a69b05c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -2;
  *puVar1 = &PTR_FUN_110c0e100;
  *param_1 = &PTR_FUN_110c0e198;
  param_1[5] = &PTR_FUN_110c0e1f0;
  if (param_1[0x14] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar1 = &PTR_FUN_110bf6870;
  *param_1 = &PTR_DAT_110bf6908;
  param_1[5] = &PTR_DAT_110bf6960;
  if (param_1[0x12] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar1 = &PTR_DAT_110bf4248;
  *param_1 = &PTR_DAT_110bf42e0;
  param_1[5] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0xf) == '\x01') {
    FUN_10a688c1c(param_1 + 0xb);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return puVar1;
}



/* Entry: 10a69b064; end: 10a69b07b;  */

void FUN_10a69b064(long param_1)

{
  func_0x00010a69c7e8(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69b07c; end: 10a69b083;  */

undefined8 * FUN_10a69b07c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -7;
  *puVar1 = &PTR_FUN_110c0e100;
  param_1[-5] = &PTR_FUN_110c0e198;
  *param_1 = &PTR_FUN_110c0e1f0;
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar1 = &PTR_FUN_110bf6870;
  param_1[-5] = &PTR_DAT_110bf6908;
  *param_1 = &PTR_DAT_110bf6960;
  if (param_1[0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar1 = &PTR_DAT_110bf4248;
  param_1[-5] = &PTR_DAT_110bf42e0;
  *param_1 = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 10) == '\x01') {
    FUN_10a688c1c(param_1 + 6);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return puVar1;
}



/* Entry: 10a69b084; end: 10a69b09b;  */

void FUN_10a69b084(long param_1)

{
  func_0x00010a69c7e8(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69b09c; end: 10a69b09f;  */

undefined8 * FUN_10a69b09c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c0e430;
  param_1[2] = &PTR_FUN_110c0e4c8;
  param_1[7] = &PTR_FUN_110c0e520;
  if (param_1[0x16] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_FUN_110bf6870;
  param_1[2] = &PTR_DAT_110bf6908;
  param_1[7] = &PTR_DAT_110bf6960;
  if (param_1[0x14] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110bf4248;
  param_1[2] = &PTR_DAT_110bf42e0;
  param_1[7] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    FUN_10a688c1c(param_1 + 0xd);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a69b0a0; end: 10a69b0b3;  */

void FUN_10a69b0a0(void)

{
  func_0x00010a69c858();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69b0b4; end: 10a69b0bb;  */

undefined8 * FUN_10a69b0b4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -2;
  *puVar1 = &PTR_FUN_110c0e430;
  *param_1 = &PTR_FUN_110c0e4c8;
  param_1[5] = &PTR_FUN_110c0e520;
  if (param_1[0x14] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar1 = &PTR_FUN_110bf6870;
  *param_1 = &PTR_DAT_110bf6908;
  param_1[5] = &PTR_DAT_110bf6960;
  if (param_1[0x12] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar1 = &PTR_DAT_110bf4248;
  *param_1 = &PTR_DAT_110bf42e0;
  param_1[5] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0xf) == '\x01') {
    FUN_10a688c1c(param_1 + 0xb);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return puVar1;
}



/* Entry: 10a69b0bc; end: 10a69b0d3;  */

void FUN_10a69b0bc(long param_1)

{
  func_0x00010a69c858(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69b0d4; end: 10a69b0db;  */

undefined8 * FUN_10a69b0d4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -7;
  *puVar1 = &PTR_FUN_110c0e430;
  param_1[-5] = &PTR_FUN_110c0e4c8;
  *param_1 = &PTR_FUN_110c0e520;
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar1 = &PTR_FUN_110bf6870;
  param_1[-5] = &PTR_DAT_110bf6908;
  *param_1 = &PTR_DAT_110bf6960;
  if (param_1[0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar1 = &PTR_DAT_110bf4248;
  param_1[-5] = &PTR_DAT_110bf42e0;
  *param_1 = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 10) == '\x01') {
    FUN_10a688c1c(param_1 + 6);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return puVar1;
}



/* Entry: 10a69b0dc; end: 10a69b0f3;  */

void FUN_10a69b0dc(long param_1)

{
  func_0x00010a69c858(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69b0f4; end: 10a69b0f7;  */

undefined8 * FUN_10a69b0f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c0e540;
  param_1[2] = &PTR_FUN_110c0e5d8;
  param_1[7] = &PTR_FUN_110c0e630;
  if (param_1[0x16] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_FUN_110bf6870;
  param_1[2] = &PTR_DAT_110bf6908;
  param_1[7] = &PTR_DAT_110bf6960;
  if (param_1[0x14] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110bf4248;
  param_1[2] = &PTR_DAT_110bf42e0;
  param_1[7] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    FUN_10a688c1c(param_1 + 0xd);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a69b0f8; end: 10a69b10b;  */

void FUN_10a69b0f8(void)

{
  func_0x00010a69c8c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69b10c; end: 10a69b113;  */

undefined8 * FUN_10a69b10c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -2;
  *puVar1 = &PTR_FUN_110c0e540;
  *param_1 = &PTR_FUN_110c0e5d8;
  param_1[5] = &PTR_FUN_110c0e630;
  if (param_1[0x14] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar1 = &PTR_FUN_110bf6870;
  *param_1 = &PTR_DAT_110bf6908;
  param_1[5] = &PTR_DAT_110bf6960;
  if (param_1[0x12] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar1 = &PTR_DAT_110bf4248;
  *param_1 = &PTR_DAT_110bf42e0;
  param_1[5] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0xf) == '\x01') {
    FUN_10a688c1c(param_1 + 0xb);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return puVar1;
}



/* Entry: 10a69b114; end: 10a69b12b;  */

void FUN_10a69b114(long param_1)

{
  func_0x00010a69c8c8(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69b12c; end: 10a69b133;  */

undefined8 * FUN_10a69b12c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -7;
  *puVar1 = &PTR_FUN_110c0e540;
  param_1[-5] = &PTR_FUN_110c0e5d8;
  *param_1 = &PTR_FUN_110c0e630;
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar1 = &PTR_FUN_110bf6870;
  param_1[-5] = &PTR_DAT_110bf6908;
  *param_1 = &PTR_DAT_110bf6960;
  if (param_1[0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar1 = &PTR_DAT_110bf4248;
  param_1[-5] = &PTR_DAT_110bf42e0;
  *param_1 = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 10) == '\x01') {
    FUN_10a688c1c(param_1 + 6);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return puVar1;
}



/* Entry: 10a69b134; end: 10a69b14b;  */

void FUN_10a69b134(long param_1)

{
  func_0x00010a69c8c8(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69b14c; end: 10a69b14f;  */

undefined8 * FUN_10a69b14c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c0e650;
  param_1[2] = &PTR_FUN_110c0e6e8;
  param_1[7] = &PTR_FUN_110c0e740;
  if (param_1[0x16] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_FUN_110bf6870;
  param_1[2] = &PTR_DAT_110bf6908;
  param_1[7] = &PTR_DAT_110bf6960;
  if (param_1[0x14] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110bf4248;
  param_1[2] = &PTR_DAT_110bf42e0;
  param_1[7] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    FUN_10a688c1c(param_1 + 0xd);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a69b150; end: 10a69b163;  */

void FUN_10a69b150(void)

{
  func_0x00010a69c938();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69b164; end: 10a69b16b;  */

undefined8 * FUN_10a69b164(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -2;
  *puVar1 = &PTR_FUN_110c0e650;
  *param_1 = &PTR_FUN_110c0e6e8;
  param_1[5] = &PTR_FUN_110c0e740;
  if (param_1[0x14] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar1 = &PTR_FUN_110bf6870;
  *param_1 = &PTR_DAT_110bf6908;
  param_1[5] = &PTR_DAT_110bf6960;
  if (param_1[0x12] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar1 = &PTR_DAT_110bf4248;
  *param_1 = &PTR_DAT_110bf42e0;
  param_1[5] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0xf) == '\x01') {
    FUN_10a688c1c(param_1 + 0xb);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return puVar1;
}



/* Entry: 10a69b16c; end: 10a69b183;  */

void FUN_10a69b16c(long param_1)

{
  func_0x00010a69c938(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69b184; end: 10a69b18b;  */

undefined8 * FUN_10a69b184(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -7;
  *puVar1 = &PTR_FUN_110c0e650;
  param_1[-5] = &PTR_FUN_110c0e6e8;
  *param_1 = &PTR_FUN_110c0e740;
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar1 = &PTR_FUN_110bf6870;
  param_1[-5] = &PTR_DAT_110bf6908;
  *param_1 = &PTR_DAT_110bf6960;
  if (param_1[0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar1 = &PTR_DAT_110bf4248;
  param_1[-5] = &PTR_DAT_110bf42e0;
  *param_1 = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 10) == '\x01') {
    FUN_10a688c1c(param_1 + 6);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return puVar1;
}



/* Entry: 10a69b18c; end: 10a69b1a3;  */

void FUN_10a69b18c(long param_1)

{
  func_0x00010a69c938(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69b1a4; end: 10a69b1a7;  */

undefined8 * FUN_10a69b1a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c0e210;
  param_1[2] = &PTR_FUN_110c0e2a8;
  param_1[7] = &PTR_FUN_110c0e300;
  if (param_1[0x1c] != 0) {
    param_1[0x1d] = param_1[0x1c];
    __ZdlPv();
  }
  FUN_10a69ca24(param_1 + 0x15);
  *param_1 = &PTR_FUN_110bf6870;
  param_1[2] = &PTR_DAT_110bf6908;
  param_1[7] = &PTR_DAT_110bf6960;
  if (param_1[0x14] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110bf4248;
  param_1[2] = &PTR_DAT_110bf42e0;
  param_1[7] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    FUN_10a688c1c(param_1 + 0xd);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a69b1a8; end: 10a69b1bb;  */

void FUN_10a69b1a8(void)

{
  func_0x00010a69c9a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69b1bc; end: 10a69b1c3;  */

undefined8 * FUN_10a69b1bc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -2;
  *puVar1 = &PTR_FUN_110c0e210;
  *param_1 = &PTR_FUN_110c0e2a8;
  param_1[5] = &PTR_FUN_110c0e300;
  if (param_1[0x1a] != 0) {
    param_1[0x1b] = param_1[0x1a];
    __ZdlPv();
  }
  FUN_10a69ca24(param_1 + 0x13);
  *puVar1 = &PTR_FUN_110bf6870;
  *param_1 = &PTR_DAT_110bf6908;
  param_1[5] = &PTR_DAT_110bf6960;
  if (param_1[0x12] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar1 = &PTR_DAT_110bf4248;
  *param_1 = &PTR_DAT_110bf42e0;
  param_1[5] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0xf) == '\x01') {
    FUN_10a688c1c(param_1 + 0xb);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return puVar1;
}



/* Entry: 10a69b1c4; end: 10a69b1db;  */

void FUN_10a69b1c4(long param_1)

{
  func_0x00010a69c9a8(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69b1dc; end: 10a69b1e3;  */

undefined8 * FUN_10a69b1dc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -7;
  *puVar1 = &PTR_FUN_110c0e210;
  param_1[-5] = &PTR_FUN_110c0e2a8;
  *param_1 = &PTR_FUN_110c0e300;
  if (param_1[0x15] != 0) {
    param_1[0x16] = param_1[0x15];
    __ZdlPv();
  }
  FUN_10a69ca24(param_1 + 0xe);
  *puVar1 = &PTR_FUN_110bf6870;
  param_1[-5] = &PTR_DAT_110bf6908;
  *param_1 = &PTR_DAT_110bf6960;
  if (param_1[0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar1 = &PTR_DAT_110bf4248;
  param_1[-5] = &PTR_DAT_110bf42e0;
  *param_1 = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 10) == '\x01') {
    FUN_10a688c1c(param_1 + 6);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return puVar1;
}



/* Entry: 10a69b1e4; end: 10a69b1fb;  */

void FUN_10a69b1e4(long param_1)

{
  func_0x00010a69c9a8(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69b1fc; end: 10a69b1ff;  */

undefined8 * FUN_10a69b1fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c0e320;
  param_1[2] = &PTR_FUN_110c0e3b8;
  param_1[7] = &PTR_FUN_110c0e410;
  if (param_1[0x1c] != 0) {
    param_1[0x1d] = param_1[0x1c];
    __ZdlPv();
  }
  FUN_10a69ca24(param_1 + 0x15);
  *param_1 = &PTR_FUN_110bf6870;
  param_1[2] = &PTR_DAT_110bf6908;
  param_1[7] = &PTR_DAT_110bf6960;
  if (param_1[0x14] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110bf4248;
  param_1[2] = &PTR_DAT_110bf42e0;
  param_1[7] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    FUN_10a688c1c(param_1 + 0xd);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a69b200; end: 10a69b213;  */

void FUN_10a69b200(void)

{
  func_0x00010a69cbc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69b214; end: 10a69b21b;  */

undefined8 * FUN_10a69b214(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -2;
  *puVar1 = &PTR_FUN_110c0e320;
  *param_1 = &PTR_FUN_110c0e3b8;
  param_1[5] = &PTR_FUN_110c0e410;
  if (param_1[0x1a] != 0) {
    param_1[0x1b] = param_1[0x1a];
    __ZdlPv();
  }
  FUN_10a69ca24(param_1 + 0x13);
  *puVar1 = &PTR_FUN_110bf6870;
  *param_1 = &PTR_DAT_110bf6908;
  param_1[5] = &PTR_DAT_110bf6960;
  if (param_1[0x12] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar1 = &PTR_DAT_110bf4248;
  *param_1 = &PTR_DAT_110bf42e0;
  param_1[5] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0xf) == '\x01') {
    FUN_10a688c1c(param_1 + 0xb);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return puVar1;
}



/* Entry: 10a69b21c; end: 10a69b233;  */

void FUN_10a69b21c(long param_1)

{
  func_0x00010a69cbc4(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69b234; end: 10a69b23b;  */

undefined8 * FUN_10a69b234(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -7;
  *puVar1 = &PTR_FUN_110c0e320;
  param_1[-5] = &PTR_FUN_110c0e3b8;
  *param_1 = &PTR_FUN_110c0e410;
  if (param_1[0x15] != 0) {
    param_1[0x16] = param_1[0x15];
    __ZdlPv();
  }
  FUN_10a69ca24(param_1 + 0xe);
  *puVar1 = &PTR_FUN_110bf6870;
  param_1[-5] = &PTR_DAT_110bf6908;
  *param_1 = &PTR_DAT_110bf6960;
  if (param_1[0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar1 = &PTR_DAT_110bf4248;
  param_1[-5] = &PTR_DAT_110bf42e0;
  *param_1 = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 10) == '\x01') {
    FUN_10a688c1c(param_1 + 6);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return puVar1;
}



/* Entry: 10a69b23c; end: 10a69b253;  */

void FUN_10a69b23c(long param_1)

{
  func_0x00010a69cbc4(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69b254; end: 10a69b257;  */

undefined8 * FUN_10a69b254(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf6870;
  param_1[2] = &PTR_DAT_110bf6908;
  param_1[7] = &PTR_DAT_110bf6960;
  if (param_1[0x14] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110bf4248;
  param_1[2] = &PTR_DAT_110bf42e0;
  param_1[7] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    FUN_10a688c1c(param_1 + 0xd);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a69b258; end: 10a69b26b;  */

void FUN_10a69b258(void)

{
  func_0x00010a69cc40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69b26c; end: 10a69b273;  */

undefined8 * FUN_10a69b26c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -2;
  *puVar1 = &PTR_FUN_110bf6870;
  *param_1 = &PTR_DAT_110bf6908;
  param_1[5] = &PTR_DAT_110bf6960;
  if (param_1[0x12] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar1 = &PTR_DAT_110bf4248;
  *param_1 = &PTR_DAT_110bf42e0;
  param_1[5] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0xf) == '\x01') {
    FUN_10a688c1c(param_1 + 0xb);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return puVar1;
}



/* Entry: 10a69b274; end: 10a69b28b;  */

void FUN_10a69b274(long param_1)

{
  func_0x00010a69cc40(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69b28c; end: 10a69b293;  */

undefined8 * FUN_10a69b28c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -7;
  *puVar1 = &PTR_FUN_110bf6870;
  param_1[-5] = &PTR_DAT_110bf6908;
  *param_1 = &PTR_DAT_110bf6960;
  if (param_1[0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar1 = &PTR_DAT_110bf4248;
  param_1[-5] = &PTR_DAT_110bf42e0;
  *param_1 = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 10) == '\x01') {
    FUN_10a688c1c(param_1 + 6);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return puVar1;
}



/* Entry: 10a69b294; end: 10a69b2ab;  */

void FUN_10a69b294(long param_1)

{
  func_0x00010a69cc40(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69b2ac; end: 10a69b2af;  */

undefined8 * FUN_10a69b2ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c0eba0;
  param_1[2] = &PTR_FUN_110c0ec38;
  param_1[7] = &PTR_FUN_110c0ec90;
  if (param_1[0x16] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_FUN_110bf6870;
  param_1[2] = &PTR_DAT_110bf6908;
  param_1[7] = &PTR_DAT_110bf6960;
  if (param_1[0x14] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110bf4248;
  param_1[2] = &PTR_DAT_110bf42e0;
  param_1[7] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    FUN_10a688c1c(param_1 + 0xd);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a69b2b0; end: 10a69b2c3;  */

void FUN_10a69b2b0(void)

{
  func_0x00010a69cc88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69b2c4; end: 10a69b2cb;  */

undefined8 * FUN_10a69b2c4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -2;
  *puVar1 = &PTR_FUN_110c0eba0;
  *param_1 = &PTR_FUN_110c0ec38;
  param_1[5] = &PTR_FUN_110c0ec90;
  if (param_1[0x14] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar1 = &PTR_FUN_110bf6870;
  *param_1 = &PTR_DAT_110bf6908;
  param_1[5] = &PTR_DAT_110bf6960;
  if (param_1[0x12] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar1 = &PTR_DAT_110bf4248;
  *param_1 = &PTR_DAT_110bf42e0;
  param_1[5] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0xf) == '\x01') {
    FUN_10a688c1c(param_1 + 0xb);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return puVar1;
}



/* Entry: 10a69b2cc; end: 10a69b2e3;  */

void FUN_10a69b2cc(long param_1)

{
  func_0x00010a69cc88(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69b2e4; end: 10a69b2eb;  */

undefined8 * FUN_10a69b2e4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -7;
  *puVar1 = &PTR_FUN_110c0eba0;
  param_1[-5] = &PTR_FUN_110c0ec38;
  *param_1 = &PTR_FUN_110c0ec90;
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar1 = &PTR_FUN_110bf6870;
  param_1[-5] = &PTR_DAT_110bf6908;
  *param_1 = &PTR_DAT_110bf6960;
  if (param_1[0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar1 = &PTR_DAT_110bf4248;
  param_1[-5] = &PTR_DAT_110bf42e0;
  *param_1 = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 10) == '\x01') {
    FUN_10a688c1c(param_1 + 6);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return puVar1;
}



/* Entry: 10a69b2ec; end: 10a69b303;  */

void FUN_10a69b2ec(long param_1)

{
  func_0x00010a69cc88(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69b304; end: 10a69b307;  */

undefined8 * FUN_10a69b304(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c0ecb0;
  param_1[2] = &PTR_FUN_110c0ed48;
  param_1[7] = &PTR_FUN_110c0eda0;
  if (param_1[0x16] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_FUN_110bf6870;
  param_1[2] = &PTR_DAT_110bf6908;
  param_1[7] = &PTR_DAT_110bf6960;
  if (param_1[0x14] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110bf4248;
  param_1[2] = &PTR_DAT_110bf42e0;
  param_1[7] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    FUN_10a688c1c(param_1 + 0xd);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a69b308; end: 10a69b31b;  */

void FUN_10a69b308(void)

{
  func_0x00010a69ccf8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69b31c; end: 10a69b323;  */

undefined8 * FUN_10a69b31c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -2;
  *puVar1 = &PTR_FUN_110c0ecb0;
  *param_1 = &PTR_FUN_110c0ed48;
  param_1[5] = &PTR_FUN_110c0eda0;
  if (param_1[0x14] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar1 = &PTR_FUN_110bf6870;
  *param_1 = &PTR_DAT_110bf6908;
  param_1[5] = &PTR_DAT_110bf6960;
  if (param_1[0x12] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar1 = &PTR_DAT_110bf4248;
  *param_1 = &PTR_DAT_110bf42e0;
  param_1[5] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0xf) == '\x01') {
    FUN_10a688c1c(param_1 + 0xb);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return puVar1;
}



/* Entry: 10a69b324; end: 10a69b33b;  */

void FUN_10a69b324(long param_1)

{
  func_0x00010a69ccf8(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69b33c; end: 10a69b343;  */

undefined8 * FUN_10a69b33c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -7;
  *puVar1 = &PTR_FUN_110c0ecb0;
  param_1[-5] = &PTR_FUN_110c0ed48;
  *param_1 = &PTR_FUN_110c0eda0;
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar1 = &PTR_FUN_110bf6870;
  param_1[-5] = &PTR_DAT_110bf6908;
  *param_1 = &PTR_DAT_110bf6960;
  if (param_1[0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar1 = &PTR_DAT_110bf4248;
  param_1[-5] = &PTR_DAT_110bf42e0;
  *param_1 = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 10) == '\x01') {
    FUN_10a688c1c(param_1 + 6);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return puVar1;
}



/* Entry: 10a69b344; end: 10a69b35b;  */

void FUN_10a69b344(long param_1)

{
  func_0x00010a69ccf8(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69b35c; end: 10a69b35f;  */

undefined8 * FUN_10a69b35c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c0e980;
  param_1[2] = &PTR_FUN_110c0ea18;
  param_1[7] = &PTR_FUN_110c0ea70;
  if (param_1[0x16] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_FUN_110bf6870;
  param_1[2] = &PTR_DAT_110bf6908;
  param_1[7] = &PTR_DAT_110bf6960;
  if (param_1[0x14] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110bf4248;
  param_1[2] = &PTR_DAT_110bf42e0;
  param_1[7] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    FUN_10a688c1c(param_1 + 0xd);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a69b360; end: 10a69b373;  */

void FUN_10a69b360(void)

{
  func_0x00010a69cd68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69b374; end: 10a69b37b;  */

undefined8 * FUN_10a69b374(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -2;
  *puVar1 = &PTR_FUN_110c0e980;
  *param_1 = &PTR_FUN_110c0ea18;
  param_1[5] = &PTR_FUN_110c0ea70;
  if (param_1[0x14] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar1 = &PTR_FUN_110bf6870;
  *param_1 = &PTR_DAT_110bf6908;
  param_1[5] = &PTR_DAT_110bf6960;
  if (param_1[0x12] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar1 = &PTR_DAT_110bf4248;
  *param_1 = &PTR_DAT_110bf42e0;
  param_1[5] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0xf) == '\x01') {
    FUN_10a688c1c(param_1 + 0xb);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return puVar1;
}



/* Entry: 10a69b37c; end: 10a69b393;  */

void FUN_10a69b37c(long param_1)

{
  func_0x00010a69cd68(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69b394; end: 10a69b39b;  */

undefined8 * FUN_10a69b394(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -7;
  *puVar1 = &PTR_FUN_110c0e980;
  param_1[-5] = &PTR_FUN_110c0ea18;
  *param_1 = &PTR_FUN_110c0ea70;
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar1 = &PTR_FUN_110bf6870;
  param_1[-5] = &PTR_DAT_110bf6908;
  *param_1 = &PTR_DAT_110bf6960;
  if (param_1[0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar1 = &PTR_DAT_110bf4248;
  param_1[-5] = &PTR_DAT_110bf42e0;
  *param_1 = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 10) == '\x01') {
    FUN_10a688c1c(param_1 + 6);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return puVar1;
}



/* Entry: 10a69b39c; end: 10a69b3b3;  */

void FUN_10a69b39c(long param_1)

{
  func_0x00010a69cd68(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69b3b4; end: 10a69b3b7;  */

undefined8 * FUN_10a69b3b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c0ea90;
  param_1[2] = &PTR_FUN_110c0eb28;
  param_1[7] = &PTR_FUN_110c0eb80;
  if (param_1[0x16] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_FUN_110bf6870;
  param_1[2] = &PTR_DAT_110bf6908;
  param_1[7] = &PTR_DAT_110bf6960;
  if (param_1[0x14] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110bf4248;
  param_1[2] = &PTR_DAT_110bf42e0;
  param_1[7] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    FUN_10a688c1c(param_1 + 0xd);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a69b3b8; end: 10a69b3cb;  */

void FUN_10a69b3b8(void)

{
  func_0x00010a69cdd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69b3cc; end: 10a69b3d3;  */

undefined8 * FUN_10a69b3cc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -2;
  *puVar1 = &PTR_FUN_110c0ea90;
  *param_1 = &PTR_FUN_110c0eb28;
  param_1[5] = &PTR_FUN_110c0eb80;
  if (param_1[0x14] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar1 = &PTR_FUN_110bf6870;
  *param_1 = &PTR_DAT_110bf6908;
  param_1[5] = &PTR_DAT_110bf6960;
  if (param_1[0x12] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar1 = &PTR_DAT_110bf4248;
  *param_1 = &PTR_DAT_110bf42e0;
  param_1[5] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0xf) == '\x01') {
    FUN_10a688c1c(param_1 + 0xb);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return puVar1;
}



/* Entry: 10a69b3d4; end: 10a69b3eb;  */

void FUN_10a69b3d4(long param_1)

{
  func_0x00010a69cdd8(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69b3ec; end: 10a69b3f3;  */

undefined8 * FUN_10a69b3ec(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -7;
  *puVar1 = &PTR_FUN_110c0ea90;
  param_1[-5] = &PTR_FUN_110c0eb28;
  *param_1 = &PTR_FUN_110c0eb80;
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar1 = &PTR_FUN_110bf6870;
  param_1[-5] = &PTR_DAT_110bf6908;
  *param_1 = &PTR_DAT_110bf6960;
  if (param_1[0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar1 = &PTR_DAT_110bf4248;
  param_1[-5] = &PTR_DAT_110bf42e0;
  *param_1 = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 10) == '\x01') {
    FUN_10a688c1c(param_1 + 6);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return puVar1;
}



/* Entry: 10a69b3f4; end: 10a69b40b;  */

void FUN_10a69b3f4(long param_1)

{
  func_0x00010a69cdd8(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


