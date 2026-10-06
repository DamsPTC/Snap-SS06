/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a229f34; end: 10a22a2af;  */

undefined8 * FUN_10a229f34(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  code *pcStack_60;
  code *pcStack_58;
  long *plStack_50;
  undefined8 *puStack_48;
  
  *param_1 = &PTR_FUN_110bb3da0;
  lVar9 = *(long *)(*(long *)param_1[1] + 0x208);
  if (*(long *)(lVar9 + 0xb8) != 0) {
    puVar7 = *(undefined8 **)(lVar9 + 0xb0);
    if (puVar7 == (undefined8 *)0x0) {
      FUN_10a23cdbc(param_1[2],param_1[3]);
    }
    else {
      plVar8 = (long *)puVar7[2];
      plStack_70 = (long *)0x0;
      plStack_68 = (long *)0x0;
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)0xc8;
        __Znwm();
        plVar8[2] = 0;
        plVar8[1] = 0x200000006;
        *(undefined2 *)(plVar8 + 3) = 4;
        plVar8[5] = 0;
        plVar8[4] = 0;
        plVar8[7] = 0;
        plVar8[6] = 0;
        plVar8[9] = 0;
        plVar8[8] = 0;
        plVar8[0xb] = 0;
        plVar8[10] = 0;
        plVar8[0xd] = 0;
        plVar8[0xc] = 0;
        plVar8[0xf] = 0;
        plVar8[0xe] = 0;
        plVar8[0x10] = 0;
        plVar8[0x11] = (long)(plVar8 + 3);
        plVar8[0x12] = 0;
        *(undefined2 *)(plVar8 + 0x13) = 0;
        *plVar8 = (long)&PTR_DAT_110bb53c0;
        plStack_78 = plVar8 + 0x14;
        *plStack_78 = lVar9;
        plVar8[0x15] = (long)param_1;
        *(undefined1 *)(plVar8 + 0x17) = 1;
        plVar8[0x18] = 0;
        pcStack_60 = FUN_10a23ce5c;
        plStack_70 = plVar8;
        plStack_68 = plVar8;
      }
      else {
        pcStack_58 = (code *)0x0;
        (**(code **)(*plVar8 + 0x28))(plVar8,0,&pcStack_58);
        if (pcStack_58 != (code *)0x0) {
          func_0x0001092af97c(&pcStack_58);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a22a234);
          (*pcVar4)();
        }
        plVar5 = (long *)0xd0;
        __Znwm();
        *(undefined2 *)(plVar5 + 3) = 4;
        plVar5[2] = 0;
        plVar5[1] = 0x200000006;
        plVar5[5] = 0;
        plVar5[4] = 0;
        plVar5[7] = 0;
        plVar5[6] = 0;
        plVar5[9] = 0;
        plVar5[8] = 0;
        plVar5[0xb] = 0;
        plVar5[10] = 0;
        plVar5[0xd] = 0;
        plVar5[0xc] = 0;
        plVar5[0xf] = 0;
        plVar5[0xe] = 0;
        plVar5[0x10] = 0;
        plVar5[0x11] = (long)(plVar5 + 3);
        plVar5[0x12] = 0;
        *(undefined2 *)(plVar5 + 0x13) = 0;
        *plVar5 = (long)&PTR_FUN_110bb5388;
        plVar5[0x14] = lVar9;
        plVar5[0x15] = (long)param_1;
        *(undefined1 *)(plVar5 + 0x17) = 1;
        plVar5[0x18] = 0;
        plVar5[0x19] = (long)plVar8;
        if (plStack_70 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_70 + 1);
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
              (**(code **)(*plStack_70 + 8))();
            }
          }
        }
        plStack_70 = plVar5;
        if (plStack_68 != (long *)0x0) {
          func_0x0001092b4274(&plStack_68);
        }
        pcStack_60 = FUN_10a23ce2c;
        plStack_78 = plVar5 + 0x14;
        plStack_68 = plVar5;
        __ZNSt13exception_ptrD1Ev(&pcStack_58);
      }
      plVar8 = plStack_78;
      if (plStack_78[4] != 0) {
        func_0x0001092b4274();
      }
      plVar8[4] = (long)plStack_68;
      plStack_68 = (long *)0x0;
      pcStack_58 = pcStack_60;
      plStack_50 = plStack_78;
      puStack_48 = puVar7;
      (**(code **)*puVar7)(puVar7,&pcStack_58);
      plStack_80 = plStack_70;
      plStack_70 = (long *)0x0;
      if (plStack_68 != (long *)0x0) {
        func_0x0001092b4274(&plStack_68);
        if (plStack_70 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_70 + 1);
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
              (**(code **)(*plStack_70 + 8))();
            }
          }
        }
      }
      FUN_109d1a244(&plStack_80);
      FUN_10a09b344(&plStack_80);
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
    }
  }
  func_0x00010a23ca4c(param_1 + 2);
  return param_1;
}



/* Entry: 10a22a2b0; end: 10a22a2b3;  */

undefined8 * FUN_10a22a2b0(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  code *pcStack_60;
  code *pcStack_58;
  long *plStack_50;
  undefined8 *puStack_48;
  
  *param_1 = &PTR_FUN_110bb3da0;
  lVar9 = *(long *)(*(long *)param_1[1] + 0x208);
  if (*(long *)(lVar9 + 0xb8) != 0) {
    puVar7 = *(undefined8 **)(lVar9 + 0xb0);
    if (puVar7 == (undefined8 *)0x0) {
      FUN_10a23cdbc(param_1[2],param_1[3]);
    }
    else {
      plVar8 = (long *)puVar7[2];
      plStack_70 = (long *)0x0;
      plStack_68 = (long *)0x0;
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)0xc8;
        __Znwm();
        plVar8[2] = 0;
        plVar8[1] = 0x200000006;
        *(undefined2 *)(plVar8 + 3) = 4;
        plVar8[5] = 0;
        plVar8[4] = 0;
        plVar8[7] = 0;
        plVar8[6] = 0;
        plVar8[9] = 0;
        plVar8[8] = 0;
        plVar8[0xb] = 0;
        plVar8[10] = 0;
        plVar8[0xd] = 0;
        plVar8[0xc] = 0;
        plVar8[0xf] = 0;
        plVar8[0xe] = 0;
        plVar8[0x10] = 0;
        plVar8[0x11] = (long)(plVar8 + 3);
        plVar8[0x12] = 0;
        *(undefined2 *)(plVar8 + 0x13) = 0;
        *plVar8 = (long)&PTR_DAT_110bb53c0;
        plStack_78 = plVar8 + 0x14;
        *plStack_78 = lVar9;
        plVar8[0x15] = (long)param_1;
        *(undefined1 *)(plVar8 + 0x17) = 1;
        plVar8[0x18] = 0;
        pcStack_60 = FUN_10a23ce5c;
        plStack_70 = plVar8;
        plStack_68 = plVar8;
      }
      else {
        pcStack_58 = (code *)0x0;
        (**(code **)(*plVar8 + 0x28))(plVar8,0,&pcStack_58);
        if (pcStack_58 != (code *)0x0) {
          func_0x0001092af97c(&pcStack_58);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a22a234);
          (*pcVar4)();
        }
        plVar5 = (long *)0xd0;
        __Znwm();
        *(undefined2 *)(plVar5 + 3) = 4;
        plVar5[2] = 0;
        plVar5[1] = 0x200000006;
        plVar5[5] = 0;
        plVar5[4] = 0;
        plVar5[7] = 0;
        plVar5[6] = 0;
        plVar5[9] = 0;
        plVar5[8] = 0;
        plVar5[0xb] = 0;
        plVar5[10] = 0;
        plVar5[0xd] = 0;
        plVar5[0xc] = 0;
        plVar5[0xf] = 0;
        plVar5[0xe] = 0;
        plVar5[0x10] = 0;
        plVar5[0x11] = (long)(plVar5 + 3);
        plVar5[0x12] = 0;
        *(undefined2 *)(plVar5 + 0x13) = 0;
        *plVar5 = (long)&PTR_FUN_110bb5388;
        plVar5[0x14] = lVar9;
        plVar5[0x15] = (long)param_1;
        *(undefined1 *)(plVar5 + 0x17) = 1;
        plVar5[0x18] = 0;
        plVar5[0x19] = (long)plVar8;
        if (plStack_70 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_70 + 1);
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
              (**(code **)(*plStack_70 + 8))();
            }
          }
        }
        plStack_70 = plVar5;
        if (plStack_68 != (long *)0x0) {
          func_0x0001092b4274(&plStack_68);
        }
        pcStack_60 = FUN_10a23ce2c;
        plStack_78 = plVar5 + 0x14;
        plStack_68 = plVar5;
        __ZNSt13exception_ptrD1Ev(&pcStack_58);
      }
      plVar8 = plStack_78;
      if (plStack_78[4] != 0) {
        func_0x0001092b4274();
      }
      plVar8[4] = (long)plStack_68;
      plStack_68 = (long *)0x0;
      pcStack_58 = pcStack_60;
      plStack_50 = plStack_78;
      puStack_48 = puVar7;
      (**(code **)*puVar7)(puVar7,&pcStack_58);
      plStack_80 = plStack_70;
      plStack_70 = (long *)0x0;
      if (plStack_68 != (long *)0x0) {
        func_0x0001092b4274(&plStack_68);
        if (plStack_70 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_70 + 1);
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
              (**(code **)(*plStack_70 + 8))();
            }
          }
        }
      }
      FUN_109d1a244(&plStack_80);
      FUN_10a09b344(&plStack_80);
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
    }
  }
  func_0x00010a23ca4c(param_1 + 2);
  return param_1;
}



/* Entry: 10a22a2b4; end: 10a22a2c7;  */

void FUN_10a22a2b4(void)

{
  FUN_10a229f34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a22a2c8; end: 10a22a47b;  */

/* WARNING: Removing unreachable block (ram,0x00010a22a3f4) */
/* WARNING: Removing unreachable block (ram,0x00010a22a3f8) */
/* WARNING: Removing unreachable block (ram,0x00010a22a400) */
/* WARNING: Removing unreachable block (ram,0x00010a22a408) */
/* WARNING: Removing unreachable block (ram,0x00010a22a424) */

void FUN_10a22a2c8(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  lVar6 = *(long *)(param_1 + 0x10);
  plVar4 = (long *)0x48;
  __Znwm();
  plVar7 = plVar4 + 1;
  *plVar7 = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110bb53f8;
  plVar4[3] = (long)&PTR_FUN_110bb3ca0;
  lVar5 = param_2[1];
  lVar8 = *param_2;
  plVar4[5] = param_2[1];
  plVar4[4] = lVar8;
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
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  __ZNSt3__115recursive_mutex4lockEv(lVar6 + 0x20);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = *plVar7 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar7 = *(long **)(lVar6 + 0x18);
  *(long **)(lVar6 + 0x10) = plVar4 + 3;
  *(long **)(lVar6 + 0x18) = plVar4;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  FUN_10a229c20(lVar6);
  __ZNSt3__115recursive_mutex6unlockEv(lVar6 + 0x20);
  if (plVar4 != (long *)0x0) {
    plVar7 = plVar4 + 1;
    do {
      lVar5 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a22a47c; end: 10a22a483;  */

void FUN_10a22a47c(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  undefined8 uStack_48;
  
  lVar3 = *(long *)(param_2 + 0x10);
  __ZNSt3__115recursive_mutex4lockEv(lVar3 + 0x20);
  *(undefined8 *)(lVar3 + 0x98) = *(undefined8 *)(lVar3 + 0x90);
  *(undefined1 *)(lVar3 + 0x78) = 0;
  *(undefined8 *)(lVar3 + 0x80) = 0;
  *(undefined1 *)(lVar3 + 0x88) = 0;
  plVar1 = *(long **)(lVar3 + 0xa8);
  *(undefined8 *)(lVar3 + 0xa8) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  (**(code **)(**(long **)(lVar3 + 0x10) + 0x10))();
  if (param_3 != 0) {
    uVar2 = 0x140;
    __Znwm();
    FUN_10a0f639c();
    plVar1 = *(long **)(lVar3 + 0xa8);
    *(undefined8 *)(lVar3 + 0xa8) = uVar2;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    uVar4 = 0;
    while( true ) {
      plVar1 = *(long **)(lVar3 + 0xa8);
      (**(code **)(*plVar1 + 0x208))();
      if ((uint)plVar1 <= uVar4) break;
      (**(code **)(**(long **)(lVar3 + 0xa8) + 0x218))(*(long **)(lVar3 + 0xa8),uVar4);
      (**(code **)(**(long **)(lVar3 + 0xa8) + 0xb8))
                (*(long **)(lVar3 + 0xa8),&PTR_s_timestamp_110bb3d70);
      uStack_48 = param_1;
      FUN_10a229d94((undefined8 *)(lVar3 + 0x90),&uStack_48);
      (**(code **)(**(long **)(lVar3 + 0xa8) + 0x220))();
      uVar4 = uVar4 + 1;
    }
    (**(code **)(**(long **)(lVar3 + 0x10) + 0x18))();
  }
  __ZNSt3__115recursive_mutex6unlockEv(lVar3 + 0x20);
  return;
}



/* Entry: 10a22a484; end: 10a22a4d3;  */

undefined8 * FUN_10a22a484(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110bb3dd8;
  func_0x00010a23a594(param_1 + 0xf);
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  plVar1 = (long *)param_1[2];
  param_1[2] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return param_1;
}



/* Entry: 10a22a4d4; end: 10a22a4d7;  */

undefined8 * FUN_10a22a4d4(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110bb3dd8;
  func_0x00010a23a594(param_1 + 0xf);
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  plVar1 = (long *)param_1[2];
  param_1[2] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return param_1;
}



/* Entry: 10a22a4d8; end: 10a22a4eb;  */

void FUN_10a22a4d8(void)

{
  FUN_10a22a484();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a22a4ec; end: 10a22a5b3;  */

void FUN_10a22a4ec(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x18);
  puVar4 = (undefined8 *)0x30;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110bb5448;
  puVar4[3] = &PTR_FUN_110bb3cd0;
  lVar5 = param_2[1];
  uVar7 = *param_2;
  puVar4[5] = param_2[1];
  puVar4[4] = uVar7;
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar6 = *(long **)(param_1 + 0x80);
  *(undefined8 **)(param_1 + 0x78) = puVar4 + 3;
  *(undefined8 **)(param_1 + 0x80) = puVar4;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x18);
  return;
}



/* Entry: 10a22a5b4; end: 10a22a693;  */

void FUN_10a22a5b4(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x18);
  lStack_38 = 0;
  lStack_30 = 0;
  uStack_28 = 0;
  func_0x00010a0fb0f4(*(undefined8 *)(param_1 + 0x10),&lStack_38);
  (**(code **)(**(long **)(param_1 + 0x78) + 0x10))
            (*(long **)(param_1 + 0x78),lStack_30 - lStack_38);
  uVar1 = 0x50;
  __Znwm();
  FUN_10a0f984c();
  plVar2 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  if (lStack_38 != 0) {
    lStack_30 = lStack_38;
    __ZdlPv();
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 0x18);
  return;
}



/* Entry: 10a22a694; end: 10a22a697;  */

void FUN_10a22a694(void)

{
  return;
}



/* Entry: 10a22a698; end: 10a22a783;  */

void FUN_10a22a698(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    __ZNSt3__15mutex4lockEv(param_1 + 0x18);
    if (*(long *)(param_1 + 0x78) != 0) {
      if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
        *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 8);
        uVar1 = *(undefined8 *)(param_2 + 0x10);
        *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(param_2 + 0x18);
        *(undefined8 *)(param_1 + 0x68) = uVar1;
      }
      (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
      (**(code **)(**(long **)(param_1 + 0x10) + 0x68))
                (*(double *)(param_2 + 0x10) - *(double *)(param_1 + 0x68),
                 *(long **)(param_1 + 0x10),&PTR_s_timestamp_110bb3e18);
      (**(code **)(**(long **)(param_1 + 0x10) + 0x120))(*(long **)(param_1 + 0x10),param_3,0);
      (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x18);
    return;
  }
  return;
}



/* Entry: 10a22a784; end: 10a22ab03;  */

long ** FUN_10a22a784(long param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined4 *puVar2;
  ulong uVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  long **pplVar7;
  long *plVar8;
  long **pplVar9;
  byte bVar10;
  long lVar11;
  long lVar12;
  undefined4 *puVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  
  pplVar7 = &plStack_90;
  pplVar9 = &plStack_90;
  plVar14 = (long *)(param_1 + 0x20);
  lVar11 = param_2 + 8;
  FUN_109ce5028();
  if (plVar14 == (long *)0x0) {
    uVar3 = *(ulong *)(param_1 + 0x10);
    if (uVar3 < *(ulong *)(param_1 + 0x18)) {
      FUN_10a2327a8(uVar3,param_2);
      lVar16 = uVar3 + 0xb0;
      *(long *)(param_1 + 0x10) = lVar16;
    }
    else {
      plVar1 = (long *)(param_1 + 8);
      lVar16 = uVar3 - *plVar1;
      plVar15 = (long *)((lVar16 >> 4) * 0x2e8ba2e8ba2e8ba3 + 1);
      if ((long *)0x1745d1745d1745d < plVar15) {
        FUN_10a23274c();
        FUN_10a232b30(&plStack_90);
        __Unwind_Resume();
        FUN_10a232e34(plVar14 + 5);
        if (*(char *)((long)plVar14 + 0x17) < '\0') {
          __ZdlPv(*plVar14);
        }
        return (long **)plVar14;
      }
      lVar12 = (long)(*(ulong *)(param_1 + 0x18) - *plVar1) >> 4;
      plVar14 = (long *)(lVar12 * 0x5d1745d1745d1746);
      if (plVar14 < plVar15 || (long)plVar14 - (long)plVar15 == 0) {
        plVar14 = plVar15;
      }
      if (0xba2e8ba2e8ba2d < (ulong)(lVar12 * 0x2e8ba2e8ba2e8ba3)) {
        plVar14 = (long *)0x1745d1745d1745d;
      }
      plStack_70 = plVar1;
      if (plVar14 == (long *)0x0) {
        lVar11 = 0;
      }
      else {
        FUN_10a232760();
      }
      lVar16 = (long)plVar14 + lVar16;
      plStack_90 = plVar14;
      plStack_88 = (long *)lVar16;
      plStack_80 = (long *)lVar16;
      plStack_78 = plVar14 + lVar11 * 0x16;
      FUN_10a2327a8(lVar16,param_2);
      plVar8 = *(long **)(param_1 + 8);
      plVar4 = *(long **)(param_1 + 0x10);
      puVar2 = (undefined4 *)((long)plVar8 + (lVar16 - (long)plVar4));
      plVar15 = plVar8;
      puVar13 = puVar2;
      if (plVar4 != plVar8) {
        do {
          *puVar13 = (int)*plVar15;
          lVar17 = plVar15[2];
          lVar12 = plVar15[1];
          *(long *)(puVar13 + 6) = plVar15[3];
          *(long *)(puVar13 + 4) = lVar17;
          *(long *)(puVar13 + 2) = lVar12;
          plVar15[2] = 0;
          plVar15[3] = 0;
          plVar15[1] = 0;
          lVar17 = plVar15[5];
          lVar12 = plVar15[4];
          *(long *)(puVar13 + 0xc) = plVar15[6];
          *(long *)(puVar13 + 10) = lVar17;
          *(long *)(puVar13 + 8) = lVar12;
          plVar15[5] = 0;
          plVar15[6] = 0;
          plVar15[4] = 0;
          lVar17 = plVar15[8];
          lVar12 = plVar15[7];
          *(long *)(puVar13 + 0x12) = plVar15[9];
          *(long *)(puVar13 + 0x10) = lVar17;
          *(long *)(puVar13 + 0xe) = lVar12;
          plVar15[8] = 0;
          plVar15[9] = 0;
          plVar15[7] = 0;
          lVar17 = plVar15[0xb];
          lVar12 = plVar15[10];
          *(long *)(puVar13 + 0x18) = plVar15[0xc];
          *(long *)(puVar13 + 0x16) = lVar17;
          *(long *)(puVar13 + 0x14) = lVar12;
          plVar15[10] = 0;
          plVar15[0xb] = 0;
          plVar15[0xc] = 0;
          lVar17 = plVar15[0xe];
          lVar12 = plVar15[0xd];
          *(long *)(puVar13 + 0x1e) = plVar15[0xf];
          *(long *)(puVar13 + 0x1c) = lVar17;
          *(long *)(puVar13 + 0x1a) = lVar12;
          plVar15[0xd] = 0;
          plVar15[0xe] = 0;
          plVar15[0xf] = 0;
          lVar17 = plVar15[0x11];
          lVar12 = plVar15[0x10];
          *(long *)(puVar13 + 0x24) = plVar15[0x12];
          *(long *)(puVar13 + 0x22) = lVar17;
          *(long *)(puVar13 + 0x20) = lVar12;
          plVar15[0x10] = 0;
          plVar15[0x11] = 0;
          plVar15[0x12] = 0;
          lVar17 = plVar15[0x14];
          lVar12 = plVar15[0x13];
          *(long *)(puVar13 + 0x2a) = plVar15[0x15];
          *(long *)(puVar13 + 0x28) = lVar17;
          *(long *)(puVar13 + 0x26) = lVar12;
          plVar15[0x13] = 0;
          plVar15[0x14] = 0;
          plVar15[0x15] = 0;
          plVar15 = plVar15 + 0x16;
          puVar13 = puVar13 + 0x2c;
        } while (plVar15 != plVar4);
        do {
          FUN_10a23298c();
          plVar8 = plVar8 + 0x16;
        } while (plVar8 != plVar4);
        plVar8 = (long *)*plVar1;
      }
      lVar16 = lVar16 + 0xb0;
      *(undefined4 **)(param_1 + 8) = puVar2;
      *(long *)(param_1 + 0x10) = lVar16;
      plStack_78 = *(long **)(param_1 + 0x18);
      *(long **)(param_1 + 0x18) = plVar14 + lVar11 * 0x16;
      plStack_90 = plVar8;
      plStack_88 = plVar8;
      plStack_80 = plVar8;
      FUN_10a232b30(&plStack_90);
    }
    *(long *)(param_1 + 0x10) = lVar16;
    func_0x000107c2b054(&plStack_90,&UNK_10f64630a);
    plVar14 = plStack_88;
    if (-1 < (long)plStack_80) {
      plVar14 = (long *)((ulong)plStack_80 >> 0x38);
    }
    plStack_78 = (long *)CONCAT71(plStack_78._1_7_,plVar14 != (long *)0x0);
    plStack_70 = (long *)((ulong)plStack_70 & 0xffffffff00000000);
    uStack_68 = 0;
    plStack_60 = (long *)0x0;
    (*(code *)*param_3)(&plStack_90,param_3);
    if (plStack_60 == (long *)0x0) goto LAB_10a22aaa0;
    plVar14 = plStack_60 + 1;
    do {
      lVar11 = *plVar14;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *plVar14 = lVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      pplVar7 = pplVar9;
    } while (cVar5 != '\0');
  }
  else {
    bVar10 = *(byte *)((long)plVar14 + 0x3f);
    if ((char)bVar10 < '\0') {
      func_0x000107c3192c(&plStack_90,plVar14[5],plVar14[6]);
      bVar10 = *(byte *)((long)plVar14 + 0x3f);
    }
    else {
      plStack_88 = (long *)plVar14[6];
      plStack_90 = (long *)plVar14[5];
      plStack_80 = (long *)plVar14[7];
    }
    uVar3 = plVar14[6];
    if (-1 < (char)bVar10) {
      uVar3 = (ulong)bVar10;
    }
    plStack_78 = (long *)CONCAT71(plStack_78._1_7_,uVar3 != 0);
    plStack_70 = (long *)((ulong)plStack_70 & 0xffffffff00000000);
    uStack_68 = 0;
    plStack_60 = (long *)0x0;
    (*(code *)*param_3)(&plStack_90,param_3);
    pplVar9 = pplVar7;
    if (plStack_60 == (long *)0x0) goto LAB_10a22aaa0;
    plVar14 = plStack_60 + 1;
    do {
      lVar11 = *plVar14;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *plVar14 = lVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar14 = plStack_60;
  pplVar9 = pplVar7;
  if (lVar11 == 0) {
    (**(code **)(*plStack_60 + 0x10))(plStack_60);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
    pplVar9 = (long **)plVar14;
  }
LAB_10a22aaa0:
  if ((long)plStack_80 < 0) {
    __ZdlPv(plStack_90);
    pplVar9 = (long **)plStack_90;
  }
  return pplVar9;
}



/* Entry: 10a22ab04; end: 10a22ab3b;  */

undefined8 * FUN_10a22ab04(undefined8 *param_1)

{
  FUN_10a232e34(param_1 + 5);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a22ab3c; end: 10a22abd7;  */

undefined8 FUN_10a22ab3c(ulong param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  lVar2 = 0x20;
  puVar4 = (undefined8 *)&UNK_110bb3e40;
  do {
    uVar1 = param_1;
    FUN_10a232b7c(param_1,param_2,puVar4[-1],*puVar4);
    if ((uVar1 & 1) != 0) {
      return 1;
    }
    puVar4 = puVar4 + 2;
    lVar2 = lVar2 + -0x10;
  } while (lVar2 != 0);
  plVar3 = (long *)&UNK_110bb3e60;
  lVar2 = 0x140;
  while ((param_2 != *plVar3 ||
         (uVar1 = param_1, FUN_10a232b7c(param_1,param_2,plVar3[-1],param_2), (uVar1 & 1) == 0))) {
    plVar3 = plVar3 + 2;
    lVar2 = lVar2 + -0x10;
    if (lVar2 == 0) {
      return 0;
    }
  }
  return 1;
}



/* Entry: 10a22abd8; end: 10a22abe3;  */

void FUN_10a22abd8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 10a22abe4; end: 10a22ac43;  */

long FUN_10a22abe4(long param_1)

{
  func_0x000104c4f944(param_1 + 0x20);
  func_0x00010a232a1c(param_1 + 8);
  return param_1;
}



/* Entry: 10a22ac44; end: 10a22ac4f;  */

void FUN_10a22ac44(void)

{
  return;
}



/* Entry: 10a22ac50; end: 10a22adb7;  */

undefined8 * FUN_10a22ac50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb40b0;
  FUN_10a232be8(param_1 + 0xb);
  FUN_10a232c30(param_1 + 6);
  func_0x00010a232c8c(param_1 + 3);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a22adb8; end: 10a22add7;  */

void FUN_10a22adb8(void)

{
  return;
}



/* Entry: 10a22add8; end: 10a22ae7f;  */

void FUN_10a22add8(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_3[1];
  uStack_30 = *param_3;
  if (param_3[1] != 0) {
    plVar1 = (long *)(param_3[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&uStack_30,param_5,param_6);
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



/* Entry: 10a22ae80; end: 10a22ae8f;  */

void FUN_10a22ae80(void)

{
  return;
}



/* Entry: 10a22ae90; end: 10a22af87;  */

undefined8 * FUN_10a22ae90(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_DAT_110bb4168;
  plVar1 = (long *)param_1[0x15];
  param_1[0x15] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[0x12] != 0) {
    param_1[0x13] = param_1[0x12];
    __ZdlPv();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 4);
  func_0x00010a23a53c(param_1 + 2);
  return param_1;
}



/* Entry: 10a22af88; end: 10a22afaf;  */

void FUN_10a22af88(long param_1)

{
  if (*(char *)(param_1 + 1) == '\x01') {
    FUN_10a08db08();
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return;
}



/* Entry: 10a22afb0; end: 10a22b033;  */

long FUN_10a22afb0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  undefined *extraout_x8;
  long lVar5;
  long *plVar6;
  
  FUN_10a22af88(param_1 + 0x78);
  ppuVar4 = &PTR___tlv_bootstrap_11340de28;
  (*(code *)PTR___tlv_bootstrap_11340de28)(*(undefined8 *)(param_1 + 0x70));
  *ppuVar4 = extraout_x8;
  if (*(char *)(param_1 + 0x79) == '\x01') {
    FUN_10a08db08(param_1 + 0x78);
  }
  func_0x00010a09a9f4(param_1 + 0x10);
  plVar6 = *(long **)(param_1 + 8);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
  return param_1;
}



/* Entry: 10a22b034; end: 10a22b117;  */

long * FUN_10a22b034(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uStack_40;
  long *plStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar6 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_38 = (long *)param_2[1];
  uStack_40 = *param_2;
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
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar7 = &uStack_30;
  lVar8 = 1;
  plVar4 = param_1;
  FUN_10a22b118();
  plVar5 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar10 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar4 = plVar5;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_10a22b2a4(&uStack_40);
  __Unwind_Resume();
  plVar5 = plVar4;
  if (lVar8 != 0) {
    FUN_10a22b1b4();
    puVar9 = (undefined8 *)plVar4[1];
    for (; puVar6 != puVar7; puVar6 = puVar6 + 2) {
      lVar8 = puVar6[1];
      uVar11 = *puVar6;
      puVar9[1] = puVar6[1];
      *puVar9 = uVar11;
      if (lVar8 != 0) {
        plVar1 = (long *)(lVar8 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar9 = puVar9 + 2;
    }
    plVar4[1] = (long)puVar9;
  }
  return plVar5;
}



/* Entry: 10a22b118; end: 10a22b1b3;  */

void FUN_10a22b118(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (param_4 != 0) {
    FUN_10a22b1b4(param_1,param_4);
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



/* Entry: 10a22b1b4; end: 10a22b1eb;  */

void FUN_10a22b1b4(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = param_1;
    FUN_10a22b200();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 2);
    return;
  }
  FUN_10a22b1ec();
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    __Znwm(param_2 << 4);
    return;
  }
  func_0x000109ffded8();
  plVar4 = (long *)*plVar1;
  lVar5 = *plVar4;
  if (lVar5 != 0) {
    lVar2 = plVar4[1];
    lVar3 = lVar5;
    if (lVar2 != lVar5) {
      do {
        lVar2 = lVar2 + -0x10;
        FUN_10a22b2a4();
      } while (lVar2 != lVar5);
      lVar3 = *(long *)*plVar1;
    }
    plVar4[1] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar3);
    return;
  }
  return;
}



/* Entry: 10a22b1ec; end: 10a22b1ff;  */

void FUN_10a22b1ec(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    __Znwm(param_2 << 4);
    return;
  }
  func_0x000109ffded8();
  plVar4 = (long *)*plVar1;
  lVar5 = *plVar4;
  if (lVar5 != 0) {
    lVar2 = plVar4[1];
    lVar3 = lVar5;
    if (lVar2 != lVar5) {
      do {
        lVar2 = lVar2 + -0x10;
        FUN_10a22b2a4();
      } while (lVar2 != lVar5);
      lVar3 = *(long *)*plVar1;
    }
    plVar4[1] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar3);
    return;
  }
  return;
}



/* Entry: 10a22b200; end: 10a22b233;  */

void FUN_10a22b200(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if (param_2 >> 0x3c == 0) {
    __Znwm(param_2 << 4);
    return;
  }
  func_0x000109ffded8();
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_10a22b2a4();
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



/* Entry: 10a22b234; end: 10a22b2a3;  */

void FUN_10a22b234(long *param_1)

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
        FUN_10a22b2a4();
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



/* Entry: 10a22b2a4; end: 10a22b2fb;  */

long FUN_10a22b2a4(long param_1)

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



/* Entry: 10a22b2fc; end: 10a22b30b;  */

void FUN_10a22b2fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb4238;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a22b30c; end: 10a22b32b;  */

void FUN_10a22b30c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb4238;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a22b32c; end: 10a22b333;  */

void FUN_10a22b32c(void)

{
  return;
}



/* Entry: 10a22b334; end: 10a22b347;  */

void FUN_10a22b334(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  FUN_109ffdddc();
  lVar3 = *param_2;
  *param_2 = 0;
  *plVar2 = lVar3;
  lVar5 = param_2[2];
  lVar4 = param_2[1];
  plVar2[2] = param_2[2];
  plVar2[1] = lVar4;
  param_2[1] = 0;
  lVar4 = param_2[3];
  plVar2[3] = lVar4;
  *(int *)(plVar2 + 4) = (int)param_2[4];
  if (lVar4 != 0) {
    uVar6 = *(ulong *)(lVar5 + 8);
    uVar7 = plVar2[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar6 = uVar7 - 1 & uVar6;
    }
    else if (uVar7 <= uVar6) {
      uVar1 = 0;
      if (uVar7 != 0) {
        uVar1 = uVar6 / uVar7;
      }
      uVar6 = uVar6 - uVar1 * uVar7;
    }
    *(long **)(lVar3 + uVar6 * 8) = plVar2 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 10a22b348; end: 10a22b3b3;  */

void FUN_10a22b348(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = *param_2;
  *param_2 = 0;
  *param_1 = lVar2;
  lVar4 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = param_1[1];
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
    *(long **)(lVar2 + uVar5 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 10a22b3b4; end: 10a22b483;  */

void FUN_10a22b3b4(ulong *param_1,ulong param_2)

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
LAB_10a22b3fc:
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
        func_0x000109ffded8();
        uVar7 = *param_1;
        *param_1 = param_2;
        if (uVar7 != 0) {
          if ((char)param_1[2] == '\x01') {
            func_0x00010a136de4(uVar7 + 0x38);
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
    if (param_2 < uVar7) goto LAB_10a22b3fc;
  }
  return;
}



/* Entry: 10a22b484; end: 10a22b607;  */

void FUN_10a22b484(ulong *param_1,ulong param_2)

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
      func_0x000109ffded8();
      uVar1 = *param_1;
      *param_1 = param_2;
      if (uVar1 != 0) {
        if ((char)param_1[2] == '\x01') {
          func_0x00010a136de4(uVar1 + 0x38);
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



/* Entry: 10a22b608; end: 10a22b7b7;  */

long FUN_10a22b608(long param_1,undefined4 param_2)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  long alStack_98 [2];
  char cStack_81;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 **ppuStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long *plStack_40;
  undefined4 uStack_34;
  undefined8 **ppuStack_30;
  long lStack_28;
  
  param_1 = param_1 + 0x18;
  uStack_34 = param_2;
  FUN_10a22b7b8(param_1,&uStack_34);
  if (param_1 == 0) {
    FUN_109ffdddc(&UNK_10f639994);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x18);
    plVar2 = *(long **)(param_1 + 0x20);
    if (plVar2 != (long *)0x0) {
      plVar6 = plVar2 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_48 = lVar1;
    plStack_40 = plVar2;
    __ZNSt3__19to_stringEi(alStack_98,uStack_34);
    plVar6 = alStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (plVar6,0,&UNK_10f646755,0x19);
    lStack_78 = plVar6[1];
    lStack_80 = *plVar6;
    lStack_70 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    plVar6 = &lStack_80;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (plVar6,&UNK_10f64676f,10);
    lStack_58 = plVar6[1];
    ppuStack_60 = (undefined8 **)*plVar6;
    uStack_50 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    lStack_28 = (long)uStack_50._7_1_;
    if (lStack_28 < 0) {
      ppuStack_30 = ppuStack_60;
      lStack_28 = lStack_58;
      if (lVar1 != 0) {
        __ZdlPv();
        goto LAB_10a22b6dc;
      }
    }
    else {
      ppuStack_30 = &ppuStack_60;
      if (lVar1 != 0) {
LAB_10a22b6dc:
        if (lStack_70 < 0) {
          __ZdlPv(lStack_80);
        }
        if (cStack_81 < '\0') {
          __ZdlPv(alStack_98[0]);
        }
        if (plVar2 != (long *)0x0) {
          plVar6 = plVar2 + 1;
          do {
            lVar7 = *plVar6;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar4) {
              *plVar6 = lVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
          }
        }
        return lVar1;
      }
    }
  }
  FUN_10a0edfc4(&ppuStack_30);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a22b75c);
  (*pcVar5)();
}



/* Entry: 10a22b7b8; end: 10a22b857;  */

long * FUN_10a22b7b8(long *param_1,int *param_2)

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



/* Entry: 10a22b858; end: 10a22b937;  */

undefined8 * FUN_10a22b858(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a22b938; end: 10a22b993;  */

long * FUN_10a22b938(long *param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  lVar2 = param_1[2];
  if (lVar2 != 0) {
    lVar1 = param_1[1] + 0x10;
    pcVar3 = (char *)*param_1;
    do {
      if (-1 < *pcVar3) {
        func_0x00010a09db64(lVar1);
      }
      lVar1 = lVar1 + 0x30;
      lVar2 = lVar2 + -1;
      pcVar3 = pcVar3 + 1;
    } while (lVar2 != 0);
    __ZdlPv(*param_1 + -8);
  }
  return param_1;
}



/* Entry: 10a22b994; end: 10a22b9f7;  */

undefined8 * FUN_10a22b994(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a22b9f8; end: 10a22ba5f;  */

void FUN_10a22b9f8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = param_1 + 1;
  FUN_10a22ba60(param_1,*plVar4);
  *param_1 = *param_2;
  plVar1 = param_2 + 1;
  lVar2 = *plVar1;
  *plVar4 = lVar2;
  lVar3 = param_2[2];
  param_1[2] = lVar3;
  if (lVar3 == 0) {
    *param_1 = plVar4;
  }
  else {
    *(long **)(lVar2 + 0x10) = plVar4;
    *param_2 = plVar1;
    *plVar1 = 0;
    param_2[2] = 0;
  }
  return;
}



/* Entry: 10a22ba60; end: 10a22bcef;  */

void FUN_10a22ba60(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10a22ba60(param_1,*param_2);
    FUN_10a22ba60(param_1,param_2[1]);
    func_0x00010a22baa8(param_2 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10a22bcf0; end: 10a22bd03;  */

undefined1  [16] FUN_10a22bcf0(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (0x1555555555555555 < param_2) {
    func_0x000109ffded8();
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_2 + 0x20);
    lVar2 = *(long *)(param_2 + 8);
    FUN_10a22bdbc();
    for (plVar3 = *(long **)(param_2 + 0x10); plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      lVar2 = (long)(plVar3 + 2);
      FUN_10a22bfc8(puVar1,lVar2,plVar3 + 2);
    }
    auVar5._8_8_ = lVar2;
    auVar5._0_8_ = puVar1;
    return auVar5;
  }
  lVar2 = param_2 * 0xc;
  __Znwm(lVar2);
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = lVar2;
  return auVar4;
}



/* Entry: 10a22bd04; end: 10a22bd47;  */

undefined1  [16] FUN_10a22bd04(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (0x1555555555555555 < param_2) {
    func_0x000109ffded8();
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
    lVar1 = *(long *)(param_2 + 8);
    FUN_10a22bdbc();
    for (plVar2 = *(long **)(param_2 + 0x10); plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      lVar1 = (long)(plVar2 + 2);
      FUN_10a22bfc8(param_1,lVar1,plVar2 + 2);
    }
    auVar4._8_8_ = lVar1;
    auVar4._0_8_ = param_1;
    return auVar4;
  }
  lVar1 = param_2 * 0xc;
  __Znwm(lVar1);
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = lVar1;
  return auVar3;
}



/* Entry: 10a22bd48; end: 10a22bdbb;  */

undefined8 * FUN_10a22bd48(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_10a22bdbc(param_1,*(undefined8 *)(param_2 + 8));
  for (plVar1 = *(long **)(param_2 + 0x10); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    FUN_10a22bfc8(param_1,plVar1 + 2,plVar1 + 2);
  }
  return param_1;
}



/* Entry: 10a22bdbc; end: 10a22be8b;  */

undefined1  [16] FUN_10a22bdbc(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  ulong unaff_x22;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  long *aplStack_68 [5];
  long *plStack_40;
  long *plStack_38;
  
  plVar2 = param_1;
  plVar6 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar2 = param_2;
  }
  plVar14 = (long *)param_1[1];
  if (param_2 >= plVar14 && param_2 != plVar14) {
LAB_10a22be04:
    plVar2 = param_2;
    if (param_2 == (long *)0x0) {
      lVar4 = *param_1;
      *param_1 = 0;
      if (lVar4 != 0) {
        __ZdlPv();
        plVar2 = param_2;
      }
      param_1[1] = 0;
    }
    else {
      if ((ulong)param_2 >> 0x3d != 0) {
        plVar2 = param_1;
        plVar6 = param_2;
        func_0x000109ffded8();
        uVar7 = (ulong)(int)*plVar6;
        uVar15 = plVar2[1];
        if (uVar15 != 0) {
          uVar8 = uVar15 - 1;
          if ((uVar15 & uVar8) == 0) {
            unaff_x22 = uVar8 & uVar7;
          }
          else {
            unaff_x22 = uVar7;
            if (uVar15 <= uVar7) {
              uVar10 = 0;
              if (uVar15 != 0) {
                uVar10 = uVar7 / uVar15;
              }
              unaff_x22 = uVar7 - uVar10 * uVar15;
            }
          }
          puVar9 = *(undefined8 **)(*plVar2 + unaff_x22 * 8);
          if (puVar9 != (undefined8 *)0x0) {
            for (plVar14 = (long *)*puVar9; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
              uVar10 = plVar14[1];
              if (uVar10 == uVar7) {
                if ((int)plVar14[2] == (int)*plVar6) {
                  uVar5 = 0;
                  goto LAB_10a22c19c;
                }
              }
              else {
                if ((uVar15 & uVar8) == 0) {
                  uVar10 = uVar10 & uVar8;
                }
                else if (uVar15 <= uVar10) {
                  uVar1 = 0;
                  if (uVar15 != 0) {
                    uVar1 = uVar10 / uVar15;
                  }
                  uVar10 = uVar10 - uVar1 * uVar15;
                }
                if (uVar10 != unaff_x22) break;
              }
            }
          }
        }
        plStack_40 = param_2;
        plStack_38 = param_1;
        FUN_10a22c1d0(aplStack_68,plVar2,uVar7);
        if ((uVar15 == 0) || (*(float *)(plVar2 + 4) * (float)uVar15 < (float)(plVar2[3] + 1))) {
          uVar8 = 1;
          if (2 < uVar15) {
            uVar8 = (ulong)((uVar15 & uVar15 - 1) != 0);
          }
          uVar8 = uVar8 | uVar15 << 1;
          uVar15 = (ulong)((float)(plVar2[3] + 1) / *(float *)(plVar2 + 4));
          if (uVar8 <= uVar15) {
            uVar8 = uVar15;
          }
          FUN_10a22bdbc(plVar2,uVar8);
          uVar15 = plVar2[1];
          if ((uVar15 & uVar15 - 1) == 0) {
            unaff_x22 = uVar15 - 1 & uVar7;
          }
          else {
            unaff_x22 = uVar7;
            if (uVar15 <= uVar7) {
              uVar8 = 0;
              if (uVar15 != 0) {
                uVar8 = uVar7 / uVar15;
              }
              unaff_x22 = uVar7 - uVar8 * uVar15;
            }
          }
        }
        lVar4 = *plVar2;
        plVar6 = *(long **)(lVar4 + unaff_x22 * 8);
        if (plVar6 == (long *)0x0) {
          plVar6 = plVar2 + 2;
          *aplStack_68[0] = *plVar6;
          *plVar6 = (long)aplStack_68[0];
          *(long **)(lVar4 + unaff_x22 * 8) = plVar6;
          if (*aplStack_68[0] != 0) {
            uVar7 = *(ulong *)(*aplStack_68[0] + 8);
            if ((uVar15 & uVar15 - 1) == 0) {
              uVar7 = uVar7 & uVar15 - 1;
            }
            else if (uVar15 <= uVar7) {
              uVar8 = 0;
              if (uVar15 != 0) {
                uVar8 = uVar7 / uVar15;
              }
              uVar7 = uVar7 - uVar8 * uVar15;
            }
            *(long **)(*plVar2 + uVar7 * 8) = aplStack_68[0];
          }
        }
        else {
          *aplStack_68[0] = *plVar6;
          *plVar6 = (long)aplStack_68[0];
        }
        plVar2[3] = plVar2[3] + 1;
        uVar5 = 1;
        plVar14 = aplStack_68[0];
LAB_10a22c19c:
        auVar18._8_8_ = uVar5;
        auVar18._0_8_ = plVar14;
        return auVar18;
      }
      lVar3 = (long)param_2 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      plVar6 = (long *)0x0;
      param_1[1] = (long)param_2;
      do {
        *(undefined8 *)(*param_1 + (long)plVar6 * 8) = 0;
        plVar6 = (long *)((long)plVar6 + 1);
      } while (param_2 != plVar6);
      plVar6 = (long *)param_1[2];
      if (plVar6 != (long *)0x0) {
        plVar14 = (long *)plVar6[1];
        uVar7 = (long)param_2 - 1;
        if (((ulong)param_2 & uVar7) == 0) {
          plVar14 = (long *)((ulong)plVar14 & uVar7);
        }
        else if (param_2 <= plVar14) {
          uVar15 = 0;
          if (param_2 != (long *)0x0) {
            uVar15 = (ulong)plVar14 / (ulong)param_2;
          }
          plVar14 = (long *)((long)plVar14 - uVar15 * (long)param_2);
        }
        *(long **)(*param_1 + (long)plVar14 * 8) = param_1 + 2;
        plVar11 = (long *)*plVar6;
        while (plVar11 != (long *)0x0) {
          plVar13 = (long *)plVar11[1];
          if (((ulong)param_2 & uVar7) == 0) {
            plVar13 = (long *)((ulong)plVar13 & uVar7);
          }
          else if (param_2 <= plVar13) {
            uVar15 = 0;
            if (param_2 != (long *)0x0) {
              uVar15 = (ulong)plVar13 / (ulong)param_2;
            }
            plVar13 = (long *)((long)plVar13 - uVar15 * (long)param_2);
          }
          plVar12 = plVar11;
          if (plVar13 != plVar14) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + (long)plVar13 * 8) == 0) {
              *(long **)(lVar3 + (long)plVar13 * 8) = plVar6;
              plVar14 = plVar13;
            }
            else {
              *plVar6 = *plVar11;
              *plVar11 = **(undefined8 **)(lVar3 + (long)plVar13 * 8);
              **(long **)(lVar3 + (long)plVar13 * 8) = (long)plVar11;
              plVar12 = plVar6;
            }
          }
          plVar6 = plVar12;
          plVar11 = (long *)*plVar12;
        }
      }
    }
    auVar17._8_8_ = plVar2;
    auVar17._0_8_ = lVar4;
    return auVar17;
  }
  if (param_2 < plVar14) {
    plVar2 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar14 < (long *)0x3) || (((ulong)plVar14 & (long)plVar14 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar2) {
      plVar2 = (long *)(1L << (-LZCOUNT((long)plVar2 + -1) & 0x3fU));
    }
    if (param_2 <= plVar2) {
      param_2 = plVar2;
    }
    if (param_2 < plVar14) goto LAB_10a22be04;
  }
  auVar16._8_8_ = plVar6;
  auVar16._0_8_ = plVar2;
  return auVar16;
}



/* Entry: 10a22be8c; end: 10a22bfc7;  */

undefined1  [16] FUN_10a22be8c(long *param_1,int *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  undefined8 uVar5;
  int *piVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  int *piVar14;
  ulong uVar15;
  ulong unaff_x22;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  long *aplStack_68 [3];
  
  piVar4 = param_2;
  if (param_2 == (int *)0x0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      __ZdlPv();
      piVar4 = param_2;
    }
    param_1[1] = 0;
  }
  else {
    if ((ulong)param_2 >> 0x3d != 0) {
      func_0x000109ffded8();
      uVar7 = (ulong)*param_2;
      uVar15 = param_1[1];
      if (uVar15 != 0) {
        uVar8 = uVar15 - 1;
        if ((uVar15 & uVar8) == 0) {
          unaff_x22 = uVar8 & uVar7;
        }
        else {
          unaff_x22 = uVar7;
          if (uVar15 <= uVar7) {
            uVar11 = 0;
            if (uVar15 != 0) {
              uVar11 = uVar7 / uVar15;
            }
            unaff_x22 = uVar7 - uVar11 * uVar15;
          }
        }
        puVar10 = *(undefined8 **)(*param_1 + unaff_x22 * 8);
        if (puVar10 != (undefined8 *)0x0) {
          for (plVar9 = (long *)*puVar10; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
            uVar11 = plVar9[1];
            if (uVar11 == uVar7) {
              if ((int)plVar9[2] == *param_2) {
                uVar5 = 0;
                goto LAB_10a22c19c;
              }
            }
            else {
              if ((uVar15 & uVar8) == 0) {
                uVar11 = uVar11 & uVar8;
              }
              else if (uVar15 <= uVar11) {
                uVar1 = 0;
                if (uVar15 != 0) {
                  uVar1 = uVar11 / uVar15;
                }
                uVar11 = uVar11 - uVar1 * uVar15;
              }
              if (uVar11 != unaff_x22) break;
            }
          }
        }
      }
      FUN_10a22c1d0(aplStack_68,param_1,uVar7);
      if ((uVar15 == 0) || (*(float *)(param_1 + 4) * (float)uVar15 < (float)(param_1[3] + 1))) {
        uVar8 = 1;
        if (2 < uVar15) {
          uVar8 = (ulong)((uVar15 & uVar15 - 1) != 0);
        }
        uVar8 = uVar8 | uVar15 << 1;
        uVar15 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
        if (uVar8 <= uVar15) {
          uVar8 = uVar15;
        }
        FUN_10a22bdbc(param_1,uVar8);
        uVar15 = param_1[1];
        if ((uVar15 & uVar15 - 1) == 0) {
          unaff_x22 = uVar15 - 1 & uVar7;
        }
        else {
          unaff_x22 = uVar7;
          if (uVar15 <= uVar7) {
            uVar8 = 0;
            if (uVar15 != 0) {
              uVar8 = uVar7 / uVar15;
            }
            unaff_x22 = uVar7 - uVar8 * uVar15;
          }
        }
      }
      lVar3 = *param_1;
      plVar9 = *(long **)(lVar3 + unaff_x22 * 8);
      if (plVar9 == (long *)0x0) {
        plVar9 = param_1 + 2;
        *aplStack_68[0] = *plVar9;
        *plVar9 = (long)aplStack_68[0];
        *(long **)(lVar3 + unaff_x22 * 8) = plVar9;
        if (*aplStack_68[0] != 0) {
          uVar7 = *(ulong *)(*aplStack_68[0] + 8);
          if ((uVar15 & uVar15 - 1) == 0) {
            uVar7 = uVar7 & uVar15 - 1;
          }
          else if (uVar15 <= uVar7) {
            uVar8 = 0;
            if (uVar15 != 0) {
              uVar8 = uVar7 / uVar15;
            }
            uVar7 = uVar7 - uVar8 * uVar15;
          }
          *(long **)(*param_1 + uVar7 * 8) = aplStack_68[0];
        }
      }
      else {
        *aplStack_68[0] = *plVar9;
        *plVar9 = (long)aplStack_68[0];
      }
      param_1[3] = param_1[3] + 1;
      uVar5 = 1;
      plVar9 = aplStack_68[0];
LAB_10a22c19c:
      auVar17._8_8_ = uVar5;
      auVar17._0_8_ = plVar9;
      return auVar17;
    }
    lVar2 = (long)param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    piVar6 = (int *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)piVar6 * 8) = 0;
      piVar6 = (int *)((long)piVar6 + 1);
    } while (param_2 != piVar6);
    plVar9 = (long *)param_1[2];
    if (plVar9 != (long *)0x0) {
      piVar6 = (int *)plVar9[1];
      uVar7 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar7) == 0) {
        piVar6 = (int *)((ulong)piVar6 & uVar7);
      }
      else if (param_2 <= piVar6) {
        uVar15 = 0;
        if (param_2 != (int *)0x0) {
          uVar15 = (ulong)piVar6 / (ulong)param_2;
        }
        piVar6 = (int *)((long)piVar6 - uVar15 * (long)param_2);
      }
      *(long **)(*param_1 + (long)piVar6 * 8) = param_1 + 2;
      plVar12 = (long *)*plVar9;
      while (plVar12 != (long *)0x0) {
        piVar14 = (int *)plVar12[1];
        if (((ulong)param_2 & uVar7) == 0) {
          piVar14 = (int *)((ulong)piVar14 & uVar7);
        }
        else if (param_2 <= piVar14) {
          uVar15 = 0;
          if (param_2 != (int *)0x0) {
            uVar15 = (ulong)piVar14 / (ulong)param_2;
          }
          piVar14 = (int *)((long)piVar14 - uVar15 * (long)param_2);
        }
        plVar13 = plVar12;
        if (piVar14 != piVar6) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)piVar14 * 8) == 0) {
            *(long **)(lVar2 + (long)piVar14 * 8) = plVar9;
            piVar6 = piVar14;
          }
          else {
            *plVar9 = *plVar12;
            *plVar12 = **(undefined8 **)(lVar2 + (long)piVar14 * 8);
            **(long **)(lVar2 + (long)piVar14 * 8) = (long)plVar12;
            plVar13 = plVar9;
          }
        }
        plVar9 = plVar13;
        plVar12 = (long *)*plVar13;
      }
    }
  }
  auVar16._8_8_ = piVar4;
  auVar16._0_8_ = lVar3;
  return auVar16;
}



/* Entry: 10a22bfc8; end: 10a22c1cf;  */

undefined1  [16] FUN_10a22bfc8(long *param_1,int *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x22;
  undefined1 auVar10 [16];
  long *aplStack_48 [3];
  
  uVar8 = (ulong)*param_2;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar4 = uVar9 - 1;
    if ((uVar9 & uVar4) == 0) {
      unaff_x22 = uVar4 & uVar8;
    }
    else {
      unaff_x22 = uVar8;
      if (uVar9 <= uVar8) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar8 / uVar9;
        }
        unaff_x22 = uVar8 - uVar7 * uVar9;
      }
    }
    puVar6 = *(undefined8 **)(*param_1 + unaff_x22 * 8);
    if (puVar6 != (undefined8 *)0x0) {
      for (plVar2 = (long *)*puVar6; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        uVar7 = plVar2[1];
        if (uVar7 == uVar8) {
          if ((int)plVar2[2] == *param_2) {
            uVar3 = 0;
            goto LAB_10a22c19c;
          }
        }
        else {
          if ((uVar9 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar9 <= uVar7) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar7 / uVar9;
            }
            uVar7 = uVar7 - uVar1 * uVar9;
          }
          if (uVar7 != unaff_x22) break;
        }
      }
    }
  }
  FUN_10a22c1d0(aplStack_48,param_1,uVar8);
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar4 = 1;
    if (2 < uVar9) {
      uVar4 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar4 = uVar4 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar4 <= uVar9) {
      uVar4 = uVar9;
    }
    FUN_10a22bdbc(param_1,uVar4);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x22 = uVar9 - 1 & uVar8;
    }
    else {
      unaff_x22 = uVar8;
      if (uVar9 <= uVar8) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar8 / uVar9;
        }
        unaff_x22 = uVar8 - uVar4 * uVar9;
      }
    }
  }
  lVar5 = *param_1;
  plVar2 = *(long **)(lVar5 + unaff_x22 * 8);
  if (plVar2 == (long *)0x0) {
    plVar2 = param_1 + 2;
    *aplStack_48[0] = *plVar2;
    *plVar2 = (long)aplStack_48[0];
    *(long **)(lVar5 + unaff_x22 * 8) = plVar2;
    if (*aplStack_48[0] != 0) {
      uVar8 = *(ulong *)(*aplStack_48[0] + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar8 = uVar8 & uVar9 - 1;
      }
      else if (uVar9 <= uVar8) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar8 / uVar9;
        }
        uVar8 = uVar8 - uVar4 * uVar9;
      }
      *(long **)(*param_1 + uVar8 * 8) = aplStack_48[0];
    }
  }
  else {
    *aplStack_48[0] = *plVar2;
    *plVar2 = (long)aplStack_48[0];
  }
  param_1[3] = param_1[3] + 1;
  uVar3 = 1;
  plVar2 = aplStack_48[0];
LAB_10a22c19c:
  auVar10._8_8_ = uVar3;
  auVar10._0_8_ = plVar2;
  return auVar10;
}



/* Entry: 10a22c1d0; end: 10a22c247;  */

void FUN_10a22c1d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  *(undefined4 *)(puVar1 + 2) = *param_4;
  FUN_10a22c248(puVar1 + 3,param_4 + 2);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10a22c248; end: 10a22c2bb;  */

undefined8 * FUN_10a22c248(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_10a22c2bc(param_1,*(undefined8 *)(param_2 + 8));
  for (plVar1 = *(long **)(param_2 + 0x10); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    FUN_10a22c4c8(param_1,plVar1 + 2,plVar1 + 2);
  }
  return param_1;
}



/* Entry: 10a22c2bc; end: 10a22c38b;  */

undefined1  [16] FUN_10a22c2bc(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *unaff_x25;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  plVar7 = param_1;
  plVar4 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar7 = param_2;
  }
  plVar12 = (long *)param_1[1];
  if (plVar12 > param_2 || param_2 == plVar12) {
    if (plVar12 <= param_2) {
LAB_10a22c37c:
      auVar14._8_8_ = plVar4;
      auVar14._0_8_ = plVar7;
      return auVar14;
    }
    plVar7 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar12 < (long *)0x3) || (((ulong)plVar12 & (long)plVar12 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar7) {
      plVar7 = (long *)(1L << (-LZCOUNT((long)plVar7 + -1) & 0x3fU));
    }
    if (param_2 <= plVar7) {
      param_2 = plVar7;
    }
    if (plVar12 <= param_2) goto LAB_10a22c37c;
  }
  plVar7 = param_2;
  if (param_2 == (long *)0x0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
      plVar7 = param_2;
    }
    param_1[1] = 0;
LAB_10a22c4b8:
    auVar15._8_8_ = plVar7;
    auVar15._0_8_ = lVar2;
    return auVar15;
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar1 = (long)param_2 << 3;
    __Znwm();
    lVar2 = *param_1;
    *param_1 = lVar1;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    plVar4 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar4 * 8) = 0;
      plVar4 = (long *)((long)plVar4 + 1);
    } while (param_2 != plVar4);
    plVar4 = (long *)param_1[2];
    if (plVar4 != (long *)0x0) {
      plVar12 = (long *)plVar4[1];
      uVar5 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar5) == 0) {
        plVar12 = (long *)((ulong)plVar12 & uVar5);
      }
      else if (param_2 <= plVar12) {
        uVar8 = 0;
        if (param_2 != (long *)0x0) {
          uVar8 = (ulong)plVar12 / (ulong)param_2;
        }
        plVar12 = (long *)((long)plVar12 - uVar8 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar12 * 8) = param_1 + 2;
      plVar9 = (long *)*plVar4;
      while (plVar9 != (long *)0x0) {
        plVar11 = (long *)plVar9[1];
        if (((ulong)param_2 & uVar5) == 0) {
          plVar11 = (long *)((ulong)plVar11 & uVar5);
        }
        else if (param_2 <= plVar11) {
          uVar8 = 0;
          if (param_2 != (long *)0x0) {
            uVar8 = (ulong)plVar11 / (ulong)param_2;
          }
          plVar11 = (long *)((long)plVar11 - uVar8 * (long)param_2);
        }
        plVar10 = plVar9;
        if (plVar11 != plVar12) {
          lVar1 = *param_1;
          if (*(long *)(lVar1 + (long)plVar11 * 8) == 0) {
            *(long **)(lVar1 + (long)plVar11 * 8) = plVar4;
            plVar12 = plVar11;
          }
          else {
            *plVar4 = *plVar9;
            *plVar9 = **(undefined8 **)(lVar1 + (long)plVar11 * 8);
            **(long **)(lVar1 + (long)plVar11 * 8) = (long)plVar9;
            plVar10 = plVar4;
          }
        }
        plVar4 = plVar10;
        plVar9 = (long *)*plVar10;
      }
    }
    goto LAB_10a22c4b8;
  }
  func_0x000109ffded8();
  plVar7 = param_1;
  FUN_10aad09b8();
  plVar4 = (long *)param_1[1];
  if (plVar4 != (long *)0x0) {
    uVar5 = (long)plVar4 - 1;
    if (((ulong)plVar4 & uVar5) == 0) {
      unaff_x25 = (long *)(uVar5 & (ulong)plVar7);
    }
    else {
      unaff_x25 = plVar7;
      if (plVar4 <= plVar7) {
        uVar8 = 0;
        if (plVar4 != (long *)0x0) {
          uVar8 = (ulong)plVar7 / (ulong)plVar4;
        }
        unaff_x25 = (long *)((long)plVar7 - uVar8 * (long)plVar4);
      }
    }
    puVar6 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
    if (puVar6 != (undefined8 *)0x0) {
      for (plVar12 = (long *)*puVar6; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
        plVar9 = (long *)plVar12[1];
        if (plVar9 == plVar7) {
          plVar9 = plVar12 + 2;
          FUN_10a22c6f0(plVar9,param_2);
          if (((ulong)plVar9 & 1) != 0) {
            uVar3 = 0;
            goto LAB_10a22c6b8;
          }
        }
        else {
          if (((ulong)plVar4 & uVar5) == 0) {
            plVar9 = (long *)((ulong)plVar9 & uVar5);
          }
          else if (plVar4 <= plVar9) {
            uVar8 = 0;
            if (plVar4 != (long *)0x0) {
              uVar8 = (ulong)plVar9 / (ulong)plVar4;
            }
            plVar9 = (long *)((long)plVar9 - uVar8 * (long)plVar4);
          }
          if (plVar9 != unaff_x25) break;
        }
      }
    }
  }
  plVar12 = (long *)0x70;
  __Znwm();
  *plVar12 = 0;
  plVar12[1] = (long)plVar7;
  lVar2 = param_3[4];
  lVar13 = param_3[7];
  lVar1 = param_3[6];
  plVar12[7] = param_3[5];
  plVar12[6] = lVar2;
  plVar12[9] = lVar13;
  plVar12[8] = lVar1;
  lVar2 = param_3[8];
  lVar13 = param_3[0xb];
  lVar1 = param_3[10];
  plVar12[0xb] = param_3[9];
  plVar12[10] = lVar2;
  plVar12[0xd] = lVar13;
  plVar12[0xc] = lVar1;
  lVar2 = *param_3;
  lVar13 = param_3[3];
  lVar1 = param_3[2];
  plVar12[3] = param_3[1];
  plVar12[2] = lVar2;
  plVar12[5] = lVar13;
  plVar12[4] = lVar1;
  if ((plVar4 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar4 < (float)(param_1[3] + 1))
     ) {
    uVar5 = 1;
    if ((long *)0x2 < plVar4) {
      uVar5 = (ulong)(((ulong)plVar4 & (long)plVar4 - 1U) != 0);
    }
    uVar5 = uVar5 | (long)plVar4 << 1;
    uVar8 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar5 <= uVar8) {
      uVar5 = uVar8;
    }
    FUN_10a22c2bc(param_1,uVar5);
    plVar4 = (long *)param_1[1];
    if (((ulong)plVar4 & (long)plVar4 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar4 - 1U & (ulong)plVar7);
    }
    else {
      unaff_x25 = plVar7;
      if (plVar4 <= plVar7) {
        uVar5 = 0;
        if (plVar4 != (long *)0x0) {
          uVar5 = (ulong)plVar7 / (ulong)plVar4;
        }
        unaff_x25 = (long *)((long)plVar7 - uVar5 * (long)plVar4);
      }
    }
  }
  lVar2 = *param_1;
  plVar7 = *(long **)(lVar2 + (long)unaff_x25 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_1 + 2;
    *plVar12 = *plVar7;
    *plVar7 = (long)plVar12;
    *(long **)(lVar2 + (long)unaff_x25 * 8) = plVar7;
    if (*plVar12 == 0) goto LAB_10a22c6a8;
    plVar7 = *(long **)(*plVar12 + 8);
    if (((ulong)plVar4 & (long)plVar4 - 1U) == 0) {
      plVar7 = (long *)((ulong)plVar7 & (long)plVar4 - 1U);
    }
    else if (plVar4 <= plVar7) {
      uVar5 = 0;
      if (plVar4 != (long *)0x0) {
        uVar5 = (ulong)plVar7 / (ulong)plVar4;
      }
      plVar7 = (long *)((long)plVar7 - uVar5 * (long)plVar4);
    }
    plVar7 = (long *)(*param_1 + (long)plVar7 * 8);
  }
  else {
    *plVar12 = *plVar7;
  }
  *plVar7 = (long)plVar12;
LAB_10a22c6a8:
  param_1[3] = param_1[3] + 1;
  uVar3 = 1;
LAB_10a22c6b8:
  auVar16._8_8_ = uVar3;
  auVar16._0_8_ = plVar12;
  return auVar16;
}



/* Entry: 10a22c38c; end: 10a22c4c7;  */

undefined1  [16] FUN_10a22c38c(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long *unaff_x25;
  ulong uVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  uVar13 = param_2;
  if (param_2 == 0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      __ZdlPv();
      uVar13 = param_2;
    }
    param_1[1] = 0;
LAB_10a22c4b8:
    auVar15._8_8_ = uVar13;
    auVar15._0_8_ = lVar3;
    return auVar15;
  }
  if (param_2 >> 0x3d == 0) {
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
    plVar9 = (long *)param_1[2];
    if (plVar9 != (long *)0x0) {
      uVar5 = plVar9[1];
      uVar6 = param_2 - 1;
      if ((param_2 & uVar6) == 0) {
        uVar5 = uVar5 & uVar6;
      }
      else if (param_2 <= uVar5) {
        uVar11 = 0;
        if (param_2 != 0) {
          uVar11 = uVar5 / param_2;
        }
        uVar5 = uVar5 - uVar11 * param_2;
      }
      *(long **)(*param_1 + uVar5 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar9;
      while (plVar10 != (long *)0x0) {
        uVar11 = plVar10[1];
        if ((param_2 & uVar6) == 0) {
          uVar11 = uVar11 & uVar6;
        }
        else if (param_2 <= uVar11) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar11 / param_2;
          }
          uVar11 = uVar11 - uVar1 * param_2;
        }
        plVar12 = plVar10;
        if (uVar11 != uVar5) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar11 * 8) == 0) {
            *(long **)(lVar2 + uVar11 * 8) = plVar9;
            uVar5 = uVar11;
          }
          else {
            *plVar9 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar2 + uVar11 * 8);
            **(long **)(lVar2 + uVar11 * 8) = (long)plVar10;
            plVar12 = plVar9;
          }
        }
        plVar9 = plVar12;
        plVar10 = (long *)*plVar12;
      }
    }
    goto LAB_10a22c4b8;
  }
  func_0x000109ffded8();
  plVar9 = param_1;
  FUN_10aad09b8();
  plVar10 = (long *)param_1[1];
  if (plVar10 != (long *)0x0) {
    uVar13 = (long)plVar10 - 1;
    if (((ulong)plVar10 & uVar13) == 0) {
      unaff_x25 = (long *)(uVar13 & (ulong)plVar9);
    }
    else {
      unaff_x25 = plVar9;
      if (plVar10 <= plVar9) {
        uVar5 = 0;
        if (plVar10 != (long *)0x0) {
          uVar5 = (ulong)plVar9 / (ulong)plVar10;
        }
        unaff_x25 = (long *)((long)plVar9 - uVar5 * (long)plVar10);
      }
    }
    puVar7 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
    if (puVar7 != (undefined8 *)0x0) {
      for (plVar12 = (long *)*puVar7; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
        plVar8 = (long *)plVar12[1];
        if (plVar8 == plVar9) {
          plVar8 = plVar12 + 2;
          FUN_10a22c6f0(plVar8,param_2);
          if (((ulong)plVar8 & 1) != 0) {
            uVar4 = 0;
            goto LAB_10a22c6b8;
          }
        }
        else {
          if (((ulong)plVar10 & uVar13) == 0) {
            plVar8 = (long *)((ulong)plVar8 & uVar13);
          }
          else if (plVar10 <= plVar8) {
            uVar5 = 0;
            if (plVar10 != (long *)0x0) {
              uVar5 = (ulong)plVar8 / (ulong)plVar10;
            }
            plVar8 = (long *)((long)plVar8 - uVar5 * (long)plVar10);
          }
          if (plVar8 != unaff_x25) break;
        }
      }
    }
  }
  plVar12 = (long *)0x70;
  __Znwm();
  *plVar12 = 0;
  plVar12[1] = (long)plVar9;
  lVar3 = param_3[4];
  lVar14 = param_3[7];
  lVar2 = param_3[6];
  plVar12[7] = param_3[5];
  plVar12[6] = lVar3;
  plVar12[9] = lVar14;
  plVar12[8] = lVar2;
  lVar3 = param_3[8];
  lVar14 = param_3[0xb];
  lVar2 = param_3[10];
  plVar12[0xb] = param_3[9];
  plVar12[10] = lVar3;
  plVar12[0xd] = lVar14;
  plVar12[0xc] = lVar2;
  lVar3 = *param_3;
  lVar14 = param_3[3];
  lVar2 = param_3[2];
  plVar12[3] = param_3[1];
  plVar12[2] = lVar3;
  plVar12[5] = lVar14;
  plVar12[4] = lVar2;
  if ((plVar10 == (long *)0x0) ||
     (*(float *)(param_1 + 4) * (float)plVar10 < (float)(param_1[3] + 1))) {
    uVar13 = 1;
    if ((long *)0x2 < plVar10) {
      uVar13 = (ulong)(((ulong)plVar10 & (long)plVar10 - 1U) != 0);
    }
    uVar13 = uVar13 | (long)plVar10 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar13 <= uVar5) {
      uVar13 = uVar5;
    }
    FUN_10a22c2bc(param_1,uVar13);
    plVar10 = (long *)param_1[1];
    if (((ulong)plVar10 & (long)plVar10 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar10 - 1U & (ulong)plVar9);
    }
    else {
      unaff_x25 = plVar9;
      if (plVar10 <= plVar9) {
        uVar13 = 0;
        if (plVar10 != (long *)0x0) {
          uVar13 = (ulong)plVar9 / (ulong)plVar10;
        }
        unaff_x25 = (long *)((long)plVar9 - uVar13 * (long)plVar10);
      }
    }
  }
  lVar3 = *param_1;
  plVar9 = *(long **)(lVar3 + (long)unaff_x25 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_1 + 2;
    *plVar12 = *plVar9;
    *plVar9 = (long)plVar12;
    *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar9;
    if (*plVar12 == 0) goto LAB_10a22c6a8;
    plVar9 = *(long **)(*plVar12 + 8);
    if (((ulong)plVar10 & (long)plVar10 - 1U) == 0) {
      plVar9 = (long *)((ulong)plVar9 & (long)plVar10 - 1U);
    }
    else if (plVar10 <= plVar9) {
      uVar13 = 0;
      if (plVar10 != (long *)0x0) {
        uVar13 = (ulong)plVar9 / (ulong)plVar10;
      }
      plVar9 = (long *)((long)plVar9 - uVar13 * (long)plVar10);
    }
    plVar9 = (long *)(*param_1 + (long)plVar9 * 8);
  }
  else {
    *plVar12 = *plVar9;
  }
  *plVar9 = (long)plVar12;
LAB_10a22c6a8:
  param_1[3] = param_1[3] + 1;
  uVar4 = 1;
LAB_10a22c6b8:
  auVar16._8_8_ = uVar4;
  auVar16._0_8_ = plVar12;
  return auVar16;
}



/* Entry: 10a22c4c8; end: 10a22c6ef;  */

undefined1  [16] FUN_10a22c4c8(long *param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x25;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  
  plVar4 = param_1;
  FUN_10aad09b8();
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      unaff_x25 = (long *)(uVar9 & (ulong)plVar4);
    }
    else {
      unaff_x25 = plVar4;
      if (plVar8 <= plVar4) {
        uVar5 = 0;
        if (plVar8 != (long *)0x0) {
          uVar5 = (ulong)plVar4 / (ulong)plVar8;
        }
        unaff_x25 = (long *)((long)plVar4 - uVar5 * (long)plVar8);
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      for (plVar7 = (long *)*puVar2; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        plVar3 = (long *)plVar7[1];
        if (plVar3 == plVar4) {
          plVar3 = plVar7 + 2;
          FUN_10a22c6f0(plVar3,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar1 = 0;
            goto LAB_10a22c6b8;
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
          if (plVar3 != unaff_x25) break;
        }
      }
    }
  }
  plVar7 = (long *)0x70;
  __Znwm();
  *plVar7 = 0;
  plVar7[1] = (long)plVar4;
  lVar6 = param_3[4];
  lVar11 = param_3[7];
  lVar10 = param_3[6];
  plVar7[7] = param_3[5];
  plVar7[6] = lVar6;
  plVar7[9] = lVar11;
  plVar7[8] = lVar10;
  lVar6 = param_3[8];
  lVar11 = param_3[0xb];
  lVar10 = param_3[10];
  plVar7[0xb] = param_3[9];
  plVar7[10] = lVar6;
  plVar7[0xd] = lVar11;
  plVar7[0xc] = lVar10;
  lVar6 = *param_3;
  lVar11 = param_3[3];
  lVar10 = param_3[2];
  plVar7[3] = param_3[1];
  plVar7[2] = lVar6;
  plVar7[5] = lVar11;
  plVar7[4] = lVar10;
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
    FUN_10a22c2bc(param_1,uVar9);
    plVar8 = (long *)param_1[1];
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar8 - 1U & (ulong)plVar4);
    }
    else {
      unaff_x25 = plVar4;
      if (plVar8 <= plVar4) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar4 / (ulong)plVar8;
        }
        unaff_x25 = (long *)((long)plVar4 - uVar9 * (long)plVar8);
      }
    }
  }
  lVar6 = *param_1;
  plVar4 = *(long **)(lVar6 + (long)unaff_x25 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *plVar7 = *plVar4;
    *plVar4 = (long)plVar7;
    *(long **)(lVar6 + (long)unaff_x25 * 8) = plVar4;
    if (*plVar7 == 0) goto LAB_10a22c6a8;
    plVar4 = *(long **)(*plVar7 + 8);
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      plVar4 = (long *)((ulong)plVar4 & (long)plVar8 - 1U);
    }
    else if (plVar8 <= plVar4) {
      uVar9 = 0;
      if (plVar8 != (long *)0x0) {
        uVar9 = (ulong)plVar4 / (ulong)plVar8;
      }
      plVar4 = (long *)((long)plVar4 - uVar9 * (long)plVar8);
    }
    plVar4 = (long *)(*param_1 + (long)plVar4 * 8);
  }
  else {
    *plVar7 = *plVar4;
  }
  *plVar4 = (long)plVar7;
LAB_10a22c6a8:
  param_1[3] = param_1[3] + 1;
  uVar1 = 1;
LAB_10a22c6b8:
  auVar12._8_8_ = uVar1;
  auVar12._0_8_ = plVar7;
  return auVar12;
}



/* Entry: 10a22c6f0; end: 10a22c783;  */

int * FUN_10a22c6f0(int *param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1] && param_1[2] == param_2[2])) {
    piVar2 = param_1 + 3;
    FUN_10a22c784(piVar2,param_2 + 3);
    if ((int)piVar2 != 0) {
      piVar2 = param_1 + 10;
      func_0x00010a22c84c(piVar2,param_2 + 10);
      if (((int)piVar2 != 0) &&
         (piVar2 = (int *)(ulong)(*(byte *)(param_1 + 0x17) == *(byte *)(param_2 + 0x17)),
         (*(byte *)(param_2 + 0x17) & *(byte *)(param_1 + 0x17)) != 0)) {
        bVar1 = false;
        if (((float)param_1[0x12] == (float)param_2[0x12]) &&
           (bVar1 = false, !NAN((float)param_1[0x13]) && !NAN((float)param_2[0x13]))) {
          bVar1 = (float)param_1[0x13] == (float)param_2[0x13];
        }
        if (bVar1) {
          bVar1 = false;
          if (((float)param_1[0x15] == (float)param_2[0x15]) &&
             (bVar1 = false, !NAN((float)param_1[0x14]) && !NAN((float)param_2[0x14]))) {
            bVar1 = (float)param_1[0x14] == (float)param_2[0x14];
          }
          uVar3 = (uint)bVar1;
        }
        else {
          uVar3 = 0;
        }
        return (int *)(ulong)(uVar3 & (float)param_1[0x16] == (float)param_2[0x16]);
      }
    }
  }
  else {
    piVar2 = (int *)0x0;
  }
  return piVar2;
}



/* Entry: 10a22c784; end: 10a22c96b;  */

bool FUN_10a22c784(float *param_1,float *param_2)

{
  bool bVar1;
  
  bVar1 = *(byte *)(param_1 + 6) == *(byte *)(param_2 + 6);
  if ((*(byte *)(param_2 + 6) & *(byte *)(param_1 + 6)) != 0) {
    if ((((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
         ((param_1[3] == param_2[3] && (*(char *)(param_1 + 4) == *(char *)(param_2 + 4))))) &&
        ((*(char *)((long)param_1 + 0x11) == *(char *)((long)param_2 + 0x11) &&
         ((*(char *)((long)param_1 + 0x12) == *(char *)((long)param_2 + 0x12) &&
          (*(char *)((long)param_1 + 0x13) == *(char *)((long)param_2 + 0x13))))))) &&
       (*(char *)(param_1 + 5) == *(char *)(param_2 + 5))) {
      bVar1 = *(char *)((long)param_1 + 0x15) == *(char *)((long)param_2 + 0x15);
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}



/* Entry: 10a22c96c; end: 10a22ca6f;  */

long * FUN_10a22c96c(long *param_1)

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



/* Entry: 10a22ca70; end: 10a22cac7;  */

undefined1 * FUN_10a22ca70(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[0xb8] = 0;
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    FUN_10a22cac8(param_1);
    param_1[0xb8] = 1;
  }
  return param_1;
}



/* Entry: 10a22cac8; end: 10a22cb7f;  */

undefined8 * FUN_10a22cac8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  uVar2 = *param_2;
  *(undefined8 *)((long)param_1 + 0xf) = *(undefined8 *)((long)param_2 + 0xf);
  param_1[1] = uVar3;
  *param_1 = uVar2;
  FUN_10a22cb80(param_1 + 3,param_2 + 3);
  FUN_10a22cd3c(param_1 + 7,param_2 + 7);
  uVar1 = *(undefined1 *)(param_2 + 0x13);
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x13) = uVar1;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  FUN_10a22ce94();
  return param_1;
}



/* Entry: 10a22cb80; end: 10a22cbd3;  */

undefined1 * FUN_10a22cb80(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  FUN_10a22cbd4();
  return param_1;
}



/* Entry: 10a22cbd4; end: 10a22cc2b;  */

void FUN_10a22cbd4(undefined8 *param_1,long *param_2)

{
  if ((char)param_2[3] == '\x01') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_10a22cc2c(param_1,*param_2,param_2[1],(param_2[1] - *param_2 >> 2) * -0x3333333333333333);
    *(undefined1 *)(param_1 + 3) = 1;
  }
  return;
}



/* Entry: 10a22cc2c; end: 10a22cca3;  */

void FUN_10a22cc2c(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a22cca4(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 10a22cca4; end: 10a22cce7;  */

undefined1  [16] FUN_10a22cca4(long *param_1,ulong param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_2 < 0xccccccccccccccd) {
    plVar1 = param_1;
    FUN_10a22ccfc();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)plVar1 + param_2 * 0x14;
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = plVar1;
    return auVar4;
  }
  FUN_10a22cce8();
  puVar2 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 < 0xccccccccccccccd) {
    lVar3 = param_2 * 0x14;
    __Znwm(lVar3);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar3;
    return auVar5;
  }
  func_0x000109ffded8();
  *puVar2 = 0;
  puVar2[0x58] = 0;
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_10a22cd94(puVar2);
    puVar2[0x58] = 1;
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = puVar2;
  return auVar6;
}



/* Entry: 10a22cce8; end: 10a22ccfb;  */

undefined1  [16] FUN_10a22cce8(undefined8 param_1,ulong param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 < 0xccccccccccccccd) {
    lVar2 = param_2 * 0x14;
    __Znwm(lVar2);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar2;
    return auVar3;
  }
  func_0x000109ffded8();
  *puVar1 = 0;
  puVar1[0x58] = 0;
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_10a22cd94(puVar1);
    puVar1[0x58] = 1;
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = puVar1;
  return auVar4;
}



/* Entry: 10a22ccfc; end: 10a22cd3b;  */

undefined1  [16] FUN_10a22ccfc(undefined1 *param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_2 < 0xccccccccccccccd) {
    lVar1 = param_2 * 0x14;
    __Znwm(lVar1);
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000109ffded8();
  *param_1 = 0;
  param_1[0x58] = 0;
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_10a22cd94(param_1);
    param_1[0x58] = 1;
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a22cd3c; end: 10a22cd93;  */

undefined1 * FUN_10a22cd3c(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[0x58] = 0;
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_10a22cd94(param_1);
    param_1[0x58] = 1;
  }
  return param_1;
}



/* Entry: 10a22cd94; end: 10a22ce47;  */

undefined8 * FUN_10a22cd94(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar6 = param_2[1];
    uVar5 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar6;
    *param_1 = uVar5;
  }
  lVar4 = param_2[4];
  uVar5 = param_2[3];
  param_1[4] = param_2[4];
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
  param_1[5] = param_2[5];
  func_0x000107c2b124(param_1 + 6,param_2 + 6);
  return param_1;
}



/* Entry: 10a22ce48; end: 10a22ce93;  */

undefined8 * FUN_10a22ce48(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0xb) == '\x01') {
    func_0x000107c2ab24(param_1 + 6);
    func_0x00010a052434(param_1 + 3);
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
  }
  return param_1;
}



/* Entry: 10a22ce94; end: 10a22cf17;  */

void FUN_10a22ce94(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a22cf18(param_1,param_4);
    lVar1 = param_1;
    FUN_10a22cfc0(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a22cf18; end: 10a22cf63;  */

undefined1  [16] FUN_10a22cf18(long *param_1,ulong param_2,ulong param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
    plVar1 = param_1;
    FUN_10a22cf78();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 0xb);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = plVar1;
    return auVar6;
  }
  FUN_10a22cf64();
  FUN_109ffde64(&DAT_10f62a4d8);
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
    lVar2 = param_2 * 0x58;
    __Znwm(lVar2);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
  func_0x000109ffded8();
  uVar3 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x58) {
    uVar3 = param_2;
    FUN_10a22d054(param_4,param_2);
    uVar5 = *(undefined8 *)(param_2 + 0x48);
    uVar4 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_4 + 0x4d) = *(undefined8 *)(param_2 + 0x4d);
    *(undefined8 *)(param_4 + 0x48) = uVar5;
    *(undefined8 *)(param_4 + 0x40) = uVar4;
    param_4 = param_4 + 0x58;
  }
  auVar8._8_8_ = uVar3;
  auVar8._0_8_ = param_4;
  return auVar8;
}



/* Entry: 10a22cf64; end: 10a22cf77;  */

undefined1  [16] FUN_10a22cf64(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  FUN_109ffde64(&DAT_10f62a4d8);
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
    lVar1 = param_2 * 0x58;
    __Znwm(lVar1);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar1;
    return auVar5;
  }
  func_0x000109ffded8();
  uVar2 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x58) {
    uVar2 = param_2;
    FUN_10a22d054(param_4,param_2);
    uVar4 = *(undefined8 *)(param_2 + 0x48);
    uVar3 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_4 + 0x4d) = *(undefined8 *)(param_2 + 0x4d);
    *(undefined8 *)(param_4 + 0x48) = uVar4;
    *(undefined8 *)(param_4 + 0x40) = uVar3;
    param_4 = param_4 + 0x58;
  }
  auVar6._8_8_ = uVar2;
  auVar6._0_8_ = param_4;
  return auVar6;
}



/* Entry: 10a22cf78; end: 10a22cfbf;  */

undefined1  [16] FUN_10a22cf78(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
    lVar1 = param_2 * 0x58;
    __Znwm(lVar1);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar1;
    return auVar5;
  }
  func_0x000109ffded8();
  uVar2 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x58) {
    uVar2 = param_2;
    FUN_10a22d054(param_4,param_2);
    uVar4 = *(undefined8 *)(param_2 + 0x48);
    uVar3 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_4 + 0x4d) = *(undefined8 *)(param_2 + 0x4d);
    *(undefined8 *)(param_4 + 0x48) = uVar4;
    *(undefined8 *)(param_4 + 0x40) = uVar3;
    param_4 = param_4 + 0x58;
  }
  auVar6._8_8_ = uVar2;
  auVar6._0_8_ = param_4;
  return auVar6;
}



/* Entry: 10a22cfc0; end: 10a22d053;  */

long FUN_10a22cfc0(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  for (; param_2 != param_3; param_2 = param_2 + 0x58) {
    FUN_10a22d054(param_4,param_2);
    uVar2 = *(undefined8 *)(param_2 + 0x48);
    uVar1 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_4 + 0x4d) = *(undefined8 *)(param_2 + 0x4d);
    *(undefined8 *)(param_4 + 0x48) = uVar2;
    *(undefined8 *)(param_4 + 0x40) = uVar1;
    param_4 = param_4 + 0x58;
  }
  return param_4;
}



/* Entry: 10a22d054; end: 10a22d097;  */

undefined1 * FUN_10a22d054(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  FUN_10a22d098();
  return param_1;
}



/* Entry: 10a22d098; end: 10a22d0f7;  */

void FUN_10a22d098(long param_1,long param_2)

{
  uint uVar1;
  long lStack_38;
  
  FUN_10a22d0f8();
  uVar1 = *(uint *)(param_2 + 0x38);
  if (uVar1 != 0xffffffff) {
    lStack_38 = param_1;
    (*(code *)(&PTR_FUN_110bb4288)[uVar1])(&lStack_38,param_2);
    *(uint *)(param_1 + 0x38) = uVar1;
  }
  return;
}



/* Entry: 10a22d0f8; end: 10a22d14b;  */

void FUN_10a22d0f8(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x38) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110bb4278)[*(uint *)(param_1 + 0x38)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  return;
}



/* Entry: 10a22d14c; end: 10a22d14f;  */

void FUN_10a22d14c(void)

{
  return;
}



/* Entry: 10a22d150; end: 10a22d18b;  */

void FUN_10a22d150(undefined8 param_1,undefined8 *param_2)

{
  func_0x00010a052434(param_2 + 3);
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_2);
  return;
}



/* Entry: 10a22d18c; end: 10a22d1a3;  */

void FUN_10a22d18c(undefined8 *param_1,undefined4 *param_2)

{
  *(undefined4 *)*param_1 = *param_2;
  return;
}



/* Entry: 10a22d1a4; end: 10a22d223;  */

undefined8 * FUN_10a22d1a4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar6 = param_2[1];
    uVar5 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar6;
    *param_1 = uVar5;
  }
  lVar4 = param_2[4];
  uVar5 = param_2[3];
  param_1[4] = param_2[4];
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
  uVar5 = param_2[5];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  param_1[5] = uVar5;
  return param_1;
}



/* Entry: 10a22d224; end: 10a22d293;  */

void FUN_10a22d224(long *param_1)

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
        lVar2 = lVar2 + -0x58;
        FUN_10a22d0f8(lVar2);
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



/* Entry: 10a22d294; end: 10a22d2fb;  */

long FUN_10a22d294(long param_1)

{
  long lStack_28;
  
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    lStack_28 = param_1 + 0xa0;
    FUN_10a22d224(&lStack_28);
    FUN_10a22ce48(param_1 + 0x38);
    if ((*(char *)(param_1 + 0x30) == '\x01') && (*(long *)(param_1 + 0x18) != 0)) {
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 10a22d2fc; end: 10a22d34f;  */

undefined8 * FUN_10a22d2fc(undefined8 *param_1,undefined8 *param_2)

{
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  FUN_10a22d350(param_1,*param_2,param_2 + 1);
  return param_1;
}



/* Entry: 10a22d350; end: 10a22d44f;  */

void FUN_10a22d350(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  
  while (param_2 != param_3) {
    func_0x00010a22d3d0(param_1,param_1 + 8,param_2 + 4,param_2 + 4);
    plVar1 = (long *)param_2[1];
    plVar3 = param_2;
    if ((long *)param_2[1] == (long *)0x0) {
      do {
        param_2 = (long *)plVar3[2];
        bVar2 = (long *)*param_2 != plVar3;
        plVar3 = param_2;
      } while (bVar2);
    }
    else {
      do {
        param_2 = plVar1;
        plVar1 = (long *)*param_2;
      } while ((long *)*param_2 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 10a22d450; end: 10a22d5cf;  */

long * FUN_10a22d450(long *param_1,long *param_2,long *param_3,long *param_4,undefined8 param_5)

{
  bool bVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  if ((param_1 + 1 == param_2) ||
     (uVar2 = param_5, FUN_10a003e3c(param_5,param_2 + 4), ((uint)uVar2 >> 7 & 1) != 0)) {
    plVar6 = param_2;
    if ((long *)*param_1 != param_2) {
      plVar4 = param_2;
      plVar3 = (long *)*param_2;
      if ((long *)*param_2 == (long *)0x0) {
        do {
          plVar6 = (long *)plVar4[2];
          bVar1 = (long *)*plVar6 == plVar4;
          plVar4 = plVar6;
        } while (bVar1);
      }
      else {
        do {
          plVar6 = plVar3;
          plVar3 = (long *)plVar6[1];
        } while ((long *)plVar6[1] != (long *)0x0);
      }
      plVar4 = plVar6 + 4;
      FUN_10a003e3c(plVar4,param_5);
      if (((uint)plVar4 >> 7 & 1) == 0) {
FUN_10a22d68c:
        param_1 = param_1 + 1;
        plVar4 = (long *)*param_1;
        plVar6 = param_1;
        while (plVar4 != (long *)0x0) {
          while (plVar6 = plVar4, uVar2 = param_5, FUN_10a003e3c(param_5,plVar6 + 4),
                ((uint)uVar2 >> 7 & 1) != 0) {
            plVar4 = (long *)*plVar6;
            param_1 = plVar6;
            if ((long *)*plVar6 == (long *)0x0) goto LAB_10a22d6f8;
          }
          plVar4 = plVar6 + 4;
          FUN_10a003e3c(plVar4,param_5);
          if (((uint)plVar4 >> 7 & 1) == 0) break;
          param_1 = plVar6 + 1;
          plVar4 = (long *)*param_1;
        }
LAB_10a22d6f8:
        *param_3 = (long)plVar6;
        return param_1;
      }
    }
    if (*param_2 == 0) {
      *param_3 = (long)param_2;
    }
    else {
      *param_3 = (long)plVar6;
      param_2 = plVar6 + 1;
    }
  }
  else {
    plVar6 = param_2 + 4;
    FUN_10a003e3c(plVar6,param_5);
    if (((uint)plVar6 >> 7 & 1) == 0) {
      *param_3 = (long)param_2;
      *param_4 = (long)param_2;
      param_2 = param_4;
    }
    else {
      plVar5 = param_2 + 1;
      plVar3 = (long *)*plVar5;
      plVar6 = param_2;
      plVar4 = plVar3;
      if (plVar3 == (long *)0x0) {
        do {
          plVar7 = (long *)plVar6[2];
          bVar1 = (long *)*plVar7 != plVar6;
          plVar6 = plVar7;
        } while (bVar1);
      }
      else {
        do {
          plVar7 = plVar4;
          plVar4 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
      if (plVar7 != param_1 + 1) {
        uVar2 = param_5;
        FUN_10a003e3c(param_5,plVar7 + 4);
        if (((uint)uVar2 >> 7 & 1) == 0) goto FUN_10a22d68c;
        plVar3 = (long *)*plVar5;
      }
      if (plVar3 == (long *)0x0) {
        *param_3 = (long)param_2;
        param_2 = plVar5;
      }
      else {
        *param_3 = (long)plVar7;
        param_2 = plVar7;
      }
    }
  }
  return param_2;
}



/* Entry: 10a22d5d0; end: 10a22d637;  */

void FUN_10a22d5d0(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0xe0;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  FUN_10a22d710(lVar1 + 0x20,param_3);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10a22d638; end: 10a22d68b;  */

void FUN_10a22d638(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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



/* Entry: 10a22d68c; end: 10a22d70f;  */

long * FUN_10a22d68c(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar2 = (long *)*plVar3;
  plVar4 = plVar3;
  while (plVar2 != (long *)0x0) {
    while (plVar4 = plVar2, uVar1 = param_3, FUN_10a003e3c(param_3,plVar4 + 4),
          ((uint)uVar1 >> 7 & 1) != 0) {
      plVar2 = (long *)*plVar4;
      plVar3 = plVar4;
      if ((long *)*plVar4 == (long *)0x0) goto LAB_10a22d6f8;
    }
    plVar2 = plVar4 + 4;
    FUN_10a003e3c(plVar2,param_3);
    if (((uint)plVar2 >> 7 & 1) == 0) break;
    plVar3 = plVar4 + 1;
    plVar2 = (long *)*plVar3;
  }
LAB_10a22d6f8:
  *param_2 = plVar4;
  return plVar3;
}



/* Entry: 10a22d710; end: 10a22d85f;  */

undefined8 * FUN_10a22d710(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  func_0x000107c283d0(param_1 + 3,param_2 + 3);
  FUN_10a22d860(param_1 + 8,param_2 + 8);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_10a108d94(param_1 + 0xd,param_2[0xd],param_2[0xe],(long)(param_2[0xe] - param_2[0xd]) >> 3);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  FUN_10a108d94(param_1 + 0x10,param_2[0x10],param_2[0x11],
                (long)(param_2[0x11] - param_2[0x10]) >> 3);
  if (*(char *)((long)param_2 + 0xaf) < '\0') {
    func_0x000107c3192c(param_1 + 0x13,param_2[0x13],param_2[0x14]);
  }
  else {
    uVar2 = param_2[0x14];
    uVar1 = param_2[0x13];
    param_1[0x15] = param_2[0x15];
    param_1[0x14] = uVar2;
    param_1[0x13] = uVar1;
  }
  uVar1 = param_2[0x16];
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0x17);
  param_1[0x16] = uVar1;
  return param_1;
}



/* Entry: 10a22d860; end: 10a22d8d3;  */

undefined8 * FUN_10a22d860(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_10a22d8d4(param_1,*(undefined8 *)(param_2 + 8));
  for (plVar1 = *(long **)(param_2 + 0x10); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    FUN_10a22dae0(param_1,plVar1 + 2,plVar1 + 2);
  }
  return param_1;
}



/* Entry: 10a22d8d4; end: 10a22d9a3;  */

undefined1  [16] FUN_10a22d8d4(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *unaff_x25;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  long *aplStack_88 [3];
  
  plVar8 = param_1;
  plVar4 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar8 = param_2;
  }
  plVar12 = (long *)param_1[1];
  if (param_2 >= plVar12 && param_2 != plVar12) {
LAB_10a22d91c:
    plVar8 = param_2;
    if (param_2 == (long *)0x0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
        plVar8 = param_2;
      }
      param_1[1] = 0;
    }
    else {
      if ((ulong)param_2 >> 0x3d != 0) {
        func_0x000109ffded8();
        plVar8 = param_1;
        func_0x000107c2b05c();
        plVar4 = (long *)param_1[1];
        if (plVar4 != (long *)0x0) {
          uVar5 = (long)plVar4 - 1;
          if (((ulong)plVar4 & uVar5) == 0) {
            unaff_x25 = (long *)(uVar5 & (ulong)plVar8);
          }
          else {
            unaff_x25 = plVar8;
            if (plVar4 <= plVar8) {
              uVar7 = 0;
              if (plVar4 != (long *)0x0) {
                uVar7 = (ulong)plVar8 / (ulong)plVar4;
              }
              unaff_x25 = (long *)((long)plVar8 - uVar7 * (long)plVar4);
            }
          }
          puVar6 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
          if (puVar6 != (undefined8 *)0x0) {
            for (plVar12 = (long *)*puVar6; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
              plVar9 = (long *)plVar12[1];
              if (plVar9 == plVar8) {
                plVar9 = param_1;
                func_0x000107c2b068(param_1,plVar12 + 2,param_2);
                if (((ulong)plVar9 & 1) != 0) {
                  uVar3 = 0;
                  goto LAB_10a22dcd4;
                }
              }
              else {
                if (((ulong)plVar4 & uVar5) == 0) {
                  plVar9 = (long *)((ulong)plVar9 & uVar5);
                }
                else if (plVar4 <= plVar9) {
                  uVar7 = 0;
                  if (plVar4 != (long *)0x0) {
                    uVar7 = (ulong)plVar9 / (ulong)plVar4;
                  }
                  plVar9 = (long *)((long)plVar9 - uVar7 * (long)plVar4);
                }
                if (plVar9 != unaff_x25) break;
              }
            }
          }
        }
        FUN_10a22dd20(aplStack_88,param_1,plVar8,param_3);
        if ((plVar4 == (long *)0x0) ||
           (*(float *)(param_1 + 4) * (float)plVar4 < (float)(param_1[3] + 1))) {
          uVar5 = 1;
          if ((long *)0x2 < plVar4) {
            uVar5 = (ulong)(((ulong)plVar4 & (long)plVar4 - 1U) != 0);
          }
          uVar5 = uVar5 | (long)plVar4 << 1;
          uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
          if (uVar5 <= uVar7) {
            uVar5 = uVar7;
          }
          FUN_10a22d8d4(param_1,uVar5);
          plVar4 = (long *)param_1[1];
          if (((ulong)plVar4 & (long)plVar4 - 1U) == 0) {
            unaff_x25 = (long *)((long)plVar4 - 1U & (ulong)plVar8);
          }
          else {
            unaff_x25 = plVar8;
            if (plVar4 <= plVar8) {
              uVar5 = 0;
              if (plVar4 != (long *)0x0) {
                uVar5 = (ulong)plVar8 / (ulong)plVar4;
              }
              unaff_x25 = (long *)((long)plVar8 - uVar5 * (long)plVar4);
            }
          }
        }
        lVar2 = *param_1;
        plVar8 = *(long **)(lVar2 + (long)unaff_x25 * 8);
        if (plVar8 == (long *)0x0) {
          plVar8 = param_1 + 2;
          *aplStack_88[0] = *plVar8;
          *plVar8 = (long)aplStack_88[0];
          *(long **)(lVar2 + (long)unaff_x25 * 8) = plVar8;
          if (*aplStack_88[0] != 0) {
            plVar8 = *(long **)(*aplStack_88[0] + 8);
            if (((ulong)plVar4 & (long)plVar4 - 1U) == 0) {
              plVar8 = (long *)((ulong)plVar8 & (long)plVar4 - 1U);
            }
            else if (plVar4 <= plVar8) {
              uVar5 = 0;
              if (plVar4 != (long *)0x0) {
                uVar5 = (ulong)plVar8 / (ulong)plVar4;
              }
              plVar8 = (long *)((long)plVar8 - uVar5 * (long)plVar4);
            }
            *(long **)(*param_1 + (long)plVar8 * 8) = aplStack_88[0];
          }
        }
        else {
          *aplStack_88[0] = *plVar8;
          *plVar8 = (long)aplStack_88[0];
        }
        param_1[3] = param_1[3] + 1;
        uVar3 = 1;
        plVar12 = aplStack_88[0];
LAB_10a22dcd4:
        auVar15._8_8_ = uVar3;
        auVar15._0_8_ = plVar12;
        return auVar15;
      }
      lVar1 = (long)param_2 << 3;
      __Znwm();
      lVar2 = *param_1;
      *param_1 = lVar1;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      plVar4 = (long *)0x0;
      param_1[1] = (long)param_2;
      do {
        *(undefined8 *)(*param_1 + (long)plVar4 * 8) = 0;
        plVar4 = (long *)((long)plVar4 + 1);
      } while (param_2 != plVar4);
      plVar4 = (long *)param_1[2];
      if (plVar4 != (long *)0x0) {
        plVar12 = (long *)plVar4[1];
        uVar5 = (long)param_2 - 1;
        if (((ulong)param_2 & uVar5) == 0) {
          plVar12 = (long *)((ulong)plVar12 & uVar5);
        }
        else if (param_2 <= plVar12) {
          uVar7 = 0;
          if (param_2 != (long *)0x0) {
            uVar7 = (ulong)plVar12 / (ulong)param_2;
          }
          plVar12 = (long *)((long)plVar12 - uVar7 * (long)param_2);
        }
        *(long **)(*param_1 + (long)plVar12 * 8) = param_1 + 2;
        plVar9 = (long *)*plVar4;
        while (plVar9 != (long *)0x0) {
          plVar11 = (long *)plVar9[1];
          if (((ulong)param_2 & uVar5) == 0) {
            plVar11 = (long *)((ulong)plVar11 & uVar5);
          }
          else if (param_2 <= plVar11) {
            uVar7 = 0;
            if (param_2 != (long *)0x0) {
              uVar7 = (ulong)plVar11 / (ulong)param_2;
            }
            plVar11 = (long *)((long)plVar11 - uVar7 * (long)param_2);
          }
          plVar10 = plVar9;
          if (plVar11 != plVar12) {
            lVar1 = *param_1;
            if (*(long *)(lVar1 + (long)plVar11 * 8) == 0) {
              *(long **)(lVar1 + (long)plVar11 * 8) = plVar4;
              plVar12 = plVar11;
            }
            else {
              *plVar4 = *plVar9;
              *plVar9 = **(undefined8 **)(lVar1 + (long)plVar11 * 8);
              **(long **)(lVar1 + (long)plVar11 * 8) = (long)plVar9;
              plVar10 = plVar4;
            }
          }
          plVar4 = plVar10;
          plVar9 = (long *)*plVar10;
        }
      }
    }
    auVar14._8_8_ = plVar8;
    auVar14._0_8_ = lVar2;
    return auVar14;
  }
  if (param_2 < plVar12) {
    plVar8 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar12 < (long *)0x3) || (((ulong)plVar12 & (long)plVar12 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar8) {
      plVar8 = (long *)(1L << (-LZCOUNT((long)plVar8 + -1) & 0x3fU));
    }
    if (param_2 <= plVar8) {
      param_2 = plVar8;
    }
    if (param_2 < plVar12) goto LAB_10a22d91c;
  }
  auVar13._8_8_ = plVar4;
  auVar13._0_8_ = plVar8;
  return auVar13;
}



/* Entry: 10a22d9a4; end: 10a22dadf;  */

undefined1  [16] FUN_10a22d9a4(long *param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long *unaff_x25;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  long *aplStack_88 [3];
  
  uVar13 = param_2;
  if (param_2 == 0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      __ZdlPv();
      uVar13 = param_2;
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000109ffded8();
      plVar9 = param_1;
      func_0x000107c2b05c();
      plVar10 = (long *)param_1[1];
      if (plVar10 != (long *)0x0) {
        uVar13 = (long)plVar10 - 1;
        if (((ulong)plVar10 & uVar13) == 0) {
          unaff_x25 = (long *)(uVar13 & (ulong)plVar9);
        }
        else {
          unaff_x25 = plVar9;
          if (plVar10 <= plVar9) {
            uVar5 = 0;
            if (plVar10 != (long *)0x0) {
              uVar5 = (ulong)plVar9 / (ulong)plVar10;
            }
            unaff_x25 = (long *)((long)plVar9 - uVar5 * (long)plVar10);
          }
        }
        puVar7 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
        if (puVar7 != (undefined8 *)0x0) {
          for (plVar12 = (long *)*puVar7; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
            plVar8 = (long *)plVar12[1];
            if (plVar8 == plVar9) {
              plVar8 = param_1;
              func_0x000107c2b068(param_1,plVar12 + 2,param_2);
              if (((ulong)plVar8 & 1) != 0) {
                uVar4 = 0;
                goto LAB_10a22dcd4;
              }
            }
            else {
              if (((ulong)plVar10 & uVar13) == 0) {
                plVar8 = (long *)((ulong)plVar8 & uVar13);
              }
              else if (plVar10 <= plVar8) {
                uVar5 = 0;
                if (plVar10 != (long *)0x0) {
                  uVar5 = (ulong)plVar8 / (ulong)plVar10;
                }
                plVar8 = (long *)((long)plVar8 - uVar5 * (long)plVar10);
              }
              if (plVar8 != unaff_x25) break;
            }
          }
        }
      }
      FUN_10a22dd20(aplStack_88,param_1,plVar9,param_3);
      if ((plVar10 == (long *)0x0) ||
         (*(float *)(param_1 + 4) * (float)plVar10 < (float)(param_1[3] + 1))) {
        uVar13 = 1;
        if ((long *)0x2 < plVar10) {
          uVar13 = (ulong)(((ulong)plVar10 & (long)plVar10 - 1U) != 0);
        }
        uVar13 = uVar13 | (long)plVar10 << 1;
        uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
        if (uVar13 <= uVar5) {
          uVar13 = uVar5;
        }
        FUN_10a22d8d4(param_1,uVar13);
        plVar10 = (long *)param_1[1];
        if (((ulong)plVar10 & (long)plVar10 - 1U) == 0) {
          unaff_x25 = (long *)((long)plVar10 - 1U & (ulong)plVar9);
        }
        else {
          unaff_x25 = plVar9;
          if (plVar10 <= plVar9) {
            uVar13 = 0;
            if (plVar10 != (long *)0x0) {
              uVar13 = (ulong)plVar9 / (ulong)plVar10;
            }
            unaff_x25 = (long *)((long)plVar9 - uVar13 * (long)plVar10);
          }
        }
      }
      lVar3 = *param_1;
      plVar9 = *(long **)(lVar3 + (long)unaff_x25 * 8);
      if (plVar9 == (long *)0x0) {
        plVar9 = param_1 + 2;
        *aplStack_88[0] = *plVar9;
        *plVar9 = (long)aplStack_88[0];
        *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar9;
        if (*aplStack_88[0] != 0) {
          plVar9 = *(long **)(*aplStack_88[0] + 8);
          if (((ulong)plVar10 & (long)plVar10 - 1U) == 0) {
            plVar9 = (long *)((ulong)plVar9 & (long)plVar10 - 1U);
          }
          else if (plVar10 <= plVar9) {
            uVar13 = 0;
            if (plVar10 != (long *)0x0) {
              uVar13 = (ulong)plVar9 / (ulong)plVar10;
            }
            plVar9 = (long *)((long)plVar9 - uVar13 * (long)plVar10);
          }
          *(long **)(*param_1 + (long)plVar9 * 8) = aplStack_88[0];
        }
      }
      else {
        *aplStack_88[0] = *plVar9;
        *plVar9 = (long)aplStack_88[0];
      }
      param_1[3] = param_1[3] + 1;
      uVar4 = 1;
      plVar12 = aplStack_88[0];
LAB_10a22dcd4:
      auVar15._8_8_ = uVar4;
      auVar15._0_8_ = plVar12;
      return auVar15;
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
    plVar9 = (long *)param_1[2];
    if (plVar9 != (long *)0x0) {
      uVar5 = plVar9[1];
      uVar6 = param_2 - 1;
      if ((param_2 & uVar6) == 0) {
        uVar5 = uVar5 & uVar6;
      }
      else if (param_2 <= uVar5) {
        uVar11 = 0;
        if (param_2 != 0) {
          uVar11 = uVar5 / param_2;
        }
        uVar5 = uVar5 - uVar11 * param_2;
      }
      *(long **)(*param_1 + uVar5 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar9;
      while (plVar10 != (long *)0x0) {
        uVar11 = plVar10[1];
        if ((param_2 & uVar6) == 0) {
          uVar11 = uVar11 & uVar6;
        }
        else if (param_2 <= uVar11) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar11 / param_2;
          }
          uVar11 = uVar11 - uVar1 * param_2;
        }
        plVar12 = plVar10;
        if (uVar11 != uVar5) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar11 * 8) == 0) {
            *(long **)(lVar2 + uVar11 * 8) = plVar9;
            uVar5 = uVar11;
          }
          else {
            *plVar9 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar2 + uVar11 * 8);
            **(long **)(lVar2 + uVar11 * 8) = (long)plVar10;
            plVar12 = plVar9;
          }
        }
        plVar9 = plVar12;
        plVar10 = (long *)*plVar12;
      }
    }
  }
  auVar14._8_8_ = uVar13;
  auVar14._0_8_ = lVar3;
  return auVar14;
}



/* Entry: 10a22dae0; end: 10a22dd1f;  */

undefined1  [16] FUN_10a22dae0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x25;
  ulong uVar9;
  undefined1 auVar10 [16];
  long *aplStack_68 [3];
  
  plVar6 = param_1;
  func_0x000107c2b05c();
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      unaff_x25 = (long *)(uVar9 & (ulong)plVar6);
    }
    else {
      unaff_x25 = plVar6;
      if (plVar8 <= plVar6) {
        uVar5 = 0;
        if (plVar8 != (long *)0x0) {
          uVar5 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x25 = (long *)((long)plVar6 - uVar5 * (long)plVar8);
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      for (plVar7 = (long *)*puVar2; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        plVar3 = (long *)plVar7[1];
        if (plVar3 == plVar6) {
          plVar3 = param_1;
          func_0x000107c2b068(param_1,plVar7 + 2,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar1 = 0;
            goto LAB_10a22dcd4;
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
          if (plVar3 != unaff_x25) break;
        }
      }
    }
  }
  FUN_10a22dd20(aplStack_68,param_1,plVar6,param_3);
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
    FUN_10a22d8d4(param_1,uVar9);
    plVar8 = (long *)param_1[1];
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar8 - 1U & (ulong)plVar6);
    }
    else {
      unaff_x25 = plVar6;
      if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x25 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
    }
  }
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + (long)unaff_x25 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *aplStack_68[0] = *plVar6;
    *plVar6 = (long)aplStack_68[0];
    *(long **)(lVar4 + (long)unaff_x25 * 8) = plVar6;
    if (*aplStack_68[0] != 0) {
      plVar6 = *(long **)(*aplStack_68[0] + 8);
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
      *(long **)(*param_1 + (long)plVar6 * 8) = aplStack_68[0];
    }
  }
  else {
    *aplStack_68[0] = *plVar6;
    *plVar6 = (long)aplStack_68[0];
  }
  param_1[3] = param_1[3] + 1;
  uVar1 = 1;
  plVar7 = aplStack_68[0];
LAB_10a22dcd4:
  auVar10._8_8_ = uVar1;
  auVar10._0_8_ = plVar7;
  return auVar10;
}



/* Entry: 10a22dd20; end: 10a22dda3;  */

void FUN_10a22dd20(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xc0;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  FUN_10a22dda4(puVar1 + 2,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10a22dda4; end: 10a22dff7;  */

undefined8 * FUN_10a22dda4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  uVar1 = param_2[4];
  uVar3 = param_2[7];
  uVar2 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  uVar2 = param_2[9];
  uVar1 = param_2[8];
  param_1[10] = param_2[10];
  param_1[9] = uVar2;
  param_1[8] = uVar1;
  uVar4 = param_2[0x11];
  uVar3 = param_2[0x10];
  uVar2 = param_2[0x13];
  uVar1 = param_2[0x12];
  uVar6 = param_2[0xf];
  uVar5 = param_2[0xe];
  param_1[0x14] = param_2[0x14];
  param_1[0x11] = uVar4;
  param_1[0x10] = uVar3;
  param_1[0x13] = uVar2;
  param_1[0x12] = uVar1;
  param_1[0xf] = uVar6;
  param_1[0xe] = uVar5;
  uVar1 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar1;
  return param_1;
}



/* Entry: 10a22dff8; end: 10a22e06b;  */

undefined8 * FUN_10a22dff8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_10a22e06c(param_1,*(undefined8 *)(param_2 + 8));
  for (plVar1 = *(long **)(param_2 + 0x10); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    FUN_10a22e278(param_1,plVar1 + 2,plVar1 + 2);
  }
  return param_1;
}



/* Entry: 10a22e06c; end: 10a22e13b;  */

undefined1  [16] FUN_10a22e06c(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *unaff_x25;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  long *aplStack_88 [3];
  
  plVar8 = param_1;
  plVar4 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar8 = param_2;
  }
  plVar12 = (long *)param_1[1];
  if (param_2 >= plVar12 && param_2 != plVar12) {
LAB_10a22e0b4:
    plVar8 = param_2;
    if (param_2 == (long *)0x0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
        plVar8 = param_2;
      }
      param_1[1] = 0;
    }
    else {
      if ((ulong)param_2 >> 0x3d != 0) {
        func_0x000109ffded8();
        plVar8 = param_1;
        func_0x000107c2b05c();
        plVar4 = (long *)param_1[1];
        if (plVar4 != (long *)0x0) {
          uVar5 = (long)plVar4 - 1;
          if (((ulong)plVar4 & uVar5) == 0) {
            unaff_x25 = (long *)(uVar5 & (ulong)plVar8);
          }
          else {
            unaff_x25 = plVar8;
            if (plVar4 <= plVar8) {
              uVar7 = 0;
              if (plVar4 != (long *)0x0) {
                uVar7 = (ulong)plVar8 / (ulong)plVar4;
              }
              unaff_x25 = (long *)((long)plVar8 - uVar7 * (long)plVar4);
            }
          }
          puVar6 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
          if (puVar6 != (undefined8 *)0x0) {
            for (plVar12 = (long *)*puVar6; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
              plVar9 = (long *)plVar12[1];
              if (plVar9 == plVar8) {
                plVar9 = param_1;
                func_0x000107c2b068(param_1,plVar12 + 2,param_2);
                if (((ulong)plVar9 & 1) != 0) {
                  uVar3 = 0;
                  goto LAB_10a22e46c;
                }
              }
              else {
                if (((ulong)plVar4 & uVar5) == 0) {
                  plVar9 = (long *)((ulong)plVar9 & uVar5);
                }
                else if (plVar4 <= plVar9) {
                  uVar7 = 0;
                  if (plVar4 != (long *)0x0) {
                    uVar7 = (ulong)plVar9 / (ulong)plVar4;
                  }
                  plVar9 = (long *)((long)plVar9 - uVar7 * (long)plVar4);
                }
                if (plVar9 != unaff_x25) break;
              }
            }
          }
        }
        FUN_10a22e4ac(aplStack_88,param_1,plVar8,param_3);
        if ((plVar4 == (long *)0x0) ||
           (*(float *)(param_1 + 4) * (float)plVar4 < (float)(param_1[3] + 1))) {
          uVar5 = 1;
          if ((long *)0x2 < plVar4) {
            uVar5 = (ulong)(((ulong)plVar4 & (long)plVar4 - 1U) != 0);
          }
          uVar5 = uVar5 | (long)plVar4 << 1;
          uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
          if (uVar5 <= uVar7) {
            uVar5 = uVar7;
          }
          FUN_10a22e06c(param_1,uVar5);
          plVar4 = (long *)param_1[1];
          if (((ulong)plVar4 & (long)plVar4 - 1U) == 0) {
            unaff_x25 = (long *)((long)plVar4 - 1U & (ulong)plVar8);
          }
          else {
            unaff_x25 = plVar8;
            if (plVar4 <= plVar8) {
              uVar5 = 0;
              if (plVar4 != (long *)0x0) {
                uVar5 = (ulong)plVar8 / (ulong)plVar4;
              }
              unaff_x25 = (long *)((long)plVar8 - uVar5 * (long)plVar4);
            }
          }
        }
        lVar2 = *param_1;
        plVar8 = *(long **)(lVar2 + (long)unaff_x25 * 8);
        if (plVar8 == (long *)0x0) {
          plVar8 = param_1 + 2;
          *aplStack_88[0] = *plVar8;
          *plVar8 = (long)aplStack_88[0];
          *(long **)(lVar2 + (long)unaff_x25 * 8) = plVar8;
          if (*aplStack_88[0] != 0) {
            plVar8 = *(long **)(*aplStack_88[0] + 8);
            if (((ulong)plVar4 & (long)plVar4 - 1U) == 0) {
              plVar8 = (long *)((ulong)plVar8 & (long)plVar4 - 1U);
            }
            else if (plVar4 <= plVar8) {
              uVar5 = 0;
              if (plVar4 != (long *)0x0) {
                uVar5 = (ulong)plVar8 / (ulong)plVar4;
              }
              plVar8 = (long *)((long)plVar8 - uVar5 * (long)plVar4);
            }
            *(long **)(*param_1 + (long)plVar8 * 8) = aplStack_88[0];
          }
        }
        else {
          *aplStack_88[0] = *plVar8;
          *plVar8 = (long)aplStack_88[0];
        }
        param_1[3] = param_1[3] + 1;
        uVar3 = 1;
        plVar12 = aplStack_88[0];
LAB_10a22e46c:
        auVar15._8_8_ = uVar3;
        auVar15._0_8_ = plVar12;
        return auVar15;
      }
      lVar1 = (long)param_2 << 3;
      __Znwm();
      lVar2 = *param_1;
      *param_1 = lVar1;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      plVar4 = (long *)0x0;
      param_1[1] = (long)param_2;
      do {
        *(undefined8 *)(*param_1 + (long)plVar4 * 8) = 0;
        plVar4 = (long *)((long)plVar4 + 1);
      } while (param_2 != plVar4);
      plVar4 = (long *)param_1[2];
      if (plVar4 != (long *)0x0) {
        plVar12 = (long *)plVar4[1];
        uVar5 = (long)param_2 - 1;
        if (((ulong)param_2 & uVar5) == 0) {
          plVar12 = (long *)((ulong)plVar12 & uVar5);
        }
        else if (param_2 <= plVar12) {
          uVar7 = 0;
          if (param_2 != (long *)0x0) {
            uVar7 = (ulong)plVar12 / (ulong)param_2;
          }
          plVar12 = (long *)((long)plVar12 - uVar7 * (long)param_2);
        }
        *(long **)(*param_1 + (long)plVar12 * 8) = param_1 + 2;
        plVar9 = (long *)*plVar4;
        while (plVar9 != (long *)0x0) {
          plVar11 = (long *)plVar9[1];
          if (((ulong)param_2 & uVar5) == 0) {
            plVar11 = (long *)((ulong)plVar11 & uVar5);
          }
          else if (param_2 <= plVar11) {
            uVar7 = 0;
            if (param_2 != (long *)0x0) {
              uVar7 = (ulong)plVar11 / (ulong)param_2;
            }
            plVar11 = (long *)((long)plVar11 - uVar7 * (long)param_2);
          }
          plVar10 = plVar9;
          if (plVar11 != plVar12) {
            lVar1 = *param_1;
            if (*(long *)(lVar1 + (long)plVar11 * 8) == 0) {
              *(long **)(lVar1 + (long)plVar11 * 8) = plVar4;
              plVar12 = plVar11;
            }
            else {
              *plVar4 = *plVar9;
              *plVar9 = **(undefined8 **)(lVar1 + (long)plVar11 * 8);
              **(long **)(lVar1 + (long)plVar11 * 8) = (long)plVar9;
              plVar10 = plVar4;
            }
          }
          plVar4 = plVar10;
          plVar9 = (long *)*plVar10;
        }
      }
    }
    auVar14._8_8_ = plVar8;
    auVar14._0_8_ = lVar2;
    return auVar14;
  }
  if (param_2 < plVar12) {
    plVar8 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar12 < (long *)0x3) || (((ulong)plVar12 & (long)plVar12 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar8) {
      plVar8 = (long *)(1L << (-LZCOUNT((long)plVar8 + -1) & 0x3fU));
    }
    if (param_2 <= plVar8) {
      param_2 = plVar8;
    }
    if (param_2 < plVar12) goto LAB_10a22e0b4;
  }
  auVar13._8_8_ = plVar4;
  auVar13._0_8_ = plVar8;
  return auVar13;
}


