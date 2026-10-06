/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1094afc0c; end: 1094afcef;  */

long FUN_1094afc0c(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = param_1;
  func_0x000107c31944();
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
          func_0x000104c4fbc4(param_1,plVar3 + 2,param_2);
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



/* Entry: 1094afcf0; end: 1094afdb3;  */

long FUN_1094afcf0(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  long lStack_40;
  char cStack_38;
  
  lStack_40 = param_1 + 0x18;
  cStack_38 = '\x01';
  __ZNSt3__15mutex4lockEv();
  __ZNSt3__117__assoc_sub_state10__sub_waitERNS_11unique_lockINS_5mutexEEE(param_1,&lStack_40);
  lVar2 = *(long *)(param_1 + 0x10);
  uStack_48 = 0;
  __ZNSt13exception_ptrD1Ev(&uStack_48);
  if (lVar2 == 0) {
    if (cStack_38 == '\x01') {
      __ZNSt3__15mutex6unlockEv(lStack_40);
    }
    return param_1 + 0x90;
  }
  __ZNSt13exception_ptrC1ERKS_(auStack_50,(long *)(param_1 + 0x10));
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_50);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1094afd84);
  (*pcVar1)();
}



/* Entry: 1094afdb4; end: 1094afe97;  */

long FUN_1094afdb4(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = param_1;
  func_0x000107c31944();
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
          func_0x000104c4fbc4(param_1,plVar3 + 2,param_2);
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



/* Entry: 1094afe98; end: 1094afef7;  */

void FUN_1094afe98(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar4 = 0x308;
  __Znwm();
  FUN_1094afef8();
  *param_1 = lVar4 + 0x18;
  param_1[1] = lVar4;
  if (((long *)(lVar4 + 0x20) != (long *)0x0) &&
     ((lVar5 = *(long *)(lVar4 + 0x28), lVar5 == 0 || (*(long *)(lVar5 + 8) == -1)))) {
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
      lVar5 = *(long *)(lVar4 + 0x28);
    }
    *(long *)(lVar4 + 0x20) = lVar4 + 0x18;
    *(long **)(lVar4 + 0x28) = plVar6;
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



/* Entry: 1094afef8; end: 1094aff43;  */

undefined8 * FUN_1094afef8(undefined8 *param_1,undefined4 *param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110af6f58;
  FUN_1094aba94(param_1 + 3,*param_2);
  return param_1;
}



/* Entry: 1094aff44; end: 1094aff53;  */

void FUN_1094aff44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af6f58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1094aff54; end: 1094aff73;  */

void FUN_1094aff54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af6f58;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1094aff74; end: 1094aff83;  */

void FUN_1094aff74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001094aff7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1094aff84; end: 1094b0367;  */

void FUN_1094aff84(long param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 1094b0368; end: 1094b03db;  */

void FUN_1094b0368(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[5];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x0001094b2528(plVar1 + 3);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = param_1[3];
  param_1[3] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*param_1);
    return;
  }
  return;
}



/* Entry: 1094b03dc; end: 1094b0553;  */

long * FUN_1094b03dc(long *param_1)

{
  long lVar1;
  
  func_0x0001094b0414(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1094b0554; end: 1094b0563;  */

void FUN_1094b0554(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af6fa8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1094b0564; end: 1094b0583;  */

void FUN_1094b0564(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af6fa8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1094b0584; end: 1094b05b3;  */

long FUN_1094b0584(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_1094b0840(param_1 + 0x138);
  FUN_1094b0778(param_1 + 0x128);
  if (*(long *)(param_1 + 0x110) != 0) {
    *(long *)(param_1 + 0x118) = *(long *)(param_1 + 0x110);
    __ZdlPv();
  }
  lVar4 = *(long *)(param_1 + 0x108);
  *(long *)(param_1 + 0x108) = 0;
  if (lVar4 != 0) {
    FUN_1094a8624();
  }
  if (*(char *)(param_1 + 0xf7) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xe0));
  }
  if (*(char *)(param_1 + 0xdf) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 200));
  }
  func_0x0001094a866c(param_1 + 0xa0);
  if (*(long *)(param_1 + 0x70) != 0) {
    *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x70);
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0x57) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x40));
  }
  if (*(char *)(param_1 + 0x3f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x28));
  }
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



/* Entry: 1094b05b4; end: 1094b05b7;  */

void FUN_1094b05b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1094b05b8; end: 1094b071b;  */

undefined8 * FUN_1094b05b8(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1094b071c; end: 1094b072b;  */

void FUN_1094b071c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af7368;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1094b072c; end: 1094b0773;  */

void FUN_1094b072c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af7368;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1094b0774; end: 1094b0777;  */

void FUN_1094b0774(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1094b0778; end: 1094b07cf;  */

long FUN_1094b0778(long param_1)

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



/* Entry: 1094b07d0; end: 1094b07df;  */

void FUN_1094b07d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af6ff8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1094b07e0; end: 1094b07ff;  */

void FUN_1094b07e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af6ff8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1094b0800; end: 1094b083b;  */

void FUN_1094b0800(long param_1)

{
  func_0x0001092b0b8c(param_1 + 0x38);
  if (-1 < *(char *)(param_1 + 0x37)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1094b083c; end: 1094b083f;  */

void FUN_1094b083c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1094b0840; end: 1094b08ef;  */

long FUN_1094b0840(long param_1)

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



/* Entry: 1094b08f0; end: 1094b0b3b;  */

undefined1  [16]
FUN_1094b08f0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x27;
  ulong uVar9;
  undefined1 auVar10 [16];
  long *aplStack_78 [3];
  
  plVar6 = param_1;
  func_0x000107c31944();
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      unaff_x27 = (long *)(uVar9 & (ulong)plVar6);
    }
    else {
      unaff_x27 = plVar6;
      if (plVar8 <= plVar6) {
        uVar5 = 0;
        if (plVar8 != (long *)0x0) {
          uVar5 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x27 = (long *)((long)plVar6 - uVar5 * (long)plVar8);
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + (long)unaff_x27 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      for (plVar7 = (long *)*puVar2; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        plVar3 = (long *)plVar7[1];
        if (plVar3 == plVar6) {
          plVar3 = param_1;
          func_0x000104c4fbc4(param_1,plVar7 + 2,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar1 = 0;
            goto LAB_1094b0af8;
          }
        }
        else {
          if (((ulong)plVar8 & uVar9) == 0) {
            plVar3 = (long *)((ulong)plVar3 & uVar9);
          }
          else if (plVar8 <= plVar3) {
            uVar5 = 0;
            if (plVar8 != (long *)0x0) {
              uVar5 = (ulong)plVar3 / (ulong)plVar8;
            }
            plVar3 = (long *)((long)plVar3 - uVar5 * (long)plVar8);
          }
          if (plVar3 != unaff_x27) break;
        }
      }
    }
  }
  FUN_1094b0b3c(aplStack_78,param_1,plVar6,param_3,param_4,param_5);
  if ((plVar8 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar8 < (float)(param_1[3] + 1))
     ) {
    uVar9 = 1;
    if ((long *)0x2 < plVar8) {
      uVar9 = (ulong)(((ulong)plVar8 & (long)plVar8 - 1U) != 0);
    }
    uVar9 = uVar9 | (long)plVar8 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar9 <= uVar5) {
      uVar9 = uVar5;
    }
    FUN_1094b0bdc(param_1,uVar9);
    plVar8 = (long *)param_1[1];
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      unaff_x27 = (long *)((long)plVar8 - 1U & (ulong)plVar6);
    }
    else {
      unaff_x27 = plVar6;
      if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x27 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
    }
  }
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + (long)unaff_x27 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
    *(long **)(lVar4 + (long)unaff_x27 * 8) = plVar6;
    if (*aplStack_78[0] != 0) {
      plVar6 = *(long **)(*aplStack_78[0] + 8);
      if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (long)plVar8 - 1U);
      }
      else if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        plVar6 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
      *(long **)(*param_1 + (long)plVar6 * 8) = aplStack_78[0];
    }
  }
  else {
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
  }
  param_1[3] = param_1[3] + 1;
  uVar1 = 1;
  plVar7 = aplStack_78[0];
LAB_1094b0af8:
  auVar10._8_8_ = uVar1;
  auVar10._0_8_ = plVar7;
  return auVar10;
}



/* Entry: 1094b0b3c; end: 1094b0bdb;  */

void FUN_1094b0b3c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  param_5 = (undefined8 *)*param_5;
  if (*(char *)((long)param_5 + 0x17) < '\0') {
    func_0x000107c3192c(puVar1 + 2,*param_5,param_5[1]);
  }
  else {
    uVar3 = param_5[1];
    uVar2 = *param_5;
    puVar1[4] = param_5[2];
    puVar1[3] = uVar3;
    puVar1[2] = uVar2;
  }
  puVar1[5] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 1094b0bdc; end: 1094b0cab;  */

void FUN_1094b0bdc(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar7 = param_1[1];
  if (uVar7 < param_2) {
LAB_1094b0c24:
    if (param_2 == 0) {
      uVar7 = *param_1;
      *param_1 = 0;
      if (uVar7 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
    else {
      if (param_2 >> 0x3d != 0) {
        func_0x000104c4f740();
        uVar7 = *param_1;
        *param_1 = param_2;
        if (uVar7 != 0) {
          if ((char)param_1[2] == '\x01') {
            func_0x0001094b0100(uVar7 + 0x10);
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(uVar7);
          return;
        }
        return;
      }
      uVar7 = param_2 << 3;
      __Znwm();
      uVar1 = *param_1;
      *param_1 = uVar7;
      if (uVar1 != 0) {
        __ZdlPv();
      }
      uVar7 = 0;
      param_1[1] = param_2;
      do {
        *(undefined8 *)(*param_1 + uVar7 * 8) = 0;
        uVar7 = uVar7 + 1;
      } while (param_2 != uVar7);
      plVar2 = (long *)param_1[2];
      if (plVar2 != (long *)0x0) {
        uVar7 = plVar2[1];
        uVar1 = param_2 - 1;
        if ((param_2 & uVar1) == 0) {
          uVar7 = uVar7 & uVar1;
        }
        else if (param_2 <= uVar7) {
          uVar5 = 0;
          if (param_2 != 0) {
            uVar5 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar5 * param_2;
        }
        *(ulong **)(*param_1 + uVar7 * 8) = param_1 + 2;
        plVar3 = (long *)*plVar2;
        while (plVar3 != (long *)0x0) {
          uVar5 = plVar3[1];
          if ((param_2 & uVar1) == 0) {
            uVar5 = uVar5 & uVar1;
          }
          else if (param_2 <= uVar5) {
            uVar6 = 0;
            if (param_2 != 0) {
              uVar6 = uVar5 / param_2;
            }
            uVar5 = uVar5 - uVar6 * param_2;
          }
          plVar4 = plVar3;
          if (uVar5 != uVar7) {
            uVar6 = *param_1;
            if (*(long *)(uVar6 + uVar5 * 8) == 0) {
              *(long **)(uVar6 + uVar5 * 8) = plVar2;
              uVar7 = uVar5;
            }
            else {
              *plVar2 = *plVar3;
              *plVar3 = **(undefined8 **)(uVar6 + uVar5 * 8);
              **(long **)(uVar6 + uVar5 * 8) = (long)plVar3;
              plVar4 = plVar2;
            }
          }
          plVar2 = plVar4;
          plVar3 = (long *)*plVar4;
        }
      }
    }
    return;
  }
  if (param_2 < uVar7) {
    uVar1 = (ulong)((float)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar1) {
      uVar1 = 1L << (-LZCOUNT(uVar1 - 1) & 0x3fU);
    }
    if (param_2 <= uVar1) {
      param_2 = uVar1;
    }
    if (param_2 < uVar7) goto LAB_1094b0c24;
  }
  return;
}



/* Entry: 1094b0cac; end: 1094b0e2f;  */

void FUN_1094b0cac(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    uVar1 = *param_1;
    *param_1 = 0;
    if (uVar1 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000104c4f740();
      uVar1 = *param_1;
      *param_1 = param_2;
      if (uVar1 != 0) {
        if ((char)param_1[2] == '\x01') {
          func_0x0001094b0100(uVar1 + 0x10);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(uVar1);
        return;
      }
      return;
    }
    uVar1 = param_2 << 3;
    __Znwm();
    uVar2 = *param_1;
    *param_1 = uVar1;
    if (uVar2 != 0) {
      __ZdlPv();
    }
    uVar1 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar1 * 8) = 0;
      uVar1 = uVar1 + 1;
    } while (param_2 != uVar1);
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar1 = plVar3[1];
      uVar2 = param_2 - 1;
      if ((param_2 & uVar2) == 0) {
        uVar1 = uVar1 & uVar2;
      }
      else if (param_2 <= uVar1) {
        uVar6 = 0;
        if (param_2 != 0) {
          uVar6 = uVar1 / param_2;
        }
        uVar1 = uVar1 - uVar6 * param_2;
      }
      *(ulong **)(*param_1 + uVar1 * 8) = param_1 + 2;
      plVar4 = (long *)*plVar3;
      while (plVar4 != (long *)0x0) {
        uVar6 = plVar4[1];
        if ((param_2 & uVar2) == 0) {
          uVar6 = uVar6 & uVar2;
        }
        else if (param_2 <= uVar6) {
          uVar7 = 0;
          if (param_2 != 0) {
            uVar7 = uVar6 / param_2;
          }
          uVar6 = uVar6 - uVar7 * param_2;
        }
        plVar5 = plVar4;
        if (uVar6 != uVar1) {
          uVar7 = *param_1;
          if (*(long *)(uVar7 + uVar6 * 8) == 0) {
            *(long **)(uVar7 + uVar6 * 8) = plVar3;
            uVar1 = uVar6;
          }
          else {
            *plVar3 = *plVar4;
            *plVar4 = **(undefined8 **)(uVar7 + uVar6 * 8);
            **(long **)(uVar7 + uVar6 * 8) = (long)plVar4;
            plVar5 = plVar3;
          }
        }
        plVar3 = plVar5;
        plVar4 = (long *)*plVar5;
      }
    }
  }
  return;
}



/* Entry: 1094b0e30; end: 1094b0ea3;  */

void FUN_1094b0e30(long param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_2 + 0x40);
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  else if (plVar1 == (long *)(param_2 + 0x28)) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1 + 0x28);
    *(long *)(param_1 + 0x40) = param_1 + 0x28;
  }
  else {
    *(long **)(param_1 + 0x40) = plVar1;
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x48) = 0;
  return;
}



/* Entry: 1094b0ea4; end: 1094b0ecb;  */

long * FUN_1094b0ea4(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  FUN_1094b0ff4(param_1 + 0x48);
  plVar1 = (long *)(param_1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x40);
  if (plVar2 == plVar1) {
    lVar3 = 0x18;
  }
  else {
    if (plVar2 == (long *)0x0) {
      return plVar1;
    }
    lVar3 = 0x20;
  }
  (**(code **)(*plVar2 + lVar3))();
  return plVar1;
}



/* Entry: 1094b0ecc; end: 1094b0ff3;  */

void FUN_1094b0ecc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_38;
  long *plStack_30;
  undefined4 uStack_24;
  
  lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  lVar5 = *(long *)(lVar6 + 0x48);
  if (lVar5 != 0) {
    if ((*(byte *)(lVar5 + 0x88) & 1) == 0) {
      uStack_38 = 0;
      lVar5 = *(long *)(lVar5 + 0x10);
      __ZNSt13exception_ptrD1Ev(&uStack_38);
      if (lVar5 == 0) {
        uStack_24 = 0;
        (**(code **)(**(long **)(lVar6 + 0x40) + 0x28))
                  (&uStack_38,*(long **)(lVar6 + 0x40),&uStack_24);
        if (*(long *)(lVar6 + 0x48) != 0) {
          FUN_1094b15e4(*(long *)(lVar6 + 0x48),&uStack_38);
          if (plStack_30 != (long *)0x0) {
            plVar1 = plStack_30 + 1;
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
              (**(code **)(*plStack_30 + 0x10))(plStack_30);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_30);
            }
          }
          return;
        }
        goto LAB_1094b0f8c;
      }
    }
    FUN_1094362d4(2);
  }
  FUN_1094362d4(3);
LAB_1094b0f8c:
  FUN_1094362d4(3);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1094b0f98);
  (*pcVar4)();
}



/* Entry: 1094b0ff4; end: 1094b10c3;  */

undefined8 * FUN_1094b0ff4(undefined8 *param_1)

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
        FUN_1094a38bc(auStack_40,auStack_60);
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



/* Entry: 1094b10c4; end: 1094b110f;  */

long * FUN_1094b10c4(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x18;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x20;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 1094b1110; end: 1094b1197;  */

undefined8 * FUN_1094b1110(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af7078;
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  func_0x0001094b0898(param_1 + 1);
  return param_1;
}



/* Entry: 1094b1198; end: 1094b11cb;  */

void FUN_1094b1198(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_110af7078;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  param_2[4] = uVar2;
  param_2[3] = uVar1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 1094b11cc; end: 1094b1233;  */

long FUN_1094b11cc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x2f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x18));
  }
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



/* Entry: 1094b1234; end: 1094b12eb;  */

void FUN_1094b1234(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_30;
  long *plStack_28;
  
  FUN_1094b12ec(&uStack_30,param_2 + 0x18);
  uVar5 = *param_1;
  plStack_28 = *(long **)(param_2 + 0x10);
  uStack_30 = *(undefined8 *)(param_2 + 8);
  if (*(long *)(param_2 + 0x10) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x10) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_1094c6180(uVar5,&uStack_30);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 1094b12ec; end: 1094b1343;  */

void FUN_1094b12ec(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x60;
  __Znwm();
  FUN_1094b1344();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 1094b1344; end: 1094b13bf;  */

undefined8 * FUN_1094b1344(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110af73b8;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 3,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[5] = param_2[2];
    param_1[4] = uVar2;
    param_1[3] = uVar1;
  }
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  return param_1;
}



/* Entry: 1094b13c0; end: 1094b13cf;  */

void FUN_1094b13c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af73b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1094b13d0; end: 1094b13ef;  */

void FUN_1094b13d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af73b8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1094b13f0; end: 1094b13fb;  */

undefined8 * FUN_1094b13f0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  func_0x0001094ae194(param_1 + 0x48);
  func_0x0001094b1458(param_1 + 0x38);
  FUN_10938cda4(param_1 + 0x30,0);
  if (*(char *)(param_1 + 0x2f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x18));
  }
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 1094b13fc; end: 1094b1583;  */

undefined8 * FUN_1094b13fc(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[8];
  param_1[8] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  func_0x0001094ae194(param_1 + 6);
  func_0x0001094b1458(param_1 + 4);
  FUN_10938cda4(param_1 + 3,0);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 1094b1584; end: 1094b15e3;  */

void FUN_1094b1584(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_68;
  undefined1 auStack_28 [8];
  
  if (param_1 != 0) {
    __ZNSt13exception_ptrC1ERKS_(auStack_28);
    __ZNSt3__117__assoc_sub_state13set_exceptionESt13exception_ptr(param_1,auStack_28);
    __ZNSt13exception_ptrD1Ev(auStack_28);
    return;
  }
  lVar2 = 3;
  FUN_1094362d4();
  __ZNSt13exception_ptrD1Ev(auStack_28);
  __Unwind_Resume();
  __ZNSt3__15mutex4lockEv(lVar2 + 0x18);
  if ((*(byte *)(lVar2 + 0x88) & 1) == 0) {
    uStack_68 = 0;
    lVar3 = *(long *)(lVar2 + 0x10);
    __ZNSt13exception_ptrD1Ev(&uStack_68);
    if (lVar3 == 0) {
      uVar4 = *param_2;
      *(undefined8 *)(lVar2 + 0x98) = param_2[1];
      *(undefined8 *)(lVar2 + 0x90) = uVar4;
      *param_2 = 0;
      param_2[1] = 0;
      *(uint *)(lVar2 + 0x88) = *(uint *)(lVar2 + 0x88) | 5;
      __ZNSt3__118condition_variable10notify_allEv(lVar2 + 0x58);
      __ZNSt3__15mutex6unlockEv(lVar2 + 0x18);
      return;
    }
  }
  FUN_1094362d4(2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1094b1670);
  (*pcVar1)();
}



/* Entry: 1094b15e4; end: 1094b1683;  */

void FUN_1094b15e4(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_38;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
    uStack_38 = 0;
    lVar2 = *(long *)(param_1 + 0x10);
    __ZNSt13exception_ptrD1Ev(&uStack_38);
    if (lVar2 == 0) {
      uVar3 = *param_2;
      *(undefined8 *)(param_1 + 0x98) = param_2[1];
      *(undefined8 *)(param_1 + 0x90) = uVar3;
      *param_2 = 0;
      param_2[1] = 0;
      *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 5;
      __ZNSt3__118condition_variable10notify_allEv(param_1 + 0x58);
      __ZNSt3__15mutex6unlockEv(param_1 + 0x18);
      return;
    }
  }
  FUN_1094362d4(2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1094b1670);
  (*pcVar1)();
}



/* Entry: 1094b1684; end: 1094b1a87;  */

long * FUN_1094b1684(long *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *unaff_x25;
  ulong uVar14;
  
  plVar8 = param_1;
  func_0x000107c31944();
  plVar13 = (long *)param_1[1];
  if (plVar13 != (long *)0x0) {
    uVar14 = (long)plVar13 - 1;
    if (((ulong)plVar13 & uVar14) == 0) {
      unaff_x25 = (long *)(uVar14 & (ulong)plVar8);
    }
    else {
      unaff_x25 = plVar8;
      if (plVar13 <= plVar8) {
        uVar1 = 0;
        if (plVar13 != (long *)0x0) {
          uVar1 = (ulong)plVar8 / (ulong)plVar13;
        }
        unaff_x25 = (long *)((long)plVar8 - uVar1 * (long)plVar13);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        plVar6 = (long *)plVar5[1];
        if (plVar6 == plVar8) {
          plVar6 = param_1;
          func_0x000104c4fbc4(param_1,plVar5 + 2,param_2);
          if (((ulong)plVar6 & 1) != 0) {
            return plVar5;
          }
        }
        else {
          if (((ulong)plVar13 & uVar14) == 0) {
            plVar6 = (long *)((ulong)plVar6 & uVar14);
          }
          else if (plVar13 <= plVar6) {
            uVar1 = 0;
            if (plVar13 != (long *)0x0) {
              uVar1 = (ulong)plVar6 / (ulong)plVar13;
            }
            plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar13);
          }
          if (plVar6 != unaff_x25) break;
        }
      }
    }
  }
  plVar5 = (long *)0x38;
  __Znwm();
  *plVar5 = 0;
  plVar5[1] = (long)plVar8;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar5 + 2,*param_3,param_3[1]);
  }
  else {
    lVar3 = *param_3;
    plVar5[3] = param_3[1];
    plVar5[2] = lVar3;
    plVar5[4] = param_3[2];
  }
  plVar5[5] = 0;
  plVar5[6] = 0;
  if ((plVar13 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar13)) goto LAB_1094b1998;
  uVar14 = 1;
  if ((long *)0x2 < plVar13) {
    uVar14 = (ulong)(((ulong)plVar13 & (long)plVar13 - 1U) != 0);
  }
  plVar6 = (long *)(uVar14 | (long)plVar13 << 1);
  plVar13 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar6 <= plVar13) {
    plVar6 = plVar13;
  }
  if ((long)plVar6 - 1U == 0) {
    plVar6 = (long *)0x2;
  }
  else if (((ulong)plVar6 & (long)plVar6 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar13 = (long *)param_1[1];
  if (plVar13 < plVar6) {
LAB_1094b1820:
    if ((ulong)plVar6 >> 0x3d != 0) {
      func_0x000104c4f740();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1094b1a70);
      (*pcVar2)();
    }
    lVar3 = (long)plVar6 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    plVar13 = (long *)0x0;
    param_1[1] = (long)plVar6;
    do {
      *(undefined8 *)(*param_1 + (long)plVar13 * 8) = 0;
      plVar13 = (long *)((long)plVar13 + 1);
    } while (plVar6 != plVar13);
    plVar7 = (long *)param_1[2];
    plVar13 = plVar6;
    if (plVar7 != (long *)0x0) {
      plVar9 = (long *)plVar7[1];
      uVar14 = (long)plVar6 - 1;
      if (((ulong)plVar6 & uVar14) == 0) {
        plVar9 = (long *)((ulong)plVar9 & uVar14);
      }
      else if (plVar6 <= plVar9) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar9 / (ulong)plVar6;
        }
        plVar9 = (long *)((long)plVar9 - uVar1 * (long)plVar6);
      }
      *(long **)(*param_1 + (long)plVar9 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar7;
      while (plVar10 != (long *)0x0) {
        plVar12 = (long *)plVar10[1];
        if (((ulong)plVar6 & uVar14) == 0) {
          plVar12 = (long *)((ulong)plVar12 & uVar14);
        }
        else if (plVar6 <= plVar12) {
          uVar1 = 0;
          if (plVar6 != (long *)0x0) {
            uVar1 = (ulong)plVar12 / (ulong)plVar6;
          }
          plVar12 = (long *)((long)plVar12 - uVar1 * (long)plVar6);
        }
        plVar11 = plVar10;
        if (plVar12 != plVar9) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + (long)plVar12 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar12 * 8) = plVar7;
            plVar9 = plVar12;
          }
          else {
            *plVar7 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar3 + (long)plVar12 * 8);
            **(long **)(lVar3 + (long)plVar12 * 8) = (long)plVar10;
            plVar11 = plVar7;
          }
        }
        plVar7 = plVar11;
        plVar10 = (long *)*plVar11;
      }
    }
  }
  else if (plVar6 < plVar13) {
    plVar7 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar13 < (long *)0x3) || (((ulong)plVar13 & (long)plVar13 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar7) {
      plVar7 = (long *)(1L << (-LZCOUNT((long)plVar7 + -1) & 0x3fU));
    }
    if (plVar6 <= plVar7) {
      plVar6 = plVar7;
    }
    if (plVar6 < plVar13) {
      if (plVar6 != (long *)0x0) goto LAB_1094b1820;
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      plVar13 = (long *)0x0;
    }
    else {
      plVar13 = (long *)param_1[1];
    }
  }
  if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
    unaff_x25 = (long *)((long)plVar13 - 1U & (ulong)plVar8);
  }
  else {
    unaff_x25 = plVar8;
    if (plVar13 <= plVar8) {
      uVar14 = 0;
      if (plVar13 != (long *)0x0) {
        uVar14 = (ulong)plVar8 / (ulong)plVar13;
      }
      unaff_x25 = (long *)((long)plVar8 - uVar14 * (long)plVar13);
    }
  }
LAB_1094b1998:
  lVar3 = *param_1;
  plVar8 = *(long **)(lVar3 + (long)unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar5 = *plVar8;
    *plVar8 = (long)plVar5;
    *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar8;
    if (*plVar5 != 0) {
      plVar8 = *(long **)(*plVar5 + 8);
      if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
        plVar8 = (long *)((ulong)plVar8 & (long)plVar13 - 1U);
      }
      else if (plVar13 <= plVar8) {
        uVar14 = 0;
        if (plVar13 != (long *)0x0) {
          uVar14 = (ulong)plVar8 / (ulong)plVar13;
        }
        plVar8 = (long *)((long)plVar8 - uVar14 * (long)plVar13);
      }
      *(long **)(*param_1 + (long)plVar8 * 8) = plVar5;
    }
  }
  else {
    *plVar5 = *plVar8;
    *plVar8 = (long)plVar5;
  }
  param_1[3] = param_1[3] + 1;
  return plVar5;
}



/* Entry: 1094b1a88; end: 1094b1acf;  */

void FUN_1094b1a88(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001094b02b4(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1094b1ad0; end: 1094b1ed3;  */

long * FUN_1094b1ad0(long *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *unaff_x25;
  ulong uVar14;
  
  plVar8 = param_1;
  func_0x000107c31944();
  plVar13 = (long *)param_1[1];
  if (plVar13 != (long *)0x0) {
    uVar14 = (long)plVar13 - 1;
    if (((ulong)plVar13 & uVar14) == 0) {
      unaff_x25 = (long *)(uVar14 & (ulong)plVar8);
    }
    else {
      unaff_x25 = plVar8;
      if (plVar13 <= plVar8) {
        uVar1 = 0;
        if (plVar13 != (long *)0x0) {
          uVar1 = (ulong)plVar8 / (ulong)plVar13;
        }
        unaff_x25 = (long *)((long)plVar8 - uVar1 * (long)plVar13);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        plVar6 = (long *)plVar5[1];
        if (plVar6 == plVar8) {
          plVar6 = param_1;
          func_0x000104c4fbc4(param_1,plVar5 + 2,param_2);
          if (((ulong)plVar6 & 1) != 0) {
            return plVar5;
          }
        }
        else {
          if (((ulong)plVar13 & uVar14) == 0) {
            plVar6 = (long *)((ulong)plVar6 & uVar14);
          }
          else if (plVar13 <= plVar6) {
            uVar1 = 0;
            if (plVar13 != (long *)0x0) {
              uVar1 = (ulong)plVar6 / (ulong)plVar13;
            }
            plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar13);
          }
          if (plVar6 != unaff_x25) break;
        }
      }
    }
  }
  plVar5 = (long *)0x30;
  __Znwm();
  *plVar5 = 0;
  plVar5[1] = (long)plVar8;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar5 + 2,*param_3,param_3[1]);
  }
  else {
    lVar3 = *param_3;
    plVar5[3] = param_3[1];
    plVar5[2] = lVar3;
    plVar5[4] = param_3[2];
  }
  plVar5[5] = 0;
  if ((plVar13 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar13)) goto LAB_1094b1de4;
  uVar14 = 1;
  if ((long *)0x2 < plVar13) {
    uVar14 = (ulong)(((ulong)plVar13 & (long)plVar13 - 1U) != 0);
  }
  plVar6 = (long *)(uVar14 | (long)plVar13 << 1);
  plVar13 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar6 <= plVar13) {
    plVar6 = plVar13;
  }
  if ((long)plVar6 - 1U == 0) {
    plVar6 = (long *)0x2;
  }
  else if (((ulong)plVar6 & (long)plVar6 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar13 = (long *)param_1[1];
  if (plVar13 < plVar6) {
LAB_1094b1c6c:
    if ((ulong)plVar6 >> 0x3d != 0) {
      func_0x000104c4f740();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1094b1ebc);
      (*pcVar2)();
    }
    lVar3 = (long)plVar6 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    plVar13 = (long *)0x0;
    param_1[1] = (long)plVar6;
    do {
      *(undefined8 *)(*param_1 + (long)plVar13 * 8) = 0;
      plVar13 = (long *)((long)plVar13 + 1);
    } while (plVar6 != plVar13);
    plVar7 = (long *)param_1[2];
    plVar13 = plVar6;
    if (plVar7 != (long *)0x0) {
      plVar9 = (long *)plVar7[1];
      uVar14 = (long)plVar6 - 1;
      if (((ulong)plVar6 & uVar14) == 0) {
        plVar9 = (long *)((ulong)plVar9 & uVar14);
      }
      else if (plVar6 <= plVar9) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar9 / (ulong)plVar6;
        }
        plVar9 = (long *)((long)plVar9 - uVar1 * (long)plVar6);
      }
      *(long **)(*param_1 + (long)plVar9 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar7;
      while (plVar10 != (long *)0x0) {
        plVar12 = (long *)plVar10[1];
        if (((ulong)plVar6 & uVar14) == 0) {
          plVar12 = (long *)((ulong)plVar12 & uVar14);
        }
        else if (plVar6 <= plVar12) {
          uVar1 = 0;
          if (plVar6 != (long *)0x0) {
            uVar1 = (ulong)plVar12 / (ulong)plVar6;
          }
          plVar12 = (long *)((long)plVar12 - uVar1 * (long)plVar6);
        }
        plVar11 = plVar10;
        if (plVar12 != plVar9) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + (long)plVar12 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar12 * 8) = plVar7;
            plVar9 = plVar12;
          }
          else {
            *plVar7 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar3 + (long)plVar12 * 8);
            **(long **)(lVar3 + (long)plVar12 * 8) = (long)plVar10;
            plVar11 = plVar7;
          }
        }
        plVar7 = plVar11;
        plVar10 = (long *)*plVar11;
      }
    }
  }
  else if (plVar6 < plVar13) {
    plVar7 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar13 < (long *)0x3) || (((ulong)plVar13 & (long)plVar13 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar7) {
      plVar7 = (long *)(1L << (-LZCOUNT((long)plVar7 + -1) & 0x3fU));
    }
    if (plVar6 <= plVar7) {
      plVar6 = plVar7;
    }
    if (plVar6 < plVar13) {
      if (plVar6 != (long *)0x0) goto LAB_1094b1c6c;
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      plVar13 = (long *)0x0;
    }
    else {
      plVar13 = (long *)param_1[1];
    }
  }
  if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
    unaff_x25 = (long *)((long)plVar13 - 1U & (ulong)plVar8);
  }
  else {
    unaff_x25 = plVar8;
    if (plVar13 <= plVar8) {
      uVar14 = 0;
      if (plVar13 != (long *)0x0) {
        uVar14 = (ulong)plVar8 / (ulong)plVar13;
      }
      unaff_x25 = (long *)((long)plVar8 - uVar14 * (long)plVar13);
    }
  }
LAB_1094b1de4:
  lVar3 = *param_1;
  plVar8 = *(long **)(lVar3 + (long)unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar5 = *plVar8;
    *plVar8 = (long)plVar5;
    *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar8;
    if (*plVar5 != 0) {
      plVar8 = *(long **)(*plVar5 + 8);
      if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
        plVar8 = (long *)((ulong)plVar8 & (long)plVar13 - 1U);
      }
      else if (plVar13 <= plVar8) {
        uVar14 = 0;
        if (plVar13 != (long *)0x0) {
          uVar14 = (ulong)plVar8 / (ulong)plVar13;
        }
        plVar8 = (long *)((long)plVar8 - uVar14 * (long)plVar13);
      }
      *(long **)(*param_1 + (long)plVar8 * 8) = plVar5;
    }
  }
  else {
    *plVar5 = *plVar8;
    *plVar8 = (long)plVar5;
  }
  param_1[3] = param_1[3] + 1;
  return plVar5;
}



/* Entry: 1094b1ed4; end: 1094b1f1b;  */

void FUN_1094b1ed4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001094b019c(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1094b1f1c; end: 1094b1fff;  */

long FUN_1094b1f1c(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = param_1;
  func_0x000107c31944();
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
          func_0x000104c4fbc4(param_1,plVar3 + 2,param_2);
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



/* Entry: 1094b2000; end: 1094b207b;  */

void FUN_1094b2000(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_1094b0368(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1094b207c; end: 1094b215f;  */

long FUN_1094b207c(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = param_1;
  func_0x000107c31944();
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
        if (plVar4 == plVar2) {
          plVar4 = param_1;
          func_0x000104c4fbc4(param_1,plVar3 + 2,param_2);
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



/* Entry: 1094b2160; end: 1094b21b7;  */

undefined8 FUN_1094b2160(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long alStack_38 [2];
  char cStack_28;
  
  uVar2 = *param_2;
  FUN_1094b21b8(alStack_38);
  lVar1 = alStack_38[0];
  alStack_38[0] = 0;
  if (lVar1 != 0) {
    if (cStack_28 == '\x01') {
      func_0x0001094b0100(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return uVar2;
}



/* Entry: 1094b21b8; end: 1094b2377;  */

void FUN_1094b21b8(undefined8 *param_1,long *param_2,long *param_3)

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
    if (uVar8 == uVar3) goto LAB_1094b226c;
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
    if (uVar8 == uVar3) goto LAB_1094b226c;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_1094b226c:
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



/* Entry: 1094b2378; end: 1094b23bf;  */

undefined8 FUN_1094b2378(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_38;
  undefined1 auStack_30 [16];
  
  uVar2 = *param_2;
  FUN_1094b23c0(&lStack_38);
  lVar1 = lStack_38;
  lStack_38 = 0;
  if (lVar1 != 0) {
    func_0x0001094aed20(auStack_30);
  }
  return uVar2;
}



/* Entry: 1094b23c0; end: 1094b24df;  */

void FUN_1094b23c0(undefined8 *param_1,long *param_2,long *param_3)

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
    if (uVar8 == uVar3) goto LAB_1094b2474;
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
    if (uVar8 == uVar3) goto LAB_1094b2474;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_1094b2474:
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



/* Entry: 1094b24e0; end: 1094b257f;  */

void FUN_1094b24e0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001094b0218(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1094b2580; end: 1094b2983;  */

long * FUN_1094b2580(long *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *unaff_x25;
  ulong uVar14;
  
  plVar8 = param_1;
  func_0x000107c31944();
  plVar13 = (long *)param_1[1];
  if (plVar13 != (long *)0x0) {
    uVar14 = (long)plVar13 - 1;
    if (((ulong)plVar13 & uVar14) == 0) {
      unaff_x25 = (long *)(uVar14 & (ulong)plVar8);
    }
    else {
      unaff_x25 = plVar8;
      if (plVar13 <= plVar8) {
        uVar1 = 0;
        if (plVar13 != (long *)0x0) {
          uVar1 = (ulong)plVar8 / (ulong)plVar13;
        }
        unaff_x25 = (long *)((long)plVar8 - uVar1 * (long)plVar13);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        plVar6 = (long *)plVar5[1];
        if (plVar6 == plVar8) {
          plVar6 = param_1;
          func_0x000104c4fbc4(param_1,plVar5 + 2,param_2);
          if (((ulong)plVar6 & 1) != 0) {
            return plVar5;
          }
        }
        else {
          if (((ulong)plVar13 & uVar14) == 0) {
            plVar6 = (long *)((ulong)plVar6 & uVar14);
          }
          else if (plVar13 <= plVar6) {
            uVar1 = 0;
            if (plVar13 != (long *)0x0) {
              uVar1 = (ulong)plVar6 / (ulong)plVar13;
            }
            plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar13);
          }
          if (plVar6 != unaff_x25) break;
        }
      }
    }
  }
  plVar5 = (long *)0x30;
  __Znwm();
  *plVar5 = 0;
  plVar5[1] = (long)plVar8;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar5 + 2,*param_3,param_3[1]);
  }
  else {
    lVar3 = *param_3;
    plVar5[3] = param_3[1];
    plVar5[2] = lVar3;
    plVar5[4] = param_3[2];
  }
  plVar5[5] = 0;
  if ((plVar13 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar13)) goto LAB_1094b2894;
  uVar14 = 1;
  if ((long *)0x2 < plVar13) {
    uVar14 = (ulong)(((ulong)plVar13 & (long)plVar13 - 1U) != 0);
  }
  plVar6 = (long *)(uVar14 | (long)plVar13 << 1);
  plVar13 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar6 <= plVar13) {
    plVar6 = plVar13;
  }
  if ((long)plVar6 - 1U == 0) {
    plVar6 = (long *)0x2;
  }
  else if (((ulong)plVar6 & (long)plVar6 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar13 = (long *)param_1[1];
  if (plVar13 < plVar6) {
LAB_1094b271c:
    if ((ulong)plVar6 >> 0x3d != 0) {
      func_0x000104c4f740();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1094b296c);
      (*pcVar2)();
    }
    lVar3 = (long)plVar6 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    plVar13 = (long *)0x0;
    param_1[1] = (long)plVar6;
    do {
      *(undefined8 *)(*param_1 + (long)plVar13 * 8) = 0;
      plVar13 = (long *)((long)plVar13 + 1);
    } while (plVar6 != plVar13);
    plVar7 = (long *)param_1[2];
    plVar13 = plVar6;
    if (plVar7 != (long *)0x0) {
      plVar9 = (long *)plVar7[1];
      uVar14 = (long)plVar6 - 1;
      if (((ulong)plVar6 & uVar14) == 0) {
        plVar9 = (long *)((ulong)plVar9 & uVar14);
      }
      else if (plVar6 <= plVar9) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar9 / (ulong)plVar6;
        }
        plVar9 = (long *)((long)plVar9 - uVar1 * (long)plVar6);
      }
      *(long **)(*param_1 + (long)plVar9 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar7;
      while (plVar10 != (long *)0x0) {
        plVar12 = (long *)plVar10[1];
        if (((ulong)plVar6 & uVar14) == 0) {
          plVar12 = (long *)((ulong)plVar12 & uVar14);
        }
        else if (plVar6 <= plVar12) {
          uVar1 = 0;
          if (plVar6 != (long *)0x0) {
            uVar1 = (ulong)plVar12 / (ulong)plVar6;
          }
          plVar12 = (long *)((long)plVar12 - uVar1 * (long)plVar6);
        }
        plVar11 = plVar10;
        if (plVar12 != plVar9) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + (long)plVar12 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar12 * 8) = plVar7;
            plVar9 = plVar12;
          }
          else {
            *plVar7 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar3 + (long)plVar12 * 8);
            **(long **)(lVar3 + (long)plVar12 * 8) = (long)plVar10;
            plVar11 = plVar7;
          }
        }
        plVar7 = plVar11;
        plVar10 = (long *)*plVar11;
      }
    }
  }
  else if (plVar6 < plVar13) {
    plVar7 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar13 < (long *)0x3) || (((ulong)plVar13 & (long)plVar13 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar7) {
      plVar7 = (long *)(1L << (-LZCOUNT((long)plVar7 + -1) & 0x3fU));
    }
    if (plVar6 <= plVar7) {
      plVar6 = plVar7;
    }
    if (plVar6 < plVar13) {
      if (plVar6 != (long *)0x0) goto LAB_1094b271c;
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      plVar13 = (long *)0x0;
    }
    else {
      plVar13 = (long *)param_1[1];
    }
  }
  if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
    unaff_x25 = (long *)((long)plVar13 - 1U & (ulong)plVar8);
  }
  else {
    unaff_x25 = plVar8;
    if (plVar13 <= plVar8) {
      uVar14 = 0;
      if (plVar13 != (long *)0x0) {
        uVar14 = (ulong)plVar8 / (ulong)plVar13;
      }
      unaff_x25 = (long *)((long)plVar8 - uVar14 * (long)plVar13);
    }
  }
LAB_1094b2894:
  lVar3 = *param_1;
  plVar8 = *(long **)(lVar3 + (long)unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar5 = *plVar8;
    *plVar8 = (long)plVar5;
    *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar8;
    if (*plVar5 != 0) {
      plVar8 = *(long **)(*plVar5 + 8);
      if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
        plVar8 = (long *)((ulong)plVar8 & (long)plVar13 - 1U);
      }
      else if (plVar13 <= plVar8) {
        uVar14 = 0;
        if (plVar13 != (long *)0x0) {
          uVar14 = (ulong)plVar8 / (ulong)plVar13;
        }
        plVar8 = (long *)((long)plVar8 - uVar14 * (long)plVar13);
      }
      *(long **)(*param_1 + (long)plVar8 * 8) = plVar5;
    }
  }
  else {
    *plVar5 = *plVar8;
    *plVar8 = (long)plVar5;
  }
  param_1[3] = param_1[3] + 1;
  return plVar5;
}



/* Entry: 1094b2984; end: 1094b29f7;  */

void FUN_1094b2984(long param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_2 + 0x40);
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  else if (plVar1 == (long *)(param_2 + 0x28)) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1 + 0x28);
    *(long *)(param_1 + 0x40) = param_1 + 0x28;
  }
  else {
    *(long **)(param_1 + 0x40) = plVar1;
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x48) = 0;
  return;
}



/* Entry: 1094b29f8; end: 1094b2a1f;  */

long * FUN_1094b29f8(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  FUN_1094b2ba8(param_1 + 0x48);
  plVar1 = (long *)(param_1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x40);
  if (plVar2 == plVar1) {
    lVar3 = 0x18;
  }
  else {
    if (plVar2 == (long *)0x0) {
      return plVar1;
    }
    lVar3 = 0x20;
  }
  (**(code **)(*plVar2 + lVar3))();
  return plVar1;
}



/* Entry: 1094b2a20; end: 1094b2ba7;  */

void FUN_1094b2a20(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  lVar2 = *(long *)(lVar3 + 0x48);
  if (lVar2 == 0) {
    FUN_1094362d4(3);
LAB_1094b2b24:
    FUN_1094362d4(3);
    goto LAB_1094b2b2c;
  }
  if ((*(byte *)(lVar2 + 0x88) & 1) == 0) {
    uStack_50 = 0;
    lVar2 = *(long *)(lVar2 + 0x10);
    __ZNSt13exception_ptrD1Ev(&uStack_50);
    if (lVar2 != 0) goto LAB_1094b2b04;
    puStack_38 = (undefined8 *)((ulong)puStack_38 & 0xffffffff00000000);
    (**(code **)(**(long **)(lVar3 + 0x40) + 0x28))(&uStack_50,*(long **)(lVar3 + 0x40),&puStack_38)
    ;
    lVar2 = *(long *)(lVar3 + 0x48);
    if (lVar2 == 0) goto LAB_1094b2b24;
    __ZNSt3__15mutex4lockEv(lVar2 + 0x18);
    if ((*(byte *)(lVar2 + 0x88) & 1) == 0) {
      puStack_38 = (undefined8 *)0x0;
      lVar3 = *(long *)(lVar2 + 0x10);
      __ZNSt13exception_ptrD1Ev(&puStack_38);
      if (lVar3 == 0) {
        *(undefined8 *)(lVar2 + 0x98) = uStack_48;
        *(undefined8 *)(lVar2 + 0x90) = uStack_50;
        *(undefined8 *)(lVar2 + 0xa0) = uStack_40;
        uStack_48 = 0;
        uStack_40 = 0;
        uStack_50 = 0;
        *(uint *)(lVar2 + 0x88) = *(uint *)(lVar2 + 0x88) | 5;
        __ZNSt3__118condition_variable10notify_allEv(lVar2 + 0x58);
        __ZNSt3__15mutex6unlockEv(lVar2 + 0x18);
        puStack_38 = &uStack_50;
        FUN_1093702c4(&puStack_38);
        return;
      }
    }
  }
  else {
LAB_1094b2b04:
    FUN_1094362d4(2);
  }
  FUN_1094362d4(2);
LAB_1094b2b2c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1094b2b30);
  (*pcVar1)();
}



/* Entry: 1094b2ba8; end: 1094b2c77;  */

undefined8 * FUN_1094b2ba8(undefined8 *param_1)

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
        FUN_1094a38bc(auStack_40,auStack_60);
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



/* Entry: 1094b2c78; end: 1094b2cc3;  */

long * FUN_1094b2c78(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x18;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x20;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 1094b2cc4; end: 1094b2d8f;  */

undefined8 * FUN_1094b2cc4(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110af7158;
  if (param_1[0xf] != 0) {
    piVar1 = (int *)(param_1[0xf] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 8);
    }
  }
  param_1[0xf] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  if (0 < *(int *)((long)param_1 + 0x44)) {
    lVar5 = 0;
    lVar7 = param_1[0x10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x44));
  }
  puVar6 = (undefined8 *)param_1[0x11];
  if (puVar6 != param_1 + 0x12 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    __ZdlPv(param_1[5]);
  }
  func_0x0001094b0898(param_1 + 3);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1094b2d90; end: 1094b2e5b;  */

void FUN_1094b2d90(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110af7158;
  if (param_1[0xf] != 0) {
    piVar1 = (int *)(param_1[0xf] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 8);
    }
  }
  param_1[0xf] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  if (0 < *(int *)((long)param_1 + 0x44)) {
    lVar5 = 0;
    lVar7 = param_1[0x10];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x44));
  }
  puVar6 = (undefined8 *)param_1[0x11];
  if (puVar6 != param_1 + 0x12 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    __ZdlPv(param_1[5]);
  }
  func_0x0001094b0898(param_1 + 3);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1094b2e5c; end: 1094b2f8f;  */

void FUN_1094b2e5c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int *piVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  *param_2 = &PTR_FUN_110af7158;
  uVar8 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar8;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar5 = *(long *)(param_1 + 0x20);
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = uVar8;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (*(char *)(param_1 + 0x3f) < '\0') {
    func_0x000107c3192c(param_2 + 5,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30))
    ;
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    param_2[7] = *(undefined8 *)(param_1 + 0x38);
    param_2[6] = uVar9;
    param_2[5] = uVar8;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  uVar10 = *(undefined8 *)(param_1 + 0x50);
  param_2[0xb] = *(undefined8 *)(param_1 + 0x58);
  param_2[10] = uVar10;
  uVar10 = *(undefined8 *)(param_1 + 0x60);
  param_2[0xd] = *(undefined8 *)(param_1 + 0x68);
  param_2[0xc] = uVar10;
  uVar11 = *(undefined8 *)(param_1 + 0x78);
  uVar10 = *(undefined8 *)(param_1 + 0x70);
  param_2[0x12] = 0;
  param_2[9] = uVar9;
  param_2[8] = uVar8;
  param_2[0x13] = 0;
  piVar6 = (int *)(param_1 + 0x44);
  iVar2 = *piVar6;
  param_2[0xf] = uVar11;
  param_2[0xe] = uVar10;
  param_2[0x10] = param_2 + 9;
  param_2[0x11] = param_2 + 0x12;
  puVar7 = *(undefined8 **)(param_1 + 0x88);
  if (iVar2 < 3) {
    param_2[0x12] = *puVar7;
    param_2[0x13] = puVar7[1];
  }
  else {
    param_2[0x10] = *(undefined8 *)(param_1 + 0x80);
    param_2[0x11] = puVar7;
    *(long *)(param_1 + 0x80) = param_1 + 0x48;
    *(long *)(param_1 + 0x88) = param_1 + 0x90;
  }
  *(undefined4 *)(param_1 + 0x40) = 0x42ff0000;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  piVar6[0] = 0;
  piVar6[1] = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  return;
}



/* Entry: 1094b2f90; end: 1094b3053;  */

void FUN_1094b2f90(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x78) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x78) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x40);
    }
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (0 < *(int *)(param_1 + 0x44)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x80);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x44));
  }
  lVar5 = *(long *)(param_1 + 0x88);
  if (lVar5 != param_1 + 0x90 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(char *)(param_1 + 0x3f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x28));
  }
  func_0x0001094b0898(param_1 + 0x18);
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 1094b3054; end: 1094b3113;  */

void FUN_1094b3054(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x78) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x78) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x40);
    }
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (0 < *(int *)(param_1 + 0x44)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x80);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x44));
  }
  lVar5 = *(long *)(param_1 + 0x88);
  if (lVar5 != param_1 + 0x90 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(char *)(param_1 + 0x3f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x28));
  }
  func_0x0001094b0898(param_1 + 0x18);
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1094b3114; end: 1094b3413;  */

void FUN_1094b3114(long *param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  undefined4 uStack_128;
  int iStack_124;
  undefined1 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  undefined1 auStack_d8 [16];
  undefined4 auStack_c8 [2];
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [4];
  int iStack_ac;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  long lStack_70;
  undefined1 *puStack_68;
  undefined1 auStack_60 [16];
  long lStack_50;
  long *plStack_48;
  
  plVar5 = *(long **)(param_2 + 0x10);
  if ((plVar5 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar5 != (long *)0x0))
  {
    lVar8 = *(long *)(param_2 + 8);
    lStack_50 = lVar8;
    plStack_48 = plVar5;
    if (lVar8 == 0) {
      plVar1 = plVar5 + 1;
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 != 0) goto LAB_1094b3394;
    }
    else {
      __ZNSt3__15mutex4lockEv(lVar8 + 0x78);
      lVar6 = lVar8 + 0x1a0;
      FUN_1094afdb4(lVar6,param_2 + 0x28);
      if (lVar6 == 0) {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        __ZNSt3__15mutex6unlockEv(lVar8 + 0x78);
        plVar1 = plVar5 + 1;
        do {
          lVar6 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      else {
        lVar6 = lVar8 + 0x1a0;
        FUN_1094b1ad0(lVar6,param_2 + 0x28,param_2 + 0x28);
        piVar7 = *(int **)(*(long *)(param_2 + 0x18) + 0x120);
        FUN_1094af248(auStack_b0,param_2 + 0x40,(long)*piVar7,lVar6 + 0x28,piVar7[0xe]);
        __ZNSt3__15mutex6unlockEv(lVar8 + 0x78);
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        uStack_118 = 0;
        uStack_128 = 0x1010000;
        auStack_c8[0] = 0x2050000;
        uStack_b8 = 0;
        puStack_120 = auStack_b0;
        plStack_c0 = param_1;
        FUN_109a3dcec(&uStack_128,auStack_c8);
        if (*(int *)(*(long *)(*(long *)(param_2 + 0x18) + 0x110) + 0x3c) == 2) {
          FUN_1094c3cf8(&uStack_128,param_2 + 0x40,*param_1 + 0x60,*param_1 + 0x120);
          FUN_10938ef5c(param_1,&uStack_128);
          if (lStack_f0 != 0) {
            piVar7 = (int *)(lStack_f0 + 0x14);
            do {
              iVar2 = *piVar7;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
              if (bVar4) {
                *piVar7 = iVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar2 + -1 == 0) {
              func_0x000109a848d4(&uStack_128);
            }
          }
          lStack_f0 = 0;
          uStack_110 = 0;
          uStack_118 = 0;
          uStack_100 = 0;
          uStack_108 = 0;
          if (0 < iStack_124) {
            lVar6 = 0;
            do {
              *(undefined4 *)(lStack_e8 + lVar6 * 4) = 0;
              lVar6 = lVar6 + 1;
            } while (lVar6 < iStack_124);
          }
          if (puStack_e0 != auStack_d8 && puStack_e0 != (undefined1 *)0x0) {
            _free(*(undefined8 *)(puStack_e0 + -8));
          }
        }
        if (lStack_78 != 0) {
          piVar7 = (int *)(lStack_78 + 0x14);
          do {
            iVar2 = *piVar7;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
            if (bVar4) {
              *piVar7 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar2 + -1 == 0) {
            func_0x000109a848d4(auStack_b0);
          }
        }
        lStack_78 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        if (0 < iStack_ac) {
          lVar6 = 0;
          do {
            *(undefined4 *)(lStack_70 + lVar6 * 4) = 0;
            lVar6 = lVar6 + 1;
          } while (lVar6 < iStack_ac);
        }
        if (puStack_68 != auStack_60 && puStack_68 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_68 + -8));
        }
        if (plStack_48 == (long *)0x0) {
          return;
        }
        plVar1 = plStack_48 + 1;
        do {
          lVar6 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          plVar5 = plStack_48;
        } while (cVar3 != '\0');
      }
      if (lVar6 != 0) {
        return;
      }
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    if (lVar8 != 0) {
      return;
    }
  }
LAB_1094b3394:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 1094b3414; end: 1094b34fb;  */

void FUN_1094b3414(long *param_1)

{
  *param_1 = (long)(PTR___ZTVNSt3__117__assoc_sub_stateE_110346b28 + 0x10);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0xb);
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  __ZNSt13exception_ptrD1Ev(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__114__shared_countD2Ev_110346530)(param_1);
  return;
}



/* Entry: 1094b34fc; end: 1094b355b;  */

void FUN_1094b34fc(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_28 [8];
  
  if (param_1 != 0) {
    __ZNSt13exception_ptrC1ERKS_(auStack_28);
    __ZNSt3__117__assoc_sub_state13set_exceptionESt13exception_ptr(param_1,auStack_28);
    __ZNSt13exception_ptrD1Ev(auStack_28);
    return;
  }
  lVar1 = 3;
  FUN_1094362d4();
  __ZNSt13exception_ptrD1Ev(auStack_28);
  __Unwind_Resume();
  plVar2 = *(long **)(param_2 + 0x40);
  if (plVar2 == (long *)0x0) {
    *(undefined8 *)(lVar1 + 0x40) = 0;
  }
  else if (plVar2 == (long *)(param_2 + 0x28)) {
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1 + 0x28);
    *(long *)(lVar1 + 0x40) = lVar1 + 0x28;
  }
  else {
    *(long **)(lVar1 + 0x40) = plVar2;
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  *(undefined8 *)(lVar1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x48) = 0;
  return;
}



/* Entry: 1094b355c; end: 1094b35cf;  */

void FUN_1094b355c(long param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_2 + 0x40);
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  else if (plVar1 == (long *)(param_2 + 0x28)) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1 + 0x28);
    *(long *)(param_1 + 0x40) = param_1 + 0x28;
  }
  else {
    *(long **)(param_1 + 0x40) = plVar1;
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x48) = 0;
  return;
}



/* Entry: 1094b35d0; end: 1094b35f7;  */

long * FUN_1094b35d0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  __ZNSt3__17promiseIvED1Ev(param_1 + 0x48);
  plVar1 = (long *)(param_1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x40);
  if (plVar2 == plVar1) {
    lVar3 = 0x18;
  }
  else {
    if (plVar2 == (long *)0x0) {
      return plVar1;
    }
    lVar3 = 0x20;
  }
  (**(code **)(*plVar2 + lVar3))();
  return plVar1;
}



/* Entry: 1094b35f8; end: 1094b360b;  */

void FUN_1094b35f8(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined1 auStack_40 [8];
  ulong uStack_38;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  plVar4 = (long *)(lVar3 + 0x48);
  lVar2 = *plVar4;
  if (lVar2 != 0) {
    if ((*(byte *)(lVar2 + 0x88) & 1) == 0) {
      uStack_38 = 0;
      lVar2 = *(long *)(lVar2 + 0x10);
      __ZNSt13exception_ptrD1Ev(&uStack_38);
      if (lVar2 == 0) {
        uStack_38 = uStack_38 & 0xffffffff00000000;
        plVar1 = *(long **)(lVar3 + 0x40);
        (**(code **)(*plVar1 + 0x28))(plVar1,&uStack_38);
        __ZNSt3__17promiseIvE9set_valueEv(plVar4);
        return;
      }
    }
    FUN_1094362d4(2);
  }
  FUN_1094362d4(3);
  ___cxa_begin_catch();
  __ZSt17current_exceptionv(auStack_40);
  __ZNSt3__17promiseIvE13set_exceptionESt13exception_ptr(plVar4,auStack_40);
  __ZNSt13exception_ptrD1Ev(auStack_40);
  ___cxa_end_catch();
  return;
}



/* Entry: 1094b360c; end: 1094b369b;  */

undefined8 * FUN_1094b360c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af7238;
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1094b369c; end: 1094b3717;  */

void FUN_1094b369c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_110af7238;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 0x18);
  if (*(char *)(param_1 + 0x37) < '\0') {
    func_0x000107c3192c(param_2 + 4,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28))
    ;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    param_2[6] = *(undefined8 *)(param_1 + 0x30);
    param_2[5] = uVar2;
    param_2[4] = uVar1;
  }
  return;
}



/* Entry: 1094b3718; end: 1094b3793;  */

void FUN_1094b3718(long param_1)

{
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 1094b3794; end: 1094b379b;  */

/* WARNING: Removing unreachable block (ram,0x0001094ac4cc) */
/* WARNING: Removing unreachable block (ram,0x0001094ac4d0) */
/* WARNING: Removing unreachable block (ram,0x0001094ac4d8) */
/* WARNING: Removing unreachable block (ram,0x0001094ac4e0) */
/* WARNING: Removing unreachable block (ram,0x0001094ac4e4) */
/* WARNING: Removing unreachable block (ram,0x0001094ac504) */
/* WARNING: Removing unreachable block (ram,0x0001094ac50c) */
/* WARNING: Removing unreachable block (ram,0x0001094ac520) */
/* WARNING: Removing unreachable block (ram,0x0001094ac530) */

void FUN_1094b3794(long param_1)

{
  long *plVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  code *pcVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  ulong uVar21;
  ulong uVar22;
  ulong unaff_x28;
  float fVar23;
  undefined4 auStack_2a8 [2];
  uint *puStack_2a0;
  undefined8 uStack_298;
  uint uStack_290;
  int iStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  long lStack_258;
  undefined4 *puStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  ulong uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 *puStack_188;
  undefined4 uStack_108;
  undefined8 uStack_104;
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
  long lStack_d0;
  long lStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long lStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  
  plVar10 = *(long **)(param_1 + 0x10);
  if (plVar10 == (long *)0x0) {
    return;
  }
  __ZNSt3__119__shared_weak_count4lockEv();
  if (plVar10 == (long *)0x0) {
    return;
  }
  lVar18 = *(long *)(param_1 + 8);
  lStack_98 = lVar18;
  plStack_90 = plVar10;
  if (lVar18 == 0) goto LAB_1094aca90;
  __ZNSt3__115recursive_mutex4lockEv(lVar18 + 0x38);
  plVar1 = (long *)(param_1 + 0x20);
  lVar14 = lVar18 + 0x218;
  FUN_1094ae1ec(lVar14,plVar1);
  if (lVar14 != 0) {
    lVar14 = lVar18 + 0x218;
    uStack_1d0 = plVar1;
    FUN_1094ae2d0(lVar14,plVar1,&uStack_1d0);
    plVar20 = (long *)(param_1 + 0x18);
    lVar14 = lVar14 + 0x28;
    FUN_1094ae848(lVar14,*(undefined4 *)plVar20);
    if (lVar14 != 0) {
      lVar14 = lVar18 + 0x268;
      uStack_1d0 = plVar20;
      FUN_1094ae8e8(lVar14,plVar20,&UNK_10dd5b8f9,&uStack_1d0,&uStack_108);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar14 + 0x18,plVar1)
      ;
      __ZNSt3__115recursive_mutex6unlockEv(lVar18 + 0x38);
      goto LAB_1094aca90;
    }
  }
  plVar10 = (long *)(param_1 + 0x18);
  FUN_1094add1c(&uStack_a8,lVar18,plVar10,plVar1);
  uStack_108 = 0x42ff0000;
  lStack_c8 = (long)&uStack_104 + 4;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_104 = 0;
  uStack_ec = 0;
  uStack_e8 = 0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_dc = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  lStack_d0 = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  puStack_c0 = &uStack_b8;
  FUN_1094b6d5c(uStack_a8,lVar18 + 0x100,*(long *)(lVar18 + 0x160) + (long)*(int *)plVar10 * 0x18,
                &uStack_108);
  lVar14 = lVar18 + 0x178;
  FUN_1094aed70(lVar14,plVar1);
  if (lVar14 == 0) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (&uStack_230,&UNK_10f56eb69,plVar1);
    plVar10 = &uStack_230;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (plVar10,&DAT_10f68f57e,1);
    lStack_1c8 = plVar10[1];
    uStack_1d0 = (long *)*plVar10;
    lStack_1c0 = plVar10[2];
    plVar10[1] = 0;
    plVar10[2] = 0;
    *plVar10 = 0;
    puVar11 = uStack_1d0;
    if (-1 < lStack_1c0) {
      puVar11 = &uStack_1d0;
    }
    FUN_109389218(&UNK_10f56ea98,0x11d,puVar11);
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x1094acb48);
    (*pcVar9)();
  }
  lVar14 = lVar18 + 0x178;
  uStack_1d0 = plVar1;
  FUN_1094b08f0(lVar14,plVar1,&UNK_10dd5b8f9,&uStack_1d0,&uStack_230);
  puVar11 = *(undefined8 **)(lVar14 + 0x28);
  FUN_1094aee54();
  FUN_1094c6988(&uStack_1d0,*puVar11,&uStack_108);
  uStack_228 = lStack_1c8;
  uStack_230 = uStack_1d0;
  uStack_218 = uStack_1b8;
  uStack_220 = lStack_1c0;
  uStack_208 = uStack_1a8;
  uStack_210 = uStack_1b0;
  uStack_1f0 = (ulong)&uStack_230 | 8;
  lStack_1f8 = lStack_198;
  uStack_200 = uStack_1a0;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  if (lStack_198 != 0) {
    piVar2 = (int *)(lStack_198 + 0x14);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  puStack_1e8 = &uStack_1e0;
  if (uStack_1d0._4_4_ < 3) {
    uStack_1e0 = *puStack_188;
    uStack_1d8 = puStack_188[1];
  }
  else {
    uStack_230 = (long *)((ulong)uStack_1d0 & 0xffffffff);
    func_0x000109a84868(&uStack_230,&uStack_1d0);
  }
  uStack_290 = 0x42ff0000;
  puStack_250 = &uStack_288;
  uStack_284 = 0;
  uStack_280 = 0;
  iStack_28c = 0;
  uStack_288 = 0;
  uStack_274 = 0;
  uStack_270 = 0;
  uStack_27c = 0;
  uStack_278 = 0;
  uStack_264 = 0;
  uStack_26c = 0;
  uStack_268 = 0;
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_25c = 0;
  uStack_240 = 0;
  uStack_238 = 0;
  uVar7 = (uint)uStack_230 >> 3 & 0x1ff;
  puStack_248 = &uStack_240;
  if (uVar7 == 3) {
    plStack_88 = (long *)CONCAT44(plStack_88._4_4_,0x1010000);
    plStack_80 = &uStack_230;
    uStack_78 = 0;
    auStack_2a8[0] = 0x2010000;
    uStack_298 = 0;
    puStack_2a0 = &uStack_290;
    FUN_109ac9fc8(&plStack_88,auStack_2a8,1,0);
  }
  else if (uVar7 == 0) {
    plStack_88 = (long *)CONCAT44(plStack_88._4_4_,0x1010000);
    plStack_80 = &uStack_230;
    uStack_78 = 0;
    auStack_2a8[0] = 0x2010000;
    puStack_2a0 = &uStack_290;
    uStack_298 = 0;
    FUN_109ac9fc8(&plStack_88,auStack_2a8,8,0);
  }
  else {
    if (lStack_1f8 != 0) {
      piVar2 = (int *)(lStack_1f8 + 0x14);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = *piVar2 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    lStack_258 = 0;
    uStack_278 = 0;
    uStack_274 = 0;
    uStack_280 = 0;
    uStack_27c = 0;
    uStack_268 = 0;
    uStack_264 = 0;
    uStack_270 = 0;
    uStack_26c = 0;
    uStack_290 = (uint)uStack_230;
    if (uStack_230._4_4_ < 3) {
      iStack_28c = uStack_230._4_4_;
      uStack_288 = (undefined4)uStack_228;
      uStack_284 = (undefined4)((ulong)uStack_228 >> 0x20);
      uStack_240 = *puStack_1e8;
      uStack_238 = puStack_1e8[1];
    }
    else {
      func_0x000109a84868(&uStack_290,&uStack_230);
    }
    uStack_278 = (undefined4)uStack_218;
    uStack_274 = (undefined4)((ulong)uStack_218 >> 0x20);
    uStack_280 = (undefined4)uStack_220;
    uStack_27c = (undefined4)((ulong)uStack_220 >> 0x20);
    uStack_268 = (undefined4)uStack_208;
    uStack_264 = (undefined4)((ulong)uStack_208 >> 0x20);
    uStack_270 = (undefined4)uStack_210;
    uStack_26c = (undefined4)((ulong)uStack_210 >> 0x20);
    uStack_260 = (undefined4)uStack_200;
    uStack_25c = (undefined4)((ulong)uStack_200 >> 0x20);
    lStack_258 = lStack_1f8;
  }
  lVar17 = lStack_98;
  lVar14 = lStack_98 + 0x218;
  plStack_88 = plVar1;
  FUN_1094ae2d0(lVar14,plVar1,&plStack_88);
  plVar20 = (long *)(lVar14 + 0x28);
  iVar4 = *(int *)plVar10;
  uVar21 = (ulong)iVar4;
  uVar22 = *(ulong *)(lVar14 + 0x30);
  if (uVar22 != 0) {
    uVar12 = uVar22 - 1;
    if ((uVar22 & uVar12) == 0) {
      unaff_x28 = uVar12 & uVar21;
    }
    else {
      unaff_x28 = uVar21;
      if (uVar22 <= uVar21) {
        uVar15 = 0;
        if (uVar22 != 0) {
          uVar15 = uVar21 / uVar22;
        }
        unaff_x28 = uVar21 - uVar15 * uVar22;
      }
    }
    puVar11 = *(undefined8 **)(*plVar20 + unaff_x28 * 8);
    if (puVar11 != (undefined8 *)0x0) {
      for (plVar19 = (long *)*puVar11; plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
        uVar15 = plVar19[1];
        if (uVar15 == uVar21) {
          if ((int)plVar19[2] == iVar4) goto LAB_1094ac7a0;
        }
        else {
          if ((uVar22 & uVar12) == 0) {
            uVar15 = uVar15 & uVar12;
          }
          else if (uVar22 <= uVar15) {
            uVar8 = 0;
            if (uVar22 != 0) {
              uVar8 = uVar15 / uVar22;
            }
            uVar15 = uVar15 - uVar8 * uVar22;
          }
          if (uVar15 != unaff_x28) break;
        }
      }
    }
  }
  plVar19 = (long *)0x78;
  __Znwm();
  uStack_78 = 1;
  *plVar19 = 0;
  plVar19[1] = uVar21;
  *(int *)(plVar19 + 2) = iVar4;
  *(undefined4 *)(plVar19 + 3) = 0x42ff0000;
  plVar19[10] = 0;
  plVar19[9] = 0;
  *(undefined8 *)((long)plVar19 + 0x44) = 0;
  *(undefined8 *)((long)plVar19 + 0x3c) = 0;
  *(undefined8 *)((long)plVar19 + 0x34) = 0;
  *(undefined8 *)((long)plVar19 + 0x2c) = 0;
  *(undefined8 *)((long)plVar19 + 0x24) = 0;
  *(undefined8 *)((long)plVar19 + 0x1c) = 0;
  plVar19[0xd] = 0;
  plVar19[0xb] = (long)(plVar19 + 4);
  plVar19[0xc] = (long)(plVar19 + 0xd);
  plVar19[0xe] = 0;
  fVar23 = (float)(*(long *)(lVar14 + 0x40) + 1);
  plStack_88 = plVar19;
  plStack_80 = plVar20;
  if ((uVar22 == 0) || (*(float *)(lVar14 + 0x48) * (float)uVar22 < fVar23)) {
    if (uVar22 < 3) {
      uVar12 = 1;
    }
    else {
      uVar12 = (ulong)((uVar22 & uVar22 - 1) != 0);
    }
    uVar12 = uVar12 | uVar22 << 1;
    uVar22 = (ulong)(fVar23 / *(float *)(lVar14 + 0x48));
    if (uVar12 <= uVar22) {
      uVar12 = uVar22;
    }
    FUN_1094aef18(plVar20,uVar12);
    uVar22 = *(ulong *)(lVar14 + 0x30);
    if ((uVar22 & uVar22 - 1) == 0) {
      unaff_x28 = uVar22 - 1 & uVar21;
    }
    else {
      unaff_x28 = uVar21;
      if (uVar22 <= uVar21) {
        uVar12 = 0;
        if (uVar22 != 0) {
          uVar12 = uVar21 / uVar22;
        }
        unaff_x28 = uVar21 - uVar12 * uVar22;
      }
    }
  }
  lVar16 = *plVar20;
  plVar13 = *(long **)(lVar16 + unaff_x28 * 8);
  if (plVar13 == (long *)0x0) {
    plVar13 = (long *)(lVar14 + 0x38);
    *plVar19 = *plVar13;
    *plVar13 = (long)plVar19;
    *(long **)(lVar16 + unaff_x28 * 8) = plVar13;
    if (*plVar19 != 0) {
      uVar21 = *(ulong *)(*plVar19 + 8);
      if ((uVar22 & uVar22 - 1) == 0) {
        uVar21 = uVar21 & uVar22 - 1;
      }
      else if (uVar22 <= uVar21) {
        uVar12 = 0;
        if (uVar22 != 0) {
          uVar12 = uVar21 / uVar22;
        }
        uVar21 = uVar21 - uVar12 * uVar22;
      }
      plVar13 = (long *)(*plVar20 + uVar21 * 8);
      goto LAB_1094ac790;
    }
  }
  else {
    *plVar19 = *plVar13;
LAB_1094ac790:
    *plVar13 = (long)plVar19;
  }
  *(long *)(lVar14 + 0x40) = *(long *)(lVar14 + 0x40) + 1;
LAB_1094ac7a0:
  puVar3 = (uint *)(plVar19 + 3);
  if (puVar3 != &uStack_290) {
    if (lStack_258 != 0) {
      piVar2 = (int *)(lStack_258 + 0x14);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = *piVar2 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (plVar19[10] != 0) {
      piVar2 = (int *)(plVar19[10] + 0x14);
      do {
        iVar4 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar4 + -1 == 0) {
        func_0x000109a848d4(puVar3);
      }
    }
    plVar19[10] = 0;
    plVar19[6] = 0;
    plVar19[5] = 0;
    plVar19[8] = 0;
    plVar19[7] = 0;
    if (*(int *)((long)plVar19 + 0x1c) < 1) {
      *puVar3 = uStack_290;
LAB_1094ac848:
      if (2 < iStack_28c) goto LAB_1094ac87c;
      *(int *)((long)plVar19 + 0x1c) = iStack_28c;
      plVar19[4] = CONCAT44(uStack_284,uStack_288);
      puVar11 = (undefined8 *)plVar19[0xc];
      *puVar11 = *puStack_248;
      puVar11[1] = puStack_248[1];
    }
    else {
      lVar14 = 0;
      lVar17 = plVar19[0xb];
      do {
        *(undefined4 *)(lVar17 + lVar14 * 4) = 0;
        lVar14 = lVar14 + 1;
      } while (lVar14 < *(int *)((long)plVar19 + 0x1c));
      *puVar3 = uStack_290;
      if (*(int *)((long)plVar19 + 0x1c) < 3) goto LAB_1094ac848;
LAB_1094ac87c:
      func_0x000109a84868(puVar3,&uStack_290);
    }
    plVar19[6] = CONCAT44(uStack_274,uStack_278);
    plVar19[5] = CONCAT44(uStack_27c,uStack_280);
    plVar19[8] = CONCAT44(uStack_264,uStack_268);
    plVar19[7] = CONCAT44(uStack_26c,uStack_270);
    plVar19[10] = lStack_258;
    plVar19[9] = CONCAT44(uStack_25c,uStack_260);
    lVar17 = lStack_98;
  }
  lVar17 = lVar17 + 0x268;
  plStack_88 = plVar10;
  FUN_1094ae8e8(lVar17,plVar10,&UNK_10dd5b8f9,&plStack_88,auStack_2a8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar17 + 0x18,plVar1);
  if (lStack_258 != 0) {
    piVar2 = (int *)(lStack_258 + 0x14);
    do {
      iVar4 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 + -1 == 0) {
      func_0x000109a848d4(&uStack_290);
    }
  }
  lStack_258 = 0;
  uStack_278 = 0;
  uStack_274 = 0;
  uStack_280 = 0;
  uStack_27c = 0;
  uStack_268 = 0;
  uStack_264 = 0;
  uStack_270 = 0;
  uStack_26c = 0;
  if (0 < iStack_28c) {
    lVar14 = 0;
    do {
      puStack_250[lVar14] = 0;
      lVar14 = lVar14 + 1;
    } while (lVar14 < iStack_28c);
  }
  if (puStack_248 != &uStack_240 && puStack_248 != (undefined8 *)0x0) {
    _free(puStack_248[-1]);
  }
  if (lStack_1f8 != 0) {
    piVar2 = (int *)(lStack_1f8 + 0x14);
    do {
      iVar4 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 + -1 == 0) {
      func_0x000109a848d4(&uStack_230);
    }
  }
  lStack_1f8 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  if (0 < uStack_230._4_4_) {
    lVar14 = 0;
    do {
      *(undefined4 *)(uStack_1f0 + lVar14 * 4) = 0;
      lVar14 = lVar14 + 1;
    } while (lVar14 < uStack_230._4_4_);
  }
  if (puStack_1e8 != &uStack_1e0 && puStack_1e8 != (undefined8 *)0x0) {
    _free(puStack_1e8[-1]);
  }
  FUN_1094af130(&uStack_1d0);
  if (lStack_d0 != 0) {
    piVar2 = (int *)(lStack_d0 + 0x14);
    do {
      iVar4 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 + -1 == 0) {
      func_0x000109a848d4(&uStack_108);
    }
  }
  lStack_d0 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  if (0 < (int)uStack_104) {
    lVar14 = 0;
    do {
      *(undefined4 *)(lStack_c8 + lVar14 * 4) = 0;
      lVar14 = lVar14 + 1;
    } while (lVar14 < (int)uStack_104);
  }
  if (puStack_c0 != &uStack_b8 && puStack_c0 != (undefined8 *)0x0) {
    _free(puStack_c0[-1]);
  }
  if (plStack_a0 != (long *)0x0) {
    plVar10 = plStack_a0 + 1;
    do {
      lVar14 = *plVar10;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a0);
    }
  }
  plVar10 = plStack_90;
  __ZNSt3__115recursive_mutex6unlockEv(lVar18 + 0x38);
  if (plVar10 == (long *)0x0) {
    return;
  }
LAB_1094aca90:
  plVar1 = plVar10 + 1;
  do {
    lVar18 = *plVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar18 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (lVar18 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
  }
  return;
}



/* Entry: 1094b379c; end: 1094b3803;  */

void FUN_1094b379c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001094b22d8();
  if (lVar1 != 0) {
    FUN_1094b2378(param_1,lVar1);
  }
  return;
}



/* Entry: 1094b3804; end: 1094b38a3;  */

long * FUN_1094b3804(long *param_1,int *param_2)

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



/* Entry: 1094b38a4; end: 1094b38fb;  */

undefined8 FUN_1094b38a4(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long alStack_38 [2];
  char cStack_28;
  
  uVar2 = *param_2;
  FUN_1094b38fc(alStack_38);
  lVar1 = alStack_38[0];
  alStack_38[0] = 0;
  if (lVar1 != 0) {
    if (cStack_28 == '\x01') {
      FUN_1094ae7a4(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return uVar2;
}



/* Entry: 1094b38fc; end: 1094b3a1b;  */

void FUN_1094b38fc(undefined8 *param_1,long *param_2,long *param_3)

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
    if (uVar8 == uVar3) goto LAB_1094b39b0;
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
    if (uVar8 == uVar3) goto LAB_1094b39b0;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_1094b39b0:
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



/* Entry: 1094b3a1c; end: 1094b3a4f;  */

void FUN_1094b3a1c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1094b3a50();
  if (lVar1 != 0) {
    FUN_1094b3af0(param_1,lVar1);
  }
  return;
}



/* Entry: 1094b3a50; end: 1094b3aef;  */

long * FUN_1094b3a50(long *param_1,int *param_2)

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



/* Entry: 1094b3af0; end: 1094b3b47;  */

undefined8 FUN_1094b3af0(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long alStack_38 [2];
  char cStack_28;
  
  uVar2 = *param_2;
  FUN_1094b3b48(alStack_38);
  lVar1 = alStack_38[0];
  alStack_38[0] = 0;
  if (lVar1 != 0) {
    if (cStack_28 == '\x01') {
      func_0x0001094b2528(lVar1 + 0x18);
    }
    __ZdlPv(lVar1);
  }
  return uVar2;
}



/* Entry: 1094b3b48; end: 1094b3c67;  */

void FUN_1094b3b48(undefined8 *param_1,long *param_2,long *param_3)

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
    if (uVar8 == uVar3) goto LAB_1094b3bfc;
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
    if (uVar8 == uVar3) goto LAB_1094b3bfc;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_1094b3bfc:
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



/* Entry: 1094b3c68; end: 1094b3caf;  */

void FUN_1094b3c68(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001094b2528(lVar1 + 0x18);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1094b3cb0; end: 1094b3cc3;  */

void FUN_1094b3cb0(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined1 auStack_40 [8];
  ulong uStack_38;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  plVar4 = (long *)(lVar3 + 0x48);
  lVar2 = *plVar4;
  if (lVar2 != 0) {
    if ((*(byte *)(lVar2 + 0x88) & 1) == 0) {
      uStack_38 = 0;
      lVar2 = *(long *)(lVar2 + 0x10);
      __ZNSt13exception_ptrD1Ev(&uStack_38);
      if (lVar2 == 0) {
        uStack_38 = uStack_38 & 0xffffffff00000000;
        plVar1 = *(long **)(lVar3 + 0x40);
        (**(code **)(*plVar1 + 0x28))(plVar1,&uStack_38);
        __ZNSt3__17promiseIvE9set_valueEv(plVar4);
        return;
      }
    }
    FUN_1094362d4(2);
  }
  FUN_1094362d4(3);
  ___cxa_begin_catch();
  __ZSt17current_exceptionv(auStack_40);
  __ZNSt3__17promiseIvE13set_exceptionESt13exception_ptr(plVar4,auStack_40);
  __ZNSt13exception_ptrD1Ev(auStack_40);
  ___cxa_end_catch();
  return;
}



/* Entry: 1094b3cc4; end: 1094b3d4b;  */

undefined8 * FUN_1094b3cc4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af72c0;
  (**(code **)param_1[4])();
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1094b3d4c; end: 1094b3d83;  */

void FUN_1094b3d4c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_110af72c0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001094b3d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(param_2 + 4,(long *)(param_1 + 0x20));
  return;
}



/* Entry: 1094b3d84; end: 1094b3e03;  */

void FUN_1094b3d84(long param_1)

{
  (*(code *)**(undefined8 **)(param_1 + 0x20))((undefined8 *)(param_1 + 0x20));
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 1094b3e04; end: 1094b3e0b;  */

void FUN_1094b3e04(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 *puVar19;
  long *plVar20;
  ulong uVar21;
  int iVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  float fVar28;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long *plStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_128;
  long lStack_120;
  undefined1 *puStack_118;
  undefined1 auStack_110 [16];
  undefined8 uStack_100;
  long *plStack_f8;
  undefined8 uStack_f0;
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
  long lStack_b8;
  ulong uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  long *plStack_80;
  long *aplStack_78 [3];
  
  plVar8 = *(long **)(param_1 + 0x10);
  if ((plVar8 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar8 != (long *)0x0))
  {
    lVar24 = *(long *)(param_1 + 8);
    lStack_88 = lVar24;
    plStack_80 = plVar8;
    if (lVar24 != 0) {
      __ZNSt3__115recursive_mutex4lockEv(lVar24 + 0x38);
      uStack_f0._0_4_ = 0x42ff0000;
      uStack_e4 = 0;
      uStack_e0 = 0;
      uStack_f0._4_4_ = 0;
      uStack_e8 = 0;
      plStack_158 = &uStack_f0;
      uVar16 = (ulong)plStack_158 | 8;
      uStack_d4 = 0;
      uStack_d0 = 0;
      uStack_dc = 0;
      uStack_d8 = 0;
      uStack_c4 = 0;
      uStack_cc = 0;
      uStack_c8 = 0;
      lStack_b8 = 0;
      uStack_c0 = 0;
      uStack_bc = 0;
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_160 = (long *)CONCAT44(uStack_160._4_4_,0x2010000);
      lStack_150 = 0;
      uStack_b0 = uVar16;
      puStack_a8 = &uStack_a0;
      FUN_109a479a0(lVar24 + 0x100,&uStack_160);
      lVar15 = lVar24;
      if (*(long *)(lVar24 + 0x168) != *(long *)(lVar24 + 0x160)) {
        uVar23 = 0;
        puVar19 = (undefined8 *)((ulong)&uStack_1c0 | 4);
LAB_1094acff4:
        uVar25 = *(ulong *)(lVar15 + 0x270);
        iVar22 = (int)uVar23;
        if (uVar25 != 0) {
          uVar26 = (ulong)iVar22;
          uVar27 = uVar25 - 1;
          if ((uVar25 & uVar27) == 0) {
            uVar17 = uVar27 & uVar26;
          }
          else {
            uVar17 = uVar26;
            if (uVar25 <= uVar26) {
              uVar17 = 0;
              if (uVar25 != 0) {
                uVar17 = uVar26 / uVar25;
              }
              uVar17 = uVar26 - uVar17 * uVar25;
            }
          }
          plVar8 = (long *)(lVar15 + 0x268);
          plVar20 = *(long **)(*plVar8 + uVar17 * 8);
          if (plVar20 != (long *)0x0) {
            do {
              while( true ) {
                plVar20 = (long *)*plVar20;
                if (plVar20 == (long *)0x0) goto LAB_1094ad864;
                uVar21 = plVar20[1];
                if (uVar21 != uVar26) break;
                if (*(int *)(plVar20 + 2) == iVar22) {
                  if ((uVar25 & uVar27) == 0) {
                    uVar17 = uVar27 & uVar26;
                  }
                  else {
                    uVar17 = uVar26;
                    if (uVar25 <= uVar26) {
                      uVar17 = 0;
                      if (uVar25 != 0) {
                        uVar17 = uVar26 / uVar25;
                      }
                      uVar17 = uVar26 - uVar17 * uVar25;
                    }
                  }
                  puVar13 = *(undefined8 **)(*plVar8 + uVar17 * 8);
                  if ((puVar13 == (undefined8 *)0x0) ||
                     (plVar20 = (long *)*puVar13, plVar20 == (long *)0x0)) goto LAB_1094ad108;
                  goto LAB_1094ad0bc;
                }
              }
              if ((uVar25 & uVar27) == 0) {
                uVar21 = uVar21 & uVar27;
              }
              else if (uVar25 <= uVar21) {
                uVar5 = 0;
                if (uVar25 != 0) {
                  uVar5 = uVar21 / uVar25;
                }
                uVar21 = uVar21 - uVar5 * uVar25;
              }
            } while (uVar21 == uVar17);
          }
        }
        goto LAB_1094ad864;
      }
LAB_1094ad880:
      __ZNSt3__115recursive_mutex6unlockEv(lVar24 + 0x38);
      __ZNSt3__15mutex4lockEv(lVar15 + 0xb8);
      if (*(long *)(lVar15 + 0x2c8) != 0) {
        piVar1 = (int *)(*(long *)(lVar15 + 0x2c8) + 0x14);
        do {
          iVar22 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar22 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar22 + -1 == 0) {
          func_0x000109a848d4(lVar15 + 0x290);
        }
      }
      *(undefined8 *)(lVar15 + 0x2c8) = 0;
      *(undefined8 *)(lVar15 + 0x2a8) = 0;
      *(undefined8 *)(lVar15 + 0x2a0) = 0;
      *(undefined8 *)(lVar15 + 0x2b8) = 0;
      *(undefined8 *)(lVar15 + 0x2b0) = 0;
      if (0 < *(int *)(lVar15 + 0x294)) {
        lVar24 = 0;
        lVar18 = *(long *)(lVar15 + 0x2d0);
        do {
          *(undefined4 *)(lVar18 + lVar24 * 4) = 0;
          lVar24 = lVar24 + 1;
        } while (lVar24 < *(int *)(lVar15 + 0x294));
      }
      *(ulong *)(lVar15 + 0x298) = CONCAT44(uStack_e4,uStack_e8);
      *(ulong *)(lVar15 + 0x290) = CONCAT44(uStack_f0._4_4_,(undefined4)uStack_f0);
      *(ulong *)(lVar15 + 0x2a8) = CONCAT44(uStack_d4,uStack_d8);
      *(ulong *)(lVar15 + 0x2a0) = CONCAT44(uStack_dc,uStack_e0);
      *(ulong *)(lVar15 + 0x2b8) = CONCAT44(uStack_c4,uStack_c8);
      *(ulong *)(lVar15 + 0x2b0) = CONCAT44(uStack_cc,uStack_d0);
      *(long *)(lVar15 + 0x2c8) = lStack_b8;
      *(ulong *)(lVar15 + 0x2c0) = CONCAT44(uStack_bc,uStack_c0);
      puVar13 = *(undefined8 **)(lVar15 + 0x2d8);
      puVar19 = (undefined8 *)(lVar15 + 0x2e0);
      if (puVar13 != puVar19) {
        if (puVar13 != (undefined8 *)0x0) {
          _free(puVar13[-1]);
        }
        *(undefined8 **)(lVar15 + 0x2d8) = puVar19;
        *(long *)(lVar15 + 0x2d0) = lVar15 + 0x298;
        puVar13 = puVar19;
      }
      puVar19 = (undefined8 *)((ulong)&uStack_f0 | 4);
      if (uStack_f0._4_4_ < 3) {
        *puVar13 = *puStack_a8;
        puVar13[1] = puStack_a8[1];
      }
      else {
        *(undefined8 **)(lVar15 + 0x2d8) = puStack_a8;
        *(ulong *)(lVar15 + 0x2d0) = uStack_b0;
        uStack_b0 = uVar16;
        puStack_a8 = &uStack_a0;
      }
      uStack_f0._0_4_ = 0x42ff0000;
      puVar19[1] = 0;
      *puVar19 = 0;
      puVar19[3] = 0;
      puVar19[2] = 0;
      puVar19[5] = 0;
      puVar19[4] = 0;
      *(undefined8 *)((long)puVar19 + 0x34) = 0;
      *(undefined8 *)((long)puVar19 + 0x2c) = 0;
      __ZNSt3__15mutex6unlockEv(lVar15 + 0xb8);
      (**(code **)(param_1 + 0x18))(1,(undefined8 *)(param_1 + 0x18));
      if (lStack_b8 != 0) {
        piVar1 = (int *)(lStack_b8 + 0x14);
        do {
          iVar22 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar22 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar22 + -1 == 0) {
          func_0x000109a848d4(&uStack_f0);
        }
      }
      lStack_b8 = 0;
      uStack_d8 = 0;
      uStack_d4 = 0;
      uStack_e0 = 0;
      uStack_dc = 0;
      uStack_c8 = 0;
      uStack_c4 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      if (0 < uStack_f0._4_4_) {
        lVar24 = 0;
        do {
          *(undefined4 *)(uStack_b0 + lVar24 * 4) = 0;
          lVar24 = lVar24 + 1;
        } while (lVar24 < uStack_f0._4_4_);
      }
      if (puStack_a8 != &uStack_a0 && puStack_a8 != (undefined8 *)0x0) {
        _free(puStack_a8[-1]);
      }
      if (plStack_80 == (long *)0x0) {
        return;
      }
    }
    plVar20 = plStack_80;
    plVar8 = plStack_80 + 1;
    do {
      lVar24 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar24 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar24 == 0) {
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
    }
  }
  return;
LAB_1094ad0bc:
  do {
    uVar21 = plVar20[1];
    if (uVar21 == uVar26) {
      if ((int)plVar20[2] == iVar22) goto LAB_1094ad210;
    }
    else {
      if ((uVar25 & uVar27) == 0) {
        uVar21 = uVar21 & uVar27;
      }
      else if (uVar25 <= uVar21) {
        uVar5 = 0;
        if (uVar25 != 0) {
          uVar5 = uVar21 / uVar25;
        }
        uVar21 = uVar21 - uVar5 * uVar25;
      }
      if (uVar21 != uVar17) break;
    }
    plVar20 = (long *)*plVar20;
  } while (plVar20 != (long *)0x0);
LAB_1094ad108:
  plVar20 = (long *)0x30;
  __Znwm();
  *plVar20 = 0;
  plVar20[1] = uVar26;
  *(int *)(plVar20 + 2) = iVar22;
  plVar20[4] = 0;
  plVar20[5] = 0;
  plVar20[3] = 0;
  fVar28 = (float)(*(long *)(lVar15 + 0x280) + 1);
  lStack_150 = 1;
  plStack_158 = plVar8;
  if (*(float *)(lVar15 + 0x288) * (float)uVar25 < fVar28) {
    uVar25 = (ulong)((uVar25 & uVar27) != 0 || uVar25 < 3) | uVar25 << 1;
    uVar27 = (ulong)(fVar28 / *(float *)(lVar15 + 0x288));
    if (uVar25 <= uVar27) {
      uVar25 = uVar27;
    }
    FUN_1094aeb14(plVar8,uVar25);
    uVar25 = *(ulong *)(lVar15 + 0x270);
    if ((uVar25 & uVar25 - 1) == 0) {
      uVar17 = uVar25 - 1 & uVar26;
    }
    else {
      uVar27 = 0;
      if (uVar25 != 0) {
        uVar27 = uVar26 / uVar25;
      }
      uVar17 = uVar26;
      if (uVar25 <= uVar26) {
        uVar17 = uVar26 - uVar27 * uVar25;
      }
    }
  }
  lVar18 = *plVar8;
  plVar14 = *(long **)(lVar18 + uVar17 * 8);
  if (plVar14 == (long *)0x0) {
    *plVar20 = *(long *)(lVar15 + 0x278);
    *(long **)(lVar15 + 0x278) = plVar20;
    *(long *)(lVar18 + uVar17 * 8) = lVar15 + 0x278;
    if (*plVar20 != 0) {
      uVar26 = *(ulong *)(*plVar20 + 8);
      if ((uVar25 & uVar25 - 1) == 0) {
        uVar26 = uVar26 & uVar25 - 1;
      }
      else if (uVar25 <= uVar26) {
        uVar27 = 0;
        if (uVar25 != 0) {
          uVar27 = uVar26 / uVar25;
        }
        uVar26 = uVar26 - uVar27 * uVar25;
      }
      plVar14 = (long *)(*plVar8 + uVar26 * 8);
      goto LAB_1094ad200;
    }
  }
  else {
    *plVar20 = *plVar14;
LAB_1094ad200:
    *plVar14 = (long)plVar20;
  }
  *(long *)(lVar15 + 0x280) = *(long *)(lVar15 + 0x280) + 1;
LAB_1094ad210:
  plVar20 = plVar20 + 3;
  lVar18 = lVar15 + 0x218;
  FUN_1094ae1ec(lVar18,plVar20);
  if (lVar18 != 0) {
    lVar18 = lVar15 + 0x218;
    uStack_160 = plVar20;
    FUN_1094ae2d0(lVar18,plVar20,&uStack_160);
    lVar18 = lVar18 + 0x28;
    FUN_1094ae848(lVar18,uVar23);
    if (lVar18 != 0) {
      lVar18 = lVar15 + 0x1f0;
      FUN_1094b1684(lVar18,plVar20,plVar20);
      uStack_160 = (long *)CONCAT44(uStack_160._4_4_,iVar22);
      FUN_1094add1c(&uStack_100,lVar15,&uStack_160,plVar20);
      uVar6 = uStack_100;
      iVar2 = *(int *)(*(long *)(*(long *)(lVar18 + 0x28) + 0x110) + 0x38);
      if (2 < iVar2) {
        if (iVar2 == 3) {
          lVar15 = lVar15 + 0x218;
          uStack_160 = plVar20;
          FUN_1094ae2d0(lVar15,plVar20,&uStack_160);
          uStack_160 = (long *)CONCAT44(uStack_160._4_4_,iVar22);
          lVar15 = lVar15 + 0x28;
          FUN_1094af9d0(lVar15,uVar23,&uStack_160);
          FUN_1094b9790(uVar6,lVar15 + 0x18,0,1,&uStack_f0);
          goto LAB_1094ad828;
        }
        if (iVar2 == 4) {
          __ZNSt3__15mutex4lockEv(lVar15 + 0x78);
          lVar18 = lVar15 + 0x1c8;
          FUN_1094afc0c(lVar18,plVar20);
          if (lVar18 == 0) {
            __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                      (&uStack_1c0,&UNK_10f56ebc9,plVar20);
            puVar19 = &uStack_1c0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (puVar19,&DAT_10f68f57e,1);
            plStack_158 = (long *)puVar19[1];
            uStack_160 = (long *)*puVar19;
            lStack_150 = puVar19[2];
            puVar19[1] = 0;
            puVar19[2] = 0;
            *puVar19 = 0;
            plVar8 = uStack_160;
            if (-1 < lStack_150) {
              plVar8 = &uStack_160;
            }
            FUN_109389218(&UNK_10f56ea98,0x185,plVar8);
            goto LAB_1094adbd0;
          }
          lVar18 = lVar15 + 0x1c8;
          FUN_1094b2580(lVar18,plVar20,plVar20);
          uVar12 = *(undefined8 *)(lVar18 + 0x28);
          FUN_1094afcf0(uVar12);
          __ZNSt3__15mutex6unlockEv(lVar15 + 0x78);
          uVar6 = uStack_100;
          lVar15 = lVar15 + 0x218;
          uStack_160 = plVar20;
          FUN_1094ae2d0(lVar15,plVar20,&uStack_160);
          uStack_160 = (long *)CONCAT44(uStack_160._4_4_,iVar22);
          lVar15 = lVar15 + 0x28;
          FUN_1094af9d0(lVar15,uVar23,&uStack_160);
          FUN_1094ba6c8(uVar6,&uStack_f0,lVar15 + 0x18,uVar12);
          goto LAB_1094ad828;
        }
        if (iVar2 != 5) goto LAB_1094ad828;
        __ZNSt3__15mutex4lockEv(lVar15 + 0x78);
        lVar9 = lVar15 + 0x1a0;
        FUN_1094afdb4(lVar9,plVar20);
        if (lVar9 == 0) {
          __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                    (&uStack_1c0,&UNK_10f56ec02,plVar20);
          puVar19 = &uStack_1c0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (puVar19,&DAT_10f68f57e,1);
          plStack_158 = (long *)puVar19[1];
          uStack_160 = (long *)*puVar19;
          lStack_150 = puVar19[2];
          puVar19[1] = 0;
          puVar19[2] = 0;
          *puVar19 = 0;
          plVar8 = uStack_160;
          if (-1 < lStack_150) {
            plVar8 = &uStack_160;
          }
          FUN_109389218(&UNK_10f56ea98,0x18e,plVar8);
          goto LAB_1094adbd0;
        }
        lVar9 = lVar15 + 0x1a0;
        FUN_1094b1ad0(lVar9,plVar20,plVar20);
        lVar10 = lVar15 + 0x1c8;
        FUN_1094afc0c(lVar10,plVar20);
        if (lVar10 == 0) {
          __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                    (&uStack_1c0,&UNK_10f56ec31,plVar20);
          puVar19 = &uStack_1c0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (puVar19,&DAT_10f68f57e,1);
          plStack_158 = (long *)puVar19[1];
          uStack_160 = (long *)*puVar19;
          lStack_150 = puVar19[2];
          puVar19[1] = 0;
          puVar19[2] = 0;
          *puVar19 = 0;
          plVar8 = uStack_160;
          if (-1 < lStack_150) {
            plVar8 = &uStack_160;
          }
          FUN_109389218(&UNK_10f56ea98,0x193,plVar8);
          goto LAB_1094adbd0;
        }
        lVar10 = lVar15 + 0x1c8;
        FUN_1094b2580(lVar10,plVar20,plVar20);
        lVar11 = *(long *)(lVar10 + 0x28);
        FUN_1094afcf0();
        lVar10 = lVar15 + 0x218;
        uStack_160 = plVar20;
        FUN_1094ae2d0(lVar10,plVar20,&uStack_160);
        uStack_160 = (long *)CONCAT44(uStack_160._4_4_,iVar22);
        lVar10 = lVar10 + 0x28;
        FUN_1094af9d0(lVar10,uVar23,&uStack_160);
        FUN_1094af248(&uStack_160,lVar10 + 0x18,(long)*(int *)(lVar10 + 0x24),lVar9 + 0x28,
                      *(undefined4 *)(*(long *)(*(long *)(lVar18 + 0x28) + 0x120) + 0x38));
        __ZNSt3__15mutex6unlockEv(lVar15 + 0x78);
        uStack_1c0._0_4_ = 0x42ff0000;
        *(undefined8 *)((long)puVar19 + 0x34) = 0;
        *(undefined8 *)((long)puVar19 + 0x2c) = 0;
        puVar19[3] = 0;
        puVar19[2] = 0;
        puVar19[5] = 0;
        puVar19[4] = 0;
        puVar19[1] = 0;
        *puVar19 = 0;
        uStack_170 = 0;
        uStack_168 = 0;
        puStack_180 = &uStack_1b8;
        puStack_178 = &uStack_170;
        if (*(int *)(*(long *)(*(long *)(lVar18 + 0x28) + 0x110) + 0x3c) == 2) {
          lVar18 = *(long *)(lVar11 + 8);
          puVar13 = (undefined8 *)(lVar18 + -0x60);
          if (&uStack_1c0 != puVar13) {
            if (*(long *)(lVar18 + -0x28) != 0) {
              piVar1 = (int *)(*(long *)(lVar18 + -0x28) + 0x14);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = *piVar1 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lStack_188 != 0) {
                piVar1 = (int *)(lStack_188 + 0x14);
                do {
                  iVar2 = *piVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar2 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar2 + -1 == 0) {
                  func_0x000109a848d4(&uStack_1c0);
                }
              }
            }
            lStack_188 = 0;
            uStack_1a8 = 0;
            uStack_1b0 = 0;
            uStack_198 = 0;
            uStack_1a0 = 0;
            if (uStack_1c0._4_4_ < 1) {
              uStack_1c0._0_4_ = *(undefined4 *)puVar13;
LAB_1094ad68c:
              iVar2 = *(int *)(lVar18 + -0x5c);
              if (2 < iVar2) goto LAB_1094ad6c0;
              uStack_1b8 = *(undefined8 *)(lVar18 + -0x58);
              puVar13 = *(undefined8 **)(lVar18 + -0x18);
              *puStack_178 = *puVar13;
              puStack_178[1] = puVar13[1];
              uStack_1c0._4_4_ = iVar2;
            }
            else {
              lVar15 = 0;
              do {
                *(undefined4 *)((long)puStack_180 + lVar15 * 4) = 0;
                lVar15 = lVar15 + 1;
              } while (lVar15 < uStack_1c0._4_4_);
              uStack_1c0._0_4_ = *(undefined4 *)puVar13;
              if (uStack_1c0._4_4_ < 3) goto LAB_1094ad68c;
LAB_1094ad6c0:
              func_0x000109a84868(&uStack_1c0,puVar13);
            }
            uStack_1a8 = *(undefined8 *)(lVar18 + -0x48);
            uStack_1b0 = *(undefined8 *)(lVar18 + -0x50);
            uStack_198 = *(undefined8 *)(lVar18 + -0x38);
            uStack_1a0 = *(undefined8 *)(lVar18 + -0x40);
            lStack_188 = *(long *)(lVar18 + -0x28);
            uStack_190 = *(undefined8 *)(lVar18 + -0x30);
            lVar15 = lStack_88;
          }
        }
        uVar6 = uStack_100;
        lVar15 = lVar15 + 0x218;
        aplStack_78[0] = plVar20;
        FUN_1094ae2d0(lVar15,plVar20,aplStack_78);
        aplStack_78[0] = (long *)CONCAT44(aplStack_78[0]._4_4_,iVar22);
        lVar15 = lVar15 + 0x28;
        FUN_1094af9d0(lVar15,uVar23,aplStack_78);
        FUN_1094be120(uVar6,&uStack_f0,lVar15 + 0x18,lVar11,&uStack_160,&uStack_1c0);
        if (lStack_188 != 0) {
          piVar1 = (int *)(lStack_188 + 0x14);
          do {
            iVar2 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar2 + -1 == 0) {
            func_0x000109a848d4(&uStack_1c0);
          }
        }
        lStack_188 = 0;
        uStack_1a8 = 0;
        uStack_1b0 = 0;
        uStack_198 = 0;
        uStack_1a0 = 0;
        if (0 < uStack_1c0._4_4_) {
          lVar15 = 0;
          do {
            *(undefined4 *)((long)puStack_180 + lVar15 * 4) = 0;
            lVar15 = lVar15 + 1;
          } while (lVar15 < uStack_1c0._4_4_);
        }
        if (puStack_178 != &uStack_170 && puStack_178 != (undefined8 *)0x0) {
          _free(puStack_178[-1]);
        }
        if (lStack_128 != 0) {
          piVar1 = (int *)(lStack_128 + 0x14);
          do {
            iVar2 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar2 + -1 == 0) {
            func_0x000109a848d4(&uStack_160);
          }
        }
        lStack_128 = 0;
        uStack_148 = 0;
        lStack_150 = 0;
        uStack_138 = 0;
        uStack_140 = 0;
        if (0 < uStack_160._4_4_) {
          lVar15 = 0;
          do {
            *(undefined4 *)(lStack_120 + lVar15 * 4) = 0;
            lVar15 = lVar15 + 1;
          } while (lVar15 < uStack_160._4_4_);
        }
        if (puStack_118 != auStack_110 && puStack_118 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_118 + -8));
        }
        goto LAB_1094ad828;
      }
      if (iVar2 != 0) {
        if (iVar2 == 1) {
          lVar15 = lVar15 + 0x218;
          uStack_160 = plVar20;
          FUN_1094ae2d0(lVar15,plVar20,&uStack_160);
          uStack_160 = (long *)CONCAT44(uStack_160._4_4_,iVar22);
          lVar15 = lVar15 + 0x28;
          FUN_1094af9d0(lVar15,uVar23,&uStack_160);
          puVar13 = (undefined8 *)(lVar15 + 0x18);
          if (&uStack_f0 == puVar13) goto LAB_1094ad828;
          if (*(long *)(lVar15 + 0x50) != 0) {
            piVar1 = (int *)(*(long *)(lVar15 + 0x50) + 0x14);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (lStack_b8 != 0) {
            piVar1 = (int *)(lStack_b8 + 0x14);
            do {
              iVar2 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar2 + -1 == 0) {
              func_0x000109a848d4(&uStack_f0);
            }
          }
          lStack_b8 = 0;
          uStack_d8 = 0;
          uStack_d4 = 0;
          uStack_e0 = 0;
          uStack_dc = 0;
          uStack_c8 = 0;
          uStack_c4 = 0;
          uStack_d0 = 0;
          uStack_cc = 0;
          if (uStack_f0._4_4_ < 1) {
            uStack_f0._0_4_ = *(undefined4 *)puVar13;
LAB_1094ad62c:
            iVar2 = *(int *)(lVar15 + 0x1c);
            if (2 < iVar2) goto LAB_1094ad660;
            uStack_e8 = (undefined4)*(undefined8 *)(lVar15 + 0x20);
            uStack_e4 = (undefined4)((ulong)*(undefined8 *)(lVar15 + 0x20) >> 0x20);
            puVar13 = *(undefined8 **)(lVar15 + 0x60);
            *puStack_a8 = *puVar13;
            puStack_a8[1] = puVar13[1];
            uStack_f0._4_4_ = iVar2;
          }
          else {
            lVar18 = 0;
            do {
              *(undefined4 *)(uStack_b0 + lVar18 * 4) = 0;
              lVar18 = lVar18 + 1;
            } while (lVar18 < uStack_f0._4_4_);
            uStack_f0._0_4_ = *(undefined4 *)puVar13;
            if (uStack_f0._4_4_ < 3) goto LAB_1094ad62c;
LAB_1094ad660:
            func_0x000109a84868(&uStack_f0,puVar13);
          }
          uStack_d8 = (undefined4)*(undefined8 *)(lVar15 + 0x30);
          uStack_d4 = (undefined4)((ulong)*(undefined8 *)(lVar15 + 0x30) >> 0x20);
          uStack_e0 = (undefined4)*(undefined8 *)(lVar15 + 0x28);
          uStack_dc = (undefined4)((ulong)*(undefined8 *)(lVar15 + 0x28) >> 0x20);
          uStack_c8 = (undefined4)*(undefined8 *)(lVar15 + 0x40);
          uStack_c4 = (undefined4)((ulong)*(undefined8 *)(lVar15 + 0x40) >> 0x20);
          uStack_d0 = (undefined4)*(undefined8 *)(lVar15 + 0x38);
          uStack_cc = (undefined4)((ulong)*(undefined8 *)(lVar15 + 0x38) >> 0x20);
          lStack_b8 = *(long *)(lVar15 + 0x50);
          uStack_c0 = (undefined4)*(undefined8 *)(lVar15 + 0x48);
          uStack_bc = (undefined4)((ulong)*(undefined8 *)(lVar15 + 0x48) >> 0x20);
          goto LAB_1094ad828;
        }
        if (iVar2 != 2) goto LAB_1094ad828;
      }
      lVar15 = lVar15 + 0x218;
      uStack_160 = plVar20;
      FUN_1094ae2d0(lVar15,plVar20,&uStack_160);
      uStack_160 = (long *)CONCAT44(uStack_160._4_4_,iVar22);
      lVar15 = lVar15 + 0x28;
      FUN_1094af9d0(lVar15,uVar23,&uStack_160);
      FUN_1094b9790(uVar6,lVar15 + 0x18,
                    *(undefined1 *)(*(long *)(*(long *)(lVar18 + 0x28) + 0x110) + 0x2f),1,&uStack_f0
                   );
LAB_1094ad828:
      plVar8 = plStack_f8;
      lVar15 = lStack_88;
      if (plStack_f8 != (long *)0x0) {
        plVar20 = plStack_f8 + 1;
        do {
          lVar18 = *plVar20;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar4) {
            *plVar20 = lVar18 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          lVar15 = lStack_88;
        }
      }
LAB_1094ad864:
      uVar23 = (ulong)(iVar22 + 1);
      uVar25 = (*(long *)(lVar15 + 0x168) - *(long *)(lVar15 + 0x160) >> 3) * -0x5555555555555555;
      if (uVar25 < uVar23 || uVar25 - uVar23 == 0) goto LAB_1094ad880;
      goto LAB_1094acff4;
    }
  }
  FUN_109389218(&UNK_10f56ea98,0x174,&UNK_10f56eb9d);
LAB_1094adbd0:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1094adbd4);
  (*pcVar7)();
}



/* Entry: 1094b3e0c; end: 1094b421f;  */

long * FUN_1094b3e0c(long *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *unaff_x25;
  ulong uVar14;
  
  plVar8 = param_1;
  func_0x000107c31944();
  plVar13 = (long *)param_1[1];
  if (plVar13 != (long *)0x0) {
    uVar14 = (long)plVar13 - 1;
    if (((ulong)plVar13 & uVar14) == 0) {
      unaff_x25 = (long *)(uVar14 & (ulong)plVar8);
    }
    else {
      unaff_x25 = plVar8;
      if (plVar13 <= plVar8) {
        uVar1 = 0;
        if (plVar13 != (long *)0x0) {
          uVar1 = (ulong)plVar8 / (ulong)plVar13;
        }
        unaff_x25 = (long *)((long)plVar8 - uVar1 * (long)plVar13);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        plVar6 = (long *)plVar5[1];
        if (plVar6 == plVar8) {
          plVar6 = param_1;
          func_0x000104c4fbc4(param_1,plVar5 + 2,param_2);
          if (((ulong)plVar6 & 1) != 0) {
            return plVar5;
          }
        }
        else {
          if (((ulong)plVar13 & uVar14) == 0) {
            plVar6 = (long *)((ulong)plVar6 & uVar14);
          }
          else if (plVar13 <= plVar6) {
            uVar1 = 0;
            if (plVar13 != (long *)0x0) {
              uVar1 = (ulong)plVar6 / (ulong)plVar13;
            }
            plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar13);
          }
          if (plVar6 != unaff_x25) break;
        }
      }
    }
  }
  plVar5 = (long *)0x50;
  __Znwm();
  *plVar5 = 0;
  plVar5[1] = (long)plVar8;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar5 + 2,*param_3,param_3[1]);
  }
  else {
    lVar3 = *param_3;
    plVar5[3] = param_3[1];
    plVar5[2] = lVar3;
    plVar5[4] = param_3[2];
  }
  plVar5[8] = 0;
  plVar5[7] = 0;
  plVar5[6] = 0;
  plVar5[5] = 0;
  *(undefined4 *)(plVar5 + 9) = 0x3f800000;
  if ((plVar13 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar13)) goto LAB_1094b4130;
  uVar14 = 1;
  if ((long *)0x2 < plVar13) {
    uVar14 = (ulong)(((ulong)plVar13 & (long)plVar13 - 1U) != 0);
  }
  plVar6 = (long *)(uVar14 | (long)plVar13 << 1);
  plVar13 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar6 <= plVar13) {
    plVar6 = plVar13;
  }
  if ((long)plVar6 - 1U == 0) {
    plVar6 = (long *)0x2;
  }
  else if (((ulong)plVar6 & (long)plVar6 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar13 = (long *)param_1[1];
  if (plVar13 < plVar6) {
LAB_1094b3fb8:
    if ((ulong)plVar6 >> 0x3d != 0) {
      func_0x000104c4f740();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1094b4208);
      (*pcVar2)();
    }
    lVar3 = (long)plVar6 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    plVar13 = (long *)0x0;
    param_1[1] = (long)plVar6;
    do {
      *(undefined8 *)(*param_1 + (long)plVar13 * 8) = 0;
      plVar13 = (long *)((long)plVar13 + 1);
    } while (plVar6 != plVar13);
    plVar7 = (long *)param_1[2];
    plVar13 = plVar6;
    if (plVar7 != (long *)0x0) {
      plVar9 = (long *)plVar7[1];
      uVar14 = (long)plVar6 - 1;
      if (((ulong)plVar6 & uVar14) == 0) {
        plVar9 = (long *)((ulong)plVar9 & uVar14);
      }
      else if (plVar6 <= plVar9) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar9 / (ulong)plVar6;
        }
        plVar9 = (long *)((long)plVar9 - uVar1 * (long)plVar6);
      }
      *(long **)(*param_1 + (long)plVar9 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar7;
      while (plVar10 != (long *)0x0) {
        plVar12 = (long *)plVar10[1];
        if (((ulong)plVar6 & uVar14) == 0) {
          plVar12 = (long *)((ulong)plVar12 & uVar14);
        }
        else if (plVar6 <= plVar12) {
          uVar1 = 0;
          if (plVar6 != (long *)0x0) {
            uVar1 = (ulong)plVar12 / (ulong)plVar6;
          }
          plVar12 = (long *)((long)plVar12 - uVar1 * (long)plVar6);
        }
        plVar11 = plVar10;
        if (plVar12 != plVar9) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + (long)plVar12 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar12 * 8) = plVar7;
            plVar9 = plVar12;
          }
          else {
            *plVar7 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar3 + (long)plVar12 * 8);
            **(long **)(lVar3 + (long)plVar12 * 8) = (long)plVar10;
            plVar11 = plVar7;
          }
        }
        plVar7 = plVar11;
        plVar10 = (long *)*plVar11;
      }
    }
  }
  else if (plVar6 < plVar13) {
    plVar7 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar13 < (long *)0x3) || (((ulong)plVar13 & (long)plVar13 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar7) {
      plVar7 = (long *)(1L << (-LZCOUNT((long)plVar7 + -1) & 0x3fU));
    }
    if (plVar6 <= plVar7) {
      plVar6 = plVar7;
    }
    if (plVar6 < plVar13) {
      if (plVar6 != (long *)0x0) goto LAB_1094b3fb8;
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      plVar13 = (long *)0x0;
    }
    else {
      plVar13 = (long *)param_1[1];
    }
  }
  if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
    unaff_x25 = (long *)((long)plVar13 - 1U & (ulong)plVar8);
  }
  else {
    unaff_x25 = plVar8;
    if (plVar13 <= plVar8) {
      uVar14 = 0;
      if (plVar13 != (long *)0x0) {
        uVar14 = (ulong)plVar8 / (ulong)plVar13;
      }
      unaff_x25 = (long *)((long)plVar8 - uVar14 * (long)plVar13);
    }
  }
LAB_1094b4130:
  lVar3 = *param_1;
  plVar8 = *(long **)(lVar3 + (long)unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar5 = *plVar8;
    *plVar8 = (long)plVar5;
    *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar8;
    if (*plVar5 != 0) {
      plVar8 = *(long **)(*plVar5 + 8);
      if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
        plVar8 = (long *)((ulong)plVar8 & (long)plVar13 - 1U);
      }
      else if (plVar13 <= plVar8) {
        uVar14 = 0;
        if (plVar13 != (long *)0x0) {
          uVar14 = (ulong)plVar8 / (ulong)plVar13;
        }
        plVar8 = (long *)((long)plVar8 - uVar14 * (long)plVar13);
      }
      *(long **)(*param_1 + (long)plVar8 * 8) = plVar5;
    }
  }
  else {
    *plVar5 = *plVar8;
    *plVar8 = (long)plVar5;
  }
  param_1[3] = param_1[3] + 1;
  return plVar5;
}



/* Entry: 1094b4220; end: 1094b45e3;  */

long * FUN_1094b4220(long *param_1,int param_2,undefined4 *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x24;
  
  uVar13 = (ulong)param_2;
  uVar14 = param_1[1];
  if (uVar14 != 0) {
    uVar5 = uVar14 - 1;
    if ((uVar14 & uVar5) == 0) {
      unaff_x24 = uVar5 & uVar13;
    }
    else {
      unaff_x24 = uVar13;
      if (uVar14 <= uVar13) {
        uVar8 = 0;
        if (uVar14 != 0) {
          uVar8 = uVar13 / uVar14;
        }
        unaff_x24 = uVar13 - uVar8 * uVar14;
      }
    }
    plVar7 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar7 != (long *)0x0) {
      for (plVar7 = (long *)*plVar7; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        uVar8 = plVar7[1];
        if (uVar8 == uVar13) {
          if (*(int *)(plVar7 + 2) == param_2) {
            return plVar7;
          }
        }
        else {
          if ((uVar14 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar14 <= uVar8) {
            uVar6 = 0;
            if (uVar14 != 0) {
              uVar6 = uVar8 / uVar14;
            }
            uVar8 = uVar8 - uVar6 * uVar14;
          }
          if (uVar8 != unaff_x24) break;
        }
      }
    }
  }
  plVar7 = (long *)0x28;
  __Znwm();
  *plVar7 = 0;
  plVar7[1] = uVar13;
  *(undefined4 *)(plVar7 + 2) = *param_3;
  plVar7[3] = 0;
  plVar7[4] = 0;
  if ((uVar14 == 0) || (*(float *)(param_1 + 4) * (float)uVar14 < (float)(param_1[3] + 1))) {
    uVar5 = 1;
    if (2 < uVar14) {
      uVar5 = (ulong)((uVar14 & uVar14 - 1) != 0);
    }
    uVar5 = uVar5 | uVar14 << 1;
    uVar8 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar5 <= uVar8) {
      uVar5 = uVar8;
    }
    if (uVar5 - 1 == 0) {
      uVar5 = 2;
    }
    else if ((uVar5 & uVar5 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar14 = param_1[1];
    }
    if (uVar14 < uVar5) {
LAB_1094b4384:
      if (uVar5 >> 0x3d != 0) {
        func_0x000104c4f740();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1094b45d0);
        (*pcVar2)();
      }
      lVar3 = uVar5 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar14 = 0;
      param_1[1] = uVar5;
      do {
        *(undefined8 *)(*param_1 + uVar14 * 8) = 0;
        uVar14 = uVar14 + 1;
      } while (uVar5 != uVar14);
      plVar9 = (long *)param_1[2];
      uVar14 = uVar5;
      if (plVar9 != (long *)0x0) {
        uVar8 = plVar9[1];
        uVar6 = uVar5 - 1;
        if ((uVar5 & uVar6) == 0) {
          uVar8 = uVar8 & uVar6;
        }
        else if (uVar5 <= uVar8) {
          uVar12 = 0;
          if (uVar5 != 0) {
            uVar12 = uVar8 / uVar5;
          }
          uVar8 = uVar8 - uVar12 * uVar5;
        }
        *(long **)(*param_1 + uVar8 * 8) = param_1 + 2;
        plVar10 = (long *)*plVar9;
        while (plVar10 != (long *)0x0) {
          uVar12 = plVar10[1];
          if ((uVar5 & uVar6) == 0) {
            uVar12 = uVar12 & uVar6;
          }
          else if (uVar5 <= uVar12) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar12 / uVar5;
            }
            uVar12 = uVar12 - uVar1 * uVar5;
          }
          plVar11 = plVar10;
          if (uVar12 != uVar8) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + uVar12 * 8) == 0) {
              *(long **)(lVar3 + uVar12 * 8) = plVar9;
              uVar8 = uVar12;
            }
            else {
              *plVar9 = *plVar10;
              *plVar10 = **(undefined8 **)(lVar3 + uVar12 * 8);
              **(long **)(lVar3 + uVar12 * 8) = (long)plVar10;
              plVar11 = plVar9;
            }
          }
          plVar9 = plVar11;
          plVar10 = (long *)*plVar11;
        }
      }
    }
    else if (uVar5 < uVar14) {
      uVar8 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar14 < 3) || ((uVar14 & uVar14 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar8) {
        uVar8 = 1L << (-LZCOUNT(uVar8 - 1) & 0x3fU);
      }
      if (uVar5 <= uVar8) {
        uVar5 = uVar8;
      }
      if (uVar5 < uVar14) {
        if (uVar5 != 0) goto LAB_1094b4384;
        lVar3 = *param_1;
        *param_1 = 0;
        if (lVar3 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar14 = 0;
      }
      else {
        uVar14 = param_1[1];
      }
    }
    if ((uVar14 & uVar14 - 1) == 0) {
      unaff_x24 = uVar14 - 1 & uVar13;
    }
    else {
      unaff_x24 = uVar13;
      if (uVar14 <= uVar13) {
        uVar5 = 0;
        if (uVar14 != 0) {
          uVar5 = uVar13 / uVar14;
        }
        unaff_x24 = uVar13 - uVar5 * uVar14;
      }
    }
  }
  lVar3 = *param_1;
  plVar9 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_1 + 2;
    *plVar7 = *plVar9;
    *plVar9 = (long)plVar7;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar9;
    if (*plVar7 == 0) goto LAB_1094b4564;
    uVar13 = *(ulong *)(*plVar7 + 8);
    if ((uVar14 & uVar14 - 1) == 0) {
      uVar13 = uVar13 & uVar14 - 1;
    }
    else if (uVar14 <= uVar13) {
      uVar5 = 0;
      if (uVar14 != 0) {
        uVar5 = uVar13 / uVar14;
      }
      uVar13 = uVar13 - uVar5 * uVar14;
    }
    plVar9 = (long *)(*param_1 + uVar13 * 8);
  }
  else {
    *plVar7 = *plVar9;
  }
  *plVar9 = (long)plVar7;
LAB_1094b4564:
  param_1[3] = param_1[3] + 1;
  return plVar7;
}



/* Entry: 1094b45e4; end: 1094b45f3;  */

void FUN_1094b45e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af7318;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1094b45f4; end: 1094b4613;  */

void FUN_1094b45f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af7318;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1094b4614; end: 1094b461f;  */

long FUN_1094b4614(long param_1)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  if (*(long *)(param_1 + 0x1d0) != 0) {
    piVar2 = (int *)(*(long *)(param_1 + 0x1d0) + 0x14);
    do {
      iVar3 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x198);
    }
  }
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  if (0 < *(int *)(param_1 + 0x19c)) {
    lVar6 = 0;
    lVar7 = *(long *)(param_1 + 0x1d8);
    do {
      *(undefined4 *)(lVar7 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 0x19c));
  }
  lVar6 = *(long *)(param_1 + 0x1e0);
  if (lVar6 != param_1 + 0x1e8 && lVar6 != 0) {
    _free(*(undefined8 *)(lVar6 + -8));
  }
  if (*(long *)(param_1 + 0x180) != 0) {
    *(long *)(param_1 + 0x188) = *(long *)(param_1 + 0x180);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x158) != 0) {
    piVar2 = (int *)(*(long *)(param_1 + 0x158) + 0x14);
    do {
      iVar3 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x120);
    }
  }
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  if (0 < *(int *)(param_1 + 0x124)) {
    lVar6 = 0;
    lVar7 = *(long *)(param_1 + 0x160);
    do {
      *(undefined4 *)(lVar7 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 0x124));
  }
  lVar6 = *(long *)(param_1 + 0x168);
  if (lVar6 != param_1 + 0x170 && lVar6 != 0) {
    _free(*(undefined8 *)(lVar6 + -8));
  }
  if (*(long *)(param_1 + 0xf8) != 0) {
    piVar2 = (int *)(*(long *)(param_1 + 0xf8) + 0x14);
    do {
      iVar3 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0xc0);
    }
  }
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  if (0 < *(int *)(param_1 + 0xc4)) {
    lVar6 = 0;
    lVar7 = *(long *)(param_1 + 0x100);
    do {
      *(undefined4 *)(lVar7 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 0xc4));
  }
  lVar6 = *(long *)(param_1 + 0x108);
  if (lVar6 != param_1 + 0x110 && lVar6 != 0) {
    _free(*(undefined8 *)(lVar6 + -8));
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    piVar2 = (int *)(*(long *)(param_1 + 0x70) + 0x14);
    do {
      iVar3 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x38);
    }
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (0 < *(int *)(param_1 + 0x3c)) {
    lVar6 = 0;
    lVar7 = *(long *)(param_1 + 0x78);
    do {
      *(undefined4 *)(lVar7 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 0x3c));
  }
  lVar6 = *(long *)(param_1 + 0x80);
  if (lVar6 != param_1 + 0x88 && lVar6 != 0) {
    _free(*(undefined8 *)(lVar6 + -8));
  }
  FUN_1094b0840(param_1 + 0x28);
  plVar8 = *(long **)(param_1 + 0x20);
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar6 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  return param_1 + 0x18;
}



/* Entry: 1094b4620; end: 1094b484f;  */

long FUN_1094b4620(long param_1)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  if (*(long *)(param_1 + 0x1b8) != 0) {
    piVar2 = (int *)(*(long *)(param_1 + 0x1b8) + 0x14);
    do {
      iVar3 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x180);
    }
  }
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  if (0 < *(int *)(param_1 + 0x184)) {
    lVar6 = 0;
    lVar7 = *(long *)(param_1 + 0x1c0);
    do {
      *(undefined4 *)(lVar7 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 0x184));
  }
  lVar6 = *(long *)(param_1 + 0x1c8);
  if (lVar6 != param_1 + 0x1d0 && lVar6 != 0) {
    _free(*(undefined8 *)(lVar6 + -8));
  }
  if (*(long *)(param_1 + 0x168) != 0) {
    *(long *)(param_1 + 0x170) = *(long *)(param_1 + 0x168);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x140) != 0) {
    piVar2 = (int *)(*(long *)(param_1 + 0x140) + 0x14);
    do {
      iVar3 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x108);
    }
  }
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  if (0 < *(int *)(param_1 + 0x10c)) {
    lVar6 = 0;
    lVar7 = *(long *)(param_1 + 0x148);
    do {
      *(undefined4 *)(lVar7 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 0x10c));
  }
  lVar6 = *(long *)(param_1 + 0x150);
  if (lVar6 != param_1 + 0x158 && lVar6 != 0) {
    _free(*(undefined8 *)(lVar6 + -8));
  }
  if (*(long *)(param_1 + 0xe0) != 0) {
    piVar2 = (int *)(*(long *)(param_1 + 0xe0) + 0x14);
    do {
      iVar3 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0xa8);
    }
  }
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  if (0 < *(int *)(param_1 + 0xac)) {
    lVar6 = 0;
    lVar7 = *(long *)(param_1 + 0xe8);
    do {
      *(undefined4 *)(lVar7 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 0xac));
  }
  lVar6 = *(long *)(param_1 + 0xf0);
  if (lVar6 != param_1 + 0xf8 && lVar6 != 0) {
    _free(*(undefined8 *)(lVar6 + -8));
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    piVar2 = (int *)(*(long *)(param_1 + 0x58) + 0x14);
    do {
      iVar3 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x20);
    }
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    lVar6 = 0;
    lVar7 = *(long *)(param_1 + 0x60);
    do {
      *(undefined4 *)(lVar7 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 0x24));
  }
  lVar6 = *(long *)(param_1 + 0x68);
  if (lVar6 != param_1 + 0x70 && lVar6 != 0) {
    _free(*(undefined8 *)(lVar6 + -8));
  }
  FUN_1094b0840(param_1 + 0x10);
  plVar8 = *(long **)(param_1 + 8);
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar6 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  return param_1;
}



/* Entry: 1094b4850; end: 1094b4a5f;  */

void FUN_1094b4850(undefined8 *param_1,undefined8 param_2,undefined1 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  char **ppcVar3;
  char *pcStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  char *pcStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  pcStack_60 = (char *)*param_1;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0x8000000000000000;
  cVar1 = *pcStack_60;
  pcStack_40 = pcStack_60;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(pcStack_60 + 8);
    FUN_1093793a4();
    pcStack_60 = (char *)*param_1;
    cVar1 = *pcStack_60;
    uStack_38 = uVar2;
LAB_1094b48c8:
    lStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0x8000000000000000;
    if (cVar1 == '\x01') {
      lStack_58 = *(long *)(pcStack_60 + 8) + 8;
      goto LAB_1094b490c;
    }
    if (cVar1 != '\x02') {
      uStack_48 = 1;
      goto LAB_1094b490c;
    }
    uStack_50 = *(undefined8 *)(*(long *)(pcStack_60 + 8) + 8);
  }
  else {
    if (cVar1 != '\x02') {
      uStack_28 = 1;
      goto LAB_1094b48c8;
    }
    uStack_50 = *(undefined8 *)(*(long *)(pcStack_60 + 8) + 8);
    uStack_30 = uStack_50;
  }
  uStack_48 = 0x8000000000000000;
  lStack_58 = 0;
LAB_1094b490c:
  ppcVar3 = &pcStack_40;
  FUN_109379420(ppcVar3,&pcStack_60);
  if (((ulong)ppcVar3 & 1) == 0) {
    FUN_10937b950(&pcStack_40);
    FUN_10938d198();
    *param_3 = pcStack_60._0_1_;
  }
  return;
}


