/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ac76e30; end: 10ac76ff7;  */

void FUN_10ac76e30(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)(param_1 + -0x10);
  do {
    plVar1 = plVar2;
    (**(code **)(*plVar2 + 0x80))();
    if ((int)plVar1 != 2) {
      return;
    }
    plVar2 = (long *)plVar2[0x13];
  } while (plVar2 != (long *)0x0);
  return;
}



/* Entry: 10ac76ff8; end: 10ac76fff;  */

long FUN_10ac76ff8(long param_1)

{
  return param_1 + 0xa8;
}



/* Entry: 10ac77000; end: 10ac77347;  */

undefined8 * FUN_10ac77000(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar2 = param_1 + -2;
  *puVar2 = &PTR_FUN_110c65440;
  *param_1 = &PTR_FUN_110bb3968;
  param_1[3] = &PTR_DAT_110bb3998;
  param_1[0x4f] = &PTR_DAT_110c655a0;
  param_1[0x13] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4b);
  func_0x00010a042c64(param_1 + 0x46);
  func_0x00010a0523dc(param_1 + 0x43);
  if (*(char *)(param_1 + 0x3a) == '\x01') {
    func_0x00010a042d30(param_1 + 0x38);
  }
  param_1[0x13] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x13);
  param_1[-2] = &PTR_DAT_110c655f0;
  *param_1 = &PTR_FUN_110b9f848;
  param_1[3] = &PTR_DAT_110b9f878;
  param_1[0x4f] = &PTR_DAT_110c656c0;
  FUN_10a042dcc(param_1 + 0x11);
  *puVar2 = &PTR_DAT_110c60a00;
  *param_1 = &PTR_DAT_110c60a88;
  param_1[3] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + 9);
  puVar6 = (undefined8 *)param_1[10];
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
  plVar4 = param_1 + 8;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 1);
  if ((param_1[0x10] != 0) && (lVar1 = *(long *)(param_1[0x10] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,puVar2);
  }
  if (*(char *)((long)param_1 + 0x7f) < '\0') {
    __ZdlPv(param_1[0xd]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar4;
  *plVar4 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[7] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[3] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 4);
  *param_1 = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 1);
  return puVar2;
}



/* Entry: 10ac77348; end: 10ac77793;  */

undefined8 * FUN_10ac77348(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar2 = param_1 + -0x15;
  *puVar2 = &PTR_FUN_110c65440;
  param_1[-0x13] = &PTR_FUN_110bb3968;
  param_1[-0x10] = &PTR_DAT_110bb3998;
  param_1[0x3c] = &PTR_DAT_110c655a0;
  *param_1 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x38);
  func_0x00010a042c64(param_1 + 0x33);
  func_0x00010a0523dc(param_1 + 0x30);
  if (*(char *)(param_1 + 0x27) == '\x01') {
    func_0x00010a042d30(param_1 + 0x25);
  }
  *param_1 = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1);
  param_1[-0x15] = &PTR_DAT_110c655f0;
  param_1[-0x13] = &PTR_FUN_110b9f848;
  param_1[-0x10] = &PTR_DAT_110b9f878;
  param_1[0x3c] = &PTR_DAT_110c656c0;
  FUN_10a042dcc(param_1 + -2);
  *puVar2 = &PTR_DAT_110c60a00;
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
  if ((param_1[-3] != 0) && (lVar1 = *(long *)(param_1[-3] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,puVar2);
  }
  if (*(char *)((long)param_1 + -0x19) < '\0') {
    __ZdlPv(param_1[-6]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar4;
  *plVar4 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[-0xc] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x10] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0xf);
  param_1[-0x13] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x12);
  return puVar2;
}



/* Entry: 10ac77794; end: 10ac77a0b;  */

undefined8 * FUN_10ac77794(undefined8 *param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar3 = param_1 + -2;
  *puVar3 = &PTR_DAT_110c61a50;
  *param_1 = &PTR_FUN_110c61b08;
  param_1[3] = &PTR_DAT_110c61b38;
  param_1[0x201a] = &PTR_FUN_110c61bc0;
  func_0x00010a3bef9c(param_1 + 0x2015);
  FUN_10ac83884(param_1 + 0x13);
  *puVar3 = &PTR_FUN_110c65b30;
  *param_1 = &PTR_FUN_110c5f0c8;
  param_1[3] = &PTR_DAT_110c5f0f8;
  param_1[0x201a] = &PTR_DAT_110c65c00;
  FUN_10ac409b0(param_1 + 0x11);
  *puVar3 = &PTR_DAT_110c60a00;
  *param_1 = &PTR_DAT_110c60a88;
  param_1[3] = &PTR_DAT_110c60ab8;
  ppuVar2 = (undefined **)(param_1 + 9);
  puVar6 = (undefined8 *)param_1[10];
  for (puVar5 = (undefined8 *)*ppuVar2; puVar5 != puVar6; puVar5 = puVar5 + 1) {
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
  FUN_10ac634b8(ppuVar2);
  plVar4 = param_1 + 8;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 1);
  if ((param_1[0x10] != 0) && (lVar1 = *(long *)(param_1[0x10] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,puVar3);
  }
  if (*(char *)((long)param_1 + 0x7f) < '\0') {
    __ZdlPv(param_1[0xd]);
  }
  appuStack_180[0] = ppuVar2;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar4;
  *plVar4 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[7] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[3] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 4);
  *param_1 = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 1);
  return puVar3;
}



/* Entry: 10ac77a0c; end: 10ac77b3f;  */

undefined8 * FUN_10ac77a0c(long *param_1)

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
  *puVar1 = &PTR_DAT_110c61a50;
  puVar1[2] = &PTR_FUN_110c61b08;
  puVar1[5] = &PTR_DAT_110c61b38;
  puVar1[0x201c] = &PTR_FUN_110c61bc0;
  func_0x00010a3bef9c(puVar1 + 0x2017);
  FUN_10ac83884(puVar1 + 0x15);
  *puVar1 = &PTR_FUN_110c65b30;
  puVar1[2] = &PTR_FUN_110c5f0c8;
  puVar1[5] = &PTR_DAT_110c5f0f8;
  puVar1[0x201c] = &PTR_DAT_110c65c00;
  FUN_10ac409b0(puVar1 + 0x13);
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



/* Entry: 10ac77b40; end: 10ac77b43;  */

undefined8 * FUN_10ac77b40(undefined8 *param_1)

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
  
  *param_1 = &PTR_FUN_110c61c60;
  param_1[2] = &PTR_FUN_110c61d90;
  param_1[5] = &PTR_FUN_110c61dc0;
  param_1[0x53] = &PTR_FUN_110c61e68;
  puVar4 = param_1 + 0x15;
  *puVar4 = &PTR_FUN_110c61e18;
  func_0x00010a05248c(param_1 + 0x51);
  *param_1 = &PTR_FUN_110c65c50;
  param_1[2] = &PTR_FUN_110bb3968;
  param_1[5] = &PTR_DAT_110bb3998;
  param_1[0x53] = &PTR_DAT_110c65db0;
  *puVar4 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar4);
  *param_1 = &PTR_DAT_110c65e00;
  param_1[2] = &PTR_FUN_110b9f848;
  param_1[5] = &PTR_DAT_110b9f878;
  param_1[0x53] = &PTR_DAT_110c65ed0;
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



/* Entry: 10ac77b44; end: 10ac77b57;  */

void FUN_10ac77b44(void)

{
  func_0x00010ac7a9d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac77b58; end: 10ac77b67;  */

long FUN_10ac77b58(long param_1)

{
  return param_1 + 0xa8;
}



/* Entry: 10ac77b68; end: 10ac77b7f;  */

void FUN_10ac77b68(long param_1)

{
  func_0x00010ac7a9d0(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac77b80; end: 10ac77b87;  */

undefined8 * FUN_10ac77b80(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar2 = param_1 + -5;
  *puVar2 = &PTR_FUN_110c61c60;
  param_1[-3] = &PTR_FUN_110c61d90;
  *param_1 = &PTR_FUN_110c61dc0;
  param_1[0x4e] = &PTR_FUN_110c61e68;
  puVar5 = param_1 + 0x10;
  *puVar5 = &PTR_FUN_110c61e18;
  func_0x00010a05248c(param_1 + 0x4c);
  *puVar2 = &PTR_FUN_110c65c50;
  param_1[-3] = &PTR_FUN_110bb3968;
  *param_1 = &PTR_DAT_110bb3998;
  param_1[0x4e] = &PTR_DAT_110c65db0;
  *puVar5 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x48);
  func_0x00010a042c64(param_1 + 0x43);
  func_0x00010a0523dc(param_1 + 0x40);
  if (*(char *)(param_1 + 0x37) == '\x01') {
    func_0x00010a042d30(param_1 + 0x35);
  }
  param_1[0x10] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar5);
  *puVar2 = &PTR_DAT_110c65e00;
  param_1[-3] = &PTR_FUN_110b9f848;
  *param_1 = &PTR_DAT_110b9f878;
  param_1[0x4e] = &PTR_DAT_110c65ed0;
  FUN_10a042dcc(param_1 + 0xe);
  *puVar2 = &PTR_DAT_110c60a00;
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
  if ((param_1[0xd] != 0) && (lVar1 = *(long *)(param_1[0xd] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,puVar2);
  }
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    __ZdlPv(param_1[10]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar4;
  *plVar4 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  param_1[-3] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -2);
  return puVar2;
}



/* Entry: 10ac77b88; end: 10ac77b9f;  */

void FUN_10ac77b88(long param_1)

{
  func_0x00010ac7a9d0(param_1 + -0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac77ba0; end: 10ac77ba7;  */

undefined8 * FUN_10ac77ba0(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar2 = param_1 + -0x15;
  *puVar2 = &PTR_FUN_110c61c60;
  param_1[-0x13] = &PTR_FUN_110c61d90;
  param_1[-0x10] = &PTR_FUN_110c61dc0;
  param_1[0x3e] = &PTR_FUN_110c61e68;
  *param_1 = &PTR_FUN_110c61e18;
  func_0x00010a05248c(param_1 + 0x3c);
  *puVar2 = &PTR_FUN_110c65c50;
  param_1[-0x13] = &PTR_FUN_110bb3968;
  param_1[-0x10] = &PTR_DAT_110bb3998;
  param_1[0x3e] = &PTR_DAT_110c65db0;
  *param_1 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x38);
  func_0x00010a042c64(param_1 + 0x33);
  func_0x00010a0523dc(param_1 + 0x30);
  if (*(char *)(param_1 + 0x27) == '\x01') {
    func_0x00010a042d30(param_1 + 0x25);
  }
  *param_1 = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1);
  *puVar2 = &PTR_DAT_110c65e00;
  param_1[-0x13] = &PTR_FUN_110b9f848;
  param_1[-0x10] = &PTR_DAT_110b9f878;
  param_1[0x3e] = &PTR_DAT_110c65ed0;
  FUN_10a042dcc(param_1 + -2);
  *puVar2 = &PTR_DAT_110c60a00;
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
  if ((param_1[-3] != 0) && (lVar1 = *(long *)(param_1[-3] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,puVar2);
  }
  if (*(char *)((long)param_1 + -0x19) < '\0') {
    __ZdlPv(param_1[-6]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar4;
  *plVar4 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[-0xc] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x10] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0xf);
  param_1[-0x13] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x12);
  return puVar2;
}



/* Entry: 10ac77ba8; end: 10ac77bbf;  */

void FUN_10ac77ba8(long param_1)

{
  func_0x00010ac7a9d0(param_1 + -0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac77bc0; end: 10ac77bcf;  */

undefined8 * FUN_10ac77bc0(long *param_1)

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
  *puVar1 = &PTR_FUN_110c61c60;
  puVar1[2] = &PTR_FUN_110c61d90;
  puVar1[5] = &PTR_FUN_110c61dc0;
  puVar1[0x53] = &PTR_FUN_110c61e68;
  puVar5 = puVar1 + 0x15;
  *puVar5 = &PTR_FUN_110c61e18;
  func_0x00010a05248c(puVar1 + 0x51);
  *puVar1 = &PTR_FUN_110c65c50;
  puVar1[2] = &PTR_FUN_110bb3968;
  puVar1[5] = &PTR_DAT_110bb3998;
  puVar1[0x53] = &PTR_DAT_110c65db0;
  *puVar5 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(puVar1 + 0x4d);
  func_0x00010a042c64(puVar1 + 0x48);
  func_0x00010a0523dc(puVar1 + 0x45);
  if (*(char *)(puVar1 + 0x3c) == '\x01') {
    func_0x00010a042d30(puVar1 + 0x3a);
  }
  puVar1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar5);
  *puVar1 = &PTR_DAT_110c65e00;
  puVar1[2] = &PTR_FUN_110b9f848;
  puVar1[5] = &PTR_DAT_110b9f878;
  puVar1[0x53] = &PTR_DAT_110c65ed0;
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



/* Entry: 10ac77bd0; end: 10ac77bff;  */

void FUN_10ac77bd0(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  func_0x00010ac7a9d0((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10ac77c00; end: 10ac77c0b;  */

long FUN_10ac77c00(long param_1)

{
  return param_1 + 0xa8;
}



/* Entry: 10ac77c0c; end: 10ac77c1f;  */

void FUN_10ac77c0c(void)

{
  func_0x00010ac7aac8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac77c20; end: 10ac77c2f;  */

long FUN_10ac77c20(long param_1)

{
  return param_1 + 0xa8;
}



/* Entry: 10ac77c30; end: 10ac77c47;  */

void FUN_10ac77c30(long param_1)

{
  func_0x00010ac7aac8(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac77c48; end: 10ac77c4f;  */

undefined8 * FUN_10ac77c48(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar2 = param_1 + -5;
  *puVar2 = &PTR_DAT_110c62390;
  param_1[-3] = &PTR_FUN_110c624c0;
  *param_1 = &PTR_FUN_110c624f0;
  param_1[0x61] = &PTR_FUN_110c62598;
  puVar5 = param_1 + 0x10;
  *puVar5 = &PTR_FUN_110c62548;
  func_0x00010a202f70(param_1 + 0x5f);
  FUN_10a352ff8(param_1 + 0x5d);
  func_0x00010a0523dc(param_1 + 0x5b);
  __ZNSt3__15mutexD1Ev(param_1 + 0x53);
  func_0x00010a0524e4(param_1 + 0x51);
  func_0x00010a05248c(param_1 + 0x4f);
  FUN_10ac87190(param_1 + 0x4c);
  *puVar2 = &PTR_FUN_110c66220;
  param_1[-3] = &PTR_FUN_110bb3968;
  *param_1 = &PTR_DAT_110bb3998;
  param_1[0x61] = &PTR_DAT_110c66380;
  *puVar5 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x48);
  func_0x00010a042c64(param_1 + 0x43);
  func_0x00010a0523dc(param_1 + 0x40);
  if (*(char *)(param_1 + 0x37) == '\x01') {
    func_0x00010a042d30(param_1 + 0x35);
  }
  param_1[0x10] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar5);
  *puVar2 = &PTR_DAT_110c663d0;
  param_1[-3] = &PTR_FUN_110b9f848;
  *param_1 = &PTR_DAT_110b9f878;
  param_1[0x61] = &PTR_DAT_110c664a0;
  FUN_10a042dcc(param_1 + 0xe);
  *puVar2 = &PTR_DAT_110c60a00;
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
  if ((param_1[0xd] != 0) && (lVar1 = *(long *)(param_1[0xd] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,puVar2);
  }
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    __ZdlPv(param_1[10]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar4;
  *plVar4 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  param_1[-3] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -2);
  return puVar2;
}



/* Entry: 10ac77c50; end: 10ac77c67;  */

void FUN_10ac77c50(long param_1)

{
  func_0x00010ac7aac8(param_1 + -0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac77c68; end: 10ac77c6f;  */

undefined8 * FUN_10ac77c68(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar2 = param_1 + -0x15;
  *puVar2 = &PTR_DAT_110c62390;
  param_1[-0x13] = &PTR_FUN_110c624c0;
  param_1[-0x10] = &PTR_FUN_110c624f0;
  param_1[0x51] = &PTR_FUN_110c62598;
  *param_1 = &PTR_FUN_110c62548;
  func_0x00010a202f70(param_1 + 0x4f);
  FUN_10a352ff8(param_1 + 0x4d);
  func_0x00010a0523dc(param_1 + 0x4b);
  __ZNSt3__15mutexD1Ev(param_1 + 0x43);
  func_0x00010a0524e4(param_1 + 0x41);
  func_0x00010a05248c(param_1 + 0x3f);
  FUN_10ac87190(param_1 + 0x3c);
  *puVar2 = &PTR_FUN_110c66220;
  param_1[-0x13] = &PTR_FUN_110bb3968;
  param_1[-0x10] = &PTR_DAT_110bb3998;
  param_1[0x51] = &PTR_DAT_110c66380;
  *param_1 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x38);
  func_0x00010a042c64(param_1 + 0x33);
  func_0x00010a0523dc(param_1 + 0x30);
  if (*(char *)(param_1 + 0x27) == '\x01') {
    func_0x00010a042d30(param_1 + 0x25);
  }
  *param_1 = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1);
  *puVar2 = &PTR_DAT_110c663d0;
  param_1[-0x13] = &PTR_FUN_110b9f848;
  param_1[-0x10] = &PTR_DAT_110b9f878;
  param_1[0x51] = &PTR_DAT_110c664a0;
  FUN_10a042dcc(param_1 + -2);
  *puVar2 = &PTR_DAT_110c60a00;
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
  if ((param_1[-3] != 0) && (lVar1 = *(long *)(param_1[-3] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,puVar2);
  }
  if (*(char *)((long)param_1 + -0x19) < '\0') {
    __ZdlPv(param_1[-6]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar4;
  *plVar4 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[-0xc] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x10] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0xf);
  param_1[-0x13] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x12);
  return puVar2;
}



/* Entry: 10ac77c70; end: 10ac77c87;  */

void FUN_10ac77c70(long param_1)

{
  func_0x00010ac7aac8(param_1 + -0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac77c88; end: 10ac77c97;  */

undefined8 * FUN_10ac77c88(long *param_1)

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
  *puVar1 = &PTR_DAT_110c62390;
  puVar1[2] = &PTR_FUN_110c624c0;
  puVar1[5] = &PTR_FUN_110c624f0;
  puVar1[0x66] = &PTR_FUN_110c62598;
  puVar5 = puVar1 + 0x15;
  *puVar5 = &PTR_FUN_110c62548;
  func_0x00010a202f70(puVar1 + 100);
  FUN_10a352ff8(puVar1 + 0x62);
  func_0x00010a0523dc(puVar1 + 0x60);
  __ZNSt3__15mutexD1Ev(puVar1 + 0x58);
  func_0x00010a0524e4(puVar1 + 0x56);
  func_0x00010a05248c(puVar1 + 0x54);
  FUN_10ac87190(puVar1 + 0x51);
  *puVar1 = &PTR_FUN_110c66220;
  puVar1[2] = &PTR_FUN_110bb3968;
  puVar1[5] = &PTR_DAT_110bb3998;
  puVar1[0x66] = &PTR_DAT_110c66380;
  *puVar5 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(puVar1 + 0x4d);
  func_0x00010a042c64(puVar1 + 0x48);
  func_0x00010a0523dc(puVar1 + 0x45);
  if (*(char *)(puVar1 + 0x3c) == '\x01') {
    func_0x00010a042d30(puVar1 + 0x3a);
  }
  puVar1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar5);
  *puVar1 = &PTR_DAT_110c663d0;
  puVar1[2] = &PTR_FUN_110b9f848;
  puVar1[5] = &PTR_DAT_110b9f878;
  puVar1[0x66] = &PTR_DAT_110c664a0;
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



/* Entry: 10ac77c98; end: 10ac77eff;  */

void FUN_10ac77c98(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  func_0x00010ac7aac8((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10ac77f00; end: 10ac77f03;  */

undefined8 * FUN_10ac77f00(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  
  *param_1 = &PTR_FUN_110c620c0;
  FUN_10ac850c0(param_1 + 0x4e);
  func_0x00010a042b54(param_1 + 0x4c);
  func_0x00010a042b54(param_1 + 0x4a);
  __ZNSt3__15mutexD1Ev(param_1 + 0x42);
  __ZNSt3__15mutexD1Ev(param_1 + 0x3a);
  func_0x00010a0523dc(param_1 + 0x38);
  if (param_1[0x33] != 0) {
    piVar1 = (int *)(param_1[0x33] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x2c);
    }
  }
  param_1[0x33] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  if (0 < *(int *)((long)param_1 + 0x164)) {
    lVar6 = 0;
    lVar8 = param_1[0x34];
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)((long)param_1 + 0x164));
  }
  puVar7 = (undefined8 *)param_1[0x35];
  if (puVar7 != param_1 + 0x36 && puVar7 != (undefined8 *)0x0) {
    _free(puVar7[-1]);
  }
  if (param_1[0x28] != 0) {
    param_1[0x29] = param_1[0x28];
    __ZdlPv();
  }
  if (param_1[0x22] != 0) {
    piVar1 = (int *)(param_1[0x22] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x1b);
    }
  }
  param_1[0x22] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  if (0 < *(int *)((long)param_1 + 0xdc)) {
    lVar6 = 0;
    lVar8 = param_1[0x23];
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)((long)param_1 + 0xdc));
  }
  puVar7 = (undefined8 *)param_1[0x24];
  if (puVar7 != param_1 + 0x25 && puVar7 != (undefined8 *)0x0) {
    _free(puVar7[-1]);
  }
  plVar5 = (long *)param_1[0x1a];
  param_1[0x1a] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  func_0x000109d18f34(param_1 + 3);
  plVar5 = (long *)param_1[2];
  param_1[2] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  return param_1;
}



/* Entry: 10ac77f04; end: 10ac77f17;  */

void FUN_10ac77f04(void)

{
  FUN_10ac876bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac77f18; end: 10ac780f3;  */

undefined8 * FUN_10ac77f18(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plStack_50;
  long *plStack_48;
  
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  plVar4 = (long *)0x60;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110c668c8;
  plStack_50 = plVar4 + 3;
  *plStack_50 = (long)&PTR_FUN_110c62808;
  plVar4[9] = 0;
  plVar4[8] = 0;
  plVar4[0xb] = 0;
  plVar4[10] = 0;
  plVar4[5] = 0;
  plVar4[4] = 0;
  plVar4[7] = 0;
  plVar4[6] = 0;
  *(undefined8 *)((long)plVar4 + 0x54) = 0;
  *(undefined8 *)((long)plVar4 + 0x4c) = 0;
  plStack_48 = plVar4;
  FUN_10ac780f4(param_1,&plStack_50);
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
  plVar4 = (long *)0x60;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110c668c8;
  plStack_50 = plVar4 + 3;
  *plStack_50 = (long)&PTR_FUN_110c62808;
  plVar4[9] = 0;
  plVar4[8] = 0;
  plVar4[0xb] = 0;
  plVar4[10] = 0;
  plVar4[5] = 0;
  plVar4[4] = 0;
  plVar4[7] = 0;
  plVar4[6] = 0;
  *(undefined8 *)((long)plVar4 + 0x54) = 0;
  *(undefined8 *)((long)plVar4 + 0x4c) = 0;
  plStack_48 = plVar4;
  FUN_10ac780f4(param_1 + 2,&plStack_50);
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
  plVar4 = (long *)0x60;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110c668c8;
  plStack_50 = plVar4 + 3;
  *plStack_50 = (long)&PTR_FUN_110c62808;
  plVar4[9] = 0;
  plVar4[8] = 0;
  plVar4[0xb] = 0;
  plVar4[10] = 0;
  plVar4[5] = 0;
  plVar4[4] = 0;
  plVar4[7] = 0;
  plVar4[6] = 0;
  *(undefined8 *)((long)plVar4 + 0x54) = 0;
  *(undefined8 *)((long)plVar4 + 0x4c) = 0;
  plStack_48 = plVar4;
  FUN_10ac780f4(param_1 + 4,&plStack_50);
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
  return param_1;
}



/* Entry: 10ac780f4; end: 10ac78157;  */

undefined8 * FUN_10ac780f4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10ac78158; end: 10ac78167;  */

void FUN_10ac78158(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c668c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ac78168; end: 10ac78187;  */

void FUN_10ac78168(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c668c8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac78188; end: 10ac78197;  */

void FUN_10ac78188(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ac78190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10ac78198; end: 10ac781ef;  */

long FUN_10ac78198(long param_1)

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



/* Entry: 10ac781f0; end: 10ac78217;  */

void FUN_10ac781f0(void)

{
  code *pcVar1;
  
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ac7821c);
  (*pcVar1)();
}



/* Entry: 10ac78218; end: 10ac78227;  */

void FUN_10ac78218(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ac7821c);
  (*pcVar1)();
}



/* Entry: 10ac78228; end: 10ac7827f;  */

long FUN_10ac78228(long param_1)

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



/* Entry: 10ac78280; end: 10ac78343;  */

long * FUN_10ac78280(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = param_1;
  FUN_10ac63120(param_1,param_3);
  lVar2 = *param_2;
  *plVar1 = lVar2;
  plVar1[2] = (long)&PTR_FUN_110c66ac8;
  plVar1[5] = (long)&PTR_DAT_110c66af8;
  *(long *)((long)plVar1 + *(long *)(lVar2 + -0x18)) = param_2[1];
  plVar1[0x13] = 0;
  plVar1[0x14] = 0;
  plVar1 = (long *)((long)plVar1 + *(long *)(*plVar1 + -0x18));
  if ((*(byte *)(plVar1 + 3) & 1) == 0) {
    *(undefined1 *)(plVar1 + 3) = 1;
    plVar1[2] = param_3;
    if (param_3 != 0) {
      plVar1[1] = *(long *)(*(long *)(param_3 + 0x850) + 0x2c);
    }
    (**(code **)(*plVar1 + 0x18))();
  }
  return param_1;
}



/* Entry: 10ac78344; end: 10ac7839f;  */

undefined8 * FUN_10ac78344(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0xf) == '\x01') {
    func_0x00010a275b1c(param_1 + 0xd);
    FUN_10a1f7334(param_1 + 8);
    if (*(char *)((long)param_1 + 0x2f) < '\0') {
      __ZdlPv(param_1[3]);
    }
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
  }
  return param_1;
}



/* Entry: 10ac783a0; end: 10ac7880b;  */

/* WARNING: Removing unreachable block (ram,0x00010ac78620) */
/* WARNING: Removing unreachable block (ram,0x00010ac78760) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_10ac783a0(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *******pppppppuVar2;
  undefined8 *puVar3;
  byte bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *******pppppppuVar7;
  bool bVar8;
  undefined1 auStack_a8 [48];
  byte bStack_78;
  undefined8 *******pppppppuStack_70;
  ulong uStack_68;
  undefined1 auStack_60 [5];
  undefined1 auStack_5b [3];
  undefined8 *******pppppppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  if (*(char *)*param_1 == '\x01') {
    uVar1 = param_2[1];
    puVar3 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar3 = param_2;
    }
    puVar6 = puVar3;
    FUN_10a186dec(puVar3,uVar1,&DAT_10f5b012e,3);
    if ((int)puVar6 != 0) {
      FUN_10a00280c(&pppppppuStack_58,uVar1 + 5,0);
      _memcpy(&pppppppuStack_58,puVar3,uVar1 - 3);
      *(undefined8 *)((long)&pppppppuStack_58 + (uVar1 - 3)) = 0x7670732e74726576;
LAB_10ac784b8:
      uVar1 = param_2[1];
      puVar3 = (undefined8 *)*param_2;
      if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
        uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
        puVar3 = param_2;
      }
      puVar6 = puVar3;
      FUN_10a186dec(puVar3,uVar1,&DAT_10f5b012e,3);
      if ((int)puVar6 == 0) {
        if (0x7ffffffffffffff7 < uVar1) goto LAB_10ac787c0;
        if (uVar1 < 0x17) {
          _auStack_60 = CONCAT17((char)uVar1,_auStack_60);
          pppppppuVar7 = &pppppppuStack_70;
          if (uVar1 != 0) goto LAB_10ac7858c;
        }
        else {
          pppppppuVar2 = (undefined8 *******)0x19;
          if ((uVar1 | 7) != 0x17) {
            pppppppuVar2 = (undefined8 *******)((uVar1 | 7) + 1);
          }
          pppppppuVar7 = pppppppuVar2;
          __Znwm();
          _auStack_60 = (ulong)pppppppuVar2 | 0x8000000000000000;
          pppppppuStack_70 = pppppppuVar7;
          uStack_68 = uVar1;
LAB_10ac7858c:
          _memmove(pppppppuVar7,puVar3,uVar1);
        }
        *(undefined1 *)((long)pppppppuVar7 + uVar1) = 0;
      }
      else {
        FUN_10a00280c(&pppppppuStack_70,uVar1 + 5,0);
        pppppppuVar2 = pppppppuStack_70;
        if (-1 < (long)_auStack_60) {
          pppppppuVar2 = &pppppppuStack_70;
        }
        _memcpy(pppppppuVar2,puVar3,uVar1 - 3);
        *(undefined8 *)((long)pppppppuVar2 + (uVar1 - 3)) = 0x7670732e67617266;
      }
      FUN_10a0f1b8c(auStack_a8,&pppppppuStack_58,1);
      bVar4 = bStack_78;
      if (bStack_78 == 1) {
        FUN_10a0f1ea0(auStack_a8);
      }
      FUN_10a0f1b8c(auStack_a8,&pppppppuStack_70,1);
      if (((bStack_78 & 1) == 0) || (FUN_10a0f1ea0(auStack_a8), bVar4 == 0)) {
        bVar8 = true;
      }
      else {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1[1],param_2)
        ;
        bVar8 = false;
      }
      if ((long)_auStack_60 < 0) {
        __ZdlPv(pppppppuStack_70);
      }
      if (!bVar8) {
        return 1;
      }
      goto LAB_10ac7862c;
    }
    if (uVar1 < 0x7ffffffffffffff8) {
      if (uVar1 < 0x17) {
        uStack_48 = CONCAT17((char)uVar1,(undefined7)uStack_48);
        pppppppuVar7 = &pppppppuStack_58;
        if (uVar1 != 0) goto LAB_10ac784a4;
      }
      else {
        pppppppuVar2 = (undefined8 *******)0x19;
        if ((uVar1 | 7) != 0x17) {
          pppppppuVar2 = (undefined8 *******)((uVar1 | 7) + 1);
        }
        pppppppuVar7 = pppppppuVar2;
        __Znwm();
        uStack_48 = (ulong)pppppppuVar2 | 0x8000000000000000;
        pppppppuStack_58 = pppppppuVar7;
        uStack_50 = uVar1;
LAB_10ac784a4:
        _memmove(pppppppuVar7,puVar3,uVar1);
      }
      *(undefined1 *)((long)pppppppuVar7 + uVar1) = 0;
      goto LAB_10ac784b8;
    }
LAB_10ac787bc:
    func_0x000109ffde50();
LAB_10ac787c0:
    func_0x000109ffde50();
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10ac787c8);
    (*pcVar5)();
  }
LAB_10ac7862c:
  if (*(char *)param_1[2] != '\x01') goto LAB_10ac7876c;
  uVar1 = param_2[1];
  puVar3 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar3 = param_2;
  }
  puVar6 = puVar3;
  FUN_10a186dec(puVar3,uVar1,&DAT_10f2c5356,5);
  if ((int)puVar6 == 0) {
    if (0x7ffffffffffffff7 < uVar1) goto LAB_10ac787bc;
    if (uVar1 < 0x17) {
      uStack_48 = CONCAT17((char)uVar1,(undefined7)uStack_48);
      pppppppuVar7 = &pppppppuStack_58;
      if (uVar1 != 0) goto LAB_10ac78710;
    }
    else {
      pppppppuVar2 = (undefined8 *******)0x19;
      if ((uVar1 | 7) != 0x17) {
        pppppppuVar2 = (undefined8 *******)((uVar1 | 7) + 1);
      }
      pppppppuVar7 = pppppppuVar2;
      __Znwm();
      uStack_48 = (ulong)pppppppuVar2 | 0x8000000000000000;
      pppppppuStack_58 = pppppppuVar7;
      uStack_50 = uVar1;
LAB_10ac78710:
      _memmove(pppppppuVar7,puVar3,uVar1);
    }
    *(undefined1 *)((long)pppppppuVar7 + uVar1) = 0;
  }
  else {
    FUN_10a00280c(&pppppppuStack_58,uVar1 + 3,0);
    _memcpy(&pppppppuStack_58,puVar3,uVar1 - 5);
    *(undefined8 *)((long)&pppppppuStack_58 + (uVar1 - 5)) = 0x62696c6c6174656d;
  }
  FUN_10a0f1b8c(auStack_a8,&pppppppuStack_58,1);
  bVar4 = bStack_78;
  if ((bStack_78 & 1) != 0) {
    FUN_10a0f1ea0(auStack_a8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_1[1],&pppppppuStack_58);
  }
  if ((bVar4 & 1) != 0) {
    return 1;
  }
LAB_10ac7876c:
  FUN_10a0f1b8c(auStack_a8,param_2,1);
  if ((bStack_78 & 1) != 0) {
    FUN_10a0f1ea0(auStack_a8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1[1],param_2);
    return 1;
  }
  return 0;
}



/* Entry: 10ac7880c; end: 10ac788bf;  */

void FUN_10ac7880c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  plVar2 = *(long **)**(undefined8 **)*param_1;
  puVar1 = (undefined8 *)0x19;
  __Znwm();
  lStack_28 = -0x7fffffffffffffe7;
  uStack_30 = 0x17;
  *(undefined8 *)((long)puVar1 + 0xf) = 0x32315f39305f3532;
  puVar1[1] = 0x325f4f42554c475f;
  *puVar1 = 0x45524f43534e454c;
  *(undefined1 *)((long)puVar1 + 0x17) = 0;
  puStack_38 = puVar1;
  (**(code **)(*plVar2 + 0x40))(plVar2,&puStack_38,0);
  uRam00000001137ec73c = SUB84(plVar2,0);
  if (lStack_28 < 0) {
    __ZdlPv(puStack_38);
  }
  return;
}



/* Entry: 10ac788c0; end: 10ac78973;  */

void FUN_10ac788c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  plVar2 = *(long **)**(undefined8 **)*param_1;
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  lStack_28 = -0x7fffffffffffffe0;
  uStack_30 = 0x1d;
  *(undefined8 *)((long)puVar1 + 0x15) = 0x35305f32305f3632;
  *(undefined8 *)((long)puVar1 + 0xd) = 0x5f534f495f303033;
  puVar1[1] = 0x30303353454c475f;
  *puVar1 = 0x45524f43534e454c;
  *(undefined1 *)((long)puVar1 + 0x1d) = 0;
  puStack_38 = puVar1;
  (**(code **)(*plVar2 + 0x50))(plVar2,&puStack_38,0);
  uRam00000001137ec738 = SUB81(plVar2,0);
  if (lStack_28 < 0) {
    __ZdlPv(puStack_38);
  }
  return;
}



/* Entry: 10ac78974; end: 10ac78ad7;  */

void FUN_10ac78974(long param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  FUN_10a0b4df8(auStack_48,param_2 + 0x18,param_3);
  FUN_10a0f1b8c(param_1,auStack_48,0);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    FUN_10a099f6c(auStack_78,param_3);
    uVar1 = *(ulong *)(param_2 + 0x20);
    lVar2 = *(long *)(param_2 + 0x18);
    if (-1 < (char)*(byte *)(param_2 + 0x2f)) {
      uVar1 = (ulong)*(byte *)(param_2 + 0x2f);
      lVar2 = param_2 + 0x18;
    }
    puVar3 = auStack_78;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar3,0,lVar2,uVar1);
    uStack_58 = puVar3[1];
    uStack_60 = *puVar3;
    lStack_50 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    FUN_10ad03508(auStack_48,&uStack_60);
    FUN_10a0f1b8c(param_1,auStack_48,0);
    if (cStack_31 < '\0') {
      __ZdlPv(auStack_48[0]);
    }
    if (lStack_50 < 0) {
      __ZdlPv(uStack_60);
    }
    if (cStack_61 < '\0') {
      __ZdlPv(auStack_78[0]);
    }
  }
  return;
}



/* Entry: 10ac78ad8; end: 10ac78ceb;  */

void FUN_10ac78ad8(long *param_1,long *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar5 = (undefined8 *)0x58;
  __Znwm();
  *puVar5 = FUN_10ac87db4;
  puVar5[1] = FUN_10ac87eb8;
  func_0x0001092ba17c(puVar5 + 2);
  lVar7 = puVar5[7];
  if (lVar7 != 0) {
    plVar6 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar7;
  lVar7 = *param_2;
  puVar5[9] = lVar7;
  plVar6 = (long *)(lVar7 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (((uint)*(undefined8 *)(puVar5[9] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar5 + 10) = 0;
    lVar7 = puVar5[9];
    plVar6 = (long *)(lVar7 + 0x10);
    uStack_38 = puVar5[3];
    do {
      lVar9 = *plVar6;
      if (lVar9 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          uStack_48 = 0;
          puStack_40 = puVar5;
          func_0x000109d1b588(lVar7 + 0x18,&uStack_48);
          *(undefined8 *)(lVar7 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar9 >> 1 & 1) == 0);
  }
  plVar6 = (long *)puVar5[9];
  if (((uint)*(undefined8 *)(puVar5[9] + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(plVar6 + 0x15) & 1) != 0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar8 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
      func_0x0001092ba100(puVar5 + 2);
      func_0x000109d1a1d0(puVar5 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(puVar5);
      return;
    }
  }
  else {
    func_0x0001092af97c(plVar6 + 0x12);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ac78c64);
  (*pcVar4)();
}



/* Entry: 10ac78cec; end: 10ac78cf3;  */

void FUN_10ac78cec(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ac78cf0);
  (*pcVar1)();
}



/* Entry: 10ac78cf4; end: 10ac78d33;  */

void FUN_10ac78cf4(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_10ac634b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10ac78d34; end: 10ac78d47;  */

void FUN_10ac78d34(undefined8 param_1,long *param_2)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  plVar7 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  puVar6 = (undefined8 *)0x58;
  __Znwm();
  *puVar6 = FUN_10ac8785c;
  puVar6[1] = FUN_10ac8795c;
  func_0x0001092ba17c(puVar6 + 2);
  lVar8 = puVar6[7];
  if (lVar8 != 0) {
    plVar1 = (long *)(lVar8 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *plVar7 = lVar8;
  lVar8 = *param_2;
  puVar6[9] = lVar8;
  plVar7 = (long *)(lVar8 + 8);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = *plVar7 + 4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (((uint)*(undefined8 *)(puVar6[9] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar6 + 10) = 0;
    lVar8 = puVar6[9];
    plVar7 = (long *)(lVar8 + 0x10);
    uStack_48 = puVar6[3];
    do {
      lVar10 = *plVar7;
      if (lVar10 == 0) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          uStack_58 = 0;
          puStack_50 = puVar6;
          func_0x000109d1b588(lVar8 + 0x18,&uStack_58);
          *(undefined8 *)(lVar8 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar10 >> 1 & 1) == 0);
  }
  plVar7 = (long *)puVar6[9];
  if (((uint)*(undefined8 *)(puVar6[9] + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar7 + 0x12);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10ac78ed0);
    (*pcVar5)();
  }
  if (plVar7 != (long *)0x0) {
    puVar2 = (ulong *)(plVar7 + 1);
    do {
      uVar9 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar9 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar9 & 0x1fffffffc) == 4) {
      do {
        uVar9 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar9 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar9 - 1 == 0) {
        (**(code **)(*plVar7 + 8))();
      }
    }
  }
  func_0x0001092ba100(puVar6 + 2);
  func_0x000109d1a1d0(puVar6 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar6);
  return;
}



/* Entry: 10ac78d48; end: 10ac78f57;  */

void FUN_10ac78d48(long *param_1,long *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar5 = (undefined8 *)0x58;
  __Znwm();
  *puVar5 = FUN_10ac8785c;
  puVar5[1] = FUN_10ac8795c;
  func_0x0001092ba17c(puVar5 + 2);
  lVar7 = puVar5[7];
  if (lVar7 != 0) {
    plVar6 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar7;
  lVar7 = *param_2;
  puVar5[9] = lVar7;
  plVar6 = (long *)(lVar7 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (((uint)*(undefined8 *)(puVar5[9] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar5 + 10) = 0;
    lVar7 = puVar5[9];
    plVar6 = (long *)(lVar7 + 0x10);
    uStack_38 = puVar5[3];
    do {
      lVar9 = *plVar6;
      if (lVar9 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          uStack_48 = 0;
          puStack_40 = puVar5;
          func_0x000109d1b588(lVar7 + 0x18,&uStack_48);
          *(undefined8 *)(lVar7 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar9 >> 1 & 1) == 0);
  }
  plVar6 = (long *)puVar5[9];
  if (((uint)*(undefined8 *)(puVar5[9] + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar6 + 0x12);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10ac78ed0);
    (*pcVar4)();
  }
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar8 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar8 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar8 & 0x1fffffffc) == 4) {
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar8 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  func_0x0001092ba100(puVar5 + 2);
  func_0x000109d1a1d0(puVar5 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar5);
  return;
}



/* Entry: 10ac78f58; end: 10ac78f6b;  */

void FUN_10ac78f58(undefined8 param_1,undefined1 (*param_2) [16],long param_3,ulong param_4)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined1 (*pauVar4) [16];
  code *pcVar5;
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  undefined4 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined1 (*pauVar16) [16];
  ulong uVar17;
  undefined1 (*pauVar18) [16];
  ulong uVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  ulong uVar24;
  undefined1 (*pauVar25) [16];
  undefined1 (*pauVar26) [16];
  float fVar27;
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  
  pauVar6 = (undefined1 (*) [16])&DAT_10f62a4d8;
  FUN_109ffde64();
LAB_10ac78f98:
  do {
    pauVar25 = pauVar6;
    uVar10 = (long)param_2 - (long)pauVar25 >> 3;
    if (uVar10 - 2 == 0 || (long)uVar10 < 2) {
      if (uVar10 < 2) {
        return;
      }
      if (uVar10 == 2) {
        if (*(float *)(param_2[-1] + 0xc) <= *(float *)(*pauVar25 + 4)) {
          return;
        }
        uVar12 = *(undefined8 *)*pauVar25;
LAB_10ac795c8:
        *(undefined8 *)*pauVar25 = *(undefined8 *)(param_2[-1] + 8);
LAB_10ac795d0:
        *(undefined8 *)(param_2[-1] + 8) = uVar12;
        return;
      }
    }
    else {
      if (uVar10 == 3) {
        fVar27 = *(float *)(*pauVar25 + 0xc);
        if (fVar27 <= *(float *)(*pauVar25 + 4)) {
          if (*(float *)(param_2[-1] + 0xc) <= fVar27) {
            return;
          }
          uVar12 = *(undefined8 *)(*pauVar25 + 8);
          *(undefined8 *)(*pauVar25 + 8) = *(undefined8 *)(param_2[-1] + 8);
          *(undefined8 *)(param_2[-1] + 8) = uVar12;
          if (*(float *)(*pauVar25 + 0xc) <= *(float *)(*pauVar25 + 4)) {
            return;
          }
          auVar28 = NEON_ext(*pauVar25,*pauVar25,8,1);
          *(long *)(*pauVar25 + 8) = auVar28._8_8_;
          *(long *)*pauVar25 = auVar28._0_8_;
          return;
        }
        uVar12 = *(undefined8 *)*pauVar25;
        if (*(float *)(param_2[-1] + 0xc) <= fVar27) {
          *(undefined8 *)*pauVar25 = *(undefined8 *)(*pauVar25 + 8);
          *(undefined8 *)(*pauVar25 + 8) = uVar12;
          if (*(float *)(param_2[-1] + 0xc) <= (float)((ulong)uVar12 >> 0x20)) {
            return;
          }
          *(undefined8 *)(*pauVar25 + 8) = *(undefined8 *)(param_2[-1] + 8);
          goto LAB_10ac795d0;
        }
        goto LAB_10ac795c8;
      }
      if (uVar10 == 4) {
        fVar30 = *(float *)(*pauVar25 + 0xc);
        fVar29 = *(float *)(*pauVar25 + 4);
        fVar27 = *(float *)(pauVar25[1] + 4);
        if (fVar30 <= fVar29) {
          if (fVar30 < fVar27) {
            uVar12 = *(undefined8 *)(*pauVar25 + 8);
            uVar11 = *(undefined8 *)pauVar25[1];
            *(undefined8 *)(*pauVar25 + 8) = uVar11;
            *(undefined8 *)pauVar25[1] = uVar12;
            fVar27 = (float)((ulong)uVar12 >> 0x20);
            if (fVar29 < (float)((ulong)uVar11 >> 0x20)) {
              uVar12 = *(undefined8 *)*pauVar25;
              *(undefined8 *)*pauVar25 = uVar11;
              *(undefined8 *)(*pauVar25 + 8) = uVar12;
            }
          }
        }
        else {
          uVar12 = *(undefined8 *)*pauVar25;
          fVar29 = (float)((ulong)uVar12 >> 0x20);
          if (fVar27 <= fVar30) {
            *(undefined8 *)*pauVar25 = *(undefined8 *)(*pauVar25 + 8);
            *(undefined8 *)(*pauVar25 + 8) = uVar12;
            if (fVar27 <= fVar29) goto LAB_10ac79974;
            *(undefined8 *)(*pauVar25 + 8) = *(undefined8 *)pauVar25[1];
          }
          else {
            *(undefined8 *)*pauVar25 = *(undefined8 *)pauVar25[1];
          }
          *(undefined8 *)pauVar25[1] = uVar12;
          fVar27 = fVar29;
        }
LAB_10ac79974:
        if (*(float *)(param_2[-1] + 0xc) <= fVar27) {
          return;
        }
        uVar12 = *(undefined8 *)pauVar25[1];
        *(undefined8 *)pauVar25[1] = *(undefined8 *)(param_2[-1] + 8);
        *(undefined8 *)(param_2[-1] + 8) = uVar12;
        if (*(float *)(pauVar25[1] + 4) <= *(float *)(*pauVar25 + 0xc)) {
          return;
        }
        uVar12 = *(undefined8 *)(*pauVar25 + 8);
        uVar11 = *(undefined8 *)pauVar25[1];
        *(undefined8 *)(*pauVar25 + 8) = uVar11;
        *(undefined8 *)pauVar25[1] = uVar12;
        if ((float)((ulong)uVar11 >> 0x20) <= *(float *)(*pauVar25 + 4)) {
          return;
        }
        uVar12 = *(undefined8 *)*pauVar25;
        *(undefined8 *)*pauVar25 = uVar11;
        *(undefined8 *)(*pauVar25 + 8) = uVar12;
        return;
      }
      if (uVar10 == 5) {
        puVar22 = (undefined8 *)(*pauVar25 + 8);
        pauVar6 = pauVar25 + 1;
        puVar23 = (undefined8 *)(pauVar25[1] + 8);
        fVar29 = *(float *)(*pauVar25 + 0xc);
        fVar27 = *(float *)(pauVar25[1] + 4);
        if (fVar29 <= *(float *)(*pauVar25 + 4)) {
          if (fVar29 < fVar27) {
            uVar9 = *(undefined4 *)puVar22;
            fVar27 = *(float *)(*pauVar25 + 0xc);
            *puVar22 = *(undefined8 *)*pauVar6;
            *(undefined4 *)*pauVar6 = uVar9;
            *(float *)(pauVar25[1] + 4) = fVar27;
            if (*(float *)(*pauVar25 + 4) < *(float *)(*pauVar25 + 0xc)) {
              uVar12 = *(undefined8 *)*pauVar25;
              *(undefined8 *)*pauVar25 = *puVar22;
              *puVar22 = uVar12;
              fVar27 = *(float *)(pauVar25[1] + 4);
            }
          }
        }
        else {
          uVar9 = *(undefined4 *)*pauVar25;
          fVar30 = *(float *)(*pauVar25 + 4);
          if (fVar27 <= fVar29) {
            *(undefined8 *)*pauVar25 = *puVar22;
            *(undefined4 *)puVar22 = uVar9;
            *(float *)(*pauVar25 + 0xc) = fVar30;
            fVar27 = *(float *)(pauVar25[1] + 4);
            if (fVar30 < *(float *)(pauVar25[1] + 4)) {
              *puVar22 = *(undefined8 *)*pauVar6;
              *(undefined4 *)*pauVar6 = uVar9;
              *(float *)(pauVar25[1] + 4) = fVar30;
              fVar27 = fVar30;
            }
          }
          else {
            *(undefined8 *)*pauVar25 = *(undefined8 *)*pauVar6;
            *(undefined4 *)*pauVar6 = uVar9;
            *(float *)(pauVar25[1] + 4) = fVar30;
            fVar27 = fVar30;
          }
        }
        if (fVar27 < *(float *)(pauVar25[1] + 0xc)) {
          uVar12 = *(undefined8 *)*pauVar6;
          *(undefined8 *)*pauVar6 = *puVar23;
          *puVar23 = uVar12;
          if (*(float *)(*pauVar25 + 0xc) < *(float *)(pauVar25[1] + 4)) {
            uVar12 = *puVar22;
            *puVar22 = *(undefined8 *)*pauVar6;
            *(undefined8 *)*pauVar6 = uVar12;
            if (*(float *)(*pauVar25 + 4) < *(float *)(*pauVar25 + 0xc)) {
              uVar12 = *(undefined8 *)*pauVar25;
              *(undefined8 *)*pauVar25 = *puVar22;
              *puVar22 = uVar12;
            }
          }
        }
        if (*(float *)(pauVar25[1] + 0xc) < *(float *)(param_2[-1] + 0xc)) {
          uVar12 = *puVar23;
          *puVar23 = *(undefined8 *)(param_2[-1] + 8);
          *(undefined8 *)(param_2[-1] + 8) = uVar12;
          if (*(float *)(pauVar25[1] + 4) < *(float *)(pauVar25[1] + 0xc)) {
            uVar12 = *(undefined8 *)*pauVar6;
            *(undefined8 *)*pauVar6 = *puVar23;
            *puVar23 = uVar12;
            if (*(float *)(*pauVar25 + 0xc) < *(float *)(pauVar25[1] + 4)) {
              uVar12 = *puVar22;
              *puVar22 = *(undefined8 *)*pauVar6;
              *(undefined8 *)*pauVar6 = uVar12;
              if (*(float *)(*pauVar25 + 4) < *(float *)(*pauVar25 + 0xc)) {
                uVar12 = *(undefined8 *)*pauVar25;
                *(undefined8 *)*pauVar25 = *puVar22;
                *puVar22 = uVar12;
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar10 < 0x18) {
      if ((param_4 & 1) == 0) {
        if (pauVar25 == param_2) {
          return;
        }
        pauVar6 = (undefined1 (*) [16])(*pauVar25 + 8);
        if (pauVar6 == param_2) {
          return;
        }
        lVar14 = -8;
        lVar15 = 0;
        lVar20 = 8;
        do {
          fVar27 = *(float *)(*pauVar25 + lVar15 + 0xc);
          if (*(float *)(*pauVar25 + lVar15 + 4) < fVar27) {
            uVar9 = *(undefined4 *)*pauVar6;
            pauVar7 = pauVar6;
            lVar15 = lVar14;
            do {
              pauVar8 = pauVar7;
              *(undefined8 *)*pauVar8 = *(undefined8 *)(pauVar8[-1] + 8);
              if (lVar15 == 0) goto LAB_10ac79950;
              lVar15 = lVar15 + 8;
              pauVar7 = (undefined1 (*) [16])(pauVar8[-1] + 8);
            } while (*(float *)(pauVar8[-1] + 4) < fVar27);
            *(undefined4 *)*(undefined1 (*) [16])(pauVar8[-1] + 8) = uVar9;
            *(float *)(pauVar8[-1] + 0xc) = fVar27;
          }
          pauVar6 = (undefined1 (*) [16])(*pauVar6 + 8);
          lVar14 = lVar14 + -8;
          lVar15 = lVar20;
          lVar20 = lVar20 + 8;
          if (pauVar6 == param_2) {
            return;
          }
        } while( true );
      }
      if (pauVar25 == param_2) {
        return;
      }
      if ((undefined1 (*) [16])(*pauVar25 + 8) == param_2) {
        return;
      }
      lVar15 = 0;
      pauVar6 = pauVar25;
      pauVar7 = (undefined1 (*) [16])(*pauVar25 + 8);
      do {
        fVar27 = *(float *)(*pauVar6 + 0xc);
        if (*(float *)(*pauVar6 + 4) < fVar27) {
          uVar9 = *(undefined4 *)*pauVar7;
          lVar20 = lVar15;
          do {
            lVar14 = lVar20;
            puVar22 = (undefined8 *)(*pauVar25 + lVar14);
            puVar22[1] = *puVar22;
            pauVar6 = pauVar25;
            if (lVar14 == 0) goto LAB_10ac79678;
            lVar20 = lVar14 + -8;
          } while (*(float *)((long)puVar22 + -4) < fVar27);
          pauVar6 = (undefined1 (*) [16])(*pauVar25 + lVar14);
LAB_10ac79678:
          *(undefined4 *)*pauVar6 = uVar9;
          *(float *)(*pauVar6 + 4) = fVar27;
        }
        puVar3 = *pauVar7;
        lVar15 = lVar15 + 8;
        pauVar6 = pauVar7;
        pauVar7 = (undefined1 (*) [16])(puVar3 + 8);
        if ((undefined1 (*) [16])(puVar3 + 8) == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (pauVar25 == param_2) {
        return;
      }
      uVar13 = uVar10 - 2 >> 1;
      uVar17 = uVar13;
      do {
        if ((long)uVar17 <= (long)uVar13) {
          uVar19 = uVar17 << 1 | 1;
          puVar22 = (undefined8 *)(*pauVar25 + uVar19 * 8);
          uVar24 = uVar17 * 2 + 2;
          if (((long)uVar24 < (long)uVar10) &&
             (*(float *)((long)puVar22 + 0xc) < *(float *)((long)puVar22 + 4))) {
            puVar22 = puVar22 + 1;
            uVar19 = uVar24;
          }
          puVar23 = (undefined8 *)(*pauVar25 + uVar17 * 8);
          fVar27 = *(float *)((long)puVar23 + 4);
          if (*(float *)((long)puVar22 + 4) <= fVar27) {
            uVar9 = *(undefined4 *)puVar23;
            do {
              puVar21 = puVar22;
              *puVar23 = *puVar21;
              if ((long)uVar13 < (long)uVar19) break;
              uVar1 = uVar19 << 1 | 1;
              puVar22 = (undefined8 *)(*pauVar25 + uVar1 * 8);
              uVar24 = uVar19 * 2 + 2;
              uVar19 = uVar1;
              if (((long)uVar24 < (long)uVar10) &&
                 (*(float *)((long)puVar22 + 0xc) < *(float *)((long)puVar22 + 4))) {
                puVar22 = puVar22 + 1;
                uVar19 = uVar24;
              }
              puVar23 = puVar21;
            } while (*(float *)((long)puVar22 + 4) <= fVar27);
            *(undefined4 *)puVar21 = uVar9;
            *(float *)((long)puVar21 + 4) = fVar27;
          }
        }
        bVar2 = uVar17 != 0;
        uVar17 = uVar17 - 1;
      } while (bVar2);
      do {
        uVar12 = *(undefined8 *)*pauVar25;
        pauVar6 = pauVar25;
        uVar17 = 0;
        do {
          uVar24 = uVar17 << 1 | 1;
          uVar13 = uVar17 * 2 + 2;
          pauVar7 = (undefined1 (*) [16])(*pauVar6 + uVar17 * 8 + 8);
          if (((long)uVar13 < (long)uVar10) &&
             (*(float *)(pauVar6[1] + uVar17 * 8 + 4) < *(float *)(*pauVar6 + uVar17 * 8 + 0xc))) {
            pauVar7 = (undefined1 (*) [16])(pauVar6[1] + uVar17 * 8);
            uVar24 = uVar13;
          }
          *(undefined8 *)*pauVar6 = *(undefined8 *)*pauVar7;
          pauVar6 = pauVar7;
          uVar17 = uVar24;
        } while ((long)uVar24 <= (long)(uVar10 - 2 >> 1));
        param_2 = (undefined1 (*) [16])(param_2[-1] + 8);
        if (pauVar7 == param_2) {
          *(undefined8 *)*pauVar7 = uVar12;
        }
        else {
          *(undefined8 *)*pauVar7 = *(undefined8 *)*param_2;
          *(undefined8 *)*param_2 = uVar12;
          lVar15 = (long)((long)pauVar7 + (8 - (long)pauVar25)) >> 3;
          if (1 < lVar15) {
            uVar17 = lVar15 - 2U >> 1;
            fVar27 = *(float *)(*pauVar7 + 4);
            if (fVar27 < *(float *)(*(undefined1 (*) [16])(*pauVar25 + uVar17 * 8) + 4)) {
              uVar9 = *(undefined4 *)*pauVar7;
              pauVar6 = (undefined1 (*) [16])(*pauVar25 + uVar17 * 8);
              do {
                pauVar8 = pauVar6;
                *(undefined8 *)*pauVar7 = *(undefined8 *)*pauVar8;
                if (uVar17 == 0) break;
                uVar17 = uVar17 - 1 >> 1;
                pauVar7 = pauVar8;
                pauVar6 = (undefined1 (*) [16])(*pauVar25 + uVar17 * 8);
              } while (fVar27 < *(float *)(*(undefined1 (*) [16])(*pauVar25 + uVar17 * 8) + 4));
              *(undefined4 *)*pauVar8 = uVar9;
              *(float *)(*pauVar8 + 4) = fVar27;
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
    puVar22 = (undefined8 *)(*pauVar25 + (uVar10 >> 1) * 8);
    fVar27 = *(float *)(param_2[-1] + 0xc);
    if (uVar10 < 0x81) {
      fVar29 = *(float *)(*pauVar25 + 4);
      if (fVar29 <= *(float *)((long)puVar22 + 4)) {
        if (fVar29 < fVar27) {
          uVar12 = *(undefined8 *)*pauVar25;
          *(undefined8 *)*pauVar25 = *(undefined8 *)(param_2[-1] + 8);
          *(undefined8 *)(param_2[-1] + 8) = uVar12;
          if (*(float *)((long)puVar22 + 4) < *(float *)(*pauVar25 + 4)) {
            uVar12 = *puVar22;
            *puVar22 = *(undefined8 *)*pauVar25;
            *(undefined8 *)*pauVar25 = uVar12;
          }
        }
      }
      else {
        uVar12 = *puVar22;
        if (fVar27 <= fVar29) {
          *puVar22 = *(undefined8 *)*pauVar25;
          *(undefined8 *)*pauVar25 = uVar12;
          if (*(float *)(param_2[-1] + 0xc) <= (float)((ulong)uVar12 >> 0x20)) goto LAB_10ac792d4;
          *(undefined8 *)*pauVar25 = *(undefined8 *)(param_2[-1] + 8);
        }
        else {
          *puVar22 = *(undefined8 *)(param_2[-1] + 8);
        }
        *(undefined8 *)(param_2[-1] + 8) = uVar12;
      }
    }
    else {
      fVar29 = *(float *)((long)puVar22 + 4);
      if (fVar29 <= *(float *)(*pauVar25 + 4)) {
        if (fVar29 < fVar27) {
          uVar12 = *puVar22;
          *puVar22 = *(undefined8 *)(param_2[-1] + 8);
          *(undefined8 *)(param_2[-1] + 8) = uVar12;
          if (*(float *)(*pauVar25 + 4) < *(float *)((long)puVar22 + 4)) {
            uVar12 = *(undefined8 *)*pauVar25;
            *(undefined8 *)*pauVar25 = *puVar22;
            *puVar22 = uVar12;
          }
        }
      }
      else {
        uVar12 = *(undefined8 *)*pauVar25;
        if (fVar27 <= fVar29) {
          *(undefined8 *)*pauVar25 = *puVar22;
          *puVar22 = uVar12;
          if (*(float *)(param_2[-1] + 0xc) <= (float)((ulong)uVar12 >> 0x20)) goto LAB_10ac790e8;
          *puVar22 = *(undefined8 *)(param_2[-1] + 8);
        }
        else {
          *(undefined8 *)*pauVar25 = *(undefined8 *)(param_2[-1] + 8);
        }
        *(undefined8 *)(param_2[-1] + 8) = uVar12;
      }
LAB_10ac790e8:
      fVar27 = *(float *)((long)puVar22 + -4);
      if (fVar27 <= *(float *)(*pauVar25 + 0xc)) {
        if (fVar27 < *(float *)(param_2[-1] + 4)) {
          uVar12 = puVar22[-1];
          puVar22[-1] = *(undefined8 *)param_2[-1];
          *(undefined8 *)param_2[-1] = uVar12;
          if (*(float *)(*pauVar25 + 0xc) < *(float *)((long)puVar22 + -4)) {
            uVar12 = *(undefined8 *)(*pauVar25 + 8);
            *(undefined8 *)(*pauVar25 + 8) = puVar22[-1];
            puVar22[-1] = uVar12;
          }
        }
      }
      else {
        uVar12 = *(undefined8 *)(*pauVar25 + 8);
        if (*(float *)(param_2[-1] + 4) <= fVar27) {
          *(undefined8 *)(*pauVar25 + 8) = puVar22[-1];
          puVar22[-1] = uVar12;
          if (*(float *)(param_2[-1] + 4) <= (float)((ulong)uVar12 >> 0x20)) goto LAB_10ac791ac;
          puVar22[-1] = *(undefined8 *)param_2[-1];
        }
        else {
          *(undefined8 *)(*pauVar25 + 8) = *(undefined8 *)param_2[-1];
        }
        *(undefined8 *)param_2[-1] = uVar12;
      }
LAB_10ac791ac:
      fVar27 = *(float *)((long)puVar22 + 0xc);
      if (fVar27 <= *(float *)(pauVar25[1] + 4)) {
        if (fVar27 < *(float *)(param_2[-2] + 0xc)) {
          uVar12 = puVar22[1];
          puVar22[1] = *(undefined8 *)(param_2[-2] + 8);
          *(undefined8 *)(param_2[-2] + 8) = uVar12;
          if (*(float *)(pauVar25[1] + 4) < *(float *)((long)puVar22 + 0xc)) {
            uVar12 = *(undefined8 *)pauVar25[1];
            *(undefined8 *)pauVar25[1] = puVar22[1];
            puVar22[1] = uVar12;
          }
        }
      }
      else {
        uVar12 = *(undefined8 *)pauVar25[1];
        if (*(float *)(param_2[-2] + 0xc) <= fVar27) {
          *(undefined8 *)pauVar25[1] = puVar22[1];
          puVar22[1] = uVar12;
          if (*(float *)(param_2[-2] + 0xc) <= (float)((ulong)uVar12 >> 0x20)) goto LAB_10ac79240;
          puVar22[1] = *(undefined8 *)(param_2[-2] + 8);
        }
        else {
          *(undefined8 *)pauVar25[1] = *(undefined8 *)(param_2[-2] + 8);
        }
        *(undefined8 *)(param_2[-2] + 8) = uVar12;
      }
LAB_10ac79240:
      fVar29 = *(float *)((long)puVar22 + 4);
      fVar27 = *(float *)((long)puVar22 + 0xc);
      if (fVar29 <= *(float *)((long)puVar22 + -4)) {
        uVar11 = *puVar22;
        uVar12 = uVar11;
        if (fVar29 < fVar27) {
          uVar12 = puVar22[1];
          *puVar22 = uVar12;
          puVar22[1] = uVar11;
          if (*(float *)((long)puVar22 + -4) < (float)((ulong)uVar12 >> 0x20)) {
            uVar11 = puVar22[-1];
            puVar22[-1] = uVar12;
            *puVar22 = uVar11;
            uVar12 = uVar11;
          }
        }
      }
      else {
        uVar11 = puVar22[-1];
        if (fVar27 <= fVar29) {
          puVar22[-1] = *puVar22;
          *puVar22 = uVar11;
          uVar12 = uVar11;
          if ((float)((ulong)uVar11 >> 0x20) < fVar27) {
            uVar12 = puVar22[1];
            *puVar22 = uVar12;
            puVar22[1] = uVar11;
          }
        }
        else {
          puVar22[-1] = puVar22[1];
          puVar22[1] = uVar11;
          uVar12 = *puVar22;
        }
      }
      uVar11 = *(undefined8 *)*pauVar25;
      *(undefined8 *)*pauVar25 = uVar12;
      *puVar22 = uVar11;
    }
LAB_10ac792d4:
    param_3 = param_3 + -1;
    if ((param_4 & 1) == 0) {
      fVar27 = *(float *)(*pauVar25 + 4);
      uVar9 = *(undefined4 *)*pauVar25;
      if (*(float *)(pauVar25[-1] + 0xc) <= fVar27) {
        pauVar7 = (undefined1 (*) [16])(*pauVar25 + 8);
        if (fVar27 <= *(float *)(param_2[-1] + 0xc)) {
          do {
            pauVar6 = pauVar7;
            if (param_2 <= pauVar6) break;
            pauVar7 = (undefined1 (*) [16])(*pauVar6 + 8);
          } while (fVar27 <= *(float *)(*pauVar6 + 4));
        }
        else {
          do {
            pauVar6 = pauVar7;
            if (pauVar6 == param_2) goto LAB_10ac79950;
            pauVar7 = (undefined1 (*) [16])(*pauVar6 + 8);
          } while (fVar27 <= *(float *)(*pauVar6 + 4));
        }
        pauVar7 = param_2;
        pauVar8 = param_2;
        if (pauVar6 < param_2) {
          do {
            if (pauVar8 == pauVar25) goto LAB_10ac79950;
            pauVar7 = (undefined1 (*) [16])(pauVar8[-1] + 8);
            pauVar16 = pauVar8 + -1;
            pauVar8 = pauVar7;
          } while (*(float *)(*pauVar16 + 0xc) < fVar27);
        }
        while (pauVar6 < pauVar7) {
          uVar12 = *(undefined8 *)*pauVar6;
          *(undefined8 *)*pauVar6 = *(undefined8 *)*pauVar7;
          *(undefined8 *)*pauVar7 = uVar12;
          pauVar8 = pauVar6;
          do {
            pauVar6 = (undefined1 (*) [16])(*pauVar8 + 8);
            if (pauVar6 == param_2) goto LAB_10ac79950;
            puVar3 = *pauVar8;
            pauVar16 = pauVar7;
            pauVar8 = pauVar6;
          } while (fVar27 <= *(float *)(puVar3 + 0xc));
          do {
            if (pauVar16 == pauVar25) goto LAB_10ac79950;
            pauVar7 = (undefined1 (*) [16])(pauVar16[-1] + 8);
            pauVar8 = pauVar16 + -1;
            pauVar16 = pauVar7;
          } while (*(float *)(*pauVar8 + 0xc) < fVar27);
        }
        if ((undefined1 (*) [16])(pauVar6[-1] + 8) != pauVar25) {
          *(undefined8 *)*pauVar25 = *(undefined8 *)*(undefined1 (*) [16])(pauVar6[-1] + 8);
        }
        param_4 = 0;
        *(undefined4 *)(pauVar6[-1] + 8) = uVar9;
        *(float *)(pauVar6[-1] + 0xc) = fVar27;
        goto LAB_10ac78f98;
      }
    }
    else {
      uVar9 = *(undefined4 *)*pauVar25;
      fVar27 = *(float *)(*pauVar25 + 4);
    }
    lVar15 = 0;
    do {
      if ((undefined1 (*) [16])(*pauVar25 + lVar15 + 8) == param_2) goto LAB_10ac79950;
      lVar20 = lVar15 + 0xc;
      lVar15 = lVar15 + 8;
    } while (fVar27 < *(float *)(*pauVar25 + lVar20));
    pauVar7 = (undefined1 (*) [16])(*pauVar25 + lVar15);
    pauVar6 = param_2;
    if (lVar15 == 8) {
      do {
        pauVar8 = pauVar6;
        if (pauVar6 <= pauVar7) break;
        pauVar8 = (undefined1 (*) [16])(pauVar6[-1] + 8);
        pauVar16 = pauVar6 + -1;
        pauVar6 = pauVar8;
      } while (*(float *)(*pauVar16 + 0xc) <= fVar27);
    }
    else {
      do {
        if (pauVar6 == pauVar25) {
LAB_10ac79950:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10ac79954);
          (*pcVar5)();
        }
        pauVar8 = (undefined1 (*) [16])(pauVar6[-1] + 8);
        pauVar16 = pauVar6 + -1;
        pauVar6 = pauVar8;
      } while (*(float *)(*pauVar16 + 0xc) <= fVar27);
    }
    pauVar16 = pauVar8;
    pauVar6 = pauVar7;
    pauVar26 = pauVar7;
    if (pauVar7 < pauVar8) {
      do {
        uVar12 = *(undefined8 *)*pauVar26;
        *(undefined8 *)*pauVar26 = *(undefined8 *)*pauVar16;
        *(undefined8 *)*pauVar16 = uVar12;
        do {
          pauVar6 = (undefined1 (*) [16])(*pauVar26 + 8);
          if (pauVar6 == param_2) goto LAB_10ac79950;
          puVar3 = *pauVar26;
          pauVar26 = pauVar6;
        } while (fVar27 < *(float *)(puVar3 + 0xc));
        do {
          if (pauVar16 == pauVar25) goto LAB_10ac79950;
          pauVar18 = (undefined1 (*) [16])(pauVar16[-1] + 8);
          pauVar4 = pauVar16 + -1;
          pauVar16 = pauVar18;
        } while (*(float *)(*pauVar4 + 0xc) <= fVar27);
      } while (pauVar6 < pauVar18);
    }
    pauVar16 = (undefined1 (*) [16])(pauVar6[-1] + 8);
    if (pauVar16 != pauVar25) {
      *(undefined8 *)*pauVar25 = *(undefined8 *)*pauVar16;
    }
    *(undefined4 *)(pauVar6[-1] + 8) = uVar9;
    *(float *)(pauVar6[-1] + 0xc) = fVar27;
    if (pauVar7 < pauVar8) {
LAB_10ac79424:
      FUN_10ac78f6c(pauVar25,pauVar16,param_3,(uint)param_4 & 1);
      param_4 = 0;
    }
    else {
      pauVar7 = pauVar25;
      FUN_10ac79b68(pauVar25,pauVar16);
      pauVar8 = pauVar6;
      FUN_10ac79b68(pauVar6,param_2);
      if ((int)pauVar8 == 0) {
        if (((ulong)pauVar7 & 1) == 0) goto LAB_10ac79424;
      }
      else {
        pauVar6 = pauVar25;
        param_2 = pauVar16;
        if (((ulong)pauVar7 & 1) != 0) {
          return;
        }
      }
    }
  } while( true );
}



/* Entry: 10ac78f6c; end: 10ac799db;  */

void FUN_10ac78f6c(undefined1 (*param_1) [16],undefined1 (*param_2) [16],long param_3,uint param_4)

{
  ulong uVar1;
  bool bVar2;
  undefined1 *puVar3;
  undefined1 (*pauVar4) [16];
  code *pcVar5;
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  undefined4 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined1 (*pauVar13) [16];
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined1 (*pauVar17) [16];
  ulong uVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  ulong uVar23;
  undefined1 (*pauVar24) [16];
  undefined1 (*pauVar25) [16];
  float fVar26;
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  
LAB_10ac78f98:
  do {
    pauVar24 = param_1;
    uVar9 = (long)param_2 - (long)pauVar24 >> 3;
    if (uVar9 - 2 == 0 || (long)uVar9 < 2) {
      if (uVar9 < 2) {
        return;
      }
      if (uVar9 == 2) {
        if (*(float *)(param_2[-1] + 0xc) <= *(float *)(*pauVar24 + 4)) {
          return;
        }
        uVar11 = *(undefined8 *)*pauVar24;
LAB_10ac795c8:
        *(undefined8 *)*pauVar24 = *(undefined8 *)(param_2[-1] + 8);
LAB_10ac795d0:
        *(undefined8 *)(param_2[-1] + 8) = uVar11;
        return;
      }
    }
    else {
      if (uVar9 == 3) {
        fVar26 = *(float *)(*pauVar24 + 0xc);
        if (fVar26 <= *(float *)(*pauVar24 + 4)) {
          if (*(float *)(param_2[-1] + 0xc) <= fVar26) {
            return;
          }
          uVar11 = *(undefined8 *)(*pauVar24 + 8);
          *(undefined8 *)(*pauVar24 + 8) = *(undefined8 *)(param_2[-1] + 8);
          *(undefined8 *)(param_2[-1] + 8) = uVar11;
          if (*(float *)(*pauVar24 + 0xc) <= *(float *)(*pauVar24 + 4)) {
            return;
          }
          auVar27 = NEON_ext(*pauVar24,*pauVar24,8,1);
          *(long *)(*pauVar24 + 8) = auVar27._8_8_;
          *(long *)*pauVar24 = auVar27._0_8_;
          return;
        }
        uVar11 = *(undefined8 *)*pauVar24;
        if (*(float *)(param_2[-1] + 0xc) <= fVar26) {
          *(undefined8 *)*pauVar24 = *(undefined8 *)(*pauVar24 + 8);
          *(undefined8 *)(*pauVar24 + 8) = uVar11;
          if (*(float *)(param_2[-1] + 0xc) <= (float)((ulong)uVar11 >> 0x20)) {
            return;
          }
          *(undefined8 *)(*pauVar24 + 8) = *(undefined8 *)(param_2[-1] + 8);
          goto LAB_10ac795d0;
        }
        goto LAB_10ac795c8;
      }
      if (uVar9 == 4) {
        fVar29 = *(float *)(*pauVar24 + 0xc);
        fVar28 = *(float *)(*pauVar24 + 4);
        fVar26 = *(float *)(pauVar24[1] + 4);
        if (fVar29 <= fVar28) {
          if (fVar29 < fVar26) {
            uVar11 = *(undefined8 *)(*pauVar24 + 8);
            uVar10 = *(undefined8 *)pauVar24[1];
            *(undefined8 *)(*pauVar24 + 8) = uVar10;
            *(undefined8 *)pauVar24[1] = uVar11;
            fVar26 = (float)((ulong)uVar11 >> 0x20);
            if (fVar28 < (float)((ulong)uVar10 >> 0x20)) {
              uVar11 = *(undefined8 *)*pauVar24;
              *(undefined8 *)*pauVar24 = uVar10;
              *(undefined8 *)(*pauVar24 + 8) = uVar11;
            }
          }
        }
        else {
          uVar11 = *(undefined8 *)*pauVar24;
          fVar28 = (float)((ulong)uVar11 >> 0x20);
          if (fVar26 <= fVar29) {
            *(undefined8 *)*pauVar24 = *(undefined8 *)(*pauVar24 + 8);
            *(undefined8 *)(*pauVar24 + 8) = uVar11;
            if (fVar26 <= fVar28) goto LAB_10ac79974;
            *(undefined8 *)(*pauVar24 + 8) = *(undefined8 *)pauVar24[1];
          }
          else {
            *(undefined8 *)*pauVar24 = *(undefined8 *)pauVar24[1];
          }
          *(undefined8 *)pauVar24[1] = uVar11;
          fVar26 = fVar28;
        }
LAB_10ac79974:
        if (*(float *)(param_2[-1] + 0xc) <= fVar26) {
          return;
        }
        uVar11 = *(undefined8 *)pauVar24[1];
        *(undefined8 *)pauVar24[1] = *(undefined8 *)(param_2[-1] + 8);
        *(undefined8 *)(param_2[-1] + 8) = uVar11;
        if (*(float *)(pauVar24[1] + 4) <= *(float *)(*pauVar24 + 0xc)) {
          return;
        }
        uVar11 = *(undefined8 *)(*pauVar24 + 8);
        uVar10 = *(undefined8 *)pauVar24[1];
        *(undefined8 *)(*pauVar24 + 8) = uVar10;
        *(undefined8 *)pauVar24[1] = uVar11;
        if ((float)((ulong)uVar10 >> 0x20) <= *(float *)(*pauVar24 + 4)) {
          return;
        }
        uVar11 = *(undefined8 *)*pauVar24;
        *(undefined8 *)*pauVar24 = uVar10;
        *(undefined8 *)(*pauVar24 + 8) = uVar11;
        return;
      }
      if (uVar9 == 5) {
        puVar21 = (undefined8 *)(*pauVar24 + 8);
        pauVar6 = pauVar24 + 1;
        puVar22 = (undefined8 *)(pauVar24[1] + 8);
        fVar28 = *(float *)(*pauVar24 + 0xc);
        fVar26 = *(float *)(pauVar24[1] + 4);
        if (fVar28 <= *(float *)(*pauVar24 + 4)) {
          if (fVar28 < fVar26) {
            uVar8 = *(undefined4 *)puVar21;
            fVar26 = *(float *)(*pauVar24 + 0xc);
            *puVar21 = *(undefined8 *)*pauVar6;
            *(undefined4 *)*pauVar6 = uVar8;
            *(float *)(pauVar24[1] + 4) = fVar26;
            if (*(float *)(*pauVar24 + 4) < *(float *)(*pauVar24 + 0xc)) {
              uVar11 = *(undefined8 *)*pauVar24;
              *(undefined8 *)*pauVar24 = *puVar21;
              *puVar21 = uVar11;
              fVar26 = *(float *)(pauVar24[1] + 4);
            }
          }
        }
        else {
          uVar8 = *(undefined4 *)*pauVar24;
          fVar29 = *(float *)(*pauVar24 + 4);
          if (fVar26 <= fVar28) {
            *(undefined8 *)*pauVar24 = *puVar21;
            *(undefined4 *)puVar21 = uVar8;
            *(float *)(*pauVar24 + 0xc) = fVar29;
            fVar26 = *(float *)(pauVar24[1] + 4);
            if (fVar29 < *(float *)(pauVar24[1] + 4)) {
              *puVar21 = *(undefined8 *)*pauVar6;
              *(undefined4 *)*pauVar6 = uVar8;
              *(float *)(pauVar24[1] + 4) = fVar29;
              fVar26 = fVar29;
            }
          }
          else {
            *(undefined8 *)*pauVar24 = *(undefined8 *)*pauVar6;
            *(undefined4 *)*pauVar6 = uVar8;
            *(float *)(pauVar24[1] + 4) = fVar29;
            fVar26 = fVar29;
          }
        }
        if (fVar26 < *(float *)(pauVar24[1] + 0xc)) {
          uVar11 = *(undefined8 *)*pauVar6;
          *(undefined8 *)*pauVar6 = *puVar22;
          *puVar22 = uVar11;
          if (*(float *)(*pauVar24 + 0xc) < *(float *)(pauVar24[1] + 4)) {
            uVar11 = *puVar21;
            *puVar21 = *(undefined8 *)*pauVar6;
            *(undefined8 *)*pauVar6 = uVar11;
            if (*(float *)(*pauVar24 + 4) < *(float *)(*pauVar24 + 0xc)) {
              uVar11 = *(undefined8 *)*pauVar24;
              *(undefined8 *)*pauVar24 = *puVar21;
              *puVar21 = uVar11;
            }
          }
        }
        if (*(float *)(pauVar24[1] + 0xc) < *(float *)(param_2[-1] + 0xc)) {
          uVar11 = *puVar22;
          *puVar22 = *(undefined8 *)(param_2[-1] + 8);
          *(undefined8 *)(param_2[-1] + 8) = uVar11;
          if (*(float *)(pauVar24[1] + 4) < *(float *)(pauVar24[1] + 0xc)) {
            uVar11 = *(undefined8 *)*pauVar6;
            *(undefined8 *)*pauVar6 = *puVar22;
            *puVar22 = uVar11;
            if (*(float *)(*pauVar24 + 0xc) < *(float *)(pauVar24[1] + 4)) {
              uVar11 = *puVar21;
              *puVar21 = *(undefined8 *)*pauVar6;
              *(undefined8 *)*pauVar6 = uVar11;
              if (*(float *)(*pauVar24 + 4) < *(float *)(*pauVar24 + 0xc)) {
                uVar11 = *(undefined8 *)*pauVar24;
                *(undefined8 *)*pauVar24 = *puVar21;
                *puVar21 = uVar11;
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar9 < 0x18) {
      if ((param_4 & 1) == 0) {
        if (pauVar24 == param_2) {
          return;
        }
        pauVar6 = (undefined1 (*) [16])(*pauVar24 + 8);
        if (pauVar6 == param_2) {
          return;
        }
        lVar14 = -8;
        lVar15 = 0;
        lVar19 = 8;
        do {
          fVar26 = *(float *)(*pauVar24 + lVar15 + 0xc);
          if (*(float *)(*pauVar24 + lVar15 + 4) < fVar26) {
            uVar8 = *(undefined4 *)*pauVar6;
            pauVar13 = pauVar6;
            lVar15 = lVar14;
            do {
              pauVar7 = pauVar13;
              *(undefined8 *)*pauVar7 = *(undefined8 *)(pauVar7[-1] + 8);
              if (lVar15 == 0) goto LAB_10ac79950;
              lVar15 = lVar15 + 8;
              pauVar13 = (undefined1 (*) [16])(pauVar7[-1] + 8);
            } while (*(float *)(pauVar7[-1] + 4) < fVar26);
            *(undefined4 *)*(undefined1 (*) [16])(pauVar7[-1] + 8) = uVar8;
            *(float *)(pauVar7[-1] + 0xc) = fVar26;
          }
          pauVar6 = (undefined1 (*) [16])(*pauVar6 + 8);
          lVar14 = lVar14 + -8;
          lVar15 = lVar19;
          lVar19 = lVar19 + 8;
          if (pauVar6 == param_2) {
            return;
          }
        } while( true );
      }
      if (pauVar24 == param_2) {
        return;
      }
      if ((undefined1 (*) [16])(*pauVar24 + 8) == param_2) {
        return;
      }
      lVar15 = 0;
      pauVar6 = pauVar24;
      pauVar13 = (undefined1 (*) [16])(*pauVar24 + 8);
      do {
        fVar26 = *(float *)(*pauVar6 + 0xc);
        if (*(float *)(*pauVar6 + 4) < fVar26) {
          uVar8 = *(undefined4 *)*pauVar13;
          lVar19 = lVar15;
          do {
            lVar14 = lVar19;
            puVar21 = (undefined8 *)(*pauVar24 + lVar14);
            puVar21[1] = *puVar21;
            pauVar6 = pauVar24;
            if (lVar14 == 0) goto LAB_10ac79678;
            lVar19 = lVar14 + -8;
          } while (*(float *)((long)puVar21 + -4) < fVar26);
          pauVar6 = (undefined1 (*) [16])(*pauVar24 + lVar14);
LAB_10ac79678:
          *(undefined4 *)*pauVar6 = uVar8;
          *(float *)(*pauVar6 + 4) = fVar26;
        }
        puVar3 = *pauVar13;
        lVar15 = lVar15 + 8;
        pauVar6 = pauVar13;
        pauVar13 = (undefined1 (*) [16])(puVar3 + 8);
        if ((undefined1 (*) [16])(puVar3 + 8) == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (pauVar24 == param_2) {
        return;
      }
      uVar12 = uVar9 - 2 >> 1;
      uVar16 = uVar12;
      do {
        if ((long)uVar16 <= (long)uVar12) {
          uVar18 = uVar16 << 1 | 1;
          puVar21 = (undefined8 *)(*pauVar24 + uVar18 * 8);
          uVar23 = uVar16 * 2 + 2;
          if (((long)uVar23 < (long)uVar9) &&
             (*(float *)((long)puVar21 + 0xc) < *(float *)((long)puVar21 + 4))) {
            puVar21 = puVar21 + 1;
            uVar18 = uVar23;
          }
          puVar22 = (undefined8 *)(*pauVar24 + uVar16 * 8);
          fVar26 = *(float *)((long)puVar22 + 4);
          if (*(float *)((long)puVar21 + 4) <= fVar26) {
            uVar8 = *(undefined4 *)puVar22;
            do {
              puVar20 = puVar21;
              *puVar22 = *puVar20;
              if ((long)uVar12 < (long)uVar18) break;
              uVar1 = uVar18 << 1 | 1;
              puVar21 = (undefined8 *)(*pauVar24 + uVar1 * 8);
              uVar23 = uVar18 * 2 + 2;
              uVar18 = uVar1;
              if (((long)uVar23 < (long)uVar9) &&
                 (*(float *)((long)puVar21 + 0xc) < *(float *)((long)puVar21 + 4))) {
                puVar21 = puVar21 + 1;
                uVar18 = uVar23;
              }
              puVar22 = puVar20;
            } while (*(float *)((long)puVar21 + 4) <= fVar26);
            *(undefined4 *)puVar20 = uVar8;
            *(float *)((long)puVar20 + 4) = fVar26;
          }
        }
        bVar2 = uVar16 != 0;
        uVar16 = uVar16 - 1;
      } while (bVar2);
      do {
        uVar11 = *(undefined8 *)*pauVar24;
        pauVar6 = pauVar24;
        uVar16 = 0;
        do {
          uVar23 = uVar16 << 1 | 1;
          uVar12 = uVar16 * 2 + 2;
          pauVar13 = (undefined1 (*) [16])(*pauVar6 + uVar16 * 8 + 8);
          if (((long)uVar12 < (long)uVar9) &&
             (*(float *)(pauVar6[1] + uVar16 * 8 + 4) < *(float *)(*pauVar6 + uVar16 * 8 + 0xc))) {
            pauVar13 = (undefined1 (*) [16])(pauVar6[1] + uVar16 * 8);
            uVar23 = uVar12;
          }
          *(undefined8 *)*pauVar6 = *(undefined8 *)*pauVar13;
          pauVar6 = pauVar13;
          uVar16 = uVar23;
        } while ((long)uVar23 <= (long)(uVar9 - 2 >> 1));
        param_2 = (undefined1 (*) [16])(param_2[-1] + 8);
        if (pauVar13 == param_2) {
          *(undefined8 *)*pauVar13 = uVar11;
        }
        else {
          *(undefined8 *)*pauVar13 = *(undefined8 *)*param_2;
          *(undefined8 *)*param_2 = uVar11;
          lVar15 = (long)((long)pauVar13 + (8 - (long)pauVar24)) >> 3;
          if (1 < lVar15) {
            uVar16 = lVar15 - 2U >> 1;
            fVar26 = *(float *)(*pauVar13 + 4);
            if (fVar26 < *(float *)(*(undefined1 (*) [16])(*pauVar24 + uVar16 * 8) + 4)) {
              uVar8 = *(undefined4 *)*pauVar13;
              pauVar6 = (undefined1 (*) [16])(*pauVar24 + uVar16 * 8);
              do {
                pauVar7 = pauVar6;
                *(undefined8 *)*pauVar13 = *(undefined8 *)*pauVar7;
                if (uVar16 == 0) break;
                uVar16 = uVar16 - 1 >> 1;
                pauVar13 = pauVar7;
                pauVar6 = (undefined1 (*) [16])(*pauVar24 + uVar16 * 8);
              } while (fVar26 < *(float *)(*(undefined1 (*) [16])(*pauVar24 + uVar16 * 8) + 4));
              *(undefined4 *)*pauVar7 = uVar8;
              *(float *)(*pauVar7 + 4) = fVar26;
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
    puVar21 = (undefined8 *)(*pauVar24 + (uVar9 >> 1) * 8);
    fVar26 = *(float *)(param_2[-1] + 0xc);
    if (uVar9 < 0x81) {
      fVar28 = *(float *)(*pauVar24 + 4);
      if (fVar28 <= *(float *)((long)puVar21 + 4)) {
        if (fVar28 < fVar26) {
          uVar11 = *(undefined8 *)*pauVar24;
          *(undefined8 *)*pauVar24 = *(undefined8 *)(param_2[-1] + 8);
          *(undefined8 *)(param_2[-1] + 8) = uVar11;
          if (*(float *)((long)puVar21 + 4) < *(float *)(*pauVar24 + 4)) {
            uVar11 = *puVar21;
            *puVar21 = *(undefined8 *)*pauVar24;
            *(undefined8 *)*pauVar24 = uVar11;
          }
        }
      }
      else {
        uVar11 = *puVar21;
        if (fVar26 <= fVar28) {
          *puVar21 = *(undefined8 *)*pauVar24;
          *(undefined8 *)*pauVar24 = uVar11;
          if (*(float *)(param_2[-1] + 0xc) <= (float)((ulong)uVar11 >> 0x20)) goto LAB_10ac792d4;
          *(undefined8 *)*pauVar24 = *(undefined8 *)(param_2[-1] + 8);
        }
        else {
          *puVar21 = *(undefined8 *)(param_2[-1] + 8);
        }
        *(undefined8 *)(param_2[-1] + 8) = uVar11;
      }
    }
    else {
      fVar28 = *(float *)((long)puVar21 + 4);
      if (fVar28 <= *(float *)(*pauVar24 + 4)) {
        if (fVar28 < fVar26) {
          uVar11 = *puVar21;
          *puVar21 = *(undefined8 *)(param_2[-1] + 8);
          *(undefined8 *)(param_2[-1] + 8) = uVar11;
          if (*(float *)(*pauVar24 + 4) < *(float *)((long)puVar21 + 4)) {
            uVar11 = *(undefined8 *)*pauVar24;
            *(undefined8 *)*pauVar24 = *puVar21;
            *puVar21 = uVar11;
          }
        }
      }
      else {
        uVar11 = *(undefined8 *)*pauVar24;
        if (fVar26 <= fVar28) {
          *(undefined8 *)*pauVar24 = *puVar21;
          *puVar21 = uVar11;
          if (*(float *)(param_2[-1] + 0xc) <= (float)((ulong)uVar11 >> 0x20)) goto LAB_10ac790e8;
          *puVar21 = *(undefined8 *)(param_2[-1] + 8);
        }
        else {
          *(undefined8 *)*pauVar24 = *(undefined8 *)(param_2[-1] + 8);
        }
        *(undefined8 *)(param_2[-1] + 8) = uVar11;
      }
LAB_10ac790e8:
      fVar26 = *(float *)((long)puVar21 + -4);
      if (fVar26 <= *(float *)(*pauVar24 + 0xc)) {
        if (fVar26 < *(float *)(param_2[-1] + 4)) {
          uVar11 = puVar21[-1];
          puVar21[-1] = *(undefined8 *)param_2[-1];
          *(undefined8 *)param_2[-1] = uVar11;
          if (*(float *)(*pauVar24 + 0xc) < *(float *)((long)puVar21 + -4)) {
            uVar11 = *(undefined8 *)(*pauVar24 + 8);
            *(undefined8 *)(*pauVar24 + 8) = puVar21[-1];
            puVar21[-1] = uVar11;
          }
        }
      }
      else {
        uVar11 = *(undefined8 *)(*pauVar24 + 8);
        if (*(float *)(param_2[-1] + 4) <= fVar26) {
          *(undefined8 *)(*pauVar24 + 8) = puVar21[-1];
          puVar21[-1] = uVar11;
          if (*(float *)(param_2[-1] + 4) <= (float)((ulong)uVar11 >> 0x20)) goto LAB_10ac791ac;
          puVar21[-1] = *(undefined8 *)param_2[-1];
        }
        else {
          *(undefined8 *)(*pauVar24 + 8) = *(undefined8 *)param_2[-1];
        }
        *(undefined8 *)param_2[-1] = uVar11;
      }
LAB_10ac791ac:
      fVar26 = *(float *)((long)puVar21 + 0xc);
      if (fVar26 <= *(float *)(pauVar24[1] + 4)) {
        if (fVar26 < *(float *)(param_2[-2] + 0xc)) {
          uVar11 = puVar21[1];
          puVar21[1] = *(undefined8 *)(param_2[-2] + 8);
          *(undefined8 *)(param_2[-2] + 8) = uVar11;
          if (*(float *)(pauVar24[1] + 4) < *(float *)((long)puVar21 + 0xc)) {
            uVar11 = *(undefined8 *)pauVar24[1];
            *(undefined8 *)pauVar24[1] = puVar21[1];
            puVar21[1] = uVar11;
          }
        }
      }
      else {
        uVar11 = *(undefined8 *)pauVar24[1];
        if (*(float *)(param_2[-2] + 0xc) <= fVar26) {
          *(undefined8 *)pauVar24[1] = puVar21[1];
          puVar21[1] = uVar11;
          if (*(float *)(param_2[-2] + 0xc) <= (float)((ulong)uVar11 >> 0x20)) goto LAB_10ac79240;
          puVar21[1] = *(undefined8 *)(param_2[-2] + 8);
        }
        else {
          *(undefined8 *)pauVar24[1] = *(undefined8 *)(param_2[-2] + 8);
        }
        *(undefined8 *)(param_2[-2] + 8) = uVar11;
      }
LAB_10ac79240:
      fVar28 = *(float *)((long)puVar21 + 4);
      fVar26 = *(float *)((long)puVar21 + 0xc);
      if (fVar28 <= *(float *)((long)puVar21 + -4)) {
        uVar10 = *puVar21;
        uVar11 = uVar10;
        if (fVar28 < fVar26) {
          uVar11 = puVar21[1];
          *puVar21 = uVar11;
          puVar21[1] = uVar10;
          if (*(float *)((long)puVar21 + -4) < (float)((ulong)uVar11 >> 0x20)) {
            uVar10 = puVar21[-1];
            puVar21[-1] = uVar11;
            *puVar21 = uVar10;
            uVar11 = uVar10;
          }
        }
      }
      else {
        uVar10 = puVar21[-1];
        if (fVar26 <= fVar28) {
          puVar21[-1] = *puVar21;
          *puVar21 = uVar10;
          uVar11 = uVar10;
          if ((float)((ulong)uVar10 >> 0x20) < fVar26) {
            uVar11 = puVar21[1];
            *puVar21 = uVar11;
            puVar21[1] = uVar10;
          }
        }
        else {
          puVar21[-1] = puVar21[1];
          puVar21[1] = uVar10;
          uVar11 = *puVar21;
        }
      }
      uVar10 = *(undefined8 *)*pauVar24;
      *(undefined8 *)*pauVar24 = uVar11;
      *puVar21 = uVar10;
    }
LAB_10ac792d4:
    param_3 = param_3 + -1;
    if ((param_4 & 1) == 0) {
      fVar26 = *(float *)(*pauVar24 + 4);
      uVar8 = *(undefined4 *)*pauVar24;
      if (*(float *)(pauVar24[-1] + 0xc) <= fVar26) {
        pauVar6 = (undefined1 (*) [16])(*pauVar24 + 8);
        if (fVar26 <= *(float *)(param_2[-1] + 0xc)) {
          do {
            param_1 = pauVar6;
            if (param_2 <= param_1) break;
            pauVar6 = (undefined1 (*) [16])(*param_1 + 8);
          } while (fVar26 <= *(float *)(*param_1 + 4));
        }
        else {
          do {
            param_1 = pauVar6;
            if (param_1 == param_2) goto LAB_10ac79950;
            pauVar6 = (undefined1 (*) [16])(*param_1 + 8);
          } while (fVar26 <= *(float *)(*param_1 + 4));
        }
        pauVar6 = param_2;
        pauVar13 = param_2;
        if (param_1 < param_2) {
          do {
            if (pauVar13 == pauVar24) goto LAB_10ac79950;
            pauVar6 = (undefined1 (*) [16])(pauVar13[-1] + 8);
            pauVar7 = pauVar13 + -1;
            pauVar13 = pauVar6;
          } while (*(float *)(*pauVar7 + 0xc) < fVar26);
        }
        while (param_1 < pauVar6) {
          uVar11 = *(undefined8 *)*param_1;
          *(undefined8 *)*param_1 = *(undefined8 *)*pauVar6;
          *(undefined8 *)*pauVar6 = uVar11;
          pauVar13 = param_1;
          do {
            param_1 = (undefined1 (*) [16])(*pauVar13 + 8);
            if (param_1 == param_2) goto LAB_10ac79950;
            puVar3 = *pauVar13;
            pauVar7 = pauVar6;
            pauVar13 = param_1;
          } while (fVar26 <= *(float *)(puVar3 + 0xc));
          do {
            if (pauVar7 == pauVar24) goto LAB_10ac79950;
            pauVar6 = (undefined1 (*) [16])(pauVar7[-1] + 8);
            pauVar13 = pauVar7 + -1;
            pauVar7 = pauVar6;
          } while (*(float *)(*pauVar13 + 0xc) < fVar26);
        }
        if ((undefined1 (*) [16])(param_1[-1] + 8) != pauVar24) {
          *(undefined8 *)*pauVar24 = *(undefined8 *)*(undefined1 (*) [16])(param_1[-1] + 8);
        }
        param_4 = 0;
        *(undefined4 *)(param_1[-1] + 8) = uVar8;
        *(float *)(param_1[-1] + 0xc) = fVar26;
        goto LAB_10ac78f98;
      }
    }
    else {
      uVar8 = *(undefined4 *)*pauVar24;
      fVar26 = *(float *)(*pauVar24 + 4);
    }
    lVar15 = 0;
    do {
      if ((undefined1 (*) [16])(*pauVar24 + lVar15 + 8) == param_2) goto LAB_10ac79950;
      lVar19 = lVar15 + 0xc;
      lVar15 = lVar15 + 8;
    } while (fVar26 < *(float *)(*pauVar24 + lVar19));
    pauVar6 = (undefined1 (*) [16])(*pauVar24 + lVar15);
    pauVar13 = param_2;
    if (lVar15 == 8) {
      do {
        pauVar7 = pauVar13;
        if (pauVar13 <= pauVar6) break;
        pauVar7 = (undefined1 (*) [16])(pauVar13[-1] + 8);
        pauVar25 = pauVar13 + -1;
        pauVar13 = pauVar7;
      } while (*(float *)(*pauVar25 + 0xc) <= fVar26);
    }
    else {
      do {
        if (pauVar13 == pauVar24) {
LAB_10ac79950:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10ac79954);
          (*pcVar5)();
        }
        pauVar7 = (undefined1 (*) [16])(pauVar13[-1] + 8);
        pauVar25 = pauVar13 + -1;
        pauVar13 = pauVar7;
      } while (*(float *)(*pauVar25 + 0xc) <= fVar26);
    }
    pauVar13 = pauVar7;
    param_1 = pauVar6;
    pauVar25 = pauVar6;
    if (pauVar6 < pauVar7) {
      do {
        uVar11 = *(undefined8 *)*pauVar25;
        *(undefined8 *)*pauVar25 = *(undefined8 *)*pauVar13;
        *(undefined8 *)*pauVar13 = uVar11;
        do {
          param_1 = (undefined1 (*) [16])(*pauVar25 + 8);
          if (param_1 == param_2) goto LAB_10ac79950;
          puVar3 = *pauVar25;
          pauVar25 = param_1;
        } while (fVar26 < *(float *)(puVar3 + 0xc));
        do {
          if (pauVar13 == pauVar24) goto LAB_10ac79950;
          pauVar17 = (undefined1 (*) [16])(pauVar13[-1] + 8);
          pauVar4 = pauVar13 + -1;
          pauVar13 = pauVar17;
        } while (*(float *)(*pauVar4 + 0xc) <= fVar26);
      } while (param_1 < pauVar17);
    }
    pauVar13 = (undefined1 (*) [16])(param_1[-1] + 8);
    if (pauVar13 != pauVar24) {
      *(undefined8 *)*pauVar24 = *(undefined8 *)*pauVar13;
    }
    *(undefined4 *)(param_1[-1] + 8) = uVar8;
    *(float *)(param_1[-1] + 0xc) = fVar26;
    if (pauVar6 < pauVar7) {
LAB_10ac79424:
      FUN_10ac78f6c(pauVar24,pauVar13,param_3,param_4 & 1);
      param_4 = 0;
    }
    else {
      pauVar6 = pauVar24;
      FUN_10ac79b68(pauVar24,pauVar13);
      pauVar7 = param_1;
      FUN_10ac79b68(param_1,param_2);
      if ((int)pauVar7 == 0) {
        if (((ulong)pauVar6 & 1) == 0) goto LAB_10ac79424;
      }
      else {
        param_1 = pauVar24;
        param_2 = pauVar13;
        if (((ulong)pauVar6 & 1) != 0) {
          return;
        }
      }
    }
  } while( true );
}



/* Entry: 10ac799dc; end: 10ac79b67;  */

void FUN_10ac799dc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)((long)param_2 + 4);
  fVar2 = *(float *)((long)param_3 + 4);
  if (fVar3 <= *(float *)((long)param_1 + 4)) {
    if (fVar2 <= fVar3) goto LAB_10ac79a88;
    uVar1 = *param_2;
    *param_2 = *param_3;
    *param_3 = uVar1;
    if (*(float *)((long)param_1 + 4) < *(float *)((long)param_2 + 4)) {
      uVar1 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar1;
      fVar2 = *(float *)((long)param_3 + 4);
      goto LAB_10ac79a88;
    }
  }
  else {
    uVar1 = *param_1;
    if (fVar2 <= fVar3) {
      *param_1 = *param_2;
      *param_2 = uVar1;
      fVar3 = (float)((ulong)uVar1 >> 0x20);
      fVar2 = *(float *)((long)param_3 + 4);
      if (fVar3 < *(float *)((long)param_3 + 4)) {
        *param_2 = *param_3;
        *param_3 = uVar1;
        fVar2 = fVar3;
      }
      goto LAB_10ac79a88;
    }
    *param_1 = *param_3;
    *param_3 = uVar1;
  }
  fVar2 = (float)((ulong)uVar1 >> 0x20);
LAB_10ac79a88:
  if (fVar2 < *(float *)((long)param_4 + 4)) {
    uVar1 = *param_3;
    *param_3 = *param_4;
    *param_4 = uVar1;
    if (*(float *)((long)param_2 + 4) < *(float *)((long)param_3 + 4)) {
      uVar1 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar1;
      if (*(float *)((long)param_1 + 4) < *(float *)((long)param_2 + 4)) {
        uVar1 = *param_1;
        *param_1 = *param_2;
        *param_2 = uVar1;
      }
    }
  }
  if (*(float *)((long)param_4 + 4) < *(float *)((long)param_5 + 4)) {
    uVar1 = *param_4;
    *param_4 = *param_5;
    *param_5 = uVar1;
    if (*(float *)((long)param_3 + 4) < *(float *)((long)param_4 + 4)) {
      uVar1 = *param_3;
      *param_3 = *param_4;
      *param_4 = uVar1;
      if (*(float *)((long)param_2 + 4) < *(float *)((long)param_3 + 4)) {
        uVar1 = *param_2;
        *param_2 = *param_3;
        *param_3 = uVar1;
        if (*(float *)((long)param_1 + 4) < *(float *)((long)param_2 + 4)) {
          uVar1 = *param_1;
          *param_1 = *param_2;
          *param_2 = uVar1;
        }
      }
    }
  }
  return;
}



/* Entry: 10ac79b68; end: 10ac79e63;  */

bool FUN_10ac79b68(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined8 uVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 (*pauVar6) [16];
  long lVar7;
  int iVar8;
  undefined1 (*pauVar9) [16];
  long lVar10;
  undefined1 (*pauVar11) [16];
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  
  uVar4 = (long)param_2 - (long)param_1 >> 3;
  if ((long)uVar4 < 3) {
    if (uVar4 < 2) {
      return true;
    }
    if (uVar4 == 2) {
      if (*(float *)(param_2[-1] + 0xc) <= *(float *)(*param_1 + 4)) {
        return true;
      }
      uVar5 = *(undefined8 *)*param_1;
LAB_10ac79bf4:
      *(undefined8 *)*param_1 = *(undefined8 *)(param_2[-1] + 8);
LAB_10ac79bfc:
      *(undefined8 *)(param_2[-1] + 8) = uVar5;
      return true;
    }
  }
  else {
    if (uVar4 == 3) {
      fVar12 = *(float *)(*param_1 + 0xc);
      if (fVar12 <= *(float *)(*param_1 + 4)) {
        if (*(float *)(param_2[-1] + 0xc) <= fVar12) {
          return true;
        }
        uVar5 = *(undefined8 *)(*param_1 + 8);
        *(undefined8 *)(*param_1 + 8) = *(undefined8 *)(param_2[-1] + 8);
        *(undefined8 *)(param_2[-1] + 8) = uVar5;
        if (*(float *)(*param_1 + 0xc) <= *(float *)(*param_1 + 4)) {
          return true;
        }
        auVar13 = NEON_ext(*param_1,*param_1,8,1);
        *(long *)(*param_1 + 8) = auVar13._8_8_;
        *(long *)*param_1 = auVar13._0_8_;
        return true;
      }
      uVar5 = *(undefined8 *)*param_1;
      if (*(float *)(param_2[-1] + 0xc) <= fVar12) {
        *(undefined8 *)*param_1 = *(undefined8 *)(*param_1 + 8);
        *(undefined8 *)(*param_1 + 8) = uVar5;
        if (*(float *)(param_2[-1] + 0xc) <= (float)((ulong)uVar5 >> 0x20)) {
          return true;
        }
        *(undefined8 *)(*param_1 + 8) = *(undefined8 *)(param_2[-1] + 8);
        goto LAB_10ac79bfc;
      }
      goto LAB_10ac79bf4;
    }
    if (uVar4 == 4) {
      fVar15 = *(float *)(*param_1 + 0xc);
      fVar14 = *(float *)(*param_1 + 4);
      fVar12 = *(float *)(param_1[1] + 4);
      if (fVar15 <= fVar14) {
        if (fVar15 < fVar12) {
          uVar5 = *(undefined8 *)(*param_1 + 8);
          uVar1 = *(undefined8 *)param_1[1];
          *(undefined8 *)(*param_1 + 8) = uVar1;
          *(undefined8 *)param_1[1] = uVar5;
          fVar12 = (float)((ulong)uVar5 >> 0x20);
          if (fVar14 < (float)((ulong)uVar1 >> 0x20)) {
            uVar5 = *(undefined8 *)*param_1;
            *(undefined8 *)*param_1 = uVar1;
            *(undefined8 *)(*param_1 + 8) = uVar5;
          }
        }
      }
      else {
        uVar5 = *(undefined8 *)*param_1;
        fVar14 = (float)((ulong)uVar5 >> 0x20);
        if (fVar12 <= fVar15) {
          *(undefined8 *)*param_1 = *(undefined8 *)(*param_1 + 8);
          *(undefined8 *)(*param_1 + 8) = uVar5;
          if (fVar12 <= fVar14) goto LAB_10ac79df8;
          *(undefined8 *)(*param_1 + 8) = *(undefined8 *)param_1[1];
        }
        else {
          *(undefined8 *)*param_1 = *(undefined8 *)param_1[1];
        }
        *(undefined8 *)param_1[1] = uVar5;
        fVar12 = fVar14;
      }
LAB_10ac79df8:
      if (*(float *)(param_2[-1] + 0xc) <= fVar12) {
        return true;
      }
      uVar5 = *(undefined8 *)param_1[1];
      *(undefined8 *)param_1[1] = *(undefined8 *)(param_2[-1] + 8);
      *(undefined8 *)(param_2[-1] + 8) = uVar5;
      if (*(float *)(param_1[1] + 4) <= *(float *)(*param_1 + 0xc)) {
        return true;
      }
      uVar5 = *(undefined8 *)(*param_1 + 8);
      uVar1 = *(undefined8 *)param_1[1];
      *(undefined8 *)(*param_1 + 8) = uVar1;
      *(undefined8 *)param_1[1] = uVar5;
      if ((float)((ulong)uVar1 >> 0x20) <= *(float *)(*param_1 + 4)) {
        return true;
      }
      uVar5 = *(undefined8 *)*param_1;
      *(undefined8 *)*param_1 = uVar1;
      *(undefined8 *)(*param_1 + 8) = uVar5;
      return true;
    }
    if (uVar4 == 5) {
      FUN_10ac799dc(param_1,*param_1 + 8,param_1 + 1,param_1[1] + 8,param_2[-1] + 8);
      return true;
    }
  }
  fVar15 = *(float *)(*param_1 + 0xc);
  fVar14 = *(float *)(*param_1 + 4);
  fVar12 = *(float *)(param_1[1] + 4);
  if (fVar15 <= fVar14) {
    if (fVar15 < fVar12) {
      uVar5 = *(undefined8 *)(*param_1 + 8);
      uVar1 = *(undefined8 *)param_1[1];
      *(undefined8 *)(*param_1 + 8) = uVar1;
      *(undefined8 *)param_1[1] = uVar5;
      if (fVar14 < (float)((ulong)uVar1 >> 0x20)) {
        uVar5 = *(undefined8 *)*param_1;
        *(undefined8 *)*param_1 = uVar1;
        *(undefined8 *)(*param_1 + 8) = uVar5;
      }
    }
  }
  else {
    uVar5 = *(undefined8 *)*param_1;
    if (fVar12 <= fVar15) {
      *(undefined8 *)*param_1 = *(undefined8 *)(*param_1 + 8);
      *(undefined8 *)(*param_1 + 8) = uVar5;
      if (fVar12 <= (float)((ulong)uVar5 >> 0x20)) goto LAB_10ac79d48;
      *(undefined8 *)(*param_1 + 8) = *(undefined8 *)param_1[1];
    }
    else {
      *(undefined8 *)*param_1 = *(undefined8 *)param_1[1];
    }
    *(undefined8 *)param_1[1] = uVar5;
  }
LAB_10ac79d48:
  if ((undefined1 (*) [16])(param_1[1] + 8) != param_2) {
    lVar7 = 0;
    iVar8 = 0;
    pauVar11 = (undefined1 (*) [16])(param_1[1] + 8);
    pauVar9 = param_1 + 1;
    do {
      pauVar6 = pauVar11;
      fVar12 = *(float *)(*pauVar6 + 4);
      if (*(float *)(*pauVar9 + 4) < fVar12) {
        uVar2 = *(undefined4 *)*pauVar6;
        lVar3 = lVar7;
        do {
          lVar10 = lVar3;
          *(undefined8 *)(param_1[1] + lVar10 + 8) = *(undefined8 *)(param_1[1] + lVar10);
          pauVar11 = param_1;
          if (lVar10 == -0x10) goto LAB_10ac79dac;
          lVar3 = lVar10 + -8;
        } while (*(float *)(*param_1 + lVar10 + 0xc) < fVar12);
        pauVar11 = (undefined1 (*) [16])(param_1[1] + lVar10);
LAB_10ac79dac:
        *(undefined4 *)*pauVar11 = uVar2;
        *(float *)(*pauVar11 + 4) = fVar12;
        iVar8 = iVar8 + 1;
        if (iVar8 == 8) {
          return (undefined1 (*) [16])(*pauVar6 + 8) == param_2;
        }
      }
      lVar7 = lVar7 + 8;
      pauVar11 = (undefined1 (*) [16])(*pauVar6 + 8);
      pauVar9 = pauVar6;
    } while ((undefined1 (*) [16])(*pauVar6 + 8) != param_2);
  }
  return true;
}



/* Entry: 10ac79e64; end: 10ac79e9b;  */

undefined8 * FUN_10ac79e64(undefined8 *param_1)

{
  FUN_10a0d355c(param_1 + 7);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10ac79e9c; end: 10ac79eab;  */

void FUN_10ac79e9c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ac79ea0);
  (*pcVar1)();
}



/* Entry: 10ac79eac; end: 10ac79f03;  */

long FUN_10ac79eac(long param_1)

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



/* Entry: 10ac79f04; end: 10ac79f13;  */

void FUN_10ac79f04(void)

{
  return;
}



/* Entry: 10ac79f14; end: 10ac7a12b;  */

void FUN_10ac79f14(float param_1,float param_2,float param_3,float *param_4)

{
  int iVar1;
  bool bVar2;
  byte *pbVar3;
  byte bVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  byte abStack_4 [4];
  
  iVar1 = 0;
  abStack_4[0] = 0;
  abStack_4[1] = 0;
  do {
    if (iVar1 == 1) {
      pbVar3 = abStack_4;
      pfVar5 = param_4 + 1;
    }
    else {
      if (iVar1 == 2) goto LAB_10ac79f60;
      pbVar3 = abStack_4 + 1;
      pfVar5 = param_4;
    }
    *pbVar3 = NAN(*pfVar5);
    iVar1 = iVar1 + 1;
  } while( true );
LAB_10ac7a000:
  iVar1 = 0;
  while ((bVar4 = abStack_4[2], iVar1 == 1 || (bVar4 = abStack_4[3], iVar1 != 2))) {
    while (iVar1 = iVar1 + 1, (bVar4 & 1) != 0) {
      if (iVar1 == 2) {
        return;
      }
      bVar4 = 1;
    }
  }
  if (NAN(param_3)) {
    return;
  }
  iVar1 = 0;
  fVar10 = (float)*(undefined8 *)param_4;
  fVar6 = fVar10 - param_1;
  fVar11 = (float)((ulong)*(undefined8 *)param_4 >> 0x20);
  fVar7 = fVar11 - param_2;
  if (fVar6 < 0.0) {
    fVar6 = -fVar6;
  }
  if (fVar7 < 0.0) {
    fVar7 = -fVar7;
  }
  while ((fVar12 = fVar7, iVar1 == 1 || (fVar12 = fVar6, iVar1 != 2))) {
    bVar2 = 0.2 < fVar12;
    while (iVar1 = iVar1 + 1, bVar2) {
      if (iVar1 == 2) goto LAB_10ac7a11c;
      bVar2 = true;
    }
  }
  if (ABS(fVar9 - param_3) <= 0.2) {
    uVar8 = CONCAT44(param_2 * 0.39999998 + fVar11 * 0.6,param_1 * 0.39999998 + fVar10 * 0.6);
    param_3 = param_3 * 0.39999998 + fVar9 * 0.6;
  }
  goto LAB_10ac7a11c;
LAB_10ac79f60:
  iVar1 = 0;
  fVar9 = param_4[2];
  uVar8 = CONCAT44(param_2,param_1);
  while ((bVar4 = abStack_4[0], iVar1 == 1 || (bVar4 = abStack_4[1], iVar1 != 2))) {
    while (iVar1 = iVar1 + 1, (bVar4 & 1) != 0) {
      if (iVar1 == 2) goto LAB_10ac7a11c;
      bVar4 = 1;
    }
  }
  if (!NAN(fVar9)) {
    iVar1 = 0;
    abStack_4[2] = 0;
    abStack_4[3] = 0;
    do {
      if (iVar1 == 1) {
        pbVar3 = abStack_4 + 2;
        fVar6 = param_2;
      }
      else {
        if (iVar1 == 2) goto LAB_10ac7a000;
        pbVar3 = abStack_4 + 3;
        fVar6 = param_1;
      }
      *pbVar3 = NAN(fVar6);
      iVar1 = iVar1 + 1;
    } while( true );
  }
LAB_10ac7a11c:
  *(undefined8 *)param_4 = uVar8;
  param_4[2] = param_3;
  return;
}



/* Entry: 10ac7a12c; end: 10ac7a1e7;  */

void FUN_10ac7a12c(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 != (long *)0x0))
  {
    piVar7 = (int *)*param_1;
    if (piVar7 != (int *)0x0) {
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar5) {
          *piVar7 = *piVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar3 = *(byte *)((long)param_1 + 0x11);
      piVar1 = piVar7 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 - (uint)bVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar3 = *(byte *)(param_1 + 2);
      piVar7 = piVar7 + 2;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar5) {
          *piVar7 = *piVar7 - (uint)bVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar2 = plVar6 + 1;
    do {
      lVar8 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  FUN_10ac7a378(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac7a1e8; end: 10ac7a25b;  */

void FUN_10ac7a1e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c66e98;
  if (param_1[5] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 10ac7a25c; end: 10ac7a337;  */

void FUN_10ac7a25c(long param_1)

{
  int *piVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = *(long *)(param_1 + 0x18);
  plVar6 = *(long **)(param_1 + 0x28);
  if ((plVar6 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 != (long *)0x0))
  {
    piVar7 = *(int **)(param_1 + 0x20);
    if (piVar7 != (int *)0x0) {
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar5) {
          *piVar7 = *piVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar3 = *(byte *)(param_1 + 0x31);
      piVar1 = piVar7 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 - (uint)bVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar3 = *(byte *)(param_1 + 0x30);
      piVar7 = piVar7 + 2;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar5) {
          *piVar7 = *piVar7 - (uint)bVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar2 = plVar6 + 1;
    do {
      lVar8 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  if (lVar9 != 0) {
    FUN_10ac7a378(lVar9);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10ac7a338; end: 10ac7a373;  */

long FUN_10ac7a338(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c66ed8);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10ac7a374; end: 10ac7a377;  */

void FUN_10ac7a374(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac7a378; end: 10ac7a3df;  */

long FUN_10ac7a378(long param_1)

{
  if (*(long *)(param_1 + 0x8100) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if ((*(char *)(param_1 + 33000) == '\x01') && (*(long *)(param_1 + 0x80c0) != 0)) {
    *(long *)(param_1 + 0x80c8) = *(long *)(param_1 + 0x80c0);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x80a8) != 0) {
    *(long *)(param_1 + 0x80b0) = *(long *)(param_1 + 0x80a8);
    __ZdlPv();
  }
  FUN_10ac471b8(param_1 + 0x8020);
  return param_1;
}



/* Entry: 10ac7a3e0; end: 10ac7a3ef;  */

void FUN_10ac7a3e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c66ef8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ac7a3f0; end: 10ac7a40f;  */

void FUN_10ac7a3f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c66ef8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac7a410; end: 10ac7a437;  */

long FUN_10ac7a410(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10ac7a43c(param_1 + 0x28);
  plVar5 = *(long **)(param_1 + 0x20);
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
  return param_1 + 0x18;
}



/* Entry: 10ac7a438; end: 10ac7a43b;  */

void FUN_10ac7a438(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac7a43c; end: 10ac7a493;  */

long FUN_10ac7a43c(long param_1)

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



/* Entry: 10ac7a494; end: 10ac7a50b;  */

void FUN_10ac7a494(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a4953dc(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 10ac7a50c; end: 10ac7a6ab;  */

void FUN_10ac7a50c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar1 = (long *)*param_1;
  FUN_10a2a90b0(aiStack_70,plVar1,*param_2,param_2[1] - *param_2 >> 2);
  uStack_38 = 1;
  piStack_40 = aiStack_70;
  (**(code **)(*plVar1 + 0x58))(plVar1);
  ppuStack_60 = &puStack_88;
  ppuStack_48 = &piStack_40;
  plStack_58 = plVar1;
  puStack_50 = (undefined1 *)&puStack_90;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10ac7a6ac; end: 10ac7a6db;  */

long FUN_10ac7a6ac(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x10);
    __ZdlPv();
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



/* Entry: 10ac7a6dc; end: 10ac7a6e7;  */

void FUN_10ac7a6dc(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  puVar1 = (undefined8 *)*puVar2;
  func_0x000109884c0c(&ppuStack_60,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_90);
  plVar3 = (long *)*puVar1;
  FUN_10a2a90b0(aiStack_70,plVar3,puVar2[2],(long)(puVar2[3] - puVar2[2]) >> 2);
  uStack_38 = 1;
  piStack_40 = aiStack_70;
  (**(code **)(*plVar3 + 0x58))(plVar3);
  ppuStack_60 = &puStack_88;
  ppuStack_48 = &piStack_40;
  plStack_58 = plVar3;
  puStack_50 = (undefined1 *)&puStack_90;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10ac7a6e8; end: 10ac7a72b;  */

void FUN_10ac7a6e8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x10) != 0) {
      *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x10);
      __ZdlPv();
    }
    func_0x00010a004dac(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10ac7a72c; end: 10ac7a743;  */

void FUN_10ac7a72c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10ac7a744; end: 10ac7abef;  */

undefined8 * FUN_10ac7a744(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  *param_1 = &PTR_FUN_110c5f360;
  param_1[2] = &PTR_FUN_110c5f4a0;
  param_1[5] = &PTR_FUN_110c5f4d0;
  param_1[0x75] = &PTR_FUN_110c5f5f0;
  param_1[0x15] = &PTR_FUN_110c5f528;
  param_1[0x51] = &PTR_FUN_110c5f550;
  param_1[0x56] = &PTR_FUN_110c5f598;
  FUN_10ac78198(param_1 + 0x71);
  FUN_10ac78198(param_1 + 0x6f);
  FUN_10ac78198(param_1 + 0x6d);
  FUN_10ac78198(param_1 + 0x6b);
  FUN_10ac78198(param_1 + 0x69);
  FUN_10ac78198(param_1 + 0x67);
  FUN_10a0617bc(param_1 + 0x65);
  func_0x00010a061678(param_1 + 99);
  func_0x00010a0cfa6c(param_1 + 0x61);
  func_0x00010a0523dc(param_1 + 0x5f);
  func_0x00010a05248c(param_1 + 0x5d);
  plVar2 = (long *)param_1[0x5b];
  param_1[0x5b] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a00dc2c(param_1 + 0x56);
  param_1[0x51] = &PTR_DAT_110c62b60;
  param_1[0x75] = &PTR_FUN_110c62bd8;
  func_0x00010a004e5c(param_1 + 0x54);
  func_0x00010a004e04(param_1 + 0x52);
  *param_1 = &PTR_FUN_110c62880;
  param_1[2] = &PTR_FUN_110bb3968;
  param_1[5] = &PTR_DAT_110bb3998;
  param_1[0x75] = &PTR_DAT_110c629e0;
  param_1[0x15] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x15);
  *param_1 = &PTR_DAT_110c62a30;
  param_1[2] = &PTR_FUN_110b9f848;
  param_1[5] = &PTR_DAT_110b9f878;
  param_1[0x75] = &PTR_DAT_110c62b00;
  FUN_10a042dcc(param_1 + 0x13);
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
  plVar2 = param_1 + 10;
  if ((*plVar2 != 0) && (*(undefined ***)(*(long *)(*plVar2 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar1 = *(long *)(param_1[0x12] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar2;
  *plVar2 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar2);
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



/* Entry: 10ac7abf0; end: 10ac7acc7;  */

/* WARNING: Removing unreachable block (ram,0x00010ac7ac88) */

undefined1  [16] FUN_10ac7abf0(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f69f5cc,10);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10ac7acc8(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10ac7acc8; end: 10ac7adc3;  */

undefined1  [16] FUN_10ac7acc8(ulong param_1,undefined8 *param_2,ulong param_3)

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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c62850;
  puVar1 = &UNK_10f69e32c;
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
    ppuStack_40 = &PTR_DAT_110c62850;
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



/* Entry: 10ac7adc4; end: 10ac7ae1b;  */

ulong FUN_10ac7adc4(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a052828(param_1,*param_2,FUN_10ac7ae1c,FUN_10ac7aee8);
  }
  return param_1;
}



/* Entry: 10ac7ae1c; end: 10ac7aee7;  */

void FUN_10ac7ae1c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  undefined8 uStack_48;
  
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
  FUN_10ac7afac(param_2,param_3);
  FUN_10a052e3c(param_5);
  uStack_48 = *(undefined8 *)((long)plVar2 + 0x3c);
  FUN_10a07ff64(param_1,param_2,&uStack_48);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10ac7aee8; end: 10ac7afab;  */

void FUN_10ac7aee8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010ac7b014(param_2,param_3);
  FUN_10a05a384(param_5);
  FUN_10a05a42c(param_2,param_4);
  *(long *)((long)plVar4 + 0x3c) = *param_2;
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



/* Entry: 10ac7afac; end: 10ac7b0d3;  */

undefined ** FUN_10ac7afac(undefined **param_1,undefined **param_2)

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
    FUN_10a052828(ppuVar1,*param_2,FUN_10ac7b0d4,FUN_10ac7b1cc);
  }
  return ppuVar1;
}



/* Entry: 10ac7b0d4; end: 10ac7b1cb;  */

void FUN_10ac7b0d4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac7afac(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = plVar4[3];
  uVar6 = plVar4[4] - lVar5;
  if (((plVar4[4] == lVar5) || (uVar6 < 5)) || (uVar6 == 8)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10ac7b1ac);
    (*pcVar1)();
  }
  NEON_scvtf(*(undefined8 *)(lVar5 + 4),4);
  FUN_10a065390(param_1,param_2,&stack0xffffffffffffffb4);
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



/* Entry: 10ac7b1cc; end: 10ac7b293;  */

void FUN_10ac7b1cc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010ac7b014(param_2,param_3);
  FUN_10a400de8(param_5);
  func_0x00010a0655d8(param_2,param_4);
  FUN_10ac55b74(plVar4,param_2);
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



/* Entry: 10ac7b294; end: 10ac7b2eb;  */

ulong FUN_10ac7b294(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a052828(param_1,*param_2,FUN_10ac7b2ec,FUN_10ac7b3c0);
  }
  return param_1;
}



/* Entry: 10ac7b2ec; end: 10ac7b3bf;  */

void FUN_10ac7b2ec(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac7afac(param_2,param_3);
  FUN_10a052e3c(param_5);
  uStack_48 = (undefined4)plVar2[7];
  lStack_50 = plVar2[6];
  FUN_10a065390(param_1,param_2,&lStack_50);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10ac7b3c0; end: 10ac7b493;  */

void FUN_10ac7b3c0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010ac7b014(param_2,param_3);
  FUN_10a400de8(param_5);
  func_0x00010a0655d8(param_2,param_4);
  *(int *)(plVar4 + 6) = (int)*param_2;
  *(undefined4 *)((long)plVar4 + 0x34) = *(undefined4 *)((long)param_2 + 4);
  *(int *)(plVar4 + 7) = (int)param_2[1];
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



/* Entry: 10ac7b494; end: 10ac7b54f;  */

void FUN_10ac7b494(ulong param_1)

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
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f69f5cc,10);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ac7b550);
  (*pcVar4)();
}



/* Entry: 10ac7b550; end: 10ac7b66b;  */

void FUN_10ac7b550(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
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
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar8 = param_2;
  FUN_10ac7b808(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar8 = (long *)plVar8[0x5e];
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10a05b924(param_1,param_2,&stack0xffffffffffffffb0);
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
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
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar8 = plVar6 + 0x4b;
  lVar10 = plVar6[0x59];
  uVar7 = lVar10 - 1;
  plVar6[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar8[lVar10 + 2];
    if (plVar6[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar7) {
      return;
    }
  }
  lVar10 = *plVar8;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar10;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar7) {
    uVar16 = uVar7 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar7 >> 0x3c == 0) {
        uVar9 = lVar14 - lVar10 >> 3;
        if (uVar9 <= uVar7) {
          uVar9 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar10)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar8;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar10,lVar11);
          *plVar8 = lVar12;
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
  else if (uVar7 < uVar15) {
    lVar10 = lVar10 + uVar7 * 0x10;
    while (lVar13 != lVar10) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar10;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar7;
  return;
}



/* Entry: 10ac7b66c; end: 10ac7b807;  */

/* WARNING: Removing unreachable block (ram,0x00010ac7b77c) */
/* WARNING: Removing unreachable block (ram,0x00010ac7b780) */
/* WARNING: Removing unreachable block (ram,0x00010ac7b788) */
/* WARNING: Removing unreachable block (ram,0x00010ac7b790) */
/* WARNING: Removing unreachable block (ram,0x00010ac7b794) */

void FUN_10ac7b66c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffa8;
  
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
  func_0x000109898688(param_2,param_3);
  if (plVar6 == (long *)0x0) {
    puVar8 = &UNK_10f68f52e;
  }
  else {
    plVar7 = param_2;
    FUN_10a053854(param_2,plVar6);
    if ((plVar7 != (long *)0x0) && (___dynamic_cast(), plVar7 != (long *)0x0)) {
      FUN_10a065cb8(param_5);
      FUN_10a065cdc(&stack0xffffffffffffffa0,param_2,param_4);
      FUN_10a015bec(plVar7 + 0x5d,&stack0xffffffffffffffb0);
      if (in_stack_ffffffffffffffa8 != (long *)0x0) {
        plVar6 = in_stack_ffffffffffffffa8 + 1;
        do {
          lVar11 = *plVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
        }
      }
      *param_1 = 0;
      plVar6 = plVar5 + 0x4b;
      lVar11 = plVar5[0x59];
      uVar9 = lVar11 - 1;
      plVar5[0x59] = uVar9;
      if (uVar9 < 8) {
        uVar9 = plVar6[lVar11 + 2];
        if (plVar5[0x5a] == uVar9) {
          return;
        }
      }
      else {
        uVar9 = *(ulong *)(plVar5[0x57] + -8);
        plVar5[0x57] = plVar5[0x57] + -8;
        if (plVar5[0x5a] == uVar9) {
          return;
        }
      }
      lVar11 = *plVar6;
      lVar14 = plVar5[0x4c];
      lVar12 = lVar14 - lVar11;
      uVar16 = lVar12 >> 4;
      if (uVar16 < uVar9) {
        uVar17 = uVar9 - uVar16;
        lVar15 = plVar5[0x4d];
        if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
          if (uVar9 >> 0x3c == 0) {
            uVar10 = lVar15 - lVar11 >> 3;
            if (uVar10 <= uVar9) {
              uVar10 = uVar9;
            }
            if (0x7fffffffffffffef < (ulong)(lVar15 - lVar11)) {
              uVar10 = 0xfffffffffffffff;
            }
            plStack_68 = plVar6;
            if (uVar10 >> 0x3c == 0) {
              lVar4 = uVar10 << 4;
              __Znwm();
              lVar14 = lVar4 + lVar12;
              _bzero(lVar14,uVar17 * 0x10);
              lVar13 = lVar14 + uVar16 * -0x10;
              _memcpy(lVar13,lVar11,lVar12);
              *plVar6 = lVar13;
              plVar5[0x4c] = lVar14 + uVar17 * 0x10;
              plVar5[0x4d] = lVar4 + uVar10 * 0x10;
              lStack_88 = lVar11;
              lStack_80 = lVar11;
              lStack_78 = lVar11;
              lStack_70 = lVar15;
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
        _bzero(lVar14,uVar17 * 0x10);
        plVar5[0x4c] = lVar14 + uVar17 * 0x10;
      }
      else if (uVar9 < uVar16) {
        lVar11 = lVar11 + uVar9 * 0x10;
        while (lVar14 != lVar11) {
          lVar14 = lVar14 + -0x10;
          func_0x00010988c204(lVar14);
        }
        plVar5[0x4c] = lVar11;
      }
code_r0x00010988c138:
      plVar5[0x5a] = uVar9;
      return;
    }
    puVar8 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar8);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10ac7b7f4);
  (*pcVar3)();
}



/* Entry: 10ac7b808; end: 10ac7b86f;  */

void FUN_10ac7b808(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *extraout_x8;
  long lVar5;
  
  lVar5 = param_1;
  func_0x000109898688();
  if (lVar5 != 0) {
    FUN_10a052c2c(param_1,lVar5);
    if ((param_1 != 0) && (___dynamic_cast(), param_1 != 0)) {
      return;
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar4 = &UNK_10f68f52e;
  func_0x00010988bd28();
  lVar5 = *(long *)(puVar4 + 0x340);
  *extraout_x8 = *(undefined8 *)(puVar4 + 0x338);
  extraout_x8[1] = lVar5;
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
  return;
}



/* Entry: 10ac7b870; end: 10ac7b897;  */

void FUN_10ac7b870(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + 0x340);
  *param_1 = *(undefined8 *)(param_2 + 0x338);
  param_1[1] = lVar4;
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
  return;
}



/* Entry: 10ac7b898; end: 10ac7b947;  */

void FUN_10ac7b898(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac7b948(param_1,param_2,FUN_10ac7b870,0,param_3,param_5);
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



/* Entry: 10ac7b948; end: 10ac7ba5f;  */

void FUN_10ac7b948(undefined8 param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_70;
  long *plStack_68;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  lVar5 = param_2;
  FUN_10ac7b808(param_2,param_5);
  FUN_10a052e3c(param_6);
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*(long *)(lVar5 + ((long)param_4 >> 1)) + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(&uStack_70);
  plStack_48 = plStack_68;
  uStack_50 = uStack_70;
  uStack_70 = 0;
  plStack_68 = (long *)0x0;
  ppuStack_58 = &PTR_DAT_110c62850;
  func_0x000109899de4(param_1,param_2,&uStack_50,&ppuStack_58,0,0);
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
  plVar4 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
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
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10ac7ba60; end: 10ac7ba87;  */

void FUN_10ac7ba60(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + 0x350);
  *param_1 = *(undefined8 *)(param_2 + 0x348);
  param_1[1] = lVar4;
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
  return;
}



/* Entry: 10ac7ba88; end: 10ac7bb37;  */

void FUN_10ac7ba88(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac7b948(param_1,param_2,FUN_10ac7ba60,0,param_3,param_5);
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



/* Entry: 10ac7bb38; end: 10ac7bb5f;  */

void FUN_10ac7bb38(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + 0x360);
  *param_1 = *(undefined8 *)(param_2 + 0x358);
  param_1[1] = lVar4;
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
  return;
}



/* Entry: 10ac7bb60; end: 10ac7bc0f;  */

void FUN_10ac7bb60(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac7b948(param_1,param_2,FUN_10ac7bb38,0,param_3,param_5);
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



/* Entry: 10ac7bc10; end: 10ac7bc37;  */

void FUN_10ac7bc10(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + 0x370);
  *param_1 = *(undefined8 *)(param_2 + 0x368);
  param_1[1] = lVar4;
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
  return;
}



/* Entry: 10ac7bc38; end: 10ac7bce7;  */

void FUN_10ac7bc38(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ac7b948(param_1,param_2,FUN_10ac7bc10,0,param_3,param_5);
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



/* Entry: 10ac7bce8; end: 10ac7bd0f;  */

void FUN_10ac7bce8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + 0x380);
  *param_1 = *(undefined8 *)(param_2 + 0x378);
  param_1[1] = lVar4;
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
  return;
}


