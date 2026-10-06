/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ad64ac4; end: 10ad64cd3;  */

void FUN_10ad64ac4(char *param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long *plVar10;
  undefined **ppuVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  
  if ((param_1[1] & 1U) == 0) {
    param_1[1] = '\x01';
    if (*param_1 == '\x01') {
      *param_1 = '\0';
      puVar6 = PTR___tlv_bootstrap_11340d750;
      ppuVar11 = &PTR___tlv_bootstrap_11340d750;
      ppuVar8 = ppuVar11;
      (*(code *)PTR___tlv_bootstrap_11340d750)();
      ppuVar9 = &PTR___tlv_bootstrap_11340d738;
      if (((ulong)*ppuVar8 & 1) == 0) {
        ppuVar8 = ppuVar9;
        (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
        __tlv_atexit(0x10a132a8c,ppuVar8,0x100000000);
        (*(code *)puVar6)();
        *(undefined1 *)ppuVar11 = 1;
      }
      (*(code *)PTR___tlv_bootstrap_11340d738)();
      plVar13 = (long *)ppuVar9[2];
      if (plVar13 != (long *)0x0) {
        if (*(long *)(param_1 + 8) != 0) {
          lVar12 = plVar13[1];
          bVar5 = *(byte *)(lVar12 + 0x42) | *(byte *)(lVar12 + 0x43);
          if ((((bVar5 & 1) != 0) || ((*(byte *)(lVar12 + 0x40) & 1) != 0)) ||
             (*(char *)(lVar12 + 0x3f) == '\x01')) {
            uVar15 = cntfrq_el0;
            InstructionSynchronizationBarrier();
            uVar14 = cntvct_el0;
            if (uVar15 != 1000000000) {
              uVar3 = 0;
              if (uVar15 != 0) {
                uVar3 = uVar14 / uVar15;
              }
              uVar4 = 0;
              if (uVar15 != 0) {
                uVar4 = ((uVar14 - uVar3 * uVar15) * 1000000000) / uVar15;
              }
              uVar14 = uVar4 + uVar3 * 1000000000;
            }
            if ((bVar5 & 1) != 0) {
              uVar1 = *(undefined4 *)(param_1 + 4);
              uVar2 = *(undefined2 *)(param_1 + 2);
              plVar10 = plVar13;
              FUN_10a1333cc();
              if (plVar10 != (long *)0x0) {
                *plVar10 = (long)&UNK_10f6a8ecd;
                plVar10[1] = 0;
                plVar10[2] = uVar14;
                *(undefined4 *)(plVar10 + 3) = uVar1;
                *(undefined2 *)((long)plVar10 + 0x1c) = uVar2;
                *(undefined1 *)((long)plVar10 + 0x1e) = 6;
                if ((*(byte *)(plVar13 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x10ad64cd0);
                  (*pcVar7)();
                }
                plVar13[0x18] = plVar13[0x18] + 1;
              }
            }
            if (*(char *)(plVar13[1] + 0x40) == '\x01') {
              uVar15 = *(ulong *)(param_1 + 8);
              if (uVar15 <= uVar14) {
                lVar12 = *plVar13;
                __ZNSt3__15mutex4lockEv(lVar12 + 0x1080);
                FUN_10a15387c((double)(uVar14 - uVar15),lVar12,lVar12 + 0x1080,uVar15,uVar14);
                __ZNSt3__15mutex6unlockEv(lVar12 + 0x1080);
              }
            }
          }
        }
        if (((*(char *)(plVar13[1] + 0x41) == '\x01') && (param_1[0x18] == '\x01')) &&
           (plVar13 = (long *)plVar13[0xb], plVar13 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010ad64c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar13 + 0x30))(plVar13,*(undefined8 *)(param_1 + 0x10));
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 10ad64cd4; end: 10ad64ee3;  */

void FUN_10ad64cd4(char *param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long *plVar10;
  undefined **ppuVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  
  if ((param_1[1] & 1U) == 0) {
    param_1[1] = '\x01';
    if (*param_1 == '\x01') {
      *param_1 = '\0';
      puVar6 = PTR___tlv_bootstrap_11340d750;
      ppuVar11 = &PTR___tlv_bootstrap_11340d750;
      ppuVar8 = ppuVar11;
      (*(code *)PTR___tlv_bootstrap_11340d750)();
      ppuVar9 = &PTR___tlv_bootstrap_11340d738;
      if (((ulong)*ppuVar8 & 1) == 0) {
        ppuVar8 = ppuVar9;
        (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
        __tlv_atexit(0x10a132a8c,ppuVar8,0x100000000);
        (*(code *)puVar6)();
        *(undefined1 *)ppuVar11 = 1;
      }
      (*(code *)PTR___tlv_bootstrap_11340d738)();
      plVar13 = (long *)ppuVar9[2];
      if (plVar13 != (long *)0x0) {
        if (*(long *)(param_1 + 8) != 0) {
          lVar12 = plVar13[1];
          bVar5 = *(byte *)(lVar12 + 0x42) | *(byte *)(lVar12 + 0x43);
          if ((((bVar5 & 1) != 0) || ((*(byte *)(lVar12 + 0x40) & 1) != 0)) ||
             (*(char *)(lVar12 + 0x3f) == '\x01')) {
            uVar15 = cntfrq_el0;
            InstructionSynchronizationBarrier();
            uVar14 = cntvct_el0;
            if (uVar15 != 1000000000) {
              uVar3 = 0;
              if (uVar15 != 0) {
                uVar3 = uVar14 / uVar15;
              }
              uVar4 = 0;
              if (uVar15 != 0) {
                uVar4 = ((uVar14 - uVar3 * uVar15) * 1000000000) / uVar15;
              }
              uVar14 = uVar4 + uVar3 * 1000000000;
            }
            if ((bVar5 & 1) != 0) {
              uVar1 = *(undefined4 *)(param_1 + 4);
              uVar2 = *(undefined2 *)(param_1 + 2);
              plVar10 = plVar13;
              FUN_10a1333cc();
              if (plVar10 != (long *)0x0) {
                *plVar10 = (long)&UNK_10f6a8ee5;
                plVar10[1] = 0;
                plVar10[2] = uVar14;
                *(undefined4 *)(plVar10 + 3) = uVar1;
                *(undefined2 *)((long)plVar10 + 0x1c) = uVar2;
                *(undefined1 *)((long)plVar10 + 0x1e) = 6;
                if ((*(byte *)(plVar13 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x10ad64ee0);
                  (*pcVar7)();
                }
                plVar13[0x18] = plVar13[0x18] + 1;
              }
            }
            if (*(char *)(plVar13[1] + 0x40) == '\x01') {
              uVar15 = *(ulong *)(param_1 + 8);
              if (uVar15 <= uVar14) {
                lVar12 = *plVar13;
                __ZNSt3__15mutex4lockEv(lVar12 + 0x1100);
                FUN_10a15387c((double)(uVar14 - uVar15),lVar12,lVar12 + 0x1100,uVar15,uVar14);
                __ZNSt3__15mutex6unlockEv(lVar12 + 0x1100);
              }
            }
          }
        }
        if (((*(char *)(plVar13[1] + 0x41) == '\x01') && (param_1[0x18] == '\x01')) &&
           (plVar13 = (long *)plVar13[0xb], plVar13 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010ad64e88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar13 + 0x30))(plVar13,*(undefined8 *)(param_1 + 0x10));
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 10ad64ee4; end: 10ad650f3;  */

void FUN_10ad64ee4(char *param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long *plVar10;
  undefined **ppuVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  
  if ((param_1[1] & 1U) == 0) {
    param_1[1] = '\x01';
    if (*param_1 == '\x01') {
      *param_1 = '\0';
      puVar6 = PTR___tlv_bootstrap_11340d750;
      ppuVar11 = &PTR___tlv_bootstrap_11340d750;
      ppuVar8 = ppuVar11;
      (*(code *)PTR___tlv_bootstrap_11340d750)();
      ppuVar9 = &PTR___tlv_bootstrap_11340d738;
      if (((ulong)*ppuVar8 & 1) == 0) {
        ppuVar8 = ppuVar9;
        (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
        __tlv_atexit(0x10a132a8c,ppuVar8,0x100000000);
        (*(code *)puVar6)();
        *(undefined1 *)ppuVar11 = 1;
      }
      (*(code *)PTR___tlv_bootstrap_11340d738)();
      plVar13 = (long *)ppuVar9[2];
      if (plVar13 != (long *)0x0) {
        if (*(long *)(param_1 + 8) != 0) {
          lVar12 = plVar13[1];
          bVar5 = *(byte *)(lVar12 + 0x42) | *(byte *)(lVar12 + 0x43);
          if ((((bVar5 & 1) != 0) || ((*(byte *)(lVar12 + 0x40) & 1) != 0)) ||
             (*(char *)(lVar12 + 0x3f) == '\x01')) {
            uVar15 = cntfrq_el0;
            InstructionSynchronizationBarrier();
            uVar14 = cntvct_el0;
            if (uVar15 != 1000000000) {
              uVar3 = 0;
              if (uVar15 != 0) {
                uVar3 = uVar14 / uVar15;
              }
              uVar4 = 0;
              if (uVar15 != 0) {
                uVar4 = ((uVar14 - uVar3 * uVar15) * 1000000000) / uVar15;
              }
              uVar14 = uVar4 + uVar3 * 1000000000;
            }
            if ((bVar5 & 1) != 0) {
              uVar1 = *(undefined4 *)(param_1 + 4);
              uVar2 = *(undefined2 *)(param_1 + 2);
              plVar10 = plVar13;
              FUN_10a1333cc();
              if (plVar10 != (long *)0x0) {
                *plVar10 = (long)&UNK_10f6a8efc;
                plVar10[1] = 0;
                plVar10[2] = uVar14;
                *(undefined4 *)(plVar10 + 3) = uVar1;
                *(undefined2 *)((long)plVar10 + 0x1c) = uVar2;
                *(undefined1 *)((long)plVar10 + 0x1e) = 6;
                if ((*(byte *)(plVar13 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x10ad650f0);
                  (*pcVar7)();
                }
                plVar13[0x18] = plVar13[0x18] + 1;
              }
            }
            if (*(char *)(plVar13[1] + 0x40) == '\x01') {
              uVar15 = *(ulong *)(param_1 + 8);
              if (uVar15 <= uVar14) {
                lVar12 = *plVar13;
                __ZNSt3__15mutex4lockEv(lVar12 + 0x1180);
                FUN_10a15387c((double)(uVar14 - uVar15),lVar12,lVar12 + 0x1180,uVar15,uVar14);
                __ZNSt3__15mutex6unlockEv(lVar12 + 0x1180);
              }
            }
          }
        }
        if (((*(char *)(plVar13[1] + 0x41) == '\x01') && (param_1[0x18] == '\x01')) &&
           (plVar13 = (long *)plVar13[0xb], plVar13 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010ad65098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar13 + 0x30))(plVar13,*(undefined8 *)(param_1 + 0x10));
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 10ad650f4; end: 10ad651ab;  */

undefined ** FUN_10ad650f4(undefined **param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined2 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  code *pcVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  int iVar15;
  long lVar16;
  long *plVar17;
  undefined *puVar18;
  undefined8 uStack_48;
  
  puVar18 = PTR___tlv_bootstrap_11340d750;
  ppuVar11 = &PTR___tlv_bootstrap_11340d750;
  ppuVar9 = ppuVar11;
  (*(code *)PTR___tlv_bootstrap_11340d750)();
  ppuVar10 = &PTR___tlv_bootstrap_11340d738;
  if (((ulong)*ppuVar9 & 1) == 0) {
    ppuVar9 = ppuVar10;
    (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
    __tlv_atexit(0x10a132a8c,ppuVar9,0x100000000);
    (*(code *)puVar18)();
    *(undefined1 *)ppuVar11 = 1;
  }
  (*(code *)PTR___tlv_bootstrap_11340d738)();
  puVar14 = (undefined8 *)ppuVar10[2];
  if (puVar14 != (undefined8 *)0x0) {
    cVar2 = *(char *)(puVar14[1] + 0x1e);
    *(char *)param_1 = cVar2;
    *(char *)((long)param_1 + 1) = '\0';
    ((char *)((long)param_1 + 2))[0] = '\x0e';
    ((char *)((long)param_1 + 2))[1] = '\0';
    ppuVar11 = &PTR___tlv_bootstrap_11340dd08;
    (*(code *)PTR___tlv_bootstrap_11340dd08)();
    iVar15 = *(int *)ppuVar11;
    if (*(int *)ppuVar11 == 0) {
      uStack_48 = 0;
      _pthread_threadid_np(0,&uStack_48);
      *(int *)ppuVar11 = (int)uStack_48;
      iVar15 = (int)uStack_48;
    }
    param_1[1] = (undefined *)0x0;
    *(int *)((long)param_1 + 4) = iVar15;
    param_1[2] = (undefined *)0x0;
    *(char *)(param_1 + 3) = '\0';
    if ((cVar2 != '\0') && (puVar14 != (undefined8 *)0x0)) {
      lVar16 = puVar14[1];
      bVar7 = *(byte *)(lVar16 + 0x42) | *(byte *)(lVar16 + 0x43);
      if (((bVar7 & 1) != 0) ||
         (((*(byte *)(lVar16 + 0x40) & 1) != 0 || (*(char *)(lVar16 + 0x3f) == '\x01')))) {
        uVar6 = cntfrq_el0;
        InstructionSynchronizationBarrier();
        puVar18 = (undefined *)cntvct_el0;
        if (uVar6 != 1000000000) {
          uVar4 = 0;
          if (uVar6 != 0) {
            uVar4 = (ulong)puVar18 / uVar6;
          }
          uVar5 = 0;
          if (uVar6 != 0) {
            uVar5 = (((long)puVar18 - uVar4 * uVar6) * 1000000000) / uVar6;
          }
          puVar18 = (undefined *)(uVar5 + uVar4 * 1000000000);
        }
        param_1[1] = puVar18;
        if ((bVar7 & 1) != 0) {
          uVar1 = *(undefined4 *)((long)param_1 + 4);
          uVar3 = *(undefined2 *)((long)param_1 + 2);
          puVar12 = puVar14;
          FUN_10a1333cc();
          if (puVar12 != (undefined8 *)0x0) {
            *puVar12 = &UNK_10f6a8f19;
            puVar12[1] = 0;
            puVar12[2] = puVar18;
            *(undefined4 *)(puVar12 + 3) = uVar1;
            *(undefined2 *)((long)puVar12 + 0x1c) = uVar3;
            *(undefined1 *)((long)puVar12 + 0x1e) = 3;
            if ((*(byte *)(puVar14 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10ad6533c);
              (*pcVar8)();
            }
            puVar14[0x18] = puVar14[0x18] + 1;
          }
        }
      }
      if (*(char *)(puVar14[1] + 0x41) == '\x01') {
        plVar17 = (long *)puVar14[0xb];
        if (plVar17 != (long *)0x0) {
          plVar13 = plVar17;
          (**(code **)(*plVar17 + 0x28))(plVar17,&UNK_10f6a8f19);
          param_1[2] = (undefined *)plVar13;
        }
        *(bool *)(param_1 + 3) = plVar17 != (long *)0x0;
      }
    }
    return param_1;
  }
  param_1[1] = (undefined *)0x0;
  *param_1 = (undefined *)0x0;
  param_1[3] = (undefined *)0x0;
  param_1[2] = (undefined *)0x0;
  return ppuVar10;
}



/* Entry: 10ad651ac; end: 10ad6533b;  */

undefined1 * FUN_10ad651ac(undefined1 *param_1,int param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined2 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  code *pcVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uStack_48;
  
  *param_1 = (char)param_2;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0xe;
  ppuVar8 = &PTR___tlv_bootstrap_11340dd08;
  (*(code *)PTR___tlv_bootstrap_11340dd08)();
  iVar11 = *(int *)ppuVar8;
  if (*(int *)ppuVar8 == 0) {
    uStack_48 = 0;
    _pthread_threadid_np(0,&uStack_48);
    *(int *)ppuVar8 = (int)uStack_48;
    iVar11 = (int)uStack_48;
  }
  *(ulong *)(param_1 + 8) = 0;
  *(int *)(param_1 + 4) = iVar11;
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x18] = 0;
  if ((param_2 != 0) && (param_3 != (undefined8 *)0x0)) {
    lVar12 = param_3[1];
    bVar6 = *(byte *)(lVar12 + 0x42) | *(byte *)(lVar12 + 0x43);
    if (((bVar6 & 1) != 0) ||
       (((*(byte *)(lVar12 + 0x40) & 1) != 0 || (*(char *)(lVar12 + 0x3f) == '\x01')))) {
      uVar5 = cntfrq_el0;
      InstructionSynchronizationBarrier();
      uVar14 = cntvct_el0;
      if (uVar5 != 1000000000) {
        uVar3 = 0;
        if (uVar5 != 0) {
          uVar3 = uVar14 / uVar5;
        }
        uVar4 = 0;
        if (uVar5 != 0) {
          uVar4 = ((uVar14 - uVar3 * uVar5) * 1000000000) / uVar5;
        }
        uVar14 = uVar4 + uVar3 * 1000000000;
      }
      *(ulong *)(param_1 + 8) = uVar14;
      if ((bVar6 & 1) != 0) {
        uVar1 = *(undefined4 *)(param_1 + 4);
        uVar2 = *(undefined2 *)(param_1 + 2);
        puVar9 = param_3;
        FUN_10a1333cc();
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = &UNK_10f6a8f19;
          puVar9[1] = 0;
          puVar9[2] = uVar14;
          *(undefined4 *)(puVar9 + 3) = uVar1;
          *(undefined2 *)((long)puVar9 + 0x1c) = uVar2;
          *(undefined1 *)((long)puVar9 + 0x1e) = 3;
          if ((*(byte *)(param_3 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10ad6533c);
            (*pcVar7)();
          }
          param_3[0x18] = param_3[0x18] + 1;
        }
      }
    }
    if (*(char *)(param_3[1] + 0x41) == '\x01') {
      plVar13 = (long *)param_3[0xb];
      if (plVar13 != (long *)0x0) {
        plVar10 = plVar13;
        (**(code **)(*plVar13 + 0x28))(plVar13,&UNK_10f6a8f19);
        *(long **)(param_1 + 0x10) = plVar10;
      }
      param_1[0x18] = plVar13 != (long *)0x0;
    }
  }
  return param_1;
}



/* Entry: 10ad6533c; end: 10ad6554b;  */

void FUN_10ad6533c(char *param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long *plVar10;
  undefined **ppuVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  
  if ((param_1[1] & 1U) == 0) {
    param_1[1] = '\x01';
    if (*param_1 == '\x01') {
      *param_1 = '\0';
      puVar6 = PTR___tlv_bootstrap_11340d750;
      ppuVar11 = &PTR___tlv_bootstrap_11340d750;
      ppuVar8 = ppuVar11;
      (*(code *)PTR___tlv_bootstrap_11340d750)();
      ppuVar9 = &PTR___tlv_bootstrap_11340d738;
      if (((ulong)*ppuVar8 & 1) == 0) {
        ppuVar8 = ppuVar9;
        (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
        __tlv_atexit(0x10a132a8c,ppuVar8,0x100000000);
        (*(code *)puVar6)();
        *(undefined1 *)ppuVar11 = 1;
      }
      (*(code *)PTR___tlv_bootstrap_11340d738)();
      plVar13 = (long *)ppuVar9[2];
      if (plVar13 != (long *)0x0) {
        if (*(long *)(param_1 + 8) != 0) {
          lVar12 = plVar13[1];
          bVar5 = *(byte *)(lVar12 + 0x42) | *(byte *)(lVar12 + 0x43);
          if ((((bVar5 & 1) != 0) || ((*(byte *)(lVar12 + 0x40) & 1) != 0)) ||
             (*(char *)(lVar12 + 0x3f) == '\x01')) {
            uVar15 = cntfrq_el0;
            InstructionSynchronizationBarrier();
            uVar14 = cntvct_el0;
            if (uVar15 != 1000000000) {
              uVar3 = 0;
              if (uVar15 != 0) {
                uVar3 = uVar14 / uVar15;
              }
              uVar4 = 0;
              if (uVar15 != 0) {
                uVar4 = ((uVar14 - uVar3 * uVar15) * 1000000000) / uVar15;
              }
              uVar14 = uVar4 + uVar3 * 1000000000;
            }
            if ((bVar5 & 1) != 0) {
              uVar1 = *(undefined4 *)(param_1 + 4);
              uVar2 = *(undefined2 *)(param_1 + 2);
              plVar10 = plVar13;
              FUN_10a1333cc();
              if (plVar10 != (long *)0x0) {
                *plVar10 = (long)&UNK_10f6a8f19;
                plVar10[1] = 0;
                plVar10[2] = uVar14;
                *(undefined4 *)(plVar10 + 3) = uVar1;
                *(undefined2 *)((long)plVar10 + 0x1c) = uVar2;
                *(undefined1 *)((long)plVar10 + 0x1e) = 6;
                if ((*(byte *)(plVar13 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x10ad65548);
                  (*pcVar7)();
                }
                plVar13[0x18] = plVar13[0x18] + 1;
              }
            }
            if (*(char *)(plVar13[1] + 0x40) == '\x01') {
              uVar15 = *(ulong *)(param_1 + 8);
              if (uVar15 <= uVar14) {
                lVar12 = *plVar13;
                __ZNSt3__15mutex4lockEv(lVar12 + 0x1200);
                FUN_10a15387c((double)(uVar14 - uVar15),lVar12,lVar12 + 0x1200,uVar15,uVar14);
                __ZNSt3__15mutex6unlockEv(lVar12 + 0x1200);
              }
            }
          }
        }
        if (((*(char *)(plVar13[1] + 0x41) == '\x01') && (param_1[0x18] == '\x01')) &&
           (plVar13 = (long *)plVar13[0xb], plVar13 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010ad654f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar13 + 0x30))(plVar13,*(undefined8 *)(param_1 + 0x10));
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 10ad6554c; end: 10ad6575b;  */

void FUN_10ad6554c(char *param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long *plVar10;
  undefined **ppuVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  
  if ((param_1[1] & 1U) == 0) {
    param_1[1] = '\x01';
    if (*param_1 == '\x01') {
      *param_1 = '\0';
      puVar6 = PTR___tlv_bootstrap_11340d750;
      ppuVar11 = &PTR___tlv_bootstrap_11340d750;
      ppuVar8 = ppuVar11;
      (*(code *)PTR___tlv_bootstrap_11340d750)();
      ppuVar9 = &PTR___tlv_bootstrap_11340d738;
      if (((ulong)*ppuVar8 & 1) == 0) {
        ppuVar8 = ppuVar9;
        (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
        __tlv_atexit(0x10a132a8c,ppuVar8,0x100000000);
        (*(code *)puVar6)();
        *(undefined1 *)ppuVar11 = 1;
      }
      (*(code *)PTR___tlv_bootstrap_11340d738)();
      plVar13 = (long *)ppuVar9[2];
      if (plVar13 != (long *)0x0) {
        if (*(long *)(param_1 + 8) != 0) {
          lVar12 = plVar13[1];
          bVar5 = *(byte *)(lVar12 + 0x42) | *(byte *)(lVar12 + 0x43);
          if ((((bVar5 & 1) != 0) || ((*(byte *)(lVar12 + 0x40) & 1) != 0)) ||
             (*(char *)(lVar12 + 0x3f) == '\x01')) {
            uVar15 = cntfrq_el0;
            InstructionSynchronizationBarrier();
            uVar14 = cntvct_el0;
            if (uVar15 != 1000000000) {
              uVar3 = 0;
              if (uVar15 != 0) {
                uVar3 = uVar14 / uVar15;
              }
              uVar4 = 0;
              if (uVar15 != 0) {
                uVar4 = ((uVar14 - uVar3 * uVar15) * 1000000000) / uVar15;
              }
              uVar14 = uVar4 + uVar3 * 1000000000;
            }
            if ((bVar5 & 1) != 0) {
              uVar1 = *(undefined4 *)(param_1 + 4);
              uVar2 = *(undefined2 *)(param_1 + 2);
              plVar10 = plVar13;
              FUN_10a1333cc();
              if (plVar10 != (long *)0x0) {
                *plVar10 = (long)&UNK_10f6a8e93;
                plVar10[1] = 0;
                plVar10[2] = uVar14;
                *(undefined4 *)(plVar10 + 3) = uVar1;
                *(undefined2 *)((long)plVar10 + 0x1c) = uVar2;
                *(undefined1 *)((long)plVar10 + 0x1e) = 6;
                if ((*(byte *)(plVar13 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x10ad65758);
                  (*pcVar7)();
                }
                plVar13[0x18] = plVar13[0x18] + 1;
              }
            }
            if (*(char *)(plVar13[1] + 0x40) == '\x01') {
              uVar15 = *(ulong *)(param_1 + 8);
              if (uVar15 <= uVar14) {
                lVar12 = *plVar13;
                __ZNSt3__15mutex4lockEv(lVar12 + 0x1280);
                FUN_10a15387c((double)(uVar14 - uVar15),lVar12,lVar12 + 0x1280,uVar15,uVar14);
                __ZNSt3__15mutex6unlockEv(lVar12 + 0x1280);
              }
            }
          }
        }
        if (((*(char *)(plVar13[1] + 0x41) == '\x01') && (param_1[0x18] == '\x01')) &&
           (plVar13 = (long *)plVar13[0xb], plVar13 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010ad65700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar13 + 0x30))(plVar13,*(undefined8 *)(param_1 + 0x10));
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 10ad6575c; end: 10ad6576b;  */

void FUN_10ad6575c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c70fc8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ad6576c; end: 10ad6578b;  */

void FUN_10ad6576c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c70fc8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad6578c; end: 10ad657b3;  */

long * FUN_10ad6578c(long param_1)

{
  long *plVar1;
  long lVar2;
  
  FUN_10ad657b8(param_1 + 0xe8);
  plVar1 = (long *)(param_1 + 0xc0);
  func_0x00010ad65838(plVar1,*(undefined8 *)(param_1 + 0xd0));
  lVar2 = *plVar1;
  *plVar1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 10ad657b4; end: 10ad657b7;  */

void FUN_10ad657b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad657b8; end: 10ad65b47;  */

long * FUN_10ad657b8(long *param_1)

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



/* Entry: 10ad65b48; end: 10ad65c9b;  */

/* WARNING: Removing unreachable block (ram,0x00010a3a7d48) */
/* WARNING: Removing unreachable block (ram,0x00010a3a7d58) */
/* WARNING: Removing unreachable block (ram,0x00010a3a7d64) */

void FUN_10ad65b48(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long *plVar11;
  undefined *puVar12;
  ulong *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long lStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar12 = PTR___tlv_bootstrap_11340d750;
  cVar2 = *(char *)((long)param_1 + 0x17);
  plVar11 = (long *)*param_1;
  if (-1 < (long)cVar2) {
    plVar11 = param_1;
  }
  lVar17 = param_1[1];
  if (-1 < cVar2) {
    lVar17 = (long)cVar2;
  }
  ppuVar10 = &PTR___tlv_bootstrap_11340d750;
  ppuVar8 = ppuVar10;
  (*(code *)PTR___tlv_bootstrap_11340d750)();
  ppuVar9 = &PTR___tlv_bootstrap_11340d738;
  if (((ulong)*ppuVar8 & 1) == 0) {
    ppuVar8 = ppuVar9;
    (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
    __tlv_atexit(0x10a132a8c,ppuVar8,0x100000000);
    (*(code *)puVar12)();
    *(undefined1 *)ppuVar10 = 1;
  }
  (*(code *)PTR___tlv_bootstrap_11340d738)();
  puVar20 = (undefined8 *)ppuVar9[2];
  if (((puVar20 == (undefined8 *)0x0) || (lVar14 = puVar20[1], *(char *)(lVar14 + 0x14) != '\x01'))
     || (((*(byte *)(lVar14 + 0x42) | *(byte *)(lVar14 + 0x43)) & 1) == 0)) {
    return;
  }
  uVar15 = cntfrq_el0;
  InstructionSynchronizationBarrier();
  uVar21 = cntvct_el0;
  if (uVar15 != 1000000000) {
    uVar16 = 0;
    if (uVar15 != 0) {
      uVar16 = uVar21 / uVar15;
    }
    uVar4 = 0;
    if (uVar15 != 0) {
      uVar4 = ((uVar21 - uVar16 * uVar15) * 1000000000) / uVar15;
    }
    uVar21 = uVar4 + uVar16 * 1000000000;
  }
  FUN_10a192960(puVar20,0x90c71009,&DAT_10f6a8f75);
  puVar12 = (undefined *)0x4;
  puVar18 = (undefined8 *)0x4;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar20;
  FUN_10a1333cc();
  puVar7 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    uStack_7c = 4;
    uVar19 = puVar20[2];
    puVar18 = &uStack_78;
    puVar12 = (undefined *)0x1;
    uStack_70 = uVar19;
    FUN_10a3a7e2c();
    *puVar18 = 0;
    puVar18[1] = 0;
    puVar18[2] = 0;
    puVar18[4] = uVar19;
    *(undefined1 *)(puVar18 + 5) = 0;
    puVar18[6] = 0;
    puVar18[7] = 0;
    puVar18[8] = 0;
    puVar18[10] = uVar19;
    puVar18[0xc] = 0;
    puVar18[0xb] = 0;
    puVar18[0xe] = 0;
    puVar18[0xd] = 0;
    puVar18[0xf] = 0;
    puVar18[0x11] = uVar19;
    puVar18[0x13] = 0;
    puVar18[0x12] = 0;
    puVar18[0x15] = 0;
    puVar18[0x14] = 0;
    puVar18[0x17] = uVar19;
    puVar18[0x18] = 0;
    puVar7 = puVar18;
    if (plVar11 != (long *)0x0) {
      FUN_10a3a7f4c(puVar18,plVar11,lVar17);
      puVar12 = (undefined *)plVar11;
    }
    *puVar6 = 0;
    puVar6[1] = puVar18;
    puVar6[2] = uVar21;
    *(undefined4 *)(puVar6 + 3) = 0x90c71009;
    *(short *)((long)puVar6 + 0x1c) = (short)uStack_7c;
    *(undefined2 *)((long)puVar6 + 0x1e) = 0x10;
    if ((*(byte *)(puVar20 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a3a7de4);
      (*pcVar5)();
    }
    puVar20[0x18] = puVar20[0x18] + 1;
  }
  while( true ) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
    if ((int)puVar12 == 0) break;
    ___cxa_begin_catch();
    ___cxa_end_catch();
  }
  __Unwind_Resume();
  pcStack_88 = FUN_10a3a7e2c;
  puVar13 = (ulong *)puVar7[1];
  lVar17 = (long)puVar12 * 200;
  uVar15 = puVar13[1] + lVar17;
  puStack_a0 = puVar18;
  puStack_98 = puVar20;
  puStack_90 = &stack0xfffffffffffffff0;
  if (uVar15 <= *puVar13) {
    puVar1 = puVar13 + 1;
    uVar21 = puVar13[1];
    do {
      uVar16 = *puVar1;
      if (uVar16 == uVar21) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar15;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') goto LAB_10a3a7ed0;
      }
      else {
        ClearExclusiveLocal();
      }
      uVar15 = uVar16 + lVar17;
      uVar21 = uVar16;
    } while (uVar15 <= *puVar13);
  }
  lStack_a8 = lVar17;
  func_0x0001098c692c(&lStack_a8);
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  puVar12 = PTR___ZTISt9bad_alloc_110346a68;
  ___cxa_throw();
LAB_10a3a7ed0:
  if (puVar12 < (undefined *)0x147ae147ae147af) {
    __Znwm(lVar17);
    return;
  }
  func_0x000109ffded8();
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a3a7f38);
  (*pcVar5)();
}



/* Entry: 10ad65c9c; end: 10ad65e3b;  */

void FUN_10ad65c9c(byte *param_1,ulong param_2)

{
  byte *pbVar1;
  long lVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  ulong uVar10;
  long lVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong auStack_78 [2];
  byte *pbStack_68;
  long lStack_60;
  ulong uStack_58;
  
  puVar8 = PTR___tlv_bootstrap_11340d750;
  uVar13 = 0xcbf29ce484222325;
  bVar3 = param_1[0x17];
  pbVar1 = *(byte **)param_1;
  if (-1 < (long)(char)bVar3) {
    pbVar1 = param_1;
  }
  lVar2 = *(long *)(param_1 + 8);
  if (-1 < (char)bVar3) {
    lVar2 = (long)(char)bVar3;
  }
  pbVar12 = pbVar1;
  lVar11 = lVar2;
  if (pbVar1 != (byte *)0x0 && lVar2 != 0) {
    do {
      uVar13 = (uVar13 ^ *pbVar12) * 0x100000001b3;
      lVar11 = lVar11 + -1;
      pbVar12 = pbVar12 + 1;
    } while (lVar11 != 0);
  }
  ppuVar9 = &PTR___tlv_bootstrap_11340d750;
  ppuVar6 = ppuVar9;
  (*(code *)PTR___tlv_bootstrap_11340d750)();
  ppuVar7 = &PTR___tlv_bootstrap_11340d738;
  if (((ulong)*ppuVar6 & 1) == 0) {
    ppuVar6 = ppuVar7;
    (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
    __tlv_atexit(0x10a132a8c,ppuVar6,0x100000000);
    (*(code *)puVar8)();
    *(undefined1 *)ppuVar9 = 1;
  }
  (*(code *)PTR___tlv_bootstrap_11340d738)();
  puVar8 = ppuVar7[2];
  if (puVar8 != (undefined *)0x0) {
    auStack_78[0] = param_2 ^ uVar13 ^ 0xc4d3e2799d70f831;
    lVar11 = *(long *)(puVar8 + 8);
    auStack_78[1] = 0x984fcbc77a38815;
    if ((*(char *)(lVar11 + 0x14) == '\x01') &&
       (((*(byte *)(lVar11 + 0x42) | *(byte *)(lVar11 + 0x43)) & 1) != 0)) {
      uVar13 = cntfrq_el0;
      InstructionSynchronizationBarrier();
      uVar10 = cntvct_el0;
      if (uVar13 != 1000000000) {
        uVar4 = 0;
        if (uVar13 != 0) {
          uVar4 = uVar10 / uVar13;
        }
        uVar5 = 0;
        if (uVar13 != 0) {
          uVar5 = ((uVar10 - uVar4 * uVar13) * 1000000000) / uVar13;
        }
        uVar10 = uVar5 + uVar4 * 1000000000;
      }
      pbStack_68 = pbVar1;
      lStack_60 = lVar2;
      uStack_58 = param_2;
      FUN_10a3a7c80(puVar8,4,uVar10,pbVar1,lVar2,0,auStack_78);
    }
  }
  return;
}



/* Entry: 10ad65e3c; end: 10ad6607b;  */

void FUN_10ad65e3c(undefined **param_1,undefined **param_2,undefined *param_3,undefined8 param_4)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  code *pcVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  long lVar14;
  undefined8 extraout_x8;
  undefined8 *puVar15;
  undefined **ppuVar16;
  undefined8 *puVar17;
  ulong unaff_x25;
  ulong uVar18;
  undefined *unaff_x26;
  code *pcStack_138;
  undefined8 *puStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined8 *puStack_118;
  undefined *puStack_110;
  undefined **ppuStack_108;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  undefined *puStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  ulong uStack_c8;
  undefined8 *puStack_c0;
  undefined **ppuStack_b8;
  undefined8 *puStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar17 = (undefined8 *)PTR___tlv_bootstrap_11340d750;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  cVar4 = *(char *)((long)param_1 + 0x17);
  ppuVar2 = (undefined **)*param_1;
  if (-1 < (long)cVar4) {
    ppuVar2 = param_1;
  }
  puVar3 = param_1[1];
  if (-1 < cVar4) {
    puVar3 = (undefined *)(long)cVar4;
  }
  ppuVar16 = &PTR___tlv_bootstrap_11340d750;
  ppuVar13 = param_2;
  (*(code *)PTR___tlv_bootstrap_11340d750)();
  ppuVar10 = &PTR___tlv_bootstrap_11340d738;
  if (((ulong)*ppuVar16 & 1) == 0) {
    ppuVar13 = ppuVar10;
    (*(code *)PTR___tlv_bootstrap_11340d738)();
    param_3 = (undefined *)0x100000000;
    __tlv_atexit(0x10a132a8c,ppuVar13,0x100000000);
    ppuVar16 = &PTR___tlv_bootstrap_11340d750;
    (*(code *)puVar17)();
    *(undefined1 *)ppuVar16 = 1;
  }
  (*(code *)PTR___tlv_bootstrap_11340d738)();
  puVar15 = (undefined8 *)ppuVar10[2];
  ppuVar16 = &PTR___tlv_bootstrap_11340d750;
  if (((puVar15 != (undefined8 *)0x0) && (lVar14 = puVar15[1], *(char *)(lVar14 + 0x14) == '\x01'))
     && (ppuVar16 = &PTR___tlv_bootstrap_11340d750,
        ((*(byte *)(lVar14 + 0x42) | *(byte *)(lVar14 + 0x43)) & 1) != 0)) {
    uVar8 = cntfrq_el0;
    InstructionSynchronizationBarrier();
    unaff_x25 = cntvct_el0;
    if (uVar8 != 1000000000) {
      uVar18 = 0;
      if (uVar8 != 0) {
        uVar18 = unaff_x25 / uVar8;
      }
      uVar6 = 0;
      if (uVar8 != 0) {
        uVar6 = ((unaff_x25 - uVar18 * uVar8) * 1000000000) / uVar8;
      }
      unaff_x25 = uVar6 + uVar18 * 1000000000;
    }
    puVar11 = puVar15;
    FUN_10a1333cc();
    ppuVar10 = (undefined **)0x0;
    if (puVar11 != (undefined8 *)0x0) {
      unaff_x26 = (undefined *)puVar15[2];
      ppuVar16 = &puStack_78;
      ppuVar13 = (undefined **)0x1;
      puStack_70 = unaff_x26;
      FUN_10a3a7e2c();
      *ppuVar16 = (undefined *)0x0;
      ppuVar16[1] = (undefined *)0x0;
      ppuVar16[2] = (undefined *)0x0;
      ppuVar16[4] = unaff_x26;
      ppuVar10 = ppuVar16 + 6;
      *ppuVar10 = (undefined *)0x0;
      ppuVar16[7] = (undefined *)0x0;
      ppuVar16[8] = (undefined *)0x0;
      ppuVar16[10] = unaff_x26;
      ppuVar16[0xc] = (undefined *)0x0;
      ppuVar16[0xb] = (undefined *)0x0;
      ppuVar16[0xe] = (undefined *)0x0;
      ppuVar16[0xd] = (undefined *)0x0;
      ppuVar16[0xf] = (undefined *)0x0;
      ppuVar16[0x11] = unaff_x26;
      ppuVar16[0x13] = (undefined *)0x0;
      ppuVar16[0x12] = (undefined *)0x0;
      ppuVar16[0x15] = (undefined *)0x0;
      ppuVar16[0x14] = (undefined *)0x0;
      ppuVar16[0x17] = unaff_x26;
      ppuVar16[0x18] = (undefined *)0x0;
      *(undefined1 *)(ppuVar16 + 5) = 1;
      if (ppuVar2 != (undefined **)0x0) {
        ppuVar13 = ppuVar2;
        param_3 = puVar3;
        FUN_10a3a7f4c(ppuVar10,ppuVar2,puVar3);
      }
      ppuVar16[0xb] = (undefined *)param_2;
      ppuVar16[0xc] = (undefined *)0x984fcbc77a38815;
      *puVar11 = 0;
      puVar11[1] = ppuVar16;
      puVar11[2] = unaff_x25;
      puVar11[3] = 0x11000400000000;
      if ((*(byte *)(puVar15 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10ad66034);
        (*pcVar9)();
      }
      puVar15[0x18] = puVar15[0x18] + 1;
      puVar17 = puVar11;
    }
  }
  while( true ) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
    if ((int)ppuVar13 == 0) break;
    ___cxa_begin_catch();
    FUN_10a1330f0(ppuVar16);
    plVar1 = (long *)(unaff_x26 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + -200;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    ppuVar10 = ppuVar16;
    __ZdlPv();
    ___cxa_end_catch();
  }
  __Unwind_Resume();
  ppuVar12 = (undefined **)PTR___tlv_bootstrap_11340d750;
  puStack_d0 = unaff_x26;
  uStack_c8 = unaff_x25;
  puStack_c0 = puVar17;
  ppuStack_b8 = ppuVar16;
  puStack_b0 = puVar15;
  puStack_a8 = puVar3;
  ppuStack_a0 = ppuVar2;
  ppuStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  pcStack_88 = FUN_10ad6607c;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  cVar4 = *(char *)((long)ppuVar10 + 0x17);
  ppuVar2 = (undefined **)*ppuVar10;
  if (-1 < (long)cVar4) {
    ppuVar2 = ppuVar10;
  }
  puVar3 = ppuVar10[1];
  if (-1 < cVar4) {
    puVar3 = (undefined *)(long)cVar4;
  }
  ppuVar16 = &PTR___tlv_bootstrap_11340d750;
  (*(code *)PTR___tlv_bootstrap_11340d750)();
  ppuVar10 = &PTR___tlv_bootstrap_11340d738;
  if (((ulong)*ppuVar16 & 1) == 0) {
    ppuVar13 = ppuVar10;
    (*(code *)PTR___tlv_bootstrap_11340d738)();
    param_3 = (undefined *)0x100000000;
    __tlv_atexit(0x10a132a8c,ppuVar13,0x100000000);
    ppuVar16 = &PTR___tlv_bootstrap_11340d750;
    (*(code *)ppuVar12)();
    *(undefined1 *)ppuVar16 = 1;
  }
  (*(code *)PTR___tlv_bootstrap_11340d738)();
  puVar15 = (undefined8 *)ppuVar10[2];
  ppuVar16 = &PTR___tlv_bootstrap_11340d750;
  if (((puVar15 != (undefined8 *)0x0) && (lVar14 = puVar15[1], *(char *)(lVar14 + 0x14) == '\x01'))
     && (ppuVar16 = &PTR___tlv_bootstrap_11340d750,
        ((*(byte *)(lVar14 + 0x42) | *(byte *)(lVar14 + 0x43)) & 1) != 0)) {
    uVar8 = cntfrq_el0;
    InstructionSynchronizationBarrier();
    uVar18 = cntvct_el0;
    if (uVar8 != 1000000000) {
      uVar6 = 0;
      if (uVar8 != 0) {
        uVar6 = uVar18 / uVar8;
      }
      uVar7 = 0;
      if (uVar8 != 0) {
        uVar7 = ((uVar18 - uVar6 * uVar8) * 1000000000) / uVar8;
      }
      uVar18 = uVar7 + uVar6 * 1000000000;
    }
    ppuVar16 = (undefined **)0x90c71009;
    param_3 = &DAT_10f6a8f75;
    ppuVar13 = ppuVar16;
    FUN_10a192960(puVar15,0x90c71009,&DAT_10f6a8f75);
    puVar11 = puVar15;
    FUN_10a1333cc();
    ppuVar10 = (undefined **)0x0;
    if (puVar11 != (undefined8 *)0x0) {
      unaff_x26 = (undefined *)puVar15[2];
      ppuVar12 = &puStack_e8;
      ppuVar13 = (undefined **)0x1;
      puStack_e0 = unaff_x26;
      FUN_10a3a7e2c();
      *ppuVar12 = (undefined *)0x0;
      ppuVar12[1] = (undefined *)0x0;
      ppuVar12[2] = (undefined *)0x0;
      ppuVar12[4] = unaff_x26;
      *(undefined1 *)(ppuVar12 + 5) = 0;
      ppuVar12[7] = (undefined *)0x0;
      ppuVar12[8] = (undefined *)0x0;
      ppuVar12[6] = (undefined *)0x0;
      ppuVar12[10] = unaff_x26;
      ppuVar12[0xc] = (undefined *)0x0;
      ppuVar12[0xb] = (undefined *)0x0;
      ppuVar12[0xe] = (undefined *)0x0;
      ppuVar12[0xd] = (undefined *)0x0;
      ppuVar12[0xf] = (undefined *)0x0;
      ppuVar12[0x11] = unaff_x26;
      ppuVar12[0x13] = (undefined *)0x0;
      ppuVar12[0x12] = (undefined *)0x0;
      ppuVar12[0x15] = (undefined *)0x0;
      ppuVar12[0x14] = (undefined *)0x0;
      ppuVar12[0x17] = unaff_x26;
      ppuVar12[0x18] = (undefined *)0x0;
      ppuVar10 = ppuVar12;
      if (ppuVar2 != (undefined **)0x0) {
        ppuVar13 = ppuVar2;
        param_3 = puVar3;
        FUN_10a3a7f4c(ppuVar12,ppuVar2,puVar3);
      }
      *puVar11 = 0;
      puVar11[1] = ppuVar12;
      puVar11[2] = uVar18;
      *(undefined4 *)(puVar11 + 3) = 0x90c71009;
      *(undefined4 *)((long)puVar11 + 0x1c) = 0x120004;
      if ((*(byte *)(puVar15 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10ad66280);
        (*pcVar9)();
      }
      puVar15[0x18] = puVar15[0x18] + 1;
      puVar17 = puVar11;
    }
  }
  while( true ) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
      return;
    }
    ___stack_chk_fail();
    if ((int)ppuVar13 == 0) break;
    ___cxa_begin_catch();
    FUN_10a1330f0(ppuVar12);
    plVar1 = (long *)(unaff_x26 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + -200;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    ppuVar10 = ppuVar12;
    __ZdlPv();
    ___cxa_end_catch();
  }
  __Unwind_Resume();
  pcStack_f8 = FUN_10ad662c8;
  ppuVar13 = ppuVar10;
  puStack_130 = puVar17;
  ppuStack_128 = ppuVar12;
  ppuStack_120 = ppuVar16;
  puStack_118 = puVar15;
  puStack_110 = puVar3;
  ppuStack_108 = ppuVar2;
  ppuStack_100 = &puStack_90;
  (**(code **)(*ppuVar10 + 0x58))();
  if (ppuVar13[0x59] < (undefined *)0x8) {
    ppuVar13[(long)(ppuVar13[0x59] + 0x4e)] = ppuVar13[0x5a];
    ppuVar13[0x59] = ppuVar13[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(ppuVar13 + 0x4b);
  }
  pcStack_138 = FUN_10ad65b48;
  FUN_10a47734c(extraout_x8,ppuVar10,&pcStack_138,param_3,param_4);
  func_0x00010988c170(ppuVar13 + 0x4b);
  return;
}



/* Entry: 10ad6607c; end: 10ad662c7;  */

void FUN_10ad6607c(undefined **param_1,undefined **param_2,undefined *param_3,undefined8 param_4)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  code *pcVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  long lVar14;
  undefined8 extraout_x8;
  undefined8 *puVar15;
  undefined **ppuVar16;
  undefined8 *unaff_x24;
  ulong uVar17;
  undefined *unaff_x26;
  code *pcStack_b8;
  undefined8 *puStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined8 *puStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  ppuVar12 = (undefined **)PTR___tlv_bootstrap_11340d750;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  cVar4 = *(char *)((long)param_1 + 0x17);
  ppuVar2 = (undefined **)*param_1;
  if (-1 < (long)cVar4) {
    ppuVar2 = param_1;
  }
  puVar3 = param_1[1];
  if (-1 < cVar4) {
    puVar3 = (undefined *)(long)cVar4;
  }
  ppuVar16 = &PTR___tlv_bootstrap_11340d750;
  (*(code *)PTR___tlv_bootstrap_11340d750)();
  ppuVar10 = &PTR___tlv_bootstrap_11340d738;
  if (((ulong)*ppuVar16 & 1) == 0) {
    param_2 = ppuVar10;
    (*(code *)PTR___tlv_bootstrap_11340d738)();
    param_3 = (undefined *)0x100000000;
    __tlv_atexit(0x10a132a8c,param_2,0x100000000);
    ppuVar16 = &PTR___tlv_bootstrap_11340d750;
    (*(code *)ppuVar12)();
    *(undefined1 *)ppuVar16 = 1;
  }
  (*(code *)PTR___tlv_bootstrap_11340d738)();
  puVar15 = (undefined8 *)ppuVar10[2];
  ppuVar16 = &PTR___tlv_bootstrap_11340d750;
  if (((puVar15 != (undefined8 *)0x0) && (lVar14 = puVar15[1], *(char *)(lVar14 + 0x14) == '\x01'))
     && (ppuVar16 = &PTR___tlv_bootstrap_11340d750,
        ((*(byte *)(lVar14 + 0x42) | *(byte *)(lVar14 + 0x43)) & 1) != 0)) {
    uVar8 = cntfrq_el0;
    InstructionSynchronizationBarrier();
    uVar17 = cntvct_el0;
    if (uVar8 != 1000000000) {
      uVar6 = 0;
      if (uVar8 != 0) {
        uVar6 = uVar17 / uVar8;
      }
      uVar7 = 0;
      if (uVar8 != 0) {
        uVar7 = ((uVar17 - uVar6 * uVar8) * 1000000000) / uVar8;
      }
      uVar17 = uVar7 + uVar6 * 1000000000;
    }
    ppuVar16 = (undefined **)0x90c71009;
    param_3 = &DAT_10f6a8f75;
    param_2 = ppuVar16;
    FUN_10a192960(puVar15,0x90c71009,&DAT_10f6a8f75);
    puVar11 = puVar15;
    FUN_10a1333cc();
    ppuVar10 = (undefined **)0x0;
    if (puVar11 != (undefined8 *)0x0) {
      unaff_x26 = (undefined *)puVar15[2];
      ppuVar12 = &puStack_68;
      param_2 = (undefined **)0x1;
      puStack_60 = unaff_x26;
      FUN_10a3a7e2c();
      *ppuVar12 = (undefined *)0x0;
      ppuVar12[1] = (undefined *)0x0;
      ppuVar12[2] = (undefined *)0x0;
      ppuVar12[4] = unaff_x26;
      *(undefined1 *)(ppuVar12 + 5) = 0;
      ppuVar12[7] = (undefined *)0x0;
      ppuVar12[8] = (undefined *)0x0;
      ppuVar12[6] = (undefined *)0x0;
      ppuVar12[10] = unaff_x26;
      ppuVar12[0xc] = (undefined *)0x0;
      ppuVar12[0xb] = (undefined *)0x0;
      ppuVar12[0xe] = (undefined *)0x0;
      ppuVar12[0xd] = (undefined *)0x0;
      ppuVar12[0xf] = (undefined *)0x0;
      ppuVar12[0x11] = unaff_x26;
      ppuVar12[0x13] = (undefined *)0x0;
      ppuVar12[0x12] = (undefined *)0x0;
      ppuVar12[0x15] = (undefined *)0x0;
      ppuVar12[0x14] = (undefined *)0x0;
      ppuVar12[0x17] = unaff_x26;
      ppuVar12[0x18] = (undefined *)0x0;
      ppuVar10 = ppuVar12;
      if (ppuVar2 != (undefined **)0x0) {
        param_2 = ppuVar2;
        param_3 = puVar3;
        FUN_10a3a7f4c(ppuVar12,ppuVar2,puVar3);
      }
      *puVar11 = 0;
      puVar11[1] = ppuVar12;
      puVar11[2] = uVar17;
      *(undefined4 *)(puVar11 + 3) = 0x90c71009;
      *(undefined4 *)((long)puVar11 + 0x1c) = 0x120004;
      if ((*(byte *)(puVar15 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10ad66280);
        (*pcVar9)();
      }
      puVar15[0x18] = puVar15[0x18] + 1;
      unaff_x24 = puVar11;
    }
  }
  while( true ) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
    if ((int)param_2 == 0) break;
    ___cxa_begin_catch();
    FUN_10a1330f0(ppuVar12);
    plVar1 = (long *)(unaff_x26 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + -200;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    ppuVar10 = ppuVar12;
    __ZdlPv();
    ___cxa_end_catch();
  }
  __Unwind_Resume();
  pcStack_78 = FUN_10ad662c8;
  ppuVar13 = ppuVar10;
  puStack_b0 = unaff_x24;
  ppuStack_a8 = ppuVar12;
  ppuStack_a0 = ppuVar16;
  puStack_98 = puVar15;
  puStack_90 = puVar3;
  ppuStack_88 = ppuVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  (**(code **)(*ppuVar10 + 0x58))();
  if (ppuVar13[0x59] < (undefined *)0x8) {
    ppuVar13[(long)(ppuVar13[0x59] + 0x4e)] = ppuVar13[0x5a];
    ppuVar13[0x59] = ppuVar13[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(ppuVar13 + 0x4b);
  }
  pcStack_b8 = FUN_10ad65b48;
  FUN_10a47734c(extraout_x8,ppuVar10,&pcStack_b8,param_3,param_4);
  func_0x00010988c170(ppuVar13 + 0x4b);
  return;
}



/* Entry: 10ad662c8; end: 10ad66387;  */

void FUN_10ad662c8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcStack_48;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  pcStack_48 = FUN_10ad65b48;
  FUN_10a47734c(param_1,param_2,&pcStack_48,param_4,param_5);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10ad66388; end: 10ad66533;  */

void FUN_10ad66388(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)param_2[0x59] < 8) {
    param_2[param_2[0x59] + 0x4e] = param_2[0x5a];
    param_2[0x59] = param_2[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(param_2 + 0x4b);
  }
  FUN_10a052e3c(param_5);
  puVar2 = PTR___tlv_bootstrap_11340d750;
  ppuVar8 = &PTR___tlv_bootstrap_11340d750;
  ppuVar5 = ppuVar8;
  (*(code *)PTR___tlv_bootstrap_11340d750)();
  ppuVar6 = &PTR___tlv_bootstrap_11340d738;
  if (((ulong)*ppuVar5 & 1) == 0) {
    ppuVar5 = ppuVar6;
    (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
    __tlv_atexit(0x10a132a8c,ppuVar5,0x100000000);
    (*(code *)puVar2)();
    *(undefined1 *)ppuVar8 = 1;
  }
  (*(code *)PTR___tlv_bootstrap_11340d738)();
  puVar12 = (undefined8 *)ppuVar6[2];
  if (((puVar12 != (undefined8 *)0x0) && (lVar10 = puVar12[1], *(char *)(lVar10 + 0x14) == '\x01'))
     && (((*(byte *)(lVar10 + 0x42) | *(byte *)(lVar10 + 0x43)) & 1) != 0)) {
    uVar9 = cntfrq_el0;
    InstructionSynchronizationBarrier();
    uVar14 = cntvct_el0;
    if (uVar9 != 1000000000) {
      uVar18 = 0;
      if (uVar9 != 0) {
        uVar18 = uVar14 / uVar9;
      }
      uVar11 = 0;
      if (uVar9 != 0) {
        uVar11 = ((uVar14 - uVar18 * uVar9) * 1000000000) / uVar9;
      }
      uVar14 = uVar11 + uVar18 * 1000000000;
    }
    puVar7 = puVar12;
    FUN_10a1333cc();
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = "";
      puVar7[1] = 0;
      puVar7[2] = uVar14;
      *(undefined4 *)(puVar7 + 3) = 0x90c71009;
      *(undefined4 *)((long)puVar7 + 0x1c) = 0x60004;
      if ((*(byte *)(puVar12 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10ad66520);
        (*pcVar3)();
      }
      puVar12[0x18] = puVar12[0x18] + 1;
    }
  }
  *param_1 = 0;
  plVar1 = param_2 + 0x4b;
  lVar10 = param_2[0x59];
  uVar9 = lVar10 - 1;
  param_2[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar1[lVar10 + 2];
    if (param_2[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(param_2[0x57] + -8);
    param_2[0x57] = param_2[0x57] + -8;
    if (param_2[0x5a] == uVar9) {
      return;
    }
  }
  lVar10 = *plVar1;
  lVar16 = param_2[0x4c];
  lVar13 = lVar16 - lVar10;
  uVar14 = lVar13 >> 4;
  if (uVar14 < uVar9) {
    uVar18 = uVar9 - uVar14;
    lVar17 = param_2[0x4d];
    if ((ulong)(lVar17 - lVar16 >> 4) < uVar18) {
      if (uVar9 >> 0x3c == 0) {
        uVar11 = lVar17 - lVar10 >> 3;
        if (uVar11 <= uVar9) {
          uVar11 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar17 - lVar10)) {
          uVar11 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar11 >> 0x3c == 0) {
          lVar4 = uVar11 << 4;
          __Znwm();
          lVar16 = lVar4 + lVar13;
          _bzero(lVar16,uVar18 * 0x10);
          lVar15 = lVar16 + uVar14 * -0x10;
          _memcpy(lVar15,lVar10,lVar13);
          *plVar1 = lVar15;
          param_2[0x4c] = lVar16 + uVar18 * 0x10;
          param_2[0x4d] = lVar4 + uVar11 * 0x10;
          lStack_88 = lVar10;
          lStack_80 = lVar10;
          lStack_78 = lVar10;
          lStack_70 = lVar17;
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
    _bzero(lVar16,uVar18 * 0x10);
    param_2[0x4c] = lVar16 + uVar18 * 0x10;
  }
  else if (uVar9 < uVar14) {
    lVar10 = lVar10 + uVar9 * 0x10;
    while (lVar16 != lVar10) {
      lVar16 = lVar16 + -0x10;
      func_0x00010988c204(lVar16);
    }
    param_2[0x4c] = lVar10;
  }
code_r0x00010988c138:
  param_2[0x5a] = uVar9;
  return;
}



/* Entry: 10ad66534; end: 10ad665df;  */

void FUN_10ad66534(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ad665e0(param_1,param_2,FUN_10ad65c9c,param_4,param_5);
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



/* Entry: 10ad665e0; end: 10ad66677;  */

void FUN_10ad665e0(undefined4 *param_1,undefined8 param_2,code *param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 auStack_48 [2];
  char cStack_31;
  
  FUN_10ad66678(param_5);
  func_0x000109898570(auStack_48,param_2,param_4);
  func_0x00010a9fdb74(param_2,param_4 + 0x10);
  (*param_3)(auStack_48,param_2);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  *param_1 = 0;
  return;
}



/* Entry: 10ad66678; end: 10ad6669b;  */

void FUN_10ad66678(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar3 = (long *)0x2;
  FUN_10a052ee0(2,0,param_1);
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10ad665e0(extraout_x8,plVar3,FUN_10ad65e3c,param_1,param_4);
  plVar3 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar3[lVar5 + 2];
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
  lVar5 = *plVar3;
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
        plStack_78 = plVar3;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar3 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_98 = lVar5;
          lStack_90 = lVar5;
          lStack_88 = lVar5;
          lStack_80 = lVar11;
          func_0x00010988c1b8(&lStack_98);
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



/* Entry: 10ad6669c; end: 10ad66747;  */

void FUN_10ad6669c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ad665e0(param_1,param_2,FUN_10ad65e3c,param_4,param_5);
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



/* Entry: 10ad66748; end: 10ad66a6f;  */

void FUN_10ad66748(undefined4 *param_1,long *param_2,undefined8 param_3,mach_header *param_4,
                  undefined8 param_5)

{
  mach_header *pmVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  code *pcVar8;
  long *plVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  mach_header *pmVar16;
  mach_header *pmVar17;
  mach_header *pmVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 extraout_x8;
  undefined8 *puVar21;
  ulong uVar22;
  undefined *unaff_x27;
  undefined *puVar23;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  undefined8 *puStack_d8;
  mach_header *pmStack_d0;
  long *plStack_c8;
  undefined4 *puStack_c0;
  long *plStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined1 auStack_a0 [23];
  char cStack_89;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = param_2;
  pmVar18 = param_4;
  uVar19 = param_5;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  FUN_10a547b1c(param_5);
  pmVar16 = param_4;
  func_0x000109898570(auStack_a0,param_2);
  puVar7 = PTR___tlv_bootstrap_11340d750;
  if (param_4->ncmds == 3) {
    puVar23 = *(undefined **)&param_4->flags;
    if (0x7fefffffffffffff < ((ulong)puVar23 & 0x7fffffffffffffff)) {
      puVar23 = (undefined *)0x0;
    }
    pmVar17 = (mach_header *)auStack_a0._0_8_;
    if (-1 < (long)cStack_89) {
      pmVar17 = (mach_header *)auStack_a0;
    }
    pmVar1 = (mach_header *)auStack_a0._8_8_;
    if (-1 < cStack_89) {
      pmVar1 = (mach_header *)(long)cStack_89;
    }
    ppuVar10 = &PTR___tlv_bootstrap_11340d750;
    (*(code *)PTR___tlv_bootstrap_11340d750)();
    ppuVar11 = &PTR___tlv_bootstrap_11340d738;
    if (((ulong)*ppuVar10 & 1) == 0) {
      pmVar16 = (mach_header *)ppuVar11;
      (*(code *)PTR___tlv_bootstrap_11340d738)();
      pmVar18 = &MACH_HEADER;
      __tlv_atexit(0x10a132a8c,pmVar16,0x100000000);
      ppuVar10 = &PTR___tlv_bootstrap_11340d750;
      (*(code *)puVar7)();
      *(undefined1 *)ppuVar10 = 1;
    }
    (*(code *)PTR___tlv_bootstrap_11340d738)();
    puVar21 = (undefined8 *)ppuVar11[2];
    ppuVar11 = &PTR___tlv_bootstrap_11340d750;
    if (((puVar21 != (undefined8 *)0x0) && (lVar20 = puVar21[1], *(char *)(lVar20 + 0x14) == '\x01')
        ) && (ppuVar11 = &PTR___tlv_bootstrap_11340d750,
             ((*(byte *)(lVar20 + 0x42) | *(byte *)(lVar20 + 0x43)) & 1) != 0)) {
      uVar6 = cntfrq_el0;
      InstructionSynchronizationBarrier();
      uVar22 = cntvct_el0;
      if (uVar6 != 1000000000) {
        uVar4 = 0;
        if (uVar6 != 0) {
          uVar4 = uVar22 / uVar6;
        }
        uVar5 = 0;
        if (uVar6 != 0) {
          uVar5 = ((uVar22 - uVar4 * uVar6) * 1000000000) / uVar6;
        }
        uVar22 = uVar5 + uVar4 * 1000000000;
      }
      puVar12 = puVar21;
      FUN_10a1333cc();
      if (puVar12 != (undefined8 *)0x0) {
        unaff_x27 = (undefined *)puVar21[2];
        ppuVar11 = &puStack_88;
        pmVar16 = (mach_header *)0x1;
        puStack_80 = unaff_x27;
        FUN_10a3a7e2c();
        *ppuVar11 = (undefined *)0x0;
        ppuVar11[1] = (undefined *)0x0;
        ppuVar11[2] = (undefined *)0x0;
        ppuVar11[4] = unaff_x27;
        *(undefined1 *)(ppuVar11 + 5) = 0;
        ppuVar11[7] = (undefined *)0x0;
        ppuVar11[8] = (undefined *)0x0;
        ppuVar11[6] = (undefined *)0x0;
        ppuVar11[10] = unaff_x27;
        ppuVar11[0xc] = (undefined *)0x0;
        ppuVar11[0xb] = (undefined *)0x0;
        ppuVar11[0xe] = (undefined *)0x0;
        ppuVar11[0xd] = (undefined *)0x0;
        ppuVar11[0xf] = (undefined *)0x0;
        ppuVar11[0x11] = unaff_x27;
        ppuVar11[0x13] = (undefined *)0x0;
        ppuVar11[0x12] = (undefined *)0x0;
        ppuVar11[0x15] = (undefined *)0x0;
        ppuVar11[0x14] = (undefined *)0x0;
        ppuVar11[0x17] = unaff_x27;
        ppuVar11[0x18] = (undefined *)0x0;
        if (pmVar17 != (mach_header *)0x0) {
          pmVar18 = pmVar1;
          FUN_10a3a7f4c(ppuVar11,pmVar17,pmVar1);
          pmVar16 = pmVar17;
        }
        ppuVar11[0x18] = puVar23;
        *puVar12 = 0;
        puVar12[1] = ppuVar11;
        puVar12[2] = uVar22;
        puVar12[3] = 0x413000400000000;
        if ((*(byte *)(puVar21 + 0x38) & 1) == 0) goto LAB_10ad669ec;
        puVar21[0x18] = puVar21[0x18] + 1;
      }
    }
    while( true ) {
      if (cStack_89 < '\0') {
        __ZdlPv(auStack_a0._0_8_);
      }
      *param_1 = 0;
      plVar13 = plVar9 + 0x4b;
      func_0x00010988c170();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) break;
      ___stack_chk_fail();
      if ((int)pmVar16 == 0) {
        plVar14 = plVar13;
        __Unwind_Resume();
        pcStack_a8 = FUN_10ad66a70;
        plVar15 = plVar14;
        ppuStack_e0 = ppuVar11;
        puStack_d8 = puVar21;
        pmStack_d0 = pmVar1;
        plStack_c8 = plVar13;
        puStack_c0 = param_1;
        plStack_b8 = plVar9;
        puStack_b0 = &stack0xfffffffffffffff0;
        (**(code **)(*plVar14 + 0x58))();
        if ((ulong)plVar15[0x59] < 8) {
          plVar15[plVar15[0x59] + 0x4e] = plVar15[0x5a];
          plVar15[0x59] = plVar15[0x59] + 1;
        }
        else {
          func_0x00010988bfcc(plVar15 + 0x4b);
        }
        pcStack_e8 = FUN_10ad6607c;
        FUN_10a47734c(extraout_x8,plVar14,&pcStack_e8,pmVar18,uVar19);
        func_0x00010988c170(plVar15 + 0x4b);
        return;
      }
      ___cxa_begin_catch(plVar13);
      FUN_10a1330f0(ppuVar11);
      plVar13 = (long *)(unaff_x27 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = *plVar13 + -200;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      __ZdlPv(ppuVar11);
      ___cxa_end_catch();
    }
    return;
  }
  func_0x00010988bd28(&UNK_10f68f550);
LAB_10ad669ec:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10ad669f0);
  (*pcVar8)();
}



/* Entry: 10ad66a70; end: 10ad66b2f;  */

void FUN_10ad66a70(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcStack_48;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  pcStack_48 = FUN_10ad6607c;
  FUN_10a47734c(param_1,param_2,&pcStack_48,param_4,param_5);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10ad66b30; end: 10ad66db3;  */

void FUN_10ad66b30(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 ****ppppuVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined1 auStack_c0 [32];
  undefined8 ***pppuStack_a0;
  long lStack_98;
  char cStack_89;
  char acStack_88 [2];
  undefined2 uStack_86;
  undefined8 ***pppuStack_80;
  long lStack_78;
  undefined4 uStack_70;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  FUN_10ad66db4(param_5);
  func_0x000109898570(&pppuStack_a0,param_2,param_4);
  FUN_10a05dd14(auStack_c0,param_2,param_4 + 0x10);
  puVar11 = PTR___tlv_bootstrap_11340d750;
  ppppuVar1 = (undefined8 ****)pppuStack_a0;
  if (-1 < (long)cStack_89) {
    ppppuVar1 = &pppuStack_a0;
  }
  lVar2 = lStack_98;
  if (-1 < cStack_89) {
    lVar2 = (long)cStack_89;
  }
  ppuVar9 = &PTR___tlv_bootstrap_11340d750;
  ppuVar7 = ppuVar9;
  (*(code *)PTR___tlv_bootstrap_11340d750)();
  ppuVar8 = &PTR___tlv_bootstrap_11340d738;
  if (((ulong)*ppuVar7 & 1) == 0) {
    ppuVar7 = ppuVar8;
    (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
    __tlv_atexit(0x10a132a8c,ppuVar7,0x100000000);
    (*(code *)puVar11)();
    *(undefined1 *)ppuVar9 = 1;
  }
  (*(code *)PTR___tlv_bootstrap_11340d738)();
  puVar11 = ppuVar8[2];
  if (puVar11 == (undefined *)0x0) {
    acStack_88[0] = '\0';
    pppuStack_80 = (undefined8 ****)0x0;
    lStack_78 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
  }
  else {
    lVar10 = *(long *)(puVar11 + 8);
    acStack_88[0] = *(char *)(lVar10 + 0x14);
    uStack_86 = 4;
    uStack_70 = 0x90c71009;
    uStack_60 = 0;
    uStack_58 = 0;
    pppuStack_80 = ppppuVar1;
    lStack_78 = lVar2;
    if ((acStack_88[0] == '\x01') &&
       (((*(byte *)(lVar10 + 0x42) | *(byte *)(lVar10 + 0x43)) & 1) != 0)) {
      uVar5 = cntfrq_el0;
      InstructionSynchronizationBarrier();
      uVar12 = cntvct_el0;
      if (uVar5 != 1000000000) {
        uVar3 = 0;
        if (uVar5 != 0) {
          uVar3 = uVar12 / uVar5;
        }
        uVar4 = 0;
        if (uVar5 != 0) {
          uVar4 = ((uVar12 - uVar3 * uVar5) * 1000000000) / uVar5;
        }
        uVar12 = uVar4 + uVar3 * 1000000000;
      }
      FUN_10a192960(puVar11,0x90c71009,&DAT_10f6a8f75);
      FUN_10a3a7c80(puVar11,4,uVar12,ppppuVar1,lVar2,0x90c71009,0);
    }
  }
  FUN_10a05e614(auStack_c0);
  FUN_10ad66ef0(acStack_88);
  FUN_10a688c1c(auStack_c0);
  if (cStack_89 < '\0') {
    __ZdlPv(pppuStack_a0);
  }
  *param_1 = 0;
  func_0x00010988c170(plVar6 + 0x4b);
  return;
}



/* Entry: 10ad66db4; end: 10ad66dd7;  */

void FUN_10ad66db4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  byte bVar9;
  long lVar10;
  ulong uVar11;
  undefined4 *extraout_x8;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar5 = (long *)0x2;
  FUN_10a052ee0(2,0,param_1);
  (**(code **)(*plVar5 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a052e3c(param_4);
  puVar2 = PTR___tlv_bootstrap_11340d750;
  ppuVar8 = &PTR___tlv_bootstrap_11340d750;
  ppuVar6 = ppuVar8;
  (*(code *)PTR___tlv_bootstrap_11340d750)();
  ppuVar7 = &PTR___tlv_bootstrap_11340d738;
  if (((ulong)*ppuVar6 & 1) == 0) {
    ppuVar6 = ppuVar7;
    (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
    __tlv_atexit(0x10a132a8c,ppuVar6,0x100000000);
    (*(code *)puVar2)();
    *(undefined1 *)ppuVar8 = 1;
  }
  (*(code *)PTR___tlv_bootstrap_11340d738)();
  bVar9 = 0;
  if (ppuVar7[2] != (undefined *)0x0) {
    bVar9 = *(byte *)(*(long *)(ppuVar7[2] + 8) + 0x43);
  }
  *extraout_x8 = 2;
  *(byte *)(extraout_x8 + 2) = bVar9 & 1;
  plVar1 = plVar5 + 0x4b;
  lVar10 = plVar5[0x59];
  uVar11 = lVar10 - 1;
  plVar5[0x59] = uVar11;
  if (uVar11 < 8) {
    uVar11 = plVar1[lVar10 + 2];
    if (plVar5[0x5a] == uVar11) {
      return;
    }
  }
  else {
    uVar11 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar11) {
      return;
    }
  }
  lVar10 = *plVar1;
  lVar15 = plVar5[0x4c];
  lVar13 = lVar15 - lVar10;
  uVar17 = lVar13 >> 4;
  if (uVar17 < uVar11) {
    uVar18 = uVar11 - uVar17;
    lVar16 = plVar5[0x4d];
    if ((ulong)(lVar16 - lVar15 >> 4) < uVar18) {
      if (uVar11 >> 0x3c == 0) {
        uVar12 = lVar16 - lVar10 >> 3;
        if (uVar12 <= uVar11) {
          uVar12 = uVar11;
        }
        if (0x7fffffffffffffef < (ulong)(lVar16 - lVar10)) {
          uVar12 = 0xfffffffffffffff;
        }
        plStack_78 = plVar1;
        if (uVar12 >> 0x3c == 0) {
          lVar4 = uVar12 << 4;
          __Znwm();
          lVar15 = lVar4 + lVar13;
          _bzero(lVar15,uVar18 * 0x10);
          lVar14 = lVar15 + uVar17 * -0x10;
          _memcpy(lVar14,lVar10,lVar13);
          *plVar1 = lVar14;
          plVar5[0x4c] = lVar15 + uVar18 * 0x10;
          plVar5[0x4d] = lVar4 + uVar12 * 0x10;
          lStack_98 = lVar10;
          lStack_90 = lVar10;
          lStack_88 = lVar10;
          lStack_80 = lVar16;
          func_0x00010988c1b8(&lStack_98);
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
    _bzero(lVar15,uVar18 * 0x10);
    plVar5[0x4c] = lVar15 + uVar18 * 0x10;
  }
  else if (uVar11 < uVar17) {
    lVar10 = lVar10 + uVar11 * 0x10;
    while (lVar15 != lVar10) {
      lVar15 = lVar15 + -0x10;
      func_0x00010988c204(lVar15);
    }
    plVar5[0x4c] = lVar10;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar11;
  return;
}



/* Entry: 10ad66dd8; end: 10ad66eef;  */

void FUN_10ad66dd8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  byte bVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
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
  
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)param_2[0x59] < 8) {
    param_2[param_2[0x59] + 0x4e] = param_2[0x5a];
    param_2[0x59] = param_2[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(param_2 + 0x4b);
  }
  FUN_10a052e3c(param_5);
  puVar2 = PTR___tlv_bootstrap_11340d750;
  ppuVar7 = &PTR___tlv_bootstrap_11340d750;
  ppuVar5 = ppuVar7;
  (*(code *)PTR___tlv_bootstrap_11340d750)();
  ppuVar6 = &PTR___tlv_bootstrap_11340d738;
  if (((ulong)*ppuVar5 & 1) == 0) {
    ppuVar5 = ppuVar6;
    (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
    __tlv_atexit(0x10a132a8c,ppuVar5,0x100000000);
    (*(code *)puVar2)();
    *(undefined1 *)ppuVar7 = 1;
  }
  (*(code *)PTR___tlv_bootstrap_11340d738)();
  bVar8 = 0;
  if (ppuVar6[2] != (undefined *)0x0) {
    bVar8 = *(byte *)(*(long *)(ppuVar6[2] + 8) + 0x43);
  }
  *param_1 = 2;
  *(byte *)(param_1 + 2) = bVar8 & 1;
  plVar1 = param_2 + 0x4b;
  lVar9 = param_2[0x59];
  uVar10 = lVar9 - 1;
  param_2[0x59] = uVar10;
  if (uVar10 < 8) {
    uVar10 = plVar1[lVar9 + 2];
    if (param_2[0x5a] == uVar10) {
      return;
    }
  }
  else {
    uVar10 = *(ulong *)(param_2[0x57] + -8);
    param_2[0x57] = param_2[0x57] + -8;
    if (param_2[0x5a] == uVar10) {
      return;
    }
  }
  lVar9 = *plVar1;
  lVar14 = param_2[0x4c];
  lVar12 = lVar14 - lVar9;
  uVar16 = lVar12 >> 4;
  if (uVar16 < uVar10) {
    uVar17 = uVar10 - uVar16;
    lVar15 = param_2[0x4d];
    if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
      if (uVar10 >> 0x3c == 0) {
        uVar11 = lVar15 - lVar9 >> 3;
        if (uVar11 <= uVar10) {
          uVar11 = uVar10;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - lVar9)) {
          uVar11 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar11 >> 0x3c == 0) {
          lVar4 = uVar11 << 4;
          __Znwm();
          lVar14 = lVar4 + lVar12;
          _bzero(lVar14,uVar17 * 0x10);
          lVar13 = lVar14 + uVar16 * -0x10;
          _memcpy(lVar13,lVar9,lVar12);
          *plVar1 = lVar13;
          param_2[0x4c] = lVar14 + uVar17 * 0x10;
          param_2[0x4d] = lVar4 + uVar11 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
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
    param_2[0x4c] = lVar14 + uVar17 * 0x10;
  }
  else if (uVar10 < uVar16) {
    lVar9 = lVar9 + uVar10 * 0x10;
    while (lVar14 != lVar9) {
      lVar14 = lVar14 + -0x10;
      func_0x00010988c204(lVar14);
    }
    param_2[0x4c] = lVar9;
  }
code_r0x00010988c138:
  param_2[0x5a] = uVar10;
  return;
}



/* Entry: 10ad66ef0; end: 10ad67033;  */

char * FUN_10ad66ef0(char *param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  ulong uVar13;
  
  puVar6 = PTR___tlv_bootstrap_11340d750;
  if (*param_1 == '\x01') {
    ppuVar11 = &PTR___tlv_bootstrap_11340d750;
    ppuVar8 = ppuVar11;
    (*(code *)PTR___tlv_bootstrap_11340d750)();
    ppuVar9 = &PTR___tlv_bootstrap_11340d738;
    if (((ulong)*ppuVar8 & 1) == 0) {
      ppuVar8 = ppuVar9;
      (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
      __tlv_atexit(0x10a132a8c,ppuVar8,0x100000000);
      (*(code *)puVar6)();
      *(undefined1 *)ppuVar11 = 1;
    }
    (*(code *)PTR___tlv_bootstrap_11340d738)();
    puVar12 = (undefined8 *)ppuVar9[2];
    if ((puVar12 != (undefined8 *)0x0) &&
       (((*(byte *)(puVar12[1] + 0x42) | *(byte *)(puVar12[1] + 0x43)) & 1) != 0)) {
      uVar2 = *(undefined2 *)(param_1 + 2);
      uVar5 = cntfrq_el0;
      InstructionSynchronizationBarrier();
      uVar13 = cntvct_el0;
      if (uVar5 != 1000000000) {
        uVar3 = 0;
        if (uVar5 != 0) {
          uVar3 = uVar13 / uVar5;
        }
        uVar4 = 0;
        if (uVar5 != 0) {
          uVar4 = ((uVar13 - uVar3 * uVar5) * 1000000000) / uVar5;
        }
        uVar13 = uVar4 + uVar3 * 1000000000;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      puVar10 = puVar12;
      FUN_10a1333cc();
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = "";
        puVar10[1] = 0;
        puVar10[2] = uVar13;
        *(undefined4 *)(puVar10 + 3) = uVar1;
        *(undefined2 *)((long)puVar10 + 0x1c) = uVar2;
        *(undefined2 *)((long)puVar10 + 0x1e) = 6;
        if ((*(byte *)(puVar12 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10ad67030);
          (*pcVar7)();
        }
        puVar12[0x18] = puVar12[0x18] + 1;
      }
    }
  }
  return param_1;
}



/* Entry: 10ad67034; end: 10ad670e3;  */

void FUN_10ad67034(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  auVar3 = NEON_fmov(0xbff0000000000000,8);
  param_1[1] = auVar3._8_8_;
  *param_1 = auVar3._0_8_;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  _memset_pattern16(param_1 + 3,&UNK_10e510720,0x28);
  _memset_pattern16(param_1 + 8,&UNK_10e510730,0xf8);
  _memset_pattern16(param_1 + 0x27,&UNK_10e510740,0xf8);
  uVar1 = 0;
  do {
    param_1[uVar1 + 0x46] = 0xbff0000000000000;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x1f);
  lVar2 = 0;
  do {
    *(undefined8 *)((long)param_1 + lVar2 + 0x328) = 0;
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0xf8);
  param_1[0x86] = 0;
  param_1[0x85] = 0;
  param_1[0x84] = 0;
  return;
}



/* Entry: 10ad670e4; end: 10ad6739f;  */

void FUN_10ad670e4(double *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  long extraout_x8;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong *unaff_x21;
  double *unaff_x22;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_2af8 [8];
  undefined8 uStack_2af0;
  undefined1 auStack_2ae8 [3592];
  double *pdStack_1ce0;
  ulong *puStack_1cd8;
  double *pdStack_1cd0;
  long *plStack_1cc8;
  undefined1 *puStack_1cc0;
  code *pcStack_1cb8;
  double adStack_1ca8 [4];
  long lStack_1c88;
  long lStack_1c80;
  long lStack_12e8;
  double dStack_12b8;
  double dStack_ea8;
  ulong *apuStack_ea0 [2];
  ulong auStack_e90 [5];
  ulong *puStack_e68;
  long *plStack_e60;
  undefined1 uStack_60;
  long alStack_58 [2];
  long lStack_48;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010a152370(&puStack_e68,param_2);
  apuStack_ea0[0] = (ulong *)0x0;
  plStack_1cc8 = plStack_e60;
  if (plStack_e60 != (long *)0x0) {
    plVar6 = plStack_e60;
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar6 == (long *)0x0) {
      unaff_x21 = (ulong *)0x0;
    }
    else {
      apuStack_ea0[0] = puStack_e68;
      unaff_x21 = puStack_e68;
    }
    plVar7 = plStack_e60;
    if (plStack_e60 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar7 = plStack_e60;
    }
    if ((unaff_x21 != (ulong *)0x0) && (plVar7 = (long *)unaff_x21[2], (char)plVar7[8] == '\x01')) {
      FUN_10ad673a0(&puStack_e68);
      unaff_x21 = auStack_e90;
      unaff_x22 = adStack_1ca8;
      _memcpy(adStack_1ca8,&puStack_e68,0xe08);
      dVar11 = (double)NEON_ucvtf(adStack_1ca8[0]);
      *param_1 = (double)(ulong)(lStack_1c80 - lStack_1c88) / dVar11;
      param_1[1] = (double)(ulong)(lStack_1c80 - lStack_1c88);
      puVar8 = (ulong *)&UNK_10e5105a8;
      lVar9 = 0x180;
      do {
        uVar10 = *puVar8;
        if (0x37 < uVar10) goto LAB_10ad67384;
        dVar11 = unaff_x22[uVar10 * 8];
        if (dVar11 == 0.0) {
          dVar12 = 0.0;
        }
        else {
          dVar12 = adStack_1ca8[uVar10 * 8 + 1] / (double)(ulong)dVar11;
        }
        uVar2 = (uint)puVar8[-1];
        if (0x1e < uVar2) goto LAB_10ad67384;
        param_1[(ulong)uVar2 + 8] = dVar12 / 1000000.0;
        param_1[(ulong)uVar2 + 0x27] = adStack_1ca8[uVar10 * 8 + 3] / 1000000.0;
        if (dVar11 == 0.0) {
          dVar12 = 0.0;
        }
        else {
          dVar12 = (double)(ulong)dVar11;
          dVar13 = adStack_1ca8[uVar10 * 8 + 1] / dVar12;
          dVar13 = dVar13 * dVar13 * dVar12 +
                   (adStack_1ca8[uVar10 * 8 + 2] - adStack_1ca8[uVar10 * 8 + 1] * (dVar13 + dVar13))
          ;
          if (dVar13 <= 0.0) {
            dVar13 = 0.0;
          }
          dVar12 = SQRT(dVar13 / dVar12);
        }
        param_1[(ulong)uVar2 + 0x46] = dVar12 / 1000000.0;
        param_1[(ulong)uVar2 + 0x65] = dVar11;
        puVar8 = puVar8 + 2;
        lVar9 = lVar9 + -0x10;
      } while (lVar9 != 0);
      lVar9 = 0;
      param_1[0x15] = -7777.0;
      auStack_e90[1] = 0x34;
      auStack_e90[0] = 0x33;
      auStack_e90[3] = 0x36;
      auStack_e90[2] = 0x35;
      auStack_e90[4] = 0x37;
      do {
        uVar10 = auStack_e90[lVar9];
        if (0x37 < uVar10) {
LAB_10ad67384:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10ad67388);
          (*pcVar5)();
        }
        if (adStack_1ca8[uVar10 * 8] != 0.0) {
          param_1[lVar9 + 3] =
               (adStack_1ca8[uVar10 * 8 + 1] / (double)(ulong)adStack_1ca8[uVar10 * 8]) / 1000000.0;
          *(int *)(param_1 + 2) = (int)lVar9;
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 != 5);
      param_1[0x84] = dStack_ea8;
      if (lStack_12e8 != 0) {
        param_1[0x85] = dStack_12b8;
      }
      plVar7 = alStack_58;
      func_0x000109380ffc(plVar7,uStack_60);
    }
    plStack_1cc8 = plVar7;
    if (plVar6 != (long *)0x0) {
      plVar7 = plVar6 + 1;
      do {
        lVar9 = *plVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        plStack_1cc8 = plVar6;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a13320c(apuStack_ea0);
  plVar6 = plStack_1cc8;
  __Unwind_Resume(plStack_1cc8);
  pcStack_1cb8 = FUN_10ad673a0;
  lVar9 = 0;
  do {
    puVar1 = (undefined8 *)(extraout_x8 + lVar9);
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0xffffffffffffffff;
    puVar1[7] = 0;
    puVar1[6] = 0xffffffffffffffff;
    lVar9 = lVar9 + 0x40;
  } while (lVar9 != 0xe00);
  *(undefined8 *)(extraout_x8 + 0xe00) = 0;
  *(undefined1 *)(extraout_x8 + 0xe08) = 0;
  *(undefined8 *)(extraout_x8 + 0xe10) = 0;
  pdStack_1ce0 = unaff_x22;
  puStack_1cd8 = unaff_x21;
  pdStack_1cd0 = param_1;
  puStack_1cc0 = &stack0xfffffffffffffff0;
  FUN_10ad67474(auStack_2ae8,plVar6 + 0x45);
  _memcpy(extraout_x8,auStack_2ae8,0xe08);
  func_0x0001098c2c9c(auStack_2af8,plVar6 + 0x3c6);
  *(undefined1 *)(extraout_x8 + 0xe08) = auStack_2af8[0];
  auStack_2af8[0] = 0;
  *(undefined8 *)(extraout_x8 + 0xe10) = uStack_2af0;
  uStack_2af0 = 0;
  func_0x000109380ffc(&uStack_2af0,0);
  return;
}



/* Entry: 10ad673a0; end: 10ad67473;  */

void FUN_10ad673a0(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 auStack_e48 [8];
  undefined8 uStack_e40;
  undefined1 auStack_e38 [3592];
  
  lVar2 = 0;
  do {
    puVar1 = (undefined8 *)(param_1 + lVar2);
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0xffffffffffffffff;
    puVar1[7] = 0;
    puVar1[6] = 0xffffffffffffffff;
    lVar2 = lVar2 + 0x40;
  } while (lVar2 != 0xe00);
  *(undefined8 *)(param_1 + 0xe00) = 0;
  *(undefined1 *)(param_1 + 0xe08) = 0;
  *(undefined8 *)(param_1 + 0xe10) = 0;
  FUN_10ad67474(auStack_e38,param_2 + 0x228);
  _memcpy(param_1,auStack_e38,0xe08);
  func_0x0001098c2c9c(auStack_e48,param_2 + 0x1e30);
  *(undefined1 *)(param_1 + 0xe08) = auStack_e48[0];
  auStack_e48[0] = 0;
  *(undefined8 *)(param_1 + 0xe10) = uStack_e40;
  uStack_e40 = 0;
  func_0x000109380ffc(&uStack_e40,0);
  return;
}



/* Entry: 10ad67474; end: 10ad67523;  */

void FUN_10ad67474(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)(param_1 + 0x30);
  lVar2 = 0xe00;
  do {
    puVar1[-5] = 0;
    puVar1[-6] = 0;
    puVar1[-3] = 0;
    puVar1[-4] = 0;
    puVar1[-1] = 0;
    puVar1[-2] = 0xffffffffffffffff;
    puVar1[1] = 0;
    *puVar1 = 0xffffffffffffffff;
    puVar1 = puVar1 + 8;
    lVar2 = lVar2 + -0x40;
  } while (lVar2 != 0);
  puVar1 = (undefined8 *)(param_1 + 0x18);
  lVar3 = 0x38;
  lVar2 = param_2;
  do {
    __ZNSt3__15mutex4lockEv(lVar2);
    uVar4 = *(undefined8 *)(lVar2 + 0x58);
    puVar1[-3] = *(undefined8 *)(lVar2 + 0x40);
    uVar5 = *(undefined8 *)(lVar2 + 0x48);
    puVar1[-1] = *(undefined8 *)(lVar2 + 0x50);
    puVar1[-2] = uVar5;
    *puVar1 = uVar4;
    uVar4 = *(undefined8 *)(lVar2 + 0x60);
    uVar6 = *(undefined8 *)(lVar2 + 0x78);
    uVar5 = *(undefined8 *)(lVar2 + 0x70);
    puVar1[2] = *(undefined8 *)(lVar2 + 0x68);
    puVar1[1] = uVar4;
    puVar1[4] = uVar6;
    puVar1[3] = uVar5;
    __ZNSt3__15mutex6unlockEv(lVar2);
    puVar1 = puVar1 + 8;
    lVar2 = lVar2 + 0x80;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  *(undefined8 *)(param_1 + 0xe00) = *(undefined8 *)(param_2 + 0x1c00);
  return;
}



/* Entry: 10ad67524; end: 10ad676e3;  */

void FUN_10ad67524(long param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  float fVar12;
  undefined8 uVar13;
  double dVar14;
  long alStack_e68 [2];
  long lStack_e58;
  long *plStack_e50;
  long lStack_698;
  undefined8 uStack_678;
  undefined8 uStack_668;
  long lStack_658;
  ulong uStack_638;
  ulong uStack_628;
  long lStack_618;
  ulong uStack_5f8;
  ulong uStack_5e8;
  long lStack_5d8;
  ulong uStack_5a8;
  long lStack_598;
  ulong uStack_568;
  long lStack_558;
  ulong uStack_538;
  ulong uStack_528;
  long lStack_518;
  ulong uStack_4e8;
  byte bStack_50;
  long alStack_48 [2];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10ad670e4();
  func_0x00010a152370(&lStack_e58,param_2);
  alStack_e68[0] = 0;
  plVar6 = plStack_e50;
  __ZNSt3__119__shared_weak_count4lockEv();
  if (plVar6 == (long *)0x0) {
    lVar11 = 0;
  }
  else {
    alStack_e68[0] = lStack_e58;
    lVar11 = lStack_e58;
  }
  if (plStack_e50 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10ad673a0(&lStack_e58,*(undefined8 *)(lVar11 + 0x10));
  if (lStack_698 != 0) {
    uVar13 = NEON_ucvtf(uStack_678);
    *(undefined8 *)(param_1 + 0x438) = uVar13;
    uVar13 = NEON_ucvtf(uStack_668);
    *(undefined8 *)(param_1 + 0x440) = uVar13;
  }
  if (lStack_658 != 0) {
    *(double *)(param_1 + 0x448) = (double)uStack_638;
    *(double *)(param_1 + 0x450) = (double)uStack_628;
  }
  if (lStack_618 != 0) {
    *(double *)(param_1 + 0x458) = (double)uStack_5f8;
    *(double *)(param_1 + 0x460) = (double)uStack_5e8;
  }
  if (lStack_5d8 != 0) {
    *(double *)(param_1 + 0x468) = (double)uStack_5a8;
  }
  if (lStack_598 != 0) {
    *(double *)(param_1 + 0x470) = (double)uStack_568;
  }
  if (lStack_558 != 0) {
    *(double *)(param_1 + 0x478) = (double)uStack_538;
    *(double *)(param_1 + 0x480) = (double)uStack_528;
  }
  if (lStack_518 != 0) {
    *(double *)(param_1 + 0x488) = (double)uStack_4e8;
  }
  uVar8 = (ulong)bStack_50;
  plVar7 = alStack_48;
  func_0x000109380ffc();
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar7 = plVar6;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a13320c(alStack_e68);
  __Unwind_Resume();
  *(float *)(uVar8 + 0x20) = (float)(double)plVar7[1];
  *(undefined4 *)(uVar8 + 0x24) = 0x17d;
  *(long *)(uVar8 + 0x28) = plVar7[0x84];
  dVar14 = -1.0;
  if (0.0 <= (double)plVar7[0x88] - (double)plVar7[0x87]) {
    dVar14 = ((double)plVar7[0x88] - (double)plVar7[0x87]) / 1000000.0;
  }
  *(float *)(uVar8 + 0x30) = (float)dVar14;
  dVar14 = -1.0;
  if (0.0 <= (double)plVar7[0x8a] - (double)plVar7[0x89]) {
    dVar14 = ((double)plVar7[0x8a] - (double)plVar7[0x89]) / 1000000.0;
  }
  *(float *)(uVar8 + 0x34) = (float)dVar14;
  dVar14 = -1.0;
  if (0.0 <= (double)plVar7[0x8c] - (double)plVar7[0x8b]) {
    dVar14 = ((double)plVar7[0x8c] - (double)plVar7[0x8b]) / 1000000.0;
  }
  *(float *)(uVar8 + 0x38) = (float)dVar14;
  dVar14 = -1.0;
  if (0.0 <= (double)plVar7[0x8d] - (double)plVar7[0x8b]) {
    dVar14 = ((double)plVar7[0x8d] - (double)plVar7[0x8b]) / 1000000.0;
  }
  *(float *)(uVar8 + 0x3c) = (float)dVar14;
  dVar14 = -1.0;
  if (0.0 <= (double)plVar7[0x8e] - (double)plVar7[0x8b]) {
    dVar14 = ((double)plVar7[0x8e] - (double)plVar7[0x8b]) / 1000000.0;
  }
  *(float *)(uVar8 + 0x40) = (float)dVar14;
  *(int *)(uVar8 + 0x44) = (int)plVar7[0x92];
  dVar14 = -1.0;
  if (0.0 <= (double)plVar7[0x90] - (double)plVar7[0x8f]) {
    dVar14 = ((double)plVar7[0x90] - (double)plVar7[0x8f]) / 1000000.0;
  }
  *(float *)(uVar8 + 0x48) = (float)dVar14;
  dVar14 = -1.0;
  if (0.0 <= (double)plVar7[0x91] - (double)plVar7[0x87]) {
    dVar14 = ((double)plVar7[0x91] - (double)plVar7[0x87]) / 1000000.0;
  }
  *(float *)(uVar8 + 0x4c) = (float)dVar14;
  if (plVar7[0x6b] < 2) {
    fVar12 = (float)(double)plVar7[0xe];
  }
  else {
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f6a8f78,&UNK_10f6a8fad,0x60,&UNK_10f6a8fff);
    }
    fVar12 = -100.0;
  }
  *(float *)(uVar8 + 0x50) = fVar12;
  iVar9 = (int)plVar7[2];
  if (0 < iVar9) {
    lVar11 = 0;
    do {
      if (lVar11 == 5) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10ad67ad0);
        (*pcVar5)();
      }
      dVar14 = (double)plVar7[lVar11 + 3];
      iVar10 = *(int *)(uVar8 + 0x10);
      iVar2 = *(int *)(uVar8 + 0x14);
      if (iVar10 == iVar2) {
        func_0x000109311970(uVar8 + 0x10,iVar2,iVar2 + 1);
        iVar10 = *(int *)(uVar8 + 0x10);
        iVar9 = (int)plVar7[2];
      }
      *(int *)(uVar8 + 0x10) = iVar10 + 1;
      *(float *)(*(long *)(uVar8 + 0x18) + (long)iVar10 * 4) = (float)dVar14;
      lVar11 = lVar11 + 1;
    } while (lVar11 < iVar9);
  }
  *(float *)(uVar8 + 0x54) = (float)(double)plVar7[9];
  *(int *)(uVar8 + 0x58) = (int)plVar7[0x66];
  *(float *)(uVar8 + 0x5c) = (float)(double)plVar7[0x28];
  *(float *)(uVar8 + 0x60) = (float)(double)plVar7[10];
  *(int *)(uVar8 + 100) = (int)plVar7[0x67];
  *(float *)(uVar8 + 0x68) = (float)(double)plVar7[0xc];
  *(int *)(uVar8 + 0x6c) = (int)plVar7[0x69];
  *(float *)(uVar8 + 0x70) = (float)(double)plVar7[0xd];
  *(int *)(uVar8 + 0x74) = (int)plVar7[0x6a];
  *(float *)(uVar8 + 0x78) = (float)(double)plVar7[0x2c];
  *(float *)(uVar8 + 0x7c) = (float)(double)plVar7[0xf];
  *(int *)(uVar8 + 0x80) = (int)plVar7[0x6c];
  *(float *)(uVar8 + 0x84) = (float)(double)plVar7[0x2e];
  *(float *)(uVar8 + 0x88) = (float)(double)plVar7[0x12];
  *(int *)(uVar8 + 0x8c) = (int)plVar7[0x6f];
  *(float *)(uVar8 + 0x90) = (float)(double)plVar7[0x13];
  *(int *)(uVar8 + 0x94) = (int)plVar7[0x70];
  *(float *)(uVar8 + 0x98) = (float)(double)plVar7[0x14];
  *(int *)(uVar8 + 0x9c) = (int)plVar7[0x71];
  *(float *)(uVar8 + 0xa0) = (float)(double)plVar7[0x15];
  *(int *)(uVar8 + 0xa4) = (int)plVar7[0x72];
  *(float *)(uVar8 + 0xa8) = (float)(double)plVar7[0x16];
  *(int *)(uVar8 + 0xac) = (int)plVar7[0x73];
  *(float *)(uVar8 + 0xb0) = (float)(double)plVar7[0x17];
  *(int *)(uVar8 + 0xb4) = (int)plVar7[0x74];
  *(float *)(uVar8 + 0xb8) = (float)(double)plVar7[0x18];
  *(int *)(uVar8 + 0xbc) = (int)plVar7[0x75];
  *(float *)(uVar8 + 0xc0) = (float)(double)plVar7[0x19];
  *(int *)(uVar8 + 0xc4) = (int)plVar7[0x76];
  *(float *)(uVar8 + 200) = (float)(double)plVar7[0x1b];
  *(int *)(uVar8 + 0xcc) = (int)plVar7[0x78];
  *(float *)(uVar8 + 0xd0) = (float)(double)plVar7[0x1c];
  *(int *)(uVar8 + 0xd4) = (int)plVar7[0x79];
  *(float *)(uVar8 + 0xd8) = (float)(double)plVar7[0x23];
  *(int *)(uVar8 + 0xdc) = (int)plVar7[0x80];
  *(float *)(uVar8 + 0xe0) = (float)(double)plVar7[0x1d];
  *(int *)(uVar8 + 0xe4) = (int)plVar7[0x7a];
  *(float *)(uVar8 + 0xe8) = (float)(double)plVar7[0x3c];
  *(float *)(uVar8 + 0xec) = (float)(double)plVar7[0x1e];
  *(int *)(uVar8 + 0xf0) = (int)plVar7[0x7b];
  *(float *)(uVar8 + 0xf4) = (float)(double)plVar7[0x21];
  *(int *)(uVar8 + 0xf8) = (int)plVar7[0x7e];
  *(float *)(uVar8 + 0xfc) = (float)(double)plVar7[0x1f];
  *(int *)(uVar8 + 0x100) = (int)plVar7[0x7c];
  *(float *)(uVar8 + 0x104) = (float)(double)plVar7[0x22];
  *(int *)(uVar8 + 0x108) = (int)plVar7[0x7f];
  *(float *)(uVar8 + 0x10c) = (float)(double)plVar7[0x41];
  *(long *)(uVar8 + 0x110) = plVar7[0x85];
  return;
}



/* Entry: 10ad676e4; end: 10ad67ad7;  */

void FUN_10ad676e4(long param_1,long param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  
  *(float *)(param_2 + 0x20) = (float)*(double *)(param_1 + 8);
  *(undefined4 *)(param_2 + 0x24) = 0x17d;
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x420);
  dVar7 = *(double *)(param_1 + 0x440) - *(double *)(param_1 + 0x438);
  dVar8 = -1.0;
  if (0.0 <= dVar7) {
    dVar8 = dVar7 / 1000000.0;
  }
  *(float *)(param_2 + 0x30) = (float)dVar8;
  dVar7 = *(double *)(param_1 + 0x450) - *(double *)(param_1 + 0x448);
  dVar8 = -1.0;
  if (0.0 <= dVar7) {
    dVar8 = dVar7 / 1000000.0;
  }
  *(float *)(param_2 + 0x34) = (float)dVar8;
  dVar7 = *(double *)(param_1 + 0x460) - *(double *)(param_1 + 0x458);
  dVar8 = -1.0;
  if (0.0 <= dVar7) {
    dVar8 = dVar7 / 1000000.0;
  }
  *(float *)(param_2 + 0x38) = (float)dVar8;
  dVar7 = *(double *)(param_1 + 0x468) - *(double *)(param_1 + 0x458);
  dVar8 = -1.0;
  if (0.0 <= dVar7) {
    dVar8 = dVar7 / 1000000.0;
  }
  *(float *)(param_2 + 0x3c) = (float)dVar8;
  dVar7 = *(double *)(param_1 + 0x470) - *(double *)(param_1 + 0x458);
  dVar8 = -1.0;
  if (0.0 <= dVar7) {
    dVar8 = dVar7 / 1000000.0;
  }
  *(float *)(param_2 + 0x40) = (float)dVar8;
  *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_1 + 0x490);
  dVar7 = *(double *)(param_1 + 0x480) - *(double *)(param_1 + 0x478);
  dVar8 = -1.0;
  if (0.0 <= dVar7) {
    dVar8 = dVar7 / 1000000.0;
  }
  *(float *)(param_2 + 0x48) = (float)dVar8;
  dVar7 = *(double *)(param_1 + 0x488) - *(double *)(param_1 + 0x438);
  dVar8 = -1.0;
  if (0.0 <= dVar7) {
    dVar8 = dVar7 / 1000000.0;
  }
  *(float *)(param_2 + 0x4c) = (float)dVar8;
  if (*(long *)(param_1 + 0x358) < 2) {
    fVar6 = (float)*(double *)(param_1 + 0x70);
  }
  else {
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f6a8f78,&UNK_10f6a8fad,0x60,&UNK_10f6a8fff);
    }
    fVar6 = -100.0;
  }
  *(float *)(param_2 + 0x50) = fVar6;
  iVar3 = *(int *)(param_1 + 0x10);
  if (0 < iVar3) {
    lVar5 = 0;
    do {
      if (lVar5 == 5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10ad67ad0);
        (*pcVar2)();
      }
      dVar8 = *(double *)(param_1 + 0x18 + lVar5 * 8);
      iVar4 = *(int *)(param_2 + 0x10);
      iVar1 = *(int *)(param_2 + 0x14);
      if (iVar4 == iVar1) {
        func_0x000109311970(param_2 + 0x10,iVar1,iVar1 + 1);
        iVar4 = *(int *)(param_2 + 0x10);
        iVar3 = *(int *)(param_1 + 0x10);
      }
      *(int *)(param_2 + 0x10) = iVar4 + 1;
      *(float *)(*(long *)(param_2 + 0x18) + (long)iVar4 * 4) = (float)dVar8;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar3);
  }
  *(float *)(param_2 + 0x54) = (float)*(double *)(param_1 + 0x48);
  *(int *)(param_2 + 0x58) = (int)*(undefined8 *)(param_1 + 0x330);
  *(float *)(param_2 + 0x5c) = (float)*(double *)(param_1 + 0x140);
  *(float *)(param_2 + 0x60) = (float)*(double *)(param_1 + 0x50);
  *(int *)(param_2 + 100) = (int)*(undefined8 *)(param_1 + 0x338);
  *(float *)(param_2 + 0x68) = (float)*(double *)(param_1 + 0x60);
  *(int *)(param_2 + 0x6c) = (int)*(undefined8 *)(param_1 + 0x348);
  *(float *)(param_2 + 0x70) = (float)*(double *)(param_1 + 0x68);
  *(int *)(param_2 + 0x74) = (int)*(undefined8 *)(param_1 + 0x350);
  *(float *)(param_2 + 0x78) = (float)*(double *)(param_1 + 0x160);
  *(float *)(param_2 + 0x7c) = (float)*(double *)(param_1 + 0x78);
  *(int *)(param_2 + 0x80) = (int)*(undefined8 *)(param_1 + 0x360);
  *(float *)(param_2 + 0x84) = (float)*(double *)(param_1 + 0x170);
  *(float *)(param_2 + 0x88) = (float)*(double *)(param_1 + 0x90);
  *(int *)(param_2 + 0x8c) = (int)*(undefined8 *)(param_1 + 0x378);
  *(float *)(param_2 + 0x90) = (float)*(double *)(param_1 + 0x98);
  *(int *)(param_2 + 0x94) = (int)*(undefined8 *)(param_1 + 0x380);
  *(float *)(param_2 + 0x98) = (float)*(double *)(param_1 + 0xa0);
  *(int *)(param_2 + 0x9c) = (int)*(undefined8 *)(param_1 + 0x388);
  *(float *)(param_2 + 0xa0) = (float)*(double *)(param_1 + 0xa8);
  *(int *)(param_2 + 0xa4) = (int)*(undefined8 *)(param_1 + 0x390);
  *(float *)(param_2 + 0xa8) = (float)*(double *)(param_1 + 0xb0);
  *(int *)(param_2 + 0xac) = (int)*(undefined8 *)(param_1 + 0x398);
  *(float *)(param_2 + 0xb0) = (float)*(double *)(param_1 + 0xb8);
  *(int *)(param_2 + 0xb4) = (int)*(undefined8 *)(param_1 + 0x3a0);
  *(float *)(param_2 + 0xb8) = (float)*(double *)(param_1 + 0xc0);
  *(int *)(param_2 + 0xbc) = (int)*(undefined8 *)(param_1 + 0x3a8);
  *(float *)(param_2 + 0xc0) = (float)*(double *)(param_1 + 200);
  *(int *)(param_2 + 0xc4) = (int)*(undefined8 *)(param_1 + 0x3b0);
  *(float *)(param_2 + 200) = (float)*(double *)(param_1 + 0xd8);
  *(int *)(param_2 + 0xcc) = (int)*(undefined8 *)(param_1 + 0x3c0);
  *(float *)(param_2 + 0xd0) = (float)*(double *)(param_1 + 0xe0);
  *(int *)(param_2 + 0xd4) = (int)*(undefined8 *)(param_1 + 0x3c8);
  *(float *)(param_2 + 0xd8) = (float)*(double *)(param_1 + 0x118);
  *(int *)(param_2 + 0xdc) = (int)*(undefined8 *)(param_1 + 0x400);
  *(float *)(param_2 + 0xe0) = (float)*(double *)(param_1 + 0xe8);
  *(int *)(param_2 + 0xe4) = (int)*(undefined8 *)(param_1 + 0x3d0);
  *(float *)(param_2 + 0xe8) = (float)*(double *)(param_1 + 0x1e0);
  *(float *)(param_2 + 0xec) = (float)*(double *)(param_1 + 0xf0);
  *(int *)(param_2 + 0xf0) = (int)*(undefined8 *)(param_1 + 0x3d8);
  *(float *)(param_2 + 0xf4) = (float)*(double *)(param_1 + 0x108);
  *(int *)(param_2 + 0xf8) = (int)*(undefined8 *)(param_1 + 0x3f0);
  *(float *)(param_2 + 0xfc) = (float)*(double *)(param_1 + 0xf8);
  *(int *)(param_2 + 0x100) = (int)*(undefined8 *)(param_1 + 0x3e0);
  *(float *)(param_2 + 0x104) = (float)*(double *)(param_1 + 0x110);
  *(int *)(param_2 + 0x108) = (int)*(undefined8 *)(param_1 + 0x3f8);
  *(float *)(param_2 + 0x10c) = (float)*(double *)(param_1 + 0x208);
  *(undefined8 *)(param_2 + 0x110) = *(undefined8 *)(param_1 + 0x428);
  return;
}



/* Entry: 10ad67ad8; end: 10ad67b5b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10ad67ad8(long *param_1)

{
  long *plVar1;
  undefined8 *******pppppppuVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 in_x6;
  undefined8 in_x7;
  long *extraout_x8;
  undefined8 *******pppppppuStack_138;
  ulong uStack_130;
  byte bStack_121;
  undefined8 *******pppppppuStack_120;
  ulong uStack_118;
  byte bStack_109;
  undefined8 *******pppppppuStack_108;
  long lStack_100;
  undefined7 uStack_f8;
  char cStack_f1;
  undefined1 auStack_b0 [8];
  undefined8 auStack_a8 [16];
  long lStack_28;
  
  puVar5 = auStack_b0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _time(auStack_b0);
  _localtime(auStack_b0);
  iVar8 = 0xf6a904d;
  _strftime(auStack_a8,0x80,&UNK_10f6a904d,puVar5);
  puVar7 = auStack_a8;
  func_0x000107c2b054();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    uVar6 = param_1[1];
    if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
      uVar6 = (ulong)*(byte *)((long)param_1 + 0x17);
    }
    FUN_10a003c90(&pppppppuStack_108,uVar6 + 1,&pppppppuStack_120);
    pppppppuVar2 = pppppppuStack_108;
    if (-1 < cStack_f1) {
      pppppppuVar2 = &pppppppuStack_108;
    }
    if (uVar6 != 0) {
      plVar1 = (long *)*param_1;
      if (-1 < *(char *)((long)param_1 + 0x17)) {
        plVar1 = param_1;
      }
      _memmove(pppppppuVar2,plVar1,uVar6);
    }
    *(undefined2 *)((long)pppppppuVar2 + uVar6) = 0x2f;
    func_0x000107c2b054(&pppppppuStack_120,&UNK_10f6a905e);
    uVar6 = 0;
    FUN_10ad00cf8();
    if ((uVar6 & 1) == 0) {
      if ((bRam000000011330a9e8 & 1) != 0) {
        pppppppuVar2 = pppppppuStack_108;
        if (-1 < cStack_f1) {
          pppppppuVar2 = &pppppppuStack_108;
        }
        func_0x00010ae06f08(0,1,&UNK_10f6a906b,&UNK_10f6a909b,0x2d,&UNK_10f6a90fe,in_x6,in_x7,
                            pppppppuVar2);
      }
      func_0x000107c2b054(extraout_x8,"");
    }
    else {
      if (cStack_f1 < '\0') {
        func_0x000107c3192c(extraout_x8,pppppppuStack_108,lStack_100);
      }
      else {
        extraout_x8[1] = lStack_100;
        *extraout_x8 = (long)pppppppuStack_108;
        extraout_x8[2] = CONCAT17(cStack_f1,uStack_f8);
      }
      bVar4 = *(byte *)((long)puVar7 + 0x17);
      uVar6 = puVar7[1];
      if (-1 < (char)bVar4) {
        uVar6 = (ulong)bVar4;
      }
      if (uVar6 == 0) {
        FUN_10ad67ad8(&pppppppuStack_138);
        pppppppuVar2 = pppppppuStack_138;
        if (-1 < (char)bStack_121) {
          uStack_130 = (ulong)bStack_121;
          pppppppuVar2 = &pppppppuStack_138;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (extraout_x8,pppppppuVar2,uStack_130);
        if ((char)bStack_121 < '\0') {
          __ZdlPv(pppppppuStack_138);
        }
      }
      else {
        puVar3 = (undefined8 *)*puVar7;
        if (-1 < (char)bVar4) {
          puVar3 = puVar7;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (extraout_x8,puVar3);
      }
      if (iVar8 != 0) {
        pppppppuVar2 = pppppppuStack_120;
        if (-1 < (char)bStack_109) {
          uStack_118 = (ulong)bStack_109;
          pppppppuVar2 = &pppppppuStack_120;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (extraout_x8,pppppppuVar2,uStack_118);
      }
    }
    if ((char)bStack_109 < '\0') {
      __ZdlPv(pppppppuStack_120);
    }
    if (cStack_f1 < '\0') {
      __ZdlPv(pppppppuStack_108);
    }
    return;
  }
  return;
}



/* Entry: 10ad67b5c; end: 10ad67dc3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10ad67b5c(long *param_1,long *param_2,long *param_3,int param_4)

{
  undefined8 *******pppppppuVar1;
  long *plVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 *******pppppppuStack_88;
  ulong uStack_80;
  byte bStack_71;
  undefined8 *******pppppppuStack_70;
  ulong uStack_68;
  byte bStack_59;
  undefined8 *******pppppppuStack_58;
  long lStack_50;
  undefined7 uStack_48;
  char cStack_41;
  
  uVar4 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar4 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  FUN_10a003c90(&pppppppuStack_58,uVar4 + 1,&pppppppuStack_70);
  pppppppuVar1 = pppppppuStack_58;
  if (-1 < cStack_41) {
    pppppppuVar1 = &pppppppuStack_58;
  }
  if (uVar4 != 0) {
    plVar2 = (long *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      plVar2 = param_2;
    }
    _memmove(pppppppuVar1,plVar2,uVar4);
  }
  *(undefined2 *)((long)pppppppuVar1 + uVar4) = 0x2f;
  func_0x000107c2b054(&pppppppuStack_70,&UNK_10f6a905e);
  uVar4 = 0;
  FUN_10ad00cf8();
  if ((uVar4 & 1) == 0) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      pppppppuVar1 = pppppppuStack_58;
      if (-1 < cStack_41) {
        pppppppuVar1 = &pppppppuStack_58;
      }
      func_0x00010ae06f08(0,1,&UNK_10f6a906b,&UNK_10f6a909b,0x2d,&UNK_10f6a90fe,in_x6,in_x7,
                          pppppppuVar1);
    }
    func_0x000107c2b054(param_1,"");
  }
  else {
    if (cStack_41 < '\0') {
      func_0x000107c3192c(param_1,pppppppuStack_58,lStack_50);
    }
    else {
      param_1[1] = lStack_50;
      *param_1 = (long)pppppppuStack_58;
      param_1[2] = CONCAT17(cStack_41,uStack_48);
    }
    bVar3 = *(byte *)((long)param_3 + 0x17);
    uVar4 = param_3[1];
    if (-1 < (char)bVar3) {
      uVar4 = (ulong)bVar3;
    }
    if (uVar4 == 0) {
      FUN_10ad67ad8(&pppppppuStack_88);
      pppppppuVar1 = pppppppuStack_88;
      if (-1 < (char)bStack_71) {
        uStack_80 = (ulong)bStack_71;
        pppppppuVar1 = &pppppppuStack_88;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,pppppppuVar1,uStack_80);
      if ((char)bStack_71 < '\0') {
        __ZdlPv(pppppppuStack_88);
      }
    }
    else {
      plVar2 = (long *)*param_3;
      if (-1 < (char)bVar3) {
        plVar2 = param_3;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_1,plVar2);
    }
    if (param_4 != 0) {
      pppppppuVar1 = pppppppuStack_70;
      if (-1 < (char)bStack_59) {
        uStack_68 = (ulong)bStack_59;
        pppppppuVar1 = &pppppppuStack_70;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,pppppppuVar1,uStack_68);
    }
  }
  if ((char)bStack_59 < '\0') {
    __ZdlPv(pppppppuStack_70);
  }
  if (cStack_41 < '\0') {
    __ZdlPv(pppppppuStack_58);
  }
  return;
}



/* Entry: 10ad67dc4; end: 10ad6813f;  */

long * FUN_10ad67dc4(long *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  undefined **ppuVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lStack_78;
  long *plStack_70;
  long lStack_68;
  long lStack_60;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  
  if (*param_1 != 0) {
    func_0x00010a152370(&lStack_78);
    lStack_50 = 0;
    if (plStack_70 != (long *)0x0) {
      plVar13 = plStack_70;
      __ZNSt3__119__shared_weak_count4lockEv();
      if (plVar13 == (long *)0x0) {
        lVar9 = 0;
      }
      else {
        lStack_50 = lStack_78;
        lVar9 = lStack_78;
      }
      plStack_48 = plVar13;
      if (plStack_70 != (long *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (lVar9 == 0) {
        plVar11 = (long *)0x0;
      }
      else {
        lVar12 = *(long *)(lVar9 + 0x10);
        if ((*(byte *)(lVar12 + 0x209) & 1) == 0) {
          ppuVar5 = &PTR_PTR_113307848;
          FUN_10ae079a0(0,&PTR_PTR_113307848);
          FUN_10ae07cd4(ppuVar5,&PTR_PTR_113307848);
        }
        else if (*(char *)(lVar12 + 0x20b) == '\x01') {
          lVar14 = *(long *)(lVar12 + 0x210);
          __ZNSt3__15mutex4lockEv(lVar12 + 0x148);
          lVar15 = 0;
          lVar8 = *(long *)(lVar12 + 0x1b8) - (long)*(long **)(lVar12 + 0x1b0);
          if (lVar8 != 0) {
            lVar8 = (lVar8 >> 3) * -0x5555555555555555;
            plVar13 = *(long **)(lVar12 + 0x1b0);
            do {
              lVar10 = *plVar13;
              if (*(char *)(lVar10 + 0x1c0) == '\x01') {
                lVar10 = *(long *)(lVar10 + 0xc0) - *(long *)(lVar10 + 0x140);
              }
              else {
                lVar10 = 0;
              }
              lVar15 = lVar10 + lVar15;
              lVar8 = lVar8 + -1;
              plVar13 = plVar13 + 3;
            } while (lVar8 != 0);
          }
          __ZNSt3__15mutex6unlockEv(lVar12 + 0x148);
          uVar6 = *(ulong *)(lVar12 + 0x210);
          while ((uVar6 < (ulong)(lVar15 + lVar14) && (*(int *)(lVar12 + 0x218) != 0))) {
            lStack_78 = 1000;
            __ZNSt3__111this_thread9sleep_forERKNS_6chrono8durationIxNS_5ratioILl1ELl1000000000EEEEE
                      (&lStack_78);
            uVar6 = *(ulong *)(lVar12 + 0x210);
          }
        }
        FUN_10ad6c4c8(*(undefined8 *)(lVar9 + 0x10));
        lVar9 = *(long *)(*param_1 + 0x180);
        if (lVar9 != 0) {
          puVar7 = (undefined8 *)(*param_1 + 0x10);
          lVar12 = 0x10;
          do {
            if (lVar12 == 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10ad680f4);
              (*pcVar3)();
            }
            if ((undefined *)puVar7[-2] == &UNK_10e5109e5) {
              plVar13 = (long *)*puVar7;
              if (plVar13 != (long *)0x0) {
                lVar9 = puVar7[-1];
                plVar11 = plVar13 + 1;
                do {
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                  if (bVar2) {
                    *plVar11 = *plVar11 + 1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                plVar4 = plVar13 + 2;
                do {
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                  if (bVar2) {
                    *plVar4 = *plVar4 + 1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                do {
                  lVar12 = *plVar11;
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                  if (bVar2) {
                    *plVar11 = lVar12 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                if (lVar12 == 0) {
                  (**(code **)(*plVar13 + 0x10))(plVar13);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
                }
                plVar4 = plVar13;
                __ZNSt3__119__shared_weak_count4lockEv();
                plStack_58 = plVar4;
                if (plVar4 == (long *)0x0) {
                  plVar11 = (long *)0x0;
                }
                else {
                  lStack_60 = lVar9;
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
                  if (lVar9 == 0) {
LAB_10ad680b4:
                    plVar11 = (long *)0x0;
                  }
                  else {
                    lStack_78 = 0;
                    plStack_70 = (long *)0x0;
                    lStack_68 = 0;
                    __ZNSt3__15mutex4lockEv(lVar9 + 0x18);
                    if ((*(byte *)(lVar9 + 0xa0) & 1) == 0) {
                      __ZNSt3__15mutex6unlockEv(lVar9 + 0x18);
                      goto LAB_10ad680b4;
                    }
                    _fflush(*(undefined8 *)(lVar9 + 0x58));
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                              (&lStack_78,lVar9);
                    __ZNSt3__15mutex6unlockEv(lVar9 + 0x18);
                    plVar11 = &lStack_78;
                    FUN_10ad01348(plVar11,param_2);
                    if (lStack_68 < 0) {
                      __ZdlPv(lStack_78);
                    }
                  }
                  plVar13 = plVar4 + 1;
                  do {
                    lVar9 = *plVar13;
                    cVar1 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                    if (bVar2) {
                      *plVar13 = lVar9 + -1;
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                  plVar13 = plStack_48;
                  if (lVar9 != 0) goto joined_r0x00010ad67f18;
                  (**(code **)(*plVar4 + 0x10))(plVar4);
                  plVar13 = plVar4;
                }
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
                plVar13 = plStack_48;
                goto joined_r0x00010ad67f18;
              }
              break;
            }
            puVar7 = puVar7 + 3;
            lVar12 = lVar12 + -1;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
        plVar11 = (long *)0x0;
        plVar13 = plStack_48;
      }
joined_r0x00010ad67f18:
      if (plVar13 == (long *)0x0) {
        return plVar11;
      }
      plVar4 = plVar13 + 1;
      do {
        lVar9 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar9 != 0) {
        return plVar11;
      }
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      return plVar11;
    }
  }
  return (long *)0x0;
}



/* Entry: 10ad68140; end: 10ad6816b;  */

uint FUN_10ad68140(ulong param_1)

{
  FUN_10a0ee554();
  return (uint)((uint)param_1 < 0x2b) & (uint)(0x7fa00000000 >> (param_1 & 0x3f));
}



/* Entry: 10ad6816c; end: 10ad6a367;  */

/* WARNING: Removing unreachable block (ram,0x00010ad684b4) */
/* WARNING: Removing unreachable block (ram,0x00010ad68d98) */
/* WARNING: Removing unreachable block (ram,0x00010ad68d9c) */
/* WARNING: Removing unreachable block (ram,0x00010ad68da4) */
/* WARNING: Removing unreachable block (ram,0x00010ad68dac) */
/* WARNING: Removing unreachable block (ram,0x00010ad68db0) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long ******* FUN_10ad6816c(long *param_1,undefined8 param_2,ulong *param_3)

{
  undefined *******pppppppuVar1;
  long *plVar2;
  byte *pbVar3;
  byte bVar4;
  ulong uVar5;
  long ******pppppplVar6;
  undefined1 uVar7;
  char cVar8;
  bool bVar9;
  ulong uVar10;
  undefined ******ppppppuVar11;
  int iVar12;
  code *pcVar13;
  undefined *******pppppppuVar14;
  undefined *******pppppppuVar15;
  long *plVar16;
  undefined8 *puVar17;
  ulong *puVar18;
  ulong *puVar19;
  ulong *puVar20;
  long *plVar21;
  long *plVar22;
  undefined8 *puVar23;
  long *******ppppppplVar24;
  undefined8 uVar25;
  long *******ppppppplVar26;
  undefined ********ppppppppuVar27;
  undefined **ppuVar28;
  long *****ppppplVar29;
  long *****ppppplVar30;
  long lVar31;
  long lVar32;
  undefined ******ppppppuVar33;
  ulong uVar34;
  undefined8 *puVar35;
  long *******ppppppplVar36;
  uint uVar37;
  undefined *******pppppppuVar38;
  long ******pppppplVar39;
  ulong uVar40;
  ulong *puVar41;
  long ******pppppplVar42;
  undefined *******pppppppuVar43;
  undefined ********ppppppppuVar44;
  undefined *******pppppppuVar45;
  long *******ppppppplStack_308;
  long *plStack_300;
  byte bStack_2f1;
  undefined *******pppppppuStack_2f0;
  undefined *******pppppppuStack_2e8;
  long *plStack_2e0;
  long *plStack_2d8;
  long *plStack_2d0;
  long *plStack_2c8;
  ulong *puStack_2c0;
  ulong *puStack_2b8;
  undefined8 uStack_2b0;
  long *******ppppppplStack_2a8;
  long *******ppppppplStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 auStack_1f8 [8];
  undefined *******pppppppuStack_1f0;
  undefined *******pppppppuStack_1e8;
  long alStack_1e0 [3];
  long *plStack_1c8;
  undefined ********ppppppppuStack_1c0;
  byte bStack_1b8;
  undefined6 uStack_1b7;
  undefined1 uStack_1b1;
  undefined7 uStack_1b0;
  char cStack_1a9;
  undefined ********ppppppppuStack_1a8;
  ulong *puStack_1a0;
  ulong *puStack_198;
  ulong *puStack_190;
  ulong *puStack_188;
  ulong *puStack_180;
  ulong *puStack_178;
  long lStack_170;
  undefined8 uStack_168;
  ulong **ppuStack_160;
  long *plStack_158;
  long *plStack_150;
  long *plStack_148;
  undefined ********ppppppppuStack_140;
  undefined *******pppppppuStack_138;
  undefined *******pppppppuStack_130;
  undefined ********ppppppppuStack_128;
  ulong *puStack_120;
  undefined7 uStack_118;
  undefined1 uStack_111;
  undefined7 uStack_110;
  undefined1 uStack_109;
  undefined7 uStack_108;
  undefined4 uStack_101;
  undefined1 uStack_fd;
  long alStack_f8 [3];
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  undefined ********ppppppppuStack_c8;
  undefined *******pppppppuStack_c0;
  undefined *******pppppppuStack_b8;
  undefined ********ppppppppuStack_b0;
  long alStack_a8 [3];
  long *plStack_90;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  char cStack_79;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = *param_3;
  uVar40 = param_3[1];
  uStack_238 = 0xf;
  uStack_240 = 4;
  uStack_228 = 0x11;
  uStack_230 = 0x13;
  uStack_218 = 0x14;
  uStack_220 = 0x15;
  uStack_208 = 3;
  uStack_210 = 0xc;
  uStack_278 = 9;
  uStack_280 = 7;
  uStack_268 = 8;
  uStack_270 = 0xb;
  uStack_258 = 0xe;
  uStack_260 = 10;
  uStack_248 = 0x10;
  uStack_250 = 0x12;
  uStack_200 = 0xd;
  uStack_288 = 2;
  uStack_298 = 0;
  uStack_290 = 5;
  ppppppplStack_2a8 = (long *******)0x0;
  ppppppplStack_2a0 = (long *******)0x0;
  FUN_10ad6a4f0(&ppppppplStack_2a8,0,&uStack_280,auStack_1f8,0x11);
  if ((uVar5 & 0xffff00000000) != 0) {
    FUN_10ad6a4f0(&ppppppplStack_2a8,ppppppplStack_2a0,&uStack_288,&uStack_280,1);
  }
  if ((uVar5 >> 0x30 & 1) != 0) {
    FUN_10ad6a4f0(&ppppppplStack_2a8,ppppppplStack_2a0,&uStack_290,&uStack_288,1);
  }
  puStack_2c0 = (ulong *)0x0;
  puStack_2b8 = (ulong *)0x0;
  uStack_2b0 = 0;
  ppppppppuVar27 = (undefined ********)0x1;
  FUN_10ad6a368(&puStack_2c0);
  uVar37 = (uint)uVar40;
  if ((uVar37 >> 1 & 1) != 0) {
    ppppppppuVar27 = (undefined ********)0x4;
    FUN_10ad6a368(&puStack_2c0);
  }
  plStack_2d0 = (long *)0x0;
  plStack_2c8 = (long *)0x0;
  if ((uVar37 >> 2 & 1) != 0) {
    ppppppppuVar27 = (undefined ********)0x2;
    FUN_10ad6a368(&puStack_2c0);
    plStack_2c8 = (long *)param_3[3];
    plStack_2d0 = (long *)param_3[2];
    if (param_3[3] != 0) {
      plVar21 = (long *)(param_3[3] + 8);
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar9) {
          *plVar21 = *plVar21 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
  }
  if ((uVar37 >> 4 & 1) != 0) {
    ppppppppuVar27 = (undefined ********)0x3;
    FUN_10ad6a368(&puStack_2c0);
  }
  plStack_2e0 = (long *)0x0;
  plStack_2d8 = (long *)0x0;
  pppppppuStack_2f0 = (undefined *******)0x0;
  pppppppuStack_2e8 = (undefined *******)0x0;
  plStack_90 = (long *)0x0;
  if ((uVar37 >> 1 & 1) == 0) {
LAB_10ad68a78:
    ppppppplVar26 = ppppppplStack_2a0;
    ppppppplVar24 = ppppppplStack_2a8;
    uVar40 = cntfrq_el0;
    InstructionSynchronizationBarrier();
    ppppppppuVar44 = (undefined ********)cntvct_el0;
    if (uVar40 != 1000000000) {
      uVar34 = 0;
      if (uVar40 != 0) {
        uVar34 = (ulong)ppppppppuVar44 / uVar40;
      }
      uVar10 = 0;
      if (uVar40 != 0) {
        uVar10 = (((long)ppppppppuVar44 - uVar34 * uVar40) * 1000000000) / uVar40;
      }
      ppppppppuVar44 = (undefined ********)(uVar10 + uVar34 * 1000000000);
    }
    uStack_1b7 = 0;
    uStack_1b1 = 0;
    puStack_1a0 = (ulong *)0x0;
    plStack_148 = (long *)0x0;
    plStack_150 = (long *)0x0;
    plStack_158 = (long *)0x0;
    ppuStack_160 = (ulong **)0x0;
    uStack_168 = 0;
    lStack_170 = 0;
    puStack_178 = (ulong *)0x0;
    puStack_180 = (ulong *)0x0;
    puStack_188 = (ulong *)0x0;
    puStack_190 = (ulong *)0x0;
    puStack_198 = (ulong *)0x0;
    bStack_1b8 = 1;
    uStack_1b0 = 0x10000000;
    cStack_1a9 = '\0';
    ppppppppuStack_1a8 = (undefined ********)0x1;
    ppppppppuStack_1c0 = ppppppppuVar44;
    if ((long)ppppppplStack_2a0 - (long)ppppppplStack_2a8 == 0) {
      puStack_198 = (ulong *)0x0;
    }
    else {
      puVar18 = (ulong *)((long)ppppppplStack_2a0 - (long)ppppppplStack_2a8 >> 3);
      if ((ulong)puVar18 >> 0x3d != 0) {
        FUN_10ad6a6f0();
        goto LAB_10ad6a244;
      }
      FUN_10ad6a704();
      puStack_190 = puVar18 + (long)ppppppppuVar27;
      puVar19 = puVar18;
      do {
        ppppppplVar36 = ppppppplVar24 + 1;
        puStack_198 = puVar19 + 1;
        *puVar19 = (ulong)*ppppppplVar24;
        puVar19 = puStack_198;
        ppppppplVar24 = ppppppplVar36;
        puStack_1a0 = puVar18;
      } while (ppppppplVar36 != ppppppplVar26);
    }
    puVar41 = puStack_188;
    puVar19 = puStack_2b8;
    puVar18 = puStack_2c0;
    uVar40 = (long)puStack_2b8 - (long)puStack_2c0;
    if (uVar40 <= (ulong)((long)puStack_178 - (long)puStack_188)) {
      if ((ulong)((long)puStack_180 - (long)puStack_188) < uVar40) {
        puVar18 = (ulong *)(((long)puStack_180 - (long)puStack_188) + (long)puStack_2c0);
        puVar41 = puStack_180;
        if (puStack_180 != puStack_188) {
          _memmove(puStack_188,puStack_2c0);
          puVar41 = puStack_180;
        }
        for (; puVar18 != puVar19; puVar18 = puVar18 + 1) {
          *puVar41 = *puVar18;
          puStack_180 = puStack_180 + 1;
          puVar41 = puVar41 + 1;
        }
      }
      else {
        if (puStack_2b8 != puStack_2c0) {
          _memmove(puStack_188,puStack_2c0,uVar40);
        }
        puStack_180 = (ulong *)((long)puVar41 + uVar40);
      }
LAB_10ad68c58:
      FUN_10ad6cbbc(alStack_1e0,alStack_a8);
      FUN_10ad6cb30(&lStack_170,alStack_1e0);
      plVar21 = plStack_148;
      if (plStack_2c8 != (long *)0x0) {
        plVar16 = plStack_2c8 + 1;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar9) {
            *plVar16 = *plVar16 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      plStack_148 = plStack_2c8;
      plStack_150 = plStack_2d0;
      if (plVar21 != (long *)0x0) {
        plVar16 = plVar21 + 1;
        do {
          lVar31 = *plVar16;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar9) {
            *plVar16 = lVar31 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar31 == 0) {
          (**(code **)(*plVar21 + 0x10))(plVar21);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
        }
      }
      if ((bStack_1b8 & 1) == 0) {
        uVar25 = 0x10;
        ___cxa_allocate_exception(0x10);
        __ZNSt13runtime_errorC1EPKc();
      }
      else {
        if (((ulong)ppppppppuStack_1a8 & 1) != 0) {
          pppppppuStack_138 = (undefined *******)CONCAT17(cStack_1a9,uStack_1b0);
          ppppppppuStack_140 = ppppppppuStack_1c0;
          ppppppppuStack_128 = (undefined ********)0x0;
          pppppppuStack_130 = (undefined *******)0x0;
          uStack_118 = 0;
          puStack_120 = (ulong *)0x0;
          uStack_109 = 0;
          uStack_108 = 0;
          uStack_111 = 0;
          uStack_110 = 0;
          for (puVar18 = puStack_1a0; puStack_198 != puVar18; puVar18 = puVar18 + 1) {
            if (*puVar18 < 0x2f) {
              *(undefined1 *)((long)&pppppppuStack_130 + *puVar18) = 1;
            }
          }
          uStack_fd = 0;
          uStack_101 = 0;
          for (puVar18 = puStack_188; puStack_180 != puVar18; puVar18 = puVar18 + 1) {
            if (*puVar18 < 5) {
              *(undefined1 *)((long)&uStack_101 + *puVar18) = 1;
            }
          }
          FUN_10ad6cbbc(alStack_f8,&lStack_170);
          plStack_d0 = plStack_148;
          plStack_d8 = plStack_150;
          plStack_148 = (long *)0x0;
          plStack_150 = (long *)0x0;
          if (plStack_1c8 == alStack_1e0) {
            lVar31 = 0x20;
LAB_10ad68de8:
            (**(code **)(*plStack_1c8 + lVar31))();
          }
          else if (plStack_1c8 != (long *)0x0) {
            lVar31 = 0x28;
            goto LAB_10ad68de8;
          }
          plVar21 = plStack_148;
          if (plStack_148 != (long *)0x0) {
            plVar16 = plStack_148 + 1;
            do {
              lVar31 = *plVar16;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar9) {
                *plVar16 = lVar31 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (lVar31 == 0) {
              (**(code **)(*plStack_148 + 0x10))(plStack_148);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
            }
          }
          if (plStack_158 == &lStack_170) {
            lVar31 = 0x20;
LAB_10ad68e48:
            (**(code **)(*plStack_158 + lVar31))();
          }
          else if (plStack_158 != (long *)0x0) {
            lVar31 = 0x28;
            goto LAB_10ad68e48;
          }
          if (puStack_188 != (ulong *)0x0) {
            puStack_180 = puStack_188;
            __ZdlPv();
          }
          if (puStack_1a0 != (ulong *)0x0) {
            puStack_198 = puStack_1a0;
            __ZdlPv();
          }
          plVar21 = (long *)0x48;
          __Znwm();
          plVar16 = plVar21 + 1;
          *plVar16 = 0;
          plVar21[2] = 0;
          *plVar21 = (long)&PTR_FUN_110c71598;
          puStack_198 = (ulong *)CONCAT17(uStack_111,uStack_118);
          puStack_188 = (ulong *)CONCAT17((undefined1)uStack_101,uStack_108);
          puStack_190 = (ulong *)CONCAT17(uStack_109,uStack_110);
          puStack_1a0 = puStack_120;
          puStack_180 = (ulong *)CONCAT44(puStack_180._4_4_,CONCAT13(uStack_fd,uStack_101._1_3_));
          bStack_1b8 = (byte)pppppppuStack_138;
          uStack_1b7 = (undefined6)((ulong)pppppppuStack_138 >> 8);
          uStack_1b1 = (undefined1)((ulong)pppppppuStack_138 >> 0x38);
          ppppppppuStack_1c0 = ppppppppuStack_140;
          ppppppppuStack_1a8 = ppppppppuStack_128;
          uStack_1b0 = SUB87(pppppppuStack_130,0);
          cStack_1a9 = (char)((ulong)pppppppuStack_130 >> 0x38);
          FUN_10ad6cbbc(&puStack_178,alStack_f8);
          plStack_150 = plStack_d0;
          plStack_158 = plStack_d8;
          if (plStack_d0 != (long *)0x0) {
            plVar22 = plStack_d0 + 1;
            do {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar22,0x10);
              if (bVar9) {
                *plVar22 = *plVar22 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          puVar18 = (ulong *)(plVar21 + 4);
          *puVar18 = 0;
          ppppppuVar11 = (undefined ******)CONCAT17(uStack_1b1,CONCAT61(uStack_1b7,bStack_1b8));
          plVar21[3] = (long)ppppppuVar11;
          ppppppuVar33 = (undefined ******)(*puVar18 + 0x1f30);
          if (ppppppuVar11 < ppppppuVar33) {
LAB_10ad68f54:
            ppppppplStack_308 = (long *******)0x1f30;
            func_0x0001098c692c(&ppppppplStack_308);
            ___cxa_allocate_exception(8);
            __ZNSt9bad_allocC1Ev();
            ___cxa_throw();
            goto LAB_10ad6a244;
          }
          pppppppuVar15 = (undefined *******)(plVar21 + 3);
          uVar40 = *puVar18;
          while (uVar34 = *puVar18, uVar34 != uVar40) {
            ClearExclusiveLocal();
LAB_10ad68f40:
            ppppppuVar33 = (undefined ******)(uVar34 + 0x1f30);
            uVar40 = uVar34;
            if (*pppppppuVar15 < ppppppuVar33) goto LAB_10ad68f54;
          }
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar9) {
            *puVar18 = (ulong)ppppppuVar33;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 != '\0') goto LAB_10ad68f40;
          plVar22 = (long *)0x1f30;
          __Znwm();
          plVar22[5] = (long)puStack_198;
          plVar22[4] = (long)puStack_1a0;
          plVar22[7] = (long)puStack_188;
          plVar22[6] = (long)puStack_190;
          *(undefined4 *)(plVar22 + 8) = puStack_180._0_4_;
          plVar22[1] = CONCAT17(uStack_1b1,CONCAT61(uStack_1b7,bStack_1b8));
          *plVar22 = (long)ppppppppuStack_1c0;
          plVar22[3] = (long)ppppppppuStack_1a8;
          plVar22[2] = CONCAT17(cStack_1a9,uStack_1b0);
          FUN_10ad6cbbc(plVar22 + 9,&puStack_178);
          plVar22[0xe] = (long)plStack_150;
          plVar22[0xd] = (long)plStack_158;
          if (plStack_150 != (long *)0x0) {
            plVar2 = plStack_150 + 1;
            do {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar9) {
                *plVar2 = *plVar2 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          plVar22[0xf] = (long)pppppppuVar15;
          plVar22[0x10] = 0;
          plVar22[0x11] = 0;
          plVar22[0x12] = 0;
          plVar22[0x14] = (long)pppppppuVar15;
          plVar22[0x15] = 0;
          plVar22[0x16] = 0;
          plVar22[0x17] = 0;
          plVar22[0x19] = (long)pppppppuVar15;
          plVar22[0x1a] = 0;
          plVar22[0x1b] = 0;
          plVar22[0x1c] = 0;
          plVar22[0x1e] = (long)pppppppuVar15;
          plVar22[0x1f] = 0;
          plVar22[0x20] = 0;
          plVar22[0x21] = 0;
          plVar22[0x23] = (long)pppppppuVar15;
          plVar22[0x24] = 0;
          plVar22[0x25] = 0;
          plVar22[0x26] = 0;
          plVar22[0x28] = (long)pppppppuVar15;
          plVar22[0x29] = 0x32aaaba7;
          plVar22[0x2b] = 0;
          plVar22[0x2a] = 0;
          plVar22[0x2d] = 0;
          plVar22[0x2c] = 0;
          plVar22[0x2f] = 0;
          plVar22[0x2e] = 0;
          plVar22[0x31] = 0;
          plVar22[0x30] = 0;
          plVar22[0x33] = 0;
          plVar22[0x32] = 0;
          plVar22[0x35] = (long)pppppppuVar15;
          plVar22[0x36] = 0;
          plVar22[0x37] = 0;
          plVar22[0x38] = 0;
          plVar22[0x3a] = (long)pppppppuVar15;
          plVar22[0x3b] = 0;
          plVar22[0x3c] = 0;
          plVar22[0x3d] = 0;
          plVar22[0x3f] = (long)pppppppuVar15;
          plVar22[0x40] = 0;
          *(undefined4 *)((long)plVar22 + 0x207) = 0;
          *(byte *)((long)plVar22 + 0x20b) =
               *(byte *)((long)plVar22 + 0x42) | *(byte *)((long)plVar22 + 0x43);
          plVar22[0x42] = 0;
          *(undefined4 *)(plVar22 + 0x43) = 0;
          lVar32 = *plVar22;
          lVar31 = -0x1c00;
          plVar22[0x44] = lVar32;
          do {
            *(undefined8 *)((long)plVar22 + lVar31 + 0x1e28) = 0x32aaaba7;
            *(undefined8 *)((long)plVar22 + lVar31 + 0x1e38) = 0;
            *(undefined8 *)((long)plVar22 + lVar31 + 0x1e30) = 0;
            *(undefined8 *)((long)plVar22 + lVar31 + 0x1e48) = 0;
            *(undefined8 *)((long)plVar22 + lVar31 + 0x1e40) = 0;
            *(undefined8 *)((long)plVar22 + lVar31 + 0x1e58) = 0;
            *(undefined8 *)((long)plVar22 + lVar31 + 0x1e50) = 0;
            *(undefined8 *)((long)plVar22 + lVar31 + 0x1e68) = 0;
            *(undefined8 *)((long)plVar22 + lVar31 + 0x1e60) = 0;
            *(undefined8 *)((long)plVar22 + lVar31 + 0x1e78) = 0;
            *(undefined8 *)((long)plVar22 + lVar31 + 0x1e70) = 0;
            *(undefined8 *)((long)plVar22 + lVar31 + 0x1e80) = 0;
            *(undefined8 *)((long)plVar22 + lVar31 + 0x1e90) = 0;
            *(undefined8 *)((long)plVar22 + lVar31 + 0x1e88) = 0xffffffffffffffff;
            *(undefined8 *)((long)plVar22 + lVar31 + 0x1ea0) = 0;
            *(undefined8 *)((long)plVar22 + lVar31 + 0x1e98) = 0xffffffffffffffff;
            lVar31 = lVar31 + 0x80;
          } while (lVar31 != 0);
          plVar22[0x3c5] = lVar32;
          plVar22[0x3c6] = lVar32 / 1000;
          plVar22[0x3c8] = (long)pppppppuVar15;
          plVar22[0x3c9] = 0;
          plVar22[0x3cb] = 0;
          plVar22[0x3ca] = 0;
          plVar22[0x3cd] = (long)pppppppuVar15;
          plVar22[0x3cf] = 0;
          plVar22[0x3d1] = (long)pppppppuVar15;
          plVar22[0x3d2] = 0;
          plVar22[0x3ce] = (long)(plVar22 + 0x3cf);
          plVar22[0x3d4] = 0;
          plVar22[0x3d6] = (long)pppppppuVar15;
          plVar22[0x3d7] = 0;
          plVar22[0x3d3] = (long)(plVar22 + 0x3d4);
          plVar22[0x3d8] = (long)(plVar22 + 0x3e1);
          plVar22[0x3db] = 0;
          plVar22[0x3da] = 0;
          plVar22[0x3d9] = (long)(plVar22 + 0x3da);
          plVar22[0x3dd] = 0;
          plVar22[0x3dc] = 0;
          plVar22[0x3c7] = (lVar32 / 1000) * 1000;
          do {
            iVar12 = iRam0000000113307918;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(0x113307918,0x10);
            if (bVar9) {
              cVar8 = ExclusiveMonitorsStatus();
              iRam0000000113307918 = iRam0000000113307918 + 1;
            }
          } while (cVar8 != '\0');
          *(int *)(plVar22 + 0x3de) = iVar12;
          *(undefined4 *)((long)plVar22 + 0x1ef4) = 1;
          plVar22[0x3e0] = 0;
          plVar22[0x3df] = 0;
          plVar22[0x3e2] = 0;
          plVar22[0x3e4] = (long)pppppppuVar15;
          plVar22[0x3e5] = 0;
          plVar22[0x3e1] = (long)(plVar22 + 0x3e2);
          plVar21[5] = (long)plVar22;
          plVar21[7] = (long)pppppppuVar15;
          *(undefined1 *)(plVar21 + 8) = 0;
          func_0x00010ae02fb8(0,pppppppuVar15);
          func_0x00010ae02ef0();
          ppuVar28 = &PTR_PTR_113307990;
          FUN_10ae079a0();
          func_0x00010ae02fc8();
          func_0x00010ae02f00();
          FUN_10ae07cd4(ppuVar28,&PTR_PTR_113307990);
          plVar22 = plStack_150;
          if (plStack_150 != (long *)0x0) {
            plVar2 = plStack_150 + 1;
            do {
              lVar31 = *plVar2;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar9) {
                *plVar2 = lVar31 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (lVar31 == 0) {
              (**(code **)(*plStack_150 + 0x10))(plStack_150);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
            }
          }
          if (ppuStack_160 == &puStack_178) {
            lVar31 = 0x20;
LAB_10ad69224:
            (**(code **)((long)*ppuStack_160 + lVar31))();
          }
          else if (ppuStack_160 != (ulong **)0x0) {
            lVar31 = 0x28;
            goto LAB_10ad69224;
          }
          puVar23 = (undefined8 *)0x1a0;
          ppppppppuStack_c8 = (undefined ********)pppppppuVar15;
          pppppppuStack_c0 = (undefined *******)plVar21;
          __Znwm();
          puVar23[1] = 0;
          puVar23[2] = 0;
          *puVar23 = &PTR_FUN_110c715e8;
          puVar17 = puVar23 + 3;
          puVar23[5] = 0;
          puVar23[4] = 0;
          puVar23[7] = 0;
          puVar23[6] = 0;
          puVar23[9] = 0;
          puVar23[8] = 0;
          puVar23[0xb] = 0;
          puVar23[10] = 0;
          puVar23[0xd] = 0;
          puVar23[0xc] = 0;
          puVar23[0xf] = 0;
          puVar23[0xe] = 0;
          puVar23[0x11] = 0;
          puVar23[0x10] = 0;
          puVar23[0x13] = 0;
          puVar23[0x12] = 0;
          puVar23[0x15] = 0;
          puVar23[0x14] = 0;
          puVar23[0x17] = 0;
          puVar23[0x16] = 0;
          puVar23[0x19] = 0;
          puVar23[0x18] = 0;
          puVar23[0x1b] = 0;
          puVar23[0x1a] = 0;
          puVar23[0x1d] = 0;
          puVar23[0x1c] = 0;
          puVar23[0x1f] = 0;
          puVar23[0x1e] = 0;
          puVar23[0x21] = 0;
          puVar23[0x20] = 0;
          puVar23[0x23] = 0;
          puVar23[0x22] = 0;
          puVar23[0x25] = 0;
          puVar23[0x24] = 0;
          puVar23[0x27] = 0;
          puVar23[0x26] = 0;
          puVar23[0x29] = 0;
          puVar23[0x28] = 0;
          puVar23[0x2b] = 0;
          puVar23[0x2a] = 0;
          puVar23[0x2d] = 0;
          puVar23[0x2c] = 0;
          puVar23[0x2f] = 0;
          puVar23[0x2e] = 0;
          puVar23[0x31] = 0;
          puVar23[0x30] = 0;
          puVar23[0x33] = 0;
          puVar23[0x32] = 0;
          *param_1 = (long)puVar17;
          param_1[1] = (long)puVar23;
          ppppppppuStack_1c0 = (undefined ********)&UNK_10e49942a;
          bStack_1b8 = (byte)pppppppuVar15;
          uStack_1b7 = (undefined6)((ulong)pppppppuVar15 >> 8);
          uStack_1b1 = (undefined1)((ulong)pppppppuVar15 >> 0x38);
          uStack_1b0 = SUB87(plVar21,0);
          cStack_1a9 = (char)((ulong)plVar21 >> 0x38);
          do {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar9) {
              *plVar16 = *plVar16 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          *puVar17 = &UNK_10e49942a;
          FUN_10a286fec(puVar23 + 4,&bStack_1b8);
          plVar21 = (long *)CONCAT17(cStack_1a9,uStack_1b0);
          if (plVar21 != (long *)0x0) {
            plVar16 = plVar21 + 1;
            do {
              lVar31 = *plVar16;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar9) {
                *plVar16 = lVar31 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (lVar31 == 0) {
              (**(code **)(*plVar21 + 0x10))(plVar21);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
            }
          }
          puVar23[0x33] = puVar23[0x33] + 1;
          func_0x00010a152370(&ppppppppuStack_1c0,puVar17);
          pppppppuVar15 = (undefined *******)CONCAT17(uStack_1b1,CONCAT61(uStack_1b7,bStack_1b8));
          if (pppppppuVar15 == (undefined *******)0x0) {
            ppppppppuStack_c8 = (undefined ********)0x0;
          }
          else {
            __ZNSt3__119__shared_weak_count4lockEv();
            ppppppppuStack_c8 = (undefined ********)0x0;
            if (pppppppuVar15 != (undefined *******)0x0) {
              ppppppppuStack_c8 = ppppppppuStack_1c0;
            }
          }
          pppppppuVar14 = pppppppuStack_c0;
          if (pppppppuStack_c0 != (undefined *******)0x0) {
            plVar21 = (long *)(pppppppuStack_c0 + 1);
            do {
              lVar31 = *plVar21;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar21,0x10);
              if (bVar9) {
                *plVar21 = lVar31 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (lVar31 == 0) {
              lVar31 = (long)*pppppppuStack_c0;
              pppppppuStack_c0 = pppppppuVar15;
              (**(code **)(lVar31 + 0x10))(pppppppuVar14);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar14);
              pppppppuVar15 = pppppppuStack_c0;
            }
          }
          pppppppuStack_c0 = pppppppuVar15;
          if (CONCAT17(uStack_1b1,CONCAT61(uStack_1b7,bStack_1b8)) != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          pppppppuVar15 = ppppppppuStack_c8[2];
          pbVar3 = (byte *)((long)pppppppuVar15 + 0x209);
          do {
            bVar4 = *pbVar3;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(pbVar3,0x10);
            if (bVar9) {
              *pbVar3 = 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if ((bVar4 & 1) == 0) {
            func_0x00010ae02ecc(0,*(undefined1 *)(pppppppuVar15 + 8));
            func_0x00010ae02ecc();
            func_0x00010ae02ecc();
            func_0x00010ae02ecc();
            func_0x00010ae02ecc();
            func_0x00010ae02ecc();
            ppuVar28 = &PTR_PTR_113307a20;
            FUN_10ae079a0();
            func_0x00010ae02edc();
            func_0x00010ae02edc();
            func_0x00010ae02edc();
            func_0x00010ae02edc();
            func_0x00010ae02edc();
            func_0x00010ae02edc();
            FUN_10ae07cd4(ppuVar28,&PTR_PTR_113307a20);
            if (*(char *)((long)pppppppuVar15 + 0x20b) == '\x01') {
              if (pppppppuVar15[0x40] != (undefined ******)0x0) {
                ppuVar28 = &PTR_PTR_1133079d8;
                FUN_10ae079a0(0,&PTR_PTR_1133079d8);
                FUN_10ae07cd4(ppuVar28,&PTR_PTR_1133079d8);
              }
              pppppppuVar14 = (undefined *******)0x8;
              __Znwm();
              __ZNSt3__115__thread_structC1Ev();
              ppppppppuVar27 = (undefined ********)0x10;
              __Znwm();
              *ppppppppuVar27 = pppppppuVar14;
              ppppppppuVar27[1] = pppppppuVar15;
              ppppppplVar24 = (long *******)&ppppppplStack_308;
              ppppplVar29 = (long *****)0x0;
              ppppppppuStack_1c0 = ppppppppuVar27;
              _pthread_create(ppppppplVar24,0,FUN_10ad6d444,ppppppppuVar27);
              if ((int)ppppppplVar24 != 0) {
                __ZNSt3__120__throw_system_errorEiPKc();
                goto LAB_10ad6a244;
              }
              if (pppppppuVar15[0x40] == (undefined ******)0x0) {
                pppppppuVar15[0x40] = (undefined ******)ppppppplStack_308;
                ppppppplStack_308 = (long *******)0x0;
                __ZNSt3__16threadD1Ev(&ppppppplStack_308);
                goto LAB_10ad694b4;
              }
              __ZSt9terminatev();
              __ZNSt3__15mutex6unlockEv(pppppppuVar14);
              func_0x00010ad6c470(&pppppppuStack_1f0);
              if ((char)bStack_2f1 < '\0') {
                __ZdlPv(ppppppplStack_308);
              }
              if (plStack_90 == alStack_a8) {
                lVar31 = 0x20;
LAB_10ad6a324:
                (**(code **)(*plStack_90 + lVar31))();
              }
              else if (plStack_90 != (long *)0x0) {
                lVar31 = 0x28;
                goto LAB_10ad6a324;
              }
              func_0x00010ad6c470(&pppppppuStack_2f0);
              func_0x00010a5c9f8c(&plStack_2e0);
              func_0x00010a1331b4(&plStack_2d0);
              if (puStack_2c0 != (ulong *)0x0) {
                __ZdlPv();
              }
              if (ppppppplStack_2a8 != (long *******)0x0) {
                __ZdlPv();
              }
              __Unwind_Resume();
              pppppplVar6 = ppppppplVar24[1];
              if (pppppplVar6 < ppppppplVar24[2]) {
                pppppplVar42 = pppppplVar6 + 1;
                *pppppplVar6 = ppppplVar29;
                ppppppplVar26 = ppppppplVar24;
LAB_10ad6a40c:
                ppppppplVar24[1] = pppppplVar42;
                return ppppppplVar26;
              }
              lVar31 = (long)pppppplVar6 - (long)*ppppppplVar24;
              uVar5 = (lVar31 >> 3) + 1;
              if (uVar5 >> 0x3d == 0) {
                uVar34 = (long)ppppppplVar24[2] - (long)*ppppppplVar24;
                uVar40 = (long)uVar34 >> 2;
                if (uVar40 <= uVar5) {
                  uVar40 = uVar5;
                }
                if (0x7ffffffffffffff7 < uVar34) {
                  uVar40 = 0x1fffffffffffffff;
                }
                ppppplVar30 = ppppplVar29;
                FUN_10ad6a74c();
                pppppplVar6 = *ppppppplVar24;
                puVar17 = (undefined8 *)(uVar40 + lVar31);
                pppppplVar39 = (long ******)
                               ((long)puVar17 - ((long)ppppppplVar24[1] - (long)pppppplVar6));
                pppppplVar42 = (long ******)(puVar17 + 1);
                *puVar17 = ppppplVar29;
                _memcpy(pppppplVar39,pppppplVar6);
                ppppppplVar26 = (long *******)*ppppppplVar24;
                *ppppppplVar24 = pppppplVar39;
                ppppppplVar24[1] = pppppplVar42;
                ppppppplVar24[2] = (long ******)(uVar40 + (long)ppppplVar30 * 8);
                if (ppppppplVar26 != (long *******)0x0) {
                  __ZdlPv();
                }
                goto LAB_10ad6a40c;
              }
              FUN_10ad6a738();
              func_0x00010a1331b4(ppppppplVar24 + 0xe);
              ppppppplVar26 = (long *******)ppppppplVar24[0xd];
              if (ppppppplVar26 == ppppppplVar24 + 10) {
                lVar31 = 0x20;
              }
              else {
                if (ppppppplVar26 == (long *******)0x0) goto LAB_10ad6a46c;
                lVar31 = 0x28;
              }
              (**(code **)((long)*ppppppplVar26 + lVar31))();
LAB_10ad6a46c:
              if (ppppppplVar24[7] != (long ******)0x0) {
                ppppppplVar24[8] = ppppppplVar24[7];
                __ZdlPv();
              }
              if (ppppppplVar24[4] != (long ******)0x0) {
                ppppppplVar24[5] = ppppppplVar24[4];
                __ZdlPv();
              }
              return ppppppplVar24;
            }
          }
LAB_10ad694b4:
          if (plStack_2e0 != (long *)0x0) {
            lVar31 = plStack_2e0[4];
            *(undefined *********)(lVar31 + 0x130) = ppppppppuVar44;
            FUN_10ad6ba00();
            *(undefined4 *)(lVar31 + 0x30) = 1;
            *(uint *)(lVar31 + 0x10) = *(uint *)(lVar31 + 0x10) | 10;
            uVar40 = *(ulong *)(lVar31 + 0x20);
            if (uVar40 == 0) {
              uVar40 = *(ulong *)(lVar31 + 8);
              if ((uVar40 & 1) != 0) {
                uVar40 = *(ulong *)(uVar40 & 0xfffffffffffffffe);
              }
              func_0x0001098e1538();
              *(ulong *)(lVar31 + 0x20) = uVar40;
            }
            *(undefined4 *)(uVar40 + 0x20) = 0x40;
            *(uint *)(uVar40 + 0x10) = *(uint *)(uVar40 + 0x10) | 2;
            if (*(int *)(lVar31 + 0x44) == 6) {
              uVar40 = *(ulong *)(lVar31 + 0x38);
            }
            else {
              func_0x0001098e0864(lVar31);
              *(undefined4 *)(lVar31 + 0x44) = 6;
              uVar40 = *(ulong *)(lVar31 + 8);
              if ((uVar40 & 1) != 0) {
                uVar40 = *(ulong *)(uVar40 & 0xfffffffffffffffe);
              }
              func_0x0001098e15a0();
              *(ulong *)(lVar31 + 0x38) = uVar40;
            }
            lVar31 = uVar40 + 0x10;
            func_0x000107c303b0(lVar31,&UNK_1098e147c);
            *(undefined4 *)(lVar31 + 0x20) = 6;
            *(undefined8 *)(lVar31 + 0x18) = 0;
            *(uint *)(lVar31 + 0x10) = *(uint *)(lVar31 + 0x10) | 3;
            lVar31 = uVar40 + 0x10;
            func_0x000107c303b0(lVar31,&UNK_1098e147c);
            *(undefined4 *)(lVar31 + 0x20) = 3;
            *(undefined8 *)(lVar31 + 0x18) = 0;
            *(uint *)(lVar31 + 0x10) = *(uint *)(lVar31 + 0x10) | 3;
            lVar31 = uVar40 + 0x10;
            func_0x000107c303b0(lVar31,&UNK_1098e147c);
            *(undefined4 *)(lVar31 + 0x20) = 0x40;
            *(undefined8 *)(lVar31 + 0x18) = 0;
            *(undefined1 *)(lVar31 + 0x24) = 0;
            *(undefined8 *)(lVar31 + 0x28) = 1;
            *(uint *)(lVar31 + 0x10) = *(uint *)(lVar31 + 0x10) | 0xf;
            lVar31 = *param_1;
            uVar40 = *(ulong *)(lVar31 + 0x180);
            if (uVar40 != 0) {
              puVar17 = (undefined8 *)(lVar31 + 0x10);
              lVar32 = 0x10;
LAB_10ad695ec:
              if (lVar32 == 0) goto LAB_10ad6a244;
              if ((undefined *)puVar17[-2] != &UNK_10e4ce7af) goto code_r0x00010ad695fc;
              if (plStack_2d8 != (long *)0x0) {
                plVar21 = plStack_2d8 + 1;
                do {
                  cVar8 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                  if (bVar9) {
                    *plVar21 = *plVar21 + 1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
              }
              plVar21 = (long *)*puVar17;
              puVar17[-1] = plStack_2e0;
              *puVar17 = plStack_2d8;
              if (plVar21 != (long *)0x0) {
                plVar16 = plVar21 + 1;
                do {
                  lVar31 = *plVar16;
                  cVar8 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                  if (bVar9) {
                    *plVar16 = lVar31 + -1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
                if (lVar31 == 0) {
                  (**(code **)(*plVar21 + 0x10))(plVar21);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
                }
              }
              goto LAB_10ad696a0;
            }
LAB_10ad69618:
            ppppppppuStack_1c0 = (undefined ********)&UNK_10e4ce7af;
            bStack_1b8 = (byte)plStack_2e0;
            uStack_1b7 = (undefined6)((ulong)plStack_2e0 >> 8);
            uStack_1b1 = (undefined1)((ulong)plStack_2e0 >> 0x38);
            uStack_1b0 = SUB87(plStack_2d8,0);
            cStack_1a9 = (char)((ulong)plStack_2d8 >> 0x38);
            if (plStack_2d8 != (long *)0x0) {
              plVar21 = plStack_2d8 + 1;
              do {
                cVar8 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                if (bVar9) {
                  *plVar21 = *plVar21 + 1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              uVar40 = *(ulong *)(lVar31 + 0x180);
              if (0xf < uVar40) goto LAB_10ad6a244;
            }
            puVar17 = (undefined8 *)(lVar31 + uVar40 * 0x18);
            *puVar17 = &UNK_10e4ce7af;
            FUN_10a286fec(puVar17 + 1,&bStack_1b8);
            plVar21 = (long *)CONCAT17(cStack_1a9,uStack_1b0);
            if (plVar21 != (long *)0x0) {
              plVar16 = plVar21 + 1;
              do {
                lVar32 = *plVar16;
                cVar8 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                if (bVar9) {
                  *plVar16 = lVar32 + -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (lVar32 == 0) {
                (**(code **)(*plVar21 + 0x10))(plVar21);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
              }
            }
            *(long *)(lVar31 + 0x180) = *(long *)(lVar31 + 0x180) + 1;
          }
          goto LAB_10ad696a0;
        }
        uVar25 = 0x10;
        ___cxa_allocate_exception(0x10);
        __ZNSt13runtime_errorC1EPKc();
      }
      ___cxa_throw(uVar25,PTR___ZTISt13runtime_error_110346a40,
                   PTR___ZNSt13runtime_errorD1Ev_1103461d8);
      goto LAB_10ad6a244;
    }
    puVar41 = (ulong *)((long)uVar40 >> 3);
    if (puStack_188 != (ulong *)0x0) {
      puStack_180 = puStack_188;
      __ZdlPv(puStack_188);
      puStack_188 = (ulong *)0x0;
      puStack_180 = (ulong *)0x0;
      puStack_178 = (ulong *)0x0;
    }
    if ((ulong)puVar41 >> 0x3d == 0) {
      puVar20 = (ulong *)((long)puStack_178 >> 2);
      if ((ulong *)((long)puStack_178 >> 2) <= puVar41) {
        puVar20 = puVar41;
      }
      if ((ulong *)0x7ffffffffffffff7 < puStack_178) {
        puVar20 = (ulong *)0x1fffffffffffffff;
      }
      if ((ulong)puVar20 >> 0x3d == 0) {
        FUN_10ad6a74c();
        puStack_178 = puVar20 + (long)ppppppppuVar27;
        puVar41 = puVar20;
        puStack_180 = puVar20;
        for (; puStack_188 = puVar20, puVar18 != puVar19; puVar18 = puVar18 + 1) {
          *puVar41 = *puVar18;
          puStack_180 = puStack_180 + 1;
          puVar41 = puVar41 + 1;
        }
        goto LAB_10ad68c58;
      }
    }
  }
  else {
    param_3 = param_3 + 4;
    FUN_10ad00f3c(&ppppppplStack_308,param_3);
    plVar21 = plStack_300;
    if (-1 < (char)bStack_2f1) {
      plVar21 = (long *)(ulong)bStack_2f1;
    }
    if (plVar21 == (long *)0x0) {
      func_0x00010ad031c0();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (&ppppppplStack_308,param_3);
    }
    pppppppuVar14 = (undefined *******)0xc0;
    __Znwm();
    pppppppuVar45 = pppppppuVar14 + 1;
    *pppppppuVar45 = (undefined ******)0x0;
    pppppppuVar14[2] = (undefined ******)0x0;
    *pppppppuVar14 = (undefined ******)&PTR_FUN_110c71028;
    pppppppuVar43 = pppppppuVar14 + 3;
    pppppppuVar14[4] = (undefined ******)0x0;
    *pppppppuVar43 = (undefined ******)0x0;
    pppppppuVar14[6] = (undefined ******)0x0;
    pppppppuVar14[5] = (undefined ******)0x0;
    pppppppuVar38 = pppppppuVar14 + 6;
    *pppppppuVar38 = (undefined ******)0x32aaaba7;
    pppppppuVar14[0xe] = (undefined ******)0x0;
    pppppppuVar14[0xd] = (undefined ******)0x0;
    pppppppuVar14[0xc] = (undefined ******)0x0;
    pppppppuVar14[0xb] = (undefined ******)0x0;
    pppppppuVar14[0x10] = (undefined ******)0x0;
    pppppppuVar14[0xf] = (undefined ******)0x0;
    pppppppuVar14[0x12] = (undefined ******)0x0;
    pppppppuVar14[0x11] = (undefined ******)0x0;
    pppppppuVar14[0x14] = (undefined ******)0x0;
    pppppppuVar14[0x13] = (undefined ******)0x0;
    pppppppuVar14[0x16] = (undefined ******)0x0;
    pppppppuVar14[0x15] = (undefined ******)0x0;
    pppppppuVar14[0x17] = (undefined ******)0x0;
    pppppppuVar14[10] = (undefined ******)0x0;
    pppppppuVar14[9] = (undefined ******)0x0;
    pppppppuVar14[8] = (undefined ******)0x0;
    pppppppuVar14[7] = (undefined ******)0x0;
    *(undefined8 *)((long)pppppppuVar14 + 0x69) = 0;
    *(undefined8 *)((long)pppppppuVar14 + 0x61) = 0;
    pppppppuVar15 = pppppppuVar14;
    pppppppuStack_1f0 = pppppppuVar43;
    pppppppuStack_1e8 = pppppppuVar14;
    __ZNSt3__16chrono12steady_clock3nowEv();
    plVar21 = plStack_300;
    if (-1 < (char)bStack_2f1) {
      plVar21 = (long *)(ulong)bStack_2f1;
    }
    FUN_10a003c90(&ppppppppuStack_140,(long)plVar21 + 0xf,&ppppppppuStack_c8);
    ppppppppuVar27 = ppppppppuStack_140;
    if (-1 < (long)pppppppuStack_130) {
      ppppppppuVar27 = (undefined ********)&ppppppppuStack_140;
    }
    if (plVar21 != (long *)0x0) {
      ppppppplVar24 = ppppppplStack_308;
      if (-1 < (char)bStack_2f1) {
        ppppppplVar24 = (long *******)&ppppppplStack_308;
      }
      _memmove(ppppppppuVar27,ppppppplVar24,plVar21);
    }
    puVar17 = (undefined8 *)((long)ppppppppuVar27 + (long)plVar21);
    *puVar17 = 0x747465667265702f;
    *(undefined8 *)((long)puVar17 + 7) = 0x5f6b6e69735f6f74;
    *(undefined1 *)((long)puVar17 + 0xf) = 0;
    __ZNSt3__19to_stringEx(&ppppppppuStack_c8,pppppppuVar15);
    pppppppuVar15 = pppppppuStack_c0;
    ppppppppuVar27 = ppppppppuStack_c8;
    if (-1 < (long)pppppppuStack_b8) {
      pppppppuVar15 = (undefined *******)((ulong)pppppppuStack_b8 >> 0x38);
      ppppppppuVar27 = (undefined ********)&ppppppppuStack_c8;
    }
    ppppppppuVar44 = (undefined ********)&ppppppppuStack_140;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (ppppppppuVar44,ppppppppuVar27,pppppppuVar15);
    pppppppuVar15 = ppppppppuVar44[1];
    ppppppppuStack_1c0 = (undefined ********)*ppppppppuVar44;
    uStack_1b0 = SUB87(ppppppppuVar44[2],0);
    cStack_1a9 = (char)((ulong)ppppppppuVar44[2] >> 0x38);
    bStack_1b8 = (byte)pppppppuVar15;
    uStack_1b7 = (undefined6)((ulong)pppppppuVar15 >> 8);
    uStack_1b1 = (undefined1)((ulong)pppppppuVar15 >> 0x38);
    ppppppppuVar44[1] = (undefined *******)0x0;
    ppppppppuVar44[2] = (undefined *******)0x0;
    *ppppppppuVar44 = (undefined *******)0x0;
    ppppppppuVar27 = (undefined ********)&ppppppppuStack_1c0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (ppppppppuVar27,&UNK_10f6a9148,4);
    pppppppuVar15 = *ppppppppuVar27;
    uStack_88 = SUB87(ppppppppuVar27[1],0);
    uStack_81 = (undefined1)*(undefined8 *)((long)ppppppppuVar27 + 0xf);
    uStack_80 = (undefined7)((ulong)*(undefined8 *)((long)ppppppppuVar27 + 0xf) >> 8);
    uVar7 = *(undefined1 *)((long)ppppppppuVar27 + 0x17);
    ppppppppuVar27[1] = (undefined *******)0x0;
    ppppppppuVar27[2] = (undefined *******)0x0;
    *ppppppppuVar27 = (undefined *******)0x0;
    if (*(char *)((long)pppppppuVar14 + 0x2f) < '\0') {
      __ZdlPv(*pppppppuVar43);
    }
    pppppppuVar14[4] = (undefined ******)CONCAT17(uStack_81,uStack_88);
    pppppppuVar14[3] = (undefined ******)pppppppuVar15;
    *(ulong *)((long)pppppppuVar14 + 0x27) = CONCAT71(uStack_80,uStack_81);
    *(undefined1 *)((long)pppppppuVar14 + 0x2f) = uVar7;
    if (cStack_1a9 < '\0') {
      __ZdlPv(ppppppppuStack_1c0);
    }
    if ((long)pppppppuStack_130 < 0) {
      __ZdlPv(ppppppppuStack_140);
    }
    pppppppuVar15 = pppppppuVar43;
    if (*(char *)((long)pppppppuVar14 + 0x2f) < '\0') {
      pppppppuVar15 = (undefined *******)*pppppppuVar43;
    }
    ppppppppuVar27 = (undefined ********)&UNK_10f6a914d;
    _fopen();
    if (pppppppuVar15 == (undefined *******)0x0) {
      do {
        ppppppuVar33 = *pppppppuVar45;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(pppppppuVar45,0x10);
        if (bVar9) {
          *pppppppuVar45 = (undefined ******)((long)ppppppuVar33 + -1);
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (ppppppuVar33 == (undefined ******)0x0) {
        (*(code *)(*pppppppuVar14)[2])(pppppppuVar14);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar14);
      }
      pppppppuVar14 = (undefined *******)0x0;
      pppppppuVar43 = (undefined *******)0x0;
    }
    else {
      __ZNSt3__15mutex4lockEv(pppppppuVar38);
      if (*(char *)((long)pppppppuVar14 + 0x2f) < '\0') {
        ppppppppuVar27 = (undefined ********)*pppppppuVar43;
        func_0x000107c3192c(&ppppppppuStack_1c0,ppppppppuVar27,pppppppuVar14[4]);
      }
      else {
        ppppppuVar33 = pppppppuVar14[4];
        ppppppppuStack_1c0 = (undefined ********)*pppppppuVar43;
        bStack_1b8 = (byte)ppppppuVar33;
        uStack_1b7 = (undefined6)((ulong)ppppppuVar33 >> 8);
        uStack_1b1 = (undefined1)((ulong)ppppppuVar33 >> 0x38);
        uStack_1b0 = SUB87(pppppppuVar14[5],0);
        cStack_1a9 = (char)((ulong)pppppppuVar14[5] >> 0x38);
      }
      if (*(char *)(pppppppuVar14 + 0x17) == '\x01') {
        FUN_10a09a0e4(pppppppuVar14 + 0xe);
        *(undefined1 *)(pppppppuVar14 + 0x17) = 0;
      }
      pppppppuVar14[0x11] = (undefined ******)ppppppppuStack_1c0;
      pppppppuVar14[0x12] = (undefined ******)CONCAT17(uStack_1b1,CONCAT61(uStack_1b7,bStack_1b8));
      *(ulong *)((long)pppppppuVar14 + 0x97) = CONCAT71(uStack_1b0,uStack_1b1);
      pppppppuVar14[0xe] = (undefined ******)pppppppuVar15;
      pppppppuVar14[0xf] = (undefined ******)FUN_10ad6a804;
      pppppppuVar14[0x10] = (undefined ******)&PTR_FUN_110c71068;
      *(char *)((long)pppppppuVar14 + 0x9f) = cStack_1a9;
      *(undefined1 *)(pppppppuVar14 + 0x17) = 1;
      __ZNSt3__15mutex6unlockEv(pppppppuVar38);
    }
    pppppppuVar15 = pppppppuStack_2e8;
    pppppppuStack_2f0 = pppppppuVar43;
    if (pppppppuStack_2e8 != (undefined *******)0x0) {
      pppppppuVar38 = pppppppuStack_2e8 + 1;
      do {
        ppppppuVar33 = *pppppppuVar38;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(pppppppuVar38,0x10);
        if (bVar9) {
          *pppppppuVar38 = (undefined ******)((long)ppppppuVar33 + -1);
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (ppppppuVar33 == (undefined ******)0x0) {
        ppppppuVar33 = *pppppppuStack_2e8;
        pppppppuStack_2e8 = pppppppuVar14;
        (*(code *)ppppppuVar33[2])(pppppppuVar15);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar15);
        pppppppuVar14 = pppppppuStack_2e8;
      }
    }
    pppppppuStack_2e8 = pppppppuVar14;
    pppppppuVar15 = pppppppuStack_2f0;
    if (pppppppuStack_2f0 == (undefined *******)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      ppppppppuStack_128 = (undefined ********)0x0;
      bStack_1b8 = (byte)pppppppuStack_2f0;
      uStack_1b1 = (undefined1)((ulong)pppppppuStack_2f0 >> 0x38);
      uStack_1b7 = (undefined6)((ulong)pppppppuStack_2f0 >> 8);
      if (pppppppuStack_2e8 == (undefined *******)0x0) {
        uStack_1b0 = 0;
        cStack_1a9 = 0;
        pppppppuStack_130 = (undefined *******)0x0;
LAB_10ad68680:
        ppppppppuStack_1a8 = (undefined ********)&ppppppppuStack_1c0;
        ppppppppuStack_140 = (undefined ********)&PTR_FUN_110c71428;
        ppppppppuStack_1c0 = (undefined ********)&PTR_FUN_110c71428;
        pppppppuStack_138 = pppppppuStack_2f0;
        (*(code *)(undefined *)0x10ad6c6ac)();
        ppppppppuStack_1a8 = ppppppppuStack_128;
      }
      else {
        pppppppuVar14 = pppppppuStack_2e8 + 1;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(pppppppuVar14,0x10);
          if (bVar9) {
            *pppppppuVar14 = (undefined ******)((long)*pppppppuVar14 + 1);
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        ppppppppuStack_1c0 = (undefined ********)&PTR_FUN_110c71428;
        ppppppppuStack_1a8 = (undefined ********)&ppppppppuStack_1c0;
        uStack_1b0 = SUB87(pppppppuStack_2e8,0);
        cStack_1a9 = (char)((ulong)pppppppuStack_2e8 >> 0x38);
        if (&stack0x00000000 != (undefined1 *)0x140) {
          pppppppuStack_130 = pppppppuStack_2e8;
          do {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(pppppppuVar14,0x10);
            if (bVar9) {
              *pppppppuVar14 = (undefined ******)((long)*pppppppuVar14 + 1);
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          goto LAB_10ad68680;
        }
        ppppppppuStack_c8 = (undefined ********)&PTR_FUN_110c71428;
        pppppppuStack_b8 = pppppppuStack_2e8;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(pppppppuVar14,0x10);
          if (bVar9) {
            *pppppppuVar14 = (undefined ******)((long)*pppppppuVar14 + 1);
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        pppppppuStack_c0 = pppppppuStack_2f0;
        (*(code *)(undefined *)0x10ad6c6ac)();
        ppppppppuStack_1a8 = (undefined ********)0x0;
        (*(code *)(*ppppppppuStack_128)[3])(ppppppppuStack_128,0xffffffffffffff80);
        (*(code *)(*ppppppppuStack_128)[4])();
        ppppppppuStack_128 = (undefined ********)0x0;
        ppppppppuStack_1a8 = (undefined ********)0xffffffffffffff80;
        (*(code *)ppppppppuStack_c8[3])(0x78,0);
        (*(code *)ppppppppuStack_c8[4])(0x78);
      }
      ppppppppuStack_128 = (undefined ********)&ppppppppuStack_140;
      if ((undefined *********)ppppppppuStack_1a8 == &ppppppppuStack_1c0) {
        lVar31 = 0x20;
LAB_10ad68744:
        (**(code **)((long)*ppppppppuStack_1a8 + lVar31))();
      }
      else if (ppppppppuStack_1a8 != (undefined ********)0x0) {
        lVar31 = 0x28;
        goto LAB_10ad68744;
      }
      plVar16 = (long *)0x98;
      __Znwm();
      plVar16[1] = 0;
      plVar16[2] = 0;
      *plVar16 = (long)&PTR_DAT_110c714a8;
      plVar21 = plVar16 + 3;
      FUN_10ad6c994(&ppppppppuStack_1c0,&ppppppppuStack_140);
      FUN_10ad6c994(plVar21,&ppppppppuStack_1c0);
      puVar17 = (undefined8 *)0x188;
      __Znwm();
      puVar17[1] = 0;
      puVar17[2] = 0;
      *puVar17 = &PTR_FUN_110c714f8;
      puVar17[3] = 0x32aaaba7;
      puVar17[5] = 0;
      puVar17[4] = 0;
      puVar17[7] = 0;
      puVar17[6] = 0;
      puVar17[9] = 0;
      puVar17[8] = 0;
      puVar17[0xc] = 0;
      puVar17[0xd] = 0;
      puVar17[10] = 0;
      puVar17[0xb] = &PTR_DAT_110b1c0f8;
      puVar17[0xe] = 0;
      puVar17[0xf] = 0;
      *(undefined4 *)(puVar17 + 0x10) = 0;
      puVar17[0x15] = 0;
      puVar17[0x12] = 1;
      puVar17[0x11] = 1;
      puVar17[0x13] = 1;
      puVar17[0x14] = puVar17 + 0x15;
      puVar17[0x18] = 0;
      puVar17[0x16] = 0;
      puVar17[0x17] = puVar17 + 0x18;
      puVar17[0x1c] = 0;
      puVar17[0x19] = 0;
      puVar17[0x1a] = 1;
      puVar17[0x1b] = puVar17 + 0x1c;
      puVar17[0x1f] = 0;
      puVar17[0x1d] = 0;
      puVar17[0x1e] = puVar17 + 0x1f;
      puVar17[0x22] = 0;
      puVar17[0x23] = 0;
      puVar17[0x20] = 0;
      puVar17[0x21] = puVar17 + 0x22;
      puVar17[0x25] = 0;
      puVar17[0x26] = 0;
      puVar17[0x24] = puVar17 + 0x25;
      puVar17[0x28] = 0;
      puVar17[0x27] = 0;
      puVar17[0x2a] = 0;
      puVar17[0x29] = 0;
      puVar17[0x2c] = 0;
      puVar17[0x2b] = 0;
      puVar17[0x2e] = 0;
      puVar17[0x2d] = 0;
      puVar17[0x30] = 0;
      puVar17[0x2f] = 0;
      plVar16[7] = (long)(puVar17 + 3);
      plVar16[8] = (long)puVar17;
      puVar17 = (undefined8 *)0x58;
      __Znwm();
      puVar17[1] = 0;
      puVar17[2] = 0;
      *puVar17 = &PTR_FUN_110c71548;
      puVar17[3] = 0x32aaaba7;
      puVar17[5] = 0;
      puVar17[4] = 0;
      puVar17[7] = 0;
      puVar17[6] = 0;
      puVar17[9] = 0;
      puVar17[8] = 0;
      puVar17[10] = 0;
      plVar16[9] = (long)(puVar17 + 3);
      plVar16[10] = (long)puVar17;
      plVar16[0xb] = 0x32aaaba7;
      plVar16[0xd] = 0;
      plVar16[0xc] = 0;
      plVar16[0xf] = 0;
      plVar16[0xe] = 0;
      plVar16[0x11] = 0;
      plVar16[0x10] = 0;
      plVar16[0x12] = 0;
      if ((undefined *********)ppppppppuStack_1a8 == &ppppppppuStack_1c0) {
        lVar31 = 0x20;
LAB_10ad6889c:
        (**(code **)((long)*ppppppppuStack_1a8 + lVar31))();
      }
      else if (ppppppppuStack_1a8 != (undefined ********)0x0) {
        lVar31 = 0x28;
        goto LAB_10ad6889c;
      }
      plVar22 = plStack_2d8;
      plStack_2e0 = plVar21;
      if (plStack_2d8 != (long *)0x0) {
        plVar21 = plStack_2d8 + 1;
        do {
          lVar31 = *plVar21;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar9) {
            *plVar21 = lVar31 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar31 == 0) {
          lVar31 = *plStack_2d8;
          plStack_2d8 = plVar16;
          (**(code **)(lVar31 + 0x10))(plVar22);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
          plVar16 = plStack_2d8;
        }
      }
      plStack_2d8 = plVar16;
      pppppppuVar14 = (undefined *******)plStack_2e0[4];
      pppppppuVar38 = (undefined *******)plStack_2e0[5];
      if (pppppppuVar38 != (undefined *******)0x0) {
        pppppppuVar43 = pppppppuVar38 + 1;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(pppppppuVar43,0x10);
          if (bVar9) {
            *pppppppuVar43 = (undefined ******)((long)*pppppppuVar43 + 1);
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      pppppppuVar43 = (undefined *******)plStack_2e0[6];
      pppppppuVar45 = (undefined *******)plStack_2e0[7];
      uStack_88 = SUB87(pppppppuVar43,0);
      uStack_81 = (undefined1)((ulong)pppppppuVar43 >> 0x38);
      uStack_80 = SUB87(pppppppuVar45,0);
      cStack_79 = (char)((ulong)pppppppuVar45 >> 0x38);
      if (pppppppuVar45 != (undefined *******)0x0) {
        pppppppuVar1 = pppppppuVar45 + 1;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(pppppppuVar1,0x10);
          if (bVar9) {
            *pppppppuVar1 = (undefined ******)((long)*pppppppuVar1 + 1);
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      bStack_1b8 = (byte)pppppppuVar38;
      uStack_1b7 = (undefined6)((ulong)pppppppuVar38 >> 8);
      uStack_1b1 = (undefined1)((ulong)pppppppuVar38 >> 0x38);
      if (pppppppuVar38 != (undefined *******)0x0) {
        pppppppuVar1 = pppppppuVar38 + 1;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(pppppppuVar1,0x10);
          if (bVar9) {
            *pppppppuVar1 = (undefined ******)((long)*pppppppuVar1 + 1);
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      if (pppppppuVar45 != (undefined *******)0x0) {
        pppppppuVar1 = pppppppuVar45 + 1;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(pppppppuVar1,0x10);
          if (bVar9) {
            *pppppppuVar1 = (undefined ******)((long)*pppppppuVar1 + 1);
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      ppppppppuVar27 = (undefined ********)0x28;
      pppppppuStack_1f0 = pppppppuVar14;
      pppppppuStack_1e8 = pppppppuVar38;
      ppppppppuStack_1c0 = (undefined ********)pppppppuVar14;
      uStack_1b0 = uStack_88;
      cStack_1a9 = uStack_81;
      ppppppppuStack_1a8 = (undefined ********)pppppppuVar45;
      __Znwm();
      *ppppppppuVar27 = (undefined *******)&PTR_FUN_110c71090;
      ppppppppuVar27[1] = pppppppuVar14;
      ppppppppuStack_1c0 = (undefined ********)0x0;
      bStack_1b8 = 0;
      uStack_1b7 = 0;
      uStack_1b1 = 0;
      ppppppppuVar27[2] = pppppppuVar38;
      ppppppppuVar27[3] = pppppppuVar43;
      ppppppppuVar27[4] = pppppppuVar45;
      uStack_1b0 = 0;
      cStack_1a9 = '\0';
      ppppppppuStack_1a8 = (undefined ********)0x0;
      ppppppppuStack_b0 = ppppppppuVar27;
      if (pppppppuVar45 != (undefined *******)0x0) {
        pppppppuVar14 = pppppppuVar45 + 1;
        do {
          ppppppuVar33 = *pppppppuVar14;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(pppppppuVar14,0x10);
          if (bVar9) {
            *pppppppuVar14 = (undefined ******)((long)ppppppuVar33 + -1);
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (ppppppuVar33 == (undefined ******)0x0) {
          (*(code *)(*pppppppuVar45)[2])(pppppppuVar45);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar45);
        }
      }
      pppppppuVar14 = pppppppuStack_1e8;
      if (pppppppuStack_1e8 != (undefined *******)0x0) {
        pppppppuVar38 = pppppppuStack_1e8 + 1;
        do {
          ppppppuVar33 = *pppppppuVar38;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(pppppppuVar38,0x10);
          if (bVar9) {
            *pppppppuVar38 = (undefined ******)((long)ppppppuVar33 + -1);
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (ppppppuVar33 == (undefined ******)0x0) {
          (*(code *)(*pppppppuStack_1e8)[2])(pppppppuStack_1e8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar14);
        }
      }
      ppppppppuVar27 = (undefined ********)&ppppppppuStack_c8;
      FUN_10ad6cb30(alStack_a8);
      if ((undefined *********)ppppppppuStack_b0 == &ppppppppuStack_c8) {
        lVar31 = 0x20;
LAB_10ad68a24:
        (**(code **)((long)*ppppppppuStack_b0 + lVar31))();
      }
      else if (ppppppppuStack_b0 != (undefined ********)0x0) {
        lVar31 = 0x28;
        goto LAB_10ad68a24;
      }
      if ((undefined *********)ppppppppuStack_128 == &ppppppppuStack_140) {
        lVar31 = 0x20;
      }
      else {
        if (ppppppppuStack_128 == (undefined ********)0x0) goto LAB_10ad68a5c;
        lVar31 = 0x28;
      }
      (**(code **)((long)*ppppppppuStack_128 + lVar31))();
    }
LAB_10ad68a5c:
    if ((char)bStack_2f1 < '\0') {
      __ZdlPv(ppppppplStack_308);
    }
    if (pppppppuVar15 != (undefined *******)0x0) goto LAB_10ad68a78;
LAB_10ad69d94:
    if (plStack_90 == alStack_a8) {
      lVar31 = 0x20;
LAB_10ad69db4:
      (**(code **)(*plStack_90 + lVar31))();
    }
    else if (plStack_90 != (long *)0x0) {
      lVar31 = 0x28;
      goto LAB_10ad69db4;
    }
    pppppppuVar15 = pppppppuStack_2e8;
    if (pppppppuStack_2e8 != (undefined *******)0x0) {
      pppppppuVar14 = pppppppuStack_2e8 + 1;
      do {
        ppppppuVar33 = *pppppppuVar14;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(pppppppuVar14,0x10);
        if (bVar9) {
          *pppppppuVar14 = (undefined ******)((long)ppppppuVar33 + -1);
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (ppppppuVar33 == (undefined ******)0x0) {
        (*(code *)(*pppppppuStack_2e8)[2])(pppppppuStack_2e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar15);
      }
    }
    plVar21 = plStack_2d8;
    if (plStack_2d8 != (long *)0x0) {
      plVar16 = plStack_2d8 + 1;
      do {
        lVar31 = *plVar16;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar9) {
          *plVar16 = lVar31 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar31 == 0) {
        (**(code **)(*plStack_2d8 + 0x10))(plStack_2d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
      }
    }
    plVar21 = plStack_2c8;
    if (plStack_2c8 != (long *)0x0) {
      plVar16 = plStack_2c8 + 1;
      do {
        lVar31 = *plVar16;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar9) {
          *plVar16 = lVar31 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar31 == 0) {
        (**(code **)(*plStack_2c8 + 0x10))(plStack_2c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
      }
    }
    if (puStack_2c0 != (ulong *)0x0) {
      __ZdlPv();
    }
    ppppppplVar24 = ppppppplStack_2a8;
    if (ppppppplStack_2a8 != (long *******)0x0) {
      __ZdlPv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return ppppppplVar24;
    }
    ___stack_chk_fail();
  }
  FUN_10ad6a738();
LAB_10ad6a244:
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x10ad6a248);
  (*pcVar13)();
code_r0x00010ad695fc:
  lVar32 = lVar32 + -1;
  puVar17 = puVar17 + 3;
  if (uVar40 + lVar32 == 0x10) goto code_r0x00010ad69610;
  goto LAB_10ad695ec;
code_r0x00010ad69610:
  if (uVar40 < 0x10) goto LAB_10ad69618;
LAB_10ad696a0:
  if (pppppppuStack_2f0 != (undefined *******)0x0) {
    lVar31 = *param_1;
    uVar40 = *(ulong *)(lVar31 + 0x180);
    if (uVar40 != 0) {
      puVar17 = (undefined8 *)(lVar31 + 0x10);
      lVar32 = 0x10;
LAB_10ad696cc:
      if (lVar32 == 0) goto LAB_10ad6a244;
      if ((undefined *)puVar17[-2] != &UNK_10e5109e5) goto code_r0x00010ad696dc;
      if (pppppppuStack_2e8 != (undefined *******)0x0) {
        pppppppuVar15 = pppppppuStack_2e8 + 1;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(pppppppuVar15,0x10);
          if (bVar9) {
            *pppppppuVar15 = (undefined ******)((long)*pppppppuVar15 + 1);
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      plVar21 = (long *)*puVar17;
      puVar17[-1] = pppppppuStack_2f0;
      *puVar17 = pppppppuStack_2e8;
      if (plVar21 != (long *)0x0) {
        plVar16 = plVar21 + 1;
        do {
          lVar31 = *plVar16;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar9) {
            *plVar16 = lVar31 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar31 == 0) {
          (**(code **)(*plVar21 + 0x10))(plVar21);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
        }
      }
      goto LAB_10ad69780;
    }
LAB_10ad696f8:
    ppppppppuStack_1c0 = (undefined ********)&UNK_10e5109e5;
    bStack_1b8 = (byte)pppppppuStack_2f0;
    uStack_1b7 = (undefined6)((ulong)pppppppuStack_2f0 >> 8);
    uStack_1b1 = (undefined1)((ulong)pppppppuStack_2f0 >> 0x38);
    uStack_1b0 = SUB87(pppppppuStack_2e8,0);
    cStack_1a9 = (char)((ulong)pppppppuStack_2e8 >> 0x38);
    if (pppppppuStack_2e8 != (undefined *******)0x0) {
      pppppppuVar15 = pppppppuStack_2e8 + 1;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(pppppppuVar15,0x10);
        if (bVar9) {
          *pppppppuVar15 = (undefined ******)((long)*pppppppuVar15 + 1);
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      uVar40 = *(ulong *)(lVar31 + 0x180);
      if (0xf < uVar40) goto LAB_10ad6a244;
    }
    puVar17 = (undefined8 *)(lVar31 + uVar40 * 0x18);
    *puVar17 = &UNK_10e5109e5;
    FUN_10a286fec(puVar17 + 1,&bStack_1b8);
    plVar21 = (long *)CONCAT17(cStack_1a9,uStack_1b0);
    if (plVar21 != (long *)0x0) {
      plVar16 = plVar21 + 1;
      do {
        lVar32 = *plVar16;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar9) {
          *plVar16 = lVar32 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar32 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
      }
    }
    *(long *)(lVar31 + 0x180) = *(long *)(lVar31 + 0x180) + 1;
  }
  goto LAB_10ad69780;
code_r0x00010ad696dc:
  lVar32 = lVar32 + -1;
  puVar17 = puVar17 + 3;
  if (uVar40 + lVar32 == 0x10) goto code_r0x00010ad696f0;
  goto LAB_10ad696cc;
code_r0x00010ad696f0:
  if (uVar40 < 0x10) goto LAB_10ad696f8;
LAB_10ad69780:
  plVar21 = (long *)0x40;
  __Znwm();
  plVar16 = plVar21 + 1;
  *plVar16 = 0;
  plVar21[2] = 0;
  *plVar21 = (long)&PTR_FUN_110c71758;
  ppppppplStack_308 = (long *******)(plVar21 + 3);
  plVar21[4] = 0;
  *ppppppplStack_308 = (long ******)0x0;
  plVar21[6] = 0;
  plVar21[5] = 0;
  plVar21[7] = 0;
  lVar31 = *param_1;
  uVar40 = *(ulong *)(lVar31 + 0x180);
  plStack_300 = plVar21;
  if (uVar40 == 0) {
LAB_10ad69800:
    ppppppppuStack_1c0 = (undefined ********)&UNK_10e4b44c0;
    bStack_1b8 = (byte)ppppppplStack_308;
    uStack_1b7 = (undefined6)((ulong)ppppppplStack_308 >> 8);
    uStack_1b1 = (undefined1)((ulong)ppppppplStack_308 >> 0x38);
    uStack_1b0 = SUB87(plVar21,0);
    cStack_1a9 = (char)((ulong)plVar21 >> 0x38);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar9) {
        *plVar16 = *plVar16 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (0xf < *(ulong *)(lVar31 + 0x180)) goto LAB_10ad6a244;
    puVar17 = (undefined8 *)(lVar31 + *(ulong *)(lVar31 + 0x180) * 0x18);
    *puVar17 = &UNK_10e4b44c0;
    FUN_10a286fec(puVar17 + 1,&bStack_1b8);
    plVar21 = (long *)CONCAT17(cStack_1a9,uStack_1b0);
    if (plVar21 != (long *)0x0) {
      plVar16 = plVar21 + 1;
      do {
        lVar32 = *plVar16;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar9) {
          *plVar16 = lVar32 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar32 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
      }
    }
    *(long *)(lVar31 + 0x180) = *(long *)(lVar31 + 0x180) + 1;
  }
  else {
    puVar17 = (undefined8 *)(lVar31 + 0x10);
    lVar32 = 0x10;
    do {
      if (lVar32 == 0) goto LAB_10ad6a244;
      if ((undefined *)puVar17[-2] == &UNK_10e4b44c0) goto LAB_10ad69c94;
      lVar32 = lVar32 + -1;
      puVar17 = puVar17 + 3;
    } while (uVar40 + lVar32 != 0x10);
    if (uVar40 < 0x10) goto LAB_10ad69800;
  }
LAB_10ad69880:
  pppppppuVar15 = (undefined *******)0x110;
  __Znwm();
  pppppppuVar14 = pppppppuVar15 + 1;
  *pppppppuVar14 = (undefined ******)0x0;
  pppppppuVar15[2] = (undefined ******)0x0;
  *pppppppuVar15 = (undefined ******)&PTR_FUN_110c70fc8;
  pppppppuStack_1f0 = pppppppuVar15 + 3;
  *(undefined4 *)pppppppuStack_1f0 = 0;
  *(undefined4 *)((long)pppppppuVar15 + 0x1c) = 0;
  *(undefined4 *)(pppppppuVar15 + 4) = 0;
  pppppppuVar15[5] = (undefined ******)0x0;
  pppppppuVar15[6] = (undefined ******)0x0;
  pppppppuVar15[0x14] = (undefined ******)0x0;
  pppppppuVar15[0x13] = (undefined ******)0x0;
  pppppppuVar15[0x16] = (undefined ******)0x0;
  pppppppuVar15[0x15] = (undefined ******)0x0;
  pppppppuVar15[0x18] = (undefined ******)0x0;
  pppppppuVar15[0x17] = (undefined ******)0x0;
  pppppppuVar15[0x1a] = (undefined ******)0x0;
  pppppppuVar15[0x19] = (undefined ******)0x0;
  pppppppuVar15[0x1b] = (undefined ******)0x0;
  *(undefined4 *)(pppppppuVar15 + 0x1c) = 0x3f800000;
  pppppppuVar15[0x1e] = (undefined ******)0x0;
  pppppppuVar15[0x1d] = (undefined ******)0x0;
  pppppppuVar15[0x20] = (undefined ******)0x0;
  pppppppuVar15[0x1f] = (undefined ******)0x0;
  *(undefined4 *)(pppppppuVar15 + 0x21) = 0x3f800000;
  *(undefined8 *)((long)pppppppuVar15 + 0x8c) = 0;
  *(undefined8 *)((long)pppppppuVar15 + 0x84) = 0;
  pppppppuVar15[0x10] = (undefined ******)0x0;
  pppppppuVar15[0xf] = (undefined ******)0x0;
  pppppppuVar15[0xe] = (undefined ******)0x0;
  pppppppuVar15[0xd] = (undefined ******)0x0;
  pppppppuVar15[0xc] = (undefined ******)0x0;
  pppppppuVar15[0xb] = (undefined ******)0x0;
  pppppppuVar15[10] = (undefined ******)0x0;
  pppppppuVar15[9] = (undefined ******)0x0;
  pppppppuVar15[8] = (undefined ******)0x0;
  pppppppuVar15[7] = (undefined ******)0x0;
  uVar40 = *(ulong *)(lVar31 + 0x180);
  pppppppuStack_1e8 = pppppppuVar15;
  if (uVar40 == 0) {
LAB_10ad6993c:
    ppppppppuStack_1c0 = (undefined ********)&UNK_10e4ce7b0;
    bStack_1b8 = (byte)pppppppuStack_1f0;
    uStack_1b7 = (undefined6)((ulong)pppppppuStack_1f0 >> 8);
    uStack_1b1 = (undefined1)((ulong)pppppppuStack_1f0 >> 0x38);
    uStack_1b0 = SUB87(pppppppuVar15,0);
    cStack_1a9 = (char)((ulong)pppppppuVar15 >> 0x38);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(pppppppuVar14,0x10);
      if (bVar9) {
        *pppppppuVar14 = (undefined ******)((long)*pppppppuVar14 + 1);
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (0xf < *(ulong *)(lVar31 + 0x180)) goto LAB_10ad6a244;
    puVar17 = (undefined8 *)(lVar31 + *(ulong *)(lVar31 + 0x180) * 0x18);
    *puVar17 = &UNK_10e4ce7b0;
    FUN_10a286fec(puVar17 + 1,&bStack_1b8);
    plVar21 = (long *)CONCAT17(cStack_1a9,uStack_1b0);
    if (plVar21 != (long *)0x0) {
      plVar16 = plVar21 + 1;
      do {
        lVar32 = *plVar16;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar9) {
          *plVar16 = lVar32 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar32 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
      }
    }
    *(long *)(lVar31 + 0x180) = *(long *)(lVar31 + 0x180) + 1;
  }
  else {
    puVar17 = (undefined8 *)(lVar31 + 0x10);
    lVar32 = 0x10;
    do {
      if (lVar32 == 0) goto LAB_10ad6a244;
      if ((undefined *)puVar17[-2] == &UNK_10e4ce7b0) goto LAB_10ad69ce4;
      lVar32 = lVar32 + -1;
      puVar17 = puVar17 + 3;
    } while (uVar40 + lVar32 != 0x10);
    if (uVar40 < 0x10) goto LAB_10ad6993c;
  }
LAB_10ad699bc:
  puVar17 = (undefined8 *)0x1f0;
  __Znwm();
  plVar21 = puVar17 + 1;
  *plVar21 = 0;
  puVar17[2] = 0;
  *puVar17 = &PTR_DAT_110c717a8;
  puVar23 = puVar17 + 3;
  puVar17[4] = 0;
  *puVar23 = 0;
  puVar17[6] = 0;
  puVar17[5] = 0;
  puVar17[8] = 0;
  puVar17[7] = 0;
  puVar17[10] = 0;
  puVar17[9] = 0;
  puVar17[0xc] = 0;
  puVar17[0xb] = 0;
  puVar17[0xe] = 0;
  puVar17[0xd] = 0;
  puVar17[0x10] = 0;
  puVar17[0xf] = 0;
  puVar17[0x12] = 0;
  puVar17[0x11] = 0;
  puVar17[0x14] = 0;
  puVar17[0x13] = 0;
  puVar17[0x16] = 0;
  puVar17[0x15] = 0;
  puVar17[0x18] = 0;
  puVar17[0x17] = 0;
  puVar17[0x1a] = 0;
  puVar17[0x19] = 0;
  puVar17[0x1c] = 0;
  puVar17[0x1b] = 0;
  puVar17[0x1e] = 0;
  puVar17[0x1d] = 0;
  puVar17[0x20] = 0;
  puVar17[0x1f] = 0;
  puVar17[0x3d] = 0;
  puVar17[0x22] = 0;
  puVar17[0x21] = 0;
  puVar17[0x24] = 0;
  puVar17[0x23] = 0;
  puVar17[0x26] = 0;
  puVar17[0x25] = 0;
  puVar17[0x28] = 0;
  puVar17[0x27] = 0;
  puVar17[0x2a] = 0;
  puVar17[0x29] = 0;
  puVar17[0x2c] = 0;
  puVar17[0x2b] = 0;
  puVar17[0x2e] = 0;
  puVar17[0x2d] = 0;
  puVar17[0x30] = 0;
  puVar17[0x2f] = 0;
  puVar17[0x32] = 0;
  puVar17[0x31] = 0;
  puVar17[0x34] = 0;
  puVar17[0x33] = 0;
  puVar17[0x36] = 0;
  puVar17[0x35] = 0;
  puVar17[0x38] = 0;
  puVar17[0x37] = 0;
  puVar17[0x3a] = 0;
  puVar17[0x39] = 0;
  puVar17[0x3c] = 0;
  puVar17[0x3b] = 0;
  uStack_88 = SUB87(puVar23,0);
  uStack_81 = (undefined1)((ulong)puVar23 >> 0x38);
  uStack_80 = SUB87(puVar17,0);
  cStack_79 = (char)((ulong)puVar17 >> 0x38);
  uVar40 = *(ulong *)(lVar31 + 0x180);
  if (uVar40 == 0) {
LAB_10ad69a88:
    ppppppppuStack_1c0 = (undefined ********)&UNK_10e4ce7b1;
    bStack_1b8 = (byte)puVar23;
    uStack_1b7 = (undefined6)((ulong)puVar23 >> 8);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar9) {
        *plVar21 = *plVar21 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    uStack_1b1 = uStack_81;
    uStack_1b0 = uStack_80;
    cStack_1a9 = cStack_79;
    if (0xf < *(ulong *)(lVar31 + 0x180)) goto LAB_10ad6a244;
    puVar17 = (undefined8 *)(lVar31 + *(ulong *)(lVar31 + 0x180) * 0x18);
    *puVar17 = &UNK_10e4ce7b1;
    FUN_10a286fec(puVar17 + 1,&bStack_1b8);
    plVar21 = (long *)CONCAT17(cStack_1a9,uStack_1b0);
    if (plVar21 != (long *)0x0) {
      plVar16 = plVar21 + 1;
      do {
        lVar32 = *plVar16;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar9) {
          *plVar16 = lVar32 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar32 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
      }
    }
    *(long *)(lVar31 + 0x180) = *(long *)(lVar31 + 0x180) + 1;
  }
  else {
    puVar35 = (undefined8 *)(lVar31 + 0x10);
    lVar32 = 0x10;
    do {
      if (lVar32 == 0) goto LAB_10ad6a244;
      if ((undefined *)puVar35[-2] == &UNK_10e4ce7b1) goto LAB_10ad69d34;
      lVar32 = lVar32 + -1;
      puVar35 = puVar35 + 3;
    } while (uVar40 + lVar32 != 0x10);
    if (uVar40 < 0x10) goto LAB_10ad69a88;
  }
LAB_10ad69b08:
  if (((uVar5 >> 0x30 & 1) != 0) &&
     (func_0x00010a152370(&ppppppppuStack_1c0,lVar31),
     CONCAT17(uStack_1b1,CONCAT61(uStack_1b7,bStack_1b8)) != 0)) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a151214();
  lVar31 = param_1[1];
  ppppppppuStack_1c0 = (undefined ********)*param_1;
  bStack_1b8 = (byte)lVar31;
  uStack_1b7 = (undefined6)((ulong)lVar31 >> 8);
  uStack_1b1 = (undefined1)((ulong)lVar31 >> 0x38);
  if (param_1[1] != 0) {
    plVar21 = (long *)(param_1[1] + 0x10);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar9) {
        *plVar21 = *plVar21 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  FUN_10a151db0();
  if (CONCAT17(uStack_1b1,CONCAT61(uStack_1b7,bStack_1b8)) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar21 = (long *)CONCAT17(cStack_79,uStack_80);
  if (plVar21 != (long *)0x0) {
    plVar16 = plVar21 + 1;
    do {
      lVar31 = *plVar16;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar9) {
        *plVar16 = lVar31 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar31 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
    }
  }
  pppppppuVar15 = pppppppuStack_1e8;
  if (pppppppuStack_1e8 != (undefined *******)0x0) {
    pppppppuVar14 = pppppppuStack_1e8 + 1;
    do {
      ppppppuVar33 = *pppppppuVar14;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(pppppppuVar14,0x10);
      if (bVar9) {
        *pppppppuVar14 = (undefined ******)((long)ppppppuVar33 + -1);
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (ppppppuVar33 == (undefined ******)0x0) {
      (*(code *)(*pppppppuStack_1e8)[2])(pppppppuStack_1e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar15);
    }
  }
  plVar21 = plStack_300;
  if (plStack_300 != (long *)0x0) {
    plVar16 = plStack_300 + 1;
    do {
      lVar31 = *plVar16;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar9) {
        *plVar16 = lVar31 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar31 == 0) {
      (**(code **)(*plStack_300 + 0x10))(plStack_300);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
    }
  }
  pppppppuVar15 = pppppppuStack_c0;
  if (pppppppuStack_c0 != (undefined *******)0x0) {
    pppppppuVar14 = pppppppuStack_c0 + 1;
    do {
      ppppppuVar33 = *pppppppuVar14;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(pppppppuVar14,0x10);
      if (bVar9) {
        *pppppppuVar14 = (undefined ******)((long)ppppppuVar33 + -1);
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (ppppppuVar33 == (undefined ******)0x0) {
      (*(code *)(*pppppppuStack_c0)[2])(pppppppuStack_c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar15);
    }
  }
  plVar21 = plStack_d0;
  if (plStack_d0 != (long *)0x0) {
    plVar16 = plStack_d0 + 1;
    do {
      lVar31 = *plVar16;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar9) {
        *plVar16 = lVar31 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar31 == 0) {
      (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
    }
  }
  if (plStack_e0 == alStack_f8) {
    lVar31 = 0x20;
LAB_10ad69d88:
    (**(code **)(*plStack_e0 + lVar31))();
  }
  else if (plStack_e0 != (long *)0x0) {
    lVar31 = 0x28;
    goto LAB_10ad69d88;
  }
  goto LAB_10ad69d94;
LAB_10ad69c94:
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar9) {
      *plVar16 = *plVar16 + 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  plVar16 = (long *)*puVar17;
  puVar17[-1] = ppppppplStack_308;
  *puVar17 = plVar21;
  if (plVar16 != (long *)0x0) {
    plVar21 = plVar16 + 1;
    do {
      lVar32 = *plVar21;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar9) {
        *plVar21 = lVar32 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar32 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
  goto LAB_10ad69880;
LAB_10ad69ce4:
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(pppppppuVar14,0x10);
    if (bVar9) {
      *pppppppuVar14 = (undefined ******)((long)*pppppppuVar14 + 1);
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  plVar21 = (long *)*puVar17;
  puVar17[-1] = pppppppuStack_1f0;
  *puVar17 = pppppppuVar15;
  if (plVar21 != (long *)0x0) {
    plVar16 = plVar21 + 1;
    do {
      lVar32 = *plVar16;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar9) {
        *plVar16 = lVar32 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar32 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
    }
  }
  goto LAB_10ad699bc;
LAB_10ad69d34:
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar9) {
      *plVar21 = *plVar21 + 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  plVar21 = (long *)*puVar35;
  puVar35[-1] = puVar23;
  *puVar35 = puVar17;
  if (plVar21 != (long *)0x0) {
    plVar16 = plVar21 + 1;
    do {
      lVar32 = *plVar16;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar9) {
        *plVar16 = lVar32 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar32 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
    }
  }
  goto LAB_10ad69b08;
}



/* Entry: 10ad6a368; end: 10ad6a427;  */

long * FUN_10ad6a368(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  
  plVar3 = (long *)param_1[1];
  if (plVar3 < (long *)param_1[2]) {
    plVar8 = plVar3 + 1;
    *plVar3 = param_2;
    plVar3 = param_1;
LAB_10ad6a40c:
    param_1[1] = (long)plVar8;
    return plVar3;
  }
  lVar7 = (long)plVar3 - *param_1;
  uVar1 = (lVar7 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar5 = param_1[2] - *param_1;
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    lVar4 = param_2;
    FUN_10ad6a74c();
    lVar2 = *param_1;
    plVar3 = (long *)(uVar6 + lVar7);
    lVar7 = (long)plVar3 - (param_1[1] - lVar2);
    plVar8 = plVar3 + 1;
    *plVar3 = param_2;
    _memcpy(lVar7,lVar2);
    plVar3 = (long *)*param_1;
    *param_1 = lVar7;
    param_1[1] = (long)plVar8;
    param_1[2] = uVar6 + lVar4 * 8;
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
    goto LAB_10ad6a40c;
  }
  FUN_10ad6a738();
  func_0x00010a1331b4(param_1 + 0xe);
  plVar3 = (long *)param_1[0xd];
  if (plVar3 == param_1 + 10) {
    lVar7 = 0x20;
  }
  else {
    if (plVar3 == (long *)0x0) goto LAB_10ad6a46c;
    lVar7 = 0x28;
  }
  (**(code **)(*plVar3 + lVar7))();
LAB_10ad6a46c:
  if (param_1[7] != 0) {
    param_1[8] = param_1[7];
    __ZdlPv();
  }
  if (param_1[4] != 0) {
    param_1[5] = param_1[4];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10ad6a428; end: 10ad6a4ef;  */

long FUN_10ad6a428(long param_1)

{
  long *plVar1;
  long lVar2;
  
  func_0x00010a1331b4(param_1 + 0x70);
  plVar1 = *(long **)(param_1 + 0x68);
  if (plVar1 == (long *)(param_1 + 0x50)) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_10ad6a46c;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_10ad6a46c:
  if (*(long *)(param_1 + 0x38) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x38);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x20);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10ad6a4f0; end: 10ad6a6ef;  */

void FUN_10ad6a4f0(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  long param_5)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  puVar4 = (undefined8 *)param_1[1];
  if (param_1[2] - (long)puVar4 >> 3 < param_5) {
    lVar9 = *param_1;
    uVar1 = param_5 + ((long)puVar4 - lVar9 >> 3);
    if (uVar1 >> 0x3d != 0) {
      FUN_10ad6a6f0();
      puVar3 = &DAT_10f62a4d8;
      FUN_109ffde64();
      if ((ulong)puVar3 >> 0x3d == 0) {
        __Znwm((long)puVar3 << 3);
        return;
      }
      func_0x000109ffded8();
      puVar4 = (undefined8 *)&DAT_10f62a4d8;
      FUN_109ffde64();
      if ((ulong)puVar4 >> 0x3d != 0) {
        func_0x000109ffded8();
        *puVar4 = &PTR_FUN_110c71028;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
        return;
      }
      __Znwm((long)puVar4 << 3);
      return;
    }
    uVar5 = param_1[2] - lVar9;
    uVar10 = (long)uVar5 >> 2;
    if (uVar10 <= uVar1) {
      uVar10 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar10 = 0x1fffffffffffffff;
    }
    if (uVar10 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      puVar4 = param_2;
      FUN_10ad6a704();
    }
    puVar6 = (undefined8 *)((long)param_2 + (uVar10 - lVar9));
    lVar9 = param_5 << 3;
    puVar8 = puVar6;
    do {
      *puVar8 = *param_3;
      lVar9 = lVar9 + -8;
      puVar8 = puVar8 + 1;
      param_3 = param_3 + 1;
    } while (lVar9 != 0);
    _memcpy(puVar6 + param_5,param_2,param_1[1] - (long)param_2);
    lVar9 = param_1[1];
    param_1[1] = (long)param_2;
    lVar11 = (long)puVar6 - ((long)param_2 - *param_1);
    _memcpy(lVar11);
    lVar2 = *param_1;
    *param_1 = lVar11;
    param_1[1] = (long)(puVar6 + param_5) + (lVar9 - (long)param_2);
    param_1[2] = uVar10 + (long)puVar4 * 8;
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  else {
    lVar9 = (long)puVar4 - (long)param_2;
    if (param_5 <= lVar9 >> 3) {
      puVar6 = puVar4;
      for (puVar8 = puVar4 + -param_5; puVar8 < puVar4; puVar8 = puVar8 + 1) {
        *puVar6 = *puVar8;
        puVar6 = puVar6 + 1;
      }
      param_1[1] = (long)puVar6;
      if (puVar4 != param_2 + param_5) {
        _memmove(param_2 + param_5,param_2);
      }
      lVar9 = param_5 << 3;
LAB_10ad6a6c4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memmove_11034c660)(param_2,param_3,lVar9);
      return;
    }
    puVar6 = puVar4;
    puVar7 = puVar4;
    for (puVar8 = (undefined8 *)((long)param_3 + lVar9); puVar8 != param_4; puVar8 = puVar8 + 1) {
      *puVar7 = *puVar8;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    param_1[1] = (long)puVar6;
    if (0 < lVar9 >> 3) {
      puVar8 = puVar6 + -param_5;
      for (; puVar8 < puVar4; puVar8 = puVar8 + 1) {
        *puVar6 = *puVar8;
        puVar6 = puVar6 + 1;
      }
      param_1[1] = (long)puVar6;
      if (puVar7 != param_2 + param_5) {
        _memmove(param_2 + param_5,param_2);
      }
      if (puVar4 != param_2) goto LAB_10ad6a6c4;
    }
  }
  return;
}



/* Entry: 10ad6a6f0; end: 10ad6a703;  */

void FUN_10ad6a6f0(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)puVar1 >> 0x3d == 0) {
    __Znwm((long)puVar1 << 3);
    return;
  }
  func_0x000109ffded8();
  puVar2 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)puVar2 >> 0x3d == 0) {
    __Znwm((long)puVar2 << 3);
    return;
  }
  func_0x000109ffded8();
  *puVar2 = &PTR_FUN_110c71028;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ad6a704; end: 10ad6a737;  */

void FUN_10ad6a704(ulong param_1)

{
  undefined8 *puVar1;
  
  if (param_1 >> 0x3d == 0) {
    __Znwm(param_1 << 3);
    return;
  }
  func_0x000109ffded8();
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)puVar1 >> 0x3d == 0) {
    __Znwm((long)puVar1 << 3);
    return;
  }
  func_0x000109ffded8();
  *puVar1 = &PTR_FUN_110c71028;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ad6a738; end: 10ad6a74b;  */

void FUN_10ad6a738(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)puVar1 >> 0x3d == 0) {
    __Znwm((long)puVar1 << 3);
    return;
  }
  func_0x000109ffded8();
  *puVar1 = &PTR_FUN_110c71028;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ad6a74c; end: 10ad6a77f;  */

void FUN_10ad6a74c(undefined8 *param_1)

{
  if ((ulong)param_1 >> 0x3d == 0) {
    __Znwm((long)param_1 << 3);
    return;
  }
  func_0x000109ffded8();
  *param_1 = &PTR_FUN_110c71028;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ad6a780; end: 10ad6a78f;  */

void FUN_10ad6a780(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c71028;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ad6a790; end: 10ad6a7af;  */

void FUN_10ad6a790(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c71028;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad6a7b0; end: 10ad6a7ff;  */

void FUN_10ad6a7b0(long param_1)

{
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    FUN_10a09a0e4(param_1 + 0x70);
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x30);
  if (-1 < *(char *)(param_1 + 0x2f)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10ad6a800; end: 10ad6a803;  */

void FUN_10ad6a800(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad6a804; end: 10ad6a837;  */

void FUN_10ad6a804(long param_1,long param_2)

{
  long *plVar1;
  
  if (param_1 != 0) {
    _fclose();
  }
  plVar1 = (long *)(param_2 + 0x10);
  if (*(char *)(param_2 + 0x27) < '\0') {
    plVar1 = (long *)*plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf9ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__remove_11034ca48)(plVar1);
  return;
}



/* Entry: 10ad6a838; end: 10ad6a873;  */

void FUN_10ad6a838(long param_1)

{
  if (-1 < *(char *)(param_1 + 0x1f)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10ad6a874; end: 10ad6a95b;  */

undefined8 * FUN_10ad6a874(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c71090;
  FUN_10ad6c3c0(param_1 + 3);
  func_0x00010ad6c418(param_1 + 1);
  return param_1;
}



/* Entry: 10ad6a95c; end: 10ad6a9b3;  */

void FUN_10ad6a95c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_2 = &PTR_FUN_110c71090;
  lVar4 = *(long *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar5;
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
  lVar4 = *(long *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = uVar5;
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



/* Entry: 10ad6a9b4; end: 10ad6aa0b;  */

long FUN_10ad6a9b4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10ad6c3c0(param_1 + 0x18);
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10ad6aa0c; end: 10ad6b607;  */

/* WARNING: Type propagation algorithm not settling */

byte ******* FUN_10ad6aa0c(long param_1,byte *******param_2)

{
  byte *pbVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 uVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  code *pcVar9;
  byte *******pppppppbVar10;
  byte *******pppppppbVar11;
  byte *******pppppppbVar12;
  byte ******ppppppbVar13;
  byte *****pppppbVar14;
  int iVar15;
  byte ******ppppppbVar16;
  byte ******ppppppbVar17;
  ulong uVar18;
  byte *******pppppppbVar19;
  byte *******unaff_x20;
  byte *******unaff_x21;
  byte *******pppppppbVar20;
  byte *******pppppppbVar21;
  byte ******ppppppbVar22;
  byte *******pppppppbVar23;
  byte *******pppppppbStack_90;
  byte *******pppppppbStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined7 uStack_70;
  long lStack_68;
  
  iVar15 = (int)unaff_x20;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppbVar22 = *param_2;
  ppppppbVar16 = param_2[1];
  pppppppbVar10 = *(byte ********)(param_1 + 0x18);
  pppppppbVar11 = pppppppbVar10;
  __ZNSt3__15mutex4lockEv();
  if (ppppppbVar16 != (byte ******)0x0) {
    ppppppbVar16 = ppppppbVar22 + (long)ppppppbVar16 * 0x16;
    do {
      pppppppbVar23 = *(byte ********)(param_1 + 8);
      if (*(byte *)ppppppbVar22 == 7) {
        pppppppbVar20 = (byte *******)ppppppbVar22[2];
        if ((byte *******)0x7ffffffffffffff7 < pppppppbVar20) {
          func_0x000109ffde50();
          goto LAB_10ad6b578;
        }
        pppppppbVar21 = (byte *******)ppppppbVar22[1];
        if (pppppppbVar20 < (byte *******)0x17) {
          uStack_80 = (byte ******)CONCAT17((char)pppppppbVar20,(undefined7)uStack_80);
          pppppppbVar19 = (byte *******)&pppppppbStack_90;
          if (pppppppbVar20 != (byte *******)0x0) goto LAB_10ad6ab44;
        }
        else {
          pppppppbVar11 = (byte *******)0x19;
          if (((ulong)pppppppbVar20 | 7) != 0x17) {
            pppppppbVar11 = (byte *******)(((ulong)pppppppbVar20 | 7) + 1);
          }
          pppppppbVar19 = pppppppbVar11;
          __Znwm();
          uStack_80 = (byte ******)((ulong)pppppppbVar11 | 0x8000000000000000);
          pppppppbStack_90 = pppppppbVar19;
          pppppppbStack_88 = pppppppbVar20;
LAB_10ad6ab44:
          pppppppbVar11 = pppppppbVar19;
          _memmove(pppppppbVar19,pppppppbVar21,pppppppbVar20);
          param_2 = pppppppbVar21;
        }
        *(byte *)((long)pppppppbVar19 + (long)pppppppbVar20) = 0;
        uVar6 = *(uint *)(ppppppbVar22 + 3);
        unaff_x20 = (byte *******)(ulong)uVar6;
        pppppppbVar20 = (byte *******)pppppppbVar23[0x22];
        if ((byte *******)pppppppbVar23[0x22] == (byte *******)0x0) {
          unaff_x21 = pppppppbVar23 + 0x22;
          pppppppbVar21 = pppppppbVar23 + 0x22;
        }
        else {
          do {
            while (unaff_x21 = pppppppbVar20, *(uint *)(unaff_x21 + 4) <= uVar6) {
              if (uVar6 <= *(uint *)(unaff_x21 + 4)) goto LAB_10ad6abd4;
              pppppppbVar20 = (byte *******)unaff_x21[1];
              if ((byte *******)unaff_x21[1] == (byte *******)0x0) {
                pppppppbVar21 = unaff_x21 + 1;
                goto LAB_10ad6aba4;
              }
            }
            pppppppbVar20 = (byte *******)*unaff_x21;
            pppppppbVar21 = unaff_x21;
          } while ((byte *******)*unaff_x21 != (byte *******)0x0);
        }
LAB_10ad6aba4:
        param_2 = unaff_x21;
        unaff_x21 = (byte *******)0x40;
        __Znwm();
        *(uint *)(unaff_x21 + 4) = uVar6;
        unaff_x21[6] = (byte ******)0x0;
        unaff_x21[7] = (byte ******)0x0;
        unaff_x21[5] = (byte ******)0x0;
        pppppppbVar11 = pppppppbVar23 + 0x21;
        func_0x0001098c6ffc(pppppppbVar11,param_2,pppppppbVar21,unaff_x21);
LAB_10ad6abd4:
        if ((char)*(byte *)((long)unaff_x21 + 0x3f) < '\0') {
          pppppppbVar11 = (byte *******)unaff_x21[5];
          __ZdlPv();
        }
        unaff_x21[6] = (byte ******)pppppppbStack_88;
        unaff_x21[5] = (byte ******)pppppppbStack_90;
        unaff_x21[7] = uStack_80;
      }
      else {
        if ((byte ******)ppppppbVar22[7] != pppppppbVar23[0x24]) {
          pppppppbVar23[0x24] = (byte ******)ppppppbVar22[7];
          param_2 = (byte *******)0xffffffffffffff01;
          FUN_10ad6b650(pppppppbVar23,0xffffffffffffff01,&UNK_10f6a9151,0xd,1,0,0);
          unaff_x21 = pppppppbVar23;
          FUN_10ad6ba00();
          unaff_x21[5] = (byte ******)((long)ppppppbVar22[4] - (long)pppppppbVar23[0x26]);
          *(uint *)(unaff_x21 + 2) = *(uint *)(unaff_x21 + 2) | 4;
          if (*(int *)((long)unaff_x21 + 0x44) == 0xb) {
            pppppppbVar11 = (byte *******)unaff_x21[7];
          }
          else {
            func_0x0001098e0864(unaff_x21);
            pbVar1 = (byte *)((long)unaff_x21 + 0x44);
            pbVar1[0] = 0xb;
            pbVar1[1] = 0;
            pbVar1[2] = 0;
            pbVar1[3] = 0;
            pppppppbVar11 = (byte *******)unaff_x21[1];
            if (((ulong)pppppppbVar11 & 1) != 0) {
              pppppppbVar11 = *(byte ********)((ulong)pppppppbVar11 & 0xfffffffffffffffe);
            }
            func_0x0001098e14b8();
            unaff_x21[7] = (byte ******)pppppppbVar11;
          }
          pppppppbVar11[10] = (byte ******)0xffffffffffffff01;
          *(undefined4 *)(pppppppbVar11 + 0xb) = 4;
          *(uint *)(pppppppbVar11 + 2) = *(uint *)(pppppppbVar11 + 2) | 3;
          ppppppbVar17 = (byte ******)ppppppbVar22[7];
          if (*(int *)((long)pppppppbVar11 + 0x74) != 0x1e) {
            pbVar1 = (byte *)((long)pppppppbVar11 + 0x74);
            pbVar1[0] = 0x1e;
            pbVar1[1] = 0;
            pbVar1[2] = 0;
            pbVar1[3] = 0;
          }
          pppppppbVar11[0xd] = ppppppbVar17;
        }
        if ((byte ******)ppppppbVar22[8] != pppppppbVar23[0x25]) {
          pppppppbVar23[0x25] = (byte ******)ppppppbVar22[8];
          param_2 = (byte *******)0xffffffffffffff02;
          FUN_10ad6b650(pppppppbVar23,0xffffffffffffff02,&UNK_10f6a915f,10,1,0,0);
          unaff_x21 = pppppppbVar23;
          FUN_10ad6ba00();
          unaff_x21[5] = (byte ******)((long)ppppppbVar22[4] - (long)pppppppbVar23[0x26]);
          *(uint *)(unaff_x21 + 2) = *(uint *)(unaff_x21 + 2) | 4;
          if (*(int *)((long)unaff_x21 + 0x44) == 0xb) {
            pppppppbVar11 = (byte *******)unaff_x21[7];
          }
          else {
            func_0x0001098e0864(unaff_x21);
            pbVar1 = (byte *)((long)unaff_x21 + 0x44);
            pbVar1[0] = 0xb;
            pbVar1[1] = 0;
            pbVar1[2] = 0;
            pbVar1[3] = 0;
            pppppppbVar11 = (byte *******)unaff_x21[1];
            if (((ulong)pppppppbVar11 & 1) != 0) {
              pppppppbVar11 = *(byte ********)((ulong)pppppppbVar11 & 0xfffffffffffffffe);
            }
            func_0x0001098e14b8();
            unaff_x21[7] = (byte ******)pppppppbVar11;
          }
          pppppppbVar11[10] = (byte ******)0xffffffffffffff02;
          *(undefined4 *)(pppppppbVar11 + 0xb) = 4;
          *(uint *)(pppppppbVar11 + 2) = *(uint *)(pppppppbVar11 + 2) | 3;
          ppppppbVar17 = (byte ******)ppppppbVar22[8];
          if (*(int *)((long)pppppppbVar11 + 0x74) != 0x1e) {
            pbVar1 = (byte *)((long)pppppppbVar11 + 0x74);
            pbVar1[0] = 0x1e;
            pbVar1[1] = 0;
            pbVar1[2] = 0;
            pbVar1[3] = 0;
          }
          pppppppbVar11[0xd] = ppppppbVar17;
        }
        bVar7 = *(byte *)(ppppppbVar22 + 0x11);
        if (bVar7 == 1) {
          pppppppbVar20 = (byte *******)ppppppbVar22[0x12];
          ppppppbVar13 = (byte ******)ppppppbVar22[0x13];
          uVar18 = 0xcbf29ce484222325;
          pppppppbVar21 = pppppppbVar20;
          ppppppbVar17 = ppppppbVar13;
          if (pppppppbVar20 != (byte *******)0x0) {
            for (; ppppppbVar17 != (byte ******)0x0;
                ppppppbVar17 = (byte ******)((long)ppppppbVar17 + -1)) {
              uVar18 = (uVar18 ^ *(byte *)pppppppbVar21) * 0x100000001b3;
              pppppppbVar21 = (byte *******)((long)pppppppbVar21 + 1);
            }
          }
          pppppbVar14 = ppppppbVar22[0x15];
          ppppppbVar17 = (byte ******)
                         ((ulong)ppppppbVar22[0x14] ^ (ulong)pppppbVar14 ^ 0xcd571ec5ead37024 ^
                         uVar18);
        }
        else if ((ppppppbVar22[0xf] == (byte *****)0x0) || (*(byte *)ppppppbVar22 != 5)) {
          uVar6 = *(uint *)(ppppppbVar22 + 3);
          ppppppbVar17 = (byte ******)(ulong)uVar6;
          if ((int)uVar6 < 0) {
            pppppppbVar20 = pppppppbVar23 + 0x22;
            pppppppbVar19 = (byte *******)pppppppbVar23[0x22];
            pppppppbVar21 = pppppppbVar20;
            if (pppppppbVar19 != (byte *******)0x0) {
              do {
                lVar2 = 8;
                if (uVar6 <= *(uint *)(pppppppbVar19 + 4)) {
                  lVar2 = 0;
                  pppppppbVar21 = pppppppbVar19;
                }
                pppppppbVar19 = *(byte ********)((long)pppppppbVar19 + lVar2);
              } while (pppppppbVar19 != (byte *******)0x0);
              if ((pppppppbVar21 != pppppppbVar20) && (*(uint *)(pppppppbVar21 + 4) <= uVar6))
              goto LAB_10ad6b47c;
            }
            __ZNSt3__19to_stringEy(&pppppppbStack_90,ppppppbVar17);
            pppppppbVar11 = (byte *******)&pppppppbStack_90;
            param_2 = (byte *******)0x0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                      (pppppppbVar11,0,&UNK_10f586bd3,6);
            unaff_x21 = (byte *******)*pppppppbVar11;
            uStack_78._0_7_ = SUB87(pppppppbVar11[1],0);
            uStack_78._7_1_ = (undefined1)*(undefined8 *)((long)pppppppbVar11 + 0xf);
            uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)pppppppbVar11 + 0xf) >> 8);
            bVar8 = *(byte *)((long)pppppppbVar11 + 0x17);
            unaff_x20 = (byte *******)(long)(char)bVar8;
            pppppppbVar11[1] = (byte ******)0x0;
            pppppppbVar11[2] = (byte ******)0x0;
            *pppppppbVar11 = (byte ******)0x0;
            pppppppbVar21 = (byte *******)*pppppppbVar20;
            while (pppppppbVar19 = pppppppbVar20, pppppppbVar21 != (byte *******)0x0) {
              while (pppppppbVar19 = pppppppbVar21, *(uint *)(pppppppbVar19 + 4) <= uVar6) {
                if (uVar6 <= *(uint *)(pppppppbVar19 + 4)) {
                  if ((char)bVar8 < '\0') {
                    pppppppbVar11 = unaff_x21;
                    __ZdlPv();
                  }
                  goto LAB_10ad6b458;
                }
                pppppppbVar21 = (byte *******)pppppppbVar19[1];
                if ((byte *******)pppppppbVar19[1] == (byte *******)0x0) {
                  pppppppbVar20 = pppppppbVar19 + 1;
                  goto LAB_10ad6b414;
                }
              }
              pppppppbVar20 = pppppppbVar19;
              pppppppbVar21 = (byte *******)*pppppppbVar19;
            }
LAB_10ad6b414:
            param_2 = pppppppbVar19;
            pppppppbVar19 = (byte *******)0x40;
            __Znwm();
            *(uint *)(pppppppbVar19 + 4) = uVar6;
            pppppppbVar19[5] = (byte ******)unaff_x21;
            pppppppbVar19[6] = (byte ******)CONCAT17(uStack_78._7_1_,(undefined7)uStack_78);
            *(ulong *)((long)pppppppbVar19 + 0x37) = CONCAT71(uStack_70,uStack_78._7_1_);
            *(byte *)((long)pppppppbVar19 + 0x3f) = bVar8;
            uStack_78._0_7_ = 0;
            uStack_78._7_1_ = 0;
            uStack_70 = 0;
            pppppppbVar11 = pppppppbVar23 + 0x21;
            func_0x0001098c6ffc(pppppppbVar11,param_2,pppppppbVar20,pppppppbVar19);
LAB_10ad6b458:
            if ((long)uStack_80 < 0) {
              pppppppbVar11 = pppppppbStack_90;
              __ZdlPv();
            }
            ppppppbVar13 = (byte ******)(long)(char)*(byte *)((long)pppppppbVar19 + 0x3f);
            if ((long)ppppppbVar13 < 0) {
              pppppbVar14 = (byte *****)0x0;
              pppppppbVar20 = (byte *******)pppppppbVar19[5];
              ppppppbVar13 = pppppppbVar19[6];
            }
            else {
              pppppbVar14 = (byte *****)0x0;
              pppppppbVar20 = pppppppbVar19 + 5;
            }
          }
          else {
            unaff_x20 = pppppppbVar23 + 0x1f;
            pppppppbVar20 = (byte *******)*unaff_x20;
            pppppppbVar21 = unaff_x20;
            if (pppppppbVar20 != (byte *******)0x0) {
              do {
                lVar2 = 8;
                if (ppppppbVar17 <= pppppppbVar20[4]) {
                  lVar2 = 0;
                  pppppppbVar21 = pppppppbVar20;
                }
                pppppppbVar20 = *(byte ********)((long)pppppppbVar20 + lVar2);
              } while (pppppppbVar20 != (byte *******)0x0);
              if ((pppppppbVar21 != unaff_x20) && (pppppppbVar21[4] <= ppppppbVar17)) {
LAB_10ad6b47c:
                ppppppbVar13 = (byte ******)(long)(char)*(byte *)((long)pppppppbVar21 + 0x3f);
                if ((long)ppppppbVar13 < 0) {
                  pppppbVar14 = (byte *****)0x0;
                  pppppppbVar20 = (byte *******)pppppppbVar21[5];
                  ppppppbVar13 = pppppppbVar21[6];
                }
                else {
                  pppppbVar14 = (byte *****)0x0;
                  pppppppbVar20 = pppppppbVar21 + 5;
                }
                goto LAB_10ad6ad80;
              }
            }
            __ZNSt3__19to_stringEy(&pppppppbStack_90,ppppppbVar17);
            pppppppbVar11 = (byte *******)&pppppppbStack_90;
            param_2 = (byte *******)0x0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                      (pppppppbVar11,0,&UNK_10f6a916a,7);
            pppppppbVar21 = (byte *******)*pppppppbVar11;
            uStack_78._0_7_ = SUB87(pppppppbVar11[1],0);
            uStack_78._7_1_ = (undefined1)*(undefined8 *)((long)pppppppbVar11 + 0xf);
            uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)pppppppbVar11 + 0xf) >> 8);
            bVar8 = *(byte *)((long)pppppppbVar11 + 0x17);
            unaff_x21 = (byte *******)(long)(char)bVar8;
            pppppppbVar11[1] = (byte ******)0x0;
            pppppppbVar11[2] = (byte ******)0x0;
            *pppppppbVar11 = (byte ******)0x0;
            pppppppbVar19 = (byte *******)*unaff_x20;
            pppppppbVar20 = unaff_x20;
            while (pppppppbVar12 = pppppppbVar20, pppppppbVar19 != (byte *******)0x0) {
              while (pppppppbVar12 = pppppppbVar19, pppppppbVar12[4] <= ppppppbVar17) {
                if (ppppppbVar17 <= pppppppbVar12[4]) {
                  if ((char)bVar8 < '\0') {
                    __ZdlPv();
                    pppppppbVar11 = pppppppbVar21;
                  }
                  goto LAB_10ad6afe8;
                }
                pppppppbVar19 = (byte *******)pppppppbVar12[1];
                if ((byte *******)pppppppbVar12[1] == (byte *******)0x0) {
                  pppppppbVar20 = pppppppbVar12 + 1;
                  goto LAB_10ad6afa0;
                }
              }
              pppppppbVar20 = pppppppbVar12;
              pppppppbVar19 = (byte *******)*pppppppbVar12;
            }
LAB_10ad6afa0:
            param_2 = pppppppbVar12;
            pppppppbVar12 = (byte *******)0x40;
            __Znwm();
            pppppppbVar11 = pppppppbVar23 + 0x1e;
            pppppppbVar12[4] = ppppppbVar17;
            pppppppbVar12[5] = (byte ******)pppppppbVar21;
            pppppppbVar12[6] = (byte ******)CONCAT17(uStack_78._7_1_,(undefined7)uStack_78);
            *(ulong *)((long)pppppppbVar12 + 0x37) = CONCAT71(uStack_70,uStack_78._7_1_);
            *(byte *)((long)pppppppbVar12 + 0x3f) = bVar8;
            uStack_78._0_7_ = 0;
            uStack_78._7_1_ = 0;
            uStack_70 = 0;
            FUN_10ad6ba54(pppppppbVar11,param_2,pppppppbVar20,pppppppbVar12);
LAB_10ad6afe8:
            if ((long)uStack_80 < 0) {
              pppppppbVar11 = pppppppbStack_90;
              __ZdlPv();
            }
            ppppppbVar13 = (byte ******)(long)(char)*(byte *)((long)pppppppbVar12 + 0x3f);
            if ((long)ppppppbVar13 < 0) {
              pppppbVar14 = (byte *****)0x0;
              pppppppbVar20 = (byte *******)pppppppbVar12[5];
              ppppppbVar13 = pppppppbVar12[6];
            }
            else {
              pppppbVar14 = (byte *****)0x0;
              pppppppbVar20 = pppppppbVar12 + 5;
            }
          }
        }
        else {
          pppppbVar14 = (byte *****)0x0;
          pppppppbVar20 = (byte *******)ppppppbVar22[1];
          ppppppbVar13 = (byte ******)ppppppbVar22[2];
          if ((pppppppbVar20 == (byte *******)0x0) || (ppppppbVar13 == (byte ******)0x0)) {
            ppppppbVar17 = (byte ******)0x6a582216ef15301;
          }
          else {
            ppppppbVar17 = (byte ******)0x0;
            uVar18 = 0xcbf29ce484222325;
            do {
              uVar18 = (uVar18 ^ *(byte *)((long)pppppppbVar20 + (long)ppppppbVar17)) *
                       0x100000001b3;
              ppppppbVar17 = (byte ******)((long)ppppppbVar17 + 1);
            } while (ppppppbVar13 != ppppppbVar17);
            pppppbVar14 = (byte *****)0x0;
            ppppppbVar17 = (byte ******)(uVar18 ^ 0xcd571ec5ead37024);
          }
        }
LAB_10ad6ad80:
        uVar18 = (ulong)*(ushort *)((long)ppppppbVar22 + 2);
        if (0x2e < uVar18) {
LAB_10ad6b578:
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10ad6b57c);
          (*pcVar9)();
        }
        puVar4 = (&PTR_DAT_110c71100)[uVar18 * 2];
        uVar5 = *(undefined8 *)(&UNK_110c71108 + uVar18 * 0x10);
        bVar8 = *(byte *)ppppppbVar22;
        if (bVar8 < 5) {
          if (bVar8 == 3) {
            FUN_10ad6b650(pppppppbVar23,ppppppbVar17,pppppppbVar20,ppppppbVar13,0,bVar7,pppppbVar14)
            ;
            pppppppbVar11 = pppppppbVar23;
            FUN_10ad6ba00();
            pppppppbVar11[5] = (byte ******)((long)ppppppbVar22[4] - (long)pppppppbVar23[0x26]);
            *(uint *)(pppppppbVar11 + 2) = *(uint *)(pppppppbVar11 + 2) | 4;
            if (*(int *)((long)pppppppbVar11 + 0x44) == 0xb) {
              pppppppbVar20 = (byte *******)pppppppbVar11[7];
            }
            else {
              func_0x0001098e0864(pppppppbVar11);
              pbVar1 = (byte *)((long)pppppppbVar11 + 0x44);
              pbVar1[0] = 0xb;
              pbVar1[1] = 0;
              pbVar1[2] = 0;
              pbVar1[3] = 0;
              pppppppbVar20 = (byte *******)pppppppbVar11[1];
              if (((ulong)pppppppbVar20 & 1) != 0) {
                pppppppbVar20 = *(byte ********)((ulong)pppppppbVar20 & 0xfffffffffffffffe);
              }
              func_0x0001098e14b8();
              pppppppbVar11[7] = (byte ******)pppppppbVar20;
            }
            pppppppbVar20[10] = ppppppbVar17;
            *(undefined4 *)(pppppppbVar20 + 0xb) = 1;
            *(uint *)(pppppppbVar20 + 2) = *(uint *)(pppppppbVar20 + 2) | 3;
            pppppppbVar11 = pppppppbVar23;
            FUN_10ad6baa8(pppppppbVar23,ppppppbVar22[1],ppppppbVar22[2]);
            if (*(int *)(pppppppbVar20 + 0xe) != 10) {
              *(undefined4 *)(pppppppbVar20 + 0xe) = 10;
            }
            pppppppbVar20[0xc] = (byte ******)pppppppbVar11;
            unaff_x21 = pppppppbVar23;
            FUN_10ad6bccc(pppppppbVar23,puVar4,uVar5);
            pppppppbVar11 = pppppppbVar20 + 3;
            iVar15 = *(int *)pppppppbVar11;
            iVar3 = *(int *)((long)pppppppbVar20 + 0x1c);
            if (iVar15 == iVar3) {
              func_0x0001087675dc(pppppppbVar11,iVar3,iVar3 + 1);
LAB_10ad6b4f8:
              iVar15 = *(int *)pppppppbVar11;
            }
LAB_10ad6b21c:
            *(int *)(pppppppbVar20 + 3) = iVar15 + 1;
            pppppppbVar20[4][iVar15] = (byte *****)unaff_x21;
          }
          else {
            if (bVar8 != 4) goto LAB_10ad6b2c8;
            FUN_10ad6b650(pppppppbVar23,ppppppbVar17,pppppppbVar20,ppppppbVar13,0,bVar7,pppppbVar14)
            ;
            unaff_x21 = pppppppbVar23;
            FUN_10ad6ba00();
            unaff_x21[5] = (byte ******)((long)ppppppbVar22[4] - (long)pppppppbVar23[0x26]);
            *(uint *)(unaff_x21 + 2) = *(uint *)(unaff_x21 + 2) | 4;
            if (*(int *)((long)unaff_x21 + 0x44) == 0xb) {
              pppppppbVar20 = (byte *******)unaff_x21[7];
            }
            else {
              func_0x0001098e0864(unaff_x21);
              pbVar1 = (byte *)((long)unaff_x21 + 0x44);
              pbVar1[0] = 0xb;
              pbVar1[1] = 0;
              pbVar1[2] = 0;
              pbVar1[3] = 0;
              pppppppbVar20 = (byte *******)unaff_x21[1];
              if (((ulong)pppppppbVar20 & 1) != 0) {
                pppppppbVar20 = *(byte ********)((ulong)pppppppbVar20 & 0xfffffffffffffffe);
              }
              func_0x0001098e14b8();
              unaff_x21[7] = (byte ******)pppppppbVar20;
            }
            pppppppbVar20[10] = ppppppbVar17;
            *(undefined4 *)(pppppppbVar20 + 0xb) = 2;
            *(uint *)(pppppppbVar20 + 2) = *(uint *)(pppppppbVar20 + 2) | 3;
          }
          pppppppbVar11 = (byte *******)&pppppppbStack_90;
          param_2 = pppppppbVar23;
          pppppppbStack_90 = pppppppbVar20;
          FUN_10ad6bf70(pppppppbVar11,pppppppbVar23,ppppppbVar22[10]);
          unaff_x20 = (byte *******)ppppppbVar22[0xd];
          for (pppppppbVar20 = (byte *******)ppppppbVar22[0xc]; pppppppbVar20 != unaff_x20;
              pppppppbVar20 = pppppppbVar20 + 2) {
            pppppppbVar11 = (byte *******)&pppppppbStack_90;
            param_2 = pppppppbVar23;
            FUN_10ad6bf70(pppppppbVar11,pppppppbVar23,*pppppppbVar20);
          }
        }
        else if (bVar8 == 5) {
          FUN_10ad6b650(pppppppbVar23,ppppppbVar17,pppppppbVar20,ppppppbVar13,1,0,0);
          unaff_x21 = pppppppbVar23;
          FUN_10ad6ba00();
          unaff_x21[5] = (byte ******)((long)ppppppbVar22[4] - (long)pppppppbVar23[0x26]);
          *(uint *)(unaff_x21 + 2) = *(uint *)(unaff_x21 + 2) | 4;
          if (*(int *)((long)unaff_x21 + 0x44) == 0xb) {
            ppppppbVar13 = unaff_x21[7];
          }
          else {
            func_0x0001098e0864(unaff_x21);
            pbVar1 = (byte *)((long)unaff_x21 + 0x44);
            pbVar1[0] = 0xb;
            pbVar1[1] = 0;
            pbVar1[2] = 0;
            pbVar1[3] = 0;
            ppppppbVar13 = unaff_x21[1];
            if (((ulong)ppppppbVar13 & 1) != 0) {
              ppppppbVar13 = *(byte *******)((ulong)ppppppbVar13 & 0xfffffffffffffffe);
            }
            func_0x0001098e14b8();
            unaff_x21[7] = ppppppbVar13;
          }
          ppppppbVar13[10] = (byte *****)ppppppbVar17;
          *(undefined4 *)(ppppppbVar13 + 0xb) = 4;
          *(uint *)(ppppppbVar13 + 2) = *(uint *)(ppppppbVar13 + 2) | 3;
          uStack_78._0_7_ = SUB87(ppppppbVar13,0);
          uStack_78._7_1_ = (undefined1)((ulong)ppppppbVar13 >> 0x38);
          if (*(uint *)(ppppppbVar22 + 6) == 0xffffffff) {
            FUN_10a0d459c();
            goto LAB_10ad6b578;
          }
          pppppppbStack_90 = (byte *******)&uStack_78;
          pppppppbVar11 = (byte *******)&pppppppbStack_90;
          param_2 = (byte *******)(ppppppbVar22 + 5);
          (*(code *)(&PTR_FUN_110c713f0)[*(uint *)(ppppppbVar22 + 6)])();
        }
        else if (bVar8 == 6) {
          FUN_10ad6b650(pppppppbVar23,ppppppbVar17,pppppppbVar20,ppppppbVar13,0,bVar7,pppppbVar14);
          pppppppbVar11 = pppppppbVar23;
          FUN_10ad6ba00();
          pppppppbVar11[5] = (byte ******)((long)ppppppbVar22[4] - (long)pppppppbVar23[0x26]);
          *(uint *)(pppppppbVar11 + 2) = *(uint *)(pppppppbVar11 + 2) | 4;
          if (*(int *)((long)pppppppbVar11 + 0x44) == 0xb) {
            pppppppbVar20 = (byte *******)pppppppbVar11[7];
          }
          else {
            func_0x0001098e0864(pppppppbVar11);
            pbVar1 = (byte *)((long)pppppppbVar11 + 0x44);
            pbVar1[0] = 0xb;
            pbVar1[1] = 0;
            pbVar1[2] = 0;
            pbVar1[3] = 0;
            pppppppbVar20 = (byte *******)pppppppbVar11[1];
            if (((ulong)pppppppbVar20 & 1) != 0) {
              pppppppbVar20 = *(byte ********)((ulong)pppppppbVar20 & 0xfffffffffffffffe);
            }
            func_0x0001098e14b8();
            pppppppbVar11[7] = (byte ******)pppppppbVar20;
          }
          pppppppbVar20[10] = ppppppbVar17;
          *(undefined4 *)(pppppppbVar20 + 0xb) = 3;
          *(uint *)(pppppppbVar20 + 2) = *(uint *)(pppppppbVar20 + 2) | 3;
          pppppppbVar11 = pppppppbVar23;
          FUN_10ad6baa8(pppppppbVar23,ppppppbVar22[1],ppppppbVar22[2]);
          if (*(int *)(pppppppbVar20 + 0xe) != 10) {
            *(undefined4 *)(pppppppbVar20 + 0xe) = 10;
          }
          pppppppbVar20[0xc] = (byte ******)pppppppbVar11;
          unaff_x21 = pppppppbVar23;
          FUN_10ad6bccc(pppppppbVar23,puVar4,uVar5);
          pppppppbVar11 = pppppppbVar20 + 3;
          iVar15 = *(int *)pppppppbVar11;
          iVar3 = *(int *)((long)pppppppbVar20 + 0x1c);
          if (iVar15 == iVar3) {
            func_0x0001087675dc(pppppppbVar11,iVar3,iVar3 + 1);
            goto LAB_10ad6b4f8;
          }
          goto LAB_10ad6b21c;
        }
LAB_10ad6b2c8:
        if (*(int *)(pppppppbVar23 + 0xb) != 0) {
          unaff_x21 = pppppppbVar23 + 8;
          func_0x0001098e0fb4();
          FUN_10a0dc020(&pppppppbStack_90,unaff_x21);
          func_0x00010b4d1758(pppppppbVar23 + 8,pppppppbStack_90,unaff_x21);
          if (0 < *(int *)(pppppppbVar23 + 0xb)) {
            func_0x0001053936e4(pppppppbVar23 + 10);
          }
          __ZNSt3__15mutex4lockEv(pppppppbVar23);
          pppppppbVar23[0x27] = (byte ******)((long)unaff_x21 + (long)pppppppbVar23[0x27]);
          param_2 = (byte *******)&pppppppbStack_90;
          FUN_10a59e714(pppppppbVar23 + 0x28);
          __ZNSt3__15mutex6unlockEv(pppppppbVar23);
          pppppppbVar11 = pppppppbStack_90;
          if (pppppppbStack_90 != (byte *******)0x0) {
            pppppppbStack_88 = pppppppbStack_90;
            __ZdlPv();
          }
        }
      }
      iVar15 = (int)unaff_x20;
      ppppppbVar22 = ppppppbVar22 + 0x16;
    } while (ppppppbVar22 != ppppppbVar16);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    if (iVar15 < 0) {
      __ZdlPv(unaff_x21);
    }
    if ((long)uStack_80 < 0) {
      __ZdlPv(pppppppbStack_90);
    }
    __ZNSt3__15mutex6unlockEv(pppppppbVar10);
    __Unwind_Resume(pppppppbVar11);
    FUN_10a042ab0(param_2,&PTR_DAT_110c71408);
    pppppppbVar11 = pppppppbVar11 + 1;
    if ((int)param_2 == 0) {
      pppppppbVar11 = (byte *******)0x0;
    }
    return pppppppbVar11;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(pppppppbVar10);
  return pppppppbVar10;
}



/* Entry: 10ad6b608; end: 10ad6b643;  */

long FUN_10ad6b608(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c71408);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10ad6b644; end: 10ad6b64f;  */

undefined ** FUN_10ad6b644(void)

{
  return &PTR_DAT_110c71408;
}



/* Entry: 10ad6b650; end: 10ad6b9ff;  */

void FUN_10ad6b650(ulong param_1,ulong param_2,undefined8 param_3,ulong param_4,int param_5,
                  int param_6,long param_7)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 **ppuVar4;
  undefined1 **ppuVar5;
  undefined1 **ppuVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined1 **ppuVar13;
  ulong uVar14;
  undefined1 **ppuVar15;
  undefined1 **ppuVar16;
  undefined1 *puStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  
  ppuVar4 = &puStack_70;
  ppuVar15 = &puStack_70;
  ppuVar5 = &puStack_70;
  ppuVar16 = &puStack_70;
  ppuVar6 = &puStack_70;
  ppuVar13 = &puStack_70;
  plVar10 = (long *)(param_1 + 0xe0);
  plVar11 = (long *)*plVar10;
  plVar12 = plVar10;
  if (plVar11 != (long *)0x0) {
    do {
      lVar7 = 8;
      if (param_2 <= (ulong)plVar11[4]) {
        lVar7 = 0;
        plVar12 = plVar11;
      }
      plVar11 = *(long **)((long)plVar11 + lVar7);
    } while (plVar11 != (long *)0x0);
    if ((plVar12 != plVar10) && ((ulong)plVar12[4] <= param_2)) {
      return;
    }
  }
  uStack_58 = param_2;
  FUN_109d4f824(param_1 + 0xd8,&uStack_58,&uStack_58);
  uVar9 = param_1;
  FUN_10ad6ba00();
  if (*(int *)(uVar9 + 0x44) == 0x3c) {
    uVar8 = uVar9;
    uVar9 = *(ulong *)(uVar9 + 0x38);
  }
  else {
    func_0x0001098e0864(uVar9);
    *(undefined4 *)(uVar9 + 0x44) = 0x3c;
    uVar8 = *(ulong *)(uVar9 + 8);
    if ((uVar8 & 1) != 0) {
      uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
    }
    func_0x0001098e14e8();
    *(ulong *)(uVar9 + 0x38) = uVar8;
    uVar9 = uVar8;
  }
  *(ulong *)(uVar9 + 0x38) = uStack_58;
  uVar2 = *(uint *)(uVar9 + 0x10);
  *(uint *)(uVar9 + 0x10) = uVar2 | 0x10;
  uVar3 = (undefined1)param_4;
  if (param_5 == 0) {
    if (param_6 == 0) {
      *(uint *)(uVar9 + 0x10) = uVar2 | 0x14;
      uVar14 = *(ulong *)(uVar9 + 0x28);
      if (*(ulong *)(uVar9 + 0x28) == 0) {
        uVar8 = *(ulong *)(uVar9 + 8);
        if ((uVar8 & 1) != 0) {
          uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
        }
        func_0x0001098e1294();
        *(ulong *)(uVar9 + 0x28) = uVar8;
        uVar14 = uVar8;
      }
      *(int *)(uVar14 + 0x20) = (int)*(undefined8 *)(param_1 + 0x70);
      *(int *)(uVar14 + 0x24) = (int)uStack_58;
      *(uint *)(uVar14 + 0x10) = *(uint *)(uVar14 + 0x10) | 6;
      if (0x7ffffffffffffff7 < param_4) goto LAB_10ad6b9d8;
      if (param_4 < 0x17) {
        uStack_60 = CONCAT17(uVar3,(undefined7)uStack_60);
        if (param_4 == 0) goto LAB_10ad6b940;
      }
      else {
        puVar1 = (undefined1 *)0x19;
        if ((param_4 | 7) != 0x17) {
          puVar1 = (undefined1 *)((param_4 | 7) + 1);
        }
        ppuVar6 = (undefined1 **)puVar1;
        __Znwm();
        uStack_60 = (ulong)puVar1 | 0x8000000000000000;
        puStack_70 = (undefined1 *)ppuVar6;
        uStack_68 = param_4;
      }
      _memmove(ppuVar6,param_3,param_4);
      ppuVar13 = ppuVar6;
LAB_10ad6b940:
      *(undefined1 *)((long)ppuVar13 + param_4) = 0;
      *(uint *)(uVar14 + 0x10) = *(uint *)(uVar14 + 0x10) | 1;
      uVar9 = *(ulong *)(uVar14 + 8);
      if ((uVar9 & 1) != 0) {
        uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
      }
      func_0x000107c3024c(uVar14 + 0x18,&puStack_70,uVar9);
      if (-1 < (long)uStack_60) {
        return;
      }
      __ZdlPv(puStack_70);
      return;
    }
    if (0x7ffffffffffffff7 < param_4) {
LAB_10ad6b9d8:
      func_0x000109ffde50();
      if (uStack_60._7_1_ < '\0') {
        __ZdlPv(puStack_70);
      }
      __Unwind_Resume();
      lVar7 = uVar8 + 0x50;
      func_0x000107c303b0(lVar7,&UNK_1098e15dc);
      *(undefined8 *)(lVar7 + 0x28) = 0;
      if (*(int *)(lVar7 + 0x48) != 10) {
        *(undefined4 *)(lVar7 + 0x48) = 10;
      }
      *(undefined4 *)(lVar7 + 0x40) = 1;
      *(undefined4 *)(lVar7 + 0x30) = 2;
      *(uint *)(lVar7 + 0x10) = *(uint *)(lVar7 + 0x10) | 0xc;
      return;
    }
    if (param_4 < 0x17) {
      uStack_60 = CONCAT17(uVar3,(undefined7)uStack_60);
      if (param_4 == 0) goto LAB_10ad6b8bc;
    }
    else {
      puVar1 = (undefined1 *)0x19;
      if ((param_4 | 7) != 0x17) {
        puVar1 = (undefined1 *)((param_4 | 7) + 1);
      }
      ppuVar5 = (undefined1 **)puVar1;
      __Znwm();
      uStack_60 = (ulong)puVar1 | 0x8000000000000000;
      puStack_70 = (undefined1 *)ppuVar5;
      uStack_68 = param_4;
    }
    _memmove(ppuVar5,param_3,param_4);
    ppuVar16 = ppuVar5;
LAB_10ad6b8bc:
    *(undefined1 *)((long)ppuVar16 + param_4) = 0;
    *(uint *)(uVar9 + 0x10) = *(uint *)(uVar9 + 0x10) | 1;
    uVar8 = *(ulong *)(uVar9 + 8);
    if ((uVar8 & 1) != 0) {
      uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
    }
    func_0x000107c3024c(uVar9 + 0x18,&puStack_70,uVar8);
    if ((long)uStack_60 < 0) {
      __ZdlPv(puStack_70);
    }
    if (param_7 == 0) {
      return;
    }
    *(long *)(uVar9 + 0x40) = param_7;
    *(uint *)(uVar9 + 0x10) = *(uint *)(uVar9 + 0x10) | 0x20;
    return;
  }
  if (0x7ffffffffffffff7 < param_4) goto LAB_10ad6b9d8;
  if (param_4 < 0x17) {
    uStack_60 = CONCAT17(uVar3,(undefined7)uStack_60);
    if (param_4 == 0) goto LAB_10ad6b828;
  }
  else {
    puVar1 = (undefined1 *)0x19;
    if ((param_4 | 7) != 0x17) {
      puVar1 = (undefined1 *)((param_4 | 7) + 1);
    }
    ppuVar4 = (undefined1 **)puVar1;
    __Znwm();
    uStack_60 = (ulong)puVar1 | 0x8000000000000000;
    puStack_70 = (undefined1 *)ppuVar4;
    uStack_68 = param_4;
  }
  _memmove(ppuVar4,param_3,param_4);
  ppuVar15 = ppuVar4;
LAB_10ad6b828:
  *(undefined1 *)((long)ppuVar15 + param_4) = 0;
  *(uint *)(uVar9 + 0x10) = *(uint *)(uVar9 + 0x10) | 1;
  uVar8 = *(ulong *)(uVar9 + 8);
  if ((uVar8 & 1) != 0) {
    uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
  }
  func_0x000107c3024c(uVar9 + 0x18,&puStack_70,uVar8);
  if ((long)uStack_60 < 0) {
    __ZdlPv(puStack_70);
  }
  *(uint *)(uVar9 + 0x10) = *(uint *)(uVar9 + 0x10) | 8;
  if (*(long *)(uVar9 + 0x30) == 0) {
    uVar8 = *(ulong *)(uVar9 + 8);
    if ((uVar8 & 1) != 0) {
      uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
    }
    func_0x0001098e1438();
    *(ulong *)(uVar9 + 0x30) = uVar8;
  }
  return;
}



/* Entry: 10ad6ba00; end: 10ad6ba53;  */

void FUN_10ad6ba00(long param_1)

{
  param_1 = param_1 + 0x50;
  func_0x000107c303b0(param_1,&UNK_1098e15dc);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x48) != 10) {
    *(undefined4 *)(param_1 + 0x48) = 10;
  }
  *(undefined4 *)(param_1 + 0x40) = 1;
  *(undefined4 *)(param_1 + 0x30) = 2;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0xc;
  return;
}



/* Entry: 10ad6ba54; end: 10ad6baa7;  */

void FUN_10ad6ba54(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c2b058(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10ad6baa8; end: 10ad6bccb;  */

long * FUN_10ad6baa8(long param_1,undefined8 param_2,undefined8 ******param_3,long *param_4)

{
  undefined8 ******ppppppuVar1;
  undefined8 uVar2;
  undefined8 ******ppppppuVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *****pppppuVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uStack_138;
  undefined8 *****pppppuStack_f8;
  undefined8 *****pppppuStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 *****pppppuStack_d8;
  undefined8 *****pppppuStack_78;
  undefined8 *****pppppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *****pppppuStack_58;
  
  lVar5 = param_1 + 0x88;
  puVar6 = &uStack_60;
  uStack_60 = param_2;
  pppppuStack_58 = param_3;
  FUN_10ad5d164();
  pppppuVar7 = pppppuStack_58;
  uVar2 = uStack_60;
  if (param_1 + 0x90 != lVar5) {
    return *(long **)(lVar5 + 0x38);
  }
  plVar8 = *(long **)(param_1 + 0x78);
  *(long *)(param_1 + 0x78) = (long)plVar8 + 1;
  if (pppppuStack_58 < (undefined8 ******)0x7ffffffffffffff8) {
    if (pppppuStack_58 < (undefined8 ******)0x17) {
      uStack_68 = CONCAT17((char)pppppuStack_58,(undefined7)uStack_68);
      ppppppuVar3 = &pppppuStack_78;
      if ((undefined8 ******)pppppuStack_58 != (undefined8 ******)0x0) goto LAB_10ad6bb50;
    }
    else {
      ppppppuVar1 = (undefined8 ******)0x19;
      if (((ulong)pppppuStack_58 | 7) != 0x17) {
        ppppppuVar1 = (undefined8 ******)(((ulong)pppppuStack_58 | 7) + 1);
      }
      ppppppuVar3 = ppppppuVar1;
      __Znwm();
      uStack_68 = (ulong)ppppppuVar1 | 0x8000000000000000;
      pppppuStack_70 = pppppuVar7;
      pppppuStack_78 = ppppppuVar3;
LAB_10ad6bb50:
      _memmove(ppppppuVar3,uVar2,pppppuVar7);
    }
    *(undefined1 *)((long)ppppppuVar3 + (long)pppppuVar7) = 0;
    param_3 = &pppppuStack_78;
    param_4 = plVar8;
    FUN_10ad6bef0(param_1 + 0x88,&pppppuStack_78);
    if ((long)uStack_68 < 0) {
      __ZdlPv(pppppuStack_78);
    }
    FUN_10ad6ba00();
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
    uVar4 = *(ulong *)(param_1 + 0x18);
    if (uVar4 == 0) {
      uVar4 = *(ulong *)(param_1 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      func_0x0001098e1570();
      *(ulong *)(param_1 + 0x18) = uVar4;
    }
    puVar6 = (undefined8 *)&UNK_1098e1308;
    lVar5 = uVar4 + 0x28;
    func_0x000107c303b0();
    pppppuVar7 = pppppuStack_58;
    uVar2 = uStack_60;
    *(long **)(lVar5 + 0x20) = plVar8;
    *(uint *)(lVar5 + 0x10) = *(uint *)(lVar5 + 0x10) | 2;
    if (pppppuStack_58 < (undefined8 ******)0x7ffffffffffffff8) {
      if (pppppuStack_58 < (undefined8 ******)0x17) {
        uStack_68 = CONCAT17((char)pppppuStack_58,(undefined7)uStack_68);
        ppppppuVar3 = &pppppuStack_78;
        if ((undefined8 ******)pppppuStack_58 == (undefined8 ******)0x0) goto LAB_10ad6bc3c;
      }
      else {
        ppppppuVar1 = (undefined8 ******)0x19;
        if (((ulong)pppppuStack_58 | 7) != 0x17) {
          ppppppuVar1 = (undefined8 ******)(((ulong)pppppuStack_58 | 7) + 1);
        }
        ppppppuVar3 = ppppppuVar1;
        __Znwm();
        uStack_68 = (ulong)ppppppuVar1 | 0x8000000000000000;
        pppppuStack_70 = pppppuVar7;
        pppppuStack_78 = ppppppuVar3;
      }
      _memmove(ppppppuVar3,uVar2,pppppuVar7);
LAB_10ad6bc3c:
      *(undefined1 *)((long)ppppppuVar3 + (long)pppppuVar7) = 0;
      *(uint *)(lVar5 + 0x10) = *(uint *)(lVar5 + 0x10) | 1;
      uVar4 = *(ulong *)(lVar5 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      func_0x000107c3024c(lVar5 + 0x18,&pppppuStack_78,uVar4);
      if ((long)uStack_68 < 0) {
        __ZdlPv(pppppuStack_78);
      }
      return plVar8;
    }
  }
  func_0x000109ffde50();
  if ((long)uStack_68 < 0) {
    __ZdlPv(pppppuStack_78);
  }
  __Unwind_Resume();
  plVar8 = (long *)(lVar5 + 0xa0);
  puStack_e0 = puVar6;
  pppppuStack_d8 = param_3;
  FUN_10ad5d164(plVar8,&puStack_e0);
  pppppuVar7 = pppppuStack_d8;
  puVar6 = puStack_e0;
  if ((long *)(lVar5 + 0xa8) != plVar8) {
    return (long *)plVar8[7];
  }
  plVar9 = *(long **)(lVar5 + 0x80);
  *(long *)(lVar5 + 0x80) = (long)plVar9 + 1;
  if ((undefined8 ******)0x7ffffffffffffff7 < pppppuStack_d8) goto LAB_10ad6becc;
  if (pppppuStack_d8 < (undefined8 ******)0x17) {
    uStack_e8 = CONCAT17((char)pppppuStack_d8,(undefined7)uStack_e8);
    ppppppuVar3 = &pppppuStack_f8;
    if ((undefined8 ******)pppppuStack_d8 != (undefined8 ******)0x0) goto LAB_10ad6bd74;
  }
  else {
    ppppppuVar1 = (undefined8 ******)0x19;
    if (((ulong)pppppuStack_d8 | 7) != 0x17) {
      ppppppuVar1 = (undefined8 ******)(((ulong)pppppuStack_d8 | 7) + 1);
    }
    ppppppuVar3 = ppppppuVar1;
    __Znwm();
    uStack_e8 = (ulong)ppppppuVar1 | 0x8000000000000000;
    pppppuStack_f0 = pppppuVar7;
    pppppuStack_f8 = ppppppuVar3;
LAB_10ad6bd74:
    _memmove(ppppppuVar3,puVar6,pppppuVar7);
  }
  *(undefined1 *)((long)ppppppuVar3 + (long)pppppuVar7) = 0;
  param_3 = &pppppuStack_f8;
  param_4 = plVar9;
  FUN_10ad6bef0(lVar5 + 0xa0,&pppppuStack_f8);
  if ((long)uStack_e8 < 0) {
    __ZdlPv(pppppuStack_f8);
  }
  FUN_10ad6ba00();
  *(uint *)(lVar5 + 0x10) = *(uint *)(lVar5 + 0x10) | 1;
  uVar4 = *(ulong *)(lVar5 + 0x18);
  if (uVar4 == 0) {
    uVar4 = *(ulong *)(lVar5 + 8);
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x0001098e1570();
    *(ulong *)(lVar5 + 0x18) = uVar4;
  }
  plVar8 = (long *)(uVar4 + 0x10);
  func_0x000107c303b0(plVar8,&UNK_1098e1340);
  pppppuVar7 = pppppuStack_d8;
  puVar6 = puStack_e0;
  plVar8[4] = (long)plVar9;
  *(uint *)(plVar8 + 2) = *(uint *)(plVar8 + 2) | 2;
  if ((undefined8 ******)0x7ffffffffffffff7 < pppppuStack_d8) {
LAB_10ad6becc:
    func_0x000109ffde50();
    if ((long)uStack_e8 < 0) {
      __ZdlPv(pppppuStack_f8);
    }
    __Unwind_Resume();
    plVar9 = plVar8;
    func_0x00010ad5d250();
    if (*plVar9 == 0) {
      lVar5 = 0x40;
      __Znwm();
      pppppuVar7 = *param_3;
      *(undefined8 ******)(lVar5 + 0x28) = param_3[1];
      *(undefined8 ******)(lVar5 + 0x20) = pppppuVar7;
      pppppuVar7 = param_3[2];
      *param_3 = (undefined8 *****)0x0;
      param_3[1] = (undefined8 *****)0x0;
      param_3[2] = (undefined8 *****)0x0;
      *(undefined8 ******)(lVar5 + 0x30) = pppppuVar7;
      *(long **)(lVar5 + 0x38) = param_4;
      FUN_10ad5d2d4(plVar8,uStack_138,plVar9,lVar5);
      plVar9 = plVar8;
    }
    return plVar9;
  }
  if (pppppuStack_d8 < (undefined8 ******)0x17) {
    uStack_e8 = CONCAT17((char)pppppuStack_d8,(undefined7)uStack_e8);
    ppppppuVar3 = &pppppuStack_f8;
    if ((undefined8 ******)pppppuStack_d8 == (undefined8 ******)0x0) goto LAB_10ad6be60;
  }
  else {
    ppppppuVar1 = (undefined8 ******)0x19;
    if (((ulong)pppppuStack_d8 | 7) != 0x17) {
      ppppppuVar1 = (undefined8 ******)(((ulong)pppppuStack_d8 | 7) + 1);
    }
    ppppppuVar3 = ppppppuVar1;
    __Znwm();
    uStack_e8 = (ulong)ppppppuVar1 | 0x8000000000000000;
    pppppuStack_f0 = pppppuVar7;
    pppppuStack_f8 = ppppppuVar3;
  }
  _memmove(ppppppuVar3,puVar6,pppppuVar7);
LAB_10ad6be60:
  *(undefined1 *)((long)ppppppuVar3 + (long)pppppuVar7) = 0;
  *(uint *)(plVar8 + 2) = *(uint *)(plVar8 + 2) | 1;
  uVar4 = plVar8[1];
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  func_0x000107c3024c(plVar8 + 3,&pppppuStack_f8,uVar4);
  if ((long)uStack_e8 < 0) {
    __ZdlPv(pppppuStack_f8);
  }
  return plVar9;
}



/* Entry: 10ad6bccc; end: 10ad6beef;  */

long * FUN_10ad6bccc(long param_1,undefined8 param_2,undefined8 ******param_3,long *param_4)

{
  undefined8 ******ppppppuVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 ******ppppppuVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *****pppppuVar7;
  long *plVar8;
  undefined8 uStack_b8;
  undefined8 *****pppppuStack_78;
  undefined8 *****pppppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *****pppppuStack_58;
  
  plVar3 = (long *)(param_1 + 0xa0);
  uStack_60 = param_2;
  pppppuStack_58 = param_3;
  FUN_10ad5d164(plVar3,&uStack_60);
  pppppuVar7 = pppppuStack_58;
  uVar2 = uStack_60;
  if ((long *)(param_1 + 0xa8) != plVar3) {
    return (long *)plVar3[7];
  }
  plVar8 = *(long **)(param_1 + 0x80);
  *(long *)(param_1 + 0x80) = (long)plVar8 + 1;
  if ((undefined8 ******)0x7ffffffffffffff7 < pppppuStack_58) goto LAB_10ad6becc;
  if (pppppuStack_58 < (undefined8 ******)0x17) {
    uStack_68 = CONCAT17((char)pppppuStack_58,(undefined7)uStack_68);
    ppppppuVar4 = &pppppuStack_78;
    if ((undefined8 ******)pppppuStack_58 != (undefined8 ******)0x0) goto LAB_10ad6bd74;
  }
  else {
    ppppppuVar1 = (undefined8 ******)0x19;
    if (((ulong)pppppuStack_58 | 7) != 0x17) {
      ppppppuVar1 = (undefined8 ******)(((ulong)pppppuStack_58 | 7) + 1);
    }
    ppppppuVar4 = ppppppuVar1;
    __Znwm();
    uStack_68 = (ulong)ppppppuVar1 | 0x8000000000000000;
    pppppuStack_70 = pppppuVar7;
    pppppuStack_78 = ppppppuVar4;
LAB_10ad6bd74:
    _memmove(ppppppuVar4,uVar2,pppppuVar7);
  }
  *(undefined1 *)((long)ppppppuVar4 + (long)pppppuVar7) = 0;
  param_3 = &pppppuStack_78;
  param_4 = plVar8;
  FUN_10ad6bef0(param_1 + 0xa0,&pppppuStack_78);
  if ((long)uStack_68 < 0) {
    __ZdlPv(pppppuStack_78);
  }
  FUN_10ad6ba00();
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  uVar5 = *(ulong *)(param_1 + 0x18);
  if (uVar5 == 0) {
    uVar5 = *(ulong *)(param_1 + 8);
    if ((uVar5 & 1) != 0) {
      uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
    }
    func_0x0001098e1570();
    *(ulong *)(param_1 + 0x18) = uVar5;
  }
  plVar3 = (long *)(uVar5 + 0x10);
  func_0x000107c303b0(plVar3,&UNK_1098e1340);
  pppppuVar7 = pppppuStack_58;
  uVar2 = uStack_60;
  plVar3[4] = (long)plVar8;
  *(uint *)(plVar3 + 2) = *(uint *)(plVar3 + 2) | 2;
  if ((undefined8 ******)0x7ffffffffffffff7 < pppppuStack_58) {
LAB_10ad6becc:
    func_0x000109ffde50();
    if ((long)uStack_68 < 0) {
      __ZdlPv(pppppuStack_78);
    }
    __Unwind_Resume();
    plVar8 = plVar3;
    func_0x00010ad5d250();
    if (*plVar8 == 0) {
      lVar6 = 0x40;
      __Znwm();
      pppppuVar7 = *param_3;
      *(undefined8 ******)(lVar6 + 0x28) = param_3[1];
      *(undefined8 ******)(lVar6 + 0x20) = pppppuVar7;
      pppppuVar7 = param_3[2];
      *param_3 = (undefined8 *****)0x0;
      param_3[1] = (undefined8 *****)0x0;
      param_3[2] = (undefined8 *****)0x0;
      *(undefined8 ******)(lVar6 + 0x30) = pppppuVar7;
      *(long **)(lVar6 + 0x38) = param_4;
      FUN_10ad5d2d4(plVar3,uStack_b8,plVar8,lVar6);
      plVar8 = plVar3;
    }
    return plVar8;
  }
  if (pppppuStack_58 < (undefined8 ******)0x17) {
    uStack_68 = CONCAT17((char)pppppuStack_58,(undefined7)uStack_68);
    ppppppuVar4 = &pppppuStack_78;
    if ((undefined8 ******)pppppuStack_58 == (undefined8 ******)0x0) goto LAB_10ad6be60;
  }
  else {
    ppppppuVar1 = (undefined8 ******)0x19;
    if (((ulong)pppppuStack_58 | 7) != 0x17) {
      ppppppuVar1 = (undefined8 ******)(((ulong)pppppuStack_58 | 7) + 1);
    }
    ppppppuVar4 = ppppppuVar1;
    __Znwm();
    uStack_68 = (ulong)ppppppuVar1 | 0x8000000000000000;
    pppppuStack_70 = pppppuVar7;
    pppppuStack_78 = ppppppuVar4;
  }
  _memmove(ppppppuVar4,uVar2,pppppuVar7);
LAB_10ad6be60:
  *(undefined1 *)((long)ppppppuVar4 + (long)pppppuVar7) = 0;
  *(uint *)(plVar3 + 2) = *(uint *)(plVar3 + 2) | 1;
  uVar5 = plVar3[1];
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  func_0x000107c3024c(plVar3 + 3,&pppppuStack_78,uVar5);
  if ((long)uStack_68 < 0) {
    __ZdlPv(pppppuStack_78);
  }
  return plVar8;
}



/* Entry: 10ad6bef0; end: 10ad6bf6f;  */

void FUN_10ad6bef0(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_38;
  
  plVar1 = param_1;
  func_0x00010ad5d250(param_1,&uStack_38,param_2);
  if (*plVar1 == 0) {
    lVar2 = 0x40;
    __Znwm();
    uVar3 = *param_3;
    *(undefined8 *)(lVar2 + 0x28) = param_3[1];
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    uVar3 = param_3[2];
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    *(undefined8 *)(lVar2 + 0x30) = uVar3;
    *(undefined8 *)(lVar2 + 0x38) = param_4;
    FUN_10ad5d2d4(param_1,uStack_38,plVar1,lVar2);
  }
  return;
}



/* Entry: 10ad6bf70; end: 10ad6c323;  */

void FUN_10ad6bf70(long *param_1,long param_2,long *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  undefined8 *****pppppuVar5;
  undefined8 *****pppppuVar6;
  undefined8 *****pppppuVar7;
  undefined8 ****ppppuVar8;
  long lVar9;
  ulong uVar10;
  undefined8 **ppuVar11;
  undefined8 *puVar12;
  undefined8 ***pppuVar13;
  undefined8 *puVar14;
  undefined8 ****ppppuVar15;
  undefined8 ****ppppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  ulong uStack_78;
  
  if (param_3 != (long *)0x0) {
    puVar14 = (undefined8 *)*param_3;
    puVar1 = (undefined8 *)param_3[1];
    if (puVar14 != puVar1) {
      do {
        lVar4 = *param_1 + 0x28;
        func_0x000107c303b0(lVar4,&UNK_1098e13e8);
        uVar10 = (ulong)*(char *)((long)puVar14 + 0x17);
        puVar12 = puVar14;
        if ((long)uVar10 < 0) {
          uVar10 = puVar14[1];
          if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10ad6c2f8);
            (*pcVar3)();
          }
          puVar12 = (undefined8 *)*puVar14;
        }
        pppppuVar5 = (undefined8 *****)(param_2 + 0xc0);
        ppuVar11 = &puStack_80;
        puStack_80 = puVar12;
        uStack_78 = uVar10;
        FUN_10ad5d164();
        uVar10 = uStack_78;
        puVar12 = puStack_80;
        if ((undefined8 *****)(param_2 + 200U) == pppppuVar5) {
          ppppuVar15 = *(undefined8 *****)(param_2 + 0xb8);
          *(long *)(param_2 + 0xb8) = (long)ppppuVar15 + 1;
          if (uStack_78 < 0x7ffffffffffffff8) {
            if (uStack_78 < 0x17) {
              uStack_88 = CONCAT17((char)uStack_78,(undefined7)uStack_88);
              pppppuVar6 = &ppppuStack_98;
              if (uStack_78 != 0) goto LAB_10ad6c06c;
            }
            else {
              pppppuVar5 = (undefined8 *****)0x19;
              if ((uStack_78 | 7) != 0x17) {
                pppppuVar5 = (undefined8 *****)((uStack_78 | 7) + 1);
              }
              pppppuVar6 = pppppuVar5;
              __Znwm();
              uStack_88 = (ulong)pppppuVar5 | 0x8000000000000000;
              uStack_90 = uVar10;
              ppppuStack_98 = pppppuVar6;
LAB_10ad6c06c:
              _memmove(pppppuVar6,puVar12,uVar10);
            }
            *(undefined1 *)((long)pppppuVar6 + uVar10) = 0;
            FUN_10ad6bef0(param_2 + 0xc0,&ppppuStack_98,&ppppuStack_98,ppppuVar15);
            if ((long)uStack_88 < 0) {
              __ZdlPv(ppppuStack_98);
            }
            lVar9 = param_2;
            FUN_10ad6ba00();
            *(uint *)(lVar9 + 0x10) = *(uint *)(lVar9 + 0x10) | 1;
            uVar10 = *(ulong *)(lVar9 + 0x18);
            if (uVar10 == 0) {
              uVar10 = *(ulong *)(lVar9 + 8);
              if ((uVar10 & 1) != 0) {
                uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
              }
              func_0x0001098e1570();
              *(ulong *)(lVar9 + 0x18) = uVar10;
            }
            pppppuVar5 = (undefined8 *****)(uVar10 + 0x40);
            ppuVar11 = (undefined8 **)&UNK_1098e13b0;
            func_0x000107c303b0();
            uVar10 = uStack_78;
            puVar12 = puStack_80;
            pppppuVar5[4] = ppppuVar15;
            *(uint *)(pppppuVar5 + 2) = *(uint *)(pppppuVar5 + 2) | 2;
            if (uStack_78 < 0x7ffffffffffffff8) {
              if (uStack_78 < 0x17) {
                uStack_88 = CONCAT17((char)uStack_78,(undefined7)uStack_88);
                pppppuVar7 = &ppppuStack_98;
                if (uStack_78 != 0) goto LAB_10ad6c150;
              }
              else {
                pppppuVar6 = (undefined8 *****)0x19;
                if ((uStack_78 | 7) != 0x17) {
                  pppppuVar6 = (undefined8 *****)((uStack_78 | 7) + 1);
                }
                pppppuVar7 = pppppuVar6;
                __Znwm();
                uStack_88 = (ulong)pppppuVar6 | 0x8000000000000000;
                uStack_90 = uVar10;
                ppppuStack_98 = pppppuVar7;
LAB_10ad6c150:
                _memmove(pppppuVar7,puVar12,uVar10);
              }
              *(undefined1 *)((long)pppppuVar7 + uVar10) = 0;
              *(uint *)(pppppuVar5 + 2) = *(uint *)(pppppuVar5 + 2) | 1;
              ppppuVar8 = pppppuVar5[1];
              if (((ulong)ppppuVar8 & 1) != 0) {
                ppppuVar8 = *(undefined8 *****)((ulong)ppppuVar8 & 0xfffffffffffffffe);
              }
              pppppuVar5 = pppppuVar5 + 3;
              func_0x000107c3024c(pppppuVar5,&ppppuStack_98,ppppuVar8);
              if ((long)uStack_88 < 0) {
                pppppuVar5 = (undefined8 *****)ppppuStack_98;
                __ZdlPv();
              }
              goto LAB_10ad6c1a0;
            }
          }
          func_0x000109ffde50();
LAB_10ad6c2fc:
          FUN_10a0d459c();
          if ((long)uStack_88 < 0) {
            __ZdlPv(ppppuStack_98);
          }
          __Unwind_Resume();
          ppuVar11 = (undefined8 **)*ppuVar11;
          pppuVar13 = **pppppuVar5;
          if (*(int *)((long)pppuVar13 + 0x74) != 0x1e) {
            *(undefined4 *)((long)pppuVar13 + 0x74) = 0x1e;
          }
          pppuVar13[0xd] = ppuVar11;
          return;
        }
        ppppuVar15 = pppppuVar5[7];
LAB_10ad6c1a0:
        if (*(int *)(lVar4 + 0x68) != 1) {
          if (*(int *)(lVar4 + 0x68) == 10) {
            pppppuVar5 = (undefined8 *****)(lVar4 + 0x50);
            func_0x000107c30258();
          }
          *(undefined4 *)(lVar4 + 0x68) = 1;
        }
        ppuVar11 = (undefined8 **)(puVar14 + 5);
        *(undefined8 *****)(lVar4 + 0x50) = ppppuVar15;
        iVar2 = *(int *)(puVar14 + 10);
        if (iVar2 == 2) {
          lVar9 = (long)*(char *)((long)puVar14 + 0x3f);
          if (lVar9 < 0) {
            ppuVar11 = (undefined8 **)puVar14[5];
            lVar9 = puVar14[6];
          }
          FUN_109ffe064(&ppppuStack_98,ppuVar11,lVar9);
          if (*(int *)(lVar4 + 0x6c) != 6) {
            *(undefined4 *)(lVar4 + 0x6c) = 6;
            *(undefined **)(lVar4 + 0x58) = &DAT_11383d918;
          }
          uVar10 = *(ulong *)(lVar4 + 8);
          if ((uVar10 & 1) != 0) {
            uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
          }
          func_0x000107c3024c(lVar4 + 0x58,&ppppuStack_98,uVar10);
          if ((long)uStack_88 < 0) {
            __ZdlPv(ppppuStack_98);
          }
        }
        else if (iVar2 == 1) {
          puVar12 = *ppuVar11;
          if (*(int *)(lVar4 + 0x6c) != 5) {
            if (*(int *)(lVar4 + 0x6c) == 6) {
              func_0x000107c30258(lVar4 + 0x58);
            }
            *(undefined4 *)(lVar4 + 0x6c) = 5;
          }
          *(undefined8 **)(lVar4 + 0x58) = puVar12;
        }
        else {
          if (iVar2 != 0) goto LAB_10ad6c2fc;
          puVar12 = *ppuVar11;
          if (*(int *)(lVar4 + 0x6c) != 4) {
            if (*(int *)(lVar4 + 0x6c) == 6) {
              func_0x000107c30258(lVar4 + 0x58);
            }
            *(undefined4 *)(lVar4 + 0x6c) = 4;
          }
          *(undefined8 **)(lVar4 + 0x58) = puVar12;
        }
        puVar14 = puVar14 + 0xb;
      } while (puVar14 != puVar1);
    }
  }
  return;
}



/* Entry: 10ad6c324; end: 10ad6c3bf;  */

void FUN_10ad6c324(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *param_2;
  lVar2 = *(long *)*param_1;
  if (*(int *)(lVar2 + 0x74) != 0x1e) {
    *(undefined4 *)(lVar2 + 0x74) = 0x1e;
  }
  *(undefined8 *)(lVar2 + 0x68) = uVar1;
  return;
}



/* Entry: 10ad6c3c0; end: 10ad6c4c7;  */

long FUN_10ad6c3c0(long param_1)

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



/* Entry: 10ad6c4c8; end: 10ad6c5c3;  */

undefined * FUN_10ad6c4c8(undefined *param_1)

{
  byte *pbVar1;
  byte bVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  int iVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long *plVar12;
  undefined *puVar13;
  undefined *puVar14;
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
  
  pbVar1 = param_1 + 0x209;
  do {
    bVar2 = *pbVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  puVar8 = param_1;
  if ((bVar2 & 1) != 0) {
    __ZNSt3__15mutex4lockEv(param_1 + 0x148);
    plVar3 = *(long **)(param_1 + 0x1b8);
    for (plVar12 = *(long **)(param_1 + 0x1b0); plVar12 != plVar3; plVar12 = plVar12 + 3) {
      if (*plVar12 != 0) {
        *(undefined1 *)(*plVar12 + 0x30) = 0;
      }
    }
    puVar8 = param_1 + 0x148;
    __ZNSt3__15mutex6unlockEv(puVar8);
    if ((param_1[0x20b] & 1) != 0) {
      if (*(long *)(param_1 + 0x200) != 0) {
        __ZNSt3__16thread4joinEv(param_1 + 0x200);
      }
      func_0x00010ae02f94(0,*(undefined8 *)(param_1 + 0x210));
      func_0x00010ae02f94();
      func_0x00010ae02f94();
      ppuVar11 = &PTR_PTR_113307888;
      ppuVar10 = ppuVar11;
      FUN_10ae079a0();
      func_0x00010ae02fa4();
      func_0x00010ae02fa4();
      func_0x00010ae02fa4();
      lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar8 = (undefined *)0x0;
      if (ppuVar10 != (undefined **)0x0) {
        FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar10[0x13],ppuVar10[0xf],
                      ppuVar10 + 0x14,0x400);
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
        puVar14 = ppuVar10[0x12];
        puVar13 = ppuVar10[0xb];
        uVar6 = 0;
        _clock_gettime_nsec_np();
        uVar7 = uVar6;
        _pthread_self();
        _pthread_mach_thread_np();
        ppuStack_8e8 = ppuVar10 + 1;
        uStack_8b8 = *(undefined4 *)(ppuVar10 + 0xe);
        uStack_8c0 = uVar7 & 0xffffffff;
        ppuStack_8b0 = ppuVar10 + 0x10;
        puVar8 = *ppuVar10;
        ppuVar11 = (undefined **)&ppuStack_8e8;
        uStack_8f0 = uStack_898;
        puStack_8e0 = puVar13;
        puStack_8d8 = puVar14;
        uStack_8d0 = (ulong)(puVar14 != (undefined *)0x0);
        uStack_8c8 = uVar6;
        FUN_10ae0784c(puVar8,ppuVar11,&puStack_900,&puStack_918);
      }
      iVar9 = (int)ppuVar11;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
        ___stack_chk_fail();
        if (iVar9 == 0) {
          __Unwind_Resume();
        }
        func_0x000104bd46a0();
        func_0x00010ae087bc();
        FUN_10ae07e54(puVar8);
        return puVar8;
      }
      return puVar8;
    }
  }
  return puVar8;
}



/* Entry: 10ad6c5c4; end: 10ad6c677;  */

undefined8 * FUN_10ad6c5c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c71428;
  func_0x00010ad6c470(param_1 + 1);
  return param_1;
}



/* Entry: 10ad6c678; end: 10ad6c6b3;  */

void FUN_10ad6c678(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_2 = &PTR_FUN_110c71428;
  lVar4 = *(long *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar5;
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



/* Entry: 10ad6c6b4; end: 10ad6c6db;  */

void FUN_10ad6c6b4(long param_1)

{
  func_0x00010ad6c470(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10ad6c6dc; end: 10ad6c8af;  */

void FUN_10ad6c6dc(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  uint *puVar4;
  ulong uVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  lVar7 = *(long *)(param_1 + 8);
  __ZNSt3__15mutex4lockEv(lVar7 + 0x18);
  lVar6 = *(long *)(param_1 + 8);
  if (*(char *)(lVar6 + 0xa0) == '\x01') {
    lVar1 = *(long *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != lVar1) {
      uVar5 = *(ulong *)(param_2 + 0x20);
      plVar8 = (long *)(lVar1 + (uVar5 / 0xaa) * 8);
      plVar9 = (long *)(*plVar8 + (uVar5 % 0xaa) * 0x18);
      uVar5 = *(long *)(param_2 + 0x28) + uVar5;
      plVar10 = (long *)(*(long *)(lVar1 + (uVar5 / 0xaa) * 8) + (uVar5 % 0xaa) * 0x18);
      if (plVar9 != plVar10) {
        do {
          if ((*(byte *)(*(long *)(param_1 + 8) + 0xa0) & 1) == 0) goto LAB_10ad6c894;
          lVar6 = *plVar9;
          _fwrite(lVar6,1,plVar9[1] - lVar6,*(undefined8 *)(*(long *)(param_1 + 8) + 0x58));
          if ((lVar6 != plVar9[1] - *plVar9) && ((bRam000000011330a9e8 >> 2 & 1) != 0)) {
            func_0x00010ae06f08(1,4,&UNK_10f6a906b,&UNK_10f6a9410,0x10a,&UNK_10f6a94ad,in_x6,in_x7,
                                lVar6,plVar9[1] - *plVar9);
          }
          plVar9 = plVar9 + 3;
          if ((long)plVar9 - *plVar8 == 0xff0) {
            plVar8 = plVar8 + 1;
            plVar9 = (long *)*plVar8;
          }
        } while (plVar9 != plVar10);
        lVar6 = *(long *)(param_1 + 8);
        if ((*(byte *)(lVar6 + 0xa0) & 1) == 0) {
LAB_10ad6c894:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10ad6c898);
          (*pcVar3)();
        }
      }
    }
    puVar4 = *(uint **)(lVar6 + 0x58);
    _fflush();
    if (((int)puVar4 != 0) && ((bRam000000011330a9e8 >> 2 & 1) != 0)) {
      ___error();
      uVar2 = *puVar4;
      ___error();
      uVar5 = (ulong)*puVar4;
      _strerror();
      func_0x00010ae06f08(1,4,&UNK_10f6a906b,&UNK_10f6a9410,0x10f,&UNK_10f6a94e9,in_x6,in_x7,uVar2,
                          uVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(lVar7 + 0x18);
  return;
}



/* Entry: 10ad6c8b0; end: 10ad6c8eb;  */

long FUN_10ad6c8b0(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c71488);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10ad6c8ec; end: 10ad6c907;  */

undefined ** FUN_10ad6c8ec(void)

{
  return &PTR_DAT_110c71488;
}



/* Entry: 10ad6c908; end: 10ad6c927;  */

void FUN_10ad6c908(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c714a8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad6c928; end: 10ad6c98f;  */

void FUN_10ad6c928(long param_1)

{
  long *plVar1;
  long lVar2;
  
  __ZNSt3__15mutexD1Ev(param_1 + 0x58);
  FUN_10ad6c3c0(param_1 + 0x48);
  func_0x00010ad6c418(param_1 + 0x38);
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 == (long *)(param_1 + 0x18)) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar2 = 0x28;
  }
                    /* WARNING: Could not recover jumptable at 0x00010ad6c980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + lVar2))();
  return;
}



/* Entry: 10ad6c990; end: 10ad6c993;  */

void FUN_10ad6c990(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad6c994; end: 10ad6c9f7;  */

long FUN_10ad6c994(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_2 + 0x18);
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    plVar1 = (long *)(param_1 + 0x18);
  }
  else {
    if (lVar2 == param_2) {
      *(long *)(param_1 + 0x18) = param_1;
      (**(code **)(*(long *)*plVar1 + 0x18))((long *)*plVar1,param_1);
      return param_1;
    }
    *(long *)(param_1 + 0x18) = lVar2;
  }
  *plVar1 = 0;
  return param_1;
}



/* Entry: 10ad6c9f8; end: 10ad6ca07;  */

void FUN_10ad6c9f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c714f8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ad6ca08; end: 10ad6ca27;  */

void FUN_10ad6ca08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c714f8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad6ca28; end: 10ad6ca9f;  */

void FUN_10ad6ca28(long param_1)

{
  FUN_10a5c93e4(param_1 + 0x158);
  func_0x0001092fd234(param_1 + 0x120,*(undefined8 *)(param_1 + 0x128));
  FUN_10ad6caa4(param_1 + 0x108,*(undefined8 *)(param_1 + 0x110));
  func_0x000109d4f930(param_1 + 0xf0,*(undefined8 *)(param_1 + 0xf8));
  FUN_10ad5d0ec(param_1 + 0xd8,*(undefined8 *)(param_1 + 0xe0));
  FUN_10ad5d0ec(param_1 + 0xb8,*(undefined8 *)(param_1 + 0xc0));
  FUN_10ad5d0ec(param_1 + 0xa0,*(undefined8 *)(param_1 + 0xa8));
  func_0x0001098e0ec4(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 0x18);
  return;
}



/* Entry: 10ad6caa0; end: 10ad6caa3;  */

void FUN_10ad6caa0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad6caa4; end: 10ad6caf3;  */

void FUN_10ad6caa4(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10ad6caa4(param_1,*param_2);
    FUN_10ad6caa4(param_1,param_2[1]);
    if (*(char *)((long)param_2 + 0x3f) < '\0') {
      __ZdlPv(param_2[5]);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10ad6caf4; end: 10ad6cb03;  */

void FUN_10ad6caf4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c71548;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ad6cb04; end: 10ad6cb23;  */

void FUN_10ad6cb04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c71548;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad6cb24; end: 10ad6cb2f;  */

void FUN_10ad6cb24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 0x18);
  return;
}



/* Entry: 10ad6cb30; end: 10ad6cbbb;  */

long * FUN_10ad6cb30(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  param_1[3] = 0;
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_10ad6cb70;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_10ad6cb70:
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == 0) {
    param_1[3] = 0;
  }
  else if (lVar2 == param_2) {
    param_1[3] = (long)param_1;
    (**(code **)(**(long **)(param_2 + 0x18) + 0x18))(*(long **)(param_2 + 0x18),param_1);
  }
  else {
    param_1[3] = lVar2;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 10ad6cbbc; end: 10ad6cc1f;  */

long FUN_10ad6cbbc(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_2 + 0x18);
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    plVar1 = (long *)(param_1 + 0x18);
  }
  else {
    if (lVar2 == param_2) {
      *(long *)(param_1 + 0x18) = param_1;
      (**(code **)(*(long *)*plVar1 + 0x18))((long *)*plVar1,param_1);
      return param_1;
    }
    *(long *)(param_1 + 0x18) = lVar2;
  }
  *plVar1 = 0;
  return param_1;
}



/* Entry: 10ad6cc20; end: 10ad6cc2f;  */

void FUN_10ad6cc20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c71598;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ad6cc30; end: 10ad6cc4f;  */

void FUN_10ad6cc30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c71598;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad6cc50; end: 10ad6cd0b;  */

void FUN_10ad6cc50(long param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  
  FUN_10ad6cfa8(param_1 + 0x28);
  if (*(long *)(param_1 + 0x20) < 0) {
    func_0x00010ae02fb8(0,param_1 + 0x18);
    ppuVar5 = &PTR_PTR_113307920;
    FUN_10ae079a0();
    func_0x00010ae02fc8();
    FUN_10ae07cd4(ppuVar5,&PTR_PTR_113307920);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010ae02fb8(0,param_1 + 0x18);
    func_0x00010ae02ef0();
    ppuVar5 = &PTR_PTR_113307950;
    FUN_10ae079a0();
    func_0x00010ae02fc8();
    func_0x00010ae02f00();
    FUN_10ae07cd4(ppuVar5,&PTR_PTR_113307950);
  }
  lVar7 = *(long *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = 0;
  if (lVar7 == 0) {
    return;
  }
  *(undefined1 *)(lVar7 + 0x208) = 1;
  FUN_10ad6c4c8(lVar7);
  FUN_10ad6d380(lVar7 + 0x1f08,*(undefined8 *)(lVar7 + 0x1f10));
  func_0x0001092fd234(lVar7 + 0x1ec8,*(undefined8 *)(lVar7 + 0x1ed0));
  FUN_10ad6cd10(lVar7 + 0x1e98,*(undefined8 *)(lVar7 + 0x1ea0));
  func_0x00010ad6cef0(lVar7 + 0x1e70,*(undefined8 *)(lVar7 + 0x1e78));
  puVar10 = *(undefined1 **)(lVar7 + 0x1e48);
  if (puVar10 != (undefined1 *)0x0) {
    puVar8 = puVar10;
    if (*(undefined1 **)(lVar7 + 0x1e50) != puVar10) {
      puVar8 = *(undefined1 **)(lVar7 + 0x1e50) + -8;
      do {
        puVar11 = puVar8 + -8;
        func_0x000109380ffc(puVar8,*puVar11);
        puVar8 = puVar8 + -0x10;
      } while (puVar11 != puVar10);
      puVar8 = *(undefined1 **)(lVar7 + 0x1e48);
    }
    *(undefined1 **)(lVar7 + 0x1e50) = puVar10;
    lVar6 = *(long *)(lVar7 + 0x1e58);
    plVar4 = (long *)(*(long *)(lVar7 + 0x1e68) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 - (lVar6 - (long)puVar8);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    __ZdlPv();
  }
  lVar3 = lVar7 + 0x1da8;
  lVar6 = -0x1c00;
  do {
    __ZNSt3__15mutexD1Ev(lVar3);
    lVar3 = lVar3 + -0x80;
    lVar6 = lVar6 + 0x80;
  } while (lVar6 != 0);
  __ZNSt3__16threadD1Ev(lVar7 + 0x200);
  lVar6 = *(long *)(lVar7 + 0x1d8);
  if (lVar6 != 0) {
    *(long *)(lVar7 + 0x1e0) = lVar6;
    lVar3 = *(long *)(lVar7 + 0x1e8);
    plVar4 = (long *)(*(long *)(lVar7 + 0x1f8) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 - (lVar3 - lVar6);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    __ZdlPv();
  }
  lVar6 = *(long *)(lVar7 + 0x1b0);
  if (lVar6 != 0) {
    lVar9 = *(long *)(lVar7 + 0x1b8);
    lVar3 = lVar6;
    if (lVar9 != lVar6) {
      do {
        lVar9 = lVar9 + -0x18;
        func_0x00010a132d7c(lVar9,0);
      } while (lVar9 != lVar6);
      lVar3 = *(long *)(lVar7 + 0x1b0);
    }
    *(long *)(lVar7 + 0x1b8) = lVar6;
    lVar6 = *(long *)(lVar7 + 0x1c0);
    plVar4 = (long *)(*(long *)(lVar7 + 0x1d0) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 - (lVar6 - lVar3);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    __ZdlPv();
  }
  lVar6 = *(long *)(lVar7 + 0x188);
  if (lVar6 != 0) {
    *(long *)(lVar7 + 400) = lVar6;
    lVar3 = *(long *)(lVar7 + 0x198);
    plVar4 = (long *)(*(long *)(lVar7 + 0x1a8) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 - (lVar3 - lVar6);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    __ZdlPv();
  }
  __ZNSt3__15mutexD1Ev(lVar7 + 0x148);
  lVar6 = *(long *)(lVar7 + 0x120);
  if (lVar6 != 0) {
    lVar9 = *(long *)(lVar7 + 0x128);
    lVar3 = lVar6;
    if (lVar9 != lVar6) {
      do {
        lVar9 = lVar9 + -0x10;
        func_0x00010ad6cde8(lVar9);
      } while (lVar9 != lVar6);
      lVar3 = *(long *)(lVar7 + 0x120);
    }
    *(long *)(lVar7 + 0x128) = lVar6;
    lVar6 = *(long *)(lVar7 + 0x130);
    plVar4 = (long *)(*(long *)(lVar7 + 0x140) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 - (lVar6 - lVar3);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    __ZdlPv();
  }
  lVar6 = *(long *)(lVar7 + 0xf8);
  if (lVar6 != 0) {
    lVar9 = *(long *)(lVar7 + 0x100);
    lVar3 = lVar6;
    if (lVar9 != lVar6) {
      do {
        lVar9 = lVar9 + -0x10;
        func_0x00010ad6ce40(lVar9);
      } while (lVar9 != lVar6);
      lVar3 = *(long *)(lVar7 + 0xf8);
    }
    *(long *)(lVar7 + 0x100) = lVar6;
    lVar6 = *(long *)(lVar7 + 0x108);
    plVar4 = (long *)(*(long *)(lVar7 + 0x118) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 - (lVar6 - lVar3);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    __ZdlPv();
  }
  lVar6 = *(long *)(lVar7 + 0xd0);
  if (lVar6 != 0) {
    lVar9 = *(long *)(lVar7 + 0xd8);
    lVar3 = lVar6;
    if (lVar9 != lVar6) {
      do {
        lVar9 = lVar9 + -0x10;
        func_0x00010ad6ce98(lVar9);
      } while (lVar9 != lVar6);
      lVar3 = *(long *)(lVar7 + 0xd0);
    }
    *(long *)(lVar7 + 0xd8) = lVar6;
    lVar6 = *(long *)(lVar7 + 0xe0);
    plVar4 = (long *)(*(long *)(lVar7 + 0xf0) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 - (lVar6 - lVar3);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    __ZdlPv();
  }
  lVar6 = *(long *)(lVar7 + 0xa8);
  if (lVar6 != 0) {
    lVar9 = *(long *)(lVar7 + 0xb0);
    lVar3 = lVar6;
    if (lVar9 != lVar6) {
      do {
        lVar9 = lVar9 + -0xb0;
        func_0x00010ad6cf48(lVar9);
      } while (lVar9 != lVar6);
      lVar3 = *(long *)(lVar7 + 0xa8);
    }
    *(long *)(lVar7 + 0xb0) = lVar6;
    lVar6 = *(long *)(lVar7 + 0xb8);
    plVar4 = (long *)(*(long *)(lVar7 + 200) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 - (lVar6 - lVar3);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    __ZdlPv();
  }
  lVar6 = *(long *)(lVar7 + 0x80);
  if (lVar6 != 0) {
    *(long *)(lVar7 + 0x88) = lVar6;
    lVar3 = *(long *)(lVar7 + 0x90);
    plVar4 = (long *)(*(long *)(lVar7 + 0xa0) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 - (lVar3 - lVar6);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    __ZdlPvSt11align_val_t(lVar6,0x20);
  }
  func_0x00010a1331b4(lVar7 + 0x68);
  plVar4 = *(long **)(lVar7 + 0x60);
  if (plVar4 == (long *)(lVar7 + 0x48)) {
    lVar6 = 0x20;
  }
  else {
    if (plVar4 == (long *)0x0) goto LAB_10ad6d348;
    lVar6 = 0x28;
  }
  (**(code **)(*plVar4 + lVar6))();
LAB_10ad6d348:
  plVar4 = (long *)(*(long *)(param_1 + 0x38) + 8);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + -0x1f30;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar7);
  return;
}



/* Entry: 10ad6cd0c; end: 10ad6cd0f;  */

void FUN_10ad6cd0c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad6cd10; end: 10ad6cde7;  */

void FUN_10ad6cd10(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (param_2 != (undefined8 *)0x0) {
    FUN_10ad6cd10(param_1,*param_2);
    FUN_10ad6cd10(param_1,param_2[1]);
    lVar4 = param_2[5];
    if (lVar4 != 0) {
      lVar6 = lVar4;
      lVar5 = param_2[6];
      if (param_2[6] != lVar4) {
        do {
          lVar6 = lVar5 + -0x60;
          FUN_10ad6cde8(lVar5 + -0x20);
          func_0x00010ad6ce40(lVar5 + -0x30);
          func_0x00010ad6ce98(lVar5 + -0x40);
          lVar5 = lVar6;
        } while (lVar6 != lVar4);
        lVar6 = param_2[5];
      }
      param_2[6] = lVar4;
      lVar4 = param_2[7];
      plVar1 = (long *)(param_2[9] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 - (lVar4 - lVar6);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      __ZdlPvSt11align_val_t(lVar6,0x20);
    }
    plVar1 = (long *)(*(long *)(param_1 + 0x18) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + -0x50;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10ad6cde8; end: 10ad6cfa7;  */

long FUN_10ad6cde8(long param_1)

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



/* Entry: 10ad6cfa8; end: 10ad6d37f;  */

void FUN_10ad6cfa8(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  
  lVar6 = *param_1;
  *param_1 = 0;
  if (lVar6 == 0) {
    return;
  }
  *(undefined1 *)(lVar6 + 0x208) = 1;
  FUN_10ad6c4c8(lVar6);
  FUN_10ad6d380(lVar6 + 0x1f08,*(undefined8 *)(lVar6 + 0x1f10));
  func_0x0001092fd234(lVar6 + 0x1ec8,*(undefined8 *)(lVar6 + 0x1ed0));
  FUN_10ad6cd10(lVar6 + 0x1e98,*(undefined8 *)(lVar6 + 0x1ea0));
  func_0x00010ad6cef0(lVar6 + 0x1e70,*(undefined8 *)(lVar6 + 0x1e78));
  puVar9 = *(undefined1 **)(lVar6 + 0x1e48);
  if (puVar9 != (undefined1 *)0x0) {
    puVar7 = puVar9;
    if (*(undefined1 **)(lVar6 + 0x1e50) != puVar9) {
      puVar7 = *(undefined1 **)(lVar6 + 0x1e50) + -8;
      do {
        puVar10 = puVar7 + -8;
        func_0x000109380ffc(puVar7,*puVar10);
        puVar7 = puVar7 + -0x10;
      } while (puVar10 != puVar9);
      puVar7 = *(undefined1 **)(lVar6 + 0x1e48);
    }
    *(undefined1 **)(lVar6 + 0x1e50) = puVar9;
    lVar5 = *(long *)(lVar6 + 0x1e58);
    plVar4 = (long *)(*(long *)(lVar6 + 0x1e68) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 - (lVar5 - (long)puVar7);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    __ZdlPv();
  }
  lVar3 = lVar6 + 0x1da8;
  lVar5 = -0x1c00;
  do {
    __ZNSt3__15mutexD1Ev(lVar3);
    lVar3 = lVar3 + -0x80;
    lVar5 = lVar5 + 0x80;
  } while (lVar5 != 0);
  __ZNSt3__16threadD1Ev(lVar6 + 0x200);
  lVar5 = *(long *)(lVar6 + 0x1d8);
  if (lVar5 != 0) {
    *(long *)(lVar6 + 0x1e0) = lVar5;
    lVar3 = *(long *)(lVar6 + 0x1e8);
    plVar4 = (long *)(*(long *)(lVar6 + 0x1f8) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 - (lVar3 - lVar5);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    __ZdlPv();
  }
  lVar5 = *(long *)(lVar6 + 0x1b0);
  if (lVar5 != 0) {
    lVar8 = *(long *)(lVar6 + 0x1b8);
    lVar3 = lVar5;
    if (lVar8 != lVar5) {
      do {
        lVar8 = lVar8 + -0x18;
        func_0x00010a132d7c(lVar8,0);
      } while (lVar8 != lVar5);
      lVar3 = *(long *)(lVar6 + 0x1b0);
    }
    *(long *)(lVar6 + 0x1b8) = lVar5;
    lVar5 = *(long *)(lVar6 + 0x1c0);
    plVar4 = (long *)(*(long *)(lVar6 + 0x1d0) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 - (lVar5 - lVar3);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    __ZdlPv();
  }
  lVar5 = *(long *)(lVar6 + 0x188);
  if (lVar5 != 0) {
    *(long *)(lVar6 + 400) = lVar5;
    lVar3 = *(long *)(lVar6 + 0x198);
    plVar4 = (long *)(*(long *)(lVar6 + 0x1a8) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 - (lVar3 - lVar5);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    __ZdlPv();
  }
  __ZNSt3__15mutexD1Ev(lVar6 + 0x148);
  lVar5 = *(long *)(lVar6 + 0x120);
  if (lVar5 != 0) {
    lVar8 = *(long *)(lVar6 + 0x128);
    lVar3 = lVar5;
    if (lVar8 != lVar5) {
      do {
        lVar8 = lVar8 + -0x10;
        func_0x00010ad6cde8(lVar8);
      } while (lVar8 != lVar5);
      lVar3 = *(long *)(lVar6 + 0x120);
    }
    *(long *)(lVar6 + 0x128) = lVar5;
    lVar5 = *(long *)(lVar6 + 0x130);
    plVar4 = (long *)(*(long *)(lVar6 + 0x140) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 - (lVar5 - lVar3);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    __ZdlPv();
  }
  lVar5 = *(long *)(lVar6 + 0xf8);
  if (lVar5 != 0) {
    lVar8 = *(long *)(lVar6 + 0x100);
    lVar3 = lVar5;
    if (lVar8 != lVar5) {
      do {
        lVar8 = lVar8 + -0x10;
        func_0x00010ad6ce40(lVar8);
      } while (lVar8 != lVar5);
      lVar3 = *(long *)(lVar6 + 0xf8);
    }
    *(long *)(lVar6 + 0x100) = lVar5;
    lVar5 = *(long *)(lVar6 + 0x108);
    plVar4 = (long *)(*(long *)(lVar6 + 0x118) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 - (lVar5 - lVar3);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    __ZdlPv();
  }
  lVar5 = *(long *)(lVar6 + 0xd0);
  if (lVar5 != 0) {
    lVar8 = *(long *)(lVar6 + 0xd8);
    lVar3 = lVar5;
    if (lVar8 != lVar5) {
      do {
        lVar8 = lVar8 + -0x10;
        func_0x00010ad6ce98(lVar8);
      } while (lVar8 != lVar5);
      lVar3 = *(long *)(lVar6 + 0xd0);
    }
    *(long *)(lVar6 + 0xd8) = lVar5;
    lVar5 = *(long *)(lVar6 + 0xe0);
    plVar4 = (long *)(*(long *)(lVar6 + 0xf0) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 - (lVar5 - lVar3);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    __ZdlPv();
  }
  lVar5 = *(long *)(lVar6 + 0xa8);
  if (lVar5 != 0) {
    lVar8 = *(long *)(lVar6 + 0xb0);
    lVar3 = lVar5;
    if (lVar8 != lVar5) {
      do {
        lVar8 = lVar8 + -0xb0;
        func_0x00010ad6cf48(lVar8);
      } while (lVar8 != lVar5);
      lVar3 = *(long *)(lVar6 + 0xa8);
    }
    *(long *)(lVar6 + 0xb0) = lVar5;
    lVar5 = *(long *)(lVar6 + 0xb8);
    plVar4 = (long *)(*(long *)(lVar6 + 200) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 - (lVar5 - lVar3);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    __ZdlPv();
  }
  lVar5 = *(long *)(lVar6 + 0x80);
  if (lVar5 != 0) {
    *(long *)(lVar6 + 0x88) = lVar5;
    lVar3 = *(long *)(lVar6 + 0x90);
    plVar4 = (long *)(*(long *)(lVar6 + 0xa0) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 - (lVar3 - lVar5);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    __ZdlPvSt11align_val_t(lVar5,0x20);
  }
  func_0x00010a1331b4(lVar6 + 0x68);
  plVar4 = *(long **)(lVar6 + 0x60);
  if (plVar4 == (long *)(lVar6 + 0x48)) {
    lVar5 = 0x20;
  }
  else {
    if (plVar4 == (long *)0x0) goto LAB_10ad6d348;
    lVar5 = 0x28;
  }
  (**(code **)(*plVar4 + lVar5))();
LAB_10ad6d348:
  plVar4 = (long *)(param_1[2] + 8);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + -0x1f30;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar6);
  return;
}



/* Entry: 10ad6d380; end: 10ad6d3df;  */

void FUN_10ad6d380(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  
  if (param_2 != (undefined8 *)0x0) {
    FUN_10ad6d380(param_1,*param_2);
    FUN_10ad6d380(param_1,param_2[1]);
    func_0x00010ad6ce98(param_2 + 5);
    plVar1 = (long *)(*(long *)(param_1 + 0x18) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + -0x38;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10ad6d3e0; end: 10ad6d3ef;  */

void FUN_10ad6d3e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c715e8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ad6d3f0; end: 10ad6d40f;  */

void FUN_10ad6d3f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c715e8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad6d410; end: 10ad6d43f;  */

void FUN_10ad6d410(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x188;
  lVar1 = -0x180;
  do {
    FUN_10a232e34(param_1);
    param_1 = param_1 + -0x18;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0);
  return;
}



/* Entry: 10ad6d440; end: 10ad6d443;  */

void FUN_10ad6d440(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


