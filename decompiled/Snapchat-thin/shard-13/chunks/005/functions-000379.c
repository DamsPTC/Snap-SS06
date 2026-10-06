/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a854800; end: 10a85496f;  */

void FUN_10a854800(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
    plVar4 = *(long **)(param_1 + 0x48);
    if (plVar4 == (long *)0x0) goto LAB_10a854954;
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
    if ((uVar5 & 0x1fffffffc) != 4) goto LAB_10a854954;
    (**(code **)(*plVar4 + 0x10))(plVar4);
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
    plVar4 = *(long **)(param_1 + 0x70);
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
    plVar4 = *(long **)(param_1 + 0x78);
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
    if (plVar4 == (long *)0x0) goto LAB_10a854954;
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
    if ((uVar5 & 0x1fffffffc) != 4) goto LAB_10a854954;
    (**(code **)(*plVar4 + 0x10))(plVar4);
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
    (**(code **)(*plVar4 + 8))(plVar4);
  }
LAB_10a854954:
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a854970; end: 10a854c5b;  */

void FUN_10a854970(long param_1)

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
    FUN_10a836254(param_1 + 0x60,param_1 + 0x58);
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
  lVar8 = *(long *)(param_1 + 0x48);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar8 + 0xb8) & 1) != 0) {
      FUN_10a836180(param_1 + 0x10,lVar8 + 0x98);
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
      plVar5 = *(long **)(param_1 + 0x58);
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
  }
  else {
    func_0x0001092af97c(lVar8 + 0x90);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a854b58);
  (*pcVar4)();
}



/* Entry: 10a854c5c; end: 10a854d63;  */

void FUN_10a854c5c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if ((*(byte *)(param_1 + 0x68) & 1) != 0) {
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
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a854d64; end: 10a855287;  */

void FUN_10a854d64(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  double dStack_50;
  long lStack_48;
  undefined8 uStack_40;
  
  if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
    lVar9 = *(long *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x50);
    lVar7 = *(long *)(lVar9 + 0x58);
    if (lVar7 == 0) {
      FUN_10a81b94c(lVar9);
      lVar7 = *(long *)(lVar9 + 0x58);
    }
    lVar7 = *(long *)(lVar7 + 0x10);
    *(long *)(param_1 + 0x50) = lVar7;
    if (lVar7 == 0) {
      uVar6 = 0;
    }
    else {
      plVar5 = (long *)(lVar7 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uVar6 = *(undefined8 *)(param_1 + 0x50);
    }
    FUN_10a8352a4(param_1 + 0x58,param_1 + 0x48,uVar6);
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x58);
    plVar5 = (long *)(*(long *)(param_1 + 0x58) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x70) = 1;
      lVar7 = *(long *)(param_1 + 0x60);
      plVar5 = (long *)(lVar7 + 0x10);
      uVar6 = *(undefined8 *)(param_1 + 0x18);
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
            dStack_50 = 0.0;
            lStack_48 = param_1;
            uStack_40 = uVar6;
            func_0x000109d1b588(lVar7 + 0x18,&dStack_50);
            *(undefined8 *)(lVar7 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar9 >> 1 & 1) == 0);
    }
  }
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10);
  plVar5 = *(long **)(param_1 + 0x60);
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
  if (((uint)uVar6 >> 5 & 1) == 0) {
    func_0x0001092af8bc(param_1 + 0x58);
    lVar7 = *(long *)(param_1 + 0x58);
    if ((*(byte *)(lVar7 + 0x1b8) & 1) == 0) {
LAB_10a855084:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a855088);
      (*pcVar4)();
    }
    if ((*(double *)(lVar7 + 0xb0) != 0.0) || (*(double *)(lVar7 + 0xb8) != 0.0)) {
      lStack_48 = *(undefined8 *)(lVar7 + 0xb8);
      dStack_50 = *(double *)(lVar7 + 0xb0);
      uStack_40 = *(undefined8 *)(lVar7 + 0xc0);
      func_0x00010a8358bc(param_1 + 0x10,&dStack_50);
      goto LAB_10a854f3c;
    }
  }
  else {
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 1 & 1) == 0) {
      __ZNSt13exception_ptrC1ERKS_(&dStack_50,*(long *)(param_1 + 0x50) + 0x90);
      func_0x0001092af97c(&dStack_50);
      goto LAB_10a855084;
    }
    if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
      func_0x00010ae06f08(1,8,&UNK_10f67aaab,&UNK_10f67c07a,0x184,&UNK_10f67c0ee);
    }
  }
  func_0x00010a835824(param_1 + 0x10);
LAB_10a854f3c:
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
  plVar5 = *(long **)(param_1 + 0x48);
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
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
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
  __ZdlPv(param_1);
  return;
}



/* Entry: 10a855288; end: 10a85543f;  */

void FUN_10a855288(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
    plVar4 = *(long **)(param_1 + 0x50);
    if (plVar4 == (long *)0x0) goto LAB_10a855424;
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
    if ((uVar5 & 0x1fffffffc) != 4) goto LAB_10a855424;
    (**(code **)(*plVar4 + 0x10))(plVar4);
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
    plVar4 = *(long **)(param_1 + 0x48);
    if (plVar4 == (long *)0x0) goto LAB_10a855424;
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
    if ((uVar5 & 0x1fffffffc) != 4) goto LAB_10a855424;
    (**(code **)(*plVar4 + 0x10))(plVar4);
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
    (**(code **)(*plVar4 + 8))(plVar4);
  }
LAB_10a855424:
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a855440; end: 10a85569b;  */

void FUN_10a855440(long param_1)

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
    FUN_10a834b9c(param_1 + 0x60,*(undefined8 *)(param_1 + 0x58));
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
  lVar8 = *(long *)(param_1 + 0x48);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar8 + 0xb8) & 1) != 0) {
      func_0x00010a834af0(param_1 + 0x10,lVar8 + 0x98);
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
      func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(param_1);
      return;
    }
  }
  else {
    func_0x0001092af97c(lVar8 + 0x90);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a8555e0);
  (*pcVar4)();
}



/* Entry: 10a85569c; end: 10a85575f;  */

void FUN_10a85569c(long param_1)

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



/* Entry: 10a855760; end: 10a855c07;  */

void FUN_10a855760(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  if ((*(byte *)(param_1 + 0x158) & 1) == 0) {
    *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_1 + 0x140);
    FUN_10a820f74(param_1 + 0x148,param_1 + 0x138,*(undefined8 *)(*(long *)(param_1 + 0x150) + 0x18)
                 );
    *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x148);
    plVar6 = (long *)(*(long *)(param_1 + 0x148) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x140) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x158) = 1;
      lVar9 = *(long *)(param_1 + 0x140);
      plVar6 = (long *)(lVar9 + 0x10);
      uStack_38 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar8 = *plVar6;
        if (lVar8 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            uStack_48 = 0;
            lStack_40 = param_1;
            func_0x000109d1b588(lVar9 + 0x18,&uStack_48);
            *(undefined8 *)(lVar9 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar8 >> 1 & 1) == 0);
    }
  }
  lVar9 = *(long *)(param_1 + 0x140);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x140) + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar9 + 0xb0) & 1) != 0) {
      FUN_10a820f34(param_1 + 0x10,lVar9 + 0x98);
      plVar6 = *(long **)(param_1 + 0x140);
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
      plVar6 = *(long **)(param_1 + 0x148);
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
      plVar6 = *(long **)(param_1 + 0x138);
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
          (**(code **)(*plVar6 + 0x10))(plVar6);
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
            (**(code **)(*plVar6 + 8))(plVar6);
          }
        }
      }
      plVar6 = *(long **)(param_1 + 0xd8);
      if (plVar6 != (long *)0x0) {
        plVar2 = plVar6 + 1;
        do {
          lVar9 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      if (*(long *)(param_1 + 200) != 0) {
        func_0x0001092b4274(param_1 + 200);
      }
      plVar6 = *(long **)(param_1 + 0x128);
      if (plVar6 != (long *)0x0) {
        plVar2 = plVar6 + 1;
        do {
          lVar9 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      (*(code *)**(undefined8 **)(param_1 + 0x90))();
      (*(code *)**(undefined8 **)(param_1 + 0x50))((undefined8 *)(param_1 + 0x50));
      if (*(long *)(param_1 + 0x130) != 0) {
        func_0x0001092b4274(param_1 + 0x130);
      }
      plVar6 = *(long **)(param_1 + 0xf8);
      if (plVar6 != (long *)0x0) {
        plVar2 = plVar6 + 1;
        do {
          lVar9 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      plVar6 = *(long **)(param_1 + 0xe8);
      if (plVar6 != (long *)0x0) {
        plVar2 = plVar6 + 1;
        do {
          lVar9 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(param_1);
      return;
    }
  }
  else {
    func_0x0001092af97c(lVar9 + 0x90);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a855a9c);
  (*pcVar5)();
}



/* Entry: 10a855c08; end: 10a855e9b;  */

void FUN_10a855c08(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  
  plVar7 = *(long **)(param_1 + 0x140);
  if ((*(byte *)(param_1 + 0x158) & 1) == 0) {
    if (plVar7 == (long *)0x0) goto LAB_10a855d5c;
    puVar1 = (ulong *)(plVar7 + 1);
    do {
      uVar5 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar5 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar5 & 0x1fffffffc) != 4) goto LAB_10a855d5c;
    (**(code **)(*plVar7 + 0x10))(plVar7);
    do {
      uVar5 = *puVar1 - 1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    if (plVar7 != (long *)0x0) {
      puVar1 = (ulong *)(plVar7 + 1);
      do {
        uVar5 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar5 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar5 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar7 + 8))(plVar7);
        }
      }
    }
    plVar7 = *(long **)(param_1 + 0x148);
    if (plVar7 != (long *)0x0) {
      puVar1 = (ulong *)(plVar7 + 1);
      do {
        uVar5 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar5 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar5 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    plVar7 = *(long **)(param_1 + 0x138);
    if (plVar7 == (long *)0x0) goto LAB_10a855d5c;
    puVar1 = (ulong *)(plVar7 + 1);
    do {
      uVar5 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar5 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar5 & 0x1fffffffc) != 4) goto LAB_10a855d5c;
    (**(code **)(*plVar7 + 0x10))(plVar7);
    do {
      uVar5 = *puVar1 - 1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (uVar5 == 0) {
    (**(code **)(*plVar7 + 8))(plVar7);
  }
LAB_10a855d5c:
  plVar7 = *(long **)(param_1 + 0xd8);
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if (*(long *)(param_1 + 200) != 0) {
    func_0x0001092b4274(param_1 + 200);
  }
  plVar7 = *(long **)(param_1 + 0x128);
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  (*(code *)**(undefined8 **)(param_1 + 0x90))();
  (*(code *)**(undefined8 **)(param_1 + 0x50))((undefined8 *)(param_1 + 0x50));
  if (*(long *)(param_1 + 0x130) != 0) {
    func_0x0001092b4274(param_1 + 0x130);
  }
  plVar7 = *(long **)(param_1 + 0xf8);
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = *(long **)(param_1 + 0xe8);
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a855e9c; end: 10a8563bf;  */

/* WARNING: Removing unreachable block (ram,0x00010a8560b0) */
/* WARNING: Removing unreachable block (ram,0x00010a855f84) */

void FUN_10a855e9c(long param_1)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  if (*(char *)(param_1 + 0xe4) == '\x02') {
LAB_10a8560c8:
    lVar8 = *(long *)(param_1 + 0xc0);
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x10) >> 5 & 1) == 0) {
      if ((*(byte *)(lVar8 + 0xb0) & 1) != 0) {
        FUN_10a820f34(param_1 + 0x10,lVar8 + 0x98);
        plVar6 = *(long **)(param_1 + 0xc0);
        if (plVar6 != (long *)0x0) {
          puVar1 = (ulong *)(plVar6 + 1);
          do {
            uVar9 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar9 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar9 & 0x1fffffffc) == 4) {
            do {
              uVar9 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar9 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar9 - 1 == 0) {
              (**(code **)(*plVar6 + 8))();
            }
          }
        }
        plVar6 = *(long **)(param_1 + 200);
        if (plVar6 != (long *)0x0) {
          puVar1 = (ulong *)(plVar6 + 1);
          do {
            uVar9 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar9 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar9 & 0x1fffffffc) == 4) {
            do {
              uVar9 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar9 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar9 - 1 == 0) {
              (**(code **)(*plVar6 + 8))();
            }
          }
        }
        FUN_10ae0f5dc(param_1 + 0x48);
        plVar6 = *(long **)(param_1 + 0xb8);
        if (plVar6 != (long *)0x0) {
          plVar11 = plVar6 + 1;
          do {
            lVar8 = *plVar11;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *plVar11 = lVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
        func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(param_1);
        return;
      }
    }
    else {
      func_0x0001092af97c(lVar8 + 0x90);
    }
  }
  else {
    if (*(char *)(param_1 + 0xe4) != '\x01') {
      plVar6 = *(long **)(param_1 + 0x48);
      if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 5 & 1) != 0) {
        func_0x0001092af97c(plVar6 + 0x12);
        goto LAB_10a856254;
      }
      if ((*(byte *)((long)plVar6 + 0x9c) & 1) == 0) goto LAB_10a856254;
      plVar11 = *(long **)(param_1 + 0xd0);
      *(int *)(param_1 + 0xe0) = (int)plVar6[0x13];
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar9 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar9 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar9 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
      lVar8 = *plVar11;
      *(long *)(param_1 + 0x48) = lVar8;
      plVar6 = (long *)(lVar8 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 1 & 1) == 0) {
        *(undefined1 *)(param_1 + 0xe4) = 1;
        lVar8 = *(long *)(param_1 + 0x48);
        plVar6 = (long *)(lVar8 + 0x10);
        uStack_38 = *(undefined8 *)(param_1 + 0x18);
        do {
          lVar10 = *plVar6;
          if (lVar10 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar4) {
              *plVar6 = 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_10a85620c;
          }
          else {
            ClearExclusiveLocal();
          }
        } while (((uint)lVar10 >> 1 & 1) == 0);
      }
    }
    plVar6 = *(long **)(param_1 + 0x48);
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(plVar6 + 0x12);
      goto LAB_10a856254;
    }
    if ((*(byte *)((long)plVar6 + 0x9c) & 1) == 0) goto LAB_10a856254;
    lVar10 = *(long *)(param_1 + 0xd0);
    lVar8 = plVar6[0x13];
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar9 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar9 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar9 & 0x1fffffffc) == 4) {
      do {
        uVar9 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar9 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar9 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    lVar7 = *(long *)(lVar10 + 0x20);
    if (lVar7 != 0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      *(long *)(param_1 + 0xb8) = lVar7;
      if (lVar7 == 0) {
        lVar10 = *(long *)(param_1 + 0xb0);
      }
      else {
        lVar10 = *(long *)(lVar10 + 0x18);
        *(long *)(param_1 + 0xb0) = lVar10;
      }
      if (lVar10 != 0) {
        iVar2 = *(int *)(*(long *)(param_1 + 0xd0) + 0x10) + *(int *)(param_1 + 0xe0) * 0x100;
        FUN_10a821ff4(param_1 + 0x48,*(undefined8 *)(param_1 + 0xd8),iVar2);
        FUN_10a81f940(param_1 + 200,*(undefined8 *)(param_1 + 0xd8),param_1 + 0x48,iVar2,(int)lVar8)
        ;
        *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 200);
        plVar6 = (long *)(*(long *)(param_1 + 200) + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = *plVar6 + 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (((uint)*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x10) >> 1 & 1) == 0) {
          *(undefined1 *)(param_1 + 0xe4) = 2;
          lVar8 = *(long *)(param_1 + 0xc0);
          plVar6 = (long *)(lVar8 + 0x10);
          uStack_38 = *(undefined8 *)(param_1 + 0x18);
          do {
            lVar10 = *plVar6;
            if (lVar10 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar4) {
                *plVar6 = 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
LAB_10a85620c:
                uStack_48 = 0;
                lStack_40 = param_1;
                func_0x000109d1b588(lVar8 + 0x18,&uStack_48);
                *(undefined8 *)(lVar8 + 0x10) = 0;
                return;
              }
            }
            else {
              ClearExclusiveLocal();
            }
          } while (((uint)lVar10 >> 1 & 1) == 0);
        }
        goto LAB_10a8560c8;
      }
    }
    FUN_10a00946c(&UNK_10f67c3da);
  }
LAB_10a856254:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a856258);
  (*pcVar5)();
}



/* Entry: 10a8563c0; end: 10a856523;  */

void FUN_10a8563c0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0xe4) == '\x02') {
    plVar4 = *(long **)(param_1 + 0xc0);
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
    plVar4 = *(long **)(param_1 + 200);
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
    FUN_10ae0f5dc(param_1 + 0x48);
    FUN_10a84a7d0(param_1 + 0xb0);
    goto LAB_10a85650c;
  }
  if (*(char *)(param_1 + 0xe4) == '\x01') {
    plVar4 = *(long **)(param_1 + 0x48);
    if (plVar4 == (long *)0x0) goto LAB_10a85650c;
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
    if ((uVar5 & 0x1fffffffc) != 4) goto LAB_10a85650c;
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
    plVar4 = *(long **)(param_1 + 0x48);
    if (plVar4 == (long *)0x0) goto LAB_10a85650c;
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
    if ((uVar5 & 0x1fffffffc) != 4) goto LAB_10a85650c;
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
LAB_10a85650c:
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a856524; end: 10a856823;  */

void FUN_10a856524(long param_1)

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
  
  if ((*(byte *)(param_1 + 0x90) & 1) == 0) {
    FUN_10a8380dc(param_1 + 0x88,param_1 + 0x48);
    *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x88);
    plVar5 = (long *)(*(long *)(param_1 + 0x88) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x90) = 1;
      lVar8 = *(long *)(param_1 + 0x78);
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
  lVar8 = *(long *)(param_1 + 0x78);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar8 + 0xb0) & 1) != 0) {
      FUN_10a7021c8(param_1 + 0x10,lVar8 + 0x98);
      plVar5 = *(long **)(param_1 + 0x78);
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
      plVar5 = *(long **)(param_1 + 0x88);
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
      if (*(long *)(param_1 + 0x68) != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      plVar5 = *(long **)(param_1 + 0x50);
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
  }
  else {
    func_0x0001092af97c(lVar8 + 0x90);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a856760);
  (*pcVar4)();
}



/* Entry: 10a856824; end: 10a8569c7;  */

void FUN_10a856824(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if ((*(byte *)(param_1 + 0x90) & 1) == 0) {
    if (*(long *)(param_1 + 0x68) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar4 = *(long **)(param_1 + 0x50);
    if (plVar4 == (long *)0x0) goto LAB_10a856968;
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
    if ((uVar5 & 0x1fffffffc) != 4) goto LAB_10a856968;
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
    plVar4 = *(long **)(param_1 + 0x78);
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
    plVar4 = *(long **)(param_1 + 0x88);
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
    if (*(long *)(param_1 + 0x68) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar4 = *(long **)(param_1 + 0x50);
    if (plVar4 == (long *)0x0) goto LAB_10a856968;
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
    if ((uVar5 & 0x1fffffffc) != 4) goto LAB_10a856968;
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
LAB_10a856968:
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



/* Entry: 10a8569c8; end: 10a856cb7;  */

void FUN_10a8569c8(long param_1)

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
  
  if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
    plVar5 = *(long **)(param_1 + 0x48);
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(plVar5 + 0x12);
      goto LAB_10a856bb8;
    }
    if ((*(byte *)(plVar5 + 0x14) & 1) == 0) goto LAB_10a856bb8;
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
    FUN_10a82d3b8(param_1 + 0x50);
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x50);
    plVar5 = (long *)(*(long *)(param_1 + 0x50) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x58) = 1;
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
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 5 & 1) == 0) {
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
    plVar5 = *(long **)(param_1 + 0x50);
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
  func_0x0001092af97c(plVar5 + 0x12);
LAB_10a856bb8:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a856bbc);
  (*pcVar4)();
}



/* Entry: 10a856cb8; end: 10a856daf;  */

void FUN_10a856cb8(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = *(long **)(param_1 + 0x48);
  if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
    if (plVar4 == (long *)0x0) goto LAB_10a856d98;
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
    if ((uVar5 & 0x1fffffffc) != 4) goto LAB_10a856d98;
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
    if (plVar4 == (long *)0x0) goto LAB_10a856d98;
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
    if ((uVar5 & 0x1fffffffc) != 4) goto LAB_10a856d98;
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
LAB_10a856d98:
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a856db0; end: 10a85708b;  */

void FUN_10a856db0(long param_1)

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
    FUN_10a83a664(param_1 + 0x60,param_1 + 0x58);
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
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a856f88);
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
  plVar5 = *(long **)(param_1 + 0x58);
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



/* Entry: 10a85708c; end: 10a857197;  */

void FUN_10a85708c(long param_1)

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
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a857198; end: 10a8573bb;  */

void FUN_10a857198(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    lVar6 = **(long **)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x50);
    *(long *)(param_1 + 0x50) = lVar6;
    plVar5 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x60) = 1;
      lVar6 = *(long *)(param_1 + 0x50);
      plVar5 = (long *)(lVar6 + 0x10);
      uStack_38 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar8 = *plVar5;
        if (lVar8 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_48 = 0;
            lStack_40 = param_1;
            func_0x000109d1b588(lVar6 + 0x18,&uStack_48);
            *(undefined8 *)(lVar6 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar8 >> 1 & 1) == 0);
    }
  }
  plVar5 = *(long **)(param_1 + 0x50);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(plVar5 + 0x14) & 1) != 0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar7 & 0x1fffffffc) == 4) {
        do {
          uVar7 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar7 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar7 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
      FUN_10a00946c(&UNK_10f67b849);
    }
  }
  else {
    func_0x0001092af97c(plVar5 + 0x12);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a8572d0);
  (*pcVar4)();
}



/* Entry: 10a8573bc; end: 10a8574e3;  */

void FUN_10a8573bc(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x50);
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    if (plVar5 == (long *)0x0) goto LAB_10a8574c8;
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
    if ((uVar4 & 0x1fffffffc) != 4) goto LAB_10a8574c8;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    do {
      uVar4 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
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
    plVar5 = *(long **)(param_1 + 0x48);
    if (plVar5 == (long *)0x0) goto LAB_10a8574c8;
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
    if ((uVar4 & 0x1fffffffc) != 4) goto LAB_10a8574c8;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    do {
      uVar4 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (uVar4 == 0) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
LAB_10a8574c8:
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a8574e4; end: 10a8577cf;  */

void FUN_10a8574e4(long param_1)

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
    FUN_10a83a3cc(param_1 + 0x60,param_1 + 0x58);
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
  lVar8 = *(long *)(param_1 + 0x48);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar8 + 0xb0) & 1) != 0) {
      FUN_10a6f4ea0(param_1 + 0x10,lVar8 + 0x98);
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
      plVar5 = *(long **)(param_1 + 0x58);
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
  }
  else {
    func_0x0001092af97c(lVar8 + 0x90);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a8576cc);
  (*pcVar4)();
}



/* Entry: 10a8577d0; end: 10a8578d7;  */

void FUN_10a8577d0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if ((*(byte *)(param_1 + 0x68) & 1) != 0) {
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
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a8578d8; end: 10a8580c7;  */

/* WARNING: Removing unreachable block (ram,0x00010a857aec) */
/* WARNING: Removing unreachable block (ram,0x00010a857974) */

void FUN_10a8578d8(long param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  undefined8 uStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  plVar9 = (long *)(param_1 + 0xc0);
  if (*(char *)(param_1 + 0x11f) != '\x02') {
    if (*(char *)(param_1 + 0x11f) != '\x01') {
      *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_1 + 0xc0);
      FUN_10a8313a8(param_1 + 0x128,*(undefined8 *)(param_1 + 0x140));
      *plVar9 = *(long *)(param_1 + 0x128);
      plVar11 = (long *)(*(long *)(param_1 + 0x128) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *plVar11 = *plVar11 + 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (((uint)*(undefined8 *)(*plVar9 + 0x10) >> 1 & 1) == 0) {
        *(undefined1 *)(param_1 + 0x11f) = 1;
        lVar10 = *(long *)(param_1 + 0xc0);
        plVar11 = (long *)(lVar10 + 0x10);
        uStack_48 = *(undefined8 *)(param_1 + 0x18);
        do {
          lVar8 = *plVar11;
          if (lVar8 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *plVar11 = 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_10a857dbc;
          }
          else {
            ClearExclusiveLocal();
          }
        } while (((uint)lVar8 >> 1 & 1) == 0);
      }
    }
    plVar11 = (long *)*plVar9;
    if (((uint)*(undefined8 *)(*plVar9 + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(plVar11 + 0x12);
      goto LAB_10a857e24;
    }
    if ((*(byte *)(plVar11 + 0x14) & 1) == 0) goto LAB_10a857e24;
    puVar1 = (undefined8 *)(param_1 + 0x110);
    puVar2 = (ulong *)(plVar11 + 1);
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
        (**(code **)(*plVar11 + 8))(plVar11);
      }
    }
    plVar6 = *(long **)(param_1 + 0x128);
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
    *plVar9 = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    if (*(long *)(param_1 + 0x100) == 0) {
      *puVar1 = 0;
      *(undefined8 *)(param_1 + 0x117) = 0;
      FUN_10a8306e0(param_1 + 0x48);
      FUN_10a00946c(&UNK_10f67b849);
      goto LAB_10a857e24;
    }
    *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0x148);
    *(undefined8 *)(param_1 + 0xe0) = *puVar1;
    *(undefined8 *)(param_1 + 0xe7) = *(undefined8 *)(param_1 + 0x117);
    *(undefined1 *)(param_1 + 0xef) = *(undefined1 *)(param_1 + 0x159);
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x117) = 0;
    FUN_10a6fba94(param_1 + 0x138,*(undefined8 *)(param_1 + 0xf0),plVar11 + 0x13,param_1 + 0xd8,
                  *(undefined1 *)(param_1 + 0x158));
    FUN_10a4f3e88(param_1 + 0x130,param_1 + 0x120,param_1 + 0x138);
    *(long *)(param_1 + 0x128) = *(long *)(param_1 + 0x130);
    plVar11 = (long *)(*(long *)(param_1 + 0x130) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = *plVar11 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x128) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x11f) = 2;
      lVar10 = *(long *)(param_1 + 0x128);
      plVar11 = (long *)(lVar10 + 0x10);
      uStack_48 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar8 = *plVar11;
        if (lVar8 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
LAB_10a857dbc:
            uStack_58 = 0;
            plStack_50 = (long *)param_1;
            func_0x000109d1b588(lVar10 + 0x18,&uStack_58);
            *(undefined8 *)(lVar10 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar8 >> 1 & 1) == 0);
    }
  }
  lVar10 = *(long *)(param_1 + 0x128);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x128) + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar10 + 0xb0) & 1) != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar9,lVar10 + 0x98)
      ;
      plVar11 = *(long **)(param_1 + 0x128);
      if (plVar11 != (long *)0x0) {
        puVar2 = (ulong *)(plVar11 + 1);
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
            (**(code **)(*plVar11 + 8))();
          }
        }
      }
      plVar11 = *(long **)(param_1 + 0x130);
      if (plVar11 != (long *)0x0) {
        puVar2 = (ulong *)(plVar11 + 1);
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
            (**(code **)(*plVar11 + 8))();
          }
        }
      }
      plVar11 = *(long **)(param_1 + 0x138);
      if (plVar11 != (long *)0x0) {
        puVar2 = (ulong *)(plVar11 + 1);
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
            (**(code **)(*plVar11 + 8))();
          }
        }
      }
      if (*(char *)(param_1 + 0xef) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 0xd8));
      }
      if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
        plVar11 = *(long **)(param_1 + 0xc0);
        if (-1 < *(char *)(param_1 + 0xd7)) {
          plVar11 = plVar9;
        }
        func_0x00010ae06f08(1,4,&UNK_10f67bb5e,&UNK_10f67be77,0x1bf,&UNK_10f67bf17,in_x6,in_x7,
                            plVar11);
      }
      FUN_10a831e84(&uStack_58,*(undefined8 *)(*(long *)(param_1 + 0x140) + 0x60),1,plVar9);
      FUN_10a6dee28(param_1 + 0x10,&uStack_58);
      if (plStack_50 != (long *)0x0) {
        plVar11 = plStack_50 + 1;
        do {
          lVar10 = *plVar11;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_50 + 0x10))(plStack_50);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_50);
        }
      }
      if (*(char *)(param_1 + 0xd7) < '\0') {
        __ZdlPv(*plVar9);
      }
      plVar9 = *(long **)(param_1 + 0x120);
      if (plVar9 != (long *)0x0) {
        puVar2 = (ulong *)(plVar9 + 1);
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
          (**(code **)(*plVar9 + 0x10))(plVar9);
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
            (**(code **)(*plVar9 + 8))(plVar9);
          }
        }
      }
      plVar9 = *(long **)(param_1 + 0x108);
      if (plVar9 != (long *)0x0) {
        plVar11 = plVar9 + 1;
        do {
          lVar10 = *plVar11;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      plVar9 = *(long **)(param_1 + 0xf8);
      if (plVar9 != (long *)0x0) {
        plVar11 = plVar9 + 1;
        do {
          lVar10 = *plVar11;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      func_0x000109d1a1d0(param_1 + 0x10);
      __ZdlPv(param_1);
      return;
    }
  }
  else {
    func_0x0001092af97c(lVar10 + 0x90);
  }
LAB_10a857e24:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a857e28);
  (*pcVar5)();
}



/* Entry: 10a8580c8; end: 10a858503;  */

void FUN_10a8580c8(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  
  if (*(char *)(param_1 + 0x11f) == '\x02') {
    plVar5 = *(long **)(param_1 + 0x128);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
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
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x130);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
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
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x138);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
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
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    if (*(char *)(param_1 + 0xef) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0xd8));
    }
    if (*(char *)(param_1 + 0xd7) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0xc0));
    }
    plVar5 = *(long **)(param_1 + 0x120);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
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
        (**(code **)(*plVar5 + 0x10))(plVar5);
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
          (**(code **)(*plVar5 + 8))(plVar5);
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x108);
    if (plVar5 != (long *)0x0) {
      plVar2 = plVar5 + 1;
      do {
        lVar7 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    plVar5 = *(long **)(param_1 + 0xf8);
    if (plVar5 != (long *)0x0) {
      plVar2 = plVar5 + 1;
      do {
        lVar7 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    func_0x000109d1a1d0(param_1 + 0x10);
    goto LAB_10a8584f0;
  }
  if (*(char *)(param_1 + 0x11f) == '\x01') {
    plVar5 = *(long **)(param_1 + 0xc0);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
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
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x128);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
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
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x120);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
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
        (**(code **)(*plVar5 + 0x10))(plVar5);
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
          (**(code **)(*plVar5 + 8))(plVar5);
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x108);
    if (plVar5 != (long *)0x0) {
      plVar2 = plVar5 + 1;
      do {
        lVar7 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    plVar5 = *(long **)(param_1 + 0xf8);
    if (plVar5 != (long *)0x0) {
      plVar2 = plVar5 + 1;
      do {
        lVar7 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_10a8584b8:
      if (lVar7 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  else {
    plVar5 = *(long **)(param_1 + 0xc0);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
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
        (**(code **)(*plVar5 + 0x10))(plVar5);
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
          (**(code **)(*plVar5 + 8))(plVar5);
        }
      }
    }
    if (*(long *)(param_1 + 0x150) != 0) {
      plVar5 = (long *)(*(long *)(param_1 + 0x150) + 8);
      do {
        lVar7 = *plVar5;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar4) {
          *plVar5 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        plVar5 = *(long **)(param_1 + 0x150);
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    plVar5 = *(long **)(param_1 + 0xf8);
    if (plVar5 != (long *)0x0) {
      plVar2 = plVar5 + 1;
      do {
        lVar7 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      goto LAB_10a8584b8;
    }
  }
  uVar8 = *(undefined8 *)(param_1 + 0x148);
  cVar3 = *(char *)(param_1 + 0x159);
  func_0x000109d1a1d0(param_1 + 0x10);
  if (cVar3 < '\0') {
    __ZdlPv(uVar8);
  }
LAB_10a8584f0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a858504; end: 10a8588cf;  */

void FUN_10a858504(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x58);
    FUN_10a830d68(param_1 + 0x60,param_1 + 0x50,*(undefined8 *)(param_1 + 0x48));
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x60);
    plVar5 = (long *)(*(long *)(param_1 + 0x60) + 8);
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
      uStack_38 = *(undefined8 *)(param_1 + 0x18);
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
            uStack_48 = 0;
            lStack_40 = param_1;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_48);
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
  lVar8 = *(long *)(param_1 + 0x58);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar8 + 0xa8) & 1) != 0) {
      FUN_10a830d28(param_1 + 0x10,lVar8 + 0x98);
      plVar5 = *(long **)(param_1 + 0x58);
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
      plVar5 = *(long **)(param_1 + 0x50);
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
          (**(code **)(*plVar5 + 0x10))(plVar5);
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
            (**(code **)(*plVar5 + 8))(plVar5);
          }
        }
      }
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
      FUN_10a8312ec(param_1 + 0x68);
      func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(param_1);
      return;
    }
  }
  else {
    func_0x0001092af97c(lVar8 + 0x90);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a858768);
  (*pcVar4)();
}



/* Entry: 10a8588d0; end: 10a858a8f;  */

void FUN_10a8588d0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x58);
  if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
    if (plVar5 == (long *)0x0) goto LAB_10a858a24;
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
    if ((uVar4 & 0x1fffffffc) != 4) goto LAB_10a858a24;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    do {
      uVar4 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
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
    plVar5 = *(long **)(param_1 + 0x60);
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
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x50);
    if (plVar5 == (long *)0x0) goto LAB_10a858a24;
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
    if ((uVar4 & 0x1fffffffc) != 4) goto LAB_10a858a24;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    do {
      uVar4 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (uVar4 == 0) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
LAB_10a858a24:
  plVar5 = *(long **)(param_1 + 0x48);
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
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  FUN_10a8312ec(param_1 + 0x68);
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a858a90; end: 10a8590df;  */

void FUN_10a858a90(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  undefined8 *****pppppuVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_50 [8];
  undefined8 ****ppppuStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  if (*(char *)(param_1 + 400) != '\x02') {
    if (*(char *)(param_1 + 400) != '\x01') {
      *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_1 + 0x178);
      FUN_10a7040d4(param_1 + 0x178,param_1 + 0x170,param_1 + 0x168);
      *(long *)(param_1 + 0x180) = *(long *)(param_1 + 0x178);
      plVar7 = (long *)(*(long *)(param_1 + 0x178) + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = *plVar7 + 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x180) + 0x10) >> 1 & 1) == 0) {
        *(undefined1 *)(param_1 + 400) = 1;
        lVar11 = *(long *)(param_1 + 0x180);
        plVar7 = (long *)(lVar11 + 0x10);
        uVar8 = *(undefined8 *)(param_1 + 0x18);
        do {
          lVar10 = *plVar7;
          if (lVar10 == 0) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar5) {
              *plVar7 = 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_10a858f0c;
          }
          else {
            ClearExclusiveLocal();
          }
        } while (((uint)lVar10 >> 1 & 1) == 0);
      }
    }
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x180) + 0x10);
    plVar7 = *(long **)(param_1 + 0x180);
    if (plVar7 != (long *)0x0) {
      puVar1 = (ulong *)(plVar7 + 1);
      do {
        uVar9 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar9 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar9 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    if (((uint)uVar8 >> 5 & 1) == 0) {
      if ((uRam000000011330a9e8 >> 2 & 1) != 0) {
        func_0x00010ae06f08(1,4,&UNK_10f67bb5e,&UNK_10f67bc57,0xf5,&UNK_10f67bd00);
      }
      func_0x0001092af8bc(param_1 + 0x178);
      if ((*(byte *)(*(long *)(param_1 + 0x178) + 0xa8) & 1) == 0) goto LAB_10a858f3c;
      FUN_10a5404ec(*(long *)(param_1 + 0x188) + 0xf0,
                    *(long *)(*(long *)(param_1 + 0x178) + 0x98) + 0xe8);
    }
    else if ((uRam000000011330a9e8 & 1) != 0) {
      __ZNSt13exception_ptrC1ERKS_(auStack_50,*(long *)(param_1 + 0x178) + 0x90);
      func_0x0001098bc760(&ppppuStack_48,auStack_50);
      pppppuVar3 = (undefined8 *****)ppppuStack_48;
      if (-1 < uStack_38) {
        pppppuVar3 = &ppppuStack_48;
      }
      func_0x00010ae06f08(0,1,&UNK_10f67bb5e,&UNK_10f67bc57,0xf9,&UNK_10f67bd11,in_x6,in_x7,
                          pppppuVar3);
      if (uStack_38._7_1_ < '\0') {
        __ZdlPv(ppppuStack_48);
      }
      __ZNSt13exception_ptrD1Ev(auStack_50);
    }
    *(long *)(param_1 + 0x180) = *(long *)(param_1 + 0x178);
    plVar7 = (long *)(*(long *)(param_1 + 0x178) + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = *plVar7 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x180) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 400) = 2;
      lVar11 = *(long *)(param_1 + 0x180);
      plVar7 = (long *)(lVar11 + 0x10);
      uVar8 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar10 = *plVar7;
        if (lVar10 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar5) {
            *plVar7 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
LAB_10a858f0c:
            uStack_38 = uVar8;
            ppppuStack_48 = (undefined8 ****)0x0;
            lStack_40 = param_1;
            func_0x000109d1b588(lVar11 + 0x18,&ppppuStack_48);
            *(undefined8 *)(lVar11 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar10 >> 1 & 1) == 0);
    }
  }
  lVar11 = *(long *)(param_1 + 0x180);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x180) + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar11 + 0xa8) & 1) != 0) {
      FUN_10a6fd6b4(param_1 + 0x10,lVar11 + 0x98);
      plVar7 = *(long **)(param_1 + 0x180);
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          uVar9 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar9 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          do {
            uVar9 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar9 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      plVar7 = *(long **)(param_1 + 0x178);
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          uVar9 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar9 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          do {
            uVar9 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar9 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      plVar7 = *(long **)(param_1 + 0x170);
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          uVar9 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar9 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          do {
            uVar9 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar9 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plVar7 + 8))(plVar7);
          }
        }
      }
      plVar7 = *(long **)(param_1 + 0x168);
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          uVar9 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar9 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          do {
            uVar9 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar9 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      plVar7 = *(long **)(param_1 + 0x140);
      if (plVar7 != (long *)0x0) {
        plVar2 = plVar7 + 1;
        do {
          lVar11 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      plVar7 = *(long **)(param_1 + 0x130);
      if (plVar7 != (long *)0x0) {
        plVar2 = plVar7 + 1;
        do {
          lVar11 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      func_0x000109d1a1d0(param_1 + 0x10);
      plVar7 = *(long **)(param_1 + 0x120);
      if (plVar7 != (long *)0x0) {
        plVar2 = plVar7 + 1;
        do {
          lVar11 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      __ZdlPv(param_1);
      return;
    }
  }
  else {
    func_0x0001092af97c(lVar11 + 0x90);
  }
LAB_10a858f3c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a858f40);
  (*pcVar6)();
}



/* Entry: 10a8590e0; end: 10a859587;  */

void FUN_10a8590e0(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  if (*(char *)(param_1 + 400) == '\x02') {
    plVar5 = *(long **)(param_1 + 0x180);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
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
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x178);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
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
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x170);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
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
        (**(code **)(*plVar5 + 0x10))(plVar5);
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
          (**(code **)(*plVar5 + 8))(plVar5);
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x168);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
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
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x140);
    if (plVar5 != (long *)0x0) {
      plVar2 = plVar5 + 1;
      do {
        lVar7 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    plVar5 = *(long **)(param_1 + 0x130);
    if (plVar5 == (long *)0x0) goto LAB_10a859534;
    plVar2 = plVar5 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else if (*(char *)(param_1 + 400) == '\x01') {
    plVar5 = *(long **)(param_1 + 0x180);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
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
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x178);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
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
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x170);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
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
        (**(code **)(*plVar5 + 0x10))(plVar5);
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
          (**(code **)(*plVar5 + 8))(plVar5);
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x168);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
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
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x140);
    if (plVar5 != (long *)0x0) {
      plVar2 = plVar5 + 1;
      do {
        lVar7 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    plVar5 = *(long **)(param_1 + 0x130);
    if (plVar5 == (long *)0x0) goto LAB_10a859534;
    plVar2 = plVar5 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    plVar5 = *(long **)(param_1 + 0x178);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
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
        (**(code **)(*plVar5 + 0x10))(plVar5);
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
          (**(code **)(*plVar5 + 8))(plVar5);
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x168);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
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
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x140);
    if (plVar5 != (long *)0x0) {
      plVar2 = plVar5 + 1;
      do {
        lVar7 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    plVar5 = *(long **)(param_1 + 0x130);
    if (plVar5 == (long *)0x0) goto LAB_10a859534;
    plVar2 = plVar5 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
LAB_10a859534:
  func_0x000109d1a1d0(param_1 + 0x10);
  plVar5 = *(long **)(param_1 + 0x120);
  if (plVar5 != (long *)0x0) {
    plVar2 = plVar5 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a859588; end: 10a859dcb;  */

void FUN_10a859588(long param_1)

{
  long *plVar1;
  ulong *puVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  bVar3 = *(byte *)(param_1 + 0xa8);
  if (1 < bVar3) {
    if (bVar3 == 2) {
      plVar7 = *(long **)(param_1 + 0x88);
      if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x10) >> 5 & 1) != 0) {
        func_0x0001092af97c(plVar7 + 0x12);
        goto LAB_10a859b1c;
      }
      if ((*(byte *)(plVar7 + 0x15) & 1) == 0) goto LAB_10a859b1c;
      lVar9 = plVar7[0x13];
      *(long *)(param_1 + 0x48) = lVar9;
      lVar10 = plVar7[0x14];
      *(long *)(param_1 + 0x50) = lVar10;
      if (lVar10 != 0) {
        plVar1 = (long *)(lVar10 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      puVar2 = (ulong *)(plVar7 + 1);
      do {
        uVar8 = *puVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar8 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = uVar8 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
      plVar7 = *(long **)(param_1 + 0x90);
      if (plVar7 != (long *)0x0) {
        puVar2 = (ulong *)(plVar7 + 1);
        do {
          uVar8 = *puVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = uVar8 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar8 & 0x1fffffffc) == 4) {
          do {
            uVar8 = *puVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar8 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar8 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      *(long *)(param_1 + 0x78) = lVar9;
      *(long *)(param_1 + 0x80) = lVar10;
      if (lVar10 != 0) {
        plVar7 = (long *)(lVar10 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar5) {
            *plVar7 = *plVar7 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      FUN_10a82fdb4(param_1 + 0x90,*(undefined8 *)(param_1 + 0xa0),param_1 + 0x78,
                    *(undefined1 *)(*(long *)(param_1 + 0x98) + 9));
      *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x90);
      plVar7 = (long *)(*(long *)(param_1 + 0x90) + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = *plVar7 + 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x10) >> 1 & 1) == 0) {
        *(undefined1 *)(param_1 + 0xa8) = 3;
        lVar10 = *(long *)(param_1 + 0x88);
        plVar7 = (long *)(lVar10 + 0x10);
        uStack_38 = *(undefined8 *)(param_1 + 0x18);
        do {
          lVar9 = *plVar7;
          if (lVar9 == 0) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar5) {
              *plVar7 = 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_10a859ac8;
          }
          else {
            ClearExclusiveLocal();
          }
        } while (((uint)lVar9 >> 1 & 1) == 0);
      }
    }
    lVar10 = *(long *)(param_1 + 0x88);
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x10) >> 5 & 1) == 0) {
      if ((*(byte *)(lVar10 + 0xa8) & 1) == 0) goto LAB_10a859b1c;
      FUN_10a6fd6b4(param_1 + 0x10,lVar10 + 0x98);
      plVar7 = *(long **)(param_1 + 0x88);
      if (plVar7 != (long *)0x0) {
        puVar2 = (ulong *)(plVar7 + 1);
        do {
          uVar8 = *puVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = uVar8 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar8 & 0x1fffffffc) == 4) {
          do {
            uVar8 = *puVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar8 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar8 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      plVar7 = *(long **)(param_1 + 0x90);
      if (plVar7 != (long *)0x0) {
        puVar2 = (ulong *)(plVar7 + 1);
        do {
          uVar8 = *puVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = uVar8 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar8 & 0x1fffffffc) == 4) {
          do {
            uVar8 = *puVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar8 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar8 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      plVar7 = *(long **)(param_1 + 0x80);
      if (plVar7 != (long *)0x0) {
        plVar1 = plVar7 + 1;
        do {
          lVar10 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      plVar7 = *(long **)(param_1 + 0x50);
      if (plVar7 != (long *)0x0) {
        plVar1 = plVar7 + 1;
        do {
          lVar10 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      goto LAB_10a859a94;
    }
    func_0x0001092af97c(lVar10 + 0x90);
    goto LAB_10a859b1c;
  }
  if (bVar3 == 0) {
    plVar7 = *(long **)(param_1 + 0x88);
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(plVar7 + 0x12);
      goto LAB_10a859b1c;
    }
    if ((*(byte *)(plVar7 + 0x16) & 1) == 0) goto LAB_10a859b1c;
    if (*(char *)((long)plVar7 + 0xaf) < '\0') {
      func_0x000107c3192c(param_1 + 0x48,plVar7[0x13],plVar7[0x14]);
      plVar7 = *(long **)(param_1 + 0x88);
      if (plVar7 != (long *)0x0) goto LAB_10a85989c;
    }
    else {
      lVar9 = plVar7[0x14];
      lVar10 = plVar7[0x13];
      *(long *)(param_1 + 0x58) = plVar7[0x15];
      *(long *)(param_1 + 0x50) = lVar9;
      *(long *)(param_1 + 0x48) = lVar10;
LAB_10a85989c:
      puVar2 = (ulong *)(plVar7 + 1);
      do {
        uVar8 = *puVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar8 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = uVar8 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    plVar7 = *(long **)(param_1 + 0x90);
    if (plVar7 != (long *)0x0) {
      puVar2 = (ulong *)(plVar7 + 1);
      do {
        uVar8 = *puVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar8 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = uVar8 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    FUN_10a831590(param_1 + 0x90,*(undefined8 *)(param_1 + 0xa0),param_1 + 0x60,
                  *(undefined1 *)(*(long *)(param_1 + 0x98) + 9));
    *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x90);
    plVar7 = (long *)(*(long *)(param_1 + 0x90) + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = *plVar7 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0xa8) = 1;
      lVar10 = *(long *)(param_1 + 0x88);
      plVar7 = (long *)(lVar10 + 0x10);
      uStack_38 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar9 = *plVar7;
        if (lVar9 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar5) {
            *plVar7 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
LAB_10a859ac8:
            uStack_48 = 0;
            lStack_40 = param_1;
            func_0x000109d1b588(lVar10 + 0x18,&uStack_48);
            *(undefined8 *)(lVar10 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar9 >> 1 & 1) == 0);
    }
  }
  lVar10 = *(long *)(param_1 + 0x88);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar10 + 0xa8) & 1) != 0) {
      FUN_10a6fd6b4(param_1 + 0x10,lVar10 + 0x98);
      plVar7 = *(long **)(param_1 + 0x88);
      if (plVar7 != (long *)0x0) {
        puVar2 = (ulong *)(plVar7 + 1);
        do {
          uVar8 = *puVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = uVar8 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar8 & 0x1fffffffc) == 4) {
          do {
            uVar8 = *puVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar8 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar8 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      plVar7 = *(long **)(param_1 + 0x90);
      if (plVar7 != (long *)0x0) {
        puVar2 = (ulong *)(plVar7 + 1);
        do {
          uVar8 = *puVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = uVar8 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar8 & 0x1fffffffc) == 4) {
          do {
            uVar8 = *puVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar8 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar8 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      if (*(char *)(param_1 + 0x77) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 0x60));
      }
      if (*(char *)(param_1 + 0x5f) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 0x48));
      }
LAB_10a859a94:
      func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(param_1);
      return;
    }
  }
  else {
    func_0x0001092af97c(lVar10 + 0x90);
  }
LAB_10a859b1c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a859b20);
  (*pcVar6)();
}



/* Entry: 10a859dcc; end: 10a85a0cb;  */

void FUN_10a859dcc(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  bVar3 = *(byte *)(param_1 + 0xa8);
  plVar6 = *(long **)(param_1 + 0x88);
  if (bVar3 < 2) {
    if (bVar3 != 0) {
      if (plVar6 != (long *)0x0) {
        puVar1 = (ulong *)(plVar6 + 1);
        do {
          uVar7 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar7 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar7 & 0x1fffffffc) == 4) {
          do {
            uVar7 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar7 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar7 - 1 == 0) {
            (**(code **)(*plVar6 + 8))();
          }
        }
      }
      plVar6 = *(long **)(param_1 + 0x90);
      if (plVar6 != (long *)0x0) {
        puVar1 = (ulong *)(plVar6 + 1);
        do {
          uVar7 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar7 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar7 & 0x1fffffffc) == 4) {
          do {
            uVar7 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar7 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar7 - 1 == 0) {
            (**(code **)(*plVar6 + 8))();
          }
        }
      }
      if (*(char *)(param_1 + 0x77) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 0x60));
      }
      if (*(char *)(param_1 + 0x5f) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 0x48));
      }
      goto LAB_10a85a0b4;
    }
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar7 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar7 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar7 & 0x1fffffffc) == 4) {
        do {
          uVar7 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar7 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar7 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    plVar6 = *(long **)(param_1 + 0x90);
    if (plVar6 == (long *)0x0) goto LAB_10a85a0b4;
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar7 = *puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar7 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar7 & 0x1fffffffc) != 4) goto LAB_10a85a0b4;
    do {
      uVar7 = *puVar1 - 1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  else {
    if (bVar3 != 2) {
      if (plVar6 != (long *)0x0) {
        puVar1 = (ulong *)(plVar6 + 1);
        do {
          uVar7 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar7 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar7 & 0x1fffffffc) == 4) {
          do {
            uVar7 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar7 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar7 - 1 == 0) {
            (**(code **)(*plVar6 + 8))();
          }
        }
      }
      plVar6 = *(long **)(param_1 + 0x90);
      if (plVar6 != (long *)0x0) {
        puVar1 = (ulong *)(plVar6 + 1);
        do {
          uVar7 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar7 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar7 & 0x1fffffffc) == 4) {
          do {
            uVar7 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar7 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar7 - 1 == 0) {
            (**(code **)(*plVar6 + 8))();
          }
        }
      }
      plVar6 = *(long **)(param_1 + 0x80);
      if (plVar6 != (long *)0x0) {
        plVar2 = plVar6 + 1;
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
      plVar6 = *(long **)(param_1 + 0x50);
      if (plVar6 != (long *)0x0) {
        plVar2 = plVar6 + 1;
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
      goto LAB_10a85a0b4;
    }
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar7 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar7 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar7 & 0x1fffffffc) == 4) {
        do {
          uVar7 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar7 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar7 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    plVar6 = *(long **)(param_1 + 0x90);
    if (plVar6 == (long *)0x0) goto LAB_10a85a0b4;
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar7 = *puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar7 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar7 & 0x1fffffffc) != 4) goto LAB_10a85a0b4;
    do {
      uVar7 = *puVar1 - 1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (uVar7 == 0) {
    (**(code **)(*plVar6 + 8))();
  }
LAB_10a85a0b4:
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a85a0cc; end: 10a85a327;  */

void FUN_10a85a0cc(long param_1)

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
    FUN_10a83aa34(param_1 + 0x68,param_1 + 0x48);
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
  lVar8 = *(long *)(param_1 + 0x58);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar8 + 0xa8) & 1) != 0) {
      FUN_10a6dee28(param_1 + 0x10,lVar8 + 0x98);
      plVar5 = *(long **)(param_1 + 0x58);
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
      func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(param_1);
      return;
    }
  }
  else {
    func_0x0001092af97c(lVar8 + 0x90);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a85a26c);
  (*pcVar4)();
}



/* Entry: 10a85a328; end: 10a85a3eb;  */

void FUN_10a85a328(long param_1)

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



/* Entry: 10a85a3ec; end: 10a85a657;  */

void FUN_10a85a3ec(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  
  lVar7 = *(long *)(param_1 + 0x58);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar7 + 0xa8) & 1) != 0) {
      FUN_10a6e467c(param_1 + 0x48,lVar7 + 0x98);
      plVar6 = *(long **)(param_1 + 0x58);
      if (plVar6 != (long *)0x0) {
        puVar1 = (ulong *)(plVar6 + 1);
        do {
          uVar8 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar8 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar8 & 0x1fffffffc) == 4) {
          do {
            uVar8 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar8 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar8 - 1 == 0) {
            (**(code **)(*plVar6 + 8))();
          }
        }
      }
      if ((*(long *)(param_1 + 0x48) != 0) &&
         ((*(byte *)(*(long *)(param_1 + 0x68) + 0xe3) & 1) == 0)) {
        FUN_10a83b79c(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xa8),param_1 + 0x48);
      }
      plVar6 = *(long **)(param_1 + 0x50);
      if (plVar6 != (long *)0x0) {
        plVar2 = plVar6 + 1;
        do {
          lVar7 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      func_0x0001092ba100(param_1 + 0x10);
      func_0x000109d1a1d0(param_1 + 0x10);
      __ZdlPv(param_1);
      return;
    }
  }
  else {
    func_0x0001092af97c(lVar7 + 0x90);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a85a504);
  (*pcVar5)();
}



/* Entry: 10a85a658; end: 10a85a6ff;  */

void FUN_10a85a658(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  plVar5 = *(long **)(param_1 + 0x58);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
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
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  plVar5 = *(long **)(param_1 + 0x50);
  if (plVar5 != (long *)0x0) {
    plVar2 = plVar5 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a85a700; end: 10a85a9db;  */

void FUN_10a85a700(long param_1)

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
    FUN_10a83b3d4(param_1 + 0x68,param_1 + 0x48);
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
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a85a8d8);
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



/* Entry: 10a85a9dc; end: 10a85aae7;  */

void FUN_10a85a9dc(long param_1)

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



/* Entry: 10a85aae8; end: 10a85add7;  */

void FUN_10a85aae8(long param_1)

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
  
  if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
    plVar5 = *(long **)(param_1 + 0x48);
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(plVar5 + 0x12);
      goto LAB_10a85acd8;
    }
    if ((*(byte *)(plVar5 + 0x14) & 1) == 0) goto LAB_10a85acd8;
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
    FUN_10a82d3b8(param_1 + 0x50);
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x50);
    plVar5 = (long *)(*(long *)(param_1 + 0x50) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x58) = 1;
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
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 5 & 1) == 0) {
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
    plVar5 = *(long **)(param_1 + 0x50);
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
  func_0x0001092af97c(plVar5 + 0x12);
LAB_10a85acd8:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a85acdc);
  (*pcVar4)();
}



/* Entry: 10a85add8; end: 10a85aecf;  */

void FUN_10a85add8(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = *(long **)(param_1 + 0x48);
  if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
    if (plVar4 == (long *)0x0) goto LAB_10a85aeb8;
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
    if ((uVar5 & 0x1fffffffc) != 4) goto LAB_10a85aeb8;
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
    if (plVar4 == (long *)0x0) goto LAB_10a85aeb8;
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
    if ((uVar5 & 0x1fffffffc) != 4) goto LAB_10a85aeb8;
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
LAB_10a85aeb8:
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a85aed0; end: 10a85b1ab;  */

void FUN_10a85aed0(long param_1)

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
    FUN_10a839908(param_1 + 0x60,param_1 + 0x58);
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
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a85b0a8);
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
  plVar5 = *(long **)(param_1 + 0x58);
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



/* Entry: 10a85b1ac; end: 10a85b2b7;  */

void FUN_10a85b1ac(long param_1)

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
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a85b2b8; end: 10a85b513;  */

void FUN_10a85b2b8(long param_1)

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
    FUN_10a830808(param_1 + 0x58,*(undefined8 *)(param_1 + 0x60));
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x58);
    plVar5 = (long *)(*(long *)(param_1 + 0x58) + 8);
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
  lVar8 = *(long *)(param_1 + 0x48);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar8 + 0xa8) & 1) != 0) {
      FUN_10a83a010(param_1 + 0x10,lVar8 + 0x98);
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
      plVar5 = *(long **)(param_1 + 0x58);
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
  }
  else {
    func_0x0001092af97c(lVar8 + 0x90);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a85b458);
  (*pcVar4)();
}



/* Entry: 10a85b514; end: 10a85b5d7;  */

void FUN_10a85b514(long param_1)

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
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a85b5d8; end: 10a85b9f3;  */

void FUN_10a85b5d8(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 *puVar7;
  code *pcVar8;
  bool bVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  int *piVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  int iStack_cc;
  undefined4 *puStack_c0;
  undefined4 *puStack_b8;
  undefined8 uStack_b0;
  undefined4 *puStack_a8;
  undefined4 *puStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  puStack_c0 = (undefined4 *)0x0;
  uStack_b0 = 0;
  puStack_b8 = (undefined4 *)0x0;
  puStack_a0 = (undefined4 *)0x0;
  puStack_a8 = (undefined4 *)0x0;
  uStack_98 = 0;
  lVar15 = *param_2;
  lVar25 = param_2[1];
  if (0x20 < (ulong)(lVar25 - lVar15)) {
    iVar22 = 0;
    do {
      uVar23 = lVar25 - lVar15;
      lVar15 = (long)(uVar23 * 0x10000000) >> 0x20;
      func_0x000108a5942c(&puStack_c0,lVar15);
      func_0x000108a5942c(&puStack_a8,lVar15);
      if ((long)puStack_b8 - (long)puStack_c0 == 0) {
LAB_10a85b9dc:
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10a85b9e0);
        (*pcVar8)();
      }
      *puStack_c0 = 0;
      if ((long)puStack_a0 - (long)puStack_a8 == 0) goto LAB_10a85b9dc;
      uVar17 = (long)puStack_b8 - (long)puStack_c0 >> 2;
      *puStack_a8 = 0;
      if (uVar17 < 2) goto LAB_10a85b9dc;
      uVar18 = (long)puStack_a0 - (long)puStack_a8 >> 2;
      puStack_c0[1] = 0;
      if (uVar18 < 2) goto LAB_10a85b9dc;
      puStack_a8[1] = 1;
      iVar21 = (int)(uVar23 >> 4);
      if (2 < iVar21) {
        lVar15 = *param_2;
        uVar19 = param_2[1] - lVar15 >> 4;
        uVar5 = uVar19;
        if (uVar19 < 3) {
          uVar5 = 2;
        }
        iVar20 = (int)((float)(uVar23 >> 4 & 0xffffffff) * 0.07);
        uVar10 = 2;
        do {
          if (uVar10 == uVar5) goto LAB_10a85b9dc;
          iStack_cc = 0x19;
          iVar12 = iVar20;
          if (iVar20 < 0x1a) {
            iVar12 = iStack_cc;
          }
          uVar6 = (int)uVar10 - iVar12;
          uVar11 = (ulong)(uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU));
          iVar12 = (int)uVar10 + -1;
          if (uVar11 <= uVar10 - 2) {
            pfVar2 = (float *)(lVar15 + uVar10 * 0x10);
            uVar13 = uVar10 - 2;
            do {
              if (uVar19 <= uVar13) goto LAB_10a85b9dc;
              pfVar3 = (float *)(lVar15 + uVar13 * 0x10);
              uVar24 = uVar13;
              while (uVar1 = uVar24 + 1, (long)uVar1 < (long)uVar10) {
                if (uVar24 == uVar19 - 1) goto LAB_10a85b9dc;
                iVar14 = 0;
                pfVar4 = (float *)(lVar15 + uVar1 * 0x10);
                fVar26 = (*pfVar4 - *pfVar3) / (*pfVar2 - *pfVar3);
                fVar31 = 1.0 - fVar26;
                fVar27 = (pfVar3[1] * fVar31 + fVar26 * pfVar2[1]) - pfVar4[1];
                fVar29 = (pfVar3[2] * fVar31 + fVar26 * pfVar2[2]) - pfVar4[2];
                if (fVar27 < 0.0) {
                  fVar27 = -fVar27;
                }
                if (fVar29 < 0.0) {
                  fVar29 = -fVar29;
                }
                while ((fVar30 = fVar29, iVar14 == 1 || (fVar30 = fVar27, iVar14 != 2))) {
                  bVar9 = fVar30 < 0.00011920929;
                  while (iVar14 = iVar14 + 1, !bVar9) {
                    if (iVar14 == 2) goto LAB_10a85b74c;
                    bVar9 = false;
                  }
                }
                uVar24 = uVar1;
                if (0.00011920929 <= ABS((fVar31 * pfVar3[3] + fVar26 * pfVar2[3]) - pfVar4[3]))
                goto LAB_10a85b74c;
              }
              if ((uVar18 <= (ulong)(long)iVar12) || (uVar18 <= uVar13)) goto LAB_10a85b9dc;
              if ((int)puStack_a8[uVar13] <= (int)puStack_a8[iVar12]) {
                iVar12 = (int)uVar13;
              }
              bVar9 = (long)uVar11 < (long)uVar13;
              uVar13 = uVar13 - 1;
            } while (bVar9);
          }
LAB_10a85b74c:
          if (((uVar10 == uVar17) || (puStack_c0[uVar10] = iVar12, uVar18 <= (ulong)(long)iVar12))
             || (uVar10 == uVar18)) goto LAB_10a85b9dc;
          puStack_a8[uVar10] = puStack_a8[iVar12] + 1;
          uVar10 = uVar10 + 1;
        } while (uVar10 != (uVar23 >> 4 & 0x7fffffff));
      }
      iVar20 = puStack_a0[-1];
      lVar25 = (long)iVar20;
      FUN_10a85c424(&lStack_90,lVar25 + 1);
      lVar15 = param_2[1];
      if ((*param_2 == lVar15) || (lStack_90 == lStack_88)) goto LAB_10a85b9dc;
      uVar28 = *(undefined8 *)(lVar15 + -0x10);
      *(undefined8 *)(lStack_88 + -8) = *(undefined8 *)(lVar15 + -8);
      *(undefined8 *)(lStack_88 + -0x10) = uVar28;
      if (puStack_c0 == puStack_b8) goto LAB_10a85b9dc;
      if (0 < iVar20) {
        piVar16 = puStack_b8 + -1;
        uVar23 = lVar25 + 1;
        lVar25 = lVar25 * 0x10;
        do {
          lVar25 = lVar25 + -0x10;
          uVar17 = (ulong)*piVar16;
          if (((ulong)(param_2[1] - *param_2 >> 4) <= uVar17) ||
             ((ulong)(lStack_88 - lStack_90 >> 4) <= uVar23 - 2)) goto LAB_10a85b9dc;
          puVar7 = (undefined8 *)(*param_2 + uVar17 * 0x10);
          uVar28 = *puVar7;
          ((undefined8 *)(lStack_90 + lVar25))[1] = puVar7[1];
          *(undefined8 *)(lStack_90 + lVar25) = uVar28;
          if ((ulong)((long)puStack_b8 - (long)puStack_c0 >> 2) <= uVar17) goto LAB_10a85b9dc;
          piVar16 = puStack_c0 + uVar17;
          uVar23 = uVar23 - 1;
        } while (1 < uVar23);
      }
      if (*param_2 != 0) {
        param_2[1] = *param_2;
        __ZdlPv();
        *param_2 = 0;
        param_2[1] = 0;
        param_2[2] = 0;
      }
      param_2[1] = lStack_88;
      *param_2 = lStack_90;
      param_2[2] = lStack_80;
      lVar15 = *param_2;
      lVar25 = param_2[1];
      iVar22 = iVar22 + 1;
    } while ((float)(ulong)(lVar25 - lVar15 >> 4) < (float)iVar21 * 0.93 && iVar22 != 5);
    if (puStack_a8 != (undefined4 *)0x0) {
      puStack_a0 = puStack_a8;
      __ZdlPv();
    }
  }
  if (puStack_c0 != (undefined4 *)0x0) {
    puStack_b8 = puStack_c0;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a85b9f4; end: 10a85ba33;  */

long FUN_10a85b9f4(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x10);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a85ba34; end: 10a85bffb;  */

void FUN_10a85ba34(undefined8 param_1,long *param_2)

{
  float *pfVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  uint uVar5;
  undefined2 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  code *pcVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  byte *pbVar24;
  int *piVar25;
  undefined8 *puVar26;
  ulong uVar27;
  float *pfVar28;
  int iVar29;
  int iVar30;
  ulong uVar31;
  ulong uVar32;
  int iVar33;
  float *pfVar34;
  ulong uVar35;
  float *pfVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined8 uVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  int iStack_ec;
  undefined4 *puStack_e0;
  undefined4 *puStack_d8;
  undefined8 uStack_d0;
  undefined4 *puStack_c8;
  undefined4 *puStack_c0;
  undefined8 uStack_b8;
  byte bStack_b0;
  undefined7 uStack_af;
  long lStack_a8;
  long lStack_a0;
  byte bStack_8a;
  byte abStack_89 [9];
  
  puStack_e0 = (undefined4 *)0x0;
  uStack_d0 = 0;
  puStack_d8 = (undefined4 *)0x0;
  puStack_c0 = (undefined4 *)0x0;
  puStack_c8 = (undefined4 *)0x0;
  uStack_b8 = 0;
  lVar22 = *param_2;
  lVar18 = param_2[1];
  if (2 < (ulong)((lVar18 - lVar22 >> 2) * -0x3333333333333333)) {
    iVar33 = 0;
    do {
      uVar31 = (lVar18 - lVar22 >> 2) * -0x3333333333333333;
      iVar29 = (int)uVar31;
      func_0x000108a5942c(&puStack_e0,(long)iVar29);
      func_0x000108a5942c(&puStack_c8,(long)iVar29);
      puVar13 = puStack_c0;
      puVar12 = puStack_c8;
      puVar11 = puStack_e0;
      if ((long)puStack_d8 - (long)puStack_e0 == 0) {
LAB_10a85bfe4:
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x10a85bfe8);
        (*pcVar14)();
      }
      *puStack_e0 = 0;
      if ((long)puStack_c0 - (long)puStack_c8 == 0) goto LAB_10a85bfe4;
      uVar19 = (long)puStack_d8 - (long)puStack_e0 >> 2;
      *puStack_c8 = 0;
      if (uVar19 < 2) goto LAB_10a85bfe4;
      uVar27 = (long)puStack_c0 - (long)puStack_c8 >> 2;
      puStack_e0[1] = 0;
      if (uVar27 < 2) goto LAB_10a85bfe4;
      puStack_c8[1] = 1;
      if (2 < iVar29) {
        lVar22 = *param_2;
        uVar23 = (param_2[1] - lVar22 >> 2) * -0x3333333333333333;
        uVar4 = uVar23;
        if (uVar23 < 3) {
          uVar4 = 2;
        }
        iVar16 = (int)((float)(uVar31 & 0xffffffff) * 0.07);
        uVar35 = 2;
        do {
          if (uVar35 == uVar4) goto LAB_10a85bfe4;
          iStack_ec = 0x19;
          iVar30 = iVar16;
          if (iVar16 < 0x1a) {
            iVar30 = iStack_ec;
          }
          uVar5 = (int)uVar35 - iVar30;
          uVar21 = (ulong)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU));
          iVar30 = (int)uVar35 + -1;
          if (uVar21 <= uVar35 - 2) {
            pfVar34 = (float *)(lVar22 + uVar35 * 0x14);
            uVar32 = uVar35 - 2;
            do {
              if (uVar23 <= uVar32) goto LAB_10a85bfe4;
              pfVar36 = (float *)(lVar22 + uVar32 * 0x14);
              uVar20 = uVar32;
              while (uVar2 = uVar20 + 1, (long)uVar2 < (long)uVar35) {
                if (uVar20 == uVar23 - 1) goto LAB_10a85bfe4;
                pfVar28 = (float *)(lVar22 + uVar2 * 0x14);
                fVar68 = (*pfVar28 - *pfVar36) / (*pfVar34 - *pfVar36);
                pfVar1 = pfVar34 + 1;
                uVar7 = *(undefined8 *)(pfVar34 + 3);
                uVar37 = (undefined1)((ulong)uVar7 >> 8);
                uVar38 = (undefined1)((ulong)uVar7 >> 0x10);
                uVar39 = (undefined1)((ulong)uVar7 >> 0x18);
                uVar42 = (undefined1)((ulong)uVar7 >> 0x20);
                uVar40 = (undefined1)((ulong)uVar7 >> 0x28);
                uVar43 = (undefined1)((ulong)uVar7 >> 0x30);
                uVar41 = (undefined1)((ulong)uVar7 >> 0x38);
                fVar54 = (float)*(undefined8 *)pfVar1;
                fVar64 = (float)*(undefined8 *)(pfVar36 + 1);
                fVar53 = fVar54 * fVar64;
                fVar63 = (float)((ulong)*(undefined8 *)pfVar1 >> 0x20);
                fVar65 = (float)((ulong)*(undefined8 *)(pfVar36 + 1) >> 0x20);
                fVar55 = fVar63 * fVar65;
                fVar66 = (float)*(undefined8 *)(pfVar36 + 3);
                fVar56 = (float)uVar7 * fVar66;
                fVar58 = (float)((ulong)uVar7 >> 0x20);
                fVar67 = (float)((ulong)*(undefined8 *)(pfVar36 + 3) >> 0x20);
                fVar57 = fVar58 * fVar67;
                auVar8._4_4_ = fVar55;
                auVar8._0_4_ = fVar53;
                auVar8._8_4_ = fVar56;
                auVar8._12_4_ = fVar57;
                auVar9._4_4_ = fVar55;
                auVar9._0_4_ = fVar53;
                auVar9._8_4_ = fVar56;
                auVar9._12_4_ = fVar57;
                auVar60 = NEON_ext(auVar8,auVar9,8,1);
                uVar59 = NEON_rev64(auVar60._0_8_,4);
                fVar53 = fVar53 + (float)uVar59 + fVar55 + (float)((ulong)uVar59 >> 0x20);
                auVar61._0_4_ = -(uint)(fVar53 < 0.0);
                auVar61._4_4_ = auVar61._0_4_;
                auVar61._8_4_ = auVar61._0_4_;
                auVar61._12_4_ = auVar61._0_4_;
                auVar60[9] = uVar37;
                auVar60._0_9_ = *(unkbyte9 *)pfVar1;
                auVar60[10] = uVar38;
                auVar60[0xb] = uVar39;
                auVar60[0xc] = uVar42;
                auVar60[0xd] = uVar40;
                auVar60[0xe] = uVar43;
                auVar60[0xf] = uVar41;
                auVar10._4_4_ = -fVar63;
                auVar10._0_4_ = -fVar54;
                auVar10._8_4_ = -(float)uVar7;
                auVar10._12_4_ = -fVar58;
                auVar62[9] = uVar37;
                auVar62._0_9_ = *(unkbyte9 *)pfVar1;
                auVar62[10] = uVar38;
                auVar62[0xb] = uVar39;
                auVar62[0xc] = uVar42;
                auVar62[0xd] = uVar40;
                auVar62[0xe] = uVar43;
                auVar62[0xf] = uVar41;
                auVar62 = auVar62 ^ (auVar60 ^ auVar10) & auVar61;
                fVar54 = -fVar53;
                uVar37 = SUB41(fVar54,0);
                uVar38 = (undefined1)((uint)fVar54 >> 8);
                uVar39 = (undefined1)((uint)fVar54 >> 0x10);
                uVar42 = (undefined1)((uint)fVar54 >> 0x18);
                if (0.0 <= fVar53) {
                  uVar37 = SUB41(fVar53,0);
                  uVar38 = (undefined1)((uint)fVar53 >> 8);
                  uVar39 = (undefined1)((uint)fVar53 >> 0x10);
                  uVar42 = (undefined1)((uint)fVar53 >> 0x18);
                }
                fVar54 = 1.0 - fVar68;
                if ((float)CONCAT13(uVar42,CONCAT12(uVar39,CONCAT11(uVar38,uVar37))) == 0.9999999 ||
                    (float)CONCAT13(uVar42,CONCAT12(uVar39,CONCAT11(uVar38,uVar37))) < 0.9999999) {
                  _acosf();
                  fVar63 = (float)CONCAT13(uVar42,CONCAT12(uVar39,CONCAT11(uVar38,uVar37)));
                  fVar54 = fVar54 * fVar63;
                  uVar40 = SUB41(fVar54,0);
                  uVar43 = (undefined1)((uint)fVar54 >> 8);
                  uVar41 = (undefined1)((uint)fVar54 >> 0x10);
                  uVar44 = (undefined1)((uint)fVar54 >> 0x18);
                  _sinf();
                  fVar58 = (float)CONCAT13(uVar44,CONCAT12(uVar41,CONCAT11(uVar43,uVar40)));
                  fVar68 = fVar68 * fVar63;
                  uVar40 = SUB41(fVar68,0);
                  uVar43 = (undefined1)((uint)fVar68 >> 8);
                  uVar41 = (undefined1)((uint)fVar68 >> 0x10);
                  uVar44 = (undefined1)((uint)fVar68 >> 0x18);
                  _sinf();
                  fVar54 = (float)CONCAT13(uVar44,CONCAT12(uVar41,CONCAT11(uVar43,uVar40)));
                  fVar63 = fVar64 * fVar58 + auVar62._0_4_ * fVar54;
                  fVar68 = fVar65 * fVar58 + auVar62._4_4_ * fVar54;
                  fVar53 = fVar66 * fVar58 + auVar62._8_4_ * fVar54;
                  fVar58 = fVar67 * fVar58 + auVar62._12_4_ * fVar54;
                  _sinf();
                  uVar6 = CONCAT11(uVar38,uVar37);
                  fVar54 = fVar63 / (float)CONCAT13(uVar42,CONCAT12(uVar39,uVar6));
                  uVar37 = SUB41(fVar54,0);
                  uVar38 = (undefined1)((uint)fVar54 >> 8);
                  uVar40 = (undefined1)((uint)fVar54 >> 0x10);
                  uVar43 = (undefined1)((uint)fVar54 >> 0x18);
                  fVar54 = (float)(CONCAT17((char)((uint)fVar68 >> 0x18),
                                            CONCAT16((char)((uint)fVar68 >> 0x10),
                                                     CONCAT15((char)((uint)fVar68 >> 8),
                                                              CONCAT14(SUB41(fVar68,0),fVar63)))) >>
                                  0x20) / (float)CONCAT13(uVar42,CONCAT12(uVar39,uVar6));
                  uVar41 = SUB41(fVar54,0);
                  uVar44 = (undefined1)((uint)fVar54 >> 8);
                  uVar45 = (undefined1)((uint)fVar54 >> 0x10);
                  uVar46 = (undefined1)((uint)fVar54 >> 0x18);
                  fVar54 = fVar53 / (float)CONCAT13(uVar42,CONCAT12(uVar39,uVar6));
                  uVar47 = SUB41(fVar54,0);
                  uVar48 = (undefined1)((uint)fVar54 >> 8);
                  uVar49 = (undefined1)((uint)fVar54 >> 0x10);
                  uVar50 = (undefined1)((uint)fVar54 >> 0x18);
                  fVar54 = (float)(CONCAT17((char)((uint)fVar58 >> 0x18),
                                            CONCAT16((char)((uint)fVar58 >> 0x10),
                                                     CONCAT15((char)((uint)fVar58 >> 8),
                                                              CONCAT14(SUB41(fVar58,0),fVar53)))) >>
                                  0x20) / (float)CONCAT13(uVar42,CONCAT12(uVar39,uVar6));
                  uVar39 = SUB41(fVar54,0);
                  uVar42 = (undefined1)((uint)fVar54 >> 8);
                  uVar51 = (undefined1)((uint)fVar54 >> 0x10);
                  uVar52 = (undefined1)((uint)fVar54 >> 0x18);
                }
                else {
                  fVar63 = auVar62._0_4_ * fVar68 + fVar64 * fVar54;
                  uVar37 = SUB41(fVar63,0);
                  uVar38 = (undefined1)((uint)fVar63 >> 8);
                  uVar40 = (undefined1)((uint)fVar63 >> 0x10);
                  uVar43 = (undefined1)((uint)fVar63 >> 0x18);
                  fVar63 = auVar62._4_4_ * fVar68 + fVar65 * fVar54;
                  uVar41 = SUB41(fVar63,0);
                  uVar44 = (undefined1)((uint)fVar63 >> 8);
                  uVar45 = (undefined1)((uint)fVar63 >> 0x10);
                  uVar46 = (undefined1)((uint)fVar63 >> 0x18);
                  fVar63 = auVar62._8_4_ * fVar68 + fVar66 * fVar54;
                  uVar47 = SUB41(fVar63,0);
                  uVar48 = (undefined1)((uint)fVar63 >> 8);
                  uVar49 = (undefined1)((uint)fVar63 >> 0x10);
                  uVar50 = (undefined1)((uint)fVar63 >> 0x18);
                  fVar54 = auVar62._12_4_ * fVar68 + fVar67 * fVar54;
                  uVar39 = SUB41(fVar54,0);
                  uVar42 = (undefined1)((uint)fVar54 >> 8);
                  uVar51 = (undefined1)((uint)fVar54 >> 0x10);
                  uVar52 = (undefined1)((uint)fVar54 >> 0x18);
                }
                iVar17 = 0;
                fVar68 = (float)CONCAT13(uVar43,CONCAT12(uVar40,CONCAT11(uVar38,uVar37))) -
                         pfVar28[1];
                fVar58 = (float)CONCAT13(uVar46,CONCAT12(uVar45,CONCAT11(uVar44,uVar41))) -
                         pfVar28[2];
                fVar63 = (float)CONCAT13(uVar50,CONCAT12(uVar49,CONCAT11(uVar48,uVar47))) -
                         pfVar28[3];
                fVar54 = -fVar68;
                uVar37 = SUB41(fVar68,0);
                uVar38 = (undefined1)((uint)fVar68 >> 8);
                uVar40 = (undefined1)((uint)fVar68 >> 0x10);
                uVar43 = (undefined1)((uint)fVar68 >> 0x18);
                if (fVar68 < 0.0) {
                  uVar37 = SUB41(fVar54,0);
                  uVar38 = (undefined1)((uint)fVar54 >> 8);
                  uVar40 = (undefined1)((uint)fVar54 >> 0x10);
                  uVar43 = (undefined1)((uint)fVar54 >> 0x18);
                }
                if (fVar58 < 0.0) {
                  fVar58 = -fVar58;
                }
                if (fVar63 < 0.0) {
                  fVar63 = -fVar63;
                }
                bStack_b0 = 1;
                abStack_89[0] = 1;
                bStack_8a = 1;
                bVar15 = ABS((float)CONCAT13(uVar52,CONCAT12(uVar51,CONCAT11(uVar42,uVar39))) -
                             pfVar28[4]) < 0.00011920929;
                do {
                  if (iVar17 == 1) {
                    pbVar24 = abStack_89;
                    fVar54 = fVar58;
                  }
                  else if (iVar17 == 2) {
                    pbVar24 = &bStack_8a;
                    fVar54 = fVar63;
                  }
                  else {
                    if (iVar17 == 3) goto LAB_10a85bdcc;
                    pbVar24 = &bStack_b0;
                    fVar54 = (float)CONCAT13(uVar43,CONCAT12(uVar40,CONCAT11(uVar38,uVar37)));
                  }
                  *pbVar24 = fVar54 < 0.00011920929;
                  iVar17 = iVar17 + 1;
                } while (iVar17 != 4);
                bVar15 = true;
LAB_10a85bdcc:
                if (((((bStack_b0 & 1) == 0) || ((abStack_89[0] & 1) == 0)) ||
                    ((bStack_8a & 1) == 0)) || (uVar20 = uVar2, !bVar15)) goto LAB_10a85be38;
              }
              if ((uVar27 <= (ulong)(long)iVar30) || (uVar27 <= uVar32)) goto LAB_10a85bfe4;
              if ((int)puVar12[uVar32] <= (int)puVar12[iVar30]) {
                iVar30 = (int)uVar32;
              }
              bVar15 = (long)uVar21 < (long)uVar32;
              uVar32 = uVar32 - 1;
            } while (bVar15);
          }
LAB_10a85be38:
          if (((uVar35 == uVar19) || (puVar11[uVar35] = iVar30, uVar27 <= (ulong)(long)iVar30)) ||
             (uVar35 == uVar27)) goto LAB_10a85bfe4;
          puVar12[uVar35] = puVar12[iVar30] + 1;
          uVar35 = uVar35 + 1;
        } while (uVar35 != (uVar31 & 0x7fffffff));
      }
      iVar16 = puVar13[-1];
      FUN_10a85c498(&bStack_b0,(long)iVar16 + 1);
      lVar22 = param_2[1];
      if ((*param_2 == lVar22) || (CONCAT71(uStack_af,bStack_b0) == lStack_a8)) goto LAB_10a85bfe4;
      uVar59 = *(undefined8 *)(lVar22 + -0xc);
      uVar7 = *(undefined8 *)(lVar22 + -0x14);
      *(undefined4 *)(lStack_a8 + -4) = *(undefined4 *)(lVar22 + -4);
      *(undefined8 *)(lStack_a8 + -0xc) = uVar59;
      *(undefined8 *)(lStack_a8 + -0x14) = uVar7;
      if (puStack_e0 == puStack_d8) goto LAB_10a85bfe4;
      if (0 < iVar16) {
        piVar25 = puStack_d8 + -1;
        uVar31 = (long)iVar16 + 1;
        lVar22 = (long)iVar16 * 0x14;
        do {
          lVar22 = lVar22 + -0x14;
          uVar19 = (ulong)*piVar25;
          uVar27 = (param_2[1] - *param_2 >> 2) * -0x3333333333333333;
          if ((uVar27 < uVar19 || uVar27 - uVar19 == 0) ||
             (uVar27 = (lStack_a8 - CONCAT71(uStack_af,bStack_b0) >> 2) * -0x3333333333333333,
             uVar27 < uVar31 - 2 || uVar27 - (uVar31 - 2) == 0)) goto LAB_10a85bfe4;
          puVar26 = (undefined8 *)(*param_2 + (long)*piVar25 * 0x14);
          puVar3 = (undefined8 *)(CONCAT71(uStack_af,bStack_b0) + lVar22);
          uVar59 = puVar26[1];
          uVar7 = *puVar26;
          *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(puVar26 + 2);
          puVar3[1] = uVar59;
          *puVar3 = uVar7;
          if ((ulong)((long)puStack_d8 - (long)puStack_e0 >> 2) <= uVar19) goto LAB_10a85bfe4;
          piVar25 = puStack_e0 + uVar19;
          uVar31 = uVar31 - 1;
        } while (1 < uVar31);
      }
      if (*param_2 != 0) {
        param_2[1] = *param_2;
        __ZdlPv();
        *param_2 = 0;
        param_2[1] = 0;
        param_2[2] = 0;
      }
      param_2[1] = lStack_a8;
      *param_2 = CONCAT71(uStack_af,bStack_b0);
      param_2[2] = lStack_a0;
      lVar22 = *param_2;
      lVar18 = param_2[1];
      iVar33 = iVar33 + 1;
    } while ((float)(ulong)((lVar18 - lVar22 >> 2) * -0x3333333333333333) < (float)iVar29 * 0.93 &&
             iVar33 != 5);
    if (puStack_c8 != (undefined4 *)0x0) {
      puStack_c0 = puStack_c8;
      __ZdlPv();
    }
  }
  if (puStack_e0 != (undefined4 *)0x0) {
    puStack_d8 = puStack_e0;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a85bffc; end: 10a85c03b;  */

long FUN_10a85bffc(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x10);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a85c03c; end: 10a85c3e3;  */

void FUN_10a85c03c(undefined8 param_1,long *param_2)

{
  bool bVar1;
  float *pfVar2;
  float *pfVar3;
  ulong uVar4;
  uint uVar5;
  code *pcVar6;
  float *pfVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  float *pfVar23;
  ulong uVar24;
  float *pfVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  float fVar29;
  float fVar30;
  int iStack_cc;
  undefined4 *puStack_c0;
  undefined4 *puStack_b8;
  undefined8 uStack_b0;
  undefined4 *puStack_a8;
  undefined4 *puStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  puStack_c0 = (undefined4 *)0x0;
  uStack_b0 = 0;
  puStack_b8 = (undefined4 *)0x0;
  puStack_a0 = (undefined4 *)0x0;
  puStack_a8 = (undefined4 *)0x0;
  uStack_98 = 0;
  lVar15 = *param_2;
  lVar8 = param_2[1];
  if (0x10 < (ulong)(lVar8 - lVar15)) {
    iVar22 = 0;
    do {
      uVar24 = lVar8 - lVar15;
      lVar15 = (long)(uVar24 * 0x20000000) >> 0x20;
      func_0x000108a5942c(&puStack_c0,lVar15);
      func_0x000108a5942c(&puStack_a8,lVar15);
      if ((long)puStack_b8 - (long)puStack_c0 == 0) {
LAB_10a85c3cc:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10a85c3d0);
        (*pcVar6)();
      }
      *puStack_c0 = 0;
      if ((long)puStack_a0 - (long)puStack_a8 == 0) goto LAB_10a85c3cc;
      uVar17 = (long)puStack_b8 - (long)puStack_c0 >> 2;
      *puStack_a8 = 0;
      if (uVar17 < 2) goto LAB_10a85c3cc;
      uVar18 = (long)puStack_a0 - (long)puStack_a8 >> 2;
      puStack_c0[1] = 0;
      if (uVar18 < 2) goto LAB_10a85c3cc;
      puStack_a8[1] = 1;
      iVar21 = (int)(uVar24 >> 3);
      if (2 < iVar21) {
        lVar15 = *param_2;
        uVar19 = param_2[1] - lVar15 >> 3;
        uVar4 = uVar19;
        if (uVar19 < 3) {
          uVar4 = 2;
        }
        iVar20 = (int)((float)(uVar24 >> 3 & 0xffffffff) * 0.07);
        pfVar23 = (float *)(lVar15 + 0xc);
        lVar8 = 1;
        uVar10 = 2;
        uVar9 = uVar19;
        do {
          if (uVar10 == uVar4) goto LAB_10a85c3cc;
          iStack_cc = 0x19;
          iVar12 = iVar20;
          if (iVar20 < 0x1a) {
            iVar12 = iStack_cc;
          }
          uVar5 = (int)uVar10 - iVar12;
          uVar11 = (ulong)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU));
          iVar12 = (int)uVar10 + -1;
          if (uVar11 <= uVar10 - 2) {
            pfVar2 = (float *)(lVar15 + uVar10 * 8);
            pfVar7 = pfVar23;
            uVar13 = uVar10 - 2;
            lVar14 = lVar8;
            uVar26 = uVar9;
            do {
              if (uVar19 <= uVar13) goto LAB_10a85c3cc;
              pfVar3 = (float *)(lVar15 + uVar13 * 8);
              pfVar25 = pfVar7;
              lVar27 = lVar14;
              uVar28 = uVar26;
              while (lVar27 < (long)uVar10) {
                uVar28 = uVar28 - 1;
                if (uVar28 == 0) goto LAB_10a85c3cc;
                fVar29 = *pfVar3;
                fVar30 = *pfVar25;
                fVar29 = (pfVar25[-1] - fVar29) / (*pfVar2 - fVar29);
                pfVar25 = pfVar25 + 2;
                lVar27 = lVar27 + 1;
                if (0.00011920929 <= ABS((pfVar2[1] * fVar29 + (1.0 - fVar29) * pfVar3[1]) - fVar30)
                   ) goto LAB_10a85c1b8;
              }
              if ((uVar18 <= (ulong)(long)iVar12) || (uVar18 <= uVar13)) goto LAB_10a85c3cc;
              if ((int)puStack_a8[uVar13] <= (int)puStack_a8[iVar12]) {
                iVar12 = (int)uVar13;
              }
              uVar26 = uVar26 + 1;
              pfVar7 = pfVar7 + -2;
              lVar14 = lVar14 + -1;
              bVar1 = (long)uVar11 < (long)uVar13;
              uVar13 = uVar13 - 1;
            } while (bVar1);
          }
LAB_10a85c1b8:
          if (((uVar10 == uVar17) || (puStack_c0[uVar10] = iVar12, uVar18 <= (ulong)(long)iVar12))
             || (uVar10 == uVar18)) goto LAB_10a85c3cc;
          puStack_a8[uVar10] = puStack_a8[iVar12] + 1;
          uVar10 = uVar10 + 1;
          uVar9 = uVar9 - 1;
          pfVar23 = pfVar23 + 2;
          lVar8 = lVar8 + 1;
        } while (uVar10 != (uVar24 >> 3 & 0x7fffffff));
      }
      iVar20 = puStack_a0[-1];
      FUN_10a85c514(&lStack_90,(long)iVar20 + 1);
      if (((*param_2 == param_2[1]) || (lStack_90 == lStack_88)) ||
         (*(undefined8 *)(lStack_88 + -8) = *(undefined8 *)(param_2[1] + -8),
         puStack_c0 == puStack_b8)) goto LAB_10a85c3cc;
      if (0 < iVar20) {
        piVar16 = puStack_b8 + -1;
        uVar24 = (long)iVar20;
        do {
          uVar17 = uVar24 - 1;
          uVar18 = (ulong)*piVar16;
          if ((((ulong)(param_2[1] - *param_2 >> 3) <= uVar18) ||
              ((ulong)(lStack_88 - lStack_90 >> 3) <= uVar17)) ||
             (*(undefined8 *)(lStack_90 + uVar17 * 8) = *(undefined8 *)(*param_2 + uVar18 * 8),
             (ulong)((long)puStack_b8 - (long)puStack_c0 >> 2) <= uVar18)) goto LAB_10a85c3cc;
          piVar16 = puStack_c0 + uVar18;
          bVar1 = 1 < uVar24;
          uVar24 = uVar17;
        } while (bVar1);
      }
      if (*param_2 != 0) {
        param_2[1] = *param_2;
        __ZdlPv();
        *param_2 = 0;
        param_2[1] = 0;
        param_2[2] = 0;
      }
      param_2[1] = lStack_88;
      *param_2 = lStack_90;
      param_2[2] = lStack_80;
      lVar15 = *param_2;
      lVar8 = param_2[1];
      iVar22 = iVar22 + 1;
    } while ((float)(ulong)(lVar8 - lVar15 >> 3) < (float)iVar21 * 0.93 && iVar22 != 5);
    if (puStack_a8 != (undefined4 *)0x0) {
      puStack_a0 = puStack_a8;
      __ZdlPv();
    }
  }
  if (puStack_c0 != (undefined4 *)0x0) {
    puStack_b8 = puStack_c0;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a85c3e4; end: 10a85c423;  */

long FUN_10a85c3e4(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x10);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a85c424; end: 10a85c497;  */

undefined8 * FUN_10a85c424(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_10a0cbee4(param_1);
    lVar1 = param_1[1];
    _bzero(lVar1,param_2 << 4);
    param_1[1] = lVar1 + param_2 * 0x10;
  }
  return param_1;
}



/* Entry: 10a85c498; end: 10a85c513;  */

undefined8 * FUN_10a85c498(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_10a0cc640(param_1);
    puVar1 = (undefined8 *)param_1[1];
    puVar2 = (undefined8 *)((long)puVar1 + param_2 * 0x14);
    do {
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined4 *)(puVar1 + 2) = 0x3f800000;
      puVar1 = (undefined8 *)((long)puVar1 + 0x14);
    } while (puVar1 != puVar2);
    param_1[1] = puVar2;
  }
  return param_1;
}



/* Entry: 10a85c514; end: 10a85c587;  */

undefined8 * FUN_10a85c514(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_10a0cb3e4(param_1);
    lVar1 = param_1[1];
    _bzero(lVar1,param_2 << 3);
    param_1[1] = lVar1 + param_2 * 8;
  }
  return param_1;
}



/* Entry: 10a85c588; end: 10a85c5fb;  */

undefined8 * FUN_10a85c588(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    func_0x00010a107af0(param_1);
    lVar1 = param_1[1];
    _bzero(lVar1,param_2 << 3);
    param_1[1] = lVar1 + param_2 * 8;
  }
  return param_1;
}



/* Entry: 10a85c5fc; end: 10a85c993;  */

undefined1  [16] FUN_10a85c5fc(double param_1,double param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  
  dVar21 = ((double)(float)param_2 / 180.0) * 3.141592653589793;
  dVar1 = dVar21;
  ___sincos_stret();
  dVar19 = param_2 * param_2;
  dVar23 = dVar19 * 0.006739496819936062;
  dVar22 = 40680631590769.0 / SQRT(dVar1 * dVar1 * 40408299981544.36 + dVar19 * 40680631590769.0);
  dVar18 = dVar21;
  _tan();
  dVar24 = dVar18 * dVar18;
  dVar2 = dVar18;
  _pow();
  dVar3 = dVar18;
  _pow(dVar18,0x4018000000000000);
  param_3 = ((double)(float)param_1 / 180.0) * 3.141592653589793 - param_3;
  dVar4 = param_2;
  _pow(param_2,0x4008000000000000);
  dVar5 = param_3;
  _pow(param_3,0x4008000000000000);
  dVar1 = param_3 * param_2 * dVar22;
  dVar6 = param_2;
  _pow(param_2,0x4014000000000000);
  dVar7 = param_3;
  _pow(param_3,0x4014000000000000);
  dVar8 = param_2;
  _pow(param_2,0x401c000000000000);
  dVar9 = param_3;
  _pow(param_3,0x401c000000000000);
  dVar10 = dVar21 + dVar21;
  _sin();
  dVar11 = dVar21 * 4.0;
  _sin();
  dVar12 = dVar21 * 6.0;
  _sin();
  dVar13 = dVar21 * 8.0;
  _sin();
  dVar20 = param_3 * param_3;
  dVar14 = param_2;
  _pow(param_2,0x4010000000000000);
  dVar15 = param_3;
  _pow(param_3,0x4010000000000000);
  dVar16 = param_2;
  _pow(param_2,0x4018000000000000);
  dVar17 = param_3;
  _pow(param_3,0x4018000000000000);
  _pow(param_2,0x4020000000000000);
  _pow(param_3,0x4020000000000000);
  auVar25._0_8_ =
       (dVar5 * ((1.0 - dVar24) + dVar23) * dVar4 * (dVar22 / 6.0) + dVar1 +
        dVar7 * (dVar2 + dVar24 * -18.0 + 5.0 + dVar23 * 14.0 + dVar23 * dVar24 * -58.0) *
                dVar6 * (dVar22 / 120.0) +
       dVar9 * ((dVar24 * -479.0 + 61.0 + dVar2 * 179.0) - dVar3) * dVar8 * (dVar22 / 5040.0)) *
       0.9996 + 500000.0;
  dVar18 = ((dVar21 + dVar10 * -0.0025188279450474756 + dVar11 * 2.64354112052895e-06 +
             dVar12 * -3.452623541489543e-09 + dVar13 * 4.8918305530311804e-12) * 6367449.14570093 +
            dVar20 * dVar19 * dVar18 * 0.5 * dVar22 +
            dVar15 * ((5.0 - dVar24) + dVar23 * 9.0 + dVar23 * dVar23 * 4.0) *
                     dVar14 * (dVar18 / 24.0) * dVar22 +
            dVar17 * (dVar2 + dVar24 * -58.0 + 61.0 + dVar23 * 270.0 + dVar23 * dVar24 * -330.0) *
                     dVar16 * (dVar18 / 720.0) * dVar22 +
           param_3 * ((dVar24 * -3111.0 + 1385.0 + dVar2 * 543.0) - dVar3) *
                     param_2 * (dVar18 / 40320.0) * dVar22) * 0.9996;
  dVar1 = dVar18 + 10000000.0;
  if (0.0 <= dVar18) {
    dVar1 = dVar18;
  }
  auVar25._8_8_ = dVar1;
  return auVar25;
}



/* Entry: 10a85c994; end: 10a85cb2f;  */

long FUN_10a85c994(long param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_DAT_110c23818;
  *(undefined ***)(param_1 + 0x80) = &PTR_FUN_110c23890;
  func_0x00010a004e5c(param_1 + 0x28);
  func_0x00010a004e04(param_1 + 0x18);
  return param_1;
}



/* Entry: 10a85cb30; end: 10a85cd83;  */

void FUN_10a85cb30(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  uVar5 = *(undefined8 *)(param_2 + 0x70);
  uVar4 = *(undefined8 *)(param_2 + 0x68);
  param_1[5] = *(undefined8 *)(param_2 + 0x60);
  param_1[4] = uVar3;
  param_1[7] = uVar5;
  param_1[6] = uVar4;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 0x78);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  param_1[1] = *(undefined8 *)(param_2 + 0x40);
  *param_1 = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  *(undefined4 *)((long)param_1 + 0x44) = 0xffffffff;
  *(undefined1 *)(param_1 + 9) = 1;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  return;
}



/* Entry: 10a85cd84; end: 10a85d153;  */

void FUN_10a85cd84(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_d8 [2];
  char cStack_c1;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  FUN_10a003e74(param_1,&UNK_10f67d9d7,0x13);
  func_0x000109887da8(appuStack_d8,&UNK_10f67da1c,0x11);
  pppuVar1 = (undefined8 ***)appuStack_d8[0];
  if (-1 < cStack_c1) {
    pppuVar1 = appuStack_d8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c23ef8;
  pppuVar2 = (undefined8 ***)&UNK_10f67d9eb;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x100000064;
  uStack_80 = 0;
  puStack_88 = (undefined *)0x0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 0x177;
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_b0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_b0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_c0 = &PTR_DAT_110c23ef8;
    uStack_b8 = 0;
    ppuStack_b0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_a8 = 0;
    uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_c0,&ppuStack_b0);
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(appuStack_d8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f67d9ec,FUN_10a883920,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f67d9fb,FUN_10a883a44,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f67da0a,FUN_10a883b00,FUN_10a883bc8);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_a8 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_b0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_88 = *(undefined **)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_a0 = *(undefined8 *)(lVar3 + -0x58);
    uStack_78 = *(undefined8 *)(lVar3 + -0x30);
    uStack_80 = *(undefined8 *)(lVar3 + -0x38);
    uStack_68 = *(undefined8 *)(lVar3 + -0x20);
    uStack_70 = *(undefined8 *)(lVar3 + -0x28);
    uStack_50 = *(undefined8 *)(lVar3 + -8);
    uStack_58 = *(undefined8 *)(lVar3 + -0x10);
    uStack_60 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_98._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_98._4_4_;
    uStack_90._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_90._4_4_;
    uVar7 = param_1;
    uStack_98 = uVar9;
    uStack_90 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_60 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_b0,param_1 + 0x1b8,&UNK_10f67da1c,0x11);
      FUN_10a05431c(param_1);
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b0 = (undefined8 **)&UNK_10f67da1c;
    uStack_90 = 0xffffffffffffffff;
    uStack_98 = 0x100000064;
    puStack_88 = &UNK_10f67d9eb;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    uStack_58 = 0;
    uStack_50 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_b0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a85d134;
      FUN_10a054dac(param_1,&DAT_10f68efec,FUN_10a883d50,3,*(long *)(param_1 + 0x18) + -8);
    }
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a85d134;
      FUN_10a054dac(param_1,&UNK_10f67da2e,FUN_10a8841ac,0,*(long *)(param_1 + 0x18) + -8);
    }
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a85d134;
      FUN_10a054dac(param_1,&UNK_10f67da45,FUN_10a884244,0,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a85d134:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a85d138);
  (*pcVar6)();
}



/* Entry: 10a85d154; end: 10a85d94f;  */

void FUN_10a85d154(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined *puStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f67f1db,0x1d);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c23f10;
  pppuVar2 = (undefined8 ***)&UNK_10f67d9eb;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0xffffffff;
  puStack_48 = (undefined *)0x0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c23f10;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f673008,FUN_10a8842dc,FUN_10a8843bc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f2df4ca,FUN_10a884604,FUN_10a8846e4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f67da5c,FUN_10a88479c,FUN_10a884854);
  }
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&UNK_10f67da67;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  puStack_48 = &UNK_10f67d9eb;
  uStack_40 = 0;
  uVar7 = param_1;
  FUN_10a884914(param_1,&ppuStack_a0);
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&UNK_10f67da75;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f67d9eb;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_50 = 0xffffffff;
  puStack_48 = &UNK_10f67d9eb;
  uStack_40 = 0;
  FUN_10a884914();
  FUN_10a0051e8();
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f4bcb53,FUN_10a884ae4,FUN_10a884bb8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f4baf63,FUN_10a884e50,FUN_10a884f24);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f4bcbdb,FUN_10a8851bc,FUN_10a885290);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x40,0xffffffff,0xffffffff,0xb);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f67da8b,FUN_10a885528,FUN_10a8855fc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f67da9e,FUN_10a885894,FUN_10a885968);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f67dab5,FUN_10a885cc4,FUN_10a885d98);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f67dac9,FUN_10a886124,FUN_10a8861f8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f67dadb,FUN_10a8862b0,FUN_10a8863e0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f67daf7,FUN_10a88672c,FUN_10a88685c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f67db13,FUN_10a886b5c,FUN_10a886c0c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f67db2b,FUN_10a887100,FUN_10a8871b0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f67db43,FUN_10a887268,FUN_10a887398);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f67db5a,FUN_10a8876e4,FUN_10a887814);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f67db71,FUN_10a887b60,FUN_10a887c90);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f67db88,FUN_10a887fdc,FUN_10a88810c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f67dba8,FUN_10a888458,FUN_10a888588);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f67dbc2,FUN_10a8888d4,FUN_10a888a04);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f6846a0,FUN_10a888d50,FUN_10a888e24);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f67dbd0,FUN_10a8890c8,FUN_10a8891b4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f67dbe4,FUN_10a88952c,FUN_10a889648);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_78 = *(undefined **)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    puStack_48 = *(undefined **)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_60 = (undefined4)*(undefined8 *)(lVar3 + -0x28);
    uStack_5c = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x28) >> 0x20);
    uStack_50 = (undefined4)uVar10;
    uStack_4c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f67f1db,0x1d);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a85d934);
  (*pcVar6)();
}



/* Entry: 10a85d950; end: 10a85da8b;  */

void FUN_10a85d950(long param_1,ulong param_2)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  if ((param_2 >> 0x20 & 1) == 0) {
    if (*(char *)(param_1 + 0x24) == '\x01') {
      *(undefined1 *)(param_1 + 0x24) = 0;
    }
  }
  else {
    if ((int)param_2 < *(int *)(param_1 + 0x18)) {
      __ZNSt3__19to_stringEi(auStack_78);
      FUN_109feb280(auStack_60,&UNK_10f67dc87,auStack_78);
      FUN_10a012db0(auStack_48,auStack_60,&DAT_10f684600);
      FUN_10a0029c0(auStack_48);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a85da40);
      (*pcVar1)();
    }
    if (*(int *)(param_1 + 0x1c) < (int)param_2) {
      func_0x00010ae02ecc(0,param_2);
      func_0x00010ae02ecc();
      ppuVar2 = &PTR_PTR_113303140;
      FUN_10ae079a0();
      func_0x00010ae02edc();
      func_0x00010ae02edc();
      FUN_10ae07cd4(ppuVar2,&PTR_PTR_113303140);
      param_2 = (ulong)*(uint *)(param_1 + 0x1c);
    }
    *(int *)(param_1 + 0x20) = (int)param_2;
    *(undefined1 *)(param_1 + 0x24) = 1;
  }
  return;
}



/* Entry: 10a85da8c; end: 10a85dc6f;  */

undefined8 * FUN_10a85da8c(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = &PTR_FUN_110c23910;
  FUN_10a889908(param_1 + 0x76);
  if ((ulong)*(byte *)(param_1 + 0x75) < 3) {
    (*(code *)(&PTR_FUN_110c24578)[*(byte *)(param_1 + 0x75)])(param_1 + 0x73);
    if ((ulong)*(byte *)(param_1 + 0x71) < 4) {
      (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x71)])(param_1 + 0x69);
      func_0x00010a8838c8(param_1 + 0x67);
      func_0x00010a883870(param_1 + 0x65);
      func_0x00010a883818(param_1 + 99);
      func_0x00010a8837c0(param_1 + 0x61);
      func_0x00010a883768(param_1 + 0x5f);
      func_0x00010a883710(param_1 + 0x5d);
      func_0x00010a8836b8(param_1 + 0x5b);
      func_0x00010a8836b8(param_1 + 0x59);
      func_0x00010a883660(param_1 + 0x57);
      func_0x00010a883608(param_1 + 0x55);
      if ((ulong)*(byte *)(param_1 + 0x54) < 4) {
        (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x54)])(param_1 + 0x4c);
        if ((ulong)*(byte *)(param_1 + 0x4b) < 4) {
          (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x4b)])(param_1 + 0x43);
          if ((ulong)*(byte *)(param_1 + 0x42) < 4) {
            (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x42)])(param_1 + 0x3a);
            if ((ulong)*(byte *)(param_1 + 0x39) < 4) {
              (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x39)])(param_1 + 0x31);
              if ((ulong)*(byte *)(param_1 + 0x30) < 4) {
                (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x30)])(param_1 + 0x28);
                if ((ulong)*(byte *)(param_1 + 0x27) < 4) {
                  (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x27)])(param_1 + 0x1f);
                  if ((ulong)*(byte *)(param_1 + 0x1e) < 4) {
                    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x1e)])(param_1 + 0x16);
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
                    *param_1 = &PTR_DAT_110b17898;
                    func_0x00010a004dac(param_1 + 1);
                    return param_1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a85dc70);
  (*pcVar1)();
}



/* Entry: 10a85dc70; end: 10a85dc73;  */

undefined8 * FUN_10a85dc70(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = &PTR_FUN_110c23910;
  FUN_10a889908(param_1 + 0x76);
  if ((ulong)*(byte *)(param_1 + 0x75) < 3) {
    (*(code *)(&PTR_FUN_110c24578)[*(byte *)(param_1 + 0x75)])(param_1 + 0x73);
    if ((ulong)*(byte *)(param_1 + 0x71) < 4) {
      (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x71)])(param_1 + 0x69);
      func_0x00010a8838c8(param_1 + 0x67);
      func_0x00010a883870(param_1 + 0x65);
      func_0x00010a883818(param_1 + 99);
      func_0x00010a8837c0(param_1 + 0x61);
      func_0x00010a883768(param_1 + 0x5f);
      func_0x00010a883710(param_1 + 0x5d);
      func_0x00010a8836b8(param_1 + 0x5b);
      func_0x00010a8836b8(param_1 + 0x59);
      func_0x00010a883660(param_1 + 0x57);
      func_0x00010a883608(param_1 + 0x55);
      if ((ulong)*(byte *)(param_1 + 0x54) < 4) {
        (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x54)])(param_1 + 0x4c);
        if ((ulong)*(byte *)(param_1 + 0x4b) < 4) {
          (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x4b)])(param_1 + 0x43);
          if ((ulong)*(byte *)(param_1 + 0x42) < 4) {
            (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x42)])(param_1 + 0x3a);
            if ((ulong)*(byte *)(param_1 + 0x39) < 4) {
              (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x39)])(param_1 + 0x31);
              if ((ulong)*(byte *)(param_1 + 0x30) < 4) {
                (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x30)])(param_1 + 0x28);
                if ((ulong)*(byte *)(param_1 + 0x27) < 4) {
                  (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x27)])(param_1 + 0x1f);
                  if ((ulong)*(byte *)(param_1 + 0x1e) < 4) {
                    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_1 + 0x1e)])(param_1 + 0x16);
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
                    *param_1 = &PTR_DAT_110b17898;
                    func_0x00010a004dac(param_1 + 1);
                    return param_1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a85dc70);
  (*pcVar1)();
}



/* Entry: 10a85dc74; end: 10a85dc87;  */

void FUN_10a85dc74(void)

{
  FUN_10a85da8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a85dc88; end: 10a85dd7f;  */

undefined1  [16] FUN_10a85dc88(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1b;
  auVar1._0_8_ = &UNK_10f63f1eb;
  return auVar1;
}



/* Entry: 10a85dd80; end: 10a85e1a3;  */

void FUN_10a85dd80(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_d8 [2];
  char cStack_c1;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  
  func_0x000109887da8(appuStack_d8,&UNK_10f63f1eb,0x1b);
  pppuVar1 = (undefined8 ***)appuStack_d8[0];
  if (-1 < cStack_c1) {
    pppuVar1 = appuStack_d8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c25720;
  pppuVar2 = (undefined8 ***)&UNK_10f67d9eb;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x100000064;
  uStack_80 = 0;
  puStack_88 = (undefined *)0x0;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  puStack_58 = (undefined *)0x0;
  uStack_50 = 0;
  ppuStack_b0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_b0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_c0 = &PTR_DAT_110c25720;
    uStack_b8 = 0;
    ppuStack_b0 = (undefined8 **)&PTR_DAT_110c23f90;
    uStack_a8 = 0;
    uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_c0,&ppuStack_b0);
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(appuStack_d8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"sessionId",FUN_10a889960,FUN_10a889a4c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f2f5ef1,FUN_10a889c18,FUN_10a889cfc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f67dcbb,FUN_10a889df8,FUN_10a889ed4);
  }
  uStack_a8 = 0;
  uStack_a0 = 0;
  ppuStack_b0 = (undefined8 **)&UNK_10f67dccc;
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x200000019;
  uStack_80 = 0;
  puStack_88 = (undefined *)0x0;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_60._0_4_ = 0xffffffff;
  puStack_58 = (undefined *)0x0;
  uStack_50 = 0;
  uVar7 = param_1;
  FUN_10a88a224(param_1,&ppuStack_b0);
  uStack_a8 = 0;
  uStack_a0 = 0;
  ppuStack_b0 = (undefined8 **)&UNK_10f67dcdf;
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x100000064;
  puStack_88 = &UNK_10f67d9eb;
  uStack_80 = 0;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_68 = 0x9e;
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  puStack_58 = &UNK_10f67d9eb;
  uStack_50 = 0;
  FUN_10a88a224();
  FUN_10a0051e8();
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f2f70f7,FUN_10a88a400,FUN_10a88a4e4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f67dcf6,FUN_10a88a5e0,FUN_10a88a6bc);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_a8 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_b0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_88 = *(undefined **)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_a0 = *(undefined8 *)(lVar3 + -0x58);
    puStack_78 = *(undefined **)(lVar3 + -0x30);
    uStack_80 = *(undefined8 *)(lVar3 + -0x38);
    uStack_68 = *(undefined8 *)(lVar3 + -0x20);
    uStack_70 = *(undefined8 *)(lVar3 + -0x28);
    uStack_50 = *(undefined8 *)(lVar3 + -8);
    puStack_58 = *(undefined **)(lVar3 + -0x10);
    uStack_60 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_98._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_98._4_4_;
    uStack_90._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_90._4_4_;
    uVar7 = param_1;
    uStack_98 = uVar9;
    uStack_90 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_60 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_b0,param_1 + 0x1b8,&UNK_10f63f1eb,0x1b);
      FUN_10a05431c(param_1);
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b0 = (undefined8 **)&UNK_10f63f1eb;
    uStack_90 = 0xffffffffffffffff;
    uStack_98 = 0x100000064;
    puStack_88 = &UNK_10f67d9eb;
    uStack_80 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    puStack_78 = &UNK_10f67d9eb;
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    puStack_58 = (undefined *)0x0;
    uStack_50 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_b0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a85e184;
      FUN_10a054dac(param_1,&DAT_10f68efec,FUN_10a88a7c8,0,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a85e184:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a85e188);
  (*pcVar6)();
}



/* Entry: 10a85e1a4; end: 10a85e313;  */

void FUN_10a85e1a4(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f67dd0d;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f67d9eb;
  uStack_78 = 0;
  puStack_70 = &UNK_10f67d9eb;
  uStack_68 = 0;
  uStack_60 = 0x94;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_a8);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_58,uStack_88 & 0xffffffff,
                uStack_88._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_a8);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f67dd21;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f67d9eb;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x94;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a85e314(param_1,&puStack_a8,0);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f67dd25;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f67d9eb;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x94;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a85e314();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f67dd39;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f67d9eb;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x94;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a85e314();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a85e314; end: 10a85e3bb;  */

undefined8 * FUN_10a85e314(undefined8 *param_1,undefined8 *param_2,char param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a85e3bc);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)(int)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a85e3bc; end: 10a85e43b;  */

void FUN_10a85e3bc(long param_1,undefined8 *param_2)

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
  plVar5 = *(long **)(param_1 + 0x3e0);
  *(undefined8 *)(param_1 + 0x3e0) = uVar7;
  *(undefined8 *)(param_1 + 0x3d8) = uVar6;
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



/* Entry: 10a85e43c; end: 10a85e4ab;  */

void FUN_10a85e43c(long param_1,int param_2)

{
  code *pcVar1;
  undefined1 auStack_38 [24];
  
  if (param_2 < 0x41) {
    *(int *)(param_1 + 0x3ec) = param_2;
    return;
  }
  FUN_10a0ee900(auStack_38,&UNK_10f67dd45,0x27);
  FUN_10a0029c0(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a85e490);
  (*pcVar1)();
}



/* Entry: 10a85e4ac; end: 10a85e52f;  */

undefined1  [16] FUN_10a85e4ac(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe;
  auVar1._0_8_ = &DAT_10f67f1f9;
  return auVar1;
}



/* Entry: 10a85e530; end: 10a85e877;  */

void FUN_10a85e530(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  FUN_10a003e74(param_1,&UNK_10f67d9d7,0x13);
  func_0x000109887da8(appuStack_c8,&DAT_10f67f1f9,0xe);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c23e88;
  pppuVar2 = (undefined8 ***)&UNK_10f67d9eb;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c23e88;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f67dd6d,FUN_10a88a98c,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f67dd7b,FUN_10a88ab4c,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f67dd88,FUN_10a88ac04,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f67dd9a,FUN_10a88addc,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f67dda9,FUN_10a88afb0,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f67ddc5,FUN_10a88b1e4,0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&DAT_10f67f1f9,0xe);
      FUN_10a05431c(param_1);
    }
    func_0x00010a004064(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a85e85c);
  (*pcVar6)();
}



/* Entry: 10a85e878; end: 10a85e913;  */

undefined8 * FUN_10a85e878(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x100;
  __Znwm();
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  puVar1[0x17] = 0;
  puVar1[0x16] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  *puVar1 = &PTR_DAT_1107eca30;
  puVar1[0x16] = 0;
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  puVar1[0x13] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  puVar1[0xe] = 0;
  puVar1[0xd] = 0;
  puVar1[0x10] = 0;
  puVar1[0xf] = 0;
  puVar1[0x11] = 0;
  *(undefined4 *)(puVar1 + 0x17) = 0x3f800000;
  puVar1[0x18] = 0x32aaaba7;
  puVar1[0x1f] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x19] = 0;
  *param_1 = puVar1;
  puVar2 = (undefined8 *)0x28;
  __Znwm();
  *puVar2 = &PTR_FUN_110c24690;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = puVar1;
  puVar2[4] = &UNK_104c5b964;
  param_1[1] = puVar2;
  return param_1;
}



/* Entry: 10a85e914; end: 10a85e923;  */

undefined1  [16] FUN_10a85e914(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1f;
  auVar1._0_8_ = &UNK_10f65523e;
  return auVar1;
}



/* Entry: 10a85e924; end: 10a85ec07;  */

void FUN_10a85e924(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f65523e,0x1f);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c23f90;
  pppuVar2 = (undefined8 ***)&UNK_10f67d9eb;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0x94;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c23f90;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c23f10;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"sessionId",FUN_10a88b3b4,FUN_10a88b4a0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f2f5ef1,FUN_10a88b66c,FUN_10a88b750);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f65523e,0x1f);
      FUN_10a05431c(param_1);
    }
    uStack_98 = 0;
    uStack_90 = 0;
    ppuStack_a0 = (undefined8 **)&UNK_10f65523e;
    uStack_80 = 0xffffffffffffffff;
    uStack_88 = 0x100000064;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_58 = 0;
    uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
    uStack_48 = 0;
    uStack_40 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_a0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a85ebe8;
      FUN_10a054dac(param_1,&DAT_10f68efec,FUN_10a88b84c,0,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a85ebe8:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a85ebec);
  (*pcVar6)();
}



/* Entry: 10a85ec08; end: 10a85ec73;  */

undefined1  [16] FUN_10a85ec08(uint param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if (param_1 < 0x11) {
    auVar1._8_8_ = *(undefined8 *)(&UNK_10e4e0f20 + (ulong)param_1 * 8);
    auVar1._0_8_ = (&PTR_DAT_110c25798)[param_1];
    return auVar1;
  }
  auVar2._8_8_ = 9;
  auVar2._0_8_ = &DAT_10f67def4;
  return auVar2;
}



/* Entry: 10a85ec74; end: 10a85ecaf;  */

void FUN_10a85ec74(undefined8 param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 - 1U < 0x18) {
    pcVar1 = (&PTR_DAT_110c258a0)[param_2 - 1U];
  }
  else {
    pcVar1 = "Internal Error";
  }
  func_0x000107c2b054(param_1,pcVar1);
  return;
}



/* Entry: 10a85ecb0; end: 10a85ed3b;  */

undefined1  [16] FUN_10a85ecb0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x12;
  auVar1._0_8_ = &UNK_10f67f208;
  return auVar1;
}



/* Entry: 10a85ed3c; end: 10a85f95f;  */

void FUN_10a85ed3c(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  bool bVar7;
  ulong uVar8;
  undefined4 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f67f208,0x12);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c25738;
  pppuVar2 = (undefined8 ***)&UNK_10f67d9eb;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0x94;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c25738;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a85f940;
    FUN_10a054dac(param_1,&DAT_10f35f003,FUN_10a88ba54,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,0x40,0xffffffff,0xffffffff,0xb);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a85f940;
    FUN_10a054dac(param_1,&UNK_10f67e9a4,FUN_10a88bbb8,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a85f940;
    FUN_10a054dac(param_1,&UNK_10f67e9b4,FUN_10a88c0f0,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a85f940;
    FUN_10a054dac(param_1,&UNK_10f67e9cb,FUN_10a88c2fc,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a85f940;
    FUN_10a054dac(param_1,&UNK_10f67e9dc,FUN_10a88c41c,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a85f940;
    FUN_10a054dac(param_1,&UNK_10f67e9f8,FUN_10a88c654,5,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a85f940;
    FUN_10a054dac(param_1,&UNK_10f67ea00,FUN_10a88d0c8,6,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a85f940;
    FUN_10a054dac(param_1,&UNK_10f67ea12,FUN_10a88d2f4,7,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a85f940;
    FUN_10a054dac(param_1,&UNK_10f67ea26,FUN_10a88d540,7,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a85f940;
    FUN_10a054dac(param_1,&UNK_10f67ea40,FUN_10a88d938,6,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a85f940;
    FUN_10a054dac(param_1,&UNK_10f67ea55,FUN_10a88db64,5,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a85f940;
    FUN_10a054dac(param_1,&UNK_10f67ea64,FUN_10a88dd54,5,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a85f940;
    FUN_10a054dac(param_1,&UNK_10f67ea75,FUN_10a88df40,6,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a85f940;
    FUN_10a054dac(param_1,&UNK_10f67ea84,FUN_10a88e200,5,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a85f940;
    FUN_10a054dac(param_1,&UNK_10f6730b4,FUN_10a88e3f0,7,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a85f940;
    FUN_10a054dac(param_1,&UNK_10f6730c6,FUN_10a88e708,6,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a85f940;
    FUN_10a054dac(param_1,&UNK_10f67ea96,FUN_10a88e934,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a85f940;
    FUN_10a054dac(param_1,&UNK_10f67eaaa,FUN_10a88fad0,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a85f940;
    FUN_10a054dac(param_1,&UNK_10f67eabe,FUN_10a890114,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a85f940;
    FUN_10a054dac(param_1,&UNK_10f67eadc,FUN_10a89059c,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,0x40,0xffffffff,0xffffffff,0xb);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a85f940;
    FUN_10a054dac(param_1,&UNK_10f67eaf8,FUN_10a890b4c,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,0x40,0xffffffff,0xffffffff,0xb);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a85f940;
    FUN_10a054dac(param_1,&UNK_10f67eb1a,FUN_10a891080,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,0,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a85f940;
    FUN_10a054dac(param_1,&UNK_10f67eb3b,FUN_10a891138,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a85f940;
    FUN_10a054dac(param_1,&UNK_10f67eb4d,FUN_10a8914c8,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a85f940;
    FUN_10a054dac(param_1,&DAT_10f2eb883,FUN_10a8915e4,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a85f940;
    FUN_10a054dac(param_1,&UNK_10f67eb6b,FUN_10a891698,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a85f940;
    FUN_10a054dac(param_1,&UNK_10f67eb76,FUN_10a8917e4,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a85f940;
    FUN_10a054dac(param_1,&UNK_10f67eb87,FUN_10a891c30,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a85f940;
    FUN_10a054dac(param_1,&UNK_10f67eb96,FUN_10a891d70,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a85f940;
    FUN_10a054dac(param_1,&UNK_10f67eba7,FUN_10a891e54,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a85f940;
    FUN_10a054dac(param_1,&UNK_10f67ebba,FUN_10a892018,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a85f940;
    FUN_10a054dac(param_1,&UNK_10f67ebcb,FUN_10a892260,2,*(undefined8 *)(param_1 + 0x40));
  }
  iVar4 = *(int *)(param_1 + 0x160);
  bVar7 = iVar4 != 100;
  if (bVar7) {
    iVar4 = 0x19;
  }
  uVar9 = 4;
  if (bVar7) {
    uVar9 = 0xffffffff;
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,iVar4,1,0xffffffff,0xffffffff,uVar9);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a85f940;
    FUN_10a054dac(param_1,&UNK_10f67ebe0,FUN_10a892410,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a85f940;
    FUN_10a054dac(param_1,&UNK_10f67ebf0,FUN_10a8925c4,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f67ec04,FUN_10a8927e0,0);
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f67ec16,FUN_10a8928cc,0);
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f67ec26,FUN_10a8929b8,0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar10 = *(ulong *)(lVar3 + -0x48);
    uVar11 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar11 >> 0x20);
    uVar9 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar10 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar8 = param_1;
    uStack_88 = uVar11;
    uStack_80 = uVar10;
    FUN_10a0051e8(param_1,uVar11 & 0xffffffff,uVar9,uStack_50 & 0xffffffff,uVar10 & 0xffffffff,uVar5
                 );
    if ((uVar8 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f67f208,0x12);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a85f940:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a85f944);
  (*pcVar6)();
}



/* Entry: 10a85f960; end: 10a85fa3f;  */

void FUN_10a85f960(undefined8 param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  
  (**(code **)(*param_2 + 200))();
  plVar5 = (long *)param_2[1];
  if (plVar5 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar5 != (long *)0x0) {
      param_2 = (long *)*param_2;
      if (param_2 != (long *)0x0) {
        (**(code **)(*param_2 + 0x10))(param_1,param_2,0x10);
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
        if (lVar6 != 0) {
          return;
        }
        (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
        return;
      }
    }
  }
  FUN_10a00946c(&UNK_10f650108);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a85fa2c);
  (*pcVar4)();
}



/* Entry: 10a85fa40; end: 10a85faa3;  */

undefined8 * FUN_10a85fa40(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a85faa4; end: 10a85faa7;  */

undefined8 * FUN_10a85faa4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c23a50;
  func_0x00010a05a86c(param_1 + 8);
  if (param_1[7] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  *param_1 = &PTR____cxa_pure_virtual_110bbb230;
  FUN_10a5ae930(param_1[1]);
  func_0x00010a004e5c(param_1 + 1);
  return param_1;
}



/* Entry: 10a85faa8; end: 10a8602bb;  */

undefined8 *
FUN_10a85faa8(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
             long *param_9,undefined8 *param_10)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long **pplVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long ***ppplVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long **pplStack_100;
  undefined **ppuStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long **pplStack_c0;
  long *plStack_b8;
  undefined **ppuStack_b0;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_110c239a8;
  param_1[7] = &PTR_DAT_110ae9180;
  param_1[0xe] = 0x32aaaba7;
  param_1[5] = &PTR_DAT_110c23a08;
  param_1[6] = &UNK_10897d5f0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = &UNK_10897d5f0;
  param_1[0x17] = &PTR_DAT_110ae9180;
  param_1[0x1e] = 0x32aaaba7;
  param_1[0x25] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  puVar6 = param_1;
  FUN_109d1a80c();
  pplStack_c0 = (long **)*puVar6;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_e8 = 0;
  lStack_f0 = 0;
  pplStack_100 = (long **)&UNK_1053a6a3c;
  ppuStack_f8 = &PTR_DAT_110ae9180;
  plStack_b8 = (long *)&UNK_1053a6a3c;
  ppuStack_b0 = &PTR_DAT_110ae9180;
  func_0x000109d18d1c(param_1 + 0x26,&UNK_10f67ec36,0x13,&pplStack_c0);
  func_0x0001092ba41c(&pplStack_c0);
  (*(code *)*ppuStack_f8)(&ppuStack_f8);
  puVar6 = (undefined8 *)0x20;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *(undefined4 *)(puVar6 + 3) = 0;
  *puVar6 = &PTR_FUN_110c24800;
  param_1[0x3d] = puVar6 + 3;
  param_1[0x3e] = puVar6;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  puVar6 = param_1 + 0x40;
  if (*(char *)((long)param_6 + 0x17) < '\0') {
    func_0x000107c3192c(puVar6,*param_6,param_6[1]);
  }
  else {
    uVar13 = param_6[1];
    uVar12 = *param_6;
    param_1[0x42] = param_6[2];
    param_1[0x41] = uVar13;
    *puVar6 = uVar12;
  }
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x52) = 0;
  *(undefined1 *)(param_1 + 0x57) = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0x3f800000;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  *(undefined4 *)(param_1 + 100) = 0x3f800000;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0x3f800000;
  param_1[0x6a] = param_2;
  lVar9 = param_3[1];
  uVar12 = *param_3;
  param_1[0x6c] = param_3[1];
  param_1[0x6b] = uVar12;
  if (lVar9 != 0) {
    plVar8 = (long *)(lVar9 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar9 = param_4[1];
  uVar12 = *param_4;
  param_1[0x6e] = param_4[1];
  param_1[0x6d] = uVar12;
  if (lVar9 != 0) {
    plVar8 = (long *)(lVar9 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  param_1[0x6f] = *param_5;
  lVar9 = param_5[1];
  param_1[0x70] = lVar9;
  if (lVar9 != 0) {
    plVar8 = (long *)(lVar9 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a05a5d4(param_1 + 0x71,&pplStack_c0);
  param_1[0x74] = 0;
  param_1[0x73] = 0;
  FUN_10a892a74(param_1 + 0x75);
  puVar1 = param_1 + 0x77;
  param_1[0x7e] = 0;
  param_1[0x7d] = 0;
  param_1[0x80] = 0;
  param_1[0x7f] = 0;
  puVar2 = param_1 + 0x81;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  param_1[0x7c] = 0;
  param_1[0x7b] = 0;
  param_1[0x78] = 0;
  *puVar1 = 0;
  if (param_2 == 0) {
    *(undefined1 *)((long)param_1 + 0x41f) = 0x10;
    *puVar2 = 0x2a2a2a2a2a2a2a2a;
    param_1[0x82] = 0x2a2a2a2a2a2a2a2a;
    *(undefined1 *)(param_1 + 0x83) = 0;
  }
  else {
    FUN_10a85f960(puVar2,*(undefined8 *)(*(long *)(param_2 + 0x100) + 0x1c8));
  }
  *(undefined1 *)(param_1 + 0x84) = 0;
  param_1[0x86] = 0;
  param_1[0x85] = 0;
  param_1[0x87] = 0x32aaaba7;
  param_1[0x89] = 0;
  param_1[0x88] = 0;
  param_1[0x8b] = 0;
  param_1[0x8a] = 0;
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  param_1[0x8f] = 0;
  param_1[0x8e] = 0;
  param_1[0x91] = 0;
  param_1[0x90] = 0;
  param_1[0x93] = 0;
  param_1[0x92] = 0;
  param_1[0x94] = 0;
  puVar7 = (undefined8 *)0x58;
  __Znwm();
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_DAT_110bf7fc8;
  puVar7[8] = 0;
  puVar7[7] = 0;
  puVar7[6] = 0;
  puVar7[5] = 0;
  *(undefined8 *)((long)puVar7 + 0x4d) = 0;
  *(undefined8 *)((long)puVar7 + 0x45) = 0;
  puVar7[4] = 0;
  puVar7[3] = 0;
  param_1[0x95] = puVar7 + 3;
  param_1[0x96] = puVar7;
  FUN_10a5cf1fc(param_1 + 0x95);
  *(undefined4 *)(param_1 + 0x97) = 0;
  FUN_10a876484(param_1 + 0x98,param_2,param_6,param_1 + 0x6b,param_1 + 0x71,param_1);
  param_1[0xa6] = FUN_10a87eb30;
  param_1[0xa7] = &PTR_DAT_110ae9180;
  param_1[0xaf] = 0;
  param_1[0xae] = 0;
  param_1[0xb0] = *param_7;
  (**(code **)(param_7[1] + 0x10))(param_1 + 0xb1,param_7 + 1);
  param_1[0xb8] = *param_8;
  (**(code **)(param_8[1] + 0x10))(param_1 + 0xb9);
  param_1[0xc6] = 0;
  param_1[0xc5] = 0;
  param_1[0xc4] = 0;
  param_1[0xc3] = 0;
  param_1[0xc2] = 0;
  param_1[0xc1] = 0;
  param_1[0xc0] = 0;
  param_1[199] = *param_10;
  (**(code **)(param_10[1] + 0x10))(param_1 + 200,param_10 + 1);
  if (*param_9 != 0) {
    FUN_10a8602bc(param_1 + 0x46,*param_9,param_9[1]);
    *(undefined1 *)(param_1 + 0x84) = 0;
    FUN_10a892d0c(&pplStack_c0,param_1[0x6d],param_1[0x6e]);
    plVar8 = plStack_b8;
    pplVar5 = pplStack_c0;
    pplStack_c0 = (long **)0x0;
    plStack_b8 = (long *)0x0;
    plVar10 = (long *)param_1[0xaf];
    param_1[0xaf] = plVar8;
    param_1[0xae] = pplVar5;
    if (plVar10 != (long *)0x0) {
      plVar8 = plVar10 + 1;
      do {
        lVar9 = *plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    plVar8 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar10 = plStack_b8 + 1;
      do {
        lVar9 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
  }
  plVar8 = (long *)0x60;
  __Znwm();
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_110c24850;
  pplStack_c0 = (long **)(plVar8 + 3);
  *pplStack_c0 = (long *)0x32aaaba7;
  plVar8[5] = 0;
  plVar8[4] = 0;
  plVar8[7] = 0;
  plVar8[6] = 0;
  plVar8[9] = 0;
  plVar8[8] = 0;
  plVar8[0xb] = 0;
  plVar8[10] = 0;
  plStack_b8 = plVar8;
  FUN_10a85fa40(puVar1,&pplStack_c0);
  plVar8 = plStack_b8;
  if (plStack_b8 != (long *)0x0) {
    plVar10 = plStack_b8 + 1;
    do {
      lVar9 = *plVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  lVar9 = param_1[0x6a];
  ppplVar11 = &pplStack_100;
  func_0x000107c2b054(ppplVar11,&UNK_10f67ec4a);
  if (lVar9 != 0) {
    ppplVar11 = *(long ****)(lVar9 + 0x8d8);
    func_0x000107c2b054(&pplStack_c0,"true");
    FUN_10a76bdb0(ppplVar11,&pplStack_100,&pplStack_c0);
    if ((long)ppuStack_b0 < 0) {
      ppplVar11 = (long ***)pplStack_c0;
      __ZdlPv(pplStack_c0);
    }
  }
  if (lStack_f0 < 0) {
    ppplVar11 = (long ***)pplStack_100;
    __ZdlPv(pplStack_100);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_1;
  }
  ___stack_chk_fail();
  do {
    func_0x00010a89322c(param_1 + 0x3d);
    func_0x000109d18f34(param_1 + 0x26);
    __ZNSt3__15mutexD1Ev(param_1 + 0x1e);
    (**(code **)param_1[0x17])(param_1 + 0x17);
    __ZNSt3__15mutexD1Ev(param_1 + 0xe);
    (**(code **)param_1[7])(param_1 + 7);
    if (param_1[4] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    *param_1 = &PTR_DAT_110b17898;
    func_0x00010a004dac(param_1 + 1);
    __Unwind_Resume(ppplVar11);
    FUN_10a87eb8c(param_1 + 0x8f);
    __ZNSt3__15mutexD1Ev(param_1 + 0x87);
    if (param_1[0x86] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (*(char *)((long)param_1 + 0x41f) < '\0') {
      __ZdlPv(*puVar2);
    }
    func_0x00010a061620(param_1 + 0x7f);
    func_0x00010a061620(param_1 + 0x7d);
    func_0x00010a061620(param_1 + 0x7b);
    func_0x00010a061620(param_1 + 0x79);
    func_0x00010a893444(puVar1);
    func_0x00010a892cb4(param_1 + 0x75);
    func_0x00010a8933ec(param_1 + 0x73);
    func_0x00010a05a86c(param_1 + 0x71);
    FUN_10a5ca4ec(param_1 + 0x6f);
    func_0x00010a5ca428(param_1 + 0x6d);
    if (param_1[0x6c] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    FUN_10a893354(param_1 + 0x65);
    FUN_10a893354(param_1 + 0x60);
    FUN_10a87ece8(param_1 + 0x5b);
    FUN_10a29f714(param_1 + 0x58);
    if (*(char *)(param_1 + 0x57) == '\x01') {
      FUN_10a8932bc(param_1 + 0x52);
    }
    FUN_10a8932bc(param_1 + 0x4d);
    if (*(char *)((long)param_1 + 0x267) < '\0') {
      __ZdlPv(param_1[0x4a]);
    }
    func_0x00010a5c92ec(param_1 + 0x48);
    func_0x00010a5c92ec(param_1 + 0x46);
    if (*(char *)((long)param_1 + 0x22f) < '\0') {
      __ZdlPv(param_1[0x43]);
    }
    if (*(char *)((long)param_1 + 0x217) < '\0') {
      __ZdlPv(*puVar6);
    }
  } while( true );
}



/* Entry: 10a8602bc; end: 10a86032f;  */

undefined8 * FUN_10a8602bc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (param_3 != 0) {
    plVar5 = (long *)(param_3 + 8);
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
  *param_1 = param_2;
  param_1[1] = param_3;
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



/* Entry: 10a860330; end: 10a860543;  */

undefined8 * FUN_10a860330(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c239a8;
  param_1[5] = &PTR_DAT_110c23a08;
  FUN_10a860544();
  (**(code **)param_1[200])(param_1 + 200);
  if (*(char *)((long)param_1 + 0x627) < '\0') {
    __ZdlPv(param_1[0xc2]);
  }
  func_0x00010a757f24(param_1 + 0xc0);
  (**(code **)param_1[0xb9])(param_1 + 0xb9);
  (**(code **)param_1[0xb1])(param_1 + 0xb1);
  FUN_10a8931d4(param_1 + 0xae);
  (**(code **)param_1[0xa7])(param_1 + 0xa7);
  FUN_10a87eb40(param_1 + 0x98);
  func_0x00010a004e5c(param_1 + 0x95);
  FUN_10a87eb8c(param_1 + 0x8f);
  __ZNSt3__15mutexD1Ev(param_1 + 0x87);
  if (param_1[0x86] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x41f) < '\0') {
    __ZdlPv(param_1[0x81]);
  }
  func_0x00010a061620(param_1 + 0x7f);
  func_0x00010a061620(param_1 + 0x7d);
  func_0x00010a061620(param_1 + 0x7b);
  func_0x00010a061620(param_1 + 0x79);
  func_0x00010a893444(param_1 + 0x77);
  func_0x00010a892cb4(param_1 + 0x75);
  func_0x00010a8933ec(param_1 + 0x73);
  func_0x00010a05a86c(param_1 + 0x71);
  FUN_10a5ca4ec(param_1 + 0x6f);
  func_0x00010a5ca428(param_1 + 0x6d);
  if (param_1[0x6c] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a893354(param_1 + 0x65);
  FUN_10a893354(param_1 + 0x60);
  FUN_10a87ece8(param_1 + 0x5b);
  FUN_10a29f714(param_1 + 0x58);
  if (*(char *)(param_1 + 0x57) == '\x01') {
    FUN_10a8932bc(param_1 + 0x52);
  }
  FUN_10a8932bc(param_1 + 0x4d);
  if (*(char *)((long)param_1 + 0x267) < '\0') {
    __ZdlPv(param_1[0x4a]);
  }
  func_0x00010a5c92ec(param_1 + 0x48);
  func_0x00010a5c92ec(param_1 + 0x46);
  if (*(char *)((long)param_1 + 0x22f) < '\0') {
    __ZdlPv(param_1[0x43]);
  }
  if (*(char *)((long)param_1 + 0x217) < '\0') {
    __ZdlPv(param_1[0x40]);
  }
  func_0x00010a89322c(param_1 + 0x3d);
  func_0x000109d18f34(param_1 + 0x26);
  __ZNSt3__15mutexD1Ev(param_1 + 0x1e);
  (**(code **)param_1[0x17])();
  __ZNSt3__15mutexD1Ev(param_1 + 0xe);
  (**(code **)param_1[7])(param_1 + 7);
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a860544; end: 10a860827;  */

void FUN_10a860544(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  int *piVar9;
  ulong uVar10;
  long lVar11;
  long *plStack_48;
  long *plStack_40;
  char cStack_31;
  
  FUN_109d1918c(&plStack_48,param_1 + 0x130);
  FUN_109d1a244(&plStack_48);
  if (plStack_48 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_48 + 1);
    do {
      uVar10 = *puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar10 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar10 & 0x1fffffffc) == 4) {
      do {
        uVar10 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar10 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar10 - 1 == 0) {
        (**(code **)(*plStack_48 + 8))();
      }
    }
  }
  piVar9 = *(int **)(param_1 + 0x1e8);
  do {
    iVar3 = *piVar9;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar9,0x10);
    if (bVar5) {
      *piVar9 = 4;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar3 == 4) {
    return;
  }
  func_0x000107c2b054(&plStack_48,&UNK_10f67d9eb);
  if (*(char *)(param_1 + 0x4bb) == '\x01') {
    *(undefined1 *)(param_1 + 0x4bb) = 0;
    FUN_10a86a770(param_1,"cancelled",9,&plStack_48);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(plStack_48);
  }
  if (*(char *)(param_1 + 0x627) < '\0') {
    if (*(long *)(param_1 + 0x618) == 0) goto LAB_10a8606d8;
  }
  else if (*(char *)(param_1 + 0x627) == '\0') goto LAB_10a8606d8;
  plVar6 = *(long **)(param_1 + 0x360);
  if ((plVar6 != (long *)0x0) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_40 = plVar6, plVar6 != (long *)0x0)) {
    plStack_48 = *(long **)(param_1 + 0x358);
    if (plStack_48 != (long *)0x0) {
      (**(code **)(*plStack_48 + 8))(plStack_48,param_1 + 0x610);
      ppuVar7 = &PTR_PTR_1133043a8;
      FUN_10ae079a0(0,&PTR_PTR_1133043a8);
      FUN_10ae07cd4(ppuVar7,&PTR_PTR_1133043a8);
    }
    plVar2 = plVar6 + 1;
    do {
      lVar11 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  if (*(char *)(param_1 + 0x627) < '\0') {
    **(undefined1 **)(param_1 + 0x610) = 0;
    *(undefined8 *)(param_1 + 0x618) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x610) = 0;
    *(undefined1 *)(param_1 + 0x627) = 0;
  }
LAB_10a8606d8:
  if (*(char *)(*(long *)(param_1 + 0x378) + 0xa8) == '\x01') {
    ppuVar7 = &PTR_PTR_113303fd8;
    FUN_10ae079a0(0,&PTR_PTR_113303fd8);
    FUN_10ae07cd4(ppuVar7,&PTR_PTR_113303fd8);
    (**(code **)(**(long **)(param_1 + 0x368) + 0x10))(*(long **)(param_1 + 0x368),FUN_10a865700);
    ppuVar7 = &PTR_PTR_1133040d0;
    FUN_10ae079a0(0,&PTR_PTR_1133040d0);
    FUN_10ae07cd4(ppuVar7,&PTR_PTR_1133040d0);
    (**(code **)(**(long **)(param_1 + 0x368) + 0x110))();
    ppuVar7 = &PTR_PTR_113303ff8;
    FUN_10ae079a0(0,&PTR_PTR_113303ff8);
    FUN_10ae07cd4(ppuVar7,&PTR_PTR_113303ff8);
    (**(code **)(**(long **)(param_1 + 0x368) + 0x28))();
  }
  ppuVar7 = &PTR_PTR_113304018;
  ppuVar8 = &PTR_PTR_1133040f8;
  FUN_10ae079a0(0,&PTR_PTR_1133040f8);
  FUN_10ae07cd4(ppuVar8,&PTR_PTR_1133040f8);
  (**(code **)(**(long **)(param_1 + 0x368) + 0x88))();
  FUN_10ae079a0(0,&PTR_PTR_113304018);
  FUN_10ae07cd4(ppuVar7,&PTR_PTR_113304018);
  (**(code **)(**(long **)(param_1 + 0x368) + 0xb0))();
  func_0x00010a225c4c(param_1 + 0x3f8);
  func_0x00010a225c4c(param_1 + 0x3d8);
  func_0x00010a225c4c(param_1 + 0x3c8);
  func_0x00010a225c4c(param_1 + 1000);
  return;
}



/* Entry: 10a860828; end: 10a860833;  */

undefined8 * FUN_10a860828(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c239a8;
  param_1[5] = &PTR_DAT_110c23a08;
  FUN_10a860544();
  (**(code **)param_1[200])(param_1 + 200);
  if (*(char *)((long)param_1 + 0x627) < '\0') {
    __ZdlPv(param_1[0xc2]);
  }
  func_0x00010a757f24(param_1 + 0xc0);
  (**(code **)param_1[0xb9])(param_1 + 0xb9);
  (**(code **)param_1[0xb1])(param_1 + 0xb1);
  FUN_10a8931d4(param_1 + 0xae);
  (**(code **)param_1[0xa7])(param_1 + 0xa7);
  FUN_10a87eb40(param_1 + 0x98);
  func_0x00010a004e5c(param_1 + 0x95);
  FUN_10a87eb8c(param_1 + 0x8f);
  __ZNSt3__15mutexD1Ev(param_1 + 0x87);
  if (param_1[0x86] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x41f) < '\0') {
    __ZdlPv(param_1[0x81]);
  }
  func_0x00010a061620(param_1 + 0x7f);
  func_0x00010a061620(param_1 + 0x7d);
  func_0x00010a061620(param_1 + 0x7b);
  func_0x00010a061620(param_1 + 0x79);
  func_0x00010a893444(param_1 + 0x77);
  func_0x00010a892cb4(param_1 + 0x75);
  func_0x00010a8933ec(param_1 + 0x73);
  func_0x00010a05a86c(param_1 + 0x71);
  FUN_10a5ca4ec(param_1 + 0x6f);
  func_0x00010a5ca428(param_1 + 0x6d);
  if (param_1[0x6c] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a893354(param_1 + 0x65);
  FUN_10a893354(param_1 + 0x60);
  FUN_10a87ece8(param_1 + 0x5b);
  FUN_10a29f714(param_1 + 0x58);
  if (*(char *)(param_1 + 0x57) == '\x01') {
    FUN_10a8932bc(param_1 + 0x52);
  }
  FUN_10a8932bc(param_1 + 0x4d);
  if (*(char *)((long)param_1 + 0x267) < '\0') {
    __ZdlPv(param_1[0x4a]);
  }
  func_0x00010a5c92ec(param_1 + 0x48);
  func_0x00010a5c92ec(param_1 + 0x46);
  if (*(char *)((long)param_1 + 0x22f) < '\0') {
    __ZdlPv(param_1[0x43]);
  }
  if (*(char *)((long)param_1 + 0x217) < '\0') {
    __ZdlPv(param_1[0x40]);
  }
  func_0x00010a89322c(param_1 + 0x3d);
  func_0x000109d18f34(param_1 + 0x26);
  __ZNSt3__15mutexD1Ev(param_1 + 0x1e);
  (**(code **)param_1[0x17])();
  __ZNSt3__15mutexD1Ev(param_1 + 0xe);
  (**(code **)param_1[7])(param_1 + 7);
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a860834; end: 10a86085f;  */

void FUN_10a860834(void)

{
  FUN_10a860330();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a860860; end: 10a8608ab;  */

void FUN_10a860860(long param_1,undefined8 param_2)

{
  __ZNSt3__15mutex4lockEv(param_1 + 0x438);
  FUN_10a8a44e8(param_1 + 0x478,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x438);
  return;
}



/* Entry: 10a8608ac; end: 10a860a2f;  */

undefined *** FUN_10a8608ac(long param_1,code **param_2)

{
  undefined **ppuVar1;
  undefined ***pppuVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **appuStack_160 [7];
  long lStack_128;
  code **ppcStack_120;
  undefined ***pppuStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  code *pcStack_f8;
  undefined **appuStack_f0 [7];
  long lStack_b8;
  code **ppcStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined ***pppuStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined ***pppuStack_50;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_1 + 0x300;
  FUN_10a8934f8();
  if (lVar5 == 0) {
    FUN_10a5ca860(&uStack_78,&pcStack_68,&UNK_10f67d9eb,&UNK_10f67d9eb,&UNK_10f67d9eb);
  }
  else {
    lVar5 = param_1 + 0x300;
    FUN_10a894b50(lVar5,param_2);
    if (lVar5 == 0) goto LAB_10a8609f0;
    uStack_78 = *(undefined8 *)(lVar5 + 0x28);
    pppuStack_70 = *(undefined ****)(lVar5 + 0x30);
    if (pppuStack_70 != (undefined ***)0x0) {
      pppuVar6 = pppuStack_70 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppuVar6,0x10);
        if (bVar4) {
          *pppuVar6 = (undefined **)((long)*pppuVar6 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  if (pppuStack_70 != (undefined ***)0x0) {
    pppuVar6 = pppuStack_70 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar6,0x10);
      if (bVar4) {
        *pppuVar6 = (undefined **)((long)*pppuVar6 + 1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  pcStack_68 = FUN_10a893dc4;
  ppuStack_60 = &PTR_DAT_110c248d8;
  param_2 = &pcStack_68;
  pppuStack_50 = pppuStack_70;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_58 = uStack_78;
  FUN_10a860860(param_1,&pcStack_68);
  pppuVar6 = &ppuStack_60;
  (*(code *)*ppuStack_60)(pppuVar6);
  pppuVar7 = pppuStack_70;
  if (pppuStack_70 != (undefined ***)0x0) {
    pppuVar2 = pppuStack_70 + 1;
    do {
      ppuVar9 = *pppuVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
      if (bVar4) {
        *pppuVar2 = (undefined **)((long)ppuVar9 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (ppuVar9 == (undefined **)0x0) {
      (*(code *)(*pppuStack_70)[2])(pppuStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar7);
      pppuVar6 = pppuVar7;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return pppuVar6;
  }
  ___stack_chk_fail();
LAB_10a8609f0:
  puVar8 = &UNK_10f639994;
  FUN_109ffdddc();
  __Unwind_Resume(puVar8);
  pcStack_98 = FUN_10a860a30;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_f8 = FUN_10a8944d8;
  appuStack_f0[0] = &PTR_DAT_110c24908;
  ppcStack_b0 = param_2;
  puStack_a8 = puVar8;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_10a860860();
  pppuVar6 = appuStack_f0;
  (*(code *)*appuStack_f0[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return pppuVar6;
  }
  ___stack_chk_fail();
  (*(code *)*appuStack_f0[0])(appuStack_f0);
  __Unwind_Resume(pppuVar6);
  pcStack_108 = FUN_10a860acc;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  appuStack_160[0] = &PTR_FUN_110c24920;
  ppcStack_120 = param_2;
  pppuStack_118 = pppuVar6;
  ppuStack_110 = &puStack_a0;
  FUN_10a860860();
  pppuVar6 = appuStack_160;
  (*(code *)*appuStack_160[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_128) {
    ___stack_chk_fail();
    (*(code *)*appuStack_160[0])(appuStack_160);
    __Unwind_Resume();
    if (*(char *)((long)pppuVar6 + 0x27) < '\0') {
      __ZdlPv(pppuVar6[2]);
    }
    ppuVar9 = pppuVar6[1];
    if (ppuVar9 != (undefined **)0x0) {
      ppuVar1 = ppuVar9 + 1;
      do {
        puVar8 = *ppuVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
        if (bVar4) {
          *ppuVar1 = puVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar8 == (undefined *)0x0) {
        (**(code **)(*ppuVar9 + 0x10))(ppuVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar9);
      }
    }
    return pppuVar6;
  }
  return pppuVar6;
}



/* Entry: 10a860a30; end: 10a860acb;  */

undefined *** FUN_10a860a30(undefined8 param_1)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  undefined ***pppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **appuStack_d0 [7];
  long lStack_98;
  code *pcStack_68;
  undefined **appuStack_60 [7];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a8944d8;
  appuStack_60[0] = &PTR_DAT_110c24908;
  FUN_10a860860(param_1,&pcStack_68);
  pppuVar4 = appuStack_60;
  (*(code *)*appuStack_60[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return pppuVar4;
  }
  ___stack_chk_fail();
  (*(code *)*appuStack_60[0])(appuStack_60);
  __Unwind_Resume(pppuVar4);
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  appuStack_d0[0] = &PTR_FUN_110c24920;
  FUN_10a860860();
  pppuVar4 = appuStack_d0;
  (*(code *)*appuStack_d0[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return pppuVar4;
  }
  ___stack_chk_fail();
  (*(code *)*appuStack_d0[0])(appuStack_d0);
  __Unwind_Resume();
  if (*(char *)((long)pppuVar4 + 0x27) < '\0') {
    __ZdlPv(pppuVar4[2]);
  }
  ppuVar6 = pppuVar4[1];
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar1 = ppuVar6 + 1;
    do {
      puVar5 = *ppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar3) {
        *ppuVar1 = puVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar5 == (undefined *)0x0) {
      (**(code **)(*ppuVar6 + 0x10))(ppuVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar6);
    }
  }
  return pppuVar4;
}



/* Entry: 10a860acc; end: 10a860b67;  */

undefined *** FUN_10a860acc(undefined8 param_1)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  undefined ***pppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  code *pcStack_68;
  undefined **appuStack_60 [7];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a894a50;
  appuStack_60[0] = &PTR_FUN_110c24920;
  FUN_10a860860(param_1,&pcStack_68);
  pppuVar4 = appuStack_60;
  (*(code *)*appuStack_60[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return pppuVar4;
  }
  ___stack_chk_fail();
  (*(code *)*appuStack_60[0])(appuStack_60);
  __Unwind_Resume();
  if (*(char *)((long)pppuVar4 + 0x27) < '\0') {
    __ZdlPv(pppuVar4[2]);
  }
  ppuVar6 = pppuVar4[1];
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar1 = ppuVar6 + 1;
    do {
      puVar5 = *ppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar3) {
        *ppuVar1 = puVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar5 == (undefined *)0x0) {
      (**(code **)(*ppuVar6 + 0x10))(ppuVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar6);
    }
  }
  return pppuVar4;
}



/* Entry: 10a860b68; end: 10a860bc7;  */

long FUN_10a860b68(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x27) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x10));
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



/* Entry: 10a860bc8; end: 10a860d8b;  */

void FUN_10a860bc8(long param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined8 *******pppppppuVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 ******ppppppuStack_48;
  long *plStack_40;
  byte bStack_31;
  
  ppuVar9 = &PTR_PTR_1133041f8;
  FUN_10ae079a0(0,&PTR_PTR_1133041f8);
  FUN_10ae07cd4(ppuVar9,&PTR_PTR_1133041f8);
  if (*param_2 == 0) {
    ppuVar9 = &PTR_PTR_113304510;
    FUN_10ae079a0(0,&PTR_PTR_113304510);
    FUN_10ae07cd4(ppuVar9,&PTR_PTR_113304510);
    ppppppuStack_48 = (undefined8 ******)0x0;
    plStack_40 = (long *)0x0;
    FUN_10a860d8c(param_1 + 0x240,&ppppppuStack_48);
    plVar3 = plStack_40;
    if (plStack_40 == (long *)0x0) {
      return;
    }
    plVar1 = plStack_40 + 1;
    do {
      lVar11 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar11 != 0) {
      return;
    }
    (**(code **)(*plStack_40 + 0x10))(plStack_40);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    return;
  }
  func_0x000107c2b054(&ppppppuStack_48);
  lVar11 = *(long *)(param_1 + 0x230);
  if (-1 < (char)bStack_31) {
    plStack_40 = (long *)(ulong)bStack_31;
  }
  bVar4 = *(byte *)(lVar11 + 0x47);
  uVar2 = *(ulong *)(lVar11 + 0x38);
  if (-1 < (char)bVar4) {
    uVar2 = (ulong)bVar4;
  }
  if (plStack_40 == (long *)uVar2) {
    pppppppuVar7 = (undefined8 *******)ppppppuStack_48;
    if (-1 < (char)bStack_31) {
      pppppppuVar7 = &ppppppuStack_48;
    }
    plVar3 = (long *)*(long *)(lVar11 + 0x30);
    if (-1 < (char)bVar4) {
      plVar3 = (long *)(lVar11 + 0x30);
    }
    _memcmp(pppppppuVar7,plVar3);
    if ((int)pppppppuVar7 != 0) goto LAB_10a860c70;
    uVar10 = *(undefined8 *)(param_1 + 0x238);
  }
  else {
LAB_10a860c70:
    lVar8 = param_1 + 0x328;
    FUN_10a894b50(lVar8,&ppppppuStack_48);
    if (lVar8 == 0) {
      FUN_10ae03140();
      ppuVar9 = &PTR_PTR_113304548;
      FUN_10ae079a0();
      FUN_10ae0314c();
      FUN_10ae07cd4(ppuVar9,&PTR_PTR_113304548);
      goto LAB_10a860d68;
    }
    lVar11 = *(long *)(lVar8 + 0x28);
    uVar10 = *(undefined8 *)(lVar8 + 0x30);
  }
  FUN_10a8602bc(param_1 + 0x240,lVar11,uVar10);
LAB_10a860d68:
  if ((char)bStack_31 < '\0') {
    __ZdlPv(ppppppuStack_48);
  }
  return;
}



/* Entry: 10a860d8c; end: 10a860def;  */

undefined8 * FUN_10a860d8c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a860df0; end: 10a860e8b;  */

/* WARNING: Removing unreachable block (ram,0x00010a861e30) */
/* WARNING: Removing unreachable block (ram,0x00010a861944) */
/* WARNING: Removing unreachable block (ram,0x00010a861868) */
/* WARNING: Removing unreachable block (ram,0x00010a8616cc) */
/* WARNING: Removing unreachable block (ram,0x00010a861288) */
/* WARNING: Removing unreachable block (ram,0x00010a86118c) */
/* WARNING: Removing unreachable block (ram,0x00010a8611ac) */
/* WARNING: Removing unreachable block (ram,0x00010a8614a4) */
/* WARNING: Removing unreachable block (ram,0x00010a8617e4) */
/* WARNING: Removing unreachable block (ram,0x00010a8618e8) */
/* WARNING: Removing unreachable block (ram,0x00010a861e1c) */
/* WARNING: Removing unreachable block (ram,0x00010a862010) */
/* WARNING: Type propagation algorithm not settling */

undefined8 ******* FUN_10a860df0(undefined8 *******param_1,code **param_2)

{
  int iVar1;
  code *pcVar2;
  undefined8 *******pppppppuVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *******pppppppuVar6;
  undefined8 *******pppppppuVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  undefined1 uVar11;
  char cVar12;
  bool bVar13;
  bool bVar14;
  undefined7 *puVar15;
  long **pplVar16;
  undefined8 *******pppppppuVar17;
  undefined8 *******pppppppuVar18;
  undefined8 *****pppppuVar19;
  long *plVar20;
  undefined8 *puVar21;
  code **ppcVar22;
  undefined **ppuVar23;
  undefined8 *****pppppuVar24;
  undefined8 in_x7;
  undefined8 ******ppppppuVar25;
  code *pcVar26;
  undefined8 ****ppppuVar27;
  undefined8 *****pppppuVar28;
  undefined *puVar29;
  undefined8 ******ppppppuVar30;
  long lVar31;
  ulong uVar32;
  code **unaff_x21;
  undefined8 *****pppppuVar33;
  long *plVar34;
  undefined8 uVar35;
  long lVar36;
  undefined8 ******ppppppuVar37;
  undefined8 *******pppppppuStack_330;
  undefined8 *******pppppppuStack_328;
  undefined8 ******ppppppuStack_320;
  long *plStack_318;
  char cStack_309;
  long *plStack_308;
  long *plStack_300;
  long *plStack_2f8;
  undefined8 uStack_2f0;
  ulong uStack_2e8;
  byte bStack_2d9;
  undefined8 *******pppppppuStack_2d8;
  ulong uStack_2d0;
  byte bStack_2c1;
  undefined1 auStack_2c0 [8];
  undefined8 *****pppppuStack_2b8;
  undefined1 auStack_2b0 [8];
  undefined8 *****pppppuStack_2a8;
  undefined8 *****pppppuStack_2a0;
  undefined8 *****pppppuStack_298;
  undefined7 uStack_290;
  undefined1 uStack_289;
  char cStack_279;
  undefined1 uStack_278;
  undefined6 uStack_277;
  byte bStack_271;
  undefined7 uStack_270;
  undefined1 uStack_269;
  long lStack_268;
  undefined8 *******pppppppuStack_260;
  undefined7 uStack_258;
  byte bStack_251;
  undefined7 uStack_250;
  byte bStack_249;
  undefined8 uStack_248;
  undefined8 ******ppppppuStack_240;
  undefined7 uStack_238;
  undefined1 uStack_231;
  byte bStack_229;
  undefined1 uStack_228;
  ulong uStack_218;
  undefined8 ******ppppppuStack_210;
  undefined7 uStack_208;
  undefined1 uStack_201;
  undefined7 uStack_200;
  byte bStack_1f9;
  long lStack_1f0;
  undefined7 uStack_1d0;
  byte bStack_1c9;
  undefined1 uStack_1c8;
  undefined2 uStack_1c7;
  undefined1 uStack_1c5;
  undefined1 uStack_1c4;
  undefined2 uStack_1c3;
  byte bStack_1c1;
  undefined1 uStack_1c0;
  undefined6 uStack_1bf;
  byte bStack_1b9;
  long *plStack_1b8;
  long **pplStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  ulong uStack_188;
  long lStack_178;
  undefined8 uStack_f8;
  undefined8 *******pppppppuStack_f0;
  code *pcStack_e8;
  code *pcStack_e0;
  code *pcStack_d8;
  undefined **ppuStack_d0;
  undefined8 ******ppppppuStack_c8;
  undefined8 ******ppppppuStack_c0;
  code *pcStack_b8;
  code *pcStack_b0;
  long lStack_98;
  undefined8 ******ppppppuStack_58;
  undefined8 ******ppppppuStack_50;
  undefined8 ******ppppppuStack_48;
  undefined8 ******ppppppuStack_40;
  undefined8 *******pppppppuStack_38;
  
  ppppppuVar25 = *param_1;
  if (param_2 <= (code **)((long)param_1[2] - (long)ppppppuVar25 >> 4)) {
    return param_1;
  }
  if ((ulong)param_2 >> 0x3c == 0) {
    ppppppuVar30 = param_1[1];
    ppcVar22 = param_2;
    pppppppuStack_38 = param_1;
    FUN_10a87ed44();
    ppppppuVar25 = (undefined8 ******)((long)param_2 + ((long)ppppppuVar30 - (long)ppppppuVar25));
    ppppppuVar30 = (undefined8 ******)((long)ppppppuVar25 - ((long)param_1[1] - (long)*param_1));
    _memcpy(ppppppuVar30);
    ppppppuStack_58 = *param_1;
    *param_1 = ppppppuVar30;
    param_1[1] = ppppppuVar25;
    ppppppuStack_40 = param_1[2];
    param_1[2] = (undefined8 ******)(param_2 + (long)ppcVar22 * 2);
    pppppppuVar17 = &ppppppuStack_58;
    ppppppuStack_50 = ppppppuStack_58;
    ppppppuStack_48 = ppppppuStack_58;
    func_0x00010a87ed78(pppppppuVar17);
    return pppppppuVar17;
  }
  FUN_10a87ed30();
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppuVar17 = param_1;
  ppcVar22 = param_2;
  if ((*(char *)((long)param_1 + 0x4b9) == '\x01') && (pcVar26 = *param_2, pcVar26 != (code *)0x0))
  {
    if (((byte)pcVar26[0xb0] & 1) == 0) {
      FUN_10a5404ec(pcVar26 + 0x98,pcVar26 + 0x48);
    }
    FUN_10a875384();
    if (((ulong)param_1[0x57] & 1) == 0) {
      ppppppuStack_c0 = param_1[4];
      ppppppuStack_c8 = param_1[3];
      if (param_1[4] != (undefined8 ******)0x0) {
        ppppppuVar25 = param_1[4] + 2;
        do {
          cVar12 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(ppppppuVar25,0x10);
          if (bVar13) {
            *ppppppuVar25 = (undefined8 *****)((long)*ppppppuVar25 + 1);
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
      }
      pcStack_e8 = *param_2;
      pcVar26 = param_2[1];
      if (pcVar26 != (code *)0x0) {
        pcVar2 = pcVar26 + 8;
        do {
          cVar12 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
          if (bVar13) {
            *(long *)pcVar2 = *(long *)pcVar2 + 1;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
      }
      pcStack_d8 = FUN_10a8a79a0;
      ppuStack_d0 = &PTR_FUN_110c25098;
      uStack_f8 = 0;
      pppppppuStack_f0 = (undefined8 *******)0x0;
      if (pcVar26 != (code *)0x0) {
        pcVar2 = pcVar26 + 8;
        do {
          cVar12 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
          if (bVar13) {
            *(long *)pcVar2 = *(long *)pcVar2 + 1;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
      }
      unaff_x21 = &pcStack_d8;
      ppcVar22 = &pcStack_d8;
      pcStack_e0 = pcVar26;
      pcStack_b8 = pcStack_e8;
      pcStack_b0 = pcVar26;
      FUN_10a8693c8(param_1);
      (*(code *)*ppuStack_d0)(&ppuStack_d0);
      if (pcVar26 != (code *)0x0) {
        pcVar2 = pcVar26 + 8;
        do {
          lVar31 = *(long *)pcVar2;
          cVar12 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
          if (bVar13) {
            *(long *)pcVar2 = lVar31 + -1;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
        if (lVar31 == 0) {
          (**(code **)(*(long *)pcVar26 + 0x10))(pcVar26);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar26);
        }
      }
      pppppppuVar17 = pppppppuStack_f0;
      if (pppppppuStack_f0 != (undefined8 *******)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return pppppppuVar17;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_d0)(unaff_x21 + 1);
  FUN_10a875638(&uStack_f8);
  __Unwind_Resume();
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar26 = (code *)&UNK_10f67d9eb;
  if (*ppcVar22 != (code *)0x0) {
    pcVar26 = *ppcVar22;
  }
  func_0x000107c2b054(&uStack_1d0,pcVar26);
  pcVar26 = (code *)&UNK_10f67d9eb;
  if (ppcVar22[2] != (code *)0x0) {
    pcVar26 = ppcVar22[2];
  }
  func_0x000107c2b054(&pppppppuStack_260,pcVar26);
  pcVar26 = (code *)&UNK_10f67d9eb;
  if (ppcVar22[3] != (code *)0x0) {
    pcVar26 = ppcVar22[3];
  }
  func_0x000107c2b054(&ppppppuStack_210,pcVar26);
  uVar4 = CONCAT17(bStack_1c1,
                   CONCAT25(uStack_1c3,
                            CONCAT14(uStack_1c4,CONCAT13(uStack_1c5,CONCAT21(uStack_1c7,uStack_1c8))
                                    )));
  puVar15 = (undefined7 *)CONCAT17(bStack_1c9,uStack_1d0);
  if (-1 < (char)bStack_1b9) {
    uVar4 = (ulong)bStack_1b9;
    puVar15 = &uStack_1d0;
  }
  FUN_10ae03140(0,puVar15,uVar4);
  FUN_10ae03140();
  FUN_10ae03140();
  func_0x00010ae02ecc();
  ppuVar23 = &PTR_PTR_113305740;
  FUN_10ae079a0();
  FUN_10ae0314c();
  FUN_10ae0314c();
  FUN_10ae0314c();
  func_0x00010ae02edc();
  FUN_10ae07cd4(ppuVar23,&PTR_PTR_113305740);
  if ((char)bStack_249 < '\0') {
    __ZdlPv(pppppppuStack_260);
  }
  pcVar26 = (code *)&UNK_10f67d9eb;
  if (*ppcVar22 != (code *)0x0) {
    pcVar26 = *ppcVar22;
  }
  func_0x000107c2b054(&uStack_290,pcVar26);
  pcVar26 = (code *)&UNK_10f67d9eb;
  if (ppcVar22[3] != (code *)0x0) {
    pcVar26 = ppcVar22[3];
  }
  func_0x000107c2b054(&pppppppuStack_2d8,pcVar26);
  uVar4 = uStack_2d0;
  if (-1 < (char)bStack_2c1) {
    uVar4 = (ulong)bStack_2c1;
  }
  if (uVar4 == 0) {
    ppuVar23 = &PTR_PTR_113304580;
    FUN_10ae079a0(0,&PTR_PTR_113304580);
    FUN_10ae07cd4(ppuVar23,&PTR_PTR_113304580);
    pppppppuStack_330 = (undefined8 *******)0x0;
    pppppppuStack_328 = (undefined8 *******)0x0;
    goto LAB_10a861eb4;
  }
  pcVar26 = (code *)&UNK_10f67d9eb;
  if (ppcVar22[2] != (code *)0x0) {
    pcVar26 = ppcVar22[2];
  }
  func_0x000107c2b054(&uStack_2f0,pcVar26);
  if (-1 < (char)bStack_2d9) {
    uStack_2e8 = (ulong)bStack_2d9;
  }
  if (uStack_2e8 == 0) {
    ppuVar23 = &PTR_PTR_1133045b8;
    FUN_10ae079a0(0,&PTR_PTR_1133045b8);
    FUN_10ae07cd4(ppuVar23,&PTR_PTR_1133045b8);
    pppppppuStack_330 = (undefined8 *******)0x0;
    pppppppuStack_328 = (undefined8 *******)0x0;
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (pppppppuVar17 + 0x43,&uStack_290);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (pppppppuVar17[0x46] + 3,&uStack_2f0);
    pppppppuVar3 = pppppppuVar17 + 0x46;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (*pppppppuVar3 + 6,&pppppppuStack_2d8);
    ppppppuVar25 = *pppppppuVar3;
    pcVar26 = (code *)&UNK_10f67d9eb;
    if (ppcVar22[6] != (code *)0x0) {
      pcVar26 = ppcVar22[6];
    }
    func_0x000107c2b054(&uStack_1d0,pcVar26);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (ppppppuVar25 + 0x10,&uStack_1d0);
    pppppppuVar17[0x46][0xc] = (undefined8 *****)ppcVar22[8];
    iVar9 = *(int *)(pppppppuVar17 + 0x5a);
    iVar1 = iVar9 + 1;
    *(int *)(pppppppuVar17 + 0x5a) = iVar1;
    iVar10 = *(int *)((long)pppppppuVar17 + 0x2d4);
    if (iVar10 < iVar1) {
      iVar10 = iVar9 + 1;
    }
    *(int *)((long)pppppppuVar17 + 0x2d4) = iVar10;
    ppppppuVar25 = pppppppuVar17[0x44];
    pppppppuVar6 = (undefined8 *******)pppppppuVar17[0x43];
    if (-1 < (char)*(byte *)((long)pppppppuVar17 + 0x22f)) {
      ppppppuVar25 = (undefined8 ******)(ulong)*(byte *)((long)pppppppuVar17 + 0x22f);
      pppppppuVar6 = pppppppuVar17 + 0x43;
    }
    FUN_10ae03140(0,pppppppuVar6,ppppppuVar25);
    ppuVar23 = &PTR_PTR_113304228;
    FUN_10ae079a0();
    FUN_10ae0314c();
    FUN_10ae07cd4(ppuVar23,&PTR_PTR_113304228);
    plStack_308 = (long *)0x0;
    plStack_300 = (long *)0x0;
    plStack_2f8 = (long *)0x0;
    FUN_10a860df0(&plStack_308,(long)*(int *)(ppcVar22 + 10));
    if (0 < *(int *)(ppcVar22 + 10)) {
      lVar31 = 0;
      do {
        if ((*(long *)(ppcVar22[9] + lVar31 * 0x38 + 8) == 0) ||
           (*(long *)(ppcVar22[9] + lVar31 * 0x38) == 0)) {
          ppuVar23 = &PTR_PTR_1133056e8;
          FUN_10ae079a0(0,&PTR_PTR_1133056e8);
          FUN_10ae07cd4(ppuVar23,&PTR_PTR_1133056e8);
        }
        else {
          func_0x000107c2b054(&pppppppuStack_260);
          uVar4 = CONCAT17(bStack_251,uStack_258);
          if (-1 < (char)bStack_249) {
            uVar4 = (ulong)bStack_249;
          }
          uVar32 = uStack_2d0;
          if (-1 < (char)bStack_2c1) {
            uVar32 = (ulong)bStack_2c1;
          }
          if (uVar4 == uVar32) {
            pppppppuVar6 = pppppppuStack_260;
            if (-1 < (char)bStack_249) {
              pppppppuVar6 = &pppppppuStack_260;
            }
            pppppppuVar7 = pppppppuStack_2d8;
            if (-1 < (char)bStack_2c1) {
              pppppppuVar7 = &pppppppuStack_2d8;
            }
            pppppppuVar18 = pppppppuVar6;
            _memcmp(pppppppuVar6,pppppppuVar7,uVar4);
            if ((int)pppppppuVar18 != 0) goto LAB_10a8613cc;
            FUN_10ae03140(0,pppppppuVar6,uVar4);
            ppuVar23 = &PTR_PTR_1133059b8;
            FUN_10ae079a0();
            FUN_10ae0314c();
            FUN_10ae07cd4(ppuVar23,&PTR_PTR_1133059b8);
          }
          else {
LAB_10a8613cc:
            func_0x000107c2b054(&ppppppuStack_210,*(undefined8 *)(ppcVar22[9] + lVar31 * 0x38));
            puVar8 = &UNK_10f67d9eb;
            if (*(undefined **)(ppcVar22[9] + lVar31 * 0x38 + 0x10) != (undefined *)0x0) {
              puVar8 = *(undefined **)(ppcVar22[9] + lVar31 * 0x38 + 0x10);
            }
            func_0x000107c2b054(&uStack_278,puVar8);
            puVar8 = &UNK_10f67d9eb;
            if (*(undefined **)(ppcVar22[9] + lVar31 * 0x38 + 0x18) != (undefined *)0x0) {
              puVar8 = *(undefined **)(ppcVar22[9] + lVar31 * 0x38 + 0x18);
            }
            func_0x000107c2b054(&ppppppuStack_320,puVar8);
            uVar35 = *(undefined8 *)(ppcVar22[9] + lVar31 * 0x38 + 0x30);
            pppppuVar19 = (undefined8 *****)0xd0;
            __Znwm();
            pppppuVar33 = pppppuVar19 + 1;
            *pppppuVar33 = (undefined8 ****)0x0;
            pppppuVar19[2] = (undefined8 ****)0x0;
            *pppppuVar19 = (undefined8 ****)&PTR_FUN_110bf8238;
            pppppuVar28 = pppppuVar19 + 3;
            FUN_10a5caa80(pppppuVar28,&ppppppuStack_210,&uStack_278,&ppppppuStack_320,
                          &pppppppuStack_260,uVar35);
            puVar8 = &UNK_10f67d9eb;
            if (*(undefined **)(ppcVar22[9] + lVar31 * 0x38 + 0x20) != (undefined *)0x0) {
              puVar8 = *(undefined **)(ppcVar22[9] + lVar31 * 0x38 + 0x20);
            }
            pppppuStack_2a0 = pppppuVar28;
            pppppuStack_298 = pppppuVar19;
            func_0x000107c2b054(&uStack_1d0,puVar8);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (pppppuVar19 + 0x13,&uStack_1d0);
            FUN_10a895d54(pppppppuVar17 + 0x65,&pppppppuStack_260,&pppppppuStack_260,
                          &pppppuStack_2a0);
            uVar4 = CONCAT17(uStack_201,uStack_208);
            if (-1 < (char)bStack_1f9) {
              uVar4 = (ulong)bStack_1f9;
            }
            if (uVar4 != 0) {
              uVar4 = CONCAT17(bStack_251,uStack_258);
              pppppppuVar6 = pppppppuStack_260;
              if (-1 < (char)bStack_249) {
                uVar4 = (ulong)bStack_249;
                pppppppuVar6 = &pppppppuStack_260;
              }
              FUN_10ae03140(0,pppppppuVar6,uVar4);
              ppuVar23 = &PTR_PTR_113304940;
              FUN_10ae079a0();
              FUN_10ae0314c();
              FUN_10ae07cd4(ppuVar23,&PTR_PTR_113304940);
              FUN_10a895d54(pppppppuVar17 + 0x60,&ppppppuStack_210,&ppppppuStack_210,
                            &pppppuStack_2a0);
            }
            iVar9 = *(int *)(pppppppuVar17 + 0x5a);
            iVar1 = iVar9 + 1;
            *(int *)(pppppppuVar17 + 0x5a) = iVar1;
            iVar10 = *(int *)((long)pppppppuVar17 + 0x2d4);
            if (iVar10 < iVar1) {
              iVar10 = iVar9 + 1;
            }
            *(int *)((long)pppppppuVar17 + 0x2d4) = iVar10;
            pppppuVar24 = &pppppuStack_2a0;
            FUN_10a860e8c(pppppppuVar17);
            if (plStack_300 < plStack_2f8) {
              *plStack_300 = (long)pppppuVar28;
              plStack_300[1] = (long)pppppuVar19;
              do {
                cVar12 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(pppppuVar33,0x10);
                if (bVar13) {
                  *pppppuVar33 = (undefined8 ****)((long)*pppppuVar33 + 1);
                  cVar12 = ExclusiveMonitorsStatus();
                }
              } while (cVar12 != '\0');
              plStack_300 = plStack_300 + 2;
            }
            else {
              lVar36 = (long)plStack_300 - (long)plStack_308;
              uVar4 = (lVar36 >> 4) + 1;
              if (uVar4 >> 0x3c != 0) {
                FUN_10a87ed30();
                    /* WARNING: Does not return */
                pcVar26 = (code *)SoftwareBreakpoint(1,0x10a8621fc);
                (*pcVar26)();
              }
              uVar32 = (long)plStack_2f8 - (long)plStack_308 >> 3;
              if (uVar32 <= uVar4) {
                uVar32 = uVar4;
              }
              if (0x7fffffffffffffef < (ulong)((long)plStack_2f8 - (long)plStack_308)) {
                uVar32 = 0xfffffffffffffff;
              }
              pplStack_1b0 = &plStack_308;
              FUN_10a87ed44();
              plVar20 = (long *)(uVar32 + lVar36);
              *plVar20 = (long)pppppuVar28;
              plVar20[1] = (long)pppppuVar19;
              do {
                cVar12 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(pppppuVar33,0x10);
                if (bVar13) {
                  *pppppuVar33 = (undefined8 ****)((long)*pppppuVar33 + 1);
                  cVar12 = ExclusiveMonitorsStatus();
                }
              } while (cVar12 != '\0');
              plVar34 = (long *)((long)plVar20 - ((long)plStack_300 - (long)plStack_308));
              _memcpy(plVar34);
              uStack_1c0 = SUB81(plStack_308,0);
              uStack_1bf = (undefined6)((ulong)plStack_308 >> 8);
              bStack_1b9 = (byte)((ulong)plStack_308 >> 0x38);
              plStack_1b8 = plStack_2f8;
              uStack_1d0 = SUB87(plStack_308,0);
              uStack_1c7 = (undefined2)((ulong)plStack_308 >> 8);
              uStack_1c5 = (undefined1)((ulong)plStack_308 >> 0x18);
              uStack_1c4 = (undefined1)((ulong)plStack_308 >> 0x20);
              uStack_1c3 = (undefined2)((ulong)plStack_308 >> 0x28);
              plStack_308 = plVar34;
              plStack_300 = plVar20 + 2;
              plStack_2f8 = (long *)(uVar32 + (long)pppppuVar24 * 0x10);
              bStack_1c9 = bStack_1b9;
              uStack_1c8 = uStack_1c0;
              bStack_1c1 = bStack_1b9;
              func_0x00010a87ed78(&uStack_1d0);
              plStack_300 = plVar20 + 2;
            }
            do {
              ppppuVar27 = *pppppuVar33;
              cVar12 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(pppppuVar33,0x10);
              if (bVar13) {
                *pppppuVar33 = (undefined8 ****)((long)ppppuVar27 + -1);
                cVar12 = ExclusiveMonitorsStatus();
              }
            } while (cVar12 != '\0');
            if (ppppuVar27 == (undefined8 ****)0x0) {
              (*(code *)(*pppppuVar19)[2])(pppppuVar19);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar19);
            }
            if (cStack_309 < '\0') {
              __ZdlPv(ppppppuStack_320);
            }
            if (lStack_268 < 0) {
              __ZdlPv(CONCAT17(bStack_271,CONCAT61(uStack_277,uStack_278)));
            }
          }
          if ((char)bStack_249 < '\0') {
            __ZdlPv(pppppppuStack_260);
          }
        }
        lVar31 = lVar31 + 1;
      } while (lVar31 < *(int *)(ppcVar22 + 10));
    }
    FUN_10a860bc8(pppppppuVar17,ppcVar22 + 0xe);
    ppppppuStack_210 = (undefined8 ******)((ulong)ppppppuStack_210 & 0xffffffffffffff00);
    uStack_208 = 0;
    uStack_201 = 0;
    FUN_10a8819b0(&uStack_278,&plStack_308);
    FUN_10a881a60(&ppppppuStack_320,pppppppuVar3);
    func_0x000109381b20(&pppppuStack_2a0,&uStack_278);
    bStack_1b9 = 0xc;
    uStack_1c8 = 0x73;
    uStack_1c7 = 0x7265;
    uStack_1c5 = 0x73;
    uStack_1d0 = 0x746e6573657270;
    bStack_1c9 = 0x55;
    uStack_1c4 = 0;
    ppppppuVar25 = &ppppppuStack_210;
    func_0x0001095b7584(ppppppuVar25,&uStack_1d0);
    uVar11 = *(undefined1 *)ppppppuVar25;
    *(undefined1 *)ppppppuVar25 = pppppuStack_2a0._0_1_;
    pppppuStack_2a0 = (undefined8 *****)CONCAT71(pppppuStack_2a0._1_7_,uVar11);
    pppppuVar28 = ppppppuVar25[1];
    ppppppuVar25[1] = pppppuStack_298;
    pppppuStack_298 = pppppuVar28;
    func_0x000109380ffc(&pppppuStack_298,uVar11);
    func_0x000109381b20(auStack_2b0,&ppppppuStack_320);
    bStack_1b9 = 0xb;
    uStack_1c8 = 0x73;
    uStack_1c7 = 0x7265;
    uStack_1d0 = 0x746e6572727563;
    bStack_1c9 = 0x55;
    uStack_1c5 = 0;
    ppppppuVar25 = &ppppppuStack_210;
    func_0x0001095b7584(ppppppuVar25,&uStack_1d0);
    pppppppuVar3 = pppppppuVar17 + 0x48;
    uVar11 = *(undefined1 *)ppppppuVar25;
    *(undefined1 *)ppppppuVar25 = auStack_2b0[0];
    pppppuVar28 = ppppppuVar25[1];
    auStack_2b0[0] = uVar11;
    ppppppuVar25[1] = pppppuStack_2a8;
    pppppuStack_2a8 = pppppuVar28;
    func_0x000109380ffc(&pppppuStack_2a8,uVar11);
    if (*pppppppuVar3 != (undefined8 ******)0x0) {
      FUN_10a881a60(auStack_2c0,pppppppuVar3);
      bStack_1b9 = 8;
      uStack_1d0 = 0x65735574736f68;
      bStack_1c9 = 0x72;
      uStack_1c8 = 0;
      ppppppuVar25 = &ppppppuStack_210;
      func_0x0001095b7584(ppppppuVar25,&uStack_1d0);
      uVar11 = *(undefined1 *)ppppppuVar25;
      *(undefined1 *)ppppppuVar25 = auStack_2c0[0];
      pppppuVar28 = ppppppuVar25[1];
      auStack_2c0[0] = uVar11;
      ppppppuVar25[1] = pppppuStack_2b8;
      pppppuStack_2b8 = pppppuVar28;
      func_0x000109380ffc(&pppppuStack_2b8,uVar11);
    }
    FUN_10a0c32e4(&uStack_1d0,&ppppppuStack_210,0xffffffff,0x20,0,1);
    uVar4 = CONCAT17(bStack_1c1,
                     CONCAT25(uStack_1c3,
                              CONCAT14(uStack_1c4,
                                       CONCAT13(uStack_1c5,CONCAT21(uStack_1c7,uStack_1c8)))));
    puVar15 = (undefined7 *)CONCAT17(bStack_1c9,uStack_1d0);
    if (-1 < (char)bStack_1b9) {
      uVar4 = (ulong)bStack_1b9;
      puVar15 = &uStack_1d0;
    }
    FUN_10a3bf330(&pppppppuStack_260,puVar15,uVar4);
    func_0x000109380ffc(&plStack_318,(ulong)ppppppuStack_320 & 0xff);
    func_0x000109380ffc(&uStack_270,uStack_278);
    func_0x000109380ffc(&uStack_208,(ulong)ppppppuStack_210 & 0xff);
    FUN_10a874700(&uStack_278,pppppppuVar17[0x71]);
    plVar20 = (long *)0x138;
    __Znwm();
    pppppppuVar6 = pppppppuStack_260;
    plVar34 = plVar20 + 1;
    *plVar34 = 0;
    plVar20[2] = 0;
    *plVar20 = (long)&PTR_FUN_110b9f3b0;
    ppppppuVar25 = (undefined8 ******)(plVar20 + 3);
    pppppppuStack_260 = (undefined8 *******)0x0;
    uStack_1d0 = SUB87(pppppppuVar6,0);
    bStack_1c9 = (byte)((ulong)pppppppuVar6 >> 0x38);
    uStack_1c8 = (undefined1)uStack_258;
    uStack_1c7 = (undefined2)((uint7)uStack_258 >> 8);
    uStack_1c5 = (undefined1)((uint7)uStack_258 >> 0x18);
    uStack_1c4 = (undefined1)((uint7)uStack_258 >> 0x20);
    uStack_1c3 = (undefined2)((uint7)uStack_258 >> 0x28);
    (**(code **)(CONCAT17(bStack_249,uStack_250) + 0x10))(&uStack_1c0,&uStack_250);
    uStack_188 = uStack_218;
    ppppppuVar30 = pppppppuVar17[0x41];
    pppppppuVar6 = (undefined8 *******)pppppppuVar17[0x40];
    if (-1 < (char)*(byte *)((long)pppppppuVar17 + 0x217)) {
      ppppppuVar30 = (undefined8 ******)(ulong)*(byte *)((long)pppppppuVar17 + 0x217);
      pppppppuVar6 = pppppppuVar17 + 0x40;
    }
    ppppppuStack_210 = (undefined8 ******)FUN_10a8a636c;
    uStack_208 = 0x110c24f80;
    uStack_201 = 0;
    uStack_200 = CONCAT61(uStack_277,uStack_278);
    bStack_1f9 = bStack_271;
    lStack_1f0 = lStack_268;
    uStack_270 = 0;
    uStack_269 = 0;
    lStack_268 = 0;
    FUN_10a23708c(ppppppuVar25,&UNK_10e4df4cf,0x26,&UNK_10f647b49,4,&uStack_1d0,1,in_x7,pppppppuVar6
                  ,ppppppuVar30,&ppppppuStack_210);
    (**(code **)CONCAT17(uStack_201,uStack_208))(&uStack_208);
    FUN_10a042634(&uStack_1d0);
    ppppppuStack_320 = ppppppuVar25;
    plStack_318 = plVar20;
    FUN_10a8747a4(&uStack_278);
    uStack_1d0 = 0;
    bStack_1c9 = 0;
    uStack_1c8 = 0;
    uStack_1c7 = 0;
    uStack_1c5 = 0;
    uStack_1c4 = 0;
    uStack_1c3 = 0;
    bStack_1c1 = 0;
    ppppppuVar30 = pppppppuVar17[0x6c];
    if (ppppppuVar30 == (undefined8 ******)0x0) {
LAB_10a861b4c:
      ppuVar23 = &PTR_PTR_113305cc8;
      FUN_10ae079a0(0,&PTR_PTR_113305cc8);
      FUN_10ae07cd4(ppuVar23,&PTR_PTR_113305cc8);
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
      uStack_1c8 = SUB81(ppppppuVar30,0);
      uStack_1c7 = (undefined2)((ulong)ppppppuVar30 >> 8);
      uStack_1c5 = (undefined1)((ulong)ppppppuVar30 >> 0x18);
      uStack_1c4 = (undefined1)((ulong)ppppppuVar30 >> 0x20);
      uStack_1c3 = (undefined2)((ulong)ppppppuVar30 >> 0x28);
      bStack_1c1 = (byte)((ulong)ppppppuVar30 >> 0x38);
      if (ppppppuVar30 == (undefined8 ******)0x0) goto LAB_10a861b4c;
      ppppppuVar30 = pppppppuVar17[0x6b];
      uStack_1d0 = SUB87(ppppppuVar30,0);
      bStack_1c9 = (byte)((ulong)ppppppuVar30 >> 0x38);
      if (ppppppuVar30 == (undefined8 ******)0x0) goto LAB_10a861b4c;
      ppuVar23 = &PTR_PTR_113304740;
      FUN_10ae079a0(0,&PTR_PTR_113304740);
      FUN_10ae07cd4(ppuVar23,&PTR_PTR_113304740);
      uStack_208 = SUB87(plVar20,0);
      uStack_201 = (undefined1)((ulong)plVar20 >> 0x38);
      do {
        cVar12 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar34,0x10);
        if (bVar13) {
          *plVar34 = *plVar34 + 1;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      ppppppuStack_210 = ppppppuVar25;
      (*(code *)**ppppppuVar30)(ppppppuVar30,&ppppppuStack_210);
      plVar20 = (long *)CONCAT17(uStack_201,uStack_208);
      if (plVar20 != (long *)0x0) {
        plVar34 = plVar20 + 1;
        do {
          lVar31 = *plVar34;
          cVar12 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar34,0x10);
          if (bVar13) {
            *plVar34 = lVar31 + -1;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
        if (lVar31 == 0) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
        }
      }
    }
    plVar20 = (long *)CONCAT17(bStack_1c1,
                               CONCAT25(uStack_1c3,
                                        CONCAT14(uStack_1c4,
                                                 CONCAT13(uStack_1c5,CONCAT21(uStack_1c7,uStack_1c8)
                                                         ))));
    if (plVar20 != (long *)0x0) {
      plVar34 = plVar20 + 1;
      do {
        lVar31 = *plVar34;
        cVar12 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar34,0x10);
        if (bVar13) {
          *plVar34 = lVar31 + -1;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      if (lVar31 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
      }
    }
    plVar20 = plStack_318;
    if (plStack_318 != (long *)0x0) {
      plVar34 = plStack_318 + 1;
      do {
        lVar31 = *plVar34;
        cVar12 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar34,0x10);
        if (bVar13) {
          *plVar34 = lVar31 + -1;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      if (lVar31 == 0) {
        (**(code **)(*plStack_318 + 0x10))(plStack_318);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
      }
    }
    FUN_10a042634(&pppppppuStack_260);
    FUN_10a87b7b0(&uStack_1d0,pppppppuVar17,ppcVar22 + 0xb);
    ppppppuVar25 = *pppppppuVar3;
    if (ppppppuVar25 == (undefined8 ******)0x0) {
      ppppppuVar30 = (undefined8 ******)0xd0;
      __Znwm();
      ppppppuVar30[1] = (undefined8 *****)0x0;
      ppppppuVar30[2] = (undefined8 *****)0x0;
      *ppppppuVar30 = (undefined8 *****)&PTR_FUN_110bf8238;
      ppppppuVar25 = ppppppuVar30 + 3;
      *ppppppuVar25 = (undefined8 *****)&PTR_FUN_110c25680;
      ppppppuVar30[0x17] = (undefined8 *****)0x0;
      ppppppuVar30[0x16] = (undefined8 *****)0x0;
      ppppppuVar30[0x19] = (undefined8 *****)0x0;
      ppppppuVar30[0x18] = (undefined8 *****)0x0;
      ppppppuVar30[9] = (undefined8 *****)0x0;
      ppppppuVar30[8] = (undefined8 *****)0x0;
      ppppppuVar30[0xb] = (undefined8 *****)0x0;
      ppppppuVar30[10] = (undefined8 *****)0x0;
      ppppppuVar30[0xd] = (undefined8 *****)0x0;
      ppppppuVar30[0xc] = (undefined8 *****)0x0;
      ppppppuVar30[0xf] = (undefined8 *****)0x0;
      ppppppuVar30[0xe] = (undefined8 *****)0x0;
      ppppppuVar30[5] = (undefined8 *****)0x0;
      ppppppuVar30[4] = (undefined8 *****)0x0;
      ppppppuVar30[7] = (undefined8 *****)0x0;
      ppppppuVar30[6] = (undefined8 *****)0x0;
      ppppppuVar30[0xe] = (undefined8 *****)0x0;
      ppppppuVar30[0xf] = (undefined8 *****)0xffffffffffffffff;
      ppppppuVar30[0x13] = (undefined8 *****)0x0;
      ppppppuVar30[0x12] = (undefined8 *****)0x0;
      ppppppuVar30[0x15] = (undefined8 *****)0x0;
      ppppppuVar30[0x14] = (undefined8 *****)0x0;
      ppppppuVar30[0x11] = (undefined8 *****)0x0;
      ppppppuVar30[0x10] = (undefined8 *****)0x0;
      *(undefined1 *)(ppppppuVar30 + 0x16) = 0;
      uStack_278 = SUB81(ppppppuVar25,0);
      uStack_277 = (undefined6)((ulong)ppppppuVar25 >> 8);
      bStack_271 = (byte)((ulong)ppppppuVar25 >> 0x38);
      uStack_270 = SUB87(ppppppuVar30,0);
      uStack_269 = (undefined1)((ulong)ppppppuVar30 >> 0x38);
    }
    else {
      ppppppuVar30 = pppppppuVar17[0x49];
      uStack_278 = SUB81(ppppppuVar25,0);
      uStack_277 = (undefined6)((ulong)ppppppuVar25 >> 8);
      bStack_271 = (byte)((ulong)ppppppuVar25 >> 0x38);
      uStack_270 = SUB87(ppppppuVar30,0);
      uStack_269 = (undefined1)((ulong)ppppppuVar30 >> 0x38);
      if (ppppppuVar30 != (undefined8 ******)0x0) {
        ppppppuVar37 = ppppppuVar30 + 1;
        do {
          cVar12 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(ppppppuVar37,0x10);
          if (bVar13) {
            *ppppppuVar37 = (undefined8 *****)((long)*ppppppuVar37 + 1);
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
      }
    }
    pplVar16 = pplStack_1b0;
    plVar20 = plStack_1b8;
    pcVar26 = (code *)&UNK_10f67d9eb;
    if (ppcVar22[0x13] != (code *)0x0) {
      pcVar26 = ppcVar22[0x13];
    }
    pppppppuStack_328 = (undefined8 *******)0xb0;
    __Znwm();
    pppppppuStack_328[1] = (undefined8 ******)0x0;
    pppppppuStack_328[2] = (undefined8 ******)0x0;
    *pppppppuStack_328 = (undefined8 ******)&PTR_FUN_110c249a8;
    pppppppuStack_260 = (undefined8 *******)0x0;
    uStack_258 = 0;
    bStack_251 = 0;
    uStack_250 = 0;
    bStack_249 = 0;
    FUN_10a8828c4(&pppppppuStack_260,plVar20,pplVar16,(long)pplVar16 - (long)plVar20 >> 4);
    func_0x000107c2b054(&ppppppuStack_210,pcVar26);
    plVar34 = plStack_300;
    plVar20 = plStack_308;
    ppppppuVar37 = pppppppuVar17[0x46];
    pppppppuStack_328[7] = pppppppuVar17[0x47];
    pppppppuStack_328[6] = ppppppuVar37;
    pppppppuStack_328[4] = (undefined8 ******)0x0;
    pppppppuStack_328[5] = (undefined8 ******)0x0;
    pppppppuStack_328[3] = (undefined8 ******)&PTR_DAT_110c23e40;
    if (pppppppuVar17[0x47] != (undefined8 ******)0x0) {
      ppppppuVar37 = pppppppuVar17[0x47] + 1;
      do {
        cVar12 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(ppppppuVar37,0x10);
        if (bVar13) {
          *ppppppuVar37 = (undefined8 *****)((long)*ppppppuVar37 + 1);
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
    }
    pppppppuStack_330 = pppppppuStack_328 + 3;
    pppppppuStack_328[8] = ppppppuVar25;
    pppppppuStack_328[9] = ppppppuVar30;
    if (ppppppuVar30 != (undefined8 ******)0x0) {
      ppppppuVar25 = ppppppuVar30 + 1;
      do {
        cVar12 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(ppppppuVar25,0x10);
        if (bVar13) {
          *ppppppuVar25 = (undefined8 *****)((long)*ppppppuVar25 + 1);
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
    }
    pppppppuStack_328[10] = (undefined8 ******)0x0;
    pppppppuStack_328[0xb] = (undefined8 ******)0x0;
    pppppppuStack_328[0xc] = (undefined8 ******)0x0;
    if ((long)plStack_300 - (long)plStack_308 != 0) {
      FUN_10a87f0c4(pppppppuStack_328 + 10,(long)plStack_300 - (long)plStack_308 >> 4);
      ppppppuVar25 = pppppppuStack_328[0xb];
      do {
        lVar31 = plVar20[1];
        pppppuVar28 = (undefined8 *****)*plVar20;
        ppppppuVar25[1] = (undefined8 *****)plVar20[1];
        *ppppppuVar25 = pppppuVar28;
        if (lVar31 != 0) {
          plVar5 = (long *)(lVar31 + 8);
          do {
            cVar12 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar13) {
              *plVar5 = *plVar5 + 1;
              cVar12 = ExclusiveMonitorsStatus();
            }
          } while (cVar12 != '\0');
        }
        plVar20 = plVar20 + 2;
        ppppppuVar25 = ppppppuVar25 + 2;
      } while (plVar20 != plVar34);
      pppppppuStack_328[0xb] = ppppppuVar25;
    }
    pppppppuStack_328[0xd] = (undefined8 ******)0x0;
    pppppppuStack_328[0xe] = (undefined8 ******)0x0;
    pppppppuStack_328[0xf] = (undefined8 ******)0x0;
    lVar31 = CONCAT17(bStack_1c1,
                      CONCAT25(uStack_1c3,
                               CONCAT14(uStack_1c4,
                                        CONCAT13(uStack_1c5,CONCAT21(uStack_1c7,uStack_1c8)))));
    FUN_10a882820(pppppppuStack_328 + 0xd,CONCAT17(bStack_1c9,uStack_1d0),lVar31,
                  lVar31 - CONCAT17(bStack_1c9,uStack_1d0) >> 4);
    pppppppuStack_328[0x10] = (undefined8 ******)0x0;
    pppppppuStack_328[0x11] = (undefined8 ******)0x0;
    pppppppuStack_328[0x12] = (undefined8 ******)0x0;
    FUN_10a8828c4(pppppppuStack_328 + 0x10,pppppppuStack_260,CONCAT17(bStack_251,uStack_258),
                  CONCAT17(bStack_251,uStack_258) - (long)pppppppuStack_260 >> 4);
    pppppppuStack_328[0x14] = (undefined8 ******)CONCAT17(uStack_201,uStack_208);
    pppppppuStack_328[0x13] = ppppppuStack_210;
    pppppppuStack_328[0x15] = (undefined8 ******)CONCAT17(bStack_1f9,uStack_200);
    func_0x00010a8829b0(&pppppppuStack_260);
    if (ppppppuVar30 != (undefined8 ******)0x0) {
      ppppppuVar25 = ppppppuVar30 + 1;
      do {
        pppppuVar28 = *ppppppuVar25;
        cVar12 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(ppppppuVar25,0x10);
        if (bVar13) {
          *ppppppuVar25 = (undefined8 *****)((long)pppppuVar28 + -1);
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      if (pppppuVar28 == (undefined8 *****)0x0) {
        (*(code *)(*ppppppuVar30)[2])(ppppppuVar30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar30);
      }
    }
    func_0x00010a8829b0(&plStack_1b8);
    FUN_10a87f1e0(&uStack_1d0);
    func_0x00010a87edc4(&plStack_308);
  }
  if ((char)bStack_2d9 < '\0') {
    __ZdlPv(uStack_2f0);
  }
LAB_10a861eb4:
  if ((char)bStack_2c1 < '\0') {
    __ZdlPv(pppppppuStack_2d8);
  }
  if (cStack_279 < '\0') {
    __ZdlPv(CONCAT17(uStack_289,uStack_290));
  }
  if (pppppppuStack_330 == (undefined8 *******)0x0) {
    uStack_1d0 = 0x10a89627c;
    bStack_1c9 = 0;
    uStack_1c8 = 0xe8;
    uStack_1c7 = 0xc249;
    uStack_1c5 = 0x10;
    uStack_1c4 = 1;
    uStack_1c3 = 0;
    bStack_1c1 = 0;
    FUN_10a860860(pppppppuVar17,&uStack_1d0);
    pppppppuVar17 = (undefined8 *******)&uStack_1c8;
    (**(code **)CONCAT17(bStack_1c1,
                         CONCAT25(uStack_1c3,
                                  CONCAT14(uStack_1c4,
                                           CONCAT13(uStack_1c5,CONCAT21(uStack_1c7,uStack_1c8))))))
              ();
  }
  else {
    pppppppuStack_260 = (undefined8 *******)((ulong)pppppppuStack_260 & 0xffffffffffffff00);
    uStack_228 = 0;
    if ((ppcVar22[0x12] == (code *)0x0) || (*(long *)ppcVar22[0x12] == 0)) {
      bVar13 = false;
    }
    else {
      func_0x000107c2b054(&uStack_1d0);
      pcVar26 = ppcVar22[0x12];
      puVar29 = *(undefined **)(pcVar26 + 0x18);
      puVar8 = &UNK_10f67d9eb;
      if (puVar29 != (undefined *)0x0) {
        puVar8 = puVar29;
      }
      func_0x000107c2b054(&ppppppuStack_210,puVar8);
      bStack_249 = bStack_1b9;
      bStack_251 = bStack_1c1;
      pppppppuStack_260 = (undefined8 *******)CONCAT17(bStack_1c9,uStack_1d0);
      uStack_258 = CONCAT25(uStack_1c3,
                            CONCAT14(uStack_1c4,CONCAT13(uStack_1c5,CONCAT21(uStack_1c7,uStack_1c8))
                                    ));
      uStack_278 = uStack_1c8;
      uStack_277 = (undefined6)((uint7)uStack_258 >> 8);
      bStack_271 = bStack_1c1;
      uStack_270 = (undefined7)(CONCAT62(uStack_1bf,CONCAT11(uStack_1c0,bStack_1c1)) >> 8);
      uStack_1c8 = 0;
      uStack_1c7 = 0;
      uStack_1c5 = 0;
      uStack_1c4 = 0;
      uStack_1c3 = 0;
      bStack_1c1 = 0;
      uStack_1c0 = 0;
      uStack_1bf = 0;
      bStack_1b9 = 0;
      uStack_1d0 = 0;
      bStack_1c9 = 0;
      uStack_290 = uStack_208;
      uStack_289 = uStack_201;
      uStack_250 = uStack_270;
      uStack_248 = *(undefined8 *)(pcVar26 + 8);
      ppppppuStack_240 = ppppppuStack_210;
      uStack_238 = uStack_208;
      uStack_231 = uStack_201;
      bStack_229 = bStack_1f9;
      uStack_228 = 1;
      puVar8 = &UNK_10f67d9eb;
      if (*(undefined **)(ppcVar22[0x12] + 0x18) != (undefined *)0x0) {
        puVar8 = *(undefined **)(ppcVar22[0x12] + 0x18);
      }
      func_0x000107c2b054(&uStack_1d0,puVar8);
      uVar4 = CONCAT17(bStack_1c1,
                       CONCAT25(uStack_1c3,
                                CONCAT14(uStack_1c4,
                                         CONCAT13(uStack_1c5,CONCAT21(uStack_1c7,uStack_1c8)))));
      puVar15 = (undefined7 *)CONCAT17(bStack_1c9,uStack_1d0);
      if (-1 < (char)bStack_1b9) {
        uVar4 = (ulong)bStack_1b9;
        puVar15 = &uStack_1d0;
      }
      FUN_10ae03140(0,puVar15,uVar4);
      func_0x00010ae02ef0();
      ppuVar23 = &PTR_PTR_113305208;
      FUN_10ae079a0();
      FUN_10ae0314c();
      func_0x00010ae02f00();
      FUN_10ae07cd4(ppuVar23,&PTR_PTR_113305208);
      bVar13 = true;
    }
    uStack_1d0 = SUB87(pppppppuStack_330,0);
    bStack_1c9 = (byte)((ulong)pppppppuStack_330 >> 0x38);
    uStack_1c8 = SUB81(pppppppuStack_328,0);
    uStack_1c7 = (undefined2)((ulong)pppppppuStack_328 >> 8);
    uStack_1c5 = (undefined1)((ulong)pppppppuStack_328 >> 0x18);
    uStack_1c4 = (undefined1)((ulong)pppppppuStack_328 >> 0x20);
    uStack_1c3 = (undefined2)((ulong)pppppppuStack_328 >> 0x28);
    bStack_1c1 = (byte)((ulong)pppppppuStack_328 >> 0x38);
    if (pppppppuStack_328 != (undefined8 *******)0x0) {
      pppppppuVar3 = pppppppuStack_328 + 1;
      do {
        cVar12 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(pppppppuVar3,0x10);
        if (bVar14) {
          *pppppppuVar3 = (undefined8 ******)((long)*pppppppuVar3 + 1);
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
    }
    uStack_1c0 = 0;
    uStack_188 = uStack_188 & 0xffffffffffffff00;
    if (bVar13) {
      FUN_10a87ee20(&uStack_1c0,&pppppppuStack_260);
      uStack_188 = CONCAT71(uStack_188._1_7_,1);
    }
    ppppppuStack_210 = (undefined8 ******)FUN_10a89636c;
    uStack_208 = 0x110c24a18;
    uStack_201 = 0;
    puVar21 = (undefined8 *)0x50;
    __Znwm();
    puVar21[1] = CONCAT17(bStack_1c1,
                          CONCAT25(uStack_1c3,
                                   CONCAT14(uStack_1c4,
                                            CONCAT13(uStack_1c5,CONCAT21(uStack_1c7,uStack_1c8)))));
    *puVar21 = CONCAT17(bStack_1c9,uStack_1d0);
    uStack_1d0 = 0;
    bStack_1c9 = 0;
    uStack_1c8 = 0;
    uStack_1c7 = 0;
    uStack_1c5 = 0;
    uStack_1c4 = 0;
    uStack_1c3 = 0;
    bStack_1c1 = 0;
    *(undefined1 *)(puVar21 + 2) = 0;
    *(undefined1 *)(puVar21 + 9) = 0;
    if (bVar13) {
      puVar21[3] = plStack_1b8;
      puVar21[2] = CONCAT17(bStack_1b9,CONCAT61(uStack_1bf,uStack_1c0));
      puVar21[4] = pplStack_1b0;
      plStack_1b8 = (long *)0x0;
      pplStack_1b0 = (long **)0x0;
      uStack_1c0 = 0;
      uStack_1bf = 0;
      bStack_1b9 = 0;
      puVar21[5] = uStack_1a8;
      puVar21[7] = uStack_198;
      puVar21[6] = uStack_1a0;
      puVar21[8] = uStack_190;
      uStack_1a0 = 0;
      uStack_198 = 0;
      uStack_190 = 0;
      *(undefined1 *)(puVar21 + 9) = 1;
    }
    uStack_200 = SUB87(puVar21,0);
    bStack_1f9 = (byte)((ulong)puVar21 >> 0x38);
    FUN_10a860860(pppppppuVar17,&ppppppuStack_210);
    (**(code **)CONCAT17(uStack_201,uStack_208))(&uStack_208);
    FUN_10a87eeb8(&uStack_1c0);
    plVar20 = (long *)CONCAT17(bStack_1c1,
                               CONCAT25(uStack_1c3,
                                        CONCAT14(uStack_1c4,
                                                 CONCAT13(uStack_1c5,CONCAT21(uStack_1c7,uStack_1c8)
                                                         ))));
    if (plVar20 != (long *)0x0) {
      plVar34 = plVar20 + 1;
      do {
        lVar31 = *plVar34;
        cVar12 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar34,0x10);
        if (bVar13) {
          *plVar34 = lVar31 + -1;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      if (lVar31 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
      }
    }
    pppppppuVar17 = &pppppppuStack_260;
    FUN_10a87eeb8();
  }
  if (pppppppuStack_328 != (undefined8 *******)0x0) {
    pppppppuVar3 = pppppppuStack_328 + 1;
    do {
      ppppppuVar25 = *pppppppuVar3;
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(pppppppuVar3,0x10);
      if (bVar13) {
        *pppppppuVar3 = (undefined8 ******)((long)ppppppuVar25 + -1);
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (ppppppuVar25 == (undefined8 ******)0x0) {
      (*(code *)(*pppppppuStack_328)[2])(pppppppuStack_328);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppppppuVar17 = pppppppuStack_328;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return pppppppuVar17;
  }
  ___stack_chk_fail();
  FUN_10a05bd88(&ppppppuStack_210);
  func_0x00010a05a8c4(&uStack_1d0);
  FUN_10a05bd88(&ppppppuStack_320);
  FUN_10a042634(&pppppppuStack_260);
  func_0x00010a87edc4(&plStack_308);
  if ((char)bStack_2d9 < '\0') {
    __ZdlPv(uStack_2f0);
  }
  if ((char)bStack_2c1 < '\0') {
    __ZdlPv(pppppppuStack_2d8);
  }
  if (cStack_279 < '\0') {
    __ZdlPv(CONCAT17(uStack_289,uStack_290));
  }
  __Unwind_Resume();
  if (*(char *)((long)pppppppuVar17 + 0x37) < '\0') {
    __ZdlPv(pppppppuVar17[4]);
  }
  if (*(char *)((long)pppppppuVar17 + 0x17) < '\0') {
    __ZdlPv(*pppppppuVar17);
  }
  return pppppppuVar17;
}



/* Entry: 10a860e8c; end: 10a86101f;  */

/* WARNING: Removing unreachable block (ram,0x00010a861e30) */
/* WARNING: Removing unreachable block (ram,0x00010a861944) */
/* WARNING: Removing unreachable block (ram,0x00010a861868) */
/* WARNING: Removing unreachable block (ram,0x00010a8616cc) */
/* WARNING: Removing unreachable block (ram,0x00010a861288) */
/* WARNING: Removing unreachable block (ram,0x00010a86118c) */
/* WARNING: Removing unreachable block (ram,0x00010a8611ac) */
/* WARNING: Removing unreachable block (ram,0x00010a8614a4) */
/* WARNING: Removing unreachable block (ram,0x00010a8617e4) */
/* WARNING: Removing unreachable block (ram,0x00010a8618e8) */
/* WARNING: Removing unreachable block (ram,0x00010a861e1c) */
/* WARNING: Removing unreachable block (ram,0x00010a862010) */

undefined8 ****** FUN_10a860e8c(undefined8 ******param_1,code **param_2)

{
  int iVar1;
  code *pcVar2;
  undefined8 ******ppppppuVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 ******ppppppuVar6;
  undefined8 ******ppppppuVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  undefined1 uVar11;
  char cVar12;
  bool bVar13;
  bool bVar14;
  undefined7 *puVar15;
  long **pplVar16;
  undefined8 ******ppppppuVar17;
  undefined8 ******ppppppuVar18;
  undefined8 ****ppppuVar19;
  long *plVar20;
  undefined8 *****pppppuVar21;
  undefined8 *puVar22;
  code **ppcVar23;
  undefined **ppuVar24;
  undefined8 ****ppppuVar25;
  undefined8 in_x7;
  code *pcVar26;
  undefined8 ***pppuVar27;
  undefined8 ****ppppuVar28;
  undefined *puVar29;
  long lVar30;
  ulong uVar31;
  code **unaff_x21;
  undefined8 *****pppppuVar32;
  undefined8 ****ppppuVar33;
  long *plVar34;
  undefined8 uVar35;
  long lVar36;
  undefined8 *****pppppuVar37;
  undefined8 *****pppppuStack_2d0;
  undefined8 *****pppppuStack_2c8;
  undefined8 ****ppppuStack_2c0;
  long *plStack_2b8;
  char cStack_2a9;
  long *plStack_2a8;
  long *plStack_2a0;
  long *plStack_298;
  undefined8 uStack_290;
  ulong uStack_288;
  byte bStack_279;
  undefined8 *****pppppuStack_278;
  ulong uStack_270;
  byte bStack_261;
  undefined1 auStack_260 [8];
  undefined8 ***pppuStack_258;
  undefined1 auStack_250 [8];
  undefined8 ***pppuStack_248;
  undefined8 ***pppuStack_240;
  undefined8 ***pppuStack_238;
  undefined7 uStack_230;
  undefined1 uStack_229;
  char cStack_219;
  undefined1 uStack_218;
  undefined6 uStack_217;
  byte bStack_211;
  undefined7 uStack_210;
  undefined1 uStack_209;
  long lStack_208;
  undefined8 *****pppppuStack_200;
  undefined7 uStack_1f8;
  byte bStack_1f1;
  undefined7 uStack_1f0;
  byte bStack_1e9;
  undefined8 uStack_1e8;
  undefined8 ****ppppuStack_1e0;
  undefined7 uStack_1d8;
  undefined1 uStack_1d1;
  byte bStack_1c9;
  undefined1 uStack_1c8;
  ulong uStack_1b8;
  undefined8 ****ppppuStack_1b0;
  undefined7 uStack_1a8;
  undefined1 uStack_1a1;
  undefined7 uStack_1a0;
  byte bStack_199;
  long lStack_190;
  undefined7 uStack_170;
  byte bStack_169;
  undefined1 uStack_168;
  undefined2 uStack_167;
  undefined1 uStack_165;
  undefined1 uStack_164;
  undefined2 uStack_163;
  byte bStack_161;
  undefined1 uStack_160;
  undefined6 uStack_15f;
  byte bStack_159;
  long *plStack_158;
  long **pplStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  long lStack_118;
  undefined8 uStack_98;
  undefined8 *****pppppuStack_90;
  code *pcStack_88;
  code *pcStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 ****ppppuStack_68;
  undefined8 ****ppppuStack_60;
  code *pcStack_58;
  code *pcStack_50;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppuVar17 = param_1;
  ppcVar23 = param_2;
  if ((*(char *)((long)param_1 + 0x4b9) == '\x01') && (pcVar26 = *param_2, pcVar26 != (code *)0x0))
  {
    if (((byte)pcVar26[0xb0] & 1) == 0) {
      FUN_10a5404ec(pcVar26 + 0x98,pcVar26 + 0x48);
    }
    FUN_10a875384();
    if (((ulong)param_1[0x57] & 1) == 0) {
      ppppuStack_60 = param_1[4];
      ppppuStack_68 = param_1[3];
      if (param_1[4] != (undefined8 *****)0x0) {
        pppppuVar32 = param_1[4] + 2;
        do {
          cVar12 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(pppppuVar32,0x10);
          if (bVar13) {
            *pppppuVar32 = (undefined8 ****)((long)*pppppuVar32 + 1);
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
      }
      pcStack_88 = *param_2;
      pcVar26 = param_2[1];
      if (pcVar26 != (code *)0x0) {
        pcVar2 = pcVar26 + 8;
        do {
          cVar12 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
          if (bVar13) {
            *(long *)pcVar2 = *(long *)pcVar2 + 1;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
      }
      pcStack_78 = FUN_10a8a79a0;
      ppuStack_70 = &PTR_FUN_110c25098;
      uStack_98 = 0;
      pppppuStack_90 = (undefined8 ******)0x0;
      if (pcVar26 != (code *)0x0) {
        pcVar2 = pcVar26 + 8;
        do {
          cVar12 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
          if (bVar13) {
            *(long *)pcVar2 = *(long *)pcVar2 + 1;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
      }
      unaff_x21 = &pcStack_78;
      ppcVar23 = &pcStack_78;
      pcStack_80 = pcVar26;
      pcStack_58 = pcStack_88;
      pcStack_50 = pcVar26;
      FUN_10a8693c8(param_1);
      (*(code *)*ppuStack_70)(&ppuStack_70);
      if (pcVar26 != (code *)0x0) {
        pcVar2 = pcVar26 + 8;
        do {
          lVar30 = *(long *)pcVar2;
          cVar12 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
          if (bVar13) {
            *(long *)pcVar2 = lVar30 + -1;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
        if (lVar30 == 0) {
          (**(code **)(*(long *)pcVar26 + 0x10))(pcVar26);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar26);
        }
      }
      ppppppuVar17 = (undefined8 ******)pppppuStack_90;
      if ((undefined8 ******)pppppuStack_90 != (undefined8 ******)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppppppuVar17;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(unaff_x21 + 1);
  FUN_10a875638(&uStack_98);
  __Unwind_Resume();
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar26 = (code *)&UNK_10f67d9eb;
  if (*ppcVar23 != (code *)0x0) {
    pcVar26 = *ppcVar23;
  }
  func_0x000107c2b054(&uStack_170,pcVar26);
  pcVar26 = (code *)&UNK_10f67d9eb;
  if (ppcVar23[2] != (code *)0x0) {
    pcVar26 = ppcVar23[2];
  }
  func_0x000107c2b054(&pppppuStack_200,pcVar26);
  pcVar26 = (code *)&UNK_10f67d9eb;
  if (ppcVar23[3] != (code *)0x0) {
    pcVar26 = ppcVar23[3];
  }
  func_0x000107c2b054(&ppppuStack_1b0,pcVar26);
  uVar4 = CONCAT17(bStack_161,
                   CONCAT25(uStack_163,
                            CONCAT14(uStack_164,CONCAT13(uStack_165,CONCAT21(uStack_167,uStack_168))
                                    )));
  puVar15 = (undefined7 *)CONCAT17(bStack_169,uStack_170);
  if (-1 < (char)bStack_159) {
    uVar4 = (ulong)bStack_159;
    puVar15 = &uStack_170;
  }
  FUN_10ae03140(0,puVar15,uVar4);
  FUN_10ae03140();
  FUN_10ae03140();
  func_0x00010ae02ecc();
  ppuVar24 = &PTR_PTR_113305740;
  FUN_10ae079a0();
  FUN_10ae0314c();
  FUN_10ae0314c();
  FUN_10ae0314c();
  func_0x00010ae02edc();
  FUN_10ae07cd4(ppuVar24,&PTR_PTR_113305740);
  if ((char)bStack_1e9 < '\0') {
    __ZdlPv(pppppuStack_200);
  }
  pcVar26 = (code *)&UNK_10f67d9eb;
  if (*ppcVar23 != (code *)0x0) {
    pcVar26 = *ppcVar23;
  }
  func_0x000107c2b054(&uStack_230,pcVar26);
  pcVar26 = (code *)&UNK_10f67d9eb;
  if (ppcVar23[3] != (code *)0x0) {
    pcVar26 = ppcVar23[3];
  }
  func_0x000107c2b054(&pppppuStack_278,pcVar26);
  uVar4 = uStack_270;
  if (-1 < (char)bStack_261) {
    uVar4 = (ulong)bStack_261;
  }
  if (uVar4 == 0) {
    ppuVar24 = &PTR_PTR_113304580;
    FUN_10ae079a0(0,&PTR_PTR_113304580);
    FUN_10ae07cd4(ppuVar24,&PTR_PTR_113304580);
    pppppuStack_2d0 = (undefined8 ******)0x0;
    pppppuStack_2c8 = (undefined8 ******)0x0;
    goto LAB_10a861eb4;
  }
  pcVar26 = (code *)&UNK_10f67d9eb;
  if (ppcVar23[2] != (code *)0x0) {
    pcVar26 = ppcVar23[2];
  }
  func_0x000107c2b054(&uStack_290,pcVar26);
  if (-1 < (char)bStack_279) {
    uStack_288 = (ulong)bStack_279;
  }
  if (uStack_288 == 0) {
    ppuVar24 = &PTR_PTR_1133045b8;
    FUN_10ae079a0(0,&PTR_PTR_1133045b8);
    FUN_10ae07cd4(ppuVar24,&PTR_PTR_1133045b8);
    pppppuStack_2d0 = (undefined8 ******)0x0;
    pppppuStack_2c8 = (undefined8 ******)0x0;
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (ppppppuVar17 + 0x43,&uStack_230);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (ppppppuVar17[0x46] + 3,&uStack_290);
    ppppppuVar3 = ppppppuVar17 + 0x46;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (*ppppppuVar3 + 6,&pppppuStack_278);
    pppppuVar32 = *ppppppuVar3;
    pcVar26 = (code *)&UNK_10f67d9eb;
    if (ppcVar23[6] != (code *)0x0) {
      pcVar26 = ppcVar23[6];
    }
    func_0x000107c2b054(&uStack_170,pcVar26);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (pppppuVar32 + 0x10,&uStack_170);
    ppppppuVar17[0x46][0xc] = (undefined8 ****)ppcVar23[8];
    iVar9 = *(int *)(ppppppuVar17 + 0x5a);
    iVar1 = iVar9 + 1;
    *(int *)(ppppppuVar17 + 0x5a) = iVar1;
    iVar10 = *(int *)((long)ppppppuVar17 + 0x2d4);
    if (iVar10 < iVar1) {
      iVar10 = iVar9 + 1;
    }
    *(int *)((long)ppppppuVar17 + 0x2d4) = iVar10;
    pppppuVar32 = ppppppuVar17[0x44];
    ppppppuVar6 = (undefined8 ******)ppppppuVar17[0x43];
    if (-1 < (char)*(byte *)((long)ppppppuVar17 + 0x22f)) {
      pppppuVar32 = (undefined8 *****)(ulong)*(byte *)((long)ppppppuVar17 + 0x22f);
      ppppppuVar6 = ppppppuVar17 + 0x43;
    }
    FUN_10ae03140(0,ppppppuVar6,pppppuVar32);
    ppuVar24 = &PTR_PTR_113304228;
    FUN_10ae079a0();
    FUN_10ae0314c();
    FUN_10ae07cd4(ppuVar24,&PTR_PTR_113304228);
    plStack_2a8 = (long *)0x0;
    plStack_2a0 = (long *)0x0;
    plStack_298 = (long *)0x0;
    FUN_10a860df0(&plStack_2a8,(long)*(int *)(ppcVar23 + 10));
    if (0 < *(int *)(ppcVar23 + 10)) {
      lVar30 = 0;
      do {
        if ((*(long *)(ppcVar23[9] + lVar30 * 0x38 + 8) == 0) ||
           (*(long *)(ppcVar23[9] + lVar30 * 0x38) == 0)) {
          ppuVar24 = &PTR_PTR_1133056e8;
          FUN_10ae079a0(0,&PTR_PTR_1133056e8);
          FUN_10ae07cd4(ppuVar24,&PTR_PTR_1133056e8);
        }
        else {
          func_0x000107c2b054(&pppppuStack_200);
          uVar4 = CONCAT17(bStack_1f1,uStack_1f8);
          if (-1 < (char)bStack_1e9) {
            uVar4 = (ulong)bStack_1e9;
          }
          uVar31 = uStack_270;
          if (-1 < (char)bStack_261) {
            uVar31 = (ulong)bStack_261;
          }
          if (uVar4 == uVar31) {
            ppppppuVar6 = (undefined8 ******)pppppuStack_200;
            if (-1 < (char)bStack_1e9) {
              ppppppuVar6 = &pppppuStack_200;
            }
            ppppppuVar7 = (undefined8 ******)pppppuStack_278;
            if (-1 < (char)bStack_261) {
              ppppppuVar7 = &pppppuStack_278;
            }
            ppppppuVar18 = ppppppuVar6;
            _memcmp(ppppppuVar6,ppppppuVar7,uVar4);
            if ((int)ppppppuVar18 != 0) goto LAB_10a8613cc;
            FUN_10ae03140(0,ppppppuVar6,uVar4);
            ppuVar24 = &PTR_PTR_1133059b8;
            FUN_10ae079a0();
            FUN_10ae0314c();
            FUN_10ae07cd4(ppuVar24,&PTR_PTR_1133059b8);
          }
          else {
LAB_10a8613cc:
            func_0x000107c2b054(&ppppuStack_1b0,*(undefined8 *)(ppcVar23[9] + lVar30 * 0x38));
            puVar8 = &UNK_10f67d9eb;
            if (*(undefined **)(ppcVar23[9] + lVar30 * 0x38 + 0x10) != (undefined *)0x0) {
              puVar8 = *(undefined **)(ppcVar23[9] + lVar30 * 0x38 + 0x10);
            }
            func_0x000107c2b054(&uStack_218,puVar8);
            puVar8 = &UNK_10f67d9eb;
            if (*(undefined **)(ppcVar23[9] + lVar30 * 0x38 + 0x18) != (undefined *)0x0) {
              puVar8 = *(undefined **)(ppcVar23[9] + lVar30 * 0x38 + 0x18);
            }
            func_0x000107c2b054(&ppppuStack_2c0,puVar8);
            uVar35 = *(undefined8 *)(ppcVar23[9] + lVar30 * 0x38 + 0x30);
            ppppuVar19 = (undefined8 ****)0xd0;
            __Znwm();
            ppppuVar33 = ppppuVar19 + 1;
            *ppppuVar33 = (undefined8 ***)0x0;
            ppppuVar19[2] = (undefined8 ***)0x0;
            *ppppuVar19 = (undefined8 ***)&PTR_FUN_110bf8238;
            ppppuVar28 = ppppuVar19 + 3;
            FUN_10a5caa80(ppppuVar28,&ppppuStack_1b0,&uStack_218,&ppppuStack_2c0,&pppppuStack_200,
                          uVar35);
            puVar8 = &UNK_10f67d9eb;
            if (*(undefined **)(ppcVar23[9] + lVar30 * 0x38 + 0x20) != (undefined *)0x0) {
              puVar8 = *(undefined **)(ppcVar23[9] + lVar30 * 0x38 + 0x20);
            }
            pppuStack_240 = ppppuVar28;
            pppuStack_238 = ppppuVar19;
            func_0x000107c2b054(&uStack_170,puVar8);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (ppppuVar19 + 0x13,&uStack_170);
            FUN_10a895d54(ppppppuVar17 + 0x65,&pppppuStack_200,&pppppuStack_200,&pppuStack_240);
            uVar4 = CONCAT17(uStack_1a1,uStack_1a8);
            if (-1 < (char)bStack_199) {
              uVar4 = (ulong)bStack_199;
            }
            if (uVar4 != 0) {
              uVar4 = CONCAT17(bStack_1f1,uStack_1f8);
              ppppppuVar6 = (undefined8 ******)pppppuStack_200;
              if (-1 < (char)bStack_1e9) {
                uVar4 = (ulong)bStack_1e9;
                ppppppuVar6 = &pppppuStack_200;
              }
              FUN_10ae03140(0,ppppppuVar6,uVar4);
              ppuVar24 = &PTR_PTR_113304940;
              FUN_10ae079a0();
              FUN_10ae0314c();
              FUN_10ae07cd4(ppuVar24,&PTR_PTR_113304940);
              FUN_10a895d54(ppppppuVar17 + 0x60,&ppppuStack_1b0,&ppppuStack_1b0,&pppuStack_240);
            }
            iVar9 = *(int *)(ppppppuVar17 + 0x5a);
            iVar1 = iVar9 + 1;
            *(int *)(ppppppuVar17 + 0x5a) = iVar1;
            iVar10 = *(int *)((long)ppppppuVar17 + 0x2d4);
            if (iVar10 < iVar1) {
              iVar10 = iVar9 + 1;
            }
            *(int *)((long)ppppppuVar17 + 0x2d4) = iVar10;
            ppppuVar25 = &pppuStack_240;
            FUN_10a860e8c(ppppppuVar17);
            if (plStack_2a0 < plStack_298) {
              *plStack_2a0 = (long)ppppuVar28;
              plStack_2a0[1] = (long)ppppuVar19;
              do {
                cVar12 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(ppppuVar33,0x10);
                if (bVar13) {
                  *ppppuVar33 = (undefined8 ***)((long)*ppppuVar33 + 1);
                  cVar12 = ExclusiveMonitorsStatus();
                }
              } while (cVar12 != '\0');
              plStack_2a0 = plStack_2a0 + 2;
            }
            else {
              lVar36 = (long)plStack_2a0 - (long)plStack_2a8;
              uVar4 = (lVar36 >> 4) + 1;
              if (uVar4 >> 0x3c != 0) {
                FUN_10a87ed30();
                    /* WARNING: Does not return */
                pcVar26 = (code *)SoftwareBreakpoint(1,0x10a8621fc);
                (*pcVar26)();
              }
              uVar31 = (long)plStack_298 - (long)plStack_2a8 >> 3;
              if (uVar31 <= uVar4) {
                uVar31 = uVar4;
              }
              if (0x7fffffffffffffef < (ulong)((long)plStack_298 - (long)plStack_2a8)) {
                uVar31 = 0xfffffffffffffff;
              }
              pplStack_150 = &plStack_2a8;
              func_0x00010a87ed44();
              plVar20 = (long *)(uVar31 + lVar36);
              *plVar20 = (long)ppppuVar28;
              plVar20[1] = (long)ppppuVar19;
              do {
                cVar12 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(ppppuVar33,0x10);
                if (bVar13) {
                  *ppppuVar33 = (undefined8 ***)((long)*ppppuVar33 + 1);
                  cVar12 = ExclusiveMonitorsStatus();
                }
              } while (cVar12 != '\0');
              plVar34 = (long *)((long)plVar20 - ((long)plStack_2a0 - (long)plStack_2a8));
              _memcpy(plVar34);
              uStack_160 = SUB81(plStack_2a8,0);
              uStack_15f = (undefined6)((ulong)plStack_2a8 >> 8);
              bStack_159 = (byte)((ulong)plStack_2a8 >> 0x38);
              plStack_158 = plStack_298;
              uStack_170 = SUB87(plStack_2a8,0);
              uStack_167 = (undefined2)((ulong)plStack_2a8 >> 8);
              uStack_165 = (undefined1)((ulong)plStack_2a8 >> 0x18);
              uStack_164 = (undefined1)((ulong)plStack_2a8 >> 0x20);
              uStack_163 = (undefined2)((ulong)plStack_2a8 >> 0x28);
              plStack_2a8 = plVar34;
              plStack_2a0 = plVar20 + 2;
              plStack_298 = (long *)(uVar31 + (long)ppppuVar25 * 0x10);
              bStack_169 = bStack_159;
              uStack_168 = uStack_160;
              bStack_161 = bStack_159;
              func_0x00010a87ed78(&uStack_170);
              plStack_2a0 = plVar20 + 2;
            }
            do {
              pppuVar27 = *ppppuVar33;
              cVar12 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(ppppuVar33,0x10);
              if (bVar13) {
                *ppppuVar33 = (undefined8 ***)((long)pppuVar27 + -1);
                cVar12 = ExclusiveMonitorsStatus();
              }
            } while (cVar12 != '\0');
            if (pppuVar27 == (undefined8 ***)0x0) {
              (*(code *)(*ppppuVar19)[2])(ppppuVar19);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar19);
            }
            if (cStack_2a9 < '\0') {
              __ZdlPv(ppppuStack_2c0);
            }
            if (lStack_208 < 0) {
              __ZdlPv(CONCAT17(bStack_211,CONCAT61(uStack_217,uStack_218)));
            }
          }
          if ((char)bStack_1e9 < '\0') {
            __ZdlPv(pppppuStack_200);
          }
        }
        lVar30 = lVar30 + 1;
      } while (lVar30 < *(int *)(ppcVar23 + 10));
    }
    FUN_10a860bc8(ppppppuVar17,ppcVar23 + 0xe);
    ppppuStack_1b0 = (undefined8 ****)((ulong)ppppuStack_1b0 & 0xffffffffffffff00);
    uStack_1a8 = 0;
    uStack_1a1 = 0;
    FUN_10a8819b0(&uStack_218,&plStack_2a8);
    FUN_10a881a60(&ppppuStack_2c0,ppppppuVar3);
    func_0x000109381b20(&pppuStack_240,&uStack_218);
    bStack_159 = 0xc;
    uStack_168 = 0x73;
    uStack_167 = 0x7265;
    uStack_165 = 0x73;
    uStack_170 = 0x746e6573657270;
    bStack_169 = 0x55;
    uStack_164 = 0;
    pppppuVar32 = &ppppuStack_1b0;
    func_0x0001095b7584(pppppuVar32,&uStack_170);
    uVar11 = *(undefined1 *)pppppuVar32;
    *(undefined1 *)pppppuVar32 = pppuStack_240._0_1_;
    pppuStack_240 = (undefined8 ***)CONCAT71(pppuStack_240._1_7_,uVar11);
    ppppuVar28 = pppppuVar32[1];
    pppppuVar32[1] = (undefined8 ****)pppuStack_238;
    pppuStack_238 = ppppuVar28;
    func_0x000109380ffc(&pppuStack_238,uVar11);
    func_0x000109381b20(auStack_250,&ppppuStack_2c0);
    bStack_159 = 0xb;
    uStack_168 = 0x73;
    uStack_167 = 0x7265;
    uStack_170 = 0x746e6572727563;
    bStack_169 = 0x55;
    uStack_165 = 0;
    pppppuVar32 = &ppppuStack_1b0;
    func_0x0001095b7584(pppppuVar32,&uStack_170);
    ppppppuVar3 = ppppppuVar17 + 0x48;
    uVar11 = *(undefined1 *)pppppuVar32;
    *(undefined1 *)pppppuVar32 = auStack_250[0];
    ppppuVar28 = pppppuVar32[1];
    auStack_250[0] = uVar11;
    pppppuVar32[1] = (undefined8 ****)pppuStack_248;
    pppuStack_248 = ppppuVar28;
    func_0x000109380ffc(&pppuStack_248,uVar11);
    if (*ppppppuVar3 != (undefined8 *****)0x0) {
      FUN_10a881a60(auStack_260,ppppppuVar3);
      bStack_159 = 8;
      uStack_170 = 0x65735574736f68;
      bStack_169 = 0x72;
      uStack_168 = 0;
      pppppuVar32 = &ppppuStack_1b0;
      func_0x0001095b7584(pppppuVar32,&uStack_170);
      uVar11 = *(undefined1 *)pppppuVar32;
      *(undefined1 *)pppppuVar32 = auStack_260[0];
      ppppuVar28 = pppppuVar32[1];
      auStack_260[0] = uVar11;
      pppppuVar32[1] = (undefined8 ****)pppuStack_258;
      pppuStack_258 = ppppuVar28;
      func_0x000109380ffc(&pppuStack_258,uVar11);
    }
    FUN_10a0c32e4(&uStack_170,&ppppuStack_1b0,0xffffffff,0x20,0,1);
    uVar4 = CONCAT17(bStack_161,
                     CONCAT25(uStack_163,
                              CONCAT14(uStack_164,
                                       CONCAT13(uStack_165,CONCAT21(uStack_167,uStack_168)))));
    puVar15 = (undefined7 *)CONCAT17(bStack_169,uStack_170);
    if (-1 < (char)bStack_159) {
      uVar4 = (ulong)bStack_159;
      puVar15 = &uStack_170;
    }
    FUN_10a3bf330(&pppppuStack_200,puVar15,uVar4);
    func_0x000109380ffc(&plStack_2b8,(ulong)ppppuStack_2c0 & 0xff);
    func_0x000109380ffc(&uStack_210,uStack_218);
    func_0x000109380ffc(&uStack_1a8,(ulong)ppppuStack_1b0 & 0xff);
    FUN_10a874700(&uStack_218,ppppppuVar17[0x71]);
    plVar20 = (long *)0x138;
    __Znwm();
    pppppuVar21 = pppppuStack_200;
    plVar34 = plVar20 + 1;
    *plVar34 = 0;
    plVar20[2] = 0;
    *plVar20 = (long)&PTR_FUN_110b9f3b0;
    pppppuVar32 = (undefined8 *****)(plVar20 + 3);
    pppppuStack_200 = (undefined8 *****)0x0;
    uStack_170 = SUB87(pppppuVar21,0);
    bStack_169 = (byte)((ulong)pppppuVar21 >> 0x38);
    uStack_168 = (undefined1)uStack_1f8;
    uStack_167 = (undefined2)((uint7)uStack_1f8 >> 8);
    uStack_165 = (undefined1)((uint7)uStack_1f8 >> 0x18);
    uStack_164 = (undefined1)((uint7)uStack_1f8 >> 0x20);
    uStack_163 = (undefined2)((uint7)uStack_1f8 >> 0x28);
    (**(code **)(CONCAT17(bStack_1e9,uStack_1f0) + 0x10))(&uStack_160,&uStack_1f0);
    uStack_128 = uStack_1b8;
    pppppuVar21 = ppppppuVar17[0x41];
    ppppppuVar6 = (undefined8 ******)ppppppuVar17[0x40];
    if (-1 < (char)*(byte *)((long)ppppppuVar17 + 0x217)) {
      pppppuVar21 = (undefined8 *****)(ulong)*(byte *)((long)ppppppuVar17 + 0x217);
      ppppppuVar6 = ppppppuVar17 + 0x40;
    }
    ppppuStack_1b0 = (undefined8 ****)FUN_10a8a636c;
    uStack_1a8 = 0x110c24f80;
    uStack_1a1 = 0;
    uStack_1a0 = CONCAT61(uStack_217,uStack_218);
    bStack_199 = bStack_211;
    lStack_190 = lStack_208;
    uStack_210 = 0;
    uStack_209 = 0;
    lStack_208 = 0;
    FUN_10a23708c(pppppuVar32,&UNK_10e4df4cf,0x26,&UNK_10f647b49,4,&uStack_170,1,in_x7,ppppppuVar6,
                  pppppuVar21,&ppppuStack_1b0);
    (**(code **)CONCAT17(uStack_1a1,uStack_1a8))(&uStack_1a8);
    FUN_10a042634(&uStack_170);
    ppppuStack_2c0 = pppppuVar32;
    plStack_2b8 = plVar20;
    FUN_10a8747a4(&uStack_218);
    uStack_170 = 0;
    bStack_169 = 0;
    uStack_168 = 0;
    uStack_167 = 0;
    uStack_165 = 0;
    uStack_164 = 0;
    uStack_163 = 0;
    bStack_161 = 0;
    pppppuVar21 = ppppppuVar17[0x6c];
    if (pppppuVar21 == (undefined8 *****)0x0) {
LAB_10a861b4c:
      ppuVar24 = &PTR_PTR_113305cc8;
      FUN_10ae079a0(0,&PTR_PTR_113305cc8);
      FUN_10ae07cd4(ppuVar24,&PTR_PTR_113305cc8);
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
      uStack_168 = SUB81(pppppuVar21,0);
      uStack_167 = (undefined2)((ulong)pppppuVar21 >> 8);
      uStack_165 = (undefined1)((ulong)pppppuVar21 >> 0x18);
      uStack_164 = (undefined1)((ulong)pppppuVar21 >> 0x20);
      uStack_163 = (undefined2)((ulong)pppppuVar21 >> 0x28);
      bStack_161 = (byte)((ulong)pppppuVar21 >> 0x38);
      if (pppppuVar21 == (undefined8 *****)0x0) goto LAB_10a861b4c;
      pppppuVar21 = ppppppuVar17[0x6b];
      uStack_170 = SUB87(pppppuVar21,0);
      bStack_169 = (byte)((ulong)pppppuVar21 >> 0x38);
      if (pppppuVar21 == (undefined8 *****)0x0) goto LAB_10a861b4c;
      ppuVar24 = &PTR_PTR_113304740;
      FUN_10ae079a0(0,&PTR_PTR_113304740);
      FUN_10ae07cd4(ppuVar24,&PTR_PTR_113304740);
      uStack_1a8 = SUB87(plVar20,0);
      uStack_1a1 = (undefined1)((ulong)plVar20 >> 0x38);
      do {
        cVar12 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar34,0x10);
        if (bVar13) {
          *plVar34 = *plVar34 + 1;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      ppppuStack_1b0 = pppppuVar32;
      (*(code *)**pppppuVar21)(pppppuVar21,&ppppuStack_1b0);
      plVar20 = (long *)CONCAT17(uStack_1a1,uStack_1a8);
      if (plVar20 != (long *)0x0) {
        plVar34 = plVar20 + 1;
        do {
          lVar30 = *plVar34;
          cVar12 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar34,0x10);
          if (bVar13) {
            *plVar34 = lVar30 + -1;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
        if (lVar30 == 0) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
        }
      }
    }
    plVar20 = (long *)CONCAT17(bStack_161,
                               CONCAT25(uStack_163,
                                        CONCAT14(uStack_164,
                                                 CONCAT13(uStack_165,CONCAT21(uStack_167,uStack_168)
                                                         ))));
    if (plVar20 != (long *)0x0) {
      plVar34 = plVar20 + 1;
      do {
        lVar30 = *plVar34;
        cVar12 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar34,0x10);
        if (bVar13) {
          *plVar34 = lVar30 + -1;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      if (lVar30 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
      }
    }
    plVar20 = plStack_2b8;
    if (plStack_2b8 != (long *)0x0) {
      plVar34 = plStack_2b8 + 1;
      do {
        lVar30 = *plVar34;
        cVar12 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar34,0x10);
        if (bVar13) {
          *plVar34 = lVar30 + -1;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      if (lVar30 == 0) {
        (**(code **)(*plStack_2b8 + 0x10))(plStack_2b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
      }
    }
    FUN_10a042634(&pppppuStack_200);
    FUN_10a87b7b0(&uStack_170,ppppppuVar17,ppcVar23 + 0xb);
    pppppuVar32 = *ppppppuVar3;
    if (pppppuVar32 == (undefined8 *****)0x0) {
      pppppuVar21 = (undefined8 *****)0xd0;
      __Znwm();
      pppppuVar21[1] = (undefined8 ****)0x0;
      pppppuVar21[2] = (undefined8 ****)0x0;
      *pppppuVar21 = (undefined8 ****)&PTR_FUN_110bf8238;
      pppppuVar32 = pppppuVar21 + 3;
      *pppppuVar32 = (undefined8 ****)&PTR_FUN_110c25680;
      pppppuVar21[0x17] = (undefined8 ****)0x0;
      pppppuVar21[0x16] = (undefined8 ****)0x0;
      pppppuVar21[0x19] = (undefined8 ****)0x0;
      pppppuVar21[0x18] = (undefined8 ****)0x0;
      pppppuVar21[9] = (undefined8 ****)0x0;
      pppppuVar21[8] = (undefined8 ****)0x0;
      pppppuVar21[0xb] = (undefined8 ****)0x0;
      pppppuVar21[10] = (undefined8 ****)0x0;
      pppppuVar21[0xd] = (undefined8 ****)0x0;
      pppppuVar21[0xc] = (undefined8 ****)0x0;
      pppppuVar21[0xf] = (undefined8 ****)0x0;
      pppppuVar21[0xe] = (undefined8 ****)0x0;
      pppppuVar21[5] = (undefined8 ****)0x0;
      pppppuVar21[4] = (undefined8 ****)0x0;
      pppppuVar21[7] = (undefined8 ****)0x0;
      pppppuVar21[6] = (undefined8 ****)0x0;
      pppppuVar21[0xe] = (undefined8 ****)0x0;
      pppppuVar21[0xf] = (undefined8 ****)0xffffffffffffffff;
      pppppuVar21[0x13] = (undefined8 ****)0x0;
      pppppuVar21[0x12] = (undefined8 ****)0x0;
      pppppuVar21[0x15] = (undefined8 ****)0x0;
      pppppuVar21[0x14] = (undefined8 ****)0x0;
      pppppuVar21[0x11] = (undefined8 ****)0x0;
      pppppuVar21[0x10] = (undefined8 ****)0x0;
      *(undefined1 *)(pppppuVar21 + 0x16) = 0;
      uStack_218 = SUB81(pppppuVar32,0);
      uStack_217 = (undefined6)((ulong)pppppuVar32 >> 8);
      bStack_211 = (byte)((ulong)pppppuVar32 >> 0x38);
      uStack_210 = SUB87(pppppuVar21,0);
      uStack_209 = (undefined1)((ulong)pppppuVar21 >> 0x38);
    }
    else {
      pppppuVar21 = ppppppuVar17[0x49];
      uStack_218 = SUB81(pppppuVar32,0);
      uStack_217 = (undefined6)((ulong)pppppuVar32 >> 8);
      bStack_211 = (byte)((ulong)pppppuVar32 >> 0x38);
      uStack_210 = SUB87(pppppuVar21,0);
      uStack_209 = (undefined1)((ulong)pppppuVar21 >> 0x38);
      if (pppppuVar21 != (undefined8 *****)0x0) {
        pppppuVar37 = pppppuVar21 + 1;
        do {
          cVar12 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(pppppuVar37,0x10);
          if (bVar13) {
            *pppppuVar37 = (undefined8 ****)((long)*pppppuVar37 + 1);
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
      }
    }
    pplVar16 = pplStack_150;
    plVar20 = plStack_158;
    pcVar26 = (code *)&UNK_10f67d9eb;
    if (ppcVar23[0x13] != (code *)0x0) {
      pcVar26 = ppcVar23[0x13];
    }
    pppppuStack_2c8 = (undefined8 ******)0xb0;
    __Znwm();
    pppppuStack_2c8[1] = (undefined8 *****)0x0;
    pppppuStack_2c8[2] = (undefined8 *****)0x0;
    *pppppuStack_2c8 = (undefined8 ****)&PTR_FUN_110c249a8;
    pppppuStack_200 = (undefined8 ******)0x0;
    uStack_1f8 = 0;
    bStack_1f1 = 0;
    uStack_1f0 = 0;
    bStack_1e9 = 0;
    FUN_10a8828c4(&pppppuStack_200,plVar20,pplVar16,(long)pplVar16 - (long)plVar20 >> 4);
    func_0x000107c2b054(&ppppuStack_1b0,pcVar26);
    plVar34 = plStack_2a0;
    plVar20 = plStack_2a8;
    pppppuVar37 = ppppppuVar17[0x46];
    pppppuStack_2c8[7] = ppppppuVar17[0x47];
    pppppuStack_2c8[6] = pppppuVar37;
    pppppuStack_2c8[4] = (undefined8 *****)0x0;
    pppppuStack_2c8[5] = (undefined8 *****)0x0;
    pppppuStack_2c8[3] = (undefined8 ****)&PTR_DAT_110c23e40;
    if (ppppppuVar17[0x47] != (undefined8 *****)0x0) {
      pppppuVar37 = ppppppuVar17[0x47] + 1;
      do {
        cVar12 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(pppppuVar37,0x10);
        if (bVar13) {
          *pppppuVar37 = (undefined8 ****)((long)*pppppuVar37 + 1);
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
    }
    pppppuStack_2d0 = pppppuStack_2c8 + 3;
    pppppuStack_2c8[8] = pppppuVar32;
    pppppuStack_2c8[9] = pppppuVar21;
    if (pppppuVar21 != (undefined8 *****)0x0) {
      pppppuVar32 = pppppuVar21 + 1;
      do {
        cVar12 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(pppppuVar32,0x10);
        if (bVar13) {
          *pppppuVar32 = (undefined8 ****)((long)*pppppuVar32 + 1);
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
    }
    pppppuStack_2c8[10] = (undefined8 *****)0x0;
    pppppuStack_2c8[0xb] = (undefined8 *****)0x0;
    pppppuStack_2c8[0xc] = (undefined8 *****)0x0;
    if ((long)plStack_2a0 - (long)plStack_2a8 != 0) {
      FUN_10a87f0c4(pppppuStack_2c8 + 10,(long)plStack_2a0 - (long)plStack_2a8 >> 4);
      pppppuVar32 = (undefined8 *****)pppppuStack_2c8[0xb];
      do {
        lVar30 = plVar20[1];
        ppppuVar28 = (undefined8 ****)*plVar20;
        pppppuVar32[1] = (undefined8 ****)plVar20[1];
        *pppppuVar32 = ppppuVar28;
        if (lVar30 != 0) {
          plVar5 = (long *)(lVar30 + 8);
          do {
            cVar12 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar13) {
              *plVar5 = *plVar5 + 1;
              cVar12 = ExclusiveMonitorsStatus();
            }
          } while (cVar12 != '\0');
        }
        plVar20 = plVar20 + 2;
        pppppuVar32 = pppppuVar32 + 2;
      } while (plVar20 != plVar34);
      pppppuStack_2c8[0xb] = pppppuVar32;
    }
    pppppuStack_2c8[0xd] = (undefined8 *****)0x0;
    pppppuStack_2c8[0xe] = (undefined8 *****)0x0;
    pppppuStack_2c8[0xf] = (undefined8 *****)0x0;
    lVar30 = CONCAT17(bStack_161,
                      CONCAT25(uStack_163,
                               CONCAT14(uStack_164,
                                        CONCAT13(uStack_165,CONCAT21(uStack_167,uStack_168)))));
    FUN_10a882820(pppppuStack_2c8 + 0xd,CONCAT17(bStack_169,uStack_170),lVar30,
                  lVar30 - CONCAT17(bStack_169,uStack_170) >> 4);
    pppppuStack_2c8[0x10] = (undefined8 *****)0x0;
    pppppuStack_2c8[0x11] = (undefined8 *****)0x0;
    pppppuStack_2c8[0x12] = (undefined8 *****)0x0;
    FUN_10a8828c4(pppppuStack_2c8 + 0x10,pppppuStack_200,CONCAT17(bStack_1f1,uStack_1f8),
                  CONCAT17(bStack_1f1,uStack_1f8) - (long)pppppuStack_200 >> 4);
    pppppuStack_2c8[0x14] = (undefined8 *****)CONCAT17(uStack_1a1,uStack_1a8);
    pppppuStack_2c8[0x13] = ppppuStack_1b0;
    pppppuStack_2c8[0x15] = (undefined8 *****)CONCAT17(bStack_199,uStack_1a0);
    func_0x00010a8829b0(&pppppuStack_200);
    if (pppppuVar21 != (undefined8 *****)0x0) {
      pppppuVar32 = pppppuVar21 + 1;
      do {
        ppppuVar28 = *pppppuVar32;
        cVar12 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(pppppuVar32,0x10);
        if (bVar13) {
          *pppppuVar32 = (undefined8 ****)((long)ppppuVar28 + -1);
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      if (ppppuVar28 == (undefined8 ****)0x0) {
        (*(code *)(*pppppuVar21)[2])(pppppuVar21);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar21);
      }
    }
    func_0x00010a8829b0(&plStack_158);
    FUN_10a87f1e0(&uStack_170);
    func_0x00010a87edc4(&plStack_2a8);
  }
  if ((char)bStack_279 < '\0') {
    __ZdlPv(uStack_290);
  }
LAB_10a861eb4:
  if ((char)bStack_261 < '\0') {
    __ZdlPv(pppppuStack_278);
  }
  if (cStack_219 < '\0') {
    __ZdlPv(CONCAT17(uStack_229,uStack_230));
  }
  if ((undefined8 ******)pppppuStack_2d0 == (undefined8 ******)0x0) {
    uStack_170 = 0x10a89627c;
    bStack_169 = 0;
    uStack_168 = 0xe8;
    uStack_167 = 0xc249;
    uStack_165 = 0x10;
    uStack_164 = 1;
    uStack_163 = 0;
    bStack_161 = 0;
    FUN_10a860860(ppppppuVar17,&uStack_170);
    ppppppuVar17 = (undefined8 ******)&uStack_168;
    (**(code **)CONCAT17(bStack_161,
                         CONCAT25(uStack_163,
                                  CONCAT14(uStack_164,
                                           CONCAT13(uStack_165,CONCAT21(uStack_167,uStack_168))))))
              ();
  }
  else {
    pppppuStack_200 = (undefined8 *****)((ulong)pppppuStack_200 & 0xffffffffffffff00);
    uStack_1c8 = 0;
    if ((ppcVar23[0x12] == (code *)0x0) || (*(long *)ppcVar23[0x12] == 0)) {
      bVar13 = false;
    }
    else {
      func_0x000107c2b054(&uStack_170);
      pcVar26 = ppcVar23[0x12];
      puVar29 = *(undefined **)(pcVar26 + 0x18);
      puVar8 = &UNK_10f67d9eb;
      if (puVar29 != (undefined *)0x0) {
        puVar8 = puVar29;
      }
      func_0x000107c2b054(&ppppuStack_1b0,puVar8);
      bStack_1e9 = bStack_159;
      bStack_1f1 = bStack_161;
      pppppuStack_200 = (undefined8 *****)CONCAT17(bStack_169,uStack_170);
      uStack_1f8 = CONCAT25(uStack_163,
                            CONCAT14(uStack_164,CONCAT13(uStack_165,CONCAT21(uStack_167,uStack_168))
                                    ));
      uStack_218 = uStack_168;
      uStack_217 = (undefined6)((uint7)uStack_1f8 >> 8);
      bStack_211 = bStack_161;
      uStack_210 = (undefined7)(CONCAT62(uStack_15f,CONCAT11(uStack_160,bStack_161)) >> 8);
      uStack_168 = 0;
      uStack_167 = 0;
      uStack_165 = 0;
      uStack_164 = 0;
      uStack_163 = 0;
      bStack_161 = 0;
      uStack_160 = 0;
      uStack_15f = 0;
      bStack_159 = 0;
      uStack_170 = 0;
      bStack_169 = 0;
      uStack_230 = uStack_1a8;
      uStack_229 = uStack_1a1;
      uStack_1f0 = uStack_210;
      uStack_1e8 = *(undefined8 *)(pcVar26 + 8);
      ppppuStack_1e0 = ppppuStack_1b0;
      uStack_1d8 = uStack_1a8;
      uStack_1d1 = uStack_1a1;
      bStack_1c9 = bStack_199;
      uStack_1c8 = 1;
      puVar8 = &UNK_10f67d9eb;
      if (*(undefined **)(ppcVar23[0x12] + 0x18) != (undefined *)0x0) {
        puVar8 = *(undefined **)(ppcVar23[0x12] + 0x18);
      }
      func_0x000107c2b054(&uStack_170,puVar8);
      uVar4 = CONCAT17(bStack_161,
                       CONCAT25(uStack_163,
                                CONCAT14(uStack_164,
                                         CONCAT13(uStack_165,CONCAT21(uStack_167,uStack_168)))));
      puVar15 = (undefined7 *)CONCAT17(bStack_169,uStack_170);
      if (-1 < (char)bStack_159) {
        uVar4 = (ulong)bStack_159;
        puVar15 = &uStack_170;
      }
      FUN_10ae03140(0,puVar15,uVar4);
      func_0x00010ae02ef0();
      ppuVar24 = &PTR_PTR_113305208;
      FUN_10ae079a0();
      FUN_10ae0314c();
      func_0x00010ae02f00();
      FUN_10ae07cd4(ppuVar24,&PTR_PTR_113305208);
      bVar13 = true;
    }
    uStack_170 = SUB87(pppppuStack_2d0,0);
    bStack_169 = (byte)((ulong)pppppuStack_2d0 >> 0x38);
    uStack_168 = SUB81(pppppuStack_2c8,0);
    uStack_167 = (undefined2)((ulong)pppppuStack_2c8 >> 8);
    uStack_165 = (undefined1)((ulong)pppppuStack_2c8 >> 0x18);
    uStack_164 = (undefined1)((ulong)pppppuStack_2c8 >> 0x20);
    uStack_163 = (undefined2)((ulong)pppppuStack_2c8 >> 0x28);
    bStack_161 = (byte)((ulong)pppppuStack_2c8 >> 0x38);
    if ((undefined8 ******)pppppuStack_2c8 != (undefined8 ******)0x0) {
      ppppppuVar3 = (undefined8 ******)(pppppuStack_2c8 + 1);
      do {
        cVar12 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(ppppppuVar3,0x10);
        if (bVar14) {
          *ppppppuVar3 = (undefined8 *****)((long)*ppppppuVar3 + 1);
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
    }
    uStack_160 = 0;
    uStack_128 = uStack_128 & 0xffffffffffffff00;
    if (bVar13) {
      FUN_10a87ee20(&uStack_160,&pppppuStack_200);
      uStack_128 = CONCAT71(uStack_128._1_7_,1);
    }
    ppppuStack_1b0 = (undefined8 ****)FUN_10a89636c;
    uStack_1a8 = 0x110c24a18;
    uStack_1a1 = 0;
    puVar22 = (undefined8 *)0x50;
    __Znwm();
    puVar22[1] = CONCAT17(bStack_161,
                          CONCAT25(uStack_163,
                                   CONCAT14(uStack_164,
                                            CONCAT13(uStack_165,CONCAT21(uStack_167,uStack_168)))));
    *puVar22 = CONCAT17(bStack_169,uStack_170);
    uStack_170 = 0;
    bStack_169 = 0;
    uStack_168 = 0;
    uStack_167 = 0;
    uStack_165 = 0;
    uStack_164 = 0;
    uStack_163 = 0;
    bStack_161 = 0;
    *(undefined1 *)(puVar22 + 2) = 0;
    *(undefined1 *)(puVar22 + 9) = 0;
    if (bVar13) {
      puVar22[3] = plStack_158;
      puVar22[2] = CONCAT17(bStack_159,CONCAT61(uStack_15f,uStack_160));
      puVar22[4] = pplStack_150;
      plStack_158 = (long *)0x0;
      pplStack_150 = (long **)0x0;
      uStack_160 = 0;
      uStack_15f = 0;
      bStack_159 = 0;
      puVar22[5] = uStack_148;
      puVar22[7] = uStack_138;
      puVar22[6] = uStack_140;
      puVar22[8] = uStack_130;
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_130 = 0;
      *(undefined1 *)(puVar22 + 9) = 1;
    }
    uStack_1a0 = SUB87(puVar22,0);
    bStack_199 = (byte)((ulong)puVar22 >> 0x38);
    FUN_10a860860(ppppppuVar17,&ppppuStack_1b0);
    (**(code **)CONCAT17(uStack_1a1,uStack_1a8))(&uStack_1a8);
    FUN_10a87eeb8(&uStack_160);
    plVar20 = (long *)CONCAT17(bStack_161,
                               CONCAT25(uStack_163,
                                        CONCAT14(uStack_164,
                                                 CONCAT13(uStack_165,CONCAT21(uStack_167,uStack_168)
                                                         ))));
    if (plVar20 != (long *)0x0) {
      plVar34 = plVar20 + 1;
      do {
        lVar30 = *plVar34;
        cVar12 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar34,0x10);
        if (bVar13) {
          *plVar34 = lVar30 + -1;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      if (lVar30 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
      }
    }
    ppppppuVar17 = &pppppuStack_200;
    FUN_10a87eeb8();
  }
  if ((undefined8 ******)pppppuStack_2c8 != (undefined8 ******)0x0) {
    ppppppuVar3 = (undefined8 ******)(pppppuStack_2c8 + 1);
    do {
      pppppuVar32 = *ppppppuVar3;
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(ppppppuVar3,0x10);
      if (bVar13) {
        *ppppppuVar3 = (undefined8 *****)((long)pppppuVar32 + -1);
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (pppppuVar32 == (undefined8 *****)0x0) {
      (*(code *)(*pppppuStack_2c8)[2])(pppppuStack_2c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppppppuVar17 = (undefined8 ******)pppppuStack_2c8;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
    ___stack_chk_fail();
    FUN_10a05bd88(&ppppuStack_1b0);
    func_0x00010a05a8c4(&uStack_170);
    FUN_10a05bd88(&ppppuStack_2c0);
    FUN_10a042634(&pppppuStack_200);
    func_0x00010a87edc4(&plStack_2a8);
    if ((char)bStack_279 < '\0') {
      __ZdlPv(uStack_290);
    }
    if ((char)bStack_261 < '\0') {
      __ZdlPv(pppppuStack_278);
    }
    if (cStack_219 < '\0') {
      __ZdlPv(CONCAT17(uStack_229,uStack_230));
    }
    __Unwind_Resume();
    if (*(char *)((long)ppppppuVar17 + 0x37) < '\0') {
      __ZdlPv(ppppppuVar17[4]);
    }
    if (*(char *)((long)ppppppuVar17 + 0x17) < '\0') {
      __ZdlPv(*ppppppuVar17);
    }
    return ppppppuVar17;
  }
  return ppppppuVar17;
}



/* Entry: 10a861020; end: 10a8625c7;  */

/* WARNING: Removing unreachable block (ram,0x00010a861e30) */
/* WARNING: Removing unreachable block (ram,0x00010a861944) */
/* WARNING: Removing unreachable block (ram,0x00010a861868) */
/* WARNING: Removing unreachable block (ram,0x00010a8616cc) */
/* WARNING: Removing unreachable block (ram,0x00010a861288) */
/* WARNING: Removing unreachable block (ram,0x00010a86118c) */
/* WARNING: Removing unreachable block (ram,0x00010a8611ac) */
/* WARNING: Removing unreachable block (ram,0x00010a8614a4) */
/* WARNING: Removing unreachable block (ram,0x00010a8617e4) */
/* WARNING: Removing unreachable block (ram,0x00010a8618e8) */
/* WARNING: Removing unreachable block (ram,0x00010a861e1c) */
/* WARNING: Removing unreachable block (ram,0x00010a862010) */

undefined8 ****** FUN_10a861020(long param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 ******ppppppuVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar7;
  char cVar8;
  bool bVar9;
  bool bVar10;
  undefined7 *puVar11;
  long **pplVar12;
  code *pcVar13;
  undefined8 ******ppppppuVar14;
  undefined8 ****ppppuVar15;
  undefined8 ******ppppppuVar16;
  undefined **ppuVar17;
  undefined8 ****ppppuVar18;
  undefined8 in_x7;
  long *plVar19;
  undefined *puVar20;
  undefined8 ***pppuVar21;
  undefined8 ****ppppuVar22;
  ulong uVar23;
  long lVar24;
  undefined8 *****pppppuVar25;
  undefined8 *puVar26;
  undefined8 ****ppppuVar27;
  long *plVar28;
  undefined8 *****pppppuVar29;
  undefined8 uVar30;
  long lVar31;
  long *plVar32;
  undefined8 *****pppppuVar33;
  undefined8 *****pppppuStack_230;
  undefined8 *****pppppuStack_228;
  undefined8 ****ppppuStack_220;
  long *plStack_218;
  char cStack_209;
  long *plStack_208;
  long *plStack_200;
  long *plStack_1f8;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  byte bStack_1d9;
  undefined8 *****pppppuStack_1d8;
  ulong uStack_1d0;
  byte bStack_1c1;
  undefined1 auStack_1c0 [8];
  undefined8 ***pppuStack_1b8;
  undefined1 auStack_1b0 [8];
  undefined8 ***pppuStack_1a8;
  undefined8 ***pppuStack_1a0;
  undefined8 ***pppuStack_198;
  undefined7 uStack_190;
  undefined1 uStack_189;
  char cStack_179;
  undefined1 uStack_178;
  undefined6 uStack_177;
  byte bStack_171;
  undefined7 uStack_170;
  undefined1 uStack_169;
  long lStack_168;
  undefined8 *****pppppuStack_160;
  undefined7 uStack_158;
  byte bStack_151;
  undefined7 uStack_150;
  byte bStack_149;
  undefined8 uStack_148;
  undefined8 ****ppppuStack_140;
  undefined7 uStack_138;
  undefined1 uStack_131;
  byte bStack_129;
  undefined1 uStack_128;
  ulong uStack_118;
  undefined8 ****ppppuStack_110;
  undefined7 uStack_108;
  undefined1 uStack_101;
  undefined7 uStack_100;
  byte bStack_f9;
  long lStack_f0;
  undefined7 uStack_d0;
  byte bStack_c9;
  undefined1 uStack_c8;
  undefined2 uStack_c7;
  undefined1 uStack_c5;
  undefined1 uStack_c4;
  undefined2 uStack_c3;
  byte bStack_c1;
  undefined1 uStack_c0;
  undefined6 uStack_bf;
  byte bStack_b9;
  long *plStack_b8;
  long **pplStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = &UNK_10f67d9eb;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar4 = (undefined *)*param_2;
  }
  func_0x000107c2b054(&uStack_d0,puVar4);
  puVar4 = &UNK_10f67d9eb;
  if ((undefined *)param_2[2] != (undefined *)0x0) {
    puVar4 = (undefined *)param_2[2];
  }
  func_0x000107c2b054(&pppppuStack_160,puVar4);
  puVar4 = &UNK_10f67d9eb;
  if ((undefined *)param_2[3] != (undefined *)0x0) {
    puVar4 = (undefined *)param_2[3];
  }
  func_0x000107c2b054(&ppppuStack_110,puVar4);
  uVar2 = CONCAT17(bStack_c1,
                   CONCAT25(uStack_c3,
                            CONCAT14(uStack_c4,CONCAT13(uStack_c5,CONCAT21(uStack_c7,uStack_c8)))));
  puVar11 = (undefined7 *)CONCAT17(bStack_c9,uStack_d0);
  if (-1 < (char)bStack_b9) {
    uVar2 = (ulong)bStack_b9;
    puVar11 = &uStack_d0;
  }
  FUN_10ae03140(0,puVar11,uVar2);
  FUN_10ae03140();
  FUN_10ae03140();
  func_0x00010ae02ecc();
  ppuVar17 = &PTR_PTR_113305740;
  FUN_10ae079a0();
  FUN_10ae0314c();
  FUN_10ae0314c();
  FUN_10ae0314c();
  func_0x00010ae02edc();
  FUN_10ae07cd4(ppuVar17,&PTR_PTR_113305740);
  if ((char)bStack_149 < '\0') {
    __ZdlPv(pppppuStack_160);
  }
  puVar4 = &UNK_10f67d9eb;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar4 = (undefined *)*param_2;
  }
  func_0x000107c2b054(&uStack_190,puVar4);
  puVar4 = &UNK_10f67d9eb;
  if ((undefined *)param_2[3] != (undefined *)0x0) {
    puVar4 = (undefined *)param_2[3];
  }
  func_0x000107c2b054(&pppppuStack_1d8,puVar4);
  uVar2 = uStack_1d0;
  if (-1 < (char)bStack_1c1) {
    uVar2 = (ulong)bStack_1c1;
  }
  if (uVar2 == 0) {
    ppuVar17 = &PTR_PTR_113304580;
    FUN_10ae079a0(0,&PTR_PTR_113304580);
    FUN_10ae07cd4(ppuVar17,&PTR_PTR_113304580);
    pppppuStack_230 = (undefined8 ******)0x0;
    pppppuStack_228 = (undefined8 ******)0x0;
    goto LAB_10a861eb4;
  }
  puVar4 = &UNK_10f67d9eb;
  if ((undefined *)param_2[2] != (undefined *)0x0) {
    puVar4 = (undefined *)param_2[2];
  }
  func_0x000107c2b054(&uStack_1f0,puVar4);
  if (-1 < (char)bStack_1d9) {
    uStack_1e8 = (ulong)bStack_1d9;
  }
  if (uStack_1e8 == 0) {
    ppuVar17 = &PTR_PTR_1133045b8;
    FUN_10ae079a0(0,&PTR_PTR_1133045b8);
    FUN_10ae07cd4(ppuVar17,&PTR_PTR_1133045b8);
    pppppuStack_230 = (undefined8 ******)0x0;
    pppppuStack_228 = (undefined8 ******)0x0;
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_1 + 0x218,&uStack_190);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (*(long *)(param_1 + 0x230) + 0x18,&uStack_1f0);
    plVar32 = (long *)(param_1 + 0x230);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (*plVar32 + 0x30,&pppppuStack_1d8);
    lVar24 = *plVar32;
    puVar4 = &UNK_10f67d9eb;
    if ((undefined *)param_2[6] != (undefined *)0x0) {
      puVar4 = (undefined *)param_2[6];
    }
    func_0x000107c2b054(&uStack_d0,puVar4);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (lVar24 + 0x80,&uStack_d0);
    *(undefined8 *)(*(long *)(param_1 + 0x230) + 0x60) = param_2[8];
    iVar5 = *(int *)(param_1 + 0x2d0);
    iVar1 = iVar5 + 1;
    *(int *)(param_1 + 0x2d0) = iVar1;
    iVar6 = *(int *)(param_1 + 0x2d4);
    if (iVar6 < iVar1) {
      iVar6 = iVar5 + 1;
    }
    *(int *)(param_1 + 0x2d4) = iVar6;
    uVar2 = *(ulong *)(param_1 + 0x220);
    lVar24 = *(long *)(param_1 + 0x218);
    if (-1 < (char)*(byte *)(param_1 + 0x22f)) {
      uVar2 = (ulong)*(byte *)(param_1 + 0x22f);
      lVar24 = param_1 + 0x218;
    }
    FUN_10ae03140(0,lVar24,uVar2);
    ppuVar17 = &PTR_PTR_113304228;
    FUN_10ae079a0();
    FUN_10ae0314c();
    FUN_10ae07cd4(ppuVar17,&PTR_PTR_113304228);
    plStack_208 = (long *)0x0;
    plStack_200 = (long *)0x0;
    plStack_1f8 = (long *)0x0;
    FUN_10a860df0(&plStack_208,(long)*(int *)(param_2 + 10));
    if (0 < *(int *)(param_2 + 10)) {
      lVar24 = 0;
      do {
        plVar19 = (long *)(param_2[9] + lVar24 * 0x38);
        if ((plVar19[1] == 0) || (*plVar19 == 0)) {
          ppuVar17 = &PTR_PTR_1133056e8;
          FUN_10ae079a0(0,&PTR_PTR_1133056e8);
          FUN_10ae07cd4(ppuVar17,&PTR_PTR_1133056e8);
        }
        else {
          func_0x000107c2b054(&pppppuStack_160);
          uVar2 = CONCAT17(bStack_151,uStack_158);
          if (-1 < (char)bStack_149) {
            uVar2 = (ulong)bStack_149;
          }
          uVar23 = uStack_1d0;
          if (-1 < (char)bStack_1c1) {
            uVar23 = (ulong)bStack_1c1;
          }
          if (uVar2 == uVar23) {
            ppppppuVar16 = (undefined8 ******)pppppuStack_160;
            if (-1 < (char)bStack_149) {
              ppppppuVar16 = &pppppuStack_160;
            }
            ppppppuVar3 = (undefined8 ******)pppppuStack_1d8;
            if (-1 < (char)bStack_1c1) {
              ppppppuVar3 = &pppppuStack_1d8;
            }
            ppppppuVar14 = ppppppuVar16;
            _memcmp(ppppppuVar16,ppppppuVar3,uVar2);
            if ((int)ppppppuVar14 != 0) goto LAB_10a8613cc;
            FUN_10ae03140(0,ppppppuVar16,uVar2);
            ppuVar17 = &PTR_PTR_1133059b8;
            FUN_10ae079a0();
            FUN_10ae0314c();
            FUN_10ae07cd4(ppuVar17,&PTR_PTR_1133059b8);
          }
          else {
LAB_10a8613cc:
            func_0x000107c2b054(&ppppuStack_110,*(undefined8 *)(param_2[9] + lVar24 * 0x38));
            puVar20 = *(undefined **)(param_2[9] + lVar24 * 0x38 + 0x10);
            puVar4 = &UNK_10f67d9eb;
            if (puVar20 != (undefined *)0x0) {
              puVar4 = puVar20;
            }
            func_0x000107c2b054(&uStack_178,puVar4);
            puVar20 = *(undefined **)(param_2[9] + lVar24 * 0x38 + 0x18);
            puVar4 = &UNK_10f67d9eb;
            if (puVar20 != (undefined *)0x0) {
              puVar4 = puVar20;
            }
            func_0x000107c2b054(&ppppuStack_220,puVar4);
            uVar30 = *(undefined8 *)(param_2[9] + lVar24 * 0x38 + 0x30);
            ppppuVar15 = (undefined8 ****)0xd0;
            __Znwm();
            ppppuVar27 = ppppuVar15 + 1;
            *ppppuVar27 = (undefined8 ***)0x0;
            ppppuVar15[2] = (undefined8 ***)0x0;
            *ppppuVar15 = (undefined8 ***)&PTR_FUN_110bf8238;
            ppppuVar22 = ppppuVar15 + 3;
            FUN_10a5caa80(ppppuVar22,&ppppuStack_110,&uStack_178,&ppppuStack_220,&pppppuStack_160,
                          uVar30);
            puVar20 = *(undefined **)(param_2[9] + lVar24 * 0x38 + 0x20);
            puVar4 = &UNK_10f67d9eb;
            if (puVar20 != (undefined *)0x0) {
              puVar4 = puVar20;
            }
            pppuStack_1a0 = ppppuVar22;
            pppuStack_198 = ppppuVar15;
            func_0x000107c2b054(&uStack_d0,puVar4);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (ppppuVar15 + 0x13,&uStack_d0);
            FUN_10a895d54(param_1 + 0x328,&pppppuStack_160,&pppppuStack_160,&pppuStack_1a0);
            uVar2 = CONCAT17(uStack_101,uStack_108);
            if (-1 < (char)bStack_f9) {
              uVar2 = (ulong)bStack_f9;
            }
            if (uVar2 != 0) {
              uVar2 = CONCAT17(bStack_151,uStack_158);
              ppppppuVar16 = (undefined8 ******)pppppuStack_160;
              if (-1 < (char)bStack_149) {
                uVar2 = (ulong)bStack_149;
                ppppppuVar16 = &pppppuStack_160;
              }
              FUN_10ae03140(0,ppppppuVar16,uVar2);
              ppuVar17 = &PTR_PTR_113304940;
              FUN_10ae079a0();
              FUN_10ae0314c();
              FUN_10ae07cd4(ppuVar17,&PTR_PTR_113304940);
              FUN_10a895d54(param_1 + 0x300,&ppppuStack_110,&ppppuStack_110,&pppuStack_1a0);
            }
            iVar5 = *(int *)(param_1 + 0x2d0);
            iVar1 = iVar5 + 1;
            *(int *)(param_1 + 0x2d0) = iVar1;
            iVar6 = *(int *)(param_1 + 0x2d4);
            if (iVar6 < iVar1) {
              iVar6 = iVar5 + 1;
            }
            *(int *)(param_1 + 0x2d4) = iVar6;
            ppppuVar18 = &pppuStack_1a0;
            FUN_10a860e8c(param_1);
            if (plStack_200 < plStack_1f8) {
              *plStack_200 = (long)ppppuVar22;
              plStack_200[1] = (long)ppppuVar15;
              do {
                cVar8 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(ppppuVar27,0x10);
                if (bVar9) {
                  *ppppuVar27 = (undefined8 ***)((long)*ppppuVar27 + 1);
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              plStack_200 = plStack_200 + 2;
            }
            else {
              lVar31 = (long)plStack_200 - (long)plStack_208;
              uVar2 = (lVar31 >> 4) + 1;
              if (uVar2 >> 0x3c != 0) {
                FUN_10a87ed30();
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x10a8621fc);
                (*pcVar13)();
              }
              uVar23 = (long)plStack_1f8 - (long)plStack_208 >> 3;
              if (uVar23 <= uVar2) {
                uVar23 = uVar2;
              }
              if (0x7fffffffffffffef < (ulong)((long)plStack_1f8 - (long)plStack_208)) {
                uVar23 = 0xfffffffffffffff;
              }
              pplStack_b0 = &plStack_208;
              func_0x00010a87ed44();
              plVar19 = (long *)(uVar23 + lVar31);
              *plVar19 = (long)ppppuVar22;
              plVar19[1] = (long)ppppuVar15;
              do {
                cVar8 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(ppppuVar27,0x10);
                if (bVar9) {
                  *ppppuVar27 = (undefined8 ***)((long)*ppppuVar27 + 1);
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              plVar28 = (long *)((long)plVar19 - ((long)plStack_200 - (long)plStack_208));
              _memcpy(plVar28);
              uStack_c0 = SUB81(plStack_208,0);
              uStack_bf = (undefined6)((ulong)plStack_208 >> 8);
              bStack_b9 = (byte)((ulong)plStack_208 >> 0x38);
              plStack_b8 = plStack_1f8;
              uStack_d0 = SUB87(plStack_208,0);
              uStack_c7 = (undefined2)((ulong)plStack_208 >> 8);
              uStack_c5 = (undefined1)((ulong)plStack_208 >> 0x18);
              uStack_c4 = (undefined1)((ulong)plStack_208 >> 0x20);
              uStack_c3 = (undefined2)((ulong)plStack_208 >> 0x28);
              plStack_208 = plVar28;
              plStack_200 = plVar19 + 2;
              plStack_1f8 = (long *)(uVar23 + (long)ppppuVar18 * 0x10);
              bStack_c9 = bStack_b9;
              uStack_c8 = uStack_c0;
              bStack_c1 = bStack_b9;
              func_0x00010a87ed78(&uStack_d0);
              plStack_200 = plVar19 + 2;
            }
            do {
              pppuVar21 = *ppppuVar27;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(ppppuVar27,0x10);
              if (bVar9) {
                *ppppuVar27 = (undefined8 ***)((long)pppuVar21 + -1);
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (pppuVar21 == (undefined8 ***)0x0) {
              (*(code *)(*ppppuVar15)[2])(ppppuVar15);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar15);
            }
            if (cStack_209 < '\0') {
              __ZdlPv(ppppuStack_220);
            }
            if (lStack_168 < 0) {
              __ZdlPv(CONCAT17(bStack_171,CONCAT61(uStack_177,uStack_178)));
            }
          }
          if ((char)bStack_149 < '\0') {
            __ZdlPv(pppppuStack_160);
          }
        }
        lVar24 = lVar24 + 1;
      } while (lVar24 < *(int *)(param_2 + 10));
    }
    FUN_10a860bc8(param_1,param_2 + 0xe);
    ppppuStack_110 = (undefined8 ****)((ulong)ppppuStack_110 & 0xffffffffffffff00);
    uStack_108 = 0;
    uStack_101 = 0;
    FUN_10a8819b0(&uStack_178,&plStack_208);
    FUN_10a881a60(&ppppuStack_220,plVar32);
    func_0x000109381b20(&pppuStack_1a0,&uStack_178);
    bStack_b9 = 0xc;
    uStack_c8 = 0x73;
    uStack_c7 = 0x7265;
    uStack_c5 = 0x73;
    uStack_d0 = 0x746e6573657270;
    bStack_c9 = 0x55;
    uStack_c4 = 0;
    pppppuVar29 = &ppppuStack_110;
    func_0x0001095b7584(pppppuVar29,&uStack_d0);
    uVar7 = *(undefined1 *)pppppuVar29;
    *(undefined1 *)pppppuVar29 = pppuStack_1a0._0_1_;
    pppuStack_1a0 = (undefined8 ***)CONCAT71(pppuStack_1a0._1_7_,uVar7);
    ppppuVar22 = pppppuVar29[1];
    pppppuVar29[1] = (undefined8 ****)pppuStack_198;
    pppuStack_198 = ppppuVar22;
    func_0x000109380ffc(&pppuStack_198,uVar7);
    func_0x000109381b20(auStack_1b0,&ppppuStack_220);
    bStack_b9 = 0xb;
    uStack_c8 = 0x73;
    uStack_c7 = 0x7265;
    uStack_d0 = 0x746e6572727563;
    bStack_c9 = 0x55;
    uStack_c5 = 0;
    pppppuVar29 = &ppppuStack_110;
    func_0x0001095b7584(pppppuVar29,&uStack_d0);
    plVar32 = (long *)(param_1 + 0x240);
    uVar7 = *(undefined1 *)pppppuVar29;
    *(undefined1 *)pppppuVar29 = auStack_1b0[0];
    ppppuVar22 = pppppuVar29[1];
    auStack_1b0[0] = uVar7;
    pppppuVar29[1] = (undefined8 ****)pppuStack_1a8;
    pppuStack_1a8 = ppppuVar22;
    func_0x000109380ffc(&pppuStack_1a8,uVar7);
    if (*plVar32 != 0) {
      FUN_10a881a60(auStack_1c0,plVar32);
      bStack_b9 = 8;
      uStack_d0 = 0x65735574736f68;
      bStack_c9 = 0x72;
      uStack_c8 = 0;
      pppppuVar29 = &ppppuStack_110;
      func_0x0001095b7584(pppppuVar29,&uStack_d0);
      uVar7 = *(undefined1 *)pppppuVar29;
      *(undefined1 *)pppppuVar29 = auStack_1c0[0];
      ppppuVar22 = pppppuVar29[1];
      auStack_1c0[0] = uVar7;
      pppppuVar29[1] = (undefined8 ****)pppuStack_1b8;
      pppuStack_1b8 = ppppuVar22;
      func_0x000109380ffc(&pppuStack_1b8,uVar7);
    }
    FUN_10a0c32e4(&uStack_d0,&ppppuStack_110,0xffffffff,0x20,0,1);
    uVar2 = CONCAT17(bStack_c1,
                     CONCAT25(uStack_c3,
                              CONCAT14(uStack_c4,CONCAT13(uStack_c5,CONCAT21(uStack_c7,uStack_c8))))
                    );
    puVar11 = (undefined7 *)CONCAT17(bStack_c9,uStack_d0);
    if (-1 < (char)bStack_b9) {
      uVar2 = (ulong)bStack_b9;
      puVar11 = &uStack_d0;
    }
    FUN_10a3bf330(&pppppuStack_160,puVar11,uVar2);
    func_0x000109380ffc(&plStack_218,(ulong)ppppuStack_220 & 0xff);
    func_0x000109380ffc(&uStack_170,uStack_178);
    func_0x000109380ffc(&uStack_108,(ulong)ppppuStack_110 & 0xff);
    FUN_10a874700(&uStack_178,*(undefined8 *)(param_1 + 0x388));
    plVar19 = (long *)0x138;
    __Znwm();
    pppppuVar25 = pppppuStack_160;
    plVar28 = plVar19 + 1;
    *plVar28 = 0;
    plVar19[2] = 0;
    *plVar19 = (long)&PTR_FUN_110b9f3b0;
    pppppuVar29 = (undefined8 *****)(plVar19 + 3);
    pppppuStack_160 = (undefined8 *****)0x0;
    uStack_d0 = SUB87(pppppuVar25,0);
    bStack_c9 = (byte)((ulong)pppppuVar25 >> 0x38);
    uStack_c8 = (undefined1)uStack_158;
    uStack_c7 = (undefined2)((uint7)uStack_158 >> 8);
    uStack_c5 = (undefined1)((uint7)uStack_158 >> 0x18);
    uStack_c4 = (undefined1)((uint7)uStack_158 >> 0x20);
    uStack_c3 = (undefined2)((uint7)uStack_158 >> 0x28);
    (**(code **)(CONCAT17(bStack_149,uStack_150) + 0x10))(&uStack_c0,&uStack_150);
    uStack_88 = uStack_118;
    uVar2 = *(ulong *)(param_1 + 0x208);
    lVar24 = *(long *)(param_1 + 0x200);
    if (-1 < (char)*(byte *)(param_1 + 0x217)) {
      uVar2 = (ulong)*(byte *)(param_1 + 0x217);
      lVar24 = param_1 + 0x200;
    }
    ppppuStack_110 = (undefined8 ****)FUN_10a8a636c;
    uStack_108 = 0x110c24f80;
    uStack_101 = 0;
    uStack_100 = CONCAT61(uStack_177,uStack_178);
    bStack_f9 = bStack_171;
    lStack_f0 = lStack_168;
    uStack_170 = 0;
    uStack_169 = 0;
    lStack_168 = 0;
    FUN_10a23708c(pppppuVar29,&UNK_10e4df4cf,0x26,&UNK_10f647b49,4,&uStack_d0,1,in_x7,lVar24,uVar2,
                  &ppppuStack_110);
    (**(code **)CONCAT17(uStack_101,uStack_108))(&uStack_108);
    FUN_10a042634(&uStack_d0);
    ppppuStack_220 = pppppuVar29;
    plStack_218 = plVar19;
    FUN_10a8747a4(&uStack_178);
    uStack_d0 = 0;
    bStack_c9 = 0;
    uStack_c8 = 0;
    uStack_c7 = 0;
    uStack_c5 = 0;
    uStack_c4 = 0;
    uStack_c3 = 0;
    bStack_c1 = 0;
    lVar24 = *(long *)(param_1 + 0x360);
    if (lVar24 == 0) {
LAB_10a861b4c:
      ppuVar17 = &PTR_PTR_113305cc8;
      FUN_10ae079a0(0,&PTR_PTR_113305cc8);
      FUN_10ae07cd4(ppuVar17,&PTR_PTR_113305cc8);
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
      uStack_c8 = (undefined1)lVar24;
      uStack_c7 = (undefined2)((ulong)lVar24 >> 8);
      uStack_c5 = (undefined1)((ulong)lVar24 >> 0x18);
      uStack_c4 = (undefined1)((ulong)lVar24 >> 0x20);
      uStack_c3 = (undefined2)((ulong)lVar24 >> 0x28);
      bStack_c1 = (byte)((ulong)lVar24 >> 0x38);
      if (lVar24 == 0) goto LAB_10a861b4c;
      puVar26 = *(undefined8 **)(param_1 + 0x358);
      uStack_d0 = SUB87(puVar26,0);
      bStack_c9 = (byte)((ulong)puVar26 >> 0x38);
      if (puVar26 == (undefined8 *)0x0) goto LAB_10a861b4c;
      ppuVar17 = &PTR_PTR_113304740;
      FUN_10ae079a0(0,&PTR_PTR_113304740);
      FUN_10ae07cd4(ppuVar17,&PTR_PTR_113304740);
      uStack_108 = SUB87(plVar19,0);
      uStack_101 = (undefined1)((ulong)plVar19 >> 0x38);
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar28,0x10);
        if (bVar9) {
          *plVar28 = *plVar28 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      ppppuStack_110 = pppppuVar29;
      (**(code **)*puVar26)(puVar26,&ppppuStack_110);
      plVar19 = (long *)CONCAT17(uStack_101,uStack_108);
      if (plVar19 != (long *)0x0) {
        plVar28 = plVar19 + 1;
        do {
          lVar24 = *plVar28;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar9) {
            *plVar28 = lVar24 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar24 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
        }
      }
    }
    plVar19 = (long *)CONCAT17(bStack_c1,
                               CONCAT25(uStack_c3,
                                        CONCAT14(uStack_c4,
                                                 CONCAT13(uStack_c5,CONCAT21(uStack_c7,uStack_c8))))
                              );
    if (plVar19 != (long *)0x0) {
      plVar28 = plVar19 + 1;
      do {
        lVar24 = *plVar28;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar28,0x10);
        if (bVar9) {
          *plVar28 = lVar24 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar24 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
      }
    }
    plVar19 = plStack_218;
    if (plStack_218 != (long *)0x0) {
      plVar28 = plStack_218 + 1;
      do {
        lVar24 = *plVar28;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar28,0x10);
        if (bVar9) {
          *plVar28 = lVar24 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar24 == 0) {
        (**(code **)(*plStack_218 + 0x10))(plStack_218);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
      }
    }
    FUN_10a042634(&pppppuStack_160);
    FUN_10a87b7b0(&uStack_d0,param_1,param_2 + 0xb);
    pppppuVar29 = (undefined8 *****)*plVar32;
    if (pppppuVar29 == (undefined8 *****)0x0) {
      pppppuVar25 = (undefined8 *****)0xd0;
      __Znwm();
      pppppuVar25[1] = (undefined8 ****)0x0;
      pppppuVar25[2] = (undefined8 ****)0x0;
      *pppppuVar25 = (undefined8 ****)&PTR_FUN_110bf8238;
      pppppuVar29 = pppppuVar25 + 3;
      *pppppuVar29 = (undefined8 ****)&PTR_FUN_110c25680;
      pppppuVar25[0x17] = (undefined8 ****)0x0;
      pppppuVar25[0x16] = (undefined8 ****)0x0;
      pppppuVar25[0x19] = (undefined8 ****)0x0;
      pppppuVar25[0x18] = (undefined8 ****)0x0;
      pppppuVar25[9] = (undefined8 ****)0x0;
      pppppuVar25[8] = (undefined8 ****)0x0;
      pppppuVar25[0xb] = (undefined8 ****)0x0;
      pppppuVar25[10] = (undefined8 ****)0x0;
      pppppuVar25[0xd] = (undefined8 ****)0x0;
      pppppuVar25[0xc] = (undefined8 ****)0x0;
      pppppuVar25[0xf] = (undefined8 ****)0x0;
      pppppuVar25[0xe] = (undefined8 ****)0x0;
      pppppuVar25[5] = (undefined8 ****)0x0;
      pppppuVar25[4] = (undefined8 ****)0x0;
      pppppuVar25[7] = (undefined8 ****)0x0;
      pppppuVar25[6] = (undefined8 ****)0x0;
      pppppuVar25[0xe] = (undefined8 ****)0x0;
      pppppuVar25[0xf] = (undefined8 ****)0xffffffffffffffff;
      pppppuVar25[0x13] = (undefined8 ****)0x0;
      pppppuVar25[0x12] = (undefined8 ****)0x0;
      pppppuVar25[0x15] = (undefined8 ****)0x0;
      pppppuVar25[0x14] = (undefined8 ****)0x0;
      pppppuVar25[0x11] = (undefined8 ****)0x0;
      pppppuVar25[0x10] = (undefined8 ****)0x0;
      *(undefined1 *)(pppppuVar25 + 0x16) = 0;
      uStack_178 = SUB81(pppppuVar29,0);
      uStack_177 = (undefined6)((ulong)pppppuVar29 >> 8);
      bStack_171 = (byte)((ulong)pppppuVar29 >> 0x38);
      uStack_170 = SUB87(pppppuVar25,0);
      uStack_169 = (undefined1)((ulong)pppppuVar25 >> 0x38);
    }
    else {
      pppppuVar25 = *(undefined8 ******)(param_1 + 0x248);
      uStack_178 = SUB81(pppppuVar29,0);
      uStack_177 = (undefined6)((ulong)pppppuVar29 >> 8);
      bStack_171 = (byte)((ulong)pppppuVar29 >> 0x38);
      uStack_170 = SUB87(pppppuVar25,0);
      uStack_169 = (undefined1)((ulong)pppppuVar25 >> 0x38);
      if (pppppuVar25 != (undefined8 *****)0x0) {
        pppppuVar33 = pppppuVar25 + 1;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(pppppuVar33,0x10);
          if (bVar9) {
            *pppppuVar33 = (undefined8 ****)((long)*pppppuVar33 + 1);
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
    }
    pplVar12 = pplStack_b0;
    plVar32 = plStack_b8;
    puVar4 = &UNK_10f67d9eb;
    if ((undefined *)param_2[0x13] != (undefined *)0x0) {
      puVar4 = (undefined *)param_2[0x13];
    }
    pppppuStack_228 = (undefined8 ******)0xb0;
    __Znwm();
    pppppuStack_228[1] = (undefined8 *****)0x0;
    pppppuStack_228[2] = (undefined8 *****)0x0;
    *pppppuStack_228 = (undefined8 ****)&PTR_FUN_110c249a8;
    pppppuStack_160 = (undefined8 ******)0x0;
    uStack_158 = 0;
    bStack_151 = 0;
    uStack_150 = 0;
    bStack_149 = 0;
    FUN_10a8828c4(&pppppuStack_160,plVar32,pplVar12,(long)pplVar12 - (long)plVar32 >> 4);
    func_0x000107c2b054(&ppppuStack_110,puVar4);
    plVar19 = plStack_200;
    plVar32 = plStack_208;
    pppppuVar33 = *(undefined8 ******)(param_1 + 0x230);
    pppppuStack_228[7] = *(undefined8 ******)(param_1 + 0x238);
    pppppuStack_228[6] = pppppuVar33;
    pppppuStack_228[4] = (undefined8 *****)0x0;
    pppppuStack_228[5] = (undefined8 *****)0x0;
    pppppuStack_228[3] = (undefined8 ****)&PTR_DAT_110c23e40;
    if (*(long *)(param_1 + 0x238) != 0) {
      plVar28 = (long *)(*(long *)(param_1 + 0x238) + 8);
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar28,0x10);
        if (bVar9) {
          *plVar28 = *plVar28 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    pppppuStack_230 = pppppuStack_228 + 3;
    pppppuStack_228[8] = pppppuVar29;
    pppppuStack_228[9] = pppppuVar25;
    if (pppppuVar25 != (undefined8 *****)0x0) {
      pppppuVar29 = pppppuVar25 + 1;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(pppppuVar29,0x10);
        if (bVar9) {
          *pppppuVar29 = (undefined8 ****)((long)*pppppuVar29 + 1);
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    pppppuStack_228[10] = (undefined8 *****)0x0;
    pppppuStack_228[0xb] = (undefined8 *****)0x0;
    pppppuStack_228[0xc] = (undefined8 *****)0x0;
    if ((long)plStack_200 - (long)plStack_208 != 0) {
      FUN_10a87f0c4(pppppuStack_228 + 10,(long)plStack_200 - (long)plStack_208 >> 4);
      pppppuVar29 = (undefined8 *****)pppppuStack_228[0xb];
      do {
        lVar24 = plVar32[1];
        ppppuVar22 = (undefined8 ****)*plVar32;
        pppppuVar29[1] = (undefined8 ****)plVar32[1];
        *pppppuVar29 = ppppuVar22;
        if (lVar24 != 0) {
          plVar28 = (long *)(lVar24 + 8);
          do {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar9) {
              *plVar28 = *plVar28 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
        }
        plVar32 = plVar32 + 2;
        pppppuVar29 = pppppuVar29 + 2;
      } while (plVar32 != plVar19);
      pppppuStack_228[0xb] = pppppuVar29;
    }
    pppppuStack_228[0xd] = (undefined8 *****)0x0;
    pppppuStack_228[0xe] = (undefined8 *****)0x0;
    pppppuStack_228[0xf] = (undefined8 *****)0x0;
    lVar24 = CONCAT17(bStack_c1,
                      CONCAT25(uStack_c3,
                               CONCAT14(uStack_c4,CONCAT13(uStack_c5,CONCAT21(uStack_c7,uStack_c8)))
                              ));
    FUN_10a882820(pppppuStack_228 + 0xd,CONCAT17(bStack_c9,uStack_d0),lVar24,
                  lVar24 - CONCAT17(bStack_c9,uStack_d0) >> 4);
    pppppuStack_228[0x10] = (undefined8 *****)0x0;
    pppppuStack_228[0x11] = (undefined8 *****)0x0;
    pppppuStack_228[0x12] = (undefined8 *****)0x0;
    FUN_10a8828c4(pppppuStack_228 + 0x10,pppppuStack_160,CONCAT17(bStack_151,uStack_158),
                  CONCAT17(bStack_151,uStack_158) - (long)pppppuStack_160 >> 4);
    pppppuStack_228[0x14] = (undefined8 *****)CONCAT17(uStack_101,uStack_108);
    pppppuStack_228[0x13] = ppppuStack_110;
    pppppuStack_228[0x15] = (undefined8 *****)CONCAT17(bStack_f9,uStack_100);
    func_0x00010a8829b0(&pppppuStack_160);
    if (pppppuVar25 != (undefined8 *****)0x0) {
      pppppuVar29 = pppppuVar25 + 1;
      do {
        ppppuVar22 = *pppppuVar29;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(pppppuVar29,0x10);
        if (bVar9) {
          *pppppuVar29 = (undefined8 ****)((long)ppppuVar22 + -1);
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (ppppuVar22 == (undefined8 ****)0x0) {
        (*(code *)(*pppppuVar25)[2])(pppppuVar25);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar25);
      }
    }
    func_0x00010a8829b0(&plStack_b8);
    FUN_10a87f1e0(&uStack_d0);
    func_0x00010a87edc4(&plStack_208);
  }
  if ((char)bStack_1d9 < '\0') {
    __ZdlPv(uStack_1f0);
  }
LAB_10a861eb4:
  if ((char)bStack_1c1 < '\0') {
    __ZdlPv(pppppuStack_1d8);
  }
  if (cStack_179 < '\0') {
    __ZdlPv(CONCAT17(uStack_189,uStack_190));
  }
  if ((undefined8 ******)pppppuStack_230 == (undefined8 ******)0x0) {
    uStack_d0 = 0x10a89627c;
    bStack_c9 = 0;
    uStack_c8 = 0xe8;
    uStack_c7 = 0xc249;
    uStack_c5 = 0x10;
    uStack_c4 = 1;
    uStack_c3 = 0;
    bStack_c1 = 0;
    FUN_10a860860(param_1,&uStack_d0);
    ppppppuVar16 = (undefined8 ******)&uStack_c8;
    (**(code **)CONCAT17(bStack_c1,
                         CONCAT25(uStack_c3,
                                  CONCAT14(uStack_c4,
                                           CONCAT13(uStack_c5,CONCAT21(uStack_c7,uStack_c8))))))();
  }
  else {
    pppppuStack_160 = (undefined8 *****)((ulong)pppppuStack_160 & 0xffffffffffffff00);
    uStack_128 = 0;
    if (((long *)param_2[0x12] == (long *)0x0) || (*(long *)param_2[0x12] == 0)) {
      bVar9 = false;
    }
    else {
      func_0x000107c2b054(&uStack_d0);
      lVar24 = param_2[0x12];
      puVar20 = *(undefined **)(lVar24 + 0x18);
      puVar4 = &UNK_10f67d9eb;
      if (puVar20 != (undefined *)0x0) {
        puVar4 = puVar20;
      }
      func_0x000107c2b054(&ppppuStack_110,puVar4);
      bStack_149 = bStack_b9;
      bStack_151 = bStack_c1;
      pppppuStack_160 = (undefined8 *****)CONCAT17(bStack_c9,uStack_d0);
      uStack_158 = CONCAT25(uStack_c3,
                            CONCAT14(uStack_c4,CONCAT13(uStack_c5,CONCAT21(uStack_c7,uStack_c8))));
      uStack_178 = uStack_c8;
      uStack_177 = (undefined6)((uint7)uStack_158 >> 8);
      bStack_171 = bStack_c1;
      uStack_170 = (undefined7)(CONCAT62(uStack_bf,CONCAT11(uStack_c0,bStack_c1)) >> 8);
      uStack_c8 = 0;
      uStack_c7 = 0;
      uStack_c5 = 0;
      uStack_c4 = 0;
      uStack_c3 = 0;
      bStack_c1 = 0;
      uStack_c0 = 0;
      uStack_bf = 0;
      bStack_b9 = 0;
      uStack_d0 = 0;
      bStack_c9 = 0;
      uStack_148 = *(undefined8 *)(lVar24 + 8);
      uStack_190 = uStack_108;
      uStack_189 = uStack_101;
      uStack_150 = uStack_170;
      ppppuStack_140 = ppppuStack_110;
      uStack_138 = uStack_108;
      uStack_131 = uStack_101;
      bStack_129 = bStack_f9;
      uStack_128 = 1;
      puVar4 = &UNK_10f67d9eb;
      if (*(undefined **)(param_2[0x12] + 0x18) != (undefined *)0x0) {
        puVar4 = *(undefined **)(param_2[0x12] + 0x18);
      }
      func_0x000107c2b054(&uStack_d0,puVar4);
      uVar2 = CONCAT17(bStack_c1,
                       CONCAT25(uStack_c3,
                                CONCAT14(uStack_c4,CONCAT13(uStack_c5,CONCAT21(uStack_c7,uStack_c8))
                                        )));
      puVar11 = (undefined7 *)CONCAT17(bStack_c9,uStack_d0);
      if (-1 < (char)bStack_b9) {
        uVar2 = (ulong)bStack_b9;
        puVar11 = &uStack_d0;
      }
      FUN_10ae03140(0,puVar11,uVar2);
      func_0x00010ae02ef0();
      ppuVar17 = &PTR_PTR_113305208;
      FUN_10ae079a0();
      FUN_10ae0314c();
      func_0x00010ae02f00();
      FUN_10ae07cd4(ppuVar17,&PTR_PTR_113305208);
      bVar9 = true;
    }
    uStack_d0 = SUB87(pppppuStack_230,0);
    bStack_c9 = (byte)((ulong)pppppuStack_230 >> 0x38);
    uStack_c8 = SUB81(pppppuStack_228,0);
    uStack_c7 = (undefined2)((ulong)pppppuStack_228 >> 8);
    uStack_c5 = (undefined1)((ulong)pppppuStack_228 >> 0x18);
    uStack_c4 = (undefined1)((ulong)pppppuStack_228 >> 0x20);
    uStack_c3 = (undefined2)((ulong)pppppuStack_228 >> 0x28);
    bStack_c1 = (byte)((ulong)pppppuStack_228 >> 0x38);
    if ((undefined8 ******)pppppuStack_228 != (undefined8 ******)0x0) {
      ppppppuVar16 = (undefined8 ******)(pppppuStack_228 + 1);
      do {
        cVar8 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(ppppppuVar16,0x10);
        if (bVar10) {
          *ppppppuVar16 = (undefined8 *****)((long)*ppppppuVar16 + 1);
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    uStack_c0 = 0;
    uStack_88 = uStack_88 & 0xffffffffffffff00;
    if (bVar9) {
      FUN_10a87ee20(&uStack_c0,&pppppuStack_160);
      uStack_88 = CONCAT71(uStack_88._1_7_,1);
    }
    ppppuStack_110 = (undefined8 ****)FUN_10a89636c;
    uStack_108 = 0x110c24a18;
    uStack_101 = 0;
    puVar26 = (undefined8 *)0x50;
    __Znwm();
    puVar26[1] = CONCAT17(bStack_c1,
                          CONCAT25(uStack_c3,
                                   CONCAT14(uStack_c4,
                                            CONCAT13(uStack_c5,CONCAT21(uStack_c7,uStack_c8)))));
    *puVar26 = CONCAT17(bStack_c9,uStack_d0);
    uStack_d0 = 0;
    bStack_c9 = 0;
    uStack_c8 = 0;
    uStack_c7 = 0;
    uStack_c5 = 0;
    uStack_c4 = 0;
    uStack_c3 = 0;
    bStack_c1 = 0;
    *(undefined1 *)(puVar26 + 2) = 0;
    *(undefined1 *)(puVar26 + 9) = 0;
    if (bVar9) {
      puVar26[3] = plStack_b8;
      puVar26[2] = CONCAT17(bStack_b9,CONCAT61(uStack_bf,uStack_c0));
      puVar26[4] = pplStack_b0;
      plStack_b8 = (long *)0x0;
      pplStack_b0 = (long **)0x0;
      uStack_c0 = 0;
      uStack_bf = 0;
      bStack_b9 = 0;
      puVar26[5] = uStack_a8;
      puVar26[7] = uStack_98;
      puVar26[6] = uStack_a0;
      puVar26[8] = uStack_90;
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      *(undefined1 *)(puVar26 + 9) = 1;
    }
    uStack_100 = SUB87(puVar26,0);
    bStack_f9 = (byte)((ulong)puVar26 >> 0x38);
    FUN_10a860860(param_1,&ppppuStack_110);
    (**(code **)CONCAT17(uStack_101,uStack_108))(&uStack_108);
    FUN_10a87eeb8(&uStack_c0);
    plVar32 = (long *)CONCAT17(bStack_c1,
                               CONCAT25(uStack_c3,
                                        CONCAT14(uStack_c4,
                                                 CONCAT13(uStack_c5,CONCAT21(uStack_c7,uStack_c8))))
                              );
    if (plVar32 != (long *)0x0) {
      plVar19 = plVar32 + 1;
      do {
        lVar24 = *plVar19;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar9) {
          *plVar19 = lVar24 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar24 == 0) {
        (**(code **)(*plVar32 + 0x10))(plVar32);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar32);
      }
    }
    ppppppuVar16 = &pppppuStack_160;
    FUN_10a87eeb8();
  }
  if ((undefined8 ******)pppppuStack_228 != (undefined8 ******)0x0) {
    ppppppuVar3 = (undefined8 ******)(pppppuStack_228 + 1);
    do {
      pppppuVar29 = *ppppppuVar3;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(ppppppuVar3,0x10);
      if (bVar9) {
        *ppppppuVar3 = (undefined8 *****)((long)pppppuVar29 + -1);
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (pppppuVar29 == (undefined8 *****)0x0) {
      (*(code *)(*pppppuStack_228)[2])(pppppuStack_228);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppppppuVar16 = (undefined8 ******)pppppuStack_228;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    FUN_10a05bd88(&ppppuStack_110);
    func_0x00010a05a8c4(&uStack_d0);
    FUN_10a05bd88(&ppppuStack_220);
    FUN_10a042634(&pppppuStack_160);
    func_0x00010a87edc4(&plStack_208);
    if ((char)bStack_1d9 < '\0') {
      __ZdlPv(uStack_1f0);
    }
    if ((char)bStack_1c1 < '\0') {
      __ZdlPv(pppppuStack_1d8);
    }
    if (cStack_179 < '\0') {
      __ZdlPv(CONCAT17(uStack_189,uStack_190));
    }
    __Unwind_Resume();
    if (*(char *)((long)ppppppuVar16 + 0x37) < '\0') {
      __ZdlPv(ppppppuVar16[4]);
    }
    if (*(char *)((long)ppppppuVar16 + 0x17) < '\0') {
      __ZdlPv(*ppppppuVar16);
    }
    return ppppppuVar16;
  }
  return ppppppuVar16;
}



/* Entry: 10a8625c8; end: 10a862607;  */

undefined8 * FUN_10a8625c8(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a862608; end: 10a86397f;  */

/* WARNING: Removing unreachable block (ram,0x00010a863d54) */
/* WARNING: Removing unreachable block (ram,0x00010a862b24) */
/* WARNING: Removing unreachable block (ram,0x00010a862a60) */
/* WARNING: Removing unreachable block (ram,0x00010a862d50) */
/* WARNING: Removing unreachable block (ram,0x00010a863cc4) */
/* WARNING: Removing unreachable block (ram,0x00010a863de0) */
/* WARNING: Type propagation algorithm not settling */

code ******* FUN_10a862608(long param_1,int *param_2)

{
  long *plVar1;
  code *******pppppppcVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined8 *******pppppppuVar6;
  long *plVar7;
  undefined8 uVar8;
  code *******pppppppcVar9;
  undefined1 *puVar10;
  int *****pppppiVar11;
  int *******pppppppiVar12;
  undefined8 *puVar13;
  code *******pppppppcVar14;
  code *******pppppppcVar15;
  code ******ppppppcVar16;
  undefined **ppuVar17;
  code *******pppppppcVar18;
  code *******pppppppcVar19;
  byte bVar20;
  undefined1 uVar21;
  undefined **ppuVar22;
  int *piVar23;
  code *******pppppppcVar24;
  ulong uVar25;
  undefined4 uVar26;
  long lVar27;
  code *****pppppcVar28;
  ulong uVar29;
  code ******ppppppcVar30;
  undefined *puVar31;
  ulong uVar32;
  undefined8 *puVar33;
  code *******pppppppcVar34;
  undefined **unaff_x21;
  int iVar35;
  code *******unaff_x22;
  code *******unaff_x23;
  code *******unaff_x24;
  int ******unaff_x25;
  undefined8 *unaff_x26;
  undefined *puVar36;
  code ******ppppppcVar37;
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
  undefined1 auStack_870 [576];
  code *******pppppppcStack_630;
  code *******pppppppcStack_628;
  undefined1 *****pppppuStack_620;
  code *pcStack_618;
  code ******ppppppcStack_608;
  code ******ppppppcStack_600;
  code ******ppppppcStack_5f8;
  code ******ppppppcStack_5f0;
  code *******pppppppcStack_5e8;
  code *******pppppppcStack_5e0;
  code *******pppppppcStack_5d8;
  code *******pppppppcStack_5d0;
  code *******pppppppcStack_5c8;
  undefined1 ****ppppuStack_5c0;
  code *pcStack_5b8;
  code *******pppppppcStack_5b0;
  code *******pppppppcStack_5a8;
  undefined1 ***pppuStack_5a0;
  code *pcStack_598;
  code *******pppppppcStack_590;
  code *******pppppppcStack_588;
  code *******pppppppcStack_580;
  code *******pppppppcStack_578;
  code *******pppppppcStack_570;
  code *******pppppppcStack_568;
  undefined1 **ppuStack_560;
  code *pcStack_558;
  code *******pppppppcStack_550;
  code ******ppppppcStack_548;
  code *******pppppppcStack_540;
  code *******pppppppcStack_538;
  undefined **ppuStack_530;
  undefined8 *******pppppppuStack_528;
  ulong uStack_520;
  byte bStack_511;
  undefined1 uStack_510;
  code ******ppppppcStack_508;
  undefined1 uStack_500;
  code ******ppppppcStack_4f8;
  undefined1 uStack_4f0;
  code ******ppppppcStack_4e8;
  byte abStack_4e0 [8];
  code ******ppppppcStack_4d8;
  code *******pppppppcStack_4d0;
  code *******pppppppcStack_4c8;
  code *******pppppppcStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  long alStack_4a8 [7];
  undefined8 uStack_470;
  code *******pppppppcStack_468;
  undefined **ppuStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined7 uStack_428;
  undefined1 uStack_421;
  undefined2 uStack_420;
  undefined2 uStack_41e;
  undefined1 uStack_41c;
  undefined2 uStack_41b;
  undefined1 uStack_419;
  undefined8 uStack_418;
  code *******pppppppcStack_410;
  undefined8 uStack_3e0;
  long lStack_3d8;
  undefined8 *puStack_3d0;
  int ******ppppppiStack_3c8;
  code *******pppppppcStack_3c0;
  code *******pppppppcStack_3b8;
  code *******pppppppcStack_3b0;
  code *******pppppppcStack_3a8;
  code *******pppppppcStack_3a0;
  code *******pppppppcStack_398;
  undefined1 *puStack_390;
  code *pcStack_388;
  long lStack_380;
  ulong uStack_378;
  code *******pppppppcStack_370;
  undefined8 uStack_360;
  undefined8 uStack_358;
  int ******ppppppiStack_350;
  int ******ppppppiStack_348;
  code *******pppppppcStack_340;
  code *******pppppppcStack_338;
  code ******ppppppcStack_330;
  code *******pppppppcStack_328;
  code *******pppppppcStack_318;
  code *******pppppppcStack_310;
  undefined7 uStack_308;
  byte bStack_301;
  code ******ppppppcStack_300;
  code *******pppppppcStack_2f8;
  code *******apppppppcStack_2e8 [2];
  char cStack_2d1;
  code *******pppppppcStack_2d0;
  ulong uStack_2c8;
  byte bStack_2b9;
  int ******ppppppiStack_2b8;
  code ******ppppppcStack_2b0;
  code *****pppppcStack_2a8;
  undefined8 uStack_2a0;
  byte abStack_298 [8];
  code ******ppppppcStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  code ******ppppppcStack_268;
  undefined2 uStack_260;
  char cStack_259;
  undefined8 uStack_250;
  code *******pppppppcStack_248;
  undefined2 uStack_240;
  char cStack_239;
  code *******pppppppcStack_230;
  code *******pppppppcStack_228;
  ulong uStack_220;
  undefined8 uStack_210;
  long *plStack_208;
  int ******ppppppiStack_200;
  code ******ppppppcStack_1f8;
  code *****pppppcStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *puStack_1e0;
  code *******pppppppcStack_1d8;
  undefined1 auStack_1d0 [7];
  undefined1 auStack_1c9 [4];
  undefined1 uStack_1c5;
  undefined4 uStack_1c4;
  undefined8 uStack_1c0;
  code *******pppppppcStack_1b8;
  code *******pppppppcStack_1b0;
  code *******pppppppcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_188;
  int *******pppppppiStack_110;
  code *******pppppppcStack_108;
  code *******pppppppcStack_100;
  code *******pppppppcStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_c8;
  code *******pppppppcStack_b8;
  code *******pppppppcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_78;
  long lStack_70;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_2 + 6) == 0) {
    ppuVar17 = &PTR_PTR_1133044d8;
    pppppppcVar15 = (code *******)0x0;
    ppuVar22 = ppuVar17;
    FUN_10ae079a0();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pppppppcVar15 = (code *******)0x0;
      if (ppuVar22 != (undefined **)0x0) {
        FUN_10ae03188(&puStack_8a8,&uStack_470,0x400,auStack_870,0x400,ppuVar22[0x13],ppuVar22[0xf],
                      ppuVar22 + 0x14,0x400);
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
        puVar36 = ppuVar22[0x12];
        puVar31 = ppuVar22[0xb];
        uVar32 = 0;
        _clock_gettime_nsec_np();
        uVar25 = uVar32;
        _pthread_self();
        _pthread_mach_thread_np();
        ppuStack_8e8 = ppuVar22 + 1;
        uStack_8b8 = *(undefined4 *)(ppuVar22 + 0xe);
        uStack_8c0 = uVar25 & 0xffffffff;
        ppuStack_8b0 = ppuVar22 + 0x10;
        pppppppcVar15 = (code *******)*ppuVar22;
        ppuVar17 = (undefined **)&ppuStack_8e8;
        uStack_8f0 = uStack_898;
        puStack_8e0 = puVar31;
        puStack_8d8 = puVar36;
        uStack_8d0 = (ulong)(puVar36 != (undefined *)0x0);
        uStack_8c8 = uVar32;
        FUN_10ae0784c(pppppppcVar15,ppuVar17,&puStack_900,&puStack_918);
      }
      iVar35 = (int)ppuVar17;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
        ___stack_chk_fail();
        if (iVar35 == 0) {
          __Unwind_Resume();
        }
        func_0x000104bd46a0();
        func_0x00010ae087bc();
        FUN_10ae07e54(pppppppcVar15);
        return pppppppcVar15;
      }
      return pppppppcVar15;
    }
    goto LAB_10a8636a4;
  }
  func_0x000107c2b054(apppppppcStack_2e8);
  unaff_x21 = (undefined **)apppppppcStack_2e8;
  lVar27 = param_1 + 0x328;
  FUN_10a894b50(lVar27,apppppppcStack_2e8);
  if (lVar27 == 0) {
    FUN_10ae03140();
    ppuVar17 = &PTR_PTR_113304e80;
    pppppppcVar15 = (code *******)ppuVar17;
    FUN_10ae079a0();
    FUN_10ae0314c();
    FUN_10ae07cd4(pppppppcVar15,&PTR_PTR_113304e80);
  }
  else {
    pppppppcVar15 = *(code ********)(lVar27 + 0x30);
    ppppppcStack_300 = *(code *******)(lVar27 + 0x28);
    if (pppppppcVar15 != (code *******)0x0) {
      pppppppcVar9 = pppppppcVar15 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppppppcVar9,0x10);
        if (bVar5) {
          *pppppppcVar9 = (code ******)((long)*pppppppcVar9 + 1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    unaff_x26 = &uStack_288;
    pppppppcStack_2f8 = pppppppcVar15;
    if (*param_2 == 1) {
      pppppppcStack_b0 = (code *******)0x0;
      uStack_a8 = 0;
      pppppppcStack_b8 = (code *******)0x0;
      ppppppcStack_330 = ppppppcStack_300;
      pppppppcStack_328 = pppppppcVar15;
      FUN_109ffdff4(&pppppppcStack_b8,*(long *)(param_2 + 2),
                    *(long *)(param_2 + 2) + *(long *)(param_2 + 4));
      pppppppcStack_108 = pppppppcStack_328;
      pppppppiStack_110 = (int *******)ppppppcStack_330;
      if (pppppppcVar15 != (code *******)0x0) {
        pppppppcVar15 = pppppppcVar15 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppppppcVar15,0x10);
          if (bVar5) {
            *pppppppcVar15 = (code ******)((long)*pppppppcVar15 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      pppppppcStack_100 = (code *******)0x0;
      pppppppcStack_f8 = (code *******)0x0;
      uStack_f0 = 0;
      FUN_10a05151c(&pppppppcStack_100,pppppppcStack_b8,pppppppcStack_b0,
                    (long)pppppppcStack_b0 - (long)pppppppcStack_b8);
      pppppppcStack_1b8 = pppppppcStack_108;
      uStack_1c0 = pppppppiStack_110;
      unaff_x21 = (undefined **)auStack_1d0;
      auStack_1d0._0_4_ = 0xa89548c;
      auStack_1d0._4_2_ = 1;
      auStack_1d0[6] = 0;
      auStack_1c9 = (undefined1  [4])0xc2498000;
      uStack_1c5 = 0x10;
      uStack_1c4 = 1;
      pppppppiStack_110 = (int *******)0x0;
      pppppppcStack_108 = (code *******)0x0;
      pppppppcStack_1a8 = pppppppcStack_f8;
      pppppppcStack_1b0 = pppppppcStack_100;
      uStack_1a0 = uStack_f0;
      pppppppcStack_f8 = (code *******)0x0;
      uStack_f0 = 0;
      pppppppcStack_100 = (code *******)0x0;
      FUN_10a860860(param_1,auStack_1d0);
      (**(code **)CONCAT44(uStack_1c4,CONCAT13(uStack_1c5,auStack_1c9._1_3_)))(auStack_1c9 + 1);
      if (pppppppcStack_100 != (code *******)0x0) {
        pppppppcStack_f8 = pppppppcStack_100;
        __ZdlPv();
      }
      pppppppcVar15 = pppppppcStack_108;
      if (pppppppcStack_108 != (code *******)0x0) {
        pppppppcVar9 = pppppppcStack_108 + 1;
        do {
          ppppppcVar30 = *pppppppcVar9;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppppppcVar9,0x10);
          if (bVar5) {
            *pppppppcVar9 = (code ******)((long)ppppppcVar30 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (ppppppcVar30 == (code ******)0x0) {
          (*(code *)(*pppppppcStack_108)[2])(pppppppcStack_108);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar15);
        }
      }
      pppppppcVar15 = pppppppcStack_b8;
      if (pppppppcStack_b8 == (code *******)0x0) goto LAB_10a862f80;
      pppppppcStack_b0 = pppppppcStack_b8;
      pppppppcVar9 = pppppppcStack_b8;
LAB_10a862f7c:
      __ZdlPv();
      pppppppcVar15 = pppppppcVar9;
    }
    else if (*param_2 == 0) {
      ppppppcStack_330 = ppppppcStack_300;
      pppppppcStack_328 = pppppppcVar15;
      FUN_109ffe064(&pppppppcStack_318,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
      pppppppcVar9 = pppppppcStack_310;
      pppppppcVar14 = pppppppcStack_318;
      if (-1 < (char)bStack_301) {
        pppppppcVar9 = (code *******)(ulong)bStack_301;
        pppppppcVar14 = (code *******)&pppppppcStack_318;
      }
      abStack_298[0] = 0;
      unaff_x25 = (int ******)abStack_298;
      ppppppcStack_290 = (code ******)0x0;
      pppppppcStack_f8 = (code *******)0x0;
      func_0x000109477bd0(auStack_1d0,pppppppcVar14,(long)pppppppcVar14 + (long)pppppppcVar9,
                          &pppppppiStack_110,0,0);
      func_0x000109477cb8(auStack_1d0,1,abStack_298);
      func_0x0001094790dc(&pppppppcStack_1a8);
      if (pppppppcStack_1b8 == (code *******)auStack_1d0) {
        lVar27 = 0x20;
LAB_10a862914:
        (**(code **)((long)*pppppppcStack_1b8 + lVar27))();
      }
      else if (pppppppcStack_1b8 != (code *******)0x0) {
        lVar27 = 0x28;
        goto LAB_10a862914;
      }
      if ((int ********)pppppppcStack_f8 == &pppppppiStack_110) {
        lVar27 = 0x20;
LAB_10a862940:
        (**(code **)((long)*pppppppcStack_f8 + lVar27))();
      }
      else if (pppppppcStack_f8 != (code *******)0x0) {
        lVar27 = 0x28;
        goto LAB_10a862940;
      }
      bVar20 = abStack_298[0];
      if (abStack_298[0] == 9) {
        bVar20 = 9;
LAB_10a862a70:
        func_0x000109380ffc(&ppppppcStack_290,bVar20);
        pppppppcStack_108 = pppppppcStack_328;
        pppppppiStack_110 = (int *******)ppppppcStack_330;
        if (pppppppcVar15 != (code *******)0x0) {
          pppppppcVar15 = pppppppcVar15 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pppppppcVar15,0x10);
            if (bVar5) {
              *pppppppcVar15 = (code ******)((long)*pppppppcVar15 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        if ((char)bStack_301 < '\0') {
          func_0x000107c3192c(&pppppppcStack_100,pppppppcStack_318,pppppppcStack_310);
          uStack_1c0 = pppppppiStack_110;
          pppppppcStack_1b8 = pppppppcStack_108;
        }
        else {
          pppppppcStack_f8 = pppppppcStack_310;
          pppppppcStack_100 = pppppppcStack_318;
          uStack_f0 = CONCAT17(bStack_301,uStack_308);
          uStack_1c0 = (int *******)ppppppcStack_330;
          pppppppcStack_1b8 = pppppppcStack_328;
        }
        auStack_1d0._0_4_ = 0xa894c34;
        auStack_1d0._4_2_ = 1;
        auStack_1d0[6] = 0;
        auStack_1c9 = (undefined1  [4])0xc2495000;
        uStack_1c5 = 0x10;
        uStack_1c4 = 1;
        unaff_x21 = (undefined **)auStack_1d0;
        pppppppiStack_110 = (int *******)0x0;
        pppppppcStack_108 = (code *******)0x0;
        pppppppcStack_1a8 = pppppppcStack_f8;
        pppppppcStack_1b0 = pppppppcStack_100;
        uStack_1a0 = uStack_f0;
        pppppppcStack_100 = (code *******)0x0;
        pppppppcStack_f8 = (code *******)0x0;
        uStack_f0 = 0;
        FUN_10a860860(param_1,auStack_1d0);
        pppppppcVar15 = (code *******)(auStack_1c9 + 1);
        (**(code **)CONCAT44(uStack_1c4,CONCAT13(uStack_1c5,auStack_1c9._1_3_)))();
        pppppppcVar9 = pppppppcStack_108;
        if (pppppppcStack_108 != (code *******)0x0) {
          pppppppcVar14 = pppppppcStack_108 + 1;
          do {
            ppppppcVar30 = *pppppppcVar14;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pppppppcVar14,0x10);
            if (bVar5) {
              *pppppppcVar14 = (code ******)((long)ppppppcVar30 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (ppppppcVar30 == (code ******)0x0) {
            (*(code *)(*pppppppcStack_108)[2])(pppppppcStack_108);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            pppppppcVar15 = pppppppcVar9;
          }
        }
      }
      else {
        pppppppcVar9 = (code *******)0x20;
        __Znwm();
        pppppppcStack_338 = (code *******)0x8000000000000020;
        pppppppcStack_340 = (code *******)0x1c;
        uStack_a8 = 0x8000000000000020;
        pppppppcStack_b0 = (code *******)0x1c;
        ppppppiStack_348 = (int ******)0x45544e495f524559;
        ppppppiStack_350 = (int ******)0x414c5049544c554d;
        pppppppcVar9[1] = (code ******)0x45544e495f524559;
        *pppppppcVar9 = (code ******)0x414c5049544c554d;
        uStack_358 = 0x4547415353454d5f;
        uStack_360 = 0x4c414e5245544e49;
        *(undefined8 *)((long)pppppppcVar9 + 0x14) = 0x4547415353454d5f;
        *(undefined8 *)((long)pppppppcVar9 + 0xc) = 0x4c414e5245544e49;
        *(undefined1 *)((long)pppppppcVar9 + 0x1c) = 0;
        auStack_1d0._0_4_ = SUB84(abStack_298,0);
        auStack_1d0._4_2_ = (undefined2)((ulong)abStack_298 >> 0x20);
        auStack_1d0[6] = (undefined1)((ulong)abStack_298 >> 0x30);
        auStack_1c9[0] = (byte)((ulong)abStack_298 >> 0x38);
        auStack_1c9._1_3_ = 0;
        uStack_1c5 = 0;
        uStack_1c4 = 0;
        uStack_1c0 = (int *******)0x0;
        pppppppcStack_1b8 = (code *******)0x8000000000000000;
        pppppppcStack_b8 = pppppppcVar9;
        if (bVar20 == 1) {
          ppppppcVar30 = ppppppcStack_290;
          func_0x0001093793a4(ppppppcStack_290,&pppppppcStack_b8);
          auStack_1c9._1_3_ = SUB83(ppppppcVar30,0);
          uStack_1c5 = (undefined1)((ulong)ppppppcVar30 >> 0x18);
          uStack_1c4 = (undefined4)((ulong)ppppppcVar30 >> 0x20);
          bVar20 = abStack_298[0];
LAB_10a862a00:
          pppppppcStack_108 = (code *******)0x0;
          pppppppcStack_100 = (code *******)0x0;
          pppppppcStack_f8 = (code *******)0x8000000000000000;
          if (bVar20 == 1) {
            pppppppcStack_108 = (code *******)(ppppppcStack_290 + 1);
          }
          else {
            if (bVar20 == 2) goto LAB_10a862a24;
            pppppppcStack_f8 = (code *******)0x1;
          }
        }
        else {
          if (bVar20 != 2) {
            pppppppcStack_1b8 = (code *******)0x1;
            goto LAB_10a862a00;
          }
          uStack_1c0 = (int *******)ppppppcStack_290[1];
LAB_10a862a24:
          pppppppcStack_f8 = (code *******)0x8000000000000000;
          pppppppcStack_108 = (code *******)0x0;
          pppppppcStack_100 = (code *******)ppppppcStack_290[1];
        }
        pppppppiStack_110 = (int *******)abStack_298;
        puVar10 = auStack_1d0;
        func_0x000109379420(puVar10,&pppppppiStack_110);
        bVar20 = abStack_298[0];
        if (((ulong)puVar10 & 1) != 0) goto LAB_10a862a70;
        uStack_1c0 = (int *******)CONCAT17(0x14,(undefined7)uStack_1c0);
        uStack_1c5 = 0x73;
        uStack_1c4 = 0x65676173;
        auStack_1d0._0_4_ = 0x6d6f6745;
        auStack_1d0._4_2_ = 0x746f;
        auStack_1d0[6] = 0x69;
        auStack_1c9 = (undefined1  [4])0x654d6e6f;
        uStack_1c0 = (int *******)CONCAT35(uStack_1c0._5_3_,0x65707954);
        ppppppiStack_2b8 = (int ******)abStack_298;
        ppppppcStack_2b0 = (code ******)0x0;
        pppppcStack_2a8 = (code *****)0x0;
        uStack_2a0 = 0x8000000000000000;
        if (abStack_298[0] == 1) {
          ppppppcVar30 = ppppppcStack_290;
          func_0x0001093793a4(ppppppcStack_290,auStack_1d0);
          ppppppcStack_2b0 = ppppppcVar30;
          if ((long)uStack_1c0 < 0) {
            __ZdlPv(CONCAT17(auStack_1c9[0],
                             CONCAT16(auStack_1d0[6],CONCAT24(auStack_1d0._4_2_,auStack_1d0._0_4_)))
                   );
          }
        }
        else if (abStack_298[0] == 2) {
          pppppcStack_2a8 = ppppppcStack_290[1];
        }
        else {
          uStack_2a0 = 1;
        }
        auStack_1d0._0_4_ = SUB84(abStack_298,0);
        auStack_1d0._4_2_ = (undefined2)((ulong)abStack_298 >> 0x20);
        auStack_1d0[6] = (undefined1)((ulong)abStack_298 >> 0x30);
        auStack_1c9[0] = (byte)((ulong)abStack_298 >> 0x38);
        auStack_1c9._1_3_ = 0;
        uStack_1c5 = 0;
        uStack_1c4 = 0;
        uStack_1c0 = (int *******)0x0;
        pppppppcStack_1b8 = (code *******)0x8000000000000000;
        if (abStack_298[0] == 2) {
          uStack_1c0 = (int *******)ppppppcStack_290[1];
        }
        else if (abStack_298[0] == 1) {
          ppppppcVar30 = ppppppcStack_290 + 1;
          auStack_1c9._1_3_ = SUB83(ppppppcVar30,0);
          uStack_1c5 = (undefined1)((ulong)ppppppcVar30 >> 0x18);
          uStack_1c4 = (undefined4)((ulong)ppppppcVar30 >> 0x20);
        }
        else {
          pppppppcStack_1b8 = (code *******)0x1;
        }
        pppppiVar11 = (int *****)&ppppppiStack_2b8;
        func_0x000109379420(pppppiVar11,auStack_1d0);
        if (((ulong)pppppiVar11 & 1) == 0) {
          func_0x000109386768(&ppppppiStack_2b8);
          func_0x00010937c804(&pppppppiStack_110);
          pppppppcVar15 = pppppppcStack_108;
          if (-1 < (long)pppppppcStack_100) {
            pppppppcVar15 = (code *******)((ulong)pppppppcStack_100 >> 0x38);
          }
          if (pppppppcVar15 == (code *******)0x7) {
            pppppppiVar12 = pppppppiStack_110;
            if (-1 < (long)pppppppcStack_100) {
              pppppppiVar12 = (int *******)&pppppppiStack_110;
            }
            unaff_x22 = (code *******)
                        (ulong)(*(int *)pppppppiVar12 == 0x7070614d &&
                               *(int *)((long)pppppppiVar12 + 3) == 0x676e6970);
          }
          else {
            unaff_x22 = (code *******)0x0;
          }
          if ((long)pppppppcStack_100 < 0) {
            __ZdlPv(pppppppiStack_110);
          }
        }
        else {
          unaff_x22 = (code *******)0x0;
        }
        pppppppiVar12 = (int *******)0x20;
        __Znwm();
        pppppppcStack_100 = pppppppcStack_338;
        pppppppcStack_108 = pppppppcStack_340;
        pppppppiVar12[1] = ppppppiStack_348;
        *pppppppiVar12 = ppppppiStack_350;
        *(undefined8 *)((long)pppppppiVar12 + 0x14) = uStack_358;
        *(undefined8 *)((long)pppppppiVar12 + 0xc) = uStack_360;
        *(undefined1 *)((long)pppppppiVar12 + 0x1c) = 0;
        auStack_1d0._0_4_ = SUB84(abStack_298,0);
        auStack_1d0._4_2_ = (undefined2)((ulong)abStack_298 >> 0x20);
        auStack_1d0[6] = (undefined1)((ulong)abStack_298 >> 0x30);
        auStack_1c9[0] = (byte)((ulong)abStack_298 >> 0x38);
        auStack_1c9._1_3_ = 0;
        uStack_1c5 = 0;
        uStack_1c4 = 0;
        uStack_1c0 = (int *******)0x0;
        pppppppcStack_1b8 = (code *******)0x8000000000000000;
        pppppppiStack_110 = pppppppiVar12;
        if (abStack_298[0] == 1) {
          ppppppcVar30 = ppppppcStack_290;
          func_0x0001093793a4(ppppppcStack_290,&pppppppiStack_110);
          auStack_1c9._1_3_ = SUB83(ppppppcVar30,0);
          uStack_1c5 = (undefined1)((ulong)ppppppcVar30 >> 0x18);
          uStack_1c4 = (undefined4)((ulong)ppppppcVar30 >> 0x20);
        }
        else if (abStack_298[0] == 2) {
          uStack_1c0 = (int *******)ppppppcStack_290[1];
        }
        else {
          pppppppcStack_1b8 = (code *******)0x1;
        }
        func_0x000109386768(auStack_1d0);
        func_0x00010937c804(&pppppppcStack_2d0);
        unaff_x23 = (code *******)&pppppppcStack_2d0;
        uVar25 = uStack_2c8;
        pppppppcVar15 = pppppppcStack_2d0;
        if (-1 < (char)bStack_2b9) {
          uVar25 = (ulong)bStack_2b9;
          pppppppcVar15 = unaff_x23;
        }
        FUN_10ae03140(0,pppppppcVar15,uVar25);
        unaff_x21 = &PTR_PTR_113304148;
        FUN_10ae079a0();
        FUN_10ae0314c();
        FUN_10ae07cd4(unaff_x21,&PTR_PTR_113304148);
        ppppppcVar30 = ppppppcStack_330;
        if (-1 < (char)bStack_2b9) {
          uStack_2c8 = (ulong)bStack_2b9;
        }
        iVar35 = (int)unaff_x22;
        pppppppcVar15 = pppppppcStack_2d0;
        if (uStack_2c8 == 0xf) {
          if (-1 < (char)bStack_2b9) {
            pppppppcVar15 = unaff_x23;
          }
          if (*pppppppcVar15 == (code ******)0x5f474e495050414d &&
              *(long *)((long)pppppppcVar15 + 7) == 0x4547415353454d5f || iVar35 != 0) {
LAB_10a862ec8:
            __ZNSt3__15mutex4lockEv(param_1 + 0xf0);
            if (*(char *)(*(long *)(param_1 + 0xb8) + 8) == '\x01') {
              (**(code **)(param_1 + 0xb0))(&pppppppcStack_318,param_1 + 0xb0);
            }
            __ZNSt3__15mutex6unlockEv(param_1 + 0xf0);
            goto LAB_10a862f54;
          }
LAB_10a862f0c:
          FUN_10ae03140(0,pppppppcVar15);
          ppuVar17 = &PTR_PTR_1133047b0;
          ppuVar22 = ppuVar17;
          FUN_10ae079a0();
LAB_10a862f40:
          FUN_10ae0314c();
          FUN_10ae07cd4(ppuVar22,ppuVar17);
        }
        else {
          if (uStack_2c8 != 0x11) {
            if (iVar35 != 0) goto LAB_10a862ec8;
            if (-1 < (char)bStack_2b9) {
              pppppppcVar15 = (code *******)&pppppppcStack_2d0;
            }
            goto LAB_10a862f0c;
          }
          if (-1 < (char)bStack_2b9) {
            pppppppcVar15 = (code *******)&pppppppcStack_2d0;
          }
          if ((*pppppppcVar15 != (code ******)0x4e4944524f434552 ||
              pppppppcVar15[1] != (code ******)0x4554524154535f47) ||
              *(char *)(pppppppcVar15 + 2) != 'D') {
            if (iVar35 != 0) goto LAB_10a862ec8;
            if ((*pppppppcVar15 != (code ******)0x4f49544f4d4f4745 ||
                pppppppcVar15[1] != (code ******)0x47415353454d5f4e) ||
                *(char *)(pppppppcVar15 + 2) != 'E') goto LAB_10a862f0c;
            FUN_10a874b08(param_1 + 0x30,&pppppppcStack_318);
            goto LAB_10a862f54;
          }
          unaff_x21 = (undefined **)(ppppppcStack_330 + 3);
          lVar27 = param_1 + 0x300;
          FUN_10a894b50(lVar27,unaff_x21);
          if (lVar27 == 0) {
            unaff_x24 = *(code ********)(param_1 + 0x230);
            bVar20 = *(byte *)((long)ppppppcVar30 + 0x2f);
            ppppppcVar16 = (code ******)ppppppcVar30[4];
            if (-1 < (char)bVar20) {
              ppppppcVar16 = (code ******)(ulong)bVar20;
            }
            bVar3 = *(byte *)((long)unaff_x24 + 0x2f);
            ppppppcVar37 = unaff_x24[4];
            if (-1 < (char)bVar3) {
              ppppppcVar37 = (code ******)(ulong)bVar3;
            }
            unaff_x22 = (code *******)ppppppcVar30[3];
            if (ppppppcVar16 == ppppppcVar37) {
              if (-1 < (char)bVar20) {
                unaff_x22 = (code *******)unaff_x21;
              }
              pppppppcVar15 = (code *******)unaff_x24[3];
              if (-1 < (char)bVar3) {
                pppppppcVar15 = unaff_x24 + 3;
              }
              pppppppcVar9 = unaff_x22;
              _memcmp(unaff_x22,pppppppcVar15,ppppppcVar16);
              if ((int)pppppppcVar9 == 0) goto LAB_10a863020;
            }
            else if (-1 < (char)bVar20) {
              unaff_x22 = (code *******)unaff_x21;
            }
            FUN_10ae03140(0,unaff_x22,ppppppcVar16);
            ppuVar17 = &PTR_PTR_1133043d8;
            ppuVar22 = ppuVar17;
            FUN_10ae079a0();
            goto LAB_10a862f40;
          }
          unaff_x24 = *(code ********)(lVar27 + 0x28);
LAB_10a863020:
          pppppppcVar15 = *(code ********)(param_1 + 0x4f8);
          if ((pppppppcVar15 != (code *******)0x0) &&
             (__ZNSt3__119__shared_weak_count4lockEv(), pppppppcStack_1d8 = pppppppcVar15,
             pppppppcVar15 != (code *******)0x0)) {
            puVar33 = *(undefined8 **)(param_1 + 0x4f0);
            puStack_1e0 = puVar33;
            if (puVar33 != (undefined8 *)0x0) {
              pppppcVar28 = ppppppcVar30[4];
              pppppppcVar15 = (code *******)ppppppcVar30[3];
              if (-1 < (char)*(byte *)((long)ppppppcVar30 + 0x2f)) {
                pppppcVar28 = (code *****)(ulong)*(byte *)((long)ppppppcVar30 + 0x2f);
                pppppppcVar15 = (code *******)unaff_x21;
              }
              FUN_10ae03140(0,pppppppcVar15,pppppcVar28);
              ppuVar17 = &PTR_PTR_113304d40;
              FUN_10ae079a0();
              FUN_10ae0314c();
              FUN_10ae07cd4(ppuVar17,&PTR_PTR_113304d40);
              uStack_1c0._7_1_ = '\a';
              auStack_1d0._0_4_ = 0x68507369;
              auStack_1d0._4_2_ = 0x746f;
              auStack_1d0[6] = 0x6f;
              auStack_1c9 = (undefined1  [4])((uint)auStack_1c9 & 0xffffff00);
              ppppppiStack_200 = (int ******)abStack_298;
              ppppppcStack_1f8 = (code ******)0x0;
              pppppcStack_1f0 = (code *****)0x0;
              uStack_1e8 = 0x8000000000000000;
              if (abStack_298[0] == 1) {
                ppppppcVar30 = ppppppcStack_290;
                func_0x0001093793a4(ppppppcStack_290,auStack_1d0);
                ppppppcStack_1f8 = ppppppcVar30;
                if (uStack_1c0._7_1_ < '\0') {
                  __ZdlPv(CONCAT17(auStack_1c9[0],
                                   CONCAT16(auStack_1d0[6],
                                            CONCAT24(auStack_1d0._4_2_,auStack_1d0._0_4_))));
                }
              }
              else if (abStack_298[0] == 2) {
                pppppcStack_1f0 = ppppppcStack_290[1];
              }
              else {
                uStack_1e8 = 1;
              }
              auStack_1d0._0_4_ = SUB84(abStack_298,0);
              auStack_1d0._4_2_ = (undefined2)((ulong)abStack_298 >> 0x20);
              auStack_1d0[6] = (undefined1)((ulong)abStack_298 >> 0x30);
              auStack_1c9[0] = (byte)((ulong)abStack_298 >> 0x38);
              auStack_1c9._1_3_ = 0;
              uStack_1c5 = 0;
              uStack_1c4 = 0;
              uStack_1c0 = (int *******)0x0;
              pppppppcStack_1b8 = (code *******)0x8000000000000000;
              if (abStack_298[0] == 2) {
                uStack_1c0 = (int *******)ppppppcStack_290[1];
              }
              else if (abStack_298[0] == 1) {
                ppppppcVar30 = ppppppcStack_290 + 1;
                auStack_1c9._1_3_ = SUB83(ppppppcVar30,0);
                uStack_1c5 = (undefined1)((ulong)ppppppcVar30 >> 0x18);
                uStack_1c4 = (undefined4)((ulong)ppppppcVar30 >> 0x20);
              }
              else {
                pppppppcStack_1b8 = (code *******)0x1;
              }
              pppppiVar11 = (int *****)&ppppppiStack_200;
              func_0x00010937c708(pppppiVar11,auStack_1d0);
              if (((ulong)pppppiVar11 & 1) == 0) {
                func_0x00010938cf68(&ppppppiStack_200);
                func_0x00010938d198();
                ppppppcVar30 = (code ******)((ulong)pppppppiStack_110 & 0xff);
              }
              else {
                ppppppcVar30 = (code ******)0x0;
              }
              pppppppcStack_b8 = (code *******)((ulong)pppppppcStack_b8 & 0xffffffffffffff00);
              pppppppcStack_b0 = (code *******)0x0;
              pppppppcStack_228 = (code *******)0x0;
              pppppppcStack_230._0_1_ = 3;
              func_0x00010938229c();
              uStack_1c0._7_1_ = '\x06';
              auStack_1d0._0_4_ = 0x72657375;
              auStack_1d0._4_2_ = 0x6449;
              auStack_1d0[6] = 0;
              pppppppcVar15 = (code *******)&pppppppcStack_b8;
              pppppppcStack_228 = (code *******)unaff_x21;
              func_0x0001095b7584(pppppppcVar15,auStack_1d0);
              uVar21 = *(undefined1 *)pppppppcVar15;
              *(undefined1 *)pppppppcVar15 = 3;
              pppppppcStack_230 = (code *******)CONCAT71(pppppppcStack_230._1_7_,uVar21);
              ppppppcVar16 = pppppppcVar15[1];
              pppppppcVar15[1] = (code ******)pppppppcStack_228;
              pppppppcStack_228 = (code *******)ppppppcVar16;
              if (uStack_1c0._7_1_ < '\0') {
                __ZdlPv(CONCAT17(auStack_1c9[0],
                                 CONCAT16(auStack_1d0[6],
                                          CONCAT24(auStack_1d0._4_2_,auStack_1d0._0_4_))));
                uVar21 = pppppppcStack_230._0_1_;
              }
              func_0x000109380ffc(&pppppppcStack_228,uVar21);
              pppppppcStack_248 = (code *******)0x0;
              uStack_250._0_1_ = 3;
              pppppppcVar15 = unaff_x24 + 9;
              func_0x00010938229c();
              uStack_1c0._7_1_ = '\v';
              auStack_1d0._0_4_ = 0x70736964;
              auStack_1d0._4_2_ = 0x616c;
              auStack_1d0[6] = 0x79;
              auStack_1c9 = (undefined1  [4])0x656d614e;
              uStack_1c5 = 0;
              pppppppcVar9 = (code *******)&pppppppcStack_b8;
              pppppppcStack_248 = pppppppcVar15;
              func_0x0001095b7584(pppppppcVar9,auStack_1d0);
              uVar21 = *(undefined1 *)pppppppcVar9;
              *(undefined1 *)pppppppcVar9 = 3;
              uStack_250 = CONCAT71(uStack_250._1_7_,uVar21);
              ppppppcVar16 = pppppppcVar9[1];
              pppppppcVar9[1] = (code ******)pppppppcStack_248;
              pppppppcStack_248 = (code *******)ppppppcVar16;
              if (uStack_1c0._7_1_ < '\0') {
                __ZdlPv(CONCAT17(auStack_1c9[0],
                                 CONCAT16(auStack_1d0[6],
                                          CONCAT24(auStack_1d0._4_2_,auStack_1d0._0_4_))));
                uVar21 = (undefined1)uStack_250;
              }
              func_0x000109380ffc(&pppppppcStack_248,uVar21);
              uStack_270._0_1_ = 4;
              uStack_1c0 = (int *******)CONCAT17(7,(undefined7)uStack_1c0);
              auStack_1d0._0_4_ = 0x68507369;
              auStack_1d0._4_2_ = 0x746f;
              auStack_1d0[6] = 0x6f;
              auStack_1c9 = (undefined1  [4])((uint)auStack_1c9 & 0xffffff00);
              pppppppcVar15 = (code *******)&pppppppcStack_b8;
              ppppppcStack_268 = ppppppcVar30;
              func_0x0001095b7584(pppppppcVar15,auStack_1d0);
              uVar21 = *(undefined1 *)pppppppcVar15;
              *(undefined1 *)pppppppcVar15 = 4;
              uStack_270 = CONCAT71(uStack_270._1_7_,uVar21);
              ppppppcVar30 = pppppppcVar15[1];
              pppppppcVar15[1] = ppppppcStack_268;
              ppppppcStack_268 = ppppppcVar30;
              if ((long)uStack_1c0 < 0) {
                __ZdlPv(CONCAT17(auStack_1c9[0],
                                 CONCAT16(auStack_1d0[6],
                                          CONCAT24(auStack_1d0._4_2_,auStack_1d0._0_4_))));
                uVar21 = (undefined1)uStack_270;
              }
              func_0x000109380ffc(&ppppppcStack_268,uVar21);
              FUN_10a0c32e4(auStack_1d0,&pppppppcStack_b8,0xffffffff,0x20,0,0);
              uVar25 = CONCAT44(uStack_1c4,CONCAT13(uStack_1c5,auStack_1c9._1_3_));
              puVar10 = (undefined1 *)
                        CONCAT17(auStack_1c9[0],
                                 CONCAT16(auStack_1d0[6],
                                          CONCAT24(auStack_1d0._4_2_,auStack_1d0._0_4_)));
              if (-1 < (long)uStack_1c0) {
                uVar25 = (ulong)uStack_1c0 >> 0x38;
                puVar10 = auStack_1d0;
              }
              FUN_10a3bf330(&pppppppiStack_110,puVar10,uVar25);
              if ((long)uStack_1c0 < 0) {
                __ZdlPv(CONCAT17(auStack_1c9[0],
                                 CONCAT16(auStack_1d0[6],
                                          CONCAT24(auStack_1d0._4_2_,auStack_1d0._0_4_))));
              }
              func_0x000109380ffc(&pppppppcStack_b0,(ulong)pppppppcStack_b8 & 0xff);
              cStack_239 = '\x11';
              pppppppcStack_248 = (code *******)0x6579616c7069746c;
              uStack_250 = 0x756d2f2f3a707061;
              uStack_240 = 0x72;
              cStack_259 = '\x11';
              ppppppcStack_268 = (code ******)0x6e6964726f636572;
              uStack_270 = 0x2d796669746f6e2f;
              uStack_260 = 0x67;
              puVar13 = &uStack_250;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (puVar13,&uStack_270,0x11);
              pppppppcStack_228 = (code *******)puVar13[1];
              pppppppcStack_230 = (code *******)*puVar13;
              uStack_220 = puVar13[2];
              puVar13[1] = 0;
              puVar13[2] = 0;
              *puVar13 = 0;
              FUN_10a876580(&uStack_288,*(undefined8 *)(param_1 + 0x500));
              unaff_x21 = (undefined **)0x138;
              __Znwm();
              pppppppiVar12 = pppppppiStack_110;
              unaff_x21[1] = (undefined *)0x0;
              unaff_x21[2] = (undefined *)0x0;
              *unaff_x21 = (undefined *)&PTR_FUN_110b9f3b0;
              pppppppcVar15 = (code *******)(unaff_x21 + 3);
              unaff_x24 = pppppppcStack_228;
              unaff_x23 = pppppppcStack_230;
              if (-1 < (long)uStack_220) {
                unaff_x24 = (code *******)(uStack_220 >> 0x38);
                unaff_x23 = (code *******)&pppppppcStack_230;
              }
              pppppppiStack_110 = (int *******)0x0;
              auStack_1d0._0_4_ = SUB84(pppppppiVar12,0);
              auStack_1d0._4_2_ = (undefined2)((ulong)pppppppiVar12 >> 0x20);
              auStack_1d0[6] = (undefined1)((ulong)pppppppiVar12 >> 0x30);
              auStack_1c9[0] = (byte)((ulong)pppppppiVar12 >> 0x38);
              auStack_1c9._1_3_ = SUB83(pppppppcStack_108,0);
              uStack_1c5 = (undefined1)((ulong)pppppppcStack_108 >> 0x18);
              uStack_1c4 = (undefined4)((ulong)pppppppcStack_108 >> 0x20);
              (*(code *)pppppppcStack_100[2])(&uStack_1c0,&pppppppcStack_100);
              uStack_188 = uStack_c8;
              uStack_378 = *(ulong *)(param_1 + 0x4e0);
              lStack_380 = *(long *)(param_1 + 0x4d8);
              if (-1 < (char)*(byte *)(param_1 + 0x4ef)) {
                uStack_378 = (ulong)*(byte *)(param_1 + 0x4ef);
                lStack_380 = param_1 + 0x4d8;
              }
              pppppppcStack_370 = (code *******)&pppppppcStack_b8;
              pppppppcStack_b8 = (code *******)FUN_10a8a7d38;
              pppppppcStack_b0 = (code *******)&PTR_FUN_110c250e8;
              uStack_a8 = uStack_288;
              uStack_98 = uStack_278;
              uStack_a0 = uStack_280;
              uStack_280 = 0;
              uStack_278 = 0;
              FUN_10a23708c(pppppppcVar15,unaff_x23,unaff_x24,&UNK_10f647b49,4,auStack_1d0,1);
              (*(code *)*pppppppcStack_b0)(&pppppppcStack_b0);
              FUN_10a042634(auStack_1d0);
              FUN_10a876624(&uStack_288);
              if ((long)uStack_220 < 0) {
                __ZdlPv(pppppppcStack_230);
              }
              if (cStack_259 < '\0') {
                __ZdlPv(uStack_270);
              }
              if (cStack_239 < '\0') {
                __ZdlPv(uStack_250);
              }
              auStack_1d0._0_4_ = SUB84(pppppppcVar15,0);
              auStack_1d0._4_2_ = (undefined2)((ulong)pppppppcVar15 >> 0x20);
              auStack_1d0[6] = (undefined1)((ulong)pppppppcVar15 >> 0x30);
              auStack_1c9[0] = (byte)((ulong)pppppppcVar15 >> 0x38);
              auStack_1c9._1_3_ = SUB83(unaff_x21,0);
              uStack_1c5 = (undefined1)((ulong)unaff_x21 >> 0x18);
              uStack_1c4 = (undefined4)((ulong)unaff_x21 >> 0x20);
              uStack_210 = 0;
              plStack_208 = (long *)0x0;
              (**(code **)*puVar33)(puVar33,auStack_1d0);
              plVar7 = (long *)CONCAT44(uStack_1c4,CONCAT13(uStack_1c5,auStack_1c9._1_3_));
              if (plVar7 != (long *)0x0) {
                plVar1 = plVar7 + 1;
                do {
                  lVar27 = *plVar1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar5) {
                    *plVar1 = lVar27 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (lVar27 == 0) {
                  (**(code **)(*plVar7 + 0x10))(plVar7);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
                }
              }
              plVar7 = plStack_208;
              if (plStack_208 != (long *)0x0) {
                plVar1 = plStack_208 + 1;
                do {
                  lVar27 = *plVar1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar5) {
                    *plVar1 = lVar27 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (lVar27 == 0) {
                  (**(code **)(*plStack_208 + 0x10))(plStack_208);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
                }
              }
              FUN_10a042634(&pppppppiStack_110);
              unaff_x22 = pppppppcStack_1d8;
              if (pppppppcStack_1d8 == (code *******)0x0) goto LAB_10a862f54;
            }
            unaff_x22 = pppppppcStack_1d8;
            pppppppcVar15 = pppppppcStack_1d8 + 1;
            do {
              ppppppcVar30 = *pppppppcVar15;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pppppppcVar15,0x10);
              if (bVar5) {
                *pppppppcVar15 = (code ******)((long)ppppppcVar30 + -1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (ppppppcVar30 == (code ******)0x0) {
              (*(code *)(*pppppppcStack_1d8)[2])(pppppppcStack_1d8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x22);
            }
          }
        }
LAB_10a862f54:
        if ((char)bStack_2b9 < '\0') {
          __ZdlPv(pppppppcStack_2d0);
        }
        pppppppcVar15 = &ppppppcStack_290;
        func_0x000109380ffc(pppppppcVar15,abStack_298[0]);
      }
      pppppppcVar9 = pppppppcStack_318;
      if ((char)bStack_301 < '\0') goto LAB_10a862f7c;
    }
    else {
      func_0x00010ae02f4c(0);
      unaff_x21 = &PTR_PTR_1133041c8;
      FUN_10ae079a0();
      func_0x00010ae02f5c();
      pppppppcVar15 = (code *******)unaff_x21;
      FUN_10ae07cd4(unaff_x21,&PTR_PTR_1133041c8);
    }
LAB_10a862f80:
    ppuVar17 = (undefined **)pppppppcStack_2f8;
    if (pppppppcStack_2f8 != (code *******)0x0) {
      pppppppcVar9 = pppppppcStack_2f8 + 1;
      do {
        ppppppcVar30 = *pppppppcVar9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppppppcVar9,0x10);
        if (bVar5) {
          *pppppppcVar9 = (code ******)((long)ppppppcVar30 + -1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (ppppppcVar30 == (code ******)0x0) {
        (*(code *)(*pppppppcStack_2f8)[2])(pppppppcStack_2f8);
        pppppppcVar15 = (code *******)ppuVar17;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
  }
  if (cStack_2d1 < '\0') {
    pppppppcVar15 = apppppppcStack_2e8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return pppppppcVar15;
  }
LAB_10a8636a4:
  ___stack_chk_fail();
  if ((long)uStack_1c0 < 0) {
    __ZdlPv(CONCAT17(auStack_1c9[0],
                     CONCAT16(auStack_1d0[6],CONCAT24(auStack_1d0._4_2_,auStack_1d0._0_4_))));
  }
  func_0x00010a05a8c4(&puStack_1e0);
  if ((char)bStack_2b9 < '\0') {
    __ZdlPv(pppppppcStack_2d0);
  }
  piVar23 = (int *)(ulong)abStack_298[0];
  func_0x000109380ffc(unaff_x25 + 1);
  if ((char)bStack_301 < '\0') {
    __ZdlPv(pppppppcStack_318);
  }
  func_0x00010a5c92ec(&ppppppcStack_300);
  if (cStack_2d1 < '\0') {
    __ZdlPv(apppppppcStack_2e8[0]);
  }
  pppppppcVar14 = pppppppcVar15;
  __Unwind_Resume();
  pcStack_388 = FUN_10a863980;
  lStack_3d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppcVar9 = pppppppcVar14;
  puStack_3d0 = unaff_x26;
  ppppppiStack_3c8 = unaff_x25;
  pppppppcStack_3c0 = unaff_x24;
  pppppppcStack_3b8 = unaff_x23;
  pppppppcStack_3b0 = unaff_x22;
  pppppppcStack_3a8 = (code *******)unaff_x21;
  pppppppcStack_3a0 = pppppppcVar15;
  pppppppcStack_398 = (code *******)ppuVar17;
  puStack_390 = &stack0xfffffffffffffff0;
  if (*(char *)((long)pppppppcVar14 + 0x4ba) == '\x01') {
    pppppppcVar15 = (code *******)0xa0;
    pppppppcStack_4c0 = pppppppcVar14;
    __Znwm();
    pppppppcVar34 = pppppppcVar15 + 1;
    *pppppppcVar34 = (code ******)0x0;
    pppppppcVar15[2] = (code ******)0x0;
    *pppppppcVar15 = (code ******)&PTR_DAT_110c24a40;
    unaff_x24 = pppppppcVar15 + 3;
    *unaff_x24 = (code ******)&PTR_FUN_110c24088;
    pppppppcVar9 = pppppppcVar15 + 0x10;
    pppppppcVar15[0x11] = (code ******)0x0;
    *pppppppcVar9 = (code ******)0x0;
    pppppppcVar15[0xd] = (code ******)0x0;
    pppppppcVar15[0xc] = (code ******)0x0;
    pppppppcVar15[0xf] = (code ******)0x0;
    pppppppcVar15[0xe] = (code ******)0x0;
    pppppppcVar15[0x13] = (code ******)0x0;
    pppppppcVar15[0x12] = (code ******)0x0;
    pppppppcVar15[5] = (code ******)0x0;
    pppppppcVar15[4] = (code ******)0x0;
    unaff_x23 = pppppppcVar15 + 6;
    pppppppcVar15[7] = (code ******)0x0;
    *unaff_x23 = (code ******)0x0;
    pppppppcVar15[9] = (code ******)0x0;
    pppppppcVar15[8] = (code ******)0x0;
    pppppppcVar15[0xb] = (code ******)0x0;
    pppppppcVar15[10] = (code ******)0x0;
    pppppppcVar15[0xe] = (code ******)0x0;
    *(undefined4 *)(pppppppcVar15 + 0xf) = 1;
    pppppppcVar15[0x11] = (code ******)0x0;
    pppppppcVar15[0x12] = (code ******)0x0;
    *(undefined4 *)(pppppppcVar15 + 0x13) = 0;
    *pppppppcVar9 = (code ******)0x0;
    pppppppcStack_4d0 = unaff_x24;
    pppppppcStack_4c8 = pppppppcVar15;
    FUN_10a8641f4(&uStack_428,&pppppppcStack_4c0,*(undefined8 *)(piVar23 + 6),piVar23[8]);
    lVar27 = CONCAT17(uStack_419,
                      CONCAT25(uStack_41b,CONCAT14(uStack_41c,CONCAT22(uStack_41e,uStack_420))));
    FUN_10a87ef04(unaff_x23,CONCAT17(uStack_421,uStack_428),lVar27,
                  lVar27 - CONCAT17(uStack_421,uStack_428) >> 4);
    func_0x00010a87edc4(&uStack_428);
    FUN_10a8641f4(&uStack_428,&pppppppcStack_4c0,*(undefined8 *)(piVar23 + 10),piVar23[0xc]);
    lVar27 = CONCAT17(uStack_419,
                      CONCAT25(uStack_41b,CONCAT14(uStack_41c,CONCAT22(uStack_41e,uStack_420))));
    FUN_10a87ef04(pppppppcVar15 + 9,CONCAT17(uStack_421,uStack_428),lVar27,
                  lVar27 - CONCAT17(uStack_421,uStack_428) >> 4);
    func_0x00010a87edc4(&uStack_428);
    FUN_10a8641f4(&uStack_428,&pppppppcStack_4c0,*(undefined8 *)(piVar23 + 0xe),piVar23[0x10]);
    lVar27 = CONCAT17(uStack_419,
                      CONCAT25(uStack_41b,CONCAT14(uStack_41c,CONCAT22(uStack_41e,uStack_420))));
    FUN_10a87ef04(pppppppcVar15 + 0xc,CONCAT17(uStack_421,uStack_428),lVar27,
                  lVar27 - CONCAT17(uStack_421,uStack_428) >> 4);
    func_0x00010a87edc4(&uStack_428);
    uVar26 = 1;
    if (*piVar23 == 2) {
      uVar26 = 2;
    }
    *(undefined4 *)(pppppppcVar15 + 0xf) = uVar26;
    FUN_10a8641f4(&uStack_428,&pppppppcStack_4c0,*(undefined8 *)(piVar23 + 2),piVar23[4]);
    lVar27 = CONCAT17(uStack_419,
                      CONCAT25(uStack_41b,CONCAT14(uStack_41c,CONCAT22(uStack_41e,uStack_420))));
    FUN_10a87ef04(pppppppcVar9,CONCAT17(uStack_421,uStack_428),lVar27,
                  lVar27 - CONCAT17(uStack_421,uStack_428) >> 4);
    func_0x00010a87edc4(&uStack_428);
    *(int *)(pppppppcVar15 + 0x13) = piVar23[5];
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppppppcVar34,0x10);
      if (bVar5) {
        *pppppppcVar34 = (code ******)((long)*pppppppcVar34 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uStack_428 = 0x10a8972f4;
    uStack_421 = 0;
    uStack_420 = 0x4a98;
    uStack_41e = 0x10c2;
    uStack_41c = 1;
    uStack_41b = 0;
    uStack_419 = 0;
    uStack_4b8 = 0;
    uStack_4b0 = 0;
    uStack_418 = unaff_x24;
    pppppppcStack_410 = pppppppcVar15;
    FUN_10a860860(pppppppcVar14,&uStack_428);
    pppppppcVar9 = (code *******)&uStack_420;
    (**(code **)CONCAT17(uStack_419,
                         CONCAT25(uStack_41b,CONCAT14(uStack_41c,CONCAT22(uStack_41e,uStack_420)))))
              ();
    unaff_x21 = (undefined **)pppppppcVar15[0xc];
    unaff_x22 = (code *******)pppppppcVar15[0xd];
    if ((code *******)unaff_x21 != unaff_x22) {
      unaff_x23 = (code *******)pppppppcVar14[0x46];
      unaff_x24 = unaff_x23 + 3;
LAB_10a863b74:
      ppppppcVar30 = (code ******)*unaff_x21;
      if (ppppppcVar30 == (code ******)0x0) goto LAB_10a863bcc;
      bVar20 = *(byte *)((long)ppppppcVar30 + 0x2f);
      ppppppcVar16 = (code ******)ppppppcVar30[4];
      if (-1 < (char)bVar20) {
        ppppppcVar16 = (code ******)(ulong)bVar20;
      }
      bVar3 = *(byte *)((long)unaff_x23 + 0x2f);
      ppppppcVar37 = unaff_x23[4];
      if (-1 < (char)bVar3) {
        ppppppcVar37 = (code ******)(ulong)bVar3;
      }
      if (ppppppcVar16 != ppppppcVar37) goto LAB_10a863bcc;
      pppppppcVar9 = (code *******)ppppppcVar30[3];
      if (-1 < (char)bVar20) {
        pppppppcVar9 = (code *******)(ppppppcVar30 + 3);
      }
      pppppppcVar34 = (code *******)*unaff_x24;
      if (-1 < (char)bVar3) {
        pppppppcVar34 = unaff_x24;
      }
      _memcmp(pppppppcVar9,pppppppcVar34);
      if ((int)pppppppcVar9 != 0) goto LAB_10a863bcc;
      abStack_4e0[0] = 0;
      unaff_x23 = (code *******)abStack_4e0;
      ppppppcStack_4d8 = (code ******)0x0;
      ppppppcVar16 = pppppppcVar14[0x6f];
      (*(code *)(*ppppppcVar16)[9])();
      ppppppcStack_4e8 = (code ******)0x0;
      uStack_4f0 = 3;
      func_0x00010938229c();
      uStack_418 = (code *******)CONCAT17(9,(undefined7)uStack_418);
      uStack_428 = 0x6e6f6973736573;
      uStack_421 = 0x49;
      uStack_420 = 100;
      ppppppcVar30 = (code ******)abStack_4e0;
      ppppppcStack_4e8 = ppppppcVar16;
      func_0x0001095b7584(ppppppcVar30,&uStack_428);
      uVar21 = *(undefined1 *)ppppppcVar30;
      *(undefined1 *)ppppppcVar30 = uStack_4f0;
      pppppcVar28 = ppppppcVar30[1];
      uStack_4f0 = uVar21;
      ppppppcVar30[1] = (code *****)ppppppcStack_4e8;
      ppppppcStack_4e8 = (code ******)pppppcVar28;
      func_0x000109380ffc(&ppppppcStack_4e8,uVar21);
      ppppppcStack_4f8 = (code ******)0x0;
      uStack_500 = 3;
      ppppppcVar30 = pppppppcVar14[0x6f] + 6;
      func_0x00010938229c();
      uStack_418 = (code *******)CONCAT17(0xc,(undefined7)uStack_418);
      uStack_420 = 0x6563;
      uStack_41e = 0x6449;
      uStack_428 = 0x65697265707865;
      uStack_421 = 0x6e;
      uStack_41c = 0;
      ppppppcVar16 = (code ******)abStack_4e0;
      ppppppcStack_4f8 = ppppppcVar30;
      func_0x0001095b7584(ppppppcVar16,&uStack_428);
      uVar21 = *(undefined1 *)ppppppcVar16;
      *(undefined1 *)ppppppcVar16 = uStack_500;
      pppppcVar28 = ppppppcVar16[1];
      uStack_500 = uVar21;
      ppppppcVar16[1] = (code *****)ppppppcStack_4f8;
      ppppppcStack_4f8 = (code ******)pppppcVar28;
      func_0x000109380ffc(&ppppppcStack_4f8,uVar21);
      ppppppcStack_508 = (code ******)0x0;
      uStack_510 = 3;
      ppppppcVar30 = pppppppcVar14[0x46] + 0x10;
      func_0x00010938229c();
      uStack_418 = (code *******)CONCAT17(0xf,(undefined7)uStack_418);
      uStack_428 = 0x6b61546e727574;
      uStack_421 = 0x65;
      uStack_420 = 0x5572;
      uStack_41e = 0x6573;
      uStack_41c = 0x72;
      uStack_41b = 0x6449;
      uStack_419 = 0;
      ppppppcVar16 = (code ******)abStack_4e0;
      ppppppcStack_508 = ppppppcVar30;
      func_0x0001095b7584(ppppppcVar16,&uStack_428);
      uVar21 = *(undefined1 *)ppppppcVar16;
      *(undefined1 *)ppppppcVar16 = uStack_510;
      pppppcVar28 = ppppppcVar16[1];
      uStack_510 = uVar21;
      ppppppcVar16[1] = (code *****)ppppppcStack_508;
      ppppppcStack_508 = (code ******)pppppcVar28;
      func_0x000109380ffc(&ppppppcStack_508,uVar21);
      FUN_10a0c32e4(&pppppppuStack_528,abStack_4e0,0xffffffff,0x20,0,1);
      pppppppuVar6 = pppppppuStack_528;
      if (-1 < (char)bStack_511) {
        uStack_520 = (ulong)bStack_511;
        pppppppuVar6 = &pppppppuStack_528;
      }
      FUN_10a3bf330(&uStack_4b8,pppppppuVar6,uStack_520);
      ppuVar17 = (undefined **)0x138;
      __Znwm();
      uVar8 = uStack_4b8;
      unaff_x24 = (code *******)(ppuVar17 + 1);
      *unaff_x24 = (code ******)0x0;
      ppuVar17[2] = (undefined *)0x0;
      *ppuVar17 = (undefined *)&PTR_FUN_110b9f3b0;
      unaff_x21 = ppuVar17 + 3;
      uStack_4b8 = 0;
      uStack_428 = (undefined7)uVar8;
      uStack_421 = (undefined1)((ulong)uVar8 >> 0x38);
      uStack_420 = (undefined2)uStack_4b0;
      uStack_41e = (undefined2)((ulong)uStack_4b0 >> 0x10);
      uStack_41c = (undefined1)((ulong)uStack_4b0 >> 0x20);
      uStack_41b = (undefined2)((ulong)uStack_4b0 >> 0x28);
      uStack_419 = (undefined1)((ulong)uStack_4b0 >> 0x38);
      (**(code **)(alStack_4a8[0] + 0x10))(&uStack_418,alStack_4a8);
      uStack_3e0 = uStack_470;
      ppppppcStack_548 = pppppppcVar14[0x41];
      pppppppcStack_550 = (code *******)pppppppcVar14[0x40];
      if (-1 < (char)*(byte *)((long)pppppppcVar14 + 0x217)) {
        ppppppcStack_548 = (code ******)(ulong)*(byte *)((long)pppppppcVar14 + 0x217);
        pppppppcStack_550 = pppppppcVar14 + 0x40;
      }
      uStack_430 = 0;
      uStack_438 = 0;
      uStack_440 = 0;
      uStack_448 = 0;
      uStack_450 = 0;
      uStack_458 = 0;
      unaff_x22 = (code *******)&pppppppcStack_468;
      pppppppcStack_468 = (code *******)FUN_10a282dc4;
      ppuStack_460 = &PTR_DAT_110ae9180;
      pppppppcStack_540 = unaff_x22;
      FUN_10a23708c(unaff_x21,&UNK_10e4df414,0x23,&UNK_10f647b49,4,&uStack_428,1);
      (*(code *)*ppuStack_460)(&ppuStack_460);
      FUN_10a042634(&uStack_428);
      uStack_428 = 0;
      uStack_421 = 0;
      uStack_420 = 0;
      uStack_41e = 0;
      uStack_41c = 0;
      uStack_41b = 0;
      uStack_419 = 0;
      ppppppcVar30 = pppppppcVar14[0x6c];
      pppppppcStack_538 = (code *******)unaff_x21;
      ppuStack_530 = ppuVar17;
      if (ppppppcVar30 == (code ******)0x0) {
LAB_10a863fc8:
        ppuVar17 = &PTR_PTR_1133052a8;
        FUN_10ae079a0(0,&PTR_PTR_1133052a8);
        FUN_10ae07cd4(ppuVar17,&PTR_PTR_1133052a8);
      }
      else {
        __ZNSt3__119__shared_weak_count4lockEv();
        uStack_420 = SUB82(ppppppcVar30,0);
        uStack_41e = (undefined2)((ulong)ppppppcVar30 >> 0x10);
        uStack_41c = (undefined1)((ulong)ppppppcVar30 >> 0x20);
        uStack_41b = (undefined2)((ulong)ppppppcVar30 >> 0x28);
        uStack_419 = (undefined1)((ulong)ppppppcVar30 >> 0x38);
        if (ppppppcVar30 == (code ******)0x0) goto LAB_10a863fc8;
        ppppppcVar30 = pppppppcVar14[0x6b];
        uStack_428 = SUB87(ppppppcVar30,0);
        uStack_421 = (undefined1)((ulong)ppppppcVar30 >> 0x38);
        if (ppppppcVar30 == (code ******)0x0) goto LAB_10a863fc8;
        ppuVar22 = &PTR_PTR_1133045f0;
        FUN_10ae079a0(0,&PTR_PTR_1133045f0);
        FUN_10ae07cd4(ppuVar22,&PTR_PTR_1133045f0);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(unaff_x24,0x10);
          if (bVar5) {
            *unaff_x24 = (code ******)((long)*unaff_x24 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        pppppppcStack_468 = (code *******)unaff_x21;
        ppuStack_460 = ppuVar17;
        (*(code *)**ppppppcVar30)(ppppppcVar30,&pppppppcStack_468);
        ppuVar17 = ppuStack_460;
        unaff_x22 = (code *******)&PTR_PTR_1133045f0;
        if (ppuStack_460 != (undefined **)0x0) {
          ppuVar22 = ppuStack_460 + 1;
          do {
            puVar31 = *ppuVar22;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppuVar22,0x10);
            if (bVar5) {
              *ppuVar22 = puVar31 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (puVar31 == (undefined *)0x0) {
            (**(code **)(*ppuStack_460 + 0x10))(ppuStack_460);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
            unaff_x22 = (code *******)&PTR_PTR_1133045f0;
          }
        }
      }
      plVar7 = (long *)CONCAT17(uStack_419,
                                CONCAT25(uStack_41b,
                                         CONCAT14(uStack_41c,CONCAT22(uStack_41e,uStack_420))));
      if (plVar7 != (long *)0x0) {
        plVar1 = plVar7 + 1;
        do {
          lVar27 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar27 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar27 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      ppuVar17 = ppuStack_530;
      if (ppuStack_530 != (undefined **)0x0) {
        ppuVar22 = ppuStack_530 + 1;
        do {
          puVar31 = *ppuVar22;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar22,0x10);
          if (bVar5) {
            *ppuVar22 = puVar31 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (puVar31 == (undefined *)0x0) {
          (**(code **)(*ppuStack_530 + 0x10))(ppuStack_530);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
        }
      }
      FUN_10a042634(&uStack_4b8);
      if ((char)bStack_511 < '\0') {
        __ZdlPv(pppppppuStack_528);
      }
      pppppppcVar9 = &ppppppcStack_4d8;
      func_0x000109380ffc(pppppppcVar9,abStack_4e0[0]);
      pppppppcVar15 = pppppppcStack_4c8;
      if (pppppppcStack_4c8 == (code *******)0x0) goto LAB_10a863c08;
    }
LAB_10a863bd8:
    pppppppcVar14 = pppppppcVar15 + 1;
    do {
      ppppppcVar30 = *pppppppcVar14;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppppppcVar14,0x10);
      if (bVar5) {
        *pppppppcVar14 = (code ******)((long)ppppppcVar30 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (ppppppcVar30 == (code ******)0x0) {
      (*(code *)(*pppppppcVar15)[2])(pppppppcVar15);
      pppppppcVar9 = pppppppcVar15;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
LAB_10a863c08:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3d8) {
    return pppppppcVar9;
  }
  ___stack_chk_fail();
  FUN_10a05bd88(&pppppppcStack_468);
  func_0x00010a05a8c4(&uStack_428);
  FUN_10a05bd88(&pppppppcStack_538);
  FUN_10a042634(&uStack_4b8);
  if ((char)bStack_511 < '\0') {
    __ZdlPv(pppppppuStack_528);
  }
  pppppppcVar24 = (code *******)(ulong)abStack_4e0[0];
  func_0x000109380ffc(unaff_x23 + 1);
  FUN_10a89729c(&pppppppcStack_4d0);
  pppppppcVar34 = pppppppcVar9;
  __Unwind_Resume();
  pppppppcVar14 = pppppppcVar34 + 3;
  if (pppppppcVar14 != pppppppcVar24) {
    pppppppcVar19 = (code *******)*pppppppcVar24;
    pppppppcVar2 = (code *******)pppppppcVar24[1];
    uVar25 = (long)pppppppcVar2 - (long)pppppppcVar19 >> 4;
    pcStack_558 = FUN_10a8641d0;
    ppppppcVar30 = pppppppcVar34[5];
    pppppppcVar24 = (code *******)*pppppppcVar14;
    pppppppcStack_590 = unaff_x24;
    pppppppcStack_588 = unaff_x23;
    pppppppcStack_580 = unaff_x22;
    pppppppcStack_578 = (code *******)unaff_x21;
    pppppppcStack_570 = pppppppcVar15;
    pppppppcStack_568 = pppppppcVar9;
    ppuStack_560 = &puStack_390;
    if ((ulong)((long)ppppppcVar30 - (long)pppppppcVar24 >> 4) < uVar25) {
      pppppppcVar15 = pppppppcVar14;
      pppppppcVar9 = pppppppcVar19;
      if (pppppppcVar24 != (code *******)0x0) {
        pppppppcVar18 = (code *******)pppppppcVar34[4];
        pppppppcVar15 = pppppppcVar24;
        if (pppppppcVar18 != pppppppcVar24) {
          do {
            pppppppcVar18 = pppppppcVar18 + -2;
            func_0x00010a5c92ec();
          } while (pppppppcVar18 != pppppppcVar24);
          pppppppcVar15 = (code *******)*pppppppcVar14;
        }
        pppppppcVar34[4] = (code ******)pppppppcVar24;
        __ZdlPv();
        ppppppcVar30 = (code ******)0x0;
        *pppppppcVar14 = (code ******)0x0;
        pppppppcVar34[4] = (code ******)0x0;
        pppppppcVar34[5] = (code ******)0x0;
      }
      if (uVar25 >> 0x3c != 0) {
        FUN_10a87ed30();
        pcStack_598 = FUN_10a87f0c4;
        pppppppcStack_5b0 = pppppppcVar2;
        pppppppcStack_5a8 = pppppppcVar14;
        pppuStack_5a0 = &ppuStack_560;
        if ((ulong)pppppppcVar9 >> 0x3c == 0) {
          pppppppcVar14 = pppppppcVar9;
          func_0x00010a87ed44();
          *pppppppcVar15 = (code ******)pppppppcVar9;
          pppppppcVar15[1] = (code ******)pppppppcVar9;
          pppppppcVar15[2] = (code ******)(pppppppcVar9 + (long)pppppppcVar14 * 2);
          return pppppppcVar9;
        }
        FUN_10a87ed30();
        pcStack_5b8 = FUN_10a87f100;
        pppppuStack_620 = &ppppuStack_5c0;
        ppppppcVar30 = pppppppcVar15[1];
        if (ppppppcVar30 < pppppppcVar15[2]) {
          ppppppcVar37 = *pppppppcVar9;
          ppppppcVar16 = ppppppcVar30 + 2;
          ppppppcVar30[1] = (code *****)pppppppcVar9[1];
          *ppppppcVar30 = (code *****)ppppppcVar37;
          *pppppppcVar9 = (code ******)0x0;
          pppppppcVar9[1] = (code ******)0x0;
          pppppppcVar9 = pppppppcVar15;
        }
        else {
          lVar27 = (long)ppppppcVar30 - (long)*pppppppcVar15;
          uVar25 = (lVar27 >> 4) + 1;
          pppppppcStack_5e0 = pppppppcVar24;
          pppppppcStack_5d8 = pppppppcVar19;
          pppppppcStack_5d0 = pppppppcVar2;
          pppppppcStack_5c8 = pppppppcVar14;
          ppppuStack_5c0 = &pppuStack_5a0;
          if (uVar25 >> 0x3c != 0) {
            pppppppcVar14 = pppppppcVar15;
            FUN_10a87ed30();
            pcStack_618 = FUN_10a87f1e0;
            pppppppcVar34 = (code *******)*pppppppcVar14;
            if (pppppppcVar34 == (code *******)0x0) {
              return pppppppcVar14;
            }
            pppppppcVar19 = (code *******)pppppppcVar14[1];
            pppppppcVar24 = pppppppcVar34;
            pppppppcStack_630 = pppppppcVar9;
            pppppppcStack_628 = pppppppcVar15;
            if (pppppppcVar19 != pppppppcVar34) {
              do {
                pppppppcVar19 = pppppppcVar19 + -2;
                FUN_10a297544();
              } while (pppppppcVar19 != pppppppcVar34);
              pppppppcVar24 = (code *******)*pppppppcVar14;
            }
            pppppppcVar14[1] = (code ******)pppppppcVar34;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR___ZdlPv_110352258)(pppppppcVar24);
            return pppppppcVar24;
          }
          uVar29 = (long)pppppppcVar15[2] - (long)*pppppppcVar15;
          uVar32 = (long)uVar29 >> 3;
          if (uVar32 <= uVar25) {
            uVar32 = uVar25;
          }
          if (0x7fffffffffffffef < uVar29) {
            uVar32 = 0xfffffffffffffff;
          }
          pppppppcVar14 = pppppppcVar9;
          pppppppcStack_5e8 = pppppppcVar15;
          func_0x00010a87ed44();
          puVar33 = (undefined8 *)(uVar32 + lVar27);
          ppppppcVar30 = *pppppppcVar9;
          ppppppcVar16 = (code ******)(puVar33 + 2);
          puVar33[1] = pppppppcVar9[1];
          *puVar33 = ppppppcVar30;
          *pppppppcVar9 = (code ******)0x0;
          pppppppcVar9[1] = (code ******)0x0;
          ppppppcVar30 = (code ******)
                         ((long)puVar33 - ((long)pppppppcVar15[1] - (long)*pppppppcVar15));
          _memcpy(ppppppcVar30);
          ppppppcStack_608 = *pppppppcVar15;
          *pppppppcVar15 = ppppppcVar30;
          pppppppcVar15[1] = ppppppcVar16;
          ppppppcStack_5f0 = pppppppcVar15[2];
          pppppppcVar15[2] = (code ******)(uVar32 + (long)pppppppcVar14 * 0x10);
          pppppppcVar9 = &ppppppcStack_608;
          ppppppcStack_600 = ppppppcStack_608;
          ppppppcStack_5f8 = ppppppcStack_608;
          func_0x00010a87ed78(pppppppcVar9);
        }
        pppppppcVar15[1] = ppppppcVar16;
        return pppppppcVar9;
      }
      uVar32 = (long)ppppppcVar30 >> 3;
      if ((ulong)((long)ppppppcVar30 >> 3) <= uVar25) {
        uVar32 = uVar25;
      }
      if ((code ******)0x7fffffffffffffef < ppppppcVar30) {
        uVar32 = 0xfffffffffffffff;
      }
      FUN_10a87f0c4(pppppppcVar14,uVar32);
      pppppppcVar15 = (code *******)pppppppcVar34[4];
      for (; pppppppcVar19 != pppppppcVar2; pppppppcVar19 = pppppppcVar19 + 2) {
        ppppppcVar30 = pppppppcVar19[1];
        ppppppcVar16 = *pppppppcVar19;
        pppppppcVar15[1] = pppppppcVar19[1];
        *pppppppcVar15 = ppppppcVar16;
        if (ppppppcVar30 != (code ******)0x0) {
          ppppppcVar30 = ppppppcVar30 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppppppcVar30,0x10);
            if (bVar5) {
              *ppppppcVar30 = (code *****)((long)*ppppppcVar30 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        pppppppcVar15 = pppppppcVar15 + 2;
      }
    }
    else {
      pppppppcVar15 = (code *******)pppppppcVar34[4];
      if (uVar25 <= (ulong)((long)pppppppcVar15 - (long)pppppppcVar24 >> 4)) {
        if (pppppppcVar19 != pppppppcVar2) {
          do {
            pppppppcVar15 = pppppppcVar19 + 2;
            FUN_10a8602bc(pppppppcVar24,*pppppppcVar19,pppppppcVar19[1]);
            pppppppcVar24 = pppppppcVar24 + 2;
            pppppppcVar19 = pppppppcVar15;
          } while (pppppppcVar15 != pppppppcVar2);
          pppppppcVar15 = (code *******)pppppppcVar34[4];
        }
        while (pppppppcVar15 != pppppppcVar24) {
          pppppppcVar15 = pppppppcVar15 + -2;
          func_0x00010a5c92ec();
        }
        pppppppcVar34[4] = (code ******)pppppppcVar24;
        return pppppppcVar15;
      }
      pppppppcVar9 = (code *******)
                     ((long)pppppppcVar19 + ((long)pppppppcVar15 - (long)pppppppcVar24));
      pppppppcVar14 = pppppppcVar15;
      if (pppppppcVar15 != pppppppcVar24) {
        do {
          pppppppcVar15 = pppppppcVar19 + 2;
          FUN_10a8602bc(pppppppcVar24,*pppppppcVar19,pppppppcVar19[1]);
          pppppppcVar24 = pppppppcVar24 + 2;
          pppppppcVar19 = pppppppcVar15;
        } while (pppppppcVar15 != pppppppcVar9);
        pppppppcVar15 = (code *******)pppppppcVar34[4];
        pppppppcVar14 = pppppppcVar15;
      }
      for (; pppppppcVar9 != pppppppcVar2; pppppppcVar9 = pppppppcVar9 + 2) {
        ppppppcVar30 = pppppppcVar9[1];
        ppppppcVar16 = *pppppppcVar9;
        pppppppcVar15[1] = pppppppcVar9[1];
        *pppppppcVar15 = ppppppcVar16;
        if (ppppppcVar30 != (code ******)0x0) {
          ppppppcVar30 = ppppppcVar30 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppppppcVar30,0x10);
            if (bVar5) {
              *ppppppcVar30 = (code *****)((long)*ppppppcVar30 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        pppppppcVar15 = pppppppcVar15 + 2;
      }
    }
    pppppppcVar34[4] = (code ******)pppppppcVar15;
    return pppppppcVar14;
  }
  return pppppppcVar14;
LAB_10a863bcc:
  unaff_x21 = unaff_x21 + 2;
  if ((code *******)unaff_x21 == unaff_x22) goto LAB_10a863bd8;
  goto LAB_10a863b74;
}



/* Entry: 10a863980; end: 10a8641cf;  */

/* WARNING: Removing unreachable block (ram,0x00010a863d54) */
/* WARNING: Removing unreachable block (ram,0x00010a863cc4) */
/* WARNING: Removing unreachable block (ram,0x00010a863de0) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a863980(code ******param_1,int *param_2)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined8 *******pppppppuVar7;
  undefined8 uVar8;
  byte *pbVar9;
  undefined **ppuVar10;
  code ******ppppppcVar11;
  code ******ppppppcVar12;
  code *****pppppcVar13;
  undefined **ppuVar14;
  code ******ppppppcVar15;
  ulong uVar16;
  undefined4 uVar17;
  code ******ppppppcVar18;
  code *****pppppcVar19;
  code ******ppppppcVar20;
  ulong uVar21;
  code *****pppppcVar22;
  undefined *puVar23;
  code ****ppppcVar24;
  ulong uVar25;
  code ******unaff_x20;
  code *****pppppcVar26;
  code *******unaff_x21;
  long lVar27;
  code *****pppppcVar28;
  code *******unaff_x22;
  code ******unaff_x23;
  code ******unaff_x24;
  code *****pppppcStack_288;
  code *****pppppcStack_280;
  code *****pppppcStack_278;
  code *****pppppcStack_270;
  code ******ppppppcStack_268;
  code ******ppppppcStack_260;
  code *****pppppcStack_258;
  code *****pppppcStack_250;
  code ******ppppppcStack_248;
  undefined1 ***pppuStack_240;
  code *pcStack_238;
  code *****pppppcStack_230;
  code ******ppppppcStack_228;
  undefined1 **ppuStack_220;
  code *pcStack_218;
  code ******ppppppcStack_210;
  code ******ppppppcStack_208;
  code *******pppppppcStack_200;
  code *******pppppppcStack_1f8;
  code ******ppppppcStack_1f0;
  code ******ppppppcStack_1e8;
  undefined1 *puStack_1e0;
  code *pcStack_1d8;
  code ******ppppppcStack_1d0;
  code *****pppppcStack_1c8;
  code *******pppppppcStack_1c0;
  code *******pppppppcStack_1b8;
  undefined **ppuStack_1b0;
  undefined8 *******pppppppuStack_1a8;
  ulong uStack_1a0;
  byte bStack_191;
  byte bStack_190;
  code *****pppppcStack_188;
  byte bStack_180;
  code *****pppppcStack_178;
  byte bStack_170;
  code *****pppppcStack_168;
  code *****pppppcStack_160;
  code *****pppppcStack_158;
  code ******ppppppcStack_150;
  code ******ppppppcStack_148;
  code ******ppppppcStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long alStack_128 [7];
  undefined8 uStack_f0;
  code *******pppppppcStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  undefined2 uStack_a0;
  undefined2 uStack_9e;
  undefined1 uStack_9c;
  undefined2 uStack_9b;
  undefined1 uStack_99;
  undefined8 uStack_98;
  code ******ppppppcStack_90;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppcVar20 = param_1;
  if (*(char *)((long)param_1 + 0x4ba) == '\x01') {
    unaff_x20 = (code ******)0xa0;
    ppppppcStack_140 = param_1;
    __Znwm();
    ppppppcVar18 = unaff_x20 + 1;
    *ppppppcVar18 = (code *****)0x0;
    unaff_x20[2] = (code *****)0x0;
    *unaff_x20 = (code *****)&PTR_DAT_110c24a40;
    unaff_x24 = unaff_x20 + 3;
    *unaff_x24 = (code *****)&PTR_FUN_110c24088;
    ppppppcVar20 = unaff_x20 + 0x10;
    unaff_x20[0x11] = (code *****)0x0;
    *ppppppcVar20 = (code *****)0x0;
    unaff_x20[0xd] = (code *****)0x0;
    unaff_x20[0xc] = (code *****)0x0;
    unaff_x20[0xf] = (code *****)0x0;
    unaff_x20[0xe] = (code *****)0x0;
    unaff_x20[0x13] = (code *****)0x0;
    unaff_x20[0x12] = (code *****)0x0;
    unaff_x20[5] = (code *****)0x0;
    unaff_x20[4] = (code *****)0x0;
    unaff_x23 = unaff_x20 + 6;
    unaff_x20[7] = (code *****)0x0;
    *unaff_x23 = (code *****)0x0;
    unaff_x20[9] = (code *****)0x0;
    unaff_x20[8] = (code *****)0x0;
    unaff_x20[0xb] = (code *****)0x0;
    unaff_x20[10] = (code *****)0x0;
    unaff_x20[0xe] = (code *****)0x0;
    *(undefined4 *)(unaff_x20 + 0xf) = 1;
    unaff_x20[0x11] = (code *****)0x0;
    unaff_x20[0x12] = (code *****)0x0;
    *(undefined4 *)(unaff_x20 + 0x13) = 0;
    *ppppppcVar20 = (code *****)0x0;
    ppppppcStack_150 = unaff_x24;
    ppppppcStack_148 = unaff_x20;
    FUN_10a8641f4(&uStack_a8,&ppppppcStack_140,*(undefined8 *)(param_2 + 6),param_2[8]);
    lVar27 = CONCAT17(uStack_99,
                      CONCAT25(uStack_9b,CONCAT14(uStack_9c,CONCAT22(uStack_9e,uStack_a0))));
    FUN_10a87ef04(unaff_x23,CONCAT17(uStack_a1,uStack_a8),lVar27,
                  lVar27 - CONCAT17(uStack_a1,uStack_a8) >> 4);
    func_0x00010a87edc4(&uStack_a8);
    FUN_10a8641f4(&uStack_a8,&ppppppcStack_140,*(undefined8 *)(param_2 + 10),param_2[0xc]);
    lVar27 = CONCAT17(uStack_99,
                      CONCAT25(uStack_9b,CONCAT14(uStack_9c,CONCAT22(uStack_9e,uStack_a0))));
    FUN_10a87ef04(unaff_x20 + 9,CONCAT17(uStack_a1,uStack_a8),lVar27,
                  lVar27 - CONCAT17(uStack_a1,uStack_a8) >> 4);
    func_0x00010a87edc4(&uStack_a8);
    FUN_10a8641f4(&uStack_a8,&ppppppcStack_140,*(undefined8 *)(param_2 + 0xe),param_2[0x10]);
    lVar27 = CONCAT17(uStack_99,
                      CONCAT25(uStack_9b,CONCAT14(uStack_9c,CONCAT22(uStack_9e,uStack_a0))));
    FUN_10a87ef04(unaff_x20 + 0xc,CONCAT17(uStack_a1,uStack_a8),lVar27,
                  lVar27 - CONCAT17(uStack_a1,uStack_a8) >> 4);
    func_0x00010a87edc4(&uStack_a8);
    uVar17 = 1;
    if (*param_2 == 2) {
      uVar17 = 2;
    }
    *(undefined4 *)(unaff_x20 + 0xf) = uVar17;
    FUN_10a8641f4(&uStack_a8,&ppppppcStack_140,*(undefined8 *)(param_2 + 2),param_2[4]);
    lVar27 = CONCAT17(uStack_99,
                      CONCAT25(uStack_9b,CONCAT14(uStack_9c,CONCAT22(uStack_9e,uStack_a0))));
    FUN_10a87ef04(ppppppcVar20,CONCAT17(uStack_a1,uStack_a8),lVar27,
                  lVar27 - CONCAT17(uStack_a1,uStack_a8) >> 4);
    func_0x00010a87edc4(&uStack_a8);
    *(int *)(unaff_x20 + 0x13) = param_2[5];
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppppppcVar18,0x10);
      if (bVar6) {
        *ppppppcVar18 = (code *****)((long)*ppppppcVar18 + 1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    uStack_a8 = 0x10a8972f4;
    uStack_a1 = 0;
    uStack_a0 = 0x4a98;
    uStack_9e = 0x10c2;
    uStack_9c = 1;
    uStack_9b = 0;
    uStack_99 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_98 = unaff_x24;
    ppppppcStack_90 = unaff_x20;
    FUN_10a860860(param_1,&uStack_a8);
    ppppppcVar20 = (code ******)&uStack_a0;
    (**(code **)CONCAT17(uStack_99,
                         CONCAT25(uStack_9b,CONCAT14(uStack_9c,CONCAT22(uStack_9e,uStack_a0)))))();
    unaff_x21 = (code *******)unaff_x20[0xc];
    unaff_x22 = (code *******)unaff_x20[0xd];
    if (unaff_x21 != unaff_x22) {
      unaff_x23 = (code ******)param_1[0x46];
      unaff_x24 = unaff_x23 + 3;
LAB_10a863b74:
      ppppppcVar18 = *unaff_x21;
      if (ppppppcVar18 == (code ******)0x0) goto LAB_10a863bcc;
      bVar3 = *(byte *)((long)ppppppcVar18 + 0x2f);
      pppppcVar22 = ppppppcVar18[4];
      if (-1 < (char)bVar3) {
        pppppcVar22 = (code *****)(ulong)bVar3;
      }
      bVar4 = *(byte *)((long)unaff_x23 + 0x2f);
      pppppcVar26 = unaff_x23[4];
      if (-1 < (char)bVar4) {
        pppppcVar26 = (code *****)(ulong)bVar4;
      }
      if (pppppcVar22 != pppppcVar26) goto LAB_10a863bcc;
      ppppppcVar20 = (code ******)ppppppcVar18[3];
      if (-1 < (char)bVar3) {
        ppppppcVar20 = ppppppcVar18 + 3;
      }
      ppppppcVar18 = (code ******)*unaff_x24;
      if (-1 < (char)bVar4) {
        ppppppcVar18 = unaff_x24;
      }
      _memcmp(ppppppcVar20,ppppppcVar18);
      if ((int)ppppppcVar20 != 0) goto LAB_10a863bcc;
      pppppcStack_160._0_1_ = 0;
      unaff_x23 = &pppppcStack_160;
      pppppcStack_158 = (code *****)0x0;
      pppppcVar22 = param_1[0x6f];
      (*(code *)(*pppppcVar22)[9])();
      pppppcStack_168 = (code *****)0x0;
      bStack_170 = 3;
      func_0x00010938229c();
      uStack_98 = (code ******)CONCAT17(9,(undefined7)uStack_98);
      uStack_a8 = 0x6e6f6973736573;
      uStack_a1 = 0x49;
      uStack_a0 = 100;
      pbVar9 = (byte *)&pppppcStack_160;
      pppppcStack_168 = pppppcVar22;
      func_0x0001095b7584(pbVar9,&uStack_a8);
      bVar3 = *pbVar9;
      *pbVar9 = bStack_170;
      ppppcVar24 = *(code *****)(pbVar9 + 8);
      bStack_170 = bVar3;
      *(code ******)(pbVar9 + 8) = pppppcStack_168;
      pppppcStack_168 = (code *****)ppppcVar24;
      func_0x000109380ffc(&pppppcStack_168,bVar3);
      pppppcStack_178 = (code *****)0x0;
      bStack_180 = 3;
      pppppcVar22 = param_1[0x6f] + 6;
      func_0x00010938229c();
      uStack_98 = (code ******)CONCAT17(0xc,(undefined7)uStack_98);
      uStack_a0 = 0x6563;
      uStack_9e = 0x6449;
      uStack_a8 = 0x65697265707865;
      uStack_a1 = 0x6e;
      uStack_9c = 0;
      pbVar9 = (byte *)&pppppcStack_160;
      pppppcStack_178 = pppppcVar22;
      func_0x0001095b7584(pbVar9,&uStack_a8);
      bVar3 = *pbVar9;
      *pbVar9 = bStack_180;
      ppppcVar24 = *(code *****)(pbVar9 + 8);
      bStack_180 = bVar3;
      *(code ******)(pbVar9 + 8) = pppppcStack_178;
      pppppcStack_178 = (code *****)ppppcVar24;
      func_0x000109380ffc(&pppppcStack_178,bVar3);
      pppppcStack_188 = (code *****)0x0;
      bStack_190 = 3;
      pppppcVar22 = param_1[0x46] + 0x10;
      func_0x00010938229c();
      uStack_98 = (code ******)CONCAT17(0xf,(undefined7)uStack_98);
      uStack_a8 = 0x6b61546e727574;
      uStack_a1 = 0x65;
      uStack_a0 = 0x5572;
      uStack_9e = 0x6573;
      uStack_9c = 0x72;
      uStack_9b = 0x6449;
      uStack_99 = 0;
      pbVar9 = (byte *)&pppppcStack_160;
      pppppcStack_188 = pppppcVar22;
      func_0x0001095b7584(pbVar9,&uStack_a8);
      bVar3 = *pbVar9;
      *pbVar9 = bStack_190;
      ppppcVar24 = *(code *****)(pbVar9 + 8);
      bStack_190 = bVar3;
      *(code ******)(pbVar9 + 8) = pppppcStack_188;
      pppppcStack_188 = (code *****)ppppcVar24;
      func_0x000109380ffc(&pppppcStack_188,bVar3);
      FUN_10a0c32e4(&pppppppuStack_1a8,&pppppcStack_160,0xffffffff,0x20,0,1);
      pppppppuVar7 = pppppppuStack_1a8;
      if (-1 < (char)bStack_191) {
        uStack_1a0 = (ulong)bStack_191;
        pppppppuVar7 = &pppppppuStack_1a8;
      }
      FUN_10a3bf330(&uStack_138,pppppppuVar7,uStack_1a0);
      ppuVar10 = (undefined **)0x138;
      __Znwm();
      uVar8 = uStack_138;
      unaff_x24 = (code ******)(ppuVar10 + 1);
      *unaff_x24 = (code *****)0x0;
      ppuVar10[2] = (undefined *)0x0;
      *ppuVar10 = (undefined *)&PTR_FUN_110b9f3b0;
      unaff_x21 = (code *******)(ppuVar10 + 3);
      uStack_138 = 0;
      uStack_a8 = (undefined7)uVar8;
      uStack_a1 = (undefined1)((ulong)uVar8 >> 0x38);
      uStack_a0 = (undefined2)uStack_130;
      uStack_9e = (undefined2)((ulong)uStack_130 >> 0x10);
      uStack_9c = (undefined1)((ulong)uStack_130 >> 0x20);
      uStack_9b = (undefined2)((ulong)uStack_130 >> 0x28);
      uStack_99 = (undefined1)((ulong)uStack_130 >> 0x38);
      (**(code **)(alStack_128[0] + 0x10))(&uStack_98,alStack_128);
      uStack_60 = uStack_f0;
      pppppcStack_1c8 = param_1[0x41];
      ppppppcStack_1d0 = (code ******)param_1[0x40];
      if (-1 < (char)*(byte *)((long)param_1 + 0x217)) {
        pppppcStack_1c8 = (code *****)(ulong)*(byte *)((long)param_1 + 0x217);
        ppppppcStack_1d0 = param_1 + 0x40;
      }
      uStack_b0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_d8 = 0;
      unaff_x22 = (code *******)&pppppppcStack_e8;
      pppppppcStack_e8 = (code *******)FUN_10a282dc4;
      ppuStack_e0 = &PTR_DAT_110ae9180;
      pppppppcStack_1c0 = unaff_x22;
      FUN_10a23708c(unaff_x21,&UNK_10e4df414,0x23,&UNK_10f647b49,4,&uStack_a8,1);
      (*(code *)*ppuStack_e0)(&ppuStack_e0);
      FUN_10a042634(&uStack_a8);
      uStack_a8 = 0;
      uStack_a1 = 0;
      uStack_a0 = 0;
      uStack_9e = 0;
      uStack_9c = 0;
      uStack_9b = 0;
      uStack_99 = 0;
      pppppcVar22 = param_1[0x6c];
      pppppppcStack_1b8 = unaff_x21;
      ppuStack_1b0 = ppuVar10;
      if (pppppcVar22 == (code *****)0x0) {
LAB_10a863fc8:
        ppuVar10 = &PTR_PTR_1133052a8;
        FUN_10ae079a0(0,&PTR_PTR_1133052a8);
        FUN_10ae07cd4(ppuVar10,&PTR_PTR_1133052a8);
      }
      else {
        __ZNSt3__119__shared_weak_count4lockEv();
        uStack_a0 = SUB82(pppppcVar22,0);
        uStack_9e = (undefined2)((ulong)pppppcVar22 >> 0x10);
        uStack_9c = (undefined1)((ulong)pppppcVar22 >> 0x20);
        uStack_9b = (undefined2)((ulong)pppppcVar22 >> 0x28);
        uStack_99 = (undefined1)((ulong)pppppcVar22 >> 0x38);
        if (pppppcVar22 == (code *****)0x0) goto LAB_10a863fc8;
        pppppcVar22 = param_1[0x6b];
        uStack_a8 = SUB87(pppppcVar22,0);
        uStack_a1 = (undefined1)((ulong)pppppcVar22 >> 0x38);
        if (pppppcVar22 == (code *****)0x0) goto LAB_10a863fc8;
        ppuVar14 = &PTR_PTR_1133045f0;
        FUN_10ae079a0(0,&PTR_PTR_1133045f0);
        FUN_10ae07cd4(ppuVar14,&PTR_PTR_1133045f0);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(unaff_x24,0x10);
          if (bVar6) {
            *unaff_x24 = (code *****)((long)*unaff_x24 + 1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        pppppppcStack_e8 = unaff_x21;
        ppuStack_e0 = ppuVar10;
        (*(code *)**pppppcVar22)(pppppcVar22,&pppppppcStack_e8);
        ppuVar10 = ppuStack_e0;
        unaff_x22 = (code *******)&PTR_PTR_1133045f0;
        if (ppuStack_e0 != (undefined **)0x0) {
          ppuVar14 = ppuStack_e0 + 1;
          do {
            puVar23 = *ppuVar14;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
            if (bVar6) {
              *ppuVar14 = puVar23 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (puVar23 == (undefined *)0x0) {
            (**(code **)(*ppuStack_e0 + 0x10))(ppuStack_e0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar10);
            unaff_x22 = (code *******)&PTR_PTR_1133045f0;
          }
        }
      }
      plVar2 = (long *)CONCAT17(uStack_99,
                                CONCAT25(uStack_9b,CONCAT14(uStack_9c,CONCAT22(uStack_9e,uStack_a0))
                                        ));
      if (plVar2 != (long *)0x0) {
        plVar1 = plVar2 + 1;
        do {
          lVar27 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar27 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar27 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
      ppuVar10 = ppuStack_1b0;
      if (ppuStack_1b0 != (undefined **)0x0) {
        ppuVar14 = ppuStack_1b0 + 1;
        do {
          puVar23 = *ppuVar14;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
          if (bVar6) {
            *ppuVar14 = puVar23 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (puVar23 == (undefined *)0x0) {
          (**(code **)(*ppuStack_1b0 + 0x10))(ppuStack_1b0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar10);
        }
      }
      FUN_10a042634(&uStack_138);
      if ((char)bStack_191 < '\0') {
        __ZdlPv(pppppppuStack_1a8);
      }
      ppppppcVar20 = &pppppcStack_158;
      func_0x000109380ffc(ppppppcVar20,(byte)pppppcStack_160);
      unaff_x20 = ppppppcStack_148;
      if (ppppppcStack_148 == (code ******)0x0) goto LAB_10a863c08;
    }
LAB_10a863bd8:
    ppppppcVar18 = unaff_x20 + 1;
    do {
      pppppcVar22 = *ppppppcVar18;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppppppcVar18,0x10);
      if (bVar6) {
        *ppppppcVar18 = (code *****)((long)pppppcVar22 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (pppppcVar22 == (code *****)0x0) {
      (*(code *)(*unaff_x20)[2])(unaff_x20);
      ppppppcVar20 = unaff_x20;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
LAB_10a863c08:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a05bd88(&pppppppcStack_e8);
  func_0x00010a05a8c4(&uStack_a8);
  FUN_10a05bd88(&pppppppcStack_1b8);
  FUN_10a042634(&uStack_138);
  if ((char)bStack_191 < '\0') {
    __ZdlPv(pppppppuStack_1a8);
  }
  ppppppcVar15 = (code ******)(ulong)(byte)pppppcStack_160;
  func_0x000109380ffc(unaff_x23 + 1);
  FUN_10a89729c(&ppppppcStack_150);
  ppppppcVar11 = ppppppcVar20;
  __Unwind_Resume();
  ppppppcVar18 = ppppppcVar11 + 3;
  if (ppppppcVar18 != ppppppcVar15) {
    pppppcVar22 = *ppppppcVar15;
    pppppcVar26 = ppppppcVar15[1];
    uVar16 = (long)pppppcVar26 - (long)pppppcVar22 >> 4;
    pcStack_1d8 = FUN_10a8641d0;
    pppppcVar19 = ppppppcVar11[5];
    ppppppcVar15 = (code ******)*ppppppcVar18;
    ppppppcStack_210 = unaff_x24;
    ppppppcStack_208 = unaff_x23;
    pppppppcStack_200 = unaff_x22;
    pppppppcStack_1f8 = unaff_x21;
    ppppppcStack_1f0 = unaff_x20;
    ppppppcStack_1e8 = ppppppcVar20;
    puStack_1e0 = &stack0xfffffffffffffff0;
    if ((ulong)((long)pppppcVar19 - (long)ppppppcVar15 >> 4) < uVar16) {
      ppppppcVar20 = ppppppcVar18;
      pppppcVar13 = pppppcVar22;
      if (ppppppcVar15 != (code ******)0x0) {
        ppppppcVar12 = (code ******)ppppppcVar11[4];
        ppppppcVar20 = ppppppcVar15;
        if (ppppppcVar12 != ppppppcVar15) {
          do {
            ppppppcVar12 = ppppppcVar12 + -2;
            func_0x00010a5c92ec();
          } while (ppppppcVar12 != ppppppcVar15);
          ppppppcVar20 = (code ******)*ppppppcVar18;
        }
        ppppppcVar11[4] = (code *****)ppppppcVar15;
        __ZdlPv();
        pppppcVar19 = (code *****)0x0;
        *ppppppcVar18 = (code *****)0x0;
        ppppppcVar11[4] = (code *****)0x0;
        ppppppcVar11[5] = (code *****)0x0;
      }
      if (uVar16 >> 0x3c != 0) {
        FUN_10a87ed30();
        pcStack_218 = FUN_10a87f0c4;
        pppppcStack_230 = pppppcVar26;
        ppppppcStack_228 = ppppppcVar18;
        ppuStack_220 = &puStack_1e0;
        if ((ulong)pppppcVar13 >> 0x3c == 0) {
          pppppcVar22 = pppppcVar13;
          func_0x00010a87ed44();
          *ppppppcVar20 = pppppcVar13;
          ppppppcVar20[1] = pppppcVar13;
          ppppppcVar20[2] = pppppcVar13 + (long)pppppcVar22 * 2;
          return;
        }
        FUN_10a87ed30();
        pcStack_238 = FUN_10a87f100;
        pppppcVar19 = ppppppcVar20[1];
        if (pppppcVar19 < ppppppcVar20[2]) {
          ppppcVar24 = *pppppcVar13;
          pppppcVar28 = pppppcVar19 + 2;
          pppppcVar19[1] = pppppcVar13[1];
          *pppppcVar19 = ppppcVar24;
          *pppppcVar13 = (code ****)0x0;
          pppppcVar13[1] = (code ****)0x0;
        }
        else {
          lVar27 = (long)pppppcVar19 - (long)*ppppppcVar20;
          uVar16 = (lVar27 >> 4) + 1;
          ppppppcStack_260 = ppppppcVar15;
          pppppcStack_258 = pppppcVar22;
          pppppcStack_250 = pppppcVar26;
          ppppppcStack_248 = ppppppcVar18;
          pppuStack_240 = &ppuStack_220;
          if (uVar16 >> 0x3c != 0) {
            FUN_10a87ed30();
            pppppcVar22 = *ppppppcVar20;
            if (pppppcVar22 == (code *****)0x0) {
              return;
            }
            pppppcVar19 = ppppppcVar20[1];
            pppppcVar26 = pppppcVar22;
            if (pppppcVar19 != pppppcVar22) {
              do {
                pppppcVar19 = pppppcVar19 + -2;
                FUN_10a297544();
              } while (pppppcVar19 != pppppcVar22);
              pppppcVar26 = *ppppppcVar20;
            }
            ppppppcVar20[1] = pppppcVar22;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR___ZdlPv_110352258)(pppppcVar26);
            return;
          }
          uVar21 = (long)ppppppcVar20[2] - (long)*ppppppcVar20;
          uVar25 = (long)uVar21 >> 3;
          if (uVar25 <= uVar16) {
            uVar25 = uVar16;
          }
          if (0x7fffffffffffffef < uVar21) {
            uVar25 = 0xfffffffffffffff;
          }
          pppppcVar22 = pppppcVar13;
          ppppppcStack_268 = ppppppcVar20;
          func_0x00010a87ed44();
          plVar2 = (long *)(uVar25 + lVar27);
          ppppcVar24 = *pppppcVar13;
          pppppcVar28 = (code *****)(plVar2 + 2);
          plVar2[1] = (long)pppppcVar13[1];
          *plVar2 = (long)ppppcVar24;
          *pppppcVar13 = (code ****)0x0;
          pppppcVar13[1] = (code ****)0x0;
          pppppcVar26 = (code *****)((long)plVar2 - ((long)ppppppcVar20[1] - (long)*ppppppcVar20));
          _memcpy(pppppcVar26);
          pppppcStack_288 = *ppppppcVar20;
          *ppppppcVar20 = pppppcVar26;
          ppppppcVar20[1] = pppppcVar28;
          pppppcStack_270 = ppppppcVar20[2];
          ppppppcVar20[2] = (code *****)(uVar25 + (long)pppppcVar22 * 0x10);
          pppppcStack_280 = pppppcStack_288;
          pppppcStack_278 = pppppcStack_288;
          func_0x00010a87ed78(&pppppcStack_288);
        }
        ppppppcVar20[1] = pppppcVar28;
        return;
      }
      uVar25 = (long)pppppcVar19 >> 3;
      if ((ulong)((long)pppppcVar19 >> 3) <= uVar16) {
        uVar25 = uVar16;
      }
      if ((code *****)0x7fffffffffffffef < pppppcVar19) {
        uVar25 = 0xfffffffffffffff;
      }
      FUN_10a87f0c4(ppppppcVar18,uVar25);
      ppppppcVar20 = (code ******)ppppppcVar11[4];
      for (; pppppcVar22 != pppppcVar26; pppppcVar22 = pppppcVar22 + 2) {
        ppppcVar24 = pppppcVar22[1];
        pppppcVar19 = (code *****)*pppppcVar22;
        ppppppcVar20[1] = (code *****)pppppcVar22[1];
        *ppppppcVar20 = pppppcVar19;
        if (ppppcVar24 != (code ****)0x0) {
          ppppcVar24 = ppppcVar24 + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(ppppcVar24,0x10);
            if (bVar6) {
              *ppppcVar24 = (code ***)((long)*ppppcVar24 + 1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        ppppppcVar20 = ppppppcVar20 + 2;
      }
    }
    else {
      ppppppcVar20 = (code ******)ppppppcVar11[4];
      if (uVar16 <= (ulong)((long)ppppppcVar20 - (long)ppppppcVar15 >> 4)) {
        if (pppppcVar22 != pppppcVar26) {
          do {
            pppppcVar19 = pppppcVar22 + 2;
            FUN_10a8602bc(ppppppcVar15,*pppppcVar22,pppppcVar22[1]);
            ppppppcVar15 = ppppppcVar15 + 2;
            pppppcVar22 = pppppcVar19;
          } while (pppppcVar19 != pppppcVar26);
          ppppppcVar20 = (code ******)ppppppcVar11[4];
        }
        while (ppppppcVar20 != ppppppcVar15) {
          ppppppcVar20 = ppppppcVar20 + -2;
          func_0x00010a5c92ec();
        }
        ppppppcVar11[4] = (code *****)ppppppcVar15;
        return;
      }
      pppppcVar19 = (code *****)((long)pppppcVar22 + ((long)ppppppcVar20 - (long)ppppppcVar15));
      if (ppppppcVar20 != ppppppcVar15) {
        do {
          pppppcVar13 = pppppcVar22 + 2;
          FUN_10a8602bc(ppppppcVar15,*pppppcVar22,pppppcVar22[1]);
          ppppppcVar15 = ppppppcVar15 + 2;
          pppppcVar22 = pppppcVar13;
        } while (pppppcVar13 != pppppcVar19);
        ppppppcVar20 = (code ******)ppppppcVar11[4];
      }
      for (; pppppcVar19 != pppppcVar26; pppppcVar19 = pppppcVar19 + 2) {
        ppppcVar24 = pppppcVar19[1];
        pppppcVar22 = (code *****)*pppppcVar19;
        ppppppcVar20[1] = (code *****)pppppcVar19[1];
        *ppppppcVar20 = pppppcVar22;
        if (ppppcVar24 != (code ****)0x0) {
          ppppcVar24 = ppppcVar24 + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(ppppcVar24,0x10);
            if (bVar6) {
              *ppppcVar24 = (code ***)((long)*ppppcVar24 + 1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        ppppppcVar20 = ppppppcVar20 + 2;
      }
    }
    ppppppcVar11[4] = (code *****)ppppppcVar20;
    return;
  }
  return;
LAB_10a863bcc:
  unaff_x21 = unaff_x21 + 2;
  if (unaff_x21 == unaff_x22) goto LAB_10a863bd8;
  goto LAB_10a863b74;
}



/* Entry: 10a8641d0; end: 10a8641f3;  */

void FUN_10a8641d0(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  long *plStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  plVar11 = (long *)(param_1 + 0x18);
  if (plVar11 == param_2) {
    return;
  }
  plVar7 = (long *)*param_2;
  plVar1 = (long *)param_2[1];
  uVar8 = (long)plVar1 - (long)plVar7 >> 4;
  uVar9 = *(ulong *)(param_1 + 0x28);
  plVar15 = (long *)*plVar11;
  if ((ulong)((long)(uVar9 - (long)plVar15) >> 4) < uVar8) {
    plVar10 = plVar11;
    plVar5 = plVar7;
    if (plVar15 != (long *)0x0) {
      plVar4 = *(long **)(param_1 + 0x20);
      plVar10 = plVar15;
      if (plVar4 != plVar15) {
        do {
          plVar4 = plVar4 + -2;
          func_0x00010a5c92ec();
        } while (plVar4 != plVar15);
        plVar10 = (long *)*plVar11;
      }
      *(long **)(param_1 + 0x20) = plVar15;
      __ZdlPv();
      uVar9 = 0;
      *plVar11 = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    if (uVar8 >> 0x3c != 0) {
      FUN_10a87ed30();
      pcStack_48 = FUN_10a87f0c4;
      plStack_60 = plVar1;
      plStack_58 = plVar11;
      puStack_50 = &stack0xfffffffffffffff0;
      if ((ulong)plVar5 >> 0x3c == 0) {
        plVar11 = plVar5;
        FUN_10a87ed44();
        *plVar10 = (long)plVar5;
        plVar10[1] = (long)plVar5;
        plVar10[2] = (long)(plVar5 + (long)plVar11 * 2);
        return;
      }
      FUN_10a87ed30();
      pcStack_68 = FUN_10a87f100;
      plVar4 = (long *)plVar10[1];
      if (plVar4 < (long *)plVar10[2]) {
        lVar14 = *plVar5;
        plVar15 = plVar4 + 2;
        plVar4[1] = plVar5[1];
        *plVar4 = lVar14;
        *plVar5 = 0;
        plVar5[1] = 0;
      }
      else {
        lVar14 = (long)plVar4 - *plVar10;
        uVar8 = (lVar14 >> 4) + 1;
        plStack_90 = plVar15;
        plStack_88 = plVar7;
        plStack_80 = plVar1;
        plStack_78 = plVar11;
        ppuStack_70 = &puStack_50;
        if (uVar8 >> 0x3c != 0) {
          FUN_10a87ed30();
          lVar14 = *plVar10;
          if (lVar14 != 0) {
            lVar6 = plVar10[1];
            lVar13 = lVar14;
            if (lVar6 != lVar14) {
              do {
                lVar6 = lVar6 + -0x10;
                FUN_10a297544();
              } while (lVar6 != lVar14);
              lVar13 = *plVar10;
            }
            plVar10[1] = lVar14;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR___ZdlPv_110352258)(lVar13);
            return;
          }
          return;
        }
        uVar12 = plVar10[2] - *plVar10;
        uVar9 = (long)uVar12 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < uVar12) {
          uVar9 = 0xfffffffffffffff;
        }
        plVar7 = plVar5;
        plStack_98 = plVar10;
        FUN_10a87ed44();
        plVar11 = (long *)(uVar9 + lVar14);
        lVar14 = *plVar5;
        plVar15 = plVar11 + 2;
        plVar11[1] = plVar5[1];
        *plVar11 = lVar14;
        *plVar5 = 0;
        plVar5[1] = 0;
        lVar14 = (long)plVar11 - (plVar10[1] - *plVar10);
        _memcpy(lVar14);
        lStack_b8 = *plVar10;
        *plVar10 = lVar14;
        plVar10[1] = (long)plVar15;
        lStack_a0 = plVar10[2];
        plVar10[2] = uVar9 + (long)plVar7 * 0x10;
        lStack_b0 = lStack_b8;
        lStack_a8 = lStack_b8;
        func_0x00010a87ed78(&lStack_b8);
      }
      plVar10[1] = (long)plVar15;
      return;
    }
    uVar12 = (long)uVar9 >> 3;
    if ((ulong)((long)uVar9 >> 3) <= uVar8) {
      uVar12 = uVar8;
    }
    if (0x7fffffffffffffef < uVar9) {
      uVar12 = 0xfffffffffffffff;
    }
    FUN_10a87f0c4(plVar11,uVar12);
    plVar11 = *(long **)(param_1 + 0x20);
    for (; plVar7 != plVar1; plVar7 = plVar7 + 2) {
      lVar14 = plVar7[1];
      lVar13 = *plVar7;
      plVar11[1] = plVar7[1];
      *plVar11 = lVar13;
      if (lVar14 != 0) {
        plVar15 = (long *)(lVar14 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar3) {
            *plVar15 = *plVar15 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar11 = plVar11 + 2;
    }
  }
  else {
    plVar11 = *(long **)(param_1 + 0x20);
    if (uVar8 <= (ulong)((long)plVar11 - (long)plVar15 >> 4)) {
      if (plVar7 != plVar1) {
        do {
          plVar11 = plVar7 + 2;
          FUN_10a8602bc(plVar15,*plVar7,plVar7[1]);
          plVar15 = plVar15 + 2;
          plVar7 = plVar11;
        } while (plVar11 != plVar1);
        plVar11 = *(long **)(param_1 + 0x20);
      }
      while (plVar11 != plVar15) {
        plVar11 = plVar11 + -2;
        func_0x00010a5c92ec();
      }
      *(long **)(param_1 + 0x20) = plVar15;
      return;
    }
    plVar10 = (long *)((long)plVar7 + ((long)plVar11 - (long)plVar15));
    if (plVar11 != plVar15) {
      do {
        plVar11 = plVar7 + 2;
        FUN_10a8602bc(plVar15,*plVar7,plVar7[1]);
        plVar15 = plVar15 + 2;
        plVar7 = plVar11;
      } while (plVar11 != plVar10);
      plVar11 = *(long **)(param_1 + 0x20);
    }
    for (; plVar10 != plVar1; plVar10 = plVar10 + 2) {
      lVar14 = plVar10[1];
      lVar13 = *plVar10;
      plVar11[1] = plVar10[1];
      *plVar11 = lVar13;
      if (lVar14 != 0) {
        plVar7 = (long *)(lVar14 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = *plVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar11 = plVar11 + 2;
    }
  }
  *(long **)(param_1 + 0x20) = plVar11;
  return;
}



/* Entry: 10a8641f4; end: 10a8644cf;  */

void FUN_10a8641f4(undefined8 *param_1,long *param_2,long param_3,uint param_4)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 ***pppuVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 **ppuStack_d8;
  ulong uStack_d0;
  byte bStack_c1;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 auStack_a8 [2];
  char cStack_91;
  undefined8 auStack_90 [2];
  char cStack_79;
  undefined8 auStack_78 [2];
  char cStack_61;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10a860df0(param_1,(long)(int)param_4);
  if (0 < (int)param_4) {
    uVar11 = 0;
    do {
      if (*(long *)(param_3 + uVar11 * 8) != 0) {
        func_0x000107c2b054(&ppuStack_d8);
        lVar9 = *param_2;
        plVar10 = *(long **)(lVar9 + 0x230);
        if (plVar10 == (long *)0x0) {
LAB_10a8642c8:
          lVar9 = lVar9 + 0x300;
          FUN_10a894b50(lVar9,&ppuStack_d8);
          if (lVar9 == 0) {
            plVar8 = (long *)0xd0;
            __Znwm();
            plVar8[1] = 0;
            plVar8[2] = 0;
            *plVar8 = (long)&PTR_FUN_110bf8238;
            func_0x000107c2b054(auStack_78,&UNK_10f67d9eb);
            func_0x000107c2b054(auStack_90,&UNK_10f67d9eb);
            func_0x000107c2b054(auStack_a8,&UNK_10f67d9eb);
            plVar10 = plVar8 + 3;
            FUN_10a5caa80(plVar10,&ppuStack_d8,auStack_78,auStack_90,auStack_a8,0xffffffffffffffff);
            if (cStack_91 < '\0') {
              __ZdlPv(auStack_a8[0]);
            }
            if (cStack_79 < '\0') {
              __ZdlPv(auStack_90[0]);
            }
            if (cStack_61 < '\0') {
              __ZdlPv(auStack_78[0]);
            }
          }
          else {
            plVar8 = *(long **)(lVar9 + 0x30);
            plVar10 = *(long **)(lVar9 + 0x28);
            if (*(long *)(lVar9 + 0x30) != 0) {
              plVar1 = (long *)(*(long *)(lVar9 + 0x30) + 8);
              do {
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar7) {
                  *plVar1 = *plVar1 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
            }
          }
        }
        else {
          bVar5 = *(byte *)((long)plVar10 + 0x2f);
          uVar2 = plVar10[4];
          if (-1 < (char)bVar5) {
            uVar2 = (ulong)bVar5;
          }
          uVar3 = uStack_d0;
          if (-1 < (char)bStack_c1) {
            uVar3 = (ulong)bStack_c1;
          }
          if (uVar2 != uVar3) goto LAB_10a8642c8;
          plVar8 = (long *)plVar10[3];
          if (-1 < (char)bVar5) {
            plVar8 = plVar10 + 3;
          }
          pppuVar4 = (undefined8 ***)ppuStack_d8;
          if (-1 < (char)bStack_c1) {
            pppuVar4 = &ppuStack_d8;
          }
          _memcmp(plVar8,pppuVar4);
          if ((int)plVar8 != 0) goto LAB_10a8642c8;
          plVar8 = *(long **)(lVar9 + 0x238);
          if (plVar8 != (long *)0x0) {
            plVar1 = plVar8 + 1;
            do {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar7) {
                *plVar1 = *plVar1 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
        }
        plStack_b8 = plVar8;
        plStack_c0 = plVar10;
        FUN_10a87f100(param_1,&plStack_c0);
        plVar10 = plStack_b8;
        if (plStack_b8 != (long *)0x0) {
          plVar8 = plStack_b8 + 1;
          do {
            lVar9 = *plVar8;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar7) {
              *plVar8 = lVar9 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          }
        }
        if ((char)bStack_c1 < '\0') {
          __ZdlPv(ppuStack_d8);
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != param_4);
  }
  return;
}



/* Entry: 10a8644d0; end: 10a86453b;  */

void FUN_10a8644d0(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  long *plStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  plVar11 = (long *)(param_1 + 0x30);
  if (plVar11 == param_2) {
    return;
  }
  plVar7 = (long *)*param_2;
  plVar1 = (long *)param_2[1];
  uVar8 = (long)plVar1 - (long)plVar7 >> 4;
  uVar9 = *(ulong *)(param_1 + 0x40);
  plVar15 = (long *)*plVar11;
  if ((ulong)((long)(uVar9 - (long)plVar15) >> 4) < uVar8) {
    plVar10 = plVar11;
    plVar5 = plVar7;
    if (plVar15 != (long *)0x0) {
      plVar4 = *(long **)(param_1 + 0x38);
      plVar10 = plVar15;
      if (plVar4 != plVar15) {
        do {
          plVar4 = plVar4 + -2;
          func_0x00010a5c92ec();
        } while (plVar4 != plVar15);
        plVar10 = (long *)*plVar11;
      }
      *(long **)(param_1 + 0x38) = plVar15;
      __ZdlPv();
      uVar9 = 0;
      *plVar11 = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    if (uVar8 >> 0x3c != 0) {
      FUN_10a87ed30();
      pcStack_48 = FUN_10a87f0c4;
      plStack_60 = plVar1;
      plStack_58 = plVar11;
      puStack_50 = &stack0xfffffffffffffff0;
      if ((ulong)plVar5 >> 0x3c == 0) {
        plVar11 = plVar5;
        FUN_10a87ed44();
        *plVar10 = (long)plVar5;
        plVar10[1] = (long)plVar5;
        plVar10[2] = (long)(plVar5 + (long)plVar11 * 2);
        return;
      }
      FUN_10a87ed30();
      pcStack_68 = FUN_10a87f100;
      plVar4 = (long *)plVar10[1];
      if (plVar4 < (long *)plVar10[2]) {
        lVar14 = *plVar5;
        plVar15 = plVar4 + 2;
        plVar4[1] = plVar5[1];
        *plVar4 = lVar14;
        *plVar5 = 0;
        plVar5[1] = 0;
      }
      else {
        lVar14 = (long)plVar4 - *plVar10;
        uVar8 = (lVar14 >> 4) + 1;
        plStack_90 = plVar15;
        plStack_88 = plVar7;
        plStack_80 = plVar1;
        plStack_78 = plVar11;
        ppuStack_70 = &puStack_50;
        if (uVar8 >> 0x3c != 0) {
          FUN_10a87ed30();
          lVar14 = *plVar10;
          if (lVar14 != 0) {
            lVar6 = plVar10[1];
            lVar13 = lVar14;
            if (lVar6 != lVar14) {
              do {
                lVar6 = lVar6 + -0x10;
                FUN_10a297544();
              } while (lVar6 != lVar14);
              lVar13 = *plVar10;
            }
            plVar10[1] = lVar14;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR___ZdlPv_110352258)(lVar13);
            return;
          }
          return;
        }
        uVar12 = plVar10[2] - *plVar10;
        uVar9 = (long)uVar12 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < uVar12) {
          uVar9 = 0xfffffffffffffff;
        }
        plVar7 = plVar5;
        plStack_98 = plVar10;
        FUN_10a87ed44();
        plVar11 = (long *)(uVar9 + lVar14);
        lVar14 = *plVar5;
        plVar15 = plVar11 + 2;
        plVar11[1] = plVar5[1];
        *plVar11 = lVar14;
        *plVar5 = 0;
        plVar5[1] = 0;
        lVar14 = (long)plVar11 - (plVar10[1] - *plVar10);
        _memcpy(lVar14);
        lStack_b8 = *plVar10;
        *plVar10 = lVar14;
        plVar10[1] = (long)plVar15;
        lStack_a0 = plVar10[2];
        plVar10[2] = uVar9 + (long)plVar7 * 0x10;
        lStack_b0 = lStack_b8;
        lStack_a8 = lStack_b8;
        func_0x00010a87ed78(&lStack_b8);
      }
      plVar10[1] = (long)plVar15;
      return;
    }
    uVar12 = (long)uVar9 >> 3;
    if ((ulong)((long)uVar9 >> 3) <= uVar8) {
      uVar12 = uVar8;
    }
    if (0x7fffffffffffffef < uVar9) {
      uVar12 = 0xfffffffffffffff;
    }
    FUN_10a87f0c4(plVar11,uVar12);
    plVar11 = *(long **)(param_1 + 0x38);
    for (; plVar7 != plVar1; plVar7 = plVar7 + 2) {
      lVar14 = plVar7[1];
      lVar13 = *plVar7;
      plVar11[1] = plVar7[1];
      *plVar11 = lVar13;
      if (lVar14 != 0) {
        plVar15 = (long *)(lVar14 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar3) {
            *plVar15 = *plVar15 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar11 = plVar11 + 2;
    }
  }
  else {
    plVar11 = *(long **)(param_1 + 0x38);
    if (uVar8 <= (ulong)((long)plVar11 - (long)plVar15 >> 4)) {
      if (plVar7 != plVar1) {
        do {
          plVar11 = plVar7 + 2;
          FUN_10a8602bc(plVar15,*plVar7,plVar7[1]);
          plVar15 = plVar15 + 2;
          plVar7 = plVar11;
        } while (plVar11 != plVar1);
        plVar11 = *(long **)(param_1 + 0x38);
      }
      while (plVar11 != plVar15) {
        plVar11 = plVar11 + -2;
        func_0x00010a5c92ec();
      }
      *(long **)(param_1 + 0x38) = plVar15;
      return;
    }
    plVar10 = (long *)((long)plVar7 + ((long)plVar11 - (long)plVar15));
    if (plVar11 != plVar15) {
      do {
        plVar11 = plVar7 + 2;
        FUN_10a8602bc(plVar15,*plVar7,plVar7[1]);
        plVar15 = plVar15 + 2;
        plVar7 = plVar11;
      } while (plVar11 != plVar10);
      plVar11 = *(long **)(param_1 + 0x38);
    }
    for (; plVar10 != plVar1; plVar10 = plVar10 + 2) {
      lVar14 = plVar10[1];
      lVar13 = *plVar10;
      plVar11[1] = plVar10[1];
      *plVar11 = lVar13;
      if (lVar14 != 0) {
        plVar7 = (long *)(lVar14 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = *plVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar11 = plVar11 + 2;
    }
  }
  *(long **)(param_1 + 0x38) = plVar11;
  return;
}


