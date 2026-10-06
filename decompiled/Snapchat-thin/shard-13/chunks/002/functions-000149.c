/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a235864; end: 10a2358a3;  */

/* WARNING: Possible PIC construction at 0x00010a235890: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a235a64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a235894) */
/* WARNING: Removing unreachable block (ram,0x00010a235a68) */
/* WARNING: Removing unreachable block (ram,0x00010a235a70) */
/* WARNING: Removing unreachable block (ram,0x00010a235a74) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd7ac) */

void FUN_10a235864(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar5;
  undefined8 unaff_x20;
  undefined8 uVar6;
  long alStack_40 [4];
  undefined1 *puVar4;
  
  FUN_10a235938(param_1 + 0x12);
  FUN_10a2358a8(param_1 + 0xe);
  FUN_10a235990(param_1 + 9);
  uVar6 = 0x10a235894;
  puVar1 = &stack0xffffffffffffffe0;
  puVar2 = (undefined8 *)param_1[7];
  puVar3 = (undefined1 *)register0x00000008;
  while (puVar5 = puVar2, puVar4 = puVar1, puVar5 != (undefined8 *)0x0) {
    *(undefined8 *)(puVar4 + -0x20) = unaff_x20;
    *(undefined8 **)(puVar4 + -0x18) = param_1;
    *(undefined1 **)(puVar4 + -0x10) = puVar3 + -0x10;
    *(undefined8 *)(puVar4 + -8) = uVar6;
    func_0x00010a235a44(*puVar5);
    uVar6 = 0x10a235a68;
    puVar1 = puVar4 + -0x20;
    param_1 = puVar5;
    puVar3 = puVar4;
    puVar2 = (undefined8 *)puVar5[1];
  }
  return;
}



/* Entry: 10a2358a4; end: 10a2358a7;  */

void FUN_10a2358a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2358a8; end: 10a2358ff;  */

long FUN_10a2358a8(long param_1)

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



/* Entry: 10a235900; end: 10a23590f;  */

void FUN_10a235900(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb4688;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a235910; end: 10a23592f;  */

void FUN_10a235910(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb4688;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a235930; end: 10a235937;  */

void FUN_10a235930(void)

{
  return;
}



/* Entry: 10a235938; end: 10a23598f;  */

long FUN_10a235938(long param_1)

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



/* Entry: 10a235990; end: 10a2359eb;  */

long * FUN_10a235990(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_10a2359ec(plVar1 + 2);
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



/* Entry: 10a2359ec; end: 10a235adf;  */

long FUN_10a2359ec(long param_1)

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



/* Entry: 10a235ae0; end: 10a235aef;  */

void FUN_10a235ae0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb46d8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a235af0; end: 10a235b0f;  */

void FUN_10a235af0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb46d8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a235b10; end: 10a235b1b;  */

long * FUN_10a235b10(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long *plStack_28;
  
  plVar2 = (long *)(param_1 + 0x18);
  (**(code **)(*(long *)*plVar2 + 0x38))(&plStack_28);
  FUN_109d1a244(&plStack_28);
  if (plStack_28 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_28 + 1);
    do {
      uVar6 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar6 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plStack_28 + 8))();
      }
    }
  }
  plVar5 = (long *)*plVar2;
  *plVar2 = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x10))();
  }
  return plVar2;
}



/* Entry: 10a235b1c; end: 10a235ba7;  */

void FUN_10a235b1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xd8;
  __Znwm();
  puVar1[2] = 0;
  puVar1[1] = 0x200000006;
  *(undefined2 *)(puVar1 + 3) = 4;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = puVar1 + 3;
  puVar1[0x12] = 0;
  *(undefined2 *)(puVar1 + 0x13) = 0;
  *puVar1 = &PTR_FUN_110bb56f0;
  puVar1[0x14] = *param_2;
  puVar1[0x19] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  *param_1 = puVar1;
  param_1[1] = puVar1;
  param_1[2] = puVar1 + 0x14;
  return;
}



/* Entry: 10a235ba8; end: 10a235dd3;  */

undefined8 * FUN_10a235ba8(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110bb56f0;
  lVar7 = 0x38;
  do {
    lVar6 = lVar7 + -0x10;
    plVar4 = *(long **)((long)param_1 + lVar7 + 0x90);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
    lVar7 = lVar6;
  } while (lVar6 != 0x18);
  if (param_1[0x15] != 0) {
    func_0x0001092b4274();
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a235dd4; end: 10a235deb;  */

void FUN_10a235dd4(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lStack_18;
  
  plVar4 = *(long **)(param_1 + 8);
  plVar3 = plVar4 + 2;
  do {
    lVar5 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 == *plVar4 + -1) {
    lStack_18 = plVar4[1];
    plVar4[1] = 0;
    plVar3 = (long *)(lStack_18 + 0x10);
    do {
      lVar5 = *plVar3;
      if (lVar5 == 0) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = 2;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          FUN_109d1b4dc(lStack_18 + 0x18,param_1 - (long)(plVar4 + 3) >> 4);
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar5 >> 1 & 1) == 0);
    if (lStack_18 != 0) {
      func_0x0001092b4274(&lStack_18);
    }
  }
  return;
}



/* Entry: 10a235dec; end: 10a235e1b;  */

void FUN_10a235dec(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x20);
  FUN_10a235e1c();
                    /* WARNING: Could not recover jumptable at 0x00010a235e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10a235e1c; end: 10a235e73;  */

void FUN_10a235e1c(long *param_1)

{
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  uStack_28 = 0;
  uStack_30 = 0;
  FUN_10a4ec46c(*(undefined8 *)(*param_1 + 0xb8),&uStack_30);
  (*(code *)param_1[3])(param_1);
  return;
}



/* Entry: 10a235e74; end: 10a235e8b;  */

void FUN_10a235e74(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a235e8c; end: 10a23605f;  */

char * FUN_10a235e8c(char *param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  undefined *puVar8;
  code *pcVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined1 uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  
  puVar8 = PTR___tlv_bootstrap_11340d750;
  if (*param_1 == '\x01') {
    ppuVar14 = &PTR___tlv_bootstrap_11340d750;
    ppuVar10 = ppuVar14;
    (*(code *)PTR___tlv_bootstrap_11340d750)();
    ppuVar11 = &PTR___tlv_bootstrap_11340d738;
    if (((ulong)*ppuVar10 & 1) == 0) {
      ppuVar10 = ppuVar11;
      (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
      __tlv_atexit(0x10a132a8c,ppuVar10,0x100000000);
      (*(code *)puVar8)();
      *(undefined1 *)ppuVar14 = 1;
    }
    (*(code *)PTR___tlv_bootstrap_11340d738)();
    puVar17 = (undefined8 *)ppuVar11[2];
    if (puVar17 != (undefined8 *)0x0) {
      lVar15 = puVar17[1];
      bVar7 = *(byte *)(lVar15 + 0x42) | *(byte *)(lVar15 + 0x43);
      if ((((bVar7 & 1) != 0) || ((*(byte *)(lVar15 + 0x3f) & 1) != 0)) ||
         (*(char *)(lVar15 + 0x40) == '\x01')) {
        uVar6 = cntfrq_el0;
        InstructionSynchronizationBarrier();
        uVar18 = cntvct_el0;
        if (uVar6 != 1000000000) {
          uVar4 = 0;
          if (uVar6 != 0) {
            uVar4 = uVar18 / uVar6;
          }
          uVar5 = 0;
          if (uVar6 != 0) {
            uVar5 = ((uVar18 - uVar4 * uVar6) * 1000000000) / uVar6;
          }
          uVar18 = uVar5 + uVar4 * 1000000000;
        }
        if (*(char *)(puVar17[1] + 0x40) == '\x01') {
          FUN_10a236060(*puVar17,*(undefined8 *)(param_1 + 8),uVar18);
        }
        lVar15 = lRam00000001137eabe0;
        if ((bVar7 & 1) != 0) {
          uVar2 = *(undefined4 *)(param_1 + 4);
          uVar3 = *(undefined2 *)(param_1 + 2);
          puVar12 = puVar17;
          FUN_10a1333cc();
          if (puVar12 != (undefined8 *)0x0) {
            uVar16 = 6;
            if (lRam00000001137eabe0 != lVar15) {
              uVar16 = 8;
            }
            lVar1 = 0;
            if (lRam00000001137eabe0 != lVar15) {
              lVar1 = lVar15;
            }
            *puVar12 = &UNK_10f64673f;
            puVar12[1] = lVar1;
            puVar12[2] = uVar18;
            *(undefined4 *)(puVar12 + 3) = uVar2;
            *(undefined2 *)((long)puVar12 + 0x1c) = uVar3;
            *(undefined1 *)((long)puVar12 + 0x1e) = uVar16;
            if ((*(byte *)(puVar17 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x10a23605c);
              (*pcVar9)();
            }
            puVar17[0x18] = puVar17[0x18] + 1;
          }
        }
      }
      if (((*(char *)(puVar17[1] + 0x41) == '\x01') && (param_1[0x18] == '\x01')) &&
         (plVar13 = (long *)puVar17[0xb], plVar13 != (long *)0x0)) {
        (**(code **)(*plVar13 + 0x18))(plVar13,*(undefined8 *)(param_1 + 0x10));
      }
    }
  }
  return param_1;
}



/* Entry: 10a236060; end: 10a2360c7;  */

void FUN_10a236060(undefined8 param_1,ulong param_2,ulong param_3)

{
  if (param_3 < param_2) {
    return;
  }
  __ZNSt3__15mutex4lockEv();
  FUN_10a15387c((double)(param_3 - param_2),param_1,param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1);
  return;
}



/* Entry: 10a2360c8; end: 10a236127;  */

void FUN_10a2360c8(long *param_1)

{
  long lVar1;
  
  lVar1 = 0xa8;
  __Znwm();
  FUN_10a236128();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a236128; end: 10a23616f;  */

undefined8 * FUN_10a236128(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110baa4d8;
  FUN_10a236170(param_1 + 3);
  return param_1;
}



/* Entry: 10a236170; end: 10a236227;  */

undefined *** FUN_10a236170(undefined ***param_1,long param_2,undefined8 *param_3)

{
  undefined ***pppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  code *pcStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = 0x109d138c8;
  ppuStack_60 = &PTR_DAT_110b3e838;
  pcStack_58 = FUN_10a1b2664;
  puVar2 = &uStack_68;
  FUN_10a236228(param_1,param_2,*param_3,param_3[1],1);
  pppuVar1 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume();
  FUN_10a1b7d64(pppuVar1 + 2,param_2 + 0x10);
  *(undefined1 *)(pppuVar1 + 1) = 0;
  *pppuVar1 = &PTR_FUN_110bab9a0;
  ppuVar3 = (undefined **)*puVar2;
  pppuVar1[8] = (undefined **)0x0;
  pppuVar1[9] = ppuVar3;
  (**(code **)(puVar2[1] + 0x18))(pppuVar1 + 10,puVar2 + 1);
  *(undefined1 *)(pppuVar1 + 0x11) = 0;
  return pppuVar1;
}



/* Entry: 10a236228; end: 10a2362a3;  */

undefined8 * FUN_10a236228(undefined8 *param_1,long param_2)

{
  undefined8 *in_x5;
  undefined8 uVar1;
  
  FUN_10a1b7d64(param_1 + 2,param_2 + 0x10);
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_110bab9a0;
  uVar1 = *in_x5;
  param_1[8] = 0;
  param_1[9] = uVar1;
  (**(code **)(in_x5[1] + 0x18))(param_1 + 10,in_x5 + 1);
  *(undefined1 *)(param_1 + 0x11) = 0;
  return param_1;
}



/* Entry: 10a2362a4; end: 10a2364a3;  */

char * FUN_10a2362a4(char *param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long *plVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined1 uVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  
  puVar7 = PTR___tlv_bootstrap_11340d750;
  if (*param_1 == '\x01') {
    ppuVar12 = &PTR___tlv_bootstrap_11340d750;
    ppuVar9 = ppuVar12;
    (*(code *)PTR___tlv_bootstrap_11340d750)();
    ppuVar10 = &PTR___tlv_bootstrap_11340d738;
    if (((ulong)*ppuVar9 & 1) == 0) {
      ppuVar9 = ppuVar10;
      (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
      __tlv_atexit(0x10a132a8c,ppuVar9,0x100000000);
      (*(code *)puVar7)();
      *(undefined1 *)ppuVar12 = 1;
    }
    (*(code *)PTR___tlv_bootstrap_11340d738)();
    plVar15 = (long *)ppuVar10[2];
    if (plVar15 != (long *)0x0) {
      lVar13 = plVar15[1];
      bVar6 = *(byte *)(lVar13 + 0x42) | *(byte *)(lVar13 + 0x43);
      if ((((bVar6 & 1) != 0) || ((*(byte *)(lVar13 + 0x3f) & 1) != 0)) ||
         (*(char *)(lVar13 + 0x40) == '\x01')) {
        uVar17 = cntfrq_el0;
        InstructionSynchronizationBarrier();
        uVar16 = cntvct_el0;
        if (uVar17 != 1000000000) {
          uVar4 = 0;
          if (uVar17 != 0) {
            uVar4 = uVar16 / uVar17;
          }
          uVar5 = 0;
          if (uVar17 != 0) {
            uVar5 = ((uVar16 - uVar4 * uVar17) * 1000000000) / uVar17;
          }
          uVar16 = uVar5 + uVar4 * 1000000000;
        }
        if (*(char *)(plVar15[1] + 0x40) == '\x01') {
          uVar17 = *(ulong *)(param_1 + 8);
          if (uVar17 <= uVar16) {
            lVar13 = *plVar15;
            __ZNSt3__15mutex4lockEv(lVar13 + 0x80);
            FUN_10a15387c((double)(uVar16 - uVar17),lVar13,lVar13 + 0x80,uVar17,uVar16);
            __ZNSt3__15mutex6unlockEv(lVar13 + 0x80);
          }
        }
        lVar13 = lRam00000001137eabe0;
        if ((bVar6 & 1) != 0) {
          uVar2 = *(undefined4 *)(param_1 + 4);
          uVar3 = *(undefined2 *)(param_1 + 2);
          plVar11 = plVar15;
          FUN_10a1333cc();
          if (plVar11 != (long *)0x0) {
            uVar14 = 6;
            if (lRam00000001137eabe0 != lVar13) {
              uVar14 = 8;
            }
            lVar1 = 0;
            if (lRam00000001137eabe0 != lVar13) {
              lVar1 = lVar13;
            }
            *plVar11 = (long)&UNK_10f576492;
            plVar11[1] = lVar1;
            plVar11[2] = uVar16;
            *(undefined4 *)(plVar11 + 3) = uVar2;
            *(undefined2 *)((long)plVar11 + 0x1c) = uVar3;
            *(undefined1 *)((long)plVar11 + 0x1e) = uVar14;
            if ((*(byte *)(plVar15 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10a23649c);
              (*pcVar8)();
            }
            plVar15[0x18] = plVar15[0x18] + 1;
          }
        }
      }
      if (((*(char *)(plVar15[1] + 0x41) == '\x01') && (param_1[0x18] == '\x01')) &&
         (plVar15 = (long *)plVar15[0xb], plVar15 != (long *)0x0)) {
        (**(code **)(*plVar15 + 0x18))(plVar15,*(undefined8 *)(param_1 + 0x10));
      }
    }
  }
  return param_1;
}



/* Entry: 10a2364a4; end: 10a236707;  */

void FUN_10a2364a4(long *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x24;
  long lVar11;
  undefined8 uVar12;
  
  uVar10 = (ulong)param_2;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar4 = uVar9 - 1;
    if ((uVar9 & uVar4) == 0) {
      unaff_x24 = uVar4 & uVar10;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar8 = 0;
        if (uVar9 != 0) {
          uVar8 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar8 * uVar9;
      }
    }
    plVar6 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_10a236554;
          uVar8 = plVar6[1];
          if (uVar8 != uVar10) break;
          if (*(int *)(plVar6 + 2) == param_2) {
            return;
          }
        }
        if ((uVar9 & uVar4) == 0) {
          uVar8 = uVar8 & uVar4;
        }
        else if (uVar9 <= uVar8) {
          uVar3 = 0;
          if (uVar9 != 0) {
            uVar3 = uVar8 / uVar9;
          }
          uVar8 = uVar8 - uVar3 * uVar9;
        }
      } while (uVar8 == unaff_x24);
    }
  }
LAB_10a236554:
  plVar6 = (long *)0x78;
  __Znwm();
  *plVar6 = 0;
  plVar6[1] = uVar10;
  *(undefined4 *)(plVar6 + 2) = *param_3;
  *(undefined1 *)(plVar6 + 4) = *(undefined1 *)(param_3 + 4);
  plVar6[3] = (long)&PTR_DAT_110ba5598;
  plVar6[5] = *(long *)(param_3 + 6);
  *(undefined1 *)(plVar6 + 6) = *(undefined1 *)(param_3 + 8);
  lVar5 = *(long *)(param_3 + 0xc);
  lVar11 = *(long *)(param_3 + 10);
  plVar6[8] = *(long *)(param_3 + 0xc);
  plVar6[7] = lVar11;
  if (lVar5 != 0) {
    plVar7 = (long *)(lVar5 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lVar5 = *(long *)(param_3 + 0xe);
  plVar6[10] = *(long *)(param_3 + 0x10);
  plVar6[9] = lVar5;
  lVar5 = *(long *)(param_3 + 0x12);
  plVar6[0xc] = *(long *)(param_3 + 0x14);
  plVar6[0xb] = lVar5;
  uVar12 = *(undefined8 *)((long)param_3 + 0x51);
  *(undefined8 *)((long)plVar6 + 0x69) = *(undefined8 *)((long)param_3 + 0x59);
  *(undefined8 *)((long)plVar6 + 0x61) = uVar12;
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar4 = 1;
    if (2 < uVar9) {
      uVar4 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar4 = uVar4 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar4 <= uVar9) {
      uVar4 = uVar9;
    }
    FUN_10a22b3b4(param_1,uVar4);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = uVar9 - 1 & uVar10;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar4 * uVar9;
      }
    }
  }
  lVar5 = *param_1;
  plVar7 = *(long **)(lVar5 + unaff_x24 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_1 + 2;
    *plVar6 = *plVar7;
    *plVar7 = (long)plVar6;
    *(long **)(lVar5 + unaff_x24 * 8) = plVar7;
    if (*plVar6 != 0) {
      uVar10 = *(ulong *)(*plVar6 + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar10 = uVar10 & uVar9 - 1;
      }
      else if (uVar9 <= uVar10) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar10 / uVar9;
        }
        uVar10 = uVar10 - uVar4 * uVar9;
      }
      *(long **)(*param_1 + uVar10 * 8) = plVar6;
    }
  }
  else {
    *plVar6 = *plVar7;
    *plVar7 = (long)plVar6;
  }
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10a236708; end: 10a2367a7;  */

long * FUN_10a236708(long *param_1,int *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = (ulong)*param_2;
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar4 & uVar3;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar7 == uVar3) {
          if (*(int *)(plVar6 + 2) == *param_2) {
            return plVar6;
          }
        }
        else {
          if ((uVar2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a2367a8; end: 10a2369a7;  */

char * FUN_10a2367a8(char *param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long *plVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined1 uVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  
  puVar7 = PTR___tlv_bootstrap_11340d750;
  if (*param_1 == '\x01') {
    ppuVar12 = &PTR___tlv_bootstrap_11340d750;
    ppuVar9 = ppuVar12;
    (*(code *)PTR___tlv_bootstrap_11340d750)();
    ppuVar10 = &PTR___tlv_bootstrap_11340d738;
    if (((ulong)*ppuVar9 & 1) == 0) {
      ppuVar9 = ppuVar10;
      (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
      __tlv_atexit(0x10a132a8c,ppuVar9,0x100000000);
      (*(code *)puVar7)();
      *(undefined1 *)ppuVar12 = 1;
    }
    (*(code *)PTR___tlv_bootstrap_11340d738)();
    plVar15 = (long *)ppuVar10[2];
    if (plVar15 != (long *)0x0) {
      lVar13 = plVar15[1];
      bVar6 = *(byte *)(lVar13 + 0x42) | *(byte *)(lVar13 + 0x43);
      if ((((bVar6 & 1) != 0) || ((*(byte *)(lVar13 + 0x3f) & 1) != 0)) ||
         (*(char *)(lVar13 + 0x40) == '\x01')) {
        uVar17 = cntfrq_el0;
        InstructionSynchronizationBarrier();
        uVar16 = cntvct_el0;
        if (uVar17 != 1000000000) {
          uVar4 = 0;
          if (uVar17 != 0) {
            uVar4 = uVar16 / uVar17;
          }
          uVar5 = 0;
          if (uVar17 != 0) {
            uVar5 = ((uVar16 - uVar4 * uVar17) * 1000000000) / uVar17;
          }
          uVar16 = uVar5 + uVar4 * 1000000000;
        }
        if (*(char *)(plVar15[1] + 0x40) == '\x01') {
          uVar17 = *(ulong *)(param_1 + 8);
          if (uVar17 <= uVar16) {
            lVar13 = *plVar15;
            __ZNSt3__15mutex4lockEv(lVar13 + 0x100);
            FUN_10a15387c((double)(uVar16 - uVar17),lVar13,lVar13 + 0x100,uVar17,uVar16);
            __ZNSt3__15mutex6unlockEv(lVar13 + 0x100);
          }
        }
        lVar13 = lRam00000001137eabe0;
        if ((bVar6 & 1) != 0) {
          uVar2 = *(undefined4 *)(param_1 + 4);
          uVar3 = *(undefined2 *)(param_1 + 2);
          plVar11 = plVar15;
          FUN_10a1333cc();
          if (plVar11 != (long *)0x0) {
            uVar14 = 6;
            if (lRam00000001137eabe0 != lVar13) {
              uVar14 = 8;
            }
            lVar1 = 0;
            if (lRam00000001137eabe0 != lVar13) {
              lVar1 = lVar13;
            }
            *plVar11 = (long)&UNK_10f64677a;
            plVar11[1] = lVar1;
            plVar11[2] = uVar16;
            *(undefined4 *)(plVar11 + 3) = uVar2;
            *(undefined2 *)((long)plVar11 + 0x1c) = uVar3;
            *(undefined1 *)((long)plVar11 + 0x1e) = uVar14;
            if ((*(byte *)(plVar15 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10a2369a0);
              (*pcVar8)();
            }
            plVar15[0x18] = plVar15[0x18] + 1;
          }
        }
      }
      if (((*(char *)(plVar15[1] + 0x41) == '\x01') && (param_1[0x18] == '\x01')) &&
         (plVar15 = (long *)plVar15[0xb], plVar15 != (long *)0x0)) {
        (**(code **)(*plVar15 + 0x18))(plVar15,*(undefined8 *)(param_1 + 0x10));
      }
    }
  }
  return param_1;
}



/* Entry: 10a2369a8; end: 10a236b03;  */

long * FUN_10a2369a8(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  puVar6 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)param_1[2];
  puVar5 = puVar6;
  if (puVar2 != puVar6) {
    uVar3 = param_1[4];
    plVar7 = puVar6 + (uVar3 >> 6);
    lVar4 = *plVar7 + (uVar3 & 0x3f) * 0x40;
    lVar1 = puVar6[param_1[5] + uVar3 >> 6] + (param_1[5] + uVar3 & 0x3f) * 0x40;
    puVar5 = puVar2;
    if (lVar4 != lVar1) {
      do {
        (*(code *)**(undefined8 **)(lVar4 + 8))((undefined8 *)(lVar4 + 8));
        lVar4 = lVar4 + 0x40;
        if (lVar4 - *plVar7 == 0x1000) {
          plVar7 = plVar7 + 1;
          lVar4 = *plVar7;
        }
      } while (lVar4 != lVar1);
      puVar6 = (undefined8 *)param_1[1];
      puVar2 = (undefined8 *)param_1[2];
      puVar5 = puVar2;
    }
  }
  param_1[5] = 0;
  lVar4 = (long)puVar5 - (long)puVar6;
  while (uVar3 = lVar4 >> 3, 2 < uVar3) {
    __ZdlPv(*puVar6);
    puVar2 = (undefined8 *)param_1[2];
    puVar6 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar6;
    puVar5 = puVar2;
    lVar4 = (long)puVar2 - (long)puVar6;
  }
  if (uVar3 == 1) {
    lVar4 = 0x20;
  }
  else {
    if (uVar3 != 2) goto LAB_10a236aa8;
    lVar4 = 0x40;
  }
  param_1[4] = lVar4;
LAB_10a236aa8:
  if (puVar6 != puVar5) {
    do {
      puVar2 = puVar6 + 1;
      __ZdlPv(*puVar6);
      puVar6 = puVar2;
    } while (puVar2 != puVar5);
    puVar5 = (undefined8 *)param_1[1];
    puVar2 = (undefined8 *)param_1[2];
  }
  if (puVar2 != puVar5) {
    param_1[2] = (long)puVar2 + ((long)puVar5 + (7 - (long)puVar2) & 0xfffffffffffffff8U);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a236b04; end: 10a236b5b;  */

void FUN_10a236b04(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x30;
  __Znwm();
  FUN_10a236b5c();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a236b5c; end: 10a236ba3;  */

undefined8 * FUN_10a236b5c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110ba0c30;
  FUN_10a236ba4(param_1 + 3);
  return param_1;
}



/* Entry: 10a236ba4; end: 10a236c47;  */

undefined8 FUN_10a236ba4(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a098498(param_1,&uStack_30);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return param_1;
}



/* Entry: 10a236c48; end: 10a236e47;  */

char * FUN_10a236c48(char *param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long *plVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined1 uVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  
  puVar7 = PTR___tlv_bootstrap_11340d750;
  if (*param_1 == '\x01') {
    ppuVar12 = &PTR___tlv_bootstrap_11340d750;
    ppuVar9 = ppuVar12;
    (*(code *)PTR___tlv_bootstrap_11340d750)();
    ppuVar10 = &PTR___tlv_bootstrap_11340d738;
    if (((ulong)*ppuVar9 & 1) == 0) {
      ppuVar9 = ppuVar10;
      (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
      __tlv_atexit(0x10a132a8c,ppuVar9,0x100000000);
      (*(code *)puVar7)();
      *(undefined1 *)ppuVar12 = 1;
    }
    (*(code *)PTR___tlv_bootstrap_11340d738)();
    plVar15 = (long *)ppuVar10[2];
    if (plVar15 != (long *)0x0) {
      lVar13 = plVar15[1];
      bVar6 = *(byte *)(lVar13 + 0x42) | *(byte *)(lVar13 + 0x43);
      if ((((bVar6 & 1) != 0) || ((*(byte *)(lVar13 + 0x3f) & 1) != 0)) ||
         (*(char *)(lVar13 + 0x40) == '\x01')) {
        uVar17 = cntfrq_el0;
        InstructionSynchronizationBarrier();
        uVar16 = cntvct_el0;
        if (uVar17 != 1000000000) {
          uVar4 = 0;
          if (uVar17 != 0) {
            uVar4 = uVar16 / uVar17;
          }
          uVar5 = 0;
          if (uVar17 != 0) {
            uVar5 = ((uVar16 - uVar4 * uVar17) * 1000000000) / uVar17;
          }
          uVar16 = uVar5 + uVar4 * 1000000000;
        }
        if (*(char *)(plVar15[1] + 0x40) == '\x01') {
          uVar17 = *(ulong *)(param_1 + 8);
          if (uVar17 <= uVar16) {
            lVar13 = *plVar15;
            __ZNSt3__15mutex4lockEv(lVar13 + 0x480);
            FUN_10a15387c((double)(uVar16 - uVar17),lVar13,lVar13 + 0x480,uVar17,uVar16);
            __ZNSt3__15mutex6unlockEv(lVar13 + 0x480);
          }
        }
        lVar13 = lRam00000001137eabe0;
        if ((bVar6 & 1) != 0) {
          uVar2 = *(undefined4 *)(param_1 + 4);
          uVar3 = *(undefined2 *)(param_1 + 2);
          plVar11 = plVar15;
          FUN_10a1333cc();
          if (plVar11 != (long *)0x0) {
            uVar14 = 6;
            if (lRam00000001137eabe0 != lVar13) {
              uVar14 = 8;
            }
            lVar1 = 0;
            if (lRam00000001137eabe0 != lVar13) {
              lVar1 = lVar13;
            }
            *plVar11 = (long)&UNK_10f64678c;
            plVar11[1] = lVar1;
            plVar11[2] = uVar16;
            *(undefined4 *)(plVar11 + 3) = uVar2;
            *(undefined2 *)((long)plVar11 + 0x1c) = uVar3;
            *(undefined1 *)((long)plVar11 + 0x1e) = uVar14;
            if ((*(byte *)(plVar15 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10a236e40);
              (*pcVar8)();
            }
            plVar15[0x18] = plVar15[0x18] + 1;
          }
        }
      }
      if (((*(char *)(plVar15[1] + 0x41) == '\x01') && (param_1[0x18] == '\x01')) &&
         (plVar15 = (long *)plVar15[0xb], plVar15 != (long *)0x0)) {
        (**(code **)(*plVar15 + 0x18))(plVar15,*(undefined8 *)(param_1 + 0x10));
      }
    }
  }
  return param_1;
}



/* Entry: 10a236e48; end: 10a236f9b;  */

void FUN_10a236e48(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x00010a236e84(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a236f9c; end: 10a236fe3;  */

void FUN_10a236f9c(long *param_1)

{
  if (*(long *)(*param_1 + 0xb8) != 0) {
    func_0x00010a4ec5f4();
  }
  (*(code *)param_1[3])(param_1);
  return;
}



/* Entry: 10a236fe4; end: 10a236ffb;  */

void FUN_10a236fe4(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a236ffc; end: 10a23702b;  */

void FUN_10a236ffc(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x28);
  FUN_10a23702c();
                    /* WARNING: Could not recover jumptable at 0x00010a237028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10a23702c; end: 10a237073;  */

void FUN_10a23702c(long *param_1)

{
  FUN_10a4ec46c(*(undefined8 *)(*param_1 + 0xb8),param_1 + 1);
  (*(code *)param_1[4])(param_1);
  return;
}



/* Entry: 10a237074; end: 10a23708b;  */

void FUN_10a237074(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a23708c; end: 10a2371bb;  */

undefined8 *
FUN_10a23708c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_a28;
  undefined8 uStack_a20;
  undefined1 uStack_a18;
  undefined *puStack_a10;
  undefined8 uStack_a08;
  undefined1 uStack_a00;
  undefined **ppuStack_9f8;
  undefined *puStack_9f0;
  undefined *puStack_9e8;
  ulong uStack_9e0;
  ulong uStack_9d8;
  ulong uStack_9d0;
  undefined4 uStack_9c8;
  undefined **ppuStack_9c0;
  undefined *puStack_9b8;
  undefined8 uStack_9b0;
  undefined1 uStack_9a8;
  undefined *puStack_9a0;
  undefined8 uStack_998;
  undefined1 uStack_990;
  int iStack_988;
  undefined1 auStack_980 [1024];
  undefined1 auStack_580 [1024];
  long lStack_180;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [56];
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_b8 = *param_6;
  uStack_b0 = param_6[1];
  *param_6 = 0;
  (**(code **)(param_6[2] + 0x10))(auStack_a8);
  uStack_70 = param_6[9];
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_c0 = 0x3f800000;
  FUN_10a05c494(param_1,param_2,param_3,param_4,param_5,&uStack_b8,param_7,&uStack_e0);
  func_0x000104c4f944(&uStack_e0);
  puVar3 = &uStack_b8;
  FUN_10a042634();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000104c4f944(&uStack_e0);
  FUN_10a042634(&uStack_b8);
  __Unwind_Resume();
  if (99 < *(int *)(puVar3 + 6) - 200U) {
    func_0x00010ae02ecc(0,*(int *)(puVar3 + 6));
    ppuVar6 = &PTR_PTR_113300908;
    ppuVar5 = ppuVar6;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    lStack_180 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = (undefined8 *)0x0;
    if (ppuVar5 != (undefined **)0x0) {
      FUN_10ae03188(&puStack_9b8,auStack_580,0x400,auStack_980,0x400,ppuVar5[0x13],ppuVar5[0xf],
                    ppuVar5 + 0x14,0x400);
      puStack_a28 = puStack_9a0;
      uStack_a20 = uStack_998;
      puStack_a10 = puStack_9b8;
      uStack_a08 = uStack_9b0;
      uStack_a18 = uStack_990;
      if (iStack_988 != 0) {
        puStack_a28 = &UNK_10f6c352e;
        uStack_a20 = 0x10;
        puStack_a10 = &UNK_10f6c352e;
        uStack_a08 = 0x10;
        uStack_a18 = 0;
        uStack_9a8 = 0;
      }
      puVar8 = ppuVar5[0x12];
      puVar7 = ppuVar5[0xb];
      uVar1 = 0;
      _clock_gettime_nsec_np();
      uVar2 = uVar1;
      _pthread_self();
      _pthread_mach_thread_np();
      ppuStack_9f8 = ppuVar5 + 1;
      uStack_9c8 = *(undefined4 *)(ppuVar5 + 0xe);
      uStack_9d0 = uVar2 & 0xffffffff;
      ppuStack_9c0 = ppuVar5 + 0x10;
      puVar3 = (undefined8 *)*ppuVar5;
      ppuVar6 = (undefined **)&ppuStack_9f8;
      uStack_a00 = uStack_9a8;
      puStack_9f0 = puVar7;
      puStack_9e8 = puVar8;
      uStack_9e0 = (ulong)(puVar8 != (undefined *)0x0);
      uStack_9d8 = uVar1;
      FUN_10ae0784c(puVar3,ppuVar6,&puStack_a10,&puStack_a28);
    }
    iVar4 = (int)ppuVar6;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_180) {
      ___stack_chk_fail();
      if (iVar4 == 0) {
        __Unwind_Resume();
      }
      func_0x000104bd46a0();
      func_0x00010ae087bc();
      FUN_10ae07e54(puVar3);
      return puVar3;
    }
    return puVar3;
  }
  return puVar3;
}



/* Entry: 10a2371bc; end: 10a23722b;  */

undefined * FUN_10a2371bc(undefined *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined **ppuStack_8e8;
  undefined *puStack_8e0;
  undefined *puStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined **ppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [1024];
  long lStack_70;
  
  if (*(int *)(param_1 + 0x30) - 200U < 100) {
    return param_1;
  }
  func_0x00010ae02ecc(0,*(int *)(param_1 + 0x30));
  ppuVar6 = &PTR_PTR_113300908;
  ppuVar5 = ppuVar6;
  FUN_10ae079a0();
  func_0x00010ae02edc();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined *)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar5[0x13],ppuVar5[0xf],
                  ppuVar5 + 0x14,0x400);
    puStack_918 = puStack_890;
    uStack_910 = uStack_888;
    puStack_900 = puStack_8a8;
    uStack_8f8 = uStack_8a0;
    uStack_908 = uStack_880;
    if (iStack_878 != 0) {
      puStack_918 = &UNK_10f6c352e;
      uStack_910 = 0x10;
      puStack_900 = &UNK_10f6c352e;
      uStack_8f8 = 0x10;
      uStack_908 = 0;
      uStack_898 = 0;
    }
    puVar8 = ppuVar5[0x12];
    puVar7 = ppuVar5[0xb];
    uVar1 = 0;
    _clock_gettime_nsec_np();
    uVar2 = uVar1;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar5 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar5 + 0xe);
    uStack_8c0 = uVar2 & 0xffffffff;
    ppuStack_8b0 = ppuVar5 + 0x10;
    puVar3 = *ppuVar5;
    ppuVar6 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar7;
    puStack_8d8 = puVar8;
    uStack_8d0 = (ulong)(puVar8 != (undefined *)0x0);
    uStack_8c8 = uVar1;
    FUN_10ae0784c(puVar3,ppuVar6,&puStack_900,&puStack_918);
  }
  iVar4 = (int)ppuVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar4 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar3);
    return puVar3;
  }
  return puVar3;
}



/* Entry: 10a23722c; end: 10a23723f;  */

void FUN_10a23722c(void)

{
  return;
}



/* Entry: 10a237240; end: 10a237743;  */

undefined4 * FUN_10a237240(undefined4 *param_1,undefined4 *param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  uVar5 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = uVar5;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  if (*(char *)(param_2 + 0x12) == '\x01') {
    FUN_10a23080c(param_1 + 8,param_2 + 8);
    *(undefined1 *)(param_1 + 0x12) = 1;
  }
  uVar4 = *(undefined2 *)(param_2 + 0x14);
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined2 *)(param_1 + 0x14) = uVar4;
  *(undefined1 *)(param_1 + 0x44) = 0;
  if (*(char *)(param_2 + 0x44) == '\x01') {
    FUN_10a230bf4(param_1 + 0x16,param_2 + 0x16);
    *(undefined1 *)(param_1 + 0x44) = 1;
  }
  *(undefined1 *)(param_1 + 0x46) = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  if (*(char *)(param_2 + 0x4c) == '\x01') {
    *(undefined8 *)(param_1 + 0x46) = *(undefined8 *)(param_2 + 0x46);
    lVar1 = *(long *)(param_2 + 0x48);
    lVar2 = *(long *)(param_2 + 0x4a);
    *(long *)(param_1 + 0x48) = lVar1;
    *(long *)(param_1 + 0x4a) = lVar2;
    if (lVar2 == 0) {
      *(undefined4 **)(param_1 + 0x46) = param_1 + 0x48;
    }
    else {
      *(undefined4 **)(lVar1 + 0x10) = param_1 + 0x48;
      *(undefined4 **)(param_2 + 0x46) = param_2 + 0x48;
      *(undefined8 *)(param_2 + 0x48) = 0;
      *(undefined8 *)(param_2 + 0x4a) = 0;
    }
    *(undefined1 *)(param_1 + 0x4c) = 1;
  }
  *(undefined1 *)(param_1 + 0x4e) = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  if (*(char *)(param_2 + 0x5c) == '\x01') {
    *(undefined8 *)(param_1 + 0x4e) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x52) = 0;
    *(undefined8 *)(param_1 + 0x4e) = *(undefined8 *)(param_2 + 0x4e);
    uVar5 = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x52) = *(undefined8 *)(param_2 + 0x52);
    *(undefined8 *)(param_1 + 0x50) = uVar5;
    *(undefined8 *)(param_2 + 0x4e) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x52) = 0;
    uVar6 = *(undefined8 *)(param_2 + 0x56);
    uVar5 = *(undefined8 *)(param_2 + 0x54);
    uVar7 = *(undefined8 *)((long)param_2 + 0x15d);
    *(undefined8 *)((long)param_1 + 0x165) = *(undefined8 *)((long)param_2 + 0x165);
    *(undefined8 *)((long)param_1 + 0x15d) = uVar7;
    *(undefined8 *)(param_1 + 0x56) = uVar6;
    *(undefined8 *)(param_1 + 0x54) = uVar5;
    *(undefined1 *)(param_1 + 0x5c) = 1;
  }
  uVar6 = *(undefined8 *)(param_2 + 0x60);
  uVar5 = *(undefined8 *)(param_2 + 0x5e);
  uVar8 = *(undefined8 *)(param_2 + 100);
  uVar7 = *(undefined8 *)(param_2 + 0x62);
  *(undefined2 *)(param_1 + 0x66) = *(undefined2 *)(param_2 + 0x66);
  *(undefined8 *)(param_1 + 0x60) = uVar6;
  *(undefined8 *)(param_1 + 0x5e) = uVar5;
  *(undefined8 *)(param_1 + 100) = uVar8;
  *(undefined8 *)(param_1 + 0x62) = uVar7;
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0x72) = 0;
  if (*(char *)(param_2 + 0x72) == '\x01') {
    FUN_10a231018(param_1 + 0x68,param_2 + 0x68);
    *(undefined1 *)(param_1 + 0x72) = 1;
  }
  *(undefined1 *)(param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0x7e) = 0;
  if (*(char *)(param_2 + 0x7e) == '\x01') {
    FUN_10a2311c0(param_1 + 0x74,param_2 + 0x74);
    *(undefined1 *)(param_1 + 0x7e) = 1;
  }
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x8e) = 0;
  if (*(char *)(param_2 + 0x8e) == '\x01') {
    *(undefined1 *)(param_1 + 0x82) = *(undefined1 *)(param_2 + 0x82);
    *(undefined ***)(param_1 + 0x80) = &PTR_FUN_110bef348;
    FUN_10a2311c0(param_1 + 0x84,param_2 + 0x84);
    *(undefined1 *)(param_1 + 0x8e) = 1;
  }
  *(undefined1 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x9a) = 0;
  if (*(char *)(param_2 + 0x9a) == '\x01') {
    uVar6 = *(undefined8 *)(param_2 + 0x92);
    uVar5 = *(undefined8 *)(param_2 + 0x90);
    *(undefined8 *)(param_1 + 0x94) = *(undefined8 *)(param_2 + 0x94);
    *(undefined8 *)(param_1 + 0x92) = uVar6;
    *(undefined8 *)(param_1 + 0x90) = uVar5;
    *(undefined8 *)(param_2 + 0x94) = 0;
    *(undefined8 *)(param_2 + 0x92) = 0;
    *(undefined8 *)(param_2 + 0x90) = 0;
    uVar5 = *(undefined8 *)(param_2 + 0x96);
    *(undefined8 *)((long)param_1 + 0x25e) = *(undefined8 *)((long)param_2 + 0x25e);
    *(undefined8 *)(param_1 + 0x96) = uVar5;
    *(undefined1 *)(param_1 + 0x9a) = 1;
  }
  uVar6 = *(undefined8 *)(param_2 + 0x9e);
  uVar5 = *(undefined8 *)(param_2 + 0x9c);
  uVar8 = *(undefined8 *)(param_2 + 0xa2);
  uVar7 = *(undefined8 *)(param_2 + 0xa0);
  *(undefined1 *)(param_1 + 0xa4) = *(undefined1 *)(param_2 + 0xa4);
  *(undefined8 *)(param_1 + 0x9e) = uVar6;
  *(undefined8 *)(param_1 + 0x9c) = uVar5;
  *(undefined8 *)(param_1 + 0xa2) = uVar8;
  *(undefined8 *)(param_1 + 0xa0) = uVar7;
  *(undefined1 *)(param_1 + 0xa6) = 0;
  *(undefined1 *)(param_1 + 0xac) = 0;
  if (*(char *)(param_2 + 0xac) == '\x01') {
    *(undefined8 *)(param_1 + 0xaa) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xa6) = 0;
    *(undefined8 *)(param_1 + 0xa6) = *(undefined8 *)(param_2 + 0xa6);
    uVar5 = *(undefined8 *)(param_2 + 0xa8);
    *(undefined8 *)(param_1 + 0xaa) = *(undefined8 *)(param_2 + 0xaa);
    *(undefined8 *)(param_1 + 0xa8) = uVar5;
    *(undefined8 *)(param_2 + 0xaa) = 0;
    *(undefined8 *)(param_2 + 0xa8) = 0;
    *(undefined8 *)(param_2 + 0xa6) = 0;
    *(undefined1 *)(param_1 + 0xac) = 1;
  }
  *(undefined1 *)(param_1 + 0xae) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  if (*(char *)(param_2 + 0xb4) == '\x01') {
    *(undefined8 *)(param_1 + 0xb2) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xae) = 0;
    *(undefined8 *)(param_1 + 0xae) = *(undefined8 *)(param_2 + 0xae);
    uVar5 = *(undefined8 *)(param_2 + 0xb0);
    *(undefined8 *)(param_1 + 0xb2) = *(undefined8 *)(param_2 + 0xb2);
    *(undefined8 *)(param_1 + 0xb0) = uVar5;
    *(undefined8 *)(param_2 + 0xb2) = 0;
    *(undefined8 *)(param_2 + 0xb0) = 0;
    *(undefined8 *)(param_2 + 0xae) = 0;
    *(undefined1 *)(param_1 + 0xb4) = 1;
  }
  *(undefined1 *)(param_1 + 0xb6) = 0;
  *(undefined1 *)(param_1 + 0xbe) = 0;
  if (*(char *)(param_2 + 0xbe) == '\x01') {
    uVar3 = param_2[0xb6];
    *(undefined2 *)(param_1 + 0xb7) = *(undefined2 *)(param_2 + 0xb7);
    param_1[0xb6] = uVar3;
    uVar6 = *(undefined8 *)(param_2 + 0xba);
    uVar5 = *(undefined8 *)(param_2 + 0xb8);
    *(undefined8 *)(param_1 + 0xbc) = *(undefined8 *)(param_2 + 0xbc);
    *(undefined8 *)(param_1 + 0xba) = uVar6;
    *(undefined8 *)(param_1 + 0xb8) = uVar5;
    *(undefined8 *)(param_2 + 0xbc) = 0;
    *(undefined8 *)(param_2 + 0xba) = 0;
    *(undefined8 *)(param_2 + 0xb8) = 0;
    *(undefined1 *)(param_1 + 0xbe) = 1;
  }
  *(undefined1 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 0x100) = 0;
  if (*(char *)(param_2 + 0x100) == '\x01') {
    FUN_10a2317c0(param_1 + 0xc0,param_2 + 0xc0);
    *(undefined1 *)(param_1 + 0x100) = 1;
  }
  *(undefined1 *)(param_1 + 0x104) = 0;
  *(undefined1 *)(param_1 + 0x114) = 0;
  if (*(char *)(param_2 + 0x114) == '\x01') {
    FUN_10a231968(param_1 + 0x104,param_2 + 0x104);
  }
  *(undefined1 *)(param_1 + 0x116) = 0;
  *(undefined1 *)(param_1 + 300) = 0;
  if (*(char *)(param_2 + 300) == '\x01') {
    uVar6 = *(undefined8 *)(param_2 + 0x118);
    uVar5 = *(undefined8 *)(param_2 + 0x116);
    *(undefined8 *)(param_1 + 0x11a) = *(undefined8 *)(param_2 + 0x11a);
    *(undefined8 *)(param_1 + 0x118) = uVar6;
    *(undefined8 *)(param_1 + 0x116) = uVar5;
    *(undefined8 *)(param_2 + 0x11a) = 0;
    *(undefined8 *)(param_2 + 0x118) = 0;
    *(undefined8 *)(param_2 + 0x116) = 0;
    uVar6 = *(undefined8 *)(param_2 + 0x11e);
    uVar5 = *(undefined8 *)(param_2 + 0x11c);
    *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
    *(undefined8 *)(param_1 + 0x11e) = uVar6;
    *(undefined8 *)(param_1 + 0x11c) = uVar5;
    *(undefined8 *)(param_2 + 0x120) = 0;
    *(undefined8 *)(param_2 + 0x11e) = 0;
    *(undefined8 *)(param_2 + 0x11c) = 0;
    uVar6 = *(undefined8 *)(param_2 + 0x124);
    uVar5 = *(undefined8 *)(param_2 + 0x122);
    *(undefined8 *)(param_1 + 0x126) = *(undefined8 *)(param_2 + 0x126);
    *(undefined8 *)(param_1 + 0x124) = uVar6;
    *(undefined8 *)(param_1 + 0x122) = uVar5;
    *(undefined8 *)(param_2 + 0x126) = 0;
    *(undefined8 *)(param_2 + 0x124) = 0;
    *(undefined8 *)(param_2 + 0x122) = 0;
    uVar5 = *(undefined8 *)(param_2 + 0x128);
    *(undefined8 *)((long)param_1 + 0x4a5) = *(undefined8 *)((long)param_2 + 0x4a5);
    *(undefined8 *)(param_1 + 0x128) = uVar5;
    *(undefined1 *)(param_1 + 300) = 1;
  }
  uVar6 = *(undefined8 *)(param_2 + 0x130);
  uVar5 = *(undefined8 *)(param_2 + 0x12e);
  uVar7 = *(undefined8 *)(param_2 + 0x132);
  uVar9 = *(undefined8 *)(param_2 + 0x138);
  uVar8 = *(undefined8 *)(param_2 + 0x136);
  *(undefined8 *)(param_1 + 0x134) = *(undefined8 *)(param_2 + 0x134);
  *(undefined8 *)(param_1 + 0x132) = uVar7;
  *(undefined8 *)(param_1 + 0x138) = uVar9;
  *(undefined8 *)(param_1 + 0x136) = uVar8;
  *(undefined8 *)(param_1 + 0x130) = uVar6;
  *(undefined8 *)(param_1 + 0x12e) = uVar5;
  *(undefined1 *)(param_1 + 0x13a) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  if (*(char *)(param_2 + 0x140) == '\x01') {
    *(undefined8 *)(param_1 + 0x13e) = 0;
    *(undefined8 *)(param_1 + 0x13c) = 0;
    *(undefined8 *)(param_1 + 0x13a) = 0;
    *(undefined8 *)(param_1 + 0x13a) = *(undefined8 *)(param_2 + 0x13a);
    uVar5 = *(undefined8 *)(param_2 + 0x13c);
    *(undefined8 *)(param_1 + 0x13e) = *(undefined8 *)(param_2 + 0x13e);
    *(undefined8 *)(param_1 + 0x13c) = uVar5;
    *(undefined8 *)(param_2 + 0x13e) = 0;
    *(undefined8 *)(param_2 + 0x13c) = 0;
    *(undefined8 *)(param_2 + 0x13a) = 0;
    *(undefined1 *)(param_1 + 0x140) = 1;
  }
  *(undefined1 *)(param_1 + 0x142) = 0;
  *(undefined1 *)(param_1 + 0x148) = 0;
  if (*(char *)(param_2 + 0x148) == '\x01') {
    uVar6 = *(undefined8 *)(param_2 + 0x144);
    uVar5 = *(undefined8 *)(param_2 + 0x142);
    *(undefined8 *)(param_1 + 0x146) = *(undefined8 *)(param_2 + 0x146);
    *(undefined8 *)(param_1 + 0x144) = uVar6;
    *(undefined8 *)(param_1 + 0x142) = uVar5;
    *(undefined8 *)(param_2 + 0x146) = 0;
    *(undefined8 *)(param_2 + 0x144) = 0;
    *(undefined8 *)(param_2 + 0x142) = 0;
    *(undefined1 *)(param_1 + 0x148) = 1;
  }
  *(undefined1 *)(param_1 + 0x14a) = 0;
  *(undefined1 *)(param_1 + 0x154) = 0;
  if (*(char *)(param_2 + 0x154) == '\x01') {
    FUN_10a13d7dc(param_1 + 0x14a,param_2 + 0x14a);
    *(undefined1 *)(param_1 + 0x154) = 1;
  }
  uVar6 = *(undefined8 *)(param_2 + 0x158);
  uVar5 = *(undefined8 *)(param_2 + 0x156);
  uVar7 = *(undefined8 *)((long)param_2 + 0x561);
  *(undefined8 *)((long)param_1 + 0x569) = *(undefined8 *)((long)param_2 + 0x569);
  *(undefined8 *)((long)param_1 + 0x561) = uVar7;
  *(undefined8 *)(param_1 + 0x158) = uVar6;
  *(undefined8 *)(param_1 + 0x156) = uVar5;
  *(undefined8 *)(param_1 + 0x15e) = *(undefined8 *)(param_2 + 0x15e);
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_2 + 0x160);
  *(undefined8 *)(param_2 + 0x160) = 0;
  *(undefined8 *)(param_2 + 0x15e) = 0;
  return param_1;
}



/* Entry: 10a237744; end: 10a237773;  */

void FUN_10a237744(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x660);
  FUN_10a237774();
                    /* WARNING: Could not recover jumptable at 0x00010a237770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10a237774; end: 10a2377eb;  */

void FUN_10a237774(long *param_1)

{
  undefined **ppuStack_40;
  undefined1 uStack_38;
  long lStack_30;
  undefined1 uStack_28;
  
  uStack_38 = (undefined1)param_1[199];
  ppuStack_40 = &PTR_DAT_110ba5598;
  lStack_30 = param_1[200];
  uStack_28 = (undefined1)param_1[0xc9];
  FUN_10a4ec6ec(*(undefined8 *)(*param_1 + 0xb8),param_1 + 2,&ppuStack_40);
  (*(code *)param_1[0xcb])(param_1);
  return;
}



/* Entry: 10a2377ec; end: 10a23788b;  */

void FUN_10a2377ec(long param_1)

{
  if (param_1 != 0) {
    func_0x00010a042d30(param_1 + 0x618);
    func_0x00010a231e08(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a23788c; end: 10a237973;  */

void FUN_10a23788c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lStack_28;
  
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a237948);
    (*pcVar4)();
  }
  lVar6 = param_1[4];
  param_1[4] = 0;
  lStack_28 = lVar6;
  FUN_10a4ec544(*(undefined8 *)(*param_1 + 0xb8));
  plVar1 = (long *)(lVar6 + 0x10);
  do {
    lVar5 = *plVar1;
    if (lVar5 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(lVar6 + 0x18);
        goto LAB_10a237900;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar5 >> 1 & 1) != 0) {
LAB_10a237900:
      if ((char)param_1[3] == '\x01') {
        *(undefined1 *)(param_1 + 3) = 0;
      }
      lStack_28 = 0;
      if ((lVar6 != 0) && (func_0x0001092b4274(&lStack_28,lVar6), lStack_28 != 0)) {
        func_0x0001092b4274(&lStack_28);
      }
      return;
    }
  } while( true );
}



/* Entry: 10a237974; end: 10a237b83;  */

undefined8 * FUN_10a237974(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb4740;
  if (param_1[0x18] != 0) {
    func_0x0001092b4274();
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a237b84; end: 10a237c6b;  */

void FUN_10a237b84(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lStack_28;
  
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a237c40);
    (*pcVar4)();
  }
  lVar6 = param_1[4];
  param_1[4] = 0;
  lStack_28 = lVar6;
  func_0x00010a4ec5f4(*(undefined8 *)(*param_1 + 0xb8));
  plVar1 = (long *)(lVar6 + 0x10);
  do {
    lVar5 = *plVar1;
    if (lVar5 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(lVar6 + 0x18);
        goto LAB_10a237bf8;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar5 >> 1 & 1) != 0) {
LAB_10a237bf8:
      if ((char)param_1[3] == '\x01') {
        *(undefined1 *)(param_1 + 3) = 0;
      }
      lStack_28 = 0;
      if ((lVar6 != 0) && (func_0x0001092b4274(&lStack_28,lVar6), lStack_28 != 0)) {
        func_0x0001092b4274(&lStack_28);
      }
      return;
    }
  } while( true );
}



/* Entry: 10a237c6c; end: 10a237de3;  */

undefined8 * FUN_10a237c6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb47b0;
  if (param_1[0x18] != 0) {
    func_0x0001092b4274();
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a237de4; end: 10a237ecb;  */

void FUN_10a237de4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lStack_28;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a237ea0);
    (*pcVar4)();
  }
  lVar6 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  lStack_28 = lVar6;
  func_0x00010a313478(*(undefined8 *)(*(long *)(param_1 + 8) + 0x140));
  plVar1 = (long *)(lVar6 + 0x10);
  do {
    lVar5 = *plVar1;
    if (lVar5 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(lVar6 + 0x18);
        goto LAB_10a237e58;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar5 >> 1 & 1) != 0) {
LAB_10a237e58:
      if (*(char *)(param_1 + 0x18) == '\x01') {
        *(undefined1 *)(param_1 + 0x18) = 0;
      }
      lStack_28 = 0;
      if ((lVar6 != 0) && (func_0x0001092b4274(&lStack_28,lVar6), lStack_28 != 0)) {
        func_0x0001092b4274(&lStack_28);
      }
      return;
    }
  } while( true );
}



/* Entry: 10a237ecc; end: 10a23814f;  */

undefined8 * FUN_10a237ecc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb4820;
  if (param_1[0x18] != 0) {
    func_0x0001092b4274();
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a238150; end: 10a23822b;  */

void FUN_10a238150(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_38;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
    uStack_38 = 0;
    lVar3 = *(long *)(param_1 + 0x10);
    __ZNSt13exception_ptrD1Ev(&uStack_38);
    if (lVar3 == 0) {
      FUN_10a22b348(param_1 + 0x90,param_2);
      uVar2 = *(undefined8 *)(param_2 + 0x28);
      *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0x30);
      *(undefined8 *)(param_1 + 0xb8) = uVar2;
      *(undefined8 *)(param_2 + 0x28) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
      *(undefined1 *)(param_1 + 0xd0) = *(undefined1 *)(param_2 + 0x40);
      *(undefined ***)(param_1 + 200) = &PTR_DAT_110ba5598;
      uVar2 = *(undefined8 *)(param_2 + 0x48);
      *(undefined1 *)(param_1 + 0xe0) = *(undefined1 *)(param_2 + 0x50);
      *(undefined8 *)(param_1 + 0xd8) = uVar2;
      uVar2 = *(undefined8 *)(param_2 + 0x58);
      *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0x60);
      *(undefined8 *)(param_1 + 0xe8) = uVar2;
      *(undefined8 *)(param_2 + 0x58) = 0;
      *(undefined8 *)(param_2 + 0x60) = 0;
      *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 5;
      __ZNSt3__118condition_variable10notify_allEv(param_1 + 0x58);
      __ZNSt3__15mutex6unlockEv(param_1 + 0x18);
      return;
    }
  }
  FUN_10a0843f8(2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a238218);
  (*pcVar1)();
}



/* Entry: 10a23822c; end: 10a2382fb;  */

undefined8 * FUN_10a23822c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    if ((*(byte *)(plVar5 + 0x11) & 1) == 0) {
      uStack_38 = 0;
      lVar6 = plVar5[2];
      puVar4 = &uStack_38;
      __ZNSt13exception_ptrD1Ev(puVar4);
      plVar5 = (long *)*param_1;
      if ((lVar6 == 0) && (0 < plVar5[1])) {
        __ZNSt3__115future_categoryEv();
        __ZNSt3__112future_errorC1ENS_10error_codeE(auStack_60,4,puVar4);
        FUN_10a084fb0(auStack_40,auStack_60);
        __ZNSt3__117__assoc_sub_state13set_exceptionESt13exception_ptr(plVar5,auStack_40);
        __ZNSt13exception_ptrD1Ev(auStack_40);
        __ZNSt3__112future_errorD1Ev(auStack_60);
        plVar5 = (long *)*param_1;
      }
    }
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a2382fc; end: 10a238377;  */

undefined8 * FUN_10a2382fc(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a238378; end: 10a23868b;  */

long * FUN_10a238378(long *param_1,long *param_2,long *param_3)

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
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar18)) goto LAB_10a238580;
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
    if (plVar18 <= plVar6) goto LAB_10a238580;
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
      goto LAB_10a238580;
    }
    if (plVar6 == (long *)0x0) {
      lVar4 = *param_1;
      *param_1 = 0;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      plVar18 = (long *)0x0;
      goto LAB_10a238580;
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
LAB_10a238580:
    uVar8 = (long)plVar18 - 1;
    if (((ulong)plVar18 & uVar8) == 0) {
      plVar6 = (long *)(uVar8 & (ulong)param_2);
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
    if (plVar15 != (long *)0x0) goto LAB_10a2386b4;
LAB_10a2386f0:
    plVar18 = plVar7 + 2;
    *plVar10 = *plVar18;
    *plVar18 = (long)plVar10;
    *(long **)(*plVar7 + uVar9 * 8) = plVar18;
    if (*plVar10 == 0) goto LAB_10a23874c;
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
    if (plVar15 == (long *)0x0) goto LAB_10a2386f0;
LAB_10a2386b4:
    *plVar10 = *plVar15;
    *plVar15 = (long)plVar10;
    if (*plVar10 == 0) goto LAB_10a23874c;
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
    if (uVar13 == uVar9) goto LAB_10a23874c;
  }
  *(long **)(*plVar7 + uVar13 * 8) = plVar10;
LAB_10a23874c:
  plVar7[3] = plVar7[3] + 1;
  return plVar7;
}



/* Entry: 10a23868c; end: 10a23878b;  */

void FUN_10a23868c(long *param_1,long *param_2,long *param_3)

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
    if (param_3 != (long *)0x0) goto LAB_10a2386b4;
LAB_10a2386f0:
    plVar5 = param_1 + 2;
    *param_2 = *plVar5;
    *plVar5 = (long)param_2;
    *(long **)(*param_1 + uVar2 * 8) = plVar5;
    if (*param_2 == 0) goto LAB_10a23874c;
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
    if (param_3 == (long *)0x0) goto LAB_10a2386f0;
LAB_10a2386b4:
    *param_2 = *param_3;
    *param_3 = (long)param_2;
    if (*param_2 == 0) goto LAB_10a23874c;
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
    if (uVar4 == uVar2) goto LAB_10a23874c;
  }
  *(long **)(*param_1 + uVar4 * 8) = param_2;
LAB_10a23874c:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10a23878c; end: 10a23879f;  */

void FUN_10a23878c(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2387a0; end: 10a2387b7;  */

void FUN_10a2387a0(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a2387b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10a2387b8; end: 10a2387ef;  */

undefined8 FUN_10a2387b8(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bb4918);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a2387f0; end: 10a2387f3;  */

void FUN_10a2387f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2387f4; end: 10a238923;  */

void FUN_10a2387f4(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plStack_90;
  undefined1 auStack_88 [48];
  long *plStack_58;
  long *plStack_28;
  
  FUN_10a238b80(auStack_88,*param_1);
  FUN_10a225eb8(&plStack_90,auStack_88);
  plVar1 = plStack_90;
  plStack_90 = (long *)0x0;
  plVar4 = *(long **)param_1[1];
  *(long **)param_1[1] = plVar1;
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
      (**(code **)(*plVar4 + 0x10))();
    }
    if (plStack_90 != (long *)0x0) {
      plVar1 = plStack_90 + 1;
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
        (**(code **)(*plStack_90 + 0x10))();
      }
    }
  }
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  FUN_10a234f44(auStack_88);
  return;
}



/* Entry: 10a238924; end: 10a238953;  */

void FUN_10a238924(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x30);
  FUN_10a238954();
                    /* WARNING: Could not recover jumptable at 0x00010a238950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10a238954; end: 10a238a37;  */

void FUN_10a238954(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lStack_28;
  
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a238a0c);
    (*pcVar4)();
  }
  lVar6 = *(long *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  lStack_28 = lVar6;
  FUN_10a2387f4(param_1 + 8);
  plVar1 = (long *)(lVar6 + 0x10);
  do {
    lVar5 = *plVar1;
    if (lVar5 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(lVar6 + 0x18);
        goto LAB_10a2389c4;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar5 >> 1 & 1) != 0) {
LAB_10a2389c4:
      if (*(char *)(param_1 + 0x20) == '\x01') {
        *(undefined1 *)(param_1 + 0x20) = 0;
      }
      lStack_28 = 0;
      if ((lVar6 != 0) && (func_0x0001092b4274(&lStack_28,lVar6), lStack_28 != 0)) {
        func_0x0001092b4274(&lStack_28);
      }
      return;
    }
  } while( true );
}



/* Entry: 10a238a38; end: 10a238b7f;  */

undefined8 * FUN_10a238a38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb4938;
  if (param_1[0x19] != 0) {
    func_0x0001092b4274();
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a238b80; end: 10a2392ab;  */

/* WARNING: Removing unreachable block (ram,0x00010a238eac) */
/* WARNING: Removing unreachable block (ram,0x00010a238eb0) */
/* WARNING: Removing unreachable block (ram,0x00010a238eb8) */
/* WARNING: Removing unreachable block (ram,0x00010a238ec0) */
/* WARNING: Removing unreachable block (ram,0x00010a238ec4) */
/* WARNING: Removing unreachable block (ram,0x00010a239074) */
/* WARNING: Removing unreachable block (ram,0x00010a239078) */
/* WARNING: Removing unreachable block (ram,0x00010a239080) */
/* WARNING: Removing unreachable block (ram,0x00010a239088) */
/* WARNING: Removing unreachable block (ram,0x00010a23908c) */

void FUN_10a238b80(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  char cVar11;
  bool bVar12;
  undefined8 *puVar13;
  code *pcVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  undefined *puVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  long lVar22;
  undefined8 uVar23;
  uint7 uStack_17f;
  uint7 uStack_15f;
  undefined1 auStack_140 [7];
  undefined8 uStack_139;
  undefined1 uStack_131;
  undefined8 uStack_130;
  long *plStack_128;
  undefined8 *puStack_120;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  long lStack_100;
  long *plStack_f8;
  undefined8 *puStack_f0;
  long *plStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long lStack_a8;
  undefined1 uStack_90;
  undefined1 uStack_88;
  ulong uStack_87;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a313144(&lStack_100,*param_2);
  plVar1 = plStack_e8;
  plStack_108 = plStack_f8;
  plStack_110 = (long *)lStack_100;
  if (plStack_f8 != (long *)0x0) {
    plVar5 = plStack_f8 + 1;
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar12) {
        *plVar5 = *plVar5 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  plStack_118 = plStack_e8;
  puStack_120 = puStack_f0;
  if (plStack_e8 == (long *)0x0) {
    puStack_f0 = (undefined8 *)0x0;
    plStack_e8 = (long *)0x0;
  }
  else {
    plStack_e8 = plStack_e8 + 1;
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plStack_e8,0x10);
      if (bVar12) {
        *plStack_e8 = *plStack_e8 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    puStack_f0 = (undefined8 *)0x0;
    plStack_e8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      plVar5 = plVar1 + 1;
      do {
        lVar17 = *plVar5;
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar12) {
          *plVar5 = lVar17 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  plStack_128 = (long *)puStack_120[1];
  uStack_130 = *puStack_120;
  if (puStack_120[1] != 0) {
    plVar1 = (long *)(puStack_120[1] + 8);
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = *plVar1 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  uVar10 = *(undefined1 *)(puStack_120 + 3);
  uStack_139 = puStack_120[4];
  uStack_131 = *(undefined1 *)(puStack_120 + 5);
  if ((plStack_118 == (long *)0x0) || (plStack_118[1] != 0)) {
LAB_10a238db0:
    plVar5 = plStack_108;
    plVar1 = plStack_110;
    uVar20 = *(ulong *)((long)plStack_110 + 0x10);
    uVar8 = *(undefined8 *)((long)plStack_110 + 0x18);
    uVar3 = uVar20 << 2;
    if ((int)param_2[4] != 7) {
      uVar3 = uVar20;
    }
    uVar23 = *(undefined8 *)((long)plStack_110 + 0x28);
    if (plStack_108 != (long *)0x0) {
      plVar4 = plStack_108 + 1;
      do {
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar12) {
          *plVar4 = *plVar4 + 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
    }
    plVar16 = (long *)0xa8;
    __Znwm();
    plVar16[1] = 0;
    plVar16[2] = 0;
    *plVar16 = (long)&PTR_FUN_110baa4d8;
    plVar4 = plVar16 + 3;
    ppuStack_e0 = (undefined **)FUN_10a2392c0;
    ppuStack_d8 = &PTR_DAT_110bb4998;
    ppuStack_d0 = (undefined **)plVar1;
    plStack_c8 = plVar5;
    FUN_10a1b2668(plVar4,uVar23,uVar3 & 0xffffffff | uVar20 & 0xffffffff00000000,uVar8,
                  (int)param_2[4],&ppuStack_e0,0,0);
    (*(code *)*ppuStack_d8)(&ppuStack_d8);
    plStack_110 = plVar4;
    plStack_108 = plVar16;
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        lVar17 = *plVar1;
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = lVar17 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    plVar1 = plStack_108;
    plStack_b8 = plStack_110;
    puVar21 = (undefined8 *)((ulong)auStack_140 | 7);
    uVar9 = *(undefined4 *)(param_2[2] + 0xa0);
    plStack_110 = (long *)0x0;
    plStack_108 = (long *)0x0;
    ppuStack_e0 = (undefined **)CONCAT44(ppuStack_e0._4_4_,uVar9);
    ppuStack_d0 = (undefined **)CONCAT71(ppuStack_d0._1_7_,uVar10);
    ppuStack_d8 = &PTR_DAT_110ba5598;
    plStack_c8 = (long *)*puVar21;
    plStack_c0 = (long *)CONCAT71(plStack_c0._1_7_,*(undefined1 *)(puVar21 + 1));
    plStack_b0 = plVar1;
    if (plVar1 != (long *)0x0) {
      plVar5 = plVar1 + 1;
      do {
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar12) {
          *plVar5 = *plVar5 + 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
    }
    lStack_a8 = (ulong)uStack_17f << 8;
    uStack_90 = 0;
    uStack_87 = (ulong)uStack_15f;
    uStack_88 = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 4) = 0x3f800000;
    FUN_10a2364a4(param_1,uVar9,&ppuStack_e0);
    param_1[6] = plStack_128;
    param_1[5] = uStack_130;
    if (plStack_128 != (long *)0x0) {
      plVar5 = plStack_128 + 1;
      do {
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar12) {
          *plVar5 = *plVar5 + 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
    }
    *(undefined1 *)(param_1 + 8) = uVar10;
    param_1[7] = &PTR_DAT_110ba5598;
    param_1[9] = *puVar21;
    *(undefined1 *)(param_1 + 10) = *(undefined1 *)(puVar21 + 1);
    lVar17 = param_2[3];
    lVar22 = param_2[2];
    param_1[0xc] = param_2[3];
    param_1[0xb] = lVar22;
    if (lVar17 != 0) {
      plVar5 = (long *)(lVar17 + 8);
      do {
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar12) {
          *plVar5 = *plVar5 + 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
    }
    if (plVar1 != (long *)0x0) {
      plVar5 = plVar1 + 1;
      do {
        lVar17 = *plVar5;
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar12) {
          *plVar5 = lVar17 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
      do {
        lVar17 = *plVar5;
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar12) {
          *plVar5 = lVar17 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    plVar1 = plStack_128;
    if (plStack_128 != (long *)0x0) {
      plVar5 = plStack_128 + 1;
      do {
        lVar17 = *plVar5;
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar12) {
          *plVar5 = lVar17 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plStack_128 + 0x10))(plStack_128);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    plVar1 = plStack_118;
    if (plStack_118 != (long *)0x0) {
      plVar5 = plStack_118 + 1;
      do {
        lVar17 = *plVar5;
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar12) {
          *plVar5 = lVar17 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plStack_118 + 0x10))(plStack_118);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    plVar1 = plStack_108;
    if (plStack_108 != (long *)0x0) {
      plVar5 = plStack_108 + 1;
      do {
        lVar17 = *plVar5;
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar12) {
          *plVar5 = lVar17 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plStack_108 + 0x10))(plStack_108);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    plVar1 = plStack_e8;
    if (plStack_e8 != (long *)0x0) {
      plVar5 = plStack_e8 + 1;
      do {
        lVar17 = *plVar5;
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar12) {
          *plVar5 = lVar17 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    if (plStack_f8 != (long *)0x0) {
      plVar1 = plStack_f8 + 1;
      do {
        lVar17 = *plVar1;
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = lVar17 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_f8);
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    ppuStack_e0 = (undefined **)0x0;
    ppuStack_d8 = (undefined **)0x0;
    func_0x00010a099dfc(puStack_120,&ppuStack_e0);
    ppuVar7 = ppuStack_d8;
    if (ppuStack_d8 != (undefined **)0x0) {
      ppuVar2 = ppuStack_d8 + 1;
      do {
        puVar18 = *ppuVar2;
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar12) {
          *ppuVar2 = puVar18 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (puVar18 == (undefined *)0x0) {
        (**(code **)(*ppuStack_d8 + 0x10))(ppuStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar7);
      }
    }
    plVar1 = plStack_118;
    puVar13 = puStack_120;
    lVar17 = *param_2;
    puStack_120 = (undefined8 *)0x0;
    plStack_118 = (long *)0x0;
    puVar21 = *(undefined8 **)(lVar17 + 0x80);
    if (puVar21 < *(undefined8 **)(lVar17 + 0x88)) {
      *puVar21 = puVar13;
      puVar21[1] = plVar1;
      puVar21 = puVar21 + 2;
LAB_10a238dac:
      *(undefined8 **)(lVar17 + 0x80) = puVar21;
      goto LAB_10a238db0;
    }
    plVar5 = (long *)(lVar17 + 0x78);
    lVar22 = (long)puVar21 - *plVar5;
    uVar3 = (lVar22 >> 4) + 1;
    if (uVar3 >> 0x3c == 0) {
      uVar19 = (long)*(undefined8 **)(lVar17 + 0x88) - *plVar5;
      uVar20 = (long)uVar19 >> 3;
      if (uVar20 <= uVar3) {
        uVar20 = uVar3;
      }
      if (0x7fffffffffffffef < uVar19) {
        uVar20 = 0xfffffffffffffff;
      }
      plStack_c0 = plVar5;
      if (uVar20 >> 0x3c != 0) {
        func_0x000109ffded8();
        goto LAB_10a239204;
      }
      lVar15 = uVar20 << 4;
      __Znwm();
      puVar6 = (undefined8 *)(lVar15 + lVar22);
      *puVar6 = puVar13;
      puVar6[1] = plVar1;
      puVar21 = puVar6 + 2;
      ppuVar7 = *(undefined ***)(lVar17 + 0x78);
      lVar22 = (long)puVar6 - (*(long *)(lVar17 + 0x80) - (long)ppuVar7);
      _memcpy(lVar22,ppuVar7);
      *(long *)(lVar17 + 0x78) = lVar22;
      *(undefined8 **)(lVar17 + 0x80) = puVar21;
      plStack_c8 = *(long **)(lVar17 + 0x88);
      *(ulong *)(lVar17 + 0x88) = lVar15 + uVar20 * 0x10;
      ppuStack_e0 = ppuVar7;
      ppuStack_d8 = ppuVar7;
      ppuStack_d0 = ppuVar7;
      func_0x00010785b3e0(&ppuStack_e0);
      goto LAB_10a238dac;
    }
  }
  FUN_10a2392ac();
LAB_10a239204:
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x10a239208);
  (*pcVar14)();
}



/* Entry: 10a2392ac; end: 10a2392bf;  */

void FUN_10a2392ac(void)

{
  FUN_109ffde64(&DAT_10f62a4d8);
  return;
}



/* Entry: 10a2392c0; end: 10a23931b;  */

void FUN_10a2392c0(void)

{
  return;
}



/* Entry: 10a23931c; end: 10a239363;  */

/* WARNING: Possible PIC construction at 0x00010a239344: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a239348) */

long FUN_10a23931c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x00010a3132f4(*(undefined8 *)(param_1 + 0x30));
  }
  plVar5 = *(long **)(param_1 + 0x38);
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
  return param_1 + 0x30;
}



/* Entry: 10a239364; end: 10a2393ab;  */

/* WARNING: Possible PIC construction at 0x00010a23938c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a239390) */

long FUN_10a239364(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x00010a3132f4(*(undefined8 *)(param_1 + 0x30));
  }
  plVar5 = *(long **)(param_1 + 0x38);
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
  return param_1 + 0x30;
}



/* Entry: 10a2393ac; end: 10a239433;  */

void FUN_10a2393ac(long *param_1)

{
  *param_1 = (long)&PTR_FUN_110bb49c8;
  if ((char)param_1[0x24] == '\x01') {
    func_0x00010a3132f4(param_1[0x25]);
  }
  func_0x00010a238014(param_1 + 0x25);
  func_0x00010a234f7c(param_1 + 0x21);
  func_0x00010a238014(param_1 + 0x1f);
  *param_1 = (long)(PTR___ZTVNSt3__117__assoc_sub_stateE_110346b28 + 0x10);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0xb);
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  __ZNSt13exception_ptrD1Ev(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__114__shared_countD2Ev_110346530)(param_1);
  return;
}



/* Entry: 10a239434; end: 10a2394bf;  */

void FUN_10a239434(long *param_1)

{
  *param_1 = (long)&PTR_FUN_110bb49c8;
  if ((char)param_1[0x24] == '\x01') {
    func_0x00010a3132f4(param_1[0x25]);
  }
  func_0x00010a238014(param_1 + 0x25);
  func_0x00010a234f7c(param_1 + 0x21);
  func_0x00010a238014(param_1 + 0x1f);
  *param_1 = (long)(PTR___ZTVNSt3__117__assoc_sub_stateE_110346b28 + 0x10);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0xb);
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  __ZNSt13exception_ptrD1Ev(param_1 + 2);
  __ZNSt3__114__shared_countD2Ev(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2394c0; end: 10a2395d3;  */

void FUN_10a2394c0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_88 [48];
  long *plStack_58;
  long *plStack_28;
  
  *(undefined1 *)(param_1 + 0x120) = 0;
  FUN_10a238b80(auStack_88,param_1 + 0xf8);
  FUN_10a238150(param_1,auStack_88);
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  FUN_10a234f44(auStack_88);
  return;
}



/* Entry: 10a2395d4; end: 10a2395e3;  */

void FUN_10a2395d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb4a10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a2395e4; end: 10a239603;  */

void FUN_10a2395e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb4a10;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a239604; end: 10a23960f;  */

long FUN_10a239604(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
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



/* Entry: 10a239610; end: 10a23961f;  */

void FUN_10a239610(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *extraout_x8;
  
  func_0x000105277f8c(param_2);
  lVar1 = 0x30;
  __Znwm();
  FUN_10a239678();
  *extraout_x8 = lVar1 + 0x18;
  extraout_x8[1] = lVar1;
  return;
}



/* Entry: 10a239620; end: 10a239677;  */

void FUN_10a239620(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x30;
  __Znwm();
  FUN_10a239678();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a239678; end: 10a2396c3;  */

undefined8 * FUN_10a239678(undefined8 *param_1,undefined4 *param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110bb55b8;
  FUN_10a19d288(param_1 + 3,*param_2);
  return param_1;
}



/* Entry: 10a2396c4; end: 10a2396d3;  */

void FUN_10a2396c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb55b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a2396d4; end: 10a2396f3;  */

void FUN_10a2396d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb55b8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2396f4; end: 10a239723;  */

void FUN_10a2396f4(long param_1)

{
  long lVar1;
  
  FUN_10a1aef2c(param_1 + 0x28,0);
  lVar1 = *(long *)(param_1 + 0x20);
  *(long *)(param_1 + 0x20) = 0;
  if (lVar1 != 0) {
    func_0x00010a1aef6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a239724; end: 10a239727;  */

void FUN_10a239724(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a239728; end: 10a23988b;  */

undefined8 * FUN_10a239728(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110ba0e50;
  *(undefined2 *)(param_1 + 3) = 0x100;
  puVar1 = param_1;
  func_0x00010a0fda30();
  param_1[4] = puVar1;
  param_1[5] = param_2;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xb] = 0x100000000;
  param_1[0xf] = 0x500000004;
  param_1[0xe] = 0x300000002;
  param_1[0x10] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined1 *)((long)param_1 + 0x8c) = 0;
  *param_1 = &PTR_DAT_110bb4a60;
  param_1[7] = &PTR_FUN_110bb4b50;
  param_1[8] = 0;
  param_1[0x12] = 0x100000001;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)((long)param_1 + 0xb4) = 1;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0x500000004;
  param_1[0x19] = 0x300000002;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  return param_1;
}



/* Entry: 10a23988c; end: 10a23992f;  */

undefined8 FUN_10a23988c(void)

{
  return 0;
}



/* Entry: 10a239930; end: 10a239973;  */

undefined8 * FUN_10a239930(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  param_1[-7] = &PTR_DAT_110bb4a60;
  *param_1 = &PTR_FUN_110bb4b50;
  func_0x00010a09dbbc(param_1 + 0xc);
  *param_1 = &PTR_DAT_110bc4550;
  plVar5 = (long *)param_1[2];
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
  return param_1 + 1;
}



/* Entry: 10a239974; end: 10a239993;  */

void FUN_10a239974(undefined8 *param_1)

{
  param_1[-7] = &PTR_DAT_110bb4a60;
  *param_1 = &PTR_FUN_110bb4b50;
  func_0x00010a09dbbc(param_1 + 0xc);
  *param_1 = &PTR_DAT_110bc4550;
  FUN_10a09d22c(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -7);
  return;
}



/* Entry: 10a239994; end: 10a239c2b;  */

void FUN_10a239994(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x28);
  func_0x00010a2399c4();
                    /* WARNING: Could not recover jumptable at 0x00010a2399c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10a239c2c; end: 10a239c67;  */

void FUN_10a239c2c(long *param_1)

{
  FUN_10a4ec50c(*(undefined8 *)(*param_1 + 0xb8),param_1 + 1);
  (*(code *)param_1[4])(param_1);
  return;
}



/* Entry: 10a239c68; end: 10a23a1cf;  */

void FUN_10a239c68(long param_1)

{
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x10) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a23a1d0; end: 10a23a223;  */

void FUN_10a23a1d0(long param_1)

{
  FUN_10a4d8a24(**(undefined8 **)(*(long *)(**(long **)(param_1 + 8) + 0x1f8) + 0x10),param_1 + 0x10
               );
  (**(code **)(param_1 + 0x28))(param_1);
  return;
}



/* Entry: 10a23a224; end: 10a23a28b;  */

void FUN_10a23a224(long param_1)

{
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x18) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a23a28c; end: 10a23a2f7;  */

void FUN_10a23a28c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_30;
  long lStack_28;
  
  if (param_2 != 0) {
    plVar1 = (long *)(param_2 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_30 = param_1;
  lStack_28 = param_2;
  func_0x00010a4ec948(param_3,&uStack_30);
  if (lStack_28 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10a23a2f8; end: 10a23a327;  */

void FUN_10a23a2f8(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x28);
  FUN_10a23a328();
                    /* WARNING: Could not recover jumptable at 0x00010a23a324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10a23a328; end: 10a23a36f;  */

void FUN_10a23a328(long *param_1)

{
  FUN_10a23a28c(param_1[1],param_1[2],*(undefined8 *)(*param_1 + 0xb8));
  (*(code *)param_1[4])(param_1);
  return;
}



/* Entry: 10a23a370; end: 10a23a42f;  */

void FUN_10a23a370(long param_1)

{
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x10) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a23a430; end: 10a23a43f;  */

void FUN_10a23a430(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb4d48;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a23a440; end: 10a23a45f;  */

void FUN_10a23a440(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb4d48;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a23a460; end: 10a23a487;  */

void FUN_10a23a460(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x000104c4f944(param_1 + 0x38);
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    lVar1 = *(long *)(param_1 + 0x28);
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0xb0;
        FUN_10a23298c();
      } while (lVar1 != lVar3);
      lVar2 = *(long *)(param_1 + 0x20);
    }
    *(long *)(param_1 + 0x28) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a23a488; end: 10a23a48b;  */

void FUN_10a23a488(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


