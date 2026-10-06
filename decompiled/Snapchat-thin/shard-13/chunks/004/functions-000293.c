/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a5d1b38; end: 10a5d1b4b;  */

long * FUN_10a5d1b38(void)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  plVar4 = (long *)plVar2[1];
  plVar3 = (long *)*plVar2;
  for (plVar1 = plVar3; plVar1 != plVar4; plVar1 = plVar1 + 1) {
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 0x18) = 0;
    }
  }
  if (plVar3 != (long *)0x0) {
    plVar2[1] = (long)plVar3;
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 10a5d1b4c; end: 10a5d1ba3;  */

long * FUN_10a5d1b4c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[1];
  plVar2 = (long *)*param_1;
  for (plVar1 = plVar2; plVar1 != plVar3; plVar1 = plVar1 + 1) {
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 0x18) = 0;
    }
  }
  if (plVar2 != (long *)0x0) {
    param_1[1] = (long)plVar2;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a5d1ba4; end: 10a5d1f93;  */

void FUN_10a5d1ba4(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  plVar2 = (long *)*param_2;
  if (plVar2 == (long *)0x0 || plVar2 == param_2) {
    return;
  }
  plVar3 = (long *)*param_1;
  do {
    if (plVar3 != param_1) {
      do {
        if (*(uint *)(plVar2 + 0x23) < *(uint *)(plVar3 + 0x23)) break;
        plVar3 = (long *)*plVar3;
      } while (plVar3 != param_1);
    }
    if (plVar3 == param_1) {
      if (param_1 == param_2) {
        return;
      }
      if (plVar2 == param_1) {
        return;
      }
      puVar5 = (undefined8 *)param_1[1];
      puVar7 = (undefined8 *)plVar2[1];
      puVar8 = (undefined8 *)param_2[1];
      *puVar8 = param_1;
      param_1[1] = (long)puVar8;
      *puVar7 = param_2;
      param_2[1] = (long)puVar7;
      *puVar5 = plVar2;
      plVar2[1] = (long)puVar5;
      return;
    }
    plVar4 = plVar2;
    lVar1 = -1;
    do {
      lVar6 = lVar1;
      plVar4 = (long *)*plVar4;
      if (plVar4 == param_2) break;
      lVar1 = lVar6 + -1;
    } while (*(uint *)(plVar4 + 0x23) < *(uint *)(plVar3 + 0x23));
    if ((lVar6 != 0) && ((plVar2 != plVar4 && plVar3 != plVar2) && plVar3 != plVar4)) {
      puVar5 = (undefined8 *)plVar3[1];
      puVar7 = (undefined8 *)plVar2[1];
      puVar8 = (undefined8 *)plVar4[1];
      *puVar8 = plVar3;
      plVar3[1] = (long)puVar8;
      *puVar7 = plVar4;
      plVar4[1] = (long)puVar7;
      *puVar5 = plVar2;
      plVar2[1] = (long)puVar5;
      plVar2 = (long *)*param_2;
    }
    if (plVar2 == (long *)0x0) {
      return;
    }
    if (plVar2 == param_2) {
      return;
    }
  } while( true );
}



/* Entry: 10a5d1f94; end: 10a5d1fa7;  */

long * FUN_10a5d1f94(void)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  plVar4 = (long *)plVar2[1];
  plVar3 = (long *)*plVar2;
  for (plVar1 = plVar3; plVar1 != plVar4; plVar1 = plVar1 + 1) {
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 0x18) = 0;
    }
  }
  if (plVar3 != (long *)0x0) {
    plVar2[1] = (long)plVar3;
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 10a5d1fa8; end: 10a5d1fff;  */

long * FUN_10a5d1fa8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[1];
  plVar2 = (long *)*param_1;
  for (plVar1 = plVar2; plVar1 != plVar3; plVar1 = plVar1 + 1) {
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 0x18) = 0;
    }
  }
  if (plVar2 != (long *)0x0) {
    param_1[1] = (long)plVar2;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a5d2000; end: 10a5d2013;  */

long * FUN_10a5d2000(void)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  plVar4 = (long *)plVar2[1];
  plVar3 = (long *)*plVar2;
  for (plVar1 = plVar3; plVar1 != plVar4; plVar1 = plVar1 + 1) {
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 0x18) = 0;
    }
  }
  if (plVar3 != (long *)0x0) {
    plVar2[1] = (long)plVar3;
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 10a5d2014; end: 10a5d206b;  */

long * FUN_10a5d2014(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[1];
  plVar2 = (long *)*param_1;
  for (plVar1 = plVar2; plVar1 != plVar3; plVar1 = plVar1 + 1) {
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 0x18) = 0;
    }
  }
  if (plVar2 != (long *)0x0) {
    param_1[1] = (long)plVar2;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a5d206c; end: 10a5d207f;  */

long * FUN_10a5d206c(void)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  plVar4 = (long *)plVar2[1];
  plVar3 = (long *)*plVar2;
  for (plVar1 = plVar3; plVar1 != plVar4; plVar1 = plVar1 + 1) {
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 0x18) = 0;
    }
  }
  if (plVar3 != (long *)0x0) {
    plVar2[1] = (long)plVar3;
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 10a5d2080; end: 10a5d20d7;  */

long * FUN_10a5d2080(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[1];
  plVar2 = (long *)*param_1;
  for (plVar1 = plVar2; plVar1 != plVar3; plVar1 = plVar1 + 1) {
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 0x18) = 0;
    }
  }
  if (plVar2 != (long *)0x0) {
    param_1[1] = (long)plVar2;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a5d20d8; end: 10a5d2153;  */

void FUN_10a5d20d8(undefined8 param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  puVar3 = *(undefined8 **)(param_2 + 0x10);
  puVar3[1] = *puVar3;
  FUN_10a5d2154(param_1,puVar3,1);
  plVar4 = *(long **)(param_2 + 0x10);
  plVar2 = (long *)*plVar4;
  plVar1 = (long *)plVar4[1];
  if (plVar2 != plVar1) {
    do {
      plVar4 = plVar2 + 1;
      plVar2 = (long *)*plVar2;
      *(undefined4 *)(plVar2 + 0x4b) = *(undefined4 *)(param_2 + 0x18);
      *(undefined1 *)((long)plVar2 + 0x25c) = 1;
      (**(code **)(*plVar2 + 0x1b8))();
      plVar2 = plVar4;
    } while (plVar4 != plVar1);
    plVar4 = *(long **)(param_2 + 0x10);
    plVar2 = (long *)*plVar4;
  }
  plVar4[1] = (long)plVar2;
  return;
}



/* Entry: 10a5d2154; end: 10a5d2207;  */

void FUN_10a5d2154(long param_1,undefined8 param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plStack_58;
  
  for (lVar3 = *(long *)(param_1 + 0x158); lVar3 != param_1 + 0x150; lVar3 = *(long *)(lVar3 + 8)) {
    plVar2 = *(long **)(lVar3 + 0x10);
    if (((plVar2 != (long *)0x0) &&
        (plVar1 = plVar2, ___dynamic_cast(plVar2,&PTR_DAT_110bd31d8,&PTR_DAT_110bd9df0,0),
        plStack_58 = plVar1, plVar1 != (long *)0x0)) &&
       ((param_3 == 0 || ((**(code **)(*plVar2 + 0x60))(), (int)plVar2 != 0)))) {
      FUN_10a5d2208(param_2,&plStack_58);
    }
  }
  return;
}



/* Entry: 10a5d2208; end: 10a5d22cb;  */

void FUN_10a5d2208(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    puVar8 = puVar2 + 1;
    *puVar2 = *param_2;
  }
  else {
    lVar7 = (long)puVar2 - *param_1;
    uVar1 = (lVar7 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_10a5d22cc();
      FUN_109ffde64(&DAT_10f62a4d8);
      if ((ulong)param_2 >> 0x3d == 0) {
        __Znwm((long)param_2 << 3);
        return;
      }
      func_0x000109ffded8();
      return;
    }
    uVar4 = param_1[2] - *param_1;
    uVar5 = (long)uVar4 >> 2;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar5 = 0x1fffffffffffffff;
    }
    plVar3 = param_1;
    FUN_10a5d22e0();
    puVar2 = (undefined8 *)((long)plVar3 + lVar7);
    puVar8 = puVar2 + 1;
    *puVar2 = *param_2;
    lVar6 = (long)puVar2 - (param_1[1] - *param_1);
    _memcpy(lVar6);
    lVar7 = *param_1;
    *param_1 = lVar6;
    param_1[1] = (long)puVar8;
    param_1[2] = (long)(plVar3 + uVar5);
    if (lVar7 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar8;
  return;
}



/* Entry: 10a5d22cc; end: 10a5d22df;  */

void FUN_10a5d22cc(undefined8 param_1,ulong param_2)

{
  FUN_109ffde64(&DAT_10f62a4d8);
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000109ffded8();
  return;
}



/* Entry: 10a5d22e0; end: 10a5d2313;  */

void FUN_10a5d22e0(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000109ffded8();
  return;
}



/* Entry: 10a5d2314; end: 10a5d232f;  */

void FUN_10a5d2314(void)

{
  return;
}



/* Entry: 10a5d2330; end: 10a5d2607;  */

void FUN_10a5d2330(long param_1)

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
      FUN_10a5b8b10(param_1 + 0x48,*(undefined8 *)(lVar7 + 0x98),*(undefined8 *)(lVar7 + 0xa0));
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
      if (*(long *)(param_1 + 0x48) == 0) {
        FUN_10a00946c(&UNK_10f6669b2);
      }
      else {
        plVar6 = *(long **)(*(long *)(param_1 + 0x60) + 8);
        if (plVar6 != (long *)0x0) {
          __ZNSt3__119__shared_weak_count4lockEv();
          if (plVar6 != (long *)0x0) {
            lVar7 = **(long **)(param_1 + 0x60);
            if (lVar7 != 0) {
              if ((*(long *)(lVar7 + 0x4b8) == (*(long **)(param_1 + 0x60))[2]) &&
                 (*(int *)(lVar7 + 0x288) == 1)) {
                FUN_10a593f9c(lVar7 + 0x290,param_1 + 0x48);
                *(undefined4 *)(lVar7 + 0x288) = 2;
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
              FUN_10a219b78(*(undefined8 *)(param_1 + 0x48));
              FUN_10a00946c(&UNK_10f666a01);
              goto LAB_10a5d25ac;
            }
          }
        }
        FUN_10a219b78(*(undefined8 *)(param_1 + 0x48));
        FUN_10a00946c(&UNK_10f666a01);
      }
    }
  }
  else {
    func_0x0001092af97c(lVar7 + 0x90);
  }
LAB_10a5d25ac:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a5d25b0);
  (*pcVar5)();
}



/* Entry: 10a5d2608; end: 10a5d26af;  */

void FUN_10a5d2608(long param_1)

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



/* Entry: 10a5d26b0; end: 10a5d2957;  */

void FUN_10a5d26b0(long param_1)

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
  
  if ((*(byte *)(param_1 + 0x80) & 1) == 0) {
    FUN_10a5b873c(param_1 + 0x78,param_1 + 0x48);
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x78);
    plVar5 = (long *)(*(long *)(param_1 + 0x78) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x80) = 1;
      lVar8 = *(long *)(param_1 + 0x68);
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
  plVar5 = *(long **)(param_1 + 0x68);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar5 + 0x12);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a5d2894);
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
  func_0x0001092ba100(param_1 + 0x10);
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
  if (*(long *)(param_1 + 0x50) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a5d2958; end: 10a5d2ad7;  */

void FUN_10a5d2958(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0x80) == '\x01') {
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
  if (*(long *)(param_1 + 0x50) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a5d2ad8; end: 10a5d2b67;  */

void FUN_10a5d2ad8(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  
  puVar5 = PTR___tlv_bootstrap_11340df90;
  ppuVar4 = &PTR___tlv_bootstrap_11340df90;
  ppuVar2 = ppuVar4;
  (*(code *)PTR___tlv_bootstrap_11340df90)();
  ppuVar3 = &PTR___tlv_bootstrap_11340df78;
  if (((ulong)*ppuVar2 & 1) == 0) {
    ppuVar2 = ppuVar3;
    (*(code *)PTR___tlv_bootstrap_11340df78)(&PTR___tlv_bootstrap_11340df78);
    __tlv_atexit(FUN_10a5e34e8,ppuVar2,0x100000000);
    (*(code *)puVar5)();
    *(undefined1 *)ppuVar4 = 1;
  }
  (*(code *)PTR___tlv_bootstrap_11340df78)();
  ppuVar3[1] = *ppuVar3;
  puVar5 = *ppuVar3;
  uVar7 = (long)ppuVar3[2] - (long)puVar5;
  uVar8 = (long)ppuVar3[1] - (long)puVar5;
  if (uVar8 < uVar7) {
    if (ppuVar3[1] == puVar5) {
      ppuVar4 = (undefined **)0x0;
      uVar6 = 0;
    }
    else {
      uVar6 = ((long)uVar8 >> 2) * -0x5555555555555555;
      ppuVar4 = ppuVar3;
      FUN_10a051b24();
      puVar5 = *ppuVar3;
      uVar7 = (long)ppuVar3[2] - (long)puVar5;
    }
    if (uVar6 < (ulong)(((long)uVar7 >> 2) * -0x5555555555555555)) {
      puVar1 = (undefined *)((long)ppuVar4 + uVar8);
      puVar9 = (undefined *)((long)ppuVar4 + uVar6 * 0xc);
      puVar5 = puVar1 + -((long)ppuVar3[1] - (long)puVar5);
      _memcpy(puVar5);
      ppuVar4 = (undefined **)*ppuVar3;
      *ppuVar3 = puVar5;
      ppuVar3[1] = puVar1;
      ppuVar3[2] = puVar9;
    }
    if (ppuVar4 != (undefined **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 10a5d2b68; end: 10a5d2c1b;  */

void FUN_10a5d2b68(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(long *)(param_2 + 0x28) != 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x268);
  }
  *param_1 = uVar1;
  *(undefined1 *)((long)param_1 + 0x29) = *(undefined1 *)(param_2 + 0x60);
  uVar1 = *(undefined8 *)(param_2 + 100);
  param_1[4] = *(undefined8 *)(param_2 + 0x6c);
  param_1[3] = uVar1;
  uVar1 = 0;
  if (*(long *)(param_2 + 0x38) != 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x38) + 0x268);
  }
  param_1[1] = uVar1;
  uVar1 = 0;
  if (*(long *)(param_2 + 0x48) != 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x48) + 0x268);
  }
  param_1[2] = uVar1;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 0x74);
  return;
}



/* Entry: 10a5d2c1c; end: 10a5d2c87;  */

bool FUN_10a5d2c1c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_30;
  long *plStack_28;
  
  func_0x00010ab6e4c8(&lStack_30,*(undefined8 *)(param_1 + 0x250));
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
  return lStack_30 != 0;
}



/* Entry: 10a5d2c88; end: 10a5d2dcf;  */

void FUN_10a5d2c88(long param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_58 [24];
  
  FUN_10a5d2dd0(param_1 + 0x168,param_2[1] - *param_2 >> 4);
  lVar2 = *param_2;
  uVar3 = param_2[1] - lVar2;
  if (uVar3 != 0) {
    lVar6 = 0;
    lVar7 = 0;
    uVar5 = 0;
    do {
      uVar4 = (*(long *)(param_1 + 0x170) - *(long *)(param_1 + 0x168) >> 4) * -0x5555555555555555;
      if ((uVar4 < uVar5 || uVar4 - uVar5 == 0) || ((ulong)((long)uVar3 >> 4) <= uVar5))
      goto LAB_10a5d2db0;
      FUN_10a5d2b68(*(long *)(param_1 + 0x168) + lVar7,*(undefined8 *)(lVar2 + lVar6));
      lVar2 = *param_2;
      uVar3 = param_2[1] - lVar2;
      if ((uVar5 != 0) && (0x10 < uVar3)) {
        uVar4 = (*(long *)(param_1 + 0x170) - *(long *)(param_1 + 0x168) >> 4) * -0x5555555555555555
        ;
        if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
LAB_10a5d2db0:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5d2db4);
          (*pcVar1)();
        }
        if (*(long *)(*(long *)(param_1 + 0x168) + lVar7) == 0) {
          FUN_10a0ee900(auStack_58,&UNK_10f6672b6,0x5e);
          FUN_10a0029c0(auStack_58);
          goto LAB_10a5d2db0;
        }
      }
      uVar5 = uVar5 + 1;
      lVar7 = lVar7 + 0x30;
      lVar6 = lVar6 + 0x10;
    } while (uVar5 != (long)uVar3 >> 4);
  }
  return;
}



/* Entry: 10a5d2dd0; end: 10a5d2e0b;  */

long * FUN_10a5d2dd0(long *param_1,ulong param_2,long param_3,ulong param_4,uint param_5)

{
  code *pcVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  
  lVar5 = param_1[1] - *param_1 >> 4;
  bVar2 = param_2 < (ulong)(lVar5 * -0x5555555555555555);
  uVar7 = param_2 + lVar5 * 0x5555555555555555;
  if (bVar2 || uVar7 == 0) {
    if (bVar2) {
      param_1[1] = *param_1 + param_2 * 0x30;
    }
    return param_1;
  }
  plVar3 = (long *)param_1[1];
  if ((ulong)((param_1[2] - (long)plVar3 >> 4) * -0x5555555555555555) < uVar7) {
    lVar5 = (long)plVar3 - *param_1;
    uVar8 = uVar7 + (lVar5 >> 4) * -0x5555555555555555;
    if (0x555555555555555 < uVar8) {
      FUN_10a1916e8();
      lVar5 = param_1[2];
      plVar11 = (long *)*param_1;
      plVar3 = param_1;
      if ((ulong)((lVar5 - (long)plVar11 >> 4) * -0x3333333333333333) < param_4) {
        plVar4 = param_1;
        uVar8 = uVar7;
        lVar6 = param_3;
        uVar9 = param_4;
        if (plVar11 != (long *)0x0) {
          param_1[1] = (long)plVar11;
          __ZdlPv();
          lVar5 = 0;
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          plVar4 = plVar11;
        }
        if (0x333333333333333 < param_4) {
          FUN_10a1915d0();
          uVar7 = ((long)(uVar8 - (long)plVar4) >> 3) * 0x6fb586fb586fb587;
          if (param_5 <= uVar7 && uVar7 - param_5 != 0) {
            uVar7 = (ulong)param_5;
            if ((char)plVar4[uVar7 * 0x37] != '\x02') {
              if (uVar9 <= uVar7) goto LAB_10a5e3924;
              lVar5 = *(long *)(lVar6 + uVar7 * 0xf0 + 0xa8);
              if (lVar5 != 0) {
                FUN_10a061940(lVar5,1);
                return (long *)(ulong)((int)lVar5 != 2);
              }
            }
            return (long *)0x1;
          }
LAB_10a5e3924:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5e3928);
          (*pcVar1)();
        }
        uVar8 = (lVar5 >> 4) * -0x6666666666666666;
        if (uVar8 < param_4 || uVar8 - param_4 == 0) {
          uVar8 = param_4;
        }
        if (0x199999999999998 < (ulong)((lVar5 >> 4) * -0x3333333333333333)) {
          uVar8 = 0x333333333333333;
        }
        FUN_10a191588(param_1,uVar8);
        plVar11 = (long *)param_1[1];
        param_3 = param_3 - uVar7;
        if (param_3 != 0) {
          plVar3 = plVar11;
          _memmove(plVar11,uVar7,param_3);
        }
        param_3 = (long)plVar11 + param_3;
      }
      else {
        plVar4 = (long *)param_1[1];
        if ((ulong)(((long)plVar4 - (long)plVar11 >> 4) * -0x3333333333333333) < param_4) {
          lVar5 = uVar7 + ((long)plVar4 - (long)plVar11);
          if (plVar4 != plVar11) {
            _memmove(plVar11,uVar7);
            plVar4 = (long *)param_1[1];
            plVar3 = plVar11;
          }
          param_3 = param_3 - lVar5;
          if (param_3 != 0) {
            plVar3 = plVar4;
            _memmove(plVar4,lVar5,param_3);
          }
          param_3 = (long)plVar4 + param_3;
        }
        else {
          param_3 = param_3 - uVar7;
          if (param_3 != 0) {
            plVar3 = plVar11;
            _memmove(plVar11,uVar7,param_3);
          }
          param_3 = (long)plVar11 + param_3;
        }
      }
      param_1[1] = param_3;
      return plVar3;
    }
    lVar6 = param_1[2] - *param_1 >> 4;
    uVar9 = lVar6 * 0x5555555555555556;
    if (uVar9 < uVar8 || uVar9 - uVar8 == 0) {
      uVar9 = uVar8;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar6 * -0x5555555555555555)) {
      uVar9 = 0x555555555555555;
    }
    if (uVar9 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = param_1;
      FUN_10a1916fc();
    }
    lVar5 = (long)plVar3 + lVar5;
    lVar6 = ((uVar7 * 0x30 - 0x30) / 0x30) * 0x30 + 0x30;
    _bzero(lVar5,lVar6);
    lVar10 = lVar5 - (param_1[1] - *param_1);
    _memcpy(lVar10);
    plVar4 = (long *)*param_1;
    *param_1 = lVar10;
    param_1[1] = lVar5 + lVar6;
    param_1[2] = (long)(plVar3 + uVar9 * 6);
    plVar11 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return plVar4;
    }
  }
  else {
    plVar11 = param_1;
    if (uVar7 != 0) {
      uVar7 = (uVar7 * 0x30 - 0x30) / 0x30;
      plVar11 = plVar3;
      _bzero(plVar3,uVar7 * 0x30 + 0x30);
      plVar3 = plVar3 + uVar7 * 6 + 6;
    }
    param_1[1] = (long)plVar3;
  }
  return plVar11;
}



/* Entry: 10a5d2e0c; end: 10a5d2e97;  */

void FUN_10a5d2e0c(long *param_1,ulong param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long *extraout_x8;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined4 *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  float fVar18;
  float fVar19;
  float fVar22;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fStack_1a8;
  float fStack_1a4;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [8];
  float fStack_188;
  float fStack_184;
  undefined8 uStack_180;
  float fStack_178;
  float fStack_174;
  undefined8 uStack_170;
  float fStack_168;
  float fStack_164;
  undefined8 uStack_160;
  float fStack_158;
  float fStack_154;
  float afStack_150 [28];
  
  lVar8 = *param_1;
  if ((ulong)(param_1[2] - lVar8 >> 2) < param_2) {
    if (param_2 >> 0x3e != 0) {
      FUN_10a1941c0();
      puVar1 = (undefined4 *)param_1[1];
      if (puVar1 < (undefined4 *)param_1[2]) {
        puVar15 = puVar1 + 1;
        *puVar1 = (int)param_2;
      }
      else {
        lVar8 = (long)puVar1 - *param_1;
        uVar16 = (lVar8 >> 2) + 1;
        if (uVar16 >> 0x3e != 0) {
          FUN_10a1941c0();
          lVar8 = 200;
          if ((ulong)param_1[0x57] < 2) {
            lVar8 = 0x1e0;
          }
          fVar27 = *(float *)((long)param_1 + lVar8 + 0x168);
          afStack_150[0x12] = 0.0;
          afStack_150[0x13] = 0.0;
          afStack_150[0x10] = 0.0;
          afStack_150[0x11] = 0.0;
          afStack_150[0x16] = 0.0;
          afStack_150[0x17] = 0.0;
          afStack_150[0x14] = 0.0;
          afStack_150[0x15] = 0.0;
          afStack_150[10] = 0.0;
          afStack_150[0xb] = 0.0;
          afStack_150[8] = 0.0;
          afStack_150[9] = 0.0;
          afStack_150[0xe] = 0.0;
          afStack_150[0xf] = 0.0;
          afStack_150[0xc] = 0.0;
          afStack_150[0xd] = 0.0;
          afStack_150[2] = 0.0;
          afStack_150[3] = 0.0;
          afStack_150[0] = 0.0;
          afStack_150[1] = 0.0;
          afStack_150[6] = 0.0;
          afStack_150[7] = 0.0;
          afStack_150[4] = 0.0;
          afStack_150[5] = 0.0;
          FUN_10a00561c(param_2,afStack_150,8);
          *extraout_x8 = 0;
          extraout_x8[1] = 0;
          extraout_x8[2] = 0;
          if (param_1[0x57] != 0) {
            uVar16 = 0;
            uVar12 = NEON_fmov(0xbf800000,4);
            auVar20 = NEON_fmov(0x3f800000,4);
            fStack_1a8 = auVar20._8_4_;
            fStack_1a4 = auVar20._12_4_;
            do {
              lVar8 = 0;
              uStack_198 = 0xff7fffffff7fffff;
              uStack_1a0 = 0x7f7fffff7f7fffff;
              do {
                func_0x000109519fd0(auStack_190,param_1 + uVar16 * 0x22 + 0x6a,param_3);
                fVar18 = *(float *)((long)afStack_150 + lVar8);
                fVar23 = *(float *)((long)afStack_150 + lVar8 + 4);
                fVar24 = *(float *)((long)afStack_150 + lVar8 + 8);
                fVar26 = fVar18 * fStack_184 + fVar23 * fStack_174 +
                         fVar24 * fStack_164 + fStack_154;
                fVar19 = auStack_190._0_4_ * fVar18 + (float)uStack_180 * fVar23 +
                         (float)uStack_170 * fVar24 + (float)uStack_160;
                fVar22 = auStack_190._4_4_ * fVar18 + (float)((ulong)uStack_180 >> 0x20) * fVar23 +
                         (float)((ulong)uStack_170 >> 0x20) * fVar24 +
                         (float)((ulong)uStack_160 >> 0x20);
                uVar9 = CONCAT44(fVar22,fVar19);
                uVar7 = (uint)(fVar18 * fStack_188 + fVar23 * fStack_178 +
                               fVar24 * fStack_168 + fStack_158 < fVar27);
                uVar9 = uVar9 ^ (uVar9 ^ CONCAT44(-fVar22,-fVar19)) &
                                CONCAT44(-(uint)((int)(uVar7 << 0x1f) < 0),
                                         -(uint)((int)(uVar7 << 0x1f) < 0));
                fVar18 = (float)uVar9 / fVar26;
                fVar26 = (float)(uVar9 >> 0x20) / fVar26;
                uVar9 = CONCAT44(fVar26,fVar18);
                auVar21._0_8_ =
                     uVar9 ^ (uVar9 ^ uVar12) &
                             CONCAT44(-(uint)(fVar26 < (float)(uVar12 >> 0x20)),
                                      -(uint)(fVar18 < (float)uVar12));
                auVar21._8_8_ = auVar21._0_8_;
                auVar25._8_8_ = uStack_198;
                auVar25._0_8_ = uStack_1a0;
                fVar18 = (float)(auVar21._0_8_ >> 0x20);
                auVar3._4_4_ = -(uint)(auVar20._4_4_ < fVar18);
                auVar3._0_4_ = -(uint)(auVar20._0_4_ < (float)auVar21._0_8_);
                auVar3._8_4_ = -(uint)(fStack_1a8 < (float)auVar21._0_8_);
                auVar3._12_4_ = -(uint)(fStack_1a4 < fVar18);
                auVar21 = auVar21 ^ (auVar21 ^ auVar20) & auVar3;
                auVar4._4_4_ = -(uint)(auVar21._4_4_ < (float)((ulong)uStack_1a0 >> 0x20));
                auVar4._0_4_ = -(uint)(auVar21._0_4_ < (float)uStack_1a0);
                auVar4._8_4_ = -(uint)((float)uStack_198 < auVar21._0_4_);
                auVar4._12_4_ = -(uint)((float)((ulong)uStack_198 >> 0x20) < auVar21._4_4_);
                auVar25 = auVar25 ^ (auVar25 ^ auVar21) & auVar4;
                uStack_198 = auVar25._8_8_;
                uStack_1a0 = auVar25._0_8_;
                lVar8 = lVar8 + 0xc;
              } while (lVar8 != 0x60);
              puVar2 = (undefined8 *)extraout_x8[1];
              if (puVar2 < (undefined8 *)extraout_x8[2]) {
                puVar17 = puVar2 + 2;
                puVar2[1] = uStack_198;
                *puVar2 = uStack_1a0;
              }
              else {
                lVar8 = (long)puVar2 - *extraout_x8;
                uVar9 = (lVar8 >> 4) + 1;
                if (uVar9 >> 0x3c != 0) {
                  FUN_10a191ca4();
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a5d31cc);
                  (*pcVar5)();
                }
                uVar10 = extraout_x8[2] - *extraout_x8;
                uVar13 = (long)uVar10 >> 3;
                if (uVar13 <= uVar9) {
                  uVar13 = uVar9;
                }
                if (0x7fffffffffffffef < uVar10) {
                  uVar13 = 0xfffffffffffffff;
                }
                plVar6 = extraout_x8;
                FUN_10a191cb8();
                puVar2 = (undefined8 *)((long)plVar6 + lVar8);
                puVar17 = puVar2 + 2;
                puVar2[1] = uStack_198;
                *puVar2 = uStack_1a0;
                lVar11 = (long)puVar2 - (extraout_x8[1] - *extraout_x8);
                _memcpy(lVar11);
                lVar8 = *extraout_x8;
                *extraout_x8 = lVar11;
                extraout_x8[1] = (long)puVar17;
                extraout_x8[2] = (long)(plVar6 + uVar13 * 2);
                if (lVar8 != 0) {
                  __ZdlPv();
                }
              }
              extraout_x8[1] = (long)puVar17;
              uVar16 = uVar16 + 1;
            } while (uVar16 < (ulong)param_1[0x57]);
          }
          return;
        }
        uVar9 = param_1[2] - *param_1;
        uVar12 = (long)uVar9 >> 1;
        if (uVar12 <= uVar16) {
          uVar12 = uVar16;
        }
        if (0x7ffffffffffffffb < uVar9) {
          uVar12 = 0x3fffffffffffffff;
        }
        plVar6 = param_1;
        FUN_10a1941d4();
        lVar11 = *param_1;
        puVar1 = (undefined4 *)((long)plVar6 + lVar8);
        lVar14 = (long)puVar1 - (param_1[1] - lVar11);
        puVar15 = puVar1 + 1;
        *puVar1 = (int)param_2;
        _memcpy(lVar14,lVar11);
        lVar8 = *param_1;
        *param_1 = lVar14;
        param_1[1] = (long)puVar15;
        param_1[2] = (long)plVar6 + uVar12 * 4;
        if (lVar8 != 0) {
          __ZdlPv();
        }
      }
      param_1[1] = (long)puVar15;
      return;
    }
    lVar11 = param_1[1];
    plVar6 = param_1;
    FUN_10a1941d4();
    lVar8 = (long)plVar6 + (lVar11 - lVar8);
    lVar14 = lVar8 - (param_1[1] - *param_1);
    _memcpy(lVar14);
    lVar11 = *param_1;
    *param_1 = lVar14;
    param_1[1] = lVar8;
    param_1[2] = (long)plVar6 + param_2 * 4;
    if (lVar11 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 10a5d2e98; end: 10a5d2f5b;  */

void FUN_10a5d2e98(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  long *extraout_x8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined4 *puVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  float fVar18;
  float fVar19;
  float fVar22;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fStack_178;
  float fStack_174;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [8];
  float fStack_158;
  float fStack_154;
  undefined8 uStack_150;
  float fStack_148;
  float fStack_144;
  undefined8 uStack_140;
  float fStack_138;
  float fStack_134;
  undefined8 uStack_130;
  float fStack_128;
  float fStack_124;
  float afStack_120 [28];
  
  puVar1 = (undefined4 *)param_1[1];
  if (puVar1 < (undefined4 *)param_1[2]) {
    puVar14 = puVar1 + 1;
    *puVar1 = (int)param_2;
  }
  else {
    lVar12 = (long)puVar1 - *param_1;
    uVar16 = (lVar12 >> 2) + 1;
    if (uVar16 >> 0x3e != 0) {
      FUN_10a1941c0();
      lVar12 = 200;
      if ((ulong)param_1[0x57] < 2) {
        lVar12 = 0x1e0;
      }
      fVar27 = *(float *)((long)param_1 + lVar12 + 0x168);
      afStack_120[0x12] = 0.0;
      afStack_120[0x13] = 0.0;
      afStack_120[0x10] = 0.0;
      afStack_120[0x11] = 0.0;
      afStack_120[0x16] = 0.0;
      afStack_120[0x17] = 0.0;
      afStack_120[0x14] = 0.0;
      afStack_120[0x15] = 0.0;
      afStack_120[10] = 0.0;
      afStack_120[0xb] = 0.0;
      afStack_120[8] = 0.0;
      afStack_120[9] = 0.0;
      afStack_120[0xe] = 0.0;
      afStack_120[0xf] = 0.0;
      afStack_120[0xc] = 0.0;
      afStack_120[0xd] = 0.0;
      afStack_120[2] = 0.0;
      afStack_120[3] = 0.0;
      afStack_120[0] = 0.0;
      afStack_120[1] = 0.0;
      afStack_120[6] = 0.0;
      afStack_120[7] = 0.0;
      afStack_120[4] = 0.0;
      afStack_120[5] = 0.0;
      FUN_10a00561c(param_2,afStack_120,8);
      *extraout_x8 = 0;
      extraout_x8[1] = 0;
      extraout_x8[2] = 0;
      if (param_1[0x57] != 0) {
        uVar16 = 0;
        uVar10 = NEON_fmov(0xbf800000,4);
        auVar20 = NEON_fmov(0x3f800000,4);
        fStack_178 = auVar20._8_4_;
        fStack_174 = auVar20._12_4_;
        do {
          lVar12 = 0;
          uStack_168 = 0xff7fffffff7fffff;
          uStack_170 = 0x7f7fffff7f7fffff;
          do {
            func_0x000109519fd0(auStack_160,param_1 + uVar16 * 0x22 + 0x6a,param_3);
            fVar18 = *(float *)((long)afStack_120 + lVar12);
            fVar23 = *(float *)((long)afStack_120 + lVar12 + 4);
            fVar24 = *(float *)((long)afStack_120 + lVar12 + 8);
            fVar26 = fVar18 * fStack_154 + fVar23 * fStack_144 + fVar24 * fStack_134 + fStack_124;
            fVar19 = auStack_160._0_4_ * fVar18 + (float)uStack_150 * fVar23 +
                     (float)uStack_140 * fVar24 + (float)uStack_130;
            fVar22 = auStack_160._4_4_ * fVar18 + (float)((ulong)uStack_150 >> 0x20) * fVar23 +
                     (float)((ulong)uStack_140 >> 0x20) * fVar24 +
                     (float)((ulong)uStack_130 >> 0x20);
            uVar8 = CONCAT44(fVar22,fVar19);
            uVar7 = (uint)(fVar18 * fStack_158 + fVar23 * fStack_148 +
                           fVar24 * fStack_138 + fStack_128 < fVar27);
            uVar8 = uVar8 ^ (uVar8 ^ CONCAT44(-fVar22,-fVar19)) &
                            CONCAT44(-(uint)((int)(uVar7 << 0x1f) < 0),
                                     -(uint)((int)(uVar7 << 0x1f) < 0));
            fVar18 = (float)uVar8 / fVar26;
            fVar26 = (float)(uVar8 >> 0x20) / fVar26;
            uVar8 = CONCAT44(fVar26,fVar18);
            auVar21._0_8_ =
                 uVar8 ^ (uVar8 ^ uVar10) &
                         CONCAT44(-(uint)(fVar26 < (float)(uVar10 >> 0x20)),
                                  -(uint)(fVar18 < (float)uVar10));
            auVar21._8_8_ = auVar21._0_8_;
            auVar25._8_8_ = uStack_168;
            auVar25._0_8_ = uStack_170;
            fVar18 = (float)(auVar21._0_8_ >> 0x20);
            auVar3._4_4_ = -(uint)(auVar20._4_4_ < fVar18);
            auVar3._0_4_ = -(uint)(auVar20._0_4_ < (float)auVar21._0_8_);
            auVar3._8_4_ = -(uint)(fStack_178 < (float)auVar21._0_8_);
            auVar3._12_4_ = -(uint)(fStack_174 < fVar18);
            auVar21 = auVar21 ^ (auVar21 ^ auVar20) & auVar3;
            auVar4._4_4_ = -(uint)(auVar21._4_4_ < (float)((ulong)uStack_170 >> 0x20));
            auVar4._0_4_ = -(uint)(auVar21._0_4_ < (float)uStack_170);
            auVar4._8_4_ = -(uint)((float)uStack_168 < auVar21._0_4_);
            auVar4._12_4_ = -(uint)((float)((ulong)uStack_168 >> 0x20) < auVar21._4_4_);
            auVar25 = auVar25 ^ (auVar25 ^ auVar21) & auVar4;
            uStack_168 = auVar25._8_8_;
            uStack_170 = auVar25._0_8_;
            lVar12 = lVar12 + 0xc;
          } while (lVar12 != 0x60);
          puVar2 = (undefined8 *)extraout_x8[1];
          if (puVar2 < (undefined8 *)extraout_x8[2]) {
            puVar17 = puVar2 + 2;
            puVar2[1] = uStack_168;
            *puVar2 = uStack_170;
          }
          else {
            lVar12 = (long)puVar2 - *extraout_x8;
            uVar8 = (lVar12 >> 4) + 1;
            if (uVar8 >> 0x3c != 0) {
              FUN_10a191ca4();
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10a5d31cc);
              (*pcVar5)();
            }
            uVar9 = extraout_x8[2] - *extraout_x8;
            uVar11 = (long)uVar9 >> 3;
            if (uVar11 <= uVar8) {
              uVar11 = uVar8;
            }
            if (0x7fffffffffffffef < uVar9) {
              uVar11 = 0xfffffffffffffff;
            }
            plVar6 = extraout_x8;
            FUN_10a191cb8();
            puVar2 = (undefined8 *)((long)plVar6 + lVar12);
            puVar17 = puVar2 + 2;
            puVar2[1] = uStack_168;
            *puVar2 = uStack_170;
            lVar15 = (long)puVar2 - (extraout_x8[1] - *extraout_x8);
            _memcpy(lVar15);
            lVar12 = *extraout_x8;
            *extraout_x8 = lVar15;
            extraout_x8[1] = (long)puVar17;
            extraout_x8[2] = (long)(plVar6 + uVar11 * 2);
            if (lVar12 != 0) {
              __ZdlPv();
            }
          }
          extraout_x8[1] = (long)puVar17;
          uVar16 = uVar16 + 1;
        } while (uVar16 < (ulong)param_1[0x57]);
      }
      return;
    }
    uVar8 = param_1[2] - *param_1;
    uVar10 = (long)uVar8 >> 1;
    if (uVar10 <= uVar16) {
      uVar10 = uVar16;
    }
    if (0x7ffffffffffffffb < uVar8) {
      uVar10 = 0x3fffffffffffffff;
    }
    plVar6 = param_1;
    FUN_10a1941d4();
    lVar15 = *param_1;
    puVar1 = (undefined4 *)((long)plVar6 + lVar12);
    lVar13 = (long)puVar1 - (param_1[1] - lVar15);
    puVar14 = puVar1 + 1;
    *puVar1 = (int)param_2;
    _memcpy(lVar13,lVar15);
    lVar12 = *param_1;
    *param_1 = lVar13;
    param_1[1] = (long)puVar14;
    param_1[2] = (long)plVar6 + uVar10 * 4;
    if (lVar12 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar14;
  return;
}



/* Entry: 10a5d2f5c; end: 10a5d31ef;  */

void FUN_10a5d2f5c(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  code *pcVar4;
  long *plVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  float fVar13;
  float fVar14;
  float fVar18;
  ulong uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  ulong uVar24;
  float fStack_138;
  float fStack_134;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [8];
  float fStack_118;
  float fStack_114;
  undefined8 uStack_110;
  float fStack_108;
  float fStack_104;
  undefined8 uStack_100;
  float fStack_f8;
  float fStack_f4;
  undefined8 uStack_f0;
  float fStack_e8;
  float fStack_e4;
  float afStack_e0 [28];
  
  lVar11 = 200;
  if (*(ulong *)(param_2 + 0x2b8) < 2) {
    lVar11 = 0x1e0;
  }
  fVar23 = *(float *)(param_2 + lVar11 + 0x168);
  afStack_e0[0x12] = 0.0;
  afStack_e0[0x13] = 0.0;
  afStack_e0[0x10] = 0.0;
  afStack_e0[0x11] = 0.0;
  afStack_e0[0x16] = 0.0;
  afStack_e0[0x17] = 0.0;
  afStack_e0[0x14] = 0.0;
  afStack_e0[0x15] = 0.0;
  afStack_e0[10] = 0.0;
  afStack_e0[0xb] = 0.0;
  afStack_e0[8] = 0.0;
  afStack_e0[9] = 0.0;
  afStack_e0[0xe] = 0.0;
  afStack_e0[0xf] = 0.0;
  afStack_e0[0xc] = 0.0;
  afStack_e0[0xd] = 0.0;
  afStack_e0[2] = 0.0;
  afStack_e0[3] = 0.0;
  afStack_e0[0] = 0.0;
  afStack_e0[1] = 0.0;
  afStack_e0[6] = 0.0;
  afStack_e0[7] = 0.0;
  afStack_e0[4] = 0.0;
  afStack_e0[5] = 0.0;
  FUN_10a00561c(param_3,afStack_e0,8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (*(long *)(param_2 + 0x2b8) != 0) {
    uVar10 = 0;
    uVar24 = NEON_fmov(0xbf800000,4);
    auVar16 = NEON_fmov(0x3f800000,4);
    fStack_138 = auVar16._8_4_;
    fStack_134 = auVar16._12_4_;
    do {
      lVar11 = 0;
      uStack_128 = 0xff7fffffff7fffff;
      uStack_130 = 0x7f7fffff7f7fffff;
      do {
        func_0x000109519fd0(auStack_120,param_2 + 0x350 + uVar10 * 0x110,param_4);
        fVar13 = *(float *)((long)afStack_e0 + lVar11);
        fVar19 = *(float *)((long)afStack_e0 + lVar11 + 4);
        fVar20 = *(float *)((long)afStack_e0 + lVar11 + 8);
        fVar22 = fVar13 * fStack_114 + fVar19 * fStack_104 + fVar20 * fStack_f4 + fStack_e4;
        fVar14 = auStack_120._0_4_ * fVar13 + (float)uStack_110 * fVar19 +
                 (float)uStack_100 * fVar20 + (float)uStack_f0;
        fVar18 = auStack_120._4_4_ * fVar13 + (float)((ulong)uStack_110 >> 0x20) * fVar19 +
                 (float)((ulong)uStack_100 >> 0x20) * fVar20 + (float)((ulong)uStack_f0 >> 0x20);
        uVar15 = CONCAT44(fVar18,fVar14);
        uVar6 = (uint)(fVar13 * fStack_118 + fVar19 * fStack_108 + fVar20 * fStack_f8 + fStack_e8 <
                      fVar23);
        uVar15 = uVar15 ^ (uVar15 ^ CONCAT44(-fVar18,-fVar14)) &
                          CONCAT44(-(uint)((int)(uVar6 << 0x1f) < 0),
                                   -(uint)((int)(uVar6 << 0x1f) < 0));
        fVar13 = (float)uVar15 / fVar22;
        fVar22 = (float)(uVar15 >> 0x20) / fVar22;
        uVar15 = CONCAT44(fVar22,fVar13);
        auVar17._0_8_ =
             uVar15 ^ (uVar15 ^ uVar24) &
                      CONCAT44(-(uint)(fVar22 < (float)(uVar24 >> 0x20)),
                               -(uint)(fVar13 < (float)uVar24));
        auVar17._8_8_ = auVar17._0_8_;
        auVar21._8_8_ = uStack_128;
        auVar21._0_8_ = uStack_130;
        fVar13 = (float)(auVar17._0_8_ >> 0x20);
        auVar2._4_4_ = -(uint)(auVar16._4_4_ < fVar13);
        auVar2._0_4_ = -(uint)(auVar16._0_4_ < (float)auVar17._0_8_);
        auVar2._8_4_ = -(uint)(fStack_138 < (float)auVar17._0_8_);
        auVar2._12_4_ = -(uint)(fStack_134 < fVar13);
        auVar17 = auVar17 ^ (auVar17 ^ auVar16) & auVar2;
        auVar3._4_4_ = -(uint)(auVar17._4_4_ < (float)((ulong)uStack_130 >> 0x20));
        auVar3._0_4_ = -(uint)(auVar17._0_4_ < (float)uStack_130);
        auVar3._8_4_ = -(uint)((float)uStack_128 < auVar17._0_4_);
        auVar3._12_4_ = -(uint)((float)((ulong)uStack_128 >> 0x20) < auVar17._4_4_);
        auVar21 = auVar21 ^ (auVar21 ^ auVar17) & auVar3;
        uStack_128 = auVar21._8_8_;
        uStack_130 = auVar21._0_8_;
        lVar11 = lVar11 + 0xc;
      } while (lVar11 != 0x60);
      puVar1 = (undefined8 *)param_1[1];
      if (puVar1 < (undefined8 *)param_1[2]) {
        puVar12 = puVar1 + 2;
        puVar1[1] = uStack_128;
        *puVar1 = uStack_130;
      }
      else {
        lVar11 = (long)puVar1 - *param_1;
        uVar15 = (lVar11 >> 4) + 1;
        if (uVar15 >> 0x3c != 0) {
          FUN_10a191ca4();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a5d31cc);
          (*pcVar4)();
        }
        uVar7 = param_1[2] - *param_1;
        uVar8 = (long)uVar7 >> 3;
        if (uVar8 <= uVar15) {
          uVar8 = uVar15;
        }
        if (0x7fffffffffffffef < uVar7) {
          uVar8 = 0xfffffffffffffff;
        }
        plVar5 = param_1;
        FUN_10a191cb8();
        puVar1 = (undefined8 *)((long)plVar5 + lVar11);
        puVar12 = puVar1 + 2;
        puVar1[1] = uStack_128;
        *puVar1 = uStack_130;
        lVar9 = (long)puVar1 - (param_1[1] - *param_1);
        _memcpy(lVar9);
        lVar11 = *param_1;
        *param_1 = lVar9;
        param_1[1] = (long)puVar12;
        param_1[2] = (long)(plVar5 + uVar8 * 2);
        if (lVar11 != 0) {
          __ZdlPv();
        }
      }
      param_1[1] = (long)puVar12;
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(ulong *)(param_2 + 0x2b8));
  }
  return;
}



/* Entry: 10a5d31f0; end: 10a5d333f;  */

void FUN_10a5d31f0(long *param_1,long param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  FUN_10a5e3a78(param_1,*(undefined8 *)(param_2 + 0x2b8));
  if (*(long *)(param_2 + 0x2b8) != 0) {
    lVar3 = 0;
    uVar4 = 0;
    puVar5 = (undefined8 *)(param_2 + 0x2c0);
    do {
      if ((ulong)(param_1[1] - *param_1 >> 4) <= uVar4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a5d3260);
        (*pcVar2)();
      }
      uVar6 = *puVar5;
      puVar1 = (undefined8 *)(*param_1 + lVar3);
      puVar1[1] = puVar5[1];
      *puVar1 = uVar6;
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 0x22;
      lVar3 = lVar3 + 0x10;
    } while (uVar4 < *(ulong *)(param_2 + 0x2b8));
  }
  return;
}



/* Entry: 10a5da8a8; end: 10a5da91f;  */

uint FUN_10a5da8a8(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x1e0) != '\x01') {
    return 1;
  }
  FUN_10a5da920();
  if (((*(long *)(param_1 + 0x200) != *(long *)(param_1 + 0x208)) &&
      (lVar1 = *(long *)(param_1 + 0x1e8),
      *(long *)(param_1 + 0x1f0) - lVar1 == *(long *)(param_1 + 0x208) - *(long *)(param_1 + 0x200))
      ) && (_memcmp(), (int)lVar1 == 0)) {
    lVar1 = param_1 + 0x218;
    FUN_10a5dc62c(lVar1,param_1 + 0x230);
    return (uint)lVar1 ^ 1;
  }
  return 1;
}



/* Entry: 10a5da920; end: 10a5dc62b;  */

void FUN_10a5da920(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined4 *puVar11;
  long lVar12;
  long *plStack_c0;
  long **pplStack_b8;
  undefined8 ***pppuStack_b0;
  long **pplStack_a8;
  long **pplStack_a0;
  long **pplStack_98;
  long **pplStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long lStack_58;
  
  lVar12 = *(long *)(param_1 + 0x20);
  lVar8 = param_1 + 0x1e8;
  *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(param_1 + 0x1e8);
  *(undefined8 *)(param_1 + 0x220) = *(undefined8 *)(param_1 + 0x218);
  if (*(long *)(param_1 + 0x200) == *(long *)(param_1 + 0x208)) {
    lVar6 = 0x1000;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x210) - *(long *)(param_1 + 0x200);
  }
  func_0x000107c31950(lVar8,lVar6);
  if (*(long *)(param_1 + 0x230) == *(long *)(param_1 + 0x238)) {
    lVar6 = 0x400;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x240) - *(long *)(param_1 + 0x230) >> 2;
  }
  func_0x0001073b504c(param_1 + 0x218,lVar6);
  plStack_68 = &lStack_60;
  pplStack_90 = &plStack_88;
  plStack_88 = &lStack_70;
  plStack_80 = &lStack_70;
  plStack_78 = &lStack_70;
  lStack_70 = param_1 + 0x218;
  lStack_60 = lVar8;
  FUN_10a107700(lVar8,*(undefined8 *)(param_1 + 0x1f0),lVar12 + 0x50,lVar12 + 0x51,1);
  FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar12 + 0x60,lVar12 + 0x62,2);
  FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar12 + 0x62,lVar12 + 100,2);
  FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar12 + 100,lVar12 + 0x66,2);
  FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar12 + 0x338,lVar12 + 0x339,1);
  FUN_10a5dc860(&pplStack_90,lVar12 + 0x2f8);
  pplStack_b8 = &plStack_68;
  pplStack_a8 = &plStack_80;
  pplStack_98 = &plStack_78;
  lStack_58 = (*(long *)(lVar12 + 0x120) - *(long *)(lVar12 + 0x118) >> 4) * -0x30c30c30c30c30c3;
  plStack_c0 = &lStack_70;
  pppuStack_b0 = &pplStack_90;
  pplStack_a0 = &plStack_88;
  FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),&lStack_58,&stack0xffffffffffffffb0,8);
  lVar6 = *(long *)(lVar12 + 0x120);
  for (lVar8 = *(long *)(lVar12 + 0x118); lVar8 != lVar6; lVar8 = lVar8 + 0x150) {
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8,lVar8 + 1,1);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8 + 1,lVar8 + 2,1);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8 + 2,lVar8 + 3,1);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8 + 8,lVar8 + 0x18,0x10);
    lStack_58._0_4_ = *(undefined4 *)(lVar8 + 0x18);
    FUN_10a0ca014(lStack_70,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar8 + 0x1c);
    FUN_10a0ca014(lStack_70,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar8 + 0x20);
    FUN_10a0ca014(lStack_70,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar8 + 0x24);
    FUN_10a0ca014(lStack_70,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar8 + 0x28);
    FUN_10a0ca014(lStack_70,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar8 + 0x2c);
    FUN_10a0ca014(*plStack_80,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar8 + 0x30);
    FUN_10a0ca014(*plStack_80,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar8 + 0x34);
    FUN_10a0ca014(*plStack_80,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar8 + 0x38);
    FUN_10a0ca014(*plStack_88,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar8 + 0x3c);
    FUN_10a0ca014(*plStack_88,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar8 + 0x40);
    FUN_10a0ca014(*plStack_88,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar8 + 0x44);
    FUN_10a0ca014(*plStack_88,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar8 + 0x48);
    FUN_10a0ca014(*plStack_88,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar8 + 0x4c);
    FUN_10a0ca014(*plStack_88,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar8 + 0x50);
    FUN_10a0ca014(*plStack_88,&lStack_58);
    lStack_58 = CONCAT44(lStack_58._4_4_,*(undefined4 *)(lVar8 + 0x54));
    FUN_10a0ca014(*plStack_88,&lStack_58);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8 + 0x58,lVar8 + 0x68,0x10);
    func_0x00010a5dca20(&plStack_c0,lVar8 + 0x68);
  }
  lStack_58 = (*(long *)(lVar12 + 0x138) - *(long *)(lVar12 + 0x130) >> 3) * -0x7063e7063e7063e7;
  FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),&lStack_58,&stack0xffffffffffffffb0,8);
  lVar8 = *(long *)(lVar12 + 0x138);
  lVar6 = *(long *)(lVar12 + 0x130);
  while (lVar6 != lVar8) {
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar6,lVar6 + 1,1);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar6 + 8,lVar6 + 0x18,0x10);
    lStack_58._0_4_ = *(undefined4 *)(lVar6 + 0x18);
    FUN_10a0ca014(lStack_70,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar6 + 0x1c);
    FUN_10a0ca014(lStack_70,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar6 + 0x20);
    FUN_10a0ca014(lStack_70,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar6 + 0x24);
    FUN_10a0ca014(lStack_70,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar6 + 0x28);
    FUN_10a0ca014(*plStack_80,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar6 + 0x2c);
    FUN_10a0ca014(*plStack_80,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar6 + 0x30);
    FUN_10a0ca014(*plStack_80,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar6 + 0x34);
    FUN_10a0ca014(*plStack_80,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar6 + 0x38);
    FUN_10a0ca014(*plStack_80,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar6 + 0x3c);
    FUN_10a0ca014(*plStack_80,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar6 + 0x40);
    FUN_10a0ca014(*plStack_88,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar6 + 0x44);
    FUN_10a0ca014(*plStack_88,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar6 + 0x48);
    FUN_10a0ca014(*plStack_88,&lStack_58);
    lStack_58 = CONCAT44(lStack_58._4_4_,*(undefined4 *)(lVar6 + 0x4c));
    FUN_10a0ca014(*plStack_88,&lStack_58);
    func_0x00010a5dca20(&plStack_c0,lVar6 + 0x50);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar6 + 0x138,lVar6 + 0x148,0x10);
    lVar6 = lVar6 + 0x148;
  }
  lStack_58 = (*(long *)(lVar12 + 0x150) - *(long *)(lVar12 + 0x148) >> 3) * -0xf0f0f0f0f0f0f0f;
  FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),&lStack_58,&stack0xffffffffffffffb0,8);
  lVar8 = *(long *)(lVar12 + 0x150);
  lVar6 = *(long *)(lVar12 + 0x148);
  while (lVar6 != lVar8) {
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar6,lVar6 + 1,1);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar6 + 8,lVar6 + 0x18,0x10);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar6 + 0x18,lVar6 + 0x19,1);
    lStack_58 = *(long *)(lVar6 + 0x20);
    FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),&lStack_58,&stack0xffffffffffffffb0,8);
    lStack_58 = *(long *)(lVar6 + 0x28);
    FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),&lStack_58,&stack0xffffffffffffffb0,8);
    lStack_58 = *(long *)(lVar6 + 0x30);
    FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),&lStack_58,&stack0xffffffffffffffb0,8);
    lStack_58 = *(long *)(lVar6 + 0x38);
    FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),&lStack_58,&stack0xffffffffffffffb0,8);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar6 + 0x78,lVar6 + 0x88,0x10);
    lVar6 = lVar6 + 0x88;
  }
  lStack_58 = (*(long *)(lVar12 + 0x168) - *(long *)(lVar12 + 0x160) >> 4) * -0x5555555555555555;
  FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),&lStack_58,&stack0xffffffffffffffb0,8);
  lVar6 = *(long *)(lVar12 + 0x168);
  for (lVar8 = *(long *)(lVar12 + 0x160); lVar8 != lVar6; lVar8 = lVar8 + 0x30) {
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8,lVar8 + 0x10,0x10);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8 + 0x10,lVar8 + 0x11,1);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8 + 0x18,lVar8 + 0x28,0x10);
    lStack_58 = *(long *)(lVar8 + 0x28);
    FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),&lStack_58,&stack0xffffffffffffffb0,8);
  }
  lStack_58 = *(long *)(lVar12 + 0x180) - *(long *)(lVar12 + 0x178) >> 3;
  FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),&lStack_58,&stack0xffffffffffffffb0,8);
  plVar3 = *(long **)(lVar12 + 0x180);
  for (plVar10 = *(long **)(lVar12 + 0x178); plVar10 != plVar3; plVar10 = plVar10 + 1) {
    lStack_58 = *plVar10;
    FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),&lStack_58,&stack0xffffffffffffffb0,8);
  }
  lStack_58 = (*(long *)(lVar12 + 0x1b0) - *(long *)(lVar12 + 0x1a8) >> 3) * -0x5555555555555555;
  FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),&lStack_58,&stack0xffffffffffffffb0,8);
  lVar6 = *(long *)(lVar12 + 0x1b0);
  for (lVar8 = *(long *)(lVar12 + 0x1a8); lVar8 != lVar6; lVar8 = lVar8 + 0x18) {
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8,lVar8 + 1,1);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8 + 2,lVar8 + 4,2);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8 + 4,lVar8 + 8,4);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8 + 8,lVar8 + 0xc,4);
    lStack_58 = *(long *)(lVar8 + 0x10);
    FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),&lStack_58,&stack0xffffffffffffffb0,8);
  }
  lStack_58 = *(long *)(lVar12 + 0x1c8) - *(long *)(lVar12 + 0x1c0) >> 4;
  FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),&lStack_58,&stack0xffffffffffffffb0,8);
  lVar6 = *(long *)(lVar12 + 0x1c8);
  for (lVar8 = *(long *)(lVar12 + 0x1c0); lVar8 != lVar6; lVar8 = lVar8 + 0x10) {
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8,lVar8 + 2,2);
    lStack_58 = *(long *)(lVar8 + 8);
    FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),&lStack_58,&stack0xffffffffffffffb0,8);
  }
  lStack_58 = *(long *)(lVar12 + 0x230) - *(long *)(lVar12 + 0x228) >> 6;
  FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),&lStack_58,&stack0xffffffffffffffb0,8);
  lVar6 = *(long *)(lVar12 + 0x230);
  for (lVar8 = *(long *)(lVar12 + 0x228); lVar8 != lVar6; lVar8 = lVar8 + 0x40) {
    lStack_58._0_4_ = *(undefined4 *)(lVar8 + 0x38);
    FUN_10a0ca014(*plStack_78,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar8 + 0x3c);
    FUN_10a0ca014(*plStack_78,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar8 + 0x24);
    FUN_10a0ca014(*plStack_78,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar8 + 0x28);
    FUN_10a0ca014(*plStack_78,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar8 + 0x2c);
    FUN_10a0ca014(*plStack_78,&lStack_58);
    lStack_58 = CONCAT44(lStack_58._4_4_,*(undefined4 *)(lVar8 + 0x30));
    FUN_10a0ca014(*plStack_78,&lStack_58);
  }
  lVar6 = *(long *)(lVar12 + 0x1d8);
  lVar8 = *(long *)(lVar12 + 0x1f0);
  lStack_58 = lVar8;
  FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),&lStack_58,&stack0xffffffffffffffb0,8);
  if (lVar8 != 0) {
    lVar7 = lVar6;
    do {
      FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar7 + 0x18,lVar7 + 0x19,1);
      FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar7 + 0x19,lVar7 + 0x1a,1);
      FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar7 + 0x1a,lVar7 + 0x1b,1);
      FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar7 + 0x1b,lVar7 + 0x1c,1);
      FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar7 + 0x1c,lVar7 + 0x1d,1);
      FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar7 + 0x20,lVar7 + 0x50,0x30);
      FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar7 + 0x50,lVar7 + 100,0x14);
      FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar7 + 100,lVar7 + 0x65,1);
      FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar7 + 0x65,lVar7 + 0x66,1);
      FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar7 + 0x66,lVar7 + 0x67,1);
      FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar7 + 0x68,lVar7 + 0x6c,4);
      FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar7 + 0x6c,lVar7 + 0x70,4);
      lStack_58._0_4_ = *(undefined4 *)(lVar7 + 0x70);
      FUN_10a0ca014(*plStack_78,&lStack_58);
      lStack_58._0_4_ = *(undefined4 *)(lVar7 + 0x74);
      FUN_10a0ca014(*plStack_78,&lStack_58);
      lStack_58 = CONCAT44(lStack_58._4_4_,*(undefined4 *)(lVar7 + 0x78));
      FUN_10a0ca014(lStack_70,&lStack_58);
      lStack_58 = *(long *)(lVar7 + 0x80);
      FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),&lStack_58,&stack0xffffffffffffffb0,8);
      FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar7 + 0xe0,lVar7 + 0xe8,8);
      FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar7 + 0xd0,lVar7 + 0xd4,4);
      FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar7 + 0xa0,lVar7 + 0xa8,8);
      FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar7 + 0xb0,lVar7 + 0xb8,8);
      lStack_58 = *(long *)(lVar7 + 0x160);
      FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),&lStack_58,&stack0xffffffffffffffb0,8);
      lStack_58 = *(long *)(lVar7 + 0x158);
      FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),&lStack_58,&stack0xffffffffffffffb0,8);
      lVar1 = lVar7 + 0x178;
      FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar7 + 0x168,lVar1,0x10);
      lStack_58 = (*(long *)(lVar7 + 0xf0) - *(long *)(lVar7 + 0xe8) >> 3) * 0x4ec4ec4ec4ec4ec5;
      FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),&lStack_58,&stack0xffffffffffffffb0,8);
      lVar4 = *(long *)(lVar7 + 0xf0);
      if (*(long *)(lVar7 + 0xe8) != lVar4) {
        lVar9 = *(long *)(lVar7 + 0xe8) + 0x3a;
        do {
          lStack_58 = *(long *)(lVar9 + -10);
          FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),&lStack_58,&stack0xffffffffffffffb0
                        ,8);
          FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar9 + -2,lVar9,2);
          lVar2 = lVar9 + 0x2e;
          lVar9 = lVar9 + 0x68;
        } while (lVar2 != lVar4);
      }
      lStack_58 = *(long *)(lVar7 + 0x118);
      FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),&lStack_58,&stack0xffffffffffffffb0,8);
      for (plVar10 = *(long **)(lVar7 + 0x110); plVar10 != (long *)0x0; plVar10 = (long *)*plVar10)
      {
        lStack_58 = plVar10[5];
        FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),&lStack_58,
                      &stack0xffffffffffffffb0,8);
        lStack_58 = plVar10[10];
        FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),&lStack_58,&stack0xffffffffffffffb0,8
                     );
        FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),plVar10 + 0xc,(long)plVar10 + 100
                      ,4);
        FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),(long)plVar10 + 100,plVar10 + 0xd
                      ,4);
      }
      lStack_58 = *(long *)(lVar7 + 0x140);
      FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),&lStack_58,&stack0xffffffffffffffb0,8);
      for (plVar10 = *(long **)(lVar7 + 0x138); plVar10 != (long *)0x0; plVar10 = (long *)*plVar10)
      {
        lStack_58 = plVar10[5];
        FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),&lStack_58,
                      &stack0xffffffffffffffb0,8);
        lStack_58 = plVar10[10];
        FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),&lStack_58,&stack0xffffffffffffffb0,8
                     );
        FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),plVar10 + 0xc,(long)plVar10 + 100
                      ,4);
        FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),(long)plVar10 + 100,plVar10 + 0xd
                      ,4);
      }
      lVar7 = lVar1;
    } while (lVar1 != lVar6 + lVar8 * 0x178);
  }
  lStack_58 = (*(long *)(lVar12 + 0x200) - *(long *)(lVar12 + 0x1f8) >> 3) * 0x6fb586fb586fb587;
  FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),&lStack_58,&stack0xffffffffffffffb0,8);
  lVar6 = *(long *)(lVar12 + 0x200);
  for (lVar8 = *(long *)(lVar12 + 0x1f8); lVar8 != lVar6; lVar8 = lVar8 + 0x1b8) {
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8,lVar8 + 1,1);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8 + 1,lVar8 + 2,1);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8 + 8,lVar8 + 0x18,0x10);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8 + 0x18,lVar8 + 0x1c,4);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8 + 0x1c,lVar8 + 0x1d,1);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8 + 0x1d,lVar8 + 0x1e,1);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8 + 0x1e,lVar8 + 0x1f,1);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8 + 0x28,lVar8 + 0x2a,2);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8 + 0x30,lVar8 + 0x40,0x10);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8 + 0x40,lVar8 + 0x44,4);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8 + 0x44,lVar8 + 0x48,4);
    lStack_58._0_4_ = *(undefined4 *)(lVar8 + 0x60);
    FUN_10a0ca014(*plStack_80,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar8 + 100);
    FUN_10a0ca014(*plStack_80,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar8 + 0x68);
    FUN_10a0ca014(*plStack_80,&lStack_58);
    FUN_10a5dc860(&pplStack_90,lVar8 + 0x6c);
    FUN_10a5dc860(&pplStack_90,lVar8 + 0xac);
    lStack_58._0_4_ = *(undefined4 *)(lVar8 + 0xec);
    FUN_10a0ca014(*plStack_88,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar8 + 0xf0);
    FUN_10a0ca014(*plStack_88,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar8 + 0xf4);
    FUN_10a0ca014(*plStack_88,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar8 + 0xf8);
    FUN_10a0ca014(*plStack_88,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar8 + 0xfc);
    FUN_10a0ca014(lStack_70,&lStack_58);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8 + 0x100,lVar8 + 0x101,1);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8 + 0x101,lVar8 + 0x102,1);
    lStack_58._0_4_ = *(undefined4 *)(lVar8 + 0x104);
    FUN_10a0ca014(lStack_70,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar8 + 0x108);
    FUN_10a0ca014(*plStack_80,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar8 + 0x10c);
    FUN_10a0ca014(*plStack_80,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar8 + 0x110);
    FUN_10a0ca014(*plStack_80,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar8 + 0x114);
    FUN_10a0ca014(*plStack_80,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar8 + 0x118);
    FUN_10a0ca014(*plStack_80,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar8 + 0x11c);
    FUN_10a0ca014(*plStack_80,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar8 + 0x120);
    FUN_10a0ca014(lStack_70,&lStack_58);
    lStack_58 = CONCAT44(lStack_58._4_4_,*(undefined4 *)(lVar8 + 0x124));
    FUN_10a0ca014(lStack_70,&lStack_58);
    lStack_58 = *(long *)(lVar8 + 0x140) - *(long *)(lVar8 + 0x138) >> 1;
    FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),&lStack_58,&stack0xffffffffffffffb0,8);
    lVar7 = *(long *)(lVar8 + 0x140) - *(long *)(lVar8 + 0x138);
    if (lVar7 != 0) {
      FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),*(long *)(lVar8 + 0x138),
                    *(long *)(lVar8 + 0x140),lVar7);
    }
    lStack_58 = *(long *)(lVar8 + 400) - *(long *)(lVar8 + 0x188) >> 6;
    FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),&lStack_58,&stack0xffffffffffffffb0,8);
    lVar1 = *(long *)(lVar8 + 400);
    for (lVar7 = *(long *)(lVar8 + 0x188); lVar7 != lVar1; lVar7 = lVar7 + 0x40) {
      FUN_10a5dc860(&pplStack_90,lVar7);
    }
    lStack_58 = (*(long *)(lVar8 + 0x178) - *(long *)(lVar8 + 0x170) >> 3) * -0x5555555555555555;
    FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),&lStack_58,&stack0xffffffffffffffb0,8);
    plVar3 = *(long **)(lVar8 + 0x178);
    for (plVar10 = *(long **)(lVar8 + 0x170); plVar10 != plVar3; plVar10 = plVar10 + 3) {
      lStack_58 = plVar10[1];
      FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),&lStack_58,&stack0xffffffffffffffb0
                    ,8);
      if (plVar10[1] != 0) {
        FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),*plVar10,*plVar10 + plVar10[1]);
      }
      lStack_58._0_4_ = (int)plVar10[2];
      FUN_10a0ca014(lStack_70,&lStack_58);
      lStack_58 = CONCAT44(lStack_58._4_4_,*(undefined4 *)((long)plVar10 + 0x14));
      FUN_10a0ca014(lStack_70,&lStack_58);
    }
    lStack_58 = (*(long *)(lVar8 + 0x158) - *(long *)(lVar8 + 0x150) >> 4) * -0x5555555555555555;
    FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),&lStack_58,&stack0xffffffffffffffb0,8);
    puVar5 = *(undefined4 **)(lVar8 + 0x158);
    for (puVar11 = *(undefined4 **)(lVar8 + 0x150); puVar11 != puVar5; puVar11 = puVar11 + 0xc) {
      lStack_58._0_4_ = *puVar11;
      FUN_10a0ca014(*plStack_78,&lStack_58);
      lStack_58._0_4_ = puVar11[1];
      FUN_10a0ca014(*plStack_78,&lStack_58);
      lStack_58._0_4_ = puVar11[2];
      FUN_10a0ca014(*plStack_78,&lStack_58);
      lStack_58._0_4_ = puVar11[3];
      FUN_10a0ca014(*plStack_78,&lStack_58);
      FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),puVar11 + 4,(long)puVar11 + 0x11,1)
      ;
      lStack_58 = CONCAT44(lStack_58._4_4_,puVar11[5]);
      FUN_10a0ca014(lStack_70,&lStack_58);
      FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),puVar11 + 6,puVar11 + 7,4);
      lStack_58 = *(long *)(puVar11 + 8);
      FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),&lStack_58,&stack0xffffffffffffffb0,8);
      FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),puVar11 + 10,puVar11 + 0xb,4);
    }
    lStack_58 = *(long *)(lVar8 + 0x168);
    FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),&lStack_58,&stack0xffffffffffffffb0,8);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8 + 2,lVar8 + 4,2);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8 + 0x24,lVar8 + 0x27,3);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8 + 0x48,
                  (undefined4 *)(lVar8 + 0x60),0x18);
    lStack_58 = *(long *)(lVar8 + 0x130);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),&lStack_58,&stack0xffffffffffffffb0,8
                 );
    if ((*(long *)(lVar8 + 0x130) != 0) && (lVar7 = *(long *)(lVar8 + 0x130) * 0x30, lVar7 != 0)) {
      FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),*(long *)(lVar8 + 0x128),
                    *(long *)(lVar8 + 0x128) + lVar7);
    }
    lStack_58 = *(long *)(lVar8 + 0x1a0);
    FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),&lStack_58,&stack0xffffffffffffffb0,8);
    lStack_58 = *(long *)(lVar8 + 0x1a8);
    FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),&lStack_58,&stack0xffffffffffffffb0,8);
    lStack_58 = *(long *)(lVar8 + 0x1b0);
    FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),&lStack_58,&stack0xffffffffffffffb0,8);
  }
  lStack_58 = (*(long *)(lVar12 + 0x198) - *(long *)(lVar12 + 400) >> 3) * 0x28cbfbeb9a020a33;
  FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),&lStack_58,&stack0xffffffffffffffb0,8);
  lVar6 = *(long *)(lVar12 + 0x198);
  for (lVar8 = *(long *)(lVar12 + 400); lVar8 != lVar6; lVar8 = lVar8 + 0x7d8) {
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8 + 0x10,lVar8 + 0x20,0x10);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8 + 0x20,lVar8 + 0x22,2);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8 + 0x22,lVar8 + 0x23,1);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8 + 0x23,lVar8 + 0x24,1);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8 + 0x24,lVar8 + 0x25,1);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8 + 0x25,lVar8 + 0x26,1);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8 + 0x28,lVar8 + 0x38,0x10);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8 + 0x38,lVar8 + 0x3c,4);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8 + 0x3c,lVar8 + 0x40,4);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8 + 0x40,lVar8 + 0x44,4);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8 + 0x44,lVar8 + 0x45,1);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8 + 0x48,lVar8 + 0x49,1);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8 + 0x49,lVar8 + 0x4a,1);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8 + 0x4a,lVar8 + 0x4b,1);
    lStack_58._0_4_ = *(undefined4 *)(lVar8 + 0x4c);
    FUN_10a0ca014(lStack_70,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar8 + 0x50);
    FUN_10a0ca014(lStack_70,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar8 + 0x54);
    FUN_10a0ca014(lStack_70,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar8 + 0x58);
    FUN_10a0ca014(lStack_70,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar8 + 0x5c);
    FUN_10a0ca014(lStack_70,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar8 + 0x60);
    FUN_10a0ca014(lStack_70,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar8 + 100);
    FUN_10a0ca014(lStack_70,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar8 + 0x68);
    FUN_10a0ca014(lStack_70,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar8 + 0x6c);
    FUN_10a0ca014(lStack_70,&lStack_58);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8 + 0xdc,lVar8 + 0xe0,4);
    FUN_10a5dc860(&pplStack_90,lVar8 + 0xe8);
    FUN_10a5dc860(&pplStack_90,lVar8 + 0x128);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8 + 0x1d9,lVar8 + 0x1da,1);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8 + 0x1dc,lVar8 + 0x1dd,1);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8 + 0x1dd,lVar8 + 0x1de,1);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8 + 0x1de,lVar8 + 0x1df,1);
    lStack_58._0_4_ = *(undefined4 *)(lVar8 + 0x1e0);
    FUN_10a0ca014(lStack_70,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar8 + 0x1e4);
    FUN_10a0ca014(lStack_70,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar8 + 0x1e8);
    FUN_10a0ca014(lStack_70,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar8 + 0x1ec);
    FUN_10a0ca014(lStack_70,&lStack_58);
    lStack_58._0_4_ = *(undefined4 *)(lVar8 + 0x1f0);
    FUN_10a0ca014(lStack_70,&lStack_58);
    lStack_58 = CONCAT44(lStack_58._4_4_,*(undefined4 *)(lVar8 + 500));
    FUN_10a0ca014(lStack_70,&lStack_58);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8 + 0x1f8,lVar8 + 0x1f9,1);
    lStack_58 = *(long *)(lVar8 + 0x1d0);
    FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),&lStack_58,&stack0xffffffffffffffb0,8);
    lStack_58 = (*(long *)(lVar8 + 0x170) - *(long *)(lVar8 + 0x168) >> 4) * -0x5555555555555555;
    FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),&lStack_58,&stack0xffffffffffffffb0,8);
    plVar3 = *(long **)(lVar8 + 0x170);
    for (plVar10 = *(long **)(lVar8 + 0x168); plVar10 != plVar3; plVar10 = plVar10 + 6) {
      lStack_58 = *plVar10;
      FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),&lStack_58,&stack0xffffffffffffffb0,8);
      lStack_58 = plVar10[1];
      FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),&lStack_58,&stack0xffffffffffffffb0,8);
      lStack_58 = plVar10[2];
      FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),&lStack_58,&stack0xffffffffffffffb0,8);
      lStack_58._0_4_ = (int)plVar10[3];
      FUN_10a0ca014(*plStack_88,&lStack_58);
      lStack_58._0_4_ = *(undefined4 *)((long)plVar10 + 0x1c);
      FUN_10a0ca014(*plStack_88,&lStack_58);
      lStack_58._0_4_ = (undefined4)plVar10[4];
      FUN_10a0ca014(*plStack_88,&lStack_58);
      lStack_58 = CONCAT44(lStack_58._4_4_,*(undefined4 *)((long)plVar10 + 0x24));
      FUN_10a0ca014(*plStack_88,&lStack_58);
      FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),plVar10 + 5,(long)plVar10 + 0x29,1)
      ;
      FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),(long)plVar10 + 0x29,
                    (long)plVar10 + 0x2a,1);
    }
    lStack_58 = *(long *)(lVar8 + 0x180);
    FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),&lStack_58,&stack0xffffffffffffffb0,8);
    lStack_58 = *(long *)(lVar8 + 0x188);
    FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),&lStack_58,&stack0xffffffffffffffb0,8);
    lStack_58 = *(long *)(lVar8 + 400);
    FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),&lStack_58,&stack0xffffffffffffffb0,8);
    lStack_58 = CONCAT44(lStack_58._4_4_,*(undefined4 *)(lVar8 + 0x198));
    FUN_10a0ca014(lStack_70,&lStack_58);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8 + 0x19c,lVar8 + 0x19d,1);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8 + 0x19d,lVar8 + 0x19e,1);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8 + 0x19e,lVar8 + 0x19f,1);
  }
  lStack_58 = (*(long *)(lVar12 + 0x218) - *(long *)(lVar12 + 0x210) >> 3) * -0x3333333333333333;
  FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),&lStack_58,&stack0xffffffffffffffb0,8);
  lVar6 = *(long *)(lVar12 + 0x218);
  for (lVar8 = *(long *)(lVar12 + 0x210); lVar8 != lVar6; lVar8 = lVar8 + 0x28) {
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8,lVar8 + 1,1);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8 + 1,lVar8 + 2,1);
    lStack_58 = CONCAT44(lStack_58._4_4_,*(undefined4 *)(lVar8 + 4));
    FUN_10a0ca014(lStack_70,&lStack_58);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8 + 8,lVar8 + 10,2);
    FUN_10a107700(*plStack_68,*(undefined8 *)(*plStack_68 + 8),lVar8 + 0xc,lVar8 + 0x10,4);
    lStack_58 = *(long *)(lVar8 + 0x18) - *(long *)(lVar8 + 0x10) >> 2;
    FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),&lStack_58,&stack0xffffffffffffffb0,8);
    lVar12 = *(long *)(lVar8 + 0x18) - *(long *)(lVar8 + 0x10);
    if (lVar12 != 0) {
      FUN_10a107700(lStack_60,*(undefined8 *)(lStack_60 + 8),*(long *)(lVar8 + 0x10),
                    *(long *)(lVar8 + 0x18),lVar12);
    }
  }
  return;
}



/* Entry: 10a5dc62c; end: 10a5dc68f;  */

undefined8 FUN_10a5dc62c(long *param_1,long *param_2)

{
  bool bVar1;
  float *pfVar2;
  float *pfVar3;
  long lVar4;
  
  pfVar2 = (float *)*param_1;
  lVar4 = param_1[1] - (long)pfVar2;
  if (lVar4 != param_2[1] - *param_2) {
    return 0;
  }
  if ((float *)param_1[1] != pfVar2) {
    lVar4 = lVar4 >> 2;
    pfVar3 = (float *)*param_2;
    do {
      bVar1 = false;
      if ((NAN(*pfVar2)) && (bVar1 = true, !NAN(*pfVar3))) {
        bVar1 = false;
      }
      if ((!bVar1) && (1e-06 < ABS(*pfVar2 - *pfVar3))) {
        return 0;
      }
      lVar4 = lVar4 + -1;
      pfVar2 = pfVar2 + 1;
      pfVar3 = pfVar3 + 1;
    } while (lVar4 != 0);
  }
  return 1;
}



/* Entry: 10a5dc690; end: 10a5dc85f;  */

void FUN_10a5dc690(undefined1 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plStack_c0;
  long lStack_b8;
  long lStack_b0;
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
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined3 uStack_50;
  undefined5 uStack_4d;
  
  if (param_1[0x1e0] == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + 0x1f8);
    uVar3 = *(undefined8 *)(param_1 + 0x200);
    *(undefined8 *)(param_1 + 0x208) = *(undefined8 *)(param_1 + 0x1f0);
    *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(param_1 + 0x1e8);
    *(undefined8 *)(param_1 + 0x1f0) = uVar3;
    *(undefined8 *)(param_1 + 0x1f8) = *(undefined8 *)(param_1 + 0x210);
    *(undefined8 *)(param_1 + 0x210) = uVar2;
    *(undefined8 *)(param_1 + 0x1e8) = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x230);
    uVar2 = *(undefined8 *)(param_1 + 0x218);
    *(undefined8 *)(param_1 + 0x218) = uVar3;
    *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(param_1 + 0x220);
    *(undefined8 *)(param_1 + 0x230) = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x228);
    *(undefined8 *)(param_1 + 0x228) = *(undefined8 *)(param_1 + 0x240);
    *(undefined8 *)(param_1 + 0x240) = uVar2;
    *(undefined8 *)(param_1 + 0x220) = uVar3;
    param_1[0x1e0] = 0;
  }
  *param_1 = 0;
  lStack_b8 = 0;
  lStack_b0 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_4d = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_88 = 0x3f800000;
  uStack_50 = 0;
  uStack_60 = 0x3f800000;
  uStack_54 = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  puVar4 = (undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  plStack_c0 = &lStack_b8;
  FUN_10a5bcccc(param_1 + 0x78,*puVar4);
  *(long **)(param_1 + 0x78) = plStack_c0;
  *(long *)(param_1 + 0x80) = lStack_b8;
  *(long *)(param_1 + 0x88) = lStack_b0;
  if (lStack_b0 == 0) {
    *(undefined8 **)(param_1 + 0x78) = puVar4;
  }
  else {
    *(undefined8 **)(lStack_b8 + 0x10) = puVar4;
    lStack_b8 = 0;
    lStack_b0 = 0;
    plStack_c0 = &lStack_b8;
  }
  func_0x00010a5e4dd4(param_1 + 0x90,&uStack_a8);
  func_0x00010a5e4e74(param_1 + 0xb8,&uStack_80);
  *(ulong *)(param_1 + 0xe0) = CONCAT44(uStack_54,uStack_58);
  *(uint *)(param_1 + 0xe7) = CONCAT31(uStack_50,uStack_54._3_1_);
  FUN_10a5bcdcc(&uStack_80);
  func_0x00010a5bcd0c(&uStack_a8);
  FUN_10a5bcccc(&plStack_c0,lStack_b8);
  plVar1 = *(long **)(param_1 + 0x170);
  *(undefined8 *)(param_1 + 0x170) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x178);
  *(undefined8 *)(param_1 + 0x178) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x180);
  *(undefined8 *)(param_1 + 0x180) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  return;
}



/* Entry: 10a5dc860; end: 10a5dcd33;  */

void FUN_10a5dc860(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined4 uStack_34;
  
  puVar1 = (undefined8 *)*param_1;
  uStack_34 = *param_2;
  FUN_10a0ca014(*(undefined8 *)*puVar1,&uStack_34);
  uStack_34 = param_2[1];
  FUN_10a0ca014(*(undefined8 *)*puVar1,&uStack_34);
  uStack_34 = param_2[2];
  FUN_10a0ca014(*(undefined8 *)*puVar1,&uStack_34);
  uStack_34 = param_2[3];
  FUN_10a0ca014(*(undefined8 *)*puVar1,&uStack_34);
  puVar1 = (undefined8 *)*param_1;
  uStack_34 = param_2[4];
  FUN_10a0ca014(*(undefined8 *)*puVar1,&uStack_34);
  uStack_34 = param_2[5];
  FUN_10a0ca014(*(undefined8 *)*puVar1,&uStack_34);
  uStack_34 = param_2[6];
  FUN_10a0ca014(*(undefined8 *)*puVar1,&uStack_34);
  uStack_34 = param_2[7];
  FUN_10a0ca014(*(undefined8 *)*puVar1,&uStack_34);
  puVar1 = (undefined8 *)*param_1;
  uStack_34 = param_2[8];
  FUN_10a0ca014(*(undefined8 *)*puVar1,&uStack_34);
  uStack_34 = param_2[9];
  FUN_10a0ca014(*(undefined8 *)*puVar1,&uStack_34);
  uStack_34 = param_2[10];
  FUN_10a0ca014(*(undefined8 *)*puVar1,&uStack_34);
  uStack_34 = param_2[0xb];
  FUN_10a0ca014(*(undefined8 *)*puVar1,&uStack_34);
  param_1 = (undefined8 *)*param_1;
  uStack_34 = param_2[0xc];
  FUN_10a0ca014(*(undefined8 *)*param_1,&uStack_34);
  uStack_34 = param_2[0xd];
  FUN_10a0ca014(*(undefined8 *)*param_1,&uStack_34);
  uStack_34 = param_2[0xe];
  FUN_10a0ca014(*(undefined8 *)*param_1,&uStack_34);
  uStack_34 = param_2[0xf];
  FUN_10a0ca014(*(undefined8 *)*param_1,&uStack_34);
  return;
}



/* Entry: 10a5dcd34; end: 10a5df5bb;  */

/* WARNING: Removing unreachable block (ram,0x00010a5de578) */
/* WARNING: Removing unreachable block (ram,0x00010a5de608) */
/* WARNING: Removing unreachable block (ram,0x00010a5de9f0) */

void FUN_10a5dcd34(byte *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 *puVar1;
  float *pfVar2;
  undefined1 *puVar3;
  long lVar4;
  byte *pbVar5;
  uint uVar6;
  byte bVar7;
  ushort uVar8;
  long *plVar9;
  undefined *puVar10;
  undefined *puVar11;
  code *pcVar12;
  bool bVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  byte *pbVar16;
  long lVar17;
  byte *pbVar18;
  long *plVar19;
  long lVar20;
  undefined8 *puVar21;
  long lVar22;
  long lVar23;
  int iVar24;
  byte *pbVar25;
  byte *pbVar26;
  byte *pbVar27;
  long *plVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  undefined8 *puVar32;
  byte *pbVar33;
  long lVar34;
  ulong uVar35;
  byte *pbVar36;
  ulong uVar37;
  byte *pbVar38;
  ulong uVar39;
  long *plVar40;
  byte *pbVar41;
  undefined4 *puVar42;
  long lVar43;
  ulong uVar44;
  undefined1 *puVar45;
  uint *puVar46;
  long lVar47;
  undefined8 *puVar48;
  char *pcVar49;
  long lVar50;
  undefined8 *puVar51;
  undefined2 *puVar52;
  ulong uVar53;
  ulong uVar54;
  byte *unaff_x23;
  long lVar55;
  ulong uVar56;
  long lVar57;
  uint *puVar58;
  byte *pbVar59;
  float fVar60;
  float fVar61;
  undefined8 uVar62;
  float fVar63;
  undefined8 uVar64;
  ulong uVar65;
  undefined8 uVar66;
  float fVar67;
  undefined8 uVar68;
  float fVar69;
  undefined8 uVar70;
  float fVar71;
  float fVar72;
  float fVar74;
  float fVar75;
  undefined8 uVar73;
  undefined8 uVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  ulong uStack_1e8;
  long lStack_190;
  byte *pbStack_188;
  long *plStack_180;
  ulong uStack_178;
  float fStack_170;
  undefined8 uStack_160;
  float fStack_158;
  undefined8 uStack_150;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  undefined4 uStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  float fStack_118;
  undefined4 uStack_114;
  byte *pbStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  byte *pbStack_f8;
  byte *pbStack_f0;
  undefined8 uStack_e8;
  byte **ppbStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 1;
  FUN_10a5df5bc(param_1 + 8,param_3);
  func_0x00010a5e4dd4(param_1 + 0x7a0,param_4);
  func_0x00010a5e4e74(param_1 + 0x7c8,param_4 + 0x28);
  *(undefined8 *)(param_1 + 0x798) = param_5;
  pbVar16 = param_1 + 0x5c0;
  func_0x00010a5dfbd8();
  pbStack_188 = (byte *)0x0;
  lStack_190 = 0;
  uStack_178 = 0;
  plStack_180 = (long *)0x0;
  fStack_170 = 1.0;
  pbVar33 = (byte *)0x8;
  if (0x45 < *(int *)(param_1 + 0x20)) {
    pbVar33 = (byte *)0xfe;
  }
  lVar20 = *(long *)(param_1 + 0x120);
  lVar30 = *(long *)(param_1 + 0x128);
  pbVar25 = (byte *)((lVar30 - lVar20 >> 4) * -0x30c30c30c30c30c3);
  pbVar38 = pbVar33;
  if (pbVar25 <= pbVar33) {
    pbVar38 = pbVar25;
  }
  lVar55 = *(long *)(param_1 + 0x138);
  lVar31 = *(long *)(param_1 + 0x140);
  pbVar26 = (byte *)((lVar31 - lVar55 >> 3) * -0x7063e7063e7063e7);
  pbVar25 = pbVar33;
  if (pbVar26 <= pbVar33) {
    pbVar25 = pbVar26;
  }
  lVar22 = *(long *)(param_1 + 0x150);
  lVar34 = *(long *)(param_1 + 0x158);
  pbVar27 = (byte *)((lVar34 - lVar22 >> 3) * -0xf0f0f0f0f0f0f0f);
  pbVar26 = pbVar33;
  if (pbVar27 <= pbVar33) {
    pbVar26 = pbVar27;
  }
  lVar23 = *(long *)(param_1 + 0x168);
  lVar4 = *(long *)(param_1 + 0x170);
  pbVar27 = (byte *)((lVar4 - lVar23 >> 4) * -0x5555555555555555);
  if (pbVar27 <= pbVar33) {
    pbVar33 = pbVar27;
  }
  lVar47 = *(long *)(param_1 + 0x5f8);
  lVar43 = *(long *)(param_1 + 0x5f0);
  while (lVar47 != lVar43) {
    lVar47 = lVar47 + -0x78;
    func_0x00010a5e815c(lVar47);
  }
  *(long *)(param_1 + 0x5f8) = lVar43;
  lVar43 = *(long *)(param_1 + 0x200);
  lVar17 = *(long *)(param_1 + 0x208);
  lVar47 = lVar43;
  if (lVar43 != lVar17) {
    do {
      pbVar59 = pbStack_188;
      pbVar27 = *(byte **)(lVar43 + 0x30);
      pbVar5 = *(byte **)(lVar43 + 0x38);
      lVar47 = *(long *)(param_1 + 0x5f8);
      lVar57 = *(long *)(param_1 + 0x5f0);
      if (pbStack_188 != (byte *)0x0) {
        pbVar18 = pbStack_188 + -1;
        if (((ulong)pbStack_188 & (ulong)pbVar18) == 0) {
          unaff_x23 = (byte *)((ulong)pbVar18 & (ulong)pbVar27);
        }
        else {
          unaff_x23 = pbVar27;
          if (pbStack_188 <= pbVar27) {
            uVar44 = 0;
            if (pbStack_188 != (byte *)0x0) {
              uVar44 = (ulong)pbVar27 / (ulong)pbStack_188;
            }
            unaff_x23 = pbVar27 + -(uVar44 * (long)pbStack_188);
          }
        }
        plVar28 = *(long **)(lStack_190 + (long)unaff_x23 * 8);
        if (plVar28 != (long *)0x0) {
          for (plVar28 = (long *)*plVar28; plVar28 != (long *)0x0; plVar28 = (long *)*plVar28) {
            pbVar36 = (byte *)plVar28[1];
            if (pbVar36 == pbVar27) {
              if ((byte *)plVar28[2] == pbVar27 && (byte *)plVar28[3] == pbVar5) goto LAB_10a5dd938;
            }
            else {
              if (((ulong)pbStack_188 & (ulong)pbVar18) == 0) {
                pbVar36 = (byte *)((ulong)pbVar36 & (ulong)pbVar18);
              }
              else if (pbStack_188 <= pbVar36) {
                uVar44 = 0;
                if (pbStack_188 != (byte *)0x0) {
                  uVar44 = (ulong)pbVar36 / (ulong)pbStack_188;
                }
                pbVar36 = pbVar36 + -(uVar44 * (long)pbStack_188);
              }
              if (pbVar36 != unaff_x23) break;
            }
          }
        }
      }
      plVar28 = (long *)0x28;
      __Znwm();
      *plVar28 = 0;
      plVar28[1] = (long)pbVar27;
      plVar28[2] = (long)pbVar27;
      plVar28[3] = (long)pbVar5;
      *(short *)(plVar28 + 4) = (short)((ulong)(lVar47 - lVar57) >> 3) * -0x1111;
      if ((pbVar59 == (byte *)0x0) || (fStack_170 * (float)pbVar59 < (float)(uStack_178 + 1))) {
        uVar44 = 1;
        if ((byte *)0x2 < pbVar59) {
          uVar44 = (ulong)(((ulong)pbVar59 & (ulong)(pbVar59 + -1)) != 0);
        }
        pbVar18 = (byte *)(uVar44 | (long)pbVar59 << 1);
        pbVar36 = (byte *)(long)((float)(uStack_178 + 1) / fStack_170);
        if (pbVar18 <= pbVar36) {
          pbVar18 = pbVar36;
        }
        if (pbVar18 + -1 == (byte *)0x0) {
          pbVar18 = (byte *)0x2;
        }
        else if (((ulong)pbVar18 & (ulong)(pbVar18 + -1)) != 0) {
          __ZNSt3__112__next_primeEm();
          pbVar59 = pbStack_188;
        }
        if (pbVar59 < pbVar18) {
LAB_10a5dd074:
          pbVar59 = pbVar18;
          if ((ulong)pbVar59 >> 0x3d != 0) {
            func_0x000109ffded8();
            goto LAB_10a5df4f0;
          }
          lVar47 = (long)pbVar59 << 3;
          __Znwm();
          bVar13 = lStack_190 != 0;
          lStack_190 = lVar47;
          if (bVar13) {
            __ZdlPv();
          }
          pbVar18 = (byte *)0x0;
          do {
            *(undefined8 *)(lStack_190 + (long)pbVar18 * 8) = 0;
            pbVar18 = pbVar18 + 1;
          } while (pbVar59 != pbVar18);
          pbStack_188 = pbVar59;
          if (plStack_180 != (long *)0x0) {
            pbVar18 = (byte *)plStack_180[1];
            pbVar36 = pbVar59 + -1;
            if (((ulong)pbVar59 & (ulong)pbVar36) == 0) {
              pbVar18 = (byte *)((ulong)pbVar18 & (ulong)pbVar36);
            }
            else if (pbVar59 <= pbVar18) {
              uVar44 = 0;
              if (pbVar59 != (byte *)0x0) {
                uVar44 = (ulong)pbVar18 / (ulong)pbVar59;
              }
              pbVar18 = pbVar18 + -(uVar44 * (long)pbVar59);
            }
            *(long ***)(lStack_190 + (long)pbVar18 * 8) = &plStack_180;
            plVar19 = (long *)*plStack_180;
            plVar9 = plStack_180;
            while (plVar19 != (long *)0x0) {
              pbVar41 = (byte *)plVar19[1];
              if (((ulong)pbVar59 & (ulong)pbVar36) == 0) {
                pbVar41 = (byte *)((ulong)pbVar41 & (ulong)pbVar36);
              }
              else if (pbVar59 <= pbVar41) {
                uVar44 = 0;
                if (pbVar59 != (byte *)0x0) {
                  uVar44 = (ulong)pbVar41 / (ulong)pbVar59;
                }
                pbVar41 = pbVar41 + -(uVar44 * (long)pbVar59);
              }
              plVar40 = plVar19;
              if (pbVar41 != pbVar18) {
                if (*(long *)(lStack_190 + (long)pbVar41 * 8) == 0) {
                  *(long **)(lStack_190 + (long)pbVar41 * 8) = plVar9;
                  pbVar18 = pbVar41;
                }
                else {
                  *plVar9 = *plVar19;
                  *plVar19 = **(long **)(lStack_190 + (long)pbVar41 * 8);
                  **(undefined8 **)(lStack_190 + (long)pbVar41 * 8) = plVar19;
                  plVar40 = plVar9;
                }
              }
              plVar9 = plVar40;
              plVar19 = (long *)*plVar40;
            }
          }
        }
        else if (pbVar18 < pbVar59) {
          pbVar36 = (byte *)(long)((float)uStack_178 / fStack_170);
          if ((pbVar59 < (byte *)0x3) || (((ulong)pbVar59 & (ulong)(pbVar59 + -1)) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if ((byte *)0x1 < pbVar36) {
            pbVar36 = (byte *)(1L << (-LZCOUNT(pbVar36 + -1) & 0x3fU));
          }
          lVar47 = lStack_190;
          if (pbVar18 <= pbVar36) {
            pbVar18 = pbVar36;
          }
          bVar13 = pbVar18 < pbVar59;
          pbVar59 = pbStack_188;
          if (bVar13) {
            if (pbVar18 != (byte *)0x0) goto LAB_10a5dd074;
            lStack_190 = 0;
            if (lVar47 != 0) {
              __ZdlPv();
            }
            pbStack_188 = (byte *)0x0;
            pbVar59 = (byte *)0x0;
          }
        }
        if (((ulong)pbVar59 & (ulong)(pbVar59 + -1)) == 0) {
          unaff_x23 = (byte *)((ulong)(pbVar59 + -1) & (ulong)pbVar27);
        }
        else {
          unaff_x23 = pbVar27;
          if (pbVar59 <= pbVar27) {
            uVar44 = 0;
            if (pbVar59 != (byte *)0x0) {
              uVar44 = (ulong)pbVar27 / (ulong)pbVar59;
            }
            unaff_x23 = pbVar27 + -(uVar44 * (long)pbVar59);
          }
        }
      }
      plVar19 = *(long **)(lStack_190 + (long)unaff_x23 * 8);
      if (plVar19 == (long *)0x0) {
        *plVar28 = (long)plStack_180;
        *(long ***)(lStack_190 + (long)unaff_x23 * 8) = &plStack_180;
        plStack_180 = plVar28;
        if (*plVar28 != 0) {
          pbVar18 = *(byte **)(*plVar28 + 8);
          if (((ulong)pbVar59 & (ulong)(pbVar59 + -1)) == 0) {
            pbVar18 = (byte *)((ulong)pbVar18 & (ulong)(pbVar59 + -1));
          }
          else if (pbVar59 <= pbVar18) {
            uVar44 = 0;
            if (pbVar59 != (byte *)0x0) {
              uVar44 = (ulong)pbVar18 / (ulong)pbVar59;
            }
            pbVar18 = pbVar18 + -(uVar44 * (long)pbVar59);
          }
          plVar19 = (long *)(lStack_190 + (long)pbVar18 * 8);
          goto LAB_10a5dd250;
        }
      }
      else {
        *plVar28 = *plVar19;
LAB_10a5dd250:
        *plVar19 = (long)plVar28;
      }
      uStack_178 = uStack_178 + 1;
      unaff_x23 = *(byte **)(param_1 + 0x5f8);
      if (unaff_x23 < *(byte **)(param_1 + 0x600)) {
        unaff_x23[0x70] = 0;
        unaff_x23[0x71] = 0;
        unaff_x23[0x72] = 0;
        unaff_x23[0x73] = 0;
        unaff_x23[0x74] = 0;
        unaff_x23[0x75] = 0;
        unaff_x23[0x76] = 0;
        unaff_x23[0x77] = 0;
        unaff_x23[0x58] = 0;
        unaff_x23[0x59] = 0;
        unaff_x23[0x5a] = 0;
        unaff_x23[0x5b] = 0;
        unaff_x23[0x5c] = 0;
        unaff_x23[0x5d] = 0;
        unaff_x23[0x5e] = 0;
        unaff_x23[0x5f] = 0;
        unaff_x23[0x50] = 0;
        unaff_x23[0x51] = 0;
        unaff_x23[0x52] = 0;
        unaff_x23[0x53] = 0;
        unaff_x23[0x54] = 0;
        unaff_x23[0x55] = 0;
        unaff_x23[0x56] = 0;
        unaff_x23[0x57] = 0;
        unaff_x23[0x68] = 0;
        unaff_x23[0x69] = 0;
        unaff_x23[0x6a] = 0;
        unaff_x23[0x6b] = 0;
        unaff_x23[0x6c] = 0;
        unaff_x23[0x6d] = 0;
        unaff_x23[0x6e] = 0;
        unaff_x23[0x6f] = 0;
        unaff_x23[0x60] = 0;
        unaff_x23[0x61] = 0;
        unaff_x23[0x62] = 0;
        unaff_x23[99] = 0;
        unaff_x23[100] = 0;
        unaff_x23[0x65] = 0;
        unaff_x23[0x66] = 0;
        unaff_x23[0x67] = 0;
        unaff_x23[0x38] = 0;
        unaff_x23[0x39] = 0;
        unaff_x23[0x3a] = 0;
        unaff_x23[0x3b] = 0;
        unaff_x23[0x3c] = 0;
        unaff_x23[0x3d] = 0;
        unaff_x23[0x3e] = 0;
        unaff_x23[0x3f] = 0;
        unaff_x23[0x30] = 0;
        unaff_x23[0x31] = 0;
        unaff_x23[0x32] = 0;
        unaff_x23[0x33] = 0;
        unaff_x23[0x34] = 0;
        unaff_x23[0x35] = 0;
        unaff_x23[0x36] = 0;
        unaff_x23[0x37] = 0;
        unaff_x23[0x48] = 0;
        unaff_x23[0x49] = 0;
        unaff_x23[0x4a] = 0;
        unaff_x23[0x4b] = 0;
        unaff_x23[0x4c] = 0;
        unaff_x23[0x4d] = 0;
        unaff_x23[0x4e] = 0;
        unaff_x23[0x4f] = 0;
        unaff_x23[0x40] = 0;
        unaff_x23[0x41] = 0;
        unaff_x23[0x42] = 0;
        unaff_x23[0x43] = 0;
        unaff_x23[0x44] = 0;
        unaff_x23[0x45] = 0;
        unaff_x23[0x46] = 0;
        unaff_x23[0x47] = 0;
        unaff_x23[0x18] = 0;
        unaff_x23[0x19] = 0;
        unaff_x23[0x1a] = 0;
        unaff_x23[0x1b] = 0;
        unaff_x23[0x1c] = 0;
        unaff_x23[0x1d] = 0;
        unaff_x23[0x1e] = 0;
        unaff_x23[0x1f] = 0;
        unaff_x23[0x10] = 0;
        unaff_x23[0x11] = 0;
        unaff_x23[0x12] = 0;
        unaff_x23[0x13] = 0;
        unaff_x23[0x14] = 0;
        unaff_x23[0x15] = 0;
        unaff_x23[0x16] = 0;
        unaff_x23[0x17] = 0;
        unaff_x23[0x28] = 0;
        unaff_x23[0x29] = 0;
        unaff_x23[0x2a] = 0;
        unaff_x23[0x2b] = 0;
        unaff_x23[0x2c] = 0;
        unaff_x23[0x2d] = 0;
        unaff_x23[0x2e] = 0;
        unaff_x23[0x2f] = 0;
        unaff_x23[0x20] = 0;
        unaff_x23[0x21] = 0;
        unaff_x23[0x22] = 0;
        unaff_x23[0x23] = 0;
        unaff_x23[0x24] = 0;
        unaff_x23[0x25] = 0;
        unaff_x23[0x26] = 0;
        unaff_x23[0x27] = 0;
        unaff_x23[8] = 0;
        unaff_x23[9] = 0;
        unaff_x23[10] = 0;
        unaff_x23[0xb] = 0;
        unaff_x23[0xc] = 0;
        unaff_x23[0xd] = 0;
        unaff_x23[0xe] = 0;
        unaff_x23[0xf] = 0;
        unaff_x23[0] = 0;
        unaff_x23[1] = 0;
        unaff_x23[2] = 0;
        unaff_x23[3] = 0;
        unaff_x23[4] = 0;
        unaff_x23[5] = 0;
        unaff_x23[6] = 0;
        unaff_x23[7] = 0;
        pbVar18 = unaff_x23 + 0x78;
        unaff_x23[0x70] = 0;
        unaff_x23[0x71] = 0;
        unaff_x23[0x72] = 0x80;
        unaff_x23[0x73] = 0x3f;
      }
      else {
        pbVar59 = *(byte **)(param_1 + 0x5f0);
        uVar44 = ((long)unaff_x23 - (long)pbVar59 >> 3) * -0x1111111111111111 + 1;
        if (0x222222222222222 < uVar44) {
          func_0x00010a5e81c0();
          goto LAB_10a5df4f0;
        }
        lVar47 = (long)*(byte **)(param_1 + 0x600) - (long)pbVar59 >> 3;
        uVar56 = lVar47 * -0x2222222222222222;
        if (uVar56 < uVar44 || uVar56 - uVar44 == 0) {
          uVar56 = uVar44;
        }
        if (0x111111111111110 < (ulong)(lVar47 * -0x1111111111111111)) {
          uVar56 = 0x222222222222222;
        }
        if (0x222222222222222 < uVar56) {
          func_0x000109ffded8();
          goto LAB_10a5df4f0;
        }
        puVar48 = (undefined8 *)(uVar56 * 0x78);
        __Znwm();
        puVar51 = (undefined8 *)((long)puVar48 + ((long)unaff_x23 - (long)pbVar59));
        puVar51[0xe] = 0;
        puVar51[0xb] = 0;
        puVar51[10] = 0;
        puVar51[0xd] = 0;
        puVar51[0xc] = 0;
        puVar51[7] = 0;
        puVar51[6] = 0;
        puVar51[9] = 0;
        puVar51[8] = 0;
        puVar51[3] = 0;
        puVar51[2] = 0;
        puVar51[5] = 0;
        puVar51[4] = 0;
        puVar51[1] = 0;
        *puVar51 = 0;
        *(undefined4 *)(puVar51 + 0xe) = 0x3f800000;
        pbVar18 = pbVar59;
        puVar21 = puVar48;
        if (pbVar59 != unaff_x23) {
          do {
            uVar73 = *(undefined8 *)pbVar18;
            puVar21[1] = *(undefined8 *)(pbVar18 + 8);
            *puVar21 = uVar73;
            puVar21[2] = *(undefined8 *)(pbVar18 + 0x10);
            pbVar18[0] = 0;
            pbVar18[1] = 0;
            pbVar18[2] = 0;
            pbVar18[3] = 0;
            pbVar18[4] = 0;
            pbVar18[5] = 0;
            pbVar18[6] = 0;
            pbVar18[7] = 0;
            pbVar18[8] = 0;
            pbVar18[9] = 0;
            pbVar18[10] = 0;
            pbVar18[0xb] = 0;
            pbVar18[0xc] = 0;
            pbVar18[0xd] = 0;
            pbVar18[0xe] = 0;
            pbVar18[0xf] = 0;
            pbVar18[0x10] = 0;
            pbVar18[0x11] = 0;
            pbVar18[0x12] = 0;
            pbVar18[0x13] = 0;
            pbVar18[0x14] = 0;
            pbVar18[0x15] = 0;
            pbVar18[0x16] = 0;
            pbVar18[0x17] = 0;
            puVar21[4] = 0;
            puVar21[5] = 0;
            uVar73 = *(undefined8 *)(pbVar18 + 0x18);
            puVar21[4] = *(undefined8 *)(pbVar18 + 0x20);
            puVar21[3] = uVar73;
            puVar21[5] = *(undefined8 *)(pbVar18 + 0x28);
            pbVar18[0x18] = 0;
            pbVar18[0x19] = 0;
            pbVar18[0x1a] = 0;
            pbVar18[0x1b] = 0;
            pbVar18[0x1c] = 0;
            pbVar18[0x1d] = 0;
            pbVar18[0x1e] = 0;
            pbVar18[0x1f] = 0;
            pbVar18[0x20] = 0;
            pbVar18[0x21] = 0;
            pbVar18[0x22] = 0;
            pbVar18[0x23] = 0;
            pbVar18[0x24] = 0;
            pbVar18[0x25] = 0;
            pbVar18[0x26] = 0;
            pbVar18[0x27] = 0;
            pbVar18[0x28] = 0;
            pbVar18[0x29] = 0;
            pbVar18[0x2a] = 0;
            pbVar18[0x2b] = 0;
            pbVar18[0x2c] = 0;
            pbVar18[0x2d] = 0;
            pbVar18[0x2e] = 0;
            pbVar18[0x2f] = 0;
            puVar21[7] = 0;
            puVar21[8] = 0;
            uVar73 = *(undefined8 *)(pbVar18 + 0x30);
            puVar21[7] = *(undefined8 *)(pbVar18 + 0x38);
            puVar21[6] = uVar73;
            puVar21[8] = *(undefined8 *)(pbVar18 + 0x40);
            pbVar18[0x30] = 0;
            pbVar18[0x31] = 0;
            pbVar18[0x32] = 0;
            pbVar18[0x33] = 0;
            pbVar18[0x34] = 0;
            pbVar18[0x35] = 0;
            pbVar18[0x36] = 0;
            pbVar18[0x37] = 0;
            pbVar18[0x38] = 0;
            pbVar18[0x39] = 0;
            pbVar18[0x3a] = 0;
            pbVar18[0x3b] = 0;
            pbVar18[0x3c] = 0;
            pbVar18[0x3d] = 0;
            pbVar18[0x3e] = 0;
            pbVar18[0x3f] = 0;
            pbVar18[0x40] = 0;
            pbVar18[0x41] = 0;
            pbVar18[0x42] = 0;
            pbVar18[0x43] = 0;
            pbVar18[0x44] = 0;
            pbVar18[0x45] = 0;
            pbVar18[0x46] = 0;
            pbVar18[0x47] = 0;
            puVar21[10] = 0;
            puVar21[0xb] = 0;
            uVar73 = *(undefined8 *)(pbVar18 + 0x48);
            puVar21[10] = *(undefined8 *)(pbVar18 + 0x50);
            puVar21[9] = uVar73;
            puVar21[0xb] = *(undefined8 *)(pbVar18 + 0x58);
            pbVar18[0x48] = 0;
            pbVar18[0x49] = 0;
            pbVar18[0x4a] = 0;
            pbVar18[0x4b] = 0;
            pbVar18[0x4c] = 0;
            pbVar18[0x4d] = 0;
            pbVar18[0x4e] = 0;
            pbVar18[0x4f] = 0;
            pbVar18[0x50] = 0;
            pbVar18[0x51] = 0;
            pbVar18[0x52] = 0;
            pbVar18[0x53] = 0;
            pbVar18[0x54] = 0;
            pbVar18[0x55] = 0;
            pbVar18[0x56] = 0;
            pbVar18[0x57] = 0;
            pbVar18[0x58] = 0;
            pbVar18[0x59] = 0;
            pbVar18[0x5a] = 0;
            pbVar18[0x5b] = 0;
            pbVar18[0x5c] = 0;
            pbVar18[0x5d] = 0;
            pbVar18[0x5e] = 0;
            pbVar18[0x5f] = 0;
            lVar47 = *(long *)(pbVar18 + 0x60);
            puVar21[0xc] = lVar47;
            if (lVar47 != 0) {
              lVar57 = 0;
              do {
                *(byte *)((long)puVar21 + lVar57 + 0x68) = pbVar18[lVar57 + 0x68];
                lVar57 = lVar57 + 1;
              } while (lVar47 != lVar57);
            }
            *(undefined4 *)(puVar21 + 0xe) = *(undefined4 *)(pbVar18 + 0x70);
            pbVar18 = pbVar18 + 0x78;
            puVar21 = puVar21 + 0xf;
          } while (pbVar18 != unaff_x23);
          do {
            func_0x00010a5e815c(pbVar59);
            pbVar59 = pbVar59 + 0x78;
          } while (pbVar59 != unaff_x23);
          pbVar59 = *(byte **)(param_1 + 0x5f0);
        }
        *(undefined8 **)(param_1 + 0x5f0) = puVar48;
        pbVar18 = (byte *)(puVar51 + 0xf);
        *(byte **)(param_1 + 0x5f8) = pbVar18;
        *(undefined8 **)(param_1 + 0x600) = puVar48 + uVar56 * 0xf;
        if (pbVar59 != (byte *)0x0) {
          __ZdlPv(pbVar59);
        }
      }
      *(byte **)(param_1 + 0x5f8) = pbVar18;
      if (*(byte **)(param_1 + 0x5f0) == pbVar18) goto LAB_10a5df4f0;
      if (lVar30 != lVar20) {
        unaff_x23 = (byte *)0x0;
        pbVar59 = (byte *)0x0;
        do {
          lVar47 = *(long *)(param_1 + 0x120);
          pbVar36 = (byte *)((*(long *)(param_1 + 0x128) - lVar47 >> 4) * -0x30c30c30c30c30c3);
          if (pbVar36 < pbVar59 || (long)pbVar36 - (long)pbVar59 == 0) goto LAB_10a5df4f0;
          if ((unaff_x23[lVar47] & 1) != 0) {
            uVar44 = *(ulong *)(unaff_x23 + lVar47 + 8);
            puVar51 = &uStack_108;
            pbStack_110 = pbVar27;
            uStack_108 = pbVar5;
            FUN_10a3c8d60(puVar51,unaff_x23 + lVar47 + 0x10);
            if ((uVar44 & (ulong)pbVar27) != 0 || ((ulong)puVar51 & 0xffff) != 0) {
              puVar3 = *(undefined1 **)(pbVar18 + -0x70);
              if (puVar3 < *(undefined1 **)(pbVar18 + -0x68)) {
                puVar45 = puVar3 + 1;
                *puVar3 = (char)pbVar59;
              }
              else {
                lVar47 = *(long *)(pbVar18 + -0x78);
                lVar57 = (long)puVar3 - lVar47;
                uVar44 = lVar57 + 1;
                if ((long)uVar44 < 0) {
                  func_0x00010a5e81d4();
                  goto LAB_10a5df4f0;
                }
                uVar37 = (long)*(undefined1 **)(pbVar18 + -0x68) - lVar47;
                uVar56 = uVar37 * 2;
                if (uVar56 < uVar44 || uVar56 - uVar44 == 0) {
                  uVar56 = uVar44;
                }
                if (0x3ffffffffffffffe < uVar37) {
                  uVar56 = 0x7fffffffffffffff;
                }
                if (uVar56 == 0) {
                  uVar44 = 0;
                }
                else {
                  uVar44 = uVar56;
                  __Znwm();
                }
                puVar45 = (undefined1 *)(uVar44 + lVar57) + 1;
                *(undefined1 *)(uVar44 + lVar57) = (char)pbVar59;
                _memcpy(uVar44,lVar47,lVar57);
                *(ulong *)(pbVar18 + -0x78) = uVar44;
                *(undefined1 **)(pbVar18 + -0x70) = puVar45;
                *(ulong *)(pbVar18 + -0x68) = uVar44 + uVar56;
                if (lVar47 != 0) {
                  __ZdlPv(lVar47);
                }
              }
              *(undefined1 **)(pbVar18 + -0x70) = puVar45;
            }
          }
          pbVar59 = pbVar59 + 1;
          unaff_x23 = unaff_x23 + 0x150;
        } while (pbVar38 != pbVar59);
      }
      if (lVar31 != lVar55) {
        unaff_x23 = (byte *)0x0;
        pbVar59 = (byte *)0x0;
        do {
          lVar47 = *(long *)(param_1 + 0x138);
          pbVar36 = (byte *)((*(long *)(param_1 + 0x140) - lVar47 >> 3) * -0x7063e7063e7063e7);
          if (pbVar36 < pbVar59 || (long)pbVar36 - (long)pbVar59 == 0) goto LAB_10a5df4f0;
          if ((unaff_x23[lVar47] & 1) != 0) {
            uVar44 = *(ulong *)(unaff_x23 + lVar47 + 8);
            puVar51 = &uStack_108;
            pbStack_110 = pbVar27;
            uStack_108 = pbVar5;
            FUN_10a3c8d60(puVar51,unaff_x23 + lVar47 + 0x10);
            if ((uVar44 & (ulong)pbVar27) != 0 || ((ulong)puVar51 & 0xffff) != 0) {
              puVar3 = *(undefined1 **)(pbVar18 + -0x58);
              if (puVar3 < *(undefined1 **)(pbVar18 + -0x50)) {
                puVar45 = puVar3 + 1;
                *puVar3 = (char)pbVar59;
              }
              else {
                lVar47 = *(long *)(pbVar18 + -0x60);
                lVar57 = (long)puVar3 - lVar47;
                uVar44 = lVar57 + 1;
                if ((long)uVar44 < 0) {
                  func_0x00010a5e81e8();
                  goto LAB_10a5df4f0;
                }
                uVar37 = (long)*(undefined1 **)(pbVar18 + -0x50) - lVar47;
                uVar56 = uVar37 * 2;
                if (uVar56 < uVar44 || uVar56 - uVar44 == 0) {
                  uVar56 = uVar44;
                }
                if (0x3ffffffffffffffe < uVar37) {
                  uVar56 = 0x7fffffffffffffff;
                }
                if (uVar56 == 0) {
                  uVar44 = 0;
                }
                else {
                  uVar44 = uVar56;
                  __Znwm();
                }
                puVar45 = (undefined1 *)(uVar44 + lVar57) + 1;
                *(undefined1 *)(uVar44 + lVar57) = (char)pbVar59;
                _memcpy(uVar44,lVar47,lVar57);
                *(ulong *)(pbVar18 + -0x60) = uVar44;
                *(undefined1 **)(pbVar18 + -0x58) = puVar45;
                *(ulong *)(pbVar18 + -0x50) = uVar44 + uVar56;
                if (lVar47 != 0) {
                  __ZdlPv(lVar47);
                }
              }
              *(undefined1 **)(pbVar18 + -0x58) = puVar45;
            }
          }
          pbVar59 = pbVar59 + 1;
          unaff_x23 = unaff_x23 + 0x148;
        } while (pbVar25 != pbVar59);
      }
      fVar83 = 1.0;
      if (lVar34 != lVar22) {
        lVar47 = 0;
        uStack_1e8 = 0;
        unaff_x23 = (byte *)0x0;
        do {
          lVar57 = *(long *)(param_1 + 0x150);
          pbVar59 = (byte *)((*(long *)(param_1 + 0x158) - lVar57 >> 3) * -0xf0f0f0f0f0f0f0f);
          if (pbVar59 < unaff_x23 || (long)pbVar59 - (long)unaff_x23 == 0) goto LAB_10a5df4f0;
          if ((*(byte *)(lVar57 + lVar47) & 1) != 0) {
            uVar44 = *(ulong *)(lVar57 + lVar47 + 8);
            puVar51 = &uStack_108;
            pbStack_110 = pbVar27;
            uStack_108 = pbVar5;
            FUN_10a3c8d60(puVar51,lVar57 + lVar47 + 0x10);
            if ((uVar44 & (ulong)pbVar27) != 0 || ((ulong)puVar51 & 0xffff) != 0) {
              lVar29 = *(long *)(pbVar18 + -0x48);
              puVar3 = *(undefined1 **)(pbVar18 + -0x40);
              lVar50 = (long)puVar3 - lVar29;
              if (lVar50 == 8) {
                if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
                  func_0x00010ae06f08(1,2,&UNK_10f66735a,&UNK_10f667671,0x456,&UNK_10f667719,param_7
                                      ,param_8,8);
                }
              }
              else {
                if (puVar3 < *(undefined1 **)(pbVar18 + -0x38)) {
                  puVar45 = puVar3 + 1;
                  *puVar3 = (char)unaff_x23;
                }
                else {
                  uVar44 = lVar50 + 1;
                  if ((long)uVar44 < 0) {
                    func_0x00010a5e81fc();
                    goto LAB_10a5df4f0;
                  }
                  uVar37 = (long)*(undefined1 **)(pbVar18 + -0x38) - lVar29;
                  uVar56 = uVar37 * 2;
                  if (uVar56 < uVar44 || uVar56 - uVar44 == 0) {
                    uVar56 = uVar44;
                  }
                  if (0x3ffffffffffffffe < uVar37) {
                    uVar56 = 0x7fffffffffffffff;
                  }
                  if (uVar56 == 0) {
                    uVar44 = 0;
                  }
                  else {
                    uVar44 = uVar56;
                    __Znwm();
                  }
                  puVar45 = (undefined1 *)(uVar44 + lVar50) + 1;
                  *(undefined1 *)(uVar44 + lVar50) = (char)unaff_x23;
                  _memcpy(uVar44,lVar29,lVar50);
                  *(ulong *)(pbVar18 + -0x48) = uVar44;
                  *(undefined1 **)(pbVar18 + -0x40) = puVar45;
                  *(ulong *)(pbVar18 + -0x38) = uVar44 + uVar56;
                  if (lVar29 != 0) {
                    __ZdlPv(lVar29);
                  }
                }
                *(undefined1 **)(pbVar18 + -0x40) = puVar45;
                lVar29 = *(long *)(pbVar18 + -0x18);
                pbVar18[lVar29 + -0x10] = *(byte *)(lVar57 + lVar47 + 0x40);
                *(long *)(pbVar18 + -0x18) = lVar29 + 1;
                if (*(char *)(lVar57 + lVar47 + 0x18) == '\x04') {
                  uStack_1e8 = uStack_1e8 + 1;
                }
              }
            }
          }
          unaff_x23 = unaff_x23 + 1;
          lVar47 = lVar47 + 0x88;
        } while (pbVar26 != unaff_x23);
        fVar83 = 1.0;
        if (uStack_1e8 != 0) {
          fVar83 = 1.0 / (float)uStack_1e8;
        }
      }
      *(float *)(pbVar18 + -8) = fVar83;
      if (lVar4 != lVar23) {
        unaff_x23 = (byte *)0x0;
        pbVar59 = (byte *)0x0;
        do {
          lVar47 = *(long *)(param_1 + 0x168);
          pbVar36 = (byte *)((*(long *)(param_1 + 0x170) - lVar47 >> 4) * -0x5555555555555555);
          if (pbVar36 < pbVar59 || (long)pbVar36 - (long)pbVar59 == 0) goto LAB_10a5df4f0;
          if ((unaff_x23[lVar47 + 0x10] & 1) != 0) {
            uVar44 = *(ulong *)(unaff_x23 + lVar47 + 0x18);
            puVar51 = &uStack_108;
            pbStack_110 = pbVar27;
            uStack_108 = pbVar5;
            FUN_10a3c8d60(puVar51,unaff_x23 + lVar47 + 0x20);
            if ((uVar44 & (ulong)pbVar27) != 0 || ((ulong)puVar51 & 0xffff) != 0) {
              puVar3 = *(undefined1 **)(pbVar18 + -0x28);
              if (puVar3 < *(undefined1 **)(pbVar18 + -0x20)) {
                puVar45 = puVar3 + 1;
                *puVar3 = (char)pbVar59;
              }
              else {
                lVar47 = *(long *)(pbVar18 + -0x30);
                lVar57 = (long)puVar3 - lVar47;
                uVar44 = lVar57 + 1;
                if ((long)uVar44 < 0) {
                  func_0x00010a5e8210();
                  goto LAB_10a5df4f0;
                }
                uVar37 = (long)*(undefined1 **)(pbVar18 + -0x20) - lVar47;
                uVar56 = uVar37 * 2;
                if (uVar56 < uVar44 || uVar56 - uVar44 == 0) {
                  uVar56 = uVar44;
                }
                if (0x3ffffffffffffffe < uVar37) {
                  uVar56 = 0x7fffffffffffffff;
                }
                if (uVar56 == 0) {
                  uVar44 = 0;
                }
                else {
                  uVar44 = uVar56;
                  __Znwm();
                }
                puVar45 = (undefined1 *)(uVar44 + lVar57) + 1;
                *(undefined1 *)(uVar44 + lVar57) = (char)pbVar59;
                _memcpy(uVar44,lVar47,lVar57);
                *(ulong *)(pbVar18 + -0x30) = uVar44;
                *(undefined1 **)(pbVar18 + -0x28) = puVar45;
                *(ulong *)(pbVar18 + -0x20) = uVar44 + uVar56;
                if (lVar47 != 0) {
                  __ZdlPv(lVar47);
                }
              }
              *(undefined1 **)(pbVar18 + -0x28) = puVar45;
            }
          }
          pbVar59 = pbVar59 + 1;
          unaff_x23 = unaff_x23 + 0x30;
        } while (pbVar33 != pbVar59);
      }
LAB_10a5dd938:
      lVar43 = lVar43 + 0x1b8;
    } while (lVar43 != lVar17);
    lVar43 = *(long *)(param_1 + 0x208);
    lVar47 = *(long *)(param_1 + 0x200);
  }
  lVar20 = lVar43 - lVar47 >> 3;
  uVar56 = lVar20 * 0x6fb586fb586fb587;
  puVar48 = *(undefined8 **)(param_1 + 0x5e0);
  puVar51 = *(undefined8 **)(param_1 + 0x5d8);
  lVar55 = (long)puVar48 - (long)puVar51;
  lVar30 = lVar55 >> 4;
  bVar13 = uVar56 < (ulong)(lVar30 * -0x1111111111111111);
  uVar44 = uVar56 + lVar30 * 0x1111111111111111;
  if (bVar13 || uVar44 == 0) {
    if (bVar13) {
      while (puVar48 != puVar51 + lVar20 * -0x8ba2e8ba2e8ba2e) {
        puVar48 = puVar48 + -0x1e;
        FUN_10a5e59f4(puVar48);
      }
      *(undefined8 **)(param_1 + 0x5e0) = puVar51 + lVar20 * -0x8ba2e8ba2e8ba2e;
    }
LAB_10a5ddc54:
    lVar20 = *(long *)(param_1 + 0x200);
    if (*(long *)(param_1 + 0x208) - lVar20 != 0) {
      uVar44 = 0;
      uVar56 = (*(long *)(param_1 + 0x208) - lVar20 >> 3) * 0x6fb586fb586fb587;
LAB_10a5ddc98:
      if (uVar44 < uVar56) {
        pcVar49 = (char *)(lVar20 + uVar44 * 0x1b8);
        if (pbStack_188 != (byte *)0x0) {
          pbVar33 = *(byte **)(pcVar49 + 0x30);
          pbVar38 = pbStack_188 + -1;
          if (((ulong)pbStack_188 & (ulong)pbVar38) == 0) {
            pbVar25 = (byte *)((ulong)pbVar38 & (ulong)pbVar33);
          }
          else {
            pbVar25 = pbVar33;
            if (pbStack_188 <= pbVar33) {
              uVar56 = 0;
              if (pbStack_188 != (byte *)0x0) {
                uVar56 = (ulong)pbVar33 / (ulong)pbStack_188;
              }
              pbVar25 = pbVar33 + -(uVar56 * (long)pbStack_188);
            }
          }
          plVar28 = *(long **)(lStack_190 + (long)pbVar25 * 8);
          if ((plVar28 != (long *)0x0) && (plVar28 = (long *)*plVar28, plVar28 != (long *)0x0)) {
            do {
              pbVar26 = (byte *)plVar28[1];
              if (pbVar26 == pbVar33) {
                if ((byte *)plVar28[2] == pbVar33 && plVar28[3] == *(long *)(pcVar49 + 0x38))
                goto LAB_10a5ddd48;
              }
              else {
                if (((ulong)pbStack_188 & (ulong)pbVar38) == 0) {
                  pbVar26 = (byte *)((ulong)pbVar26 & (ulong)pbVar38);
                }
                else if (pbStack_188 <= pbVar26) {
                  uVar56 = 0;
                  if (pbStack_188 != (byte *)0x0) {
                    uVar56 = (ulong)pbVar26 / (ulong)pbStack_188;
                  }
                  pbVar26 = pbVar26 + -(uVar56 * (long)pbStack_188);
                }
                if (pbVar26 != pbVar25) break;
              }
              plVar28 = (long *)*plVar28;
              if (plVar28 == (long *)0x0) break;
            } while( true );
          }
        }
        FUN_10a3c9114(&uStack_150,pcVar49 + 0x30,0);
        FUN_109feb280(&pbStack_110,&UNK_10f667435,&uStack_150);
        FUN_10a0029c0(&pbStack_110);
      }
      goto LAB_10a5df4f0;
    }
LAB_10a5ddf40:
    FUN_10a5e2aac(pbVar16,param_1 + 8);
    lVar20 = 0x668;
    do {
      if (*(long *)(param_1 + lVar20) != 0) {
        pbVar33 = param_1 + lVar20;
        pbVar33[0] = 0;
        pbVar33[1] = 0;
        pbVar33[2] = 0;
        pbVar33[3] = 0;
        pbVar33[4] = 0;
        pbVar33[5] = 0;
        pbVar33[6] = 0;
        pbVar33[7] = 0;
      }
      lVar20 = lVar20 + 8;
    } while (lVar20 != 0x720);
    lVar20 = 0;
    do {
      if (*(long *)(param_1 + lVar20 + 0x248) != 0) {
        pbVar33 = param_1 + lVar20 + 0x668;
        pbVar33[0] = 0;
        pbVar33[1] = 0;
        pbVar33[2] = 0;
        pbVar33[3] = 0;
        pbVar33[4] = 0;
        pbVar33[5] = 0;
        pbVar33[6] = 0;
        pbVar33[7] = 0;
      }
      lVar20 = lVar20 + 8;
    } while (lVar20 != 0xb8);
    lVar30 = *(long *)(param_1 + 0x198);
    lVar55 = *(long *)(param_1 + 0x1a0);
    lVar31 = lVar55 - lVar30 >> 3;
    uVar56 = lVar31 * 0x28cbfbeb9a020a33;
    lVar20 = *(long *)(param_1 + 0x5c8);
    lVar22 = *(long *)(param_1 + 0x5c0);
    lVar34 = lVar20 - lVar22 >> 3;
    bVar13 = uVar56 < (ulong)(lVar34 * 0x72baa619af84b583);
    uVar44 = uVar56 + lVar34 * -0x72baa619af84b583;
    if (bVar13 || uVar44 == 0) {
      if (bVar13) {
        lVar22 = lVar22 + lVar31 * 0x31f9e167030f4c88;
        while (lVar20 != lVar22) {
          lVar20 = lVar20 + -0x958;
          func_0x00010a5e80dc(lVar20);
        }
        goto LAB_10a5de114;
      }
    }
    else if ((ulong)((*(long *)(param_1 + 0x5d0) - lVar20 >> 3) * 0x72baa619af84b583) < uVar44) {
      if (0x1b65e2e3beee05 < uVar56) {
        FUN_10a5e8390();
        goto LAB_10a5df4f0;
      }
      lVar23 = *(long *)(param_1 + 0x5d0) - lVar22 >> 3;
      uVar37 = lVar23 * -0x1a8ab3cca0f694fa;
      if (uVar37 < uVar56 || uVar37 + lVar31 * -0x28cbfbeb9a020a33 == 0) {
        uVar37 = uVar56;
      }
      if (0xdb2f171df7701 < (ulong)(lVar23 * 0x72baa619af84b583)) {
        uVar37 = 0x1b65e2e3beee05;
      }
      pbVar25 = pbVar16;
      pbStack_f0 = pbVar16;
      FUN_10a5e83a4();
      pbVar38 = pbVar25 + (lVar20 - lVar22);
      lVar20 = lVar31 * 0x31f9e167030f4c88 + lVar34 * -8;
      pbVar33 = pbVar38;
      pbStack_110 = pbVar25;
      uStack_108 = pbVar38;
      pbStack_f8 = pbVar25 + uVar37 * 0x958;
      do {
        FUN_10a5e8224(pbVar33);
        pbVar33 = pbVar33 + 0x958;
        lVar20 = lVar20 + -0x958;
      } while (lVar20 != 0);
      lVar31 = *(long *)(param_1 + 0x5c8);
      lVar20 = *(long *)(param_1 + 0x5c0);
      uStack_100 = pbVar38 + uVar44 * 0x958;
      FUN_10a5e83ec(pbVar16,lVar20,lVar31,pbVar38 + (lVar20 - lVar31));
      pbStack_110 = *(byte **)(param_1 + 0x5c0);
      *(byte **)(param_1 + 0x5c0) = pbVar38 + (lVar20 - lVar31);
      *(byte **)(param_1 + 0x5c8) = pbVar38 + uVar44 * 0x958;
      pbStack_f8 = *(byte **)(param_1 + 0x5d0);
      *(byte **)(param_1 + 0x5d0) = pbVar25 + uVar37 * 0x958;
      uStack_108 = pbStack_110;
      uStack_100 = pbStack_110;
      FUN_10a5e86c8(&pbStack_110);
    }
    else {
      lVar22 = lVar20 + uVar44 * 0x958;
      lVar31 = lVar31 * 0x31f9e167030f4c88 + lVar34 * -8;
      do {
        FUN_10a5e8224(lVar20);
        lVar20 = lVar20 + 0x958;
        lVar31 = lVar31 + -0x958;
      } while (lVar31 != 0);
LAB_10a5de114:
      *(long *)(param_1 + 0x5c8) = lVar22;
    }
    puVar10 = PTR___tlv_bootstrap_11340d780;
    if (lVar55 != lVar30) {
      ppuVar14 = &PTR___tlv_bootstrap_11340d780;
      (*(code *)PTR___tlv_bootstrap_11340d780)();
      uVar44 = 0;
      do {
        uVar37 = (*(long *)(param_1 + 0x1a0) - *(long *)(param_1 + 0x198) >> 3) * 0x28cbfbeb9a020a33
        ;
        if ((uVar37 < (uVar44 & 0xffff) || uVar37 - (uVar44 & 0xffff) == 0) ||
           (uVar37 = (*(long *)(param_1 + 0x5c8) - *(long *)(param_1 + 0x5c0) >> 3) *
                     0x72baa619af84b583, uVar37 < uVar44 || uVar37 - uVar44 == 0))
        goto LAB_10a5df4f0;
        lVar55 = *(long *)(param_1 + 0x198) + (uVar44 & 0xffff) * 0x7d8;
        puVar51 = (undefined8 *)(*(long *)(param_1 + 0x5c0) + uVar44 * 0x958);
        lVar20 = *(long *)(param_1 + 0x5d8);
        lVar30 = *(long *)(param_1 + 0x5e0);
        uVar62 = *(undefined8 *)(lVar55 + 0x50);
        uVar73 = *(undefined8 *)(lVar55 + 0x48);
        uVar66 = *(undefined8 *)(lVar55 + 0x60);
        uVar64 = *(undefined8 *)(lVar55 + 0x58);
        puVar51[4] = *(undefined8 *)(lVar55 + 0x68);
        puVar51[1] = uVar62;
        *puVar51 = uVar73;
        puVar51[3] = uVar66;
        puVar51[2] = uVar64;
        if ((undefined8 *)(lVar55 + 0x48) != puVar51) {
          func_0x00010a5e3750(puVar51 + 5,*(long *)(lVar55 + 0x70),*(long *)(lVar55 + 0x78),
                              (*(long *)(lVar55 + 0x78) - *(long *)(lVar55 + 0x70) >> 4) *
                              -0x3333333333333333);
        }
        uVar73 = *(undefined8 *)(lVar55 + 0x88);
        uVar64 = *(undefined8 *)(lVar55 + 0xa0);
        uVar62 = *(undefined8 *)(lVar55 + 0x98);
        puVar51[9] = *(undefined8 *)(lVar55 + 0x90);
        puVar51[8] = uVar73;
        puVar51[0xb] = uVar64;
        puVar51[10] = uVar62;
        uVar62 = *(undefined8 *)(lVar55 + 0xb0);
        uVar73 = *(undefined8 *)(lVar55 + 0xa8);
        uVar66 = *(undefined8 *)(lVar55 + 0xc0);
        uVar64 = *(undefined8 *)(lVar55 + 0xb8);
        uVar68 = *(undefined8 *)(lVar55 + 200);
        uVar76 = *(undefined8 *)(lVar55 + 0xe0);
        uVar70 = *(undefined8 *)(lVar55 + 0xd8);
        puVar51[0x11] = *(undefined8 *)(lVar55 + 0xd0);
        puVar51[0x10] = uVar68;
        puVar51[0x13] = uVar76;
        puVar51[0x12] = uVar70;
        puVar51[0xd] = uVar62;
        puVar51[0xc] = uVar73;
        puVar51[0xf] = uVar66;
        puVar51[0xe] = uVar64;
        uVar62 = *(undefined8 *)(lVar55 + 0xf0);
        uVar73 = *(undefined8 *)(lVar55 + 0xe8);
        uVar66 = *(undefined8 *)(lVar55 + 0x100);
        uVar64 = *(undefined8 *)(lVar55 + 0xf8);
        uVar37 = *(ulong *)(lVar55 + 0x108);
        uVar68 = *(undefined8 *)(lVar55 + 0x120);
        uVar54 = *(ulong *)(lVar55 + 0x118);
        puVar51[0x19] = *(undefined8 *)(lVar55 + 0x110);
        puVar51[0x18] = uVar37;
        puVar51[0x1b] = uVar68;
        puVar51[0x1a] = uVar54;
        puVar51[0x15] = uVar62;
        puVar51[0x14] = uVar73;
        puVar51[0x17] = uVar66;
        puVar51[0x16] = uVar64;
        uVar8 = *(ushort *)(lVar55 + 0x20);
        lVar31 = 0;
        if ((uVar8 & 0x20) != 0) {
          lVar31 = 0x50;
        }
        pfVar2 = (float *)(param_1 + lVar31 + 0x80);
        fVar83 = *pfVar2;
        uVar65 = (ulong)(uint)fVar83;
        if ((0.0 < fVar83) && (fVar60 = pfVar2[1], 0.0 < fVar60)) {
          if ((uVar8 >> 3 & 1) == 0) {
            if ((uVar8 >> 4 & 1) != 0) {
              *(float *)((long)puVar51 + 4) = fVar60;
            }
          }
          else {
            *(float *)(puVar51 + 1) = fVar83;
            if ((uVar8 >> 4 & 1) != 0) {
              *(float *)((long)puVar51 + 4) = fVar60;
              uVar73 = *(undefined8 *)pfVar2;
              puVar51[9] = *(undefined8 *)(pfVar2 + 2);
              puVar51[8] = uVar73;
              uVar73 = *(undefined8 *)(pfVar2 + 0xc);
              uVar62 = *(undefined8 *)(pfVar2 + 0x12);
              uVar65 = *(ulong *)(pfVar2 + 0x10);
              uVar66 = *(undefined8 *)(pfVar2 + 6);
              uVar54 = *(ulong *)(pfVar2 + 4);
              uVar64 = *(undefined8 *)(pfVar2 + 10);
              uVar37 = *(ulong *)(pfVar2 + 8);
              puVar51[0xf] = *(undefined8 *)(pfVar2 + 0xe);
              puVar51[0xe] = uVar73;
              puVar51[0x11] = uVar62;
              puVar51[0x10] = uVar65;
              puVar51[0xb] = uVar66;
              puVar51[10] = uVar54;
              puVar51[0xd] = uVar64;
              puVar51[0xc] = uVar37;
              if ((*(byte *)(puVar51 + 0x12) & 1) == 0) {
                *(undefined1 *)(puVar51 + 0x12) = 1;
              }
            }
          }
        }
        pbVar33 = *(byte **)(lVar55 + 0x28);
        pbVar38 = *(byte **)(lVar55 + 0x30);
        uVar8 = *(ushort *)(lVar55 + 0x20);
        lVar22 = *(long *)(param_1 + 0x208);
        lVar34 = *(long *)(param_1 + 0x200);
        lVar31 = (lVar22 - lVar34 >> 3) * 0x6fb586fb586fb587;
        puVar51[0x11d] = puVar51[0x11c];
        FUN_10a5d2e0c(puVar51 + 0x11c,lVar31);
        if (lVar22 != lVar34) {
          uVar53 = 0;
          do {
            uVar35 = (*(long *)(param_1 + 0x208) - *(long *)(param_1 + 0x200) >> 3) *
                     0x6fb586fb586fb587;
            if (uVar35 < (uVar53 & 0xffffffff) || uVar35 - (uVar53 & 0xffffffff) == 0)
            goto LAB_10a5df4f0;
            lVar22 = *(long *)(param_1 + 0x200) + (uVar53 & 0xffffffff) * 0x1b8;
            uVar35 = *(ulong *)(lVar22 + 0x30);
            puVar48 = &uStack_108;
            pbStack_110 = pbVar33;
            uStack_108 = pbVar38;
            FUN_10a3c8d60(puVar48,lVar22 + 0x38);
            if ((uVar35 & (ulong)pbVar33) != 0 || ((ulong)puVar48 & 0xffff) != 0) {
              if ((uVar8 & 0x104) != 0) {
                uVar35 = (ulong)*(byte *)(lVar55 + 0x24);
                if (uVar35 != 0xff) {
                  uVar39 = (*(long *)(param_1 + 0x128) - *(long *)(param_1 + 0x120) >> 4) *
                           -0x30c30c30c30c30c3;
                  if (uVar39 < uVar35 || uVar39 - uVar35 == 0) goto LAB_10a5df4f0;
                  if (*(float *)(*(long *)(param_1 + 0x120) + uVar35 * 0x150 + 0x18) == 0.0)
                  goto LAB_10a5de440;
                }
                uVar35 = (ulong)*(byte *)(lVar55 + 0x23);
                if (uVar35 != 0xff) {
                  uVar39 = (*(long *)(param_1 + 0x140) - *(long *)(param_1 + 0x138) >> 3) *
                           -0x7063e7063e7063e7;
                  if (uVar39 < uVar35 || uVar39 - uVar35 == 0) goto LAB_10a5df4f0;
                  if (*(float *)(*(long *)(param_1 + 0x138) + uVar35 * 0x148 + 0x100) == 0.0)
                  goto LAB_10a5de440;
                }
                if (-1 < *(char *)(lVar22 + 0x18)) goto LAB_10a5de440;
              }
              if (((param_1[0x58] & 1) != 0) || ((*(byte *)(lVar22 + 0x19) >> 5 & 1) == 0)) {
                FUN_10a5d2e98(puVar51 + 0x11c,uVar53);
              }
            }
LAB_10a5de440:
            uVar53 = uVar53 + 1;
          } while (lVar31 - uVar53 != 0);
        }
        if ((uVar8 & 0x104) != 0) {
          puVar58 = (uint *)puVar51[0x11c];
          puVar46 = (uint *)puVar51[0x11d];
          if (puVar58 != puVar46) {
            uVar35 = (lVar30 - lVar20 >> 4) * -0x1111111111111111;
            uVar53 = (ulong)*(byte *)(lVar55 + 0x22);
            if (uVar53 == 0xff) {
              bVar7 = *(byte *)(lVar55 + 0x23);
              uVar53 = (ulong)bVar7;
              uVar39 = (ulong)*(byte *)(lVar55 + 0x24);
              if ((uVar53 != 0xff) || (*(byte *)(lVar55 + 0x24) != 0xff)) {
                if (bVar7 == 0xff) {
                  uVar53 = (*(long *)(param_1 + 0x128) - *(long *)(param_1 + 0x120) >> 4) *
                           -0x30c30c30c30c30c3;
                  if (uVar53 < uVar39 || uVar53 - uVar39 == 0) goto LAB_10a5df4f0;
                  lVar30 = *(long *)(param_1 + 0x120) + uVar39 * 0x150;
                  *(undefined1 *)puVar51 = 1;
                  puVar11 = PTR___tlv_bootstrap_11340d798;
                  uVar62 = *(undefined8 *)(lVar30 + 0x2c);
                  fVar83 = *(float *)(lVar30 + 0x34);
                  ppuVar15 = &PTR___tlv_bootstrap_11340d798;
                  (*(code *)PTR___tlv_bootstrap_11340d798)();
                  uVar73 = uVar62;
                  if (((ulong)*ppuVar15 & 1) == 0) {
                    ppuVar15 = &PTR___tlv_bootstrap_11340d780;
                    (*(code *)puVar10)(&PTR___tlv_bootstrap_11340d780);
                    __tlv_atexit(FUN_10a5e34e8,ppuVar15,0x100000000);
                    ppuVar15 = &PTR___tlv_bootstrap_11340d798;
                    (*(code *)puVar11)();
                    *(undefined1 *)ppuVar15 = 1;
                  }
                  fVar75 = (float)uVar37;
                  fVar72 = (float)uVar65;
                  fVar85 = (float)uVar54;
                  fVar60 = (float)((ulong)uVar73 >> 0x20);
                  ppuVar14[1] = *ppuVar14;
                  fVar84 = (float)uVar62;
                  if (*(long *)(param_1 + 0x208) == *(long *)(param_1 + 0x200)) {
                    fVar77 = 1.1754944e-38;
                    fVar82 = 3.4028235e+38;
                  }
                  else {
                    uVar53 = 0;
                    fVar82 = 3.4028235e+38;
                    fVar77 = 1.1754944e-38;
                    do {
                      pbVar33 = param_1 + 8;
                      FUN_10a5e3928(pbVar33,lVar20,uVar35,uVar53,*(undefined8 *)(lVar55 + 0x28),
                                    *(undefined8 *)(lVar55 + 0x30));
                      if (((ulong)pbVar33 & 1) == 0) {
                        uVar37 = (*(long *)(param_1 + 0x208) - *(long *)(param_1 + 0x200) >> 3) *
                                 0x6fb586fb586fb587;
                        if ((uVar37 < (uVar53 & 0xffffffff) || uVar37 - (uVar53 & 0xffffffff) == 0)
                           || (uVar37 = uVar53 & 0xffffffff, uVar35 < uVar37 || uVar35 - uVar37 == 0
                              )) goto LAB_10a5df4f0;
                        lVar31 = *(long *)(param_1 + 0x200) + uVar37 * 0x1b8;
                        plVar28 = *(long **)(lVar31 + 0x1a8);
                        ___dynamic_cast(plVar28,&PTR_DAT_110c07c30,&PTR_DAT_110bd9df0,0);
                        (**(code **)(*plVar28 + 400))(&uStack_150);
                        if ((*(uint *)(lVar31 + 0x18) >> 5 & 1) != 0) {
                          lVar22 = lVar20 + uVar37 * 0xf0;
                          if ((*(uint *)(lVar31 + 0x18) >> 6 & 1) == 0) {
                            uStack_150 = *(byte **)(lVar22 + 0x44);
                            fStack_140 = (float)*(undefined8 *)(lVar22 + 0x54);
                            fStack_13c = (float)((ulong)*(undefined8 *)(lVar22 + 0x54) >> 0x20);
                            fStack_148 = (float)*(undefined8 *)(lVar22 + 0x4c);
                            fStack_144 = (float)((ulong)*(undefined8 *)(lVar22 + 0x4c) >> 0x20);
                          }
                          else {
                            func_0x00010a01e958(&pbStack_110,&uStack_150,lVar22 + 0x44);
                            fStack_148 = SUB84(uStack_108,0);
                            fStack_144 = (float)((ulong)uStack_108 >> 0x20);
                            uStack_150 = pbStack_110;
                            fStack_140 = SUB84(uStack_100,0);
                            fStack_13c = (float)((ulong)uStack_100 >> 0x20);
                          }
                        }
                        uStack_c8 = 0;
                        uStack_d0 = 0;
                        uStack_b8 = 0;
                        uStack_c0 = 0;
                        uStack_e8 = 0;
                        pbStack_f0 = (byte *)0x0;
                        uStack_d8 = 0;
                        ppbStack_e0 = (byte **)0x0;
                        uStack_108 = (byte *)0x0;
                        pbStack_110 = (byte *)0x0;
                        pbStack_f8 = (byte *)0x0;
                        uStack_100 = (byte *)0x0;
                        FUN_10a00561c(&uStack_150,&pbStack_110,8);
                        lVar22 = 0;
                        do {
                          uVar73 = *(undefined8 *)((long)&pbStack_110 + lVar22);
                          fVar85 = *(float *)((long)&uStack_108 + lVar22);
                          uVar65 = (ulong)(uint)fVar85;
                          fVar75 = (float)((ulong)uVar73 >> 0x20);
                          uVar54 = (ulong)(uint)(fVar83 * fVar85);
                          fVar78 = (-fVar60 * fVar75 - fVar84 * (float)uVar73) - fVar83 * fVar85;
                          uVar37 = (ulong)(uint)fVar78;
                          fVar72 = fVar78;
                          if (fVar82 <= fVar78) {
                            fVar72 = fVar82;
                          }
                          fVar82 = fVar72;
                          fVar72 = fVar78;
                          if (fVar78 <= fVar77) {
                            fVar72 = fVar77;
                          }
                          fVar77 = fVar72;
                          if ((*(byte *)(lVar31 + 0x1c) | 2) == 3) {
                            fVar72 = (float)((ulong)uVar62 >> 0x20) * fVar78;
                            uVar54 = CONCAT44(fVar72,fVar84 * fVar78);
                            uVar37 = (ulong)(uint)(fVar83 * fVar78);
                            fStack_158 = fVar85 + fVar83 * fVar78;
                            uVar65 = (ulong)(uint)fStack_158;
                            uVar73 = CONCAT44(fVar75 + fVar72,(float)uVar73 + fVar84 * fVar78);
                            uStack_160 = uVar73;
                            FUN_10a123714(ppuVar14,&uStack_160);
                          }
                          lVar22 = lVar22 + 0xc;
                        } while (lVar22 != 0x60);
                      }
                      fVar75 = (float)uVar37;
                      fVar72 = (float)uVar65;
                      fVar85 = (float)uVar54;
                      uVar53 = uVar53 + 1;
                    } while (uVar53 != (*(long *)(param_1 + 0x208) - *(long *)(param_1 + 0x200) >> 3
                                       ) * 0x6fb586fb586fb587);
                  }
                  fVar79 = (float)uVar73;
                  FUN_10a0ef714(ppuVar14);
                  *(float *)((long)puVar51 + 0xc) = fVar85 + fVar85;
                  fVar85 = fVar82 + -1.0;
                  fVar79 = fVar79 - fVar85 * fVar84;
                  fVar72 = fVar72 - fVar60 * fVar85;
                  fVar75 = fVar75 - fVar83 * fVar85;
                  fVar85 = 0.0;
                  fVar78 = 1.0;
                  if (ABS((fVar84 * -0.0 - fVar60) + fVar83 * -0.0) <= 0.99) {
                    fVar85 = 1.0;
                    fVar78 = 0.0;
                  }
                  fVar84 = (fVar79 - fVar84) - fVar79;
                  fVar60 = (fVar72 - fVar60) - fVar72;
                  fVar80 = (fVar75 - fVar83) - fVar75;
                  fVar81 = 1.0 / SQRT(fVar80 * fVar80 + fVar84 * fVar84 + fVar60 * fVar60);
                  fVar61 = fVar84 * fVar81;
                  fVar69 = fVar60 * fVar81;
                  fVar63 = fVar80 * fVar81;
                  fVar67 = -(fVar85 * fVar63) + fVar69 * 0.0;
                  fStack_140 = fVar61 * -0.0 + fVar78 * fVar63;
                  fStack_130 = -(fVar78 * fVar69) + fVar85 * fVar61;
                  fVar83 = 1.0 / SQRT(fStack_130 * fStack_130 +
                                      fVar67 * fVar67 + fStack_140 * fStack_140);
                  fVar67 = fVar67 * fVar83;
                  fStack_140 = fStack_140 * fVar83;
                  fStack_130 = fStack_130 * fVar83;
                  fStack_138 = -(fVar60 * fVar81);
                  fVar83 = -(fVar69 * fStack_130) + fVar63 * fStack_140;
                  fStack_128 = -(fVar80 * fVar81);
                  fStack_13c = -(fVar63 * fVar67) + fVar61 * fStack_130;
                  fStack_148 = -(fVar84 * fVar81);
                  fStack_12c = -(fVar61 * fStack_140) + fVar69 * fVar67;
                  fStack_144 = 0.0;
                  uStack_134 = 0;
                  uStack_124 = 0;
                  uStack_114 = 0x3f800000;
                  uStack_150 = (byte *)CONCAT44(fVar83,fVar67);
                  uStack_120 = CONCAT44(-(fVar75 * fStack_12c +
                                         fVar79 * fVar83 + fVar72 * fStack_13c),
                                        -(fVar75 * fStack_130 +
                                         fVar79 * fVar67 + fVar72 * fStack_140));
                  fStack_118 = fVar75 * fVar63 + fVar79 * fVar61 + fVar72 * fVar69;
                  func_0x0001094f5708(&pbStack_110,&uStack_150);
                  puVar51[0x19] = uStack_e8;
                  puVar51[0x18] = pbStack_f0;
                  puVar51[0x1b] = uStack_d8;
                  puVar51[0x1a] = ppbStack_e0;
                  puVar51[0x15] = uStack_108;
                  puVar51[0x14] = pbStack_110;
                  puVar51[0x17] = pbStack_f8;
                  puVar51[0x16] = uStack_100;
                  *(undefined4 *)(puVar51 + 2) = 0x3f800000;
                  *(float *)((long)puVar51 + 0x14) = (fVar77 - fVar82) + 1.0;
                  *(undefined4 *)(puVar51 + 1) = 0x3f800000;
                  puVar48 = puVar51 + 0x1c;
                  FUN_10a42bc0c(puVar48,puVar51,puVar51 + 0x14);
                  lVar20 = 200;
                  if ((ulong)puVar51[0x57] < 2) {
                    lVar20 = 0x1e0;
                  }
                  uVar62 = *(undefined8 *)((long)puVar48 + lVar20 + 0x98);
                  uVar73 = *(undefined8 *)((long)puVar48 + lVar20 + 0x90);
                  uVar66 = *(undefined8 *)((long)puVar48 + lVar20 + 0xa8);
                  uVar64 = *(undefined8 *)((long)puVar48 + lVar20 + 0xa0);
                  uVar68 = *(undefined8 *)((long)puVar48 + lVar20 + 0xb0);
                  uVar76 = *(undefined8 *)((long)puVar48 + lVar20 + 200);
                  uVar70 = *(undefined8 *)((long)puVar48 + lVar20 + 0xc0);
                  *(undefined8 *)(lVar30 + 0xa8) = *(undefined8 *)((long)puVar48 + lVar20 + 0xb8);
                  *(undefined8 *)(lVar30 + 0xa0) = uVar68;
                  *(undefined8 *)(lVar30 + 0xb8) = uVar76;
                  *(undefined8 *)(lVar30 + 0xb0) = uVar70;
                  *(undefined8 *)(lVar30 + 0x88) = uVar62;
                  *(undefined8 *)(lVar30 + 0x80) = uVar73;
                  *(undefined8 *)(lVar30 + 0x98) = uVar66;
                  *(undefined8 *)(lVar30 + 0x90) = uVar64;
                  lVar20 = 200;
                  if ((ulong)puVar51[0x57] < 2) {
                    lVar20 = 0x1e0;
                  }
                  func_0x0001094f5708(&uStack_150,(undefined1 *)((long)puVar48 + lVar20 + 0x90));
                  *(ulong *)(lVar30 + 0xe8) = CONCAT44(uStack_124,fStack_128);
                  *(ulong *)(lVar30 + 0xe0) = CONCAT44(fStack_12c,fStack_130);
                  *(ulong *)(lVar30 + 0xf8) = CONCAT44(uStack_114,fStack_118);
                  *(undefined8 *)(lVar30 + 0xf0) = uStack_120;
                  *(ulong *)(lVar30 + 200) = CONCAT44(fStack_144,fStack_148);
                  *(byte **)(lVar30 + 0xc0) = uStack_150;
                  *(ulong *)(lVar30 + 0xd8) = CONCAT44(uStack_134,fStack_138);
                  *(ulong *)(lVar30 + 0xd0) = CONCAT44(fStack_13c,fStack_140);
                  *(float *)(lVar30 + 0x108) = fVar79;
                  *(float *)(lVar30 + 0x10c) = fVar72;
                  *(float *)(lVar30 + 0x110) = fVar75;
                  *(undefined8 *)(lVar30 + 0x78) = puVar51[2];
                }
                else {
                  uVar37 = (*(long *)(param_1 + 0x140) - *(long *)(param_1 + 0x138) >> 3) *
                           -0x7063e7063e7063e7;
                  if (uVar37 < uVar53 || uVar37 - uVar53 == 0) goto LAB_10a5df4f0;
                  lVar30 = *(long *)(param_1 + 0x138) + (ulong)(uint)bVar7 * 0x148;
                  *(undefined1 *)puVar51 = 0;
                  fVar83 = -*(float *)(lVar30 + 0x24) / *(float *)(lVar30 + 0x20);
                  _acosf();
                  fVar60 = (float)*(undefined8 *)(lVar30 + 0x28);
                  fVar84 = -fVar60;
                  fVar72 = (float)((ulong)*(undefined8 *)(lVar30 + 0x28) >> 0x20);
                  fVar85 = -fVar72;
                  fVar75 = *(float *)(lVar30 + 0x30);
                  fVar82 = -fVar75;
                  fVar60 = fVar60 * fVar60 + fVar72 * fVar72 + fVar75 * fVar75;
                  if (0.0 < fVar60) {
                    fVar60 = SQRT(fVar60);
                    fVar84 = fVar84 / fVar60;
                    fVar85 = fVar85 / fVar60;
                    fVar82 = fVar82 / fVar60;
                  }
                  fVar60 = *(float *)(lVar30 + 0x3c);
                  fVar72 = (float)*(undefined8 *)(lVar30 + 0x34);
                  fVar75 = (float)((ulong)*(undefined8 *)(lVar30 + 0x34) >> 0x20);
                  if (*(long *)(param_1 + 0x208) == *(long *)(param_1 + 0x200)) {
                    fVar77 = 115.49999;
                  }
                  else {
                    uVar37 = 0;
                    fVar77 = 110.0;
                    do {
                      pbVar33 = param_1 + 8;
                      FUN_10a5e3928(pbVar33,lVar20,uVar35,uVar37,*(undefined8 *)(lVar55 + 0x28),
                                    *(undefined8 *)(lVar55 + 0x30));
                      lVar31 = *(long *)(param_1 + 0x208);
                      lVar22 = *(long *)(param_1 + 0x200);
                      if (((ulong)pbVar33 & 1) == 0) {
                        uVar54 = (lVar31 - lVar22 >> 3) * 0x6fb586fb586fb587;
                        if (uVar54 < (uVar37 & 0xffffffff) || uVar54 - (uVar37 & 0xffffffff) == 0)
                        goto LAB_10a5df4f0;
                        uVar54 = uVar37 & 0xffffffff;
                        lVar34 = lVar22 + uVar54 * 0x1b8;
                        plVar28 = *(long **)(lVar34 + 0x1a8);
                        if ((plVar28 != (long *)0x0) &&
                           (___dynamic_cast(plVar28,&PTR_DAT_110c07c30,&PTR_DAT_110bd9df0,0),
                           plVar28 != (long *)0x0)) {
                          (**(code **)(*plVar28 + 400))(&uStack_150);
                          uVar6 = *(uint *)(lVar34 + 0x18);
                          if ((uVar6 >> 5 & 1) != 0) {
                            if (uVar35 < uVar54 || uVar35 - uVar54 == 0) goto LAB_10a5df4f0;
                            lVar31 = lVar20 + uVar54 * 0xf0;
                            if ((uVar6 >> 6 & 1) == 0) {
                              uStack_150 = *(byte **)(lVar31 + 0x44);
                              fStack_140 = (float)*(undefined8 *)(lVar31 + 0x54);
                              fStack_13c = (float)((ulong)*(undefined8 *)(lVar31 + 0x54) >> 0x20);
                              fStack_148 = (float)*(undefined8 *)(lVar31 + 0x4c);
                              fStack_144 = (float)((ulong)*(undefined8 *)(lVar31 + 0x4c) >> 0x20);
                            }
                            else {
                              func_0x00010a01e958(&pbStack_110,&uStack_150,lVar31 + 0x44);
                              fStack_148 = SUB84(uStack_108,0);
                              fStack_144 = (float)((ulong)uStack_108 >> 0x20);
                              uStack_150 = pbStack_110;
                              fStack_140 = SUB84(uStack_100,0);
                              fStack_13c = (float)((ulong)uStack_100 >> 0x20);
                            }
                          }
                          uStack_c8 = 0;
                          uStack_d0 = 0;
                          uStack_b8 = 0;
                          uStack_c0 = 0;
                          uStack_e8 = 0;
                          pbStack_f0 = (byte *)0x0;
                          uStack_d8 = 0;
                          ppbStack_e0 = (byte **)0x0;
                          uStack_108 = (byte *)0x0;
                          pbStack_110 = (byte *)0x0;
                          pbStack_f8 = (byte *)0x0;
                          uStack_100 = (byte *)0x0;
                          FUN_10a00561c(&uStack_150,&pbStack_110,8);
                          lVar31 = 0;
                          do {
                            fVar78 = fVar84 * ((float)*(undefined8 *)((long)&pbStack_110 + lVar31) -
                                              fVar72) +
                                     fVar85 * ((float)((ulong)*(undefined8 *)
                                                               ((long)&pbStack_110 + lVar31) >> 0x20
                                                      ) - fVar75) +
                                     fVar82 * (*(float *)((long)&uStack_108 + lVar31) - fVar60);
                            if (fVar78 <= fVar77) {
                              fVar78 = fVar77;
                            }
                            fVar77 = fVar78;
                            lVar31 = lVar31 + 0xc;
                          } while (lVar31 != 0x60);
                          lVar31 = *(long *)(param_1 + 0x208);
                          lVar22 = *(long *)(param_1 + 0x200);
                        }
                      }
                      uVar37 = uVar37 + 1;
                    } while (uVar37 != (lVar31 - lVar22 >> 3) * 0x6fb586fb586fb587);
                    fVar77 = fVar77 * 1.05;
                  }
                  fVar61 = (fVar84 + fVar72) - fVar72;
                  fVar69 = (fVar85 + fVar75) - fVar75;
                  fVar81 = (fVar82 + fVar60) - fVar60;
                  fVar63 = 1.0 / SQRT(fVar61 * fVar61 + fVar69 * fVar69 + fVar81 * fVar81);
                  fVar78 = fVar63 * fVar61;
                  fVar79 = fVar69 * fVar63;
                  fVar80 = fVar81 * fVar63;
                  fVar67 = -(*(float *)(lVar30 + 300) * fVar80) +
                           *(float *)(lVar30 + 0x130) * fVar79;
                  fStack_140 = -(*(float *)(lVar30 + 0x130) * fVar78) +
                               *(float *)(lVar30 + 0x128) * fVar80;
                  fStack_130 = -(*(float *)(lVar30 + 0x128) * fVar79) +
                               *(float *)(lVar30 + 300) * fVar78;
                  fVar71 = 1.0 / SQRT(fStack_130 * fStack_130 +
                                      fVar67 * fVar67 + fStack_140 * fStack_140);
                  fVar67 = fVar67 * fVar71;
                  fStack_140 = fStack_140 * fVar71;
                  fStack_130 = fStack_130 * fVar71;
                  fStack_138 = -(fVar69 * fVar63);
                  fVar69 = -(fVar79 * fStack_130) + fVar80 * fStack_140;
                  fStack_128 = -(fVar81 * fVar63);
                  fStack_13c = -(fVar80 * fVar67) + fVar78 * fStack_130;
                  fStack_148 = -(fVar61 * fVar63);
                  fStack_12c = -(fVar78 * fStack_140) + fVar79 * fVar67;
                  fStack_144 = 0.0;
                  uStack_134 = 0;
                  uStack_124 = 0;
                  uStack_114 = 0x3f800000;
                  uStack_150 = (byte *)CONCAT44(fVar69,fVar67);
                  uVar73 = NEON_rev64(CONCAT44(fVar75 * fStack_140,fVar72 * fVar69),4);
                  uStack_120 = CONCAT44(-(fStack_12c * fVar60 +
                                         (float)((ulong)uVar73 >> 0x20) + fVar75 * fStack_13c),
                                        -(fStack_130 * fVar60 + (float)uVar73 + fVar72 * fVar67));
                  fStack_118 = fVar60 * fVar80 + fVar78 * fVar72 + fVar79 * fVar75;
                  func_0x0001094f5708(&pbStack_110,&uStack_150);
                  puVar51[0x19] = uStack_e8;
                  puVar51[0x18] = pbStack_f0;
                  puVar51[0x1b] = uStack_d8;
                  puVar51[0x1a] = ppbStack_e0;
                  puVar51[0x15] = uStack_108;
                  puVar51[0x14] = pbStack_110;
                  puVar51[0x17] = pbStack_f8;
                  puVar51[0x16] = uStack_100;
                  *(float *)((long)puVar51 + 0x14) = fVar77;
                  *(undefined4 *)(puVar51 + 2) = 0x41200000;
                  *(undefined4 *)(puVar51 + 1) = 0x3f800000;
                  puVar48 = puVar51 + 0x1c;
                  *(float *)((long)puVar51 + 4) = fVar83 + fVar83;
                  FUN_10a42bc0c(puVar48,puVar51,puVar51 + 0x14);
                  lVar20 = 200;
                  if ((ulong)puVar51[0x57] < 2) {
                    lVar20 = 0x1e0;
                  }
                  uVar62 = *(undefined8 *)((long)puVar48 + lVar20 + 0x98);
                  uVar73 = *(undefined8 *)((long)puVar48 + lVar20 + 0x90);
                  uVar66 = *(undefined8 *)((long)puVar48 + lVar20 + 0xa8);
                  uVar64 = *(undefined8 *)((long)puVar48 + lVar20 + 0xa0);
                  uVar70 = *(undefined8 *)((long)puVar48 + lVar20 + 0xb8);
                  uVar68 = *(undefined8 *)((long)puVar48 + lVar20 + 0xb0);
                  uVar76 = *(undefined8 *)((long)puVar48 + lVar20 + 0xc0);
                  *(undefined8 *)(lVar30 + 0xa0) = *(undefined8 *)((long)puVar48 + lVar20 + 200);
                  *(undefined8 *)(lVar30 + 0x98) = uVar76;
                  *(undefined8 *)(lVar30 + 0x90) = uVar70;
                  *(undefined8 *)(lVar30 + 0x88) = uVar68;
                  *(undefined8 *)(lVar30 + 0x80) = uVar66;
                  *(undefined8 *)(lVar30 + 0x78) = uVar64;
                  *(undefined8 *)(lVar30 + 0x70) = uVar62;
                  *(undefined8 *)(lVar30 + 0x68) = uVar73;
                  lVar20 = 200;
                  if ((ulong)puVar51[0x57] < 2) {
                    lVar20 = 0x1e0;
                  }
                  func_0x0001094f5708(&uStack_150,(undefined1 *)((long)puVar48 + lVar20 + 0x90));
                  *(ulong *)(lVar30 + 0xe0) = CONCAT44(uStack_114,fStack_118);
                  *(undefined8 *)(lVar30 + 0xd8) = uStack_120;
                  *(ulong *)(lVar30 + 0xd0) = CONCAT44(uStack_124,fStack_128);
                  *(ulong *)(lVar30 + 200) = CONCAT44(fStack_12c,fStack_130);
                  *(ulong *)(lVar30 + 0xc0) = CONCAT44(uStack_134,fStack_138);
                  *(ulong *)(lVar30 + 0xb8) = CONCAT44(fStack_13c,fStack_140);
                  *(ulong *)(lVar30 + 0xb0) = CONCAT44(fStack_144,fStack_148);
                  *(byte **)(lVar30 + 0xa8) = uStack_150;
                  *(float *)(lVar30 + 0x11c) = fVar84;
                  *(float *)(lVar30 + 0x120) = fVar85;
                  *(float *)(lVar30 + 0x124) = fVar82;
                  *(undefined8 *)(lVar30 + 0x60) = puVar51[2];
                }
              }
            }
            else {
              uVar37 = (*(long *)(param_1 + 0x128) - *(long *)(param_1 + 0x120) >> 4) *
                       -0x30c30c30c30c30c3;
              if (uVar37 < uVar53 || uVar37 - uVar53 == 0) goto LAB_10a5df4f0;
              pbVar33 = (byte *)(*(long *)(param_1 + 0x120) + uVar53 * 0x150);
              if ((*pbVar33 >> 2 & 1) != 0) {
                fVar72 = -3.4028235e+38;
                fVar75 = -3.4028235e+38;
                fVar84 = 3.4028235e+38;
                fVar85 = 3.4028235e+38;
                fVar60 = -3.4028235e+38;
                fVar83 = 3.4028235e+38;
                do {
                  uVar54 = (ulong)*puVar58;
                  uVar37 = *(ulong *)(param_1 + 0x200);
                  FUN_10a5e38a8(uVar37,*(undefined8 *)(param_1 + 0x208),lVar20,uVar35,uVar54);
                  fVar82 = fVar60;
                  if ((uVar37 & 1) == 0) {
                    if (uVar35 < uVar54 || uVar35 - uVar54 == 0) goto LAB_10a5df4f0;
                    lVar30 = lVar20 + uVar54 * 0xf0;
                    plVar28 = (long *)0x1;
                    FUN_10a061940(*(undefined8 *)(lVar30 + 0xa8));
                    if (plVar28 == (long *)0x0) {
                      plVar28 = (long *)0x0;
                    }
                    else {
                      plVar28 = (long *)*plVar28;
                    }
                    uVar37 = (*(long *)(param_1 + 0x208) - *(long *)(param_1 + 0x200) >> 3) *
                             0x6fb586fb586fb587;
                    if (uVar37 < uVar54 || uVar37 - uVar54 == 0) goto LAB_10a5df4f0;
                    iVar24 = 0;
                    lVar55 = *(long *)(param_1 + 0x200) + uVar54 * 0x1b8;
                    puVar48 = (undefined8 *)(lVar55 + 0x108);
                    while ((fVar82 = *(float *)(lVar55 + 0x118), iVar24 == 1 ||
                           (fVar82 = *(float *)(lVar55 + 0x114), iVar24 != 2))) {
                      bVar13 = fVar82 < 0.0;
                      while (iVar24 = iVar24 + 1, bVar13) {
                        if (iVar24 == 2) goto LAB_10a5de5c4;
                        bVar13 = true;
                      }
                    }
                    if (0.0 <= *(float *)(lVar55 + 0x11c)) {
LAB_10a5de5e4:
                      uStack_108 = (byte *)puVar48[1];
                      pbStack_110 = (byte *)*puVar48;
                      uStack_100 = (byte *)puVar48[2];
                    }
                    else {
LAB_10a5de5c4:
                      if (plVar28 == (long *)0x0) {
                        puVar48 = (undefined8 *)&UNK_10e482ad8;
                        goto LAB_10a5de5e4;
                      }
                      (**(code **)(*plVar28 + 0x38))(&pbStack_110);
                    }
                    iVar24 = 0;
                    while ((fVar82 = (float)uStack_100, iVar24 == 1 ||
                           (fVar82 = uStack_108._4_4_, iVar24 != 2))) {
                      bVar13 = fVar82 < 0.0;
                      while (iVar24 = iVar24 + 1, bVar13) {
                        if (iVar24 == 2) goto LAB_10a5de654;
                        bVar13 = true;
                      }
                    }
                    if (uStack_100._4_4_ < 0.0) {
LAB_10a5de654:
                      fStack_148 = 0.0;
                      fStack_144 = -3.4028235e+38;
                      uStack_150 = (byte *)0x0;
                      fStack_140 = -3.4028235e+38;
                      fStack_13c = -3.4028235e+38;
                    }
                    else {
                      FUN_10a005448(&uStack_150,&pbStack_110,lVar30 + 4);
                    }
                    fVar71 = SUB84(uStack_150,0) - fStack_144;
                    fVar69 = (float)((ulong)uStack_150 >> 0x20);
                    fVar74 = fVar69 - fStack_140;
                    fVar63 = fStack_148 - fStack_13c;
                    fVar67 = fStack_144 + SUB84(uStack_150,0);
                    fVar69 = fStack_140 + fVar69;
                    fVar61 = fStack_13c + fStack_148;
                    fVar77 = fVar63;
                    fVar82 = fVar61;
                    fVar78 = fVar71;
                    fVar79 = fVar74;
                    fVar80 = fVar67;
                    fVar81 = fVar69;
                    if ((*(uint *)(lVar55 + 0x18) >> 5 & 1) != 0) {
                      fVar82 = *(float *)(pbVar33 + 0x1c);
                      fVar77 = (*(float *)(lVar30 + 0x4c) - *(float *)(lVar30 + 0x58)) - fVar82;
                      fVar80 = (float)*(undefined8 *)(lVar30 + 0x44);
                      fVar86 = (float)*(undefined8 *)(lVar30 + 0x50);
                      fVar81 = (float)((ulong)*(undefined8 *)(lVar30 + 0x44) >> 0x20);
                      fVar87 = (float)((ulong)*(undefined8 *)(lVar30 + 0x50) >> 0x20);
                      fVar78 = (fVar80 - fVar86) - fVar82;
                      fVar79 = (fVar81 - fVar87) - fVar82;
                      fVar80 = fVar82 + fVar80 + fVar86;
                      fVar81 = fVar82 + fVar81 + fVar87;
                      fVar82 = fVar82 + *(float *)(lVar30 + 0x4c) + *(float *)(lVar30 + 0x58);
                      if ((*(uint *)(lVar55 + 0x18) >> 6 & 1) != 0) {
                        fVar78 = (float)((uint)fVar71 ^
                                        ((uint)fVar71 ^ (uint)fVar78) & -(uint)(fVar78 < fVar71));
                        fVar79 = (float)((uint)fVar74 ^
                                        ((uint)fVar74 ^ (uint)fVar79) & -(uint)(fVar79 < fVar74));
                        if (fVar63 <= fVar77) {
                          fVar77 = fVar63;
                        }
                        fVar80 = (float)((uint)fVar67 ^
                                        ((uint)fVar67 ^ (uint)fVar80) & -(uint)(fVar67 < fVar80));
                        fVar81 = (float)((uint)fVar69 ^
                                        ((uint)fVar69 ^ (uint)fVar81) & -(uint)(fVar69 < fVar81));
                        if (fVar82 <= fVar61) {
                          fVar82 = fVar61;
                        }
                      }
                    }
                    fVar84 = (float)((uint)fVar84 ^
                                    ((uint)fVar84 ^ (uint)fVar78) & -(uint)(fVar78 < fVar84));
                    fVar85 = (float)((uint)fVar85 ^
                                    ((uint)fVar85 ^ (uint)fVar79) & -(uint)(fVar79 < fVar85));
                    if (fVar83 <= fVar77) {
                      fVar77 = fVar83;
                    }
                    fVar83 = fVar77;
                    fVar72 = (float)((uint)fVar72 ^
                                    ((uint)fVar72 ^ (uint)fVar80) & -(uint)(fVar72 < fVar80));
                    fVar75 = (float)((uint)fVar75 ^
                                    ((uint)fVar75 ^ (uint)fVar81) & -(uint)(fVar75 < fVar81));
                    if (fVar82 <= fVar60) {
                      fVar82 = fVar60;
                    }
                  }
                  fVar60 = fVar82;
                  puVar58 = puVar58 + 1;
                } while (puVar58 != puVar46);
                iVar24 = 0;
                fVar84 = (fVar72 + fVar84) * 0.5;
                fVar85 = (fVar75 + fVar85) * 0.5;
                fVar83 = (fVar60 + fVar83) * 0.5;
                fVar72 = fVar72 - fVar84;
                fVar75 = fVar75 - fVar85;
                fVar60 = fVar60 - fVar83;
                while ((fVar82 = fVar75, iVar24 == 1 || (fVar82 = fVar72, iVar24 != 2))) {
                  bVar13 = fVar82 < 0.0;
                  while (iVar24 = iVar24 + 1, bVar13) {
                    if (iVar24 == 2) goto LAB_10a5deab8;
                    bVar13 = true;
                  }
                }
                if (0.0 <= fVar60) {
                  fVar60 = SQRT(fVar72 * fVar72 + fVar75 * fVar75 + fVar60 * fVar60);
                  fVar72 = *(float *)(puVar51 + 0x19);
                  fVar82 = fVar60 + *(float *)(puVar51 + 2) + 1.1920929e-07;
                  fVar77 = (float)puVar51[0x18];
                  fVar78 = (float)((ulong)puVar51[0x18] >> 0x20);
                  fVar75 = 1.0 / SQRT(fVar77 * fVar77 + fVar78 * fVar78 + fVar72 * fVar72);
                  puVar51[0x1a] =
                       CONCAT44(fVar85 + fVar78 * fVar75 * fVar82,fVar84 + fVar77 * fVar75 * fVar82)
                  ;
                  *(float *)(puVar51 + 0x1b) = fVar83 + fVar82 * fVar72 * fVar75;
                  if ((*pbVar33 >> 3 & 1) != 0) {
                    *(float *)((long)puVar51 + 0xc) = fVar60 + fVar60;
                    *(float *)((long)puVar51 + 0x14) =
                         fVar60 + fVar60 + *(float *)(puVar51 + 2) + 1.1920929e-07;
                  }
                }
              }
LAB_10a5deab8:
              if (*(int *)(param_1 + 0x20) < 0x50) {
                bVar7 = *(byte *)((long)puVar51 + 2) & 0xfe;
                if (((*pbVar33 ^ 0xff) & 0xc) == 0) {
                  bVar7 = bVar7 + 1;
                }
                *(byte *)((long)puVar51 + 2) = bVar7;
              }
              FUN_10a42bc0c(puVar51 + 0x1c,puVar51,puVar51 + 0x14);
            }
          }
        }
        FUN_10a42bc0c(puVar51 + 0x1c,puVar51,puVar51 + 0x14);
        uStack_c0 = 0;
        uStack_d8 = 0;
        ppbStack_e0 = (byte **)0x0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        pbStack_f8 = (byte *)0x0;
        uStack_100 = (byte *)0x0;
        uStack_e8 = 0;
        pbStack_f0 = (byte *)0x0;
        uStack_108 = (byte *)0x0;
        pbStack_110 = (byte *)0x0;
        puVar51[0x122] = 0;
        puVar51[0x121] = 0;
        puVar51[0x120] = 0;
        FUN_10a5e39ec(puVar51 + 0x123,&pbStack_f8);
        if (puVar51[0x127] != 0) {
          puVar51[0x128] = puVar51[0x127];
          __ZdlPv();
        }
        puVar51[0x128] = uStack_d0;
        puVar51[0x127] = uStack_d8;
        puVar51[0x129] = uStack_c8;
        uStack_d8 = 0;
        uStack_d0 = 0;
        uStack_c8 = 0;
        *(undefined1 *)(puVar51 + 0x12a) = (undefined1)uStack_c0;
        if (ppbStack_e0 == &pbStack_f8) {
          lVar20 = 0x20;
LAB_10a5deba0:
          (**(code **)(*ppbStack_e0 + lVar20))();
        }
        else if (ppbStack_e0 != (byte **)0x0) {
          lVar20 = 0x28;
          goto LAB_10a5deba0;
        }
        uVar44 = uVar44 + 1;
      } while (uVar44 != uVar56);
    }
    func_0x00010a5eaf4c(&lStack_190);
    FUN_10aba71b0(param_6,param_2,param_1);
    lVar20 = *(long *)(param_1 + 0x1b0);
    if (*(long *)(param_1 + 0x1b8) != lVar20) {
      uVar44 = 0;
      lVar30 = 2;
      do {
        if ((*(short *)(lVar20 + lVar30) == -1) ||
           (pbVar33 = pbVar16, func_0x00010a04a0d4(), (pbVar33[0x8f8] & 1) == 0)) {
          FUN_10a5dfa9c(param_1 + 0x7f0,uVar44);
        }
        uVar44 = uVar44 + 1;
        lVar20 = *(long *)(param_1 + 0x1b0);
        lVar30 = lVar30 + 0x18;
      } while (uVar44 < (ulong)((*(long *)(param_1 + 0x1b8) - lVar20 >> 3) * -0x5555555555555555));
    }
    if (*(long *)(param_1 + 0x728) != *(long *)(param_1 + 0x720)) {
      uVar44 = 0;
      do {
        FUN_10a5dfa9c(param_1 + 0x7f0,(uint)uVar44 | 0xffff8000);
        uVar44 = uVar44 + 1;
      } while (uVar44 < (ulong)((*(long *)(param_1 + 0x728) - *(long *)(param_1 + 0x720) >> 3) *
                               -0x5555555555555555));
    }
    lVar20 = (*(long *)(param_1 + 0x208) - *(long *)(param_1 + 0x200) >> 3) * 0x6fb586fb586fb587 +
             (*(long *)(param_1 + 0x770) - *(long *)(param_1 + 0x768) >> 3) * 0x6fb586fb586fb587;
    if (lVar20 != 0) {
      lVar30 = 0;
      do {
        pbStack_110 = (byte *)CONCAT44(pbStack_110._4_4_,(int)lVar30);
        pbVar16 = param_1;
        func_0x00010a01e9ec(param_1,lVar30);
        if (*(code **)(&UNK_110baa620 + (ulong)*pbVar16 * 0x78) != (code *)0x0) {
          (**(code **)(&UNK_110baa620 + (ulong)*pbVar16 * 0x78))(param_1,&pbStack_110,1);
        }
        lVar30 = lVar30 + 1;
      } while (lVar20 != lVar30);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    if (uVar44 <= (ulong)((*(long *)(param_1 + 0x5e8) - (long)puVar48 >> 4) * -0x1111111111111111))
    {
      puVar51 = puVar48 + uVar44 * 0x1e;
      lVar20 = lVar20 * -0x45d1745d1745d170 + lVar30 * -0x10;
      do {
        puVar48[0x11] = 0;
        *(undefined4 *)puVar48 = 0xffffffff;
        *(undefined8 *)((long)puVar48 + 0xc) = 0;
        *(undefined8 *)((long)puVar48 + 4) = 0x3f800000;
        *(undefined8 *)((long)puVar48 + 0x1c) = 0;
        *(undefined8 *)((long)puVar48 + 0x14) = 0x3f80000000000000;
        *(undefined8 *)((long)puVar48 + 0x2c) = 0x3f800000;
        *(undefined8 *)((long)puVar48 + 0x24) = 0;
        *(undefined8 *)((long)puVar48 + 0x3c) = 0x3f80000000000000;
        *(undefined8 *)((long)puVar48 + 0x34) = 0;
        *(undefined8 *)((long)puVar48 + 0x4c) = 0;
        *(undefined8 *)((long)puVar48 + 0x44) = 0;
        *(undefined8 *)((long)puVar48 + 0x5c) = 0;
        *(undefined8 *)((long)puVar48 + 0x54) = 0;
        *(undefined8 *)((long)puVar48 + 0x6c) = 0;
        *(undefined8 *)((long)puVar48 + 100) = 0;
        *(undefined8 *)((long)puVar48 + 0x7c) = 0xff7fffff00000000;
        *(undefined8 *)((long)puVar48 + 0x74) = 0;
        *(undefined8 *)((long)puVar48 + 0x84) = 0xff7fffffff7fffff;
        puVar48[0x1b] = 0;
        puVar48[0x1a] = 0;
        puVar48[0x1d] = 0;
        puVar48[0x1c] = 0;
        puVar48[0x17] = 0;
        puVar48[0x16] = 0;
        puVar48[0x19] = 0;
        puVar48[0x18] = 0;
        puVar48[0x13] = 0;
        puVar48[0x12] = 0;
        puVar48[0x15] = 0;
        puVar48[0x14] = 0;
        puVar48 = puVar48 + 0x1e;
        lVar20 = lVar20 + -0xf0;
      } while (lVar20 != 0);
      *(undefined8 **)(param_1 + 0x5e0) = puVar51;
      goto LAB_10a5ddc54;
    }
    if (uVar56 < 0x111111111111112) {
      lVar31 = *(long *)(param_1 + 0x5e8) - (long)puVar51 >> 4;
      uVar37 = lVar31 * -0x2222222222222222;
      if (uVar37 < uVar56 || uVar37 + lVar20 * -0x6fb586fb586fb587 == 0) {
        uVar37 = uVar56;
      }
      if (0x88888888888887 < (ulong)(lVar31 * -0x1111111111111111)) {
        uVar37 = 0x111111111111111;
      }
      if (0x111111111111111 < uVar37) {
        func_0x000109ffded8();
        goto LAB_10a5df4f0;
      }
      lVar31 = uVar37 * 0xf0;
      __Znwm();
      puVar1 = (undefined4 *)(lVar31 + lVar55);
      lVar20 = lVar20 * -0x45d1745d1745d170 + lVar30 * -0x10;
      puVar42 = puVar1;
      do {
        *(undefined8 *)(puVar42 + 0x22) = 0;
        *puVar42 = 0xffffffff;
        *(undefined8 *)(puVar42 + 3) = 0;
        *(undefined8 *)(puVar42 + 1) = 0x3f800000;
        *(undefined8 *)(puVar42 + 7) = 0;
        *(undefined8 *)(puVar42 + 5) = 0x3f80000000000000;
        *(undefined8 *)(puVar42 + 0xb) = 0x3f800000;
        *(undefined8 *)(puVar42 + 9) = 0;
        *(undefined8 *)(puVar42 + 0xf) = 0x3f80000000000000;
        *(undefined8 *)(puVar42 + 0xd) = 0;
        *(undefined8 *)(puVar42 + 0x13) = 0;
        *(undefined8 *)(puVar42 + 0x11) = 0;
        *(undefined8 *)(puVar42 + 0x17) = 0;
        *(undefined8 *)(puVar42 + 0x15) = 0;
        *(undefined8 *)(puVar42 + 0x1b) = 0;
        *(undefined8 *)(puVar42 + 0x19) = 0;
        *(undefined8 *)(puVar42 + 0x1f) = 0xff7fffff00000000;
        *(undefined8 *)(puVar42 + 0x1d) = 0;
        *(undefined8 *)(puVar42 + 0x21) = 0xff7fffffff7fffff;
        *(undefined8 *)(puVar42 + 0x36) = 0;
        *(undefined8 *)(puVar42 + 0x34) = 0;
        *(undefined8 *)(puVar42 + 0x3a) = 0;
        *(undefined8 *)(puVar42 + 0x38) = 0;
        *(undefined8 *)(puVar42 + 0x2e) = 0;
        *(undefined8 *)(puVar42 + 0x2c) = 0;
        *(undefined8 *)(puVar42 + 0x32) = 0;
        *(undefined8 *)(puVar42 + 0x30) = 0;
        *(undefined8 *)(puVar42 + 0x26) = 0;
        *(undefined8 *)(puVar42 + 0x24) = 0;
        *(undefined8 *)(puVar42 + 0x2a) = 0;
        *(undefined8 *)(puVar42 + 0x28) = 0;
        puVar42 = puVar42 + 0x3c;
        lVar20 = lVar20 + -0xf0;
      } while (lVar20 != 0);
      puVar21 = puVar51;
      puVar32 = (undefined8 *)((long)puVar1 - lVar55);
      if (puVar51 != puVar48) {
        do {
          uVar62 = puVar21[1];
          uVar73 = *puVar21;
          uVar66 = puVar21[3];
          uVar64 = puVar21[2];
          uVar68 = puVar21[4];
          uVar76 = puVar21[7];
          uVar70 = puVar21[6];
          puVar32[5] = puVar21[5];
          puVar32[4] = uVar68;
          puVar32[7] = uVar76;
          puVar32[6] = uVar70;
          puVar32[1] = uVar62;
          *puVar32 = uVar73;
          puVar32[3] = uVar66;
          puVar32[2] = uVar64;
          uVar62 = puVar21[9];
          uVar73 = puVar21[8];
          uVar66 = puVar21[0xb];
          uVar64 = puVar21[10];
          uVar68 = puVar21[0xc];
          uVar76 = puVar21[0xf];
          uVar70 = puVar21[0xe];
          puVar32[0xd] = puVar21[0xd];
          puVar32[0xc] = uVar68;
          puVar32[0xf] = uVar76;
          puVar32[0xe] = uVar70;
          puVar32[9] = uVar62;
          puVar32[8] = uVar73;
          puVar32[0xb] = uVar66;
          puVar32[10] = uVar64;
          uVar62 = puVar21[0x11];
          uVar73 = puVar21[0x10];
          uVar66 = puVar21[0x13];
          uVar64 = puVar21[0x12];
          uVar70 = puVar21[0x15];
          uVar68 = puVar21[0x14];
          puVar32[0x16] = puVar21[0x16];
          puVar32[0x13] = uVar66;
          puVar32[0x12] = uVar64;
          puVar32[0x15] = uVar70;
          puVar32[0x14] = uVar68;
          puVar32[0x11] = uVar62;
          puVar32[0x10] = uVar73;
          uVar73 = puVar21[0x17];
          puVar32[0x18] = puVar21[0x18];
          puVar32[0x17] = uVar73;
          puVar32[0x19] = puVar21[0x19];
          puVar21[0x17] = 0;
          puVar21[0x18] = 0;
          puVar21[0x19] = 0;
          uVar73 = puVar21[0x1a];
          puVar32[0x1b] = puVar21[0x1b];
          puVar32[0x1a] = uVar73;
          puVar32[0x1c] = puVar21[0x1c];
          puVar21[0x1a] = 0;
          puVar21[0x1b] = 0;
          puVar21[0x1c] = 0;
          puVar32[0x1d] = puVar21[0x1d];
          puVar21 = puVar21 + 0x1e;
          puVar32 = puVar32 + 0x1e;
        } while (puVar21 != puVar48);
        do {
          FUN_10a5e59f4(puVar51);
          puVar51 = puVar51 + 0x1e;
        } while (puVar51 != puVar48);
        puVar51 = *(undefined8 **)(param_1 + 0x5d8);
      }
      *(undefined8 **)(param_1 + 0x5d8) = (undefined8 *)((long)puVar1 - lVar55);
      *(undefined4 **)(param_1 + 0x5e0) = puVar1 + uVar44 * 0x3c;
      *(ulong *)(param_1 + 0x5e8) = lVar31 + uVar37 * 0xf0;
      if (puVar51 != (undefined8 *)0x0) {
        __ZdlPv(puVar51);
      }
      goto LAB_10a5ddc54;
    }
  }
  FUN_10a5e59e0();
LAB_10a5df4f0:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x10a5df4f4);
  (*pcVar12)();
LAB_10a5ddd48:
  lVar20 = *(long *)(param_1 + 0x5d8);
  uVar56 = (*(long *)(param_1 + 0x5e0) - lVar20 >> 4) * -0x1111111111111111;
  if (uVar56 < uVar44 || uVar56 - uVar44 == 0) goto LAB_10a5df4f0;
  lVar30 = plVar28[4];
  plVar28 = *(long **)(pcVar49 + 0x1a0);
  if (plVar28 == (long *)0x0) {
    lVar55 = 0;
  }
  else {
    plVar19 = plVar28;
    (**(code **)(*plVar28 + 0x90))();
    lVar55 = *plVar19;
  }
  puVar52 = (undefined2 *)(lVar20 + uVar44 * 0xf0);
  *puVar52 = 0xffff;
  puVar52[1] = (short)lVar30;
  func_0x000109519fd0(&pbStack_110,pcVar49 + 0x6c,pcVar49 + 0xac);
  *(undefined8 *)(puVar52 + 0x1e) = uStack_d8;
  *(byte ***)(puVar52 + 0x1a) = ppbStack_e0;
  *(undefined8 *)(puVar52 + 0x16) = uStack_e8;
  *(byte **)(puVar52 + 0x12) = pbStack_f0;
  *(byte **)(puVar52 + 0xe) = pbStack_f8;
  *(byte **)(puVar52 + 10) = uStack_100;
  *(byte **)(puVar52 + 6) = uStack_108;
  *(byte **)(puVar52 + 2) = pbStack_110;
  *(undefined8 *)(puVar52 + 0x26) = 0xff7fffff00000000;
  *(undefined8 *)(puVar52 + 0x22) = 0;
  *(undefined8 *)(puVar52 + 0x2a) = 0xff7fffffff7fffff;
  *(undefined8 *)(puVar52 + 0x32) = 0xff7fffff00000000;
  *(undefined8 *)(puVar52 + 0x2e) = 0;
  *(undefined8 *)(puVar52 + 0x36) = 0xff7fffffff7fffff;
  *(undefined8 *)(puVar52 + 0x3e) = 0xff7fffff00000000;
  *(undefined8 *)(puVar52 + 0x3a) = 0;
  *(undefined8 *)(puVar52 + 0x42) = 0xff7fffffff7fffff;
  *(undefined1 *)(puVar52 + 0x46) = 0;
  *(undefined8 *)(puVar52 + 0x48) = 0;
  *(undefined8 *)(puVar52 + 0x4c) = 0;
  *(undefined8 *)(puVar52 + 0x50) = 0;
  *(long **)(puVar52 + 0x54) = plVar28;
  if (lVar55 == 0) {
    *(undefined8 *)(puVar52 + 0x58) = 0;
    if ((*pcVar49 != '\x02') && (*(long **)(pcVar49 + 0x1a8) != (long *)0x0)) {
      (**(code **)(**(long **)(pcVar49 + 0x1a8) + 0x198))(&pbStack_110);
      *(byte **)(puVar52 + 0x36) = uStack_100;
      *(byte **)(puVar52 + 0x32) = uStack_108;
      *(byte **)(puVar52 + 0x2e) = pbStack_110;
    }
  }
  else {
    uVar6 = *(uint *)(lVar55 + 0xf0);
    if (uVar6 == 0) {
      *(undefined8 *)(puVar52 + 0x58) = 0;
    }
    else {
      uVar56 = 0;
      if ((ulong)uVar6 != 0) {
        uVar56 = (ulong)(*(long *)(lVar55 + 0x18) - *(long *)(lVar55 + 0x10)) / (ulong)uVar6;
      }
      lVar20 = 0;
      if ((uVar56 & 0xffffffff) != 0) {
        lVar20 = lVar55;
      }
      *(long *)(puVar52 + 0x58) = lVar20;
      if ((uVar56 & 0xffffffff) != 0 && (*(uint *)(pcVar49 + 0x18) & 0x20) != 0) {
        func_0x0001094f5708(&pbStack_110,pcVar49 + 0x6c);
        FUN_10ab52120(lVar55,&pbStack_110,*(long *)(pcVar49 + 0x188),
                      *(long *)(pcVar49 + 400) - *(long *)(pcVar49 + 0x188) >> 6,puVar52 + 0x22,
                      puVar52 + 0x2e);
        goto LAB_10a5ddee0;
      }
    }
    fVar60 = *(float *)(lVar55 + 0x140);
    fVar84 = (float)*(undefined8 *)(lVar55 + 0x138);
    fVar85 = (float)((ulong)*(undefined8 *)(lVar55 + 0x138) >> 0x20);
    fVar72 = ((float)*(undefined8 *)(lVar55 + 0x144) + fVar84) * 0.5;
    fVar75 = ((float)((ulong)*(undefined8 *)(lVar55 + 0x144) >> 0x20) + fVar85) * 0.5;
    fVar83 = (*(float *)(lVar55 + 0x14c) + fVar60) * 0.5;
    *(float *)(puVar52 + 0x2e) = fVar72;
    *(ulong *)(puVar52 + 0x34) = CONCAT44(fVar85 - fVar75,fVar84 - fVar72);
    *(ulong *)(puVar52 + 0x30) = CONCAT44(fVar83,fVar75);
    *(float *)(puVar52 + 0x38) = fVar60 - fVar83;
  }
LAB_10a5ddee0:
  if ((char *)(puVar52 + 0x5c) != pcVar49 + 0x138) {
    FUN_10a5e8d74();
  }
  FUN_10a5e2b64(puVar52,pcVar49);
  uVar44 = uVar44 + 1;
  lVar20 = *(long *)(param_1 + 0x200);
  uVar56 = (*(long *)(param_1 + 0x208) - lVar20 >> 3) * 0x6fb586fb586fb587;
  if (uVar44 == uVar56) goto LAB_10a5ddf40;
  goto LAB_10a5ddc98;
}



/* Entry: 10a5df5bc; end: 10a5dfa9b;  */

long FUN_10a5df5bc(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  if (param_1 != param_2) {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  }
  uVar11 = *(undefined8 *)(param_2 + 0x2a);
  uVar4 = *(undefined8 *)(param_2 + 0x22);
  uVar13 = *(undefined8 *)(param_2 + 0x3a);
  uVar12 = *(undefined8 *)(param_2 + 0x32);
  *(undefined8 *)(param_1 + 0x41) = *(undefined8 *)(param_2 + 0x41);
  *(undefined8 *)(param_1 + 0x3a) = uVar13;
  *(undefined8 *)(param_1 + 0x32) = uVar12;
  *(undefined8 *)(param_1 + 0x2a) = uVar11;
  *(undefined8 *)(param_1 + 0x22) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x80);
  uVar12 = *(undefined8 *)(param_2 + 0x98);
  uVar11 = *(undefined8 *)(param_2 + 0x90);
  uVar16 = *(undefined8 *)(param_2 + 0x68);
  uVar15 = *(undefined8 *)(param_2 + 0x60);
  uVar14 = *(undefined8 *)(param_2 + 0x78);
  uVar13 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x80) = uVar4;
  *(undefined8 *)(param_1 + 0x98) = uVar12;
  *(undefined8 *)(param_1 + 0x90) = uVar11;
  *(undefined8 *)(param_1 + 0x68) = uVar16;
  *(undefined8 *)(param_1 + 0x60) = uVar15;
  *(undefined8 *)(param_1 + 0x78) = uVar14;
  *(undefined8 *)(param_1 + 0x70) = uVar13;
  uVar4 = *(undefined8 *)(param_2 + 0xc0);
  uVar12 = *(undefined8 *)(param_2 + 0xd8);
  uVar11 = *(undefined8 *)(param_2 + 0xd0);
  uVar16 = *(undefined8 *)(param_2 + 0xa8);
  uVar15 = *(undefined8 *)(param_2 + 0xa0);
  uVar14 = *(undefined8 *)(param_2 + 0xb8);
  uVar13 = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xc0) = uVar4;
  *(undefined8 *)(param_1 + 0xd8) = uVar12;
  *(undefined8 *)(param_1 + 0xd0) = uVar11;
  *(undefined8 *)(param_1 + 0xa8) = uVar16;
  *(undefined8 *)(param_1 + 0xa0) = uVar15;
  *(undefined8 *)(param_1 + 0xb8) = uVar14;
  *(undefined8 *)(param_1 + 0xb0) = uVar13;
  uVar13 = *(undefined8 *)(param_2 + 0xf8);
  uVar12 = *(undefined8 *)(param_2 + 0xf0);
  uVar11 = *(undefined8 *)(param_2 + 0x108);
  uVar4 = *(undefined8 *)(param_2 + 0x100);
  uVar15 = *(undefined8 *)(param_2 + 0xe8);
  uVar14 = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  *(undefined8 *)(param_1 + 0xf8) = uVar13;
  *(undefined8 *)(param_1 + 0xf0) = uVar12;
  *(undefined8 *)(param_1 + 0x108) = uVar11;
  *(undefined8 *)(param_1 + 0x100) = uVar4;
  *(undefined8 *)(param_1 + 0xe8) = uVar15;
  *(undefined8 *)(param_1 + 0xe0) = uVar14;
  uVar4 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  if (*(long *)(param_1 + 0x118) != 0) {
    *(long *)(param_1 + 0x120) = *(long *)(param_1 + 0x118);
    __ZdlPv();
    *(undefined8 *)(param_1 + 0x118) = 0;
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x128) = 0;
  }
  *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_2 + 0x118);
  uVar4 = *(undefined8 *)(param_2 + 0x120);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 0x128);
  *(undefined8 *)(param_1 + 0x120) = uVar4;
  *(undefined8 *)(param_2 + 0x118) = 0;
  *(undefined8 *)(param_2 + 0x120) = 0;
  *(undefined8 *)(param_2 + 0x128) = 0;
  if (*(long *)(param_1 + 0x130) != 0) {
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x130);
    __ZdlPv();
    *(undefined8 *)(param_1 + 0x130) = 0;
    *(undefined8 *)(param_1 + 0x138) = 0;
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x130);
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_2 + 0x138);
  *(undefined8 *)(param_1 + 0x130) = uVar4;
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  *(undefined8 *)(param_2 + 0x130) = 0;
  *(undefined8 *)(param_2 + 0x138) = 0;
  *(undefined8 *)(param_2 + 0x140) = 0;
  if (*(long *)(param_1 + 0x148) != 0) {
    FUN_10a5e4d24(param_1 + 0x148);
    __ZdlPv(*(undefined8 *)(param_1 + 0x148));
    *(undefined8 *)(param_1 + 0x148) = 0;
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x158) = 0;
  }
  *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_2 + 0x148);
  uVar4 = *(undefined8 *)(param_2 + 0x150);
  *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_2 + 0x158);
  *(undefined8 *)(param_1 + 0x150) = uVar4;
  *(undefined8 *)(param_2 + 0x148) = 0;
  *(undefined8 *)(param_2 + 0x150) = 0;
  *(undefined8 *)(param_2 + 0x158) = 0;
  if (*(long *)(param_1 + 0x160) != 0) {
    *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x160);
    __ZdlPv();
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(undefined8 *)(param_1 + 0x170) = 0;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x160);
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x168);
  *(undefined8 *)(param_1 + 0x160) = uVar4;
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_2 + 0x170);
  *(undefined8 *)(param_2 + 0x160) = 0;
  *(undefined8 *)(param_2 + 0x168) = 0;
  *(undefined8 *)(param_2 + 0x170) = 0;
  if (*(long *)(param_1 + 0x178) != 0) {
    *(long *)(param_1 + 0x180) = *(long *)(param_1 + 0x178);
    __ZdlPv();
    *(undefined8 *)(param_1 + 0x178) = 0;
    *(undefined8 *)(param_1 + 0x180) = 0;
    *(undefined8 *)(param_1 + 0x188) = 0;
  }
  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_2 + 0x178);
  uVar4 = *(undefined8 *)(param_2 + 0x180);
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_2 + 0x188);
  *(undefined8 *)(param_1 + 0x180) = uVar4;
  *(undefined8 *)(param_2 + 0x178) = 0;
  *(undefined8 *)(param_2 + 0x180) = 0;
  *(undefined8 *)(param_2 + 0x188) = 0;
  lVar8 = *(long *)(param_1 + 400);
  if (lVar8 != 0) {
    lVar7 = *(long *)(param_1 + 0x198);
    lVar2 = lVar8;
    if (lVar7 != lVar8) {
      do {
        lVar7 = lVar7 + -0x7d8;
        FUN_10a5e70e8(lVar7);
      } while (lVar7 != lVar8);
      lVar2 = *(long *)(param_1 + 400);
    }
    *(long *)(param_1 + 0x198) = lVar8;
    __ZdlPv(lVar2);
    *(undefined8 *)(param_1 + 400) = 0;
    *(undefined8 *)(param_1 + 0x198) = 0;
    *(undefined8 *)(param_1 + 0x1a0) = 0;
  }
  uVar4 = *(undefined8 *)(param_2 + 400);
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_2 + 0x198);
  *(undefined8 *)(param_1 + 400) = uVar4;
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_2 + 0x1a0);
  *(undefined8 *)(param_2 + 400) = 0;
  *(undefined8 *)(param_2 + 0x198) = 0;
  *(undefined8 *)(param_2 + 0x1a0) = 0;
  if (*(long *)(param_1 + 0x1a8) != 0) {
    *(long *)(param_1 + 0x1b0) = *(long *)(param_1 + 0x1a8);
    __ZdlPv();
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    *(undefined8 *)(param_1 + 0x1b8) = 0;
  }
  *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(param_2 + 0x1a8);
  uVar4 = *(undefined8 *)(param_2 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_2 + 0x1b8);
  *(undefined8 *)(param_1 + 0x1b0) = uVar4;
  *(undefined8 *)(param_2 + 0x1a8) = 0;
  *(undefined8 *)(param_2 + 0x1b0) = 0;
  *(undefined8 *)(param_2 + 0x1b8) = 0;
  if (*(long *)(param_1 + 0x1c0) != 0) {
    *(long *)(param_1 + 0x1c8) = *(long *)(param_1 + 0x1c0);
    __ZdlPv();
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    *(undefined8 *)(param_1 + 0x1d0) = 0;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x1c0);
  *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_2 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1c0) = uVar4;
  *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(param_2 + 0x1d0);
  *(undefined8 *)(param_2 + 0x1c0) = 0;
  *(undefined8 *)(param_2 + 0x1c8) = 0;
  *(undefined8 *)(param_2 + 0x1d0) = 0;
  lVar8 = *(long *)(param_1 + 0x1d8);
  if (lVar8 != 0) {
    lVar7 = *(long *)(param_1 + 0x1e0);
    lVar2 = lVar8;
    if (lVar7 != lVar8) {
      do {
        lVar7 = lVar7 + -0x178;
        FUN_10a0477e8(lVar7);
      } while (lVar7 != lVar8);
      lVar2 = *(long *)(param_1 + 0x1d8);
    }
    *(long *)(param_1 + 0x1e0) = lVar8;
    __ZdlPv(lVar2);
    *(undefined8 *)(param_1 + 0x1d8) = 0;
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    *(undefined8 *)(param_1 + 0x1e8) = 0;
  }
  *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(param_2 + 0x1d8);
  uVar4 = *(undefined8 *)(param_2 + 0x1e0);
  *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)(param_2 + 0x1e8);
  *(undefined8 *)(param_1 + 0x1e0) = uVar4;
  *(undefined8 *)(param_2 + 0x1e0) = 0;
  *(undefined8 *)(param_2 + 0x1e8) = 0;
  *(undefined8 *)(param_2 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(param_2 + 0x1f0);
  lVar8 = *(long *)(param_1 + 0x1f8);
  if (lVar8 != 0) {
    lVar7 = *(long *)(param_1 + 0x200);
    lVar2 = lVar8;
    if (lVar7 != lVar8) {
      do {
        lVar7 = lVar7 + -0x1b8;
        func_0x00010a5e58d0(lVar7);
      } while (lVar7 != lVar8);
      lVar2 = *(long *)(param_1 + 0x1f8);
    }
    *(long *)(param_1 + 0x200) = lVar8;
    __ZdlPv(lVar2);
    *(long *)(param_1 + 0x1f8) = 0;
    *(undefined8 *)(param_1 + 0x200) = 0;
    *(undefined8 *)(param_1 + 0x208) = 0;
  }
  *(undefined8 *)(param_1 + 0x1f8) = *(undefined8 *)(param_2 + 0x1f8);
  uVar4 = *(undefined8 *)(param_2 + 0x200);
  *(undefined8 *)(param_1 + 0x208) = *(undefined8 *)(param_2 + 0x208);
  *(undefined8 *)(param_1 + 0x200) = uVar4;
  *(undefined8 *)(param_2 + 0x1f8) = 0;
  *(undefined8 *)(param_2 + 0x200) = 0;
  *(undefined8 *)(param_2 + 0x208) = 0;
  if (*(long *)(param_1 + 0x210) != 0) {
    puVar9 = (undefined8 *)(param_1 + 0x210);
    FUN_10a5e24d8(puVar9);
    __ZdlPv(*puVar9);
    *puVar9 = 0;
    *(undefined8 *)(param_1 + 0x218) = 0;
    *(undefined8 *)(param_1 + 0x220) = 0;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x210);
  *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_2 + 0x218);
  *(undefined8 *)(param_1 + 0x210) = uVar4;
  *(undefined8 *)(param_1 + 0x220) = *(undefined8 *)(param_2 + 0x220);
  *(undefined8 *)(param_2 + 0x210) = 0;
  *(undefined8 *)(param_2 + 0x218) = 0;
  *(undefined8 *)(param_2 + 0x220) = 0;
  puVar9 = *(undefined8 **)(param_1 + 0x228);
  if (puVar9 != (undefined8 *)0x0) {
    puVar10 = *(undefined8 **)(param_1 + 0x230);
    puVar3 = puVar9;
    if (puVar10 != puVar9) {
      do {
        puVar3 = puVar10 + -8;
        *puVar3 = &PTR_DAT_110b17898;
        func_0x00010a004dac(puVar10 + -7);
        puVar10 = puVar3;
      } while (puVar3 != puVar9);
      puVar3 = *(undefined8 **)(param_1 + 0x228);
    }
    *(undefined8 **)(param_1 + 0x230) = puVar9;
    __ZdlPv(puVar3);
    *(undefined8 *)(param_1 + 0x228) = 0;
    *(undefined8 *)(param_1 + 0x230) = 0;
    *(undefined8 *)(param_1 + 0x238) = 0;
  }
  *(undefined8 *)(param_1 + 0x228) = *(undefined8 *)(param_2 + 0x228);
  uVar4 = *(undefined8 *)(param_2 + 0x230);
  *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(param_2 + 0x238);
  *(undefined8 *)(param_1 + 0x230) = uVar4;
  *(undefined8 *)(param_2 + 0x228) = 0;
  *(undefined8 *)(param_2 + 0x230) = 0;
  *(undefined8 *)(param_2 + 0x238) = 0;
  lVar8 = 0x240;
  do {
    uVar4 = *(undefined8 *)(param_1 + lVar8);
    *(undefined8 *)(param_1 + lVar8) = *(undefined8 *)(param_2 + lVar8);
    *(undefined8 *)(param_2 + lVar8) = uVar4;
    lVar8 = lVar8 + 8;
  } while (lVar8 != 0x2f8);
  lVar8 = 0;
  uVar11 = *(undefined8 *)(param_2 + 0x300);
  uVar4 = *(undefined8 *)(param_2 + 0x2f8);
  uVar12 = *(undefined8 *)(param_2 + 0x308);
  uVar14 = *(undefined8 *)(param_2 + 800);
  uVar13 = *(undefined8 *)(param_2 + 0x318);
  *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_2 + 0x310);
  *(undefined8 *)(param_1 + 0x308) = uVar12;
  *(undefined8 *)(param_1 + 800) = uVar14;
  *(undefined8 *)(param_1 + 0x318) = uVar13;
  *(undefined8 *)(param_1 + 0x300) = uVar11;
  *(undefined8 *)(param_1 + 0x2f8) = uVar4;
  uVar11 = *(undefined8 *)(param_2 + 0x330);
  uVar4 = *(undefined8 *)(param_2 + 0x328);
  uVar13 = *(undefined8 *)(param_2 + 0x340);
  uVar12 = *(undefined8 *)(param_2 + 0x338);
  uVar14 = *(undefined8 *)(param_2 + 0x348);
  uVar16 = *(undefined8 *)(param_2 + 0x360);
  uVar15 = *(undefined8 *)(param_2 + 0x358);
  *(undefined8 *)(param_1 + 0x350) = *(undefined8 *)(param_2 + 0x350);
  *(undefined8 *)(param_1 + 0x348) = uVar14;
  *(undefined8 *)(param_1 + 0x360) = uVar16;
  *(undefined8 *)(param_1 + 0x358) = uVar15;
  *(undefined8 *)(param_1 + 0x330) = uVar11;
  *(undefined8 *)(param_1 + 0x328) = uVar4;
  *(undefined8 *)(param_1 + 0x340) = uVar13;
  *(undefined8 *)(param_1 + 0x338) = uVar12;
  do {
    lVar2 = param_1 + lVar8;
    if (*(long *)(lVar2 + 0x368) != 0) {
      *(long *)(lVar2 + 0x370) = *(long *)(lVar2 + 0x368);
      __ZdlPv();
      *(undefined8 *)(lVar2 + 0x368) = 0;
      *(undefined8 *)(lVar2 + 0x370) = 0;
      *(undefined8 *)(lVar2 + 0x378) = 0;
    }
    lVar7 = param_2 + lVar8;
    uVar4 = *(undefined8 *)(lVar7 + 0x368);
    *(undefined8 *)(lVar2 + 0x370) = *(undefined8 *)(lVar7 + 0x370);
    *(undefined8 *)(lVar2 + 0x368) = uVar4;
    *(undefined8 *)(lVar2 + 0x378) = *(undefined8 *)(lVar7 + 0x378);
    *(undefined8 *)(lVar7 + 0x368) = 0;
    *(undefined8 *)(lVar7 + 0x370) = 0;
    *(undefined8 *)(lVar7 + 0x378) = 0;
    lVar8 = lVar8 + 0x18;
  } while (lVar8 != 0x228);
  FUN_10a5e4d70((long *)(param_1 + 0x590));
  uVar4 = *(undefined8 *)(param_2 + 0x590);
  *(undefined8 *)(param_2 + 0x590) = 0;
  lVar8 = *(long *)(param_1 + 0x590);
  *(undefined8 *)(param_1 + 0x590) = uVar4;
  if (lVar8 != 0) {
    __ZdlPv();
  }
  *(undefined8 *)(param_1 + 0x598) = *(undefined8 *)(param_2 + 0x598);
  *(undefined8 *)(param_2 + 0x598) = 0;
  lVar8 = *(long *)(param_2 + 0x5a8);
  *(long *)(param_1 + 0x5a8) = lVar8;
  *(undefined4 *)(param_1 + 0x5b0) = *(undefined4 *)(param_2 + 0x5b0);
  lVar2 = *(long *)(param_2 + 0x5a0);
  *(long *)(param_1 + 0x5a0) = lVar2;
  if (lVar8 != 0) {
    uVar5 = *(ulong *)(lVar2 + 8);
    uVar6 = *(ulong *)(param_1 + 0x598);
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long *)(*(long *)(param_1 + 0x590) + uVar5 * 8) = param_1 + 0x5a0;
    *(undefined8 *)(param_2 + 0x5a0) = 0;
    *(undefined8 *)(param_2 + 0x5a8) = 0;
  }
  return param_1;
}



/* Entry: 10a5dfa9c; end: 10a5dfb5b;  */

void FUN_10a5dfa9c(long *param_1,long param_2,long param_3)

{
  undefined2 *puVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined2 *puVar7;
  
  puVar1 = (undefined2 *)param_1[1];
  if (puVar1 < (undefined2 *)param_1[2]) {
    puVar7 = puVar1 + 1;
    *puVar1 = (short)param_2;
  }
  else {
    lVar6 = (long)puVar1 - *param_1;
    lVar5 = lVar6 >> 1;
    if (lVar5 < -1) {
      FUN_10a5e4f14();
      *(undefined1 *)param_1 = 0;
      func_0x00010a5dfbd8(param_1 + 0xb8);
      param_1[0xf3] = 0;
      param_1[0xff] = param_1[0xfe];
      if (param_2 != 0) {
        FUN_10a5df5bc(param_2,param_1 + 1);
      }
      if (param_3 != 0) {
        func_0x00010a5e4dd4(param_3,param_1 + 0xf4);
        func_0x00010a5e4e74(param_3 + 0x28,param_1 + 0xf9);
      }
      FUN_10a5e3aec(param_1 + 0xf4);
      if (param_1[0xfc] != 0) {
        func_0x00010a5bce04(param_1 + 0xf9,param_1[0xfb]);
        param_1[0xfb] = 0;
        lVar5 = param_1[0xfa];
        if (lVar5 != 0) {
          lVar6 = 0;
          do {
            *(undefined8 *)(param_1[0xf9] + lVar6 * 8) = 0;
            lVar6 = lVar6 + 1;
          } while (lVar5 != lVar6);
        }
        param_1[0xfc] = 0;
      }
      return;
    }
    uVar4 = param_1[2] - *param_1;
    uVar3 = uVar4;
    if (uVar4 <= lVar5 + 1U) {
      uVar3 = lVar5 + 1;
    }
    if (0x7ffffffffffffffd < uVar4) {
      uVar3 = 0x7fffffffffffffff;
    }
    plVar2 = param_1;
    FUN_10a5e4f28();
    lVar5 = *param_1;
    puVar1 = (undefined2 *)((long)plVar2 + lVar6);
    lVar6 = (long)puVar1 - (param_1[1] - lVar5);
    puVar7 = puVar1 + 1;
    *puVar1 = (short)param_2;
    _memcpy(lVar6,lVar5);
    lVar5 = *param_1;
    *param_1 = lVar6;
    param_1[1] = (long)puVar7;
    param_1[2] = (long)((long)plVar2 + uVar3 * 2);
    if (lVar5 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar7;
  return;
}



/* Entry: 10a5dfb5c; end: 10a5dfd17;  */

void FUN_10a5dfb5c(undefined1 *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  *param_1 = 0;
  func_0x00010a5dfbd8(param_1 + 0x5c0);
  *(undefined8 *)(param_1 + 0x798) = 0;
  *(undefined8 *)(param_1 + 0x7f8) = *(undefined8 *)(param_1 + 0x7f0);
  if (param_2 != 0) {
    FUN_10a5df5bc(param_2,param_1 + 8);
  }
  if (param_3 != 0) {
    func_0x00010a5e4dd4(param_3,param_1 + 0x7a0);
    func_0x00010a5e4e74(param_3 + 0x28,param_1 + 0x7c8);
  }
  FUN_10a5e3aec(param_1 + 0x7a0);
  if (*(long *)(param_1 + 0x7e0) != 0) {
    func_0x00010a5bce04(param_1 + 0x7c8,*(undefined8 *)(param_1 + 0x7d8));
    *(undefined8 *)(param_1 + 0x7d8) = 0;
    lVar1 = *(long *)(param_1 + 2000);
    if (lVar1 != 0) {
      lVar2 = 0;
      do {
        *(undefined8 *)(*(long *)(param_1 + 0x7c8) + lVar2 * 8) = 0;
        lVar2 = lVar2 + 1;
      } while (lVar1 != lVar2);
    }
    *(undefined8 *)(param_1 + 0x7e0) = 0;
  }
  return;
}



/* Entry: 10a5dfd18; end: 10a5dfd93;  */

undefined8 * FUN_10a5dfd18(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a5dfd94; end: 10a5dfef7;  */

long FUN_10a5dfd94(long param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lStack_78;
  undefined1 uStack_69;
  long *plStack_68;
  
  lVar4 = param_1;
  FUN_10a5dfef8();
  if ((int)lVar4 == 0xffff) {
    uVar1 = *(long *)(param_2 + 0x230) - *(long *)(param_2 + 0x228);
    if (uVar1 == 0) {
      lVar4 = 0xffff;
    }
    else {
      uVar5 = *(ulong *)(param_1 + 0x638);
      lVar4 = param_1;
      FUN_10a5dff54(param_1,(long)uVar1 >> 4);
      plStack_68 = &lStack_78;
      lVar8 = param_1 + 0x640;
      lStack_78 = param_2;
      FUN_10a5e90bc(lVar8,&lStack_78,&UNK_10dd5b8f9,&plStack_68,&uStack_69);
      lVar6 = 0;
      uVar7 = 0;
      *(short *)(lVar8 + 0x18) = (short)lVar4;
      lVar8 = uVar5 * 0x178;
      do {
        uVar3 = (*(long *)(param_1 + 0x628) - *(long *)(param_1 + 0x620) >> 3) * 0x51b3bea3677d46cf;
        if ((uVar3 < uVar5 + uVar7 || uVar3 - (uVar5 + uVar7) == 0) ||
           ((ulong)(*(long *)(param_2 + 0x230) - *(long *)(param_2 + 0x228) >> 4) <= uVar7))
        goto LAB_10a5dfef4;
        FUN_10a5e001c(*(long *)(param_1 + 0x620) + lVar8,param_2,
                      *(undefined8 *)(*(long *)(param_2 + 0x228) + lVar6));
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x10;
        lVar8 = lVar8 + 0x178;
      } while ((long)uVar1 >> 4 != uVar7);
      uVar7 = (*(long *)(param_1 + 0x628) - *(long *)(param_1 + 0x620) >> 3) * 0x51b3bea3677d46cf;
      if (uVar7 < uVar5 || uVar7 - uVar5 == 0) {
LAB_10a5dfef4:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a5dfef8);
        (*pcVar2)();
      }
      *(char *)(*(long *)(param_1 + 0x620) + uVar5 * 0x178 + 0x1a) = (char)(uVar1 >> 4);
    }
  }
  return lVar4;
}



/* Entry: 10a5dfef8; end: 10a5dff53;  */

undefined2 FUN_10a5dfef8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uStack_28;
  
  lVar1 = param_1 + 0x640;
  uStack_28 = param_2;
  FUN_10a5e4f88(lVar1,&uStack_28);
  if (lVar1 == 0) {
    lVar1 = param_1 + 0x598;
    uStack_28 = param_2;
    FUN_10a5e4f88(lVar1,&uStack_28);
    if (lVar1 == 0) {
      return 0xffff;
    }
  }
  return *(undefined2 *)(lVar1 + 0x18);
}



/* Entry: 10a5dff54; end: 10a5e001b;  */

uint FUN_10a5dff54(long param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ushort *puVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)(param_1 + 0x610) - *(long *)(param_1 + 0x608);
  lVar7 = *(long *)(param_1 + 0x638);
  uVar1 = lVar6 >> 1;
  FUN_10a5e13b4(param_1 + 0x608,param_2 + uVar1);
  *(long *)(param_1 + 0x638) = lVar7 + param_2;
  if ((ulong)((*(long *)(param_1 + 0x628) - *(long *)(param_1 + 0x620) >> 3) * 0x51b3bea3677d46cf) <
      (ulong)(lVar7 + param_2)) {
    FUN_10a5e13e4(param_1 + 0x620);
  }
  if (param_2 != 0) {
    uVar4 = *(long *)(param_1 + 0x610) - *(long *)(param_1 + 0x608) >> 1;
    lVar3 = 0;
    if (uVar1 <= uVar4) {
      lVar3 = uVar4 - uVar1;
    }
    puVar5 = (ushort *)(*(long *)(param_1 + 0x608) + lVar6);
    do {
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a5e001c);
        (*pcVar2)();
      }
      *puVar5 = (ushort)lVar7 | 0x8000;
      lVar7 = lVar7 + 1;
      lVar3 = lVar3 + -1;
      param_2 = param_2 + -1;
      puVar5 = puVar5 + 1;
    } while (param_2 != 0);
  }
  return (uint)lVar6 >> 1 & 0xffff;
}



/* Entry: 10a5e001c; end: 10a5e13b3;  */

/* WARNING: Removing unreachable block (ram,0x00010a5e0c20) */
/* WARNING: Type propagation algorithm not settling */

long ******* FUN_10a5e001c(long *param_1,undefined **param_2,long param_3)

{
  ulong uVar1;
  char cVar2;
  ulong *puVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  long *******ppppppplVar7;
  long *plVar8;
  long *******ppppppplVar9;
  undefined **ppuVar10;
  undefined4 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined2 uVar16;
  uint uVar17;
  undefined8 uVar18;
  long *****ppppplVar19;
  undefined **ppuVar20;
  ulong uVar21;
  long *plVar22;
  long *plVar23;
  uint uVar24;
  long *****ppppplVar25;
  long *******ppppppplVar26;
  long *****unaff_x21;
  long *******ppppppplVar27;
  ulong uVar28;
  long *plVar29;
  long ******pppppplVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  long *plVar33;
  ulong *puVar34;
  long *plVar35;
  ulong *puVar36;
  ulong *puVar37;
  undefined *puVar38;
  long lVar39;
  undefined8 uVar40;
  long ******pppppplVar41;
  undefined8 uVar42;
  long lVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  long *******ppppppplStack_328;
  long ******pppppplStack_320;
  long ******pppppplStack_318;
  long *******ppppppplStack_310;
  long *******ppppppplStack_308;
  long lStack_300;
  long *******ppppppplStack_2f8;
  ulong uStack_2f0;
  long *******ppppppplStack_2e8;
  undefined1 *puStack_2e0;
  code *pcStack_2d8;
  undefined1 **ppuStack_2d0;
  code *pcStack_2c8;
  long lStack_2c0;
  long *plStack_2b8;
  ulong *puStack_2b0;
  long ******pppppplStack_2a8;
  ulong uStack_2a0;
  long *****ppppplStack_298;
  long *****ppppplStack_290;
  long *******ppppppplStack_288;
  undefined1 *puStack_280;
  code *pcStack_278;
  long *plStack_270;
  undefined **ppuStack_268;
  long lStack_260;
  undefined *puStack_258;
  long *******ppppppplStack_250;
  long *******ppppppplStack_248;
  long *******ppppppplStack_240;
  long *******ppppppplStack_230;
  long *******ppppppplStack_228;
  long *******ppppppplStack_220;
  undefined8 uStack_218;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  long *plStack_200;
  long *plStack_1f8;
  long *******ppppppplStack_1f0;
  long *******ppppppplStack_1e8;
  long *******ppppppplStack_1e0;
  long ******pppppplStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined2 uStack_19c;
  undefined2 uStack_19a;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined1 uStack_18c;
  undefined1 uStack_18b;
  undefined2 uStack_18a;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long *******ppppppplStack_168;
  long *******ppppppplStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long *****ppppplStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_71 [17];
  
  if (param_3 == 0) {
    uStack_180 = 0;
    uStack_198 = 0;
    uStack_19a = 0;
    uStack_18c = 0;
    uStack_18a = 0;
    ppppppplStack_1e0 = (long *******)0x0;
    ppppppplStack_1e8 = (long *******)0x0;
    ppppppplStack_1f0 = (long *******)0x0;
    pppppplStack_1d8 = (long ******)0x10f000000;
    uStack_1d0._0_4_ = 6;
    uStack_1c4 = 0;
    uStack_1c0 = 0;
    uStack_1d0._4_4_ = 0;
    uStack_1c8 = 0;
    uStack_1b4 = 0;
    uStack_1b0 = 0;
    uStack_1bc = 0;
    uStack_1b8 = 0;
    uStack_1a4 = 0;
    uStack_1a0 = 0;
    uStack_1ac = 0;
    uStack_1a8 = 0;
    uStack_19c = 0;
    uStack_194 = 0xff;
    uStack_190 = 0xff;
    uStack_18b = 7;
    uStack_188 = 1;
    uStack_178 = 0x3f800000;
    ppppppplStack_168 = (long *******)0x0;
    uStack_170 = 0;
    uStack_158 = 0;
    ppppppplStack_160 = (long *******)0x0;
    uStack_148 = 0;
    uStack_150 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    lStack_130 = 0;
    lStack_118 = 0;
    lStack_120 = 0;
    lStack_110 = -1;
    uStack_e0 = 0;
    uStack_e8 = 0;
    uStack_d8 = 0;
    plStack_f0 = (long *)0x0;
    uStack_f8 = 0;
    uStack_100 = 0;
    ppppplStack_108 = (long *****)0x0;
    uStack_d0 = 0x3f800000;
    uStack_c0 = 0;
    plStack_c8 = (long *)0x0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_a8 = 0x3f800000;
    lStack_a0 = 0;
    lStack_98 = 0;
    lStack_90 = 0;
    lStack_88 = -1;
    lStack_80 = -1;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[0xb] = 0xff00000000;
    param_1[10] = 0;
    param_1[0xd] = 1;
    param_1[0xc] = 0x700000000ff;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = (long)"ED";
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 6;
    param_1[7] = 0;
    param_1[6] = 0;
    plVar29 = param_1 + 0x11;
    param_1[0xe] = 0;
    param_1[0x10] = 0;
    param_1[0xf] = 0x3f800000;
    if (*plVar29 != 0) {
      param_1[0x12] = *plVar29;
      __ZdlPv();
      *plVar29 = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
    }
    *plVar29 = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    ppppppplStack_160 = (long *******)0x0;
    uStack_158 = 0;
    ppppppplStack_168 = (long *******)0x0;
    plVar29 = param_1 + 0x17;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x14] = 0;
    if (*plVar29 != 0) {
      param_1[0x18] = *plVar29;
      __ZdlPv();
      *plVar29 = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
    }
    *plVar29 = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    lStack_130 = 0;
    uStack_128 = 0;
    lStack_138 = 0;
    param_1[0x1b] = lStack_118;
    param_1[0x1a] = lStack_120;
    param_1[0x1c] = lStack_110;
    FUN_10a0451f4(param_1 + 0x1d);
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    ppppplStack_108 = (long *****)0x0;
    func_0x00010a5e5a38(param_1 + 0x20);
    plStack_f0 = (long *)0x0;
    lVar6 = param_1[0x20];
    param_1[0x20] = 0;
    if (lVar6 != 0) {
      __ZdlPv();
    }
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    uStack_e8 = 0;
    param_1[0x23] = 0;
    *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
    FUN_10a198728(param_1 + 0x25);
    plStack_c8 = (long *)0x0;
    lVar6 = param_1[0x25];
    param_1[0x25] = 0;
    if (lVar6 != 0) {
      __ZdlPv();
    }
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    uStack_c0 = 0;
    param_1[0x28] = 0;
    *(undefined4 *)(param_1 + 0x29) = 0x3f800000;
    param_1[0x2b] = lStack_98;
    param_1[0x2a] = lStack_a0;
    param_1[0x2d] = lStack_88;
    param_1[0x2c] = lStack_90;
    param_1[0x2e] = lStack_80;
    FUN_10a047524(&plStack_c8);
    FUN_10a046ff8(&plStack_f0);
    ppppppplStack_230 = (long *******)&ppppplStack_108;
    FUN_10a046ac4(&ppppppplStack_230);
    if (lStack_138 != 0) {
      lStack_130 = lStack_138;
      __ZdlPv();
    }
    if (ppppppplStack_168 != (long *******)0x0) {
      ppppppplStack_160 = ppppppplStack_168;
      __ZdlPv();
    }
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 1;
    return ppppppplStack_168;
  }
  lVar6 = *(long *)(param_3 + 0x188);
  if (lVar6 == 0) {
    ppuVar10 = param_2;
    lVar12 = 0;
  }
  else {
    ppuVar10 = &PTR_DAT_110bb3230;
    ___dynamic_cast(lVar6,&PTR_DAT_110bb3230,&PTR_DAT_110c67800,0);
    lVar12 = 0;
    if (lVar6 != 0) {
      lVar12 = lVar6 + 0xf8;
    }
  }
  *param_1 = lVar12;
  param_1[1] = (long)(param_2 + 0xb);
  param_1[2] = param_3 + 0x1a0;
  param_1[0x10] = param_3;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x1a) = 0;
  func_0x00010a5e5a38(param_1 + 0x20);
  ppppppplVar7 = (long *******)(param_1 + 0x25);
  FUN_10a198728();
  param_1[0x2a] = 0;
  *(byte *)(param_1 + 3) =
       *(byte *)(param_1 + 3) & 0xe0 |
       *(byte *)(param_3 + 0x279) & 1 | (*(byte *)(param_3 + 0x279) >> 1 & 1) << 4 |
       *(char *)(param_3 + 0x21a) << 1 | *(char *)(param_3 + 0x219) << 2 |
       *(char *)(param_3 + 0x218) << 3;
  uVar24 = *(uint *)(param_3 + 0x21e);
  *(byte *)((long)param_1 + 0x1b) =
       (byte)(uVar24 >> 7) & 0xfe | (byte)uVar24 |
       (byte)(uVar24 >> 0xe) & 0xfc | (byte)(uVar24 >> 0x15) & 0xf8;
  *(undefined1 *)((long)param_1 + 0x1c) = *(undefined1 *)(param_3 + 0x244);
  lVar12 = *(long *)(param_3 + 600);
  lVar39 = *(long *)(lVar12 + 0x30);
  lVar14 = *(long *)(lVar12 + 0x28);
  ppppppplVar9 = *(long ********)(lVar12 + 0x38);
  lVar43 = *(long *)(lVar12 + 0x50);
  lVar6 = *(long *)(lVar12 + 0x48);
  param_1[7] = *(long *)(lVar12 + 0x40);
  param_1[6] = (long)ppppppplVar9;
  param_1[9] = lVar43;
  param_1[8] = lVar6;
  param_1[5] = lVar39;
  param_1[4] = lVar14;
  lVar12 = *(long *)(param_3 + 0x268);
  lVar39 = *(long *)(lVar12 + 0x30);
  lVar14 = *(long *)(lVar12 + 0x28);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(lVar12 + 0x38);
  param_1[0xb] = lVar39;
  param_1[10] = lVar14;
  *(undefined1 *)((long)param_1 + 100) = *(undefined1 *)(param_3 + 0x278);
  *(undefined1 *)((long)param_1 + 0x65) = *(undefined1 *)(param_3 + 0x21c);
  *(undefined1 *)((long)param_1 + 0x66) = *(undefined1 *)(param_3 + 0x21d);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_3 + 0x250);
  *(undefined4 *)((long)param_1 + 0x6c) = 0;
  param_1[0xe] = *(long *)(param_3 + 0x248);
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_3 + 0x224);
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)((long)param_1 + 0xd4);
  param_1[0x14] = param_1[0x15];
  param_1[0x16] = 0;
  puStack_258 = *(undefined **)(param_3 + 0x1c8);
  ppuStack_268 = param_2;
  lStack_260 = param_3;
  if ((param_1[0x1b] != param_3) || ((undefined *)param_1[0x1c] != puStack_258)) {
    param_1[0x1a] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x14] = 0;
    puVar31 = *(undefined8 **)(param_3 + 0x1b8);
    if (puVar31 == (undefined8 *)0x0) {
LAB_10a5e09c0:
      uVar13 = 0;
      uVar28 = 0;
    }
    else {
      puVar34 = puVar31 + 1;
      puVar36 = (ulong *)*puVar31;
      if (puVar36 == puVar34) goto LAB_10a5e09c0;
      uVar28 = 0;
      uVar13 = 0;
      lVar12 = -0x5555555555555555;
      plVar29 = (long *)&UNK_10e4ce9f8;
      do {
        pppppplVar30 = (long ******)puVar36[8];
        if (pppppplVar30 != (long ******)0x0) {
          lVar14 = param_1[0x11];
          puVar31 = (undefined8 *)param_1[0x12];
          ppppplVar25 = (long *****)((long)puVar31 - lVar14);
          uVar21 = ((long)ppppplVar25 >> 3) * -0x5555555555555555;
          if (uVar21 <= uVar13) {
            if (puVar31 < (undefined8 *)param_1[0x13]) {
              *puVar31 = 0;
              puVar31[1] = 0;
              ppppplVar25 = (long *****)(puVar31 + 3);
              puVar31[2] = 0;
LAB_10a5e04e8:
              param_1[0x12] = (long)ppppplVar25;
              if ((long *****)param_1[0x11] == ppppplVar25) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10a5e1318);
                (*pcVar4)();
              }
              unaff_x21 = ppppplVar25 + -3;
              pppppplVar30 = (long ******)puVar36[8];
              goto LAB_10a5e0500;
            }
            uVar21 = uVar21 + 1;
            if (uVar21 < 0xaaaaaaaaaaaaaab) {
              lVar14 = param_1[0x13] - lVar14 >> 3;
              uVar13 = lVar14 * 0x5555555555555556;
              if (uVar13 < uVar21 || uVar13 - uVar21 == 0) {
                uVar13 = uVar21;
              }
              if (0x555555555555554 < (ulong)(lVar14 * -0x5555555555555555)) {
                uVar13 = 0xaaaaaaaaaaaaaaa;
              }
              plVar35 = param_1 + 0x11;
              FUN_10a044e44();
              puVar31 = (undefined8 *)((long)plVar35 + (long)ppppplVar25);
              puVar31[1] = 0;
              puVar31[2] = 0;
              *puVar31 = 0;
              ppppplVar25 = (long *****)(puVar31 + 3);
              ppuVar10 = (undefined **)param_1[0x11];
              uVar28 = (long)puVar31 - (param_1[0x12] - (long)ppuVar10);
              _memcpy(uVar28);
              ppppppplVar7 = (long *******)param_1[0x11];
              param_1[0x11] = uVar28;
              param_1[0x12] = (long)ppppplVar25;
              param_1[0x13] = (long)(plVar35 + uVar13 * 3);
              if (ppppppplVar7 != (long *******)0x0) {
                __ZdlPv();
              }
              goto LAB_10a5e04e8;
            }
            FUN_10a044e30();
LAB_10a5e131c:
            ppppppplVar7 = (long *******)&UNK_10f6347d3;
            FUN_10a05bab8();
            goto LAB_10a5e1328;
          }
          unaff_x21 = (long *****)(lVar14 + uVar13 * 0x18);
LAB_10a5e0500:
          *unaff_x21 = (long ****)puVar36[7];
          switch(*(undefined1 *)((long)pppppplVar30 + 100)) {
          case 0:
            uVar24 = *(uint *)(param_1 + 0x1a);
            uVar28 = (ulong)uVar24 + 4;
            lVar14 = param_1[0x17];
            ppuVar10 = (undefined **)(uVar28 - (param_1[0x18] - lVar14));
            if ((ulong)(param_1[0x18] - lVar14) <= uVar28 && ppuVar10 != (undefined **)0x0) {
              ppppppplVar7 = (long *******)(param_1 + 0x17);
              func_0x0001092bf294();
              lVar14 = param_1[0x17];
            }
            *(undefined4 *)(lVar14 + (ulong)uVar24) = *(undefined4 *)((long)pppppplVar30 + 0x24);
            uVar11 = 4;
            uVar16 = 3;
            break;
          case 1:
            uVar24 = *(uint *)(param_1 + 0x1a);
            uVar28 = (ulong)uVar24 + 4;
            lVar14 = param_1[0x17];
            ppuVar10 = (undefined **)(uVar28 - (param_1[0x18] - lVar14));
            if ((ulong)(param_1[0x18] - lVar14) <= uVar28 && ppuVar10 != (undefined **)0x0) {
              ppppppplVar7 = (long *******)(param_1 + 0x17);
              func_0x0001092bf294();
              lVar14 = param_1[0x17];
            }
            *(undefined4 *)(lVar14 + (ulong)uVar24) = *(undefined4 *)((long)pppppplVar30 + 0x24);
            uVar11 = 4;
            uVar16 = 2;
            break;
          case 2:
            uVar24 = *(uint *)(param_1 + 0x1a);
            uVar13 = (ulong)uVar24;
            uVar28 = uVar13 + 1;
            lVar14 = param_1[0x17];
            if ((ulong)(param_1[0x18] - lVar14) <= uVar13) {
              ppuVar10 = (undefined **)(uVar28 - (param_1[0x18] - lVar14));
              ppppppplVar7 = (long *******)(param_1 + 0x17);
              func_0x0001092bf294();
              lVar14 = param_1[0x17];
            }
            *(undefined1 *)(lVar14 + uVar13) = *(undefined1 *)((long)pppppplVar30 + 0x24);
            uVar16 = 1;
            uVar11 = 1;
            break;
          case 3:
            uVar24 = *(uint *)(param_1 + 0x1a);
            uVar28 = (ulong)uVar24 + 8;
            lVar14 = param_1[0x17];
            ppuVar10 = (undefined **)(uVar28 - (param_1[0x18] - lVar14));
            if ((ulong)(param_1[0x18] - lVar14) <= uVar28 && ppuVar10 != (undefined **)0x0) {
              ppppppplVar7 = (long *******)(param_1 + 0x17);
              func_0x0001092bf294();
              lVar14 = param_1[0x17];
            }
            *(undefined8 *)(lVar14 + (ulong)uVar24) = *(undefined8 *)((long)pppppplVar30 + 0x24);
            uVar11 = 8;
            uVar16 = 7;
            break;
          case 4:
            uVar24 = *(uint *)(param_1 + 0x1a);
            uVar28 = (ulong)uVar24 + 0xc;
            lVar14 = param_1[0x17];
            ppuVar10 = (undefined **)(uVar28 - (param_1[0x18] - lVar14));
            if ((ulong)(param_1[0x18] - lVar14) <= uVar28 && ppuVar10 != (undefined **)0x0) {
              ppppppplVar7 = (long *******)(param_1 + 0x17);
              func_0x0001092bf294();
              lVar14 = param_1[0x17];
            }
            puVar31 = (undefined8 *)(lVar14 + (ulong)uVar24);
            uVar18 = *(undefined8 *)((long)pppppplVar30 + 0x24);
            *(undefined4 *)(puVar31 + 1) = *(undefined4 *)((long)pppppplVar30 + 0x2c);
            *puVar31 = uVar18;
            uVar11 = 0xc;
            uVar16 = 8;
            break;
          case 5:
            uVar24 = *(uint *)(param_1 + 0x1a);
            uVar28 = (ulong)uVar24 + 0x10;
            lVar14 = param_1[0x17];
            ppuVar10 = (undefined **)(uVar28 - (param_1[0x18] - lVar14));
            if ((ulong)(param_1[0x18] - lVar14) <= uVar28 && ppuVar10 != (undefined **)0x0) {
              ppppppplVar7 = (long *******)(param_1 + 0x17);
              func_0x0001092bf294();
              lVar14 = param_1[0x17];
            }
            uVar18 = *(undefined8 *)((long)pppppplVar30 + 0x24);
            puVar31 = (undefined8 *)(lVar14 + (ulong)uVar24);
            puVar31[1] = *(undefined8 *)((long)pppppplVar30 + 0x2c);
            *puVar31 = uVar18;
            uVar11 = 0x10;
            uVar16 = 9;
            break;
          case 6:
            uVar24 = *(uint *)(param_1 + 0x1a);
            uVar28 = (ulong)uVar24 + 0x10;
            lVar14 = param_1[0x17];
            ppuVar10 = (undefined **)(uVar28 - (param_1[0x18] - lVar14));
            if ((ulong)(param_1[0x18] - lVar14) <= uVar28 && ppuVar10 != (undefined **)0x0) {
              ppppppplVar7 = (long *******)(param_1 + 0x17);
              func_0x0001092bf294();
              lVar14 = param_1[0x17];
            }
            uVar18 = *(undefined8 *)((long)pppppplVar30 + 0x24);
            puVar31 = (undefined8 *)(lVar14 + (ulong)uVar24);
            puVar31[1] = *(undefined8 *)((long)pppppplVar30 + 0x2c);
            *puVar31 = uVar18;
            uVar11 = 0x10;
            uVar16 = 0x16;
            break;
          case 7:
            uVar24 = *(uint *)(param_1 + 0x1a);
            uVar28 = (ulong)uVar24 + 0x24;
            lVar14 = param_1[0x17];
            ppuVar10 = (undefined **)(uVar28 - (param_1[0x18] - lVar14));
            if ((ulong)(param_1[0x18] - lVar14) <= uVar28 && ppuVar10 != (undefined **)0x0) {
              ppppppplVar7 = (long *******)(param_1 + 0x17);
              func_0x0001092bf294();
              lVar14 = param_1[0x17];
            }
            puVar31 = (undefined8 *)(lVar14 + (ulong)uVar24);
            uVar40 = *(undefined8 *)((long)pppppplVar30 + 0x2c);
            uVar18 = *(undefined8 *)((long)pppppplVar30 + 0x24);
            uVar42 = *(undefined8 *)((long)pppppplVar30 + 0x3c);
            ppppppplVar9 = *(long ********)((long)pppppplVar30 + 0x34);
            *(undefined4 *)(puVar31 + 4) = *(undefined4 *)((long)pppppplVar30 + 0x44);
            puVar31[1] = uVar40;
            *puVar31 = uVar18;
            puVar31[3] = uVar42;
            puVar31[2] = ppppppplVar9;
            uVar11 = 0x24;
            uVar16 = 10;
            break;
          case 8:
            uVar24 = *(uint *)(param_1 + 0x1a);
            uVar28 = (ulong)uVar24 + 0x40;
            lVar6 = param_1[0x17];
            ppuVar10 = (undefined **)(uVar28 - (param_1[0x18] - lVar6));
            if ((ulong)(param_1[0x18] - lVar6) <= uVar28 && ppuVar10 != (undefined **)0x0) {
              ppppppplVar7 = (long *******)(param_1 + 0x17);
              func_0x0001092bf294();
              lVar6 = param_1[0x17];
            }
            puVar31 = (undefined8 *)(lVar6 + (ulong)uVar24);
            uVar40 = *(undefined8 *)((long)pppppplVar30 + 0x2c);
            uVar18 = *(undefined8 *)((long)pppppplVar30 + 0x24);
            uVar42 = *(undefined8 *)((long)pppppplVar30 + 0x3c);
            ppppppplVar9 = *(long ********)((long)pppppplVar30 + 0x34);
            lVar6 = *(long *)((long)pppppplVar30 + 0x44);
            uVar45 = *(undefined8 *)((long)pppppplVar30 + 0x5c);
            uVar44 = *(undefined8 *)((long)pppppplVar30 + 0x54);
            puVar31[5] = *(undefined8 *)((long)pppppplVar30 + 0x4c);
            puVar31[4] = lVar6;
            puVar31[7] = uVar45;
            puVar31[6] = uVar44;
            puVar31[1] = uVar40;
            *puVar31 = uVar18;
            puVar31[3] = uVar42;
            puVar31[2] = ppppppplVar9;
            uVar11 = 0x40;
            uVar16 = 0xb;
            break;
          case 9:
            uVar24 = *(uint *)(param_1 + 0x1a);
            uVar28 = (ulong)uVar24 + 4;
            lVar14 = param_1[0x17];
            ppuVar10 = (undefined **)(uVar28 - (param_1[0x18] - lVar14));
            if ((ulong)(param_1[0x18] - lVar14) <= uVar28 && ppuVar10 != (undefined **)0x0) {
              ppppppplVar7 = (long *******)(param_1 + 0x17);
              func_0x0001092bf294();
              lVar14 = param_1[0x17];
            }
            *(undefined4 *)(lVar14 + (ulong)uVar24) = *(undefined4 *)((long)pppppplVar30 + 0x24);
            uVar11 = 4;
            uVar16 = 6;
            break;
          case 10:
            uVar24 = *(uint *)(param_1 + 0x1a);
            uVar28 = (ulong)uVar24 + 8;
            lVar14 = param_1[0x17];
            ppuVar10 = (undefined **)(uVar28 - (param_1[0x18] - lVar14));
            if ((ulong)(param_1[0x18] - lVar14) <= uVar28 && ppuVar10 != (undefined **)0x0) {
              ppppppplVar7 = (long *******)(param_1 + 0x17);
              func_0x0001092bf294();
              lVar14 = param_1[0x17];
            }
            *(undefined8 *)(lVar14 + (ulong)uVar24) = *(undefined8 *)((long)pppppplVar30 + 0x24);
            uVar11 = 8;
            uVar16 = 0x1f;
            break;
          case 0xb:
            uVar24 = *(uint *)(param_1 + 0x1a);
            uVar28 = (ulong)uVar24 + 0xc;
            lVar14 = param_1[0x17];
            ppuVar10 = (undefined **)(uVar28 - (param_1[0x18] - lVar14));
            if ((ulong)(param_1[0x18] - lVar14) <= uVar28 && ppuVar10 != (undefined **)0x0) {
              ppppppplVar7 = (long *******)(param_1 + 0x17);
              func_0x0001092bf294();
              lVar14 = param_1[0x17];
            }
            puVar31 = (undefined8 *)(lVar14 + (ulong)uVar24);
            uVar18 = *(undefined8 *)((long)pppppplVar30 + 0x24);
            *(undefined4 *)(puVar31 + 1) = *(undefined4 *)((long)pppppplVar30 + 0x2c);
            *puVar31 = uVar18;
            uVar11 = 0xc;
            uVar16 = 0x22;
            break;
          case 0xc:
            uVar24 = *(uint *)(param_1 + 0x1a);
            uVar28 = (ulong)uVar24 + 0x10;
            lVar14 = param_1[0x17];
            ppuVar10 = (undefined **)(uVar28 - (param_1[0x18] - lVar14));
            if ((ulong)(param_1[0x18] - lVar14) <= uVar28 && ppuVar10 != (undefined **)0x0) {
              ppppppplVar7 = (long *******)(param_1 + 0x17);
              func_0x0001092bf294();
              lVar14 = param_1[0x17];
            }
            uVar18 = *(undefined8 *)((long)pppppplVar30 + 0x24);
            puVar31 = (undefined8 *)(lVar14 + (ulong)uVar24);
            puVar31[1] = *(undefined8 *)((long)pppppplVar30 + 0x2c);
            *puVar31 = uVar18;
            uVar11 = 0x10;
            uVar16 = 0x23;
            break;
          case 0xd:
            uVar24 = *(uint *)(param_1 + 0x1a);
            uVar28 = (ulong)uVar24 + 8;
            lVar14 = param_1[0x17];
            ppuVar10 = (undefined **)(uVar28 - (param_1[0x18] - lVar14));
            if ((ulong)(param_1[0x18] - lVar14) <= uVar28 && ppuVar10 != (undefined **)0x0) {
              ppppppplVar7 = (long *******)(param_1 + 0x17);
              func_0x0001092bf294();
              lVar14 = param_1[0x17];
            }
            *(undefined8 *)(lVar14 + (ulong)uVar24) = *(undefined8 *)((long)pppppplVar30 + 0x24);
            uVar11 = 8;
            uVar16 = 0x24;
            break;
          case 0xe:
            uVar24 = *(uint *)(param_1 + 0x1a);
            uVar28 = (ulong)uVar24 + 0xc;
            lVar14 = param_1[0x17];
            ppuVar10 = (undefined **)(uVar28 - (param_1[0x18] - lVar14));
            if ((ulong)(param_1[0x18] - lVar14) <= uVar28 && ppuVar10 != (undefined **)0x0) {
              ppppppplVar7 = (long *******)(param_1 + 0x17);
              func_0x0001092bf294();
              lVar14 = param_1[0x17];
            }
            puVar31 = (undefined8 *)(lVar14 + (ulong)uVar24);
            uVar18 = *(undefined8 *)((long)pppppplVar30 + 0x24);
            *(undefined4 *)(puVar31 + 1) = *(undefined4 *)((long)pppppplVar30 + 0x2c);
            *puVar31 = uVar18;
            uVar11 = 0xc;
            uVar16 = 0x25;
            break;
          case 0xf:
            uVar24 = *(uint *)(param_1 + 0x1a);
            uVar28 = (ulong)uVar24 + 0x10;
            lVar14 = param_1[0x17];
            ppuVar10 = (undefined **)(uVar28 - (param_1[0x18] - lVar14));
            if ((ulong)(param_1[0x18] - lVar14) <= uVar28 && ppuVar10 != (undefined **)0x0) {
              ppppppplVar7 = (long *******)(param_1 + 0x17);
              func_0x0001092bf294();
              lVar14 = param_1[0x17];
            }
            uVar18 = *(undefined8 *)((long)pppppplVar30 + 0x24);
            puVar31 = (undefined8 *)(lVar14 + (ulong)uVar24);
            puVar31[1] = *(undefined8 *)((long)pppppplVar30 + 0x2c);
            *puVar31 = uVar18;
            uVar11 = 0x10;
            uVar16 = 0x26;
            break;
          default:
            goto LAB_10a5e131c;
          }
          *(undefined2 *)(unaff_x21 + 1) = uVar16;
          *(uint *)((long)unaff_x21 + 0xc) = uVar24;
          *(undefined4 *)(unaff_x21 + 2) = uVar11;
          *(int *)(param_1 + 0x1a) = (int)uVar28;
          uVar13 = param_1[0x14] + 1;
          param_1[0x14] = uVar13;
        }
        puVar3 = (ulong *)puVar36[1];
        puVar37 = puVar36;
        if ((ulong *)puVar36[1] == (ulong *)0x0) {
          do {
            puVar36 = (ulong *)puVar37[2];
            bVar5 = (ulong *)*puVar36 != puVar37;
            puVar37 = puVar36;
          } while (bVar5);
        }
        else {
          do {
            puVar36 = puVar3;
            puVar3 = (ulong *)*puVar36;
          } while ((ulong *)*puVar36 != (ulong *)0x0);
        }
      } while (puVar36 != puVar34);
    }
    *(int *)((long)param_1 + 0xd4) = (int)uVar28;
    param_1[0x15] = uVar13;
    param_1[0x1b] = lStack_260;
    param_1[0x1c] = (long)puStack_258;
  }
  puStack_258 = ppuStack_268[10];
  if ((puStack_258 == (undefined *)0x0) || (lVar12 = *(long *)(puStack_258 + 0xbc8), lVar12 == 0)) {
    plVar29 = (long *)0x0;
    plStack_270 = (long *)0x0;
  }
  else {
    plVar29 = *(long **)(lVar12 + 0x28);
    plStack_270 = *(long **)(lVar12 + 0x30);
  }
  plVar35 = (long *)(lStack_260 + 0x298);
  if (*(long **)(lStack_260 + 0x290) == plVar35) {
    uVar17 = 0;
    uVar24 = 0;
  }
  else {
    uVar24 = 0;
    uVar17 = 0;
    plVar8 = *(long **)(lStack_260 + 0x290);
    do {
      plVar33 = (long *)plVar8[1];
      plVar23 = plVar8;
      if ((long *)plVar8[1] == (long *)0x0) {
        do {
          plVar22 = (long *)plVar23[2];
          bVar5 = (long *)*plVar22 != plVar23;
          plVar23 = plVar22;
        } while (bVar5);
      }
      else {
        do {
          plVar22 = plVar33;
          plVar33 = (long *)*plVar22;
        } while ((long *)*plVar22 != (long *)0x0);
      }
      uVar24 = uVar24 | *(byte *)(plVar8[8] + 0x124) ^ 1;
      uVar17 = uVar17 | *(byte *)(plVar8[8] + 0x124);
      plVar8 = plVar22;
    } while (plVar22 != plVar35);
  }
  uVar24 = uVar24 & plVar29 != (long *)0x0;
  uVar28 = (ulong)uVar24;
  uVar17 = uVar17 & plStack_270 != (long *)0x0;
  unaff_x21 = (long *****)(ulong)uVar17;
  uVar13 = (long)unaff_x21 + uVar28 + *(long *)(lStack_260 + 0x1f8);
  if (*(long *)(lStack_260 + 0x2b8) != 0) {
    uVar13 = uVar13 + 1;
  }
  pppppplVar30 = (long ******)(param_1 + 0x1d);
  ppppplVar19 = *pppppplVar30;
  ppppplVar25 = (long *****)param_1[0x1e];
  lVar12 = (long)ppppplVar25 - (long)ppppplVar19;
  bVar5 = uVar13 < (ulong)((lVar12 >> 3) * 0x4ec4ec4ec4ec4ec5);
  puVar34 = (ulong *)(uVar13 + (lVar12 >> 3) * -0x4ec4ec4ec4ec4ec5);
  if (bVar5 || puVar34 == (ulong *)0x0) {
    uStack_1d0 = (long ******)CONCAT44(uStack_1d0._4_4_,(undefined4)uStack_1d0);
    if (bVar5) {
      for (; ppppplVar25 != ppppplVar19 + uVar13 * 0xd; ppppplVar25 = ppppplVar25 + -0xd) {
      }
      param_1[0x1e] = (long)(ppppplVar19 + uVar13 * 0xd);
      uStack_1d0 = (long ******)CONCAT44(uStack_1d0._4_4_,(undefined4)uStack_1d0);
    }
  }
  else if ((ulong *)((param_1[0x1f] - (long)ppppplVar25 >> 3) * 0x4ec4ec4ec4ec4ec5) < puVar34) {
    if (0x276276276276276 < uVar13) {
LAB_10a5e1328:
      FUN_10a045450();
      func_0x00010a5e5b64(&ppppppplStack_1f0);
      ppppppplVar9 = ppppppplVar7;
      __Unwind_Resume();
      ppuVar20 = (undefined **)((long)ppppppplVar9[1] - (long)*ppppppplVar9 >> 1);
      if (ppuVar10 <= ppuVar20) {
        if (ppuVar10 < ppuVar20) {
          ppppppplVar9[1] = (long ******)((long)*ppppppplVar9 + (long)ppuVar10 * 2);
        }
        return ppppppplVar9;
      }
      uVar13 = (long)ppuVar10 - (long)ppuVar20;
      pcStack_278 = FUN_10a5e13b4;
      ppppppplVar26 = (long *******)ppppppplVar9[1];
      lStack_2c0 = lVar12;
      plStack_2b8 = plVar29;
      puStack_2b0 = puVar34;
      pppppplStack_2a8 = pppppplVar30;
      uStack_2a0 = uVar28;
      ppppplStack_298 = unaff_x21;
      ppppplStack_290 = ppppplVar25;
      ppppppplStack_288 = ppppppplVar7;
      puStack_280 = &stack0xfffffffffffffff0;
      if ((ulong)((long)ppppppplVar9[2] - (long)ppppppplVar26 >> 1) < uVar13) {
        ppppppplVar27 = (long *******)*ppppppplVar9;
        lVar6 = (long)ppppppplVar26 - (long)ppppppplVar27;
        uVar28 = uVar13 + (lVar6 >> 1);
        uVar21 = uVar13;
        if ((long)uVar28 < 0) {
          FUN_10a5e5168();
LAB_10a5e5164:
          func_0x000109ffded8();
          pcStack_2c8 = FUN_10a5e5168;
          ppppppplVar7 = (long *******)&DAT_10f62a4d8;
          ppuStack_2d0 = &puStack_280;
          FUN_109ffde64();
          pcStack_2d8 = FUN_10a5e517c;
          pppppplVar30 = ppppppplVar7[1];
          if ((ulong)(((long)ppppppplVar7[2] - (long)pppppplVar30 >> 3) * 0x51b3bea3677d46cf) <
              uVar21) {
            lVar12 = (long)pppppplVar30 - (long)*ppppppplVar7;
            uVar28 = uVar21 + (lVar12 >> 3) * 0x51b3bea3677d46cf;
            lStack_300 = lVar6;
            ppppppplStack_2f8 = ppppppplVar27;
            uStack_2f0 = uVar13;
            ppppppplStack_2e8 = ppppppplVar9;
            if (0xae4c415c9882b9 < uVar28) {
              puStack_2e0 = (undefined1 *)&ppuStack_2d0;
              FUN_10a04755c();
              func_0x00010a04784c(&ppppppplStack_328);
              __Unwind_Resume();
              _memcpy();
              ppppppplVar7[0x28] = (long ******)0x0;
              ppppppplVar7[0x29] = (long ******)0x0;
              ppppppplVar7[0x27] = (long ******)0x0;
              FUN_10a5e5548(ppppppplVar7 + 0x27,*(long *)(uVar21 + 0x138),*(long *)(uVar21 + 0x140),
                            *(long *)(uVar21 + 0x140) - *(long *)(uVar21 + 0x138) >> 1);
              ppppppplVar7[0x2a] = (long ******)0x0;
              ppppppplVar7[0x2b] = (long ******)0x0;
              ppppppplVar7[0x2c] = (long ******)0x0;
              FUN_10a5e5638(ppppppplVar7 + 0x2a,*(long *)(uVar21 + 0x150),*(long *)(uVar21 + 0x158),
                            (*(long *)(uVar21 + 0x158) - *(long *)(uVar21 + 0x150) >> 4) *
                            -0x5555555555555555);
              ppppppplVar7[0x2d] = *(long *******)(uVar21 + 0x168);
              ppppppplVar7[0x2e] = (long ******)0x0;
              ppppppplVar7[0x2f] = (long ******)0x0;
              ppppppplVar7[0x30] = (long ******)0x0;
              FUN_10a18edf0(ppppppplVar7 + 0x2e,*(long *)(uVar21 + 0x170),*(long *)(uVar21 + 0x178),
                            (*(long *)(uVar21 + 0x178) - *(long *)(uVar21 + 0x170) >> 3) *
                            -0x5555555555555555);
              ppppppplVar7[0x31] = (long ******)0x0;
              ppppppplVar7[0x32] = (long ******)0x0;
              ppppppplVar7[0x33] = (long ******)0x0;
              FUN_10a34e7c8(ppppppplVar7 + 0x31,*(long *)(uVar21 + 0x188),*(long *)(uVar21 + 400),
                            *(long *)(uVar21 + 400) - *(long *)(uVar21 + 0x188) >> 6);
              pppppplVar41 = *(long *******)(uVar21 + 0x1a8);
              pppppplVar30 = *(long *******)(uVar21 + 0x1a0);
              ppppppplVar7[0x36] = *(long *******)(uVar21 + 0x1b0);
              ppppppplVar7[0x35] = pppppplVar41;
              ppppppplVar7[0x34] = pppppplVar30;
              return ppppppplVar7;
            }
            lVar6 = (long)ppppppplVar7[2] - (long)*ppppppplVar7 >> 3;
            uVar13 = lVar6 * -0x5c9882b931057262;
            if (uVar13 < uVar28 || uVar13 - uVar28 == 0) {
              uVar13 = uVar28;
            }
            if (0x572620ae4c415b < (ulong)(lVar6 * 0x51b3bea3677d46cf)) {
              uVar13 = 0xae4c415c9882b9;
            }
            ppppppplStack_308 = ppppppplVar7;
            if (uVar13 == 0) {
              ppppppplVar9 = (long *******)0x0;
              puStack_2e0 = (undefined1 *)&ppuStack_2d0;
            }
            else {
              ppppppplVar9 = ppppppplVar7;
              puStack_2e0 = (undefined1 *)&ppuStack_2d0;
              FUN_10a047570();
            }
            pppppplStack_320 = (long ******)((long)ppppppplVar9 + lVar12);
            pppppplVar41 = pppppplStack_320 + uVar21 * 0x2f;
            pppppplVar30 = pppppplStack_320;
            do {
              pppppplVar30[0x27] = (long *****)0x0;
              pppppplVar30[0x26] = (long *****)0x0;
              pppppplVar30[0x29] = (long *****)0x0;
              pppppplVar30[0x28] = (long *****)0x0;
              pppppplVar30[0x23] = (long *****)0x0;
              pppppplVar30[0x22] = (long *****)0x0;
              pppppplVar30[0x25] = (long *****)0x0;
              pppppplVar30[0x24] = (long *****)0x0;
              pppppplVar30[0x1f] = (long *****)0x0;
              pppppplVar30[0x1e] = (long *****)0x0;
              pppppplVar30[0x21] = (long *****)0x0;
              pppppplVar30[0x20] = (long *****)0x0;
              pppppplVar30[0x1b] = (long *****)0x0;
              pppppplVar30[0x1a] = (long *****)0x0;
              pppppplVar30[0x1d] = (long *****)0x0;
              pppppplVar30[0x1c] = (long *****)0x0;
              pppppplVar30[0x17] = (long *****)0x0;
              pppppplVar30[0x16] = (long *****)0x0;
              pppppplVar30[0x19] = (long *****)0x0;
              pppppplVar30[0x18] = (long *****)0x0;
              pppppplVar30[0x13] = (long *****)0x0;
              pppppplVar30[0x12] = (long *****)0x0;
              pppppplVar30[0x15] = (long *****)0x0;
              pppppplVar30[0x14] = (long *****)0x0;
              pppppplVar30[0xf] = (long *****)0x0;
              pppppplVar30[0xe] = (long *****)0x0;
              pppppplVar30[0x11] = (long *****)0x0;
              pppppplVar30[0x10] = (long *****)0x0;
              pppppplVar30[0xb] = (long *****)0x0;
              pppppplVar30[10] = (long *****)0x0;
              pppppplVar30[0xd] = (long *****)0x0;
              pppppplVar30[0xc] = (long *****)0x0;
              pppppplVar30[7] = (long *****)0x0;
              pppppplVar30[6] = (long *****)0x0;
              pppppplVar30[9] = (long *****)0x0;
              pppppplVar30[8] = (long *****)0x0;
              pppppplVar30[3] = (long *****)0x0;
              pppppplVar30[2] = (long *****)0x0;
              pppppplVar30[5] = (long *****)0x0;
              pppppplVar30[4] = (long *****)0x0;
              pppppplVar30[1] = (long *****)0x0;
              *pppppplVar30 = (long *****)0x0;
              *(undefined1 *)(pppppplVar30 + 4) = 6;
              pppppplVar30[0x11] = (long *****)0x0;
              pppppplVar30[0x10] = (long *****)0x0;
              pppppplVar30[0x13] = (long *****)0x0;
              pppppplVar30[0x12] = (long *****)0x0;
              pppppplVar30[0x15] = (long *****)0x0;
              pppppplVar30[0x14] = (long *****)0x0;
              pppppplVar30[0x17] = (long *****)0x0;
              pppppplVar30[0x16] = (long *****)0x0;
              pppppplVar30[0x19] = (long *****)0x0;
              pppppplVar30[0x18] = (long *****)0x0;
              pppppplVar30[0x1b] = (long *****)0x0;
              pppppplVar30[0x1a] = (long *****)0x0;
              pppppplVar30[0x1c] = (long *****)0xffffffffffffffff;
              *(undefined4 *)(pppppplVar30 + 0x24) = 0x3f800000;
              pppppplVar30[0x1e] = (long *****)0x0;
              pppppplVar30[0x1d] = (long *****)0x0;
              *(undefined2 *)((long)pppppplVar30 + 0x1b) = 0x10f;
              *(undefined8 *)((long)pppppplVar30 + 0x2c) = 0;
              *(undefined8 *)((long)pppppplVar30 + 0x24) = 0;
              *(undefined8 *)((long)pppppplVar30 + 0x3c) = 0;
              *(undefined8 *)((long)pppppplVar30 + 0x34) = 0;
              *(undefined8 *)((long)pppppplVar30 + 0x4c) = 0;
              *(undefined8 *)((long)pppppplVar30 + 0x44) = 0;
              *(undefined2 *)((long)pppppplVar30 + 0x54) = 0;
              *(undefined8 *)((long)pppppplVar30 + 0x5c) = 0xff000000ff;
              *(undefined1 *)((long)pppppplVar30 + 0x65) = 7;
              *(undefined4 *)(pppppplVar30 + 0xd) = 1;
              *(undefined4 *)(pppppplVar30 + 0xf) = 0x3f800000;
              pppppplVar30[0x23] = (long *****)0x0;
              pppppplVar30[0x20] = (long *****)0x0;
              pppppplVar30[0x1f] = (long *****)0x0;
              pppppplVar30[0x22] = (long *****)0x0;
              pppppplVar30[0x21] = (long *****)0x0;
              pppppplVar30[0x26] = (long *****)0x0;
              pppppplVar30[0x25] = (long *****)0x0;
              pppppplVar30[0x28] = (long *****)0x0;
              pppppplVar30[0x27] = (long *****)0x0;
              *(undefined4 *)(pppppplVar30 + 0x29) = 0x3f800000;
              pppppplVar30[0x2a] = (long *****)0x0;
              pppppplVar30[0x2b] = (long *****)0x0;
              pppppplVar30[0x2c] = (long *****)0x0;
              pppppplVar30[0x2d] = (long *****)0xffffffffffffffff;
              pppppplVar30[0x2e] = (long *****)0xffffffffffffffff;
              pppppplVar30 = pppppplVar30 + 0x2f;
            } while (pppppplVar30 != pppppplVar41);
            pppppplVar30 = (long ******)
                           ((long)pppppplStack_320 + ((long)*ppppppplVar7 - (long)ppppppplVar7[1]));
            ppppppplStack_328 = ppppppplVar9;
            pppppplStack_318 = pppppplVar41;
            ppppppplStack_310 = ppppppplVar9 + uVar13 * 0x2f;
            FUN_10a0475b8(ppppppplVar7,*ppppppplVar7,ppppppplVar7[1],pppppplVar30);
            ppppppplStack_328 = (long *******)*ppppppplVar7;
            *ppppppplVar7 = pppppplVar30;
            ppppppplVar7[1] = pppppplVar41;
            ppppppplStack_310 = (long *******)ppppppplVar7[2];
            ppppppplVar7[2] = (long ******)(ppppppplVar9 + uVar13 * 0x2f);
            ppppppplVar7 = (long *******)&ppppppplStack_328;
            pppppplStack_320 = (long ******)ppppppplStack_328;
            pppppplStack_318 = (long ******)ppppppplStack_328;
            func_0x00010a04784c(ppppppplVar7);
          }
          else {
            pppppplVar41 = pppppplVar30;
            if (uVar21 != 0) {
              pppppplVar41 = pppppplVar30 + uVar21 * 0x2f;
              do {
                pppppplVar30[0x27] = (long *****)0x0;
                pppppplVar30[0x26] = (long *****)0x0;
                pppppplVar30[0x29] = (long *****)0x0;
                pppppplVar30[0x28] = (long *****)0x0;
                pppppplVar30[0x23] = (long *****)0x0;
                pppppplVar30[0x22] = (long *****)0x0;
                pppppplVar30[0x25] = (long *****)0x0;
                pppppplVar30[0x24] = (long *****)0x0;
                pppppplVar30[0x1f] = (long *****)0x0;
                pppppplVar30[0x1e] = (long *****)0x0;
                pppppplVar30[0x21] = (long *****)0x0;
                pppppplVar30[0x20] = (long *****)0x0;
                pppppplVar30[0x1b] = (long *****)0x0;
                pppppplVar30[0x1a] = (long *****)0x0;
                pppppplVar30[0x1d] = (long *****)0x0;
                pppppplVar30[0x1c] = (long *****)0x0;
                pppppplVar30[0x17] = (long *****)0x0;
                pppppplVar30[0x16] = (long *****)0x0;
                pppppplVar30[0x19] = (long *****)0x0;
                pppppplVar30[0x18] = (long *****)0x0;
                pppppplVar30[0x13] = (long *****)0x0;
                pppppplVar30[0x12] = (long *****)0x0;
                pppppplVar30[0x15] = (long *****)0x0;
                pppppplVar30[0x14] = (long *****)0x0;
                pppppplVar30[0xf] = (long *****)0x0;
                pppppplVar30[0xe] = (long *****)0x0;
                pppppplVar30[0x11] = (long *****)0x0;
                pppppplVar30[0x10] = (long *****)0x0;
                pppppplVar30[0xb] = (long *****)0x0;
                pppppplVar30[10] = (long *****)0x0;
                pppppplVar30[0xd] = (long *****)0x0;
                pppppplVar30[0xc] = (long *****)0x0;
                pppppplVar30[7] = (long *****)0x0;
                pppppplVar30[6] = (long *****)0x0;
                pppppplVar30[9] = (long *****)0x0;
                pppppplVar30[8] = (long *****)0x0;
                pppppplVar30[3] = (long *****)0x0;
                pppppplVar30[2] = (long *****)0x0;
                pppppplVar30[5] = (long *****)0x0;
                pppppplVar30[4] = (long *****)0x0;
                pppppplVar30[1] = (long *****)0x0;
                *pppppplVar30 = (long *****)0x0;
                *(undefined1 *)(pppppplVar30 + 4) = 6;
                pppppplVar30[0x11] = (long *****)0x0;
                pppppplVar30[0x10] = (long *****)0x0;
                pppppplVar30[0x13] = (long *****)0x0;
                pppppplVar30[0x12] = (long *****)0x0;
                pppppplVar30[0x15] = (long *****)0x0;
                pppppplVar30[0x14] = (long *****)0x0;
                pppppplVar30[0x17] = (long *****)0x0;
                pppppplVar30[0x16] = (long *****)0x0;
                pppppplVar30[0x19] = (long *****)0x0;
                pppppplVar30[0x18] = (long *****)0x0;
                pppppplVar30[0x1b] = (long *****)0x0;
                pppppplVar30[0x1a] = (long *****)0x0;
                pppppplVar30[0x1c] = (long *****)0xffffffffffffffff;
                *(undefined4 *)(pppppplVar30 + 0x24) = 0x3f800000;
                pppppplVar30[0x1e] = (long *****)0x0;
                pppppplVar30[0x1d] = (long *****)0x0;
                *(undefined2 *)((long)pppppplVar30 + 0x1b) = 0x10f;
                *(undefined8 *)((long)pppppplVar30 + 0x2c) = 0;
                *(undefined8 *)((long)pppppplVar30 + 0x24) = 0;
                *(undefined8 *)((long)pppppplVar30 + 0x3c) = 0;
                *(undefined8 *)((long)pppppplVar30 + 0x34) = 0;
                *(undefined8 *)((long)pppppplVar30 + 0x4c) = 0;
                *(undefined8 *)((long)pppppplVar30 + 0x44) = 0;
                *(undefined2 *)((long)pppppplVar30 + 0x54) = 0;
                *(undefined8 *)((long)pppppplVar30 + 0x5c) = 0xff000000ff;
                *(undefined1 *)((long)pppppplVar30 + 0x65) = 7;
                *(undefined4 *)(pppppplVar30 + 0xd) = 1;
                *(undefined4 *)(pppppplVar30 + 0xf) = 0x3f800000;
                pppppplVar30[0x23] = (long *****)0x0;
                pppppplVar30[0x20] = (long *****)0x0;
                pppppplVar30[0x1f] = (long *****)0x0;
                pppppplVar30[0x22] = (long *****)0x0;
                pppppplVar30[0x21] = (long *****)0x0;
                pppppplVar30[0x26] = (long *****)0x0;
                pppppplVar30[0x25] = (long *****)0x0;
                pppppplVar30[0x28] = (long *****)0x0;
                pppppplVar30[0x27] = (long *****)0x0;
                *(undefined4 *)(pppppplVar30 + 0x29) = 0x3f800000;
                pppppplVar30[0x2a] = (long *****)0x0;
                pppppplVar30[0x2b] = (long *****)0x0;
                pppppplVar30[0x2c] = (long *****)0x0;
                pppppplVar30[0x2d] = (long *****)0xffffffffffffffff;
                pppppplVar30[0x2e] = (long *****)0xffffffffffffffff;
                pppppplVar30 = pppppplVar30 + 0x2f;
              } while (pppppplVar30 != pppppplVar41);
            }
            ppppppplVar7[1] = pppppplVar41;
          }
          return ppppppplVar7;
        }
        uVar15 = (long)ppppppplVar9[2] - (long)ppppppplVar27;
        uVar1 = uVar15;
        if (uVar15 <= uVar28) {
          uVar1 = uVar28;
        }
        if (0x7ffffffffffffffd < uVar15) {
          uVar1 = 0x7fffffffffffffff;
        }
        if (uVar1 == 0) {
          lVar12 = 0;
        }
        else {
          if ((long)uVar1 < 0) goto LAB_10a5e5164;
          lVar12 = uVar1 << 1;
          __Znwm();
        }
        lVar14 = lVar12 + lVar6;
        _bzero(lVar14,uVar13 * 2);
        ppppppplVar26 = (long *******)(lVar14 + (lVar6 >> 1) * -2);
        ppppppplVar7 = ppppppplVar26;
        _memcpy(ppppppplVar26,ppppppplVar27,lVar6);
        *ppppppplVar9 = (long ******)ppppppplVar26;
        ppppppplVar9[1] = (long ******)(lVar14 + uVar13 * 2);
        ppppppplVar9[2] = (long ******)(lVar12 + uVar1 * 2);
        if (ppppppplVar27 != (long *******)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(ppppppplVar27);
          return ppppppplVar27;
        }
      }
      else {
        ppppppplVar7 = ppppppplVar9;
        if (uVar13 != 0) {
          ppppppplVar7 = ppppppplVar26;
          _bzero(ppppppplVar26,uVar13 * 2);
          ppppppplVar26 = (long *******)((long)ppppppplVar26 + uVar13 * 2);
        }
        ppppppplVar9[1] = (long ******)ppppppplVar26;
      }
      return ppppppplVar7;
    }
    lVar14 = param_1[0x1f] - (long)ppppplVar19 >> 3;
    uVar28 = lVar14 * -0x6276276276276276;
    if (uVar28 < uVar13 || uVar28 - uVar13 == 0) {
      uVar28 = uVar13;
    }
    if (0x13b13b13b13b13a < (ulong)(lVar14 * 0x4ec4ec4ec4ec4ec5)) {
      uVar28 = 0x276276276276276;
    }
    pppppplVar41 = pppppplVar30;
    uStack_1d0 = pppppplVar30;
    FUN_10a045464();
    ppppppplStack_1e8 = (long *******)((long)pppppplVar41 + lVar12);
    puVar32 = ppppppplStack_1e8 + (long)puVar34 * 0xd;
    puVar31 = ppppppplStack_1e8;
    do {
      puVar31[5] = 0;
      puVar31[4] = 0;
      puVar31[7] = 0;
      puVar31[6] = 0;
      puVar31[9] = 0;
      puVar31[8] = 0;
      puVar31[0xb] = 0;
      puVar31[10] = 0;
      puVar31[0xc] = 0;
      puVar31[1] = 0;
      *puVar31 = 0;
      puVar31[3] = 0;
      puVar31[2] = 0;
      puVar31[3] = 0x28cd94bfde;
      puVar31[4] = 0xffffffffffffffff;
      puVar31[5] = 0xffffffffffffffff;
      *(undefined2 *)(puVar31 + 7) = 0xd;
      *(undefined4 *)(puVar31 + 8) = 1;
      *(undefined8 *)((long)puVar31 + 0x44) = 0;
      *(undefined8 *)((long)puVar31 + 0x4c) = 0;
      *(undefined8 *)((long)puVar31 + 0x54) = 0;
      *(undefined8 *)((long)puVar31 + 0x5a) = 0;
      *(undefined2 *)((long)puVar31 + 0x62) = 1000;
      puVar31 = puVar31 + 0xd;
    } while (puVar31 != puVar32);
    lVar12 = (long)ppppppplStack_1e8 + (param_1[0x1d] - param_1[0x1e]);
    ppppppplStack_1f0 = (long *******)pppppplVar41;
    ppppppplStack_1e0 = (long *******)puVar32;
    pppppplStack_1d8 = pppppplVar41 + uVar28 * 0xd;
    func_0x00010a5e5a8c(pppppplVar30,param_1[0x1d],param_1[0x1e],lVar12);
    ppppppplStack_1f0 = (long *******)param_1[0x1d];
    param_1[0x1d] = lVar12;
    param_1[0x1e] = (long)puVar32;
    pppppplStack_1d8 = (long ******)param_1[0x1f];
    param_1[0x1f] = (long)(pppppplVar41 + uVar28 * 0xd);
    ppppppplStack_1e8 = ppppppplStack_1f0;
    ppppppplStack_1e0 = ppppppplStack_1f0;
    func_0x00010a5e5b64(&ppppppplStack_1f0);
  }
  else {
    ppppplVar19 = ppppplVar25 + (long)puVar34 * 0xd;
    do {
      ppppplVar25[5] = (long ****)0x0;
      ppppplVar25[4] = (long ****)0x0;
      ppppplVar25[7] = (long ****)0x0;
      ppppplVar25[6] = (long ****)0x0;
      ppppplVar25[9] = (long ****)0x0;
      ppppplVar25[8] = (long ****)0x0;
      ppppplVar25[0xb] = (long ****)0x0;
      ppppplVar25[10] = (long ****)0x0;
      ppppplVar25[0xc] = (long ****)0x0;
      ppppplVar25[1] = (long ****)0x0;
      *ppppplVar25 = (long ****)0x0;
      ppppplVar25[3] = (long ****)0x0;
      ppppplVar25[2] = (long ****)0x0;
      ppppplVar25[3] = (long ****)0x28cd94bfde;
      ppppplVar25[4] = (long ****)0xffffffffffffffff;
      ppppplVar25[5] = (long ****)0xffffffffffffffff;
      *(undefined2 *)(ppppplVar25 + 7) = 0xd;
      *(undefined4 *)(ppppplVar25 + 8) = 1;
      *(undefined8 *)((long)ppppplVar25 + 0x44) = 0;
      *(undefined8 *)((long)ppppplVar25 + 0x4c) = 0;
      *(undefined8 *)((long)ppppplVar25 + 0x54) = 0;
      *(undefined8 *)((long)ppppplVar25 + 0x5a) = 0;
      *(undefined2 *)((long)ppppplVar25 + 0x62) = 1000;
      ppppplVar25 = ppppplVar25 + 0xd;
    } while (ppppplVar25 != ppppplVar19);
    param_1[0x1e] = (long)ppppplVar19;
    uStack_1d0 = (long ******)CONCAT44(uStack_1d0._4_4_,(undefined4)uStack_1d0);
  }
  lVar12 = lStack_260;
  ppppplVar25 = *pppppplVar30;
  plVar33 = *(long **)(lStack_260 + 0x1e8);
  plVar8 = (long *)(lStack_260 + 0x1f0);
  while (plVar33 != plVar8) {
    FUN_10a5e1710(ppppplVar25,plVar33 + 4,plVar33[8] + 8);
    plVar23 = (long *)plVar33[1];
    plVar22 = plVar33;
    if ((long *)plVar33[1] == (long *)0x0) {
      do {
        plVar33 = (long *)plVar22[2];
        bVar5 = (long *)*plVar33 != plVar22;
        plVar22 = plVar33;
      } while (bVar5);
    }
    else {
      do {
        plVar33 = plVar23;
        plVar23 = (long *)*plVar33;
      } while ((long *)*plVar33 != (long *)0x0);
    }
    ppppplVar25 = ppppplVar25 + 0xd;
  }
  if (*(long *)(lVar12 + 0x2a0) != 0) {
    if (uVar24 != 0) {
      plVar8 = plVar29 + 1;
      (**(code **)(*plVar29 + 0x30))(plVar29);
      FUN_10a5e1710(ppppplVar25,plVar29,plVar8);
      ppppplVar25 = ppppplVar25 + 0xd;
    }
    if (uVar17 != 0) {
      plVar8 = plStack_270 + 1;
      plVar29 = plStack_270;
      (**(code **)(*plStack_270 + 0x30))();
      FUN_10a5e1710(ppppplVar25,plVar29,plVar8);
      ppppplVar25 = ppppplVar25 + 0xd;
    }
    plVar29 = *(long **)(lVar12 + 0x290);
    if (plVar29 != plVar35) {
      do {
        lVar12 = plVar29[8];
        ppppppplVar9 = *(long ********)(lVar12 + 0x128);
        ppppppplStack_248 =
             (long *******)CONCAT44(ppppppplStack_248._4_4_,*(undefined4 *)(lVar12 + 0x130));
        ppppppplStack_250 = ppppppplVar9;
        if (*(char *)(lVar12 + 0x124) == '\x01') {
          uVar28 = plVar29[5];
          if (-1 < (char)*(byte *)((long)plVar29 + 0x37)) {
            uVar28 = (ulong)*(byte *)((long)plVar29 + 0x37);
          }
          FUN_10a003c90(&ppppppplStack_230,uVar28 + 0x12,&plStack_200);
          ppppppplVar7 = ppppppplStack_230;
          if (-1 < (long)ppppppplStack_220) {
            ppppppplVar7 = (long *******)&ppppppplStack_230;
          }
          if (uVar28 != 0) {
            plVar8 = (long *)plVar29[4];
            if (-1 < *(char *)((long)plVar29 + 0x37)) {
              plVar8 = plVar29 + 4;
            }
            _memmove(ppppppplVar7,plVar8,uVar28);
          }
          puVar31 = (undefined8 *)((long)ppppppplVar7 + uVar28);
          puVar31[1] = 0x6144706d6152726f;
          *puVar31 = 0x6c6f43616267725f;
          *(undefined2 *)(puVar31 + 2) = 0x6174;
          ppppppplVar7 = ppppppplStack_220;
          *(undefined1 *)((long)puVar31 + 0x12) = 0;
          ppppppplStack_1e8 = ppppppplStack_228;
          ppppppplStack_1f0 = ppppppplStack_230;
          ppppppplStack_230 = (long *******)0x0;
          ppppppplStack_228 = (long *******)0x0;
          ppppppplStack_220 = (long *******)0x0;
          ppppppplStack_1e0 = ppppppplVar7;
          pppppplStack_1d8 = (long ******)0x0;
          func_0x000107c2b080(&ppppppplStack_1f0);
          if ((long)ppppppplStack_220 < 0) {
            __ZdlPv(ppppppplStack_230);
          }
          ppppppplStack_230 = ppppppplStack_250;
          ppppppplStack_228 = (long *******)((ulong)ppppppplStack_248 & 0xffffffff);
          FUN_10a015dcc(param_1,&ppppppplStack_1f0,&ppppppplStack_230);
        }
        else {
          uVar28 = plVar29[5];
          if (-1 < (char)*(byte *)((long)plVar29 + 0x37)) {
            uVar28 = (ulong)*(byte *)((long)plVar29 + 0x37);
          }
          FUN_10a003c90(&ppppppplStack_230,uVar28 + 10,&plStack_200);
          ppppppplVar7 = ppppppplStack_230;
          if (-1 < (long)ppppppplStack_220) {
            ppppppplVar7 = (long *******)&ppppppplStack_230;
          }
          if (uVar28 != 0) {
            plVar8 = (long *)plVar29[4];
            if (-1 < *(char *)((long)plVar29 + 0x37)) {
              plVar8 = plVar29 + 4;
            }
            _memmove(ppppppplVar7,plVar8,uVar28);
          }
          puVar31 = (undefined8 *)((long)ppppppplVar7 + uVar28);
          *puVar31 = 0x614465767275635f;
          *(undefined2 *)(puVar31 + 1) = 0x6174;
          *(undefined1 *)((long)puVar31 + 10) = 0;
          ppppppplStack_1e0 = ppppppplStack_220;
          ppppppplStack_1e8 = ppppppplStack_228;
          ppppppplStack_1f0 = ppppppplStack_230;
          ppppppplStack_230 = (long *******)0x0;
          ppppppplStack_228 = (long *******)0x0;
          ppppppplStack_220 = (long *******)0x0;
          pppppplStack_1d8 = (long ******)0x0;
          func_0x000107c2b080(&ppppppplStack_1f0);
          if ((long)ppppppplStack_220 < 0) {
            __ZdlPv(ppppppplStack_230);
          }
          func_0x00010a01f3c4(param_1,&ppppppplStack_1f0,&ppppppplStack_250);
        }
        if ((long)ppppppplStack_1e0 < 0) {
          __ZdlPv(ppppppplStack_1f0);
        }
        plVar8 = (long *)plVar29[1];
        plVar33 = plVar29;
        if ((long *)plVar29[1] == (long *)0x0) {
          do {
            plVar29 = (long *)plVar33[2];
            bVar5 = (long *)*plVar29 != plVar33;
            plVar33 = plVar29;
          } while (bVar5);
        }
        else {
          do {
            plVar29 = plVar8;
            plVar8 = (long *)*plVar29;
          } while ((long *)*plVar29 != (long *)0x0);
        }
        lVar12 = lStack_260;
      } while (plVar29 != plVar35);
    }
  }
  if (*(long *)(lVar12 + 0x2b8) != 0) {
    plVar35 = *(long **)(lStack_260 + 0x2a8);
    plVar29 = (long *)(lStack_260 + 0x2b0);
    while (plVar35 != plVar29) {
      FUN_10a32eaa8(&plStack_200,plVar35[8],puStack_258);
      if (plStack_200 != (long *)0x0) {
        plVar8 = plStack_200;
        (**(code **)(*plStack_200 + 0x30))();
        FUN_10a5e1710(ppppplVar25,plVar8,plStack_200 + 1);
      }
      uVar28 = plVar35[5];
      if (-1 < (char)*(byte *)((long)plVar35 + 0x37)) {
        uVar28 = (ulong)*(byte *)((long)plVar35 + 0x37);
      }
      FUN_10a003c90(&ppppppplStack_230,uVar28 + 10,&ppppppplStack_250);
      ppppppplVar7 = ppppppplStack_230;
      if (-1 < (long)ppppppplStack_220) {
        ppppppplVar7 = (long *******)&ppppppplStack_230;
      }
      if (uVar28 != 0) {
        plVar8 = (long *)plVar35[4];
        if (-1 < *(char *)((long)plVar35 + 0x37)) {
          plVar8 = plVar35 + 4;
        }
        _memmove(ppppppplVar7,plVar8,uVar28);
      }
      puVar31 = (undefined8 *)((long)ppppppplVar7 + uVar28);
      *puVar31 = 0x61446c65786f765f;
      ppppppplVar7 = ppppppplStack_230;
      *(undefined2 *)(puVar31 + 1) = 0x6174;
      *(undefined1 *)((long)puVar31 + 10) = 0;
      ppppppplStack_1e0 = ppppppplStack_220;
      ppppppplStack_1e8 = ppppppplStack_228;
      ppppppplStack_1f0 = ppppppplStack_230;
      ppppppplStack_230 = (long *******)0x0;
      ppppppplStack_228 = (long *******)0x0;
      ppppppplStack_220 = (long *******)0x0;
      pppppplStack_1d8 = (long ******)0x0;
      func_0x000107c2b080(&ppppppplStack_1f0);
      uVar11 = SUB84(ppppppplVar7,0);
      if ((long)ppppppplStack_220 < 0) {
        __ZdlPv(ppppppplStack_230);
      }
      if (*(long *)(plVar35[8] + 0xf0) == 0) {
        lVar6 = 0;
        ppppppplVar9 = (long *******)0x0;
        uVar11 = 0;
      }
      else {
        FUN_10ab70d08();
      }
      uStack_208 = SUB84(ppppppplVar9,0);
      uStack_204 = (undefined4)lVar6;
      uStack_20c = uVar11;
      func_0x00010a01f3c4(param_1,&ppppppplStack_1f0,&uStack_20c);
      uVar28 = plVar35[5];
      if (-1 < (char)*(byte *)((long)plVar35 + 0x37)) {
        uVar28 = (ulong)*(byte *)((long)plVar35 + 0x37);
      }
      FUN_10a003c90(&ppppppplStack_250,uVar28 + 0xb,auStack_71);
      ppppppplVar7 = ppppppplStack_250;
      if (-1 < (long)ppppppplStack_240) {
        ppppppplVar7 = (long *******)&ppppppplStack_250;
      }
      if (uVar28 != 0) {
        plVar8 = (long *)plVar35[4];
        if (-1 < *(char *)((long)plVar35 + 0x37)) {
          plVar8 = plVar35 + 4;
        }
        _memmove(ppppppplVar7,plVar8,uVar28);
      }
      puVar31 = (undefined8 *)((long)ppppppplVar7 + uVar28);
      *puVar31 = 0x61446c65786f765f;
      *(undefined4 *)((long)puVar31 + 7) = 0x31617461;
      *(undefined1 *)((long)puVar31 + 0xb) = 0;
      ppppppplStack_220 = ppppppplStack_240;
      ppppppplStack_228 = ppppppplStack_248;
      ppppppplStack_230 = ppppppplStack_250;
      ppppppplStack_250 = (long *******)0x0;
      ppppppplStack_248 = (long *******)0x0;
      ppppppplStack_240 = (long *******)0x0;
      uStack_218 = 0;
      func_0x000107c2b080(&ppppppplStack_230);
      if ((long)ppppppplStack_240 < 0) {
        __ZdlPv(ppppppplStack_250);
      }
      lVar12 = *(long *)(plVar35[8] + 0xf0);
      if (lVar12 == 0) {
        ppppppplStack_250 = (long *******)0x0;
        ppppppplStack_248 = (long *******)0x0;
      }
      else {
        ppppppplStack_248 = *(long ********)(lVar12 + 0x104);
        ppppppplStack_250 = *(long ********)(lVar12 + 0xfc);
      }
      FUN_10a015dcc(param_1,&ppppppplStack_230,&ppppppplStack_250);
      if ((long)ppppppplStack_220 < 0) {
        __ZdlPv(ppppppplStack_230);
      }
      if ((long)ppppppplStack_1e0 < 0) {
        __ZdlPv(ppppppplStack_1f0);
      }
      plVar8 = plStack_1f8;
      if (plStack_1f8 != (long *)0x0) {
        plVar33 = plStack_1f8 + 1;
        do {
          lVar12 = *plVar33;
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar33,0x10);
          if (bVar5) {
            *plVar33 = lVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      plVar8 = (long *)plVar35[1];
      plVar33 = plVar35;
      if ((long *)plVar35[1] == (long *)0x0) {
        do {
          plVar35 = (long *)plVar33[2];
          bVar5 = (long *)*plVar35 != plVar33;
          plVar33 = plVar35;
        } while (bVar5);
      }
      else {
        do {
          plVar35 = plVar8;
          plVar8 = (long *)*plVar35;
        } while ((long *)*plVar35 != (long *)0x0);
      }
    }
  }
  lVar6 = lStack_260;
  param_1[0x2b] = lStack_260 + 0x200;
  ppppppplVar7 = *(long ********)(lStack_260 + 0x188);
  param_1[0x2c] = (long)ppppppplVar7;
  if (ppppppplVar7 != (long *******)0x0) {
    FUN_10a044920(ppppppplVar7,1);
  }
  puVar38 = ppuStack_268[8];
  param_1[0x2e] = (long)ppuStack_268[9];
  param_1[0x2d] = (long)puVar38;
  for (plVar29 = *(long **)(lVar6 + 0x2d0); plVar29 != (long *)0x0; plVar29 = (long *)*plVar29) {
    if (*(char *)((long)plVar29 + 0x47) < '\0') {
      func_0x000107c3192c(&ppppppplStack_1f0,plVar29[6],plVar29[7]);
    }
    else {
      ppppppplStack_1e8 = (long *******)plVar29[7];
      ppppppplStack_1f0 = (long *******)plVar29[6];
      ppppppplStack_1e0 = (long *******)plVar29[8];
    }
    pppppplStack_1d8 = (long ******)plVar29[9];
    uStack_1c8 = (undefined4)plVar29[0xb];
    uStack_1c4 = (undefined4)((ulong)plVar29[0xb] >> 0x20);
    uStack_1d0._0_4_ = (undefined4)plVar29[10];
    uStack_1d0._4_4_ = (undefined4)((ulong)plVar29[10] >> 0x20);
    if (plVar29[0xb] != 0) {
      plVar35 = (long *)(plVar29[0xb] + 8);
      do {
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar35,0x10);
        if (bVar5) {
          *plVar35 = *plVar35 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_1c0 = (undefined4)plVar29[0xc];
    uStack_1bc = (undefined4)((ulong)plVar29[0xc] >> 0x20);
    ppppppplVar7 = (long *******)(param_1 + 0x25);
    FUN_10a175674(ppppppplVar7,plVar29 + 2,&ppppppplStack_1f0);
    ppppppplVar9 = (long *******)CONCAT44(uStack_1c4,uStack_1c8);
    if (ppppppplVar9 != (long *******)0x0) {
      ppppppplVar26 = ppppppplVar9 + 1;
      do {
        pppppplVar30 = *ppppppplVar26;
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppppppplVar26,0x10);
        if (bVar5) {
          *ppppppplVar26 = (long ******)((long)pppppplVar30 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (pppppplVar30 == (long ******)0x0) {
        (*(code *)(*ppppppplVar9)[2])(ppppppplVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar9);
        ppppppplVar7 = ppppppplVar9;
      }
    }
    if ((long)ppppppplStack_1e0 < 0) {
      ppppppplVar7 = ppppppplStack_1f0;
      __ZdlPv(ppppppplStack_1f0);
    }
  }
  return ppppppplVar7;
}



/* Entry: 10a5e13b4; end: 10a5e13e3;  */

long *** FUN_10a5e13b4(long ***param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long ***ppplVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long ***ppplVar8;
  long ***ppplVar9;
  long lVar10;
  long **pplVar11;
  long **pplVar12;
  long **pplStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long **pplStack_a0;
  long **pplStack_98;
  long lStack_90;
  long **pplStack_88;
  ulong uStack_80;
  long **pplStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  uVar6 = (long)param_1[1] - (long)*param_1 >> 1;
  if (param_2 <= uVar6) {
    if (param_2 < uVar6) {
      param_1[1] = (long **)((long)*param_1 + param_2 * 2);
    }
    return param_1;
  }
  param_2 = param_2 - uVar6;
  ppplVar8 = (long ***)param_1[1];
  if ((ulong)((long)param_1[2] - (long)ppplVar8 >> 1) < param_2) {
    ppplVar9 = (long ***)*param_1;
    lVar10 = (long)ppplVar8 - (long)ppplVar9;
    uVar6 = param_2 + (lVar10 >> 1);
    uVar4 = param_2;
    if ((long)uVar6 < 0) {
      FUN_10a5e5168();
LAB_10a5e5164:
      func_0x000109ffded8();
      pcStack_58 = FUN_10a5e5168;
      ppplVar8 = (long ***)&DAT_10f62a4d8;
      puStack_60 = &stack0xfffffffffffffff0;
      FUN_109ffde64();
      pcStack_68 = FUN_10a5e517c;
      pplVar11 = ppplVar8[1];
      if ((ulong)(((long)ppplVar8[2] - (long)pplVar11 >> 3) * 0x51b3bea3677d46cf) < uVar4) {
        lVar2 = (long)pplVar11 - (long)*ppplVar8;
        uVar6 = uVar4 + (lVar2 >> 3) * 0x51b3bea3677d46cf;
        lStack_90 = lVar10;
        pplStack_88 = (long **)ppplVar9;
        uStack_80 = param_2;
        pplStack_78 = (long **)param_1;
        if (0xae4c415c9882b9 < uVar6) {
          puStack_70 = (undefined1 *)&puStack_60;
          FUN_10a04755c();
          func_0x00010a04784c(&pplStack_b8);
          __Unwind_Resume();
          _memcpy();
          ppplVar8[0x28] = (long **)0x0;
          ppplVar8[0x29] = (long **)0x0;
          ppplVar8[0x27] = (long **)0x0;
          FUN_10a5e5548(ppplVar8 + 0x27,*(long *)(uVar4 + 0x138),*(long *)(uVar4 + 0x140),
                        *(long *)(uVar4 + 0x140) - *(long *)(uVar4 + 0x138) >> 1);
          ppplVar8[0x2a] = (long **)0x0;
          ppplVar8[0x2b] = (long **)0x0;
          ppplVar8[0x2c] = (long **)0x0;
          FUN_10a5e5638(ppplVar8 + 0x2a,*(long *)(uVar4 + 0x150),*(long *)(uVar4 + 0x158),
                        (*(long *)(uVar4 + 0x158) - *(long *)(uVar4 + 0x150) >> 4) *
                        -0x5555555555555555);
          ppplVar8[0x2d] = *(long ***)(uVar4 + 0x168);
          ppplVar8[0x2e] = (long **)0x0;
          ppplVar8[0x2f] = (long **)0x0;
          ppplVar8[0x30] = (long **)0x0;
          FUN_10a18edf0(ppplVar8 + 0x2e,*(long *)(uVar4 + 0x170),*(long *)(uVar4 + 0x178),
                        (*(long *)(uVar4 + 0x178) - *(long *)(uVar4 + 0x170) >> 3) *
                        -0x5555555555555555);
          ppplVar8[0x31] = (long **)0x0;
          ppplVar8[0x32] = (long **)0x0;
          ppplVar8[0x33] = (long **)0x0;
          FUN_10a34e7c8(ppplVar8 + 0x31,*(long *)(uVar4 + 0x188),*(long *)(uVar4 + 400),
                        *(long *)(uVar4 + 400) - *(long *)(uVar4 + 0x188) >> 6);
          pplVar12 = *(long ***)(uVar4 + 0x1a8);
          pplVar11 = *(long ***)(uVar4 + 0x1a0);
          ppplVar8[0x36] = *(long ***)(uVar4 + 0x1b0);
          ppplVar8[0x35] = pplVar12;
          ppplVar8[0x34] = pplVar11;
          return ppplVar8;
        }
        lVar10 = (long)ppplVar8[2] - (long)*ppplVar8 >> 3;
        uVar7 = lVar10 * -0x5c9882b931057262;
        if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
          uVar7 = uVar6;
        }
        if (0x572620ae4c415b < (ulong)(lVar10 * 0x51b3bea3677d46cf)) {
          uVar7 = 0xae4c415c9882b9;
        }
        pplStack_98 = (long **)ppplVar8;
        if (uVar7 == 0) {
          ppplVar3 = (long ***)0x0;
          puStack_70 = (undefined1 *)&puStack_60;
        }
        else {
          ppplVar3 = ppplVar8;
          puStack_70 = (undefined1 *)&puStack_60;
          FUN_10a047570();
        }
        plStack_b0 = (long *)((long)ppplVar3 + lVar2);
        pplVar12 = (long **)(plStack_b0 + uVar4 * 0x2f);
        pplVar11 = (long **)plStack_b0;
        do {
          pplVar11[0x27] = (long *)0x0;
          pplVar11[0x26] = (long *)0x0;
          pplVar11[0x29] = (long *)0x0;
          pplVar11[0x28] = (long *)0x0;
          pplVar11[0x23] = (long *)0x0;
          pplVar11[0x22] = (long *)0x0;
          pplVar11[0x25] = (long *)0x0;
          pplVar11[0x24] = (long *)0x0;
          pplVar11[0x1f] = (long *)0x0;
          pplVar11[0x1e] = (long *)0x0;
          pplVar11[0x21] = (long *)0x0;
          pplVar11[0x20] = (long *)0x0;
          pplVar11[0x1b] = (long *)0x0;
          pplVar11[0x1a] = (long *)0x0;
          pplVar11[0x1d] = (long *)0x0;
          pplVar11[0x1c] = (long *)0x0;
          pplVar11[0x17] = (long *)0x0;
          pplVar11[0x16] = (long *)0x0;
          pplVar11[0x19] = (long *)0x0;
          pplVar11[0x18] = (long *)0x0;
          pplVar11[0x13] = (long *)0x0;
          pplVar11[0x12] = (long *)0x0;
          pplVar11[0x15] = (long *)0x0;
          pplVar11[0x14] = (long *)0x0;
          pplVar11[0xf] = (long *)0x0;
          pplVar11[0xe] = (long *)0x0;
          pplVar11[0x11] = (long *)0x0;
          pplVar11[0x10] = (long *)0x0;
          pplVar11[0xb] = (long *)0x0;
          pplVar11[10] = (long *)0x0;
          pplVar11[0xd] = (long *)0x0;
          pplVar11[0xc] = (long *)0x0;
          pplVar11[7] = (long *)0x0;
          pplVar11[6] = (long *)0x0;
          pplVar11[9] = (long *)0x0;
          pplVar11[8] = (long *)0x0;
          pplVar11[3] = (long *)0x0;
          pplVar11[2] = (long *)0x0;
          pplVar11[5] = (long *)0x0;
          pplVar11[4] = (long *)0x0;
          pplVar11[1] = (long *)0x0;
          *pplVar11 = (long *)0x0;
          *(undefined1 *)(pplVar11 + 4) = 6;
          pplVar11[0x11] = (long *)0x0;
          pplVar11[0x10] = (long *)0x0;
          pplVar11[0x13] = (long *)0x0;
          pplVar11[0x12] = (long *)0x0;
          pplVar11[0x15] = (long *)0x0;
          pplVar11[0x14] = (long *)0x0;
          pplVar11[0x17] = (long *)0x0;
          pplVar11[0x16] = (long *)0x0;
          pplVar11[0x19] = (long *)0x0;
          pplVar11[0x18] = (long *)0x0;
          pplVar11[0x1b] = (long *)0x0;
          pplVar11[0x1a] = (long *)0x0;
          pplVar11[0x1c] = (long *)0xffffffffffffffff;
          *(undefined4 *)(pplVar11 + 0x24) = 0x3f800000;
          pplVar11[0x1e] = (long *)0x0;
          pplVar11[0x1d] = (long *)0x0;
          *(undefined2 *)((long)pplVar11 + 0x1b) = 0x10f;
          *(undefined8 *)((long)pplVar11 + 0x2c) = 0;
          *(undefined8 *)((long)pplVar11 + 0x24) = 0;
          *(undefined8 *)((long)pplVar11 + 0x3c) = 0;
          *(undefined8 *)((long)pplVar11 + 0x34) = 0;
          *(undefined8 *)((long)pplVar11 + 0x4c) = 0;
          *(undefined8 *)((long)pplVar11 + 0x44) = 0;
          *(undefined2 *)((long)pplVar11 + 0x54) = 0;
          *(undefined8 *)((long)pplVar11 + 0x5c) = 0xff000000ff;
          *(undefined1 *)((long)pplVar11 + 0x65) = 7;
          *(undefined4 *)(pplVar11 + 0xd) = 1;
          *(undefined4 *)(pplVar11 + 0xf) = 0x3f800000;
          pplVar11[0x23] = (long *)0x0;
          pplVar11[0x20] = (long *)0x0;
          pplVar11[0x1f] = (long *)0x0;
          pplVar11[0x22] = (long *)0x0;
          pplVar11[0x21] = (long *)0x0;
          pplVar11[0x26] = (long *)0x0;
          pplVar11[0x25] = (long *)0x0;
          pplVar11[0x28] = (long *)0x0;
          pplVar11[0x27] = (long *)0x0;
          *(undefined4 *)(pplVar11 + 0x29) = 0x3f800000;
          pplVar11[0x2a] = (long *)0x0;
          pplVar11[0x2b] = (long *)0x0;
          pplVar11[0x2c] = (long *)0x0;
          pplVar11[0x2d] = (long *)0xffffffffffffffff;
          pplVar11[0x2e] = (long *)0xffffffffffffffff;
          pplVar11 = pplVar11 + 0x2f;
        } while (pplVar11 != pplVar12);
        pplVar11 = (long **)((long)plStack_b0 + ((long)*ppplVar8 - (long)ppplVar8[1]));
        pplStack_b8 = (long **)ppplVar3;
        plStack_a8 = (long *)pplVar12;
        pplStack_a0 = (long **)(ppplVar3 + uVar7 * 0x2f);
        FUN_10a0475b8(ppplVar8,*ppplVar8,ppplVar8[1],pplVar11);
        pplStack_b8 = *ppplVar8;
        *ppplVar8 = pplVar11;
        ppplVar8[1] = pplVar12;
        pplStack_a0 = ppplVar8[2];
        ppplVar8[2] = (long **)(ppplVar3 + uVar7 * 0x2f);
        ppplVar8 = &pplStack_b8;
        plStack_b0 = (long *)pplStack_b8;
        plStack_a8 = (long *)pplStack_b8;
        func_0x00010a04784c(ppplVar8);
      }
      else {
        pplVar12 = pplVar11;
        if (uVar4 != 0) {
          pplVar12 = pplVar11 + uVar4 * 0x2f;
          do {
            pplVar11[0x27] = (long *)0x0;
            pplVar11[0x26] = (long *)0x0;
            pplVar11[0x29] = (long *)0x0;
            pplVar11[0x28] = (long *)0x0;
            pplVar11[0x23] = (long *)0x0;
            pplVar11[0x22] = (long *)0x0;
            pplVar11[0x25] = (long *)0x0;
            pplVar11[0x24] = (long *)0x0;
            pplVar11[0x1f] = (long *)0x0;
            pplVar11[0x1e] = (long *)0x0;
            pplVar11[0x21] = (long *)0x0;
            pplVar11[0x20] = (long *)0x0;
            pplVar11[0x1b] = (long *)0x0;
            pplVar11[0x1a] = (long *)0x0;
            pplVar11[0x1d] = (long *)0x0;
            pplVar11[0x1c] = (long *)0x0;
            pplVar11[0x17] = (long *)0x0;
            pplVar11[0x16] = (long *)0x0;
            pplVar11[0x19] = (long *)0x0;
            pplVar11[0x18] = (long *)0x0;
            pplVar11[0x13] = (long *)0x0;
            pplVar11[0x12] = (long *)0x0;
            pplVar11[0x15] = (long *)0x0;
            pplVar11[0x14] = (long *)0x0;
            pplVar11[0xf] = (long *)0x0;
            pplVar11[0xe] = (long *)0x0;
            pplVar11[0x11] = (long *)0x0;
            pplVar11[0x10] = (long *)0x0;
            pplVar11[0xb] = (long *)0x0;
            pplVar11[10] = (long *)0x0;
            pplVar11[0xd] = (long *)0x0;
            pplVar11[0xc] = (long *)0x0;
            pplVar11[7] = (long *)0x0;
            pplVar11[6] = (long *)0x0;
            pplVar11[9] = (long *)0x0;
            pplVar11[8] = (long *)0x0;
            pplVar11[3] = (long *)0x0;
            pplVar11[2] = (long *)0x0;
            pplVar11[5] = (long *)0x0;
            pplVar11[4] = (long *)0x0;
            pplVar11[1] = (long *)0x0;
            *pplVar11 = (long *)0x0;
            *(undefined1 *)(pplVar11 + 4) = 6;
            pplVar11[0x11] = (long *)0x0;
            pplVar11[0x10] = (long *)0x0;
            pplVar11[0x13] = (long *)0x0;
            pplVar11[0x12] = (long *)0x0;
            pplVar11[0x15] = (long *)0x0;
            pplVar11[0x14] = (long *)0x0;
            pplVar11[0x17] = (long *)0x0;
            pplVar11[0x16] = (long *)0x0;
            pplVar11[0x19] = (long *)0x0;
            pplVar11[0x18] = (long *)0x0;
            pplVar11[0x1b] = (long *)0x0;
            pplVar11[0x1a] = (long *)0x0;
            pplVar11[0x1c] = (long *)0xffffffffffffffff;
            *(undefined4 *)(pplVar11 + 0x24) = 0x3f800000;
            pplVar11[0x1e] = (long *)0x0;
            pplVar11[0x1d] = (long *)0x0;
            *(undefined2 *)((long)pplVar11 + 0x1b) = 0x10f;
            *(undefined8 *)((long)pplVar11 + 0x2c) = 0;
            *(undefined8 *)((long)pplVar11 + 0x24) = 0;
            *(undefined8 *)((long)pplVar11 + 0x3c) = 0;
            *(undefined8 *)((long)pplVar11 + 0x34) = 0;
            *(undefined8 *)((long)pplVar11 + 0x4c) = 0;
            *(undefined8 *)((long)pplVar11 + 0x44) = 0;
            *(undefined2 *)((long)pplVar11 + 0x54) = 0;
            *(undefined8 *)((long)pplVar11 + 0x5c) = 0xff000000ff;
            *(undefined1 *)((long)pplVar11 + 0x65) = 7;
            *(undefined4 *)(pplVar11 + 0xd) = 1;
            *(undefined4 *)(pplVar11 + 0xf) = 0x3f800000;
            pplVar11[0x23] = (long *)0x0;
            pplVar11[0x20] = (long *)0x0;
            pplVar11[0x1f] = (long *)0x0;
            pplVar11[0x22] = (long *)0x0;
            pplVar11[0x21] = (long *)0x0;
            pplVar11[0x26] = (long *)0x0;
            pplVar11[0x25] = (long *)0x0;
            pplVar11[0x28] = (long *)0x0;
            pplVar11[0x27] = (long *)0x0;
            *(undefined4 *)(pplVar11 + 0x29) = 0x3f800000;
            pplVar11[0x2a] = (long *)0x0;
            pplVar11[0x2b] = (long *)0x0;
            pplVar11[0x2c] = (long *)0x0;
            pplVar11[0x2d] = (long *)0xffffffffffffffff;
            pplVar11[0x2e] = (long *)0xffffffffffffffff;
            pplVar11 = pplVar11 + 0x2f;
          } while (pplVar11 != pplVar12);
        }
        ppplVar8[1] = pplVar12;
      }
      return ppplVar8;
    }
    uVar5 = (long)param_1[2] - (long)ppplVar9;
    uVar7 = uVar5;
    if (uVar5 <= uVar6) {
      uVar7 = uVar6;
    }
    if (0x7ffffffffffffffd < uVar5) {
      uVar7 = 0x7fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar2 = 0;
    }
    else {
      if ((long)uVar7 < 0) goto LAB_10a5e5164;
      lVar2 = uVar7 << 1;
      __Znwm();
    }
    lVar1 = lVar2 + lVar10;
    _bzero(lVar1,param_2 * 2);
    ppplVar8 = (long ***)(lVar1 + (lVar10 >> 1) * -2);
    ppplVar3 = ppplVar8;
    _memcpy(ppplVar8,ppplVar9,lVar10);
    *param_1 = (long **)ppplVar8;
    param_1[1] = (long **)(lVar1 + param_2 * 2);
    param_1[2] = (long **)(lVar2 + uVar7 * 2);
    if (ppplVar9 != (long ***)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(ppplVar9);
      return ppplVar9;
    }
  }
  else {
    ppplVar3 = param_1;
    if (param_2 != 0) {
      ppplVar3 = ppplVar8;
      _bzero(ppplVar8,param_2 * 2);
      ppplVar8 = (long ***)((long)ppplVar8 + param_2 * 2);
    }
    param_1[1] = (long **)ppplVar8;
  }
  return ppplVar3;
}



/* Entry: 10a5e13e4; end: 10a5e146f;  */

long **** FUN_10a5e13e4(long ****param_1,ulong param_2)

{
  bool bVar1;
  long ****pppplVar2;
  long ****pppplVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long ****pppplVar9;
  long ***ppplVar10;
  long ***ppplVar11;
  long ***ppplStack_58;
  long **pplStack_50;
  long **pplStack_48;
  long ***ppplStack_40;
  long ***ppplStack_38;
  
  pppplVar3 = (long ****)param_1[1];
  lVar5 = (long)pppplVar3 - (long)*param_1 >> 3;
  bVar1 = param_2 < (ulong)(lVar5 * 0x51b3bea3677d46cf);
  uVar4 = param_2 + lVar5 * -0x51b3bea3677d46cf;
  if (bVar1 || uVar4 == 0) {
    pppplVar2 = param_1;
    if (bVar1) {
      pppplVar9 = (long ****)(*param_1 + param_2 * 0x2f);
      while (pppplVar3 != pppplVar9) {
        pppplVar3 = pppplVar3 + -0x2f;
        pppplVar2 = pppplVar3;
        func_0x00010a0477e8(pppplVar3);
      }
      param_1[1] = (long ***)pppplVar9;
    }
    return pppplVar2;
  }
  ppplVar10 = param_1[1];
  if ((ulong)(((long)param_1[2] - (long)ppplVar10 >> 3) * 0x51b3bea3677d46cf) < uVar4) {
    lVar5 = (long)ppplVar10 - (long)*param_1;
    uVar7 = uVar4 + (lVar5 >> 3) * 0x51b3bea3677d46cf;
    if (0xae4c415c9882b9 < uVar7) {
      FUN_10a04755c();
      func_0x00010a04784c(&ppplStack_58);
      __Unwind_Resume();
      _memcpy();
      param_1[0x28] = (long ***)0x0;
      param_1[0x29] = (long ***)0x0;
      param_1[0x27] = (long ***)0x0;
      FUN_10a5e5548(param_1 + 0x27,*(long *)(uVar4 + 0x138),*(long *)(uVar4 + 0x140),
                    *(long *)(uVar4 + 0x140) - *(long *)(uVar4 + 0x138) >> 1);
      param_1[0x2a] = (long ***)0x0;
      param_1[0x2b] = (long ***)0x0;
      param_1[0x2c] = (long ***)0x0;
      FUN_10a5e5638(param_1 + 0x2a,*(long *)(uVar4 + 0x150),*(long *)(uVar4 + 0x158),
                    (*(long *)(uVar4 + 0x158) - *(long *)(uVar4 + 0x150) >> 4) * -0x5555555555555555
                   );
      param_1[0x2d] = *(long ****)(uVar4 + 0x168);
      param_1[0x2e] = (long ***)0x0;
      param_1[0x2f] = (long ***)0x0;
      param_1[0x30] = (long ***)0x0;
      FUN_10a18edf0(param_1 + 0x2e,*(long *)(uVar4 + 0x170),*(long *)(uVar4 + 0x178),
                    (*(long *)(uVar4 + 0x178) - *(long *)(uVar4 + 0x170) >> 3) * -0x5555555555555555
                   );
      param_1[0x31] = (long ***)0x0;
      param_1[0x32] = (long ***)0x0;
      param_1[0x33] = (long ***)0x0;
      FUN_10a34e7c8(param_1 + 0x31,*(long *)(uVar4 + 0x188),*(long *)(uVar4 + 400),
                    *(long *)(uVar4 + 400) - *(long *)(uVar4 + 0x188) >> 6);
      ppplVar11 = *(long ****)(uVar4 + 0x1a8);
      ppplVar10 = *(long ****)(uVar4 + 0x1a0);
      param_1[0x36] = *(long ****)(uVar4 + 0x1b0);
      param_1[0x35] = ppplVar11;
      param_1[0x34] = ppplVar10;
      return param_1;
    }
    lVar6 = (long)param_1[2] - (long)*param_1 >> 3;
    uVar8 = lVar6 * -0x5c9882b931057262;
    if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
      uVar8 = uVar7;
    }
    if (0x572620ae4c415b < (ulong)(lVar6 * 0x51b3bea3677d46cf)) {
      uVar8 = 0xae4c415c9882b9;
    }
    ppplStack_38 = (long ***)param_1;
    if (uVar8 == 0) {
      pppplVar3 = (long ****)0x0;
    }
    else {
      pppplVar3 = param_1;
      FUN_10a047570();
    }
    pplStack_50 = (long **)((long)pppplVar3 + lVar5);
    ppplVar11 = (long ***)(pplStack_50 + uVar4 * 0x2f);
    ppplVar10 = (long ***)pplStack_50;
    do {
      ppplVar10[0x27] = (long **)0x0;
      ppplVar10[0x26] = (long **)0x0;
      ppplVar10[0x29] = (long **)0x0;
      ppplVar10[0x28] = (long **)0x0;
      ppplVar10[0x23] = (long **)0x0;
      ppplVar10[0x22] = (long **)0x0;
      ppplVar10[0x25] = (long **)0x0;
      ppplVar10[0x24] = (long **)0x0;
      ppplVar10[0x1f] = (long **)0x0;
      ppplVar10[0x1e] = (long **)0x0;
      ppplVar10[0x21] = (long **)0x0;
      ppplVar10[0x20] = (long **)0x0;
      ppplVar10[0x1b] = (long **)0x0;
      ppplVar10[0x1a] = (long **)0x0;
      ppplVar10[0x1d] = (long **)0x0;
      ppplVar10[0x1c] = (long **)0x0;
      ppplVar10[0x17] = (long **)0x0;
      ppplVar10[0x16] = (long **)0x0;
      ppplVar10[0x19] = (long **)0x0;
      ppplVar10[0x18] = (long **)0x0;
      ppplVar10[0x13] = (long **)0x0;
      ppplVar10[0x12] = (long **)0x0;
      ppplVar10[0x15] = (long **)0x0;
      ppplVar10[0x14] = (long **)0x0;
      ppplVar10[0xf] = (long **)0x0;
      ppplVar10[0xe] = (long **)0x0;
      ppplVar10[0x11] = (long **)0x0;
      ppplVar10[0x10] = (long **)0x0;
      ppplVar10[0xb] = (long **)0x0;
      ppplVar10[10] = (long **)0x0;
      ppplVar10[0xd] = (long **)0x0;
      ppplVar10[0xc] = (long **)0x0;
      ppplVar10[7] = (long **)0x0;
      ppplVar10[6] = (long **)0x0;
      ppplVar10[9] = (long **)0x0;
      ppplVar10[8] = (long **)0x0;
      ppplVar10[3] = (long **)0x0;
      ppplVar10[2] = (long **)0x0;
      ppplVar10[5] = (long **)0x0;
      ppplVar10[4] = (long **)0x0;
      ppplVar10[1] = (long **)0x0;
      *ppplVar10 = (long **)0x0;
      *(undefined1 *)(ppplVar10 + 4) = 6;
      ppplVar10[0x11] = (long **)0x0;
      ppplVar10[0x10] = (long **)0x0;
      ppplVar10[0x13] = (long **)0x0;
      ppplVar10[0x12] = (long **)0x0;
      ppplVar10[0x15] = (long **)0x0;
      ppplVar10[0x14] = (long **)0x0;
      ppplVar10[0x17] = (long **)0x0;
      ppplVar10[0x16] = (long **)0x0;
      ppplVar10[0x19] = (long **)0x0;
      ppplVar10[0x18] = (long **)0x0;
      ppplVar10[0x1b] = (long **)0x0;
      ppplVar10[0x1a] = (long **)0x0;
      ppplVar10[0x1c] = (long **)0xffffffffffffffff;
      *(undefined4 *)(ppplVar10 + 0x24) = 0x3f800000;
      ppplVar10[0x1e] = (long **)0x0;
      ppplVar10[0x1d] = (long **)0x0;
      *(undefined2 *)((long)ppplVar10 + 0x1b) = 0x10f;
      *(undefined8 *)((long)ppplVar10 + 0x2c) = 0;
      *(undefined8 *)((long)ppplVar10 + 0x24) = 0;
      *(undefined8 *)((long)ppplVar10 + 0x3c) = 0;
      *(undefined8 *)((long)ppplVar10 + 0x34) = 0;
      *(undefined8 *)((long)ppplVar10 + 0x4c) = 0;
      *(undefined8 *)((long)ppplVar10 + 0x44) = 0;
      *(undefined2 *)((long)ppplVar10 + 0x54) = 0;
      *(undefined8 *)((long)ppplVar10 + 0x5c) = 0xff000000ff;
      *(undefined1 *)((long)ppplVar10 + 0x65) = 7;
      *(undefined4 *)(ppplVar10 + 0xd) = 1;
      *(undefined4 *)(ppplVar10 + 0xf) = 0x3f800000;
      ppplVar10[0x23] = (long **)0x0;
      ppplVar10[0x20] = (long **)0x0;
      ppplVar10[0x1f] = (long **)0x0;
      ppplVar10[0x22] = (long **)0x0;
      ppplVar10[0x21] = (long **)0x0;
      ppplVar10[0x26] = (long **)0x0;
      ppplVar10[0x25] = (long **)0x0;
      ppplVar10[0x28] = (long **)0x0;
      ppplVar10[0x27] = (long **)0x0;
      *(undefined4 *)(ppplVar10 + 0x29) = 0x3f800000;
      ppplVar10[0x2a] = (long **)0x0;
      ppplVar10[0x2b] = (long **)0x0;
      ppplVar10[0x2c] = (long **)0x0;
      ppplVar10[0x2d] = (long **)0xffffffffffffffff;
      ppplVar10[0x2e] = (long **)0xffffffffffffffff;
      ppplVar10 = ppplVar10 + 0x2f;
    } while (ppplVar10 != ppplVar11);
    ppplVar10 = (long ***)((long)pplStack_50 + ((long)*param_1 - (long)param_1[1]));
    ppplStack_58 = (long ***)pppplVar3;
    pplStack_48 = (long **)ppplVar11;
    ppplStack_40 = (long ***)(pppplVar3 + uVar8 * 0x2f);
    FUN_10a0475b8(param_1,*param_1,param_1[1],ppplVar10);
    ppplStack_58 = *param_1;
    *param_1 = ppplVar10;
    param_1[1] = ppplVar11;
    ppplStack_40 = param_1[2];
    param_1[2] = (long ***)(pppplVar3 + uVar8 * 0x2f);
    param_1 = &ppplStack_58;
    pplStack_50 = (long **)ppplStack_58;
    pplStack_48 = (long **)ppplStack_58;
    func_0x00010a04784c(param_1);
  }
  else {
    ppplVar11 = ppplVar10;
    if (uVar4 != 0) {
      ppplVar11 = ppplVar10 + uVar4 * 0x2f;
      do {
        ppplVar10[0x27] = (long **)0x0;
        ppplVar10[0x26] = (long **)0x0;
        ppplVar10[0x29] = (long **)0x0;
        ppplVar10[0x28] = (long **)0x0;
        ppplVar10[0x23] = (long **)0x0;
        ppplVar10[0x22] = (long **)0x0;
        ppplVar10[0x25] = (long **)0x0;
        ppplVar10[0x24] = (long **)0x0;
        ppplVar10[0x1f] = (long **)0x0;
        ppplVar10[0x1e] = (long **)0x0;
        ppplVar10[0x21] = (long **)0x0;
        ppplVar10[0x20] = (long **)0x0;
        ppplVar10[0x1b] = (long **)0x0;
        ppplVar10[0x1a] = (long **)0x0;
        ppplVar10[0x1d] = (long **)0x0;
        ppplVar10[0x1c] = (long **)0x0;
        ppplVar10[0x17] = (long **)0x0;
        ppplVar10[0x16] = (long **)0x0;
        ppplVar10[0x19] = (long **)0x0;
        ppplVar10[0x18] = (long **)0x0;
        ppplVar10[0x13] = (long **)0x0;
        ppplVar10[0x12] = (long **)0x0;
        ppplVar10[0x15] = (long **)0x0;
        ppplVar10[0x14] = (long **)0x0;
        ppplVar10[0xf] = (long **)0x0;
        ppplVar10[0xe] = (long **)0x0;
        ppplVar10[0x11] = (long **)0x0;
        ppplVar10[0x10] = (long **)0x0;
        ppplVar10[0xb] = (long **)0x0;
        ppplVar10[10] = (long **)0x0;
        ppplVar10[0xd] = (long **)0x0;
        ppplVar10[0xc] = (long **)0x0;
        ppplVar10[7] = (long **)0x0;
        ppplVar10[6] = (long **)0x0;
        ppplVar10[9] = (long **)0x0;
        ppplVar10[8] = (long **)0x0;
        ppplVar10[3] = (long **)0x0;
        ppplVar10[2] = (long **)0x0;
        ppplVar10[5] = (long **)0x0;
        ppplVar10[4] = (long **)0x0;
        ppplVar10[1] = (long **)0x0;
        *ppplVar10 = (long **)0x0;
        *(undefined1 *)(ppplVar10 + 4) = 6;
        ppplVar10[0x11] = (long **)0x0;
        ppplVar10[0x10] = (long **)0x0;
        ppplVar10[0x13] = (long **)0x0;
        ppplVar10[0x12] = (long **)0x0;
        ppplVar10[0x15] = (long **)0x0;
        ppplVar10[0x14] = (long **)0x0;
        ppplVar10[0x17] = (long **)0x0;
        ppplVar10[0x16] = (long **)0x0;
        ppplVar10[0x19] = (long **)0x0;
        ppplVar10[0x18] = (long **)0x0;
        ppplVar10[0x1b] = (long **)0x0;
        ppplVar10[0x1a] = (long **)0x0;
        ppplVar10[0x1c] = (long **)0xffffffffffffffff;
        *(undefined4 *)(ppplVar10 + 0x24) = 0x3f800000;
        ppplVar10[0x1e] = (long **)0x0;
        ppplVar10[0x1d] = (long **)0x0;
        *(undefined2 *)((long)ppplVar10 + 0x1b) = 0x10f;
        *(undefined8 *)((long)ppplVar10 + 0x2c) = 0;
        *(undefined8 *)((long)ppplVar10 + 0x24) = 0;
        *(undefined8 *)((long)ppplVar10 + 0x3c) = 0;
        *(undefined8 *)((long)ppplVar10 + 0x34) = 0;
        *(undefined8 *)((long)ppplVar10 + 0x4c) = 0;
        *(undefined8 *)((long)ppplVar10 + 0x44) = 0;
        *(undefined2 *)((long)ppplVar10 + 0x54) = 0;
        *(undefined8 *)((long)ppplVar10 + 0x5c) = 0xff000000ff;
        *(undefined1 *)((long)ppplVar10 + 0x65) = 7;
        *(undefined4 *)(ppplVar10 + 0xd) = 1;
        *(undefined4 *)(ppplVar10 + 0xf) = 0x3f800000;
        ppplVar10[0x23] = (long **)0x0;
        ppplVar10[0x20] = (long **)0x0;
        ppplVar10[0x1f] = (long **)0x0;
        ppplVar10[0x22] = (long **)0x0;
        ppplVar10[0x21] = (long **)0x0;
        ppplVar10[0x26] = (long **)0x0;
        ppplVar10[0x25] = (long **)0x0;
        ppplVar10[0x28] = (long **)0x0;
        ppplVar10[0x27] = (long **)0x0;
        *(undefined4 *)(ppplVar10 + 0x29) = 0x3f800000;
        ppplVar10[0x2a] = (long **)0x0;
        ppplVar10[0x2b] = (long **)0x0;
        ppplVar10[0x2c] = (long **)0x0;
        ppplVar10[0x2d] = (long **)0xffffffffffffffff;
        ppplVar10[0x2e] = (long **)0xffffffffffffffff;
        ppplVar10 = ppplVar10 + 0x2f;
      } while (ppplVar10 != ppplVar11);
    }
    param_1[1] = ppplVar11;
  }
  return param_1;
}



/* Entry: 10a5e1470; end: 10a5e14c3;  */

void FUN_10a5e1470(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  
  uVar1 = *(undefined1 *)(param_1 + 0x808);
  *(undefined1 *)(param_1 + 0x808) = 1;
  lVar2 = param_1;
  FUN_10a01eacc();
  *(byte *)(lVar2 + 0x18) = *(byte *)(lVar2 + 0x18) | 1;
  *(byte *)(*(long *)(lVar2 + 0x80) + 0x279) = *(byte *)(*(long *)(lVar2 + 0x80) + 0x279) | 1;
  *(undefined1 *)(param_1 + 0x808) = uVar1;
  return;
}



/* Entry: 10a5e14c4; end: 10a5e15b3;  */

ulong FUN_10a5e14c4(ulong param_1,int param_2)

{
  byte bVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  
  uVar5 = 0xffff;
  if (param_2 != 0xffff) {
    uVar5 = param_1;
    FUN_10a021e20();
    bVar1 = *(byte *)(uVar5 + 0x1a);
    uVar6 = (ulong)bVar1;
    uVar5 = param_1;
    FUN_10a5dff54(param_1,uVar6);
    if ((ulong)(*(long *)(param_1 + 0x610) - *(long *)(param_1 + 0x608) >> 1) <=
        (uVar5 & 0xffffffff)) {
LAB_10a5e15b0:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a5e15b4);
      (*pcVar2)();
    }
    if (bVar1 != 0) {
      iVar7 = 0;
      uVar8 = (ulong)*(ushort *)(*(long *)(param_1 + 0x608) + (uVar5 & 0xffffffff) * 2) & 0x7fff;
      lVar9 = uVar8 * 0x178;
      do {
        uVar3 = param_1;
        FUN_10a021e20(param_1,param_2 + iVar7 & 0xffff);
        uVar4 = (*(long *)(param_1 + 0x628) - *(long *)(param_1 + 0x620) >> 3) * 0x51b3bea3677d46cf;
        if (uVar4 < uVar8 || uVar4 - uVar8 == 0) goto LAB_10a5e15b0;
        func_0x00010a044b04(*(long *)(param_1 + 0x620) + lVar9,uVar3);
        iVar7 = iVar7 + 1;
        lVar9 = lVar9 + 0x178;
        uVar8 = uVar8 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  return uVar5;
}



/* Entry: 10a5e15b4; end: 10a5e170f;  */

void FUN_10a5e15b4(ulong *param_1,ulong param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong *puStack_38;
  
  uVar4 = param_1[1];
  if (uVar4 < param_1[2]) {
    FUN_10a5e5434(uVar4,param_2);
    uVar4 = uVar4 + 0x1b8;
    param_1[1] = uVar4;
  }
  else {
    lVar5 = uVar4 - *param_1;
    uVar4 = (lVar5 >> 3) * 0x6fb586fb586fb587 + 1;
    if (0x94f2094f2094f2 < uVar4) {
      FUN_10a5e5750();
      func_0x00010a5e5994(&uStack_58);
      __Unwind_Resume();
      uVar4 = param_2;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
      param_1[3] = *(ulong *)(param_2 + 0x18);
      plVar1 = param_3;
      (**(code **)(*param_3 + 0x38))();
      param_1[4] = (ulong)plVar1;
      param_1[5] = uVar4;
      plVar1 = param_3;
      (**(code **)(*param_3 + 0x18))();
      param_1[6] = (ulong)plVar1;
      plVar1 = param_3;
      (**(code **)(*param_3 + 0x28))();
      *(short *)(param_1 + 7) = (short)plVar1;
      (**(code **)(*param_3 + 0x20))();
      lVar5 = param_3[4];
      lVar8 = *param_3;
      lVar7 = param_3[3];
      lVar2 = param_3[2];
      *(long *)((long)param_1 + 0x44) = param_3[1];
      *(long *)((long)param_1 + 0x3c) = lVar8;
      *(long *)((long)param_1 + 0x54) = lVar7;
      *(long *)((long)param_1 + 0x4c) = lVar2;
      *(long *)((long)param_1 + 0x5c) = lVar5;
      return;
    }
    lVar2 = (long)(param_1[2] - *param_1) >> 3;
    uVar3 = lVar2 * -0x2094f2094f2094f2;
    if (uVar3 < uVar4 || uVar3 - uVar4 == 0) {
      uVar3 = uVar4;
    }
    if (0x4a7904a7904a78 < (ulong)(lVar2 * 0x6fb586fb586fb587)) {
      uVar3 = 0x94f2094f2094f2;
    }
    puStack_38 = param_1;
    if (uVar3 == 0) {
      uVar3 = 0;
      uVar4 = 0;
    }
    else {
      uVar4 = param_2;
      FUN_10a5e5764();
    }
    lVar5 = uVar3 + lVar5;
    uVar6 = uVar3 + uVar4 * 0x1b8;
    uStack_58 = uVar3;
    uStack_50 = lVar5;
    uStack_48 = lVar5;
    uStack_40 = uVar6;
    FUN_10a5e5434(lVar5,param_2);
    uVar4 = lVar5 + 0x1b8;
    uVar3 = lVar5 + (*param_1 - param_1[1]);
    FUN_10a5e57ac(*param_1,param_1[1],uVar3);
    uStack_58 = *param_1;
    *param_1 = uVar3;
    param_1[1] = uVar4;
    uStack_40 = param_1[2];
    param_1[2] = uVar6;
    uStack_50 = uStack_58;
    uStack_48 = uStack_58;
    func_0x00010a5e5994(&uStack_58);
  }
  param_1[1] = uVar4;
  return;
}



/* Entry: 10a5e1710; end: 10a5e17a7;  */

void FUN_10a5e1710(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  plVar1 = param_3;
  (**(code **)(*param_3 + 0x38))();
  *(long **)(param_1 + 0x20) = plVar1;
  *(long *)(param_1 + 0x28) = lVar2;
  plVar1 = param_3;
  (**(code **)(*param_3 + 0x18))();
  *(long **)(param_1 + 0x30) = plVar1;
  plVar1 = param_3;
  (**(code **)(*param_3 + 0x28))();
  *(short *)(param_1 + 0x38) = (short)plVar1;
  (**(code **)(*param_3 + 0x20))();
  lVar2 = param_3[4];
  lVar5 = *param_3;
  lVar4 = param_3[3];
  lVar3 = param_3[2];
  *(long *)(param_1 + 0x44) = param_3[1];
  *(long *)(param_1 + 0x3c) = lVar5;
  *(long *)(param_1 + 0x54) = lVar4;
  *(long *)(param_1 + 0x4c) = lVar3;
  *(long *)(param_1 + 0x5c) = lVar2;
  return;
}



/* Entry: 10a5e17a8; end: 10a5e18f3;  */

void FUN_10a5e17a8(long param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar3 = (undefined8 *)(param_1 + 0xe8);
  puVar5 = (undefined8 *)*puVar3;
  puVar4 = *(undefined8 **)(param_1 + 0xf0);
  puVar6 = puVar5;
  if (puVar5 == puVar4) {
LAB_10a5e1804:
    uVar7 = (long)puVar6 - (long)puVar5;
    if (puVar6 == puVar4) goto LAB_10a5e1810;
  }
  else {
    do {
      if (puVar6[3] == *(long *)(param_2 + 0x18)) goto LAB_10a5e1804;
      puVar6 = puVar6 + 0xd;
    } while (puVar6 != puVar4);
    uVar7 = (long)puVar4 - (long)puVar5;
LAB_10a5e1810:
    if (puVar4 < *(undefined8 **)(param_1 + 0xf8)) {
      puVar4[5] = 0;
      puVar4[4] = 0;
      puVar4[7] = 0;
      puVar4[6] = 0;
      puVar4[9] = 0;
      puVar4[8] = 0;
      puVar4[0xb] = 0;
      puVar4[10] = 0;
      puVar4[0xc] = 0;
      puVar4[1] = 0;
      *puVar4 = 0;
      puVar4[3] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0x28cd94bfde;
      puVar4[4] = 0xffffffffffffffff;
      puVar4[5] = 0xffffffffffffffff;
      *(undefined2 *)(puVar4 + 7) = 0xd;
      *(undefined4 *)(puVar4 + 8) = 1;
      *(undefined8 *)((long)puVar4 + 0x44) = 0;
      *(undefined8 *)((long)puVar4 + 0x4c) = 0;
      *(undefined8 *)((long)puVar4 + 0x54) = 0;
      *(undefined2 *)((long)puVar4 + 0x62) = 1000;
      puVar3 = puVar4 + 0xd;
      *(undefined8 *)((long)puVar4 + 0x5a) = 0;
    }
    else {
      FUN_10a5e5bec();
    }
    *(undefined8 **)(param_1 + 0xf0) = puVar3;
    if ((ulong)((long)puVar3 - *(long *)(param_1 + 0xe8)) <= uVar7) goto LAB_10a5e18f0;
    lVar1 = *(long *)(param_1 + 0xe8) + uVar7;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar1,param_2);
    *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    puVar5 = *(undefined8 **)(param_1 + 0xe8);
    puVar4 = *(undefined8 **)(param_1 + 0xf0);
  }
  if (uVar7 < (ulong)((long)puVar4 - (long)puVar5)) {
    *(undefined8 *)((long)puVar5 + uVar7 + 0x30) = param_3;
    *(undefined2 *)((long)puVar5 + uVar7 + 0x38) = 0xd;
    uVar9 = param_4[1];
    uVar8 = *param_4;
    uVar11 = param_4[3];
    uVar10 = param_4[2];
    *(undefined8 *)((long)puVar5 + uVar7 + 0x5c) = param_4[4];
    *(undefined8 *)((long)puVar5 + uVar7 + 0x54) = uVar11;
    *(undefined8 *)((long)puVar5 + uVar7 + 0x4c) = uVar10;
    *(undefined8 *)((long)puVar5 + uVar7 + 0x44) = uVar9;
    *(undefined8 *)((long)puVar5 + uVar7 + 0x3c) = uVar8;
    return;
  }
LAB_10a5e18f0:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a5e18f4);
  (*pcVar2)();
}



/* Entry: 10a5e18f4; end: 10a5e19b3;  */

/* WARNING: Removing unreachable block (ram,0x00010a5e1988) */

void FUN_10a5e18f4(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 uStack_31;
  
  lVar2 = *(long *)(param_1 + 0xe8);
  lVar5 = *(long *)(param_1 + 0xf0);
  lVar4 = lVar2;
  if (lVar2 != lVar5) {
    lVar3 = lVar2;
    do {
      lVar4 = lVar3;
      if (*(long *)(lVar3 + 0x18) == *(long *)(param_2 + 0x18)) break;
      lVar3 = lVar3 + 0x68;
      lVar4 = lVar5;
    } while (lVar3 != lVar5);
  }
  if ((ulong)(lVar4 - lVar2) < (ulong)(lVar5 - lVar2)) {
    if (lVar5 == lVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5e19b4);
      (*pcVar1)();
    }
    lVar2 = lVar2 + (lVar4 - lVar2) + 0x68;
    FUN_10a5e5d64(&uStack_31);
    for (lVar5 = *(long *)(param_1 + 0xf0); lVar5 != lVar2; lVar5 = lVar5 + -0x68) {
    }
    *(long *)(param_1 + 0xf0) = lVar2;
  }
  return;
}



/* Entry: 10a5e19b4; end: 10a5e1abb;  */

void FUN_10a5e19b4(long param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 *param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_80,*param_2,param_2[1]);
  }
  else {
    uStack_78 = param_2[1];
    uStack_80 = *param_2;
    lStack_70 = param_2[2];
  }
  uStack_68 = param_2[3];
  plStack_58 = (long *)param_5[1];
  uStack_60 = *param_5;
  if (param_5[1] != 0) {
    plVar1 = (long *)(param_5[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_50 = param_3;
  uStack_4c = param_4;
  FUN_10a5e1abc(param_1 + 0x100,param_2,&uStack_80);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if (lStack_70 < 0) {
    __ZdlPv(uStack_80);
  }
  return;
}



/* Entry: 10a5e1abc; end: 10a5e1b43;  */

undefined1  [16] FUN_10a5e1abc(long param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  FUN_10a5e9300(param_1,param_2,param_2,param_3);
  if ((param_2 & 1) == 0) {
    if (*(char *)(param_1 + 0x47) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x30));
    }
    uVar2 = param_3[1];
    uVar1 = *param_3;
    *(undefined8 *)(param_1 + 0x40) = param_3[2];
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    *(undefined8 *)(param_1 + 0x30) = uVar1;
    *(undefined1 *)((long)param_3 + 0x17) = 0;
    *(undefined1 *)param_3 = 0;
    *(undefined8 *)(param_1 + 0x48) = param_3[3];
    FUN_10a18cdb8(param_1 + 0x50,param_3 + 4);
    *(undefined8 *)(param_1 + 0x60) = param_3[6];
  }
  auVar3._8_8_ = param_2 & 0xff;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a5e1b44; end: 10a5e1b7b;  */

undefined8 * FUN_10a5e1b44(undefined8 *param_1)

{
  func_0x00010a0616d0(param_1 + 4);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a5e1b7c; end: 10a5e1c83;  */

void FUN_10a5e1b7c(long param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 *param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_80,*param_2,param_2[1]);
  }
  else {
    uStack_78 = param_2[1];
    uStack_80 = *param_2;
    lStack_70 = param_2[2];
  }
  uStack_68 = param_2[3];
  plStack_58 = (long *)param_5[1];
  uStack_60 = *param_5;
  if (param_5[1] != 0) {
    plVar1 = (long *)(param_5[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_50 = param_3;
  uStack_4c = param_4;
  FUN_10a175674(param_1 + 0x128,param_2,&uStack_80);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if (lStack_70 < 0) {
    __ZdlPv(uStack_80);
  }
  return;
}



/* Entry: 10a5e1c84; end: 10a5e1ec7;  */

void FUN_10a5e1c84(ulong *param_1,undefined8 *param_2,ulong *param_3,long *param_4,long param_5,
                  long *param_6)

{
  long *plVar1;
  char cVar2;
  ulong uVar3;
  undefined8 *puVar4;
  bool bVar5;
  ulong *puVar6;
  ulong *puVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  ulong *puVar20;
  ulong uVar21;
  long *plVar22;
  long lVar23;
  long *plVar24;
  long lVar25;
  ulong unaff_x27;
  long *plVar26;
  long *plVar27;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  ulong *puStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long *plStack_f8;
  long *plStack_f0;
  ulong uStack_e8;
  long *plStack_e0;
  ulong uStack_d8;
  long *plStack_d0;
  long lStack_c8;
  ulong *puStack_c0;
  long *plStack_b8;
  ulong *puStack_b0;
  long *plStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong *puStack_68;
  
  uVar9 = *param_3;
  plVar1 = (long *)param_3[1];
  plVar22 = param_2 + 1;
  plVar26 = (long *)*param_2;
  puVar6 = param_1;
  puVar7 = param_3;
  plVar8 = param_4;
  uVar10 = uVar9;
  plVar24 = plVar1;
  if (plVar26 != plVar22) {
    do {
      if ((plVar26[8] != 0) && (uVar10 = param_1[1], uVar10 != 0)) {
        uVar14 = plVar26[7];
        uVar16 = uVar10 - 1;
        if ((uVar10 & uVar16) == 0) {
          uVar18 = uVar16 & uVar14;
        }
        else {
          uVar18 = uVar14;
          if (uVar10 <= uVar14) {
            uVar18 = 0;
            if (uVar10 != 0) {
              uVar18 = uVar14 / uVar10;
            }
            uVar18 = uVar14 - uVar18 * uVar10;
          }
        }
        plVar19 = *(long **)(*param_1 + uVar18 * 8);
        if (plVar19 != (long *)0x0) {
LAB_10a5e1d18:
          while (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0) {
            uVar21 = plVar19[1];
            if (uVar14 != uVar21) goto LAB_10a5e1d3c;
            if (plVar19[5] == uVar14) {
              if (plVar24 < (long *)param_3[2]) {
                lVar11 = plVar26[9];
                *plVar24 = plVar26[8];
                plVar24[1] = lVar11;
                if (lVar11 != 0) {
                  plVar19 = (long *)(lVar11 + 8);
                  do {
                    cVar2 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                    if (bVar5) {
                      *plVar19 = *plVar19 + 1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                }
                plVar24 = plVar24 + 2;
              }
              else {
                lVar11 = (long)plVar24 - *param_3;
                uVar10 = (lVar11 >> 4) + 1;
                if (uVar10 >> 0x3c != 0) {
                  FUN_10a5e5e04();
                  pcStack_98 = FUN_10a5e1ec8;
                  lStack_100 = 0;
                  plStack_f8 = (long *)0x0;
                  plStack_f0 = plVar26;
                  uStack_e8 = unaff_x27;
                  plStack_e0 = plVar1;
                  uStack_d8 = uVar9;
                  plStack_d0 = plVar24;
                  lStack_c8 = lVar11;
                  puStack_c0 = param_1;
                  plStack_b8 = plVar22;
                  puStack_b0 = param_3;
                  plStack_a8 = param_4;
                  puStack_a0 = &stack0xfffffffffffffff0;
                  func_0x00010a04a780(&lStack_100,plVar8 + 9);
                  if (lStack_100 == 0) {
                    lVar11 = *(long *)(param_5 + 0x2a8) - *(long *)(param_5 + 0x2a0);
                    if (lVar11 != 0) {
                      uVar9 = 0;
                      lVar23 = 0;
                      lVar15 = 0;
                      do {
                        uVar9 = uVar9 + 0x9e3779b9;
                        uVar9 = lVar15 + 0x9e3779b9 + uVar9 * 0x40 + (uVar9 >> 2) ^ uVar9;
                        lVar25 = *(long *)(*(long *)(param_5 + 0x2a0) + lVar15 * 0x10);
                        puVar20 = *(ulong **)(lVar25 + 0x228);
                        lVar25 = *(long *)(lVar25 + 0x230) - (long)puVar20;
                        if (lVar25 != 0) {
                          lVar25 = lVar25 >> 4;
                          lVar17 = lVar25;
                          do {
                            uVar10 = *puVar20;
                            uVar14 = ((ulong)(uint)((int)uVar10 << 3) + 8 ^ uVar10 >> 0x20) *
                                     -0x622015f714c7d297;
                            uVar10 = (uVar10 >> 0x20 ^ uVar14 >> 0x2f ^ uVar14) *
                                     -0x622015f714c7d297;
                            uVar9 = uVar9 + 0x9e3779b9;
                            uVar9 = uVar9 * 0x40 + 0x9e3779b9 + (uVar9 >> 2) +
                                    (uVar10 ^ uVar10 >> 0x2f) * -0x622015f714c7d297 ^ uVar9;
                            lVar17 = lVar17 + -1;
                            puVar20 = puVar20 + 2;
                          } while (lVar17 != 0);
                          lVar23 = lVar23 + lVar25;
                        }
                        lVar15 = lVar15 + 1;
                      } while (lVar15 != lVar11 >> 4);
                      goto LAB_10a5e205c;
                    }
                    uVar9 = 0;
                  }
                  else {
                    uVar9 = 0x28cd94bfde;
                    lVar23 = *(long *)(lStack_100 + 0x230) - (long)*(ulong **)(lStack_100 + 0x228);
                    if (lVar23 != 0) {
                      lVar23 = lVar23 >> 4;
                      puVar20 = *(ulong **)(lStack_100 + 0x228);
                      lVar11 = lVar23;
                      do {
                        uVar10 = *puVar20;
                        uVar14 = ((ulong)(uint)((int)uVar10 << 3) + 8 ^ uVar10 >> 0x20) *
                                 -0x622015f714c7d297;
                        uVar10 = (uVar10 >> 0x20 ^ uVar14 >> 0x2f ^ uVar14) * -0x622015f714c7d297;
                        uVar9 = uVar9 + 0x9e3779b9;
                        uVar9 = uVar9 * 0x40 + 0x9e3779b9 + (uVar9 >> 2) +
                                (uVar10 ^ uVar10 >> 0x2f) * -0x622015f714c7d297 ^ uVar9;
                        lVar11 = lVar11 + -1;
                        puVar20 = puVar20 + 2;
                      } while (lVar11 != 0);
LAB_10a5e205c:
                      lVar15 = *(long *)param_2[0x31];
                      uVar9 = uVar9 + 0x9e3779b9;
                      lVar11 = *(long *)(param_5 + 0x2f0);
                      plVar24 = *(long **)(param_5 + 0x2f8);
                      if (plVar24 != (long *)0x0) {
                        plVar1 = plVar24 + 1;
                        do {
                          cVar2 = '\x01';
                          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                          if (bVar5) {
                            *plVar1 = *plVar1 + 1;
                            cVar2 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar2 != '\0');
                      }
                      uVar9 = uVar9 * 0x40 + 0x9e3779b9 + (uVar9 >> 2) + lVar15 ^ uVar9;
                      if (lVar11 != 0) {
                        uVar9 = uVar9 + 0x9e3779b9;
                        uVar9 = uVar9 * 0x40 + 0x9e3779b9 + (uVar9 >> 2) +
                                **(long **)(lVar11 + 0x188) ^ uVar9;
                      }
                      if (plVar24 != (long *)0x0) {
                        plVar1 = plVar24 + 1;
                        do {
                          lVar11 = *plVar1;
                          cVar2 = '\x01';
                          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                          if (bVar5) {
                            *plVar1 = lVar11 + -1;
                            cVar2 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar2 != '\0');
                        if (lVar11 == 0) {
                          (**(code **)(*plVar24 + 0x10))(plVar24);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
                        }
                      }
                      if (uVar9 != *puVar7) {
                        *puVar7 = uVar9;
                        puVar12 = (undefined8 *)param_2[0x33];
                        if (puVar12 == param_2 + 0x34) {
                          lVar25 = 0;
                          lVar15 = 0;
                          lVar11 = 0;
                        }
                        else {
                          lVar11 = 0;
                          lVar15 = 0;
                          lVar25 = 0;
                          do {
                            plVar24 = *(long **)(puVar12[5] + 0x188);
                            while (plVar24 != (long *)(puVar12[5] + 400)) {
                              plVar1 = (long *)plVar24[1];
                              plVar8 = plVar24;
                              if ((long *)plVar24[1] == (long *)0x0) {
                                do {
                                  plVar26 = (long *)plVar8[2];
                                  bVar5 = (long *)*plVar26 != plVar8;
                                  plVar8 = plVar26;
                                } while (bVar5);
                              }
                              else {
                                do {
                                  plVar26 = plVar1;
                                  plVar1 = (long *)*plVar26;
                                } while ((long *)*plVar26 != (long *)0x0);
                              }
                              lVar17 = plVar24[5];
                              lVar11 = *(long *)(lVar17 + 0x198) + lVar11;
                              lVar15 = *(long *)(lVar17 + 0x1b0) + lVar15;
                              lVar25 = *(long *)(lVar17 + 0x1c8) + lVar25;
                              plVar24 = plVar26;
                            }
                            puVar13 = puVar12;
                            puVar4 = (undefined8 *)puVar12[1];
                            if ((undefined8 *)puVar12[1] == (undefined8 *)0x0) {
                              do {
                                puVar12 = (undefined8 *)puVar13[2];
                                bVar5 = (undefined8 *)*puVar12 != puVar13;
                                puVar13 = puVar12;
                              } while (bVar5);
                            }
                            else {
                              do {
                                puVar12 = puVar4;
                                puVar4 = (undefined8 *)*puVar12;
                              } while ((undefined8 *)*puVar12 != (undefined8 *)0x0);
                            }
                          } while (puVar12 != param_2 + 0x34);
                        }
                        lStack_108 = param_6[1];
                        lStack_110 = *param_6;
                        if (lStack_108 != 0) {
                          lVar17 = lStack_108 * 0x30;
                          plVar24 = (long *)(lStack_110 + 0x28);
                          do {
                            lVar11 = plVar24[-4] + lVar11;
                            lVar15 = plVar24[-2] + lVar15;
                            lVar25 = *plVar24 + lVar25;
                            lVar17 = lVar17 + -0x30;
                            plVar24 = plVar24 + 6;
                          } while (lVar17 != 0);
                        }
                        uVar9 = puVar7[1];
                        uVar10 = puVar7[2];
                        while (uVar10 != uVar9) {
                          uVar10 = uVar10 - 0x10;
                          func_0x00010a0daa60();
                        }
                        puVar7[2] = uVar9;
                        FUN_10a5e9854(puVar7 + 1,lVar11);
                        uVar9 = puVar7[4];
                        uVar10 = puVar7[5];
                        while (uVar10 != uVar9) {
                          uVar10 = uVar10 - 0x10;
                          FUN_10a5e96a0();
                        }
                        puVar7[5] = uVar9;
                        func_0x00010a5e98f0(puVar7 + 4,lVar15);
                        uVar9 = puVar7[7];
                        uVar10 = puVar7[8];
                        while (uVar10 != uVar9) {
                          uVar10 = uVar10 - 0x10;
                          func_0x00010a5e5e98();
                        }
                        puVar7[8] = uVar9;
                        func_0x00010a5e998c(puVar7 + 7,lVar25);
                        puVar7[0xb] = puVar7[10];
                        FUN_10a5e9a28(puVar7 + 10,lVar23);
                        uStack_118 = param_2[0x33];
                        puStack_138 = &uStack_118;
                        uStack_140 = 0;
                        plStack_120 = &lStack_110;
                        puStack_130 = param_2;
                        puStack_128 = puVar7;
                        if (lStack_100 == 0) {
                          lVar11 = *(long *)(param_5 + 0x2a0);
                          if (*(long *)(param_5 + 0x2a8) != lVar11) {
                            lVar15 = 0;
                            uVar9 = 0;
                            do {
                              FUN_10a5ea27c(&uStack_140,uVar9,lVar11 + lVar15);
                              uVar9 = uVar9 + 1;
                              lVar11 = *(long *)(param_5 + 0x2a0);
                              lVar15 = lVar15 + 0x10;
                            } while (uVar9 < (ulong)(*(long *)(param_5 + 0x2a8) - lVar11 >> 4));
                          }
                        }
                        else {
                          FUN_10a5ea27c(&uStack_140,0,&lStack_100);
                        }
                      }
                      plVar24 = plStack_f8;
                      uVar9 = puVar7[10];
                      uVar10 = puVar7[0xb];
                      *puVar6 = uVar9;
                      puVar6[1] = ((long)(uVar10 - uVar9) >> 4) * -0x5555555555555555;
                      if (plStack_f8 != (long *)0x0) {
                        plVar1 = plStack_f8 + 1;
                        do {
                          lVar11 = *plVar1;
                          cVar2 = '\x01';
                          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                          if (bVar5) {
                            *plVar1 = lVar11 + -1;
                            cVar2 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar2 != '\0');
                        if (lVar11 == 0) {
                          (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
                        }
                      }
                      return;
                    }
                  }
                  lVar23 = 0;
                  goto LAB_10a5e205c;
                }
                uVar16 = (long)param_3[2] - *param_3;
                uVar14 = (long)uVar16 >> 3;
                if (uVar14 <= uVar10) {
                  uVar14 = uVar10;
                }
                if (0x7fffffffffffffef < uVar16) {
                  uVar14 = 0xfffffffffffffff;
                }
                puStack_68 = param_3;
                FUN_10a5e5e18();
                plVar19 = (long *)(uVar14 + lVar11);
                lVar11 = plVar26[9];
                lVar15 = plVar26[8];
                plVar19[1] = plVar26[9];
                *plVar19 = lVar15;
                if (lVar11 != 0) {
                  plVar24 = (long *)(lVar11 + 8);
                  do {
                    cVar2 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                    if (bVar5) {
                      *plVar24 = *plVar24 + 1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                }
                unaff_x27 = uVar14 + (long)param_2 * 0x10;
                plVar24 = plVar19 + 2;
                param_2 = (undefined8 *)*param_3;
                puVar7 = (ulong *)(param_3[1] - (long)param_2);
                uVar10 = (long)plVar19 - (long)puVar7;
                _memcpy(uVar10);
                uStack_88 = *param_3;
                *param_3 = uVar10;
                param_3[1] = (ulong)plVar24;
                uStack_70 = param_3[2];
                param_3[2] = unaff_x27;
                puVar6 = &uStack_88;
                uStack_80 = uStack_88;
                uStack_78 = uStack_88;
                func_0x00010a5e5e4c();
              }
              param_3[1] = (ulong)plVar24;
              break;
            }
          }
        }
      }
LAB_10a5e1e44:
      plVar19 = (long *)plVar26[1];
      plVar27 = plVar26;
      if ((long *)plVar26[1] == (long *)0x0) {
        do {
          plVar26 = (long *)plVar27[2];
          bVar5 = (long *)*plVar26 != plVar27;
          plVar27 = plVar26;
        } while (bVar5);
      }
      else {
        do {
          plVar26 = plVar19;
          plVar19 = (long *)*plVar26;
        } while ((long *)*plVar26 != (long *)0x0);
      }
    } while (plVar26 != plVar22);
    uVar10 = *param_3;
  }
  *param_4 = uVar10 + ((long)plVar1 - uVar9);
  param_4[1] = ((long)((long)plVar24 - uVar10) >> 4) - ((long)((long)plVar1 - uVar9) >> 4);
  return;
LAB_10a5e1d3c:
  if ((uVar10 & uVar16) == 0) {
    uVar21 = uVar21 & uVar16;
  }
  else if (uVar10 <= uVar21) {
    uVar3 = 0;
    if (uVar10 != 0) {
      uVar3 = uVar21 / uVar10;
    }
    uVar21 = uVar21 - uVar3 * uVar10;
  }
  if (uVar21 != uVar18) goto LAB_10a5e1e44;
  goto LAB_10a5e1d18;
}



/* Entry: 10a5e1ec8; end: 10a5e23ab;  */

void FUN_10a5e1ec8(ulong *param_1,long param_2,ulong *param_3,long param_4,long param_5,
                  long *param_6)

{
  char cVar1;
  long *plVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong *puVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  long lStack_a0;
  ulong *puStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  lStack_70 = 0;
  plStack_68 = (long *)0x0;
  func_0x00010a04a780(&lStack_70,param_4 + 0x48);
  if (lStack_70 == 0) {
    lVar5 = *(long *)(param_5 + 0x2a8) - *(long *)(param_5 + 0x2a0);
    if (lVar5 != 0) {
      uVar4 = 0;
      lVar14 = 0;
      lVar7 = 0;
      do {
        uVar4 = uVar4 + 0x9e3779b9;
        uVar4 = lVar7 + 0x9e3779b9 + uVar4 * 0x40 + (uVar4 >> 2) ^ uVar4;
        lVar16 = *(long *)(*(long *)(param_5 + 0x2a0) + lVar7 * 0x10);
        puVar12 = *(ulong **)(lVar16 + 0x228);
        lVar16 = *(long *)(lVar16 + 0x230) - (long)puVar12;
        if (lVar16 != 0) {
          lVar16 = lVar16 >> 4;
          lVar8 = lVar16;
          do {
            uVar9 = *puVar12;
            uVar10 = ((ulong)(uint)((int)uVar9 << 3) + 8 ^ uVar9 >> 0x20) * -0x622015f714c7d297;
            uVar9 = (uVar9 >> 0x20 ^ uVar10 >> 0x2f ^ uVar10) * -0x622015f714c7d297;
            uVar4 = uVar4 + 0x9e3779b9;
            uVar4 = uVar4 * 0x40 + 0x9e3779b9 + (uVar4 >> 2) +
                    (uVar9 ^ uVar9 >> 0x2f) * -0x622015f714c7d297 ^ uVar4;
            lVar8 = lVar8 + -1;
            puVar12 = puVar12 + 2;
          } while (lVar8 != 0);
          lVar14 = lVar14 + lVar16;
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 != lVar5 >> 4);
      goto LAB_10a5e205c;
    }
    uVar4 = 0;
  }
  else {
    uVar4 = 0x28cd94bfde;
    lVar14 = *(long *)(lStack_70 + 0x230) - (long)*(ulong **)(lStack_70 + 0x228);
    if (lVar14 != 0) {
      lVar14 = lVar14 >> 4;
      puVar12 = *(ulong **)(lStack_70 + 0x228);
      lVar5 = lVar14;
      do {
        uVar9 = *puVar12;
        uVar10 = ((ulong)(uint)((int)uVar9 << 3) + 8 ^ uVar9 >> 0x20) * -0x622015f714c7d297;
        uVar9 = (uVar9 >> 0x20 ^ uVar10 >> 0x2f ^ uVar10) * -0x622015f714c7d297;
        uVar4 = uVar4 + 0x9e3779b9;
        uVar4 = uVar4 * 0x40 + 0x9e3779b9 + (uVar4 >> 2) +
                (uVar9 ^ uVar9 >> 0x2f) * -0x622015f714c7d297 ^ uVar4;
        lVar5 = lVar5 + -1;
        puVar12 = puVar12 + 2;
      } while (lVar5 != 0);
      goto LAB_10a5e205c;
    }
  }
  lVar14 = 0;
LAB_10a5e205c:
  lVar7 = **(long **)(param_2 + 0x188);
  uVar4 = uVar4 + 0x9e3779b9;
  lVar5 = *(long *)(param_5 + 0x2f0);
  plVar15 = *(long **)(param_5 + 0x2f8);
  if (plVar15 != (long *)0x0) {
    plVar6 = plVar15 + 1;
    do {
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uVar4 = uVar4 * 0x40 + 0x9e3779b9 + (uVar4 >> 2) + lVar7 ^ uVar4;
  if (lVar5 != 0) {
    uVar4 = uVar4 + 0x9e3779b9;
    uVar4 = uVar4 * 0x40 + 0x9e3779b9 + (uVar4 >> 2) + **(long **)(lVar5 + 0x188) ^ uVar4;
  }
  if (plVar15 != (long *)0x0) {
    plVar6 = plVar15 + 1;
    do {
      lVar5 = *plVar6;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
  }
  if (uVar4 != *param_3) {
    *param_3 = uVar4;
    plVar15 = *(long **)(param_2 + 0x198);
    if (plVar15 == (long *)(param_2 + 0x1a0)) {
      lVar16 = 0;
      lVar7 = 0;
      lVar5 = 0;
    }
    else {
      lVar5 = 0;
      lVar7 = 0;
      lVar16 = 0;
      do {
        plVar6 = *(long **)(plVar15[5] + 0x188);
        while (plVar6 != (long *)(plVar15[5] + 400)) {
          plVar2 = (long *)plVar6[1];
          plVar13 = plVar6;
          if ((long *)plVar6[1] == (long *)0x0) {
            do {
              plVar11 = (long *)plVar13[2];
              bVar3 = (long *)*plVar11 != plVar13;
              plVar13 = plVar11;
            } while (bVar3);
          }
          else {
            do {
              plVar11 = plVar2;
              plVar2 = (long *)*plVar11;
            } while ((long *)*plVar11 != (long *)0x0);
          }
          lVar8 = plVar6[5];
          lVar5 = *(long *)(lVar8 + 0x198) + lVar5;
          lVar7 = *(long *)(lVar8 + 0x1b0) + lVar7;
          lVar16 = *(long *)(lVar8 + 0x1c8) + lVar16;
          plVar6 = plVar11;
        }
        plVar6 = plVar15;
        plVar2 = (long *)plVar15[1];
        if ((long *)plVar15[1] == (long *)0x0) {
          do {
            plVar15 = (long *)plVar6[2];
            bVar3 = (long *)*plVar15 != plVar6;
            plVar6 = plVar15;
          } while (bVar3);
        }
        else {
          do {
            plVar15 = plVar2;
            plVar2 = (long *)*plVar15;
          } while ((long *)*plVar15 != (long *)0x0);
        }
      } while (plVar15 != (long *)(param_2 + 0x1a0));
    }
    lStack_78 = param_6[1];
    lStack_80 = *param_6;
    if (lStack_78 != 0) {
      lVar8 = lStack_78 * 0x30;
      plVar15 = (long *)(lStack_80 + 0x28);
      do {
        lVar5 = plVar15[-4] + lVar5;
        lVar7 = plVar15[-2] + lVar7;
        lVar16 = *plVar15 + lVar16;
        lVar8 = lVar8 + -0x30;
        plVar15 = plVar15 + 6;
      } while (lVar8 != 0);
    }
    uVar4 = param_3[1];
    uVar9 = param_3[2];
    while (uVar9 != uVar4) {
      uVar9 = uVar9 - 0x10;
      func_0x00010a0daa60();
    }
    param_3[2] = uVar4;
    FUN_10a5e9854(param_3 + 1,lVar5);
    uVar4 = param_3[4];
    uVar9 = param_3[5];
    while (uVar9 != uVar4) {
      uVar9 = uVar9 - 0x10;
      FUN_10a5e96a0();
    }
    param_3[5] = uVar4;
    func_0x00010a5e98f0(param_3 + 4,lVar7);
    uVar4 = param_3[7];
    uVar9 = param_3[8];
    while (uVar9 != uVar4) {
      uVar9 = uVar9 - 0x10;
      func_0x00010a5e5e98();
    }
    param_3[8] = uVar4;
    func_0x00010a5e998c(param_3 + 7,lVar16);
    param_3[0xb] = param_3[10];
    FUN_10a5e9a28(param_3 + 10,lVar14);
    uStack_88 = *(undefined8 *)(param_2 + 0x198);
    puStack_a8 = &uStack_88;
    uStack_b0 = 0;
    plStack_90 = &lStack_80;
    lStack_a0 = param_2;
    puStack_98 = param_3;
    if (lStack_70 == 0) {
      lVar5 = *(long *)(param_5 + 0x2a0);
      if (*(long *)(param_5 + 0x2a8) != lVar5) {
        lVar7 = 0;
        uVar4 = 0;
        do {
          FUN_10a5ea27c(&uStack_b0,uVar4,lVar5 + lVar7);
          uVar4 = uVar4 + 1;
          lVar5 = *(long *)(param_5 + 0x2a0);
          lVar7 = lVar7 + 0x10;
        } while (uVar4 < (ulong)(*(long *)(param_5 + 0x2a8) - lVar5 >> 4));
      }
    }
    else {
      FUN_10a5ea27c(&uStack_b0,0,&lStack_70);
    }
  }
  plVar15 = plStack_68;
  uVar4 = param_3[10];
  uVar9 = param_3[0xb];
  *param_1 = uVar4;
  param_1[1] = ((long)(uVar9 - uVar4) >> 4) * -0x5555555555555555;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar5 = *plVar6;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
  }
  return;
}



/* Entry: 10a5e23ac; end: 10a5e2453;  */

long * FUN_10a5e23ac(long param_1,long *param_2,ulong *param_3)

{
  long *plVar1;
  long *plVar2;
  
  if (*param_3 < (ulong)param_2[1]) {
    plVar2 = (long *)(*param_2 + *param_3 * 0x10);
    plVar1 = (long *)*plVar2;
    (**(code **)(*plVar1 + 0x30))();
    if (plVar1[3] == *(long *)(param_1 + 0x18)) {
      *param_3 = *param_3 + 1;
      plVar1 = (long *)*plVar2;
      (**(code **)(*plVar1 + 0x28))();
      if ((uint)*(ushort *)(param_1 + 0x38) == ((uint)plVar1 & 0xffff)) {
        plVar2 = (long *)*plVar2;
                    /* WARNING: Could not recover jumptable at 0x00010a5e243c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x18))();
        return plVar2;
      }
    }
  }
  return *(long **)(param_1 + 0x30);
}



/* Entry: 10a5e2454; end: 10a5e24d7;  */

uint FUN_10a5e2454(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  
  if (param_2 == 0) {
    uVar2 = 0xffff;
  }
  else {
    ___dynamic_cast(param_2,&PTR_DAT_110bb3788,&PTR_DAT_110bb2dc8,0);
    if (param_2 != 0) {
      lVar1 = *(long *)(param_1 + 0x1c8) - *(long *)(param_1 + 0x1c0);
      if (lVar1 != 0) {
        lVar3 = 0;
        plVar4 = (long *)(*(long *)(param_1 + 0x1c0) + 8);
        do {
          if (*plVar4 == param_2) goto LAB_10a5e24c0;
          lVar3 = lVar3 + 1;
          plVar4 = plVar4 + 2;
        } while (lVar1 >> 4 != lVar3);
      }
    }
    lVar3 = 0xffff;
LAB_10a5e24c0:
    uVar2 = (uint)lVar3;
  }
  return uVar2 & 0xffff;
}



/* Entry: 10a5e24d8; end: 10a5e2523;  */

void FUN_10a5e24d8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x28) {
    if (*(long *)(lVar2 + -0x18) != 0) {
      *(long *)(lVar2 + -0x10) = *(long *)(lVar2 + -0x18);
      __ZdlPv();
    }
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a5e2524; end: 10a5e2863;  */

undefined2 FUN_10a5e2524(ulong param_1,long *param_2,ulong *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong unaff_x27;
  undefined8 uVar15;
  
  if ((param_1 == 0) ||
     (uVar2 = *(long *)(param_1 + 0x230) - *(long *)(param_1 + 0x228), uVar2 == 0)) {
    return 0xffff;
  }
  uVar12 = *param_3;
  uVar7 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ param_1 >> 0x20) * -0x622015f714c7d297;
  uVar7 = (param_1 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
  uVar14 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
  uVar7 = param_2[1];
  if (uVar7 != 0) {
    uVar5 = uVar7 - 1;
    if ((uVar7 & uVar5) == 0) {
      unaff_x27 = uVar5 & uVar14;
    }
    else {
      unaff_x27 = uVar14;
      if (uVar7 <= uVar14) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = uVar14 / uVar7;
        }
        unaff_x27 = uVar14 - uVar9 * uVar7;
      }
    }
    puVar8 = *(undefined8 **)(*param_2 + unaff_x27 * 8);
    if (puVar8 != (undefined8 *)0x0) {
      for (plVar11 = (long *)*puVar8; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
        uVar9 = plVar11[1];
        if (uVar9 == uVar14) {
          if (plVar11[2] == param_1) goto LAB_10a5e282c;
        }
        else {
          if ((uVar7 & uVar5) == 0) {
            uVar9 = uVar9 & uVar5;
          }
          else if (uVar7 <= uVar9) {
            uVar3 = 0;
            if (uVar7 != 0) {
              uVar3 = uVar9 / uVar7;
            }
            uVar9 = uVar9 - uVar3 * uVar7;
          }
          if (uVar9 != unaff_x27) break;
        }
      }
    }
  }
  plVar11 = (long *)0x20;
  __Znwm();
  *plVar11 = 0;
  plVar11[1] = uVar14;
  plVar11[2] = param_1;
  *(short *)(plVar11 + 3) = (short)uVar12;
  if ((uVar7 == 0) || (*(float *)(param_2 + 4) * (float)uVar7 < (float)(param_2[3] + 1))) {
    uVar5 = 1;
    if (2 < uVar7) {
      uVar5 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar5 = uVar5 | uVar7 << 1;
    uVar7 = (ulong)((float)(param_2[3] + 1) / *(float *)(param_2 + 4));
    if (uVar5 <= uVar7) {
      uVar5 = uVar7;
    }
    func_0x00010a5e7ecc(param_2,uVar5);
    uVar7 = param_2[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x27 = uVar7 - 1 & uVar14;
    }
    else {
      unaff_x27 = uVar14;
      if (uVar7 <= uVar14) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = uVar14 / uVar7;
        }
        unaff_x27 = uVar14 - uVar5 * uVar7;
      }
    }
  }
  lVar10 = *param_2;
  plVar6 = *(long **)(lVar10 + unaff_x27 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_2 + 2;
    *plVar11 = *plVar6;
    *plVar6 = (long)plVar11;
    *(long **)(lVar10 + unaff_x27 * 8) = plVar6;
    if (*plVar11 == 0) goto LAB_10a5e2748;
    uVar14 = *(ulong *)(*plVar11 + 8);
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar14 = uVar14 & uVar7 - 1;
    }
    else if (uVar7 <= uVar14) {
      uVar5 = 0;
      if (uVar7 != 0) {
        uVar5 = uVar14 / uVar7;
      }
      uVar14 = uVar14 - uVar5 * uVar7;
    }
    plVar6 = (long *)(*param_2 + uVar14 * 8);
  }
  else {
    *plVar11 = *plVar6;
  }
  *plVar6 = (long)plVar11;
LAB_10a5e2748:
  param_2[3] = param_2[3] + 1;
  uVar7 = uVar12 + ((long)uVar2 >> 4);
  *param_3 = uVar7;
  if ((ulong)((((long *)param_3[1])[1] - *(long *)param_3[1] >> 3) * 0x51b3bea3677d46cf) < uVar7) {
    FUN_10a5e13e4();
  }
  lVar13 = 0;
  uVar7 = 0;
  lVar10 = uVar12 * 0x178;
  do {
    if (((ulong)(*(long *)(param_1 + 0x230) - *(long *)(param_1 + 0x228) >> 4) <= uVar7) ||
       (lVar1 = *(long *)param_3[1],
       uVar14 = (((long *)param_3[1])[1] - lVar1 >> 3) * 0x51b3bea3677d46cf,
       uVar14 < uVar12 + uVar7 || uVar14 - (uVar12 + uVar7) == 0)) goto LAB_10a5e284c;
    FUN_10a5e001c(lVar1 + lVar10,param_1,*(undefined8 *)(*(long *)(param_1 + 0x228) + lVar13));
    uVar7 = uVar7 + 1;
    lVar10 = lVar10 + 0x178;
    lVar13 = lVar13 + 0x10;
  } while ((long)uVar2 >> 4 != uVar7);
  lVar10 = *(long *)param_3[1];
  uVar7 = (((long *)param_3[1])[1] - lVar10 >> 3) * 0x51b3bea3677d46cf;
  if (uVar12 <= uVar7 && uVar7 - uVar12 != 0) {
    lVar10 = lVar10 + uVar12 * 0x178;
    *(char *)(lVar10 + 0x1a) = (char)(uVar2 >> 4);
    uVar15 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(lVar10 + 0x170) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(lVar10 + 0x168) = uVar15;
LAB_10a5e282c:
    return (short)plVar11[3];
  }
LAB_10a5e284c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a5e2850);
  (*pcVar4)();
}



/* Entry: 10a5e2864; end: 10a5e298f;  */

void FUN_10a5e2864(long param_1,long param_2)

{
  undefined8 ***pppuVar1;
  long lVar2;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 **ppuStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 **ppuStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  if (((*(byte *)(param_1 + 0x338) & 1) != 0) && ((*(byte *)(param_2 + 0x19) & 1) == 0)) {
    func_0x000107c2b054(&ppuStack_40,&UNK_10f667315);
    lVar2 = *(long *)(param_2 + 0x1a8);
    if (lVar2 != 0) {
      ___dynamic_cast(lVar2,&PTR_DAT_110c07c30,&PTR_DAT_110bd9df0,0);
      if ((*(long **)(lVar2 + 0x2a0) != *(long **)(lVar2 + 0x2a8)) &&
         (lVar2 = **(long **)(lVar2 + 0x2a0), lVar2 != 0)) {
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (&ppuStack_58,&UNK_10f667352,lVar2 + 0x58);
        if (lStack_30 < 0) {
          __ZdlPv(ppuStack_40);
        }
        uStack_38 = uStack_50;
        ppuStack_40 = ppuStack_58;
        lStack_30 = lStack_48;
      }
    }
    if ((bRam000000011330a9e8 & 1) != 0) {
      pppuVar1 = (undefined8 ***)ppuStack_40;
      if (-1 < lStack_30) {
        pppuVar1 = &ppuStack_40;
      }
      func_0x00010ae06f08(0,1,&UNK_10f66735a,&UNK_10f66738f,0x516,&UNK_10f6673f5,in_x6,in_x7,
                          pppuVar1);
    }
    if (lStack_30 < 0) {
      __ZdlPv(ppuStack_40);
    }
  }
  return;
}



/* Entry: 10a5e2990; end: 10a5e2aab;  */

void FUN_10a5e2990(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  FUN_10a5e2aac(param_1,param_2 + 8);
  lVar6 = 0;
  uVar5 = 0;
  while( true ) {
    if ((ulong)((*(long *)(param_2 + 0x208) - *(long *)(param_2 + 0x200) >> 3) * 0x6fb586fb586fb587
               + (*(long *)(param_2 + 0x770) - *(long *)(param_2 + 0x768) >> 3) * 0x6fb586fb586fb587
               ) <= uVar5) {
      return;
    }
    lVar1 = *(long *)(param_1 + 0x18);
    uVar4 = (*(long *)(param_1 + 0x20) - lVar1 >> 4) * -0x1111111111111111;
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) break;
    lVar3 = param_2;
    func_0x00010a01e9ec(param_2,uVar5);
    if (lVar1 + lVar6 + 0xb8 != lVar3 + 0x138) {
      FUN_10a5e8d74();
    }
    lVar1 = *(long *)(param_1 + 0x18);
    uVar4 = (*(long *)(param_1 + 0x20) - lVar1 >> 4) * -0x1111111111111111;
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) break;
    lVar3 = param_2;
    func_0x00010a01e9ec(param_2,uVar5);
    FUN_10a5e2b64(lVar1 + lVar6,lVar3);
    uVar5 = uVar5 + 1;
    lVar6 = lVar6 + 0xf0;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a5e2aac);
  (*pcVar2)();
}



/* Entry: 10a5e2aac; end: 10a5e2b63;  */

void FUN_10a5e2aac(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x48);
  FUN_10a5e4d70(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = 0;
  uVar5 = *(ulong *)(param_2 + 0x1f0);
  FUN_10a5e13b4((undefined8 *)(param_1 + 0x48),uVar5);
  if ((ulong)((*(long *)(param_1 + 0x68) - *(long *)(param_1 + 0x60) >> 3) * 0x51b3bea3677d46cf) <
      uVar5) {
    FUN_10a021d3c((long *)(param_1 + 0x60),uVar5);
  }
  else if (uVar5 == 0) {
    return;
  }
  uVar4 = 0;
  lVar1 = *(long *)(param_1 + 0x48);
  lVar2 = *(long *)(param_1 + 0x50);
  do {
    if (lVar2 - lVar1 >> 1 == uVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a5e2b64);
      (*pcVar3)();
    }
    *(short *)(lVar1 + uVar4 * 2) = (short)uVar4;
    uVar4 = uVar4 + 1;
  } while (uVar5 != uVar4);
  return;
}



/* Entry: 10a5e2b64; end: 10a5e2bb7;  */

void FUN_10a5e2b64(long param_1,long param_2)

{
  if (param_1 + 0xd0 != param_2 + 0x150) {
    func_0x00010a5e8e94();
  }
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0x168);
  return;
}



/* Entry: 10a5e2bb8; end: 10a5e2c2f;  */

undefined8 * FUN_10a5e2bb8(undefined8 *param_1,undefined8 param_2)

{
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  FUN_10a5e8714(param_1 + 0x17);
  FUN_10a5e2c30(param_1,param_2);
  return param_1;
}



/* Entry: 10a5e2c30; end: 10a5e2cbf;  */

void FUN_10a5e2c30(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar2 = 0;
  puVar3 = (undefined8 *)&UNK_110baa618;
  do {
    if (*(long *)(param_1 + lVar2) != 0) {
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)();
      }
      *(undefined8 *)(param_1 + lVar2) = 0;
    }
    lVar2 = lVar2 + 8;
    puVar3 = puVar3 + 0xf;
  } while (lVar2 != 0xb8);
  lVar2 = 0;
  puVar3 = (undefined8 *)&UNK_110baa610;
  do {
    if ((code *)*puVar3 == (code *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = param_2;
      (*(code *)*puVar3)();
    }
    *(undefined8 *)(param_1 + lVar2) = uVar1;
    lVar2 = lVar2 + 8;
    puVar3 = puVar3 + 0xf;
  } while (lVar2 != 0xb8);
  return;
}



/* Entry: 10a5e2cc0; end: 10a5e2ceb;  */

long FUN_10a5e2cc0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  FUN_10a5d2ad8();
  FUN_10a5e8b68(param_1 + 0xb8);
  lVar1 = 0;
  puVar2 = (undefined8 *)&UNK_110baa618;
  do {
    if (*(long *)(param_1 + lVar1) != 0) {
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)();
      }
      *(undefined8 *)(param_1 + lVar1) = 0;
    }
    lVar1 = lVar1 + 8;
    puVar2 = puVar2 + 0xf;
  } while (lVar1 != 0xb8);
  return param_1;
}



/* Entry: 10a5e2cec; end: 10a5e334b;  */

void FUN_10a5e2cec(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4,
                  long *param_5,long param_6,ulong *param_7,ulong *param_8)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined1 uVar3;
  bool bVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  long *plVar20;
  undefined8 *puVar21;
  long lVar22;
  int iVar23;
  long lVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  ulong uVar29;
  undefined8 uVar30;
  undefined4 uVar31;
  float fVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined4 uVar35;
  float fVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined4 uVar39;
  float fVar40;
  undefined8 uVar41;
  float fVar42;
  float fVar44;
  ulong uVar45;
  ulong uVar46;
  float fVar47;
  float fVar48;
  ulong uVar49;
  byte abStack_c0 [4];
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  ulong uVar43;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar22 = param_5[0x2d];
  *param_4 = (char)param_6;
  plVar9 = param_5;
  plVar10 = param_5;
  lVar11 = param_6;
  puVar13 = param_7;
  puVar14 = param_8;
  (**(code **)(*param_5 + 0x108))();
  param_4[1] = (char)plVar9;
  *(short *)(param_4 + 2) = (short)param_7;
  *(undefined4 *)(param_4 + 0x18) = 0;
  lVar24 = param_5[8];
  *(long *)(param_4 + 0x10) = param_5[9];
  *(long *)(param_4 + 8) = lVar24;
  *(short *)(param_4 + 0x28) = (short)param_8;
  lVar24 = *(long *)(lVar22 + 0x130);
  *(undefined8 *)(param_4 + 0x38) = *(undefined8 *)(lVar22 + 0x138);
  *(long *)(param_4 + 0x30) = lVar24;
  plVar9 = param_5;
  (**(code **)(*param_5 + 0x128))();
  uVar25 = *(undefined4 *)((long)param_5 + 0x214);
  *(int *)(param_4 + 0x40) = (int)plVar9;
  *(undefined4 *)(param_4 + 0x44) = uVar25;
  if (((char)param_5[0x41] == '\x01') &&
     ((int)param_5[0x3e] == *(int *)(*(long *)(param_5[0x2e] + 0x850) + 0x30))) {
    *(uint *)(param_4 + 0x18) = *(uint *)(param_4 + 0x18) | 0x8000;
    lVar22 = param_5[0x3f];
    lVar24 = param_5[0x3e];
    *(long *)(param_4 + 0x58) = param_5[0x40];
    *(long *)(param_4 + 0x50) = lVar22;
    *(long *)(param_4 + 0x48) = lVar24;
  }
  uVar25 = (undefined4)lVar24;
  (**(code **)(*param_5 + 0x100))(param_5);
  *(undefined4 *)(param_4 + 0x60) = uVar25;
  *(undefined4 *)(param_4 + 100) = param_2;
  *(undefined4 *)(param_4 + 0x68) = param_3;
  lVar22 = param_5[0x2f];
  if ((*(byte *)(lVar22 + 0x2a) & 0x24) != 0) {
    FUN_10a3e8fd4(lVar22);
  }
  uVar30 = *(undefined8 *)(lVar22 + 200);
  uVar28 = *(undefined8 *)(lVar22 + 0xc0);
  uVar34 = *(undefined8 *)(lVar22 + 0xd8);
  uVar33 = *(undefined8 *)(lVar22 + 0xd0);
  uVar38 = *(undefined8 *)(lVar22 + 0xe8);
  uVar37 = *(undefined8 *)(lVar22 + 0xe0);
  uVar41 = *(undefined8 *)(lVar22 + 0xf0);
  *(undefined8 *)(param_4 + 0xa4) = *(undefined8 *)(lVar22 + 0xf8);
  *(undefined8 *)(param_4 + 0x9c) = uVar41;
  *(undefined8 *)(param_4 + 0x94) = uVar38;
  *(undefined8 *)(param_4 + 0x8c) = uVar37;
  *(undefined8 *)(param_4 + 0x84) = uVar34;
  *(undefined8 *)(param_4 + 0x7c) = uVar33;
  *(undefined8 *)(param_4 + 0x74) = uVar30;
  *(undefined8 *)(param_4 + 0x6c) = uVar28;
  *(long **)(param_4 + 0x1a8) = param_5;
  *(undefined8 *)(param_4 + 0x128) = 0;
  *(undefined8 *)(param_4 + 0x130) = 0;
  plVar9 = param_5;
  (**(code **)(*param_5 + 0x110))();
  uVar39 = (undefined4)uVar41;
  uVar35 = (undefined4)uVar37;
  uVar31 = (undefined4)uVar33;
  uVar25 = (undefined4)uVar28;
  *(uint *)(param_4 + 0x18) = *(uint *)(param_4 + 0x18) & 0xfffffffe | (uint)plVar9;
  plVar9 = param_5;
  (**(code **)(*param_5 + 0x120))();
  uVar15 = 2;
  if ((int)plVar9 == 0) {
    uVar15 = 0;
  }
  *(uint *)(param_4 + 0x18) = *(uint *)(param_4 + 0x18) & 0xfffffffd | uVar15;
  plVar9 = param_5;
  (**(code **)(*param_5 + 0x118))();
  uVar18 = *(uint *)(param_4 + 0x18);
  uVar15 = 4;
  if ((int)plVar9 == 0) {
    uVar15 = 0;
  }
  *(uint *)(param_4 + 0x18) = uVar18 & 0xfffffffb | uVar15;
  plVar9 = param_5;
  if ((int)param_6 == 2) {
    *(uint *)(param_4 + 0x18) =
         uVar18 & 0xfffffc00 | uVar18 & 0x1fb | uVar15 | (*(byte *)((long)param_5 + 0x25c) & 1) << 9
    ;
    *(undefined2 *)(param_4 + 0x1c) = 0;
    uVar15 = *(uint *)(param_5 + 0x49);
    param_4[0x1e] =
         (byte)(uVar15 >> 7) & 0xfe | (byte)uVar15 |
         (byte)(uVar15 >> 0xe) & 0xfc | (byte)(uVar15 >> 0x15) & 0xf8;
    *(undefined2 *)(param_4 + 0x24) = 0x102;
    param_4[0x26] = 1;
    *(undefined4 *)(param_4 + 0xac) = 0x3f800000;
    *(undefined8 *)(param_4 + 0xb0) = 0;
    *(undefined8 *)(param_4 + 0xb8) = 0;
    *(undefined4 *)(param_4 + 0xc0) = 0x3f800000;
    *(undefined8 *)(param_4 + 0xc4) = 0;
    *(undefined8 *)(param_4 + 0xcc) = 0;
    *(undefined4 *)(param_4 + 0xd4) = 0x3f800000;
    *(undefined8 *)(param_4 + 0xd8) = 0;
    *(undefined8 *)(param_4 + 0xe0) = 0;
    *(undefined4 *)(param_4 + 0xe8) = 0x3f800000;
    FUN_10a495f9c();
    *(undefined4 *)(param_4 + 0xec) = uVar25;
    *(undefined4 *)(param_4 + 0xf0) = uVar31;
    *(undefined4 *)(param_4 + 0xf4) = uVar35;
    *(undefined4 *)(param_4 + 0xf8) = uVar39;
    *(int *)(param_4 + 0xfc) = (int)param_5[0x4c];
    param_4[0x100] = (char)*(undefined4 *)((long)param_5 + 0x264);
    param_4[0x101] = (char)(int)param_5[0x4d];
    *(undefined4 *)(param_4 + 0x104) = 0;
    *(undefined8 *)(param_4 + 0x118) = 0xff7fffffff7fffff;
    *(undefined8 *)(param_4 + 0x110) = 0xff7fffff00000000;
    *(undefined8 *)(param_4 + 0x108) = 0;
    *(undefined8 *)(param_4 + 0x140) = *(undefined8 *)(param_4 + 0x138);
    *(undefined8 *)(param_4 + 0x158) = *(undefined8 *)(param_4 + 0x150);
    *(undefined8 *)(param_4 + 0x178) = *(undefined8 *)(param_4 + 0x170);
    *(undefined8 *)(param_4 + 400) = *(undefined8 *)(param_4 + 0x188);
    *(undefined8 *)(param_4 + 0x1a0) = 0;
    *(undefined8 *)(param_4 + 0x1b0) = 0;
  }
  else {
    if (param_5[0x4c] == 0) {
      plVar20 = (long *)0x0;
LAB_10a5e2fd4:
      lVar22 = 0;
    }
    else {
      plVar20 = *(long **)(param_5[0x4c] + 0xe0);
      if (plVar20 == (long *)0x0) goto LAB_10a5e2fd4;
      plVar6 = plVar20;
      (**(code **)(*plVar20 + 0x90))();
      lVar22 = *plVar6;
      (**(code **)(*param_5 + 0x188))(param_5);
      if (lVar22 != 0) {
        uVar15 = *(uint *)(lVar22 + 0xf0);
        if (uVar15 != 0) {
          iVar16 = 0;
          if ((ulong)uVar15 != 0) {
            iVar16 = (int)((ulong)(*(long *)(lVar22 + 0x18) - *(long *)(lVar22 + 0x10)) /
                          (ulong)uVar15);
          }
          if (iVar16 != 0) goto LAB_10a5e2fd8;
        }
        goto LAB_10a5e2fd4;
      }
    }
LAB_10a5e2fd8:
    plVar6 = param_5;
    FUN_10a425ccc();
    plVar7 = param_5;
    FUN_10a4247b0();
    FUN_10a410af8();
    if (lVar22 == 0) {
LAB_10a5e3048:
      bVar4 = false;
    }
    else {
      uVar15 = *(uint *)(lVar22 + 0x130);
      if (uVar15 == 0xffffffff) {
LAB_10a5e3050:
        bVar4 = false;
      }
      else {
        uVar46 = (*(long *)(lVar22 + 0x100) - *(long *)(lVar22 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
        if (uVar46 < uVar15 || uVar46 - uVar15 == 0) goto LAB_10a5e3344;
        if (*(long *)(lVar22 + 0xf8) == 0) goto LAB_10a5e3050;
        bVar4 = *(long *)(lVar22 + 0x88) != *(long *)(lVar22 + 0x90);
      }
      if (plVar6 == (long *)0x0) goto LAB_10a5e3048;
      bVar4 = (bool)((*(ushort *)(plVar6 + 0x30) & 0x12) == 0 & bVar4);
    }
    plVar8 = param_5;
    FUN_10a424820();
    if (plVar7 == (long *)0x0) {
      bVar5 = false;
    }
    else {
      bVar5 = (*(ushort *)(plVar7 + 0x30) & 0x17) == 0;
    }
    FUN_10a425f94(abStack_c0,param_5);
    iVar16 = 0;
    lVar24 = param_5[0x60];
    bVar2 = *(byte *)(param_5 + 0x97);
    iVar23 = (int)plVar8;
    uVar15 = 8;
    if (iVar23 == 0) {
      uVar15 = 0;
    }
    if (iVar23 != 0) {
      iVar16 = (uint)*(byte *)(plVar9 + 7) << 4;
    }
    uVar18 = 0x20;
    if (!bVar4) {
      uVar18 = 0;
    }
    uVar19 = 0x40;
    if (!bVar5) {
      uVar19 = 0;
    }
    uVar17 = 0x80;
    if ((bVar2 & 0xfd) != 1 || lVar22 == 0) {
      uVar17 = 0;
    }
    *(uint *)(param_4 + 0x18) =
         (uVar19 | uVar18 | *(uint *)(param_4 + 0x18) & 0xfffffe07 | uVar15 | uVar17) + iVar16 +
         (uint)abStack_c0[0] * 0x100;
    param_4[0x1c] = bVar2;
    param_4[0x1d] = *(undefined1 *)((long)param_5 + 0x4b9);
    param_4[0x1e] = 0;
    plVar8 = param_5;
    func_0x00010a777f8c();
    *(int *)(param_4 + 0x20) = (int)plVar8;
    uVar3 = *(undefined1 *)((long)param_5 + 0x30a);
    *(short *)(param_4 + 0x24) = (short)param_5[0x61];
    param_4[0x26] = uVar3;
    if (lVar24 == 0) {
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      uVar25 = 0x3f800000;
      uVar31 = 0x3f800000;
      uVar35 = 0x3f800000;
      uVar39 = 0x3f800000;
      uStack_a0 = 0;
      uStack_98 = 0;
    }
    else {
      if ((*(byte *)(lVar24 + 0x2a) & 0x24) != 0) {
        FUN_10a3e8fd4(lVar24);
      }
      uVar25 = *(undefined4 *)(lVar24 + 0xc0);
      uStack_78 = *(undefined8 *)(lVar24 + 0xcc);
      uStack_80 = *(undefined8 *)(lVar24 + 0xc4);
      uVar31 = *(undefined4 *)(lVar24 + 0xd4);
      uStack_88 = *(undefined8 *)(lVar24 + 0xe0);
      uStack_90 = *(undefined8 *)(lVar24 + 0xd8);
      uVar35 = *(undefined4 *)(lVar24 + 0xe8);
      uStack_98 = *(undefined8 *)(lVar24 + 0xf4);
      uStack_a0 = *(undefined8 *)(lVar24 + 0xec);
      uVar39 = *(undefined4 *)(lVar24 + 0xfc);
    }
    *(undefined4 *)(param_4 + 0xac) = uVar25;
    *(undefined8 *)(param_4 + 0xb8) = uStack_78;
    *(undefined8 *)(param_4 + 0xb0) = uStack_80;
    *(undefined4 *)(param_4 + 0xc0) = uVar31;
    *(undefined8 *)(param_4 + 0xcc) = uStack_88;
    *(undefined8 *)(param_4 + 0xc4) = uStack_90;
    *(undefined4 *)(param_4 + 0xd4) = uVar35;
    *(undefined8 *)(param_4 + 0xe0) = uStack_98;
    *(undefined8 *)(param_4 + 0xd8) = uStack_a0;
    *(undefined4 *)(param_4 + 0xe8) = uVar39;
    uVar28 = uStack_a0;
    FUN_10a4213b8(param_5);
    *(int *)(param_4 + 0xec) = (int)uVar28;
    *(undefined4 *)(param_4 + 0xf0) = uVar31;
    *(undefined4 *)(param_4 + 0xf4) = uVar35;
    *(undefined4 *)(param_4 + 0xf8) = uVar39;
    *(undefined4 *)(param_4 + 0xfc) = *(undefined4 *)((long)param_5 + 0x4cc);
    *(undefined4 *)(param_4 + 0x104) = uStack_bc;
    *(undefined8 *)(param_4 + 0x118) = uStack_a8;
    *(undefined8 *)(param_4 + 0x110) = uStack_b0;
    *(undefined8 *)(param_4 + 0x108) = uStack_b8;
    lVar24 = 0;
    if (bVar5) {
      lVar24 = plVar7[0x3e];
    }
    *(long *)(param_4 + 0x120) = lVar24;
    *(undefined8 *)(param_4 + 0x140) = *(undefined8 *)(param_4 + 0x138);
    *(undefined8 *)(param_4 + 0x158) = *(undefined8 *)(param_4 + 0x150);
    *(undefined8 *)(param_4 + 0x178) = *(undefined8 *)(param_4 + 0x170);
    if (iVar23 != 0) {
      plVar10 = (long *)(param_4 + 0x170);
      if (*(int *)(*(long *)(param_5[0x2e] + 0xa20) + 0x18) < 0x94) {
        func_0x00010a4292d4(plVar9);
      }
      else {
        func_0x00010a429208(plVar9);
      }
    }
    *(undefined8 *)(param_4 + 400) = *(undefined8 *)(param_4 + 0x188);
    if (bVar4) {
      FUN_10a01066c(param_4 + 0x188,
                    (*(long *)(lVar22 + 0x60) - *(long *)(lVar22 + 0x58) >> 5) * -0x5555555555555555
                   );
      plVar10 = *(long **)(lVar22 + 0x58);
      lVar11 = (*(long *)(lVar22 + 0x60) - (long)plVar10 >> 5) * -0x5555555555555555;
      puVar13 = *(ulong **)(param_4 + 0x188);
      FUN_10ab51fac(plVar6,plVar10,lVar11);
    }
    *(long **)(param_4 + 0x1a0) = plVar20;
    FUN_10a42671c();
    *(long **)(param_4 + 0x1b0) = param_5;
    plVar9 = *(long **)(param_4 + 0x1a8);
    if (plVar9 != (long *)0x0) {
      plVar10 = (long *)0x240ea0ea4778e8cd;
      (**(code **)(*plVar9 + 0xf8))();
      if (plVar9 != (long *)0x0) {
        *(uint *)(param_4 + 0x18) =
             (uint)*(byte *)((long)plVar9 + 0x3a1) << 10 |
             (uint)*(byte *)((long)plVar9 + 0x461) << 0xb | *(uint *)(param_4 + 0x18) & 0xffffc3ff |
             (uint)*(byte *)((long)plVar9 + 0x411) << 0xc | (uint)*(byte *)(plVar9 + 0x96) << 0xd;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
LAB_10a5e3344:
  FUN_10ab725fc();
  __Unwind_Resume();
  puVar21 = (undefined8 *)plVar9[8];
  puVar1 = (undefined8 *)plVar9[9];
  if (puVar21 == puVar1) {
    uVar46 = 0;
    fVar47 = 0.0;
    fVar48 = 0.0;
    uVar49 = 0;
  }
  else {
    uVar46 = 0;
    fVar48 = 0.0;
    fVar47 = 0.0;
    uVar49 = 0;
    do {
      lVar22 = (long)*(char *)((long)puVar21 + 0x17);
      puVar12 = puVar21;
      if (lVar22 < 0) {
        lVar22 = puVar21[1];
        puVar12 = (undefined8 *)*puVar21;
      }
      plVar9 = plVar10;
      func_0x00010a42939c(plVar10,lVar11,puVar12,lVar22);
      fVar36 = fVar47;
      if (plVar9 != (long *)0x0) {
        fVar26 = *(float *)(plVar9 + 2);
        fVar32 = fVar26 * *(float *)((long)puVar21 + 0x24);
        fVar36 = fVar26 * *(float *)(puVar21 + 6);
        fVar40 = fVar36;
        if (fVar32 <= fVar36) {
          fVar40 = fVar32;
        }
        fVar42 = (float)*(undefined8 *)((long)puVar21 + 0x1c) * fVar26;
        fVar44 = (float)((ulong)*(undefined8 *)((long)puVar21 + 0x1c) >> 0x20) * fVar26;
        uVar43 = CONCAT44(fVar44,fVar42);
        fVar27 = (float)puVar21[5] * fVar26;
        fVar26 = (float)((ulong)puVar21[5] >> 0x20) * fVar26;
        uVar29 = CONCAT44(fVar26,fVar27);
        uVar45 = uVar43 ^ (uVar43 ^ uVar29) &
                          CONCAT44(-(uint)(fVar26 < fVar44),-(uint)(fVar27 < fVar42));
        uVar46 = uVar46 ^ (uVar46 ^ uVar45) &
                          CONCAT44(-(uint)((float)(uVar45 >> 0x20) < (float)(uVar46 >> 0x20)),
                                   -(uint)((float)uVar45 < (float)uVar46));
        if (fVar48 <= fVar40) {
          fVar40 = fVar48;
        }
        fVar48 = fVar40;
        if (fVar36 <= fVar32) {
          fVar36 = fVar32;
        }
        uVar29 = uVar29 ^ (uVar29 ^ uVar43) &
                          ~CONCAT44(-(uint)(fVar44 < fVar26),-(uint)(fVar42 < fVar27));
        uVar49 = uVar49 ^ (uVar49 ^ uVar29) &
                          CONCAT44(-(uint)((float)(uVar49 >> 0x20) < (float)(uVar29 >> 0x20)),
                                   -(uint)((float)uVar49 < (float)uVar29));
        if (fVar36 <= fVar47) {
          fVar36 = fVar47;
        }
      }
      fVar47 = fVar36;
      puVar21 = puVar21 + 9;
    } while (puVar21 != puVar1);
  }
  *puVar13 = uVar46;
  *(float *)(puVar13 + 1) = fVar48;
  *puVar14 = uVar49;
  *(float *)(puVar14 + 1) = fVar47;
  return;
}



/* Entry: 10a5e334c; end: 10a5e3467;  */

void FUN_10a5e334c(long param_1,long param_2,undefined8 param_3,ulong *param_4,ulong *param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar14;
  ulong uVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  ulong uVar19;
  ulong uVar13;
  
  puVar5 = *(undefined8 **)(param_1 + 0x40);
  puVar1 = *(undefined8 **)(param_1 + 0x48);
  if (puVar5 == puVar1) {
    uVar16 = 0;
    fVar17 = 0.0;
    fVar18 = 0.0;
    uVar19 = 0;
  }
  else {
    uVar16 = 0;
    fVar18 = 0.0;
    fVar17 = 0.0;
    uVar19 = 0;
    do {
      lVar4 = (long)*(char *)((long)puVar5 + 0x17);
      puVar3 = puVar5;
      if (lVar4 < 0) {
        lVar4 = puVar5[1];
        puVar3 = (undefined8 *)*puVar5;
      }
      lVar2 = param_2;
      func_0x00010a42939c(param_2,param_3,puVar3,lVar4);
      fVar10 = fVar17;
      if (lVar2 != 0) {
        fVar6 = *(float *)(lVar2 + 0x10);
        fVar9 = fVar6 * *(float *)((long)puVar5 + 0x24);
        fVar10 = fVar6 * *(float *)(puVar5 + 6);
        fVar11 = fVar10;
        if (fVar9 <= fVar10) {
          fVar11 = fVar9;
        }
        fVar12 = (float)*(undefined8 *)((long)puVar5 + 0x1c) * fVar6;
        fVar14 = (float)((ulong)*(undefined8 *)((long)puVar5 + 0x1c) >> 0x20) * fVar6;
        uVar13 = CONCAT44(fVar14,fVar12);
        fVar7 = (float)puVar5[5] * fVar6;
        fVar6 = (float)((ulong)puVar5[5] >> 0x20) * fVar6;
        uVar8 = CONCAT44(fVar6,fVar7);
        uVar15 = uVar13 ^ (uVar13 ^ uVar8) &
                          CONCAT44(-(uint)(fVar6 < fVar14),-(uint)(fVar7 < fVar12));
        uVar16 = uVar16 ^ (uVar16 ^ uVar15) &
                          CONCAT44(-(uint)((float)(uVar15 >> 0x20) < (float)(uVar16 >> 0x20)),
                                   -(uint)((float)uVar15 < (float)uVar16));
        if (fVar18 <= fVar11) {
          fVar11 = fVar18;
        }
        fVar18 = fVar11;
        if (fVar10 <= fVar9) {
          fVar10 = fVar9;
        }
        uVar8 = uVar8 ^ (uVar8 ^ uVar13) &
                        ~CONCAT44(-(uint)(fVar14 < fVar6),-(uint)(fVar12 < fVar7));
        uVar19 = uVar19 ^ (uVar19 ^ uVar8) &
                          CONCAT44(-(uint)((float)(uVar19 >> 0x20) < (float)(uVar8 >> 0x20)),
                                   -(uint)((float)uVar19 < (float)uVar8));
        if (fVar10 <= fVar17) {
          fVar10 = fVar17;
        }
      }
      fVar17 = fVar10;
      puVar5 = puVar5 + 9;
    } while (puVar5 != puVar1);
  }
  *param_4 = uVar16;
  *(float *)(param_4 + 1) = fVar18;
  *param_5 = uVar19;
  *(float *)(param_5 + 1) = fVar17;
  return;
}



/* Entry: 10a5e3468; end: 10a5e34e7;  */

void FUN_10a5e3468(long param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  uVar2 = 0;
  plVar3 = (long *)(param_2 + 8);
  puVar4 = (undefined8 *)&UNK_110baa5e8;
  do {
    if (puVar4[-1] != 0) {
      if (param_3 <= uVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5e34e8);
        (*pcVar1)();
      }
      (*(code *)*puVar4)(*(undefined8 *)(param_1 + uVar2 * 8),plVar3[-1],*plVar3 - plVar3[-1] >> 3);
    }
    uVar2 = uVar2 + 1;
    puVar4 = puVar4 + 0xf;
    plVar3 = plVar3 + 3;
  } while (uVar2 != 0x17);
  return;
}



/* Entry: 10a5e34e8; end: 10a5e3517;  */

long * FUN_10a5e34e8(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a5e3518; end: 10a5e35f3;  */

void FUN_10a5e3518(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  lVar3 = *param_1;
  uVar5 = param_1[2] - lVar3;
  uVar6 = param_1[1] - lVar3;
  if (uVar6 < uVar5) {
    if (param_1[1] == lVar3) {
      plVar2 = (long *)0x0;
      uVar4 = 0;
    }
    else {
      uVar4 = ((long)uVar6 >> 2) * -0x5555555555555555;
      plVar2 = param_1;
      FUN_10a051b24();
      lVar3 = *param_1;
      uVar5 = param_1[2] - lVar3;
    }
    if (uVar4 < (ulong)(((long)uVar5 >> 2) * -0x5555555555555555)) {
      lVar1 = (long)plVar2 + uVar6;
      lVar7 = (long)plVar2 + uVar4 * 0xc;
      lVar3 = lVar1 - (param_1[1] - lVar3);
      _memcpy(lVar3);
      plVar2 = (long *)*param_1;
      *param_1 = lVar3;
      param_1[1] = lVar1;
      param_1[2] = lVar7;
    }
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 10a5e35f4; end: 10a5e38a7;  */

long * FUN_10a5e35f4(long *param_1,ulong param_2,long param_3,ulong param_4,uint param_5)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  plVar2 = (long *)param_1[1];
  if ((ulong)((param_1[2] - (long)plVar2 >> 4) * -0x5555555555555555) < param_2) {
    lVar8 = (long)plVar2 - *param_1;
    uVar5 = param_2 + (lVar8 >> 4) * -0x5555555555555555;
    if (0x555555555555555 < uVar5) {
      FUN_10a1916e8();
      lVar8 = param_1[2];
      plVar9 = (long *)*param_1;
      plVar2 = param_1;
      if ((ulong)((lVar8 - (long)plVar9 >> 4) * -0x3333333333333333) < param_4) {
        plVar3 = param_1;
        uVar5 = param_2;
        lVar4 = param_3;
        uVar6 = param_4;
        if (plVar9 != (long *)0x0) {
          param_1[1] = (long)plVar9;
          __ZdlPv();
          lVar8 = 0;
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          plVar3 = plVar9;
        }
        if (0x333333333333333 < param_4) {
          FUN_10a1915d0();
          uVar5 = ((long)(uVar5 - (long)plVar3) >> 3) * 0x6fb586fb586fb587;
          if (param_5 <= uVar5 && uVar5 - param_5 != 0) {
            uVar5 = (ulong)param_5;
            if ((char)plVar3[uVar5 * 0x37] != '\x02') {
              if (uVar6 <= uVar5) goto LAB_10a5e3924;
              lVar8 = *(long *)(lVar4 + uVar5 * 0xf0 + 0xa8);
              if (lVar8 != 0) {
                FUN_10a061940(lVar8,1);
                return (long *)(ulong)((int)lVar8 != 2);
              }
            }
            return (long *)0x1;
          }
LAB_10a5e3924:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5e3928);
          (*pcVar1)();
        }
        uVar5 = (lVar8 >> 4) * -0x6666666666666666;
        if (uVar5 < param_4 || uVar5 - param_4 == 0) {
          uVar5 = param_4;
        }
        if (0x199999999999998 < (ulong)((lVar8 >> 4) * -0x3333333333333333)) {
          uVar5 = 0x333333333333333;
        }
        FUN_10a191588(param_1,uVar5);
        plVar9 = (long *)param_1[1];
        param_3 = param_3 - param_2;
        if (param_3 != 0) {
          plVar2 = plVar9;
          _memmove(plVar9,param_2,param_3);
        }
        param_3 = (long)plVar9 + param_3;
      }
      else {
        plVar3 = (long *)param_1[1];
        if ((ulong)(((long)plVar3 - (long)plVar9 >> 4) * -0x3333333333333333) < param_4) {
          lVar8 = param_2 + ((long)plVar3 - (long)plVar9);
          if (plVar3 != plVar9) {
            _memmove(plVar9,param_2);
            plVar3 = (long *)param_1[1];
            plVar2 = plVar9;
          }
          param_3 = param_3 - lVar8;
          if (param_3 != 0) {
            plVar2 = plVar3;
            _memmove(plVar3,lVar8,param_3);
          }
          param_3 = (long)plVar3 + param_3;
        }
        else {
          param_3 = param_3 - param_2;
          if (param_3 != 0) {
            plVar2 = plVar9;
            _memmove(plVar9,param_2,param_3);
          }
          param_3 = (long)plVar9 + param_3;
        }
      }
      param_1[1] = param_3;
      return plVar2;
    }
    lVar4 = param_1[2] - *param_1 >> 4;
    uVar6 = lVar4 * 0x5555555555555556;
    if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
      uVar6 = uVar5;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar6 = 0x555555555555555;
    }
    if (uVar6 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_10a1916fc();
    }
    lVar8 = (long)plVar2 + lVar8;
    lVar4 = ((param_2 * 0x30 - 0x30) / 0x30) * 0x30 + 0x30;
    _bzero(lVar8,lVar4);
    lVar7 = lVar8 - (param_1[1] - *param_1);
    _memcpy(lVar7);
    plVar3 = (long *)*param_1;
    *param_1 = lVar7;
    param_1[1] = lVar8 + lVar4;
    param_1[2] = (long)(plVar2 + uVar6 * 6);
    plVar9 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return plVar3;
    }
  }
  else {
    plVar9 = param_1;
    if (param_2 != 0) {
      uVar5 = (param_2 * 0x30 - 0x30) / 0x30;
      plVar9 = plVar2;
      _bzero(plVar2,uVar5 * 0x30 + 0x30);
      plVar2 = plVar2 + uVar5 * 6 + 6;
    }
    param_1[1] = (long)plVar2;
  }
  return plVar9;
}



/* Entry: 10a5e38a8; end: 10a5e3927;  */

bool FUN_10a5e38a8(long param_1,long param_2,long param_3,ulong param_4,uint param_5)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = (param_2 - param_1 >> 3) * 0x6fb586fb586fb587;
  if (param_5 <= uVar3 && uVar3 - param_5 != 0) {
    uVar3 = (ulong)param_5;
    if (*(char *)(param_1 + uVar3 * 0x1b8) != '\x02') {
      if (param_4 <= uVar3) goto LAB_10a5e3924;
      lVar2 = *(long *)(param_3 + uVar3 * 0xf0 + 0xa8);
      if (lVar2 != 0) {
        FUN_10a061940(lVar2,1);
        return (int)lVar2 != 2;
      }
    }
    return true;
  }
LAB_10a5e3924:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5e3928);
  (*pcVar1)();
}



/* Entry: 10a5e3928; end: 10a5e39eb;  */

void FUN_10a5e3928(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5,
                  undefined8 param_6)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uStack_48;
  
  uVar3 = (*(long *)(param_1 + 0x200) - *(long *)(param_1 + 0x1f8) >> 3) * 0x6fb586fb586fb587;
  if (uVar3 < (param_4 & 0xffffffff) || uVar3 - (param_4 & 0xffffffff) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5e39ec);
    (*pcVar1)();
  }
  lVar4 = *(long *)(param_1 + 0x1f8) + (param_4 & 0xffffffff) * 0x1b8;
  uVar3 = *(ulong *)(lVar4 + 0x30);
  puVar2 = &uStack_48;
  uStack_48 = param_6;
  FUN_10a3c8d60(puVar2,lVar4 + 0x38);
  if (((uVar3 & param_5) != 0 || ((ulong)puVar2 & 0xffff) != 0) && (*(char *)(lVar4 + 0x1c) != '\0')
     ) {
    FUN_10a5e38a8(*(undefined8 *)(param_1 + 0x1f8),*(undefined8 *)(param_1 + 0x200),param_2,param_3,
                  param_4);
  }
  return;
}



/* Entry: 10a5e39ec; end: 10a5e3a77;  */

long * FUN_10a5e39ec(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  param_1[3] = 0;
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_10a5e3a2c;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_10a5e3a2c:
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



/* Entry: 10a5e3a78; end: 10a5e3aeb;  */

undefined8 * FUN_10a5e3a78(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_10a4953dc(param_1);
    lVar1 = param_1[1];
    _bzero(lVar1,param_2 << 4);
    param_1[1] = lVar1 + param_2 * 0x10;
  }
  return param_1;
}



/* Entry: 10a5e3aec; end: 10a5e3ba3;  */

void FUN_10a5e3aec(long *param_1)

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



/* Entry: 10a5e3ba4; end: 10a5e3d23;  */

void FUN_10a5e3ba4(long *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  if (param_1[2] != 0) {
    lVar3 = *param_1;
    plVar2 = param_1 + 1;
    *param_1 = (long)plVar2;
    *(undefined8 *)(*plVar2 + 0x10) = 0;
    *plVar2 = 0;
    param_1[2] = 0;
    lVar4 = *(long *)(lVar3 + 8);
    if (lVar4 != 0) {
      lVar3 = lVar4;
    }
    plStack_60 = param_1;
    lStack_58 = lVar3;
    lStack_50 = lVar3;
    if ((lVar3 != 0) &&
       (lVar4 = lVar3, func_0x00010a5e3d90(), lStack_58 = lVar4, param_2 != param_3)) {
      do {
        lVar4 = param_2[4];
        *(long *)(lVar3 + 0x28) = param_2[5];
        *(long *)(lVar3 + 0x20) = lVar4;
        *(long *)(lVar3 + 0x30) = param_2[6];
        plVar2 = param_1;
        func_0x00010a5e3d24(param_1,&uStack_48,lVar3 + 0x20);
        FUN_10a5bcbfc(param_1,uStack_48,plVar2,lVar3);
        lStack_50 = lStack_58;
        if (lStack_58 != 0) {
          func_0x00010a5e3d90();
        }
        plVar2 = (long *)param_2[1];
        plVar5 = param_2;
        if ((long *)param_2[1] == (long *)0x0) {
          do {
            param_2 = (long *)plVar5[2];
            bVar1 = (long *)*param_2 != plVar5;
            plVar5 = param_2;
          } while (bVar1);
        }
        else {
          do {
            param_2 = plVar2;
            plVar2 = (long *)*param_2;
          } while ((long *)*param_2 != (long *)0x0);
        }
        lVar3 = lStack_50;
      } while (lStack_50 != 0 && param_2 != param_3);
    }
    FUN_10a5e3de4(&plStack_60);
  }
  while (param_2 != param_3) {
    FUN_10a5e3e38(param_1,param_2 + 4);
    plVar2 = (long *)param_2[1];
    plVar5 = param_2;
    if ((long *)param_2[1] == (long *)0x0) {
      do {
        param_2 = (long *)plVar5[2];
        bVar1 = (long *)*param_2 != plVar5;
        plVar5 = param_2;
      } while (bVar1);
    }
    else {
      do {
        param_2 = plVar2;
        plVar2 = (long *)*param_2;
      } while ((long *)*param_2 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 10a5e3d24; end: 10a5e3de3;  */

long * FUN_10a5e3d24(long param_1,long *param_2,long *param_3)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar2 = (long *)*plVar3;
    do {
      while( true ) {
        plVar3 = plVar2;
        bVar1 = *param_3 < plVar3[4];
        if (*param_3 == plVar3[4]) {
          bVar1 = param_3[1] != plVar3[5] && param_3[1] < plVar3[5];
        }
        if (!bVar1) break;
        plVar4 = plVar3;
        plVar2 = (long *)*plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_10a5e3d84;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar4 = plVar3 + 1;
  }
LAB_10a5e3d84:
  *param_2 = (long)plVar3;
  return plVar4;
}



/* Entry: 10a5e3de4; end: 10a5e3e37;  */

undefined8 * FUN_10a5e3de4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_10a5bcccc(*param_1,param_1[2]);
  if (param_1[1] != 0) {
    lVar1 = *(long *)(param_1[1] + 0x10);
    if (lVar1 != 0) {
      do {
        lVar2 = lVar1;
        lVar1 = *(long *)(lVar2 + 0x10);
      } while (lVar1 != 0);
      param_1[1] = lVar2;
    }
    FUN_10a5bcccc(*param_1);
  }
  return param_1;
}



/* Entry: 10a5e3e38; end: 10a5e3ebf;  */

long FUN_10a5e3e38(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  lVar1 = 0x38;
  __Znwm();
  uVar2 = *param_2;
  *(undefined8 *)(lVar1 + 0x28) = param_2[1];
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  *(undefined8 *)(lVar1 + 0x30) = param_2[2];
  uVar2 = param_1;
  FUN_10a5e3d24(param_1,&uStack_38,lVar1 + 0x20);
  FUN_10a5bcbfc(param_1,uStack_38,uVar2,lVar1);
  return lVar1;
}



/* Entry: 10a5e3ec0; end: 10a5e3fb3;  */

void FUN_10a5e3ec0(long *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(*param_1 + lVar2 * 8) = 0;
      lVar2 = lVar2 + 1;
    } while (lVar1 != lVar2);
    plVar3 = (long *)param_1[2];
    param_1[2] = 0;
    param_1[3] = 0;
    while (plVar3 != (long *)0x0) {
      if (param_2 == param_3) goto LAB_10a5e3f3c;
      plVar3[2] = param_2[2];
      lVar1 = *plVar3;
      FUN_10a5e3fb4(param_1,plVar3);
      param_2 = (long *)*param_2;
      plVar3 = (long *)lVar1;
    }
  }
LAB_10a5e3f64:
  for (; param_2 != param_3; param_2 = (long *)*param_2) {
    FUN_10a5e4464(param_1,param_2 + 2);
  }
  return;
LAB_10a5e3f3c:
  do {
    plVar4 = (long *)*plVar3;
    __ZdlPv(plVar3);
    plVar3 = plVar4;
  } while (plVar4 != (long *)0x0);
  goto LAB_10a5e3f64;
}



/* Entry: 10a5e3fb4; end: 10a5e402f;  */

long FUN_10a5e3fb4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_2 + 0x10);
  uVar3 = ((ulong)(uint)((int)uVar2 << 3) + 8 ^ uVar2 >> 0x20) * -0x622015f714c7d297;
  uVar2 = (uVar2 >> 0x20 ^ uVar3 >> 0x2f ^ uVar3) * -0x622015f714c7d297;
  *(ulong *)(param_2 + 8) = (uVar2 ^ uVar2 >> 0x2f) * -0x622015f714c7d297;
  uVar1 = param_1;
  FUN_10a5e4030();
  FUN_10a5e4178(param_1,param_2,uVar1);
  return param_2;
}



/* Entry: 10a5e4030; end: 10a5e4177;  */

long * FUN_10a5e4030(long *param_1,ulong param_2,long *param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  bool bVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar5 = param_1[1];
  if ((uVar5 == 0) || (*(float *)(param_1 + 4) * (float)uVar5 < (float)(param_1[3] + 1))) {
    uVar6 = 1;
    if (2 < uVar5) {
      uVar6 = (ulong)((uVar5 & uVar5 - 1) != 0);
    }
    uVar6 = uVar6 | uVar5 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar5) {
      uVar6 = uVar5;
    }
    FUN_10a5e4248(param_1,uVar6);
    uVar5 = param_1[1];
  }
  uVar6 = uVar5 - 1;
  if ((uVar5 & uVar6) == 0) {
    uVar7 = uVar6 & param_2;
  }
  else {
    uVar7 = param_2;
    if (uVar5 <= param_2) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = param_2 / uVar5;
      }
      uVar7 = param_2 - uVar7 * uVar5;
    }
  }
  plVar8 = *(long **)(*param_1 + uVar7 * 8);
  if (plVar8 == (long *)0x0) {
    plVar4 = (long *)0x0;
  }
  else {
    bVar9 = false;
    bVar1 = 0;
    do {
      plVar4 = plVar8;
      plVar8 = (long *)*plVar4;
      if (plVar8 == (long *)0x0) {
        return plVar4;
      }
      uVar10 = plVar8[1];
      if ((uVar5 & uVar6) == 0) {
        uVar11 = uVar10 & uVar6;
      }
      else {
        uVar11 = uVar10;
        if (uVar5 <= uVar10) {
          uVar11 = 0;
          if (uVar5 != 0) {
            uVar11 = uVar10 / uVar5;
          }
          uVar11 = uVar10 - uVar11 * uVar5;
        }
      }
      if (uVar11 != uVar7) {
        return plVar4;
      }
      if (uVar10 == param_2) {
        bVar2 = plVar8[2] == *param_3;
      }
      else {
        bVar2 = false;
      }
      bVar3 = bVar2 != bVar9;
      bVar2 = (bool)(bVar1 & bVar3);
      bVar9 = (bool)(bVar9 | bVar3);
      bVar1 = bVar1 | bVar3;
    } while (!bVar2);
  }
  return plVar4;
}



/* Entry: 10a5e4178; end: 10a5e4247;  */

void FUN_10a5e4178(long *param_1,long *param_2,long *param_3)

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
    if (param_3 != (long *)0x0) goto LAB_10a5e41a0;
LAB_10a5e41dc:
    plVar5 = param_1 + 2;
    *param_2 = *plVar5;
    *plVar5 = (long)param_2;
    *(long **)(*param_1 + uVar2 * 8) = plVar5;
    if (*param_2 == 0) goto LAB_10a5e4238;
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
    if (param_3 == (long *)0x0) goto LAB_10a5e41dc;
LAB_10a5e41a0:
    *param_2 = *param_3;
    *param_3 = (long)param_2;
    if (*param_2 == 0) goto LAB_10a5e4238;
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
    if (uVar4 == uVar2) goto LAB_10a5e4238;
  }
  *(long **)(*param_1 + uVar4 * 8) = param_2;
LAB_10a5e4238:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10a5e4248; end: 10a5e4317;  */

void FUN_10a5e4248(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 auStack_58 [3];
  ulong uStack_40;
  long *plStack_38;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar10 = param_1[1];
  if (param_2 <= uVar10) {
    if (param_2 < uVar10) {
      uVar6 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar10 < 3) || ((uVar10 & uVar10 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar6) {
        uVar6 = 1L << (-LZCOUNT(uVar6 - 1) & 0x3fU);
      }
      if (param_2 <= uVar6) {
        param_2 = uVar6;
      }
      if (param_2 < uVar10) goto LAB_10a5e4290;
    }
    return;
  }
LAB_10a5e4290:
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      plVar4 = param_1;
      func_0x000109ffded8();
      uStack_40 = param_2;
      plStack_38 = param_1;
      FUN_10a5e44b8(auStack_58);
      FUN_10a5e3fb4(plVar4,auStack_58[0]);
      return;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar10 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar10 * 8) = 0;
      uVar10 = uVar10 + 1;
    } while (param_2 != uVar10);
    plVar4 = (long *)param_1[2];
    if (plVar4 != (long *)0x0) {
      uVar10 = plVar4[1];
      uVar6 = param_2 - 1;
      if ((param_2 & uVar6) == 0) {
        uVar10 = uVar10 & uVar6;
      }
      else if (param_2 <= uVar10) {
        uVar7 = 0;
        if (param_2 != 0) {
          uVar7 = uVar10 / param_2;
        }
        uVar10 = uVar10 - uVar7 * param_2;
      }
      *(long **)(*param_1 + uVar10 * 8) = param_1 + 2;
      while (plVar5 = plVar4, plVar4 = (long *)*plVar5, plVar4 != (long *)0x0) {
        uVar7 = plVar4[1];
        if ((param_2 & uVar6) == 0) {
          uVar7 = uVar7 & uVar6;
        }
        else if (param_2 <= uVar7) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar1 * param_2;
        }
        if (uVar7 != uVar10) {
          lVar2 = *param_1;
          plVar9 = plVar4;
          if (*(long *)(lVar2 + uVar7 * 8) == 0) {
            *(long **)(lVar2 + uVar7 * 8) = plVar5;
            uVar10 = uVar7;
          }
          else {
            do {
              plVar8 = plVar9;
              plVar9 = (long *)*plVar8;
              if (plVar9 == (long *)0x0) break;
            } while (plVar4[2] == plVar9[2]);
            *plVar5 = (long)plVar9;
            *plVar8 = **(long **)(lVar2 + uVar7 * 8);
            **(long **)(lVar2 + uVar7 * 8) = (long)plVar4;
            plVar4 = plVar5;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10a5e4318; end: 10a5e4463;  */

void FUN_10a5e4318(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 auStack_58 [3];
  ulong uStack_40;
  long *plStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      plVar5 = param_1;
      func_0x000109ffded8();
      pcStack_28 = FUN_10a5e4464;
      uStack_40 = param_2;
      plStack_38 = param_1;
      puStack_30 = &stack0xfffffffffffffff0;
      FUN_10a5e44b8(auStack_58);
      FUN_10a5e3fb4(plVar5,auStack_58[0]);
      return;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar4 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      uVar4 = plVar5[1];
      uVar7 = param_2 - 1;
      if ((param_2 & uVar7) == 0) {
        uVar4 = uVar4 & uVar7;
      }
      else if (param_2 <= uVar4) {
        uVar8 = 0;
        if (param_2 != 0) {
          uVar8 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar8 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      while (plVar6 = plVar5, plVar5 = (long *)*plVar6, plVar5 != (long *)0x0) {
        uVar8 = plVar5[1];
        if ((param_2 & uVar7) == 0) {
          uVar8 = uVar8 & uVar7;
        }
        else if (param_2 <= uVar8) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar8 / param_2;
          }
          uVar8 = uVar8 - uVar1 * param_2;
        }
        if (uVar8 != uVar4) {
          lVar2 = *param_1;
          plVar10 = plVar5;
          if (*(long *)(lVar2 + uVar8 * 8) == 0) {
            *(long **)(lVar2 + uVar8 * 8) = plVar6;
            uVar4 = uVar8;
          }
          else {
            do {
              plVar9 = plVar10;
              plVar10 = (long *)*plVar9;
              if (plVar10 == (long *)0x0) break;
            } while (plVar5[2] == plVar10[2]);
            *plVar6 = (long)plVar10;
            *plVar9 = **(long **)(lVar2 + uVar8 * 8);
            **(long **)(lVar2 + uVar8 * 8) = (long)plVar5;
            plVar5 = plVar6;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10a5e4464; end: 10a5e44b7;  */

void FUN_10a5e4464(undefined8 param_1)

{
  undefined8 auStack_38 [3];
  
  FUN_10a5e44b8(auStack_38);
  FUN_10a5e3fb4(param_1,auStack_38[0]);
  return;
}



/* Entry: 10a5e44b8; end: 10a5e453b;  */

void FUN_10a5e44b8(undefined8 *param_1,undefined8 param_2,ulong *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 1;
  uVar2 = *param_3;
  puVar1[2] = uVar2;
  uVar3 = ((ulong)(uint)((int)uVar2 << 3) + 8 ^ uVar2 >> 0x20) * -0x622015f714c7d297;
  uVar2 = (uVar2 >> 0x20 ^ uVar3 >> 0x2f ^ uVar3) * -0x622015f714c7d297;
  *puVar1 = 0;
  puVar1[1] = (uVar2 ^ uVar2 >> 0x2f) * -0x622015f714c7d297;
  return;
}



/* Entry: 10a5e453c; end: 10a5e465f;  */

void FUN_10a5e453c(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plStack_50;
  long *plStack_48;
  
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    lVar3 = 0;
    do {
      *(undefined8 *)(*param_1 + lVar3 * 8) = 0;
      lVar3 = lVar3 + 1;
    } while (lVar2 != lVar3);
    plVar4 = (long *)param_1[2];
    param_1[2] = 0;
    param_1[3] = 0;
    plVar5 = plVar4;
    if (plVar4 != (long *)0x0 && param_2 != param_3) {
      do {
        plStack_48 = plVar5 + 3;
        plStack_50 = plVar5 + 2;
        FUN_10a5e4660(&plStack_50,param_2 + 2);
        plVar4 = (long *)*plVar5;
        plVar5[1] = (ulong)*(ushort *)(plVar5 + 2);
        plVar1 = param_1;
        FUN_10a5e47d4(param_1,(ulong)*(ushort *)(plVar5 + 2),plVar5 + 2);
        FUN_10a5e491c(param_1,plVar5,plVar1);
        param_2 = (long *)*param_2;
        if (plVar4 == (long *)0x0) break;
        plVar5 = plVar4;
      } while (param_2 != param_3);
    }
    func_0x00010a5bce04(param_1,plVar4);
  }
  for (; param_2 != param_3; param_2 = (long *)*param_2) {
    FUN_10a5e4c08(param_1,param_2 + 2);
  }
  return;
}



/* Entry: 10a5e4660; end: 10a5e46ab;  */

undefined8 * FUN_10a5e4660(undefined8 *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)param_1[1];
  *(undefined2 *)*param_1 = *param_2;
  if (puVar1 != param_2 + 4) {
    FUN_10a5e46ac(puVar1,*(long *)(param_2 + 4),*(long *)(param_2 + 8),
                  *(long *)(param_2 + 8) - *(long *)(param_2 + 4) >> 4);
  }
  return param_1;
}



/* Entry: 10a5e46ac; end: 10a5e47d3;  */

long * FUN_10a5e46ac(long *param_1,ulong param_2,short *param_3,ulong param_4)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  short *psVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  bool bVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  
  uVar7 = param_1[2];
  plVar15 = (long *)*param_1;
  plVar11 = param_1;
  if ((ulong)((long)(uVar7 - (long)plVar15) >> 4) < param_4) {
    plVar16 = param_1;
    uVar5 = param_2;
    psVar6 = param_3;
    if (plVar15 != (long *)0x0) {
      param_1[1] = (long)plVar15;
      __ZdlPv();
      uVar7 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      plVar16 = plVar15;
    }
    if (param_4 >> 0x3c != 0) {
      FUN_10a191ca4();
      uVar7 = plVar16[1];
      if ((uVar7 == 0) || (*(float *)(plVar16 + 4) * (float)uVar7 < (float)(plVar16[3] + 1))) {
        uVar9 = 1;
        if (2 < uVar7) {
          uVar9 = (ulong)((uVar7 & uVar7 - 1) != 0);
        }
        uVar9 = uVar9 | uVar7 << 1;
        uVar7 = (ulong)((float)(plVar16[3] + 1) / *(float *)(plVar16 + 4));
        if (uVar9 <= uVar7) {
          uVar9 = uVar7;
        }
        FUN_10a5e49ec(plVar16,uVar9);
        uVar7 = plVar16[1];
      }
      uVar9 = uVar7 - 1;
      if ((uVar7 & uVar9) == 0) {
        uVar10 = uVar9 & uVar5;
      }
      else {
        uVar10 = uVar5;
        if (uVar7 <= uVar5) {
          uVar10 = 0;
          if (uVar7 != 0) {
            uVar10 = uVar5 / uVar7;
          }
          uVar10 = uVar5 - uVar10 * uVar7;
        }
      }
      plVar11 = *(long **)(*plVar16 + uVar10 * 8);
      if (plVar11 == (long *)0x0) {
        plVar15 = (long *)0x0;
      }
      else {
        bVar12 = false;
        bVar2 = 0;
        do {
          plVar15 = plVar11;
          plVar11 = (long *)*plVar15;
          if (plVar11 == (long *)0x0) {
            return plVar15;
          }
          uVar13 = plVar11[1];
          if ((uVar7 & uVar9) == 0) {
            uVar14 = uVar13 & uVar9;
          }
          else {
            uVar14 = uVar13;
            if (uVar7 <= uVar13) {
              uVar14 = 0;
              if (uVar7 != 0) {
                uVar14 = uVar13 / uVar7;
              }
              uVar14 = uVar13 - uVar14 * uVar7;
            }
          }
          if (uVar14 != uVar10) {
            return plVar15;
          }
          if (uVar13 == uVar5) {
            bVar3 = *(short *)(plVar11 + 2) == *psVar6;
          }
          else {
            bVar3 = false;
          }
          bVar4 = bVar3 != bVar12;
          bVar3 = (bool)(bVar2 & bVar4);
          bVar12 = (bool)(bVar12 | bVar4);
          bVar2 = bVar2 | bVar4;
        } while (!bVar3);
      }
      return plVar15;
    }
    uVar5 = (long)uVar7 >> 3;
    if ((ulong)((long)uVar7 >> 3) <= param_4) {
      uVar5 = param_4;
    }
    if (0x7fffffffffffffef < uVar7) {
      uVar5 = 0xfffffffffffffff;
    }
    func_0x00010a191c6c(param_1,uVar5);
    plVar15 = (long *)param_1[1];
    lVar8 = (long)param_3 - param_2;
    if (lVar8 != 0) {
      plVar11 = plVar15;
      _memmove(plVar15,param_2,lVar8);
    }
    lVar8 = (long)plVar15 + lVar8;
  }
  else {
    plVar16 = (long *)param_1[1];
    if ((ulong)((long)plVar16 - (long)plVar15 >> 4) < param_4) {
      lVar1 = param_2 + ((long)plVar16 - (long)plVar15);
      if (plVar16 != plVar15) {
        _memmove(plVar15,param_2);
        plVar16 = (long *)param_1[1];
        plVar11 = plVar15;
      }
      lVar8 = (long)param_3 - lVar1;
      if (lVar8 != 0) {
        plVar11 = plVar16;
        _memmove(plVar16,lVar1,lVar8);
      }
      lVar8 = (long)plVar16 + lVar8;
    }
    else {
      lVar8 = (long)param_3 - param_2;
      if (lVar8 != 0) {
        plVar11 = plVar15;
        _memmove(plVar15,param_2,lVar8);
      }
      lVar8 = (long)plVar15 + lVar8;
    }
  }
  param_1[1] = lVar8;
  return plVar11;
}



/* Entry: 10a5e47d4; end: 10a5e491b;  */

long * FUN_10a5e47d4(long *param_1,ulong param_2,short *param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  bool bVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar5 = param_1[1];
  if ((uVar5 == 0) || (*(float *)(param_1 + 4) * (float)uVar5 < (float)(param_1[3] + 1))) {
    uVar6 = 1;
    if (2 < uVar5) {
      uVar6 = (ulong)((uVar5 & uVar5 - 1) != 0);
    }
    uVar6 = uVar6 | uVar5 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar5) {
      uVar6 = uVar5;
    }
    FUN_10a5e49ec(param_1,uVar6);
    uVar5 = param_1[1];
  }
  uVar6 = uVar5 - 1;
  if ((uVar5 & uVar6) == 0) {
    uVar7 = uVar6 & param_2;
  }
  else {
    uVar7 = param_2;
    if (uVar5 <= param_2) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = param_2 / uVar5;
      }
      uVar7 = param_2 - uVar7 * uVar5;
    }
  }
  plVar8 = *(long **)(*param_1 + uVar7 * 8);
  if (plVar8 == (long *)0x0) {
    plVar4 = (long *)0x0;
  }
  else {
    bVar9 = false;
    bVar1 = 0;
    do {
      plVar4 = plVar8;
      plVar8 = (long *)*plVar4;
      if (plVar8 == (long *)0x0) {
        return plVar4;
      }
      uVar10 = plVar8[1];
      if ((uVar5 & uVar6) == 0) {
        uVar11 = uVar10 & uVar6;
      }
      else {
        uVar11 = uVar10;
        if (uVar5 <= uVar10) {
          uVar11 = 0;
          if (uVar5 != 0) {
            uVar11 = uVar10 / uVar5;
          }
          uVar11 = uVar10 - uVar11 * uVar5;
        }
      }
      if (uVar11 != uVar7) {
        return plVar4;
      }
      if (uVar10 == param_2) {
        bVar2 = *(short *)(plVar8 + 2) == *param_3;
      }
      else {
        bVar2 = false;
      }
      bVar3 = bVar2 != bVar9;
      bVar2 = (bool)(bVar1 & bVar3);
      bVar9 = (bool)(bVar9 | bVar3);
      bVar1 = bVar1 | bVar3;
    } while (!bVar2);
  }
  return plVar4;
}



/* Entry: 10a5e491c; end: 10a5e49eb;  */

void FUN_10a5e491c(long *param_1,long *param_2,long *param_3)

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
    if (param_3 != (long *)0x0) goto LAB_10a5e4944;
LAB_10a5e4980:
    plVar5 = param_1 + 2;
    *param_2 = *plVar5;
    *plVar5 = (long)param_2;
    *(long **)(*param_1 + uVar2 * 8) = plVar5;
    if (*param_2 == 0) goto LAB_10a5e49dc;
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
    if (param_3 == (long *)0x0) goto LAB_10a5e4980;
LAB_10a5e4944:
    *param_2 = *param_3;
    *param_3 = (long)param_2;
    if (*param_2 == 0) goto LAB_10a5e49dc;
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
    if (uVar4 == uVar2) goto LAB_10a5e49dc;
  }
  *(long **)(*param_1 + uVar4 * 8) = param_2;
LAB_10a5e49dc:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10a5e49ec; end: 10a5e4abb;  */

long * FUN_10a5e49ec(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *aplStack_58 [3];
  long *plStack_40;
  long *plStack_38;
  
  plVar3 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar3 = param_2;
  }
  plVar10 = (long *)param_1[1];
  if (param_2 <= plVar10) {
    if (param_2 < plVar10) {
      plVar3 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((plVar10 < (long *)0x3) || (((ulong)plVar10 & (long)plVar10 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar3) {
        plVar3 = (long *)(1L << (-LZCOUNT((long)plVar3 + -1) & 0x3fU));
      }
      if (param_2 <= plVar3) {
        param_2 = plVar3;
      }
      if (param_2 < plVar10) goto LAB_10a5e4a34;
    }
    return plVar3;
  }
LAB_10a5e4a34:
  if (param_2 == (long *)0x0) {
    plVar3 = (long *)*param_1;
    *param_1 = 0;
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if ((ulong)param_2 >> 0x3d != 0) {
      plVar3 = param_1;
      func_0x000109ffded8();
      plStack_40 = param_2;
      plStack_38 = param_1;
      FUN_10a5e4c84(aplStack_58);
      aplStack_58[0][1] = (ulong)*(ushort *)(aplStack_58[0] + 2);
      plVar10 = plVar3;
      FUN_10a5e47d4(plVar3);
      FUN_10a5e491c(plVar3,aplStack_58[0],plVar10);
      return aplStack_58[0];
    }
    lVar2 = (long)param_2 << 3;
    __Znwm();
    plVar3 = (long *)*param_1;
    *param_1 = lVar2;
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
    plVar10 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar10 * 8) = 0;
      plVar10 = (long *)((long)plVar10 + 1);
    } while (param_2 != plVar10);
    plVar10 = (long *)param_1[2];
    if (plVar10 != (long *)0x0) {
      plVar6 = (long *)plVar10[1];
      uVar5 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar5) == 0) {
        plVar6 = (long *)((ulong)plVar6 & uVar5);
      }
      else if (param_2 <= plVar6) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar6 / (ulong)param_2;
        }
        plVar6 = (long *)((long)plVar6 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar6 * 8) = param_1 + 2;
      while (plVar4 = plVar10, plVar10 = (long *)*plVar4, plVar10 != (long *)0x0) {
        plVar7 = (long *)plVar10[1];
        if (((ulong)param_2 & uVar5) == 0) {
          plVar7 = (long *)((ulong)plVar7 & uVar5);
        }
        else if (param_2 <= plVar7) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar7 / (ulong)param_2;
          }
          plVar7 = (long *)((long)plVar7 - uVar1 * (long)param_2);
        }
        if (plVar7 != plVar6) {
          lVar2 = *param_1;
          plVar9 = plVar10;
          if (*(long *)(lVar2 + (long)plVar7 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar7 * 8) = plVar4;
            plVar6 = plVar7;
          }
          else {
            do {
              plVar8 = plVar9;
              plVar9 = (long *)*plVar8;
              if (plVar9 == (long *)0x0) break;
            } while (*(short *)(plVar10 + 2) == *(short *)(plVar9 + 2));
            *plVar4 = (long)plVar9;
            *plVar8 = **(long **)(lVar2 + (long)plVar7 * 8);
            **(long **)(lVar2 + (long)plVar7 * 8) = (long)plVar10;
            plVar10 = plVar4;
          }
        }
      }
    }
  }
  return plVar3;
}



/* Entry: 10a5e4abc; end: 10a5e4c07;  */

long FUN_10a5e4abc(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long alStack_58 [3];
  ulong uStack_40;
  long *plStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  
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
      plVar6 = param_1;
      func_0x000109ffded8();
      pcStack_28 = FUN_10a5e4c08;
      uStack_40 = param_2;
      plStack_38 = param_1;
      puStack_30 = &stack0xfffffffffffffff0;
      FUN_10a5e4c84(alStack_58);
      *(ulong *)(alStack_58[0] + 8) = (ulong)*(ushort *)(alStack_58[0] + 0x10);
      plVar4 = plVar6;
      FUN_10a5e47d4(plVar6);
      FUN_10a5e491c(plVar6,alStack_58[0],plVar4);
      return alStack_58[0];
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar5 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (param_2 != uVar5);
    plVar6 = (long *)param_1[2];
    if (plVar6 != (long *)0x0) {
      uVar5 = plVar6[1];
      uVar7 = param_2 - 1;
      if ((param_2 & uVar7) == 0) {
        uVar5 = uVar5 & uVar7;
      }
      else if (param_2 <= uVar5) {
        uVar8 = 0;
        if (param_2 != 0) {
          uVar8 = uVar5 / param_2;
        }
        uVar5 = uVar5 - uVar8 * param_2;
      }
      *(long **)(*param_1 + uVar5 * 8) = param_1 + 2;
      while (plVar4 = plVar6, plVar6 = (long *)*plVar4, plVar6 != (long *)0x0) {
        uVar8 = plVar6[1];
        if ((param_2 & uVar7) == 0) {
          uVar8 = uVar8 & uVar7;
        }
        else if (param_2 <= uVar8) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar8 / param_2;
          }
          uVar8 = uVar8 - uVar1 * param_2;
        }
        if (uVar8 != uVar5) {
          lVar2 = *param_1;
          plVar10 = plVar6;
          if (*(long *)(lVar2 + uVar8 * 8) == 0) {
            *(long **)(lVar2 + uVar8 * 8) = plVar4;
            uVar5 = uVar8;
          }
          else {
            do {
              plVar9 = plVar10;
              plVar10 = (long *)*plVar9;
              if (plVar10 == (long *)0x0) break;
            } while (*(short *)(plVar6 + 2) == *(short *)(plVar10 + 2));
            *plVar4 = (long)plVar10;
            *plVar9 = **(long **)(lVar2 + uVar8 * 8);
            **(long **)(lVar2 + uVar8 * 8) = (long)plVar6;
            plVar6 = plVar4;
          }
        }
      }
    }
  }
  return lVar3;
}



/* Entry: 10a5e4c08; end: 10a5e4c83;  */

long FUN_10a5e4c08(undefined8 param_1)

{
  undefined8 uVar1;
  long alStack_38 [3];
  
  FUN_10a5e4c84(alStack_38);
  *(ulong *)(alStack_38[0] + 8) = (ulong)*(ushort *)(alStack_38[0] + 0x10);
  uVar1 = param_1;
  FUN_10a5e47d4(param_1);
  FUN_10a5e491c(param_1,alStack_38[0],uVar1);
  return alStack_38[0];
}



/* Entry: 10a5e4c84; end: 10a5e4d23;  */

void FUN_10a5e4c84(undefined8 *param_1,undefined8 param_2,undefined2 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined2 *)(puVar1 + 2) = *param_3;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[3] = 0;
  FUN_10a5bcd54();
  *(undefined1 *)(param_1 + 2) = 1;
  puVar1[1] = (ulong)*(ushort *)(puVar1 + 2);
  return;
}



/* Entry: 10a5e4d24; end: 10a5e4d6f;  */

void FUN_10a5e4d24(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x88) {
    if (*(long *)(lVar2 + -0x28) != 0) {
      *(long *)(lVar2 + -0x20) = *(long *)(lVar2 + -0x28);
      __ZdlPv();
    }
  }
  param_1[1] = lVar1;
  return;
}


