/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ab1eb88; end: 10ab1ec0f;  */

void FUN_10ab1eb88(undefined8 param_1,undefined8 *param_2)

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
  FUN_10ab1e1a8(param_1,600,1,&uStack_30);
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
  return;
}



/* Entry: 10ab1ec10; end: 10ab1ec23;  */

void FUN_10ab1ec10(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  uStack_28 = 700;
  uStack_24 = 0;
  lVar4 = param_2 + 0x1b0;
  FUN_10ab2b1e0(lVar4,&uStack_28);
  if (param_2 + 0x1b8 == lVar4) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar5 = *(long *)(lVar4 + 0x30);
    uVar6 = *(undefined8 *)(lVar4 + 0x28);
    param_1[1] = *(undefined8 *)(lVar4 + 0x30);
    *param_1 = uVar6;
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
  }
  return;
}



/* Entry: 10ab1ec24; end: 10ab1ecab;  */

void FUN_10ab1ec24(undefined8 param_1,undefined8 *param_2)

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
  FUN_10ab1e1a8(param_1,700,0,&uStack_30);
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
  return;
}



/* Entry: 10ab1ecac; end: 10ab1ecbf;  */

void FUN_10ab1ecac(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  uStack_28 = 700;
  uStack_24 = 1;
  lVar4 = param_2 + 0x1b0;
  FUN_10ab2b1e0(lVar4,&uStack_28);
  if (param_2 + 0x1b8 == lVar4) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar5 = *(long *)(lVar4 + 0x30);
    uVar6 = *(undefined8 *)(lVar4 + 0x28);
    param_1[1] = *(undefined8 *)(lVar4 + 0x30);
    *param_1 = uVar6;
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
  }
  return;
}



/* Entry: 10ab1ecc0; end: 10ab1ed47;  */

void FUN_10ab1ecc0(undefined8 param_1,undefined8 *param_2)

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
  FUN_10ab1e1a8(param_1,700,1,&uStack_30);
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
  return;
}



/* Entry: 10ab1ed48; end: 10ab1ed5b;  */

void FUN_10ab1ed48(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  uStack_28 = 800;
  uStack_24 = 0;
  lVar4 = param_2 + 0x1b0;
  FUN_10ab2b1e0(lVar4,&uStack_28);
  if (param_2 + 0x1b8 == lVar4) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar5 = *(long *)(lVar4 + 0x30);
    uVar6 = *(undefined8 *)(lVar4 + 0x28);
    param_1[1] = *(undefined8 *)(lVar4 + 0x30);
    *param_1 = uVar6;
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
  }
  return;
}



/* Entry: 10ab1ed5c; end: 10ab1ede3;  */

void FUN_10ab1ed5c(undefined8 param_1,undefined8 *param_2)

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
  FUN_10ab1e1a8(param_1,800,0,&uStack_30);
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
  return;
}



/* Entry: 10ab1ede4; end: 10ab1edf7;  */

void FUN_10ab1ede4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  uStack_28 = 800;
  uStack_24 = 1;
  lVar4 = param_2 + 0x1b0;
  FUN_10ab2b1e0(lVar4,&uStack_28);
  if (param_2 + 0x1b8 == lVar4) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar5 = *(long *)(lVar4 + 0x30);
    uVar6 = *(undefined8 *)(lVar4 + 0x28);
    param_1[1] = *(undefined8 *)(lVar4 + 0x30);
    *param_1 = uVar6;
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
  }
  return;
}



/* Entry: 10ab1edf8; end: 10ab1ee7f;  */

void FUN_10ab1edf8(undefined8 param_1,undefined8 *param_2)

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
  FUN_10ab1e1a8(param_1,800,1,&uStack_30);
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
  return;
}



/* Entry: 10ab1ee80; end: 10ab1ee93;  */

void FUN_10ab1ee80(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  uStack_28 = 900;
  uStack_24 = 0;
  lVar4 = param_2 + 0x1b0;
  FUN_10ab2b1e0(lVar4,&uStack_28);
  if (param_2 + 0x1b8 == lVar4) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar5 = *(long *)(lVar4 + 0x30);
    uVar6 = *(undefined8 *)(lVar4 + 0x28);
    param_1[1] = *(undefined8 *)(lVar4 + 0x30);
    *param_1 = uVar6;
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
  }
  return;
}



/* Entry: 10ab1ee94; end: 10ab1ef1b;  */

void FUN_10ab1ee94(undefined8 param_1,undefined8 *param_2)

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
  FUN_10ab1e1a8(param_1,900,0,&uStack_30);
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
  return;
}



/* Entry: 10ab1ef1c; end: 10ab1ef2f;  */

void FUN_10ab1ef1c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  uStack_28 = 900;
  uStack_24 = 1;
  lVar4 = param_2 + 0x1b0;
  FUN_10ab2b1e0(lVar4,&uStack_28);
  if (param_2 + 0x1b8 == lVar4) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar5 = *(long *)(lVar4 + 0x30);
    uVar6 = *(undefined8 *)(lVar4 + 0x28);
    param_1[1] = *(undefined8 *)(lVar4 + 0x30);
    *param_1 = uVar6;
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
  }
  return;
}



/* Entry: 10ab1ef30; end: 10ab1efb7;  */

void FUN_10ab1ef30(undefined8 param_1,undefined8 *param_2)

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
  FUN_10ab1e1a8(param_1,900,1,&uStack_30);
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
  return;
}



/* Entry: 10ab1efb8; end: 10ab1f1ab;  */

void FUN_10ab1efb8(long *param_1,long param_2)

{
  undefined1 uVar1;
  char cVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar6 = *(long *)(param_2 + 0x1c0);
  FUN_10ab1f1ac(param_1);
  plVar14 = *(long **)(param_2 + 0x1b0);
  if (plVar14 != (long *)(param_2 + 0x1b8)) {
    do {
      lVar10 = plVar14[5];
      if (lVar10 != 0) {
        lVar11 = plVar14[6];
        if (lVar11 != 0) {
          plVar12 = (long *)(lVar11 + 8);
          do {
            cVar2 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar5) {
              *plVar12 = *plVar12 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        lVar3 = plVar14[4];
        uVar1 = *(undefined1 *)((long)plVar14 + 0x24);
        plVar12 = (long *)param_1[1];
        if (plVar12 < (long *)param_1[2]) {
          *plVar12 = lVar10;
          plVar12[1] = lVar11;
          *(undefined1 *)((long)plVar12 + 0x14) = uVar1;
          *(int *)(plVar12 + 2) = (int)lVar3;
          plVar12 = plVar12 + 3;
        }
        else {
          lVar13 = (long)plVar12 - *param_1;
          uVar7 = (lVar13 >> 3) * -0x5555555555555555 + 1;
          if (0xaaaaaaaaaaaaaaa < uVar7) {
            FUN_10ab2b298();
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10ab1f184);
            (*pcVar4)();
          }
          lVar8 = param_1[2] - *param_1 >> 3;
          uVar9 = lVar8 * 0x5555555555555556;
          if (uVar9 < uVar7 || uVar9 - uVar7 == 0) {
            uVar9 = uVar7;
          }
          if (0x555555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
            uVar9 = 0xaaaaaaaaaaaaaaa;
          }
          plStack_68 = param_1;
          FUN_10ab2b2ac();
          plVar15 = (long *)(uVar9 + lVar13);
          lVar13 = lVar6 * 0x18;
          *plVar15 = lVar10;
          plVar15[1] = lVar11;
          *(undefined1 *)((long)plVar15 + 0x14) = uVar1;
          *(int *)(plVar15 + 2) = (int)lVar3;
          plVar12 = plVar15 + 3;
          lVar6 = param_1[1];
          lVar10 = (long)plVar15 + (*param_1 - lVar6);
          func_0x00010ab2b2f0(*param_1,lVar6,lVar10);
          lStack_88 = *param_1;
          *param_1 = lVar10;
          param_1[1] = (long)plVar12;
          lStack_70 = param_1[2];
          param_1[2] = uVar9 + lVar13;
          lStack_80 = lStack_88;
          lStack_78 = lStack_88;
          func_0x00010ab2b354(&lStack_88);
        }
        param_1[1] = (long)plVar12;
      }
      plVar12 = (long *)plVar14[1];
      plVar15 = plVar14;
      if ((long *)plVar14[1] == (long *)0x0) {
        do {
          plVar14 = (long *)plVar15[2];
          bVar5 = (long *)*plVar14 != plVar15;
          plVar15 = plVar14;
        } while (bVar5);
      }
      else {
        do {
          plVar14 = plVar12;
          plVar12 = (long *)*plVar14;
        } while ((long *)*plVar14 != (long *)0x0);
      }
    } while (plVar14 != (long *)(param_2 + 0x1b8));
  }
  return;
}



/* Entry: 10ab1f1ac; end: 10ab1f48f;  */

long * FUN_10ab1f1ac(long *param_1,long *param_2)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_98;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar6 = *param_1;
  if ((long *)((param_1[2] - lVar6 >> 3) * -0x5555555555555555) < param_2) {
    if ((long *)0xaaaaaaaaaaaaaaa < param_2) {
      FUN_10ab2b298();
      puVar4 = &uStack_f0;
      uVar5 = 0;
      if (param_1[2] == param_2[2]) {
        plVar9 = (long *)*param_1;
        if (plVar9 != param_1 + 1) {
          plVar10 = (long *)*param_2;
          do {
            if ((((int)plVar9[4] != (int)plVar10[4]) ||
                (*(char *)((long)plVar9 + 0x24) != *(char *)((long)plVar10 + 0x24))) ||
               (plVar9[5] != plVar10[5])) goto LAB_10ab1f344;
            plVar11 = (long *)plVar9[1];
            plVar12 = plVar9;
            if ((long *)plVar9[1] == (long *)0x0) {
              do {
                plVar9 = (long *)plVar12[2];
                bVar3 = (long *)*plVar9 != plVar12;
                plVar12 = plVar9;
              } while (bVar3);
            }
            else {
              do {
                plVar9 = plVar11;
                plVar11 = (long *)*plVar9;
              } while ((long *)*plVar9 != (long *)0x0);
            }
            plVar11 = plVar10;
            plVar12 = (long *)plVar10[1];
            if ((long *)plVar10[1] == (long *)0x0) {
              do {
                plVar10 = (long *)plVar11[2];
                bVar3 = (long *)*plVar10 != plVar11;
                plVar11 = plVar10;
              } while (bVar3);
            }
            else {
              do {
                plVar10 = plVar12;
                plVar12 = (long *)*plVar10;
              } while ((long *)*plVar10 != (long *)0x0);
            }
          } while (plVar9 != param_1 + 1);
        }
      }
      else {
LAB_10ab1f344:
        plVar10 = param_1 + 1;
        FUN_10ab35488(*plVar10);
        *param_1 = *param_2;
        plVar9 = param_2 + 1;
        lVar6 = *plVar9;
        *plVar10 = lVar6;
        lVar8 = param_2[2];
        param_1[2] = lVar8;
        if (lVar8 == 0) {
          *param_1 = (long)plVar10;
        }
        else {
          *(long **)(lVar6 + 0x10) = plVar10;
          *param_2 = (long)plVar9;
          *plVar9 = 0;
          param_2[2] = 0;
        }
        func_0x00010a1bd170();
        uVar2 = uRam000000011330276a;
        uVar1 = *(ushort *)((long)param_1 + (0x139 - (ulong)uRam000000011330276a));
        if ((uVar1 >> 8 & 1) == 0) {
          if (((*(long *)((long)param_1 + (0x110 - (ulong)uRam000000011330276a)) != 0) ||
              ((uVar1 >> 9 & 1) != 0)) ||
             (*(long *)((long)param_1 + (0x130 - (ulong)uRam000000011330276a)) != 0)) {
            func_0x00010a1bd170();
            if ((uVar5 & 1) != 0) {
              return param_1;
            }
            uStack_b8 = 0;
            uStack_c0 = 0;
            uStack_a8 = 0;
            uStack_b0 = 0;
            uStack_d8 = 0;
            uStack_e0 = 0;
            uStack_c8 = 0;
            uStack_d0 = 0;
            uStack_e8 = 0;
            uStack_f0 = 0;
            ppuStack_98 = &PTR_DAT_110c48808;
            uVar5 = (ulong)&uStack_f0 | 8;
            FUN_10a0dad0c(uVar5,&ppuStack_98);
            uVar7 = (ulong)uRam000000011330276a;
            if ((*(ushort *)((long)param_1 + (0x139 - uVar7)) >> 8 & 1) != 0) {
              FUN_10a1bd5e0();
              uVar7 = (ulong)uRam000000011330276a;
              if (uVar5 != 0) {
                FUN_10a1bd648();
                uVar7 = (ulong)uRam000000011330276a;
              }
            }
            FUN_10a1c054c((long)param_1 + (0xe0 - uVar7),&uStack_f0);
            return param_1;
          }
          *(long *)((long)param_1 + (0xf0 - (ulong)uRam000000011330276a)) =
               *(long *)((long)param_1 + (0xf0 - (ulong)uRam000000011330276a)) + 1;
        }
        if ((*(undefined ***)((long)param_1 + (0x140 - (ulong)uVar2)) != &PTR_DAT_110c48808) &&
           (FUN_10a1bd5e0(), puVar4 != (undefined8 *)0x0)) {
          FUN_10a1bd648();
          *(undefined ***)((long)param_1 + (0x140 - (ulong)uVar2)) = &PTR_DAT_110c48808;
        }
      }
      return param_1;
    }
    lVar8 = param_1[1];
    plVar9 = param_2;
    plStack_38 = param_1;
    FUN_10ab2b2ac();
    lVar6 = (long)param_2 + (lVar8 - lVar6);
    lVar8 = lVar6 + (*param_1 - param_1[1]);
    func_0x00010ab2b2f0(*param_1,param_1[1],lVar8);
    lStack_58 = *param_1;
    *param_1 = lVar8;
    param_1[1] = lVar6;
    lStack_40 = param_1[2];
    param_1[2] = (long)(param_2 + (long)plVar9 * 3);
    param_1 = &lStack_58;
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x00010ab2b354(param_1);
  }
  return param_1;
}



/* Entry: 10ab1f490; end: 10ab1f947;  */

void FUN_10ab1f490(undefined8 *param_1,long param_2)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  ulong uVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  undefined8 ***pppuVar9;
  long *plVar10;
  char *pcVar11;
  long lVar12;
  char *pcVar13;
  long *plVar14;
  long *plVar15;
  undefined8 **ppuVar16;
  undefined8 **ppuVar17;
  long alStack_d8 [2];
  char cStack_c1;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 **ppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uStack_b0 = CONCAT17(0x10,(undefined7)uStack_b0);
  lStack_b8 = 0x796c696d6146746e;
  lStack_c0 = 0x6f462e7465737341;
  uStack_b0 = uStack_b0 & 0xffffffffffffff00;
  plVar14 = &lStack_c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (plVar14,&UNK_10f6904a5,0xd);
  lStack_98 = plVar14[1];
  lStack_a0 = *plVar14;
  lStack_90 = plVar14[2];
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = 0;
  uVar4 = *(ulong *)(param_2 + 0x1a0);
  lVar12 = *(long *)(param_2 + 0x198);
  if (-1 < (char)*(byte *)(param_2 + 0x1af)) {
    uVar4 = (ulong)*(byte *)(param_2 + 0x1af);
    lVar12 = param_2 + 0x198;
  }
  plVar14 = &lStack_a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(plVar14,lVar12,uVar4)
  ;
  uStack_78 = plVar14[1];
  ppuStack_80 = (undefined8 **)*plVar14;
  uStack_70 = plVar14[2];
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = 0;
  pppuVar9 = &ppuStack_80;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar9,&UNK_10f6904b3,10);
  ppuVar17 = pppuVar9[1];
  ppuVar16 = *pppuVar9;
  param_1[2] = pppuVar9[2];
  param_1[1] = ppuVar17;
  *param_1 = ppuVar16;
  pppuVar9[1] = (undefined8 **)0x0;
  pppuVar9[2] = (undefined8 **)0x0;
  *pppuVar9 = (undefined8 **)0x0;
  if ((long)uStack_70 < 0) {
    __ZdlPv(ppuStack_80);
  }
  if (lStack_90 < 0) {
    __ZdlPv(lStack_a0);
  }
  if ((long)uStack_b0 < 0) {
    __ZdlPv(lStack_c0);
  }
  plVar14 = *(long **)(param_2 + 0x1b0);
  if (plVar14 != (long *)(param_2 + 0x1b8)) {
    pcVar1 = "Unknown";
    bVar8 = true;
    do {
      lVar12 = plVar14[5];
      if (lVar12 != 0) {
        if (!bVar8) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (param_1,&DAT_10f68f19e,2);
          lVar12 = plVar14[5];
        }
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (alStack_d8,&UNK_10f6904be,lVar12 + 0x58);
        plVar10 = alStack_d8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (plVar10,&UNK_10f6903ea,9);
        lStack_b8 = plVar10[1];
        lStack_c0 = *plVar10;
        uStack_b0 = plVar10[2];
        plVar10[1] = 0;
        plVar10[2] = 0;
        *plVar10 = 0;
        iVar5 = (int)plVar14[4];
        cVar6 = *(char *)((long)plVar14 + 0x24);
        if (iVar5 < 500) {
          pcVar13 = "Light Italic";
          if (cVar6 == '\0') {
            pcVar13 = "Light";
          }
          pcVar11 = "Regular Italic";
          if (cVar6 == '\0') {
            pcVar11 = "Regular";
          }
          if (iVar5 != 400) {
            pcVar11 = pcVar1;
          }
          if (iVar5 != 300) {
            pcVar13 = pcVar11;
          }
          pcVar11 = "Thin Italic";
          if (cVar6 == '\0') {
            pcVar11 = "Thin";
          }
          pcVar3 = "ExtraLight Italic";
          if (cVar6 == '\0') {
            pcVar3 = "ExtraLight";
          }
          if (iVar5 != 200) {
            pcVar3 = pcVar1;
          }
          if (iVar5 != 100) {
            pcVar11 = pcVar3;
          }
          bVar7 = SBORROW4(iVar5,299);
          iVar2 = iVar5 + -299;
          bVar8 = iVar5 == 299;
        }
        else {
          bVar8 = cVar6 == '\0';
          pcVar13 = "Bold Italic";
          if (bVar8) {
            pcVar13 = "Bold";
          }
          pcVar11 = "ExtraBold Italic";
          if (bVar8) {
            pcVar11 = "ExtraBold";
          }
          pcVar3 = "Heavy Italic";
          if (bVar8) {
            pcVar3 = "Heavy";
          }
          if (iVar5 != 900) {
            pcVar3 = pcVar1;
          }
          if (iVar5 != 800) {
            pcVar11 = pcVar3;
          }
          if (iVar5 != 700) {
            pcVar13 = pcVar11;
          }
          pcVar11 = "Medium Italic";
          if (cVar6 == '\0') {
            pcVar11 = "Medium";
          }
          pcVar3 = "SemiBold Italic";
          if (cVar6 == '\0') {
            pcVar3 = "SemiBold";
          }
          if (iVar5 != 600) {
            pcVar3 = pcVar1;
          }
          if (iVar5 != 500) {
            pcVar11 = pcVar3;
          }
          bVar7 = SBORROW4(iVar5,699);
          iVar2 = iVar5 + -699;
          bVar8 = iVar5 == 699;
        }
        if (bVar8 || iVar2 < 0 != bVar7) {
          pcVar13 = pcVar11;
        }
        pcVar11 = pcVar13;
        _strlen(pcVar13);
        plVar10 = &lStack_c0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (plVar10,pcVar13,pcVar11);
        lStack_98 = plVar10[1];
        lStack_a0 = *plVar10;
        lStack_90 = plVar10[2];
        plVar10[1] = 0;
        plVar10[2] = 0;
        *plVar10 = 0;
        plVar10 = &lStack_a0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (plVar10,&DAT_10f2da10d,1);
        uStack_78 = plVar10[1];
        ppuStack_80 = (undefined8 **)*plVar10;
        uStack_70 = plVar10[2];
        plVar10[1] = 0;
        plVar10[2] = 0;
        *plVar10 = 0;
        uVar4 = uStack_78;
        pppuVar9 = (undefined8 ***)ppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar4 = uStack_70 >> 0x38;
          pppuVar9 = &ppuStack_80;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_1,pppuVar9,uVar4);
        if ((long)uStack_70 < 0) {
          __ZdlPv(ppuStack_80);
        }
        if (lStack_90 < 0) {
          __ZdlPv(lStack_a0);
        }
        if ((long)uStack_b0 < 0) {
          __ZdlPv(lStack_c0);
        }
        if (cStack_c1 < '\0') {
          __ZdlPv(alStack_d8[0]);
        }
        bVar8 = false;
      }
      plVar10 = (long *)plVar14[1];
      plVar15 = plVar14;
      if ((long *)plVar14[1] == (long *)0x0) {
        do {
          plVar14 = (long *)plVar15[2];
          bVar7 = (long *)*plVar14 != plVar15;
          plVar15 = plVar14;
        } while (bVar7);
      }
      else {
        do {
          plVar14 = plVar10;
          plVar10 = (long *)*plVar14;
        } while ((long *)*plVar14 != (long *)0x0);
      }
    } while (plVar14 != (long *)(param_2 + 0x1b8));
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f62a9ea,1);
  return;
}



/* Entry: 10ab1f948; end: 10ab1f94f;  */

void FUN_10ab1f948(undefined8 *param_1,long param_2)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  ulong uVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  undefined8 ***pppuVar9;
  long *plVar10;
  char *pcVar11;
  long lVar12;
  char *pcVar13;
  long *plVar14;
  long *plVar15;
  undefined8 **ppuVar16;
  undefined8 **ppuVar17;
  long alStack_d8 [2];
  char cStack_c1;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 **ppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uStack_b0 = CONCAT17(0x10,(undefined7)uStack_b0);
  lStack_b8 = 0x796c696d6146746e;
  lStack_c0 = 0x6f462e7465737341;
  uStack_b0 = uStack_b0 & 0xffffffffffffff00;
  plVar14 = &lStack_c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (plVar14,&UNK_10f6904a5,0xd);
  lStack_98 = plVar14[1];
  lStack_a0 = *plVar14;
  lStack_90 = plVar14[2];
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = 0;
  uVar4 = *(ulong *)(param_2 + 400);
  lVar12 = *(long *)(param_2 + 0x188);
  if (-1 < (char)*(byte *)(param_2 + 0x19f)) {
    uVar4 = (ulong)*(byte *)(param_2 + 0x19f);
    lVar12 = param_2 + 0x188;
  }
  plVar14 = &lStack_a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(plVar14,lVar12,uVar4)
  ;
  uStack_78 = plVar14[1];
  ppuStack_80 = (undefined8 **)*plVar14;
  uStack_70 = plVar14[2];
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = 0;
  pppuVar9 = &ppuStack_80;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar9,&UNK_10f6904b3,10);
  ppuVar17 = pppuVar9[1];
  ppuVar16 = *pppuVar9;
  param_1[2] = pppuVar9[2];
  param_1[1] = ppuVar17;
  *param_1 = ppuVar16;
  pppuVar9[1] = (undefined8 **)0x0;
  pppuVar9[2] = (undefined8 **)0x0;
  *pppuVar9 = (undefined8 **)0x0;
  if ((long)uStack_70 < 0) {
    __ZdlPv(ppuStack_80);
  }
  if (lStack_90 < 0) {
    __ZdlPv(lStack_a0);
  }
  if ((long)uStack_b0 < 0) {
    __ZdlPv(lStack_c0);
  }
  plVar14 = *(long **)(param_2 + 0x1a0);
  if (plVar14 != (long *)(param_2 + 0x1a8)) {
    pcVar1 = "Unknown";
    bVar8 = true;
    do {
      lVar12 = plVar14[5];
      if (lVar12 != 0) {
        if (!bVar8) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (param_1,&DAT_10f68f19e,2);
          lVar12 = plVar14[5];
        }
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (alStack_d8,&UNK_10f6904be,lVar12 + 0x58);
        plVar10 = alStack_d8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (plVar10,&UNK_10f6903ea,9);
        lStack_b8 = plVar10[1];
        lStack_c0 = *plVar10;
        uStack_b0 = plVar10[2];
        plVar10[1] = 0;
        plVar10[2] = 0;
        *plVar10 = 0;
        iVar5 = (int)plVar14[4];
        cVar6 = *(char *)((long)plVar14 + 0x24);
        if (iVar5 < 500) {
          pcVar13 = "Light Italic";
          if (cVar6 == '\0') {
            pcVar13 = "Light";
          }
          pcVar11 = "Regular Italic";
          if (cVar6 == '\0') {
            pcVar11 = "Regular";
          }
          if (iVar5 != 400) {
            pcVar11 = pcVar1;
          }
          if (iVar5 != 300) {
            pcVar13 = pcVar11;
          }
          pcVar11 = "Thin Italic";
          if (cVar6 == '\0') {
            pcVar11 = "Thin";
          }
          pcVar3 = "ExtraLight Italic";
          if (cVar6 == '\0') {
            pcVar3 = "ExtraLight";
          }
          if (iVar5 != 200) {
            pcVar3 = pcVar1;
          }
          if (iVar5 != 100) {
            pcVar11 = pcVar3;
          }
          bVar7 = SBORROW4(iVar5,299);
          iVar2 = iVar5 + -299;
          bVar8 = iVar5 == 299;
        }
        else {
          bVar8 = cVar6 == '\0';
          pcVar13 = "Bold Italic";
          if (bVar8) {
            pcVar13 = "Bold";
          }
          pcVar11 = "ExtraBold Italic";
          if (bVar8) {
            pcVar11 = "ExtraBold";
          }
          pcVar3 = "Heavy Italic";
          if (bVar8) {
            pcVar3 = "Heavy";
          }
          if (iVar5 != 900) {
            pcVar3 = pcVar1;
          }
          if (iVar5 != 800) {
            pcVar11 = pcVar3;
          }
          if (iVar5 != 700) {
            pcVar13 = pcVar11;
          }
          pcVar11 = "Medium Italic";
          if (cVar6 == '\0') {
            pcVar11 = "Medium";
          }
          pcVar3 = "SemiBold Italic";
          if (cVar6 == '\0') {
            pcVar3 = "SemiBold";
          }
          if (iVar5 != 600) {
            pcVar3 = pcVar1;
          }
          if (iVar5 != 500) {
            pcVar11 = pcVar3;
          }
          bVar7 = SBORROW4(iVar5,699);
          iVar2 = iVar5 + -699;
          bVar8 = iVar5 == 699;
        }
        if (bVar8 || iVar2 < 0 != bVar7) {
          pcVar13 = pcVar11;
        }
        pcVar11 = pcVar13;
        _strlen(pcVar13);
        plVar10 = &lStack_c0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (plVar10,pcVar13,pcVar11);
        lStack_98 = plVar10[1];
        lStack_a0 = *plVar10;
        lStack_90 = plVar10[2];
        plVar10[1] = 0;
        plVar10[2] = 0;
        *plVar10 = 0;
        plVar10 = &lStack_a0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (plVar10,&DAT_10f2da10d,1);
        uStack_78 = plVar10[1];
        ppuStack_80 = (undefined8 **)*plVar10;
        uStack_70 = plVar10[2];
        plVar10[1] = 0;
        plVar10[2] = 0;
        *plVar10 = 0;
        uVar4 = uStack_78;
        pppuVar9 = (undefined8 ***)ppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar4 = uStack_70 >> 0x38;
          pppuVar9 = &ppuStack_80;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_1,pppuVar9,uVar4);
        if ((long)uStack_70 < 0) {
          __ZdlPv(ppuStack_80);
        }
        if (lStack_90 < 0) {
          __ZdlPv(lStack_a0);
        }
        if ((long)uStack_b0 < 0) {
          __ZdlPv(lStack_c0);
        }
        if (cStack_c1 < '\0') {
          __ZdlPv(alStack_d8[0]);
        }
        bVar8 = false;
      }
      plVar10 = (long *)plVar14[1];
      plVar15 = plVar14;
      if ((long *)plVar14[1] == (long *)0x0) {
        do {
          plVar14 = (long *)plVar15[2];
          bVar7 = (long *)*plVar14 != plVar15;
          plVar15 = plVar14;
        } while (bVar7);
      }
      else {
        do {
          plVar14 = plVar10;
          plVar10 = (long *)*plVar14;
        } while ((long *)*plVar14 != (long *)0x0);
      }
    } while (plVar14 != (long *)(param_2 + 0x1a8));
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f62a9ea,1);
  return;
}



/* Entry: 10ab1f950; end: 10ab1fa9f;  */

void FUN_10ab1f950(long param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  
  func_0x00010aa70b70();
  FUN_10a00d760(param_2,&PTR_s_familyName_110c47820,param_1 + 0x198);
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c482f8);
  plVar3 = *(long **)(param_1 + 0x1b0);
  while (plVar3 != (long *)(param_1 + 0x1b8)) {
    if (plVar3[5] != 0) {
      (**(code **)(*param_2 + 0x10))(param_2);
      (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c47840,(int)plVar3[4]);
      (**(code **)(*param_2 + 0x70))
                (param_2,&PTR_s_italic_110c48318,*(undefined1 *)((long)plVar3 + 0x24));
      FUN_10a1f4a50(param_2,&PTR_s_font_110c48338,plVar3 + 5,&UNK_10f645a1b,10);
      (**(code **)(*param_2 + 0x20))(param_2);
    }
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
  }
                    /* WARNING: Could not recover jumptable at 0x00010ab1fa9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



/* Entry: 10ab1faa0; end: 10ab1fcab;  */

void FUN_10ab1faa0(long param_1,long *param_2)

{
  uint uVar1;
  char cVar2;
  long *****ppppplVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long ****pppplVar7;
  long *extraout_x8;
  long lVar8;
  long *****ppppplVar9;
  long *****ppppplVar10;
  ulong unaff_x22;
  undefined **unaff_x23;
  undefined **unaff_x24;
  long *plVar11;
  long *plVar12;
  long ***ppplVar13;
  long ****pppplStack_138;
  long ****pppplStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long ****pppplStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  ulong uStack_f0;
  long *plStack_e8;
  long lStack_e0;
  long *plStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined4 uStack_90;
  undefined1 uStack_8c;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010aa70acc();
  (**(code **)(*param_2 + 0xa8))(&lStack_c0,param_2,&PTR_s_familyName_110c47820,&UNK_10f68ffe7,0);
  plVar11 = (long *)(param_1 + 0x198);
  if (*(char *)(param_1 + 0x1af) < '\0') {
    __ZdlPv(*plVar11);
  }
  *(undefined8 *)(param_1 + 0x1a0) = uStack_b8;
  *plVar11 = lStack_c0;
  *(undefined8 *)(param_1 + 0x1a8) = uStack_b0;
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c482f8);
  plStack_d8 = plVar5;
  if ((int)plVar5 != 0) {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c482f8);
    plVar11 = param_2;
    (**(code **)(*param_2 + 0x208))();
    if ((uint)plVar11 != 0) {
      unaff_x22 = 0;
      unaff_x23 = &PTR_DAT_110c47840;
      unaff_x24 = &PTR_s_italic_110c48318;
      do {
        (**(code **)(*param_2 + 0x218))(param_2,unaff_x22);
        plVar5 = param_2;
        (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c47840,400);
        plVar6 = param_2;
        (**(code **)(*param_2 + 0x58))(param_2,&PTR_s_italic_110c48318,0);
        pcStack_a8 = FUN_10ab354c8;
        ppuStack_a0 = &PTR_FUN_110c48820;
        uStack_90 = SUB84(plVar5,0);
        uStack_8c = SUB81(plVar6,0);
        lStack_98 = param_1;
        FUN_10ab1cdf4(param_2,&PTR_s_font_110c48338,&pcStack_a8);
        (*(code *)*ppuStack_a0)(&ppuStack_a0);
        (**(code **)(*param_2 + 0x220))(param_2);
        uVar1 = (int)unaff_x22 + 1;
        unaff_x22 = (ulong)uVar1;
      } while ((uint)plVar11 != uVar1);
    }
    (**(code **)(*param_2 + 0x220))();
    plStack_d8 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  plVar5 = plStack_d8;
  __Unwind_Resume();
  pcStack_c8 = FUN_10ab1fcac;
  ppuStack_100 = unaff_x24;
  ppuStack_f8 = unaff_x23;
  uStack_f0 = unaff_x22;
  plStack_e8 = plVar11;
  lStack_e0 = param_1;
  puStack_d0 = &stack0xfffffffffffffff0;
  FUN_10ab1dbd4(&lStack_120,plVar5[10]);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lStack_120 + 0x198,plVar5 + 0x33);
  pppplStack_130 = (long ****)0x0;
  lStack_128 = 0;
  plVar11 = (long *)plVar5[0x36];
  pppplStack_138 = (long ****)&pppplStack_130;
  do {
    if (plVar11 == plVar5 + 0x37) {
      func_0x00010ab1f268(lStack_120 + 0x1b0,&pppplStack_138);
      FUN_10ab35488(pppplStack_130);
      extraout_x8[1] = lStack_118;
      *extraout_x8 = lStack_120;
      return;
    }
    ppppplVar9 = &pppplStack_130;
    if ((long *****)pppplStack_138 == &pppplStack_130) {
LAB_10ab1fd8c:
      if ((long *****)pppplStack_130 == (long *****)0x0) {
        pppplStack_108 = (long ****)&pppplStack_130;
        ppppplVar9 = &pppplStack_130;
      }
      else {
        pppplStack_108 = (long ****)ppppplVar9;
        ppppplVar9 = ppppplVar9 + 1;
      }
    }
    else {
      ppppplVar10 = &pppplStack_130;
      ppppplVar3 = (long *****)pppplStack_130;
      if ((long *****)pppplStack_130 == (long *****)0x0) {
        do {
          ppppplVar9 = (long *****)ppppplVar10[2];
          bVar4 = (long *****)*ppppplVar9 == ppppplVar10;
          ppppplVar10 = ppppplVar9;
        } while (bVar4);
      }
      else {
        do {
          ppppplVar9 = ppppplVar3;
          ppppplVar3 = (long *****)ppppplVar9[1];
        } while ((long *****)ppppplVar9[1] != (long *****)0x0);
      }
      bVar4 = *(int *)(ppppplVar9 + 4) < (int)plVar11[4];
      if (*(int *)(ppppplVar9 + 4) == (int)plVar11[4]) {
        bVar4 = *(byte *)((long)ppppplVar9 + 0x24) != *(byte *)((long)plVar11 + 0x24) &&
                *(byte *)((long)ppppplVar9 + 0x24) < *(byte *)((long)plVar11 + 0x24);
      }
      if (bVar4) goto LAB_10ab1fd8c;
      ppppplVar9 = &pppplStack_138;
      FUN_10ab35334(ppppplVar9,&pppplStack_108);
    }
    if (*ppppplVar9 == (long ****)0x0) {
      pppplVar7 = (long ****)0x38;
      __Znwm();
      pppplVar7[4] = (long ***)plVar11[4];
      lVar8 = plVar11[6];
      ppplVar13 = (long ***)plVar11[5];
      pppplVar7[6] = (long ***)plVar11[6];
      pppplVar7[5] = ppplVar13;
      if (lVar8 != 0) {
        plVar6 = (long *)(lVar8 + 8);
        do {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = *plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      *pppplVar7 = (long ***)0x0;
      pppplVar7[1] = (long ***)0x0;
      pppplVar7[2] = (long ***)pppplStack_108;
      *ppppplVar9 = pppplVar7;
      if ((long *****)*pppplStack_138 != (long *****)0x0) {
        pppplVar7 = *ppppplVar9;
        pppplStack_138 = (long ****)*pppplStack_138;
      }
      func_0x000107c2b058(pppplStack_130,pppplVar7);
      lStack_128 = lStack_128 + 1;
    }
    plVar6 = (long *)plVar11[1];
    plVar12 = plVar11;
    if ((long *)plVar11[1] == (long *)0x0) {
      do {
        plVar11 = (long *)plVar12[2];
        bVar4 = (long *)*plVar11 != plVar12;
        plVar12 = plVar11;
      } while (bVar4);
    }
    else {
      do {
        plVar11 = plVar6;
        plVar6 = (long *)*plVar11;
      } while ((long *)*plVar11 != (long *)0x0);
    }
  } while( true );
}



/* Entry: 10ab1fcac; end: 10ab1feb3;  */

void FUN_10ab1fcac(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  long *****ppppplVar3;
  bool bVar4;
  long ****pppplVar5;
  long lVar6;
  long *****ppppplVar7;
  long *****ppppplVar8;
  long *plVar9;
  long *plVar10;
  long ***ppplVar11;
  long ****pppplStack_78;
  long ****pppplStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long ****pppplStack_48;
  
  FUN_10ab1dbd4(&lStack_60,*(undefined8 *)(param_2 + 0x50));
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lStack_60 + 0x198,param_2 + 0x198);
  pppplStack_70 = (long ****)0x0;
  lStack_68 = 0;
  pppplStack_78 = (long ****)&pppplStack_70;
  plVar9 = *(long **)(param_2 + 0x1b0);
  do {
    if (plVar9 == (long *)(param_2 + 0x1b8)) {
      func_0x00010ab1f268(lStack_60 + 0x1b0,&pppplStack_78);
      FUN_10ab35488(pppplStack_70);
      param_1[1] = lStack_58;
      *param_1 = lStack_60;
      return;
    }
    ppppplVar7 = &pppplStack_70;
    if ((long *****)pppplStack_78 == &pppplStack_70) {
LAB_10ab1fd8c:
      if ((long *****)pppplStack_70 == (long *****)0x0) {
        pppplStack_48 = (long ****)&pppplStack_70;
        ppppplVar7 = &pppplStack_70;
      }
      else {
        pppplStack_48 = (long ****)ppppplVar7;
        ppppplVar7 = ppppplVar7 + 1;
      }
    }
    else {
      ppppplVar8 = &pppplStack_70;
      ppppplVar3 = (long *****)pppplStack_70;
      if ((long *****)pppplStack_70 == (long *****)0x0) {
        do {
          ppppplVar7 = (long *****)ppppplVar8[2];
          bVar4 = (long *****)*ppppplVar7 == ppppplVar8;
          ppppplVar8 = ppppplVar7;
        } while (bVar4);
      }
      else {
        do {
          ppppplVar7 = ppppplVar3;
          ppppplVar3 = (long *****)ppppplVar7[1];
        } while ((long *****)ppppplVar7[1] != (long *****)0x0);
      }
      bVar4 = *(int *)(ppppplVar7 + 4) < (int)plVar9[4];
      if (*(int *)(ppppplVar7 + 4) == (int)plVar9[4]) {
        bVar4 = *(byte *)((long)ppppplVar7 + 0x24) != *(byte *)((long)plVar9 + 0x24) &&
                *(byte *)((long)ppppplVar7 + 0x24) < *(byte *)((long)plVar9 + 0x24);
      }
      if (bVar4) goto LAB_10ab1fd8c;
      ppppplVar7 = &pppplStack_78;
      FUN_10ab35334(ppppplVar7,&pppplStack_48);
    }
    if (*ppppplVar7 == (long ****)0x0) {
      pppplVar5 = (long ****)0x38;
      __Znwm();
      pppplVar5[4] = (long ***)plVar9[4];
      lVar6 = plVar9[6];
      ppplVar11 = (long ***)plVar9[5];
      pppplVar5[6] = (long ***)plVar9[6];
      pppplVar5[5] = ppplVar11;
      if (lVar6 != 0) {
        plVar1 = (long *)(lVar6 + 8);
        do {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      *pppplVar5 = (long ***)0x0;
      pppplVar5[1] = (long ***)0x0;
      pppplVar5[2] = (long ***)pppplStack_48;
      *ppppplVar7 = pppplVar5;
      if ((long *****)*pppplStack_78 != (long *****)0x0) {
        pppplStack_78 = (long ****)*pppplStack_78;
        pppplVar5 = *ppppplVar7;
      }
      func_0x000107c2b058(pppplStack_70,pppplVar5);
      lStack_68 = lStack_68 + 1;
    }
    plVar1 = (long *)plVar9[1];
    plVar10 = plVar9;
    if ((long *)plVar9[1] == (long *)0x0) {
      do {
        plVar9 = (long *)plVar10[2];
        bVar4 = (long *)*plVar9 != plVar10;
        plVar10 = plVar9;
      } while (bVar4);
    }
    else {
      do {
        plVar9 = plVar1;
        plVar1 = (long *)*plVar9;
      } while ((long *)*plVar9 != (long *)0x0);
    }
  } while( true );
}



/* Entry: 10ab1feb4; end: 10ab203cb;  */

void FUN_10ab1feb4(undefined8 param_1)

{
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
  puStack_a8 = &UNK_10f6904c6;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f68ffe7;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f68ffe7;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a004eb4(param_1,&puStack_a8);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f6904d1;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f68ffe7;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x174;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a2ad5cc(param_1,&puStack_a8,&PTR_DAT_110c47860);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6904d6;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f68ffe7;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x174;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a2ad5cc(param_1,&puStack_a8,&PTR_DAT_110c47870);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f6904e1;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f68ffe7;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x174;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a2ad5cc(param_1,&puStack_a8,&PTR_DAT_110c47880);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6904ec;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f68ffe7;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x174;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a2ad5cc(param_1,&puStack_a8,&PTR_DAT_110c47890);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f42ad1d;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f68ffe7;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x174;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a2ad5cc(param_1,&puStack_a8,&PTR_DAT_110c478a0);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6904fd;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f68ffe7;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x174;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a2ad5cc(param_1,&puStack_a8,&PTR_DAT_110c478b0);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f42ad23;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f68ffe7;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x174;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a2ad5cc(param_1,&puStack_a8,&PTR_DAT_110c478c0);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f690509;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f68ffe7;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x174;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a2ad5cc(param_1,&puStack_a8,&PTR_DAT_110c478d0);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f42ad2b;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f68ffe7;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x174;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a2ad5cc(param_1,&puStack_a8,&PTR_DAT_110c478e0);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f690517;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f68ffe7;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x174;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a2ad5cc(param_1,&puStack_a8,&PTR_DAT_110c478f0);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f690524;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f68ffe7;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x174;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a2ad5cc(param_1,&puStack_a8,&PTR_DAT_110c47900);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f69052d;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f68ffe7;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x174;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a2ad5cc(param_1,&puStack_a8,&PTR_DAT_110c47910);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f42ad32;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f68ffe7;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x174;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a2ad5cc(param_1,&puStack_a8,&PTR_DAT_110c47920);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f69053c;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f68ffe7;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x174;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a2ad5cc(param_1,&puStack_a8,&PTR_DAT_110c47930);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f690547;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f68ffe7;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x174;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a2ad5cc(param_1,&puStack_a8,&PTR_DAT_110c47940);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f690551;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f68ffe7;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x174;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a2ad5cc(param_1,&puStack_a8,&PTR_DAT_110c47950);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f690561;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f68ffe7;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x174;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a2ad5cc(param_1,&puStack_a8,&PTR_DAT_110c47960);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f690567;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f68ffe7;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x174;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a2ad5cc(param_1,&puStack_a8,&PTR_DAT_110c47970);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10ab203cc; end: 10ab2048f;  */

void FUN_10ab203cc(undefined8 *param_1,byte *param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar5;
  ulong uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(param_1);
  puVar2 = PTR___DefaultRuneLocale_11034bcf8;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    bVar1 = *param_2;
    uVar5 = (ulong)(uint)bVar1;
    if ((char)bVar1 < '\0') {
      uVar4 = uVar5;
      ___maskrune(uVar5,0x4000);
      uVar3 = (uint)uVar4;
    }
    else {
      uVar3 = *(uint *)(puVar2 + uVar5 * 4 + 0x3c) & 0x4000;
    }
    if (bVar1 != 0x2d && uVar3 == 0) {
      ___tolower(uVar5);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (param_1,(int)(char)uVar5);
    }
    param_2 = param_2 + 1;
  }
  return;
}



/* Entry: 10ab20490; end: 10ab205c7;  */

undefined1  [16] FUN_10ab20490(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x19;
  auVar1._0_8_ = &UNK_10f691c31;
  return auVar1;
}



/* Entry: 10ab205c8; end: 10ab20887;  */

void FUN_10ab205c8(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f691c31,0x19);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c47fe8;
  pppuVar2 = (undefined8 ***)&UNK_10f68ffe7;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x800000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0xf3;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,8,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c47fe8;
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
    FUN_10a0605c4(param_1,&UNK_10f690573,FUN_10ab35684,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f690583,FUN_10ab357a4,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f2c46ae,FUN_10ab3585c,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f68f0f0,FUN_10ab35914,0);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f691c31,0x19);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ab2086c);
  (*pcVar6)();
}



/* Entry: 10ab20888; end: 10ab20e83;  */

void FUN_10ab20888(ulong param_1)

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
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f663397,0x1c);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c48000;
  pppuVar2 = (undefined8 ***)&UNK_10f68ffe7;
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
    ppuStack_b0 = &PTR_DAT_110c48000;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c42c58;
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
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab20e64;
    FUN_10a054dac(param_1,&UNK_10f69058b,FUN_10ab359cc,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab20e64;
    FUN_10a054dac(param_1,&UNK_10f69059d,FUN_10ab35af0,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,8,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab20e64;
    FUN_10a054dac(param_1,&UNK_10f6905ab,FUN_10ab35bac,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab20e64;
    FUN_10a054dac(param_1,&UNK_10f6905bb,FUN_10ab35d74,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab20e64;
    FUN_10a054dac(param_1,&UNK_10f6905d2,FUN_10ab35e8c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab20e64;
    FUN_10a054dac(param_1,&UNK_10f6905e4,FUN_10ab3600c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab20e64;
    FUN_10a054dac(param_1,&UNK_10f6905f3,FUN_10ab360bc,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab20e64;
    FUN_10a054dac(param_1,&UNK_10f690605,FUN_10ab3616c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab20e64;
    FUN_10a054dac(param_1,&UNK_10f690614,FUN_10ab3621c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab20e64;
    FUN_10a054dac(param_1,&UNK_10f690626,FUN_10ab363b4,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab20e64;
    FUN_10a054dac(param_1,&UNK_10f690635,FUN_10ab3646c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab20e64;
    FUN_10a054dac(param_1,&UNK_10f690647,FUN_10ab36524,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f690656,FUN_10ab365dc,FUN_10ab36694);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f663397,0x1c);
      FUN_10a05431c(param_1);
    }
    uStack_98 = 0;
    uStack_90 = 0;
    ppuStack_a0 = (undefined8 **)&UNK_10f690665;
    uStack_80 = 0xffffffffffffffff;
    uStack_88 = 0x100000064;
    puStack_78 = &UNK_10f68ffe7;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
    uStack_48 = 0;
    uStack_40 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_a0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10ab20e64;
      FUN_10a054dac(param_1,&UNK_10f69067c,FUN_10ab36768,4,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10ab20e64:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ab20e68);
  (*pcVar6)();
}



/* Entry: 10ab20e84; end: 10ab20f33;  */

void FUN_10ab20e84(undefined8 *param_1)

{
  FUN_10aa7093c();
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x10c) = 0;
  *(undefined8 *)((long)param_1 + 0x104) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0x11c) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x114) = 0;
  *param_1 = &PTR_FUN_110c47990;
  param_1[2] = &PTR_DAT_110c47a30;
  param_1[7] = &PTR_DAT_110c47a88;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 1;
  *(undefined8 *)((long)param_1 + 300) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0x124) = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x31) = 1;
  *(undefined2 *)((long)param_1 + 0x18c) = 0;
  *(undefined1 *)((long)param_1 + 0x18e) = 0;
  *(undefined4 *)(param_1 + 0x32) = 0xffffffff;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x3b] = 0x32aaaba7;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x4c] = 0;
  return;
}



/* Entry: 10ab20f34; end: 10ab20fd7;  */

void FUN_10ab20f34(long param_1)

{
  long lStack_28;
  
  func_0x00010ab36d14(param_1 + 600);
  if (*(long *)(param_1 + 0x240) != 0) {
    *(long *)(param_1 + 0x248) = *(long *)(param_1 + 0x240);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x228) != 0) {
    *(long *)(param_1 + 0x230) = *(long *)(param_1 + 0x228);
    __ZdlPv();
  }
  func_0x00010ab36cbc(param_1 + 0x218);
  __ZNSt3__15mutexD1Ev(param_1 + 0x1d8);
  func_0x00010ab36c64(param_1 + 0x1c8);
  lStack_28 = param_1 + 0x1b0;
  FUN_10ab2c034(&lStack_28);
  lStack_28 = param_1 + 0x198;
  FUN_10a131d74(&lStack_28);
  FUN_10a3786c8(param_1 + 0x148);
  func_0x00010a05248c(param_1 + 0x138);
  FUN_10a1449ec(param_1 + 0xe0);
  func_0x00010aa71c88(param_1);
  return;
}



/* Entry: 10ab20fd8; end: 10ab20feb;  */

void FUN_10ab20fd8(long param_1)

{
  long lStack_28;
  
  func_0x00010ab36d14(param_1 + 600);
  if (*(long *)(param_1 + 0x240) != 0) {
    *(long *)(param_1 + 0x248) = *(long *)(param_1 + 0x240);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x228) != 0) {
    *(long *)(param_1 + 0x230) = *(long *)(param_1 + 0x228);
    __ZdlPv();
  }
  func_0x00010ab36cbc(param_1 + 0x218);
  __ZNSt3__15mutexD1Ev(param_1 + 0x1d8);
  func_0x00010ab36c64(param_1 + 0x1c8);
  lStack_28 = param_1 + 0x1b0;
  FUN_10ab2c034(&lStack_28);
  lStack_28 = param_1 + 0x198;
  FUN_10a131d74(&lStack_28);
  FUN_10a3786c8(param_1 + 0x148);
  func_0x00010a05248c(param_1 + 0x138);
  FUN_10a1449ec(param_1 + 0xe0);
  func_0x00010aa71c88(param_1);
  return;
}



/* Entry: 10ab20fec; end: 10ab2102f;  */

void FUN_10ab20fec(void)

{
  FUN_10ab20f34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab21030; end: 10ab2113f;  */

void FUN_10ab21030(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  func_0x00010aa70acc();
  (**(code **)(*param_2 + 0x210))(param_2,&PTR_s_provider_110c47680);
  FUN_10a7f02bc(auStack_30,param_2,0);
  FUN_10ab21140(param_1,auStack_30);
  (**(code **)(*param_2 + 0x220))(param_2);
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c47a98);
  if ((int)plVar3 != 0) {
    (**(code **)(*param_2 + 0x1a8))(&uStack_70,param_2,&PTR_DAT_110c47a98);
    *(undefined8 *)(param_1 + 0xfc) = uStack_68;
    *(undefined8 *)(param_1 + 0xf4) = uStack_70;
    *(undefined8 *)(param_1 + 0x10c) = uStack_58;
    *(undefined8 *)(param_1 + 0x104) = uStack_60;
    *(undefined8 *)(param_1 + 0x11c) = uStack_48;
    *(undefined8 *)(param_1 + 0x114) = uStack_50;
    *(undefined8 *)(param_1 + 300) = uStack_38;
    *(undefined8 *)(param_1 + 0x124) = uStack_40;
  }
  if (plStack_28 != (long *)0x0) {
    plVar3 = plStack_28 + 1;
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  return;
}



/* Entry: 10ab21140; end: 10ab2408f;  */

/* WARNING: Removing unreachable block (ram,0x00010ab21ad8) */
/* WARNING: Removing unreachable block (ram,0x00010ab21f3c) */
/* WARNING: Removing unreachable block (ram,0x00010ab2261c) */
/* WARNING: Removing unreachable block (ram,0x00010ab22fd4) */
/* WARNING: Removing unreachable block (ram,0x00010ab22290) */

void FUN_10ab21140(undefined8 param_1,undefined8 param_2,float param_3,long param_4)

{
  uint *puVar1;
  ulong *******pppppppuVar2;
  long lVar3;
  short sVar4;
  long *plVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  ulong ******ppppppuVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong *puVar16;
  undefined *puVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  undefined **ppuVar21;
  uint uVar22;
  undefined8 in_x7;
  uint uVar23;
  int *piVar24;
  long lVar25;
  undefined2 uVar26;
  ulong ******ppppppuVar27;
  ulong ******ppppppuVar28;
  long lVar29;
  ulong uVar30;
  ulong uVar31;
  long *plVar32;
  long lVar33;
  long *plVar34;
  int iVar35;
  ulong *******pppppppuVar36;
  undefined8 uVar37;
  ulong *******pppppppuVar38;
  ulong *******pppppppuVar39;
  ulong *******pppppppuVar40;
  undefined4 uVar41;
  undefined8 uVar42;
  ulong uVar43;
  float fVar44;
  ushort uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined *puStack_2c0;
  undefined8 uStack_2a8;
  ulong ******ppppppuStack_2a0;
  undefined8 uStack_298;
  ulong ******ppppppuStack_290;
  long lStack_288;
  ulong ******ppppppuStack_280;
  long lStack_278;
  ulong ******ppppppuStack_270;
  ulong ******ppppppuStack_268;
  char cStack_260;
  char cStack_259;
  ulong ******ppppppuStack_250;
  ulong ******ppppppuStack_248;
  byte bStack_240;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  ulong ******ppppppuStack_210;
  ulong ******ppppppuStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  ulong ******ppppppuStack_1e8;
  ulong ******ppppppuStack_1e0;
  ulong ******ppppppuStack_1d8;
  ulong ******ppppppuStack_1d0;
  ulong ******ppppppuStack_1c8;
  ulong ******ppppppuStack_1c0;
  ulong ******ppppppuStack_1b8;
  ulong ******ppppppuStack_1b0;
  ulong ******ppppppuStack_1a8;
  ulong ******ppppppuStack_1a0;
  ulong ******ppppppuStack_198;
  undefined8 auStack_190 [2];
  char cStack_179;
  undefined8 auStack_178 [2];
  char acStack_161 [185];
  long lStack_a8;
  
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a7f0dd8(param_4 + 0x148);
  pppppppuVar39 = *(ulong ********)(param_4 + 0x148);
  FUN_10a0f2388(&uStack_1f0,pppppppuVar39 + 0x15);
  pppppppuVar38 = (ulong *******)ppppppuStack_1e8;
  pppppppuVar40 = uStack_1f0;
  if (-1 < (long)ppppppuStack_1e0) {
    pppppppuVar38 = (ulong *******)((ulong)ppppppuStack_1e0 >> 0x38);
    pppppppuVar40 = (ulong *******)&uStack_1f0;
  }
  ppppppuStack_2a0 = (ulong ******)0x0;
  uStack_298 = 0;
  uStack_2a8 = (long *)0x0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
            (&uStack_2a8,pppppppuVar38,0);
  puVar17 = PTR___DefaultRuneLocale_11034bcf8;
  if (pppppppuVar38 != (ulong *******)0x0) {
    pppppppuVar36 = (ulong *******)0x0;
    do {
      cVar8 = *(char *)((long)pppppppuVar40 + (long)pppppppuVar36);
      lVar12 = (long)cVar8;
      if ((-1 < lVar12) && ((*(uint *)(puVar17 + lVar12 * 4 + 0x3c) >> 0xf & 1) != 0)) {
        ___tolower();
        cVar8 = (char)lVar12;
      }
      pppppppuVar2 = (ulong *******)ppppppuStack_2a0;
      if (-1 < (long)uStack_298) {
        pppppppuVar2 = (ulong *******)(uStack_298 >> 0x38);
      }
      if (pppppppuVar2 < pppppppuVar36) goto LAB_10ab23c08;
      plVar32 = uStack_2a8;
      if (-1 < (long)uStack_298) {
        plVar32 = &uStack_2a8;
      }
      *(char *)((long)plVar32 + (long)pppppppuVar36) = cVar8;
      pppppppuVar36 = (ulong *******)((long)pppppppuVar36 + 1);
    } while (pppppppuVar38 != pppppppuVar36);
  }
  if ((long)ppppppuStack_1e0 < 0) {
    __ZdlPv(uStack_1f0);
  }
  fVar46 = (float)param_2;
  if ((bRam00000001137ec3f8 & 1) == 0) {
    iVar10 = 0x137ec3f8;
    ___cxa_guard_acquire();
    fVar46 = (float)param_2;
    if (iVar10 != 0) {
      func_0x000107c2b054(&uStack_1f0,&DAT_10f3b407a);
      func_0x000107c2b054(&ppppppuStack_1d8,&UNK_10f6906d9);
      func_0x000107c2b054(&ppppppuStack_1c0,&UNK_10f63dd48);
      func_0x000107c2b054(&ppppppuStack_1a8,&UNK_10f6906de);
      func_0x000107c2b054(auStack_190,&UNK_10f6906e8);
      func_0x000107c2b054(auStack_178,&UNK_10f6906ec);
      FUN_10ab36d6c(0x1137ec408,&uStack_1f0,6,&uStack_230);
      lVar12 = 0;
      do {
        if (acStack_161[lVar12] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_178 + lVar12));
        }
        fVar46 = (float)param_2;
        lVar12 = lVar12 + -0x18;
      } while (lVar12 != -0x90);
      ___cxa_atexit(FUN_10ab24288,0x1137ec408,0x100000000);
      ___cxa_guard_release(0x1137ec3f8);
    }
  }
  lVar12 = 0x1137ec408;
  func_0x000107c280fc(0x1137ec408,&uStack_2a8);
  if (lVar12 == 0x1137ec410) {
    FUN_10a0f1b1c(&uStack_1f0,pppppppuVar39 + 0x15,0);
    if ((uStack_1f0 != (ulong *******)0x0) && (*(uint *)(uStack_1f0 + 1) < 5)) {
      ppppppuVar13 = *uStack_1f0;
      (*(code *)(*ppppppuVar13)[2])();
      if (((ulong)ppppppuVar13 & 1) != 0) {
        (*(code *)(**uStack_1f0)[4])(*uStack_1f0,&uStack_230,4,1);
        plVar32 = uStack_2a8;
        if ((int)(uint)uStack_230 < 0xa796c70) {
          if ((uint)uStack_230 != 2) {
            if ((uint)uStack_230 != 0x4034b50) goto LAB_10ab2138c;
            if ((long)uStack_298 < 0) {
              ppppppuStack_2a0 = (ulong ******)0x3;
            }
            else {
              uStack_298 = CONCAT17(3,(undefined7)uStack_298);
              plVar32 = &uStack_2a8;
            }
            *(undefined1 *)((long)plVar32 + 2) = 0x67;
            uVar26 = 0x6f73;
            goto LAB_10ab21434;
          }
          if ((long)uStack_298 < 0) {
            ppppppuStack_2a0 = (ulong ******)0x2;
          }
          else {
            uStack_298 = CONCAT17(2,(undefined7)uStack_298);
            plVar32 = &uStack_2a8;
          }
          piVar24 = (int *)((long)plVar32 + 2);
          *(undefined2 *)plVar32 = 0x7367;
LAB_10ab21438:
          *(undefined1 *)piVar24 = 0;
        }
        else {
          if ((uint)uStack_230 == 0xa796c70) {
            if ((long)uStack_298 < 0) {
              ppppppuStack_2a0 = (ulong ******)0x3;
            }
            else {
              uStack_298 = CONCAT17(3,(undefined7)uStack_298);
              plVar32 = &uStack_2a8;
            }
            *(undefined1 *)((long)plVar32 + 2) = 0x79;
            uVar26 = 0x6c70;
LAB_10ab21434:
            piVar24 = (int *)((long)plVar32 + 3);
            *(undefined2 *)plVar32 = uVar26;
            goto LAB_10ab21438;
          }
          if (((uint)uStack_230 == 0x46415347) || ((uint)uStack_230 == 0x47534146)) {
            if ((long)uStack_298 < 0) {
              ppppppuStack_2a0 = (ulong ******)0x4;
            }
            else {
              uStack_298 = CONCAT17(4,(undefined7)uStack_298);
              plVar32 = &uStack_2a8;
            }
            piVar24 = (int *)((long)plVar32 + 4);
            *(int *)plVar32 = 0x66617367;
            goto LAB_10ab21438;
          }
LAB_10ab2138c:
          if (((uint)uStack_230 & 0xffff) == 0x8b1f) {
            if ((long)uStack_298 < 0) {
              ppppppuStack_2a0 = (ulong ******)0x3;
            }
            else {
              uStack_298 = CONCAT17(3,(undefined7)uStack_298);
              plVar32 = &uStack_2a8;
            }
            *(undefined1 *)((long)plVar32 + 2) = 0x7a;
            uVar26 = 0x7073;
            goto LAB_10ab21434;
          }
        }
        FUN_10a0f1ea0(&uStack_1f0);
        goto LAB_10ab21444;
      }
    }
    FUN_10a08d2e0(&uStack_230,pppppppuVar39 + 0x15);
    FUN_10ab36b5c(&UNK_10f690665,&uStack_230);
    goto LAB_10ab23c08;
  }
LAB_10ab21444:
  if ((long)uStack_298 < 0) {
    if ((long)ppppppuStack_2a0 < 4) {
      if ((ulong *******)ppppppuStack_2a0 == (ulong *******)0x2) {
        sVar4 = (short)*uStack_2a8;
        goto LAB_10ab21868;
      }
      if ((ulong *******)ppppppuStack_2a0 == (ulong *******)0x3) {
        if ((short)*uStack_2a8 == 0x6c70 && *(char *)((long)uStack_2a8 + 2) == 'y')
        goto LAB_10ab222ec;
        if ((short)*uStack_2a8 == 0x6f73 && *(char *)((long)uStack_2a8 + 2) == 'g')
        goto LAB_10ab22b18;
        if ((short)*uStack_2a8 == 0x7073 && *(char *)((long)uStack_2a8 + 2) == 'z')
        goto LAB_10ab2153c;
      }
    }
    else {
      if ((ulong *******)ppppppuStack_2a0 == (ulong *******)0x4) {
        iVar10 = (int)*uStack_2a8;
        goto LAB_10ab21b7c;
      }
      plVar32 = uStack_2a8;
      if ((ulong *******)ppppppuStack_2a0 == (ulong *******)0x9) goto LAB_10ab216d4;
    }
  }
  else if (uStack_298._7_1_ < 4) {
    sVar4 = (short)uStack_2a8;
    if (uStack_298._7_1_ == 2) {
LAB_10ab21868:
      if (sVar4 == 0x7367) {
        if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
          FUN_10a08d2e0(&uStack_1f0,pppppppuVar39 + 0x15);
          func_0x00010ae06f08(1,4,&UNK_10f6906f0,&UNK_10f690732,0x162,&UNK_10f6907ab);
          if ((long)ppppppuStack_1e0 < 0) {
            __ZdlPv(uStack_1f0);
          }
        }
        FUN_10a08d2e0(&uStack_230,pppppppuVar39 + 0x15);
        FUN_10a0f6e20(&uStack_1f0,&uStack_230,0);
        if ((long)uStack_220 < 0) {
          __ZdlPv(uStack_230);
        }
        puVar14 = &uStack_1f0;
        (*(code *)uStack_1f0[7])(puVar14,&PTR_s_version_110c47ab8,1);
        uVar9 = (uint)puVar14;
        if ((int)uVar9 < 4) {
          if (uVar9 == 1) {
            puVar14 = &uStack_1f0;
            (*(code *)uStack_1f0[6])(puVar14,&PTR_DAT_110c48358);
            iVar10 = (int)puVar14;
            if (iVar10 + 0xfeffffffU >> 0x18 < 0xff) {
              ppppppuStack_250 = (ulong ******)CONCAT44(ppppppuStack_250._4_4_,iVar10);
              func_0x0001099a6214(&uStack_230,&UNK_10f690829,0x37,1,&ppppppuStack_250);
              FUN_10a0029c0(&uStack_230);
              goto LAB_10ab23c08;
            }
            *(int *)(param_4 + 0x180) = iVar10;
            *(int *)(param_4 + 0x184) = iVar10;
            fVar51 = SQRT((float)((ulong)puVar14 & 0xffffffff));
            fVar50 = (float)NEON_ucvtf((int)(float)(int)fVar51);
            fVar52 = (float)((ulong)puVar14 & 0xffffffff) / fVar50;
            uVar41 = NEON_ucvtf((int)(float)(int)fVar52);
            *(float *)(param_4 + 0x170) = fVar50;
            *(undefined4 *)(param_4 + 0x174) = uVar41;
            *(undefined8 *)(param_4 + 0x178) = 0;
            fVar49 = 3.4028235e+38;
            uStack_230 = (ulong *******)0x7f7fffff7f7fffff;
            uStack_228._0_4_ = 0x7f7fffff;
            (*(code *)uStack_1f0[0x1e])(&uStack_1f0,&PTR_DAT_110c47ad8,&uStack_230);
            uStack_230 = (ulong *******)0xff7fffffff7fffff;
            uStack_228 = (ulong *******)CONCAT44(uStack_228._4_4_,0xff7fffff);
            fVar46 = param_3;
            fVar48 = fVar49;
            fVar44 = fVar50;
            (*(code *)uStack_1f0[0x1e])(&uStack_1f0,&PTR_DAT_110c47af8,&uStack_230);
            fVar49 = (fVar49 + fVar48) * 0.5;
            fVar50 = (fVar50 + fVar44) * 0.5;
            fVar47 = (param_3 + fVar46) * 0.5;
            *(float *)(param_4 + 0x158) = fVar49;
            *(float *)(param_4 + 0x15c) = fVar50;
            *(float *)(param_4 + 0x160) = fVar47;
            *(float *)(param_4 + 0x164) = fVar48 - fVar49;
            *(float *)(param_4 + 0x168) = fVar44 - fVar50;
            *(float *)(param_4 + 0x16c) = fVar46 - fVar47;
            (*(code *)uStack_1f0[0x3b])(&ppppppuStack_250,&uStack_1f0,&PTR_s_data_110c48378);
            ppppppuVar27 = ppppppuStack_248;
            ppppppuVar13 = ppppppuStack_250;
            if ((bStack_240 & 1) == 0) {
              puStack_2c0 = &UNK_10f690861;
              goto LAB_10ab23670;
            }
            uVar18 = (ulong)*(uint *)(param_4 + 0x180);
            if (ppppppuStack_248 < (ulong *******)(uVar18 * 0x14)) {
              uStack_230 = (ulong *******)(uVar18 * 0x14);
              uStack_220 = (ulong *******)CONCAT44(uStack_220._4_4_,*(uint *)(param_4 + 0x180));
              ppppppuStack_210 = ppppppuStack_248;
              func_0x0001099a6214(&ppppppuStack_270,&UNK_10f690899,100,0x424,&uStack_230);
              FUN_10a0029c0(&ppppppuStack_270);
              goto LAB_10ab23c08;
            }
            uStack_230 = (ulong *******)0x0;
            uStack_228 = (ulong *******)0x0;
            uStack_220 = (ulong *******)0x0;
            pppppppuVar38 = (ulong *******)ppppppuStack_250;
            pppppppuVar40 = (ulong *******)ppppppuStack_248;
            if (((ulong)ppppppuStack_250 & 7) != 0) {
              if ((ulong *******)ppppppuStack_248 != (ulong *******)0x0) {
                FUN_10a105930(&uStack_230,ppppppuStack_248);
              }
              _memcpy(uStack_230,ppppppuVar13,ppppppuVar27);
              pppppppuVar40 = (ulong *******)((long)uStack_228 - (long)uStack_230);
              uVar18 = (ulong)*(uint *)(param_4 + 0x180);
              pppppppuVar38 = uStack_230;
            }
            if ((pppppppuVar40 < (ulong *******)(uVar18 << 3)) ||
               (pppppppuVar40 + -uVar18 < (ulong *******)(uVar18 << 2))) goto LAB_10ab23c08;
            lVar12 = uVar18 << 2;
            pppppppuVar39 = pppppppuVar38 + uVar18;
            FUN_10ab242b0(pppppppuVar39);
            pppppppuVar36 = (ulong *******)(uVar18 * 8 + lVar12 * 4);
            if ((pppppppuVar40 < pppppppuVar36) ||
               (uVar43 = (ulong)*(uint *)(param_4 + 0x180) << 2,
               (ulong)((long)pppppppuVar40 - (long)pppppppuVar36) < uVar43)) goto LAB_10ab23c08;
            lVar25 = (long)pppppppuVar38 + (long)pppppppuVar36;
            FUN_10ab242b0();
            pppppppuVar36 = (ulong *******)(uVar18 * 8 + (uVar43 + lVar12) * 4);
            if ((pppppppuVar40 < pppppppuVar36) ||
               (uVar30 = (ulong)*(uint *)(param_4 + 0x180) << 2,
               (ulong)((long)pppppppuVar40 - (long)pppppppuVar36) < uVar30)) goto LAB_10ab23c08;
            lVar33 = (long)pppppppuVar38 + (long)pppppppuVar36;
            FUN_10ab242b0();
            FUN_10a02d8cc(param_4 + 0x138);
            uVar37 = *(undefined8 *)(param_4 + 0x50);
            pppppppuVar40 = (ulong *******)0x120;
            __Znwm();
            pppppppuVar40[1] = (ulong ******)0x0;
            pppppppuVar40[2] = (ulong ******)0x0;
            pppppppuVar36 = pppppppuVar40 + 3;
            *pppppppuVar40 = (ulong ******)&PTR_DAT_110c02148;
            FUN_10a123dc0(pppppppuVar36,uVar37,(int)fVar51,(int)fVar52,0);
            ppppppuStack_270 = (ulong ******)pppppppuVar36;
            ppppppuStack_268 = (ulong ******)pppppppuVar40;
            FUN_10a5ef3b4(param_4 + 0xe0,&ppppppuStack_270);
            ppppppuVar13 = ppppppuStack_268;
            if ((ulong *******)ppppppuStack_268 != (ulong *******)0x0) {
              pppppppuVar40 = (ulong *******)(ppppppuStack_268 + 1);
              do {
                ppppppuVar27 = *pppppppuVar40;
                cVar8 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(pppppppuVar40,0x10);
                if (bVar7) {
                  *pppppppuVar40 = (ulong ******)((long)ppppppuVar27 + -1);
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (ppppppuVar27 == (ulong ******)0x0) {
                (*(code *)(*ppppppuStack_268)[2])(ppppppuStack_268);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar13);
              }
            }
            *(undefined4 *)(*(long *)(param_4 + 0xe0) + 8) = 0;
            FUN_10a11b6d8(*(long *)(param_4 + 0xe0) + 0x28,*(undefined4 *)(param_4 + 0x180));
            if (*(int *)(param_4 + 0x180) != 0) {
              uVar31 = 0;
              lVar29 = 8;
              do {
                if (uVar18 == uVar31) goto LAB_10ab23c08;
                uVar11 = *(uint *)(pppppppuVar38 + uVar31);
                uVar23 = uVar11 >> 0xf;
                uVar19 = uVar11 >> 10 & 0x1f;
                uVar9 = uVar11 & 0x3ff;
                if (uVar19 == 0x1f) {
                  uVar19 = uVar23 << 0x1f | (uVar11 & 0xffff) << 0xd;
                  if (uVar9 == 0) {
                    uVar19 = uVar23 << 0x1f;
                  }
                  uVar23 = uVar19 | 0x7f800000;
                }
                else {
                  if (uVar19 == 0) {
                    if (uVar9 == 0) {
                      uVar23 = uVar23 << 0x1f;
                      goto LAB_10ab2352c;
                    }
                    uVar19 = 0x16 - (uint)LZCOUNT(uVar9);
                    uVar9 = uVar9 << (ulong)(10 - ((uint)LZCOUNT(uVar9) ^ 0x1f) & 0x1f) & 0x1fffbfe;
                  }
                  uVar23 = uVar19 * 0x800000 + 0x38000000 | uVar23 << 0x1f | uVar9 << 0xd;
                }
LAB_10ab2352c:
                uVar9 = uVar11 & 0x80000000;
                uVar22 = uVar11 >> 0x1a & 0x1f;
                uVar19 = uVar11 >> 0x10 & 0x3ff;
                if (uVar22 == 0x1f) {
                  uVar11 = uVar9 | (uVar11 >> 0x10) << 0xd;
                  if (uVar19 == 0) {
                    uVar11 = uVar9;
                  }
                  uVar9 = uVar11 | 0x7f800000;
                }
                else {
                  if (uVar22 == 0) {
                    if (uVar19 == 0) goto LAB_10ab23588;
                    uVar22 = 0x16 - (uint)LZCOUNT(uVar19);
                    uVar19 = uVar19 << (ulong)(10 - ((uint)LZCOUNT(uVar19) ^ 0x1f) & 0x1f) &
                             0x1fffbfe;
                  }
                  uVar9 = uVar22 * 0x800000 + 0x38000000 | uVar19 << 0xd | uVar9;
                }
LAB_10ab23588:
                uVar22 = *(uint *)((long)(pppppppuVar38 + uVar31) + 4);
                uVar19 = uVar22 >> 0xf;
                uVar20 = uVar22 >> 10 & 0x1f;
                uVar11 = uVar22 & 0x3ff;
                if (uVar20 == 0x1f) {
                  uVar22 = uVar19 << 0x1f | (uVar22 & 0xffff) << 0xd;
                  if (uVar11 == 0) {
                    uVar22 = uVar19 << 0x1f;
                  }
                  uVar19 = uVar22 | 0x7f800000;
                }
                else {
                  if (uVar20 == 0) {
                    if (uVar11 == 0) {
                      uVar19 = uVar19 << 0x1f;
                      goto LAB_10ab235f4;
                    }
                    uVar20 = 0x16 - (uint)LZCOUNT(uVar11);
                    uVar11 = uVar11 << (ulong)(10 - ((uint)LZCOUNT(uVar11) ^ 0x1f) & 0x1f) &
                             0x1fffbfe;
                  }
                  uVar19 = uVar20 * 0x800000 + 0x38000000 | uVar19 << 0x1f | uVar11 << 0xd;
                }
LAB_10ab235f4:
                lVar3 = *(long *)(*(long *)(param_4 + 0xe0) + 0x28);
                if ((ulong)(*(long *)(*(long *)(param_4 + 0xe0) + 0x30) - lVar3 >> 4) <= uVar31)
                goto LAB_10ab23c08;
                puVar1 = (uint *)(lVar3 + lVar29);
                puVar1[-2] = uVar23;
                puVar1[-1] = uVar9;
                *puVar1 = uVar19;
                puVar1[1] = 0x3f800000;
                uVar31 = uVar31 + 1;
                lVar29 = lVar29 + 0x10;
              } while (uVar31 < *(uint *)(param_4 + 0x180));
            }
            FUN_10a124a68(*(undefined8 *)(param_4 + 0xe0),pppppppuVar38,uVar18,pppppppuVar39,lVar12,
                          lVar25,uVar43,in_x7,lVar33,uVar30);
            FUN_10a123008(*(undefined8 *)(param_4 + 0xe0));
            if (uStack_230 != (ulong *******)0x0) {
              uStack_228 = uStack_230;
              _free(uStack_230[-1]);
            }
LAB_10ab21b68:
            func_0x00010a0f618c(&uStack_1f0);
            goto LAB_10ab232f4;
          }
          if (uVar9 == 3) goto LAB_10ab21960;
          if (uVar9 != 2) goto LAB_10ab23b00;
          puStack_2c0 = &UNK_10f6908fe;
        }
        else {
          if (uVar9 == 4) {
            (*(code *)uStack_1f0[6])(&uStack_1f0,&PTR_s_version_110c47ab8);
            puVar14 = &uStack_1f0;
            (*(code *)uStack_1f0[6])(puVar14,&PTR_DAT_110c48358);
            *(int *)(param_4 + 0x180) = (int)puVar14;
            *(int *)(param_4 + 0x184) = (int)puVar14;
            fVar50 = 3.4028235e+38;
            uStack_230 = (ulong *******)0x7f7fffff7f7fffff;
            uStack_228._0_4_ = 0x7f7fffff;
            (*(code *)uStack_1f0[0x1e])(&uStack_1f0,&PTR_DAT_110c47ad8,&uStack_230);
            uStack_230 = (ulong *******)0xff7fffffff7fffff;
            uStack_228 = (ulong *******)CONCAT44(uStack_228._4_4_,0xff7fffff);
            fVar48 = param_3;
            fVar44 = fVar50;
            fVar49 = fVar46;
            (*(code *)uStack_1f0[0x1e])(&uStack_1f0,&PTR_DAT_110c47af8,&uStack_230);
            iVar10 = 0;
            fVar50 = (fVar50 + fVar44) * 0.5;
            fVar46 = (fVar46 + fVar49) * 0.5;
            fVar47 = (param_3 + fVar48) * 0.5;
            fVar44 = fVar44 - fVar50;
            fVar49 = fVar49 - fVar46;
            *(float *)(param_4 + 0x158) = fVar50;
            *(float *)(param_4 + 0x15c) = fVar46;
            fVar48 = fVar48 - fVar47;
            *(float *)(param_4 + 0x160) = fVar47;
            *(float *)(param_4 + 0x164) = fVar44;
            *(float *)(param_4 + 0x168) = fVar49;
            *(float *)(param_4 + 0x16c) = fVar48;
            while ((fVar46 = fVar49, iVar10 == 1 || (fVar46 = fVar44, iVar10 != 2))) {
              bVar7 = fVar46 < 0.0;
              while (iVar10 = iVar10 + 1, bVar7) {
                if (iVar10 == 2) goto LAB_10ab2366c;
                bVar7 = true;
              }
            }
            if ((0.0 <= fVar48) &&
               ((*(code *)uStack_1f0[0x3b])(&ppppppuStack_250,&uStack_1f0,&PTR_DAT_110c47b38),
               pppppppuVar38 = (ulong *******)ppppppuStack_248,
               pppppppuVar40 = (ulong *******)ppppppuStack_250, bStack_240 == 1)) {
              if (((ulong)ppppppuStack_248 & 3) != 0) {
                FUN_10a00946c(&UNK_10f63b8ac);
                goto LAB_10ab23c08;
              }
              *(int *)(param_4 + 0x188) = (int)((ulong)ppppppuStack_248 >> 2);
              puVar14 = &uStack_1f0;
              (*(code *)uStack_1f0[0x40])(puVar14,&PTR_DAT_110c47b58);
              if (((ulong)puVar14 & 1) != 0) {
                *(undefined4 *)(param_4 + 0x184) = 0;
                uVar18 = 0;
                for (; pppppppuVar38 != (ulong *******)0x0;
                    pppppppuVar38 = (ulong *******)((long)pppppppuVar38 + -4)) {
                  uVar9 = (uint)uVar18;
                  if ((int)(uint)uVar18 <= (int)*(uint *)pppppppuVar40) {
                    uVar9 = *(uint *)pppppppuVar40;
                  }
                  uVar18 = (ulong)uVar9;
                  *(uint *)(param_4 + 0x184) = uVar9;
                  pppppppuVar40 = (ulong *******)((long)pppppppuVar40 + 4);
                }
                FUN_10ab243a8();
                *(float *)(param_4 + 0x170) = (float)(int)uVar18;
                *(float *)(param_4 + 0x174) = (float)(int)(uVar18 >> 0x20);
                *(undefined8 *)(param_4 + 0x178) = 0;
                (*(code *)uStack_1f0[0x42])(&uStack_1f0,&PTR_DAT_110c47b58);
                iVar10 = (int)&uStack_1f0;
                (*(code *)uStack_1f0[0x41])();
                if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
                  func_0x00010ae06f08(1,4,&UNK_10f6906f0,&UNK_10f69098b,0x3f5,&UNK_10f690a4f);
                }
                if (0 < iVar10) {
                  iVar35 = 0;
                  pppppppuVar38 = (ulong *******)(param_4 + 0x1b0);
                  puStack_2c0 = &UNK_10f63b8ac;
                  do {
                    (*(code *)uStack_1f0[0x43])(&uStack_1f0,iVar35);
                    ppuVar21 = &PTR_s_data_110c48378;
                    (*(code *)uStack_1f0[0x3b])(&ppppppuStack_270,&uStack_1f0);
                    (*(code *)uStack_1f0[0x44])(&uStack_1f0);
                    ppppppuVar13 = ppppppuStack_268;
                    pppppppuVar39 = (ulong *******)ppppppuStack_270;
                    if (cStack_260 != '\x01') goto LAB_10ab23670;
                    puVar14 = *(undefined8 **)(param_4 + 0x1b8);
                    if (puVar14 < *(undefined8 **)(param_4 + 0x1c0)) {
                      *puVar14 = 0;
                      puVar14[1] = 0;
                      puVar14[2] = 0;
                      FUN_10a05c8ac(puVar14,ppppppuStack_270,
                                    (long)ppppppuStack_270 + (long)ppppppuStack_268,ppppppuStack_268
                                   );
                      puVar14 = puVar14 + 3;
                      *(undefined8 **)(param_4 + 0x1b8) = puVar14;
                    }
                    else {
                      lVar12 = (long)puVar14 - (long)*pppppppuVar38;
                      ppppppuVar27 = (ulong ******)((lVar12 >> 3) * -0x5555555555555555 + 1);
                      if ((ulong ******)0xaaaaaaaaaaaaaaa < ppppppuVar27) {
                        FUN_10ab2c0c8();
                        goto LAB_10ab23c08;
                      }
                      lVar25 = (long)*(undefined8 **)(param_4 + 0x1c0) - (long)*pppppppuVar38 >> 3;
                      ppppppuVar28 = (ulong ******)(lVar25 * 0x5555555555555556);
                      if (ppppppuVar28 < ppppppuVar27 ||
                          (long)ppppppuVar28 - (long)ppppppuVar27 == 0) {
                        ppppppuVar28 = ppppppuVar27;
                      }
                      if (0x555555555555554 < (ulong)(lVar25 * -0x5555555555555555)) {
                        ppppppuVar28 = (ulong ******)0xaaaaaaaaaaaaaaa;
                      }
                      ppppppuStack_210 = (ulong ******)pppppppuVar38;
                      if (ppppppuVar28 == (ulong ******)0x0) {
                        ppuVar21 = (undefined **)0x0;
                      }
                      else {
                        FUN_10ab2c0dc();
                      }
                      puVar15 = (undefined8 *)((long)ppppppuVar28 + lVar12);
                      puVar15[1] = 0;
                      puVar15[2] = 0;
                      *puVar15 = 0;
                      uStack_230 = (ulong *******)ppppppuVar28;
                      uStack_228 = (ulong *******)puVar15;
                      uStack_220 = (ulong *******)puVar15;
                      uStack_218 = ppppppuVar28 + (long)ppuVar21 * 3;
                      FUN_10a05c8ac(puVar15,pppppppuVar39,(long)pppppppuVar39 + (long)ppppppuVar13,
                                    ppppppuVar13);
                      puVar14 = puVar15 + 3;
                      pppppppuVar39 =
                           (ulong *******)
                           ((long)puVar15 -
                           (*(long *)(param_4 + 0x1b8) - *(long *)(param_4 + 0x1b0)));
                      _memcpy(pppppppuVar39);
                      uStack_230 = *(ulong ********)(param_4 + 0x1b0);
                      *(ulong ********)(param_4 + 0x1b0) = pppppppuVar39;
                      *(undefined8 **)(param_4 + 0x1b8) = puVar14;
                      uStack_218 = *(ulong *******)(param_4 + 0x1c0);
                      *(ulong *******)(param_4 + 0x1c0) = ppppppuVar28 + (long)ppuVar21 * 3;
                      uStack_228 = uStack_230;
                      uStack_220 = uStack_230;
                      func_0x00010ab2c120(&uStack_230);
                    }
                    *(undefined8 **)(param_4 + 0x1b8) = puVar14;
                    iVar35 = iVar35 + 1;
                  } while (iVar10 != iVar35);
                }
                (*(code *)uStack_1f0[0x44])(&uStack_1f0);
                goto LAB_10ab21b68;
              }
              if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
                func_0x00010ae06f08(1,4,&UNK_10f6906f0,&UNK_10f69098b,0x3db,&UNK_10f6909fe);
              }
              uVar18 = (ulong)*(uint *)(param_4 + 0x180);
              FUN_10ab243a8();
              *(float *)(param_4 + 0x170) = (float)(int)uVar18;
              *(float *)(param_4 + 0x174) = (float)(int)(uVar18 >> 0x20);
              *(undefined8 *)(param_4 + 0x178) = 0;
              FUN_10ab36dec(&uStack_230,*(undefined8 *)(param_4 + 0x50));
              FUN_10a5ef3b4(param_4 + 0xe0,&uStack_230);
              pppppppuVar38 = uStack_228;
              if (uStack_228 != (ulong *******)0x0) {
                pppppppuVar40 = uStack_228 + 1;
                do {
                  ppppppuVar13 = *pppppppuVar40;
                  cVar8 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(pppppppuVar40,0x10);
                  if (bVar7) {
                    *pppppppuVar40 = (ulong ******)((long)ppppppuVar13 + -1);
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
                if (ppppppuVar13 == (ulong ******)0x0) {
                  (*(code *)(*uStack_228)[2])(uStack_228);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar38);
                }
              }
              (*(code *)uStack_1f0[0x3b])(&uStack_230,&uStack_1f0,&PTR_DAT_110c47b18);
              if (((ulong)uStack_220 & 1) == 0) {
                FUN_10a04f808();
                goto LAB_10ab23c08;
              }
              FUN_10ab243e4(param_4,uStack_230,uStack_228,param_4 + 0xe0);
              FUN_10a123008(*(undefined8 *)(param_4 + 0xe0));
LAB_10ab21b5c:
              *(undefined4 *)(*(long *)(param_4 + 0xe0) + 8) = 0;
              goto LAB_10ab21b68;
            }
          }
          else {
            if (uVar9 != 5) {
LAB_10ab23b00:
              __ZNSt3__19to_stringEi(&ppppppuStack_250);
              FUN_109feb280(&uStack_230,&UNK_10f69080f,&ppppppuStack_250);
              FUN_10a0029c0(&uStack_230);
              goto LAB_10ab23c08;
            }
LAB_10ab21960:
            if (3 < uVar9) {
              puVar14 = &uStack_1f0;
              (*(code *)uStack_1f0[0x1a])(puVar14,&PTR_DAT_110c48398,0);
              FUN_10ab242e0(param_4,puVar14);
            }
            puVar14 = &uStack_1f0;
            (*(code *)uStack_1f0[6])(puVar14,&PTR_DAT_110c48358);
            *(int *)(param_4 + 0x180) = (int)puVar14;
            *(int *)(param_4 + 0x184) = (int)puVar14;
            FUN_10ab243a8();
            fVar46 = (float)(int)((ulong)puVar14 >> 0x20);
            *(float *)(param_4 + 0x170) = (float)(int)puVar14;
            *(float *)(param_4 + 0x174) = fVar46;
            *(undefined8 *)(param_4 + 0x178) = 0;
            FUN_10ab36dec(&uStack_230,*(undefined8 *)(param_4 + 0x50));
            FUN_10a5ef3b4(param_4 + 0xe0,&uStack_230);
            pppppppuVar38 = uStack_228;
            if (uStack_228 != (ulong *******)0x0) {
              pppppppuVar40 = uStack_228 + 1;
              do {
                ppppppuVar13 = *pppppppuVar40;
                cVar8 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(pppppppuVar40,0x10);
                if (bVar7) {
                  *pppppppuVar40 = (ulong ******)((long)ppppppuVar13 + -1);
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (ppppppuVar13 == (ulong ******)0x0) {
                (*(code *)(*uStack_228)[2])(uStack_228);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar38);
              }
            }
            fVar50 = 3.4028235e+38;
            uStack_230 = (ulong *******)0x7f7fffff7f7fffff;
            uStack_228._0_4_ = 0x7f7fffff;
            (*(code *)uStack_1f0[0x1e])(&uStack_1f0,&PTR_DAT_110c47ad8,&uStack_230);
            uStack_230 = (ulong *******)0xff7fffffff7fffff;
            uStack_228 = (ulong *******)CONCAT44(uStack_228._4_4_,0xff7fffff);
            fVar48 = param_3;
            fVar44 = fVar50;
            fVar49 = fVar46;
            (*(code *)uStack_1f0[0x1e])(&uStack_1f0,&PTR_DAT_110c47af8,&uStack_230);
            iVar10 = 0;
            fVar50 = (fVar50 + fVar44) * 0.5;
            fVar46 = (fVar46 + fVar49) * 0.5;
            fVar47 = (param_3 + fVar48) * 0.5;
            fVar44 = fVar44 - fVar50;
            fVar49 = fVar49 - fVar46;
            *(float *)(param_4 + 0x158) = fVar50;
            *(float *)(param_4 + 0x15c) = fVar46;
            fVar48 = fVar48 - fVar47;
            *(float *)(param_4 + 0x160) = fVar47;
            *(float *)(param_4 + 0x164) = fVar44;
            *(float *)(param_4 + 0x168) = fVar49;
            *(float *)(param_4 + 0x16c) = fVar48;
            while ((fVar46 = fVar49, iVar10 == 1 || (fVar46 = fVar44, iVar10 != 2))) {
              bVar7 = fVar46 < 0.0;
              while (iVar10 = iVar10 + 1, bVar7) {
                if (iVar10 == 2) goto LAB_10ab2366c;
                bVar7 = true;
              }
            }
            if (0.0 <= fVar48) {
              (*(code *)uStack_1f0[0x3b])(&uStack_230,&uStack_1f0,&PTR_DAT_110c47b18);
              if ((char)uStack_220 == '\x01') {
                FUN_10ab243e4(param_4,uStack_230,uStack_228,param_4 + 0xe0);
                FUN_10a123008(*(undefined8 *)(param_4 + 0xe0));
                goto LAB_10ab21b5c;
              }
            }
          }
          puStack_2c0 = &UNK_10f63b8ac;
        }
LAB_10ab23670:
        FUN_10a00946c(puStack_2c0);
        goto LAB_10ab23c08;
      }
    }
    else if (uStack_298._7_1_ == 3) {
      if ((short)uStack_2a8 == 0x6c70 && uStack_2a8._2_1_ == 'y') {
LAB_10ab222ec:
        FUN_10a08d2e0(&uStack_230,pppppppuVar39 + 0x15);
        pppppppuVar38 = uStack_230;
        if (-1 < (long)uStack_220) {
          pppppppuVar38 = (ulong *******)&uStack_230;
        }
        ppppppuStack_250 = (ulong ******)CONCAT35(ppppppuStack_250._5_3_,0xf);
        FUN_10a125a58(&uStack_1f0,pppppppuVar38,&ppppppuStack_250);
        if ((long)uStack_220 < 0) {
          __ZdlPv(uStack_230);
        }
        uVar9 = (int)((ulong)((long)ppppppuStack_1e8 - (long)uStack_1f0) >> 2) * -0x55555555;
        uVar18 = (ulong)uVar9;
        *(uint *)(param_4 + 0x180) = uVar9;
        *(uint *)(param_4 + 0x184) = uVar9;
        FUN_10ab243a8();
        *(float *)(param_4 + 0x170) = (float)(int)uVar18;
        *(float *)(param_4 + 0x174) = (float)(int)(uVar18 >> 0x20);
        *(undefined8 *)(param_4 + 0x178) = 0;
        FUN_10ab36dec(&uStack_230,*(undefined8 *)(param_4 + 0x50));
        FUN_10a5ef3b4(param_4 + 0xe0,&uStack_230);
        if (uStack_228 != (ulong *******)0x0) {
          pppppppuVar38 = uStack_228 + 1;
          do {
            ppppppuVar13 = *pppppppuVar38;
            cVar8 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pppppppuVar38,0x10);
            if (bVar7) {
              *pppppppuVar38 = (ulong ******)((long)ppppppuVar13 + -1);
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (ppppppuVar13 == (ulong ******)0x0) {
            (*(code *)(*uStack_228)[2])(uStack_228);
            __ZNSt3__119__shared_weak_count14__release_weakEv(uStack_228);
          }
        }
        FUN_10a11b6d8(*(long *)(param_4 + 0xe0) + 0x28,*(undefined4 *)(param_4 + 0x180));
        uStack_228 = (ulong *******)
                     (((long)ppppppuStack_1e8 - (long)uStack_1f0 >> 2) * -0x5555555555555555);
        uStack_230 = uStack_1f0;
        ppppppuStack_248 =
             (ulong ******)
             (((long)ppppppuStack_1b8 - (long)ppppppuStack_1c0 >> 2) * -0x5555555555555555);
        ppppppuStack_250 = ppppppuStack_1c0;
        ppppppuStack_268 = (ulong ******)((long)ppppppuStack_1d0 - (long)ppppppuStack_1d8 >> 4);
        ppppppuStack_270 = ppppppuStack_1d8;
        lStack_1f8 = (long)ppppppuStack_1a0 - (long)ppppppuStack_1a8 >> 4;
        ppppppuStack_200 = ppppppuStack_1a8;
        FUN_10a122d50(*(undefined8 *)(param_4 + 0xe0),&uStack_230,&ppppppuStack_250,
                      &ppppppuStack_270,&ppppppuStack_200);
        uVar18 = (ulong)*(uint *)(param_4 + 0x180);
        if (*(uint *)(param_4 + 0x180) == 0) {
          uVar43 = 0x7f7fffffff7fffff;
          uVar30 = 0xff7fffff7f7fffff;
          fVar46 = 3.4028235e+38;
          fVar48 = -3.4028235e+38;
        }
        else {
          uVar31 = ((long)ppppppuStack_1e8 - (long)uStack_1f0 >> 2) * -0x5555555555555555;
          uVar30 = ((long)ppppppuStack_1b8 - (long)ppppppuStack_1c0 >> 2) * -0x5555555555555555;
          uVar43 = uVar30;
          if (uVar18 - 1 <= uVar30) {
            uVar43 = uVar18 - 1;
          }
          if ((uVar31 < uVar43 || uVar31 - uVar43 == 0) || (uVar30 - uVar43 == 0))
          goto LAB_10ab23c08;
          pppppppuVar38 = (ulong *******)(ppppppuStack_1c0 + 1);
          uVar43 = 0x7f7fffffff7fffff;
          uVar30 = 0xff7fffff7f7fffff;
          pppppppuVar40 = uStack_1f0 + 1;
          fVar46 = 3.4028235e+38;
          fVar44 = -3.4028235e+38;
          do {
            fVar48 = *(float *)pppppppuVar40 - *(float *)pppppppuVar38;
            fVar49 = SUB84(pppppppuVar40[-1],0);
            fVar47 = SUB84(pppppppuVar38[-1],0);
            fVar52 = fVar49 - fVar47;
            fVar50 = (float)((ulong)pppppppuVar40[-1] >> 0x20);
            fVar51 = (float)((ulong)pppppppuVar38[-1] >> 0x20);
            fVar53 = fVar50 - fVar51;
            fVar49 = fVar49 + fVar47;
            fVar50 = fVar50 + fVar51;
            if (fVar46 <= fVar48) {
              fVar48 = fVar46;
            }
            fVar46 = fVar48;
            fVar48 = *(float *)pppppppuVar40 + *(float *)pppppppuVar38;
            uVar43 = uVar43 ^ (uVar43 ^ CONCAT44(fVar53,fVar49)) &
                              CONCAT44(-(uint)(fVar53 < (float)(uVar43 >> 0x20)),
                                       -(uint)((float)uVar43 < fVar49));
            uVar30 = uVar30 ^ (uVar30 ^ CONCAT44(fVar50,fVar52)) &
                              CONCAT44(-(uint)((float)(uVar30 >> 0x20) < fVar50),
                                       -(uint)(fVar52 < (float)uVar30));
            if (fVar48 <= fVar44) {
              fVar48 = fVar44;
            }
            pppppppuVar38 = (ulong *******)((long)pppppppuVar38 + 0xc);
            pppppppuVar40 = (ulong *******)((long)pppppppuVar40 + 0xc);
            uVar18 = uVar18 - 1;
            fVar44 = fVar48;
          } while (uVar18 != 0);
        }
        iVar10 = 0;
        fVar44 = (float)(uVar30 >> 0x20);
        fVar49 = ((float)uVar30 + (float)uVar43) * 0.5;
        fVar50 = (fVar44 + (float)(uVar43 >> 0x20)) * 0.5;
        fVar44 = fVar44 - fVar50;
        uVar18 = CONCAT44(fVar44,(float)uVar43 - fVar49);
        *(ulong *)(param_4 + 0x164) = uVar18;
        fVar46 = (fVar48 + fVar46) * 0.5;
        fVar48 = fVar48 - fVar46;
        *(ulong *)(param_4 + 0x158) = CONCAT44(fVar50,fVar49);
        *(float *)(param_4 + 0x160) = fVar46;
        *(float *)(param_4 + 0x16c) = fVar48;
LAB_10ab22ffc:
        if (iVar10 == 1) {
          uVar43 = (ulong)(uint)fVar44;
LAB_10ab22fdc:
          bVar7 = (float)uVar43 < 0.0;
          while (iVar10 = iVar10 + 1, bVar7) {
            if (iVar10 == 2) goto LAB_10ab2367c;
            bVar7 = true;
          }
          goto LAB_10ab22ffc;
        }
        uVar43 = uVar18;
        if (iVar10 != 2) goto LAB_10ab22fdc;
        if (0.0 <= fVar48) {
          *(undefined4 *)(*(long *)(param_4 + 0xe0) + 8) = 0;
          lVar12 = *(long *)(param_4 + 0xe0);
          FUN_10a123d38(lVar12);
          *(undefined1 *)(lVar12 + 0x4a) = 1;
          FUN_10a123008(*(undefined8 *)(param_4 + 0xe0));
          if (cStack_179 < '\0') {
            __ZdlPv(auStack_190[0]);
          }
          if ((ulong *******)ppppppuStack_1a8 != (ulong *******)0x0) {
            ppppppuStack_1a0 = ppppppuStack_1a8;
            __ZdlPv();
          }
          if ((ulong *******)ppppppuStack_1c0 != (ulong *******)0x0) {
            ppppppuStack_1b8 = ppppppuStack_1c0;
            __ZdlPv();
          }
          if ((ulong *******)ppppppuStack_1d8 != (ulong *******)0x0) {
            ppppppuStack_1d0 = ppppppuStack_1d8;
            __ZdlPv();
          }
          if (uStack_1f0 == (ulong *******)0x0) goto LAB_10ab232f4;
          ppppppuStack_1e8 = (ulong ******)uStack_1f0;
          goto LAB_10ab232f0;
        }
LAB_10ab2367c:
        FUN_10a00946c(&UNK_10f63b8ac);
        goto LAB_10ab23c08;
      }
      if ((short)uStack_2a8 == 0x6f73 && uStack_2a8._2_1_ == 'g') {
LAB_10ab22b18:
        if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
          FUN_10a08d2e0(&uStack_1f0,pppppppuVar39 + 0x15);
          func_0x00010ae06f08(1,4,&UNK_10f6906f0,&UNK_10f690cb1,0x526,&UNK_10f690d0d);
          if ((long)ppppppuStack_1e0 < 0) {
            __ZdlPv(uStack_1f0);
          }
        }
        FUN_10a0f1b1c(&uStack_230,pppppppuVar39 + 0x15,0);
        if ((uStack_230 != (ulong *******)0x0) && (*(uint *)(uStack_230 + 1) < 5)) {
          ppppppuVar13 = *uStack_230;
          (*(code *)(*ppppppuVar13)[2])();
          if (((ulong)ppppppuVar13 & 1) != 0) {
            FUN_10a0f1f4c(&ppppppuStack_250,&uStack_230);
            uStack_1f0 = (ulong *******)((ulong)uStack_1f0 & 0xffffffff00000000);
            ppppppuStack_1e0 = (ulong ******)0x0;
            ppppppuStack_1e8 = (ulong ******)0x0;
            ppppppuStack_1d0 = (ulong ******)0x0;
            ppppppuStack_1d8 = (ulong ******)0x0;
            ppppppuStack_1c0 = (ulong ******)0x0;
            ppppppuStack_1c8 = (ulong ******)0x0;
            ppppppuStack_1b0 = (ulong ******)0x0;
            ppppppuStack_1b8 = (ulong ******)0x0;
            ppppppuStack_1a0 = (ulong ******)0x0;
            ppppppuStack_1a8 = (ulong ******)0x0;
            auStack_190[0] = 0;
            ppppppuStack_198 = (ulong ******)0x0;
            FUN_10a7dcad4(ppppppuStack_250,(long)ppppppuStack_248 - (long)ppppppuStack_250,
                          &uStack_1f0);
            if ((int)(float)uStack_1f0 + 0xfeffffffU >> 0x18 < 0xff) {
              ppppppuStack_200 = (ulong ******)CONCAT44(ppppppuStack_200._4_4_,(float)uStack_1f0);
              func_0x0001099a6214(&ppppppuStack_270,&UNK_10f690d58,0x30,2,&ppppppuStack_200);
              FUN_10a0029c0(&ppppppuStack_270);
              goto LAB_10ab23c08;
            }
            ppppppuStack_268 =
                 (ulong ******)
                 (((long)ppppppuStack_1e0 - (long)ppppppuStack_1e8 >> 2) * -0x5555555555555555);
            ppppppuStack_270 = ppppppuStack_1e8;
            lStack_1f8 = ((long)ppppppuStack_1c8 - (long)ppppppuStack_1d0 >> 2) *
                         -0x5555555555555555;
            ppppppuStack_200 = ppppppuStack_1d0;
            lStack_278 = (long)ppppppuStack_1b0 - (long)ppppppuStack_1b8 >> 4;
            ppppppuStack_280 = ppppppuStack_1b8;
            lStack_288 = (long)ppppppuStack_198 - (long)ppppppuStack_1a0 >> 4;
            ppppppuStack_290 = ppppppuStack_1a0;
            FUN_10ab25bb8(param_4,&ppppppuStack_270,&ppppppuStack_200,&ppppppuStack_280,
                          &ppppppuStack_290);
            FUN_10a123008(*(undefined8 *)(param_4 + 0xe0));
LAB_10ab22c7c:
            if ((ulong *******)ppppppuStack_1a0 != (ulong *******)0x0) {
              ppppppuStack_198 = ppppppuStack_1a0;
              __ZdlPv();
            }
            if ((ulong *******)ppppppuStack_1b8 != (ulong *******)0x0) {
              ppppppuStack_1b0 = ppppppuStack_1b8;
              __ZdlPv();
            }
            if ((ulong *******)ppppppuStack_1d0 != (ulong *******)0x0) {
              ppppppuStack_1c8 = ppppppuStack_1d0;
              __ZdlPv();
            }
            if ((ulong *******)ppppppuStack_1e8 != (ulong *******)0x0) {
              ppppppuStack_1e0 = ppppppuStack_1e8;
              __ZdlPv();
            }
            if ((ulong *******)ppppppuStack_250 != (ulong *******)0x0) {
              ppppppuStack_248 = ppppppuStack_250;
              __ZdlPv();
            }
            puVar14 = &uStack_230;
LAB_10ab22cd0:
            FUN_10a0f1ea0(puVar14);
            goto LAB_10ab232f4;
          }
        }
        FUN_10a08d2e0(&uStack_1f0,pppppppuVar39 + 0x15);
        FUN_10ab36b5c(&UNK_10f690d3b,&uStack_1f0);
        goto LAB_10ab23c08;
      }
      if ((short)uStack_2a8 == 0x7073 && uStack_2a8._2_1_ == 'z') {
LAB_10ab2153c:
        if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
          FUN_10a08d2e0(&uStack_1f0,pppppppuVar39 + 0x15);
          func_0x00010ae06f08(1,4,&UNK_10f6906f0,&UNK_10f690d89,0x53f,&UNK_10f690de5);
          if ((long)ppppppuStack_1e0 < 0) {
            __ZdlPv(uStack_1f0);
          }
        }
        FUN_10a0f1b1c(&uStack_230,pppppppuVar39 + 0x15,0);
        if ((uStack_230 != (ulong *******)0x0) && (*(uint *)(uStack_230 + 1) < 5)) {
          ppppppuVar13 = *uStack_230;
          (*(code *)(*ppppppuVar13)[2])();
          if (((ulong)ppppppuVar13 & 1) != 0) {
            FUN_10a0f1f4c(&ppppppuStack_250,&uStack_230);
            uStack_1f0 = (ulong *******)((ulong)uStack_1f0 & 0xffffffff00000000);
            ppppppuStack_1e0 = (ulong ******)0x0;
            ppppppuStack_1e8 = (ulong ******)0x0;
            ppppppuStack_1d0 = (ulong ******)0x0;
            ppppppuStack_1d8 = (ulong ******)0x0;
            ppppppuStack_1c0 = (ulong ******)0x0;
            ppppppuStack_1c8 = (ulong ******)0x0;
            ppppppuStack_1b0 = (ulong ******)0x0;
            ppppppuStack_1b8 = (ulong ******)0x0;
            ppppppuStack_1a0 = (ulong ******)0x0;
            ppppppuStack_1a8 = (ulong ******)0x0;
            auStack_190[0] = 0;
            ppppppuStack_198 = (ulong ******)0x0;
            FUN_10a7de0d0(ppppppuStack_250,(long)ppppppuStack_248 - (long)ppppppuStack_250,
                          &uStack_1f0,0x1000000);
            if ((int)(float)uStack_1f0 + 0xfeffffffU >> 0x18 < 0xff) {
              ppppppuStack_200 = (ulong ******)CONCAT44(ppppppuStack_200._4_4_,(float)uStack_1f0);
              func_0x0001099a6214(&ppppppuStack_270,&UNK_10f690e30,0x30,2,&ppppppuStack_200);
              FUN_10a0029c0(&ppppppuStack_270);
              goto LAB_10ab23c08;
            }
            ppppppuStack_268 =
                 (ulong ******)
                 (((long)ppppppuStack_1e0 - (long)ppppppuStack_1e8 >> 2) * -0x5555555555555555);
            ppppppuStack_270 = ppppppuStack_1e8;
            lStack_1f8 = ((long)ppppppuStack_1c8 - (long)ppppppuStack_1d0 >> 2) *
                         -0x5555555555555555;
            ppppppuStack_200 = ppppppuStack_1d0;
            lStack_278 = (long)ppppppuStack_1b0 - (long)ppppppuStack_1b8 >> 4;
            ppppppuStack_280 = ppppppuStack_1b8;
            lStack_288 = (long)ppppppuStack_198 - (long)ppppppuStack_1a0 >> 4;
            ppppppuStack_290 = ppppppuStack_1a0;
            FUN_10ab25bb8(param_4,&ppppppuStack_270,&ppppppuStack_200,&ppppppuStack_280,
                          &ppppppuStack_290);
            FUN_10a123008(*(undefined8 *)(param_4 + 0xe0));
            goto LAB_10ab22c7c;
          }
        }
        FUN_10a08d2e0(&uStack_1f0,pppppppuVar39 + 0x15);
        FUN_10ab36b5c(&UNK_10f690e13,&uStack_1f0);
        goto LAB_10ab23c08;
      }
    }
  }
  else {
    if (uStack_298._7_1_ == 4) {
      iVar10 = (int)uStack_2a8;
LAB_10ab21b7c:
      if (iVar10 != 0x66617367) goto LAB_10ab23728;
      puVar14 = (undefined8 *)0x28;
      __Znwm();
      puVar14[1] = 0;
      puVar14[2] = 0;
      *puVar14 = &PTR_FUN_110c48848;
      puVar15 = puVar14 + 3;
      *puVar15 = 0;
      puVar14[4] = 0;
      FUN_10a0f1e30(&uStack_1f0,pppppppuVar39 + 0x15,0);
      if (((ulong)ppppppuStack_1c0 & 1) == 0) {
        FUN_10a08d2e0(&uStack_230,pppppppuVar39 + 0x15);
        FUN_10ab36b5c(&UNK_10f690665,&uStack_230);
        goto LAB_10ab23c08;
      }
      puVar16 = (ulong *)0x30;
      __Znwm();
      ppppppuVar13 = ppppppuStack_1e8;
      pppppppuVar38 = uStack_1f0;
      uStack_1f0 = (ulong *******)0x0;
      ppppppuStack_1e8 = (ulong ******)0x0;
      *puVar16 = (ulong)pppppppuVar38;
      puVar16[2] = (ulong)ppppppuStack_1e0;
      puVar16[1] = (ulong)ppppppuVar13;
      puVar16[3] = (ulong)ppppppuStack_1d8;
      ppppppuStack_1e0 = (ulong ******)0x0;
      ppppppuStack_1d8 = (ulong ******)0x0;
      *(undefined1 *)(puVar16 + 4) = 0;
      *(undefined1 *)(puVar16 + 5) = 0;
      FUN_10ab36efc(puVar15);
      plVar32 = (long *)**(undefined8 **)*puVar15;
      (**(code **)(*plVar32 + 0x18))();
      puVar14[4] = plVar32;
      if ((char)ppppppuStack_1c0 == '\x01') {
        FUN_10a0f1ea0(&uStack_1f0);
      }
      plVar32 = *(long **)(param_4 + 0x1d0);
      *(undefined8 **)(param_4 + 0x1c8) = puVar15;
      *(undefined8 **)(param_4 + 0x1d0) = puVar14;
      if (plVar32 != (long *)0x0) {
        plVar34 = plVar32 + 1;
        do {
          lVar12 = *plVar34;
          cVar8 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar34,0x10);
          if (bVar7) {
            *plVar34 = lVar12 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plVar32 + 0x10))(plVar32);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar32);
        }
      }
      uStack_1f0 = (ulong *******)((ulong)uStack_1f0 & 0xffffffff00000000);
      (**(code **)(*(long *)**(undefined8 **)**(undefined8 **)(param_4 + 0x1c8) + 0x20))
                ((long *)**(undefined8 **)**(undefined8 **)(param_4 + 0x1c8),&uStack_1f0,1,4);
      iVar10 = (int)(float)uStack_1f0;
      if ((float)uStack_1f0 == 54081.273) {
        uStack_1f0 = (ulong *******)((ulong)(uint)uStack_1f0._4_4_ << 0x20);
        (**(code **)(*(long *)**(undefined8 **)**(undefined8 **)(param_4 + 0x1c8) + 0x20))
                  ((long *)**(undefined8 **)**(undefined8 **)(param_4 + 0x1c8),&uStack_1f0,1,4);
        uVar9 = (uint)(float)uStack_1f0;
        if (6 < (uint)(float)uStack_1f0) {
          __ZNSt3__19to_stringEj(&uStack_230,(ulong)uStack_1f0 & 0xffffffff);
          FUN_109feb280(&uStack_1f0,&UNK_10f690ae2,&uStack_230);
          FUN_10a0029c0(&uStack_1f0);
          goto LAB_10ab23c08;
        }
        if (3 < (uint)(float)uStack_1f0) {
          uStack_1f0 = (ulong *******)((ulong)uStack_1f0 & 0xffffffff00000000);
          (**(code **)(*(long *)**(undefined8 **)**(undefined8 **)(param_4 + 0x1c8) + 0x20))
                    ((long *)**(undefined8 **)**(undefined8 **)(param_4 + 0x1c8),&uStack_1f0,1,4);
          FUN_10ab242e0(param_4,(ulong)uStack_1f0 & 0xffffffff);
        }
        uStack_1f0 = (ulong *******)((ulong)uStack_1f0 & 0xffffffff00000000);
        (**(code **)(*(long *)**(undefined8 **)**(undefined8 **)(param_4 + 0x1c8) + 0x20))
                  ((long *)**(undefined8 **)**(undefined8 **)(param_4 + 0x1c8),&uStack_1f0,1,4);
        if ((int)(float)uStack_1f0 < 0) {
          uStack_230 = (ulong *******)CONCAT44(uStack_230._4_4_,(float)uStack_1f0);
          func_0x0001099a6214(&uStack_1f0,&UNK_10f690b02,0x20,1,&uStack_230);
          FUN_10a0029c0(&uStack_1f0);
          goto LAB_10ab23c08;
        }
        *(float *)(param_4 + 0x180) = (float)uStack_1f0;
        uStack_1f0 = (ulong *******)0x0;
        ppppppuStack_1e8 = (ulong ******)((ulong)ppppppuStack_1e8 & 0xffffffff00000000);
        (**(code **)(*(long *)**(undefined8 **)**(undefined8 **)(param_4 + 0x1c8) + 0x20))
                  ((long *)**(undefined8 **)**(undefined8 **)(param_4 + 0x1c8),&uStack_1f0,1,0xc);
        ppppppuVar27 = ppppppuStack_1e8;
        ppppppuVar13 = (ulong ******)uStack_1f0;
        fVar46 = uStack_1f0._4_4_;
        uStack_1f0 = (ulong *******)0x0;
        ppppppuStack_1e8 = (ulong ******)((ulong)ppppppuStack_1e8 & 0xffffffff00000000);
        (**(code **)(*(long *)**(undefined8 **)**(undefined8 **)(param_4 + 0x1c8) + 0x20))
                  ((long *)**(undefined8 **)**(undefined8 **)(param_4 + 0x1c8),&uStack_1f0,1,0xc);
        uVar18 = (ulong)ppppppuVar13 & 0x7fffffff7fffffff;
        uVar43 = CONCAT44((float)uStack_1f0,SUB84(ppppppuVar27,0)) & 0x7fffffff7fffffff;
        uVar45 = NEON_umaxv(CONCAT26(-(ushort)(0x7f7fffff < (uint)(uVar43 >> 0x20)),
                                     CONCAT24(-(ushort)(0x7f7fffff < (uint)uVar43),
                                              CONCAT22(-(ushort)(0x7f7fffff < (uint)(uVar18 >> 0x20)
                                                                ),
                                                       -(ushort)(0x7f7fffff < (uint)uVar18)))),2);
        puVar17 = &UNK_10f690b23;
        if ((((uVar45 & 1) == 0) && ((uint)ABS(uStack_1f0._4_4_) < 0x7f800000)) &&
           (puVar17 = &UNK_10f690b23, (uint)ABS(ppppppuStack_1e8._0_4_) < 0x7f800000)) {
          iVar10 = 0;
          fVar44 = (SUB84(ppppppuVar13,0) + (float)uStack_1f0) * 0.5;
          fVar49 = (fVar46 + uStack_1f0._4_4_) * 0.5;
          fVar50 = (SUB84(ppppppuVar27,0) + ppppppuStack_1e8._0_4_) * 0.5;
          fVar46 = (float)uStack_1f0 - fVar44;
          fVar48 = uStack_1f0._4_4_ - fVar49;
          *(float *)(param_4 + 0x158) = fVar44;
          *(float *)(param_4 + 0x15c) = fVar49;
          fVar44 = ppppppuStack_1e8._0_4_ - fVar50;
          *(float *)(param_4 + 0x160) = fVar50;
          *(float *)(param_4 + 0x164) = fVar46;
          *(float *)(param_4 + 0x168) = fVar48;
          *(float *)(param_4 + 0x16c) = fVar44;
          puVar17 = &UNK_10f63b8ac;
          while ((fVar49 = fVar48, iVar10 == 1 || (fVar49 = fVar46, iVar10 != 2))) {
            bVar7 = fVar49 < 0.0;
            while (iVar10 = iVar10 + 1, bVar7) {
              if (iVar10 == 2) goto LAB_10ab23bb0;
              bVar7 = true;
            }
          }
          if (0.0 <= fVar44) {
            if (uVar9 < 3) {
              *(undefined4 *)(param_4 + 0xf0) = 1;
            }
            else {
              uStack_1f0 = (ulong *******)((ulong)(uint)uStack_1f0._4_4_ << 0x20);
              (**(code **)(*(long *)**(undefined8 **)**(undefined8 **)(param_4 + 0x1c8) + 0x20))
                        ((long *)**(undefined8 **)**(undefined8 **)(param_4 + 0x1c8),&uStack_1f0,1,4
                        );
              *(float *)(param_4 + 0xf0) = (float)uStack_1f0;
              if ((float)uStack_1f0 == 0.0) {
                puVar17 = &UNK_10f690b49;
                goto LAB_10ab23bb0;
              }
            }
            uStack_230 = (ulong *******)0x0;
            uStack_228 = (ulong *******)0x0;
            uStack_220 = (ulong *******)0x0;
            FUN_10ab25ae0(*(undefined8 *)(param_4 + 0x1c8),&uStack_230);
            uVar23 = (uint)((ulong)((long)uStack_228 - (long)uStack_230) >> 2);
            *(uint *)(param_4 + 0x188) = uVar23;
            if (0 < (int)uVar23) {
              uVar11 = *(uint *)(param_4 + 0xf0);
              uVar19 = 0;
              if (uVar11 != 0) {
                uVar19 = uVar23 / uVar11;
              }
              if (uVar23 == uVar19 * uVar11) {
                if (uStack_230 == uStack_228) {
                  pppppppuVar39 = (ulong *******)0x0;
                  uVar18 = 0;
LAB_10ab22ce0:
                  iVar10 = *(int *)(param_4 + 0x180);
                  if (iVar10 == (int)pppppppuVar39) {
                    *(int *)(param_4 + 0x184) = (int)uVar18;
                    FUN_10ab243a8();
                    *(float *)(param_4 + 0x170) = (float)(int)uVar18;
                    *(float *)(param_4 + 0x174) = (float)(int)(uVar18 >> 0x20);
                    *(undefined8 *)(param_4 + 0x178) = 0;
                    if (4 < uVar9) {
                      FUN_10ab25ae0(*(undefined8 *)(param_4 + 0x1c8),param_4 + 0x240);
                      lVar12 = *(long *)(param_4 + 0x248) - *(long *)(param_4 + 0x240);
                      if ((lVar12 != 0) &&
                         ((*(int *)(param_4 + 0xf0) != *(int *)(param_4 + 0x188) ||
                          (lVar12 >> 2 != (long)*(int *)(param_4 + 0xf0))))) {
                        FUN_10a00946c(&UNK_10f63b8ac);
                        goto LAB_10ab23c08;
                      }
                    }
                    uStack_1f0 = (ulong *******)((ulong)uStack_1f0 & 0xffffffff00000000);
                    puVar14 = &uStack_1f0;
                    (**(code **)(*(long *)**(undefined8 **)**(undefined8 **)(param_4 + 0x1c8) + 0x20
                                ))((long *)**(undefined8 **)**(undefined8 **)(param_4 + 0x1c8),
                                   puVar14,1,4);
                    pppppppuVar39 = (ulong *******)((ulong)uStack_1f0 & 0xffffffff);
                    if ((float)uStack_1f0 == 0.0) {
                      uVar9 = *(uint *)(param_4 + 0x188);
                    }
                    else {
                      uVar9 = *(uint *)(param_4 + 0x188);
                      if ((uint)(float)uStack_1f0 <= uVar9) {
                        uVar23 = *(uint *)(param_4 + 0xf0);
                        if (uVar9 == 1) {
                          if (uVar23 != 1) {
                            FUN_10a00946c(&UNK_10f63b8ac);
                            goto LAB_10ab23c08;
                          }
                          FUN_10ab36dec(&uStack_1f0,*(undefined8 *)(param_4 + 0x50),uVar18,
                                        uVar18 >> 0x20);
                          FUN_10a5ef3b4(param_4 + 0xe0,&uStack_1f0);
                          ppppppuVar13 = ppppppuStack_1e8;
                          if ((ulong *******)ppppppuStack_1e8 != (ulong *******)0x0) {
                            pppppppuVar38 = (ulong *******)(ppppppuStack_1e8 + 1);
                            do {
                              ppppppuVar27 = *pppppppuVar38;
                              cVar8 = '\x01';
                              bVar7 = (bool)ExclusiveMonitorPass(pppppppuVar38,0x10);
                              if (bVar7) {
                                *pppppppuVar38 = (ulong ******)((long)ppppppuVar27 + -1);
                                cVar8 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar8 != '\0');
                            if (ppppppuVar27 == (ulong ******)0x0) {
                              (*(code *)(*ppppppuStack_1e8)[2])(ppppppuStack_1e8);
                              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar13);
                            }
                          }
                          uStack_1f0 = (ulong *******)0x0;
                          ppppppuStack_1e8 = (ulong ******)0x0;
                          ppppppuStack_1e0 = (ulong ******)0x0;
                          FUN_10ab2583c(*(undefined8 *)(param_4 + 0x1c8),&uStack_1f0);
                          FUN_10ab243e4(param_4,uStack_1f0,(long)ppppppuStack_1e8 - (long)uStack_1f0
                                        ,param_4 + 0xe0);
                          FUN_10a123008(*(undefined8 *)(param_4 + 0xe0));
                          *(undefined4 *)(*(long *)(param_4 + 0xe0) + 8) = 0;
                          if (uStack_1f0 != (ulong *******)0x0) {
                            ppppppuStack_1e8 = (ulong ******)uStack_1f0;
                            __ZdlPv();
                          }
                        }
                        else {
                          if (1 < uVar23) {
                            uVar11 = 0;
                            if (uVar23 != 0) {
                              uVar11 = uVar9 / uVar23;
                            }
                            if (((((float)uStack_1f0 != (float)uVar9) &&
                                 ((float)uStack_1f0 != (float)uVar11)) ||
                                (((float)uStack_1f0 == (float)uVar9 &&
                                 (*(char *)(param_4 + 0x18d) != '\x01')))) ||
                               (((float)uStack_1f0 != (float)uVar11 &&
                                ((*(byte *)(param_4 + 0x18e) & 1) != 0)))) {
                              FUN_10a00946c(&UNK_10f63b8ac);
                              goto LAB_10ab23c08;
                            }
                          }
                          lVar12 = *(long *)(param_4 + 0x1b0);
                          plVar32 = *(long **)(param_4 + 0x1b8);
                          lVar25 = (long)plVar32 - lVar12 >> 3;
                          bVar7 = pppppppuVar39 < (ulong *******)(lVar25 * -0x5555555555555555);
                          uVar18 = (long)pppppppuVar39 + lVar25 * 0x5555555555555555;
                          if (bVar7 || uVar18 == 0) {
                            if (bVar7) {
                              plVar34 = (long *)(lVar12 + (long)pppppppuVar39 * 0x18);
                              while (plVar5 = plVar32, plVar5 != plVar34) {
                                plVar32 = plVar5 + -3;
                                if (*plVar32 != 0) {
                                  plVar5[-2] = *plVar32;
                                  __ZdlPv();
                                }
                              }
                              *(long **)(param_4 + 0x1b8) = plVar34;
                            }
                          }
                          else if ((ulong)((*(long *)(param_4 + 0x1c0) - (long)plVar32 >> 3) *
                                          -0x5555555555555555) < uVar18) {
                            ppppppuStack_1d0 = (ulong ******)(param_4 + 0x1b0);
                            lVar25 = *(long *)(param_4 + 0x1c0) - lVar12 >> 3;
                            pppppppuVar38 = (ulong *******)(lVar25 * 0x5555555555555556);
                            if (pppppppuVar38 < pppppppuVar39 ||
                                (long)pppppppuVar38 - (long)pppppppuVar39 == 0) {
                              pppppppuVar38 = pppppppuVar39;
                            }
                            if (0x555555555555554 < (ulong)(lVar25 * -0x5555555555555555)) {
                              pppppppuVar38 = (ulong *******)0xaaaaaaaaaaaaaaa;
                            }
                            FUN_10ab2c0dc();
                            lVar12 = (long)pppppppuVar38 + ((long)plVar32 - lVar12);
                            lVar33 = (((uVar18 & 0xffffffff) * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
                            _bzero(lVar12,lVar33);
                            lVar25 = lVar12 - (*(long *)(param_4 + 0x1b8) -
                                              *(long *)(param_4 + 0x1b0));
                            _memcpy(lVar25);
                            uStack_1f0 = *(ulong ********)(param_4 + 0x1b0);
                            *(long *)(param_4 + 0x1b0) = lVar25;
                            *(long *)(param_4 + 0x1b8) = lVar12 + lVar33;
                            ppppppuStack_1d8 = *(ulong *******)(param_4 + 0x1c0);
                            *(ulong ********)(param_4 + 0x1c0) = pppppppuVar38 + (long)puVar14 * 3;
                            ppppppuStack_1e8 = (ulong ******)uStack_1f0;
                            ppppppuStack_1e0 = (ulong ******)uStack_1f0;
                            func_0x00010ab2c120(&uStack_1f0);
                          }
                          else {
                            uVar18 = ((uVar18 & 0xffffffff) * 0x18 - 0x18) / 0x18;
                            _bzero(plVar32,uVar18 * 0x18 + 0x18);
                            *(long **)(param_4 + 0x1b8) = plVar32 + uVar18 * 3 + 3;
                          }
                          do {
                            ppppppuVar13 = (ulong ******)
                                           **(undefined8 **)**(undefined8 **)(param_4 + 0x1c8);
                            (*(code *)(*ppppppuVar13)[6])();
                            uStack_1f0 = (ulong *******)ppppppuVar13;
                            FUN_10a31f0e4(param_4 + 0x228,&uStack_1f0);
                            puVar14 = *(undefined8 **)(param_4 + 0x1c8);
                            uStack_1f0 = (ulong *******)0x0;
                            (**(code **)(*(long *)**(undefined8 **)*puVar14 + 0x20))
                                      ((long *)**(undefined8 **)*puVar14,&uStack_1f0,1,8);
                            pppppppuVar38 = uStack_1f0;
                            plVar32 = (long *)**(long **)*puVar14;
                            (**(code **)(*plVar32 + 0x30))();
                            if ((long)plVar32 < 0) {
                              plVar32 = (long *)0x10;
                              ___cxa_allocate_exception();
                              __ZNSt11logic_errorC2EPKc();
LAB_10ab236dc:
                              *plVar32 = (long)(PTR___ZTVSt12length_error_110346b58 + 0x10);
                              ___cxa_throw(plVar32,PTR___ZTISt12length_error_110352238,
                                           PTR___ZNSt12length_errorD1Ev_110346170);
                              goto LAB_10ab23c08;
                            }
                            uVar18 = (long)plVar32 + (long)pppppppuVar38;
                            if ((SCARRY8((long)plVar32,(long)pppppppuVar38)) || ((long)uVar18 < 0))
                            {
                              plVar32 = (long *)0x10;
                              ___cxa_allocate_exception();
                              __ZNSt11logic_errorC2EPKc();
                              goto LAB_10ab236dc;
                            }
                            if ((ulong)puVar14[1] < uVar18) {
                              plVar32 = (long *)0x10;
                              ___cxa_allocate_exception();
                              __ZNSt11logic_errorC2EPKc();
                              goto LAB_10ab236dc;
                            }
                            puVar14 = (undefined8 *)*puVar14;
                            plVar32 = *(long **)*puVar14;
                            (**(code **)(*plVar32 + 0x28))(plVar32,uVar18);
                            plVar32 = *(long **)*puVar14;
                            (**(code **)(*plVar32 + 0x28))(plVar32,uVar18);
                            uVar9 = (int)pppppppuVar39 - 1;
                            pppppppuVar39 = (ulong *******)(ulong)uVar9;
                          } while (uVar9 != 0);
                          pppppppuVar39 =
                               (ulong *******)**(ulong **)**(undefined8 **)(param_4 + 0x1c8);
                          (*(code *)(*pppppppuVar39)[6])();
                          uStack_1f0 = pppppppuVar39;
                          FUN_10a31f0e4(param_4 + 0x228,&uStack_1f0);
                          pppppppuVar39 = (ulong *******)0x0;
                        }
                        if (uStack_230 != (ulong *******)0x0) {
                          uStack_228 = uStack_230;
LAB_10ab232f0:
                          __ZdlPv();
                        }
                        goto LAB_10ab232f4;
                      }
                    }
                    ppppppuStack_1e0 = (ulong ******)CONCAT44(ppppppuStack_1e0._4_4_,uVar9);
                    func_0x0001099a6214(&ppppppuStack_250,&UNK_10f690bac,0x30,0x12,&uStack_1f0);
                    FUN_10a0029c0(&ppppppuStack_250);
                    goto LAB_10ab23c08;
                  }
                }
                else {
                  pppppppuVar39 = (ulong *******)0x0;
                  uVar18 = 0;
                  pppppppuVar38 = uStack_230;
                  do {
                    pppppppuVar40 = (ulong *******)((long)pppppppuVar38 + 4);
                    uVar11 = *(uint *)pppppppuVar38;
                    pppppppuVar39 = (ulong *******)((long)pppppppuVar39 + (ulong)uVar11);
                    uVar23 = (uint)uVar18;
                    if ((uint)uVar18 <= uVar11) {
                      uVar23 = uVar11;
                    }
                    uVar18 = (ulong)uVar23;
                    pppppppuVar38 = pppppppuVar40;
                  } while (pppppppuVar40 != uStack_228);
                  if ((ulong)pppppppuVar39 >> 0x20 == 0) goto LAB_10ab22ce0;
                  iVar10 = *(int *)(param_4 + 0x180);
                }
                ppppppuStack_1e0 = (ulong ******)CONCAT44(ppppppuStack_1e0._4_4_,iVar10);
                uStack_1f0 = pppppppuVar39;
                func_0x0001099a6214(&ppppppuStack_250,&UNK_10f690b71,0x3a,0x24,&uStack_1f0);
                FUN_10a0029c0(&ppppppuStack_250);
                goto LAB_10ab23c08;
              }
            }
            FUN_10a00946c(&UNK_10f63b8ac);
            goto LAB_10ab23c08;
          }
          puVar17 = &UNK_10f63b8ac;
        }
LAB_10ab23bb0:
        FUN_10a00946c(puVar17);
        goto LAB_10ab23c08;
      }
      if ((float)uStack_1f0 != 12372.819) {
        uStack_1f0 = (ulong *******)CONCAT44(uStack_1f0._4_4_,0x47534146);
        ppppppuStack_1e0 = (ulong ******)CONCAT44(ppppppuStack_1e0._4_4_,0x46415347);
        ppppppuStack_1d0 = (ulong ******)CONCAT44(ppppppuStack_1d0._4_4_,iVar10);
        func_0x0001099a6214(&uStack_230,&UNK_10f690a86,0x5b,0x222,&uStack_1f0);
        FUN_10a0029c0(&uStack_230);
        goto LAB_10ab23c08;
      }
      plVar32 = *(long **)(param_4 + 0x1d0);
      *(undefined8 *)(param_4 + 0x1c8) = 0;
      *(undefined8 *)(param_4 + 0x1d0) = 0;
      if (plVar32 != (long *)0x0) {
        plVar34 = plVar32 + 1;
        do {
          lVar12 = *plVar34;
          cVar8 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar34,0x10);
          if (bVar7) {
            *plVar34 = lVar12 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plVar32 + 0x10))(plVar32);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar32);
        }
      }
      FUN_10a0f1b1c(&uStack_1f0,pppppppuVar39 + 0x15,0);
      if ((uStack_1f0 != (ulong *******)0x0) && (*(uint *)(uStack_1f0 + 1) < 5)) {
        ppppppuVar13 = *uStack_1f0;
        (*(code *)(*ppppppuVar13)[2])();
        if (((ulong)ppppppuVar13 & 1) != 0) {
          ppppppuStack_200 = (ulong ******)0x0;
          FUN_10a0f1f4c(&uStack_230,&uStack_1f0);
          pppppppuVar38 = (ulong *******)&uStack_230;
          func_0x00010983b8a0(pppppppuVar38,&ppppppuStack_200);
          if (uStack_230 != (ulong *******)0x0) {
            uStack_228 = uStack_230;
            __ZdlPv();
          }
          ppppppuVar13 = ppppppuStack_200;
          if ((int)pppppppuVar38 != 0) {
            FUN_10a08d2e0(&ppppppuStack_270,pppppppuVar39 + 0x15);
            func_0x00010983b87c();
            uStack_230 = (ulong *******)ppppppuStack_270;
            if (-1 < (long)cStack_259) {
              uStack_230 = &ppppppuStack_270;
            }
            uStack_228 = (ulong *******)ppppppuStack_268;
            if (-1 < cStack_259) {
              uStack_228 = (ulong *******)(long)cStack_259;
            }
            uStack_220 = pppppppuVar38;
            func_0x0001099a6214(&ppppppuStack_250,&UNK_10f690bfe,0x2c,0xcd,&uStack_230);
            FUN_10a0029c0(&ppppppuStack_250);
            goto LAB_10ab23c08;
          }
          (*(code *)(*ppppppuStack_200)[2])(&uStack_230,ppppppuStack_200);
          *(int *)(param_4 + 0x188) = uStack_230._4_4_;
          if (uStack_230._4_4_ < 1) {
            FUN_10a00946c(&UNK_10f63b8ac);
            goto LAB_10ab23c08;
          }
          iVar10 = 0;
          pppppppuVar38 = (ulong *******)0x0;
          uVar18 = 0;
          do {
            pppppppuVar40 = (ulong *******)ppppppuVar13;
            (*(code *)(*ppppppuVar13)[5])(ppppppuVar13,iVar10);
            pppppppuVar38 =
                 (ulong *******)((long)pppppppuVar38 + ((ulong)pppppppuVar40 & 0xffffffff));
            uVar9 = (uint)uVar18;
            if ((uint)uVar18 <= (uint)pppppppuVar40) {
              uVar9 = (uint)pppppppuVar40;
            }
            uVar18 = (ulong)uVar9;
            iVar10 = iVar10 + 1;
          } while (iVar10 < *(int *)(param_4 + 0x188));
          if ((ulong)pppppppuVar38 >> 0x1f != 0) {
            ppppppuStack_270 = (ulong ******)pppppppuVar38;
            func_0x0001099a6214(&ppppppuStack_250,&UNK_10f690c2b,0x30,4,&ppppppuStack_270);
            FUN_10a0029c0(&ppppppuStack_250);
            goto LAB_10ab23c08;
          }
          *(int *)(param_4 + 0x180) = (int)pppppppuVar38;
          *(uint *)(param_4 + 0x184) = uVar9;
          if (uVar9 - 1 >> 0x18 != 0) {
            FUN_10a00946c(&UNK_10f63b8ac);
            goto LAB_10ab23c08;
          }
          puVar17 = &UNK_10f690c5c;
          iVar10 = 0;
          while ((fVar46 = (float)uStack_220, iVar10 == 1 ||
                 (fVar46 = uStack_228._4_4_, iVar10 != 2))) {
            bVar7 = INFINITY < ABS(fVar46) || ABS(fVar46) < INFINITY;
            while (iVar10 = iVar10 + 1, !bVar7) {
              if (iVar10 == 2) goto LAB_10ab23abc;
              bVar7 = false;
            }
          }
          if ((uint)ABS(uStack_220._4_4_) < 0x7f800000) {
            iVar10 = 0;
            puVar17 = &UNK_10f690c5c;
            while ((fVar46 = uStack_218._4_4_, iVar10 == 1 ||
                   (fVar46 = (float)uStack_218, iVar10 != 2))) {
              bVar7 = INFINITY < ABS(fVar46) || ABS(fVar46) < INFINITY;
              while (iVar10 = iVar10 + 1, !bVar7) {
                if (iVar10 == 2) goto LAB_10ab23abc;
                bVar7 = false;
              }
            }
            if (0x7f7fffff < (uint)ABS(ppppppuStack_210._0_4_)) goto LAB_10ab238d8;
            iVar10 = 0;
            fVar46 = (uStack_228._4_4_ + (float)uStack_218) * 0.5;
            fVar49 = ((float)uStack_220 + uStack_218._4_4_) * 0.5;
            fVar50 = (uStack_220._4_4_ + ppppppuStack_210._0_4_) * 0.5;
            fVar48 = (float)uStack_218 - fVar46;
            fVar44 = uStack_218._4_4_ - fVar49;
            *(float *)(param_4 + 0x158) = fVar46;
            *(float *)(param_4 + 0x15c) = fVar49;
            fVar46 = ppppppuStack_210._0_4_ - fVar50;
            *(float *)(param_4 + 0x160) = fVar50;
            *(float *)(param_4 + 0x164) = fVar48;
            *(float *)(param_4 + 0x168) = fVar44;
            *(float *)(param_4 + 0x16c) = fVar46;
            puVar17 = &UNK_10f63b8ac;
            while ((fVar49 = fVar44, iVar10 == 1 || (fVar49 = fVar48, iVar10 != 2))) {
              bVar7 = fVar49 < 0.0;
              while (iVar10 = iVar10 + 1, bVar7) {
                if (iVar10 == 2) goto LAB_10ab23abc;
                bVar7 = true;
              }
            }
            if (0.0 <= fVar46) {
              FUN_10ab243a8();
              *(float *)(param_4 + 0x170) = (float)(int)uVar18;
              *(float *)(param_4 + 0x174) = (float)(int)(uVar18 >> 0x20);
              *(undefined8 *)(param_4 + 0x178) = 0;
              *(undefined4 *)(param_4 + 0xf0) = 1;
              puVar14 = (undefined8 *)0x20;
              __Znwm();
              *puVar14 = &PTR_FUN_110c48898;
              puVar14[1] = 0;
              puVar14[2] = 0;
              puVar14[3] = ppppppuVar13;
              ppppppuStack_200 = (ulong ******)0x0;
              *(ulong *******)(param_4 + 0x218) = ppppppuVar13;
              plVar32 = *(long **)(param_4 + 0x220);
              *(undefined8 **)(param_4 + 0x220) = puVar14;
              if (plVar32 != (long *)0x0) {
                plVar34 = plVar32 + 1;
                do {
                  lVar12 = *plVar34;
                  cVar8 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar34,0x10);
                  if (bVar7) {
                    *plVar34 = lVar12 + -1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
                if (lVar12 == 0) {
                  (**(code **)(*plVar32 + 0x10))(plVar32);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar32);
                }
              }
              if (*(int *)(param_4 + 0x188) == 1) {
                FUN_10ab36dec(&ppppppuStack_250,*(undefined8 *)(param_4 + 0x50),uVar18,
                              uVar18 >> 0x20);
                FUN_10a5ef3b4(param_4 + 0xe0,&ppppppuStack_250);
                ppppppuVar13 = ppppppuStack_248;
                if ((ulong *******)ppppppuStack_248 != (ulong *******)0x0) {
                  pppppppuVar38 = (ulong *******)(ppppppuStack_248 + 1);
                  do {
                    ppppppuVar27 = *pppppppuVar38;
                    cVar8 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(pppppppuVar38,0x10);
                    if (bVar7) {
                      *pppppppuVar38 = (ulong ******)((long)ppppppuVar27 + -1);
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
                  if (ppppppuVar27 == (ulong ******)0x0) {
                    (*(code *)(*ppppppuStack_248)[2])(ppppppuStack_248);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar13);
                  }
                }
                FUN_10ab25528(param_4,0,param_4 + 0xe0);
                FUN_10a123008(*(undefined8 *)(param_4 + 0xe0));
                *(undefined4 *)(*(long *)(param_4 + 0xe0) + 8) = 0;
              }
              if ((ulong *******)ppppppuStack_200 != (ulong *******)0x0) {
                (*(code *)(*ppppppuStack_200)[1])();
              }
              puVar14 = &uStack_1f0;
              goto LAB_10ab22cd0;
            }
            puVar17 = &UNK_10f63b8ac;
          }
          else {
LAB_10ab238d8:
            puVar17 = &UNK_10f690c5c;
          }
LAB_10ab23abc:
          FUN_10a00946c(puVar17);
          goto LAB_10ab23c08;
        }
      }
LAB_10ab23850:
      FUN_10a08d2e0(&uStack_230,pppppppuVar39 + 0x15);
      FUN_10ab36b5c(&UNK_10f690bdd,&uStack_230);
      goto LAB_10ab23c08;
    }
    if (uStack_298._7_1_ == 9) {
      plVar32 = &uStack_2a8;
LAB_10ab216d4:
      if (*plVar32 == 0x6e6974736f726667 && (char)plVar32[1] == 'g') {
        FUN_10a08d2e0(&uStack_1f0,pppppppuVar39 + 0x15);
        puVar14 = (undefined8 *)0x1f8;
        __Znwm();
        puVar14[1] = 0;
        puVar14[2] = 0;
        puVar15 = puVar14 + 3;
        *puVar14 = &PTR_DAT_110c488f8;
        FUN_10a11b830(puVar15,&uStack_1f0);
        *(undefined8 **)(param_4 + 600) = puVar15;
        plVar32 = *(long **)(param_4 + 0x260);
        *(undefined8 **)(param_4 + 0x260) = puVar14;
        if (plVar32 != (long *)0x0) {
          plVar34 = plVar32 + 1;
          do {
            lVar12 = *plVar34;
            cVar8 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar34,0x10);
            if (bVar7) {
              *plVar34 = lVar12 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plVar32 + 0x10))(plVar32);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar32);
          }
        }
        if ((long)ppppppuStack_1e0 < 0) {
          __ZdlPv(uStack_1f0);
        }
        lVar12 = *(long *)(param_4 + 600);
        uVar37 = *(undefined8 *)(lVar12 + 0x118);
        uVar42 = *(undefined8 *)(lVar12 + 0x108);
        *(undefined8 *)(param_4 + 0x160) = *(undefined8 *)(lVar12 + 0x110);
        *(undefined8 *)(param_4 + 0x158) = uVar42;
        *(undefined8 *)(param_4 + 0x168) = uVar37;
        uVar9 = (int)((ulong)(*(long *)(lVar12 + 0x68) - *(long *)(lVar12 + 0x60)) >> 3) *
                -0x55555555;
        uVar18 = (ulong)uVar9;
        *(uint *)(param_4 + 0x180) = uVar9;
        *(uint *)(param_4 + 0x184) = uVar9;
        FUN_10ab243a8();
        *(float *)(param_4 + 0x170) = (float)(int)uVar18;
        *(float *)(param_4 + 0x174) = (float)(int)(uVar18 >> 0x20);
        *(undefined8 *)(param_4 + 0x178) = 0;
        FUN_10ab36dec(&uStack_1f0,*(undefined8 *)(param_4 + 0x50));
        FUN_10a5ef3b4(param_4 + 0xe0,&uStack_1f0);
        ppppppuVar13 = ppppppuStack_1e8;
        if ((ulong *******)ppppppuStack_1e8 != (ulong *******)0x0) {
          pppppppuVar38 = (ulong *******)(ppppppuStack_1e8 + 1);
          do {
            ppppppuVar27 = *pppppppuVar38;
            cVar8 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pppppppuVar38,0x10);
            if (bVar7) {
              *pppppppuVar38 = (ulong ******)((long)ppppppuVar27 + -1);
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (ppppppuVar27 == (ulong ******)0x0) {
            (*(code *)(*ppppppuStack_1e8)[2])(ppppppuStack_1e8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar13);
          }
        }
        FUN_10a11e27c(*(undefined8 *)(param_4 + 600),*(undefined8 *)(param_4 + 0xe0),0);
        FUN_10a123008(*(undefined8 *)(param_4 + 0xe0));
        *(undefined4 *)(*(long *)(param_4 + 0xe0) + 8) = 0;
LAB_10ab232f4:
        if ((long)uStack_298 < 0) {
          __ZdlPv(uStack_2a8);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
          return;
        }
        ___stack_chk_fail();
        goto LAB_10ab23850;
      }
    }
  }
LAB_10ab23728:
  FUN_10a08d2e0(&uStack_230,pppppppuVar39 + 0x15);
  FUN_109feb280(&uStack_1f0,&UNK_10f6907de,&uStack_230);
  FUN_10a0029c0(&uStack_1f0);
LAB_10ab23c08:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ab23c0c);
  (*pcVar6)();
LAB_10ab2366c:
  puStack_2c0 = &UNK_10f63b8ac;
  goto LAB_10ab23670;
}



/* Entry: 10ab24090; end: 10ab240e7;  */

void FUN_10ab24090(long param_1,long *param_2)

{
  func_0x00010aa70b70();
  (**(code **)(*param_2 + 0x118))
            (param_2,&PTR_s_provider_110c47680,*(undefined8 *)(param_1 + 0x148));
                    /* WARNING: Could not recover jumptable at 0x00010ab240e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0xf0))(param_2,&PTR_DAT_110c47a98,param_1 + 0xf4);
  return;
}



/* Entry: 10ab240e8; end: 10ab24287;  */

void FUN_10ab240e8(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 ***pppuVar3;
  undefined8 **ppuStack_78;
  ulong uStack_70;
  byte bStack_61;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 **ppuStack_40;
  ulong uStack_38;
  
  uVar1 = *(undefined4 *)(param_2 + 0x180);
  func_0x00010a005db0(&ppuStack_78,*(undefined1 *)(param_2 + 0x18c));
  cVar2 = *(char *)(param_2 + 0x6f);
  lStack_60 = *(long *)(param_2 + 0x58);
  if (-1 < (long)cVar2) {
    lStack_60 = param_2 + 0x58;
  }
  lStack_58 = *(long *)(param_2 + 0x60);
  if (-1 < cVar2) {
    lStack_58 = (long)cVar2;
  }
  lStack_50 = CONCAT44(lStack_50._4_4_,uVar1);
  ppuStack_40 = ppuStack_78;
  if (-1 < (long)(char)bStack_61) {
    ppuStack_40 = &ppuStack_78;
  }
  uStack_38 = uStack_70;
  if (-1 < (char)bStack_61) {
    uStack_38 = (long)(char)bStack_61;
  }
  func_0x0001099a6214(param_1,&UNK_10f69068e,0x17,0xd1d,&lStack_60);
  if ((char)bStack_61 < '\0') {
    __ZdlPv(ppuStack_78);
  }
  if (1 < *(int *)(param_2 + 0x188)) {
    lStack_50 = (*(long *)(param_2 + 0x1b8) - *(long *)(param_2 + 0x1b0) >> 3) * -0x5555555555555555
    ;
    lStack_60 = CONCAT44(lStack_60._4_4_,*(int *)(param_2 + 0x188));
    ppuStack_40 = (undefined8 **)CONCAT44(ppuStack_40._4_4_,*(undefined4 *)(param_2 + 0xf0));
    func_0x0001099a6214(&ppuStack_78,&UNK_10f6906a6,0x26,0x241,&lStack_60);
    pppuVar3 = (undefined8 ***)ppuStack_78;
    if (-1 < (char)bStack_61) {
      uStack_70 = (ulong)bStack_61;
      pppuVar3 = &ppuStack_78;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,pppuVar3,uStack_70);
    if ((char)bStack_61 < '\0') {
      __ZdlPv(ppuStack_78);
    }
  }
  if (*(long *)(param_2 + 600) != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,&UNK_10f6906cd,0xb);
  }
  return;
}



/* Entry: 10ab24288; end: 10ab242af;  */

long FUN_10ab24288(long param_1)

{
  func_0x000107c27bf0(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 10ab242b0; end: 10ab242df;  */

void FUN_10ab242b0(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  
  if ((param_2 & 3) == 0) {
    return;
  }
  FUN_10a00946c(&UNK_10f63b8ac);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ab242dc);
  (*pcVar1)();
}



/* Entry: 10ab242e0; end: 10ab243a7;  */

void FUN_10ab242e0(long param_1,uint param_2)

{
  code *pcVar1;
  undefined1 auStack_48 [24];
  uint auStack_30 [4];
  
  auStack_30[0] = param_2;
  if (param_2 < 0x20) {
    *(byte *)(param_1 + 0x18c) = (byte)param_2 & 7;
    *(byte *)(param_1 + 0x18d) = (byte)(param_2 >> 3) & 1;
    *(bool *)(param_1 + 0x18e) = 0xf < param_2;
    if ((param_2 < 0x10) || ((param_2 >> 3 & 1) != 0)) {
      return;
    }
    func_0x0001099a6214(auStack_48,&UNK_10f690944,0x46,2,auStack_30);
    FUN_10a0029c0(auStack_48);
  }
  else {
    func_0x0001099a6214(auStack_48,&UNK_10f690928,0x1b,2,auStack_30);
    FUN_10a0029c0(auStack_48);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ab24388);
  (*pcVar1)();
}



/* Entry: 10ab243a8; end: 10ab243e3;  */

long * FUN_10ab243a8(uint param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  undefined4 in_s3;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  uint uStack_dc;
  byte bStack_d1;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  uint uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  long *aplStack_80 [2];
  
  if ((param_1 - 1 & 0xff000000) == 0) {
    iVar9 = (int)SQRT((float)param_1);
    iVar5 = 0;
    if (iVar9 != 0) {
      iVar5 = (int)((param_1 - 1) + iVar9) / iVar9;
    }
    return (long *)CONCAT44(iVar5,iVar9);
  }
  puVar7 = &UNK_10f63b8ac;
  FUN_10a00946c();
  FUN_10ab25930(aplStack_80);
  uVar2 = *(uint *)(aplStack_80[0] + 0x14);
  fVar20 = *(float *)(puVar7 + 0x174);
  fVar19 = *(float *)(puVar7 + 0x170) * fVar20;
  if (fVar19 < (float)uVar2) {
    FUN_10a00946c(&UNK_10f63b8ac);
  }
  else {
    FUN_10a11b6d8(*param_4 + 0x28);
    if (((int)((ulong)(aplStack_80[0][6] - aplStack_80[0][5]) >> 2) < 1) ||
       (iVar5 = *(int *)aplStack_80[0][5], iVar5 == -1)) {
      puVar16 = (undefined8 *)0x0;
    }
    else {
      puVar16 = *(undefined8 **)(aplStack_80[0][2] + (long)iVar5 * 8);
    }
    if (((int)((ulong)(aplStack_80[0][0xf] - aplStack_80[0][0xe]) >> 2) < 1) ||
       (iVar5 = *(int *)aplStack_80[0][0xe], iVar5 == -1)) {
      puVar17 = (undefined8 *)0x0;
    }
    else {
      puVar17 = *(undefined8 **)(aplStack_80[0][2] + (long)iVar5 * 8);
    }
    if (((int)((ulong)(aplStack_80[0][9] - aplStack_80[0][8]) >> 2) < 1) ||
       (iVar5 = *(int *)aplStack_80[0][8], iVar5 == -1)) {
      puVar10 = (undefined8 *)0x0;
    }
    else {
      puVar10 = *(undefined8 **)(aplStack_80[0][2] + (long)iVar5 * 8);
    }
    if (((int)((ulong)(aplStack_80[0][0xc] - aplStack_80[0][0xb]) >> 2) < 1) ||
       (iVar5 = *(int *)aplStack_80[0][0xb], iVar5 == -1)) {
      puVar11 = (undefined8 *)0x0;
    }
    else {
      puVar11 = *(undefined8 **)(aplStack_80[0][2] + (long)iVar5 * 8);
    }
    puVar14 = (undefined8 *)aplStack_80[0][2];
    lVar12 = aplStack_80[0][3];
    puVar8 = puVar14;
    FUN_10ab25a7c(puVar14,lVar12,6);
    if ((puVar8 == (undefined8 *)0x0) || (*(uint *)(puVar8 + 0xc) == uVar2)) {
      bVar3 = puVar7[0x18d];
      cVar4 = puVar7[0x18c];
      if (cVar4 == '\x01') {
        FUN_10ab25a7c(puVar14,lVar12,2);
      }
      else {
        puVar14 = (undefined8 *)0x0;
      }
      if (((((((puVar16 != (undefined8 *)0x0) && (*(uint *)(puVar16 + 0xc) == uVar2)) &&
             (puVar17 != (undefined8 *)0x0)) &&
            ((*(uint *)(puVar17 + 0xc) == uVar2 && (puVar10 != (undefined8 *)0x0)))) &&
           ((*(uint *)(puVar10 + 0xc) == uVar2 &&
            ((puVar11 != (undefined8 *)0x0 && (*(uint *)(puVar11 + 0xc) == uVar2)))))) &&
          ((bVar3 == 0 || ((puVar8 != (undefined8 *)0x0 && (*(uint *)(puVar8 + 0xc) == uVar2))))))
         && ((cVar4 != '\x01' ||
             ((puVar14 != (undefined8 *)0x0 && (*(uint *)(puVar14 + 0xc) == uVar2)))))) {
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_b0 = 0;
        uStack_a8 = 0;
        uVar18 = 0;
        uStack_b8 = 0x3f80000000000000;
        uStack_c0 = 0;
        if (uVar2 != 0) {
          uVar13 = 0;
          bVar1 = 0;
          if (puVar8 != (undefined8 *)0x0) {
            bVar1 = bVar3;
          }
          do {
            _memcpy(&uStack_90,*(long *)*puVar16 + puVar16[6] + puVar16[5] * uVar13);
            _memcpy(&uStack_a0,*(long *)*puVar17 + puVar17[6] + puVar17[5] * uVar13);
            _memcpy(&uStack_b0,*(long *)*puVar11 + puVar11[6] + puVar11[5] * uVar13);
            uStack_c4 = (uint)uVar13;
            uVar15 = uVar13;
            if ((bVar1 & 1) != 0) {
              _memcpy(&uStack_c4,*(long *)*puVar8 + puVar8[6] + puVar8[5] * uVar13);
              uVar15 = (ulong)uStack_c4;
              if (uVar2 <= uStack_c4) {
                FUN_10a00946c(&UNK_10f63b8ac);
                goto LAB_10ab24804;
              }
            }
            cVar4 = puVar7[0x18c];
            if (cVar4 == '\x01') {
              uStack_d0 = 0;
              uStack_c8 = 0;
              _memcpy(&uStack_d0,*(long *)*puVar10 + puVar10[6] + puVar10[5] * uVar13);
              _memcpy(&bStack_d1,*(long *)*puVar14 + puVar14[6] + puVar14[5] * uVar13);
              uStack_e8 = uStack_d0;
              uStack_dc = (uint)bStack_d1;
              uStack_e0 = uStack_c8;
              func_0x00010a005ddc(&uStack_e8);
            }
            else {
              uStack_e8 = 0;
              uStack_e0 = 0;
              _memcpy(&uStack_e8,*(long *)*puVar10 + puVar10[6] + puVar10[5] * uVar13);
              FUN_10a007a60(&uStack_e8,cVar4);
            }
            uStack_c0 = CONCAT44(fVar19,(int)uVar18);
            uStack_b8 = CONCAT44(in_s3,fVar20);
            FUN_10a11e410(*param_4,uVar15,&uStack_90,&uStack_a0,&uStack_c0,&uStack_b0);
            uVar13 = uVar13 + 1;
          } while (uVar2 != uVar13);
        }
        lVar12 = *param_4;
        FUN_10a123d38(lVar12);
        *(undefined1 *)(lVar12 + 0x4a) = 1;
        if (aplStack_80[0] != (long *)0x0) {
          (**(code **)(*aplStack_80[0] + 8))();
        }
        return aplStack_80[0];
      }
      FUN_10a00946c(&UNK_10f63b8ac);
    }
    else {
      FUN_10a00946c(&UNK_10f63b8ac);
    }
  }
LAB_10ab24804:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ab24808);
  (*pcVar6)();
}



/* Entry: 10ab243e4; end: 10ab24843;  */

void FUN_10ab243e4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined4 in_s3;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  byte bStack_c1;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  uint uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  long *aplStack_70 [2];
  
  FUN_10ab25930(aplStack_70);
  uVar2 = *(uint *)(aplStack_70[0] + 0x14);
  fVar18 = *(float *)(param_1 + 0x174);
  fVar17 = *(float *)(param_1 + 0x170) * fVar18;
  if (fVar17 < (float)uVar2) {
    FUN_10a00946c(&UNK_10f63b8ac);
  }
  else {
    FUN_10a11b6d8(*param_4 + 0x28);
    if (((int)((ulong)(aplStack_70[0][6] - aplStack_70[0][5]) >> 2) < 1) ||
       (iVar5 = *(int *)aplStack_70[0][5], iVar5 == -1)) {
      puVar14 = (undefined8 *)0x0;
    }
    else {
      puVar14 = *(undefined8 **)(aplStack_70[0][2] + (long)iVar5 * 8);
    }
    if (((int)((ulong)(aplStack_70[0][0xf] - aplStack_70[0][0xe]) >> 2) < 1) ||
       (iVar5 = *(int *)aplStack_70[0][0xe], iVar5 == -1)) {
      puVar15 = (undefined8 *)0x0;
    }
    else {
      puVar15 = *(undefined8 **)(aplStack_70[0][2] + (long)iVar5 * 8);
    }
    if (((int)((ulong)(aplStack_70[0][9] - aplStack_70[0][8]) >> 2) < 1) ||
       (iVar5 = *(int *)aplStack_70[0][8], iVar5 == -1)) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      puVar8 = *(undefined8 **)(aplStack_70[0][2] + (long)iVar5 * 8);
    }
    if (((int)((ulong)(aplStack_70[0][0xc] - aplStack_70[0][0xb]) >> 2) < 1) ||
       (iVar5 = *(int *)aplStack_70[0][0xb], iVar5 == -1)) {
      puVar9 = (undefined8 *)0x0;
    }
    else {
      puVar9 = *(undefined8 **)(aplStack_70[0][2] + (long)iVar5 * 8);
    }
    puVar12 = (undefined8 *)aplStack_70[0][2];
    lVar10 = aplStack_70[0][3];
    puVar7 = puVar12;
    FUN_10ab25a7c(puVar12,lVar10,6);
    if ((puVar7 == (undefined8 *)0x0) || (*(uint *)(puVar7 + 0xc) == uVar2)) {
      bVar3 = *(byte *)(param_1 + 0x18d);
      cVar4 = *(char *)(param_1 + 0x18c);
      if (cVar4 == '\x01') {
        FUN_10ab25a7c(puVar12,lVar10,2);
      }
      else {
        puVar12 = (undefined8 *)0x0;
      }
      if (((((((puVar14 != (undefined8 *)0x0) && (*(uint *)(puVar14 + 0xc) == uVar2)) &&
             (puVar15 != (undefined8 *)0x0)) &&
            ((*(uint *)(puVar15 + 0xc) == uVar2 && (puVar8 != (undefined8 *)0x0)))) &&
           ((*(uint *)(puVar8 + 0xc) == uVar2 &&
            ((puVar9 != (undefined8 *)0x0 && (*(uint *)(puVar9 + 0xc) == uVar2)))))) &&
          ((bVar3 == 0 || ((puVar7 != (undefined8 *)0x0 && (*(uint *)(puVar7 + 0xc) == uVar2))))))
         && ((cVar4 != '\x01' ||
             ((puVar12 != (undefined8 *)0x0 && (*(uint *)(puVar12 + 0xc) == uVar2)))))) {
        uStack_80 = 0;
        uStack_78 = 0;
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_a0 = 0;
        uStack_98 = 0;
        uVar16 = 0;
        uStack_a8 = 0x3f80000000000000;
        uStack_b0 = 0;
        if (uVar2 != 0) {
          uVar11 = 0;
          bVar1 = 0;
          if (puVar7 != (undefined8 *)0x0) {
            bVar1 = bVar3;
          }
          do {
            _memcpy(&uStack_80,*(long *)*puVar14 + puVar14[6] + puVar14[5] * uVar11);
            _memcpy(&uStack_90,*(long *)*puVar15 + puVar15[6] + puVar15[5] * uVar11);
            _memcpy(&uStack_a0,*(long *)*puVar9 + puVar9[6] + puVar9[5] * uVar11);
            uStack_b4 = (uint)uVar11;
            uVar13 = uVar11;
            if ((bVar1 & 1) != 0) {
              _memcpy(&uStack_b4,*(long *)*puVar7 + puVar7[6] + puVar7[5] * uVar11);
              uVar13 = (ulong)uStack_b4;
              if (uVar2 <= uStack_b4) {
                FUN_10a00946c(&UNK_10f63b8ac);
                goto LAB_10ab24804;
              }
            }
            cVar4 = *(char *)(param_1 + 0x18c);
            if (cVar4 == '\x01') {
              uStack_c0 = 0;
              uStack_b8 = 0;
              _memcpy(&uStack_c0,*(long *)*puVar8 + puVar8[6] + puVar8[5] * uVar11);
              _memcpy(&bStack_c1,*(long *)*puVar12 + puVar12[6] + puVar12[5] * uVar11);
              uStack_d8 = uStack_c0;
              uStack_cc = (uint)bStack_c1;
              uStack_d0 = uStack_b8;
              func_0x00010a005ddc(&uStack_d8);
            }
            else {
              uStack_d8 = 0;
              uStack_d0 = 0;
              _memcpy(&uStack_d8,*(long *)*puVar8 + puVar8[6] + puVar8[5] * uVar11);
              FUN_10a007a60(&uStack_d8,cVar4);
            }
            uStack_b0 = CONCAT44(fVar17,(int)uVar16);
            uStack_a8 = CONCAT44(in_s3,fVar18);
            FUN_10a11e410(*param_4,uVar13,&uStack_80,&uStack_90,&uStack_b0,&uStack_a0);
            uVar11 = uVar11 + 1;
          } while (uVar2 != uVar11);
        }
        lVar10 = *param_4;
        FUN_10a123d38(lVar10);
        *(undefined1 *)(lVar10 + 0x4a) = 1;
        if (aplStack_70[0] != (long *)0x0) {
          (**(code **)(*aplStack_70[0] + 8))();
        }
        return;
      }
      FUN_10a00946c(&UNK_10f63b8ac);
    }
    else {
      FUN_10a00946c(&UNK_10f63b8ac);
    }
  }
LAB_10ab24804:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ab24808);
  (*pcVar6)();
}



/* Entry: 10ab24844; end: 10ab25527;  */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_10ab24844(long *param_1,ulong param_2,long *param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  ulong uVar9;
  code *pcVar10;
  bool bVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  uint *puVar15;
  int iVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  undefined8 *puVar22;
  long *plVar23;
  ulong uVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  uint uVar28;
  undefined4 in_s3;
  float fVar29;
  float fVar30;
  long *plStack_150;
  long lStack_128;
  long *plStack_120;
  long *plStack_100;
  long *plStack_f8;
  long lStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  long **pplStack_98;
  undefined4 uStack_90;
  uint uStack_8c;
  long *plStack_88;
  long *aplStack_80 [2];
  
  uVar20 = cntfrq_el0;
  InstructionSynchronizationBarrier();
  uVar17 = cntvct_el0;
  if (uVar20 != 1000000000) {
    uVar19 = 0;
    if (uVar20 != 0) {
      uVar19 = uVar17 / uVar20;
    }
    uVar24 = 0;
    if (uVar20 != 0) {
      uVar24 = ((uVar17 - uVar19 * uVar20) * 1000000000) / uVar20;
    }
    uVar17 = uVar24 + uVar19 * 1000000000;
  }
  uVar28 = (uint)param_2;
  if (param_1[0x43] != 0) {
    lVar12 = *param_3;
    if ((lVar12 == 0) ||
       (___dynamic_cast(lVar12,&PTR_DAT_110ba75e8,&PTR_DAT_110ba75f8,0), lVar12 == 0)) {
      uStack_e0 = (long *)0x0;
      uStack_d8 = (long *)0x0;
    }
    else {
      uStack_d8 = (long *)param_3[1];
      uStack_e0 = (long *)lVar12;
      if (uStack_d8 != (long *)0x0) {
        plVar23 = uStack_d8 + 1;
        do {
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar11) {
            *plVar23 = *plVar23 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
    }
    plVar23 = uStack_d8;
    FUN_10ab25528(param_1,param_2,&uStack_e0);
    *(uint *)(*param_3 + 8) = uVar28;
    if (plVar23 != (long *)0x0) {
      plVar18 = plVar23 + 1;
      do {
        lVar12 = *plVar18;
        cVar7 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar11) {
          *plVar18 = lVar12 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar23 + 0x10))(plVar23);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
      }
    }
    goto LAB_10ab25300;
  }
  lVar12 = (param_1[0x37] - param_1[0x36] >> 3) * -0x5555555555555555;
  uVar5 = *(uint *)(param_1 + 0x31);
  uVar3 = *(uint *)(param_1 + 0x1e);
  uVar8 = 0;
  if (uVar3 != 0) {
    uVar8 = uVar5 / uVar3;
  }
  if (lVar12 - (int)uVar5 != 0 && lVar12 - (ulong)uVar8 != 0) {
    FUN_10a00946c(&UNK_10f63b8ac);
    goto LAB_10ab25420;
  }
  uVar8 = 0;
  if (uVar3 != 0) {
    uVar8 = uVar28 / uVar3;
  }
  uVar1 = uVar28;
  if (lVar12 - (int)uVar5 != 0) {
    uVar1 = uVar8;
  }
  if (((int)uVar1 < 0) || ((int)lVar12 <= (int)uVar1)) {
    FUN_10a00946c(&UNK_10f63b8ac);
    goto LAB_10ab25420;
  }
  if ((1 < uVar3) && (uVar28 != uVar8 * uVar3)) {
    lStack_128 = *param_3;
    if ((lStack_128 == 0) ||
       (___dynamic_cast(lStack_128,&PTR_DAT_110ba75e8,&PTR_DAT_110ba7610,0), lStack_128 == 0)) {
      lStack_128 = 0;
      plStack_120 = (long *)0x0;
    }
    else {
      plStack_120 = (long *)param_3[1];
      if (plStack_120 != (long *)0x0) {
        plVar23 = plStack_120 + 1;
        do {
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar11) {
            *plVar23 = *plVar23 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
    }
    if (*(char *)((long)param_1 + 0x18e) == '\x01') {
      plVar23 = param_1;
      FUN_10ab2572c(param_1,uVar1);
      puVar2 = (uint *)*plVar23;
      uVar20 = plVar23[1] - (long)puVar2;
      if ((uVar20 < 4) || (uVar19 = (ulong)*puVar2, uVar20 - 4 < uVar19)) {
        FUN_10a00946c(&UNK_10f63b8ac);
        goto LAB_10ab25420;
      }
      if (((lStack_128 != 0) && (uVar3 = *(uint *)(param_1 + 0x1e), 1 < uVar3)) &&
         (-1 < (int)uVar28)) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = uVar28 / uVar3;
        }
        iVar6 = uVar28 - uVar5 * uVar3;
        if (iVar6 != 0) {
          lStack_c8 = 0;
          lStack_d0 = 0;
          uStack_b8 = 0;
          lStack_c0 = 0;
          uStack_d8 = (long *)0x0;
          uStack_e0 = (long *)0x0;
          lVar12 = *(long *)(lStack_128 + 0xb8);
          if ((lVar12 != 0) &&
             (0 < (int)((ulong)(*(long *)(lVar12 + 0x30) - *(long *)(lVar12 + 0x28)) >> 4))) {
            if (*(int *)(lVar12 + 8) == uVar28 - iVar6) {
              plVar23 = (long *)(*(long *)(lStack_128 + 0xb8) + 0x28);
              uVar24 = *(long *)(*(long *)(lStack_128 + 0xb8) + 0x30) - *plVar23;
              func_0x00010983d018(&lStack_c8,(long)(uVar24 * 0x10000000) >> 0x20);
              func_0x00010a008298(*(undefined8 *)(*(long *)(lStack_128 + 0xb8) + 0x98),lStack_c8,
                                  lStack_c0 - lStack_c8 >> 4,
                                  *(undefined1 *)(*(long *)(lStack_128 + 0xb8) + 0x48));
              goto LAB_10ab24d5c;
            }
LAB_10ab253b4:
            FUN_10a00946c(&UNK_10f63b8ac);
            goto LAB_10ab25420;
          }
          lVar12 = param_1[10];
          fVar29 = *(float *)(param_1 + 0x2e);
          fVar30 = *(float *)((long)param_1 + 0x174);
          uVar4 = *(undefined1 *)((long)param_1 + 0x18c);
          plVar23 = (long *)0x120;
          __Znwm();
          plVar14 = plVar23 + 1;
          *plVar14 = 0;
          plVar23[2] = 0;
          plVar18 = plVar23 + 3;
          *plVar23 = (long)&PTR_DAT_110c02148;
          FUN_10a123dc0(plVar18,lVar12,(int)fVar29,(int)fVar30,uVar4);
          plStack_100 = plVar18;
          plStack_f8 = plVar23;
          FUN_10ab243e4(param_1,puVar2 + 1,uVar19,&plStack_100);
          uVar24 = plVar23[9] - plVar23[8];
          func_0x00010983d018(&lStack_c8,(long)(uVar24 * 0x10000000) >> 0x20);
          func_0x00010a008298(plVar23[0x16],lStack_c8,lStack_c0 - lStack_c8 >> 4,(char)plVar23[0xc])
          ;
          if (uStack_e0 != (long *)0x0) {
            uStack_d8 = uStack_e0;
            _free(uStack_e0[-1]);
          }
          uStack_d8 = (long *)plVar23[9];
          uStack_e0 = (long *)plVar23[8];
          lStack_d0 = plVar23[10];
          plVar23[9] = 0;
          plVar23[10] = 0;
          plVar23[8] = 0;
          do {
            lVar12 = *plVar14;
            cVar7 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar11) {
              *plVar14 = lVar12 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plVar23 + 0x10))(plVar23);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
          }
          plVar23 = &uStack_e0;
LAB_10ab24d5c:
          iVar16 = (int)(uVar24 >> 4);
          if (((iVar16 < 1) ||
              ((int)(*(float *)(param_1 + 0x2e) * *(float *)((long)param_1 + 0x174)) < iVar16)) ||
             (*(int *)(lStack_128 + 0x44) * *(int *)(lStack_128 + 0x40) < iVar16))
          goto LAB_10ab253b4;
          uVar24 = uVar24 >> 4 & 0x7fffffff;
          FUN_10a11b6d8(lStack_128 + 0x28,uVar24);
          lVar12 = param_1[0x1e];
          __ZNSt3__15mutex4lockEv(param_1 + 0x3b);
          iVar16 = 0;
          if ((int)lVar12 != 0) {
            iVar16 = (int)uVar28 / (int)lVar12;
          }
          if ((int)param_1[0x32] != iVar16) {
            FUN_10a11a970(&plStack_100,(long)puVar2 + uVar19 + 4,uVar20 - (uVar19 + 4),*plVar23,
                          plVar23[1] - *plVar23 >> 4,lStack_c8,lStack_c0 - lStack_c8 >> 4);
            plVar18 = param_1 + 0x33;
            lVar12 = param_1[0x33];
            if (lVar12 != 0) {
              lVar21 = param_1[0x34];
              lVar13 = lVar12;
              if (lVar21 != lVar12) {
                do {
                  lVar21 = lVar21 + -0x30;
                  FUN_10a131de4(lVar21);
                } while (lVar21 != lVar12);
                lVar13 = *plVar18;
              }
              param_1[0x34] = lVar12;
              __ZdlPv(lVar13);
              *plVar18 = 0;
              param_1[0x34] = 0;
              param_1[0x35] = 0;
            }
            param_1[0x34] = (long)plStack_f8;
            *plVar18 = (long)plStack_100;
            param_1[0x35] = lStack_f0;
            plStack_f8 = (long *)0x0;
            lStack_f0 = 0;
            plStack_100 = (long *)0x0;
            pplStack_98 = &plStack_100;
            FUN_10a131d74(&pplStack_98);
            *(int *)(param_1 + 0x32) = iVar16;
          }
          uVar20 = (ulong)(iVar6 - 1);
          uVar19 = (param_1[0x34] - param_1[0x33] >> 4) * -0x5555555555555555;
          if (uVar19 < uVar20 || uVar19 - uVar20 == 0) {
            FUN_10a00946c(&UNK_10f63b8ac);
            goto LAB_10ab25420;
          }
          plVar18 = (long *)(param_1[0x33] + uVar20 * 0x30);
          if ((uVar24 != plVar18[1] - *plVar18 >> 4) || (uVar24 != plVar18[4] - plVar18[3] >> 4)) {
            FUN_10a00946c(&UNK_10f63b8ac);
            goto LAB_10ab25420;
          }
          FUN_10a1253b0(lStack_128,*plVar23,plVar23[1] - *plVar23 >> 4,*plVar18,uVar24,plVar18[3],
                        uVar24);
          __ZNSt3__15mutex6unlockEv(param_1 + 0x3b);
          FUN_10a123d38(lStack_128);
          *(undefined1 *)(lStack_128 + 0x4a) = 1;
          if (lStack_c8 != 0) {
            lStack_c0 = lStack_c8;
            __ZdlPv();
          }
          if (uStack_e0 != (long *)0x0) {
            uStack_d8 = uStack_e0;
            _free(uStack_e0[-1]);
          }
          goto LAB_10ab252c0;
        }
      }
      FUN_10a00946c(&UNK_10f63b8ac);
      goto LAB_10ab25420;
    }
    plVar23 = param_1;
    FUN_10ab2572c(param_1,uVar1);
    if ((lStack_128 != 0) && (uVar3 = *(uint *)(param_1 + 0x1e), 1 < uVar3)) {
      uVar5 = 0;
      if (uVar3 != 0) {
        uVar5 = uVar28 / uVar3;
      }
      uVar3 = uVar28 - uVar5 * uVar3;
      if (0 < (int)uVar3) {
        FUN_10ab25930(aplStack_80,*plVar23,plVar23[1] - *plVar23);
        plVar18 = aplStack_80[0];
        uVar5 = *(uint *)(aplStack_80[0] + 0x14);
        fVar29 = *(float *)((long)param_1 + 0x174);
        plVar23 = (long *)(ulong)(uint)(*(float *)(param_1 + 0x2e) * fVar29);
        if ((*(float *)(param_1 + 0x2e) * fVar29 < (float)(int)uVar5) ||
           (*(int *)(lStack_128 + 0x44) * *(int *)(lStack_128 + 0x40) < (int)uVar5)) {
          FUN_10a00946c(&UNK_10f63b8ac);
          goto LAB_10ab25420;
        }
        uVar20 = (ulong)(int)uVar5;
        FUN_10a11b6d8(lStack_128 + 0x28,uVar20);
        plStack_88 = (long *)0x0;
        lVar12 = *(long *)(lStack_128 + 0xb8);
        if (lVar12 == 0) {
          bVar11 = false;
        }
        else {
          bVar11 = uVar5 == (uint)((ulong)(*(long *)(lVar12 + 0x30) - *(long *)(lVar12 + 0x28)) >> 4
                                  );
        }
        uVar8 = 0;
        if (*(uint *)(param_1 + 0x1e) != 0) {
          uVar8 = *(uint *)(param_1 + 0x31) / *(uint *)(param_1 + 0x1e);
        }
        if ((param_1[0x37] - param_1[0x36] >> 3) * -0x5555555555555555 - (ulong)uVar8 == 0) {
          if (((bVar11) || ((int)((ulong)(plVar18[6] - plVar18[5]) >> 2) < 1)) ||
             (iVar6 = *(int *)plVar18[5], iVar6 == -1)) {
            puVar25 = (undefined8 *)0x0;
          }
          else {
            puVar25 = *(undefined8 **)(plVar18[2] + (long)iVar6 * 8);
          }
          if (((int)((ulong)(plVar18[0x12] - plVar18[0x11]) >> 2) < (int)uVar3) ||
             (iVar6 = *(int *)(plVar18[0x11] + (ulong)uVar3 * 4 + -4), iVar6 == -1)) {
            puVar22 = (undefined8 *)0x0;
          }
          else {
            puVar22 = *(undefined8 **)(plVar18[2] + (long)iVar6 * 8);
          }
          if (((int)uVar3 < (int)((ulong)(plVar18[9] - plVar18[8]) >> 2)) &&
             (iVar6 = *(int *)(plVar18[8] + (ulong)uVar3 * 4), iVar6 != -1)) {
            puVar27 = *(undefined8 **)(plVar18[2] + (long)iVar6 * 8);
          }
          else {
            puVar27 = (undefined8 *)0x0;
          }
          plStack_150 = (long *)0x0;
          puVar26 = (undefined8 *)0x0;
          if ((*(byte *)((long)param_1 + 0x18d) & 1) != 0) goto LAB_10ab250dc;
        }
        else {
          if (bVar11) {
LAB_10ab25068:
            puVar25 = (undefined8 *)0x0;
          }
          else {
            FUN_10ab2572c(param_1,uVar28 - uVar3);
            plVar14 = (long *)0x8;
            __Znwm();
            FUN_10ab25930();
            lVar12 = *plVar14;
            plStack_88 = plVar14;
            if (((int)((ulong)(*(long *)(lVar12 + 0x30) - (long)*(int **)(lVar12 + 0x28)) >> 2) < 1)
               || (iVar6 = **(int **)(lVar12 + 0x28), iVar6 == -1)) goto LAB_10ab25068;
            puVar25 = *(undefined8 **)(*(long *)(lVar12 + 0x10) + (long)iVar6 * 8);
          }
          if (((int)((ulong)(plVar18[6] - plVar18[5]) >> 2) < 1) ||
             (iVar6 = *(int *)plVar18[5], iVar6 == -1)) {
            puVar22 = (undefined8 *)0x0;
          }
          else {
            puVar22 = *(undefined8 **)(plVar18[2] + (long)iVar6 * 8);
          }
          if ((int)((ulong)(plVar18[9] - plVar18[8]) >> 2) < 1) {
            puVar27 = (undefined8 *)0x0;
          }
          else {
            iVar6 = *(int *)plVar18[8];
            if (iVar6 == -1) {
              puVar27 = (undefined8 *)0x0;
            }
            else {
              puVar27 = *(undefined8 **)(plVar18[2] + (long)iVar6 * 8);
            }
          }
LAB_10ab250dc:
          plStack_150 = plStack_88;
          puVar26 = (undefined8 *)plVar18[2];
          FUN_10ab25a7c(puVar26,plVar18[3],6);
        }
        if ((((!bVar11) && ((puVar25 == (undefined8 *)0x0 || (*(uint *)(puVar25 + 0xc) != uVar20))))
            || (puVar22 == (undefined8 *)0x0)) ||
           ((((*(uint *)(puVar22 + 0xc) != uVar20 || (puVar27 == (undefined8 *)0x0)) ||
             (*(uint *)(puVar27 + 0xc) != uVar20)) ||
            ((puVar26 != (undefined8 *)0x0 && (*(uint *)(puVar26 + 0xc) != uVar20)))))) {
          FUN_10a00946c(&UNK_10f63b8ac);
          goto LAB_10ab25420;
        }
        if (bVar11) {
          lVar12 = *(long *)(*(long *)(lStack_128 + 0xb8) + 0x28);
        }
        else {
          lVar12 = 0;
        }
        uVar20 = 0;
        plStack_100 = (long *)0x0;
        plStack_f8 = (long *)((ulong)plStack_f8 & 0xffffffff00000000);
        pplStack_98 = (long **)0x0;
        uStack_90 = 0;
        uStack_a8 = 0;
        uStack_a0 = 0;
        if (uVar5 != 0) {
          uVar19 = 0;
          do {
            if (puVar26 == (undefined8 *)0x0) {
              uStack_8c = (uint)uVar19;
              uVar24 = uVar19;
            }
            else {
              _memcpy(&uStack_8c,*(long *)*puVar26 + puVar26[6] + puVar26[5] * uVar19);
              uVar24 = (ulong)uStack_8c;
              if (uVar5 <= uStack_8c) {
                FUN_10a00946c(&UNK_10f63b8ac);
                goto LAB_10ab25420;
              }
            }
            _memcpy(&pplStack_98,*(long *)*puVar22 + puVar22[6] + puVar22[5] * uVar19);
            _memcpy(&uStack_a8,*(long *)*puVar27 + puVar27[6] + puVar27[5] * uVar19);
            FUN_10a007a60(&uStack_a8,*(undefined1 *)((long)param_1 + 0x18c));
            uStack_e0 = (long *)CONCAT44((int)plVar23,(int)uVar20);
            uStack_d8 = (long *)CONCAT44(in_s3,fVar29);
            if (lVar12 == 0) {
              _memcpy(&plStack_100,
                      *(long *)*puVar25 + puVar25[6] + puVar25[5] * (uVar24 & 0xffffffff));
            }
            else {
              plVar23 = (long *)(lVar12 + (uVar24 & 0xffffffff) * 0x10);
              uVar28 = *(uint *)(plVar23 + 1);
              uVar20 = (ulong)uVar28;
              plVar23 = (long *)*plVar23;
              plStack_f8 = (long *)CONCAT44(plStack_f8._4_4_,uVar28);
              plStack_100 = plVar23;
            }
            FUN_10a1252e4(lStack_128,uVar24,&plStack_100,&pplStack_98,&uStack_e0);
            uVar19 = uVar19 + 1;
          } while (uVar5 != uVar19);
        }
        FUN_10a123d38(lStack_128);
        *(undefined1 *)(lStack_128 + 0x4a) = 1;
        plStack_88 = (long *)0x0;
        if (plStack_150 != (long *)0x0) {
          plVar23 = (long *)*plStack_150;
          *plStack_150 = 0;
          if (plVar23 != (long *)0x0) {
            (**(code **)(*plVar23 + 8))();
          }
          __ZdlPv(plStack_150);
          plVar18 = aplStack_80[0];
        }
        if (plVar18 != (long *)0x0) {
          (**(code **)(*plVar18 + 8))();
        }
LAB_10ab252c0:
        param_2 = param_2 & 0xffffffff;
        if (plStack_120 != (long *)0x0) {
          plVar23 = plStack_120 + 1;
          do {
            lVar12 = *plVar23;
            cVar7 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar11) {
              *plVar23 = lVar12 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plStack_120 + 0x10))(plStack_120);
            goto LAB_10ab252f0;
          }
        }
        goto LAB_10ab252f4;
      }
    }
    FUN_10a00946c(&UNK_10f63b8ac);
LAB_10ab25420:
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x10ab25424);
    (*pcVar10)();
  }
  plVar23 = (long *)*param_3;
  if ((plVar23 == (long *)0x0) ||
     (___dynamic_cast(plVar23,&PTR_DAT_110ba75e8,&PTR_DAT_110ba75f8,0), plVar23 == (long *)0x0)) {
    uStack_e0 = (long *)0x0;
    uStack_d8 = (long *)0x0;
  }
  else {
    uStack_d8 = (long *)param_3[1];
    uStack_e0 = plVar23;
    if (uStack_d8 != (long *)0x0) {
      plVar23 = uStack_d8 + 1;
      do {
        cVar7 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar11) {
          *plVar23 = *plVar23 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
  }
  plStack_120 = uStack_d8;
  plVar23 = param_1;
  FUN_10ab2572c(param_1,uVar1);
  puVar2 = (uint *)*plVar23;
  uVar20 = plVar23[1] - (long)puVar2;
  if (*(char *)((long)param_1 + 0x18e) == '\x01') {
    puVar15 = puVar2;
    if (3 < uVar20) {
      puVar15 = puVar2 + 1;
      if ((ulong)*puVar2 <= uVar20 - 4) {
        FUN_10ab243e4(param_1,puVar15,(ulong)*puVar2,&uStack_e0);
        goto LAB_10ab24aa0;
      }
    }
    FUN_10a00946c(&UNK_10f63b8ac,puVar15);
    goto LAB_10ab25420;
  }
  FUN_10ab243e4(param_1,puVar2,uVar20,&uStack_e0);
LAB_10ab24aa0:
  if (plStack_120 != (long *)0x0) {
    plVar23 = plStack_120 + 1;
    do {
      lVar12 = *plVar23;
      cVar7 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar11) {
        *plVar23 = lVar12 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_120 + 0x10))(plStack_120);
LAB_10ab252f0:
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_120);
    }
  }
LAB_10ab252f4:
  *(int *)(*param_3 + 8) = (int)param_2;
LAB_10ab25300:
  lVar12 = *param_3;
  uVar20 = cntfrq_el0;
  InstructionSynchronizationBarrier();
  uVar19 = cntvct_el0;
  if (uVar20 != 1000000000) {
    uVar24 = 0;
    if (uVar20 != 0) {
      uVar24 = uVar19 / uVar20;
    }
    uVar9 = 0;
    if (uVar20 != 0) {
      uVar9 = ((uVar19 - uVar24 * uVar20) * 1000000000) / uVar20;
    }
    uVar19 = uVar9 + uVar24 * 1000000000;
  }
  *(ulong *)(lVar12 + 0x10) = uVar17;
  *(ulong *)(lVar12 + 0x18) = uVar19;
  *(undefined1 *)(lVar12 + 0x20) = 0;
  return;
}



/* Entry: 10ab25528; end: 10ab2572b;  */

void FUN_10ab25528(long param_1,undefined8 param_2,long *param_3)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  undefined8 unaff_x20;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  long *plStack_50;
  
  if ((-1 < (int)param_2) && (unaff_x20 = param_2, (int)param_2 < *(int *)(param_1 + 0x188))) {
    plVar2 = *(long **)(param_1 + 0x218);
    (**(code **)(*plVar2 + 0x28))(plVar2,param_2);
    if ((uint)plVar2 <= (uint)((int)*(float *)(param_1 + 0x174) * (int)*(float *)(param_1 + 0x170)))
    {
      lStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      lStack_70 = 0;
      uStack_98 = 0;
      lStack_a0 = 0;
      lStack_88 = 0;
      lStack_90 = 0;
      lStack_b8 = 0;
      lStack_c0 = 0;
      lStack_a8 = 0;
      uStack_b0 = 0;
      lStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      lStack_d0 = 0;
      lStack_e8 = 0;
      lStack_f0 = 0;
      plVar3 = *(long **)(param_1 + 0x218);
      (**(code **)(*plVar3 + 0x38))(plVar3,param_2,&lStack_f0);
      if ((int)plVar3 == 0) {
        FUN_10a11b6d8(*param_3 + 0x28,(ulong)plVar2 & 0xffffffff);
        lStack_58 = (lStack_e8 - lStack_f0 >> 2) * -0x5555555555555555;
        lStack_60 = lStack_f0;
        lStack_100 = (lStack_b8 - lStack_c0 >> 2) * -0x5555555555555555;
        lStack_108 = lStack_c0;
        lStack_110 = lStack_d0 - lStack_d8 >> 4;
        lStack_118 = lStack_d8;
        lStack_120 = lStack_a0 - lStack_a8 >> 4;
        lStack_128 = lStack_a8;
        FUN_10a122d50(*param_3,&lStack_60,&lStack_108,&lStack_118,&lStack_128);
        if (lStack_78 != 0) {
          lStack_70 = lStack_78;
          __ZdlPv();
        }
        if (lStack_90 != 0) {
          lStack_88 = lStack_90;
          __ZdlPv();
        }
        if (lStack_a8 != 0) {
          lStack_a0 = lStack_a8;
          __ZdlPv();
        }
        if (lStack_c0 != 0) {
          lStack_b8 = lStack_c0;
          __ZdlPv();
        }
        if (lStack_d8 != 0) {
          lStack_d0 = lStack_d8;
          __ZdlPv();
        }
        if (lStack_f0 != 0) {
          lStack_e8 = lStack_f0;
          __ZdlPv();
        }
        return;
      }
      goto LAB_10ab256c4;
    }
  }
  plVar3 = (long *)&UNK_10f63b8ac;
  FUN_10a00946c();
LAB_10ab256c4:
  func_0x00010983b87c();
  lStack_60 = CONCAT44(lStack_60._4_4_,(int)unaff_x20);
  plStack_50 = plVar3;
  func_0x0001099a6214(&lStack_108,&UNK_10f690c85,0x2b,0xc1,&lStack_60);
  FUN_10a0029c0(&lStack_108);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ab256f8);
  (*pcVar1)();
}



/* Entry: 10ab2572c; end: 10ab257ef;  */

long * FUN_10ab2572c(long param_1,int param_2)

{
  code *pcVar1;
  ulong uVar2;
  long *plVar3;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x1d8);
  uVar2 = (*(long *)(param_1 + 0x1b8) - *(long *)(param_1 + 0x1b0) >> 3) * -0x5555555555555555;
  if ((ulong)(long)param_2 <= uVar2 && uVar2 - (long)param_2 != 0) {
    plVar3 = (long *)(*(long *)(param_1 + 0x1b0) + (long)param_2 * 0x18);
    if (*plVar3 == plVar3[1]) {
      if ((ulong)(*(long *)(param_1 + 0x230) - *(long *)(param_1 + 0x228) >> 3) <=
          (ulong)(long)param_2) goto LAB_10ab257d8;
      (**(code **)(*(long *)**(undefined8 **)**(undefined8 **)(param_1 + 0x1c8) + 0x28))
                ((long *)**(undefined8 **)**(undefined8 **)(param_1 + 0x1c8),
                 *(undefined8 *)(*(long *)(param_1 + 0x228) + (long)param_2 * 8));
      FUN_10ab2583c(*(undefined8 *)(param_1 + 0x1c8),plVar3);
    }
    __ZNSt3__15mutex6unlockEv(param_1 + 0x1d8);
    return plVar3;
  }
LAB_10ab257d8:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ab257dc);
  (*pcVar1)();
}



/* Entry: 10ab257f0; end: 10ab2583b;  */

void FUN_10ab257f0(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = *(long *)*param_1;
  uVar3 = cntfrq_el0;
  InstructionSynchronizationBarrier();
  uVar5 = cntvct_el0;
  if (uVar3 != 1000000000) {
    uVar1 = 0;
    if (uVar3 != 0) {
      uVar1 = uVar5 / uVar3;
    }
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = ((uVar5 - uVar1 * uVar3) * 1000000000) / uVar3;
    }
    uVar5 = uVar2 + uVar1 * 1000000000;
  }
  *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)param_1[1];
  *(ulong *)(lVar4 + 0x18) = uVar5;
  *(undefined1 *)(lVar4 + 0x20) = 0;
  return;
}



/* Entry: 10ab2583c; end: 10ab2592f;  */

long * FUN_10ab2583c(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  int aiStack_f0 [2];
  undefined8 **appuStack_e8 [2];
  char cStack_d1;
  long *plStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined2 uStack_66;
  long *plStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  ulong uStack_38;
  
  uStack_38 = 0;
  (**(code **)(*(long *)**(undefined8 **)*param_1 + 0x20))
            ((long *)**(undefined8 **)*param_1,&uStack_38,1,8);
  uVar1 = uStack_38;
  if (-1 < (long)uStack_38) {
    lVar6 = *param_2;
    uVar9 = param_2[1] - lVar6;
    if (uStack_38 < uVar9 || uStack_38 - uVar9 == 0) {
      if (uStack_38 < uVar9) {
        param_2[1] = lVar6 + uStack_38;
      }
    }
    else {
      func_0x0001092bf294(param_2,uStack_38 - uVar9);
      lVar6 = *param_2;
    }
    plVar3 = (long *)**(undefined8 **)*param_1;
    (**(code **)(*plVar3 + 0x20))(plVar3,lVar6,1,uVar1);
    return plVar3;
  }
  plVar4 = (long *)0x10;
  ___cxa_allocate_exception();
  FUN_109ffdeb4();
  plVar3 = plVar4;
  puVar7 = PTR___ZTISt12length_error_110352238;
  puVar8 = PTR___ZNSt12length_errorD1Ev_110346170;
  ___cxa_throw();
  ___cxa_free_exception(plVar4);
  plVar5 = plVar3;
  __Unwind_Resume();
  pcStack_48 = FUN_10ab25930;
  *plVar5 = 0;
  uStack_66 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  puStack_c8 = &uStack_c0;
  uStack_c0 = 0;
  puStack_b0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  puStack_98 = puVar7;
  puStack_90 = puVar8;
  plStack_60 = plVar3;
  plStack_58 = plVar4;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x00010985da9c(aiStack_f0,&puStack_c8,&puStack_98);
  plVar3 = plStack_d0;
  if (aiStack_f0[0] == 0) {
    plStack_d0 = (long *)0x0;
    plVar4 = (long *)*plVar5;
    *plVar5 = (long)plVar3;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
      plVar3 = plStack_d0;
      plStack_d0 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    if (cStack_d1 < '\0') {
      __ZdlPv(appuStack_e8[0]);
    }
    func_0x00010945fda0(&puStack_b0,uStack_a8);
    func_0x000107c34ee4(&puStack_c8,uStack_c0);
    return plVar5;
  }
  if (-1 < cStack_d1) {
    appuStack_e8[0] = appuStack_e8;
  }
  FUN_10a00946c(appuStack_e8[0]);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10ab25a20);
  (*pcVar2)();
}



/* Entry: 10ab25930; end: 10ab25a7b;  */

long * FUN_10ab25930(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  int aiStack_b0 [2];
  undefined8 **appuStack_a8 [2];
  char cStack_91;
  long *plStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  undefined2 uStack_26;
  
  *param_1 = 0;
  uStack_26 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  puStack_88 = &uStack_80;
  uStack_80 = 0;
  puStack_70 = &uStack_68;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_58 = param_2;
  uStack_50 = param_3;
  func_0x00010985da9c(aiStack_b0,&puStack_88,&uStack_58);
  plVar1 = plStack_90;
  if (aiStack_b0[0] == 0) {
    plStack_90 = (long *)0x0;
    plVar3 = (long *)*param_1;
    *param_1 = (long)plVar1;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
      plVar1 = plStack_90;
      plStack_90 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
    }
    if (cStack_91 < '\0') {
      __ZdlPv(appuStack_a8[0]);
    }
    func_0x00010945fda0(&puStack_70,uStack_68);
    func_0x000107c34ee4(&puStack_88,uStack_80);
    return param_1;
  }
  if (-1 < cStack_91) {
    appuStack_a8[0] = appuStack_a8;
  }
  FUN_10a00946c(appuStack_a8[0]);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10ab25a20);
  (*pcVar2)();
}



/* Entry: 10ab25a7c; end: 10ab25adf;  */

long FUN_10ab25a7c(long *param_1,long param_2,int param_3)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = param_2 - (long)param_1;
  if (0 < (int)(uVar2 >> 3)) {
    lVar4 = (long)uVar2 >> 3;
    uVar2 = uVar2 >> 3 & 0x7fffffff;
    do {
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10ab25ae0);
        (*pcVar1)();
      }
      lVar3 = *param_1;
      if (((*(int *)(lVar3 + 0x38) == 4) && (*(int *)(lVar3 + 0x1c) == param_3)) &&
         (*(char *)(lVar3 + 0x18) == '\x01')) {
        return lVar3;
      }
      param_1 = param_1 + 1;
      lVar4 = lVar4 + -1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return 0;
}



/* Entry: 10ab25ae0; end: 10ab25bb7;  */

void FUN_10ab25ae0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  float *pfVar11;
  ulong extraout_x8;
  ulong uVar12;
  float *pfVar13;
  ulong extraout_x9;
  ulong uVar14;
  ulong extraout_x10;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_e8 [24];
  ulong uStack_d0;
  long *plStack_c8;
  ulong uStack_c0;
  ulong uStack_b0;
  ulong uStack_a0;
  ulong uStack_38;
  
  uStack_38 = 0;
  lVar9 = 8;
  (**(code **)(*(long *)**(undefined8 **)*param_1 + 0x20))
            ((long *)**(undefined8 **)*param_1,&uStack_38,1);
  uVar15 = uStack_38;
  if (uStack_38 >> 0x3e == 0) {
    func_0x0001074287b0(param_2,uStack_38);
    (**(code **)(*(long *)**(undefined8 **)*param_1 + 0x20))
              ((long *)**(undefined8 **)*param_1,*param_2,4,uVar15);
    return;
  }
  lVar5 = 0x10;
  ___cxa_allocate_exception();
  FUN_109ffdeb4();
  lVar6 = lVar5;
  plVar7 = (long *)PTR___ZTISt12length_error_110352238;
  plVar8 = (long *)PTR___ZNSt12length_errorD1Ev_110346170;
  ___cxa_throw();
  ___cxa_free_exception(lVar5);
  __Unwind_Resume();
  uVar15 = plVar7[1];
  if (uVar15 == 0) {
    FUN_10a00946c(&UNK_10f69127e);
    uVar10 = extraout_x8;
    uVar12 = extraout_x9;
    uVar14 = extraout_x10;
  }
  else {
    uVar10 = plVar8[1];
    uVar12 = *(ulong *)(lVar9 + 8);
    uVar14 = *(ulong *)(param_5 + 8);
    if ((uVar10 == uVar15 && uVar12 == uVar15) && uVar14 == uVar15) {
      lVar5 = *(long *)(lVar6 + 0xe0);
      if ((lVar5 == 0) ||
         (uVar10 = uVar15, uVar12 = uVar15,
         uVar15 != (long)(int)((ulong)(*(long *)(lVar5 + 0x30) - *(long *)(lVar5 + 0x28)) >> 4))) {
        if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
          func_0x00010ae06f08(1,8,&UNK_10f6906f0,&UNK_10f69133d,0x5f1,&UNK_10f691417,param_7,param_8
                              ,uVar15);
        }
        *(int *)(lVar6 + 0x180) = (int)uVar15;
        *(int *)(lVar6 + 0x184) = (int)uVar15;
        uVar10 = uVar15;
        FUN_10ab243a8();
        *(float *)(lVar6 + 0x170) = (float)(int)uVar10;
        *(float *)(lVar6 + 0x174) = (float)(int)(uVar10 >> 0x20);
        *(undefined8 *)(lVar6 + 0x178) = 0;
        FUN_10ab36dec(&uStack_d0,*(undefined8 *)(lVar6 + 0x50));
        FUN_10a5ef3b4((long *)(lVar6 + 0xe0),&uStack_d0);
        if (plStack_c8 != (long *)0x0) {
          plVar1 = plStack_c8 + 1;
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
            (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_c8);
          }
        }
        FUN_10a11b6d8(*(long *)(lVar6 + 0xe0) + 0x28,*(undefined4 *)(lVar6 + 0x180));
        *(undefined4 *)(*(long *)(lVar6 + 0xe0) + 8) = 0;
        uVar12 = plVar7[1];
        uVar10 = plVar8[1];
      }
      uVar14 = uVar10;
      if (uVar15 - 1 <= uVar10) {
        uVar14 = uVar15 - 1;
      }
      if ((uVar14 < uVar12) && (uVar10 != uVar14)) {
        pfVar11 = (float *)(*plVar8 + 8);
        uVar10 = 0xff7fffffff7fffff;
        fVar17 = 3.4028235e+38;
        fVar18 = 3.4028235e+38;
        pfVar13 = (float *)(*plVar7 + 8);
        fVar16 = -3.4028235e+38;
        fVar20 = 3.4028235e+38;
        do {
          fVar22 = *pfVar13 - *pfVar11;
          if (fVar20 <= fVar22) {
            fVar22 = fVar20;
          }
          fVar19 = *pfVar13 + *pfVar11;
          fVar20 = (float)*(undefined8 *)(pfVar13 + -2);
          fVar23 = (float)*(undefined8 *)(pfVar11 + -2);
          fVar25 = fVar20 - fVar23;
          fVar21 = (float)((ulong)*(undefined8 *)(pfVar13 + -2) >> 0x20);
          fVar24 = (float)((ulong)*(undefined8 *)(pfVar11 + -2) >> 0x20);
          fVar26 = fVar21 - fVar24;
          fVar17 = (float)((uint)fVar17 ^ ((uint)fVar17 ^ (uint)fVar25) & -(uint)(fVar25 < fVar17));
          fVar18 = (float)((uint)fVar18 ^ ((uint)fVar18 ^ (uint)fVar26) & -(uint)(fVar26 < fVar18));
          fVar20 = fVar20 + fVar23;
          fVar21 = fVar21 + fVar24;
          uVar10 = uVar10 ^ (uVar10 ^ CONCAT44(fVar21,fVar20)) &
                            CONCAT44(-(uint)((float)(uVar10 >> 0x20) < fVar21),
                                     -(uint)((float)uVar10 < fVar20));
          if (fVar19 <= fVar16) {
            fVar19 = fVar16;
          }
          pfVar11 = pfVar11 + 3;
          pfVar13 = pfVar13 + 3;
          uVar15 = uVar15 - 1;
          fVar16 = fVar19;
          fVar20 = fVar22;
        } while (uVar15 != 0);
        fVar16 = (float)(uVar10 >> 0x20);
        fVar22 = (fVar19 + fVar22) * 0.5;
        fVar20 = ((float)uVar10 + fVar17) * 0.5;
        fVar17 = (fVar16 + fVar18) * 0.5;
        *(ulong *)(lVar6 + 0x158) = CONCAT44(fVar17,fVar20);
        *(float *)(lVar6 + 0x160) = fVar22;
        *(ulong *)(lVar6 + 0x164) = CONCAT44(fVar16 - fVar17,(float)uVar10 - fVar20);
        *(float *)(lVar6 + 0x16c) = fVar19 - fVar22;
        FUN_10a122d50(*(undefined8 *)(lVar6 + 0xe0),plVar7,plVar8,lVar9,param_5);
        return;
      }
      goto LAB_10ab25e48;
    }
  }
  uStack_d0 = uVar15;
  uStack_c0 = uVar10;
  uStack_b0 = uVar12;
  uStack_a0 = uVar14;
  func_0x0001099a6214(auStack_e8,&UNK_10f6912cc,0x70,0x4444,&uStack_d0);
  FUN_10a0029c0(auStack_e8);
LAB_10ab25e48:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ab25e4c);
  (*pcVar4)();
}



/* Entry: 10ab25bb8; end: 10ab25e67;  */

void FUN_10ab25bb8(long param_1,long *param_2,long *param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  float *pfVar7;
  ulong extraout_x8;
  ulong uVar8;
  float *pfVar9;
  ulong extraout_x9;
  ulong uVar10;
  ulong extraout_x10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_a8 [24];
  ulong uStack_90;
  long *plStack_88;
  ulong uStack_80;
  ulong uStack_70;
  ulong uStack_60;
  
  uVar11 = param_2[1];
  if (uVar11 == 0) {
    FUN_10a00946c(&UNK_10f69127e);
    uVar5 = extraout_x8;
    uVar8 = extraout_x9;
    uVar10 = extraout_x10;
  }
  else {
    uVar5 = param_3[1];
    uVar8 = *(ulong *)(param_4 + 8);
    uVar10 = *(ulong *)(param_5 + 8);
    if ((uVar5 == uVar11 && uVar8 == uVar11) && uVar10 == uVar11) {
      lVar6 = *(long *)(param_1 + 0xe0);
      if ((lVar6 == 0) ||
         (uVar5 = uVar11, uVar8 = uVar11,
         uVar11 != (long)(int)((ulong)(*(long *)(lVar6 + 0x30) - *(long *)(lVar6 + 0x28)) >> 4))) {
        if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
          func_0x00010ae06f08(1,8,&UNK_10f6906f0,&UNK_10f69133d,0x5f1,&UNK_10f691417,param_7,param_8
                              ,uVar11);
        }
        *(int *)(param_1 + 0x180) = (int)uVar11;
        *(int *)(param_1 + 0x184) = (int)uVar11;
        uVar5 = uVar11;
        FUN_10ab243a8();
        *(float *)(param_1 + 0x170) = (float)(int)uVar5;
        *(float *)(param_1 + 0x174) = (float)(int)(uVar5 >> 0x20);
        *(undefined8 *)(param_1 + 0x178) = 0;
        FUN_10ab36dec(&uStack_90,*(undefined8 *)(param_1 + 0x50));
        FUN_10a5ef3b4((long *)(param_1 + 0xe0),&uStack_90);
        if (plStack_88 != (long *)0x0) {
          plVar1 = plStack_88 + 1;
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
            (**(code **)(*plStack_88 + 0x10))(plStack_88);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
          }
        }
        FUN_10a11b6d8(*(long *)(param_1 + 0xe0) + 0x28,*(undefined4 *)(param_1 + 0x180));
        *(undefined4 *)(*(long *)(param_1 + 0xe0) + 8) = 0;
        uVar8 = param_2[1];
        uVar5 = param_3[1];
      }
      uVar10 = uVar5;
      if (uVar11 - 1 <= uVar5) {
        uVar10 = uVar11 - 1;
      }
      if ((uVar10 < uVar8) && (uVar5 != uVar10)) {
        pfVar7 = (float *)(*param_3 + 8);
        uVar5 = 0xff7fffffff7fffff;
        fVar13 = 3.4028235e+38;
        fVar14 = 3.4028235e+38;
        pfVar9 = (float *)(*param_2 + 8);
        fVar12 = -3.4028235e+38;
        fVar16 = 3.4028235e+38;
        do {
          fVar18 = *pfVar9 - *pfVar7;
          if (fVar16 <= fVar18) {
            fVar18 = fVar16;
          }
          fVar15 = *pfVar9 + *pfVar7;
          fVar16 = (float)*(undefined8 *)(pfVar9 + -2);
          fVar19 = (float)*(undefined8 *)(pfVar7 + -2);
          fVar21 = fVar16 - fVar19;
          fVar17 = (float)((ulong)*(undefined8 *)(pfVar9 + -2) >> 0x20);
          fVar20 = (float)((ulong)*(undefined8 *)(pfVar7 + -2) >> 0x20);
          fVar22 = fVar17 - fVar20;
          fVar13 = (float)((uint)fVar13 ^ ((uint)fVar13 ^ (uint)fVar21) & -(uint)(fVar21 < fVar13));
          fVar14 = (float)((uint)fVar14 ^ ((uint)fVar14 ^ (uint)fVar22) & -(uint)(fVar22 < fVar14));
          fVar16 = fVar16 + fVar19;
          fVar17 = fVar17 + fVar20;
          uVar5 = uVar5 ^ (uVar5 ^ CONCAT44(fVar17,fVar16)) &
                          CONCAT44(-(uint)((float)(uVar5 >> 0x20) < fVar17),
                                   -(uint)((float)uVar5 < fVar16));
          if (fVar15 <= fVar12) {
            fVar15 = fVar12;
          }
          pfVar7 = pfVar7 + 3;
          pfVar9 = pfVar9 + 3;
          uVar11 = uVar11 - 1;
          fVar12 = fVar15;
          fVar16 = fVar18;
        } while (uVar11 != 0);
        fVar12 = (float)(uVar5 >> 0x20);
        fVar18 = (fVar15 + fVar18) * 0.5;
        fVar16 = ((float)uVar5 + fVar13) * 0.5;
        fVar13 = (fVar12 + fVar14) * 0.5;
        *(ulong *)(param_1 + 0x158) = CONCAT44(fVar13,fVar16);
        *(float *)(param_1 + 0x160) = fVar18;
        *(ulong *)(param_1 + 0x164) = CONCAT44(fVar12 - fVar13,(float)uVar5 - fVar16);
        *(float *)(param_1 + 0x16c) = fVar15 - fVar18;
        FUN_10a122d50(*(undefined8 *)(param_1 + 0xe0),param_2,param_3,param_4,param_5);
        return;
      }
      goto LAB_10ab25e48;
    }
  }
  uStack_90 = uVar11;
  uStack_80 = uVar5;
  uStack_70 = uVar8;
  uStack_60 = uVar10;
  func_0x0001099a6214(auStack_a8,&UNK_10f6912cc,0x70,0x4444,&uStack_90);
  FUN_10a0029c0(auStack_a8);
LAB_10ab25e48:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ab25e4c);
  (*pcVar4)();
}



/* Entry: 10ab25e68; end: 10ab25f27;  */

long FUN_10ab25e68(long param_1)

{
  if (*(long *)(param_1 + 0x50) != 0) {
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x50);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x38);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x20);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10ab25f28; end: 10ab2613f;  */

void FUN_10ab25f28(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_50 [8];
  long *plStack_48;
  
  lVar7 = *(long *)(param_2 + 0xe0);
  if (lVar7 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar5 = (undefined8 *)0x70;
    __Znwm();
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = &PTR_DAT_110c48948;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[9] = 0;
    puVar5[8] = 0;
    puVar5[0xb] = 0;
    puVar5[10] = 0;
    puVar5[0xd] = 0;
    puVar5[0xc] = 0;
    param_1[1] = (long)puVar5;
    puVar5[3] = &PTR_FUN_110c47fa0;
    puVar5[7] = 0;
    puVar5[6] = 0;
    *param_1 = (long)(puVar5 + 3);
    uVar6 = *(undefined8 *)(param_2 + 0x50);
    FUN_10a1cb720(auStack_50,uVar6,lVar7 + 200);
    FUN_10a015bec(puVar5 + 6,auStack_50);
    plVar2 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
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
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    FUN_10a1cb720(auStack_50,uVar6,*(long *)(param_2 + 0xe0) + 0xd8);
    FUN_10a015bec(*param_1 + 0x28,auStack_50);
    plVar2 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
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
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    FUN_10a1cb720(auStack_50,uVar6,*(long *)(param_2 + 0xe0) + 0xe8);
    FUN_10a015bec(*param_1 + 0x38,auStack_50);
    plVar2 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
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
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    FUN_10a1cb720(auStack_50,uVar6,*(long *)(param_2 + 0xe0) + 0xf8);
    FUN_10a015bec(*param_1 + 0x48,auStack_50);
    if (plStack_48 != (long *)0x0) {
      plVar2 = plStack_48 + 1;
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
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
      }
    }
  }
  return;
}



/* Entry: 10ab26140; end: 10ab261d3;  */

void FUN_10ab26140(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  lStack_38 = 0;
  lStack_30 = 0;
  uStack_28 = 0;
  FUN_10a0723d0(&lStack_38,*(long *)(param_2 + 0x240),*(long *)(param_2 + 0x248),
                *(long *)(param_2 + 0x248) - *(long *)(param_2 + 0x240) >> 2);
  ppuVar1 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  FUN_10a3493c0(param_1,*(undefined8 *)(*ppuVar1 + 0x870),&lStack_38);
  if (lStack_38 != 0) {
    lStack_30 = lStack_38;
    __ZdlPv();
  }
  return;
}



/* Entry: 10ab261d4; end: 10ab2629b;  */

void FUN_10ab261d4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  ulong uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined4 uVar10;
  
  if (*(long *)(param_2 + 0xe0) == 0) {
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      func_0x00010ae06f08(1,2,&UNK_10f6906f0,&UNK_10f690e61,0x57c,&UNK_10f690edd);
    }
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  ppuVar3 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  uVar6 = *(long *)(extraout_x8 + 0x30) - *(long *)(extraout_x8 + 0x28);
  FUN_10a7f8494(param_1,*(undefined8 *)(*ppuVar3 + 0x870),
                (long)((int)(uVar6 >> 3) + (int)(uVar6 >> 4)));
  lVar9 = *(long *)(param_2 + 0xe0);
  lVar4 = *(long *)*param_1;
  uVar6 = ((long *)*param_1)[1];
  FUN_10ab2629c();
  if (uVar6 != 0) {
    lVar5 = 0;
    uVar7 = 0;
    puVar8 = (undefined4 *)(lVar4 + 8);
    do {
      lVar4 = *(long *)(lVar9 + 0x28);
      if ((ulong)(*(long *)(lVar9 + 0x30) - lVar4 >> 4) <= uVar7) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a124b54);
        (*pcVar2)();
      }
      puVar1 = (undefined8 *)(lVar4 + lVar5);
      uVar10 = *(undefined4 *)(puVar1 + 1);
      *(undefined8 *)(puVar8 + -2) = *puVar1;
      *puVar8 = uVar10;
      uVar7 = uVar7 + 1;
      lVar5 = lVar5 + 0x10;
      puVar8 = puVar8 + 3;
    } while (uVar6 != uVar7);
  }
  return;
}



/* Entry: 10ab2629c; end: 10ab262df;  */

void FUN_10ab2629c(undefined8 param_1,long param_2)

{
  code *pcVar1;
  
  if ((ulong)(param_2 * 4) % 0xc == 0) {
    return;
  }
  FUN_10a00946c(&UNK_10f63b8ac);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ab262dc);
  (*pcVar1)();
}



/* Entry: 10ab262e0; end: 10ab263b7;  */

void FUN_10ab262e0(undefined8 *param_1,long param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  ulong uVar4;
  undefined8 uVar5;
  
  if (*(long *)(param_2 + 0xe0) == 0) {
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      func_0x00010ae06f08(1,2,&UNK_10f6906f0,&UNK_10f690f1c,0x586,&UNK_10f690f91);
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    ppuVar1 = &PTR___tlv_bootstrap_11340df48;
    (*(code *)PTR___tlv_bootstrap_11340df48)();
    uVar4 = *(long *)(extraout_x8 + 0x30) - *(long *)(extraout_x8 + 0x28);
    FUN_10a7f8494(param_1,*(undefined8 *)(*ppuVar1 + 0x870),
                  (long)((int)(uVar4 >> 3) + (int)(uVar4 >> 4)));
    uVar5 = *(undefined8 *)(param_2 + 0xe0);
    uVar2 = *(undefined8 *)*param_1;
    uVar3 = ((undefined8 *)*param_1)[1];
    FUN_10ab2629c(uVar2,uVar3);
    func_0x00010a124b54(uVar5,uVar2,uVar3);
  }
  return;
}



/* Entry: 10ab263b8; end: 10ab2649b;  */

void FUN_10ab263b8(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  undefined **ppuVar2;
  long extraout_x8;
  ulong uVar3;
  
  if (*(long *)(param_2 + 0xe0) == 0) {
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      func_0x00010ae06f08(1,2,&UNK_10f6906f0,&UNK_10f690fcd,0x590,&UNK_10f691045);
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    ppuVar2 = &PTR___tlv_bootstrap_11340df48;
    (*(code *)PTR___tlv_bootstrap_11340df48)();
    FUN_10a7f8494(param_1,*(undefined8 *)(*ppuVar2 + 0x870),
                  (*(long *)(extraout_x8 + 0x30) - *(long *)(extraout_x8 + 0x28)) * 0x40000000 >>
                  0x20 & 0xfffffffffffffffc);
    uVar3 = ((undefined8 *)*param_1)[1];
    if ((uVar3 & 3) != 0) {
      FUN_10a00946c(&UNK_10f63b8ac);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10ab26484);
      (*pcVar1)();
    }
    func_0x00010a008298(*(undefined8 *)(*(long *)(param_2 + 0xe0) + 0x98),*(undefined8 *)*param_1,
                        uVar3 >> 2 & 0xfffffffffffffff,
                        *(undefined1 *)(*(long *)(param_2 + 0xe0) + 0x48));
  }
  return;
}



/* Entry: 10ab2649c; end: 10ab26567;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ab2649c(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  code *pcVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long extraout_x8;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  if (*(long *)(param_2 + 0xe0) == 0) {
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      func_0x00010ae06f08(1,2,&UNK_10f6906f0,&UNK_10f691084,0x59a,&UNK_10f6910f9);
    }
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  ppuVar6 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  FUN_10a7f8494(param_1,*(undefined8 *)(*ppuVar6 + 0x870),
                (*(long *)(extraout_x8 + 0x30) - *(long *)(extraout_x8 + 0x28)) * 0x40000000 >> 0x20
                & 0xfffffffffffffffc);
  auVar4 = _UNK_10e06bb80;
  uVar10 = ((long *)*param_1)[1];
  if ((uVar10 & 3) == 0) {
    lVar8 = *(long *)*param_1;
    lVar7 = *(long *)(param_2 + 0xe0);
    uVar10 = uVar10 >> 2 & 0xfffffffffffffff;
    if (uVar10 != 0) {
      uVar9 = 0;
      do {
        lVar1 = *(long *)(lVar7 + 0xb0);
        if ((ulong)(*(long *)(lVar7 + 0xb8) - lVar1 >> 2) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a124cf8);
          (*pcVar5)();
        }
        uVar2 = *(undefined4 *)(lVar1 + uVar9 * 4);
        auVar12._4_4_ = uVar2;
        auVar12._0_4_ = uVar2;
        auVar12._8_4_ = uVar2;
        auVar12._12_4_ = uVar2;
        auVar12 = NEON_ushl(auVar12,auVar4,4);
        uVar11 = CONCAT26(auVar12._4_2_,
                          CONCAT24(auVar12._0_2_,CONCAT22((short)((uint)uVar2 >> 8),(short)uVar2)))
                 & 0xff00ff00ff00ff;
        auVar13._2_2_ = 0;
        auVar13._0_2_ = (ushort)uVar11;
        auVar13._4_2_ = (short)(uVar11 >> 0x10);
        auVar13._6_2_ = 0;
        auVar13._8_2_ = (short)(uVar11 >> 0x20);
        auVar13._10_2_ = 0;
        auVar13._12_2_ = (short)(uVar11 >> 0x30);
        auVar13._14_2_ = 0;
        auVar12 = NEON_ucvtf(auVar13,4);
        pfVar3 = (float *)(lVar8 + uVar9 * 0x10);
        pfVar3[2] = auVar12._8_4_ * 0.003921569;
        pfVar3[3] = auVar12._12_4_ * 0.003921569;
        *pfVar3 = auVar12._0_4_ * 0.003921569;
        pfVar3[1] = auVar12._4_4_ * 0.003921569;
        uVar9 = uVar9 + 1;
      } while (uVar10 != uVar9);
    }
    return;
  }
  FUN_10a00946c(&UNK_10f63b8ac);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10ab26564);
  (*pcVar5)();
}



/* Entry: 10ab26568; end: 10ab265ff;  */

void FUN_10ab26568(long param_1,int param_2,int param_3)

{
  code *pcVar1;
  int extraout_w8;
  int extraout_w9;
  undefined1 auStack_68 [24];
  int aiStack_50 [4];
  int iStack_40;
  int iStack_30;
  
  iStack_30 = param_2;
  if (param_1 == 0) {
    FUN_10a00946c(&UNK_10f691135);
    aiStack_50[0] = extraout_w8;
    iStack_40 = extraout_w9;
  }
  else {
    aiStack_50[0] = (int)((ulong)(*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28)) >> 4);
    iStack_40 = param_3 * aiStack_50[0];
    if (iStack_40 == param_2) {
      return;
    }
  }
  func_0x0001099a6214(auStack_68,&UNK_10f69116f,0x79,0x111,aiStack_50);
  FUN_10a0029c0(auStack_68);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ab265e4);
  (*pcVar1)();
}



/* Entry: 10ab26600; end: 10ab26657;  */

void FUN_10ab26600(long param_1,long *param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  code *pcVar3;
  undefined4 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  FUN_10ab26568(*(undefined8 *)(param_1 + 0xe0),*(undefined4 *)(*param_2 + 8),3);
  lVar7 = *(long *)(param_1 + 0xe0);
  lVar5 = *(long *)*param_2;
  uVar6 = ((long *)*param_2)[1];
  FUN_10ab26658();
  if (uVar6 != 0) {
    lVar8 = 0;
    uVar9 = 0;
    puVar10 = (undefined4 *)(lVar5 + 8);
    do {
      if ((ulong)(*(long *)(lVar7 + 0x30) - *(long *)(lVar7 + 0x28) >> 4) <= uVar9) {
LAB_10a124dd4:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10a124dd8);
        (*pcVar3)();
      }
      uVar11 = *puVar10;
      puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x28) + lVar8);
      *puVar1 = *(undefined8 *)(puVar10 + -2);
      *(undefined4 *)(puVar1 + 1) = uVar11;
      *(undefined4 *)((long)puVar1 + 0xc) = 0x3f800000;
      uStack_44 = 0;
      uStack_50 = puVar10[-2];
      uStack_4c = puVar10[-1];
      uStack_48 = *puVar10;
      puVar4 = &uStack_50;
      FUN_10a124524();
      if ((ulong)(*(long *)(lVar7 + 0x70) - *(long *)(lVar7 + 0x68) >> 3) <= uVar9)
      goto LAB_10a124dd4;
      puVar2 = (ulong *)(*(long *)(lVar7 + 0x68) + uVar9 * 8);
      *puVar2 = (ulong)puVar4 & 0xffffffffffff | (ulong)*(ushort *)((long)puVar2 + 6) << 0x30;
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x10;
      puVar10 = puVar10 + 3;
    } while (uVar6 != uVar9);
  }
  *(undefined1 *)(lVar7 + 0x49) = 1;
  FUN_10a123d38(lVar7);
  *(undefined1 *)(lVar7 + 0x4a) = 1;
  return;
}



/* Entry: 10ab26658; end: 10ab2669b;  */

void FUN_10ab26658(undefined8 param_1,long param_2)

{
  code *pcVar1;
  
  if ((ulong)(param_2 * 4) % 0xc == 0) {
    return;
  }
  FUN_10a00946c(&UNK_10f63b8ac);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ab26698);
  (*pcVar1)();
}



/* Entry: 10ab2669c; end: 10ab2674b;  */

void FUN_10ab2669c(long param_1,long *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uStack_38;
  
  FUN_10ab26568(*(undefined8 *)(param_1 + 0xe0),*(undefined4 *)(*param_2 + 8),3);
  lVar6 = *(long *)(param_1 + 0xe0);
  lVar4 = *(long *)*param_2;
  uVar5 = ((long *)*param_2)[1];
  FUN_10ab26658();
  if (uVar5 != 0) {
    uVar7 = 0;
    puVar8 = (undefined8 *)(lVar4 + 4);
    do {
      if ((ulong)(*(long *)(lVar6 + 0x70) - *(long *)(lVar6 + 0x68) >> 3) <= uVar7) {
LAB_10a124eb8:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a124ebc);
        (*pcVar1)();
      }
      *(float2 *)(*(long *)(lVar6 + 0x68) + uVar7 * 8 + 6) = (float2)*(float *)((long)puVar8 + -4);
      uStack_38 = *puVar8;
      uVar2 = SUB84(&uStack_38,0);
      func_0x00010a1248ac();
      if ((ulong)(*(long *)(lVar6 + 0x88) - *(long *)(lVar6 + 0x80) >> 2) <= uVar7)
      goto LAB_10a124eb8;
      *(undefined4 *)(*(long *)(lVar6 + 0x80) + uVar7 * 4) = uVar2;
      uVar7 = uVar7 + 1;
      puVar8 = (undefined8 *)((long)puVar8 + 0xc);
    } while (uVar5 != uVar7);
  }
  plVar3 = *(long **)(*(long *)(lVar6 + 200) + 0x288);
  (**(code **)(*plVar3 + 0x98))(plVar3,*(undefined8 *)(lVar6 + 0x68),0,0);
  plVar3 = *(long **)(*(long *)(lVar6 + 0xd8) + 0x288);
  (**(code **)(*plVar3 + 0x98))(plVar3,*(undefined8 *)(lVar6 + 0x80),0,0);
  *(undefined1 *)(lVar6 + 0x49) = 1;
  FUN_10a123d38(lVar6);
  *(undefined1 *)(lVar6 + 0x4a) = 1;
  return;
}



/* Entry: 10ab2674c; end: 10ab2677b;  */

void FUN_10ab2674c(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  
  if ((param_2 & 3) == 0) {
    return;
  }
  FUN_10a00946c(&UNK_10f63b8ac);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ab26778);
  (*pcVar1)();
}



/* Entry: 10ab2677c; end: 10ab267d3;  */

void FUN_10ab2677c(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  long *plVar5;
  float *pfVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  ulong uVar16;
  
  FUN_10ab26568(*(undefined8 *)(param_1 + 0xe0),*(undefined4 *)(*param_2 + 8),4);
  lVar10 = *(long *)(param_1 + 0xe0);
  pfVar6 = *(float **)*param_2;
  lVar8 = ((long *)*param_2)[1];
  FUN_10ab267d4();
  if (lVar8 == 0) {
    lVar7 = *(long *)(lVar10 + 0xb0);
  }
  else {
    lVar9 = 0;
    lVar7 = *(long *)(lVar10 + 0xb0);
    lVar1 = *(long *)(lVar10 + 0xb8);
    uVar11 = NEON_fmov(0x3f800000,4);
    do {
      if (lVar1 - lVar7 >> 2 == lVar9) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a125038);
        (*pcVar4)();
      }
      fVar13 = 0.0;
      if (0.0 <= pfVar6[3]) {
        fVar13 = pfVar6[3];
      }
      fVar12 = 1.0;
      if (fVar13 <= 1.0) {
        fVar12 = fVar13;
      }
      uVar15 = *(undefined8 *)(pfVar6 + 1);
      iVar2 = -(uint)((float)uVar15 < 0.0);
      iVar3 = -(uint)((float)((ulong)uVar15 >> 0x20) < 0.0);
      fVar13 = (float)CONCAT13((byte)((ulong)uVar15 >> 0x18) & ~(byte)((uint)iVar2 >> 0x18),
                               CONCAT12((byte)((ulong)uVar15 >> 0x10) & ~(byte)((uint)iVar2 >> 0x10)
                                        ,CONCAT11((byte)((ulong)uVar15 >> 8) &
                                                  ~(byte)((uint)iVar2 >> 8),
                                                  (byte)uVar15 & ~(byte)iVar2)));
      uVar16 = CONCAT17((byte)((ulong)uVar15 >> 0x38) & ~(byte)((uint)iVar3 >> 0x18),
                        CONCAT16((byte)((ulong)uVar15 >> 0x30) & ~(byte)((uint)iVar3 >> 0x10),
                                 CONCAT15((byte)((ulong)uVar15 >> 0x28) & ~(byte)((uint)iVar3 >> 8),
                                          CONCAT14((byte)((ulong)uVar15 >> 0x20) & ~(byte)iVar3,
                                                   fVar13))));
      iVar2 = -(uint)((float)(uVar11 >> 0x20) < (float)(uVar16 >> 0x20));
      uVar16 = uVar16 ^ (uVar16 ^ uVar11) &
                        CONCAT17((char)((uint)iVar2 >> 0x18),
                                 CONCAT16((char)((uint)iVar2 >> 0x10),
                                          CONCAT15((char)((uint)iVar2 >> 8),
                                                   CONCAT14((char)iVar2,
                                                            -(uint)((float)uVar11 < fVar13)))));
      uVar15 = NEON_ushl(CONCAT44((int)(float)(int)((float)(uVar16 >> 0x20) * 255.0),
                                  (int)(float)(int)((float)uVar16 * 255.0)),0x1000000008,4);
      fVar13 = 0.0;
      if (0.0 <= *pfVar6) {
        fVar13 = *pfVar6;
      }
      fVar14 = 1.0;
      if (fVar13 <= 1.0) {
        fVar14 = fVar13;
      }
      *(uint *)(lVar7 + lVar9 * 4) =
           (uint)((ulong)uVar15 >> 0x20) | (int)(fVar12 * 255.0) << 0x18 |
           (uint)uVar15 | (int)(fVar14 * 255.0);
      lVar9 = lVar9 + 1;
      pfVar6 = pfVar6 + 4;
    } while (lVar8 != lVar9);
  }
  plVar5 = *(long **)(*(long *)(lVar10 + 0xf8) + 0x288);
  (**(code **)(*plVar5 + 0x98))(plVar5,lVar7,0,0);
  *(undefined1 *)(lVar10 + 0x49) = 1;
  FUN_10a123d38(lVar10);
  *(undefined1 *)(lVar10 + 0x4a) = 1;
  return;
}



/* Entry: 10ab267d4; end: 10ab26803;  */

void FUN_10ab267d4(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  
  if ((param_2 & 3) == 0) {
    return;
  }
  FUN_10a00946c(&UNK_10f63b8ac);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ab26800);
  (*pcVar1)();
}



/* Entry: 10ab26804; end: 10ab268ef;  */

undefined1  [16] FUN_10ab26804(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xc;
  auVar1._0_8_ = &UNK_10f654f39;
  return auVar1;
}



/* Entry: 10ab268f0; end: 10ab26c0f;  */

void FUN_10ab268f0(ulong param_1)

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
  
  func_0x000109887da8(appuStack_d8,&UNK_10f654f39,0xc);
  pppuVar1 = (undefined8 ***)appuStack_d8[0];
  if (-1 < cStack_c1) {
    pppuVar1 = appuStack_d8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c48070;
  pppuVar2 = (undefined8 ***)&UNK_10f68ffe7;
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
  uStack_68 = 0;
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_b0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_b0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_c0 = &PTR_DAT_110c48070;
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
    FUN_10a052828(param_1,&UNK_10f69144e,FUN_10ab371b4,FUN_10ab3726c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f691469,FUN_10ab373fc,FUN_10ab374b4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f69147a,FUN_10ab37574,FUN_10ab3762c);
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
      FUN_10a054234(param_1,&ppuStack_b0,param_1 + 0x1b8,&UNK_10f654f39,0xc);
      FUN_10a05431c(param_1);
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b0 = (undefined8 **)&UNK_10f654f39;
    uStack_90 = 0xffffffffffffffff;
    uStack_98 = 0x100000064;
    puStack_88 = &UNK_10f68ffe7;
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
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10ab26bf0;
      FUN_10a054dac(param_1,&DAT_10f68efec,FUN_10ab376ec,0,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10ab26bf0:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ab26bf4);
  (*pcVar6)();
}



/* Entry: 10ab26c10; end: 10ab26f83;  */

void FUN_10ab26c10(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f663524,0xf);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c480a8;
  pppuVar2 = (undefined8 ***)&UNK_10f68ffe7;
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
  uStack_58 = 0xb0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c480a8;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c42c58;
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
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab26f64;
    FUN_10a054dac(param_1,&UNK_10f69148d,FUN_10ab37820,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab26f64;
    FUN_10a054dac(param_1,&UNK_10f69149c,FUN_10ab37a0c,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab26f64;
    FUN_10a054dac(param_1,&UNK_10f6914b6,FUN_10ab37ce8,7,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab26f64;
    FUN_10a054dac(param_1,&UNK_10f6914ca,FUN_10ab38ec0,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab26f64;
    FUN_10a054dac(param_1,&UNK_10f6914e0,FUN_10ab39004,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f6372cc,FUN_10ab391b4,0);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f663524,0xf);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10ab26f64:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ab26f68);
  (*pcVar6)();
}



/* Entry: 10ab26f84; end: 10ab27003;  */

undefined8 * FUN_10ab26f84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c47b88;
  param_1[2] = &PTR_DAT_110c47c28;
  param_1[7] = &PTR_DAT_110c47c80;
  if (param_1[0x33] != 0) {
    param_1[0x34] = param_1[0x33];
    __ZdlPv();
  }
  if ((*(char *)(param_1 + 0x2c) == '\x01') && (*(char *)((long)param_1 + 0x15f) < '\0')) {
    __ZdlPv(param_1[0x29]);
  }
  if (*(char *)((long)param_1 + 0x147) < '\0') {
    __ZdlPv(param_1[0x26]);
  }
  FUN_10a1e3810(param_1 + 0x1c);
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10ab27004; end: 10ab27017;  */

undefined8 * FUN_10ab27004(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c47b88;
  param_1[2] = &PTR_DAT_110c47c28;
  param_1[7] = &PTR_DAT_110c47c80;
  if (param_1[0x33] != 0) {
    param_1[0x34] = param_1[0x33];
    __ZdlPv();
  }
  if ((*(char *)(param_1 + 0x2c) == '\x01') && (*(char *)((long)param_1 + 0x15f) < '\0')) {
    __ZdlPv(param_1[0x29]);
  }
  if (*(char *)((long)param_1 + 0x147) < '\0') {
    __ZdlPv(param_1[0x26]);
  }
  FUN_10a1e3810(param_1 + 0x1c);
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10ab27018; end: 10ab2705b;  */

void FUN_10ab27018(void)

{
  FUN_10ab26f84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab2705c; end: 10ab270ff;  */

undefined8 * FUN_10ab2705c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  uVar2 = param_2;
  func_0x00010a0fda30();
  FUN_10aa7093c(param_1,param_2,puVar1,uVar2);
  FUN_10aaea2c8(param_1 + 0x1c,param_3);
  *param_1 = &PTR_FUN_110c47b88;
  param_1[2] = &PTR_DAT_110c47c28;
  param_1[7] = &PTR_DAT_110c47c80;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x33] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x26] = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  return param_1;
}



/* Entry: 10ab27100; end: 10ab2721b;  */

undefined8 * FUN_10ab27100(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  uVar2 = param_2;
  func_0x00010a0fda30();
  FUN_10aa7093c(param_1,param_2,puVar1,uVar2);
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  FUN_10a1e394c(param_1 + 0x1c);
  *param_1 = &PTR_FUN_110c47b88;
  param_1[2] = &PTR_DAT_110c47c28;
  param_1[7] = &PTR_DAT_110c47c80;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x33] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x26] = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  if (param_1 + 0x33 != param_3) {
    FUN_10a0cf2cc(param_1 + 0x33,*param_3,param_3[1],param_3[1] - *param_3);
  }
  return param_1;
}



/* Entry: 10ab2721c; end: 10ab272a3;  */

undefined8 * FUN_10ab2721c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  FUN_10aa7093c();
  puVar1[0x1d] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x23] = 0;
  puVar1[0x22] = 0;
  puVar1[0x25] = 0;
  puVar1[0x24] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x21] = 0;
  puVar1[0x20] = 0;
  FUN_10a1e394c();
  *param_1 = &PTR_FUN_110c47b88;
  param_1[2] = &PTR_DAT_110c47c28;
  param_1[7] = &PTR_DAT_110c47c80;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x33] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x26] = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  return param_1;
}



/* Entry: 10ab272a4; end: 10ab27383;  */

void FUN_10ab272a4(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 auStack_90 [2];
  char cStack_79;
  undefined8 uStack_78;
  char cStack_61;
  undefined8 auStack_58 [2];
  char cStack_41;
  undefined8 uStack_40;
  char cStack_29;
  
  func_0x00010aa70acc();
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c47c90);
  if ((int)plVar1 != 0) {
    FUN_10a1e3e54(auStack_90);
    (**(code **)(*param_2 + 0x230))(auStack_58,param_2,&PTR_DAT_110c47c90,auStack_90);
    FUN_10a1e4260(param_1 + 0xe0,auStack_58);
    if (cStack_29 < '\0') {
      __ZdlPv(uStack_40);
    }
    if (cStack_41 < '\0') {
      __ZdlPv(auStack_58[0]);
    }
    if (cStack_61 < '\0') {
      __ZdlPv(uStack_78);
    }
    if (cStack_79 < '\0') {
      __ZdlPv(auStack_90[0]);
    }
  }
  return;
}



/* Entry: 10ab27384; end: 10ab273bf;  */

void FUN_10ab27384(long param_1,long *param_2)

{
  func_0x00010aa70b70();
                    /* WARNING: Could not recover jumptable at 0x00010ab273bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0xf8))(param_2,&PTR_DAT_110c47c90,param_1 + 0xe8);
  return;
}



/* Entry: 10ab273c0; end: 10ab2745f;  */

void FUN_10ab273c0(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  char cStack_39;
  
  uVar1 = param_3;
  FUN_10ad015f0(param_3,0x8000);
  if ((uVar1 & 1) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_10a0ff18c(auStack_68,param_3,2);
    FUN_10ab27460(param_1,param_2,auStack_68);
    if (cStack_39 < '\0') {
      __ZdlPv(uStack_50);
    }
    if (cStack_51 < '\0') {
      __ZdlPv(auStack_68[0]);
    }
  }
  return;
}



/* Entry: 10ab27460; end: 10ab2751b;  */

void FUN_10ab27460(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  long lStack_28;
  
  lStack_28 = param_1;
  if (param_1 == 0) {
    uStack_40 = 0;
    FUN_10ab39534(&uStack_40,param_2);
  }
  else {
    uStack_38 = *(undefined8 *)(param_1 + 0x858);
    plStack_30 = *(long **)(param_1 + 0x860);
    if (plStack_30 != (long *)0x0) {
      plVar1 = plStack_30 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10ab3932c(&uStack_38,&lStack_28);
    plVar1 = plStack_30;
    if (plStack_30 != (long *)0x0) {
      plVar2 = plStack_30 + 1;
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
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  return;
}



/* Entry: 10ab2751c; end: 10ab275d7;  */

void FUN_10ab2751c(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  long lStack_28;
  
  lStack_28 = param_1;
  if (param_1 == 0) {
    uStack_40 = 0;
    FUN_10ab39c78(&uStack_40,param_2);
  }
  else {
    uStack_38 = *(undefined8 *)(param_1 + 0x858);
    plStack_30 = *(long **)(param_1 + 0x860);
    if (plStack_30 != (long *)0x0) {
      plVar1 = plStack_30 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10ab39a70(&uStack_38,&lStack_28);
    plVar1 = plStack_30;
    if (plStack_30 != (long *)0x0) {
      plVar2 = plStack_30 + 1;
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
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  return;
}



/* Entry: 10ab275d8; end: 10ab279d3;  */

int * FUN_10ab275d8(int *param_1)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  int *piVar7;
  undefined8 *****pppppuVar8;
  long *plVar9;
  undefined8 *****pppppuVar10;
  undefined8 *puVar11;
  long lVar12;
  int *piVar13;
  int *piStack_d8;
  int *piStack_d0;
  undefined8 uStack_c8;
  uint uStack_c0;
  int iStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 ****ppppuStack_98;
  ulong uStack_90;
  byte bStack_81;
  int *piStack_80;
  int *piStack_78;
  code *pcStack_68;
  undefined8 *apuStack_60 [7];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  piVar7 = param_1;
  FUN_10ad015f0(param_1,0x8000);
  if ((int)piVar7 == 0) {
    piVar13 = (int *)0x0;
    goto LAB_10ab278d8;
  }
  iStack_b4 = 0x46546c67;
  pcStack_68 = (code *)((ulong)pcStack_68 & 0xffffffffffffff00);
  FUN_10a0cf3f0(&piStack_80,0xc,&pcStack_68);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_b0,*(undefined8 *)param_1,*(undefined8 *)(param_1 + 2));
  }
  else {
    uStack_a8 = *(undefined8 *)(param_1 + 2);
    uStack_b0 = *(undefined8 *)param_1;
    lStack_a0 = *(long *)(param_1 + 4);
  }
  FUN_10ad03508(&ppppuStack_98,&uStack_b0);
  if (lStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  pppppuVar8 = (undefined8 *****)ppppuStack_98;
  if (-1 < (char)bStack_81) {
    uStack_90 = (ulong)bStack_81;
    pppppuVar8 = &ppppuStack_98;
  }
  func_0x00010a1512bc(pppppuVar8,uStack_90);
  if ((int)pppppuVar8 == 0) {
    FUN_10ad03f74(&pcStack_68);
    pppppuVar8 = (undefined8 *****)ppppuStack_98;
    if (-1 < (char)bStack_81) {
      pppppuVar8 = &ppppuStack_98;
    }
    (*pcStack_68)(pppppuVar8,&UNK_10f432965,&pcStack_68);
    (*(code *)*apuStack_60[0])(apuStack_60);
    if (pppppuVar8 == (undefined8 *****)0x0) {
      piStack_d8 = (int *)0x0;
      piStack_d0 = (int *)0x0;
      uStack_c0 = 0;
      uStack_c8 = 0;
    }
    else {
      _fseek(pppppuVar8,0,2);
      pppppuVar10 = pppppuVar8;
      _ftell();
      _fseek(pppppuVar8,0,0);
      uStack_c0 = (uint)pppppuVar10;
      if (uStack_c0 < 0xc) {
        piStack_d8 = (int *)0x0;
        piStack_d0 = (int *)0x0;
        uStack_c0 = 0;
        uStack_c8 = 0;
      }
      else {
        _fread(piStack_80,1,(long)piStack_78 - (long)piStack_80,pppppuVar8);
        piStack_d0 = (int *)0x0;
        uStack_c8 = 0;
        piStack_d8 = (int *)0x0;
        FUN_10a05151c(&piStack_d8,piStack_80,piStack_78,(long)piStack_78 - (long)piStack_80);
      }
      _fclose(pppppuVar8);
    }
  }
  else {
    piVar7 = *(int **)param_1;
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      piVar7 = param_1;
    }
    FUN_10ad040c0(&pcStack_68,piVar7,&UNK_10f432965);
    if (pcStack_68 == (code *)0x0) {
LAB_10ab276d8:
      piStack_d8 = (int *)0x0;
      piStack_d0 = (int *)0x0;
      uStack_c0 = 0;
      uStack_c8 = 0;
    }
    else {
      plVar9 = *(long **)pcStack_68;
      (**(code **)(*plVar9 + 0x18))();
      piVar7 = piStack_80;
      if ((long)plVar9 < 0xc) goto LAB_10ab276d8;
      puVar11 = *(undefined8 **)pcStack_68;
      (**(code **)*puVar11)();
      iVar2 = *(int *)(puVar11 + 1);
      *(undefined8 *)piVar7 = *puVar11;
      piVar7[2] = iVar2;
      plVar9 = *(long **)pcStack_68;
      (**(code **)(*plVar9 + 0x18))();
      piStack_d8 = (int *)0x0;
      piStack_d0 = (int *)0x0;
      uStack_c8 = 0;
      FUN_10a05151c(&piStack_d8,piStack_80,piStack_78,(long)piStack_78 - (long)piStack_80);
      uStack_c0 = (uint)plVar9;
    }
    pcVar6 = pcStack_68;
    pcStack_68 = (code *)0x0;
    if (pcVar6 != (code *)0x0) {
      plVar9 = *(long **)pcVar6;
      *(long *)pcVar6 = 0;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x40))();
      }
      __ZdlPv(pcVar6);
    }
  }
  if ((char)bStack_81 < '\0') {
    __ZdlPv(ppppuStack_98);
  }
  piVar7 = piStack_80;
  if (piStack_80 != (int *)0x0) {
    piStack_78 = piStack_80;
    __ZdlPv();
  }
  piVar13 = piStack_d8;
  if (uStack_c0 < 0xc) {
    piVar13 = (int *)0x0;
    param_1 = piStack_d8;
joined_r0x00010ab278c8:
    piStack_d8 = param_1;
    if (param_1 == (int *)0x0) goto LAB_10ab278d8;
  }
  else {
    if (*piStack_d8 == iStack_b4) {
      FUN_10a1a4c34();
      if ((int)piVar7 == 0) {
        uVar3 = piVar13[2];
        uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
        uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
      }
      else {
        uVar3 = piVar13[2];
      }
      piVar13 = (int *)(ulong)(uVar3 == uStack_c0);
      param_1 = piStack_d8;
      goto joined_r0x00010ab278c8;
    }
    piVar13 = (int *)0x0;
  }
  param_1 = piStack_d8;
  piVar7 = piStack_d8;
  piStack_d0 = piStack_d8;
  __ZdlPv();
LAB_10ab278d8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    _fclose(param_1);
    if ((char)bStack_81 < '\0') {
      __ZdlPv(ppppuStack_98);
    }
    if (piStack_80 != (int *)0x0) {
      piStack_78 = piStack_80;
      __ZdlPv();
    }
    __Unwind_Resume();
    if ((char)piVar7[0x1a] == '\x01') {
      FUN_10ab392d4(piVar7 + 0x16);
    }
    FUN_10a0617bc(piVar7 + 0x12);
    if (*(long *)(piVar7 + 0x10) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    FUN_10ab39e0c(piVar7 + 4);
    plVar9 = *(long **)(piVar7 + 2);
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 1;
      do {
        lVar12 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    return piVar7;
  }
  return piVar13;
}



/* Entry: 10ab279d4; end: 10ab27a23;  */

long FUN_10ab279d4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x68) == '\x01') {
    FUN_10ab392d4(param_1 + 0x58);
  }
  FUN_10a0617bc(param_1 + 0x48);
  if (*(long *)(param_1 + 0x40) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10ab39e0c(param_1 + 0x10);
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



/* Entry: 10ab27a24; end: 10ab27af7;  */

undefined ***
FUN_10ab27a24(undefined ***param_1,undefined *param_2,code **param_3,undefined8 *param_4)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined8 *extraout_x8;
  undefined **ppuVar6;
  code **ppcVar7;
  undefined **ppuStack_a0;
  undefined ***pppuStack_98;
  code **ppcStack_90;
  undefined ***pppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(uint *)(param_1 + 3);
  ppcVar7 = (code **)(ulong)uVar1;
  pppuVar4 = param_1;
  __ZSt19uncaught_exceptionsv();
  if ((int)uVar1 < (int)pppuVar4) {
    ppuVar6 = param_1[1];
    func_0x000107c2c4d8(**param_1 + 8,&UNK_10f692105,0x4a);
    param_2 = *param_1[2];
    puStack_58 = **param_1;
    ppcVar7 = &pcStack_68;
    pcStack_68 = FUN_10ab39e64;
    ppuStack_60 = &PTR_DAT_110c48ad8;
    param_3 = &pcStack_68;
    FUN_10a3e0e30(ppuVar6[10],param_2,param_3);
    pppuVar4 = &ppuStack_60;
    (*(code *)*ppuStack_60)(pppuVar4);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  if ((int)param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  pcStack_78 = FUN_10ab27af8;
  pppuVar5 = &ppuStack_a0;
  ppcStack_90 = ppcVar7;
  pppuStack_88 = param_1;
  puStack_80 = &stack0xfffffffffffffff0;
  FUN_10ab27cfc(pppuVar5,pppuVar4,param_2,param_3,*param_4,0);
  extraout_x8[1] = pppuStack_98;
  *extraout_x8 = ppuStack_a0;
  if (pppuStack_98 != (undefined ***)0x0) {
    pppuVar4 = pppuStack_98 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar4,0x10);
      if (bVar3) {
        *pppuVar4 = (undefined **)((long)*pppuVar4 + 1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    pppuVar4 = pppuStack_98 + 1;
    do {
      ppuVar6 = *pppuVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar4,0x10);
      if (bVar3) {
        *pppuVar4 = (undefined **)((long)ppuVar6 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (ppuVar6 == (undefined **)0x0) {
      (*(code *)(*pppuStack_98)[2])(pppuStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuStack_98);
      pppuVar5 = pppuStack_98;
    }
  }
  return pppuVar5;
}



/* Entry: 10ab27af8; end: 10ab27c07;  */

void FUN_10ab27af8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_30;
  long *plStack_28;
  
  FUN_10ab27cfc(&uStack_30,param_2,param_3,param_4,*param_5,0);
  param_1[1] = plStack_28;
  *param_1 = uStack_30;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
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
  return;
}



/* Entry: 10ab27c08; end: 10ab27cfb;  */

void FUN_10ab27c08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plStack_50;
  long *plStack_48;
  
  plVar3 = (long *)0x38;
  __Znwm();
  plVar5 = plVar3 + 1;
  *plVar5 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_110c48998;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[4] = 0;
  plStack_50 = plVar3 + 3;
  *plStack_50 = (long)&PTR_DAT_110c48028;
  *(undefined1 *)((long)plVar3 + 0x31) = 1;
  plStack_48 = plVar3;
  FUN_10ab27af8(param_1,param_2,param_3,param_4,&plStack_50);
  do {
    lVar4 = *plVar5;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 != 0) {
    return;
  }
  (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar3);
  return;
}



/* Entry: 10ab27cfc; end: 10ab2822b;  */

void FUN_10ab27cfc(undefined8 param_1,long param_2,long param_3,long *param_4,long param_5,
                  long param_6)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lStack_310;
  long *plStack_308;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long *plStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long lStack_2c0;
  undefined4 uStack_2b8;
  undefined1 auStack_2b0 [8];
  undefined1 auStack_2a8 [24];
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [24];
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
  undefined1 auStack_230 [24];
  undefined8 uStack_218;
  char cStack_201;
  long *plStack_1d0;
  long lStack_1c8;
  undefined8 ***pppuStack_1c0;
  undefined8 ***pppuStack_1b8;
  undefined8 uStack_1b0;
  undefined8 ***pppuStack_1a8;
  undefined8 ***pppuStack_1a0;
  undefined8 uStack_198;
  undefined8 ***pppuStack_190;
  undefined8 ***pppuStack_188;
  undefined8 uStack_180;
  undefined8 ***pppuStack_178;
  undefined8 ***pppuStack_170;
  undefined8 uStack_168;
  undefined8 ***pppuStack_160;
  undefined8 ***pppuStack_158;
  undefined8 uStack_150;
  undefined8 ***pppuStack_148;
  undefined8 ***pppuStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  long *plStack_e8;
  undefined2 auStack_e0 [4];
  undefined1 uStack_d8;
  undefined1 uStack_d0;
  undefined2 uStack_c8;
  undefined4 uStack_c6;
  undefined2 uStack_c2;
  undefined1 uStack_c0;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if (*param_4 == 0) {
    FUN_10aa9d388(&UNK_10f691845);
  }
  else {
    uStack_a0 = *(undefined8 *)(param_2 + 0x50);
    ppuStack_b8 = &PTR_FUN_110c17260;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_78 = 0;
    auStack_e0[0] = 0x101;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0x101;
    uStack_c6._2_2_ = 0;
    uStack_c2 = 1;
    uStack_c0 = 1;
    if ((param_5 != 0) && (*(char *)(param_5 + 0x18) == '\x01')) {
      uStack_c6._2_2_ = 1;
    }
    uStack_c6 = CONCAT22(uStack_c6._2_2_,*(undefined2 *)(param_5 + 0x19));
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_150 = 0;
    plStack_e8 = (long *)0x0;
    uStack_f0 = 0;
    uStack_f8 = 0;
    uStack_110 = 0;
    uStack_118 = 0;
    uStack_100 = 0;
    uStack_108 = 0;
    uStack_130 = 0;
    uStack_138 = 0;
    lStack_120 = 0;
    uStack_128 = 0;
    pppuStack_1c0 = &pppuStack_1c0;
    pppuStack_1b8 = &pppuStack_1c0;
    pppuStack_1a8 = &pppuStack_1a8;
    pppuStack_1a0 = &pppuStack_1a8;
    pppuStack_190 = &pppuStack_190;
    pppuStack_188 = &pppuStack_190;
    pppuStack_178 = &pppuStack_178;
    pppuStack_170 = &pppuStack_178;
    pppuStack_160 = &pppuStack_160;
    pppuStack_158 = &pppuStack_160;
    pppuStack_148 = &pppuStack_148;
    pppuStack_140 = &pppuStack_148;
    if (*(long *)(param_2 + 0x1a0) == *(long *)(param_2 + 0x198)) {
      FUN_10a08d2e0(&uStack_2f8,param_2 + 0xe8,*(long *)(param_2 + 0x198),*(long *)(param_2 + 0x1a0)
                    ,0);
      uStack_2c8 = uStack_2f0;
      uStack_2d0 = uStack_2f8;
      lStack_2c0 = lStack_2e8;
      uStack_2f0 = 0;
      lStack_2e8 = 0;
      uStack_2f8 = 0;
      uStack_2b8 = 0;
      plStack_308 = (long *)param_4[1];
      lStack_310 = *param_4;
      if (param_4[1] != 0) {
        plVar1 = (long *)(param_4[1] + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_10a0b9098(auStack_2b0,&ppuStack_b8,&uStack_2d0,&lStack_310,auStack_e0,param_6);
      FUN_10ab2822c(&lStack_1c8,auStack_2b0);
      if (plStack_1d0 != (long *)0x0) {
        plVar1 = plStack_1d0 + 1;
        do {
          lVar6 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_1d0 + 0x10))(plStack_1d0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1d0);
        }
      }
      if (cStack_201 < '\0') {
        __ZdlPv(uStack_218);
      }
      FUN_10a0d8d04(auStack_230);
      FUN_10a0d8e04(auStack_248);
      FUN_10a0d8eac(auStack_260);
      FUN_10a0d8f64(auStack_278);
      FUN_10a0d900c(auStack_290);
      FUN_10a0d90b4(auStack_2a8);
      plVar1 = plStack_308;
      if (plStack_308 != (long *)0x0) {
        plVar2 = plStack_308 + 1;
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
          (**(code **)(*plStack_308 + 0x10))(plStack_308);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      FUN_10ab2d3b0(&uStack_2d0);
      if (lStack_2e8 < 0) {
        __ZdlPv(uStack_2f8);
      }
    }
    else {
      uStack_2d0 = 0;
      uStack_2c8 = 0;
      lStack_2c0 = 0;
      FUN_10a05151c(&uStack_2d0);
      uStack_2b8 = 1;
      plStack_2d8 = (long *)param_4[1];
      lStack_2e0 = *param_4;
      if (param_4[1] != 0) {
        plVar1 = (long *)(param_4[1] + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_10a0b9098(auStack_2b0,&ppuStack_b8,&uStack_2d0,&lStack_2e0,auStack_e0,param_6);
      FUN_10ab2822c(&lStack_1c8,auStack_2b0);
      if (plStack_1d0 != (long *)0x0) {
        plVar1 = plStack_1d0 + 1;
        do {
          lVar6 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_1d0 + 0x10))(plStack_1d0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1d0);
        }
      }
      if (cStack_201 < '\0') {
        __ZdlPv(uStack_218);
      }
      FUN_10a0d8d04(auStack_230);
      FUN_10a0d8e04(auStack_248);
      FUN_10a0d8eac(auStack_260);
      FUN_10a0d8f64(auStack_278);
      FUN_10a0d900c(auStack_290);
      FUN_10a0d90b4(auStack_2a8);
      plVar1 = plStack_2d8;
      if (plStack_2d8 != (long *)0x0) {
        plVar2 = plStack_2d8 + 1;
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
          (**(code **)(*plStack_2d8 + 0x10))(plStack_2d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      FUN_10ab2d3b0(&uStack_2d0);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_2 + 0x130,&uStack_130);
    if (*(char *)(param_2 + 400) == '\x01') {
      *(undefined8 *)(param_2 + 0x170) = uStack_110;
      *(undefined8 *)(param_2 + 0x168) = uStack_118;
      *(undefined8 *)(param_2 + 0x180) = uStack_100;
      *(undefined8 *)(param_2 + 0x178) = uStack_108;
      *(undefined4 *)(param_2 + 0x188) = uStack_f8;
    }
    else {
      *(undefined8 *)(param_2 + 0x170) = uStack_110;
      *(undefined8 *)(param_2 + 0x168) = uStack_118;
      *(undefined8 *)(param_2 + 0x180) = uStack_100;
      *(undefined8 *)(param_2 + 0x178) = uStack_108;
      *(ulong *)(param_2 + 0x188) = CONCAT44(uStack_f4,uStack_f8);
      *(undefined1 *)(param_2 + 400) = 1;
    }
    if (lStack_1c8 != 0) {
      if (param_6 == 0) {
        *(undefined1 *)(lStack_1c8 + 8) = 1;
        lVar6 = lStack_1c8 + 400;
        for (lVar7 = *(long *)(lStack_1c8 + 0x198); lVar7 != lVar6; lVar7 = *(long *)(lVar7 + 8)) {
          FUN_10a3e7798(*(undefined8 *)(lVar7 + 0x10),1);
        }
      }
      if (param_3 != 0) {
        FUN_10a0c3500(lStack_1c8,param_3);
      }
      func_0x00010a0d77bc(param_1,lStack_1c8);
      plVar1 = plStack_e8;
      if (plStack_e8 != (long *)0x0) {
        plVar2 = plStack_e8 + 1;
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
          (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      if (lStack_120 < 0) {
        __ZdlPv(uStack_130);
      }
      FUN_10a0d8d04(&pppuStack_148);
      FUN_10a0d8e04(&pppuStack_160);
      FUN_10a0d8eac(&pppuStack_178);
      FUN_10a0d8f64(&pppuStack_190);
      FUN_10a0d900c(&pppuStack_1a8);
      FUN_10a0d90b4(&pppuStack_1c0);
      FUN_10a755690(&ppuStack_b8);
      return;
    }
  }
  FUN_10a00946c(&UNK_10f69187b);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10ab281c8);
  (*pcVar5)();
}



/* Entry: 10ab2822c; end: 10ab28353;  */

undefined8 * FUN_10ab2822c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = param_1 + 1;
  *param_1 = *param_2;
  FUN_10a0d90b4(puVar1);
  FUN_10a0d8b24(puVar1,puVar1,param_2 + 1);
  FUN_10a0d900c(param_1 + 4);
  func_0x00010a0d8b74(param_1 + 4,param_1 + 4,param_2 + 4);
  FUN_10a0d8f64(param_1 + 7);
  func_0x00010a0d8bc4(param_1 + 7,param_1 + 7,param_2 + 7);
  FUN_10a0d8eac(param_1 + 10);
  func_0x00010a0d8c14(param_1 + 10,param_1 + 10,param_2 + 10);
  FUN_10a0d8e04(param_1 + 0xd);
  func_0x00010a0d8c64(param_1 + 0xd,param_1 + 0xd,param_2 + 0xd);
  FUN_10a0d8d04(param_1 + 0x10);
  func_0x00010a0d8cb4(param_1 + 0x10,param_1 + 0x10,param_2 + 0x10);
  if (*(char *)((long)param_1 + 0xaf) < '\0') {
    __ZdlPv(param_1[0x13]);
  }
  uVar3 = param_2[0x14];
  uVar2 = param_2[0x13];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar3;
  param_1[0x13] = uVar2;
  *(undefined1 *)((long)param_2 + 0xaf) = 0;
  *(undefined1 *)(param_2 + 0x13) = 0;
  uVar3 = param_2[0x17];
  uVar2 = param_2[0x16];
  uVar5 = param_2[0x19];
  uVar4 = param_2[0x18];
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
  param_1[0x17] = uVar3;
  param_1[0x16] = uVar2;
  param_1[0x19] = uVar5;
  param_1[0x18] = uVar4;
  FUN_10a015bec(param_1 + 0x1b,param_2 + 0x1b);
  return param_1;
}



/* Entry: 10ab28354; end: 10ab286c7;  */

/* WARNING: Removing unreachable block (ram,0x00010ab285a8) */
/* WARNING: Removing unreachable block (ram,0x00010ab283dc) */
/* WARNING: Removing unreachable block (ram,0x00010ab286a8) */
/* WARNING: Type propagation algorithm not settling */

char *** FUN_10ab28354(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  char ***pppcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  char *******pppppppcVar6;
  char *pcVar7;
  code *pcVar8;
  undefined8 *puVar9;
  char ***pppcVar10;
  char ***pppcVar11;
  long *plVar12;
  undefined1 *puVar13;
  long lVar14;
  ulong uVar15;
  char ***extraout_x8;
  char **ppcVar16;
  ulong uVar17;
  char *pcVar18;
  long unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *puVar19;
  ulong uStack_230;
  undefined1 uStack_228;
  ulong uStack_220;
  undefined1 uStack_218;
  ulong uStack_210;
  undefined1 uStack_208;
  char **ppcStack_200;
  undefined1 uStack_1f8;
  ulong uStack_1f0;
  undefined1 uStack_1e8;
  ulong uStack_1e0;
  undefined1 uStack_1d8;
  ulong uStack_1d0;
  undefined1 uStack_1c8;
  ulong uStack_1c0;
  undefined1 uStack_1b8;
  long *plStack_1b0;
  char **ppcStack_1a8;
  char **ppcStack_1a0;
  char **ppcStack_198;
  byte bStack_178;
  undefined1 auStack_170 [8];
  char **ppcStack_168;
  undefined8 *puStack_160;
  long lStack_158;
  ulong uStack_150;
  char *pcStack_148;
  char *pcStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  char ***pppcStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 *puStack_110;
  long lStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  undefined8 auStack_e8 [2];
  char cStack_d1;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  char *******pppppppcStack_b8;
  ulong uStack_b0;
  byte bStack_a1;
  char *pcStack_a0;
  char *pcStack_98;
  undefined8 uStack_90;
  char **ppcStack_88;
  ulong uStack_80;
  ulong uStack_78;
  long alStack_70 [2];
  
  alStack_70[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = (long)*(char *)(param_2 + 0x147);
  if (lVar14 < 0) {
    lVar14 = *(long *)(param_2 + 0x138);
  }
  puStack_110 = param_1;
  if (lVar14 == 0) {
    FUN_10a00946c(&UNK_10f6918aa);
LAB_10ab28614:
    FUN_10a00946c(&UNK_10f691951);
  }
  else {
    func_0x000107c2b054(&ppcStack_88,&UNK_10f6918e6);
    pcStack_a0 = (char *)0x0;
    pcStack_98 = (char *)0x0;
    uStack_90 = 0;
    FUN_10a102f04(&pcStack_a0,&ppcStack_88,alStack_70,1);
    pcVar7 = pcStack_98;
    ppcStack_88 = (char **)0x0;
    uStack_80 = 0;
    uStack_78 = 0;
    lStack_108 = param_2;
    if (pcStack_a0 != pcStack_98) {
      uVar17 = param_3[1];
      puVar4 = (undefined8 *)*param_3;
      if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
        uVar17 = (ulong)*(byte *)((long)param_3 + 0x17);
        puVar4 = param_3;
      }
      puVar2 = (undefined8 *)((long)puVar4 + uVar17);
      pcVar18 = pcStack_a0;
LAB_10ab28414:
      uVar3 = *(ulong *)(pcVar18 + 8);
      pcVar5 = *(char **)pcVar18;
      if (-1 < pcVar18[0x17]) {
        uVar3 = (ulong)(byte)pcVar18[0x17];
        pcVar5 = pcVar18;
      }
      if (uVar3 != 0) goto code_r0x00010ab28430;
LAB_10ab284a4:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&ppcStack_88,pcVar18)
      ;
      uVar17 = uStack_80;
      if (-1 < (long)uStack_78) {
        uVar17 = uStack_78 >> 0x38;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                (&pppppppcStack_b8,param_3,uVar17,0xffffffffffffffff,auStack_e8);
      pppppppcVar6 = pppppppcStack_b8;
      if (-1 < (char)bStack_a1) {
        uStack_b0 = (ulong)bStack_a1;
        pppppppcVar6 = (char *******)&pppppppcStack_b8;
      }
      for (; uStack_b0 != 0; uStack_b0 = uStack_b0 - 1) {
        if (*(char *)pppppppcVar6 == '/') {
          *(char *)pppppppcVar6 = '^';
        }
        pppppppcVar6 = (char *******)((long)pppppppcVar6 + 1);
      }
      uVar17 = lStack_108 + 0x130;
      FUN_10a453ab8(uVar17,&pppppppcStack_b8);
      if ((uVar17 & 1) != 0) {
        func_0x000107c2b054(auStack_e8,&UNK_10f68ffe7);
        func_0x000107c2b054(auStack_100,&UNK_10f68ffe7);
        FUN_10a00d0e0(&uStack_d0,param_3,auStack_e8,auStack_100);
        puStack_110[1] = uStack_c8;
        *puStack_110 = uStack_d0;
        uStack_d0 = 0;
        uStack_c8 = 0;
        if (cStack_e9 < '\0') {
          __ZdlPv(auStack_100[0]);
        }
        if (cStack_d1 < '\0') {
          __ZdlPv(auStack_e8[0]);
        }
        if ((char)bStack_a1 < '\0') {
          __ZdlPv(pppppppcStack_b8);
        }
        ppcStack_88 = &pcStack_a0;
        pppcVar10 = &ppcStack_88;
        FUN_10a0426d8();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_70[0]) {
          return pppcVar10;
        }
        ___stack_chk_fail();
        if (cStack_e9 < '\0') {
          __ZdlPv(auStack_100[0]);
        }
        if (cStack_d1 < '\0') {
          __ZdlPv(auStack_e8[0]);
        }
        if ((char)bStack_a1 < '\0') {
          __ZdlPv(pppppppcStack_b8);
        }
        ppcStack_88 = &pcStack_a0;
        FUN_10a0426d8(&ppcStack_88);
        pppcVar11 = pppcVar10;
        __Unwind_Resume();
        pcStack_118 = FUN_10ab286c8;
        pppcVar1 = pppcVar11 + 0x29;
        puStack_160 = unaff_x26;
        lStack_158 = unaff_x25;
        uStack_150 = uVar3;
        pcStack_148 = pcVar5;
        pcStack_140 = pcVar18;
        puStack_138 = puVar2;
        puStack_130 = param_3;
        pppcStack_128 = pppcVar10;
        puStack_120 = &stack0xfffffffffffffff0;
        if (*(char *)(pppcVar11 + 0x2c) == '\x01') {
          *(undefined1 *)extraout_x8 = 0;
          *(undefined1 *)(extraout_x8 + 3) = 0;
          FUN_10a1ccb84(extraout_x8,pppcVar1);
          return extraout_x8;
        }
        if (((ulong)pppcVar11[0x32] & 1) == 0) {
          *(undefined1 *)extraout_x8 = 0;
          *(undefined1 *)(extraout_x8 + 3) = 0;
        }
        else {
          auStack_170[0] = 0;
          ppcStack_168 = (char **)0x0;
          plVar12 = (long *)((long)pppcVar11[0x34] - (long)pppcVar11[0x33]);
          if (plVar12 == (long *)0x0) {
            ppcVar16 = (char **)(long)*(char *)((long)pppcVar11 + 0xff);
            if ((long)ppcVar16 < 0) {
              ppcVar16 = pppcVar11[0x1e];
            }
            if ((ppcVar16 == (char **)0x0) ||
               (FUN_10a0f1e30(&ppcStack_1a8,pppcVar11 + 0x1d,0), bStack_178 != 1)) {
              plVar12 = (long *)0x0;
            }
            else {
              plVar12 = (long *)*ppcStack_1a8;
              (**(code **)(*plVar12 + 0x18))();
              if ((bStack_178 & 1) != 0) {
                FUN_10a0f1ea0(&ppcStack_1a8);
              }
            }
          }
          uStack_1b8 = 6;
          puVar13 = auStack_170;
          plStack_1b0 = plVar12;
          func_0x00010945a80c(puVar13,&DAT_10f49f490);
          uStack_1b8 = *puVar13;
          *puVar13 = 6;
          plVar12 = *(long **)(puVar13 + 8);
          *(long **)(puVar13 + 8) = plStack_1b0;
          plStack_1b0 = plVar12;
          func_0x000109380ffc(&plStack_1b0);
          uStack_1c0 = (ulong)*(uint *)(pppcVar11 + 0x2d);
          uStack_1c8 = 6;
          puVar13 = auStack_170;
          func_0x00010945a80c(puVar13,&UNK_10f691984);
          uStack_1c8 = *puVar13;
          *puVar13 = 6;
          uVar17 = *(ulong *)(puVar13 + 8);
          *(ulong *)(puVar13 + 8) = uStack_1c0;
          uStack_1c0 = uVar17;
          func_0x000109380ffc(&uStack_1c0);
          uStack_1d0 = (ulong)*(uint *)((long)pppcVar11 + 0x16c);
          uStack_1d8 = 6;
          puVar13 = auStack_170;
          func_0x00010945a80c(puVar13,&DAT_10f691992);
          uStack_1d8 = *puVar13;
          *puVar13 = 6;
          uVar17 = *(ulong *)(puVar13 + 8);
          *(ulong *)(puVar13 + 8) = uStack_1d0;
          uStack_1d0 = uVar17;
          func_0x000109380ffc(&uStack_1d0);
          uStack_1e0 = (ulong)*(uint *)(pppcVar11 + 0x2e);
          uStack_1e8 = 6;
          puVar13 = auStack_170;
          func_0x00010945a80c(puVar13,&DAT_10f6829b9);
          uStack_1e8 = *puVar13;
          *puVar13 = 6;
          uVar17 = *(ulong *)(puVar13 + 8);
          *(ulong *)(puVar13 + 8) = uStack_1e0;
          uStack_1e0 = uVar17;
          func_0x000109380ffc(&uStack_1e0);
          uStack_1f0 = (ulong)*(uint *)((long)pppcVar11 + 0x174);
          uStack_1f8 = 6;
          puVar13 = auStack_170;
          func_0x00010945a80c(puVar13,&UNK_10f69199e);
          uStack_1f8 = *puVar13;
          *puVar13 = 6;
          uVar17 = *(ulong *)(puVar13 + 8);
          *(ulong *)(puVar13 + 8) = uStack_1f0;
          uStack_1f0 = uVar17;
          func_0x000109380ffc(&uStack_1f0);
          ppcStack_200 = pppcVar11[0x2f];
          uStack_208 = 6;
          puVar13 = auStack_170;
          func_0x00010945a80c(puVar13,&UNK_10f6919ab);
          uStack_208 = *puVar13;
          *puVar13 = 6;
          ppcVar16 = *(char ***)(puVar13 + 8);
          *(char ***)(puVar13 + 8) = ppcStack_200;
          ppcStack_200 = ppcVar16;
          func_0x000109380ffc(&ppcStack_200);
          uStack_210 = (ulong)*(uint *)(pppcVar11 + 0x30);
          uStack_218 = 6;
          puVar13 = auStack_170;
          func_0x00010945a80c(puVar13,&UNK_10f6919c1);
          uStack_218 = *puVar13;
          *puVar13 = 6;
          uVar17 = *(ulong *)(puVar13 + 8);
          *(ulong *)(puVar13 + 8) = uStack_210;
          uStack_210 = uVar17;
          func_0x000109380ffc(&uStack_210);
          uStack_220 = (ulong)*(uint *)((long)pppcVar11 + 0x184);
          uStack_228 = 6;
          puVar13 = auStack_170;
          func_0x00010945a80c(puVar13,&UNK_10f6919cf);
          uStack_228 = *puVar13;
          *puVar13 = 6;
          uVar17 = *(ulong *)(puVar13 + 8);
          *(ulong *)(puVar13 + 8) = uStack_220;
          uStack_220 = uVar17;
          func_0x000109380ffc(&uStack_220);
          uStack_230 = (ulong)*(uint *)(pppcVar11 + 0x31);
          puVar13 = auStack_170;
          func_0x00010945a80c(puVar13,&UNK_10f6919de);
          *puVar13 = 6;
          uVar17 = *(ulong *)(puVar13 + 8);
          *(ulong *)(puVar13 + 8) = uStack_230;
          uStack_230 = uVar17;
          func_0x000109380ffc(&uStack_230);
          FUN_10a0c32e4(&ppcStack_1a8,auStack_170,0xffffffff,0x20,0,0);
          if (*(char *)(pppcVar11 + 0x2c) == '\x01') {
            if (*(char *)((long)pppcVar11 + 0x15f) < '\0') {
              __ZdlPv(*pppcVar1);
            }
            pppcVar11[0x2a] = ppcStack_1a0;
            *pppcVar1 = ppcStack_1a8;
            pppcVar11[0x2b] = ppcStack_198;
          }
          else {
            pppcVar11[0x2a] = ppcStack_1a0;
            *pppcVar1 = ppcStack_1a8;
            pppcVar11[0x2b] = ppcStack_198;
            *(undefined1 *)(pppcVar11 + 0x2c) = 1;
          }
          FUN_10a1ccb30(extraout_x8,pppcVar1);
          pppcVar11 = &ppcStack_168;
          func_0x000109380ffc(pppcVar11,auStack_170[0]);
        }
        return pppcVar11;
      }
      goto LAB_10ab28614;
    }
LAB_10ab285f8:
    FUN_10a00946c(&UNK_10f691911);
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10ab28624);
  (*pcVar8)();
code_r0x00010ab28430:
  puVar19 = unaff_x26;
  if ((long)uVar3 <= (long)uVar17) {
    unaff_x25 = (long)*pcVar5;
    puVar9 = puVar4;
    uVar15 = uVar17;
    do {
      unaff_x26 = puVar9;
      if ((0xfffffffffffffffe < uVar15 - uVar3) ||
         (_memchr(unaff_x26,unaff_x25,(uVar15 - uVar3) + 1), unaff_x26 == (undefined8 *)0x0)) break;
      puVar9 = unaff_x26;
      _memcmp();
      puVar19 = unaff_x26;
      if ((int)puVar9 == 0) {
        if ((unaff_x26 != puVar2) && (unaff_x26 == puVar4)) goto LAB_10ab284a4;
        break;
      }
      uVar15 = (long)puVar2 - ((long)unaff_x26 + 1);
      puVar9 = (undefined8 *)((long)unaff_x26 + 1);
    } while ((long)uVar3 <= (long)uVar15);
  }
  pcVar18 = pcVar18 + 0x18;
  unaff_x26 = puVar19;
  if (pcVar18 == pcVar7) goto LAB_10ab285f8;
  goto LAB_10ab28414;
}



/* Entry: 10ab286c8; end: 10ab28b1f;  */

undefined8 * FUN_10ab286c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined1 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uStack_120;
  undefined1 uStack_118;
  ulong uStack_110;
  undefined1 uStack_108;
  ulong uStack_100;
  undefined1 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  ulong uStack_e0;
  undefined1 uStack_d8;
  ulong uStack_d0;
  undefined1 uStack_c8;
  ulong uStack_c0;
  undefined1 uStack_b8;
  ulong uStack_b0;
  undefined1 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  byte bStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  puVar1 = param_2 + 0x29;
  if (*(char *)(param_2 + 0x2c) == '\x01') {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    FUN_10a1ccb84(param_1,puVar1);
    return param_1;
  }
  if ((*(byte *)(param_2 + 0x32) & 1) == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    auStack_60[0] = 0;
    uStack_58 = 0;
    plVar2 = (long *)(param_2[0x34] - param_2[0x33]);
    if (plVar2 == (long *)0x0) {
      lVar4 = (long)*(char *)((long)param_2 + 0xff);
      if (lVar4 < 0) {
        lVar4 = param_2[0x1e];
      }
      if ((lVar4 == 0) || (FUN_10a0f1e30(&plStack_98,param_2 + 0x1d,0), bStack_68 != 1)) {
        plVar2 = (long *)0x0;
      }
      else {
        plVar2 = (long *)*plStack_98;
        (**(code **)(*plVar2 + 0x18))();
        if ((bStack_68 & 1) != 0) {
          FUN_10a0f1ea0(&plStack_98);
        }
      }
    }
    uStack_a8 = 6;
    puVar3 = auStack_60;
    plStack_a0 = plVar2;
    func_0x00010945a80c(puVar3,&DAT_10f49f490);
    uStack_a8 = *puVar3;
    *puVar3 = 6;
    plVar2 = *(long **)(puVar3 + 8);
    *(long **)(puVar3 + 8) = plStack_a0;
    plStack_a0 = plVar2;
    func_0x000109380ffc(&plStack_a0);
    uStack_b0 = (ulong)*(uint *)(param_2 + 0x2d);
    uStack_b8 = 6;
    puVar3 = auStack_60;
    func_0x00010945a80c(puVar3,&UNK_10f691984);
    uStack_b8 = *puVar3;
    *puVar3 = 6;
    uVar5 = *(ulong *)(puVar3 + 8);
    *(ulong *)(puVar3 + 8) = uStack_b0;
    uStack_b0 = uVar5;
    func_0x000109380ffc(&uStack_b0);
    uStack_c0 = (ulong)*(uint *)((long)param_2 + 0x16c);
    uStack_c8 = 6;
    puVar3 = auStack_60;
    func_0x00010945a80c(puVar3,&DAT_10f691992);
    uStack_c8 = *puVar3;
    *puVar3 = 6;
    uVar5 = *(ulong *)(puVar3 + 8);
    *(ulong *)(puVar3 + 8) = uStack_c0;
    uStack_c0 = uVar5;
    func_0x000109380ffc(&uStack_c0);
    uStack_d0 = (ulong)*(uint *)(param_2 + 0x2e);
    uStack_d8 = 6;
    puVar3 = auStack_60;
    func_0x00010945a80c(puVar3,&DAT_10f6829b9);
    uStack_d8 = *puVar3;
    *puVar3 = 6;
    uVar5 = *(ulong *)(puVar3 + 8);
    *(ulong *)(puVar3 + 8) = uStack_d0;
    uStack_d0 = uVar5;
    func_0x000109380ffc(&uStack_d0);
    uStack_e0 = (ulong)*(uint *)((long)param_2 + 0x174);
    uStack_e8 = 6;
    puVar3 = auStack_60;
    func_0x00010945a80c(puVar3,&UNK_10f69199e);
    uStack_e8 = *puVar3;
    *puVar3 = 6;
    uVar5 = *(ulong *)(puVar3 + 8);
    *(ulong *)(puVar3 + 8) = uStack_e0;
    uStack_e0 = uVar5;
    func_0x000109380ffc(&uStack_e0);
    uStack_f0 = param_2[0x2f];
    uStack_f8 = 6;
    puVar3 = auStack_60;
    func_0x00010945a80c(puVar3,&UNK_10f6919ab);
    uStack_f8 = *puVar3;
    *puVar3 = 6;
    uVar6 = *(undefined8 *)(puVar3 + 8);
    *(undefined8 *)(puVar3 + 8) = uStack_f0;
    uStack_f0 = uVar6;
    func_0x000109380ffc(&uStack_f0);
    uStack_100 = (ulong)*(uint *)(param_2 + 0x30);
    uStack_108 = 6;
    puVar3 = auStack_60;
    func_0x00010945a80c(puVar3,&UNK_10f6919c1);
    uStack_108 = *puVar3;
    *puVar3 = 6;
    uVar5 = *(ulong *)(puVar3 + 8);
    *(ulong *)(puVar3 + 8) = uStack_100;
    uStack_100 = uVar5;
    func_0x000109380ffc(&uStack_100);
    uStack_110 = (ulong)*(uint *)((long)param_2 + 0x184);
    uStack_118 = 6;
    puVar3 = auStack_60;
    func_0x00010945a80c(puVar3,&UNK_10f6919cf);
    uStack_118 = *puVar3;
    *puVar3 = 6;
    uVar5 = *(ulong *)(puVar3 + 8);
    *(ulong *)(puVar3 + 8) = uStack_110;
    uStack_110 = uVar5;
    func_0x000109380ffc(&uStack_110);
    uStack_120 = (ulong)*(uint *)(param_2 + 0x31);
    puVar3 = auStack_60;
    func_0x00010945a80c(puVar3,&UNK_10f6919de);
    *puVar3 = 6;
    uVar5 = *(ulong *)(puVar3 + 8);
    *(ulong *)(puVar3 + 8) = uStack_120;
    uStack_120 = uVar5;
    func_0x000109380ffc(&uStack_120);
    FUN_10a0c32e4(&plStack_98,auStack_60,0xffffffff,0x20,0,0);
    if (*(char *)(param_2 + 0x2c) == '\x01') {
      if (*(char *)((long)param_2 + 0x15f) < '\0') {
        __ZdlPv(*puVar1);
      }
      param_2[0x2a] = uStack_90;
      *puVar1 = plStack_98;
      param_2[0x2b] = uStack_88;
    }
    else {
      param_2[0x2a] = uStack_90;
      *puVar1 = plStack_98;
      param_2[0x2b] = uStack_88;
      *(undefined1 *)(param_2 + 0x2c) = 1;
    }
    FUN_10a1ccb30(param_1,puVar1);
    param_2 = &uStack_58;
    func_0x000109380ffc(param_2,auStack_60[0]);
  }
  return param_2;
}



/* Entry: 10ab28b20; end: 10ab28b8f;  */

undefined1  [16] FUN_10ab28b20(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 5;
  auVar1._0_8_ = &UNK_10f691efa;
  return auVar1;
}



/* Entry: 10ab28b90; end: 10ab28eaf;  */

void FUN_10ab28b90(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bf0a60;
  if (*(char *)(param_1 + 0x1cf) < '\0') {
    *(undefined8 *)(param_1 + 0x1c0) = 0xb;
    puVar6 = *(undefined8 **)(param_1 + 0x1b8);
  }
  else {
    *(undefined1 *)(param_1 + 0x1cf) = 0xb;
    puVar6 = (undefined8 *)(param_1 + 0x1b8);
  }
  *(undefined4 *)((long)puVar6 + 7) = 0x786f4267;
  *puVar6 = 0x676e69646e756f42;
  *(undefined1 *)((long)puVar6 + 0xb) = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  puStack_a0 = &DAT_10f691f00;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_54 = 0x124;
  uStack_50 = 0x13c;
  uStack_48 = 0;
  uStack_40 = 0;
  func_0x00010a052690(param_1 + 0x168,&puStack_a0);
  uVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bf0a60;
    uStack_a8 = 0;
    puStack_a0 = (undefined *)((ulong)puStack_a0 & 0xffffffffffffff00);
    uStack_90 = uStack_90 & 0xffffffffffffff00;
    func_0x0001098949cc(param_1,&DAT_10f691f00,&ppuStack_b0,&puStack_a0);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    func_0x00010a06ba0c(param_1,FUN_10ab39e98,4,4);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab28eac;
    FUN_10a054dac(param_1,&UNK_10f65822b,FUN_10ab3a000,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f49662e,FUN_10ab3a124,FUN_10ab3a1e0);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f496638,FUN_10ab3a2a0,FUN_10ab3a35c);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f496633,FUN_10ab3a41c,FUN_10ab3a4d8);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f49663d,FUN_10ab3a598,FUN_10ab3a654);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_98 = *(undefined8 *)(lVar1 + -0x60);
    puStack_a0 = *(undefined **)(lVar1 + -0x68);
    uStack_78 = *(undefined8 *)(lVar1 + -0x40);
    uVar7 = *(ulong *)(lVar1 + -0x48);
    uVar8 = *(ulong *)(lVar1 + -0x50);
    uStack_90 = *(undefined8 *)(lVar1 + -0x58);
    uStack_68 = *(undefined8 *)(lVar1 + -0x30);
    uStack_70 = *(undefined8 *)(lVar1 + -0x38);
    uStack_60 = *(undefined8 *)(lVar1 + -0x28);
    uStack_40 = *(undefined8 *)(lVar1 + -8);
    uStack_48 = *(undefined8 *)(lVar1 + -0x10);
    uVar9 = *(ulong *)(lVar1 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar1 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar1 + -0x20) >> 0x20);
    uStack_50 = (undefined4)uVar9;
    uStack_4c = (undefined4)(uVar9 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar2 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar3 = uStack_80._4_4_;
    uVar5 = param_1;
    uStack_88 = uVar8;
    uStack_80 = uVar7;
    FUN_10a0051e8(param_1,uVar8 & 0xffffffff,uVar2,uVar9 & 0xffffffff,uVar7 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&puStack_a0,(undefined8 *)(param_1 + 0x1b8),&DAT_10f691f00,0xb);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10ab28eac:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ab28eb0);
  (*pcVar4)();
}



/* Entry: 10ab28eb0; end: 10ab29267;  */

void FUN_10ab28eb0(ulong param_1)

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
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f691efa,5);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c48fb0;
  pppuVar2 = (undefined8 ***)&UNK_10f68ffe7;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c48fb0;
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
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab29248;
    FUN_10a054dac(param_1,&DAT_10f6919e8,FUN_10ab3a714,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab29248;
    FUN_10a054dac(param_1,&UNK_10f6919f0,FUN_10ab3a898,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab29248;
    FUN_10a054dac(param_1,&UNK_10f6919fe,FUN_10ab3a978,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab29248;
    FUN_10a054dac(param_1,&UNK_10f66ab61,FUN_10ab3aa38,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab29248;
    FUN_10a054dac(param_1,&UNK_10f691a07,FUN_10ab3ab88,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab29248;
    FUN_10a054dac(param_1,&UNK_10f691a13,FUN_10ab3ac44,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab29248;
    FUN_10a054dac(param_1,&UNK_10f691a1f,FUN_10ab3ad00,1,*(undefined8 *)(param_1 + 0x40));
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
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f691efa,5);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10ab29248:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ab2924c);
  (*pcVar6)();
}



/* Entry: 10ab29268; end: 10ab2967f;  */

/* WARNING: Removing unreachable block (ram,0x00010ab294f4) */
/* WARNING: Removing unreachable block (ram,0x00010ab294c4) */
/* WARNING: Removing unreachable block (ram,0x00010ab294d4) */
/* WARNING: Removing unreachable block (ram,0x00010ab29554) */

void FUN_10ab29268(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined1 **ppuVar3;
  undefined8 ***pppuVar4;
  undefined8 **ppuVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 *puStack_170;
  ulong uStack_168;
  byte bStack_159;
  undefined8 **ppuStack_158;
  ulong uStack_150;
  byte bStack_141;
  undefined8 **ppuStack_140;
  ulong uStack_138;
  byte bStack_129;
  undefined8 **appuStack_128 [2];
  char cStack_111;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  ulong uStack_50;
  byte bStack_41;
  
  func_0x00010989f98c(auStack_58);
  uVar1 = uStack_50;
  if (-1 < (char)bStack_41) {
    uVar1 = (ulong)bStack_41;
  }
  FUN_10a003c90(appuStack_128,uVar1 + 0xd,&ppuStack_140);
  pppuVar4 = (undefined8 ***)appuStack_128[0];
  if (-1 < cStack_111) {
    pppuVar4 = appuStack_128;
  }
  if (uVar1 != 0) {
    _memmove(pppuVar4,auStack_58,uVar1);
  }
  puVar6 = (undefined8 *)((long)pppuVar4 + uVar1);
  *puVar6 = 0x7463617261686320;
  *(undefined8 *)((long)puVar6 + 5) = 0x203a737265746361;
  *(undefined1 *)((long)puVar6 + 0xd) = 0;
  uVar1 = *(ulong *)(param_2 + 0x70);
  plVar2 = (long *)*(long *)(param_2 + 0x68);
  if (-1 < (char)*(byte *)(param_2 + 0x7f)) {
    uVar1 = (ulong)*(byte *)(param_2 + 0x7f);
    plVar2 = (long *)(param_2 + 0x68);
  }
  pppuVar4 = appuStack_128;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar4,plVar2,uVar1);
  puStack_108 = pppuVar4[1];
  puStack_110 = *pppuVar4;
  puStack_100 = pppuVar4[2];
  pppuVar4[1] = (undefined8 **)0x0;
  pppuVar4[2] = (undefined8 **)0x0;
  *pppuVar4 = (undefined8 **)0x0;
  ppuVar5 = &puStack_110;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar5,&UNK_10f691a3c,9);
  uStack_e8 = ppuVar5[1];
  uStack_f0 = *ppuVar5;
  lStack_e0 = (long)ppuVar5[2];
  ppuVar5[1] = (undefined8 *)0x0;
  ppuVar5[2] = (undefined8 *)0x0;
  *ppuVar5 = (undefined8 *)0x0;
  __ZNSt3__19to_stringEf(&ppuStack_140,(float)*(int *)(param_2 + 0x80));
  pppuVar4 = (undefined8 ***)ppuStack_140;
  if (-1 < (char)bStack_129) {
    uStack_138 = (ulong)bStack_129;
    pppuVar4 = &ppuStack_140;
  }
  puVar6 = &uStack_f0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar6,pppuVar4,uStack_138);
  uStack_c8 = puVar6[1];
  uStack_d0 = *puVar6;
  lStack_c0 = puVar6[2];
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  puVar6 = &uStack_d0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar6,&UNK_10f691a46,0xd);
  uStack_a8 = puVar6[1];
  uStack_b0 = *puVar6;
  uStack_a0 = puVar6[2];
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_158,*(undefined4 *)(param_2 + 0x38));
  pppuVar4 = (undefined8 ***)ppuStack_158;
  if (-1 < (char)bStack_141) {
    uStack_150 = (ulong)bStack_141;
    pppuVar4 = &ppuStack_158;
  }
  puVar6 = &uStack_b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar6,pppuVar4,uStack_150);
  uStack_88 = puVar6[1];
  uStack_90 = *puVar6;
  uStack_80 = puVar6[2];
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  puVar6 = &uStack_90;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar6,&UNK_10f691a54,0xd);
  uStack_68 = puVar6[1];
  uStack_70 = *puVar6;
  uStack_60 = puVar6[2];
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  __ZNSt3__19to_stringEf(&puStack_170,*(undefined4 *)(param_2 + 0x3c));
  ppuVar3 = (undefined1 **)puStack_170;
  if (-1 < (char)bStack_159) {
    uStack_168 = (ulong)bStack_159;
    ppuVar3 = &puStack_170;
  }
  puVar6 = &uStack_70;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar6,ppuVar3,uStack_168);
  uVar7 = *puVar6;
  param_1[1] = puVar6[1];
  *param_1 = uVar7;
  param_1[2] = puVar6[2];
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  if ((char)bStack_159 < '\0') {
    __ZdlPv(puStack_170);
  }
  if ((char)bStack_141 < '\0') {
    __ZdlPv(ppuStack_158);
  }
  if (lStack_c0 < 0) {
    __ZdlPv(uStack_d0);
  }
  if ((char)bStack_129 < '\0') {
    __ZdlPv(ppuStack_140);
  }
  if (lStack_e0 < 0) {
    __ZdlPv(uStack_f0);
  }
  if ((long)puStack_100 < 0) {
    __ZdlPv(puStack_110);
  }
  if (cStack_111 < '\0') {
    __ZdlPv(appuStack_128[0]);
  }
  return;
}



/* Entry: 10ab29680; end: 10ab2980b;  */

long FUN_10ab29680(float param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined1 auStack_68 [8];
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  float fStack_44;
  
  plVar6 = param_2 + 0xb;
  plVar4 = (long *)*plVar6;
  if (plVar4 != (long *)0x0) {
    plVar3 = plVar6;
    do {
      lVar5 = 8;
      if (param_1 + -1e-06 <= *(float *)(plVar4 + 4)) {
        lVar5 = 0;
        plVar3 = plVar4;
      }
      plVar4 = *(long **)((long)plVar4 + lVar5);
    } while (plVar4 != (long *)0x0);
    bVar2 = plVar3 != plVar6;
    plVar6 = plVar3;
    if ((bVar2) && (*(float *)(plVar3 + 4) <= param_1 + 1e-06)) goto LAB_10ab297a8;
  }
  fStack_44 = param_1;
  (**(code **)(*param_2 + 0x48))(&plStack_58);
  plVar3 = plVar6;
  if (plStack_58 != (long *)0x0) {
    *(float *)(plStack_58 + 0xc) = ABS(param_1);
    (**(code **)(*plStack_58 + 0x48))(auStack_68,plStack_58);
    plVar3 = param_2 + 10;
    FUN_10ab3af0c(plVar3,&fStack_44,&fStack_44,auStack_68);
    if (plStack_60 != (long *)0x0) {
      plVar6 = plStack_60 + 1;
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
        (**(code **)(*plStack_60 + 0x10))(plStack_60);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_60);
      }
    }
  }
  if (plStack_50 != (long *)0x0) {
    plVar6 = plStack_50 + 1;
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
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_50);
    }
  }
  if (plStack_58 == (long *)0x0) {
    return 0;
  }
LAB_10ab297a8:
  return plVar3[5];
}



/* Entry: 10ab2980c; end: 10ab29e4b;  */

void FUN_10ab2980c(float param_1,float param_2,float param_3,long param_4,long *param_5)

{
  long ****pppplVar1;
  long **pplVar2;
  undefined8 *puVar3;
  uint uVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long ****pppplVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  long **pplVar13;
  long ***ppplVar14;
  long ***ppplVar15;
  ulong uVar16;
  long ***ppplVar17;
  uint uVar18;
  long lVar19;
  long ***ppplVar20;
  ulong uVar21;
  long ****pppplVar22;
  int iVar23;
  uint uVar24;
  long ****pppplVar25;
  long ***ppplVar26;
  long **pplStack_c0;
  long ***ppplStack_a8;
  long ***ppplStack_a0;
  long ***ppplStack_98;
  undefined8 uStack_88;
  long ***ppplStack_80;
  long ***ppplStack_78;
  long ***ppplStack_70;
  long ***ppplStack_68;
  
  pppplVar1 = (long ****)(param_4 + 0x18);
  func_0x00010a61d0b0();
  plVar6 = param_5;
  (**(code **)(*param_5 + 0x200))(param_5,&PTR_DAT_110c47d38);
  if ((int)plVar6 != 0) {
    (**(code **)(*param_5 + 0x210))(param_5,&PTR_DAT_110c47d38);
    plVar6 = param_5;
    (**(code **)(*param_5 + 0x208))();
    if ((int)plVar6 != 0) {
      iVar10 = 0;
      pplVar2 = (long **)(param_4 + 0x28);
      do {
        (**(code **)(*param_5 + 0x218))(param_5);
        plVar7 = param_5;
        (**(code **)(*param_5 + 0x208))();
        ppplStack_a8 = (long ***)0x0;
        ppplStack_a0 = (long ***)0x0;
        ppplStack_98 = (long ***)0x0;
        if ((int)plVar7 != 0) {
          ppplStack_68 = (long ***)&ppplStack_a8;
          pppplVar9 = &ppplStack_a8;
          uVar21 = (ulong)plVar7 & 0xffffffff;
          FUN_10a60f558();
          pppplVar22 = (long ****)((long)pppplVar9 - ((long)ppplStack_a0 - (long)ppplStack_a8));
          _memcpy(pppplVar22);
          ppplStack_78 = ppplStack_a8;
          ppplStack_70 = ppplStack_98;
          uStack_88 = (long ****)ppplStack_a8;
          ppplStack_80 = ppplStack_a8;
          ppplStack_a8 = (long ***)pppplVar22;
          ppplStack_a0 = (long ***)pppplVar9;
          ppplStack_98 = (long ***)(pppplVar9 + uVar21 * 3);
          func_0x00010a60f59c(&uStack_88);
          uVar21 = 0;
          do {
            (**(code **)(*param_5 + 0x218))(param_5,uVar21);
            plVar8 = param_5;
            (**(code **)(*param_5 + 0x208))();
            if (ppplStack_a0 < ppplStack_98) {
              pppplVar22 = (long ****)(ppplStack_a0 + 3);
              *ppplStack_a0 = (long **)0x0;
              ppplStack_a0[1] = (long **)0x0;
              ppplStack_a0[2] = (long **)0x0;
            }
            else {
              lVar19 = (long)ppplStack_a0 - (long)ppplStack_a8;
              uVar12 = (lVar19 >> 3) * -0x5555555555555555 + 1;
              if (0xaaaaaaaaaaaaaaa < uVar12) {
                FUN_10a60f544();
                goto LAB_10ab29dd0;
              }
              lVar11 = (long)ppplStack_98 - (long)ppplStack_a8 >> 3;
              uVar16 = lVar11 * 0x5555555555555556;
              if (uVar16 < uVar12 || uVar16 - uVar12 == 0) {
                uVar16 = uVar12;
              }
              if (0x555555555555554 < (ulong)(lVar11 * -0x5555555555555555)) {
                uVar16 = 0xaaaaaaaaaaaaaaa;
              }
              ppplStack_68 = (long ***)&ppplStack_a8;
              if (uVar16 == 0) {
                pppplVar9 = (long ****)0x0;
              }
              else {
                pppplVar9 = &ppplStack_a8;
                FUN_10a60f558();
              }
              puVar3 = (undefined8 *)((long)pppplVar9 + lVar19);
              pppplVar22 = (long ****)(puVar3 + 3);
              *puVar3 = 0;
              puVar3[1] = 0;
              puVar3[2] = 0;
              pppplVar25 = (long ****)((long)puVar3 - ((long)ppplStack_a0 - (long)ppplStack_a8));
              _memcpy(pppplVar25);
              ppplStack_78 = ppplStack_a8;
              ppplStack_70 = ppplStack_98;
              uStack_88 = (long ****)ppplStack_a8;
              ppplStack_80 = ppplStack_a8;
              ppplStack_a8 = (long ***)pppplVar25;
              ppplStack_a0 = (long ***)pppplVar22;
              ppplStack_98 = (long ***)(pppplVar9 + uVar16 * 3);
              func_0x00010a60f59c(&uStack_88);
            }
            uVar12 = ((long)pppplVar22 - (long)ppplStack_a8 >> 3) * -0x5555555555555555;
            ppplStack_a0 = (long ***)pppplVar22;
            if (uVar12 < uVar21 || uVar12 - uVar21 == 0) goto LAB_10ab29dd0;
            func_0x00010983ca2c(ppplStack_a8 + uVar21 * 3,(ulong)plVar8 & 0xffffffff);
            if ((int)plVar8 != 0) {
              iVar23 = 0;
              do {
                (**(code **)(*param_5 + 0x218))(param_5,iVar23);
                ppplVar15 = ppplStack_a8;
                uVar12 = ((long)ppplStack_a0 - (long)ppplStack_a8 >> 3) * -0x5555555555555555;
                if (uVar12 < uVar21 || uVar12 - uVar21 == 0) goto LAB_10ab29dd0;
                (**(code **)(*param_5 + 0xe8))(param_5,&PTR_DAT_110c48480);
                uStack_88 = (long ****)CONCAT44(param_2,param_1);
                ppplStack_80 = (long ***)CONCAT44(ppplStack_80._4_4_,param_3);
                FUN_10a123714(ppplVar15 + uVar21 * 3,&uStack_88);
                (**(code **)(*param_5 + 0x220))(param_5);
                iVar23 = iVar23 + 1;
              } while ((int)plVar8 != iVar23);
            }
            (**(code **)(*param_5 + 0x220))(param_5);
            uVar21 = uVar21 + 1;
          } while (uVar21 != ((ulong)plVar7 & 0xffffffff));
        }
        ppplVar14 = ppplStack_a0;
        ppplVar15 = ppplStack_a8;
        if (ppplStack_a8 != ppplStack_a0) {
          uVar21 = ((long)ppplStack_a8[1] - (long)*ppplStack_a8 >> 2) * -0x5555555555555555;
          uVar18 = (uint)uVar21;
          if (uVar18 < 3) {
            FUN_10a00946c(&UNK_10f63b8ac);
LAB_10ab29dd0:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10ab29dd4);
            (*pcVar5)();
          }
          ppplVar20 = (long ***)(uVar21 & 0xffffffff);
          pppplVar9 = (long ****)ppplStack_a8;
          do {
            pppplVar22 = pppplVar9 + 3;
            if (((long)pppplVar9[1] - (long)*pppplVar9 >> 2) * -0x5555555555555555 - (long)ppplVar20
                != 0) {
              FUN_10a00946c(&UNK_10f63b8ac);
              goto LAB_10ab29dd0;
            }
            pppplVar9 = pppplVar22;
          } while (pppplVar22 != (long ****)ppplStack_a0);
          ppplVar26 = *(long ****)(param_4 + 0x20);
          if (ppplVar26 != (long ***)0x0) {
            uVar21 = (long)ppplVar26 - 1;
            uVar24 = (uint)ppplVar26;
            if (((ulong)ppplVar26 & uVar21) == 0) {
              pplStack_c0 = (long **)((ulong)(uVar24 - 1) & (ulong)ppplVar20);
            }
            else {
              pplStack_c0 = (long **)ppplVar20;
              if (ppplVar26 <= ppplVar20) {
                uVar4 = 0;
                if (uVar24 != 0) {
                  uVar4 = uVar18 / uVar24;
                }
                pplStack_c0 = (long **)(ulong)(uVar18 - uVar4 * uVar24);
              }
            }
            pplVar13 = (*pppplVar1)[(long)pplStack_c0];
            if (pplVar13 != (long **)0x0) {
              do {
                while( true ) {
                  pplVar13 = (long **)*pplVar13;
                  if (pplVar13 == (long **)0x0) goto LAB_10ab29bd8;
                  ppplVar17 = (long ***)pplVar13[1];
                  if (ppplVar17 != ppplVar20) break;
                  if (*(uint *)(pplVar13 + 2) == uVar18) goto LAB_10ab29d44;
                }
                if (((ulong)ppplVar26 & uVar21) == 0) {
                  ppplVar17 = (long ***)((ulong)ppplVar17 & uVar21);
                }
                else if (ppplVar26 <= ppplVar17) {
                  uVar12 = 0;
                  if (ppplVar26 != (long ***)0x0) {
                    uVar12 = (ulong)ppplVar17 / (ulong)ppplVar26;
                  }
                  ppplVar17 = (long ***)((long)ppplVar17 - uVar12 * (long)ppplVar26);
                }
              } while (ppplVar17 == (long ***)pplStack_c0);
            }
          }
LAB_10ab29bd8:
          pppplVar9 = (long ****)0x30;
          __Znwm();
          ppplStack_78 = (long ***)0x0;
          *pppplVar9 = (long ***)0x0;
          pppplVar9[1] = ppplVar20;
          *(uint *)(pppplVar9 + 2) = uVar18;
          pppplVar9[4] = (long ***)0x0;
          pppplVar9[5] = (long ***)0x0;
          pppplVar9[3] = (long ***)0x0;
          uStack_88 = pppplVar9;
          ppplStack_80 = (long ***)pppplVar1;
          FUN_10a6152c0(pppplVar9 + 3,ppplVar15,ppplVar14,
                        ((long)ppplVar14 - (long)ppplVar15 >> 3) * -0x5555555555555555);
          ppplStack_78 = (long ***)CONCAT71(ppplStack_78._1_7_,1);
          param_1 = (float)(*(long *)(param_4 + 0x30) + 1);
          param_2 = *(float *)(param_4 + 0x38);
          if ((ppplVar26 == (long ***)0x0) ||
             (param_3 = param_2 * (float)ppplVar26, ppplVar15 = (long ***)pplStack_c0,
             param_3 < param_1)) {
            uVar21 = 1;
            if ((long ***)0x2 < ppplVar26) {
              uVar21 = (ulong)(((ulong)ppplVar26 & (long)ppplVar26 - 1U) != 0);
            }
            uVar21 = uVar21 | (long)ppplVar26 << 1;
            param_1 = param_1 / param_2;
            if (uVar21 <= (ulong)(long)param_1) {
              uVar21 = (long)param_1;
            }
            FUN_10a61c274(pppplVar1,uVar21);
            ppplVar26 = *(long ****)(param_4 + 0x20);
            if (((ulong)ppplVar26 & (long)ppplVar26 - 1U) == 0) {
              ppplVar15 = (long ***)((ulong)((int)ppplVar26 - 1) & (ulong)ppplVar20);
            }
            else {
              ppplVar15 = ppplVar20;
              if (ppplVar26 <= ppplVar20) {
                uVar21 = 0;
                if (ppplVar26 != (long ***)0x0) {
                  uVar21 = (ulong)ppplVar20 / (ulong)ppplVar26;
                }
                ppplVar15 = (long ***)((long)ppplVar20 - uVar21 * (long)ppplVar26);
              }
            }
          }
          ppplVar14 = *pppplVar1;
          pplVar13 = ppplVar14[(long)ppplVar15];
          if (pplVar13 == (long **)0x0) {
            *uStack_88 = (long ***)*pplVar2;
            *pplVar2 = (long *)uStack_88;
            ppplVar14[(long)ppplVar15] = pplVar2;
            if (*uStack_88 != (long ***)0x0) {
              ppplVar15 = (long ***)(*uStack_88)[1];
              if (((ulong)ppplVar26 & (long)ppplVar26 - 1U) == 0) {
                ppplVar15 = (long ***)((ulong)ppplVar15 & (long)ppplVar26 - 1U);
              }
              else if (ppplVar26 <= ppplVar15) {
                uVar21 = 0;
                if (ppplVar26 != (long ***)0x0) {
                  uVar21 = (ulong)ppplVar15 / (ulong)ppplVar26;
                }
                ppplVar15 = (long ***)((long)ppplVar15 - uVar21 * (long)ppplVar26);
              }
              (*pppplVar1)[(long)ppplVar15] = (long **)uStack_88;
            }
          }
          else {
            *uStack_88 = (long ***)*pplVar13;
            *pplVar13 = (long *)uStack_88;
          }
          *(long *)(param_4 + 0x30) = *(long *)(param_4 + 0x30) + 1;
        }
LAB_10ab29d44:
        (**(code **)(*param_5 + 0x220))(param_5);
        uStack_88 = &ppplStack_a8;
        func_0x00010a60f324(&uStack_88);
        iVar10 = iVar10 + 1;
      } while (iVar10 != (int)plVar6);
    }
    (**(code **)(*param_5 + 0x220))(param_5);
  }
  return;
}



/* Entry: 10ab29e4c; end: 10ab29eeb;  */

undefined8 * FUN_10ab29e4c(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_170 [320];
  
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_110c47cc0;
  param_1[1] = &PTR_FUN_110c47d00;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  FUN_10a0f6d8c(auStack_170,param_2,0);
  FUN_10ab2980c(param_1,auStack_170);
  func_0x00010a0f618c(auStack_170);
  return param_1;
}



/* Entry: 10ab29eec; end: 10ab29f1f;  */

undefined8 * FUN_10ab29eec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c47cc0;
  param_1[1] = &PTR_FUN_110c47d00;
  func_0x00010a61bd20(param_1 + 3);
  return param_1;
}



/* Entry: 10ab29f20; end: 10ab29f37;  */

long * FUN_10ab29f20(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  param_1[-1] = &PTR_FUN_110c47cc0;
  *param_1 = &PTR_FUN_110c47d00;
  plVar1 = param_1 + 2;
  FUN_10a61491c(plVar1,param_1[4]);
  lVar2 = *plVar1;
  *plVar1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 10ab29f38; end: 10ab29fa3;  */

void FUN_10ab29f38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c47cc0;
  param_1[1] = &PTR_FUN_110c47d00;
  func_0x00010a61bd20(param_1 + 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10ab29fa4; end: 10ab29fe3;  */

int FUN_10ab29fa4(long param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x28);
  if (plVar2 != (long *)0x0) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + (int)((ulong)(plVar2[4] - plVar2[3]) >> 3) * (int)plVar2[2] * 4;
      plVar2 = (long *)*plVar2;
    } while (plVar2 != (long *)0x0);
    return iVar1;
  }
  return 0;
}



/* Entry: 10ab29fe4; end: 10ab2a213;  */

void FUN_10ab29fe4(undefined1 *param_1,undefined **param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined **ppuVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined **unaff_x19;
  undefined **unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long unaff_x24;
  undefined8 unaff_x25;
  ulong unaff_x26;
  ulong unaff_x27;
  long unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
code_r0x00010ab29fe4:
  ppuVar6 = param_2;
  puVar5 = (undefined1 *)((long)register0x00000008 + -0x70);
  *(long *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(ulong *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined ***)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined ***)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
  if (*(long *)(param_1 + 0x30) == 0) {
    return;
  }
  param_2 = &PTR_DAT_110c47d38;
  (**(code **)(*ppuVar6 + 0x18))(ppuVar6);
  unaff_x21 = *(long **)(param_1 + 0x28);
  if (unaff_x21 != (long *)0x0) {
    unaff_x22 = 0xaaaaaaaaaaaaaaab;
    unaff_x23 = 0x18;
    unaff_x25 = 0x2b;
    unaff_x20 = &PTR_DAT_110c48480;
    do {
      (**(code **)(*ppuVar6 + 0x10))(ppuVar6);
      if (unaff_x21[4] != unaff_x21[3]) {
        unaff_x26 = 0;
        do {
          (**(code **)(*ppuVar6 + 0x10))(ppuVar6);
          lVar7 = unaff_x21[3];
          uVar8 = (unaff_x21[4] - lVar7 >> 3) * -0x5555555555555555;
          if (uVar8 < unaff_x26 || uVar8 - unaff_x26 == 0) {
LAB_10ab2a208:
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10ab2a20c);
            (*pcVar4)();
          }
          uVar3 = *(uint *)(unaff_x21 + 2);
          plVar9 = (long *)(lVar7 + unaff_x26 * 0x18);
          lVar1 = *plVar9;
          lVar2 = plVar9[1];
          *(undefined **)((long)register0x00000008 + -0x70) = &UNK_10f691a62;
          *(undefined8 *)((long)register0x00000008 + -0x68) = 0x2b;
          if ((lVar2 - lVar1 >> 2) * -0x5555555555555555 - (ulong)uVar3 != 0) {
            unaff_x30 = FUN_10ab2a214;
            FUN_10a0edfc4();
            param_1 = puVar5 + -8;
            register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
            unaff_x19 = ppuVar6;
            goto code_r0x00010ab29fe4;
          }
          unaff_x27 = 0xffffffffffffffff;
          unaff_x28 = 0;
          while (plVar9 = (long *)(lVar7 + unaff_x26 * 0x18),
                unaff_x27 + 1 < (ulong)((plVar9[1] - *plVar9 >> 2) * -0x5555555555555555)) {
            (**(code **)(*ppuVar6 + 0x10))(ppuVar6);
            uVar8 = (unaff_x21[4] - unaff_x21[3] >> 3) * -0x5555555555555555;
            if (uVar8 < unaff_x26 || uVar8 - unaff_x26 == 0) goto LAB_10ab2a208;
            plVar9 = (long *)(unaff_x21[3] + unaff_x26 * 0x18);
            lVar7 = *plVar9;
            uVar8 = (plVar9[1] - lVar7 >> 2) * -0x5555555555555555;
            unaff_x27 = unaff_x27 + 1;
            if (uVar8 < unaff_x27 || uVar8 - unaff_x27 == 0) goto LAB_10ab2a208;
            unaff_x24 = unaff_x28 + 0xc;
            param_2 = unaff_x20;
            (**(code **)(*ppuVar6 + 0x80))(ppuVar6,&PTR_DAT_110c48480,lVar7 + unaff_x28);
            (**(code **)(*ppuVar6 + 0x20))(ppuVar6);
            lVar7 = unaff_x21[3];
            uVar8 = (unaff_x21[4] - lVar7 >> 3) * -0x5555555555555555;
            unaff_x28 = unaff_x24;
            if (uVar8 < unaff_x26 || uVar8 - unaff_x26 == 0) goto LAB_10ab2a208;
          }
          (**(code **)(*ppuVar6 + 0x20))(ppuVar6);
          unaff_x26 = unaff_x26 + 1;
        } while (unaff_x26 < (ulong)((unaff_x21[4] - unaff_x21[3] >> 3) * -0x5555555555555555));
      }
      (**(code **)(*ppuVar6 + 0x20))(ppuVar6);
      unaff_x21 = (long *)*unaff_x21;
    } while (unaff_x21 != (long *)0x0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010ab2a1e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*ppuVar6 + 0x20))(ppuVar6);
  return;
}



/* Entry: 10ab2a214; end: 10ab2a223;  */

void FUN_10ab2a214(undefined1 *param_1,undefined **param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined **ppuVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined **unaff_x19;
  undefined **unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long unaff_x24;
  undefined8 unaff_x25;
  ulong unaff_x26;
  ulong unaff_x27;
  long unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
code_r0x00010ab2a214:
  ppuVar6 = param_2;
  puVar5 = (undefined1 *)((long)register0x00000008 + -0x70);
  *(long *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(ulong *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined ***)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined ***)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
  param_2 = &PTR_DAT_110c47d38;
  (**(code **)(*ppuVar6 + 0x18))(ppuVar6);
  unaff_x21 = *(long **)(param_1 + 0x20);
  if (unaff_x21 != (long *)0x0) {
    unaff_x22 = 0xaaaaaaaaaaaaaaab;
    unaff_x23 = 0x18;
    unaff_x25 = 0x2b;
    unaff_x20 = &PTR_DAT_110c48480;
    do {
      (**(code **)(*ppuVar6 + 0x10))(ppuVar6);
      if (unaff_x21[4] != unaff_x21[3]) {
        unaff_x26 = 0;
        do {
          (**(code **)(*ppuVar6 + 0x10))(ppuVar6);
          lVar7 = unaff_x21[3];
          uVar8 = (unaff_x21[4] - lVar7 >> 3) * -0x5555555555555555;
          if (uVar8 < unaff_x26 || uVar8 - unaff_x26 == 0) {
LAB_10ab2a208:
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10ab2a20c);
            (*pcVar4)();
          }
          uVar3 = *(uint *)(unaff_x21 + 2);
          plVar9 = (long *)(lVar7 + unaff_x26 * 0x18);
          lVar1 = *plVar9;
          lVar2 = plVar9[1];
          *(undefined **)((long)register0x00000008 + -0x70) = &UNK_10f691a62;
          *(undefined8 *)((long)register0x00000008 + -0x68) = 0x2b;
          if ((lVar2 - lVar1 >> 2) * -0x5555555555555555 - (ulong)uVar3 != 0) {
            unaff_x30 = FUN_10ab2a214;
            FUN_10a0edfc4();
            register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
            param_1 = puVar5;
            unaff_x19 = ppuVar6;
            goto code_r0x00010ab2a214;
          }
          unaff_x27 = 0xffffffffffffffff;
          unaff_x28 = 0;
          while (plVar9 = (long *)(lVar7 + unaff_x26 * 0x18),
                unaff_x27 + 1 < (ulong)((plVar9[1] - *plVar9 >> 2) * -0x5555555555555555)) {
            (**(code **)(*ppuVar6 + 0x10))(ppuVar6);
            uVar8 = (unaff_x21[4] - unaff_x21[3] >> 3) * -0x5555555555555555;
            if (uVar8 < unaff_x26 || uVar8 - unaff_x26 == 0) goto LAB_10ab2a208;
            plVar9 = (long *)(unaff_x21[3] + unaff_x26 * 0x18);
            lVar7 = *plVar9;
            uVar8 = (plVar9[1] - lVar7 >> 2) * -0x5555555555555555;
            unaff_x27 = unaff_x27 + 1;
            if (uVar8 < unaff_x27 || uVar8 - unaff_x27 == 0) goto LAB_10ab2a208;
            unaff_x24 = unaff_x28 + 0xc;
            param_2 = unaff_x20;
            (**(code **)(*ppuVar6 + 0x80))(ppuVar6,&PTR_DAT_110c48480,lVar7 + unaff_x28);
            (**(code **)(*ppuVar6 + 0x20))(ppuVar6);
            lVar7 = unaff_x21[3];
            uVar8 = (unaff_x21[4] - lVar7 >> 3) * -0x5555555555555555;
            unaff_x28 = unaff_x24;
            if (uVar8 < unaff_x26 || uVar8 - unaff_x26 == 0) goto LAB_10ab2a208;
          }
          (**(code **)(*ppuVar6 + 0x20))(ppuVar6);
          unaff_x26 = unaff_x26 + 1;
        } while (unaff_x26 < (ulong)((unaff_x21[4] - unaff_x21[3] >> 3) * -0x5555555555555555));
      }
      (**(code **)(*ppuVar6 + 0x20))(ppuVar6);
      unaff_x21 = (long *)*unaff_x21;
    } while (unaff_x21 != (long *)0x0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010ab2a1e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*ppuVar6 + 0x20))(ppuVar6);
  return;
}



/* Entry: 10ab2a224; end: 10ab2a2ff;  */

undefined8 * FUN_10ab2a224(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c48d70;
  param_1[2] = &PTR_FUN_110c48e18;
  param_1[7] = &PTR_DAT_110c48e70;
  func_0x00010a2021cc(param_1 + 0x1d);
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10ab2a300; end: 10ab2a307;  */

undefined8 FUN_10ab2a300(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}


