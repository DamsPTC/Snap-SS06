/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a57408c; end: 10a574107;  */

undefined8 * FUN_10a57408c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x140;
  __Znwm();
  FUN_10ac7050c();
  FUN_10a1e394c(puVar1 + 0x1e);
  *puVar1 = &PTR_DAT_110c67cd8;
  puVar1[2] = &PTR_DAT_110c67db0;
  puVar1[5] = &PTR_DAT_110c67de0;
  return puVar1;
}



/* Entry: 10a574108; end: 10a574173;  */

undefined8 * FUN_10a574108(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xa0;
  __Znwm();
  FUN_10ac63120();
  *puVar1 = &PTR_FUN_110bb28b0;
  puVar1[2] = &PTR_DAT_110bb2988;
  puVar1[5] = &PTR_DAT_110bb29b8;
  *(undefined4 *)(puVar1 + 0x13) = 0x3f800000;
  return puVar1;
}



/* Entry: 10a574174; end: 10a5741d3;  */

undefined8 FUN_10a574174(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x108;
  __Znwm(0x108);
  FUN_10a58a678();
  return uVar1;
}



/* Entry: 10a5741d4; end: 10a5741d7;  */

undefined8 FUN_10a5741d4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x240;
  __Znwm(0x240);
  FUN_10a2d6b3c();
  return uVar1;
}



/* Entry: 10a5741d8; end: 10a574283;  */

undefined8 * FUN_10a5741d8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x1d0;
  __Znwm();
  puVar1[0x37] = 0;
  puVar1[0x38] = 0;
  puVar1[0x36] = &PTR_FUN_110c383b8;
  *(undefined2 *)(puVar1 + 0x39) = 0x100;
  FUN_10a699b38();
  *puVar1 = &PTR_DAT_110c0a208;
  puVar1[2] = &PTR_FUN_110c0a2a8;
  puVar1[7] = &PTR_FUN_110c0a300;
  puVar1[0x13] = &PTR_FUN_110c0a328;
  puVar1[0x36] = &PTR_FUN_110c0a3a0;
  return puVar1;
}



/* Entry: 10a574284; end: 10a574333;  */

undefined8 * FUN_10a574284(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x1d8;
  __Znwm();
  puVar1[0x38] = 0;
  puVar1[0x39] = 0;
  puVar1[0x37] = &PTR_FUN_110c383b8;
  *(undefined2 *)(puVar1 + 0x3a) = 0x100;
  FUN_10a699b38();
  *puVar1 = &PTR_FUN_110c0a430;
  puVar1[2] = &PTR_FUN_110c0a4d0;
  puVar1[7] = &PTR_FUN_110c0a528;
  puVar1[0x13] = &PTR_FUN_110c0a550;
  puVar1[0x37] = &PTR_FUN_110c0a5c8;
  *(undefined1 *)(puVar1 + 0x36) = 0;
  return puVar1;
}



/* Entry: 10a574334; end: 10a57442b;  */

undefined8 FUN_10a574334(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long *plStack_40;
  long *plStack_38;
  
  uVar4 = 0x178;
  __Znwm(0x178);
  plVar5 = (long *)0x48;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110bf2ea8;
  plVar5[5] = 0;
  plVar5[4] = 0;
  plVar5[7] = 0;
  plVar5[6] = 0;
  plVar5[8] = 0;
  plStack_40 = plVar5 + 3;
  *plStack_40 = (long)&PTR_FUN_110c4da20;
  plVar5[5] = (long)&PTR_FUN_110c4da78;
  plStack_38 = plVar5;
  FUN_10ab3c614(uVar4,param_1,param_2,param_3,&plStack_40);
  plVar5 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return uVar4;
}



/* Entry: 10a57442c; end: 10a57443b;  */

void FUN_10a57442c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf2ea8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a57443c; end: 10a57445b;  */

void FUN_10a57443c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf2ea8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a57445c; end: 10a57446b;  */

void FUN_10a57445c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a574464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a57446c; end: 10a5744c3;  */

long FUN_10a57446c(long param_1)

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



/* Entry: 10a5744c4; end: 10a574523;  */

undefined8 FUN_10a5744c4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x1d0;
  __Znwm(0x1d0);
  FUN_10aaf4fd0();
  return uVar1;
}



/* Entry: 10a574524; end: 10a5745ef;  */

undefined8 * FUN_10a574524(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x1d0;
  __Znwm();
  FUN_10aa7093c();
  *puVar1 = &PTR_FUN_110bc4808;
  puVar1[2] = &PTR_DAT_110bc48a8;
  puVar1[7] = &PTR_FUN_110bc4900;
  puVar1[0x1d] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x21] = 0;
  puVar1[0x20] = 0;
  puVar1[0x22] = 0;
  *(undefined4 *)(puVar1 + 0x23) = 0x3f800000;
  puVar1[0x25] = 0;
  puVar1[0x24] = 0;
  puVar1[0x27] = 0;
  puVar1[0x26] = 0;
  *(undefined4 *)(puVar1 + 0x28) = 0x3f800000;
  puVar1[0x2a] = 0;
  puVar1[0x29] = 0;
  puVar1[0x2c] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x30] = 0;
  puVar1[0x2f] = 0;
  puVar1[0x32] = 0;
  puVar1[0x31] = 0;
  *(undefined4 *)(puVar1 + 0x33) = 0x3f800000;
  puVar1[0x38] = 0;
  *(undefined1 *)(puVar1 + 0x39) = 0;
  puVar1[0x34] = 0;
  puVar1[0x35] = 0;
  *(undefined1 *)(puVar1 + 0x37) = 0;
  puVar1[0x36] = 0;
  *(undefined1 *)((long)puVar1 + 0x1c9) = 1;
  return puVar1;
}



/* Entry: 10a5745f0; end: 10a5746b7;  */

undefined8 * FUN_10a5745f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x1d0;
  __Znwm();
  FUN_10aa7093c();
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *puVar1 = &PTR_FUN_110bc7c78;
  puVar1[2] = &PTR_DAT_110bc7d18;
  puVar1[7] = &PTR_DAT_110bc7d70;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x1e] = 0;
  *(undefined1 *)(puVar1 + 0x21) = 0;
  *(undefined8 *)((long)puVar1 + 0x10c) = 1;
  puVar1[0x35] = 0;
  puVar1[0x24] = 0;
  puVar1[0x23] = 0;
  puVar1[0x26] = 0;
  puVar1[0x25] = 0;
  puVar1[0x28] = 0;
  puVar1[0x27] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x29] = 0;
  puVar1[0x2c] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x30] = 0;
  puVar1[0x2f] = 0;
  puVar1[0x32] = 0;
  puVar1[0x31] = 0;
  puVar1[0x34] = 0;
  puVar1[0x33] = 0;
  *(undefined4 *)(puVar1 + 0x36) = 0x3f800000;
  puVar1[0x37] = 0;
  puVar1[0x38] = 0;
  *(undefined2 *)(puVar1 + 0x39) = 0;
  return puVar1;
}



/* Entry: 10a5746b8; end: 10a5746ff;  */

undefined8 FUN_10a5746b8(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x488;
  __Znwm(0x488);
  FUN_10a8cf1fc();
  return uVar1;
}



/* Entry: 10a574700; end: 10a574747;  */

undefined8 FUN_10a574700(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x548;
  __Znwm(0x548);
  FUN_10a8d0488();
  return uVar1;
}



/* Entry: 10a574748; end: 10a574837;  */

undefined8 * FUN_10a574748(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x500;
  __Znwm();
  puVar1[0x9c] = &PTR_FUN_110c383b8;
  *(undefined2 *)(puVar1 + 0x9f) = 0x100;
  puVar1[0x9e] = 0;
  puVar1[0x9d] = 0;
  FUN_10a8cefe0();
  *puVar1 = &PTR_DAT_110c2be20;
  puVar1[2] = &PTR_FUN_110c2bf80;
  puVar1[5] = &PTR_DAT_110c2bfb0;
  puVar1[0x9c] = &PTR_FUN_110c2c0d0;
  puVar1[0x15] = &PTR_DAT_110c2c008;
  puVar1[0x5b] = &PTR_DAT_110c2c030;
  puVar1[0x60] = &PTR_DAT_110c2c078;
  *(undefined1 *)(puVar1 + 0x8e) = 0;
  puVar1[0x8d] = &PTR_FUN_110bef528;
  puVar1[0x91] = 0;
  puVar1[0x90] = 0;
  *(undefined1 *)(puVar1 + 0x93) = 0;
  puVar1[0x8f] = &PTR_FUN_110c6a8d8;
  puVar1[0x92] = &PTR_FUN_110c6a940;
  *(undefined8 *)((long)puVar1 + 0x4a4) = 0;
  *(undefined8 *)((long)puVar1 + 0x49c) = 0;
  puVar1[0x97] = 0;
  puVar1[0x96] = 0;
  puVar1[0x99] = 0;
  puVar1[0x98] = 0;
  puVar1[0x9b] = 0;
  puVar1[0x9a] = 0;
  return puVar1;
}



/* Entry: 10a574838; end: 10a5749af;  */

long * FUN_10a574838(long *param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  lVar5 = *param_2;
  *param_1 = lVar5;
  param_1[2] = (long)&PTR_FUN_110c2c2e8;
  param_1[5] = (long)&PTR_FUN_110c2c318;
  *(long *)((long)param_1 + *(long *)(lVar5 + -0x18)) = param_2[9];
  param_1[0x15] = (long)&PTR_FUN_110c2c370;
  param_1[0x5b] = param_2[10];
  param_1[0x60] = (long)&PTR_FUN_110c2c3e0;
  if (param_1[0x88] != 0) {
    piVar1 = (int *)(param_1[0x88] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x81);
    }
  }
  param_1[0x88] = 0;
  param_1[0x84] = 0;
  param_1[0x83] = 0;
  param_1[0x86] = 0;
  param_1[0x85] = 0;
  if (0 < *(int *)((long)param_1 + 0x40c)) {
    lVar5 = 0;
    lVar7 = param_1[0x89];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x40c));
  }
  plVar6 = (long *)param_1[0x8a];
  if (plVar6 != param_1 + 0x8b && plVar6 != (long *)0x0) {
    _free(plVar6[-1]);
  }
  if (*(char *)((long)param_1 + 0x407) < '\0') {
    __ZdlPv(param_1[0x7e]);
  }
  if (*(char *)((long)param_1 + 0x3c7) < '\0') {
    __ZdlPv(param_1[0x76]);
  }
  if (param_1[0x71] != 0) {
    param_1[0x72] = param_1[0x71];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x36f) < '\0') {
    __ZdlPv(param_1[0x6b]);
  }
  if (*(char *)((long)param_1 + 0x357) < '\0') {
    __ZdlPv(param_1[0x68]);
  }
  func_0x00010a2e2634(param_1 + 0x65);
  FUN_10a00dc2c(param_1 + 0x60);
  lVar5 = param_2[7];
  param_1[0x5b] = lVar5;
  *(long *)((long)param_1 + *(long *)(lVar5 + -0x18) + 0x2d8) = param_2[8];
  func_0x00010a004e5c(param_1 + 0x5e);
  func_0x00010a004e04(param_1 + 0x5c);
  lVar5 = param_2[1];
  *param_1 = lVar5;
  param_1[2] = (long)&PTR_FUN_110c2c8c8;
  param_1[5] = (long)&PTR_FUN_110c2c8f8;
  *(long *)((long)param_1 + *(long *)(lVar5 + -0x18)) = param_2[6];
  plVar6 = param_1 + 0x15;
  *plVar6 = (long)&PTR_FUN_110c2c950;
  func_0x00010a1f7460(param_1 + 0x53);
  func_0x00010a05248c(param_1 + 0x51);
  lVar5 = param_2[2];
  *param_1 = lVar5;
  param_1[2] = (long)&PTR_FUN_110bb3968;
  param_1[5] = (long)&PTR_DAT_110bb3998;
  *(long *)((long)param_1 + *(long *)(lVar5 + -0x18)) = param_2[5];
  *plVar6 = (long)&PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if ((char)param_1[0x3c] == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = (long)&PTR_FUN_110b9f768;
  FUN_10a1c00f4(plVar6);
  lVar5 = param_2[3];
  *param_1 = lVar5;
  param_1[2] = (long)&PTR_FUN_110b9f848;
  param_1[5] = (long)&PTR_DAT_110b9f878;
  *(long *)((long)param_1 + *(long *)(lVar5 + -0x18)) = param_2[4];
  FUN_10a042dcc(param_1 + 0x13);
  *param_1 = (long)&PTR_DAT_110c60a00;
  param_1[2] = (long)&PTR_DAT_110c60a88;
  param_1[5] = (long)&PTR_DAT_110c60ab8;
  ppuVar8 = (undefined **)(param_1 + 0xb);
  puVar10 = (undefined8 *)param_1[0xc];
  for (puVar9 = (undefined8 *)*ppuVar8; puVar9 != puVar10; puVar9 = puVar9 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar9,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar8);
  plVar6 = param_1 + 10;
  if ((*plVar6 != 0) && (*(undefined ***)(*(long *)(*plVar6 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar5 = *(long *)(param_1[0x12] + 0x828), lVar5 != 0)) {
    FUN_10a1dfb2c(lVar5,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar8;
  FUN_10ac78cf4(appuStack_180);
  lVar5 = *plVar6;
  *plVar6 = 0;
  if (lVar5 != 0) {
    FUN_10ac7d690(plVar6);
  }
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[5] = (long)&PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 6);
  param_1[2] = (long)&PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10a5749b0; end: 10a574abf;  */

long * FUN_10a5749b0(long *param_1,long *param_2)

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
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  param_1[2] = (long)&PTR_FUN_110c2c8c8;
  param_1[5] = (long)&PTR_FUN_110c2c8f8;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[5];
  plVar3 = param_1 + 0x15;
  *plVar3 = (long)&PTR_FUN_110c2c950;
  func_0x00010a1f7460(param_1 + 0x53);
  func_0x00010a05248c(param_1 + 0x51);
  lVar1 = param_2[1];
  *param_1 = lVar1;
  param_1[2] = (long)&PTR_FUN_110bb3968;
  param_1[5] = (long)&PTR_DAT_110bb3998;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[4];
  *plVar3 = (long)&PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if ((char)param_1[0x3c] == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = (long)&PTR_FUN_110b9f768;
  FUN_10a1c00f4(plVar3);
  lVar1 = param_2[2];
  *param_1 = lVar1;
  param_1[2] = (long)&PTR_FUN_110b9f848;
  param_1[5] = (long)&PTR_DAT_110b9f878;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[3];
  FUN_10a042dcc(param_1 + 0x13);
  *param_1 = (long)&PTR_DAT_110c60a00;
  param_1[2] = (long)&PTR_DAT_110c60a88;
  param_1[5] = (long)&PTR_DAT_110c60ab8;
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
  param_1[5] = (long)&PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 6);
  param_1[2] = (long)&PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10a574ac0; end: 10a574b83;  */

undefined *** FUN_10a574ac0(undefined8 param_1)

{
  undefined ***pppuVar1;
  undefined **ppuStack_e0;
  code *pcStack_d8;
  long lStack_a8;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  code *pcStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a061484;
  ppuStack_60 = &PTR_DAT_110b9ec98;
  pcStack_58 = FUN_10a574ed0;
  puStack_78 = &UNK_10f66246a;
  uStack_70 = 0x24;
  FUN_10a57077c(param_1,&puStack_78,&pcStack_68,100,0);
  pppuVar1 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return pppuVar1;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume(pppuVar1);
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_e0 = &PTR_DAT_110b9ec98;
  pcStack_d8 = FUN_10a574f2c;
  FUN_10a57077c();
  pppuVar1 = &ppuStack_e0;
  (*(code *)*ppuStack_e0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return pppuVar1;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_e0)(&ppuStack_e0);
  __Unwind_Resume(pppuVar1);
  pppuVar1 = (undefined ***)0x2d0;
  __Znwm(0x2d0);
  FUN_10a6e2f38();
  return pppuVar1;
}



/* Entry: 10a574b84; end: 10a574c47;  */

undefined *** FUN_10a574b84(undefined8 param_1)

{
  undefined ***pppuVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  code *pcStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a061484;
  ppuStack_60 = &PTR_DAT_110b9ec98;
  pcStack_58 = FUN_10a574f2c;
  puStack_78 = &UNK_10f66248f;
  uStack_70 = 0x17;
  FUN_10a57077c(param_1,&puStack_78,&pcStack_68,0x19,0);
  pppuVar1 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return pppuVar1;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume(pppuVar1);
  pppuVar1 = (undefined ***)0x2d0;
  __Znwm(0x2d0);
  FUN_10a6e2f38();
  return pppuVar1;
}



/* Entry: 10a574c48; end: 10a574c4b;  */

undefined8 FUN_10a574c48(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x2d0;
  __Znwm(0x2d0);
  FUN_10a6e2f38();
  return uVar1;
}



/* Entry: 10a574c4c; end: 10a574ca3;  */

undefined8 FUN_10a574c4c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x2d0;
  __Znwm(0x2d0);
  FUN_10a6e2f38();
  return uVar1;
}



/* Entry: 10a574ca4; end: 10a574ca7;  */

undefined8 FUN_10a574ca4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x3f8;
  __Znwm(0x3f8);
  FUN_10a6ee2b4();
  return uVar1;
}



/* Entry: 10a574ca8; end: 10a574cff;  */

undefined8 FUN_10a574ca8(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x3f8;
  __Znwm(0x3f8);
  FUN_10a6ee2b4();
  return uVar1;
}



/* Entry: 10a574d00; end: 10a574d87;  */

undefined8 * FUN_10a574d00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x100;
  __Znwm();
  FUN_10aa7093c();
  *puVar1 = &PTR_FUN_110c12538;
  puVar1[2] = &PTR_DAT_110c125d8;
  puVar1[7] = &PTR_DAT_110c12630;
  *(undefined1 *)(puVar1 + 0x1c) = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x1d] = 0;
  return puVar1;
}



/* Entry: 10a574d88; end: 10a574de7;  */

undefined8 FUN_10a574d88(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x250;
  __Znwm(0x250);
  FUN_10a6f7da0();
  return uVar1;
}



/* Entry: 10a574de8; end: 10a574e2f;  */

undefined8 FUN_10a574de8(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x1c8;
  __Znwm(0x1c8);
  FUN_10a819630();
  return uVar1;
}



/* Entry: 10a574e30; end: 10a574ecf;  */

undefined8 * FUN_10a574e30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x318;
  __Znwm();
  puVar1[0x5f] = &PTR_FUN_110c383b8;
  puVar1[0x61] = 0;
  puVar1[0x60] = 0;
  *(undefined2 *)(puVar1 + 0x62) = 0x100;
  FUN_10a080194();
  *puVar1 = &PTR_FUN_110c22e60;
  puVar1[2] = &PTR_FUN_110c22fd0;
  puVar1[5] = &PTR_DAT_110c23000;
  puVar1[0x5f] = &PTR_DAT_110c230a8;
  puVar1[0x15] = &PTR_DAT_110c23058;
  *(undefined1 *)(puVar1 + 0x5d) = 0;
  *(undefined1 *)(puVar1 + 0x5e) = 0;
  return puVar1;
}



/* Entry: 10a574ed0; end: 10a574ed3;  */

undefined8 FUN_10a574ed0(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x470;
  __Znwm(0x470);
  FUN_10a7ce768();
  return uVar1;
}



/* Entry: 10a574ed4; end: 10a574f2b;  */

undefined8 FUN_10a574ed4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x470;
  __Znwm(0x470);
  FUN_10a7ce768();
  return uVar1;
}



/* Entry: 10a574f2c; end: 10a574fab;  */

undefined8 * FUN_10a574f2c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xf0;
  __Znwm();
  FUN_10aa7093c();
  *puVar1 = &PTR_DAT_110c49a60;
  puVar1[2] = &PTR_DAT_110c49b00;
  puVar1[7] = &PTR_DAT_110c49b58;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  return puVar1;
}



/* Entry: 10a574fac; end: 10a574ff7;  */

undefined8 FUN_10a574fac(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x1f8;
  __Znwm(0x1f8);
  FUN_10a7ccd8c();
  return uVar1;
}



/* Entry: 10a574ff8; end: 10a57508f;  */

undefined8 * FUN_10a574ff8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x1f8;
  __Znwm();
  puVar1[0x3c] = 0;
  puVar1[0x3d] = 0;
  puVar1[0x3b] = &PTR_FUN_110c383b8;
  *(undefined2 *)(puVar1 + 0x3e) = 0x100;
  FUN_10a7cb904();
  *puVar1 = &PTR_FUN_110c193a8;
  puVar1[2] = &PTR_FUN_110c19490;
  puVar1[5] = &PTR_DAT_110c194c0;
  puVar1[0x3b] = &PTR_DAT_110c19598;
  puVar1[0x1d] = &PTR_DAT_110c19520;
  return puVar1;
}



/* Entry: 10a575090; end: 10a575127;  */

undefined8 * FUN_10a575090(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x1f8;
  __Znwm();
  puVar1[0x3c] = 0;
  puVar1[0x3d] = 0;
  puVar1[0x3b] = &PTR_FUN_110c383b8;
  *(undefined2 *)(puVar1 + 0x3e) = 0x100;
  FUN_10a7cb904();
  *puVar1 = &PTR_FUN_110c19658;
  puVar1[2] = &PTR_FUN_110c19740;
  puVar1[5] = &PTR_DAT_110c19770;
  puVar1[0x3b] = &PTR_DAT_110c19848;
  puVar1[0x1d] = &PTR_DAT_110c197d0;
  return puVar1;
}



/* Entry: 10a575128; end: 10a57516f;  */

undefined8 FUN_10a575128(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x168;
  __Znwm(0x168);
  FUN_10ac65808();
  return uVar1;
}



/* Entry: 10a575170; end: 10a5751bb;  */

undefined8 FUN_10a575170(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x2b8;
  __Znwm(0x2b8);
  FUN_10ac37128();
  return uVar1;
}



/* Entry: 10a5751bc; end: 10a5751bf;  */

undefined8 FUN_10a5751bc(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x250;
  __Znwm(0x250);
  FUN_10a5fafac();
  return uVar1;
}



/* Entry: 10a5751c0; end: 10a575217;  */

undefined8 FUN_10a5751c0(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x250;
  __Znwm(0x250);
  FUN_10a5fafac();
  return uVar1;
}



/* Entry: 10a575218; end: 10a5752c7;  */

undefined8 * FUN_10a575218(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x328;
  __Znwm();
  puVar1[0x61] = &PTR_FUN_110c383b8;
  puVar1[99] = 0;
  puVar1[0x62] = 0;
  *(undefined2 *)(puVar1 + 100) = 0x100;
  FUN_10a589324();
  *puVar1 = &PTR_FUN_110c09d60;
  puVar1[2] = &PTR_FUN_110c09e18;
  puVar1[7] = &PTR_FUN_110c09e70;
  puVar1[0x13] = &PTR_FUN_110c09e98;
  puVar1[0x61] = &PTR_FUN_110c09f10;
  return puVar1;
}



/* Entry: 10a5752c8; end: 10a575377;  */

undefined8 * FUN_10a5752c8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x328;
  __Znwm();
  puVar1[0x61] = &PTR_FUN_110c383b8;
  puVar1[99] = 0;
  puVar1[0x62] = 0;
  *(undefined2 *)(puVar1 + 100) = 0x100;
  FUN_10a589324();
  *puVar1 = &PTR_DAT_110c09b20;
  puVar1[2] = &PTR_FUN_110c09bd8;
  puVar1[7] = &PTR_FUN_110c09c30;
  puVar1[0x13] = &PTR_FUN_110c09c58;
  puVar1[0x61] = &PTR_FUN_110c09cd0;
  return puVar1;
}



/* Entry: 10a575378; end: 10a575427;  */

undefined8 * FUN_10a575378(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x328;
  __Znwm();
  puVar1[0x61] = &PTR_FUN_110c383b8;
  puVar1[99] = 0;
  puVar1[0x62] = 0;
  *(undefined2 *)(puVar1 + 100) = 0x100;
  FUN_10a589324();
  *puVar1 = &PTR_FUN_110c07f50;
  puVar1[2] = &PTR_FUN_110c08008;
  puVar1[7] = &PTR_FUN_110c08060;
  puVar1[0x13] = &PTR_FUN_110c08088;
  puVar1[0x61] = &PTR_FUN_110c08100;
  return puVar1;
}



/* Entry: 10a575428; end: 10a5754d7;  */

undefined8 * FUN_10a575428(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x328;
  __Znwm();
  puVar1[0x61] = &PTR_FUN_110c383b8;
  puVar1[99] = 0;
  puVar1[0x62] = 0;
  *(undefined2 *)(puVar1 + 100) = 0x100;
  FUN_10a589324();
  *puVar1 = &PTR_DAT_110c07d10;
  puVar1[2] = &PTR_FUN_110c07dc8;
  puVar1[7] = &PTR_FUN_110c07e20;
  puVar1[0x13] = &PTR_FUN_110c07e48;
  puVar1[0x61] = &PTR_FUN_110c07ec0;
  return puVar1;
}



/* Entry: 10a5754d8; end: 10a575587;  */

undefined8 * FUN_10a5754d8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x328;
  __Znwm();
  puVar1[0x61] = &PTR_FUN_110c383b8;
  puVar1[99] = 0;
  puVar1[0x62] = 0;
  *(undefined2 *)(puVar1 + 100) = 0x100;
  FUN_10a589324();
  *puVar1 = &PTR_FUN_110c08190;
  puVar1[2] = &PTR_FUN_110c08248;
  puVar1[7] = &PTR_FUN_110c082a0;
  puVar1[0x13] = &PTR_FUN_110c082c8;
  puVar1[0x61] = &PTR_FUN_110c08340;
  return puVar1;
}



/* Entry: 10a575588; end: 10a5755e7;  */

undefined8 FUN_10a575588(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x350;
  __Znwm(0x350);
  FUN_10a68946c();
  return uVar1;
}



/* Entry: 10a5755e8; end: 10a575647;  */

undefined8 FUN_10a5755e8(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x350;
  __Znwm(0x350);
  FUN_10a689908();
  return uVar1;
}



/* Entry: 10a575648; end: 10a5756f7;  */

undefined8 * FUN_10a575648(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x328;
  __Znwm();
  puVar1[0x61] = &PTR_FUN_110c383b8;
  puVar1[99] = 0;
  puVar1[0x62] = 0;
  *(undefined2 *)(puVar1 + 100) = 0x100;
  FUN_10a589324();
  *puVar1 = &PTR_FUN_110c09670;
  puVar1[2] = &PTR_FUN_110c09728;
  puVar1[7] = &PTR_FUN_110c09780;
  puVar1[0x13] = &PTR_FUN_110c097a8;
  puVar1[0x61] = &PTR_FUN_110c09820;
  return puVar1;
}



/* Entry: 10a5756f8; end: 10a5757a7;  */

undefined8 * FUN_10a5756f8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x328;
  __Znwm();
  puVar1[0x61] = &PTR_FUN_110c383b8;
  puVar1[99] = 0;
  puVar1[0x62] = 0;
  *(undefined2 *)(puVar1 + 100) = 0x100;
  FUN_10a589324();
  *puVar1 = &PTR_FUN_110bf45a0;
  puVar1[2] = &PTR_FUN_110bf4658;
  puVar1[7] = &PTR_FUN_110bf46b0;
  puVar1[0x13] = &PTR_FUN_110bf46d8;
  puVar1[0x61] = &PTR_FUN_110bf4750;
  return puVar1;
}



/* Entry: 10a5757a8; end: 10a575857;  */

undefined8 * FUN_10a5757a8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x328;
  __Znwm();
  puVar1[0x61] = &PTR_FUN_110c383b8;
  puVar1[99] = 0;
  puVar1[0x62] = 0;
  *(undefined2 *)(puVar1 + 100) = 0x100;
  FUN_10a589324();
  *puVar1 = &PTR_FUN_110c09430;
  puVar1[2] = &PTR_FUN_110c094e8;
  puVar1[7] = &PTR_FUN_110c09540;
  puVar1[0x13] = &PTR_FUN_110c09568;
  puVar1[0x61] = &PTR_FUN_110c095e0;
  return puVar1;
}



/* Entry: 10a575858; end: 10a575907;  */

undefined8 * FUN_10a575858(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x328;
  __Znwm();
  puVar1[0x61] = &PTR_FUN_110c383b8;
  puVar1[99] = 0;
  puVar1[0x62] = 0;
  *(undefined2 *)(puVar1 + 100) = 0x100;
  FUN_10a589324();
  *puVar1 = &PTR_DAT_110bf4360;
  puVar1[2] = &PTR_FUN_110bf4418;
  puVar1[7] = &PTR_FUN_110bf4470;
  puVar1[0x13] = &PTR_FUN_110bf4498;
  puVar1[0x61] = &PTR_FUN_110bf4510;
  return puVar1;
}



/* Entry: 10a575908; end: 10a575967;  */

undefined8 FUN_10a575908(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x360;
  __Znwm(0x360);
  FUN_10a686068();
  return uVar1;
}



/* Entry: 10a575968; end: 10a575973;  */

undefined8 FUN_10a575968(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x558;
  __Znwm(0x558);
  FUN_10a4a6c70();
  return uVar1;
}



/* Entry: 10a575974; end: 10a5759bb;  */

undefined8 FUN_10a575974(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x3c8;
  __Znwm(0x3c8);
  FUN_10ac55d70();
  return uVar1;
}



/* Entry: 10a5759bc; end: 10a5759c3;  */

undefined8 FUN_10a5759bc(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x570;
  __Znwm(0x570);
  FUN_10a4a83a4();
  return uVar1;
}



/* Entry: 10a5759c4; end: 10a575a1b;  */

undefined8 FUN_10a5759c4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x5e8;
  __Znwm(0x5e8);
  FUN_10a5eb540();
  return uVar1;
}



/* Entry: 10a575a1c; end: 10a575a1f;  */

undefined8 FUN_10a575a1c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x578;
  __Znwm(0x578);
  FUN_10a4aa85c();
  return uVar1;
}



/* Entry: 10a575a20; end: 10a575a6b;  */

undefined8 FUN_10a575a20(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x5d8;
  __Znwm(0x5d8);
  FUN_10ac3b48c();
  return uVar1;
}



/* Entry: 10a575a6c; end: 10a575ab3;  */

undefined8 FUN_10a575a6c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x2b8;
  __Znwm(0x2b8);
  FUN_10ac72324();
  return uVar1;
}



/* Entry: 10a575ab4; end: 10a575afb;  */

undefined8 FUN_10a575ab4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x5d0;
  __Znwm(0x5d0);
  FUN_10ac1b8d4();
  return uVar1;
}



/* Entry: 10a575afc; end: 10a575bbf;  */

undefined8 * FUN_10a575afc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x650;
  __Znwm();
  puVar1[0xc6] = &PTR_FUN_110c383b8;
  *(undefined2 *)(puVar1 + 0xc9) = 0x100;
  puVar1[200] = 0;
  puVar1[199] = 0;
  FUN_10ac6adb8();
  *puVar1 = &PTR_DAT_110c5e468;
  puVar1[2] = &PTR_FUN_110c5e5c8;
  puVar1[5] = &PTR_FUN_110c5e5f8;
  puVar1[0xc6] = &PTR_FUN_110c5e738;
  puVar1[0x15] = &PTR_FUN_110c5e650;
  puVar1[0x51] = &PTR_FUN_110c5e670;
  puVar1[0x52] = &PTR_FUN_110c5e6b8;
  puVar1[0x9c] = &PTR_FUN_110c5e6e0;
  *(undefined4 *)(puVar1 + 0xc5) = 2;
  *(undefined1 *)(puVar1 + 0xb7) = 1;
  return puVar1;
}



/* Entry: 10a575bc0; end: 10a575c07;  */

undefined8 FUN_10a575bc0(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x398;
  __Znwm(0x398);
  FUN_10a8ce284();
  return uVar1;
}



/* Entry: 10a575c08; end: 10a575c87;  */

undefined8 * FUN_10a575c08(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xf0;
  __Znwm();
  FUN_10aa7093c();
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *puVar1 = &PTR_FUN_110c4ec80;
  puVar1[2] = &PTR_DAT_110c4ed20;
  puVar1[7] = &PTR_DAT_110c4ed78;
  return puVar1;
}



/* Entry: 10a575c88; end: 10a575ccf;  */

undefined8 FUN_10a575c88(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x4d8;
  __Znwm(0x4d8);
  FUN_10a1e1588();
  return uVar1;
}



/* Entry: 10a575cd0; end: 10a575d2f;  */

undefined8 FUN_10a575cd0(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x198;
  __Znwm(0x198);
  FUN_10a980dd8();
  return uVar1;
}



/* Entry: 10a575d30; end: 10a575d77;  */

undefined8 FUN_10a575d30(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x350;
  __Znwm(0x350);
  FUN_10ac27168();
  return uVar1;
}



/* Entry: 10a575d78; end: 10a575dbf;  */

undefined8 FUN_10a575d78(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x340;
  __Znwm(0x340);
  FUN_10ac8e0d8();
  return uVar1;
}



/* Entry: 10a575dc0; end: 10a575e3f;  */

undefined8 * FUN_10a575dc0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xf0;
  __Znwm();
  FUN_10aa7093c();
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *puVar1 = &PTR_FUN_110c46350;
  puVar1[2] = &PTR_DAT_110c463f0;
  puVar1[7] = &PTR_DAT_110c46448;
  return puVar1;
}



/* Entry: 10a575e40; end: 10a575e43;  */

undefined8 FUN_10a575e40(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x520;
  __Znwm(0x520);
  FUN_10a4a19b4();
  return uVar1;
}



/* Entry: 10a575e44; end: 10a575ec3;  */

undefined8 * FUN_10a575e44(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xe8;
  __Znwm();
  FUN_10aa7093c();
  *puVar1 = &PTR_FUN_110ba5da8;
  puVar1[2] = &PTR_FUN_110ba5e48;
  puVar1[7] = &PTR_FUN_110ba5ea0;
  puVar1[0x1c] = param_1;
  return puVar1;
}



/* Entry: 10a575ec4; end: 10a575f0f;  */

undefined8 FUN_10a575ec4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x1c8;
  __Znwm(0x1c8);
  FUN_10ac8f9b8();
  return uVar1;
}



/* Entry: 10a575f10; end: 10a5760bf;  */

void FUN_10a575f10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = param_2;
  puVar1[9] = param_3;
  *(undefined1 *)(puVar1 + 10) = 0;
  *(undefined8 *)((long)puVar1 + 0x54) = 0x800000000;
  puVar1[0xc] = param_1;
  *(undefined1 *)(puVar1 + 0xd) = 0;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  *(undefined1 *)(puVar1 + 0x12) = 1;
  *puVar1 = &PTR_FUN_110bf50a8;
  puVar1[2] = &PTR_DAT_110bf5140;
  puVar1[7] = &PTR_DAT_110bf5198;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x13] = 0;
  return;
}



/* Entry: 10a5760c0; end: 10a57611f;  */

undefined8 FUN_10a5760c0(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x150;
  __Znwm(0x150);
  FUN_10a94d818();
  return uVar1;
}



/* Entry: 10a576120; end: 10a576123;  */

undefined8 FUN_10a576120(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x248;
  __Znwm(0x248);
  FUN_10a5f014c();
  return uVar1;
}



/* Entry: 10a576124; end: 10a57617b;  */

undefined8 FUN_10a576124(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x248;
  __Znwm(0x248);
  FUN_10a5f014c();
  return uVar1;
}



/* Entry: 10a57617c; end: 10a576183;  */

undefined8 FUN_10a57617c(void)

{
  undefined8 uVar1;
  
  uVar1 = 800;
  __Znwm(800);
  FUN_10a4a3ff8();
  return uVar1;
}



/* Entry: 10a576184; end: 10a5761db;  */

undefined8 FUN_10a576184(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x2c8;
  __Znwm(0x2c8);
  FUN_10a668934();
  return uVar1;
}



/* Entry: 10a5761dc; end: 10a57623b;  */

undefined8 FUN_10a5761dc(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xc0;
  __Znwm(0xc0);
  FUN_10a58c1ec();
  return uVar1;
}



/* Entry: 10a57623c; end: 10a57629b;  */

undefined8 FUN_10a57623c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xc0;
  __Znwm(0xc0);
  FUN_10a6af080();
  return uVar1;
}



/* Entry: 10a57629c; end: 10a57644b;  */

void FUN_10a57629c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = param_2;
  puVar1[9] = param_3;
  *(undefined1 *)(puVar1 + 10) = 0;
  *(undefined8 *)((long)puVar1 + 0x54) = 0x800000000;
  puVar1[0xc] = param_1;
  *(undefined1 *)(puVar1 + 0xd) = 0;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  *(undefined1 *)(puVar1 + 0x12) = 1;
  *puVar1 = &PTR_FUN_110bf5598;
  puVar1[2] = &PTR_DAT_110bf5630;
  puVar1[7] = &PTR_DAT_110bf5688;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x13] = 0;
  return;
}



/* Entry: 10a57644c; end: 10a5764a3;  */

undefined8 FUN_10a57644c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x360;
  __Znwm(0x360);
  FUN_10a7491f8();
  return uVar1;
}



/* Entry: 10a5764a4; end: 10a5764a7;  */

undefined8 FUN_10a5764a4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x248;
  __Znwm(0x248);
  FUN_10a8ba520();
  return uVar1;
}



/* Entry: 10a5764a8; end: 10a5764ff;  */

undefined8 FUN_10a5764a8(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x248;
  __Znwm(0x248);
  FUN_10a8ba520();
  return uVar1;
}



/* Entry: 10a576500; end: 10a576503;  */

undefined8 FUN_10a576500(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x298;
  __Znwm(0x298);
  FUN_10a8b7528();
  return uVar1;
}



/* Entry: 10a576504; end: 10a57655b;  */

undefined8 FUN_10a576504(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x298;
  __Znwm(0x298);
  FUN_10a8b7528();
  return uVar1;
}



/* Entry: 10a57655c; end: 10a57661b;  */

undefined8 * FUN_10a57655c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x1b8;
  __Znwm();
  FUN_10aa7093c();
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *puVar1 = &PTR_DAT_110c2c480;
  puVar1[2] = &PTR_FUN_110c2c520;
  puVar1[7] = &PTR_FUN_110c2c578;
  puVar1[0x22] = 0;
  *(undefined1 *)(puVar1 + 0x23) = 0;
  *(undefined1 *)(puVar1 + 0x26) = 0;
  *(undefined1 *)(puVar1 + 0x32) = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x1e] = 0;
  *(undefined1 *)(puVar1 + 0x21) = 0;
  puVar1[0x28] = 0;
  puVar1[0x27] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x29] = 0;
  puVar1[0x2c] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2d] = 0;
  *(undefined8 *)((long)puVar1 + 0x179) = 0;
  *(undefined8 *)((long)puVar1 + 0x171) = 0;
  puVar1[0x33] = 0;
  puVar1[0x34] = 0;
  puVar1[0x35] = 0;
  *(undefined2 *)(puVar1 + 0x36) = 1;
  return puVar1;
}



/* Entry: 10a57661c; end: 10a57675f;  */

void FUN_10a57661c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xf8;
  __Znwm();
  puVar1[8] = param_2;
  puVar1[9] = param_3;
  puVar1[2] = &PTR_DAT_110c2c608;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  *puVar1 = &PTR_FUN_110c2c598;
  puVar1[7] = &PTR_DAT_110c2c660;
  puVar1[0xb] = 0x3f80000000000000;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0x1010100;
  *(undefined2 *)((long)puVar1 + 100) = 0;
  *(undefined1 *)(puVar1 + 0xd) = 0;
  *(undefined1 *)((long)puVar1 + 0x84) = 0;
  puVar1[0x12] = 0;
  puVar1[0x11] = 0x3f800000;
  puVar1[0x14] = 0;
  puVar1[0x13] = 0x3f800000;
  puVar1[0x16] = 0;
  puVar1[0x15] = 0x3f8000003f800000;
  puVar1[0x18] = 0;
  puVar1[0x17] = 0x3f80000000000000;
  puVar1[0x1a] = 0x3f800000;
  puVar1[0x19] = 0x3f80000000000000;
  puVar1[0x1c] = 0x3f800000;
  puVar1[0x1b] = 0;
  puVar1[0x1d] = 0;
  *(undefined4 *)(puVar1 + 0x1e) = 0x3f800000;
  *(undefined2 *)((long)puVar1 + 0xf4) = 0;
  return;
}



/* Entry: 10a576760; end: 10a5767a7;  */

undefined8 FUN_10a576760(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x2f8;
  __Znwm(0x2f8);
  FUN_10a91bc24();
  return uVar1;
}



/* Entry: 10a5767a8; end: 10a5767ef;  */

undefined8 FUN_10a5767a8(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x150;
  __Znwm(0x150);
  FUN_10ac584d0();
  return uVar1;
}



/* Entry: 10a5767f0; end: 10a576837;  */

undefined8 FUN_10a5767f0(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x158;
  __Znwm(0x158);
  FUN_10ac599e8();
  return uVar1;
}



/* Entry: 10a576838; end: 10a576883;  */

undefined8 FUN_10a576838(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x10100;
  __Znwm(0x10100);
  FUN_10ac6f3c4();
  return uVar1;
}



/* Entry: 10a576884; end: 10a5768cb;  */

undefined8 FUN_10a576884(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xf8;
  __Znwm(0xf8);
  FUN_10ac1a144();
  return uVar1;
}



/* Entry: 10a5768cc; end: 10a5769b7;  */

undefined8 * FUN_10a5768cc(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0xd8;
  __Znwm();
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x17] = &PTR_FUN_110c383b8;
  *(undefined2 *)(puVar1 + 0x1a) = 0x100;
  FUN_10a5769b8();
  *puVar1 = &PTR_FUN_110c5e7d8;
  puVar1[2] = &PTR_FUN_110c5e878;
  puVar1[5] = &PTR_DAT_110c5e8a8;
  puVar1[0x17] = &PTR_DAT_110c5e930;
  puVar2 = (undefined8 *)0x60;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_110bf14c0;
  *(undefined1 *)(puVar2 + 6) = 0;
  puVar2[3] = &PTR_DAT_110c3ed30;
  puVar2[4] = &PTR_FUN_110c3ed68;
  puVar2[5] = &PTR_FUN_110c3ed98;
  puVar2[8] = 0;
  puVar2[7] = 0;
  puVar2[10] = 0;
  puVar2[9] = 0;
  *(undefined4 *)(puVar2 + 0xb) = 0x3f800000;
  puVar1[0x15] = puVar2 + 3;
  puVar1[0x16] = puVar2;
  return puVar1;
}



/* Entry: 10a5769b8; end: 10a576a7b;  */

long * FUN_10a5769b8(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = param_1;
  FUN_10ac63120(param_1,param_3);
  lVar2 = *param_2;
  *plVar1 = lVar2;
  plVar1[2] = (long)&PTR_FUN_110bf2fd8;
  plVar1[5] = (long)&PTR_DAT_110bf3008;
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



/* Entry: 10a576a7c; end: 10a576acb;  */

undefined8 * FUN_10a576a7c(undefined8 *param_1)

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
  
  *param_1 = &PTR_FUN_110c59478;
  param_1[2] = &PTR_FUN_110bf2fd8;
  param_1[5] = &PTR_DAT_110bf3008;
  param_1[0x17] = &PTR_DAT_110c59548;
  FUN_10a576c8c(param_1 + 0x13);
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



/* Entry: 10a576acc; end: 10a576ad3;  */

void FUN_10a576acc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a576ad0);
  (*pcVar1)();
}



/* Entry: 10a576ad4; end: 10a576c1f;  */

long * FUN_10a576ad4(long *param_1)

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



/* Entry: 10a576c20; end: 10a576c27;  */

undefined4 FUN_10a576c20(long param_1)

{
  return *(undefined4 *)(param_1 + 0x74);
}



/* Entry: 10a576c28; end: 10a576c63;  */

void FUN_10a576c28(long param_1)

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



/* Entry: 10a576c64; end: 10a576c8b;  */

void FUN_10a576c64(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a576c68);
  (*pcVar1)();
}



/* Entry: 10a576c8c; end: 10a576ce3;  */

long FUN_10a576c8c(long param_1)

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


