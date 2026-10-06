/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a8d1980; end: 10a8d1997;  */

void FUN_10a8d1980(long param_1)

{
  FUN_10a572f54(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8d1998; end: 10a8d199f;  */

long FUN_10a8d1998(long param_1)

{
  if (*(long *)(param_1 + -8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(undefined ***)(param_1 + -0x28) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x20);
  return param_1 + -0x38;
}



/* Entry: 10a8d19a0; end: 10a8d19b7;  */

void FUN_10a8d19a0(long param_1)

{
  FUN_10a572f54(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8d19b8; end: 10a8d19bb;  */

undefined8 * FUN_10a8d19b8(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110c27628;
  param_1[2] = &PTR_DAT_110c27690;
  func_0x00010a6d1ba8(param_1 + 0x1d);
  func_0x00010a140010(param_1 + 0x1b);
  if (param_1[0x16] != 0) {
    piVar1 = (int *)(param_1[0x16] + 0x14);
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
      func_0x000109a848d4(param_1 + 0xf);
    }
  }
  param_1[0x16] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  if (0 < *(int *)((long)param_1 + 0x7c)) {
    lVar5 = 0;
    lVar7 = param_1[0x17];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x7c));
  }
  puVar6 = (undefined8 *)param_1[0x18];
  if (puVar6 != param_1 + 0x19 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  func_0x00010a6c8bbc(param_1 + 0xb);
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a8d19bc; end: 10a8d19cf;  */

void FUN_10a8d19bc(void)

{
  FUN_10a6d1a08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8d19d0; end: 10a8d19e3;  */

void FUN_10a8d19d0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0x50) = param_2[1];
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  return;
}



/* Entry: 10a8d19e4; end: 10a8d19fb;  */

void FUN_10a8d19e4(long param_1)

{
  FUN_10a6d1a08(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8d19fc; end: 10a8d1aa7;  */

undefined8 * FUN_10a8d19fc(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110c27720;
  param_1[2] = &PTR_FUN_110c27788;
  func_0x00010a136de4(param_1 + 0x26);
  FUN_10a6d1af8(param_1 + 0x23);
  func_0x00010a05248c(param_1 + 0x21);
  func_0x00010a6d1b50(param_1 + 0x1f);
  *param_1 = &PTR_FUN_110c27628;
  param_1[2] = &PTR_DAT_110c27690;
  func_0x00010a6d1ba8(param_1 + 0x1d);
  func_0x00010a140010(param_1 + 0x1b);
  if (param_1[0x16] != 0) {
    piVar1 = (int *)(param_1[0x16] + 0x14);
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
      func_0x000109a848d4(param_1 + 0xf);
    }
  }
  param_1[0x16] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  if (0 < *(int *)((long)param_1 + 0x7c)) {
    lVar5 = 0;
    lVar7 = param_1[0x17];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x7c));
  }
  puVar6 = (undefined8 *)param_1[0x18];
  if (puVar6 != param_1 + 0x19 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  func_0x00010a6c8bbc(param_1 + 0xb);
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a8d1aa8; end: 10a8d1b73;  */

undefined8 * FUN_10a8d1aa8(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  
  puVar8 = param_1 + -2;
  *puVar8 = &PTR_FUN_110c27720;
  *param_1 = &PTR_FUN_110c27788;
  func_0x00010a136de4(param_1 + 0x24);
  FUN_10a6d1af8(param_1 + 0x21);
  func_0x00010a05248c(param_1 + 0x1f);
  func_0x00010a6d1b50(param_1 + 0x1d);
  *puVar8 = &PTR_FUN_110c27628;
  *param_1 = &PTR_DAT_110c27690;
  func_0x00010a6d1ba8(param_1 + 0x1b);
  func_0x00010a140010(param_1 + 0x19);
  if (param_1[0x14] != 0) {
    piVar1 = (int *)(param_1[0x14] + 0x14);
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
      func_0x000109a848d4(param_1 + 0xd);
    }
  }
  param_1[0x14] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  if (0 < *(int *)((long)param_1 + 0x6c)) {
    lVar5 = 0;
    lVar7 = param_1[0x15];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x6c));
  }
  puVar6 = (undefined8 *)param_1[0x16];
  if (puVar6 != param_1 + 0x17 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  func_0x00010a6c8bbc(param_1 + 9);
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return puVar8;
}



/* Entry: 10a8d1b74; end: 10a8d1d13;  */

undefined8 * FUN_10a8d1b74(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110c277f8;
  param_1[2] = &PTR_DAT_110c27860;
  func_0x00010a05248c(param_1 + 0x27);
  func_0x00010a0523dc(param_1 + 0x25);
  if (param_1[0x22] != 0) {
    param_1[0x23] = param_1[0x22];
    __ZdlPv();
  }
  if (param_1[0x1f] != 0) {
    param_1[0x20] = param_1[0x1f];
    __ZdlPv();
  }
  *param_1 = &PTR_FUN_110c27628;
  param_1[2] = &PTR_DAT_110c27690;
  func_0x00010a6d1ba8(param_1 + 0x1d);
  func_0x00010a140010(param_1 + 0x1b);
  if (param_1[0x16] != 0) {
    piVar1 = (int *)(param_1[0x16] + 0x14);
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
      func_0x000109a848d4(param_1 + 0xf);
    }
  }
  param_1[0x16] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  if (0 < *(int *)((long)param_1 + 0x7c)) {
    lVar5 = 0;
    lVar7 = param_1[0x17];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x7c));
  }
  puVar6 = (undefined8 *)param_1[0x18];
  if (puVar6 != param_1 + 0x19 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  func_0x00010a6c8bbc(param_1 + 0xb);
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a8d1d14; end: 10a8d1d27;  */

void FUN_10a8d1d14(void)

{
  return;
}



/* Entry: 10a8d1d28; end: 10a8d1e67;  */

undefined8 * FUN_10a8d1d28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c278f8;
  func_0x00010a6c8bbc(param_1 + 5);
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a8d1e68; end: 10a8d1e6b;  */

undefined8 * FUN_10a8d1e68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c27a38;
  FUN_10a8dcf94(param_1 + 5);
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a8d1e6c; end: 10a8d1e7f;  */

void FUN_10a8d1e6c(void)

{
  func_0x00010a8dca08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8d1e80; end: 10a8d1e83;  */

undefined8 * FUN_10a8d1e80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c27ad8;
  FUN_10a8dd02c(param_1 + 5);
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a8d1e84; end: 10a8d1e97;  */

void FUN_10a8d1e84(void)

{
  func_0x00010a8dca58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8d1e98; end: 10a8d1e9b;  */

undefined8 * FUN_10a8d1e98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c27b78;
  FUN_10a8dd0c4(param_1 + 5);
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a8d1e9c; end: 10a8d1eaf;  */

void FUN_10a8d1e9c(void)

{
  func_0x00010a8dcaa8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8d1eb0; end: 10a8d1eb3;  */

undefined8 * FUN_10a8d1eb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c27c18;
  FUN_10a8dd15c(param_1 + 5);
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a8d1eb4; end: 10a8d1ec7;  */

void FUN_10a8d1eb4(void)

{
  func_0x00010a8dcaf8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8d1ec8; end: 10a8d1ecb;  */

undefined8 * FUN_10a8d1ec8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c27cb8;
  FUN_10a8dd1f4(param_1 + 5);
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a8d1ecc; end: 10a8d1edf;  */

void FUN_10a8d1ecc(void)

{
  func_0x00010a8dcb48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8d1ee0; end: 10a8d1ee3;  */

undefined8 * FUN_10a8d1ee0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c27d58;
  FUN_10a8dd28c(param_1 + 5);
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a8d1ee4; end: 10a8d1ef7;  */

void FUN_10a8d1ee4(void)

{
  func_0x00010a8dcb98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8d1ef8; end: 10a8d1efb;  */

undefined8 * FUN_10a8d1ef8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c27df8;
  FUN_10a8dd324(param_1 + 5);
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a8d1efc; end: 10a8d1f0f;  */

void FUN_10a8d1efc(void)

{
  func_0x00010a8dcbe8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8d1f10; end: 10a8d1f17;  */

void FUN_10a8d1f10(void)

{
  return;
}



/* Entry: 10a8d1f18; end: 10a8d1f2b;  */

void FUN_10a8d1f18(void)

{
  func_0x00010a8dcc38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8d1f2c; end: 10a8d1f33;  */

undefined8 * FUN_10a8d1f2c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -2;
  *puVar1 = &PTR_DAT_110c2c480;
  *param_1 = &PTR_FUN_110c2c520;
  param_1[5] = &PTR_FUN_110c2c578;
  func_0x00010a04b36c(param_1 + 0x31);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_10ad77c04(param_1 + 0x2e);
  }
  if (*(char *)((long)param_1 + 0x16f) < '\0') {
    __ZdlPv(param_1[0x2b]);
  }
  func_0x00010a8d439c(param_1 + 0x28);
  func_0x00010a8d42ac(param_1 + 0x25);
  if ((*(char *)(param_1 + 0x24) == '\x01') && (*(char *)((long)param_1 + 0x11f) < '\0')) {
    __ZdlPv(param_1[0x21]);
  }
  func_0x000109380ffc(param_1 + 0x20,*(undefined1 *)(param_1 + 0x1f));
  if (*(char *)((long)param_1 + 0xf7) < '\0') {
    __ZdlPv(param_1[0x1c]);
  }
  *puVar1 = &PTR_DAT_110c46238;
  *param_1 = &PTR_DAT_110c462d8;
  param_1[5] = &PTR_DAT_110c46330;
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



/* Entry: 10a8d1f34; end: 10a8d1f4b;  */

void FUN_10a8d1f34(long param_1)

{
  func_0x00010a8dcc38(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8d1f4c; end: 10a8d1f53;  */

undefined8 * FUN_10a8d1f4c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -7;
  *puVar1 = &PTR_DAT_110c2c480;
  param_1[-5] = &PTR_FUN_110c2c520;
  *param_1 = &PTR_FUN_110c2c578;
  func_0x00010a04b36c(param_1 + 0x2c);
  if (*(char *)(param_1 + 0x2b) == '\x01') {
    FUN_10ad77c04(param_1 + 0x29);
  }
  if (*(char *)((long)param_1 + 0x147) < '\0') {
    __ZdlPv(param_1[0x26]);
  }
  func_0x00010a8d439c(param_1 + 0x23);
  func_0x00010a8d42ac(param_1 + 0x20);
  if ((*(char *)(param_1 + 0x1f) == '\x01') && (*(char *)((long)param_1 + 0xf7) < '\0')) {
    __ZdlPv(param_1[0x1c]);
  }
  func_0x000109380ffc(param_1 + 0x1b,*(undefined1 *)(param_1 + 0x1a));
  if (*(char *)((long)param_1 + 0xcf) < '\0') {
    __ZdlPv(param_1[0x17]);
  }
  *puVar1 = &PTR_DAT_110c46238;
  param_1[-5] = &PTR_DAT_110c462d8;
  *param_1 = &PTR_DAT_110c46330;
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



/* Entry: 10a8d1f54; end: 10a8d1f6b;  */

void FUN_10a8d1f54(long param_1)

{
  func_0x00010a8dcc38(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8d1f6c; end: 10a8d1f7b;  */

long FUN_10a8d1f6c(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a8d1f7c; end: 10a8d27e7;  */

undefined8 * FUN_10a8d1f7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c28538;
  param_1[2] = &PTR_DAT_110c28590;
  func_0x00010a8e4100(param_1 + 5);
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a8d27e8; end: 10a8d27eb;  */

undefined8 * FUN_10a8d27e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c28b90;
  func_0x00010a6c8bbc(param_1 + 10);
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    __ZdlPv(param_1[7]);
  }
  FUN_10a8dd3f8(param_1 + 5);
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a8d27ec; end: 10a8d27ff;  */

void FUN_10a8d27ec(void)

{
  func_0x00010a8dcd0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8d2800; end: 10a8d280b;  */

undefined8 * FUN_10a8d2800(undefined8 *param_1)

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
  
  *param_1 = &PTR_FUN_110c2c788;
  param_1[2] = &PTR_FUN_110c2c8c8;
  param_1[5] = &PTR_FUN_110c2c8f8;
  param_1[0x5b] = &PTR_FUN_110c2c9a0;
  puVar4 = param_1 + 0x15;
  *puVar4 = &PTR_FUN_110c2c950;
  func_0x00010a1f7460(param_1 + 0x53);
  func_0x00010a05248c(param_1 + 0x51);
  *param_1 = &PTR_FUN_110c28c98;
  param_1[2] = &PTR_FUN_110bb3968;
  param_1[5] = &PTR_DAT_110bb3998;
  param_1[0x5b] = &PTR_DAT_110c28df8;
  *puVar4 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar4);
  *param_1 = &PTR_DAT_110c28e48;
  param_1[2] = &PTR_FUN_110b9f848;
  param_1[5] = &PTR_DAT_110b9f878;
  param_1[0x5b] = &PTR_DAT_110c28f18;
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



/* Entry: 10a8d280c; end: 10a8d2827;  */

void FUN_10a8d280c(undefined8 param_1)

{
  FUN_10a5749b0(param_1,&PTR_PTR_110c2c9d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8d2828; end: 10a8d2867;  */

long FUN_10a8d2828(long param_1)

{
  return param_1 + 0xa8;
}



/* Entry: 10a8d2868; end: 10a8d2887;  */

void FUN_10a8d2868(long param_1)

{
  FUN_10a5749b0(param_1 + -0x10,&PTR_PTR_110c2c9d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8d2888; end: 10a8d2897;  */

undefined8 * FUN_10a8d2888(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110c2c788;
  param_1[-3] = &PTR_FUN_110c2c8c8;
  *param_1 = &PTR_FUN_110c2c8f8;
  param_1[0x56] = &PTR_FUN_110c2c9a0;
  puVar5 = param_1 + 0x10;
  *puVar5 = &PTR_FUN_110c2c950;
  func_0x00010a1f7460(param_1 + 0x4e);
  func_0x00010a05248c(param_1 + 0x4c);
  *puVar1 = &PTR_FUN_110c28c98;
  param_1[-3] = &PTR_FUN_110bb3968;
  *param_1 = &PTR_DAT_110bb3998;
  param_1[0x56] = &PTR_DAT_110c28df8;
  *puVar5 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x48);
  func_0x00010a042c64(param_1 + 0x43);
  func_0x00010a0523dc(param_1 + 0x40);
  if (*(char *)(param_1 + 0x37) == '\x01') {
    func_0x00010a042d30(param_1 + 0x35);
  }
  param_1[0x10] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar5);
  *puVar1 = &PTR_DAT_110c28e48;
  param_1[-3] = &PTR_FUN_110b9f848;
  *param_1 = &PTR_DAT_110b9f878;
  param_1[0x56] = &PTR_DAT_110c28f18;
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



/* Entry: 10a8d2898; end: 10a8d28b7;  */

void FUN_10a8d2898(long param_1)

{
  FUN_10a5749b0(param_1 + -0x28,&PTR_PTR_110c2c9d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8d28b8; end: 10a8d28c7;  */

undefined8 * FUN_10a8d28b8(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110c2c788;
  param_1[-0x13] = &PTR_FUN_110c2c8c8;
  param_1[-0x10] = &PTR_FUN_110c2c8f8;
  param_1[0x46] = &PTR_FUN_110c2c9a0;
  *param_1 = &PTR_FUN_110c2c950;
  func_0x00010a1f7460(param_1 + 0x3e);
  func_0x00010a05248c(param_1 + 0x3c);
  *puVar1 = &PTR_FUN_110c28c98;
  param_1[-0x13] = &PTR_FUN_110bb3968;
  param_1[-0x10] = &PTR_DAT_110bb3998;
  param_1[0x46] = &PTR_DAT_110c28df8;
  *param_1 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x38);
  func_0x00010a042c64(param_1 + 0x33);
  func_0x00010a0523dc(param_1 + 0x30);
  if (*(char *)(param_1 + 0x27) == '\x01') {
    func_0x00010a042d30(param_1 + 0x25);
  }
  *param_1 = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1);
  *puVar1 = &PTR_DAT_110c28e48;
  param_1[-0x13] = &PTR_FUN_110b9f848;
  param_1[-0x10] = &PTR_DAT_110b9f878;
  param_1[0x46] = &PTR_DAT_110c28f18;
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



/* Entry: 10a8d28c8; end: 10a8d28e7;  */

void FUN_10a8d28c8(long param_1)

{
  FUN_10a5749b0(param_1 + -0xa8,&PTR_PTR_110c2c9d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8d28e8; end: 10a8d28ff;  */

undefined8 * FUN_10a8d28e8(long *param_1)

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
  *puVar1 = &PTR_FUN_110c2c788;
  puVar1[2] = &PTR_FUN_110c2c8c8;
  puVar1[5] = &PTR_FUN_110c2c8f8;
  puVar1[0x5b] = &PTR_FUN_110c2c9a0;
  puVar5 = puVar1 + 0x15;
  *puVar5 = &PTR_FUN_110c2c950;
  func_0x00010a1f7460(puVar1 + 0x53);
  func_0x00010a05248c(puVar1 + 0x51);
  *puVar1 = &PTR_FUN_110c28c98;
  puVar1[2] = &PTR_FUN_110bb3968;
  puVar1[5] = &PTR_DAT_110bb3998;
  puVar1[0x5b] = &PTR_DAT_110c28df8;
  *puVar5 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(puVar1 + 0x4d);
  func_0x00010a042c64(puVar1 + 0x48);
  func_0x00010a0523dc(puVar1 + 0x45);
  if (*(char *)(puVar1 + 0x3c) == '\x01') {
    func_0x00010a042d30(puVar1 + 0x3a);
  }
  puVar1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar5);
  *puVar1 = &PTR_DAT_110c28e48;
  puVar1[2] = &PTR_FUN_110b9f848;
  puVar1[5] = &PTR_DAT_110b9f878;
  puVar1[0x5b] = &PTR_DAT_110c28f18;
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



/* Entry: 10a8d2900; end: 10a8d2937;  */

void FUN_10a8d2900(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a5749b0((long)param_1 + lVar1,&PTR_PTR_110c2c9d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a8d2938; end: 10a8d29f3;  */

void FUN_10a8d2938(long *param_1)

{
  long lVar1;
  
  param_1 = (long *)((long)param_1 + *(long *)(*param_1 + -0x38));
  lVar1 = *(long *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x10);
  if (lVar1 != 0) {
    *(undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18) + 8) =
         *(undefined8 *)(*(long *)(lVar1 + 0x850) + 0x2c);
  }
  return;
}



/* Entry: 10a8d29f4; end: 10a8d2b47;  */

undefined8 * FUN_10a8d29f4(undefined8 *param_1)

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
  
  *param_1 = &PTR_FUN_110c26970;
  param_1[2] = &PTR_FUN_110c26ac8;
  param_1[5] = &PTR_DAT_110c26af8;
  param_1[0x6f] = &PTR_FUN_110c26bf8;
  param_1[0x15] = &PTR_DAT_110c26b50;
  param_1[0x5b] = &PTR_DAT_110c26b78;
  FUN_10a3a75a8(param_1 + 0x6c);
  FUN_10a8f11d4(param_1 + 0x6a);
  FUN_10a6210e4(param_1 + 0x68);
  if (param_1[0x65] != 0) {
    param_1[0x66] = param_1[0x65];
    __ZdlPv();
  }
  param_1[0x5b] = &PTR_DAT_110c29718;
  param_1[0x6f] = &PTR_FUN_110c29790;
  func_0x00010a004e5c(param_1 + 0x5e);
  func_0x00010a004e04(param_1 + 0x5c);
  *param_1 = &PTR_FUN_110c291b8;
  param_1[2] = &PTR_FUN_110c2c8c8;
  param_1[5] = &PTR_FUN_110c2c8f8;
  param_1[0x6f] = &PTR_FUN_110c29328;
  puVar4 = param_1 + 0x15;
  *puVar4 = &PTR_FUN_110c2c950;
  func_0x00010a1f7460(param_1 + 0x53);
  func_0x00010a05248c(param_1 + 0x51);
  *param_1 = &PTR_FUN_110c29378;
  param_1[2] = &PTR_FUN_110bb3968;
  param_1[5] = &PTR_DAT_110bb3998;
  param_1[0x6f] = &PTR_DAT_110c294d8;
  *puVar4 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar4);
  *param_1 = &PTR_DAT_110c29528;
  param_1[2] = &PTR_FUN_110b9f848;
  param_1[5] = &PTR_DAT_110b9f878;
  param_1[0x6f] = &PTR_DAT_110c295f8;
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



/* Entry: 10a8d2b48; end: 10a8d2b4f;  */

long FUN_10a8d2b48(long param_1)

{
  return param_1 + 0xa8;
}



/* Entry: 10a8d2b50; end: 10a8d2b9f;  */

undefined ** FUN_10a8d2b50(undefined8 *param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2c8 [16];
  undefined1 auStack_2b8 [272];
  undefined1 auStack_1a8 [8];
  undefined **appuStack_1a0 [2];
  undefined1 auStack_190 [272];
  undefined *puStack_18;
  
  if (*(uint *)(param_1 + 0x6e) != 0xffffffff) {
    puStack_18 = &UNK_10e4b16d3;
    ppuVar1 = &puStack_18;
    (*(code *)(&PTR_FUN_110c2b220)[*(uint *)(param_1 + 0x6e)])(ppuVar1,param_1 + 0x6c);
    return ppuVar1;
  }
  FUN_10a0d459c();
  ppuVar1 = (undefined **)(param_1 + -2);
  *ppuVar1 = (undefined *)&PTR_FUN_110c26970;
  *param_1 = &PTR_FUN_110c26ac8;
  param_1[3] = &PTR_DAT_110c26af8;
  param_1[0x6d] = &PTR_FUN_110c26bf8;
  param_1[0x13] = &PTR_DAT_110c26b50;
  param_1[0x59] = &PTR_DAT_110c26b78;
  FUN_10a3a75a8(param_1 + 0x6a);
  FUN_10a8f11d4(param_1 + 0x68);
  FUN_10a6210e4(param_1 + 0x66);
  if (param_1[99] != 0) {
    param_1[100] = param_1[99];
    __ZdlPv();
  }
  param_1[0x59] = &PTR_DAT_110c29718;
  param_1[0x6d] = &PTR_FUN_110c29790;
  func_0x00010a004e5c(param_1 + 0x5c);
  func_0x00010a004e04(param_1 + 0x5a);
  *ppuVar1 = (undefined *)&PTR_FUN_110c291b8;
  *param_1 = &PTR_FUN_110c2c8c8;
  param_1[3] = &PTR_FUN_110c2c8f8;
  param_1[0x6d] = &PTR_FUN_110c29328;
  puVar5 = param_1 + 0x13;
  *puVar5 = &PTR_FUN_110c2c950;
  func_0x00010a1f7460(param_1 + 0x51);
  func_0x00010a05248c(param_1 + 0x4f);
  *ppuVar1 = (undefined *)&PTR_FUN_110c29378;
  *param_1 = &PTR_FUN_110bb3968;
  param_1[3] = &PTR_DAT_110bb3998;
  param_1[0x6d] = &PTR_DAT_110c294d8;
  *puVar5 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4b);
  func_0x00010a042c64(param_1 + 0x46);
  func_0x00010a0523dc(param_1 + 0x43);
  if (*(char *)(param_1 + 0x3a) == '\x01') {
    func_0x00010a042d30(param_1 + 0x38);
  }
  param_1[0x13] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar5);
  *ppuVar1 = (undefined *)&PTR_DAT_110c29528;
  *param_1 = &PTR_FUN_110b9f848;
  param_1[3] = &PTR_DAT_110b9f878;
  param_1[0x6d] = &PTR_DAT_110c295f8;
  FUN_10a042dcc(param_1 + 0x11);
  *ppuVar1 = (undefined *)&PTR_DAT_110c60a00;
  *param_1 = &PTR_DAT_110c60a88;
  param_1[3] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + 9);
  puVar6 = (undefined8 *)param_1[10];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2c8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_1a0,auStack_2c8);
    _memcpy(auStack_190,auStack_2b8,0x110);
    appuStack_1a0[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_1a8,appuStack_1a0);
    __ZNSt13runtime_errorD2Ev(appuStack_1a0);
    func_0x000109d1b350(*puVar5,auStack_1a8);
    __ZNSt13exception_ptrD1Ev(auStack_1a8);
    __ZNSt13runtime_errorD2Ev(auStack_2c8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + 8;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 1);
  if ((param_1[0x10] != 0) && (lVar2 = *(long *)(param_1[0x10] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,ppuVar1);
  }
  if (*(char *)((long)param_1 + 0x7f) < '\0') {
    __ZdlPv(param_1[0xd]);
  }
  appuStack_1a0[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_1a0);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[7] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[3] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 4);
  *param_1 = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 1);
  return ppuVar1;
}



/* Entry: 10a8d2ba0; end: 10a8d311f;  */

undefined8 * FUN_10a8d2ba0(undefined8 *param_1)

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
  *puVar2 = &PTR_FUN_110c26970;
  *param_1 = &PTR_FUN_110c26ac8;
  param_1[3] = &PTR_DAT_110c26af8;
  param_1[0x6d] = &PTR_FUN_110c26bf8;
  param_1[0x13] = &PTR_DAT_110c26b50;
  param_1[0x59] = &PTR_DAT_110c26b78;
  FUN_10a3a75a8(param_1 + 0x6a);
  FUN_10a8f11d4(param_1 + 0x68);
  FUN_10a6210e4(param_1 + 0x66);
  if (param_1[99] != 0) {
    param_1[100] = param_1[99];
    __ZdlPv();
  }
  param_1[0x59] = &PTR_DAT_110c29718;
  param_1[0x6d] = &PTR_FUN_110c29790;
  func_0x00010a004e5c(param_1 + 0x5c);
  func_0x00010a004e04(param_1 + 0x5a);
  *puVar2 = &PTR_FUN_110c291b8;
  *param_1 = &PTR_FUN_110c2c8c8;
  param_1[3] = &PTR_FUN_110c2c8f8;
  param_1[0x6d] = &PTR_FUN_110c29328;
  puVar5 = param_1 + 0x13;
  *puVar5 = &PTR_FUN_110c2c950;
  func_0x00010a1f7460(param_1 + 0x51);
  func_0x00010a05248c(param_1 + 0x4f);
  *puVar2 = &PTR_FUN_110c29378;
  *param_1 = &PTR_FUN_110bb3968;
  param_1[3] = &PTR_DAT_110bb3998;
  param_1[0x6d] = &PTR_DAT_110c294d8;
  *puVar5 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4b);
  func_0x00010a042c64(param_1 + 0x46);
  func_0x00010a0523dc(param_1 + 0x43);
  if (*(char *)(param_1 + 0x3a) == '\x01') {
    func_0x00010a042d30(param_1 + 0x38);
  }
  param_1[0x13] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar5);
  *puVar2 = &PTR_DAT_110c29528;
  *param_1 = &PTR_FUN_110b9f848;
  param_1[3] = &PTR_DAT_110b9f878;
  param_1[0x6d] = &PTR_DAT_110c295f8;
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



/* Entry: 10a8d3120; end: 10a8d316f;  */

undefined ** FUN_10a8d3120(long *param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_2c8 [16];
  undefined1 auStack_2b8 [272];
  undefined1 auStack_1a8 [8];
  undefined **appuStack_1a0 [2];
  undefined1 auStack_190 [272];
  undefined *puStack_18;
  
  if (*(uint *)(param_1 + 0x13) != 0xffffffff) {
    puStack_18 = &UNK_10e4b16d3;
    ppuVar1 = &puStack_18;
    (*(code *)(&PTR_FUN_110c2b220)[*(uint *)(param_1 + 0x13)])(ppuVar1,param_1 + 0x11);
    return ppuVar1;
  }
  FUN_10a0d459c();
  ppuVar1 = (undefined **)((long)param_1 + *(long *)(*param_1 + -0x18));
  *ppuVar1 = (undefined *)&PTR_FUN_110c26970;
  ppuVar1[2] = (undefined *)&PTR_FUN_110c26ac8;
  ppuVar1[5] = (undefined *)&PTR_DAT_110c26af8;
  ppuVar1[0x6f] = (undefined *)&PTR_FUN_110c26bf8;
  ppuVar1[0x15] = (undefined *)&PTR_DAT_110c26b50;
  ppuVar1[0x5b] = (undefined *)&PTR_DAT_110c26b78;
  FUN_10a3a75a8(ppuVar1 + 0x6c);
  FUN_10a8f11d4(ppuVar1 + 0x6a);
  FUN_10a6210e4(ppuVar1 + 0x68);
  if (ppuVar1[0x65] != (undefined *)0x0) {
    ppuVar1[0x66] = ppuVar1[0x65];
    __ZdlPv();
  }
  ppuVar1[0x5b] = (undefined *)&PTR_DAT_110c29718;
  ppuVar1[0x6f] = (undefined *)&PTR_FUN_110c29790;
  func_0x00010a004e5c(ppuVar1 + 0x5e);
  func_0x00010a004e04(ppuVar1 + 0x5c);
  *ppuVar1 = (undefined *)&PTR_FUN_110c291b8;
  ppuVar1[2] = (undefined *)&PTR_FUN_110c2c8c8;
  ppuVar1[5] = (undefined *)&PTR_FUN_110c2c8f8;
  ppuVar1[0x6f] = (undefined *)&PTR_FUN_110c29328;
  ppuVar4 = ppuVar1 + 0x15;
  *ppuVar4 = (undefined *)&PTR_FUN_110c2c950;
  func_0x00010a1f7460(ppuVar1 + 0x53);
  func_0x00010a05248c(ppuVar1 + 0x51);
  *ppuVar1 = (undefined *)&PTR_FUN_110c29378;
  ppuVar1[2] = (undefined *)&PTR_FUN_110bb3968;
  ppuVar1[5] = (undefined *)&PTR_DAT_110bb3998;
  ppuVar1[0x6f] = (undefined *)&PTR_DAT_110c294d8;
  *ppuVar4 = (undefined *)&PTR_DAT_110bb39f0;
  FUN_10a042c0c(ppuVar1 + 0x4d);
  func_0x00010a042c64(ppuVar1 + 0x48);
  func_0x00010a0523dc(ppuVar1 + 0x45);
  if (*(char *)(ppuVar1 + 0x3c) == '\x01') {
    func_0x00010a042d30(ppuVar1 + 0x3a);
  }
  ppuVar1[0x15] = (undefined *)&PTR_FUN_110b9f768;
  FUN_10a1c00f4(ppuVar4);
  *ppuVar1 = (undefined *)&PTR_DAT_110c29528;
  ppuVar1[2] = (undefined *)&PTR_FUN_110b9f848;
  ppuVar1[5] = (undefined *)&PTR_DAT_110b9f878;
  ppuVar1[0x6f] = (undefined *)&PTR_DAT_110c295f8;
  FUN_10a042dcc(ppuVar1 + 0x13);
  *ppuVar1 = (undefined *)&PTR_DAT_110c60a00;
  ppuVar1[2] = (undefined *)&PTR_DAT_110c60a88;
  ppuVar1[5] = (undefined *)&PTR_DAT_110c60ab8;
  ppuVar4 = ppuVar1 + 0xb;
  puVar7 = (undefined8 *)ppuVar1[0xc];
  for (puVar6 = (undefined8 *)*ppuVar4; puVar6 != puVar7; puVar6 = puVar6 + 1) {
    FUN_10a009538(auStack_2c8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_1a0,auStack_2c8);
    _memcpy(auStack_190,auStack_2b8,0x110);
    appuStack_1a0[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_1a8,appuStack_1a0);
    __ZNSt13runtime_errorD2Ev(appuStack_1a0);
    func_0x000109d1b350(*puVar6,auStack_1a8);
    __ZNSt13exception_ptrD1Ev(auStack_1a8);
    __ZNSt13runtime_errorD2Ev(auStack_2c8);
  }
  FUN_10ac634b8(ppuVar4);
  ppuVar5 = ppuVar1 + 10;
  if ((*ppuVar5 != (undefined *)0x0) &&
     (*(undefined ***)(*(long *)(*ppuVar5 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(ppuVar1 + 3);
  if ((ppuVar1[0x12] != (undefined *)0x0) && (lVar2 = *(long *)(ppuVar1[0x12] + 0x828), lVar2 != 0))
  {
    FUN_10a1dfb2c(lVar2,ppuVar1);
  }
  if (*(char *)((long)ppuVar1 + 0x8f) < '\0') {
    __ZdlPv(ppuVar1[0xf]);
  }
  appuStack_1a0[0] = ppuVar4;
  FUN_10ac78cf4(appuStack_1a0);
  puVar3 = *ppuVar5;
  *ppuVar5 = (undefined *)0x0;
  if (puVar3 != (undefined *)0x0) {
    FUN_10ac7d690(ppuVar5);
  }
  if (ppuVar1[9] != (undefined *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  ppuVar1[5] = (undefined *)&PTR_DAT_110b17898;
  func_0x00010a004dac(ppuVar1 + 6);
  ppuVar1[2] = (undefined *)&PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(ppuVar1 + 3);
  return ppuVar1;
}



/* Entry: 10a8d3170; end: 10a8d32d3;  */

undefined8 * FUN_10a8d3170(long *param_1)

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
  *puVar1 = &PTR_FUN_110c26970;
  puVar1[2] = &PTR_FUN_110c26ac8;
  puVar1[5] = &PTR_DAT_110c26af8;
  puVar1[0x6f] = &PTR_FUN_110c26bf8;
  puVar1[0x15] = &PTR_DAT_110c26b50;
  puVar1[0x5b] = &PTR_DAT_110c26b78;
  FUN_10a3a75a8(puVar1 + 0x6c);
  FUN_10a8f11d4(puVar1 + 0x6a);
  FUN_10a6210e4(puVar1 + 0x68);
  if (puVar1[0x65] != 0) {
    puVar1[0x66] = puVar1[0x65];
    __ZdlPv();
  }
  puVar1[0x5b] = &PTR_DAT_110c29718;
  puVar1[0x6f] = &PTR_FUN_110c29790;
  func_0x00010a004e5c(puVar1 + 0x5e);
  func_0x00010a004e04(puVar1 + 0x5c);
  *puVar1 = &PTR_FUN_110c291b8;
  puVar1[2] = &PTR_FUN_110c2c8c8;
  puVar1[5] = &PTR_FUN_110c2c8f8;
  puVar1[0x6f] = &PTR_FUN_110c29328;
  puVar5 = puVar1 + 0x15;
  *puVar5 = &PTR_FUN_110c2c950;
  func_0x00010a1f7460(puVar1 + 0x53);
  func_0x00010a05248c(puVar1 + 0x51);
  *puVar1 = &PTR_FUN_110c29378;
  puVar1[2] = &PTR_FUN_110bb3968;
  puVar1[5] = &PTR_DAT_110bb3998;
  puVar1[0x6f] = &PTR_DAT_110c294d8;
  *puVar5 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(puVar1 + 0x4d);
  func_0x00010a042c64(puVar1 + 0x48);
  func_0x00010a0523dc(puVar1 + 0x45);
  if (*(char *)(puVar1 + 0x3c) == '\x01') {
    func_0x00010a042d30(puVar1 + 0x3a);
  }
  puVar1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar5);
  *puVar1 = &PTR_DAT_110c29528;
  puVar1[2] = &PTR_FUN_110b9f848;
  puVar1[5] = &PTR_DAT_110b9f878;
  puVar1[0x6f] = &PTR_DAT_110c295f8;
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



/* Entry: 10a8d32d4; end: 10a8d32df;  */

undefined8 * FUN_10a8d32d4(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined **ppuVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  *param_1 = &PTR_FUN_110c2c190;
  param_1[2] = &PTR_FUN_110c2c2e8;
  param_1[5] = &PTR_FUN_110c2c318;
  param_1[0x8d] = &PTR_DAT_110c2c438;
  param_1[0x15] = &PTR_FUN_110c2c370;
  param_1[0x5b] = &PTR_FUN_110c2c398;
  param_1[0x60] = &PTR_FUN_110c2c3e0;
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
  puVar6 = (undefined8 *)param_1[0x8a];
  if (puVar6 != param_1 + 0x8b && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
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
  param_1[0x5b] = &PTR_DAT_110c29c88;
  param_1[0x8d] = &PTR_FUN_110c29d00;
  func_0x00010a004e5c(param_1 + 0x5e);
  func_0x00010a004e04(param_1 + 0x5c);
  *param_1 = &PTR_FUN_110c297f8;
  param_1[2] = &PTR_FUN_110c2c8c8;
  param_1[5] = &PTR_FUN_110c2c8f8;
  param_1[0x8d] = &PTR_FUN_110c29968;
  puVar6 = param_1 + 0x15;
  *puVar6 = &PTR_FUN_110c2c950;
  func_0x00010a1f7460(param_1 + 0x53);
  func_0x00010a05248c(param_1 + 0x51);
  *param_1 = &PTR_FUN_110c299b8;
  param_1[2] = &PTR_FUN_110bb3968;
  param_1[5] = &PTR_DAT_110bb3998;
  param_1[0x8d] = &PTR_DAT_110c29b18;
  *puVar6 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar6);
  *param_1 = &PTR_DAT_110c29b68;
  param_1[2] = &PTR_FUN_110b9f848;
  param_1[5] = &PTR_DAT_110b9f878;
  param_1[0x8d] = &PTR_DAT_110c29c38;
  FUN_10a042dcc(param_1 + 0x13);
  *param_1 = &PTR_DAT_110c60a00;
  param_1[2] = &PTR_DAT_110c60a88;
  param_1[5] = &PTR_DAT_110c60ab8;
  ppuVar8 = (undefined **)(param_1 + 0xb);
  puVar10 = (undefined8 *)param_1[0xc];
  for (puVar6 = (undefined8 *)*ppuVar8; puVar6 != puVar10; puVar6 = puVar6 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar6,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar8);
  plVar9 = param_1 + 10;
  if ((*plVar9 != 0) && (*(undefined ***)(*(long *)(*plVar9 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
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
  lVar5 = *plVar9;
  *plVar9 = 0;
  if (lVar5 != 0) {
    FUN_10ac7d690(plVar9);
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



/* Entry: 10a8d32e0; end: 10a8d32fb;  */

void FUN_10a8d32e0(undefined8 param_1)

{
  FUN_10a574838(param_1,&PTR_PTR_110c26db0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8d32fc; end: 10a8d3317;  */

long FUN_10a8d32fc(long param_1)

{
  return param_1 + 0xa8;
}



/* Entry: 10a8d3318; end: 10a8d3337;  */

void FUN_10a8d3318(long param_1)

{
  FUN_10a574838(param_1 + -0x10,&PTR_PTR_110c26db0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8d3338; end: 10a8d3347;  */

undefined8 * FUN_10a8d3338(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined **ppuVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar5 = param_1 + -5;
  *puVar5 = &PTR_FUN_110c2c190;
  param_1[-3] = &PTR_FUN_110c2c2e8;
  *param_1 = &PTR_FUN_110c2c318;
  param_1[0x88] = &PTR_DAT_110c2c438;
  param_1[0x10] = &PTR_FUN_110c2c370;
  param_1[0x56] = &PTR_FUN_110c2c398;
  param_1[0x5b] = &PTR_FUN_110c2c3e0;
  if (param_1[0x83] != 0) {
    piVar1 = (int *)(param_1[0x83] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x7c);
    }
  }
  param_1[0x83] = 0;
  param_1[0x7f] = 0;
  param_1[0x7e] = 0;
  param_1[0x81] = 0;
  param_1[0x80] = 0;
  if (0 < *(int *)((long)param_1 + 0x3e4)) {
    lVar6 = 0;
    lVar8 = param_1[0x84];
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)((long)param_1 + 0x3e4));
  }
  puVar7 = (undefined8 *)param_1[0x85];
  if (puVar7 != param_1 + 0x86 && puVar7 != (undefined8 *)0x0) {
    _free(puVar7[-1]);
  }
  if (*(char *)((long)param_1 + 0x3df) < '\0') {
    __ZdlPv(param_1[0x79]);
  }
  if (*(char *)((long)param_1 + 0x39f) < '\0') {
    __ZdlPv(param_1[0x71]);
  }
  if (param_1[0x6c] != 0) {
    param_1[0x6d] = param_1[0x6c];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x347) < '\0') {
    __ZdlPv(param_1[0x66]);
  }
  if (*(char *)((long)param_1 + 0x32f) < '\0') {
    __ZdlPv(param_1[99]);
  }
  func_0x00010a2e2634(param_1 + 0x60);
  FUN_10a00dc2c(param_1 + 0x5b);
  param_1[0x56] = &PTR_DAT_110c29c88;
  param_1[0x88] = &PTR_FUN_110c29d00;
  func_0x00010a004e5c(param_1 + 0x59);
  func_0x00010a004e04(param_1 + 0x57);
  *puVar5 = &PTR_FUN_110c297f8;
  param_1[-3] = &PTR_FUN_110c2c8c8;
  *param_1 = &PTR_FUN_110c2c8f8;
  param_1[0x88] = &PTR_FUN_110c29968;
  puVar7 = param_1 + 0x10;
  *puVar7 = &PTR_FUN_110c2c950;
  func_0x00010a1f7460(param_1 + 0x4e);
  func_0x00010a05248c(param_1 + 0x4c);
  *puVar5 = &PTR_FUN_110c299b8;
  param_1[-3] = &PTR_FUN_110bb3968;
  *param_1 = &PTR_DAT_110bb3998;
  param_1[0x88] = &PTR_DAT_110c29b18;
  *puVar7 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x48);
  func_0x00010a042c64(param_1 + 0x43);
  func_0x00010a0523dc(param_1 + 0x40);
  if (*(char *)(param_1 + 0x37) == '\x01') {
    func_0x00010a042d30(param_1 + 0x35);
  }
  param_1[0x10] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar7);
  *puVar5 = &PTR_DAT_110c29b68;
  param_1[-3] = &PTR_FUN_110b9f848;
  *param_1 = &PTR_DAT_110b9f878;
  param_1[0x88] = &PTR_DAT_110c29c38;
  FUN_10a042dcc(param_1 + 0xe);
  *puVar5 = &PTR_DAT_110c60a00;
  param_1[-3] = &PTR_DAT_110c60a88;
  *param_1 = &PTR_DAT_110c60ab8;
  ppuVar9 = (undefined **)(param_1 + 6);
  puVar11 = (undefined8 *)param_1[7];
  for (puVar7 = (undefined8 *)*ppuVar9; puVar7 != puVar11; puVar7 = puVar7 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar7,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar9);
  plVar10 = param_1 + 5;
  if ((*plVar10 != 0) && (*(undefined ***)(*(long *)(*plVar10 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -2);
  if ((param_1[0xd] != 0) && (lVar6 = *(long *)(param_1[0xd] + 0x828), lVar6 != 0)) {
    FUN_10a1dfb2c(lVar6,puVar5);
  }
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    __ZdlPv(param_1[10]);
  }
  appuStack_180[0] = ppuVar9;
  FUN_10ac78cf4(appuStack_180);
  lVar6 = *plVar10;
  *plVar10 = 0;
  if (lVar6 != 0) {
    FUN_10ac7d690(plVar10);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  param_1[-3] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -2);
  return puVar5;
}



/* Entry: 10a8d3348; end: 10a8d3367;  */

void FUN_10a8d3348(long param_1)

{
  FUN_10a574838(param_1 + -0x28,&PTR_PTR_110c26db0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8d3368; end: 10a8d3377;  */

undefined8 * FUN_10a8d3368(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined **ppuVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar5 = param_1 + -0x15;
  *puVar5 = &PTR_FUN_110c2c190;
  param_1[-0x13] = &PTR_FUN_110c2c2e8;
  param_1[-0x10] = &PTR_FUN_110c2c318;
  param_1[0x78] = &PTR_DAT_110c2c438;
  *param_1 = &PTR_FUN_110c2c370;
  param_1[0x46] = &PTR_FUN_110c2c398;
  param_1[0x4b] = &PTR_FUN_110c2c3e0;
  if (param_1[0x73] != 0) {
    piVar1 = (int *)(param_1[0x73] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x6c);
    }
  }
  param_1[0x73] = 0;
  param_1[0x6f] = 0;
  param_1[0x6e] = 0;
  param_1[0x71] = 0;
  param_1[0x70] = 0;
  if (0 < *(int *)((long)param_1 + 0x364)) {
    lVar6 = 0;
    lVar8 = param_1[0x74];
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)((long)param_1 + 0x364));
  }
  puVar7 = (undefined8 *)param_1[0x75];
  if (puVar7 != param_1 + 0x76 && puVar7 != (undefined8 *)0x0) {
    _free(puVar7[-1]);
  }
  if (*(char *)((long)param_1 + 0x35f) < '\0') {
    __ZdlPv(param_1[0x69]);
  }
  if (*(char *)((long)param_1 + 799) < '\0') {
    __ZdlPv(param_1[0x61]);
  }
  if (param_1[0x5c] != 0) {
    param_1[0x5d] = param_1[0x5c];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x2c7) < '\0') {
    __ZdlPv(param_1[0x56]);
  }
  if (*(char *)((long)param_1 + 0x2af) < '\0') {
    __ZdlPv(param_1[0x53]);
  }
  func_0x00010a2e2634(param_1 + 0x50);
  FUN_10a00dc2c(param_1 + 0x4b);
  param_1[0x46] = &PTR_DAT_110c29c88;
  param_1[0x78] = &PTR_FUN_110c29d00;
  func_0x00010a004e5c(param_1 + 0x49);
  func_0x00010a004e04(param_1 + 0x47);
  *puVar5 = &PTR_FUN_110c297f8;
  param_1[-0x13] = &PTR_FUN_110c2c8c8;
  param_1[-0x10] = &PTR_FUN_110c2c8f8;
  param_1[0x78] = &PTR_FUN_110c29968;
  *param_1 = &PTR_FUN_110c2c950;
  func_0x00010a1f7460(param_1 + 0x3e);
  func_0x00010a05248c(param_1 + 0x3c);
  *puVar5 = &PTR_FUN_110c299b8;
  param_1[-0x13] = &PTR_FUN_110bb3968;
  param_1[-0x10] = &PTR_DAT_110bb3998;
  param_1[0x78] = &PTR_DAT_110c29b18;
  *param_1 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x38);
  func_0x00010a042c64(param_1 + 0x33);
  func_0x00010a0523dc(param_1 + 0x30);
  if (*(char *)(param_1 + 0x27) == '\x01') {
    func_0x00010a042d30(param_1 + 0x25);
  }
  *param_1 = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1);
  *puVar5 = &PTR_DAT_110c29b68;
  param_1[-0x13] = &PTR_FUN_110b9f848;
  param_1[-0x10] = &PTR_DAT_110b9f878;
  param_1[0x78] = &PTR_DAT_110c29c38;
  FUN_10a042dcc(param_1 + -2);
  *puVar5 = &PTR_DAT_110c60a00;
  param_1[-0x13] = &PTR_DAT_110c60a88;
  param_1[-0x10] = &PTR_DAT_110c60ab8;
  ppuVar9 = (undefined **)(param_1 + -10);
  puVar11 = (undefined8 *)param_1[-9];
  for (puVar7 = (undefined8 *)*ppuVar9; puVar7 != puVar11; puVar7 = puVar7 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar7,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar9);
  plVar10 = param_1 + -0xb;
  if ((*plVar10 != 0) && (*(undefined ***)(*(long *)(*plVar10 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x12);
  if ((param_1[-3] != 0) && (lVar6 = *(long *)(param_1[-3] + 0x828), lVar6 != 0)) {
    FUN_10a1dfb2c(lVar6,puVar5);
  }
  if (*(char *)((long)param_1 + -0x19) < '\0') {
    __ZdlPv(param_1[-6]);
  }
  appuStack_180[0] = ppuVar9;
  FUN_10ac78cf4(appuStack_180);
  lVar6 = *plVar10;
  *plVar10 = 0;
  if (lVar6 != 0) {
    FUN_10ac7d690(plVar10);
  }
  if (param_1[-0xc] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x10] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0xf);
  param_1[-0x13] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x12);
  return puVar5;
}



/* Entry: 10a8d3378; end: 10a8d3397;  */

void FUN_10a8d3378(long param_1)

{
  FUN_10a574838(param_1 + -0xa8,&PTR_PTR_110c26db0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8d3398; end: 10a8d33a7;  */

undefined8 * FUN_10a8d3398(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined **ppuVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar5 = param_1 + -0x5b;
  *puVar5 = &PTR_FUN_110c2c190;
  param_1[-0x59] = &PTR_FUN_110c2c2e8;
  param_1[-0x56] = &PTR_FUN_110c2c318;
  param_1[0x32] = &PTR_DAT_110c2c438;
  param_1[-0x46] = &PTR_FUN_110c2c370;
  *param_1 = &PTR_FUN_110c2c398;
  param_1[5] = &PTR_FUN_110c2c3e0;
  if (param_1[0x2d] != 0) {
    piVar1 = (int *)(param_1[0x2d] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x26);
    }
  }
  param_1[0x2d] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  if (0 < *(int *)((long)param_1 + 0x134)) {
    lVar6 = 0;
    lVar8 = param_1[0x2e];
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)((long)param_1 + 0x134));
  }
  puVar7 = (undefined8 *)param_1[0x2f];
  if (puVar7 != param_1 + 0x30 && puVar7 != (undefined8 *)0x0) {
    _free(puVar7[-1]);
  }
  if (*(char *)((long)param_1 + 0x12f) < '\0') {
    __ZdlPv(param_1[0x23]);
  }
  if (*(char *)((long)param_1 + 0xef) < '\0') {
    __ZdlPv(param_1[0x1b]);
  }
  if (param_1[0x16] != 0) {
    param_1[0x17] = param_1[0x16];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x97) < '\0') {
    __ZdlPv(param_1[0x10]);
  }
  if (*(char *)((long)param_1 + 0x7f) < '\0') {
    __ZdlPv(param_1[0xd]);
  }
  func_0x00010a2e2634(param_1 + 10);
  FUN_10a00dc2c(param_1 + 5);
  *param_1 = &PTR_DAT_110c29c88;
  param_1[0x32] = &PTR_FUN_110c29d00;
  func_0x00010a004e5c(param_1 + 3);
  func_0x00010a004e04(param_1 + 1);
  *puVar5 = &PTR_FUN_110c297f8;
  param_1[-0x59] = &PTR_FUN_110c2c8c8;
  param_1[-0x56] = &PTR_FUN_110c2c8f8;
  param_1[0x32] = &PTR_FUN_110c29968;
  puVar7 = param_1 + -0x46;
  *puVar7 = &PTR_FUN_110c2c950;
  func_0x00010a1f7460(param_1 + -8);
  func_0x00010a05248c(param_1 + -10);
  *puVar5 = &PTR_FUN_110c299b8;
  param_1[-0x59] = &PTR_FUN_110bb3968;
  param_1[-0x56] = &PTR_DAT_110bb3998;
  param_1[0x32] = &PTR_DAT_110c29b18;
  *puVar7 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + -0xe);
  func_0x00010a042c64(param_1 + -0x13);
  func_0x00010a0523dc(param_1 + -0x16);
  if (*(char *)(param_1 + -0x1f) == '\x01') {
    func_0x00010a042d30(param_1 + -0x21);
  }
  param_1[-0x46] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar7);
  *puVar5 = &PTR_DAT_110c29b68;
  param_1[-0x59] = &PTR_FUN_110b9f848;
  param_1[-0x56] = &PTR_DAT_110b9f878;
  param_1[0x32] = &PTR_DAT_110c29c38;
  FUN_10a042dcc(param_1 + -0x48);
  *puVar5 = &PTR_DAT_110c60a00;
  param_1[-0x59] = &PTR_DAT_110c60a88;
  param_1[-0x56] = &PTR_DAT_110c60ab8;
  ppuVar9 = (undefined **)(param_1 + -0x50);
  puVar11 = (undefined8 *)param_1[-0x4f];
  for (puVar7 = (undefined8 *)*ppuVar9; puVar7 != puVar11; puVar7 = puVar7 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar7,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar9);
  plVar10 = param_1 + -0x51;
  if ((*plVar10 != 0) && (*(undefined ***)(*(long *)(*plVar10 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x58);
  if ((param_1[-0x49] != 0) && (lVar6 = *(long *)(param_1[-0x49] + 0x828), lVar6 != 0)) {
    FUN_10a1dfb2c(lVar6,puVar5);
  }
  if (*(char *)((long)param_1 + -0x249) < '\0') {
    __ZdlPv(param_1[-0x4c]);
  }
  appuStack_180[0] = ppuVar9;
  FUN_10ac78cf4(appuStack_180);
  lVar6 = *plVar10;
  *plVar10 = 0;
  if (lVar6 != 0) {
    FUN_10ac7d690(plVar10);
  }
  if (param_1[-0x52] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x56] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x55);
  param_1[-0x59] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x58);
  return puVar5;
}



/* Entry: 10a8d33a8; end: 10a8d33c7;  */

void FUN_10a8d33a8(long param_1)

{
  FUN_10a574838(param_1 + -0x2d8,&PTR_PTR_110c26db0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8d33c8; end: 10a8d33d7;  */

undefined8 * FUN_10a8d33c8(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined **ppuVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar5 = param_1 + -0x60;
  *puVar5 = &PTR_FUN_110c2c190;
  param_1[-0x5e] = &PTR_FUN_110c2c2e8;
  param_1[-0x5b] = &PTR_FUN_110c2c318;
  param_1[0x2d] = &PTR_DAT_110c2c438;
  param_1[-0x4b] = &PTR_FUN_110c2c370;
  param_1[-5] = &PTR_FUN_110c2c398;
  *param_1 = &PTR_FUN_110c2c3e0;
  if (param_1[0x28] != 0) {
    piVar1 = (int *)(param_1[0x28] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x21);
    }
  }
  param_1[0x28] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  if (0 < *(int *)((long)param_1 + 0x10c)) {
    lVar6 = 0;
    lVar8 = param_1[0x29];
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)((long)param_1 + 0x10c));
  }
  puVar7 = (undefined8 *)param_1[0x2a];
  if (puVar7 != param_1 + 0x2b && puVar7 != (undefined8 *)0x0) {
    _free(puVar7[-1]);
  }
  if (*(char *)((long)param_1 + 0x107) < '\0') {
    __ZdlPv(param_1[0x1e]);
  }
  if (*(char *)((long)param_1 + 199) < '\0') {
    __ZdlPv(param_1[0x16]);
  }
  if (param_1[0x11] != 0) {
    param_1[0x12] = param_1[0x11];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    __ZdlPv(param_1[8]);
  }
  func_0x00010a2e2634(param_1 + 5);
  FUN_10a00dc2c(param_1);
  param_1[-5] = &PTR_DAT_110c29c88;
  param_1[0x2d] = &PTR_FUN_110c29d00;
  func_0x00010a004e5c(param_1 + -2);
  func_0x00010a004e04(param_1 + -4);
  *puVar5 = &PTR_FUN_110c297f8;
  param_1[-0x5e] = &PTR_FUN_110c2c8c8;
  param_1[-0x5b] = &PTR_FUN_110c2c8f8;
  param_1[0x2d] = &PTR_FUN_110c29968;
  puVar7 = param_1 + -0x4b;
  *puVar7 = &PTR_FUN_110c2c950;
  func_0x00010a1f7460(param_1 + -0xd);
  func_0x00010a05248c(param_1 + -0xf);
  *puVar5 = &PTR_FUN_110c299b8;
  param_1[-0x5e] = &PTR_FUN_110bb3968;
  param_1[-0x5b] = &PTR_DAT_110bb3998;
  param_1[0x2d] = &PTR_DAT_110c29b18;
  *puVar7 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + -0x13);
  func_0x00010a042c64(param_1 + -0x18);
  func_0x00010a0523dc(param_1 + -0x1b);
  if (*(char *)(param_1 + -0x24) == '\x01') {
    func_0x00010a042d30(param_1 + -0x26);
  }
  param_1[-0x4b] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar7);
  *puVar5 = &PTR_DAT_110c29b68;
  param_1[-0x5e] = &PTR_FUN_110b9f848;
  param_1[-0x5b] = &PTR_DAT_110b9f878;
  param_1[0x2d] = &PTR_DAT_110c29c38;
  FUN_10a042dcc(param_1 + -0x4d);
  *puVar5 = &PTR_DAT_110c60a00;
  param_1[-0x5e] = &PTR_DAT_110c60a88;
  param_1[-0x5b] = &PTR_DAT_110c60ab8;
  ppuVar9 = (undefined **)(param_1 + -0x55);
  puVar11 = (undefined8 *)param_1[-0x54];
  for (puVar7 = (undefined8 *)*ppuVar9; puVar7 != puVar11; puVar7 = puVar7 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar7,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar9);
  plVar10 = param_1 + -0x56;
  if ((*plVar10 != 0) && (*(undefined ***)(*(long *)(*plVar10 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x5d);
  if ((param_1[-0x4e] != 0) && (lVar6 = *(long *)(param_1[-0x4e] + 0x828), lVar6 != 0)) {
    FUN_10a1dfb2c(lVar6,puVar5);
  }
  if (*(char *)((long)param_1 + -0x271) < '\0') {
    __ZdlPv(param_1[-0x51]);
  }
  appuStack_180[0] = ppuVar9;
  FUN_10ac78cf4(appuStack_180);
  lVar6 = *plVar10;
  *plVar10 = 0;
  if (lVar6 != 0) {
    FUN_10ac7d690(plVar10);
  }
  if (param_1[-0x57] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x5b] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x5a);
  param_1[-0x5e] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x5d);
  return puVar5;
}



/* Entry: 10a8d33d8; end: 10a8d33f7;  */

void FUN_10a8d33d8(long param_1)

{
  FUN_10a574838(param_1 + -0x300,&PTR_PTR_110c26db0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8d33f8; end: 10a8d3413;  */

void FUN_10a8d33f8(void)

{
  return;
}



/* Entry: 10a8d3414; end: 10a8d3587;  */

void FUN_10a8d3414(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a574838((long)param_1 + lVar1,&PTR_PTR_110c26db0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a8d3588; end: 10a8d35a3;  */

long FUN_10a8d3588(long param_1)

{
  return param_1 + 0xa8;
}



/* Entry: 10a8d35a4; end: 10a8d3c27;  */

undefined8 * FUN_10a8d35a4(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined **ppuVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar8 = param_1 + -2;
  *puVar8 = &PTR_DAT_110c2be20;
  *param_1 = &PTR_FUN_110c2bf80;
  param_1[3] = &PTR_DAT_110c2bfb0;
  param_1[0x9a] = &PTR_FUN_110c2c0d0;
  param_1[0x13] = &PTR_DAT_110c2c008;
  param_1[0x59] = &PTR_DAT_110c2c030;
  param_1[0x5e] = &PTR_DAT_110c2c078;
  func_0x00010a0523dc(param_1 + 0x98);
  param_1[0x8b] = &PTR_FUN_110bef528;
  FUN_10a0d92c8(param_1 + 0x96);
  FUN_10a0d92c8(param_1 + 0x94);
  param_1[0x8d] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x8e);
  *puVar8 = &PTR_FUN_110c29d98;
  *param_1 = &PTR_FUN_110c2c2e8;
  param_1[3] = &PTR_FUN_110c2c318;
  param_1[0x9a] = &PTR_DAT_110c29f70;
  param_1[0x13] = &PTR_FUN_110c2c370;
  param_1[0x59] = &PTR_FUN_110c29ef8;
  param_1[0x5e] = &PTR_FUN_110c2c3e0;
  if (param_1[0x86] != 0) {
    piVar1 = (int *)(param_1[0x86] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x7f);
    }
  }
  param_1[0x86] = 0;
  param_1[0x82] = 0;
  param_1[0x81] = 0;
  param_1[0x84] = 0;
  param_1[0x83] = 0;
  if (0 < *(int *)((long)param_1 + 0x3fc)) {
    lVar5 = 0;
    lVar7 = param_1[0x87];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x3fc));
  }
  puVar6 = (undefined8 *)param_1[0x88];
  if (puVar6 != param_1 + 0x89 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (*(char *)((long)param_1 + 0x3f7) < '\0') {
    __ZdlPv(param_1[0x7c]);
  }
  if (*(char *)((long)param_1 + 0x3b7) < '\0') {
    __ZdlPv(param_1[0x74]);
  }
  if (param_1[0x6f] != 0) {
    param_1[0x70] = param_1[0x6f];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x35f) < '\0') {
    __ZdlPv(param_1[0x69]);
  }
  if (*(char *)((long)param_1 + 0x347) < '\0') {
    __ZdlPv(param_1[0x66]);
  }
  func_0x00010a2e2634(param_1 + 99);
  FUN_10a00dc2c(param_1 + 0x5e);
  param_1[0x59] = &PTR_DAT_110c2a450;
  param_1[0x9a] = &PTR_FUN_110c2a4c8;
  func_0x00010a004e5c(param_1 + 0x5c);
  func_0x00010a004e04(param_1 + 0x5a);
  *puVar8 = &PTR_FUN_110c29fc0;
  *param_1 = &PTR_FUN_110c2c8c8;
  param_1[3] = &PTR_FUN_110c2c8f8;
  param_1[0x9a] = &PTR_FUN_110c2a130;
  puVar6 = param_1 + 0x13;
  *puVar6 = &PTR_FUN_110c2c950;
  func_0x00010a1f7460(param_1 + 0x51);
  func_0x00010a05248c(param_1 + 0x4f);
  *puVar8 = &PTR_FUN_110c2a180;
  *param_1 = &PTR_FUN_110bb3968;
  param_1[3] = &PTR_DAT_110bb3998;
  param_1[0x9a] = &PTR_DAT_110c2a2e0;
  *puVar6 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4b);
  func_0x00010a042c64(param_1 + 0x46);
  func_0x00010a0523dc(param_1 + 0x43);
  if (*(char *)(param_1 + 0x3a) == '\x01') {
    func_0x00010a042d30(param_1 + 0x38);
  }
  param_1[0x13] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar6);
  *puVar8 = &PTR_DAT_110c2a330;
  *param_1 = &PTR_FUN_110b9f848;
  param_1[3] = &PTR_DAT_110b9f878;
  param_1[0x9a] = &PTR_DAT_110c2a400;
  FUN_10a042dcc(param_1 + 0x11);
  *puVar8 = &PTR_DAT_110c60a00;
  *param_1 = &PTR_DAT_110c60a88;
  param_1[3] = &PTR_DAT_110c60ab8;
  ppuVar9 = (undefined **)(param_1 + 9);
  puVar11 = (undefined8 *)param_1[10];
  for (puVar6 = (undefined8 *)*ppuVar9; puVar6 != puVar11; puVar6 = puVar6 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar6,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar9);
  plVar10 = param_1 + 8;
  if ((*plVar10 != 0) && (*(undefined ***)(*(long *)(*plVar10 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 1);
  if ((param_1[0x10] != 0) && (lVar5 = *(long *)(param_1[0x10] + 0x828), lVar5 != 0)) {
    FUN_10a1dfb2c(lVar5,puVar8);
  }
  if (*(char *)((long)param_1 + 0x7f) < '\0') {
    __ZdlPv(param_1[0xd]);
  }
  appuStack_180[0] = ppuVar9;
  FUN_10ac78cf4(appuStack_180);
  lVar5 = *plVar10;
  *plVar10 = 0;
  if (lVar5 != 0) {
    FUN_10ac7d690(plVar10);
  }
  if (param_1[7] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[3] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 4);
  *param_1 = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 1);
  return puVar8;
}



/* Entry: 10a8d3c28; end: 10a8d3c2b;  */

void FUN_10a8d3c28(void)

{
  return;
}



/* Entry: 10a8d3c2c; end: 10a8d3d77;  */

undefined8 * FUN_10a8d3c2c(long *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined **ppuVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar2 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar2 = &PTR_DAT_110c2be20;
  puVar2[2] = &PTR_FUN_110c2bf80;
  puVar2[5] = &PTR_DAT_110c2bfb0;
  puVar2[0x9c] = &PTR_FUN_110c2c0d0;
  puVar2[0x15] = &PTR_DAT_110c2c008;
  puVar2[0x5b] = &PTR_DAT_110c2c030;
  puVar2[0x60] = &PTR_DAT_110c2c078;
  func_0x00010a0523dc(puVar2 + 0x9a);
  puVar2[0x8d] = &PTR_FUN_110bef528;
  FUN_10a0d92c8(puVar2 + 0x98);
  FUN_10a0d92c8(puVar2 + 0x96);
  puVar2[0x8f] = &PTR_DAT_110b17898;
  func_0x00010a004dac(puVar2 + 0x90);
  *puVar2 = &PTR_FUN_110c29d98;
  puVar2[2] = &PTR_FUN_110c2c2e8;
  puVar2[5] = &PTR_FUN_110c2c318;
  puVar2[0x9c] = &PTR_DAT_110c29f70;
  puVar2[0x15] = &PTR_FUN_110c2c370;
  puVar2[0x5b] = &PTR_FUN_110c29ef8;
  puVar2[0x60] = &PTR_FUN_110c2c3e0;
  if (puVar2[0x88] != 0) {
    piVar1 = (int *)(puVar2[0x88] + 0x14);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(puVar2 + 0x81);
    }
  }
  puVar2[0x88] = 0;
  puVar2[0x84] = 0;
  puVar2[0x83] = 0;
  puVar2[0x86] = 0;
  puVar2[0x85] = 0;
  if (0 < *(int *)((long)puVar2 + 0x40c)) {
    lVar6 = 0;
    lVar8 = puVar2[0x89];
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)((long)puVar2 + 0x40c));
  }
  puVar7 = (undefined8 *)puVar2[0x8a];
  if (puVar7 != puVar2 + 0x8b && puVar7 != (undefined8 *)0x0) {
    _free(puVar7[-1]);
  }
  if (*(char *)((long)puVar2 + 0x407) < '\0') {
    __ZdlPv(puVar2[0x7e]);
  }
  if (*(char *)((long)puVar2 + 0x3c7) < '\0') {
    __ZdlPv(puVar2[0x76]);
  }
  if (puVar2[0x71] != 0) {
    puVar2[0x72] = puVar2[0x71];
    __ZdlPv();
  }
  if (*(char *)((long)puVar2 + 0x36f) < '\0') {
    __ZdlPv(puVar2[0x6b]);
  }
  if (*(char *)((long)puVar2 + 0x357) < '\0') {
    __ZdlPv(puVar2[0x68]);
  }
  func_0x00010a2e2634(puVar2 + 0x65);
  FUN_10a00dc2c(puVar2 + 0x60);
  puVar2[0x5b] = &PTR_DAT_110c2a450;
  puVar2[0x9c] = &PTR_FUN_110c2a4c8;
  func_0x00010a004e5c(puVar2 + 0x5e);
  func_0x00010a004e04(puVar2 + 0x5c);
  *puVar2 = &PTR_FUN_110c29fc0;
  puVar2[2] = &PTR_FUN_110c2c8c8;
  puVar2[5] = &PTR_FUN_110c2c8f8;
  puVar2[0x9c] = &PTR_FUN_110c2a130;
  puVar7 = puVar2 + 0x15;
  *puVar7 = &PTR_FUN_110c2c950;
  func_0x00010a1f7460(puVar2 + 0x53);
  func_0x00010a05248c(puVar2 + 0x51);
  *puVar2 = &PTR_FUN_110c2a180;
  puVar2[2] = &PTR_FUN_110bb3968;
  puVar2[5] = &PTR_DAT_110bb3998;
  puVar2[0x9c] = &PTR_DAT_110c2a2e0;
  *puVar7 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(puVar2 + 0x4d);
  func_0x00010a042c64(puVar2 + 0x48);
  func_0x00010a0523dc(puVar2 + 0x45);
  if (*(char *)(puVar2 + 0x3c) == '\x01') {
    func_0x00010a042d30(puVar2 + 0x3a);
  }
  puVar2[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar7);
  *puVar2 = &PTR_DAT_110c2a330;
  puVar2[2] = &PTR_FUN_110b9f848;
  puVar2[5] = &PTR_DAT_110b9f878;
  puVar2[0x9c] = &PTR_DAT_110c2a400;
  FUN_10a042dcc(puVar2 + 0x13);
  *puVar2 = &PTR_DAT_110c60a00;
  puVar2[2] = &PTR_DAT_110c60a88;
  puVar2[5] = &PTR_DAT_110c60ab8;
  ppuVar9 = (undefined **)(puVar2 + 0xb);
  puVar11 = (undefined8 *)puVar2[0xc];
  for (puVar7 = (undefined8 *)*ppuVar9; puVar7 != puVar11; puVar7 = puVar7 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar7,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar9);
  plVar10 = puVar2 + 10;
  if ((*plVar10 != 0) && (*(undefined ***)(*(long *)(*plVar10 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(puVar2 + 3);
  if ((puVar2[0x12] != 0) && (lVar6 = *(long *)(puVar2[0x12] + 0x828), lVar6 != 0)) {
    FUN_10a1dfb2c(lVar6,puVar2);
  }
  if (*(char *)((long)puVar2 + 0x8f) < '\0') {
    __ZdlPv(puVar2[0xf]);
  }
  appuStack_180[0] = ppuVar9;
  FUN_10ac78cf4(appuStack_180);
  lVar6 = *plVar10;
  *plVar10 = 0;
  if (lVar6 != 0) {
    FUN_10ac7d690(plVar10);
  }
  if (puVar2[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puVar2[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(puVar2 + 6);
  puVar2[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(puVar2 + 3);
  return puVar2;
}



/* Entry: 10a8d3d78; end: 10a8d3d7b;  */

undefined8 * FUN_10a8d3d78(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  *param_1 = &PTR_FUN_110c271f0;
  param_1[2] = &PTR_FUN_110c27350;
  param_1[5] = &PTR_FUN_110c27380;
  param_1[0xa5] = &PTR_FUN_110c274a0;
  param_1[0x15] = &PTR_FUN_110c273d8;
  param_1[0x5b] = &PTR_FUN_110c27400;
  param_1[0x60] = &PTR_FUN_110c27448;
  func_0x00010a05248c(param_1 + 0xa3);
  func_0x00010a8f1ebc(param_1 + 0xa1);
  func_0x00010a05248c(param_1 + 0x9f);
  FUN_10a35c2fc(param_1 + 0x9d);
  plVar5 = (long *)param_1[0x9c];
  param_1[0x9c] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  func_0x00010a0523dc(param_1 + 0x9a);
  func_0x00010a0523dc(param_1 + 0x98);
  param_1[0x8d] = &PTR_FUN_110bef4e0;
  FUN_10a0d92c8(param_1 + 0x96);
  param_1[0x8f] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x90);
  *param_1 = &PTR_FUN_110c2a530;
  param_1[2] = &PTR_FUN_110c2c2e8;
  param_1[5] = &PTR_FUN_110c2c318;
  param_1[0xa5] = &PTR_DAT_110c2a708;
  param_1[0x15] = &PTR_FUN_110c2c370;
  param_1[0x5b] = &PTR_FUN_110c2a690;
  param_1[0x60] = &PTR_FUN_110c2c3e0;
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
    lVar6 = 0;
    lVar8 = param_1[0x89];
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)((long)param_1 + 0x40c));
  }
  puVar7 = (undefined8 *)param_1[0x8a];
  if (puVar7 != param_1 + 0x8b && puVar7 != (undefined8 *)0x0) {
    _free(puVar7[-1]);
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
  param_1[0x5b] = &PTR_DAT_110c2abe8;
  param_1[0xa5] = &PTR_FUN_110c2ac60;
  func_0x00010a004e5c(param_1 + 0x5e);
  func_0x00010a004e04(param_1 + 0x5c);
  *param_1 = &PTR_FUN_110c2a758;
  param_1[2] = &PTR_FUN_110c2c8c8;
  param_1[5] = &PTR_FUN_110c2c8f8;
  param_1[0xa5] = &PTR_FUN_110c2a8c8;
  puVar7 = param_1 + 0x15;
  *puVar7 = &PTR_FUN_110c2c950;
  func_0x00010a1f7460(param_1 + 0x53);
  func_0x00010a05248c(param_1 + 0x51);
  *param_1 = &PTR_FUN_110c2a918;
  param_1[2] = &PTR_FUN_110bb3968;
  param_1[5] = &PTR_DAT_110bb3998;
  param_1[0xa5] = &PTR_DAT_110c2aa78;
  *puVar7 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar7);
  *param_1 = &PTR_DAT_110c2aac8;
  param_1[2] = &PTR_FUN_110b9f848;
  param_1[5] = &PTR_DAT_110b9f878;
  param_1[0xa5] = &PTR_DAT_110c2ab98;
  FUN_10a042dcc(param_1 + 0x13);
  *param_1 = &PTR_DAT_110c60a00;
  param_1[2] = &PTR_DAT_110c60a88;
  param_1[5] = &PTR_DAT_110c60ab8;
  ppuVar9 = (undefined **)(param_1 + 0xb);
  puVar10 = (undefined8 *)param_1[0xc];
  for (puVar7 = (undefined8 *)*ppuVar9; puVar7 != puVar10; puVar7 = puVar7 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar7,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar9);
  plVar5 = param_1 + 10;
  if ((*plVar5 != 0) && (*(undefined ***)(*(long *)(*plVar5 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar6 = *(long *)(param_1[0x12] + 0x828), lVar6 != 0)) {
    FUN_10a1dfb2c(lVar6,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar9;
  FUN_10ac78cf4(appuStack_180);
  lVar6 = *plVar5;
  *plVar5 = 0;
  if (lVar6 != 0) {
    FUN_10ac7d690(plVar5);
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



/* Entry: 10a8d3d7c; end: 10a8d3d8f;  */

void FUN_10a8d3d7c(void)

{
  func_0x00010a8dcd74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8d3d90; end: 10a8d3da7;  */

long FUN_10a8d3d90(long param_1)

{
  return param_1 + 0xa8;
}



/* Entry: 10a8d3da8; end: 10a8d3dbf;  */

void FUN_10a8d3da8(long param_1)

{
  func_0x00010a8dcd74(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8d3dc0; end: 10a8d3dc7;  */

undefined8 * FUN_10a8d3dc0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar5 = param_1 + -5;
  *puVar5 = &PTR_FUN_110c271f0;
  param_1[-3] = &PTR_FUN_110c27350;
  *param_1 = &PTR_FUN_110c27380;
  param_1[0xa0] = &PTR_FUN_110c274a0;
  param_1[0x10] = &PTR_FUN_110c273d8;
  param_1[0x56] = &PTR_FUN_110c27400;
  param_1[0x5b] = &PTR_FUN_110c27448;
  func_0x00010a05248c(param_1 + 0x9e);
  func_0x00010a8f1ebc(param_1 + 0x9c);
  func_0x00010a05248c(param_1 + 0x9a);
  FUN_10a35c2fc(param_1 + 0x98);
  plVar6 = (long *)param_1[0x97];
  param_1[0x97] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  func_0x00010a0523dc(param_1 + 0x95);
  func_0x00010a0523dc(param_1 + 0x93);
  param_1[0x88] = &PTR_FUN_110bef4e0;
  FUN_10a0d92c8(param_1 + 0x91);
  param_1[0x8a] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x8b);
  *puVar5 = &PTR_FUN_110c2a530;
  param_1[-3] = &PTR_FUN_110c2c2e8;
  *param_1 = &PTR_FUN_110c2c318;
  param_1[0xa0] = &PTR_DAT_110c2a708;
  param_1[0x10] = &PTR_FUN_110c2c370;
  param_1[0x56] = &PTR_FUN_110c2a690;
  param_1[0x5b] = &PTR_FUN_110c2c3e0;
  if (param_1[0x83] != 0) {
    piVar1 = (int *)(param_1[0x83] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x7c);
    }
  }
  param_1[0x83] = 0;
  param_1[0x7f] = 0;
  param_1[0x7e] = 0;
  param_1[0x81] = 0;
  param_1[0x80] = 0;
  if (0 < *(int *)((long)param_1 + 0x3e4)) {
    lVar7 = 0;
    lVar9 = param_1[0x84];
    do {
      *(undefined4 *)(lVar9 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)((long)param_1 + 0x3e4));
  }
  puVar8 = (undefined8 *)param_1[0x85];
  if (puVar8 != param_1 + 0x86 && puVar8 != (undefined8 *)0x0) {
    _free(puVar8[-1]);
  }
  if (*(char *)((long)param_1 + 0x3df) < '\0') {
    __ZdlPv(param_1[0x79]);
  }
  if (*(char *)((long)param_1 + 0x39f) < '\0') {
    __ZdlPv(param_1[0x71]);
  }
  if (param_1[0x6c] != 0) {
    param_1[0x6d] = param_1[0x6c];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x347) < '\0') {
    __ZdlPv(param_1[0x66]);
  }
  if (*(char *)((long)param_1 + 0x32f) < '\0') {
    __ZdlPv(param_1[99]);
  }
  func_0x00010a2e2634(param_1 + 0x60);
  FUN_10a00dc2c(param_1 + 0x5b);
  param_1[0x56] = &PTR_DAT_110c2abe8;
  param_1[0xa0] = &PTR_FUN_110c2ac60;
  func_0x00010a004e5c(param_1 + 0x59);
  func_0x00010a004e04(param_1 + 0x57);
  *puVar5 = &PTR_FUN_110c2a758;
  param_1[-3] = &PTR_FUN_110c2c8c8;
  *param_1 = &PTR_FUN_110c2c8f8;
  param_1[0xa0] = &PTR_FUN_110c2a8c8;
  puVar8 = param_1 + 0x10;
  *puVar8 = &PTR_FUN_110c2c950;
  func_0x00010a1f7460(param_1 + 0x4e);
  func_0x00010a05248c(param_1 + 0x4c);
  *puVar5 = &PTR_FUN_110c2a918;
  param_1[-3] = &PTR_FUN_110bb3968;
  *param_1 = &PTR_DAT_110bb3998;
  param_1[0xa0] = &PTR_DAT_110c2aa78;
  *puVar8 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x48);
  func_0x00010a042c64(param_1 + 0x43);
  func_0x00010a0523dc(param_1 + 0x40);
  if (*(char *)(param_1 + 0x37) == '\x01') {
    func_0x00010a042d30(param_1 + 0x35);
  }
  param_1[0x10] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar8);
  *puVar5 = &PTR_DAT_110c2aac8;
  param_1[-3] = &PTR_FUN_110b9f848;
  *param_1 = &PTR_DAT_110b9f878;
  param_1[0xa0] = &PTR_DAT_110c2ab98;
  FUN_10a042dcc(param_1 + 0xe);
  *puVar5 = &PTR_DAT_110c60a00;
  param_1[-3] = &PTR_DAT_110c60a88;
  *param_1 = &PTR_DAT_110c60ab8;
  ppuVar10 = (undefined **)(param_1 + 6);
  puVar11 = (undefined8 *)param_1[7];
  for (puVar8 = (undefined8 *)*ppuVar10; puVar8 != puVar11; puVar8 = puVar8 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar8,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar10);
  plVar6 = param_1 + 5;
  if ((*plVar6 != 0) && (*(undefined ***)(*(long *)(*plVar6 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -2);
  if ((param_1[0xd] != 0) && (lVar7 = *(long *)(param_1[0xd] + 0x828), lVar7 != 0)) {
    FUN_10a1dfb2c(lVar7,puVar5);
  }
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    __ZdlPv(param_1[10]);
  }
  appuStack_180[0] = ppuVar10;
  FUN_10ac78cf4(appuStack_180);
  lVar7 = *plVar6;
  *plVar6 = 0;
  if (lVar7 != 0) {
    FUN_10ac7d690(plVar6);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  param_1[-3] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -2);
  return puVar5;
}



/* Entry: 10a8d3dc8; end: 10a8d3ddf;  */

void FUN_10a8d3dc8(long param_1)

{
  func_0x00010a8dcd74(param_1 + -0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8d3de0; end: 10a8d3de7;  */

undefined8 * FUN_10a8d3de0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar5 = param_1 + -0x15;
  *puVar5 = &PTR_FUN_110c271f0;
  param_1[-0x13] = &PTR_FUN_110c27350;
  param_1[-0x10] = &PTR_FUN_110c27380;
  param_1[0x90] = &PTR_FUN_110c274a0;
  *param_1 = &PTR_FUN_110c273d8;
  param_1[0x46] = &PTR_FUN_110c27400;
  param_1[0x4b] = &PTR_FUN_110c27448;
  func_0x00010a05248c(param_1 + 0x8e);
  func_0x00010a8f1ebc(param_1 + 0x8c);
  func_0x00010a05248c(param_1 + 0x8a);
  FUN_10a35c2fc(param_1 + 0x88);
  plVar6 = (long *)param_1[0x87];
  param_1[0x87] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  func_0x00010a0523dc(param_1 + 0x85);
  func_0x00010a0523dc(param_1 + 0x83);
  param_1[0x78] = &PTR_FUN_110bef4e0;
  FUN_10a0d92c8(param_1 + 0x81);
  param_1[0x7a] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x7b);
  *puVar5 = &PTR_FUN_110c2a530;
  param_1[-0x13] = &PTR_FUN_110c2c2e8;
  param_1[-0x10] = &PTR_FUN_110c2c318;
  param_1[0x90] = &PTR_DAT_110c2a708;
  *param_1 = &PTR_FUN_110c2c370;
  param_1[0x46] = &PTR_FUN_110c2a690;
  param_1[0x4b] = &PTR_FUN_110c2c3e0;
  if (param_1[0x73] != 0) {
    piVar1 = (int *)(param_1[0x73] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x6c);
    }
  }
  param_1[0x73] = 0;
  param_1[0x6f] = 0;
  param_1[0x6e] = 0;
  param_1[0x71] = 0;
  param_1[0x70] = 0;
  if (0 < *(int *)((long)param_1 + 0x364)) {
    lVar7 = 0;
    lVar9 = param_1[0x74];
    do {
      *(undefined4 *)(lVar9 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)((long)param_1 + 0x364));
  }
  puVar8 = (undefined8 *)param_1[0x75];
  if (puVar8 != param_1 + 0x76 && puVar8 != (undefined8 *)0x0) {
    _free(puVar8[-1]);
  }
  if (*(char *)((long)param_1 + 0x35f) < '\0') {
    __ZdlPv(param_1[0x69]);
  }
  if (*(char *)((long)param_1 + 799) < '\0') {
    __ZdlPv(param_1[0x61]);
  }
  if (param_1[0x5c] != 0) {
    param_1[0x5d] = param_1[0x5c];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x2c7) < '\0') {
    __ZdlPv(param_1[0x56]);
  }
  if (*(char *)((long)param_1 + 0x2af) < '\0') {
    __ZdlPv(param_1[0x53]);
  }
  func_0x00010a2e2634(param_1 + 0x50);
  FUN_10a00dc2c(param_1 + 0x4b);
  param_1[0x46] = &PTR_DAT_110c2abe8;
  param_1[0x90] = &PTR_FUN_110c2ac60;
  func_0x00010a004e5c(param_1 + 0x49);
  func_0x00010a004e04(param_1 + 0x47);
  *puVar5 = &PTR_FUN_110c2a758;
  param_1[-0x13] = &PTR_FUN_110c2c8c8;
  param_1[-0x10] = &PTR_FUN_110c2c8f8;
  param_1[0x90] = &PTR_FUN_110c2a8c8;
  *param_1 = &PTR_FUN_110c2c950;
  func_0x00010a1f7460(param_1 + 0x3e);
  func_0x00010a05248c(param_1 + 0x3c);
  *puVar5 = &PTR_FUN_110c2a918;
  param_1[-0x13] = &PTR_FUN_110bb3968;
  param_1[-0x10] = &PTR_DAT_110bb3998;
  param_1[0x90] = &PTR_DAT_110c2aa78;
  *param_1 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x38);
  func_0x00010a042c64(param_1 + 0x33);
  func_0x00010a0523dc(param_1 + 0x30);
  if (*(char *)(param_1 + 0x27) == '\x01') {
    func_0x00010a042d30(param_1 + 0x25);
  }
  *param_1 = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1);
  *puVar5 = &PTR_DAT_110c2aac8;
  param_1[-0x13] = &PTR_FUN_110b9f848;
  param_1[-0x10] = &PTR_DAT_110b9f878;
  param_1[0x90] = &PTR_DAT_110c2ab98;
  FUN_10a042dcc(param_1 + -2);
  *puVar5 = &PTR_DAT_110c60a00;
  param_1[-0x13] = &PTR_DAT_110c60a88;
  param_1[-0x10] = &PTR_DAT_110c60ab8;
  ppuVar10 = (undefined **)(param_1 + -10);
  puVar11 = (undefined8 *)param_1[-9];
  for (puVar8 = (undefined8 *)*ppuVar10; puVar8 != puVar11; puVar8 = puVar8 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar8,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar10);
  plVar6 = param_1 + -0xb;
  if ((*plVar6 != 0) && (*(undefined ***)(*(long *)(*plVar6 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x12);
  if ((param_1[-3] != 0) && (lVar7 = *(long *)(param_1[-3] + 0x828), lVar7 != 0)) {
    FUN_10a1dfb2c(lVar7,puVar5);
  }
  if (*(char *)((long)param_1 + -0x19) < '\0') {
    __ZdlPv(param_1[-6]);
  }
  appuStack_180[0] = ppuVar10;
  FUN_10ac78cf4(appuStack_180);
  lVar7 = *plVar6;
  *plVar6 = 0;
  if (lVar7 != 0) {
    FUN_10ac7d690(plVar6);
  }
  if (param_1[-0xc] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x10] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0xf);
  param_1[-0x13] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x12);
  return puVar5;
}



/* Entry: 10a8d3de8; end: 10a8d3dff;  */

void FUN_10a8d3de8(long param_1)

{
  func_0x00010a8dcd74(param_1 + -0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8d3e00; end: 10a8d3e07;  */

undefined8 * FUN_10a8d3e00(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar5 = param_1 + -0x5b;
  *puVar5 = &PTR_FUN_110c271f0;
  param_1[-0x59] = &PTR_FUN_110c27350;
  param_1[-0x56] = &PTR_FUN_110c27380;
  param_1[0x4a] = &PTR_FUN_110c274a0;
  param_1[-0x46] = &PTR_FUN_110c273d8;
  *param_1 = &PTR_FUN_110c27400;
  param_1[5] = &PTR_FUN_110c27448;
  func_0x00010a05248c(param_1 + 0x48);
  func_0x00010a8f1ebc(param_1 + 0x46);
  func_0x00010a05248c(param_1 + 0x44);
  FUN_10a35c2fc(param_1 + 0x42);
  plVar6 = (long *)param_1[0x41];
  param_1[0x41] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  func_0x00010a0523dc(param_1 + 0x3f);
  func_0x00010a0523dc(param_1 + 0x3d);
  param_1[0x32] = &PTR_FUN_110bef4e0;
  FUN_10a0d92c8(param_1 + 0x3b);
  param_1[0x34] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x35);
  *puVar5 = &PTR_FUN_110c2a530;
  param_1[-0x59] = &PTR_FUN_110c2c2e8;
  param_1[-0x56] = &PTR_FUN_110c2c318;
  param_1[0x4a] = &PTR_DAT_110c2a708;
  param_1[-0x46] = &PTR_FUN_110c2c370;
  *param_1 = &PTR_FUN_110c2a690;
  param_1[5] = &PTR_FUN_110c2c3e0;
  if (param_1[0x2d] != 0) {
    piVar1 = (int *)(param_1[0x2d] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x26);
    }
  }
  param_1[0x2d] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  if (0 < *(int *)((long)param_1 + 0x134)) {
    lVar7 = 0;
    lVar9 = param_1[0x2e];
    do {
      *(undefined4 *)(lVar9 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)((long)param_1 + 0x134));
  }
  puVar8 = (undefined8 *)param_1[0x2f];
  if (puVar8 != param_1 + 0x30 && puVar8 != (undefined8 *)0x0) {
    _free(puVar8[-1]);
  }
  if (*(char *)((long)param_1 + 0x12f) < '\0') {
    __ZdlPv(param_1[0x23]);
  }
  if (*(char *)((long)param_1 + 0xef) < '\0') {
    __ZdlPv(param_1[0x1b]);
  }
  if (param_1[0x16] != 0) {
    param_1[0x17] = param_1[0x16];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x97) < '\0') {
    __ZdlPv(param_1[0x10]);
  }
  if (*(char *)((long)param_1 + 0x7f) < '\0') {
    __ZdlPv(param_1[0xd]);
  }
  func_0x00010a2e2634(param_1 + 10);
  FUN_10a00dc2c(param_1 + 5);
  *param_1 = &PTR_DAT_110c2abe8;
  param_1[0x4a] = &PTR_FUN_110c2ac60;
  func_0x00010a004e5c(param_1 + 3);
  func_0x00010a004e04(param_1 + 1);
  *puVar5 = &PTR_FUN_110c2a758;
  param_1[-0x59] = &PTR_FUN_110c2c8c8;
  param_1[-0x56] = &PTR_FUN_110c2c8f8;
  param_1[0x4a] = &PTR_FUN_110c2a8c8;
  puVar8 = param_1 + -0x46;
  *puVar8 = &PTR_FUN_110c2c950;
  func_0x00010a1f7460(param_1 + -8);
  func_0x00010a05248c(param_1 + -10);
  *puVar5 = &PTR_FUN_110c2a918;
  param_1[-0x59] = &PTR_FUN_110bb3968;
  param_1[-0x56] = &PTR_DAT_110bb3998;
  param_1[0x4a] = &PTR_DAT_110c2aa78;
  *puVar8 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + -0xe);
  func_0x00010a042c64(param_1 + -0x13);
  func_0x00010a0523dc(param_1 + -0x16);
  if (*(char *)(param_1 + -0x1f) == '\x01') {
    func_0x00010a042d30(param_1 + -0x21);
  }
  param_1[-0x46] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar8);
  *puVar5 = &PTR_DAT_110c2aac8;
  param_1[-0x59] = &PTR_FUN_110b9f848;
  param_1[-0x56] = &PTR_DAT_110b9f878;
  param_1[0x4a] = &PTR_DAT_110c2ab98;
  FUN_10a042dcc(param_1 + -0x48);
  *puVar5 = &PTR_DAT_110c60a00;
  param_1[-0x59] = &PTR_DAT_110c60a88;
  param_1[-0x56] = &PTR_DAT_110c60ab8;
  ppuVar10 = (undefined **)(param_1 + -0x50);
  puVar11 = (undefined8 *)param_1[-0x4f];
  for (puVar8 = (undefined8 *)*ppuVar10; puVar8 != puVar11; puVar8 = puVar8 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar8,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar10);
  plVar6 = param_1 + -0x51;
  if ((*plVar6 != 0) && (*(undefined ***)(*(long *)(*plVar6 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x58);
  if ((param_1[-0x49] != 0) && (lVar7 = *(long *)(param_1[-0x49] + 0x828), lVar7 != 0)) {
    FUN_10a1dfb2c(lVar7,puVar5);
  }
  if (*(char *)((long)param_1 + -0x249) < '\0') {
    __ZdlPv(param_1[-0x4c]);
  }
  appuStack_180[0] = ppuVar10;
  FUN_10ac78cf4(appuStack_180);
  lVar7 = *plVar6;
  *plVar6 = 0;
  if (lVar7 != 0) {
    FUN_10ac7d690(plVar6);
  }
  if (param_1[-0x52] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x56] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x55);
  param_1[-0x59] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x58);
  return puVar5;
}



/* Entry: 10a8d3e08; end: 10a8d3e1f;  */

void FUN_10a8d3e08(long param_1)

{
  func_0x00010a8dcd74(param_1 + -0x2d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8d3e20; end: 10a8d3e27;  */

undefined8 * FUN_10a8d3e20(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar5 = param_1 + -0x60;
  *puVar5 = &PTR_FUN_110c271f0;
  param_1[-0x5e] = &PTR_FUN_110c27350;
  param_1[-0x5b] = &PTR_FUN_110c27380;
  param_1[0x45] = &PTR_FUN_110c274a0;
  param_1[-0x4b] = &PTR_FUN_110c273d8;
  param_1[-5] = &PTR_FUN_110c27400;
  *param_1 = &PTR_FUN_110c27448;
  func_0x00010a05248c(param_1 + 0x43);
  func_0x00010a8f1ebc(param_1 + 0x41);
  func_0x00010a05248c(param_1 + 0x3f);
  FUN_10a35c2fc(param_1 + 0x3d);
  plVar6 = (long *)param_1[0x3c];
  param_1[0x3c] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  func_0x00010a0523dc(param_1 + 0x3a);
  func_0x00010a0523dc(param_1 + 0x38);
  param_1[0x2d] = &PTR_FUN_110bef4e0;
  FUN_10a0d92c8(param_1 + 0x36);
  param_1[0x2f] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x30);
  *puVar5 = &PTR_FUN_110c2a530;
  param_1[-0x5e] = &PTR_FUN_110c2c2e8;
  param_1[-0x5b] = &PTR_FUN_110c2c318;
  param_1[0x45] = &PTR_DAT_110c2a708;
  param_1[-0x4b] = &PTR_FUN_110c2c370;
  param_1[-5] = &PTR_FUN_110c2a690;
  *param_1 = &PTR_FUN_110c2c3e0;
  if (param_1[0x28] != 0) {
    piVar1 = (int *)(param_1[0x28] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x21);
    }
  }
  param_1[0x28] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  if (0 < *(int *)((long)param_1 + 0x10c)) {
    lVar7 = 0;
    lVar9 = param_1[0x29];
    do {
      *(undefined4 *)(lVar9 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)((long)param_1 + 0x10c));
  }
  puVar8 = (undefined8 *)param_1[0x2a];
  if (puVar8 != param_1 + 0x2b && puVar8 != (undefined8 *)0x0) {
    _free(puVar8[-1]);
  }
  if (*(char *)((long)param_1 + 0x107) < '\0') {
    __ZdlPv(param_1[0x1e]);
  }
  if (*(char *)((long)param_1 + 199) < '\0') {
    __ZdlPv(param_1[0x16]);
  }
  if (param_1[0x11] != 0) {
    param_1[0x12] = param_1[0x11];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    __ZdlPv(param_1[8]);
  }
  func_0x00010a2e2634(param_1 + 5);
  FUN_10a00dc2c(param_1);
  param_1[-5] = &PTR_DAT_110c2abe8;
  param_1[0x45] = &PTR_FUN_110c2ac60;
  func_0x00010a004e5c(param_1 + -2);
  func_0x00010a004e04(param_1 + -4);
  *puVar5 = &PTR_FUN_110c2a758;
  param_1[-0x5e] = &PTR_FUN_110c2c8c8;
  param_1[-0x5b] = &PTR_FUN_110c2c8f8;
  param_1[0x45] = &PTR_FUN_110c2a8c8;
  puVar8 = param_1 + -0x4b;
  *puVar8 = &PTR_FUN_110c2c950;
  func_0x00010a1f7460(param_1 + -0xd);
  func_0x00010a05248c(param_1 + -0xf);
  *puVar5 = &PTR_FUN_110c2a918;
  param_1[-0x5e] = &PTR_FUN_110bb3968;
  param_1[-0x5b] = &PTR_DAT_110bb3998;
  param_1[0x45] = &PTR_DAT_110c2aa78;
  *puVar8 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + -0x13);
  func_0x00010a042c64(param_1 + -0x18);
  func_0x00010a0523dc(param_1 + -0x1b);
  if (*(char *)(param_1 + -0x24) == '\x01') {
    func_0x00010a042d30(param_1 + -0x26);
  }
  param_1[-0x4b] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar8);
  *puVar5 = &PTR_DAT_110c2aac8;
  param_1[-0x5e] = &PTR_FUN_110b9f848;
  param_1[-0x5b] = &PTR_DAT_110b9f878;
  param_1[0x45] = &PTR_DAT_110c2ab98;
  FUN_10a042dcc(param_1 + -0x4d);
  *puVar5 = &PTR_DAT_110c60a00;
  param_1[-0x5e] = &PTR_DAT_110c60a88;
  param_1[-0x5b] = &PTR_DAT_110c60ab8;
  ppuVar10 = (undefined **)(param_1 + -0x55);
  puVar11 = (undefined8 *)param_1[-0x54];
  for (puVar8 = (undefined8 *)*ppuVar10; puVar8 != puVar11; puVar8 = puVar8 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar8,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar10);
  plVar6 = param_1 + -0x56;
  if ((*plVar6 != 0) && (*(undefined ***)(*(long *)(*plVar6 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x5d);
  if ((param_1[-0x4e] != 0) && (lVar7 = *(long *)(param_1[-0x4e] + 0x828), lVar7 != 0)) {
    FUN_10a1dfb2c(lVar7,puVar5);
  }
  if (*(char *)((long)param_1 + -0x271) < '\0') {
    __ZdlPv(param_1[-0x51]);
  }
  appuStack_180[0] = ppuVar10;
  FUN_10ac78cf4(appuStack_180);
  lVar7 = *plVar6;
  *plVar6 = 0;
  if (lVar7 != 0) {
    FUN_10ac7d690(plVar6);
  }
  if (param_1[-0x57] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x5b] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x5a);
  param_1[-0x5e] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x5d);
  return puVar5;
}



/* Entry: 10a8d3e28; end: 10a8d3e3f;  */

void FUN_10a8d3e28(long param_1)

{
  func_0x00010a8dcd74(param_1 + -0x300);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8d3e40; end: 10a8d3e4f;  */

undefined8 * FUN_10a8d3e40(long *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar2 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar2 = &PTR_FUN_110c271f0;
  puVar2[2] = &PTR_FUN_110c27350;
  puVar2[5] = &PTR_FUN_110c27380;
  puVar2[0xa5] = &PTR_FUN_110c274a0;
  puVar2[0x15] = &PTR_FUN_110c273d8;
  puVar2[0x5b] = &PTR_FUN_110c27400;
  puVar2[0x60] = &PTR_FUN_110c27448;
  func_0x00010a05248c(puVar2 + 0xa3);
  func_0x00010a8f1ebc(puVar2 + 0xa1);
  func_0x00010a05248c(puVar2 + 0x9f);
  FUN_10a35c2fc(puVar2 + 0x9d);
  plVar6 = (long *)puVar2[0x9c];
  puVar2[0x9c] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  func_0x00010a0523dc(puVar2 + 0x9a);
  func_0x00010a0523dc(puVar2 + 0x98);
  puVar2[0x8d] = &PTR_FUN_110bef4e0;
  FUN_10a0d92c8(puVar2 + 0x96);
  puVar2[0x8f] = &PTR_DAT_110b17898;
  func_0x00010a004dac(puVar2 + 0x90);
  *puVar2 = &PTR_FUN_110c2a530;
  puVar2[2] = &PTR_FUN_110c2c2e8;
  puVar2[5] = &PTR_FUN_110c2c318;
  puVar2[0xa5] = &PTR_DAT_110c2a708;
  puVar2[0x15] = &PTR_FUN_110c2c370;
  puVar2[0x5b] = &PTR_FUN_110c2a690;
  puVar2[0x60] = &PTR_FUN_110c2c3e0;
  if (puVar2[0x88] != 0) {
    piVar1 = (int *)(puVar2[0x88] + 0x14);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(puVar2 + 0x81);
    }
  }
  puVar2[0x88] = 0;
  puVar2[0x84] = 0;
  puVar2[0x83] = 0;
  puVar2[0x86] = 0;
  puVar2[0x85] = 0;
  if (0 < *(int *)((long)puVar2 + 0x40c)) {
    lVar7 = 0;
    lVar9 = puVar2[0x89];
    do {
      *(undefined4 *)(lVar9 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)((long)puVar2 + 0x40c));
  }
  puVar8 = (undefined8 *)puVar2[0x8a];
  if (puVar8 != puVar2 + 0x8b && puVar8 != (undefined8 *)0x0) {
    _free(puVar8[-1]);
  }
  if (*(char *)((long)puVar2 + 0x407) < '\0') {
    __ZdlPv(puVar2[0x7e]);
  }
  if (*(char *)((long)puVar2 + 0x3c7) < '\0') {
    __ZdlPv(puVar2[0x76]);
  }
  if (puVar2[0x71] != 0) {
    puVar2[0x72] = puVar2[0x71];
    __ZdlPv();
  }
  if (*(char *)((long)puVar2 + 0x36f) < '\0') {
    __ZdlPv(puVar2[0x6b]);
  }
  if (*(char *)((long)puVar2 + 0x357) < '\0') {
    __ZdlPv(puVar2[0x68]);
  }
  func_0x00010a2e2634(puVar2 + 0x65);
  FUN_10a00dc2c(puVar2 + 0x60);
  puVar2[0x5b] = &PTR_DAT_110c2abe8;
  puVar2[0xa5] = &PTR_FUN_110c2ac60;
  func_0x00010a004e5c(puVar2 + 0x5e);
  func_0x00010a004e04(puVar2 + 0x5c);
  *puVar2 = &PTR_FUN_110c2a758;
  puVar2[2] = &PTR_FUN_110c2c8c8;
  puVar2[5] = &PTR_FUN_110c2c8f8;
  puVar2[0xa5] = &PTR_FUN_110c2a8c8;
  puVar8 = puVar2 + 0x15;
  *puVar8 = &PTR_FUN_110c2c950;
  func_0x00010a1f7460(puVar2 + 0x53);
  func_0x00010a05248c(puVar2 + 0x51);
  *puVar2 = &PTR_FUN_110c2a918;
  puVar2[2] = &PTR_FUN_110bb3968;
  puVar2[5] = &PTR_DAT_110bb3998;
  puVar2[0xa5] = &PTR_DAT_110c2aa78;
  *puVar8 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(puVar2 + 0x4d);
  func_0x00010a042c64(puVar2 + 0x48);
  func_0x00010a0523dc(puVar2 + 0x45);
  if (*(char *)(puVar2 + 0x3c) == '\x01') {
    func_0x00010a042d30(puVar2 + 0x3a);
  }
  puVar2[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar8);
  *puVar2 = &PTR_DAT_110c2aac8;
  puVar2[2] = &PTR_FUN_110b9f848;
  puVar2[5] = &PTR_DAT_110b9f878;
  puVar2[0xa5] = &PTR_DAT_110c2ab98;
  FUN_10a042dcc(puVar2 + 0x13);
  *puVar2 = &PTR_DAT_110c60a00;
  puVar2[2] = &PTR_DAT_110c60a88;
  puVar2[5] = &PTR_DAT_110c60ab8;
  ppuVar10 = (undefined **)(puVar2 + 0xb);
  puVar11 = (undefined8 *)puVar2[0xc];
  for (puVar8 = (undefined8 *)*ppuVar10; puVar8 != puVar11; puVar8 = puVar8 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar8,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar10);
  plVar6 = puVar2 + 10;
  if ((*plVar6 != 0) && (*(undefined ***)(*(long *)(*plVar6 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(puVar2 + 3);
  if ((puVar2[0x12] != 0) && (lVar7 = *(long *)(puVar2[0x12] + 0x828), lVar7 != 0)) {
    FUN_10a1dfb2c(lVar7,puVar2);
  }
  if (*(char *)((long)puVar2 + 0x8f) < '\0') {
    __ZdlPv(puVar2[0xf]);
  }
  appuStack_180[0] = ppuVar10;
  FUN_10ac78cf4(appuStack_180);
  lVar7 = *plVar6;
  *plVar6 = 0;
  if (lVar7 != 0) {
    FUN_10ac7d690(plVar6);
  }
  if (puVar2[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puVar2[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(puVar2 + 6);
  puVar2[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(puVar2 + 3);
  return puVar2;
}



/* Entry: 10a8d3e50; end: 10a8d3e7f;  */

void FUN_10a8d3e50(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  func_0x00010a8dcd74((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a8d3e80; end: 10a8d3ea7;  */

uint * FUN_10a8d3e80(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  uint *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint *puVar11;
  uint *puVar12;
  long lVar13;
  undefined8 *puVar14;
  
  FUN_109ffdddc(&DAT_10f62a4d8);
  puVar3 = (uint *)&DAT_10f62a4d8;
  FUN_109ffdddc();
  puVar1 = *(undefined8 **)(puVar3 + 2);
  if (puVar1 < *(undefined8 **)(puVar3 + 4)) {
    uVar7 = *param_2;
    *param_2 = 0;
    puVar14 = puVar1 + 1;
    *puVar1 = uVar7;
    puVar5 = puVar3;
LAB_10a8d3f68:
    *(undefined8 **)(puVar3 + 2) = puVar14;
    return puVar5;
  }
  puVar11 = *(uint **)puVar3;
  lVar13 = (long)puVar1 - (long)puVar11;
  uVar10 = (lVar13 >> 3) + 1;
  if (uVar10 >> 0x3d == 0) {
    uVar8 = (long)*(undefined8 **)(puVar3 + 4) - (long)puVar11;
    uVar9 = (long)uVar8 >> 2;
    if (uVar9 <= uVar10) {
      uVar9 = uVar10;
    }
    if (0x7ffffffffffffff7 < uVar8) {
      uVar9 = 0x1fffffffffffffff;
    }
    if (uVar9 >> 0x3d == 0) {
      lVar4 = uVar9 << 3;
      __Znwm();
      puVar1 = (undefined8 *)(lVar4 + lVar13);
      uVar7 = *param_2;
      *param_2 = 0;
      puVar12 = (uint *)(puVar1 + -(lVar13 >> 3));
      puVar14 = puVar1 + 1;
      *puVar1 = uVar7;
      puVar5 = puVar12;
      _memcpy(puVar12,puVar11,lVar13);
      *(uint **)puVar3 = puVar12;
      *(undefined8 **)(puVar3 + 2) = puVar14;
      *(ulong *)(puVar3 + 4) = lVar4 + uVar9 * 8;
      if (puVar11 != (uint *)0x0) {
        __ZdlPv(puVar11);
        puVar5 = puVar11;
      }
      goto LAB_10a8d3f68;
    }
  }
  else {
    FUN_10a8d3f8c();
  }
  func_0x000109ffded8();
  puVar6 = &DAT_10f62a4d8;
  FUN_109ffde64();
  FUN_10a8d3fec();
  if (puVar6 == &UNK_10e4e203c) {
    puVar6 = (undefined *)0x0;
    FUN_10a8d3fec();
    if (puVar6 == &UNK_10e4e203c) {
      uVar2 = 0xf61d92d;
      func_0x0001093fd0ac();
      uVar10 = 0;
      puVar3 = (uint *)&UNK_10e4e203c;
      while( true ) {
        for (; puVar5 = (uint *)(&UNK_10e4e1f6c + uVar10 * 8), uVar2 <= *puVar5;
            uVar10 = uVar10 << 1 | 1) {
          if (0xc < uVar10) goto LAB_10a8d4044;
          puVar3 = puVar5;
        }
        puVar5 = puVar3;
        if (0xb < uVar10) break;
        uVar10 = uVar10 * 2 + 2;
      }
LAB_10a8d4044:
      if ((puVar5 == (uint *)&UNK_10e4e203c) || (uVar2 < *puVar5)) {
        puVar5 = (uint *)&UNK_10e4e203c;
      }
      return puVar5;
    }
  }
  return (uint *)(long)(char)puVar6[4];
}



/* Entry: 10a8d3ea8; end: 10a8d3f8b;  */

uint * FUN_10a8d3ea8(uint *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  uint *puVar11;
  long lVar12;
  undefined8 *puVar13;
  
  puVar1 = *(undefined8 **)(param_1 + 2);
  if (puVar1 < *(undefined8 **)(param_1 + 4)) {
    uVar6 = *param_2;
    *param_2 = 0;
    puVar13 = puVar1 + 1;
    *puVar1 = uVar6;
    puVar4 = param_1;
LAB_10a8d3f68:
    *(undefined8 **)(param_1 + 2) = puVar13;
    return puVar4;
  }
  puVar10 = *(uint **)param_1;
  lVar12 = (long)puVar1 - (long)puVar10;
  uVar9 = (lVar12 >> 3) + 1;
  if (uVar9 >> 0x3d == 0) {
    uVar7 = (long)*(undefined8 **)(param_1 + 4) - (long)puVar10;
    uVar8 = (long)uVar7 >> 2;
    if (uVar8 <= uVar9) {
      uVar8 = uVar9;
    }
    if (0x7ffffffffffffff7 < uVar7) {
      uVar8 = 0x1fffffffffffffff;
    }
    if (uVar8 >> 0x3d == 0) {
      lVar3 = uVar8 << 3;
      __Znwm();
      puVar1 = (undefined8 *)(lVar3 + lVar12);
      uVar6 = *param_2;
      *param_2 = 0;
      puVar11 = (uint *)(puVar1 + -(lVar12 >> 3));
      puVar13 = puVar1 + 1;
      *puVar1 = uVar6;
      puVar4 = puVar11;
      _memcpy(puVar11,puVar10,lVar12);
      *(uint **)param_1 = puVar11;
      *(undefined8 **)(param_1 + 2) = puVar13;
      *(ulong *)(param_1 + 4) = lVar3 + uVar8 * 8;
      if (puVar10 != (uint *)0x0) {
        __ZdlPv(puVar10);
        puVar4 = puVar10;
      }
      goto LAB_10a8d3f68;
    }
  }
  else {
    FUN_10a8d3f8c();
  }
  func_0x000109ffded8();
  puVar5 = &DAT_10f62a4d8;
  FUN_109ffde64();
  FUN_10a8d3fec();
  if (puVar5 == &UNK_10e4e203c) {
    puVar5 = (undefined *)0x0;
    FUN_10a8d3fec();
    if (puVar5 == &UNK_10e4e203c) {
      uVar2 = 0xf61d92d;
      func_0x0001093fd0ac();
      uVar9 = 0;
      puVar4 = (uint *)&UNK_10e4e203c;
      while( true ) {
        for (; puVar10 = (uint *)(&UNK_10e4e1f6c + uVar9 * 8), uVar2 <= *puVar10;
            uVar9 = uVar9 << 1 | 1) {
          if (0xc < uVar9) goto LAB_10a8d4044;
          puVar4 = puVar10;
        }
        puVar10 = puVar4;
        if (0xb < uVar9) break;
        uVar9 = uVar9 * 2 + 2;
      }
LAB_10a8d4044:
      if ((puVar10 == (uint *)&UNK_10e4e203c) || (uVar2 < *puVar10)) {
        puVar10 = (uint *)&UNK_10e4e203c;
      }
      return puVar10;
    }
  }
  return (uint *)(long)(char)puVar5[4];
}



/* Entry: 10a8d3f8c; end: 10a8d3f9f;  */

uint * FUN_10a8d3f8c(void)

{
  uint uVar1;
  undefined *puVar2;
  uint *puVar3;
  uint *puVar4;
  ulong uVar5;
  
  puVar2 = &DAT_10f62a4d8;
  FUN_109ffde64();
  FUN_10a8d3fec();
  if (puVar2 == &UNK_10e4e203c) {
    puVar2 = (undefined *)0x0;
    FUN_10a8d3fec();
    if (puVar2 == &UNK_10e4e203c) {
      uVar1 = 0xf61d92d;
      func_0x0001093fd0ac();
      uVar5 = 0;
      puVar3 = (uint *)&UNK_10e4e203c;
      while( true ) {
        for (; puVar4 = (uint *)(&UNK_10e4e1f6c + uVar5 * 8), uVar1 <= *puVar4;
            uVar5 = uVar5 << 1 | 1) {
          if (0xc < uVar5) goto LAB_10a8d4044;
          puVar3 = puVar4;
        }
        puVar4 = puVar3;
        if (0xb < uVar5) break;
        uVar5 = uVar5 * 2 + 2;
      }
LAB_10a8d4044:
      if ((puVar4 == (uint *)&UNK_10e4e203c) || (uVar1 < *puVar4)) {
        puVar4 = (uint *)&UNK_10e4e203c;
      }
      return puVar4;
    }
  }
  return (uint *)(long)(char)puVar2[4];
}



/* Entry: 10a8d3fa0; end: 10a8d3feb;  */

uint * FUN_10a8d3fa0(undefined *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  ulong uVar4;
  
  FUN_10a8d3fec();
  if (param_1 == &UNK_10e4e203c) {
    param_1 = (undefined *)0x0;
    FUN_10a8d3fec();
    if (param_1 == &UNK_10e4e203c) {
      uVar1 = 0xf61d92d;
      func_0x0001093fd0ac();
      uVar4 = 0;
      puVar2 = (uint *)&UNK_10e4e203c;
      while( true ) {
        for (; puVar3 = (uint *)(&UNK_10e4e1f6c + uVar4 * 8), uVar1 <= *puVar3;
            uVar4 = uVar4 << 1 | 1) {
          if (0xc < uVar4) goto LAB_10a8d4044;
          puVar2 = puVar3;
        }
        puVar3 = puVar2;
        if (0xb < uVar4) break;
        uVar4 = uVar4 * 2 + 2;
      }
LAB_10a8d4044:
      if ((puVar3 == (uint *)&UNK_10e4e203c) || (uVar1 < *puVar3)) {
        puVar3 = (uint *)&UNK_10e4e203c;
      }
      return puVar3;
    }
  }
  return (uint *)(long)(char)param_1[4];
}



/* Entry: 10a8d3fec; end: 10a8d4067;  */

uint * FUN_10a8d3fec(uint param_1)

{
  uint *puVar1;
  uint *puVar2;
  ulong uVar3;
  
  uVar3 = 0;
  puVar1 = (uint *)&UNK_10e4e203c;
  while( true ) {
    for (; puVar2 = (uint *)(&UNK_10e4e1f6c + uVar3 * 8), *puVar2 < param_1; uVar3 = uVar3 * 2 + 2)
    {
      puVar2 = puVar1;
      if (0xb < uVar3) goto LAB_10a8d4044;
    }
    if (0xc < uVar3) break;
    uVar3 = uVar3 << 1 | 1;
    puVar1 = puVar2;
  }
LAB_10a8d4044:
  if ((puVar2 == (uint *)&UNK_10e4e203c) || (param_1 < *puVar2)) {
    puVar2 = (uint *)&UNK_10e4e203c;
  }
  return puVar2;
}



/* Entry: 10a8d4068; end: 10a8d40bf;  */

long FUN_10a8d4068(long param_1)

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



/* Entry: 10a8d40c0; end: 10a8d415b;  */

long * FUN_10a8d40c0(void)

{
  undefined **ppuVar1;
  long *plVar2;
  long *plVar3;
  long *plStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long *plStack_30;
  undefined **ppuStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  ppuVar1 = &PTR___tlv_bootstrap_11340de28;
  (*(code *)PTR___tlv_bootstrap_11340de28)();
  puStack_20 = &UNK_10f63b699;
  uStack_18 = 0x28;
  if (*ppuVar1 != (undefined *)0x0) {
    plStack_30 = (long *)(*ppuVar1 + 0x10);
    if ((*plStack_30 != 0) && (lRam00000001137ebdf8 != -1)) {
      ppuStack_28 = &puStack_20;
      puStack_20 = (undefined *)&plStack_30;
      __ZNSt3__111__call_onceERVmPvPFvS2_E(0x1137ebdf8,&ppuStack_28,FUN_10a8d415c);
    }
    return (long *)(ulong)uRam00000001137ebdc8;
  }
  ppuVar1 = &puStack_20;
  FUN_10a0edfc4();
  plVar3 = *(long **)**(undefined8 **)*ppuVar1;
  plVar2 = (long *)0x38;
  __Znwm();
  lStack_58 = -0x7fffffffffffffc8;
  uStack_60 = 0x35;
  *(undefined8 *)((long)plVar2 + 0x2d) = 0x44454c42414e455f;
  plVar2[3] = 0x544e454e4f504d4f;
  plVar2[2] = 0x435f4c4d5f434e59;
  plVar2[5] = 0x4e455f4552555450;
  plVar2[4] = 0x41435f54534f505f;
  plVar2[1] = 0x535f4543524f465f;
  *plVar2 = 0x45524f43534e454c;
  *(undefined1 *)((long)plVar2 + 0x35) = 0;
  plStack_68 = plVar2;
  (**(code **)(*plVar3 + 0x40))(plVar3,&plStack_68,0);
  uRam00000001137ebdc8 = (uint)plVar3;
  if (lStack_58 < 0) {
    __ZdlPv(plStack_68);
    plVar3 = plStack_68;
  }
  return plVar3;
}



/* Entry: 10a8d415c; end: 10a8d4217;  */

void FUN_10a8d415c(undefined8 *param_1)

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
  uStack_30 = 0x35;
  *(undefined8 *)((long)puVar1 + 0x2d) = 0x44454c42414e455f;
  puVar1[3] = 0x544e454e4f504d4f;
  puVar1[2] = 0x435f4c4d5f434e59;
  puVar1[5] = 0x4e455f4552555450;
  puVar1[4] = 0x41435f54534f505f;
  puVar1[1] = 0x535f4543524f465f;
  *puVar1 = 0x45524f43534e454c;
  *(undefined1 *)((long)puVar1 + 0x35) = 0;
  puStack_38 = puVar1;
  (**(code **)(*plVar2 + 0x40))(plVar2,&puStack_38,0);
  uRam00000001137ebdc8 = SUB84(plVar2,0);
  if (lStack_28 < 0) {
    __ZdlPv(puStack_38);
  }
  return;
}



/* Entry: 10a8d4218; end: 10a8d422b;  */

undefined1  [16] FUN_10a8d4218(undefined8 param_1,undefined8 param_2)

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
    func_0x00010a6d1c00();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 10a8d422c; end: 10a8d4307;  */

undefined1  [16] FUN_10a8d422c(long *param_1,undefined8 param_2)

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
    func_0x00010a6d1c00();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10a8d4308; end: 10a8d431b;  */

undefined1  [16] FUN_10a8d4308(undefined8 param_1,undefined8 param_2)

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
    FUN_10a8dd3f8();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 10a8d431c; end: 10a8d43f7;  */

undefined1  [16] FUN_10a8d431c(long *param_1,undefined8 param_2)

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
    FUN_10a8dd3f8();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10a8d43f8; end: 10a8d451b;  */

void FUN_10a8d43f8(int param_1)

{
  undefined8 ****ppppuVar1;
  code *pcVar2;
  undefined8 ****ppppuVar3;
  ulong *extraout_x8;
  ulong *extraout_x8_00;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 ***pppuStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar5 = 0x240;
  puVar4 = (ulong *)&UNK_110bac0c0;
  do {
    if ((int)puVar4[-2] == param_1) {
      if (lVar5 != 0) goto LAB_10a8d444c;
      break;
    }
    puVar4 = puVar4 + 3;
    lVar5 = lVar5 + -0x18;
  } while (lVar5 != 0);
  FUN_10a26f290(&UNK_10f61d92d);
  puVar4 = extraout_x8;
LAB_10a8d444c:
  uVar6 = *puVar4;
  if (0x7ffffffffffffff7 < uVar6) {
    func_0x000109ffde50();
    puVar4 = extraout_x8_00;
  }
  uVar7 = puVar4[-1];
  if (uVar6 < 0x17) {
    uStack_60 = CONCAT17((char)uVar6,(undefined7)uStack_60);
    ppppuVar3 = &pppuStack_70;
    if (uVar6 == 0) goto LAB_10a8d44b4;
  }
  else {
    ppppuVar1 = (undefined8 ****)0x19;
    if ((uVar6 | 7) != 0x17) {
      ppppuVar1 = (undefined8 ****)((uVar6 | 7) + 1);
    }
    ppppuVar3 = ppppuVar1;
    __Znwm();
    uStack_60 = (ulong)ppppuVar1 | 0x8000000000000000;
    pppuStack_70 = ppppuVar3;
    uStack_68 = uVar6;
  }
  _memmove(ppppuVar3,uVar7,uVar6);
LAB_10a8d44b4:
  *(undefined1 *)((long)ppppuVar3 + uVar6) = 0;
  FUN_10a0ee900(auStack_58,&UNK_10f680ed4,0x44);
  FUN_10a0029c0(auStack_58);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a8d44f0);
  (*pcVar2)();
}



/* Entry: 10a8d451c; end: 10a8d4567;  */

long * FUN_10a8d451c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10a1ae89c(lVar1 + 0x20,0);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10a8d4568; end: 10a8d4587;  */

ulong FUN_10a8d4568(ulong param_1)

{
  byte *pbVar1;
  ulong uVar2;
  
  if ((uint)param_1 < 4) {
    return param_1;
  }
  pbVar1 = &UNK_10f68108f;
  func_0x000105688514();
  uVar2 = (ulong)*pbVar1 + 0x9e3779b9;
  uVar2 = (ulong)*(uint *)(pbVar1 + 4) + uVar2 * 0x40 + (uVar2 >> 2) + 0x9e3779b9 ^ uVar2;
  uVar2 = (ulong)*(uint *)(pbVar1 + 8) + uVar2 * 0x40 + (uVar2 >> 2) + 0x9e3779b9 ^ uVar2;
  uVar2 = (ulong)*(uint *)(pbVar1 + 0xc) + uVar2 * 0x40 + (uVar2 >> 2) + 0x9e3779b9 ^ uVar2;
  uVar2 = (ulong)*(uint *)(pbVar1 + 0x10) + uVar2 * 0x40 + (uVar2 >> 2) + 0x9e3779b9 ^ uVar2;
  return ((ulong)pbVar1[0x14] | uVar2 << 6) + (uVar2 >> 2) + 0x9e3779b9 ^ uVar2;
}


