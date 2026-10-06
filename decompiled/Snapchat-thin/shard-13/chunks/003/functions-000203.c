/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a3a53d0; end: 10a3a53eb;  */

void FUN_10a3a53d0(undefined8 param_1)

{
  FUN_10a3c59d8(param_1,&PTR_PTR_110bc9b50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3a53ec; end: 10a3a5403;  */

long FUN_10a3a53ec(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a3a5404; end: 10a3a5423;  */

void FUN_10a3a5404(long param_1)

{
  FUN_10a3c59d8(param_1 + -0x10,&PTR_PTR_110bc9b50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3a5424; end: 10a3a5433;  */

void FUN_10a3a5424(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  param_1[-7] = &PTR_FUN_110bcd3d8;
  param_1[-5] = &PTR_DAT_110bcfec8;
  *param_1 = &PTR_DAT_110bcff20;
  param_1[6] = &PTR_DAT_110bcff40;
  param_1[0xf] = &PTR_DAT_110bcffb0;
  param_1[0x39] = &PTR_DAT_110bcd508;
  param_1[0x10] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x2e);
  (**(code **)param_1[0x2f])(param_1 + 0x2f);
  func_0x00010a004e5c(param_1 + 0x2c);
  if (*(char *)((long)param_1 + 0x12f) < '\0') {
    __ZdlPv(param_1[0x23]);
  }
  param_1[0x10] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x10);
  lVar1 = param_1[0xd];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xe];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
  }
  lVar1 = param_1[0xb];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xc];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
  }
  lVar1 = param_1[9];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[10];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[9] = 0;
    param_1[10] = 0;
  }
  lVar1 = param_1[7];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[8];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  puStack_28 = param_1 + 3;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1 + -7);
  return;
}



/* Entry: 10a3a5434; end: 10a3a5453;  */

void FUN_10a3a5434(long param_1)

{
  FUN_10a3c59d8(param_1 + -0x38,&PTR_PTR_110bc9b50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3a5454; end: 10a3a5463;  */

void FUN_10a3a5454(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  param_1[-0xd] = &PTR_FUN_110bcd3d8;
  param_1[-0xb] = &PTR_DAT_110bcfec8;
  param_1[-6] = &PTR_DAT_110bcff20;
  *param_1 = &PTR_DAT_110bcff40;
  param_1[9] = &PTR_DAT_110bcffb0;
  param_1[0x33] = &PTR_DAT_110bcd508;
  param_1[10] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x28);
  (**(code **)param_1[0x29])(param_1 + 0x29);
  func_0x00010a004e5c(param_1 + 0x26);
  if (*(char *)((long)param_1 + 0xff) < '\0') {
    __ZdlPv(param_1[0x1d]);
  }
  param_1[10] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 10);
  lVar1 = param_1[7];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[8];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  lVar1 = param_1[5];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[6];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[4];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[2];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  puStack_28 = param_1 + -3;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1 + -0xd);
  return;
}



/* Entry: 10a3a5464; end: 10a3a5483;  */

void FUN_10a3a5464(long param_1)

{
  FUN_10a3c59d8(param_1 + -0x68,&PTR_PTR_110bc9b50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3a5484; end: 10a3a5493;  */

void FUN_10a3a5484(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  param_1[-0x16] = &PTR_FUN_110bcd3d8;
  param_1[-0x14] = &PTR_DAT_110bcfec8;
  param_1[-0xf] = &PTR_DAT_110bcff20;
  param_1[-9] = &PTR_DAT_110bcff40;
  *param_1 = &PTR_DAT_110bcffb0;
  param_1[0x2a] = &PTR_DAT_110bcd508;
  param_1[1] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x1f);
  (**(code **)param_1[0x20])(param_1 + 0x20);
  func_0x00010a004e5c(param_1 + 0x1d);
  if (*(char *)((long)param_1 + 0xb7) < '\0') {
    __ZdlPv(param_1[0x14]);
  }
  param_1[1] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 1);
  lVar1 = param_1[-2];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-1];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-2] = 0;
    param_1[-1] = 0;
  }
  lVar1 = param_1[-4];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-3];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-4] = 0;
    param_1[-3] = 0;
  }
  lVar1 = param_1[-6];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-5];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-6] = 0;
    param_1[-5] = 0;
  }
  lVar1 = param_1[-8];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-7];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-8] = 0;
    param_1[-7] = 0;
  }
  puStack_28 = param_1 + -0xc;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1 + -0x16);
  return;
}



/* Entry: 10a3a5494; end: 10a3a54b3;  */

void FUN_10a3a5494(long param_1)

{
  FUN_10a3c59d8(param_1 + -0xb0,&PTR_PTR_110bc9b50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3a54b4; end: 10a3a54c3;  */

void FUN_10a3a54b4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  param_1[-0x17] = &PTR_FUN_110bcd3d8;
  param_1[-0x15] = &PTR_DAT_110bcfec8;
  param_1[-0x10] = &PTR_DAT_110bcff20;
  param_1[-10] = &PTR_DAT_110bcff40;
  param_1[-1] = &PTR_DAT_110bcffb0;
  param_1[0x29] = &PTR_DAT_110bcd508;
  *param_1 = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x1e);
  (**(code **)param_1[0x1f])(param_1 + 0x1f);
  func_0x00010a004e5c(param_1 + 0x1c);
  if (*(char *)((long)param_1 + 0xaf) < '\0') {
    __ZdlPv(param_1[0x13]);
  }
  *param_1 = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1);
  lVar1 = param_1[-3];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-2];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-3] = 0;
    param_1[-2] = 0;
  }
  lVar1 = param_1[-5];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-4];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-5] = 0;
    param_1[-4] = 0;
  }
  lVar1 = param_1[-7];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-6];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-7] = 0;
    param_1[-6] = 0;
  }
  lVar1 = param_1[-9];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-8];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-9] = 0;
    param_1[-8] = 0;
  }
  puStack_28 = param_1 + -0xd;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1 + -0x17);
  return;
}



/* Entry: 10a3a54c4; end: 10a3a54e3;  */

void FUN_10a3a54c4(long param_1)

{
  FUN_10a3c59d8(param_1 + -0xb8,&PTR_PTR_110bc9b50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3a54e4; end: 10a3a54fb;  */

void FUN_10a3a54e4(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puStack_28;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_FUN_110bcd3d8;
  puVar1[2] = &PTR_DAT_110bcfec8;
  puVar1[7] = &PTR_DAT_110bcff20;
  puVar1[0xd] = &PTR_DAT_110bcff40;
  puVar1[0x16] = &PTR_DAT_110bcffb0;
  puVar1[0x40] = &PTR_DAT_110bcd508;
  puVar1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(puVar1 + 0x35);
  (**(code **)puVar1[0x36])(puVar1 + 0x36);
  func_0x00010a004e5c(puVar1 + 0x33);
  if (*(char *)((long)puVar1 + 0x167) < '\0') {
    __ZdlPv(puVar1[0x2a]);
  }
  puVar1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(puVar1 + 0x17);
  lVar2 = puVar1[0x14];
  if (lVar2 != 0) {
    plVar3 = (long *)puVar1[0x15];
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
  }
  lVar2 = puVar1[0x12];
  if (lVar2 != 0) {
    plVar3 = (long *)puVar1[0x13];
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
  }
  lVar2 = puVar1[0x10];
  if (lVar2 != 0) {
    plVar3 = (long *)puVar1[0x11];
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
  }
  lVar2 = puVar1[0xe];
  if (lVar2 != 0) {
    plVar3 = (long *)puVar1[0xf];
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
  }
  puStack_28 = puVar1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(puVar1);
  return;
}



/* Entry: 10a3a54fc; end: 10a3a55af;  */

void FUN_10a3a54fc(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a3c59d8((long)param_1 + lVar1,&PTR_PTR_110bc9b50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a3a55b0; end: 10a3a55b7;  */

long FUN_10a3a55b0(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a3a55b8; end: 10a3a5937;  */

void FUN_10a3a55b8(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  if (param_1[0x40] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a37985c(param_1 + 0x3c);
  param_1[-2] = &PTR_FUN_110bcd570;
  *param_1 = &PTR_DAT_110bcfec8;
  param_1[5] = &PTR_DAT_110bcff20;
  param_1[0xb] = &PTR_DAT_110bcff40;
  param_1[0x14] = &PTR_DAT_110bcffb0;
  param_1[0x41] = &PTR_DAT_110bcd6a0;
  param_1[0x15] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x33);
  (**(code **)param_1[0x34])(param_1 + 0x34);
  func_0x00010a004e5c(param_1 + 0x31);
  if (*(char *)((long)param_1 + 0x157) < '\0') {
    __ZdlPv(param_1[0x28]);
  }
  param_1[0x15] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x15);
  lVar1 = param_1[0x12];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x13];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x11];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar1 = param_1[0xe];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xf];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  lVar1 = param_1[0xc];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xd];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  puStack_28 = param_1 + 8;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1 + -2);
  return;
}



/* Entry: 10a3a5938; end: 10a3a5943;  */

void FUN_10a3a5938(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bcd708;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x3f] = &PTR_DAT_110bcd838;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar1 = param_1[0x14];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x15];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar1 = param_1[0x12];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x13];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x11];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar1 = param_1[0xe];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xf];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  puStack_28 = param_1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10a3a5944; end: 10a3a595f;  */

void FUN_10a3a5944(undefined8 param_1)

{
  FUN_10a3c59d8(param_1,&PTR_PTR_110bca1c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3a5960; end: 10a3a5977;  */

long FUN_10a3a5960(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a3a5978; end: 10a3a5997;  */

void FUN_10a3a5978(long param_1)

{
  FUN_10a3c59d8(param_1 + -0x10,&PTR_PTR_110bca1c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3a5998; end: 10a3a59a7;  */

void FUN_10a3a5998(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  param_1[-7] = &PTR_FUN_110bcd708;
  param_1[-5] = &PTR_DAT_110bcfec8;
  *param_1 = &PTR_DAT_110bcff20;
  param_1[6] = &PTR_DAT_110bcff40;
  param_1[0xf] = &PTR_DAT_110bcffb0;
  param_1[0x38] = &PTR_DAT_110bcd838;
  param_1[0x10] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x2e);
  (**(code **)param_1[0x2f])(param_1 + 0x2f);
  func_0x00010a004e5c(param_1 + 0x2c);
  if (*(char *)((long)param_1 + 0x12f) < '\0') {
    __ZdlPv(param_1[0x23]);
  }
  param_1[0x10] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x10);
  lVar1 = param_1[0xd];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xe];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
  }
  lVar1 = param_1[0xb];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xc];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
  }
  lVar1 = param_1[9];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[10];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[9] = 0;
    param_1[10] = 0;
  }
  lVar1 = param_1[7];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[8];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  puStack_28 = param_1 + 3;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1 + -7);
  return;
}



/* Entry: 10a3a59a8; end: 10a3a59c7;  */

void FUN_10a3a59a8(long param_1)

{
  FUN_10a3c59d8(param_1 + -0x38,&PTR_PTR_110bca1c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3a59c8; end: 10a3a59d7;  */

void FUN_10a3a59c8(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  param_1[-0xd] = &PTR_FUN_110bcd708;
  param_1[-0xb] = &PTR_DAT_110bcfec8;
  param_1[-6] = &PTR_DAT_110bcff20;
  *param_1 = &PTR_DAT_110bcff40;
  param_1[9] = &PTR_DAT_110bcffb0;
  param_1[0x32] = &PTR_DAT_110bcd838;
  param_1[10] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x28);
  (**(code **)param_1[0x29])(param_1 + 0x29);
  func_0x00010a004e5c(param_1 + 0x26);
  if (*(char *)((long)param_1 + 0xff) < '\0') {
    __ZdlPv(param_1[0x1d]);
  }
  param_1[10] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 10);
  lVar1 = param_1[7];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[8];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  lVar1 = param_1[5];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[6];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[4];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[2];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  puStack_28 = param_1 + -3;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1 + -0xd);
  return;
}



/* Entry: 10a3a59d8; end: 10a3a59f7;  */

void FUN_10a3a59d8(long param_1)

{
  FUN_10a3c59d8(param_1 + -0x68,&PTR_PTR_110bca1c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3a59f8; end: 10a3a5a07;  */

void FUN_10a3a59f8(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  param_1[-0x16] = &PTR_FUN_110bcd708;
  param_1[-0x14] = &PTR_DAT_110bcfec8;
  param_1[-0xf] = &PTR_DAT_110bcff20;
  param_1[-9] = &PTR_DAT_110bcff40;
  *param_1 = &PTR_DAT_110bcffb0;
  param_1[0x29] = &PTR_DAT_110bcd838;
  param_1[1] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x1f);
  (**(code **)param_1[0x20])(param_1 + 0x20);
  func_0x00010a004e5c(param_1 + 0x1d);
  if (*(char *)((long)param_1 + 0xb7) < '\0') {
    __ZdlPv(param_1[0x14]);
  }
  param_1[1] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 1);
  lVar1 = param_1[-2];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-1];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-2] = 0;
    param_1[-1] = 0;
  }
  lVar1 = param_1[-4];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-3];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-4] = 0;
    param_1[-3] = 0;
  }
  lVar1 = param_1[-6];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-5];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-6] = 0;
    param_1[-5] = 0;
  }
  lVar1 = param_1[-8];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-7];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-8] = 0;
    param_1[-7] = 0;
  }
  puStack_28 = param_1 + -0xc;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1 + -0x16);
  return;
}



/* Entry: 10a3a5a08; end: 10a3a5a27;  */

void FUN_10a3a5a08(long param_1)

{
  FUN_10a3c59d8(param_1 + -0xb0,&PTR_PTR_110bca1c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3a5a28; end: 10a3a5a37;  */

void FUN_10a3a5a28(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  param_1[-0x17] = &PTR_FUN_110bcd708;
  param_1[-0x15] = &PTR_DAT_110bcfec8;
  param_1[-0x10] = &PTR_DAT_110bcff20;
  param_1[-10] = &PTR_DAT_110bcff40;
  param_1[-1] = &PTR_DAT_110bcffb0;
  param_1[0x28] = &PTR_DAT_110bcd838;
  *param_1 = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x1e);
  (**(code **)param_1[0x1f])(param_1 + 0x1f);
  func_0x00010a004e5c(param_1 + 0x1c);
  if (*(char *)((long)param_1 + 0xaf) < '\0') {
    __ZdlPv(param_1[0x13]);
  }
  *param_1 = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1);
  lVar1 = param_1[-3];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-2];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-3] = 0;
    param_1[-2] = 0;
  }
  lVar1 = param_1[-5];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-4];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-5] = 0;
    param_1[-4] = 0;
  }
  lVar1 = param_1[-7];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-6];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-7] = 0;
    param_1[-6] = 0;
  }
  lVar1 = param_1[-9];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-8];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-9] = 0;
    param_1[-8] = 0;
  }
  puStack_28 = param_1 + -0xd;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1 + -0x17);
  return;
}



/* Entry: 10a3a5a38; end: 10a3a5a57;  */

void FUN_10a3a5a38(long param_1)

{
  FUN_10a3c59d8(param_1 + -0xb8,&PTR_PTR_110bca1c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3a5a58; end: 10a3a5a6f;  */

void FUN_10a3a5a58(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puStack_28;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_FUN_110bcd708;
  puVar1[2] = &PTR_DAT_110bcfec8;
  puVar1[7] = &PTR_DAT_110bcff20;
  puVar1[0xd] = &PTR_DAT_110bcff40;
  puVar1[0x16] = &PTR_DAT_110bcffb0;
  puVar1[0x3f] = &PTR_DAT_110bcd838;
  puVar1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(puVar1 + 0x35);
  (**(code **)puVar1[0x36])(puVar1 + 0x36);
  func_0x00010a004e5c(puVar1 + 0x33);
  if (*(char *)((long)puVar1 + 0x167) < '\0') {
    __ZdlPv(puVar1[0x2a]);
  }
  puVar1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(puVar1 + 0x17);
  lVar2 = puVar1[0x14];
  if (lVar2 != 0) {
    plVar3 = (long *)puVar1[0x15];
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
  }
  lVar2 = puVar1[0x12];
  if (lVar2 != 0) {
    plVar3 = (long *)puVar1[0x13];
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
  }
  lVar2 = puVar1[0x10];
  if (lVar2 != 0) {
    plVar3 = (long *)puVar1[0x11];
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
  }
  lVar2 = puVar1[0xe];
  if (lVar2 != 0) {
    plVar3 = (long *)puVar1[0xf];
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
  }
  puStack_28 = puVar1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(puVar1);
  return;
}



/* Entry: 10a3a5a70; end: 10a3a5ba3;  */

void FUN_10a3a5a70(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a3c59d8((long)param_1 + lVar1,&PTR_PTR_110bca1c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a3a5ba4; end: 10a3a5bdb;  */

long FUN_10a3a5ba4(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a3a5bdc; end: 10a3a602b;  */

void FUN_10a3a5bdc(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  param_1[100] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x65);
  param_1[0x5b] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x5c);
  param_1[0x54] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x55);
  param_1[0x4b] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x4c);
  param_1[0x42] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x43);
  func_0x00010a1f7460(param_1 + 0x3e);
  func_0x00010a1f7460(param_1 + 0x3c);
  param_1[-2] = &PTR_FUN_110bcd8a0;
  *param_1 = &PTR_DAT_110bcfec8;
  param_1[5] = &PTR_DAT_110bcff20;
  param_1[0xb] = &PTR_DAT_110bcff40;
  param_1[0x14] = &PTR_DAT_110bcffb0;
  param_1[0x6f] = &PTR_DAT_110bcd9d0;
  param_1[0x15] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x33);
  (**(code **)param_1[0x34])(param_1 + 0x34);
  func_0x00010a004e5c(param_1 + 0x31);
  if (*(char *)((long)param_1 + 0x157) < '\0') {
    __ZdlPv(param_1[0x28]);
  }
  param_1[0x15] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x15);
  lVar1 = param_1[0x12];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x13];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x11];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar1 = param_1[0xe];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xf];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  lVar1 = param_1[0xc];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xd];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  FUN_10a3ebf4c(&stack0xffffffffffffffd8);
  FUN_10a572f54(param_1 + -2);
  return;
}



/* Entry: 10a3a602c; end: 10a3a605f;  */

undefined8 FUN_10a3a602c(void)

{
  return 0x3e8928a6e6ec92dd;
}



/* Entry: 10a3a6060; end: 10a3a6173;  */

void FUN_10a3a6060(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  param_1[0x4f] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x50);
  param_1[0x46] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x47);
  param_1[0x3f] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x40);
  param_1[0x36] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x37);
  param_1[0x2d] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x2e);
  func_0x00010a1f7460(param_1 + 0x29);
  func_0x00010a1f7460(param_1 + 0x27);
  param_1[-0x17] = &PTR_FUN_110bcd8a0;
  param_1[-0x15] = &PTR_DAT_110bcfec8;
  param_1[-0x10] = &PTR_DAT_110bcff20;
  param_1[-10] = &PTR_DAT_110bcff40;
  param_1[-1] = &PTR_DAT_110bcffb0;
  param_1[0x5a] = &PTR_DAT_110bcd9d0;
  *param_1 = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x1e);
  (**(code **)param_1[0x1f])(param_1 + 0x1f);
  func_0x00010a004e5c(param_1 + 0x1c);
  if (*(char *)((long)param_1 + 0xaf) < '\0') {
    __ZdlPv(param_1[0x13]);
  }
  *param_1 = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1);
  lVar1 = param_1[-3];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-2];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-3] = 0;
    param_1[-2] = 0;
  }
  lVar1 = param_1[-5];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-4];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-5] = 0;
    param_1[-4] = 0;
  }
  lVar1 = param_1[-7];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-6];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-7] = 0;
    param_1[-6] = 0;
  }
  lVar1 = param_1[-9];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-8];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-9] = 0;
    param_1[-8] = 0;
  }
  FUN_10a3ebf4c(&stack0xffffffffffffffd8);
  FUN_10a572f54(param_1 + -0x17);
  return;
}



/* Entry: 10a3a6174; end: 10a3a627f;  */

void FUN_10a3a6174(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puStack_28;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  puVar1[0x66] = &PTR_DAT_110b17898;
  func_0x00010a004dac(puVar1 + 0x67);
  puVar1[0x5d] = &PTR_DAT_110b17898;
  func_0x00010a004dac(puVar1 + 0x5e);
  puVar1[0x56] = &PTR_DAT_110b17898;
  func_0x00010a004dac(puVar1 + 0x57);
  puVar1[0x4d] = &PTR_DAT_110b17898;
  func_0x00010a004dac(puVar1 + 0x4e);
  puVar1[0x44] = &PTR_DAT_110b17898;
  func_0x00010a004dac(puVar1 + 0x45);
  func_0x00010a1f7460(puVar1 + 0x40);
  func_0x00010a1f7460(puVar1 + 0x3e);
  *puVar1 = &PTR_FUN_110bcd8a0;
  puVar1[2] = &PTR_DAT_110bcfec8;
  puVar1[7] = &PTR_DAT_110bcff20;
  puVar1[0xd] = &PTR_DAT_110bcff40;
  puVar1[0x16] = &PTR_DAT_110bcffb0;
  puVar1[0x71] = &PTR_DAT_110bcd9d0;
  puVar1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(puVar1 + 0x35);
  (**(code **)puVar1[0x36])(puVar1 + 0x36);
  func_0x00010a004e5c(puVar1 + 0x33);
  if (*(char *)((long)puVar1 + 0x167) < '\0') {
    __ZdlPv(puVar1[0x2a]);
  }
  puVar1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(puVar1 + 0x17);
  lVar2 = puVar1[0x14];
  if (lVar2 != 0) {
    plVar3 = (long *)puVar1[0x15];
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
  }
  lVar2 = puVar1[0x12];
  if (lVar2 != 0) {
    plVar3 = (long *)puVar1[0x13];
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
  }
  lVar2 = puVar1[0x10];
  if (lVar2 != 0) {
    plVar3 = (long *)puVar1[0x11];
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
  }
  lVar2 = puVar1[0xe];
  if (lVar2 != 0) {
    plVar3 = (long *)puVar1[0xf];
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
  }
  puStack_28 = puVar1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(puVar1);
  return;
}



/* Entry: 10a3a6280; end: 10a3a62eb;  */

long FUN_10a3a6280(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a3a62ec; end: 10a3a634f;  */

void FUN_10a3a62ec(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  func_0x00010a0d8a6c(param_1 + 0x3e);
  *param_1 = &PTR_FUN_110bcdbb8;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x43] = &PTR_DAT_110bcdce8;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar1 = param_1[0x14];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x15];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar1 = param_1[0x12];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x13];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x11];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar1 = param_1[0xe];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xf];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  puStack_28 = param_1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10a3a6350; end: 10a3a6387;  */

long FUN_10a3a6350(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a3a6388; end: 10a3a6517;  */

void FUN_10a3a6388(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  func_0x00010a0d8a6c(param_1 + 0x3c);
  param_1[-2] = &PTR_FUN_110bcdbb8;
  *param_1 = &PTR_DAT_110bcfec8;
  param_1[5] = &PTR_DAT_110bcff20;
  param_1[0xb] = &PTR_DAT_110bcff40;
  param_1[0x14] = &PTR_DAT_110bcffb0;
  param_1[0x41] = &PTR_DAT_110bcdce8;
  param_1[0x15] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x33);
  (**(code **)param_1[0x34])(param_1 + 0x34);
  func_0x00010a004e5c(param_1 + 0x31);
  if (*(char *)((long)param_1 + 0x157) < '\0') {
    __ZdlPv(param_1[0x28]);
  }
  param_1[0x15] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x15);
  lVar1 = param_1[0x12];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x13];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x11];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar1 = param_1[0xe];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xf];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  lVar1 = param_1[0xc];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xd];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  puStack_28 = param_1 + 8;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1 + -2);
  return;
}



/* Entry: 10a3a6518; end: 10a3a654b;  */

undefined8 FUN_10a3a6518(void)

{
  return 0xa6a1c3410c3450da;
}



/* Entry: 10a3a654c; end: 10a3a6707;  */

void FUN_10a3a654c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  func_0x00010a0d8a6c(param_1 + 0x27);
  param_1[-0x17] = &PTR_FUN_110bcdbb8;
  param_1[-0x15] = &PTR_DAT_110bcfec8;
  param_1[-0x10] = &PTR_DAT_110bcff20;
  param_1[-10] = &PTR_DAT_110bcff40;
  param_1[-1] = &PTR_DAT_110bcffb0;
  param_1[0x2c] = &PTR_DAT_110bcdce8;
  *param_1 = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x1e);
  (**(code **)param_1[0x1f])(param_1 + 0x1f);
  func_0x00010a004e5c(param_1 + 0x1c);
  if (*(char *)((long)param_1 + 0xaf) < '\0') {
    __ZdlPv(param_1[0x13]);
  }
  *param_1 = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1);
  lVar1 = param_1[-3];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-2];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-3] = 0;
    param_1[-2] = 0;
  }
  lVar1 = param_1[-5];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-4];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-5] = 0;
    param_1[-4] = 0;
  }
  lVar1 = param_1[-7];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-6];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-7] = 0;
    param_1[-6] = 0;
  }
  lVar1 = param_1[-9];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-8];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-9] = 0;
    param_1[-8] = 0;
  }
  puStack_28 = param_1 + -0xd;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1 + -0x17);
  return;
}



/* Entry: 10a3a6708; end: 10a3a673f;  */

long FUN_10a3a6708(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a3a6740; end: 10a3a6aef;  */

void FUN_10a3a6740(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puStack_28;
  
  puVar3 = param_1 + -2;
  *puVar3 = &PTR_DAT_110bcb198;
  *param_1 = &PTR_FUN_110bcb2a8;
  param_1[5] = &PTR_DAT_110bcb300;
  param_1[0xb] = &PTR_DAT_110bcb320;
  param_1[0x3f] = &PTR_DAT_110bcb420;
  param_1[0x14] = &PTR_DAT_110bcb390;
  param_1[0x15] = &PTR_FUN_110bcb3c0;
  lVar1 = param_1[0x3c];
  if (lVar1 != 0) {
    param_1[0x3d] = lVar1;
    __ZdlPv(lVar1);
  }
  *puVar3 = &PTR_FUN_110bcddb0;
  *param_1 = &PTR_DAT_110bcfec8;
  param_1[5] = &PTR_DAT_110bcff20;
  param_1[0xb] = &PTR_DAT_110bcff40;
  param_1[0x14] = &PTR_DAT_110bcffb0;
  param_1[0x3f] = &PTR_DAT_110bcdee0;
  param_1[0x15] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x33);
  (**(code **)param_1[0x34])(param_1 + 0x34);
  func_0x00010a004e5c(param_1 + 0x31);
  if (*(char *)((long)param_1 + 0x157) < '\0') {
    __ZdlPv(param_1[0x28]);
  }
  param_1[0x15] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x15);
  lVar1 = param_1[0x12];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x13];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x11];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar1 = param_1[0xe];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xf];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  lVar1 = param_1[0xc];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xd];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  puStack_28 = param_1 + 8;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(puVar3);
  return;
}



/* Entry: 10a3a6af0; end: 10a3a6b23;  */

undefined8 FUN_10a3a6af0(void)

{
  return 0x4173d64b71fe0ae5;
}



/* Entry: 10a3a6b24; end: 10a3a6ddf;  */

void FUN_10a3a6b24(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puStack_28;
  
  puVar3 = param_1 + -0x17;
  *puVar3 = &PTR_DAT_110bcb198;
  param_1[-0x15] = &PTR_FUN_110bcb2a8;
  param_1[-0x10] = &PTR_DAT_110bcb300;
  param_1[-10] = &PTR_DAT_110bcb320;
  param_1[0x2a] = &PTR_DAT_110bcb420;
  param_1[-1] = &PTR_DAT_110bcb390;
  *param_1 = &PTR_FUN_110bcb3c0;
  lVar1 = param_1[0x27];
  if (lVar1 != 0) {
    param_1[0x28] = lVar1;
    __ZdlPv(lVar1);
  }
  *puVar3 = &PTR_FUN_110bcddb0;
  param_1[-0x15] = &PTR_DAT_110bcfec8;
  param_1[-0x10] = &PTR_DAT_110bcff20;
  param_1[-10] = &PTR_DAT_110bcff40;
  param_1[-1] = &PTR_DAT_110bcffb0;
  param_1[0x2a] = &PTR_DAT_110bcdee0;
  *param_1 = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x1e);
  (**(code **)param_1[0x1f])(param_1 + 0x1f);
  func_0x00010a004e5c(param_1 + 0x1c);
  if (*(char *)((long)param_1 + 0xaf) < '\0') {
    __ZdlPv(param_1[0x13]);
  }
  *param_1 = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1);
  lVar1 = param_1[-3];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-2];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-3] = 0;
    param_1[-2] = 0;
  }
  lVar1 = param_1[-5];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-4];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-5] = 0;
    param_1[-4] = 0;
  }
  lVar1 = param_1[-7];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-6];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-7] = 0;
    param_1[-6] = 0;
  }
  lVar1 = param_1[-9];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-8];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-9] = 0;
    param_1[-8] = 0;
  }
  puStack_28 = param_1 + -0xd;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(puVar3);
  return;
}



/* Entry: 10a3a6de0; end: 10a3a6de7;  */

long FUN_10a3a6de0(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a3a6de8; end: 10a3a731f;  */

void FUN_10a3a6de8(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bcb608;
  param_1[5] = &PTR_DAT_110bcb660;
  param_1[0xb] = &PTR_DAT_110bcb680;
  param_1[0x41] = &PTR_DAT_110bcb780;
  param_1[0x14] = &PTR_DAT_110bcb6f0;
  param_1[0x15] = &PTR_DAT_110bcb720;
  puVar3 = param_1 + -2;
  *puVar3 = &PTR_DAT_110bcb4f0;
  if (param_1[0x3d] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar3 = &PTR_FUN_110bcdf48;
  *param_1 = &PTR_DAT_110bcfec8;
  param_1[5] = &PTR_DAT_110bcff20;
  param_1[0xb] = &PTR_DAT_110bcff40;
  param_1[0x14] = &PTR_DAT_110bcffb0;
  param_1[0x41] = &PTR_DAT_110bce078;
  param_1[0x15] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x33);
  (**(code **)param_1[0x34])(param_1 + 0x34);
  func_0x00010a004e5c(param_1 + 0x31);
  if (*(char *)((long)param_1 + 0x157) < '\0') {
    __ZdlPv(param_1[0x28]);
  }
  param_1[0x15] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x15);
  lVar1 = param_1[0x12];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x13];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x11];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar1 = param_1[0xe];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xf];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  lVar1 = param_1[0xc];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xd];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  puStack_28 = param_1 + 8;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(puVar3);
  return;
}



/* Entry: 10a3a7320; end: 10a3a743b;  */

long FUN_10a3a7320(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a3a743c; end: 10a3a7497;  */

void FUN_10a3a743c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 10a3a7498; end: 10a3a754b;  */

void FUN_10a3a7498(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  plVar2 = *(long **)**(undefined8 **)*param_1;
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  lStack_28 = -0x7fffffffffffffc8;
  uStack_30 = 0x30;
  puVar1[3] = 0x5f4241464552505f;
  puVar1[2] = 0x454b4157414e4f5f;
  puVar1[5] = 0x44454c42414e455f;
  puVar1[4] = 0x44414f4c4e574f44;
  puVar1[1] = 0x4843554f5445525f;
  *puVar1 = 0x45524f43534e454c;
  *(undefined1 *)(puVar1 + 6) = 0;
  puStack_38 = puVar1;
  (**(code **)(*plVar2 + 0x50))(plVar2,&puStack_38,0);
  uRam00000001137eb018 = SUB81(plVar2,0);
  if (lStack_28 < 0) {
    __ZdlPv(puStack_38);
  }
  return;
}



/* Entry: 10a3a754c; end: 10a3a75a7;  */

void FUN_10a3a754c(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uStack_21;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if (*(int *)(param_1 + 0x10) != -1 || uVar1 != 0xffffffff) {
    if (uVar1 == 0xffffffff) {
      if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
        (*(code *)(&PTR_FUN_110bceaf0)[*(uint *)(param_1 + 0x10)])(&uStack_21,param_1,param_2);
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      return;
    }
    (*(code *)(&PTR_DAT_110bceb10)[uVar1])(&stack0xffffffffffffffe8);
  }
  return;
}



/* Entry: 10a3a75a8; end: 10a3a75fb;  */

void FUN_10a3a75a8(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110bceaf0)[*(uint *)(param_1 + 0x10)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return;
}



/* Entry: 10a3a75fc; end: 10a3a7617;  */

void FUN_10a3a75fc(void)

{
  return;
}



/* Entry: 10a3a7618; end: 10a3a76f7;  */

long FUN_10a3a7618(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
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



/* Entry: 10a3a76f8; end: 10a3a770f;  */

undefined8 * FUN_10a3a76f8(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar4 = (undefined8 *)*param_1;
  if (*(int *)(puVar4 + 2) == 1) {
    uVar9 = param_3[1];
    uVar8 = *param_3;
    if (param_3[1] != 0) {
      plVar7 = (long *)(param_3[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar7 = (long *)param_2[1];
    param_2[1] = uVar9;
    *param_2 = uVar8;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    return param_2;
  }
  puVar5 = puVar4;
  FUN_10a3a75a8();
  lVar6 = param_3[1];
  uVar8 = *param_3;
  puVar4[1] = param_3[1];
  *puVar4 = uVar8;
  if (lVar6 != 0) {
    plVar7 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined4 *)(puVar4 + 2) = 1;
  return puVar5;
}



/* Entry: 10a3a7710; end: 10a3a7997;  */

undefined8 * FUN_10a3a7710(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (*(int *)(param_1 + 2) == 1) {
    uVar8 = param_3[1];
    uVar7 = *param_3;
    if (param_3[1] != 0) {
      plVar6 = (long *)(param_3[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar6 = (long *)param_2[1];
    param_2[1] = uVar8;
    *param_2 = uVar7;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    return param_2;
  }
  puVar4 = param_1;
  FUN_10a3a75a8();
  lVar5 = param_3[1];
  uVar7 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar7;
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined4 *)(param_1 + 2) = 1;
  return puVar4;
}



/* Entry: 10a3a7998; end: 10a3a7a07;  */

void FUN_10a3a7998(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_10a3b772c();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a3a7a08; end: 10a3a7a47;  */

void FUN_10a3a7a08(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_10a39bce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10a3a7a48; end: 10a3a7ab7;  */

void FUN_10a3a7a48(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x00010a3b7784();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a3a7ab8; end: 10a3a7b93;  */

undefined ** FUN_10a3a7ab8(undefined **param_1,undefined *param_2,undefined *param_3)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  ulong uVar9;
  int iVar10;
  
  puVar8 = PTR___tlv_bootstrap_11340d750;
  ppuVar7 = &PTR___tlv_bootstrap_11340d750;
  ppuVar5 = ppuVar7;
  (*(code *)PTR___tlv_bootstrap_11340d750)();
  ppuVar6 = &PTR___tlv_bootstrap_11340d738;
  if (((ulong)*ppuVar5 & 1) == 0) {
    ppuVar5 = ppuVar6;
    (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
    __tlv_atexit(0x10a132a8c,ppuVar5,0x100000000);
    (*(code *)puVar8)();
    *(undefined1 *)ppuVar7 = 1;
  }
  (*(code *)PTR___tlv_bootstrap_11340d738)();
  puVar8 = ppuVar6[2];
  if (puVar8 != (undefined *)0x0) {
    cVar1 = *(char *)(*(long *)(puVar8 + 8) + 0x35);
    *(char *)param_1 = cVar1;
    ((char *)((long)param_1 + 2))[0] = '%';
    ((char *)((long)param_1 + 2))[1] = '\0';
    param_1[1] = param_2;
    param_1[2] = param_3;
    ppuVar7 = &PTR___tlv_bootstrap_11340dd08;
    (*(code *)PTR___tlv_bootstrap_11340dd08)();
    iVar10 = *(int *)ppuVar7;
    if (iVar10 == 0) {
      _pthread_threadid_np(0,&stack0xffffffffffffffc8);
      iVar10 = 0;
      *(undefined4 *)ppuVar7 = 0;
    }
    *(int *)(param_1 + 3) = iVar10;
    param_1[5] = (undefined *)0x0;
    *(char *)(param_1 + 6) = '\0';
    if (((cVar1 != '\0') && (puVar8 != (undefined *)0x0)) &&
       (((*(byte *)(*(long *)(puVar8 + 8) + 0x42) | *(byte *)(*(long *)(puVar8 + 8) + 0x43)) & 1) !=
        0)) {
      uVar4 = cntfrq_el0;
      InstructionSynchronizationBarrier();
      uVar9 = cntvct_el0;
      if (uVar4 != 1000000000) {
        uVar2 = 0;
        if (uVar4 != 0) {
          uVar2 = uVar9 / uVar4;
        }
        uVar3 = 0;
        if (uVar4 != 0) {
          uVar3 = ((uVar9 - uVar2 * uVar4) * 1000000000) / uVar4;
        }
        uVar9 = uVar3 + uVar2 * 1000000000;
      }
      FUN_10a3a7c80(puVar8,*(undefined2 *)((long)param_1 + 2),uVar9,param_1[1],param_1[2],
                    *(undefined4 *)(param_1 + 3),0);
    }
    return param_1;
  }
  *(char *)param_1 = '\0';
  param_1[1] = (undefined *)0x0;
  param_1[2] = (undefined *)0x0;
  param_1[5] = (undefined *)0x0;
  *(char *)(param_1 + 6) = '\0';
  return ppuVar6;
}



/* Entry: 10a3a7b94; end: 10a3a7c7f;  */

undefined1 *
FUN_10a3a7b94(undefined1 *param_1,int param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  ulong uVar5;
  int iVar6;
  undefined8 uStack_38;
  
  *param_1 = (char)param_2;
  *(undefined2 *)(param_1 + 2) = 0x25;
  *(undefined8 *)(param_1 + 8) = param_4;
  *(undefined8 *)(param_1 + 0x10) = param_5;
  ppuVar4 = &PTR___tlv_bootstrap_11340dd08;
  (*(code *)PTR___tlv_bootstrap_11340dd08)();
  iVar6 = *(int *)ppuVar4;
  if (*(int *)ppuVar4 == 0) {
    uStack_38 = 0;
    _pthread_threadid_np(0,&uStack_38);
    *(int *)ppuVar4 = (int)uStack_38;
    iVar6 = (int)uStack_38;
  }
  *(int *)(param_1 + 0x18) = iVar6;
  *(undefined8 *)(param_1 + 0x28) = 0;
  param_1[0x30] = 0;
  if (((param_2 != 0) && (param_3 != 0)) &&
     (((*(byte *)(*(long *)(param_3 + 8) + 0x42) | *(byte *)(*(long *)(param_3 + 8) + 0x43)) & 1) !=
      0)) {
    uVar3 = cntfrq_el0;
    InstructionSynchronizationBarrier();
    uVar5 = cntvct_el0;
    if (uVar3 != 1000000000) {
      uVar1 = 0;
      if (uVar3 != 0) {
        uVar1 = uVar5 / uVar3;
      }
      uVar2 = 0;
      if (uVar3 != 0) {
        uVar2 = ((uVar5 - uVar1 * uVar3) * 1000000000) / uVar3;
      }
      uVar5 = uVar2 + uVar1 * 1000000000;
    }
    FUN_10a3a7c80(param_3,*(undefined2 *)(param_1 + 2),uVar5,*(undefined8 *)(param_1 + 8),
                  *(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18),0);
  }
  return param_1;
}



/* Entry: 10a3a7c80; end: 10a3a7e2b;  */

void FUN_10a3a7c80(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined4 param_6,long param_7)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long lStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_1;
  puVar8 = param_2;
  FUN_10a1333cc();
  puVar6 = (undefined8 *)0x0;
  if (puVar5 != (undefined8 *)0x0) {
    uStack_7c = SUB84(param_2,0);
    uVar14 = param_1[2];
    param_2 = &uStack_78;
    puVar8 = (undefined8 *)0x1;
    uStack_70 = uVar14;
    FUN_10a3a7e2c();
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[4] = uVar14;
    *(undefined1 *)(param_2 + 5) = 0;
    puVar7 = param_2 + 6;
    *puVar7 = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[10] = uVar14;
    param_2[0xc] = 0;
    param_2[0xb] = 0;
    param_2[0xe] = 0;
    param_2[0xd] = 0;
    param_2[0xf] = 0;
    param_2[0x11] = uVar14;
    param_2[0x13] = 0;
    param_2[0x12] = 0;
    param_2[0x15] = 0;
    param_2[0x14] = 0;
    param_2[0x17] = uVar14;
    param_2[0x18] = 0;
    puVar6 = param_2;
    if (param_4 != (undefined8 *)0x0) {
      FUN_10a3a7f4c(param_2,param_4,param_5);
      puVar8 = param_4;
    }
    if (param_7 != 0) {
      *(undefined1 *)(param_2 + 5) = 1;
      puVar8 = *(undefined8 **)(param_7 + 0x10);
      if (puVar8 != (undefined8 *)0x0) {
        FUN_10a3a7f4c(puVar7,puVar8,*(undefined8 *)(param_7 + 0x18));
        puVar6 = puVar7;
      }
      param_6 = 0;
      uVar14 = *(undefined8 *)(param_7 + 8);
      param_2[0xb] = *(undefined8 *)(param_7 + 0x20);
      param_2[0xc] = uVar14;
    }
    *puVar5 = 0;
    puVar5[1] = param_2;
    puVar5[2] = param_3;
    *(undefined4 *)(puVar5 + 3) = param_6;
    *(short *)((long)puVar5 + 0x1c) = (short)uStack_7c;
    *(undefined2 *)((long)puVar5 + 0x1e) = 0x10;
    if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a3a7de4);
      (*pcVar4)();
    }
    param_1[0x18] = param_1[0x18] + 1;
  }
  while( true ) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
    if ((int)puVar8 == 0) break;
    ___cxa_begin_catch();
    ___cxa_end_catch();
  }
  __Unwind_Resume();
  pcStack_88 = FUN_10a3a7e2c;
  puVar9 = (ulong *)puVar6[1];
  lVar13 = (long)puVar8 * 200;
  uVar10 = puVar9[1] + lVar13;
  puStack_a0 = param_2;
  puStack_98 = param_1;
  puStack_90 = &stack0xfffffffffffffff0;
  if (uVar10 <= *puVar9) {
    puVar1 = puVar9 + 1;
    uVar12 = puVar9[1];
    do {
      uVar11 = *puVar1;
      if (uVar11 == uVar12) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar10;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') goto LAB_10a3a7ed0;
      }
      else {
        ClearExclusiveLocal();
      }
      uVar10 = uVar11 + lVar13;
      uVar12 = uVar11;
    } while (uVar10 <= *puVar9);
  }
  lStack_a8 = lVar13;
  func_0x0001098c692c(&lStack_a8);
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  puVar8 = (undefined8 *)PTR___ZTISt9bad_alloc_110346a68;
  ___cxa_throw();
LAB_10a3a7ed0:
  if (puVar8 < (undefined8 *)0x147ae147ae147af) {
    __Znwm(lVar13);
    return;
  }
  func_0x000109ffded8();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a3a7f38);
  (*pcVar4)();
}



/* Entry: 10a3a7e2c; end: 10a3a7f4b;  */

void FUN_10a3a7e2c(long param_1,undefined *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lStack_28;
  
  puVar5 = *(ulong **)(param_1 + 8);
  lVar9 = (long)param_2 * 200;
  uVar6 = puVar5[1] + lVar9;
  if (uVar6 <= *puVar5) {
    puVar1 = puVar5 + 1;
    uVar8 = puVar5[1];
    do {
      uVar7 = *puVar1;
      if (uVar7 == uVar8) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') goto LAB_10a3a7ed0;
      }
      else {
        ClearExclusiveLocal();
      }
      uVar6 = uVar7 + lVar9;
      uVar8 = uVar7;
    } while (uVar6 <= *puVar5);
  }
  lStack_28 = lVar9;
  func_0x0001098c692c(&lStack_28);
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  param_2 = PTR___ZTISt9bad_alloc_110346a68;
  ___cxa_throw();
LAB_10a3a7ed0:
  if (param_2 < (undefined *)0x147ae147ae147af) {
    __Znwm(lVar9);
    return;
  }
  func_0x000109ffded8();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a3a7f38);
  (*pcVar4)();
}



/* Entry: 10a3a7f4c; end: 10a3a8003;  */

undefined8 * FUN_10a3a7f4c(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  uVar3 = (ulong)*(char *)((long)param_1 + 0x17);
  if ((long)uVar3 < 0) {
    uVar1 = (param_1[2] & 0x7fffffffffffffff) - 1;
    if (param_3 <= uVar1) {
      uVar3 = (ulong)param_1[2] >> 0x38;
      puVar4 = (undefined8 *)*param_1;
      goto LAB_10a3a7fc0;
    }
    uVar3 = param_1[1];
  }
  else {
    puVar4 = param_1;
    if (param_3 < 0x17) {
LAB_10a3a7fc0:
      uVar2 = (uint)uVar3;
      if (param_3 != 0) {
        _memmove(puVar4,param_2,param_3);
        uVar2 = (uint)*(byte *)((long)param_1 + 0x17);
      }
      if ((uVar2 >> 7 & 1) == 0) {
        *(byte *)((long)param_1 + 0x17) = (byte)param_3 & 0x7f;
      }
      else {
        param_1[1] = param_3;
      }
      *(undefined1 *)((long)puVar4 + param_3) = 0;
      return param_1;
    }
    uVar1 = 0x16;
  }
  FUN_10a3a8004(param_1,uVar1,param_3 - uVar1,uVar3,0,uVar3,param_3);
  return param_1;
}



/* Entry: 10a3a8004; end: 10a3a815b;  */

void FUN_10a3a8004(long *param_1,ulong param_2,ulong param_3,long param_4,long param_5,long param_6,
                  long param_7,undefined8 param_8)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uStack_98;
  
  if (param_3 <= 0x7ffffffffffffff6 - param_2) {
    plVar11 = param_1;
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      plVar11 = (long *)*param_1;
    }
    uVar8 = param_3 + param_2;
    if (param_3 + param_2 <= param_2 * 2) {
      uVar8 = param_2 << 1;
    }
    uVar10 = 0x19;
    if ((uVar8 | 7) != 0x17) {
      uVar10 = (uVar8 | 7) + 1;
    }
    uVar9 = 0x17;
    if (0x16 < uVar8) {
      uVar9 = uVar10;
    }
    if (0x3ffffffffffffff2 < param_2) {
      uVar9 = 0x7ffffffffffffff7;
    }
    plVar5 = param_1 + 3;
    FUN_10a3a8170(plVar5,uVar9);
    if (param_5 != 0) {
      _memmove(plVar5,plVar11,param_5);
    }
    if (param_7 != 0) {
      _memmove((long)plVar5 + param_5,param_8,param_7);
    }
    param_4 = param_4 - (param_6 + param_5);
    if (param_4 != 0) {
      _memmove((long)plVar5 + param_7 + param_5,(long)plVar11 + param_6 + param_5,param_4);
    }
    if (param_2 + 1 != 0x17) {
      plVar1 = (long *)(param_1[4] + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 - (param_2 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      __ZdlPv(plVar11);
    }
    param_4 = param_7 + param_5 + param_4;
    *param_1 = (long)plVar5;
    param_1[1] = param_4;
    param_1[2] = uVar9 | 0x8000000000000000;
    *(undefined1 *)((long)plVar5 + param_4) = 0;
    return;
  }
  FUN_10a3a815c();
  puVar6 = &DAT_10f2fca96;
  FUN_109ffde64();
  puVar7 = *(ulong **)(puVar6 + 8);
  uVar8 = puVar7[1] + param_2;
  if (uVar8 <= *puVar7) {
    puVar2 = puVar7 + 1;
    uVar10 = puVar7[1];
    do {
      uVar9 = *puVar2;
      if (uVar9 == uVar10) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') goto LAB_10a3a8210;
      }
      else {
        ClearExclusiveLocal();
      }
      uVar8 = uVar9 + param_2;
      uVar10 = uVar9;
    } while (uVar8 <= *puVar7);
  }
  uStack_98 = param_2;
  func_0x0001098c692c(&uStack_98);
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_10a3a8210:
  __Znwm(param_2);
  return;
}



/* Entry: 10a3a815c; end: 10a3a816f;  */

void FUN_10a3a815c(undefined8 param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lStack_38;
  
  puVar4 = &DAT_10f2fca96;
  FUN_109ffde64();
  puVar5 = *(ulong **)(puVar4 + 8);
  uVar6 = puVar5[1] + param_2;
  if (uVar6 <= *puVar5) {
    puVar1 = puVar5 + 1;
    uVar8 = puVar5[1];
    do {
      uVar7 = *puVar1;
      if (uVar7 == uVar8) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') goto LAB_10a3a8210;
      }
      else {
        ClearExclusiveLocal();
      }
      uVar6 = uVar7 + param_2;
      uVar8 = uVar7;
    } while (uVar6 <= *puVar5);
  }
  lStack_38 = param_2;
  func_0x0001098c692c(&lStack_38);
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_10a3a8210:
  __Znwm(param_2);
  return;
}



/* Entry: 10a3a8170; end: 10a3a826b;  */

void FUN_10a3a8170(long param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lStack_28;
  
  puVar4 = *(ulong **)(param_1 + 8);
  uVar5 = puVar4[1] + param_2;
  if (uVar5 <= *puVar4) {
    puVar1 = puVar4 + 1;
    uVar7 = puVar4[1];
    do {
      uVar6 = *puVar1;
      if (uVar6 == uVar7) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') goto LAB_10a3a8210;
      }
      else {
        ClearExclusiveLocal();
      }
      uVar5 = uVar6 + param_2;
      uVar7 = uVar6;
    } while (uVar5 <= *puVar4);
  }
  lStack_28 = param_2;
  func_0x0001098c692c(&lStack_28);
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_10a3a8210:
  __Znwm(param_2);
  return;
}



/* Entry: 10a3a826c; end: 10a3a827f;  */

undefined1  [16] FUN_10a3a826c(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)puVar1 >> 0x3c == 0) {
    lVar2 = (long)puVar1 << 4;
    __Znwm(lVar2);
    auVar5._8_8_ = puVar1;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  func_0x000109ffded8();
  plVar3 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    lVar2 = param_2 << 4;
    __Znwm(lVar2);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar2;
    return auVar6;
  }
  func_0x000109ffded8();
  lVar2 = plVar3[1];
  lVar4 = plVar3[2];
  while (lVar4 != lVar2) {
    plVar3[2] = lVar4 + -0x10;
    FUN_10a3b772c();
    lVar4 = plVar3[2];
  }
  if (*plVar3 != 0) {
    __ZdlPv();
  }
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = plVar3;
  return auVar7;
}



/* Entry: 10a3a8280; end: 10a3a82b3;  */

undefined1  [16] FUN_10a3a8280(ulong param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_1 >> 0x3c == 0) {
    lVar1 = param_1 << 4;
    __Znwm(lVar1);
    auVar4._8_8_ = param_1;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  func_0x000109ffded8();
  plVar2 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 4;
    __Znwm(lVar1);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar1;
    return auVar5;
  }
  func_0x000109ffded8();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    plVar2[2] = lVar3 + -0x10;
    FUN_10a3b772c();
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = plVar2;
  return auVar6;
}



/* Entry: 10a3a82b4; end: 10a3a82c7;  */

undefined1  [16] FUN_10a3a82b4(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    lVar2 = param_2 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x10;
    FUN_10a3b772c();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 10a3a82c8; end: 10a3a8347;  */

undefined1  [16] FUN_10a3a82c8(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    FUN_10a3b772c();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10a3a8348; end: 10a3a835b;  */

void FUN_10a3a8348(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = &DAT_10f62a4d8;
  FUN_109ffde64();
  lVar1 = *(long *)(puVar2 + 8);
  while (lVar1 != param_2) {
    func_0x00010a3b7784(lVar1 + -0x10);
    func_0x00010a3b772c(lVar1 + -0x20);
    lVar1 = lVar1 + -0x20;
  }
  *(long *)(puVar2 + 8) = param_2;
  return;
}



/* Entry: 10a3a835c; end: 10a3a83b3;  */

void FUN_10a3a835c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    func_0x00010a3b7784(lVar1 + -0x10);
    func_0x00010a3b772c(lVar1 + -0x20);
    lVar1 = lVar1 + -0x20;
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10a3a83b4; end: 10a3a83ff;  */

long * FUN_10a3a83b4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    func_0x00010a3b7784();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a3a8400; end: 10a3a853f;  */

undefined1  [16] FUN_10a3a8400(long *param_1,long *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  long *plVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined *puStack_110;
  long **pplStack_108;
  long **pplStack_100;
  undefined1 uStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lVar9 = param_1[1] - *param_1;
  uVar1 = (lVar9 >> 6) + 1;
  if (uVar1 >> 0x3a == 0) {
    uVar7 = param_1[2] - *param_1;
    uVar8 = (long)uVar7 >> 5;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7fffffffffffffbf < uVar7) {
      uVar8 = 0x3ffffffffffffff;
    }
    plStack_48 = param_1;
    if (uVar8 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_10a3a8554();
    }
    plVar6 = (long *)((long)plVar2 + lVar9);
    plVar10 = plVar6 + 8;
    *plVar6 = *param_2;
    plVar11 = param_2 + 1;
    plStack_68 = plVar2;
    plStack_60 = plVar6;
    plStack_50 = plVar2 + uVar8 * 8;
    (**(code **)(*plVar11 + 0x10))(plVar6 + 1,plVar11);
    *param_2 = (long)&UNK_1053a6a3c;
    (**(code **)*plVar11)(plVar11);
    *plVar11 = (long)&PTR_DAT_110ae9180;
    lVar5 = *param_1;
    lVar9 = (long)plVar6 + (lVar5 - param_1[1]);
    plStack_58 = plVar10;
    FUN_10a3a8588(param_1,lVar5,param_1[1],lVar9);
    plStack_68 = (long *)*param_1;
    *param_1 = lVar9;
    param_1[1] = (long)plVar10;
    plStack_50 = (long *)param_1[2];
    param_1[2] = (long)(plVar2 + uVar8 * 8);
    plStack_60 = plStack_68;
    plStack_58 = plStack_68;
    func_0x00010a3a8704(&plStack_68);
    auVar12._8_8_ = lVar5;
    auVar12._0_8_ = plVar10;
    return auVar12;
  }
  FUN_10a3a8540();
  func_0x00010a3a8704(&plStack_68);
  __Unwind_Resume(param_1);
  puVar3 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)param_2 >> 0x3a != 0) {
    func_0x000109ffded8();
    ppuVar4 = &puStack_110;
    pplStack_108 = &plStack_f0;
    pplStack_100 = &plStack_e8;
    plVar2 = param_2;
    puStack_110 = puVar3;
    plStack_f0 = param_4;
    if (param_2 == param_3) {
      uStack_f8 = 1;
      plVar6 = param_2;
      plStack_e8 = param_4;
    }
    else {
      do {
        *param_4 = *plVar2;
        plVar10 = plVar2 + 1;
        plVar6 = plVar10;
        plStack_e8 = param_4;
        (**(code **)(*plVar10 + 0x10))(param_4 + 1,plVar10);
        plVar11 = plVar2 + 8;
        *plVar2 = (long)&UNK_1053a6a3c;
        (**(code **)*plVar10)(plVar10);
        *plVar10 = (long)&PTR_DAT_110ae9180;
        param_4 = plStack_e8 + 8;
        plVar2 = plVar11;
      } while (plVar11 != param_3);
      uStack_f8 = 1;
      plStack_e8 = param_4;
      do {
        FUN_10a044790(param_2);
        (**(code **)param_2[1])(param_2 + 1);
        param_2 = param_2 + 8;
      } while (param_2 != param_3);
    }
    FUN_10a3a867c(&puStack_110);
    auVar14._8_8_ = plVar6;
    auVar14._0_8_ = ppuVar4;
    return auVar14;
  }
  lVar9 = (long)param_2 << 6;
  __Znwm(lVar9);
  auVar13._8_8_ = param_2;
  auVar13._0_8_ = lVar9;
  return auVar13;
}



/* Entry: 10a3a8540; end: 10a3a8553;  */

void FUN_10a3a8540(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puStack_a0;
  undefined8 **ppuStack_98;
  undefined8 **ppuStack_90;
  undefined1 uStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)param_2 >> 0x3a != 0) {
    func_0x000109ffded8();
    ppuStack_98 = &puStack_80;
    ppuStack_90 = &puStack_78;
    puVar3 = param_2;
    puStack_a0 = puVar1;
    puStack_80 = param_4;
    if (param_2 == param_3) {
      uStack_88 = 1;
      puStack_78 = param_4;
    }
    else {
      do {
        *param_4 = *puVar3;
        plVar2 = puVar3 + 1;
        puStack_78 = param_4;
        (**(code **)(*plVar2 + 0x10))(param_4 + 1,plVar2);
        puVar4 = puVar3 + 8;
        *puVar3 = &UNK_1053a6a3c;
        (**(code **)*plVar2)(plVar2);
        *plVar2 = (long)&PTR_DAT_110ae9180;
        param_4 = puStack_78 + 8;
        puVar3 = puVar4;
      } while (puVar4 != param_3);
      uStack_88 = 1;
      puStack_78 = param_4;
      do {
        FUN_10a044790(param_2);
        (**(code **)param_2[1])(param_2 + 1);
        param_2 = param_2 + 8;
      } while (param_2 != param_3);
    }
    FUN_10a3a867c(&puStack_a0);
    return;
  }
  __Znwm((long)param_2 << 6);
  return;
}



/* Entry: 10a3a8554; end: 10a3a8587;  */

void FUN_10a3a8554(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_90;
  undefined8 **ppuStack_88;
  undefined8 **ppuStack_80;
  undefined1 uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  if ((ulong)param_2 >> 0x3a != 0) {
    func_0x000109ffded8();
    ppuStack_88 = &puStack_70;
    ppuStack_80 = &puStack_68;
    puVar2 = param_2;
    uStack_90 = param_1;
    puStack_70 = param_4;
    if (param_2 == param_3) {
      uStack_78 = 1;
      puStack_68 = param_4;
    }
    else {
      do {
        *param_4 = *puVar2;
        plVar1 = puVar2 + 1;
        puStack_68 = param_4;
        (**(code **)(*plVar1 + 0x10))(param_4 + 1,plVar1);
        puVar3 = puVar2 + 8;
        *puVar2 = &UNK_1053a6a3c;
        (**(code **)*plVar1)(plVar1);
        *plVar1 = (long)&PTR_DAT_110ae9180;
        param_4 = puStack_68 + 8;
        puVar2 = puVar3;
      } while (puVar3 != param_3);
      uStack_78 = 1;
      puStack_68 = param_4;
      do {
        FUN_10a044790(param_2);
        (**(code **)param_2[1])(param_2 + 1);
        param_2 = param_2 + 8;
      } while (param_2 != param_3);
    }
    FUN_10a3a867c(&uStack_90);
    return;
  }
  __Znwm((long)param_2 << 6);
  return;
}



/* Entry: 10a3a8588; end: 10a3a867b;  */

void FUN_10a3a8588(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  ppuStack_68 = &puStack_50;
  ppuStack_60 = &puStack_48;
  puVar2 = param_2;
  uStack_70 = param_1;
  puStack_50 = param_4;
  if (param_2 == param_3) {
    uStack_58 = 1;
    puStack_48 = param_4;
  }
  else {
    do {
      *param_4 = *puVar2;
      plVar1 = puVar2 + 1;
      puStack_48 = param_4;
      (**(code **)(*plVar1 + 0x10))(param_4 + 1,plVar1);
      puVar3 = puVar2 + 8;
      *puVar2 = &UNK_1053a6a3c;
      (**(code **)*plVar1)(plVar1);
      *plVar1 = (long)&PTR_DAT_110ae9180;
      param_4 = puStack_48 + 8;
      puVar2 = puVar3;
    } while (puVar3 != param_3);
    uStack_58 = 1;
    puStack_48 = param_4;
    do {
      FUN_10a044790(param_2);
      (**(code **)param_2[1])(param_2 + 1);
      param_2 = param_2 + 8;
    } while (param_2 != param_3);
  }
  FUN_10a3a867c(&uStack_70);
  return;
}



/* Entry: 10a3a867c; end: 10a3a86af;  */

long FUN_10a3a867c(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10a3a86b0(param_1);
  }
  return param_1;
}



/* Entry: 10a3a86b0; end: 10a3a8737;  */

void FUN_10a3a86b0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = **(long **)(param_1 + 8);
  lVar1 = **(long **)(param_1 + 0x10);
  while (lVar1 != lVar2) {
    FUN_10a044790(lVar1 + -0x40);
    (*(code *)**(undefined8 **)(lVar1 + -0x38))();
    lVar1 = lVar1 + -0x40;
  }
  return;
}



/* Entry: 10a3a8738; end: 10a3a8793;  */

void FUN_10a3a8738(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != param_2) {
    *(long *)(param_1 + 0x10) = lVar1 + -0x40;
    FUN_10a044790();
    (*(code *)**(undefined8 **)(lVar1 + -0x38))((undefined8 *)(lVar1 + -0x38));
    lVar1 = *(long *)(param_1 + 0x10);
  }
  return;
}



/* Entry: 10a3a8794; end: 10a3a87a7;  */

void FUN_10a3a8794(undefined8 param_1,long *param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  
  plVar7 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)plVar7 >> 0x3d == 0) {
    __Znwm((long)plVar7 << 3);
    return;
  }
  func_0x000109ffded8();
LAB_10a3a8808:
  do {
    plVar20 = plVar7;
    uVar10 = (long)param_2 - (long)plVar20 >> 3;
    if (uVar10 - 2 == 0 || (long)uVar10 < 2) {
      if (uVar10 < 2) {
        return;
      }
      if (uVar10 == 2) {
        lVar12 = *plVar20;
        if (*(int *)(param_2[-1] + 0x54) <= *(int *)(lVar12 + 0x54)) {
          return;
        }
        *plVar20 = param_2[-1];
        param_2[-1] = lVar12;
        return;
      }
    }
    else {
      if (uVar10 == 3) {
        lVar12 = *plVar20;
        lVar11 = plVar20[1];
        iVar3 = *(int *)(lVar11 + 0x54);
        iVar4 = *(int *)(lVar12 + 0x54);
        lVar15 = param_2[-1];
        if (iVar4 < iVar3) {
          if (iVar3 < *(int *)(lVar15 + 0x54)) {
            *plVar20 = lVar15;
          }
          else {
            *plVar20 = lVar11;
            plVar20[1] = lVar12;
            if (*(int *)(param_2[-1] + 0x54) <= iVar4) {
              return;
            }
            plVar20[1] = param_2[-1];
          }
          param_2[-1] = lVar12;
          return;
        }
        if (*(int *)(lVar15 + 0x54) <= iVar3) {
          return;
        }
        plVar20[1] = lVar15;
        param_2[-1] = lVar11;
        lVar12 = *plVar20;
        if (*(int *)(plVar20[1] + 0x54) <= *(int *)(lVar12 + 0x54)) {
          return;
        }
        *plVar20 = plVar20[1];
        plVar20[1] = lVar12;
        return;
      }
      if (uVar10 == 4) {
        lVar12 = *plVar20;
        lVar11 = plVar20[1];
        iVar3 = *(int *)(lVar11 + 0x54);
        iVar4 = *(int *)(lVar12 + 0x54);
        lVar14 = plVar20[2];
        iVar5 = *(int *)(lVar14 + 0x54);
        lVar15 = lVar14;
        if (iVar4 < iVar3) {
          if (iVar3 < iVar5) {
            *plVar20 = lVar14;
          }
          else {
            *plVar20 = lVar11;
            plVar20[1] = lVar12;
            if (iVar5 <= iVar4) goto LAB_10a3a914c;
            plVar20[1] = lVar14;
          }
          plVar20[2] = lVar12;
          lVar15 = lVar12;
        }
        else if (iVar3 < iVar5) {
          plVar20[1] = lVar14;
          plVar20[2] = lVar11;
          lVar15 = lVar11;
          if (iVar4 < iVar5) {
            *plVar20 = lVar14;
            plVar20[1] = lVar12;
          }
        }
LAB_10a3a914c:
        if (*(int *)(param_2[-1] + 0x54) <= *(int *)(lVar15 + 0x54)) {
          return;
        }
        plVar20[2] = param_2[-1];
        param_2[-1] = lVar15;
        lVar12 = plVar20[1];
        lVar11 = plVar20[2];
        iVar3 = *(int *)(lVar11 + 0x54);
        if (iVar3 <= *(int *)(lVar12 + 0x54)) {
          return;
        }
        plVar20[1] = lVar11;
        plVar20[2] = lVar12;
        lVar12 = *plVar20;
        if (iVar3 <= *(int *)(lVar12 + 0x54)) {
          return;
        }
        *plVar20 = lVar11;
        plVar20[1] = lVar12;
        return;
      }
      if (uVar10 == 5) {
        plVar7 = plVar20 + 1;
        plVar8 = plVar20 + 2;
        plVar9 = plVar20 + 3;
        lVar11 = *plVar7;
        iVar3 = *(int *)(lVar11 + 0x54);
        lVar15 = *plVar20;
        iVar4 = *(int *)(lVar15 + 0x54);
        lVar12 = *plVar8;
        if (iVar4 < iVar3) {
          if (iVar3 < *(int *)(lVar12 + 0x54)) {
            *plVar20 = lVar12;
          }
          else {
            *plVar20 = lVar11;
            *plVar7 = lVar15;
            lVar12 = *plVar8;
            if (*(int *)(lVar12 + 0x54) <= iVar4) goto LAB_10a3a9240;
            *plVar7 = lVar12;
          }
          *plVar8 = lVar15;
          lVar12 = lVar15;
        }
        else if (iVar3 < *(int *)(lVar12 + 0x54)) {
          *plVar7 = lVar12;
          *plVar8 = lVar11;
          lVar15 = *plVar20;
          lVar12 = lVar11;
          if (*(int *)(lVar15 + 0x54) < *(int *)(*plVar7 + 0x54)) {
            *plVar20 = *plVar7;
            *plVar7 = lVar15;
            lVar12 = *plVar8;
          }
        }
LAB_10a3a9240:
        if (*(int *)(lVar12 + 0x54) < *(int *)(*plVar9 + 0x54)) {
          *plVar8 = *plVar9;
          *plVar9 = lVar12;
          lVar12 = *plVar7;
          if (*(int *)(lVar12 + 0x54) < *(int *)(*plVar8 + 0x54)) {
            *plVar7 = *plVar8;
            *plVar8 = lVar12;
            lVar12 = *plVar20;
            if (*(int *)(lVar12 + 0x54) < *(int *)(*plVar7 + 0x54)) {
              *plVar20 = *plVar7;
              *plVar7 = lVar12;
            }
          }
        }
        lVar12 = param_2[-1];
        lVar11 = *plVar9;
        if (*(int *)(lVar11 + 0x54) < *(int *)(lVar12 + 0x54)) {
          *plVar9 = lVar12;
          param_2[-1] = lVar11;
          lVar12 = *plVar8;
          if (*(int *)(lVar12 + 0x54) < *(int *)(*plVar9 + 0x54)) {
            *plVar8 = *plVar9;
            *plVar9 = lVar12;
            lVar12 = *plVar7;
            if (*(int *)(lVar12 + 0x54) < *(int *)(*plVar8 + 0x54)) {
              *plVar7 = *plVar8;
              *plVar8 = lVar12;
              lVar12 = *plVar20;
              if (*(int *)(lVar12 + 0x54) < *(int *)(*plVar7 + 0x54)) {
                *plVar20 = *plVar7;
                *plVar7 = lVar12;
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar10 < 0x18) {
      plVar7 = plVar20 + 1;
      if ((param_4 & 1) == 0) {
        if (plVar20 == param_2 || plVar7 == param_2) {
          return;
        }
        lVar12 = 0;
        lVar11 = 8;
        do {
          lVar14 = *(long *)((long)plVar20 + lVar12);
          lVar15 = *plVar7;
          iVar3 = *(int *)(lVar15 + 0x54);
          lVar12 = lVar11;
          if (*(int *)(lVar14 + 0x54) < iVar3) {
            do {
              *(long *)((long)plVar20 + lVar12) = lVar14;
              if (lVar12 == 0) goto LAB_10a3a9108;
              lVar14 = ((long *)((long)plVar20 + lVar12))[-2];
              lVar12 = lVar12 + -8;
            } while (*(int *)(lVar14 + 0x54) < iVar3);
            *(long *)((long)plVar20 + lVar12) = lVar15;
          }
          plVar7 = (long *)((long)plVar20 + lVar11 + 8);
          lVar12 = lVar11;
          lVar11 = lVar11 + 8;
          if (plVar7 == param_2) {
            return;
          }
        } while( true );
      }
      if (plVar20 == param_2 || plVar7 == param_2) {
        return;
      }
      lVar12 = 0;
      plVar8 = plVar20;
      do {
        plVar9 = plVar7;
        lVar11 = *plVar8;
        lVar15 = plVar8[1];
        iVar3 = *(int *)(lVar15 + 0x54);
        lVar14 = lVar12;
        if (*(int *)(lVar11 + 0x54) < iVar3) {
          do {
            lVar18 = lVar14;
            *(long *)((long)plVar20 + lVar18 + 8) = lVar11;
            plVar7 = plVar20;
            if (lVar18 == 0) goto LAB_10a3a8e54;
            lVar11 = *(long *)((long)plVar20 + lVar18 + -8);
            lVar14 = lVar18 + -8;
          } while (*(int *)(lVar11 + 0x54) < iVar3);
          plVar7 = (long *)((long)plVar20 + lVar18);
LAB_10a3a8e54:
          *plVar7 = lVar15;
        }
        plVar7 = plVar9 + 1;
        lVar12 = lVar12 + 8;
        plVar8 = plVar9;
        if (plVar7 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (plVar20 == param_2) {
        return;
      }
      uVar13 = uVar10 - 2 >> 1;
      uVar19 = uVar13;
      do {
        if ((long)uVar19 <= (long)uVar13) {
          uVar1 = uVar19 << 1 | 1;
          plVar7 = plVar20 + uVar1;
          uVar16 = uVar19 * 2 + 2;
          if ((long)uVar16 < (long)uVar10) {
            lVar12 = plVar7[1];
            plVar8 = plVar7 + 1;
            if (*(int *)(*plVar7 + 0x54) <= *(int *)(lVar12 + 0x54)) {
              plVar8 = plVar7;
              uVar16 = uVar1;
              lVar12 = *plVar7;
            }
          }
          else {
            plVar8 = plVar7;
            uVar16 = uVar1;
            lVar12 = *plVar7;
          }
          lVar11 = plVar20[uVar19];
          iVar3 = *(int *)(lVar11 + 0x54);
          plVar7 = plVar20 + uVar19;
          if (*(int *)(lVar12 + 0x54) <= iVar3) {
            do {
              plVar9 = plVar8;
              *plVar7 = lVar12;
              if ((long)uVar13 < (long)uVar16) break;
              uVar1 = uVar16 << 1 | 1;
              plVar7 = plVar20 + uVar1;
              uVar16 = uVar16 * 2 + 2;
              if ((long)uVar16 < (long)uVar10) {
                lVar12 = plVar7[1];
                plVar8 = plVar7 + 1;
                if (*(int *)(*plVar7 + 0x54) <= *(int *)(lVar12 + 0x54)) {
                  plVar8 = plVar7;
                  uVar16 = uVar1;
                  lVar12 = *plVar7;
                }
              }
              else {
                plVar8 = plVar7;
                uVar16 = uVar1;
                lVar12 = *plVar7;
              }
              plVar7 = plVar9;
            } while (*(int *)(lVar12 + 0x54) <= iVar3);
            *plVar9 = lVar11;
          }
        }
        bVar2 = uVar19 != 0;
        uVar19 = uVar19 - 1;
      } while (bVar2);
      do {
        uVar19 = 0;
        lVar12 = *plVar20;
        plVar7 = plVar20;
        do {
          plVar8 = plVar7 + uVar19 + 1;
          uVar16 = uVar19 << 1 | 1;
          uVar13 = uVar19 * 2 + 2;
          if ((long)uVar13 < (long)uVar10) {
            lVar11 = plVar7[uVar19 + 2];
            lVar15 = uVar19 + 1;
            plVar9 = plVar7 + uVar19 + 2;
            uVar19 = uVar13;
            if (*(int *)(plVar7[lVar15] + 0x54) <= *(int *)(lVar11 + 0x54)) {
              plVar9 = plVar8;
              uVar19 = uVar16;
              lVar11 = plVar7[lVar15];
            }
          }
          else {
            plVar9 = plVar8;
            uVar19 = uVar16;
            lVar11 = *plVar8;
          }
          *plVar7 = lVar11;
          plVar7 = plVar9;
        } while ((long)uVar19 <= (long)(uVar10 - 2 >> 1));
        param_2 = param_2 + -1;
        if (plVar9 == param_2) {
          *plVar9 = lVar12;
        }
        else {
          *plVar9 = *param_2;
          *param_2 = lVar12;
          lVar12 = (long)((long)plVar9 + (8 - (long)plVar20)) >> 3;
          if (1 < lVar12) {
            uVar19 = lVar12 - 2U >> 1;
            lVar11 = plVar20[uVar19];
            lVar12 = *plVar9;
            iVar3 = *(int *)(lVar12 + 0x54);
            plVar7 = plVar20 + uVar19;
            if (iVar3 < *(int *)(lVar11 + 0x54)) {
              do {
                plVar8 = plVar7;
                *plVar9 = lVar11;
                if (uVar19 == 0) break;
                uVar19 = uVar19 - 1 >> 1;
                lVar11 = plVar20[uVar19];
                plVar9 = plVar8;
                plVar7 = plVar20 + uVar19;
              } while (iVar3 < *(int *)(lVar11 + 0x54));
              *plVar8 = lVar12;
            }
          }
        }
        bVar2 = (long)uVar10 < 3;
        uVar10 = uVar10 - 1;
        if (bVar2) {
          return;
        }
      } while( true );
    }
    plVar7 = plVar20 + (uVar10 >> 1);
    lVar12 = param_2[-1];
    iVar3 = *(int *)(lVar12 + 0x54);
    if (uVar10 < 0x81) {
      lVar15 = *plVar20;
      iVar4 = *(int *)(lVar15 + 0x54);
      lVar11 = *plVar7;
      iVar5 = *(int *)(lVar11 + 0x54);
      if (iVar5 < iVar4) {
        if (iVar4 < iVar3) {
          *plVar7 = lVar12;
        }
        else {
          *plVar7 = lVar15;
          *plVar20 = lVar11;
          if (*(int *)(param_2[-1] + 0x54) <= iVar5) goto LAB_10a3a8ae0;
          *plVar20 = param_2[-1];
        }
        param_2[-1] = lVar11;
      }
      else if (iVar4 < iVar3) {
        *plVar20 = lVar12;
        param_2[-1] = lVar15;
        lVar12 = *plVar7;
        if (*(int *)(lVar12 + 0x54) < *(int *)(*plVar20 + 0x54)) {
          *plVar7 = *plVar20;
          *plVar20 = lVar12;
        }
      }
    }
    else {
      lVar15 = *plVar7;
      iVar4 = *(int *)(lVar15 + 0x54);
      lVar11 = *plVar20;
      iVar5 = *(int *)(lVar11 + 0x54);
      if (iVar5 < iVar4) {
        if (iVar4 < iVar3) {
          *plVar20 = lVar12;
        }
        else {
          *plVar20 = lVar15;
          *plVar7 = lVar11;
          if (*(int *)(param_2[-1] + 0x54) <= iVar5) goto LAB_10a3a8940;
          *plVar7 = param_2[-1];
        }
        param_2[-1] = lVar11;
      }
      else if (iVar4 < iVar3) {
        *plVar7 = lVar12;
        param_2[-1] = lVar15;
        lVar12 = *plVar20;
        if (*(int *)(lVar12 + 0x54) < *(int *)(*plVar7 + 0x54)) {
          *plVar20 = *plVar7;
          *plVar7 = lVar12;
        }
      }
LAB_10a3a8940:
      lVar11 = plVar7[-1];
      iVar3 = *(int *)(lVar11 + 0x54);
      lVar12 = plVar20[1];
      iVar4 = *(int *)(lVar12 + 0x54);
      lVar15 = param_2[-2];
      if (iVar4 < iVar3) {
        if (iVar3 < *(int *)(lVar15 + 0x54)) {
          plVar20[1] = lVar15;
        }
        else {
          plVar20[1] = lVar11;
          plVar7[-1] = lVar12;
          if (*(int *)(param_2[-2] + 0x54) <= iVar4) goto LAB_10a3a89e8;
          plVar7[-1] = param_2[-2];
        }
        param_2[-2] = lVar12;
      }
      else if (iVar3 < *(int *)(lVar15 + 0x54)) {
        plVar7[-1] = lVar15;
        param_2[-2] = lVar11;
        lVar12 = plVar20[1];
        if (*(int *)(lVar12 + 0x54) < *(int *)(plVar7[-1] + 0x54)) {
          plVar20[1] = plVar7[-1];
          plVar7[-1] = lVar12;
        }
      }
LAB_10a3a89e8:
      lVar11 = plVar7[1];
      iVar3 = *(int *)(lVar11 + 0x54);
      lVar12 = plVar20[2];
      iVar4 = *(int *)(lVar12 + 0x54);
      lVar15 = param_2[-3];
      if (iVar4 < iVar3) {
        if (iVar3 < *(int *)(lVar15 + 0x54)) {
          plVar20[2] = lVar15;
        }
        else {
          plVar20[2] = lVar11;
          plVar7[1] = lVar12;
          if (*(int *)(param_2[-3] + 0x54) <= iVar4) goto LAB_10a3a8a6c;
          plVar7[1] = param_2[-3];
        }
        param_2[-3] = lVar12;
      }
      else if (iVar3 < *(int *)(lVar15 + 0x54)) {
        plVar7[1] = lVar15;
        param_2[-3] = lVar11;
        lVar12 = plVar20[2];
        if (*(int *)(lVar12 + 0x54) < *(int *)(plVar7[1] + 0x54)) {
          plVar20[2] = plVar7[1];
          plVar7[1] = lVar12;
        }
      }
LAB_10a3a8a6c:
      lVar12 = plVar7[-1];
      lVar11 = *plVar7;
      iVar3 = *(int *)(lVar11 + 0x54);
      iVar4 = *(int *)(lVar12 + 0x54);
      lVar15 = plVar7[1];
      iVar5 = *(int *)(lVar15 + 0x54);
      if (iVar4 < iVar3) {
        if (iVar3 < iVar5) {
          plVar7[-1] = lVar15;
          plVar7[1] = lVar12;
        }
        else {
          plVar7[-1] = lVar11;
          *plVar7 = lVar12;
          lVar11 = lVar12;
          if (iVar4 < iVar5) {
            *plVar7 = lVar15;
            plVar7[1] = lVar12;
            lVar11 = lVar15;
          }
        }
      }
      else if (iVar3 < iVar5) {
        *plVar7 = lVar15;
        plVar7[1] = lVar11;
        lVar11 = lVar15;
        if (iVar4 < iVar5) {
          plVar7[-1] = lVar15;
          *plVar7 = lVar12;
          lVar11 = lVar12;
        }
      }
      lVar12 = *plVar20;
      *plVar20 = lVar11;
      *plVar7 = lVar12;
    }
LAB_10a3a8ae0:
    param_3 = param_3 + -1;
    lVar12 = *plVar20;
    plVar7 = plVar20;
    if (((param_4 & 1) == 0) &&
       (iVar3 = *(int *)(lVar12 + 0x54), *(int *)(plVar20[-1] + 0x54) <= iVar3)) {
      if (*(int *)(param_2[-1] + 0x54) < iVar3) {
        do {
          plVar7 = plVar7 + 1;
          if (plVar7 == param_2) goto LAB_10a3a9108;
        } while (iVar3 <= *(int *)(*plVar7 + 0x54));
      }
      else {
        do {
          plVar7 = plVar7 + 1;
          if (param_2 <= plVar7) break;
        } while (iVar3 <= *(int *)(*plVar7 + 0x54));
      }
      plVar8 = param_2;
      if (plVar7 < param_2) {
        do {
          if (plVar8 == plVar20) {
LAB_10a3a9108:
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10a3a910c);
            (*pcVar6)();
          }
          plVar8 = plVar8 + -1;
        } while (*(int *)(*plVar8 + 0x54) < iVar3);
      }
      if (plVar7 < plVar8) {
        lVar11 = *plVar7;
        lVar15 = *plVar8;
        do {
          *plVar7 = lVar15;
          *plVar8 = lVar11;
          do {
            plVar7 = plVar7 + 1;
            if (plVar7 == param_2) goto LAB_10a3a9108;
            lVar11 = *plVar7;
          } while (iVar3 <= *(int *)(lVar11 + 0x54));
          do {
            if (plVar8 == plVar20) goto LAB_10a3a9108;
            plVar8 = plVar8 + -1;
            lVar15 = *plVar8;
          } while (*(int *)(lVar15 + 0x54) < iVar3);
        } while (plVar7 < plVar8);
      }
      plVar8 = plVar7 + -1;
      if (plVar8 != plVar20) {
        *plVar20 = *plVar8;
      }
      param_4 = 0;
      *plVar8 = lVar12;
      goto LAB_10a3a8808;
    }
    lVar11 = 0;
    do {
      plVar7 = (long *)((long)plVar20 + lVar11 + 8);
      if (plVar7 == param_2) goto LAB_10a3a9108;
      lVar15 = *plVar7;
      iVar3 = *(int *)(lVar12 + 0x54);
      lVar11 = lVar11 + 8;
    } while (iVar3 < *(int *)(lVar15 + 0x54));
    plVar8 = (long *)((long)plVar20 + lVar11);
    plVar9 = param_2;
    if (lVar11 == 8) {
      do {
        if (plVar9 <= plVar8) break;
        plVar9 = plVar9 + -1;
      } while (*(int *)(*plVar9 + 0x54) <= iVar3);
    }
    else {
      do {
        if (plVar9 == plVar20) goto LAB_10a3a9108;
        plVar9 = plVar9 + -1;
      } while (*(int *)(*plVar9 + 0x54) <= iVar3);
    }
    plVar7 = plVar8;
    if (plVar8 < plVar9) {
      lVar11 = *plVar9;
      plVar17 = plVar9;
      do {
        *plVar7 = lVar11;
        *plVar17 = lVar15;
        do {
          plVar7 = plVar7 + 1;
          if (plVar7 == param_2) goto LAB_10a3a9108;
          lVar15 = *plVar7;
        } while (iVar3 < *(int *)(lVar15 + 0x54));
        do {
          if (plVar17 == plVar20) goto LAB_10a3a9108;
          plVar17 = plVar17 + -1;
          lVar11 = *plVar17;
        } while (*(int *)(lVar11 + 0x54) <= iVar3);
      } while (plVar7 < plVar17);
    }
    plVar17 = plVar7 + -1;
    if (plVar17 != plVar20) {
      *plVar20 = *plVar17;
    }
    *plVar17 = lVar12;
    if (plVar8 < plVar9) {
LAB_10a3a8c20:
      FUN_10a3a87dc(plVar20,plVar17,param_3,(uint)param_4 & 1);
      param_4 = 0;
    }
    else {
      plVar8 = plVar20;
      FUN_10a3a9320(plVar20,plVar17);
      plVar9 = plVar7;
      FUN_10a3a9320(plVar7,param_2);
      if ((int)plVar9 == 0) {
        if (((ulong)plVar8 & 1) == 0) goto LAB_10a3a8c20;
      }
      else {
        plVar7 = plVar20;
        param_2 = plVar17;
        if (((ulong)plVar8 & 1) != 0) {
          return;
        }
      }
    }
  } while( true );
}



/* Entry: 10a3a87a8; end: 10a3a87db;  */

void FUN_10a3a87a8(long *param_1,long *param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  
  if ((ulong)param_1 >> 0x3d == 0) {
    __Znwm((long)param_1 << 3);
    return;
  }
  func_0x000109ffded8();
LAB_10a3a8808:
  do {
    plVar19 = param_1;
    uVar9 = (long)param_2 - (long)plVar19 >> 3;
    if (uVar9 - 2 == 0 || (long)uVar9 < 2) {
      if (uVar9 < 2) {
        return;
      }
      if (uVar9 == 2) {
        lVar11 = *plVar19;
        if (*(int *)(param_2[-1] + 0x54) <= *(int *)(lVar11 + 0x54)) {
          return;
        }
        *plVar19 = param_2[-1];
        param_2[-1] = lVar11;
        return;
      }
    }
    else {
      if (uVar9 == 3) {
        lVar11 = *plVar19;
        lVar10 = plVar19[1];
        iVar3 = *(int *)(lVar10 + 0x54);
        iVar4 = *(int *)(lVar11 + 0x54);
        lVar15 = param_2[-1];
        if (iVar4 < iVar3) {
          if (iVar3 < *(int *)(lVar15 + 0x54)) {
            *plVar19 = lVar15;
          }
          else {
            *plVar19 = lVar10;
            plVar19[1] = lVar11;
            if (*(int *)(param_2[-1] + 0x54) <= iVar4) {
              return;
            }
            plVar19[1] = param_2[-1];
          }
          param_2[-1] = lVar11;
          return;
        }
        if (*(int *)(lVar15 + 0x54) <= iVar3) {
          return;
        }
        plVar19[1] = lVar15;
        param_2[-1] = lVar10;
        lVar11 = *plVar19;
        if (*(int *)(plVar19[1] + 0x54) <= *(int *)(lVar11 + 0x54)) {
          return;
        }
        *plVar19 = plVar19[1];
        plVar19[1] = lVar11;
        return;
      }
      if (uVar9 == 4) {
        lVar11 = *plVar19;
        lVar10 = plVar19[1];
        iVar3 = *(int *)(lVar10 + 0x54);
        iVar4 = *(int *)(lVar11 + 0x54);
        lVar14 = plVar19[2];
        iVar5 = *(int *)(lVar14 + 0x54);
        lVar15 = lVar14;
        if (iVar4 < iVar3) {
          if (iVar3 < iVar5) {
            *plVar19 = lVar14;
          }
          else {
            *plVar19 = lVar10;
            plVar19[1] = lVar11;
            if (iVar5 <= iVar4) goto LAB_10a3a914c;
            plVar19[1] = lVar14;
          }
          plVar19[2] = lVar11;
          lVar15 = lVar11;
        }
        else if (iVar3 < iVar5) {
          plVar19[1] = lVar14;
          plVar19[2] = lVar10;
          lVar15 = lVar10;
          if (iVar4 < iVar5) {
            *plVar19 = lVar14;
            plVar19[1] = lVar11;
          }
        }
LAB_10a3a914c:
        if (*(int *)(param_2[-1] + 0x54) <= *(int *)(lVar15 + 0x54)) {
          return;
        }
        plVar19[2] = param_2[-1];
        param_2[-1] = lVar15;
        lVar11 = plVar19[1];
        lVar10 = plVar19[2];
        iVar3 = *(int *)(lVar10 + 0x54);
        if (iVar3 <= *(int *)(lVar11 + 0x54)) {
          return;
        }
        plVar19[1] = lVar10;
        plVar19[2] = lVar11;
        lVar11 = *plVar19;
        if (iVar3 <= *(int *)(lVar11 + 0x54)) {
          return;
        }
        *plVar19 = lVar10;
        plVar19[1] = lVar11;
        return;
      }
      if (uVar9 == 5) {
        plVar7 = plVar19 + 1;
        plVar8 = plVar19 + 2;
        plVar13 = plVar19 + 3;
        lVar10 = *plVar7;
        iVar3 = *(int *)(lVar10 + 0x54);
        lVar15 = *plVar19;
        iVar4 = *(int *)(lVar15 + 0x54);
        lVar11 = *plVar8;
        if (iVar4 < iVar3) {
          if (iVar3 < *(int *)(lVar11 + 0x54)) {
            *plVar19 = lVar11;
          }
          else {
            *plVar19 = lVar10;
            *plVar7 = lVar15;
            lVar11 = *plVar8;
            if (*(int *)(lVar11 + 0x54) <= iVar4) goto LAB_10a3a9240;
            *plVar7 = lVar11;
          }
          *plVar8 = lVar15;
          lVar11 = lVar15;
        }
        else if (iVar3 < *(int *)(lVar11 + 0x54)) {
          *plVar7 = lVar11;
          *plVar8 = lVar10;
          lVar15 = *plVar19;
          lVar11 = lVar10;
          if (*(int *)(lVar15 + 0x54) < *(int *)(*plVar7 + 0x54)) {
            *plVar19 = *plVar7;
            *plVar7 = lVar15;
            lVar11 = *plVar8;
          }
        }
LAB_10a3a9240:
        if (*(int *)(lVar11 + 0x54) < *(int *)(*plVar13 + 0x54)) {
          *plVar8 = *plVar13;
          *plVar13 = lVar11;
          lVar11 = *plVar7;
          if (*(int *)(lVar11 + 0x54) < *(int *)(*plVar8 + 0x54)) {
            *plVar7 = *plVar8;
            *plVar8 = lVar11;
            lVar11 = *plVar19;
            if (*(int *)(lVar11 + 0x54) < *(int *)(*plVar7 + 0x54)) {
              *plVar19 = *plVar7;
              *plVar7 = lVar11;
            }
          }
        }
        lVar11 = param_2[-1];
        lVar10 = *plVar13;
        if (*(int *)(lVar10 + 0x54) < *(int *)(lVar11 + 0x54)) {
          *plVar13 = lVar11;
          param_2[-1] = lVar10;
          lVar11 = *plVar8;
          if (*(int *)(lVar11 + 0x54) < *(int *)(*plVar13 + 0x54)) {
            *plVar8 = *plVar13;
            *plVar13 = lVar11;
            lVar11 = *plVar7;
            if (*(int *)(lVar11 + 0x54) < *(int *)(*plVar8 + 0x54)) {
              *plVar7 = *plVar8;
              *plVar8 = lVar11;
              lVar11 = *plVar19;
              if (*(int *)(lVar11 + 0x54) < *(int *)(*plVar7 + 0x54)) {
                *plVar19 = *plVar7;
                *plVar7 = lVar11;
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar9 < 0x18) {
      plVar7 = plVar19 + 1;
      if ((param_4 & 1) == 0) {
        if (plVar19 == param_2 || plVar7 == param_2) {
          return;
        }
        lVar11 = 0;
        lVar10 = 8;
        do {
          lVar14 = *(long *)((long)plVar19 + lVar11);
          lVar15 = *plVar7;
          iVar3 = *(int *)(lVar15 + 0x54);
          lVar11 = lVar10;
          if (*(int *)(lVar14 + 0x54) < iVar3) {
            do {
              *(long *)((long)plVar19 + lVar11) = lVar14;
              if (lVar11 == 0) goto LAB_10a3a9108;
              lVar14 = ((long *)((long)plVar19 + lVar11))[-2];
              lVar11 = lVar11 + -8;
            } while (*(int *)(lVar14 + 0x54) < iVar3);
            *(long *)((long)plVar19 + lVar11) = lVar15;
          }
          plVar7 = (long *)((long)plVar19 + lVar10 + 8);
          lVar11 = lVar10;
          lVar10 = lVar10 + 8;
          if (plVar7 == param_2) {
            return;
          }
        } while( true );
      }
      if (plVar19 == param_2 || plVar7 == param_2) {
        return;
      }
      lVar11 = 0;
      plVar8 = plVar19;
      do {
        plVar13 = plVar7;
        lVar10 = *plVar8;
        lVar15 = plVar8[1];
        iVar3 = *(int *)(lVar15 + 0x54);
        lVar14 = lVar11;
        if (*(int *)(lVar10 + 0x54) < iVar3) {
          do {
            lVar17 = lVar14;
            *(long *)((long)plVar19 + lVar17 + 8) = lVar10;
            plVar7 = plVar19;
            if (lVar17 == 0) goto LAB_10a3a8e54;
            lVar10 = *(long *)((long)plVar19 + lVar17 + -8);
            lVar14 = lVar17 + -8;
          } while (*(int *)(lVar10 + 0x54) < iVar3);
          plVar7 = (long *)((long)plVar19 + lVar17);
LAB_10a3a8e54:
          *plVar7 = lVar15;
        }
        plVar7 = plVar13 + 1;
        lVar11 = lVar11 + 8;
        plVar8 = plVar13;
        if (plVar7 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (plVar19 == param_2) {
        return;
      }
      uVar12 = uVar9 - 2 >> 1;
      uVar18 = uVar12;
      do {
        if ((long)uVar18 <= (long)uVar12) {
          uVar1 = uVar18 << 1 | 1;
          plVar7 = plVar19 + uVar1;
          uVar16 = uVar18 * 2 + 2;
          if ((long)uVar16 < (long)uVar9) {
            lVar11 = plVar7[1];
            plVar8 = plVar7 + 1;
            if (*(int *)(*plVar7 + 0x54) <= *(int *)(lVar11 + 0x54)) {
              plVar8 = plVar7;
              uVar16 = uVar1;
              lVar11 = *plVar7;
            }
          }
          else {
            plVar8 = plVar7;
            uVar16 = uVar1;
            lVar11 = *plVar7;
          }
          lVar10 = plVar19[uVar18];
          iVar3 = *(int *)(lVar10 + 0x54);
          plVar7 = plVar19 + uVar18;
          if (*(int *)(lVar11 + 0x54) <= iVar3) {
            do {
              plVar13 = plVar8;
              *plVar7 = lVar11;
              if ((long)uVar12 < (long)uVar16) break;
              uVar1 = uVar16 << 1 | 1;
              plVar7 = plVar19 + uVar1;
              uVar16 = uVar16 * 2 + 2;
              if ((long)uVar16 < (long)uVar9) {
                lVar11 = plVar7[1];
                plVar8 = plVar7 + 1;
                if (*(int *)(*plVar7 + 0x54) <= *(int *)(lVar11 + 0x54)) {
                  plVar8 = plVar7;
                  uVar16 = uVar1;
                  lVar11 = *plVar7;
                }
              }
              else {
                plVar8 = plVar7;
                uVar16 = uVar1;
                lVar11 = *plVar7;
              }
              plVar7 = plVar13;
            } while (*(int *)(lVar11 + 0x54) <= iVar3);
            *plVar13 = lVar10;
          }
        }
        bVar2 = uVar18 != 0;
        uVar18 = uVar18 - 1;
      } while (bVar2);
      do {
        uVar18 = 0;
        lVar11 = *plVar19;
        plVar7 = plVar19;
        do {
          plVar8 = plVar7 + uVar18 + 1;
          uVar16 = uVar18 << 1 | 1;
          uVar12 = uVar18 * 2 + 2;
          if ((long)uVar12 < (long)uVar9) {
            lVar10 = plVar7[uVar18 + 2];
            lVar15 = uVar18 + 1;
            plVar13 = plVar7 + uVar18 + 2;
            uVar18 = uVar12;
            if (*(int *)(plVar7[lVar15] + 0x54) <= *(int *)(lVar10 + 0x54)) {
              plVar13 = plVar8;
              uVar18 = uVar16;
              lVar10 = plVar7[lVar15];
            }
          }
          else {
            plVar13 = plVar8;
            uVar18 = uVar16;
            lVar10 = *plVar8;
          }
          *plVar7 = lVar10;
          plVar7 = plVar13;
        } while ((long)uVar18 <= (long)(uVar9 - 2 >> 1));
        param_2 = param_2 + -1;
        if (plVar13 == param_2) {
          *plVar13 = lVar11;
        }
        else {
          *plVar13 = *param_2;
          *param_2 = lVar11;
          lVar11 = (long)plVar13 + (8 - (long)plVar19) >> 3;
          if (1 < lVar11) {
            uVar18 = lVar11 - 2U >> 1;
            lVar10 = plVar19[uVar18];
            lVar11 = *plVar13;
            iVar3 = *(int *)(lVar11 + 0x54);
            plVar7 = plVar19 + uVar18;
            if (iVar3 < *(int *)(lVar10 + 0x54)) {
              do {
                plVar8 = plVar7;
                *plVar13 = lVar10;
                if (uVar18 == 0) break;
                uVar18 = uVar18 - 1 >> 1;
                lVar10 = plVar19[uVar18];
                plVar13 = plVar8;
                plVar7 = plVar19 + uVar18;
              } while (iVar3 < *(int *)(lVar10 + 0x54));
              *plVar8 = lVar11;
            }
          }
        }
        bVar2 = (long)uVar9 < 3;
        uVar9 = uVar9 - 1;
        if (bVar2) {
          return;
        }
      } while( true );
    }
    plVar7 = plVar19 + (uVar9 >> 1);
    lVar11 = param_2[-1];
    iVar3 = *(int *)(lVar11 + 0x54);
    if (uVar9 < 0x81) {
      lVar15 = *plVar19;
      iVar4 = *(int *)(lVar15 + 0x54);
      lVar10 = *plVar7;
      iVar5 = *(int *)(lVar10 + 0x54);
      if (iVar5 < iVar4) {
        if (iVar4 < iVar3) {
          *plVar7 = lVar11;
        }
        else {
          *plVar7 = lVar15;
          *plVar19 = lVar10;
          if (*(int *)(param_2[-1] + 0x54) <= iVar5) goto LAB_10a3a8ae0;
          *plVar19 = param_2[-1];
        }
        param_2[-1] = lVar10;
      }
      else if (iVar4 < iVar3) {
        *plVar19 = lVar11;
        param_2[-1] = lVar15;
        lVar11 = *plVar7;
        if (*(int *)(lVar11 + 0x54) < *(int *)(*plVar19 + 0x54)) {
          *plVar7 = *plVar19;
          *plVar19 = lVar11;
        }
      }
    }
    else {
      lVar15 = *plVar7;
      iVar4 = *(int *)(lVar15 + 0x54);
      lVar10 = *plVar19;
      iVar5 = *(int *)(lVar10 + 0x54);
      if (iVar5 < iVar4) {
        if (iVar4 < iVar3) {
          *plVar19 = lVar11;
        }
        else {
          *plVar19 = lVar15;
          *plVar7 = lVar10;
          if (*(int *)(param_2[-1] + 0x54) <= iVar5) goto LAB_10a3a8940;
          *plVar7 = param_2[-1];
        }
        param_2[-1] = lVar10;
      }
      else if (iVar4 < iVar3) {
        *plVar7 = lVar11;
        param_2[-1] = lVar15;
        lVar11 = *plVar19;
        if (*(int *)(lVar11 + 0x54) < *(int *)(*plVar7 + 0x54)) {
          *plVar19 = *plVar7;
          *plVar7 = lVar11;
        }
      }
LAB_10a3a8940:
      lVar10 = plVar7[-1];
      iVar3 = *(int *)(lVar10 + 0x54);
      lVar11 = plVar19[1];
      iVar4 = *(int *)(lVar11 + 0x54);
      lVar15 = param_2[-2];
      if (iVar4 < iVar3) {
        if (iVar3 < *(int *)(lVar15 + 0x54)) {
          plVar19[1] = lVar15;
        }
        else {
          plVar19[1] = lVar10;
          plVar7[-1] = lVar11;
          if (*(int *)(param_2[-2] + 0x54) <= iVar4) goto LAB_10a3a89e8;
          plVar7[-1] = param_2[-2];
        }
        param_2[-2] = lVar11;
      }
      else if (iVar3 < *(int *)(lVar15 + 0x54)) {
        plVar7[-1] = lVar15;
        param_2[-2] = lVar10;
        lVar11 = plVar19[1];
        if (*(int *)(lVar11 + 0x54) < *(int *)(plVar7[-1] + 0x54)) {
          plVar19[1] = plVar7[-1];
          plVar7[-1] = lVar11;
        }
      }
LAB_10a3a89e8:
      lVar10 = plVar7[1];
      iVar3 = *(int *)(lVar10 + 0x54);
      lVar11 = plVar19[2];
      iVar4 = *(int *)(lVar11 + 0x54);
      lVar15 = param_2[-3];
      if (iVar4 < iVar3) {
        if (iVar3 < *(int *)(lVar15 + 0x54)) {
          plVar19[2] = lVar15;
        }
        else {
          plVar19[2] = lVar10;
          plVar7[1] = lVar11;
          if (*(int *)(param_2[-3] + 0x54) <= iVar4) goto LAB_10a3a8a6c;
          plVar7[1] = param_2[-3];
        }
        param_2[-3] = lVar11;
      }
      else if (iVar3 < *(int *)(lVar15 + 0x54)) {
        plVar7[1] = lVar15;
        param_2[-3] = lVar10;
        lVar11 = plVar19[2];
        if (*(int *)(lVar11 + 0x54) < *(int *)(plVar7[1] + 0x54)) {
          plVar19[2] = plVar7[1];
          plVar7[1] = lVar11;
        }
      }
LAB_10a3a8a6c:
      lVar11 = plVar7[-1];
      lVar10 = *plVar7;
      iVar3 = *(int *)(lVar10 + 0x54);
      iVar4 = *(int *)(lVar11 + 0x54);
      lVar15 = plVar7[1];
      iVar5 = *(int *)(lVar15 + 0x54);
      if (iVar4 < iVar3) {
        if (iVar3 < iVar5) {
          plVar7[-1] = lVar15;
          plVar7[1] = lVar11;
        }
        else {
          plVar7[-1] = lVar10;
          *plVar7 = lVar11;
          lVar10 = lVar11;
          if (iVar4 < iVar5) {
            *plVar7 = lVar15;
            plVar7[1] = lVar11;
            lVar10 = lVar15;
          }
        }
      }
      else if (iVar3 < iVar5) {
        *plVar7 = lVar15;
        plVar7[1] = lVar10;
        lVar10 = lVar15;
        if (iVar4 < iVar5) {
          plVar7[-1] = lVar15;
          *plVar7 = lVar11;
          lVar10 = lVar11;
        }
      }
      lVar11 = *plVar19;
      *plVar19 = lVar10;
      *plVar7 = lVar11;
    }
LAB_10a3a8ae0:
    param_3 = param_3 + -1;
    lVar11 = *plVar19;
    param_1 = plVar19;
    if (((param_4 & 1) == 0) &&
       (iVar3 = *(int *)(lVar11 + 0x54), *(int *)(plVar19[-1] + 0x54) <= iVar3)) {
      if (*(int *)(param_2[-1] + 0x54) < iVar3) {
        do {
          param_1 = param_1 + 1;
          if (param_1 == param_2) goto LAB_10a3a9108;
        } while (iVar3 <= *(int *)(*param_1 + 0x54));
      }
      else {
        do {
          param_1 = param_1 + 1;
          if (param_2 <= param_1) break;
        } while (iVar3 <= *(int *)(*param_1 + 0x54));
      }
      plVar7 = param_2;
      if (param_1 < param_2) {
        do {
          if (plVar7 == plVar19) {
LAB_10a3a9108:
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10a3a910c);
            (*pcVar6)();
          }
          plVar7 = plVar7 + -1;
        } while (*(int *)(*plVar7 + 0x54) < iVar3);
      }
      if (param_1 < plVar7) {
        lVar10 = *param_1;
        lVar15 = *plVar7;
        do {
          *param_1 = lVar15;
          *plVar7 = lVar10;
          do {
            param_1 = param_1 + 1;
            if (param_1 == param_2) goto LAB_10a3a9108;
            lVar10 = *param_1;
          } while (iVar3 <= *(int *)(lVar10 + 0x54));
          do {
            if (plVar7 == plVar19) goto LAB_10a3a9108;
            plVar7 = plVar7 + -1;
            lVar15 = *plVar7;
          } while (*(int *)(lVar15 + 0x54) < iVar3);
        } while (param_1 < plVar7);
      }
      plVar7 = param_1 + -1;
      if (plVar7 != plVar19) {
        *plVar19 = *plVar7;
      }
      param_4 = 0;
      *plVar7 = lVar11;
      goto LAB_10a3a8808;
    }
    lVar10 = 0;
    do {
      plVar7 = (long *)((long)plVar19 + lVar10 + 8);
      if (plVar7 == param_2) goto LAB_10a3a9108;
      lVar15 = *plVar7;
      iVar3 = *(int *)(lVar11 + 0x54);
      lVar10 = lVar10 + 8;
    } while (iVar3 < *(int *)(lVar15 + 0x54));
    plVar7 = (long *)((long)plVar19 + lVar10);
    plVar8 = param_2;
    if (lVar10 == 8) {
      do {
        if (plVar8 <= plVar7) break;
        plVar8 = plVar8 + -1;
      } while (*(int *)(*plVar8 + 0x54) <= iVar3);
    }
    else {
      do {
        if (plVar8 == plVar19) goto LAB_10a3a9108;
        plVar8 = plVar8 + -1;
      } while (*(int *)(*plVar8 + 0x54) <= iVar3);
    }
    param_1 = plVar7;
    if (plVar7 < plVar8) {
      lVar10 = *plVar8;
      plVar13 = plVar8;
      do {
        *param_1 = lVar10;
        *plVar13 = lVar15;
        do {
          param_1 = param_1 + 1;
          if (param_1 == param_2) goto LAB_10a3a9108;
          lVar15 = *param_1;
        } while (iVar3 < *(int *)(lVar15 + 0x54));
        do {
          if (plVar13 == plVar19) goto LAB_10a3a9108;
          plVar13 = plVar13 + -1;
          lVar10 = *plVar13;
        } while (*(int *)(lVar10 + 0x54) <= iVar3);
      } while (param_1 < plVar13);
    }
    plVar13 = param_1 + -1;
    if (plVar13 != plVar19) {
      *plVar19 = *plVar13;
    }
    *plVar13 = lVar11;
    if (plVar7 < plVar8) {
LAB_10a3a8c20:
      FUN_10a3a87dc(plVar19,plVar13,param_3,(uint)param_4 & 1);
      param_4 = 0;
    }
    else {
      plVar7 = plVar19;
      FUN_10a3a9320(plVar19,plVar13);
      plVar8 = param_1;
      FUN_10a3a9320(param_1,param_2);
      if ((int)plVar8 == 0) {
        if (((ulong)plVar7 & 1) == 0) goto LAB_10a3a8c20;
      }
      else {
        param_1 = plVar19;
        param_2 = plVar13;
        if (((ulong)plVar7 & 1) != 0) {
          return;
        }
      }
    }
  } while( true );
}



/* Entry: 10a3a87dc; end: 10a3a91ab;  */

void FUN_10a3a87dc(long *param_1,long *param_2,long param_3,uint param_4)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  
LAB_10a3a8808:
  do {
    plVar19 = param_1;
    uVar9 = (long)param_2 - (long)plVar19 >> 3;
    if (uVar9 - 2 == 0 || (long)uVar9 < 2) {
      if (uVar9 < 2) {
        return;
      }
      if (uVar9 == 2) {
        lVar11 = *plVar19;
        if (*(int *)(param_2[-1] + 0x54) <= *(int *)(lVar11 + 0x54)) {
          return;
        }
        *plVar19 = param_2[-1];
        param_2[-1] = lVar11;
        return;
      }
    }
    else {
      if (uVar9 == 3) {
        lVar11 = *plVar19;
        lVar10 = plVar19[1];
        iVar3 = *(int *)(lVar10 + 0x54);
        iVar4 = *(int *)(lVar11 + 0x54);
        lVar15 = param_2[-1];
        if (iVar4 < iVar3) {
          if (iVar3 < *(int *)(lVar15 + 0x54)) {
            *plVar19 = lVar15;
          }
          else {
            *plVar19 = lVar10;
            plVar19[1] = lVar11;
            if (*(int *)(param_2[-1] + 0x54) <= iVar4) {
              return;
            }
            plVar19[1] = param_2[-1];
          }
          param_2[-1] = lVar11;
          return;
        }
        if (*(int *)(lVar15 + 0x54) <= iVar3) {
          return;
        }
        plVar19[1] = lVar15;
        param_2[-1] = lVar10;
        lVar11 = *plVar19;
        if (*(int *)(plVar19[1] + 0x54) <= *(int *)(lVar11 + 0x54)) {
          return;
        }
        *plVar19 = plVar19[1];
        plVar19[1] = lVar11;
        return;
      }
      if (uVar9 == 4) {
        lVar11 = *plVar19;
        lVar10 = plVar19[1];
        iVar3 = *(int *)(lVar10 + 0x54);
        iVar4 = *(int *)(lVar11 + 0x54);
        lVar14 = plVar19[2];
        iVar5 = *(int *)(lVar14 + 0x54);
        lVar15 = lVar14;
        if (iVar4 < iVar3) {
          if (iVar3 < iVar5) {
            *plVar19 = lVar14;
          }
          else {
            *plVar19 = lVar10;
            plVar19[1] = lVar11;
            if (iVar5 <= iVar4) goto LAB_10a3a914c;
            plVar19[1] = lVar14;
          }
          plVar19[2] = lVar11;
          lVar15 = lVar11;
        }
        else if (iVar3 < iVar5) {
          plVar19[1] = lVar14;
          plVar19[2] = lVar10;
          lVar15 = lVar10;
          if (iVar4 < iVar5) {
            *plVar19 = lVar14;
            plVar19[1] = lVar11;
          }
        }
LAB_10a3a914c:
        if (*(int *)(param_2[-1] + 0x54) <= *(int *)(lVar15 + 0x54)) {
          return;
        }
        plVar19[2] = param_2[-1];
        param_2[-1] = lVar15;
        lVar11 = plVar19[1];
        lVar10 = plVar19[2];
        iVar3 = *(int *)(lVar10 + 0x54);
        if (iVar3 <= *(int *)(lVar11 + 0x54)) {
          return;
        }
        plVar19[1] = lVar10;
        plVar19[2] = lVar11;
        lVar11 = *plVar19;
        if (iVar3 <= *(int *)(lVar11 + 0x54)) {
          return;
        }
        *plVar19 = lVar10;
        plVar19[1] = lVar11;
        return;
      }
      if (uVar9 == 5) {
        plVar7 = plVar19 + 1;
        plVar8 = plVar19 + 2;
        plVar13 = plVar19 + 3;
        lVar10 = *plVar7;
        iVar3 = *(int *)(lVar10 + 0x54);
        lVar15 = *plVar19;
        iVar4 = *(int *)(lVar15 + 0x54);
        lVar11 = *plVar8;
        if (iVar4 < iVar3) {
          if (iVar3 < *(int *)(lVar11 + 0x54)) {
            *plVar19 = lVar11;
          }
          else {
            *plVar19 = lVar10;
            *plVar7 = lVar15;
            lVar11 = *plVar8;
            if (*(int *)(lVar11 + 0x54) <= iVar4) goto LAB_10a3a9240;
            *plVar7 = lVar11;
          }
          *plVar8 = lVar15;
          lVar11 = lVar15;
        }
        else if (iVar3 < *(int *)(lVar11 + 0x54)) {
          *plVar7 = lVar11;
          *plVar8 = lVar10;
          lVar15 = *plVar19;
          lVar11 = lVar10;
          if (*(int *)(lVar15 + 0x54) < *(int *)(*plVar7 + 0x54)) {
            *plVar19 = *plVar7;
            *plVar7 = lVar15;
            lVar11 = *plVar8;
          }
        }
LAB_10a3a9240:
        if (*(int *)(lVar11 + 0x54) < *(int *)(*plVar13 + 0x54)) {
          *plVar8 = *plVar13;
          *plVar13 = lVar11;
          lVar11 = *plVar7;
          if (*(int *)(lVar11 + 0x54) < *(int *)(*plVar8 + 0x54)) {
            *plVar7 = *plVar8;
            *plVar8 = lVar11;
            lVar11 = *plVar19;
            if (*(int *)(lVar11 + 0x54) < *(int *)(*plVar7 + 0x54)) {
              *plVar19 = *plVar7;
              *plVar7 = lVar11;
            }
          }
        }
        lVar11 = param_2[-1];
        lVar10 = *plVar13;
        if (*(int *)(lVar10 + 0x54) < *(int *)(lVar11 + 0x54)) {
          *plVar13 = lVar11;
          param_2[-1] = lVar10;
          lVar11 = *plVar8;
          if (*(int *)(lVar11 + 0x54) < *(int *)(*plVar13 + 0x54)) {
            *plVar8 = *plVar13;
            *plVar13 = lVar11;
            lVar11 = *plVar7;
            if (*(int *)(lVar11 + 0x54) < *(int *)(*plVar8 + 0x54)) {
              *plVar7 = *plVar8;
              *plVar8 = lVar11;
              lVar11 = *plVar19;
              if (*(int *)(lVar11 + 0x54) < *(int *)(*plVar7 + 0x54)) {
                *plVar19 = *plVar7;
                *plVar7 = lVar11;
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar9 < 0x18) {
      plVar7 = plVar19 + 1;
      if ((param_4 & 1) == 0) {
        if (plVar19 == param_2 || plVar7 == param_2) {
          return;
        }
        lVar11 = 0;
        lVar10 = 8;
        do {
          lVar14 = *(long *)((long)plVar19 + lVar11);
          lVar15 = *plVar7;
          iVar3 = *(int *)(lVar15 + 0x54);
          lVar11 = lVar10;
          if (*(int *)(lVar14 + 0x54) < iVar3) {
            do {
              *(long *)((long)plVar19 + lVar11) = lVar14;
              if (lVar11 == 0) goto LAB_10a3a9108;
              lVar14 = ((long *)((long)plVar19 + lVar11))[-2];
              lVar11 = lVar11 + -8;
            } while (*(int *)(lVar14 + 0x54) < iVar3);
            *(long *)((long)plVar19 + lVar11) = lVar15;
          }
          plVar7 = (long *)((long)plVar19 + lVar10 + 8);
          lVar11 = lVar10;
          lVar10 = lVar10 + 8;
          if (plVar7 == param_2) {
            return;
          }
        } while( true );
      }
      if (plVar19 == param_2 || plVar7 == param_2) {
        return;
      }
      lVar11 = 0;
      plVar8 = plVar19;
      do {
        plVar13 = plVar7;
        lVar10 = *plVar8;
        lVar15 = plVar8[1];
        iVar3 = *(int *)(lVar15 + 0x54);
        lVar14 = lVar11;
        if (*(int *)(lVar10 + 0x54) < iVar3) {
          do {
            lVar17 = lVar14;
            *(long *)((long)plVar19 + lVar17 + 8) = lVar10;
            plVar7 = plVar19;
            if (lVar17 == 0) goto LAB_10a3a8e54;
            lVar10 = *(long *)((long)plVar19 + lVar17 + -8);
            lVar14 = lVar17 + -8;
          } while (*(int *)(lVar10 + 0x54) < iVar3);
          plVar7 = (long *)((long)plVar19 + lVar17);
LAB_10a3a8e54:
          *plVar7 = lVar15;
        }
        plVar7 = plVar13 + 1;
        lVar11 = lVar11 + 8;
        plVar8 = plVar13;
        if (plVar7 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (plVar19 == param_2) {
        return;
      }
      uVar12 = uVar9 - 2 >> 1;
      uVar18 = uVar12;
      do {
        if ((long)uVar18 <= (long)uVar12) {
          uVar1 = uVar18 << 1 | 1;
          plVar7 = plVar19 + uVar1;
          uVar16 = uVar18 * 2 + 2;
          if ((long)uVar16 < (long)uVar9) {
            lVar11 = plVar7[1];
            plVar8 = plVar7 + 1;
            if (*(int *)(*plVar7 + 0x54) <= *(int *)(lVar11 + 0x54)) {
              plVar8 = plVar7;
              uVar16 = uVar1;
              lVar11 = *plVar7;
            }
          }
          else {
            plVar8 = plVar7;
            uVar16 = uVar1;
            lVar11 = *plVar7;
          }
          lVar10 = plVar19[uVar18];
          iVar3 = *(int *)(lVar10 + 0x54);
          plVar7 = plVar19 + uVar18;
          if (*(int *)(lVar11 + 0x54) <= iVar3) {
            do {
              plVar13 = plVar8;
              *plVar7 = lVar11;
              if ((long)uVar12 < (long)uVar16) break;
              uVar1 = uVar16 << 1 | 1;
              plVar7 = plVar19 + uVar1;
              uVar16 = uVar16 * 2 + 2;
              if ((long)uVar16 < (long)uVar9) {
                lVar11 = plVar7[1];
                plVar8 = plVar7 + 1;
                if (*(int *)(*plVar7 + 0x54) <= *(int *)(lVar11 + 0x54)) {
                  plVar8 = plVar7;
                  uVar16 = uVar1;
                  lVar11 = *plVar7;
                }
              }
              else {
                plVar8 = plVar7;
                uVar16 = uVar1;
                lVar11 = *plVar7;
              }
              plVar7 = plVar13;
            } while (*(int *)(lVar11 + 0x54) <= iVar3);
            *plVar13 = lVar10;
          }
        }
        bVar2 = uVar18 != 0;
        uVar18 = uVar18 - 1;
      } while (bVar2);
      do {
        uVar18 = 0;
        lVar11 = *plVar19;
        plVar7 = plVar19;
        do {
          plVar8 = plVar7 + uVar18 + 1;
          uVar16 = uVar18 << 1 | 1;
          uVar12 = uVar18 * 2 + 2;
          if ((long)uVar12 < (long)uVar9) {
            lVar10 = plVar7[uVar18 + 2];
            lVar15 = uVar18 + 1;
            plVar13 = plVar7 + uVar18 + 2;
            uVar18 = uVar12;
            if (*(int *)(plVar7[lVar15] + 0x54) <= *(int *)(lVar10 + 0x54)) {
              plVar13 = plVar8;
              uVar18 = uVar16;
              lVar10 = plVar7[lVar15];
            }
          }
          else {
            plVar13 = plVar8;
            uVar18 = uVar16;
            lVar10 = *plVar8;
          }
          *plVar7 = lVar10;
          plVar7 = plVar13;
        } while ((long)uVar18 <= (long)(uVar9 - 2 >> 1));
        param_2 = param_2 + -1;
        if (plVar13 == param_2) {
          *plVar13 = lVar11;
        }
        else {
          *plVar13 = *param_2;
          *param_2 = lVar11;
          lVar11 = (long)plVar13 + (8 - (long)plVar19) >> 3;
          if (1 < lVar11) {
            uVar18 = lVar11 - 2U >> 1;
            lVar10 = plVar19[uVar18];
            lVar11 = *plVar13;
            iVar3 = *(int *)(lVar11 + 0x54);
            plVar7 = plVar19 + uVar18;
            if (iVar3 < *(int *)(lVar10 + 0x54)) {
              do {
                plVar8 = plVar7;
                *plVar13 = lVar10;
                if (uVar18 == 0) break;
                uVar18 = uVar18 - 1 >> 1;
                lVar10 = plVar19[uVar18];
                plVar13 = plVar8;
                plVar7 = plVar19 + uVar18;
              } while (iVar3 < *(int *)(lVar10 + 0x54));
              *plVar8 = lVar11;
            }
          }
        }
        bVar2 = (long)uVar9 < 3;
        uVar9 = uVar9 - 1;
        if (bVar2) {
          return;
        }
      } while( true );
    }
    plVar7 = plVar19 + (uVar9 >> 1);
    lVar11 = param_2[-1];
    iVar3 = *(int *)(lVar11 + 0x54);
    if (uVar9 < 0x81) {
      lVar15 = *plVar19;
      iVar4 = *(int *)(lVar15 + 0x54);
      lVar10 = *plVar7;
      iVar5 = *(int *)(lVar10 + 0x54);
      if (iVar5 < iVar4) {
        if (iVar4 < iVar3) {
          *plVar7 = lVar11;
        }
        else {
          *plVar7 = lVar15;
          *plVar19 = lVar10;
          if (*(int *)(param_2[-1] + 0x54) <= iVar5) goto LAB_10a3a8ae0;
          *plVar19 = param_2[-1];
        }
        param_2[-1] = lVar10;
      }
      else if (iVar4 < iVar3) {
        *plVar19 = lVar11;
        param_2[-1] = lVar15;
        lVar11 = *plVar7;
        if (*(int *)(lVar11 + 0x54) < *(int *)(*plVar19 + 0x54)) {
          *plVar7 = *plVar19;
          *plVar19 = lVar11;
        }
      }
    }
    else {
      lVar15 = *plVar7;
      iVar4 = *(int *)(lVar15 + 0x54);
      lVar10 = *plVar19;
      iVar5 = *(int *)(lVar10 + 0x54);
      if (iVar5 < iVar4) {
        if (iVar4 < iVar3) {
          *plVar19 = lVar11;
        }
        else {
          *plVar19 = lVar15;
          *plVar7 = lVar10;
          if (*(int *)(param_2[-1] + 0x54) <= iVar5) goto LAB_10a3a8940;
          *plVar7 = param_2[-1];
        }
        param_2[-1] = lVar10;
      }
      else if (iVar4 < iVar3) {
        *plVar7 = lVar11;
        param_2[-1] = lVar15;
        lVar11 = *plVar19;
        if (*(int *)(lVar11 + 0x54) < *(int *)(*plVar7 + 0x54)) {
          *plVar19 = *plVar7;
          *plVar7 = lVar11;
        }
      }
LAB_10a3a8940:
      lVar10 = plVar7[-1];
      iVar3 = *(int *)(lVar10 + 0x54);
      lVar11 = plVar19[1];
      iVar4 = *(int *)(lVar11 + 0x54);
      lVar15 = param_2[-2];
      if (iVar4 < iVar3) {
        if (iVar3 < *(int *)(lVar15 + 0x54)) {
          plVar19[1] = lVar15;
        }
        else {
          plVar19[1] = lVar10;
          plVar7[-1] = lVar11;
          if (*(int *)(param_2[-2] + 0x54) <= iVar4) goto LAB_10a3a89e8;
          plVar7[-1] = param_2[-2];
        }
        param_2[-2] = lVar11;
      }
      else if (iVar3 < *(int *)(lVar15 + 0x54)) {
        plVar7[-1] = lVar15;
        param_2[-2] = lVar10;
        lVar11 = plVar19[1];
        if (*(int *)(lVar11 + 0x54) < *(int *)(plVar7[-1] + 0x54)) {
          plVar19[1] = plVar7[-1];
          plVar7[-1] = lVar11;
        }
      }
LAB_10a3a89e8:
      lVar10 = plVar7[1];
      iVar3 = *(int *)(lVar10 + 0x54);
      lVar11 = plVar19[2];
      iVar4 = *(int *)(lVar11 + 0x54);
      lVar15 = param_2[-3];
      if (iVar4 < iVar3) {
        if (iVar3 < *(int *)(lVar15 + 0x54)) {
          plVar19[2] = lVar15;
        }
        else {
          plVar19[2] = lVar10;
          plVar7[1] = lVar11;
          if (*(int *)(param_2[-3] + 0x54) <= iVar4) goto LAB_10a3a8a6c;
          plVar7[1] = param_2[-3];
        }
        param_2[-3] = lVar11;
      }
      else if (iVar3 < *(int *)(lVar15 + 0x54)) {
        plVar7[1] = lVar15;
        param_2[-3] = lVar10;
        lVar11 = plVar19[2];
        if (*(int *)(lVar11 + 0x54) < *(int *)(plVar7[1] + 0x54)) {
          plVar19[2] = plVar7[1];
          plVar7[1] = lVar11;
        }
      }
LAB_10a3a8a6c:
      lVar11 = plVar7[-1];
      lVar10 = *plVar7;
      iVar3 = *(int *)(lVar10 + 0x54);
      iVar4 = *(int *)(lVar11 + 0x54);
      lVar15 = plVar7[1];
      iVar5 = *(int *)(lVar15 + 0x54);
      if (iVar4 < iVar3) {
        if (iVar3 < iVar5) {
          plVar7[-1] = lVar15;
          plVar7[1] = lVar11;
        }
        else {
          plVar7[-1] = lVar10;
          *plVar7 = lVar11;
          lVar10 = lVar11;
          if (iVar4 < iVar5) {
            *plVar7 = lVar15;
            plVar7[1] = lVar11;
            lVar10 = lVar15;
          }
        }
      }
      else if (iVar3 < iVar5) {
        *plVar7 = lVar15;
        plVar7[1] = lVar10;
        lVar10 = lVar15;
        if (iVar4 < iVar5) {
          plVar7[-1] = lVar15;
          *plVar7 = lVar11;
          lVar10 = lVar11;
        }
      }
      lVar11 = *plVar19;
      *plVar19 = lVar10;
      *plVar7 = lVar11;
    }
LAB_10a3a8ae0:
    param_3 = param_3 + -1;
    lVar11 = *plVar19;
    param_1 = plVar19;
    if (((param_4 & 1) == 0) &&
       (iVar3 = *(int *)(lVar11 + 0x54), *(int *)(plVar19[-1] + 0x54) <= iVar3)) {
      if (*(int *)(param_2[-1] + 0x54) < iVar3) {
        do {
          param_1 = param_1 + 1;
          if (param_1 == param_2) goto LAB_10a3a9108;
        } while (iVar3 <= *(int *)(*param_1 + 0x54));
      }
      else {
        do {
          param_1 = param_1 + 1;
          if (param_2 <= param_1) break;
        } while (iVar3 <= *(int *)(*param_1 + 0x54));
      }
      plVar7 = param_2;
      if (param_1 < param_2) {
        do {
          if (plVar7 == plVar19) {
LAB_10a3a9108:
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10a3a910c);
            (*pcVar6)();
          }
          plVar7 = plVar7 + -1;
        } while (*(int *)(*plVar7 + 0x54) < iVar3);
      }
      if (param_1 < plVar7) {
        lVar10 = *param_1;
        lVar15 = *plVar7;
        do {
          *param_1 = lVar15;
          *plVar7 = lVar10;
          do {
            param_1 = param_1 + 1;
            if (param_1 == param_2) goto LAB_10a3a9108;
            lVar10 = *param_1;
          } while (iVar3 <= *(int *)(lVar10 + 0x54));
          do {
            if (plVar7 == plVar19) goto LAB_10a3a9108;
            plVar7 = plVar7 + -1;
            lVar15 = *plVar7;
          } while (*(int *)(lVar15 + 0x54) < iVar3);
        } while (param_1 < plVar7);
      }
      plVar7 = param_1 + -1;
      if (plVar7 != plVar19) {
        *plVar19 = *plVar7;
      }
      param_4 = 0;
      *plVar7 = lVar11;
      goto LAB_10a3a8808;
    }
    lVar10 = 0;
    do {
      plVar7 = (long *)((long)plVar19 + lVar10 + 8);
      if (plVar7 == param_2) goto LAB_10a3a9108;
      lVar15 = *plVar7;
      iVar3 = *(int *)(lVar11 + 0x54);
      lVar10 = lVar10 + 8;
    } while (iVar3 < *(int *)(lVar15 + 0x54));
    plVar7 = (long *)((long)plVar19 + lVar10);
    plVar8 = param_2;
    if (lVar10 == 8) {
      do {
        if (plVar8 <= plVar7) break;
        plVar8 = plVar8 + -1;
      } while (*(int *)(*plVar8 + 0x54) <= iVar3);
    }
    else {
      do {
        if (plVar8 == plVar19) goto LAB_10a3a9108;
        plVar8 = plVar8 + -1;
      } while (*(int *)(*plVar8 + 0x54) <= iVar3);
    }
    param_1 = plVar7;
    if (plVar7 < plVar8) {
      lVar10 = *plVar8;
      plVar13 = plVar8;
      do {
        *param_1 = lVar10;
        *plVar13 = lVar15;
        do {
          param_1 = param_1 + 1;
          if (param_1 == param_2) goto LAB_10a3a9108;
          lVar15 = *param_1;
        } while (iVar3 < *(int *)(lVar15 + 0x54));
        do {
          if (plVar13 == plVar19) goto LAB_10a3a9108;
          plVar13 = plVar13 + -1;
          lVar10 = *plVar13;
        } while (*(int *)(lVar10 + 0x54) <= iVar3);
      } while (param_1 < plVar13);
    }
    plVar13 = param_1 + -1;
    if (plVar13 != plVar19) {
      *plVar19 = *plVar13;
    }
    *plVar13 = lVar11;
    if (plVar7 < plVar8) {
LAB_10a3a8c20:
      FUN_10a3a87dc(plVar19,plVar13,param_3,param_4 & 1);
      param_4 = 0;
    }
    else {
      plVar7 = plVar19;
      FUN_10a3a9320(plVar19,plVar13);
      plVar8 = param_1;
      FUN_10a3a9320(param_1,param_2);
      if ((int)plVar8 == 0) {
        if (((ulong)plVar7 & 1) == 0) goto LAB_10a3a8c20;
      }
      else {
        param_1 = plVar19;
        param_2 = plVar13;
        if (((ulong)plVar7 & 1) != 0) {
          return;
        }
      }
    }
  } while( true );
}



/* Entry: 10a3a91ac; end: 10a3a931f;  */

void FUN_10a3a91ac(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *param_2;
  iVar1 = *(int *)(lVar3 + 0x54);
  lVar4 = *param_1;
  iVar2 = *(int *)(lVar4 + 0x54);
  lVar5 = *param_3;
  if (iVar2 < iVar1) {
    if (iVar1 < *(int *)(lVar5 + 0x54)) {
      *param_1 = lVar5;
    }
    else {
      *param_1 = lVar3;
      *param_2 = lVar4;
      lVar5 = *param_3;
      if (*(int *)(lVar5 + 0x54) <= iVar2) goto LAB_10a3a9240;
      *param_2 = lVar5;
    }
    *param_3 = lVar4;
    lVar5 = lVar4;
  }
  else if (iVar1 < *(int *)(lVar5 + 0x54)) {
    *param_2 = lVar5;
    *param_3 = lVar3;
    lVar4 = *param_1;
    lVar5 = lVar3;
    if (*(int *)(lVar4 + 0x54) < *(int *)(*param_2 + 0x54)) {
      *param_1 = *param_2;
      *param_2 = lVar4;
      lVar5 = *param_3;
    }
  }
LAB_10a3a9240:
  if (*(int *)(lVar5 + 0x54) < *(int *)(*param_4 + 0x54)) {
    *param_3 = *param_4;
    *param_4 = lVar5;
    lVar5 = *param_2;
    if (*(int *)(lVar5 + 0x54) < *(int *)(*param_3 + 0x54)) {
      *param_2 = *param_3;
      *param_3 = lVar5;
      lVar5 = *param_1;
      if (*(int *)(lVar5 + 0x54) < *(int *)(*param_2 + 0x54)) {
        *param_1 = *param_2;
        *param_2 = lVar5;
      }
    }
  }
  lVar5 = *param_4;
  if (*(int *)(lVar5 + 0x54) < *(int *)(*param_5 + 0x54)) {
    *param_4 = *param_5;
    *param_5 = lVar5;
    lVar5 = *param_3;
    if (*(int *)(lVar5 + 0x54) < *(int *)(*param_4 + 0x54)) {
      *param_3 = *param_4;
      *param_4 = lVar5;
      lVar5 = *param_2;
      if (*(int *)(lVar5 + 0x54) < *(int *)(*param_3 + 0x54)) {
        *param_2 = *param_3;
        *param_3 = lVar5;
        lVar5 = *param_1;
        if (*(int *)(lVar5 + 0x54) < *(int *)(*param_2 + 0x54)) {
          *param_1 = *param_2;
          *param_2 = lVar5;
        }
      }
    }
  }
  return;
}



/* Entry: 10a3a9320; end: 10a3a95c3;  */

bool FUN_10a3a9320(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  
  uVar4 = (long)param_2 - (long)param_1 >> 3;
  if ((long)uVar4 < 3) {
    if (uVar4 < 2) {
      return true;
    }
    if (uVar4 == 2) {
      lVar8 = *param_1;
      if (*(int *)(param_2[-1] + 0x54) <= *(int *)(lVar8 + 0x54)) {
        return true;
      }
      *param_1 = param_2[-1];
      param_2[-1] = lVar8;
      return true;
    }
  }
  else {
    if (uVar4 == 3) {
      lVar8 = *param_1;
      lVar12 = param_1[1];
      iVar7 = *(int *)(lVar12 + 0x54);
      iVar1 = *(int *)(lVar8 + 0x54);
      lVar5 = param_2[-1];
      if (iVar1 < iVar7) {
        if (iVar7 < *(int *)(lVar5 + 0x54)) {
          *param_1 = lVar5;
        }
        else {
          *param_1 = lVar12;
          param_1[1] = lVar8;
          if (*(int *)(param_2[-1] + 0x54) <= iVar1) {
            return true;
          }
          param_1[1] = param_2[-1];
        }
        param_2[-1] = lVar8;
        return true;
      }
      if (*(int *)(lVar5 + 0x54) <= iVar7) {
        return true;
      }
      param_1[1] = lVar5;
      param_2[-1] = lVar12;
      lVar8 = *param_1;
      if (*(int *)(param_1[1] + 0x54) <= *(int *)(lVar8 + 0x54)) {
        return true;
      }
      *param_1 = param_1[1];
      param_1[1] = lVar8;
      return true;
    }
    if (uVar4 == 4) {
      lVar8 = *param_1;
      lVar12 = param_1[1];
      iVar7 = *(int *)(lVar12 + 0x54);
      iVar1 = *(int *)(lVar8 + 0x54);
      lVar11 = param_1[2];
      iVar2 = *(int *)(lVar11 + 0x54);
      lVar5 = lVar11;
      if (iVar1 < iVar7) {
        if (iVar7 < iVar2) {
          *param_1 = lVar11;
        }
        else {
          *param_1 = lVar12;
          param_1[1] = lVar8;
          if (iVar2 <= iVar1) goto LAB_10a3a9560;
          param_1[1] = lVar11;
        }
        param_1[2] = lVar8;
        lVar5 = lVar8;
      }
      else if (iVar7 < iVar2) {
        param_1[1] = lVar11;
        param_1[2] = lVar12;
        lVar5 = lVar12;
        if (iVar1 < iVar2) {
          *param_1 = lVar11;
          param_1[1] = lVar8;
        }
      }
LAB_10a3a9560:
      if (*(int *)(param_2[-1] + 0x54) <= *(int *)(lVar5 + 0x54)) {
        return true;
      }
      param_1[2] = param_2[-1];
      param_2[-1] = lVar5;
      lVar8 = param_1[1];
      lVar12 = param_1[2];
      iVar7 = *(int *)(lVar12 + 0x54);
      if (iVar7 <= *(int *)(lVar8 + 0x54)) {
        return true;
      }
      param_1[1] = lVar12;
      param_1[2] = lVar8;
      lVar8 = *param_1;
      if (iVar7 <= *(int *)(lVar8 + 0x54)) {
        return true;
      }
      *param_1 = lVar12;
      param_1[1] = lVar8;
      return true;
    }
    if (uVar4 == 5) {
      FUN_10a3a91ac(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
      return true;
    }
  }
  lVar5 = param_1[2];
  lVar8 = *param_1;
  lVar12 = param_1[1];
  iVar7 = *(int *)(lVar12 + 0x54);
  iVar1 = *(int *)(lVar8 + 0x54);
  iVar2 = *(int *)(lVar5 + 0x54);
  if (iVar1 < iVar7) {
    if (iVar7 < iVar2) {
      *param_1 = lVar5;
    }
    else {
      *param_1 = lVar12;
      param_1[1] = lVar8;
      if (iVar2 <= iVar1) goto LAB_10a3a94b8;
      param_1[1] = lVar5;
    }
    param_1[2] = lVar8;
  }
  else if (iVar7 < iVar2) {
    param_1[1] = lVar5;
    param_1[2] = lVar12;
    if (iVar1 < iVar2) {
      *param_1 = lVar5;
      param_1[1] = lVar8;
    }
  }
LAB_10a3a94b8:
  if (param_1 + 3 != param_2) {
    iVar7 = 0;
    lVar8 = 0x18;
    plVar10 = param_1 + 3;
    plVar9 = param_1 + 2;
    do {
      plVar6 = plVar10;
      lVar11 = *plVar6;
      iVar1 = *(int *)(lVar11 + 0x54);
      lVar5 = *plVar9;
      lVar12 = lVar8;
      if (*(int *)(lVar5 + 0x54) < iVar1) {
        do {
          *(long *)((long)param_1 + lVar12) = lVar5;
          lVar3 = lVar12 + -8;
          plVar10 = param_1;
          if (lVar3 == 0) goto LAB_10a3a9518;
          lVar5 = *(long *)((long)param_1 + lVar12 + -0x10);
          lVar12 = lVar3;
        } while (*(int *)(lVar5 + 0x54) < iVar1);
        plVar10 = (long *)((long)param_1 + lVar3);
LAB_10a3a9518:
        *plVar10 = lVar11;
        iVar7 = iVar7 + 1;
        if (iVar7 == 8) {
          return plVar6 + 1 == param_2;
        }
      }
      lVar8 = lVar8 + 8;
      plVar10 = plVar6 + 1;
      plVar9 = plVar6;
    } while (plVar6 + 1 != param_2);
  }
  return true;
}



/* Entry: 10a3a95c4; end: 10a3a9fc7;  */

void FUN_10a3a95c4(long *param_1,long *param_2,long param_3,uint param_4)

{
  ulong uVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  
LAB_10a3a95f0:
  do {
    plVar19 = param_1;
    uVar7 = (long)param_2 - (long)plVar19 >> 3;
    if (uVar7 - 2 == 0 || (long)uVar7 < 2) {
      if (uVar7 < 2) {
        return;
      }
      if (uVar7 == 2) {
        lVar9 = *plVar19;
        if (*(ulong *)(param_2[-1] + 0x18) < *(ulong *)(lVar9 + 0x18)) {
          *plVar19 = param_2[-1];
          param_2[-1] = lVar9;
          return;
        }
        return;
      }
    }
    else {
      if (uVar7 == 3) {
        lVar9 = *plVar19;
        lVar8 = plVar19[1];
        uVar11 = *(ulong *)(lVar8 + 0x18);
        uVar7 = *(ulong *)(lVar9 + 0x18);
        lVar12 = param_2[-1];
        if (uVar11 < uVar7) {
          if (*(ulong *)(lVar12 + 0x18) < uVar11) {
            *plVar19 = lVar12;
          }
          else {
            *plVar19 = lVar8;
            plVar19[1] = lVar9;
            if (uVar7 <= *(ulong *)(param_2[-1] + 0x18)) {
              return;
            }
            plVar19[1] = param_2[-1];
          }
          param_2[-1] = lVar9;
          return;
        }
        if (*(ulong *)(lVar12 + 0x18) < uVar11) {
          plVar19[1] = lVar12;
          param_2[-1] = lVar8;
          lVar9 = *plVar19;
          if (*(ulong *)(plVar19[1] + 0x18) < *(ulong *)(lVar9 + 0x18)) {
            *plVar19 = plVar19[1];
            plVar19[1] = lVar9;
            return;
          }
          return;
        }
        return;
      }
      if (uVar7 == 4) {
        plVar5 = plVar19 + 1;
        lVar9 = *plVar5;
        plVar10 = plVar19 + 2;
        lVar8 = *plVar10;
        lVar12 = *plVar19;
        uVar15 = *(ulong *)(lVar9 + 0x18);
        uVar7 = *(ulong *)(lVar12 + 0x18);
        uVar11 = *(ulong *)(lVar8 + 0x18);
        plVar4 = plVar19;
        if (uVar15 < uVar7) {
          lVar6 = lVar12;
          plVar18 = plVar10;
          if (uVar15 <= uVar11) {
            *plVar19 = lVar9;
            plVar19[1] = lVar12;
            lVar9 = lVar8;
            plVar4 = plVar5;
            goto joined_r0x00010a3a9ec0;
          }
        }
        else {
          lVar13 = lVar8;
          if (uVar15 <= uVar11) goto LAB_10a3a9f44;
          *plVar5 = lVar8;
          *plVar10 = lVar9;
          plVar18 = plVar5;
          lVar6 = lVar9;
joined_r0x00010a3a9ec0:
          lVar13 = lVar9;
          if (uVar7 <= uVar11) goto LAB_10a3a9f44;
        }
        *plVar4 = lVar8;
        *plVar18 = lVar12;
        lVar13 = lVar6;
LAB_10a3a9f44:
        if (*(ulong *)(lVar13 + 0x18) <= *(ulong *)(param_2[-1] + 0x18)) {
          return;
        }
        *plVar10 = param_2[-1];
        param_2[-1] = lVar13;
        lVar9 = *plVar10;
        lVar8 = *plVar5;
        uVar7 = *(ulong *)(lVar9 + 0x18);
        if (uVar7 < *(ulong *)(lVar8 + 0x18)) {
          plVar19[1] = lVar9;
          plVar19[2] = lVar8;
          lVar8 = *plVar19;
          if (uVar7 < *(ulong *)(lVar8 + 0x18)) {
            *plVar19 = lVar9;
            plVar19[1] = lVar8;
            return;
          }
          return;
        }
        return;
      }
      if (uVar7 == 5) {
        plVar4 = plVar19 + 1;
        plVar5 = plVar19 + 2;
        plVar10 = plVar19 + 3;
        lVar8 = *plVar4;
        lVar12 = *plVar19;
        uVar11 = *(ulong *)(lVar8 + 0x18);
        uVar7 = *(ulong *)(lVar12 + 0x18);
        lVar9 = *plVar5;
        if (uVar11 < uVar7) {
          if (*(ulong *)(lVar9 + 0x18) < uVar11) {
            *plVar19 = lVar9;
          }
          else {
            *plVar19 = lVar8;
            *plVar4 = lVar12;
            lVar9 = *plVar5;
            if (uVar7 <= *(ulong *)(lVar9 + 0x18)) goto LAB_10a3aa05c;
            *plVar4 = lVar9;
          }
          *plVar5 = lVar12;
          lVar9 = lVar12;
        }
        else if (*(ulong *)(lVar9 + 0x18) < uVar11) {
          *plVar4 = lVar9;
          *plVar5 = lVar8;
          lVar12 = *plVar19;
          lVar9 = lVar8;
          if (*(ulong *)(*plVar4 + 0x18) < *(ulong *)(lVar12 + 0x18)) {
            *plVar19 = *plVar4;
            *plVar4 = lVar12;
            lVar9 = *plVar5;
          }
        }
LAB_10a3aa05c:
        if (*(ulong *)(*plVar10 + 0x18) < *(ulong *)(lVar9 + 0x18)) {
          *plVar5 = *plVar10;
          *plVar10 = lVar9;
          lVar9 = *plVar4;
          if (*(ulong *)(*plVar5 + 0x18) < *(ulong *)(lVar9 + 0x18)) {
            *plVar4 = *plVar5;
            *plVar5 = lVar9;
            lVar9 = *plVar19;
            if (*(ulong *)(*plVar4 + 0x18) < *(ulong *)(lVar9 + 0x18)) {
              *plVar19 = *plVar4;
              *plVar4 = lVar9;
            }
          }
        }
        lVar9 = param_2[-1];
        lVar8 = *plVar10;
        if (*(ulong *)(lVar9 + 0x18) < *(ulong *)(lVar8 + 0x18)) {
          *plVar10 = lVar9;
          param_2[-1] = lVar8;
          lVar9 = *plVar5;
          if (*(ulong *)(*plVar10 + 0x18) < *(ulong *)(lVar9 + 0x18)) {
            *plVar5 = *plVar10;
            *plVar10 = lVar9;
            lVar9 = *plVar4;
            if (*(ulong *)(*plVar5 + 0x18) < *(ulong *)(lVar9 + 0x18)) {
              *plVar4 = *plVar5;
              *plVar5 = lVar9;
              lVar9 = *plVar19;
              if (*(ulong *)(*plVar4 + 0x18) < *(ulong *)(lVar9 + 0x18)) {
                *plVar19 = *plVar4;
                *plVar4 = lVar9;
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar7 < 0x18) {
      plVar4 = plVar19 + 1;
      if ((param_4 & 1) == 0) {
        if (plVar19 == param_2 || plVar4 == param_2) {
          return;
        }
        lVar9 = 0;
        lVar8 = 8;
        do {
          lVar12 = *(long *)((long)plVar19 + lVar9);
          lVar9 = *plVar4;
          uVar7 = *(ulong *)(lVar9 + 0x18);
          if (uVar7 < *(ulong *)(lVar12 + 0x18)) {
            lVar13 = 0;
            do {
              *(long *)((long)plVar4 + lVar13) = lVar12;
              if (lVar8 + lVar13 == 0) goto LAB_10a3a9f3c;
              lVar12 = ((long *)((long)plVar4 + lVar13))[-2];
              lVar13 = lVar13 + -8;
            } while (uVar7 < *(ulong *)(lVar12 + 0x18));
            *(long *)((long)plVar4 + lVar13) = lVar9;
          }
          plVar4 = plVar4 + 1;
          lVar9 = lVar8;
          lVar8 = lVar8 + 8;
          if (plVar4 == param_2) {
            return;
          }
        } while( true );
      }
      if (plVar19 == param_2 || plVar4 == param_2) {
        return;
      }
      lVar9 = 8;
      plVar5 = plVar19;
      do {
        plVar10 = plVar4;
        lVar13 = *plVar5;
        lVar12 = *plVar10;
        uVar7 = *(ulong *)(lVar12 + 0x18);
        lVar8 = lVar9;
        if (uVar7 < *(ulong *)(lVar13 + 0x18)) {
          do {
            *(long *)((long)plVar19 + lVar8) = lVar13;
            lVar6 = lVar8 + -8;
            plVar4 = plVar19;
            if (lVar6 == 0) goto LAB_10a3a9c78;
            lVar13 = *(long *)((long)plVar19 + lVar8 + -0x10);
            lVar8 = lVar6;
          } while (uVar7 < *(ulong *)(lVar13 + 0x18));
          plVar4 = (long *)((long)plVar19 + lVar6);
LAB_10a3a9c78:
          *plVar4 = lVar12;
        }
        lVar9 = lVar9 + 8;
        plVar4 = plVar10 + 1;
        plVar5 = plVar10;
        if (plVar10 + 1 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (plVar19 == param_2) {
        return;
      }
      uVar15 = uVar7 - 2 >> 1;
      uVar11 = uVar15;
      do {
        if ((long)uVar11 <= (long)uVar15) {
          uVar14 = uVar11 << 1 | 1;
          plVar4 = plVar19 + uVar14;
          uVar16 = uVar11 * 2 + 2;
          lVar8 = *plVar4;
          plVar5 = plVar4;
          lVar9 = lVar8;
          uVar17 = uVar14;
          if ((long)uVar16 < (long)uVar7) {
            lVar9 = plVar4[1];
            plVar5 = plVar4 + 1;
            uVar17 = uVar16;
            if (*(ulong *)(lVar9 + 0x18) <= *(ulong *)(lVar8 + 0x18)) {
              plVar5 = plVar4;
              lVar9 = lVar8;
              uVar17 = uVar14;
            }
          }
          lVar8 = plVar19[uVar11];
          uVar16 = *(ulong *)(lVar8 + 0x18);
          plVar4 = plVar19 + uVar11;
          if (uVar16 <= *(ulong *)(lVar9 + 0x18)) {
            do {
              plVar10 = plVar5;
              *plVar4 = lVar9;
              if ((long)uVar15 < (long)uVar17) break;
              uVar1 = uVar17 << 1 | 1;
              plVar4 = plVar19 + uVar1;
              uVar14 = uVar17 * 2 + 2;
              lVar12 = *plVar4;
              plVar5 = plVar4;
              lVar9 = lVar12;
              uVar17 = uVar1;
              if ((long)uVar14 < (long)uVar7) {
                lVar9 = plVar4[1];
                plVar5 = plVar4 + 1;
                uVar17 = uVar14;
                if (*(ulong *)(lVar9 + 0x18) <= *(ulong *)(lVar12 + 0x18)) {
                  plVar5 = plVar4;
                  lVar9 = lVar12;
                  uVar17 = uVar1;
                }
              }
              plVar4 = plVar10;
            } while (uVar16 <= *(ulong *)(lVar9 + 0x18));
            *plVar10 = lVar8;
          }
        }
        bVar2 = uVar11 != 0;
        uVar11 = uVar11 - 1;
      } while (bVar2);
      do {
        lVar9 = *plVar19;
        plVar4 = plVar19;
        uVar11 = 0;
        do {
          plVar10 = plVar4 + uVar11 + 1;
          lVar12 = *plVar10;
          uVar16 = uVar11 << 1 | 1;
          uVar15 = uVar11 * 2 + 2;
          plVar5 = plVar10;
          uVar14 = uVar16;
          lVar8 = lVar12;
          if ((long)uVar15 < (long)uVar7) {
            lVar8 = plVar4[uVar11 + 2];
            plVar5 = plVar4 + uVar11 + 2;
            uVar14 = uVar15;
            if (*(ulong *)(lVar8 + 0x18) <= *(ulong *)(lVar12 + 0x18)) {
              plVar5 = plVar10;
              uVar14 = uVar16;
              lVar8 = lVar12;
            }
          }
          *plVar4 = lVar8;
          plVar4 = plVar5;
          uVar11 = uVar14;
        } while ((long)uVar14 <= (long)(uVar7 - 2 >> 1));
        param_2 = param_2 + -1;
        if (plVar5 == param_2) {
          *plVar5 = lVar9;
        }
        else {
          *plVar5 = *param_2;
          *param_2 = lVar9;
          lVar9 = (long)plVar5 + (8 - (long)plVar19) >> 3;
          if (1 < lVar9) {
            uVar11 = lVar9 - 2U >> 1;
            lVar8 = plVar19[uVar11];
            lVar9 = *plVar5;
            uVar15 = *(ulong *)(lVar9 + 0x18);
            plVar4 = plVar19 + uVar11;
            if (*(ulong *)(lVar8 + 0x18) < uVar15) {
              do {
                plVar10 = plVar4;
                *plVar5 = lVar8;
                if (uVar11 == 0) break;
                uVar11 = uVar11 - 1 >> 1;
                lVar8 = plVar19[uVar11];
                plVar5 = plVar10;
                plVar4 = plVar19 + uVar11;
              } while (*(ulong *)(lVar8 + 0x18) < uVar15);
              *plVar10 = lVar9;
            }
          }
        }
        bVar2 = (long)uVar7 < 3;
        uVar7 = uVar7 - 1;
        if (bVar2) {
          return;
        }
      } while( true );
    }
    plVar4 = plVar19 + (uVar7 >> 1);
    lVar9 = param_2[-1];
    uVar11 = *(ulong *)(lVar9 + 0x18);
    if (uVar7 < 0x81) {
      lVar12 = *plVar19;
      lVar8 = *plVar4;
      uVar15 = *(ulong *)(lVar12 + 0x18);
      uVar7 = *(ulong *)(lVar8 + 0x18);
      if (uVar15 < uVar7) {
        if (uVar11 < uVar15) {
          *plVar4 = lVar9;
        }
        else {
          *plVar4 = lVar12;
          *plVar19 = lVar8;
          if (uVar7 <= *(ulong *)(param_2[-1] + 0x18)) goto LAB_10a3a98cc;
          *plVar19 = param_2[-1];
        }
        param_2[-1] = lVar8;
      }
      else if (uVar11 < uVar15) {
        *plVar19 = lVar9;
        param_2[-1] = lVar12;
        lVar9 = *plVar4;
        if (*(ulong *)(*plVar19 + 0x18) < *(ulong *)(lVar9 + 0x18)) {
          *plVar4 = *plVar19;
          *plVar19 = lVar9;
        }
      }
    }
    else {
      lVar12 = *plVar4;
      lVar8 = *plVar19;
      uVar15 = *(ulong *)(lVar12 + 0x18);
      uVar7 = *(ulong *)(lVar8 + 0x18);
      if (uVar15 < uVar7) {
        if (uVar11 < uVar15) {
          *plVar19 = lVar9;
        }
        else {
          *plVar19 = lVar12;
          *plVar4 = lVar8;
          if (uVar7 <= *(ulong *)(param_2[-1] + 0x18)) goto LAB_10a3a9728;
          *plVar4 = param_2[-1];
        }
        param_2[-1] = lVar8;
      }
      else if (uVar11 < uVar15) {
        *plVar4 = lVar9;
        param_2[-1] = lVar12;
        lVar9 = *plVar19;
        if (*(ulong *)(*plVar4 + 0x18) < *(ulong *)(lVar9 + 0x18)) {
          *plVar19 = *plVar4;
          *plVar4 = lVar9;
        }
      }
LAB_10a3a9728:
      plVar5 = plVar4 + -1;
      lVar8 = *plVar5;
      lVar9 = plVar19[1];
      uVar11 = *(ulong *)(lVar8 + 0x18);
      uVar7 = *(ulong *)(lVar9 + 0x18);
      lVar12 = param_2[-2];
      if (uVar11 < uVar7) {
        if (*(ulong *)(lVar12 + 0x18) < uVar11) {
          plVar19[1] = lVar12;
        }
        else {
          plVar19[1] = lVar8;
          *plVar5 = lVar9;
          if (uVar7 <= *(ulong *)(param_2[-2] + 0x18)) goto LAB_10a3a97d4;
          *plVar5 = param_2[-2];
        }
        param_2[-2] = lVar9;
      }
      else if (*(ulong *)(lVar12 + 0x18) < uVar11) {
        *plVar5 = lVar12;
        param_2[-2] = lVar8;
        lVar9 = plVar19[1];
        if (*(ulong *)(*plVar5 + 0x18) < *(ulong *)(lVar9 + 0x18)) {
          plVar19[1] = *plVar5;
          *plVar5 = lVar9;
        }
      }
LAB_10a3a97d4:
      plVar10 = plVar4 + 1;
      lVar8 = *plVar10;
      lVar9 = plVar19[2];
      uVar11 = *(ulong *)(lVar8 + 0x18);
      uVar7 = *(ulong *)(lVar9 + 0x18);
      lVar12 = param_2[-3];
      if (uVar11 < uVar7) {
        if (*(ulong *)(lVar12 + 0x18) < uVar11) {
          plVar19[2] = lVar12;
        }
        else {
          plVar19[2] = lVar8;
          *plVar10 = lVar9;
          if (uVar7 <= *(ulong *)(param_2[-3] + 0x18)) goto LAB_10a3a985c;
          *plVar10 = param_2[-3];
        }
        param_2[-3] = lVar9;
      }
      else if (*(ulong *)(lVar12 + 0x18) < uVar11) {
        *plVar10 = lVar12;
        param_2[-3] = lVar8;
        lVar9 = plVar19[2];
        if (*(ulong *)(*plVar10 + 0x18) < *(ulong *)(lVar9 + 0x18)) {
          plVar19[2] = *plVar10;
          *plVar10 = lVar9;
        }
      }
LAB_10a3a985c:
      lVar9 = plVar4[-1];
      lVar8 = *plVar4;
      uVar15 = *(ulong *)(lVar8 + 0x18);
      uVar7 = *(ulong *)(lVar9 + 0x18);
      lVar12 = plVar4[1];
      uVar11 = *(ulong *)(lVar12 + 0x18);
      if (uVar15 < uVar7) {
        lVar13 = lVar8;
        if (uVar15 <= uVar11) {
          plVar4[-1] = lVar8;
          *plVar4 = lVar9;
          plVar5 = plVar4;
          lVar8 = lVar9;
          lVar13 = lVar12;
          if (uVar7 <= uVar11) goto LAB_10a3a98c0;
        }
LAB_10a3a98b8:
        *plVar5 = lVar12;
        *plVar10 = lVar9;
        lVar8 = lVar13;
      }
      else if (uVar11 < uVar15) {
        *plVar4 = lVar12;
        plVar4[1] = lVar8;
        plVar10 = plVar4;
        lVar8 = lVar12;
        lVar13 = lVar9;
        if (uVar11 < uVar7) goto LAB_10a3a98b8;
      }
LAB_10a3a98c0:
      lVar9 = *plVar19;
      *plVar19 = lVar8;
      *plVar4 = lVar9;
    }
LAB_10a3a98cc:
    param_3 = param_3 + -1;
    lVar9 = *plVar19;
    param_1 = plVar19;
    if (((param_4 & 1) == 0) &&
       (uVar7 = *(ulong *)(lVar9 + 0x18), uVar7 <= *(ulong *)(plVar19[-1] + 0x18))) {
      if (uVar7 < *(ulong *)(param_2[-1] + 0x18)) {
        do {
          param_1 = param_1 + 1;
          if (param_1 == param_2) goto LAB_10a3a9f3c;
        } while (*(ulong *)(*param_1 + 0x18) <= uVar7);
      }
      else {
        do {
          param_1 = param_1 + 1;
          if (param_2 <= param_1) break;
        } while (*(ulong *)(*param_1 + 0x18) <= uVar7);
      }
      plVar4 = param_2;
      if (param_1 < param_2) {
        do {
          if (plVar4 == plVar19) goto LAB_10a3a9f3c;
          plVar4 = plVar4 + -1;
        } while (uVar7 < *(ulong *)(*plVar4 + 0x18));
      }
      if (param_1 < plVar4) {
        lVar8 = *param_1;
        lVar12 = *plVar4;
        do {
          *param_1 = lVar12;
          *plVar4 = lVar8;
          do {
            param_1 = param_1 + 1;
            if (param_1 == param_2) goto LAB_10a3a9f3c;
            lVar8 = *param_1;
          } while (*(ulong *)(lVar8 + 0x18) <= uVar7);
          do {
            if (plVar4 == plVar19) goto LAB_10a3a9f3c;
            plVar4 = plVar4 + -1;
            lVar12 = *plVar4;
          } while (uVar7 < *(ulong *)(lVar12 + 0x18));
        } while (param_1 < plVar4);
      }
      plVar4 = param_1 + -1;
      if (plVar4 != plVar19) {
        *plVar19 = *plVar4;
      }
      param_4 = 0;
      *plVar4 = lVar9;
      goto LAB_10a3a95f0;
    }
    lVar8 = 0;
    do {
      plVar4 = (long *)((long)plVar19 + lVar8 + 8);
      if (plVar4 == param_2) goto LAB_10a3a9f3c;
      lVar12 = *plVar4;
      uVar7 = *(ulong *)(lVar9 + 0x18);
      lVar8 = lVar8 + 8;
    } while (*(ulong *)(lVar12 + 0x18) < uVar7);
    plVar4 = (long *)((long)plVar19 + lVar8);
    plVar5 = param_2;
    if (lVar8 == 8) {
      do {
        if (plVar5 <= plVar4) break;
        plVar5 = plVar5 + -1;
      } while (uVar7 <= *(ulong *)(*plVar5 + 0x18));
    }
    else {
      do {
        if (plVar5 == plVar19) {
LAB_10a3a9f3c:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10a3a9f40);
          (*pcVar3)();
        }
        plVar5 = plVar5 + -1;
      } while (uVar7 <= *(ulong *)(*plVar5 + 0x18));
    }
    param_1 = plVar4;
    if (plVar4 < plVar5) {
      lVar8 = *plVar5;
      plVar10 = plVar5;
      do {
        *param_1 = lVar8;
        *plVar10 = lVar12;
        do {
          param_1 = param_1 + 1;
          if (param_1 == param_2) goto LAB_10a3a9f3c;
          lVar12 = *param_1;
        } while (*(ulong *)(lVar12 + 0x18) < uVar7);
        do {
          if (plVar10 == plVar19) goto LAB_10a3a9f3c;
          plVar10 = plVar10 + -1;
          lVar8 = *plVar10;
        } while (uVar7 <= *(ulong *)(lVar8 + 0x18));
      } while (param_1 < plVar10);
    }
    plVar10 = param_1 + -1;
    if (plVar10 != plVar19) {
      *plVar19 = *plVar10;
    }
    *plVar10 = lVar9;
    if (plVar4 < plVar5) {
LAB_10a3a9a0c:
      FUN_10a3a95c4(plVar19,plVar10,param_3,param_4 & 1);
      param_4 = 0;
    }
    else {
      plVar4 = plVar19;
      FUN_10a3aa13c(plVar19,plVar10);
      plVar5 = param_1;
      FUN_10a3aa13c(param_1,param_2);
      if ((int)plVar5 == 0) {
        if (((ulong)plVar4 & 1) == 0) goto LAB_10a3a9a0c;
      }
      else {
        param_1 = plVar19;
        param_2 = plVar10;
        if (((ulong)plVar4 & 1) != 0) {
          return;
        }
      }
    }
  } while( true );
}



/* Entry: 10a3a9fc8; end: 10a3aa13b;  */

void FUN_10a3a9fc8(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  lVar1 = *param_2;
  lVar2 = *param_1;
  uVar5 = *(ulong *)(lVar1 + 0x18);
  uVar3 = *(ulong *)(lVar2 + 0x18);
  lVar4 = *param_3;
  if (uVar5 < uVar3) {
    if (*(ulong *)(lVar4 + 0x18) < uVar5) {
      *param_1 = lVar4;
    }
    else {
      *param_1 = lVar1;
      *param_2 = lVar2;
      lVar4 = *param_3;
      if (uVar3 <= *(ulong *)(lVar4 + 0x18)) goto LAB_10a3aa05c;
      *param_2 = lVar4;
    }
    *param_3 = lVar2;
    lVar4 = lVar2;
  }
  else if (*(ulong *)(lVar4 + 0x18) < uVar5) {
    *param_2 = lVar4;
    *param_3 = lVar1;
    lVar2 = *param_1;
    lVar4 = lVar1;
    if (*(ulong *)(*param_2 + 0x18) < *(ulong *)(lVar2 + 0x18)) {
      *param_1 = *param_2;
      *param_2 = lVar2;
      lVar4 = *param_3;
    }
  }
LAB_10a3aa05c:
  if (*(ulong *)(*param_4 + 0x18) < *(ulong *)(lVar4 + 0x18)) {
    *param_3 = *param_4;
    *param_4 = lVar4;
    lVar4 = *param_2;
    if (*(ulong *)(*param_3 + 0x18) < *(ulong *)(lVar4 + 0x18)) {
      *param_2 = *param_3;
      *param_3 = lVar4;
      lVar4 = *param_1;
      if (*(ulong *)(*param_2 + 0x18) < *(ulong *)(lVar4 + 0x18)) {
        *param_1 = *param_2;
        *param_2 = lVar4;
      }
    }
  }
  lVar4 = *param_4;
  if (*(ulong *)(*param_5 + 0x18) < *(ulong *)(lVar4 + 0x18)) {
    *param_4 = *param_5;
    *param_5 = lVar4;
    lVar4 = *param_3;
    if (*(ulong *)(*param_4 + 0x18) < *(ulong *)(lVar4 + 0x18)) {
      *param_3 = *param_4;
      *param_4 = lVar4;
      lVar4 = *param_2;
      if (*(ulong *)(*param_3 + 0x18) < *(ulong *)(lVar4 + 0x18)) {
        *param_2 = *param_3;
        *param_3 = lVar4;
        lVar4 = *param_1;
        if (*(ulong *)(*param_2 + 0x18) < *(ulong *)(lVar4 + 0x18)) {
          *param_1 = *param_2;
          *param_2 = lVar4;
        }
      }
    }
  }
  return;
}



/* Entry: 10a3aa13c; end: 10a3aa41b;  */

bool FUN_10a3aa13c(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  
  uVar2 = (long)param_2 - (long)param_1 >> 3;
  if ((long)uVar2 < 3) {
    if (uVar2 < 2) {
      return true;
    }
    if (uVar2 == 2) {
      lVar4 = *param_1;
      if (*(ulong *)(param_2[-1] + 0x18) < *(ulong *)(lVar4 + 0x18)) {
        *param_1 = param_2[-1];
        param_2[-1] = lVar4;
        return true;
      }
      return true;
    }
  }
  else {
    if (uVar2 == 3) {
      lVar4 = *param_1;
      lVar5 = param_1[1];
      uVar7 = *(ulong *)(lVar5 + 0x18);
      uVar2 = *(ulong *)(lVar4 + 0x18);
      lVar9 = param_2[-1];
      if (uVar7 < uVar2) {
        if (*(ulong *)(lVar9 + 0x18) < uVar7) {
          *param_1 = lVar9;
        }
        else {
          *param_1 = lVar5;
          param_1[1] = lVar4;
          if (uVar2 <= *(ulong *)(param_2[-1] + 0x18)) {
            return true;
          }
          param_1[1] = param_2[-1];
        }
        param_2[-1] = lVar4;
        return true;
      }
      if (*(ulong *)(lVar9 + 0x18) < uVar7) {
        param_1[1] = lVar9;
        param_2[-1] = lVar5;
        lVar4 = *param_1;
        if (*(ulong *)(param_1[1] + 0x18) < *(ulong *)(lVar4 + 0x18)) {
          *param_1 = param_1[1];
          param_1[1] = lVar4;
          return true;
        }
        return true;
      }
      return true;
    }
    if (uVar2 == 4) {
      plVar10 = param_1 + 1;
      lVar4 = *plVar10;
      plVar11 = param_1 + 2;
      lVar5 = *plVar11;
      lVar9 = *param_1;
      uVar13 = *(ulong *)(lVar4 + 0x18);
      uVar2 = *(ulong *)(lVar9 + 0x18);
      uVar7 = *(ulong *)(lVar5 + 0x18);
      plVar6 = param_1;
      if (uVar13 < uVar2) {
        lVar1 = lVar9;
        plVar12 = plVar11;
        if (uVar13 <= uVar7) {
          *param_1 = lVar4;
          param_1[1] = lVar9;
          lVar4 = lVar5;
          plVar6 = plVar10;
          goto joined_r0x00010a3aa37c;
        }
      }
      else {
        lVar8 = lVar5;
        if (uVar13 <= uVar7) goto LAB_10a3aa394;
        *plVar10 = lVar5;
        *plVar11 = lVar4;
        plVar12 = plVar10;
        lVar1 = lVar4;
joined_r0x00010a3aa37c:
        lVar8 = lVar4;
        if (uVar2 <= uVar7) goto LAB_10a3aa394;
      }
      *plVar6 = lVar5;
      *plVar12 = lVar9;
      lVar8 = lVar1;
LAB_10a3aa394:
      if (*(ulong *)(lVar8 + 0x18) <= *(ulong *)(param_2[-1] + 0x18)) {
        return true;
      }
      *plVar11 = param_2[-1];
      param_2[-1] = lVar8;
      lVar4 = *plVar11;
      lVar5 = *plVar10;
      uVar2 = *(ulong *)(lVar4 + 0x18);
      if (uVar2 < *(ulong *)(lVar5 + 0x18)) {
        param_1[1] = lVar4;
        param_1[2] = lVar5;
        lVar5 = *param_1;
        if (uVar2 < *(ulong *)(lVar5 + 0x18)) {
          *param_1 = lVar4;
          param_1[1] = lVar5;
          return true;
        }
        return true;
      }
      return true;
    }
    if (uVar2 == 5) {
      FUN_10a3a9fc8(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
      return true;
    }
  }
  plVar6 = param_1 + 2;
  lVar4 = *plVar6;
  plVar11 = param_1 + 1;
  lVar9 = *plVar11;
  lVar5 = *param_1;
  uVar13 = *(ulong *)(lVar9 + 0x18);
  uVar2 = *(ulong *)(lVar5 + 0x18);
  uVar7 = *(ulong *)(lVar4 + 0x18);
  plVar10 = param_1;
  if (uVar13 < uVar2) {
    plVar12 = plVar6;
    if (uVar13 <= uVar7) {
      *param_1 = lVar9;
      param_1[1] = lVar5;
      plVar10 = plVar11;
      plVar11 = plVar6;
      goto LAB_10a3aa2c4;
    }
  }
  else {
    if (uVar13 <= uVar7) goto LAB_10a3aa2d4;
    *plVar11 = lVar4;
    *plVar6 = lVar9;
LAB_10a3aa2c4:
    plVar12 = plVar11;
    if (uVar2 <= uVar7) goto LAB_10a3aa2d4;
  }
  *plVar10 = lVar4;
  *plVar12 = lVar5;
LAB_10a3aa2d4:
  if (param_1 + 3 != param_2) {
    iVar3 = 0;
    lVar4 = 0x18;
    plVar10 = param_1 + 3;
    do {
      plVar11 = plVar10;
      lVar9 = *plVar11;
      lVar8 = *plVar6;
      uVar2 = *(ulong *)(lVar9 + 0x18);
      lVar5 = lVar4;
      if (uVar2 < *(ulong *)(lVar8 + 0x18)) {
        do {
          *(long *)((long)param_1 + lVar5) = lVar8;
          lVar1 = lVar5 + -8;
          plVar6 = param_1;
          if (lVar1 == 0) goto LAB_10a3aa334;
          lVar8 = *(long *)((long)param_1 + lVar5 + -0x10);
          lVar5 = lVar1;
        } while (uVar2 < *(ulong *)(lVar8 + 0x18));
        plVar6 = (long *)((long)param_1 + lVar1);
LAB_10a3aa334:
        *plVar6 = lVar9;
        iVar3 = iVar3 + 1;
        if (iVar3 == 8) {
          return plVar11 + 1 == param_2;
        }
      }
      lVar4 = lVar4 + 8;
      plVar10 = plVar11 + 1;
      plVar6 = plVar11;
    } while (plVar11 + 1 != param_2);
  }
  return true;
}



/* Entry: 10a3aa41c; end: 10a3aa593;  */

void FUN_10a3aa41c(long *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined1 uStack_42;
  undefined1 uStack_41;
  
  plVar2 = param_1;
  if ((ulong)((param_1[2] - *param_1 >> 3) * -0x71c71c71c71c71c7) < param_4) {
    plVar1 = param_1;
    FUN_10a3aa594();
    if (0x38e38e38e38e38e < param_4) {
      FUN_10a0d35b4();
      param_1[1] = param_4;
      __Unwind_Resume();
      lVar4 = *plVar1;
      if (lVar4 != 0) {
        lVar6 = plVar1[1];
        lVar3 = lVar4;
        if (lVar6 != lVar4) {
          do {
            lVar6 = lVar6 + -0x48;
            func_0x00010a0d3694(lVar6);
          } while (lVar6 != lVar4);
          lVar3 = *plVar1;
        }
        plVar1[1] = lVar4;
        __ZdlPv(lVar3);
        *plVar1 = 0;
        plVar1[1] = 0;
        plVar1[2] = 0;
      }
      return;
    }
    lVar4 = param_1[2] - *param_1 >> 3;
    uVar5 = lVar4 * 0x1c71c71c71c71c72;
    if (uVar5 < param_4 || uVar5 - param_4 == 0) {
      uVar5 = param_4;
    }
    if (0x1c71c71c71c71c6 < (ulong)(lVar4 * -0x71c71c71c71c71c7)) {
      uVar5 = 0x38e38e38e38e38e;
    }
    FUN_10a3aa5f8(param_1,uVar5);
    FUN_10a3aa644(param_1,param_2,param_3,param_1[1]);
  }
  else {
    lVar4 = param_1[1] - *param_1;
    if (param_4 <= (ulong)((lVar4 >> 3) * -0x71c71c71c71c71c7)) {
      FUN_10a3aa748(&uStack_41,param_2,param_3);
      lVar4 = param_1[1];
      while (lVar4 != param_2) {
        lVar4 = lVar4 + -0x48;
        func_0x00010a0d3694(lVar4);
      }
      param_1[1] = param_2;
      return;
    }
    FUN_10a3aa748(&uStack_42,param_2,param_2 + lVar4);
    FUN_10a3aa644(param_1,param_2 + lVar4,param_3,param_1[1]);
  }
  param_1[1] = (long)plVar2;
  return;
}



/* Entry: 10a3aa594; end: 10a3aa5f7;  */

void FUN_10a3aa594(long *param_1)

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
        lVar2 = lVar2 + -0x48;
        func_0x00010a0d3694(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
    __ZdlPv(lVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10a3aa5f8; end: 10a3aa643;  */

long * FUN_10a3aa5f8(long *param_1,ulong param_2,ulong param_3,long *param_4)

{
  long *plVar1;
  
  if (param_2 < 0x38e38e38e38e38f) {
    plVar1 = param_1;
    FUN_10a0d35c8();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 9);
    return plVar1;
  }
  FUN_10a0d35b4();
  for (; param_2 != param_3; param_2 = param_2 + 0x48) {
    FUN_10a3aa6c8(param_4,param_2);
    param_4 = param_4 + 9;
  }
  return param_4;
}



/* Entry: 10a3aa644; end: 10a3aa6c7;  */

long FUN_10a3aa644(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x48) {
    FUN_10a3aa6c8(param_4,param_2);
    param_4 = param_4 + 0x48;
  }
  return param_4;
}



/* Entry: 10a3aa6c8; end: 10a3aa747;  */

undefined8 * FUN_10a3aa6c8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar6 = param_2[1];
    uVar5 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar6;
    *param_1 = uVar5;
  }
  uVar6 = param_2[4];
  uVar5 = param_2[3];
  uVar7 = *(undefined8 *)((long)param_2 + 0x24);
  *(undefined8 *)((long)param_1 + 0x2c) = *(undefined8 *)((long)param_2 + 0x2c);
  *(undefined8 *)((long)param_1 + 0x24) = uVar7;
  param_1[4] = uVar6;
  param_1[3] = uVar5;
  lVar4 = param_2[8];
  uVar5 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar5;
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
  return param_1;
}



/* Entry: 10a3aa748; end: 10a3aa7c3;  */

undefined1  [16] FUN_10a3aa748(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  lVar1 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x48) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_4,param_2);
    uVar3 = *(undefined8 *)(param_2 + 0x2c);
    uVar2 = *(undefined8 *)(param_2 + 0x24);
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_4 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_4 + 0x18) = uVar4;
    *(undefined8 *)(param_4 + 0x2c) = uVar3;
    *(undefined8 *)(param_4 + 0x24) = uVar2;
    FUN_10a3aa7c4(param_4 + 0x38,param_2 + 0x38);
    param_4 = param_4 + 0x48;
    lVar1 = param_3;
  }
  auVar5._8_8_ = param_4;
  auVar5._0_8_ = lVar1;
  return auVar5;
}



/* Entry: 10a3aa7c4; end: 10a3aa83f;  */

undefined8 * FUN_10a3aa7c4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
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



/* Entry: 10a3aa840; end: 10a3aa8f3;  */

undefined8 * FUN_10a3aa840(undefined8 *param_1,long param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    func_0x00010a131bb8(param_1);
    puVar2 = (undefined8 *)param_1[1];
    puVar1 = puVar2 + param_2 * 3;
    param_2 = param_2 * 0x18;
    do {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      FUN_10a05151c(puVar2,*param_3,param_3[1],param_3[1] - *param_3);
      puVar2 = puVar2 + 3;
      param_2 = param_2 + -0x18;
    } while (param_2 != 0);
    param_1[1] = puVar1;
  }
  return param_1;
}



/* Entry: 10a3aa8f4; end: 10a3aa907;  */

undefined1  [16] FUN_10a3aa8f4(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar2 = param_2 * 0x18;
    __Znwm(lVar2);
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = lVar2;
    return auVar8;
  }
  func_0x000109ffded8();
  lVar2 = plVar1[1] - *plVar1;
  uVar6 = (lVar2 >> 4) * -0x5555555555555555 + 1;
  if (uVar6 < 0x555555555555556) {
    lVar5 = plVar1[2] - *plVar1 >> 4;
    uVar7 = lVar5 * 0x5555555555555556;
    if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
      uVar7 = uVar6;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar5 * -0x5555555555555555)) {
      uVar7 = 0x555555555555555;
    }
    plStack_68 = plVar1;
    if (uVar7 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = plVar1;
      FUN_10a0d38c0();
    }
    lVar2 = (long)plVar3 + lVar2;
    plStack_70 = plVar3 + uVar7 * 6;
    plStack_88 = plVar3;
    plStack_80 = (long *)lVar2;
    plStack_78 = (long *)lVar2;
    FUN_10a3aaa74(lVar2,param_2);
    plStack_78 = (long *)(lVar2 + 0x30);
    lVar5 = *plVar1;
    lVar2 = lVar2 + (lVar5 - plVar1[1]);
    func_0x00010a0d3904(plVar1,lVar5,plVar1[1],lVar2);
    plVar3 = plStack_78;
    plStack_88 = (long *)*plVar1;
    *plVar1 = lVar2;
    lVar2 = plVar1[2];
    plVar1[2] = (long)plStack_70;
    plVar1[1] = (long)plStack_78;
    plStack_80 = plStack_88;
    plStack_78 = plStack_88;
    plStack_70 = (long *)lVar2;
    func_0x00010a0d39d8(&plStack_88);
    auVar9._8_8_ = lVar5;
    auVar9._0_8_ = plVar3;
    return auVar9;
  }
  FUN_10a0d38ac();
  func_0x00010a0d39d8(&plStack_88);
  __Unwind_Resume();
  *plVar1 = 0;
  plVar1[1] = 0;
  plVar1[2] = 0;
  FUN_10a0723d0();
  plVar1[3] = 0;
  plVar1[4] = 0;
  plVar1[5] = 0;
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  FUN_10a3aaaf8();
  auVar10._8_8_ = uVar4;
  auVar10._0_8_ = plVar1;
  return auVar10;
}



/* Entry: 10a3aa908; end: 10a3aa94b;  */

undefined1  [16] FUN_10a3aa908(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar1 = param_2 * 0x18;
    __Znwm(lVar1);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = lVar1;
    return auVar7;
  }
  func_0x000109ffded8();
  lVar1 = param_1[1] - *param_1;
  uVar5 = (lVar1 >> 4) * -0x5555555555555555 + 1;
  if (uVar5 < 0x555555555555556) {
    lVar4 = param_1[2] - *param_1 >> 4;
    uVar6 = lVar4 * 0x5555555555555556;
    if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
      uVar6 = uVar5;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar6 = 0x555555555555555;
    }
    plStack_58 = param_1;
    if (uVar6 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_10a0d38c0();
    }
    lVar1 = (long)plVar2 + lVar1;
    plStack_60 = plVar2 + uVar6 * 6;
    plStack_78 = plVar2;
    plStack_70 = (long *)lVar1;
    plStack_68 = (long *)lVar1;
    FUN_10a3aaa74(lVar1,param_2);
    plStack_68 = (long *)(lVar1 + 0x30);
    lVar4 = *param_1;
    lVar1 = lVar1 + (lVar4 - param_1[1]);
    func_0x00010a0d3904(param_1,lVar4,param_1[1],lVar1);
    plVar2 = plStack_68;
    plStack_78 = (long *)*param_1;
    *param_1 = lVar1;
    lVar1 = param_1[2];
    param_1[2] = (long)plStack_60;
    param_1[1] = (long)plStack_68;
    plStack_70 = plStack_78;
    plStack_68 = plStack_78;
    plStack_60 = (long *)lVar1;
    func_0x00010a0d39d8(&plStack_78);
    auVar8._8_8_ = lVar4;
    auVar8._0_8_ = plVar2;
    return auVar8;
  }
  FUN_10a0d38ac();
  func_0x00010a0d39d8(&plStack_78);
  __Unwind_Resume();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10a0723d0();
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  FUN_10a3aaaf8();
  auVar9._8_8_ = uVar3;
  auVar9._0_8_ = param_1;
  return auVar9;
}



/* Entry: 10a3aa94c; end: 10a3aaa73;  */

long * FUN_10a3aa94c(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar5 = param_1[1] - *param_1;
  uVar3 = (lVar5 >> 4) * -0x5555555555555555 + 1;
  if (uVar3 < 0x555555555555556) {
    lVar2 = param_1[2] - *param_1 >> 4;
    uVar4 = lVar2 * 0x5555555555555556;
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar4 = uVar3;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar2 * -0x5555555555555555)) {
      uVar4 = 0x555555555555555;
    }
    plStack_38 = param_1;
    if (uVar4 == 0) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar1 = param_1;
      FUN_10a0d38c0();
    }
    lVar5 = (long)plVar1 + lVar5;
    plStack_40 = plVar1 + uVar4 * 6;
    plStack_58 = plVar1;
    plStack_50 = (long *)lVar5;
    plStack_48 = (long *)lVar5;
    FUN_10a3aaa74(lVar5,param_2);
    plStack_48 = (long *)(lVar5 + 0x30);
    lVar5 = lVar5 + (*param_1 - param_1[1]);
    func_0x00010a0d3904(param_1,*param_1,param_1[1],lVar5);
    plVar1 = plStack_48;
    plStack_58 = (long *)*param_1;
    *param_1 = lVar5;
    lVar5 = param_1[2];
    param_1[2] = (long)plStack_40;
    param_1[1] = (long)plStack_48;
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    plStack_40 = (long *)lVar5;
    func_0x00010a0d39d8(&plStack_58);
    return plVar1;
  }
  FUN_10a0d38ac();
  func_0x00010a0d39d8(&plStack_58);
  __Unwind_Resume();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10a0723d0();
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_10a3aaaf8();
  return param_1;
}



/* Entry: 10a3aaa74; end: 10a3aaaf7;  */

undefined8 * FUN_10a3aaa74(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10a0723d0();
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_10a3aaaf8();
  return param_1;
}


