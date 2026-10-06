/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a078544; end: 10a078697;  */

void FUN_10a078544(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  
  func_0x0001092af97c(param_2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a07856c);
  (*pcVar1)();
}



/* Entry: 10a078698; end: 10a078c27;  */

void FUN_10a078698(long *param_1,long *param_2,undefined8 *param_3)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  puVar6 = (undefined8 *)0xb0;
  __Znwm();
  *puVar6 = FUN_10a08b968;
  puVar6[1] = FUN_10a08bd74;
  lVar10 = *param_2;
  *param_2 = 0;
  puVar6[9] = *param_3;
  plVar9 = puVar6 + 0x10;
  *plVar9 = lVar10;
  iVar2 = *(int *)(param_3 + 1);
  *(int *)(puVar6 + 10) = iVar2;
  if (iVar2 == 3) {
    puVar6[0xb] = param_3[2];
  }
  else if (iVar2 == 2) {
    *(undefined1 *)(puVar6 + 0xb) = *(undefined1 *)(param_3 + 2);
  }
  else if (3 < iVar2) {
    puVar6[0xb] = param_3[2];
    param_3[2] = 0;
  }
  *(undefined4 *)(param_3 + 1) = 0;
  puVar6[0xc] = param_3[3];
  iVar2 = *(int *)(param_3 + 4);
  *(int *)(puVar6 + 0xd) = iVar2;
  if (iVar2 == 3) {
    puVar6[0xe] = param_3[5];
  }
  else if (iVar2 == 2) {
    *(undefined1 *)(puVar6 + 0xe) = *(undefined1 *)(param_3 + 5);
  }
  else if (3 < iVar2) {
    puVar6[0xe] = param_3[5];
    param_3[5] = 0;
  }
  *(undefined4 *)(param_3 + 4) = 0;
  func_0x0001092ba17c(puVar6 + 2);
  lVar10 = puVar6[7];
  if (lVar10 != 0) {
    plVar8 = (long *)(lVar10 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = lVar10;
  puVar6[0x12] = 0;
  *(undefined1 *)(puVar6 + 0x15) = 0;
  puVar7 = puVar6 + 0x12;
  FUN_10a057268(puVar7,puVar6);
  if (((ulong)puVar7 & 1) == 0) {
    puVar6[0x11] = puVar6[0x12];
    FUN_10a078cd0(puVar6 + 0x13,puVar6 + 0x11,plVar9);
    puVar6[0x12] = puVar6[0x13];
    plVar8 = (long *)(puVar6[0x13] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(puVar6[0x12] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar6 + 0x15) = 1;
      lVar10 = puVar6[0x12];
      plVar8 = (long *)(lVar10 + 0x10);
      uStack_48 = puVar6[3];
      do {
        lVar12 = *plVar8;
        if (lVar12 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            uStack_58 = 0;
            puStack_50 = puVar6;
            func_0x000109d1b588(lVar10 + 0x18,&uStack_58);
            *(undefined8 *)(lVar10 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar12 >> 1 & 1) == 0);
    }
    plVar8 = (long *)puVar6[0x12];
    if (plVar8 != (long *)0x0) {
      puVar1 = (ulong *)(plVar8 + 1);
      do {
        uVar11 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar11 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar11 & 0x1fffffffc) == 4) {
        do {
          uVar11 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar11 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar11 - 1 == 0) {
          (**(code **)(*plVar8 + 8))();
        }
      }
    }
    plVar8 = (long *)puVar6[0x13];
    if (plVar8 != (long *)0x0) {
      puVar1 = (ulong *)(plVar8 + 1);
      do {
        uVar11 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar11 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar11 & 0x1fffffffc) == 4) {
        do {
          uVar11 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar11 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar11 - 1 == 0) {
          (**(code **)(*plVar8 + 8))();
        }
      }
    }
    if (((uint)*(undefined8 *)(puVar6[0x11] + 0x10) >> 1 & 1) == 0) {
      lVar10 = *plVar9;
      puVar6[0x14] = lVar10;
      *plVar9 = 0;
      if (((uint)*(undefined8 *)(lVar10 + 0x10) >> 5 & 1) == 0) {
        func_0x0001092af8bc(puVar6 + 0x14);
        if ((*(byte *)(puVar6[0x14] + 0xa8) & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a078ae4);
          (*pcVar5)();
        }
        FUN_10a078340(puVar6 + 9,puVar6[0x14] + 0x98);
      }
      else {
        __ZNSt13exception_ptrC1ERKS_(&uStack_58,puVar6[0x14] + 0x90);
        FUN_10a078544(puVar6 + 0xc,&uStack_58);
        __ZNSt13exception_ptrD1Ev(&uStack_58);
      }
      plVar8 = (long *)puVar6[0x14];
      if (plVar8 != (long *)0x0) {
        puVar1 = (ulong *)(plVar8 + 1);
        do {
          uVar11 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar11 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar11 & 0x1fffffffc) == 4) {
          do {
            uVar11 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar11 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar11 - 1 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
      }
    }
    func_0x0001092ba100(puVar6 + 2);
    plVar8 = (long *)puVar6[0x11];
    if (plVar8 != (long *)0x0) {
      puVar1 = (ulong *)(plVar8 + 1);
      do {
        uVar11 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar11 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar11 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        do {
          uVar11 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar11 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar11 - 1 == 0) {
          (**(code **)(*plVar8 + 8))(plVar8);
        }
      }
    }
    func_0x000109d1a1d0(puVar6 + 2);
    if ((3 < *(int *)(puVar6 + 0xd)) && ((undefined8 *)puVar6[0xe] != (undefined8 *)0x0)) {
      (*(code *)**(undefined8 **)puVar6[0xe])();
    }
    if ((3 < *(int *)(puVar6 + 10)) && ((undefined8 *)puVar6[0xb] != (undefined8 *)0x0)) {
      (*(code *)**(undefined8 **)puVar6[0xb])();
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
      do {
        uVar11 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar11 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar11 & 0x1fffffffc) == 4) {
        do {
          uVar11 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar11 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar11 - 1 == 0) {
          (**(code **)(*plVar9 + 8))();
        }
      }
    }
    __ZdlPv(puVar6);
  }
  return;
}



/* Entry: 10a078c28; end: 10a078ccf;  */

long * FUN_10a078c28(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if ((3 < (int)param_1[5]) && ((undefined8 *)param_1[6] != (undefined8 *)0x0)) {
    (*(code *)**(undefined8 **)param_1[6])();
  }
  if ((3 < (int)param_1[2]) && ((undefined8 *)param_1[3] != (undefined8 *)0x0)) {
    (*(code *)**(undefined8 **)param_1[3])();
  }
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



/* Entry: 10a078cd0; end: 10a078db3;  */

void FUN_10a078cd0(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plStack_28;
  
  plStack_28 = (long *)*param_2;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a078db4(param_1,&plStack_28);
  if (plStack_28 != (long *)0x0) {
    puVar2 = (ulong *)(plStack_28 + 1);
    do {
      uVar5 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar5 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar5 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plStack_28 + 8))();
      }
    }
  }
  return;
}



/* Entry: 10a078db4; end: 10a079327;  */

/* WARNING: Removing unreachable block (ram,0x00010a078efc) */
/* WARNING: Removing unreachable block (ram,0x00010a07910c) */
/* WARNING: Removing unreachable block (ram,0x00010a078ebc) */
/* WARNING: Removing unreachable block (ram,0x00010a079050) */

void FUN_10a078db4(long *param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_80;
  long lStack_78;
  long *plStack_70;
  code *pcStack_68;
  long *plStack_60;
  undefined **ppuStack_58;
  
  plVar4 = (long *)0x118;
  __Znwm();
  plVar4[2] = 0;
  plVar4[1] = 0x200000006;
  *(undefined2 *)(plVar4 + 3) = 4;
  plVar4[5] = 0;
  plVar4[4] = 0;
  plVar4[7] = 0;
  plVar4[6] = 0;
  plVar4[9] = 0;
  plVar4[8] = 0;
  plVar4[0xb] = 0;
  plVar4[10] = 0;
  plVar4[0xd] = 0;
  plVar4[0xc] = 0;
  plVar4[0xf] = 0;
  plVar4[0xe] = 0;
  plVar4[0x10] = 0;
  plVar4[0x11] = (long)(plVar4 + 3);
  plVar4[0x12] = 0;
  *(undefined1 *)(plVar4 + 0x13) = 0;
  *(undefined1 *)(plVar4 + 0x15) = 0;
  *plVar4 = (long)&PTR_FUN_110b9efd8;
  plVar9 = plVar4 + 0x16;
  *plVar9 = *param_3;
  *param_3 = 0;
  lVar5 = *param_2;
  plVar4[0x17] = lVar5;
  if (lVar5 != 0) {
    plVar10 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar4[0x1a] = 0;
  plVar4[0x1b] = 0x32aaaba7;
  plVar4[0x1d] = 0;
  plVar4[0x1c] = 0;
  plVar4[0x1f] = 0;
  plVar4[0x1e] = 0;
  plVar4[0x21] = 0;
  plVar4[0x20] = 0;
  plVar4[0x22] = 0;
  lStack_78 = 0;
  plVar4[0x18] = (long)plVar4;
  plVar4[0x19] = 0;
  plStack_70 = plVar9;
  if (((uint)*(undefined8 *)(plVar4[0x17] + 0x10) >> 1 & 1) == 0) {
    __ZNSt3__15mutex4lockEv(plVar4 + 0x1b);
    lVar5 = *plVar9;
    plVar10 = (long *)(lVar5 + 0x10);
    do {
      lVar7 = *plVar10;
      if (lVar7 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar7 = lVar5 + 0x18;
          pcStack_68 = FUN_10a079328;
          ppuStack_58 = &PTR_PTR_1132fed68;
          plStack_60 = plVar9;
          func_0x000109d1b588(lVar7,&pcStack_68);
          *(undefined8 *)(lVar5 + 0x10) = 0;
          plStack_70[3] = lVar7;
          lVar5 = plVar4[0x17];
          plVar10 = (long *)(lVar5 + 0x10);
          goto LAB_10a07903c;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar7 >> 1 & 1) == 0);
    plStack_70[3] = 0;
    lVar5 = plVar4[0x18];
    plVar10 = (long *)(lVar5 + 0x10);
    do {
      lVar7 = *plVar10;
      if (lVar7 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = 2;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          func_0x000109d1b4dc(lVar5 + 0x18);
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar7 >> 1 & 1) == 0);
    plVar10 = (long *)plVar4[0x17];
    plVar4[0x17] = 0;
    if (plVar10 != (long *)0x0) {
      puVar1 = (ulong *)(plVar10 + 1);
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
        (**(code **)(*plVar10 + 0x10))(plVar10);
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
          (**(code **)(*plVar10 + 8))(plVar10);
        }
      }
    }
    lVar5 = plVar4[0x18];
    plVar4[0x18] = 0;
    if (lVar5 != 0) {
      func_0x0001092b4274(plVar4 + 0x18);
    }
    *param_1 = *plVar9;
    *plVar9 = 0;
    plStack_80 = plVar4;
LAB_10a07927c:
    __ZNSt3__15mutex6unlockEv(plVar4 + 0x1b);
  }
  else {
    lVar5 = plVar4[0x18];
    plVar10 = plVar4;
    FUN_109d1857c();
    func_0x000109d1b350(lVar5,plVar10);
    plVar10 = (long *)*plVar9;
    *plVar9 = 0;
    if (plVar10 != (long *)0x0) {
      puVar1 = (ulong *)(plVar10 + 1);
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
          (**(code **)(*plVar10 + 8))();
        }
      }
    }
    plVar9 = (long *)plVar4[0x17];
    plVar4[0x17] = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
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
        (**(code **)(*plVar9 + 0x10))(plVar9);
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
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
    lVar5 = plVar4[0x18];
    plVar4[0x18] = 0;
    if (lVar5 != 0) {
      func_0x0001092b4274(plVar4 + 0x18);
    }
    *param_1 = (long)plVar4;
    plStack_80 = (long *)0x0;
  }
  if (lStack_78 != 0) {
    func_0x0001092b4274(&lStack_78);
  }
  if (plStack_80 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_80 + 1);
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
        (**(code **)(*plStack_80 + 8))();
      }
    }
  }
  return;
LAB_10a07903c:
  do {
    lVar8 = *plVar10;
    if (lVar8 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar7 = lVar5 + 0x18;
        pcStack_68 = FUN_10a079438;
        ppuStack_58 = &PTR_PTR_1132fed68;
        plStack_60 = plVar9;
        func_0x000109d1b588(lVar7,&pcStack_68);
        *(undefined8 *)(lVar5 + 0x10) = 0;
        plStack_70[4] = lVar7;
        *param_1 = (long)plVar4;
        goto LAB_10a079278;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  } while (((uint)lVar8 >> 1 & 1) == 0);
  plStack_70[4] = 0;
  lVar5 = plVar4[0x18];
  FUN_109d1857c();
  func_0x000109d1b350(lVar5,lVar7);
  plVar10 = (long *)plVar4[0x17];
  plVar4[0x17] = 0;
  if (plVar10 != (long *)0x0) {
    puVar1 = (ulong *)(plVar10 + 1);
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
      (**(code **)(*plVar10 + 0x10))(plVar10);
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
        (**(code **)(*plVar10 + 8))(plVar10);
      }
    }
  }
  lVar7 = *plVar9;
  plVar10 = (long *)(lVar7 + 0x10);
  lVar5 = plStack_70[3];
  while (lVar8 = *plVar10, lVar8 != 0) {
    ClearExclusiveLocal();
LAB_10a079120:
    if (((uint)lVar8 >> 1 & 1) != 0) goto LAB_10a079270;
  }
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
  if (bVar3) {
    *plVar10 = 1;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 != '\0') goto LAB_10a079120;
  pcStack_68 = FUN_10a079328;
  ppuStack_58 = &PTR_PTR_1132fed68;
  plStack_60 = plVar9;
  FUN_109d1b624(lVar7 + 0x18,&pcStack_68,lVar5);
  *(undefined8 *)(lVar7 + 0x10) = 0;
  plStack_70[3] = 0;
  plVar10 = (long *)*plVar9;
  *plVar9 = 0;
  if (plVar10 != (long *)0x0) {
    puVar1 = (ulong *)(plVar10 + 1);
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
        (**(code **)(*plVar10 + 8))();
      }
    }
  }
  lVar5 = plVar4[0x18];
  plVar4[0x18] = 0;
  if (lVar5 != 0) {
    func_0x0001092b4274(plVar4 + 0x18);
  }
LAB_10a079270:
  *param_1 = (long)plVar4;
LAB_10a079278:
  plStack_80 = (long *)0x0;
  goto LAB_10a07927c;
}



/* Entry: 10a079328; end: 10a079437;  */

void FUN_10a079328(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  code *pcStack_38;
  long *plStack_30;
  undefined **ppuStack_28;
  
  __ZNSt3__15mutex4lockEv(param_1 + 5);
  pcStack_38 = FUN_10a079438;
  ppuStack_28 = &PTR_PTR_1132fed68;
  plStack_30 = param_1;
  func_0x0001092ba560(param_1 + 1,param_1 + 4,&pcStack_38);
  lVar7 = param_1[2];
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 5 & 1) == 0) {
    func_0x0001092af8bc(param_1);
    if ((*(byte *)(*param_1 + 0xa8) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a079434);
      (*pcVar4)();
    }
    FUN_10a079848(lVar7,*param_1 + 0x98);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&pcStack_38,*param_1 + 0x90);
    func_0x000109d1b350(lVar7,&pcStack_38);
    __ZNSt13exception_ptrD1Ev(&pcStack_38);
  }
  plVar5 = (long *)*param_1;
  *param_1 = 0;
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
  FUN_10a0797d8(param_1,param_1 + 3);
  return;
}



/* Entry: 10a079438; end: 10a079517;  */

void FUN_10a079438(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x28);
  pcStack_48 = FUN_10a079328;
  ppuStack_38 = &PTR_PTR_1132fed68;
  lVar4 = param_1;
  lStack_40 = param_1;
  func_0x0001098adf90(param_1,param_1 + 0x18,&pcStack_48);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  FUN_109d1857c();
  func_0x000109d1b350(uVar6,lVar4);
  plVar7 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
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
  FUN_10a0797d8(param_1,param_1 + 0x20);
  return;
}



/* Entry: 10a079518; end: 10a07958b;  */

long * FUN_10a079518(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (param_1[1] != 0) {
    func_0x0001092b4274();
  }
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



/* Entry: 10a07958c; end: 10a0797d7;  */

undefined8 * FUN_10a07958c(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_110b9efd8;
  __ZNSt3__15mutexD1Ev(param_1 + 0x1b);
  if (param_1[0x18] != 0) {
    func_0x0001092b4274();
  }
  plVar5 = (long *)param_1[0x17];
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
  plVar5 = (long *)param_1[0x16];
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
  *param_1 = &PTR_FUN_110b9f028;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    FUN_10a07a538(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a0797d8; end: 10a079847;  */

void FUN_10a0797d8(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lStack_28;
  
  *param_2 = 0;
  if ((*(long *)(param_1 + 0x18) == 0) && (*(long *)(param_1 + 0x20) == 0)) {
    lVar1 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    __ZNSt3__15mutex6unlockEv(param_1 + 0x28);
    lStack_28 = 0;
    if (lVar1 != 0) {
      func_0x0001092b4274(&lStack_28,lVar1);
      if (lStack_28 != 0) {
        func_0x0001092b4274(&lStack_28);
      }
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x28);
  return;
}



/* Entry: 10a079848; end: 10a0798bf;  */

undefined1 FUN_10a079848(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = (long *)(param_1 + 0x10);
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
        FUN_10a0798c0(param_1 + 0x98);
        *(undefined8 *)(param_1 + 0x10) = 2;
        FUN_109d1b4dc(param_1 + 0x18);
        return 1;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar4 >> 1 & 1) != 0) {
      return 0;
    }
  } while( true );
}



/* Entry: 10a0798c0; end: 10a07991b;  */

void FUN_10a0798c0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (*(char *)(param_1 + 2) == '\x01') {
    FUN_10a07a538();
    *(undefined1 *)(param_1 + 2) = 0;
  }
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
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
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10a07991c; end: 10a079937;  */

void FUN_10a07991c(void)

{
  return;
}



/* Entry: 10a079938; end: 10a079a73;  */

void FUN_10a079938(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  func_0x000109898610(&lStack_40);
  if (lStack_40 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    ___dynamic_cast(lStack_40,&PTR_DAT_110b178e0,&PTR_DAT_110c14c08,0x10);
    if (lStack_40 == 0) {
      plVar5 = &lStack_50;
    }
    else {
      plStack_48 = plStack_38;
      plVar5 = &lStack_40;
      lStack_50 = lStack_40;
    }
    *plVar5 = 0;
    plVar5[1] = 0;
    if (lStack_50 == 0) {
      func_0x00010988bd28(&UNK_10f685500);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a079a54);
      (*pcVar4)();
    }
    uStack_60 = param_2;
    uStack_58 = param_3;
    FUN_10a079a74(param_1,&lStack_50,&uStack_60);
    plVar5 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
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
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  if (plStack_38 != (long *)0x0) {
    plVar5 = plStack_38 + 1;
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return;
}



/* Entry: 10a079a74; end: 10a079df7;  */

void FUN_10a079a74(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  undefined **ppuVar7;
  undefined *extraout_x8;
  long lVar8;
  undefined *puVar9;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  FUN_10a0533bc(&plStack_50,*param_2);
  if (plStack_50 == (long *)0x0) {
    lVar8 = *param_3;
    func_0x0001098849a4(&lStack_40,lVar8,param_3[1]);
    plVar5 = (long *)0x30;
    __Znwm();
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_DAT_110b174d8;
    plStack_60 = plVar5 + 3;
    if ((int)lStack_40 == 3) {
      plVar5[3] = lVar8;
      *(undefined4 *)(plVar5 + 4) = 3;
      plVar5[5] = (long)plStack_38;
    }
    else if ((int)lStack_40 == 2) {
      plVar5[3] = lVar8;
      *(undefined4 *)(plVar5 + 4) = 2;
      *(undefined1 *)(plVar5 + 5) = plStack_38._0_1_;
    }
    else if ((int)lStack_40 < 4) {
      plVar5[3] = lVar8;
      *(int *)(plVar5 + 4) = (int)lStack_40;
    }
    else {
      plVar5[3] = lVar8;
      *(int *)(plVar5 + 4) = (int)lStack_40;
      plVar5[5] = (long)plStack_38;
    }
    lVar8 = *param_2;
    lVar2 = param_2[1];
    if (lVar2 != 0) {
      plVar6 = (long *)(lVar2 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar6 = (long *)0x90;
    plStack_58 = plVar5;
    lStack_40 = lVar8;
    plStack_38 = (long *)lVar2;
    __Znwm();
    plVar5 = plStack_48;
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110b9fe30;
    plStack_50 = plVar6 + 3;
    *plStack_50 = lVar8;
    lStack_40 = 0;
    plStack_38 = (long *)0x0;
    plVar6[4] = lVar2;
    plVar6[5] = 0;
    plVar6[6] = 0;
    plVar6[7] = 0x32aaaba7;
    plVar6[9] = 0;
    plVar6[8] = 0;
    plVar6[0xb] = 0;
    plVar6[10] = 0;
    plVar6[0xd] = 0;
    plVar6[0xc] = 0;
    plVar6[0xf] = 0;
    plVar6[0xe] = 0;
    plVar6[0x11] = 0;
    plVar6[0x10] = 0;
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
      do {
        lVar8 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        lVar8 = *plStack_48;
        plStack_48 = plVar6;
        (**(code **)(lVar8 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        plVar6 = plStack_48;
      }
    }
    plStack_48 = plVar6;
    plVar5 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar6 = plStack_38 + 1;
      do {
        lVar8 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    func_0x00010a04a7fc(plStack_50 + 2,&plStack_60);
    lStack_40 = *param_2;
    *param_1 = lStack_40;
    param_1[1] = (long)plStack_48;
    if (plStack_48 == (long *)0x0) {
      plStack_38 = (long *)0x0;
    }
    else {
      plVar5 = plStack_48 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar4) {
          *plVar5 = *plVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plStack_38 = plStack_48;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar4) {
          *plVar5 = *plVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    func_0x00010a053e8c(plStack_50,&lStack_40);
    plVar5 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar6 = plStack_38 + 1;
      do {
        lVar8 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    func_0x00010a053ee8(*param_2,&plStack_50);
    ppuVar7 = &PTR___tlv_bootstrap_11340df48;
    (*(code *)PTR___tlv_bootstrap_11340df48)(*(undefined8 *)(*param_2 + 0x50));
    puVar9 = *ppuVar7;
    if (extraout_x8 != (undefined *)0x0) {
      puVar9 = extraout_x8;
    }
    FUN_10aa89b3c(*(undefined8 *)(puVar9 + 0x870),&plStack_50);
    plVar5 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar6 = plStack_58 + 1;
      do {
        lVar8 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  else {
    FUN_10a053e40(&lStack_40);
    param_1[1] = (long)plStack_38;
    *param_1 = lStack_40;
  }
  plVar5 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar6 = plStack_48 + 1;
    do {
      lVar8 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return;
}



/* Entry: 10a079df8; end: 10a079e13;  */

void FUN_10a079df8(void)

{
  return;
}



/* Entry: 10a079e14; end: 10a079e6b;  */

long FUN_10a079e14(long param_1)

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



/* Entry: 10a079e6c; end: 10a079e7b;  */

void FUN_10a079e6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9e500;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a079e7c; end: 10a079e9b;  */

void FUN_10a079e7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9e500;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a079e9c; end: 10a079eab;  */

void FUN_10a079e9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a079ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a079eac; end: 10a079f53;  */

undefined8 * FUN_10a079eac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9e550;
  (**(code **)param_1[9])();
  FUN_10a07a0f8(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a079f54; end: 10a079fb7;  */

bool FUN_10a079f54(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  
  if (param_3 == 0xc) {
    return *param_2 == 0x624f747069726353 && (int)param_2[1] == 0x7463656a;
  }
  if (param_3 == 0x83) {
    iVar1 = 0xe4914ac;
    _memcmp(&UNK_10e4914ac);
    return iVar1 == 0;
  }
  return false;
}



/* Entry: 10a079fb8; end: 10a07a0d7;  */

void FUN_10a079fb8(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 **ppuStack_38;
  ulong uStack_30;
  undefined7 uStack_28;
  byte bStack_21;
  
  func_0x000107c2b054(param_1,&UNK_10f630f1d);
  uVar1 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  if (uVar1 == 0) {
    func_0x00010989f98c(&ppuStack_38,param_2);
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
    param_1[1] = uStack_30;
    *param_1 = (long)ppuStack_38;
    param_1[2] = CONCAT17(bStack_21,uStack_28);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&UNK_10f685178,7);
  __ZNSt3__19to_stringEm(&ppuStack_38,*(undefined8 *)(param_2 + 0x30));
  pppuVar2 = (undefined8 ***)ppuStack_38;
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
    pppuVar2 = &ppuStack_38;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pppuVar2,uStack_30);
  if ((char)bStack_21 < '\0') {
    __ZdlPv(ppuStack_38);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f684600,1);
  return;
}



/* Entry: 10a07a0d8; end: 10a07a0e7;  */

undefined1  [16] FUN_10a07a0d8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x83;
  auVar1._0_8_ = &UNK_10e4914ac;
  return auVar1;
}



/* Entry: 10a07a0e8; end: 10a07a0f7;  */

long * FUN_10a07a0e8(undefined8 param_1,long *param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  
  func_0x000105277f8c();
  plVar1 = (long *)param_2[2];
  while( true ) {
    if (plVar1 == (long *)0x0) {
      lVar3 = *param_2;
      *param_2 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      return param_2;
    }
    if (3 < (ulong)*(byte *)(plVar1 + 0xc)) break;
    lVar3 = *plVar1;
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(plVar1 + 0xc)])(plVar1 + 4);
    FUN_10a004978(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a07a178);
  (*pcVar2)();
}



/* Entry: 10a07a0f8; end: 10a07a177;  */

long * FUN_10a07a0f8(long *param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[2];
  while( true ) {
    if (plVar1 == (long *)0x0) {
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    if (3 < (ulong)*(byte *)(plVar1 + 0xc)) break;
    lVar3 = *plVar1;
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(plVar1 + 0xc)])(plVar1 + 4);
    FUN_10a004978(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a07a178);
  (*pcVar2)();
}



/* Entry: 10a07a178; end: 10a07a353;  */

void FUN_10a07a178(undefined8 *param_1,undefined8 param_2,int *param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  int aiStack_a0 [2];
  undefined8 *puStack_98;
  undefined1 auStack_90 [16];
  int aiStack_80 [2];
  double dStack_78;
  undefined8 **ppuStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined1 **ppuStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  func_0x000109884c0c(&ppuStack_70,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_a8,&ppuStack_70,*param_1);
  if (ppuStack_70 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_70)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_b0);
  plVar2 = (long *)*param_1;
  FUN_10a07a354(auStack_90,plVar2,param_2);
  aiStack_80[0] = 3;
  dStack_78 = (double)*param_3;
  uStack_48 = 2;
  puStack_50 = auStack_90;
  (**(code **)(*plVar2 + 0x58))(plVar2);
  ppuStack_70 = &puStack_a8;
  ppuStack_58 = &puStack_50;
  plStack_68 = plVar2;
  puStack_60 = (undefined1 *)&puStack_b0;
  func_0x0001098960c0(aiStack_a0);
  if ((3 < aiStack_a0[0]) && (puStack_98 != (undefined8 *)0x0)) {
    (**(code **)*puStack_98)();
  }
  lVar1 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_80 + lVar1)) &&
       (*(undefined8 **)((long)&dStack_78 + lVar1) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&dStack_78 + lVar1))();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != -0x20);
  if (puStack_b0 != (undefined8 *)0x0) {
    (**(code **)*puStack_b0)();
  }
  if (puStack_a8 != (undefined8 *)0x0) {
    (**(code **)*puStack_a8)();
  }
  return;
}



/* Entry: 10a07a354; end: 10a07a40b;  */

void FUN_10a07a354(undefined8 param_1,long *param_2,long *param_3)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long *plStack_40;
  long *plStack_38;
  
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((*(byte *)(plVar2 + 0x3c) & 1) != 0) {
    plStack_40 = (long *)plVar2[4];
    if (plStack_40 == (long *)0x0) {
      func_0x000109899fd8(plVar2);
      plStack_40 = (long *)plVar2[4];
    }
    plVar2[4] = *plStack_40;
    plStack_40[1] = 0;
    plStack_40[2] = 0;
    *plStack_40 = (long)&PTR_FUN_110b9fbe8;
    lVar3 = *param_3;
    plStack_40[2] = param_3[1];
    plStack_40[1] = lVar3;
    plStack_38 = plVar2;
    FUN_10a07a40c(param_1,param_2,&plStack_40);
    plVar2 = plStack_40;
    plStack_40 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plStack_38);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a07a408);
  (*pcVar1)();
}



/* Entry: 10a07a40c; end: 10a07a4ef;  */

void FUN_10a07a40c(undefined4 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  int aiStack_50 [2];
  long *plStack_48;
  
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x58))();
  uVar5 = *param_3;
  *param_3 = 0;
  plVar3 = plVar2;
  FUN_10a065534();
  if (plVar3 == (long *)0x0) {
    if ((*(byte *)(plVar2 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a07a4f0);
      (*pcVar1)();
    }
    plVar3 = plVar2 + 0x1b;
  }
  aiStack_50[0] = 7;
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x98))(param_2,*plVar3);
  plStack_48 = plVar4;
  (**(code **)(*param_2 + 0x2f8))(param_1 + 2,param_2,uVar5,plVar2,&UNK_10989ba24,aiStack_50);
  *param_1 = 7;
  if ((3 < aiStack_50[0]) && (plStack_48 != (long *)0x0)) {
    (**(code **)*plStack_48)();
  }
  return;
}



/* Entry: 10a07a4f0; end: 10a07a537;  */

void FUN_10a07a4f0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  int aiStack_a0 [2];
  undefined8 *puStack_98;
  undefined1 auStack_90 [16];
  int aiStack_80 [2];
  double dStack_78;
  undefined8 **ppuStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined1 **ppuStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_70,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_a8,&ppuStack_70,*puVar1);
  if (ppuStack_70 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_70)();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_b0);
  plVar3 = (long *)*puVar1;
  FUN_10a07a354(auStack_90,plVar3,param_1 + 0x20);
  aiStack_80[0] = 3;
  dStack_78 = (double)*(int *)(param_1 + 0x30);
  uStack_48 = 2;
  puStack_50 = auStack_90;
  (**(code **)(*plVar3 + 0x58))(plVar3);
  ppuStack_70 = &puStack_a8;
  ppuStack_58 = &puStack_50;
  plStack_68 = plVar3;
  puStack_60 = (undefined1 *)&puStack_b0;
  func_0x0001098960c0(aiStack_a0);
  if ((3 < aiStack_a0[0]) && (puStack_98 != (undefined8 *)0x0)) {
    (**(code **)*puStack_98)();
  }
  lVar2 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_80 + lVar2)) &&
       (*(undefined8 **)((long)&dStack_78 + lVar2) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&dStack_78 + lVar2))();
    }
    lVar2 = lVar2 + -0x10;
  } while (lVar2 != -0x20);
  if (puStack_b0 != (undefined8 *)0x0) {
    (**(code **)*puStack_b0)();
  }
  if (puStack_a8 != (undefined8 *)0x0) {
    (**(code **)*puStack_a8)();
  }
  return;
}



/* Entry: 10a07a538; end: 10a07a58f;  */

long FUN_10a07a538(long param_1)

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



/* Entry: 10a07a590; end: 10a07a59f;  */

void FUN_10a07a590(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9e5c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a07a5a0; end: 10a07a5bf;  */

void FUN_10a07a5a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9e5c0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a07a5c0; end: 10a07a5cf;  */

void FUN_10a07a5c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a07a5c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a07a5d0; end: 10a07a75f;  */

void FUN_10a07a5d0(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar1 = (long *)*param_1;
  FUN_10a07a760(aiStack_70,plVar1,param_2);
  uStack_38 = 1;
  piStack_40 = aiStack_70;
  (**(code **)(*plVar1 + 0x58))(plVar1);
  ppuStack_60 = &puStack_88;
  ppuStack_48 = &piStack_40;
  plStack_58 = plVar1;
  puStack_50 = (undefined1 *)&puStack_90;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a07a760; end: 10a07a7fb;  */

void FUN_10a07a760(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined **ppuStack_38;
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
  ppuStack_38 = &PTR_DAT_110b9f038;
  func_0x000109899de4(param_1,&uStack_30,&ppuStack_38,0,0);
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
  return;
}



/* Entry: 10a07a7fc; end: 10a07a80b;  */

void FUN_10a07a7fc(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_90);
  plVar2 = (long *)*puVar1;
  FUN_10a07a760(aiStack_70,plVar2,param_1 + 0x20);
  uStack_38 = 1;
  piStack_40 = aiStack_70;
  (**(code **)(*plVar2 + 0x58))(plVar2);
  ppuStack_60 = &puStack_88;
  ppuStack_48 = &piStack_40;
  plStack_58 = plVar2;
  puStack_50 = (undefined1 *)&puStack_90;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a07a80c; end: 10a07a833;  */

long FUN_10a07a80c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a07a538(param_1 + 0x18);
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



/* Entry: 10a07a834; end: 10a07a873;  */

void FUN_10a07a834(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110b9e600;
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar5;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar4 = *(long *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar5;
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



/* Entry: 10a07a874; end: 10a07a8ff;  */

undefined1  [16] FUN_10a07a874(ulong param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_1 >> 0x3d == 0) {
    lVar4 = param_1 << 3;
    __Znwm(lVar4);
    auVar6._8_8_ = param_1;
    auVar6._0_8_ = lVar4;
    return auVar6;
  }
  func_0x000109ffded8();
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
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = param_1;
  return auVar7;
}



/* Entry: 10a07a900; end: 10a07a90f;  */

void FUN_10a07a900(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9e628;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a07a910; end: 10a07a92f;  */

void FUN_10a07a910(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9e628;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a07a930; end: 10a07a93f;  */

void FUN_10a07a930(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a07a938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a07a940; end: 10a07a9ab;  */

void FUN_10a07a940(long param_1,undefined8 param_2)

{
  FUN_10a07a9ac(param_1,param_2,*(undefined8 *)(param_1 + 8),(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10a07a9ac; end: 10a07a9f3;  */

long FUN_10a07a9ac(undefined8 param_1,int *param_2,long param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_3 != 0) {
    lVar2 = param_4;
    do {
      uVar3 = 0xff;
      if (*param_2 <= *(int *)(param_3 + 0x20)) {
        uVar3 = 0;
      }
      if (*(int *)(param_3 + 0x20) == *param_2) {
        uVar1 = 0xff;
        if (param_2[1] <= *(int *)(param_3 + 0x24)) {
          uVar1 = 0;
        }
        uVar3 = 0;
        if (*(int *)(param_3 + 0x24) != param_2[1]) {
          uVar3 = uVar1;
        }
      }
      param_4 = param_3;
      if ((uVar3 & 0x80) != 0) {
        param_4 = lVar2;
      }
      param_3 = *(long *)(param_3 + ((uVar3 & 0x80) >> 4));
      lVar2 = param_4;
    } while (param_3 != 0);
  }
  return param_4;
}



/* Entry: 10a07a9f4; end: 10a07aa9f;  */

undefined1  [16]
FUN_10a07a9f4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_38;
  
  plVar2 = param_1;
  FUN_10a07aaa0(param_1,&uStack_38,param_2);
  lVar4 = *plVar2;
  bVar1 = lVar4 == 0;
  if (bVar1) {
    lVar4 = 0x98;
    __Znwm();
    uVar3 = *(undefined8 *)*param_4;
    *(undefined8 *)(lVar4 + 0x30) = 0;
    *(undefined8 *)(lVar4 + 0x38) = 0;
    *(undefined8 *)(lVar4 + 0x20) = uVar3;
    *(undefined ***)(lVar4 + 0x28) = &PTR_DAT_110b9f078;
    *(undefined1 *)(lVar4 + 0x40) = 0;
    *(undefined8 *)(lVar4 + 0x90) = 0;
    *(undefined8 *)(lVar4 + 0x88) = 0;
    *(undefined8 *)(lVar4 + 0x80) = 0;
    *(undefined8 *)(lVar4 + 0x78) = 0;
    *(undefined8 *)(lVar4 + 0x70) = 0;
    *(undefined8 *)(lVar4 + 0x68) = 0;
    *(undefined8 *)(lVar4 + 0x60) = 0;
    *(undefined8 *)(lVar4 + 0x58) = 0;
    *(undefined8 *)(lVar4 + 0x50) = 0;
    *(undefined8 *)(lVar4 + 0x48) = 0;
    FUN_10a07ab1c(param_1,uStack_38,plVar2,lVar4);
  }
  auVar5[8] = bVar1;
  auVar5._0_8_ = lVar4;
  auVar5._9_7_ = 0;
  return auVar5;
}



/* Entry: 10a07aaa0; end: 10a07ab1b;  */

long * FUN_10a07aaa0(long param_1,long *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  plVar5 = (long *)(param_1 + 8);
  plVar6 = plVar5;
  if ((long *)*plVar5 != (long *)0x0) {
    iVar1 = *param_3;
    iVar2 = param_3[1];
    plVar4 = (long *)*plVar5;
    do {
      while (plVar6 = plVar4, iVar3 = (int)plVar6[4], iVar1 == iVar3) {
        iVar3 = *(int *)((long)plVar6 + 0x24);
        if (iVar3 <= iVar2) {
          if (iVar3 != iVar2 && iVar3 < iVar2) goto LAB_10a07ab00;
          goto LAB_10a07ab14;
        }
LAB_10a07aae4:
        plVar5 = plVar6;
        plVar4 = (long *)*plVar6;
        if ((long *)*plVar6 == (long *)0x0) goto LAB_10a07ab14;
      }
      if (iVar1 < iVar3) goto LAB_10a07aae4;
      if (iVar1 <= iVar3) break;
LAB_10a07ab00:
      plVar5 = plVar6 + 1;
      plVar4 = (long *)*plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
  }
LAB_10a07ab14:
  *param_2 = (long)plVar6;
  return plVar5;
}



/* Entry: 10a07ab1c; end: 10a07ab6f;  */

void FUN_10a07ab1c(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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



/* Entry: 10a07ab70; end: 10a07ac2b;  */

void FUN_10a07ab70(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  undefined8 uVar14;
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
  FUN_10a07ac2c(param_2,param_3);
  FUN_10a052e3c(param_5);
  *param_1 = 3;
  uVar14 = NEON_ucvtf((ulong)*(byte *)(param_2 + 3));
  *(undefined8 *)(param_1 + 2) = uVar14;
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



/* Entry: 10a07ac2c; end: 10a07ac93;  */

void FUN_10a07ac2c(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  code *pcVar2;
  long lVar3;
  undefined **ppuVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  undefined8 *in_stack_ffffffffffffff80;
  
  ppuVar4 = param_1;
  func_0x000109898688();
  if (ppuVar4 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar4);
    param_2 = ppuVar4;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar5 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar6 = plVar5;
  (**(code **)(*plVar5 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = plVar5;
  FUN_10a07ac2c(plVar5,param_2);
  FUN_10a052e3c(param_4);
  cVar1 = (char)plVar7[7];
  if (cVar1 == '\x04') {
    func_0x00010988bd28(&UNK_10f634b57);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a07ae88);
    (*pcVar2)();
  }
  if (cVar1 == '\0') {
    FUN_10a07aef4(extraout_x8,plVar5,plVar7 + 4);
  }
  else {
    lVar8 = plVar7[4];
    lVar13 = plVar7[5];
    if (cVar1 == '\x01') {
      FUN_10a07b090(extraout_x8,plVar5,lVar8,lVar13 - lVar8 >> 3);
    }
    else if (cVar1 == '\x02') {
      FUN_10a07b1a0(extraout_x8,plVar5,lVar8,(lVar13 - lVar8 >> 3) * -0x5555555555555555);
    }
    else {
      lVar11 = (lVar13 - lVar8 >> 3) * -0x5555555555555555;
      (**(code **)(*plVar5 + 600))(&plStack_88,plVar5,lVar11);
      plVar7 = plStack_88;
      if (lVar13 != lVar8) {
        lVar13 = 0;
        plVar15 = (long *)(lVar8 + 8);
        do {
          FUN_10a07b1a0(&plStack_88,plVar5,plVar15[-1],
                        (*plVar15 - plVar15[-1] >> 3) * -0x5555555555555555);
          (**(code **)(*plVar5 + 0x290))(plVar5,&stack0xffffffffffffff88,lVar13,&plStack_88);
          if ((3 < (int)plStack_88) && (in_stack_ffffffffffffff80 != (undefined8 *)0x0)) {
            (**(code **)*in_stack_ffffffffffffff80)();
          }
          plVar15 = plVar15 + 3;
          lVar13 = lVar13 + 1;
        } while (lVar11 - lVar13 != 0);
      }
      *extraout_x8 = 7;
      *(long **)(extraout_x8 + 2) = plVar7;
    }
  }
  plVar5 = plVar6 + 0x4b;
  lVar8 = plVar6[0x59];
  uVar9 = lVar8 - 1;
  plVar6[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar5[lVar8 + 2];
    if (plVar6[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar9) {
      return;
    }
  }
  lVar8 = *plVar5;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar16 = lVar11 >> 4;
  if (uVar16 < uVar9) {
    uVar17 = uVar9 - uVar16;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar17) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar14 - lVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_88 = plVar5;
        if (uVar10 >> 0x3c == 0) {
          lVar3 = uVar10 << 4;
          __Znwm();
          lVar13 = lVar3 + lVar11;
          _bzero(lVar13,uVar17 * 0x10);
          lVar12 = lVar13 + uVar16 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar5 = lVar12;
          plVar6[0x4c] = lVar13 + uVar17 * 0x10;
          plVar6[0x4d] = lVar3 + uVar10 * 0x10;
          lStack_a8 = lVar8;
          lStack_a0 = lVar8;
          lStack_98 = lVar8;
          lStack_90 = lVar14;
          func_0x00010988c1b8(&lStack_a8);
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
    _bzero(lVar13,uVar17 * 0x10);
    plVar6[0x4c] = lVar13 + uVar17 * 0x10;
  }
  else if (uVar9 < uVar16) {
    lVar8 = lVar8 + uVar9 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar9;
  return;
}



/* Entry: 10a07ac94; end: 10a07aef3;  */

void FUN_10a07ac94(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 *in_stack_ffffffffffffffa0;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = param_2;
  FUN_10a07ac2c(param_2,param_3);
  FUN_10a052e3c(param_5);
  cVar1 = (char)plVar5[7];
  if (cVar1 == '\x04') {
    func_0x00010988bd28(&UNK_10f634b57);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a07ae88);
    (*pcVar2)();
  }
  if (cVar1 == '\0') {
    FUN_10a07aef4(param_1,param_2,plVar5 + 4);
  }
  else {
    lVar6 = plVar5[4];
    lVar11 = plVar5[5];
    if (cVar1 == '\x01') {
      FUN_10a07b090(param_1,param_2,lVar6,lVar11 - lVar6 >> 3);
    }
    else if (cVar1 == '\x02') {
      FUN_10a07b1a0(param_1,param_2,lVar6,(lVar11 - lVar6 >> 3) * -0x5555555555555555);
    }
    else {
      lVar9 = (lVar11 - lVar6 >> 3) * -0x5555555555555555;
      (**(code **)(*param_2 + 600))(&plStack_68,param_2,lVar9);
      plVar5 = plStack_68;
      if (lVar11 != lVar6) {
        lVar11 = 0;
        plVar13 = (long *)(lVar6 + 8);
        do {
          FUN_10a07b1a0(&plStack_68,param_2,plVar13[-1],
                        (*plVar13 - plVar13[-1] >> 3) * -0x5555555555555555);
          (**(code **)(*param_2 + 0x290))(param_2,&stack0xffffffffffffffa8,lVar11,&plStack_68);
          if ((3 < (int)plStack_68) && (in_stack_ffffffffffffffa0 != (undefined8 *)0x0)) {
            (**(code **)*in_stack_ffffffffffffffa0)();
          }
          plVar13 = plVar13 + 3;
          lVar11 = lVar11 + 1;
        } while (lVar9 - lVar11 != 0);
      }
      *param_1 = 7;
      *(long **)(param_1 + 2) = plVar5;
    }
  }
  plVar5 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar5[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar5;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar14 = lVar9 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar5;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar15 * 0x10);
          lVar10 = lVar11 + uVar14 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar5 = lVar10;
          plVar4[0x4c] = lVar11 + uVar15 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
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
    _bzero(lVar11,uVar15 * 0x10);
    plVar4[0x4c] = lVar11 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10a07aef4; end: 10a07afab;  */

void FUN_10a07aef4(undefined8 param_1,long *param_2,long *param_3)

{
  code *pcVar1;
  long *plVar2;
  long *plStack_40;
  long *plStack_38;
  
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((*(byte *)(plVar2 + 0x3c) & 1) != 0) {
    plStack_40 = (long *)plVar2[4];
    if (plStack_40 == (long *)0x0) {
      func_0x000109899fd8(plVar2);
      plStack_40 = (long *)plVar2[4];
    }
    plVar2[4] = *plStack_40;
    plStack_40[1] = 0;
    plStack_40[2] = 0;
    *plStack_40 = (long)&PTR_FUN_110b9fae8;
    plStack_40[1] = *param_3;
    plStack_38 = plVar2;
    FUN_10a07afac(param_1,param_2,&plStack_40);
    plVar2 = plStack_40;
    plStack_40 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plStack_38);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a07afa8);
  (*pcVar1)();
}



/* Entry: 10a07afac; end: 10a07b08f;  */

void FUN_10a07afac(undefined4 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  int aiStack_50 [2];
  long *plStack_48;
  
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x58))();
  uVar5 = *param_3;
  *param_3 = 0;
  plVar3 = plVar2;
  FUN_10a065534();
  if (plVar3 == (long *)0x0) {
    if ((*(byte *)(plVar2 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a07b090);
      (*pcVar1)();
    }
    plVar3 = plVar2 + 0x1b;
  }
  aiStack_50[0] = 7;
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x98))(param_2,*plVar3);
  plStack_48 = plVar4;
  (**(code **)(*param_2 + 0x2f8))(param_1 + 2,param_2,uVar5,plVar2,&UNK_10989ba24,aiStack_50);
  *param_1 = 7;
  if ((3 < aiStack_50[0]) && (plStack_48 != (long *)0x0)) {
    (**(code **)*plStack_48)();
  }
  return;
}



/* Entry: 10a07b090; end: 10a07b19f;  */

void FUN_10a07b090(undefined4 *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  int iStack_58;
  undefined4 uStack_54;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  (**(code **)(*param_2 + 600))(&iStack_58,param_2,param_4);
  uStack_48 = CONCAT44(uStack_54,iStack_58);
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_10a07aef4(&iStack_58,param_2,param_3);
      (**(code **)(*param_2 + 0x290))(param_2,&uStack_48,lVar1,&iStack_58);
      if ((3 < iStack_58) && (puStack_50 != (undefined8 *)0x0)) {
        (**(code **)*puStack_50)();
      }
      lVar1 = lVar1 + 1;
      param_3 = param_3 + 8;
    } while (param_4 != lVar1);
  }
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = uStack_48;
  return;
}



/* Entry: 10a07b1a0; end: 10a07b2c7;  */

void FUN_10a07b1a0(undefined4 *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  int iStack_58;
  undefined4 uStack_54;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  (**(code **)(*param_2 + 600))(&iStack_58,param_2,param_4);
  uStack_48 = CONCAT44(uStack_54,iStack_58);
  if (param_4 != 0) {
    lVar1 = 0;
    plVar2 = (long *)(param_3 + 8);
    do {
      FUN_10a07b090(&iStack_58,param_2,plVar2[-1],*plVar2 - plVar2[-1] >> 3);
      (**(code **)(*param_2 + 0x290))(param_2,&uStack_48,lVar1,&iStack_58);
      if ((3 < iStack_58) && (puStack_50 != (undefined8 *)0x0)) {
        (**(code **)*puStack_50)();
      }
      plVar2 = plVar2 + 3;
      lVar1 = lVar1 + 1;
    } while (param_4 != lVar1);
  }
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = uStack_48;
  return;
}



/* Entry: 10a07b2c8; end: 10a07b37f;  */

void FUN_10a07b2c8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
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
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a07ac2c(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a07b380(param_1,param_2,plVar4 + 8);
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a07b380; end: 10a07b513;  */

void FUN_10a07b380(undefined4 *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int iStack_68;
  undefined4 uStack_64;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  
  (**(code **)(*param_2 + 0x148))(&iStack_68);
  uStack_50 = CONCAT44(uStack_64,iStack_68);
  for (plVar5 = *(long **)(param_3 + 0x10); plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
    uVar1 = plVar5[3];
    puVar2 = (undefined8 *)plVar5[2];
    if (-1 < (char)*(byte *)((long)plVar5 + 0x27)) {
      uVar1 = (ulong)*(byte *)((long)plVar5 + 0x27);
      puVar2 = plVar5 + 2;
    }
    (**(code **)(*param_2 + 0xb8))(&puStack_58,param_2,puVar2,uVar1);
    lVar4 = (long)*(char *)((long)plVar5 + 0x3f);
    if (lVar4 < 0) {
      lVar3 = plVar5[5];
      lVar4 = plVar5[6];
    }
    else {
      lVar3 = (long)(plVar5 + 5);
    }
    (**(code **)(*param_2 + 0x128))(&puStack_48,param_2,lVar3,lVar4);
    iStack_68 = 6;
    puStack_60 = puStack_48;
    (**(code **)(*param_2 + 0x1d0))(param_2,&uStack_50,&puStack_58,&iStack_68);
    if ((3 < iStack_68) && (puStack_60 != (undefined8 *)0x0)) {
      (**(code **)*puStack_60)();
    }
    if (puStack_58 != (undefined8 *)0x0) {
      (**(code **)*puStack_58)();
    }
  }
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = uStack_50;
  return;
}



/* Entry: 10a07b514; end: 10a07b5f3;  */

void FUN_10a07b514(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
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
  plVar5 = param_2;
  FUN_10a07ac2c(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar7 = plVar5[0xe];
  plVar1 = (long *)plVar5[0xd];
  if (-1 < (char)*(byte *)((long)plVar5 + 0x7f)) {
    uVar7 = (ulong)*(byte *)((long)plVar5 + 0x7f);
    plVar1 = plVar5 + 0xd;
  }
  (**(code **)(*param_2 + 0x128))(param_1 + 2,param_2,plVar1,uVar7);
  *param_1 = 6;
  plVar1 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
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
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10a07b5f4; end: 10a07b603;  */

void FUN_10a07b5f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9e678;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a07b604; end: 10a07b623;  */

void FUN_10a07b604(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9e678;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a07b624; end: 10a07b633;  */

void FUN_10a07b624(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a07b62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a07b634; end: 10a07b6ab;  */

void FUN_10a07b634(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a0507f0(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 10a07b6ac; end: 10a07b72f;  */

void FUN_10a07b6ac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a0509a4(param_1,param_4);
    lVar1 = param_1;
    FUN_10a07b730(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a07b730; end: 10a07b7db;  */

undefined8 * FUN_10a07b730(undefined8 param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  uStack_48 = 0;
  puStack_40 = param_4;
  uStack_60 = param_1;
  for (; puStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 3) {
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    FUN_10a07b634(param_4,*param_2,param_2[1],param_2[1] - *param_2 >> 3);
    param_4 = puStack_38 + 3;
  }
  uStack_48 = 1;
  FUN_10a07b7dc(&uStack_60);
  return param_4;
}



/* Entry: 10a07b7dc; end: 10a07b80f;  */

long FUN_10a07b7dc(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10a07b810(param_1);
  }
  return param_1;
}



/* Entry: 10a07b810; end: 10a07b85b;  */

void FUN_10a07b810(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)**(undefined8 **)(param_1 + 8);
  plVar3 = (long *)**(long **)(param_1 + 0x10);
  while (plVar1 = plVar3, plVar1 != plVar2) {
    plVar3 = plVar1 + -3;
    if (*plVar3 != 0) {
      plVar1[-2] = *plVar3;
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 10a07b85c; end: 10a07b8bb;  */

long FUN_10a07b85c(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar1 = **(long **)(param_1 + 8);
    lVar2 = **(long **)(param_1 + 0x10);
    while (lVar2 != lVar1) {
      lVar2 = lVar2 + -0x18;
      lStack_38 = lVar2;
      func_0x00010a050870(&lStack_38);
    }
  }
  return param_1;
}



/* Entry: 10a07b8bc; end: 10a07b913;  */

long FUN_10a07b8bc(long param_1)

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



/* Entry: 10a07b914; end: 10a07be4b;  */

/* WARNING: Possible PIC construction at 0x00010a07be40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a07be44) */
/* WARNING: Removing unreachable block (ram,0x00010a07be64) */
/* WARNING: Removing unreachable block (ram,0x00010a07be74) */
/* WARNING: Removing unreachable block (ram,0x00010a07be9c) */
/* WARNING: Removing unreachable block (ram,0x00010a07bea8) */
/* WARNING: Removing unreachable block (ram,0x00010a07bec0) */
/* WARNING: Removing unreachable block (ram,0x00010a07bf00) */
/* WARNING: Removing unreachable block (ram,0x00010a07bfa4) */
/* WARNING: Removing unreachable block (ram,0x00010a07bf10) */
/* WARNING: Removing unreachable block (ram,0x00010a07bf24) */
/* WARNING: Removing unreachable block (ram,0x00010a07bf44) */
/* WARNING: Removing unreachable block (ram,0x00010a07bf50) */
/* WARNING: Removing unreachable block (ram,0x00010a07bf5c) */
/* WARNING: Removing unreachable block (ram,0x00010a07bf60) */
/* WARNING: Removing unreachable block (ram,0x00010a07bf68) */
/* WARNING: Removing unreachable block (ram,0x00010a07bf70) */
/* WARNING: Removing unreachable block (ram,0x00010a07bf74) */
/* WARNING: Removing unreachable block (ram,0x00010a07bf8c) */
/* WARNING: Removing unreachable block (ram,0x00010a07bfb0) */
/* WARNING: Removing unreachable block (ram,0x00010a07bef8) */
/* WARNING: Removing unreachable block (ram,0x00010a07bf94) */
/* WARNING: Removing unreachable block (ram,0x00010a07bebc) */
/* WARNING: Removing unreachable block (ram,0x00010a07be90) */

void FUN_10a07b914(undefined4 *param_1,undefined ******param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined ******ppppppuVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  undefined ******ppppppuVar8;
  undefined ******ppppppuVar9;
  undefined ******ppppppuVar10;
  undefined *****pppppuVar11;
  undefined ******ppppppuVar12;
  undefined ******ppppppuVar13;
  undefined *****pppppuVar14;
  undefined *****pppppuVar15;
  undefined ******unaff_x19;
  undefined ******unaff_x20;
  undefined ******unaff_x21;
  long lVar16;
  undefined ******unaff_x22;
  undefined ******unaff_x23;
  undefined *****pppppuVar17;
  undefined ******unaff_x24;
  undefined ******ppppppuVar18;
  undefined *****pppppuVar19;
  undefined ******unaff_x25;
  ulong uVar20;
  undefined ******unaff_x26;
  undefined ******ppppppuVar21;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_180 [8];
  undefined *****pppppuStack_178;
  undefined *****pppppuStack_170;
  undefined *****pppppuStack_168;
  undefined *****pppppuStack_160;
  undefined *****pppppuStack_158;
  undefined *****pppppuStack_150;
  undefined *****pppppuStack_148;
  undefined8 uStack_140;
  char cStack_131;
  undefined *****pppppuStack_130;
  undefined **ppuStack_128;
  undefined *****pppppuStack_120;
  undefined *****pppppuStack_f0;
  undefined ****ppppuStack_e8;
  undefined ****ppppuStack_e0;
  undefined ****ppppuStack_d8;
  byte bStack_b0;
  undefined *****pppppuStack_a8;
  undefined ****ppppuStack_a0;
  undefined *****pppppuStack_98;
  undefined *****pppppuStack_90;
  long lStack_68;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppuVar8 = param_2;
  (*(code *)(*param_2)[0xb])();
  if (ppppppuVar8[0x59] < (undefined *****)0x8) {
    ppppppuVar8[(long)ppppppuVar8[0x59] + 0x4e] = ppppppuVar8[0x5a];
    ppppppuVar8[0x59] = (undefined *****)((long)ppppppuVar8[0x59] + 1);
  }
  else {
    func_0x00010988bfcc(ppppppuVar8 + 0x4b);
  }
  ppppppuVar9 = param_2;
  FUN_10a07be4c(param_2,param_3);
  FUN_10a07beb4(param_5);
  FUN_10a07bed8(&pppppuStack_168,param_2,param_4);
  if (*(int *)(param_4 + 0x10) == 7) {
    ppppppuVar10 = param_2;
    (*(code *)(*param_2)[0x13])(param_2,*(undefined8 *)(param_4 + 0x18));
    ppppppuVar12 = param_2;
    pppppuStack_130 = (undefined *****)ppppppuVar10;
    (*(code *)(*param_2)[0x45])(param_2,&pppppuStack_130);
    if ((int)ppppppuVar12 != 0) {
      ppppppuVar10 = param_2;
      (*(code *)(*param_2)[0xb])();
      pppppuVar11 = ppppppuVar10[0x48];
      if ((pppppuVar11 == (undefined *****)0x0) ||
         (___dynamic_cast(pppppuVar11,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0),
         pppppuVar14 = pppppuStack_130, pppppuVar11 == (undefined *****)0x0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10a07bda0;
      }
      pppppuStack_130 = (undefined *****)0x0;
      ppppuStack_a0 = (undefined ****)CONCAT44(ppppuStack_a0._4_4_,7);
      pppppuStack_98 = pppppuVar14;
      pppppuStack_a8 = (undefined *****)param_2;
      FUN_10a688ac0(&pppppuStack_f0,&pppppuStack_a8,pppppuVar11[1]);
      if ((3 < (int)ppppuStack_a0) && ((undefined ******)pppppuStack_98 != (undefined ******)0x0)) {
        (*(code *)**pppppuStack_98)();
      }
    }
    if ((undefined ******)pppppuStack_130 != (undefined ******)0x0) {
      (*(code *)**pppppuStack_130)();
    }
    if (((ulong)ppppppuVar12 & 1) != 0) {
      ppppppuVar12 = (undefined ******)0x60;
      __Znwm();
      ppppppuVar10 = ppppppuVar12 + 1;
      *ppppppuVar10 = (undefined *****)0x0;
      ppppppuVar12[2] = (undefined *****)0x0;
      *ppppppuVar12 = (undefined *****)&PTR_FUN_110b9e6c8;
      ppppppuVar21 = ppppppuVar12 + 3;
      ppppppuVar12[4] = (undefined *****)ppppuStack_e8;
      *ppppppuVar21 = pppppuStack_f0;
      if ((undefined *****)ppppuStack_e8 != (undefined *****)0x0) {
        pppppuVar11 = (undefined *****)(ppppuStack_e8 + 1);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppppuVar11,0x10);
          if (bVar5) {
            *pppppuVar11 = (undefined ****)((long)*pppppuVar11 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      ppppppuVar12[6] = (undefined *****)ppppuStack_d8;
      ppppppuVar12[5] = (undefined *****)ppppuStack_e0;
      if ((undefined *****)ppppuStack_d8 != (undefined *****)0x0) {
        pppppuVar11 = (undefined *****)(ppppuStack_d8 + 2);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppppuVar11,0x10);
          if (bVar5) {
            *pppppuVar11 = (undefined ****)((long)*pppppuVar11 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      *(undefined1 *)(ppppppuVar12 + 0xb) = 2;
      pppppuStack_178 = (undefined *****)ppppppuVar21;
      pppppuStack_170 = (undefined *****)ppppppuVar12;
      FUN_10a688c1c(&pppppuStack_f0);
      pppppuVar11 = pppppuStack_160;
      ppppppuVar18 = (undefined ******)pppppuStack_168;
      pppppuStack_158 = pppppuStack_168;
      pppppuStack_150 = pppppuStack_160;
      pppppuStack_168 = (undefined *****)0x0;
      pppppuStack_160 = (undefined *****)0x0;
      FUN_10a039d00(&pppppuStack_148,*(undefined1 *)(ppppppuVar18 + 7));
      ppppppuVar13 = ppppppuVar18;
      FUN_10a039d7c(ppppppuVar18,uStack_140,cStack_131);
      if (((ulong)ppppppuVar13 & 1) != 0) {
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar10,0x10);
          if (bVar5) {
            *ppppppuVar10 = (undefined *****)((long)*ppppppuVar10 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        pppppuStack_a8 = (undefined *****)FUN_10a07dd20;
        ppppuStack_a0 = (undefined ****)&PTR_DAT_110b9e788;
        ppppppuVar18 = &pppppuStack_a8;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar10,0x10);
          if (bVar5) {
            *ppppppuVar10 = (undefined *****)((long)*ppppppuVar10 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        do {
          pppppuVar14 = *ppppppuVar10;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar10,0x10);
          if (bVar5) {
            *ppppppuVar10 = (undefined *****)((long)pppppuVar14 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        pppppuStack_98 = (undefined *****)ppppppuVar21;
        pppppuStack_90 = (undefined *****)ppppppuVar12;
        if (pppppuVar14 == (undefined *****)0x0) {
          (*(code *)(*ppppppuVar12)[2])(ppppppuVar12);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar12);
        }
        ppppppuVar12 = (undefined ******)ppppppuVar9[3][0x12e];
        bStack_b0 = 2;
        pppppuStack_f0 = pppppuStack_a8;
        (*(code *)ppppuStack_a0[3])(&ppppuStack_e8,&ppppuStack_a0);
        bStack_b0 = 0;
        ppppppuVar10 = &pppppuStack_130;
        pppppuStack_130 = (undefined *****)FUN_10a07e4ec;
        ppuStack_128 = &PTR_FUN_110b9e7c0;
        pppppuStack_120 = (undefined *****)ppppppuVar9;
        FUN_10a039e44(ppppppuVar12,&pppppuStack_148,&pppppuStack_158,&pppppuStack_f0,
                      &pppppuStack_130);
        (*(code *)*ppuStack_128)(&ppuStack_128);
        if (2 < (ulong)bStack_b0) goto LAB_10a07bda0;
        (*(code *)(&PTR_DAT_110b9e7a8)[bStack_b0])(&pppppuStack_f0);
        ppppppuVar13 = (undefined ******)&ppppuStack_a0;
        (*(code *)*ppppuStack_a0)();
      }
      if (cStack_131 < '\0') {
        ppppppuVar13 = (undefined ******)pppppuStack_148;
        __ZdlPv();
      }
      if ((undefined ******)pppppuVar11 != (undefined ******)0x0) {
        ppppppuVar9 = (undefined ******)(pppppuVar11 + 1);
        do {
          pppppuVar14 = *ppppppuVar9;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar9,0x10);
          if (bVar5) {
            *ppppppuVar9 = (undefined *****)((long)pppppuVar14 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (pppppuVar14 == (undefined *****)0x0) {
          (*(code *)(*pppppuVar11)[2])(pppppuVar11);
          ppppppuVar13 = (undefined ******)pppppuVar11;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
      ppppppuVar9 = (undefined ******)pppppuStack_170;
      if ((undefined ******)pppppuStack_170 != (undefined ******)0x0) {
        ppppppuVar2 = (undefined ******)(pppppuStack_170 + 1);
        do {
          pppppuVar14 = *ppppppuVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar2,0x10);
          if (bVar5) {
            *ppppppuVar2 = (undefined *****)((long)pppppuVar14 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (pppppuVar14 == (undefined *****)0x0) {
          (*(code *)(*pppppuStack_170)[2])(pppppuStack_170);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppppppuVar13 = ppppppuVar9;
        }
      }
      pppppuVar14 = pppppuStack_160;
      if ((undefined ******)pppppuStack_160 != (undefined ******)0x0) {
        ppppppuVar9 = (undefined ******)(pppppuStack_160 + 1);
        do {
          pppppuVar15 = *ppppppuVar9;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar9,0x10);
          if (bVar5) {
            *ppppppuVar9 = (undefined *****)((long)pppppuVar15 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (pppppuVar15 == (undefined *****)0x0) {
          (*(code *)(*pppppuStack_160)[2])(pppppuStack_160);
          ppppppuVar13 = (undefined ******)pppppuVar14;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
      *param_1 = 0;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
        ___stack_chk_fail();
        (*(code *)*ppuStack_128)(ppppppuVar10 + 1);
        if (2 < (ulong)bStack_b0) goto LAB_10a07bda0;
        (*(code *)(&PTR_DAT_110b9e7a8)[bStack_b0])(&pppppuStack_f0);
        (*(code *)*ppppuStack_a0)(ppppppuVar18 + 1);
        if (cStack_131 < '\0') {
          __ZdlPv(pppppuStack_148);
        }
        FUN_10a07c02c(&pppppuStack_158);
        FUN_10a050af8(&pppppuStack_178);
        FUN_10a07c02c(&pppppuStack_168);
        unaff_x30 = 0x10a07be44;
        register0x00000008 = (BADSPACEBASE *)auStack_180;
        unaff_x19 = ppppppuVar8;
        unaff_x20 = ppppppuVar13;
        unaff_x21 = (undefined ******)pppppuVar14;
        unaff_x22 = (undefined ******)pppppuVar11;
        unaff_x23 = ppppppuVar12;
        unaff_x24 = ppppppuVar18;
        unaff_x25 = ppppppuVar10;
        unaff_x26 = ppppppuVar21;
        unaff_x29 = puVar1;
      }
      ppppppuVar9 = ppppppuVar8 + 0x4b;
      pppppuVar11 = ppppppuVar8[0x59];
      pppppuVar14 = (undefined *****)((long)pppppuVar11 + -1);
      ppppppuVar8[0x59] = pppppuVar14;
      if (pppppuVar14 < (undefined *****)0x8) {
        pppppuVar11 = ppppppuVar9[(long)pppppuVar11 + 2];
        if (ppppppuVar8[0x5a] == pppppuVar11) {
          return;
        }
      }
      else {
        pppppuVar11 = (undefined *****)ppppppuVar8[0x57][-1];
        ppppppuVar8[0x57] = ppppppuVar8[0x57] + -1;
        if (ppppppuVar8[0x5a] == pppppuVar11) {
          return;
        }
      }
      *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
      *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
      *(undefined *******)((long)register0x00000008 + -0x50) = unaff_x26;
      *(undefined *******)((long)register0x00000008 + -0x48) = unaff_x25;
      *(undefined *******)((long)register0x00000008 + -0x40) = unaff_x24;
      *(undefined *******)((long)register0x00000008 + -0x38) = unaff_x23;
      *(undefined *******)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined *******)((long)register0x00000008 + -0x28) = unaff_x21;
      *(undefined *******)((long)register0x00000008 + -0x20) = unaff_x20;
      *(undefined *******)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      pppppuVar14 = *ppppppuVar9;
      pppppuVar15 = ppppppuVar8[0x4c];
      lVar16 = (long)pppppuVar15 - (long)pppppuVar14;
      pppppuVar19 = (undefined *****)(lVar16 >> 4);
      if (pppppuVar19 < pppppuVar11) {
        uVar20 = (long)pppppuVar11 - (long)pppppuVar19;
        pppppuVar17 = ppppppuVar8[0x4d];
        if ((ulong)((long)pppppuVar17 - (long)pppppuVar15 >> 4) < uVar20) {
          if ((ulong)pppppuVar11 >> 0x3c == 0) {
            pppppuVar15 = (undefined *****)((long)pppppuVar17 - (long)pppppuVar14 >> 3);
            if (pppppuVar15 <= pppppuVar11) {
              pppppuVar15 = pppppuVar11;
            }
            if (0x7fffffffffffffef < (ulong)((long)pppppuVar17 - (long)pppppuVar14)) {
              pppppuVar15 = (undefined *****)0xfffffffffffffff;
            }
            *(undefined *******)((long)register0x00000008 + -0x68) = ppppppuVar9;
            if ((ulong)pppppuVar15 >> 0x3c == 0) {
              lVar7 = (long)pppppuVar15 << 4;
              __Znwm();
              lVar3 = lVar7 + lVar16;
              _bzero(lVar3,uVar20 * 0x10);
              pppppuVar19 = (undefined *****)(lVar3 + (long)pppppuVar19 * -0x10);
              _memcpy(pppppuVar19,pppppuVar14,lVar16);
              *ppppppuVar9 = pppppuVar19;
              ppppppuVar8[0x4c] = (undefined *****)(lVar3 + uVar20 * 0x10);
              ppppppuVar8[0x4d] = (undefined *****)(lVar7 + (long)pppppuVar15 * 0x10);
              *(undefined ******)((long)register0x00000008 + -0x78) = pppppuVar14;
              *(undefined ******)((long)register0x00000008 + -0x70) = pppppuVar17;
              *(undefined ******)((long)register0x00000008 + -0x88) = pppppuVar14;
              *(undefined ******)((long)register0x00000008 + -0x80) = pppppuVar14;
              func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar6)();
        }
        _bzero(pppppuVar15,uVar20 * 0x10);
        ppppppuVar8[0x4c] = pppppuVar15 + uVar20 * 2;
      }
      else if (pppppuVar11 < pppppuVar19) {
        while (pppppuVar15 != pppppuVar14 + (long)pppppuVar11 * 2) {
          pppppuVar15 = pppppuVar15 + -2;
          func_0x00010988c204(pppppuVar15);
        }
        ppppppuVar8[0x4c] = pppppuVar14 + (long)pppppuVar11 * 2;
      }
code_r0x00010988c138:
      ppppppuVar8[0x5a] = pppppuVar11;
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a07bda0:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a07bda4);
  (*pcVar6)();
}



/* Entry: 10a07be4c; end: 10a07beb3;  */

void FUN_10a07be4c(long param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int *piVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lStack_60;
  long *plStack_58;
  
  lVar6 = param_1;
  func_0x000109898688();
  if (lVar6 != 0) {
    FUN_10a052c2c(param_1,lVar6);
    if ((param_1 != 0) && (___dynamic_cast(), param_1 != 0)) {
      return;
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  piVar4 = (int *)&UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)piVar4 == 2) {
    return;
  }
  plVar5 = (long *)0x2;
  lVar6 = 0;
  FUN_10a052ee0();
  if (*piVar4 != 1) {
    func_0x000109898688(lVar6,piVar4);
    if (lVar6 == 0) {
      func_0x00010988bd28(&UNK_10f68f52e);
    }
    else {
      func_0x00010989879c(&lStack_60);
      plVar7 = plVar5;
      if ((lStack_60 != 0) &&
         (___dynamic_cast(lStack_60,&PTR_DAT_110b178e0,&PTR_DAT_110b9c950,0), lStack_60 != 0)) {
        *plVar5 = lStack_60;
        plVar5[1] = (long)plStack_58;
        plVar7 = &lStack_60;
      }
      *plVar7 = 0;
      plVar7[1] = 0;
      if (plStack_58 != (long *)0x0) {
        plVar7 = plStack_58 + 1;
        do {
          lVar6 = *plVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
        }
      }
      if (*plVar5 != 0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a07bfc0);
    (*pcVar3)();
  }
  *plVar5 = 0;
  plVar5[1] = 0;
  return;
}



/* Entry: 10a07beb4; end: 10a07bed7;  */

void FUN_10a07beb4(int *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lStack_40;
  long *plStack_38;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar4 = (long *)0x2;
  lVar5 = 0;
  FUN_10a052ee0();
  if (*param_1 != 1) {
    func_0x000109898688(lVar5,param_1);
    if (lVar5 == 0) {
      func_0x00010988bd28(&UNK_10f68f52e);
    }
    else {
      func_0x00010989879c(&lStack_40);
      plVar6 = plVar4;
      if ((lStack_40 != 0) &&
         (___dynamic_cast(lStack_40,&PTR_DAT_110b178e0,&PTR_DAT_110b9c950,0), lStack_40 != 0)) {
        *plVar4 = lStack_40;
        plVar4[1] = (long)plStack_38;
        plVar6 = &lStack_40;
      }
      *plVar6 = 0;
      plVar6[1] = 0;
      if (plStack_38 != (long *)0x0) {
        plVar6 = plStack_38 + 1;
        do {
          lVar5 = *plVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
        }
      }
      if (*plVar4 != 0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a07bfc0);
    (*pcVar3)();
  }
  *plVar4 = 0;
  plVar4[1] = 0;
  return;
}



/* Entry: 10a07bed8; end: 10a07bfd3;  */

void FUN_10a07bed8(long *param_1,long param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long lStack_30;
  long *plStack_28;
  
  if (*param_3 == 1) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  func_0x000109898688(param_2,param_3);
  if (param_2 == 0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else {
    func_0x00010989879c(&lStack_30);
    plVar4 = param_1;
    if ((lStack_30 != 0) &&
       (___dynamic_cast(lStack_30,&PTR_DAT_110b178e0,&PTR_DAT_110b9c950,0), lStack_30 != 0)) {
      *param_1 = lStack_30;
      param_1[1] = (long)plStack_28;
      plVar4 = &lStack_30;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    if (plStack_28 != (long *)0x0) {
      plVar4 = plStack_28 + 1;
      do {
        lVar5 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      }
    }
    if (*param_1 != 0) {
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a07bfc0);
  (*pcVar3)();
}



/* Entry: 10a07bfd4; end: 10a07bfe3;  */

void FUN_10a07bfd4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9e6c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a07bfe4; end: 10a07c003;  */

void FUN_10a07bfe4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9e6c8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a07c004; end: 10a07c02b;  */

undefined1  [16] FUN_10a07c004(long param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_38;
  
  bVar2 = *(byte *)(param_1 + 0x58);
  if (3 < (ulong)bVar2) {
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10a07c028);
    (*UNRECOVERED_JUMPTABLE)();
  }
  auVar10._8_8_ = (code **)(&PTR_FUN_110b9a040)[bVar2];
  puVar5 = (undefined8 *)(param_1 + 0x18);
  switch(bVar2) {
  case 0:
    auVar10._0_8_ = puVar5;
    return auVar10;
  case 1:
    puVar5 = (undefined8 *)(param_1 + 0x20);
    UNRECOVERED_JUMPTABLE = *(code **)*puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010a00496c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    auVar11._8_8_ = UNRECOVERED_JUMPTABLE;
    auVar11._0_8_ = puVar5;
    return auVar11;
  case 3:
    auVar12._8_8_ = auVar10._8_8_;
    auVar12._0_8_ = puVar5;
    return auVar12;
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  if (((*ppuVar6 == (undefined *)0x0) &&
      (plVar7 = *(long **)(param_1 + 0x30), plVar7 != (long *)0x0)) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 != (long *)0x0)) {
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x870);
      uStack_60 = *(undefined8 *)(param_1 + 0x20);
      uStack_68 = *puVar5;
      *puVar5 = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      pcStack_78 = FUN_10a69fabc;
      ppuStack_70 = &PTR_DAT_110c0ce80;
      auVar10._8_8_ = &pcStack_78;
      FUN_10a4634ec(uVar8);
      (*(code *)*ppuStack_70)(&ppuStack_70);
    }
    plVar1 = plVar7 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010a004dac(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    auVar13._8_8_ = auVar10._8_8_;
    auVar13._0_8_ = puVar5;
    return auVar13;
  }
  ___stack_chk_fail();
  if ((int)auVar10._8_8_ == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  auVar14._8_8_ = 0x18;
  auVar14._0_8_ = &UNK_10f66c09c;
  return auVar14;
}



/* Entry: 10a07c02c; end: 10a07c083;  */

long FUN_10a07c02c(long param_1)

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



/* Entry: 10a07c084; end: 10a07c4bf;  */

/* WARNING: Possible PIC construction at 0x00010a07c4b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a07c4b8) */
/* WARNING: Removing unreachable block (ram,0x00010a07c4cc) */
/* WARNING: Removing unreachable block (ram,0x00010a07c508) */
/* WARNING: Removing unreachable block (ram,0x00010a07c53c) */
/* WARNING: Removing unreachable block (ram,0x00010a07c554) */
/* WARNING: Removing unreachable block (ram,0x00010a07c570) */
/* WARNING: Removing unreachable block (ram,0x00010a07c5a0) */
/* WARNING: Removing unreachable block (ram,0x00010a07c5a8) */
/* WARNING: Removing unreachable block (ram,0x00010a07c5b4) */
/* WARNING: Removing unreachable block (ram,0x00010a07c5bc) */
/* WARNING: Removing unreachable block (ram,0x00010a07c5c8) */
/* WARNING: Removing unreachable block (ram,0x00010a07c5e0) */
/* WARNING: Removing unreachable block (ram,0x00010a07c5ec) */
/* WARNING: Removing unreachable block (ram,0x00010a07c5cc) */
/* WARNING: Removing unreachable block (ram,0x00010a07c4c8) */

void FUN_10a07c084(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined ***pppuVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  long lVar13;
  ulong uVar14;
  undefined **ppuVar15;
  ulong uVar16;
  long *unaff_x19;
  undefined ***unaff_x20;
  undefined ***unaff_x21;
  long lVar17;
  undefined ***unaff_x22;
  long lVar18;
  long lVar19;
  undefined ***unaff_x23;
  long lVar20;
  undefined ***unaff_x24;
  undefined ***pppuVar21;
  ulong uVar22;
  undefined ***unaff_x25;
  undefined ***pppuVar23;
  ulong uVar24;
  undefined ***unaff_x26;
  undefined ***pppuVar25;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_180 [8];
  undefined ***pppuStack_178;
  undefined ***pppuStack_170;
  undefined ***pppuStack_168;
  undefined ***pppuStack_160;
  undefined ***pppuStack_158;
  undefined ***pppuStack_150;
  undefined ***pppuStack_148;
  undefined8 uStack_140;
  char cStack_131;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  long *plStack_120;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  byte bStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined ***pppuStack_98;
  undefined ***pppuStack_90;
  long lStack_68;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  plVar9 = param_2;
  FUN_10a07be4c(param_2,param_3);
  FUN_10a07c4c0(param_5);
  FUN_10a07bed8(&pppuStack_168,param_2,param_4);
  FUN_10a07c4e4(&ppuStack_f0,param_2,param_4 + 0x10);
  pppuVar10 = (undefined ***)0x60;
  __Znwm();
  pppuVar23 = pppuVar10 + 1;
  *pppuVar23 = (undefined **)0x0;
  pppuVar10[2] = (undefined **)0x0;
  *pppuVar10 = &PTR_FUN_110b9e718;
  pppuVar25 = pppuVar10 + 3;
  pppuVar10[4] = ppuStack_e8;
  *pppuVar25 = ppuStack_f0;
  if (ppuStack_e8 != (undefined **)0x0) {
    ppuStack_e8 = ppuStack_e8 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuStack_e8,0x10);
      if (bVar4) {
        *ppuStack_e8 = *ppuStack_e8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  pppuVar10[6] = ppuStack_d8;
  pppuVar10[5] = ppuStack_e0;
  if (ppuStack_d8 != (undefined **)0x0) {
    ppuStack_d8 = ppuStack_d8 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuStack_d8,0x10);
      if (bVar4) {
        *ppuStack_d8 = *ppuStack_d8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *(undefined1 *)(pppuVar10 + 0xb) = 2;
  pppuStack_178 = pppuVar25;
  pppuStack_170 = pppuVar10;
  FUN_10a688c1c(&ppuStack_f0);
  pppuVar5 = pppuStack_160;
  pppuVar21 = pppuStack_168;
  pppuStack_158 = pppuStack_168;
  pppuStack_150 = pppuStack_160;
  pppuStack_168 = (undefined ***)0x0;
  pppuStack_160 = (undefined ***)0x0;
  FUN_10a039d00(&pppuStack_148,*(undefined1 *)(pppuVar21 + 7));
  pppuVar11 = pppuVar21;
  FUN_10a039d7c(pppuVar21,uStack_140,cStack_131);
  if (((ulong)pppuVar11 & 1) != 0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar23,0x10);
      if (bVar4) {
        *pppuVar23 = (undefined **)((long)*pppuVar23 + 1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    ppuStack_a8 = (undefined **)FUN_10a07ea38;
    ppuStack_a0 = &PTR_DAT_110b9e7e0;
    pppuVar21 = &ppuStack_a8;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar23,0x10);
      if (bVar4) {
        *pppuVar23 = (undefined **)((long)*pppuVar23 + 1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      ppuVar15 = *pppuVar23;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar23,0x10);
      if (bVar4) {
        *pppuVar23 = (undefined **)((long)ppuVar15 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    pppuStack_98 = pppuVar25;
    pppuStack_90 = pppuVar10;
    if (ppuVar15 == (undefined **)0x0) {
      (*(code *)(*pppuVar10)[2])(pppuVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar10);
    }
    pppuVar10 = *(undefined ****)(plVar9[3] + 0x970);
    bStack_b0 = 2;
    ppuStack_f0 = ppuStack_a8;
    (*(code *)ppuStack_a0[3])(&ppuStack_e8,&ppuStack_a0);
    bStack_b0 = 1;
    pppuVar23 = &ppuStack_130;
    ppuStack_130 = (undefined **)FUN_10a07eed0;
    ppuStack_128 = &PTR_FUN_110b9e800;
    plStack_120 = plVar9;
    FUN_10a039e44(pppuVar10,&pppuStack_148,&pppuStack_158,&ppuStack_f0,&ppuStack_130);
    (*(code *)*ppuStack_128)(&ppuStack_128);
    if (2 < (ulong)bStack_b0) goto LAB_10a07c430;
    (*(code *)(&PTR_DAT_110b9e7a8)[bStack_b0])(&ppuStack_f0);
    pppuVar11 = &ppuStack_a0;
    (*(code *)*ppuStack_a0)();
  }
  if (cStack_131 < '\0') {
    pppuVar11 = pppuStack_148;
    __ZdlPv();
  }
  if (pppuVar5 != (undefined ***)0x0) {
    pppuVar12 = pppuVar5 + 1;
    do {
      ppuVar15 = *pppuVar12;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar12,0x10);
      if (bVar4) {
        *pppuVar12 = (undefined **)((long)ppuVar15 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (ppuVar15 == (undefined **)0x0) {
      (*(code *)(*pppuVar5)[2])(pppuVar5);
      pppuVar11 = pppuVar5;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  pppuVar12 = pppuStack_170;
  if (pppuStack_170 != (undefined ***)0x0) {
    pppuVar2 = pppuStack_170 + 1;
    do {
      ppuVar15 = *pppuVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
      if (bVar4) {
        *pppuVar2 = (undefined **)((long)ppuVar15 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (ppuVar15 == (undefined **)0x0) {
      (*(code *)(*pppuStack_170)[2])(pppuStack_170);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar11 = pppuVar12;
    }
  }
  pppuVar12 = pppuStack_160;
  if (pppuStack_160 != (undefined ***)0x0) {
    pppuVar2 = pppuStack_160 + 1;
    do {
      ppuVar15 = *pppuVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
      if (bVar4) {
        *pppuVar2 = (undefined **)((long)ppuVar15 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (ppuVar15 == (undefined **)0x0) {
      (*(code *)(*pppuStack_160)[2])(pppuStack_160);
      pppuVar11 = pppuVar12;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  *param_1 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_128)(pppuVar23 + 1);
    if (2 < (ulong)bStack_b0) {
LAB_10a07c430:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10a07c434);
      (*pcVar6)();
    }
    (*(code *)(&PTR_DAT_110b9e7a8)[bStack_b0])(&ppuStack_f0);
    (*(code *)*ppuStack_a0)(pppuVar21 + 1);
    if (cStack_131 < '\0') {
      __ZdlPv(pppuStack_148);
    }
    FUN_10a07c02c(&pppuStack_158);
    func_0x00010a050b50(&pppuStack_178);
    FUN_10a07c02c(&pppuStack_168);
    unaff_x30 = 0x10a07c4b8;
    register0x00000008 = (BADSPACEBASE *)auStack_180;
    unaff_x19 = plVar8;
    unaff_x20 = pppuVar11;
    unaff_x21 = pppuVar12;
    unaff_x22 = pppuVar5;
    unaff_x23 = pppuVar10;
    unaff_x24 = pppuVar21;
    unaff_x25 = pppuVar23;
    unaff_x26 = pppuVar25;
    unaff_x29 = puVar1;
  }
  plVar9 = plVar8 + 0x4b;
  lVar13 = plVar8[0x59];
  uVar14 = lVar13 - 1;
  plVar8[0x59] = uVar14;
  if (uVar14 < 8) {
    uVar14 = plVar9[lVar13 + 2];
    if (plVar8[0x5a] == uVar14) {
      return;
    }
  }
  else {
    uVar14 = *(ulong *)(plVar8[0x57] + -8);
    plVar8[0x57] = plVar8[0x57] + -8;
    if (plVar8[0x5a] == uVar14) {
      return;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined ****)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined ****)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined ****)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined ****)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined ****)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined ****)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined ****)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  lVar13 = *plVar9;
  lVar19 = plVar8[0x4c];
  lVar17 = lVar19 - lVar13;
  uVar22 = lVar17 >> 4;
  if (uVar22 < uVar14) {
    uVar24 = uVar14 - uVar22;
    lVar20 = plVar8[0x4d];
    if ((ulong)(lVar20 - lVar19 >> 4) < uVar24) {
      if (uVar14 >> 0x3c == 0) {
        uVar16 = lVar20 - lVar13 >> 3;
        if (uVar16 <= uVar14) {
          uVar16 = uVar14;
        }
        if (0x7fffffffffffffef < (ulong)(lVar20 - lVar13)) {
          uVar16 = 0xfffffffffffffff;
        }
        *(long **)((long)register0x00000008 + -0x68) = plVar9;
        if (uVar16 >> 0x3c == 0) {
          lVar7 = uVar16 << 4;
          __Znwm();
          lVar19 = lVar7 + lVar17;
          _bzero(lVar19,uVar24 * 0x10);
          lVar18 = lVar19 + uVar22 * -0x10;
          _memcpy(lVar18,lVar13,lVar17);
          *plVar9 = lVar18;
          plVar8[0x4c] = lVar19 + uVar24 * 0x10;
          plVar8[0x4d] = lVar7 + uVar16 * 0x10;
          *(long *)((long)register0x00000008 + -0x78) = lVar13;
          *(long *)((long)register0x00000008 + -0x70) = lVar20;
          *(long *)((long)register0x00000008 + -0x88) = lVar13;
          *(long *)((long)register0x00000008 + -0x80) = lVar13;
          func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar6)();
    }
    _bzero(lVar19,uVar24 * 0x10);
    plVar8[0x4c] = lVar19 + uVar24 * 0x10;
  }
  else if (uVar14 < uVar22) {
    lVar13 = lVar13 + uVar14 * 0x10;
    while (lVar19 != lVar13) {
      lVar19 = lVar19 + -0x10;
      func_0x00010988c204(lVar19);
    }
    plVar8[0x4c] = lVar13;
  }
code_r0x00010988c138:
  plVar8[0x5a] = uVar14;
  return;
}



/* Entry: 10a07c4c0; end: 10a07c4e3;  */

void FUN_10a07c4c0(undefined8 param_1)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  undefined8 extraout_x8;
  long *plStack_60;
  int iStack_58;
  long *plStack_50;
  long *plStack_48;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar2 = (long *)0x2;
  piVar6 = (int *)0x0;
  FUN_10a052ee0(2,0,param_1);
  if (*piVar6 == 7) {
    plVar3 = plVar2;
    (**(code **)(*plVar2 + 0x98))();
    plVar4 = plVar2;
    plStack_48 = plVar3;
    (**(code **)(*plVar2 + 0x228))(plVar2,&plStack_48);
    if ((int)plVar4 != 0) {
      plVar3 = plVar2;
      (**(code **)(*plVar2 + 0x58))();
      lVar5 = plVar3[0x48];
      if ((lVar5 == 0) ||
         (___dynamic_cast(lVar5,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), lVar5 == 0))
      goto LAB_10a07c5ec;
      plStack_50 = plStack_48;
      plStack_48 = (long *)0x0;
      iStack_58 = 7;
      plStack_60 = plVar2;
      FUN_10a688ac0(extraout_x8,&plStack_60,*(undefined8 *)(lVar5 + 8));
      if ((3 < iStack_58) && (plStack_50 != (long *)0x0)) {
        (**(code **)*plStack_50)();
      }
    }
    if (plStack_48 != (long *)0x0) {
      (**(code **)*plStack_48)();
    }
    if (((ulong)plVar4 & 1) != 0) {
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a07c5ec:
  func_0x00010988bd28(&UNK_10f685540);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a07c5fc);
  (*pcVar1)();
}



/* Entry: 10a07c4e4; end: 10a07c61b;  */

void FUN_10a07c4e4(undefined8 param_1,long *param_2,int *param_3)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plStack_50;
  int iStack_48;
  long *plStack_40;
  long *plStack_38;
  
  if (*param_3 == 7) {
    plVar2 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_3 + 2));
    plVar3 = param_2;
    plStack_38 = plVar2;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_38);
    if ((int)plVar3 != 0) {
      plVar2 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar4 = plVar2[0x48];
      if ((lVar4 == 0) ||
         (___dynamic_cast(lVar4,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), lVar4 == 0))
      goto LAB_10a07c5ec;
      plStack_40 = plStack_38;
      plStack_38 = (long *)0x0;
      iStack_48 = 7;
      plStack_50 = param_2;
      FUN_10a688ac0(param_1,&plStack_50,*(undefined8 *)(lVar4 + 8));
      if ((3 < iStack_48) && (plStack_40 != (long *)0x0)) {
        (**(code **)*plStack_40)();
      }
    }
    if (plStack_38 != (long *)0x0) {
      (**(code **)*plStack_38)();
    }
    if (((ulong)plVar3 & 1) != 0) {
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a07c5ec:
  func_0x00010988bd28(&UNK_10f685540);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a07c5fc);
  (*pcVar1)();
}



/* Entry: 10a07c61c; end: 10a07c62b;  */

void FUN_10a07c61c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9e718;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a07c62c; end: 10a07c64b;  */

void FUN_10a07c62c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9e718;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a07c64c; end: 10a07c673;  */

undefined1  [16] FUN_10a07c64c(long param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_38;
  
  bVar2 = *(byte *)(param_1 + 0x58);
  if (3 < (ulong)bVar2) {
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10a07c670);
    (*UNRECOVERED_JUMPTABLE)();
  }
  auVar10._8_8_ = (code **)(&PTR_FUN_110b9a040)[bVar2];
  puVar5 = (undefined8 *)(param_1 + 0x18);
  switch(bVar2) {
  case 0:
    auVar10._0_8_ = puVar5;
    return auVar10;
  case 1:
    puVar5 = (undefined8 *)(param_1 + 0x20);
    UNRECOVERED_JUMPTABLE = *(code **)*puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010a00496c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    auVar11._8_8_ = UNRECOVERED_JUMPTABLE;
    auVar11._0_8_ = puVar5;
    return auVar11;
  case 3:
    auVar12._8_8_ = auVar10._8_8_;
    auVar12._0_8_ = puVar5;
    return auVar12;
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  if (((*ppuVar6 == (undefined *)0x0) &&
      (plVar7 = *(long **)(param_1 + 0x30), plVar7 != (long *)0x0)) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 != (long *)0x0)) {
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x870);
      uStack_60 = *(undefined8 *)(param_1 + 0x20);
      uStack_68 = *puVar5;
      *puVar5 = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      pcStack_78 = FUN_10a69fabc;
      ppuStack_70 = &PTR_DAT_110c0ce80;
      auVar10._8_8_ = &pcStack_78;
      FUN_10a4634ec(uVar8);
      (*(code *)*ppuStack_70)(&ppuStack_70);
    }
    plVar1 = plVar7 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010a004dac(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    auVar13._8_8_ = auVar10._8_8_;
    auVar13._0_8_ = puVar5;
    return auVar13;
  }
  ___stack_chk_fail();
  if ((int)auVar10._8_8_ == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  auVar14._8_8_ = 0x18;
  auVar14._0_8_ = &UNK_10f66c09c;
  return auVar14;
}



/* Entry: 10a07c674; end: 10a07c7af;  */

/* WARNING: Removing unreachable block (ram,0x00010a07c848) */

undefined1  [16] FUN_10a07c674(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined1 **ppuVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 *puStack_150;
  undefined *puStack_148;
  undefined4 uStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined4 uStack_110;
  undefined1 auStack_108 [24];
  undefined *puStack_b0;
  char **ppcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  char *pcStack_48;
  char *pcStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b0 = (undefined *)0x0;
  ppcStack_a8 = (char **)0xffffffff00000001;
  uStack_a0 = CONCAT44(uStack_a0._4_4_,0xffffffff);
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_78 = 0;
  uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
  FUN_10a07c7b0(param_1,&puStack_b0);
  pcStack_40 = "callback";
  ppcStack_a8 = &pcStack_40;
  puStack_b0 = &DAT_10f68571c;
  uStack_a0 = 1;
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x100000064;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0xffffffff;
  uStack_58 = 0;
  uStack_50 = 0;
  func_0x00010a07d0dc();
  pcStack_48 = "registration";
  ppcStack_a8 = &pcStack_48;
  puStack_b0 = &DAT_10f685720;
  uStack_a0 = 1;
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x100000064;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0xffffffff;
  uStack_58 = 0;
  uStack_50 = 0;
  ppuVar1 = &puStack_b0;
  FUN_10a07d650(param_1,ppuVar1,0);
  FUN_10a07d848(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    ppuVar2 = &puStack_150;
    func_0x000109887da8(auStack_108,&UNK_10e482a75,0x48);
    puStack_148 = ppuVar1[1];
    uStack_140 = *(undefined4 *)(ppuVar1 + 2);
    puStack_130 = ppuVar1[4];
    puStack_138 = ppuVar1[3];
    puStack_120 = ppuVar1[6];
    puStack_128 = ppuVar1[5];
    puStack_118 = ppuVar1[7];
    uStack_110 = *(undefined4 *)(ppuVar1 + 8);
    puStack_150 = auStack_108;
    FUN_10a07c888(param_1,&puStack_150,100);
    auVar4._8_8_ = ppuVar2;
    auVar4._0_8_ = param_1;
    return auVar4;
  }
  auVar3._8_8_ = ppuVar1;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a07c7b0; end: 10a07c887;  */

/* WARNING: Removing unreachable block (ram,0x00010a07c848) */

undefined1  [16] FUN_10a07c7b0(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10e482a75,0x48);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a07c888(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a07c888; end: 10a07c98b;  */

undefined1  [16] FUN_10a07c888(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110b9a108;
  puVar1 = &UNK_10f630f1d;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  FUN_10a07c98c(param_1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110b9a108;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110b178e0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a07c98c; end: 10a07c98f;  */

void FUN_10a07c98c(void)

{
  return;
}



/* Entry: 10a07c990; end: 10a07ca83;  */

void FUN_10a07c990(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  byte bStack_30;
  long lStack_28;
  
  puVar5 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
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
  bStack_30 = 2;
  FUN_10a07ca84(param_1,&uStack_70);
  if ((ulong)bStack_30 < 4) {
    (*(code *)(&PTR_FUN_110b9a040)[bStack_30])(&uStack_70);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
      return;
    }
    ___stack_chk_fail();
    if ((ulong)bStack_30 < 4) {
      (*(code *)(&PTR_FUN_110b9a040)[bStack_30])(&uStack_70);
      __Unwind_Resume(puVar5);
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a07ca84);
  (*pcVar4)();
}



/* Entry: 10a07ca84; end: 10a07cb8f;  */

void FUN_10a07ca84(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plStack_40;
  long *plStack_38;
  
  plVar4 = (long *)0x30;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110b9fc88;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plStack_40 = plVar4 + 3;
  *plStack_40 = (long)&PTR_FUN_110c0f9b0;
  lVar5 = param_2 + 0x18;
  plStack_38 = plVar4;
  FUN_10a07cb90(lVar5,&plStack_40,&plStack_40,param_3);
  plVar4 = plStack_38;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  if (*(char *)(*(long *)(param_2 + 0x48) + 8) == '\x01') {
    (**(code **)(param_2 + 0x40))(param_2);
  }
  lVar6 = *(long *)(lVar5 + 0x18);
  uVar7 = *(undefined8 *)(lVar5 + 0x10);
  param_1[1] = *(undefined8 *)(lVar5 + 0x18);
  *param_1 = uVar7;
  if (lVar6 != 0) {
    plVar4 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 10a07cb90; end: 10a07cdf7;  */

undefined1  [16] FUN_10a07cb90(long *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong unaff_x25;
  undefined1 auVar12 [16];
  
  uVar3 = *param_2;
  uVar7 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
  uVar7 = (uVar3 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
  uVar11 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar5 = uVar7 - 1;
    if ((uVar7 & uVar5) == 0) {
      unaff_x25 = uVar11 & uVar5;
    }
    else {
      unaff_x25 = uVar11;
      if (uVar7 <= uVar11) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = uVar11 / uVar7;
        }
        unaff_x25 = uVar11 - uVar9 * uVar7;
      }
    }
    puVar8 = *(undefined8 **)(*param_1 + unaff_x25 * 8);
    if (puVar8 != (undefined8 *)0x0) {
      for (plVar10 = (long *)*puVar8; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        uVar9 = plVar10[1];
        if (uVar9 == uVar11) {
          if (plVar10[2] == uVar3) {
            uVar2 = 0;
            goto LAB_10a07cdb4;
          }
        }
        else {
          if ((uVar7 & uVar5) == 0) {
            uVar9 = uVar9 & uVar5;
          }
          else if (uVar7 <= uVar9) {
            uVar1 = 0;
            if (uVar7 != 0) {
              uVar1 = uVar9 / uVar7;
            }
            uVar9 = uVar9 - uVar1 * uVar7;
          }
          if (uVar9 != unaff_x25) break;
        }
      }
    }
  }
  plVar10 = (long *)0x68;
  __Znwm();
  *plVar10 = 0;
  plVar10[1] = uVar11;
  FUN_10a07cdf8(plVar10 + 2,param_3,param_4);
  if ((uVar7 == 0) || (*(float *)(param_1 + 4) * (float)uVar7 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar7) {
      uVar3 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar3 = uVar3 | uVar7 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar7) {
      uVar3 = uVar7;
    }
    FUN_10a07ce64(param_1,uVar3);
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x25 = uVar7 - 1 & uVar11;
    }
    else {
      unaff_x25 = uVar11;
      if (uVar7 <= uVar11) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = uVar11 / uVar7;
        }
        unaff_x25 = uVar11 - uVar3 * uVar7;
      }
    }
  }
  lVar6 = *param_1;
  plVar4 = *(long **)(lVar6 + unaff_x25 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *plVar10 = *plVar4;
    *plVar4 = (long)plVar10;
    *(long **)(lVar6 + unaff_x25 * 8) = plVar4;
    if (*plVar10 == 0) goto LAB_10a07cda4;
    uVar3 = *(ulong *)(*plVar10 + 8);
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar3 = uVar3 & uVar7 - 1;
    }
    else if (uVar7 <= uVar3) {
      uVar11 = 0;
      if (uVar7 != 0) {
        uVar11 = uVar3 / uVar7;
      }
      uVar3 = uVar3 - uVar11 * uVar7;
    }
    plVar4 = (long *)(*param_1 + uVar3 * 8);
  }
  else {
    *plVar10 = *plVar4;
  }
  *plVar4 = (long)plVar10;
LAB_10a07cda4:
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_10a07cdb4:
  auVar12._8_8_ = uVar2;
  auVar12._0_8_ = plVar10;
  return auVar12;
}



/* Entry: 10a07cdf8; end: 10a07ce63;  */

undefined8 * FUN_10a07cdf8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *puStack_28;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  puStack_28 = param_1 + 2;
  *(undefined1 *)(param_1 + 10) = 3;
  if (*(char *)(param_3 + 0x40) == '\0') {
    uVar1 = 0;
  }
  else {
    FUN_10a05fae4(&puStack_28,param_3);
    uVar1 = *(undefined1 *)(param_3 + 0x40);
  }
  *(undefined1 *)(param_1 + 10) = uVar1;
  return param_1;
}



/* Entry: 10a07ce64; end: 10a07cf33;  */

void FUN_10a07ce64(long *param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar10 = param_1[1];
  if (uVar10 < param_2) {
LAB_10a07ceac:
    if (param_2 == 0) {
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
    else {
      if (param_2 >> 0x3d != 0) {
        func_0x000109ffded8();
        if ((char)param_1[1] == '\x01') {
          if (3 < (ulong)*(byte *)(param_2 + 0x60)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10a07d0dc);
            (*pcVar2)();
          }
          (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_2 + 0x60)])(param_2 + 0x20);
          FUN_10a004978(param_2 + 0x10);
        }
        else if (param_2 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(param_2);
        return;
      }
      lVar3 = param_2 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar10 = 0;
      param_1[1] = param_2;
      do {
        *(undefined8 *)(*param_1 + uVar10 * 8) = 0;
        uVar10 = uVar10 + 1;
      } while (param_2 != uVar10);
      plVar6 = (long *)param_1[2];
      if (plVar6 != (long *)0x0) {
        uVar10 = plVar6[1];
        uVar5 = param_2 - 1;
        if ((param_2 & uVar5) == 0) {
          uVar10 = uVar10 & uVar5;
        }
        else if (param_2 <= uVar10) {
          uVar9 = 0;
          if (param_2 != 0) {
            uVar9 = uVar10 / param_2;
          }
          uVar10 = uVar10 - uVar9 * param_2;
        }
        *(long **)(*param_1 + uVar10 * 8) = param_1 + 2;
        plVar7 = (long *)*plVar6;
        while (plVar7 != (long *)0x0) {
          uVar9 = plVar7[1];
          if ((param_2 & uVar5) == 0) {
            uVar9 = uVar9 & uVar5;
          }
          else if (param_2 <= uVar9) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar9 / param_2;
            }
            uVar9 = uVar9 - uVar1 * param_2;
          }
          plVar8 = plVar7;
          if (uVar9 != uVar10) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + uVar9 * 8) == 0) {
              *(long **)(lVar3 + uVar9 * 8) = plVar6;
              uVar10 = uVar9;
            }
            else {
              *plVar6 = *plVar7;
              *plVar7 = **(undefined8 **)(lVar3 + uVar9 * 8);
              **(long **)(lVar3 + uVar9 * 8) = (long)plVar7;
              plVar8 = plVar6;
            }
          }
          plVar6 = plVar8;
          plVar7 = (long *)*plVar8;
        }
      }
    }
    return;
  }
  if (param_2 < uVar10) {
    uVar5 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar10 < 3) || ((uVar10 & uVar10 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar5) {
      uVar5 = 1L << (-LZCOUNT(uVar5 - 1) & 0x3fU);
    }
    if (param_2 <= uVar5) {
      param_2 = uVar5;
    }
    if (param_2 < uVar10) goto LAB_10a07ceac;
  }
  return;
}



/* Entry: 10a07cf34; end: 10a07d13f;  */

void FUN_10a07cf34(long *param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  
  if (param_2 == 0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000109ffded8();
      if ((char)param_1[1] == '\x01') {
        if (3 < (ulong)*(byte *)(param_2 + 0x60)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10a07d0dc);
          (*pcVar2)();
        }
        (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_2 + 0x60)])(param_2 + 0x20);
        FUN_10a004978(param_2 + 0x10);
      }
      else if (param_2 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(param_2);
      return;
    }
    lVar3 = param_2 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    uVar5 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (param_2 != uVar5);
    plVar7 = (long *)param_1[2];
    if (plVar7 != (long *)0x0) {
      uVar5 = plVar7[1];
      uVar6 = param_2 - 1;
      if ((param_2 & uVar6) == 0) {
        uVar5 = uVar5 & uVar6;
      }
      else if (param_2 <= uVar5) {
        uVar10 = 0;
        if (param_2 != 0) {
          uVar10 = uVar5 / param_2;
        }
        uVar5 = uVar5 - uVar10 * param_2;
      }
      *(long **)(*param_1 + uVar5 * 8) = param_1 + 2;
      plVar8 = (long *)*plVar7;
      while (plVar8 != (long *)0x0) {
        uVar10 = plVar8[1];
        if ((param_2 & uVar6) == 0) {
          uVar10 = uVar10 & uVar6;
        }
        else if (param_2 <= uVar10) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar10 / param_2;
          }
          uVar10 = uVar10 - uVar1 * param_2;
        }
        plVar9 = plVar8;
        if (uVar10 != uVar5) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + uVar10 * 8) == 0) {
            *(long **)(lVar3 + uVar10 * 8) = plVar7;
            uVar5 = uVar10;
          }
          else {
            *plVar7 = *plVar8;
            *plVar8 = **(undefined8 **)(lVar3 + uVar10 * 8);
            **(long **)(lVar3 + uVar10 * 8) = (long)plVar8;
            plVar9 = plVar7;
          }
        }
        plVar7 = plVar9;
        plVar8 = (long *)*plVar9;
      }
    }
  }
  return;
}



/* Entry: 10a07d140; end: 10a07d1f7;  */

void FUN_10a07d140(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a07d1f8(param_1,param_2,FUN_10a07c990,0,param_3,param_4,param_5);
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



/* Entry: 10a07d1f8; end: 10a07d2eb;  */

void FUN_10a07d1f8(undefined8 param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_80 [8];
  long *plStack_78;
  undefined1 auStack_70 [32];
  
  lVar4 = param_2;
  FUN_10a07d2ec(param_2,param_5);
  func_0x00010a07d364(param_7);
  FUN_10a05dd14(auStack_70,param_2,param_6);
  plVar1 = (long *)(lVar4 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(auStack_80,plVar1,auStack_70);
  FUN_10a688c1c(auStack_70);
  FUN_10a05ff7c(param_1,param_2,auStack_80);
  if (plStack_78 != (long *)0x0) {
    plVar1 = plStack_78 + 1;
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
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
    }
  }
  return;
}



/* Entry: 10a07d2ec; end: 10a07d323;  */

void FUN_10a07d2ec(undefined *param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar2 = param_1;
  func_0x000109898688();
  puVar3 = param_1;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = &UNK_10f68f52e;
    unaff_x30 = FUN_10a07d324;
    func_0x00010988bd28();
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
  }
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  FUN_10a053854();
  if ((puVar3 != (undefined *)0x0) && (___dynamic_cast(), puVar3 != (undefined *)0x0)) {
    return;
  }
  puVar3 = &UNK_10f685496;
  func_0x00010988bd28();
  if ((int)puVar3 == 1) {
    return;
  }
  *(undefined1 **)((long)register0x00000008 + -0x20) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -0x18) = 0x10a07d364;
  lVar4 = 1;
  FUN_10a052ee0(1,0,puVar3);
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x20;
  *(undefined **)((long)register0x00000008 + -0x38) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x30) =
       (undefined1 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x28) = 0x10a07d388;
  func_0x00010a07d3d4(lVar4 + 0x18);
  if (*(char *)(*(long *)(lVar4 + 0x48) + 8) != '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010a07d3c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 0x40))(lVar4);
  return;
}



/* Entry: 10a07d324; end: 10a07d387;  */

void FUN_10a07d324(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  FUN_10a053854();
  if ((param_1 != 0) && (___dynamic_cast(), param_1 != 0)) {
    return;
  }
  puVar1 = &UNK_10f685496;
  func_0x00010988bd28();
  if ((int)puVar1 == 1) {
    return;
  }
  lVar2 = 1;
  FUN_10a052ee0(1,0,puVar1);
  func_0x00010a07d3d4(lVar2 + 0x18);
  if (*(char *)(*(long *)(lVar2 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010a07d3c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x40))(lVar2);
    return;
  }
  return;
}



/* Entry: 10a07d388; end: 10a07d407;  */

void FUN_10a07d388(long param_1)

{
  func_0x00010a07d3d4(param_1 + 0x18);
  if (*(char *)(*(long *)(param_1 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010a07d3c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x40))(param_1);
    return;
  }
  return;
}



/* Entry: 10a07d408; end: 10a07d4df;  */

long * FUN_10a07d408(long *param_1,ulong *param_2)

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



/* Entry: 10a07d4e0; end: 10a07d52f;  */

undefined8 FUN_10a07d4e0(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lStack_38;
  undefined1 auStack_30 [16];
  
  if (param_2 != (undefined8 *)0x0) {
    uVar3 = *param_2;
    FUN_10a07d530(&lStack_38);
    lVar1 = lStack_38;
    lStack_38 = 0;
    if (lVar1 != 0) {
      func_0x00010a07d070(auStack_30);
    }
    return uVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a07d530);
  (*pcVar2)();
}



/* Entry: 10a07d530; end: 10a07d64f;  */

void FUN_10a07d530(undefined8 *param_1,long *param_2,long *param_3)

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
    if (uVar8 == uVar3) goto LAB_10a07d5e4;
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
    if (uVar8 == uVar3) goto LAB_10a07d5e4;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_10a07d5e4:
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


