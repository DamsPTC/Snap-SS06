/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a15324c; end: 10a15325f;  */

void FUN_10a15324c(undefined8 param_1,long param_2)

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
  
  puVar4 = &DAT_10f62a4d8;
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
        if (cVar2 == '\0') goto LAB_10a153300;
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
LAB_10a153300:
  __Znwm(param_2);
  return;
}



/* Entry: 10a153260; end: 10a15335b;  */

void FUN_10a153260(long param_1,long param_2)

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
        if (cVar2 == '\0') goto LAB_10a153300;
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
LAB_10a153300:
  __Znwm(param_2);
  return;
}



/* Entry: 10a15335c; end: 10a153413;  */

undefined8 FUN_10a15335c(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  lVar3 = param_1;
  _pthread_self();
  __ZNSt3__15mutex4lockEv(param_1 + 0x148);
  lVar1 = *(long *)(param_1 + 400) - *(long *)(param_1 + 0x188);
  if (lVar1 != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      if (lVar3 == *(long *)(*(long *)(param_1 + 0x188) + uVar5 * 8)) {
        if ((ulong)(*(long *)(param_1 + 0x1e0) - *(long *)(param_1 + 0x1d8)) <= uVar5) {
LAB_10a15340c:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10a153410);
          (*pcVar2)();
        }
        if (*(char *)(*(long *)(param_1 + 0x1d8) + uVar5) != '\0') {
          uVar6 = (*(long *)(param_1 + 0x1b8) - *(long *)(param_1 + 0x1b0) >> 3) *
                  -0x5555555555555555;
          if (uVar6 < uVar5 || uVar6 - uVar5 == 0) goto LAB_10a15340c;
          uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + lVar4);
          goto LAB_10a1533cc;
        }
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x18;
    } while (lVar1 >> 3 != uVar5);
  }
  uVar7 = 0;
LAB_10a1533cc:
  __ZNSt3__15mutex6unlockEv(param_1 + 0x148);
  return uVar7;
}



/* Entry: 10a153414; end: 10a153423;  */

void FUN_10a153414(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba8568;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a153424; end: 10a153443;  */

void FUN_10a153424(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba8568;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a153444; end: 10a15345f;  */

long FUN_10a153444(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x67) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x50));
  }
  func_0x0001092ab60c(param_1 + 0x28);
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



/* Entry: 10a153460; end: 10a15347f;  */

void FUN_10a153460(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ba85b8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a153480; end: 10a1534cf;  */

void FUN_10a153480(long param_1)

{
  long *plVar1;
  
  FUN_10a153a90(param_1 + 0x30);
  plVar1 = *(long **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a1534d0; end: 10a1534d3;  */

void FUN_10a1534d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1534d4; end: 10a1535d3;  */

void FUN_10a1534d4(long *param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 10a1535d4; end: 10a153697;  */

void FUN_10a1535d4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  undefined1 uStack_40;
  undefined4 uStack_38;
  
  puVar5 = (undefined8 *)0x68;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_110ba8568;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_58 = 0;
  plStack_50 = (long *)0x0;
  uStack_48 = 0;
  func_0x0001092bcda8(puVar5 + 3,&uStack_58);
  plVar4 = plStack_50;
  if (plStack_50 != (long *)0x0) {
    plVar1 = plStack_50 + 1;
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
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  *param_1 = (long)(puVar5 + 3);
  param_1[1] = (long)puVar5;
  return;
}



/* Entry: 10a153698; end: 10a15387b;  */

char * FUN_10a153698(char *param_1)

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
    plVar13 = (long *)ppuVar9[2];
    if (plVar13 != (long *)0x0) {
      lVar12 = plVar13[1];
      bVar5 = *(byte *)(lVar12 + 0x42) | *(byte *)(lVar12 + 0x43);
      if ((((bVar5 & 1) != 0) || ((*(byte *)(lVar12 + 0x3f) & 1) != 0)) ||
         (*(char *)(lVar12 + 0x40) == '\x01')) {
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
        if (*(char *)(plVar13[1] + 0x40) == '\x01') {
          uVar15 = *(ulong *)(param_1 + 8);
          if (uVar15 <= uVar14) {
            lVar12 = *plVar13;
            __ZNSt3__15mutex4lockEv(lVar12 + 0xe80);
            FUN_10a15387c((double)(uVar14 - uVar15),lVar12,lVar12 + 0xe80,uVar15,uVar14);
            __ZNSt3__15mutex6unlockEv(lVar12 + 0xe80);
          }
        }
        if ((bVar5 & 1) != 0) {
          uVar1 = *(undefined4 *)(param_1 + 4);
          uVar2 = *(undefined2 *)(param_1 + 2);
          plVar10 = plVar13;
          FUN_10a1333cc();
          if (plVar10 != (long *)0x0) {
            *plVar10 = (long)&UNK_10f63ef3a;
            plVar10[1] = 0;
            plVar10[2] = uVar14;
            *(undefined4 *)(plVar10 + 3) = uVar1;
            *(undefined2 *)((long)plVar10 + 0x1c) = uVar2;
            *(undefined1 *)((long)plVar10 + 0x1e) = 6;
            if ((*(byte *)(plVar13 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x10a153874);
              (*pcVar7)();
            }
            plVar13[0x18] = plVar13[0x18] + 1;
          }
        }
      }
      if (((*(char *)(plVar13[1] + 0x41) == '\x01') && (param_1[0x18] == '\x01')) &&
         (plVar13 = (long *)plVar13[0xb], plVar13 != (long *)0x0)) {
        (**(code **)(*plVar13 + 0x18))(plVar13,*(undefined8 *)(param_1 + 0x10));
      }
    }
  }
  return param_1;
}



/* Entry: 10a15387c; end: 10a1538eb;  */

void FUN_10a15387c(double param_1,undefined8 param_2,long param_3,ulong param_4,ulong param_5)

{
  *(long *)(param_3 + 0x40) = *(long *)(param_3 + 0x40) + 1;
  *(double *)(param_3 + 0x48) = param_1 + *(double *)(param_3 + 0x48);
  *(double *)(param_3 + 0x50) = *(double *)(param_3 + 0x50) + param_1 * param_1;
  if (*(double *)(param_3 + 0x58) < param_1) {
    *(double *)(param_3 + 0x58) = param_1;
  }
  if (param_4 < *(ulong *)(param_3 + 0x60)) {
    *(ulong *)(param_3 + 0x60) = param_4;
  }
  if (*(ulong *)(param_3 + 0x68) < param_5) {
    *(ulong *)(param_3 + 0x68) = param_5;
  }
  if (param_5 < *(ulong *)(param_3 + 0x70)) {
    *(ulong *)(param_3 + 0x70) = param_5;
  }
  if (*(ulong *)(param_3 + 0x78) < param_4) {
    *(ulong *)(param_3 + 0x78) = param_4;
  }
  return;
}



/* Entry: 10a1538ec; end: 10a153a8f;  */

undefined8 ***** FUN_10a1538ec(ulong *param_1,undefined8 *****param_2,ulong param_3)

{
  undefined8 ****ppppuVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 *****pppppuVar6;
  undefined8 *****pppppuVar7;
  ulong uVar8;
  undefined8 ***pppuVar9;
  undefined8 ****ppppuVar10;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  ulong uStack_88;
  undefined7 uStack_80;
  char cStack_79;
  undefined8 uStack_78;
  char cStack_61;
  undefined8 ****ppppuStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  
  if (0x7ffffffffffffff7 < param_3) {
    func_0x000109ffde50();
    if ((long)uStack_50 < 0) {
      __ZdlPv(ppppuStack_60);
    }
    __Unwind_Resume();
    ppppuVar10 = param_2[1];
    if (ppppuVar10 != (undefined8 ****)0x0) {
      ppppuVar1 = ppppuVar10 + 1;
      do {
        pppuVar9 = *ppppuVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
        if (bVar3) {
          *ppppuVar1 = (undefined8 ***)((long)pppuVar9 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (pppuVar9 == (undefined8 ***)0x0) {
        (*(code *)(*ppppuVar10)[2])(ppppuVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar10);
      }
    }
    return param_2;
  }
  if (param_3 < 0x17) {
    uStack_50 = CONCAT17((char)param_3,(undefined7)uStack_50);
    pppppuVar6 = &ppppuStack_60;
    if (param_3 == 0) goto LAB_10a15396c;
  }
  else {
    pppppuVar7 = (undefined8 *****)0x19;
    if ((param_3 | 7) != 0x17) {
      pppppuVar7 = (undefined8 *****)((param_3 | 7) + 1);
    }
    pppppuVar6 = pppppuVar7;
    __Znwm();
    uStack_50 = (ulong)pppppuVar7 | 0x8000000000000000;
    ppppuStack_60 = pppppuVar6;
    uStack_58 = param_3;
  }
  _memmove(pppppuVar6,param_2,param_3);
LAB_10a15396c:
  *(undefined1 *)((long)pppppuVar6 + param_3) = 0;
  uVar8 = uStack_58;
  pppppuVar7 = (undefined8 *****)ppppuStack_60;
  if (-1 < (long)uStack_50) {
    uVar8 = uStack_50 >> 0x38;
    pppppuVar7 = &ppppuStack_60;
  }
  func_0x00010a1512bc(pppppuVar7,uVar8);
  if ((int)pppppuVar7 != 0) {
    uVar8 = uStack_58;
    pppppuVar7 = (undefined8 *****)ppppuStack_60;
    if (-1 < (long)uStack_50) {
      uVar8 = uStack_50 >> 0x38;
      pppppuVar7 = &ppppuStack_60;
    }
    FUN_10a1513b8(&uStack_90,pppppuVar7,uVar8);
    if ((long)uStack_50 < 0) {
      __ZdlPv(ppppuStack_60);
    }
    ppppuStack_60 = (undefined8 ****)CONCAT71(uStack_8f,uStack_90);
    uStack_58 = uStack_88;
    uStack_50 = CONCAT17(cStack_79,uStack_80);
    cStack_79 = '\0';
    uStack_90 = 0;
    if ((cStack_61 < '\0') && (__ZdlPv(uStack_78), cStack_79 < '\0')) {
      __ZdlPv(CONCAT71(uStack_8f,uStack_90));
    }
  }
  if ((long)uStack_50._7_1_ < 0) {
    pppppuVar7 = (undefined8 *****)ppppuStack_60;
    uVar8 = uStack_58;
    if ((long)uStack_58 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a153a6c);
      (*pcVar5)();
    }
  }
  else {
    pppppuVar7 = &ppppuStack_60;
    uVar8 = (long)uStack_50._7_1_;
  }
  func_0x00010b0adfa4(pppppuVar7,uVar8,3);
  *param_1 = (ulong)pppppuVar7;
  param_1[1] = (ulong)&UNK_1092bf448;
  puVar4 = PTR__fclose_11034c270;
  param_1[2] = (ulong)&PTR_DAT_110ae93c0;
  param_1[3] = (ulong)puVar4;
  if ((long)uStack_50 < 0) {
    __ZdlPv(ppppuStack_60);
    pppppuVar7 = (undefined8 *****)ppppuStack_60;
  }
  return pppppuVar7;
}



/* Entry: 10a153a90; end: 10a153ae7;  */

long FUN_10a153a90(long param_1)

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



/* Entry: 10a153ae8; end: 10a153be3;  */

undefined8 *
FUN_10a153ae8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  *param_1 = &PTR_FUN_110ba0be8;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0x3f800000;
  param_1[10] = 0;
  param_1[9] = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  FUN_10a048e7c(auStack_40,param_2,param_3,param_4,param_5,param_6,param_7,3,0,param_8);
  FUN_10a00e5c4(param_1 + 1,auStack_40);
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return param_1;
}



/* Entry: 10a153be4; end: 10a153cb3;  */

undefined8 * FUN_10a153be4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_110ba0be8;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0x3f800000;
  param_1[10] = 0;
  param_1[9] = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  puVar1 = param_1;
  FUN_10a3ca004();
  lVar3 = puVar1[8];
  if (lVar3 == 0) {
    FUN_10a3ca05c(puVar1,1);
    lVar3 = puVar1[8];
  }
  plVar2 = *(long **)(lVar3 + 0x228);
  (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
  FUN_10a099d88(param_1 + 1,plVar2);
  return param_1;
}



/* Entry: 10a153cb4; end: 10a153d03;  */

undefined4 FUN_10a153cb4(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  (**(code **)(*plVar2 + 0xb8))();
  if (*(int *)(plVar2[3] + 0x734) == 1) {
    func_0x00010926dea0();
    uVar1 = *(undefined4 *)((long)plVar2 + 0xac);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 10a153d04; end: 10a153ed7;  */

long * FUN_10a153d04(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uStack_60;
  long *plStack_58;
  long lStack_48;
  long *plStack_40;
  undefined1 uStack_31;
  
  lVar7 = *(long *)(param_1 + 8);
  if (lVar7 == 0) {
    if (*(long *)(param_1 + 0x28) != 0) {
      return (long *)(param_1 + 0x28);
    }
  }
  else {
    lVar5 = lVar7;
    ___dynamic_cast(lVar7,&PTR_DAT_110ba0e18,&PTR_DAT_110c545b8,0);
    if (lVar5 != 0) {
      return (long *)(lVar5 + 0xa8);
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      return (long *)(param_1 + 0x28);
    }
    ___dynamic_cast(lVar7,&PTR_DAT_110ba0e18,&PTR_DAT_110bc45d8,0xfffffffffffffffe);
    if (lVar7 != 0) {
      plStack_40 = *(long **)(param_1 + 0x10);
      lStack_48 = lVar7;
      if (plStack_40 != (long *)0x0) {
        plVar2 = plStack_40 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = *plVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      goto LAB_10a153d5c;
    }
  }
  lStack_48 = 0;
  plStack_40 = (long *)0x0;
LAB_10a153d5c:
  plVar6 = (long *)(param_1 + 0x28);
  func_0x00010a099dfc(plVar6,&lStack_48);
  plVar2 = plStack_40;
  if (plStack_40 != (long *)0x0) {
    plVar1 = plStack_40 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  if (*plVar6 == 0) {
    plStack_58 = *(long **)(param_1 + 0x10);
    uStack_60 = *(undefined8 *)(param_1 + 8);
    if (*(long *)(param_1 + 0x10) != 0) {
      plVar2 = (long *)(*(long *)(param_1 + 0x10) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a0a26b4(&lStack_48,&uStack_31,&uStack_60);
    func_0x00010a099e60(plVar6,&lStack_48);
    plVar2 = plStack_40;
    if (plStack_40 != (long *)0x0) {
      plVar1 = plStack_40 + 1;
      do {
        lVar7 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    plVar2 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
      do {
        lVar7 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
  }
  return plVar6;
}



/* Entry: 10a153ed8; end: 10a1540bf;  */

void FUN_10a153ed8(long *param_1,long *param_2)

{
  float *pfVar1;
  float *pfVar2;
  char cVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  bool bVar11;
  ulong uVar12;
  float *pfVar13;
  float fVar14;
  uint auStack_1f0 [102];
  undefined1 uStack_58;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 uStack_41;
  
  lVar6 = *param_2;
  if (lVar6 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (*(long *)(lVar6 + 8) == 0) {
      lVar9 = *(long *)(lVar6 + 0x10) + 0x30;
    }
    else {
      lVar9 = *(long *)(lVar6 + 8) + 0x38;
    }
    bVar11 = false;
    uVar10 = 0;
    do {
      uVar12 = 0;
      pfVar13 = (float *)(lVar9 + uVar10 * 0xc);
      do {
        pfVar1 = pfVar13;
        if ((int)uVar12 == 1) {
          pfVar1 = pfVar13 + 1;
        }
        pfVar2 = pfVar13 + 2;
        if ((int)uVar12 != 2) {
          pfVar2 = pfVar1;
        }
        fVar14 = 1.0;
        if (uVar10 != uVar12) {
          fVar14 = 0.0;
        }
        if (1e-06 < ABS(*pfVar2 - fVar14)) {
          if (!bVar11) {
            plVar4 = param_2;
            FUN_10a1540c0();
            lVar6 = *(long *)(*param_2 + 8);
            if (lVar6 == 0) {
              puVar7 = (undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10);
            }
            else {
              puVar7 = (undefined8 *)(lVar6 + 8);
            }
            plVar5 = (long *)*puVar7;
            (**(code **)(*plVar5 + 0x50))();
            uStack_4c = (undefined4)((ulong)plVar4 >> 0x20);
            uStack_48 = SUB84(plVar5,0);
            auStack_1f0[0] = (uint)plVar4;
            FUN_10a0a2760(param_1,&uStack_41,auStack_1f0,&uStack_4c,&uStack_48);
            lVar6 = *(long *)(*param_2 + 8);
            if (lVar6 == 0) {
              lVar6 = *(long *)(*param_2 + 0x10);
              puVar7 = (undefined8 *)(lVar6 + 0x10);
              lVar6 = lVar6 + 0x30;
            }
            else {
              puVar7 = (undefined8 *)(lVar6 + 8);
              lVar6 = lVar6 + 0x38;
            }
            lVar9 = *(long *)(*param_1 + 8);
            if (lVar9 == 0) {
              puVar8 = (undefined8 *)(*(long *)(*param_1 + 0x10) + 0x10);
            }
            else {
              puVar8 = (undefined8 *)(lVar9 + 8);
            }
            auStack_1f0[0] = auStack_1f0[0] & 0xffffff00;
            uStack_58 = 0;
            func_0x00010a0e3a84(*puVar7,*puVar8,lVar6,auStack_1f0);
            FUN_10a09d158(auStack_1f0);
            FUN_10a098870(*param_1);
            return;
          }
          goto LAB_10a153f9c;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 != 3);
      uVar12 = uVar10 + 1;
      bVar11 = 1 < uVar10;
      uVar10 = uVar12;
    } while (uVar12 != 3);
LAB_10a153f9c:
    lVar9 = param_2[1];
    *param_1 = lVar6;
    param_1[1] = lVar9;
    if (lVar9 != 0) {
      plVar4 = (long *)(lVar9 + 8);
      do {
        cVar3 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar11) {
          *plVar4 = *plVar4 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  return;
}



/* Entry: 10a1540c0; end: 10a1541c7;  */

undefined8 FUN_10a1540c0(long *param_1)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  float *pfVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  
  lVar5 = *(long *)(*param_1 + 8);
  if (lVar5 == 0) {
    puVar3 = (undefined8 *)(*(long *)(*param_1 + 0x10) + 0x10);
  }
  else {
    puVar3 = (undefined8 *)(lVar5 + 8);
  }
  plVar7 = (long *)*puVar3;
  plVar2 = plVar7;
  (**(code **)(*plVar7 + 0x28))();
  (**(code **)(*plVar7 + 0x30))();
  lVar5 = *(long *)(*param_1 + 8);
  if (lVar5 == 0) {
    pfVar4 = (float *)(*(long *)(*param_1 + 0x10) + 0x30);
  }
  else {
    pfVar4 = (float *)(lVar5 + 0x38);
  }
  uVar1 = (uint)plVar7;
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  uVar6 = (uint)plVar2;
  if (uVar6 < 2) {
    uVar6 = 1;
  }
  fVar9 = (pfVar4[2] + pfVar4[1] * (float)(int)uVar1 + (float)(int)uVar6 * *pfVar4) -
          (pfVar4[2] + pfVar4[1] * 0.0 + *pfVar4 * 0.0);
  fVar8 = (pfVar4[5] + pfVar4[4] * (float)(int)uVar1 + (float)(int)uVar6 * pfVar4[3]) -
          (pfVar4[5] + pfVar4[4] * 0.0 + pfVar4[3] * 0.0);
  if (fVar9 < 0.0) {
    fVar9 = -fVar9;
  }
  if (fVar8 < 0.0) {
    fVar8 = -fVar8;
  }
  return CONCAT44((int)fVar8,(int)fVar9);
}



/* Entry: 10a1541c8; end: 10a154427;  */

undefined1 *
FUN_10a1541c8(undefined1 *param_1,long param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 *puStack_3e8;
  long lStack_3e0;
  undefined1 *puStack_3d8;
  undefined1 *puStack_3d0;
  code *pcStack_3c8;
  undefined *puStack_3c0;
  undefined8 uStack_3b8;
  undefined1 uStack_228;
  undefined1 auStack_220 [8];
  undefined1 auStack_218 [288];
  undefined1 uStack_f8;
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [84];
  float afStack_84 [5];
  undefined4 uStack_70;
  float fStack_6c;
  float fStack_68;
  undefined4 uStack_64;
  
  ppuVar6 = &puStack_3c0;
  ppuVar7 = &puStack_3c0;
  if (param_2 != 0) {
    if (*(long *)(param_2 + 8) == 0) {
      puVar9 = (undefined8 *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    else {
      puVar9 = (undefined8 *)(*(long *)(param_2 + 8) + 8);
    }
    plVar12 = (long *)*puVar9;
    plVar4 = plVar12;
    (**(code **)(*plVar12 + 0x48))();
    plVar3 = *(long **)(param_1 + 8);
    (**(code **)(*plVar3 + 0x48))();
    puStack_3c0 = &UNK_10f636a31;
    uStack_3b8 = 0x2f;
    if ((int)plVar4 != (int)plVar3) {
      FUN_10a0edfc4();
      FUN_10a09d158(&puStack_3c0);
      FUN_10a154428(auStack_220);
      puVar8 = (undefined1 *)ppuVar7;
      __Unwind_Resume();
      pcStack_3c8 = FUN_10a154428;
      puStack_3e8 = puVar8 + 0x148;
      lStack_3e0 = param_2;
      puStack_3d8 = (undefined1 *)ppuVar7;
      puStack_3d0 = &stack0xfffffffffffffff0;
      FUN_10a09d1bc(&puStack_3e8);
      puStack_3e8 = puVar8 + 0x130;
      FUN_10a09d284(&puStack_3e8);
      puStack_3e8 = puVar8 + 8;
      func_0x00010a09d2f4(&puStack_3e8);
      return puVar8;
    }
    plVar4 = plVar12;
    (**(code **)(*plVar12 + 0x28))();
    uVar1 = (uint)plVar4;
    if (uVar1 < 2) {
      uVar1 = 1;
    }
    (**(code **)(*plVar12 + 0x30))();
    uVar2 = (uint)plVar12;
    if (uVar2 < 2) {
      uVar2 = 1;
    }
    fStack_6c = (float)(int)param_4 / (float)(int)uVar1;
    fStack_68 = (float)(int)((ulong)param_4 >> 0x20) / (float)(int)uVar2;
    afStack_84[1] = 0.0;
    afStack_84[2] = 0.0;
    afStack_84[3] = 0.0;
    uStack_70 = 0;
    uStack_64 = 0x3f800000;
    afStack_84[0] = (float)(int)param_5 / (float)(int)uVar1 - fStack_6c;
    afStack_84[4] = (float)(int)((ulong)param_5 >> 0x20) / (float)(int)uVar2 - fStack_68;
    plVar4 = *(long **)(param_1 + 8);
    (**(code **)(*plVar4 + 0xb8))();
    FUN_10a0e3e64(auStack_220,plVar4[3]);
    if (*(long *)(param_2 + 8) == 0) {
      puVar9 = (undefined8 *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    else {
      puVar9 = (undefined8 *)(*(long *)(param_2 + 8) + 8);
    }
    uVar10 = *puVar9;
    uVar11 = *(undefined8 *)(param_1 + 8);
    uStack_f8 = param_3;
    FUN_10a156fa0(&puStack_3c0,auStack_220);
    uStack_228 = 1;
    func_0x00010a0e3a84(uVar10,uVar11,afStack_84,&puStack_3c0);
    FUN_10a09d158(&puStack_3c0);
    if (*(long *)(param_2 + 8) == 0) {
      puVar9 = (undefined8 *)(*(long *)(param_2 + 0x10) + 0x30);
    }
    else {
      puVar9 = (undefined8 *)(*(long *)(param_2 + 8) + 0x38);
    }
    uVar11 = puVar9[1];
    uVar10 = *puVar9;
    uVar14 = puVar9[3];
    uVar13 = puVar9[2];
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(puVar9 + 4);
    *(undefined8 *)(param_1 + 0x50) = uVar14;
    *(undefined8 *)(param_1 + 0x48) = uVar13;
    *(undefined8 *)(param_1 + 0x40) = uVar11;
    *(undefined8 *)(param_1 + 0x38) = uVar10;
    lVar5 = *(long *)(param_1 + 8);
    if ((lVar5 != 0) && (___dynamic_cast(lVar5,&PTR_DAT_110ba0e18,&PTR_DAT_110c71a18,0), lVar5 != 0)
       ) {
      *(undefined1 *)(lVar5 + 0x160) = 1;
    }
    puStack_3c0 = auStack_d8;
    FUN_10a09d1bc(&puStack_3c0);
    puStack_3c0 = auStack_f0;
    FUN_10a09d284(&puStack_3c0);
    puStack_3c0 = auStack_218;
    func_0x00010a09d2f4(&puStack_3c0);
    param_1 = (undefined1 *)ppuVar6;
  }
  return param_1;
}



/* Entry: 10a154428; end: 10a15447f;  */

long FUN_10a154428(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x148;
  FUN_10a09d1bc(&lStack_28);
  lStack_28 = param_1 + 0x130;
  FUN_10a09d284(&lStack_28);
  lStack_28 = param_1 + 8;
  func_0x00010a09d2f4(&lStack_28);
  return param_1;
}



/* Entry: 10a154480; end: 10a15460b;  */

void FUN_10a154480(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint auStack_1e0 [102];
  undefined1 uStack_48;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 uStack_31;
  
  lVar2 = *param_2;
  if (lVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (*(long *)(lVar2 + 8) == 0) {
      puVar3 = (undefined8 *)(*(long *)(lVar2 + 0x10) + 0x10);
    }
    else {
      puVar3 = (undefined8 *)(*(long *)(lVar2 + 8) + 8);
    }
    plVar1 = (long *)*puVar3;
    (**(code **)(*plVar1 + 0x28))();
    auStack_1e0[0] = (uint)plVar1;
    lVar2 = *(long *)(*param_2 + 8);
    if (lVar2 == 0) {
      puVar3 = (undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10);
    }
    else {
      puVar3 = (undefined8 *)(lVar2 + 8);
    }
    plVar1 = (long *)*puVar3;
    (**(code **)(*plVar1 + 0x30))();
    uStack_38 = SUB84(plVar1,0);
    lVar2 = *(long *)(*param_2 + 8);
    if (lVar2 == 0) {
      puVar3 = (undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10);
    }
    else {
      puVar3 = (undefined8 *)(lVar2 + 8);
    }
    plVar1 = (long *)*puVar3;
    (**(code **)(*plVar1 + 0x50))();
    uStack_3c = SUB84(plVar1,0);
    FUN_10a0a2828(param_1,&uStack_31,auStack_1e0,&uStack_38,&uStack_3c);
    lVar2 = *(long *)(*param_1 + 8);
    if (lVar2 == 0) {
      puVar3 = (undefined8 *)(*(long *)(*param_1 + 0x10) + 0x10);
    }
    else {
      puVar3 = (undefined8 *)(lVar2 + 8);
    }
    lVar2 = *(long *)(*param_2 + 8);
    if (lVar2 == 0) {
      puVar4 = (undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10);
    }
    else {
      puVar4 = (undefined8 *)(lVar2 + 8);
    }
    auStack_1e0[0] = auStack_1e0[0] & 0xffffff00;
    uStack_48 = 0;
    func_0x00010a0e3774(*puVar4,*puVar3,&UNK_10e499518,auStack_1e0);
    FUN_10a09d158(auStack_1e0);
    lVar2 = *(long *)(*param_2 + 8);
    if (lVar2 == 0) {
      lVar2 = *(long *)(*param_2 + 0x10) + 0x30;
    }
    else {
      lVar2 = lVar2 + 0x38;
    }
    FUN_10a0986a0(*param_1,lVar2);
  }
  return;
}



/* Entry: 10a15460c; end: 10a1546a7;  */

undefined1 * FUN_10a15460c(undefined1 *param_1,long param_2,undefined1 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 *puStack_3e8;
  long lStack_3e0;
  undefined1 *puStack_3d8;
  undefined1 *puStack_3d0;
  code *pcStack_3c8;
  undefined *puStack_3c0;
  undefined8 uStack_3b8;
  undefined1 uStack_228;
  undefined1 auStack_220 [8];
  undefined1 auStack_218 [288];
  undefined1 uStack_f8;
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [84];
  float afStack_84 [5];
  undefined4 uStack_70;
  float fStack_6c;
  float fStack_68;
  undefined4 uStack_64;
  
  if (param_2 == 0) {
    return param_1;
  }
  if (*(long *)(param_2 + 8) == 0) {
    puVar10 = (undefined8 *)(*(long *)(param_2 + 0x10) + 0x10);
  }
  else {
    puVar10 = (undefined8 *)(*(long *)(param_2 + 8) + 8);
  }
  plVar13 = (long *)*puVar10;
  plVar5 = plVar13;
  (**(code **)(*plVar13 + 0x28))();
  uVar3 = (uint)plVar5;
  if (uVar3 < 2) {
    uVar3 = 1;
  }
  (**(code **)(*plVar13 + 0x30))();
  uVar4 = (uint)plVar13;
  if (uVar4 < 2) {
    uVar4 = 1;
  }
  ppuVar7 = &puStack_3c0;
  ppuVar8 = &puStack_3c0;
  if (param_2 != 0) {
    if (*(long *)(param_2 + 8) == 0) {
      puVar10 = (undefined8 *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    else {
      puVar10 = (undefined8 *)(*(long *)(param_2 + 8) + 8);
    }
    plVar14 = (long *)*puVar10;
    plVar5 = plVar14;
    (**(code **)(*plVar14 + 0x48))();
    plVar13 = *(long **)(param_1 + 8);
    (**(code **)(*plVar13 + 0x48))();
    puStack_3c0 = &UNK_10f636a31;
    uStack_3b8 = 0x2f;
    if ((int)plVar5 != (int)plVar13) {
      FUN_10a0edfc4();
      FUN_10a09d158(&puStack_3c0);
      FUN_10a154428(auStack_220);
      puVar9 = (undefined1 *)ppuVar8;
      __Unwind_Resume();
      pcStack_3c8 = FUN_10a154428;
      puStack_3e8 = puVar9 + 0x148;
      lStack_3e0 = param_2;
      puStack_3d8 = (undefined1 *)ppuVar8;
      puStack_3d0 = &stack0xfffffffffffffff0;
      FUN_10a09d1bc(&puStack_3e8);
      puStack_3e8 = puVar9 + 0x130;
      FUN_10a09d284(&puStack_3e8);
      puStack_3e8 = puVar9 + 8;
      func_0x00010a09d2f4(&puStack_3e8);
      return puVar9;
    }
    plVar5 = plVar14;
    (**(code **)(*plVar14 + 0x28))();
    uVar1 = (uint)plVar5;
    if (uVar1 < 2) {
      uVar1 = 1;
    }
    (**(code **)(*plVar14 + 0x30))();
    uVar2 = (uint)plVar14;
    if (uVar2 < 2) {
      uVar2 = 1;
    }
    fStack_6c = 0.0 / (float)(int)uVar1;
    fStack_68 = 0.0 / (float)(int)uVar2;
    afStack_84[1] = 0.0;
    afStack_84[2] = 0.0;
    afStack_84[3] = 0.0;
    uStack_70 = 0;
    uStack_64 = 0x3f800000;
    afStack_84[0] = (float)(int)uVar3 / (float)(int)uVar1 - fStack_6c;
    afStack_84[4] = (float)(int)uVar4 / (float)(int)uVar2 - fStack_68;
    plVar5 = *(long **)(param_1 + 8);
    (**(code **)(*plVar5 + 0xb8))();
    FUN_10a0e3e64(auStack_220,plVar5[3]);
    if (*(long *)(param_2 + 8) == 0) {
      puVar10 = (undefined8 *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    else {
      puVar10 = (undefined8 *)(*(long *)(param_2 + 8) + 8);
    }
    uVar11 = *puVar10;
    uVar12 = *(undefined8 *)(param_1 + 8);
    uStack_f8 = param_3;
    FUN_10a156fa0(&puStack_3c0,auStack_220);
    uStack_228 = 1;
    func_0x00010a0e3a84(uVar11,uVar12,afStack_84,&puStack_3c0);
    FUN_10a09d158(&puStack_3c0);
    if (*(long *)(param_2 + 8) == 0) {
      puVar10 = (undefined8 *)(*(long *)(param_2 + 0x10) + 0x30);
    }
    else {
      puVar10 = (undefined8 *)(*(long *)(param_2 + 8) + 0x38);
    }
    uVar12 = puVar10[1];
    uVar11 = *puVar10;
    uVar16 = puVar10[3];
    uVar15 = puVar10[2];
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(puVar10 + 4);
    *(undefined8 *)(param_1 + 0x50) = uVar16;
    *(undefined8 *)(param_1 + 0x48) = uVar15;
    *(undefined8 *)(param_1 + 0x40) = uVar12;
    *(undefined8 *)(param_1 + 0x38) = uVar11;
    lVar6 = *(long *)(param_1 + 8);
    if ((lVar6 != 0) && (___dynamic_cast(lVar6,&PTR_DAT_110ba0e18,&PTR_DAT_110c71a18,0), lVar6 != 0)
       ) {
      *(undefined1 *)(lVar6 + 0x160) = 1;
    }
    puStack_3c0 = auStack_d8;
    FUN_10a09d1bc(&puStack_3c0);
    puStack_3c0 = auStack_f0;
    FUN_10a09d284(&puStack_3c0);
    puStack_3c0 = auStack_218;
    func_0x00010a09d2f4(&puStack_3c0);
    param_1 = (undefined1 *)ppuVar7;
  }
  return param_1;
}



/* Entry: 10a1546a8; end: 10a1548d3;  */

void FUN_10a1546a8(long *param_1,long *param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  char cVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  bool bVar8;
  ulong uVar9;
  float *pfVar10;
  undefined8 uVar11;
  long lVar12;
  float fVar13;
  undefined1 *apuStack_380 [51];
  undefined1 uStack_1e8;
  undefined1 auStack_1e0 [8];
  undefined1 auStack_1d8 [288];
  undefined1 uStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [80];
  long *plStack_48;
  
  plVar4 = (long *)*param_2;
  if (plVar4 == (long *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (plVar4[1] == 0) {
      lVar6 = plVar4[2] + 0x30;
    }
    else {
      lVar6 = plVar4[1] + 0x38;
    }
    bVar8 = false;
    uVar7 = 0;
    do {
      uVar9 = 0;
      pfVar10 = (float *)(lVar6 + uVar7 * 0xc);
      do {
        pfVar1 = pfVar10;
        if ((int)uVar9 == 1) {
          pfVar1 = pfVar10 + 1;
        }
        pfVar2 = pfVar10 + 2;
        if ((int)uVar9 != 2) {
          pfVar2 = pfVar1;
        }
        fVar13 = 1.0;
        if (uVar7 != uVar9) {
          fVar13 = 0.0;
        }
        if (1e-06 < ABS(*pfVar2 - fVar13)) {
          if (!bVar8) {
            plVar4 = param_2;
            FUN_10a1540c0();
            plStack_48 = plVar4;
            FUN_10a30f97c();
            FUN_10a30fb38(param_1);
            plVar4 = (long *)*param_1;
            (**(code **)(*plVar4 + 0x30))();
            FUN_10a0e3e64(auStack_1e0,plVar4[3]);
            uStack_b8 = param_3 == 0;
            puVar5 = (undefined8 *)*param_2;
            FUN_10a098908();
            lVar6 = *(long *)(*param_2 + 8);
            if (lVar6 == 0) {
              lVar6 = *(long *)(*param_2 + 0x10) + 0x30;
            }
            else {
              lVar6 = lVar6 + 0x38;
            }
            uVar11 = *puVar5;
            lVar12 = *param_1;
            FUN_10a156fa0(apuStack_380,auStack_1e0);
            uStack_1e8 = 1;
            func_0x00010a0e3828(uVar11,lVar12,lVar6,apuStack_380);
            FUN_10a09d158(apuStack_380);
            apuStack_380[0] = auStack_98;
            FUN_10a09d1bc(apuStack_380);
            apuStack_380[0] = auStack_b0;
            FUN_10a09d284(apuStack_380);
            apuStack_380[0] = auStack_1d8;
            func_0x00010a09d2f4(apuStack_380);
            return;
          }
          goto LAB_10a154770;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != 3);
      uVar9 = uVar7 + 1;
      bVar8 = 1 < uVar7;
      uVar7 = uVar9;
    } while (uVar9 != 3);
LAB_10a154770:
    FUN_10a098908();
    lVar6 = plVar4[1];
    lVar12 = *plVar4;
    param_1[1] = plVar4[1];
    *param_1 = lVar12;
    if (lVar6 != 0) {
      plVar4 = (long *)(lVar6 + 8);
      do {
        cVar3 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar8) {
          *plVar4 = *plVar4 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  return;
}



/* Entry: 10a1548d4; end: 10a155213;  */

long FUN_10a1548d4(long param_1,long *param_2,long param_3,undefined8 *param_4,undefined8 *param_5)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 **ppuVar10;
  long *plVar11;
  uint *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined1 uStack_f1;
  long *plStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_d8;
  uint auStack_d0 [6];
  char cStack_b8;
  uint uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 uStack_98;
  undefined4 uStack_94;
  undefined1 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined1 uStack_7c;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = param_2[1];
  puVar14 = (undefined8 *)*param_2;
  ppuVar10 = (undefined8 **)(param_1 + 8);
  *(long *)(param_1 + 0x10) = param_2[1];
  *ppuVar10 = puVar14;
  if (lVar8 != 0) {
    plVar11 = (long *)(lVar8 + 8);
    do {
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = *plVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar15 = *param_4;
  *(undefined8 *)(param_1 + 0x20) = param_4[1];
  *(undefined8 *)(param_1 + 0x18) = uVar15;
  lVar8 = param_4[2];
  *(long *)(param_1 + 0x28) = lVar8;
  if (lVar8 != 0) {
    plVar11 = (long *)(lVar8 + 8);
    do {
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = *plVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar11 = (long *)(param_1 + 0x30);
  *plVar11 = 0;
  puVar12 = (uint *)(param_1 + 0x48);
  *(undefined1 *)puVar12 = 0;
  *(undefined1 *)(param_1 + 0x440) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x450) = 0;
  *(undefined8 *)(param_1 + 0x448) = 0;
  *(undefined8 *)(param_1 + 0x460) = 0;
  *(undefined8 *)(param_1 + 0x458) = 0;
  if (param_3 != 0) {
    (**(code **)(*(long *)*param_2 + 0x20))(&uStack_b0,(long *)*param_2,&uStack_f1);
    uVar4 = CONCAT44(uStack_a4,uStack_a8);
    uVar15 = CONCAT44(uStack_ac,uStack_b0);
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_a8 = 0;
    uStack_a4 = 0;
    plVar13 = *(long **)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = uVar4;
    *(undefined8 *)(param_1 + 0x30) = uVar15;
    if (plVar13 != (long *)0x0) {
      plVar1 = plVar13 + 1;
      do {
        lVar8 = *plVar1;
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    plVar13 = (long *)CONCAT44(uStack_a4,uStack_a8);
    if (plVar13 != (long *)0x0) {
      plVar1 = plVar13 + 1;
      do {
        lVar8 = *plVar1;
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    plVar13 = (long *)*plVar11;
    if (plVar13 != (long *)0x0) goto LAB_10a154a3c;
  }
  plVar13 = (long *)*param_2;
  (**(code **)(*plVar13 + 0x18))();
LAB_10a154a3c:
  *(long **)(param_1 + 0x40) = plVar13;
  puStack_d8 = (undefined8 *)((ulong)puStack_d8 & 0xffffffffffffff00);
  cStack_b8 = '\0';
  if (((ulong)param_5 & 1) == 0) {
    (**(code **)(*(long *)*param_2 + 0x28))(&uStack_b0);
    if (cStack_b8 == '\x01') {
      if ((puStack_d8 != (undefined8 *)0x0) &&
         ((*(code *)puStack_d8[2])(auStack_d0), puStack_d8 != (undefined8 *)0x0)) {
        (*(code *)*puStack_d8)(auStack_d0);
      }
      cStack_b8 = '\0';
    }
    puStack_d8 = (undefined8 *)0x0;
    if (CONCAT44(uStack_ac,uStack_b0) != 0) {
      (**(code **)(CONCAT44(uStack_ac,uStack_b0) + 8))(auStack_d0,&uStack_a8);
      puStack_d8 = (undefined8 *)CONCAT44(uStack_ac,uStack_b0);
    }
    cStack_b8 = '\x01';
  }
  param_2 = (long *)*param_2;
  puVar7 = puVar12;
  FUN_10a15530c(puVar12);
  *(uint **)(param_1 + 0x58) = puVar12;
  *(long **)(param_1 + 0x60) = param_2;
  *(code **)(param_1 + 0x48) = FUN_10a157358;
  *(undefined ***)(param_1 + 0x50) = &PTR_FUN_110ba85f8;
  *(undefined4 *)(param_1 + 0x88) = 1;
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (((ulong)param_5 & 1) == 0) {
    uStack_a8 = 1;
    uStack_a4 = 6;
    uStack_b0 = 0x20;
    uStack_ac = 0;
    (**(code **)(*param_2 + 0x70))(&plStack_f0,param_2,&uStack_b0);
    (**(code **)(*plStack_f0 + 0x30))(plStack_f0,2,0,0);
    _memcpy();
    (**(code **)(*plStack_f0 + 0x38))();
    *(undefined8 *)(param_1 + 0xa0) = uStack_e8;
    *(long **)(param_1 + 0x98) = plStack_f0;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    uStack_98 = 0;
    uStack_94 = 1;
    uStack_90 = 0;
    uStack_8c = 7;
    uStack_88 = 0x447a000000000000;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    (**(code **)(*param_2 + 0x50))(&plStack_f0,param_2,&uStack_b0);
    *(undefined8 *)(param_1 + 0xe8) = uStack_e8;
    *(long **)(param_1 + 0xe0) = plStack_f0;
    *(undefined4 *)(param_1 + 0x120) = 0;
    uStack_98 = 0;
    uStack_94 = 1;
    uStack_90 = 0;
    uStack_8c = 7;
    uStack_88 = 0x447a000000000000;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_b0 = 1;
    uStack_ac = 1;
    uStack_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    (**(code **)(*param_2 + 0x50))(&plStack_f0,param_2,&uStack_b0);
    param_5 = (undefined8 *)(param_1 + 0x128);
    *(undefined8 *)(param_1 + 0x130) = uStack_e8;
    *param_5 = plStack_f0;
    *(undefined4 *)(param_1 + 0x168) = 0;
    FUN_10a157590(&uStack_b0,param_2);
    *(ulong *)(param_1 + 0x178) = CONCAT44(uStack_a4,uStack_a8);
    *(ulong *)(param_1 + 0x170) = CONCAT44(uStack_ac,uStack_b0);
    *(undefined4 *)(param_1 + 0x1b0) = 0;
    FUN_10a1579f8(&uStack_b0,param_2);
    *(ulong *)(param_1 + 0x1c0) = CONCAT44(uStack_a4,uStack_a8);
    *(ulong *)(param_1 + 0x1b8) = CONCAT44(uStack_ac,uStack_b0);
    *(undefined4 *)(param_1 + 0x1f8) = 0;
    uStack_a0 = 6;
    uStack_a8 = 0x100000;
    uStack_a4 = 0x10;
    uStack_b0 = 0x20;
    uStack_ac = 0x400000;
    FUN_10a157e0c(&plStack_f0,param_2,&uStack_b0);
    *(undefined8 *)(param_1 + 0x208) = uStack_e8;
    *(long **)(param_1 + 0x200) = plStack_f0;
    *(undefined4 *)(param_1 + 0x240) = 0;
    uVar2 = *(uint *)((long)param_2 + 0x7bc);
    if (uVar2 == 0) {
      uStack_a0 = 6;
    }
    else {
      uVar9 = 0;
      bVar6 = true;
      do {
        if (uVar9 == 0x20) goto LAB_10a1550ac;
        if (((*(uint *)((long)param_2 + uVar9 * 4 + 0x73c) ^ 0xffffffff) & 0xe) == 0) break;
        uVar9 = uVar9 + 1;
        bVar6 = uVar9 < uVar2;
      } while (uVar2 != uVar9);
      uStack_a0 = 0xe;
      if (!bVar6) {
        uStack_a0 = 6;
      }
    }
    uStack_b0 = (uint)param_2[0x29];
    uStack_ac = 0x1000000;
    uVar9 = param_2[0x19];
    if ((ulong)param_2[0x18] <= (ulong)param_2[0x19]) {
      uVar9 = param_2[0x18];
    }
    if (0x3fffff < uVar9) {
      uVar9 = 0x400000;
    }
    uStack_a8 = (undefined4)uVar9;
    uStack_a4 = 4;
    FUN_10a158184(&plStack_f0,param_2,&uStack_b0);
    *(undefined8 *)(param_1 + 0x250) = uStack_e8;
    *(long **)(param_1 + 0x248) = plStack_f0;
    *(undefined4 *)(param_1 + 0x288) = 0;
    uStack_b0 = *(uint *)(param_2 + 0x29);
    if (uStack_b0 < 0x101) {
      uStack_b0 = 0x100;
    }
    uStack_a4 = 8;
    uStack_a0 = 6;
    uStack_ac = 0x1000000;
    uStack_a8 = 0x80000;
    FUN_10a158184(&plStack_f0,param_2,&uStack_b0);
    *(undefined8 *)(param_1 + 0x298) = uStack_e8;
    *(long **)(param_1 + 0x290) = plStack_f0;
    *(undefined4 *)(param_1 + 0x2d0) = 0;
    uStack_a0 = 6;
    uStack_a8 = 0x1000000;
    uStack_a4 = 0xc0;
    uStack_b0 = 0x20;
    uStack_ac = 0x2000000;
    FUN_10a157e0c(&plStack_f0,param_2,&uStack_b0);
    *(undefined8 *)(param_1 + 0x2e0) = uStack_e8;
    *(long **)(param_1 + 0x2d8) = plStack_f0;
    *(undefined4 *)(param_1 + 0x318) = 0;
    uStack_a0 = 6;
    uStack_a8 = 0x2000000;
    uStack_a4 = 0x40;
    uStack_b0 = 0x20;
    uStack_ac = 0x8000000;
    FUN_10a157e0c(&plStack_f0,param_2,&uStack_b0);
    *(undefined8 *)(param_1 + 0x328) = uStack_e8;
    *(long **)(param_1 + 800) = plStack_f0;
    *(undefined4 *)(param_1 + 0x360) = 0;
    uStack_a8 = 0x400000;
    uStack_a4 = 1;
    uStack_b0 = 0x20;
    uStack_ac = 0x100000;
    uStack_a0 = 6;
    FUN_10a15839c(&plStack_f0,param_2,&uStack_b0);
    *(undefined8 *)(param_1 + 0x370) = uStack_e8;
    *(long **)(param_1 + 0x368) = plStack_f0;
    *(undefined4 *)(param_1 + 0x3a8) = 0;
    uVar2 = *(uint *)((long)param_2 + 0x7bc);
    if (uVar2 == 0) {
      uStack_a0 = 6;
    }
    else {
      uVar9 = 0;
      bVar6 = true;
      do {
        if (uVar9 == 0x20) {
LAB_10a1550ac:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a1550b0);
          (*pcVar5)();
        }
        if (((*(uint *)((long)param_2 + uVar9 * 4 + 0x73c) ^ 0xffffffff) & 0xe) == 0) break;
        uVar9 = uVar9 + 1;
        bVar6 = uVar9 < uVar2;
      } while (uVar2 != uVar9);
      uStack_a0 = 0xe;
      if (!bVar6) {
        uStack_a0 = 6;
      }
    }
    uVar9 = param_2[0x29];
    if (uVar9 < 0x21) {
      uVar9 = 0x20;
    }
    uStack_b0 = (uint)uVar9;
    uStack_ac = 0x100000;
    uStack_a8 = 0x400000;
    uStack_a4 = 4;
    FUN_10a15839c(&plStack_f0,param_2,&uStack_b0);
    *(undefined8 *)(param_1 + 0x3b8) = uStack_e8;
    *(long **)(param_1 + 0x3b0) = plStack_f0;
    *(undefined4 *)(param_1 + 0x3f0) = 0;
    puVar7 = &uStack_b0;
    FUN_10a158598(puVar7,param_2);
    *(ulong *)(param_1 + 0x400) = CONCAT44(uStack_a4,uStack_a8);
    *(ulong *)(param_1 + 0x3f8) = CONCAT44(uStack_ac,uStack_b0);
    *(undefined4 *)(param_1 + 0x438) = 0;
  }
  else {
    *(code **)(param_1 + 0x98) = FUN_10a1573b0;
    *(undefined ***)(param_1 + 0xa0) = &PTR_FUN_110ba8610;
    *(long **)(param_1 + 0xa8) = param_2;
    *(undefined4 *)(param_1 + 0xd8) = 1;
    *(code **)(param_1 + 0xe0) = FUN_10a15746c;
    *(undefined ***)(param_1 + 0xe8) = &PTR_FUN_110ba8628;
    *(long **)(param_1 + 0xf0) = param_2;
    *(undefined4 *)(param_1 + 0x120) = 1;
    *(code **)(param_1 + 0x128) = FUN_10a1574e8;
    *(undefined ***)(param_1 + 0x130) = &PTR_FUN_110ba8640;
    *(long **)(param_1 + 0x138) = param_2;
    *(undefined4 *)(param_1 + 0x168) = 1;
    *(undefined8 *)(param_1 + 0x170) = 0x10a157568;
    *(undefined ***)(param_1 + 0x178) = &PTR_DAT_110ba8658;
    *(long **)(param_1 + 0x180) = param_2;
    *(undefined4 *)(param_1 + 0x1b0) = 1;
    *(code **)(param_1 + 0x1b8) = FUN_10a1579d0;
    *(undefined ***)(param_1 + 0x1c0) = &PTR_DAT_110ba86c0;
    *(long **)(param_1 + 0x1c8) = param_2;
    *(code **)(param_1 + 0x200) = FUN_10a157db4;
    *(undefined4 *)(param_1 + 0x1f8) = 1;
    *(undefined ***)(param_1 + 0x208) = &PTR_FUN_110ba8728;
    *(long **)(param_1 + 0x210) = param_2;
    *(undefined4 *)(param_1 + 0x240) = 1;
    *(code **)(param_1 + 0x248) = FUN_10a1580b4;
    *(undefined ***)(param_1 + 0x250) = &PTR_FUN_110ba8790;
    *(long **)(param_1 + 600) = param_2;
    *(undefined4 *)(param_1 + 0x288) = 1;
    *(code **)(param_1 + 0x290) = FUN_10a158230;
    *(undefined ***)(param_1 + 0x298) = &PTR_FUN_110ba87f8;
    *(long **)(param_1 + 0x2a0) = param_2;
    *(code **)(param_1 + 0x2d8) = FUN_10a158294;
    *(undefined4 *)(param_1 + 0x2d0) = 1;
    *(undefined ***)(param_1 + 0x2e0) = &PTR_FUN_110ba8810;
    *(long **)(param_1 + 0x2e8) = param_2;
    *(undefined4 *)(param_1 + 0x318) = 1;
    *(code **)(param_1 + 800) = FUN_10a1582ec;
    *(undefined ***)(param_1 + 0x328) = &PTR_FUN_110ba8828;
    *(long **)(param_1 + 0x330) = param_2;
    *(undefined4 *)(param_1 + 0x360) = 1;
    *(code **)(param_1 + 0x368) = FUN_10a158344;
    *(undefined ***)(param_1 + 0x370) = &PTR_FUN_110ba8840;
    *(long **)(param_1 + 0x378) = param_2;
    *(code **)(param_1 + 0x3b0) = FUN_10a1584a8;
    *(undefined4 *)(param_1 + 0x3a8) = 1;
    *(undefined ***)(param_1 + 0x3b8) = &PTR_FUN_110ba88a8;
    *(long **)(param_1 + 0x3c0) = param_2;
    *(undefined4 *)(param_1 + 0x3f0) = 1;
    *(undefined8 *)(param_1 + 0x3f8) = 0x10a158570;
    *(undefined ***)(param_1 + 0x400) = &PTR_DAT_110ba88c0;
    *(long **)(param_1 + 0x408) = param_2;
    *(undefined4 *)(param_1 + 0x438) = 1;
  }
  *(undefined1 *)(param_1 + 0x440) = 1;
  if ((cStack_b8 == '\x01') && (puStack_d8 != (undefined8 *)0x0)) {
    ppuVar10 = &puStack_d8;
    puVar7 = auStack_d0;
    (*(code *)puStack_d8[2])(puVar7);
    if (puStack_d8 != (undefined8 *)0x0) {
      puVar7 = auStack_d0;
      (*(code *)*puStack_d8)(puVar7);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    FUN_10a158740(param_1 + 0x3b0);
    FUN_10a158740(param_5 + 0x48);
    FUN_10a1587fc(param_1 + 800);
    FUN_10a1587fc(param_5 + 0x36);
    FUN_10a158868(param_1 + 0x290);
    FUN_10a158868(param_5 + 0x24);
    FUN_10a1587fc(param_1 + 0x200);
    FUN_10a158924(param_5 + 0x12);
    FUN_10a1589e0(param_1 + 0x170);
    FUN_10a158a4c(param_5);
    FUN_10a158a4c(param_1 + 0xe0);
    FUN_10a158ab8(param_1 + 0x98);
    do {
      FUN_10a158b24(puVar12);
      if (((cStack_b8 == '\x01') && (puStack_d8 != (undefined8 *)0x0)) &&
         ((*(code *)puStack_d8[2])(auStack_d0), puStack_d8 != (undefined8 *)0x0)) {
        (*(code *)*puStack_d8)(auStack_d0);
      }
      func_0x00010a1590ec(param_1 + 0x458);
      func_0x00010a1590ec((undefined8 *)(param_1 + 0x448));
      FUN_10a158ba4(puVar12);
      func_0x00010a159094(plVar11);
      FUN_10a09a130(param_1 + 0x20);
      func_0x00010a09dbbc(ppuVar10);
      __Unwind_Resume(puVar7);
      func_0x00010a045fb4(&plStack_f0);
    } while( true );
  }
  return param_1;
}



/* Entry: 10a155214; end: 10a15530b;  */

undefined8 * FUN_10a155214(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1 + 1;
  iVar3 = (int)param_1[8];
  (**(code **)(*(long *)*puVar1 + 0x28))(&puStack_58);
  FUN_10a15530c(param_1 + 9);
  func_0x00010a1553a8(param_1 + 0x89);
  func_0x00010a1553a8(param_1 + 0x8b);
  if (puStack_58 != (undefined8 *)0x0) {
    (*(code *)puStack_58[2])(auStack_50);
    if (puStack_58 != (undefined8 *)0x0) {
      (*(code *)*puStack_58)(auStack_50);
    }
  }
  func_0x00010a1590ec(param_1 + 0x8b);
  func_0x00010a1590ec(param_1 + 0x89);
  FUN_10a158ba4(param_1 + 9);
  func_0x00010a159094(param_1 + 6);
  FUN_10a09a130(param_1 + 4);
  func_0x00010a09dbbc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  if (iVar3 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  puVar2 = puVar1;
  if (*(char *)(puVar1 + 0x7f) == '\x01') {
    FUN_10a158c40(puVar1 + 0x76);
    FUN_10a158740(puVar1 + 0x6d);
    FUN_10a158740(puVar1 + 100);
    FUN_10a1587fc(puVar1 + 0x5b);
    FUN_10a1587fc(puVar1 + 0x52);
    FUN_10a158868(puVar1 + 0x49);
    FUN_10a158868(puVar1 + 0x40);
    FUN_10a1587fc(puVar1 + 0x37);
    FUN_10a158924(puVar1 + 0x2e);
    FUN_10a1589e0(puVar1 + 0x25);
    FUN_10a158a4c(puVar1 + 0x1c);
    FUN_10a158a4c(puVar1 + 0x13);
    FUN_10a158ab8(puVar1 + 10);
    FUN_10a158b24(puVar1);
    *(undefined1 *)(puVar1 + 0x7f) = 0;
  }
  return puVar2;
}



/* Entry: 10a15530c; end: 10a155403;  */

void FUN_10a15530c(long param_1)

{
  if (*(char *)(param_1 + 0x3f8) == '\x01') {
    FUN_10a158c40(param_1 + 0x3b0);
    FUN_10a158740(param_1 + 0x368);
    FUN_10a158740(param_1 + 800);
    FUN_10a1587fc(param_1 + 0x2d8);
    FUN_10a1587fc(param_1 + 0x290);
    FUN_10a158868(param_1 + 0x248);
    FUN_10a158868(param_1 + 0x200);
    FUN_10a1587fc(param_1 + 0x1b8);
    FUN_10a158924(param_1 + 0x170);
    FUN_10a1589e0(param_1 + 0x128);
    FUN_10a158a4c(param_1 + 0xe0);
    FUN_10a158a4c(param_1 + 0x98);
    FUN_10a158ab8(param_1 + 0x50);
    FUN_10a158b24(param_1);
    *(undefined1 *)(param_1 + 0x3f8) = 0;
  }
  return;
}



/* Entry: 10a155404; end: 10a15545f;  */

void FUN_10a155404(long param_1)

{
  code *pcVar1;
  
  if (((*(byte *)(param_1 + 0x440) & 1) != 0) &&
     ((*(int *)(param_1 + 0x288) != 0 ||
      (FUN_10abff71c(*(undefined8 *)(param_1 + 0x248),1), (*(byte *)(param_1 + 0x440) & 1) != 0))))
  {
    if (*(int *)(param_1 + 0x2d0) == 0) {
      FUN_10abff71c(*(undefined8 *)(param_1 + 0x290),1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a15545c);
  (*pcVar1)();
}



/* Entry: 10a155460; end: 10a15566b;  */

void FUN_10a155460(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  plVar1 = *(long **)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  __ZNSt3__115recursive_mutex4lockEv(uVar2);
  (**(code **)(*plVar1 + 0x40))(plVar1);
  __ZNSt3__115recursive_mutex6unlockEv(uVar2);
  if ((*(byte *)(param_1 + 0x440) & 1) != 0) {
    if (*(int *)(param_1 + 0x1b0) == 0) {
      lVar6 = *(long *)(param_1 + 0x170);
      __ZNSt3__15mutex4lockEv(lVar6 + 0x40);
      if (*(long *)(lVar6 + 0x98) != 0) {
        FUN_10a1577e0(*(undefined8 *)(lVar6 + 0x90));
        *(undefined8 *)(lVar6 + 0x90) = 0;
        lVar4 = *(long *)(lVar6 + 0x88);
        if (lVar4 != 0) {
          lVar5 = 0;
          do {
            *(undefined8 *)(*(long *)(lVar6 + 0x80) + lVar5 * 8) = 0;
            lVar5 = lVar5 + 1;
          } while (lVar4 != lVar5);
        }
        *(undefined8 *)(lVar6 + 0x98) = 0;
      }
      FUN_10a157774(lVar6 + 0xa8);
      __ZNSt3__15mutex6unlockEv(lVar6 + 0x40);
      if ((*(byte *)(param_1 + 0x440) & 1) == 0) goto LAB_10a155654;
    }
    if (*(int *)(param_1 + 0x1f8) == 0) {
      lVar6 = *(long *)(param_1 + 0x1b8);
      __ZNSt3__15mutex4lockEv(lVar6 + 0x40);
      if (*(long *)(lVar6 + 0x98) != 0) {
        FUN_10a157c68(*(undefined8 *)(lVar6 + 0x90));
        *(undefined8 *)(lVar6 + 0x90) = 0;
        lVar4 = *(long *)(lVar6 + 0x88);
        if (lVar4 != 0) {
          lVar5 = 0;
          do {
            *(undefined8 *)(*(long *)(lVar6 + 0x80) + lVar5 * 8) = 0;
            lVar5 = lVar5 + 1;
          } while (lVar4 != lVar5);
        }
        *(undefined8 *)(lVar6 + 0x98) = 0;
      }
      FUN_10a157bfc(lVar6 + 0xa8);
      __ZNSt3__15mutex6unlockEv(lVar6 + 0x40);
      if ((*(byte *)(param_1 + 0x440) & 1) == 0) goto LAB_10a155654;
    }
    if ((*(int *)(param_1 + 0x240) != 0) ||
       (FUN_10abe2a0c(*(undefined8 *)(param_1 + 0x200),0), (*(byte *)(param_1 + 0x440) & 1) != 0)) {
      if (*(int *)(param_1 + 0x288) == 0) {
        lVar6 = *(long *)(param_1 + 0x248);
        FUN_10abff71c(lVar6,0);
        FUN_10abe2a0c(lVar6 + 8,0);
        if ((*(byte *)(param_1 + 0x440) & 1) == 0) goto LAB_10a155654;
      }
      if (*(int *)(param_1 + 0x2d0) == 0) {
        lVar6 = *(long *)(param_1 + 0x290);
        FUN_10abff71c(lVar6,0);
        FUN_10abe2a0c(lVar6 + 8,0);
        if ((*(byte *)(param_1 + 0x440) & 1) == 0) goto LAB_10a155654;
      }
      if (((*(int *)(param_1 + 0x318) != 0) ||
          (FUN_10abe2a0c(*(undefined8 *)(param_1 + 0x2d8),0), (*(byte *)(param_1 + 0x440) & 1) != 0)
          ) && ((*(int *)(param_1 + 0x438) != 0 ||
                (func_0x0001092902dc(*(undefined8 *)(param_1 + 0x3f8),0),
                (*(byte *)(param_1 + 0x440) & 1) != 0)))) {
        if (*(int *)(param_1 + 0x360) == 0) {
          FUN_10abe2a0c(*(undefined8 *)(param_1 + 800),0);
        }
        (**(code **)(**(long **)(param_1 + 0x40) + 0x40))();
                    /* WARNING: Could not recover jumptable at 0x00010a155650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 8) + 0xe8))();
        return;
      }
    }
  }
LAB_10a155654:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a155658);
  (*pcVar3)();
}



/* Entry: 10a15566c; end: 10a155833;  */

undefined1 ** FUN_10a15566c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  long lStack_c0;
  undefined1 *puStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined1 *puStack_98;
  undefined8 **ppuStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined1 *puStack_78;
  undefined8 **ppuStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 *puStack_58;
  undefined1 **ppuStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  long lStack_20;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)&lStack_20;
  lStack_20 = param_1;
  if (*(uint *)(param_1 + 0x40) != 0xffffffff) {
    ppuVar2 = &puStack_18;
    (*(code *)(&PTR_FUN_110ba89b8)[*(uint *)(param_1 + 0x40)])(ppuVar2,param_1);
    return ppuVar2;
  }
  FUN_10a0d459c();
  puStack_38 = (undefined1 *)&lStack_40;
  uStack_28 = 0x10a1556b8;
  ppuStack_50 = &puStack_30;
  lStack_40 = param_1;
  puStack_30 = &stack0xfffffffffffffff0;
  if (*(uint *)(param_1 + 0x40) != 0xffffffff) {
    ppuVar2 = &puStack_38;
    (*(code *)(&PTR_FUN_110ba89c8)[*(uint *)(param_1 + 0x40)])(ppuVar2,param_1);
    return ppuVar2;
  }
  FUN_10a0d459c();
  puStack_58 = (undefined1 *)&lStack_60;
  uStack_48 = 0x10a155704;
  ppuStack_70 = &ppuStack_50;
  lStack_60 = param_1;
  if (*(uint *)(param_1 + 0x40) != 0xffffffff) {
    ppuVar2 = &puStack_58;
    (*(code *)(&PTR_FUN_110ba89d8)[*(uint *)(param_1 + 0x40)])(ppuVar2,param_1);
    return ppuVar2;
  }
  FUN_10a0d459c();
  puStack_78 = (undefined1 *)&lStack_80;
  uStack_68 = 0x10a155750;
  ppuStack_90 = &ppuStack_70;
  lStack_80 = param_1;
  if (*(uint *)(param_1 + 0x40) != 0xffffffff) {
    ppuVar2 = &puStack_78;
    (*(code *)(&PTR_FUN_110ba89e8)[*(uint *)(param_1 + 0x40)])(ppuVar2,param_1);
    return ppuVar2;
  }
  FUN_10a0d459c();
  puStack_98 = (undefined1 *)&lStack_a0;
  uStack_88 = 0x10a15579c;
  ppuStack_b0 = &ppuStack_90;
  lStack_a0 = param_1;
  if (*(uint *)(param_1 + 0x40) != 0xffffffff) {
    ppuVar2 = &puStack_98;
    (*(code *)(&PTR_FUN_110ba89f8)[*(uint *)(param_1 + 0x40)])(ppuVar2,param_1);
    return ppuVar2;
  }
  FUN_10a0d459c();
  puStack_b8 = (undefined1 *)&lStack_c0;
  uStack_a8 = 0x10a1557e8;
  lStack_c0 = param_1;
  if (*(uint *)(param_1 + 0x40) != 0xffffffff) {
    ppuVar2 = &puStack_b8;
    (*(code *)(&PTR_FUN_110ba8a08)[*(uint *)(param_1 + 0x40)])(ppuVar2,param_1);
    return ppuVar2;
  }
  FUN_10a0d459c();
  lVar1 = 0x458;
  if ((int)param_2 == 0) {
    lVar1 = 0x448;
  }
  if (*(long *)(param_1 + lVar1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    lVar3 = 0xc68;
    __Znwm();
    func_0x000107c2b054(auStack_118,&UNK_10f63f0cd);
    FUN_10a0e4d58(lVar3,uVar4,param_2,auStack_118);
    lStack_120 = lVar3;
    if (cStack_101 < '\0') {
      __ZdlPv(auStack_118[0]);
    }
    FUN_10a155938(param_1 + lVar1,&lStack_120);
    lVar3 = lStack_120;
    lStack_120 = 0;
    if (lVar3 != 0) {
      func_0x00010a159354(&lStack_120);
    }
  }
  return (undefined1 **)(param_1 + lVar1);
}



/* Entry: 10a155834; end: 10a155937;  */

long FUN_10a155834(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_60;
  undefined8 auStack_58 [2];
  char cStack_41;
  
  lVar1 = 0x458;
  if ((int)param_2 == 0) {
    lVar1 = 0x448;
  }
  if (*(long *)(param_1 + lVar1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    lVar2 = 0xc68;
    __Znwm();
    func_0x000107c2b054(auStack_58,&UNK_10f63f0cd);
    FUN_10a0e4d58(lVar2,uVar3,param_2,auStack_58);
    lStack_60 = lVar2;
    if (cStack_41 < '\0') {
      __ZdlPv(auStack_58[0]);
    }
    FUN_10a155938(param_1 + lVar1,&lStack_60);
    lVar2 = lStack_60;
    lStack_60 = 0;
    if (lVar2 != 0) {
      func_0x00010a159354(&lStack_60);
    }
  }
  return param_1 + lVar1;
}



/* Entry: 10a155938; end: 10a1559cb;  */

long * FUN_10a155938(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  
  lVar6 = *param_2;
  if (lVar6 == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)0x20;
    __Znwm();
    *puVar4 = &PTR_FUN_110ba8a28;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = lVar6;
  }
  *param_2 = 0;
  plVar5 = (long *)param_1[1];
  *param_1 = lVar6;
  param_1[1] = (long)puVar4;
  if (plVar5 != (long *)0x0) {
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a1559cc; end: 10a155a63;  */

undefined1 ** FUN_10a1559cc(long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined1 **ppuVar3;
  undefined1 **ppuVar4;
  long *plVar5;
  long *plStack_68;
  long lStack_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  long lStack_20;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)&lStack_20;
  lStack_20 = param_1;
  if (*(uint *)(param_1 + 0x40) != 0xffffffff) {
    ppuVar3 = &puStack_18;
    (*(code *)(&PTR_DAT_110ba8a78)[*(uint *)(param_1 + 0x40)])(ppuVar3,param_1);
    return ppuVar3;
  }
  FUN_10a0d459c();
  puStack_38 = (undefined1 *)&lStack_40;
  uStack_28 = 0x10a155a18;
  lStack_40 = param_1;
  puStack_30 = &stack0xfffffffffffffff0;
  if (*(uint *)(param_1 + 0x40) != 0xffffffff) {
    ppuVar3 = &puStack_38;
    (*(code *)(&PTR_FUN_110ba8a88)[*(uint *)(param_1 + 0x40)])(ppuVar3,param_1);
    return ppuVar3;
  }
  FUN_10a0d459c();
  if ((*(byte *)(param_1 + 0x440) & 1) != 0) {
    ppuVar3 = (undefined1 **)(param_1 + 0x48);
    FUN_10a155b04();
    ppuVar4 = ppuVar3;
    FUN_10a08fd8c();
    if ((*(byte *)(param_1 + 0x440) & 1) != 0) {
      if ((int)ppuVar4 != *(int *)(param_1 + 0x90)) {
        *(int *)(param_1 + 0x90) = (int)ppuVar4;
        FUN_10a155b50(&plStack_68,*(undefined8 *)(param_1 + 8));
        plVar1 = plStack_68;
        plStack_68 = (long *)0x0;
        plVar5 = (long *)*ppuVar3;
        *ppuVar3 = (undefined1 *)plVar1;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 8))();
          plVar1 = plStack_68;
          plStack_68 = (long *)0x0;
          if (plVar1 != (long *)0x0) {
            (**(code **)(*plVar1 + 8))();
          }
        }
      }
      return ppuVar3;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a155b04);
  (*pcVar2)();
}



/* Entry: 10a155a64; end: 10a155b03;  */

long * FUN_10a155a64(long param_1)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plStack_28;
  
  if ((*(byte *)(param_1 + 0x440) & 1) != 0) {
    plVar2 = (long *)(param_1 + 0x48);
    FUN_10a155b04();
    plVar3 = plVar2;
    FUN_10a08fd8c();
    if ((*(byte *)(param_1 + 0x440) & 1) != 0) {
      if ((int)plVar3 != *(int *)(param_1 + 0x90)) {
        *(int *)(param_1 + 0x90) = (int)plVar3;
        FUN_10a155b50(&plStack_28,*(undefined8 *)(param_1 + 8));
        plVar3 = plStack_28;
        plStack_28 = (long *)0x0;
        plVar4 = (long *)*plVar2;
        *plVar2 = (long)plVar3;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 8))();
          plVar3 = plStack_28;
          plStack_28 = (long *)0x0;
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 8))();
          }
        }
      }
      return plVar2;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a155b04);
  (*pcVar1)();
}



/* Entry: 10a155b04; end: 10a155b4f;  */

void FUN_10a155b04(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 *extraout_x8;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined2 uStack_6a;
  long lStack_20;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)&lStack_20;
  lStack_20 = param_1;
  if (*(uint *)(param_1 + 0x40) == 0xffffffff) {
    FUN_10a0d459c();
    lVar5 = param_1;
    FUN_10a08fd8c();
    uVar3 = (uint)lVar5;
    if (uVar3 == 0) {
      *extraout_x8 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x734);
      FUN_10a08fd8c();
      iVar2 = *(int *)(param_1 + 0x734);
      uVar4 = uVar3;
      FUN_10a08fd8c();
      uStack_70 = 0;
      uStack_6c = 0;
      uStack_6b = 0;
      uStack_88 = 0;
      uStack_84 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      uStack_78 = 0;
      uStack_74 = 0;
      uStack_80 = 0;
      uStack_7c = 0;
      uStack_a8 = 0;
      uStack_a4 = 0;
      uStack_b0 = 0;
      uStack_ac = 0;
      uStack_98 = 0;
      uStack_94 = 0;
      uStack_a0 = 0;
      uStack_9c = 0;
      uStack_c8 = 0;
      uStack_c4 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      uStack_b8 = 0;
      uStack_b4 = 0;
      uStack_c0 = 0;
      uStack_bc = 0;
      uStack_e8 = 0;
      uStack_e4 = 0;
      uStack_f0 = 0;
      uStack_ec = 0;
      uStack_d8 = 0;
      uStack_d4 = 0;
      uStack_e0 = 0;
      uStack_dc = 0;
      uStack_108 = 0;
      uStack_104 = 0;
      uStack_110 = 0;
      uStack_10c = 0;
      uStack_f8 = 0;
      uStack_f4 = 0;
      uStack_100 = 0;
      uStack_fc = 0;
      uStack_128 = 0;
      uStack_124 = 0;
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_118 = 0;
      uStack_114 = 0;
      uStack_120 = 0;
      uStack_11c = 0;
      uStack_148 = 0;
      uStack_144 = 0;
      uStack_150 = 0;
      uStack_14c = 0;
      uStack_138 = 0;
      uStack_134 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_168 = 0;
      uStack_164 = 0;
      uStack_170 = 0;
      uStack_16c = 0;
      uStack_158 = 0;
      uStack_154 = 0;
      uStack_160 = 0;
      uStack_15c = 0;
      uStack_6a = 0x101;
      if (((iVar1 == 7 || iVar1 == 2) && ((uVar3 >> 5 & 1) != 0)) ||
         ((iVar2 == 8 || iVar2 == 3 && ((uVar4 >> 7 & 1) != 0)))) {
        uStack_6b = 0;
        uStack_6a = 0x101;
        uStack_170 = 0x1cc;
        uStack_164 = 0x1010101;
        uStack_160 = 0x1010101;
        uStack_16c = 0x1010101;
        uStack_168 = 0x1010101;
        uStack_154 = 0x1010101;
        uStack_150 = 0x1010101;
        uStack_15c = 0x1010101;
        uStack_158 = 0x1010101;
        uStack_144 = 0x1010101;
        uStack_140 = 0x1010101;
        uStack_14c = 0x1010101;
        uStack_148 = 0x1010101;
        uStack_134 = 0x1010101;
        uStack_130 = 0x1010101;
        uStack_13c = 0x1010101;
        uStack_138 = 0x1010101;
        uStack_124 = 0x1010101;
        uStack_120 = 0x1010101;
        uStack_12c = 0x1010101;
        uStack_128 = 0x1010101;
        uStack_114 = 0x1010101;
        uStack_110 = 0x1010101;
        uStack_11c = 0x1010101;
        uStack_118 = 0x1010101;
        uStack_104 = 0x1010101;
        uStack_100 = 0x1010101;
        uStack_10c = 0x1010101;
        uStack_108 = 0x1010101;
        uStack_f4 = 0x1010101;
        uStack_f0 = 0x1010101;
        uStack_fc = 0x1010101;
        uStack_f8 = 0x1010101;
        uStack_e4 = 0x1010101;
        uStack_e0 = 0x1010101;
        uStack_ec = 0x1010101;
        uStack_e8 = 0x1010101;
        uStack_d4 = 0x1010101;
        uStack_d0 = 0x1010101;
        uStack_dc = 0x1010101;
        uStack_d8 = 0x1010101;
        uStack_c4 = 0x1010101;
        uStack_c0 = 0x1010101;
        uStack_cc = 0x1010101;
        uStack_c8 = 0x1010101;
        uStack_b4 = 0x1010101;
        uStack_b0 = 0x1010101;
        uStack_bc = 0x1010101;
        uStack_b8 = 0x1010101;
        uStack_a4 = 0x1010101;
        uStack_a0 = 0x1010101;
        uStack_ac = 0x1010101;
        uStack_a8 = 0x1010101;
        uStack_94 = 0x1010101;
        uStack_90 = 0x1010101;
        uStack_9c = 0x1010101;
        uStack_98 = 0x1010101;
        uStack_84 = 0x1010101;
        uStack_80 = 0x1010101;
        uStack_8c = 0x1010101;
        uStack_88 = 0x1010101;
        uStack_74 = 0x1010101;
        uStack_70 = 0x1010101;
        uStack_7c = 0x1010101;
        uStack_78 = 0x1010101;
        uStack_6c = 1;
      }
      else {
        lVar5 = 1;
        FUN_10a303694(1);
        FUN_10a09123c(&uStack_170,lVar5 + 500,lVar5 + 0x240);
      }
      FUN_109f6bf2c(extraout_x8,&uStack_170);
    }
    return;
  }
  (*(code *)(&PTR_FUN_110ba8a98)[*(uint *)(param_1 + 0x40)])(&puStack_18,param_1);
  return;
}



/* Entry: 10a155b50; end: 10a155c87;  */

void FUN_10a155b50(undefined8 *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined2 uStack_4a;
  
  lVar5 = param_2;
  FUN_10a08fd8c();
  uVar3 = (uint)lVar5;
  if (uVar3 == 0) {
    *param_1 = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 0x734);
    FUN_10a08fd8c();
    iVar2 = *(int *)(param_2 + 0x734);
    uVar4 = uVar3;
    FUN_10a08fd8c();
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_4b = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_88 = 0;
    uStack_84 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_a8 = 0;
    uStack_a4 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_c8 = 0;
    uStack_c4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_b8 = 0;
    uStack_b4 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    uStack_e8 = 0;
    uStack_e4 = 0;
    uStack_f0 = 0;
    uStack_ec = 0;
    uStack_d8 = 0;
    uStack_d4 = 0;
    uStack_e0 = 0;
    uStack_dc = 0;
    uStack_108 = 0;
    uStack_104 = 0;
    uStack_110 = 0;
    uStack_10c = 0;
    uStack_f8 = 0;
    uStack_f4 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    uStack_128 = 0;
    uStack_124 = 0;
    uStack_130 = 0;
    uStack_12c = 0;
    uStack_118 = 0;
    uStack_114 = 0;
    uStack_120 = 0;
    uStack_11c = 0;
    uStack_148 = 0;
    uStack_144 = 0;
    uStack_150 = 0;
    uStack_14c = 0;
    uStack_138 = 0;
    uStack_134 = 0;
    uStack_140 = 0;
    uStack_13c = 0;
    uStack_4a = 0x101;
    if (((iVar1 == 7 || iVar1 == 2) && ((uVar3 >> 5 & 1) != 0)) ||
       ((iVar2 == 8 || iVar2 == 3 && ((uVar4 >> 7 & 1) != 0)))) {
      uStack_4b = 0;
      uStack_4a = 0x101;
      uStack_150 = 0x1cc;
      uStack_144 = 0x1010101;
      uStack_140 = 0x1010101;
      uStack_14c = 0x1010101;
      uStack_148 = 0x1010101;
      uStack_134 = 0x1010101;
      uStack_130 = 0x1010101;
      uStack_13c = 0x1010101;
      uStack_138 = 0x1010101;
      uStack_124 = 0x1010101;
      uStack_120 = 0x1010101;
      uStack_12c = 0x1010101;
      uStack_128 = 0x1010101;
      uStack_114 = 0x1010101;
      uStack_110 = 0x1010101;
      uStack_11c = 0x1010101;
      uStack_118 = 0x1010101;
      uStack_104 = 0x1010101;
      uStack_100 = 0x1010101;
      uStack_10c = 0x1010101;
      uStack_108 = 0x1010101;
      uStack_f4 = 0x1010101;
      uStack_f0 = 0x1010101;
      uStack_fc = 0x1010101;
      uStack_f8 = 0x1010101;
      uStack_e4 = 0x1010101;
      uStack_e0 = 0x1010101;
      uStack_ec = 0x1010101;
      uStack_e8 = 0x1010101;
      uStack_d4 = 0x1010101;
      uStack_d0 = 0x1010101;
      uStack_dc = 0x1010101;
      uStack_d8 = 0x1010101;
      uStack_c4 = 0x1010101;
      uStack_c0 = 0x1010101;
      uStack_cc = 0x1010101;
      uStack_c8 = 0x1010101;
      uStack_b4 = 0x1010101;
      uStack_b0 = 0x1010101;
      uStack_bc = 0x1010101;
      uStack_b8 = 0x1010101;
      uStack_a4 = 0x1010101;
      uStack_a0 = 0x1010101;
      uStack_ac = 0x1010101;
      uStack_a8 = 0x1010101;
      uStack_94 = 0x1010101;
      uStack_90 = 0x1010101;
      uStack_9c = 0x1010101;
      uStack_98 = 0x1010101;
      uStack_84 = 0x1010101;
      uStack_80 = 0x1010101;
      uStack_8c = 0x1010101;
      uStack_88 = 0x1010101;
      uStack_74 = 0x1010101;
      uStack_70 = 0x1010101;
      uStack_7c = 0x1010101;
      uStack_78 = 0x1010101;
      uStack_64 = 0x1010101;
      uStack_60 = 0x1010101;
      uStack_6c = 0x1010101;
      uStack_68 = 0x1010101;
      uStack_54 = 0x1010101;
      uStack_50 = 0x1010101;
      uStack_5c = 0x1010101;
      uStack_58 = 0x1010101;
      uStack_4c = 1;
    }
    else {
      lVar5 = 1;
      FUN_10a303694(1);
      FUN_10a09123c(&uStack_150,lVar5 + 500,lVar5 + 0x240);
    }
    FUN_109f6bf2c(param_1,&uStack_150);
  }
  return;
}



/* Entry: 10a155c88; end: 10a155d7b;  */

undefined8 *
FUN_10a155c88(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  param_1[3] = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = param_2;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  FUN_10a155d7c(param_1,param_3,param_4,param_5);
  FUN_10a155f38(param_1,param_3,param_4,param_5);
  FUN_10a155fd4(param_1,param_3,param_4,param_5);
  return param_1;
}



/* Entry: 10a155d7c; end: 10a155f37;  */

void FUN_10a155d7c(long param_1,long param_2,long *param_3)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  if (param_2 == 0) {
    plVar4 = (long *)0x768;
    __Znwm();
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = (long)&PTR_FUN_110ba8ab8;
    plVar7 = plVar4 + 3;
    _bzero(plVar7,0x748);
    *(undefined4 *)(plVar4 + 0x8a) = 0x3f800000;
    plVar4[0x8c] = 0;
    plVar4[0x8b] = 0;
    plVar4[0x8e] = 0;
    plVar4[0x8d] = 0;
    *(undefined4 *)(plVar4 + 0x8f) = 0x3f800000;
    _bzero(plVar4 + 0x90,0x2d8);
    *(undefined4 *)(plVar4 + 0xeb) = 0x3f800000;
    plVar4[0xec] = 0;
  }
  else {
    plVar7 = *(long **)(param_2 + 0xa8);
    plVar4 = *(long **)(param_2 + 0xb0);
    if (plVar4 == (long *)0x0) {
      bVar3 = true;
      goto LAB_10a155e40;
    }
    plVar8 = plVar4 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar8 = plVar4 + 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = *plVar8 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  bVar3 = false;
LAB_10a155e40:
  plVar8 = *(long **)(param_1 + 0xb0);
  *(long **)(param_1 + 0xa8) = plVar7;
  *(long **)(param_1 + 0xb0) = plVar4;
  if (plVar8 != (long *)0x0) {
    plVar7 = plVar8 + 1;
    do {
      lVar6 = *plVar7;
      cVar2 = '\x01';
      bVar1 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar1) {
        *plVar7 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  if (!bVar3) {
    plVar7 = plVar4 + 1;
    do {
      lVar6 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  if (*(long *)(*param_3 + 8) != 0) {
    lVar5 = 0x468;
    __Znwm();
    FUN_10a1548d4();
    lVar6 = *(long *)(param_1 + 8);
    *(long *)(param_1 + 8) = lVar5;
    if (lVar6 == 0) {
      return;
    }
    FUN_10a155214();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a155f38; end: 10a155fd3;  */

void FUN_10a155f38(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)*param_3 == 0) {
    return;
  }
  lVar2 = 0x468;
  __Znwm();
  FUN_10a1548d4();
  lVar1 = *param_1;
  *param_1 = lVar2;
  if (lVar1 != 0) {
    FUN_10a155214();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a155fd4; end: 10a15606f;  */

void FUN_10a155fd4(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(*param_3 + 0x10) == 0) {
    return;
  }
  lVar2 = 0x468;
  __Znwm();
  FUN_10a1548d4();
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar2;
  if (lVar1 != 0) {
    FUN_10a155214();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a156070; end: 10a1561c3;  */

void FUN_10a156070(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_2[1];
  if (lVar2 == 0) {
    uStack_48 = 0;
    puStack_50 = (undefined8 *)0x0;
    uStack_38 = 0;
    uStack_40 = 0;
  }
  else {
    (**(code **)(**(long **)(lVar2 + 8) + 0x28))
              (&puStack_50,*(long **)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x40));
  }
  lVar2 = *param_2;
  if (lVar2 == 0) {
    uStack_68 = 0;
    puStack_70 = (undefined8 *)0x0;
    uStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    (**(code **)(**(long **)(lVar2 + 8) + 0x28))
              (&puStack_70,*(long **)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x40));
  }
  FUN_10a158cac(param_1,&puStack_50,&puStack_70);
  if (puStack_70 != (undefined8 *)0x0) {
    param_1 = (long *)((ulong)&puStack_70 | 8);
    (*(code *)puStack_70[2])();
    if (puStack_70 != (undefined8 *)0x0) {
      param_1 = (long *)((ulong)&puStack_70 | 8);
      (*(code *)*puStack_70)();
    }
  }
  if (puStack_50 != (undefined8 *)0x0) {
    param_1 = (long *)((ulong)&puStack_50 | 8);
    (*(code *)puStack_50[2])();
    if (puStack_50 != (undefined8 *)0x0) {
      param_1 = (long *)((ulong)&puStack_50 | 8);
      (*(code *)*puStack_50)();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (puStack_50 != (undefined8 *)0x0) {
    (*(code *)puStack_50[2])((ulong)&puStack_50 | 8);
    if (puStack_50 != (undefined8 *)0x0) {
      (*(code *)*puStack_50)((ulong)&puStack_50 | 8);
    }
  }
  __Unwind_Resume();
  if (param_1[1] != 0) {
    plVar1 = *(long **)(param_1[1] + 0x40);
    (**(code **)(*plVar1 + 0x30))();
    if ((int)plVar1 == 0) {
      return;
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010a15620c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*param_1 + 0x40) + 0x30))();
  return;
}



/* Entry: 10a1561c4; end: 10a15626f;  */

void FUN_10a1561c4(long *param_1)

{
  long *plVar1;
  
  if (param_1[1] != 0) {
    plVar1 = *(long **)(param_1[1] + 0x40);
    (**(code **)(*plVar1 + 0x30))();
    if ((int)plVar1 == 0) {
      return;
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010a15620c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*param_1 + 0x40) + 0x30))();
  return;
}



/* Entry: 10a156270; end: 10a156297;  */

undefined * FUN_10a156270(int param_1)

{
  if (param_1 - 1U < 8) {
    return (&PTR_DAT_110ba8af8)[param_1 - 1U];
  }
  return &UNK_10f63ef9f;
}



/* Entry: 10a156298; end: 10a15662b;  */

void FUN_10a156298(ulong *param_1,long *param_2,undefined8 param_3,ulong *param_4)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  ulong *puVar4;
  bool bVar5;
  undefined8 ***pppuVar6;
  ulong uVar7;
  long lVar8;
  ulong uStack_d0;
  long *plStack_c8;
  ulong uStack_c0;
  undefined8 **ppuStack_b8;
  ulong *puStack_b0;
  ulong uStack_a8;
  ulong *puStack_88;
  ulong *puStack_80;
  undefined1 auStack_70 [8];
  undefined8 **ppuStack_68;
  ulong uStack_60;
  byte bStack_51;
  
  if (*(int *)((long)param_2 + 0x734) == 2) {
    FUN_10a15662c(auStack_70,param_2,param_3);
    FUN_10a0f1f4c(&puStack_88,auStack_70);
    puStack_b0 = (ulong *)uStack_60;
    ppuStack_b8 = ppuStack_68;
    if (-1 < (char)bStack_51) {
      puStack_b0 = (ulong *)(ulong)bStack_51;
      ppuStack_b8 = &ppuStack_68;
    }
    pppuVar6 = &ppuStack_b8;
    FUN_10a159054(pppuVar6,&UNK_10f63efa7,9);
    if ((int)pppuVar6 == 0) {
      func_0x000107c2c4d8(param_4,puStack_88,(long)puStack_80 - (long)puStack_88);
      ppuStack_b8 = (undefined8 **)((ulong)ppuStack_b8 & 0xffffffff00000000);
      uStack_a8 = (long)puStack_80 - (long)puStack_88;
    }
    else {
      FUN_10a156924(&ppuStack_b8,param_2,param_3);
      FUN_10a0f20c0(&uStack_d0,&ppuStack_b8);
      if (*(char *)((long)param_4 + 0x17) < '\0') {
        __ZdlPv(*param_4);
      }
      param_4[1] = (ulong)plStack_c8;
      *param_4 = uStack_d0;
      param_4[2] = uStack_c0;
      FUN_10a0f1ea0(&ppuStack_b8);
      uStack_a8 = (long)puStack_80 - (long)puStack_88;
      ppuStack_b8 = (undefined8 **)CONCAT44(ppuStack_b8._4_4_,1);
    }
    puStack_b0 = puStack_88;
    (**(code **)(*param_2 + 0xa0))(&uStack_d0,param_2,&ppuStack_b8);
    *param_1 = uStack_d0;
    param_1[1] = (ulong)plStack_c8;
    if (plStack_c8 == (long *)0x0) {
      param_1[2] = uStack_d0;
      param_1[3] = 0;
    }
    else {
      plVar2 = plStack_c8 + 1;
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      param_1[2] = uStack_d0;
      param_1[3] = (ulong)plStack_c8;
      if (plStack_c8 != (long *)0x0) {
        plVar2 = plStack_c8 + 1;
        do {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = *plVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (plStack_c8 != (long *)0x0) {
          plVar2 = plStack_c8 + 1;
          do {
            lVar8 = *plVar2;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *plVar2 = lVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_c8);
          }
        }
      }
    }
    if (puStack_88 != (ulong *)0x0) {
      puStack_80 = puStack_88;
      __ZdlPv();
    }
  }
  else if (*(int *)((long)param_2 + 0x734) == 1) {
    FUN_10a15662c(auStack_70,param_2,param_3);
    FUN_10a0f20c0(&ppuStack_b8,auStack_70);
    if (*(char *)((long)param_4 + 0x17) < '\0') {
      __ZdlPv(*param_4);
    }
    param_4[1] = (ulong)puStack_b0;
    *param_4 = (ulong)ppuStack_b8;
    param_4[2] = uStack_a8;
    ppuStack_b8 = (undefined8 **)((ulong)ppuStack_b8 & 0xffffffff00000000);
    uVar7 = uStack_a8 >> 0x38;
    bVar5 = -1 < (long)uStack_a8;
    uStack_a8 = param_4[1];
    puStack_b0 = (ulong *)*param_4;
    if (bVar5) {
      uStack_a8 = uVar7;
      puStack_b0 = param_4;
    }
    (**(code **)(*param_2 + 0xa0))(&puStack_88,param_2,&ppuStack_b8);
    puVar4 = puStack_80;
    *param_1 = (ulong)puStack_88;
    param_1[1] = (ulong)puStack_80;
    if (puStack_80 == (ulong *)0x0) {
      param_1[2] = (ulong)puStack_88;
      param_1[3] = 0;
    }
    else {
      puVar1 = puStack_80 + 1;
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = *puVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      param_1[2] = (ulong)puStack_88;
      param_1[3] = (ulong)puStack_80;
      if (puStack_80 != (ulong *)0x0) {
        puVar1 = puStack_80 + 1;
        do {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = *puVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puStack_80 != (ulong *)0x0) {
          puVar1 = puStack_80 + 1;
          do {
            uVar7 = *puVar1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar7 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar7 == 0) {
            (**(code **)(*puStack_80 + 0x10))(puStack_80);
            __ZNSt3__119__shared_weak_count14__release_weakEv(puVar4);
          }
        }
      }
    }
  }
  else {
    FUN_10a15662c(auStack_70,param_2,param_3);
    FUN_10a0f20c0(&ppuStack_b8,auStack_70);
    if (*(char *)((long)param_4 + 0x17) < '\0') {
      __ZdlPv(*param_4);
    }
    param_4[1] = (ulong)puStack_b0;
    *param_4 = (ulong)ppuStack_b8;
    param_4[2] = uStack_a8;
    FUN_10a156c38(param_1,param_2,param_3,0);
    FUN_10a156c38(param_1 + 2,param_2,param_3,1);
  }
  FUN_10a0f1ea0(auStack_70);
  return;
}



/* Entry: 10a15662c; end: 10a156923;  */

/* WARNING: Removing unreachable block (ram,0x00010a156878) */

void FUN_10a15662c(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 *****pppppuVar6;
  undefined8 *****pppppuVar7;
  undefined8 ****ppppuVar8;
  ulong uVar9;
  undefined *puVar10;
  int iVar11;
  long lVar12;
  undefined8 ****ppppuStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  char cStack_c9;
  undefined8 ***pppuStack_c0;
  undefined8 ***pppuStack_b8;
  undefined8 ***pppuStack_b0;
  undefined8 uStack_a8;
  char cStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  byte bStack_71;
  undefined8 **ppuStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  
  uVar5 = (ulong)*(uint *)(param_2 + 0x734);
  uVar9 = (ulong)*(uint *)(param_2 + 0x738);
  FUN_10a158d2c(uVar5);
  if (0x7ffffffffffffff7 < uVar9) {
    func_0x000109ffde50();
    goto LAB_10a1568a0;
  }
  if (uVar9 < 0x17) {
    uStack_e8 = CONCAT17((char)uVar9,(undefined7)uStack_e8);
    pppppuVar6 = &ppppuStack_f8;
    if (uVar9 != 0) goto LAB_10a1566b4;
  }
  else {
    pppppuVar7 = (undefined8 *****)0x19;
    if ((uVar9 | 7) != 0x17) {
      pppppuVar7 = (undefined8 *****)((uVar9 | 7) + 1);
    }
    pppppuVar6 = pppppuVar7;
    __Znwm();
    uStack_e8 = (ulong)pppppuVar7 | 0x8000000000000000;
    ppppuStack_f8 = pppppuVar6;
    uStack_f0 = uVar9;
LAB_10a1566b4:
    _memmove(pppppuVar6,uVar5,uVar9);
  }
  *(undefined1 *)((long)pppppuVar6 + uVar9) = 0;
  uVar5 = param_3[1];
  puVar1 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar5 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar1 = param_3;
  }
  pppppuVar7 = &ppppuStack_f8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppppuVar7,puVar1,uVar5);
  pppuStack_b8 = pppppuVar7[1];
  pppuStack_c0 = *pppppuVar7;
  pppuStack_b0 = pppppuVar7[2];
  pppppuVar7[1] = (undefined8 ****)0x0;
  pppppuVar7[2] = (undefined8 ****)0x0;
  *pppppuVar7 = (undefined8 ****)0x0;
  iVar11 = *(int *)(param_2 + 0x734);
  if (iVar11 == 1) {
    puVar10 = &UNK_10f63f033;
    lVar12 = 5;
  }
  else if (iVar11 == 3) {
    puVar10 = &UNK_10f63f03e;
    lVar12 = 0xf;
  }
  else {
    if (iVar11 != 2) {
LAB_10a1568a0:
      func_0x000105688514(&UNK_10f63f04e);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1568b0);
      (*pcVar4)();
    }
    puVar10 = &UNK_10f63f039;
    lVar12 = 4;
  }
  bStack_71 = (byte)lVar12;
  _memcpy(&uStack_88,puVar10,lVar12);
  *(undefined1 *)((long)&uStack_88 + lVar12) = 0;
  puVar1 = uStack_88;
  if (-1 < (char)bStack_71) {
    uStack_80 = (ulong)bStack_71;
    puVar1 = &uStack_88;
  }
  ppppuVar8 = &pppuStack_c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppuVar8,puVar1,uStack_80);
  ppuStack_68 = ppppuVar8[1];
  ppuStack_70 = *ppppuVar8;
  ppuStack_60 = ppppuVar8[2];
  ppppuVar8[1] = (undefined8 ***)0x0;
  ppppuVar8[2] = (undefined8 ***)0x0;
  *ppppuVar8 = (undefined8 ***)0x0;
  if ((char)bStack_71 < '\0') {
    __ZdlPv(uStack_88);
  }
  if ((long)pppuStack_b0 < 0) {
    __ZdlPv(pppuStack_c0);
  }
  if ((long)uStack_e8 < 0) {
    __ZdlPv(ppppuStack_f8);
  }
  iVar11 = *(int *)(param_2 + 0x734);
  if (iVar11 == 2) {
    FUN_10a158dac(&ppppuStack_f8,param_3,&UNK_10f63efa7);
    FUN_10a0f1e30(&pppuStack_c0,&ppppuStack_f8,0);
    if (cStack_c9 < '\0') {
      __ZdlPv(uStack_e0);
    }
    if ((long)uStack_e8 < 0) {
      __ZdlPv(ppppuStack_f8);
    }
    pppuVar3 = pppuStack_b8;
    pppuVar2 = pppuStack_c0;
    if (cStack_90 == '\x01') {
      pppuStack_c0 = (undefined8 ***)0x0;
      pppuStack_b8 = (undefined8 ***)0x0;
      *param_1 = pppuVar2;
      param_1[2] = pppuStack_b0;
      param_1[1] = pppuVar3;
      param_1[3] = uStack_a8;
      pppuStack_b0 = (undefined8 ***)0x0;
      uStack_a8 = 0;
      *(undefined1 *)(param_1 + 4) = 0;
      *(undefined1 *)(param_1 + 5) = 0;
      FUN_10a0f1ea0(&pppuStack_c0);
      return;
    }
    iVar11 = *(int *)(param_2 + 0x734);
  }
  FUN_10a158fbc(param_1,&ppuStack_70,iVar11 != 3);
  return;
}



/* Entry: 10a156924; end: 10a156c37;  */

/* WARNING: Removing unreachable block (ram,0x00010a156878) */

void FUN_10a156924(long *param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 ****ppppuVar2;
  undefined8 ****ppppuVar3;
  code *pcVar4;
  undefined8 ******ppppppuVar5;
  undefined8 ******ppppppuVar6;
  undefined8 *****pppppuVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong uVar11;
  undefined *puVar12;
  int iVar13;
  long lVar14;
  undefined8 uStack_100;
  undefined8 *****pppppuStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 ****ppppuStack_c0;
  undefined8 ****ppppuStack_b8;
  undefined8 ****ppppuStack_b0;
  undefined8 uStack_a8;
  long lStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 ***pppuStack_70;
  undefined8 ***pppuStack_68;
  undefined8 ***pppuStack_60;
  
  if (*(int *)(param_2 + 0x734) == 2) {
    FUN_10a158dac(&uStack_d0,param_3,&UNK_10f63f0a7);
    FUN_10a0f1e30(&lStack_90,&uStack_d0,0);
    if (uStack_a8._7_1_ < '\0') {
      __ZdlPv(ppppuStack_b8);
    }
    if ((long)ppppuStack_c0 < 0) {
      __ZdlPv(uStack_d0);
    }
    puVar1 = uStack_88;
    lVar14 = lStack_90;
    if ((char)pppuStack_60 == '\x01') {
      lStack_90 = 0;
      uStack_88 = (undefined8 *)0x0;
      *param_1 = lVar14;
      param_1[2] = uStack_80;
      param_1[1] = (long)puVar1;
      param_1[3] = uStack_78;
      uStack_80 = 0;
      uStack_78 = 0;
      *(undefined1 *)(param_1 + 4) = 0;
      *(undefined1 *)(param_1 + 5) = 0;
      FUN_10a0f1ea0(&lStack_90);
      return;
    }
    uVar8 = (ulong)*(uint *)(param_2 + 0x734);
    uVar11 = (ulong)*(uint *)(param_2 + 0x738);
    FUN_10a158d2c(uVar8);
    if (0x7ffffffffffffff7 < uVar11) {
      func_0x000109ffde50();
      goto LAB_10a156bb8;
    }
    if (uVar11 < 0x17) {
      uStack_d8 = CONCAT17((char)uVar11,(undefined7)uStack_d8);
      puVar9 = &uStack_e8;
      if (uVar11 != 0) goto LAB_10a156a64;
    }
    else {
      puVar1 = (undefined8 *)0x19;
      if ((uVar11 | 7) != 0x17) {
        puVar1 = (undefined8 *)((uVar11 | 7) + 1);
      }
      puVar9 = puVar1;
      __Znwm();
      uStack_d8 = (ulong)puVar1 | 0x8000000000000000;
      uStack_e8 = puVar9;
      uStack_e0 = uVar11;
LAB_10a156a64:
      _memmove(puVar9,uVar8,uVar11);
    }
    *(undefined1 *)((long)puVar9 + uVar11) = 0;
    uVar8 = param_3[1];
    puVar1 = (undefined8 *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar8 = (ulong)*(byte *)((long)param_3 + 0x17);
      puVar1 = param_3;
    }
    plVar10 = &uStack_e8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (plVar10,puVar1,uVar8);
    lStack_c8 = plVar10[1];
    uStack_d0 = *plVar10;
    ppppuStack_c0 = (undefined8 ****)plVar10[2];
    plVar10[1] = 0;
    plVar10[2] = 0;
    *plVar10 = 0;
    iVar13 = *(int *)(param_2 + 0x734);
    if (iVar13 == 1) {
      puVar12 = &UNK_10f63f033;
      lVar14 = 5;
    }
    else if (iVar13 == 3) {
      puVar12 = &UNK_10f63f03e;
      lVar14 = 0xf;
    }
    else {
      if (iVar13 != 2) {
LAB_10a156bb8:
        func_0x000105688514(&UNK_10f63f04e);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a156bc8);
        (*pcVar4)();
      }
      puVar12 = &UNK_10f63f039;
      lVar14 = 4;
    }
    uStack_f0._7_1_ = (byte)lVar14;
    _memcpy(&uStack_100,puVar12,lVar14);
    *(undefined1 *)((long)&uStack_100 + lVar14) = 0;
    puVar1 = (undefined8 *)uStack_100;
    if (-1 < (char)uStack_f0._7_1_) {
      pppppuStack_f8 = (undefined8 ******)(ulong)uStack_f0._7_1_;
      puVar1 = &uStack_100;
    }
    plVar10 = &uStack_d0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (plVar10,puVar1,pppppuStack_f8);
    uStack_88 = (undefined8 *)plVar10[1];
    lStack_90 = *plVar10;
    uStack_80 = plVar10[2];
    plVar10[1] = 0;
    plVar10[2] = 0;
    *plVar10 = 0;
    if ((char)uStack_f0._7_1_ < '\0') {
      __ZdlPv(uStack_100);
    }
    if ((long)ppppuStack_c0 < 0) {
      __ZdlPv(uStack_d0);
    }
    if ((long)uStack_d8 < 0) {
      __ZdlPv(uStack_e8);
    }
    FUN_10a158fbc(param_1,&lStack_90,1);
    if ((long)uStack_80 < 0) {
      __ZdlPv(lStack_90);
    }
    return;
  }
  uVar8 = (ulong)*(uint *)(param_2 + 0x734);
  uVar11 = (ulong)*(uint *)(param_2 + 0x738);
  FUN_10a158d2c(uVar8);
  if (0x7ffffffffffffff7 < uVar11) {
    func_0x000109ffde50();
    goto LAB_10a1568a0;
  }
  if (uVar11 < 0x17) {
    uStack_e8 = (undefined8 *)CONCAT17((char)uVar11,(undefined7)uStack_e8);
    ppppppuVar5 = &pppppuStack_f8;
    if (uVar11 != 0) goto LAB_10a1566b4;
  }
  else {
    ppppppuVar6 = (undefined8 ******)0x19;
    if ((uVar11 | 7) != 0x17) {
      ppppppuVar6 = (undefined8 ******)((uVar11 | 7) + 1);
    }
    ppppppuVar5 = ppppppuVar6;
    __Znwm();
    uStack_e8 = (undefined8 *)((ulong)ppppppuVar6 | 0x8000000000000000);
    pppppuStack_f8 = ppppppuVar5;
    uStack_f0 = uVar11;
LAB_10a1566b4:
    _memmove(ppppppuVar5,uVar8,uVar11);
  }
  *(undefined1 *)((long)ppppppuVar5 + uVar11) = 0;
  uVar8 = param_3[1];
  puVar1 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar8 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar1 = param_3;
  }
  ppppppuVar6 = &pppppuStack_f8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppppuVar6,puVar1,uVar8);
  ppppuStack_b8 = ppppppuVar6[1];
  ppppuStack_c0 = *ppppppuVar6;
  ppppuStack_b0 = ppppppuVar6[2];
  ppppppuVar6[1] = (undefined8 *****)0x0;
  ppppppuVar6[2] = (undefined8 *****)0x0;
  *ppppppuVar6 = (undefined8 *****)0x0;
  iVar13 = *(int *)(param_2 + 0x734);
  if (iVar13 == 1) {
    puVar12 = &UNK_10f63f033;
    lVar14 = 5;
  }
  else if (iVar13 == 3) {
    puVar12 = &UNK_10f63f03e;
    lVar14 = 0xf;
  }
  else {
    if (iVar13 != 2) {
LAB_10a1568a0:
      func_0x000105688514(&UNK_10f63f04e);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1568b0);
      (*pcVar4)();
    }
    puVar12 = &UNK_10f63f039;
    lVar14 = 4;
  }
  uStack_78._7_1_ = (byte)lVar14;
  _memcpy(&uStack_88,puVar12,lVar14);
  *(undefined1 *)((long)&uStack_88 + lVar14) = 0;
  puVar1 = uStack_88;
  if (-1 < (char)uStack_78._7_1_) {
    uStack_80 = (ulong)uStack_78._7_1_;
    puVar1 = &uStack_88;
  }
  pppppuVar7 = &ppppuStack_c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppppuVar7,puVar1,uStack_80);
  pppuStack_68 = pppppuVar7[1];
  pppuStack_70 = *pppppuVar7;
  pppuStack_60 = pppppuVar7[2];
  pppppuVar7[1] = (undefined8 ****)0x0;
  pppppuVar7[2] = (undefined8 ****)0x0;
  *pppppuVar7 = (undefined8 ****)0x0;
  if ((char)uStack_78._7_1_ < '\0') {
    __ZdlPv(uStack_88);
  }
  if ((long)ppppuStack_b0 < 0) {
    __ZdlPv(ppppuStack_c0);
  }
  if ((long)uStack_e8 < 0) {
    __ZdlPv(pppppuStack_f8);
  }
  iVar13 = *(int *)(param_2 + 0x734);
  if (iVar13 == 2) {
    FUN_10a158dac(&pppppuStack_f8,param_3,&UNK_10f63efa7);
    FUN_10a0f1e30(&ppppuStack_c0,&pppppuStack_f8,0);
    if (uStack_d0._7_1_ < '\0') {
      __ZdlPv(uStack_e0);
    }
    if ((long)uStack_e8 < 0) {
      __ZdlPv(pppppuStack_f8);
    }
    ppppuVar3 = ppppuStack_b8;
    ppppuVar2 = ppppuStack_c0;
    if ((char)lStack_90 == '\x01') {
      ppppuStack_c0 = (undefined8 ****)0x0;
      ppppuStack_b8 = (undefined8 ****)0x0;
      *param_1 = (long)ppppuVar2;
      param_1[2] = (long)ppppuStack_b0;
      param_1[1] = (long)ppppuVar3;
      param_1[3] = uStack_a8;
      ppppuStack_b0 = (undefined8 ****)0x0;
      uStack_a8 = 0;
      *(undefined1 *)(param_1 + 4) = 0;
      *(undefined1 *)(param_1 + 5) = 0;
      FUN_10a0f1ea0(&ppppuStack_c0);
      return;
    }
    iVar13 = *(int *)(param_2 + 0x734);
  }
  FUN_10a158fbc(param_1,&pppuStack_70,iVar13 != 3);
  return;
}



/* Entry: 10a156c38; end: 10a156e3b;  */

/* WARNING: Removing unreachable block (ram,0x00010a156d90) */
/* WARNING: Removing unreachable block (ram,0x00010a156da0) */

void FUN_10a156c38(undefined8 param_1,long *param_2,undefined8 *param_3,int param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined4 auStack_c8 [2];
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_80;
  long lStack_78;
  undefined1 uStack_70;
  char cStack_69;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  puVar1 = &UNK_10f63f0b9;
  if (param_4 != 0) {
    puVar1 = &UNK_10f63f0c3;
  }
  func_0x000107c2b054(&ppuStack_48,puVar1);
  cStack_69 = '\x10';
  lStack_78 = 0x2f6e616b6c75562f;
  lStack_80 = 0x737265646168732f;
  uStack_70 = 0;
  uVar2 = param_3[1];
  puVar3 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar3 = param_3;
  }
  plVar4 = &lStack_80;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(plVar4,puVar3,uVar2);
  lStack_a8 = plVar4[1];
  lStack_b0 = *plVar4;
  lStack_a0 = plVar4[2];
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = 0;
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    ppuStack_48 = &ppuStack_48;
  }
  plVar4 = &lStack_b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (plVar4,ppuStack_48,uStack_40);
  uStack_58 = plVar4[1];
  uStack_60 = *plVar4;
  uStack_50 = plVar4[2];
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = 0;
  if (lStack_a0 < 0) {
    __ZdlPv(lStack_b0);
  }
  if (cStack_69 < '\0') {
    __ZdlPv(lStack_80);
  }
  FUN_10a158fbc(&lStack_b0,&uStack_60,0);
  FUN_10a0f1f4c(&lStack_80,&lStack_b0);
  auStack_c8[0] = 1;
  lStack_b8 = lStack_78 - lStack_80;
  lStack_c0 = lStack_80;
  (**(code **)(*param_2 + 0xa0))(param_1,param_2,auStack_c8);
  if (lStack_80 != 0) {
    lStack_78 = lStack_80;
    __ZdlPv();
  }
  FUN_10a0f1ea0(&lStack_b0);
  return;
}



/* Entry: 10a156e3c; end: 10a156edb;  */

void FUN_10a156e3c(undefined8 param_1)

{
  undefined8 ***pppuVar1;
  undefined8 **ppuStack_68;
  ulong uStack_60;
  byte bStack_51;
  undefined1 auStack_50 [48];
  
  FUN_10a156924(auStack_50);
  FUN_10a0f20c0(&ppuStack_68,auStack_50);
  pppuVar1 = (undefined8 ***)ppuStack_68;
  if (-1 < (char)bStack_51) {
    uStack_60 = (ulong)bStack_51;
    pppuVar1 = &ppuStack_68;
  }
  func_0x000109237af0(param_1,pppuVar1,uStack_60);
  if ((char)bStack_51 < '\0') {
    __ZdlPv(ppuStack_68);
  }
  FUN_10a0f1ea0(auStack_50);
  return;
}



/* Entry: 10a156edc; end: 10a156f9f;  */

void FUN_10a156edc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  ppuVar1 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  puVar2 = *ppuVar1;
  if (((puVar2 != (undefined *)0x0) && (puVar2[0xc0] == '\x01')) && (*(long *)(puVar2 + 0x80) != 0))
  {
    FUN_10a08dbac(puVar2 + 0x18);
  }
  func_0x0001092959a0(param_1,param_2,0,param_3,0,param_4,param_5,param_8,param_6,param_7,
                      0x500000005,0,0,0,0);
  return;
}



/* Entry: 10a156fa0; end: 10a157093;  */

undefined4 * FUN_10a156fa0(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  FUN_10a157094(param_1 + 2,*(long *)(param_2 + 2),*(long *)(param_2 + 4),
                *(long *)(param_2 + 4) - *(long *)(param_2 + 2) >> 4);
  func_0x00010928bbd4(param_1 + 8,param_2 + 8);
  *(undefined1 *)(param_1 + 0x4a) = *(undefined1 *)(param_2 + 0x4a);
  *(undefined8 *)(param_1 + 0x4e) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  FUN_10a157168(param_1 + 0x4c,*(long *)(param_2 + 0x4c),*(long *)(param_2 + 0x4e),
                *(long *)(param_2 + 0x4e) - *(long *)(param_2 + 0x4c) >> 4);
  *(undefined8 *)(param_1 + 0x52) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  FUN_10a157284(param_1 + 0x52,*(long *)(param_2 + 0x52),*(long *)(param_2 + 0x54),
                *(long *)(param_2 + 0x54) - *(long *)(param_2 + 0x52) >> 4);
  uVar2 = *(undefined8 *)(param_2 + 0x5a);
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  uVar4 = *(undefined8 *)(param_2 + 0x5e);
  uVar3 = *(undefined8 *)(param_2 + 0x5c);
  uVar6 = *(undefined8 *)(param_2 + 0x62);
  uVar5 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 100) = *(undefined8 *)(param_2 + 100);
  *(undefined8 *)(param_1 + 0x5e) = uVar4;
  *(undefined8 *)(param_1 + 0x5c) = uVar3;
  *(undefined8 *)(param_1 + 0x62) = uVar6;
  *(undefined8 *)(param_1 + 0x60) = uVar5;
  *(undefined8 *)(param_1 + 0x5a) = uVar2;
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  return param_1;
}



/* Entry: 10a157094; end: 10a15712f;  */

void FUN_10a157094(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (param_4 != 0) {
    FUN_10a157130(param_1,param_4);
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



/* Entry: 10a157130; end: 10a157167;  */

void FUN_10a157130(long *param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    plVar3 = param_1;
    FUN_10a0e900c();
    *param_1 = (long)plVar3;
    param_1[1] = (long)plVar3;
    param_1[2] = (long)(plVar3 + (long)param_2 * 2);
    return;
  }
  FUN_10a0e8ff8();
  if (param_4 != 0) {
    FUN_10a157204();
    puVar4 = (undefined8 *)param_1[1];
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      lVar5 = param_2[1];
      uVar6 = *param_2;
      puVar4[1] = param_2[1];
      *puVar4 = uVar6;
      if (lVar5 != 0) {
        plVar3 = (long *)(lVar5 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = *plVar3 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      puVar4 = puVar4 + 2;
    }
    param_1[1] = (long)puVar4;
  }
  return;
}



/* Entry: 10a157168; end: 10a157203;  */

void FUN_10a157168(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (param_4 != 0) {
    FUN_10a157204(param_1,param_4);
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



/* Entry: 10a157204; end: 10a15723b;  */

void FUN_10a157204(long *param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    plVar3 = param_1;
    FUN_10a157250();
    *param_1 = (long)plVar3;
    param_1[1] = (long)plVar3;
    param_1[2] = (long)(plVar3 + (long)param_2 * 2);
    return;
  }
  FUN_10a15723c();
  puVar4 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)param_2 >> 0x3c == 0) {
    __Znwm((long)param_2 << 4);
    return;
  }
  func_0x000109ffded8();
  if (param_4 != 0) {
    FUN_10a157320();
    puVar5 = *(undefined8 **)(puVar4 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      lVar6 = param_2[1];
      uVar7 = *param_2;
      puVar5[1] = param_2[1];
      *puVar5 = uVar7;
      if (lVar6 != 0) {
        plVar3 = (long *)(lVar6 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = *plVar3 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      puVar5 = puVar5 + 2;
    }
    *(undefined8 **)(puVar4 + 8) = puVar5;
  }
  return;
}



/* Entry: 10a15723c; end: 10a15724f;  */

void FUN_10a15723c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar4 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)param_2 >> 0x3c == 0) {
    __Znwm((long)param_2 << 4);
    return;
  }
  func_0x000109ffded8();
  if (param_4 != 0) {
    FUN_10a157320();
    puVar5 = *(undefined8 **)(puVar4 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      lVar6 = param_2[1];
      uVar7 = *param_2;
      puVar5[1] = param_2[1];
      *puVar5 = uVar7;
      if (lVar6 != 0) {
        plVar1 = (long *)(lVar6 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar5 = puVar5 + 2;
    }
    *(undefined8 **)(puVar4 + 8) = puVar5;
  }
  return;
}



/* Entry: 10a157250; end: 10a157283;  */

void FUN_10a157250(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    __Znwm((long)param_2 << 4);
    return;
  }
  func_0x000109ffded8();
  if (param_4 != 0) {
    FUN_10a157320();
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



/* Entry: 10a157284; end: 10a15731f;  */

void FUN_10a157284(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (param_4 != 0) {
    FUN_10a157320(param_1,param_4);
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



/* Entry: 10a157320; end: 10a157357;  */

void FUN_10a157320(long *param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *extraout_x8;
  long lVar7;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined2 uStack_6a;
  
  if (param_2 >> 0x3c != 0) {
    FUN_10a0eaa30();
    lVar7 = param_1[2];
    plVar5 = param_1;
    FUN_10a08fd8c();
    *(int *)(lVar7 + 0x48) = (int)plVar5;
    lVar6 = param_1[3];
    lVar7 = lVar6;
    FUN_10a08fd8c();
    uVar3 = (uint)lVar7;
    if (uVar3 == 0) {
      *extraout_x8 = 0;
    }
    else {
      iVar1 = *(int *)(lVar6 + 0x734);
      FUN_10a08fd8c();
      iVar2 = *(int *)(lVar6 + 0x734);
      uVar4 = uVar3;
      FUN_10a08fd8c();
      uStack_70 = 0;
      uStack_6c = 0;
      uStack_6b = 0;
      uStack_88 = 0;
      uStack_84 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      uStack_78 = 0;
      uStack_74 = 0;
      uStack_80 = 0;
      uStack_7c = 0;
      uStack_a8 = 0;
      uStack_a4 = 0;
      uStack_b0 = 0;
      uStack_ac = 0;
      uStack_98 = 0;
      uStack_94 = 0;
      uStack_a0 = 0;
      uStack_9c = 0;
      uStack_c8 = 0;
      uStack_c4 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      uStack_b8 = 0;
      uStack_b4 = 0;
      uStack_c0 = 0;
      uStack_bc = 0;
      uStack_e8 = 0;
      uStack_e4 = 0;
      uStack_f0 = 0;
      uStack_ec = 0;
      uStack_d8 = 0;
      uStack_d4 = 0;
      uStack_e0 = 0;
      uStack_dc = 0;
      uStack_108 = 0;
      uStack_104 = 0;
      uStack_110 = 0;
      uStack_10c = 0;
      uStack_f8 = 0;
      uStack_f4 = 0;
      uStack_100 = 0;
      uStack_fc = 0;
      uStack_128 = 0;
      uStack_124 = 0;
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_118 = 0;
      uStack_114 = 0;
      uStack_120 = 0;
      uStack_11c = 0;
      uStack_148 = 0;
      uStack_144 = 0;
      uStack_150 = 0;
      uStack_14c = 0;
      uStack_138 = 0;
      uStack_134 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_168 = 0;
      uStack_164 = 0;
      uStack_170 = 0;
      uStack_16c = 0;
      uStack_158 = 0;
      uStack_154 = 0;
      uStack_160 = 0;
      uStack_15c = 0;
      uStack_6a = 0x101;
      if (((iVar1 == 7 || iVar1 == 2) && ((uVar3 >> 5 & 1) != 0)) ||
         ((iVar2 == 8 || iVar2 == 3 && ((uVar4 >> 7 & 1) != 0)))) {
        uStack_6b = 0;
        uStack_6a = 0x101;
        uStack_170 = 0x1cc;
        uStack_164 = 0x1010101;
        uStack_160 = 0x1010101;
        uStack_16c = 0x1010101;
        uStack_168 = 0x1010101;
        uStack_154 = 0x1010101;
        uStack_150 = 0x1010101;
        uStack_15c = 0x1010101;
        uStack_158 = 0x1010101;
        uStack_144 = 0x1010101;
        uStack_140 = 0x1010101;
        uStack_14c = 0x1010101;
        uStack_148 = 0x1010101;
        uStack_134 = 0x1010101;
        uStack_130 = 0x1010101;
        uStack_13c = 0x1010101;
        uStack_138 = 0x1010101;
        uStack_124 = 0x1010101;
        uStack_120 = 0x1010101;
        uStack_12c = 0x1010101;
        uStack_128 = 0x1010101;
        uStack_114 = 0x1010101;
        uStack_110 = 0x1010101;
        uStack_11c = 0x1010101;
        uStack_118 = 0x1010101;
        uStack_104 = 0x1010101;
        uStack_100 = 0x1010101;
        uStack_10c = 0x1010101;
        uStack_108 = 0x1010101;
        uStack_f4 = 0x1010101;
        uStack_f0 = 0x1010101;
        uStack_fc = 0x1010101;
        uStack_f8 = 0x1010101;
        uStack_e4 = 0x1010101;
        uStack_e0 = 0x1010101;
        uStack_ec = 0x1010101;
        uStack_e8 = 0x1010101;
        uStack_d4 = 0x1010101;
        uStack_d0 = 0x1010101;
        uStack_dc = 0x1010101;
        uStack_d8 = 0x1010101;
        uStack_c4 = 0x1010101;
        uStack_c0 = 0x1010101;
        uStack_cc = 0x1010101;
        uStack_c8 = 0x1010101;
        uStack_b4 = 0x1010101;
        uStack_b0 = 0x1010101;
        uStack_bc = 0x1010101;
        uStack_b8 = 0x1010101;
        uStack_a4 = 0x1010101;
        uStack_a0 = 0x1010101;
        uStack_ac = 0x1010101;
        uStack_a8 = 0x1010101;
        uStack_94 = 0x1010101;
        uStack_90 = 0x1010101;
        uStack_9c = 0x1010101;
        uStack_98 = 0x1010101;
        uStack_84 = 0x1010101;
        uStack_80 = 0x1010101;
        uStack_8c = 0x1010101;
        uStack_88 = 0x1010101;
        uStack_74 = 0x1010101;
        uStack_70 = 0x1010101;
        uStack_7c = 0x1010101;
        uStack_78 = 0x1010101;
        uStack_6c = 1;
      }
      else {
        lVar7 = 1;
        FUN_10a303694(1);
        FUN_10a09123c(&uStack_170,lVar7 + 500,lVar7 + 0x240);
      }
      FUN_109f6bf2c(extraout_x8,&uStack_170);
    }
    return;
  }
  plVar5 = param_1;
  FUN_10a0eaa44();
  *param_1 = (long)plVar5;
  param_1[1] = (long)plVar5;
  param_1[2] = (long)(plVar5 + param_2 * 2);
  return;
}



/* Entry: 10a157358; end: 10a157393;  */

void FUN_10a157358(undefined8 *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined2 uStack_4a;
  
  lVar6 = *(long *)(param_2 + 0x10);
  lVar5 = param_2;
  FUN_10a08fd8c();
  *(int *)(lVar6 + 0x48) = (int)lVar5;
  lVar6 = *(long *)(param_2 + 0x18);
  lVar5 = lVar6;
  FUN_10a08fd8c();
  uVar3 = (uint)lVar5;
  if (uVar3 == 0) {
    *param_1 = 0;
  }
  else {
    iVar1 = *(int *)(lVar6 + 0x734);
    FUN_10a08fd8c();
    iVar2 = *(int *)(lVar6 + 0x734);
    uVar4 = uVar3;
    FUN_10a08fd8c();
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_4b = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_88 = 0;
    uStack_84 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_a8 = 0;
    uStack_a4 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_c8 = 0;
    uStack_c4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_b8 = 0;
    uStack_b4 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    uStack_e8 = 0;
    uStack_e4 = 0;
    uStack_f0 = 0;
    uStack_ec = 0;
    uStack_d8 = 0;
    uStack_d4 = 0;
    uStack_e0 = 0;
    uStack_dc = 0;
    uStack_108 = 0;
    uStack_104 = 0;
    uStack_110 = 0;
    uStack_10c = 0;
    uStack_f8 = 0;
    uStack_f4 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    uStack_128 = 0;
    uStack_124 = 0;
    uStack_130 = 0;
    uStack_12c = 0;
    uStack_118 = 0;
    uStack_114 = 0;
    uStack_120 = 0;
    uStack_11c = 0;
    uStack_148 = 0;
    uStack_144 = 0;
    uStack_150 = 0;
    uStack_14c = 0;
    uStack_138 = 0;
    uStack_134 = 0;
    uStack_140 = 0;
    uStack_13c = 0;
    uStack_4a = 0x101;
    if (((iVar1 == 7 || iVar1 == 2) && ((uVar3 >> 5 & 1) != 0)) ||
       ((iVar2 == 8 || iVar2 == 3 && ((uVar4 >> 7 & 1) != 0)))) {
      uStack_4b = 0;
      uStack_4a = 0x101;
      uStack_150 = 0x1cc;
      uStack_144 = 0x1010101;
      uStack_140 = 0x1010101;
      uStack_14c = 0x1010101;
      uStack_148 = 0x1010101;
      uStack_134 = 0x1010101;
      uStack_130 = 0x1010101;
      uStack_13c = 0x1010101;
      uStack_138 = 0x1010101;
      uStack_124 = 0x1010101;
      uStack_120 = 0x1010101;
      uStack_12c = 0x1010101;
      uStack_128 = 0x1010101;
      uStack_114 = 0x1010101;
      uStack_110 = 0x1010101;
      uStack_11c = 0x1010101;
      uStack_118 = 0x1010101;
      uStack_104 = 0x1010101;
      uStack_100 = 0x1010101;
      uStack_10c = 0x1010101;
      uStack_108 = 0x1010101;
      uStack_f4 = 0x1010101;
      uStack_f0 = 0x1010101;
      uStack_fc = 0x1010101;
      uStack_f8 = 0x1010101;
      uStack_e4 = 0x1010101;
      uStack_e0 = 0x1010101;
      uStack_ec = 0x1010101;
      uStack_e8 = 0x1010101;
      uStack_d4 = 0x1010101;
      uStack_d0 = 0x1010101;
      uStack_dc = 0x1010101;
      uStack_d8 = 0x1010101;
      uStack_c4 = 0x1010101;
      uStack_c0 = 0x1010101;
      uStack_cc = 0x1010101;
      uStack_c8 = 0x1010101;
      uStack_b4 = 0x1010101;
      uStack_b0 = 0x1010101;
      uStack_bc = 0x1010101;
      uStack_b8 = 0x1010101;
      uStack_a4 = 0x1010101;
      uStack_a0 = 0x1010101;
      uStack_ac = 0x1010101;
      uStack_a8 = 0x1010101;
      uStack_94 = 0x1010101;
      uStack_90 = 0x1010101;
      uStack_9c = 0x1010101;
      uStack_98 = 0x1010101;
      uStack_84 = 0x1010101;
      uStack_80 = 0x1010101;
      uStack_8c = 0x1010101;
      uStack_88 = 0x1010101;
      uStack_74 = 0x1010101;
      uStack_70 = 0x1010101;
      uStack_7c = 0x1010101;
      uStack_78 = 0x1010101;
      uStack_64 = 0x1010101;
      uStack_60 = 0x1010101;
      uStack_6c = 0x1010101;
      uStack_68 = 0x1010101;
      uStack_54 = 0x1010101;
      uStack_50 = 0x1010101;
      uStack_5c = 0x1010101;
      uStack_58 = 0x1010101;
      uStack_4c = 1;
    }
    else {
      lVar5 = 1;
      FUN_10a303694(1);
      FUN_10a09123c(&uStack_150,lVar5 + 500,lVar5 + 0x240);
    }
    FUN_109f6bf2c(param_1,&uStack_150);
  }
  return;
}



/* Entry: 10a157394; end: 10a1573af;  */

void FUN_10a157394(void)

{
  return;
}



/* Entry: 10a1573b0; end: 10a15744f;  */

void FUN_10a1573b0(undefined8 *param_1,long param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0x600000001;
  uStack_30 = 0x20;
  (**(code **)(**(long **)(param_2 + 0x10) + 0x70))(param_1,*(long **)(param_2 + 0x10),&uStack_30);
  (**(code **)(*(long *)*param_1 + 0x30))((long *)*param_1,2,0,0);
  _memcpy();
  (**(code **)(*(long *)*param_1 + 0x38))();
  return;
}



/* Entry: 10a157450; end: 10a15746b;  */

void FUN_10a157450(void)

{
  return;
}



/* Entry: 10a15746c; end: 10a1574cb;  */

void FUN_10a15746c(long param_1)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  undefined4 uStack_2c;
  undefined1 uStack_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  uStack_30 = 0;
  uStack_2c = 1;
  uStack_28 = 0;
  uStack_24 = 7;
  uStack_20 = 0x447a000000000000;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  (**(code **)(**(long **)(param_1 + 0x10) + 0x50))(*(long **)(param_1 + 0x10),&uStack_48);
  return;
}



/* Entry: 10a1574cc; end: 10a1574e7;  */

void FUN_10a1574cc(void)

{
  return;
}



/* Entry: 10a1574e8; end: 10a15754b;  */

void FUN_10a1574e8(long param_1)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  undefined4 uStack_2c;
  undefined1 uStack_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  uStack_30 = 0;
  uStack_2c = 1;
  uStack_28 = 0;
  uStack_24 = 7;
  uStack_20 = 0x447a000000000000;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_48 = 0x100000001;
  uStack_40 = 0;
  uStack_38 = 0;
  (**(code **)(**(long **)(param_1 + 0x10) + 0x50))(*(long **)(param_1 + 0x10),&uStack_48);
  return;
}



/* Entry: 10a15754c; end: 10a15758f;  */

void FUN_10a15754c(void)

{
  return;
}



/* Entry: 10a157590; end: 10a1576b3;  */

void FUN_10a157590(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  plVar3 = (long *)0x100;
  __Znwm();
  plVar6 = plVar3 + 1;
  *plVar6 = 0;
  plVar3[2] = 0;
  plVar4 = plVar3 + 3;
  *plVar3 = (long)&PTR_FUN_110ba8680;
  func_0x00010928e0c8(plVar4,param_2,&UNK_10e499558);
  *param_1 = plVar4;
  param_1[1] = plVar3;
  if (plVar3[4] == 0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar4 = plVar3 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar3[3] = (long)(plVar3 + 3);
    plVar3[4] = (long)plVar3;
  }
  else {
    if (*(long *)(plVar3[4] + 8) != -1) {
      return;
    }
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar4 = plVar3 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar3[3] = (long)(plVar3 + 3);
    plVar3[4] = (long)plVar3;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar5 = *plVar6;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 != 0) {
    return;
  }
  (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar3);
  return;
}



/* Entry: 10a1576b4; end: 10a1576c3;  */

void FUN_10a1576b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba8680;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a1576c4; end: 10a1576e3;  */

void FUN_10a1576c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba8680;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1576e4; end: 10a15776f;  */

void FUN_10a1576e4(long param_1)

{
  long lVar1;
  long *plVar2;
  
  func_0x00010928d280(param_1 + 0xd8);
  FUN_10a157774(param_1 + 0xc0);
  FUN_10a1577e0(*(undefined8 *)(param_1 + 0xa8));
  lVar1 = *(long *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x58);
  plVar2 = *(long **)(param_1 + 0x50);
  if (plVar2 == (long *)(param_1 + 0x38)) {
    lVar1 = 0x20;
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_10a157750;
    lVar1 = 0x28;
  }
  (**(code **)(*plVar2 + lVar1))();
LAB_10a157750:
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a157770; end: 10a157773;  */

void FUN_10a157770(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a157774; end: 10a1577df;  */

void FUN_10a157774(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1[2] != 0) {
    plVar1 = (long *)param_1[1];
    plVar2 = *(long **)(*param_1 + 8);
    lVar3 = *plVar1;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    param_1[2] = 0;
    while (plVar1 != param_1) {
      plVar2 = (long *)plVar1[1];
      func_0x00010a045fb4(plVar1 + 2);
      __ZdlPv(plVar1);
      plVar1 = plVar2;
    }
  }
  return;
}



/* Entry: 10a1577e0; end: 10a15781b;  */

void FUN_10a1577e0(long *param_1)

{
  long lVar1;
  
  while (param_1 != (long *)0x0) {
    lVar1 = *param_1;
    FUN_10a15781c(param_1 + 5);
    __ZdlPv(param_1);
    param_1 = (long *)lVar1;
  }
  return;
}



/* Entry: 10a15781c; end: 10a15792b;  */

long * FUN_10a15781c(long *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  puVar4 = (undefined8 *)param_1[1];
  puVar5 = puVar4;
  if ((undefined8 *)param_1[2] != puVar4) {
    uVar3 = param_1[4];
    plVar6 = puVar4 + (uVar3 >> 8);
    lVar2 = *plVar6 + (uVar3 & 0xff) * 0x10;
    lVar1 = puVar4[param_1[5] + uVar3 >> 8] + (param_1[5] + uVar3 & 0xff) * 0x10;
    puVar5 = (undefined8 *)param_1[2];
    if (lVar2 != lVar1) {
      do {
        func_0x00010a045fb4();
        lVar2 = lVar2 + 0x10;
        if (lVar2 - *plVar6 == 0x1000) {
          plVar6 = plVar6 + 1;
          lVar2 = *plVar6;
        }
      } while (lVar2 != lVar1);
      puVar4 = (undefined8 *)param_1[1];
      puVar5 = (undefined8 *)param_1[2];
    }
  }
  param_1[5] = 0;
  lVar2 = (long)puVar5 - (long)puVar4;
  while (uVar3 = lVar2 >> 3, 2 < uVar3) {
    __ZdlPv(*puVar4);
    puVar5 = (undefined8 *)param_1[2];
    puVar4 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar4;
    lVar2 = (long)puVar5 - (long)puVar4;
  }
  if (uVar3 == 1) {
    lVar2 = 0x80;
  }
  else {
    if (uVar3 != 2) goto LAB_10a15790c;
    lVar2 = 0x100;
  }
  param_1[4] = lVar2;
LAB_10a15790c:
  for (; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    __ZdlPv(*puVar4);
  }
  lVar2 = param_1[2];
  if (lVar2 != param_1[1]) {
    param_1[2] = lVar2 + ((param_1[1] - lVar2) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a15792c; end: 10a1579cf;  */

long * FUN_10a15792c(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 != param_1[1]) {
    param_1[2] = lVar1 + ((param_1[1] - lVar1) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a1579d0; end: 10a1579f7;  */

void FUN_10a1579d0(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  plVar3 = (long *)0x100;
  __Znwm();
  plVar7 = plVar3 + 1;
  *plVar7 = 0;
  plVar3[2] = 0;
  plVar4 = plVar3 + 3;
  *plVar3 = (long)&PTR_FUN_110ba86e8;
  func_0x000109296478(plVar4,uVar5,&UNK_10e499558);
  *param_1 = plVar4;
  param_1[1] = plVar3;
  if (plVar3[4] == 0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar4 = plVar3 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar3[3] = (long)(plVar3 + 3);
    plVar3[4] = (long)plVar3;
  }
  else {
    if (*(long *)(plVar3[4] + 8) != -1) {
      return;
    }
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar4 = plVar3 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar3[3] = (long)(plVar3 + 3);
    plVar3[4] = (long)plVar3;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar6 = *plVar7;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = lVar6 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar6 != 0) {
    return;
  }
  (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar3);
  return;
}



/* Entry: 10a1579f8; end: 10a157b1b;  */

void FUN_10a1579f8(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  plVar3 = (long *)0x100;
  __Znwm();
  plVar6 = plVar3 + 1;
  *plVar6 = 0;
  plVar3[2] = 0;
  plVar4 = plVar3 + 3;
  *plVar3 = (long)&PTR_FUN_110ba86e8;
  func_0x000109296478(plVar4,param_2,&UNK_10e499558);
  *param_1 = plVar4;
  param_1[1] = plVar3;
  if (plVar3[4] == 0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar4 = plVar3 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar3[3] = (long)(plVar3 + 3);
    plVar3[4] = (long)plVar3;
  }
  else {
    if (*(long *)(plVar3[4] + 8) != -1) {
      return;
    }
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar4 = plVar3 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar3[3] = (long)(plVar3 + 3);
    plVar3[4] = (long)plVar3;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar5 = *plVar6;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 != 0) {
    return;
  }
  (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar3);
  return;
}



/* Entry: 10a157b1c; end: 10a157b2b;  */

void FUN_10a157b1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba86e8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a157b2c; end: 10a157b4b;  */

void FUN_10a157b2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba86e8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a157b4c; end: 10a157bf7;  */

void FUN_10a157b4c(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0xe8);
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *(long *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  FUN_10a157bfc(param_1 + 0xc0);
  FUN_10a157c68(*(undefined8 *)(param_1 + 0xa8));
  lVar2 = *(long *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x58);
  plVar1 = *(long **)(param_1 + 0x50);
  if (plVar1 == (long *)(param_1 + 0x38)) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_10a157bd8;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_10a157bd8:
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
  return;
}



/* Entry: 10a157bf8; end: 10a157bfb;  */

void FUN_10a157bf8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a157bfc; end: 10a157c67;  */

void FUN_10a157bfc(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1[2] != 0) {
    plVar1 = (long *)param_1[1];
    plVar2 = *(long **)(*param_1 + 8);
    lVar3 = *plVar1;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    param_1[2] = 0;
    while (plVar1 != param_1) {
      plVar2 = (long *)plVar1[1];
      FUN_10a09d22c(plVar1 + 2);
      __ZdlPv(plVar1);
      plVar1 = plVar2;
    }
  }
  return;
}



/* Entry: 10a157c68; end: 10a157ca3;  */

void FUN_10a157c68(long *param_1)

{
  long lVar1;
  
  while (param_1 != (long *)0x0) {
    lVar1 = *param_1;
    FUN_10a157ca4(param_1 + 10);
    __ZdlPv(param_1);
    param_1 = (long *)lVar1;
  }
  return;
}



/* Entry: 10a157ca4; end: 10a157db3;  */

long * FUN_10a157ca4(long *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  puVar4 = (undefined8 *)param_1[1];
  puVar5 = puVar4;
  if ((undefined8 *)param_1[2] != puVar4) {
    uVar3 = param_1[4];
    plVar6 = puVar4 + (uVar3 >> 8);
    lVar2 = *plVar6 + (uVar3 & 0xff) * 0x10;
    lVar1 = puVar4[param_1[5] + uVar3 >> 8] + (param_1[5] + uVar3 & 0xff) * 0x10;
    puVar5 = (undefined8 *)param_1[2];
    if (lVar2 != lVar1) {
      do {
        FUN_10a09d22c();
        lVar2 = lVar2 + 0x10;
        if (lVar2 - *plVar6 == 0x1000) {
          plVar6 = plVar6 + 1;
          lVar2 = *plVar6;
        }
      } while (lVar2 != lVar1);
      puVar4 = (undefined8 *)param_1[1];
      puVar5 = (undefined8 *)param_1[2];
    }
  }
  param_1[5] = 0;
  lVar2 = (long)puVar5 - (long)puVar4;
  while (uVar3 = lVar2 >> 3, 2 < uVar3) {
    __ZdlPv(*puVar4);
    puVar5 = (undefined8 *)param_1[2];
    puVar4 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar4;
    lVar2 = (long)puVar5 - (long)puVar4;
  }
  if (uVar3 == 1) {
    lVar2 = 0x80;
  }
  else {
    if (uVar3 != 2) goto LAB_10a157d94;
    lVar2 = 0x100;
  }
  param_1[4] = lVar2;
LAB_10a157d94:
  for (; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    __ZdlPv(*puVar4);
  }
  lVar2 = param_1[2];
  if (lVar2 != param_1[1]) {
    param_1[2] = lVar2 + ((param_1[1] - lVar2) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a157db4; end: 10a157def;  */

void FUN_10a157db4(undefined8 param_1,long param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  uStack_20 = 6;
  uStack_28 = 0x1000100000;
  uStack_30 = 0x40000000000020;
  FUN_10a157e0c(param_1,*(undefined8 *)(param_2 + 0x10),&uStack_30);
  return;
}



/* Entry: 10a157df0; end: 10a157e0b;  */

void FUN_10a157df0(void)

{
  return;
}



/* Entry: 10a157e0c; end: 10a157f17;  */

void FUN_10a157e0c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long alStack_68 [3];
  long *plStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined8 *)0xc8;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110ba8750;
  puVar1[3] = param_2;
  plStack_50 = (long *)0x0;
  FUN_10ac08f40(puVar1 + 4,alStack_68);
  puVar1[8] = 0x32aaaba7;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  puVar1[0xe] = 0;
  puVar1[0xd] = 0;
  puVar1[0xf] = 0;
  uVar4 = *param_3;
  puVar1[0x11] = param_3[1];
  puVar1[0x10] = uVar4;
  *(undefined4 *)(puVar1 + 0x12) = *(undefined4 *)(param_3 + 2);
  puVar1[0x18] = 0;
  puVar1[0x14] = 0;
  puVar1[0x13] = 0;
  puVar1[0x16] = 0;
  puVar1[0x15] = 0;
  *(undefined4 *)(puVar1 + 0x17) = 0;
  plVar2 = plStack_50;
  if (plStack_50 == alStack_68) {
    lVar3 = 0x20;
  }
  else {
    if (plStack_50 == (long *)0x0) goto LAB_10a157ee0;
    lVar3 = 0x28;
  }
  (**(code **)(*plStack_50 + lVar3))();
LAB_10a157ee0:
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  *plVar2 = (long)&PTR_FUN_110ba8750;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a157f18; end: 10a157f27;  */

void FUN_10a157f18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba8750;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a157f28; end: 10a157f47;  */

void FUN_10a157f28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba8750;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a157f48; end: 10a157f53;  */

long FUN_10a157f48(long param_1)

{
  long *plVar1;
  long lVar2;
  long lStack_28;
  
  lStack_28 = param_1 + 0x98;
  FUN_10a157fc0(&lStack_28);
  __ZNSt3__15mutexD1Ev(param_1 + 0x40);
  plVar1 = *(long **)(param_1 + 0x38);
  if (plVar1 == (long *)(param_1 + 0x20)) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1 + 0x18;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1 + 0x18;
}



/* Entry: 10a157f54; end: 10a157fbf;  */

long FUN_10a157f54(long param_1)

{
  long *plVar1;
  long lVar2;
  long lStack_28;
  
  lStack_28 = param_1 + 0x80;
  FUN_10a157fc0(&lStack_28);
  __ZNSt3__15mutexD1Ev(param_1 + 0x28);
  plVar1 = *(long **)(param_1 + 0x20);
  if (plVar1 == (long *)(param_1 + 8)) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 10a157fc0; end: 10a15802f;  */

void FUN_10a157fc0(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x28;
        FUN_10a158030(lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a158030; end: 10a1580b3;  */

long FUN_10a158030(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
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



/* Entry: 10a1580b4; end: 10a158167;  */

void FUN_10a1580b4(undefined8 param_1,long param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  lVar4 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar4 + 0x7bc);
  if (uVar1 == 0) {
    uStack_14 = 6;
  }
  else {
    uVar5 = 0;
    bVar3 = true;
    do {
      if (uVar5 == 0x20) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a158168);
        (*pcVar2)();
      }
      if (((*(uint *)(lVar4 + 0x73c + uVar5 * 4) ^ 0xffffffff) & 0xe) == 0) break;
      uVar5 = uVar5 + 1;
      bVar3 = uVar5 < uVar1;
    } while (uVar1 != uVar5);
    uStack_14 = 0xe;
    if (!bVar3) {
      uStack_14 = 6;
    }
  }
  uStack_24 = (undefined4)*(undefined8 *)(lVar4 + 0x148);
  uStack_20 = 0x1000000;
  uVar5 = *(ulong *)(lVar4 + 200);
  if (*(ulong *)(lVar4 + 0xc0) <= *(ulong *)(lVar4 + 200)) {
    uVar5 = *(ulong *)(lVar4 + 0xc0);
  }
  if (0x3fffff < uVar5) {
    uVar5 = 0x400000;
  }
  uStack_1c = (undefined4)uVar5;
  uStack_18 = 4;
  FUN_10a158184(param_1,lVar4,&uStack_24);
  return;
}



/* Entry: 10a158168; end: 10a158183;  */

void FUN_10a158168(void)

{
  return;
}



/* Entry: 10a158184; end: 10a1581f3;  */

void FUN_10a158184(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x110;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = puVar1 + 3;
  *puVar1 = &PTR_FUN_110ba87b8;
  FUN_10abff5d8(puVar2,param_2,param_3);
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a1581f4; end: 10a158203;  */

void FUN_10a1581f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba87b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a158204; end: 10a158223;  */

void FUN_10a158204(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba87b8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


