/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a3f5960; end: 10a3f596f;  */

void FUN_10a3f5960(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bd1820;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a3f5970; end: 10a3f598f;  */

void FUN_10a3f5970(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bd1820;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3f5990; end: 10a3f599b;  */

long FUN_10a3f5990(long param_1)

{
  func_0x000104c4f944(param_1 + 0x68);
  func_0x00010acfdc18(param_1 + 0x50,*(undefined8 *)(param_1 + 0x58));
  func_0x00010acfdb7c(param_1 + 0x38,*(undefined8 *)(param_1 + 0x40));
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  return param_1 + 0x18;
}



/* Entry: 10a3f599c; end: 10a3f59f3;  */

long FUN_10a3f599c(long param_1)

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



/* Entry: 10a3f59f4; end: 10a3f5a03;  */

void FUN_10a3f59f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bd1870;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a3f5a04; end: 10a3f5a23;  */

void FUN_10a3f5a04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bd1870;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3f5a24; end: 10a3f5a7f;  */

void FUN_10a3f5a24(long param_1)

{
  long lVar1;
  
  FUN_10ad4a068(param_1 + 0x18);
  FUN_10a3f5a84(*(undefined8 *)(param_1 + 0x60));
  func_0x000107c28478(param_1 + 0x40,*(undefined8 *)(param_1 + 0x48));
  func_0x00010a3f5abc(param_1 + 0x18,*(undefined8 *)(param_1 + 0x28));
  lVar1 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a3f5a80; end: 10a3f5a83;  */

void FUN_10a3f5a80(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3f5a84; end: 10a3f5ba7;  */

void FUN_10a3f5a84(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_10a3f5a84(*param_1);
    FUN_10a3f5a84(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a3f5ba8; end: 10a3f5c1b;  */

void FUN_10a3f5ba8(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)*param_1;
  *param_1 = 0;
  if (plVar2 == (long *)0x0) {
    return;
  }
  plVar1 = (long *)plVar2[2];
  while (plVar1 != (long *)0x0) {
    lVar3 = *plVar1;
    FUN_10a3f5c1c(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar3;
  }
  lVar3 = *plVar2;
  *plVar2 = 0;
  if (lVar3 != 0) {
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar2);
  return;
}



/* Entry: 10a3f5c1c; end: 10a3f5c73;  */

long FUN_10a3f5c1c(long param_1)

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



/* Entry: 10a3f5c74; end: 10a3f5db3;  */

void FUN_10a3f5c74(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *param_1;
  *param_1 = 0;
  if (lVar3 == 0) {
    return;
  }
  func_0x00010a2e3510(lVar3 + 0x1b8);
  lVar4 = 0x1b8;
  do {
    lVar4 = lVar4 + -0x28;
    plVar1 = (long *)(lVar3 + lVar4);
    plVar2 = (long *)plVar1[2];
    while (plVar2 != (long *)0x0) {
      lVar5 = *plVar2;
      FUN_10a3f5db4(plVar2 + 2);
      __ZdlPv(plVar2);
      plVar2 = (long *)lVar5;
    }
    lVar5 = *plVar1;
    *plVar1 = 0;
    if (lVar5 != 0) {
      __ZdlPv();
    }
  } while (lVar4 != 0x118);
  do {
    lVar4 = lVar4 + -0x28;
    plVar1 = (long *)(lVar3 + lVar4);
    plVar2 = (long *)plVar1[2];
    while (plVar2 != (long *)0x0) {
      lVar5 = *plVar2;
      (**(code **)plVar2[6])();
      if (*(char *)((long)plVar2 + 0x27) < '\0') {
        __ZdlPv(plVar2[2]);
      }
      __ZdlPv(plVar2);
      plVar2 = (long *)lVar5;
    }
    lVar5 = *plVar1;
    *plVar1 = 0;
    if (lVar5 != 0) {
      __ZdlPv();
    }
  } while (lVar4 != 0x78);
  if (*(char *)(lVar3 + 0x77) < '\0') {
    __ZdlPv(*(undefined8 *)(lVar3 + 0x60));
  }
  if (*(char *)(lVar3 + 0x5f) < '\0') {
    __ZdlPv(*(undefined8 *)(lVar3 + 0x48));
  }
  if (*(char *)(lVar3 + 0x47) < '\0') {
    __ZdlPv(*(undefined8 *)(lVar3 + 0x30));
  }
  if (*(long *)(lVar3 + 0x20) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(long *)(lVar3 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar3);
  return;
}



/* Entry: 10a3f5db4; end: 10a3f5e4f;  */

void FUN_10a3f5db4(undefined8 *param_1)

{
  FUN_10a04c5b0(param_1 + 5);
  func_0x00010a09db0c(param_1 + 3);
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10a3f5e50; end: 10a3f5e5f;  */

void FUN_10a3f5e50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bd18c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a3f5e60; end: 10a3f5e7f;  */

void FUN_10a3f5e60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bd18c0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3f5e80; end: 10a3f5e87;  */

void FUN_10a3f5e80(void)

{
  return;
}



/* Entry: 10a3f5e88; end: 10a3f5f43;  */

long FUN_10a3f5e88(long param_1)

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



/* Entry: 10a3f5f44; end: 10a3f5faf;  */

undefined8 * FUN_10a3f5f44(undefined8 *param_1,undefined *param_2)

{
  code *pcVar1;
  undefined **ppuVar2;
  
  param_1[3] = 0;
  ppuVar2 = &PTR___tlv_bootstrap_11340dee8;
  (*(code *)PTR___tlv_bootstrap_11340dee8)();
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  if (*ppuVar2 == (undefined *)0x0) {
    *ppuVar2 = param_2;
    return param_1;
  }
  FUN_10a0ee06c(&UNK_10f646d5c);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a3f5f9c);
  (*pcVar1)();
}



/* Entry: 10a3f5fb0; end: 10a3f5fd7;  */

void FUN_10a3f5fb0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10a243114();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a3f5fd8; end: 10a3f604b;  */

void FUN_10a3f5fd8(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010a3f6014(param_2 + 0x50);
    func_0x000109f6f4d4(param_2 + 0x28);
    func_0x00010a3f60c0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a3f604c; end: 10a3f6123;  */

void FUN_10a3f604c(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  while (param_2 != (long *)0x0) {
    lVar1 = *param_2;
    param_2[3] = (long)&PTR_FUN_110bbaa88;
    (**(code **)param_2[0xc])();
    FUN_10a296af4(param_2 + 6);
    param_2[3] = (long)&PTR_DAT_110b17898;
    func_0x00010a004dac(param_2 + 4);
    __ZdlPv(param_2);
    param_2 = (long *)lVar1;
  }
  return;
}



/* Entry: 10a3f6124; end: 10a3f625f;  */

void FUN_10a3f6124(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x000104c4f944(lVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a3f6260; end: 10a3f62c7;  */

void FUN_10a3f6260(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar4 = 0x1198;
  __Znwm();
  FUN_10a3f62c8();
  *param_1 = lVar4 + 0x18;
  param_1[1] = lVar4;
  if (((long *)(lVar4 + 0x30) != (long *)0x0) &&
     ((lVar5 = *(long *)(lVar4 + 0x38), lVar5 == 0 || (*(long *)(lVar5 + 8) == -1)))) {
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
      lVar5 = *(long *)(lVar4 + 0x38);
    }
    *(long *)(lVar4 + 0x30) = lVar4 + 0x18;
    *(long **)(lVar4 + 0x38) = plVar6;
    if (lVar5 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a3f62c8; end: 10a3f6313;  */

undefined8 * FUN_10a3f62c8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110bd1958;
  FUN_10a3cce0c(param_1 + 3,param_3);
  return param_1;
}



/* Entry: 10a3f6314; end: 10a3f6323;  */

void FUN_10a3f6314(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bd1958;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a3f6324; end: 10a3f6343;  */

void FUN_10a3f6324(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bd1958;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3f6344; end: 10a3f634f;  */

undefined * FUN_10a3f6344(long param_1)

{
  ulong *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined1 *puVar5;
  long *plVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined *unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  undefined *unaff_x22;
  long lVar16;
  undefined8 unaff_x23;
  undefined1 *unaff_x24;
  undefined1 *unaff_x25;
  undefined *unaff_x26;
  undefined **unaff_x27;
  undefined1 *unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  puVar10 = (undefined *)(param_1 + 0x18);
  puVar5 = (undefined1 *)register0x00000008;
  while( true ) {
    *(undefined1 **)(puVar5 + -0x60) = unaff_x28;
    *(undefined ***)(puVar5 + -0x58) = unaff_x27;
    *(undefined **)(puVar5 + -0x50) = unaff_x26;
    *(undefined1 **)(puVar5 + -0x48) = unaff_x25;
    *(undefined1 **)(puVar5 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar5 + -0x38) = unaff_x23;
    *(undefined **)(puVar5 + -0x30) = unaff_x22;
    *(long **)(puVar5 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar5 + -0x20) = unaff_x20;
    *(undefined **)(puVar5 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar5 + -0x10) = unaff_x29;
    *(code **)(puVar5 + -8) = unaff_x30;
    unaff_x29 = puVar5 + -0x10;
    *(undefined8 *)(puVar5 + -0x70) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined8 *)(puVar5 + -0xb0) = 0;
    *(undefined8 *)(puVar5 + -0xa8) = 0;
    *(undefined8 *)(puVar5 + -0xa0) = 0;
    if (*(long *)(puVar10 + 0x880) != 0) {
      (**(code **)(**(long **)(*(long *)(puVar10 + 0x880) + 0x48) + 0x38))(puVar5 + -0x370);
      puVar14 = *(undefined8 **)(puVar5 + -0xa8);
      if (puVar14 < *(undefined8 **)(puVar5 + -0xa0)) {
        *puVar14 = *(undefined8 *)(puVar5 + -0x370);
        *(undefined8 **)(puVar5 + -0xa8) = puVar14 + 1;
      }
      else {
        puVar7 = puVar5 + -0xb0;
        func_0x0001098b74c4(puVar7,puVar5 + -0x370);
        plVar6 = *(long **)(puVar5 + -0x370);
        *(undefined1 **)(puVar5 + -0xa8) = puVar7;
        if (plVar6 != (long *)0x0) {
          puVar1 = (ulong *)(plVar6 + 1);
          do {
            uVar15 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar15 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar15 & 0x1fffffffc) == 4) {
            do {
              uVar15 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar15 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar15 - 1 == 0) {
              (**(code **)(*plVar6 + 8))();
            }
          }
        }
      }
    }
    if (*(long *)(puVar10 + 0x870) != 0) {
      FUN_10a462294(puVar5 + -0x370);
      puVar14 = *(undefined8 **)(puVar5 + -0xa8);
      if (puVar14 < *(undefined8 **)(puVar5 + -0xa0)) {
        *puVar14 = *(undefined8 *)(puVar5 + -0x370);
        *(undefined8 **)(puVar5 + -0xa8) = puVar14 + 1;
      }
      else {
        puVar7 = puVar5 + -0xb0;
        func_0x0001098b74c4(puVar7,puVar5 + -0x370);
        plVar6 = *(long **)(puVar5 + -0x370);
        *(undefined1 **)(puVar5 + -0xa8) = puVar7;
        if (plVar6 != (long *)0x0) {
          puVar1 = (ulong *)(plVar6 + 1);
          do {
            uVar15 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar15 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar15 & 0x1fffffffc) == 4) {
            do {
              uVar15 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar15 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar15 - 1 == 0) {
              (**(code **)(*plVar6 + 8))();
            }
          }
        }
      }
    }
    if (puVar10[0x1a8] == '\x01') {
      plVar6 = *(long **)(puVar10 + 0x160);
      (**(code **)(*plVar6 + 0x18))();
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(puVar5 + -0x370);
        puVar14 = *(undefined8 **)(puVar5 + -0xa8);
        if (puVar14 < *(undefined8 **)(puVar5 + -0xa0)) {
          *puVar14 = *(undefined8 *)(puVar5 + -0x370);
          *(undefined8 **)(puVar5 + -0xa8) = puVar14 + 1;
        }
        else {
          puVar7 = puVar5 + -0xb0;
          func_0x0001098b74c4(puVar7,puVar5 + -0x370);
          plVar6 = *(long **)(puVar5 + -0x370);
          *(undefined1 **)(puVar5 + -0xa8) = puVar7;
          if (plVar6 != (long *)0x0) {
            puVar1 = (ulong *)(plVar6 + 1);
            do {
              uVar15 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar15 - 4;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((uVar15 & 0x1fffffffc) == 4) {
              do {
                uVar15 = *puVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                  *puVar1 = uVar15 - 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (uVar15 - 1 == 0) {
                (**(code **)(*plVar6 + 8))();
              }
            }
          }
        }
      }
    }
    if (puVar10[0x158] == '\x01') {
      plVar6 = *(long **)(puVar10 + 0x110);
      (**(code **)(*plVar6 + 0x18))();
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(puVar5 + -0x370);
        puVar14 = *(undefined8 **)(puVar5 + -0xa8);
        if (puVar14 < *(undefined8 **)(puVar5 + -0xa0)) {
          *puVar14 = *(undefined8 *)(puVar5 + -0x370);
          *(undefined8 **)(puVar5 + -0xa8) = puVar14 + 1;
        }
        else {
          puVar7 = puVar5 + -0xb0;
          func_0x0001098b74c4(puVar7,puVar5 + -0x370);
          plVar6 = *(long **)(puVar5 + -0x370);
          *(undefined1 **)(puVar5 + -0xa8) = puVar7;
          if (plVar6 != (long *)0x0) {
            puVar1 = (ulong *)(plVar6 + 1);
            do {
              uVar15 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar15 - 4;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((uVar15 & 0x1fffffffc) == 4) {
              do {
                uVar15 = *puVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                  *puVar1 = uVar15 - 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (uVar15 - 1 == 0) {
                (**(code **)(*plVar6 + 8))();
              }
            }
          }
        }
      }
    }
    if (puVar10[0x1f8] == '\x01') {
      plVar6 = *(long **)(puVar10 + 0x1b0);
      (**(code **)(*plVar6 + 0x18))();
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(puVar5 + -0x370);
        puVar14 = *(undefined8 **)(puVar5 + -0xa8);
        if (puVar14 < *(undefined8 **)(puVar5 + -0xa0)) {
          *puVar14 = *(undefined8 *)(puVar5 + -0x370);
          *(undefined8 **)(puVar5 + -0xa8) = puVar14 + 1;
        }
        else {
          puVar7 = puVar5 + -0xb0;
          func_0x0001098b74c4(puVar7,puVar5 + -0x370);
          plVar6 = *(long **)(puVar5 + -0x370);
          *(undefined1 **)(puVar5 + -0xa8) = puVar7;
          if (plVar6 != (long *)0x0) {
            puVar1 = (ulong *)(plVar6 + 1);
            do {
              uVar15 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar15 - 4;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((uVar15 & 0x1fffffffc) == 4) {
              do {
                uVar15 = *puVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                  *puVar1 = uVar15 - 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (uVar15 - 1 == 0) {
                (**(code **)(*plVar6 + 8))();
              }
            }
          }
        }
      }
    }
    lVar16 = *(long *)(puVar5 + -0xb0);
    lVar2 = *(long *)(puVar5 + -0xa8);
    if (lVar16 == lVar2) {
      FUN_109d1b124(puVar5 + -0x380);
    }
    else {
      *(long *)(puVar5 + -0x378) = lVar2 - lVar16 >> 3;
      func_0x0001098b7954(puVar5 + -0x370,puVar5 + -0x378);
      plVar6 = (long *)(*(long *)(puVar5 + -0x360) + 8);
      if (*plVar6 != 0) {
        func_0x0001092b4274(plVar6);
      }
      *plVar6 = *(long *)(puVar5 + -0x368);
      *(undefined8 *)(puVar5 + -0x368) = 0;
      lVar12 = 0;
      do {
        func_0x0001098b799c(*(undefined8 *)(puVar5 + -0x360),lVar12,lVar16);
        lVar16 = lVar16 + 8;
        lVar12 = lVar12 + 1;
      } while (lVar16 != lVar2);
      *(undefined8 *)(puVar5 + -0x380) = *(undefined8 *)(puVar5 + -0x370);
      *(undefined8 *)(puVar5 + -0x370) = 0;
      if (*(long *)(puVar5 + -0x368) != 0) {
        func_0x0001092b4274(puVar5 + -0x368);
        plVar6 = *(long **)(puVar5 + -0x370);
        if (plVar6 != (long *)0x0) {
          puVar1 = (ulong *)(plVar6 + 1);
          do {
            uVar15 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar15 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar15 & 0x1fffffffc) == 4) {
            do {
              uVar15 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar15 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar15 - 1 == 0) {
              (**(code **)(*plVar6 + 8))();
            }
          }
        }
      }
    }
    *(undefined1 **)(puVar5 + -0x370) = puVar5 + -0xb0;
    FUN_10a2325bc(puVar5 + -0x370);
    plVar6 = *(long **)(puVar5 + -0x380);
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar15 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar15 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar15 & 0x1fffffffc) == 4) {
        do {
          uVar15 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar15 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar15 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    pbVar8 = (byte *)0x1138363e8;
    FUN_10a08fec0();
    if ((*pbVar8 & 1) != 0) {
      _glFinish();
    }
    puVar10[0xd72] = 1;
    ppuVar9 = &PTR___tlv_bootstrap_11340dea0;
    (*(code *)PTR___tlv_bootstrap_11340dea0)();
    unaff_x22 = *ppuVar9;
    *ppuVar9 = puVar10;
    if (*(long *)(puVar10 + 0xb00) != 0) {
      FUN_10a76c62c();
    }
    *(code **)(puVar5 + -0x370) = FUN_10a3ec858;
    *(undefined ***)(puVar5 + -0x368) = &PTR_FUN_110bd1528;
    *(code **)(puVar5 + -0x330) = FUN_10a3ec8a8;
    *(undefined ***)(puVar5 + -0x328) = &PTR_FUN_110bd1548;
    *(undefined **)(puVar5 + -800) = puVar10;
    *(code **)(puVar5 + -0x2f0) = FUN_10a3ed298;
    *(undefined ***)(puVar5 + -0x2e8) = &PTR_FUN_110bd1568;
    *(undefined **)(puVar5 + -0x2e0) = puVar10;
    *(code **)(puVar5 + -0x2b0) = FUN_10a3ed388;
    *(undefined ***)(puVar5 + -0x2a8) = &PTR_FUN_110bd1588;
    *(undefined **)(puVar5 + -0x2a0) = puVar10;
    *(code **)(puVar5 + -0x270) = FUN_10a3ed560;
    *(undefined ***)(puVar5 + -0x268) = &PTR_FUN_110bd15a8;
    *(undefined **)(puVar5 + -0x260) = puVar10;
    *(code **)(puVar5 + -0x230) = FUN_10a3ed6bc;
    *(undefined ***)(puVar5 + -0x228) = &PTR_FUN_110bd15c8;
    *(undefined **)(puVar5 + -0x220) = puVar10;
    *(code **)(puVar5 + -0x1f0) = FUN_10a3ed91c;
    *(undefined ***)(puVar5 + -0x1e8) = &PTR_FUN_110bd15e8;
    *(undefined **)(puVar5 + -0x1e0) = puVar10;
    *(code **)(puVar5 + -0x1b0) = FUN_10a3eda40;
    *(undefined ***)(puVar5 + -0x1a8) = &PTR_FUN_110bd1608;
    *(undefined **)(puVar5 + -0x1a0) = puVar10;
    *(code **)(puVar5 + -0x170) = FUN_10a3edb18;
    *(undefined ***)(puVar5 + -0x168) = &PTR_FUN_110bd1628;
    *(undefined **)(puVar5 + -0x160) = puVar10;
    *(code **)(puVar5 + -0x130) = FUN_10a3edc54;
    *(undefined ***)(puVar5 + -0x128) = &PTR_FUN_110bd1648;
    *(undefined **)(puVar5 + -0x120) = puVar10;
    unaff_x24 = puVar5 + -0xb0;
    lVar16 = 0x2c0;
    unaff_x25 = puVar5 + -0x370;
    *(code **)(puVar5 + -0xf0) = FUN_10a3edd90;
    *(undefined ***)(puVar5 + -0xe8) = &PTR_FUN_110bd1668;
    unaff_x26 = &UNK_1053a6a3c;
    unaff_x27 = &PTR_DAT_110950c70;
    *(undefined **)(puVar5 + -0xe0) = puVar10;
    do {
      unaff_x28 = unaff_x25 + lVar16;
      unaff_x21 = (long *)(unaff_x28 + -0x38);
      puVar14 = (undefined8 *)*unaff_x21;
      if (*(char *)(puVar14 + 1) == '\x01') {
        *(undefined8 *)(puVar5 + -0xb0) = *(undefined8 *)(unaff_x28 + -0x40);
        (*(code *)puVar14[2])(puVar5 + -0xa8,unaff_x21);
        *(undefined **)(unaff_x28 + -0x40) = &UNK_1053a6a3c;
        (**(code **)*unaff_x21)(unaff_x21);
        *unaff_x21 = (long)&PTR_DAT_110950c70;
        (**(code **)(puVar5 + -0xb0))(puVar5 + -0xb0);
        (*(code *)**(undefined8 **)(puVar5 + -0xa8))(puVar5 + -0xa8);
        puVar14 = (undefined8 *)*unaff_x21;
      }
      (*(code *)*puVar14)(unaff_x21);
      lVar16 = lVar16 + -0x40;
    } while (lVar16 != 0);
    *ppuVar9 = unaff_x22;
    *(undefined **)(puVar5 + -0x370) = puVar10 + 0x1158;
    func_0x00010a2e3118(puVar5 + -0x370);
    (*(code *)**(undefined8 **)(puVar10 + 0xfc0))(puVar10 + 0xfc0);
    __ZNSt3__15mutexD1Ev(puVar10 + 0xf78);
    (*(code *)**(undefined8 **)(puVar10 + 0xf40))(puVar10 + 0xf40);
    (*(code *)**(undefined8 **)(puVar10 + 0xf00))(puVar10 + 0xf00);
    (*(code *)**(undefined8 **)(puVar10 + 0xec0))(puVar10 + 0xec0);
    (*(code *)**(undefined8 **)(puVar10 + 0xe80))(puVar10 + 0xe80);
    if (*(long *)(puVar10 + 0xe40) != 0) {
      *(long *)(puVar10 + 0xe48) = *(long *)(puVar10 + 0xe40);
      __ZdlPv();
    }
    lVar16 = 0xe18;
    do {
      FUN_10a004cfc(puVar10 + lVar16);
      lVar16 = lVar16 + -0x10;
    } while (lVar16 != 0xd78);
    FUN_10a5cf6e4(puVar10 + 0xd48);
    func_0x00010a3ed14c(puVar10 + 0xd40,0);
    FUN_10a3ec58c(puVar10 + 0xd28);
    func_0x00010a3f6208(puVar10 + 0xcf8);
    func_0x00010a3f7874(puVar10 + 0xce8);
    func_0x00010a3f781c(puVar10 + 0xcd8);
    func_0x00010a3f77c4(puVar10 + 0xcc8);
    func_0x00010a1fec54(puVar10 + 0xcb0);
    func_0x00010a09db64(puVar10 + 0xc98);
    func_0x00010a09db64(puVar10 + 0xc88);
    func_0x00010a09db64(puVar10 + 0xc78);
    func_0x00010a09db64(puVar10 + 0xc68);
    plVar6 = *(long **)(puVar10 + 0xc60);
    *(undefined8 *)(puVar10 + 0xc60) = 0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    FUN_10a3ed8c0(puVar10 + 0xc58,0);
    plVar6 = *(long **)(puVar10 + 0xc50);
    *(undefined8 *)(puVar10 + 0xc50) = 0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    lVar16 = *(long *)(puVar10 + 0xc48);
    *(undefined8 *)(puVar10 + 0xc48) = 0;
    if (lVar16 != 0) {
      func_0x00010a3f775c();
    }
    func_0x00010a3f7714(puVar10 + 0xc30,*(undefined8 *)(puVar10 + 0xc38));
    func_0x00010a05248c(puVar10 + 0xbf8);
    func_0x00010a05248c(puVar10 + 0xbe8);
    func_0x00010a05248c(puVar10 + 0xbd8);
    FUN_10a3f76ec(puVar10 + 0xbd0,0);
    func_0x00010a3ed0c8(puVar10 + 0xbc8,0);
    func_0x00010a3f7694(puVar10 + 3000);
    func_0x00010a3f761c(puVar10 + 0xbb0,0);
    FUN_10a3f75f4(puVar10 + 0xba8,0);
    plVar6 = *(long **)(puVar10 + 0xba0);
    *(undefined8 *)(puVar10 + 0xba0) = 0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    func_0x00010a3f759c(puVar10 + 0xb90);
    func_0x00010a3f7544(puVar10 + 0xb80);
    func_0x00010a3f74ec(puVar10 + 0xb70);
    func_0x00010a296760(puVar10 + 0xb60);
    func_0x00010a3f74ac(puVar10 + 0xb58,0);
    func_0x00010a3f7454(puVar10 + 0xb48);
    func_0x00010a3f73fc(puVar10 + 0xb38);
    plVar6 = *(long **)(puVar10 + 0xb30);
    *(undefined8 *)(puVar10 + 0xb30) = 0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    func_0x00010a3f73a4(puVar10 + 0xb20);
    func_0x00010a3f734c(puVar10 + 0xb10);
    func_0x00010a3f72f4(puVar10 + 0xb00);
    func_0x00010a3f729c(puVar10 + 0xaf0);
    func_0x00010a3f7244(puVar10 + 0xae0);
    func_0x00010a3f71ec(puVar10 + 0xad0);
    func_0x00010a3f7194(puVar10 + 0xac0);
    func_0x00010a3f713c(puVar10 + 0xab0);
    func_0x00010a3f70e4(puVar10 + 0xaa0);
    func_0x00010a3f708c(puVar10 + 0xa90);
    func_0x00010a3f7034(puVar10 + 0xa80);
    func_0x00010a3f6fdc(puVar10 + 0xa70);
    func_0x00010a3f6f84(puVar10 + 0xa60);
    func_0x00010a3f6f2c(puVar10 + 0xa50);
    func_0x00010a3f6ed4(puVar10 + 0xa40);
    func_0x00010a3ed050(puVar10 + 0xa38,0);
    plVar6 = *(long **)(puVar10 + 0xa30);
    *(undefined8 *)(puVar10 + 0xa30) = 0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    func_0x00010a3f6e7c(puVar10 + 0xa20);
    func_0x00010a3f6e24(puVar10 + 0xa10);
    func_0x00010a3f6dcc(puVar10 + 0xa00);
    func_0x00010a3f6d74(puVar10 + 0x9f0);
    func_0x00010a3f6d1c(puVar10 + 0x9e0);
    func_0x00010a3f6cc4(puVar10 + 0x9d0);
    func_0x00010a3f6c6c(puVar10 + 0x9c0);
    func_0x00010a3f6c14(puVar10 + 0x9b0);
    func_0x00010a3f6bbc(puVar10 + 0x9a0);
    func_0x00010a3f6b64(puVar10 + 0x990);
    func_0x00010a3f6b0c(puVar10 + 0x980);
    FUN_10a082070(puVar10 + 0x970);
    func_0x00010a3f6ab4(puVar10 + 0x960);
    func_0x00010a3f6a5c(puVar10 + 0x950);
    func_0x00010a3f6a04(puVar10 + 0x940);
    func_0x00010a3f69ac(puVar10 + 0x930);
    func_0x00010a3f6960(puVar10 + 0x928,0);
    plVar6 = *(long **)(puVar10 + 0x920);
    *(undefined8 *)(puVar10 + 0x920) = 0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    func_0x00010a3f6908(puVar10 + 0x910);
    func_0x00010a3f68b0(puVar10 + 0x900);
    FUN_10a3ed028(puVar10 + 0x8f8,0);
    func_0x00010a3f6858(puVar10 + 0x8e8);
    func_0x00010a3f6800(puVar10 + 0x8d8);
    func_0x00010a3f67a8(puVar10 + 0x8c8);
    plVar6 = *(long **)(puVar10 + 0x8c0);
    *(undefined8 *)(puVar10 + 0x8c0) = 0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    plVar6 = *(long **)(puVar10 + 0x8b8);
    *(undefined8 *)(puVar10 + 0x8b8) = 0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    func_0x00010a3f6750(puVar10 + 0x8a8);
    func_0x00010a3f66f8(puVar10 + 0x898);
    func_0x00010a3f66a0(puVar10 + 0x888);
    FUN_10a3f6678(puVar10 + 0x880,0);
    FUN_10a3f6520(puVar10 + 0x878,0);
    plVar6 = *(long **)(puVar10 + 0x870);
    *(undefined8 *)(puVar10 + 0x870) = 0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    FUN_10a3f64f8(puVar10 + 0x868,0);
    FUN_10a054c5c(puVar10 + 0x858);
    uVar13 = 0;
    func_0x00010a3ed08c(puVar10 + 0x850);
    func_0x00010a3f64a0(puVar10 + 0x840);
    func_0x00010a3f6448(puVar10 + 0x830);
    plVar6 = *(long **)(puVar10 + 0x828);
    *(undefined8 *)(puVar10 + 0x828) = 0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    FUN_10a3ec600(*(undefined8 *)(puVar10 + 0x818));
    if (*(long *)(puVar10 + 0x7f8) != 0) {
      *(long *)(puVar10 + 0x800) = *(long *)(puVar10 + 0x7f8);
      __ZdlPv();
    }
    func_0x00010a3ec65c(*(undefined8 *)(puVar10 + 0x7e0));
    if (*(long *)(puVar10 + 0x7c0) != 0) {
      *(long *)(puVar10 + 0x7c8) = *(long *)(puVar10 + 0x7c0);
      __ZdlPv();
    }
    func_0x00010a3ec6b8(*(undefined8 *)(puVar10 + 0x7a8));
    if (*(long *)(puVar10 + 0x788) != 0) {
      *(long *)(puVar10 + 0x790) = *(long *)(puVar10 + 0x788);
      __ZdlPv();
    }
    func_0x00010a3bfe08(puVar10 + 0x660);
    FUN_10a3c869c(puVar10 + 0x4f8);
    *(undefined **)(puVar5 + -0x370) = puVar10 + 0x4e0;
    FUN_10a0d80a4(puVar5 + -0x370);
    FUN_10a3ec714(puVar10 + 0x4c8);
    func_0x00010a3ec780(puVar10 + 0x4b0);
    func_0x00010a3ec7ec(puVar10 + 0x490);
    func_0x00010a3ec7ec(puVar10 + 0x478);
    func_0x00010a3f6400(puVar10 + 0x450);
    __ZNSt3__15mutexD1Ev(puVar10 + 0x410);
    __ZNSt3__15mutexD1Ev(puVar10 + 0x3d0);
    __ZNSt3__15mutexD1Ev(puVar10 + 0x390);
    __ZNSt3__15mutexD1Ev(puVar10 + 0x350);
    __ZNSt3__15mutexD1Ev(puVar10 + 0x310);
    __ZNSt3__15mutexD1Ev(puVar10 + 0x2d0);
    __ZNSt3__15mutexD1Ev(puVar10 + 0x290);
    plVar6 = *(long **)(puVar10 + 0x270);
    *(undefined8 *)(puVar10 + 0x270) = 0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    if ((char)puVar10[0x26f] < '\0') {
      __ZdlPv(*(undefined8 *)(puVar10 + 600));
    }
    if (*(long *)(puVar10 + 0x218) != 0) {
      *(long *)(puVar10 + 0x220) = *(long *)(puVar10 + 0x218);
      __ZdlPv();
    }
    if (puVar10[0x1f8] == '\x01') {
      func_0x0001092ba41c(puVar10 + 0x1b0);
    }
    if (puVar10[0x1a8] == '\x01') {
      func_0x0001092ba41c(puVar10 + 0x160);
    }
    if (puVar10[0x158] == '\x01') {
      func_0x0001092ba41c(puVar10 + 0x110);
    }
    FUN_10a3f5e88(puVar10 + 0x100);
    lVar16 = 0x58;
    do {
      plVar6 = *(long **)(puVar10 + lVar16);
      *(undefined8 *)(puVar10 + lVar16) = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      iVar11 = (int)uVar13;
      lVar16 = lVar16 + -8;
    } while (lVar16 != 0x28);
    unaff_x19 = *(undefined **)(puVar10 + 0x20);
    if (unaff_x19 != (undefined *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar5 + -0x70)) break;
    ___stack_chk_fail();
    if (iVar11 == 0) {
      __Unwind_Resume(unaff_x19);
      (*(code *)**(undefined8 **)(puVar5 + -0xa8))(puVar5 + -0xa8);
      (*(code *)**(undefined8 **)(puVar5 + -0x3a8))();
    }
    else {
      plVar6 = *(long **)(puVar5 + -0x370);
      if (plVar6 != (long *)0x0) {
        puVar1 = (ulong *)(plVar6 + 1);
        do {
          uVar15 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar15 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar15 & 0x1fffffffc) == 4) {
          do {
            uVar15 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar15 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar15 - 1 == 0) {
            (**(code **)(*plVar6 + 8))();
          }
        }
      }
      *(undefined1 **)(puVar5 + -0x370) = puVar5 + -0xb0;
      FUN_10a2325bc(puVar5 + -0x370);
    }
    unaff_x30 = FUN_10a3cf3a0;
    puVar10 = unaff_x19;
    func_0x000104bd46a0();
    unaff_x23 = 0;
    unaff_x20 = 0x28;
    puVar5 = puVar5 + -0x380;
  }
  return puVar10;
}



/* Entry: 10a3f6350; end: 10a3f64f7;  */

void FUN_10a3f6350(long param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 10a3f64f8; end: 10a3f651f;  */

void FUN_10a3f64f8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x00010a244ff8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a3f6520; end: 10a3f6593;  */

void FUN_10a3f6520(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar2 == (long *)0x0) {
    return;
  }
  plVar1 = (long *)plVar2[2];
  while (plVar1 != (long *)0x0) {
    lVar3 = *plVar1;
    FUN_10a3f6594(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar3;
  }
  lVar3 = *plVar2;
  *plVar2 = 0;
  if (lVar3 != 0) {
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar2);
  return;
}



/* Entry: 10a3f6594; end: 10a3f6677;  */

void FUN_10a3f6594(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x11f) < '\0') {
    __ZdlPv(param_1[0x21]);
  }
  if (*(char *)((long)param_1 + 0x107) < '\0') {
    __ZdlPv(param_1[0x1e]);
  }
  if (*(char *)((long)param_1 + 0xef) < '\0') {
    __ZdlPv(param_1[0x1b]);
  }
  if (*(char *)((long)param_1 + 0xd7) < '\0') {
    __ZdlPv(param_1[0x18]);
  }
  if (*(char *)((long)param_1 + 0xbf) < '\0') {
    __ZdlPv(param_1[0x15]);
  }
  if (*(char *)((long)param_1 + 0xa7) < '\0') {
    __ZdlPv(param_1[0x12]);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    __ZdlPv(param_1[0xc]);
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10a3f6678; end: 10a3f669f;  */

void FUN_10a3f6678(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10a258a54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a3f66a0; end: 10a3f75f3;  */

long FUN_10a3f66a0(long param_1)

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



/* Entry: 10a3f75f4; end: 10a3f761b;  */

void FUN_10a3f75f4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10a9efd7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a3f761c; end: 10a3f76eb;  */

void FUN_10a3f761c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = param_2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_DAT_110b17898;
    func_0x00010a004dac(puVar1 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 10a3f76ec; end: 10a3f7713;  */

void FUN_10a3f76ec(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10a1bce10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a3f7714; end: 10a3f78cb;  */

void FUN_10a3f7714(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10a3f7714(param_1,*param_2);
    FUN_10a3f7714(param_1,param_2[1]);
    func_0x00010a05248c(param_2 + 6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10a3f78cc; end: 10a3f78db;  */

void FUN_10a3f78cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bd19a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a3f78dc; end: 10a3f78fb;  */

void FUN_10a3f78dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bd19a8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3f78fc; end: 10a3f791b;  */

void FUN_10a3f78fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a3f7904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a3f791c; end: 10a3f793b;  */

void FUN_10a3f791c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bd3090;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3f793c; end: 10a3f794f;  */

void FUN_10a3f793c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a3f7944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a3f7950; end: 10a3f7983;  */

void FUN_10a3f7950(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3f7984; end: 10a3f79bb;  */

undefined8 FUN_10a3f7984(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bd1a38);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a3f79bc; end: 10a3f79cf;  */

void FUN_10a3f79bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3f79d0; end: 10a3f79ef;  */

void FUN_10a3f79d0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bd1a58;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3f79f0; end: 10a3f7a0f;  */

void FUN_10a3f79f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a3f79f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a3f7a10; end: 10a3f7a2f;  */

void FUN_10a3f7a10(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bd1aa8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3f7a30; end: 10a3f7a57;  */

long FUN_10a3f7a30(long param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_10a3f7a5c(param_1 + 0xd0);
  lVar1 = param_1 + 0x18;
  __ZNSt3__15mutexD1Ev(param_1 + 0x90);
  __ZNSt3__15mutexD1Ev(param_1 + 0x50);
  lVar2 = 0x18;
  do {
    if (*(long *)(lVar1 + lVar2) != 0) {
      FUN_10a1d5de4(lVar1 + lVar2);
      __ZdlPv(*(undefined8 *)(lVar1 + lVar2));
    }
    lVar2 = lVar2 + -0x18;
  } while (lVar2 != -0x18);
  return lVar1;
}



/* Entry: 10a3f7a58; end: 10a3f7a5b;  */

void FUN_10a3f7a58(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3f7a5c; end: 10a3f7ab3;  */

long FUN_10a3f7a5c(long param_1)

{
  long lVar1;
  
  __ZNSt3__15mutexD1Ev(param_1 + 0x78);
  __ZNSt3__15mutexD1Ev(param_1 + 0x38);
  lVar1 = 0x18;
  do {
    if (*(long *)(param_1 + lVar1) != 0) {
      FUN_10a1d5de4(param_1 + lVar1);
      __ZdlPv(*(undefined8 *)(param_1 + lVar1));
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != -0x18);
  return param_1;
}



/* Entry: 10a3f7ab4; end: 10a3f7ac3;  */

void FUN_10a3f7ab4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bd1af8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a3f7ac4; end: 10a3f7ae3;  */

void FUN_10a3f7ac4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bd1af8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3f7ae4; end: 10a3f7b03;  */

void FUN_10a3f7ae4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a3f7aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a3f7b04; end: 10a3f7b23;  */

void FUN_10a3f7b04(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bd1b48;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3f7b24; end: 10a3f7b43;  */

void FUN_10a3f7b24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a3f7b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a3f7b44; end: 10a3f7b63;  */

void FUN_10a3f7b44(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bd1b98;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3f7b64; end: 10a3f7b83;  */

void FUN_10a3f7b64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a3f7b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a3f7b84; end: 10a3f7ba3;  */

void FUN_10a3f7b84(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bd1be8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3f7ba4; end: 10a3f7bc3;  */

void FUN_10a3f7ba4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a3f7bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a3f7bc4; end: 10a3f7be3;  */

void FUN_10a3f7bc4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bd1c38;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3f7be4; end: 10a3f7bf3;  */

void FUN_10a3f7be4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a3f7bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a3f7bf4; end: 10a3f7c7b;  */

undefined8 * FUN_10a3f7bf4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bd1c88;
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  func_0x000104c4f944(param_1 + 1);
  return param_1;
}



/* Entry: 10a3f7c7c; end: 10a3f7c8b;  */

void FUN_10a3f7c7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bd1cc0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a3f7c8c; end: 10a3f7cab;  */

void FUN_10a3f7c8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bd1cc0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3f7cac; end: 10a3f7ccb;  */

void FUN_10a3f7cac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a3f7cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a3f7ccc; end: 10a3f7ceb;  */

void FUN_10a3f7ccc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bd1d10;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3f7cec; end: 10a3f7d0b;  */

void FUN_10a3f7cec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a3f7cf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a3f7d0c; end: 10a3f7d2b;  */

void FUN_10a3f7d0c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bd1d60;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3f7d2c; end: 10a3f7d4b;  */

void FUN_10a3f7d2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a3f7d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a3f7d4c; end: 10a3f7d6b;  */

void FUN_10a3f7d4c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bd1db0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3f7d6c; end: 10a3f7d8b;  */

void FUN_10a3f7d6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a3f7d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a3f7d8c; end: 10a3f7dab;  */

void FUN_10a3f7d8c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bd1e00;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3f7dac; end: 10a3f7dcb;  */

void FUN_10a3f7dac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a3f7db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a3f7dcc; end: 10a3f7deb;  */

void FUN_10a3f7dcc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bd1e50;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3f7dec; end: 10a3f7e07;  */

undefined8 * FUN_10a3f7dec(long param_1)

{
  FUN_10a5af0f4();
  func_0x00010a07a8a8(param_1 + 0x88);
  func_0x00010a07a8a8(param_1 + 0x78);
  func_0x00010a2aaee8(param_1 + 0x60,*(undefined8 *)(param_1 + 0x68));
  FUN_10a5d05fc(param_1 + 0x48,*(undefined8 *)(param_1 + 0x50));
  func_0x00010a05a86c(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x18) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x20);
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 10a3f7e08; end: 10a3f7e27;  */

void FUN_10a3f7e08(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bd1ea0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3f7e28; end: 10a3f7e4b;  */

undefined8 * FUN_10a3f7e28(long param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long *plStack_38;
  
  puVar1 = (undefined8 *)(param_1 + 0x18);
  FUN_10a6eae10(&plStack_38,puVar1);
  FUN_109d1a244(&plStack_38);
  if (plStack_38 != (long *)0x0) {
    puVar2 = (ulong *)(plStack_38 + 1);
    do {
      uVar6 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar6 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar6 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plStack_38 + 8))();
      }
    }
  }
  __ZNSt3__15mutexD1Ev(param_1 + 1000);
  func_0x00010a701df0(param_1 + 0x3d0);
  func_0x00010a061620(param_1 + 0x3c0);
  FUN_10a71426c(param_1 + 0x390);
  FUN_10a71426c(param_1 + 0x380);
  FUN_10a71426c(param_1 + 0x370);
  __ZNSt3__15mutexD1Ev(param_1 + 0x330);
  plVar5 = *(long **)(param_1 + 0x328);
  if (plVar5 != (long *)0x0) {
    puVar2 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar6 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar6 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x2e8);
  plVar5 = *(long **)(param_1 + 0x2e0);
  if (plVar5 != (long *)0x0) {
    puVar2 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar6 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar6 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  if ((*(char *)(param_1 + 0x2d0) == '\x01') && (*(char *)(param_1 + 0x277) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_1 + 0x260));
  }
  if (*(long *)(param_1 + 600) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a71b2f4(param_1 + 0x228);
  if (*(long *)(param_1 + 0x220) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x1d8);
  func_0x00010a711e00(param_1 + 0x1c8);
  func_0x00010a71b29c(param_1 + 0x1b8);
  func_0x00010a71b244(param_1 + 0x1a8);
  __ZNSt3__15mutexD1Ev(param_1 + 0x168);
  func_0x00010a701e5c(param_1 + 0x150);
  __ZNSt3__15mutexD1Ev(param_1 + 0x110);
  func_0x00010a71b1fc(param_1 + 0xf8,*(undefined8 *)(param_1 + 0x100));
  func_0x00010a71b1fc(param_1 + 0xe0,*(undefined8 *)(param_1 + 0xe8));
  func_0x00010a71b1fc(param_1 + 200,*(undefined8 *)(param_1 + 0xd0));
  func_0x00010a711f50(param_1 + 0xb8);
  func_0x00010a71b1a4(param_1 + 0xa8);
  plVar5 = *(long **)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  FUN_10a09e870(param_1 + 0x90);
  if (*(long *)(param_1 + 0x80) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(undefined ***)(param_1 + 0x50) = &PTR_DAT_110c12bc0;
  *(undefined ***)(param_1 + 0x430) = &PTR_FUN_110c12c38;
  func_0x00010a004e5c(param_1 + 0x68);
  func_0x00010a004e04(param_1 + 0x58);
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_110b9fa98;
  if (*(undefined8 **)(param_1 + 0x48) != (undefined8 *)0x0) {
    **(undefined8 **)(param_1 + 0x48) = 0;
  }
  func_0x00010a004e5c(param_1 + 0x38);
  *puVar1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x20);
  return puVar1;
}



/* Entry: 10a3f7e4c; end: 10a3f7e6b;  */

void FUN_10a3f7e4c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bd1ef0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3f7e6c; end: 10a3f7e87;  */

undefined8 * FUN_10a3f7e6c(long param_1)

{
  func_0x000104c4f944(param_1 + 0x90);
  func_0x00010a081120(param_1 + 0x78);
  func_0x00010a0810c8(param_1 + 0x68);
  func_0x00010a080ff4(param_1 + 0x40);
  if (*(long *)(param_1 + 0x38) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(undefined8 *)(param_1 + 0x18) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x20);
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 10a3f7e88; end: 10a3f7ea7;  */

void FUN_10a3f7e88(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bd1f40;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3f7ea8; end: 10a3f7eb3;  */

long * FUN_10a3f7ea8(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + 0x20);
  func_0x00010a3f7eec(plVar1,*(undefined8 *)(param_1 + 0x30));
  lVar2 = *plVar1;
  *plVar1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 10a3f7eb4; end: 10a3f7f63;  */

long * FUN_10a3f7eb4(long *param_1)

{
  long lVar1;
  
  func_0x00010a3f7eec(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a3f7f64; end: 10a3f7f73;  */

void FUN_10a3f7f64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bd1f90;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a3f7f74; end: 10a3f7f93;  */

void FUN_10a3f7f74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bd1f90;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3f7f94; end: 10a3f7fb3;  */

void FUN_10a3f7f94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a3f7f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a3f7fb4; end: 10a3f7fd3;  */

void FUN_10a3f7fb4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bd1fe0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3f7fd4; end: 10a3f7ff3;  */

void FUN_10a3f7fd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a3f7fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a3f7ff4; end: 10a3f8013;  */

void FUN_10a3f7ff4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bd2030;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3f8014; end: 10a3f8033;  */

void FUN_10a3f8014(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a3f801c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a3f8034; end: 10a3f8053;  */

void FUN_10a3f8034(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bd2080;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3f8054; end: 10a3f8073;  */

void FUN_10a3f8054(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a3f805c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a3f8074; end: 10a3f8093;  */

void FUN_10a3f8074(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bd20d0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3f8094; end: 10a3f80b3;  */

void FUN_10a3f8094(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a3f809c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a3f80b4; end: 10a3f80d3;  */

void FUN_10a3f80b4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bd2120;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3f80d4; end: 10a3f810b;  */

long FUN_10a3f80d4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a6d17cc(param_1 + 0x38,0);
  *(undefined ***)(param_1 + 0x18) = &PTR_DAT_110b17898;
  plVar5 = *(long **)(param_1 + 0x28);
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
  return param_1 + 0x20;
}



/* Entry: 10a3f810c; end: 10a3f811f;  */

void FUN_10a3f810c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3f8120; end: 10a3f813f;  */

void FUN_10a3f8120(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bd2170;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3f8140; end: 10a3f815f;  */

void FUN_10a3f8140(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a3f8148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a3f8160; end: 10a3f817f;  */

void FUN_10a3f8160(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bd21c0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


