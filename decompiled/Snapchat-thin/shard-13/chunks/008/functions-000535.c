/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ad38478; end: 10ad3852f;  */

void FUN_10ad38478(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
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
  plVar4 = *(long **)(param_1 + 0x50);
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



/* Entry: 10ad38530; end: 10ad3877b;  */

void FUN_10ad38530(long param_1)

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
  
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    FUN_10ad30f24(param_1 + 0x60,*(undefined8 *)(param_1 + 0x58));
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x60);
    plVar5 = (long *)(*(long *)(param_1 + 0x60) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x68) = 1;
      lVar8 = *(long *)(param_1 + 0x48);
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
  plVar5 = *(long **)(param_1 + 0x48);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar5 + 0x12);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10ad386c0);
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
  plVar5 = *(long **)(param_1 + 0x60);
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
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10ad3877c; end: 10ad3883f;  */

void FUN_10ad3877c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0x68) == '\x01') {
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
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10ad38840; end: 10ad38a7b;  */

void FUN_10ad38840(long param_1)

{
  ulong *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong uVar7;
  
  plVar6 = *(long **)(param_1 + 0x48);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 5 & 1) == 0) {
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar7 & 0x1fffffffc) == 4) {
        do {
          uVar7 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar7 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar7 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    plVar6 = *(long **)(param_1 + 0x50);
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar7 & 0x1fffffffc) == 4) {
        do {
          uVar7 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar7 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar7 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    if (((uint)*(undefined8 *)(*(long *)(*(long *)(*(long *)(param_1 + 0x60) + 0x50) + 0x38) + 0x10)
         >> 1 & 1) == 0) {
      if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
        func_0x00010ae06f08(1,8,&UNK_10f6a60ce,&UNK_10f6a66c1,0xa7,&UNK_10f6a673b,in_x6,in_x7,
                            *(undefined8 *)(param_1 + 0x60));
      }
      lVar2 = *(long *)(param_1 + 0x58);
      plVar6 = *(long **)(*(long *)(param_1 + 0x60) + 8);
      (**(code **)(*plVar6 + 0x10))(plVar6,*(undefined4 *)(lVar2 + 8));
      plVar6 = (long *)(*(long *)(*(long *)(param_1 + 0x60) + 0x20) + 8);
      (**(code **)(*plVar6 + 0x10))(plVar6,*(undefined4 *)(lVar2 + 8));
      plVar6 = *(long **)(*(long *)(param_1 + 0x60) + 0x30);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x50))();
      }
    }
    func_0x0001092ba100(param_1 + 0x10);
    func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  func_0x0001092af97c(plVar6 + 0x12);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10ad389c0);
  (*pcVar5)();
}



/* Entry: 10ad38a7c; end: 10ad38b33;  */

void FUN_10ad38a7c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
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
  plVar4 = *(long **)(param_1 + 0x50);
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



/* Entry: 10ad38b34; end: 10ad38d7f;  */

void FUN_10ad38b34(long param_1)

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
  
  if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
    FUN_10ad30b90(param_1 + 0x68,param_1 + 0x48);
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x68);
    plVar5 = (long *)(*(long *)(param_1 + 0x68) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x70) = 1;
      lVar8 = *(long *)(param_1 + 0x58);
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
  plVar5 = *(long **)(param_1 + 0x58);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar5 + 0x12);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10ad38cc4);
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
  plVar5 = *(long **)(param_1 + 0x68);
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
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10ad38d80; end: 10ad38edb;  */

void FUN_10ad38d80(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0x70) == '\x01') {
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
    plVar4 = *(long **)(param_1 + 0x68);
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
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10ad38edc; end: 10ad38fd3;  */

ulong FUN_10ad38edc(long *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    lVar4 = *param_1;
    do {
      lVar2 = param_1[1];
      if (lVar4 == lVar2) {
        if (param_1[9] == 0) {
          if (0 < (long)(param_3 * 2 + uVar3 * -2)) {
            _bzero();
          }
          *param_1 = lVar4;
          return uVar3;
        }
        FUN_10ad2b624(param_1 + 2,
                      *(long *)(param_1[5] + ((ulong)param_1[8] >> 8) * 8) +
                      (param_1[8] & 0xffU) * 0x10);
        FUN_10ad38fd4(param_1 + 4);
        lVar4 = 0;
        *param_1 = 0;
        lVar2 = param_1[1];
      }
      uVar1 = lVar2 - lVar4;
      if (param_3 - uVar3 <= (ulong)(lVar2 - lVar4)) {
        uVar1 = param_3 - uVar3;
      }
      _memcpy(param_2 + uVar3 * 2,param_1[2] + lVar4 * 2,uVar1 << 1);
      uVar3 = uVar1 + uVar3;
      lVar4 = *param_1 + uVar1;
      *param_1 = lVar4;
    } while (uVar3 < param_3);
  }
  return uVar3;
}



/* Entry: 10ad38fd4; end: 10ad3902f;  */

bool FUN_10ad38fd4(long param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad39030);
    (*pcVar1)();
  }
  func_0x00010ad14da8(*(long *)(*(long *)(param_1 + 8) + (*(ulong *)(param_1 + 0x20) >> 8) * 8) +
                      (*(ulong *)(param_1 + 0x20) & 0xff) * 0x10);
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  bVar2 = 0x1ff < *(ulong *)(param_1 + 0x20);
  if (bVar2) {
    __ZdlPv(**(undefined8 **)(param_1 + 8));
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x100;
  }
  return bVar2;
}



/* Entry: 10ad39030; end: 10ad39127;  */

void FUN_10ad39030(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  
  puVar3 = (undefined8 *)param_1[5];
  puVar5 = puVar3;
  if ((undefined8 *)param_1[6] != puVar3) {
    uVar6 = param_1[8];
    plVar7 = puVar3 + (uVar6 >> 8);
    lVar2 = *plVar7 + (uVar6 & 0xff) * 0x10;
    lVar1 = puVar3[param_1[9] + uVar6 >> 8] + (param_1[9] + uVar6 & 0xff) * 0x10;
    puVar5 = (undefined8 *)param_1[6];
    if (lVar2 != lVar1) {
      do {
        func_0x00010ad14da8();
        lVar2 = lVar2 + 0x10;
        if (lVar2 - *plVar7 == 0x1000) {
          plVar7 = plVar7 + 1;
          lVar2 = *plVar7;
        }
      } while (lVar2 != lVar1);
      puVar3 = (undefined8 *)param_1[5];
      puVar5 = (undefined8 *)param_1[6];
    }
  }
  param_1[9] = 0;
  lVar2 = (long)puVar5 - (long)puVar3;
  while (uVar6 = lVar2 >> 3, 2 < uVar6) {
    __ZdlPv(*puVar3);
    puVar3 = (undefined8 *)(param_1[5] + 8);
    param_1[5] = puVar3;
    lVar2 = param_1[6] - (long)puVar3;
  }
  if (uVar6 == 1) {
    uVar4 = 0x80;
  }
  else {
    if (uVar6 != 2) goto LAB_10ad39110;
    uVar4 = 0x100;
  }
  param_1[8] = uVar4;
LAB_10ad39110:
  *param_1 = param_1[1];
  return;
}



/* Entry: 10ad39128; end: 10ad39437;  */

void FUN_10ad39128(ulong *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  
  if (0xff < param_1[4]) {
    param_1[4] = param_1[4] - 0x100;
    puVar10 = (undefined8 *)param_1[1] + 1;
    uVar3 = *(undefined8 *)param_1[1];
LAB_10ad39160:
    param_1[1] = (ulong)puVar10;
    puVar10 = (undefined8 *)param_1[2];
    if (puVar10 == (undefined8 *)param_1[3]) {
      uVar15 = *param_1;
      uVar5 = param_1[1];
      if (uVar5 < uVar15 || uVar5 - uVar15 == 0) {
        uVar8 = (long)((long)puVar10 - uVar15) >> 2;
        if ((long)puVar10 - uVar15 == 0) {
          uVar8 = 1;
        }
        uVar15 = uVar8;
        FUN_10ad39534();
        puVar11 = (undefined8 *)(uVar15 + (uVar8 >> 2) * 8);
        lVar12 = param_1[2] - (long)param_1[1];
        puVar10 = puVar11;
        if (lVar12 != 0) {
          puVar10 = (undefined8 *)((long)puVar11 + lVar12);
          puVar7 = (undefined8 *)param_1[1];
          puVar9 = puVar11;
          do {
            *puVar9 = *puVar7;
            lVar12 = lVar12 + -8;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          } while (lVar12 != 0);
        }
        uVar8 = *param_1;
        *param_1 = uVar15;
        param_1[1] = (ulong)puVar11;
        param_1[2] = (ulong)puVar10;
        param_1[3] = uVar15 + uVar5 * 8;
        if (uVar8 != 0) {
          __ZdlPv(uVar8);
          puVar10 = (undefined8 *)param_1[2];
        }
      }
      else {
        lVar12 = (((long)(uVar5 - uVar15) >> 3) + 1) / 2;
        lVar13 = uVar5 + lVar12 * -8;
        lVar1 = (long)puVar10 - uVar5;
        if (lVar1 != 0) {
          _memmove(lVar13,uVar5,lVar1);
          uVar5 = param_1[1];
        }
        puVar10 = (undefined8 *)(lVar13 + lVar1);
        param_1[1] = uVar5 + lVar12 * -8;
        param_1[2] = (ulong)puVar10;
      }
    }
    *puVar10 = uVar3;
    param_1[2] = param_1[2] + 8;
    return;
  }
  puVar11 = (undefined8 *)param_1[2];
  puVar9 = (undefined8 *)param_1[3];
  puVar7 = (undefined8 *)*param_1;
  puVar10 = (undefined8 *)param_1[1];
  uVar15 = (long)puVar11 - (long)puVar10;
  if (uVar15 < (ulong)((long)puVar9 - (long)puVar7)) {
    uVar3 = 0x1000;
    __Znwm();
    if (puVar9 == puVar11) {
      if (puVar10 == puVar7) {
        uVar15 = (long)puVar9 - (long)puVar10 >> 2;
        if (puVar11 == puVar10) {
          uVar15 = 1;
        }
        lVar12 = uVar15 * 2;
        FUN_10ad39534();
        puVar10 = (undefined8 *)(uVar15 + (lVar12 + 6U & 0xfffffffffffffff8));
        lVar12 = param_1[2] - (long)param_1[1];
        puVar11 = puVar10;
        if (lVar12 != 0) {
          puVar11 = (undefined8 *)((long)puVar10 + lVar12);
          puVar7 = (undefined8 *)param_1[1];
          puVar9 = puVar10;
          do {
            *puVar9 = *puVar7;
            lVar12 = lVar12 + -8;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          } while (lVar12 != 0);
        }
        uVar5 = *param_1;
        *param_1 = uVar15;
        param_1[1] = (ulong)puVar10;
        param_1[2] = (ulong)puVar11;
        param_1[3] = uVar15 + (long)param_2 * 8;
        if (uVar5 != 0) {
          __ZdlPv(uVar5);
          puVar10 = (undefined8 *)param_1[1];
        }
      }
      puVar10[-1] = uVar3;
      puVar10 = (undefined8 *)param_1[1];
      param_1[1] = (ulong)(puVar10 + -1);
      uVar3 = puVar10[-1];
      goto LAB_10ad39160;
    }
    *puVar11 = uVar3;
    param_1[2] = param_1[2] + 8;
  }
  else {
    puVar6 = (undefined8 *)((long)puVar9 - (long)puVar7 >> 2);
    if (puVar9 == puVar7) {
      puVar6 = (undefined8 *)0x1;
    }
    FUN_10ad39534();
    uVar3 = 0x1000;
    puVar4 = param_2;
    __Znwm();
    puVar7 = (undefined8 *)((long)puVar6 + uVar15);
    puVar9 = puVar6 + (long)param_2;
    puVar2 = puVar6;
    if (uVar15 == (long)param_2 * 8) {
      if ((long)uVar15 < 1) {
        puVar7 = (undefined8 *)((long)puVar7 - (long)puVar6 >> 2);
        if (puVar11 == puVar10) {
          puVar7 = (undefined8 *)0x1;
        }
        puVar2 = puVar7;
        FUN_10ad39534();
        puVar7 = puVar2 + ((ulong)puVar7 >> 2);
        puVar9 = puVar2 + (long)puVar4;
        if (puVar6 != (undefined8 *)0x0) {
          __ZdlPv(puVar6);
        }
      }
      else {
        lVar12 = ((long)puVar7 - (long)puVar6 >> 3) + 1;
        puVar7 = puVar7 + -((ulong)(lVar12 - (lVar12 >> 0x3f)) >> 1);
      }
    }
    puVar10 = puVar7 + 1;
    *puVar7 = uVar3;
    puVar11 = (undefined8 *)param_1[2];
    puVar6 = puVar2;
    if (puVar11 != (undefined8 *)param_1[1]) {
      do {
        puVar2 = puVar6;
        puVar14 = puVar7;
        if (puVar7 == puVar6) {
          if (puVar10 < puVar9) {
            lVar12 = ((long)puVar9 - (long)puVar10 >> 3) + 1;
            lVar1 = (long)puVar10 - (long)puVar6;
            lVar13 = (long)puVar10 - (long)puVar6;
            puVar10 = puVar10 + ((ulong)(lVar12 - (lVar12 >> 0x3f)) >> 1);
            puVar14 = (undefined8 *)((long)puVar10 - lVar1);
            if (lVar13 != 0) {
              _memmove(puVar14,puVar7,lVar13);
              puVar4 = puVar7;
            }
          }
          else {
            puVar14 = (undefined8 *)((long)puVar9 - (long)puVar6 >> 2);
            if ((long)puVar9 - (long)puVar6 == 0) {
              puVar14 = (undefined8 *)0x1;
            }
            puVar2 = puVar14;
            FUN_10ad39534();
            puVar14 = (undefined8 *)((long)puVar2 + ((long)puVar14 * 2 + 6U & 0xfffffffffffffff8));
            lVar12 = (long)puVar10 - (long)puVar6;
            puVar10 = puVar14;
            if (lVar12 != 0) {
              puVar10 = (undefined8 *)((long)puVar14 + lVar12);
              puVar9 = puVar14;
              do {
                *puVar9 = *puVar7;
                lVar12 = lVar12 + -8;
                puVar9 = puVar9 + 1;
                puVar7 = puVar7 + 1;
              } while (lVar12 != 0);
            }
            puVar9 = puVar2 + (long)puVar4;
            if (puVar6 != (undefined8 *)0x0) {
              __ZdlPv(puVar6);
            }
          }
        }
        puVar11 = puVar11 + -1;
        puVar7 = puVar14 + -1;
        *puVar7 = *puVar11;
        puVar6 = puVar2;
      } while (puVar11 != (undefined8 *)param_1[1]);
    }
    uVar15 = *param_1;
    *param_1 = (ulong)puVar2;
    param_1[1] = (ulong)puVar7;
    param_1[2] = (ulong)puVar10;
    param_1[3] = (ulong)puVar9;
    if (uVar15 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 10ad39438; end: 10ad39533;  */

void FUN_10ad39438(ulong *param_1,undefined8 param_2)

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
    uVar3 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar5 = (long)((long)puVar7 - uVar3) >> 2;
      if ((long)puVar7 - uVar3 == 0) {
        uVar5 = 1;
      }
      uVar3 = uVar5;
      FUN_10ad39534();
      puVar1 = (undefined8 *)(uVar3 + (uVar5 >> 2) * 8);
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
      uVar5 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar3 + uVar4 * 8;
      if (uVar5 != 0) {
        __ZdlPv(uVar5);
        puVar7 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar3) >> 3) + 1) / 2;
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
  *puVar7 = param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 10ad39534; end: 10ad395c3;  */

undefined1  [16] FUN_10ad39534(ulong param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (param_1 >> 0x3d == 0) {
    lVar2 = param_1 << 3;
    __Znwm(lVar2);
    auVar4._8_8_ = param_1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  uVar3 = (uint)param_2;
  if (*(ulong *)(param_1 + 0x20) < 0x100) {
    uVar3 = 1;
  }
  uVar1 = 0;
  if (*(ulong *)(param_1 + 0x20) < 0x200) {
    uVar1 = uVar3;
  }
  if ((uVar1 & 1) == 0) {
    __ZdlPv(**(undefined8 **)(param_1 + 8));
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x100;
  }
  auVar5._4_4_ = 0;
  auVar5._0_4_ = uVar1 ^ 1;
  auVar5._8_8_ = param_2;
  return auVar5;
}



/* Entry: 10ad395c4; end: 10ad3960f;  */

void FUN_10ad395c4(long param_1,undefined8 param_2)

{
  __ZNSt3__15mutex4lockEv(param_1 + 0x50);
  FUN_10ad39610(param_1 + 0x20,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x50);
  return;
}



/* Entry: 10ad39610; end: 10ad396c3;  */

void FUN_10ad39610(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  lVar2 = *(long *)(param_1 + 8);
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != lVar2) {
    uVar1 = (*(long *)(param_1 + 0x10) - lVar2 >> 3) * 0xaa - 1;
  }
  uVar4 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
  if (uVar1 == uVar4) {
    FUN_10ad39894(param_1);
    lVar2 = *(long *)(param_1 + 8);
    uVar4 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
  }
  puVar3 = (undefined8 *)(*(long *)(lVar2 + (uVar4 / 0xaa) * 8) + (uVar4 % 0xaa) * 0x18);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  uVar5 = *param_2;
  puVar3[1] = param_2[1];
  *puVar3 = uVar5;
  puVar3[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  return;
}



/* Entry: 10ad396c4; end: 10ad39817;  */

ulong FUN_10ad396c4(long *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  __ZNSt3__15mutex4lockEv(param_1 + 10);
  uVar6 = 0;
  if (param_3 != 0) {
    lVar2 = *param_1;
    do {
      lVar4 = param_1[1];
      lVar5 = param_1[2] - lVar4 >> 2;
      if (lVar5 == lVar2) {
        if (param_1[9] == 0) {
          if (0 < (long)(param_3 * 4 + uVar6 * -4)) {
            _bzero();
          }
          break;
        }
        plVar3 = (long *)(*(long *)(param_1[5] + ((ulong)param_1[8] / 0xaa) * 8) +
                         ((ulong)param_1[8] % 0xaa) * 0x18);
        if (param_1 + 1 != plVar3) {
          func_0x00010a14ddc8(param_1 + 1,*plVar3,plVar3[1],plVar3[1] - *plVar3 >> 2);
        }
        FUN_10ad39818(param_1 + 4);
        lVar2 = 0;
        *param_1 = 0;
        lVar4 = param_1[1];
        lVar5 = param_1[2] - lVar4 >> 2;
      }
      uVar1 = lVar5 - lVar2;
      if (param_3 - uVar6 <= (ulong)(lVar5 - lVar2)) {
        uVar1 = param_3 - uVar6;
      }
      _memcpy(param_2 + uVar6 * 4,lVar4 + lVar2 * 4,uVar1 << 2);
      uVar6 = uVar1 + uVar6;
      lVar2 = *param_1 + uVar1;
      *param_1 = lVar2;
    } while (uVar6 < param_3);
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 10);
  return uVar6;
}



/* Entry: 10ad39818; end: 10ad39893;  */

bool FUN_10ad39818(long param_1)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad39894);
    (*pcVar1)();
  }
  uVar5 = *(ulong *)(param_1 + 0x20);
  plVar6 = (long *)(*(long *)(*(long *)(param_1 + 8) + (uVar5 / 0xaa) * 8) + (uVar5 % 0xaa) * 0x18);
  lVar3 = *plVar6;
  if (lVar3 != 0) {
    plVar6[1] = lVar3;
    __ZdlPv();
    uVar5 = *(ulong *)(param_1 + 0x20);
    lVar4 = *(long *)(param_1 + 0x28);
  }
  *(ulong *)(param_1 + 0x20) = uVar5 + 1;
  *(long *)(param_1 + 0x28) = lVar4 + -1;
  bVar2 = 0x153 < *(ulong *)(param_1 + 0x20);
  if (bVar2) {
    __ZdlPv(**(undefined8 **)(param_1 + 8));
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0xaa;
  }
  return bVar2;
}



/* Entry: 10ad39894; end: 10ad39ba3;  */

void FUN_10ad39894(ulong *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  
  if (0xa9 < param_1[4]) {
    param_1[4] = param_1[4] - 0xaa;
    puVar10 = (undefined8 *)param_1[1] + 1;
    uVar3 = *(undefined8 *)param_1[1];
LAB_10ad398cc:
    param_1[1] = (ulong)puVar10;
    puVar10 = (undefined8 *)param_1[2];
    if (puVar10 == (undefined8 *)param_1[3]) {
      uVar15 = *param_1;
      uVar5 = param_1[1];
      if (uVar5 < uVar15 || uVar5 - uVar15 == 0) {
        uVar8 = (long)((long)puVar10 - uVar15) >> 2;
        if ((long)puVar10 - uVar15 == 0) {
          uVar8 = 1;
        }
        uVar15 = uVar8;
        FUN_10ad39ca0();
        puVar11 = (undefined8 *)(uVar15 + (uVar8 >> 2) * 8);
        lVar12 = param_1[2] - (long)param_1[1];
        puVar10 = puVar11;
        if (lVar12 != 0) {
          puVar10 = (undefined8 *)((long)puVar11 + lVar12);
          puVar7 = (undefined8 *)param_1[1];
          puVar9 = puVar11;
          do {
            *puVar9 = *puVar7;
            lVar12 = lVar12 + -8;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          } while (lVar12 != 0);
        }
        uVar8 = *param_1;
        *param_1 = uVar15;
        param_1[1] = (ulong)puVar11;
        param_1[2] = (ulong)puVar10;
        param_1[3] = uVar15 + uVar5 * 8;
        if (uVar8 != 0) {
          __ZdlPv(uVar8);
          puVar10 = (undefined8 *)param_1[2];
        }
      }
      else {
        lVar12 = (((long)(uVar5 - uVar15) >> 3) + 1) / 2;
        lVar13 = uVar5 + lVar12 * -8;
        lVar1 = (long)puVar10 - uVar5;
        if (lVar1 != 0) {
          _memmove(lVar13,uVar5,lVar1);
          uVar5 = param_1[1];
        }
        puVar10 = (undefined8 *)(lVar13 + lVar1);
        param_1[1] = uVar5 + lVar12 * -8;
        param_1[2] = (ulong)puVar10;
      }
    }
    *puVar10 = uVar3;
    param_1[2] = param_1[2] + 8;
    return;
  }
  puVar11 = (undefined8 *)param_1[2];
  puVar9 = (undefined8 *)param_1[3];
  puVar7 = (undefined8 *)*param_1;
  puVar10 = (undefined8 *)param_1[1];
  uVar15 = (long)puVar11 - (long)puVar10;
  if (uVar15 < (ulong)((long)puVar9 - (long)puVar7)) {
    uVar3 = 0xff0;
    __Znwm();
    if (puVar9 == puVar11) {
      if (puVar10 == puVar7) {
        uVar15 = (long)puVar9 - (long)puVar10 >> 2;
        if (puVar11 == puVar10) {
          uVar15 = 1;
        }
        lVar12 = uVar15 * 2;
        FUN_10ad39ca0();
        puVar10 = (undefined8 *)(uVar15 + (lVar12 + 6U & 0xfffffffffffffff8));
        lVar12 = param_1[2] - (long)param_1[1];
        puVar11 = puVar10;
        if (lVar12 != 0) {
          puVar11 = (undefined8 *)((long)puVar10 + lVar12);
          puVar7 = (undefined8 *)param_1[1];
          puVar9 = puVar10;
          do {
            *puVar9 = *puVar7;
            lVar12 = lVar12 + -8;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          } while (lVar12 != 0);
        }
        uVar5 = *param_1;
        *param_1 = uVar15;
        param_1[1] = (ulong)puVar10;
        param_1[2] = (ulong)puVar11;
        param_1[3] = uVar15 + (long)param_2 * 8;
        if (uVar5 != 0) {
          __ZdlPv(uVar5);
          puVar10 = (undefined8 *)param_1[1];
        }
      }
      puVar10[-1] = uVar3;
      puVar10 = (undefined8 *)param_1[1];
      param_1[1] = (ulong)(puVar10 + -1);
      uVar3 = puVar10[-1];
      goto LAB_10ad398cc;
    }
    *puVar11 = uVar3;
    param_1[2] = param_1[2] + 8;
  }
  else {
    puVar6 = (undefined8 *)((long)puVar9 - (long)puVar7 >> 2);
    if (puVar9 == puVar7) {
      puVar6 = (undefined8 *)0x1;
    }
    FUN_10ad39ca0();
    uVar3 = 0xff0;
    puVar4 = param_2;
    __Znwm();
    puVar7 = (undefined8 *)((long)puVar6 + uVar15);
    puVar9 = puVar6 + (long)param_2;
    puVar2 = puVar6;
    if (uVar15 == (long)param_2 * 8) {
      if ((long)uVar15 < 1) {
        puVar7 = (undefined8 *)((long)puVar7 - (long)puVar6 >> 2);
        if (puVar11 == puVar10) {
          puVar7 = (undefined8 *)0x1;
        }
        puVar2 = puVar7;
        FUN_10ad39ca0();
        puVar7 = puVar2 + ((ulong)puVar7 >> 2);
        puVar9 = puVar2 + (long)puVar4;
        if (puVar6 != (undefined8 *)0x0) {
          __ZdlPv(puVar6);
        }
      }
      else {
        lVar12 = ((long)puVar7 - (long)puVar6 >> 3) + 1;
        puVar7 = puVar7 + -((ulong)(lVar12 - (lVar12 >> 0x3f)) >> 1);
      }
    }
    puVar10 = puVar7 + 1;
    *puVar7 = uVar3;
    puVar11 = (undefined8 *)param_1[2];
    puVar6 = puVar2;
    if (puVar11 != (undefined8 *)param_1[1]) {
      do {
        puVar2 = puVar6;
        puVar14 = puVar7;
        if (puVar7 == puVar6) {
          if (puVar10 < puVar9) {
            lVar12 = ((long)puVar9 - (long)puVar10 >> 3) + 1;
            lVar1 = (long)puVar10 - (long)puVar6;
            lVar13 = (long)puVar10 - (long)puVar6;
            puVar10 = puVar10 + ((ulong)(lVar12 - (lVar12 >> 0x3f)) >> 1);
            puVar14 = (undefined8 *)((long)puVar10 - lVar1);
            if (lVar13 != 0) {
              _memmove(puVar14,puVar7,lVar13);
              puVar4 = puVar7;
            }
          }
          else {
            puVar14 = (undefined8 *)((long)puVar9 - (long)puVar6 >> 2);
            if ((long)puVar9 - (long)puVar6 == 0) {
              puVar14 = (undefined8 *)0x1;
            }
            puVar2 = puVar14;
            FUN_10ad39ca0();
            puVar14 = (undefined8 *)((long)puVar2 + ((long)puVar14 * 2 + 6U & 0xfffffffffffffff8));
            lVar12 = (long)puVar10 - (long)puVar6;
            puVar10 = puVar14;
            if (lVar12 != 0) {
              puVar10 = (undefined8 *)((long)puVar14 + lVar12);
              puVar9 = puVar14;
              do {
                *puVar9 = *puVar7;
                lVar12 = lVar12 + -8;
                puVar9 = puVar9 + 1;
                puVar7 = puVar7 + 1;
              } while (lVar12 != 0);
            }
            puVar9 = puVar2 + (long)puVar4;
            if (puVar6 != (undefined8 *)0x0) {
              __ZdlPv(puVar6);
            }
          }
        }
        puVar11 = puVar11 + -1;
        puVar7 = puVar14 + -1;
        *puVar7 = *puVar11;
        puVar6 = puVar2;
      } while (puVar11 != (undefined8 *)param_1[1]);
    }
    uVar15 = *param_1;
    *param_1 = (ulong)puVar2;
    param_1[1] = (ulong)puVar7;
    param_1[2] = (ulong)puVar10;
    param_1[3] = (ulong)puVar9;
    if (uVar15 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 10ad39ba4; end: 10ad39c9f;  */

void FUN_10ad39ba4(ulong *param_1,undefined8 param_2)

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
    uVar3 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar5 = (long)((long)puVar7 - uVar3) >> 2;
      if ((long)puVar7 - uVar3 == 0) {
        uVar5 = 1;
      }
      uVar3 = uVar5;
      FUN_10ad39ca0();
      puVar1 = (undefined8 *)(uVar3 + (uVar5 >> 2) * 8);
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
      uVar5 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar3 + uVar4 * 8;
      if (uVar5 != 0) {
        __ZdlPv(uVar5);
        puVar7 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar3) >> 3) + 1) / 2;
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
  *puVar7 = param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 10ad39ca0; end: 10ad39d2f;  */

undefined1  [16] FUN_10ad39ca0(ulong param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (param_1 >> 0x3d == 0) {
    lVar2 = param_1 << 3;
    __Znwm(lVar2);
    auVar4._8_8_ = param_1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  uVar3 = (uint)param_2;
  if (*(ulong *)(param_1 + 0x20) < 0xaa) {
    uVar3 = 1;
  }
  uVar1 = 0;
  if (*(ulong *)(param_1 + 0x20) < 0x154) {
    uVar1 = uVar3;
  }
  if ((uVar1 & 1) == 0) {
    __ZdlPv(**(undefined8 **)(param_1 + 8));
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0xaa;
  }
  auVar5._4_4_ = 0;
  auVar5._0_4_ = uVar1 ^ 1;
  auVar5._8_8_ = param_2;
  return auVar5;
}



/* Entry: 10ad39d30; end: 10ad39efb;  */

void FUN_10ad39d30(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined1 auStack_150 [56];
  undefined8 uStack_118;
  char cStack_101;
  undefined **appuStack_f0 [19];
  undefined1 uStack_51;
  
  FUN_109fed7e0(&ppuStack_160);
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  FUN_10a002568(&ppuStack_160,puVar2,uVar1);
  FUN_10a002568();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEb();
  FUN_10a002568();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  uVar1 = *(ulong *)(param_5 + 8);
  if (-1 < (char)*(byte *)(param_5 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_5 + 0x17);
  }
  if (uVar1 != 0) {
    FUN_10a002568(&ppuStack_160,&UNK_10f6a6964,10);
    FUN_10a002568();
  }
  uVar1 = *(ulong *)(param_6 + 8);
  if (-1 < (char)*(byte *)(param_6 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_6 + 0x17);
  }
  if (uVar1 != 0) {
    FUN_10a002568(&ppuStack_160,&UNK_10f6a696f,0x10);
    FUN_10a002568();
  }
  func_0x00010a002480(param_1,&ppuStack_158,&uStack_51);
  appuStack_f0[0] = &PTR_DAT_11088d708;
  ppuStack_160 = &PTR_DAT_11088d6e0;
  ppuStack_158 = &PTR_DAT_11088d7b0;
  if (cStack_101 < '\0') {
    __ZdlPv(uStack_118);
  }
  ppuStack_158 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_150);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_160,&PTR_PTR_11088d720);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_f0);
  return;
}



/* Entry: 10ad39efc; end: 10ad3a7d3;  */

/* WARNING: Possible PIC construction at 0x00010ad3a17c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ad3a07c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ad3a080) */

void FUN_10ad39efc(long param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5,
                  undefined8 param_6,undefined8 param_7,long *param_8)

{
  undefined1 *puVar1;
  long *plVar2;
  char cVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  long *plVar26;
  long lVar27;
  ulong uVar28;
  ulong uVar29;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  byte bVar30;
  float fVar31;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long lStack_78;
  long lStack_70;
  undefined7 uStack_68;
  char cStack_61;
  
  puVar1 = &stack0xfffffffffffffff0;
  bVar30 = *(byte *)((long)param_3 + 0x17);
  uVar28 = param_3[1];
  if (-1 < (char)bVar30) {
    uVar28 = (ulong)bVar30;
  }
  if (uVar28 == 0) {
    if ((bRam000000011330a9e8 >> 2 & 1) == 0) {
      return;
    }
    puVar14 = &UNK_10f6a6a4a;
    uVar9 = 1;
    uVar12 = 4;
    uVar13 = 0x3e;
SUB_10ae06f08:
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(BADSPACEBASE **)((long)register0x00000008 + -0x18) = register0x00000008;
    FUN_10ae06f30(uVar9,uVar12,&UNK_10f6a6980,&UNK_10f6a69b0,uVar13,puVar14,register0x00000008);
    return;
  }
  iVar11 = (int)param_2;
  unaff_x29 = puVar1;
  if (*(int *)(param_1 + (long)iVar11 * 4 + 0x1e0) != 2) {
    if ((bRam000000011330a9e8 >> 2 & 1) == 0) {
      return;
    }
    lStack_e0 = *param_3;
    if (-1 < (char)bVar30) {
      lStack_e0 = (long)param_3;
    }
    lStack_d8 = *param_4;
    if (-1 < *(char *)((long)param_4 + 0x17)) {
      lStack_d8 = (long)param_4;
    }
    lStack_d0 = *param_5;
    if (-1 < *(char *)((long)param_5 + 0x17)) {
      lStack_d0 = (long)param_5;
    }
    puVar14 = &UNK_10f6a6a69;
    uVar9 = 1;
    uVar12 = 4;
    uVar13 = 0x47;
    unaff_x30 = 0x10ad3a080;
    register0x00000008 = (BADSPACEBASE *)&lStack_e0;
    goto SUB_10ae06f08;
  }
  uStack_a0 = (undefined4)param_6;
  uStack_9c = (undefined4)param_7;
  uStack_a8 = param_2;
  plStack_98 = param_4;
  plStack_90 = param_5;
  FUN_10ad39d30(&lStack_78,param_3,param_7,param_6,param_4,param_5);
  lVar27 = param_1 + (long)iVar11 * 0x28;
  uVar28 = lVar27 + 0x118;
  func_0x000107c2b05c(uVar28,&lStack_78);
  uVar24 = *(ulong *)(lVar27 + 0x120);
  if (uVar24 != 0) {
    uVar29 = uVar24 - 1;
    if ((uVar24 & uVar29) == 0) {
      uVar25 = uVar29 & uVar28;
    }
    else {
      uVar25 = uVar28;
      if (uVar24 <= uVar28) {
        uVar25 = 0;
        if (uVar24 != 0) {
          uVar25 = uVar28 / uVar24;
        }
        uVar25 = uVar28 - uVar25 * uVar24;
      }
    }
    plVar15 = *(long **)(*(long *)(lVar27 + 0x118) + uVar25 * 8);
    if (plVar15 != (long *)0x0) {
      for (plVar15 = (long *)*plVar15; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
        uVar16 = plVar15[1];
        if (uVar16 == uVar28) {
          uVar16 = lVar27 + 0x118;
          func_0x000107c2b068(uVar16,plVar15 + 2,&lStack_78);
          if ((uVar16 & 1) != 0) {
            (*(code *)*param_8)(plVar15 + 5,param_8);
            goto LAB_10ad3a1b4;
          }
        }
        else {
          if ((uVar24 & uVar29) == 0) {
            uVar16 = uVar16 & uVar29;
          }
          else if (uVar24 <= uVar16) {
            uVar4 = 0;
            if (uVar24 != 0) {
              uVar4 = uVar16 / uVar24;
            }
            uVar16 = uVar16 - uVar4 * uVar24;
          }
          if (uVar16 != uVar25) break;
        }
      }
    }
  }
  plStack_88 = (long *)0x0;
  plStack_80 = (long *)0x0;
  plVar15 = *(long **)(param_1 + 0x20);
  if (((plVar15 == (long *)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_80 = plVar15, plVar15 == (long *)0x0)) ||
     (plStack_b0 = *(long **)(param_1 + 0x18), plStack_88 = plStack_b0, plStack_b0 == (long *)0x0))
  {
    if ((bRam000000011330a9e8 & 1) != 0) {
      puVar14 = &UNK_10f6a6abd;
      uVar9 = 0;
      uVar12 = 1;
      uVar13 = 0x5b;
      unaff_x30 = 0x10ad3a180;
      register0x00000008 = (BADSPACEBASE *)&lStack_e0;
      goto SUB_10ae06f08;
    }
    plVar15 = plStack_80;
    if (plStack_80 == (long *)0x0) goto LAB_10ad3a1b4;
  }
  else {
    plVar8 = (long *)0x68;
    __Znwm();
    *plVar8 = 0;
    plVar8[1] = 0;
    if (cStack_61 < '\0') {
      func_0x000107c3192c(plVar8 + 2,lStack_78,lStack_70);
    }
    else {
      plVar8[3] = lStack_70;
      plVar8[2] = lStack_78;
      plVar8[4] = CONCAT17(cStack_61,uStack_68);
    }
    plVar8[5] = *param_8;
    (**(code **)(param_8[1] + 0x18))(plVar8 + 6,param_8 + 1);
    param_1 = param_1 + (long)iVar11 * 0x28;
    plVar2 = (long *)(param_1 + 0x78);
    plVar18 = plVar2;
    func_0x000107c2b05c(plVar2,plVar8 + 2);
    plVar8[1] = (long)plVar18;
    plVar18 = plVar2;
    func_0x000107c2b05c(plVar2,plVar8 + 2);
    plVar8[1] = (long)plVar18;
    plVar26 = *(long **)(param_1 + 0x80);
    fVar31 = (float)(*(long *)(param_1 + 0x90) + 1);
    if ((plVar26 == (long *)0x0) || (*(float *)(param_1 + 0x98) * (float)plVar26 < fVar31)) {
      uVar28 = 1;
      if ((long *)0x2 < plVar26) {
        uVar28 = (ulong)(((ulong)plVar26 & (long)plVar26 - 1U) != 0);
      }
      plVar17 = (long *)(uVar28 | (long)plVar26 << 1);
      plVar21 = (long *)(long)(fVar31 / *(float *)(param_1 + 0x98));
      if (plVar17 <= plVar21) {
        plVar17 = plVar21;
      }
      if ((long)plVar17 - 1U == 0) {
        plVar17 = (long *)0x2;
      }
      else if (((ulong)plVar17 & (long)plVar17 - 1U) != 0) {
        __ZNSt3__112__next_primeEm();
        plVar26 = *(long **)(param_1 + 0x80);
      }
      plStack_b8 = plVar18;
      if (plVar26 < plVar17) {
LAB_10ad3a2dc:
        if ((ulong)plVar17 >> 0x3d != 0) {
          func_0x000109ffded8();
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10ad3a754);
          (*pcVar5)();
        }
        lVar27 = (long)plVar17 << 3;
        __Znwm();
        lVar10 = *plVar2;
        *plVar2 = lVar27;
        if (lVar10 != 0) {
          __ZdlPv();
        }
        plVar18 = (long *)0x0;
        *(long **)(param_1 + 0x80) = plVar17;
        do {
          *(undefined8 *)(*plVar2 + (long)plVar18 * 8) = 0;
          plVar18 = (long *)((long)plVar18 + 1);
        } while (plVar17 != plVar18);
        plVar26 = *(long **)(param_1 + 0x88);
        plVar18 = plStack_c0;
        if (plVar26 != (long *)0x0) {
          plVar21 = (long *)plVar26[1];
          uVar28 = (long)plVar17 - 1;
          if (((ulong)plVar17 & uVar28) == 0) {
            plVar21 = (long *)((ulong)plVar21 & uVar28);
          }
          else if (plVar17 <= plVar21) {
            uVar24 = 0;
            if (plVar17 != (long *)0x0) {
              uVar24 = (ulong)plVar21 / (ulong)plVar17;
            }
            plVar21 = (long *)((long)plVar21 - uVar24 * (long)plVar17);
          }
          *(undefined8 **)(*plVar2 + (long)plVar21 * 8) = (undefined8 *)(param_1 + 0x88);
          plStack_c0 = plVar15;
          for (plVar20 = (long *)*plVar26; plVar20 != (long *)0x0; plVar20 = (long *)*plVar20) {
            plVar18 = (long *)plVar20[1];
            if (((ulong)plVar17 & uVar28) == 0) {
              plVar18 = (long *)((ulong)plVar18 & uVar28);
            }
            else if (plVar17 <= plVar18) {
              uVar24 = 0;
              if (plVar17 != (long *)0x0) {
                uVar24 = (ulong)plVar18 / (ulong)plVar17;
              }
              plVar18 = (long *)((long)plVar18 - uVar24 * (long)plVar17);
            }
            if (plVar18 != plVar21) {
              lVar27 = *plVar2;
              if (*(long *)(lVar27 + (long)plVar18 * 8) == 0) {
                *(long **)(lVar27 + (long)plVar18 * 8) = plVar26;
                plVar21 = plVar18;
              }
              else {
                lVar10 = *plVar20;
                plVar22 = plVar20;
                if (lVar10 == 0) {
                  plVar19 = (long *)0x0;
                }
                else {
                  do {
                    plVar15 = plVar2;
                    func_0x000107c2b068(plVar2,plVar20 + 2,lVar10 + 0x10);
                    plVar19 = (long *)*plVar22;
                    if ((int)plVar15 == 0) goto LAB_10ad3a448;
                    lVar10 = *plVar19;
                    plVar22 = plVar19;
                  } while (lVar10 != 0);
                  plVar19 = (long *)0x0;
LAB_10ad3a448:
                  lVar27 = *plVar2;
                  plVar15 = plStack_c0;
                }
                *plVar26 = (long)plVar19;
                *plVar22 = **(long **)(lVar27 + (long)plVar18 * 8);
                **(undefined8 **)(lVar27 + (long)plVar18 * 8) = plVar20;
                plVar20 = plVar26;
              }
            }
            plVar26 = plVar20;
            plVar18 = plStack_c0;
          }
        }
      }
      else {
        plVar18 = plStack_c0;
        if (plVar17 < plVar26) {
          plVar18 = (long *)(long)((float)*(ulong *)(param_1 + 0x90) / *(float *)(param_1 + 0x98));
          if ((plVar26 < (long *)0x3) || (((ulong)plVar26 & (long)plVar26 - 1U) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if ((long *)0x1 < plVar18) {
            plVar18 = (long *)(1L << (-LZCOUNT((long)plVar18 + -1) & 0x3fU));
          }
          if (plVar17 <= plVar18) {
            plVar17 = plVar18;
          }
          plVar18 = plStack_c0;
          if (plVar17 < plVar26) {
            if (plVar17 != (long *)0x0) goto LAB_10ad3a2dc;
            lVar27 = *plVar2;
            *plVar2 = 0;
            if (lVar27 != 0) {
              __ZdlPv();
            }
            *(undefined8 *)(param_1 + 0x80) = 0;
            plVar18 = plStack_c0;
          }
        }
      }
      plStack_c0 = plVar18;
      plVar26 = *(long **)(param_1 + 0x80);
      plVar18 = plStack_b8;
    }
    bVar30 = POPCOUNT((char)plVar26) + POPCOUNT((char)((ulong)plVar26 >> 8)) +
             POPCOUNT((char)((ulong)plVar26 >> 0x10)) + POPCOUNT((char)((ulong)plVar26 >> 0x18)) +
             POPCOUNT((char)((ulong)plVar26 >> 0x20)) + POPCOUNT((char)((ulong)plVar26 >> 0x28)) +
             POPCOUNT((char)((ulong)plVar26 >> 0x30)) + POPCOUNT((char)((ulong)plVar26 >> 0x38));
    uVar28 = (long)plVar26 - 1;
    if (((ulong)plVar26 & uVar28) == 0) {
      plVar17 = (long *)(uVar28 & (ulong)plVar18);
    }
    else {
      plVar17 = plVar18;
      if (plVar26 <= plVar18) {
        uVar24 = 0;
        if (plVar26 != (long *)0x0) {
          uVar24 = (ulong)plVar18 / (ulong)plVar26;
        }
        plVar17 = (long *)((long)plVar18 - uVar24 * (long)plVar26);
      }
    }
    plVar21 = *(long **)(*plVar2 + (long)plVar17 * 8);
    if ((plVar21 != (long *)0x0) && (lVar27 = *plVar21, lVar27 != 0)) {
      uVar23 = 0;
      bVar30 = 0;
      do {
        plVar20 = *(long **)(lVar27 + 8);
        if (((ulong)plVar26 & uVar28) == 0) {
          plVar22 = (long *)((ulong)plVar20 & uVar28);
        }
        else {
          plVar22 = plVar20;
          if (plVar26 <= plVar20) {
            uVar24 = 0;
            if (plVar26 != (long *)0x0) {
              uVar24 = (ulong)plVar20 / (ulong)plVar26;
            }
            plVar22 = (long *)((long)plVar20 - uVar24 * (long)plVar26);
          }
        }
        if (plVar22 != plVar17) break;
        if (plVar20 == plVar18) {
          plVar20 = plVar2;
          func_0x000107c2b068(plVar2,lVar27 + 0x10,plVar8 + 2);
          uVar7 = (uint)plVar20;
        }
        else {
          uVar7 = 0;
        }
        bVar6 = uVar7 != uVar23;
        if ((bool)(bVar30 & bVar6)) break;
        uVar23 = uVar23 | bVar6;
        bVar30 = bVar30 | bVar6;
        plVar21 = (long *)*plVar21;
        lVar27 = *plVar21;
      } while (lVar27 != 0);
      plVar26 = *(long **)(param_1 + 0x80);
      bVar30 = POPCOUNT((char)plVar26) + POPCOUNT((char)((ulong)plVar26 >> 8)) +
               POPCOUNT((char)((ulong)plVar26 >> 0x10)) + POPCOUNT((char)((ulong)plVar26 >> 0x18)) +
               POPCOUNT((char)((ulong)plVar26 >> 0x20)) + POPCOUNT((char)((ulong)plVar26 >> 0x28)) +
               POPCOUNT((char)((ulong)plVar26 >> 0x30)) + POPCOUNT((char)((ulong)plVar26 >> 0x38));
    }
    plVar18 = (long *)plVar8[1];
    if (bVar30 < 2) {
      plVar18 = (long *)((ulong)plVar18 & (long)plVar26 - 1U);
    }
    else if (plVar26 <= plVar18) {
      uVar28 = 0;
      if (plVar26 != (long *)0x0) {
        uVar28 = (ulong)plVar18 / (ulong)plVar26;
      }
      plVar18 = (long *)((long)plVar18 - uVar28 * (long)plVar26);
    }
    if (plVar21 == (long *)0x0) {
      plVar17 = (long *)(param_1 + 0x88);
      *plVar8 = *plVar17;
      *plVar17 = (long)plVar8;
      *(long **)(*plVar2 + (long)plVar18 * 8) = plVar17;
      if (*plVar8 != 0) {
        plVar17 = *(long **)(*plVar8 + 8);
        if (bVar30 < 2) {
          plVar17 = (long *)((ulong)plVar17 & (long)plVar26 - 1U);
        }
        else if (plVar26 <= plVar17) {
          uVar28 = 0;
          if (plVar26 != (long *)0x0) {
            uVar28 = (ulong)plVar17 / (ulong)plVar26;
          }
          plVar17 = (long *)((long)plVar17 - uVar28 * (long)plVar26);
        }
LAB_10ad3a640:
        *(long **)(*plVar2 + (long)plVar17 * 8) = plVar8;
      }
    }
    else {
      *plVar8 = *plVar21;
      *plVar21 = (long)plVar8;
      if (*plVar8 != 0) {
        plVar17 = *(long **)(*plVar8 + 8);
        if (bVar30 < 2) {
          plVar17 = (long *)((ulong)plVar17 & (long)plVar26 - 1U);
        }
        else if (plVar26 <= plVar17) {
          uVar28 = 0;
          if (plVar26 != (long *)0x0) {
            uVar28 = (ulong)plVar17 / (ulong)plVar26;
          }
          plVar17 = (long *)((long)plVar17 - uVar28 * (long)plVar26);
        }
        if (plVar17 != plVar18) goto LAB_10ad3a640;
      }
    }
    *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + 1;
    plVar8 = plVar2;
    func_0x000107c2b05c(plVar2,&lStack_78);
    plVar18 = *(long **)(param_1 + 0x80);
    if (plVar18 != (long *)0x0) {
      uVar28 = (long)plVar18 - 1;
      if (((ulong)plVar18 & uVar28) == 0) {
        plVar26 = (long *)(uVar28 & (ulong)plVar8);
      }
      else {
        plVar26 = plVar8;
        if (plVar18 <= plVar8) {
          uVar24 = 0;
          if (plVar18 != (long *)0x0) {
            uVar24 = (ulong)plVar8 / (ulong)plVar18;
          }
          plVar26 = (long *)((long)plVar8 - uVar24 * (long)plVar18);
        }
      }
      plVar17 = *(long **)(*plVar2 + (long)plVar26 * 8);
      if (plVar17 != (long *)0x0) {
        for (plVar17 = (long *)*plVar17; plVar17 != (long *)0x0; plVar17 = (long *)*plVar17) {
          plVar21 = (long *)plVar17[1];
          if (plVar8 == plVar21) {
            plVar21 = plVar2;
            func_0x000107c2b068(plVar2,plVar17 + 2,&lStack_78);
            if ((int)plVar21 != 0) {
              lVar27 = 0;
              goto LAB_10ad3a704;
            }
          }
          else {
            if (((ulong)plVar18 & uVar28) == 0) {
              plVar21 = (long *)((ulong)plVar21 & uVar28);
            }
            else if (plVar18 <= plVar21) {
              uVar24 = 0;
              if (plVar18 != (long *)0x0) {
                uVar24 = (ulong)plVar21 / (ulong)plVar18;
              }
              plVar21 = (long *)((long)plVar21 - uVar24 * (long)plVar18);
            }
            if (plVar21 != plVar26) break;
          }
        }
      }
    }
  }
  goto LAB_10ad3a184;
  while( true ) {
    plVar8 = plVar2;
    func_0x000107c2b068(plVar2,plVar17 + 2,&lStack_78);
    lVar27 = lVar10 + -1;
    if (((ulong)plVar8 & 1) == 0) break;
LAB_10ad3a704:
    lVar10 = lVar27;
    plVar17 = (long *)*plVar17;
    if (plVar17 == (long *)0x0) break;
  }
  if (lVar10 == 0) {
    (**(code **)(*plStack_b0 + 0x10))
              (plStack_b0,uStack_a8,param_3,plStack_98,plStack_90,uStack_a0,uStack_9c);
  }
LAB_10ad3a184:
  plVar8 = plVar15 + 1;
  do {
    lVar27 = *plVar8;
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar6) {
      *plVar8 = lVar27 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar27 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
  }
LAB_10ad3a1b4:
  if (cStack_61 < '\0') {
    __ZdlPv(lStack_78);
  }
  return;
}



/* Entry: 10ad3a7d4; end: 10ad3b06b;  */

void FUN_10ad3a7d4(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,int param_5,
                  undefined1 param_6,undefined8 param_7,undefined8 param_8,long *param_9)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  long *plVar23;
  ulong uVar24;
  long *plVar25;
  long *unaff_x25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  float fVar28;
  long *plStack_c8;
  long *plStack_c0;
  long lStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long lStack_98;
  long lStack_90;
  undefined7 uStack_88;
  char cStack_81;
  undefined1 uStack_79;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  if (*(int *)(param_1 + (long)param_5 * 4 + 0x1e0) != 2) {
    return;
  }
  FUN_10ad39d30(&lStack_98,param_2,param_7,param_8,param_3,param_4);
  lVar22 = param_1 + (long)param_5 * 0x28;
  plVar1 = (long *)(lVar22 + 0x78);
  plVar12 = plVar1;
  func_0x000107c2b05c(plVar1,&lStack_98);
  plVar23 = *(long **)(lVar22 + 0x80);
  if (plVar23 == (long *)0x0) {
    puVar8 = (undefined8 *)0x0;
    puVar27 = (undefined8 *)0x0;
  }
  else {
    uVar24 = (long)plVar23 - 1;
    if (((ulong)plVar23 & uVar24) == 0) {
      unaff_x25 = (long *)(uVar24 & (ulong)plVar12);
    }
    else {
      unaff_x25 = plVar12;
      if (plVar23 <= plVar12) {
        uVar13 = 0;
        if (plVar23 != (long *)0x0) {
          uVar13 = (ulong)plVar12 / (ulong)plVar23;
        }
        unaff_x25 = (long *)((long)plVar12 - uVar13 * (long)plVar23);
      }
    }
    puVar8 = *(undefined8 **)(*plVar1 + (long)unaff_x25 * 8);
    if (puVar8 == (undefined8 *)0x0) {
LAB_10ad3a8fc:
      puVar8 = (undefined8 *)0x0;
    }
    else {
      for (puVar8 = (undefined8 *)*puVar8; puVar8 != (undefined8 *)0x0;
          puVar8 = (undefined8 *)*puVar8) {
        plVar9 = (long *)puVar8[1];
        if (plVar9 == plVar12) {
          plVar9 = plVar1;
          func_0x000107c2b068(plVar1,puVar8 + 2,&lStack_98);
          puVar27 = puVar8;
          if (((ulong)plVar9 & 1) != 0) goto LAB_10ad3abfc;
        }
        else {
          if (((ulong)plVar23 & uVar24) == 0) {
            plVar9 = (long *)((ulong)plVar9 & uVar24);
          }
          else if (plVar23 <= plVar9) {
            uVar13 = 0;
            if (plVar23 != (long *)0x0) {
              uVar13 = (ulong)plVar9 / (ulong)plVar23;
            }
            plVar9 = (long *)((long)plVar9 - uVar13 * (long)plVar23);
          }
          if (plVar9 != unaff_x25) goto LAB_10ad3a8fc;
        }
      }
    }
    puVar27 = (undefined8 *)0x0;
  }
  goto LAB_10ad3a908;
  while (plVar12 = plVar1, func_0x000107c2b068(plVar1,puVar27 + 2,&lStack_98),
        ((ulong)plVar12 & 1) != 0) {
LAB_10ad3abfc:
    puVar27 = (undefined8 *)*puVar27;
    if (puVar27 == (undefined8 *)0x0) break;
  }
LAB_10ad3a908:
  if ((long *)*param_9 == (long *)0x0) goto LAB_10ad3ae0c;
  plStack_78 = (long *)*param_9;
  FUN_10ad3b06c(&plStack_c8,&uStack_79,&plStack_78);
  (**(code **)(*plStack_c8 + 0x48))();
  FUN_10ad4b6d4();
  plVar12 = plStack_c0;
  plStack_a8 = plStack_c8;
  plStack_a0 = plStack_c0;
  if (plStack_c0 != (long *)0x0) {
    plVar23 = plStack_c0 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar3) {
        *plVar23 = *plVar23 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar6 = *param_9;
  plVar23 = (long *)param_9[1];
  if (plVar23 != (long *)0x0) {
    plVar9 = plVar23 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar20 = param_1 + (long)param_5 * 0x28;
  plVar9 = (long *)(lVar20 + 0x118);
  plVar5 = plVar9;
  lStack_b8 = lVar6;
  plStack_b0 = plVar23;
  func_0x000107c2b05c(plVar9,&lStack_98);
  plVar21 = *(long **)(lVar20 + 0x120);
  if (plVar21 != (long *)0x0) {
    uVar24 = (long)plVar21 - 1;
    if (((ulong)plVar21 & uVar24) == 0) {
      unaff_x25 = (long *)(uVar24 & (ulong)plVar5);
    }
    else {
      unaff_x25 = plVar5;
      if (plVar21 <= plVar5) {
        uVar13 = 0;
        if (plVar21 != (long *)0x0) {
          uVar13 = (ulong)plVar5 / (ulong)plVar21;
        }
        unaff_x25 = (long *)((long)plVar5 - uVar13 * (long)plVar21);
      }
    }
    puVar10 = *(undefined8 **)(*plVar9 + (long)unaff_x25 * 8);
    if (puVar10 != (undefined8 *)0x0) {
      for (plVar25 = (long *)*puVar10; plVar25 != (long *)0x0; plVar25 = (long *)*plVar25) {
        plVar11 = (long *)plVar25[1];
        if (plVar11 == plVar5) {
          plVar11 = plVar9;
          func_0x000107c2b068(plVar9,plVar25 + 2,&lStack_98);
          if (((ulong)plVar11 & 1) != 0) {
            if (plVar23 != (long *)0x0) {
              plVar12 = plVar23 + 1;
              do {
                lVar6 = *plVar12;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                if (bVar3) {
                  *plVar12 = lVar6 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar6 == 0) {
                (**(code **)(*plVar23 + 0x10))(plVar23);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
              }
            }
            goto LAB_10ad3ad50;
          }
        }
        else {
          if (((ulong)plVar21 & uVar24) == 0) {
            plVar11 = (long *)((ulong)plVar11 & uVar24);
          }
          else if (plVar21 <= plVar11) {
            uVar13 = 0;
            if (plVar21 != (long *)0x0) {
              uVar13 = (ulong)plVar11 / (ulong)plVar21;
            }
            plVar11 = (long *)((long)plVar11 - uVar13 * (long)plVar21);
          }
          if (plVar11 != unaff_x25) break;
        }
      }
    }
  }
  plVar25 = (long *)0x48;
  __Znwm();
  uStack_68 = 0;
  *plVar25 = 0;
  plVar25[1] = (long)plVar5;
  plStack_78 = plVar25;
  plStack_70 = plVar9;
  if (cStack_81 < '\0') {
    func_0x000107c3192c(plVar25 + 2,lStack_98,lStack_90);
  }
  else {
    plVar25[3] = lStack_90;
    plVar25[2] = lStack_98;
    plVar25[4] = CONCAT17(cStack_81,uStack_88);
  }
  plVar25[5] = (long)plStack_c8;
  plVar25[6] = (long)plVar12;
  plStack_c8 = (long *)0x0;
  plStack_c0 = (long *)0x0;
  plVar25[7] = lVar6;
  plVar25[8] = (long)plVar23;
  lStack_b8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_68 = CONCAT71(uStack_68._1_7_,1);
  fVar28 = (float)(*(long *)(lVar20 + 0x130) + 1);
  if ((plVar21 == (long *)0x0) || (*(float *)(lVar20 + 0x138) * (float)plVar21 < fVar28)) {
    uVar24 = 1;
    if ((long *)0x2 < plVar21) {
      uVar24 = (ulong)(((ulong)plVar21 & (long)plVar21 - 1U) != 0);
    }
    plVar12 = (long *)(uVar24 | (long)plVar21 << 1);
    plVar23 = (long *)(long)(fVar28 / *(float *)(lVar20 + 0x138));
    if (plVar12 <= plVar23) {
      plVar12 = plVar23;
    }
    if ((long)plVar12 - 1U == 0) {
      plVar12 = (long *)0x2;
    }
    else if (((ulong)plVar12 & (long)plVar12 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    plVar21 = *(long **)(lVar20 + 0x120);
    if (plVar21 < plVar12) {
LAB_10ad3ab3c:
      plVar21 = plVar12;
      if ((ulong)plVar21 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10ad3affc);
        (*pcVar4)();
      }
      lVar6 = (long)plVar21 << 3;
      __Znwm();
      lVar7 = *plVar9;
      *plVar9 = lVar6;
      if (lVar7 != 0) {
        __ZdlPv();
      }
      plVar12 = (long *)0x0;
      *(long **)(lVar20 + 0x120) = plVar21;
      do {
        *(undefined8 *)(*plVar9 + (long)plVar12 * 8) = 0;
        plVar12 = (long *)((long)plVar12 + 1);
      } while (plVar21 != plVar12);
      plVar12 = *(long **)(lVar20 + 0x128);
      if (plVar12 != (long *)0x0) {
        plVar23 = (long *)plVar12[1];
        uVar24 = (long)plVar21 - 1;
        if (((ulong)plVar21 & uVar24) == 0) {
          plVar23 = (long *)((ulong)plVar23 & uVar24);
        }
        else if (plVar21 <= plVar23) {
          uVar13 = 0;
          if (plVar21 != (long *)0x0) {
            uVar13 = (ulong)plVar23 / (ulong)plVar21;
          }
          plVar23 = (long *)((long)plVar23 - uVar13 * (long)plVar21);
        }
        *(undefined8 **)(*plVar9 + (long)plVar23 * 8) = (undefined8 *)(lVar20 + 0x128);
        plVar11 = (long *)*plVar12;
        while (plVar11 != (long *)0x0) {
          plVar16 = (long *)plVar11[1];
          if (((ulong)plVar21 & uVar24) == 0) {
            plVar16 = (long *)((ulong)plVar16 & uVar24);
          }
          else if (plVar21 <= plVar16) {
            uVar13 = 0;
            if (plVar21 != (long *)0x0) {
              uVar13 = (ulong)plVar16 / (ulong)plVar21;
            }
            plVar16 = (long *)((long)plVar16 - uVar13 * (long)plVar21);
          }
          plVar14 = plVar11;
          if (plVar16 != plVar23) {
            lVar6 = *plVar9;
            if (*(long *)(lVar6 + (long)plVar16 * 8) == 0) {
              *(long **)(lVar6 + (long)plVar16 * 8) = plVar12;
              plVar23 = plVar16;
            }
            else {
              *plVar12 = *plVar11;
              *plVar11 = **(undefined8 **)(lVar6 + (long)plVar16 * 8);
              **(long **)(lVar6 + (long)plVar16 * 8) = (long)plVar11;
              plVar14 = plVar12;
            }
          }
          plVar12 = plVar14;
          plVar11 = (long *)*plVar14;
        }
      }
    }
    else if (plVar12 < plVar21) {
      plVar23 = (long *)(long)((float)*(ulong *)(lVar20 + 0x130) / *(float *)(lVar20 + 0x138));
      if ((plVar21 < (long *)0x3) || (((ulong)plVar21 & (long)plVar21 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar23) {
        plVar23 = (long *)(1L << (-LZCOUNT((long)plVar23 + -1) & 0x3fU));
      }
      if (plVar12 <= plVar23) {
        plVar12 = plVar23;
      }
      if (plVar12 < plVar21) {
        if (plVar12 != (long *)0x0) goto LAB_10ad3ab3c;
        lVar6 = *plVar9;
        *plVar9 = 0;
        if (lVar6 != 0) {
          __ZdlPv();
        }
        plVar21 = (long *)0x0;
        *(undefined8 *)(lVar20 + 0x120) = 0;
      }
      else {
        plVar21 = *(long **)(lVar20 + 0x120);
      }
    }
    if (((ulong)plVar21 & (long)plVar21 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar21 - 1U & (ulong)plVar5);
    }
    else {
      unaff_x25 = plVar5;
      if (plVar21 <= plVar5) {
        uVar24 = 0;
        if (plVar21 != (long *)0x0) {
          uVar24 = (ulong)plVar5 / (ulong)plVar21;
        }
        unaff_x25 = (long *)((long)plVar5 - uVar24 * (long)plVar21);
      }
    }
  }
  lVar6 = *plVar9;
  plVar12 = *(long **)(lVar6 + (long)unaff_x25 * 8);
  if (plVar12 == (long *)0x0) {
    plVar12 = (long *)(lVar20 + 0x128);
    *plVar25 = *plVar12;
    *plVar12 = (long)plVar25;
    *(long **)(lVar6 + (long)unaff_x25 * 8) = plVar12;
    if (*plVar25 != 0) {
      plVar12 = *(long **)(*plVar25 + 8);
      if (((ulong)plVar21 & (long)plVar21 - 1U) == 0) {
        plVar12 = (long *)((ulong)plVar12 & (long)plVar21 - 1U);
      }
      else if (plVar21 <= plVar12) {
        uVar24 = 0;
        if (plVar21 != (long *)0x0) {
          uVar24 = (ulong)plVar12 / (ulong)plVar21;
        }
        plVar12 = (long *)((long)plVar12 - uVar24 * (long)plVar21);
      }
      *(long **)(*plVar9 + (long)plVar12 * 8) = plVar25;
    }
  }
  else {
    *plVar25 = *plVar12;
    *plVar12 = (long)plVar25;
  }
  *(long *)(lVar20 + 0x130) = *(long *)(lVar20 + 0x130) + 1;
LAB_10ad3ad50:
  plVar12 = plStack_c0;
  if (plStack_c0 != (long *)0x0) {
    plVar23 = plStack_c0 + 1;
    do {
      lVar6 = *plVar23;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar3) {
        *plVar23 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  param_1 = param_1 + 0x1b8;
  plStack_c8 = param_2;
  FUN_10a80e76c(param_1,param_2,&UNK_10dd5b8f9,&plStack_c8,&plStack_78);
  *(undefined1 *)(param_1 + 0x28) = param_6;
  plVar12 = plStack_a0;
  for (puVar10 = puVar8; plStack_a0 = plVar12, puVar10 != puVar27; puVar10 = (undefined8 *)*puVar10)
  {
    (*(code *)puVar10[5])(plVar25 + 5);
    plVar12 = plStack_a0;
  }
  if (plVar12 != (long *)0x0) {
    plVar23 = plVar12 + 1;
    do {
      lVar6 = *plVar23;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar3) {
        *plVar23 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
LAB_10ad3ae0c:
  if (puVar8 != puVar27) {
    do {
      uVar13 = *(ulong *)(lVar22 + 0x80);
      uVar24 = puVar8[1];
      uVar15 = uVar13 - 1;
      if ((uVar13 & uVar15) == 0) {
        uVar24 = uVar15 & uVar24;
      }
      else if (uVar13 <= uVar24) {
        uVar18 = 0;
        if (uVar13 != 0) {
          uVar18 = uVar24 / uVar13;
        }
        uVar24 = uVar24 - uVar18 * uVar13;
      }
      puVar26 = (undefined8 *)*puVar8;
      puVar10 = *(undefined8 **)(*plVar1 + uVar24 * 8);
      do {
        puVar17 = puVar10;
        puVar10 = (undefined8 *)*puVar17;
      } while ((undefined8 *)*puVar17 != puVar8);
      puVar10 = puVar26;
      if (puVar17 == (undefined8 *)(lVar22 + 0x88)) {
LAB_10ad3ae9c:
        if (puVar26 == (undefined8 *)0x0) {
LAB_10ad3aed4:
          *(undefined8 *)(*plVar1 + uVar24 * 8) = 0;
          puVar10 = (undefined8 *)*puVar8;
          goto LAB_10ad3aedc;
        }
        uVar18 = puVar26[1];
        if ((uVar13 & uVar15) == 0) {
          uVar19 = uVar18 & uVar15;
        }
        else {
          uVar19 = uVar18;
          if (uVar13 <= uVar18) {
            uVar19 = 0;
            if (uVar13 != 0) {
              uVar19 = uVar18 / uVar13;
            }
            uVar19 = uVar18 - uVar19 * uVar13;
          }
        }
        if (uVar19 != uVar24) goto LAB_10ad3aed4;
LAB_10ad3aee4:
        if ((uVar13 & uVar15) == 0) {
          uVar18 = uVar18 & uVar15;
        }
        else if (uVar13 <= uVar18) {
          uVar15 = 0;
          if (uVar13 != 0) {
            uVar15 = uVar18 / uVar13;
          }
          uVar18 = uVar18 - uVar15 * uVar13;
        }
        if (uVar18 != uVar24) {
          *(undefined8 **)(*plVar1 + uVar18 * 8) = puVar17;
          puVar10 = (undefined8 *)*puVar8;
        }
      }
      else {
        uVar18 = puVar17[1];
        if ((uVar13 & uVar15) == 0) {
          uVar18 = uVar18 & uVar15;
        }
        else if (uVar13 <= uVar18) {
          uVar19 = 0;
          if (uVar13 != 0) {
            uVar19 = uVar18 / uVar13;
          }
          uVar18 = uVar18 - uVar19 * uVar13;
        }
        if (uVar18 != uVar24) goto LAB_10ad3ae9c;
LAB_10ad3aedc:
        if (puVar10 != (undefined8 *)0x0) {
          uVar18 = puVar10[1];
          goto LAB_10ad3aee4;
        }
      }
      *puVar17 = puVar10;
      *puVar8 = 0;
      *(long *)(lVar22 + 0x90) = *(long *)(lVar22 + 0x90) + -1;
      func_0x00010ad3b1c0(1);
      puVar8 = puVar26;
    } while (puVar26 != puVar27);
  }
  if (cStack_81 < '\0') {
    __ZdlPv(lStack_98);
  }
  return;
}



/* Entry: 10ad3b06c; end: 10ad3b0c3;  */

void FUN_10ad3b06c(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x78;
  __Znwm();
  FUN_10ad3b0c4();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10ad3b0c4; end: 10ad3b10f;  */

undefined8 * FUN_10ad3b0c4(undefined8 *param_1,undefined8 *param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110ba0f28;
  FUN_10a316470(param_1 + 3,*param_2);
  return param_1;
}



/* Entry: 10ad3b110; end: 10ad3b24f;  */

long FUN_10ad3b110(long param_1)

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



/* Entry: 10ad3b250; end: 10ad3b33f;  */

void FUN_10ad3b250(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  for (plVar1 = *(long **)(param_1 + 0x10); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    (**(code **)(*(long *)plVar1[2] + 0x10))((long *)plVar1[2],param_2,param_3);
  }
  return;
}



/* Entry: 10ad3b340; end: 10ad3b747;  */

undefined1  [16] FUN_10ad3b340(long *param_1,ulong *param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  ulong unaff_x24;
  undefined1 auVar17 [16];
  
  uVar6 = *param_2;
  uVar9 = ((ulong)(uint)((int)uVar6 << 3) + 8 ^ uVar6 >> 0x20) * -0x622015f714c7d297;
  uVar9 = (uVar6 >> 0x20 ^ uVar9 >> 0x2f ^ uVar9) * -0x622015f714c7d297;
  uVar16 = (uVar9 ^ uVar9 >> 0x2f) * -0x622015f714c7d297;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar7 = uVar9 - 1;
    if ((uVar9 & uVar7) == 0) {
      unaff_x24 = uVar16 & uVar7;
    }
    else {
      unaff_x24 = uVar16;
      if (uVar9 <= uVar16) {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = uVar16 / uVar9;
        }
        unaff_x24 = uVar16 - uVar11 * uVar9;
      }
    }
    puVar10 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar10 != (undefined8 *)0x0) {
      for (plVar15 = (long *)*puVar10; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
        uVar11 = plVar15[1];
        if (uVar11 == uVar16) {
          if (plVar15[2] == uVar6) {
            uVar5 = 0;
            goto LAB_10ad3b6cc;
          }
        }
        else {
          if ((uVar9 & uVar7) == 0) {
            uVar11 = uVar11 & uVar7;
          }
          else if (uVar9 <= uVar11) {
            uVar14 = 0;
            if (uVar9 != 0) {
              uVar14 = uVar11 / uVar9;
            }
            uVar11 = uVar11 - uVar14 * uVar9;
          }
          if (uVar11 != unaff_x24) break;
        }
      }
    }
  }
  plVar15 = (long *)0x20;
  __Znwm();
  *plVar15 = 0;
  plVar15[1] = uVar16;
  lVar3 = *param_3;
  plVar15[3] = param_3[1];
  plVar15[2] = lVar3;
  *param_3 = 0;
  param_3[1] = 0;
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar6 = 1;
    if (2 < uVar9) {
      uVar6 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar6 = uVar6 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar9) {
      uVar6 = uVar9;
    }
    if (uVar6 - 1 == 0) {
      uVar6 = 2;
    }
    else if ((uVar6 & uVar6 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    uVar9 = param_1[1];
    if (uVar9 < uVar6) {
LAB_10ad3b4dc:
      if (uVar6 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10ad3b734);
        (*pcVar2)();
      }
      lVar3 = uVar6 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar9 = 0;
      param_1[1] = uVar6;
      do {
        *(undefined8 *)(*param_1 + uVar9 * 8) = 0;
        uVar9 = uVar9 + 1;
      } while (uVar6 != uVar9);
      plVar8 = (long *)param_1[2];
      uVar9 = uVar6;
      if (plVar8 != (long *)0x0) {
        uVar7 = plVar8[1];
        uVar11 = uVar6 - 1;
        if ((uVar6 & uVar11) == 0) {
          uVar7 = uVar7 & uVar11;
        }
        else if (uVar6 <= uVar7) {
          uVar14 = 0;
          if (uVar6 != 0) {
            uVar14 = uVar7 / uVar6;
          }
          uVar7 = uVar7 - uVar14 * uVar6;
        }
        *(long **)(*param_1 + uVar7 * 8) = param_1 + 2;
        plVar12 = (long *)*plVar8;
        while (plVar12 != (long *)0x0) {
          uVar14 = plVar12[1];
          if ((uVar6 & uVar11) == 0) {
            uVar14 = uVar14 & uVar11;
          }
          else if (uVar6 <= uVar14) {
            uVar1 = 0;
            if (uVar6 != 0) {
              uVar1 = uVar14 / uVar6;
            }
            uVar14 = uVar14 - uVar1 * uVar6;
          }
          plVar13 = plVar12;
          if (uVar14 != uVar7) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + uVar14 * 8) == 0) {
              *(long **)(lVar3 + uVar14 * 8) = plVar8;
              uVar7 = uVar14;
            }
            else {
              *plVar8 = *plVar12;
              *plVar12 = **(undefined8 **)(lVar3 + uVar14 * 8);
              **(long **)(lVar3 + uVar14 * 8) = (long)plVar12;
              plVar13 = plVar8;
            }
          }
          plVar8 = plVar13;
          plVar12 = (long *)*plVar13;
        }
      }
    }
    else if (uVar6 < uVar9) {
      uVar7 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar9 < 3) || ((uVar9 & uVar9 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar7) {
        uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
      }
      if (uVar6 <= uVar7) {
        uVar6 = uVar7;
      }
      if (uVar6 < uVar9) {
        if (uVar6 != 0) goto LAB_10ad3b4dc;
        lVar3 = *param_1;
        *param_1 = 0;
        if (lVar3 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar9 = 0;
      }
      else {
        uVar9 = param_1[1];
      }
    }
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = uVar9 - 1 & uVar16;
    }
    else {
      unaff_x24 = uVar16;
      if (uVar9 <= uVar16) {
        uVar6 = 0;
        if (uVar9 != 0) {
          uVar6 = uVar16 / uVar9;
        }
        unaff_x24 = uVar16 - uVar6 * uVar9;
      }
    }
  }
  lVar3 = *param_1;
  plVar8 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar15 = *plVar8;
    *plVar8 = (long)plVar15;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar8;
    if (*plVar15 == 0) goto LAB_10ad3b6bc;
    uVar6 = *(ulong *)(*plVar15 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar6 = uVar6 & uVar9 - 1;
    }
    else if (uVar9 <= uVar6) {
      uVar16 = 0;
      if (uVar9 != 0) {
        uVar16 = uVar6 / uVar9;
      }
      uVar6 = uVar6 - uVar16 * uVar9;
    }
    plVar8 = (long *)(*param_1 + uVar6 * 8);
  }
  else {
    *plVar15 = *plVar8;
  }
  *plVar8 = (long)plVar15;
LAB_10ad3b6bc:
  param_1[3] = param_1[3] + 1;
  uVar5 = 1;
LAB_10ad3b6cc:
  auVar17._8_8_ = uVar5;
  auVar17._0_8_ = plVar15;
  return auVar17;
}



/* Entry: 10ad3b748; end: 10ad3b7c3;  */

void FUN_10ad3b748(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10a3f5c1c(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10ad3b7c4; end: 10ad3b89b;  */

long * FUN_10ad3b7c4(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = *param_2;
    uVar4 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
    uVar4 = (uVar3 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    uVar5 = uVar2 - 1;
    if ((uVar2 & uVar5) == 0) {
      uVar6 = uVar4 & uVar5;
    }
    else {
      uVar6 = uVar4;
      if (uVar2 <= uVar4) {
        uVar6 = 0;
        if (uVar2 != 0) {
          uVar6 = uVar4 / uVar2;
        }
        uVar6 = uVar4 - uVar6 * uVar2;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)*plVar7;
      do {
        if (plVar7 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar8 = plVar7[1];
        if (uVar8 == uVar4) {
          if (plVar7[2] == uVar3) {
            return plVar7;
          }
        }
        else {
          if ((uVar2 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar2 <= uVar8) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar8 / uVar2;
            }
            uVar8 = uVar8 - uVar1 * uVar2;
          }
          if (uVar8 != uVar6) {
            return (long *)0x0;
          }
        }
        plVar7 = (long *)*plVar7;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10ad3b89c; end: 10ad3b8fb;  */

undefined8 FUN_10ad3b89c(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long alStack_38 [2];
  char cStack_28;
  
  if (param_2 != (undefined8 *)0x0) {
    uVar3 = *param_2;
    FUN_10ad3b8fc(alStack_38);
    lVar1 = alStack_38[0];
    alStack_38[0] = 0;
    if (lVar1 != 0) {
      if (cStack_28 == '\x01') {
        FUN_10a3f5c1c(lVar1 + 0x10);
      }
      __ZdlPv(lVar1);
    }
    return uVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10ad3b8fc);
  (*pcVar2)();
}



/* Entry: 10ad3b8fc; end: 10ad3ba8f;  */

void FUN_10ad3b8fc(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar5 = uVar4 - 1;
  if ((uVar4 & uVar5) == 0) {
    uVar3 = uVar5 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar7 = plVar2;
    plVar2 = (long *)*plVar7;
  } while ((long *)*plVar7 != param_3);
  if (plVar7 != param_2 + 2) {
    uVar8 = plVar7[1];
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10ad3b9b0;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10ad3b9b0;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_10ad3b9b0:
  lVar6 = *param_3;
  if (lVar6 != 0) {
    uVar8 = *(ulong *)(lVar6 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar5 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(*param_2 + uVar8 * 8) = plVar7;
      lVar6 = *param_3;
    }
  }
  *plVar7 = lVar6;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 10ad3ba90; end: 10ad3bdc3;  */

void FUN_10ad3ba90(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  if (*(char *)(param_1 + 0x68) == '\x01') {
    if (*(char *)(param_1 + 0x5f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x48));
    }
    *(undefined1 *)(param_1 + 0x68) = 0;
  }
  puVar8 = *(undefined8 **)(param_2 + 0xe8);
  if (puVar8 != (undefined8 *)0x0) {
    uVar13 = puVar8[1];
    uVar5 = *puVar8;
    uVar15 = puVar8[3];
    uVar14 = puVar8[2];
    uVar17 = puVar8[5];
    uVar16 = puVar8[4];
    uVar18 = puVar8[6];
    *(undefined8 *)(param_1 + 0x40) = puVar8[7];
    *(undefined8 *)(param_1 + 0x38) = uVar18;
    *(undefined8 *)(param_1 + 0x30) = uVar17;
    *(undefined8 *)(param_1 + 0x28) = uVar16;
    *(undefined8 *)(param_1 + 0x20) = uVar15;
    *(undefined8 *)(param_1 + 0x18) = uVar14;
    *(undefined8 *)(param_1 + 0x10) = uVar13;
    *(undefined8 *)(param_1 + 8) = uVar5;
    if (*(char *)((long)puVar8 + 0x57) < '\0') {
      func_0x000107c3192c(param_1 + 0x48,puVar8[8],puVar8[9]);
    }
    else {
      uVar13 = puVar8[9];
      uVar5 = puVar8[8];
      *(undefined8 *)(param_1 + 0x58) = puVar8[10];
      *(undefined8 *)(param_1 + 0x50) = uVar13;
      *(undefined8 *)(param_1 + 0x48) = uVar5;
    }
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(puVar8 + 0xb);
    *(undefined1 *)(param_1 + 0x68) = 1;
  }
  uVar13 = *(undefined8 *)(param_2 + 0xf8);
  uVar5 = *(undefined8 *)(param_2 + 0xf0);
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x100);
  *(undefined8 *)(param_1 + 0x78) = uVar13;
  *(undefined8 *)(param_1 + 0x70) = uVar5;
  puVar8 = *(undefined8 **)(param_2 + 0x150);
  if (puVar8 != (undefined8 *)0x0) {
    puVar11 = (undefined8 *)(param_1 + 0x88);
    if (*(char *)(param_1 + 0xc0) == '\x01') {
      puVar1 = puVar11;
      puVar3 = puVar8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
      *(undefined8 *)(param_1 + 0xa0) = puVar8[3];
      if (puVar11 != puVar8) {
        plVar9 = (long *)(param_1 + 0xa8);
        puVar11 = (undefined8 *)*plVar9;
        lVar2 = puVar8[4];
        lVar10 = puVar8[5];
        uVar6 = lVar10 - lVar2;
        lVar4 = *(long *)(param_1 + 0xb8);
        if ((ulong)(lVar4 - (long)puVar11) < uVar6) {
          uVar12 = ((long)uVar6 >> 4) * -0x3333333333333333;
          if (puVar11 != (undefined8 *)0x0) {
            puVar8 = *(undefined8 **)(param_1 + 0xb0);
            puVar1 = puVar11;
            if (puVar8 != puVar11) {
              do {
                puVar8 = puVar8 + -10;
                FUN_10a502948(puVar8);
              } while (puVar8 != puVar11);
              puVar1 = (undefined8 *)*plVar9;
            }
            *(undefined8 **)(param_1 + 0xb0) = puVar11;
            __ZdlPv();
            lVar4 = 0;
            *plVar9 = 0;
            *(undefined8 *)(param_1 + 0xb0) = 0;
            *(undefined8 *)(param_1 + 0xb8) = 0;
          }
          if (0x333333333333333 < uVar12) {
            FUN_10a503adc();
            *(undefined8 **)(param_1 + 0xb0) = puVar11;
            __Unwind_Resume(puVar1);
            FUN_10a0378a8(puVar3 + 0x4f,puVar1 + 0x1d);
            *(undefined1 *)((long)puVar3 + 0x271) = 1;
            return;
          }
          uVar7 = (lVar4 >> 4) * -0x6666666666666666;
          if (uVar7 < uVar12 || uVar7 + ((long)uVar6 >> 4) * 0x3333333333333333 == 0) {
            uVar7 = uVar12;
          }
          if (0x199999999999998 < (ulong)((lVar4 >> 4) * -0x3333333333333333)) {
            uVar7 = 0x333333333333333;
          }
          FUN_10a503a94(plVar9,uVar7);
          FUN_10a503b34(plVar9,lVar2,lVar10,*(undefined8 *)(param_1 + 0xb0));
        }
        else {
          uVar12 = *(long *)(param_1 + 0xb0) - (long)puVar11;
          if (uVar6 <= uVar12) {
            FUN_10ad3c1a0(lVar2,lVar10,puVar11);
            lVar10 = *(long *)(param_1 + 0xb0);
            while (lVar10 != lVar2) {
              lVar10 = lVar10 + -0x50;
              FUN_10a502948(lVar10);
            }
            *(long *)(param_1 + 0xb0) = lVar2;
            goto LAB_10ad3bd18;
          }
          FUN_10ad3c1a0(lVar2,lVar2 + uVar12,puVar11);
          FUN_10a503b34(plVar9,lVar2 + uVar12,lVar10,*(undefined8 *)(param_1 + 0xb0));
        }
        *(long **)(param_1 + 0xb0) = plVar9;
      }
    }
    else {
      if (*(char *)((long)puVar8 + 0x17) < '\0') {
        func_0x000107c3192c(puVar11,*puVar8,puVar8[1]);
      }
      else {
        uVar13 = puVar8[1];
        uVar5 = *puVar8;
        *(undefined8 *)(param_1 + 0x98) = puVar8[2];
        *(undefined8 *)(param_1 + 0x90) = uVar13;
        *puVar11 = uVar5;
      }
      uVar5 = puVar8[3];
      *(undefined8 *)(param_1 + 0xa8) = 0;
      *(undefined8 *)(param_1 + 0xa0) = uVar5;
      *(undefined8 *)(param_1 + 0xb0) = 0;
      *(undefined8 *)(param_1 + 0xb8) = 0;
      FUN_10a503a10();
      *(undefined1 *)(param_1 + 0xc0) = 1;
    }
  }
LAB_10ad3bd18:
  puVar8 = *(undefined8 **)(param_2 + 0x158);
  if (puVar8 != (undefined8 *)0x0) {
    if (*(char *)(param_1 + 0xe0) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
                (param_1 + 200);
      return;
    }
    if (*(char *)((long)puVar8 + 0x17) < '\0') {
      func_0x000107c3192c(param_1 + 200,*puVar8,puVar8[1]);
    }
    else {
      uVar13 = puVar8[1];
      uVar5 = *puVar8;
      *(undefined8 *)(param_1 + 0xd8) = puVar8[2];
      *(undefined8 *)(param_1 + 0xd0) = uVar13;
      *(undefined8 *)(param_1 + 200) = uVar5;
    }
    *(undefined1 *)(param_1 + 0xe0) = 1;
  }
  return;
}



/* Entry: 10ad3bdc4; end: 10ad3be4f;  */

void FUN_10ad3bdc4(long param_1,long param_2)

{
  FUN_10a0378a8(param_2 + 0x278,param_1 + 0xe8);
  *(undefined1 *)(param_2 + 0x271) = 1;
  return;
}



/* Entry: 10ad3be50; end: 10ad3bf33;  */

double FUN_10ad3be50(double param_1,double param_2,long param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if (*(char *)(param_3 + 0x68) == '\x01') {
    dVar3 = *(double *)(param_3 + 8) * 0.017453292519943295;
    dVar2 = *(double *)(param_3 + 0x10) * 0.017453292519943295;
  }
  else {
    dVar3 = 3.88348649310052e-310;
    dVar2 = dVar3;
  }
  param_1 = param_1 * 0.017453292519943295;
  dVar1 = (param_1 - dVar3) * 0.5;
  _sin(dVar1);
  _cos(param_1);
  _cos(dVar3);
  dVar2 = (param_2 * 0.017453292519943295 - dVar2) * 0.5;
  _sin(dVar2);
  dVar3 = dVar1 * dVar1 + dVar2 * dVar2 * param_1 * dVar3;
  dVar2 = SQRT(dVar3);
  _atan2(dVar2,SQRT(1.0 - dVar3));
  return ABS((dVar2 + dVar2) * 3959.0);
}



/* Entry: 10ad3bf34; end: 10ad3c03f;  */

double FUN_10ad3bf34(double param_1,double param_2,long param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  if (*(char *)(param_3 + 0x68) == '\x01') {
    dVar3 = *(double *)(param_3 + 8) * 0.017453292519943295;
    dVar4 = *(double *)(param_3 + 0x10) * 0.017453292519943295;
  }
  else {
    dVar3 = 3.88348649310052e-310;
    dVar4 = dVar3;
  }
  if (*(char *)(param_3 + 0x80) == '\x01') {
    dVar5 = *(double *)(param_3 + 0x78);
  }
  else {
    dVar5 = 2.2250738585072014e-308;
  }
  param_1 = param_1 * 0.017453292519943295;
  param_2 = param_2 * 0.017453292519943295;
  dVar4 = param_2 - dVar4;
  ___sincos_stret(param_1);
  dVar1 = param_2;
  ___sincos_stret();
  dVar4 = param_2 * dVar4;
  dVar2 = dVar1;
  ___sincos_stret(dVar3);
  _atan2(dVar4,-(dVar3 * param_2) * dVar1 + param_1 * dVar2);
  dVar4 = dVar4 * 57.29577951308232;
  dVar3 = dVar4 + 360.0;
  if (0.0 <= dVar4) {
    dVar3 = dVar4;
  }
  dVar4 = (dVar3 - dVar5) + 360.0;
  _fmod(dVar4);
  return -dVar4;
}



/* Entry: 10ad3c040; end: 10ad3c19f;  */

undefined8 * FUN_10ad3c040(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_68;
  undefined1 auStack_5a [50];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = 0;
  _time();
  puVar2 = &uStack_68;
  uStack_68 = uVar1;
  _localtime(puVar2);
  _strftime(auStack_5a,0x32,&UNK_10f6a6c16,puVar2);
  func_0x000107c2b054(param_1,auStack_5a);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  *param_1 = &PTR_LAB_110c6fd48;
  if ((*(char *)(param_1 + 0x1c) == '\x01') && (*(char *)((long)param_1 + 0xdf) < '\0')) {
    __ZdlPv(param_1[0x19]);
  }
  func_0x00010a51fdd4(param_1 + 0x11);
  if ((*(char *)(param_1 + 0xd) == '\x01') && (*(char *)((long)param_1 + 0x5f) < '\0')) {
    __ZdlPv(param_1[9]);
  }
  return param_1;
}



/* Entry: 10ad3c1a0; end: 10ad3c223;  */

undefined8 * FUN_10ad3c1a0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 10) {
    *param_3 = *param_1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_3 + 1,param_1 + 1);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_3 + 4,param_1 + 4);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_3 + 7,param_1 + 7);
    param_3 = param_3 + 10;
  }
  return param_3;
}



/* Entry: 10ad3c224; end: 10ad3c2b3;  */

undefined8 * FUN_10ad3c224(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar3 = (undefined8 *)*param_1;
  FUN_10ad3c2b4(puVar3,puVar3 + 0xc,4,0,param_2);
  lVar5 = *param_1;
  if ((undefined8 *)(lVar5 + 0x60) != puVar3) {
    uVar4 = *puVar3;
    uVar1 = param_2[1];
    puVar2 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar2 = param_2;
    }
    FUN_10a003d5c(uVar4,puVar3[1],puVar2,uVar1);
    if ((char)uVar4 < '\x01') {
      return puVar3;
    }
    lVar5 = *param_1;
  }
  return (undefined8 *)(lVar5 + 0x60);
}



/* Entry: 10ad3c2b4; end: 10ad3c36f;  */

undefined1  [16]
FUN_10ad3c2b4(long param_1,undefined8 *param_2,ulong param_3,ulong param_4,undefined8 *param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  
  if (param_3 != 0) {
    puVar4 = param_2;
    while( true ) {
      while( true ) {
        param_2 = (undefined8 *)(param_1 + param_4 * 0x18);
        uVar3 = *param_2;
        uVar1 = param_5[1];
        puVar2 = (undefined8 *)*param_5;
        if (-1 < (char)*(byte *)((long)param_5 + 0x17)) {
          uVar1 = (ulong)*(byte *)((long)param_5 + 0x17);
          puVar2 = param_5;
        }
        FUN_10a003d5c(uVar3,param_2[1],puVar2,uVar1);
        if (((uint)uVar3 >> 7 & 1) != 0) break;
        if (param_3 >> 1 <= param_4) goto LAB_10ad3c34c;
        param_4 = param_4 << 1 | 1;
        puVar4 = param_2;
      }
      param_2 = puVar4;
      if (param_3 - 1 >> 1 <= param_4) break;
      param_4 = param_4 * 2 + 2;
    }
  }
LAB_10ad3c34c:
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_2;
  return auVar5;
}



/* Entry: 10ad3c370; end: 10ad3c39b;  */

/* WARNING: Removing unreachable block (ram,0x00010a4f5cbc) */

void FUN_10ad3c370(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 unaff_x23;
  
  lVar7 = *(long *)(param_2 + 0x118);
  plVar4 = (long *)(param_1 + 8);
  if (lVar7 == 0 || plVar4 == (long *)(lVar7 + 0x10)) {
    return;
  }
  lVar9 = *(long *)(lVar7 + 0x10);
  lVar2 = *(long *)(lVar7 + 0x18);
  uVar5 = lVar2 - lVar9 >> 5;
  lVar7 = *plVar4;
  if ((ulong)(*(long *)(param_1 + 0x18) - lVar7 >> 5) < uVar5) {
    plVar3 = plVar4;
    FUN_10a4f5cf8();
    if (uVar5 >> 0x3b != 0) {
      FUN_10a4f5ea8();
      *(undefined8 *)(param_1 + 0x10) = unaff_x23;
      __Unwind_Resume();
      *(long *)(param_1 + 0x10) = lVar7;
      __Unwind_Resume();
      if (*plVar3 != 0) {
        FUN_10a4dc440();
        __ZdlPv(*plVar3);
        *plVar3 = 0;
        plVar3[1] = 0;
        plVar3[2] = 0;
      }
      return;
    }
    uVar6 = *(long *)(param_1 + 0x18) - *plVar4;
    uVar8 = (long)uVar6 >> 4;
    if (uVar8 <= uVar5) {
      uVar8 = uVar5;
    }
    if (0x7fffffffffffffdf < uVar6) {
      uVar8 = 0x7ffffffffffffff;
    }
    func_0x00010a4f5d30(plVar4,uVar8);
    FUN_10a4f5d68(plVar4,lVar9,lVar2,*(undefined8 *)(param_1 + 0x10));
  }
  else {
    lVar10 = *(long *)(param_1 + 0x10);
    if (uVar5 <= (ulong)(lVar10 - lVar7 >> 5)) {
      if (lVar9 != lVar2) {
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar7,lVar9);
          *(undefined4 *)(lVar7 + 0x18) = *(undefined4 *)(lVar9 + 0x18);
          lVar9 = lVar9 + 0x20;
          lVar7 = lVar7 + 0x20;
        } while (lVar9 != lVar2);
        lVar10 = *(long *)(param_1 + 0x10);
      }
      for (; lVar10 != lVar7; lVar10 = lVar10 + -0x20) {
      }
      *(long *)(param_1 + 0x10) = lVar7;
      return;
    }
    lVar1 = lVar9 + (lVar10 - lVar7);
    if (lVar10 != lVar7) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar7,lVar9);
        *(undefined4 *)(lVar7 + 0x18) = *(undefined4 *)(lVar9 + 0x18);
        lVar9 = lVar9 + 0x20;
        lVar7 = lVar7 + 0x20;
      } while (lVar9 != lVar1);
      lVar10 = *(long *)(param_1 + 0x10);
    }
    FUN_10a4f5d68(plVar4,lVar1,lVar2,lVar10);
  }
  *(long **)(param_1 + 0x10) = plVar4;
  return;
}



/* Entry: 10ad3c39c; end: 10ad3c3e7;  */

void FUN_10ad3c39c(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_2 + 0x268) & 1) != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_2 + 0x240,param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x3e);
    *(undefined8 *)(param_2 + 600) = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_2 + 0x25e) = uVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad3c3e8);
  (*pcVar1)();
}



/* Entry: 10ad3c3e8; end: 10ad3c413;  */

void FUN_10ad3c3e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
            (param_1 + 0x20);
  return;
}



/* Entry: 10ad3c414; end: 10ad3c547;  */

void FUN_10ad3c414(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined1 **ppuVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 *puStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined4 uStack_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar6 = *(undefined8 **)(param_2 + 8);
  puVar2 = *(undefined8 **)(param_2 + 0x10);
  if (puVar6 != puVar2) {
    do {
      if (*(char *)((long)puVar6 + 0x17) < '\0') {
        func_0x000107c3192c(&puStack_60,*puVar6,puVar6[1]);
      }
      else {
        uStack_58 = puVar6[1];
        puStack_60 = (undefined1 *)*puVar6;
        uStack_50 = puVar6[2];
      }
      uStack_48 = *(undefined4 *)(puVar6 + 3);
      uVar1 = uStack_58;
      ppuVar4 = (undefined1 **)puStack_60;
      if (-1 < (long)uStack_50) {
        uVar1 = uStack_50 >> 0x38;
        ppuVar4 = &puStack_60;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,ppuVar4,uVar1);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,&DAT_10f68e8ee,1);
      if ((long)uStack_50 < 0) {
        __ZdlPv(puStack_60);
      }
      puVar6 = puVar6 + 4;
    } while (puVar6 != puVar2);
    cVar3 = *(char *)((long)param_1 + 0x17);
    if ((long)cVar3 < 0) {
      if (param_1[1] == 0) {
        return;
      }
      lVar5 = param_1[1] + -1;
      param_1[1] = lVar5;
      param_1 = (undefined8 *)*param_1;
    }
    else {
      if (cVar3 == '\0') {
        return;
      }
      lVar5 = (long)cVar3 + -1;
      *(char *)((long)param_1 + 0x17) = (char)lVar5;
    }
    *(undefined1 *)((long)param_1 + lVar5) = 0;
  }
  return;
}



/* Entry: 10ad3c548; end: 10ad3c5db;  */

undefined8 FUN_10ad3c548(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  byte bVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar7 = *(undefined8 **)(param_1 + 8);
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  if (puVar7 != puVar3) {
    uVar5 = param_2[1];
    puVar1 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar5 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar1 = param_2;
    }
    do {
      bVar4 = *(byte *)((long)puVar7 + 0x17);
      uVar2 = puVar7[1];
      if (-1 < (char)bVar4) {
        uVar2 = (ulong)bVar4;
      }
      if (uVar2 == uVar5) {
        puVar6 = (undefined8 *)*puVar7;
        if (-1 < (char)bVar4) {
          puVar6 = puVar7;
        }
        _memcmp(puVar6,puVar1,uVar5);
        if ((int)puVar6 == 0) {
          return 1;
        }
      }
      puVar7 = puVar7 + 4;
    } while (puVar7 != puVar3);
  }
  return 0;
}



/* Entry: 10ad3c5dc; end: 10ad3c67b;  */

undefined4 FUN_10ad3c5dc(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  byte bVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar7 = *(undefined8 **)(param_1 + 8);
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  if (puVar7 != puVar3) {
    uVar5 = param_2[1];
    puVar1 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar5 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar1 = param_2;
    }
    do {
      bVar4 = *(byte *)((long)puVar7 + 0x17);
      uVar2 = puVar7[1];
      if (-1 < (char)bVar4) {
        uVar2 = (ulong)bVar4;
      }
      if (uVar2 == uVar5) {
        puVar6 = (undefined8 *)*puVar7;
        if (-1 < (char)bVar4) {
          puVar6 = puVar7;
        }
        _memcmp(puVar6,puVar1,uVar5);
        if ((int)puVar6 == 0) {
          return *(undefined4 *)(puVar7 + 3);
        }
      }
      puVar7 = puVar7 + 4;
    } while (puVar7 != puVar3);
  }
  return 0;
}



/* Entry: 10ad3c67c; end: 10ad3c67f;  */

undefined8 * FUN_10ad3c67c(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c6fdf8;
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  puStack_28 = param_1 + 1;
  func_0x00010a4f5ef0(&puStack_28);
  return param_1;
}



/* Entry: 10ad3c680; end: 10ad3c693;  */

void FUN_10ad3c680(void)

{
  FUN_10ad3c694();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad3c694; end: 10ad3c6e7;  */

undefined8 * FUN_10ad3c694(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c6fdf8;
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  puStack_28 = param_1 + 1;
  func_0x00010a4f5ef0(&puStack_28);
  return param_1;
}



/* Entry: 10ad3c6e8; end: 10ad3c79f;  */

void FUN_10ad3c6e8(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  lVar1 = *param_1 + 0xd8;
  uStack_18 = param_2;
  FUN_10a4f5f30(lVar1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  *(undefined2 *)(lVar1 + 0x38) = 0;
  *(undefined1 *)(lVar1 + 0x3a) = 0;
  *(undefined4 *)(lVar1 + 0x3c) = 7;
  *(undefined8 *)(lVar1 + 0x40) = 0x3d4ccccd3f000000;
  *(undefined1 *)(lVar1 + 0x48) = 0;
  *(undefined4 *)(lVar1 + 0x4c) = 0xf;
  *(undefined8 *)(lVar1 + 0x50) = 0x401a028f5c28f5c3;
  *(undefined4 *)(lVar1 + 0x58) = 4;
  *(undefined1 *)(lVar1 + 0x5c) = 0;
  *(undefined4 *)(lVar1 + 0x60) = 0xa0;
  *(undefined1 *)(lVar1 + 100) = 1;
  *(undefined8 *)(lVar1 + 0x68) = 0x8000000028;
  *(undefined2 *)(lVar1 + 0x70) = 0x101;
  *(undefined1 *)(lVar1 + 0x72) = 1;
  *(undefined1 *)(lVar1 + 0x78) = 0;
  *(undefined8 *)(lVar1 + 0x80) = 0x405fc00000000000;
  return;
}



/* Entry: 10ad3c7a0; end: 10ad3c847;  */

void FUN_10ad3c7a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined1 uStack_59;
  undefined8 uStack_58;
  
  lVar2 = *param_4;
  lVar1 = lVar2 + 0xf0;
  func_0x00010a509bf0();
  if (lVar2 + 0xf8 != lVar1) {
    lVar2 = lVar1 + 0x38;
  }
  lVar1 = *param_4 + 0xd8;
  uStack_58 = param_5;
  FUN_10a4f5f30(lVar1,param_5,&UNK_10dd5b8f9,&uStack_58,&uStack_59);
  FUN_10a97ec48((float)*(double *)(lVar1 + 0x80),param_1,param_2,param_3,lVar2);
  return;
}



/* Entry: 10ad3c848; end: 10ad3c8c7;  */

void FUN_10ad3c848(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  lVar2 = *param_1;
  lVar1 = lVar2 + 0xf0;
  func_0x00010a509bf0();
  if (lVar2 + 0xf8 != lVar1) {
    lVar2 = lVar1 + 0x38;
  }
  lVar1 = *param_1 + 0xd8;
  uStack_38 = param_2;
  FUN_10a4f5f30(lVar1,param_2,&UNK_10dd5b8f9,&uStack_38,&uStack_39);
  FUN_10a97ecd8((float)*(double *)(lVar1 + 0x80),lVar2);
  return;
}



/* Entry: 10ad3c8c8; end: 10ad3c927;  */

undefined8 * FUN_10ad3c8c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6fe80;
  FUN_10ad3d778(param_1 + 1);
  return param_1;
}



/* Entry: 10ad3c928; end: 10ad3cbd3;  */

void FUN_10ad3c928(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uStack_70;
  long *plStack_68;
  long lStack_60;
  long lStack_58;
  
  lVar5 = *(long *)(param_2 + 0x110);
  if (((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) &&
     (plVar10 = *(long **)(*(long *)(param_1 + 8) + 0x10), plVar10 != (long *)0x0)) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      plVar8 = (long *)*plVar1;
      plVar9 = plVar1;
      if (plVar8 != (long *)0x0) {
        do {
          plVar4 = plVar8 + 4;
          FUN_10a003e3c(plVar4,plVar10 + 2);
          if (-1 < (char)plVar4) {
            plVar9 = plVar8;
          }
          plVar8 = *(long **)((long)plVar8 + ((ulong)plVar4 >> 4 & 8));
        } while (plVar8 != (long *)0x0);
        if (plVar9 != plVar1) {
          plVar8 = plVar10 + 2;
          FUN_10a003e3c(plVar8,plVar9 + 4);
          if (((((uint)plVar8 >> 7 & 1) == 0) &&
              (plVar8 = (long *)plVar10[6], plVar8 != (long *)0x0)) &&
             (__ZNSt3__119__shared_weak_count4lockEv(), plVar8 != (long *)0x0)) {
            if ((long *)plVar10[5] != (long *)0x0) {
              lVar5 = *(long *)plVar10[5];
              plVar4 = (long *)(lVar5 + 0xf0);
              if (plVar4 != plVar9 + 7) {
                plVar11 = (long *)plVar9[7];
                if (*(long *)(lVar5 + 0x100) != 0) {
                  plVar6 = (long *)(lVar5 + 0xf8);
                  lVar7 = *(long *)(lVar5 + 0xf0);
                  *(long **)(lVar5 + 0xf0) = plVar6;
                  *(undefined8 *)(*plVar6 + 0x10) = 0;
                  *plVar6 = 0;
                  *(undefined8 *)(lVar5 + 0x100) = 0;
                  lVar5 = *(long *)(lVar7 + 8);
                  if (lVar5 != 0) {
                    lVar7 = lVar5;
                  }
                  plStack_68 = plVar4;
                  lStack_60 = lVar7;
                  lStack_58 = lVar7;
                  if (lVar7 != 0) {
                    lVar5 = lVar7;
                    FUN_10ad3d41c();
                    lStack_60 = lVar5;
                    do {
                      if (plVar11 == plVar9 + 8) break;
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                                (lVar7 + 0x20,plVar11 + 4);
                      FUN_10a31a260(lVar7 + 0x38,plVar11 + 7);
                      lVar5 = lStack_58;
                      *(int *)(lVar7 + 0x48) = (int)plVar11[9];
                      plVar6 = plVar4;
                      FUN_10ad3d3a8(plVar4,&uStack_70,lStack_58 + 0x20);
                      FUN_10a4f7384(plVar4,uStack_70,plVar6,lVar5);
                      lVar7 = lStack_60;
                      lStack_58 = lStack_60;
                      if (lStack_60 != 0) {
                        FUN_10ad3d41c();
                      }
                      plVar6 = (long *)plVar11[1];
                      plVar12 = plVar11;
                      if ((long *)plVar11[1] == (long *)0x0) {
                        do {
                          plVar11 = (long *)plVar12[2];
                          bVar3 = (long *)*plVar11 != plVar12;
                          plVar12 = plVar11;
                        } while (bVar3);
                      }
                      else {
                        do {
                          plVar11 = plVar6;
                          plVar6 = (long *)*plVar11;
                        } while ((long *)*plVar11 != (long *)0x0);
                      }
                    } while (lVar7 != 0);
                  }
                  FUN_10ad3d470(&plStack_68);
                }
                while (plVar11 != plVar9 + 8) {
                  FUN_10a4f731c(&plStack_68,plVar4,plVar11 + 4);
                  plVar6 = plVar4;
                  FUN_10ad3d3a8(plVar4,&uStack_70,plStack_68 + 4);
                  FUN_10a4f7384(plVar4,uStack_70,plVar6,plStack_68);
                  plVar6 = (long *)plVar11[1];
                  plVar12 = plVar11;
                  if ((long *)plVar11[1] == (long *)0x0) {
                    do {
                      plVar11 = (long *)plVar12[2];
                      bVar3 = (long *)*plVar11 != plVar12;
                      plVar12 = plVar11;
                    } while (bVar3);
                  }
                  else {
                    do {
                      plVar11 = plVar6;
                      plVar6 = (long *)*plVar11;
                    } while ((long *)*plVar11 != (long *)0x0);
                  }
                }
              }
            }
            plVar9 = plVar8 + 1;
            do {
              lVar5 = *plVar9;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar3) {
                *plVar9 = lVar5 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar5 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
            }
          }
        }
      }
      plVar10 = (long *)*plVar10;
    } while (plVar10 != (long *)0x0);
  }
  return;
}



/* Entry: 10ad3cbd4; end: 10ad3cd27;  */

void FUN_10ad3cbd4(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long *plStack_58;
  long *plStack_50;
  
  for (plVar5 = *(long **)(*(long *)(param_1 + 8) + 0x10); plVar5 != (long *)0x0;
      plVar5 = (long *)*plVar5) {
    if (*(char *)((long)plVar5 + 0x27) < '\0') {
      func_0x000107c3192c(&lStack_70,plVar5[2],plVar5[3]);
    }
    else {
      uStack_68 = plVar5[3];
      lStack_70 = plVar5[2];
      lStack_60 = plVar5[4];
    }
    plVar6 = (long *)plVar5[6];
    plStack_58 = (long *)plVar5[5];
    plStack_50 = plVar6;
    if (plVar5[6] != 0) {
      plVar1 = (long *)(plVar5[6] + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (plVar6 != (long *)0x0) {
        __ZNSt3__119__shared_weak_count4lockEv();
        if (plVar6 != (long *)0x0) {
          if (plStack_58 != (long *)0x0) {
            lVar4 = *plStack_58;
            if ((*(byte *)(param_2 + 0x1c8) & 1) == 0) {
              *(undefined8 *)(param_2 + 0x1c0) = 0;
              *(undefined8 *)(param_2 + 0x1a8) = 0;
              *(undefined8 *)(param_2 + 0x1a0) = 0;
              *(undefined8 *)(param_2 + 0x1b8) = 0;
              *(undefined8 *)(param_2 + 0x1b0) = 0;
              *(undefined4 *)(param_2 + 0x1c0) = 0x3f800000;
              *(undefined1 *)(param_2 + 0x1c8) = 1;
            }
            FUN_10a4dc8d0(param_2 + 0x1a0,lVar4 + 0x40);
          }
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
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
        if (plStack_50 != (long *)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
    }
    if (lStack_60 < 0) {
      __ZdlPv(lStack_70);
    }
  }
  return;
}



/* Entry: 10ad3cd28; end: 10ad3cd63;  */

undefined8 * FUN_10ad3cd28(undefined8 *param_1)

{
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10ad3cd64; end: 10ad3ce47;  */

void FUN_10ad3cd64(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  undefined8 **ppuVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 *puStack_40;
  long lStack_38;
  
  cVar1 = *(char *)((long)param_4 + 0x17);
  if (cVar1 < '\0') {
    func_0x000107c3192c(&uStack_60,*param_4,param_4[1]);
    cVar1 = *(char *)((long)param_4 + 0x17);
    if (cVar1 < '\0') {
      puStack_40 = (undefined8 *)*param_4;
      lStack_38 = param_4[1];
      goto LAB_10ad3cdbc;
    }
  }
  else {
    uStack_58 = param_4[1];
    uStack_60 = *param_4;
    lStack_50 = param_4[2];
  }
  lStack_38 = (long)(int)cVar1;
  puStack_40 = param_4;
LAB_10ad3cdbc:
  ppuVar2 = &puStack_40;
  FUN_10a159054(ppuVar2,&UNK_10f6a6c4e,5);
  if (((ulong)ppuVar2 & 1) == 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&uStack_60,&UNK_10f6a6c41,0xc);
  }
  FUN_10ad3ce48(param_1,*(undefined8 *)(param_2 + 8),param_3,&uStack_60);
  if (lStack_50 < 0) {
    __ZdlPv(uStack_60);
  }
  return;
}



/* Entry: 10ad3ce48; end: 10ad3cf73;  */

void FUN_10ad3ce48(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 uStack_49;
  long lStack_48;
  
  FUN_10ad3cf74();
  if (*param_1 == 0) {
    FUN_10a272280(param_1);
    uVar4 = 0x118;
    __Znwm();
    FUN_10ad3d0a8();
    puVar5 = (undefined8 *)0x20;
    __Znwm();
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = &PTR_FUN_110c6fec8;
    puVar5[3] = uVar4;
    *param_1 = (long)(puVar5 + 3);
    param_1[1] = (long)puVar5;
    lStack_48 = param_3;
    FUN_10a2722d8(param_2,param_3,&UNK_10dd5b8f9,&lStack_48,&uStack_49);
    lVar8 = param_1[1];
    lVar7 = *param_1;
    if (param_1[1] != 0) {
      plVar1 = (long *)(param_1[1] + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lVar6 = *(long *)(param_2 + 0x30);
    *(long *)(param_2 + 0x30) = lVar8;
    *(long *)(param_2 + 0x28) = lVar7;
    if (lVar6 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv(lVar6);
    }
  }
  return;
}



/* Entry: 10ad3cf74; end: 10ad3cfc3;  */

void FUN_10ad3cf74(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  FUN_10ad3cfc4();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    lVar1 = *(long *)(param_2 + 0x30);
    if (lVar1 != 0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      param_1[1] = lVar1;
      if (lVar1 != 0) {
        *param_1 = *(undefined8 *)(param_2 + 0x28);
      }
    }
  }
  return;
}



/* Entry: 10ad3cfc4; end: 10ad3d0a7;  */

long FUN_10ad3cfc4(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = param_1;
  func_0x000107c2b05c();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)(uVar6 & (ulong)plVar2);
    }
    else {
      plVar7 = plVar2;
      if (plVar5 <= plVar2) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar2 - uVar1 * (long)plVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar3[1];
        if (plVar2 == plVar4) {
          plVar4 = param_1;
          func_0x000107c2b068(param_1,plVar3 + 2,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar6);
          }
          else if (plVar5 <= plVar4) {
            uVar1 = 0;
            if (plVar5 != (long *)0x0) {
              uVar1 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar5);
          }
          if (plVar4 != plVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 10ad3d0a8; end: 10ad3d2c3;  */

undefined8 * FUN_10ad3d0a8(undefined8 *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  if (0x7ffffffffffffff7 < param_3) {
    func_0x000109ffde50();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10ad3d25c);
    (*pcVar2)();
  }
  puVar3 = param_1 + 8;
  if (param_3 < 0x17) {
    *(char *)((long)param_1 + 0x57) = (char)param_3;
    if (param_3 == 0) goto LAB_10ad3d154;
  }
  else {
    puVar1 = (undefined8 *)0x19;
    if ((param_3 | 7) != 0x17) {
      puVar1 = (undefined8 *)((param_3 | 7) + 1);
    }
    puVar3 = puVar1;
    __Znwm();
    param_1[9] = param_3;
    param_1[10] = (ulong)puVar1 | 0x8000000000000000;
    param_1[8] = puVar3;
  }
  _memmove(puVar3,param_2,param_3);
LAB_10ad3d154:
  *(undefined1 *)((long)puVar3 + param_3) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x3e99999a;
  *(undefined1 *)((long)param_1 + 0x74) = 1;
  puVar3 = param_1 + 0xf;
  func_0x000107c2b054(puVar3,"");
  *(undefined4 *)(param_1 + 0x12) = 0x40;
  *(undefined1 *)((long)param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0x3f800000;
  *(undefined2 *)((long)param_1 + 0x9c) = 0x101;
  *(undefined1 *)((long)param_1 + 0x9e) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80;
  *(undefined1 *)((long)param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0x3dcccccd;
  param_1[0x16] = 0;
  *(undefined2 *)((long)param_1 + 0xac) = 0;
  *(undefined8 *)((long)param_1 + 0xc5) = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0x300000168;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = param_1 + 0x1c;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = param_1 + 0x1f;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  func_0x00010ad031c0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x16,puVar3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0xb,param_4);
  return param_1;
}



/* Entry: 10ad3d2c4; end: 10ad3d2d3;  */

void FUN_10ad3d2c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6fec8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ad3d2d4; end: 10ad3d31b;  */

void FUN_10ad3d2d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6fec8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad3d31c; end: 10ad3d31f;  */

void FUN_10ad3d31c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad3d320; end: 10ad3d3a7;  */

long FUN_10ad3d320(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010a202fc8(param_1 + 0x108);
  func_0x00010a29373c(param_1 + 0xf0,*(undefined8 *)(param_1 + 0xf8));
  FUN_10a1f3f34(param_1 + 0xd8,*(undefined8 *)(param_1 + 0xe0));
  if (*(char *)(param_1 + 199) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xb0));
  }
  if (*(char *)(param_1 + 0x8f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x78));
  }
  if (*(char *)(param_1 + 0x6f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x58));
  }
  if (*(char *)(param_1 + 0x57) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x40));
  }
  func_0x000107c2826c(param_1 + 0x18);
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



/* Entry: 10ad3d3a8; end: 10ad3d41b;  */

long * FUN_10ad3d3a8(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  
  plVar4 = (long *)(param_1 + 8);
  plVar3 = plVar4;
  plVar1 = (long *)*plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    do {
      while (plVar4 = plVar1, uVar2 = param_3, FUN_10a003e3c(param_3,plVar4 + 4),
            ((uint)uVar2 >> 7 & 1) != 0) {
        plVar3 = plVar4;
        plVar1 = (long *)*plVar4;
        if ((long *)*plVar4 == (long *)0x0) goto LAB_10ad3d408;
      }
      plVar1 = (long *)plVar4[1];
    } while ((long *)plVar4[1] != (long *)0x0);
    plVar3 = plVar4 + 1;
  }
LAB_10ad3d408:
  *param_2 = plVar4;
  return plVar3;
}



/* Entry: 10ad3d41c; end: 10ad3d46f;  */

void FUN_10ad3d41c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)param_1[2];
  if (plVar1 != (long *)0x0) {
    plVar2 = (long *)*plVar1;
    if (plVar2 == param_1) {
      *plVar1 = 0;
      while (plVar2 = (long *)plVar1[1], (long *)plVar1[1] != (long *)0x0) {
        do {
          plVar1 = plVar2;
          plVar2 = (long *)*plVar1;
        } while ((long *)*plVar1 != (long *)0x0);
      }
    }
    else {
      plVar1[1] = 0;
      while (plVar2 != (long *)0x0) {
        do {
          plVar1 = plVar2;
          plVar2 = (long *)*plVar1;
        } while (plVar2 != (long *)0x0);
        plVar2 = (long *)plVar1[1];
      }
    }
  }
  return;
}



/* Entry: 10ad3d470; end: 10ad3d507;  */

undefined8 * FUN_10ad3d470(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010a29373c(*param_1,param_1[2]);
  if (param_1[1] != 0) {
    lVar1 = *(long *)(param_1[1] + 0x10);
    if (lVar1 != 0) {
      do {
        lVar2 = lVar1;
        lVar1 = *(long *)(lVar2 + 0x10);
      } while (lVar1 != 0);
      param_1[1] = lVar2;
    }
    func_0x00010a29373c(*param_1);
  }
  return param_1;
}



/* Entry: 10ad3d508; end: 10ad3d583;  */

long * FUN_10ad3d508(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar2;
  plVar3 = plVar2;
  if (plVar4 != (long *)0x0) {
    do {
      plVar1 = plVar4 + 4;
      FUN_10a003e3c(plVar1,param_2);
      if (-1 < (char)plVar1) {
        plVar3 = plVar4;
      }
      plVar4 = *(long **)((long)plVar4 + ((ulong)plVar1 >> 4 & 8));
    } while (plVar4 != (long *)0x0);
    if ((plVar3 != plVar2) && (FUN_10a003e3c(param_2,plVar3 + 4), ((uint)param_2 >> 7 & 1) == 0)) {
      return plVar3;
    }
  }
  return plVar2;
}



/* Entry: 10ad3d584; end: 10ad3d68b;  */

undefined8 FUN_10ad3d584(undefined8 param_1,long param_2)

{
  func_0x00010ad3d5c4();
  if (*(char *)(param_2 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_2 + 0x20));
  }
  __ZdlPv(param_2);
  return param_1;
}



/* Entry: 10ad3d68c; end: 10ad3d707;  */

long * FUN_10ad3d68c(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar2;
  plVar3 = plVar2;
  if (plVar4 != (long *)0x0) {
    do {
      plVar1 = plVar4 + 4;
      FUN_10a003e3c(plVar1,param_2);
      if (-1 < (char)plVar1) {
        plVar3 = plVar4;
      }
      plVar4 = *(long **)((long)plVar4 + ((ulong)plVar1 >> 4 & 8));
    } while (plVar4 != (long *)0x0);
    if ((plVar3 != plVar2) && (FUN_10a003e3c(param_2,plVar3 + 4), ((uint)param_2 >> 7 & 1) == 0)) {
      return plVar3;
    }
  }
  return plVar2;
}



/* Entry: 10ad3d708; end: 10ad3d777;  */

long * FUN_10ad3d708(long *param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = param_2;
  plVar1 = (long *)param_2[1];
  if ((long *)param_2[1] == (long *)0x0) {
    do {
      plVar4 = (long *)plVar3[2];
      bVar2 = (long *)*plVar4 != plVar3;
      plVar3 = plVar4;
    } while (bVar2);
  }
  else {
    do {
      plVar4 = plVar1;
      plVar1 = (long *)*plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
  if ((long *)*param_1 == param_2) {
    *param_1 = (long)plVar4;
  }
  param_1[2] = param_1[2] + -1;
  FUN_10a04815c(param_1[1]);
  return plVar4;
}



/* Entry: 10ad3d778; end: 10ad3d79f;  */

void FUN_10ad3d778(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x00010a2720d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10ad3d7a0; end: 10ad3d7f3;  */

void FUN_10ad3d7a0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1[3] != 0) {
    func_0x00010a272110(param_1,param_1[2]);
    param_1[2] = 0;
    lVar1 = param_1[1];
    if (lVar1 != 0) {
      lVar2 = 0;
      do {
        *(undefined8 *)(*param_1 + lVar2 * 8) = 0;
        lVar2 = lVar2 + 1;
      } while (lVar1 != lVar2);
    }
    param_1[3] = 0;
  }
  return;
}



/* Entry: 10ad3d7f4; end: 10ad3d847;  */

void FUN_10ad3d7f4(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined4 uStack_14;
  
  if (param_1[3] != param_2) {
    uVar1 = param_2 + 3U & 0xfffffffffffffffc;
    param_1[3] = param_2;
    param_1[4] = uVar1;
    param_1[1] = *param_1;
    uStack_14 = 0;
    FUN_10ad3d848(param_1,(uVar1 * 3 >> 2) << 3 | 4,&uStack_14);
  }
  return;
}



/* Entry: 10ad3d848; end: 10ad3d877;  */

long * FUN_10ad3d848(long *param_1,ulong param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long *plVar5;
  undefined *puVar6;
  undefined4 *extraout_x8;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined4 *puVar13;
  long lVar14;
  undefined4 uVar15;
  undefined4 uStack_74;
  undefined4 *puStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  uVar9 = param_1[1] - *param_1 >> 2;
  if (param_2 <= uVar9) {
    if (param_2 < uVar9) {
      param_1[1] = *param_1 + param_2 * 4;
    }
    return param_1;
  }
  param_2 = param_2 - uVar9;
  puVar7 = (undefined4 *)param_1[1];
  plVar5 = param_1;
  if ((ulong)(param_1[2] - (long)puVar7 >> 2) < param_2) {
    lVar14 = (long)puVar7 - *param_1;
    uVar9 = param_2 + (lVar14 >> 2);
    if (uVar9 >> 0x3e != 0) {
      FUN_10ad3d9d8();
      uVar15 = (undefined4)param_2;
      pcStack_48 = FUN_10ad3d9d8;
      puVar6 = &DAT_10f62a4d8;
      puStack_50 = &stack0xfffffffffffffff0;
      FUN_109ffde64();
      pcStack_58 = FUN_10ad3d9ec;
      puVar1 = puVar6 + 0x28;
      uStack_74 = uVar15;
      puStack_70 = param_3;
      plStack_68 = param_1;
      puStack_60 = (undefined1 *)&puStack_50;
      __ZNSt3__119__shared_mutex_base11lock_sharedEv(puVar1);
      FUN_10ad3db74(puVar6,&uStack_74);
      __ZNSt3__119__shared_mutex_base13unlock_sharedEv(puVar1);
      return (long *)(ulong)(puVar6 != (undefined *)0x0);
    }
    uVar10 = param_1[2] - *param_1;
    uVar12 = (long)uVar10 >> 1;
    if (uVar12 <= uVar9) {
      uVar12 = uVar9;
    }
    if (0x7ffffffffffffffb < uVar10) {
      uVar12 = 0x3fffffffffffffff;
    }
    if (uVar12 == 0) {
      lVar11 = 0;
LAB_10ad3d94c:
      puVar7 = (undefined4 *)(lVar11 + lVar14);
      lVar14 = param_2 * 4;
      uVar15 = *param_3;
      puVar8 = puVar7;
      do {
        *puVar8 = uVar15;
        lVar14 = lVar14 + -4;
        puVar8 = puVar8 + 1;
      } while (lVar14 != 0);
      puVar2 = (undefined4 *)*param_1;
      puVar3 = (undefined4 *)param_1[1];
      puVar8 = (undefined4 *)((long)puVar7 + ((long)puVar2 - (long)puVar3));
      puVar4 = puVar8;
      for (puVar13 = puVar2; puVar3 != puVar13; puVar13 = puVar13 + 1) {
        *puVar4 = *puVar13;
        puVar4 = puVar4 + 1;
      }
      *param_1 = (long)puVar8;
      param_1[1] = (long)(puVar7 + param_2);
      param_1[2] = lVar11 + uVar12 * 4;
      if (puVar2 == (undefined4 *)0x0) {
        return plVar5;
      }
      plVar5 = *(long **)(puVar2 + -2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(plVar5);
      return plVar5;
    }
    plVar5 = (long *)(uVar12 * 4 + 0x10);
    _malloc();
    if (plVar5 != (long *)0x0) {
      *(long **)(((ulong)plVar5 & 0xfffffffffffffff0) + 8) = plVar5;
      lVar11 = ((ulong)plVar5 & 0xfffffffffffffff0) + 0x10;
      if (lVar11 != 0) goto LAB_10ad3d94c;
    }
    plVar5 = (long *)0x8;
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
    puVar7 = extraout_x8;
  }
  puVar8 = puVar7;
  if (param_2 != 0) {
    uVar15 = *param_3;
    lVar14 = param_2 * 4;
    puVar8 = puVar7 + param_2;
    do {
      *puVar7 = uVar15;
      lVar14 = lVar14 + -4;
      puVar7 = puVar7 + 1;
    } while (lVar14 != 0);
  }
  param_1[1] = (long)puVar8;
  return plVar5;
}



/* Entry: 10ad3d878; end: 10ad3d9d7;  */

long * FUN_10ad3d878(long *param_1,ulong param_2,undefined4 *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  long *plVar6;
  undefined *puVar7;
  undefined4 *extraout_x8;
  undefined4 *puVar8;
  undefined4 *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined4 *puVar13;
  long lVar14;
  undefined4 uVar15;
  undefined4 uStack_74;
  undefined4 *puStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  puVar8 = (undefined4 *)param_1[1];
  plVar6 = param_1;
  if ((ulong)(param_1[2] - (long)puVar8 >> 2) < param_2) {
    lVar14 = (long)puVar8 - *param_1;
    uVar2 = param_2 + (lVar14 >> 2);
    if (uVar2 >> 0x3e != 0) {
      FUN_10ad3d9d8();
      uVar15 = (undefined4)param_2;
      pcStack_48 = FUN_10ad3d9d8;
      puVar7 = &DAT_10f62a4d8;
      puStack_50 = &stack0xfffffffffffffff0;
      FUN_109ffde64();
      pcStack_58 = FUN_10ad3d9ec;
      puVar1 = puVar7 + 0x28;
      uStack_74 = uVar15;
      puStack_70 = param_3;
      plStack_68 = param_1;
      puStack_60 = (undefined1 *)&puStack_50;
      __ZNSt3__119__shared_mutex_base11lock_sharedEv(puVar1);
      FUN_10ad3db74(puVar7,&uStack_74);
      __ZNSt3__119__shared_mutex_base13unlock_sharedEv(puVar1);
      return (long *)(ulong)(puVar7 != (undefined *)0x0);
    }
    uVar10 = param_1[2] - *param_1;
    uVar12 = (long)uVar10 >> 1;
    if (uVar12 <= uVar2) {
      uVar12 = uVar2;
    }
    if (0x7ffffffffffffffb < uVar10) {
      uVar12 = 0x3fffffffffffffff;
    }
    if (uVar12 == 0) {
      lVar11 = 0;
LAB_10ad3d94c:
      puVar8 = (undefined4 *)(lVar11 + lVar14);
      lVar14 = param_2 << 2;
      uVar15 = *param_3;
      puVar9 = puVar8;
      do {
        *puVar9 = uVar15;
        lVar14 = lVar14 + -4;
        puVar9 = puVar9 + 1;
      } while (lVar14 != 0);
      puVar3 = (undefined4 *)*param_1;
      puVar4 = (undefined4 *)param_1[1];
      puVar9 = (undefined4 *)((long)puVar8 + ((long)puVar3 - (long)puVar4));
      puVar5 = puVar9;
      for (puVar13 = puVar3; puVar4 != puVar13; puVar13 = puVar13 + 1) {
        *puVar5 = *puVar13;
        puVar5 = puVar5 + 1;
      }
      *param_1 = (long)puVar9;
      param_1[1] = (long)(puVar8 + param_2);
      param_1[2] = lVar11 + uVar12 * 4;
      if (puVar3 == (undefined4 *)0x0) {
        return plVar6;
      }
      plVar6 = *(long **)(puVar3 + -2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(plVar6);
      return plVar6;
    }
    plVar6 = (long *)(uVar12 * 4 + 0x10);
    _malloc();
    if (plVar6 != (long *)0x0) {
      *(long **)(((ulong)plVar6 & 0xfffffffffffffff0) + 8) = plVar6;
      lVar11 = ((ulong)plVar6 & 0xfffffffffffffff0) + 0x10;
      if (lVar11 != 0) goto LAB_10ad3d94c;
    }
    plVar6 = (long *)0x8;
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
    puVar8 = extraout_x8;
  }
  puVar9 = puVar8;
  if (param_2 != 0) {
    uVar15 = *param_3;
    lVar14 = param_2 << 2;
    puVar9 = puVar8 + param_2;
    do {
      *puVar8 = uVar15;
      lVar14 = lVar14 + -4;
      puVar8 = puVar8 + 1;
    } while (lVar14 != 0);
  }
  param_1[1] = (long)puVar9;
  return plVar6;
}



/* Entry: 10ad3d9d8; end: 10ad3d9eb;  */

bool FUN_10ad3d9d8(undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uStack_34;
  
  puVar2 = &DAT_10f62a4d8;
  uStack_34 = param_2;
  FUN_109ffde64();
  puVar1 = puVar2 + 0x28;
  __ZNSt3__119__shared_mutex_base11lock_sharedEv(puVar1);
  FUN_10ad3db74(puVar2,&uStack_34);
  __ZNSt3__119__shared_mutex_base13unlock_sharedEv(puVar1);
  return puVar2 != (undefined *)0x0;
}



/* Entry: 10ad3d9ec; end: 10ad3da63;  */

bool FUN_10ad3d9ec(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 uStack_24;
  
  lVar1 = param_1 + 0x28;
  uStack_24 = param_2;
  __ZNSt3__119__shared_mutex_base11lock_sharedEv(lVar1);
  FUN_10ad3db74(param_1,&uStack_24);
  __ZNSt3__119__shared_mutex_base13unlock_sharedEv(lVar1);
  return param_1 != 0;
}



/* Entry: 10ad3da64; end: 10ad3da9b;  */

void FUN_10ad3da64(long param_1)

{
  __ZNSt3__119__shared_mutex_base4lockEv(param_1 + 0x28);
  FUN_10ad3dc14(param_1);
  __ZNSt3__119__shared_mutex_base6unlockEv(param_1 + 0x28);
  return;
}



/* Entry: 10ad3da9c; end: 10ad3daf3;  */

undefined8 * FUN_10ad3da9c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 5) = 0x3f800000;
  __ZNSt3__119__shared_mutex_baseC1Ev(param_1 + 6);
  return param_1;
}



/* Entry: 10ad3daf4; end: 10ad3db3b;  */

long * FUN_10ad3daf4(long *param_1)

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



/* Entry: 10ad3db3c; end: 10ad3db73;  */

undefined8 * FUN_10ad3db3c(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) == '\x01') {
    __ZNSt3__119__shared_mutex_base13unlock_sharedEv(*param_1);
  }
  return param_1;
}



/* Entry: 10ad3db74; end: 10ad3dc13;  */

long * FUN_10ad3db74(long *param_1,int *param_2)

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



/* Entry: 10ad3dc14; end: 10ad3ddef;  */

void FUN_10ad3dc14(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if (param_1[3] != 0) {
    plVar1 = (long *)param_1[2];
    while (plVar1 != (long *)0x0) {
      plVar1 = (long *)*plVar1;
      __ZdlPv();
    }
    param_1[2] = 0;
    lVar2 = param_1[1];
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(*param_1 + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    param_1[3] = 0;
  }
  return;
}



/* Entry: 10ad3ddf0; end: 10ad3e31f;  */

undefined8 *
FUN_10ad3ddf0(undefined8 *param_1,undefined8 *param_2,long *param_3,undefined1 param_4,int param_5,
             long param_6,undefined8 *param_7,undefined8 *param_8,undefined8 param_9)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  float *pfVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  undefined1 uStack_81;
  
  uVar8 = *param_2;
  lVar7 = param_2[1];
  *param_1 = uVar8;
  param_1[1] = lVar7;
  if (lVar7 == 0) {
    param_1[2] = uVar8;
    param_1[3] = 0;
  }
  else {
    plVar12 = (long *)(lVar7 + 8);
    do {
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = *plVar12 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    lVar7 = param_2[1];
    uVar8 = *param_2;
    param_1[3] = param_2[1];
    param_1[2] = uVar8;
    if (lVar7 != 0) {
      plVar12 = (long *)(lVar7 + 8);
      do {
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = *plVar12 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  lVar7 = param_2[1];
  uVar8 = *param_2;
  param_1[8] = param_2[1];
  param_1[7] = uVar8;
  if (lVar7 != 0) {
    plVar12 = (long *)(lVar7 + 8);
    do {
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = *plVar12 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lVar7 = param_3[1];
  lVar10 = *param_3;
  param_1[0xb] = param_3[1];
  param_1[10] = lVar10;
  *(undefined2 *)(param_1 + 9) = 0;
  if (lVar7 != 0) {
    plVar12 = (long *)(lVar7 + 8);
    do {
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = *plVar12 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  if (*(char *)(param_7 + 4) == '\x01') {
    lVar7 = param_7[1];
    uVar8 = *param_7;
    param_1[0xd] = param_7[1];
    param_1[0xc] = uVar8;
    if (lVar7 != 0) {
      plVar12 = (long *)(lVar7 + 8);
      do {
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = *plVar12 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uVar8 = param_7[2];
    param_1[0xf] = param_7[3];
    param_1[0xe] = uVar8;
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  if (*(char *)(param_8 + 4) == '\x01') {
    lVar7 = param_8[1];
    uVar8 = *param_8;
    param_1[0x12] = param_8[1];
    param_1[0x11] = uVar8;
    if (lVar7 != 0) {
      plVar12 = (long *)(lVar7 + 8);
      do {
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = *plVar12 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uVar8 = param_8[2];
    param_1[0x14] = param_8[3];
    param_1[0x13] = uVar8;
    *(undefined1 *)(param_1 + 0x15) = 1;
  }
  FUN_10ad3e320(param_1 + 0x16,param_9,&uStack_81);
  *(undefined1 *)(param_1 + 0x1a) = param_4;
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_6 + 8);
  param_1[0x1b] = &PTR_DAT_110ba5598;
  uVar8 = *(undefined8 *)(param_6 + 0x10);
  uVar6 = *(undefined1 *)(param_6 + 0x18);
  puVar13 = param_1 + 0x1f;
  *(undefined1 *)puVar13 = 0;
  *(undefined1 *)(param_1 + 0x1e) = uVar6;
  param_1[0x1d] = uVar8;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  lVar7 = *param_3;
  if ((lVar7 != 0) && (*(int *)(lVar7 + 0x90) != -1)) {
    param_1[0x49] = 0;
    param_1[0x46] = 0;
    param_1[0x45] = 0;
    param_1[0x48] = 0;
    param_1[0x47] = 0;
    param_1[0x42] = 0;
    param_1[0x41] = 0;
    param_1[0x44] = 0;
    param_1[0x43] = 0;
    param_1[0x3e] = 0;
    param_1[0x3d] = 0;
    param_1[0x40] = 0;
    param_1[0x3f] = 0;
    param_1[0x3a] = 0;
    param_1[0x39] = 0;
    param_1[0x3c] = 0;
    param_1[0x3b] = 0;
    param_1[0x36] = 0;
    param_1[0x35] = 0;
    param_1[0x38] = 0;
    param_1[0x37] = 0;
    param_1[0x32] = 0;
    param_1[0x31] = 0;
    param_1[0x34] = 0;
    param_1[0x33] = 0;
    param_1[0x2e] = 0;
    param_1[0x2d] = 0;
    param_1[0x30] = 0;
    param_1[0x2f] = 0;
    param_1[0x2a] = 0;
    param_1[0x29] = 0;
    param_1[0x2c] = 0;
    param_1[0x2b] = 0;
    param_1[0x26] = 0;
    param_1[0x25] = 0;
    param_1[0x28] = 0;
    param_1[0x27] = 0;
    param_1[0x22] = 0;
    param_1[0x21] = 0;
    param_1[0x24] = 0;
    param_1[0x23] = 0;
    param_1[0x20] = 0;
    *puVar13 = 0;
    *(undefined1 *)(param_1 + 0x1f) = 1;
    *(undefined1 *)(param_1 + 0x4a) = 1;
    uVar14 = *(ulong *)(lVar7 + 0x40);
    if (uVar14 == 0) {
      param_1[0x20] = 0;
    }
    else {
      plVar12 = (long *)(lVar7 + 0x48);
      puVar9 = param_1 + 0x21;
      uVar15 = uVar14;
      do {
        puVar9[1] = 0;
        *puVar9 = 0x3f800000;
        puVar9[3] = 0;
        puVar9[2] = 0x3f80000000000000;
        puVar9[5] = 0x3f800000;
        puVar9[4] = 0;
        puVar9[7] = 0x3f80000000000000;
        puVar9[6] = 0;
        puVar9[8] = 0;
        puVar9[9] = 0;
        puVar9 = puVar9 + 10;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
      param_1[0x20] = uVar14;
      lVar10 = uVar14 << 4;
      fVar29 = 0.0;
      fVar30 = 0.0;
      plVar11 = plVar12;
      do {
        fVar17 = (float)*(int *)(*plVar11 + 4);
        fVar20 = (float)*(int *)(*plVar11 + 8);
        if (fVar17 <= fVar30) {
          fVar17 = fVar30;
        }
        fVar30 = fVar17;
        if (fVar20 <= fVar29) {
          fVar20 = fVar29;
        }
        fVar29 = fVar20;
        lVar10 = lVar10 + -0x10;
        plVar11 = plVar11 + 2;
      } while (lVar10 != 0);
      uVar15 = 0;
      bVar3 = false;
      bVar4 = true;
      bVar5 = false;
      if (0.0 < fVar29) {
        bVar3 = false;
        bVar4 = false;
        bVar5 = true;
        if (!NAN(fVar30)) {
          bVar3 = fVar30 < 0.0;
          bVar4 = fVar30 == 0.0;
          bVar5 = false;
        }
      }
      pfVar16 = (float *)((long)param_1 + 0x154);
      do {
        if (uVar14 == uVar15) goto LAB_10ad3e2d0;
        lVar10 = *plVar12;
        uVar19 = *(undefined8 *)(lVar10 + 0x2c);
        uVar8 = *(undefined8 *)(lVar10 + 0x24);
        uVar23 = *(undefined8 *)(lVar10 + 0x3c);
        uVar22 = *(undefined8 *)(lVar10 + 0x34);
        uVar26 = *(undefined8 *)(lVar10 + 0x4c);
        uVar25 = *(undefined8 *)(lVar10 + 0x44);
        uVar28 = *(undefined8 *)(lVar10 + 0x54);
        *(undefined8 *)(pfVar16 + -5) = *(undefined8 *)(lVar10 + 0x5c);
        *(undefined8 *)(pfVar16 + -7) = uVar28;
        *(undefined8 *)(pfVar16 + -9) = uVar26;
        *(undefined8 *)(pfVar16 + -0xb) = uVar25;
        *(undefined8 *)(pfVar16 + -0xd) = uVar23;
        *(undefined8 *)(pfVar16 + -0xf) = uVar22;
        *(undefined8 *)(pfVar16 + -0x11) = uVar19;
        *(undefined8 *)(pfVar16 + -0x13) = uVar8;
        FUN_10a0ecd78(*plVar12);
        fVar18 = (float)uVar8;
        pfVar16[-3] = fVar18;
        fVar21 = (float)uVar22;
        pfVar16[-2] = fVar21;
        fVar20 = fVar18;
        fVar17 = fVar21;
        func_0x00010a0ecd94(*plVar12);
        pfVar16[-1] = fVar20;
        *pfVar16 = fVar17;
        if (!bVar4 && bVar3 == bVar5) {
          fVar24 = (float)*(int *)(*plVar12 + 4) / fVar30;
          fVar27 = (float)*(int *)(*plVar12 + 8) / fVar29;
          pfVar16[-3] = fVar18 * fVar24;
          pfVar16[-2] = fVar21 * fVar27;
          pfVar16[-1] = fVar20 * fVar24;
          *pfVar16 = fVar17 * fVar27;
        }
        uVar15 = uVar15 + 1;
        plVar12 = plVar12 + 2;
        pfVar16 = pfVar16 + 0x14;
      } while (uVar15 < (ulong)param_1[0x20]);
    }
    uVar14 = *(ulong *)(lVar7 + 0x68);
    if (uVar14 == 0) {
      FUN_10a5bdbc4(param_1 + 0x35,param_1 + 0x20);
    }
    else {
      plVar12 = (long *)(lVar7 + 0x70);
      uVar15 = param_1[0x35];
      lVar7 = uVar15 - uVar14;
      if ((uVar15 < uVar14 || lVar7 == 0) && (uVar14 != uVar15)) {
        puVar9 = param_1 + uVar15 * 10 + 0x36;
        do {
          puVar9[1] = 0;
          *puVar9 = 0x3f800000;
          puVar9[3] = 0;
          puVar9[2] = 0x3f80000000000000;
          puVar9[5] = 0x3f800000;
          puVar9[4] = 0;
          puVar9[7] = 0x3f80000000000000;
          puVar9[6] = 0;
          puVar9[8] = 0;
          puVar9[9] = 0;
          puVar9 = puVar9 + 10;
          bVar3 = lVar7 != -1;
          lVar7 = lVar7 + 1;
        } while (bVar3);
      }
      param_1[0x35] = uVar14;
      lVar7 = uVar14 << 4;
      fVar29 = 0.0;
      fVar30 = 0.0;
      plVar11 = plVar12;
      do {
        fVar17 = (float)*(int *)(*plVar11 + 4);
        fVar20 = (float)*(int *)(*plVar11 + 8);
        if (fVar17 <= fVar30) {
          fVar17 = fVar30;
        }
        fVar30 = fVar17;
        if (fVar20 <= fVar29) {
          fVar20 = fVar29;
        }
        fVar29 = fVar20;
        lVar7 = lVar7 + -0x10;
        plVar11 = plVar11 + 2;
      } while (lVar7 != 0);
      uVar15 = 0;
      bVar3 = false;
      bVar4 = true;
      bVar5 = false;
      if (0.0 < fVar29) {
        bVar3 = false;
        bVar4 = false;
        bVar5 = true;
        if (!NAN(fVar30)) {
          bVar3 = fVar30 < 0.0;
          bVar4 = fVar30 == 0.0;
          bVar5 = false;
        }
      }
      pfVar16 = (float *)((long)param_1 + 0x1fc);
      do {
        if (uVar14 == uVar15) goto LAB_10ad3e2d0;
        lVar7 = *plVar12;
        uVar19 = *(undefined8 *)(lVar7 + 0x2c);
        uVar8 = *(undefined8 *)(lVar7 + 0x24);
        uVar23 = *(undefined8 *)(lVar7 + 0x3c);
        uVar22 = *(undefined8 *)(lVar7 + 0x34);
        uVar26 = *(undefined8 *)(lVar7 + 0x4c);
        uVar25 = *(undefined8 *)(lVar7 + 0x44);
        uVar28 = *(undefined8 *)(lVar7 + 0x54);
        *(undefined8 *)(pfVar16 + -5) = *(undefined8 *)(lVar7 + 0x5c);
        *(undefined8 *)(pfVar16 + -7) = uVar28;
        *(undefined8 *)(pfVar16 + -9) = uVar26;
        *(undefined8 *)(pfVar16 + -0xb) = uVar25;
        *(undefined8 *)(pfVar16 + -0xd) = uVar23;
        *(undefined8 *)(pfVar16 + -0xf) = uVar22;
        *(undefined8 *)(pfVar16 + -0x11) = uVar19;
        *(undefined8 *)(pfVar16 + -0x13) = uVar8;
        FUN_10a0ecd78(*plVar12);
        fVar18 = (float)uVar8;
        pfVar16[-3] = fVar18;
        fVar21 = (float)uVar22;
        pfVar16[-2] = fVar21;
        fVar20 = fVar18;
        fVar17 = fVar21;
        func_0x00010a0ecd94(*plVar12);
        pfVar16[-1] = fVar20;
        *pfVar16 = fVar17;
        if (!bVar4 && bVar3 == bVar5) {
          fVar24 = (float)*(int *)(*plVar12 + 4) / fVar30;
          fVar27 = (float)*(int *)(*plVar12 + 8) / fVar29;
          pfVar16[-3] = fVar18 * fVar24;
          pfVar16[-2] = fVar21 * fVar27;
          pfVar16[-1] = fVar20 * fVar24;
          *pfVar16 = fVar17 * fVar27;
        }
        uVar15 = uVar15 + 1;
        plVar12 = plVar12 + 2;
        pfVar16 = pfVar16 + 0x14;
      } while (uVar15 < (ulong)param_1[0x35]);
    }
    if (param_5 == 0) {
      if ((*(byte *)(param_1 + 0x4a) & 1) == 0) goto LAB_10ad3e2d0;
      uVar6 = 1;
    }
    else {
      if ((*(byte *)(param_1 + 0x4a) & 1) == 0) {
LAB_10ad3e2d0:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10ad3e2d4);
        (*pcVar2)();
      }
      uVar6 = 2;
    }
    *(undefined1 *)puVar13 = uVar6;
  }
  return param_1;
}



/* Entry: 10ad3e320; end: 10ad3e503;  */

long * FUN_10ad3e320(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  char *pcVar12;
  long *plVar13;
  undefined8 uVar14;
  
  FUN_10ad3e504(param_1,0,param_2,param_2,param_3);
  lVar11 = param_2[3];
  if (lVar11 != 0) {
    FUN_10ad3e550(param_1,lVar11);
    pcVar12 = (char *)*param_2;
    plVar13 = (long *)param_2[1];
    cVar2 = *pcVar12;
    while (cVar2 < -1) {
      uVar14 = *(undefined8 *)pcVar12;
      uVar8 = CONCAT17(-(-2 < (char)((ulong)uVar14 >> 0x38)),
                       CONCAT16(-(-2 < (char)((ulong)uVar14 >> 0x30)),
                                CONCAT15(-(-2 < (char)((ulong)uVar14 >> 0x28)),
                                         CONCAT14(-(-2 < (char)((ulong)uVar14 >> 0x20)),
                                                  CONCAT13(-(-2 < (char)((ulong)uVar14 >> 0x18)),
                                                           CONCAT12(-(-2 < (char)((ulong)uVar14 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-2 < (char)((ulong)
                                                  uVar14 >> 8)),-(-2 < (char)uVar14))))))));
      uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20);
      pcVar12 = pcVar12 + (uVar8 >> 3);
      plVar13 = plVar13 + (uVar8 >> 3) * 6;
      cVar2 = *pcVar12;
    }
    while (cVar2 != -1) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (long)&PTR_LOOP_110c8acd8 + *plVar13;
      uVar8 = plVar13[1] +
              (SUB168(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^
              ((long)&PTR_LOOP_110c8acd8 + *plVar13) * -0x622015f714c7d297);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar8;
      uVar8 = SUB168(auVar6 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar8 * -0x622015f714c7d297;
      plVar7 = param_1;
      FUN_10ae6c8b4(param_1,uVar8);
      bVar3 = (byte)uVar8 & 0x7f;
      lVar9 = param_1[1];
      uVar8 = param_1[2];
      lVar10 = *param_1;
      *(byte *)(lVar10 + (long)plVar7) = bVar3;
      *(byte *)(lVar10 + ((long)plVar7 - 7U & uVar8) + (uVar8 & 7)) = bVar3;
      plVar7 = (long *)(lVar9 + (long)plVar7 * 0x30);
      lVar9 = *plVar13;
      plVar7[1] = plVar13[1];
      *plVar7 = lVar9;
      lVar9 = plVar13[3];
      lVar10 = plVar13[2];
      plVar7[3] = plVar13[3];
      plVar7[2] = lVar10;
      if (lVar9 != 0) {
        plVar1 = (long *)(lVar9 + 8);
        do {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lVar9 = plVar13[4];
      plVar7[5] = plVar13[5];
      plVar7[4] = lVar9;
      pcVar12 = pcVar12 + 1;
      plVar13 = plVar13 + 6;
      cVar2 = *pcVar12;
      while (cVar2 < -1) {
        uVar14 = *(undefined8 *)pcVar12;
        uVar8 = CONCAT17(-(-2 < (char)((ulong)uVar14 >> 0x38)),
                         CONCAT16(-(-2 < (char)((ulong)uVar14 >> 0x30)),
                                  CONCAT15(-(-2 < (char)((ulong)uVar14 >> 0x28)),
                                           CONCAT14(-(-2 < (char)((ulong)uVar14 >> 0x20)),
                                                    CONCAT13(-(-2 < (char)((ulong)uVar14 >> 0x18)),
                                                             CONCAT12(-(-2 < (char)((ulong)uVar14 >>
                                                                                   0x10)),
                                                                      CONCAT11(-(-2 < (char)((ulong)
                                                  uVar14 >> 8)),-(-2 < (char)uVar14))))))));
        uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20);
        pcVar12 = pcVar12 + (uVar8 >> 3);
        plVar13 = plVar13 + (uVar8 >> 3) * 6;
        cVar2 = *pcVar12;
      }
    }
    param_1[3] = lVar11;
    *(long *)(*param_1 + -8) = *(long *)(*param_1 + -8) - lVar11;
  }
  return param_1;
}



/* Entry: 10ad3e504; end: 10ad3e54f;  */

undefined8 * FUN_10ad3e504(undefined8 *param_1,long param_2)

{
  *param_1 = &UNK_10e52b660;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_2 != 0) {
    param_1[2] = 0xffffffffffffffff >> (LZCOUNT(param_2) & 0x3fU);
    func_0x000107c2b154(param_1);
  }
  return param_1;
}



/* Entry: 10ad3e550; end: 10ad3e5b3;  */

void FUN_10ad3e550(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  
  if (param_2 <= *(long *)(*param_1 - 8) + param_1[3]) {
    return;
  }
  if (param_2 == 7) {
    uVar7 = 0xf;
  }
  else {
    lVar13 = (long)(param_2 - 1) / 7 + param_2;
    uVar7 = 0xffffffffffffffff >> (LZCOUNT(lVar13) & 0x3fU);
    if (lVar13 == 0) {
      uVar7 = 1;
    }
  }
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar15 = param_1[2];
  param_1[2] = uVar7;
  func_0x000107c2b154();
  if (uVar15 == 0) {
    return;
  }
  uVar7 = 0;
  uVar16 = param_1[1];
  do {
    if (-1 < *(char *)(uVar1 + uVar7)) {
      plVar6 = (long *)(uVar2 + uVar7 * 0x30);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (long)&PTR_LOOP_110c8acd8 + *plVar6;
      uVar8 = plVar6[1] +
              (SUB168(auVar4 * ZEXT816(0x9ddfea08eb382d69),8) ^
              ((long)&PTR_LOOP_110c8acd8 + *plVar6) * -0x622015f714c7d297);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar8;
      uVar11 = SUB168(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar8 * -0x622015f714c7d297;
      uVar8 = *param_1;
      uVar10 = param_1[2];
      uVar12 = (uVar11 >> 7 ^ uVar8 >> 0xc) & uVar10;
      uVar17 = *(undefined8 *)(uVar8 + uVar12);
      uVar14 = CONCAT17(-((char)((ulong)uVar17 >> 0x38) < -1),
                        CONCAT16(-((char)((ulong)uVar17 >> 0x30) < -1),
                                 CONCAT15(-((char)((ulong)uVar17 >> 0x28) < -1),
                                          CONCAT14(-((char)((ulong)uVar17 >> 0x20) < -1),
                                                   CONCAT13(-((char)((ulong)uVar17 >> 0x18) < -1),
                                                            CONCAT12(-((char)((ulong)uVar17 >> 0x10)
                                                                      < -1),CONCAT11(-((char)((ulong
                                                  )uVar17 >> 8) < -1),-((char)uVar17 < -1))))))));
      if (uVar14 == 0) {
        lVar13 = 8;
        do {
          uVar12 = uVar12 + lVar13 & uVar10;
          uVar17 = *(undefined8 *)(uVar8 + uVar12);
          uVar14 = CONCAT17(-((char)((ulong)uVar17 >> 0x38) < -1),
                            CONCAT16(-((char)((ulong)uVar17 >> 0x30) < -1),
                                     CONCAT15(-((char)((ulong)uVar17 >> 0x28) < -1),
                                              CONCAT14(-((char)((ulong)uVar17 >> 0x20) < -1),
                                                       CONCAT13(-((char)((ulong)uVar17 >> 0x18) < -1
                                                                 ),CONCAT12(-((char)((ulong)uVar17
                                                                                    >> 0x10) < -1),
                                                                            CONCAT11(-((char)((ulong
                                                  )uVar17 >> 8) < -1),-((char)uVar17 < -1))))))));
          lVar13 = lVar13 + 8;
        } while (uVar14 == 0);
      }
      uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3) & uVar10;
      bVar3 = (byte)uVar11 & 0x7f;
      *(byte *)(uVar8 + uVar12) = bVar3;
      *(byte *)(uVar8 + (uVar12 - 7 & uVar10) + (uVar10 & 7)) = bVar3;
      plVar9 = (long *)(uVar16 + uVar12 * 0x30);
      lVar13 = *plVar6;
      plVar9[1] = plVar6[1];
      *plVar9 = lVar13;
      lVar13 = plVar6[2];
      plVar9[3] = plVar6[3];
      plVar9[2] = lVar13;
      plVar6[2] = 0;
      plVar6[3] = 0;
      lVar13 = plVar6[4];
      plVar9[5] = plVar6[5];
      plVar9[4] = lVar13;
      func_0x00010a09db64();
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 != uVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(uVar1 - 8);
  return;
}



/* Entry: 10ad3e5b4; end: 10ad3e71f;  */

void FUN_10ad3e5b4(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar14 = param_1[2];
  param_1[2] = param_2;
  func_0x000107c2b154();
  if (uVar14 != 0) {
    uVar15 = 0;
    uVar16 = param_1[1];
    do {
      if (-1 < *(char *)(uVar1 + uVar15)) {
        plVar6 = (long *)(uVar2 + uVar15 * 0x30);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (long)&PTR_LOOP_110c8acd8 + *plVar6;
        uVar7 = plVar6[1] +
                (SUB168(auVar4 * ZEXT816(0x9ddfea08eb382d69),8) ^
                ((long)&PTR_LOOP_110c8acd8 + *plVar6) * -0x622015f714c7d297);
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar7;
        uVar10 = SUB168(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar7 * -0x622015f714c7d297;
        uVar7 = *param_1;
        uVar9 = param_1[2];
        uVar11 = (uVar10 >> 7 ^ uVar7 >> 0xc) & uVar9;
        uVar17 = *(undefined8 *)(uVar7 + uVar11);
        uVar13 = CONCAT17(-((char)((ulong)uVar17 >> 0x38) < -1),
                          CONCAT16(-((char)((ulong)uVar17 >> 0x30) < -1),
                                   CONCAT15(-((char)((ulong)uVar17 >> 0x28) < -1),
                                            CONCAT14(-((char)((ulong)uVar17 >> 0x20) < -1),
                                                     CONCAT13(-((char)((ulong)uVar17 >> 0x18) < -1),
                                                              CONCAT12(-((char)((ulong)uVar17 >>
                                                                               0x10) < -1),
                                                                       CONCAT11(-((char)((ulong)
                                                  uVar17 >> 8) < -1),-((char)uVar17 < -1))))))));
        if (uVar13 == 0) {
          lVar12 = 8;
          do {
            uVar11 = uVar11 + lVar12 & uVar9;
            uVar17 = *(undefined8 *)(uVar7 + uVar11);
            uVar13 = CONCAT17(-((char)((ulong)uVar17 >> 0x38) < -1),
                              CONCAT16(-((char)((ulong)uVar17 >> 0x30) < -1),
                                       CONCAT15(-((char)((ulong)uVar17 >> 0x28) < -1),
                                                CONCAT14(-((char)((ulong)uVar17 >> 0x20) < -1),
                                                         CONCAT13(-((char)((ulong)uVar17 >> 0x18) <
                                                                   -1),CONCAT12(-((char)((ulong)
                                                  uVar17 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar17 >> 8) < -1),
                                                           -((char)uVar17 < -1))))))));
            lVar12 = lVar12 + 8;
          } while (uVar13 == 0);
        }
        uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar11 = uVar11 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3) & uVar9;
        bVar3 = (byte)uVar10 & 0x7f;
        *(byte *)(uVar7 + uVar11) = bVar3;
        *(byte *)(uVar7 + (uVar11 - 7 & uVar9) + (uVar9 & 7)) = bVar3;
        plVar8 = (long *)(uVar16 + uVar11 * 0x30);
        lVar12 = *plVar6;
        plVar8[1] = plVar6[1];
        *plVar8 = lVar12;
        lVar12 = plVar6[2];
        plVar8[3] = plVar6[3];
        plVar8[2] = lVar12;
        plVar6[2] = 0;
        plVar6[3] = 0;
        lVar12 = plVar6[4];
        plVar8[5] = plVar6[5];
        plVar8[4] = lVar12;
        func_0x00010a09db64();
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(uVar1 - 8);
    return;
  }
  return;
}



/* Entry: 10ad3e720; end: 10ad3ef73;  */

/* WARNING: Removing unreachable block (ram,0x00010ad4772c) */

undefined8 ** FUN_10ad3e720(undefined8 **param_1)

{
  long *plVar1;
  char cVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  uint *puVar8;
  undefined8 **ppuVar9;
  undefined8 **ppuVar10;
  undefined8 **ppuVar11;
  uint uVar12;
  code *pcVar13;
  code *pcVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  code *pcVar18;
  undefined8 *puVar19;
  undefined *puVar20;
  long *plVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  long *plVar24;
  undefined8 *puVar25;
  undefined8 **ppuVar26;
  undefined8 **ppuVar27;
  long *plVar28;
  undefined1 auStack_230 [8];
  undefined1 auStack_228 [8];
  undefined8 *apuStack_220 [7];
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  long *plStack_1c0;
  undefined *puStack_1b8;
  undefined8 *puStack_1b0;
  code *pcStack_1a8;
  long *plStack_1a0;
  undefined8 **ppuStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined1 auStack_178 [8];
  undefined8 *apuStack_170 [7];
  long lStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  long *plStack_110;
  undefined *puStack_108;
  undefined8 **ppuStack_100;
  code *pcStack_f8;
  long *plStack_f0;
  undefined8 **ppuStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long lStack_b0;
  long *plStack_a8;
  undefined **ppuStack_a0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = &PTR_FUN_110c6ff18;
  param_1[1] = (undefined8 *)0x0;
  puVar5 = (undefined8 *)0x638;
  __Znwm();
  puStack_c8 = puVar5 + 2;
  puVar5[3] = 0;
  *puStack_c8 = 0;
  *puVar5 = &PTR_FUN_110c700c0;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puStack_d0 = puVar5 + 7;
  puVar5[8] = 0;
  *puStack_d0 = 0;
  *(undefined4 *)(puVar5 + 6) = 0x3f800000;
  puVar5[10] = 0;
  puVar5[9] = 0;
  *(undefined4 *)(puVar5 + 0xb) = 0x3f800000;
  *(undefined2 *)(puVar5 + 0xc) = 0;
  *(undefined1 *)((long)puVar5 + 0x62) = 0;
  puVar5[0xe] = 0;
  puVar5[0xd] = 0;
  puVar5[0x17] = 0;
  puVar5[0x16] = 0;
  puVar5[0x10] = 0;
  puVar5[0xf] = 0;
  puVar5[0x12] = 0;
  puVar5[0x11] = 0;
  *(undefined8 *)((long)puVar5 + 0x9a) = 0;
  *(undefined8 *)((long)puVar5 + 0x92) = 0;
  plVar21 = puVar5 + 0x15;
  *plVar21 = (long)(puVar5 + 0x16);
  puVar5[0x19] = 0;
  puVar22 = puVar5 + 0x1c;
  *puVar22 = 0;
  puVar5[0x1a] = 0;
  puVar5[0x18] = puVar5 + 0x19;
  puVar5[0x1b] = puVar22;
  puVar5[0x1f] = 0;
  puVar5[0x20] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x1e] = puVar5 + 0x1f;
  *(undefined2 *)((long)puVar5 + 0x10c) = 1;
  *(undefined1 *)((long)puVar5 + 0x10e) = 0;
  puVar5[0x23] = 0;
  puVar5[0x22] = 0;
  puVar5[0x25] = 0;
  puVar5[0x24] = 0;
  puVar5[0x27] = 0;
  puVar5[0x26] = 0;
  puVar5[0x29] = 0;
  puVar5[0x28] = 0;
  *(undefined1 *)(puVar5 + 0x2a) = 0;
  puVar5[0x2b] = param_1;
  puVar23 = puVar5 + 0x2c;
  *puVar23 = 0;
  puVar5[0x2d] = 0;
  FUN_10ad3da9c(puVar5 + 0x2e,param_1);
  puVar5[0x49] = &PTR_DAT_110c700f0;
  puVar5[0x4a] = 0;
  puVar5[0x4c] = 0;
  puVar5[0x4b] = 0;
  puVar5[0x4d] = 0x32aaaba7;
  *(undefined1 *)(puVar5 + 0xbd) = 0;
  _bzero(puVar5 + 0x4e,0x2c1);
  puVar5[0xc2] = 0;
  puVar5[0xc1] = 0;
  puVar5[0xc0] = 0;
  puVar5[0xbf] = 0;
  puVar5[0xbe] = 0;
  *(undefined4 *)(puVar5 + 0xc3) = 1;
  *(undefined8 *)((long)puVar5 + 0x624) = 0;
  *(undefined8 *)((long)puVar5 + 0x62c) = 0;
  *(undefined8 *)((long)puVar5 + 0x61c) = 0;
  *(undefined4 *)((long)puVar5 + 0x634) = 0;
  puVar5[1] = param_1;
  puVar6 = (undefined8 *)0x128;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  plVar28 = puVar6 + 3;
  *puVar6 = &PTR_FUN_110c70140;
  FUN_10a5b6d2c();
  plVar24 = (long *)puVar5[0x13];
  puVar5[0x12] = plVar28;
  puVar5[0x13] = puVar6;
  if (plVar24 != (long *)0x0) {
    plVar7 = plVar24 + 1;
    do {
      lVar16 = *plVar7;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plVar24 + 0x10))(plVar24);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar28 = plVar24;
    }
  }
  FUN_10a102184();
  lVar16 = plVar28[9];
  plVar24 = (long *)0xd0;
  __Znwm();
  plVar24[1] = 0;
  plVar24[2] = 0;
  *plVar24 = (long)&PTR_DAT_110ae90f0;
  plVar28 = plVar24 + 3;
  plStack_a8 = (long *)&UNK_1053a6a3c;
  ppuStack_a0 = &PTR_DAT_110ae9180;
  lStack_b0 = lVar16;
  func_0x000109d18d1c(plVar28,&UNK_10f6a7092,0x20,&lStack_b0);
  func_0x0001092ba41c(&lStack_b0);
  plStack_c0 = plVar28;
  plStack_b8 = plVar24;
  FUN_10ad44f04(puVar5 + 0xa4,&plStack_c0);
  plVar24 = plStack_b8;
  if (plStack_b8 != (long *)0x0) {
    plVar7 = plStack_b8 + 1;
    do {
      lVar16 = *plVar7;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
    }
  }
  FUN_10ad008d8(&lStack_b0);
  func_0x00010a21ba14(puVar5 + 0xbf,&lStack_b0);
  plVar7 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar1 = plStack_a8 + 1;
    do {
      lVar16 = *plVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = param_1[1];
  param_1[1] = puVar5;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
  puVar8 = (uint *)0x113834ef0;
  FUN_10a1c5e98();
  puVar5 = param_1[1];
  *(byte *)((long)puVar5 + 0x62) = (byte)(*puVar8 >> 0xe) & 1;
  puVar5[0x11] = 0x500000002d0;
  puVar6 = param_1[1];
  *(undefined4 *)(puVar6 + 0x21) = 0;
  puVar5 = (undefined8 *)0x30;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = &PTR_FUN_110c6e590;
  *puVar5 = &PTR_FUN_110c70190;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar6[0x5b] = puVar5 + 3;
  plVar7 = (long *)puVar6[0x5c];
  puVar6[0x5c] = puVar5;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar16 = *plVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  puVar20 = (undefined *)param_1[1][0x5b];
  plVar7 = (long *)param_1[1][0x5c];
  puVar5 = (undefined8 *)0x90;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_DAT_110c701e0;
  if (plVar7 == (long *)0x0) {
    puVar5[3] = &PTR_FUN_110c6e4d0;
    puVar5[4] = puVar20;
    puVar5[6] = 0;
    puVar5[5] = 0;
    puVar5[8] = 0;
    puVar5[7] = 0;
    *(undefined1 *)(puVar5 + 9) = 0;
    puVar5[10] = 0x32aaaba7;
    puVar5[0xc] = 0;
    puVar5[0xb] = 0;
    puVar5[0xe] = 0;
    puVar5[0xd] = 0;
    puVar5[0x10] = 0;
    puVar5[0xf] = 0;
    puVar5[0x11] = 0;
  }
  else {
    plVar1 = plVar7 + 1;
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar5[3] = &PTR_FUN_110c6e4d0;
    puVar5[4] = puVar20;
    puVar5[5] = plVar7;
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar5[6] = 0;
    puVar5[7] = 0;
    *(undefined1 *)(puVar5 + 9) = 0;
    puVar5[8] = 0;
    puVar5[10] = 0x32aaaba7;
    puVar5[0xc] = 0;
    puVar5[0xb] = 0;
    puVar5[0xe] = 0;
    puVar5[0xd] = 0;
    puVar5[0x10] = 0;
    puVar5[0xf] = 0;
    puVar5[0x11] = 0;
    do {
      lVar16 = *plVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  puVar6 = param_1[1];
  puVar6[0x5d] = puVar5 + 3;
  pcVar18 = (code *)puVar6[0x5e];
  puVar6[0x5e] = puVar5;
  if (pcVar18 != (code *)0x0) {
    pcVar13 = pcVar18 + 8;
    do {
      lVar16 = *(long *)pcVar13;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar13,0x10);
      if (bVar4) {
        *(long *)pcVar13 = lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*(long *)pcVar18 + 0x10))(pcVar18);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar18);
    }
  }
  puVar5 = param_1[1];
  uVar17 = puVar5[0x5d];
  lVar16 = puVar5[0x5e];
  if (lVar16 != 0) {
    plVar7 = (long *)(lVar16 + 8);
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar5[0x5f] = uVar17;
  plVar7 = (long *)puVar5[0x60];
  puVar5[0x60] = lVar16;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar16 = *plVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  uVar12 = 0;
  ppuVar9 = param_1;
  FUN_10ad3ef74();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  plVar7 = param_1[1];
  param_1[1] = (undefined8 *)0x0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))(plVar7);
  }
  ppuVar10 = ppuVar9;
  __Unwind_Resume();
  pcStack_d8 = FUN_10ad3ef74;
  puVar5 = ppuVar10[1];
  plStack_f0 = plVar7;
  ppuStack_e8 = param_1;
  puStack_e0 = &stack0xfffffffffffffff0;
  if (((uint)*(byte *)(puVar5 + 0x14) != (uVar12 & 0xff)) && ((bRam000000011330a9e8 >> 2 & 1) != 0))
  {
    ppuStack_100 = (undefined8 **)(ulong)(uVar12 & 0xff);
    func_0x00010ae06f08(1,4,&UNK_10f6a6c80,&UNK_10f6a6cb1,0x1f7,&UNK_10f6a6ce9);
    puVar5 = ppuVar10[1];
  }
  *(byte *)(puVar5 + 0x14) = (byte)uVar12;
  ppuVar10 = (undefined8 **)(puVar5 + 0x15);
  uVar15 = 0;
  plStack_128 = plVar24;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar19 = puVar5 + 0x16;
  puVar6 = *ppuVar10;
  pcVar13 = FUN_10a5ad6c4;
  plVar24 = plStack_f0;
  plStack_130 = plVar28;
  puStack_120 = puVar23;
  puStack_118 = puVar22;
  plStack_110 = plVar21;
  puStack_108 = puVar20;
  ppuStack_100 = ppuVar9;
  pcStack_f8 = pcVar18;
  if (puVar6 != puVar19) {
    plVar24 = (long *)0x0;
    puVar22 = (undefined8 *)0x0;
    puVar23 = (undefined8 *)0xa5ad6c4;
    puVar20 = &UNK_10f6a7264;
    do {
      plVar28 = (long *)0x1;
      plVar21 = puVar6 + 5;
      uVar15 = 0x1b;
      FUN_10a296138(auStack_178,*(undefined8 *)(*plVar21 + 0xf8),&UNK_10f6a7264);
      pcVar13 = (code *)(ulong)*(byte *)(puVar5 + 0x14);
      FUN_10a5ad6c4(*plVar21);
      FUN_10a044790(auStack_178);
      ppuVar10 = apuStack_170;
      (*(code *)*apuStack_170[0])();
      puVar3 = (undefined8 *)puVar6[1];
      puVar25 = puVar6;
      if ((undefined8 *)puVar6[1] == (undefined8 *)0x0) {
        do {
          puVar6 = (undefined8 *)puVar25[2];
          bVar4 = (undefined8 *)*puVar6 != puVar25;
          puVar25 = puVar6;
        } while (bVar4);
      }
      else {
        do {
          puVar6 = puVar3;
          puVar3 = (undefined8 *)*puVar6;
        } while ((undefined8 *)*puVar6 != (undefined8 *)0x0);
      }
      pcVar18 = FUN_10a5ad6c4;
    } while (puVar6 != puVar19);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return ppuVar10;
  }
  ___stack_chk_fail();
  ppuVar11 = ppuVar10;
  __Unwind_Resume();
  pcStack_188 = FUN_10ad47800;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar26 = (undefined8 **)*ppuVar11;
  ppuVar9 = ppuVar11;
  pcVar14 = pcVar13;
  plStack_1e0 = plVar28;
  puStack_1d8 = puVar6;
  puStack_1d0 = puVar23;
  puStack_1c8 = puVar22;
  plStack_1c0 = plVar21;
  puStack_1b8 = puVar20;
  puStack_1b0 = puVar19;
  pcStack_1a8 = pcVar18;
  plStack_1a0 = plVar24;
  ppuStack_198 = ppuVar10;
  ppuStack_190 = &puStack_e0;
  if (ppuVar26 != ppuVar11 + 1) {
    do {
      pcVar14 = (code *)&UNK_10f6a7264;
      FUN_10a296138(auStack_228,ppuVar26[5][0x1f],&UNK_10f6a7264,0x1b);
      pcVar18 = pcVar13;
      if ((uVar15 & 1) != 0) {
        pcVar18 = *(code **)(*(long *)((long)ppuVar26[5] + ((long)uVar15 >> 1)) +
                            ((ulong)pcVar13 & 0xffffffff));
      }
      (*pcVar18)((long)ppuVar26[5] + ((long)uVar15 >> 1));
      FUN_10a044790(auStack_228);
      ppuVar9 = apuStack_220;
      (*(code *)*apuStack_220[0])();
      ppuVar10 = (undefined8 **)ppuVar26[1];
      ppuVar27 = ppuVar26;
      if ((undefined8 **)ppuVar26[1] == (undefined8 **)0x0) {
        do {
          ppuVar26 = (undefined8 **)ppuVar27[2];
          bVar4 = (undefined8 **)*ppuVar26 != ppuVar27;
          ppuVar27 = ppuVar26;
        } while (bVar4);
      }
      else {
        do {
          ppuVar26 = ppuVar10;
          ppuVar10 = (undefined8 **)*ppuVar26;
        } while ((undefined8 **)*ppuVar26 != (undefined8 **)0x0);
      }
      ppuVar10 = ppuVar11;
    } while (ppuVar26 != ppuVar11 + 1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1e8) {
    ___stack_chk_fail();
    if ((int)pcVar14 != 0) {
      ___cxa_begin_catch(ppuVar9);
      FUN_10ad46b40(ppuVar10);
      __ZSt17current_exceptionv(auStack_230);
      __ZSt17rethrow_exceptionSt13exception_ptr(auStack_230);
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x10ad47970);
      (*pcVar18)();
    }
    __Unwind_Resume(ppuVar9);
    func_0x000104bd46a0();
    ppuVar10 = ppuVar9 + 1;
    FUN_10ad47a10();
    if (ppuVar10 != ppuVar9) {
      bVar4 = *(int *)pcVar14 < *(int *)(ppuVar9 + 4);
      if (*(int *)pcVar14 == *(int *)(ppuVar9 + 4)) {
        bVar4 = *(int *)(pcVar14 + 4) != *(int *)((long)ppuVar9 + 0x24) &&
                *(int *)(pcVar14 + 4) < *(int *)((long)ppuVar9 + 0x24);
      }
      if (!bVar4) {
        return ppuVar9;
      }
    }
    return ppuVar10;
  }
  return ppuVar9;
}



/* Entry: 10ad3ef74; end: 10ad3f05b;  */

/* WARNING: Removing unreachable block (ram,0x00010ad4772c) */

void FUN_10ad3ef74(long param_1,byte param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 **ppuVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  int iVar6;
  code *pcVar7;
  code *pcVar8;
  ulong uVar9;
  long lVar10;
  code *pcVar11;
  undefined8 unaff_x20;
  code *unaff_x21;
  undefined8 *puVar12;
  undefined *unaff_x23;
  long *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 **ppuVar15;
  undefined8 **ppuVar16;
  undefined8 unaff_x28;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  undefined8 *apuStack_150 [7];
  long lStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 **ppuStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 auStack_a8 [8];
  undefined8 *apuStack_a0 [7];
  long lStack_68;
  
  lVar10 = *(long *)(param_1 + 8);
  if ((*(byte *)(lVar10 + 0xa0) != param_2) && ((bRam000000011330a9e8 >> 2 & 1) != 0)) {
    func_0x00010ae06f08(1,4,&UNK_10f6a6c80,&UNK_10f6a6cb1,0x1f7,&UNK_10f6a6ce9);
    lVar10 = *(long *)(param_1 + 8);
  }
  *(byte *)(lVar10 + 0xa0) = param_2;
  ppuVar3 = (undefined8 **)(lVar10 + 0xa8);
  uVar9 = 0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = (undefined8 *)(lVar10 + 0xb0);
  puVar13 = *ppuVar3;
  pcVar7 = FUN_10a5ad6c4;
  if (puVar13 != puVar12) {
    unaff_x20 = 0;
    unaff_x25 = 0;
    unaff_x26 = 0xa5ad6c4;
    unaff_x23 = &UNK_10f6a7264;
    do {
      unaff_x28 = 1;
      unaff_x24 = puVar13 + 5;
      uVar9 = 0x1b;
      FUN_10a296138(auStack_a8,*(undefined8 *)(*unaff_x24 + 0xf8),&UNK_10f6a7264);
      pcVar7 = (code *)(ulong)*(byte *)(lVar10 + 0xa0);
      FUN_10a5ad6c4(*unaff_x24);
      FUN_10a044790(auStack_a8);
      ppuVar3 = apuStack_a0;
      (*(code *)*apuStack_a0[0])();
      puVar1 = (undefined8 *)puVar13[1];
      puVar14 = puVar13;
      if ((undefined8 *)puVar13[1] == (undefined8 *)0x0) {
        do {
          puVar13 = (undefined8 *)puVar14[2];
          bVar2 = (undefined8 *)*puVar13 != puVar14;
          puVar14 = puVar13;
        } while (bVar2);
      }
      else {
        do {
          puVar13 = puVar1;
          puVar1 = (undefined8 *)*puVar13;
        } while ((undefined8 *)*puVar13 != (undefined8 *)0x0);
      }
      unaff_x21 = FUN_10a5ad6c4;
    } while (puVar13 != puVar12);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  ppuVar4 = ppuVar3;
  __Unwind_Resume();
  pcStack_b8 = FUN_10ad47800;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar15 = (undefined8 **)*ppuVar4;
  ppuVar5 = ppuVar4;
  pcVar8 = pcVar7;
  uStack_110 = unaff_x28;
  puStack_108 = puVar13;
  uStack_100 = unaff_x26;
  uStack_f8 = unaff_x25;
  plStack_f0 = unaff_x24;
  puStack_e8 = unaff_x23;
  puStack_e0 = puVar12;
  pcStack_d8 = unaff_x21;
  uStack_d0 = unaff_x20;
  ppuStack_c8 = ppuVar3;
  puStack_c0 = &stack0xfffffffffffffff0;
  if (ppuVar15 != ppuVar4 + 1) {
    do {
      pcVar8 = (code *)&UNK_10f6a7264;
      FUN_10a296138(auStack_158,ppuVar15[5][0x1f],&UNK_10f6a7264,0x1b);
      pcVar11 = pcVar7;
      if ((uVar9 & 1) != 0) {
        pcVar11 = *(code **)(*(long *)((long)ppuVar15[5] + ((long)uVar9 >> 1)) +
                            ((ulong)pcVar7 & 0xffffffff));
      }
      (*pcVar11)((long)ppuVar15[5] + ((long)uVar9 >> 1));
      FUN_10a044790(auStack_158);
      ppuVar5 = apuStack_150;
      (*(code *)*apuStack_150[0])();
      ppuVar3 = (undefined8 **)ppuVar15[1];
      ppuVar16 = ppuVar15;
      if ((undefined8 **)ppuVar15[1] == (undefined8 **)0x0) {
        do {
          ppuVar15 = (undefined8 **)ppuVar16[2];
          bVar2 = (undefined8 **)*ppuVar15 != ppuVar16;
          ppuVar16 = ppuVar15;
        } while (bVar2);
      }
      else {
        do {
          ppuVar15 = ppuVar3;
          ppuVar3 = (undefined8 **)*ppuVar15;
        } while ((undefined8 **)*ppuVar15 != (undefined8 **)0x0);
      }
      ppuVar3 = ppuVar4;
    } while (ppuVar15 != ppuVar4 + 1);
  }
  iVar6 = (int)pcVar8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
    ___stack_chk_fail();
    if (iVar6 == 0) {
      __Unwind_Resume(ppuVar5);
      func_0x000104bd46a0();
      FUN_10ad47a10();
      return;
    }
    ___cxa_begin_catch(ppuVar5);
    FUN_10ad46b40(ppuVar3);
    __ZSt17current_exceptionv(auStack_160);
    __ZSt17rethrow_exceptionSt13exception_ptr(auStack_160);
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10ad47970);
    (*pcVar7)();
  }
  return;
}



/* Entry: 10ad3f05c; end: 10ad3f05f;  */

undefined8 * FUN_10ad3f05c(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110c6ff18;
  FUN_10ad46bb8(param_1[1] + 0xa8);
  FUN_10ad46bb8(param_1[1] + 0xd8);
  plVar1 = (long *)param_1[1];
  param_1[1] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return param_1;
}



/* Entry: 10ad3f060; end: 10ad3f073;  */

void FUN_10ad3f060(void)

{
  func_0x00010ad3f000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad3f074; end: 10ad3f0d7;  */

void FUN_10ad3f074(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lStack_40;
  undefined8 uStack_38;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  puStack_30 = &uStack_28;
  lStack_40 = param_2;
  uStack_38 = param_3;
  uStack_28 = param_4;
  FUN_10ad3f0d8(param_1,*(undefined8 *)(param_2 + 8),&lStack_40);
  FUN_10ad47df4(*(long *)(param_2 + 8) + 0x158);
  return;
}



/* Entry: 10ad3f0d8; end: 10ad3f6ef;  */

void FUN_10ad3f0d8(undefined8 param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined1 auStack_2b8 [8];
  long *plStack_2b0;
  long *plStack_2a0;
  long *plStack_290;
  long *plStack_278;
  long *plStack_260;
  long *plStack_250;
  char cStack_238;
  long *plStack_228;
  char cStack_210;
  undefined1 auStack_208 [424];
  undefined8 uStack_60;
  
  lVar8 = *param_3;
  FUN_10a13299c(auStack_2b8,&UNK_10f6a702a);
  plVar9 = (long *)param_3[1];
  lVar7 = *plVar9;
  if (lVar7 == 0) goto LAB_10ad3f278;
  if (*(long *)(lVar7 + 8) == 0) {
    puVar5 = (undefined8 *)(*(long *)(lVar7 + 0x10) + 0x10);
  }
  else {
    puVar5 = (undefined8 *)(*(long *)(lVar7 + 8) + 8);
  }
  plVar10 = (long *)*puVar5;
  plVar9 = plVar10;
  (**(code **)(*plVar10 + 0x28))();
  (**(code **)(*plVar10 + 0x30))();
  uVar11 = (uint)plVar9;
  if (uVar11 < 2) {
    uVar11 = 1;
  }
  uVar3 = (uint)plVar10;
  if (uVar3 < 2) {
    uVar3 = 1;
  }
  lVar7 = *(long *)(lVar8 + 8);
  if (*(uint *)(lVar7 + 0x88) == uVar11 && *(uint *)(lVar7 + 0x8c) == uVar3) {
    if ((((bRam00000001138367d0 & 1) == 0) && ((*(byte *)(lVar7 + 0x62) & 1) == 0)) &&
       (*(long *)(lVar7 + 0x68) == 0)) goto LAB_10ad3f20c;
  }
  else {
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      func_0x00010ae06f08(1,4,&UNK_10f6a6c80,&UNK_10f6a6dde,0x5f6,&UNK_10f6a6e13,in_x6,in_x7,
                          *(uint *)(lVar7 + 0x88),*(uint *)(lVar7 + 0x8c),uVar11,uVar3);
      lVar7 = *(long *)(lVar8 + 8);
    }
    *(ulong *)(lVar7 + 0x88) = CONCAT44(uVar3,uVar11);
    FUN_10a30f97c();
    FUN_10a3103d8();
    if (((bRam00000001138367d0 & 1) == 0) &&
       (lVar7 = *(long *)(lVar8 + 8), (*(byte *)(lVar7 + 0x62) & 1) == 0)) {
LAB_10ad3f20c:
      uVar4 = (ulong)*(uint *)(lVar7 + 0x88);
      FUN_10a301918(uVar4,*(undefined4 *)(lVar7 + 0x8c),0);
      lVar7 = *(long *)(lVar8 + 8);
      puVar5 = (undefined8 *)0x20;
      __Znwm();
      *puVar5 = &PTR_FUN_110ba08f8;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = uVar4;
      plVar9 = *(long **)(lVar7 + 0x70);
      *(ulong *)(lVar7 + 0x68) = uVar4;
      *(undefined8 **)(lVar7 + 0x70) = puVar5;
      if (plVar9 != (long *)0x0) {
        plVar10 = plVar9 + 1;
        do {
          lVar7 = *plVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar2) {
            *plVar10 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
    }
  }
  plVar9 = (long *)param_3[1];
LAB_10ad3f278:
  puVar6 = (undefined4 *)plVar9[10];
  FUN_10a320ac0(puVar6,0);
  lVar7 = *(long *)(lVar8 + 8);
  *(undefined4 *)(lVar7 + 0x108) = *puVar6;
  FUN_10a228c00(lVar7 + 0x110,plVar9 + 10);
  FUN_10a144868(auStack_2b8);
  FUN_10ad41150(lVar8,*(undefined8 *)(param_3[1] + 0x50));
  lVar7 = param_3[1];
  uVar12 = *(undefined8 *)param_3[2];
  FUN_10ad4519c(auStack_2b8,lVar7);
  uStack_60 = uVar12;
  FUN_10ad45110(auStack_2b8,lVar7);
  FUN_10ad42100(param_1,lVar8,auStack_2b8);
  FUN_10a22b938(auStack_208);
  if ((cStack_210 == '\x01') && (plStack_228 != (long *)0x0)) {
    plVar9 = plStack_228 + 1;
    do {
      lVar7 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_228 + 0x10))(plStack_228);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_228);
    }
  }
  if ((cStack_238 == '\x01') && (plStack_250 != (long *)0x0)) {
    plVar9 = plStack_250 + 1;
    do {
      lVar7 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_250 + 0x10))(plStack_250);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_250);
    }
  }
  if (plStack_260 != (long *)0x0) {
    plVar9 = plStack_260 + 1;
    do {
      lVar7 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_260 + 0x10))(plStack_260);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_260);
    }
  }
  if (plStack_278 != (long *)0x0) {
    plVar9 = plStack_278 + 1;
    do {
      lVar7 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_278 + 0x10))(plStack_278);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_278);
    }
  }
  if (plStack_290 != (long *)0x0) {
    plVar9 = plStack_290 + 1;
    do {
      lVar7 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_290 + 0x10))(plStack_290);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_290);
    }
  }
  if (plStack_2a0 != (long *)0x0) {
    plVar9 = plStack_2a0 + 1;
    do {
      lVar7 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_2a0 + 0x10))(plStack_2a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_2a0);
    }
  }
  if (plStack_2b0 != (long *)0x0) {
    plVar9 = plStack_2b0 + 1;
    do {
      lVar7 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_2b0 + 0x10))(plStack_2b0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_2b0);
    }
  }
  return;
}



/* Entry: 10ad3f6f0; end: 10ad3f773;  */

undefined8 FUN_10ad3f6f0(long param_1)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  lVar4 = *(long *)(param_1 + 8);
  plVar5 = *(long **)(lVar4 + 0xa8);
  while( true ) {
    if (plVar5 == (long *)(lVar4 + 0xb0)) {
      return 0;
    }
    uVar3 = plVar5[5];
    if (((*(byte *)(uVar3 + 0x157) & 1) == 0) && (FUN_10a5ad828(), (uVar3 & 1) != 0)) break;
    plVar1 = (long *)plVar5[1];
    plVar6 = plVar5;
    if ((long *)plVar5[1] == (long *)0x0) {
      do {
        plVar5 = (long *)plVar6[2];
        bVar2 = (long *)*plVar5 != plVar6;
        plVar6 = plVar5;
      } while (bVar2);
    }
    else {
      do {
        plVar5 = plVar1;
        plVar1 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
  }
  return 1;
}



/* Entry: 10ad3f774; end: 10ad3f843;  */

void FUN_10ad3f774(undefined8 *param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10ad3f844(param_1,*(undefined8 *)(*(long *)(param_2 + 8) + 0xb8));
  plVar3 = *(long **)(*(long *)(param_2 + 8) + 0xa8);
  if (plVar3 != (long *)(*(long *)(param_2 + 8) + 0xb0)) {
    do {
      lStack_38 = plVar3[5];
      func_0x00010ad3f8d0(param_1,&lStack_38);
      plVar1 = (long *)plVar3[1];
      plVar4 = plVar3;
      if ((long *)plVar3[1] == (long *)0x0) {
        do {
          plVar3 = (long *)plVar4[2];
          bVar2 = (long *)*plVar3 != plVar4;
          plVar4 = plVar3;
        } while (bVar2);
      }
      else {
        do {
          plVar3 = plVar1;
          plVar1 = (long *)*plVar3;
        } while ((long *)*plVar3 != (long *)0x0);
      }
    } while (plVar3 != (long *)(*(long *)(param_2 + 8) + 0xb0));
  }
  return;
}



/* Entry: 10ad3f844; end: 10ad3f993;  */

long * FUN_10ad3f844(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long *plStack_98;
  
  lVar8 = *param_1;
  if (param_2 <= (undefined8 *)(param_1[2] - lVar8 >> 3)) {
    return param_1;
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar10 = param_1[1];
    plVar7 = param_1;
    FUN_10ad4549c();
    lVar8 = (long)plVar7 + (lVar10 - lVar8);
    lVar10 = lVar8 - (param_1[1] - *param_1);
    _memcpy(lVar10);
    plVar6 = (long *)*param_1;
    *param_1 = lVar10;
    param_1[1] = lVar8;
    param_1[2] = (long)(plVar7 + (long)param_2);
    if (plVar6 == (long *)0x0) {
      return (long *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return plVar6;
  }
  FUN_10ad45488();
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 < (undefined8 *)param_1[2]) {
    puVar12 = puVar3 + 1;
    *puVar3 = *param_2;
    plVar7 = param_1;
LAB_10ad3f97c:
    param_1[1] = (long)puVar12;
    return plVar7;
  }
  lVar8 = (long)puVar3 - *param_1;
  uVar1 = (lVar8 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar9 = param_1[2] - *param_1;
    uVar11 = (long)uVar9 >> 2;
    if (uVar11 <= uVar1) {
      uVar11 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar9) {
      uVar11 = 0x1fffffffffffffff;
    }
    plVar6 = param_1;
    FUN_10ad4549c();
    puVar3 = (undefined8 *)((long)plVar6 + lVar8);
    puVar12 = puVar3 + 1;
    *puVar3 = *param_2;
    lVar8 = (long)puVar3 - (param_1[1] - *param_1);
    _memcpy(lVar8);
    plVar7 = (long *)*param_1;
    *param_1 = lVar8;
    param_1[1] = (long)puVar12;
    param_1[2] = (long)(plVar6 + uVar11);
    if (plVar7 != (long *)0x0) {
      __ZdlPv();
    }
    goto LAB_10ad3f97c;
  }
  FUN_10ad45488();
  lVar10 = param_1[1];
  lVar8 = lVar10 + 0xf0;
  FUN_10ad47d78();
  if (lVar10 + 0xf8 == lVar8) {
    plStack_98 = (long *)0x0;
  }
  else {
    plVar7 = *(long **)(lVar8 + 0x38);
    plStack_98 = *(long **)(lVar8 + 0x40);
    if (plStack_98 != (long *)0x0) {
      plVar6 = plStack_98 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar5) {
          *plVar6 = *plVar6 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (plVar7 != (long *)0x0) goto LAB_10ad3fa60;
  }
  lVar10 = param_1[1];
  lVar8 = lVar10 + 0xc0;
  FUN_10ad47d78(lVar8,param_2);
  if (lVar10 + 200 == lVar8) {
    plVar7 = (long *)0x0;
  }
  else {
    plVar7 = *(long **)(lVar8 + 0x38);
    plVar6 = *(long **)(lVar8 + 0x40);
    if (plVar6 != (long *)0x0) {
      plVar2 = plVar6 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = *plVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
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
  }
LAB_10ad3fa60:
  if (plStack_98 != (long *)0x0) {
    plVar6 = plStack_98 + 1;
    do {
      lVar8 = *plVar6;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_98);
    }
  }
  return plVar7;
}



/* Entry: 10ad3f994; end: 10ad3fac3;  */

long FUN_10ad3f994(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_38;
  
  lVar6 = *(long *)(param_1 + 8);
  lVar5 = lVar6 + 0xf0;
  FUN_10ad47d78();
  if (lVar6 + 0xf8 == lVar5) {
    plStack_38 = (long *)0x0;
  }
  else {
    lVar6 = *(long *)(lVar5 + 0x38);
    plStack_38 = *(long **)(lVar5 + 0x40);
    if (plStack_38 != (long *)0x0) {
      plVar2 = plStack_38 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (lVar6 != 0) goto LAB_10ad3fa60;
  }
  lVar6 = *(long *)(param_1 + 8);
  lVar5 = lVar6 + 0xc0;
  FUN_10ad47d78(lVar5,param_2);
  if (lVar6 + 200 == lVar5) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(lVar5 + 0x38);
    plVar2 = *(long **)(lVar5 + 0x40);
    if (plVar2 != (long *)0x0) {
      plVar1 = plVar2 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        lVar5 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
  }
LAB_10ad3fa60:
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return lVar6;
}


