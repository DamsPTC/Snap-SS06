/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a2e0c80; end: 10a2e0d9f;  */

long FUN_10a2e0c80(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a2e0da0; end: 10a2e0dbb;  */

void FUN_10a2e0da0(undefined8 param_1)

{
  FUN_10a420f70(param_1,&PTR_PTR_110bc33f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2e0dbc; end: 10a2e0e27;  */

long FUN_10a2e0dbc(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a2e0e28; end: 10a2e0e47;  */

void FUN_10a2e0e28(long param_1)

{
  FUN_10a420f70(param_1 + -0x10,&PTR_PTR_110bc33f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2e0e48; end: 10a2e0e57;  */

void FUN_10a2e0e48(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  param_1[-7] = &PTR_FUN_110bc0908;
  param_1[-5] = &PTR_DAT_110bd5880;
  *param_1 = &PTR_DAT_110bd58d8;
  param_1[6] = &PTR_DAT_110bd58f8;
  param_1[0xf] = &PTR_DAT_110bd5968;
  param_1[0x97] = &PTR_DAT_110bc0b68;
  param_1[0x10] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x95);
  func_0x00010a004e5c(param_1 + 0x93);
  param_1[0x6b] = &PTR_FUN_110b9ec48;
  puStack_28 = param_1 + 0x89;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x86;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x7f;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x7c;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(param_1 + 0x77);
  puStack_28 = param_1 + 0x71;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x6e;
  func_0x00010a04aad4(&puStack_28);
  lVar1 = param_1[0x6a];
  param_1[0x6a] = 0;
  if (lVar1 != 0) {
    FUN_10a447854();
  }
  param_1[0x5c] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x65);
  FUN_10a44a358(param_1 + 0x5e);
  plVar2 = (long *)param_1[0x5b];
  param_1[0x5b] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x59,0);
  FUN_10a4477fc(param_1 + 0x57);
  func_0x00010a4477a4(param_1 + 0x55);
  func_0x00010a4476d0(param_1 + 0x50);
  FUN_10a44763c(param_1 + 0x4d);
  if (param_1[0x4c] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x4a] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x48] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x45);
  if (param_1[0x43] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(param_1 + -7,&PTR_PTR_110bc33f8);
  return;
}



/* Entry: 10a2e0e58; end: 10a2e0e77;  */

void FUN_10a2e0e58(long param_1)

{
  FUN_10a420f70(param_1 + -0x38,&PTR_PTR_110bc33f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2e0e78; end: 10a2e0e87;  */

void FUN_10a2e0e78(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  param_1[-0xd] = &PTR_FUN_110bc0908;
  param_1[-0xb] = &PTR_DAT_110bd5880;
  param_1[-6] = &PTR_DAT_110bd58d8;
  *param_1 = &PTR_DAT_110bd58f8;
  param_1[9] = &PTR_DAT_110bd5968;
  param_1[0x91] = &PTR_DAT_110bc0b68;
  param_1[10] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x8f);
  func_0x00010a004e5c(param_1 + 0x8d);
  param_1[0x65] = &PTR_FUN_110b9ec48;
  puStack_28 = param_1 + 0x83;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x80;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x79;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x76;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(param_1 + 0x71);
  puStack_28 = param_1 + 0x6b;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x68;
  func_0x00010a04aad4(&puStack_28);
  lVar1 = param_1[100];
  param_1[100] = 0;
  if (lVar1 != 0) {
    FUN_10a447854();
  }
  param_1[0x56] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x5f);
  FUN_10a44a358(param_1 + 0x58);
  plVar2 = (long *)param_1[0x55];
  param_1[0x55] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x53,0);
  FUN_10a4477fc(param_1 + 0x51);
  func_0x00010a4477a4(param_1 + 0x4f);
  func_0x00010a4476d0(param_1 + 0x4a);
  FUN_10a44763c(param_1 + 0x47);
  if (param_1[0x46] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x44] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x42] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x3f);
  if (param_1[0x3d] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(param_1 + -0xd,&PTR_PTR_110bc33f8);
  return;
}



/* Entry: 10a2e0e88; end: 10a2e0ea7;  */

void FUN_10a2e0e88(long param_1)

{
  FUN_10a420f70(param_1 + -0x68,&PTR_PTR_110bc33f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2e0ea8; end: 10a2e0eb7;  */

void FUN_10a2e0ea8(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  param_1[-0x16] = &PTR_FUN_110bc0908;
  param_1[-0x14] = &PTR_DAT_110bd5880;
  param_1[-0xf] = &PTR_DAT_110bd58d8;
  param_1[-9] = &PTR_DAT_110bd58f8;
  *param_1 = &PTR_DAT_110bd5968;
  param_1[0x88] = &PTR_DAT_110bc0b68;
  param_1[1] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x86);
  func_0x00010a004e5c(param_1 + 0x84);
  param_1[0x5c] = &PTR_FUN_110b9ec48;
  puStack_28 = param_1 + 0x7a;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x77;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x70;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x6d;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(param_1 + 0x68);
  puStack_28 = param_1 + 0x62;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x5f;
  func_0x00010a04aad4(&puStack_28);
  lVar1 = param_1[0x5b];
  param_1[0x5b] = 0;
  if (lVar1 != 0) {
    FUN_10a447854();
  }
  param_1[0x4d] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x56);
  FUN_10a44a358(param_1 + 0x4f);
  plVar2 = (long *)param_1[0x4c];
  param_1[0x4c] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x4a,0);
  FUN_10a4477fc(param_1 + 0x48);
  func_0x00010a4477a4(param_1 + 0x46);
  func_0x00010a4476d0(param_1 + 0x41);
  FUN_10a44763c(param_1 + 0x3e);
  if (param_1[0x3d] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x3b] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x39] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x36);
  if (param_1[0x34] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(param_1 + -0x16,&PTR_PTR_110bc33f8);
  return;
}



/* Entry: 10a2e0eb8; end: 10a2e0ed7;  */

void FUN_10a2e0eb8(long param_1)

{
  FUN_10a420f70(param_1 + -0xb0,&PTR_PTR_110bc33f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2e0ed8; end: 10a2e0f33;  */

undefined8 FUN_10a2e0ed8(void)

{
  return 0x240ea0ea4778e8cd;
}



/* Entry: 10a2e0f34; end: 10a2e0f53;  */

void FUN_10a2e0f34(long param_1)

{
  FUN_10a420f70(param_1 + -0xb8,&PTR_PTR_110bc33f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2e0f54; end: 10a2e0f6b;  */

void FUN_10a2e0f54(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puStack_28;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_FUN_110bc0908;
  puVar1[2] = &PTR_DAT_110bd5880;
  puVar1[7] = &PTR_DAT_110bd58d8;
  puVar1[0xd] = &PTR_DAT_110bd58f8;
  puVar1[0x16] = &PTR_DAT_110bd5968;
  puVar1[0x9e] = &PTR_DAT_110bc0b68;
  puVar1[0x17] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(puVar1 + 0x9c);
  func_0x00010a004e5c(puVar1 + 0x9a);
  puVar1[0x72] = &PTR_FUN_110b9ec48;
  puStack_28 = puVar1 + 0x90;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = puVar1 + 0x8d;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = puVar1 + 0x86;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = puVar1 + 0x83;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(puVar1 + 0x7e);
  puStack_28 = puVar1 + 0x78;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = puVar1 + 0x75;
  func_0x00010a04aad4(&puStack_28);
  lVar2 = puVar1[0x71];
  puVar1[0x71] = 0;
  if (lVar2 != 0) {
    FUN_10a447854();
  }
  puVar1[99] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(puVar1 + 0x6c);
  FUN_10a44a358(puVar1 + 0x65);
  plVar3 = (long *)puVar1[0x62];
  puVar1[0x62] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  FUN_10a425f6c(puVar1 + 0x60,0);
  FUN_10a4477fc(puVar1 + 0x5e);
  func_0x00010a4477a4(puVar1 + 0x5c);
  func_0x00010a4476d0(puVar1 + 0x57);
  FUN_10a44763c(puVar1 + 0x54);
  if (puVar1[0x53] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (puVar1[0x51] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (puVar1[0x4f] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(puVar1 + 0x4c);
  if (puVar1[0x4a] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(puVar1,&PTR_PTR_110bc33f8);
  return;
}



/* Entry: 10a2e0f6c; end: 10a2e0fa3;  */

void FUN_10a2e0f6c(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a420f70((long)param_1 + lVar1,&PTR_PTR_110bc33f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a2e0fa4; end: 10a2e0feb;  */

long FUN_10a2e0fa4(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a2e0fec; end: 10a2e106f;  */

void FUN_10a2e0fec(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  if (param_1[0x4a] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x45] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_FUN_110bc1a40;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x4b] = &PTR_DAT_110bc1b70;
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



/* Entry: 10a2e1070; end: 10a2e1077;  */

long FUN_10a2e1070(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a2e1078; end: 10a2e139f;  */

void FUN_10a2e1078(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  if (param_1[0x48] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x43] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-2] = &PTR_FUN_110bc1a40;
  *param_1 = &PTR_DAT_110bcfec8;
  param_1[5] = &PTR_DAT_110bcff20;
  param_1[0xb] = &PTR_DAT_110bcff40;
  param_1[0x14] = &PTR_DAT_110bcffb0;
  param_1[0x49] = &PTR_DAT_110bc1b70;
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



/* Entry: 10a2e13a0; end: 10a2e13ab;  */

void FUN_10a2e13a0(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bc1e88;
  param_1[2] = &PTR_DAT_110bd5880;
  param_1[7] = &PTR_DAT_110bd58d8;
  param_1[0xd] = &PTR_DAT_110bd58f8;
  param_1[0x16] = &PTR_DAT_110bd5968;
  param_1[0x9e] = &PTR_DAT_110bc20e8;
  param_1[0x17] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x9c);
  func_0x00010a004e5c(param_1 + 0x9a);
  param_1[0x72] = &PTR_FUN_110b9ec48;
  puStack_28 = param_1 + 0x90;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x8d;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x86;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x83;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(param_1 + 0x7e);
  puStack_28 = param_1 + 0x78;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x75;
  func_0x00010a04aad4(&puStack_28);
  lVar1 = param_1[0x71];
  param_1[0x71] = 0;
  if (lVar1 != 0) {
    FUN_10a447854();
  }
  param_1[99] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x6c);
  FUN_10a44a358(param_1 + 0x65);
  plVar2 = (long *)param_1[0x62];
  param_1[0x62] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x60,0);
  FUN_10a4477fc(param_1 + 0x5e);
  func_0x00010a4477a4(param_1 + 0x5c);
  func_0x00010a4476d0(param_1 + 0x57);
  FUN_10a44763c(param_1 + 0x54);
  if (param_1[0x53] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x51] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x4f] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x4c);
  if (param_1[0x4a] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(param_1,&PTR_PTR_110bc3368);
  return;
}



/* Entry: 10a2e13ac; end: 10a2e13c7;  */

void FUN_10a2e13ac(undefined8 param_1)

{
  FUN_10a420f70(param_1,&PTR_PTR_110bc3360);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2e13c8; end: 10a2e13ef;  */

long FUN_10a2e13c8(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a2e13f0; end: 10a2e140f;  */

void FUN_10a2e13f0(long param_1)

{
  FUN_10a420f70(param_1 + -0x10,&PTR_PTR_110bc3360);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2e1410; end: 10a2e141f;  */

void FUN_10a2e1410(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  param_1[-7] = &PTR_FUN_110bc1e88;
  param_1[-5] = &PTR_DAT_110bd5880;
  *param_1 = &PTR_DAT_110bd58d8;
  param_1[6] = &PTR_DAT_110bd58f8;
  param_1[0xf] = &PTR_DAT_110bd5968;
  param_1[0x97] = &PTR_DAT_110bc20e8;
  param_1[0x10] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x95);
  func_0x00010a004e5c(param_1 + 0x93);
  param_1[0x6b] = &PTR_FUN_110b9ec48;
  puStack_28 = param_1 + 0x89;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x86;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x7f;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x7c;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(param_1 + 0x77);
  puStack_28 = param_1 + 0x71;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x6e;
  func_0x00010a04aad4(&puStack_28);
  lVar1 = param_1[0x6a];
  param_1[0x6a] = 0;
  if (lVar1 != 0) {
    FUN_10a447854();
  }
  param_1[0x5c] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x65);
  FUN_10a44a358(param_1 + 0x5e);
  plVar2 = (long *)param_1[0x5b];
  param_1[0x5b] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x59,0);
  FUN_10a4477fc(param_1 + 0x57);
  func_0x00010a4477a4(param_1 + 0x55);
  func_0x00010a4476d0(param_1 + 0x50);
  FUN_10a44763c(param_1 + 0x4d);
  if (param_1[0x4c] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x4a] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x48] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x45);
  if (param_1[0x43] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(param_1 + -7,&PTR_PTR_110bc3368);
  return;
}



/* Entry: 10a2e1420; end: 10a2e143f;  */

void FUN_10a2e1420(long param_1)

{
  FUN_10a420f70(param_1 + -0x38,&PTR_PTR_110bc3360);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2e1440; end: 10a2e144f;  */

void FUN_10a2e1440(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  param_1[-0xd] = &PTR_FUN_110bc1e88;
  param_1[-0xb] = &PTR_DAT_110bd5880;
  param_1[-6] = &PTR_DAT_110bd58d8;
  *param_1 = &PTR_DAT_110bd58f8;
  param_1[9] = &PTR_DAT_110bd5968;
  param_1[0x91] = &PTR_DAT_110bc20e8;
  param_1[10] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x8f);
  func_0x00010a004e5c(param_1 + 0x8d);
  param_1[0x65] = &PTR_FUN_110b9ec48;
  puStack_28 = param_1 + 0x83;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x80;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x79;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x76;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(param_1 + 0x71);
  puStack_28 = param_1 + 0x6b;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x68;
  func_0x00010a04aad4(&puStack_28);
  lVar1 = param_1[100];
  param_1[100] = 0;
  if (lVar1 != 0) {
    FUN_10a447854();
  }
  param_1[0x56] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x5f);
  FUN_10a44a358(param_1 + 0x58);
  plVar2 = (long *)param_1[0x55];
  param_1[0x55] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x53,0);
  FUN_10a4477fc(param_1 + 0x51);
  func_0x00010a4477a4(param_1 + 0x4f);
  func_0x00010a4476d0(param_1 + 0x4a);
  FUN_10a44763c(param_1 + 0x47);
  if (param_1[0x46] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x44] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x42] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x3f);
  if (param_1[0x3d] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(param_1 + -0xd,&PTR_PTR_110bc3368);
  return;
}



/* Entry: 10a2e1450; end: 10a2e146f;  */

void FUN_10a2e1450(long param_1)

{
  FUN_10a420f70(param_1 + -0x68,&PTR_PTR_110bc3360);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2e1470; end: 10a2e147f;  */

void FUN_10a2e1470(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  param_1[-0x16] = &PTR_FUN_110bc1e88;
  param_1[-0x14] = &PTR_DAT_110bd5880;
  param_1[-0xf] = &PTR_DAT_110bd58d8;
  param_1[-9] = &PTR_DAT_110bd58f8;
  *param_1 = &PTR_DAT_110bd5968;
  param_1[0x88] = &PTR_DAT_110bc20e8;
  param_1[1] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x86);
  func_0x00010a004e5c(param_1 + 0x84);
  param_1[0x5c] = &PTR_FUN_110b9ec48;
  puStack_28 = param_1 + 0x7a;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x77;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x70;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x6d;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(param_1 + 0x68);
  puStack_28 = param_1 + 0x62;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x5f;
  func_0x00010a04aad4(&puStack_28);
  lVar1 = param_1[0x5b];
  param_1[0x5b] = 0;
  if (lVar1 != 0) {
    FUN_10a447854();
  }
  param_1[0x4d] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x56);
  FUN_10a44a358(param_1 + 0x4f);
  plVar2 = (long *)param_1[0x4c];
  param_1[0x4c] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x4a,0);
  FUN_10a4477fc(param_1 + 0x48);
  func_0x00010a4477a4(param_1 + 0x46);
  func_0x00010a4476d0(param_1 + 0x41);
  FUN_10a44763c(param_1 + 0x3e);
  if (param_1[0x3d] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x3b] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x39] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x36);
  if (param_1[0x34] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(param_1 + -0x16,&PTR_PTR_110bc3368);
  return;
}



/* Entry: 10a2e1480; end: 10a2e149f;  */

void FUN_10a2e1480(long param_1)

{
  FUN_10a420f70(param_1 + -0xb0,&PTR_PTR_110bc3360);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2e14a0; end: 10a2e14af;  */

void FUN_10a2e14a0(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  param_1[-0x17] = &PTR_FUN_110bc1e88;
  param_1[-0x15] = &PTR_DAT_110bd5880;
  param_1[-0x10] = &PTR_DAT_110bd58d8;
  param_1[-10] = &PTR_DAT_110bd58f8;
  param_1[-1] = &PTR_DAT_110bd5968;
  param_1[0x87] = &PTR_DAT_110bc20e8;
  *param_1 = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x85);
  func_0x00010a004e5c(param_1 + 0x83);
  param_1[0x5b] = &PTR_FUN_110b9ec48;
  puStack_28 = param_1 + 0x79;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x76;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x6f;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x6c;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(param_1 + 0x67);
  puStack_28 = param_1 + 0x61;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x5e;
  func_0x00010a04aad4(&puStack_28);
  lVar1 = param_1[0x5a];
  param_1[0x5a] = 0;
  if (lVar1 != 0) {
    FUN_10a447854();
  }
  param_1[0x4c] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x55);
  FUN_10a44a358(param_1 + 0x4e);
  plVar2 = (long *)param_1[0x4b];
  param_1[0x4b] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x49,0);
  FUN_10a4477fc(param_1 + 0x47);
  func_0x00010a4477a4(param_1 + 0x45);
  func_0x00010a4476d0(param_1 + 0x40);
  FUN_10a44763c(param_1 + 0x3d);
  if (param_1[0x3c] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x3a] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x38] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x35);
  if (param_1[0x33] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(param_1 + -0x17,&PTR_PTR_110bc3368);
  return;
}



/* Entry: 10a2e14b0; end: 10a2e14cf;  */

void FUN_10a2e14b0(long param_1)

{
  FUN_10a420f70(param_1 + -0xb8,&PTR_PTR_110bc3360);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2e14d0; end: 10a2e14e7;  */

void FUN_10a2e14d0(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puStack_28;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_FUN_110bc1e88;
  puVar1[2] = &PTR_DAT_110bd5880;
  puVar1[7] = &PTR_DAT_110bd58d8;
  puVar1[0xd] = &PTR_DAT_110bd58f8;
  puVar1[0x16] = &PTR_DAT_110bd5968;
  puVar1[0x9e] = &PTR_DAT_110bc20e8;
  puVar1[0x17] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(puVar1 + 0x9c);
  func_0x00010a004e5c(puVar1 + 0x9a);
  puVar1[0x72] = &PTR_FUN_110b9ec48;
  puStack_28 = puVar1 + 0x90;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = puVar1 + 0x8d;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = puVar1 + 0x86;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = puVar1 + 0x83;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(puVar1 + 0x7e);
  puStack_28 = puVar1 + 0x78;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = puVar1 + 0x75;
  func_0x00010a04aad4(&puStack_28);
  lVar2 = puVar1[0x71];
  puVar1[0x71] = 0;
  if (lVar2 != 0) {
    FUN_10a447854();
  }
  puVar1[99] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(puVar1 + 0x6c);
  FUN_10a44a358(puVar1 + 0x65);
  plVar3 = (long *)puVar1[0x62];
  puVar1[0x62] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  FUN_10a425f6c(puVar1 + 0x60,0);
  FUN_10a4477fc(puVar1 + 0x5e);
  func_0x00010a4477a4(puVar1 + 0x5c);
  func_0x00010a4476d0(puVar1 + 0x57);
  FUN_10a44763c(puVar1 + 0x54);
  if (puVar1[0x53] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (puVar1[0x51] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (puVar1[0x4f] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(puVar1 + 0x4c);
  if (puVar1[0x4a] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(puVar1,&PTR_PTR_110bc3368);
  return;
}



/* Entry: 10a2e14e8; end: 10a2e151f;  */

void FUN_10a2e14e8(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a420f70((long)param_1 + lVar1,&PTR_PTR_110bc3360);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a2e1520; end: 10a2e15a3;  */

void FUN_10a2e1520(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a2e15a4(param_1,param_4);
    lVar1 = param_1;
    FUN_10a2e1644(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a2e15a4; end: 10a2e15eb;  */

undefined1  [16] FUN_10a2e15a4(long *param_1,ulong param_2,ulong param_3,long param_4)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined *puStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  undefined1 uStack_98;
  long lStack_90;
  long lStack_88;
  
  if (param_2 < 0x666666666666667) {
    plVar1 = param_1;
    FUN_10a2e1600();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 5);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = plVar1;
    return auVar5;
  }
  FUN_10a2e15ec();
  puVar2 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 < 0x666666666666667) {
    lVar3 = param_2 * 0x28;
    __Znwm(lVar3);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar3;
    return auVar6;
  }
  func_0x000109ffded8();
  plStack_a8 = &lStack_90;
  plStack_a0 = &lStack_88;
  uStack_98 = 0;
  puStack_b0 = puVar2;
  uVar4 = param_2;
  lStack_90 = param_4;
  for (; lStack_88 = param_4, param_2 != param_3; param_2 = param_2 + 0x28) {
    uVar4 = param_2;
    FUN_10a2e16e4(param_4,param_2);
    param_4 = lStack_88 + 0x28;
  }
  uStack_98 = 1;
  FUN_10a2e173c(&puStack_b0);
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = param_4;
  return auVar7;
}



/* Entry: 10a2e15ec; end: 10a2e15ff;  */

undefined1  [16] FUN_10a2e15ec(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puStack_90;
  long *plStack_88;
  long *plStack_80;
  undefined1 uStack_78;
  long lStack_70;
  long lStack_68;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 < 0x666666666666667) {
    lVar2 = param_2 * 0x28;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  plStack_88 = &lStack_70;
  plStack_80 = &lStack_68;
  uStack_78 = 0;
  puStack_90 = puVar1;
  uVar3 = param_2;
  lStack_70 = param_4;
  for (; lStack_68 = param_4, param_2 != param_3; param_2 = param_2 + 0x28) {
    uVar3 = param_2;
    FUN_10a2e16e4(param_4,param_2);
    param_4 = lStack_68 + 0x28;
  }
  uStack_78 = 1;
  FUN_10a2e173c(&puStack_90);
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = param_4;
  return auVar5;
}



/* Entry: 10a2e1600; end: 10a2e1643;  */

undefined1  [16] FUN_10a2e1600(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined1 uStack_68;
  long lStack_60;
  long lStack_58;
  
  if (param_2 < 0x666666666666667) {
    lVar1 = param_2 * 0x28;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  plStack_78 = &lStack_60;
  plStack_70 = &lStack_58;
  uStack_68 = 0;
  uStack_80 = param_1;
  uVar2 = param_2;
  lStack_60 = param_4;
  for (; lStack_58 = param_4, param_2 != param_3; param_2 = param_2 + 0x28) {
    uVar2 = param_2;
    FUN_10a2e16e4(param_4,param_2);
    param_4 = lStack_58 + 0x28;
  }
  uStack_68 = 1;
  FUN_10a2e173c(&uStack_80);
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_4;
  return auVar4;
}



/* Entry: 10a2e1644; end: 10a2e16e3;  */

long FUN_10a2e1644(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_48 = 0;
  lStack_40 = param_4;
  uStack_60 = param_1;
  for (; lStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 0x28) {
    FUN_10a2e16e4(param_4,param_2);
    param_4 = lStack_38 + 0x28;
  }
  uStack_48 = 1;
  FUN_10a2e173c(&uStack_60);
  return param_4;
}



/* Entry: 10a2e16e4; end: 10a2e173b;  */

undefined4 * FUN_10a2e16e4(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    func_0x000107c3192c(param_1 + 2,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 4);
    uVar1 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar2;
    *(undefined8 *)(param_1 + 2) = uVar1;
  }
  param_1[8] = param_2[8];
  return param_1;
}



/* Entry: 10a2e173c; end: 10a2e176f;  */

long FUN_10a2e173c(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10a2e1770(param_1);
  }
  return param_1;
}



/* Entry: 10a2e1770; end: 10a2e17f3;  */

/* WARNING: Removing unreachable block (ram,0x00010a2e1798) */

void FUN_10a2e1770(long param_1)

{
  long lVar1;
  
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8); lVar1 = lVar1 + -0x28
      ) {
  }
  return;
}



/* Entry: 10a2e17f4; end: 10a2e183f;  */

/* WARNING: Removing unreachable block (ram,0x00010a2e181c) */

void FUN_10a2e17f4(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x28) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 10a2e1840; end: 10a2e1843;  */

undefined8 * FUN_10a2e1840(undefined8 *param_1)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  func_0x000107c2b054(auStack_38);
  FUN_10a002a94(param_1,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  *param_1 = &PTR_FUN_110b99e70;
  return param_1;
}



/* Entry: 10a2e1844; end: 10a2e18b3;  */

undefined8 * FUN_10a2e1844(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_10a2e18b4(puVar1,puVar1 + 0x12,6,0,param_2);
  lVar3 = *param_1;
  if ((undefined8 *)(lVar3 + 0x90) != puVar1) {
    uVar2 = *param_2;
    FUN_10a003d5c(uVar2,param_2[1],*puVar1,puVar1[1]);
    if (((uint)uVar2 >> 7 & 1) == 0) {
      return puVar1;
    }
    lVar3 = *param_1;
  }
  return (undefined8 *)(lVar3 + 0x90);
}



/* Entry: 10a2e18b4; end: 10a2e195b;  */

undefined1  [16]
FUN_10a2e18b4(long param_1,undefined8 *param_2,ulong param_3,ulong param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  
  if (param_3 != 0) {
    puVar2 = param_2;
    while( true ) {
      while( true ) {
        param_2 = (undefined8 *)(param_1 + param_4 * 0x18);
        uVar1 = *param_2;
        FUN_10a003d5c(uVar1,param_2[1],*param_5,param_5[1]);
        if (((uint)uVar1 >> 7 & 1) != 0) break;
        if (param_3 >> 1 <= param_4) goto LAB_10a2e1938;
        param_4 = param_4 << 1 | 1;
        puVar2 = param_2;
      }
      param_2 = puVar2;
      if (param_3 - 1 >> 1 <= param_4) break;
      param_4 = param_4 * 2 + 2;
    }
  }
LAB_10a2e1938:
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_2;
  return auVar3;
}



/* Entry: 10a2e195c; end: 10a2e1a3b;  */

undefined8 * FUN_10a2e195c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a2e1a3c; end: 10a2e1acf;  */

void FUN_10a2e1a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 uStack_39;
  undefined1 auStack_38 [8];
  long *plStack_30;
  undefined1 uStack_21;
  
  FUN_10a2e1ad0(auStack_38,&uStack_21,&uStack_39,param_2,param_3);
  FUN_10a0cf858(param_1,auStack_38);
  if (plStack_30 != (long *)0x0) {
    plVar1 = plStack_30 + 1;
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
      (**(code **)(*plStack_30 + 0x10))(plStack_30);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_30);
    }
  }
  return;
}



/* Entry: 10a2e1ad0; end: 10a2e1b47;  */

void FUN_10a2e1ad0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = 0x108;
  __Znwm();
  FUN_10a2e1b48();
  *param_1 = lVar5 + 0x18;
  param_1[1] = lVar5;
  if (((long *)(lVar5 + 0x40) != (long *)0x0) &&
     ((lVar4 = *(long *)(lVar5 + 0x48), lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar6 = (long *)param_1[1];
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar6 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = *(long *)(lVar5 + 0x48);
    }
    *(long *)(lVar5 + 0x40) = lVar5 + 0x18;
    *(long **)(lVar5 + 0x48) = plVar6;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a2e1b48; end: 10a2e1b8f;  */

undefined8 * FUN_10a2e1b48(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110ba2088;
  FUN_10a2e1b90(param_1 + 3);
  return param_1;
}



/* Entry: 10a2e1b90; end: 10a2e1c33;  */

undefined8
FUN_10a2e1b90(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar4 = *param_3;
  plVar6 = (long *)param_4[1];
  uStack_28 = param_4[1];
  uStack_30 = *param_4;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10a347bd4(param_1,uVar4,&uStack_30);
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
  return param_1;
}



/* Entry: 10a2e1c34; end: 10a2e1caf;  */

void FUN_10a2e1c34(long param_1,uint param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  if ((*(ushort *)(param_1 + 0x118) >> 9 & 1) != 0) {
    uVar1 = 1 << (ulong)(param_2 & 0x1f);
    if ((uVar1 & (*(byte *)(param_1 + 0x11a) ^ 0xff)) != 0 ||
        (uVar1 & (*(byte *)(param_1 + 0x11b) ^ 0xff)) != 0) {
      plVar2 = (long *)(param_1 + 0x50);
      lVar4 = *plVar2;
      *(byte *)(param_1 + 0x11a) = *(byte *)(param_1 + 0x11a) | (byte)uVar1;
      *(byte *)(param_1 + 0x11b) = *(byte *)(param_1 + 0x11b) | (byte)uVar1;
      lVar3 = *(long *)(param_1 + 0x120);
      if (lVar4 != 0) {
        plVar5 = *(long **)(param_1 + 0x58);
        *plVar5 = lVar4;
        *(long **)(lVar4 + 8) = plVar5;
        *plVar2 = 0;
        *(undefined8 *)(param_1 + 0x58) = 0;
      }
      puVar6 = *(undefined8 **)(lVar3 + 0x540);
      *(long *)(param_1 + 0x50) = lVar3 + 0x538;
      *(undefined8 **)(param_1 + 0x58) = puVar6;
      *(long **)(lVar3 + 0x540) = plVar2;
      *puVar6 = plVar2;
    }
  }
  return;
}



/* Entry: 10a2e1cb0; end: 10a2e1ddb;  */

void FUN_10a2e1cb0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  long lVar8;
  undefined8 *puStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  long *plStack_f8;
  long lStack_f0;
  undefined8 **ppuStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 uStack_c8;
  undefined8 *apuStack_c0 [7];
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 *puStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_c8 = *param_4;
  (**(code **)(param_4[1] + 0x10))(apuStack_c0,param_4 + 1);
  pcStack_88 = FUN_10a2e1ddc;
  ppuStack_80 = &PTR_FUN_110bc27a0;
  puVar5 = (undefined8 *)0x40;
  __Znwm();
  *puVar5 = uStack_c8;
  (*(code *)apuStack_c0[0][2])(puVar5 + 1,apuStack_c0);
  lVar8 = param_2;
  puStack_78 = puVar5;
  FUN_10a57259c(param_1,param_2,param_3,&pcStack_88);
  (*(code *)*ppuStack_80)(&ppuStack_80);
  ppuVar6 = apuStack_c0;
  (*(code *)*apuStack_c0[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_80)(&ppuStack_80);
  (*(code *)*apuStack_c0[0])(apuStack_c0);
  ppuVar7 = ppuVar6;
  __Unwind_Resume();
  pcStack_d8 = FUN_10a2e1ddc;
  puVar5 = *(undefined8 **)(lVar8 + 0x10);
  plStack_118 = ppuVar7[1];
  puStack_120 = *ppuVar7;
  lStack_f0 = param_2;
  ppuStack_e8 = ppuVar6;
  puStack_e0 = &stack0xfffffffffffffff0;
  *ppuVar7 = (undefined8 *)0x0;
  ppuVar7[1] = (undefined8 *)0x0;
  FUN_10a069918(&uStack_110,&puStack_120,0,0);
  plStack_f8 = plStack_108;
  uStack_100 = uStack_110;
  uStack_110 = 0;
  plStack_108 = (long *)0x0;
  (*(code *)*puVar5)(&uStack_100,puVar5);
  plVar4 = plStack_f8;
  if (plStack_f8 != (long *)0x0) {
    plVar1 = plStack_f8 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = plStack_108;
  if (plStack_108 != (long *)0x0) {
    plVar1 = plStack_108 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_108 + 0x10))(plStack_108);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = plStack_118;
  if (plStack_118 != (long *)0x0) {
    plVar1 = plStack_118 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_118 + 0x10))(plStack_118);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a2e1ddc; end: 10a2e1f0f;  */

void FUN_10a2e1ddc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  puVar6 = *(undefined8 **)(param_2 + 0x10);
  plStack_48 = (long *)param_1[1];
  uStack_50 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_10a069918(&uStack_40,&uStack_50,0,0);
  plStack_28 = plStack_38;
  uStack_30 = uStack_40;
  uStack_40 = 0;
  plStack_38 = (long *)0x0;
  (*(code *)*puVar6)(&uStack_30,puVar6);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a2e1f10; end: 10a2e1f4f;  */

void FUN_10a2e1f10(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a2e1f50; end: 10a2e1f67;  */

void FUN_10a2e1f50(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a2e1f68; end: 10a2e1fef;  */

void FUN_10a2e1f68(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  puVar2 = *(undefined8 **)(param_2 + 8);
  *param_1 = &PTR_FUN_110bc27a0;
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  *puVar1 = *puVar2;
  plVar3 = puVar2 + 1;
  (**(code **)(*plVar3 + 0x18))(puVar1 + 1,plVar3);
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a2e1ff0; end: 10a2e20fb;  */

void FUN_10a2e1ff0(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *extraout_x8;
  long lVar11;
  undefined1 auStack_98 [8];
  undefined8 uStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long *plStack_38;
  long lStack_28;
  
  puVar6 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = *(long *)(param_2 + 0x10);
  plStack_38 = (long *)param_1[1];
  lStack_40 = *param_1;
  if (param_1[1] != 0) {
    plVar9 = (long *)(param_1[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar8 = 1;
  plVar9 = (long *)0x0;
  lVar10 = 0;
  FUN_10a2e20fc(&uStack_50,lVar11 + 0x2a0,&lStack_40);
  plVar7 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar11 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  FUN_10a0c7c84(uStack_50);
  uStack_48 = 1;
  FUN_10a2e2234();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    FUN_10a2e2234(&uStack_50);
    __Unwind_Resume();
    iVar5 = (int)auStack_98;
    func_0x00010a1bd170();
    if (iVar5 == 0) {
      *extraout_x8 = (long)puVar6;
      *(undefined1 *)(extraout_x8 + 1) = 0;
      iVar5 = (int)auStack_98;
      func_0x00010a1bd170();
      plVar7 = (long *)0x0;
      if (iVar5 == 0) {
        plVar7 = param_1;
      }
      lVar11 = 0;
      if (iVar5 == 0) {
        lVar11 = lVar8;
      }
    }
    else {
      *extraout_x8 = (long)puVar6;
      *(undefined1 *)(extraout_x8 + 1) = 0;
      func_0x00010a1bd170(auStack_98);
      plVar7 = (long *)0x0;
      lVar11 = 0;
    }
    lVar8 = *extraout_x8 - (ulong)uRam0000000113300f0a;
    if (lVar10 != 0) {
      lVar2 = 0;
      if (*extraout_x8 != 0) {
        lVar2 = lVar8 + 0xb8;
      }
      lVar10 = lVar10 << 4;
      do {
        if (*plVar9 != 0) {
          FUN_10a1bf080(*plVar9 + 0x170,lVar2);
        }
        plVar9 = plVar9 + 2;
        lVar10 = lVar10 + -0x10;
      } while (lVar10 != 0);
    }
    if (lVar11 != 0) {
      lVar11 = lVar11 << 4;
      do {
        if (*plVar7 != 0) {
          FUN_10a1bf2a0(*plVar7 + 0x170,lVar8 + 0xb8);
        }
        plVar7 = plVar7 + 2;
        lVar11 = lVar11 + -0x10;
      } while (lVar11 != 0);
    }
    return;
  }
  return;
}



/* Entry: 10a2e20fc; end: 10a2e2233;  */

void FUN_10a2e20fc(long *param_1,long param_2,long *param_3,long param_4,long *param_5,long param_6)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_48 [8];
  
  iVar2 = (int)auStack_48;
  func_0x00010a1bd170();
  if (iVar2 == 0) {
    *param_1 = param_2;
    *(undefined1 *)(param_1 + 1) = 0;
    iVar2 = (int)auStack_48;
    func_0x00010a1bd170();
    plVar3 = (long *)0x0;
    if (iVar2 == 0) {
      plVar3 = param_3;
    }
    lVar4 = 0;
    if (iVar2 == 0) {
      lVar4 = param_4;
    }
  }
  else {
    *param_1 = param_2;
    *(undefined1 *)(param_1 + 1) = 0;
    func_0x00010a1bd170(auStack_48);
    plVar3 = (long *)0x0;
    lVar4 = 0;
  }
  lVar5 = *param_1 - (ulong)uRam0000000113300f0a;
  if (param_6 != 0) {
    lVar1 = 0;
    if (*param_1 != 0) {
      lVar1 = lVar5 + 0xb8;
    }
    param_6 = param_6 << 4;
    do {
      if (*param_5 != 0) {
        FUN_10a1bf080(*param_5 + 0x170,lVar1);
      }
      param_5 = param_5 + 2;
      param_6 = param_6 + -0x10;
    } while (param_6 != 0);
  }
  if (lVar4 != 0) {
    lVar4 = lVar4 << 4;
    do {
      if (*plVar3 != 0) {
        FUN_10a1bf2a0(*plVar3 + 0x170,lVar5 + 0xb8);
      }
      plVar3 = plVar3 + 2;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 10a2e2234; end: 10a2e2267;  */

long FUN_10a2e2234(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_10a2e2268(param_1);
  }
  return param_1;
}



/* Entry: 10a2e2268; end: 10a2e23ab;  */

void FUN_10a2e2268(long *param_1)

{
  ushort uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long alStack_90 [11];
  undefined **ppuStack_38;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    uVar2 = 0;
    plVar4 = (long *)(*param_1 - (ulong)uRam0000000113300f0a);
    if ((*(ushort *)(plVar4 + 0x1d) >> 8 & 1) == 0) {
      func_0x00010a1bd170();
      if ((uVar2 & 1) == 0) {
        *(undefined1 *)(param_1 + 1) = 1;
        alStack_90[7] = 0;
        alStack_90[6] = 0;
        alStack_90[9] = 0;
        alStack_90[8] = 0;
        alStack_90[3] = 0;
        alStack_90[2] = 0;
        alStack_90[5] = 0;
        alStack_90[4] = 0;
        alStack_90[1] = 0;
        alStack_90[0] = 0;
        ppuStack_38 = &PTR_DAT_110bc33a0;
        FUN_10a0dad0c((ulong)alStack_90 | 8,&ppuStack_38);
        plVar3 = plVar4 + 0x17;
        (**(code **)(plVar4[0x17] + 0x18))();
        uVar1 = *(ushort *)(plVar4 + 0x1d);
        if ((int)plVar3 == 0) {
          if ((uVar1 >> 8 & 1) == 0) {
            plVar3 = plVar4 + 0x17;
            FUN_10a1bfe94(plVar3,alStack_90);
            if (((ulong)plVar3 & 1) == 0) {
              (**(code **)(*plVar4 + 0xc0))(plVar4,alStack_90);
            }
          }
          else {
            FUN_10a1bd5e0();
            if (plVar3 != (long *)0x0) {
              FUN_10a1bd7d8();
            }
          }
        }
        else {
          if ((uVar1 >> 7 & 1) == 0) {
            plVar4[0x1f] = alStack_90[0];
            *(ushort *)(plVar4 + 0x1d) = uVar1 | 0x80;
          }
          FUN_10a1bd398(plVar4 + 0x1f,alStack_90);
        }
      }
    }
    else {
      *(undefined1 *)(param_1 + 1) = 1;
      if (((undefined **)plVar4[0x1e] != &PTR_DAT_110bc33a0) &&
         (FUN_10a1bd5e0(), param_1 != (long *)0x0)) {
        FUN_10a1bd7d8();
        plVar4[0x1e] = (long)&PTR_DAT_110bc33a0;
      }
    }
  }
  return;
}



/* Entry: 10a2e23ac; end: 10a2e23df;  */

void FUN_10a2e23ac(void)

{
  return;
}



/* Entry: 10a2e23e0; end: 10a2e247b;  */

void FUN_10a2e23e0(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (param_4 != 0) {
    FUN_10a2e247c(param_1,param_4);
    puVar4 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 2) {
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
      puVar4 = puVar4 + 2;
    }
    *(undefined8 **)(param_1 + 8) = puVar4;
  }
  return;
}



/* Entry: 10a2e247c; end: 10a2e24b3;  */

long * FUN_10a2e247c(long *param_1,long *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    plVar5 = param_1;
    FUN_10a0d93e4();
    *param_1 = (long)plVar5;
    param_1[1] = (long)plVar5;
    param_1[2] = (long)(plVar5 + (long)param_2 * 2);
    return plVar5;
  }
  FUN_10a0d93d0();
  plVar5 = (long *)param_1[1];
  if ((long *)(param_1[2] - (long)plVar5 >> 4) < param_2) {
    lVar9 = (long)plVar5 - *param_1;
    uVar1 = (long)param_2 + (lVar9 >> 4);
    if (uVar1 >> 0x3c != 0) {
      FUN_10a0d93d0();
      lVar8 = param_2[1];
      lVar9 = *param_2;
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
      param_1[1] = lVar8;
      *param_1 = lVar9;
      if (plVar5 != (long *)0x0) {
        plVar4 = plVar5 + 1;
        do {
          lVar9 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      return param_1;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 3;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7fffffffffffffef < uVar6) {
      uVar7 = 0xfffffffffffffff;
    }
    plStack_68 = param_1;
    if (uVar7 == 0) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = param_1;
      FUN_10a0d93e4();
    }
    lVar9 = (long)plVar5 + lVar9;
    _bzero(lVar9,(long)param_2 << 4);
    lVar8 = lVar9 - (param_1[1] - *param_1);
    _memcpy(lVar8);
    lStack_88 = *param_1;
    *param_1 = lVar8;
    param_1[1] = lVar9 + (long)param_2 * 0x10;
    lStack_70 = param_1[2];
    param_1[2] = (long)(plVar5 + uVar7 * 2);
    plVar4 = &lStack_88;
    lStack_80 = lStack_88;
    lStack_78 = lStack_88;
    func_0x00010a0d9418(plVar4);
  }
  else {
    plVar4 = param_1;
    if (param_2 != (long *)0x0) {
      plVar4 = plVar5;
      _bzero(plVar5,(long)param_2 << 4);
      plVar5 = plVar5 + (long)param_2 * 2;
    }
    param_1[1] = (long)plVar5;
  }
  return plVar4;
}



/* Entry: 10a2e24b4; end: 10a2e25b7;  */

long * FUN_10a2e24b4(long *param_1,long *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  
  plVar5 = (long *)param_1[1];
  if ((long *)(param_1[2] - (long)plVar5 >> 4) < param_2) {
    lVar9 = (long)plVar5 - *param_1;
    uVar1 = (long)param_2 + (lVar9 >> 4);
    if (uVar1 >> 0x3c != 0) {
      FUN_10a0d93d0();
      lVar8 = param_2[1];
      lVar9 = *param_2;
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
      param_1[1] = lVar8;
      *param_1 = lVar9;
      if (plVar5 != (long *)0x0) {
        plVar4 = plVar5 + 1;
        do {
          lVar9 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      return param_1;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 3;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7fffffffffffffef < uVar6) {
      uVar7 = 0xfffffffffffffff;
    }
    plStack_48 = param_1;
    if (uVar7 == 0) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = param_1;
      FUN_10a0d93e4();
    }
    lVar9 = (long)plVar5 + lVar9;
    _bzero(lVar9,(long)param_2 << 4);
    lVar8 = lVar9 - (param_1[1] - *param_1);
    _memcpy(lVar8);
    lStack_68 = *param_1;
    *param_1 = lVar8;
    param_1[1] = lVar9 + (long)param_2 * 0x10;
    lStack_50 = param_1[2];
    param_1[2] = (long)(plVar5 + uVar7 * 2);
    plVar4 = &lStack_68;
    lStack_60 = lStack_68;
    lStack_58 = lStack_68;
    func_0x00010a0d9418(plVar4);
  }
  else {
    plVar4 = param_1;
    if (param_2 != (long *)0x0) {
      plVar4 = plVar5;
      _bzero(plVar5,(long)param_2 << 4);
      plVar5 = plVar5 + (long)param_2 * 2;
    }
    param_1[1] = (long)plVar5;
  }
  return plVar4;
}



/* Entry: 10a2e25b8; end: 10a2e2707;  */

undefined8 * FUN_10a2e25b8(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a2e2708; end: 10a2e27c3;  */

void FUN_10a2e2708(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  long lStack_28;
  
  lStack_28 = param_1;
  if (param_1 == 0) {
    uStack_40 = 0;
    FUN_10a2e29ac(&uStack_40,param_2);
  }
  else {
    uStack_38 = *(undefined8 *)(param_1 + 0x858);
    plStack_30 = *(long **)(param_1 + 0x860);
    if (plStack_30 != (long *)0x0) {
      plVar1 = plStack_30 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a2e27c4(&uStack_38,&lStack_28);
    plVar1 = plStack_30;
    if (plStack_30 != (long *)0x0) {
      plVar2 = plStack_30 + 1;
      do {
        lVar5 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  return;
}



/* Entry: 10a2e27c4; end: 10a2e29ab;  */

void FUN_10a2e27c4(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  undefined1 auStack_50 [8];
  long *plStack_48;
  
  FUN_10a2e2ba4(param_3,param_4);
  lStack_60 = *param_2;
  plStack_58 = (long *)param_2[1];
  lStack_70 = lStack_60;
  plStack_68 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = plStack_58 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
  }
  FUN_10a2e2c10(auStack_50,param_3,&lStack_60);
  FUN_10a2e2a40(param_1,auStack_50);
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  if (plStack_58 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar1 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar2 = plStack_68 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  lVar5 = *param_2;
  if ((lVar5 != 0) && (lStack_80 = *param_1, lStack_80 != 0)) {
    plStack_78 = (long *)param_1[1];
    if (plStack_78 != (long *)0x0) {
      plVar1 = plStack_78 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10aa88c30(lVar5,&lStack_80);
    plVar1 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar2 = plStack_78 + 1;
      do {
        lVar5 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  return;
}



/* Entry: 10a2e29ac; end: 10a2e2a3f;  */

void FUN_10a2e29ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 uStack_39;
  undefined1 auStack_38 [8];
  long *plStack_30;
  undefined1 uStack_21;
  
  FUN_10a2e2e54(auStack_38,&uStack_21,&uStack_39,param_2,param_3);
  FUN_10a2e2a40(param_1,auStack_38);
  if (plStack_30 != (long *)0x0) {
    plVar1 = plStack_30 + 1;
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
      (**(code **)(*plStack_30 + 0x10))(plStack_30);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_30);
    }
  }
  return;
}



/* Entry: 10a2e2a40; end: 10a2e2ba3;  */

void FUN_10a2e2a40(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lStack_40;
  long *plStack_38;
  long *plStack_30;
  long *plStack_28;
  
  plVar3 = (long *)0x90;
  __Znwm();
  plVar4 = plVar3 + 1;
  *plVar4 = 0;
  *plVar3 = (long)&PTR_FUN_110b9fe30;
  lStack_40 = *param_2;
  plStack_30 = plVar3 + 3;
  plVar3[4] = param_2[1];
  *plStack_30 = lStack_40;
  plVar3[2] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[7] = 0x32aaaba7;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  plVar3[0xd] = 0;
  plVar3[0xc] = 0;
  plVar3[0xf] = 0;
  plVar3[0xe] = 0;
  plVar3[0x11] = 0;
  plVar3[0x10] = 0;
  *param_1 = lStack_40;
  param_1[1] = (long)plVar3;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plStack_38 = plVar3;
  plStack_28 = plVar3;
  func_0x00010a053e8c(plStack_30,&lStack_40);
  plVar3 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar4 = plStack_38 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  if (*plStack_30 != 0) {
    func_0x00010a053ee8(*plStack_30,&plStack_30);
  }
  plVar3 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar4 = plStack_28 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return;
}



/* Entry: 10a2e2ba4; end: 10a2e2c0f;  */

undefined8 FUN_10a2e2ba4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = 0x1d0;
  uVar3 = param_2;
  __Znwm(0x1d0);
  uVar4 = *param_1;
  uVar2 = uVar1;
  func_0x00010a0fda30();
  FUN_10a32cbf8(uVar1,uVar4,uVar2,uVar3,param_2);
  return uVar1;
}



/* Entry: 10a2e2c10; end: 10a2e2caf;  */

long * FUN_10a2e2c10(long *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = param_2;
  puVar2 = (undefined8 *)0x30;
  __Znwm();
  uVar4 = param_3[1];
  uVar3 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  *puVar2 = &PTR_DAT_110bc3498;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = param_2;
  puVar2[5] = uVar4;
  puVar2[4] = uVar3;
  param_1[1] = (long)puVar2;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x28;
  }
  FUN_10a2e2cb0(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 10a2e2cb0; end: 10a2e2dd3;  */

void FUN_10a2e2cb0(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_2 != (undefined8 *)0x0) &&
     ((lVar4 = param_2[1], lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar5 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = param_2[1];
    }
    *param_2 = param_3;
    param_2[1] = plVar5;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
  }
  return;
}



/* Entry: 10a2e2dd4; end: 10a2e2e13;  */

void FUN_10a2e2dd4(long param_1)

{
  FUN_10aa88d20(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a2e2e14; end: 10a2e2e4f;  */

long FUN_10a2e2e14(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bc34d8);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a2e2e50; end: 10a2e2e53;  */

void FUN_10a2e2e50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2e2e54; end: 10a2e2ecb;  */

void FUN_10a2e2e54(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = 0x1e8;
  __Znwm();
  FUN_10a2e2ecc();
  *param_1 = lVar5 + 0x18;
  param_1[1] = lVar5;
  if (((long *)(lVar5 + 0x40) != (long *)0x0) &&
     ((lVar4 = *(long *)(lVar5 + 0x48), lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar6 = (long *)param_1[1];
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar6 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = *(long *)(lVar5 + 0x48);
    }
    *(long *)(lVar5 + 0x40) = lVar5 + 0x18;
    *(long **)(lVar5 + 0x48) = plVar6;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a2e2ecc; end: 10a2e2f2f;  */

undefined8 *
FUN_10a2e2ecc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110bc34f8;
  puVar1 = param_1;
  func_0x00010a0fda30();
  FUN_10a32cbf8(param_1 + 3,0,puVar1,param_2,param_4);
  return param_1;
}



/* Entry: 10a2e2f30; end: 10a2e2f3f;  */

void FUN_10a2e2f30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc34f8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a2e2f40; end: 10a2e2f5f;  */

void FUN_10a2e2f40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc34f8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2e2f60; end: 10a2e2f6f;  */

void FUN_10a2e2f60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a2e2f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a2e2f70; end: 10a2e2f83;  */

ulong FUN_10a2e2f70(undefined8 param_1,ulong param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  plVar4 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_3 < param_2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a2e3050);
    (*pcVar3)();
  }
  if (param_3 != param_2) {
    uVar6 = plVar4[1];
    uVar8 = param_2;
    if (param_3 != uVar6) {
      lVar7 = *plVar4;
      lVar10 = -lVar7;
      lVar9 = lVar7 + param_2;
      lVar11 = lVar7 + param_3;
      do {
        puVar1 = (undefined8 *)(lVar9 + lVar10);
        puVar2 = (undefined8 *)(lVar11 + lVar10);
        uVar13 = puVar2[1];
        uVar12 = *puVar2;
        *puVar2 = 0;
        puVar2[1] = 0;
        lVar5 = puVar1[1];
        puVar1[1] = uVar13;
        *puVar1 = uVar12;
        if (lVar5 != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        lVar9 = lVar9 + 0x10;
        lVar11 = lVar11 + 0x10;
      } while (lVar11 + lVar10 != uVar6);
      uVar6 = plVar4[1];
      uVar8 = lVar9 - lVar7;
    }
    for (; uVar6 != uVar8; uVar6 = uVar6 - 0x10) {
      if (*(long *)(uVar6 - 8) != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    plVar4[1] = uVar8;
  }
  return param_2;
}



/* Entry: 10a2e2f84; end: 10a2e304f;  */

ulong FUN_10a2e2f84(long *param_1,ulong param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (param_3 < param_2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a2e3050);
    (*pcVar3)();
  }
  if (param_3 != param_2) {
    uVar5 = param_1[1];
    uVar7 = param_2;
    if (param_3 != uVar5) {
      lVar6 = *param_1;
      lVar9 = -lVar6;
      lVar8 = lVar6 + param_2;
      lVar10 = lVar6 + param_3;
      do {
        puVar1 = (undefined8 *)(lVar8 + lVar9);
        puVar2 = (undefined8 *)(lVar10 + lVar9);
        uVar12 = puVar2[1];
        uVar11 = *puVar2;
        *puVar2 = 0;
        puVar2[1] = 0;
        lVar4 = puVar1[1];
        puVar1[1] = uVar12;
        *puVar1 = uVar11;
        if (lVar4 != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        lVar8 = lVar8 + 0x10;
        lVar10 = lVar10 + 0x10;
      } while (lVar10 + lVar9 != uVar5);
      uVar5 = param_1[1];
      uVar7 = lVar8 - lVar6;
    }
    for (; uVar5 != uVar7; uVar5 = uVar5 - 0x10) {
      if (*(long *)(uVar5 - 8) != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    param_1[1] = uVar7;
  }
  return param_2;
}



/* Entry: 10a2e3050; end: 10a2e3063;  */

undefined1  [16] FUN_10a2e3050(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    lVar2 = param_2 << 4;
    __Znwm(lVar2);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar2;
    return auVar3;
  }
  func_0x000109ffded8();
  func_0x00010a2e30c8();
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = plVar1;
  return auVar4;
}



/* Entry: 10a2e3064; end: 10a2e3157;  */

undefined1  [16] FUN_10a2e3064(long *param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 4;
    __Znwm(lVar1);
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000109ffded8();
  func_0x00010a2e30c8();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a2e3158; end: 10a2e327b;  */

void FUN_10a2e3158(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  uVar2 = param_1[2];
  puVar6 = (undefined8 *)*param_1;
  if (uVar2 - (long)puVar6 < 0x11) {
    if (puVar6 != (undefined8 *)0x0) {
      param_1[1] = puVar6;
      __ZdlPv(puVar6);
      uVar2 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    uVar5 = (long)uVar2 >> 2;
    if (uVar5 < 4) {
      uVar5 = 3;
    }
    if (0x7ffffffffffffff7 < uVar2) {
      uVar5 = 0x1fffffffffffffff;
    }
    FUN_10a2e327c(param_1,uVar5);
    puVar3 = (undefined8 *)param_1[1];
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar3 = *param_2;
      puVar3 = puVar3 + 1;
    }
  }
  else {
    puVar4 = (undefined8 *)param_1[1];
    if ((ulong)((long)puVar4 - (long)puVar6) < 0x11) {
      puVar7 = (undefined8 *)((long)param_2 + ((long)puVar4 - (long)puVar6));
      puVar3 = puVar4;
      if (puVar4 != puVar6) {
        _memmove(puVar6,param_2);
        puVar4 = (undefined8 *)param_1[1];
        puVar3 = puVar4;
      }
      for (; puVar7 != param_3; puVar7 = puVar7 + 1) {
        *puVar4 = *puVar7;
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    else {
      lVar1 = (long)param_3 - (long)param_2;
      if (lVar1 != 0) {
        _memmove(puVar6,param_2,lVar1);
      }
      puVar3 = (undefined8 *)((long)puVar6 + lVar1);
    }
  }
  param_1[1] = puVar3;
  return;
}



/* Entry: 10a2e327c; end: 10a2e32b3;  */

void FUN_10a2e327c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    plVar4 = param_1;
    func_0x00010a0433c0();
    *param_1 = (long)plVar4;
    param_1[1] = (long)plVar4;
    param_1[2] = (long)(plVar4 + (long)param_2);
    return;
  }
  FUN_10a107b70();
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    uVar5 = *param_2;
    *param_2 = 0;
    puVar10 = puVar2 + 1;
    *puVar2 = uVar5;
LAB_10a2e3374:
    param_1[1] = (long)puVar10;
    return;
  }
  lVar8 = *param_1;
  lVar9 = (long)puVar2 - lVar8;
  uVar1 = (lVar9 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar6 = param_1[2] - lVar8;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 >> 0x3d == 0) {
      lVar3 = uVar7 << 3;
      __Znwm();
      puVar2 = (undefined8 *)(lVar3 + lVar9);
      uVar5 = *param_2;
      *param_2 = 0;
      puVar10 = puVar2 + 1;
      *puVar2 = uVar5;
      _memcpy(puVar2 + -(lVar9 >> 3),lVar8,lVar9);
      *param_1 = (long)(puVar2 + -(lVar9 >> 3));
      param_1[1] = (long)puVar10;
      param_1[2] = lVar3 + uVar7 * 8;
      if (lVar8 != 0) {
        __ZdlPv(lVar8);
      }
      goto LAB_10a2e3374;
    }
  }
  else {
    FUN_10a2e3398();
  }
  func_0x000109ffded8();
  plVar4 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (*plVar4 != 0) {
    FUN_10a2dfb24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*plVar4);
    return;
  }
  return;
}



/* Entry: 10a2e32b4; end: 10a2e3397;  */

void FUN_10a2e32b4(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    uVar5 = *param_2;
    *param_2 = 0;
    puVar10 = puVar2 + 1;
    *puVar2 = uVar5;
LAB_10a2e3374:
    param_1[1] = (long)puVar10;
    return;
  }
  lVar8 = *param_1;
  lVar9 = (long)puVar2 - lVar8;
  uVar1 = (lVar9 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar6 = param_1[2] - lVar8;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 >> 0x3d == 0) {
      lVar3 = uVar7 << 3;
      __Znwm();
      puVar2 = (undefined8 *)(lVar3 + lVar9);
      uVar5 = *param_2;
      *param_2 = 0;
      puVar10 = puVar2 + 1;
      *puVar2 = uVar5;
      _memcpy(puVar2 + -(lVar9 >> 3),lVar8,lVar9);
      *param_1 = (long)(puVar2 + -(lVar9 >> 3));
      param_1[1] = (long)puVar10;
      param_1[2] = lVar3 + uVar7 * 8;
      if (lVar8 != 0) {
        __ZdlPv(lVar8);
      }
      goto LAB_10a2e3374;
    }
  }
  else {
    FUN_10a2e3398();
  }
  func_0x000109ffded8();
  plVar4 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (*plVar4 != 0) {
    FUN_10a2dfb24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*plVar4);
    return;
  }
  return;
}



/* Entry: 10a2e3398; end: 10a2e33ab;  */

void FUN_10a2e3398(void)

{
  long *plVar1;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (*plVar1 != 0) {
    FUN_10a2dfb24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*plVar1);
    return;
  }
  return;
}



/* Entry: 10a2e33ac; end: 10a2e358b;  */

void FUN_10a2e33ac(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10a2dfb24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*param_1);
    return;
  }
  return;
}



/* Entry: 10a2e358c; end: 10a2e3687;  */

undefined1  [16] FUN_10a2e358c(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bbf568;
  puVar1 = &UNK_10f64b3ce;
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
    ppuStack_40 = &PTR_DAT_110bbf568;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110b178e0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a2e3688; end: 10a2e36df;  */

ulong FUN_10a2e3688(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a052828(param_1,*param_2,FUN_10a2e36e0,FUN_10a2e37b4);
  }
  return param_1;
}



/* Entry: 10a2e36e0; end: 10a2e37b3;  */

void FUN_10a2e36e0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  plVar2 = param_2;
  FUN_10a2e3880(param_2,param_3);
  FUN_10a052e3c(param_5);
  uStack_48 = *(undefined4 *)((long)plVar2 + 0x2c);
  uStack_50 = *(undefined8 *)((long)plVar2 + 0x24);
  FUN_10a065390(param_1,param_2,&uStack_50);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a2e37b4; end: 10a2e387f;  */

void FUN_10a2e37b4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010a2e38e8(param_2,param_3);
  FUN_10a0655b4(param_5);
  func_0x00010a0655d8(param_2,param_4);
  lVar5 = param_2[1];
  *(long *)((long)plVar4 + 0x24) = *param_2;
  *(int *)((long)plVar4 + 0x2c) = (int)lVar5;
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



/* Entry: 10a2e3880; end: 10a2e39a7;  */

undefined ** FUN_10a2e3880(undefined **param_1,undefined **param_2)

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
    FUN_10a052828(ppuVar1,*param_2,FUN_10a2e39a8,FUN_10a2e3a7c);
  }
  return ppuVar1;
}



/* Entry: 10a2e39a8; end: 10a2e3a7b;  */

void FUN_10a2e39a8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  long lStack_50;
  undefined4 uStack_48;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  plVar2 = param_2;
  FUN_10a2e3880(param_2,param_3);
  FUN_10a052e3c(param_5);
  uStack_48 = (undefined4)plVar2[7];
  lStack_50 = plVar2[6];
  FUN_10a065390(param_1,param_2,&lStack_50);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a2e3a7c; end: 10a2e3b47;  */

void FUN_10a2e3a7c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010a2e38e8(param_2,param_3);
  FUN_10a0655b4(param_5);
  func_0x00010a0655d8(param_2,param_4);
  lVar5 = param_2[1];
  plVar4[6] = *param_2;
  *(int *)(plVar4 + 7) = (int)lVar5;
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



/* Entry: 10a2e3b48; end: 10a2e3b9f;  */

ulong FUN_10a2e3b48(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a052828(param_1,*param_2,FUN_10a2e3ba0,FUN_10a2e3c5c);
  }
  return param_1;
}



/* Entry: 10a2e3ba0; end: 10a2e3c5b;  */

void FUN_10a2e3ba0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  float fVar14;
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
  FUN_10a2e3880(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)((long)param_2 + 0x3c);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
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



/* Entry: 10a2e3c5c; end: 10a2e3d4b;  */

void FUN_10a2e3c5c(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  float fVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  func_0x00010a2e38e8(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a2e3d38);
    (*pcVar3)();
  }
  fVar2 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar2 = 0.0;
  }
  *(float *)((long)param_2 + 0x3c) = fVar2;
  *param_1 = 0;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
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
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
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
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a2e3d4c; end: 10a2e3e07;  */

void FUN_10a2e3d4c(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f64c482,0xf);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a2e3e08);
  (*pcVar4)();
}



/* Entry: 10a2e3e08; end: 10a2e3eeb;  */

void FUN_10a2e3e08(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a2e3eec(param_2,param_3);
  FUN_10a052e3c(param_5);
  if (((param_2[0x5a] != 0) && (lVar5 = *(long *)(param_2[0x5a] + 0x268), lVar5 != 0)) &&
     (___dynamic_cast(lVar5,&PTR_DAT_110bb3788,&PTR_DAT_110c5e3a8,0), lVar5 != 0)) {
    *(undefined8 *)(lVar5 + 0x6fc) = 0;
    *(undefined8 *)(lVar5 + 0x6f4) = 0;
  }
  *param_1 = 0;
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


