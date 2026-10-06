/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ac3d238; end: 10ac3d23f;  */

undefined8 * FUN_10ac3d238(undefined8 *param_1)

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
  *puVar1 = &PTR_DAT_110c55910;
  param_1[-0x13] = &PTR_FUN_110c55a68;
  param_1[-0x10] = &PTR_FUN_110c55a98;
  param_1[0x7e] = &PTR_FUN_110c55ba8;
  *param_1 = &PTR_FUN_110c55af0;
  param_1[0x46] = &PTR_FUN_110c55b10;
  param_1[0x47] = &PTR_FUN_110c55b48;
  lVar2 = param_1[0x7d];
  param_1[0x7d] = 0;
  if (lVar2 != 0) {
    func_0x00010ac4574c();
  }
  FUN_10ac3f800(param_1 + 0x73);
  if (*(char *)((long)param_1 + 0x397) < '\0') {
    __ZdlPv(param_1[0x70]);
  }
  if (*(char *)((long)param_1 + 0x37f) < '\0') {
    __ZdlPv(param_1[0x6d]);
  }
  func_0x00010ac44dc0(param_1 + 99);
  FUN_10ac44e1c(param_1 + 0x60);
  if (*(char *)((long)param_1 + 0x2df) < '\0') {
    __ZdlPv(param_1[0x59]);
  }
  func_0x00010951ec58(param_1 + 0x56,param_1[0x57]);
  func_0x00010ac44d24(param_1 + 0x54);
  func_0x00010ac44ccc(param_1 + 0x52);
  func_0x00010ac44ccc(param_1 + 0x50);
  FUN_10aa9d34c(param_1 + 0x4f,0);
  func_0x00010a004e5c(param_1 + 0x48);
  FUN_10a1e3810(param_1 + 0x3c);
  *puVar1 = &PTR_FUN_110c591a8;
  param_1[-0x13] = &PTR_FUN_110bb3968;
  param_1[-0x10] = &PTR_DAT_110bb3998;
  param_1[0x7e] = &PTR_DAT_110c59308;
  *param_1 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x38);
  func_0x00010a042c64(param_1 + 0x33);
  func_0x00010a0523dc(param_1 + 0x30);
  if (*(char *)(param_1 + 0x27) == '\x01') {
    func_0x00010a042d30(param_1 + 0x25);
  }
  *param_1 = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1);
  *puVar1 = &PTR_DAT_110c59358;
  param_1[-0x13] = &PTR_FUN_110b9f848;
  param_1[-0x10] = &PTR_DAT_110b9f878;
  param_1[0x7e] = &PTR_DAT_110c59428;
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



/* Entry: 10ac3d240; end: 10ac3d257;  */

void FUN_10ac3d240(long param_1)

{
  FUN_10ac418c0(param_1 + -0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3d258; end: 10ac3d25f;  */

undefined8 * FUN_10ac3d258(undefined8 *param_1)

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
  
  puVar1 = param_1 + -0x5b;
  *puVar1 = &PTR_DAT_110c55910;
  param_1[-0x59] = &PTR_FUN_110c55a68;
  param_1[-0x56] = &PTR_FUN_110c55a98;
  param_1[0x38] = &PTR_FUN_110c55ba8;
  param_1[-0x46] = &PTR_FUN_110c55af0;
  *param_1 = &PTR_FUN_110c55b10;
  param_1[1] = &PTR_FUN_110c55b48;
  lVar2 = param_1[0x37];
  param_1[0x37] = 0;
  if (lVar2 != 0) {
    func_0x00010ac4574c();
  }
  FUN_10ac3f800(param_1 + 0x2d);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  if (*(char *)((long)param_1 + 0x14f) < '\0') {
    __ZdlPv(param_1[0x27]);
  }
  func_0x00010ac44dc0(param_1 + 0x1d);
  FUN_10ac44e1c(param_1 + 0x1a);
  if (*(char *)((long)param_1 + 0xaf) < '\0') {
    __ZdlPv(param_1[0x13]);
  }
  func_0x00010951ec58(param_1 + 0x10,param_1[0x11]);
  func_0x00010ac44d24(param_1 + 0xe);
  func_0x00010ac44ccc(param_1 + 0xc);
  func_0x00010ac44ccc(param_1 + 10);
  FUN_10aa9d34c(param_1 + 9,0);
  func_0x00010a004e5c(param_1 + 2);
  FUN_10a1e3810(param_1 + -10);
  *puVar1 = &PTR_FUN_110c591a8;
  param_1[-0x59] = &PTR_FUN_110bb3968;
  param_1[-0x56] = &PTR_DAT_110bb3998;
  param_1[0x38] = &PTR_DAT_110c59308;
  param_1[-0x46] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + -0xe);
  func_0x00010a042c64(param_1 + -0x13);
  func_0x00010a0523dc(param_1 + -0x16);
  if (*(char *)(param_1 + -0x1f) == '\x01') {
    func_0x00010a042d30(param_1 + -0x21);
  }
  param_1[-0x46] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + -0x46);
  *puVar1 = &PTR_DAT_110c59358;
  param_1[-0x59] = &PTR_FUN_110b9f848;
  param_1[-0x56] = &PTR_DAT_110b9f878;
  param_1[0x38] = &PTR_DAT_110c59428;
  FUN_10a042dcc(param_1 + -0x48);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-0x59] = &PTR_DAT_110c60a88;
  param_1[-0x56] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + -0x50);
  puVar6 = (undefined8 *)param_1[-0x4f];
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
  plVar4 = param_1 + -0x51;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x58);
  if ((param_1[-0x49] != 0) && (lVar2 = *(long *)(param_1[-0x49] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)param_1 + -0x249) < '\0') {
    __ZdlPv(param_1[-0x4c]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[-0x52] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x56] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x55);
  param_1[-0x59] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x58);
  return puVar1;
}



/* Entry: 10ac3d260; end: 10ac3d277;  */

void FUN_10ac3d260(long param_1)

{
  FUN_10ac418c0(param_1 + -0x2d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3d278; end: 10ac3d27f;  */

undefined8 * FUN_10ac3d278(undefined8 *param_1)

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
  
  puVar1 = param_1 + -0x5c;
  *puVar1 = &PTR_DAT_110c55910;
  param_1[-0x5a] = &PTR_FUN_110c55a68;
  param_1[-0x57] = &PTR_FUN_110c55a98;
  param_1[0x37] = &PTR_FUN_110c55ba8;
  param_1[-0x47] = &PTR_FUN_110c55af0;
  param_1[-1] = &PTR_FUN_110c55b10;
  *param_1 = &PTR_FUN_110c55b48;
  lVar2 = param_1[0x36];
  param_1[0x36] = 0;
  if (lVar2 != 0) {
    func_0x00010ac4574c();
  }
  FUN_10ac3f800(param_1 + 0x2c);
  if (*(char *)((long)param_1 + 0x15f) < '\0') {
    __ZdlPv(param_1[0x29]);
  }
  if (*(char *)((long)param_1 + 0x147) < '\0') {
    __ZdlPv(param_1[0x26]);
  }
  func_0x00010ac44dc0(param_1 + 0x1c);
  FUN_10ac44e1c(param_1 + 0x19);
  if (*(char *)((long)param_1 + 0xa7) < '\0') {
    __ZdlPv(param_1[0x12]);
  }
  func_0x00010951ec58(param_1 + 0xf,param_1[0x10]);
  func_0x00010ac44d24(param_1 + 0xd);
  func_0x00010ac44ccc(param_1 + 0xb);
  func_0x00010ac44ccc(param_1 + 9);
  FUN_10aa9d34c(param_1 + 8,0);
  func_0x00010a004e5c(param_1 + 1);
  FUN_10a1e3810(param_1 + -0xb);
  *puVar1 = &PTR_FUN_110c591a8;
  param_1[-0x5a] = &PTR_FUN_110bb3968;
  param_1[-0x57] = &PTR_DAT_110bb3998;
  param_1[0x37] = &PTR_DAT_110c59308;
  param_1[-0x47] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + -0xf);
  func_0x00010a042c64(param_1 + -0x14);
  func_0x00010a0523dc(param_1 + -0x17);
  if (*(char *)(param_1 + -0x20) == '\x01') {
    func_0x00010a042d30(param_1 + -0x22);
  }
  param_1[-0x47] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + -0x47);
  *puVar1 = &PTR_DAT_110c59358;
  param_1[-0x5a] = &PTR_FUN_110b9f848;
  param_1[-0x57] = &PTR_DAT_110b9f878;
  param_1[0x37] = &PTR_DAT_110c59428;
  FUN_10a042dcc(param_1 + -0x49);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-0x5a] = &PTR_DAT_110c60a88;
  param_1[-0x57] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + -0x51);
  puVar6 = (undefined8 *)param_1[-0x50];
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
  plVar4 = param_1 + -0x52;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x59);
  if ((param_1[-0x4a] != 0) && (lVar2 = *(long *)(param_1[-0x4a] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)param_1 + -0x251) < '\0') {
    __ZdlPv(param_1[-0x4d]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[-0x53] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x57] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x56);
  param_1[-0x5a] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x59);
  return puVar1;
}



/* Entry: 10ac3d280; end: 10ac3d297;  */

void FUN_10ac3d280(long param_1)

{
  FUN_10ac418c0(param_1 + -0x2e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3d298; end: 10ac3d2a7;  */

undefined8 * FUN_10ac3d298(long *param_1)

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
  *puVar1 = &PTR_DAT_110c55910;
  puVar1[2] = &PTR_FUN_110c55a68;
  puVar1[5] = &PTR_FUN_110c55a98;
  puVar1[0x93] = &PTR_FUN_110c55ba8;
  puVar1[0x15] = &PTR_FUN_110c55af0;
  puVar1[0x5b] = &PTR_FUN_110c55b10;
  puVar1[0x5c] = &PTR_FUN_110c55b48;
  lVar2 = puVar1[0x92];
  puVar1[0x92] = 0;
  if (lVar2 != 0) {
    func_0x00010ac4574c();
  }
  FUN_10ac3f800(puVar1 + 0x88);
  if (*(char *)((long)puVar1 + 0x43f) < '\0') {
    __ZdlPv(puVar1[0x85]);
  }
  if (*(char *)((long)puVar1 + 0x427) < '\0') {
    __ZdlPv(puVar1[0x82]);
  }
  func_0x00010ac44dc0(puVar1 + 0x78);
  FUN_10ac44e1c(puVar1 + 0x75);
  if (*(char *)((long)puVar1 + 0x387) < '\0') {
    __ZdlPv(puVar1[0x6e]);
  }
  func_0x00010951ec58(puVar1 + 0x6b,puVar1[0x6c]);
  func_0x00010ac44d24(puVar1 + 0x69);
  func_0x00010ac44ccc(puVar1 + 0x67);
  func_0x00010ac44ccc(puVar1 + 0x65);
  FUN_10aa9d34c(puVar1 + 100,0);
  func_0x00010a004e5c(puVar1 + 0x5d);
  FUN_10a1e3810(puVar1 + 0x51);
  *puVar1 = &PTR_FUN_110c591a8;
  puVar1[2] = &PTR_FUN_110bb3968;
  puVar1[5] = &PTR_DAT_110bb3998;
  puVar1[0x93] = &PTR_DAT_110c59308;
  puVar1[0x15] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(puVar1 + 0x4d);
  func_0x00010a042c64(puVar1 + 0x48);
  func_0x00010a0523dc(puVar1 + 0x45);
  if (*(char *)(puVar1 + 0x3c) == '\x01') {
    func_0x00010a042d30(puVar1 + 0x3a);
  }
  puVar1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar1 + 0x15);
  *puVar1 = &PTR_DAT_110c59358;
  puVar1[2] = &PTR_FUN_110b9f848;
  puVar1[5] = &PTR_DAT_110b9f878;
  puVar1[0x93] = &PTR_DAT_110c59428;
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



/* Entry: 10ac3d2a8; end: 10ac3d2d7;  */

void FUN_10ac3d2a8(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10ac418c0((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10ac3d2d8; end: 10ac3d2df;  */

void FUN_10ac3d2d8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ac3d2dc);
  (*pcVar1)();
}



/* Entry: 10ac3d2e0; end: 10ac3d42b;  */

long * FUN_10ac3d2e0(long *param_1)

{
  long *plVar1;
  
  if (param_1 == (long *)0x0) {
    return (long *)0x2;
  }
  do {
    plVar1 = param_1;
    (**(code **)(*param_1 + 0x80))();
    if ((int)plVar1 != 2) {
      return plVar1;
    }
    param_1 = (long *)param_1[0x13];
  } while (param_1 != (long *)0x0);
  return (long *)0x2;
}



/* Entry: 10ac3d42c; end: 10ac3d453;  */

undefined4 FUN_10ac3d42c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x74);
}



/* Entry: 10ac3d454; end: 10ac3d48f;  */

void FUN_10ac3d454(long param_1)

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



/* Entry: 10ac3d490; end: 10ac3d4a7;  */

void FUN_10ac3d490(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ac3d494);
  (*pcVar1)();
}



/* Entry: 10ac3d4a8; end: 10ac3d937;  */

undefined8 * FUN_10ac3d4a8(undefined8 *param_1)

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
  
  *param_1 = &PTR_FUN_110c55e88;
  param_1[2] = &PTR_FUN_110c55f40;
  param_1[5] = &PTR_DAT_110c55f70;
  param_1[0x1b] = &PTR_DAT_110c55ff8;
  func_0x00010a3bd1cc(param_1 + 0x19);
  func_0x00010ac4673c(param_1 + 0x17);
  func_0x00010a3bef9c(param_1 + 0x15);
  *param_1 = &PTR_FUN_110c596d0;
  param_1[2] = &PTR_FUN_110c5f0c8;
  param_1[5] = &PTR_DAT_110c5f0f8;
  param_1[0x1b] = &PTR_DAT_110c597a0;
  FUN_10ac409b0(param_1 + 0x13);
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



/* Entry: 10ac3d938; end: 10ac3d947;  */

long FUN_10ac3d938(long param_1)

{
  return param_1 + 0xa8;
}



/* Entry: 10ac3d948; end: 10ac3daef;  */

undefined8 * FUN_10ac3d948(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c5eee8;
  func_0x00010a0428c0(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10ac3daf0; end: 10ac3daf7;  */

void FUN_10ac3daf0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ac3daf4);
  (*pcVar1)();
}



/* Entry: 10ac3daf8; end: 10ac3dbeb;  */

long * FUN_10ac3daf8(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (undefined8 *)0x0;
  FUN_10a37d18c();
  if (puVar2 == (undefined8 *)0x0) {
    uStack_30 = 0;
  }
  else {
    uStack_30 = *puVar2;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_10a0888e0(param_1,&uStack_30,&lStack_28,1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  plVar5 = param_1;
  do {
    if (plVar5 == (long *)0x0) {
FUN_10a9efd28:
      lVar4 = *(long *)(*param_1 + -0x18);
      lVar3 = *(long *)((long)param_1 + lVar4 + 0x10);
      if (lVar3 == 0) {
        plVar5 = (long *)&UNK_10f689e50;
        FUN_10a00946c();
        func_0x00010a34c8fc(plVar5 + 9);
        if (plVar5[7] != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        if (plVar5[5] != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        *plVar5 = (long)&PTR_DAT_110b17898;
        func_0x00010a004dac(plVar5 + 1);
        return plVar5;
      }
      lVar3 = *(long *)(lVar3 + 0x850);
      if (*(int *)((long)param_1 + lVar4 + 8) + 1U < *(uint *)(lVar3 + 0x2c)) {
        return (long *)(ulong)(*(uint *)(lVar3 + 0x30) <= *(int *)((long)param_1 + lVar4 + 0xc) + 1U
                              );
      }
      return (long *)0x1;
    }
    plVar1 = plVar5;
    (**(code **)(*plVar5 + 0x80))();
    if ((int)plVar1 != 2) {
      if ((int)plVar1 == 1) {
        return plVar1;
      }
      goto FUN_10a9efd28;
    }
    plVar5 = (long *)plVar5[0x13];
  } while( true );
}



/* Entry: 10ac3dbec; end: 10ac3dc0b;  */

undefined4 FUN_10ac3dbec(long param_1)

{
  return *(undefined4 *)(param_1 + 0x74);
}



/* Entry: 10ac3dc0c; end: 10ac3dcf7;  */

void FUN_10ac3dc0c(long param_1)

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



/* Entry: 10ac3dcf8; end: 10ac3dcfb;  */

undefined8 * FUN_10ac3dcf8(undefined8 *param_1)

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
  
  *param_1 = &PTR_FUN_110c56790;
  param_1[2] = &PTR_FUN_110c568c8;
  param_1[5] = &PTR_FUN_110c568f8;
  param_1[0x79] = &PTR_FUN_110c569c8;
  param_1[0x15] = &PTR_FUN_110c56950;
  param_1[0x51] = &PTR_FUN_110c56970;
  FUN_10a3f7eb4(param_1 + 0x74);
  func_0x000107c2826c(param_1 + 0x6f);
  __ZNSt3__15mutexD1Ev(param_1 + 0x67);
  func_0x00010a0810c8(param_1 + 0x65);
  FUN_10ac4a18c(param_1 + 99);
  func_0x00010a05248c(param_1 + 0x61);
  func_0x00010a29b7f0(param_1 + 0x5e);
  if (*(char *)((long)param_1 + 0x2e7) < '\0') {
    __ZdlPv(param_1[0x5a]);
  }
  func_0x00010a05248c(param_1 + 0x58);
  func_0x00010a0523dc(param_1 + 0x56);
  param_1[0x51] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[0x54] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x54] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x52);
  *param_1 = &PTR_FUN_110c59d88;
  param_1[2] = &PTR_FUN_110bb3968;
  param_1[5] = &PTR_DAT_110bb3998;
  param_1[0x79] = &PTR_DAT_110c59ee8;
  param_1[0x15] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x15);
  *param_1 = &PTR_DAT_110c59f38;
  param_1[2] = &PTR_FUN_110b9f848;
  param_1[5] = &PTR_DAT_110b9f878;
  param_1[0x79] = &PTR_DAT_110c5a008;
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



/* Entry: 10ac3dcfc; end: 10ac3dd0f;  */

void FUN_10ac3dcfc(void)

{
  func_0x00010ac41a58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3dd10; end: 10ac3dd23;  */

long FUN_10ac3dd10(long param_1)

{
  return param_1 + 0xa8;
}



/* Entry: 10ac3dd24; end: 10ac3dd3b;  */

void FUN_10ac3dd24(long param_1)

{
  func_0x00010ac41a58(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3dd3c; end: 10ac3dd43;  */

undefined8 * FUN_10ac3dd3c(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110c56790;
  param_1[-3] = &PTR_FUN_110c568c8;
  *param_1 = &PTR_FUN_110c568f8;
  param_1[0x74] = &PTR_FUN_110c569c8;
  param_1[0x10] = &PTR_FUN_110c56950;
  param_1[0x4c] = &PTR_FUN_110c56970;
  FUN_10a3f7eb4(param_1 + 0x6f);
  func_0x000107c2826c(param_1 + 0x6a);
  __ZNSt3__15mutexD1Ev(param_1 + 0x62);
  func_0x00010a0810c8(param_1 + 0x60);
  FUN_10ac4a18c(param_1 + 0x5e);
  func_0x00010a05248c(param_1 + 0x5c);
  func_0x00010a29b7f0(param_1 + 0x59);
  if (*(char *)((long)param_1 + 0x2bf) < '\0') {
    __ZdlPv(param_1[0x55]);
  }
  func_0x00010a05248c(param_1 + 0x53);
  func_0x00010a0523dc(param_1 + 0x51);
  param_1[0x4c] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[0x4f] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x4f] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x4d);
  *puVar1 = &PTR_FUN_110c59d88;
  param_1[-3] = &PTR_FUN_110bb3968;
  *param_1 = &PTR_DAT_110bb3998;
  param_1[0x74] = &PTR_DAT_110c59ee8;
  param_1[0x10] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x48);
  func_0x00010a042c64(param_1 + 0x43);
  func_0x00010a0523dc(param_1 + 0x40);
  if (*(char *)(param_1 + 0x37) == '\x01') {
    func_0x00010a042d30(param_1 + 0x35);
  }
  param_1[0x10] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x10);
  *puVar1 = &PTR_DAT_110c59f38;
  param_1[-3] = &PTR_FUN_110b9f848;
  *param_1 = &PTR_DAT_110b9f878;
  param_1[0x74] = &PTR_DAT_110c5a008;
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



/* Entry: 10ac3dd44; end: 10ac3dd5b;  */

void FUN_10ac3dd44(long param_1)

{
  func_0x00010ac41a58(param_1 + -0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3dd5c; end: 10ac3dd63;  */

undefined8 * FUN_10ac3dd5c(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110c56790;
  param_1[-0x13] = &PTR_FUN_110c568c8;
  param_1[-0x10] = &PTR_FUN_110c568f8;
  param_1[100] = &PTR_FUN_110c569c8;
  *param_1 = &PTR_FUN_110c56950;
  param_1[0x3c] = &PTR_FUN_110c56970;
  FUN_10a3f7eb4(param_1 + 0x5f);
  func_0x000107c2826c(param_1 + 0x5a);
  __ZNSt3__15mutexD1Ev(param_1 + 0x52);
  func_0x00010a0810c8(param_1 + 0x50);
  FUN_10ac4a18c(param_1 + 0x4e);
  func_0x00010a05248c(param_1 + 0x4c);
  func_0x00010a29b7f0(param_1 + 0x49);
  if (*(char *)((long)param_1 + 0x23f) < '\0') {
    __ZdlPv(param_1[0x45]);
  }
  func_0x00010a05248c(param_1 + 0x43);
  func_0x00010a0523dc(param_1 + 0x41);
  param_1[0x3c] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[0x3f] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x3f] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x3d);
  *puVar1 = &PTR_FUN_110c59d88;
  param_1[-0x13] = &PTR_FUN_110bb3968;
  param_1[-0x10] = &PTR_DAT_110bb3998;
  param_1[100] = &PTR_DAT_110c59ee8;
  *param_1 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x38);
  func_0x00010a042c64(param_1 + 0x33);
  func_0x00010a0523dc(param_1 + 0x30);
  if (*(char *)(param_1 + 0x27) == '\x01') {
    func_0x00010a042d30(param_1 + 0x25);
  }
  *param_1 = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1);
  *puVar1 = &PTR_DAT_110c59f38;
  param_1[-0x13] = &PTR_FUN_110b9f848;
  param_1[-0x10] = &PTR_DAT_110b9f878;
  param_1[100] = &PTR_DAT_110c5a008;
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



/* Entry: 10ac3dd64; end: 10ac3dd7b;  */

void FUN_10ac3dd64(long param_1)

{
  func_0x00010ac41a58(param_1 + -0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3dd7c; end: 10ac3dd83;  */

undefined8 * FUN_10ac3dd7c(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110c56790;
  param_1[-0x4f] = &PTR_FUN_110c568c8;
  param_1[-0x4c] = &PTR_FUN_110c568f8;
  param_1[0x28] = &PTR_FUN_110c569c8;
  param_1[-0x3c] = &PTR_FUN_110c56950;
  *param_1 = &PTR_FUN_110c56970;
  FUN_10a3f7eb4(param_1 + 0x23);
  func_0x000107c2826c(param_1 + 0x1e);
  __ZNSt3__15mutexD1Ev(param_1 + 0x16);
  func_0x00010a0810c8(param_1 + 0x14);
  FUN_10ac4a18c(param_1 + 0x12);
  func_0x00010a05248c(param_1 + 0x10);
  func_0x00010a29b7f0(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  func_0x00010a05248c(param_1 + 7);
  func_0x00010a0523dc(param_1 + 5);
  *param_1 = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[3] = 0;
  }
  func_0x00010a004e5c(param_1 + 1);
  *puVar1 = &PTR_FUN_110c59d88;
  param_1[-0x4f] = &PTR_FUN_110bb3968;
  param_1[-0x4c] = &PTR_DAT_110bb3998;
  param_1[0x28] = &PTR_DAT_110c59ee8;
  param_1[-0x3c] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + -4);
  func_0x00010a042c64(param_1 + -9);
  func_0x00010a0523dc(param_1 + -0xc);
  if (*(char *)(param_1 + -0x15) == '\x01') {
    func_0x00010a042d30(param_1 + -0x17);
  }
  param_1[-0x3c] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + -0x3c);
  *puVar1 = &PTR_DAT_110c59f38;
  param_1[-0x4f] = &PTR_FUN_110b9f848;
  param_1[-0x4c] = &PTR_DAT_110b9f878;
  param_1[0x28] = &PTR_DAT_110c5a008;
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



/* Entry: 10ac3dd84; end: 10ac3dd9b;  */

void FUN_10ac3dd84(long param_1)

{
  func_0x00010ac41a58(param_1 + -0x288);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3dd9c; end: 10ac3ddab;  */

undefined8 * FUN_10ac3dd9c(long *param_1)

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
  *puVar1 = &PTR_FUN_110c56790;
  puVar1[2] = &PTR_FUN_110c568c8;
  puVar1[5] = &PTR_FUN_110c568f8;
  puVar1[0x79] = &PTR_FUN_110c569c8;
  puVar1[0x15] = &PTR_FUN_110c56950;
  puVar1[0x51] = &PTR_FUN_110c56970;
  FUN_10a3f7eb4(puVar1 + 0x74);
  func_0x000107c2826c(puVar1 + 0x6f);
  __ZNSt3__15mutexD1Ev(puVar1 + 0x67);
  func_0x00010a0810c8(puVar1 + 0x65);
  FUN_10ac4a18c(puVar1 + 99);
  func_0x00010a05248c(puVar1 + 0x61);
  func_0x00010a29b7f0(puVar1 + 0x5e);
  if (*(char *)((long)puVar1 + 0x2e7) < '\0') {
    __ZdlPv(puVar1[0x5a]);
  }
  func_0x00010a05248c(puVar1 + 0x58);
  func_0x00010a0523dc(puVar1 + 0x56);
  puVar1[0x51] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)puVar1[0x54] != (undefined8 *)0x0) {
    *(undefined8 *)puVar1[0x54] = 0;
  }
  func_0x00010a004e5c(puVar1 + 0x52);
  *puVar1 = &PTR_FUN_110c59d88;
  puVar1[2] = &PTR_FUN_110bb3968;
  puVar1[5] = &PTR_DAT_110bb3998;
  puVar1[0x79] = &PTR_DAT_110c59ee8;
  puVar1[0x15] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(puVar1 + 0x4d);
  func_0x00010a042c64(puVar1 + 0x48);
  func_0x00010a0523dc(puVar1 + 0x45);
  if (*(char *)(puVar1 + 0x3c) == '\x01') {
    func_0x00010a042d30(puVar1 + 0x3a);
  }
  puVar1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar1 + 0x15);
  *puVar1 = &PTR_DAT_110c59f38;
  puVar1[2] = &PTR_FUN_110b9f848;
  puVar1[5] = &PTR_DAT_110b9f878;
  puVar1[0x79] = &PTR_DAT_110c5a008;
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



/* Entry: 10ac3ddac; end: 10ac3dddb;  */

void FUN_10ac3ddac(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  func_0x00010ac41a58((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10ac3dddc; end: 10ac3dddf;  */

undefined8 * FUN_10ac3dddc(undefined8 *param_1)

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
  
  *param_1 = &PTR_FUN_110c56aa8;
  param_1[2] = &PTR_FUN_110c56bf8;
  param_1[5] = &PTR_FUN_110c56c28;
  param_1[0x84] = &PTR_FUN_110c56d50;
  param_1[0x15] = &PTR_FUN_110c56c80;
  param_1[0x5b] = &PTR_FUN_110c56ca0;
  param_1[0x60] = &PTR_FUN_110c56cc8;
  param_1[100] = &PTR_FUN_110c56cf0;
  func_0x00010a042b54(param_1 + 0x82);
  func_0x00010a042b54(param_1 + 0x80);
  (**(code **)param_1[0x78])(param_1 + 0x78);
  func_0x00010a0523dc(param_1 + 0x70);
  FUN_10a060bec(param_1 + 0x6e);
  if (*(char *)((long)param_1 + 0x36f) < '\0') {
    __ZdlPv(param_1[0x6b]);
  }
  func_0x00010a004e5c(param_1 + 0x67);
  func_0x00010a004e5c(param_1 + 0x65);
  param_1[0x60] = &PTR_FUN_110b9fa98;
  if ((undefined8 *)param_1[99] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[99] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x61);
  FUN_10a00dc2c(param_1 + 0x5b);
  FUN_10a1e3810(param_1 + 0x51);
  *param_1 = &PTR_FUN_110c5a090;
  param_1[2] = &PTR_FUN_110bb3968;
  param_1[5] = &PTR_DAT_110bb3998;
  param_1[0x84] = &PTR_DAT_110c5a1f0;
  param_1[0x15] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x15);
  *param_1 = &PTR_DAT_110c5a240;
  param_1[2] = &PTR_FUN_110b9f848;
  param_1[5] = &PTR_DAT_110b9f878;
  param_1[0x84] = &PTR_DAT_110c5a310;
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



/* Entry: 10ac3dde0; end: 10ac3ddf3;  */

void FUN_10ac3dde0(void)

{
  func_0x00010ac41bc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3ddf4; end: 10ac3de03;  */

long FUN_10ac3ddf4(long param_1)

{
  return param_1 + 0xa8;
}



/* Entry: 10ac3de04; end: 10ac3de1b;  */

void FUN_10ac3de04(long param_1)

{
  func_0x00010ac41bc8(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3de1c; end: 10ac3de23;  */

undefined8 * FUN_10ac3de1c(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110c56aa8;
  param_1[-3] = &PTR_FUN_110c56bf8;
  *param_1 = &PTR_FUN_110c56c28;
  param_1[0x7f] = &PTR_FUN_110c56d50;
  param_1[0x10] = &PTR_FUN_110c56c80;
  param_1[0x56] = &PTR_FUN_110c56ca0;
  param_1[0x5b] = &PTR_FUN_110c56cc8;
  param_1[0x5f] = &PTR_FUN_110c56cf0;
  func_0x00010a042b54(param_1 + 0x7d);
  func_0x00010a042b54(param_1 + 0x7b);
  (**(code **)param_1[0x73])(param_1 + 0x73);
  func_0x00010a0523dc(param_1 + 0x6b);
  FUN_10a060bec(param_1 + 0x69);
  if (*(char *)((long)param_1 + 0x347) < '\0') {
    __ZdlPv(param_1[0x66]);
  }
  func_0x00010a004e5c(param_1 + 0x62);
  func_0x00010a004e5c(param_1 + 0x60);
  param_1[0x5b] = &PTR_FUN_110b9fa98;
  if ((undefined8 *)param_1[0x5e] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x5e] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x5c);
  FUN_10a00dc2c(param_1 + 0x56);
  FUN_10a1e3810(param_1 + 0x4c);
  *puVar1 = &PTR_FUN_110c5a090;
  param_1[-3] = &PTR_FUN_110bb3968;
  *param_1 = &PTR_DAT_110bb3998;
  param_1[0x7f] = &PTR_DAT_110c5a1f0;
  param_1[0x10] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x48);
  func_0x00010a042c64(param_1 + 0x43);
  func_0x00010a0523dc(param_1 + 0x40);
  if (*(char *)(param_1 + 0x37) == '\x01') {
    func_0x00010a042d30(param_1 + 0x35);
  }
  param_1[0x10] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x10);
  *puVar1 = &PTR_DAT_110c5a240;
  param_1[-3] = &PTR_FUN_110b9f848;
  *param_1 = &PTR_DAT_110b9f878;
  param_1[0x7f] = &PTR_DAT_110c5a310;
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



/* Entry: 10ac3de24; end: 10ac3de3b;  */

void FUN_10ac3de24(long param_1)

{
  func_0x00010ac41bc8(param_1 + -0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3de3c; end: 10ac3de43;  */

undefined8 * FUN_10ac3de3c(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110c56aa8;
  param_1[-0x13] = &PTR_FUN_110c56bf8;
  param_1[-0x10] = &PTR_FUN_110c56c28;
  param_1[0x6f] = &PTR_FUN_110c56d50;
  *param_1 = &PTR_FUN_110c56c80;
  param_1[0x46] = &PTR_FUN_110c56ca0;
  param_1[0x4b] = &PTR_FUN_110c56cc8;
  param_1[0x4f] = &PTR_FUN_110c56cf0;
  func_0x00010a042b54(param_1 + 0x6d);
  func_0x00010a042b54(param_1 + 0x6b);
  (**(code **)param_1[99])(param_1 + 99);
  func_0x00010a0523dc(param_1 + 0x5b);
  FUN_10a060bec(param_1 + 0x59);
  if (*(char *)((long)param_1 + 0x2c7) < '\0') {
    __ZdlPv(param_1[0x56]);
  }
  func_0x00010a004e5c(param_1 + 0x52);
  func_0x00010a004e5c(param_1 + 0x50);
  param_1[0x4b] = &PTR_FUN_110b9fa98;
  if ((undefined8 *)param_1[0x4e] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x4e] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x4c);
  FUN_10a00dc2c(param_1 + 0x46);
  FUN_10a1e3810(param_1 + 0x3c);
  *puVar1 = &PTR_FUN_110c5a090;
  param_1[-0x13] = &PTR_FUN_110bb3968;
  param_1[-0x10] = &PTR_DAT_110bb3998;
  param_1[0x6f] = &PTR_DAT_110c5a1f0;
  *param_1 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x38);
  func_0x00010a042c64(param_1 + 0x33);
  func_0x00010a0523dc(param_1 + 0x30);
  if (*(char *)(param_1 + 0x27) == '\x01') {
    func_0x00010a042d30(param_1 + 0x25);
  }
  *param_1 = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1);
  *puVar1 = &PTR_DAT_110c5a240;
  param_1[-0x13] = &PTR_FUN_110b9f848;
  param_1[-0x10] = &PTR_DAT_110b9f878;
  param_1[0x6f] = &PTR_DAT_110c5a310;
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



/* Entry: 10ac3de44; end: 10ac3de5b;  */

void FUN_10ac3de44(long param_1)

{
  func_0x00010ac41bc8(param_1 + -0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3de5c; end: 10ac3de63;  */

undefined8 * FUN_10ac3de5c(undefined8 *param_1)

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
  
  puVar1 = param_1 + -0x5b;
  *puVar1 = &PTR_FUN_110c56aa8;
  param_1[-0x59] = &PTR_FUN_110c56bf8;
  param_1[-0x56] = &PTR_FUN_110c56c28;
  param_1[0x29] = &PTR_FUN_110c56d50;
  param_1[-0x46] = &PTR_FUN_110c56c80;
  *param_1 = &PTR_FUN_110c56ca0;
  param_1[5] = &PTR_FUN_110c56cc8;
  param_1[9] = &PTR_FUN_110c56cf0;
  func_0x00010a042b54(param_1 + 0x27);
  func_0x00010a042b54(param_1 + 0x25);
  (**(code **)param_1[0x1d])(param_1 + 0x1d);
  func_0x00010a0523dc(param_1 + 0x15);
  FUN_10a060bec(param_1 + 0x13);
  if (*(char *)((long)param_1 + 0x97) < '\0') {
    __ZdlPv(param_1[0x10]);
  }
  func_0x00010a004e5c(param_1 + 0xc);
  func_0x00010a004e5c(param_1 + 10);
  param_1[5] = &PTR_FUN_110b9fa98;
  if ((undefined8 *)param_1[8] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[8] = 0;
  }
  func_0x00010a004e5c(param_1 + 6);
  FUN_10a00dc2c(param_1);
  FUN_10a1e3810(param_1 + -10);
  *puVar1 = &PTR_FUN_110c5a090;
  param_1[-0x59] = &PTR_FUN_110bb3968;
  param_1[-0x56] = &PTR_DAT_110bb3998;
  param_1[0x29] = &PTR_DAT_110c5a1f0;
  param_1[-0x46] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + -0xe);
  func_0x00010a042c64(param_1 + -0x13);
  func_0x00010a0523dc(param_1 + -0x16);
  if (*(char *)(param_1 + -0x1f) == '\x01') {
    func_0x00010a042d30(param_1 + -0x21);
  }
  param_1[-0x46] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + -0x46);
  *puVar1 = &PTR_DAT_110c5a240;
  param_1[-0x59] = &PTR_FUN_110b9f848;
  param_1[-0x56] = &PTR_DAT_110b9f878;
  param_1[0x29] = &PTR_DAT_110c5a310;
  FUN_10a042dcc(param_1 + -0x48);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-0x59] = &PTR_DAT_110c60a88;
  param_1[-0x56] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + -0x50);
  puVar6 = (undefined8 *)param_1[-0x4f];
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
  plVar4 = param_1 + -0x51;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x58);
  if ((param_1[-0x49] != 0) && (lVar2 = *(long *)(param_1[-0x49] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)param_1 + -0x249) < '\0') {
    __ZdlPv(param_1[-0x4c]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[-0x52] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x56] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x55);
  param_1[-0x59] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x58);
  return puVar1;
}



/* Entry: 10ac3de64; end: 10ac3de7b;  */

void FUN_10ac3de64(long param_1)

{
  func_0x00010ac41bc8(param_1 + -0x2d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3de7c; end: 10ac3de83;  */

undefined8 * FUN_10ac3de7c(undefined8 *param_1)

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
  
  puVar1 = param_1 + -0x60;
  *puVar1 = &PTR_FUN_110c56aa8;
  param_1[-0x5e] = &PTR_FUN_110c56bf8;
  param_1[-0x5b] = &PTR_FUN_110c56c28;
  param_1[0x24] = &PTR_FUN_110c56d50;
  param_1[-0x4b] = &PTR_FUN_110c56c80;
  param_1[-5] = &PTR_FUN_110c56ca0;
  *param_1 = &PTR_FUN_110c56cc8;
  param_1[4] = &PTR_FUN_110c56cf0;
  func_0x00010a042b54(param_1 + 0x22);
  func_0x00010a042b54(param_1 + 0x20);
  (**(code **)param_1[0x18])(param_1 + 0x18);
  func_0x00010a0523dc(param_1 + 0x10);
  FUN_10a060bec(param_1 + 0xe);
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  func_0x00010a004e5c(param_1 + 7);
  func_0x00010a004e5c(param_1 + 5);
  *param_1 = &PTR_FUN_110b9fa98;
  if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[3] = 0;
  }
  func_0x00010a004e5c(param_1 + 1);
  FUN_10a00dc2c(param_1 + -5);
  FUN_10a1e3810(param_1 + -0xf);
  *puVar1 = &PTR_FUN_110c5a090;
  param_1[-0x5e] = &PTR_FUN_110bb3968;
  param_1[-0x5b] = &PTR_DAT_110bb3998;
  param_1[0x24] = &PTR_DAT_110c5a1f0;
  param_1[-0x4b] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + -0x13);
  func_0x00010a042c64(param_1 + -0x18);
  func_0x00010a0523dc(param_1 + -0x1b);
  if (*(char *)(param_1 + -0x24) == '\x01') {
    func_0x00010a042d30(param_1 + -0x26);
  }
  param_1[-0x4b] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + -0x4b);
  *puVar1 = &PTR_DAT_110c5a240;
  param_1[-0x5e] = &PTR_FUN_110b9f848;
  param_1[-0x5b] = &PTR_DAT_110b9f878;
  param_1[0x24] = &PTR_DAT_110c5a310;
  FUN_10a042dcc(param_1 + -0x4d);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-0x5e] = &PTR_DAT_110c60a88;
  param_1[-0x5b] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + -0x55);
  puVar6 = (undefined8 *)param_1[-0x54];
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
  plVar4 = param_1 + -0x56;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x5d);
  if ((param_1[-0x4e] != 0) && (lVar2 = *(long *)(param_1[-0x4e] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)param_1 + -0x271) < '\0') {
    __ZdlPv(param_1[-0x51]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[-0x57] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x5b] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x5a);
  param_1[-0x5e] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x5d);
  return puVar1;
}



/* Entry: 10ac3de84; end: 10ac3de9b;  */

void FUN_10ac3de84(long param_1)

{
  func_0x00010ac41bc8(param_1 + -0x300);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3de9c; end: 10ac3dea3;  */

undefined8 * FUN_10ac3de9c(undefined8 *param_1)

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
  
  puVar1 = param_1 + -100;
  *puVar1 = &PTR_FUN_110c56aa8;
  param_1[-0x62] = &PTR_FUN_110c56bf8;
  param_1[-0x5f] = &PTR_FUN_110c56c28;
  param_1[0x20] = &PTR_FUN_110c56d50;
  param_1[-0x4f] = &PTR_FUN_110c56c80;
  param_1[-9] = &PTR_FUN_110c56ca0;
  param_1[-4] = &PTR_FUN_110c56cc8;
  *param_1 = &PTR_FUN_110c56cf0;
  func_0x00010a042b54(param_1 + 0x1e);
  func_0x00010a042b54(param_1 + 0x1c);
  (**(code **)param_1[0x14])(param_1 + 0x14);
  func_0x00010a0523dc(param_1 + 0xc);
  FUN_10a060bec(param_1 + 10);
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    __ZdlPv(param_1[7]);
  }
  func_0x00010a004e5c(param_1 + 3);
  func_0x00010a004e5c(param_1 + 1);
  param_1[-4] = &PTR_FUN_110b9fa98;
  if ((undefined8 *)param_1[-1] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[-1] = 0;
  }
  func_0x00010a004e5c(param_1 + -3);
  FUN_10a00dc2c(param_1 + -9);
  FUN_10a1e3810(param_1 + -0x13);
  *puVar1 = &PTR_FUN_110c5a090;
  param_1[-0x62] = &PTR_FUN_110bb3968;
  param_1[-0x5f] = &PTR_DAT_110bb3998;
  param_1[0x20] = &PTR_DAT_110c5a1f0;
  param_1[-0x4f] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + -0x17);
  func_0x00010a042c64(param_1 + -0x1c);
  func_0x00010a0523dc(param_1 + -0x1f);
  if (*(char *)(param_1 + -0x28) == '\x01') {
    func_0x00010a042d30(param_1 + -0x2a);
  }
  param_1[-0x4f] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + -0x4f);
  *puVar1 = &PTR_DAT_110c5a240;
  param_1[-0x62] = &PTR_FUN_110b9f848;
  param_1[-0x5f] = &PTR_DAT_110b9f878;
  param_1[0x20] = &PTR_DAT_110c5a310;
  FUN_10a042dcc(param_1 + -0x51);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-0x62] = &PTR_DAT_110c60a88;
  param_1[-0x5f] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + -0x59);
  puVar6 = (undefined8 *)param_1[-0x58];
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
  plVar4 = param_1 + -0x5a;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x61);
  if ((param_1[-0x52] != 0) && (lVar2 = *(long *)(param_1[-0x52] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)param_1 + -0x291) < '\0') {
    __ZdlPv(param_1[-0x55]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[-0x5b] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x5f] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x5e);
  param_1[-0x62] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x61);
  return puVar1;
}



/* Entry: 10ac3dea4; end: 10ac3debb;  */

void FUN_10ac3dea4(long param_1)

{
  func_0x00010ac41bc8(param_1 + -800);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3debc; end: 10ac3decb;  */

undefined8 * FUN_10ac3debc(long *param_1)

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
  *puVar1 = &PTR_FUN_110c56aa8;
  puVar1[2] = &PTR_FUN_110c56bf8;
  puVar1[5] = &PTR_FUN_110c56c28;
  puVar1[0x84] = &PTR_FUN_110c56d50;
  puVar1[0x15] = &PTR_FUN_110c56c80;
  puVar1[0x5b] = &PTR_FUN_110c56ca0;
  puVar1[0x60] = &PTR_FUN_110c56cc8;
  puVar1[100] = &PTR_FUN_110c56cf0;
  func_0x00010a042b54(puVar1 + 0x82);
  func_0x00010a042b54(puVar1 + 0x80);
  (**(code **)puVar1[0x78])(puVar1 + 0x78);
  func_0x00010a0523dc(puVar1 + 0x70);
  FUN_10a060bec(puVar1 + 0x6e);
  if (*(char *)((long)puVar1 + 0x36f) < '\0') {
    __ZdlPv(puVar1[0x6b]);
  }
  func_0x00010a004e5c(puVar1 + 0x67);
  func_0x00010a004e5c(puVar1 + 0x65);
  puVar1[0x60] = &PTR_FUN_110b9fa98;
  if ((undefined8 *)puVar1[99] != (undefined8 *)0x0) {
    *(undefined8 *)puVar1[99] = 0;
  }
  func_0x00010a004e5c(puVar1 + 0x61);
  FUN_10a00dc2c(puVar1 + 0x5b);
  FUN_10a1e3810(puVar1 + 0x51);
  *puVar1 = &PTR_FUN_110c5a090;
  puVar1[2] = &PTR_FUN_110bb3968;
  puVar1[5] = &PTR_DAT_110bb3998;
  puVar1[0x84] = &PTR_DAT_110c5a1f0;
  puVar1[0x15] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(puVar1 + 0x4d);
  func_0x00010a042c64(puVar1 + 0x48);
  func_0x00010a0523dc(puVar1 + 0x45);
  if (*(char *)(puVar1 + 0x3c) == '\x01') {
    func_0x00010a042d30(puVar1 + 0x3a);
  }
  puVar1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar1 + 0x15);
  *puVar1 = &PTR_DAT_110c5a240;
  puVar1[2] = &PTR_FUN_110b9f848;
  puVar1[5] = &PTR_DAT_110b9f878;
  puVar1[0x84] = &PTR_DAT_110c5a310;
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



/* Entry: 10ac3decc; end: 10ac3e087;  */

void FUN_10ac3decc(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  func_0x00010ac41bc8((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10ac3e088; end: 10ac3e09f;  */

long FUN_10ac3e088(long param_1)

{
  return param_1 + 0xa8;
}



/* Entry: 10ac3e0a0; end: 10ac3e3e7;  */

undefined8 * FUN_10ac3e0a0(undefined8 *param_1)

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
  *puVar2 = &PTR_FUN_110c5a360;
  *param_1 = &PTR_FUN_110bb3968;
  param_1[3] = &PTR_DAT_110bb3998;
  param_1[0x50] = &PTR_DAT_110c5a4c0;
  param_1[0x13] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4b);
  func_0x00010a042c64(param_1 + 0x46);
  func_0x00010a0523dc(param_1 + 0x43);
  if (*(char *)(param_1 + 0x3a) == '\x01') {
    func_0x00010a042d30(param_1 + 0x38);
  }
  param_1[0x13] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x13);
  param_1[-2] = &PTR_DAT_110c5a510;
  *param_1 = &PTR_FUN_110b9f848;
  param_1[3] = &PTR_DAT_110b9f878;
  param_1[0x50] = &PTR_DAT_110c5a5e0;
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



/* Entry: 10ac3e3e8; end: 10ac3e70f;  */

undefined8 * FUN_10ac3e3e8(undefined8 *param_1)

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
  *puVar2 = &PTR_FUN_110c5a360;
  param_1[-0x13] = &PTR_FUN_110bb3968;
  param_1[-0x10] = &PTR_DAT_110bb3998;
  param_1[0x3d] = &PTR_DAT_110c5a4c0;
  *param_1 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x38);
  func_0x00010a042c64(param_1 + 0x33);
  func_0x00010a0523dc(param_1 + 0x30);
  if (*(char *)(param_1 + 0x27) == '\x01') {
    func_0x00010a042d30(param_1 + 0x25);
  }
  *param_1 = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1);
  param_1[-0x15] = &PTR_DAT_110c5a510;
  param_1[-0x13] = &PTR_FUN_110b9f848;
  param_1[-0x10] = &PTR_DAT_110b9f878;
  param_1[0x3d] = &PTR_DAT_110c5a5e0;
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



/* Entry: 10ac3e710; end: 10ac3e723;  */

void FUN_10ac3e710(void)

{
  FUN_10ac22f6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3e724; end: 10ac3e777;  */

long FUN_10ac3e724(long param_1)

{
  return param_1 + 0xa8;
}



/* Entry: 10ac3e778; end: 10ac3e78f;  */

void FUN_10ac3e778(long param_1)

{
  FUN_10ac22f6c(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3e790; end: 10ac3e797;  */

undefined8 * FUN_10ac3e790(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110c56e90;
  param_1[-3] = &PTR_FUN_110c56fd0;
  *param_1 = &PTR_FUN_110c57000;
  param_1[0x6a] = &PTR_FUN_110c570f8;
  param_1[0x10] = &PTR_FUN_110c57058;
  param_1[0x4c] = &PTR_FUN_110c57080;
  if (*(char *)(param_1 + 0x69) == '\x01') {
    func_0x00010a136de4(param_1 + 0x66);
  }
  func_0x00010a09db64(param_1 + 0x53);
  func_0x00010ac4d77c(param_1 + 0x51);
  param_1[0x4c] = &PTR_DAT_110c5a918;
  param_1[0x6a] = &PTR_FUN_110c5a990;
  func_0x00010a004e5c(param_1 + 0x4f);
  func_0x00010a004e04(param_1 + 0x4d);
  *puVar1 = &PTR_FUN_110c5a648;
  param_1[-3] = &PTR_FUN_110bb3968;
  *param_1 = &PTR_DAT_110bb3998;
  param_1[0x6a] = &PTR_DAT_110c5a7a8;
  param_1[0x10] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x48);
  func_0x00010a042c64(param_1 + 0x43);
  func_0x00010a0523dc(param_1 + 0x40);
  if (*(char *)(param_1 + 0x37) == '\x01') {
    func_0x00010a042d30(param_1 + 0x35);
  }
  param_1[0x10] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x10);
  *puVar1 = &PTR_DAT_110c5a7f8;
  param_1[-3] = &PTR_FUN_110b9f848;
  *param_1 = &PTR_DAT_110b9f878;
  param_1[0x6a] = &PTR_DAT_110c5a8c8;
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



/* Entry: 10ac3e798; end: 10ac3e7af;  */

void FUN_10ac3e798(long param_1)

{
  FUN_10ac22f6c(param_1 + -0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3e7b0; end: 10ac3e7b7;  */

undefined8 * FUN_10ac3e7b0(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110c56e90;
  param_1[-0x13] = &PTR_FUN_110c56fd0;
  param_1[-0x10] = &PTR_FUN_110c57000;
  param_1[0x5a] = &PTR_FUN_110c570f8;
  *param_1 = &PTR_FUN_110c57058;
  param_1[0x3c] = &PTR_FUN_110c57080;
  if (*(char *)(param_1 + 0x59) == '\x01') {
    func_0x00010a136de4(param_1 + 0x56);
  }
  func_0x00010a09db64(param_1 + 0x43);
  func_0x00010ac4d77c(param_1 + 0x41);
  param_1[0x3c] = &PTR_DAT_110c5a918;
  param_1[0x5a] = &PTR_FUN_110c5a990;
  func_0x00010a004e5c(param_1 + 0x3f);
  func_0x00010a004e04(param_1 + 0x3d);
  *puVar1 = &PTR_FUN_110c5a648;
  param_1[-0x13] = &PTR_FUN_110bb3968;
  param_1[-0x10] = &PTR_DAT_110bb3998;
  param_1[0x5a] = &PTR_DAT_110c5a7a8;
  *param_1 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x38);
  func_0x00010a042c64(param_1 + 0x33);
  func_0x00010a0523dc(param_1 + 0x30);
  if (*(char *)(param_1 + 0x27) == '\x01') {
    func_0x00010a042d30(param_1 + 0x25);
  }
  *param_1 = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1);
  *puVar1 = &PTR_DAT_110c5a7f8;
  param_1[-0x13] = &PTR_FUN_110b9f848;
  param_1[-0x10] = &PTR_DAT_110b9f878;
  param_1[0x5a] = &PTR_DAT_110c5a8c8;
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



/* Entry: 10ac3e7b8; end: 10ac3e7cf;  */

void FUN_10ac3e7b8(long param_1)

{
  FUN_10ac22f6c(param_1 + -0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3e7d0; end: 10ac3e7d7;  */

undefined8 * FUN_10ac3e7d0(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110c56e90;
  param_1[-0x4f] = &PTR_FUN_110c56fd0;
  param_1[-0x4c] = &PTR_FUN_110c57000;
  param_1[0x1e] = &PTR_FUN_110c570f8;
  param_1[-0x3c] = &PTR_FUN_110c57058;
  *param_1 = &PTR_FUN_110c57080;
  if (*(char *)(param_1 + 0x1d) == '\x01') {
    func_0x00010a136de4(param_1 + 0x1a);
  }
  func_0x00010a09db64(param_1 + 7);
  func_0x00010ac4d77c(param_1 + 5);
  *param_1 = &PTR_DAT_110c5a918;
  param_1[0x1e] = &PTR_FUN_110c5a990;
  func_0x00010a004e5c(param_1 + 3);
  func_0x00010a004e04(param_1 + 1);
  *puVar1 = &PTR_FUN_110c5a648;
  param_1[-0x4f] = &PTR_FUN_110bb3968;
  param_1[-0x4c] = &PTR_DAT_110bb3998;
  param_1[0x1e] = &PTR_DAT_110c5a7a8;
  param_1[-0x3c] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + -4);
  func_0x00010a042c64(param_1 + -9);
  func_0x00010a0523dc(param_1 + -0xc);
  if (*(char *)(param_1 + -0x15) == '\x01') {
    func_0x00010a042d30(param_1 + -0x17);
  }
  param_1[-0x3c] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + -0x3c);
  *puVar1 = &PTR_DAT_110c5a7f8;
  param_1[-0x4f] = &PTR_FUN_110b9f848;
  param_1[-0x4c] = &PTR_DAT_110b9f878;
  param_1[0x1e] = &PTR_DAT_110c5a8c8;
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



/* Entry: 10ac3e7d8; end: 10ac3e7ef;  */

void FUN_10ac3e7d8(long param_1)

{
  FUN_10ac22f6c(param_1 + -0x288);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3e7f0; end: 10ac3e7ff;  */

undefined8 * FUN_10ac3e7f0(long *param_1)

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
  *puVar1 = &PTR_FUN_110c56e90;
  puVar1[2] = &PTR_FUN_110c56fd0;
  puVar1[5] = &PTR_FUN_110c57000;
  puVar1[0x6f] = &PTR_FUN_110c570f8;
  puVar1[0x15] = &PTR_FUN_110c57058;
  puVar1[0x51] = &PTR_FUN_110c57080;
  if (*(char *)(puVar1 + 0x6e) == '\x01') {
    func_0x00010a136de4(puVar1 + 0x6b);
  }
  func_0x00010a09db64(puVar1 + 0x58);
  func_0x00010ac4d77c(puVar1 + 0x56);
  puVar1[0x51] = &PTR_DAT_110c5a918;
  puVar1[0x6f] = &PTR_FUN_110c5a990;
  func_0x00010a004e5c(puVar1 + 0x54);
  func_0x00010a004e04(puVar1 + 0x52);
  *puVar1 = &PTR_FUN_110c5a648;
  puVar1[2] = &PTR_FUN_110bb3968;
  puVar1[5] = &PTR_DAT_110bb3998;
  puVar1[0x6f] = &PTR_DAT_110c5a7a8;
  puVar1[0x15] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(puVar1 + 0x4d);
  func_0x00010a042c64(puVar1 + 0x48);
  func_0x00010a0523dc(puVar1 + 0x45);
  if (*(char *)(puVar1 + 0x3c) == '\x01') {
    func_0x00010a042d30(puVar1 + 0x3a);
  }
  puVar1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar1 + 0x15);
  *puVar1 = &PTR_DAT_110c5a7f8;
  puVar1[2] = &PTR_FUN_110b9f848;
  puVar1[5] = &PTR_DAT_110b9f878;
  puVar1[0x6f] = &PTR_DAT_110c5a8c8;
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



/* Entry: 10ac3e800; end: 10ac3e82f;  */

void FUN_10ac3e800(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10ac22f6c((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10ac3e830; end: 10ac3e833;  */

void FUN_10ac3e830(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c57190;
  param_1[2] = &PTR_FUN_110c57260;
  param_1[5] = &PTR_FUN_110c57290;
  param_1[0x51] = &PTR_FUN_110c57318;
  if (param_1[0x4e] != 0) {
    param_1[0x4f] = param_1[0x4e];
    __ZdlPv();
  }
  if (param_1[0x4b] != 0) {
    param_1[0x4c] = param_1[0x4b];
    __ZdlPv();
  }
  if (param_1[0x48] != 0) {
    param_1[0x49] = param_1[0x48];
    __ZdlPv();
  }
  if (param_1[0x45] != 0) {
    param_1[0x46] = param_1[0x45];
    __ZdlPv();
  }
  FUN_10a0cfe2c(param_1 + 0x43);
  puStack_28 = param_1 + 0x3b;
  func_0x00010a190844(&puStack_28);
  if (param_1[0x37] != 0) {
    param_1[0x38] = param_1[0x37];
    __ZdlPv();
  }
  if (param_1[0x34] != 0) {
    param_1[0x35] = param_1[0x34];
    __ZdlPv();
  }
  if (param_1[0x31] != 0) {
    param_1[0x32] = param_1[0x31];
    __ZdlPv();
  }
  if (param_1[0x2e] != 0) {
    param_1[0x2f] = param_1[0x2e];
    __ZdlPv();
  }
  if (param_1[0x2b] != 0) {
    param_1[0x2c] = param_1[0x2b];
    __ZdlPv();
  }
  if (param_1[0x28] != 0) {
    param_1[0x29] = param_1[0x28];
    __ZdlPv();
  }
  if (param_1[0x25] != 0) {
    param_1[0x26] = param_1[0x25];
    __ZdlPv();
  }
  if (param_1[0x22] != 0) {
    param_1[0x23] = param_1[0x22];
    __ZdlPv();
  }
  FUN_10a3a75a8(param_1 + 0x1d);
  *param_1 = &PTR_FUN_110c5aa18;
  param_1[2] = &PTR_FUN_110c68030;
  param_1[5] = &PTR_DAT_110c68060;
  param_1[0x51] = &PTR_FUN_110c5ab18;
  FUN_10a0cfe2c(param_1 + 0x1b);
  func_0x00010a1980a8(param_1 + 0x18);
  *param_1 = &PTR_FUN_110c5acb0;
  param_1[2] = &PTR_FUN_110bb3b30;
  param_1[5] = &PTR_DAT_110bb3b60;
  param_1[0x51] = &PTR_DAT_110c5ad80;
  func_0x00010a1f9d14(param_1 + 0x13);
  FUN_10ac63308(param_1);
  return;
}



/* Entry: 10ac3e834; end: 10ac3e847;  */

void FUN_10ac3e834(void)

{
  func_0x00010ac41d50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3e848; end: 10ac3e84f;  */

void FUN_10ac3e848(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  puVar1 = param_1 + -2;
  *puVar1 = &PTR_FUN_110c57190;
  *param_1 = &PTR_FUN_110c57260;
  param_1[3] = &PTR_FUN_110c57290;
  param_1[0x4f] = &PTR_FUN_110c57318;
  if (param_1[0x4c] != 0) {
    param_1[0x4d] = param_1[0x4c];
    __ZdlPv();
  }
  if (param_1[0x49] != 0) {
    param_1[0x4a] = param_1[0x49];
    __ZdlPv();
  }
  if (param_1[0x46] != 0) {
    param_1[0x47] = param_1[0x46];
    __ZdlPv();
  }
  if (param_1[0x43] != 0) {
    param_1[0x44] = param_1[0x43];
    __ZdlPv();
  }
  FUN_10a0cfe2c(param_1 + 0x41);
  puStack_28 = param_1 + 0x39;
  func_0x00010a190844(&puStack_28);
  if (param_1[0x35] != 0) {
    param_1[0x36] = param_1[0x35];
    __ZdlPv();
  }
  if (param_1[0x32] != 0) {
    param_1[0x33] = param_1[0x32];
    __ZdlPv();
  }
  if (param_1[0x2f] != 0) {
    param_1[0x30] = param_1[0x2f];
    __ZdlPv();
  }
  if (param_1[0x2c] != 0) {
    param_1[0x2d] = param_1[0x2c];
    __ZdlPv();
  }
  if (param_1[0x29] != 0) {
    param_1[0x2a] = param_1[0x29];
    __ZdlPv();
  }
  if (param_1[0x26] != 0) {
    param_1[0x27] = param_1[0x26];
    __ZdlPv();
  }
  if (param_1[0x23] != 0) {
    param_1[0x24] = param_1[0x23];
    __ZdlPv();
  }
  if (param_1[0x20] != 0) {
    param_1[0x21] = param_1[0x20];
    __ZdlPv();
  }
  FUN_10a3a75a8(param_1 + 0x1b);
  *puVar1 = &PTR_FUN_110c5aa18;
  *param_1 = &PTR_FUN_110c68030;
  param_1[3] = &PTR_DAT_110c68060;
  param_1[0x4f] = &PTR_FUN_110c5ab18;
  FUN_10a0cfe2c(param_1 + 0x19);
  func_0x00010a1980a8(param_1 + 0x16);
  *puVar1 = &PTR_FUN_110c5acb0;
  *param_1 = &PTR_FUN_110bb3b30;
  param_1[3] = &PTR_DAT_110bb3b60;
  param_1[0x4f] = &PTR_DAT_110c5ad80;
  func_0x00010a1f9d14(param_1 + 0x11);
  FUN_10ac63308(puVar1);
  return;
}



/* Entry: 10ac3e850; end: 10ac3e867;  */

void FUN_10ac3e850(long param_1)

{
  func_0x00010ac41d50(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3e868; end: 10ac3e86f;  */

void FUN_10ac3e868(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  puVar1 = param_1 + -5;
  *puVar1 = &PTR_FUN_110c57190;
  param_1[-3] = &PTR_FUN_110c57260;
  *param_1 = &PTR_FUN_110c57290;
  param_1[0x4c] = &PTR_FUN_110c57318;
  if (param_1[0x49] != 0) {
    param_1[0x4a] = param_1[0x49];
    __ZdlPv();
  }
  if (param_1[0x46] != 0) {
    param_1[0x47] = param_1[0x46];
    __ZdlPv();
  }
  if (param_1[0x43] != 0) {
    param_1[0x44] = param_1[0x43];
    __ZdlPv();
  }
  if (param_1[0x40] != 0) {
    param_1[0x41] = param_1[0x40];
    __ZdlPv();
  }
  FUN_10a0cfe2c(param_1 + 0x3e);
  puStack_28 = param_1 + 0x36;
  func_0x00010a190844(&puStack_28);
  if (param_1[0x32] != 0) {
    param_1[0x33] = param_1[0x32];
    __ZdlPv();
  }
  if (param_1[0x2f] != 0) {
    param_1[0x30] = param_1[0x2f];
    __ZdlPv();
  }
  if (param_1[0x2c] != 0) {
    param_1[0x2d] = param_1[0x2c];
    __ZdlPv();
  }
  if (param_1[0x29] != 0) {
    param_1[0x2a] = param_1[0x29];
    __ZdlPv();
  }
  if (param_1[0x26] != 0) {
    param_1[0x27] = param_1[0x26];
    __ZdlPv();
  }
  if (param_1[0x23] != 0) {
    param_1[0x24] = param_1[0x23];
    __ZdlPv();
  }
  if (param_1[0x20] != 0) {
    param_1[0x21] = param_1[0x20];
    __ZdlPv();
  }
  if (param_1[0x1d] != 0) {
    param_1[0x1e] = param_1[0x1d];
    __ZdlPv();
  }
  FUN_10a3a75a8(param_1 + 0x18);
  *puVar1 = &PTR_FUN_110c5aa18;
  param_1[-3] = &PTR_FUN_110c68030;
  *param_1 = &PTR_DAT_110c68060;
  param_1[0x4c] = &PTR_FUN_110c5ab18;
  FUN_10a0cfe2c(param_1 + 0x16);
  func_0x00010a1980a8(param_1 + 0x13);
  *puVar1 = &PTR_FUN_110c5acb0;
  param_1[-3] = &PTR_FUN_110bb3b30;
  *param_1 = &PTR_DAT_110bb3b60;
  param_1[0x4c] = &PTR_DAT_110c5ad80;
  func_0x00010a1f9d14(param_1 + 0xe);
  FUN_10ac63308(puVar1);
  return;
}



/* Entry: 10ac3e870; end: 10ac3e887;  */

void FUN_10ac3e870(long param_1)

{
  func_0x00010ac41d50(param_1 + -0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3e888; end: 10ac3e897;  */

void FUN_10ac3e888(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_FUN_110c57190;
  puVar1[2] = &PTR_FUN_110c57260;
  puVar1[5] = &PTR_FUN_110c57290;
  puVar1[0x51] = &PTR_FUN_110c57318;
  if (puVar1[0x4e] != 0) {
    puVar1[0x4f] = puVar1[0x4e];
    __ZdlPv();
  }
  if (puVar1[0x4b] != 0) {
    puVar1[0x4c] = puVar1[0x4b];
    __ZdlPv();
  }
  if (puVar1[0x48] != 0) {
    puVar1[0x49] = puVar1[0x48];
    __ZdlPv();
  }
  if (puVar1[0x45] != 0) {
    puVar1[0x46] = puVar1[0x45];
    __ZdlPv();
  }
  FUN_10a0cfe2c(puVar1 + 0x43);
  puStack_28 = puVar1 + 0x3b;
  func_0x00010a190844(&puStack_28);
  if (puVar1[0x37] != 0) {
    puVar1[0x38] = puVar1[0x37];
    __ZdlPv();
  }
  if (puVar1[0x34] != 0) {
    puVar1[0x35] = puVar1[0x34];
    __ZdlPv();
  }
  if (puVar1[0x31] != 0) {
    puVar1[0x32] = puVar1[0x31];
    __ZdlPv();
  }
  if (puVar1[0x2e] != 0) {
    puVar1[0x2f] = puVar1[0x2e];
    __ZdlPv();
  }
  if (puVar1[0x2b] != 0) {
    puVar1[0x2c] = puVar1[0x2b];
    __ZdlPv();
  }
  if (puVar1[0x28] != 0) {
    puVar1[0x29] = puVar1[0x28];
    __ZdlPv();
  }
  if (puVar1[0x25] != 0) {
    puVar1[0x26] = puVar1[0x25];
    __ZdlPv();
  }
  if (puVar1[0x22] != 0) {
    puVar1[0x23] = puVar1[0x22];
    __ZdlPv();
  }
  FUN_10a3a75a8(puVar1 + 0x1d);
  *puVar1 = &PTR_FUN_110c5aa18;
  puVar1[2] = &PTR_FUN_110c68030;
  puVar1[5] = &PTR_DAT_110c68060;
  puVar1[0x51] = &PTR_FUN_110c5ab18;
  FUN_10a0cfe2c(puVar1 + 0x1b);
  func_0x00010a1980a8(puVar1 + 0x18);
  *puVar1 = &PTR_FUN_110c5acb0;
  puVar1[2] = &PTR_FUN_110bb3b30;
  puVar1[5] = &PTR_DAT_110bb3b60;
  puVar1[0x51] = &PTR_DAT_110c5ad80;
  func_0x00010a1f9d14(puVar1 + 0x13);
  FUN_10ac63308(puVar1);
  return;
}



/* Entry: 10ac3e898; end: 10ac3e8c7;  */

void FUN_10ac3e898(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  func_0x00010ac41d50((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10ac3e8c8; end: 10ac3e8cb;  */

undefined8 * FUN_10ac3e8c8(undefined8 *param_1)

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
  
  *param_1 = &PTR_FUN_110c57468;
  param_1[2] = &PTR_FUN_110c575a8;
  param_1[5] = &PTR_FUN_110c575d8;
  param_1[0x61] = &PTR_FUN_110c576d0;
  puVar4 = param_1 + 0x15;
  *puVar4 = &PTR_FUN_110c57630;
  param_1[0x51] = &PTR_FUN_110c57650;
  param_1[0x52] = &PTR_DAT_110c57678;
  func_0x00010a004e5c(param_1 + 0x5d);
  FUN_10a1fd534(param_1 + 0x5b);
  func_0x00010a05248c(param_1 + 0x59);
  func_0x00010a05248c(param_1 + 0x57);
  *param_1 = &PTR_FUN_110c5ade8;
  param_1[2] = &PTR_FUN_110bb3968;
  param_1[5] = &PTR_DAT_110bb3998;
  param_1[0x61] = &PTR_DAT_110c5af48;
  *puVar4 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar4);
  *param_1 = &PTR_DAT_110c5af98;
  param_1[2] = &PTR_FUN_110b9f848;
  param_1[5] = &PTR_DAT_110b9f878;
  param_1[0x61] = &PTR_DAT_110c5b068;
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



/* Entry: 10ac3e8cc; end: 10ac3e8df;  */

void FUN_10ac3e8cc(void)

{
  func_0x00010ac41ee8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3e8e0; end: 10ac3e903;  */

long FUN_10ac3e8e0(long param_1)

{
  return param_1 + 0xa8;
}



/* Entry: 10ac3e904; end: 10ac3e91b;  */

void FUN_10ac3e904(long param_1)

{
  func_0x00010ac41ee8(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3e91c; end: 10ac3e923;  */

undefined8 * FUN_10ac3e91c(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110c57468;
  param_1[-3] = &PTR_FUN_110c575a8;
  *param_1 = &PTR_FUN_110c575d8;
  param_1[0x5c] = &PTR_FUN_110c576d0;
  puVar5 = param_1 + 0x10;
  *puVar5 = &PTR_FUN_110c57630;
  param_1[0x4c] = &PTR_FUN_110c57650;
  param_1[0x4d] = &PTR_DAT_110c57678;
  func_0x00010a004e5c(param_1 + 0x58);
  FUN_10a1fd534(param_1 + 0x56);
  func_0x00010a05248c(param_1 + 0x54);
  func_0x00010a05248c(param_1 + 0x52);
  *puVar1 = &PTR_FUN_110c5ade8;
  param_1[-3] = &PTR_FUN_110bb3968;
  *param_1 = &PTR_DAT_110bb3998;
  param_1[0x5c] = &PTR_DAT_110c5af48;
  *puVar5 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x48);
  func_0x00010a042c64(param_1 + 0x43);
  func_0x00010a0523dc(param_1 + 0x40);
  if (*(char *)(param_1 + 0x37) == '\x01') {
    func_0x00010a042d30(param_1 + 0x35);
  }
  param_1[0x10] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar5);
  *puVar1 = &PTR_DAT_110c5af98;
  param_1[-3] = &PTR_FUN_110b9f848;
  *param_1 = &PTR_DAT_110b9f878;
  param_1[0x5c] = &PTR_DAT_110c5b068;
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



/* Entry: 10ac3e924; end: 10ac3e93b;  */

void FUN_10ac3e924(long param_1)

{
  func_0x00010ac41ee8(param_1 + -0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3e93c; end: 10ac3e943;  */

undefined8 * FUN_10ac3e93c(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110c57468;
  param_1[-0x13] = &PTR_FUN_110c575a8;
  param_1[-0x10] = &PTR_FUN_110c575d8;
  param_1[0x4c] = &PTR_FUN_110c576d0;
  *param_1 = &PTR_FUN_110c57630;
  param_1[0x3c] = &PTR_FUN_110c57650;
  param_1[0x3d] = &PTR_DAT_110c57678;
  func_0x00010a004e5c(param_1 + 0x48);
  FUN_10a1fd534(param_1 + 0x46);
  func_0x00010a05248c(param_1 + 0x44);
  func_0x00010a05248c(param_1 + 0x42);
  *puVar1 = &PTR_FUN_110c5ade8;
  param_1[-0x13] = &PTR_FUN_110bb3968;
  param_1[-0x10] = &PTR_DAT_110bb3998;
  param_1[0x4c] = &PTR_DAT_110c5af48;
  *param_1 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x38);
  func_0x00010a042c64(param_1 + 0x33);
  func_0x00010a0523dc(param_1 + 0x30);
  if (*(char *)(param_1 + 0x27) == '\x01') {
    func_0x00010a042d30(param_1 + 0x25);
  }
  *param_1 = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1);
  *puVar1 = &PTR_DAT_110c5af98;
  param_1[-0x13] = &PTR_FUN_110b9f848;
  param_1[-0x10] = &PTR_DAT_110b9f878;
  param_1[0x4c] = &PTR_DAT_110c5b068;
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



/* Entry: 10ac3e944; end: 10ac3e95b;  */

void FUN_10ac3e944(long param_1)

{
  func_0x00010ac41ee8(param_1 + -0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3e95c; end: 10ac3e963;  */

undefined8 * FUN_10ac3e95c(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110c57468;
  param_1[-0x4f] = &PTR_FUN_110c575a8;
  param_1[-0x4c] = &PTR_FUN_110c575d8;
  param_1[0x10] = &PTR_FUN_110c576d0;
  puVar5 = param_1 + -0x3c;
  *puVar5 = &PTR_FUN_110c57630;
  *param_1 = &PTR_FUN_110c57650;
  param_1[1] = &PTR_DAT_110c57678;
  func_0x00010a004e5c(param_1 + 0xc);
  FUN_10a1fd534(param_1 + 10);
  func_0x00010a05248c(param_1 + 8);
  func_0x00010a05248c(param_1 + 6);
  *puVar1 = &PTR_FUN_110c5ade8;
  param_1[-0x4f] = &PTR_FUN_110bb3968;
  param_1[-0x4c] = &PTR_DAT_110bb3998;
  param_1[0x10] = &PTR_DAT_110c5af48;
  *puVar5 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + -4);
  func_0x00010a042c64(param_1 + -9);
  func_0x00010a0523dc(param_1 + -0xc);
  if (*(char *)(param_1 + -0x15) == '\x01') {
    func_0x00010a042d30(param_1 + -0x17);
  }
  param_1[-0x3c] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar5);
  *puVar1 = &PTR_DAT_110c5af98;
  param_1[-0x4f] = &PTR_FUN_110b9f848;
  param_1[-0x4c] = &PTR_DAT_110b9f878;
  param_1[0x10] = &PTR_DAT_110c5b068;
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



/* Entry: 10ac3e964; end: 10ac3e97b;  */

void FUN_10ac3e964(long param_1)

{
  func_0x00010ac41ee8(param_1 + -0x288);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3e97c; end: 10ac3e98b;  */

long FUN_10ac3e97c(long param_1)

{
  return param_1 + 0x70;
}



/* Entry: 10ac3e98c; end: 10ac3e9a3;  */

void FUN_10ac3e98c(long param_1)

{
  func_0x00010ac41ee8(param_1 + -0x290);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3e9a4; end: 10ac3e9b3;  */

undefined8 * FUN_10ac3e9a4(long *param_1)

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
  *puVar1 = &PTR_FUN_110c57468;
  puVar1[2] = &PTR_FUN_110c575a8;
  puVar1[5] = &PTR_FUN_110c575d8;
  puVar1[0x61] = &PTR_FUN_110c576d0;
  puVar5 = puVar1 + 0x15;
  *puVar5 = &PTR_FUN_110c57630;
  puVar1[0x51] = &PTR_FUN_110c57650;
  puVar1[0x52] = &PTR_DAT_110c57678;
  func_0x00010a004e5c(puVar1 + 0x5d);
  FUN_10a1fd534(puVar1 + 0x5b);
  func_0x00010a05248c(puVar1 + 0x59);
  func_0x00010a05248c(puVar1 + 0x57);
  *puVar1 = &PTR_FUN_110c5ade8;
  puVar1[2] = &PTR_FUN_110bb3968;
  puVar1[5] = &PTR_DAT_110bb3998;
  puVar1[0x61] = &PTR_DAT_110c5af48;
  *puVar5 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(puVar1 + 0x4d);
  func_0x00010a042c64(puVar1 + 0x48);
  func_0x00010a0523dc(puVar1 + 0x45);
  if (*(char *)(puVar1 + 0x3c) == '\x01') {
    func_0x00010a042d30(puVar1 + 0x3a);
  }
  puVar1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar5);
  *puVar1 = &PTR_DAT_110c5af98;
  puVar1[2] = &PTR_FUN_110b9f848;
  puVar1[5] = &PTR_DAT_110b9f878;
  puVar1[0x61] = &PTR_DAT_110c5b068;
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



/* Entry: 10ac3e9b4; end: 10ac3e9e3;  */

void FUN_10ac3e9b4(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  func_0x00010ac41ee8((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10ac3e9e4; end: 10ac3e9f7;  */

long FUN_10ac3e9e4(long param_1)

{
  return param_1 + 0xa8;
}



/* Entry: 10ac3e9f8; end: 10ac3f09f;  */

undefined8 * FUN_10ac3e9f8(undefined8 *param_1)

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
  
  *param_1 = &PTR_FUN_110c66508;
  param_1[2] = &PTR_FUN_110c68030;
  param_1[5] = &PTR_DAT_110c68060;
  param_1[0x1d] = &PTR_FUN_110c66608;
  FUN_10a0cfe2c(param_1 + 0x1b);
  func_0x00010a1980a8(param_1 + 0x18);
  *param_1 = &PTR_FUN_110c667a0;
  param_1[2] = &PTR_FUN_110bb3b30;
  param_1[5] = &PTR_DAT_110bb3b60;
  param_1[0x1d] = &PTR_DAT_110c66870;
  func_0x00010a1f9d14(param_1 + 0x13);
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



/* Entry: 10ac3f0a0; end: 10ac3f0a3;  */

void FUN_10ac3f0a0(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c57dc8;
  param_1[2] = &PTR_FUN_110c57f08;
  param_1[5] = &PTR_FUN_110c57f38;
  param_1[0xe6] = &PTR_FUN_110c58030;
  param_1[0x15] = &PTR_FUN_110c57f90;
  param_1[0x51] = &PTR_FUN_110c57fb0;
  param_1[0x56] = &PTR_FUN_110c57fd8;
  func_0x00010a0536d4(param_1 + 0xe3);
  FUN_10a2e894c(param_1 + 0xe1);
  if (param_1[0xb9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0xb7] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puStack_28 = param_1 + 0xb3;
  FUN_10a0d4a18(&puStack_28);
  puStack_28 = param_1 + 0xb0;
  FUN_10a0d4a18(&puStack_28);
  puStack_28 = param_1 + 0xad;
  FUN_10a0d4a18(&puStack_28);
  puStack_28 = param_1 + 0xaa;
  FUN_10a0d4a18(&puStack_28);
  puStack_28 = param_1 + 0xa7;
  FUN_10a0d4a18(&puStack_28);
  FUN_10a0617bc(param_1 + 0xa5);
  FUN_10a0617bc(param_1 + 0xa3);
  FUN_10a0617bc(param_1 + 0xa1);
  FUN_10a0617bc(param_1 + 0x9f);
  FUN_10a0617bc(param_1 + 0x9d);
  func_0x00010a05248c(param_1 + 0x9b);
  func_0x00010a05248c(param_1 + 0x99);
  func_0x00010a061678(param_1 + 0x97);
  func_0x00010a0cfa6c(param_1 + 0x95);
  func_0x00010a0cfa6c(param_1 + 0x93);
  func_0x00010a0523dc(param_1 + 0x91);
  func_0x00010a05248c(param_1 + 0x8f);
  puStack_28 = param_1 + 0x8c;
  FUN_10a04a568(&puStack_28);
  func_0x00010a05248c(param_1 + 0x8a);
  func_0x00010a05248c(param_1 + 0x88);
  func_0x00010a05248c(param_1 + 0x86);
  puStack_28 = param_1 + 0x83;
  FUN_10a04a568(&puStack_28);
  func_0x00010a05248c(param_1 + 0x81);
  FUN_10a0617bc(param_1 + 0x7f);
  func_0x00010a05248c(param_1 + 0x7d);
  func_0x00010a05248c(param_1 + 0x7b);
  puStack_28 = param_1 + 0x78;
  FUN_10a04a568(&puStack_28);
  puStack_28 = param_1 + 0x75;
  FUN_10a0d4a18(&puStack_28);
  FUN_10a0617bc(param_1 + 0x73);
  FUN_10a0617bc(param_1 + 0x71);
  func_0x00010a05248c(param_1 + 0x6f);
  func_0x00010a05248c(param_1 + 0x6d);
  func_0x00010a05248c(param_1 + 0x6b);
  puStack_28 = param_1 + 0x67;
  FUN_10a044868(&puStack_28);
  puStack_28 = param_1 + 100;
  FUN_10a044868(&puStack_28);
  puStack_28 = param_1 + 0x5e;
  FUN_10a044868(&puStack_28);
  puStack_28 = param_1 + 0x5b;
  FUN_10a044868(&puStack_28);
  param_1[0x56] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[0x59] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x59] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x57);
  FUN_10a00dc2c(param_1 + 0x51);
  *param_1 = &PTR_FUN_110c5bbf8;
  param_1[2] = &PTR_FUN_110bb3968;
  param_1[5] = &PTR_DAT_110bb3998;
  param_1[0xe6] = &PTR_DAT_110c5bd58;
  param_1[0x15] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x15);
  *param_1 = &PTR_DAT_110c5bda8;
  param_1[2] = &PTR_FUN_110b9f848;
  param_1[5] = &PTR_DAT_110b9f878;
  param_1[0xe6] = &PTR_DAT_110c5be78;
  FUN_10a042dcc(param_1 + 0x13);
  FUN_10ac63308(param_1);
  return;
}



/* Entry: 10ac3f0a4; end: 10ac3f0b7;  */

void FUN_10ac3f0a4(void)

{
  func_0x00010ac42008();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3f0b8; end: 10ac3f0c7;  */

long FUN_10ac3f0b8(long param_1)

{
  return param_1 + 0xa8;
}



/* Entry: 10ac3f0c8; end: 10ac3f0df;  */

void FUN_10ac3f0c8(long param_1)

{
  func_0x00010ac42008(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3f0e0; end: 10ac3f0e7;  */

void FUN_10ac3f0e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  puVar1 = param_1 + -5;
  *puVar1 = &PTR_FUN_110c57dc8;
  param_1[-3] = &PTR_FUN_110c57f08;
  *param_1 = &PTR_FUN_110c57f38;
  param_1[0xe1] = &PTR_FUN_110c58030;
  param_1[0x10] = &PTR_FUN_110c57f90;
  param_1[0x4c] = &PTR_FUN_110c57fb0;
  param_1[0x51] = &PTR_FUN_110c57fd8;
  func_0x00010a0536d4(param_1 + 0xde);
  FUN_10a2e894c(param_1 + 0xdc);
  if (param_1[0xb4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0xb2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puStack_28 = param_1 + 0xae;
  FUN_10a0d4a18(&puStack_28);
  puStack_28 = param_1 + 0xab;
  FUN_10a0d4a18(&puStack_28);
  puStack_28 = param_1 + 0xa8;
  FUN_10a0d4a18(&puStack_28);
  puStack_28 = param_1 + 0xa5;
  FUN_10a0d4a18(&puStack_28);
  puStack_28 = param_1 + 0xa2;
  FUN_10a0d4a18(&puStack_28);
  FUN_10a0617bc(param_1 + 0xa0);
  FUN_10a0617bc(param_1 + 0x9e);
  FUN_10a0617bc(param_1 + 0x9c);
  FUN_10a0617bc(param_1 + 0x9a);
  FUN_10a0617bc(param_1 + 0x98);
  func_0x00010a05248c(param_1 + 0x96);
  func_0x00010a05248c(param_1 + 0x94);
  func_0x00010a061678(param_1 + 0x92);
  func_0x00010a0cfa6c(param_1 + 0x90);
  func_0x00010a0cfa6c(param_1 + 0x8e);
  func_0x00010a0523dc(param_1 + 0x8c);
  func_0x00010a05248c(param_1 + 0x8a);
  puStack_28 = param_1 + 0x87;
  FUN_10a04a568(&puStack_28);
  func_0x00010a05248c(param_1 + 0x85);
  func_0x00010a05248c(param_1 + 0x83);
  func_0x00010a05248c(param_1 + 0x81);
  puStack_28 = param_1 + 0x7e;
  FUN_10a04a568(&puStack_28);
  func_0x00010a05248c(param_1 + 0x7c);
  FUN_10a0617bc(param_1 + 0x7a);
  func_0x00010a05248c(param_1 + 0x78);
  func_0x00010a05248c(param_1 + 0x76);
  puStack_28 = param_1 + 0x73;
  FUN_10a04a568(&puStack_28);
  puStack_28 = param_1 + 0x70;
  FUN_10a0d4a18(&puStack_28);
  FUN_10a0617bc(param_1 + 0x6e);
  FUN_10a0617bc(param_1 + 0x6c);
  func_0x00010a05248c(param_1 + 0x6a);
  func_0x00010a05248c(param_1 + 0x68);
  func_0x00010a05248c(param_1 + 0x66);
  puStack_28 = param_1 + 0x62;
  FUN_10a044868(&puStack_28);
  puStack_28 = param_1 + 0x5f;
  FUN_10a044868(&puStack_28);
  puStack_28 = param_1 + 0x59;
  FUN_10a044868(&puStack_28);
  puStack_28 = param_1 + 0x56;
  FUN_10a044868(&puStack_28);
  param_1[0x51] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[0x54] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x54] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x52);
  FUN_10a00dc2c(param_1 + 0x4c);
  *puVar1 = &PTR_FUN_110c5bbf8;
  param_1[-3] = &PTR_FUN_110bb3968;
  *param_1 = &PTR_DAT_110bb3998;
  param_1[0xe1] = &PTR_DAT_110c5bd58;
  param_1[0x10] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x48);
  func_0x00010a042c64(param_1 + 0x43);
  func_0x00010a0523dc(param_1 + 0x40);
  if (*(char *)(param_1 + 0x37) == '\x01') {
    func_0x00010a042d30(param_1 + 0x35);
  }
  param_1[0x10] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x10);
  *puVar1 = &PTR_DAT_110c5bda8;
  param_1[-3] = &PTR_FUN_110b9f848;
  *param_1 = &PTR_DAT_110b9f878;
  param_1[0xe1] = &PTR_DAT_110c5be78;
  FUN_10a042dcc(param_1 + 0xe);
  FUN_10ac63308(puVar1);
  return;
}



/* Entry: 10ac3f0e8; end: 10ac3f0ff;  */

void FUN_10ac3f0e8(long param_1)

{
  func_0x00010ac42008(param_1 + -0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3f100; end: 10ac3f107;  */

void FUN_10ac3f100(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  puVar1 = param_1 + -0x15;
  *puVar1 = &PTR_FUN_110c57dc8;
  param_1[-0x13] = &PTR_FUN_110c57f08;
  param_1[-0x10] = &PTR_FUN_110c57f38;
  param_1[0xd1] = &PTR_FUN_110c58030;
  *param_1 = &PTR_FUN_110c57f90;
  param_1[0x3c] = &PTR_FUN_110c57fb0;
  param_1[0x41] = &PTR_FUN_110c57fd8;
  func_0x00010a0536d4(param_1 + 0xce);
  FUN_10a2e894c(param_1 + 0xcc);
  if (param_1[0xa4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0xa2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puStack_28 = param_1 + 0x9e;
  FUN_10a0d4a18(&puStack_28);
  puStack_28 = param_1 + 0x9b;
  FUN_10a0d4a18(&puStack_28);
  puStack_28 = param_1 + 0x98;
  FUN_10a0d4a18(&puStack_28);
  puStack_28 = param_1 + 0x95;
  FUN_10a0d4a18(&puStack_28);
  puStack_28 = param_1 + 0x92;
  FUN_10a0d4a18(&puStack_28);
  FUN_10a0617bc(param_1 + 0x90);
  FUN_10a0617bc(param_1 + 0x8e);
  FUN_10a0617bc(param_1 + 0x8c);
  FUN_10a0617bc(param_1 + 0x8a);
  FUN_10a0617bc(param_1 + 0x88);
  func_0x00010a05248c(param_1 + 0x86);
  func_0x00010a05248c(param_1 + 0x84);
  func_0x00010a061678(param_1 + 0x82);
  func_0x00010a0cfa6c(param_1 + 0x80);
  func_0x00010a0cfa6c(param_1 + 0x7e);
  func_0x00010a0523dc(param_1 + 0x7c);
  func_0x00010a05248c(param_1 + 0x7a);
  puStack_28 = param_1 + 0x77;
  FUN_10a04a568(&puStack_28);
  func_0x00010a05248c(param_1 + 0x75);
  func_0x00010a05248c(param_1 + 0x73);
  func_0x00010a05248c(param_1 + 0x71);
  puStack_28 = param_1 + 0x6e;
  FUN_10a04a568(&puStack_28);
  func_0x00010a05248c(param_1 + 0x6c);
  FUN_10a0617bc(param_1 + 0x6a);
  func_0x00010a05248c(param_1 + 0x68);
  func_0x00010a05248c(param_1 + 0x66);
  puStack_28 = param_1 + 99;
  FUN_10a04a568(&puStack_28);
  puStack_28 = param_1 + 0x60;
  FUN_10a0d4a18(&puStack_28);
  FUN_10a0617bc(param_1 + 0x5e);
  FUN_10a0617bc(param_1 + 0x5c);
  func_0x00010a05248c(param_1 + 0x5a);
  func_0x00010a05248c(param_1 + 0x58);
  func_0x00010a05248c(param_1 + 0x56);
  puStack_28 = param_1 + 0x52;
  FUN_10a044868(&puStack_28);
  puStack_28 = param_1 + 0x4f;
  FUN_10a044868(&puStack_28);
  puStack_28 = param_1 + 0x49;
  FUN_10a044868(&puStack_28);
  puStack_28 = param_1 + 0x46;
  FUN_10a044868(&puStack_28);
  param_1[0x41] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[0x44] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x44] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x42);
  FUN_10a00dc2c(param_1 + 0x3c);
  *puVar1 = &PTR_FUN_110c5bbf8;
  param_1[-0x13] = &PTR_FUN_110bb3968;
  param_1[-0x10] = &PTR_DAT_110bb3998;
  param_1[0xd1] = &PTR_DAT_110c5bd58;
  *param_1 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x38);
  func_0x00010a042c64(param_1 + 0x33);
  func_0x00010a0523dc(param_1 + 0x30);
  if (*(char *)(param_1 + 0x27) == '\x01') {
    func_0x00010a042d30(param_1 + 0x25);
  }
  *param_1 = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1);
  *puVar1 = &PTR_DAT_110c5bda8;
  param_1[-0x13] = &PTR_FUN_110b9f848;
  param_1[-0x10] = &PTR_DAT_110b9f878;
  param_1[0xd1] = &PTR_DAT_110c5be78;
  FUN_10a042dcc(param_1 + -2);
  FUN_10ac63308(puVar1);
  return;
}



/* Entry: 10ac3f108; end: 10ac3f11f;  */

void FUN_10ac3f108(long param_1)

{
  func_0x00010ac42008(param_1 + -0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3f120; end: 10ac3f127;  */

void FUN_10ac3f120(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  puVar1 = param_1 + -0x51;
  *puVar1 = &PTR_FUN_110c57dc8;
  param_1[-0x4f] = &PTR_FUN_110c57f08;
  param_1[-0x4c] = &PTR_FUN_110c57f38;
  param_1[0x95] = &PTR_FUN_110c58030;
  param_1[-0x3c] = &PTR_FUN_110c57f90;
  *param_1 = &PTR_FUN_110c57fb0;
  param_1[5] = &PTR_FUN_110c57fd8;
  func_0x00010a0536d4(param_1 + 0x92);
  FUN_10a2e894c(param_1 + 0x90);
  if (param_1[0x68] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x66] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puStack_28 = param_1 + 0x62;
  FUN_10a0d4a18(&puStack_28);
  puStack_28 = param_1 + 0x5f;
  FUN_10a0d4a18(&puStack_28);
  puStack_28 = param_1 + 0x5c;
  FUN_10a0d4a18(&puStack_28);
  puStack_28 = param_1 + 0x59;
  FUN_10a0d4a18(&puStack_28);
  puStack_28 = param_1 + 0x56;
  FUN_10a0d4a18(&puStack_28);
  FUN_10a0617bc(param_1 + 0x54);
  FUN_10a0617bc(param_1 + 0x52);
  FUN_10a0617bc(param_1 + 0x50);
  FUN_10a0617bc(param_1 + 0x4e);
  FUN_10a0617bc(param_1 + 0x4c);
  func_0x00010a05248c(param_1 + 0x4a);
  func_0x00010a05248c(param_1 + 0x48);
  func_0x00010a061678(param_1 + 0x46);
  func_0x00010a0cfa6c(param_1 + 0x44);
  func_0x00010a0cfa6c(param_1 + 0x42);
  func_0x00010a0523dc(param_1 + 0x40);
  func_0x00010a05248c(param_1 + 0x3e);
  puStack_28 = param_1 + 0x3b;
  FUN_10a04a568(&puStack_28);
  func_0x00010a05248c(param_1 + 0x39);
  func_0x00010a05248c(param_1 + 0x37);
  func_0x00010a05248c(param_1 + 0x35);
  puStack_28 = param_1 + 0x32;
  FUN_10a04a568(&puStack_28);
  func_0x00010a05248c(param_1 + 0x30);
  FUN_10a0617bc(param_1 + 0x2e);
  func_0x00010a05248c(param_1 + 0x2c);
  func_0x00010a05248c(param_1 + 0x2a);
  puStack_28 = param_1 + 0x27;
  FUN_10a04a568(&puStack_28);
  puStack_28 = param_1 + 0x24;
  FUN_10a0d4a18(&puStack_28);
  FUN_10a0617bc(param_1 + 0x22);
  FUN_10a0617bc(param_1 + 0x20);
  func_0x00010a05248c(param_1 + 0x1e);
  func_0x00010a05248c(param_1 + 0x1c);
  func_0x00010a05248c(param_1 + 0x1a);
  puStack_28 = param_1 + 0x16;
  FUN_10a044868(&puStack_28);
  puStack_28 = param_1 + 0x13;
  FUN_10a044868(&puStack_28);
  puStack_28 = param_1 + 0xd;
  FUN_10a044868(&puStack_28);
  puStack_28 = param_1 + 10;
  FUN_10a044868(&puStack_28);
  param_1[5] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[8] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[8] = 0;
  }
  func_0x00010a004e5c(param_1 + 6);
  FUN_10a00dc2c(param_1);
  *puVar1 = &PTR_FUN_110c5bbf8;
  param_1[-0x4f] = &PTR_FUN_110bb3968;
  param_1[-0x4c] = &PTR_DAT_110bb3998;
  param_1[0x95] = &PTR_DAT_110c5bd58;
  param_1[-0x3c] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + -4);
  func_0x00010a042c64(param_1 + -9);
  func_0x00010a0523dc(param_1 + -0xc);
  if (*(char *)(param_1 + -0x15) == '\x01') {
    func_0x00010a042d30(param_1 + -0x17);
  }
  param_1[-0x3c] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + -0x3c);
  *puVar1 = &PTR_DAT_110c5bda8;
  param_1[-0x4f] = &PTR_FUN_110b9f848;
  param_1[-0x4c] = &PTR_DAT_110b9f878;
  param_1[0x95] = &PTR_DAT_110c5be78;
  FUN_10a042dcc(param_1 + -0x3e);
  FUN_10ac63308(puVar1);
  return;
}



/* Entry: 10ac3f128; end: 10ac3f13f;  */

void FUN_10ac3f128(long param_1)

{
  func_0x00010ac42008(param_1 + -0x288);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3f140; end: 10ac3f147;  */

void FUN_10ac3f140(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  puVar1 = param_1 + -0x56;
  *puVar1 = &PTR_FUN_110c57dc8;
  param_1[-0x54] = &PTR_FUN_110c57f08;
  param_1[-0x51] = &PTR_FUN_110c57f38;
  param_1[0x90] = &PTR_FUN_110c58030;
  param_1[-0x41] = &PTR_FUN_110c57f90;
  param_1[-5] = &PTR_FUN_110c57fb0;
  *param_1 = &PTR_FUN_110c57fd8;
  func_0x00010a0536d4(param_1 + 0x8d);
  FUN_10a2e894c(param_1 + 0x8b);
  if (param_1[99] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x61] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puStack_28 = param_1 + 0x5d;
  FUN_10a0d4a18(&puStack_28);
  puStack_28 = param_1 + 0x5a;
  FUN_10a0d4a18(&puStack_28);
  puStack_28 = param_1 + 0x57;
  FUN_10a0d4a18(&puStack_28);
  puStack_28 = param_1 + 0x54;
  FUN_10a0d4a18(&puStack_28);
  puStack_28 = param_1 + 0x51;
  FUN_10a0d4a18(&puStack_28);
  FUN_10a0617bc(param_1 + 0x4f);
  FUN_10a0617bc(param_1 + 0x4d);
  FUN_10a0617bc(param_1 + 0x4b);
  FUN_10a0617bc(param_1 + 0x49);
  FUN_10a0617bc(param_1 + 0x47);
  func_0x00010a05248c(param_1 + 0x45);
  func_0x00010a05248c(param_1 + 0x43);
  func_0x00010a061678(param_1 + 0x41);
  func_0x00010a0cfa6c(param_1 + 0x3f);
  func_0x00010a0cfa6c(param_1 + 0x3d);
  func_0x00010a0523dc(param_1 + 0x3b);
  func_0x00010a05248c(param_1 + 0x39);
  puStack_28 = param_1 + 0x36;
  FUN_10a04a568(&puStack_28);
  func_0x00010a05248c(param_1 + 0x34);
  func_0x00010a05248c(param_1 + 0x32);
  func_0x00010a05248c(param_1 + 0x30);
  puStack_28 = param_1 + 0x2d;
  FUN_10a04a568(&puStack_28);
  func_0x00010a05248c(param_1 + 0x2b);
  FUN_10a0617bc(param_1 + 0x29);
  func_0x00010a05248c(param_1 + 0x27);
  func_0x00010a05248c(param_1 + 0x25);
  puStack_28 = param_1 + 0x22;
  FUN_10a04a568(&puStack_28);
  puStack_28 = param_1 + 0x1f;
  FUN_10a0d4a18(&puStack_28);
  FUN_10a0617bc(param_1 + 0x1d);
  FUN_10a0617bc(param_1 + 0x1b);
  func_0x00010a05248c(param_1 + 0x19);
  func_0x00010a05248c(param_1 + 0x17);
  func_0x00010a05248c(param_1 + 0x15);
  puStack_28 = param_1 + 0x11;
  FUN_10a044868(&puStack_28);
  puStack_28 = param_1 + 0xe;
  FUN_10a044868(&puStack_28);
  puStack_28 = param_1 + 8;
  FUN_10a044868(&puStack_28);
  puStack_28 = param_1 + 5;
  FUN_10a044868(&puStack_28);
  *param_1 = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[3] = 0;
  }
  func_0x00010a004e5c(param_1 + 1);
  FUN_10a00dc2c(param_1 + -5);
  *puVar1 = &PTR_FUN_110c5bbf8;
  param_1[-0x54] = &PTR_FUN_110bb3968;
  param_1[-0x51] = &PTR_DAT_110bb3998;
  param_1[0x90] = &PTR_DAT_110c5bd58;
  param_1[-0x41] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + -9);
  func_0x00010a042c64(param_1 + -0xe);
  func_0x00010a0523dc(param_1 + -0x11);
  if (*(char *)(param_1 + -0x1a) == '\x01') {
    func_0x00010a042d30(param_1 + -0x1c);
  }
  param_1[-0x41] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + -0x41);
  *puVar1 = &PTR_DAT_110c5bda8;
  param_1[-0x54] = &PTR_FUN_110b9f848;
  param_1[-0x51] = &PTR_DAT_110b9f878;
  param_1[0x90] = &PTR_DAT_110c5be78;
  FUN_10a042dcc(param_1 + -0x43);
  FUN_10ac63308(puVar1);
  return;
}



/* Entry: 10ac3f148; end: 10ac3f15f;  */

void FUN_10ac3f148(long param_1)

{
  func_0x00010ac42008(param_1 + -0x2b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac3f160; end: 10ac3f16f;  */

void FUN_10ac3f160(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_FUN_110c57dc8;
  puVar1[2] = &PTR_FUN_110c57f08;
  puVar1[5] = &PTR_FUN_110c57f38;
  puVar1[0xe6] = &PTR_FUN_110c58030;
  puVar1[0x15] = &PTR_FUN_110c57f90;
  puVar1[0x51] = &PTR_FUN_110c57fb0;
  puVar1[0x56] = &PTR_FUN_110c57fd8;
  func_0x00010a0536d4(puVar1 + 0xe3);
  FUN_10a2e894c(puVar1 + 0xe1);
  if (puVar1[0xb9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (puVar1[0xb7] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puStack_28 = puVar1 + 0xb3;
  FUN_10a0d4a18(&puStack_28);
  puStack_28 = puVar1 + 0xb0;
  FUN_10a0d4a18(&puStack_28);
  puStack_28 = puVar1 + 0xad;
  FUN_10a0d4a18(&puStack_28);
  puStack_28 = puVar1 + 0xaa;
  FUN_10a0d4a18(&puStack_28);
  puStack_28 = puVar1 + 0xa7;
  FUN_10a0d4a18(&puStack_28);
  FUN_10a0617bc(puVar1 + 0xa5);
  FUN_10a0617bc(puVar1 + 0xa3);
  FUN_10a0617bc(puVar1 + 0xa1);
  FUN_10a0617bc(puVar1 + 0x9f);
  FUN_10a0617bc(puVar1 + 0x9d);
  func_0x00010a05248c(puVar1 + 0x9b);
  func_0x00010a05248c(puVar1 + 0x99);
  func_0x00010a061678(puVar1 + 0x97);
  func_0x00010a0cfa6c(puVar1 + 0x95);
  func_0x00010a0cfa6c(puVar1 + 0x93);
  func_0x00010a0523dc(puVar1 + 0x91);
  func_0x00010a05248c(puVar1 + 0x8f);
  puStack_28 = puVar1 + 0x8c;
  FUN_10a04a568(&puStack_28);
  func_0x00010a05248c(puVar1 + 0x8a);
  func_0x00010a05248c(puVar1 + 0x88);
  func_0x00010a05248c(puVar1 + 0x86);
  puStack_28 = puVar1 + 0x83;
  FUN_10a04a568(&puStack_28);
  func_0x00010a05248c(puVar1 + 0x81);
  FUN_10a0617bc(puVar1 + 0x7f);
  func_0x00010a05248c(puVar1 + 0x7d);
  func_0x00010a05248c(puVar1 + 0x7b);
  puStack_28 = puVar1 + 0x78;
  FUN_10a04a568(&puStack_28);
  puStack_28 = puVar1 + 0x75;
  FUN_10a0d4a18(&puStack_28);
  FUN_10a0617bc(puVar1 + 0x73);
  FUN_10a0617bc(puVar1 + 0x71);
  func_0x00010a05248c(puVar1 + 0x6f);
  func_0x00010a05248c(puVar1 + 0x6d);
  func_0x00010a05248c(puVar1 + 0x6b);
  puStack_28 = puVar1 + 0x67;
  FUN_10a044868(&puStack_28);
  puStack_28 = puVar1 + 100;
  FUN_10a044868(&puStack_28);
  puStack_28 = puVar1 + 0x5e;
  FUN_10a044868(&puStack_28);
  puStack_28 = puVar1 + 0x5b;
  FUN_10a044868(&puStack_28);
  puVar1[0x56] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)puVar1[0x59] != (undefined8 *)0x0) {
    *(undefined8 *)puVar1[0x59] = 0;
  }
  func_0x00010a004e5c(puVar1 + 0x57);
  FUN_10a00dc2c(puVar1 + 0x51);
  *puVar1 = &PTR_FUN_110c5bbf8;
  puVar1[2] = &PTR_FUN_110bb3968;
  puVar1[5] = &PTR_DAT_110bb3998;
  puVar1[0xe6] = &PTR_DAT_110c5bd58;
  puVar1[0x15] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(puVar1 + 0x4d);
  func_0x00010a042c64(puVar1 + 0x48);
  func_0x00010a0523dc(puVar1 + 0x45);
  if (*(char *)(puVar1 + 0x3c) == '\x01') {
    func_0x00010a042d30(puVar1 + 0x3a);
  }
  puVar1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar1 + 0x15);
  *puVar1 = &PTR_DAT_110c5bda8;
  puVar1[2] = &PTR_FUN_110b9f848;
  puVar1[5] = &PTR_DAT_110b9f878;
  puVar1[0xe6] = &PTR_DAT_110c5be78;
  FUN_10a042dcc(puVar1 + 0x13);
  FUN_10ac63308(puVar1);
  return;
}



/* Entry: 10ac3f170; end: 10ac3f19f;  */

void FUN_10ac3f170(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  func_0x00010ac42008((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}


