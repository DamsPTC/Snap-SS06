/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109d1868c; end: 109d1868f;  */

void FUN_109d1868c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 109d18690; end: 109d1874f;  */

undefined8 FUN_109d18690(void)

{
  int iVar1;
  undefined **appuStack_30 [2];
  
  if ((bRam00000001138334d0 & 1) == 0) {
    iVar1 = 0x138334d0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      __ZNSt13runtime_errorC2EPKc(appuStack_30,&UNK_10f5ac75f);
      appuStack_30[0] = &PTR_FUN_110b3eb30;
      FUN_109d18750(0x1138334c8,appuStack_30);
      __ZNSt13runtime_errorD2Ev(appuStack_30);
      ___cxa_atexit(PTR___ZNSt13exception_ptrD1Ev_110346198,0x1138334c8,0x100000000);
      ___cxa_guard_release(0x1138334d0);
    }
  }
  return 0x1138334c8;
}



/* Entry: 109d18750; end: 109d1879f;  */

void FUN_109d18750(undefined8 param_1,undefined8 param_2)

{
  undefined **appuStack_30 [2];
  
  __ZNSt13runtime_errorC2ERKS_(appuStack_30,param_2);
  appuStack_30[0] = &PTR_FUN_110b3eb30;
  FUN_109d18834(param_1,appuStack_30);
  __ZNSt13runtime_errorD2Ev(appuStack_30);
  return;
}



/* Entry: 109d187a0; end: 109d187a3;  */

void FUN_109d187a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 109d187a4; end: 109d187cb;  */

void FUN_109d187a4(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d187cc; end: 109d18833;  */

void FUN_109d187cc(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  __ZNSt13runtime_errorC2ERKS_();
  *puVar2 = &PTR_FUN_110b3eb08;
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109d18814);
  (*pcVar1)();
}



/* Entry: 109d18834; end: 109d1889b;  */

void FUN_109d18834(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  __ZNSt13runtime_errorC2ERKS_();
  *puVar2 = &PTR_FUN_110b3eb30;
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109d1887c);
  (*pcVar1)();
}



/* Entry: 109d1889c; end: 109d188b7;  */

void FUN_109d1889c(void)

{
  return;
}



/* Entry: 109d188b8; end: 109d1895f;  */

void FUN_109d188b8(undefined8 *param_1,undefined *param_2)

{
  code *pcVar1;
  long *plVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lStack_28;
  
  lStack_28 = 0;
  plVar2 = *(long **)(param_2 + 0x10);
  if (plVar2 == (long *)0x0) {
    uVar4 = 0;
  }
  else {
    (**(code **)(*plVar2 + 0x28))(plVar2,0,&lStack_28);
    if (lStack_28 != 0) {
      func_0x0001092af97c(&lStack_28);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x109d1894c);
      (*pcVar1)();
    }
    uVar4 = *(undefined8 *)(param_2 + 0x10);
  }
  *param_1 = param_2;
  param_1[2] = uVar4;
  ppuVar3 = &PTR___tlv_bootstrap_11340dd98;
  (*(code *)PTR___tlv_bootstrap_11340dd98)();
  puVar5 = *ppuVar3;
  *ppuVar3 = param_2;
  param_1[1] = puVar5;
  __ZNSt13exception_ptrD1Ev(&lStack_28);
  return;
}



/* Entry: 109d18960; end: 109d18aaf;  */

void FUN_109d18960(long *param_1,long param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if (param_1[1] != param_2) {
    if (*param_1 == 0) {
      *param_1 = param_2;
    }
    plVar2 = (long *)param_1[3];
    plVar1 = *(long **)(param_2 + 0x10);
    lVar4 = *(long *)(param_2 + 0x10);
    lVar3 = *(long *)(param_2 + 8);
    if (((plVar1 != (long *)0x0) &&
        ((**(code **)(*plVar1 + 0x28))(plVar1,param_1,param_3), param_3 != (long *)0x0)) &&
       (*param_3 != 0)) {
      return;
    }
    param_1[1] = param_2;
    param_1[3] = lVar4;
    param_1[2] = lVar3;
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109d189fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x30))(plVar2,param_1);
      return;
    }
  }
  return;
}



/* Entry: 109d18ab0; end: 109d18be7;  */

undefined8 * FUN_109d18ab0(undefined8 *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  
  uVar4 = *(undefined8 *)(*param_4 + 8);
  *param_1 = &PTR_FUN_110b3ebc8;
  param_1[1] = uVar4;
  param_1[2] = param_1;
  param_1[3] = &PTR_DAT_110b3ec18;
  param_1[4] = *(undefined8 *)(*param_4 + 0x10);
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xb] = *param_4;
  param_1[0xc] = &UNK_1053a6a3c;
  param_1[0xd] = &PTR_DAT_110ae9180;
  param_1[0xc] = param_4[1];
  plVar5 = param_4 + 2;
  (**(code **)(*plVar5 + 0x10))(param_1 + 0xd,plVar5);
  param_4[1] = (long)&UNK_1053a6a3c;
  (**(code **)*plVar5)(plVar5);
  *plVar5 = (long)&PTR_DAT_110ae9180;
  if (0x7ffffffffffffff7 < param_3) {
    func_0x000104c4f6b8();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x109d18be4);
    (*pcVar2)();
  }
  if (param_3 < 0x17) {
    puVar3 = param_1 + 0x14;
    *(char *)((long)param_1 + 0xb7) = (char)param_3;
    if (param_3 == 0) goto LAB_109d18bbc;
  }
  else {
    puVar1 = (undefined8 *)0x19;
    if ((param_3 | 7) != 0x17) {
      puVar1 = (undefined8 *)((param_3 | 7) + 1);
    }
    puVar3 = puVar1;
    __Znwm();
    param_1[0x15] = param_3;
    param_1[0x16] = (ulong)puVar1 | 0x8000000000000000;
    param_1[0x14] = puVar3;
  }
  _memmove(puVar3,param_2,param_3);
LAB_109d18bbc:
  *(undefined1 *)((long)puVar3 + param_3) = 0;
  return param_1;
}



/* Entry: 109d18be8; end: 109d19153;  */

void FUN_109d18be8(long param_1)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lStack_58;
  long lStack_50;
  code *pcStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  
  FUN_109d1a6fc(&pcStack_48);
  lStack_58 = param_1 + 0x48;
  lStack_50 = param_1 + 0x50;
  FUN_109d1950c(&lStack_58,&pcStack_48);
  if (lStack_40 != 0) {
    func_0x0001092b4274(&lStack_40);
  }
  if (pcStack_48 != (code *)0x0) {
    pcVar1 = pcStack_48 + 8;
    do {
      uVar6 = *(ulong *)pcVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar5) {
        *(ulong *)pcVar1 = uVar6 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *(ulong *)pcVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
        if (bVar5) {
          *(ulong *)pcVar1 = uVar6 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*(long *)pcStack_48 + 8))();
      }
    }
  }
  plVar2 = (long *)(param_1 + 0x28);
  *plVar2 = 1;
  lVar8 = *(long *)(param_1 + 0x38);
  plVar3 = (long *)(lVar8 + 0x10);
  do {
    lVar7 = *plVar3;
    if (lVar7 == 0) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        pcStack_48 = FUN_109d195ac;
        ppuStack_38 = &PTR_PTR_1132fed68;
        lStack_40 = param_1;
        func_0x000109d1b588(lVar8 + 0x18,&pcStack_48);
        *(undefined8 *)(lVar8 + 0x10) = 0;
        return;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar7 >> 1 & 1) != 0) {
      do {
        lVar8 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 + -1 == 0) {
        FUN_109d1a768(param_1 + 0x50);
      }
      return;
    }
  } while( true );
}



/* Entry: 109d19154; end: 109d1915f;  */

undefined8 * FUN_109d19154(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plStack_38;
  
  *param_1 = &PTR_FUN_110b3ebc8;
  param_1[3] = &PTR_DAT_110b3ec18;
  *(undefined1 *)(param_1 + 6) = 1;
  lVar4 = param_1[8];
  plVar7 = (long *)(lVar4 + 0x10);
  do {
    lVar6 = *plVar7;
    if (lVar6 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(lVar4 + 0x18);
        goto LAB_109d18fb0;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar6 >> 1 & 1) != 0) {
LAB_109d18fb0:
      plVar7 = (long *)param_1[9];
      plStack_38 = plVar7;
      if (plVar7 == (long *)0x0) {
        FUN_109d1a244(&plStack_38);
      }
      else {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 + 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        FUN_109d1a244(&plStack_38);
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
            (**(code **)(*plVar7 + 8))(plVar7);
          }
        }
      }
      if (*(char *)((long)param_1 + 0xb7) < '\0') {
        __ZdlPv(param_1[0x14]);
      }
      func_0x0001092ba41c(param_1 + 0xb);
      if (param_1[10] != 0) {
        func_0x0001092b4274();
      }
      plVar7 = (long *)param_1[9];
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
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
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      plVar7 = (long *)param_1[8];
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 0x200000000;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 >> 0x21 == 1) {
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
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      plVar7 = (long *)param_1[7];
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
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
          (**(code **)(*plVar7 + 0x10))(plVar7);
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
            (**(code **)(*plVar7 + 8))(plVar7);
          }
        }
      }
      return param_1;
    }
  } while( true );
}



/* Entry: 109d19160; end: 109d1918b;  */

void FUN_109d19160(void)

{
  func_0x000109d18f34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d1918c; end: 109d192ab;  */

void FUN_109d1918c(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  *(undefined1 *)(param_2 + 0x30) = 1;
  lVar4 = *(long *)(param_2 + 0x40);
  plVar1 = (long *)(lVar4 + 0x10);
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
        FUN_109d1b4dc(lVar4 + 0x18);
        goto LAB_109d191f0;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar5 >> 1 & 1) != 0) {
LAB_109d191f0:
      lVar4 = *(long *)(param_2 + 0x48);
      *param_1 = lVar4;
      if (lVar4 != 0) {
        plVar1 = (long *)(lVar4 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
  } while( true );
}



/* Entry: 109d192ac; end: 109d192e7;  */

void FUN_109d192ac(long param_1,undefined8 *param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  uStack_20 = param_2[2];
  (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),&uStack_30);
  return;
}



/* Entry: 109d192e8; end: 109d19403;  */

void FUN_109d192e8(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  plVar4 = param_1;
  if (((param_2 != (long *)0x0) && ((long *)*param_2 == param_1)) &&
     (plVar4 = param_2 + 4, *plVar4 == 0)) {
    FUN_109d19404(plVar4,param_1 + 7);
  }
  plVar1 = param_1 + 5;
  if (param_3 == (long *)0x0) {
    do {
      while (*plVar1 != *plVar1) {
        ClearExclusiveLocal();
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    do {
      while( true ) {
        lVar5 = *plVar1;
        if ((lVar5 == 0) || ((*(byte *)(param_1 + 6) & 1) != 0)) {
          FUN_109d1857c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZNSt13exception_ptraSERKS__1103461a0)(param_3,plVar4);
          return;
        }
        if (*plVar1 == lVar5) break;
        ClearExclusiveLocal();
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar4 = (long *)param_1[4];
  if (((plVar4 != (long *)0x0) &&
      ((**(code **)(*plVar4 + 0x28))(plVar4,param_2,param_3), param_3 != (long *)0x0)) &&
     (*param_3 != 0)) {
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      lVar5 = param_1[10];
      param_1[10] = 0;
      plVar4 = (long *)(lVar5 + 0x10);
      do {
        lVar6 = *plVar4;
        if (lVar6 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = 2;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            FUN_109d1b4dc(lVar5 + 0x18);
            goto LAB_109d1a7c8;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        if (((uint)lVar6 >> 1 & 1) != 0) {
          if (lVar5 != 0) {
LAB_109d1a7c8:
            func_0x0001092b4274(&stack0xffffffffffffffd8,lVar5);
          }
          return;
        }
      } while( true );
    }
  }
  return;
}



/* Entry: 109d19404; end: 109d194af;  */

long * FUN_109d19404(long *param_1,long *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  
  if (param_2 != param_1) {
    lVar4 = *param_2;
    if (lVar4 != 0) {
      plVar6 = (long *)(lVar4 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar6 = (long *)*param_1;
    *param_1 = lVar4;
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
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
          (**(code **)(*plVar6 + 8))(plVar6);
        }
      }
    }
  }
  return param_1;
}



/* Entry: 109d194b0; end: 109d19507;  */

void FUN_109d194b0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lStack_28;
  
  if (*(long **)(param_1 + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x30))();
  }
  plVar1 = (long *)(param_1 + 0x28);
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 != 0) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x50);
  *(long *)(param_1 + 0x50) = 0;
  plVar1 = (long *)(lVar4 + 0x10);
  do {
    lVar5 = *plVar1;
    lStack_28 = lVar4;
    if (lVar5 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(lVar4 + 0x18);
        goto LAB_109d1a7c8;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar5 >> 1 & 1) != 0) {
      if (lVar4 != 0) {
LAB_109d1a7c8:
        func_0x0001092b4274(&lStack_28,lVar4);
      }
      return;
    }
  } while( true );
}



/* Entry: 109d19508; end: 109d1950b;  */

void FUN_109d19508(void)

{
  return;
}



/* Entry: 109d1950c; end: 109d195ab;  */

void FUN_109d1950c(undefined8 *param_1,long *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  
  plVar6 = (long *)*param_1;
  plVar4 = (long *)*plVar6;
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
  *plVar6 = *param_2;
  *param_2 = 0;
  plVar4 = (long *)param_1[1];
  if (*plVar4 != 0) {
    func_0x0001092b4274(plVar4);
  }
  *plVar4 = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 109d195ac; end: 109d195cf;  */

void FUN_109d195ac(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lStack_28;
  
  plVar1 = (long *)(param_1 + 0x28);
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 != 0) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x50);
  *(long *)(param_1 + 0x50) = 0;
  plVar1 = (long *)(lVar4 + 0x10);
  do {
    lVar5 = *plVar1;
    lStack_28 = lVar4;
    if (lVar5 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(lVar4 + 0x18);
        goto LAB_109d1a7c8;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar5 >> 1 & 1) != 0) {
      if (lVar4 != 0) {
LAB_109d1a7c8:
        func_0x0001092b4274(&lStack_28,lVar4);
      }
      return;
    }
  } while( true );
}



/* Entry: 109d195d0; end: 109d196c7;  */

void FUN_109d195d0(undefined8 *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)*param_1;
  plVar6 = (long *)*puVar7;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  *puVar7 = *param_2;
  *param_2 = 0;
  plVar5 = (long *)param_1[1];
  plVar6 = (long *)*plVar5;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  *plVar5 = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 109d196c8; end: 109d197a3;  */

void FUN_109d196c8(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 *puStack_30;
  
  __ZNSt3__15mutex4lockEv();
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar2 = *(ulong *)(param_1 + 0x68);
    puVar1 = (undefined8 *)
             (*(long *)(*(long *)(param_1 + 0x50) + (uVar2 / 0xaa) * 8) + (uVar2 % 0xaa) * 0x18);
    uVar4 = puVar1[1];
    uVar3 = *puVar1;
    puVar1 = (undefined8 *)puVar1[2];
    *(ulong *)(param_1 + 0x68) = uVar2 + 1;
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + -1;
    func_0x000109d19a1c(param_1 + 0x48,1);
    __ZNSt3__15mutex6unlockEv(param_1);
    uStack_40 = uVar3;
    uStack_38 = uVar4;
    puStack_30 = puVar1;
    (**(code **)*puVar1)(puVar1,&uStack_40);
    return;
  }
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1);
  return;
}



/* Entry: 109d197a4; end: 109d197e7;  */

bool FUN_109d197a4(long param_1)

{
  int iVar1;
  
  __ZNSt3__15mutex4lockEv();
  iVar1 = *(int *)(param_1 + 0x40);
  if (0 < iVar1) {
    *(int *)(param_1 + 0x40) = iVar1 + -1;
  }
  __ZNSt3__15mutex6unlockEv(param_1);
  return 0 < iVar1;
}



/* Entry: 109d197e8; end: 109d1985f;  */

bool FUN_109d197e8(long param_1,undefined8 param_2)

{
  int iVar1;
  
  __ZNSt3__15mutex4lockEv();
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 < 1) {
    FUN_109d19860(param_1 + 0x48,param_2);
  }
  else {
    *(int *)(param_1 + 0x40) = iVar1 + -1;
  }
  __ZNSt3__15mutex6unlockEv(param_1);
  return iVar1 < 1;
}



/* Entry: 109d19860; end: 109d19903;  */

void FUN_109d19860(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar2 = *(long *)(param_1 + 8);
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != lVar2) {
    uVar1 = (*(long *)(param_1 + 0x10) - lVar2 >> 3) * 0xaa - 1;
  }
  uVar4 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
  if (uVar1 == uVar4) {
    FUN_109d19a78(param_1);
    lVar2 = *(long *)(param_1 + 8);
    uVar4 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
  }
  puVar3 = (undefined8 *)(*(long *)(lVar2 + (uVar4 / 0xaa) * 8) + (uVar4 % 0xaa) * 0x18);
  uVar6 = param_2[1];
  uVar5 = *param_2;
  puVar3[2] = param_2[2];
  puVar3[1] = uVar6;
  *puVar3 = uVar5;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  return;
}



/* Entry: 109d19904; end: 109d19937;  */

long * FUN_109d19904(long *param_1)

{
  if (*param_1 != 0) {
    FUN_109d196c8();
    *param_1 = 0;
  }
  return param_1;
}



/* Entry: 109d19938; end: 109d199cf;  */

long * FUN_109d19938(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  param_1[5] = 0;
  lVar3 = (long)puVar1 - (long)puVar4;
  while (uVar2 = lVar3 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar4);
    puVar1 = (undefined8 *)param_1[2];
    puVar4 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar4;
    lVar3 = (long)puVar1 - (long)puVar4;
  }
  if (uVar2 == 1) {
    lVar3 = 0x55;
  }
  else {
    if (uVar2 != 2) goto LAB_109d199b4;
    lVar3 = 0xaa;
  }
  param_1[4] = lVar3;
LAB_109d199b4:
  for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    __ZdlPv(*puVar4);
  }
  lVar3 = param_1[2];
  if (lVar3 != param_1[1]) {
    param_1[2] = lVar3 + ((param_1[1] - lVar3) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109d199d0; end: 109d19a77;  */

long * FUN_109d199d0(long *param_1)

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



/* Entry: 109d19a78; end: 109d19c27;  */

void FUN_109d19a78(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_68;
  long *plStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  long *plStack_40;
  
  if ((ulong)param_1[4] < 0xaa) {
    lVar7 = param_1[3];
    uVar6 = param_1[2] - param_1[1];
    uVar5 = lVar7 - *param_1;
    if (uVar5 <= uVar6) {
      lVar3 = (long)uVar5 >> 2;
      if (lVar7 == *param_1) {
        lVar3 = 1;
      }
      plVar1 = param_1;
      plStack_40 = param_1;
      FUN_109d1a144();
      lStack_58 = (long)plVar1 + uVar6;
      plStack_48 = plVar1 + lVar3;
      uVar2 = 0xff0;
      plStack_60 = plVar1;
      lStack_50 = lStack_58;
      __Znwm();
      uStack_68 = uVar2;
      FUN_109d19f38(&plStack_60,&uStack_68);
      lVar3 = param_1[2];
      lVar7 = -7 - lVar3;
      while (lVar4 = param_1[1], lVar3 != lVar4) {
        lVar3 = lVar3 + -8;
        lVar7 = lVar7 + 8;
        FUN_109d1a03c(&plStack_60,lVar3);
      }
      plVar1 = (long *)*param_1;
      lVar9 = param_1[3];
      lVar8 = param_1[2];
      param_1[1] = lStack_58;
      *param_1 = (long)plStack_60;
      param_1[3] = (long)plStack_48;
      param_1[2] = lStack_50;
      lStack_50 = lVar8;
      if (lVar3 != lVar8) {
        lStack_50 = lVar8 + (-(lVar8 + lVar7) & 0xfffffffffffffff8U);
      }
      if (plVar1 == (long *)0x0) {
        return;
      }
      plStack_60 = plVar1;
      lStack_58 = lVar4;
      plStack_48 = (long *)lVar9;
      __ZdlPv();
      return;
    }
    plVar1 = (long *)0xff0;
    if (lVar7 != param_1[2]) {
      __Znwm();
      plStack_60 = plVar1;
      func_0x000109d19d2c(param_1,&plStack_60);
      return;
    }
    __Znwm();
    plStack_60 = plVar1;
    FUN_109d19e30(param_1,&plStack_60);
  }
  else {
    param_1[4] = param_1[4] - 0xaa;
  }
  plStack_60 = *(long **)param_1[1];
  param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  FUN_109d19c28(param_1,&plStack_60);
  return;
}



/* Entry: 109d19c28; end: 109d19e2f;  */

void FUN_109d19c28(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong *puVar9;
  long lVar10;
  
  puVar7 = (ulong *)param_1[2];
  if (puVar7 == (ulong *)param_1[3]) {
    uVar5 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
      uVar4 = (long)((long)puVar7 - uVar5) >> 2;
      if ((long)puVar7 - uVar5 == 0) {
        uVar4 = 1;
      }
      puVar3 = param_1;
      uVar5 = uVar4;
      FUN_109d1a144();
      puVar1 = puVar3 + (uVar4 >> 2);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (ulong *)((long)puVar1 + lVar8);
        puVar6 = (ulong *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar4 = *param_1;
      *param_1 = (ulong)puVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = (ulong)(puVar3 + uVar5);
      if (uVar4 != 0) {
        __ZdlPv(uVar4);
        puVar7 = (ulong *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar5) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (ulong *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 109d19e30; end: 109d19f37;  */

void FUN_109d19e30(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 == (undefined8 *)*param_1) {
    uVar3 = param_1[2];
    uVar1 = param_1[3];
    if (uVar3 < uVar1) {
      lVar9 = (((long)(uVar1 - uVar3) >> 3) + 1) / 2;
      puVar5 = puVar8 + lVar9;
      if (uVar3 - (long)puVar8 != 0) {
        _memmove(puVar5,puVar8,uVar3 - (long)puVar8);
        uVar3 = param_1[2];
      }
      param_1[1] = (long)puVar5;
      param_1[2] = uVar3 + lVar9 * 8;
      puVar8 = puVar5;
    }
    else {
      lVar9 = (long)(uVar1 - (long)puVar8) >> 2;
      if (uVar1 - (long)puVar8 == 0) {
        lVar9 = 1;
      }
      lVar7 = lVar9 * 2;
      plVar2 = param_1;
      FUN_109d1a144();
      puVar8 = (undefined8 *)((long)plVar2 + (lVar7 + 6U & 0xfffffffffffffff8));
      lVar7 = param_1[2] - param_1[1];
      puVar5 = puVar8;
      if (lVar7 != 0) {
        puVar5 = (undefined8 *)((long)puVar8 + lVar7);
        puVar4 = (undefined8 *)param_1[1];
        puVar6 = puVar8;
        do {
          *puVar6 = *puVar4;
          lVar7 = lVar7 + -8;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        } while (lVar7 != 0);
      }
      lVar7 = *param_1;
      *param_1 = (long)plVar2;
      param_1[1] = (long)puVar8;
      param_1[2] = (long)puVar5;
      param_1[3] = (long)(plVar2 + lVar9);
      if (lVar7 != 0) {
        __ZdlPv(lVar7);
        puVar8 = (undefined8 *)param_1[1];
      }
    }
  }
  puVar8[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}



/* Entry: 109d19f38; end: 109d1a03b;  */

void FUN_109d19f38(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar7 = (undefined8 *)param_1[2];
  if (puVar7 == (undefined8 *)param_1[3]) {
    uVar5 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
      uVar4 = (long)((long)puVar7 - uVar5) >> 2;
      if ((long)puVar7 - uVar5 == 0) {
        uVar4 = 1;
      }
      uVar3 = param_1[4];
      uVar5 = uVar4;
      FUN_109d1a144();
      puVar1 = (undefined8 *)(uVar3 + (uVar4 >> 2) * 8);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (undefined8 *)((long)puVar1 + lVar8);
        puVar6 = (undefined8 *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar4 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar3 + uVar5 * 8;
      if (uVar4 != 0) {
        __ZdlPv(uVar4);
        puVar7 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar5) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (undefined8 *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 109d1a03c; end: 109d1a143;  */

void FUN_109d1a03c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 == (undefined8 *)*param_1) {
    uVar3 = param_1[2];
    uVar1 = param_1[3];
    if (uVar3 < uVar1) {
      lVar9 = (((long)(uVar1 - uVar3) >> 3) + 1) / 2;
      puVar5 = puVar8 + lVar9;
      if (uVar3 - (long)puVar8 != 0) {
        _memmove(puVar5,puVar8,uVar3 - (long)puVar8);
        uVar3 = param_1[2];
      }
      param_1[1] = (long)puVar5;
      param_1[2] = uVar3 + lVar9 * 8;
      puVar8 = puVar5;
    }
    else {
      lVar9 = (long)(uVar1 - (long)puVar8) >> 2;
      if (uVar1 - (long)puVar8 == 0) {
        lVar9 = 1;
      }
      lVar7 = lVar9 * 2;
      lVar2 = param_1[4];
      FUN_109d1a144();
      puVar8 = (undefined8 *)(lVar2 + (lVar7 + 6U & 0xfffffffffffffff8));
      lVar7 = param_1[2] - param_1[1];
      puVar5 = puVar8;
      if (lVar7 != 0) {
        puVar5 = (undefined8 *)((long)puVar8 + lVar7);
        puVar4 = (undefined8 *)param_1[1];
        puVar6 = puVar8;
        do {
          *puVar6 = *puVar4;
          lVar7 = lVar7 + -8;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        } while (lVar7 != 0);
      }
      lVar7 = *param_1;
      *param_1 = lVar2;
      param_1[1] = (long)puVar8;
      param_1[2] = (long)puVar5;
      param_1[3] = lVar2 + lVar9 * 8;
      if (lVar7 != 0) {
        __ZdlPv(lVar7);
        puVar8 = (undefined8 *)param_1[1];
      }
    }
  }
  puVar8[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}



/* Entry: 109d1a144; end: 109d1a243;  */

void FUN_109d1a144(long param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [8];
  
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104c4f740();
  plVar1 = (long *)(param_1 + 0x30);
  lVar2 = *plVar1;
  __ZSt17current_exceptionv(auStack_48);
  func_0x000109d1b350(lVar2,auStack_48);
  __ZNSt13exception_ptrD1Ev(auStack_48);
  lVar2 = *plVar1;
  *plVar1 = 0;
  if (lVar2 != 0) {
    func_0x0001092b4274(plVar1);
  }
  return;
}



/* Entry: 109d1a244; end: 109d1a2cb;  */

void FUN_109d1a244(long *param_1)

{
  int iVar1;
  int iStack_24;
  
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 1 & 1) == 0) {
    _semaphore_create(*(undefined4 *)PTR__mach_task_self__11034c5c8,&iStack_24,0,0);
    FUN_109d1af88(*param_1 + 0x10,FUN_109d1a2cc,&iStack_24);
    do {
      iVar1 = iStack_24;
      _semaphore_wait();
    } while (iVar1 == 0xe);
    FUN_109d1b6f4(&iStack_24);
  }
  return;
}



/* Entry: 109d1a2cc; end: 109d1a2e7;  */

void FUN_109d1a2cc(undefined4 *param_1)

{
  _semaphore_signal(*param_1);
  return;
}



/* Entry: 109d1a2e8; end: 109d1a3ff;  */

void FUN_109d1a2e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 2;
  func_0x0001092b42f8(&plStack_60,&uStack_48);
  plVar7 = (long *)(lStack_50 + 8);
  if (*plVar7 != 0) {
    func_0x0001092b4274(plVar7);
  }
  lVar4 = lStack_50;
  *plVar7 = lStack_58;
  lStack_58 = 0;
  __ZNSt3__15mutex4lockEv(lStack_50 + 0x18);
  lVar5 = lStack_50;
  FUN_109d1a5e0(lStack_50,0,param_2);
  if ((int)lVar5 != 0) {
    func_0x0001092b45d8(lStack_50,1,param_3);
  }
  *param_1 = plStack_60;
  plStack_60 = (long *)0x0;
  __ZNSt3__15mutex6unlockEv(lVar4 + 0x18);
  if (lStack_58 != 0) {
    func_0x0001092b4274(&lStack_58);
  }
  if (plStack_60 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_60 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plStack_60 + 8))();
      }
    }
  }
  return;
}



/* Entry: 109d1a400; end: 109d1a5df;  */

bool FUN_109d1a400(long *param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long *plStack_48;
  long *plStack_40;
  undefined1 auStack_38 [8];
  
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 1 & 1) == 0) {
    if (param_2 < 1) {
      bVar5 = false;
    }
    else {
      plVar6 = param_1;
      FUN_109d1a80c();
      lVar9 = plVar6[0x12];
      __ZNSt3__16chrono12steady_clock3nowEv();
      FUN_109d17d64(&plStack_48,(long)plVar6 + param_2,lVar9);
      FUN_109d1a2e8(&plStack_40,param_1,&plStack_48);
      FUN_109d1a244(&plStack_40);
      if ((((uint)plStack_40[2] >> 1 & 1) == 0) || (((uint)plStack_40[2] >> 5 & 1) != 0)) {
        if (((uint)plStack_40[2] >> 5 & 1) == 0) {
          puVar7 = (undefined8 *)0x10;
          ___cxa_allocate_exception();
          __ZNSt13runtime_errorC2EPKc();
          *puVar7 = &PTR_DAT_110ae85c0;
          ___cxa_throw(puVar7,&PTR_DAT_110ae8598,&DAT_1092af9d8);
        }
        else {
          __ZNSt13exception_ptrC1ERKS_(auStack_38,plStack_40 + 0x12);
          func_0x0001092af97c(auStack_38);
        }
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x109d1a5b4);
        (*pcVar4)();
      }
      bVar5 = plStack_40[0x13] == 0;
      puVar1 = (ulong *)(plStack_40 + 1);
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
          (**(code **)(*plStack_40 + 8))();
        }
      }
      if (plStack_48 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_48 + 1);
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
            (**(code **)(*plStack_48 + 8))();
          }
        }
      }
    }
  }
  else {
    bVar5 = true;
  }
  return bVar5;
}



/* Entry: 109d1a5e0; end: 109d1a6b7;  */

undefined1 FUN_109d1a5e0(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined *puStack_58;
  long *plStack_50;
  undefined **ppuStack_48;
  
  plVar5 = (long *)(param_1 + 0x58 + param_2 * 0x28);
  plVar5[4] = param_1;
  func_0x0001092b4524(plVar5,param_3);
  lVar6 = *plVar5;
  plVar1 = (long *)(lVar6 + 0x10);
  do {
    lVar4 = *plVar1;
    if (lVar4 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar4 = lVar6 + 0x18;
        puStack_58 = &UNK_1092b45b4;
        ppuStack_48 = &PTR_PTR_1132fed68;
        plStack_50 = plVar5;
        func_0x000109d1b588(lVar4,&puStack_58);
        *(undefined8 *)(lVar6 + 0x10) = 0;
        plVar5[2] = (long)plVar5;
        plVar5[3] = lVar4;
        plVar5[1] = (long)&UNK_1092b45b4;
        return 1;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar4 >> 1 & 1) != 0) {
      FUN_109d182ac(param_1,param_2,param_1 + 0x58);
      return 0;
    }
  } while( true );
}



/* Entry: 109d1a6b8; end: 109d1a6fb;  */

void FUN_109d1a6b8(long *param_1)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *param_1;
  *param_1 = 0;
  lStack_28 = lVar1;
  func_0x000109d1b350(lVar1);
  if (lVar1 != 0) {
    func_0x0001092b4274(&lStack_28,lVar1);
  }
  return;
}



/* Entry: 109d1a6fc; end: 109d1a767;  */

void FUN_109d1a6fc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xa0;
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
  *puVar1 = &PTR_DAT_110ae91c0;
  *(undefined2 *)(puVar1 + 0x13) = 0;
  *param_1 = puVar1;
  param_1[1] = puVar1;
  return;
}



/* Entry: 109d1a768; end: 109d1a80b;  */

void FUN_109d1a768(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lStack_28;
  
  lVar5 = *param_1;
  *param_1 = 0;
  plVar1 = (long *)(lVar5 + 0x10);
  do {
    lVar4 = *plVar1;
    lStack_28 = lVar5;
    if (lVar4 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(lVar5 + 0x18);
        goto LAB_109d1a7c8;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar4 >> 1 & 1) != 0) {
      if (lVar5 != 0) {
LAB_109d1a7c8:
        func_0x0001092b4274(&lStack_28,lVar5);
      }
      return;
    }
  } while( true );
}



/* Entry: 109d1a80c; end: 109d1a9bf;  */

undefined1 * FUN_109d1a80c(void)

{
  int iVar1;
  code **ppcVar2;
  code *pcStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined1 auStack_118 [72];
  char cStack_d0;
  undefined1 auStack_c8 [72];
  char cStack_80;
  undefined1 auStack_78 [72];
  char cStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar2 = (code **)0x1137e1c78;
  if (puRam00000001137e1d50 != (undefined1 *)0x0) goto LAB_109d1a900;
  if ((bRam00000001137e1c70 & 1) == 0) goto LAB_109d1a930;
  while( true ) {
    __ZNSt3__15mutex4lockEv(0x1132fed10);
    ppcVar2 = (code **)puRam00000001137e1d50;
    if (puRam00000001137e1d50 == (undefined1 *)0x0) {
      pcStack_130 = FUN_109d1ae10;
      uStack_128 = 0x109d1ae64;
      pcStack_120 = FUN_109d1add0;
      auStack_78[0] = 0;
      cStack_30 = '\0';
      auStack_c8[0] = 0;
      cStack_80 = '\0';
      auStack_118[0] = 0;
      cStack_d0 = '\0';
      ppcVar2 = &pcStack_130;
      FUN_109d1a9c0(&pcStack_130,auStack_78,auStack_c8,auStack_118);
      if (cStack_d0 == '\x01') {
        FUN_109d1ad04(auStack_118);
      }
      if (cStack_80 == '\x01') {
        func_0x0001092ba41c(auStack_c8);
      }
      if (cStack_30 == '\x01') {
        func_0x0001092ba41c(auStack_78);
      }
    }
    __ZNSt3__15mutex6unlockEv(0x1132fed10);
LAB_109d1a900:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) break;
    ___stack_chk_fail();
LAB_109d1a930:
    iVar1 = 0x137e1c70;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(PTR___ZNSt3__15mutexD1Ev_110346798,0x1132fed10,0x100000000);
      ___cxa_guard_release(0x1137e1c70);
    }
  }
  return (undefined1 *)ppcVar2;
}



/* Entry: 109d1a9c0; end: 109d1acff;  */

undefined8
FUN_109d1a9c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  __ZNSt3__115recursive_mutex4lockEv(0x1137e1d58);
  FUN_109d1ba5c();
  if (lRam00000001137e1d50 == 0) {
    if ((*(byte *)(param_2 + 9) & 1) == 0) {
      (*(code *)*param_1)(&uStack_60);
      if (*(char *)(param_2 + 9) == '\x01') {
        func_0x0001092ba41c(param_2);
      }
      param_2[1] = &UNK_109896774;
      param_2[2] = &PTR_DAT_110b17068;
      *param_2 = uStack_60;
      param_2[4] = uStack_58;
      param_2[3] = uStack_60;
      *(undefined1 *)(param_2 + 9) = 1;
    }
    if ((*(byte *)(param_3 + 9) & 1) == 0) {
      if ((code *)param_1[1] == (code *)0x0) {
        *param_3 = *param_2;
        param_3[1] = &UNK_1053a6a3c;
        param_3[2] = &PTR_DAT_110ae9180;
      }
      else {
        (*(code *)param_1[1])(&uStack_60);
        if (*(char *)(param_3 + 9) == '\x01') {
          func_0x0001092ba41c(param_3);
        }
        param_3[1] = &UNK_109896774;
        param_3[2] = &PTR_DAT_110b17068;
        *param_3 = uStack_60;
        param_3[4] = uStack_58;
        param_3[3] = uStack_60;
      }
      *(undefined1 *)(param_3 + 9) = 1;
    }
    if ((*(byte *)(param_4 + 9) & 1) == 0) {
      (*(code *)param_1[2])(&uStack_60);
      if (*(char *)(param_4 + 9) == '\x01') {
        FUN_109d1ad04(param_4);
      }
      param_4[1] = FUN_109d1ad58;
      param_4[2] = &PTR_FUN_110b3ec78;
      *param_4 = uStack_60;
      param_4[4] = uStack_58;
      param_4[3] = uStack_60;
      *(undefined1 *)(param_4 + 9) = 1;
    }
    if ((*(byte *)(param_2 + 9) & 1) == 0) {
      func_0x00010945fd6c();
    }
    else {
      uRam00000001137e1c78 = *param_2;
      ppuRam00000001137e1c88 = &PTR_DAT_110ae9180;
      uRam00000001137e1c80 = param_2[1];
      plVar3 = param_2 + 2;
      (**(code **)(*plVar3 + 0x10))(0x1137e1c88,plVar3);
      param_2[1] = &UNK_1053a6a3c;
      (**(code **)*plVar3)(plVar3);
      *plVar3 = (long)&PTR_DAT_110ae9180;
      if ((*(byte *)(param_3 + 9) & 1) == 0) {
        func_0x00010945fd6c();
      }
      else {
        uRam00000001137e1cc0 = *param_3;
        ppuRam00000001137e1cd0 = &PTR_DAT_110ae9180;
        uRam00000001137e1cc8 = param_3[1];
        plVar3 = param_3 + 2;
        (**(code **)(*plVar3 + 0x10))(0x1137e1cd0,plVar3);
        param_3[1] = &UNK_1053a6a3c;
        (**(code **)*plVar3)(plVar3);
        *plVar3 = (long)&PTR_DAT_110ae9180;
        if ((*(byte *)(param_4 + 9) & 1) != 0) {
          uRam00000001137e1d08 = *param_4;
          ppuRam00000001137e1d18 = &PTR_DAT_110ae9180;
          uRam00000001137e1d10 = param_4[1];
          plVar3 = param_4 + 2;
          (**(code **)(*plVar3 + 0x10))(0x1137e1d18,plVar3);
          param_4[1] = &UNK_1053a6a3c;
          (**(code **)*plVar3)(plVar3);
          *plVar3 = (long)&PTR_DAT_110ae9180;
          lRam00000001137e1d50 = 0x1137e1c78;
          __ZNSt3__115recursive_mutex6unlockEv(0x1137e1d58);
          return 0x1137e1c78;
        }
        func_0x00010945fd6c();
      }
    }
  }
  else {
    puVar2 = (undefined8 *)0x10;
    ___cxa_allocate_exception();
    __ZNSt11logic_errorC2EPKc();
    *puVar2 = &PTR_FUN_110b3eca0;
    ___cxa_throw(puVar2,&PTR_DAT_110b3ec60,FUN_109d1ad00);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109d1aca0);
  (*pcVar1)();
}



/* Entry: 109d1ad00; end: 109d1ad03;  */

void FUN_109d1ad00(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcbc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt11logic_errorD2Ev_110346150)();
  return;
}



/* Entry: 109d1ad04; end: 109d1ad57;  */

long FUN_109d1ad04(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  
  plVar2 = (long *)(param_1 + 0x10);
  puVar1 = (undefined8 *)*plVar2;
  if (*(char *)(puVar1 + 1) == '\x01') {
    (**(code **)(param_1 + 8))();
    puVar1 = (undefined8 *)*plVar2;
  }
  (*(code *)*puVar1)(plVar2);
  return param_1;
}



/* Entry: 109d1ad58; end: 109d1ad5b;  */

void FUN_109d1ad58(void)

{
  return;
}



/* Entry: 109d1ad5c; end: 109d1adb3;  */

void FUN_109d1ad5c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 109d1adb4; end: 109d1adcf;  */

void FUN_109d1adb4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110b3ec78;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  return;
}



/* Entry: 109d1add0; end: 109d1ae0f;  */

void FUN_109d1add0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_21;
  
  FUN_109d1d354();
  FUN_109d1d990(&uStack_40,&uStack_21,param_2);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  return;
}



/* Entry: 109d1ae10; end: 109d1aeb7;  */

void FUN_109d1ae10(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  func_0x000109d1d478();
  puVar1 = (undefined8 *)0x48;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = puVar1 + 3;
  *puVar1 = &PTR_DAT_110b3f038;
  func_0x000109d1d834(puVar2,param_2);
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return;
}



/* Entry: 109d1aeb8; end: 109d1aecb;  */

void FUN_109d1aeb8(void)

{
  __ZNSt11logic_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d1aecc; end: 109d1af13;  */

void FUN_109d1aecc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  _objc_autoreleasePoolPush();
  if ((code *)*param_1 == (code *)0x0) {
    (**(code **)param_1[1])();
  }
  else {
    (*(code *)*param_1)();
  }
  _objc_autoreleasePoolPop(puVar1);
  return;
}



/* Entry: 109d1af14; end: 109d1af87;  */

void FUN_109d1af14(long param_1)

{
  long lStack_30;
  char cStack_28;
  
  cStack_28 = '\x01';
  lStack_30 = param_1;
  __ZNSt3__15mutex4lockEv();
  if (*(long *)(param_1 + 0x70) != *(long *)(param_1 + 0x78)) {
    do {
      __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(param_1 + 0x40,&lStack_30);
    } while (*(long *)(param_1 + 0x70) != *(long *)(param_1 + 0x78));
    param_1 = lStack_30;
    if (cStack_28 != '\x01') {
      return;
    }
  }
  __ZNSt3__15mutex6unlockEv(param_1);
  return;
}



/* Entry: 109d1af88; end: 109d1b00f;  */

void FUN_109d1af88(long *param_1,code *UNRECOVERED_JUMPTABLE,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined **ppuStack_28;
  
  do {
    lVar3 = *param_1;
    if (lVar3 == 0) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        ppuStack_28 = &PTR_PTR_1132fed68;
        pcStack_38 = UNRECOVERED_JUMPTABLE;
        uStack_30 = param_3;
        func_0x000109d1b588(param_1 + 1,&pcStack_38);
        *param_1 = 0;
        return;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar3 >> 1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000109d1afdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  } while( true );
}



/* Entry: 109d1b010; end: 109d1b087;  */

void FUN_109d1b010(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)0x90;
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
  *puVar1 = &PTR_DAT_110b3ecc8;
  uStack_28 = 0;
  *param_1 = puVar1;
  param_1[1] = puVar1;
  FUN_109d1b0a0(&uStack_28);
  return;
}



/* Entry: 109d1b088; end: 109d1b09f;  */

void FUN_109d1b088(void)

{
  return;
}



/* Entry: 109d1b0a0; end: 109d1b123;  */

undefined8 * FUN_109d1b0a0(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return param_1;
}



/* Entry: 109d1b124; end: 109d1b1bb;  */

void FUN_109d1b124(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  
  if ((bRam00000001138334e0 & 1) == 0) {
    iVar5 = 0x138334e0;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      FUN_109d1b1bc();
      ___cxa_atexit(FUN_109d1b2e8,0x1138334d8,0x100000000);
      ___cxa_guard_release(0x1138334e0);
    }
  }
  lVar4 = lRam00000001138334d8;
  *param_1 = lRam00000001138334d8;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 109d1b1bc; end: 109d1b2e7;  */

void FUN_109d1b1bc(void)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plStack_38;
  
  plVar6 = (long *)0xa0;
  __Znwm();
  plVar9 = plVar6 + 1;
  plVar6[2] = 0;
  *plVar9 = 0x200000006;
  *(undefined2 *)(plVar6 + 3) = 4;
  plVar1 = plVar6 + 2;
  plVar6[5] = 0;
  plVar6[4] = 0;
  plVar6[7] = 0;
  plVar6[6] = 0;
  plVar6[9] = 0;
  plVar6[8] = 0;
  plVar6[0xb] = 0;
  plVar6[10] = 0;
  plVar6[0xd] = 0;
  plVar6[0xc] = 0;
  plVar6[0xf] = 0;
  plVar6[0xe] = 0;
  plVar6[0x10] = 0;
  plVar6[0x11] = (long)(plVar6 + 3);
  plVar6[0x12] = 0;
  *plVar6 = (long)&PTR_DAT_110ae91c0;
  *(undefined2 *)(plVar6 + 0x13) = 0;
  do {
    lVar8 = *plVar1;
    plVar5 = plVar6;
    plStack_38 = plVar6;
    if (lVar8 == 0) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = 2;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        FUN_109d1b4dc();
        goto LAB_109d1b268;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar8 >> 1 & 1) != 0) {
LAB_109d1b268:
      do {
        plRam00000001138334d8 = plVar5;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = *plVar9 + 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
        plVar5 = plRam00000001138334d8;
      } while (cVar3 != '\0');
      if (plStack_38 != (long *)0x0) {
        func_0x0001092b4274(&plStack_38);
      }
      if (plVar6 != (long *)0x0) {
        puVar2 = (ulong *)(plVar6 + 1);
        do {
          uVar7 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar7 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar7 & 0x1fffffffc) == 4) {
          do {
            uVar7 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar7 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar7 - 1 == 0) {
            (**(code **)(*plVar6 + 8))();
          }
        }
      }
      return;
    }
  } while( true );
}



/* Entry: 109d1b2e8; end: 109d1b3c3;  */

long * FUN_109d1b2e8(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = (long *)*param_1;
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
  return param_1;
}



/* Entry: 109d1b3c4; end: 109d1b45b;  */

void FUN_109d1b3c4(long param_1,int param_2)

{
  undefined **appuStack_48 [2];
  undefined1 auStack_38 [8];
  undefined **appuStack_30 [2];
  
  if ((param_2 == 1) && (((uint)*(undefined8 *)(param_1 + 0x10) >> 1 & 1) == 0)) {
    __ZNSt13runtime_errorC2EPKc(appuStack_48,&UNK_10f5ac80a);
    appuStack_48[0] = &PTR_FUN_110b3ed28;
    __ZNSt13runtime_errorC2ERKS_(appuStack_30,appuStack_48);
    appuStack_30[0] = &PTR_FUN_110b3ed28;
    FUN_109d1b474(auStack_38,appuStack_30);
    __ZNSt13runtime_errorD2Ev(appuStack_30);
    func_0x000109d1b350(param_1,auStack_38);
    __ZNSt13exception_ptrD1Ev(auStack_38);
    __ZNSt13runtime_errorD2Ev(appuStack_48);
  }
  return;
}



/* Entry: 109d1b45c; end: 109d1b45f;  */

void FUN_109d1b45c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 109d1b460; end: 109d1b473;  */

void FUN_109d1b460(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d1b474; end: 109d1b4db;  */

void FUN_109d1b474(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  __ZNSt13runtime_errorC2ERKS_();
  *puVar2 = &PTR_FUN_110b3ed28;
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109d1b4bc);
  (*pcVar1)();
}



/* Entry: 109d1b4dc; end: 109d1b623;  */

void FUN_109d1b4dc(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
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
  undefined8 uStack_40;
  
  uStack_78 = param_1[9];
  uStack_80 = param_1[8];
  uStack_68 = param_1[0xb];
  uStack_70 = param_1[10];
  uStack_58 = param_1[0xd];
  uStack_60 = param_1[0xc];
  uStack_c0 = *param_1;
  uStack_b8 = param_1[1];
  uStack_a8 = param_1[3];
  uStack_b0 = param_1[2];
  param_1[0xe] = param_1;
  *(undefined1 *)((long)param_1 + 1) = 0;
  uStack_98 = param_1[5];
  uStack_a0 = param_1[4];
  uStack_88 = param_1[7];
  uStack_90 = param_1[6];
  puVar1 = &uStack_c0;
  do {
    uVar2 = (ulong)*(byte *)((long)puVar1 + 1);
    if (uVar2 != 0) {
      puVar4 = (undefined8 *)((long)puVar1 + 0x20);
      do {
        uStack_48 = puVar4[-1];
        uStack_50 = puVar4[-2];
        uStack_40 = *puVar4;
        (*(code *)**(undefined8 **)*puVar4)((undefined8 *)*puVar4,&uStack_50);
        uVar2 = uVar2 - 1;
        puVar4 = puVar4 + 3;
      } while (uVar2 != 0);
    }
    puVar3 = *(undefined1 **)((long)puVar1 + 8);
    if (puVar1 != &uStack_c0) {
      _free(puVar1);
    }
    puVar1 = (undefined8 *)puVar3;
  } while (puVar3 != (undefined1 *)0x0);
  return;
}



/* Entry: 109d1b624; end: 109d1b6f3;  */

void FUN_109d1b624(long param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  lVar2 = param_1;
  lVar3 = param_1;
  do {
    uVar5 = (ulong)*(byte *)(lVar3 + 1);
    if (uVar5 != 0) {
      plVar4 = (long *)(lVar3 + 0x10);
      do {
        if (((*plVar4 == *param_2) && (plVar4[1] == param_2[1])) && (plVar4[2] == param_2[2])) {
          lVar3 = *(long *)(param_1 + 0x70);
          bVar1 = *(char *)(lVar3 + 1) - 1;
          *(byte *)(lVar3 + 1) = bVar1;
          lVar3 = lVar3 + (ulong)bVar1 * 0x18;
          lVar7 = *(long *)(lVar3 + 0x18);
          lVar6 = *(long *)(lVar3 + 0x10);
          plVar4[2] = *(long *)(lVar3 + 0x20);
          plVar4[1] = lVar7;
          *plVar4 = lVar6;
          if ((bVar1 == 0) && (*(long *)(param_1 + 0x70) != param_1)) {
            do {
              lVar3 = lVar2;
              lVar2 = *(long *)(lVar3 + 8);
            } while (*(long *)(lVar3 + 8) != *(long *)(param_1 + 0x70));
            *(undefined8 *)(lVar3 + 8) = 0;
            _free();
            *(long *)(param_1 + 0x70) = lVar3;
          }
          return;
        }
        plVar4 = plVar4 + 3;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    lVar2 = lVar3;
    lVar3 = *(long *)(lVar3 + 8);
  } while( true );
}



/* Entry: 109d1b6f4; end: 109d1b72b;  */

undefined4 * FUN_109d1b6f4(undefined4 *param_1)

{
  _semaphore_destroy(*(undefined4 *)PTR__mach_task_self__11034c5c8,*param_1);
  return param_1;
}



/* Entry: 109d1b72c; end: 109d1b907;  */

byte ******
FUN_109d1b72c(byte ******param_1,long *param_2,byte *****param_3,undefined4 *param_4,
             byte *****param_5,undefined8 *param_6,byte *****param_7)

{
  int iVar1;
  byte ******ppppppbVar2;
  byte ******ppppppbVar3;
  byte ******ppppppbVar4;
  byte *****pppppbVar5;
  byte bVar6;
  byte *****pppppbVar7;
  byte ******unaff_x28;
  byte *****pppppbStack_128;
  byte ****ppppbStack_120;
  undefined8 uStack_118;
  byte *****pppppbStack_110;
  byte ****ppppbStack_108;
  byte ****ppppbStack_100;
  byte ****ppppbStack_f0;
  undefined1 *puStack_e8;
  byte ****ppppbStack_e0;
  byte ****ppppbStack_d8;
  byte *****pppppbStack_d0;
  byte *****pppppbStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined4 auStack_b0 [2];
  byte ***pppbStack_a8;
  undefined8 *apuStack_a0 [7];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppbVar7 = param_5 + 1;
  if (((ulong)(*pppppbVar7)[1] & 1) == 0) {
    bVar6 = *(byte *)(param_6[1] + 8) ^ 1;
  }
  else {
    bVar6 = 0;
  }
  *(byte *)param_1 = bVar6 & 1;
  param_1[1] = param_7;
  pppppbVar5 = param_3;
  if (param_3 < (byte *****)0x7ffffffffffffff8) {
    unaff_x28 = param_1 + 2;
    if (param_3 < (byte *****)0x17) {
      *(byte *)((long)param_1 + 0x27) = (byte)param_3;
      ppppppbVar2 = unaff_x28;
      if (param_3 != (byte *****)0x0) goto LAB_109d1b7f4;
    }
    else {
      ppppppbVar3 = (byte ******)0x19;
      if (((ulong)param_3 | 7) != 0x17) {
        ppppppbVar3 = (byte ******)(((ulong)param_3 | 7) + 1);
      }
      ppppppbVar2 = ppppppbVar3;
      __Znwm();
      param_1[3] = param_3;
      param_1[4] = (byte *****)((ulong)ppppppbVar3 | 0x8000000000000000);
      param_1[2] = (byte *****)ppppppbVar2;
LAB_109d1b7f4:
      _memmove(ppppppbVar2,param_2);
    }
    *(byte *)((long)ppppppbVar2 + (long)param_3) = 0;
    auStack_b0[0] = SUB84(param_4,0);
    pppbStack_a8 = (byte ***)*param_5;
    (*(code *)param_5[1][2])(apuStack_a0,pppppbVar7);
    param_1[5] = (byte *****)FUN_109d1c2e8;
    param_1[6] = (byte *****)&PTR_FUN_110b3edc0;
    param_5 = (byte *****)0x48;
    __Znwm();
    *(undefined4 *)param_5 = auStack_b0[0];
    param_5[1] = (byte ****)pppbStack_a8;
    (*(code *)apuStack_a0[0][2])(param_5 + 2,apuStack_a0);
    param_1[7] = param_5;
    (*(code *)*apuStack_a0[0])(apuStack_a0);
    param_1[0xd] = (byte *****)*param_6;
    param_2 = param_6 + 1;
    ppppppbVar3 = param_1 + 0xe;
    (**(code **)(*param_2 + 0x10))(ppppppbVar3,param_2);
    param_4 = auStack_b0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return param_1;
    }
  }
  else {
    ppppppbVar3 = param_1;
    func_0x000104c4f6b8();
  }
  ___stack_chk_fail();
  (*(code *)*apuStack_a0[0])((undefined1 *)((long)param_4 + 0x10));
  if ((char)*(byte *)((long)param_1 + 0x27) < '\0') {
    __ZdlPv(*unaff_x28);
  }
  ppppppbVar2 = ppppppbVar3;
  __Unwind_Resume();
  pcStack_b8 = FUN_109d1b908;
  ppppbStack_f0 = (byte ****)param_3;
  puStack_e8 = (undefined1 *)param_4;
  ppppbStack_e0 = (byte ****)pppppbVar7;
  ppppbStack_d8 = (byte ****)param_5;
  pppppbStack_d0 = (byte *****)ppppppbVar3;
  pppppbStack_c8 = (byte *****)param_1;
  puStack_c0 = &stack0xfffffffffffffff0;
  if ((byte *****)0x7ffffffffffffff7 < pppppbVar5) {
    func_0x000104c4f6b8();
    func_0x000104bd46a0();
    if (uStack_118._7_1_ < '\0') {
      __ZdlPv(pppppbStack_128);
    }
    __Unwind_Resume(ppppppbVar2);
    if ((bRam0000000113833510 & 1) == 0) {
      iVar1 = 0x13833510;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        FUN_109d1c1f4();
        ppppppbRam0000000113833508 = (byte ******)0x1138334e8;
        ___cxa_guard_release(0x113833510);
      }
    }
    return ppppppbRam0000000113833508;
  }
  if (pppppbVar5 < (byte *****)0x17) {
    uStack_118 = CONCAT17((char)pppppbVar5,(undefined7)uStack_118);
    ppppppbVar4 = &pppppbStack_128;
    if (pppppbVar5 == (byte *****)0x0) goto LAB_109d1b98c;
  }
  else {
    ppppppbVar3 = (byte ******)0x19;
    if (((ulong)pppppbVar5 | 7) != 0x17) {
      ppppppbVar3 = (byte ******)(((ulong)pppppbVar5 | 7) + 1);
    }
    ppppppbVar4 = ppppppbVar3;
    __Znwm();
    uStack_118 = (ulong)ppppppbVar3 | 0x8000000000000000;
    pppppbStack_128 = (byte *****)ppppppbVar4;
    ppppbStack_120 = (byte ****)pppppbVar5;
  }
  _memmove(ppppppbVar4,param_2,pppppbVar5);
LAB_109d1b98c:
  *(byte *)((long)ppppppbVar4 + (long)pppppbVar5) = 0;
  pppppbVar7 = ppppppbVar2[3];
  ppppppbVar3 = (byte ******)ppppppbVar2[2];
  if (-1 < (char)*(byte *)((long)ppppppbVar2 + 0x27)) {
    pppppbVar7 = (byte *****)(ulong)*(byte *)((long)ppppppbVar2 + 0x27);
    ppppppbVar3 = ppppppbVar2 + 2;
  }
  ppppppbVar4 = &pppppbStack_128;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (ppppppbVar4,0,ppppppbVar3,pppppbVar7);
  ppppbStack_108 = (byte ****)ppppppbVar4[1];
  pppppbStack_110 = *ppppppbVar4;
  ppppbStack_100 = (byte ****)ppppppbVar4[2];
  ppppppbVar4[1] = (byte *****)0x0;
  ppppppbVar4[2] = (byte *****)0x0;
  *ppppppbVar4 = (byte *****)0x0;
  ppppppbVar3 = (byte ******)pppppbStack_110;
  if (-1 < (long)ppppbStack_100) {
    ppppppbVar3 = &pppppbStack_110;
  }
  _pthread_setname_np(ppppppbVar3);
  if ((long)ppppbStack_100 < 0) {
    ppppppbVar3 = (byte ******)pppppbStack_110;
    __ZdlPv(pppppbStack_110);
  }
  if ((long)uStack_118 < 0) {
    ppppppbVar3 = (byte ******)pppppbStack_128;
    __ZdlPv(pppppbStack_128);
  }
  if (*(char *)(ppppppbVar2[6] + 1) == '\x01') {
    ppppppbVar3 = ppppppbVar2 + 5;
    (*(code *)*ppppppbVar3)(ppppppbVar3);
  }
  return ppppppbVar3;
}



/* Entry: 109d1b908; end: 109d1ba5b;  */

undefined8 *** FUN_109d1b908(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  undefined8 **ppuStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 **ppuStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  
  if (0x7ffffffffffffff7 < param_3) {
    func_0x000104c4f6b8();
    func_0x000104bd46a0();
    if (uStack_68._7_1_ < '\0') {
      __ZdlPv(ppuStack_78);
    }
    __Unwind_Resume(param_1);
    if ((bRam0000000113833510 & 1) == 0) {
      iVar3 = 0x13833510;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        FUN_109d1c1f4();
        pppuRam0000000113833508 = (undefined8 ***)0x1138334e8;
        ___cxa_guard_release(0x113833510);
      }
    }
    return pppuRam0000000113833508;
  }
  if (param_3 < 0x17) {
    uStack_68 = CONCAT17((char)param_3,(undefined7)uStack_68);
    pppuVar4 = &ppuStack_78;
    if (param_3 == 0) goto LAB_109d1b98c;
  }
  else {
    pppuVar5 = (undefined8 ***)0x19;
    if ((param_3 | 7) != 0x17) {
      pppuVar5 = (undefined8 ***)((param_3 | 7) + 1);
    }
    pppuVar4 = pppuVar5;
    __Znwm();
    uStack_68 = (ulong)pppuVar5 | 0x8000000000000000;
    ppuStack_78 = pppuVar4;
    uStack_70 = param_3;
  }
  _memmove(pppuVar4,param_2,param_3);
LAB_109d1b98c:
  *(undefined1 *)((long)pppuVar4 + param_3) = 0;
  uVar1 = *(ulong *)(param_1 + 0x18);
  lVar2 = *(long *)(param_1 + 0x10);
  if (-1 < (char)*(byte *)(param_1 + 0x27)) {
    uVar1 = (ulong)*(byte *)(param_1 + 0x27);
    lVar2 = param_1 + 0x10;
  }
  pppuVar5 = &ppuStack_78;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (pppuVar5,0,lVar2,uVar1);
  puStack_58 = pppuVar5[1];
  ppuStack_60 = *pppuVar5;
  puStack_50 = pppuVar5[2];
  pppuVar5[1] = (undefined8 **)0x0;
  pppuVar5[2] = (undefined8 **)0x0;
  *pppuVar5 = (undefined8 **)0x0;
  pppuVar5 = (undefined8 ***)ppuStack_60;
  if (-1 < (long)puStack_50) {
    pppuVar5 = &ppuStack_60;
  }
  _pthread_setname_np(pppuVar5);
  if ((long)puStack_50 < 0) {
    pppuVar5 = (undefined8 ***)ppuStack_60;
    __ZdlPv(ppuStack_60);
  }
  if ((long)uStack_68 < 0) {
    pppuVar5 = (undefined8 ***)ppuStack_78;
    __ZdlPv(ppuStack_78);
  }
  if (*(char *)(*(long *)(param_1 + 0x30) + 8) == '\x01') {
    pppuVar5 = (undefined8 ***)(param_1 + 0x28);
    (*(code *)*pppuVar5)(pppuVar5);
  }
  return pppuVar5;
}



/* Entry: 109d1ba5c; end: 109d1bad3;  */

undefined8 FUN_109d1ba5c(void)

{
  int iVar1;
  
  if ((bRam0000000113833510 & 1) == 0) {
    iVar1 = 0x13833510;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_109d1c1f4();
      uRam0000000113833508 = 0x1138334e8;
      ___cxa_guard_release(0x113833510);
    }
  }
  return uRam0000000113833508;
}



/* Entry: 109d1bad4; end: 109d1bb73;  */

long * FUN_109d1bad4(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  *puVar1 = *param_2;
  (**(code **)(param_2[1] + 0x10))(puVar1 + 1,param_2 + 1);
  *param_1 = (long)puVar1;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_109d1bb74(param_1,param_3);
  *(undefined1 *)(param_1 + 2) = 1;
  return param_1;
}



/* Entry: 109d1bb74; end: 109d1bf83;  */

void FUN_109d1bb74(undefined8 *param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puStack_100;
  ulong uStack_f8;
  byte bStack_e9;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined8 auStack_b8 [3];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  _pthread_attr_init(&uStack_80);
  if (param_2 == 0) {
LAB_109d1bbd0:
    puVar3 = param_1 + 1;
    _pthread_create(puVar3,&uStack_80,FUN_109d1c270,*param_1);
    if ((int)puVar3 != 0) {
      puVar2 = (undefined8 *)0x10;
      ___cxa_allocate_exception();
      __ZNSt3__19to_stringEi(auStack_e8,puVar3);
      func_0x00010928a5e0(auStack_d0,&UNK_10f5ac8ab,auStack_e8);
      func_0x000109259240(auStack_b8,auStack_d0,&UNK_10f5ac89b);
      __ZNSt3__19to_stringEm(&puStack_100,param_2);
      if (-1 < (char)bStack_e9) {
        uStack_f8 = (ulong)bStack_e9;
        puStack_100 = (undefined1 *)&puStack_100;
      }
      puVar3 = auStack_b8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar3,puStack_100,uStack_f8);
      uStack_98 = puVar3[1];
      uStack_a0 = *puVar3;
      uStack_90 = puVar3[2];
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                (puVar2,&uStack_a0);
      *puVar2 = &PTR_FUN_110b3ed80;
      ___cxa_throw(puVar2,&PTR_DAT_110b3ed58,FUN_109d1c2b8);
      goto LAB_109d1be74;
    }
    _pthread_attr_destroy(&uStack_80);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
    ___stack_chk_fail();
  }
  else if (param_2 >> 0xe != 0) {
    puVar3 = &uStack_80;
    _pthread_attr_setstacksize(puVar3,param_2);
    if ((int)puVar3 != 0) {
      puVar2 = (undefined8 *)0x10;
      ___cxa_allocate_exception();
      __ZNSt3__19to_stringEi(auStack_e8,puVar3);
      func_0x00010928a5e0(auStack_d0,&UNK_10f5ac86e,auStack_e8);
      func_0x000109259240(auStack_b8,auStack_d0,&UNK_10f5ac89b);
      __ZNSt3__19to_stringEm(&puStack_100,param_2);
      if (-1 < (char)bStack_e9) {
        uStack_f8 = (ulong)bStack_e9;
        puStack_100 = (undefined1 *)&puStack_100;
      }
      puVar3 = auStack_b8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar3,puStack_100,uStack_f8);
      uStack_98 = puVar3[1];
      uStack_a0 = *puVar3;
      uStack_90 = puVar3[2];
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                (puVar2,&uStack_a0);
      *puVar2 = &PTR_FUN_110b3ed80;
      ___cxa_throw(puVar2,&PTR_DAT_110b3ed58,FUN_109d1c2b8);
      goto LAB_109d1be74;
    }
    goto LAB_109d1bbd0;
  }
  puVar3 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  __ZNSt3__19to_stringEm(auStack_e8,param_2);
  func_0x00010928a5e0(auStack_d0,&UNK_10f5ac832,auStack_e8);
  func_0x000109259240(auStack_b8,auStack_d0,&UNK_10f5ac848);
  __ZNSt3__19to_stringEm(&puStack_100,0x4000);
  if (-1 < (char)bStack_e9) {
    uStack_f8 = (ulong)bStack_e9;
    puStack_100 = (undefined1 *)&puStack_100;
  }
  puVar2 = auStack_b8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar2,puStack_100,uStack_f8);
  uStack_98 = puVar2[1];
  uStack_a0 = *puVar2;
  uStack_90 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
            (puVar3,&uStack_a0);
  *puVar3 = &PTR_FUN_110b3ed80;
  ___cxa_throw(puVar3,&PTR_DAT_110b3ed58,FUN_109d1c2b8);
LAB_109d1be74:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109d1be78);
  (*pcVar1)();
}



/* Entry: 109d1bf84; end: 109d1bfdf;  */

long * FUN_109d1bf84(long *param_1)

{
  long lVar1;
  
  if ((char)param_1[2] == '\x01') {
    FUN_109d1bfe0(param_1);
  }
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8))();
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 109d1bfe0; end: 109d1c1c3;  */

void FUN_109d1bfe0(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puStack_1c0;
  ulong uStack_1b8;
  byte bStack_1a9;
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [24];
  undefined8 auStack_178 [3];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [256];
  undefined8 uStack_40;
  undefined1 uStack_31;
  
  uStack_40 = 0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  _pthread_join(uVar2,&uStack_40);
  if ((int)uVar2 != 0) {
    func_0x00010926db08(auStack_148);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPKv(auStack_148,uStack_40);
    puVar3 = (undefined8 *)0x10;
    ___cxa_allocate_exception();
    __ZNSt3__19to_stringEi(auStack_1a8,uVar2);
    func_0x00010928a5e0(auStack_190,&UNK_10f5ac8cd,auStack_1a8);
    func_0x000109259240(auStack_178,auStack_190,&UNK_10f5ac8e7);
    func_0x00010926dc5c(&puStack_1c0,auStack_140,&uStack_31);
    if (-1 < (char)bStack_1a9) {
      uStack_1b8 = (ulong)bStack_1a9;
      puStack_1c0 = (undefined1 *)&puStack_1c0;
    }
    puVar4 = auStack_178;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar4,puStack_1c0,uStack_1b8);
    uStack_158 = puVar4[1];
    uStack_160 = *puVar4;
    uStack_150 = puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
              (puVar3,&uStack_160);
    *puVar3 = &PTR_FUN_110b3ed80;
    ___cxa_throw(puVar3,&PTR_DAT_110b3ed58,FUN_109d1c2b8);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x109d1c108);
    (*pcVar1)();
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 109d1c1c4; end: 109d1c1f3;  */

undefined4 FUN_109d1c1c4(void)

{
  undefined4 uStack_1c;
  
  _pthread_self();
  _pthread_getschedparam();
  return uStack_1c;
}



/* Entry: 109d1c1f4; end: 109d1c26f;  */

undefined8 FUN_109d1c1f4(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = 1;
  _sched_get_priority_min();
  iVar2 = 1;
  _sched_get_priority_max();
  lVar3 = 0;
  do {
    *(int *)(lVar3 + 0x1138334e8) =
         (*(int *)(&UNK_10e0410c8 + lVar3) * (iVar2 - iVar1)) / 100 + iVar1;
    lVar3 = lVar3 + 4;
  } while (lVar3 != 0x1c);
  return 0x1138334e8;
}



/* Entry: 109d1c270; end: 109d1c2b7;  */

undefined8 FUN_109d1c270(undefined8 *param_1)

{
  (*(code *)*param_1)();
  param_1 = param_1 + 1;
  (**(code **)*param_1)(param_1);
  *param_1 = &PTR_DAT_110ae9180;
  return 0;
}



/* Entry: 109d1c2b8; end: 109d1c2bb;  */

void FUN_109d1c2b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 109d1c2bc; end: 109d1c2cf;  */

void FUN_109d1c2bc(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d1c2d0; end: 109d1c2d3;  */

void FUN_109d1c2d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 109d1c2d4; end: 109d1c2e7;  */

void FUN_109d1c2d4(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d1c2e8; end: 109d1c353;  */

void FUN_109d1c2e8(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  _pthread_self();
  _pthread_setschedparam();
  if (*(char *)(*(long *)(lVar1 + 0x10) + 8) == '\x01') {
    puVar2 = (undefined8 *)(lVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000109d1c33c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(puVar2);
    return;
  }
  return;
}



/* Entry: 109d1c354; end: 109d1c393;  */

void FUN_109d1c354(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 109d1c394; end: 109d1c3ab;  */

void FUN_109d1c394(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 109d1c3ac; end: 109d1c6a7;  */

int * FUN_109d1c3ac(int *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  undefined8 *puVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined **ppuVar9;
  ulong uVar10;
  code **unaff_x26;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iStack_ac;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  int *piStack_98;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined ***)param_1 = &PTR_FUN_110b3ede8;
  *(int **)(param_1 + 2) = param_1;
  *(int **)(param_1 + 4) = param_1;
  *(undefined8 *)(param_1 + 6) = param_3;
  piVar6 = param_1 + 0xc;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  piVar6[0] = 0;
  piVar6[1] = 0;
  *(undefined8 *)(param_1 + 8) = param_4;
  *(undefined8 *)(param_1 + 10) = param_5;
  piVar7 = param_1 + 0x18;
  piVar7[0] = 0x32aaaba7;
  piVar7[1] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  piVar8 = param_1 + 0x28;
  piVar8[0] = 0x3cb0b1bb;
  piVar8[1] = 0;
  piVar1 = param_1 + 0x3e;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined8 *)((long)param_1 + 0xc9) = 0;
  *(undefined8 *)((long)param_1 + 0xc1) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(int **)(param_1 + 0x3e) = piVar1;
  *(int **)(param_1 + 0x40) = piVar1;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  ppuVar9 = (undefined **)(param_1 + 0x46);
  puVar11 = (undefined *)*param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  *ppuVar9 = puVar11;
  uVar13 = param_2[3];
  uVar12 = param_2[2];
  *(undefined8 *)(param_1 + 0x4e) = param_2[4];
  *(undefined8 *)(param_1 + 0x4c) = uVar13;
  *(undefined8 *)(param_1 + 0x4a) = uVar12;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[2] = 0;
  *(undefined8 *)(param_1 + 0x50) = param_2[5];
  (**(code **)(param_2[6] + 0x10))(param_1 + 0x52);
  *(undefined8 *)(param_1 + 0x60) = param_2[0xd];
  (**(code **)(param_2[0xe] + 0x10))(param_1 + 0x62,param_2 + 0xe);
  if (*(ulong *)(param_1 + 8) < *(ulong *)(param_1 + 6)) {
    puVar5 = (undefined8 *)0x10;
    ___cxa_allocate_exception();
    __ZNSt11logic_errorC2EPKc();
  }
  else if (*(ulong *)(param_1 + 8) == 0) {
    puVar5 = (undefined8 *)0x10;
    ___cxa_allocate_exception();
    __ZNSt11logic_errorC2EPKc();
  }
  else {
    if (0 < *(long *)(param_1 + 10)) {
      *(int **)(param_1 + 0x44) = piVar1;
      _semaphore_create(*(undefined4 *)PTR__mach_task_self__11034c5c8,&iStack_ac,0,0);
      if (*(long *)(param_1 + 6) != 0) {
        uVar10 = 0;
        unaff_x26 = &pcStack_a8;
        ppuVar9 = &PTR_DAT_110b3ee78;
        do {
          pcStack_a8 = FUN_109d1ccbc;
          ppuStack_a0 = &PTR_DAT_110b3ee78;
          piStack_98 = &iStack_ac;
          FUN_109d1c6ac(param_1,&pcStack_a8,0);
          (*(code *)*ppuStack_a0)(&ppuStack_a0);
          uVar10 = uVar10 + 1;
        } while (uVar10 < *(ulong *)(param_1 + 6));
        if (*(ulong *)(param_1 + 6) != 0) {
          ppuVar9 = (undefined **)0x0;
          do {
            do {
              iVar3 = iStack_ac;
              _semaphore_wait();
            } while (iVar3 == 0xe);
            ppuVar9 = (undefined **)((long)ppuVar9 + 1);
          } while (ppuVar9 < *(undefined ***)(param_1 + 6));
        }
      }
      piVar4 = &iStack_ac;
      FUN_109d1b6f4(piVar4);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
        return param_1;
      }
      ___stack_chk_fail();
      ___cxa_free_exception(unaff_x26);
      FUN_109d1c850(ppuVar9);
      FUN_109d1cc50(piVar1);
      __ZNSt13exception_ptrD1Ev(param_1 + 0x3c);
      __ZNSt3__118condition_variableD1Ev(piVar8);
      __ZNSt3__15mutexD1Ev(piVar7);
      FUN_109d19938(piVar6);
      __Unwind_Resume(piVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbcbc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt11logic_errorD2Ev_110346150)();
      return piVar4;
    }
    puVar5 = (undefined8 *)0x10;
    ___cxa_allocate_exception();
    __ZNSt11logic_errorC2EPKc();
  }
  *puVar5 = &PTR_FUN_110b3ee60;
  ___cxa_throw(puVar5,&PTR_DAT_110b3ee20,FUN_109d1c6a8);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109d1c634);
  (*pcVar2)();
}



/* Entry: 109d1c6a8; end: 109d1c6ab;  */

void FUN_109d1c6a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcbc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt11logic_errorD2Ev_110346150)();
  return;
}



/* Entry: 109d1c6ac; end: 109d1c84f;  */

/* WARNING: Removing unreachable block (ram,0x000109d1c888) */

undefined8 ** FUN_109d1c6ac(long param_1,long *param_2,undefined1 param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  undefined8 **ppuVar5;
  int iVar6;
  code **ppcVar7;
  long lVar8;
  long lVar9;
  undefined8 *apuStack_c8 [7];
  long lStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  long *plStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *(long *)(param_1 + 0xd8);
  *(long *)(param_1 + 0xd8) = lVar8 + 1;
  plVar3 = (long *)(param_1 + 0xe0);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = *plVar3 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  lVar9 = *param_2;
  (**(code **)(param_2[1] + 0x10))(apuStack_c8);
  plVar3 = (long *)0x28;
  lStack_90 = param_1;
  __Znwm();
  *plVar3 = 0;
  plVar3[1] = 0;
  pcStack_88 = FUN_109d1cd24;
  ppuStack_80 = &PTR_FUN_110b3eec0;
  plVar4 = (long *)0x58;
  __Znwm();
  *plVar4 = lVar8;
  *(undefined1 *)(plVar4 + 1) = param_3;
  plVar4[2] = lVar9;
  (*(code *)apuStack_c8[0][2])(plVar4 + 3,apuStack_c8);
  plVar4[10] = lStack_90;
  ppcVar7 = &pcStack_88;
  plStack_78 = plVar4;
  FUN_109d1bad4(plVar3 + 2,ppcVar7,*(undefined8 *)(param_1 + 0x120));
  iVar6 = (int)ppcVar7;
  (*(code *)*ppuStack_80)(&ppuStack_80);
  plVar4 = (long *)(param_1 + 0xf8);
  lVar8 = *plVar4;
  *plVar3 = lVar8;
  plVar3[1] = (long)plVar4;
  *(long **)(lVar8 + 8) = plVar3;
  *plVar4 = (long)plVar3;
  *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x108) + 1;
  ppuVar5 = apuStack_c8;
  (*(code *)*apuStack_c8[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    if (iVar6 == 0) {
      __Unwind_Resume(ppuVar5);
    }
    else {
      (*(code *)*ppuStack_80)(&ppuStack_80);
      __ZdlPv(plVar3);
    }
    func_0x000104bd46a0();
    (*(code *)*ppuVar5[0xe])();
    (*(code *)*ppuVar5[6])(ppuVar5 + 6);
    return ppuVar5;
  }
  return ppuVar5;
}



/* Entry: 109d1c850; end: 109d1c89f;  */

/* WARNING: Removing unreachable block (ram,0x000109d1c888) */

long FUN_109d1c850(long param_1)

{
  (*(code *)**(undefined8 **)(param_1 + 0x70))();
  (*(code *)**(undefined8 **)(param_1 + 0x30))((undefined8 *)(param_1 + 0x30));
  return param_1;
}



/* Entry: 109d1c8a0; end: 109d1c96b;  */

long FUN_109d1c8a0(long param_1)

{
  long lVar1;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x60);
  *(undefined1 *)(param_1 + 0xd0) = 1;
  __ZNSt3__15mutex6unlockEv(param_1 + 0x60);
  __ZNSt3__118condition_variable10notify_allEv(param_1 + 0xa0);
  for (lVar1 = *(long *)(param_1 + 0x100); lVar1 != param_1 + 0xf8; lVar1 = *(long *)(lVar1 + 8)) {
    FUN_109d1bfe0(lVar1 + 0x10);
  }
  (*(code *)**(undefined8 **)(param_1 + 0x188))(param_1 + 0x188);
  (*(code *)**(undefined8 **)(param_1 + 0x148))(param_1 + 0x148);
  if (*(char *)(param_1 + 0x13f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x128));
  }
  FUN_109d1cc50(param_1 + 0xf8);
  __ZNSt13exception_ptrD1Ev(param_1 + 0xf0);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0xa0);
  __ZNSt3__15mutexD1Ev(param_1 + 0x60);
  FUN_109d19938(param_1 + 0x30);
  return param_1;
}



/* Entry: 109d1c96c; end: 109d1c96f;  */

long FUN_109d1c96c(long param_1)

{
  long lVar1;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x60);
  *(undefined1 *)(param_1 + 0xd0) = 1;
  __ZNSt3__15mutex6unlockEv(param_1 + 0x60);
  __ZNSt3__118condition_variable10notify_allEv(param_1 + 0xa0);
  for (lVar1 = *(long *)(param_1 + 0x100); lVar1 != param_1 + 0xf8; lVar1 = *(long *)(lVar1 + 8)) {
    FUN_109d1bfe0(lVar1 + 0x10);
  }
  (*(code *)**(undefined8 **)(param_1 + 0x188))(param_1 + 0x188);
  (*(code *)**(undefined8 **)(param_1 + 0x148))(param_1 + 0x148);
  if (*(char *)(param_1 + 0x13f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x128));
  }
  FUN_109d1cc50(param_1 + 0xf8);
  __ZNSt13exception_ptrD1Ev(param_1 + 0xf0);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0xa0);
  __ZNSt3__15mutexD1Ev(param_1 + 0x60);
  FUN_109d19938(param_1 + 0x30);
  return param_1;
}



/* Entry: 109d1c970; end: 109d1c983;  */

void FUN_109d1c970(void)

{
  FUN_109d1c8a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d1c984; end: 109d1ca5f;  */

void FUN_109d1c984(undefined8 param_1)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  int iStack_7c;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  int *piStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _semaphore_create(*(undefined4 *)PTR__mach_task_self__11034c5c8,&iStack_7c,0,0);
  uStack_78 = 0x109d1cce4;
  ppuStack_70 = &PTR_DAT_110b3ee90;
  puVar4 = &uStack_78;
  lVar5 = 1;
  piStack_68 = &iStack_7c;
  FUN_109d1c6ac(param_1);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  do {
    iVar3 = iStack_7c;
    _semaphore_wait();
  } while (iVar3 == 0xe);
  piVar1 = &iStack_7c;
  FUN_109d1b6f4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  iVar3 = (int)puVar4;
  while (iVar3 != 0) {
    func_0x000104bd46a0();
    iVar3 = (int)puVar4;
  }
  __Unwind_Resume();
  if ((*(byte *)(piVar1 + 0x34) & 1) == 0) {
    if (*(long *)(piVar1 + 0x38) != 0) {
      return;
    }
    __ZNSt3__15mutex4lockEv(piVar1 + 0x18);
    FUN_109d1c984(piVar1);
    if ((*(long *)(piVar1 + 0x3c) == 0) || (plVar6 = (long *)(piVar1 + 0x3c), lVar5 == 0))
    goto LAB_109d1cabc;
  }
  else {
    plVar2 = (long *)(piVar1 + 0x18);
    __ZNSt3__15mutex4lockEv(plVar2);
    if (lVar5 == 0) goto LAB_109d1cabc;
    plVar6 = (long *)(piVar1 + 0x3c);
    if (*(long *)(piVar1 + 0x3c) == 0) {
      FUN_109d18690();
      plVar6 = plVar2;
    }
  }
  __ZNSt13exception_ptraSERKS_(lVar5,plVar6);
LAB_109d1cabc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(piVar1 + 0x18);
  return;
}



/* Entry: 109d1ca60; end: 109d1cb0b;  */

void FUN_109d1ca60(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  
  if ((*(byte *)(param_1 + 0xd0) & 1) == 0) {
    if (*(long *)(param_1 + 0xe0) != 0) {
      return;
    }
    __ZNSt3__15mutex4lockEv(param_1 + 0x60);
    FUN_109d1c984(param_1);
    if ((*(long *)(param_1 + 0xf0) == 0) || (plVar2 = (long *)(param_1 + 0xf0), param_3 == 0))
    goto LAB_109d1cabc;
  }
  else {
    plVar1 = (long *)(param_1 + 0x60);
    __ZNSt3__15mutex4lockEv(plVar1);
    if (param_3 == 0) goto LAB_109d1cabc;
    plVar2 = (long *)(param_1 + 0xf0);
    if (*(long *)(param_1 + 0xf0) == 0) {
      FUN_109d18690();
      plVar2 = plVar1;
    }
  }
  __ZNSt13exception_ptraSERKS_(param_3,plVar2);
LAB_109d1cabc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x60);
  return;
}



/* Entry: 109d1cb0c; end: 109d1cc3b;  */

void FUN_109d1cb0c(long param_1,long param_2)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uStack_78;
  undefined **appuStack_70 [7];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__15mutex4lockEv(param_1 + 0x60);
  if ((*(ulong *)(param_1 + 0xe0) < *(ulong *)(param_1 + 0x20)) && (*(long *)(param_1 + 0xe8) == 0))
  {
    if (*(long *)(param_1 + 0xe0) == 0) {
      FUN_109d1c984(param_1);
      if (*(long *)(param_1 + 0xf0) != 0) {
        ppuVar1 = &PTR___tlv_bootstrap_11340dd98;
        (*(code *)PTR___tlv_bootstrap_11340dd98)();
        puVar3 = *ppuVar1;
        *ppuVar1 = *(undefined **)(param_2 + 0x10);
        FUN_109d1aecc(param_2);
        *ppuVar1 = puVar3;
      }
    }
    else {
      uStack_78 = 0x109d1cd0c;
      appuStack_70[0] = &PTR_DAT_110b3eea8;
      FUN_109d1c6ac(param_1,&uStack_78,0);
      (*(code *)*appuStack_70[0])(appuStack_70);
    }
  }
  FUN_109d19860(param_1 + 0x30);
  iVar2 = (int)param_2;
  __ZNSt3__15mutex6unlockEv(param_1 + 0x60);
  __ZNSt3__118condition_variable10notify_oneEv(param_1 + 0xa0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (iVar2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  __ZNSt11logic_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d1cc3c; end: 109d1cc4f;  */

void FUN_109d1cc3c(void)

{
  __ZNSt11logic_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d1cc50; end: 109d1ccbb;  */

void FUN_109d1cc50(long *param_1)

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
      FUN_109d1bf84(plVar1 + 2);
      __ZdlPv(plVar1);
      plVar1 = plVar2;
    }
  }
  return;
}



/* Entry: 109d1ccbc; end: 109d1cd23;  */

void FUN_109d1ccbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbfa94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__semaphore_signal_11034ca98)(**(undefined4 **)(param_1 + 0x10));
  return;
}


