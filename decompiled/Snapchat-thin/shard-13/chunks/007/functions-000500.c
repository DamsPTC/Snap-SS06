/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ac3f1a0; end: 10ac3f1a3;  */

undefined8 * FUN_10ac3f1a0(undefined8 *param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  *param_1 = &PTR_FUN_110c58428;
  param_1[2] = &PTR_FUN_110c58560;
  param_1[5] = &PTR_FUN_110c58590;
  param_1[0x5a] = &PTR_FUN_110c58660;
  puVar4 = param_1 + 0x15;
  *puVar4 = &PTR_FUN_110c585e8;
  param_1[0x51] = &PTR_FUN_110c58608;
  func_0x00010a0523dc(param_1 + 0x58);
  func_0x00010a1fec54(param_1 + 0x56);
  FUN_10a00dc2c(param_1 + 0x51);
  *param_1 = &PTR_FUN_110c5bec8;
  param_1[2] = &PTR_FUN_110bb3968;
  param_1[5] = &PTR_DAT_110bb3998;
  param_1[0x5a] = &PTR_DAT_110c5c028;
  *puVar4 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar4);
  *param_1 = &PTR_DAT_110c5c078;
  param_1[2] = &PTR_FUN_110b9f848;
  param_1[5] = &PTR_DAT_110b9f878;
  param_1[0x5a] = &PTR_DAT_110c5c148;
  FUN_10a042dcc(param_1 + 0x13);
  *param_1 = &PTR_DAT_110c60a00;
  param_1[2] = &PTR_DAT_110c60a88;
  param_1[5] = &PTR_DAT_110c60ab8;
  ppuVar2 = (undefined **)(param_1 + 0xb);
  puVar5 = (undefined8 *)param_1[0xc];
  for (puVar4 = (undefined8 *)*ppuVar2; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar4,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar2);
  plVar3 = param_1 + 10;
  if ((*plVar3 != 0) && (*(undefined ***)(*(long *)(*plVar3 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar1 = *(long *)(param_1[0x12] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar2;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar3;
  *plVar3 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar3);
  }
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 6);
  param_1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10ac3f1a4; end: 10ac3f1b7;  */

void FUN_10ac3f1a4(void)

{
  func_0x00010ac422f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3f1b8; end: 10ac3f1c7;  */

long FUN_10ac3f1b8(long param_1)

{
  return param_1 + 0xa8;
}



/* Entry: 10ac3f1c8; end: 10ac3f1df;  */

void FUN_10ac3f1c8(long param_1)

{
  func_0x00010ac422f4(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3f1e0; end: 10ac3f1e7;  */

undefined8 * FUN_10ac3f1e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = param_1 + -5;
  *puVar1 = &PTR_FUN_110c58428;
  param_1[-3] = &PTR_FUN_110c58560;
  *param_1 = &PTR_FUN_110c58590;
  param_1[0x55] = &PTR_FUN_110c58660;
  puVar5 = param_1 + 0x10;
  *puVar5 = &PTR_FUN_110c585e8;
  param_1[0x4c] = &PTR_FUN_110c58608;
  func_0x00010a0523dc(param_1 + 0x53);
  func_0x00010a1fec54(param_1 + 0x51);
  FUN_10a00dc2c(param_1 + 0x4c);
  *puVar1 = &PTR_FUN_110c5bec8;
  param_1[-3] = &PTR_FUN_110bb3968;
  *param_1 = &PTR_DAT_110bb3998;
  param_1[0x55] = &PTR_DAT_110c5c028;
  *puVar5 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x48);
  func_0x00010a042c64(param_1 + 0x43);
  func_0x00010a0523dc(param_1 + 0x40);
  if (*(char *)(param_1 + 0x37) == '\x01') {
    func_0x00010a042d30(param_1 + 0x35);
  }
  param_1[0x10] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar5);
  *puVar1 = &PTR_DAT_110c5c078;
  param_1[-3] = &PTR_FUN_110b9f848;
  *param_1 = &PTR_DAT_110b9f878;
  param_1[0x55] = &PTR_DAT_110c5c148;
  FUN_10a042dcc(param_1 + 0xe);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-3] = &PTR_DAT_110c60a88;
  *param_1 = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + 6);
  puVar6 = (undefined8 *)param_1[7];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + 5;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -2);
  if ((param_1[0xd] != 0) && (lVar2 = *(long *)(param_1[0xd] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    __ZdlPv(param_1[10]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  param_1[-3] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -2);
  return puVar1;
}



/* Entry: 10ac3f1e8; end: 10ac3f1ff;  */

void FUN_10ac3f1e8(long param_1)

{
  func_0x00010ac422f4(param_1 + -0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3f200; end: 10ac3f207;  */

undefined8 * FUN_10ac3f200(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = param_1 + -0x15;
  *puVar1 = &PTR_FUN_110c58428;
  param_1[-0x13] = &PTR_FUN_110c58560;
  param_1[-0x10] = &PTR_FUN_110c58590;
  param_1[0x45] = &PTR_FUN_110c58660;
  *param_1 = &PTR_FUN_110c585e8;
  param_1[0x3c] = &PTR_FUN_110c58608;
  func_0x00010a0523dc(param_1 + 0x43);
  func_0x00010a1fec54(param_1 + 0x41);
  FUN_10a00dc2c(param_1 + 0x3c);
  *puVar1 = &PTR_FUN_110c5bec8;
  param_1[-0x13] = &PTR_FUN_110bb3968;
  param_1[-0x10] = &PTR_DAT_110bb3998;
  param_1[0x45] = &PTR_DAT_110c5c028;
  *param_1 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x38);
  func_0x00010a042c64(param_1 + 0x33);
  func_0x00010a0523dc(param_1 + 0x30);
  if (*(char *)(param_1 + 0x27) == '\x01') {
    func_0x00010a042d30(param_1 + 0x25);
  }
  *param_1 = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1);
  *puVar1 = &PTR_DAT_110c5c078;
  param_1[-0x13] = &PTR_FUN_110b9f848;
  param_1[-0x10] = &PTR_DAT_110b9f878;
  param_1[0x45] = &PTR_DAT_110c5c148;
  FUN_10a042dcc(param_1 + -2);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-0x13] = &PTR_DAT_110c60a88;
  param_1[-0x10] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + -10);
  puVar6 = (undefined8 *)param_1[-9];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + -0xb;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x12);
  if ((param_1[-3] != 0) && (lVar2 = *(long *)(param_1[-3] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)param_1 + -0x19) < '\0') {
    __ZdlPv(param_1[-6]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[-0xc] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x10] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0xf);
  param_1[-0x13] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x12);
  return puVar1;
}



/* Entry: 10ac3f208; end: 10ac3f21f;  */

void FUN_10ac3f208(long param_1)

{
  func_0x00010ac422f4(param_1 + -0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3f220; end: 10ac3f227;  */

undefined8 * FUN_10ac3f220(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = param_1 + -0x51;
  *puVar1 = &PTR_FUN_110c58428;
  param_1[-0x4f] = &PTR_FUN_110c58560;
  param_1[-0x4c] = &PTR_FUN_110c58590;
  param_1[9] = &PTR_FUN_110c58660;
  puVar5 = param_1 + -0x3c;
  *puVar5 = &PTR_FUN_110c585e8;
  *param_1 = &PTR_FUN_110c58608;
  func_0x00010a0523dc(param_1 + 7);
  func_0x00010a1fec54(param_1 + 5);
  FUN_10a00dc2c(param_1);
  *puVar1 = &PTR_FUN_110c5bec8;
  param_1[-0x4f] = &PTR_FUN_110bb3968;
  param_1[-0x4c] = &PTR_DAT_110bb3998;
  param_1[9] = &PTR_DAT_110c5c028;
  *puVar5 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + -4);
  func_0x00010a042c64(param_1 + -9);
  func_0x00010a0523dc(param_1 + -0xc);
  if (*(char *)(param_1 + -0x15) == '\x01') {
    func_0x00010a042d30(param_1 + -0x17);
  }
  param_1[-0x3c] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar5);
  *puVar1 = &PTR_DAT_110c5c078;
  param_1[-0x4f] = &PTR_FUN_110b9f848;
  param_1[-0x4c] = &PTR_DAT_110b9f878;
  param_1[9] = &PTR_DAT_110c5c148;
  FUN_10a042dcc(param_1 + -0x3e);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-0x4f] = &PTR_DAT_110c60a88;
  param_1[-0x4c] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + -0x46);
  puVar6 = (undefined8 *)param_1[-0x45];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + -0x47;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x4e);
  if ((param_1[-0x3f] != 0) && (lVar2 = *(long *)(param_1[-0x3f] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)param_1 + -0x1f9) < '\0') {
    __ZdlPv(param_1[-0x42]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[-0x48] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x4c] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x4b);
  param_1[-0x4f] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x4e);
  return puVar1;
}



/* Entry: 10ac3f228; end: 10ac3f23f;  */

void FUN_10ac3f228(long param_1)

{
  func_0x00010ac422f4(param_1 + -0x288);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3f240; end: 10ac3f24f;  */

undefined8 * FUN_10ac3f240(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_FUN_110c58428;
  puVar1[2] = &PTR_FUN_110c58560;
  puVar1[5] = &PTR_FUN_110c58590;
  puVar1[0x5a] = &PTR_FUN_110c58660;
  puVar5 = puVar1 + 0x15;
  *puVar5 = &PTR_FUN_110c585e8;
  puVar1[0x51] = &PTR_FUN_110c58608;
  func_0x00010a0523dc(puVar1 + 0x58);
  func_0x00010a1fec54(puVar1 + 0x56);
  FUN_10a00dc2c(puVar1 + 0x51);
  *puVar1 = &PTR_FUN_110c5bec8;
  puVar1[2] = &PTR_FUN_110bb3968;
  puVar1[5] = &PTR_DAT_110bb3998;
  puVar1[0x5a] = &PTR_DAT_110c5c028;
  *puVar5 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(puVar1 + 0x4d);
  func_0x00010a042c64(puVar1 + 0x48);
  func_0x00010a0523dc(puVar1 + 0x45);
  if (*(char *)(puVar1 + 0x3c) == '\x01') {
    func_0x00010a042d30(puVar1 + 0x3a);
  }
  puVar1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar5);
  *puVar1 = &PTR_DAT_110c5c078;
  puVar1[2] = &PTR_FUN_110b9f848;
  puVar1[5] = &PTR_DAT_110b9f878;
  puVar1[0x5a] = &PTR_DAT_110c5c148;
  FUN_10a042dcc(puVar1 + 0x13);
  *puVar1 = &PTR_DAT_110c60a00;
  puVar1[2] = &PTR_DAT_110c60a88;
  puVar1[5] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(puVar1 + 0xb);
  puVar6 = (undefined8 *)puVar1[0xc];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = puVar1 + 10;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(puVar1 + 3);
  if ((puVar1[0x12] != 0) && (lVar2 = *(long *)(puVar1[0x12] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)puVar1 + 0x8f) < '\0') {
    __ZdlPv(puVar1[0xf]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (puVar1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puVar1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(puVar1 + 6);
  puVar1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(puVar1 + 3);
  return puVar1;
}



/* Entry: 10ac3f250; end: 10ac3f27f;  */

void FUN_10ac3f250(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  func_0x00010ac422f4((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10ac3f280; end: 10ac3f28b;  */

undefined8 * FUN_10ac3f280(undefined8 *param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  *param_1 = &PTR_FUN_110c64578;
  param_1[2] = &PTR_FUN_110c61720;
  param_1[5] = &PTR_DAT_110c61750;
  param_1[0xc6] = &PTR_DAT_110c64708;
  param_1[0x15] = &PTR_DAT_110c617a8;
  param_1[0x51] = &PTR_DAT_110c617c8;
  param_1[0x52] = &PTR_DAT_110c61810;
  param_1[0x9c] = &PTR_DAT_110c61838;
  FUN_10a7c9c00(*(long *)(param_1[0x12] + 3000) + 0x78,&stack0xffffffffffffffc8);
  func_0x00010a05a86c(param_1 + 0xc3);
  func_0x00010ac51d18(param_1 + 0xc1);
  FUN_10a05b1b0(param_1 + 0xbf);
  func_0x00010a042b54(param_1 + 0xbd);
  if (param_1[0xb9] != 0) {
    param_1[0xba] = param_1[0xb9];
    __ZdlPv();
  }
  func_0x00010a042b54(param_1 + 0xb5);
  func_0x00010a042b54(param_1 + 0xb3);
  FUN_10a05b1b0(param_1 + 0xb1);
  func_0x00010a0523dc(param_1 + 0xae);
  FUN_10ac827e8(param_1 + 0xac);
  FUN_10a37b878(param_1 + 0xaa);
  FUN_10a05b1b0(param_1 + 0xa8);
  if (*(char *)((long)param_1 + 0x53f) < '\0') {
    __ZdlPv(param_1[0xa5]);
  }
  param_1[0x9c] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[0x9f] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x9f] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x9d);
  FUN_10ac3b3c8(param_1 + 0x52);
  *param_1 = &PTR_FUN_110c64758;
  param_1[2] = &PTR_FUN_110bb3968;
  param_1[5] = &PTR_DAT_110bb3998;
  param_1[0xc6] = &PTR_DAT_110c648b8;
  param_1[0x15] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x15);
  *param_1 = &PTR_DAT_110c64908;
  param_1[2] = &PTR_FUN_110b9f848;
  param_1[5] = &PTR_DAT_110b9f878;
  param_1[0xc6] = &PTR_DAT_110c649d8;
  FUN_10a042dcc(param_1 + 0x13);
  *param_1 = &PTR_DAT_110c60a00;
  param_1[2] = &PTR_DAT_110c60a88;
  param_1[5] = &PTR_DAT_110c60ab8;
  ppuVar2 = (undefined **)(param_1 + 0xb);
  puVar5 = (undefined8 *)param_1[0xc];
  for (puVar4 = (undefined8 *)*ppuVar2; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar4,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar2);
  plVar3 = param_1 + 10;
  if ((*plVar3 != 0) && (*(undefined ***)(*(long *)(*plVar3 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar1 = *(long *)(param_1[0x12] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar2;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar3;
  *plVar3 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar3);
  }
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 6);
  param_1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10ac3f28c; end: 10ac3f2a7;  */

void FUN_10ac3f28c(undefined8 param_1)

{
  FUN_10ac6e4cc(param_1,&PTR_PTR_110c67ef8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3f2a8; end: 10ac3f2c7;  */

long FUN_10ac3f2a8(long param_1)

{
  return param_1 + 0xa8;
}



/* Entry: 10ac3f2c8; end: 10ac3f2ff;  */

void FUN_10ac3f2c8(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10ac6e4cc((long)param_1 + lVar1,&PTR_PTR_110c67ef8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10ac3f300; end: 10ac3f313;  */

long FUN_10ac3f300(long param_1)

{
  return param_1 + 0xa8;
}



/* Entry: 10ac3f314; end: 10ac3f32f;  */

void FUN_10ac3f314(undefined8 param_1)

{
  FUN_10ac6e4cc(param_1,&PTR_PTR_110c5e780);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3f330; end: 10ac3f347;  */

long FUN_10ac3f330(long param_1)

{
  return param_1 + 0xa8;
}



/* Entry: 10ac3f348; end: 10ac3f367;  */

void FUN_10ac3f348(long param_1)

{
  FUN_10ac6e4cc(param_1 + -0x10,&PTR_PTR_110c5e780);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3f368; end: 10ac3f377;  */

undefined8 * FUN_10ac3f368(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = param_1 + -5;
  *puVar1 = &PTR_FUN_110c5c3b0;
  param_1[-3] = &PTR_FUN_110c61720;
  *param_1 = &PTR_DAT_110c61750;
  param_1[0xc1] = &PTR_DAT_110c5c540;
  param_1[0x10] = &PTR_DAT_110c617a8;
  param_1[0x4c] = &PTR_DAT_110c617c8;
  param_1[0x4d] = &PTR_DAT_110c61810;
  param_1[0x97] = &PTR_DAT_110c61838;
  FUN_10a7c9c00(*(long *)(param_1[0xd] + 3000) + 0x78,&stack0xffffffffffffffc8);
  func_0x00010a05a86c(param_1 + 0xbe);
  func_0x00010ac51d18(param_1 + 0xbc);
  FUN_10a05b1b0(param_1 + 0xba);
  func_0x00010a042b54(param_1 + 0xb8);
  if (param_1[0xb4] != 0) {
    param_1[0xb5] = param_1[0xb4];
    __ZdlPv();
  }
  func_0x00010a042b54(param_1 + 0xb0);
  func_0x00010a042b54(param_1 + 0xae);
  FUN_10a05b1b0(param_1 + 0xac);
  func_0x00010a0523dc(param_1 + 0xa9);
  FUN_10ac827e8(param_1 + 0xa7);
  FUN_10a37b878(param_1 + 0xa5);
  FUN_10a05b1b0(param_1 + 0xa3);
  if (*(char *)((long)param_1 + 0x517) < '\0') {
    __ZdlPv(param_1[0xa0]);
  }
  param_1[0x97] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[0x9a] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x9a] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x98);
  FUN_10ac3b3c8(param_1 + 0x4d);
  *puVar1 = &PTR_FUN_110c5c590;
  param_1[-3] = &PTR_FUN_110bb3968;
  *param_1 = &PTR_DAT_110bb3998;
  param_1[0xc1] = &PTR_DAT_110c5c6f0;
  param_1[0x10] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x48);
  func_0x00010a042c64(param_1 + 0x43);
  func_0x00010a0523dc(param_1 + 0x40);
  if (*(char *)(param_1 + 0x37) == '\x01') {
    func_0x00010a042d30(param_1 + 0x35);
  }
  param_1[0x10] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x10);
  *puVar1 = &PTR_DAT_110c5c740;
  param_1[-3] = &PTR_FUN_110b9f848;
  *param_1 = &PTR_DAT_110b9f878;
  param_1[0xc1] = &PTR_DAT_110c5c810;
  FUN_10a042dcc(param_1 + 0xe);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-3] = &PTR_DAT_110c60a88;
  *param_1 = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + 6);
  puVar6 = (undefined8 *)param_1[7];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + 5;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -2);
  if ((param_1[0xd] != 0) && (lVar2 = *(long *)(param_1[0xd] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    __ZdlPv(param_1[10]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  param_1[-3] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -2);
  return puVar1;
}



/* Entry: 10ac3f378; end: 10ac3f397;  */

void FUN_10ac3f378(long param_1)

{
  FUN_10ac6e4cc(param_1 + -0x28,&PTR_PTR_110c5e780);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3f398; end: 10ac3f3a7;  */

undefined8 * FUN_10ac3f398(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = param_1 + -0x15;
  *puVar1 = &PTR_FUN_110c5c3b0;
  param_1[-0x13] = &PTR_FUN_110c61720;
  param_1[-0x10] = &PTR_DAT_110c61750;
  param_1[0xb1] = &PTR_DAT_110c5c540;
  *param_1 = &PTR_DAT_110c617a8;
  param_1[0x3c] = &PTR_DAT_110c617c8;
  param_1[0x3d] = &PTR_DAT_110c61810;
  param_1[0x87] = &PTR_DAT_110c61838;
  FUN_10a7c9c00(*(long *)(param_1[-3] + 3000) + 0x78,&stack0xffffffffffffffc8);
  func_0x00010a05a86c(param_1 + 0xae);
  func_0x00010ac51d18(param_1 + 0xac);
  FUN_10a05b1b0(param_1 + 0xaa);
  func_0x00010a042b54(param_1 + 0xa8);
  if (param_1[0xa4] != 0) {
    param_1[0xa5] = param_1[0xa4];
    __ZdlPv();
  }
  func_0x00010a042b54(param_1 + 0xa0);
  func_0x00010a042b54(param_1 + 0x9e);
  FUN_10a05b1b0(param_1 + 0x9c);
  func_0x00010a0523dc(param_1 + 0x99);
  FUN_10ac827e8(param_1 + 0x97);
  FUN_10a37b878(param_1 + 0x95);
  FUN_10a05b1b0(param_1 + 0x93);
  if (*(char *)((long)param_1 + 0x497) < '\0') {
    __ZdlPv(param_1[0x90]);
  }
  param_1[0x87] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[0x8a] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x8a] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x88);
  FUN_10ac3b3c8(param_1 + 0x3d);
  *puVar1 = &PTR_FUN_110c5c590;
  param_1[-0x13] = &PTR_FUN_110bb3968;
  param_1[-0x10] = &PTR_DAT_110bb3998;
  param_1[0xb1] = &PTR_DAT_110c5c6f0;
  *param_1 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x38);
  func_0x00010a042c64(param_1 + 0x33);
  func_0x00010a0523dc(param_1 + 0x30);
  if (*(char *)(param_1 + 0x27) == '\x01') {
    func_0x00010a042d30(param_1 + 0x25);
  }
  *param_1 = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1);
  *puVar1 = &PTR_DAT_110c5c740;
  param_1[-0x13] = &PTR_FUN_110b9f848;
  param_1[-0x10] = &PTR_DAT_110b9f878;
  param_1[0xb1] = &PTR_DAT_110c5c810;
  FUN_10a042dcc(param_1 + -2);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-0x13] = &PTR_DAT_110c60a88;
  param_1[-0x10] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + -10);
  puVar6 = (undefined8 *)param_1[-9];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + -0xb;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x12);
  if ((param_1[-3] != 0) && (lVar2 = *(long *)(param_1[-3] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)param_1 + -0x19) < '\0') {
    __ZdlPv(param_1[-6]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[-0xc] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x10] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0xf);
  param_1[-0x13] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x12);
  return puVar1;
}



/* Entry: 10ac3f3a8; end: 10ac3f3c7;  */

void FUN_10ac3f3a8(long param_1)

{
  FUN_10ac6e4cc(param_1 + -0xa8,&PTR_PTR_110c5e780);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3f3c8; end: 10ac3f3d7;  */

undefined8 * FUN_10ac3f3c8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = param_1 + -0x51;
  *puVar1 = &PTR_FUN_110c5c3b0;
  param_1[-0x4f] = &PTR_FUN_110c61720;
  param_1[-0x4c] = &PTR_DAT_110c61750;
  param_1[0x75] = &PTR_DAT_110c5c540;
  param_1[-0x3c] = &PTR_DAT_110c617a8;
  *param_1 = &PTR_DAT_110c617c8;
  param_1[1] = &PTR_DAT_110c61810;
  param_1[0x4b] = &PTR_DAT_110c61838;
  FUN_10a7c9c00(*(long *)(param_1[-0x3f] + 3000) + 0x78,&stack0xffffffffffffffc8);
  func_0x00010a05a86c(param_1 + 0x72);
  func_0x00010ac51d18(param_1 + 0x70);
  FUN_10a05b1b0(param_1 + 0x6e);
  func_0x00010a042b54(param_1 + 0x6c);
  if (param_1[0x68] != 0) {
    param_1[0x69] = param_1[0x68];
    __ZdlPv();
  }
  func_0x00010a042b54(param_1 + 100);
  func_0x00010a042b54(param_1 + 0x62);
  FUN_10a05b1b0(param_1 + 0x60);
  func_0x00010a0523dc(param_1 + 0x5d);
  FUN_10ac827e8(param_1 + 0x5b);
  FUN_10a37b878(param_1 + 0x59);
  FUN_10a05b1b0(param_1 + 0x57);
  if (*(char *)((long)param_1 + 0x2b7) < '\0') {
    __ZdlPv(param_1[0x54]);
  }
  param_1[0x4b] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[0x4e] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x4e] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x4c);
  FUN_10ac3b3c8(param_1 + 1);
  *puVar1 = &PTR_FUN_110c5c590;
  param_1[-0x4f] = &PTR_FUN_110bb3968;
  param_1[-0x4c] = &PTR_DAT_110bb3998;
  param_1[0x75] = &PTR_DAT_110c5c6f0;
  param_1[-0x3c] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + -4);
  func_0x00010a042c64(param_1 + -9);
  func_0x00010a0523dc(param_1 + -0xc);
  if (*(char *)(param_1 + -0x15) == '\x01') {
    func_0x00010a042d30(param_1 + -0x17);
  }
  param_1[-0x3c] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + -0x3c);
  *puVar1 = &PTR_DAT_110c5c740;
  param_1[-0x4f] = &PTR_FUN_110b9f848;
  param_1[-0x4c] = &PTR_DAT_110b9f878;
  param_1[0x75] = &PTR_DAT_110c5c810;
  FUN_10a042dcc(param_1 + -0x3e);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-0x4f] = &PTR_DAT_110c60a88;
  param_1[-0x4c] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + -0x46);
  puVar6 = (undefined8 *)param_1[-0x45];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + -0x47;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x4e);
  if ((param_1[-0x3f] != 0) && (lVar2 = *(long *)(param_1[-0x3f] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)param_1 + -0x1f9) < '\0') {
    __ZdlPv(param_1[-0x42]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[-0x48] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x4c] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x4b);
  param_1[-0x4f] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x4e);
  return puVar1;
}



/* Entry: 10ac3f3d8; end: 10ac3f3f7;  */

void FUN_10ac3f3d8(long param_1)

{
  FUN_10ac6e4cc(param_1 + -0x288,&PTR_PTR_110c5e780);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3f3f8; end: 10ac3f407;  */

undefined8 * FUN_10ac3f3f8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = param_1 + -0x52;
  *puVar1 = &PTR_FUN_110c5c3b0;
  param_1[-0x50] = &PTR_FUN_110c61720;
  param_1[-0x4d] = &PTR_DAT_110c61750;
  param_1[0x74] = &PTR_DAT_110c5c540;
  param_1[-0x3d] = &PTR_DAT_110c617a8;
  param_1[-1] = &PTR_DAT_110c617c8;
  *param_1 = &PTR_DAT_110c61810;
  param_1[0x4a] = &PTR_DAT_110c61838;
  FUN_10a7c9c00(*(long *)(param_1[-0x40] + 3000) + 0x78,&stack0xffffffffffffffc8);
  func_0x00010a05a86c(param_1 + 0x71);
  func_0x00010ac51d18(param_1 + 0x6f);
  FUN_10a05b1b0(param_1 + 0x6d);
  func_0x00010a042b54(param_1 + 0x6b);
  if (param_1[0x67] != 0) {
    param_1[0x68] = param_1[0x67];
    __ZdlPv();
  }
  func_0x00010a042b54(param_1 + 99);
  func_0x00010a042b54(param_1 + 0x61);
  FUN_10a05b1b0(param_1 + 0x5f);
  func_0x00010a0523dc(param_1 + 0x5c);
  FUN_10ac827e8(param_1 + 0x5a);
  FUN_10a37b878(param_1 + 0x58);
  FUN_10a05b1b0(param_1 + 0x56);
  if (*(char *)((long)param_1 + 0x2af) < '\0') {
    __ZdlPv(param_1[0x53]);
  }
  param_1[0x4a] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[0x4d] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x4d] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x4b);
  FUN_10ac3b3c8(param_1);
  *puVar1 = &PTR_FUN_110c5c590;
  param_1[-0x50] = &PTR_FUN_110bb3968;
  param_1[-0x4d] = &PTR_DAT_110bb3998;
  param_1[0x74] = &PTR_DAT_110c5c6f0;
  param_1[-0x3d] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + -5);
  func_0x00010a042c64(param_1 + -10);
  func_0x00010a0523dc(param_1 + -0xd);
  if (*(char *)(param_1 + -0x16) == '\x01') {
    func_0x00010a042d30(param_1 + -0x18);
  }
  param_1[-0x3d] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + -0x3d);
  *puVar1 = &PTR_DAT_110c5c740;
  param_1[-0x50] = &PTR_FUN_110b9f848;
  param_1[-0x4d] = &PTR_DAT_110b9f878;
  param_1[0x74] = &PTR_DAT_110c5c810;
  FUN_10a042dcc(param_1 + -0x3f);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-0x50] = &PTR_DAT_110c60a88;
  param_1[-0x4d] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + -0x47);
  puVar6 = (undefined8 *)param_1[-0x46];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + -0x48;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x4f);
  if ((param_1[-0x40] != 0) && (lVar2 = *(long *)(param_1[-0x40] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)param_1 + -0x201) < '\0') {
    __ZdlPv(param_1[-0x43]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[-0x49] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x4d] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x4c);
  param_1[-0x50] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x4f);
  return puVar1;
}



/* Entry: 10ac3f408; end: 10ac3f427;  */

void FUN_10ac3f408(long param_1)

{
  FUN_10ac6e4cc(param_1 + -0x290,&PTR_PTR_110c5e780);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3f428; end: 10ac3f437;  */

undefined8 * FUN_10ac3f428(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = param_1 + -0x9c;
  *puVar1 = &PTR_FUN_110c5c3b0;
  param_1[-0x9a] = &PTR_FUN_110c61720;
  param_1[-0x97] = &PTR_DAT_110c61750;
  param_1[0x2a] = &PTR_DAT_110c5c540;
  param_1[-0x87] = &PTR_DAT_110c617a8;
  param_1[-0x4b] = &PTR_DAT_110c617c8;
  param_1[-0x4a] = &PTR_DAT_110c61810;
  *param_1 = &PTR_DAT_110c61838;
  FUN_10a7c9c00(*(long *)(param_1[-0x8a] + 3000) + 0x78,&stack0xffffffffffffffc8);
  func_0x00010a05a86c(param_1 + 0x27);
  func_0x00010ac51d18(param_1 + 0x25);
  FUN_10a05b1b0(param_1 + 0x23);
  func_0x00010a042b54(param_1 + 0x21);
  if (param_1[0x1d] != 0) {
    param_1[0x1e] = param_1[0x1d];
    __ZdlPv();
  }
  func_0x00010a042b54(param_1 + 0x19);
  func_0x00010a042b54(param_1 + 0x17);
  FUN_10a05b1b0(param_1 + 0x15);
  func_0x00010a0523dc(param_1 + 0x12);
  FUN_10ac827e8(param_1 + 0x10);
  FUN_10a37b878(param_1 + 0xe);
  FUN_10a05b1b0(param_1 + 0xc);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  *param_1 = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[3] = 0;
  }
  func_0x00010a004e5c(param_1 + 1);
  FUN_10ac3b3c8(param_1 + -0x4a);
  *puVar1 = &PTR_FUN_110c5c590;
  param_1[-0x9a] = &PTR_FUN_110bb3968;
  param_1[-0x97] = &PTR_DAT_110bb3998;
  param_1[0x2a] = &PTR_DAT_110c5c6f0;
  param_1[-0x87] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + -0x4f);
  func_0x00010a042c64(param_1 + -0x54);
  func_0x00010a0523dc(param_1 + -0x57);
  if (*(char *)(param_1 + -0x60) == '\x01') {
    func_0x00010a042d30(param_1 + -0x62);
  }
  param_1[-0x87] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + -0x87);
  *puVar1 = &PTR_DAT_110c5c740;
  param_1[-0x9a] = &PTR_FUN_110b9f848;
  param_1[-0x97] = &PTR_DAT_110b9f878;
  param_1[0x2a] = &PTR_DAT_110c5c810;
  FUN_10a042dcc(param_1 + -0x89);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-0x9a] = &PTR_DAT_110c60a88;
  param_1[-0x97] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + -0x91);
  puVar6 = (undefined8 *)param_1[-0x90];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + -0x92;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x99);
  if ((param_1[-0x8a] != 0) && (lVar2 = *(long *)(param_1[-0x8a] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)param_1 + -0x451) < '\0') {
    __ZdlPv(param_1[-0x8d]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[-0x93] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x97] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x96);
  param_1[-0x9a] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x99);
  return puVar1;
}



/* Entry: 10ac3f438; end: 10ac3f457;  */

void FUN_10ac3f438(long param_1)

{
  FUN_10ac6e4cc(param_1 + -0x4e0,&PTR_PTR_110c5e780);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3f458; end: 10ac3f46f;  */

undefined8 * FUN_10ac3f458(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_FUN_110c5c3b0;
  puVar1[2] = &PTR_FUN_110c61720;
  puVar1[5] = &PTR_DAT_110c61750;
  puVar1[0xc6] = &PTR_DAT_110c5c540;
  puVar1[0x15] = &PTR_DAT_110c617a8;
  puVar1[0x51] = &PTR_DAT_110c617c8;
  puVar1[0x52] = &PTR_DAT_110c61810;
  puVar1[0x9c] = &PTR_DAT_110c61838;
  FUN_10a7c9c00(*(long *)(puVar1[0x12] + 3000) + 0x78,&stack0xffffffffffffffc8);
  func_0x00010a05a86c(puVar1 + 0xc3);
  func_0x00010ac51d18(puVar1 + 0xc1);
  FUN_10a05b1b0(puVar1 + 0xbf);
  func_0x00010a042b54(puVar1 + 0xbd);
  if (puVar1[0xb9] != 0) {
    puVar1[0xba] = puVar1[0xb9];
    __ZdlPv();
  }
  func_0x00010a042b54(puVar1 + 0xb5);
  func_0x00010a042b54(puVar1 + 0xb3);
  FUN_10a05b1b0(puVar1 + 0xb1);
  func_0x00010a0523dc(puVar1 + 0xae);
  FUN_10ac827e8(puVar1 + 0xac);
  FUN_10a37b878(puVar1 + 0xaa);
  FUN_10a05b1b0(puVar1 + 0xa8);
  if (*(char *)((long)puVar1 + 0x53f) < '\0') {
    __ZdlPv(puVar1[0xa5]);
  }
  puVar1[0x9c] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)puVar1[0x9f] != (undefined8 *)0x0) {
    *(undefined8 *)puVar1[0x9f] = 0;
  }
  func_0x00010a004e5c(puVar1 + 0x9d);
  FUN_10ac3b3c8(puVar1 + 0x52);
  *puVar1 = &PTR_FUN_110c5c590;
  puVar1[2] = &PTR_FUN_110bb3968;
  puVar1[5] = &PTR_DAT_110bb3998;
  puVar1[0xc6] = &PTR_DAT_110c5c6f0;
  puVar1[0x15] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(puVar1 + 0x4d);
  func_0x00010a042c64(puVar1 + 0x48);
  func_0x00010a0523dc(puVar1 + 0x45);
  if (*(char *)(puVar1 + 0x3c) == '\x01') {
    func_0x00010a042d30(puVar1 + 0x3a);
  }
  puVar1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar1 + 0x15);
  *puVar1 = &PTR_DAT_110c5c740;
  puVar1[2] = &PTR_FUN_110b9f848;
  puVar1[5] = &PTR_DAT_110b9f878;
  puVar1[0xc6] = &PTR_DAT_110c5c810;
  FUN_10a042dcc(puVar1 + 0x13);
  *puVar1 = &PTR_DAT_110c60a00;
  puVar1[2] = &PTR_DAT_110c60a88;
  puVar1[5] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(puVar1 + 0xb);
  puVar6 = (undefined8 *)puVar1[0xc];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = puVar1 + 10;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(puVar1 + 3);
  if ((puVar1[0x12] != 0) && (lVar2 = *(long *)(puVar1[0x12] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)puVar1 + 0x8f) < '\0') {
    __ZdlPv(puVar1[0xf]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (puVar1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puVar1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(puVar1 + 6);
  puVar1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(puVar1 + 3);
  return puVar1;
}



/* Entry: 10ac3f470; end: 10ac3f4a7;  */

void FUN_10ac3f470(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10ac6e4cc((long)param_1 + lVar1,&PTR_PTR_110c5e780);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10ac3f4a8; end: 10ac3f4ab;  */

undefined8 * FUN_10ac3f4a8(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  *param_1 = &PTR_FUN_110c586e0;
  param_1[2] = &PTR_FUN_110c587b0;
  param_1[5] = &PTR_FUN_110c587e0;
  param_1[0x3b] = &PTR_FUN_110c58868;
  if (param_1[0x38] != 0) {
    param_1[0x39] = param_1[0x38];
    __ZdlPv();
  }
  if (param_1[0x35] != 0) {
    param_1[0x36] = param_1[0x35];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x16f) < '\0') {
    __ZdlPv(param_1[0x2b]);
  }
  FUN_10a0cfe2c(param_1 + 0x29);
  plVar1 = (long *)param_1[0x28];
  param_1[0x28] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[0x25] != 0) {
    param_1[0x26] = param_1[0x25];
    __ZdlPv();
  }
  if (param_1[0x22] != 0) {
    param_1[0x23] = param_1[0x22];
    __ZdlPv();
  }
  *param_1 = &PTR_FUN_110c5c878;
  param_1[2] = &PTR_FUN_110c68030;
  param_1[5] = &PTR_DAT_110c68060;
  param_1[0x3b] = &PTR_FUN_110c5c978;
  FUN_10a0cfe2c(param_1 + 0x1b);
  func_0x00010a1980a8(param_1 + 0x18);
  *param_1 = &PTR_FUN_110c5cb10;
  param_1[2] = &PTR_FUN_110bb3b30;
  param_1[5] = &PTR_DAT_110bb3b60;
  param_1[0x3b] = &PTR_DAT_110c5cbe0;
  func_0x00010a1f9d14(param_1 + 0x13);
  *param_1 = &PTR_DAT_110c60a00;
  param_1[2] = &PTR_DAT_110c60a88;
  param_1[5] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + 0xb);
  puVar5 = (undefined8 *)param_1[0xc];
  for (puVar4 = (undefined8 *)*ppuVar3; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar4,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar1 = param_1 + 10;
  if ((*plVar1 != 0) && (*(undefined ***)(*(long *)(*plVar1 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar2 = *(long *)(param_1[0x12] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar1;
  *plVar1 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar1);
  }
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 6);
  param_1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10ac3f4ac; end: 10ac3f4bf;  */

void FUN_10ac3f4ac(void)

{
  func_0x00010ac42404();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3f4c0; end: 10ac3f4c7;  */

undefined8 * FUN_10ac3f4c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = param_1 + -2;
  *puVar1 = &PTR_FUN_110c586e0;
  *param_1 = &PTR_FUN_110c587b0;
  param_1[3] = &PTR_FUN_110c587e0;
  param_1[0x39] = &PTR_FUN_110c58868;
  if (param_1[0x36] != 0) {
    param_1[0x37] = param_1[0x36];
    __ZdlPv();
  }
  if (param_1[0x33] != 0) {
    param_1[0x34] = param_1[0x33];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x15f) < '\0') {
    __ZdlPv(param_1[0x29]);
  }
  FUN_10a0cfe2c(param_1 + 0x27);
  plVar2 = (long *)param_1[0x26];
  param_1[0x26] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (param_1[0x23] != 0) {
    param_1[0x24] = param_1[0x23];
    __ZdlPv();
  }
  if (param_1[0x20] != 0) {
    param_1[0x21] = param_1[0x20];
    __ZdlPv();
  }
  *puVar1 = &PTR_FUN_110c5c878;
  *param_1 = &PTR_FUN_110c68030;
  param_1[3] = &PTR_DAT_110c68060;
  param_1[0x39] = &PTR_FUN_110c5c978;
  FUN_10a0cfe2c(param_1 + 0x19);
  func_0x00010a1980a8(param_1 + 0x16);
  *puVar1 = &PTR_FUN_110c5cb10;
  *param_1 = &PTR_FUN_110bb3b30;
  param_1[3] = &PTR_DAT_110bb3b60;
  param_1[0x39] = &PTR_DAT_110c5cbe0;
  func_0x00010a1f9d14(param_1 + 0x11);
  *puVar1 = &PTR_DAT_110c60a00;
  *param_1 = &PTR_DAT_110c60a88;
  param_1[3] = &PTR_DAT_110c60ab8;
  ppuVar4 = (undefined **)(param_1 + 9);
  puVar6 = (undefined8 *)param_1[10];
  for (puVar5 = (undefined8 *)*ppuVar4; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar4);
  plVar2 = param_1 + 8;
  if ((*plVar2 != 0) && (*(undefined ***)(*(long *)(*plVar2 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 1);
  if ((param_1[0x10] != 0) && (lVar3 = *(long *)(param_1[0x10] + 0x828), lVar3 != 0)) {
    FUN_10a1dfb2c(lVar3,puVar1);
  }
  if (*(char *)((long)param_1 + 0x7f) < '\0') {
    __ZdlPv(param_1[0xd]);
  }
  appuStack_180[0] = ppuVar4;
  FUN_10ac78cf4(appuStack_180);
  lVar3 = *plVar2;
  *plVar2 = 0;
  if (lVar3 != 0) {
    FUN_10ac7d690(plVar2);
  }
  if (param_1[7] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[3] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 4);
  *param_1 = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 1);
  return puVar1;
}



/* Entry: 10ac3f4c8; end: 10ac3f4df;  */

void FUN_10ac3f4c8(long param_1)

{
  func_0x00010ac42404(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3f4e0; end: 10ac3f4e7;  */

undefined8 * FUN_10ac3f4e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = param_1 + -5;
  *puVar1 = &PTR_FUN_110c586e0;
  param_1[-3] = &PTR_FUN_110c587b0;
  *param_1 = &PTR_FUN_110c587e0;
  param_1[0x36] = &PTR_FUN_110c58868;
  if (param_1[0x33] != 0) {
    param_1[0x34] = param_1[0x33];
    __ZdlPv();
  }
  if (param_1[0x30] != 0) {
    param_1[0x31] = param_1[0x30];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x147) < '\0') {
    __ZdlPv(param_1[0x26]);
  }
  FUN_10a0cfe2c(param_1 + 0x24);
  plVar2 = (long *)param_1[0x23];
  param_1[0x23] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (param_1[0x20] != 0) {
    param_1[0x21] = param_1[0x20];
    __ZdlPv();
  }
  if (param_1[0x1d] != 0) {
    param_1[0x1e] = param_1[0x1d];
    __ZdlPv();
  }
  *puVar1 = &PTR_FUN_110c5c878;
  param_1[-3] = &PTR_FUN_110c68030;
  *param_1 = &PTR_DAT_110c68060;
  param_1[0x36] = &PTR_FUN_110c5c978;
  FUN_10a0cfe2c(param_1 + 0x16);
  func_0x00010a1980a8(param_1 + 0x13);
  *puVar1 = &PTR_FUN_110c5cb10;
  param_1[-3] = &PTR_FUN_110bb3b30;
  *param_1 = &PTR_DAT_110bb3b60;
  param_1[0x36] = &PTR_DAT_110c5cbe0;
  func_0x00010a1f9d14(param_1 + 0xe);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-3] = &PTR_DAT_110c60a88;
  *param_1 = &PTR_DAT_110c60ab8;
  ppuVar4 = (undefined **)(param_1 + 6);
  puVar6 = (undefined8 *)param_1[7];
  for (puVar5 = (undefined8 *)*ppuVar4; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar4);
  plVar2 = param_1 + 5;
  if ((*plVar2 != 0) && (*(undefined ***)(*(long *)(*plVar2 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -2);
  if ((param_1[0xd] != 0) && (lVar3 = *(long *)(param_1[0xd] + 0x828), lVar3 != 0)) {
    FUN_10a1dfb2c(lVar3,puVar1);
  }
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    __ZdlPv(param_1[10]);
  }
  appuStack_180[0] = ppuVar4;
  FUN_10ac78cf4(appuStack_180);
  lVar3 = *plVar2;
  *plVar2 = 0;
  if (lVar3 != 0) {
    FUN_10ac7d690(plVar2);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  param_1[-3] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -2);
  return puVar1;
}



/* Entry: 10ac3f4e8; end: 10ac3f4ff;  */

void FUN_10ac3f4e8(long param_1)

{
  func_0x00010ac42404(param_1 + -0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3f500; end: 10ac3f50f;  */

undefined8 * FUN_10ac3f500(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_FUN_110c586e0;
  puVar1[2] = &PTR_FUN_110c587b0;
  puVar1[5] = &PTR_FUN_110c587e0;
  puVar1[0x3b] = &PTR_FUN_110c58868;
  if (puVar1[0x38] != 0) {
    puVar1[0x39] = puVar1[0x38];
    __ZdlPv();
  }
  if (puVar1[0x35] != 0) {
    puVar1[0x36] = puVar1[0x35];
    __ZdlPv();
  }
  if (*(char *)((long)puVar1 + 0x16f) < '\0') {
    __ZdlPv(puVar1[0x2b]);
  }
  FUN_10a0cfe2c(puVar1 + 0x29);
  plVar2 = (long *)puVar1[0x28];
  puVar1[0x28] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (puVar1[0x25] != 0) {
    puVar1[0x26] = puVar1[0x25];
    __ZdlPv();
  }
  if (puVar1[0x22] != 0) {
    puVar1[0x23] = puVar1[0x22];
    __ZdlPv();
  }
  *puVar1 = &PTR_FUN_110c5c878;
  puVar1[2] = &PTR_FUN_110c68030;
  puVar1[5] = &PTR_DAT_110c68060;
  puVar1[0x3b] = &PTR_FUN_110c5c978;
  FUN_10a0cfe2c(puVar1 + 0x1b);
  func_0x00010a1980a8(puVar1 + 0x18);
  *puVar1 = &PTR_FUN_110c5cb10;
  puVar1[2] = &PTR_FUN_110bb3b30;
  puVar1[5] = &PTR_DAT_110bb3b60;
  puVar1[0x3b] = &PTR_DAT_110c5cbe0;
  func_0x00010a1f9d14(puVar1 + 0x13);
  *puVar1 = &PTR_DAT_110c60a00;
  puVar1[2] = &PTR_DAT_110c60a88;
  puVar1[5] = &PTR_DAT_110c60ab8;
  ppuVar4 = (undefined **)(puVar1 + 0xb);
  puVar6 = (undefined8 *)puVar1[0xc];
  for (puVar5 = (undefined8 *)*ppuVar4; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar4);
  plVar2 = puVar1 + 10;
  if ((*plVar2 != 0) && (*(undefined ***)(*(long *)(*plVar2 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(puVar1 + 3);
  if ((puVar1[0x12] != 0) && (lVar3 = *(long *)(puVar1[0x12] + 0x828), lVar3 != 0)) {
    FUN_10a1dfb2c(lVar3,puVar1);
  }
  if (*(char *)((long)puVar1 + 0x8f) < '\0') {
    __ZdlPv(puVar1[0xf]);
  }
  appuStack_180[0] = ppuVar4;
  FUN_10ac78cf4(appuStack_180);
  lVar3 = *plVar2;
  *plVar2 = 0;
  if (lVar3 != 0) {
    FUN_10ac7d690(plVar2);
  }
  if (puVar1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puVar1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(puVar1 + 6);
  puVar1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(puVar1 + 3);
  return puVar1;
}



/* Entry: 10ac3f510; end: 10ac3f53f;  */

void FUN_10ac3f510(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  func_0x00010ac42404((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10ac3f540; end: 10ac3f543;  */

void FUN_10ac3f540(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c58a58;
  param_1[2] = &PTR_FUN_110c58b40;
  param_1[5] = &PTR_FUN_110c58b70;
  param_1[0x53] = &PTR_FUN_110c58c48;
  param_1[0x1d] = &PTR_FUN_110c58bd0;
  FUN_10a3a75a8(param_1 + 0x50);
  func_0x00010a05248c(param_1 + 0x4e);
  FUN_10a6210e4(param_1 + 0x4c);
  FUN_10a0cfe2c(param_1 + 0x49);
  FUN_10a0cfe2c(param_1 + 0x47);
  FUN_10a0e3194(param_1 + 0x44);
  FUN_10a3786c8(param_1 + 0x41);
  puStack_28 = param_1 + 0x3e;
  FUN_10a7fe6e0(&puStack_28);
  func_0x00010a7f0e54(param_1 + 0x3d,0);
  FUN_10ac41480(param_1 + 0x26);
  func_0x00010a915fe0(param_1 + 0x22);
  param_1[0x1d] = &PTR_DAT_110c5d000;
  param_1[0x53] = &PTR_FUN_110c5d078;
  func_0x00010a004e5c(param_1 + 0x20);
  func_0x00010a004e04(param_1 + 0x1e);
  *param_1 = &PTR_FUN_110c5cc48;
  param_1[2] = &PTR_FUN_110c68030;
  param_1[5] = &PTR_DAT_110c68060;
  param_1[0x53] = &PTR_FUN_110c5cd48;
  FUN_10a0cfe2c(param_1 + 0x1b);
  func_0x00010a1980a8(param_1 + 0x18);
  *param_1 = &PTR_FUN_110c5cee0;
  param_1[2] = &PTR_FUN_110bb3b30;
  param_1[5] = &PTR_DAT_110bb3b60;
  param_1[0x53] = &PTR_DAT_110c5cfb0;
  func_0x00010a1f9d14(param_1 + 0x13);
  FUN_10ac63308(param_1);
  return;
}



/* Entry: 10ac3f544; end: 10ac3f5a7;  */

void FUN_10ac3f544(void)

{
  func_0x00010ac42520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3f5a8; end: 10ac3f5af;  */

void FUN_10ac3f5a8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  puVar1 = param_1 + -2;
  *puVar1 = &PTR_FUN_110c58a58;
  *param_1 = &PTR_FUN_110c58b40;
  param_1[3] = &PTR_FUN_110c58b70;
  param_1[0x51] = &PTR_FUN_110c58c48;
  param_1[0x1b] = &PTR_FUN_110c58bd0;
  FUN_10a3a75a8(param_1 + 0x4e);
  func_0x00010a05248c(param_1 + 0x4c);
  FUN_10a6210e4(param_1 + 0x4a);
  FUN_10a0cfe2c(param_1 + 0x47);
  FUN_10a0cfe2c(param_1 + 0x45);
  FUN_10a0e3194(param_1 + 0x42);
  FUN_10a3786c8(param_1 + 0x3f);
  puStack_28 = param_1 + 0x3c;
  FUN_10a7fe6e0(&puStack_28);
  func_0x00010a7f0e54(param_1 + 0x3b,0);
  FUN_10ac41480(param_1 + 0x24);
  func_0x00010a915fe0(param_1 + 0x20);
  param_1[0x1b] = &PTR_DAT_110c5d000;
  param_1[0x51] = &PTR_FUN_110c5d078;
  func_0x00010a004e5c(param_1 + 0x1e);
  func_0x00010a004e04(param_1 + 0x1c);
  *puVar1 = &PTR_FUN_110c5cc48;
  *param_1 = &PTR_FUN_110c68030;
  param_1[3] = &PTR_DAT_110c68060;
  param_1[0x51] = &PTR_FUN_110c5cd48;
  FUN_10a0cfe2c(param_1 + 0x19);
  func_0x00010a1980a8(param_1 + 0x16);
  *puVar1 = &PTR_FUN_110c5cee0;
  *param_1 = &PTR_FUN_110bb3b30;
  param_1[3] = &PTR_DAT_110bb3b60;
  param_1[0x51] = &PTR_DAT_110c5cfb0;
  func_0x00010a1f9d14(param_1 + 0x11);
  FUN_10ac63308(puVar1);
  return;
}



/* Entry: 10ac3f5b0; end: 10ac3f5c7;  */

void FUN_10ac3f5b0(long param_1)

{
  func_0x00010ac42520(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3f5c8; end: 10ac3f5cf;  */

void FUN_10ac3f5c8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  puVar1 = param_1 + -5;
  *puVar1 = &PTR_FUN_110c58a58;
  param_1[-3] = &PTR_FUN_110c58b40;
  *param_1 = &PTR_FUN_110c58b70;
  param_1[0x4e] = &PTR_FUN_110c58c48;
  param_1[0x18] = &PTR_FUN_110c58bd0;
  FUN_10a3a75a8(param_1 + 0x4b);
  func_0x00010a05248c(param_1 + 0x49);
  FUN_10a6210e4(param_1 + 0x47);
  FUN_10a0cfe2c(param_1 + 0x44);
  FUN_10a0cfe2c(param_1 + 0x42);
  FUN_10a0e3194(param_1 + 0x3f);
  FUN_10a3786c8(param_1 + 0x3c);
  puStack_28 = param_1 + 0x39;
  FUN_10a7fe6e0(&puStack_28);
  func_0x00010a7f0e54(param_1 + 0x38,0);
  FUN_10ac41480(param_1 + 0x21);
  func_0x00010a915fe0(param_1 + 0x1d);
  param_1[0x18] = &PTR_DAT_110c5d000;
  param_1[0x4e] = &PTR_FUN_110c5d078;
  func_0x00010a004e5c(param_1 + 0x1b);
  func_0x00010a004e04(param_1 + 0x19);
  *puVar1 = &PTR_FUN_110c5cc48;
  param_1[-3] = &PTR_FUN_110c68030;
  *param_1 = &PTR_DAT_110c68060;
  param_1[0x4e] = &PTR_FUN_110c5cd48;
  FUN_10a0cfe2c(param_1 + 0x16);
  func_0x00010a1980a8(param_1 + 0x13);
  *puVar1 = &PTR_FUN_110c5cee0;
  param_1[-3] = &PTR_FUN_110bb3b30;
  *param_1 = &PTR_DAT_110bb3b60;
  param_1[0x4e] = &PTR_DAT_110c5cfb0;
  func_0x00010a1f9d14(param_1 + 0xe);
  FUN_10ac63308(puVar1);
  return;
}



/* Entry: 10ac3f5d0; end: 10ac3f5e7;  */

void FUN_10ac3f5d0(long param_1)

{
  func_0x00010ac42520(param_1 + -0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3f5e8; end: 10ac3f5ef;  */

void FUN_10ac3f5e8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  puVar1 = param_1 + -0x1d;
  *puVar1 = &PTR_FUN_110c58a58;
  param_1[-0x1b] = &PTR_FUN_110c58b40;
  param_1[-0x18] = &PTR_FUN_110c58b70;
  param_1[0x36] = &PTR_FUN_110c58c48;
  *param_1 = &PTR_FUN_110c58bd0;
  FUN_10a3a75a8(param_1 + 0x33);
  func_0x00010a05248c(param_1 + 0x31);
  FUN_10a6210e4(param_1 + 0x2f);
  FUN_10a0cfe2c(param_1 + 0x2c);
  FUN_10a0cfe2c(param_1 + 0x2a);
  FUN_10a0e3194(param_1 + 0x27);
  FUN_10a3786c8(param_1 + 0x24);
  puStack_28 = param_1 + 0x21;
  FUN_10a7fe6e0(&puStack_28);
  func_0x00010a7f0e54(param_1 + 0x20,0);
  FUN_10ac41480(param_1 + 9);
  func_0x00010a915fe0(param_1 + 5);
  *param_1 = &PTR_DAT_110c5d000;
  param_1[0x36] = &PTR_FUN_110c5d078;
  func_0x00010a004e5c(param_1 + 3);
  func_0x00010a004e04(param_1 + 1);
  *puVar1 = &PTR_FUN_110c5cc48;
  param_1[-0x1b] = &PTR_FUN_110c68030;
  param_1[-0x18] = &PTR_DAT_110c68060;
  param_1[0x36] = &PTR_FUN_110c5cd48;
  FUN_10a0cfe2c(param_1 + -2);
  func_0x00010a1980a8(param_1 + -5);
  *puVar1 = &PTR_FUN_110c5cee0;
  param_1[-0x1b] = &PTR_FUN_110bb3b30;
  param_1[-0x18] = &PTR_DAT_110bb3b60;
  param_1[0x36] = &PTR_DAT_110c5cfb0;
  func_0x00010a1f9d14(param_1 + -10);
  FUN_10ac63308(puVar1);
  return;
}



/* Entry: 10ac3f5f0; end: 10ac3f657;  */

void FUN_10ac3f5f0(long param_1)

{
  func_0x00010ac42520(param_1 + -0xe8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3f658; end: 10ac3f667;  */

void FUN_10ac3f658(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_FUN_110c58a58;
  puVar1[2] = &PTR_FUN_110c58b40;
  puVar1[5] = &PTR_FUN_110c58b70;
  puVar1[0x53] = &PTR_FUN_110c58c48;
  puVar1[0x1d] = &PTR_FUN_110c58bd0;
  FUN_10a3a75a8(puVar1 + 0x50);
  func_0x00010a05248c(puVar1 + 0x4e);
  FUN_10a6210e4(puVar1 + 0x4c);
  FUN_10a0cfe2c(puVar1 + 0x49);
  FUN_10a0cfe2c(puVar1 + 0x47);
  FUN_10a0e3194(puVar1 + 0x44);
  FUN_10a3786c8(puVar1 + 0x41);
  puStack_28 = puVar1 + 0x3e;
  FUN_10a7fe6e0(&puStack_28);
  func_0x00010a7f0e54(puVar1 + 0x3d,0);
  FUN_10ac41480(puVar1 + 0x26);
  func_0x00010a915fe0(puVar1 + 0x22);
  puVar1[0x1d] = &PTR_DAT_110c5d000;
  puVar1[0x53] = &PTR_FUN_110c5d078;
  func_0x00010a004e5c(puVar1 + 0x20);
  func_0x00010a004e04(puVar1 + 0x1e);
  *puVar1 = &PTR_FUN_110c5cc48;
  puVar1[2] = &PTR_FUN_110c68030;
  puVar1[5] = &PTR_DAT_110c68060;
  puVar1[0x53] = &PTR_FUN_110c5cd48;
  FUN_10a0cfe2c(puVar1 + 0x1b);
  func_0x00010a1980a8(puVar1 + 0x18);
  *puVar1 = &PTR_FUN_110c5cee0;
  puVar1[2] = &PTR_FUN_110bb3b30;
  puVar1[5] = &PTR_DAT_110bb3b60;
  puVar1[0x53] = &PTR_DAT_110c5cfb0;
  func_0x00010a1f9d14(puVar1 + 0x13);
  FUN_10ac63308(puVar1);
  return;
}



/* Entry: 10ac3f668; end: 10ac3f697;  */

void FUN_10ac3f668(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  func_0x00010ac42520((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10ac3f698; end: 10ac3f69b;  */

undefined8 * FUN_10ac3f698(undefined8 *param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  *param_1 = &PTR_FUN_110c58da0;
  param_1[2] = &PTR_FUN_110c58ee0;
  param_1[5] = &PTR_FUN_110c58f10;
  param_1[0xb7] = &PTR_DAT_110c59030;
  param_1[0x15] = &PTR_FUN_110c58f68;
  param_1[0x51] = &PTR_FUN_110c58f90;
  param_1[0x56] = &PTR_FUN_110c58fd8;
  func_0x00010a05248c(param_1 + 0xb5);
  FUN_10a05b1b0(param_1 + 0xb3);
  func_0x00010ac54be0(param_1 + 0xb1);
  if (param_1[0xae] != 0) {
    param_1[0xaf] = param_1[0xae];
    __ZdlPv();
  }
  FUN_10ac3b3c8(param_1 + 0x56);
  param_1[0x51] = &PTR_DAT_110c5d3d0;
  param_1[0xb7] = &PTR_FUN_110c5d448;
  func_0x00010a004e5c(param_1 + 0x54);
  func_0x00010a004e04(param_1 + 0x52);
  *param_1 = &PTR_FUN_110c5d100;
  param_1[2] = &PTR_FUN_110bb3968;
  param_1[5] = &PTR_DAT_110bb3998;
  param_1[0xb7] = &PTR_DAT_110c5d260;
  param_1[0x15] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x15);
  *param_1 = &PTR_DAT_110c5d2b0;
  param_1[2] = &PTR_FUN_110b9f848;
  param_1[5] = &PTR_DAT_110b9f878;
  param_1[0xb7] = &PTR_DAT_110c5d380;
  FUN_10a042dcc(param_1 + 0x13);
  *param_1 = &PTR_DAT_110c60a00;
  param_1[2] = &PTR_DAT_110c60a88;
  param_1[5] = &PTR_DAT_110c60ab8;
  ppuVar2 = (undefined **)(param_1 + 0xb);
  puVar5 = (undefined8 *)param_1[0xc];
  for (puVar4 = (undefined8 *)*ppuVar2; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar4,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar2);
  plVar3 = param_1 + 10;
  if ((*plVar3 != 0) && (*(undefined ***)(*(long *)(*plVar3 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar1 = *(long *)(param_1[0x12] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar2;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar3;
  *plVar3 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar3);
  }
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 6);
  param_1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10ac3f69c; end: 10ac3f6af;  */

void FUN_10ac3f69c(void)

{
  func_0x00010ac42668();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3f6b0; end: 10ac3f6db;  */

long FUN_10ac3f6b0(long param_1)

{
  return param_1 + 0xa8;
}



/* Entry: 10ac3f6dc; end: 10ac3f6f3;  */

void FUN_10ac3f6dc(long param_1)

{
  func_0x00010ac42668(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3f6f4; end: 10ac3f6fb;  */

undefined8 * FUN_10ac3f6f4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = param_1 + -5;
  *puVar1 = &PTR_FUN_110c58da0;
  param_1[-3] = &PTR_FUN_110c58ee0;
  *param_1 = &PTR_FUN_110c58f10;
  param_1[0xb2] = &PTR_DAT_110c59030;
  param_1[0x10] = &PTR_FUN_110c58f68;
  param_1[0x4c] = &PTR_FUN_110c58f90;
  param_1[0x51] = &PTR_FUN_110c58fd8;
  func_0x00010a05248c(param_1 + 0xb0);
  FUN_10a05b1b0(param_1 + 0xae);
  func_0x00010ac54be0(param_1 + 0xac);
  if (param_1[0xa9] != 0) {
    param_1[0xaa] = param_1[0xa9];
    __ZdlPv();
  }
  FUN_10ac3b3c8(param_1 + 0x51);
  param_1[0x4c] = &PTR_DAT_110c5d3d0;
  param_1[0xb2] = &PTR_FUN_110c5d448;
  func_0x00010a004e5c(param_1 + 0x4f);
  func_0x00010a004e04(param_1 + 0x4d);
  *puVar1 = &PTR_FUN_110c5d100;
  param_1[-3] = &PTR_FUN_110bb3968;
  *param_1 = &PTR_DAT_110bb3998;
  param_1[0xb2] = &PTR_DAT_110c5d260;
  param_1[0x10] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x48);
  func_0x00010a042c64(param_1 + 0x43);
  func_0x00010a0523dc(param_1 + 0x40);
  if (*(char *)(param_1 + 0x37) == '\x01') {
    func_0x00010a042d30(param_1 + 0x35);
  }
  param_1[0x10] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x10);
  *puVar1 = &PTR_DAT_110c5d2b0;
  param_1[-3] = &PTR_FUN_110b9f848;
  *param_1 = &PTR_DAT_110b9f878;
  param_1[0xb2] = &PTR_DAT_110c5d380;
  FUN_10a042dcc(param_1 + 0xe);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-3] = &PTR_DAT_110c60a88;
  *param_1 = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + 6);
  puVar6 = (undefined8 *)param_1[7];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + 5;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -2);
  if ((param_1[0xd] != 0) && (lVar2 = *(long *)(param_1[0xd] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    __ZdlPv(param_1[10]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  param_1[-3] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -2);
  return puVar1;
}



/* Entry: 10ac3f6fc; end: 10ac3f713;  */

void FUN_10ac3f6fc(long param_1)

{
  func_0x00010ac42668(param_1 + -0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3f714; end: 10ac3f71b;  */

undefined8 * FUN_10ac3f714(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = param_1 + -0x15;
  *puVar1 = &PTR_FUN_110c58da0;
  param_1[-0x13] = &PTR_FUN_110c58ee0;
  param_1[-0x10] = &PTR_FUN_110c58f10;
  param_1[0xa2] = &PTR_DAT_110c59030;
  *param_1 = &PTR_FUN_110c58f68;
  param_1[0x3c] = &PTR_FUN_110c58f90;
  param_1[0x41] = &PTR_FUN_110c58fd8;
  func_0x00010a05248c(param_1 + 0xa0);
  FUN_10a05b1b0(param_1 + 0x9e);
  func_0x00010ac54be0(param_1 + 0x9c);
  if (param_1[0x99] != 0) {
    param_1[0x9a] = param_1[0x99];
    __ZdlPv();
  }
  FUN_10ac3b3c8(param_1 + 0x41);
  param_1[0x3c] = &PTR_DAT_110c5d3d0;
  param_1[0xa2] = &PTR_FUN_110c5d448;
  func_0x00010a004e5c(param_1 + 0x3f);
  func_0x00010a004e04(param_1 + 0x3d);
  *puVar1 = &PTR_FUN_110c5d100;
  param_1[-0x13] = &PTR_FUN_110bb3968;
  param_1[-0x10] = &PTR_DAT_110bb3998;
  param_1[0xa2] = &PTR_DAT_110c5d260;
  *param_1 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x38);
  func_0x00010a042c64(param_1 + 0x33);
  func_0x00010a0523dc(param_1 + 0x30);
  if (*(char *)(param_1 + 0x27) == '\x01') {
    func_0x00010a042d30(param_1 + 0x25);
  }
  *param_1 = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1);
  *puVar1 = &PTR_DAT_110c5d2b0;
  param_1[-0x13] = &PTR_FUN_110b9f848;
  param_1[-0x10] = &PTR_DAT_110b9f878;
  param_1[0xa2] = &PTR_DAT_110c5d380;
  FUN_10a042dcc(param_1 + -2);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-0x13] = &PTR_DAT_110c60a88;
  param_1[-0x10] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + -10);
  puVar6 = (undefined8 *)param_1[-9];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + -0xb;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x12);
  if ((param_1[-3] != 0) && (lVar2 = *(long *)(param_1[-3] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)param_1 + -0x19) < '\0') {
    __ZdlPv(param_1[-6]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[-0xc] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x10] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0xf);
  param_1[-0x13] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x12);
  return puVar1;
}



/* Entry: 10ac3f71c; end: 10ac3f733;  */

void FUN_10ac3f71c(long param_1)

{
  func_0x00010ac42668(param_1 + -0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3f734; end: 10ac3f73b;  */

undefined8 * FUN_10ac3f734(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = param_1 + -0x51;
  *puVar1 = &PTR_FUN_110c58da0;
  param_1[-0x4f] = &PTR_FUN_110c58ee0;
  param_1[-0x4c] = &PTR_FUN_110c58f10;
  param_1[0x66] = &PTR_DAT_110c59030;
  param_1[-0x3c] = &PTR_FUN_110c58f68;
  *param_1 = &PTR_FUN_110c58f90;
  param_1[5] = &PTR_FUN_110c58fd8;
  func_0x00010a05248c(param_1 + 100);
  FUN_10a05b1b0(param_1 + 0x62);
  func_0x00010ac54be0(param_1 + 0x60);
  if (param_1[0x5d] != 0) {
    param_1[0x5e] = param_1[0x5d];
    __ZdlPv();
  }
  FUN_10ac3b3c8(param_1 + 5);
  *param_1 = &PTR_DAT_110c5d3d0;
  param_1[0x66] = &PTR_FUN_110c5d448;
  func_0x00010a004e5c(param_1 + 3);
  func_0x00010a004e04(param_1 + 1);
  *puVar1 = &PTR_FUN_110c5d100;
  param_1[-0x4f] = &PTR_FUN_110bb3968;
  param_1[-0x4c] = &PTR_DAT_110bb3998;
  param_1[0x66] = &PTR_DAT_110c5d260;
  param_1[-0x3c] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + -4);
  func_0x00010a042c64(param_1 + -9);
  func_0x00010a0523dc(param_1 + -0xc);
  if (*(char *)(param_1 + -0x15) == '\x01') {
    func_0x00010a042d30(param_1 + -0x17);
  }
  param_1[-0x3c] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + -0x3c);
  *puVar1 = &PTR_DAT_110c5d2b0;
  param_1[-0x4f] = &PTR_FUN_110b9f848;
  param_1[-0x4c] = &PTR_DAT_110b9f878;
  param_1[0x66] = &PTR_DAT_110c5d380;
  FUN_10a042dcc(param_1 + -0x3e);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-0x4f] = &PTR_DAT_110c60a88;
  param_1[-0x4c] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + -0x46);
  puVar6 = (undefined8 *)param_1[-0x45];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + -0x47;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x4e);
  if ((param_1[-0x3f] != 0) && (lVar2 = *(long *)(param_1[-0x3f] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)param_1 + -0x1f9) < '\0') {
    __ZdlPv(param_1[-0x42]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[-0x48] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x4c] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x4b);
  param_1[-0x4f] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x4e);
  return puVar1;
}



/* Entry: 10ac3f73c; end: 10ac3f753;  */

void FUN_10ac3f73c(long param_1)

{
  func_0x00010ac42668(param_1 + -0x288);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3f754; end: 10ac3f75b;  */

undefined8 * FUN_10ac3f754(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = param_1 + -0x56;
  *puVar1 = &PTR_FUN_110c58da0;
  param_1[-0x54] = &PTR_FUN_110c58ee0;
  param_1[-0x51] = &PTR_FUN_110c58f10;
  param_1[0x61] = &PTR_DAT_110c59030;
  param_1[-0x41] = &PTR_FUN_110c58f68;
  param_1[-5] = &PTR_FUN_110c58f90;
  *param_1 = &PTR_FUN_110c58fd8;
  func_0x00010a05248c(param_1 + 0x5f);
  FUN_10a05b1b0(param_1 + 0x5d);
  func_0x00010ac54be0(param_1 + 0x5b);
  if (param_1[0x58] != 0) {
    param_1[0x59] = param_1[0x58];
    __ZdlPv();
  }
  FUN_10ac3b3c8(param_1);
  param_1[-5] = &PTR_DAT_110c5d3d0;
  param_1[0x61] = &PTR_FUN_110c5d448;
  func_0x00010a004e5c(param_1 + -2);
  func_0x00010a004e04(param_1 + -4);
  *puVar1 = &PTR_FUN_110c5d100;
  param_1[-0x54] = &PTR_FUN_110bb3968;
  param_1[-0x51] = &PTR_DAT_110bb3998;
  param_1[0x61] = &PTR_DAT_110c5d260;
  param_1[-0x41] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + -9);
  func_0x00010a042c64(param_1 + -0xe);
  func_0x00010a0523dc(param_1 + -0x11);
  if (*(char *)(param_1 + -0x1a) == '\x01') {
    func_0x00010a042d30(param_1 + -0x1c);
  }
  param_1[-0x41] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + -0x41);
  *puVar1 = &PTR_DAT_110c5d2b0;
  param_1[-0x54] = &PTR_FUN_110b9f848;
  param_1[-0x51] = &PTR_DAT_110b9f878;
  param_1[0x61] = &PTR_DAT_110c5d380;
  FUN_10a042dcc(param_1 + -0x43);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-0x54] = &PTR_DAT_110c60a88;
  param_1[-0x51] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + -0x4b);
  puVar6 = (undefined8 *)param_1[-0x4a];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + -0x4c;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x53);
  if ((param_1[-0x44] != 0) && (lVar2 = *(long *)(param_1[-0x44] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)param_1 + -0x221) < '\0') {
    __ZdlPv(param_1[-0x47]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[-0x4d] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x51] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x50);
  param_1[-0x54] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x53);
  return puVar1;
}



/* Entry: 10ac3f75c; end: 10ac3f773;  */

void FUN_10ac3f75c(long param_1)

{
  func_0x00010ac42668(param_1 + -0x2b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3f774; end: 10ac3f78b;  */

long FUN_10ac3f774(long param_1)

{
  return param_1 + 0x238;
}



/* Entry: 10ac3f78c; end: 10ac3f7ff;  */

void FUN_10ac3f78c(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  func_0x00010ac42668((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10ac3f800; end: 10ac3f867;  */

void FUN_10ac3f800(long *param_1)

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
        lVar2 = lVar2 + -0x38;
        func_0x00010ac3fd74(lVar2);
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



/* Entry: 10ac3f868; end: 10ac3fb5b;  */

undefined8 * FUN_10ac3f868(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  uint uVar13;
  ulong uVar14;
  ulong unaff_x23;
  long *plVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  
  do {
    if (param_1 == param_2) {
      return param_3;
    }
    lVar7 = param_1[1];
    uVar17 = *param_1;
    param_3[1] = param_1[1];
    *param_3 = uVar17;
    if (lVar7 != 0) {
      plVar12 = (long *)(lVar7 + 0x10);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *plVar12 = *plVar12 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar15 = param_3 + 2;
    param_3[3] = 0;
    *plVar15 = 0;
    param_3[5] = 0;
    param_3[4] = 0;
    *(undefined4 *)(param_3 + 6) = *(undefined4 *)(param_1 + 6);
    FUN_10ac3fb5c(plVar15,param_1[3]);
    plVar12 = (long *)param_1[4];
    if (plVar12 != (long *)0x0) {
      plVar1 = param_3 + 4;
      uVar14 = param_3[3];
      do {
        uVar2 = *(uint *)(plVar12 + 2);
        uVar16 = (ulong)uVar2;
        if (uVar14 != 0) {
          uVar8 = uVar14 - 1;
          uVar13 = (uint)uVar14;
          if ((uVar14 & uVar8) == 0) {
            unaff_x23 = (ulong)(uVar13 - 1 & uVar2);
          }
          else {
            unaff_x23 = uVar16;
            if (uVar14 <= uVar16) {
              uVar5 = 0;
              if (uVar13 != 0) {
                uVar5 = uVar2 / uVar13;
              }
              unaff_x23 = (ulong)(uVar2 - uVar5 * uVar13);
            }
          }
          plVar10 = *(long **)(*plVar15 + unaff_x23 * 8);
          if (plVar10 != (long *)0x0) {
            do {
              while( true ) {
                plVar10 = (long *)*plVar10;
                if (plVar10 == (long *)0x0) goto LAB_10ac3f994;
                uVar11 = plVar10[1];
                if (uVar11 != uVar16) break;
                if (*(uint *)(plVar10 + 2) == uVar2) goto LAB_10ac3fab8;
              }
              if ((uVar14 & uVar8) == 0) {
                uVar11 = uVar11 & uVar8;
              }
              else if (uVar14 <= uVar11) {
                uVar6 = 0;
                if (uVar14 != 0) {
                  uVar6 = uVar11 / uVar14;
                }
                uVar11 = uVar11 - uVar6 * uVar14;
              }
            } while (uVar11 == unaff_x23);
          }
        }
LAB_10ac3f994:
        plVar10 = (long *)0x28;
        __Znwm();
        *plVar10 = 0;
        plVar10[1] = uVar16;
        lVar18 = plVar12[3];
        lVar7 = plVar12[2];
        *(int *)(plVar10 + 4) = (int)plVar12[4];
        plVar10[3] = lVar18;
        plVar10[2] = lVar7;
        if ((uVar14 == 0) || (*(float *)(param_3 + 6) * (float)uVar14 < (float)(param_3[5] + 1))) {
          uVar8 = 1;
          if (2 < uVar14) {
            uVar8 = (ulong)((uVar14 & uVar14 - 1) != 0);
          }
          uVar8 = uVar8 | uVar14 << 1;
          uVar14 = (ulong)((float)(param_3[5] + 1) / *(float *)(param_3 + 6));
          if (uVar8 <= uVar14) {
            uVar8 = uVar14;
          }
          FUN_10ac3fb5c(plVar15,uVar8);
          uVar14 = param_3[3];
          if ((uVar14 & uVar14 - 1) == 0) {
            unaff_x23 = (ulong)((int)uVar14 - 1U & uVar2);
          }
          else {
            unaff_x23 = uVar16;
            if (uVar14 <= uVar16) {
              uVar8 = 0;
              if (uVar14 != 0) {
                uVar8 = uVar16 / uVar14;
              }
              unaff_x23 = uVar16 - uVar8 * uVar14;
            }
          }
        }
        lVar7 = *plVar15;
        plVar9 = *(long **)(lVar7 + unaff_x23 * 8);
        if (plVar9 == (long *)0x0) {
          *plVar10 = *plVar1;
          *plVar1 = (long)plVar10;
          *(long **)(lVar7 + unaff_x23 * 8) = plVar1;
          if (*plVar10 != 0) {
            uVar16 = *(ulong *)(*plVar10 + 8);
            if ((uVar14 & uVar14 - 1) == 0) {
              uVar16 = uVar16 & uVar14 - 1;
            }
            else if (uVar14 <= uVar16) {
              uVar8 = 0;
              if (uVar14 != 0) {
                uVar8 = uVar16 / uVar14;
              }
              uVar16 = uVar16 - uVar8 * uVar14;
            }
            plVar9 = (long *)(*plVar15 + uVar16 * 8);
            goto LAB_10ac3faa8;
          }
        }
        else {
          *plVar10 = *plVar9;
LAB_10ac3faa8:
          *plVar9 = (long)plVar10;
        }
        param_3[5] = param_3[5] + 1;
LAB_10ac3fab8:
        plVar12 = (long *)*plVar12;
      } while (plVar12 != (long *)0x0);
    }
    param_1 = param_1 + 7;
    param_3 = param_3 + 7;
  } while( true );
}



/* Entry: 10ac3fb5c; end: 10ac3fd2b;  */

long * FUN_10ac3fb5c(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar3 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar3 = param_2;
  }
  plVar9 = (long *)param_1[1];
  if (plVar9 > param_2 || param_2 == plVar9) {
    if (plVar9 <= param_2) {
      return plVar3;
    }
    plVar3 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar9 < (long *)0x3) || (((ulong)plVar9 & (long)plVar9 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar3) {
      plVar3 = (long *)(1L << (-LZCOUNT((long)plVar3 + -1) & 0x3fU));
    }
    if (param_2 <= plVar3) {
      param_2 = plVar3;
    }
    if (plVar9 <= param_2) {
      return plVar3;
    }
    if (param_2 == (long *)0x0) {
      plVar3 = (long *)*param_1;
      *param_1 = 0;
      if (plVar3 != (long *)0x0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return plVar3;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm();
    plVar3 = (long *)*param_1;
    *param_1 = lVar2;
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
    plVar9 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar9 * 8) = 0;
      plVar9 = (long *)((long)plVar9 + 1);
    } while (param_2 != plVar9);
    plVar9 = (long *)param_1[2];
    if (plVar9 != (long *)0x0) {
      plVar5 = (long *)plVar9[1];
      uVar4 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar4) == 0) {
        plVar5 = (long *)((ulong)plVar5 & uVar4);
      }
      else if (param_2 <= plVar5) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar5 / (ulong)param_2;
        }
        plVar5 = (long *)((long)plVar5 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar5 * 8) = param_1 + 2;
      plVar6 = (long *)*plVar9;
      while (plVar6 != (long *)0x0) {
        plVar8 = (long *)plVar6[1];
        if (((ulong)param_2 & uVar4) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar4);
        }
        else if (param_2 <= plVar8) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)param_2;
          }
          plVar8 = (long *)((long)plVar8 - uVar1 * (long)param_2);
        }
        plVar7 = plVar6;
        if (plVar8 != plVar5) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)plVar8 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar8 * 8) = plVar9;
            plVar5 = plVar8;
          }
          else {
            *plVar9 = *plVar6;
            *plVar6 = **(undefined8 **)(lVar2 + (long)plVar8 * 8);
            **(long **)(lVar2 + (long)plVar8 * 8) = (long)plVar6;
            plVar7 = plVar9;
          }
        }
        plVar9 = plVar7;
        plVar6 = (long *)*plVar7;
      }
    }
    return plVar3;
  }
  func_0x000109ffded8();
  plVar9 = (long *)plVar3[2];
  while (plVar9 != (long *)0x0) {
    plVar9 = (long *)*plVar9;
    __ZdlPv();
  }
  lVar2 = *plVar3;
  *plVar3 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return plVar3;
}



/* Entry: 10ac3fd2c; end: 10ac3fdab;  */

long * FUN_10ac3fd2c(long *param_1)

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



/* Entry: 10ac3fdac; end: 10ac3ff37;  */

undefined8 * FUN_10ac3fdac(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar12 = param_2[1];
  uVar11 = *param_2;
  if (param_2[1] != 0) {
    plVar10 = (long *)(param_2[1] + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar5 = param_1[1];
  param_1[1] = uVar12;
  *param_1 = uVar11;
  if (lVar5 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1 != param_2) {
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    plVar10 = (long *)param_2[4];
    lVar5 = param_1[3];
    if (lVar5 != 0) {
      lVar8 = 0;
      do {
        *(undefined8 *)(param_1[2] + lVar8 * 8) = 0;
        lVar8 = lVar8 + 1;
      } while (lVar5 != lVar8);
      plVar9 = (long *)param_1[4];
      param_1[4] = 0;
      param_1[5] = 0;
      while (plVar9 != (long *)0x0) {
        if (plVar10 == (long *)0x0) {
          do {
            plVar10 = (long *)*plVar9;
            __ZdlPv(plVar9);
            plVar9 = plVar10;
          } while (plVar10 != (long *)0x0);
          return param_1;
        }
        uVar1 = *(uint *)(plVar10 + 2);
        *(uint *)(plVar9 + 2) = uVar1;
        uVar11 = *(undefined8 *)((long)plVar10 + 0x14);
        *(undefined8 *)((long)plVar9 + 0x1c) = *(undefined8 *)((long)plVar10 + 0x1c);
        *(undefined8 *)((long)plVar9 + 0x14) = uVar11;
        lVar5 = *plVar9;
        plVar9[1] = (ulong)uVar1;
        puVar6 = param_1 + 2;
        FUN_10ac3ff38(puVar6);
        FUN_10ac40254(param_1 + 2,plVar9,puVar6);
        plVar10 = (long *)*plVar10;
        plVar9 = (long *)lVar5;
      }
    }
    for (; plVar10 != (undefined8 *)0x0; plVar10 = (long *)*plVar10) {
      puVar7 = (undefined8 *)0x28;
      __Znwm();
      *puVar7 = 0;
      uVar2 = *(undefined4 *)(plVar10 + 4);
      uVar11 = plVar10[2];
      puVar7[3] = plVar10[3];
      puVar7[2] = uVar11;
      *(undefined4 *)(puVar7 + 4) = uVar2;
      puVar7[1] = (ulong)*(uint *)(puVar7 + 2);
      puVar6 = param_1 + 2;
      FUN_10ac3ff38(puVar6,(ulong)*(uint *)(puVar7 + 2),puVar7 + 2);
      FUN_10ac40254(param_1 + 2,puVar7,puVar6);
    }
  }
  return param_1;
}



/* Entry: 10ac3ff38; end: 10ac40253;  */

long * FUN_10ac3ff38(long *param_1,long *param_2,long *param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  bool bVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  
  plVar18 = (long *)param_1[1];
  if ((plVar18 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar18)) goto LAB_10ac40140;
  uVar8 = 1;
  if ((long *)0x2 < plVar18) {
    uVar8 = (ulong)(((ulong)plVar18 & (long)plVar18 - 1U) != 0);
  }
  plVar6 = (long *)(uVar8 | (long)plVar18 << 1);
  plVar7 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar6 <= plVar7) {
    plVar6 = plVar7;
  }
  plVar7 = param_1;
  plVar10 = param_2;
  plVar15 = param_3;
  if ((long)plVar6 - 1U == 0) {
    plVar6 = (long *)0x2;
  }
  else if (((ulong)plVar6 & (long)plVar6 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar18 = (long *)param_1[1];
    plVar7 = plVar6;
  }
  if (plVar18 > plVar6 || plVar6 == plVar18) {
    if (plVar18 <= plVar6) goto LAB_10ac40140;
    plVar7 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar18 < (long *)0x3) || (((ulong)plVar18 & (long)plVar18 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar7) {
      plVar7 = (long *)(1L << (-LZCOUNT((long)plVar7 + -1) & 0x3fU));
    }
    if (plVar6 <= plVar7) {
      plVar6 = plVar7;
    }
    if (plVar18 <= plVar6) {
      plVar18 = (long *)param_1[1];
      goto LAB_10ac40140;
    }
    if (plVar6 == (long *)0x0) {
      lVar4 = *param_1;
      *param_1 = 0;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      plVar18 = (long *)0x0;
      goto LAB_10ac40140;
    }
  }
  if ((ulong)plVar6 >> 0x3d == 0) {
    lVar4 = (long)plVar6 << 3;
    __Znwm();
    lVar5 = *param_1;
    *param_1 = lVar4;
    if (lVar5 != 0) {
      __ZdlPv();
    }
    plVar18 = (long *)0x0;
    param_1[1] = (long)plVar6;
    do {
      *(undefined8 *)(*param_1 + (long)plVar18 * 8) = 0;
      plVar18 = (long *)((long)plVar18 + 1);
    } while (plVar6 != plVar18);
    plVar7 = (long *)param_1[2];
    plVar18 = plVar6;
    if (plVar7 != (long *)0x0) {
      plVar10 = (long *)plVar7[1];
      uVar8 = (long)plVar6 - 1;
      if (((ulong)plVar6 & uVar8) == 0) {
        plVar10 = (long *)((ulong)plVar10 & uVar8);
      }
      else if (plVar6 <= plVar10) {
        uVar9 = 0;
        if (plVar6 != (long *)0x0) {
          uVar9 = (ulong)plVar10 / (ulong)plVar6;
        }
        plVar10 = (long *)((long)plVar10 - uVar9 * (long)plVar6);
      }
      *(long **)(*param_1 + (long)plVar10 * 8) = param_1 + 2;
      while (plVar15 = plVar7, plVar7 = (long *)*plVar15, plVar7 != (long *)0x0) {
        plVar14 = (long *)plVar7[1];
        if (((ulong)plVar6 & uVar8) == 0) {
          plVar14 = (long *)((ulong)plVar14 & uVar8);
        }
        else if (plVar6 <= plVar14) {
          uVar9 = 0;
          if (plVar6 != (long *)0x0) {
            uVar9 = (ulong)plVar14 / (ulong)plVar6;
          }
          plVar14 = (long *)((long)plVar14 - uVar9 * (long)plVar6);
        }
        if (plVar14 != plVar10) {
          lVar4 = *param_1;
          plVar17 = plVar7;
          if (*(long *)(lVar4 + (long)plVar14 * 8) == 0) {
            *(long **)(lVar4 + (long)plVar14 * 8) = plVar15;
            plVar10 = plVar14;
          }
          else {
            do {
              plVar16 = plVar17;
              plVar17 = (long *)*plVar16;
              if (plVar17 == (long *)0x0) break;
            } while (*(int *)(plVar7 + 2) == *(int *)(plVar17 + 2));
            *plVar15 = (long)plVar17;
            *plVar16 = **(long **)(lVar4 + (long)plVar14 * 8);
            **(long **)(lVar4 + (long)plVar14 * 8) = (long)plVar7;
            plVar7 = plVar15;
          }
        }
      }
    }
LAB_10ac40140:
    uVar8 = (long)plVar18 - 1;
    if (((ulong)plVar18 & uVar8) == 0) {
      plVar6 = (long *)((long)plVar18 + 0xffffffffU & (ulong)param_2);
    }
    else {
      plVar6 = param_2;
      if (plVar18 <= param_2) {
        uVar9 = 0;
        if (plVar18 != (long *)0x0) {
          uVar9 = (ulong)param_2 / (ulong)plVar18;
        }
        plVar6 = (long *)((long)param_2 - uVar9 * (long)plVar18);
      }
    }
    plVar7 = *(long **)(*param_1 + (long)plVar6 * 8);
    if (plVar7 == (long *)0x0) {
      plVar10 = (long *)0x0;
    }
    else {
      bVar12 = false;
      bVar1 = 0;
      do {
        plVar10 = plVar7;
        plVar7 = (long *)*plVar10;
        if (plVar7 == (long *)0x0) {
          return plVar10;
        }
        plVar15 = (long *)plVar7[1];
        if (((ulong)plVar18 & uVar8) == 0) {
          plVar14 = (long *)((ulong)plVar15 & uVar8);
        }
        else {
          plVar14 = plVar15;
          if (plVar18 <= plVar15) {
            uVar9 = 0;
            if (plVar18 != (long *)0x0) {
              uVar9 = (ulong)plVar15 / (ulong)plVar18;
            }
            plVar14 = (long *)((long)plVar15 - uVar9 * (long)plVar18);
          }
        }
        if (plVar14 != plVar6) {
          return plVar10;
        }
        if (plVar15 == param_2) {
          bVar2 = *(int *)(plVar7 + 2) == (int)*param_3;
        }
        else {
          bVar2 = false;
        }
        bVar3 = bVar2 != bVar12;
        bVar2 = (bool)(bVar1 & bVar3);
        bVar12 = (bool)(bVar12 | bVar3);
        bVar1 = bVar1 | bVar3;
      } while (!bVar2);
    }
    return plVar10;
  }
  func_0x000109ffded8();
  uVar8 = plVar7[1];
  uVar9 = plVar10[1];
  uVar11 = uVar8 - 1;
  if ((uVar8 & uVar11) == 0) {
    uVar9 = uVar11 & uVar9;
    if (plVar15 != (long *)0x0) goto LAB_10ac4027c;
LAB_10ac402b8:
    plVar18 = plVar7 + 2;
    *plVar10 = *plVar18;
    *plVar18 = (long)plVar10;
    *(long **)(*plVar7 + uVar9 * 8) = plVar18;
    if (*plVar10 == 0) goto LAB_10ac40314;
    uVar13 = *(ulong *)(*plVar10 + 8);
    if ((uVar8 & uVar11) == 0) {
      uVar13 = uVar13 & uVar11;
    }
    else if (uVar8 <= uVar13) {
      uVar9 = 0;
      if (uVar8 != 0) {
        uVar9 = uVar13 / uVar8;
      }
      uVar13 = uVar13 - uVar9 * uVar8;
    }
  }
  else {
    if (uVar8 <= uVar9) {
      uVar13 = 0;
      if (uVar8 != 0) {
        uVar13 = uVar9 / uVar8;
      }
      uVar9 = uVar9 - uVar13 * uVar8;
    }
    if (plVar15 == (long *)0x0) goto LAB_10ac402b8;
LAB_10ac4027c:
    *plVar10 = *plVar15;
    *plVar15 = (long)plVar10;
    if (*plVar10 == 0) goto LAB_10ac40314;
    uVar13 = *(ulong *)(*plVar10 + 8);
    if ((uVar8 & uVar11) == 0) {
      uVar13 = uVar13 & uVar11;
    }
    else if (uVar8 <= uVar13) {
      uVar11 = 0;
      if (uVar8 != 0) {
        uVar11 = uVar13 / uVar8;
      }
      uVar13 = uVar13 - uVar11 * uVar8;
    }
    if (uVar13 == uVar9) goto LAB_10ac40314;
  }
  *(long **)(*plVar7 + uVar13 * 8) = plVar10;
LAB_10ac40314:
  plVar7[3] = plVar7[3] + 1;
  return plVar7;
}



/* Entry: 10ac40254; end: 10ac40323;  */

void FUN_10ac40254(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  
  uVar1 = param_1[1];
  uVar2 = param_2[1];
  uVar3 = uVar1 - 1;
  if ((uVar1 & uVar3) == 0) {
    uVar2 = uVar3 & uVar2;
    if (param_3 != (long *)0x0) goto LAB_10ac4027c;
LAB_10ac402b8:
    plVar5 = param_1 + 2;
    *param_2 = *plVar5;
    *plVar5 = (long)param_2;
    *(long **)(*param_1 + uVar2 * 8) = plVar5;
    if (*param_2 == 0) goto LAB_10ac40314;
    uVar4 = *(ulong *)(*param_2 + 8);
    if ((uVar1 & uVar3) == 0) {
      uVar4 = uVar4 & uVar3;
    }
    else if (uVar1 <= uVar4) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar4 / uVar1;
      }
      uVar4 = uVar4 - uVar2 * uVar1;
    }
  }
  else {
    if (uVar1 <= uVar2) {
      uVar4 = 0;
      if (uVar1 != 0) {
        uVar4 = uVar2 / uVar1;
      }
      uVar2 = uVar2 - uVar4 * uVar1;
    }
    if (param_3 == (long *)0x0) goto LAB_10ac402b8;
LAB_10ac4027c:
    *param_2 = *param_3;
    *param_3 = (long)param_2;
    if (*param_2 == 0) goto LAB_10ac40314;
    uVar4 = *(ulong *)(*param_2 + 8);
    if ((uVar1 & uVar3) == 0) {
      uVar4 = uVar4 & uVar3;
    }
    else if (uVar1 <= uVar4) {
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = uVar4 / uVar1;
      }
      uVar4 = uVar4 - uVar3 * uVar1;
    }
    if (uVar4 == uVar2) goto LAB_10ac40314;
  }
  *(long **)(*param_1 + uVar4 * 8) = param_2;
LAB_10ac40314:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10ac40324; end: 10ac40337;  */

void FUN_10ac40324(undefined8 param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  
  plVar3 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((long *)0x492492492492492 < plVar3) {
    func_0x000109ffded8();
    plVar4 = (long *)0x90;
    __Znwm();
    plVar5 = plVar4 + 1;
    *plVar5 = 0;
    *plVar4 = (long)&PTR_FUN_110b9fe30;
    lStack_70 = *param_2;
    plStack_60 = plVar4 + 3;
    plVar4[4] = param_2[1];
    *plStack_60 = lStack_70;
    plVar4[2] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    plVar4[5] = 0;
    plVar4[6] = 0;
    plVar4[7] = 0x32aaaba7;
    plVar4[9] = 0;
    plVar4[8] = 0;
    plVar4[0xb] = 0;
    plVar4[10] = 0;
    plVar4[0xd] = 0;
    plVar4[0xc] = 0;
    plVar4[0xf] = 0;
    plVar4[0xe] = 0;
    plVar4[0x11] = 0;
    plVar4[0x10] = 0;
    *plVar3 = lStack_70;
    plVar3[1] = (long)plVar4;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_68 = plVar4;
    plStack_58 = plVar4;
    func_0x00010a053e8c(plStack_60,&lStack_70);
    plVar3 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar4 = plStack_68 + 1;
      do {
        lVar6 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
    if (*plStack_60 != 0) {
      func_0x00010a053ee8(*plStack_60,&plStack_60);
    }
    plVar3 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar4 = plStack_58 + 1;
      do {
        lVar6 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
    return;
  }
  __Znwm((long)plVar3 * 0x38);
  return;
}



/* Entry: 10ac40338; end: 10ac4037f;  */

void FUN_10ac40338(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  if ((long *)0x492492492492492 < param_1) {
    func_0x000109ffded8();
    plVar3 = (long *)0x90;
    __Znwm();
    plVar4 = plVar3 + 1;
    *plVar4 = 0;
    *plVar3 = (long)&PTR_FUN_110b9fe30;
    lStack_60 = *param_2;
    plStack_50 = plVar3 + 3;
    plVar3[4] = param_2[1];
    *plStack_50 = lStack_60;
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
    *param_1 = lStack_60;
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
    plStack_58 = plVar3;
    plStack_48 = plVar3;
    func_0x00010a053e8c(plStack_50,&lStack_60);
    plVar3 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar4 = plStack_58 + 1;
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
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
    if (*plStack_50 != 0) {
      func_0x00010a053ee8(*plStack_50,&plStack_50);
    }
    plVar3 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar4 = plStack_48 + 1;
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
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
    return;
  }
  __Znwm((long)param_1 * 0x38);
  return;
}



/* Entry: 10ac40380; end: 10ac404e3;  */

void FUN_10ac40380(long *param_1,long *param_2)

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



/* Entry: 10ac404e4; end: 10ac404f3;  */

void FUN_10ac404e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c5d490;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ac404f4; end: 10ac40513;  */

void FUN_10ac404f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c5d490;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac40514; end: 10ac4054f;  */

undefined8 * FUN_10ac40514(long param_1)

{
  *(undefined ***)(param_1 + 0xf8) = &PTR____cxa_pure_virtual_110c42b70;
  if (*(long *)(param_1 + 0x100) != 0) {
    *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x100);
    __ZdlPv();
  }
  *(undefined8 *)(param_1 + 0x18) = &PTR_FUN_110c3ec18;
  *(undefined ***)(param_1 + 0x28) = &PTR_DAT_110c3ecb8;
  *(undefined ***)(param_1 + 0x50) = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0xe8);
  if (*(long *)(param_1 + 0xe0) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x98);
  if (*(long *)(param_1 + 0x90) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)(param_1 + 0x87) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x70));
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x30);
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 10ac40550; end: 10ac40553;  */

void FUN_10ac40550(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac40554; end: 10ac405fb;  */

void FUN_10ac40554(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = param_2[1];
  if ((lVar4 == 0) || (*(long *)(lVar4 + 8) == -1)) {
    if (param_1 != (long *)0x0) {
      plVar1 = param_1 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = param_1 + 2;
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
    param_2[1] = param_1;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (param_1 != (long *)0x0) {
      plVar1 = param_1 + 1;
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
        (**(code **)(*param_1 + 0x10))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(param_1);
        return;
      }
    }
  }
  return;
}



/* Entry: 10ac405fc; end: 10ac4068b;  */

void FUN_10ac405fc(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0x10;
  __Znwm();
  *param_1 = lVar2;
  param_1[1] = lVar2;
  param_1[2] = lVar2 + 0x10;
  if (param_2 != param_3) {
    lVar1 = ((param_3 - param_2) - 8U & 0xfffffffffffffff8) + 8;
    _memcpy(lVar2,param_2,lVar1);
    lVar2 = lVar2 + lVar1;
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 10ac4068c; end: 10ac40703;  */

void FUN_10ac4068c(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    func_0x00010a107af0(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 10ac40704; end: 10ac40717;  */

void FUN_10ac40704(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((undefined8 *)0x276276276276276 < puVar1) {
    func_0x000109ffded8();
    puVar2 = puVar1;
    if (puVar1 != param_2) {
      do {
        uVar4 = puVar2[1];
        uVar3 = *puVar2;
        uVar6 = puVar2[3];
        uVar5 = puVar2[2];
        uVar7 = *(undefined8 *)((long)puVar2 + 0x1c);
        *(undefined8 *)((long)param_3 + 0x24) = *(undefined8 *)((long)puVar2 + 0x24);
        *(undefined8 *)((long)param_3 + 0x1c) = uVar7;
        param_3[1] = uVar4;
        *param_3 = uVar3;
        param_3[3] = uVar6;
        param_3[2] = uVar5;
        *(undefined8 *)((long)param_3 + 0x2c) = *(undefined8 *)((long)puVar2 + 0x2c);
        uVar4 = puVar2[8];
        uVar3 = puVar2[7];
        param_3[9] = puVar2[9];
        param_3[8] = uVar4;
        param_3[7] = uVar3;
        puVar2[8] = 0;
        puVar2[9] = 0;
        puVar2[7] = 0;
        uVar4 = puVar2[0xb];
        uVar3 = puVar2[10];
        param_3[0xc] = puVar2[0xc];
        param_3[0xb] = uVar4;
        param_3[10] = uVar3;
        puVar2[0xb] = 0;
        puVar2[0xc] = 0;
        puVar2[10] = 0;
        puVar2 = puVar2 + 0xd;
        param_3 = param_3 + 0xd;
      } while (puVar2 != param_2);
      do {
        func_0x00010ac3f7bc(puVar1);
        puVar1 = puVar1 + 0xd;
      } while (puVar1 != param_2);
    }
    return;
  }
  __Znwm((long)puVar1 * 0x68);
  return;
}



/* Entry: 10ac40718; end: 10ac40843;  */

void FUN_10ac40718(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((undefined8 *)0x276276276276276 < param_1) {
    func_0x000109ffded8();
    puVar1 = param_1;
    if (param_1 != param_2) {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        uVar5 = puVar1[3];
        uVar4 = puVar1[2];
        uVar6 = *(undefined8 *)((long)puVar1 + 0x1c);
        *(undefined8 *)((long)param_3 + 0x24) = *(undefined8 *)((long)puVar1 + 0x24);
        *(undefined8 *)((long)param_3 + 0x1c) = uVar6;
        param_3[1] = uVar3;
        *param_3 = uVar2;
        param_3[3] = uVar5;
        param_3[2] = uVar4;
        *(undefined8 *)((long)param_3 + 0x2c) = *(undefined8 *)((long)puVar1 + 0x2c);
        uVar3 = puVar1[8];
        uVar2 = puVar1[7];
        param_3[9] = puVar1[9];
        param_3[8] = uVar3;
        param_3[7] = uVar2;
        puVar1[8] = 0;
        puVar1[9] = 0;
        puVar1[7] = 0;
        uVar3 = puVar1[0xb];
        uVar2 = puVar1[10];
        param_3[0xc] = puVar1[0xc];
        param_3[0xb] = uVar3;
        param_3[10] = uVar2;
        puVar1[0xb] = 0;
        puVar1[0xc] = 0;
        puVar1[10] = 0;
        puVar1 = puVar1 + 0xd;
        param_3 = param_3 + 0xd;
      } while (puVar1 != param_2);
      do {
        func_0x00010ac3f7bc(param_1);
        param_1 = param_1 + 0xd;
      } while (param_1 != param_2);
    }
    return;
  }
  __Znwm((long)param_1 * 0x68);
  return;
}



/* Entry: 10ac40844; end: 10ac408eb;  */

undefined8 * FUN_10ac40844(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = *(undefined8 *)((long)param_2 + 0x1c);
  *(undefined8 *)((long)param_1 + 0x24) = *(undefined8 *)((long)param_2 + 0x24);
  *(undefined8 *)((long)param_1 + 0x1c) = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  *(undefined8 *)((long)param_1 + 0x2c) = *(undefined8 *)((long)param_2 + 0x2c);
  if (*(char *)((long)param_2 + 0x4f) < '\0') {
    func_0x000107c3192c(param_1 + 7,param_2[7],param_2[8]);
  }
  else {
    uVar2 = param_2[8];
    uVar1 = param_2[7];
    param_1[9] = param_2[9];
    param_1[8] = uVar2;
    param_1[7] = uVar1;
  }
  if (*(char *)((long)param_2 + 0x67) < '\0') {
    func_0x000107c3192c(param_1 + 10,param_2[10],param_2[0xb]);
  }
  else {
    uVar2 = param_2[0xb];
    uVar1 = param_2[10];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar2;
    param_1[10] = uVar1;
  }
  return param_1;
}



/* Entry: 10ac408ec; end: 10ac408ff;  */

void FUN_10ac408ec(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)plVar2 >> 0x3c == 0) {
    __Znwm((long)plVar2 << 4);
    return;
  }
  func_0x000109ffded8();
  lVar3 = *param_2;
  *param_2 = 0;
  *plVar2 = lVar3;
  lVar5 = param_2[2];
  lVar4 = param_2[1];
  plVar2[2] = param_2[2];
  plVar2[1] = lVar4;
  param_2[1] = 0;
  lVar4 = param_2[3];
  plVar2[3] = lVar4;
  *(int *)(plVar2 + 4) = (int)param_2[4];
  if (lVar4 != 0) {
    uVar6 = *(ulong *)(lVar5 + 8);
    uVar7 = plVar2[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar6 = uVar7 - 1 & uVar6;
    }
    else if (uVar7 <= uVar6) {
      uVar1 = 0;
      if (uVar7 != 0) {
        uVar1 = uVar6 / uVar7;
      }
      uVar6 = uVar6 - uVar1 * uVar7;
    }
    *(long **)(lVar3 + uVar6 * 8) = plVar2 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 10ac40900; end: 10ac40933;  */

void FUN_10ac40900(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  if ((ulong)param_1 >> 0x3c == 0) {
    __Znwm((long)param_1 << 4);
    return;
  }
  func_0x000109ffded8();
  lVar2 = *param_2;
  *param_2 = 0;
  *param_1 = lVar2;
  lVar4 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long **)(lVar2 + uVar5 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 10ac40934; end: 10ac409af;  */

void FUN_10ac40934(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = *param_2;
  *param_2 = 0;
  *param_1 = lVar2;
  lVar4 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long **)(lVar2 + uVar5 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 10ac409b0; end: 10ac40a07;  */

long FUN_10ac409b0(long param_1)

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



/* Entry: 10ac40a08; end: 10ac40a17;  */

void FUN_10ac40a08(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ac40a0c);
  (*pcVar1)();
}



/* Entry: 10ac40a18; end: 10ac40a6f;  */

long FUN_10ac40a18(long param_1)

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



/* Entry: 10ac40a70; end: 10ac40ac3;  */

void FUN_10ac40a70(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110c5d718)[*(uint *)(param_1 + 0x10)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return;
}



/* Entry: 10ac40ac4; end: 10ac40b2b;  */

long FUN_10ac40ac4(undefined8 param_1,long param_2)

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



/* Entry: 10ac40b2c; end: 10ac40b5b;  */

void FUN_10ac40b2c(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x40);
  FUN_10ac40b5c();
                    /* WARNING: Could not recover jumptable at 0x00010ac40b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10ac40b5c; end: 10ac40d6f;  */

/* WARNING: Removing unreachable block (ram,0x00010ac40bf8) */
/* WARNING: Removing unreachable block (ram,0x00010ac40c6c) */

void FUN_10ac40b5c(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong *puVar3;
  long lVar4;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  bool bStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined7 uStack_38;
  undefined1 uStack_31;
  
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10ac40cdc);
    (*pcVar1)();
  }
  lVar4 = *(long *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  lVar2 = param_1;
  lStack_a8 = lVar4;
  func_0x00010ad0321c();
  func_0x000107c2b054(&uStack_a0,&UNK_10f69b9ca);
  FUN_10ad016b8(&uStack_48,lVar2,&uStack_a0);
  if (uStack_90._7_1_ < '\0') {
    __ZdlPv(uStack_a0);
  }
  puVar3 = &uStack_48;
  FUN_10ad00d7c(puVar3,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  bStack_b0 = (int)puVar3 == 0;
  if (bStack_b0) {
    uStack_100 = uStack_100 & 0xffffffffffffff00;
  }
  else {
    uStack_98 = uStack_40;
    uStack_a0 = uStack_48;
    uStack_90 = CONCAT17(uStack_31,uStack_38);
    func_0x000107c2b054(&uStack_88,&UNK_10f69b9ca);
    func_0x000107c2b054(&uStack_70,&UNK_10f69b9ca);
    uStack_f8 = uStack_98;
    uStack_100 = uStack_a0;
    uStack_f0 = uStack_90;
    uStack_e0 = uStack_80;
    uStack_e8 = uStack_88;
    uStack_d8 = uStack_78;
    uStack_c8 = uStack_68;
    uStack_d0 = uStack_70;
    uStack_c0 = uStack_60;
    uStack_b8 = 1;
  }
  bStack_b0 = !bStack_b0;
  FUN_10a754524(lVar4,&uStack_100);
  func_0x00010a1fe790(&uStack_100);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_10ac40a70(param_1);
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  lStack_a8 = 0;
  if ((lVar4 != 0) && (func_0x0001092b4274(&lStack_a8,lVar4), lStack_a8 != 0)) {
    func_0x0001092b4274(&lStack_a8);
  }
  return;
}



/* Entry: 10ac40d70; end: 10ac40e83;  */

undefined8 * FUN_10ac40d70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c5d748;
  if (param_1[0x26] != 0) {
    func_0x0001092b4274(param_1 + 0x26);
  }
  if (*(char *)(param_1 + 0x25) == '\x01') {
    FUN_10ac40a70(param_1 + 0x1f);
  }
  *param_1 = &PTR_DAT_110bb2e48;
  if (*(char *)(param_1 + 0x1e) == '\x01') {
    func_0x00010a1fe790(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10ac40e84; end: 10ac40ef7;  */

undefined1 * FUN_10ac40e84(undefined1 *param_1,long param_2)

{
  uint uVar1;
  undefined1 *puStack_38;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  FUN_10ac40a70();
  uVar1 = *(uint *)(param_2 + 0x10);
  if (uVar1 != 0xffffffff) {
    puStack_38 = param_1;
    (*(code *)(&PTR_FUN_110c5d770)[uVar1])(&puStack_38,param_2);
    *(uint *)(param_1 + 0x10) = uVar1;
  }
  return param_1;
}



/* Entry: 10ac40ef8; end: 10ac40f1f;  */

void FUN_10ac40ef8(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



/* Entry: 10ac40f20; end: 10ac41033;  */

undefined8 * FUN_10ac40f20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c5d790;
  if (param_1[0x26] != 0) {
    func_0x0001092b4274(param_1 + 0x26);
  }
  if (*(char *)(param_1 + 0x25) == '\x01') {
    FUN_10ac40a70(param_1 + 0x1f);
  }
  *param_1 = &PTR_DAT_110bb2e48;
  if (*(char *)(param_1 + 0x1e) == '\x01') {
    func_0x00010a1fe790(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10ac41034; end: 10ac41043;  */

undefined8 * FUN_10ac41034(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar4 = param_2;
  func_0x000105277f8c();
  uVar8 = puVar4[1];
  uVar7 = *puVar4;
  *puVar4 = 0;
  puVar4[1] = 0;
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



/* Entry: 10ac41044; end: 10ac410a7;  */

undefined8 * FUN_10ac41044(undefined8 *param_1,undefined8 *param_2)

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
  *param_2 = 0;
  param_2[1] = 0;
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


