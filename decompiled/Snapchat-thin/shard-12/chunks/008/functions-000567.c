/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109a00bcc; end: 109a00bdb;  */

void FUN_109a00bcc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b203b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109a00bdc; end: 109a00bfb;  */

void FUN_109a00bdc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b203b8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109a00bfc; end: 109a00c0b;  */

void FUN_109a00bfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109a00c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 109a00c0c; end: 109a00d03;  */

void FUN_109a00c0c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000109a00b1c(lVar1 + 0x18);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 109a00d04; end: 109a00d13;  */

void FUN_109a00d04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b20408;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109a00d14; end: 109a00d33;  */

void FUN_109a00d14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b20408;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109a00d34; end: 109a00d43;  */

void FUN_109a00d34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109a00d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 109a00d44; end: 109a00ecf;  */

void FUN_109a00d44(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  
  plVar4 = (long *)0x78;
  __Znwm();
  plVar7 = plVar4 + 1;
  *plVar7 = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110b20458;
  plVar8 = plVar4 + 3;
  *plVar8 = (long)&PTR_FUN_110b1f9b8;
  plVar6 = (long *)param_2[1];
  lVar9 = param_2[1];
  lVar5 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[7] = lVar9;
  plVar4[6] = lVar5;
  if (plVar6 == (long *)0x0) {
    *(undefined4 *)(plVar4 + 0xe) = 0;
    plVar4[0xb] = 0;
    plVar4[10] = 0;
    plVar4[0xd] = 0;
    plVar4[0xc] = 0;
    plVar4[9] = 0;
    plVar4[8] = 0;
  }
  else {
    plVar1 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(undefined4 *)(plVar4 + 0xe) = 0;
    plVar4[0xb] = 0;
    plVar4[10] = 0;
    plVar4[0xd] = 0;
    plVar4[0xc] = 0;
    plVar4[9] = 0;
    plVar4[8] = 0;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  *param_1 = plVar8;
  param_1[1] = plVar4;
  if (plVar4[5] == 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar6 = plVar4 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar4[4] = (long)plVar8;
    plVar4[5] = (long)plVar4;
  }
  else {
    if (*(long *)(plVar4[5] + 8) != -1) {
      return;
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar6 = plVar4 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar4[4] = (long)plVar8;
    plVar4[5] = (long)plVar4;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar5 = *plVar7;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 != 0) {
    return;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
  return;
}



/* Entry: 109a00ed0; end: 109a00edf;  */

void FUN_109a00ed0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b20458;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109a00ee0; end: 109a00eff;  */

void FUN_109a00ee0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b20458;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109a00f00; end: 109a00f1f;  */

void FUN_109a00f00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109a00f08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 109a00f20; end: 109a00f3f;  */

void FUN_109a00f20(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b204a8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109a00f40; end: 109a00f4f;  */

void FUN_109a00f40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109a00f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 109a00f50; end: 109a00fa7;  */

long FUN_109a00f50(long param_1)

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



/* Entry: 109a00fa8; end: 109a00fb7;  */

void FUN_109a00fa8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b204f8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109a00fb8; end: 109a00fd7;  */

void FUN_109a00fb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b204f8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109a00fd8; end: 109a00fe7;  */

void FUN_109a00fd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109a00fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 109a00fe8; end: 109a01087;  */

long FUN_109a00fe8(long param_1)

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



/* Entry: 109a01088; end: 109a01127;  */

long * FUN_109a01088(long *param_1,int param_2)

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
    uVar3 = (ulong)param_2;
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
          if (*(int *)(plVar6 + 2) == param_2) {
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



/* Entry: 109a01128; end: 109a011bf;  */

long FUN_109a01128(long param_1)

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



/* Entry: 109a011c0; end: 109a011cf;  */

void FUN_109a011c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b20548;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109a011d0; end: 109a011ef;  */

void FUN_109a011d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b20548;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109a011f0; end: 109a011ff;  */

void FUN_109a011f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109a011f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 109a01200; end: 109a01257;  */

long FUN_109a01200(long param_1)

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



/* Entry: 109a01258; end: 109a0132b;  */

long * FUN_109a01258(long *param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar2 = (uint)((ulong)param_2 >> 0x20);
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    uVar4 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ (ulong)uVar2) * -0x622015f714c7d297;
    uVar4 = ((ulong)uVar2 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar5 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
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
          if (plVar7[2] == param_2) {
            return plVar7;
          }
        }
        else {
          if ((uVar3 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar3 <= uVar8) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar8 / uVar3;
            }
            uVar8 = uVar8 - uVar1 * uVar3;
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



/* Entry: 109a0132c; end: 109a01383;  */

long FUN_109a0132c(long param_1)

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



/* Entry: 109a01384; end: 109a0151f;  */

void FUN_109a01384(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  
  plVar4 = (long *)0x80;
  __Znwm();
  plVar7 = plVar4 + 1;
  *plVar7 = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110b20598;
  plVar8 = plVar4 + 3;
  *plVar8 = (long)&PTR_FUN_110b1fb78;
  plVar6 = (long *)param_2[1];
  lVar9 = param_2[1];
  lVar5 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[7] = lVar9;
  plVar4[6] = lVar5;
  if (plVar6 == (long *)0x0) {
    plVar4[9] = 0;
    plVar4[8] = 0;
    plVar4[0xb] = 0;
    plVar4[10] = 0;
    *(undefined4 *)(plVar4 + 0xc) = 0x3f800000;
    plVar4[0xe] = 0;
    plVar4[0xf] = 0;
    plVar4[0xd] = 0;
  }
  else {
    plVar1 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar4[9] = 0;
    plVar4[8] = 0;
    plVar4[0xb] = 0;
    plVar4[10] = 0;
    *(undefined4 *)(plVar4 + 0xc) = 0x3f800000;
    plVar4[0xe] = 0;
    plVar4[0xf] = 0;
    plVar4[0xd] = 0;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  *param_1 = plVar8;
  param_1[1] = plVar4;
  if (plVar4[5] == 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar6 = plVar4 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar4[4] = (long)plVar8;
    plVar4[5] = (long)plVar4;
  }
  else {
    if (*(long *)(plVar4[5] + 8) != -1) {
      return;
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar6 = plVar4 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar4[4] = (long)plVar8;
    plVar4[5] = (long)plVar4;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar5 = *plVar7;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 != 0) {
    return;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
  return;
}



/* Entry: 109a01520; end: 109a0152f;  */

void FUN_109a01520(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b20598;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109a01530; end: 109a0154f;  */

void FUN_109a01530(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b20598;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109a01550; end: 109a016df;  */

void FUN_109a01550(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109a01558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 109a016e0; end: 109a016ff;  */

void FUN_109a016e0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b205e8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109a01700; end: 109a0170f;  */

void FUN_109a01700(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109a01708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 109a01710; end: 109a017b7;  */

void FUN_109a01710(long *param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 109a017b8; end: 109a01b5f;  */

void FUN_109a017b8(long *param_1,ulong param_2,long param_3,long param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong unaff_x25;
  
  uVar13 = param_1[1];
  if (uVar13 != 0) {
    uVar4 = uVar13 - 1;
    if ((uVar13 & uVar4) == 0) {
      unaff_x25 = uVar4 & param_2;
    }
    else {
      unaff_x25 = param_2;
      if (uVar13 <= param_2) {
        uVar9 = 0;
        if (uVar13 != 0) {
          uVar9 = param_2 / uVar13;
        }
        unaff_x25 = param_2 - uVar9 * uVar13;
      }
    }
    plVar7 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_109a0186c;
          uVar9 = plVar7[1];
          if (uVar9 != param_2) break;
          if (plVar7[2] == param_2) {
            return;
          }
        }
        if ((uVar13 & uVar4) == 0) {
          uVar9 = uVar9 & uVar4;
        }
        else if (uVar13 <= uVar9) {
          uVar5 = 0;
          if (uVar13 != 0) {
            uVar5 = uVar9 / uVar13;
          }
          uVar9 = uVar9 - uVar5 * uVar13;
        }
      } while (uVar9 == unaff_x25);
    }
  }
LAB_109a0186c:
  plVar7 = (long *)0x20;
  __Znwm();
  *plVar7 = 0;
  plVar7[1] = param_2;
  plVar7[2] = param_3;
  plVar7[3] = param_4;
  if ((uVar13 == 0) || (*(float *)(param_1 + 4) * (float)uVar13 < (float)(param_1[3] + 1))) {
    uVar4 = 1;
    if (2 < uVar13) {
      uVar4 = (ulong)((uVar13 & uVar13 - 1) != 0);
    }
    uVar4 = uVar4 | uVar13 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar4 <= uVar9) {
      uVar4 = uVar9;
    }
    if (uVar4 - 1 == 0) {
      uVar4 = 2;
    }
    else if ((uVar4 & uVar4 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar13 = param_1[1];
    }
    if (uVar13 < uVar4) {
LAB_109a0190c:
      if (uVar4 >> 0x3d != 0) {
        func_0x000104c4f740();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x109a01b4c);
        (*pcVar2)();
      }
      lVar8 = uVar4 << 3;
      __Znwm();
      lVar3 = *param_1;
      *param_1 = lVar8;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      uVar13 = 0;
      param_1[1] = uVar4;
      do {
        *(undefined8 *)(*param_1 + uVar13 * 8) = 0;
        uVar13 = uVar13 + 1;
      } while (uVar4 != uVar13);
      plVar6 = (long *)param_1[2];
      uVar13 = uVar4;
      if (plVar6 != (long *)0x0) {
        uVar9 = plVar6[1];
        uVar5 = uVar4 - 1;
        if ((uVar4 & uVar5) == 0) {
          uVar9 = uVar9 & uVar5;
        }
        else if (uVar4 <= uVar9) {
          uVar12 = 0;
          if (uVar4 != 0) {
            uVar12 = uVar9 / uVar4;
          }
          uVar9 = uVar9 - uVar12 * uVar4;
        }
        *(long **)(*param_1 + uVar9 * 8) = param_1 + 2;
        plVar10 = (long *)*plVar6;
        while (plVar10 != (long *)0x0) {
          uVar12 = plVar10[1];
          if ((uVar4 & uVar5) == 0) {
            uVar12 = uVar12 & uVar5;
          }
          else if (uVar4 <= uVar12) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar12 / uVar4;
            }
            uVar12 = uVar12 - uVar1 * uVar4;
          }
          plVar11 = plVar10;
          if (uVar12 != uVar9) {
            lVar8 = *param_1;
            if (*(long *)(lVar8 + uVar12 * 8) == 0) {
              *(long **)(lVar8 + uVar12 * 8) = plVar6;
              uVar9 = uVar12;
            }
            else {
              *plVar6 = *plVar10;
              *plVar10 = **(undefined8 **)(lVar8 + uVar12 * 8);
              **(long **)(lVar8 + uVar12 * 8) = (long)plVar10;
              plVar11 = plVar6;
            }
          }
          plVar6 = plVar11;
          plVar10 = (long *)*plVar11;
        }
      }
    }
    else if (uVar4 < uVar13) {
      uVar9 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar13 < 3) || ((uVar13 & uVar13 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar9) {
        uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
      }
      if (uVar4 <= uVar9) {
        uVar4 = uVar9;
      }
      if (uVar4 < uVar13) {
        if (uVar4 != 0) goto LAB_109a0190c;
        lVar8 = *param_1;
        *param_1 = 0;
        if (lVar8 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar13 = 0;
      }
      else {
        uVar13 = param_1[1];
      }
    }
    if ((uVar13 & uVar13 - 1) == 0) {
      unaff_x25 = uVar13 - 1 & param_2;
    }
    else {
      unaff_x25 = param_2;
      if (uVar13 <= param_2) {
        uVar4 = 0;
        if (uVar13 != 0) {
          uVar4 = param_2 / uVar13;
        }
        unaff_x25 = param_2 - uVar4 * uVar13;
      }
    }
  }
  lVar8 = *param_1;
  plVar6 = *(long **)(lVar8 + unaff_x25 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *plVar7 = *plVar6;
    *plVar6 = (long)plVar7;
    *(long **)(lVar8 + unaff_x25 * 8) = plVar6;
    if (*plVar7 == 0) goto LAB_109a01ae4;
    uVar4 = *(ulong *)(*plVar7 + 8);
    if ((uVar13 & uVar13 - 1) == 0) {
      uVar4 = uVar4 & uVar13 - 1;
    }
    else if (uVar13 <= uVar4) {
      uVar9 = 0;
      if (uVar13 != 0) {
        uVar9 = uVar4 / uVar13;
      }
      uVar4 = uVar4 - uVar9 * uVar13;
    }
    plVar6 = (long *)(*param_1 + uVar4 * 8);
  }
  else {
    *plVar7 = *plVar6;
  }
  *plVar6 = (long)plVar7;
LAB_109a01ae4:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 109a01b60; end: 109a01bc3;  */

long FUN_109a01b60(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[3];
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (plVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    *(long **)(param_1 + 0x18) = plVar1;
  }
  return param_1;
}



/* Entry: 109a01bc4; end: 109a01c5f;  */

long * FUN_109a01bc4(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = uVar2 - 1;
    if ((uVar2 & uVar3) == 0) {
      uVar4 = uVar3 & param_2;
    }
    else {
      uVar4 = param_2;
      if (uVar2 <= param_2) {
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = param_2 / uVar2;
        }
        uVar4 = param_2 - uVar4 * uVar2;
      }
    }
    plVar5 = *(long **)(*param_1 + uVar4 * 8);
    if (plVar5 != (long *)0x0) {
      plVar5 = (long *)*plVar5;
      do {
        if (plVar5 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar6 = plVar5[1];
        if (uVar6 == param_2) {
          if (plVar5[2] == param_2) {
            return plVar5;
          }
        }
        else {
          if ((uVar2 & uVar3) == 0) {
            uVar6 = uVar6 & uVar3;
          }
          else if (uVar2 <= uVar6) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar6 / uVar2;
            }
            uVar6 = uVar6 - uVar1 * uVar2;
          }
          if (uVar6 != uVar4) {
            return (long *)0x0;
          }
        }
        plVar5 = (long *)*plVar5;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 109a01c60; end: 109a02007;  */

void FUN_109a01c60(long *param_1,ulong param_2,long param_3,long param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong unaff_x25;
  
  uVar13 = param_1[1];
  if (uVar13 != 0) {
    uVar4 = uVar13 - 1;
    if ((uVar13 & uVar4) == 0) {
      unaff_x25 = uVar4 & param_2;
    }
    else {
      unaff_x25 = param_2;
      if (uVar13 <= param_2) {
        uVar9 = 0;
        if (uVar13 != 0) {
          uVar9 = param_2 / uVar13;
        }
        unaff_x25 = param_2 - uVar9 * uVar13;
      }
    }
    plVar7 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_109a01d14;
          uVar9 = plVar7[1];
          if (uVar9 != param_2) break;
          if (plVar7[2] == param_2) {
            return;
          }
        }
        if ((uVar13 & uVar4) == 0) {
          uVar9 = uVar9 & uVar4;
        }
        else if (uVar13 <= uVar9) {
          uVar5 = 0;
          if (uVar13 != 0) {
            uVar5 = uVar9 / uVar13;
          }
          uVar9 = uVar9 - uVar5 * uVar13;
        }
      } while (uVar9 == unaff_x25);
    }
  }
LAB_109a01d14:
  plVar7 = (long *)0x20;
  __Znwm();
  *plVar7 = 0;
  plVar7[1] = param_2;
  plVar7[2] = param_3;
  plVar7[3] = param_4;
  if ((uVar13 == 0) || (*(float *)(param_1 + 4) * (float)uVar13 < (float)(param_1[3] + 1))) {
    uVar4 = 1;
    if (2 < uVar13) {
      uVar4 = (ulong)((uVar13 & uVar13 - 1) != 0);
    }
    uVar4 = uVar4 | uVar13 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar4 <= uVar9) {
      uVar4 = uVar9;
    }
    if (uVar4 - 1 == 0) {
      uVar4 = 2;
    }
    else if ((uVar4 & uVar4 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar13 = param_1[1];
    }
    if (uVar13 < uVar4) {
LAB_109a01db4:
      if (uVar4 >> 0x3d != 0) {
        func_0x000104c4f740();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x109a01ff4);
        (*pcVar2)();
      }
      lVar8 = uVar4 << 3;
      __Znwm();
      lVar3 = *param_1;
      *param_1 = lVar8;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      uVar13 = 0;
      param_1[1] = uVar4;
      do {
        *(undefined8 *)(*param_1 + uVar13 * 8) = 0;
        uVar13 = uVar13 + 1;
      } while (uVar4 != uVar13);
      plVar6 = (long *)param_1[2];
      uVar13 = uVar4;
      if (plVar6 != (long *)0x0) {
        uVar9 = plVar6[1];
        uVar5 = uVar4 - 1;
        if ((uVar4 & uVar5) == 0) {
          uVar9 = uVar9 & uVar5;
        }
        else if (uVar4 <= uVar9) {
          uVar12 = 0;
          if (uVar4 != 0) {
            uVar12 = uVar9 / uVar4;
          }
          uVar9 = uVar9 - uVar12 * uVar4;
        }
        *(long **)(*param_1 + uVar9 * 8) = param_1 + 2;
        plVar10 = (long *)*plVar6;
        while (plVar10 != (long *)0x0) {
          uVar12 = plVar10[1];
          if ((uVar4 & uVar5) == 0) {
            uVar12 = uVar12 & uVar5;
          }
          else if (uVar4 <= uVar12) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar12 / uVar4;
            }
            uVar12 = uVar12 - uVar1 * uVar4;
          }
          plVar11 = plVar10;
          if (uVar12 != uVar9) {
            lVar8 = *param_1;
            if (*(long *)(lVar8 + uVar12 * 8) == 0) {
              *(long **)(lVar8 + uVar12 * 8) = plVar6;
              uVar9 = uVar12;
            }
            else {
              *plVar6 = *plVar10;
              *plVar10 = **(undefined8 **)(lVar8 + uVar12 * 8);
              **(long **)(lVar8 + uVar12 * 8) = (long)plVar10;
              plVar11 = plVar6;
            }
          }
          plVar6 = plVar11;
          plVar10 = (long *)*plVar11;
        }
      }
    }
    else if (uVar4 < uVar13) {
      uVar9 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar13 < 3) || ((uVar13 & uVar13 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar9) {
        uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
      }
      if (uVar4 <= uVar9) {
        uVar4 = uVar9;
      }
      if (uVar4 < uVar13) {
        if (uVar4 != 0) goto LAB_109a01db4;
        lVar8 = *param_1;
        *param_1 = 0;
        if (lVar8 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar13 = 0;
      }
      else {
        uVar13 = param_1[1];
      }
    }
    if ((uVar13 & uVar13 - 1) == 0) {
      unaff_x25 = uVar13 - 1 & param_2;
    }
    else {
      unaff_x25 = param_2;
      if (uVar13 <= param_2) {
        uVar4 = 0;
        if (uVar13 != 0) {
          uVar4 = param_2 / uVar13;
        }
        unaff_x25 = param_2 - uVar4 * uVar13;
      }
    }
  }
  lVar8 = *param_1;
  plVar6 = *(long **)(lVar8 + unaff_x25 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *plVar7 = *plVar6;
    *plVar6 = (long)plVar7;
    *(long **)(lVar8 + unaff_x25 * 8) = plVar6;
    if (*plVar7 == 0) goto LAB_109a01f8c;
    uVar4 = *(ulong *)(*plVar7 + 8);
    if ((uVar13 & uVar13 - 1) == 0) {
      uVar4 = uVar4 & uVar13 - 1;
    }
    else if (uVar13 <= uVar4) {
      uVar9 = 0;
      if (uVar13 != 0) {
        uVar9 = uVar4 / uVar13;
      }
      uVar4 = uVar4 - uVar9 * uVar13;
    }
    plVar6 = (long *)(*param_1 + uVar4 * 8);
  }
  else {
    *plVar7 = *plVar6;
  }
  *plVar6 = (long)plVar7;
LAB_109a01f8c:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 109a02008; end: 109a0205f;  */

long FUN_109a02008(long param_1)

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



/* Entry: 109a02060; end: 109a02197;  */

long * FUN_109a02060(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = uVar2 - 1;
    if ((uVar2 & uVar3) == 0) {
      uVar4 = uVar3 & param_2;
    }
    else {
      uVar4 = param_2;
      if (uVar2 <= param_2) {
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = param_2 / uVar2;
        }
        uVar4 = param_2 - uVar4 * uVar2;
      }
    }
    plVar5 = *(long **)(*param_1 + uVar4 * 8);
    if (plVar5 != (long *)0x0) {
      plVar5 = (long *)*plVar5;
      do {
        if (plVar5 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar6 = plVar5[1];
        if (uVar6 == param_2) {
          if (plVar5[2] == param_2) {
            return plVar5;
          }
        }
        else {
          if ((uVar2 & uVar3) == 0) {
            uVar6 = uVar6 & uVar3;
          }
          else if (uVar2 <= uVar6) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar6 / uVar2;
            }
            uVar6 = uVar6 - uVar1 * uVar2;
          }
          if (uVar6 != uVar4) {
            return (long *)0x0;
          }
        }
        plVar5 = (long *)*plVar5;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 109a02198; end: 109a021ef;  */

long FUN_109a02198(long param_1)

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



/* Entry: 109a021f0; end: 109a021ff;  */

void FUN_109a021f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b20638;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109a02200; end: 109a0221f;  */

void FUN_109a02200(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b20638;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109a02220; end: 109a0222f;  */

void FUN_109a02220(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109a02228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 109a02230; end: 109a02287;  */

long FUN_109a02230(long param_1)

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



/* Entry: 109a02288; end: 109a02297;  */

void FUN_109a02288(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b20688;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109a02298; end: 109a022b7;  */

void FUN_109a02298(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b20688;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109a022b8; end: 109a022c7;  */

void FUN_109a022b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109a022c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 109a022c8; end: 109a0237b;  */

undefined8 * FUN_109a022c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b206d8;
  FUN_109a02230(param_1 + 1);
  return param_1;
}



/* Entry: 109a0237c; end: 109a023b7;  */

void FUN_109a0237c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_2 = &PTR_FUN_110b206d8;
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



/* Entry: 109a023b8; end: 109a023df;  */

void FUN_109a023b8(long param_1)

{
  FUN_109a02230(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109a023e0; end: 109a0255b;  */

void FUN_109a023e0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long *plStack_38;
  
  uVar8 = *param_2;
  _objc_retain(uVar8);
  lStack_40 = *(long *)(param_1 + 8);
  plVar3 = *(long **)(param_1 + 0x10);
  lVar7 = lStack_40;
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar7 = *(long *)(param_1 + 8);
  }
  uVar9 = **(undefined8 **)(*(long *)(*(long *)(*(long *)(lVar7 + 0x18) + 0x18) + 0x18) + 0x18);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc6000000;
  pcStack_50 = FUN_109a025a4;
  puStack_48 = &UNK_110b20748;
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  ppuVar6 = &puStack_60;
  plStack_38 = plVar3;
  _objc_retainBlock(ppuVar6);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
    do {
      lVar7 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  func_0x00010c0d87a0(uVar9);
  _objc_release(ppuVar6);
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      lVar7 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  _objc_release(uVar8);
  return;
}



/* Entry: 109a0255c; end: 109a02597;  */

long FUN_109a0255c(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b20778);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109a02598; end: 109a025a3;  */

undefined ** FUN_109a02598(void)

{
  return &PTR_DAT_110b20778;
}



/* Entry: 109a025a4; end: 109a026b7;  */

void FUN_109a025a4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c09e4e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc3520();
    _printf(&UNK_10f593f51);
    _objc_release(lVar1);
  }
  lVar2 = *(long *)(param_1 + 0x20);
  __ZNSt3__15mutex4lockEv(lVar2 + 0x48);
  lVar1 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  __ZNSt3__118condition_variable10notify_allEv(lVar1 + 0x88);
  __ZNSt3__15mutex6unlockEv(lVar2 + 0x48);
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 109a026b8; end: 109a026e7;  */

void FUN_109a026b8(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(param_2 + 0x28);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar5;
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



/* Entry: 109a026e8; end: 109a02797;  */

long FUN_109a026e8(long param_1)

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



/* Entry: 109a02798; end: 109a027a7;  */

void FUN_109a02798(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b20798;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109a027a8; end: 109a027c7;  */

void FUN_109a027a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b20798;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109a027c8; end: 109a027d7;  */

void FUN_109a027c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109a027d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 109a027d8; end: 109a0282f;  */

long FUN_109a027d8(long param_1)

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



/* Entry: 109a02830; end: 109a0288f;  */

long * FUN_109a02830(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (plVar1[5] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109a02890; end: 109a028bf;  */

void FUN_109a02890(ulong param_1,long param_2)

{
  if (((param_1 & 1) != 0) && (*(long *)(param_2 + 0x28) != 0)) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 109a028c0; end: 109a0296b;  */

long * FUN_109a028c0(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = uVar2 - 1;
    if ((uVar2 & uVar3) == 0) {
      uVar4 = uVar3 & param_2;
    }
    else {
      uVar4 = param_2;
      if (uVar2 <= param_2) {
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = param_2 / uVar2;
        }
        uVar4 = param_2 - uVar4 * uVar2;
      }
    }
    plVar5 = *(long **)(*param_1 + uVar4 * 8);
    if (plVar5 != (long *)0x0) {
      plVar5 = (long *)*plVar5;
      do {
        if (plVar5 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar6 = plVar5[1];
        if (uVar6 == param_2) {
          if (plVar5[2] == param_2) {
            return plVar5;
          }
        }
        else {
          if ((uVar2 & uVar3) == 0) {
            uVar6 = uVar6 & uVar3;
          }
          else if (uVar2 <= uVar6) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar6 / uVar2;
            }
            uVar6 = uVar6 - uVar1 * uVar2;
          }
          if (uVar6 != uVar4) {
            return (long *)0x0;
          }
        }
        plVar5 = (long *)*plVar5;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 109a0296c; end: 109a0298b;  */

void FUN_109a0296c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b207e8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109a0298c; end: 109a029ab;  */

void FUN_109a0298c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109a02994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 109a029ac; end: 109a029cb;  */

void FUN_109a029ac(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b20838;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109a029cc; end: 109a029db;  */

void FUN_109a029cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109a029d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 109a029dc; end: 109a02a33;  */

long FUN_109a029dc(long param_1)

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



/* Entry: 109a02a34; end: 109a02a43;  */

void FUN_109a02a34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b20888;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109a02a44; end: 109a02a63;  */

void FUN_109a02a44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b20888;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109a02a64; end: 109a02a73;  */

void FUN_109a02a64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109a02a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 109a02a74; end: 109a02b77;  */

void FUN_109a02a74(long *param_1,long *param_2,long param_3)

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
    *param_2 = param_3 + 8;
    param_2[1] = (long)param_1;
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



/* Entry: 109a02b78; end: 109a02d8b;  */

mach_header * FUN_109a02b78(mach_header *param_1,undefined8 *param_2,mach_header *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  mach_header *pmVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  mach_header *pmVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uStack_d8;
  mach_header *pmStack_d0;
  undefined8 uStack_c8;
  mach_header *pmStack_c0;
  long lStack_b8;
  undefined8 uStack_68;
  mach_header *pmStack_60;
  undefined8 uStack_58;
  mach_header *pmStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pmVar4 = param_1;
  if ((bRam000000011382bb40 & 1) == 0) {
    pmVar4 = (mach_header *)0x11382bb40;
    ___cxa_guard_acquire();
    if ((int)pmVar4 != 0) {
      pmVar4 = param_1;
      (**(code **)(*(long *)param_1 + 0x18))();
      uStack_68 = 0x1cf5ca4526e39b11;
      pmStack_60 = pmVar4;
      (**(code **)(*(long *)param_1 + 0x10))();
      uStack_58 = 0x9364c2127f080093;
      pmStack_50 = param_1;
      FUN_109a02f24(0x11382bb18,&uStack_68,2);
      param_3 = &MACH_HEADER;
      ___cxa_atexit(FUN_109a02f20,0x11382bb18);
      pmVar4 = (mach_header *)0x11382bb40;
      ___cxa_guard_release();
    }
  }
  if (param_2[9] == 0) {
    pmVar8 = (mach_header *)0x0;
  }
  else {
    pmVar8 = (mach_header *)0x0;
    puVar10 = (undefined8 *)param_2[8];
    puVar1 = puVar10 + param_2[9] * 4;
    do {
      uStack_68 = *puVar10;
      param_2 = &uStack_68;
      pmVar4 = (mach_header *)0x11382bb18;
      FUN_109a03398();
      if (puVar10[3] == 0) {
LAB_109a02c78:
        uVar3 = 0x10;
        ___cxa_allocate_exception(0x10);
        __ZNSt13runtime_errorC1EPKc();
        ___cxa_throw(uVar3,PTR___ZTISt13runtime_error_110346a40,
                     PTR___ZNSt13runtime_errorD1Ev_1103461d8);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x109a02cac);
        (*pcVar2)();
      }
      uVar7 = 0;
      lVar5._0_4_ = pmVar4->flags;
      lVar5._4_4_ = pmVar4->reserved;
      plVar9 = (long *)puVar10[2];
      while (*plVar9 != lVar5) {
        uVar7 = uVar7 - 1;
        plVar9 = plVar9 + 1;
        if (-uVar7 == puVar10[3]) goto LAB_109a02c78;
      }
      if (uVar7 != 0) {
        pmVar8 = (mach_header *)
                 (1L << (~uVar7 + (ulong)*(uint *)(puVar10 + 1) & 0x3f) | (ulong)pmVar8);
      }
      puVar10 = puVar10 + 4;
    } while (puVar10 != puVar1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pmVar8;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x11382bb40);
  __Unwind_Resume();
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pmVar8 = pmVar4;
  if ((bRam000000011382bb70 & 1) == 0) {
    pmVar8 = (mach_header *)0x11382bb70;
    ___cxa_guard_acquire();
    if ((int)pmVar8 != 0) {
      pmVar8 = pmVar4;
      (**(code **)(*(long *)pmVar4 + 0x18))();
      uStack_d8 = 0x1cf5ca4526e39b11;
      pmStack_d0 = pmVar8;
      (**(code **)(*(long *)pmVar4 + 0x10))();
      uStack_c8 = 0x9364c2127f080093;
      pmStack_c0 = pmVar4;
      FUN_109a02f24(0x11382bb48,&uStack_d8,2);
      ___cxa_atexit(FUN_109a02f20,0x11382bb48,0x100000000);
      pmVar8 = (mach_header *)0x11382bb70;
      ___cxa_guard_release();
    }
  }
  if (param_2[3] != 0) {
    puVar10 = (undefined8 *)param_2[2];
    puVar1 = puVar10 + param_2[3] * 2;
    do {
      uStack_d8 = *puVar10;
      lVar5 = 0x11382bb48;
      FUN_109a03398(0x11382bb48,&uStack_d8);
      uStack_d8 = CONCAT44((int)*(undefined8 *)(lVar5 + 0x18),*(undefined4 *)(puVar10 + 1));
      pmStack_d0 = (mach_header *)CONCAT44(pmStack_d0._4_4_,1);
      pmVar8 = param_3;
      FUN_109a03438(param_3,&uStack_d8);
      puVar10 = puVar10 + 2;
    } while (puVar10 != puVar1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return pmVar8;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x11382bb70);
  __Unwind_Resume();
  plVar9._0_4_ = pmVar8->ncmds;
  plVar9._4_4_ = pmVar8->sizeofcmds;
  while (plVar9 != (long *)0x0) {
    plVar9 = (long *)*plVar9;
    __ZdlPv();
  }
  lVar6._0_4_ = pmVar8->magic;
  lVar6._4_4_ = pmVar8->cputype;
  pmVar8->magic = 0;
  pmVar8->cputype = 0;
  if (lVar6 != 0) {
    __ZdlPv();
  }
  return pmVar8;
}



/* Entry: 109a02d8c; end: 109a02f1f;  */

long * FUN_109a02d8c(long *param_1,long param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = param_1;
  if ((bRam000000011382bb70 & 1) == 0) {
    plVar2 = (long *)0x11382bb70;
    ___cxa_guard_acquire();
    if ((int)plVar2 != 0) {
      plVar2 = param_1;
      (**(code **)(*param_1 + 0x18))();
      uStack_68 = 0x1cf5ca4526e39b11;
      plStack_60 = plVar2;
      (**(code **)(*param_1 + 0x10))();
      uStack_58 = 0x9364c2127f080093;
      plStack_50 = param_1;
      FUN_109a02f24(0x11382bb48,&uStack_68,2);
      ___cxa_atexit(FUN_109a02f20,0x11382bb48,0x100000000);
      plVar2 = (long *)0x11382bb70;
      ___cxa_guard_release();
    }
  }
  if (*(long *)(param_2 + 0x18) != 0) {
    puVar5 = *(undefined8 **)(param_2 + 0x10);
    puVar1 = puVar5 + *(long *)(param_2 + 0x18) * 2;
    do {
      uStack_68 = *puVar5;
      lVar4 = 0x11382bb48;
      FUN_109a03398(0x11382bb48,&uStack_68);
      uStack_68 = CONCAT44((int)*(undefined8 *)(lVar4 + 0x18),*(undefined4 *)(puVar5 + 1));
      plStack_60 = (long *)CONCAT44(plStack_60._4_4_,1);
      plVar2 = param_3;
      FUN_109a03438(param_3,&uStack_68);
      puVar5 = puVar5 + 2;
    } while (puVar5 != puVar1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    ___cxa_guard_abort(0x11382bb70);
    __Unwind_Resume();
    plVar3 = (long *)plVar2[2];
    while (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      __ZdlPv();
    }
    lVar4 = *plVar2;
    *plVar2 = 0;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    return plVar2;
  }
  return plVar2;
}



/* Entry: 109a02f20; end: 109a02f23;  */

long * FUN_109a02f20(long *param_1)

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



/* Entry: 109a02f24; end: 109a02f97;  */

undefined8 * FUN_109a02f24(undefined8 *param_1,long param_2,long param_3)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (param_3 != 0) {
    param_3 = param_3 << 4;
    do {
      FUN_109a02f98(param_1,param_2,param_2);
      param_2 = param_2 + 0x10;
      param_3 = param_3 + -0x10;
    } while (param_3 != 0);
  }
  return param_1;
}



/* Entry: 109a02f98; end: 109a0334f;  */

undefined1  [16] FUN_109a02f98(long *param_1,ulong *param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  ulong unaff_x24;
  undefined1 auVar17 [16];
  
  uVar15 = *param_2;
  uVar16 = param_1[1];
  if (uVar16 != 0) {
    uVar6 = uVar16 - 1;
    if ((uVar16 & uVar6) == 0) {
      unaff_x24 = uVar6 & uVar15;
    }
    else {
      unaff_x24 = uVar15;
      if (uVar16 <= uVar15) {
        uVar9 = 0;
        if (uVar16 != 0) {
          uVar9 = uVar15 / uVar16;
        }
        unaff_x24 = uVar15 - uVar9 * uVar16;
      }
    }
    puVar8 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar8 != (undefined8 *)0x0) {
      for (plVar14 = (long *)*puVar8; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
        uVar9 = plVar14[1];
        if (uVar9 == uVar15) {
          if (plVar14[2] == uVar15) {
            uVar5 = 0;
            goto LAB_109a032d8;
          }
        }
        else {
          if ((uVar16 & uVar6) == 0) {
            uVar9 = uVar9 & uVar6;
          }
          else if (uVar16 <= uVar9) {
            uVar7 = 0;
            if (uVar16 != 0) {
              uVar7 = uVar9 / uVar16;
            }
            uVar9 = uVar9 - uVar7 * uVar16;
          }
          if (uVar9 != unaff_x24) break;
        }
      }
    }
  }
  plVar14 = (long *)0x20;
  __Znwm();
  *plVar14 = 0;
  plVar14[1] = uVar15;
  lVar3 = *param_3;
  plVar14[3] = param_3[1];
  plVar14[2] = lVar3;
  if ((uVar16 == 0) || (*(float *)(param_1 + 4) * (float)uVar16 < (float)(param_1[3] + 1))) {
    uVar6 = 1;
    if (2 < uVar16) {
      uVar6 = (ulong)((uVar16 & uVar16 - 1) != 0);
    }
    uVar6 = uVar6 | uVar16 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar9) {
      uVar6 = uVar9;
    }
    if (uVar6 - 1 == 0) {
      uVar6 = 2;
    }
    else if ((uVar6 & uVar6 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar16 = param_1[1];
    }
    if (uVar16 < uVar6) {
LAB_109a030e8:
      if (uVar6 >> 0x3d != 0) {
        func_0x000104c4f740();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x109a0333c);
        (*pcVar2)();
      }
      lVar3 = uVar6 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar16 = 0;
      param_1[1] = uVar6;
      do {
        *(undefined8 *)(*param_1 + uVar16 * 8) = 0;
        uVar16 = uVar16 + 1;
      } while (uVar6 != uVar16);
      plVar10 = (long *)param_1[2];
      uVar16 = uVar6;
      if (plVar10 != (long *)0x0) {
        uVar9 = plVar10[1];
        uVar7 = uVar6 - 1;
        if ((uVar6 & uVar7) == 0) {
          uVar9 = uVar9 & uVar7;
        }
        else if (uVar6 <= uVar9) {
          uVar13 = 0;
          if (uVar6 != 0) {
            uVar13 = uVar9 / uVar6;
          }
          uVar9 = uVar9 - uVar13 * uVar6;
        }
        *(long **)(*param_1 + uVar9 * 8) = param_1 + 2;
        plVar11 = (long *)*plVar10;
        while (plVar11 != (long *)0x0) {
          uVar13 = plVar11[1];
          if ((uVar6 & uVar7) == 0) {
            uVar13 = uVar13 & uVar7;
          }
          else if (uVar6 <= uVar13) {
            uVar1 = 0;
            if (uVar6 != 0) {
              uVar1 = uVar13 / uVar6;
            }
            uVar13 = uVar13 - uVar1 * uVar6;
          }
          plVar12 = plVar11;
          if (uVar13 != uVar9) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + uVar13 * 8) == 0) {
              *(long **)(lVar3 + uVar13 * 8) = plVar10;
              uVar9 = uVar13;
            }
            else {
              *plVar10 = *plVar11;
              *plVar11 = **(undefined8 **)(lVar3 + uVar13 * 8);
              **(long **)(lVar3 + uVar13 * 8) = (long)plVar11;
              plVar12 = plVar10;
            }
          }
          plVar10 = plVar12;
          plVar11 = (long *)*plVar12;
        }
      }
    }
    else if (uVar6 < uVar16) {
      uVar9 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar16 < 3) || ((uVar16 & uVar16 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar9) {
        uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
      }
      if (uVar6 <= uVar9) {
        uVar6 = uVar9;
      }
      if (uVar6 < uVar16) {
        if (uVar6 != 0) goto LAB_109a030e8;
        lVar3 = *param_1;
        *param_1 = 0;
        if (lVar3 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar16 = 0;
      }
      else {
        uVar16 = param_1[1];
      }
    }
    if ((uVar16 & uVar16 - 1) == 0) {
      unaff_x24 = uVar16 - 1 & uVar15;
    }
    else {
      unaff_x24 = uVar15;
      if (uVar16 <= uVar15) {
        uVar6 = 0;
        if (uVar16 != 0) {
          uVar6 = uVar15 / uVar16;
        }
        unaff_x24 = uVar15 - uVar6 * uVar16;
      }
    }
  }
  lVar3 = *param_1;
  plVar10 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar10 == (long *)0x0) {
    plVar10 = param_1 + 2;
    *plVar14 = *plVar10;
    *plVar10 = (long)plVar14;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar10;
    if (*plVar14 == 0) goto LAB_109a032c8;
    uVar15 = *(ulong *)(*plVar14 + 8);
    if ((uVar16 & uVar16 - 1) == 0) {
      uVar15 = uVar15 & uVar16 - 1;
    }
    else if (uVar16 <= uVar15) {
      uVar6 = 0;
      if (uVar16 != 0) {
        uVar6 = uVar15 / uVar16;
      }
      uVar15 = uVar15 - uVar6 * uVar16;
    }
    plVar10 = (long *)(*param_1 + uVar15 * 8);
  }
  else {
    *plVar14 = *plVar10;
  }
  *plVar10 = (long)plVar14;
LAB_109a032c8:
  param_1[3] = param_1[3] + 1;
  uVar5 = 1;
LAB_109a032d8:
  auVar17._8_8_ = uVar5;
  auVar17._0_8_ = plVar14;
  return auVar17;
}



/* Entry: 109a03350; end: 109a03397;  */

long * FUN_109a03350(long *param_1)

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



/* Entry: 109a03398; end: 109a03437;  */

long * FUN_109a03398(long *param_1,ulong *param_2)

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
    uVar3 = *param_2;
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
          if (plVar6[2] == uVar3) {
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



/* Entry: 109a03438; end: 109a0352f;  */

long * FUN_109a03438(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  float fVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  float *pfVar10;
  long lVar11;
  undefined1 uStack_71;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar5 = *param_2;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
    *puVar1 = uVar5;
    lVar11 = (long)puVar1 + 0xc;
    plVar3 = param_1;
  }
  else {
    lVar11 = (long)puVar1 - *param_1;
    uVar7 = (lVar11 >> 2) * -0x5555555555555555 + 1;
    if (0x1555555555555555 < uVar7) {
      FUN_109a00728();
      if (param_1[1] == 0) {
        plVar9 = (long *)0x0;
      }
      else {
        plVar9 = (long *)0x0;
        lVar11 = param_1[1] * 0xc;
        pfVar10 = (float *)(*param_1 + 4);
        do {
          fVar2 = pfVar10[1];
          if (fVar2 == 2.8026e-45) {
            puVar4 = (undefined1 *)0x0;
            if (*pfVar10 != 0.0) {
              puVar4 = (undefined1 *)(ulong)(uint)*pfVar10;
            }
          }
          else if (fVar2 == 1.4013e-45) {
            puVar4 = (undefined1 *)(long)(int)*pfVar10;
          }
          else if (fVar2 == 0.0) {
            puVar4 = (undefined1 *)(ulong)*(byte *)pfVar10;
          }
          else {
            puVar4 = &uStack_71;
            FUN_109a037d0(puVar4,pfVar10);
          }
          plVar9 = (long *)((long)puVar4 * 0xd + (long)plVar9 * 0xb + (ulong)(uint)pfVar10[-1] +
                           0xc1);
          pfVar10 = pfVar10 + 3;
          lVar11 = lVar11 + -0xc;
        } while (lVar11 != 0);
      }
      return plVar9;
    }
    lVar6 = param_1[2] - *param_1 >> 2;
    uVar8 = lVar6 * 0x5555555555555556;
    if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
      uVar8 = uVar7;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar6 * -0x5555555555555555)) {
      uVar8 = 0x1555555555555555;
    }
    plVar9 = param_1;
    FUN_109a0073c();
    puVar1 = (undefined8 *)((long)plVar9 + lVar11);
    uVar5 = *param_2;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
    *puVar1 = uVar5;
    lVar11 = (long)puVar1 + 0xc;
    lVar6 = (long)puVar1 - (param_1[1] - *param_1);
    _memcpy(lVar6);
    plVar3 = (long *)*param_1;
    *param_1 = lVar6;
    param_1[1] = lVar11;
    param_1[2] = (long)plVar9 + uVar8 * 0xc;
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = lVar11;
  return plVar3;
}



/* Entry: 109a03530; end: 109a035f7;  */

long FUN_109a03530(long *param_1)

{
  float fVar1;
  undefined1 *puVar2;
  long lVar3;
  float *pfVar4;
  long lVar5;
  undefined1 uStack_41;
  
  if (param_1[1] == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    lVar5 = param_1[1] * 0xc;
    pfVar4 = (float *)(*param_1 + 4);
    do {
      fVar1 = pfVar4[1];
      if (fVar1 == 2.8026e-45) {
        puVar2 = (undefined1 *)0x0;
        if (*pfVar4 != 0.0) {
          puVar2 = (undefined1 *)(ulong)(uint)*pfVar4;
        }
      }
      else if (fVar1 == 1.4013e-45) {
        puVar2 = (undefined1 *)(long)(int)*pfVar4;
      }
      else if (fVar1 == 0.0) {
        puVar2 = (undefined1 *)(ulong)*(byte *)pfVar4;
      }
      else {
        puVar2 = &uStack_41;
        FUN_109a037d0(puVar2,pfVar4);
      }
      lVar3 = (long)puVar2 * 0xd + lVar3 * 0xb + (ulong)(uint)pfVar4[-1] + 0xc1;
      pfVar4 = pfVar4 + 3;
      lVar5 = lVar5 + -0xc;
    } while (lVar5 != 0);
  }
  return lVar3;
}



/* Entry: 109a035f8; end: 109a037cf;  */

long FUN_109a035f8(long param_1,undefined8 *param_2,undefined8 *param_3,int param_4,int param_5,
                  int param_6,char *param_7,undefined8 *param_8)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  long lVar9;
  int *piVar10;
  int *piVar11;
  
  FUN_109a03530();
  if (param_2[1] == 0) {
    lVar7 = 0x3e5;
  }
  else {
    lVar6 = 0;
    lVar9 = param_2[1] << 2;
    puVar8 = (uint *)*param_2;
    do {
      lVar7 = (ulong)*puVar8 + lVar6 * 0x377;
      lVar6 = lVar7 + 0x694;
      lVar9 = lVar9 + -4;
      puVar8 = puVar8 + 1;
    } while (lVar9 != 0);
    lVar7 = lVar7 + 0xa79;
  }
  if (param_3[1] == 0) {
    lVar6 = 0x3e5;
  }
  else {
    lVar9 = 0;
    piVar10 = (int *)*param_3;
    piVar11 = piVar10 + param_3[1] * 3;
    do {
      lVar6 = (long)*piVar10 + lVar9 * 0x2b3 +
              ((ulong)(uint)piVar10[1] + (ulong)(uint)piVar10[2] * 599) * 599;
      lVar9 = lVar6 + 0xcd4f0e2;
      piVar10 = piVar10 + 3;
    } while (piVar10 != piVar11);
    lVar6 = lVar6 + 0xcd4f4c7;
  }
  if (param_8[1] == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    pcVar5 = (char *)*param_8;
    pcVar1 = pcVar5 + param_8[1] * 8;
    do {
      lVar2 = 0x26936;
      if (*pcVar5 != '\0') {
        lVar2 = 0x26937;
      }
      lVar9 = lVar2 + lVar9 * 499 + (ulong)*(uint *)(pcVar5 + 4) * 0x18d + 499;
      pcVar5 = pcVar5 + 8;
    } while (pcVar5 != pcVar1);
    lVar9 = lVar9 * 0x3e5;
  }
  lVar2 = 0x3e5;
  if (param_4 != 0) {
    lVar2 = 0x3e6;
  }
  lVar3 = 0x3e5;
  if (*param_7 != '\0') {
    lVar3 = 0x3e6;
  }
  lVar4 = 0x3e5;
  if (param_7[1] != '\0') {
    lVar4 = 0x3e6;
  }
  return param_1 + (lVar7 + (lVar6 + (lVar2 + (((lVar3 + (lVar4 + ((long)*(int *)(param_7 + 4) +
                                                                  ((long)*(int *)(param_7 + 8) +
                                                                  ((long)*(int *)(param_7 + 0xc) +
                                                                  ((long)*(int *)(param_7 + 0x10) +
                                                                  ((long)*(int *)(param_7 + 0x14) +
                                                                  ((long)*(int *)(param_7 + 0x24) +
                                                                  ((long)*(int *)(param_7 + 0x28) +
                                                                  ((long)*(int *)(param_7 + 0x2c) +
                                                                  (*(int *)(param_7 + 0x30) + lVar9)
                                                                  * 0x3e5) * 0x3e5) * 0x3e5) * 0x3e5
                                                                  ) * 0x3e5) * 0x3e5) * 0x3e5) *
                                                                  0x3e5) * 0x3e5) * 0x3e5) * 0x3e5 +
                                               (long)param_6) * 0x3e5 + (long)param_5) * 0x3e5) *
                                     0x3e5) * 0x3e5) * 0x3e5 + -0x6c9f1893177eda27;
}



/* Entry: 109a037d0; end: 109a03867;  */

ulong FUN_109a037d0(undefined8 param_1,long param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 uStack_21;
  
  if (*(uint *)(param_2 + 4) == 0xffffffff) {
    uVar2 = 0xffffffffffffffff;
    puVar1 = (undefined1 *)0x11de784a;
  }
  else {
    puVar1 = &uStack_21;
    (*(code *)(&PTR_FUN_110b208c8)[*(uint *)(param_2 + 4)])(puVar1);
    uVar2 = (ulong)*(uint *)(param_2 + 4);
    if (*(uint *)(param_2 + 4) == 0xffffffff) {
      uVar2 = 0xffffffffffffffff;
    }
  }
  uVar4 = uVar2 + 0x10;
  uVar3 = ((ulong)puVar1 ^ (uVar4 >> 0x10 | uVar4 << 0x30)) * -0x622015f714c7d297;
  uVar4 = ((uVar4 >> 0x10 | uVar4 << 0x30) ^ uVar3 >> 0x2f ^ uVar3) * -0x622015f714c7d297;
  return (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297 ^ uVar2;
}



/* Entry: 109a03868; end: 109a0388b;  */

undefined1 FUN_109a03868(undefined8 param_1,undefined1 *param_2)

{
  return *param_2;
}



/* Entry: 109a0388c; end: 109a038bf;  */

undefined8 FUN_109a0388c(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_109a04268(&uStack_28);
  return param_1;
}



/* Entry: 109a038c0; end: 109a039b3;  */

undefined8 * FUN_109a038c0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  undefined1 uStack_31;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  else {
    lStack_40 = param_2;
    FUN_109a043b4(&lStack_50,&uStack_31,&lStack_40);
    param_1[3] = plStack_48;
    param_1[2] = lStack_50;
    param_1[4] = 0;
    param_1[5] = 0;
    if (lStack_50 != 0) {
      FUN_109a04550(&lStack_50,&uStack_31,param_1 + 2);
      FUN_109a039b4(param_1 + 4,&lStack_50);
      if (plStack_48 != (long *)0x0) {
        plVar1 = plStack_48 + 1;
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
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
        }
      }
    }
  }
  return param_1;
}



/* Entry: 109a039b4; end: 109a03a17;  */

undefined8 * FUN_109a039b4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 109a03a18; end: 109a03aab;  */

void FUN_109a03a18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_38 [8];
  long *plStack_30;
  undefined1 uStack_21;
  
  FUN_109a047c4(auStack_38,param_2);
  FUN_109a04804(param_1,&uStack_21,auStack_38,param_3);
  if (plStack_30 != (long *)0x0) {
    plVar1 = plStack_30 + 1;
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
      (**(code **)(*plStack_30 + 0x10))(plStack_30);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_30);
    }
  }
  return;
}



/* Entry: 109a03aac; end: 109a03b4f;  */

void FUN_109a03aac(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_38 [8];
  long *plStack_30;
  undefined1 uStack_21;
  
  if (*(long *)(param_2 + 0x10) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_109a047c4(auStack_38,param_2);
    FUN_109a04c68(param_1,&uStack_21,auStack_38,param_3);
    if (plStack_30 != (long *)0x0) {
      plVar1 = plStack_30 + 1;
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
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_30);
      }
    }
  }
  return;
}



/* Entry: 109a03b50; end: 109a03bf3;  */

void FUN_109a03b50(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_38 [8];
  long *plStack_30;
  undefined1 uStack_21;
  
  if (*(long *)(param_2 + 0x10) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_109a047c4(auStack_38,param_2);
    FUN_109a05058(param_1,&uStack_21,auStack_38,param_3);
    if (plStack_30 != (long *)0x0) {
      plVar1 = plStack_30 + 1;
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
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_30);
      }
    }
  }
  return;
}



/* Entry: 109a03bf4; end: 109a03e47;  */

void FUN_109a03bf4(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined1 auStack_70 [8];
  long *plStack_68;
  
  FUN_109a047c4(auStack_70,param_1);
  puVar7 = param_3;
  FUN_109a0543c(auStack_70,param_3,param_4,param_5,param_6,param_7);
  if (plStack_68 != (long *)0x0) {
    plVar15 = plStack_68 + 1;
    do {
      lVar9 = *plVar15;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *plVar15 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
    }
  }
  if (*(long *)(param_1 + 0x10) != 0 && param_4 != (undefined8 *)0x0) {
    if ((ulong)param_4 >> 0x3a != 0) {
      FUN_109a042d8();
LAB_109a03e14:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x109a03e18);
      (*pcVar5)();
    }
    puVar6 = param_4;
    FUN_109a042ec();
    puVar12 = puVar6 + (long)puVar7 * 8;
    lVar9 = (long)param_4 * 0x70;
    puVar13 = puVar6;
    do {
      puVar14 = puVar13;
      if ((*(byte *)(param_3 + 0xd) & 0x18) == 0) {
        plVar15 = (long *)*param_3;
        if (puVar6 < puVar12) {
          puVar6[5] = 0;
          puVar6[4] = 0;
          puVar6[7] = 0;
          puVar6[6] = 0;
          puVar6[1] = 0;
          *puVar6 = 0;
          puVar6[3] = 0;
          puVar6[2] = 0;
          puVar2 = puVar6;
        }
        else {
          lVar8 = (long)puVar6 - (long)puVar13;
          uVar1 = (lVar8 >> 6) + 1;
          if (uVar1 >> 0x3a != 0) {
            FUN_109a042d8();
            goto LAB_109a03e14;
          }
          uVar11 = (long)puVar12 - (long)puVar13 >> 5;
          if (uVar11 <= uVar1) {
            uVar11 = uVar1;
          }
          if (0x7fffffffffffffbf < (ulong)((long)puVar12 - (long)puVar13)) {
            uVar11 = 0x3ffffffffffffff;
          }
          FUN_109a042ec();
          puVar2 = (undefined8 *)(uVar11 + lVar8);
          puVar12 = (undefined8 *)(uVar11 + (long)puVar7 * 0x40);
          puVar2[5] = 0;
          puVar2[4] = 0;
          puVar2[7] = 0;
          puVar2[6] = 0;
          puVar2[1] = 0;
          *puVar2 = 0;
          puVar2[3] = 0;
          puVar2[2] = 0;
          puVar14 = puVar2 + (lVar8 >> 6) * -8;
          puVar7 = puVar13;
          _memcpy(puVar14,puVar13,lVar8);
          if (puVar13 != (undefined8 *)0x0) {
            __ZdlPv(puVar13);
          }
        }
        puVar6 = puVar2 + 8;
        *puVar2 = *param_3;
        *(undefined4 *)(puVar2 + 1) = 0;
        lVar8 = *(long *)(*plVar15 + 0x18);
        uVar10 = *(undefined8 *)(lVar8 + 0x40);
        *(undefined4 *)((long)puVar2 + 0x14) = *(undefined4 *)(lVar8 + 0x48);
        *(undefined8 *)((long)puVar2 + 0xc) = uVar10;
        lVar8 = *(long *)(*plVar15 + 0x18);
        uVar10 = *(undefined8 *)(lVar8 + 0x50);
        *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(lVar8 + 0x58);
        puVar2[3] = uVar10;
        puVar2[6] = 0;
        puVar2[7] = 0;
        puVar2[5] = 0;
      }
      param_3 = param_3 + 0xe;
      lVar9 = lVar9 + -0x70;
      puVar13 = puVar14;
    } while (lVar9 != 0);
    if (puVar14 != puVar6) {
      FUN_109a03e48(param_1,param_2,puVar14,(long)puVar6 - (long)puVar14 >> 6);
    }
    if (puVar14 != (undefined8 *)0x0) {
      __ZdlPv(puVar14);
    }
  }
  return;
}



/* Entry: 109a03e48; end: 109a04267;  */

void FUN_109a03e48(long param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long *plVar6;
  char cVar7;
  bool bVar8;
  code *pcVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined1 auStack_98 [8];
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0x78))(auStack_98);
    if (plStack_90 != (long *)0x0) {
      plVar6 = plStack_90 + 1;
      do {
        lVar14 = *plVar6;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar8) {
          *plVar6 = lVar14 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_90 + 0x10))(plStack_90);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_90);
      }
    }
    puVar5 = PTR___tlv_bootstrap_11340d6c0;
    ppuVar13 = &PTR___tlv_bootstrap_11340dd68;
    if (param_4 != 0) {
      puVar3 = param_3 + param_4 * 8;
      ppuVar10 = &PTR___tlv_bootstrap_11340d6c0;
      (*(code *)PTR___tlv_bootstrap_11340d6c0)();
      puVar12 = PTR___tlv_bootstrap_11340dd68;
      do {
        uVar18 = *(undefined8 *)*param_3;
        plVar6 = (long *)((undefined8 *)*param_3)[1];
        if (plVar6 != (long *)0x0) {
          plVar1 = plVar6 + 1;
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar8) {
              *plVar1 = *plVar1 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        FUN_109a07a3c(uVar18,param_3);
        if ((*(byte *)(param_3 + 1) >> 3 & 1) == 0) {
          ppuVar11 = ppuVar13;
          (*(code *)puVar12)();
          if (*(char *)ppuVar11 == '\0') {
            ppuVar11 = ppuVar13;
            (*(code *)puVar12)();
            *(undefined1 *)ppuVar11 = 1;
            ppuVar11 = &PTR___tlv_bootstrap_11340d6c0;
            (*(code *)puVar5)(&PTR___tlv_bootstrap_11340d6c0);
            __tlv_atexit(FUN_109a0388c,ppuVar11,0x100000000);
          }
          puVar17 = (undefined8 *)ppuVar10[1];
          if (puVar17 < ppuVar10[2]) {
            *puVar17 = uVar18;
            puVar17[1] = plVar6;
            if (plVar6 != (long *)0x0) {
              plVar1 = plVar6 + 1;
              do {
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar8) {
                  *plVar1 = *plVar1 + 1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
            }
            puVar17 = puVar17 + 2;
          }
          else {
            lVar14 = (long)puVar17 - (long)*ppuVar10;
            uVar2 = (lVar14 >> 4) + 1;
            if (uVar2 >> 0x3c != 0) {
              FUN_109a04320();
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x109a04240);
              (*pcVar9)();
            }
            uVar15 = (long)ppuVar10[2] - (long)*ppuVar10;
            uVar16 = (long)uVar15 >> 3;
            if (uVar16 <= uVar2) {
              uVar16 = uVar2;
            }
            if (0x7fffffffffffffef < uVar15) {
              uVar16 = 0xfffffffffffffff;
            }
            ppuVar11 = ppuVar10;
            ppuStack_68 = ppuVar10;
            FUN_109a04334();
            puVar4 = (undefined8 *)((long)ppuVar11 + lVar14);
            *puVar4 = uVar18;
            puVar4[1] = plVar6;
            if (plVar6 != (long *)0x0) {
              plVar1 = plVar6 + 1;
              do {
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar8) {
                  *plVar1 = *plVar1 + 1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
            }
            puVar17 = puVar4 + 2;
            puVar19 = (undefined *)((long)puVar4 - ((long)ppuVar10[1] - (long)*ppuVar10));
            _memcpy(puVar19);
            plStack_88 = (long *)*ppuVar10;
            *ppuVar10 = puVar19;
            ppuVar10[1] = (undefined *)puVar17;
            puStack_70 = ppuVar10[2];
            ppuVar10[2] = (undefined *)(ppuVar11 + uVar16 * 2);
            plStack_80 = plStack_88;
            plStack_78 = plStack_88;
            func_0x000109a04368(&plStack_88);
          }
          ppuVar10[1] = (undefined *)puVar17;
        }
        if (plVar6 != (long *)0x0) {
          plVar1 = plVar6 + 1;
          do {
            lVar14 = *plVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar8) {
              *plVar1 = lVar14 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
        param_3 = param_3 + 8;
      } while (param_3 != puVar3);
    }
    puVar5 = PTR___tlv_bootstrap_11340dd68;
    ppuVar10 = ppuVar13;
    (*(code *)PTR___tlv_bootstrap_11340dd68)();
    if (*(char *)ppuVar10 == '\0') {
      ppuVar10 = ppuVar13;
      (*(code *)puVar5)();
      *(undefined1 *)ppuVar10 = 1;
      ppuVar10 = &PTR___tlv_bootstrap_11340d6c0;
      (*(code *)PTR___tlv_bootstrap_11340d6c0)();
      __tlv_atexit(FUN_109a0388c,ppuVar10,0x100000000);
    }
    puVar12 = PTR___tlv_bootstrap_11340d6c0;
    ppuVar10 = &PTR___tlv_bootstrap_11340d6c0;
    (*(code *)PTR___tlv_bootstrap_11340d6c0)();
    if (*ppuVar10 != ppuVar10[1]) {
      (**(code **)(**(long **)(param_1 + 0x10) + 0x80))
                (&plStack_88,*(long **)(param_1 + 0x10),param_2);
      uVar18 = *(undefined8 *)(param_1 + 0x20);
      ppuVar11 = ppuVar13;
      (*(code *)puVar5)();
      if (*(char *)ppuVar11 == '\0') {
        ppuVar11 = ppuVar13;
        (*(code *)puVar5)();
        *(undefined1 *)ppuVar11 = 1;
        ppuVar11 = &PTR___tlv_bootstrap_11340d6c0;
        (*(code *)puVar12)(&PTR___tlv_bootstrap_11340d6c0);
        __tlv_atexit(FUN_109a0388c,ppuVar11,0x100000000);
      }
      FUN_109a0af40(uVar18,&plStack_88,*ppuVar10,(long)ppuVar10[1] - (long)*ppuVar10 >> 4);
      ppuVar11 = ppuVar13;
      (*(code *)puVar5)();
      if (*(char *)ppuVar11 == '\0') {
        (*(code *)puVar5)();
        *(undefined1 *)ppuVar13 = 1;
        ppuVar13 = &PTR___tlv_bootstrap_11340d6c0;
        (*(code *)puVar12)(&PTR___tlv_bootstrap_11340d6c0);
        __tlv_atexit(FUN_109a0388c,ppuVar13,0x100000000);
      }
      puVar5 = *ppuVar10;
      puVar12 = ppuVar10[1];
      while (plVar6 = plStack_80, puVar12 != puVar5) {
        puVar12 = puVar12 + -0x10;
        func_0x0001099f0d40();
      }
      ppuVar10[1] = puVar5;
      if (plStack_80 != (long *)0x0) {
        plVar1 = plStack_80 + 1;
        do {
          lVar14 = *plVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar14 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_80 + 0x10))(plStack_80);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
    }
  }
  return;
}



/* Entry: 109a04268; end: 109a042d7;  */

void FUN_109a04268(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x0001099f0d40();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 109a042d8; end: 109a042eb;  */

undefined1  [16] FUN_109a042d8(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)puVar1 >> 0x3a == 0) {
    lVar2 = (long)puVar1 << 6;
    __Znwm(lVar2);
    auVar5._8_8_ = puVar1;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  func_0x000104c4f740();
  plVar3 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3c == 0) {
    lVar2 = param_2 << 4;
    __Znwm(lVar2);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar2;
    return auVar6;
  }
  func_0x000104c4f740();
  lVar2 = plVar3[1];
  lVar4 = plVar3[2];
  while (lVar4 != lVar2) {
    plVar3[2] = lVar4 + -0x10;
    func_0x0001099f0d40();
    lVar4 = plVar3[2];
  }
  if (*plVar3 != 0) {
    __ZdlPv();
  }
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = plVar3;
  return auVar7;
}



/* Entry: 109a042ec; end: 109a0431f;  */

undefined1  [16] FUN_109a042ec(ulong param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_1 >> 0x3a == 0) {
    lVar1 = param_1 << 6;
    __Znwm(lVar1);
    auVar4._8_8_ = param_1;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  func_0x000104c4f740();
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 4;
    __Znwm(lVar1);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar1;
    return auVar5;
  }
  func_0x000104c4f740();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    plVar2[2] = lVar3 + -0x10;
    func_0x0001099f0d40();
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = plVar2;
  return auVar6;
}



/* Entry: 109a04320; end: 109a04333;  */

undefined1  [16] FUN_109a04320(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3c == 0) {
    lVar2 = param_2 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000104c4f740();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x10;
    func_0x0001099f0d40();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 109a04334; end: 109a043b3;  */

undefined1  [16] FUN_109a04334(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104c4f740();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    func_0x0001099f0d40();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 109a043b4; end: 109a04413;  */

void FUN_109a043b4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar4 = 0x1f0;
  __Znwm();
  FUN_109a04414();
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



/* Entry: 109a04414; end: 109a0445f;  */

undefined8 * FUN_109a04414(undefined8 *param_1,undefined8 *param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110b208f0;
  FUN_1099f6c00(param_1 + 3,*param_2);
  return param_1;
}



/* Entry: 109a04460; end: 109a0446f;  */

void FUN_109a04460(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b208f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}


