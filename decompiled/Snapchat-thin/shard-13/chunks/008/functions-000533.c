/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ad25df0; end: 10ad2631f;  */

void FUN_10ad25df0(long *param_1,long *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar5 = (undefined8 *)0x80;
  __Znwm();
  *puVar5 = FUN_10ad26738;
  puVar5[1] = FUN_10ad26b88;
  puVar5[0xd] = param_2;
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
  puVar5[0xb] = lVar7;
  plVar6 = (long *)(lVar7 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (((uint)*(undefined8 *)(puVar5[0xb] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0xf) = 0;
    lVar7 = puVar5[0xb];
    plVar6 = (long *)(lVar7 + 0x10);
    uStack_38 = puVar5[3];
    do {
      lVar10 = *plVar6;
      if (lVar10 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') goto LAB_10ad26190;
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar10 >> 1 & 1) == 0);
  }
  plVar6 = (long *)puVar5[0xb];
  if (((uint)*(undefined8 *)(puVar5[0xb] + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar6 + 0x12);
    goto LAB_10ad261cc;
  }
  if ((*(byte *)(plVar6 + 0x15) & 1) == 0) goto LAB_10ad261cc;
  puVar5[9] = plVar6[0x13];
  lVar7 = plVar6[0x14];
  puVar5[10] = lVar7;
  if (lVar7 == 0) {
LAB_10ad25f10:
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar9 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar9 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar9 & 0x1fffffffc) == 4) {
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar9 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  else {
    plVar6 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar6 = (long *)puVar5[0xb];
    if (plVar6 != (long *)0x0) goto LAB_10ad25f10;
  }
  plVar8 = (long *)puVar5[0xd];
  plVar6 = (long *)*plVar8;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar9 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar9 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar9 & 0x1fffffffc) == 4) {
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar9 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    plVar8 = (long *)puVar5[0xd];
  }
  *plVar8 = 0;
  lVar7 = puVar5[10];
  puVar5[0xe] = puVar5[9];
  puVar5[10] = 0;
  puVar5[0xb] = lVar7;
  puVar5[0xc] = lVar7;
  plVar6 = (long *)(lVar7 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (((uint)*(undefined8 *)(puVar5[0xc] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0xf) = 1;
    lVar7 = puVar5[0xc];
    plVar6 = (long *)(lVar7 + 0x10);
    uStack_38 = puVar5[3];
    do {
      lVar10 = *plVar6;
      if (lVar10 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
LAB_10ad26190:
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
    } while (((uint)lVar10 >> 1 & 1) == 0);
  }
  plVar6 = (long *)puVar5[0xc];
  if (((uint)*(undefined8 *)(puVar5[0xc] + 0x10) >> 5 & 1) == 0) {
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    plVar6 = (long *)puVar5[0xb];
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    puVar5[0xb] = 0;
    func_0x00010ad25b5c(puVar5[0xe]);
    func_0x0001092ba100(puVar5 + 2);
    plVar6 = (long *)puVar5[0xb];
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    plVar6 = (long *)puVar5[10];
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    func_0x000109d1a1d0(puVar5 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar5);
    return;
  }
  func_0x0001092af97c(plVar6 + 0x12);
LAB_10ad261cc:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ad261d0);
  (*pcVar4)();
}



/* Entry: 10ad26320; end: 10ad2638b;  */

void FUN_10ad26320(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  __ZNSt3__15mutex4lockEv(param_2 + 0x48);
  *(undefined1 *)(param_2 + 0x44) = 1;
  __ZNSt3__15mutex6unlockEv(param_2 + 0x48);
  _AudioQueueStop(*(undefined8 *)(param_2 + 0xd9b0),1);
  _AudioQueueDispose(*(undefined8 *)(param_2 + 0xd9b0),1);
  *(undefined1 *)(param_2 + 0xda08) = 1;
  lVar4 = *(long *)(param_2 + 0xda18);
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
      lVar4 = *(long *)(param_2 + 0xda20);
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



/* Entry: 10ad2638c; end: 10ad2639f;  */

void FUN_10ad2638c(void)

{
  return;
}



/* Entry: 10ad263a0; end: 10ad263ff;  */

long * FUN_10ad263a0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_10ad26400(param_1 + 1);
  }
  if (param_1[0x12] != 0) {
    func_0x0001092b4274();
  }
  func_0x0001092ba41c(param_1 + 9);
  (**(code **)param_1[2])();
  return param_1;
}



/* Entry: 10ad26400; end: 10ad265a7;  */

void FUN_10ad26400(undefined8 *param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plStack_40;
  long lStack_38;
  
  (*(code *)*param_1)(&plStack_40,param_2,param_1);
  plVar7 = plStack_40;
  lVar8 = param_1[0x11];
  plStack_40 = (long *)0x0;
  param_1[0x11] = 0;
  plVar4 = (long *)(lVar8 + 0x10);
  do {
    lVar6 = *plVar4;
    lStack_38 = lVar8;
    if (lVar6 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 != '\0') goto LAB_10ad26470;
      if ((*(char *)(lVar8 + 0xa8) == '\x01') &&
         (plVar4 = *(long **)(lVar8 + 0xa0), plVar4 != (long *)0x0)) {
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
      *(undefined8 *)(lVar8 + 0x98) = param_2;
      *(long **)(lVar8 + 0xa0) = plVar7;
      *(undefined1 *)(lVar8 + 0xa8) = 1;
      *(undefined8 *)(lVar8 + 0x10) = 2;
      FUN_109d1b4dc(lVar8 + 0x18);
      plVar7 = (long *)0x0;
      goto LAB_10ad264f8;
    }
    ClearExclusiveLocal();
LAB_10ad26470:
  } while (((uint)lVar6 >> 1 & 1) == 0);
  if (lVar8 != 0) {
LAB_10ad264f8:
    func_0x0001092b4274(&lStack_38,lVar8);
  }
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
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  if (plStack_40 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_40 + 1);
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
        (**(code **)(*plStack_40 + 8))();
      }
    }
  }
  return;
}



/* Entry: 10ad265a8; end: 10ad2664b;  */

void FUN_10ad265a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6efa0;
  if (param_1[0x15] != 0) {
    func_0x0001092b4274();
  }
  func_0x0001092ba41c(param_1 + 0xc);
  (**(code **)param_1[5])();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 10ad2664c; end: 10ad2669b;  */

void FUN_10ad2664c(long param_1)

{
  FUN_10ad26400(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0xa8) != 0) {
    func_0x0001092b4274();
  }
  func_0x0001092ba41c(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010ad26694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x28))((undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10ad2669c; end: 10ad266d7;  */

long FUN_10ad2669c(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c6efe0);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10ad266d8; end: 10ad266eb;  */

void FUN_10ad266d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad266ec; end: 10ad2670b;  */

void FUN_10ad266ec(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c6f000;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad2670c; end: 10ad26733;  */

long FUN_10ad2670c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10ad14c4c(param_1 + 0x38);
  plVar5 = *(long **)(param_1 + 0x30);
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
  return param_1 + 0x28;
}



/* Entry: 10ad26734; end: 10ad26737;  */

void FUN_10ad26734(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad26738; end: 10ad26b87;  */

void FUN_10ad26738(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
    plVar5 = *(long **)(param_1 + 0x58);
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(plVar5 + 0x12);
      goto LAB_10ad26a48;
    }
    if ((*(byte *)(plVar5 + 0x15) & 1) == 0) goto LAB_10ad26a48;
    *(long *)(param_1 + 0x48) = plVar5[0x13];
    lVar6 = plVar5[0x14];
    *(long *)(param_1 + 0x50) = lVar6;
    if (lVar6 == 0) {
LAB_10ad267a0:
      puVar1 = (ulong *)(plVar5 + 1);
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
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    else {
      plVar5 = (long *)(lVar6 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar5 = *(long **)(param_1 + 0x58);
      if (plVar5 != (long *)0x0) goto LAB_10ad267a0;
    }
    plVar7 = *(long **)(param_1 + 0x68);
    plVar5 = (long *)*plVar7;
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
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
          (**(code **)(*plVar5 + 8))();
        }
      }
      plVar7 = *(long **)(param_1 + 0x68);
    }
    *plVar7 = 0;
    lVar6 = *(long *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(long *)(param_1 + 0x58) = lVar6;
    *(long *)(param_1 + 0x60) = lVar6;
    plVar5 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x78) = 1;
      lVar6 = *(long *)(param_1 + 0x60);
      plVar5 = (long *)(lVar6 + 0x10);
      uStack_28 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar9 = *plVar5;
        if (lVar9 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_38 = 0;
            lStack_30 = param_1;
            func_0x000109d1b588(lVar6 + 0x18,&uStack_38);
            *(undefined8 *)(lVar6 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar9 >> 1 & 1) == 0);
    }
  }
  plVar5 = *(long **)(param_1 + 0x60);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10) >> 5 & 1) == 0) {
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
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
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x58);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
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
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
    func_0x00010ad25b5c(*(undefined8 *)(param_1 + 0x70));
    func_0x0001092ba100(param_1 + 0x10);
    plVar5 = *(long **)(param_1 + 0x58);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
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
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x50);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
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
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  func_0x0001092af97c(plVar5 + 0x12);
LAB_10ad26a48:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ad26a4c);
  (*pcVar4)();
}



/* Entry: 10ad26b88; end: 10ad26ccb;  */

void FUN_10ad26b88(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
    plVar4 = *(long **)(param_1 + 0x58);
    if (plVar4 == (long *)0x0) goto LAB_10ad26cb4;
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
    if ((uVar5 & 0x1fffffffc) != 4) goto LAB_10ad26cb4;
    do {
      uVar5 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    plVar4 = *(long **)(param_1 + 0x60);
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
    plVar4 = *(long **)(param_1 + 0x58);
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
    plVar4 = *(long **)(param_1 + 0x50);
    if (plVar4 == (long *)0x0) goto LAB_10ad26cb4;
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
    if ((uVar5 & 0x1fffffffc) != 4) goto LAB_10ad26cb4;
    do {
      uVar5 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (uVar5 == 0) {
    (**(code **)(*plVar4 + 8))();
  }
LAB_10ad26cb4:
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10ad26ccc; end: 10ad26f6f;  */

void FUN_10ad26ccc(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0xb0) & 1) == 0) {
    FUN_10ad25df0(param_1 + 0xa8,param_1 + 0x48);
    *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0xa8);
    plVar5 = (long *)(*(long *)(param_1 + 0xa8) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x98) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0xb0) = 1;
      lVar8 = *(long *)(param_1 + 0x98);
      plVar5 = (long *)(lVar8 + 0x10);
      uStack_28 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar7 = *plVar5;
        if (lVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_38 = 0;
            lStack_30 = param_1;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_38);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar7 >> 1 & 1) == 0);
    }
  }
  plVar5 = *(long **)(param_1 + 0x98);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x98) + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar5 + 0x12);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10ad26eac);
    (*pcVar4)();
  }
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
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
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  plVar5 = *(long **)(param_1 + 0xa8);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
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
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  func_0x0001092ba100(param_1 + 0x10);
  func_0x0001092ba41c(param_1 + 0x50);
  plVar5 = *(long **)(param_1 + 0x48);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
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
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10ad26f70; end: 10ad27083;  */

void FUN_10ad26f70(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    plVar4 = *(long **)(param_1 + 0x98);
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
    plVar4 = *(long **)(param_1 + 0xa8);
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
  }
  func_0x0001092ba41c(param_1 + 0x50);
  plVar4 = *(long **)(param_1 + 0x48);
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
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10ad27084; end: 10ad272cf;  */

void FUN_10ad27084(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long *plStack_58;
  
  lVar5 = 0x30;
  __Znwm();
  FUN_10ad242c8();
  lVar7 = *(long *)(param_2 + 8);
  lVar2 = *(long *)(param_2 + 0x10);
  if (lVar2 != 0) {
    plVar6 = (long *)(lVar2 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar6 = (long *)0x30;
  lStack_70 = lVar7;
  lStack_68 = lVar2;
  lStack_60 = lVar5;
  __Znwm();
  lStack_70 = 0;
  lStack_68 = 0;
  plVar8 = plVar6 + 1;
  *plVar8 = 0;
  *plVar6 = (long)&PTR_FUN_110c6f0b8;
  plVar6[2] = 0;
  plVar6[3] = lVar5;
  plVar6[4] = lVar7;
  plVar6[5] = lVar2;
  plStack_58 = plVar6;
  if (*(long *)(lVar5 + 0x18) == 0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = plVar6 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(long *)(lVar5 + 0x10) = lVar5;
    *(long **)(lVar5 + 0x18) = plVar6;
  }
  else {
    if (*(long *)(*(long *)(lVar5 + 0x18) + 8) != -1) goto LAB_10ad271ac;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = plVar6 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(long *)(lVar5 + 0x10) = lVar5;
    *(long **)(lVar5 + 0x18) = plVar6;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar7 = *plVar8;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *plVar8 = lVar7 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar7 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
  }
LAB_10ad271ac:
  plVar6 = *(long **)(param_2 + 0x10);
  if (plVar6 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar6 != (long *)0x0) {
      plStack_80 = *(long **)(param_2 + 8);
      plStack_78 = plVar6;
      if (plStack_80 != (long *)0x0) {
        plStack_88 = plStack_58;
        lStack_90 = lStack_60;
        if (plStack_58 != (long *)0x0) {
          plVar8 = plStack_58 + 2;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar4) {
              *plVar8 = *plVar8 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        (**(code **)(*plStack_80 + 0x10))(plStack_80,&lStack_90);
        if (plStack_88 != (long *)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
      plVar8 = plVar6 + 1;
      do {
        lVar7 = *plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  param_1[1] = (long)plStack_58;
  *param_1 = lStack_60;
  return;
}



/* Entry: 10ad272d0; end: 10ad27397;  */

undefined8 * FUN_10ad272d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6f078;
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10ad27398; end: 10ad2748f;  */

void FUN_10ad27398(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lStack_50;
  long lStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar4 = (long *)param_1[1];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_38 = plVar4;
    if (plVar4 != (long *)0x0) {
      plStack_40 = (long *)*param_1;
      if (plStack_40 != (long *)0x0) {
        lStack_48 = param_2[3];
        lStack_50 = param_2[2];
        if (param_2[3] != 0) {
          plVar1 = (long *)(param_2[3] + 0x10);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        (**(code **)(*plStack_40 + 0x18))(plStack_40,&lStack_50);
        if (lStack_48 != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  return;
}



/* Entry: 10ad27490; end: 10ad27503;  */

void FUN_10ad27490(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6f0b8;
  if (param_1[5] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 10ad27504; end: 10ad27543;  */

void FUN_10ad27504(long param_1)

{
  FUN_10ad27398(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10ad27544; end: 10ad2757f;  */

long FUN_10ad27544(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c6f0f8);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10ad27580; end: 10ad27583;  */

void FUN_10ad27580(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad27584; end: 10ad275db;  */

long FUN_10ad27584(long param_1)

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



/* Entry: 10ad275dc; end: 10ad276f3;  */

undefined8 * FUN_10ad275dc(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plStack_30;
  long *plStack_28;
  
  *param_1 = 0;
  param_1[1] = 0;
  plVar4 = (long *)0x110;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110c6f170;
  plVar4[0x12] = 0;
  plVar4[0x11] = 0;
  plVar4[0x14] = 0;
  plVar4[0x13] = 0;
  plVar4[0x16] = 0;
  plVar4[0x15] = 0;
  plVar4[0x18] = 0;
  plVar4[0x17] = 0;
  plVar4[0x1a] = 0;
  plVar4[0x19] = 0;
  plVar4[0x1c] = 0;
  plVar4[0x1b] = 0;
  plVar4[0x1e] = 0;
  plVar4[0x1d] = 0;
  plVar4[0x20] = 0;
  plVar4[0x1f] = 0;
  plStack_30 = plVar4 + 3;
  *plStack_30 = (long)&PTR_DAT_110c6f118;
  plVar4[0x21] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[7] = 0;
  plVar4[6] = (long)(plVar4 + 7);
  plVar4[8] = 0;
  plVar4[9] = 0x32aaaba7;
  plVar4[0xb] = 0;
  plVar4[10] = 0;
  plVar4[0xd] = 0;
  plVar4[0xc] = 0;
  plVar4[0xf] = 0;
  plVar4[0xe] = 0;
  *(undefined8 *)((long)plVar4 + 0x81) = 0;
  *(undefined8 *)((long)plVar4 + 0x79) = 0;
  plVar4[0x12] = (long)&UNK_1053a6a3c;
  plVar4[0x13] = (long)&PTR_DAT_110950c70;
  plVar4[0x1a] = (long)&UNK_1053a6a3c;
  plVar4[0x1b] = (long)&PTR_DAT_110950c70;
  plStack_28 = plVar4;
  FUN_10ad276f4(param_1,&plStack_30);
  plVar4 = plStack_28;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return param_1;
}



/* Entry: 10ad276f4; end: 10ad27757;  */

undefined8 * FUN_10ad276f4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10ad27758; end: 10ad27917;  */

void FUN_10ad27758(undefined8 *param_1,long param_2)

{
  char cVar1;
  long *plVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  
  __ZNSt3__15mutex4lockEv(param_2 + 0x30);
  plVar9 = param_1 + 1;
  *plVar9 = 0;
  param_1[2] = 0;
  *param_1 = plVar9;
  plVar10 = *(long **)(param_2 + 0x18);
  do {
    if (plVar10 == (long *)(param_2 + 0x20)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_2 + 0x30);
      return;
    }
    uVar12 = plVar10[5];
    lVar14 = plVar10[5];
    lVar13 = plVar10[4];
    plVar11 = (long *)param_1[1];
    plVar6 = plVar9;
    plVar8 = plVar9;
    plVar7 = plVar9;
    if ((long *)*param_1 == plVar9) {
LAB_10ad2784c:
      if (plVar11 != (long *)0x0) {
        plVar8 = plVar6 + 1;
        plVar7 = plVar6;
      }
      if (*plVar8 == 0) goto LAB_10ad27864;
    }
    else {
      plVar5 = plVar9;
      plVar2 = plVar11;
      if (plVar11 == (long *)0x0) {
        do {
          plVar6 = (long *)plVar5[2];
          bVar3 = (long *)*plVar6 == plVar5;
          plVar5 = plVar6;
        } while (bVar3);
        if ((ulong)plVar6[5] < uVar12) goto LAB_10ad2784c;
      }
      else {
        do {
          plVar6 = plVar2;
          plVar2 = (long *)plVar6[1];
        } while ((long *)plVar6[1] != (long *)0x0);
        if ((ulong)plVar6[5] < uVar12) goto LAB_10ad2784c;
        do {
          while (plVar7 = plVar11, (ulong)plVar7[5] <= uVar12) {
            if (uVar12 <= (ulong)plVar7[5]) goto LAB_10ad278a0;
            plVar11 = (long *)plVar7[1];
            if ((long *)plVar7[1] == (long *)0x0) {
              plVar8 = plVar7 + 1;
              goto LAB_10ad27864;
            }
          }
          plVar11 = (long *)*plVar7;
          plVar8 = plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
LAB_10ad27864:
      lVar4 = 0x30;
      __Znwm();
      *(long *)(lVar4 + 0x28) = lVar14;
      *(long *)(lVar4 + 0x20) = lVar13;
      if (uVar12 != 0) {
        plVar11 = (long *)(uVar12 + 0x10);
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = *plVar11 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_10ad29914(param_1,plVar7,plVar8,lVar4);
    }
LAB_10ad278a0:
    plVar8 = (long *)plVar10[1];
    plVar11 = plVar10;
    if ((long *)plVar10[1] == (long *)0x0) {
      do {
        plVar10 = (long *)plVar11[2];
        bVar3 = (long *)*plVar10 != plVar11;
        plVar11 = plVar10;
      } while (bVar3);
    }
    else {
      do {
        plVar10 = plVar8;
        plVar8 = (long *)*plVar10;
      } while ((long *)*plVar10 != (long *)0x0);
    }
  } while( true );
}



/* Entry: 10ad27918; end: 10ad279d3;  */

void FUN_10ad27918(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined1 uStack_31;
  
  lVar5 = *param_2;
  lVar4 = *(long *)(lVar5 + 8);
  if (lVar4 == 0) {
    FUN_10ad299ac(auStack_48,&uStack_31,param_2);
    FUN_10ad279d4(*param_2 + 8,auStack_48);
    if (plStack_40 != (long *)0x0) {
      plVar1 = plStack_40 + 1;
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
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
      }
    }
    lVar5 = *param_2;
    lVar4 = *(long *)(lVar5 + 8);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  *param_1 = lVar4;
  param_1[1] = lVar5;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 0x10);
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



/* Entry: 10ad279d4; end: 10ad27a37;  */

undefined8 * FUN_10ad279d4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10ad27a38; end: 10ad27e97;  */

void FUN_10ad27a38(undefined8 *param_1,long *param_2)

{
  char cVar1;
  long **pplVar2;
  undefined8 **ppuVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  code *pcVar9;
  undefined8 *puVar10;
  code **ppcVar11;
  code **ppcVar12;
  undefined8 **ppuVar13;
  long **pplVar14;
  long lVar15;
  long *unaff_x21;
  long *unaff_x22;
  code *pcVar16;
  undefined1 *unaff_x23;
  code *pcVar17;
  undefined8 **ppuVar18;
  long **pplVar19;
  code *unaff_x26;
  code *unaff_x27;
  code *unaff_x28;
  code *pcVar20;
  long lStack_780;
  code *pcStack_778;
  undefined8 *puStack_770;
  code *pcStack_768;
  long *plStack_760;
  undefined1 *puStack_758;
  long *plStack_750;
  long *plStack_748;
  undefined8 *****pppppuStack_730;
  code *pcStack_728;
  long *plStack_720;
  long *plStack_718;
  long *plStack_710;
  long *plStack_708;
  long *plStack_700;
  long lStack_6f8;
  long lStack_6f0;
  long lStack_6e8;
  code *pcStack_6e0;
  long *plStack_6d8;
  long *plStack_6d0;
  undefined1 auStack_6c8 [8];
  long *plStack_6c0;
  long *plStack_6b8;
  long *plStack_6b0;
  long *plStack_6a8;
  code *pcStack_6a0;
  undefined8 *apuStack_698 [7];
  long lStack_660;
  code *pcStack_650;
  code *pcStack_648;
  code *pcStack_640;
  long **pplStack_638;
  long **pplStack_630;
  undefined1 *puStack_628;
  long *plStack_620;
  long *plStack_618;
  undefined1 *****pppppuStack_600;
  code *pcStack_5f8;
  long *plStack_5f0;
  long *plStack_5e8;
  long *plStack_5e0;
  long *plStack_5d8;
  long **pplStack_5d0;
  long *plStack_5c8;
  long lStack_5c0;
  long lStack_5b8;
  code *pcStack_5b0;
  long *plStack_5a8;
  long *plStack_5a0;
  undefined1 auStack_598 [8];
  long *plStack_590;
  long *plStack_588;
  long *plStack_580;
  long *plStack_578;
  code *pcStack_570;
  undefined8 *apuStack_568 [7];
  long lStack_530;
  code *pcStack_520;
  code *pcStack_518;
  code *pcStack_510;
  long **pplStack_508;
  long **pplStack_500;
  undefined1 *puStack_4f8;
  long *plStack_4f0;
  long *plStack_4e8;
  undefined1 ****ppppuStack_4d0;
  code *pcStack_4c8;
  long *plStack_4c0;
  long *plStack_4b8;
  long *plStack_4b0;
  long *plStack_4a8;
  long **pplStack_4a0;
  long *plStack_498;
  long lStack_490;
  long lStack_488;
  code *pcStack_480;
  long *plStack_478;
  long *plStack_470;
  undefined1 auStack_468 [8];
  long *plStack_460;
  long *plStack_458;
  long *plStack_450;
  long *plStack_448;
  code *pcStack_440;
  undefined8 *apuStack_438 [7];
  long lStack_400;
  code *pcStack_3f0;
  code *pcStack_3e8;
  code *pcStack_3e0;
  long **pplStack_3d8;
  long **pplStack_3d0;
  undefined1 *puStack_3c8;
  long *plStack_3c0;
  long *plStack_3b8;
  undefined1 ***pppuStack_3a0;
  code *pcStack_398;
  long *plStack_390;
  long *plStack_388;
  long *plStack_380;
  long *plStack_378;
  long **pplStack_370;
  long *plStack_368;
  long lStack_360;
  long lStack_358;
  code *pcStack_350;
  long *plStack_348;
  long *plStack_340;
  undefined1 auStack_338 [8];
  long *plStack_330;
  long *plStack_328;
  long *plStack_320;
  long *plStack_318;
  code *pcStack_310;
  undefined8 *apuStack_308 [7];
  long lStack_2d0;
  code *pcStack_2c0;
  code *pcStack_2b8;
  code *pcStack_2b0;
  long **pplStack_2a8;
  long **pplStack_2a0;
  undefined1 *puStack_298;
  long *plStack_290;
  long *plStack_288;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  long *plStack_260;
  long *plStack_258;
  long *plStack_250;
  long *plStack_248;
  long **pplStack_240;
  long *plStack_238;
  long lStack_230;
  long lStack_228;
  code *pcStack_220;
  long *plStack_218;
  long *plStack_210;
  undefined1 auStack_208 [8];
  long *plStack_200;
  long *plStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  code *pcStack_1e0;
  undefined8 *apuStack_1d8 [7];
  long lStack_1a0;
  code *pcStack_190;
  code *pcStack_188;
  code *pcStack_180;
  undefined8 **ppuStack_178;
  undefined8 **ppuStack_170;
  undefined1 *puStack_168;
  long *plStack_160;
  long *plStack_158;
  undefined1 *puStack_140;
  code *pcStack_138;
  long *plStack_130;
  long *plStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined8 **ppuStack_110;
  undefined8 *puStack_108;
  long lStack_100;
  long lStack_f8;
  code *pcStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  undefined1 auStack_d8 [8];
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long lStack_b0;
  undefined8 *apuStack_a8 [7];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar11 = (code **)*param_1;
  *(undefined1 *)(ppcVar11 + 0xe) = 1;
  FUN_10ad27758(&ppuStack_110);
  lVar15 = lStack_100;
  plVar5 = (long *)0x20;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110c6f210;
  plStack_120 = plVar5 + 3;
  *plStack_120 = lVar15;
  ppuVar13 = ppuStack_110;
  plStack_118 = plVar5;
  if (ppuStack_110 != &puStack_108) {
    unaff_x23 = auStack_d8;
    unaff_x27 = FUN_10ad29bfc;
    unaff_x28 = FUN_10ad29e1c;
    unaff_x26 = FUN_10ad29bcc;
    do {
      plStack_130 = (long *)0x0;
      plStack_128 = (long *)0x0;
      plVar5 = ppuVar13[5];
      if (((plVar5 == (long *)0x0) ||
          (__ZNSt3__119__shared_weak_count4lockEv(), plStack_128 = plVar5, plVar5 == (long *)0x0))
         || (unaff_x22 = ppuVar13[4], plStack_130 = unaff_x22, unaff_x22 == (long *)0x0)) {
        do {
          cVar1 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plStack_120,0x10);
          if (bVar4) {
            *plStack_120 = *plStack_120 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      else {
        plVar6 = unaff_x22;
        (**(code **)(*unaff_x22 + 0xa8))();
        plVar7 = plVar5 + 1;
        do {
          cVar1 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = *plVar7 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        plStack_b8 = plStack_118;
        plStack_c0 = plStack_120;
        if (plStack_118 != (long *)0x0) {
          plVar7 = plStack_118 + 1;
          do {
            cVar1 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = *plVar7 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        lStack_b0 = *param_2;
        plStack_d0 = unaff_x22;
        plStack_c8 = plVar5;
        (**(code **)(param_2[1] + 0x18))(apuStack_a8,param_2 + 1);
        unaff_x21 = (long *)plVar6[2];
        if (unaff_x21 == (long *)0x0) {
          unaff_x21 = (long *)0x78;
          __Znwm();
          unaff_x21[2] = (long)plStack_c8;
          unaff_x21[1] = (long)plStack_d0;
          plStack_d0 = (long *)0x0;
          plStack_c8 = (long *)0x0;
          unaff_x21[4] = (long)plStack_b8;
          unaff_x21[3] = (long)plStack_c0;
          plStack_c0 = (long *)0x0;
          plStack_b8 = (long *)0x0;
          unaff_x21[5] = lStack_b0;
          (*(code *)apuStack_a8[0][2])(unaff_x21 + 6,apuStack_a8);
          unaff_x21[0xe] = 0x10ad29e60;
          pcStack_f0 = FUN_10ad29bfc;
          ppcVar11 = &pcStack_f0;
          plStack_e8 = unaff_x21;
          plStack_e0 = plVar6;
          (**(code **)*plVar6)(plVar6);
        }
        else {
          lStack_f8 = 0;
          (**(code **)(*unaff_x21 + 0x28))(unaff_x21,0,&lStack_f8);
          if (lStack_f8 != 0) {
            func_0x0001092af97c(&lStack_f8);
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x10ad27e08);
            (*pcVar17)();
          }
          unaff_x22 = (long *)0x80;
          __Znwm();
          unaff_x22[2] = (long)plStack_c8;
          unaff_x22[1] = (long)plStack_d0;
          plStack_d0 = (long *)0x0;
          plStack_c8 = (long *)0x0;
          unaff_x22[4] = (long)plStack_b8;
          unaff_x22[3] = (long)plStack_c0;
          plStack_c0 = (long *)0x0;
          plStack_b8 = (long *)0x0;
          unaff_x22[5] = lStack_b0;
          (*(code *)apuStack_a8[0][2])(unaff_x22 + 6,apuStack_a8);
          unaff_x22[0xe] = (long)FUN_10ad29e1c;
          unaff_x22[0xf] = (long)unaff_x21;
          pcStack_f0 = FUN_10ad29bcc;
          ppcVar11 = &pcStack_f0;
          plStack_e8 = unaff_x22;
          plStack_e0 = plVar6;
          (**(code **)*plVar6)(plVar6);
          __ZNSt13exception_ptrD1Ev(&lStack_f8);
        }
        lStack_f8 = 0;
        __ZNSt13exception_ptrD1Ev(&lStack_f8);
        (*(code *)*apuStack_a8[0])(apuStack_a8);
        plVar5 = plStack_b8;
        if (plStack_b8 != (long *)0x0) {
          plVar7 = plStack_b8 + 1;
          do {
            lVar15 = *plVar7;
            cVar1 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = lVar15 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
          }
        }
        plVar5 = plStack_c8;
        if (plStack_c8 != (long *)0x0) {
          plVar7 = plStack_c8 + 1;
          do {
            lVar15 = *plVar7;
            cVar1 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = lVar15 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
          }
        }
      }
      plVar5 = plStack_128;
      if (plStack_128 != (long *)0x0) {
        plVar7 = plStack_128 + 1;
        do {
          lVar15 = *plVar7;
          cVar1 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = lVar15 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plStack_128 + 0x10))(plStack_128);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      ppuVar3 = (undefined8 **)ppuVar13[1];
      ppuVar18 = ppuVar13;
      if ((undefined8 **)ppuVar13[1] == (undefined8 **)0x0) {
        do {
          ppuVar13 = (undefined8 **)ppuVar18[2];
          bVar4 = (undefined8 **)*ppuVar13 != ppuVar18;
          ppuVar18 = ppuVar13;
        } while (bVar4);
      }
      else {
        do {
          ppuVar13 = ppuVar3;
          ppuVar3 = (undefined8 **)*ppuVar13;
        } while ((undefined8 **)*ppuVar13 != (undefined8 **)0x0);
      }
      lVar15 = lStack_100;
    } while (ppuVar13 != &puStack_108);
  }
  if (lVar15 == 0) {
    (*(code *)*param_2)(param_2);
  }
  plVar5 = plStack_118;
  if (plStack_118 != (long *)0x0) {
    plVar7 = plStack_118 + 1;
    do {
      lVar15 = *plVar7;
      cVar1 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar15 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_118 + 0x10))(plStack_118);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  puVar10 = puStack_108;
  func_0x00010ad29968();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010ad29f7c(&plStack_120);
  func_0x00010ad29968(puStack_108);
  __Unwind_Resume();
  pcStack_138 = FUN_10ad27e98;
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar12 = (code **)*puVar10;
  *(undefined1 *)(ppcVar12 + 0xe) = 0;
  pcStack_190 = unaff_x28;
  pcStack_188 = unaff_x27;
  pcStack_180 = unaff_x26;
  ppuStack_178 = ppuVar13;
  ppuStack_170 = &puStack_108;
  puStack_168 = unaff_x23;
  plStack_160 = unaff_x22;
  plStack_158 = unaff_x21;
  puStack_140 = &stack0xfffffffffffffff0;
  FUN_10ad27758(&pplStack_240);
  lVar15 = lStack_230;
  plVar5 = (long *)0x20;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110c6f210;
  plVar5[3] = lVar15;
  plStack_250 = plVar5 + 3;
  plStack_248 = plVar5;
  pplVar14 = pplStack_240;
  if (pplStack_240 != &plStack_238) {
    unaff_x23 = auStack_208;
    unaff_x27 = FUN_10ad2a040;
    unaff_x28 = FUN_10ad2a260;
    unaff_x26 = (code *)0x10ad2a010;
    do {
      plStack_260 = (long *)0x0;
      plStack_258 = (long *)0x0;
      plVar5 = pplVar14[5];
      if (plVar5 == (long *)0x0) {
LAB_10ad28058:
        do {
          cVar1 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plStack_250,0x10);
          if (bVar4) {
            *plStack_250 = *plStack_250 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      else {
        __ZNSt3__119__shared_weak_count4lockEv();
        plStack_258 = plVar5;
        if (plVar5 == (long *)0x0) goto LAB_10ad28058;
        unaff_x22 = pplVar14[4];
        plStack_260 = unaff_x22;
        if (unaff_x22 == (long *)0x0) goto LAB_10ad28058;
        plVar7 = unaff_x22;
        (**(code **)(*unaff_x22 + 0xa8))();
        plStack_200 = unaff_x22;
        plStack_1f8 = plVar5;
        plVar5 = plVar5 + 1;
        do {
          cVar1 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar4) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        plStack_1e8 = plStack_248;
        plStack_1f0 = plStack_250;
        if (plStack_248 != (long *)0x0) {
          plVar5 = plStack_248 + 1;
          do {
            cVar1 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar4) {
              *plVar5 = *plVar5 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        pcStack_1e0 = *ppcVar11;
        (**(code **)(ppcVar11[1] + 0x18))(apuStack_1d8,ppcVar11 + 1);
        unaff_x21 = (long *)plVar7[2];
        if (unaff_x21 == (long *)0x0) {
          unaff_x21 = (long *)0x78;
          __Znwm();
          unaff_x21[2] = (long)plStack_1f8;
          unaff_x21[1] = (long)plStack_200;
          plStack_200 = (long *)0x0;
          plStack_1f8 = (long *)0x0;
          unaff_x21[4] = (long)plStack_1e8;
          unaff_x21[3] = (long)plStack_1f0;
          plStack_1f0 = (long *)0x0;
          plStack_1e8 = (long *)0x0;
          unaff_x21[5] = (long)pcStack_1e0;
          (*(code *)apuStack_1d8[0][2])(unaff_x21 + 6,apuStack_1d8);
          unaff_x21[0xe] = 0x10ad2a2a4;
          pcStack_220 = FUN_10ad2a040;
          ppcVar12 = &pcStack_220;
          plStack_218 = unaff_x21;
          plStack_210 = plVar7;
          (**(code **)*plVar7)(plVar7);
        }
        else {
          lStack_228 = 0;
          (**(code **)(*unaff_x21 + 0x28))(unaff_x21,0,&lStack_228);
          if (lStack_228 != 0) {
            func_0x0001092af97c(&lStack_228);
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x10ad28264);
            (*pcVar17)();
          }
          unaff_x22 = (long *)0x80;
          __Znwm();
          unaff_x22[2] = (long)plStack_1f8;
          unaff_x22[1] = (long)plStack_200;
          plStack_200 = (long *)0x0;
          plStack_1f8 = (long *)0x0;
          unaff_x22[4] = (long)plStack_1e8;
          unaff_x22[3] = (long)plStack_1f0;
          plStack_1f0 = (long *)0x0;
          plStack_1e8 = (long *)0x0;
          unaff_x22[5] = (long)pcStack_1e0;
          (*(code *)apuStack_1d8[0][2])(unaff_x22 + 6,apuStack_1d8);
          unaff_x22[0xe] = (long)FUN_10ad2a260;
          unaff_x22[0xf] = (long)unaff_x21;
          pcStack_220 = (code *)0x10ad2a010;
          ppcVar12 = &pcStack_220;
          plStack_218 = unaff_x22;
          plStack_210 = plVar7;
          (**(code **)*plVar7)(plVar7);
          __ZNSt13exception_ptrD1Ev(&lStack_228);
        }
        lStack_228 = 0;
        __ZNSt13exception_ptrD1Ev(&lStack_228);
        (*(code *)*apuStack_1d8[0])(apuStack_1d8);
        plVar5 = plStack_1e8;
        if (plStack_1e8 != (long *)0x0) {
          plVar7 = plStack_1e8 + 1;
          do {
            lVar15 = *plVar7;
            cVar1 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = lVar15 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plStack_1e8 + 0x10))(plStack_1e8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
          }
        }
        plVar5 = plStack_1f8;
        if (plStack_1f8 != (long *)0x0) {
          plVar7 = plStack_1f8 + 1;
          do {
            lVar15 = *plVar7;
            cVar1 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = lVar15 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
          }
        }
      }
      plVar5 = plStack_258;
      if (plStack_258 != (long *)0x0) {
        plVar7 = plStack_258 + 1;
        do {
          lVar15 = *plVar7;
          cVar1 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = lVar15 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plStack_258 + 0x10))(plStack_258);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      pplVar2 = (long **)pplVar14[1];
      pplVar19 = pplVar14;
      if ((long **)pplVar14[1] == (long **)0x0) {
        do {
          pplVar14 = (long **)pplVar19[2];
          bVar4 = (long **)*pplVar14 != pplVar19;
          pplVar19 = pplVar14;
        } while (bVar4);
      }
      else {
        do {
          pplVar14 = pplVar2;
          pplVar2 = (long **)*pplVar14;
        } while ((long **)*pplVar14 != (long **)0x0);
      }
      lVar15 = lStack_230;
    } while (pplVar14 != &plStack_238);
  }
  if (lVar15 == 0) {
    (**ppcVar11)(ppcVar11);
  }
  plVar5 = plStack_248;
  if (plStack_248 != (long *)0x0) {
    plVar7 = plStack_248 + 1;
    do {
      lVar15 = *plVar7;
      cVar1 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar15 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_248 + 0x10))(plStack_248);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = plStack_238;
  func_0x00010ad29968();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010ad29f7c(&plStack_250);
  func_0x00010ad29968(plStack_238);
  __Unwind_Resume();
  pcStack_268 = FUN_10ad282f4;
  lStack_2d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar11 = (code **)*plVar5;
  pcStack_2c0 = unaff_x28;
  pcStack_2b8 = unaff_x27;
  pcStack_2b0 = unaff_x26;
  pplStack_2a8 = pplVar14;
  pplStack_2a0 = &plStack_238;
  puStack_298 = unaff_x23;
  plStack_290 = unaff_x22;
  plStack_288 = unaff_x21;
  ppuStack_270 = &puStack_140;
  FUN_10ad27758(&pplStack_370);
  lVar15 = lStack_360;
  plVar5 = (long *)0x20;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110c6f210;
  plVar5[3] = lVar15;
  plStack_380 = plVar5 + 3;
  plStack_378 = plVar5;
  pplVar14 = pplStack_370;
  if (pplStack_370 != &plStack_368) {
    unaff_x23 = auStack_338;
    unaff_x27 = FUN_10ad2a42c;
    unaff_x28 = FUN_10ad2a64c;
    unaff_x26 = (code *)0x10ad2a3fc;
    do {
      plStack_390 = (long *)0x0;
      plStack_388 = (long *)0x0;
      plVar5 = pplVar14[5];
      if (plVar5 == (long *)0x0) {
LAB_10ad284b0:
        do {
          cVar1 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plStack_380,0x10);
          if (bVar4) {
            *plStack_380 = *plStack_380 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      else {
        __ZNSt3__119__shared_weak_count4lockEv();
        plStack_388 = plVar5;
        if (plVar5 == (long *)0x0) goto LAB_10ad284b0;
        unaff_x22 = pplVar14[4];
        plStack_390 = unaff_x22;
        if (unaff_x22 == (long *)0x0) goto LAB_10ad284b0;
        plVar7 = unaff_x22;
        (**(code **)(*unaff_x22 + 0xa8))();
        plStack_330 = unaff_x22;
        plStack_328 = plVar5;
        plVar5 = plVar5 + 1;
        do {
          cVar1 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar4) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        plStack_318 = plStack_378;
        plStack_320 = plStack_380;
        if (plStack_378 != (long *)0x0) {
          plVar5 = plStack_378 + 1;
          do {
            cVar1 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar4) {
              *plVar5 = *plVar5 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        pcStack_310 = *ppcVar12;
        (**(code **)(ppcVar12[1] + 0x18))(apuStack_308,ppcVar12 + 1);
        unaff_x21 = (long *)plVar7[2];
        if (unaff_x21 == (long *)0x0) {
          unaff_x21 = (long *)0x78;
          __Znwm();
          unaff_x21[2] = (long)plStack_328;
          unaff_x21[1] = (long)plStack_330;
          plStack_330 = (long *)0x0;
          plStack_328 = (long *)0x0;
          unaff_x21[4] = (long)plStack_318;
          unaff_x21[3] = (long)plStack_320;
          plStack_320 = (long *)0x0;
          plStack_318 = (long *)0x0;
          unaff_x21[5] = (long)pcStack_310;
          (*(code *)apuStack_308[0][2])(unaff_x21 + 6,apuStack_308);
          unaff_x21[0xe] = 0x10ad2a690;
          pcStack_350 = FUN_10ad2a42c;
          ppcVar11 = &pcStack_350;
          plStack_348 = unaff_x21;
          plStack_340 = plVar7;
          (**(code **)*plVar7)(plVar7);
        }
        else {
          lStack_358 = 0;
          (**(code **)(*unaff_x21 + 0x28))(unaff_x21,0,&lStack_358);
          if (lStack_358 != 0) {
            func_0x0001092af97c(&lStack_358);
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x10ad286bc);
            (*pcVar17)();
          }
          unaff_x22 = (long *)0x80;
          __Znwm();
          unaff_x22[2] = (long)plStack_328;
          unaff_x22[1] = (long)plStack_330;
          plStack_330 = (long *)0x0;
          plStack_328 = (long *)0x0;
          unaff_x22[4] = (long)plStack_318;
          unaff_x22[3] = (long)plStack_320;
          plStack_320 = (long *)0x0;
          plStack_318 = (long *)0x0;
          unaff_x22[5] = (long)pcStack_310;
          (*(code *)apuStack_308[0][2])(unaff_x22 + 6,apuStack_308);
          unaff_x22[0xe] = (long)FUN_10ad2a64c;
          unaff_x22[0xf] = (long)unaff_x21;
          pcStack_350 = (code *)0x10ad2a3fc;
          ppcVar11 = &pcStack_350;
          plStack_348 = unaff_x22;
          plStack_340 = plVar7;
          (**(code **)*plVar7)(plVar7);
          __ZNSt13exception_ptrD1Ev(&lStack_358);
        }
        lStack_358 = 0;
        __ZNSt13exception_ptrD1Ev(&lStack_358);
        (*(code *)*apuStack_308[0])(apuStack_308);
        plVar5 = plStack_318;
        if (plStack_318 != (long *)0x0) {
          plVar7 = plStack_318 + 1;
          do {
            lVar15 = *plVar7;
            cVar1 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = lVar15 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plStack_318 + 0x10))(plStack_318);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
          }
        }
        plVar5 = plStack_328;
        if (plStack_328 != (long *)0x0) {
          plVar7 = plStack_328 + 1;
          do {
            lVar15 = *plVar7;
            cVar1 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = lVar15 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plStack_328 + 0x10))(plStack_328);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
          }
        }
      }
      plVar5 = plStack_388;
      if (plStack_388 != (long *)0x0) {
        plVar7 = plStack_388 + 1;
        do {
          lVar15 = *plVar7;
          cVar1 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = lVar15 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plStack_388 + 0x10))(plStack_388);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      pplVar2 = (long **)pplVar14[1];
      pplVar19 = pplVar14;
      if ((long **)pplVar14[1] == (long **)0x0) {
        do {
          pplVar14 = (long **)pplVar19[2];
          bVar4 = (long **)*pplVar14 != pplVar19;
          pplVar19 = pplVar14;
        } while (bVar4);
      }
      else {
        do {
          pplVar14 = pplVar2;
          pplVar2 = (long **)*pplVar14;
        } while ((long **)*pplVar14 != (long **)0x0);
      }
      lVar15 = lStack_360;
    } while (pplVar14 != &plStack_368);
  }
  if (lVar15 == 0) {
    (**ppcVar12)(ppcVar12);
  }
  plVar5 = plStack_378;
  if (plStack_378 != (long *)0x0) {
    plVar7 = plStack_378 + 1;
    do {
      lVar15 = *plVar7;
      cVar1 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar15 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_378 + 0x10))(plStack_378);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = plStack_368;
  func_0x00010ad29968();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d0) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010ad29f7c(&plStack_380);
  func_0x00010ad29968(plStack_368);
  __Unwind_Resume();
  pcStack_398 = FUN_10ad2874c;
  lStack_400 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar12 = (code **)*plVar5;
  pcStack_3f0 = unaff_x28;
  pcStack_3e8 = unaff_x27;
  pcStack_3e0 = unaff_x26;
  pplStack_3d8 = pplVar14;
  pplStack_3d0 = &plStack_368;
  puStack_3c8 = unaff_x23;
  plStack_3c0 = unaff_x22;
  plStack_3b8 = unaff_x21;
  pppuStack_3a0 = &ppuStack_270;
  FUN_10ad27758(&pplStack_4a0);
  lVar15 = lStack_490;
  plVar5 = (long *)0x20;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110c6f210;
  plVar5[3] = lVar15;
  plStack_4b0 = plVar5 + 3;
  plStack_4a8 = plVar5;
  pplVar14 = pplStack_4a0;
  if (pplStack_4a0 != &plStack_498) {
    unaff_x23 = auStack_468;
    unaff_x27 = FUN_10ad2a818;
    unaff_x28 = FUN_10ad2aa38;
    unaff_x26 = (code *)0x10ad2a7e8;
    do {
      plStack_4c0 = (long *)0x0;
      plStack_4b8 = (long *)0x0;
      plVar5 = pplVar14[5];
      if (plVar5 == (long *)0x0) {
LAB_10ad28908:
        do {
          cVar1 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plStack_4b0,0x10);
          if (bVar4) {
            *plStack_4b0 = *plStack_4b0 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      else {
        __ZNSt3__119__shared_weak_count4lockEv();
        plStack_4b8 = plVar5;
        if (plVar5 == (long *)0x0) goto LAB_10ad28908;
        unaff_x22 = pplVar14[4];
        plStack_4c0 = unaff_x22;
        if (unaff_x22 == (long *)0x0) goto LAB_10ad28908;
        plVar7 = unaff_x22;
        (**(code **)(*unaff_x22 + 0xa8))();
        plStack_460 = unaff_x22;
        plStack_458 = plVar5;
        plVar5 = plVar5 + 1;
        do {
          cVar1 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar4) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        plStack_448 = plStack_4a8;
        plStack_450 = plStack_4b0;
        if (plStack_4a8 != (long *)0x0) {
          plVar5 = plStack_4a8 + 1;
          do {
            cVar1 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar4) {
              *plVar5 = *plVar5 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        pcStack_440 = *ppcVar11;
        (**(code **)(ppcVar11[1] + 0x18))(apuStack_438,ppcVar11 + 1);
        unaff_x21 = (long *)plVar7[2];
        if (unaff_x21 == (long *)0x0) {
          unaff_x21 = (long *)0x78;
          __Znwm();
          unaff_x21[2] = (long)plStack_458;
          unaff_x21[1] = (long)plStack_460;
          plStack_460 = (long *)0x0;
          plStack_458 = (long *)0x0;
          unaff_x21[4] = (long)plStack_448;
          unaff_x21[3] = (long)plStack_450;
          plStack_450 = (long *)0x0;
          plStack_448 = (long *)0x0;
          unaff_x21[5] = (long)pcStack_440;
          (*(code *)apuStack_438[0][2])(unaff_x21 + 6,apuStack_438);
          unaff_x21[0xe] = 0x10ad2aa7c;
          pcStack_480 = FUN_10ad2a818;
          ppcVar12 = &pcStack_480;
          plStack_478 = unaff_x21;
          plStack_470 = plVar7;
          (**(code **)*plVar7)(plVar7);
        }
        else {
          lStack_488 = 0;
          (**(code **)(*unaff_x21 + 0x28))(unaff_x21,0,&lStack_488);
          if (lStack_488 != 0) {
            func_0x0001092af97c(&lStack_488);
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x10ad28b14);
            (*pcVar17)();
          }
          unaff_x22 = (long *)0x80;
          __Znwm();
          unaff_x22[2] = (long)plStack_458;
          unaff_x22[1] = (long)plStack_460;
          plStack_460 = (long *)0x0;
          plStack_458 = (long *)0x0;
          unaff_x22[4] = (long)plStack_448;
          unaff_x22[3] = (long)plStack_450;
          plStack_450 = (long *)0x0;
          plStack_448 = (long *)0x0;
          unaff_x22[5] = (long)pcStack_440;
          (*(code *)apuStack_438[0][2])(unaff_x22 + 6,apuStack_438);
          unaff_x22[0xe] = (long)FUN_10ad2aa38;
          unaff_x22[0xf] = (long)unaff_x21;
          pcStack_480 = (code *)0x10ad2a7e8;
          ppcVar12 = &pcStack_480;
          plStack_478 = unaff_x22;
          plStack_470 = plVar7;
          (**(code **)*plVar7)(plVar7);
          __ZNSt13exception_ptrD1Ev(&lStack_488);
        }
        lStack_488 = 0;
        __ZNSt13exception_ptrD1Ev(&lStack_488);
        (*(code *)*apuStack_438[0])(apuStack_438);
        plVar5 = plStack_448;
        if (plStack_448 != (long *)0x0) {
          plVar7 = plStack_448 + 1;
          do {
            lVar15 = *plVar7;
            cVar1 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = lVar15 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plStack_448 + 0x10))(plStack_448);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
          }
        }
        plVar5 = plStack_458;
        if (plStack_458 != (long *)0x0) {
          plVar7 = plStack_458 + 1;
          do {
            lVar15 = *plVar7;
            cVar1 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = lVar15 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plStack_458 + 0x10))(plStack_458);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
          }
        }
      }
      plVar5 = plStack_4b8;
      if (plStack_4b8 != (long *)0x0) {
        plVar7 = plStack_4b8 + 1;
        do {
          lVar15 = *plVar7;
          cVar1 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = lVar15 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plStack_4b8 + 0x10))(plStack_4b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      pplVar2 = (long **)pplVar14[1];
      pplVar19 = pplVar14;
      if ((long **)pplVar14[1] == (long **)0x0) {
        do {
          pplVar14 = (long **)pplVar19[2];
          bVar4 = (long **)*pplVar14 != pplVar19;
          pplVar19 = pplVar14;
        } while (bVar4);
      }
      else {
        do {
          pplVar14 = pplVar2;
          pplVar2 = (long **)*pplVar14;
        } while ((long **)*pplVar14 != (long **)0x0);
      }
      lVar15 = lStack_490;
    } while (pplVar14 != &plStack_498);
  }
  if (lVar15 == 0) {
    (**ppcVar11)(ppcVar11);
  }
  plVar5 = plStack_4a8;
  if (plStack_4a8 != (long *)0x0) {
    plVar7 = plStack_4a8 + 1;
    do {
      lVar15 = *plVar7;
      cVar1 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar15 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_4a8 + 0x10))(plStack_4a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = plStack_498;
  func_0x00010ad29968();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_400) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010ad29f7c(&plStack_4b0);
  func_0x00010ad29968(plStack_498);
  __Unwind_Resume();
  pcStack_4c8 = FUN_10ad28ba4;
  lStack_530 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar11 = (code **)*plVar5;
  pcStack_520 = unaff_x28;
  pcStack_518 = unaff_x27;
  pcStack_510 = unaff_x26;
  pplStack_508 = pplVar14;
  pplStack_500 = &plStack_498;
  puStack_4f8 = unaff_x23;
  plStack_4f0 = unaff_x22;
  plStack_4e8 = unaff_x21;
  ppppuStack_4d0 = &pppuStack_3a0;
  FUN_10ad27758(&pplStack_5d0);
  lVar15 = lStack_5c0;
  plVar5 = (long *)0x20;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110c6f210;
  plVar5[3] = lVar15;
  plStack_5e0 = plVar5 + 3;
  plStack_5d8 = plVar5;
  pplVar14 = pplStack_5d0;
  if (pplStack_5d0 != &plStack_5c8) {
    unaff_x23 = auStack_598;
    unaff_x27 = FUN_10ad2ac04;
    unaff_x28 = FUN_10ad2ae24;
    unaff_x26 = (code *)0x10ad2abd4;
    do {
      plStack_5f0 = (long *)0x0;
      plStack_5e8 = (long *)0x0;
      plVar5 = pplVar14[5];
      if (plVar5 == (long *)0x0) {
LAB_10ad28d60:
        do {
          cVar1 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plStack_5e0,0x10);
          if (bVar4) {
            *plStack_5e0 = *plStack_5e0 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      else {
        __ZNSt3__119__shared_weak_count4lockEv();
        plStack_5e8 = plVar5;
        if (plVar5 == (long *)0x0) goto LAB_10ad28d60;
        unaff_x22 = pplVar14[4];
        plStack_5f0 = unaff_x22;
        if (unaff_x22 == (long *)0x0) goto LAB_10ad28d60;
        plVar7 = unaff_x22;
        (**(code **)(*unaff_x22 + 0xa8))();
        plStack_590 = unaff_x22;
        plStack_588 = plVar5;
        plVar5 = plVar5 + 1;
        do {
          cVar1 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar4) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        plStack_578 = plStack_5d8;
        plStack_580 = plStack_5e0;
        if (plStack_5d8 != (long *)0x0) {
          plVar5 = plStack_5d8 + 1;
          do {
            cVar1 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar4) {
              *plVar5 = *plVar5 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        pcStack_570 = *ppcVar12;
        (**(code **)(ppcVar12[1] + 0x18))(apuStack_568,ppcVar12 + 1);
        unaff_x21 = (long *)plVar7[2];
        if (unaff_x21 == (long *)0x0) {
          unaff_x21 = (long *)0x78;
          __Znwm();
          unaff_x21[2] = (long)plStack_588;
          unaff_x21[1] = (long)plStack_590;
          plStack_590 = (long *)0x0;
          plStack_588 = (long *)0x0;
          unaff_x21[4] = (long)plStack_578;
          unaff_x21[3] = (long)plStack_580;
          plStack_580 = (long *)0x0;
          plStack_578 = (long *)0x0;
          unaff_x21[5] = (long)pcStack_570;
          (*(code *)apuStack_568[0][2])(unaff_x21 + 6,apuStack_568);
          unaff_x21[0xe] = 0x10ad2ae68;
          pcStack_5b0 = FUN_10ad2ac04;
          ppcVar11 = &pcStack_5b0;
          plStack_5a8 = unaff_x21;
          plStack_5a0 = plVar7;
          (**(code **)*plVar7)(plVar7);
        }
        else {
          lStack_5b8 = 0;
          (**(code **)(*unaff_x21 + 0x28))(unaff_x21,0,&lStack_5b8);
          if (lStack_5b8 != 0) {
            func_0x0001092af97c(&lStack_5b8);
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x10ad28f6c);
            (*pcVar17)();
          }
          unaff_x22 = (long *)0x80;
          __Znwm();
          unaff_x22[2] = (long)plStack_588;
          unaff_x22[1] = (long)plStack_590;
          plStack_590 = (long *)0x0;
          plStack_588 = (long *)0x0;
          unaff_x22[4] = (long)plStack_578;
          unaff_x22[3] = (long)plStack_580;
          plStack_580 = (long *)0x0;
          plStack_578 = (long *)0x0;
          unaff_x22[5] = (long)pcStack_570;
          (*(code *)apuStack_568[0][2])(unaff_x22 + 6,apuStack_568);
          unaff_x22[0xe] = (long)FUN_10ad2ae24;
          unaff_x22[0xf] = (long)unaff_x21;
          pcStack_5b0 = (code *)0x10ad2abd4;
          ppcVar11 = &pcStack_5b0;
          plStack_5a8 = unaff_x22;
          plStack_5a0 = plVar7;
          (**(code **)*plVar7)(plVar7);
          __ZNSt13exception_ptrD1Ev(&lStack_5b8);
        }
        lStack_5b8 = 0;
        __ZNSt13exception_ptrD1Ev(&lStack_5b8);
        (*(code *)*apuStack_568[0])(apuStack_568);
        plVar5 = plStack_578;
        if (plStack_578 != (long *)0x0) {
          plVar7 = plStack_578 + 1;
          do {
            lVar15 = *plVar7;
            cVar1 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = lVar15 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plStack_578 + 0x10))(plStack_578);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
          }
        }
        plVar5 = plStack_588;
        if (plStack_588 != (long *)0x0) {
          plVar7 = plStack_588 + 1;
          do {
            lVar15 = *plVar7;
            cVar1 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = lVar15 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plStack_588 + 0x10))(plStack_588);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
          }
        }
      }
      plVar5 = plStack_5e8;
      if (plStack_5e8 != (long *)0x0) {
        plVar7 = plStack_5e8 + 1;
        do {
          lVar15 = *plVar7;
          cVar1 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = lVar15 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plStack_5e8 + 0x10))(plStack_5e8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      pplVar2 = (long **)pplVar14[1];
      pplVar19 = pplVar14;
      if ((long **)pplVar14[1] == (long **)0x0) {
        do {
          pplVar14 = (long **)pplVar19[2];
          bVar4 = (long **)*pplVar14 != pplVar19;
          pplVar19 = pplVar14;
        } while (bVar4);
      }
      else {
        do {
          pplVar14 = pplVar2;
          pplVar2 = (long **)*pplVar14;
        } while ((long **)*pplVar14 != (long **)0x0);
      }
      lVar15 = lStack_5c0;
    } while (pplVar14 != &plStack_5c8);
  }
  if (lVar15 == 0) {
    (**ppcVar12)(ppcVar12);
  }
  plVar5 = plStack_5d8;
  if (plStack_5d8 != (long *)0x0) {
    plVar7 = plStack_5d8 + 1;
    do {
      lVar15 = *plVar7;
      cVar1 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar15 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_5d8 + 0x10))(plStack_5d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = plStack_5c8;
  func_0x00010ad29968();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_530) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010ad29f7c(&plStack_5e0);
  func_0x00010ad29968(plStack_5c8);
  __Unwind_Resume();
  pcStack_5f8 = FUN_10ad28ffc;
  lStack_660 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar12 = (code **)*plVar5;
  pcStack_650 = unaff_x28;
  pcStack_648 = unaff_x27;
  pcStack_640 = unaff_x26;
  pplStack_638 = pplVar14;
  pplStack_630 = &plStack_5c8;
  puStack_628 = unaff_x23;
  plStack_620 = unaff_x22;
  plStack_618 = unaff_x21;
  pppppuStack_600 = &ppppuStack_4d0;
  FUN_10ad27758(&plStack_700);
  lVar15 = lStack_6f0;
  plVar5 = (long *)0x20;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110c6f210;
  plStack_710 = plVar5 + 3;
  *plStack_710 = lVar15;
  plStack_708 = plVar5;
  if (plStack_700 != &lStack_6f8) {
    unaff_x23 = auStack_6c8;
    plVar5 = plStack_700;
    do {
      plStack_720 = (long *)0x0;
      plStack_718 = (long *)0x0;
      plVar7 = (long *)plVar5[5];
      if (((plVar7 == (long *)0x0) ||
          (__ZNSt3__119__shared_weak_count4lockEv(), plStack_718 = plVar7, plVar7 == (long *)0x0))
         || (unaff_x22 = (long *)plVar5[4], plStack_720 = unaff_x22, unaff_x22 == (long *)0x0)) {
        do {
          cVar1 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plStack_710,0x10);
          if (bVar4) {
            *plStack_710 = *plStack_710 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      else {
        plVar6 = unaff_x22;
        (**(code **)(*unaff_x22 + 0xa8))();
        plStack_6c0 = unaff_x22;
        plStack_6b8 = plVar7;
        plVar7 = plVar7 + 1;
        do {
          cVar1 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = *plVar7 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        plStack_6a8 = plStack_708;
        plStack_6b0 = plStack_710;
        if (plStack_708 != (long *)0x0) {
          plVar7 = plStack_708 + 1;
          do {
            cVar1 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = *plVar7 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        pcStack_6a0 = *ppcVar11;
        (**(code **)(ppcVar11[1] + 0x18))(apuStack_698,ppcVar11 + 1);
        unaff_x21 = (long *)plVar6[2];
        if (unaff_x21 == (long *)0x0) {
          unaff_x21 = (long *)0x78;
          __Znwm();
          unaff_x21[2] = (long)plStack_6b8;
          unaff_x21[1] = (long)plStack_6c0;
          plStack_6c0 = (long *)0x0;
          plStack_6b8 = (long *)0x0;
          unaff_x21[4] = (long)plStack_6a8;
          unaff_x21[3] = (long)plStack_6b0;
          plStack_6b0 = (long *)0x0;
          plStack_6a8 = (long *)0x0;
          unaff_x21[5] = (long)pcStack_6a0;
          (*(code *)apuStack_698[0][2])(unaff_x21 + 6,apuStack_698);
          unaff_x21[0xe] = 0x10ad2b244;
          pcStack_6e0 = FUN_10ad2aff0;
          ppcVar12 = &pcStack_6e0;
          plStack_6d8 = unaff_x21;
          plStack_6d0 = plVar6;
          (**(code **)*plVar6)(plVar6);
        }
        else {
          lStack_6e8 = 0;
          (**(code **)(*unaff_x21 + 0x28))(unaff_x21,0,&lStack_6e8);
          if (lStack_6e8 != 0) {
            func_0x0001092af97c(&lStack_6e8);
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x10ad293c4);
            (*pcVar17)();
          }
          unaff_x22 = (long *)0x80;
          __Znwm();
          unaff_x22[2] = (long)plStack_6b8;
          unaff_x22[1] = (long)plStack_6c0;
          plStack_6c0 = (long *)0x0;
          plStack_6b8 = (long *)0x0;
          unaff_x22[4] = (long)plStack_6a8;
          unaff_x22[3] = (long)plStack_6b0;
          plStack_6b0 = (long *)0x0;
          plStack_6a8 = (long *)0x0;
          unaff_x22[5] = (long)pcStack_6a0;
          (*(code *)apuStack_698[0][2])(unaff_x22 + 6,apuStack_698);
          unaff_x22[0xe] = (long)FUN_10ad2b200;
          unaff_x22[0xf] = (long)unaff_x21;
          pcStack_6e0 = (code *)0x10ad2afc0;
          ppcVar12 = &pcStack_6e0;
          plStack_6d8 = unaff_x22;
          plStack_6d0 = plVar6;
          (**(code **)*plVar6)(plVar6);
          __ZNSt13exception_ptrD1Ev(&lStack_6e8);
        }
        lStack_6e8 = 0;
        __ZNSt13exception_ptrD1Ev(&lStack_6e8);
        (*(code *)*apuStack_698[0])(apuStack_698);
        plVar7 = plStack_6a8;
        if (plStack_6a8 != (long *)0x0) {
          plVar6 = plStack_6a8 + 1;
          do {
            lVar15 = *plVar6;
            cVar1 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar4) {
              *plVar6 = lVar15 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plStack_6a8 + 0x10))(plStack_6a8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
          }
        }
        plVar7 = plStack_6b8;
        if (plStack_6b8 != (long *)0x0) {
          plVar6 = plStack_6b8 + 1;
          do {
            lVar15 = *plVar6;
            cVar1 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar4) {
              *plVar6 = lVar15 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plStack_6b8 + 0x10))(plStack_6b8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
          }
        }
      }
      plVar7 = plStack_718;
      if (plStack_718 != (long *)0x0) {
        plVar6 = plStack_718 + 1;
        do {
          lVar15 = *plVar6;
          cVar1 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = lVar15 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plStack_718 + 0x10))(plStack_718);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      plVar7 = (long *)plVar5[1];
      plVar6 = plVar5;
      if ((long *)plVar5[1] == (long *)0x0) {
        do {
          plVar5 = (long *)plVar6[2];
          bVar4 = (long *)*plVar5 != plVar6;
          plVar6 = plVar5;
        } while (bVar4);
      }
      else {
        do {
          plVar5 = plVar7;
          plVar7 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
      lVar15 = lStack_6f0;
    } while (plVar5 != &lStack_6f8);
  }
  if (lVar15 == 0) {
    (**ppcVar11)(ppcVar11);
  }
  plVar5 = plStack_708;
  if (plStack_708 != (long *)0x0) {
    plVar7 = plStack_708 + 1;
    do {
      lVar15 = *plVar7;
      cVar1 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar15 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_708 + 0x10))(plStack_708);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  lVar15 = lStack_6f8;
  func_0x00010ad29968();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_660) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010ad29f7c(&plStack_710);
  func_0x00010ad29968(lStack_6f8);
  __Unwind_Resume();
  pcStack_728 = FUN_10ad29454;
  plStack_760 = &lStack_6f8;
  puStack_758 = unaff_x23;
  plStack_750 = unaff_x22;
  plStack_748 = unaff_x21;
  pppppuStack_730 = &pppppuStack_600;
  __ZNSt3__15mutex4lockEv(lVar15 + 0x30);
  plVar5 = (long *)(lVar15 + 0x20);
  plVar7 = (long *)*plVar5;
  pcVar17 = ppcVar12[1];
  pcVar20 = ppcVar12[1];
  pcVar16 = *ppcVar12;
  do {
    plVar6 = plVar5;
    if (plVar7 == (long *)0x0) {
LAB_10ad294d4:
      lVar8 = 0x30;
      __Znwm();
      *(code **)(lVar8 + 0x28) = pcVar20;
      *(code **)(lVar8 + 0x20) = pcVar16;
      if (pcVar17 != (code *)0x0) {
        pcVar17 = pcVar17 + 0x10;
        do {
          cVar1 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar17,0x10);
          if (bVar4) {
            *(long *)pcVar17 = *(long *)pcVar17 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      func_0x00010ad29914(lVar15 + 0x18,plVar5,plVar6);
LAB_10ad29510:
      __ZNSt3__15mutex6unlockEv(lVar15 + 0x30);
      if (((*(char *)(lVar15 + 0x70) == '\x01') && (pcVar17 = ppcVar12[1], pcVar17 != (code *)0x0))
         && (__ZNSt3__119__shared_weak_count4lockEv(), pcVar17 != (code *)0x0)) {
        pcVar16 = *ppcVar12;
        if (pcVar16 != (code *)0x0) {
          pcVar9 = pcVar16;
          (**(code **)(*(long *)pcVar16 + 0xa8))();
          pcVar20 = pcVar17 + 8;
          do {
            cVar1 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pcVar20,0x10);
            if (bVar4) {
              *(long *)pcVar20 = *(long *)pcVar20 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          plVar5 = *(long **)(pcVar9 + 0x10);
          pcStack_768 = pcVar9;
          if (plVar5 == (long *)0x0) {
            puVar10 = (undefined8 *)0x20;
            __Znwm();
            *puVar10 = pcVar16;
            puVar10[1] = pcVar17;
            puVar10[3] = 0x10ad2b3f4;
            pcStack_778 = FUN_10ad2b390;
            puStack_770 = puVar10;
            (*(code *)**(undefined8 **)pcVar9)(pcVar9,&pcStack_778);
          }
          else {
            lStack_780 = 0;
            (**(code **)(*plVar5 + 0x28))(plVar5,0,&lStack_780);
            if (lStack_780 != 0) {
              func_0x0001092af97c(&lStack_780);
                    /* WARNING: Does not return */
              pcVar17 = (code *)SoftwareBreakpoint(1,0x10ad29694);
              (*pcVar17)();
            }
            puVar10 = (undefined8 *)0x28;
            __Znwm();
            *puVar10 = pcVar16;
            puVar10[1] = pcVar17;
            puVar10[3] = FUN_10ad2b3d8;
            puVar10[4] = plVar5;
            pcStack_778 = (code *)0x10ad2b360;
            puStack_770 = puVar10;
            (*(code *)**(undefined8 **)pcVar9)(pcVar9,&pcStack_778);
            __ZNSt13exception_ptrD1Ev(&lStack_780);
          }
          lStack_780 = 0;
          __ZNSt13exception_ptrD1Ev(&lStack_780);
        }
        pcVar16 = pcVar17 + 8;
        do {
          lVar8 = *(long *)pcVar16;
          cVar1 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar16,0x10);
          if (bVar4) {
            *(long *)pcVar16 = lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*(long *)pcVar17 + 0x10))(pcVar17);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar17);
        }
      }
      (**(code **)(lVar15 + 0x78))((undefined8 *)(lVar15 + 0x78));
      return;
    }
    while (plVar5 = plVar7, (code *)plVar5[5] <= pcVar17) {
      if (pcVar17 <= (code *)plVar5[5]) goto LAB_10ad29510;
      plVar7 = (long *)plVar5[1];
      if ((long *)plVar5[1] == (long *)0x0) {
        plVar6 = plVar5 + 1;
        goto LAB_10ad294d4;
      }
    }
    plVar7 = (long *)*plVar5;
  } while( true );
}



/* Entry: 10ad27e98; end: 10ad282f3;  */

void FUN_10ad27e98(undefined8 *param_1,long *param_2)

{
  char cVar1;
  long **pplVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  code *pcVar8;
  undefined8 *puVar9;
  code **ppcVar10;
  code **ppcVar11;
  long **pplVar12;
  long lVar13;
  long *unaff_x21;
  long *unaff_x22;
  code *pcVar14;
  undefined1 *unaff_x23;
  code *pcVar15;
  long **pplVar16;
  undefined8 unaff_x26;
  code *unaff_x27;
  code *unaff_x28;
  code *pcVar17;
  long lStack_650;
  code *pcStack_648;
  undefined8 *puStack_640;
  code *pcStack_638;
  long *plStack_630;
  undefined1 *puStack_628;
  long *plStack_620;
  long *plStack_618;
  undefined1 *****pppppuStack_600;
  code *pcStack_5f8;
  long *plStack_5f0;
  long *plStack_5e8;
  long *plStack_5e0;
  long *plStack_5d8;
  long *plStack_5d0;
  long lStack_5c8;
  long lStack_5c0;
  long lStack_5b8;
  code *pcStack_5b0;
  long *plStack_5a8;
  long *plStack_5a0;
  undefined1 auStack_598 [8];
  long *plStack_590;
  long *plStack_588;
  long *plStack_580;
  long *plStack_578;
  code *pcStack_570;
  undefined8 *apuStack_568 [7];
  long lStack_530;
  code *pcStack_520;
  code *pcStack_518;
  undefined8 uStack_510;
  long **pplStack_508;
  long **pplStack_500;
  undefined1 *puStack_4f8;
  long *plStack_4f0;
  long *plStack_4e8;
  undefined1 ****ppppuStack_4d0;
  code *pcStack_4c8;
  long *plStack_4c0;
  long *plStack_4b8;
  long *plStack_4b0;
  long *plStack_4a8;
  long **pplStack_4a0;
  long *plStack_498;
  long lStack_490;
  long lStack_488;
  code *pcStack_480;
  long *plStack_478;
  long *plStack_470;
  undefined1 auStack_468 [8];
  long *plStack_460;
  long *plStack_458;
  long *plStack_450;
  long *plStack_448;
  code *pcStack_440;
  undefined8 *apuStack_438 [7];
  long lStack_400;
  code *pcStack_3f0;
  code *pcStack_3e8;
  undefined8 uStack_3e0;
  long **pplStack_3d8;
  long **pplStack_3d0;
  undefined1 *puStack_3c8;
  long *plStack_3c0;
  long *plStack_3b8;
  undefined1 ***pppuStack_3a0;
  code *pcStack_398;
  long *plStack_390;
  long *plStack_388;
  long *plStack_380;
  long *plStack_378;
  long **pplStack_370;
  long *plStack_368;
  long lStack_360;
  long lStack_358;
  code *pcStack_350;
  long *plStack_348;
  long *plStack_340;
  undefined1 auStack_338 [8];
  long *plStack_330;
  long *plStack_328;
  long *plStack_320;
  long *plStack_318;
  code *pcStack_310;
  undefined8 *apuStack_308 [7];
  long lStack_2d0;
  code *pcStack_2c0;
  code *pcStack_2b8;
  undefined8 uStack_2b0;
  long **pplStack_2a8;
  long **pplStack_2a0;
  undefined1 *puStack_298;
  long *plStack_290;
  long *plStack_288;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  long *plStack_260;
  long *plStack_258;
  long *plStack_250;
  long *plStack_248;
  long **pplStack_240;
  long *plStack_238;
  long lStack_230;
  long lStack_228;
  code *pcStack_220;
  long *plStack_218;
  long *plStack_210;
  undefined1 auStack_208 [8];
  long *plStack_200;
  long *plStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  code *pcStack_1e0;
  undefined8 *apuStack_1d8 [7];
  long lStack_1a0;
  code *pcStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  long **pplStack_178;
  long **pplStack_170;
  undefined1 *puStack_168;
  long *plStack_160;
  long *plStack_158;
  undefined1 *puStack_140;
  code *pcStack_138;
  long *plStack_130;
  long *plStack_128;
  long *plStack_120;
  long *plStack_118;
  long **pplStack_110;
  long *plStack_108;
  long lStack_100;
  long lStack_f8;
  code *pcStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  undefined1 auStack_d8 [8];
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long lStack_b0;
  undefined8 *apuStack_a8 [7];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar10 = (code **)*param_1;
  *(undefined1 *)(ppcVar10 + 0xe) = 0;
  FUN_10ad27758(&pplStack_110);
  lVar13 = lStack_100;
  plVar4 = (long *)0x20;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110c6f210;
  plStack_120 = plVar4 + 3;
  *plStack_120 = lVar13;
  pplVar12 = pplStack_110;
  plStack_118 = plVar4;
  if (pplStack_110 != &plStack_108) {
    unaff_x23 = auStack_d8;
    unaff_x27 = FUN_10ad2a040;
    unaff_x28 = FUN_10ad2a260;
    unaff_x26 = 0x10ad2a010;
    do {
      plStack_130 = (long *)0x0;
      plStack_128 = (long *)0x0;
      plVar4 = pplVar12[5];
      if (((plVar4 == (long *)0x0) ||
          (__ZNSt3__119__shared_weak_count4lockEv(), plStack_128 = plVar4, plVar4 == (long *)0x0))
         || (unaff_x22 = pplVar12[4], plStack_130 = unaff_x22, unaff_x22 == (long *)0x0)) {
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_120,0x10);
          if (bVar3) {
            *plStack_120 = *plStack_120 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      else {
        plVar5 = unaff_x22;
        (**(code **)(*unaff_x22 + 0xa8))();
        plVar6 = plVar4 + 1;
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        plStack_b8 = plStack_118;
        plStack_c0 = plStack_120;
        if (plStack_118 != (long *)0x0) {
          plVar6 = plStack_118 + 1;
          do {
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = *plVar6 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        lStack_b0 = *param_2;
        plStack_d0 = unaff_x22;
        plStack_c8 = plVar4;
        (**(code **)(param_2[1] + 0x18))(apuStack_a8,param_2 + 1);
        unaff_x21 = (long *)plVar5[2];
        if (unaff_x21 == (long *)0x0) {
          unaff_x21 = (long *)0x78;
          __Znwm();
          unaff_x21[2] = (long)plStack_c8;
          unaff_x21[1] = (long)plStack_d0;
          plStack_d0 = (long *)0x0;
          plStack_c8 = (long *)0x0;
          unaff_x21[4] = (long)plStack_b8;
          unaff_x21[3] = (long)plStack_c0;
          plStack_c0 = (long *)0x0;
          plStack_b8 = (long *)0x0;
          unaff_x21[5] = lStack_b0;
          (*(code *)apuStack_a8[0][2])(unaff_x21 + 6,apuStack_a8);
          unaff_x21[0xe] = 0x10ad2a2a4;
          pcStack_f0 = FUN_10ad2a040;
          ppcVar10 = &pcStack_f0;
          plStack_e8 = unaff_x21;
          plStack_e0 = plVar5;
          (**(code **)*plVar5)(plVar5);
        }
        else {
          lStack_f8 = 0;
          (**(code **)(*unaff_x21 + 0x28))(unaff_x21,0,&lStack_f8);
          if (lStack_f8 != 0) {
            func_0x0001092af97c(&lStack_f8);
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x10ad28264);
            (*pcVar15)();
          }
          unaff_x22 = (long *)0x80;
          __Znwm();
          unaff_x22[2] = (long)plStack_c8;
          unaff_x22[1] = (long)plStack_d0;
          plStack_d0 = (long *)0x0;
          plStack_c8 = (long *)0x0;
          unaff_x22[4] = (long)plStack_b8;
          unaff_x22[3] = (long)plStack_c0;
          plStack_c0 = (long *)0x0;
          plStack_b8 = (long *)0x0;
          unaff_x22[5] = lStack_b0;
          (*(code *)apuStack_a8[0][2])(unaff_x22 + 6,apuStack_a8);
          unaff_x22[0xe] = (long)FUN_10ad2a260;
          unaff_x22[0xf] = (long)unaff_x21;
          pcStack_f0 = (code *)0x10ad2a010;
          ppcVar10 = &pcStack_f0;
          plStack_e8 = unaff_x22;
          plStack_e0 = plVar5;
          (**(code **)*plVar5)(plVar5);
          __ZNSt13exception_ptrD1Ev(&lStack_f8);
        }
        lStack_f8 = 0;
        __ZNSt13exception_ptrD1Ev(&lStack_f8);
        (*(code *)*apuStack_a8[0])(apuStack_a8);
        plVar4 = plStack_b8;
        if (plStack_b8 != (long *)0x0) {
          plVar6 = plStack_b8 + 1;
          do {
            lVar13 = *plVar6;
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar13 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
        plVar4 = plStack_c8;
        if (plStack_c8 != (long *)0x0) {
          plVar6 = plStack_c8 + 1;
          do {
            lVar13 = *plVar6;
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar13 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
      }
      plVar4 = plStack_128;
      if (plStack_128 != (long *)0x0) {
        plVar6 = plStack_128 + 1;
        do {
          lVar13 = *plVar6;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar13 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_128 + 0x10))(plStack_128);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      pplVar2 = (long **)pplVar12[1];
      pplVar16 = pplVar12;
      if ((long **)pplVar12[1] == (long **)0x0) {
        do {
          pplVar12 = (long **)pplVar16[2];
          bVar3 = (long **)*pplVar12 != pplVar16;
          pplVar16 = pplVar12;
        } while (bVar3);
      }
      else {
        do {
          pplVar12 = pplVar2;
          pplVar2 = (long **)*pplVar12;
        } while ((long **)*pplVar12 != (long **)0x0);
      }
      lVar13 = lStack_100;
    } while (pplVar12 != &plStack_108);
  }
  if (lVar13 == 0) {
    (*(code *)*param_2)(param_2);
  }
  plVar4 = plStack_118;
  if (plStack_118 != (long *)0x0) {
    plVar6 = plStack_118 + 1;
    do {
      lVar13 = *plVar6;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar13 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_118 + 0x10))(plStack_118);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = plStack_108;
  func_0x00010ad29968();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010ad29f7c(&plStack_120);
  func_0x00010ad29968(plStack_108);
  __Unwind_Resume();
  pcStack_138 = FUN_10ad282f4;
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar11 = (code **)*plVar4;
  pcStack_190 = unaff_x28;
  pcStack_188 = unaff_x27;
  uStack_180 = unaff_x26;
  pplStack_178 = pplVar12;
  pplStack_170 = &plStack_108;
  puStack_168 = unaff_x23;
  plStack_160 = unaff_x22;
  plStack_158 = unaff_x21;
  puStack_140 = &stack0xfffffffffffffff0;
  FUN_10ad27758(&pplStack_240);
  lVar13 = lStack_230;
  plVar4 = (long *)0x20;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110c6f210;
  plVar4[3] = lVar13;
  plStack_250 = plVar4 + 3;
  plStack_248 = plVar4;
  pplVar12 = pplStack_240;
  if (pplStack_240 != &plStack_238) {
    unaff_x23 = auStack_208;
    unaff_x27 = FUN_10ad2a42c;
    unaff_x28 = FUN_10ad2a64c;
    unaff_x26 = 0x10ad2a3fc;
    do {
      plStack_260 = (long *)0x0;
      plStack_258 = (long *)0x0;
      plVar4 = pplVar12[5];
      if (plVar4 == (long *)0x0) {
LAB_10ad284b0:
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_250,0x10);
          if (bVar3) {
            *plStack_250 = *plStack_250 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      else {
        __ZNSt3__119__shared_weak_count4lockEv();
        plStack_258 = plVar4;
        if (plVar4 == (long *)0x0) goto LAB_10ad284b0;
        unaff_x22 = pplVar12[4];
        plStack_260 = unaff_x22;
        if (unaff_x22 == (long *)0x0) goto LAB_10ad284b0;
        plVar6 = unaff_x22;
        (**(code **)(*unaff_x22 + 0xa8))();
        plStack_200 = unaff_x22;
        plStack_1f8 = plVar4;
        plVar4 = plVar4 + 1;
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        plStack_1e8 = plStack_248;
        plStack_1f0 = plStack_250;
        if (plStack_248 != (long *)0x0) {
          plVar4 = plStack_248 + 1;
          do {
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar3) {
              *plVar4 = *plVar4 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        pcStack_1e0 = *ppcVar10;
        (**(code **)(ppcVar10[1] + 0x18))(apuStack_1d8,ppcVar10 + 1);
        unaff_x21 = (long *)plVar6[2];
        if (unaff_x21 == (long *)0x0) {
          unaff_x21 = (long *)0x78;
          __Znwm();
          unaff_x21[2] = (long)plStack_1f8;
          unaff_x21[1] = (long)plStack_200;
          plStack_200 = (long *)0x0;
          plStack_1f8 = (long *)0x0;
          unaff_x21[4] = (long)plStack_1e8;
          unaff_x21[3] = (long)plStack_1f0;
          plStack_1f0 = (long *)0x0;
          plStack_1e8 = (long *)0x0;
          unaff_x21[5] = (long)pcStack_1e0;
          (*(code *)apuStack_1d8[0][2])(unaff_x21 + 6,apuStack_1d8);
          unaff_x21[0xe] = 0x10ad2a690;
          pcStack_220 = FUN_10ad2a42c;
          ppcVar11 = &pcStack_220;
          plStack_218 = unaff_x21;
          plStack_210 = plVar6;
          (**(code **)*plVar6)(plVar6);
        }
        else {
          lStack_228 = 0;
          (**(code **)(*unaff_x21 + 0x28))(unaff_x21,0,&lStack_228);
          if (lStack_228 != 0) {
            func_0x0001092af97c(&lStack_228);
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x10ad286bc);
            (*pcVar15)();
          }
          unaff_x22 = (long *)0x80;
          __Znwm();
          unaff_x22[2] = (long)plStack_1f8;
          unaff_x22[1] = (long)plStack_200;
          plStack_200 = (long *)0x0;
          plStack_1f8 = (long *)0x0;
          unaff_x22[4] = (long)plStack_1e8;
          unaff_x22[3] = (long)plStack_1f0;
          plStack_1f0 = (long *)0x0;
          plStack_1e8 = (long *)0x0;
          unaff_x22[5] = (long)pcStack_1e0;
          (*(code *)apuStack_1d8[0][2])(unaff_x22 + 6,apuStack_1d8);
          unaff_x22[0xe] = (long)FUN_10ad2a64c;
          unaff_x22[0xf] = (long)unaff_x21;
          pcStack_220 = (code *)0x10ad2a3fc;
          ppcVar11 = &pcStack_220;
          plStack_218 = unaff_x22;
          plStack_210 = plVar6;
          (**(code **)*plVar6)(plVar6);
          __ZNSt13exception_ptrD1Ev(&lStack_228);
        }
        lStack_228 = 0;
        __ZNSt13exception_ptrD1Ev(&lStack_228);
        (*(code *)*apuStack_1d8[0])(apuStack_1d8);
        plVar4 = plStack_1e8;
        if (plStack_1e8 != (long *)0x0) {
          plVar6 = plStack_1e8 + 1;
          do {
            lVar13 = *plVar6;
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar13 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_1e8 + 0x10))(plStack_1e8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
        plVar4 = plStack_1f8;
        if (plStack_1f8 != (long *)0x0) {
          plVar6 = plStack_1f8 + 1;
          do {
            lVar13 = *plVar6;
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar13 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
      }
      plVar4 = plStack_258;
      if (plStack_258 != (long *)0x0) {
        plVar6 = plStack_258 + 1;
        do {
          lVar13 = *plVar6;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar13 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_258 + 0x10))(plStack_258);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      pplVar2 = (long **)pplVar12[1];
      pplVar16 = pplVar12;
      if ((long **)pplVar12[1] == (long **)0x0) {
        do {
          pplVar12 = (long **)pplVar16[2];
          bVar3 = (long **)*pplVar12 != pplVar16;
          pplVar16 = pplVar12;
        } while (bVar3);
      }
      else {
        do {
          pplVar12 = pplVar2;
          pplVar2 = (long **)*pplVar12;
        } while ((long **)*pplVar12 != (long **)0x0);
      }
      lVar13 = lStack_230;
    } while (pplVar12 != &plStack_238);
  }
  if (lVar13 == 0) {
    (**ppcVar10)(ppcVar10);
  }
  plVar4 = plStack_248;
  if (plStack_248 != (long *)0x0) {
    plVar6 = plStack_248 + 1;
    do {
      lVar13 = *plVar6;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar13 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_248 + 0x10))(plStack_248);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = plStack_238;
  func_0x00010ad29968();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010ad29f7c(&plStack_250);
  func_0x00010ad29968(plStack_238);
  __Unwind_Resume();
  pcStack_268 = FUN_10ad2874c;
  lStack_2d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar10 = (code **)*plVar4;
  pcStack_2c0 = unaff_x28;
  pcStack_2b8 = unaff_x27;
  uStack_2b0 = unaff_x26;
  pplStack_2a8 = pplVar12;
  pplStack_2a0 = &plStack_238;
  puStack_298 = unaff_x23;
  plStack_290 = unaff_x22;
  plStack_288 = unaff_x21;
  ppuStack_270 = &puStack_140;
  FUN_10ad27758(&pplStack_370);
  lVar13 = lStack_360;
  plVar4 = (long *)0x20;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110c6f210;
  plVar4[3] = lVar13;
  plStack_380 = plVar4 + 3;
  plStack_378 = plVar4;
  pplVar12 = pplStack_370;
  if (pplStack_370 != &plStack_368) {
    unaff_x23 = auStack_338;
    unaff_x27 = FUN_10ad2a818;
    unaff_x28 = FUN_10ad2aa38;
    unaff_x26 = 0x10ad2a7e8;
    do {
      plStack_390 = (long *)0x0;
      plStack_388 = (long *)0x0;
      plVar4 = pplVar12[5];
      if (plVar4 == (long *)0x0) {
LAB_10ad28908:
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_380,0x10);
          if (bVar3) {
            *plStack_380 = *plStack_380 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      else {
        __ZNSt3__119__shared_weak_count4lockEv();
        plStack_388 = plVar4;
        if (plVar4 == (long *)0x0) goto LAB_10ad28908;
        unaff_x22 = pplVar12[4];
        plStack_390 = unaff_x22;
        if (unaff_x22 == (long *)0x0) goto LAB_10ad28908;
        plVar6 = unaff_x22;
        (**(code **)(*unaff_x22 + 0xa8))();
        plStack_330 = unaff_x22;
        plStack_328 = plVar4;
        plVar4 = plVar4 + 1;
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        plStack_318 = plStack_378;
        plStack_320 = plStack_380;
        if (plStack_378 != (long *)0x0) {
          plVar4 = plStack_378 + 1;
          do {
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar3) {
              *plVar4 = *plVar4 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        pcStack_310 = *ppcVar11;
        (**(code **)(ppcVar11[1] + 0x18))(apuStack_308,ppcVar11 + 1);
        unaff_x21 = (long *)plVar6[2];
        if (unaff_x21 == (long *)0x0) {
          unaff_x21 = (long *)0x78;
          __Znwm();
          unaff_x21[2] = (long)plStack_328;
          unaff_x21[1] = (long)plStack_330;
          plStack_330 = (long *)0x0;
          plStack_328 = (long *)0x0;
          unaff_x21[4] = (long)plStack_318;
          unaff_x21[3] = (long)plStack_320;
          plStack_320 = (long *)0x0;
          plStack_318 = (long *)0x0;
          unaff_x21[5] = (long)pcStack_310;
          (*(code *)apuStack_308[0][2])(unaff_x21 + 6,apuStack_308);
          unaff_x21[0xe] = 0x10ad2aa7c;
          pcStack_350 = FUN_10ad2a818;
          ppcVar10 = &pcStack_350;
          plStack_348 = unaff_x21;
          plStack_340 = plVar6;
          (**(code **)*plVar6)(plVar6);
        }
        else {
          lStack_358 = 0;
          (**(code **)(*unaff_x21 + 0x28))(unaff_x21,0,&lStack_358);
          if (lStack_358 != 0) {
            func_0x0001092af97c(&lStack_358);
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x10ad28b14);
            (*pcVar15)();
          }
          unaff_x22 = (long *)0x80;
          __Znwm();
          unaff_x22[2] = (long)plStack_328;
          unaff_x22[1] = (long)plStack_330;
          plStack_330 = (long *)0x0;
          plStack_328 = (long *)0x0;
          unaff_x22[4] = (long)plStack_318;
          unaff_x22[3] = (long)plStack_320;
          plStack_320 = (long *)0x0;
          plStack_318 = (long *)0x0;
          unaff_x22[5] = (long)pcStack_310;
          (*(code *)apuStack_308[0][2])(unaff_x22 + 6,apuStack_308);
          unaff_x22[0xe] = (long)FUN_10ad2aa38;
          unaff_x22[0xf] = (long)unaff_x21;
          pcStack_350 = (code *)0x10ad2a7e8;
          ppcVar10 = &pcStack_350;
          plStack_348 = unaff_x22;
          plStack_340 = plVar6;
          (**(code **)*plVar6)(plVar6);
          __ZNSt13exception_ptrD1Ev(&lStack_358);
        }
        lStack_358 = 0;
        __ZNSt13exception_ptrD1Ev(&lStack_358);
        (*(code *)*apuStack_308[0])(apuStack_308);
        plVar4 = plStack_318;
        if (plStack_318 != (long *)0x0) {
          plVar6 = plStack_318 + 1;
          do {
            lVar13 = *plVar6;
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar13 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_318 + 0x10))(plStack_318);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
        plVar4 = plStack_328;
        if (plStack_328 != (long *)0x0) {
          plVar6 = plStack_328 + 1;
          do {
            lVar13 = *plVar6;
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar13 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_328 + 0x10))(plStack_328);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
      }
      plVar4 = plStack_388;
      if (plStack_388 != (long *)0x0) {
        plVar6 = plStack_388 + 1;
        do {
          lVar13 = *plVar6;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar13 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_388 + 0x10))(plStack_388);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      pplVar2 = (long **)pplVar12[1];
      pplVar16 = pplVar12;
      if ((long **)pplVar12[1] == (long **)0x0) {
        do {
          pplVar12 = (long **)pplVar16[2];
          bVar3 = (long **)*pplVar12 != pplVar16;
          pplVar16 = pplVar12;
        } while (bVar3);
      }
      else {
        do {
          pplVar12 = pplVar2;
          pplVar2 = (long **)*pplVar12;
        } while ((long **)*pplVar12 != (long **)0x0);
      }
      lVar13 = lStack_360;
    } while (pplVar12 != &plStack_368);
  }
  if (lVar13 == 0) {
    (**ppcVar11)(ppcVar11);
  }
  plVar4 = plStack_378;
  if (plStack_378 != (long *)0x0) {
    plVar6 = plStack_378 + 1;
    do {
      lVar13 = *plVar6;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar13 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_378 + 0x10))(plStack_378);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = plStack_368;
  func_0x00010ad29968();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d0) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010ad29f7c(&plStack_380);
  func_0x00010ad29968(plStack_368);
  __Unwind_Resume();
  pcStack_398 = FUN_10ad28ba4;
  lStack_400 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar11 = (code **)*plVar4;
  pcStack_3f0 = unaff_x28;
  pcStack_3e8 = unaff_x27;
  uStack_3e0 = unaff_x26;
  pplStack_3d8 = pplVar12;
  pplStack_3d0 = &plStack_368;
  puStack_3c8 = unaff_x23;
  plStack_3c0 = unaff_x22;
  plStack_3b8 = unaff_x21;
  pppuStack_3a0 = &ppuStack_270;
  FUN_10ad27758(&pplStack_4a0);
  lVar13 = lStack_490;
  plVar4 = (long *)0x20;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110c6f210;
  plVar4[3] = lVar13;
  plStack_4b0 = plVar4 + 3;
  plStack_4a8 = plVar4;
  pplVar12 = pplStack_4a0;
  if (pplStack_4a0 != &plStack_498) {
    unaff_x23 = auStack_468;
    unaff_x27 = FUN_10ad2ac04;
    unaff_x28 = FUN_10ad2ae24;
    unaff_x26 = 0x10ad2abd4;
    do {
      plStack_4c0 = (long *)0x0;
      plStack_4b8 = (long *)0x0;
      plVar4 = pplVar12[5];
      if (plVar4 == (long *)0x0) {
LAB_10ad28d60:
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_4b0,0x10);
          if (bVar3) {
            *plStack_4b0 = *plStack_4b0 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      else {
        __ZNSt3__119__shared_weak_count4lockEv();
        plStack_4b8 = plVar4;
        if (plVar4 == (long *)0x0) goto LAB_10ad28d60;
        unaff_x22 = pplVar12[4];
        plStack_4c0 = unaff_x22;
        if (unaff_x22 == (long *)0x0) goto LAB_10ad28d60;
        plVar6 = unaff_x22;
        (**(code **)(*unaff_x22 + 0xa8))();
        plStack_460 = unaff_x22;
        plStack_458 = plVar4;
        plVar4 = plVar4 + 1;
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        plStack_448 = plStack_4a8;
        plStack_450 = plStack_4b0;
        if (plStack_4a8 != (long *)0x0) {
          plVar4 = plStack_4a8 + 1;
          do {
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar3) {
              *plVar4 = *plVar4 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        pcStack_440 = *ppcVar10;
        (**(code **)(ppcVar10[1] + 0x18))(apuStack_438,ppcVar10 + 1);
        unaff_x21 = (long *)plVar6[2];
        if (unaff_x21 == (long *)0x0) {
          unaff_x21 = (long *)0x78;
          __Znwm();
          unaff_x21[2] = (long)plStack_458;
          unaff_x21[1] = (long)plStack_460;
          plStack_460 = (long *)0x0;
          plStack_458 = (long *)0x0;
          unaff_x21[4] = (long)plStack_448;
          unaff_x21[3] = (long)plStack_450;
          plStack_450 = (long *)0x0;
          plStack_448 = (long *)0x0;
          unaff_x21[5] = (long)pcStack_440;
          (*(code *)apuStack_438[0][2])(unaff_x21 + 6,apuStack_438);
          unaff_x21[0xe] = 0x10ad2ae68;
          pcStack_480 = FUN_10ad2ac04;
          ppcVar11 = &pcStack_480;
          plStack_478 = unaff_x21;
          plStack_470 = plVar6;
          (**(code **)*plVar6)(plVar6);
        }
        else {
          lStack_488 = 0;
          (**(code **)(*unaff_x21 + 0x28))(unaff_x21,0,&lStack_488);
          if (lStack_488 != 0) {
            func_0x0001092af97c(&lStack_488);
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x10ad28f6c);
            (*pcVar15)();
          }
          unaff_x22 = (long *)0x80;
          __Znwm();
          unaff_x22[2] = (long)plStack_458;
          unaff_x22[1] = (long)plStack_460;
          plStack_460 = (long *)0x0;
          plStack_458 = (long *)0x0;
          unaff_x22[4] = (long)plStack_448;
          unaff_x22[3] = (long)plStack_450;
          plStack_450 = (long *)0x0;
          plStack_448 = (long *)0x0;
          unaff_x22[5] = (long)pcStack_440;
          (*(code *)apuStack_438[0][2])(unaff_x22 + 6,apuStack_438);
          unaff_x22[0xe] = (long)FUN_10ad2ae24;
          unaff_x22[0xf] = (long)unaff_x21;
          pcStack_480 = (code *)0x10ad2abd4;
          ppcVar11 = &pcStack_480;
          plStack_478 = unaff_x22;
          plStack_470 = plVar6;
          (**(code **)*plVar6)(plVar6);
          __ZNSt13exception_ptrD1Ev(&lStack_488);
        }
        lStack_488 = 0;
        __ZNSt13exception_ptrD1Ev(&lStack_488);
        (*(code *)*apuStack_438[0])(apuStack_438);
        plVar4 = plStack_448;
        if (plStack_448 != (long *)0x0) {
          plVar6 = plStack_448 + 1;
          do {
            lVar13 = *plVar6;
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar13 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_448 + 0x10))(plStack_448);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
        plVar4 = plStack_458;
        if (plStack_458 != (long *)0x0) {
          plVar6 = plStack_458 + 1;
          do {
            lVar13 = *plVar6;
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar13 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_458 + 0x10))(plStack_458);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
      }
      plVar4 = plStack_4b8;
      if (plStack_4b8 != (long *)0x0) {
        plVar6 = plStack_4b8 + 1;
        do {
          lVar13 = *plVar6;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar13 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_4b8 + 0x10))(plStack_4b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      pplVar2 = (long **)pplVar12[1];
      pplVar16 = pplVar12;
      if ((long **)pplVar12[1] == (long **)0x0) {
        do {
          pplVar12 = (long **)pplVar16[2];
          bVar3 = (long **)*pplVar12 != pplVar16;
          pplVar16 = pplVar12;
        } while (bVar3);
      }
      else {
        do {
          pplVar12 = pplVar2;
          pplVar2 = (long **)*pplVar12;
        } while ((long **)*pplVar12 != (long **)0x0);
      }
      lVar13 = lStack_490;
    } while (pplVar12 != &plStack_498);
  }
  if (lVar13 == 0) {
    (**ppcVar10)(ppcVar10);
  }
  plVar4 = plStack_4a8;
  if (plStack_4a8 != (long *)0x0) {
    plVar6 = plStack_4a8 + 1;
    do {
      lVar13 = *plVar6;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar13 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_4a8 + 0x10))(plStack_4a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = plStack_498;
  func_0x00010ad29968();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_400) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010ad29f7c(&plStack_4b0);
  func_0x00010ad29968(plStack_498);
  __Unwind_Resume();
  pcStack_4c8 = FUN_10ad28ffc;
  lStack_530 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar10 = (code **)*plVar4;
  pcStack_520 = unaff_x28;
  pcStack_518 = unaff_x27;
  uStack_510 = unaff_x26;
  pplStack_508 = pplVar12;
  pplStack_500 = &plStack_498;
  puStack_4f8 = unaff_x23;
  plStack_4f0 = unaff_x22;
  plStack_4e8 = unaff_x21;
  ppppuStack_4d0 = &pppuStack_3a0;
  FUN_10ad27758(&plStack_5d0);
  lVar13 = lStack_5c0;
  plVar4 = (long *)0x20;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110c6f210;
  plStack_5e0 = plVar4 + 3;
  *plStack_5e0 = lVar13;
  plStack_5d8 = plVar4;
  if (plStack_5d0 != &lStack_5c8) {
    unaff_x23 = auStack_598;
    plVar4 = plStack_5d0;
    do {
      plStack_5f0 = (long *)0x0;
      plStack_5e8 = (long *)0x0;
      plVar6 = (long *)plVar4[5];
      if (((plVar6 == (long *)0x0) ||
          (__ZNSt3__119__shared_weak_count4lockEv(), plStack_5e8 = plVar6, plVar6 == (long *)0x0))
         || (unaff_x22 = (long *)plVar4[4], plStack_5f0 = unaff_x22, unaff_x22 == (long *)0x0)) {
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_5e0,0x10);
          if (bVar3) {
            *plStack_5e0 = *plStack_5e0 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      else {
        plVar5 = unaff_x22;
        (**(code **)(*unaff_x22 + 0xa8))();
        plStack_590 = unaff_x22;
        plStack_588 = plVar6;
        plVar6 = plVar6 + 1;
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        plStack_578 = plStack_5d8;
        plStack_580 = plStack_5e0;
        if (plStack_5d8 != (long *)0x0) {
          plVar6 = plStack_5d8 + 1;
          do {
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = *plVar6 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        pcStack_570 = *ppcVar11;
        (**(code **)(ppcVar11[1] + 0x18))(apuStack_568,ppcVar11 + 1);
        unaff_x21 = (long *)plVar5[2];
        if (unaff_x21 == (long *)0x0) {
          unaff_x21 = (long *)0x78;
          __Znwm();
          unaff_x21[2] = (long)plStack_588;
          unaff_x21[1] = (long)plStack_590;
          plStack_590 = (long *)0x0;
          plStack_588 = (long *)0x0;
          unaff_x21[4] = (long)plStack_578;
          unaff_x21[3] = (long)plStack_580;
          plStack_580 = (long *)0x0;
          plStack_578 = (long *)0x0;
          unaff_x21[5] = (long)pcStack_570;
          (*(code *)apuStack_568[0][2])(unaff_x21 + 6,apuStack_568);
          unaff_x21[0xe] = 0x10ad2b244;
          pcStack_5b0 = FUN_10ad2aff0;
          ppcVar10 = &pcStack_5b0;
          plStack_5a8 = unaff_x21;
          plStack_5a0 = plVar5;
          (**(code **)*plVar5)(plVar5);
        }
        else {
          lStack_5b8 = 0;
          (**(code **)(*unaff_x21 + 0x28))(unaff_x21,0,&lStack_5b8);
          if (lStack_5b8 != 0) {
            func_0x0001092af97c(&lStack_5b8);
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x10ad293c4);
            (*pcVar15)();
          }
          unaff_x22 = (long *)0x80;
          __Znwm();
          unaff_x22[2] = (long)plStack_588;
          unaff_x22[1] = (long)plStack_590;
          plStack_590 = (long *)0x0;
          plStack_588 = (long *)0x0;
          unaff_x22[4] = (long)plStack_578;
          unaff_x22[3] = (long)plStack_580;
          plStack_580 = (long *)0x0;
          plStack_578 = (long *)0x0;
          unaff_x22[5] = (long)pcStack_570;
          (*(code *)apuStack_568[0][2])(unaff_x22 + 6,apuStack_568);
          unaff_x22[0xe] = (long)FUN_10ad2b200;
          unaff_x22[0xf] = (long)unaff_x21;
          pcStack_5b0 = (code *)0x10ad2afc0;
          ppcVar10 = &pcStack_5b0;
          plStack_5a8 = unaff_x22;
          plStack_5a0 = plVar5;
          (**(code **)*plVar5)(plVar5);
          __ZNSt13exception_ptrD1Ev(&lStack_5b8);
        }
        lStack_5b8 = 0;
        __ZNSt13exception_ptrD1Ev(&lStack_5b8);
        (*(code *)*apuStack_568[0])(apuStack_568);
        plVar6 = plStack_578;
        if (plStack_578 != (long *)0x0) {
          plVar5 = plStack_578 + 1;
          do {
            lVar13 = *plVar5;
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = lVar13 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_578 + 0x10))(plStack_578);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
        plVar6 = plStack_588;
        if (plStack_588 != (long *)0x0) {
          plVar5 = plStack_588 + 1;
          do {
            lVar13 = *plVar5;
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = lVar13 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_588 + 0x10))(plStack_588);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
      }
      plVar6 = plStack_5e8;
      if (plStack_5e8 != (long *)0x0) {
        plVar5 = plStack_5e8 + 1;
        do {
          lVar13 = *plVar5;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar13 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_5e8 + 0x10))(plStack_5e8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      plVar6 = (long *)plVar4[1];
      plVar5 = plVar4;
      if ((long *)plVar4[1] == (long *)0x0) {
        do {
          plVar4 = (long *)plVar5[2];
          bVar3 = (long *)*plVar4 != plVar5;
          plVar5 = plVar4;
        } while (bVar3);
      }
      else {
        do {
          plVar4 = plVar6;
          plVar6 = (long *)*plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
      }
      lVar13 = lStack_5c0;
    } while (plVar4 != &lStack_5c8);
  }
  if (lVar13 == 0) {
    (**ppcVar11)(ppcVar11);
  }
  plVar4 = plStack_5d8;
  if (plStack_5d8 != (long *)0x0) {
    plVar6 = plStack_5d8 + 1;
    do {
      lVar13 = *plVar6;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar13 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_5d8 + 0x10))(plStack_5d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  lVar13 = lStack_5c8;
  func_0x00010ad29968();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_530) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010ad29f7c(&plStack_5e0);
  func_0x00010ad29968(lStack_5c8);
  __Unwind_Resume();
  pcStack_5f8 = FUN_10ad29454;
  plStack_630 = &lStack_5c8;
  puStack_628 = unaff_x23;
  plStack_620 = unaff_x22;
  plStack_618 = unaff_x21;
  pppppuStack_600 = &ppppuStack_4d0;
  __ZNSt3__15mutex4lockEv(lVar13 + 0x30);
  plVar4 = (long *)(lVar13 + 0x20);
  plVar6 = (long *)*plVar4;
  pcVar15 = ppcVar10[1];
  pcVar17 = ppcVar10[1];
  pcVar14 = *ppcVar10;
  do {
    plVar5 = plVar4;
    if (plVar6 == (long *)0x0) {
LAB_10ad294d4:
      lVar7 = 0x30;
      __Znwm();
      *(code **)(lVar7 + 0x28) = pcVar17;
      *(code **)(lVar7 + 0x20) = pcVar14;
      if (pcVar15 != (code *)0x0) {
        pcVar15 = pcVar15 + 0x10;
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcVar15,0x10);
          if (bVar3) {
            *(long *)pcVar15 = *(long *)pcVar15 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      func_0x00010ad29914(lVar13 + 0x18,plVar4,plVar5);
LAB_10ad29510:
      __ZNSt3__15mutex6unlockEv(lVar13 + 0x30);
      if (((*(char *)(lVar13 + 0x70) == '\x01') && (pcVar15 = ppcVar10[1], pcVar15 != (code *)0x0))
         && (__ZNSt3__119__shared_weak_count4lockEv(), pcVar15 != (code *)0x0)) {
        pcVar14 = *ppcVar10;
        if (pcVar14 != (code *)0x0) {
          pcVar8 = pcVar14;
          (**(code **)(*(long *)pcVar14 + 0xa8))();
          pcVar17 = pcVar15 + 8;
          do {
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pcVar17,0x10);
            if (bVar3) {
              *(long *)pcVar17 = *(long *)pcVar17 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          plVar4 = *(long **)(pcVar8 + 0x10);
          pcStack_638 = pcVar8;
          if (plVar4 == (long *)0x0) {
            puVar9 = (undefined8 *)0x20;
            __Znwm();
            *puVar9 = pcVar14;
            puVar9[1] = pcVar15;
            puVar9[3] = 0x10ad2b3f4;
            pcStack_648 = FUN_10ad2b390;
            puStack_640 = puVar9;
            (*(code *)**(undefined8 **)pcVar8)(pcVar8,&pcStack_648);
          }
          else {
            lStack_650 = 0;
            (**(code **)(*plVar4 + 0x28))(plVar4,0,&lStack_650);
            if (lStack_650 != 0) {
              func_0x0001092af97c(&lStack_650);
                    /* WARNING: Does not return */
              pcVar15 = (code *)SoftwareBreakpoint(1,0x10ad29694);
              (*pcVar15)();
            }
            puVar9 = (undefined8 *)0x28;
            __Znwm();
            *puVar9 = pcVar14;
            puVar9[1] = pcVar15;
            puVar9[3] = FUN_10ad2b3d8;
            puVar9[4] = plVar4;
            pcStack_648 = (code *)0x10ad2b360;
            puStack_640 = puVar9;
            (*(code *)**(undefined8 **)pcVar8)(pcVar8,&pcStack_648);
            __ZNSt13exception_ptrD1Ev(&lStack_650);
          }
          lStack_650 = 0;
          __ZNSt13exception_ptrD1Ev(&lStack_650);
        }
        pcVar14 = pcVar15 + 8;
        do {
          lVar7 = *(long *)pcVar14;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcVar14,0x10);
          if (bVar3) {
            *(long *)pcVar14 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*(long *)pcVar15 + 0x10))(pcVar15);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar15);
        }
      }
      (**(code **)(lVar13 + 0x78))((undefined8 *)(lVar13 + 0x78));
      return;
    }
    while (plVar4 = plVar6, (code *)plVar4[5] <= pcVar15) {
      if (pcVar15 <= (code *)plVar4[5]) goto LAB_10ad29510;
      plVar6 = (long *)plVar4[1];
      if ((long *)plVar4[1] == (long *)0x0) {
        plVar5 = plVar4 + 1;
        goto LAB_10ad294d4;
      }
    }
    plVar6 = (long *)*plVar4;
  } while( true );
}



/* Entry: 10ad282f4; end: 10ad2874b;  */

void FUN_10ad282f4(long *param_1,long *param_2)

{
  char cVar1;
  long **pplVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  code *pcVar8;
  undefined8 *puVar9;
  code **ppcVar10;
  code **ppcVar11;
  long **pplVar12;
  long lVar13;
  long *unaff_x21;
  long *unaff_x22;
  code *pcVar14;
  undefined1 *unaff_x23;
  code *pcVar15;
  long **pplVar16;
  undefined8 unaff_x26;
  code *unaff_x27;
  code *unaff_x28;
  code *pcVar17;
  long lStack_520;
  code *pcStack_518;
  undefined8 *puStack_510;
  code *pcStack_508;
  long *plStack_500;
  undefined1 *puStack_4f8;
  long *plStack_4f0;
  long *plStack_4e8;
  undefined1 ****ppppuStack_4d0;
  code *pcStack_4c8;
  long *plStack_4c0;
  long *plStack_4b8;
  long *plStack_4b0;
  long *plStack_4a8;
  long *plStack_4a0;
  long lStack_498;
  long lStack_490;
  long lStack_488;
  code *pcStack_480;
  long *plStack_478;
  long *plStack_470;
  undefined1 auStack_468 [8];
  long *plStack_460;
  long *plStack_458;
  long *plStack_450;
  long *plStack_448;
  code *pcStack_440;
  undefined8 *apuStack_438 [7];
  long lStack_400;
  code *pcStack_3f0;
  code *pcStack_3e8;
  undefined8 uStack_3e0;
  long **pplStack_3d8;
  long **pplStack_3d0;
  undefined1 *puStack_3c8;
  long *plStack_3c0;
  long *plStack_3b8;
  undefined1 ***pppuStack_3a0;
  code *pcStack_398;
  long *plStack_390;
  long *plStack_388;
  long *plStack_380;
  long *plStack_378;
  long **pplStack_370;
  long *plStack_368;
  long lStack_360;
  long lStack_358;
  code *pcStack_350;
  long *plStack_348;
  long *plStack_340;
  undefined1 auStack_338 [8];
  long *plStack_330;
  long *plStack_328;
  long *plStack_320;
  long *plStack_318;
  code *pcStack_310;
  undefined8 *apuStack_308 [7];
  long lStack_2d0;
  code *pcStack_2c0;
  code *pcStack_2b8;
  undefined8 uStack_2b0;
  long **pplStack_2a8;
  long **pplStack_2a0;
  undefined1 *puStack_298;
  long *plStack_290;
  long *plStack_288;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  long *plStack_260;
  long *plStack_258;
  long *plStack_250;
  long *plStack_248;
  long **pplStack_240;
  long *plStack_238;
  long lStack_230;
  long lStack_228;
  code *pcStack_220;
  long *plStack_218;
  long *plStack_210;
  undefined1 auStack_208 [8];
  long *plStack_200;
  long *plStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  code *pcStack_1e0;
  undefined8 *apuStack_1d8 [7];
  long lStack_1a0;
  code *pcStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  long **pplStack_178;
  long **pplStack_170;
  undefined1 *puStack_168;
  long *plStack_160;
  long *plStack_158;
  undefined1 *puStack_140;
  code *pcStack_138;
  long *plStack_130;
  long *plStack_128;
  long *plStack_120;
  long *plStack_118;
  long **pplStack_110;
  long *plStack_108;
  long lStack_100;
  long lStack_f8;
  code *pcStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  undefined1 auStack_d8 [8];
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long lStack_b0;
  undefined8 *apuStack_a8 [7];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar10 = (code **)*param_1;
  FUN_10ad27758(&pplStack_110);
  lVar13 = lStack_100;
  plVar4 = (long *)0x20;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110c6f210;
  plStack_120 = plVar4 + 3;
  *plStack_120 = lVar13;
  pplVar12 = pplStack_110;
  plStack_118 = plVar4;
  if (pplStack_110 != &plStack_108) {
    unaff_x23 = auStack_d8;
    unaff_x27 = FUN_10ad2a42c;
    unaff_x28 = FUN_10ad2a64c;
    unaff_x26 = 0x10ad2a3fc;
    do {
      plStack_130 = (long *)0x0;
      plStack_128 = (long *)0x0;
      plVar4 = pplVar12[5];
      if (((plVar4 == (long *)0x0) ||
          (__ZNSt3__119__shared_weak_count4lockEv(), plStack_128 = plVar4, plVar4 == (long *)0x0))
         || (unaff_x22 = pplVar12[4], plStack_130 = unaff_x22, unaff_x22 == (long *)0x0)) {
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_120,0x10);
          if (bVar3) {
            *plStack_120 = *plStack_120 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      else {
        plVar5 = unaff_x22;
        (**(code **)(*unaff_x22 + 0xa8))();
        plVar6 = plVar4 + 1;
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        plStack_b8 = plStack_118;
        plStack_c0 = plStack_120;
        if (plStack_118 != (long *)0x0) {
          plVar6 = plStack_118 + 1;
          do {
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = *plVar6 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        lStack_b0 = *param_2;
        plStack_d0 = unaff_x22;
        plStack_c8 = plVar4;
        (**(code **)(param_2[1] + 0x18))(apuStack_a8,param_2 + 1);
        unaff_x21 = (long *)plVar5[2];
        if (unaff_x21 == (long *)0x0) {
          unaff_x21 = (long *)0x78;
          __Znwm();
          unaff_x21[2] = (long)plStack_c8;
          unaff_x21[1] = (long)plStack_d0;
          plStack_d0 = (long *)0x0;
          plStack_c8 = (long *)0x0;
          unaff_x21[4] = (long)plStack_b8;
          unaff_x21[3] = (long)plStack_c0;
          plStack_c0 = (long *)0x0;
          plStack_b8 = (long *)0x0;
          unaff_x21[5] = lStack_b0;
          (*(code *)apuStack_a8[0][2])(unaff_x21 + 6,apuStack_a8);
          unaff_x21[0xe] = 0x10ad2a690;
          pcStack_f0 = FUN_10ad2a42c;
          ppcVar10 = &pcStack_f0;
          plStack_e8 = unaff_x21;
          plStack_e0 = plVar5;
          (**(code **)*plVar5)(plVar5);
        }
        else {
          lStack_f8 = 0;
          (**(code **)(*unaff_x21 + 0x28))(unaff_x21,0,&lStack_f8);
          if (lStack_f8 != 0) {
            func_0x0001092af97c(&lStack_f8);
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x10ad286bc);
            (*pcVar15)();
          }
          unaff_x22 = (long *)0x80;
          __Znwm();
          unaff_x22[2] = (long)plStack_c8;
          unaff_x22[1] = (long)plStack_d0;
          plStack_d0 = (long *)0x0;
          plStack_c8 = (long *)0x0;
          unaff_x22[4] = (long)plStack_b8;
          unaff_x22[3] = (long)plStack_c0;
          plStack_c0 = (long *)0x0;
          plStack_b8 = (long *)0x0;
          unaff_x22[5] = lStack_b0;
          (*(code *)apuStack_a8[0][2])(unaff_x22 + 6,apuStack_a8);
          unaff_x22[0xe] = (long)FUN_10ad2a64c;
          unaff_x22[0xf] = (long)unaff_x21;
          pcStack_f0 = (code *)0x10ad2a3fc;
          ppcVar10 = &pcStack_f0;
          plStack_e8 = unaff_x22;
          plStack_e0 = plVar5;
          (**(code **)*plVar5)(plVar5);
          __ZNSt13exception_ptrD1Ev(&lStack_f8);
        }
        lStack_f8 = 0;
        __ZNSt13exception_ptrD1Ev(&lStack_f8);
        (*(code *)*apuStack_a8[0])(apuStack_a8);
        plVar4 = plStack_b8;
        if (plStack_b8 != (long *)0x0) {
          plVar6 = plStack_b8 + 1;
          do {
            lVar13 = *plVar6;
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar13 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
        plVar4 = plStack_c8;
        if (plStack_c8 != (long *)0x0) {
          plVar6 = plStack_c8 + 1;
          do {
            lVar13 = *plVar6;
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar13 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
      }
      plVar4 = plStack_128;
      if (plStack_128 != (long *)0x0) {
        plVar6 = plStack_128 + 1;
        do {
          lVar13 = *plVar6;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar13 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_128 + 0x10))(plStack_128);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      pplVar2 = (long **)pplVar12[1];
      pplVar16 = pplVar12;
      if ((long **)pplVar12[1] == (long **)0x0) {
        do {
          pplVar12 = (long **)pplVar16[2];
          bVar3 = (long **)*pplVar12 != pplVar16;
          pplVar16 = pplVar12;
        } while (bVar3);
      }
      else {
        do {
          pplVar12 = pplVar2;
          pplVar2 = (long **)*pplVar12;
        } while ((long **)*pplVar12 != (long **)0x0);
      }
      lVar13 = lStack_100;
    } while (pplVar12 != &plStack_108);
  }
  if (lVar13 == 0) {
    (*(code *)*param_2)(param_2);
  }
  plVar4 = plStack_118;
  if (plStack_118 != (long *)0x0) {
    plVar6 = plStack_118 + 1;
    do {
      lVar13 = *plVar6;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar13 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_118 + 0x10))(plStack_118);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = plStack_108;
  func_0x00010ad29968();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010ad29f7c(&plStack_120);
  func_0x00010ad29968(plStack_108);
  __Unwind_Resume();
  pcStack_138 = FUN_10ad2874c;
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar11 = (code **)*plVar4;
  pcStack_190 = unaff_x28;
  pcStack_188 = unaff_x27;
  uStack_180 = unaff_x26;
  pplStack_178 = pplVar12;
  pplStack_170 = &plStack_108;
  puStack_168 = unaff_x23;
  plStack_160 = unaff_x22;
  plStack_158 = unaff_x21;
  puStack_140 = &stack0xfffffffffffffff0;
  FUN_10ad27758(&pplStack_240);
  lVar13 = lStack_230;
  plVar4 = (long *)0x20;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110c6f210;
  plVar4[3] = lVar13;
  plStack_250 = plVar4 + 3;
  plStack_248 = plVar4;
  pplVar12 = pplStack_240;
  if (pplStack_240 != &plStack_238) {
    unaff_x23 = auStack_208;
    unaff_x27 = FUN_10ad2a818;
    unaff_x28 = FUN_10ad2aa38;
    unaff_x26 = 0x10ad2a7e8;
    do {
      plStack_260 = (long *)0x0;
      plStack_258 = (long *)0x0;
      plVar4 = pplVar12[5];
      if (plVar4 == (long *)0x0) {
LAB_10ad28908:
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_250,0x10);
          if (bVar3) {
            *plStack_250 = *plStack_250 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      else {
        __ZNSt3__119__shared_weak_count4lockEv();
        plStack_258 = plVar4;
        if (plVar4 == (long *)0x0) goto LAB_10ad28908;
        unaff_x22 = pplVar12[4];
        plStack_260 = unaff_x22;
        if (unaff_x22 == (long *)0x0) goto LAB_10ad28908;
        plVar6 = unaff_x22;
        (**(code **)(*unaff_x22 + 0xa8))();
        plStack_200 = unaff_x22;
        plStack_1f8 = plVar4;
        plVar4 = plVar4 + 1;
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        plStack_1e8 = plStack_248;
        plStack_1f0 = plStack_250;
        if (plStack_248 != (long *)0x0) {
          plVar4 = plStack_248 + 1;
          do {
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar3) {
              *plVar4 = *plVar4 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        pcStack_1e0 = *ppcVar10;
        (**(code **)(ppcVar10[1] + 0x18))(apuStack_1d8,ppcVar10 + 1);
        unaff_x21 = (long *)plVar6[2];
        if (unaff_x21 == (long *)0x0) {
          unaff_x21 = (long *)0x78;
          __Znwm();
          unaff_x21[2] = (long)plStack_1f8;
          unaff_x21[1] = (long)plStack_200;
          plStack_200 = (long *)0x0;
          plStack_1f8 = (long *)0x0;
          unaff_x21[4] = (long)plStack_1e8;
          unaff_x21[3] = (long)plStack_1f0;
          plStack_1f0 = (long *)0x0;
          plStack_1e8 = (long *)0x0;
          unaff_x21[5] = (long)pcStack_1e0;
          (*(code *)apuStack_1d8[0][2])(unaff_x21 + 6,apuStack_1d8);
          unaff_x21[0xe] = 0x10ad2aa7c;
          pcStack_220 = FUN_10ad2a818;
          ppcVar11 = &pcStack_220;
          plStack_218 = unaff_x21;
          plStack_210 = plVar6;
          (**(code **)*plVar6)(plVar6);
        }
        else {
          lStack_228 = 0;
          (**(code **)(*unaff_x21 + 0x28))(unaff_x21,0,&lStack_228);
          if (lStack_228 != 0) {
            func_0x0001092af97c(&lStack_228);
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x10ad28b14);
            (*pcVar15)();
          }
          unaff_x22 = (long *)0x80;
          __Znwm();
          unaff_x22[2] = (long)plStack_1f8;
          unaff_x22[1] = (long)plStack_200;
          plStack_200 = (long *)0x0;
          plStack_1f8 = (long *)0x0;
          unaff_x22[4] = (long)plStack_1e8;
          unaff_x22[3] = (long)plStack_1f0;
          plStack_1f0 = (long *)0x0;
          plStack_1e8 = (long *)0x0;
          unaff_x22[5] = (long)pcStack_1e0;
          (*(code *)apuStack_1d8[0][2])(unaff_x22 + 6,apuStack_1d8);
          unaff_x22[0xe] = (long)FUN_10ad2aa38;
          unaff_x22[0xf] = (long)unaff_x21;
          pcStack_220 = (code *)0x10ad2a7e8;
          ppcVar11 = &pcStack_220;
          plStack_218 = unaff_x22;
          plStack_210 = plVar6;
          (**(code **)*plVar6)(plVar6);
          __ZNSt13exception_ptrD1Ev(&lStack_228);
        }
        lStack_228 = 0;
        __ZNSt13exception_ptrD1Ev(&lStack_228);
        (*(code *)*apuStack_1d8[0])(apuStack_1d8);
        plVar4 = plStack_1e8;
        if (plStack_1e8 != (long *)0x0) {
          plVar6 = plStack_1e8 + 1;
          do {
            lVar13 = *plVar6;
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar13 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_1e8 + 0x10))(plStack_1e8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
        plVar4 = plStack_1f8;
        if (plStack_1f8 != (long *)0x0) {
          plVar6 = plStack_1f8 + 1;
          do {
            lVar13 = *plVar6;
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar13 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
      }
      plVar4 = plStack_258;
      if (plStack_258 != (long *)0x0) {
        plVar6 = plStack_258 + 1;
        do {
          lVar13 = *plVar6;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar13 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_258 + 0x10))(plStack_258);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      pplVar2 = (long **)pplVar12[1];
      pplVar16 = pplVar12;
      if ((long **)pplVar12[1] == (long **)0x0) {
        do {
          pplVar12 = (long **)pplVar16[2];
          bVar3 = (long **)*pplVar12 != pplVar16;
          pplVar16 = pplVar12;
        } while (bVar3);
      }
      else {
        do {
          pplVar12 = pplVar2;
          pplVar2 = (long **)*pplVar12;
        } while ((long **)*pplVar12 != (long **)0x0);
      }
      lVar13 = lStack_230;
    } while (pplVar12 != &plStack_238);
  }
  if (lVar13 == 0) {
    (**ppcVar10)(ppcVar10);
  }
  plVar4 = plStack_248;
  if (plStack_248 != (long *)0x0) {
    plVar6 = plStack_248 + 1;
    do {
      lVar13 = *plVar6;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar13 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_248 + 0x10))(plStack_248);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = plStack_238;
  func_0x00010ad29968();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010ad29f7c(&plStack_250);
  func_0x00010ad29968(plStack_238);
  __Unwind_Resume();
  pcStack_268 = FUN_10ad28ba4;
  lStack_2d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar10 = (code **)*plVar4;
  pcStack_2c0 = unaff_x28;
  pcStack_2b8 = unaff_x27;
  uStack_2b0 = unaff_x26;
  pplStack_2a8 = pplVar12;
  pplStack_2a0 = &plStack_238;
  puStack_298 = unaff_x23;
  plStack_290 = unaff_x22;
  plStack_288 = unaff_x21;
  ppuStack_270 = &puStack_140;
  FUN_10ad27758(&pplStack_370);
  lVar13 = lStack_360;
  plVar4 = (long *)0x20;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110c6f210;
  plVar4[3] = lVar13;
  plStack_380 = plVar4 + 3;
  plStack_378 = plVar4;
  pplVar12 = pplStack_370;
  if (pplStack_370 != &plStack_368) {
    unaff_x23 = auStack_338;
    unaff_x27 = FUN_10ad2ac04;
    unaff_x28 = FUN_10ad2ae24;
    unaff_x26 = 0x10ad2abd4;
    do {
      plStack_390 = (long *)0x0;
      plStack_388 = (long *)0x0;
      plVar4 = pplVar12[5];
      if (plVar4 == (long *)0x0) {
LAB_10ad28d60:
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_380,0x10);
          if (bVar3) {
            *plStack_380 = *plStack_380 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      else {
        __ZNSt3__119__shared_weak_count4lockEv();
        plStack_388 = plVar4;
        if (plVar4 == (long *)0x0) goto LAB_10ad28d60;
        unaff_x22 = pplVar12[4];
        plStack_390 = unaff_x22;
        if (unaff_x22 == (long *)0x0) goto LAB_10ad28d60;
        plVar6 = unaff_x22;
        (**(code **)(*unaff_x22 + 0xa8))();
        plStack_330 = unaff_x22;
        plStack_328 = plVar4;
        plVar4 = plVar4 + 1;
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        plStack_318 = plStack_378;
        plStack_320 = plStack_380;
        if (plStack_378 != (long *)0x0) {
          plVar4 = plStack_378 + 1;
          do {
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar3) {
              *plVar4 = *plVar4 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        pcStack_310 = *ppcVar11;
        (**(code **)(ppcVar11[1] + 0x18))(apuStack_308,ppcVar11 + 1);
        unaff_x21 = (long *)plVar6[2];
        if (unaff_x21 == (long *)0x0) {
          unaff_x21 = (long *)0x78;
          __Znwm();
          unaff_x21[2] = (long)plStack_328;
          unaff_x21[1] = (long)plStack_330;
          plStack_330 = (long *)0x0;
          plStack_328 = (long *)0x0;
          unaff_x21[4] = (long)plStack_318;
          unaff_x21[3] = (long)plStack_320;
          plStack_320 = (long *)0x0;
          plStack_318 = (long *)0x0;
          unaff_x21[5] = (long)pcStack_310;
          (*(code *)apuStack_308[0][2])(unaff_x21 + 6,apuStack_308);
          unaff_x21[0xe] = 0x10ad2ae68;
          pcStack_350 = FUN_10ad2ac04;
          ppcVar10 = &pcStack_350;
          plStack_348 = unaff_x21;
          plStack_340 = plVar6;
          (**(code **)*plVar6)(plVar6);
        }
        else {
          lStack_358 = 0;
          (**(code **)(*unaff_x21 + 0x28))(unaff_x21,0,&lStack_358);
          if (lStack_358 != 0) {
            func_0x0001092af97c(&lStack_358);
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x10ad28f6c);
            (*pcVar15)();
          }
          unaff_x22 = (long *)0x80;
          __Znwm();
          unaff_x22[2] = (long)plStack_328;
          unaff_x22[1] = (long)plStack_330;
          plStack_330 = (long *)0x0;
          plStack_328 = (long *)0x0;
          unaff_x22[4] = (long)plStack_318;
          unaff_x22[3] = (long)plStack_320;
          plStack_320 = (long *)0x0;
          plStack_318 = (long *)0x0;
          unaff_x22[5] = (long)pcStack_310;
          (*(code *)apuStack_308[0][2])(unaff_x22 + 6,apuStack_308);
          unaff_x22[0xe] = (long)FUN_10ad2ae24;
          unaff_x22[0xf] = (long)unaff_x21;
          pcStack_350 = (code *)0x10ad2abd4;
          ppcVar10 = &pcStack_350;
          plStack_348 = unaff_x22;
          plStack_340 = plVar6;
          (**(code **)*plVar6)(plVar6);
          __ZNSt13exception_ptrD1Ev(&lStack_358);
        }
        lStack_358 = 0;
        __ZNSt13exception_ptrD1Ev(&lStack_358);
        (*(code *)*apuStack_308[0])(apuStack_308);
        plVar4 = plStack_318;
        if (plStack_318 != (long *)0x0) {
          plVar6 = plStack_318 + 1;
          do {
            lVar13 = *plVar6;
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar13 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_318 + 0x10))(plStack_318);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
        plVar4 = plStack_328;
        if (plStack_328 != (long *)0x0) {
          plVar6 = plStack_328 + 1;
          do {
            lVar13 = *plVar6;
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar13 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_328 + 0x10))(plStack_328);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
      }
      plVar4 = plStack_388;
      if (plStack_388 != (long *)0x0) {
        plVar6 = plStack_388 + 1;
        do {
          lVar13 = *plVar6;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar13 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_388 + 0x10))(plStack_388);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      pplVar2 = (long **)pplVar12[1];
      pplVar16 = pplVar12;
      if ((long **)pplVar12[1] == (long **)0x0) {
        do {
          pplVar12 = (long **)pplVar16[2];
          bVar3 = (long **)*pplVar12 != pplVar16;
          pplVar16 = pplVar12;
        } while (bVar3);
      }
      else {
        do {
          pplVar12 = pplVar2;
          pplVar2 = (long **)*pplVar12;
        } while ((long **)*pplVar12 != (long **)0x0);
      }
      lVar13 = lStack_360;
    } while (pplVar12 != &plStack_368);
  }
  if (lVar13 == 0) {
    (**ppcVar11)(ppcVar11);
  }
  plVar4 = plStack_378;
  if (plStack_378 != (long *)0x0) {
    plVar6 = plStack_378 + 1;
    do {
      lVar13 = *plVar6;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar13 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_378 + 0x10))(plStack_378);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = plStack_368;
  func_0x00010ad29968();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d0) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010ad29f7c(&plStack_380);
  func_0x00010ad29968(plStack_368);
  __Unwind_Resume();
  pcStack_398 = FUN_10ad28ffc;
  lStack_400 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar11 = (code **)*plVar4;
  pcStack_3f0 = unaff_x28;
  pcStack_3e8 = unaff_x27;
  uStack_3e0 = unaff_x26;
  pplStack_3d8 = pplVar12;
  pplStack_3d0 = &plStack_368;
  puStack_3c8 = unaff_x23;
  plStack_3c0 = unaff_x22;
  plStack_3b8 = unaff_x21;
  pppuStack_3a0 = &ppuStack_270;
  FUN_10ad27758(&plStack_4a0);
  lVar13 = lStack_490;
  plVar4 = (long *)0x20;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110c6f210;
  plStack_4b0 = plVar4 + 3;
  *plStack_4b0 = lVar13;
  plStack_4a8 = plVar4;
  if (plStack_4a0 != &lStack_498) {
    unaff_x23 = auStack_468;
    plVar4 = plStack_4a0;
    do {
      plStack_4c0 = (long *)0x0;
      plStack_4b8 = (long *)0x0;
      plVar6 = (long *)plVar4[5];
      if (((plVar6 == (long *)0x0) ||
          (__ZNSt3__119__shared_weak_count4lockEv(), plStack_4b8 = plVar6, plVar6 == (long *)0x0))
         || (unaff_x22 = (long *)plVar4[4], plStack_4c0 = unaff_x22, unaff_x22 == (long *)0x0)) {
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_4b0,0x10);
          if (bVar3) {
            *plStack_4b0 = *plStack_4b0 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      else {
        plVar5 = unaff_x22;
        (**(code **)(*unaff_x22 + 0xa8))();
        plStack_460 = unaff_x22;
        plStack_458 = plVar6;
        plVar6 = plVar6 + 1;
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        plStack_448 = plStack_4a8;
        plStack_450 = plStack_4b0;
        if (plStack_4a8 != (long *)0x0) {
          plVar6 = plStack_4a8 + 1;
          do {
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = *plVar6 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        pcStack_440 = *ppcVar10;
        (**(code **)(ppcVar10[1] + 0x18))(apuStack_438,ppcVar10 + 1);
        unaff_x21 = (long *)plVar5[2];
        if (unaff_x21 == (long *)0x0) {
          unaff_x21 = (long *)0x78;
          __Znwm();
          unaff_x21[2] = (long)plStack_458;
          unaff_x21[1] = (long)plStack_460;
          plStack_460 = (long *)0x0;
          plStack_458 = (long *)0x0;
          unaff_x21[4] = (long)plStack_448;
          unaff_x21[3] = (long)plStack_450;
          plStack_450 = (long *)0x0;
          plStack_448 = (long *)0x0;
          unaff_x21[5] = (long)pcStack_440;
          (*(code *)apuStack_438[0][2])(unaff_x21 + 6,apuStack_438);
          unaff_x21[0xe] = 0x10ad2b244;
          pcStack_480 = FUN_10ad2aff0;
          ppcVar11 = &pcStack_480;
          plStack_478 = unaff_x21;
          plStack_470 = plVar5;
          (**(code **)*plVar5)(plVar5);
        }
        else {
          lStack_488 = 0;
          (**(code **)(*unaff_x21 + 0x28))(unaff_x21,0,&lStack_488);
          if (lStack_488 != 0) {
            func_0x0001092af97c(&lStack_488);
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x10ad293c4);
            (*pcVar15)();
          }
          unaff_x22 = (long *)0x80;
          __Znwm();
          unaff_x22[2] = (long)plStack_458;
          unaff_x22[1] = (long)plStack_460;
          plStack_460 = (long *)0x0;
          plStack_458 = (long *)0x0;
          unaff_x22[4] = (long)plStack_448;
          unaff_x22[3] = (long)plStack_450;
          plStack_450 = (long *)0x0;
          plStack_448 = (long *)0x0;
          unaff_x22[5] = (long)pcStack_440;
          (*(code *)apuStack_438[0][2])(unaff_x22 + 6,apuStack_438);
          unaff_x22[0xe] = (long)FUN_10ad2b200;
          unaff_x22[0xf] = (long)unaff_x21;
          pcStack_480 = (code *)0x10ad2afc0;
          ppcVar11 = &pcStack_480;
          plStack_478 = unaff_x22;
          plStack_470 = plVar5;
          (**(code **)*plVar5)(plVar5);
          __ZNSt13exception_ptrD1Ev(&lStack_488);
        }
        lStack_488 = 0;
        __ZNSt13exception_ptrD1Ev(&lStack_488);
        (*(code *)*apuStack_438[0])(apuStack_438);
        plVar6 = plStack_448;
        if (plStack_448 != (long *)0x0) {
          plVar5 = plStack_448 + 1;
          do {
            lVar13 = *plVar5;
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = lVar13 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_448 + 0x10))(plStack_448);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
        plVar6 = plStack_458;
        if (plStack_458 != (long *)0x0) {
          plVar5 = plStack_458 + 1;
          do {
            lVar13 = *plVar5;
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = lVar13 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_458 + 0x10))(plStack_458);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
      }
      plVar6 = plStack_4b8;
      if (plStack_4b8 != (long *)0x0) {
        plVar5 = plStack_4b8 + 1;
        do {
          lVar13 = *plVar5;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar13 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_4b8 + 0x10))(plStack_4b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      plVar6 = (long *)plVar4[1];
      plVar5 = plVar4;
      if ((long *)plVar4[1] == (long *)0x0) {
        do {
          plVar4 = (long *)plVar5[2];
          bVar3 = (long *)*plVar4 != plVar5;
          plVar5 = plVar4;
        } while (bVar3);
      }
      else {
        do {
          plVar4 = plVar6;
          plVar6 = (long *)*plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
      }
      lVar13 = lStack_490;
    } while (plVar4 != &lStack_498);
  }
  if (lVar13 == 0) {
    (**ppcVar10)(ppcVar10);
  }
  plVar4 = plStack_4a8;
  if (plStack_4a8 != (long *)0x0) {
    plVar6 = plStack_4a8 + 1;
    do {
      lVar13 = *plVar6;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar13 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_4a8 + 0x10))(plStack_4a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  lVar13 = lStack_498;
  func_0x00010ad29968();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_400) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010ad29f7c(&plStack_4b0);
  func_0x00010ad29968(lStack_498);
  __Unwind_Resume();
  pcStack_4c8 = FUN_10ad29454;
  plStack_500 = &lStack_498;
  puStack_4f8 = unaff_x23;
  plStack_4f0 = unaff_x22;
  plStack_4e8 = unaff_x21;
  ppppuStack_4d0 = &pppuStack_3a0;
  __ZNSt3__15mutex4lockEv(lVar13 + 0x30);
  plVar4 = (long *)(lVar13 + 0x20);
  plVar6 = (long *)*plVar4;
  pcVar15 = ppcVar11[1];
  pcVar17 = ppcVar11[1];
  pcVar14 = *ppcVar11;
  do {
    plVar5 = plVar4;
    if (plVar6 == (long *)0x0) {
LAB_10ad294d4:
      lVar7 = 0x30;
      __Znwm();
      *(code **)(lVar7 + 0x28) = pcVar17;
      *(code **)(lVar7 + 0x20) = pcVar14;
      if (pcVar15 != (code *)0x0) {
        pcVar15 = pcVar15 + 0x10;
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcVar15,0x10);
          if (bVar3) {
            *(long *)pcVar15 = *(long *)pcVar15 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      func_0x00010ad29914(lVar13 + 0x18,plVar4,plVar5);
LAB_10ad29510:
      __ZNSt3__15mutex6unlockEv(lVar13 + 0x30);
      if (((*(char *)(lVar13 + 0x70) == '\x01') && (pcVar15 = ppcVar11[1], pcVar15 != (code *)0x0))
         && (__ZNSt3__119__shared_weak_count4lockEv(), pcVar15 != (code *)0x0)) {
        pcVar14 = *ppcVar11;
        if (pcVar14 != (code *)0x0) {
          pcVar8 = pcVar14;
          (**(code **)(*(long *)pcVar14 + 0xa8))();
          pcVar17 = pcVar15 + 8;
          do {
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pcVar17,0x10);
            if (bVar3) {
              *(long *)pcVar17 = *(long *)pcVar17 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          plVar4 = *(long **)(pcVar8 + 0x10);
          pcStack_508 = pcVar8;
          if (plVar4 == (long *)0x0) {
            puVar9 = (undefined8 *)0x20;
            __Znwm();
            *puVar9 = pcVar14;
            puVar9[1] = pcVar15;
            puVar9[3] = 0x10ad2b3f4;
            pcStack_518 = FUN_10ad2b390;
            puStack_510 = puVar9;
            (*(code *)**(undefined8 **)pcVar8)(pcVar8,&pcStack_518);
          }
          else {
            lStack_520 = 0;
            (**(code **)(*plVar4 + 0x28))(plVar4,0,&lStack_520);
            if (lStack_520 != 0) {
              func_0x0001092af97c(&lStack_520);
                    /* WARNING: Does not return */
              pcVar15 = (code *)SoftwareBreakpoint(1,0x10ad29694);
              (*pcVar15)();
            }
            puVar9 = (undefined8 *)0x28;
            __Znwm();
            *puVar9 = pcVar14;
            puVar9[1] = pcVar15;
            puVar9[3] = FUN_10ad2b3d8;
            puVar9[4] = plVar4;
            pcStack_518 = (code *)0x10ad2b360;
            puStack_510 = puVar9;
            (*(code *)**(undefined8 **)pcVar8)(pcVar8,&pcStack_518);
            __ZNSt13exception_ptrD1Ev(&lStack_520);
          }
          lStack_520 = 0;
          __ZNSt13exception_ptrD1Ev(&lStack_520);
        }
        pcVar14 = pcVar15 + 8;
        do {
          lVar7 = *(long *)pcVar14;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcVar14,0x10);
          if (bVar3) {
            *(long *)pcVar14 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*(long *)pcVar15 + 0x10))(pcVar15);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar15);
        }
      }
      (**(code **)(lVar13 + 0x78))((undefined8 *)(lVar13 + 0x78));
      return;
    }
    while (plVar4 = plVar6, (code *)plVar4[5] <= pcVar15) {
      if (pcVar15 <= (code *)plVar4[5]) goto LAB_10ad29510;
      plVar6 = (long *)plVar4[1];
      if ((long *)plVar4[1] == (long *)0x0) {
        plVar5 = plVar4 + 1;
        goto LAB_10ad294d4;
      }
    }
    plVar6 = (long *)*plVar4;
  } while( true );
}



/* Entry: 10ad2874c; end: 10ad28ba3;  */

void FUN_10ad2874c(long *param_1,long *param_2)

{
  char cVar1;
  long **pplVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  code *pcVar8;
  undefined8 *puVar9;
  code **ppcVar10;
  code **ppcVar11;
  long **pplVar12;
  long lVar13;
  long *unaff_x21;
  long *unaff_x22;
  code *pcVar14;
  undefined1 *unaff_x23;
  code *pcVar15;
  long **pplVar16;
  undefined8 unaff_x26;
  code *unaff_x27;
  code *unaff_x28;
  code *pcVar17;
  long lStack_3f0;
  code *pcStack_3e8;
  undefined8 *puStack_3e0;
  code *pcStack_3d8;
  long *plStack_3d0;
  undefined1 *puStack_3c8;
  long *plStack_3c0;
  long *plStack_3b8;
  undefined1 ***pppuStack_3a0;
  code *pcStack_398;
  long *plStack_390;
  long *plStack_388;
  long *plStack_380;
  long *plStack_378;
  long *plStack_370;
  long lStack_368;
  long lStack_360;
  long lStack_358;
  code *pcStack_350;
  long *plStack_348;
  long *plStack_340;
  undefined1 auStack_338 [8];
  long *plStack_330;
  long *plStack_328;
  long *plStack_320;
  long *plStack_318;
  code *pcStack_310;
  undefined8 *apuStack_308 [7];
  long lStack_2d0;
  code *pcStack_2c0;
  code *pcStack_2b8;
  undefined8 uStack_2b0;
  long **pplStack_2a8;
  long **pplStack_2a0;
  undefined1 *puStack_298;
  long *plStack_290;
  long *plStack_288;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  long *plStack_260;
  long *plStack_258;
  long *plStack_250;
  long *plStack_248;
  long **pplStack_240;
  long *plStack_238;
  long lStack_230;
  long lStack_228;
  code *pcStack_220;
  long *plStack_218;
  long *plStack_210;
  undefined1 auStack_208 [8];
  long *plStack_200;
  long *plStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  code *pcStack_1e0;
  undefined8 *apuStack_1d8 [7];
  long lStack_1a0;
  code *pcStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  long **pplStack_178;
  long **pplStack_170;
  undefined1 *puStack_168;
  long *plStack_160;
  long *plStack_158;
  undefined1 *puStack_140;
  code *pcStack_138;
  long *plStack_130;
  long *plStack_128;
  long *plStack_120;
  long *plStack_118;
  long **pplStack_110;
  long *plStack_108;
  long lStack_100;
  long lStack_f8;
  code *pcStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  undefined1 auStack_d8 [8];
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long lStack_b0;
  undefined8 *apuStack_a8 [7];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar10 = (code **)*param_1;
  FUN_10ad27758(&pplStack_110);
  lVar13 = lStack_100;
  plVar4 = (long *)0x20;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110c6f210;
  plStack_120 = plVar4 + 3;
  *plStack_120 = lVar13;
  pplVar12 = pplStack_110;
  plStack_118 = plVar4;
  if (pplStack_110 != &plStack_108) {
    unaff_x23 = auStack_d8;
    unaff_x27 = FUN_10ad2a818;
    unaff_x28 = FUN_10ad2aa38;
    unaff_x26 = 0x10ad2a7e8;
    do {
      plStack_130 = (long *)0x0;
      plStack_128 = (long *)0x0;
      plVar4 = pplVar12[5];
      if (((plVar4 == (long *)0x0) ||
          (__ZNSt3__119__shared_weak_count4lockEv(), plStack_128 = plVar4, plVar4 == (long *)0x0))
         || (unaff_x22 = pplVar12[4], plStack_130 = unaff_x22, unaff_x22 == (long *)0x0)) {
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_120,0x10);
          if (bVar3) {
            *plStack_120 = *plStack_120 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      else {
        plVar5 = unaff_x22;
        (**(code **)(*unaff_x22 + 0xa8))();
        plVar6 = plVar4 + 1;
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        plStack_b8 = plStack_118;
        plStack_c0 = plStack_120;
        if (plStack_118 != (long *)0x0) {
          plVar6 = plStack_118 + 1;
          do {
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = *plVar6 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        lStack_b0 = *param_2;
        plStack_d0 = unaff_x22;
        plStack_c8 = plVar4;
        (**(code **)(param_2[1] + 0x18))(apuStack_a8,param_2 + 1);
        unaff_x21 = (long *)plVar5[2];
        if (unaff_x21 == (long *)0x0) {
          unaff_x21 = (long *)0x78;
          __Znwm();
          unaff_x21[2] = (long)plStack_c8;
          unaff_x21[1] = (long)plStack_d0;
          plStack_d0 = (long *)0x0;
          plStack_c8 = (long *)0x0;
          unaff_x21[4] = (long)plStack_b8;
          unaff_x21[3] = (long)plStack_c0;
          plStack_c0 = (long *)0x0;
          plStack_b8 = (long *)0x0;
          unaff_x21[5] = lStack_b0;
          (*(code *)apuStack_a8[0][2])(unaff_x21 + 6,apuStack_a8);
          unaff_x21[0xe] = 0x10ad2aa7c;
          pcStack_f0 = FUN_10ad2a818;
          ppcVar10 = &pcStack_f0;
          plStack_e8 = unaff_x21;
          plStack_e0 = plVar5;
          (**(code **)*plVar5)(plVar5);
        }
        else {
          lStack_f8 = 0;
          (**(code **)(*unaff_x21 + 0x28))(unaff_x21,0,&lStack_f8);
          if (lStack_f8 != 0) {
            func_0x0001092af97c(&lStack_f8);
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x10ad28b14);
            (*pcVar15)();
          }
          unaff_x22 = (long *)0x80;
          __Znwm();
          unaff_x22[2] = (long)plStack_c8;
          unaff_x22[1] = (long)plStack_d0;
          plStack_d0 = (long *)0x0;
          plStack_c8 = (long *)0x0;
          unaff_x22[4] = (long)plStack_b8;
          unaff_x22[3] = (long)plStack_c0;
          plStack_c0 = (long *)0x0;
          plStack_b8 = (long *)0x0;
          unaff_x22[5] = lStack_b0;
          (*(code *)apuStack_a8[0][2])(unaff_x22 + 6,apuStack_a8);
          unaff_x22[0xe] = (long)FUN_10ad2aa38;
          unaff_x22[0xf] = (long)unaff_x21;
          pcStack_f0 = (code *)0x10ad2a7e8;
          ppcVar10 = &pcStack_f0;
          plStack_e8 = unaff_x22;
          plStack_e0 = plVar5;
          (**(code **)*plVar5)(plVar5);
          __ZNSt13exception_ptrD1Ev(&lStack_f8);
        }
        lStack_f8 = 0;
        __ZNSt13exception_ptrD1Ev(&lStack_f8);
        (*(code *)*apuStack_a8[0])(apuStack_a8);
        plVar4 = plStack_b8;
        if (plStack_b8 != (long *)0x0) {
          plVar6 = plStack_b8 + 1;
          do {
            lVar13 = *plVar6;
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar13 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
        plVar4 = plStack_c8;
        if (plStack_c8 != (long *)0x0) {
          plVar6 = plStack_c8 + 1;
          do {
            lVar13 = *plVar6;
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar13 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
      }
      plVar4 = plStack_128;
      if (plStack_128 != (long *)0x0) {
        plVar6 = plStack_128 + 1;
        do {
          lVar13 = *plVar6;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar13 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_128 + 0x10))(plStack_128);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      pplVar2 = (long **)pplVar12[1];
      pplVar16 = pplVar12;
      if ((long **)pplVar12[1] == (long **)0x0) {
        do {
          pplVar12 = (long **)pplVar16[2];
          bVar3 = (long **)*pplVar12 != pplVar16;
          pplVar16 = pplVar12;
        } while (bVar3);
      }
      else {
        do {
          pplVar12 = pplVar2;
          pplVar2 = (long **)*pplVar12;
        } while ((long **)*pplVar12 != (long **)0x0);
      }
      lVar13 = lStack_100;
    } while (pplVar12 != &plStack_108);
  }
  if (lVar13 == 0) {
    (*(code *)*param_2)(param_2);
  }
  plVar4 = plStack_118;
  if (plStack_118 != (long *)0x0) {
    plVar6 = plStack_118 + 1;
    do {
      lVar13 = *plVar6;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar13 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_118 + 0x10))(plStack_118);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = plStack_108;
  func_0x00010ad29968();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010ad29f7c(&plStack_120);
  func_0x00010ad29968(plStack_108);
  __Unwind_Resume();
  pcStack_138 = FUN_10ad28ba4;
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar11 = (code **)*plVar4;
  pcStack_190 = unaff_x28;
  pcStack_188 = unaff_x27;
  uStack_180 = unaff_x26;
  pplStack_178 = pplVar12;
  pplStack_170 = &plStack_108;
  puStack_168 = unaff_x23;
  plStack_160 = unaff_x22;
  plStack_158 = unaff_x21;
  puStack_140 = &stack0xfffffffffffffff0;
  FUN_10ad27758(&pplStack_240);
  lVar13 = lStack_230;
  plVar4 = (long *)0x20;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110c6f210;
  plVar4[3] = lVar13;
  plStack_250 = plVar4 + 3;
  plStack_248 = plVar4;
  pplVar12 = pplStack_240;
  if (pplStack_240 != &plStack_238) {
    unaff_x23 = auStack_208;
    unaff_x27 = FUN_10ad2ac04;
    unaff_x28 = FUN_10ad2ae24;
    unaff_x26 = 0x10ad2abd4;
    do {
      plStack_260 = (long *)0x0;
      plStack_258 = (long *)0x0;
      plVar4 = pplVar12[5];
      if (plVar4 == (long *)0x0) {
LAB_10ad28d60:
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_250,0x10);
          if (bVar3) {
            *plStack_250 = *plStack_250 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      else {
        __ZNSt3__119__shared_weak_count4lockEv();
        plStack_258 = plVar4;
        if (plVar4 == (long *)0x0) goto LAB_10ad28d60;
        unaff_x22 = pplVar12[4];
        plStack_260 = unaff_x22;
        if (unaff_x22 == (long *)0x0) goto LAB_10ad28d60;
        plVar6 = unaff_x22;
        (**(code **)(*unaff_x22 + 0xa8))();
        plStack_200 = unaff_x22;
        plStack_1f8 = plVar4;
        plVar4 = plVar4 + 1;
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        plStack_1e8 = plStack_248;
        plStack_1f0 = plStack_250;
        if (plStack_248 != (long *)0x0) {
          plVar4 = plStack_248 + 1;
          do {
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar3) {
              *plVar4 = *plVar4 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        pcStack_1e0 = *ppcVar10;
        (**(code **)(ppcVar10[1] + 0x18))(apuStack_1d8,ppcVar10 + 1);
        unaff_x21 = (long *)plVar6[2];
        if (unaff_x21 == (long *)0x0) {
          unaff_x21 = (long *)0x78;
          __Znwm();
          unaff_x21[2] = (long)plStack_1f8;
          unaff_x21[1] = (long)plStack_200;
          plStack_200 = (long *)0x0;
          plStack_1f8 = (long *)0x0;
          unaff_x21[4] = (long)plStack_1e8;
          unaff_x21[3] = (long)plStack_1f0;
          plStack_1f0 = (long *)0x0;
          plStack_1e8 = (long *)0x0;
          unaff_x21[5] = (long)pcStack_1e0;
          (*(code *)apuStack_1d8[0][2])(unaff_x21 + 6,apuStack_1d8);
          unaff_x21[0xe] = 0x10ad2ae68;
          pcStack_220 = FUN_10ad2ac04;
          ppcVar11 = &pcStack_220;
          plStack_218 = unaff_x21;
          plStack_210 = plVar6;
          (**(code **)*plVar6)(plVar6);
        }
        else {
          lStack_228 = 0;
          (**(code **)(*unaff_x21 + 0x28))(unaff_x21,0,&lStack_228);
          if (lStack_228 != 0) {
            func_0x0001092af97c(&lStack_228);
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x10ad28f6c);
            (*pcVar15)();
          }
          unaff_x22 = (long *)0x80;
          __Znwm();
          unaff_x22[2] = (long)plStack_1f8;
          unaff_x22[1] = (long)plStack_200;
          plStack_200 = (long *)0x0;
          plStack_1f8 = (long *)0x0;
          unaff_x22[4] = (long)plStack_1e8;
          unaff_x22[3] = (long)plStack_1f0;
          plStack_1f0 = (long *)0x0;
          plStack_1e8 = (long *)0x0;
          unaff_x22[5] = (long)pcStack_1e0;
          (*(code *)apuStack_1d8[0][2])(unaff_x22 + 6,apuStack_1d8);
          unaff_x22[0xe] = (long)FUN_10ad2ae24;
          unaff_x22[0xf] = (long)unaff_x21;
          pcStack_220 = (code *)0x10ad2abd4;
          ppcVar11 = &pcStack_220;
          plStack_218 = unaff_x22;
          plStack_210 = plVar6;
          (**(code **)*plVar6)(plVar6);
          __ZNSt13exception_ptrD1Ev(&lStack_228);
        }
        lStack_228 = 0;
        __ZNSt13exception_ptrD1Ev(&lStack_228);
        (*(code *)*apuStack_1d8[0])(apuStack_1d8);
        plVar4 = plStack_1e8;
        if (plStack_1e8 != (long *)0x0) {
          plVar6 = plStack_1e8 + 1;
          do {
            lVar13 = *plVar6;
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar13 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_1e8 + 0x10))(plStack_1e8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
        plVar4 = plStack_1f8;
        if (plStack_1f8 != (long *)0x0) {
          plVar6 = plStack_1f8 + 1;
          do {
            lVar13 = *plVar6;
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar13 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
      }
      plVar4 = plStack_258;
      if (plStack_258 != (long *)0x0) {
        plVar6 = plStack_258 + 1;
        do {
          lVar13 = *plVar6;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar13 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_258 + 0x10))(plStack_258);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      pplVar2 = (long **)pplVar12[1];
      pplVar16 = pplVar12;
      if ((long **)pplVar12[1] == (long **)0x0) {
        do {
          pplVar12 = (long **)pplVar16[2];
          bVar3 = (long **)*pplVar12 != pplVar16;
          pplVar16 = pplVar12;
        } while (bVar3);
      }
      else {
        do {
          pplVar12 = pplVar2;
          pplVar2 = (long **)*pplVar12;
        } while ((long **)*pplVar12 != (long **)0x0);
      }
      lVar13 = lStack_230;
    } while (pplVar12 != &plStack_238);
  }
  if (lVar13 == 0) {
    (**ppcVar10)(ppcVar10);
  }
  plVar4 = plStack_248;
  if (plStack_248 != (long *)0x0) {
    plVar6 = plStack_248 + 1;
    do {
      lVar13 = *plVar6;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar13 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_248 + 0x10))(plStack_248);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = plStack_238;
  func_0x00010ad29968();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010ad29f7c(&plStack_250);
  func_0x00010ad29968(plStack_238);
  __Unwind_Resume();
  pcStack_268 = FUN_10ad28ffc;
  lStack_2d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar10 = (code **)*plVar4;
  pcStack_2c0 = unaff_x28;
  pcStack_2b8 = unaff_x27;
  uStack_2b0 = unaff_x26;
  pplStack_2a8 = pplVar12;
  pplStack_2a0 = &plStack_238;
  puStack_298 = unaff_x23;
  plStack_290 = unaff_x22;
  plStack_288 = unaff_x21;
  ppuStack_270 = &puStack_140;
  FUN_10ad27758(&plStack_370);
  lVar13 = lStack_360;
  plVar4 = (long *)0x20;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110c6f210;
  plStack_380 = plVar4 + 3;
  *plStack_380 = lVar13;
  plStack_378 = plVar4;
  if (plStack_370 != &lStack_368) {
    unaff_x23 = auStack_338;
    plVar4 = plStack_370;
    do {
      plStack_390 = (long *)0x0;
      plStack_388 = (long *)0x0;
      plVar6 = (long *)plVar4[5];
      if (((plVar6 == (long *)0x0) ||
          (__ZNSt3__119__shared_weak_count4lockEv(), plStack_388 = plVar6, plVar6 == (long *)0x0))
         || (unaff_x22 = (long *)plVar4[4], plStack_390 = unaff_x22, unaff_x22 == (long *)0x0)) {
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_380,0x10);
          if (bVar3) {
            *plStack_380 = *plStack_380 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      else {
        plVar5 = unaff_x22;
        (**(code **)(*unaff_x22 + 0xa8))();
        plStack_330 = unaff_x22;
        plStack_328 = plVar6;
        plVar6 = plVar6 + 1;
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        plStack_318 = plStack_378;
        plStack_320 = plStack_380;
        if (plStack_378 != (long *)0x0) {
          plVar6 = plStack_378 + 1;
          do {
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = *plVar6 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        pcStack_310 = *ppcVar11;
        (**(code **)(ppcVar11[1] + 0x18))(apuStack_308,ppcVar11 + 1);
        unaff_x21 = (long *)plVar5[2];
        if (unaff_x21 == (long *)0x0) {
          unaff_x21 = (long *)0x78;
          __Znwm();
          unaff_x21[2] = (long)plStack_328;
          unaff_x21[1] = (long)plStack_330;
          plStack_330 = (long *)0x0;
          plStack_328 = (long *)0x0;
          unaff_x21[4] = (long)plStack_318;
          unaff_x21[3] = (long)plStack_320;
          plStack_320 = (long *)0x0;
          plStack_318 = (long *)0x0;
          unaff_x21[5] = (long)pcStack_310;
          (*(code *)apuStack_308[0][2])(unaff_x21 + 6,apuStack_308);
          unaff_x21[0xe] = 0x10ad2b244;
          pcStack_350 = FUN_10ad2aff0;
          ppcVar10 = &pcStack_350;
          plStack_348 = unaff_x21;
          plStack_340 = plVar5;
          (**(code **)*plVar5)(plVar5);
        }
        else {
          lStack_358 = 0;
          (**(code **)(*unaff_x21 + 0x28))(unaff_x21,0,&lStack_358);
          if (lStack_358 != 0) {
            func_0x0001092af97c(&lStack_358);
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x10ad293c4);
            (*pcVar15)();
          }
          unaff_x22 = (long *)0x80;
          __Znwm();
          unaff_x22[2] = (long)plStack_328;
          unaff_x22[1] = (long)plStack_330;
          plStack_330 = (long *)0x0;
          plStack_328 = (long *)0x0;
          unaff_x22[4] = (long)plStack_318;
          unaff_x22[3] = (long)plStack_320;
          plStack_320 = (long *)0x0;
          plStack_318 = (long *)0x0;
          unaff_x22[5] = (long)pcStack_310;
          (*(code *)apuStack_308[0][2])(unaff_x22 + 6,apuStack_308);
          unaff_x22[0xe] = (long)FUN_10ad2b200;
          unaff_x22[0xf] = (long)unaff_x21;
          pcStack_350 = (code *)0x10ad2afc0;
          ppcVar10 = &pcStack_350;
          plStack_348 = unaff_x22;
          plStack_340 = plVar5;
          (**(code **)*plVar5)(plVar5);
          __ZNSt13exception_ptrD1Ev(&lStack_358);
        }
        lStack_358 = 0;
        __ZNSt13exception_ptrD1Ev(&lStack_358);
        (*(code *)*apuStack_308[0])(apuStack_308);
        plVar6 = plStack_318;
        if (plStack_318 != (long *)0x0) {
          plVar5 = plStack_318 + 1;
          do {
            lVar13 = *plVar5;
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = lVar13 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_318 + 0x10))(plStack_318);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
        plVar6 = plStack_328;
        if (plStack_328 != (long *)0x0) {
          plVar5 = plStack_328 + 1;
          do {
            lVar13 = *plVar5;
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = lVar13 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_328 + 0x10))(plStack_328);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
      }
      plVar6 = plStack_388;
      if (plStack_388 != (long *)0x0) {
        plVar5 = plStack_388 + 1;
        do {
          lVar13 = *plVar5;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar13 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_388 + 0x10))(plStack_388);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      plVar6 = (long *)plVar4[1];
      plVar5 = plVar4;
      if ((long *)plVar4[1] == (long *)0x0) {
        do {
          plVar4 = (long *)plVar5[2];
          bVar3 = (long *)*plVar4 != plVar5;
          plVar5 = plVar4;
        } while (bVar3);
      }
      else {
        do {
          plVar4 = plVar6;
          plVar6 = (long *)*plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
      }
      lVar13 = lStack_360;
    } while (plVar4 != &lStack_368);
  }
  if (lVar13 == 0) {
    (**ppcVar11)(ppcVar11);
  }
  plVar4 = plStack_378;
  if (plStack_378 != (long *)0x0) {
    plVar6 = plStack_378 + 1;
    do {
      lVar13 = *plVar6;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar13 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_378 + 0x10))(plStack_378);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  lVar13 = lStack_368;
  func_0x00010ad29968();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d0) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010ad29f7c(&plStack_380);
  func_0x00010ad29968(lStack_368);
  __Unwind_Resume();
  pcStack_398 = FUN_10ad29454;
  plStack_3d0 = &lStack_368;
  puStack_3c8 = unaff_x23;
  plStack_3c0 = unaff_x22;
  plStack_3b8 = unaff_x21;
  pppuStack_3a0 = &ppuStack_270;
  __ZNSt3__15mutex4lockEv(lVar13 + 0x30);
  plVar4 = (long *)(lVar13 + 0x20);
  plVar6 = (long *)*plVar4;
  pcVar15 = ppcVar10[1];
  pcVar17 = ppcVar10[1];
  pcVar14 = *ppcVar10;
  do {
    plVar5 = plVar4;
    if (plVar6 == (long *)0x0) {
LAB_10ad294d4:
      lVar7 = 0x30;
      __Znwm();
      *(code **)(lVar7 + 0x28) = pcVar17;
      *(code **)(lVar7 + 0x20) = pcVar14;
      if (pcVar15 != (code *)0x0) {
        pcVar15 = pcVar15 + 0x10;
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcVar15,0x10);
          if (bVar3) {
            *(long *)pcVar15 = *(long *)pcVar15 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      func_0x00010ad29914(lVar13 + 0x18,plVar4,plVar5);
LAB_10ad29510:
      __ZNSt3__15mutex6unlockEv(lVar13 + 0x30);
      if (((*(char *)(lVar13 + 0x70) == '\x01') && (pcVar15 = ppcVar10[1], pcVar15 != (code *)0x0))
         && (__ZNSt3__119__shared_weak_count4lockEv(), pcVar15 != (code *)0x0)) {
        pcVar14 = *ppcVar10;
        if (pcVar14 != (code *)0x0) {
          pcVar8 = pcVar14;
          (**(code **)(*(long *)pcVar14 + 0xa8))();
          pcVar17 = pcVar15 + 8;
          do {
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pcVar17,0x10);
            if (bVar3) {
              *(long *)pcVar17 = *(long *)pcVar17 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          plVar4 = *(long **)(pcVar8 + 0x10);
          pcStack_3d8 = pcVar8;
          if (plVar4 == (long *)0x0) {
            puVar9 = (undefined8 *)0x20;
            __Znwm();
            *puVar9 = pcVar14;
            puVar9[1] = pcVar15;
            puVar9[3] = 0x10ad2b3f4;
            pcStack_3e8 = FUN_10ad2b390;
            puStack_3e0 = puVar9;
            (*(code *)**(undefined8 **)pcVar8)(pcVar8,&pcStack_3e8);
          }
          else {
            lStack_3f0 = 0;
            (**(code **)(*plVar4 + 0x28))(plVar4,0,&lStack_3f0);
            if (lStack_3f0 != 0) {
              func_0x0001092af97c(&lStack_3f0);
                    /* WARNING: Does not return */
              pcVar15 = (code *)SoftwareBreakpoint(1,0x10ad29694);
              (*pcVar15)();
            }
            puVar9 = (undefined8 *)0x28;
            __Znwm();
            *puVar9 = pcVar14;
            puVar9[1] = pcVar15;
            puVar9[3] = FUN_10ad2b3d8;
            puVar9[4] = plVar4;
            pcStack_3e8 = (code *)0x10ad2b360;
            puStack_3e0 = puVar9;
            (*(code *)**(undefined8 **)pcVar8)(pcVar8,&pcStack_3e8);
            __ZNSt13exception_ptrD1Ev(&lStack_3f0);
          }
          lStack_3f0 = 0;
          __ZNSt13exception_ptrD1Ev(&lStack_3f0);
        }
        pcVar14 = pcVar15 + 8;
        do {
          lVar7 = *(long *)pcVar14;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcVar14,0x10);
          if (bVar3) {
            *(long *)pcVar14 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*(long *)pcVar15 + 0x10))(pcVar15);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar15);
        }
      }
      (**(code **)(lVar13 + 0x78))((undefined8 *)(lVar13 + 0x78));
      return;
    }
    while (plVar4 = plVar6, (code *)plVar4[5] <= pcVar15) {
      if (pcVar15 <= (code *)plVar4[5]) goto LAB_10ad29510;
      plVar6 = (long *)plVar4[1];
      if ((long *)plVar4[1] == (long *)0x0) {
        plVar5 = plVar4 + 1;
        goto LAB_10ad294d4;
      }
    }
    plVar6 = (long *)*plVar4;
  } while( true );
}



/* Entry: 10ad28ba4; end: 10ad28ffb;  */

void FUN_10ad28ba4(long *param_1,long *param_2)

{
  char cVar1;
  long **pplVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  code *pcVar8;
  undefined8 *puVar9;
  code **ppcVar10;
  code **ppcVar11;
  long **pplVar12;
  long lVar13;
  long *unaff_x21;
  long *unaff_x22;
  code *pcVar14;
  undefined1 *unaff_x23;
  code *pcVar15;
  long **pplVar16;
  undefined8 unaff_x26;
  code *unaff_x27;
  code *unaff_x28;
  code *pcVar17;
  long lStack_2c0;
  code *pcStack_2b8;
  undefined8 *puStack_2b0;
  code *pcStack_2a8;
  long *plStack_2a0;
  undefined1 *puStack_298;
  long *plStack_290;
  long *plStack_288;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  long *plStack_260;
  long *plStack_258;
  long *plStack_250;
  long *plStack_248;
  long *plStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  code *pcStack_220;
  long *plStack_218;
  long *plStack_210;
  undefined1 auStack_208 [8];
  long *plStack_200;
  long *plStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  code *pcStack_1e0;
  undefined8 *apuStack_1d8 [7];
  long lStack_1a0;
  code *pcStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  long **pplStack_178;
  long **pplStack_170;
  undefined1 *puStack_168;
  long *plStack_160;
  long *plStack_158;
  undefined1 *puStack_140;
  code *pcStack_138;
  long *plStack_130;
  long *plStack_128;
  long *plStack_120;
  long *plStack_118;
  long **pplStack_110;
  long *plStack_108;
  long lStack_100;
  long lStack_f8;
  code *pcStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  undefined1 auStack_d8 [8];
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long lStack_b0;
  undefined8 *apuStack_a8 [7];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar10 = (code **)*param_1;
  FUN_10ad27758(&pplStack_110);
  lVar13 = lStack_100;
  plVar4 = (long *)0x20;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110c6f210;
  plStack_120 = plVar4 + 3;
  *plStack_120 = lVar13;
  pplVar12 = pplStack_110;
  plStack_118 = plVar4;
  if (pplStack_110 != &plStack_108) {
    unaff_x23 = auStack_d8;
    unaff_x27 = FUN_10ad2ac04;
    unaff_x28 = FUN_10ad2ae24;
    unaff_x26 = 0x10ad2abd4;
    do {
      plStack_130 = (long *)0x0;
      plStack_128 = (long *)0x0;
      plVar4 = pplVar12[5];
      if (((plVar4 == (long *)0x0) ||
          (__ZNSt3__119__shared_weak_count4lockEv(), plStack_128 = plVar4, plVar4 == (long *)0x0))
         || (unaff_x22 = pplVar12[4], plStack_130 = unaff_x22, unaff_x22 == (long *)0x0)) {
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_120,0x10);
          if (bVar3) {
            *plStack_120 = *plStack_120 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      else {
        plVar5 = unaff_x22;
        (**(code **)(*unaff_x22 + 0xa8))();
        plVar6 = plVar4 + 1;
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        plStack_b8 = plStack_118;
        plStack_c0 = plStack_120;
        if (plStack_118 != (long *)0x0) {
          plVar6 = plStack_118 + 1;
          do {
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = *plVar6 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        lStack_b0 = *param_2;
        plStack_d0 = unaff_x22;
        plStack_c8 = plVar4;
        (**(code **)(param_2[1] + 0x18))(apuStack_a8,param_2 + 1);
        unaff_x21 = (long *)plVar5[2];
        if (unaff_x21 == (long *)0x0) {
          unaff_x21 = (long *)0x78;
          __Znwm();
          unaff_x21[2] = (long)plStack_c8;
          unaff_x21[1] = (long)plStack_d0;
          plStack_d0 = (long *)0x0;
          plStack_c8 = (long *)0x0;
          unaff_x21[4] = (long)plStack_b8;
          unaff_x21[3] = (long)plStack_c0;
          plStack_c0 = (long *)0x0;
          plStack_b8 = (long *)0x0;
          unaff_x21[5] = lStack_b0;
          (*(code *)apuStack_a8[0][2])(unaff_x21 + 6,apuStack_a8);
          unaff_x21[0xe] = 0x10ad2ae68;
          pcStack_f0 = FUN_10ad2ac04;
          ppcVar10 = &pcStack_f0;
          plStack_e8 = unaff_x21;
          plStack_e0 = plVar5;
          (**(code **)*plVar5)(plVar5);
        }
        else {
          lStack_f8 = 0;
          (**(code **)(*unaff_x21 + 0x28))(unaff_x21,0,&lStack_f8);
          if (lStack_f8 != 0) {
            func_0x0001092af97c(&lStack_f8);
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x10ad28f6c);
            (*pcVar15)();
          }
          unaff_x22 = (long *)0x80;
          __Znwm();
          unaff_x22[2] = (long)plStack_c8;
          unaff_x22[1] = (long)plStack_d0;
          plStack_d0 = (long *)0x0;
          plStack_c8 = (long *)0x0;
          unaff_x22[4] = (long)plStack_b8;
          unaff_x22[3] = (long)plStack_c0;
          plStack_c0 = (long *)0x0;
          plStack_b8 = (long *)0x0;
          unaff_x22[5] = lStack_b0;
          (*(code *)apuStack_a8[0][2])(unaff_x22 + 6,apuStack_a8);
          unaff_x22[0xe] = (long)FUN_10ad2ae24;
          unaff_x22[0xf] = (long)unaff_x21;
          pcStack_f0 = (code *)0x10ad2abd4;
          ppcVar10 = &pcStack_f0;
          plStack_e8 = unaff_x22;
          plStack_e0 = plVar5;
          (**(code **)*plVar5)(plVar5);
          __ZNSt13exception_ptrD1Ev(&lStack_f8);
        }
        lStack_f8 = 0;
        __ZNSt13exception_ptrD1Ev(&lStack_f8);
        (*(code *)*apuStack_a8[0])(apuStack_a8);
        plVar4 = plStack_b8;
        if (plStack_b8 != (long *)0x0) {
          plVar6 = plStack_b8 + 1;
          do {
            lVar13 = *plVar6;
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar13 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
        plVar4 = plStack_c8;
        if (plStack_c8 != (long *)0x0) {
          plVar6 = plStack_c8 + 1;
          do {
            lVar13 = *plVar6;
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar13 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
      }
      plVar4 = plStack_128;
      if (plStack_128 != (long *)0x0) {
        plVar6 = plStack_128 + 1;
        do {
          lVar13 = *plVar6;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar13 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_128 + 0x10))(plStack_128);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      pplVar2 = (long **)pplVar12[1];
      pplVar16 = pplVar12;
      if ((long **)pplVar12[1] == (long **)0x0) {
        do {
          pplVar12 = (long **)pplVar16[2];
          bVar3 = (long **)*pplVar12 != pplVar16;
          pplVar16 = pplVar12;
        } while (bVar3);
      }
      else {
        do {
          pplVar12 = pplVar2;
          pplVar2 = (long **)*pplVar12;
        } while ((long **)*pplVar12 != (long **)0x0);
      }
      lVar13 = lStack_100;
    } while (pplVar12 != &plStack_108);
  }
  if (lVar13 == 0) {
    (*(code *)*param_2)(param_2);
  }
  plVar4 = plStack_118;
  if (plStack_118 != (long *)0x0) {
    plVar6 = plStack_118 + 1;
    do {
      lVar13 = *plVar6;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar13 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_118 + 0x10))(plStack_118);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = plStack_108;
  func_0x00010ad29968();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010ad29f7c(&plStack_120);
  func_0x00010ad29968(plStack_108);
  __Unwind_Resume();
  pcStack_138 = FUN_10ad28ffc;
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar11 = (code **)*plVar4;
  pcStack_190 = unaff_x28;
  pcStack_188 = unaff_x27;
  uStack_180 = unaff_x26;
  pplStack_178 = pplVar12;
  pplStack_170 = &plStack_108;
  puStack_168 = unaff_x23;
  plStack_160 = unaff_x22;
  plStack_158 = unaff_x21;
  puStack_140 = &stack0xfffffffffffffff0;
  FUN_10ad27758(&plStack_240);
  lVar13 = lStack_230;
  plVar4 = (long *)0x20;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110c6f210;
  plStack_250 = plVar4 + 3;
  *plStack_250 = lVar13;
  plStack_248 = plVar4;
  if (plStack_240 != &lStack_238) {
    unaff_x23 = auStack_208;
    plVar4 = plStack_240;
    do {
      plStack_260 = (long *)0x0;
      plStack_258 = (long *)0x0;
      plVar6 = (long *)plVar4[5];
      if (((plVar6 == (long *)0x0) ||
          (__ZNSt3__119__shared_weak_count4lockEv(), plStack_258 = plVar6, plVar6 == (long *)0x0))
         || (unaff_x22 = (long *)plVar4[4], plStack_260 = unaff_x22, unaff_x22 == (long *)0x0)) {
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_250,0x10);
          if (bVar3) {
            *plStack_250 = *plStack_250 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      else {
        plVar5 = unaff_x22;
        (**(code **)(*unaff_x22 + 0xa8))();
        plStack_200 = unaff_x22;
        plStack_1f8 = plVar6;
        plVar6 = plVar6 + 1;
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        plStack_1e8 = plStack_248;
        plStack_1f0 = plStack_250;
        if (plStack_248 != (long *)0x0) {
          plVar6 = plStack_248 + 1;
          do {
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = *plVar6 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        pcStack_1e0 = *ppcVar10;
        (**(code **)(ppcVar10[1] + 0x18))(apuStack_1d8,ppcVar10 + 1);
        unaff_x21 = (long *)plVar5[2];
        if (unaff_x21 == (long *)0x0) {
          unaff_x21 = (long *)0x78;
          __Znwm();
          unaff_x21[2] = (long)plStack_1f8;
          unaff_x21[1] = (long)plStack_200;
          plStack_200 = (long *)0x0;
          plStack_1f8 = (long *)0x0;
          unaff_x21[4] = (long)plStack_1e8;
          unaff_x21[3] = (long)plStack_1f0;
          plStack_1f0 = (long *)0x0;
          plStack_1e8 = (long *)0x0;
          unaff_x21[5] = (long)pcStack_1e0;
          (*(code *)apuStack_1d8[0][2])(unaff_x21 + 6,apuStack_1d8);
          unaff_x21[0xe] = 0x10ad2b244;
          pcStack_220 = FUN_10ad2aff0;
          ppcVar11 = &pcStack_220;
          plStack_218 = unaff_x21;
          plStack_210 = plVar5;
          (**(code **)*plVar5)(plVar5);
        }
        else {
          lStack_228 = 0;
          (**(code **)(*unaff_x21 + 0x28))(unaff_x21,0,&lStack_228);
          if (lStack_228 != 0) {
            func_0x0001092af97c(&lStack_228);
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x10ad293c4);
            (*pcVar15)();
          }
          unaff_x22 = (long *)0x80;
          __Znwm();
          unaff_x22[2] = (long)plStack_1f8;
          unaff_x22[1] = (long)plStack_200;
          plStack_200 = (long *)0x0;
          plStack_1f8 = (long *)0x0;
          unaff_x22[4] = (long)plStack_1e8;
          unaff_x22[3] = (long)plStack_1f0;
          plStack_1f0 = (long *)0x0;
          plStack_1e8 = (long *)0x0;
          unaff_x22[5] = (long)pcStack_1e0;
          (*(code *)apuStack_1d8[0][2])(unaff_x22 + 6,apuStack_1d8);
          unaff_x22[0xe] = (long)FUN_10ad2b200;
          unaff_x22[0xf] = (long)unaff_x21;
          pcStack_220 = (code *)0x10ad2afc0;
          ppcVar11 = &pcStack_220;
          plStack_218 = unaff_x22;
          plStack_210 = plVar5;
          (**(code **)*plVar5)(plVar5);
          __ZNSt13exception_ptrD1Ev(&lStack_228);
        }
        lStack_228 = 0;
        __ZNSt13exception_ptrD1Ev(&lStack_228);
        (*(code *)*apuStack_1d8[0])(apuStack_1d8);
        plVar6 = plStack_1e8;
        if (plStack_1e8 != (long *)0x0) {
          plVar5 = plStack_1e8 + 1;
          do {
            lVar13 = *plVar5;
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = lVar13 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_1e8 + 0x10))(plStack_1e8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
        plVar6 = plStack_1f8;
        if (plStack_1f8 != (long *)0x0) {
          plVar5 = plStack_1f8 + 1;
          do {
            lVar13 = *plVar5;
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = lVar13 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
      }
      plVar6 = plStack_258;
      if (plStack_258 != (long *)0x0) {
        plVar5 = plStack_258 + 1;
        do {
          lVar13 = *plVar5;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar13 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_258 + 0x10))(plStack_258);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      plVar6 = (long *)plVar4[1];
      plVar5 = plVar4;
      if ((long *)plVar4[1] == (long *)0x0) {
        do {
          plVar4 = (long *)plVar5[2];
          bVar3 = (long *)*plVar4 != plVar5;
          plVar5 = plVar4;
        } while (bVar3);
      }
      else {
        do {
          plVar4 = plVar6;
          plVar6 = (long *)*plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
      }
      lVar13 = lStack_230;
    } while (plVar4 != &lStack_238);
  }
  if (lVar13 == 0) {
    (**ppcVar10)(ppcVar10);
  }
  plVar4 = plStack_248;
  if (plStack_248 != (long *)0x0) {
    plVar6 = plStack_248 + 1;
    do {
      lVar13 = *plVar6;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar13 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_248 + 0x10))(plStack_248);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  lVar13 = lStack_238;
  func_0x00010ad29968();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010ad29f7c(&plStack_250);
  func_0x00010ad29968(lStack_238);
  __Unwind_Resume();
  pcStack_268 = FUN_10ad29454;
  plStack_2a0 = &lStack_238;
  puStack_298 = unaff_x23;
  plStack_290 = unaff_x22;
  plStack_288 = unaff_x21;
  ppuStack_270 = &puStack_140;
  __ZNSt3__15mutex4lockEv(lVar13 + 0x30);
  plVar4 = (long *)(lVar13 + 0x20);
  plVar6 = (long *)*plVar4;
  pcVar15 = ppcVar11[1];
  pcVar17 = ppcVar11[1];
  pcVar14 = *ppcVar11;
  do {
    plVar5 = plVar4;
    if (plVar6 == (long *)0x0) {
LAB_10ad294d4:
      lVar7 = 0x30;
      __Znwm();
      *(code **)(lVar7 + 0x28) = pcVar17;
      *(code **)(lVar7 + 0x20) = pcVar14;
      if (pcVar15 != (code *)0x0) {
        pcVar15 = pcVar15 + 0x10;
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcVar15,0x10);
          if (bVar3) {
            *(long *)pcVar15 = *(long *)pcVar15 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      func_0x00010ad29914(lVar13 + 0x18,plVar4,plVar5);
LAB_10ad29510:
      __ZNSt3__15mutex6unlockEv(lVar13 + 0x30);
      if (((*(char *)(lVar13 + 0x70) == '\x01') && (pcVar15 = ppcVar11[1], pcVar15 != (code *)0x0))
         && (__ZNSt3__119__shared_weak_count4lockEv(), pcVar15 != (code *)0x0)) {
        pcVar14 = *ppcVar11;
        if (pcVar14 != (code *)0x0) {
          pcVar8 = pcVar14;
          (**(code **)(*(long *)pcVar14 + 0xa8))();
          pcVar17 = pcVar15 + 8;
          do {
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pcVar17,0x10);
            if (bVar3) {
              *(long *)pcVar17 = *(long *)pcVar17 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          plVar4 = *(long **)(pcVar8 + 0x10);
          pcStack_2a8 = pcVar8;
          if (plVar4 == (long *)0x0) {
            puVar9 = (undefined8 *)0x20;
            __Znwm();
            *puVar9 = pcVar14;
            puVar9[1] = pcVar15;
            puVar9[3] = 0x10ad2b3f4;
            pcStack_2b8 = FUN_10ad2b390;
            puStack_2b0 = puVar9;
            (*(code *)**(undefined8 **)pcVar8)(pcVar8,&pcStack_2b8);
          }
          else {
            lStack_2c0 = 0;
            (**(code **)(*plVar4 + 0x28))(plVar4,0,&lStack_2c0);
            if (lStack_2c0 != 0) {
              func_0x0001092af97c(&lStack_2c0);
                    /* WARNING: Does not return */
              pcVar15 = (code *)SoftwareBreakpoint(1,0x10ad29694);
              (*pcVar15)();
            }
            puVar9 = (undefined8 *)0x28;
            __Znwm();
            *puVar9 = pcVar14;
            puVar9[1] = pcVar15;
            puVar9[3] = FUN_10ad2b3d8;
            puVar9[4] = plVar4;
            pcStack_2b8 = (code *)0x10ad2b360;
            puStack_2b0 = puVar9;
            (*(code *)**(undefined8 **)pcVar8)(pcVar8,&pcStack_2b8);
            __ZNSt13exception_ptrD1Ev(&lStack_2c0);
          }
          lStack_2c0 = 0;
          __ZNSt13exception_ptrD1Ev(&lStack_2c0);
        }
        pcVar14 = pcVar15 + 8;
        do {
          lVar7 = *(long *)pcVar14;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcVar14,0x10);
          if (bVar3) {
            *(long *)pcVar14 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*(long *)pcVar15 + 0x10))(pcVar15);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar15);
        }
      }
      (**(code **)(lVar13 + 0x78))((undefined8 *)(lVar13 + 0x78));
      return;
    }
    while (plVar4 = plVar6, (code *)plVar4[5] <= pcVar15) {
      if (pcVar15 <= (code *)plVar4[5]) goto LAB_10ad29510;
      plVar6 = (long *)plVar4[1];
      if ((long *)plVar4[1] == (long *)0x0) {
        plVar5 = plVar4 + 1;
        goto LAB_10ad294d4;
      }
    }
    plVar6 = (long *)*plVar4;
  } while( true );
}



/* Entry: 10ad28ffc; end: 10ad29453;  */

void FUN_10ad28ffc(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  code *pcVar7;
  undefined8 *puVar8;
  code **ppcVar9;
  long lVar10;
  long *unaff_x21;
  long *unaff_x22;
  long *plVar11;
  code *pcVar12;
  undefined1 *unaff_x23;
  code *pcVar13;
  code *pcVar14;
  long lStack_190;
  code *pcStack_188;
  undefined8 *puStack_180;
  code *pcStack_178;
  long *plStack_170;
  undefined1 *puStack_168;
  long *plStack_160;
  long *plStack_158;
  undefined1 *puStack_140;
  code *pcStack_138;
  long *plStack_130;
  long *plStack_128;
  long *plStack_120;
  long *plStack_118;
  long *plStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  code *pcStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  undefined1 auStack_d8 [8];
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long lStack_b0;
  undefined8 *apuStack_a8 [7];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar9 = (code **)*param_1;
  FUN_10ad27758(&plStack_110);
  lVar10 = lStack_100;
  plVar3 = (long *)0x20;
  __Znwm();
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_110c6f210;
  plStack_120 = plVar3 + 3;
  *plStack_120 = lVar10;
  plStack_118 = plVar3;
  if (plStack_110 != &lStack_108) {
    unaff_x23 = auStack_d8;
    plVar3 = plStack_110;
    do {
      plStack_130 = (long *)0x0;
      plStack_128 = (long *)0x0;
      plVar4 = (long *)plVar3[5];
      if (((plVar4 == (long *)0x0) ||
          (__ZNSt3__119__shared_weak_count4lockEv(), plStack_128 = plVar4, plVar4 == (long *)0x0))
         || (unaff_x22 = (long *)plVar3[4], plStack_130 = unaff_x22, unaff_x22 == (long *)0x0)) {
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plStack_120,0x10);
          if (bVar2) {
            *plStack_120 = *plStack_120 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      else {
        plVar5 = unaff_x22;
        (**(code **)(*unaff_x22 + 0xa8))();
        plVar11 = plVar4 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar2) {
            *plVar11 = *plVar11 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        plStack_b8 = plStack_118;
        plStack_c0 = plStack_120;
        if (plStack_118 != (long *)0x0) {
          plVar11 = plStack_118 + 1;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar2) {
              *plVar11 = *plVar11 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        lStack_b0 = *param_2;
        plStack_d0 = unaff_x22;
        plStack_c8 = plVar4;
        (**(code **)(param_2[1] + 0x18))(apuStack_a8,param_2 + 1);
        unaff_x21 = (long *)plVar5[2];
        if (unaff_x21 == (long *)0x0) {
          unaff_x21 = (long *)0x78;
          __Znwm();
          unaff_x21[2] = (long)plStack_c8;
          unaff_x21[1] = (long)plStack_d0;
          plStack_d0 = (long *)0x0;
          plStack_c8 = (long *)0x0;
          unaff_x21[4] = (long)plStack_b8;
          unaff_x21[3] = (long)plStack_c0;
          plStack_c0 = (long *)0x0;
          plStack_b8 = (long *)0x0;
          unaff_x21[5] = lStack_b0;
          (*(code *)apuStack_a8[0][2])(unaff_x21 + 6,apuStack_a8);
          unaff_x21[0xe] = 0x10ad2b244;
          pcStack_f0 = FUN_10ad2aff0;
          ppcVar9 = &pcStack_f0;
          plStack_e8 = unaff_x21;
          plStack_e0 = plVar5;
          (**(code **)*plVar5)(plVar5);
        }
        else {
          lStack_f8 = 0;
          (**(code **)(*unaff_x21 + 0x28))(unaff_x21,0,&lStack_f8);
          if (lStack_f8 != 0) {
            func_0x0001092af97c(&lStack_f8);
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x10ad293c4);
            (*pcVar13)();
          }
          unaff_x22 = (long *)0x80;
          __Znwm();
          unaff_x22[2] = (long)plStack_c8;
          unaff_x22[1] = (long)plStack_d0;
          plStack_d0 = (long *)0x0;
          plStack_c8 = (long *)0x0;
          unaff_x22[4] = (long)plStack_b8;
          unaff_x22[3] = (long)plStack_c0;
          plStack_c0 = (long *)0x0;
          plStack_b8 = (long *)0x0;
          unaff_x22[5] = lStack_b0;
          (*(code *)apuStack_a8[0][2])(unaff_x22 + 6,apuStack_a8);
          unaff_x22[0xe] = (long)FUN_10ad2b200;
          unaff_x22[0xf] = (long)unaff_x21;
          pcStack_f0 = (code *)0x10ad2afc0;
          ppcVar9 = &pcStack_f0;
          plStack_e8 = unaff_x22;
          plStack_e0 = plVar5;
          (**(code **)*plVar5)(plVar5);
          __ZNSt13exception_ptrD1Ev(&lStack_f8);
        }
        lStack_f8 = 0;
        __ZNSt13exception_ptrD1Ev(&lStack_f8);
        (*(code *)*apuStack_a8[0])(apuStack_a8);
        plVar4 = plStack_b8;
        if (plStack_b8 != (long *)0x0) {
          plVar11 = plStack_b8 + 1;
          do {
            lVar10 = *plVar11;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar2) {
              *plVar11 = lVar10 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
        plVar4 = plStack_c8;
        if (plStack_c8 != (long *)0x0) {
          plVar11 = plStack_c8 + 1;
          do {
            lVar10 = *plVar11;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar2) {
              *plVar11 = lVar10 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
      }
      plVar4 = plStack_128;
      if (plStack_128 != (long *)0x0) {
        plVar11 = plStack_128 + 1;
        do {
          lVar10 = *plVar11;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar2) {
            *plVar11 = lVar10 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_128 + 0x10))(plStack_128);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      plVar4 = (long *)plVar3[1];
      plVar11 = plVar3;
      if ((long *)plVar3[1] == (long *)0x0) {
        do {
          plVar3 = (long *)plVar11[2];
          bVar2 = (long *)*plVar3 != plVar11;
          plVar11 = plVar3;
        } while (bVar2);
      }
      else {
        do {
          plVar3 = plVar4;
          plVar4 = (long *)*plVar3;
        } while ((long *)*plVar3 != (long *)0x0);
      }
      lVar10 = lStack_100;
    } while (plVar3 != &lStack_108);
  }
  if (lVar10 == 0) {
    (*(code *)*param_2)(param_2);
  }
  plVar3 = plStack_118;
  if (plStack_118 != (long *)0x0) {
    plVar4 = plStack_118 + 1;
    do {
      lVar10 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_118 + 0x10))(plStack_118);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  lVar10 = lStack_108;
  func_0x00010ad29968();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010ad29f7c(&plStack_120);
  func_0x00010ad29968(lStack_108);
  __Unwind_Resume();
  pcStack_138 = FUN_10ad29454;
  plStack_170 = &lStack_108;
  puStack_168 = unaff_x23;
  plStack_160 = unaff_x22;
  plStack_158 = unaff_x21;
  puStack_140 = &stack0xfffffffffffffff0;
  __ZNSt3__15mutex4lockEv(lVar10 + 0x30);
  plVar3 = (long *)(lVar10 + 0x20);
  plVar4 = (long *)*plVar3;
  pcVar13 = ppcVar9[1];
  pcVar14 = ppcVar9[1];
  pcVar12 = *ppcVar9;
  do {
    plVar11 = plVar3;
    if (plVar4 == (long *)0x0) {
LAB_10ad294d4:
      lVar6 = 0x30;
      __Znwm();
      *(code **)(lVar6 + 0x28) = pcVar14;
      *(code **)(lVar6 + 0x20) = pcVar12;
      if (pcVar13 != (code *)0x0) {
        pcVar13 = pcVar13 + 0x10;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(pcVar13,0x10);
          if (bVar2) {
            *(long *)pcVar13 = *(long *)pcVar13 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      func_0x00010ad29914(lVar10 + 0x18,plVar3,plVar11);
LAB_10ad29510:
      __ZNSt3__15mutex6unlockEv(lVar10 + 0x30);
      if (((*(char *)(lVar10 + 0x70) == '\x01') && (pcVar13 = ppcVar9[1], pcVar13 != (code *)0x0))
         && (__ZNSt3__119__shared_weak_count4lockEv(), pcVar13 != (code *)0x0)) {
        pcVar12 = *ppcVar9;
        if (pcVar12 != (code *)0x0) {
          pcVar7 = pcVar12;
          (**(code **)(*(long *)pcVar12 + 0xa8))();
          pcVar14 = pcVar13 + 8;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(pcVar14,0x10);
            if (bVar2) {
              *(long *)pcVar14 = *(long *)pcVar14 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          plVar3 = *(long **)(pcVar7 + 0x10);
          pcStack_178 = pcVar7;
          if (plVar3 == (long *)0x0) {
            puVar8 = (undefined8 *)0x20;
            __Znwm();
            *puVar8 = pcVar12;
            puVar8[1] = pcVar13;
            puVar8[3] = 0x10ad2b3f4;
            pcStack_188 = FUN_10ad2b390;
            puStack_180 = puVar8;
            (*(code *)**(undefined8 **)pcVar7)(pcVar7,&pcStack_188);
          }
          else {
            lStack_190 = 0;
            (**(code **)(*plVar3 + 0x28))(plVar3,0,&lStack_190);
            if (lStack_190 != 0) {
              func_0x0001092af97c(&lStack_190);
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x10ad29694);
              (*pcVar13)();
            }
            puVar8 = (undefined8 *)0x28;
            __Znwm();
            *puVar8 = pcVar12;
            puVar8[1] = pcVar13;
            puVar8[3] = FUN_10ad2b3d8;
            puVar8[4] = plVar3;
            pcStack_188 = (code *)0x10ad2b360;
            puStack_180 = puVar8;
            (*(code *)**(undefined8 **)pcVar7)(pcVar7,&pcStack_188);
            __ZNSt13exception_ptrD1Ev(&lStack_190);
          }
          lStack_190 = 0;
          __ZNSt13exception_ptrD1Ev(&lStack_190);
        }
        pcVar12 = pcVar13 + 8;
        do {
          lVar6 = *(long *)pcVar12;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(pcVar12,0x10);
          if (bVar2) {
            *(long *)pcVar12 = lVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*(long *)pcVar13 + 0x10))(pcVar13);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar13);
        }
      }
      (**(code **)(lVar10 + 0x78))((undefined8 *)(lVar10 + 0x78));
      return;
    }
    while (plVar3 = plVar4, (code *)plVar3[5] <= pcVar13) {
      if (pcVar13 <= (code *)plVar3[5]) goto LAB_10ad29510;
      plVar4 = (long *)plVar3[1];
      if ((long *)plVar3[1] == (long *)0x0) {
        plVar11 = plVar3 + 1;
        goto LAB_10ad294d4;
      }
    }
    plVar4 = (long *)*plVar3;
  } while( true );
}



/* Entry: 10ad29454; end: 10ad296d3;  */

void FUN_10ad29454(long param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lStack_60;
  code *pcStack_58;
  undefined8 *puStack_50;
  long *plStack_48;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x30);
  plVar10 = (long *)(param_1 + 0x20);
  plVar7 = (long *)*plVar10;
  uVar8 = param_2[1];
  uVar12 = param_2[1];
  uVar11 = *param_2;
  do {
    plVar9 = plVar10;
    if (plVar7 == (long *)0x0) {
LAB_10ad294d4:
      lVar4 = 0x30;
      __Znwm();
      *(undefined8 *)(lVar4 + 0x28) = uVar12;
      *(undefined8 *)(lVar4 + 0x20) = uVar11;
      if (uVar8 != 0) {
        plVar7 = (long *)(uVar8 + 0x10);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = *plVar7 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_10ad29914(param_1 + 0x18,plVar10,plVar9);
LAB_10ad29510:
      __ZNSt3__15mutex6unlockEv(param_1 + 0x30);
      if (((*(char *)(param_1 + 0x70) == '\x01') &&
          (plVar10 = (long *)param_2[1], plVar10 != (long *)0x0)) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar10 != (long *)0x0)) {
        plVar7 = (long *)*param_2;
        if (plVar7 != (long *)0x0) {
          plVar5 = plVar7;
          (**(code **)(*plVar7 + 0xa8))();
          plVar9 = plVar10 + 1;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar2) {
              *plVar9 = *plVar9 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          plVar9 = (long *)plVar5[2];
          plStack_48 = plVar5;
          if (plVar9 == (long *)0x0) {
            puVar6 = (undefined8 *)0x20;
            __Znwm();
            *puVar6 = plVar7;
            puVar6[1] = plVar10;
            puVar6[3] = 0x10ad2b3f4;
            pcStack_58 = FUN_10ad2b390;
            puStack_50 = puVar6;
            (**(code **)*plVar5)(plVar5,&pcStack_58);
          }
          else {
            lStack_60 = 0;
            (**(code **)(*plVar9 + 0x28))(plVar9,0,&lStack_60);
            if (lStack_60 != 0) {
              func_0x0001092af97c(&lStack_60);
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10ad29694);
              (*pcVar3)();
            }
            puVar6 = (undefined8 *)0x28;
            __Znwm();
            *puVar6 = plVar7;
            puVar6[1] = plVar10;
            puVar6[3] = FUN_10ad2b3d8;
            puVar6[4] = plVar9;
            pcStack_58 = (code *)0x10ad2b360;
            puStack_50 = puVar6;
            (**(code **)*plVar5)(plVar5,&pcStack_58);
            __ZNSt13exception_ptrD1Ev(&lStack_60);
          }
          lStack_60 = 0;
          __ZNSt13exception_ptrD1Ev(&lStack_60);
        }
        plVar7 = plVar10 + 1;
        do {
          lVar4 = *plVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar4 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar4 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      (**(code **)(param_1 + 0x78))((undefined8 *)(param_1 + 0x78));
      return;
    }
    while (plVar10 = plVar7, (ulong)plVar10[5] <= uVar8) {
      if (uVar8 <= (ulong)plVar10[5]) goto LAB_10ad29510;
      plVar7 = (long *)plVar10[1];
      if ((long *)plVar10[1] == (long *)0x0) {
        plVar9 = plVar10 + 1;
        goto LAB_10ad294d4;
      }
    }
    plVar7 = (long *)*plVar10;
  } while( true );
}



/* Entry: 10ad296d4; end: 10ad298d3;  */

void FUN_10ad296d4(long param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x30);
  plVar5 = (long *)(param_1 + 0x20);
  plVar3 = (long *)*plVar5;
  if (plVar3 != (long *)0x0) {
    plVar6 = plVar3;
    plVar7 = plVar5;
    do {
      lVar1 = 8;
      if (*(ulong *)(param_2 + 8) <= (ulong)plVar6[5]) {
        lVar1 = 0;
        plVar7 = plVar6;
      }
      plVar6 = *(long **)((long)plVar6 + lVar1);
    } while (plVar6 != (long *)0x0);
    if ((plVar7 != plVar5) && ((ulong)plVar7[5] <= *(ulong *)(param_2 + 8))) {
      plVar5 = plVar7;
      plVar6 = (long *)plVar7[1];
      if ((long *)plVar7[1] == (long *)0x0) {
        do {
          plVar4 = (long *)plVar5[2];
          bVar2 = (long *)*plVar4 != plVar5;
          plVar5 = plVar4;
        } while (bVar2);
      }
      else {
        do {
          plVar4 = plVar6;
          plVar6 = (long *)*plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
      }
      if (*(long **)(param_1 + 0x18) == plVar7) {
        *(long **)(param_1 + 0x18) = plVar4;
      }
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
      FUN_10a04815c(plVar3,plVar7);
      if (plVar7[5] != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      __ZdlPv(plVar7);
    }
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010ad297b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0xb8))((undefined8 *)(param_1 + 0xb8));
  return;
}



/* Entry: 10ad298d4; end: 10ad298e3;  */

void FUN_10ad298d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6f170;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ad298e4; end: 10ad29903;  */

void FUN_10ad298e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6f170;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad29904; end: 10ad29913;  */

void FUN_10ad29904(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ad2990c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10ad29914; end: 10ad299ab;  */

void FUN_10ad29914(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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



/* Entry: 10ad299ac; end: 10ad29a03;  */

void FUN_10ad299ac(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x30;
  __Znwm();
  FUN_10ad29a04();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10ad29a04; end: 10ad29a4b;  */

undefined8 * FUN_10ad29a04(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110c6f1c0;
  FUN_10ad29a8c(param_1 + 3);
  return param_1;
}



/* Entry: 10ad29a4c; end: 10ad29a5b;  */

void FUN_10ad29a4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6f1c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ad29a5c; end: 10ad29a7b;  */

void FUN_10ad29a5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6f1c0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad29a7c; end: 10ad29a8b;  */

void FUN_10ad29a7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ad29a84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 8))();
  return;
}



/* Entry: 10ad29a8c; end: 10ad29b93;  */

undefined8 * FUN_10ad29a8c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  
  uVar2 = *param_2;
  lVar3 = param_2[1];
  if (lVar3 == 0) {
    *param_1 = &PTR_FUN_110c6f078;
    param_1[1] = uVar2;
    param_1[2] = 0;
  }
  else {
    plVar1 = (long *)(lVar3 + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    *param_1 = &PTR_FUN_110c6f078;
    param_1[1] = uVar2;
    param_1[2] = lVar3;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10ad29b94; end: 10ad29ba3;  */

void FUN_10ad29b94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6f210;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ad29ba4; end: 10ad29bc3;  */

void FUN_10ad29ba4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6f210;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad29bc4; end: 10ad29bcb;  */

void FUN_10ad29bc4(void)

{
  return;
}



/* Entry: 10ad29bcc; end: 10ad29bfb;  */

void FUN_10ad29bcc(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x78);
  FUN_10ad29bfc();
                    /* WARNING: Could not recover jumptable at 0x00010ad29bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10ad29bfc; end: 10ad29e1b;  */

void FUN_10ad29bfc(long param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long lStack_a8;
  code *pcStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 *apuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = *(long **)(param_1 + 8);
  (**(code **)(*plVar4 + 0x68))();
  plVar6 = *(long **)(param_1 + 0x18);
  do {
    lVar7 = *plVar6;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar7 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar7 + -1 == 0) {
    FUN_10a102184();
    puVar8 = (undefined8 *)plVar4[9];
    uStack_88 = *(undefined8 *)(param_1 + 0x28);
    (**(code **)(*(long *)(param_1 + 0x30) + 0x18))(apuStack_80);
    plVar4 = (long *)puVar8[2];
    puStack_90 = puVar8;
    if (plVar4 == (long *)0x0) {
      puVar5 = (undefined8 *)0x50;
      __Znwm();
      *puVar5 = uStack_88;
      (*(code *)apuStack_80[0][2])(puVar5 + 1,apuStack_80);
      puVar5[9] = 0x10ad29f48;
      pcStack_a0 = FUN_10ad29ed4;
      param_2 = (int)&pcStack_a0;
      puStack_98 = puVar5;
      (**(code **)*puVar8)(puVar8);
    }
    else {
      lStack_a8 = 0;
      (**(code **)(*plVar4 + 0x28))(plVar4,0,&lStack_a8);
      if (lStack_a8 != 0) {
        func_0x0001092af97c(&lStack_a8);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10ad29db4);
        (*pcVar3)();
      }
      puVar5 = (undefined8 *)0x58;
      __Znwm();
      *puVar5 = uStack_88;
      (*(code *)apuStack_80[0][2])(puVar5 + 1,apuStack_80);
      puVar5[9] = 0x10ad29f14;
      puVar5[10] = plVar4;
      pcStack_a0 = (code *)0x10ad29ea4;
      param_2 = (int)&pcStack_a0;
      puStack_98 = puVar5;
      (**(code **)*puVar8)(puVar8);
      __ZNSt13exception_ptrD1Ev(&lStack_a8);
    }
    lStack_a8 = 0;
    __ZNSt13exception_ptrD1Ev(&lStack_a8);
    (*(code *)*apuStack_80[0])(apuStack_80);
  }
  (**(code **)(param_1 + 0x70))();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume(param_1);
  }
  func_0x000104bd46a0();
  if (param_1 != 0) {
    (*(code *)**(undefined8 **)(param_1 + 0x30))();
    func_0x00010ad29f7c(param_1 + 0x18);
    FUN_10ad27584(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10ad29e1c; end: 10ad29ed3;  */

void FUN_10ad29e1c(long param_1)

{
  if (param_1 != 0) {
    (*(code *)**(undefined8 **)(param_1 + 0x30))();
    func_0x00010ad29f7c(param_1 + 0x18);
    FUN_10ad27584(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10ad29ed4; end: 10ad29f13;  */

void FUN_10ad29ed4(undefined8 *param_1)

{
  (*(code *)*param_1)();
  (*(code *)param_1[9])(param_1);
  return;
}



/* Entry: 10ad29f14; end: 10ad2a03f;  */

void FUN_10ad29f14(long param_1)

{
  if (param_1 != 0) {
    (*(code *)**(undefined8 **)(param_1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10ad2a040; end: 10ad2a25f;  */

void FUN_10ad2a040(long param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long lStack_a8;
  code *pcStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 *apuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = *(long **)(param_1 + 8);
  (**(code **)(*plVar4 + 0x70))();
  plVar6 = *(long **)(param_1 + 0x18);
  do {
    lVar7 = *plVar6;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar7 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar7 + -1 == 0) {
    FUN_10a102184();
    puVar8 = (undefined8 *)plVar4[9];
    uStack_88 = *(undefined8 *)(param_1 + 0x28);
    (**(code **)(*(long *)(param_1 + 0x30) + 0x18))(apuStack_80);
    plVar4 = (long *)puVar8[2];
    puStack_90 = puVar8;
    if (plVar4 == (long *)0x0) {
      puVar5 = (undefined8 *)0x50;
      __Znwm();
      *puVar5 = uStack_88;
      (*(code *)apuStack_80[0][2])(puVar5 + 1,apuStack_80);
      puVar5[9] = 0x10ad2a38c;
      pcStack_a0 = FUN_10ad2a318;
      param_2 = (int)&pcStack_a0;
      puStack_98 = puVar5;
      (**(code **)*puVar8)(puVar8);
    }
    else {
      lStack_a8 = 0;
      (**(code **)(*plVar4 + 0x28))(plVar4,0,&lStack_a8);
      if (lStack_a8 != 0) {
        func_0x0001092af97c(&lStack_a8);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10ad2a1f8);
        (*pcVar3)();
      }
      puVar5 = (undefined8 *)0x58;
      __Znwm();
      *puVar5 = uStack_88;
      (*(code *)apuStack_80[0][2])(puVar5 + 1,apuStack_80);
      puVar5[9] = FUN_10ad2a358;
      puVar5[10] = plVar4;
      pcStack_a0 = (code *)0x10ad2a2e8;
      param_2 = (int)&pcStack_a0;
      puStack_98 = puVar5;
      (**(code **)*puVar8)(puVar8);
      __ZNSt13exception_ptrD1Ev(&lStack_a8);
    }
    lStack_a8 = 0;
    __ZNSt13exception_ptrD1Ev(&lStack_a8);
    (*(code *)*apuStack_80[0])(apuStack_80);
  }
  (**(code **)(param_1 + 0x70))();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume(param_1);
  }
  func_0x000104bd46a0();
  if (param_1 != 0) {
    (*(code *)**(undefined8 **)(param_1 + 0x30))();
    func_0x00010ad29f7c(param_1 + 0x18);
    FUN_10ad27584(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10ad2a260; end: 10ad2a317;  */

void FUN_10ad2a260(long param_1)

{
  if (param_1 != 0) {
    (*(code *)**(undefined8 **)(param_1 + 0x30))();
    func_0x00010ad29f7c(param_1 + 0x18);
    FUN_10ad27584(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10ad2a318; end: 10ad2a357;  */

void FUN_10ad2a318(undefined8 *param_1)

{
  (*(code *)*param_1)();
  (*(code *)param_1[9])(param_1);
  return;
}



/* Entry: 10ad2a358; end: 10ad2a42b;  */

void FUN_10ad2a358(long param_1)

{
  if (param_1 != 0) {
    (*(code *)**(undefined8 **)(param_1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10ad2a42c; end: 10ad2a64b;  */

void FUN_10ad2a42c(long param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long lStack_a8;
  code *pcStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 *apuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = *(long **)(param_1 + 8);
  (**(code **)(*plVar4 + 0x78))();
  plVar6 = *(long **)(param_1 + 0x18);
  do {
    lVar7 = *plVar6;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar7 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar7 + -1 == 0) {
    FUN_10a102184();
    puVar8 = (undefined8 *)plVar4[9];
    uStack_88 = *(undefined8 *)(param_1 + 0x28);
    (**(code **)(*(long *)(param_1 + 0x30) + 0x18))(apuStack_80);
    plVar4 = (long *)puVar8[2];
    puStack_90 = puVar8;
    if (plVar4 == (long *)0x0) {
      puVar5 = (undefined8 *)0x50;
      __Znwm();
      *puVar5 = uStack_88;
      (*(code *)apuStack_80[0][2])(puVar5 + 1,apuStack_80);
      puVar5[9] = 0x10ad2a778;
      pcStack_a0 = FUN_10ad2a704;
      param_2 = (int)&pcStack_a0;
      puStack_98 = puVar5;
      (**(code **)*puVar8)(puVar8);
    }
    else {
      lStack_a8 = 0;
      (**(code **)(*plVar4 + 0x28))(plVar4,0,&lStack_a8);
      if (lStack_a8 != 0) {
        func_0x0001092af97c(&lStack_a8);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10ad2a5e4);
        (*pcVar3)();
      }
      puVar5 = (undefined8 *)0x58;
      __Znwm();
      *puVar5 = uStack_88;
      (*(code *)apuStack_80[0][2])(puVar5 + 1,apuStack_80);
      puVar5[9] = FUN_10ad2a744;
      puVar5[10] = plVar4;
      pcStack_a0 = (code *)0x10ad2a6d4;
      param_2 = (int)&pcStack_a0;
      puStack_98 = puVar5;
      (**(code **)*puVar8)(puVar8);
      __ZNSt13exception_ptrD1Ev(&lStack_a8);
    }
    lStack_a8 = 0;
    __ZNSt13exception_ptrD1Ev(&lStack_a8);
    (*(code *)*apuStack_80[0])(apuStack_80);
  }
  (**(code **)(param_1 + 0x70))();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume(param_1);
  }
  func_0x000104bd46a0();
  if (param_1 != 0) {
    (*(code *)**(undefined8 **)(param_1 + 0x30))();
    func_0x00010ad29f7c(param_1 + 0x18);
    FUN_10ad27584(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10ad2a64c; end: 10ad2a703;  */

void FUN_10ad2a64c(long param_1)

{
  if (param_1 != 0) {
    (*(code *)**(undefined8 **)(param_1 + 0x30))();
    func_0x00010ad29f7c(param_1 + 0x18);
    FUN_10ad27584(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10ad2a704; end: 10ad2a743;  */

void FUN_10ad2a704(undefined8 *param_1)

{
  (*(code *)*param_1)();
  (*(code *)param_1[9])(param_1);
  return;
}



/* Entry: 10ad2a744; end: 10ad2a817;  */

void FUN_10ad2a744(long param_1)

{
  if (param_1 != 0) {
    (*(code *)**(undefined8 **)(param_1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10ad2a818; end: 10ad2aa37;  */

void FUN_10ad2a818(long param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long lStack_a8;
  code *pcStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 *apuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = *(long **)(param_1 + 8);
  (**(code **)(*plVar4 + 0x80))();
  plVar6 = *(long **)(param_1 + 0x18);
  do {
    lVar7 = *plVar6;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar7 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar7 + -1 == 0) {
    FUN_10a102184();
    puVar8 = (undefined8 *)plVar4[9];
    uStack_88 = *(undefined8 *)(param_1 + 0x28);
    (**(code **)(*(long *)(param_1 + 0x30) + 0x18))(apuStack_80);
    plVar4 = (long *)puVar8[2];
    puStack_90 = puVar8;
    if (plVar4 == (long *)0x0) {
      puVar5 = (undefined8 *)0x50;
      __Znwm();
      *puVar5 = uStack_88;
      (*(code *)apuStack_80[0][2])(puVar5 + 1,apuStack_80);
      puVar5[9] = 0x10ad2ab64;
      pcStack_a0 = FUN_10ad2aaf0;
      param_2 = (int)&pcStack_a0;
      puStack_98 = puVar5;
      (**(code **)*puVar8)(puVar8);
    }
    else {
      lStack_a8 = 0;
      (**(code **)(*plVar4 + 0x28))(plVar4,0,&lStack_a8);
      if (lStack_a8 != 0) {
        func_0x0001092af97c(&lStack_a8);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10ad2a9d0);
        (*pcVar3)();
      }
      puVar5 = (undefined8 *)0x58;
      __Znwm();
      *puVar5 = uStack_88;
      (*(code *)apuStack_80[0][2])(puVar5 + 1,apuStack_80);
      puVar5[9] = FUN_10ad2ab30;
      puVar5[10] = plVar4;
      pcStack_a0 = (code *)0x10ad2aac0;
      param_2 = (int)&pcStack_a0;
      puStack_98 = puVar5;
      (**(code **)*puVar8)(puVar8);
      __ZNSt13exception_ptrD1Ev(&lStack_a8);
    }
    lStack_a8 = 0;
    __ZNSt13exception_ptrD1Ev(&lStack_a8);
    (*(code *)*apuStack_80[0])(apuStack_80);
  }
  (**(code **)(param_1 + 0x70))();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume(param_1);
  }
  func_0x000104bd46a0();
  if (param_1 != 0) {
    (*(code *)**(undefined8 **)(param_1 + 0x30))();
    func_0x00010ad29f7c(param_1 + 0x18);
    FUN_10ad27584(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10ad2aa38; end: 10ad2aaef;  */

void FUN_10ad2aa38(long param_1)

{
  if (param_1 != 0) {
    (*(code *)**(undefined8 **)(param_1 + 0x30))();
    func_0x00010ad29f7c(param_1 + 0x18);
    FUN_10ad27584(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10ad2aaf0; end: 10ad2ab2f;  */

void FUN_10ad2aaf0(undefined8 *param_1)

{
  (*(code *)*param_1)();
  (*(code *)param_1[9])(param_1);
  return;
}



/* Entry: 10ad2ab30; end: 10ad2ac03;  */

void FUN_10ad2ab30(long param_1)

{
  if (param_1 != 0) {
    (*(code *)**(undefined8 **)(param_1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10ad2ac04; end: 10ad2ae23;  */

void FUN_10ad2ac04(long param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long lStack_a8;
  code *pcStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 *apuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = *(long **)(param_1 + 8);
  (**(code **)(*plVar4 + 0xb8))();
  plVar6 = *(long **)(param_1 + 0x18);
  do {
    lVar7 = *plVar6;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar7 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar7 + -1 == 0) {
    FUN_10a102184();
    puVar8 = (undefined8 *)plVar4[9];
    uStack_88 = *(undefined8 *)(param_1 + 0x28);
    (**(code **)(*(long *)(param_1 + 0x30) + 0x18))(apuStack_80);
    plVar4 = (long *)puVar8[2];
    puStack_90 = puVar8;
    if (plVar4 == (long *)0x0) {
      puVar5 = (undefined8 *)0x50;
      __Znwm();
      *puVar5 = uStack_88;
      (*(code *)apuStack_80[0][2])(puVar5 + 1,apuStack_80);
      puVar5[9] = 0x10ad2af50;
      pcStack_a0 = FUN_10ad2aedc;
      param_2 = (int)&pcStack_a0;
      puStack_98 = puVar5;
      (**(code **)*puVar8)(puVar8);
    }
    else {
      lStack_a8 = 0;
      (**(code **)(*plVar4 + 0x28))(plVar4,0,&lStack_a8);
      if (lStack_a8 != 0) {
        func_0x0001092af97c(&lStack_a8);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10ad2adbc);
        (*pcVar3)();
      }
      puVar5 = (undefined8 *)0x58;
      __Znwm();
      *puVar5 = uStack_88;
      (*(code *)apuStack_80[0][2])(puVar5 + 1,apuStack_80);
      puVar5[9] = FUN_10ad2af1c;
      puVar5[10] = plVar4;
      pcStack_a0 = (code *)0x10ad2aeac;
      param_2 = (int)&pcStack_a0;
      puStack_98 = puVar5;
      (**(code **)*puVar8)(puVar8);
      __ZNSt13exception_ptrD1Ev(&lStack_a8);
    }
    lStack_a8 = 0;
    __ZNSt13exception_ptrD1Ev(&lStack_a8);
    (*(code *)*apuStack_80[0])(apuStack_80);
  }
  (**(code **)(param_1 + 0x70))();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume(param_1);
  }
  func_0x000104bd46a0();
  if (param_1 != 0) {
    (*(code *)**(undefined8 **)(param_1 + 0x30))();
    func_0x00010ad29f7c(param_1 + 0x18);
    FUN_10ad27584(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10ad2ae24; end: 10ad2aedb;  */

void FUN_10ad2ae24(long param_1)

{
  if (param_1 != 0) {
    (*(code *)**(undefined8 **)(param_1 + 0x30))();
    func_0x00010ad29f7c(param_1 + 0x18);
    FUN_10ad27584(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10ad2aedc; end: 10ad2af1b;  */

void FUN_10ad2aedc(undefined8 *param_1)

{
  (*(code *)*param_1)();
  (*(code *)param_1[9])(param_1);
  return;
}



/* Entry: 10ad2af1c; end: 10ad2afef;  */

void FUN_10ad2af1c(long param_1)

{
  if (param_1 != 0) {
    (*(code *)**(undefined8 **)(param_1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10ad2aff0; end: 10ad2b1ff;  */

void FUN_10ad2aff0(long param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lStack_a8;
  code *pcStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 *apuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = *(long **)(param_1 + 0x18);
  do {
    lVar6 = *plVar5;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar6 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar6 + -1 == 0) {
    lVar6 = param_1;
    FUN_10a102184();
    puVar7 = *(undefined8 **)(lVar6 + 0x48);
    uStack_88 = *(undefined8 *)(param_1 + 0x28);
    (**(code **)(*(long *)(param_1 + 0x30) + 0x18))(apuStack_80);
    plVar5 = (long *)puVar7[2];
    puStack_90 = puVar7;
    if (plVar5 == (long *)0x0) {
      puVar4 = (undefined8 *)0x50;
      __Znwm();
      *puVar4 = uStack_88;
      (*(code *)apuStack_80[0][2])(puVar4 + 1,apuStack_80);
      puVar4[9] = 0x10ad2b32c;
      pcStack_a0 = FUN_10ad2b2b8;
      param_2 = (int)&pcStack_a0;
      puStack_98 = puVar4;
      (**(code **)*puVar7)(puVar7);
    }
    else {
      lStack_a8 = 0;
      (**(code **)(*plVar5 + 0x28))(plVar5,0,&lStack_a8);
      if (lStack_a8 != 0) {
        func_0x0001092af97c(&lStack_a8);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10ad2b198);
        (*pcVar3)();
      }
      puVar4 = (undefined8 *)0x58;
      __Znwm();
      *puVar4 = uStack_88;
      (*(code *)apuStack_80[0][2])(puVar4 + 1,apuStack_80);
      puVar4[9] = FUN_10ad2b2f8;
      puVar4[10] = plVar5;
      pcStack_a0 = (code *)0x10ad2b288;
      param_2 = (int)&pcStack_a0;
      puStack_98 = puVar4;
      (**(code **)*puVar7)(puVar7);
      __ZNSt13exception_ptrD1Ev(&lStack_a8);
    }
    lStack_a8 = 0;
    __ZNSt13exception_ptrD1Ev(&lStack_a8);
    (*(code *)*apuStack_80[0])(apuStack_80);
  }
  (**(code **)(param_1 + 0x70))();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume(param_1);
  }
  func_0x000104bd46a0();
  if (param_1 != 0) {
    (*(code *)**(undefined8 **)(param_1 + 0x30))();
    func_0x00010ad29f7c(param_1 + 0x18);
    FUN_10ad27584(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10ad2b200; end: 10ad2b2b7;  */

void FUN_10ad2b200(long param_1)

{
  if (param_1 != 0) {
    (*(code *)**(undefined8 **)(param_1 + 0x30))();
    func_0x00010ad29f7c(param_1 + 0x18);
    FUN_10ad27584(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10ad2b2b8; end: 10ad2b2f7;  */

void FUN_10ad2b2b8(undefined8 *param_1)

{
  (*(code *)*param_1)();
  (*(code *)param_1[9])(param_1);
  return;
}



/* Entry: 10ad2b2f8; end: 10ad2b38f;  */

void FUN_10ad2b2f8(long param_1)

{
  if (param_1 != 0) {
    (*(code *)**(undefined8 **)(param_1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10ad2b390; end: 10ad2b3d7;  */

void FUN_10ad2b390(undefined8 *param_1)

{
  (**(code **)(*(long *)*param_1 + 0x68))();
  (*(code *)param_1[3])(param_1);
  return;
}



/* Entry: 10ad2b3d8; end: 10ad2b40f;  */

void FUN_10ad2b3d8(long param_1)

{
  if (param_1 != 0) {
    FUN_10ad27584();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10ad2b410; end: 10ad2b4d3;  */

undefined8 * FUN_10ad2b410(undefined8 *param_1,undefined1 param_2)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_110c6f260;
  *(undefined1 *)(param_1 + 0x802) = param_2;
  param_1[0x804] = 0;
  param_1[0x803] = 0;
  param_1[0x806] = 0;
  param_1[0x805] = 0;
  param_1[0x807] = 1;
  *(undefined2 *)(param_1 + 0x808) = 0;
  param_1[0x809] = 0x32aaaba7;
  param_1[0x80b] = 0;
  param_1[0x80a] = 0;
  param_1[0x80d] = 0;
  param_1[0x80c] = 0;
  param_1[0x80f] = 0;
  param_1[0x80e] = 0;
  param_1[0x810] = 0;
  FUN_10ad2b4d4(param_1,1);
  return param_1;
}



/* Entry: 10ad2b4d4; end: 10ad2b593;  */

void FUN_10ad2b4d4(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uStack_38;
  
  *(undefined8 *)(param_1 + 0x4038) = param_2;
  __ZNSt3__15mutex4lockEv(param_1 + 0x4048);
  lVar2 = *(long *)(param_1 + 0x4038);
  plVar1 = (long *)0x50;
  __Znwm();
  lVar2 = lVar2 << 0xb;
  plVar1[3] = 0;
  plVar1[2] = 0;
  plVar1[5] = 0;
  plVar1[4] = 0;
  plVar1[7] = 0;
  plVar1[6] = 0;
  plVar1[9] = 0;
  plVar1[8] = 0;
  *plVar1 = lVar2;
  plVar1[1] = lVar2;
  uStack_38 = 0;
  FUN_10ad14c08(param_1 + 8);
  FUN_10ad14c08(&uStack_38,0);
  *(short *)(param_1 + 0x4040) = (short)(int)((1.0 / (float)*(ulong *)(param_1 + 0x4038)) * 32767.0)
  ;
  __ZNSt3__15mutex6unlockEv(param_1 + 0x4048);
  return;
}



/* Entry: 10ad2b594; end: 10ad2b623;  */

void FUN_10ad2b594(long param_1,undefined8 param_2)

{
  __ZNSt3__15mutex4lockEv(param_1 + 0x4048);
  if (*(char *)(param_1 + 0x4010) == '\x01') {
    func_0x00010ad38e44(*(long *)(param_1 + 8) + 0x20,param_2);
  }
  else {
    FUN_10ad2b624(param_1 + 0x4028,param_1 + 0x4018);
    FUN_10ad2b624(param_1 + 0x4018,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x4048);
  return;
}



/* Entry: 10ad2b624; end: 10ad2b74b;  */

undefined8 * FUN_10ad2b624(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10ad2b74c; end: 10ad2b863;  */

bool FUN_10ad2b74c(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  short *psVar2;
  short *psVar3;
  ulong uVar4;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x4048);
  uVar1 = *(ulong *)(param_1 + 8);
  FUN_10ad38edc(uVar1,(short *)(param_1 + 0x10),*(long *)(param_1 + 0x4038) * param_3);
  uVar4 = uVar1;
  if ((*(long *)(param_1 + 0x4038) == 2) && (uVar4 = uVar1 >> 1, 1 < uVar1)) {
    psVar2 = (short *)(param_1 + 0x12);
    uVar1 = uVar4;
    psVar3 = (short *)(param_1 + 0x10);
    do {
      *psVar3 = (short)((uint)((int)*psVar2 * (int)*(short *)(param_1 + 0x4040)) >> 0xf) +
                (short)((uint)((int)*(short *)(param_1 + 0x4040) * (int)psVar2[-1]) >> 0xf);
      psVar2 = psVar2 + 2;
      uVar1 = uVar1 - 1;
      psVar3 = psVar3 + 1;
    } while (uVar1 != 0);
  }
  if (param_3 - uVar4 != 0) {
    _bzero(param_2 + uVar4 * 4,(param_3 - uVar4) * 4);
  }
  if (uVar4 != 0) {
    uVar1 = uVar4;
    do {
      *(float *)(param_2 + -4 + uVar1 * 4) =
           (float)(int)*(short *)(param_1 + 0xe + uVar1 * 2) / 32767.0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 0x4048);
  return param_3 == uVar4;
}



/* Entry: 10ad2b864; end: 10ad2b8f7;  */

void FUN_10ad2b864(long param_1)

{
  __ZNSt3__15mutex4lockEv(param_1 + 0x4048);
  *(undefined1 *)(param_1 + 0x4010) = 1;
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10ad39030();
    if (*(long *)(param_1 + 0x4028) != 0) {
      func_0x00010ad38e44(*(long *)(param_1 + 8) + 0x20,param_1 + 0x4028);
    }
    if (*(long *)(param_1 + 0x4018) != 0) {
      func_0x00010ad38e44(*(long *)(param_1 + 8) + 0x20,param_1 + 0x4018);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x4048);
  return;
}



/* Entry: 10ad2b8f8; end: 10ad2b92b;  */

void FUN_10ad2b8f8(long param_1)

{
  __ZNSt3__15mutex4lockEv(param_1 + 0x4048);
  *(undefined1 *)(param_1 + 0x4010) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x4048);
  return;
}



/* Entry: 10ad2b92c; end: 10ad2b92f;  */

undefined8 * FUN_10ad2b92c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6f260;
  __ZNSt3__15mutexD1Ev(param_1 + 0x809);
  func_0x00010ad14da8(param_1 + 0x805);
  func_0x00010ad14da8(param_1 + 0x803);
  FUN_10ad14c08(param_1 + 1,0);
  return param_1;
}



/* Entry: 10ad2b930; end: 10ad2b943;  */

void FUN_10ad2b930(void)

{
  FUN_10ad2b954();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad2b944; end: 10ad2b953;  */

void FUN_10ad2b944(void)

{
  return;
}



/* Entry: 10ad2b954; end: 10ad2b9b3;  */

undefined8 * FUN_10ad2b954(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6f260;
  __ZNSt3__15mutexD1Ev(param_1 + 0x809);
  func_0x00010ad14da8(param_1 + 0x805);
  func_0x00010ad14da8(param_1 + 0x803);
  FUN_10ad14c08(param_1 + 1,0);
  return param_1;
}



/* Entry: 10ad2b9b4; end: 10ad2ba0b;  */

void FUN_10ad2b9b4(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x40a0;
  __Znwm();
  FUN_10ad2ba0c();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10ad2ba0c; end: 10ad2ba57;  */

undefined8 * FUN_10ad2ba0c(undefined8 *param_1,undefined1 *param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110c6f2f0;
  FUN_10ad2b410(param_1 + 3,*param_2);
  return param_1;
}



/* Entry: 10ad2ba58; end: 10ad2ba67;  */

void FUN_10ad2ba58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6f2f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ad2ba68; end: 10ad2ba87;  */

void FUN_10ad2ba68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6f2f0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad2ba88; end: 10ad2ba97;  */

void FUN_10ad2ba88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ad2ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10ad2ba98; end: 10ad2baf7;  */

void FUN_10ad2ba98(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar4 = 0x70;
  __Znwm();
  FUN_10ad2baf8();
  *param_1 = lVar4 + 0x18;
  param_1[1] = lVar4;
  if (((long *)(lVar4 + 0x50) != (long *)0x0) &&
     ((lVar5 = *(long *)(lVar4 + 0x58), lVar5 == 0 || (*(long *)(lVar5 + 8) == -1)))) {
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
      lVar5 = *(long *)(lVar4 + 0x58);
    }
    *(long *)(lVar4 + 0x50) = lVar4 + 0x18;
    *(long **)(lVar4 + 0x58) = plVar6;
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



/* Entry: 10ad2baf8; end: 10ad2bb3f;  */

undefined8 * FUN_10ad2baf8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110c6f340;
  FUN_10ad2bb80(param_1 + 3);
  return param_1;
}



/* Entry: 10ad2bb40; end: 10ad2bb4f;  */

void FUN_10ad2bb40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6f340;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ad2bb50; end: 10ad2bb6f;  */

void FUN_10ad2bb50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6f340;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad2bb70; end: 10ad2bb7f;  */

void FUN_10ad2bb70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ad2bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10ad2bb80; end: 10ad2bc07;  */

undefined8 FUN_10ad2bb80(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_10ad20588(param_1,&uStack_30);
  plVar4 = plStack_28;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return param_1;
}



/* Entry: 10ad2bc08; end: 10ad2bcb7;  */

void FUN_10ad2bc08(long param_1,undefined8 *param_2,undefined8 param_3)

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


