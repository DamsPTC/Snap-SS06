/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aae6958; end: 10aae699f;  */

void FUN_10aae6958(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a1bb0e8(lVar1 + 0x20);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10aae69a0; end: 10aae6b6f;  */

void FUN_10aae69a0(long *param_1,long *param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  plVar5 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar5 = param_2;
  }
  plVar10 = (long *)param_1[1];
  if (plVar10 > param_2 || param_2 == plVar10) {
    if (plVar10 <= param_2) {
      return;
    }
    plVar5 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar10 < (long *)0x3) || (((ulong)plVar10 & (long)plVar10 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar5) {
      plVar5 = (long *)(1L << (-LZCOUNT((long)plVar5 + -1) & 0x3fU));
    }
    if (param_2 <= plVar5) {
      param_2 = plVar5;
    }
    if (plVar10 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar3 = (long)param_2 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    plVar5 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar5 * 8) = 0;
      plVar5 = (long *)((long)plVar5 + 1);
    } while (param_2 != plVar5);
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      plVar10 = (long *)plVar5[1];
      uVar6 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar6) == 0) {
        plVar10 = (long *)((ulong)plVar10 & uVar6);
      }
      else if (param_2 <= plVar10) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar10 / (ulong)param_2;
        }
        plVar10 = (long *)((long)plVar10 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar10 * 8) = param_1 + 2;
      plVar7 = (long *)*plVar5;
      while (plVar7 != (long *)0x0) {
        plVar9 = (long *)plVar7[1];
        if (((ulong)param_2 & uVar6) == 0) {
          plVar9 = (long *)((ulong)plVar9 & uVar6);
        }
        else if (param_2 <= plVar9) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar9 / (ulong)param_2;
          }
          plVar9 = (long *)((long)plVar9 - uVar1 * (long)param_2);
        }
        plVar8 = plVar7;
        if (plVar9 != plVar10) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + (long)plVar9 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar9 * 8) = plVar5;
            plVar10 = plVar9;
          }
          else {
            *plVar5 = *plVar7;
            *plVar7 = **(undefined8 **)(lVar3 + (long)plVar9 * 8);
            **(long **)(lVar3 + (long)plVar9 * 8) = (long)plVar7;
            plVar8 = plVar5;
          }
        }
        plVar5 = plVar8;
        plVar7 = (long *)*plVar8;
      }
    }
    return;
  }
  func_0x000109ffded8();
  lVar3 = *plVar5;
  if (lVar3 != 0) {
    if ((*(byte *)((long)plVar5 + 9) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10aae6bb4);
      (*pcVar2)();
    }
    func_0x00010a1bb0e8(lVar3 + 0x20);
    __ZdlPv(lVar3);
    *plVar5 = 0;
  }
  return;
}



/* Entry: 10aae6b70; end: 10aae6d1f;  */

void FUN_10aae6b70(long *param_1)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    if ((*(byte *)((long)param_1 + 9) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10aae6bb4);
      (*pcVar1)();
    }
    func_0x00010a1bb0e8(lVar2 + 0x20);
    __ZdlPv(lVar2);
    *param_1 = 0;
  }
  return;
}



/* Entry: 10aae6d20; end: 10aae6dbf;  */

long * FUN_10aae6d20(long *param_1,int *param_2)

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



/* Entry: 10aae6dc0; end: 10aae6e97;  */

long FUN_10aae6dc0(long *param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar1 = param_1;
  FUN_10aad09b8();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)(uVar6 & (ulong)plVar1);
    }
    else {
      plVar7 = plVar1;
      if (plVar5 <= plVar1) {
        uVar2 = 0;
        if (plVar5 != (long *)0x0) {
          uVar2 = (ulong)plVar1 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar1 - uVar2 * (long)plVar5);
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
        if (plVar1 == plVar4) {
          uVar2 = (ulong)(plVar3 + 2);
          FUN_10a22c6f0(uVar2,param_2);
          if ((uVar2 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar6);
          }
          else if (plVar5 <= plVar4) {
            uVar2 = 0;
            if (plVar5 != (long *)0x0) {
              uVar2 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar2 * (long)plVar5);
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



/* Entry: 10aae6e98; end: 10aae70cb;  */

undefined1  [16] FUN_10aae6e98(long *param_1,int *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x24;
  undefined1 auVar11 [16];
  
  uVar10 = (ulong)*param_2;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar3 = uVar9 - 1;
    if ((uVar9 & uVar3) == 0) {
      unaff_x24 = uVar3 & uVar10;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar6 = 0;
        if (uVar9 != 0) {
          uVar6 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar6 * uVar9;
      }
    }
    puVar5 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar5 != (undefined8 *)0x0) {
      for (plVar8 = (long *)*puVar5; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar6 = plVar8[1];
        if (uVar6 == uVar10) {
          if ((int)plVar8[2] == *param_2) {
            uVar2 = 0;
            goto LAB_10aae7090;
          }
        }
        else {
          if ((uVar9 & uVar3) == 0) {
            uVar6 = uVar6 & uVar3;
          }
          else if (uVar9 <= uVar6) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar6 / uVar9;
            }
            uVar6 = uVar6 - uVar1 * uVar9;
          }
          if (uVar6 != unaff_x24) break;
        }
      }
    }
  }
  plVar8 = (long *)0x40;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = uVar10;
  *(undefined4 *)(plVar8 + 2) = *(undefined4 *)*param_4;
  plVar8[6] = 0;
  plVar8[5] = 0;
  plVar8[4] = 0;
  plVar8[3] = 0;
  *(undefined4 *)(plVar8 + 7) = 0x3f800000;
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar9) {
      uVar3 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar3 = uVar3 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar9) {
      uVar3 = uVar9;
    }
    FUN_10a22bdbc(param_1,uVar3);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = uVar9 - 1 & uVar10;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar3 * uVar9;
      }
    }
  }
  lVar7 = *param_1;
  plVar4 = *(long **)(lVar7 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *plVar8 = *plVar4;
    *plVar4 = (long)plVar8;
    *(long **)(lVar7 + unaff_x24 * 8) = plVar4;
    if (*plVar8 == 0) goto LAB_10aae7080;
    uVar10 = *(ulong *)(*plVar8 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar10 = uVar10 & uVar9 - 1;
    }
    else if (uVar9 <= uVar10) {
      uVar3 = 0;
      if (uVar9 != 0) {
        uVar3 = uVar10 / uVar9;
      }
      uVar10 = uVar10 - uVar3 * uVar9;
    }
    plVar4 = (long *)(*param_1 + uVar10 * 8);
  }
  else {
    *plVar8 = *plVar4;
  }
  *plVar4 = (long)plVar8;
LAB_10aae7080:
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_10aae7090:
  auVar11._8_8_ = uVar2;
  auVar11._0_8_ = plVar8;
  return auVar11;
}



/* Entry: 10aae70cc; end: 10aae713b;  */

void FUN_10aae70cc(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x70;
  __Znwm();
  FUN_10aae713c();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10aae713c; end: 10aae719b;  */

undefined8 *
FUN_10aae713c(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110c44708;
  FUN_10aad37e8(param_1 + 3,*param_2,*param_3,*param_4);
  param_1[3] = &PTR_FUN_110c43580;
  return param_1;
}



/* Entry: 10aae719c; end: 10aae71ab;  */

void FUN_10aae719c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c44708;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10aae71ac; end: 10aae71cb;  */

void FUN_10aae71ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c44708;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aae71cc; end: 10aae71db;  */

void FUN_10aae71cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010aae71d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10aae71dc; end: 10aae7637;  */

void FUN_10aae71dc(long param_1)

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
      goto LAB_10aae74f8;
    }
    if ((*(byte *)(plVar5 + 0x15) & 1) == 0) goto LAB_10aae74f8;
    *(long *)(param_1 + 0x48) = plVar5[0x13];
    lVar6 = plVar5[0x14];
    *(long *)(param_1 + 0x50) = lVar6;
    if (lVar6 == 0) {
LAB_10aae7244:
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
      if (plVar5 != (long *)0x0) goto LAB_10aae7244;
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
    if (*(long *)(param_1 + 0x70) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x70) + 0x18) + 0x10))();
    }
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
LAB_10aae74f8:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aae74fc);
  (*pcVar4)();
}



/* Entry: 10aae7638; end: 10aae777b;  */

void FUN_10aae7638(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
    plVar4 = *(long **)(param_1 + 0x58);
    if (plVar4 == (long *)0x0) goto LAB_10aae7764;
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
    if ((uVar5 & 0x1fffffffc) != 4) goto LAB_10aae7764;
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
    if (plVar4 == (long *)0x0) goto LAB_10aae7764;
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
    if ((uVar5 & 0x1fffffffc) != 4) goto LAB_10aae7764;
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
LAB_10aae7764:
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10aae777c; end: 10aae7a1f;  */

void FUN_10aae777c(long param_1)

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
    FUN_10aae0500(param_1 + 0xa8,param_1 + 0x48);
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
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10aae795c);
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



/* Entry: 10aae7a20; end: 10aae7b33;  */

void FUN_10aae7a20(long param_1)

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



/* Entry: 10aae7b34; end: 10aae7d33;  */

void FUN_10aae7b34(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  undefined **ppuVar7;
  long lVar8;
  ulong uVar9;
  
  lVar8 = *(long *)(param_1 + 0x70);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar8 + 0xc0) & 1) != 0) {
      FUN_10a4f0c8c(param_1 + 0x48,lVar8 + 0x98);
      plVar6 = *(long **)(param_1 + 0x70);
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
      lVar8 = *(long *)(param_1 + 0x78);
      ppuVar7 = &PTR_PTR_113305fe0;
      FUN_10ae079a0(0,&PTR_PTR_113305fe0);
      FUN_10ae07cd4(ppuVar7,&PTR_PTR_113305fe0);
      plVar6 = *(long **)(lVar8 + 0x10);
      if ((plVar6 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 != (long *)0x0)) {
        lVar8 = *(long *)(lVar8 + 8);
        if (lVar8 != 0) {
          FUN_10aabbbfc(lVar8 + 0x240,param_1 + 0x48);
          *(undefined1 *)(lVar8 + 0x1f1) = 1;
        }
        plVar2 = plVar6 + 1;
        do {
          lVar8 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      plVar6 = *(long **)(param_1 + 0x68);
      if (plVar6 != (long *)0x0) {
        plVar2 = plVar6 + 1;
        do {
          lVar8 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      if (*(char *)(param_1 + 0x5f) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 0x48));
      }
      func_0x0001092ba100(param_1 + 0x10);
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
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10aae7cb8);
  (*pcVar5)();
}



/* Entry: 10aae7d34; end: 10aae7da3;  */

void FUN_10aae7d34(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
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
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10aae7da4; end: 10aae804b;  */

void FUN_10aae7da4(long param_1)

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
  
  if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
    FUN_10aad69f0(param_1 + 0x70,param_1 + 0x48);
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x70);
    plVar5 = (long *)(*(long *)(param_1 + 0x70) + 8);
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
      lVar8 = *(long *)(param_1 + 0x60);
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
  plVar5 = *(long **)(param_1 + 0x60);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar5 + 0x12);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10aae7f88);
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
  plVar5 = *(long **)(param_1 + 0x70);
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
  if (*(long *)(param_1 + 0x58) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
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



/* Entry: 10aae804c; end: 10aae8163;  */

void FUN_10aae804c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0x78) == '\x01') {
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
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
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



/* Entry: 10aae8164; end: 10aae85bf;  */

void FUN_10aae8164(long param_1)

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
      goto LAB_10aae8480;
    }
    if ((*(byte *)(plVar5 + 0x15) & 1) == 0) goto LAB_10aae8480;
    *(long *)(param_1 + 0x48) = plVar5[0x13];
    lVar6 = plVar5[0x14];
    *(long *)(param_1 + 0x50) = lVar6;
    if (lVar6 == 0) {
LAB_10aae81cc:
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
      if (plVar5 != (long *)0x0) goto LAB_10aae81cc;
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
    if (*(long *)(param_1 + 0x70) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x70) + 0x18) + 0x10))();
    }
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
LAB_10aae8480:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aae8484);
  (*pcVar4)();
}



/* Entry: 10aae85c0; end: 10aae8703;  */

void FUN_10aae85c0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
    plVar4 = *(long **)(param_1 + 0x58);
    if (plVar4 == (long *)0x0) goto LAB_10aae86ec;
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
    if ((uVar5 & 0x1fffffffc) != 4) goto LAB_10aae86ec;
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
    if (plVar4 == (long *)0x0) goto LAB_10aae86ec;
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
    if ((uVar5 & 0x1fffffffc) != 4) goto LAB_10aae86ec;
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
LAB_10aae86ec:
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10aae8704; end: 10aae89a7;  */

void FUN_10aae8704(long param_1)

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
    FUN_10aae17c8(param_1 + 0xa8,param_1 + 0x48);
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
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10aae88e4);
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



/* Entry: 10aae89a8; end: 10aae8abb;  */

void FUN_10aae89a8(long param_1)

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



/* Entry: 10aae8abc; end: 10aae8ee7;  */

void FUN_10aae8abc(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long lStack_70;
  long lStack_68;
  
  plVar13 = (long *)(param_1 + 0x48);
  lVar12 = param_1 + 0x10;
  plVar8 = (long *)*plVar13;
  if (((uint)*(undefined8 *)(*plVar13 + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar8 + 0x12);
LAB_10aae8da0:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10aae8da4);
    (*pcVar6)();
  }
  if (plVar8 != (long *)0x0) {
    puVar1 = (ulong *)(plVar8 + 1);
    do {
      uVar11 = *puVar1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar7) {
        *puVar1 = uVar11 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar11 & 0x1fffffffc) == 4) {
      do {
        uVar11 = *puVar1;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar7) {
          *puVar1 = uVar11 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar11 - 1 == 0) {
        (**(code **)(*plVar8 + 8))();
      }
    }
  }
  plVar8 = *(long **)(param_1 + 0x70);
  if (plVar8 != (long *)0x0) {
    puVar1 = (ulong *)(plVar8 + 1);
    do {
      uVar11 = *puVar1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar7) {
        *puVar1 = uVar11 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar11 & 0x1fffffffc) == 4) {
      do {
        uVar11 = *puVar1;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar7) {
          *puVar1 = uVar11 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar11 - 1 == 0) {
        (**(code **)(*plVar8 + 8))();
      }
    }
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  lVar9 = *(long *)(*(long *)(param_1 + 0xa8) + 8);
  if (lVar9 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    *(long *)(param_1 + 0xa0) = lVar9;
    if (lVar9 != 0) {
      plVar8 = *(long **)(param_1 + 0xa8);
      lVar9 = *plVar8;
      *(long *)(param_1 + 0x98) = lVar9;
      if (lVar9 != 0) {
        lVar17 = plVar8[0xd];
        lVar9 = plVar8[5];
        lVar3 = plVar8[6];
        *(undefined8 *)(param_1 + 0x50) = 0;
        *plVar13 = 0;
        *(undefined8 *)(param_1 + 0x60) = 0;
        *(undefined8 *)(param_1 + 0x58) = 0;
        *(undefined4 *)(param_1 + 0x68) = 0x3f800000;
        plVar15 = (long *)plVar8[2];
        if (plVar15 != plVar8 + 3) {
          lVar18 = 0;
          do {
            lStack_68 = plVar15[5];
            lStack_70 = plVar15[4];
            if (lVar18 == lVar3 - lVar9 >> 3) goto LAB_10aae8da0;
            plVar2 = (long *)(lVar9 + lVar18 * 8);
            func_0x0001092af8bc(plVar2);
            lVar10 = *plVar2;
            if ((*(byte *)(lVar10 + 0xc0) & 1) == 0) goto LAB_10aae8da0;
            FUN_10aad949c(plVar13,lStack_70,lStack_68,&lStack_70,lVar10 + 0x98);
            plVar2 = (long *)plVar15[1];
            plVar16 = plVar15;
            if ((long *)plVar15[1] == (long *)0x0) {
              do {
                plVar15 = (long *)plVar16[2];
                bVar7 = (long *)*plVar15 != plVar16;
                plVar16 = plVar15;
              } while (bVar7);
            }
            else {
              do {
                plVar15 = plVar2;
                plVar2 = (long *)*plVar15;
              } while ((long *)*plVar15 != (long *)0x0);
            }
            lVar18 = lVar18 + 1;
          } while (plVar15 != plVar8 + 3);
          plVar8 = *(long **)(param_1 + 0xa8);
        }
        *(undefined8 *)(param_1 + 0x88) = 0;
        *(undefined8 *)(param_1 + 0x80) = 0;
        *(undefined8 *)(param_1 + 0x78) = 0;
        *(undefined8 *)(param_1 + 0x70) = 0;
        plVar8 = plVar8 + 10;
        *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
        while (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0) {
          plVar15 = plVar13;
          FUN_10aae2bbc(plVar13,plVar8 + 4);
          if (plVar15 == (long *)0x0) {
            FUN_109ffdddc(&UNK_10f639994);
            goto LAB_10aae8da0;
          }
          FUN_10aad9940(param_1 + 0x70,plVar8 + 2,plVar8 + 2,plVar15 + 4);
        }
        FUN_10aad9b98(plVar13);
        plVar8 = *(long **)(param_1 + 0x80);
        if (plVar8 != (long *)0x0) {
          lVar9 = *(long *)(lVar17 + 8);
          do {
            FUN_10aae34d0(lVar9 + 0x68,plVar8 + 2,plVar8 + 2);
            plVar8 = (long *)*plVar8;
          } while (plVar8 != (long *)0x0);
        }
        lVar9 = *(long *)(param_1 + 0xa8);
        FUN_10aad9b98(param_1 + 0x70);
        puVar14 = (undefined8 *)(lVar9 + 0x70);
        (*(code *)*puVar14)(puVar14);
        bVar7 = false;
        goto LAB_10aae8d0c;
      }
    }
  }
  func_0x0001092ba100(lVar12);
  bVar7 = true;
LAB_10aae8d0c:
  plVar8 = *(long **)(param_1 + 0xa0);
  if (plVar8 != (long *)0x0) {
    plVar13 = plVar8 + 1;
    do {
      lVar9 = *plVar13;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *plVar13 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  if (!bVar7) {
    func_0x0001092ba100(lVar12);
  }
  func_0x000109d1a1d0(lVar12);
  __ZdlPv(param_1);
  return;
}



/* Entry: 10aae8ee8; end: 10aae8f9f;  */

void FUN_10aae8ee8(long param_1)

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
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10aae8fa0; end: 10aae924f;  */

void FUN_10aae8fa0(long param_1)

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
  
  if ((*(byte *)(param_1 + 0x150) & 1) == 0) {
    FUN_10aad8e34(param_1 + 0x148,param_1 + 0x48);
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x148);
    plVar5 = (long *)(*(long *)(param_1 + 0x148) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x138) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x150) = 1;
      lVar8 = *(long *)(param_1 + 0x138);
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
  plVar5 = *(long **)(param_1 + 0x138);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x138) + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar5 + 0x12);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10aae918c);
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
  plVar5 = *(long **)(param_1 + 0x148);
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
  (*(code *)**(undefined8 **)(param_1 + 0x100))(param_1 + 0x100);
  (*(code *)**(undefined8 **)(param_1 + 0xc0))((undefined8 *)(param_1 + 0xc0));
  func_0x000109f6f4d4(param_1 + 0x88);
  FUN_10aad9c0c(param_1 + 0x70);
  FUN_10aae3fd0(*(undefined8 *)(param_1 + 0x60));
  if (*(long *)(param_1 + 0x50) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10aae9250; end: 10aae936b;  */

void FUN_10aae9250(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0x150) == '\x01') {
    plVar4 = *(long **)(param_1 + 0x138);
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
    plVar4 = *(long **)(param_1 + 0x148);
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
  (*(code *)**(undefined8 **)(param_1 + 0x100))(param_1 + 0x100);
  (*(code *)**(undefined8 **)(param_1 + 0xc0))((undefined8 *)(param_1 + 0xc0));
  func_0x000109f6f4d4(param_1 + 0x88);
  FUN_10aad9c0c(param_1 + 0x70);
  FUN_10aae3fd0(*(undefined8 *)(param_1 + 0x60));
  if (*(long *)(param_1 + 0x50) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10aae936c; end: 10aae964b;  */

void FUN_10aae936c(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long *plStack_40;
  
  lVar7 = *(long *)(param_1 + 0x98);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x98) + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar7 + 0xc0) & 1) != 0) {
      FUN_10a4f0c8c(param_1 + 0x48,lVar7 + 0x98);
      plVar6 = *(long **)(param_1 + 0x98);
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
      lVar7 = *(long *)(param_1 + 0xa0);
      plStack_40 = (long *)0x0;
      plVar6 = *(long **)(lVar7 + 0x10);
      if (plVar6 != (long *)0x0) {
        __ZNSt3__119__shared_weak_count4lockEv();
        plStack_40 = plVar6;
        if (plVar6 != (long *)0x0) {
          lVar7 = *(long *)(lVar7 + 8);
          if (lVar7 != 0) {
            *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x50);
            *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x48);
            *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x58);
            *(undefined8 *)(param_1 + 0x48) = 0;
            *(undefined8 *)(param_1 + 0x50) = 0;
            *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x68);
            *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x60);
            *(undefined8 *)(param_1 + 0x58) = 0;
            *(undefined8 *)(param_1 + 0x60) = 0;
            *(undefined8 *)(param_1 + 0x68) = 0;
            FUN_10aac513c(lVar7,param_1 + 0x70);
            plVar6 = *(long **)(param_1 + 0x90);
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
            if (*(char *)(param_1 + 0x87) < '\0') {
              __ZdlPv(*(undefined8 *)(param_1 + 0x70));
            }
          }
        }
      }
      if (plStack_40 != (long *)0x0) {
        plVar6 = plStack_40 + 1;
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
          (**(code **)(*plStack_40 + 0x10))(plStack_40);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
        }
      }
      plVar6 = *(long **)(param_1 + 0x68);
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
      if (*(char *)(param_1 + 0x5f) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 0x48));
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
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10aae9630);
  (*pcVar5)();
}



/* Entry: 10aae964c; end: 10aae96bb;  */

void FUN_10aae964c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
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
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10aae96bc; end: 10aae9963;  */

void FUN_10aae96bc(long param_1)

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
  
  if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
    FUN_10aad9cb0(param_1 + 0x70,param_1 + 0x48);
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x70);
    plVar5 = (long *)(*(long *)(param_1 + 0x70) + 8);
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
      lVar8 = *(long *)(param_1 + 0x60);
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
  plVar5 = *(long **)(param_1 + 0x60);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar5 + 0x12);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10aae98a0);
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
  plVar5 = *(long **)(param_1 + 0x70);
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
  if (*(long *)(param_1 + 0x58) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
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



/* Entry: 10aae9964; end: 10aae9a7b;  */

void FUN_10aae9964(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0x78) == '\x01') {
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
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
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



/* Entry: 10aae9a7c; end: 10aae9aeb;  */

undefined1  [16] FUN_10aae9a7c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe;
  auVar1._0_8_ = &UNK_10f68f2ef;
  return auVar1;
}



/* Entry: 10aae9aec; end: 10aae9c2f;  */

void FUN_10aae9aec(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f68e3e8;
  puStack_70 = (undefined *)0x0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10aae9c30(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68e3e9;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000019;
  puStack_70 = &UNK_10f68e3e8;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  puStack_40 = (undefined *)0x0;
  uStack_38 = 0;
  FUN_10aafd450();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68e3f2;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000019;
  puStack_70 = &UNK_10f68e3e8;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000149;
  puStack_40 = (undefined *)0x0;
  uStack_38 = 0;
  FUN_10aafd5d8(param_1,&puStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68e3fc;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x4000000064;
  puStack_70 = &UNK_10f68e3e8;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  puStack_40 = &UNK_10f68e3e8;
  uStack_38 = 0;
  FUN_10aafd754(param_1,&puStack_98);
  FUN_10aafdb2c(param_1);
  return;
}



/* Entry: 10aae9c30; end: 10aae9d07;  */

/* WARNING: Removing unreachable block (ram,0x00010aae9cc8) */

undefined1  [16] FUN_10aae9c30(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f68f2ef,0xe);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10aafd354(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10aae9d08; end: 10aae9d8f;  */

undefined8 * FUN_10aae9d08(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_1;
  uVar6 = param_2;
  func_0x00010a0fda30();
  FUN_10aa7093c(param_1,param_2,puVar4,uVar6);
  *param_1 = &PTR_DAT_110c46238;
  param_1[2] = &PTR_DAT_110c462d8;
  param_1[7] = &PTR_DAT_110c46330;
  lVar5 = param_3[1];
  uVar6 = *param_3;
  param_1[0x1d] = param_3[1];
  param_1[0x1c] = uVar6;
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
  return param_1;
}



/* Entry: 10aae9d90; end: 10aae9ee3;  */

undefined8 * FUN_10aae9d90(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c46238;
  param_1[2] = &PTR_DAT_110c462d8;
  param_1[7] = &PTR_DAT_110c46330;
  FUN_10a3786c8(param_1 + 0x1c);
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



/* Entry: 10aae9ee4; end: 10aae9ef3;  */

void FUN_10aae9ee4(undefined8 *param_1)

{
  param_1[-2] = &PTR_DAT_110c46238;
  *param_1 = &PTR_DAT_110c462d8;
  param_1[5] = &PTR_DAT_110c46330;
  FUN_10a3786c8(param_1 + 0x1a);
  func_0x00010aa71c88(param_1 + -2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aae9ef4; end: 10aaea133;  */

void FUN_10aae9ef4(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  func_0x00010aa70acc();
  (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c44818);
  FUN_10a7f02bc(auStack_30,param_2,0);
  FUN_10a7f03b4(param_1 + 0xe0,auStack_30);
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
  (**(code **)(*param_2 + 0x220))(param_2);
  return;
}



/* Entry: 10aaea134; end: 10aaea1db;  */

void FUN_10aaea134(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined *puStack_38;
  undefined8 uStack_30;
  char cStack_21;
  
  puStack_38 = &UNK_10f68e404;
  uStack_30 = 0x23;
  if (*(long *)(param_2 + 0xe0) == 0) {
    FUN_10a0edfc4(&puStack_38);
  }
  else {
    FUN_10a08d2e0(&puStack_38,*(long *)(param_2 + 0xe0) + 0xa8);
    ppuVar2 = &puStack_38;
    FUN_10ad015f0(ppuVar2,0x4000);
    if ((int)ppuVar2 == 0) {
      FUN_10ad01b0c(param_1,&puStack_38);
      if (cStack_21 < '\0') {
        __ZdlPv(puStack_38);
      }
      return;
    }
  }
  FUN_10a00946c(&UNK_10f68e428);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10aaea1c0);
  (*pcVar1)();
}



/* Entry: 10aaea1dc; end: 10aaea2c7;  */

void FUN_10aaea1dc(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined **ppuVar2;
  long lStack_50;
  long lStack_48;
  undefined *puStack_38;
  undefined8 uStack_30;
  char cStack_21;
  
  puStack_38 = &UNK_10f68e448;
  uStack_30 = 0x24;
  if (*(long *)(param_2 + 0xe0) == 0) {
    FUN_10a0edfc4(&puStack_38);
  }
  else {
    FUN_10a08d2e0(&puStack_38,*(long *)(param_2 + 0xe0) + 0xa8);
    ppuVar2 = &puStack_38;
    FUN_10ad015f0(ppuVar2,0x4000);
    if ((int)ppuVar2 == 0) {
      FUN_10ad00a7c(&lStack_50,&puStack_38);
      FUN_10a12c178(param_1,*(undefined8 *)(*(long *)(param_2 + 0x50) + 0x870),&lStack_50);
      if (lStack_50 != 0) {
        lStack_48 = lStack_50;
        __ZdlPv();
      }
      if (cStack_21 < '\0') {
        __ZdlPv(puStack_38);
      }
      return;
    }
  }
  FUN_10a00946c(&UNK_10f68e46d);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10aaea290);
  (*pcVar1)();
}



/* Entry: 10aaea2c8; end: 10aaea3bb;  */

undefined1 * FUN_10aaea2c8(undefined1 *param_1,undefined8 param_2)

{
  undefined8 auStack_60 [2];
  char cStack_49;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  *param_1 = 0;
  func_0x000107c2b054(auStack_48,&UNK_10f68e3e8);
  func_0x000107c2b054(auStack_60,&UNK_10f68e3e8);
  FUN_10a107e2c(param_1 + 8,auStack_48,auStack_60,0);
  if (cStack_49 < '\0') {
    __ZdlPv(auStack_60[0]);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  FUN_10a1e4260(param_1,param_2);
  return param_1;
}



/* Entry: 10aaea3bc; end: 10aaea413;  */

undefined1  [16] FUN_10aaea3bc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xb;
  auVar1._0_8_ = &UNK_10f68f307;
  return auVar1;
}



/* Entry: 10aaea414; end: 10aaea4b3;  */

void FUN_10aaea414(undefined8 param_1)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_88 = (undefined *)0x0;
  uStack_80 = 0xffffffff00000002;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x124;
  uStack_48 = 0x13c;
  FUN_10aaea4b4(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f68e48e;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10aafdce4();
  FUN_10aafde98(param_1);
  return;
}



/* Entry: 10aaea4b4; end: 10aaea58b;  */

/* WARNING: Removing unreachable block (ram,0x00010aaea54c) */

undefined1  [16] FUN_10aaea4b4(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f68f307,0xb);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10aafdbe8(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10aaea58c; end: 10aaea663;  */

void FUN_10aaea58c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5,float *param_6,undefined4 param_7)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int *piVar6;
  
  FUN_10a32e56c(param_1,param_3,param_4);
  *param_1 = &PTR_DAT_110c44878;
  *(undefined4 *)((long)param_1 + 0x84) = param_7;
  *(undefined4 *)(param_1 + 0x11) = 0;
  lVar5 = *param_5;
  lVar2 = param_5[1];
  param_1[0x12] = param_2;
  param_1[0x13] = lVar5;
  param_1[0x14] = lVar2;
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar5 = param_1[0x13];
  }
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  if (lVar5 != 0) {
    param_1[3] = (long)*param_6;
    piVar6 = *(int **)(lVar5 + 0x18);
    param_1[5] = (long)(*param_6 + (float)(piVar6[2] - *piVar6));
    param_1[4] = (long)param_6[1];
    param_1[6] = (long)(param_6[1] + (float)(piVar6[3] - piVar6[1]));
  }
  return;
}



/* Entry: 10aaea664; end: 10aaea8f3;  */

void FUN_10aaea664(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long lStack_a8;
  long *plStack_a0;
  undefined1 uStack_91;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((*(long *)(param_2 + 0x98) != 0) && (plVar10 = (long *)(param_2 + 0xa8), *plVar10 == 0)) {
    FUN_10a77d6e0(&lStack_70);
    FUN_10a16b1ec(plVar10,&lStack_70);
    plVar2 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar1 = plStack_68 + 1;
      do {
        lVar9 = *plVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar9 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    if (*(int *)(*plVar10 + 0x24) == 7) {
      lStack_70 = *(long *)(*plVar10 + 0x10);
      puStack_90 = (undefined8 *)CONCAT44(puStack_90._4_4_,1);
      FUN_10a326bf4(&lStack_a8,&uStack_91,&lStack_70,&puStack_90);
      uStack_58 = *(undefined8 *)(lStack_a8 + 0x28);
      plStack_68 = (long *)(long)*(int *)(lStack_a8 + 0x10);
      lStack_70 = (long)*(int *)(lStack_a8 + 0x14);
      uStack_60 = *(undefined8 *)(lStack_a8 + 0x18);
      lVar9 = *plVar10;
      uStack_78 = *(undefined8 *)(lVar9 + 0x28);
      puStack_88 = (undefined8 *)(long)*(int *)(lVar9 + 0x10);
      puStack_90 = (undefined8 *)(long)*(int *)(lVar9 + 0x14);
      uStack_80 = *(undefined8 *)(lVar9 + 0x18);
      FUN_10a19d1cc(&lStack_70,&puStack_90);
      FUN_10a31a260(plVar10,&lStack_a8);
      if (plStack_a0 != (long *)0x0) {
        plVar10 = plStack_a0 + 1;
        do {
          lVar9 = *plVar10;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar7) {
            *plVar10 = lVar9 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a0);
        }
      }
    }
  }
  lVar9 = *(long *)(param_2 + 0xa8);
  plVar10 = *(long **)(param_2 + 0xb0);
  if (plVar10 != (long *)0x0) {
    plVar2 = plVar10 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = *plVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (lVar9 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    uVar4 = *(undefined4 *)(lVar9 + 0x10);
    uVar5 = *(undefined4 *)(lVar9 + 0x14);
    puVar8 = (undefined8 *)0xe0;
    __Znwm();
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = &PTR_FUN_110c45c70;
    puVar3 = puVar8 + 3;
    if (plVar10 != (long *)0x0) {
      plVar2 = plVar10 + 1;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *plVar2 = *plVar2 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    lStack_70 = lVar9;
    plStack_68 = plVar10;
    FUN_10a557fc0(puVar3,&lStack_70,uVar4,uVar5);
    if (plVar10 != (long *)0x0) {
      plVar2 = plVar10 + 1;
      do {
        lVar9 = *plVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *plVar2 = lVar9 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    puStack_90 = puVar3;
    puStack_88 = puVar8;
    func_0x00010a568b1c(&puStack_90,puVar8 + 0x16,puVar3);
    param_1[1] = (long)puStack_88;
    *param_1 = (long)puStack_90;
  }
  if (plVar10 != (long *)0x0) {
    plVar2 = plVar10 + 1;
    do {
      lVar9 = *plVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = lVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  return;
}



/* Entry: 10aaea8f4; end: 10aaeaa13;  */

/* WARNING: Removing unreachable block (ram,0x00010aaeabc8) */
/* WARNING: Removing unreachable block (ram,0x00010aaeabcc) */
/* WARNING: Removing unreachable block (ram,0x00010aaeabd4) */
/* WARNING: Removing unreachable block (ram,0x00010aaeabdc) */
/* WARNING: Removing unreachable block (ram,0x00010aaeabe0) */

undefined1  [16] FUN_10aaea8f4(undefined8 *param_1,long param_2,undefined **param_3)

{
  undefined *****pppppuVar1;
  long *plVar2;
  undefined ***pppuVar3;
  undefined8 **ppuVar4;
  char cVar5;
  bool bVar6;
  undefined *****pppppuVar7;
  undefined *****pppppuVar8;
  long *plVar9;
  long *plVar10;
  undefined ***pppuVar11;
  undefined8 **ppuVar12;
  undefined8 **ppuVar13;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined ****ppppuVar14;
  long lVar15;
  undefined **ppuVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uStack_1a0;
  undefined8 **ppuStack_198;
  undefined1 auStack_190 [8];
  undefined8 *apuStack_188 [8];
  long lStack_148;
  undefined ***pppuStack_140;
  undefined ***pppuStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  undefined ***pppuStack_108;
  undefined *puStack_100;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_b8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 uStack_69;
  undefined *puStack_68;
  undefined ****ppppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_2 + 0x98) == 0) {
    uStack_30 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_58 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = &UNK_1053a6a3c;
    param_1[3] = &PTR_DAT_110ae9180;
    puStack_68 = &UNK_1053a6a3c;
    ppppuStack_60 = (undefined ****)&PTR_DAT_110ae9180;
    FUN_10a044790(&puStack_68);
    pppppuVar8 = &ppppuStack_60;
    (*(code *)*ppppuStack_60)();
  }
  else {
    FUN_10aafdf94(&puStack_68,&uStack_69,param_2 + 0x90);
    pppppuVar8 = (undefined *****)(param_2 + 0x90);
    param_3 = &puStack_68;
    FUN_10aaeaa14(param_1);
    pppppuVar7 = (undefined *****)ppppuStack_60;
    if ((undefined *****)ppppuStack_60 != (undefined *****)0x0) {
      pppppuVar1 = (undefined *****)(ppppuStack_60 + 1);
      do {
        ppppuVar14 = *pppppuVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pppppuVar1,0x10);
        if (bVar6) {
          *pppppuVar1 = (undefined ****)((long)ppppuVar14 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (ppppuVar14 == (undefined ****)0x0) {
        (*(code *)(*ppppuStack_60)[2])(ppppuStack_60);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppppuVar8 = pppppuVar7;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    auVar19._8_8_ = param_3;
    auVar19._0_8_ = pppppuVar8;
    return auVar19;
  }
  ___stack_chk_fail();
  func_0x00010a061678(&puStack_68);
  __Unwind_Resume();
  pcStack_78 = FUN_10aaeaa14;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar14 = *pppppuVar8;
  plVar9 = (long *)0x2c0;
  ppuVar16 = param_3;
  puStack_80 = &stack0xfffffffffffffff0;
  __Znwm();
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&PTR_DAT_110b9fda0;
  plVar2 = plVar9 + 3;
  plVar18 = (long *)param_3[1];
  ppuStack_f8 = (undefined **)param_3[1];
  puStack_100 = *param_3;
  if (plVar18 != (long *)0x0) {
    plVar10 = plVar18 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = *plVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar10 = plVar9;
  func_0x00010a0fda30();
  FUN_10ab6a888(plVar2,ppppuVar14,&puStack_100,plVar10,ppuVar16);
  if (plVar18 != (long *)0x0) {
    plVar10 = plVar18 + 1;
    do {
      lVar15 = *plVar10;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = lVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
    }
  }
  plVar18 = plVar9 + 8;
  plStack_120 = plVar2;
  plStack_118 = plVar9;
  FUN_10a05b2a8(&plStack_120,plVar18,plVar2);
  FUN_10a05b04c(&uStack_110,&plStack_120);
  plVar2 = plStack_118;
  if (plStack_118 != (long *)0x0) {
    plVar9 = plStack_118 + 1;
    do {
      lVar15 = *plVar9;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = lVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_118 + 0x10))(plStack_118);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  if (pppuStack_108 == (undefined ***)0x0) {
    *extraout_x8 = uStack_110;
    extraout_x8[1] = 0;
  }
  else {
    pppuVar11 = pppuStack_108 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pppuVar11,0x10);
      if (bVar6) {
        *pppuVar11 = (undefined **)((long)*pppuVar11 + 1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    *extraout_x8 = uStack_110;
    extraout_x8[1] = pppuStack_108;
    if (pppuStack_108 != (undefined ***)0x0) {
      pppuVar11 = pppuStack_108 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pppuVar11,0x10);
        if (bVar6) {
          *pppuVar11 = (undefined **)((long)*pppuVar11 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  extraout_x8[2] = FUN_10aafe048;
  extraout_x8[3] = &PTR_DAT_110c45cb0;
  extraout_x8[4] = uStack_110;
  extraout_x8[5] = pppuStack_108;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puStack_100 = &UNK_1053a6a3c;
  ppuStack_f8 = &PTR_DAT_110ae9180;
  FUN_10a044790(&puStack_100);
  pppuVar11 = &ppuStack_f8;
  (*(code *)*ppuStack_f8)();
  if (pppuStack_108 != (undefined ***)0x0) {
    pppuVar3 = pppuStack_108 + 1;
    do {
      ppuVar16 = *pppuVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pppuVar3,0x10);
      if (bVar6) {
        *pppuVar3 = (undefined **)((long)ppuVar16 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (ppuVar16 == (undefined **)0x0) {
      (*(code *)(*pppuStack_108)[2])(pppuStack_108);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar11 = pppuStack_108;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    auVar20._8_8_ = plVar18;
    auVar20._0_8_ = pppuVar11;
    return auVar20;
  }
  ___stack_chk_fail();
  func_0x00010a05248c(&plStack_120);
  __Unwind_Resume(pppuVar11);
  pcStack_128 = FUN_10aaeacb8;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_140 = &ppuStack_f8;
  pppuStack_138 = pppuVar11;
  ppuStack_130 = &puStack_80;
  FUN_10aaea8f4(&uStack_1a0);
  extraout_x8_00[1] = ppuStack_198;
  *extraout_x8_00 = uStack_1a0;
  uStack_1a0 = 0;
  ppuStack_198 = (undefined8 **)0x0;
  FUN_10a044790(auStack_190);
  ppuVar12 = apuStack_188;
  (*(code *)*apuStack_188[0])(ppuVar12);
  ppuVar13 = ppuStack_198;
  if (ppuStack_198 != (undefined8 **)0x0) {
    ppuVar4 = ppuStack_198 + 1;
    do {
      puVar17 = *ppuVar4;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppuVar4,0x10);
      if (bVar6) {
        *ppuVar4 = (undefined8 *)((long)puVar17 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (puVar17 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_198)[2])(ppuStack_198);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar13);
      ppuVar12 = ppuVar13;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    auVar21._8_8_ = plVar18;
    auVar21._0_8_ = ppuVar12;
    return auVar21;
  }
  ___stack_chk_fail();
  auVar22._8_8_ = 10;
  auVar22._0_8_ = &UNK_10f68f318;
  return auVar22;
}



/* Entry: 10aaeaa14; end: 10aaeacb7;  */

/* WARNING: Removing unreachable block (ram,0x00010aaeabc8) */
/* WARNING: Removing unreachable block (ram,0x00010aaeabcc) */
/* WARNING: Removing unreachable block (ram,0x00010aaeabd4) */
/* WARNING: Removing unreachable block (ram,0x00010aaeabdc) */
/* WARNING: Removing unreachable block (ram,0x00010aaeabe0) */

undefined1  [16] FUN_10aaeaa14(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined ***pppuVar2;
  undefined8 **ppuVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  undefined ***pppuVar8;
  undefined8 **ppuVar9;
  undefined8 **ppuVar10;
  undefined8 *extraout_x8;
  long lVar11;
  undefined **ppuVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uStack_130;
  undefined8 **ppuStack_128;
  undefined1 auStack_120 [8];
  undefined8 *apuStack_118 [8];
  long lStack_d8;
  undefined ***pppuStack_d0;
  undefined ***pppuStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined ***pppuStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar15 = *param_2;
  plVar6 = (long *)0x2c0;
  puVar13 = param_3;
  __Znwm();
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_DAT_110b9fda0;
  plVar1 = plVar6 + 3;
  plVar14 = (long *)param_3[1];
  ppuStack_88 = (undefined **)param_3[1];
  puStack_90 = (undefined *)*param_3;
  if (plVar14 != (long *)0x0) {
    plVar7 = plVar14 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = *plVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar7 = plVar6;
  func_0x00010a0fda30();
  FUN_10ab6a888(plVar1,uVar15,&puStack_90,plVar7,puVar13);
  if (plVar14 != (long *)0x0) {
    plVar7 = plVar14 + 1;
    do {
      lVar11 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
    }
  }
  plVar14 = plVar6 + 8;
  plStack_b0 = plVar1;
  plStack_a8 = plVar6;
  FUN_10a05b2a8(&plStack_b0,plVar14,plVar1);
  FUN_10a05b04c(&uStack_a0,&plStack_b0);
  plVar1 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar6 = plStack_a8 + 1;
    do {
      lVar11 = *plVar6;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if (pppuStack_98 == (undefined ***)0x0) {
    *param_1 = uStack_a0;
    param_1[1] = 0;
  }
  else {
    pppuVar8 = pppuStack_98 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
      if (bVar5) {
        *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    *param_1 = uStack_a0;
    param_1[1] = pppuStack_98;
    if (pppuStack_98 != (undefined ***)0x0) {
      pppuVar8 = pppuStack_98 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
        if (bVar5) {
          *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  param_1[2] = FUN_10aafe048;
  param_1[3] = &PTR_DAT_110c45cb0;
  param_1[4] = uStack_a0;
  param_1[5] = pppuStack_98;
  uStack_78 = 0;
  uStack_80 = 0;
  puStack_90 = &UNK_1053a6a3c;
  ppuStack_88 = &PTR_DAT_110ae9180;
  FUN_10a044790(&puStack_90);
  pppuVar8 = &ppuStack_88;
  (*(code *)*ppuStack_88)();
  if (pppuStack_98 != (undefined ***)0x0) {
    pppuVar2 = pppuStack_98 + 1;
    do {
      ppuVar12 = *pppuVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
      if (bVar5) {
        *pppuVar2 = (undefined **)((long)ppuVar12 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (ppuVar12 == (undefined **)0x0) {
      (*(code *)(*pppuStack_98)[2])(pppuStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar8 = pppuStack_98;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar16._8_8_ = plVar14;
    auVar16._0_8_ = pppuVar8;
    return auVar16;
  }
  ___stack_chk_fail();
  func_0x00010a05248c(&plStack_b0);
  __Unwind_Resume(pppuVar8);
  pcStack_b8 = FUN_10aaeacb8;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_d0 = &ppuStack_88;
  pppuStack_c8 = pppuVar8;
  puStack_c0 = &stack0xfffffffffffffff0;
  FUN_10aaea8f4(&uStack_130);
  extraout_x8[1] = ppuStack_128;
  *extraout_x8 = uStack_130;
  uStack_130 = 0;
  ppuStack_128 = (undefined8 **)0x0;
  FUN_10a044790(auStack_120);
  ppuVar9 = apuStack_118;
  (*(code *)*apuStack_118[0])(ppuVar9);
  ppuVar10 = ppuStack_128;
  if (ppuStack_128 != (undefined8 **)0x0) {
    ppuVar3 = ppuStack_128 + 1;
    do {
      puVar13 = *ppuVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar3,0x10);
      if (bVar5) {
        *ppuVar3 = (undefined8 *)((long)puVar13 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (puVar13 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_128)[2])(ppuStack_128);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar10);
      ppuVar9 = ppuVar10;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    auVar17._8_8_ = plVar14;
    auVar17._0_8_ = ppuVar9;
    return auVar17;
  }
  ___stack_chk_fail();
  auVar18._8_8_ = 10;
  auVar18._0_8_ = &UNK_10f68f318;
  return auVar18;
}



/* Entry: 10aaeacb8; end: 10aaead6f;  */

undefined1  [16] FUN_10aaeacb8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 **ppuVar1;
  char cVar2;
  bool bVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uStack_80;
  undefined8 **ppuStack_78;
  undefined1 auStack_70 [8];
  undefined8 *apuStack_68 [8];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10aaea8f4(&uStack_80);
  param_1[1] = ppuStack_78;
  *param_1 = uStack_80;
  uStack_80 = 0;
  ppuStack_78 = (undefined8 **)0x0;
  FUN_10a044790(auStack_70);
  ppuVar4 = apuStack_68;
  (*(code *)*apuStack_68[0])(ppuVar4);
  ppuVar5 = ppuStack_78;
  if (ppuStack_78 != (undefined8 **)0x0) {
    ppuVar1 = ppuStack_78 + 1;
    do {
      puVar6 = *ppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar3) {
        *ppuVar1 = (undefined8 *)((long)puVar6 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar6 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_78)[2])(ppuStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar5);
      ppuVar4 = ppuVar5;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    auVar7._8_8_ = param_3;
    auVar7._0_8_ = ppuVar4;
    return auVar7;
  }
  ___stack_chk_fail();
  auVar8._8_8_ = 10;
  auVar8._0_8_ = &UNK_10f68f318;
  return auVar8;
}



/* Entry: 10aaead70; end: 10aaeadfb;  */

undefined1  [16] FUN_10aaead70(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 10;
  auVar1._0_8_ = &UNK_10f68f318;
  return auVar1;
}



/* Entry: 10aaeadfc; end: 10aaeb6eb;  */

void FUN_10aaeadfc(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f68f318,10);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c461d8;
  pppuVar2 = (undefined8 ***)&UNK_10f68e3e8;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000019;
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
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c461d8;
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
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aaeb6cc;
    FUN_10a054dac(param_1,&UNK_10f68e49c,FUN_10aafe080,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aaeb6cc;
    FUN_10a054dac(param_1,&UNK_10f68e4a7,FUN_10aafe1cc,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aaeb6cc;
    FUN_10a054dac(param_1,&UNK_10f68e4b2,FUN_10aafe334,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aaeb6cc;
    FUN_10a054dac(param_1,&UNK_10f68e4c5,FUN_10aafe420,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aaeb6cc;
    FUN_10a054dac(param_1,&UNK_10f68e4d8,FUN_10aafe598,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aaeb6cc;
    FUN_10a054dac(param_1,&UNK_10f68e4f0,FUN_10aafe684,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aaeb6cc;
    FUN_10a054dac(param_1,&UNK_10f68e508,FUN_10aafe73c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aaeb6cc;
    FUN_10a054dac(param_1,&UNK_10f68e51d,FUN_10aafe828,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aaeb6cc;
    FUN_10a054dac(param_1,&UNK_10f68e532,FUN_10aafe8e0,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aaeb6cc;
    FUN_10a054dac(param_1,&UNK_10f68e54c,FUN_10aafe9cc,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aaeb6cc;
    FUN_10a054dac(param_1,&UNK_10f68e566,FUN_10aafea84,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aaeb6cc;
    FUN_10a054dac(param_1,&UNK_10f68e576,FUN_10aafeb70,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aaeb6cc;
    FUN_10a054dac(param_1,&UNK_10f68e586,FUN_10aafece8,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aaeb6cc;
    FUN_10a054dac(param_1,&UNK_10f68e598,FUN_10aafedd4,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68e5aa,FUN_10aafee8c,FUN_10aafef48);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68e5b4,FUN_10aaff058,FUN_10aaff110);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68e5cb,FUN_10aaff1e0,FUN_10aaff298);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"enabled",FUN_10aaff36c,FUN_10aaff424);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68e5d9,FUN_10aaff4f4,FUN_10aaff5b0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68e5e9,FUN_10aaff6a4,FUN_10aaff760);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68e5fe,FUN_10aaff830,FUN_10aaff8ec);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68e610,FUN_10aaff9bc,FUN_10aaffa78);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68e627,FUN_10aaffb48,FUN_10aaffc04);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68e634,FUN_10aaffcf8,FUN_10aaffdb4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f68e643,FUN_10aaffe84,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68e65c,FUN_10aafff50,FUN_10ab00008);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f68e673,FUN_10ab000d0,0);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f68f318,10);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10aaeb6cc:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10aaeb6d0);
  (*pcVar6)();
}



/* Entry: 10aaeb6ec; end: 10aaebadb;  */

void FUN_10aaeb6ec(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68e688;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_4c._4_4_,
                uStack_78 & 0xffffffff,uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f68e694;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10aaebadc(param_1,&puStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f461a49;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10aaebadc();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68e69d;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10aaebadc();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68e6a9;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10aaebadc();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68e6bd;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10aaebadc();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68e6ce;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10aaebadc();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68e6e7;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10aaebadc();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68e6f3;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10aaebadc();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68e707;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10aaebadc();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68e718;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10aaebadc();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68e731;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10aaebadc();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68e73f;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10aaebadc();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68e755;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10aaebadc();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68e763;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10aaebadc();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68e779;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10aaebadc();
  FUN_10a003ff4();
  return;
}



/* Entry: 10aaebadc; end: 10aaebb83;  */

undefined8 * FUN_10aaebadc(undefined8 *param_1,undefined8 *param_2,byte param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10aaebb84);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10aaebb84; end: 10aaebd43;  */

void FUN_10aaebb84(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68e78e;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_4c._4_4_,
                uStack_78 & 0xffffffff,uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f2ee02c;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10aaebd44(param_1,&puStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f517dee;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10aaebd44();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68e7a2;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10aaebd44();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68e7b2;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10aaebd44();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f68e7b6;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10aaebd44();
  FUN_10a003ff4();
  return;
}



/* Entry: 10aaebd44; end: 10aaebdeb;  */

undefined8 * FUN_10aaebd44(undefined8 *param_1,undefined8 *param_2,byte param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10aaebdec);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10aaebdec; end: 10aaebe4b;  */

undefined * FUN_10aaebdec(uint param_1)

{
  undefined **ppuVar1;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  ppuVar1 = &puStack_20;
  puStack_20 = &UNK_10f68e7ba;
  uStack_18 = 0x49;
  if (param_1 != 0xf) {
    puStack_20 = &UNK_10f68e804;
    uStack_18 = 0x1d;
    if (param_1 < 0x11) {
      return &UNK_10e4f4698 + (ulong)param_1 * 0x30;
    }
  }
  FUN_10a0edfc4();
  *(undefined ***)((long)ppuVar1 + 0x10) = &PTR_DAT_110b17898;
  func_0x00010a004dac((undefined1 *)((long)ppuVar1 + 0x18));
  return (undefined *)ppuVar1;
}



/* Entry: 10aaebe4c; end: 10aaebe7f;  */

long FUN_10aaebe4c(long param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x18);
  return param_1;
}



/* Entry: 10aaebe80; end: 10aaebe8f;  */

undefined8 * FUN_10aaebe80(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = &PTR_DAT_110b17898;
  plVar5 = (long *)param_1[2];
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
  return param_1 + 1;
}



/* Entry: 10aaebe90; end: 10aaebef3;  */

void FUN_10aaebe90(long param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10aaebef4; end: 10aaed7f7;  */

/* WARNING: Removing unreachable block (ram,0x00010aaec29c) */
/* WARNING: Removing unreachable block (ram,0x00010aaec5e0) */

void FUN_10aaebef4(undefined8 *param_1,long param_2)

{
  char *pcVar1;
  byte bVar2;
  undefined8 *****pppppuVar3;
  bool bVar4;
  undefined8 ****ppppuVar5;
  undefined8 *****pppppuVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  undefined8 *****pppppuVar9;
  undefined8 *****pppppuVar10;
  undefined8 *****pppppuVar11;
  char *pcVar12;
  long lVar13;
  undefined8 ***pppuVar14;
  undefined8 *puStack_658;
  undefined8 uStack_650;
  long lStack_648;
  undefined8 *puStack_640;
  undefined8 *puStack_638;
  undefined8 *puStack_630;
  undefined8 *puStack_620;
  undefined8 *puStack_618;
  undefined8 *puStack_610;
  undefined8 *puStack_600;
  undefined8 *puStack_5f8;
  undefined8 *puStack_5f0;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  long lStack_5d0;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  long lStack_5b0;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  long lStack_590;
  undefined8 uStack_580;
  undefined8 uStack_578;
  long lStack_570;
  undefined8 uStack_560;
  undefined8 uStack_558;
  long lStack_550;
  undefined8 uStack_540;
  undefined8 uStack_538;
  long lStack_530;
  undefined8 uStack_520;
  undefined8 uStack_518;
  long lStack_510;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  long lStack_4f0;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  long lStack_4d0;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  long lStack_4b0;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  long lStack_490;
  undefined8 ****ppppuStack_480;
  ulong uStack_478;
  undefined8 uStack_470;
  undefined8 ****ppppuStack_460;
  undefined8 ***pppuStack_458;
  undefined8 uStack_450;
  undefined8 ****ppppuStack_440;
  undefined8 ***pppuStack_438;
  undefined8 uStack_430;
  undefined8 ***pppuStack_420;
  undefined8 ***pppuStack_418;
  undefined8 uStack_410;
  undefined8 ****ppppuStack_400;
  undefined8 **ppuStack_3f8;
  undefined8 **ppuStack_3f0;
  undefined8 ****ppppuStack_3e0;
  undefined8 ***pppuStack_3d8;
  undefined8 ***pppuStack_3d0;
  undefined8 ****ppppuStack_3c0;
  undefined8 ***pppuStack_3b8;
  undefined8 ***pppuStack_3b0;
  undefined8 ****ppppuStack_3a0;
  undefined8 ***pppuStack_398;
  undefined8 ***pppuStack_390;
  undefined8 ****ppppuStack_380;
  undefined8 ***pppuStack_378;
  undefined8 ***pppuStack_370;
  undefined8 ****ppppuStack_360;
  undefined8 ***pppuStack_358;
  undefined8 ***pppuStack_350;
  undefined8 ****ppppuStack_340;
  undefined8 ***pppuStack_338;
  undefined8 ***pppuStack_330;
  undefined8 ****ppppuStack_320;
  undefined8 ***pppuStack_318;
  undefined8 ***pppuStack_310;
  undefined8 ****ppppuStack_300;
  ulong uStack_2f8;
  byte bStack_2e9;
  undefined8 ****ppppuStack_2e8;
  undefined8 ****ppppuStack_2e0;
  long lStack_2d8;
  undefined8 ****ppppuStack_2d0;
  undefined8 ****ppppuStack_2c8;
  long lStack_2c0;
  undefined8 ****ppppuStack_2b8;
  undefined8 ****ppppuStack_2b0;
  long lStack_2a8;
  undefined8 ****ppppuStack_2a0;
  undefined8 ***apppuStack_298 [2];
  char acStack_281 [105];
  undefined8 auStack_218 [2];
  char acStack_201 [9];
  undefined1 auStack_1f8 [24];
  undefined1 uStack_1e0;
  undefined1 auStack_1d8 [24];
  undefined1 uStack_1c0;
  undefined1 auStack_1b8 [24];
  undefined1 uStack_1a0;
  undefined1 auStack_198 [24];
  undefined1 uStack_180;
  undefined1 auStack_178 [24];
  undefined1 uStack_160;
  undefined1 auStack_158 [24];
  undefined1 uStack_140;
  undefined1 auStack_138 [24];
  undefined1 uStack_120;
  undefined1 auStack_118 [24];
  undefined1 uStack_100;
  undefined1 auStack_f8 [24];
  undefined1 uStack_e0;
  undefined1 auStack_d8 [24];
  undefined1 uStack_c0;
  undefined1 auStack_b8 [24];
  undefined1 uStack_a0;
  undefined8 auStack_98 [2];
  char acStack_81 [9];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuStack_2a0 = (undefined8 ****)((ulong)ppppuStack_2a0 & 0xffffffffffffff00);
  func_0x000107c2b054(apppuStack_298,&UNK_10f68e822);
  acStack_281[1] = 1;
  func_0x000107c2b054(acStack_281 + 9,&UNK_10f68e829);
  acStack_281[0x21] = 2;
  func_0x000107c2b054(acStack_281 + 0x29,&UNK_10f68e83b);
  acStack_281[0x41] = 3;
  func_0x000107c2b054(acStack_281 + 0x49,&UNK_10f68e848);
  acStack_281[0x61] = 4;
  func_0x000107c2b054(auStack_218,&UNK_10f68e84f);
  acStack_201[1] = 5;
  func_0x000107c2b054(auStack_1f8,&UNK_10f68e863);
  uStack_1e0 = 6;
  func_0x000107c2b054(auStack_1d8,"Disabled");
  uStack_1c0 = 7;
  func_0x000107c2b054(auStack_1b8,&DAT_10f2ee02c);
  uStack_1a0 = 8;
  func_0x000107c2b054(auStack_198,&UNK_10f68e876);
  uStack_180 = 9;
  func_0x000107c2b054(auStack_178,&UNK_10f68e881);
  uStack_160 = 10;
  func_0x000107c2b054(auStack_158,&DAT_10f517df7);
  uStack_140 = 0xb;
  func_0x000107c2b054(auStack_138,&UNK_10f68e7b2);
  uStack_120 = 0xc;
  func_0x000107c2b054(auStack_118,&DAT_10f68e7b6);
  uStack_100 = 0xd;
  func_0x000107c2b054(auStack_f8,&DAT_10f68e890);
  uStack_e0 = 0xe;
  func_0x000107c2b054(auStack_d8,&UNK_10f68e899);
  uStack_c0 = 0xf;
  func_0x000107c2b054(auStack_b8,&DAT_10f68e8b6);
  uStack_a0 = 0x10;
  func_0x000107c2b054(auStack_98,&UNK_10f68e8bf);
  lVar13 = 0;
  lStack_2a8 = 0;
  ppppuStack_2b0 = (undefined8 *****)0x0;
  ppppuStack_2b8 = &ppppuStack_2b0;
  do {
    bVar2 = *(byte *)((long)&ppppuStack_2a0 + lVar13);
    pppppuVar10 = &ppppuStack_2b0;
    pppppuVar6 = &ppppuStack_2b0;
    pppppuVar11 = &ppppuStack_2b0;
    if ((undefined8 *****)ppppuStack_2b8 == &ppppuStack_2b0) {
LAB_10aaec1e4:
      pppppuVar9 = &ppppuStack_2b8;
      if ((undefined8 *****)ppppuStack_2b0 != (undefined8 *****)0x0) {
        pppppuVar6 = pppppuVar10 + 1;
        pppppuVar9 = pppppuVar10;
        pppppuVar11 = pppppuVar10;
      }
      if (pppppuVar9[1] == (undefined8 ****)0x0) goto LAB_10aaec200;
    }
    else {
      pppppuVar9 = &ppppuStack_2b0;
      pppppuVar3 = (undefined8 *****)ppppuStack_2b0;
      if ((undefined8 *****)ppppuStack_2b0 == (undefined8 *****)0x0) {
        do {
          pppppuVar10 = (undefined8 *****)pppppuVar9[2];
          bVar4 = (undefined8 *****)*pppppuVar10 == pppppuVar9;
          pppppuVar9 = pppppuVar10;
        } while (bVar4);
        if (*(byte *)(pppppuVar10 + 4) < bVar2) goto LAB_10aaec1e4;
      }
      else {
        do {
          pppppuVar10 = pppppuVar3;
          pppppuVar3 = (undefined8 *****)pppppuVar10[1];
        } while ((undefined8 *****)pppppuVar10[1] != (undefined8 *****)0x0);
        pppppuVar9 = (undefined8 *****)ppppuStack_2b0;
        if (*(byte *)(pppppuVar10 + 4) < bVar2) goto LAB_10aaec1e4;
        do {
          while (pppppuVar11 = pppppuVar9, bVar2 < *(byte *)(pppppuVar11 + 4)) {
            pppppuVar9 = (undefined8 *****)*pppppuVar11;
            pppppuVar6 = pppppuVar11;
            if ((undefined8 *****)*pppppuVar11 == (undefined8 *****)0x0) goto LAB_10aaec200;
          }
          if (bVar2 <= *(byte *)(pppppuVar11 + 4)) goto LAB_10aaec270;
          pppppuVar9 = (undefined8 *****)pppppuVar11[1];
        } while ((undefined8 *****)pppppuVar11[1] != (undefined8 *****)0x0);
        pppppuVar6 = pppppuVar11 + 1;
      }
LAB_10aaec200:
      ppppuVar5 = (undefined8 ****)0x40;
      __Znwm();
      *(byte *)(ppppuVar5 + 4) = bVar2;
      if (acStack_281[lVar13] < '\0') {
        func_0x000107c3192c(ppppuVar5 + 5,*(undefined8 *)((long)apppuStack_298 + lVar13),
                            *(undefined8 *)((long)apppuStack_298 + lVar13 + 8));
      }
      else {
        pppuVar14 = *(undefined8 ****)((long)apppuStack_298 + lVar13);
        ppppuVar5[6] = *(undefined8 ****)((long)apppuStack_298 + lVar13 + 8);
        ppppuVar5[5] = pppuVar14;
        ppppuVar5[7] = *(undefined8 ****)(&stack0xfffffffffffffd78 + lVar13);
      }
      *ppppuVar5 = (undefined8 ***)0x0;
      ppppuVar5[1] = (undefined8 ***)0x0;
      ppppuVar5[2] = pppppuVar11;
      *pppppuVar6 = ppppuVar5;
      if ((undefined8 *****)*ppppuStack_2b8 != (undefined8 *****)0x0) {
        ppppuStack_2b8 = (undefined8 ****)*ppppuStack_2b8;
        ppppuVar5 = *pppppuVar6;
      }
      func_0x000107c2b058(ppppuStack_2b0,ppppuVar5);
      lStack_2a8 = lStack_2a8 + 1;
    }
LAB_10aaec270:
    lVar13 = lVar13 + 0x20;
  } while (lVar13 != 0x220);
  lVar13 = 0x220;
  do {
    lVar13 = lVar13 + -0x20;
  } while (lVar13 != 0);
  ppppuStack_2a0 = (undefined8 ****)((ulong)ppppuStack_2a0 & 0xffffffffffffff00);
  func_0x000107c2b054(apppuStack_298,&DAT_10f68e694);
  acStack_281[1] = 1;
  func_0x000107c2b054(acStack_281 + 9,&DAT_10f461a49);
  acStack_281[0x21] = 2;
  func_0x000107c2b054(acStack_281 + 0x29,&UNK_10f68e69d);
  acStack_281[0x41] = 3;
  func_0x000107c2b054(acStack_281 + 0x49,&UNK_10f68e6a9);
  acStack_281[0x61] = 4;
  func_0x000107c2b054(auStack_218,&UNK_10f68e6bd);
  acStack_201[1] = 5;
  func_0x000107c2b054(auStack_1f8,&UNK_10f68e6ce);
  uStack_1e0 = 6;
  func_0x000107c2b054(auStack_1d8,&UNK_10f68e6e7);
  uStack_1c0 = 7;
  func_0x000107c2b054(auStack_1b8,&UNK_10f68e6f3);
  uStack_1a0 = 8;
  func_0x000107c2b054(auStack_198,&UNK_10f68e707);
  uStack_180 = 9;
  func_0x000107c2b054(auStack_178,&UNK_10f68e718);
  uStack_160 = 10;
  func_0x000107c2b054(auStack_158,&UNK_10f68e731);
  uStack_140 = 0xb;
  func_0x000107c2b054(auStack_138,&UNK_10f68e73f);
  uStack_120 = 0xc;
  func_0x000107c2b054(auStack_118,&UNK_10f68e755);
  uStack_100 = 0xd;
  func_0x000107c2b054(auStack_f8,&UNK_10f68e763);
  uStack_e0 = 0xe;
  func_0x000107c2b054(auStack_d8,&UNK_10f68e779);
  lVar13 = 0;
  lStack_2c0 = 0;
  ppppuStack_2c8 = (undefined8 *****)0x0;
  ppppuStack_2d0 = &ppppuStack_2c8;
  do {
    bVar2 = *(byte *)((long)&ppppuStack_2a0 + lVar13);
    pppppuVar10 = &ppppuStack_2c8;
    pppppuVar6 = &ppppuStack_2c8;
    pppppuVar11 = &ppppuStack_2c8;
    if ((undefined8 *****)ppppuStack_2d0 == &ppppuStack_2c8) {
LAB_10aaec524:
      pppppuVar9 = &ppppuStack_2d0;
      if ((undefined8 *****)ppppuStack_2c8 != (undefined8 *****)0x0) {
        pppppuVar6 = pppppuVar10 + 1;
        pppppuVar9 = pppppuVar10;
        pppppuVar11 = pppppuVar10;
      }
      if (pppppuVar9[1] == (undefined8 ****)0x0) goto LAB_10aaec544;
    }
    else {
      pppppuVar9 = &ppppuStack_2c8;
      pppppuVar3 = (undefined8 *****)ppppuStack_2c8;
      if ((undefined8 *****)ppppuStack_2c8 == (undefined8 *****)0x0) {
        do {
          pppppuVar10 = (undefined8 *****)pppppuVar9[2];
          bVar4 = (undefined8 *****)*pppppuVar10 == pppppuVar9;
          pppppuVar9 = pppppuVar10;
        } while (bVar4);
        if (*(byte *)(pppppuVar10 + 4) < bVar2) goto LAB_10aaec524;
      }
      else {
        do {
          pppppuVar10 = pppppuVar3;
          pppppuVar3 = (undefined8 *****)pppppuVar10[1];
        } while ((undefined8 *****)pppppuVar10[1] != (undefined8 *****)0x0);
        pppppuVar9 = (undefined8 *****)ppppuStack_2c8;
        if (*(byte *)(pppppuVar10 + 4) < bVar2) goto LAB_10aaec524;
        do {
          while (pppppuVar11 = pppppuVar9, bVar2 < *(byte *)(pppppuVar11 + 4)) {
            pppppuVar9 = (undefined8 *****)*pppppuVar11;
            pppppuVar6 = pppppuVar11;
            if ((undefined8 *****)*pppppuVar11 == (undefined8 *****)0x0) goto LAB_10aaec544;
          }
          if (bVar2 <= *(byte *)(pppppuVar11 + 4)) goto LAB_10aaec5b4;
          pppppuVar9 = (undefined8 *****)pppppuVar11[1];
        } while ((undefined8 *****)pppppuVar11[1] != (undefined8 *****)0x0);
        pppppuVar6 = pppppuVar11 + 1;
      }
LAB_10aaec544:
      ppppuVar5 = (undefined8 ****)0x40;
      __Znwm();
      *(byte *)(ppppuVar5 + 4) = bVar2;
      if (acStack_281[lVar13] < '\0') {
        func_0x000107c3192c(ppppuVar5 + 5,*(undefined8 *)((long)apppuStack_298 + lVar13),
                            *(undefined8 *)((long)apppuStack_298 + lVar13 + 8));
      }
      else {
        pppuVar14 = *(undefined8 ****)((long)apppuStack_298 + lVar13);
        ppppuVar5[6] = *(undefined8 ****)((long)apppuStack_298 + lVar13 + 8);
        ppppuVar5[5] = pppuVar14;
        ppppuVar5[7] = *(undefined8 ****)(&stack0xfffffffffffffd78 + lVar13);
      }
      *ppppuVar5 = (undefined8 ***)0x0;
      ppppuVar5[1] = (undefined8 ***)0x0;
      ppppuVar5[2] = pppppuVar11;
      *pppppuVar6 = ppppuVar5;
      if ((undefined8 *****)*ppppuStack_2d0 != (undefined8 *****)0x0) {
        ppppuStack_2d0 = (undefined8 ****)*ppppuStack_2d0;
        ppppuVar5 = *pppppuVar6;
      }
      func_0x000107c2b058(ppppuStack_2c8,ppppuVar5);
      lStack_2c0 = lStack_2c0 + 1;
    }
LAB_10aaec5b4:
    lVar13 = lVar13 + 0x20;
  } while (lVar13 != 0x1e0);
  lVar13 = 0x1e0;
  do {
    lVar13 = lVar13 + -0x20;
  } while (lVar13 != 0);
  ppppuStack_2a0 = (undefined8 ****)((ulong)ppppuStack_2a0 & 0xffffffffffffff00);
  func_0x000107c2b054(apppuStack_298,&DAT_10f2ee02c);
  acStack_281[1] = 1;
  func_0x000107c2b054(acStack_281 + 9,&DAT_10f517dee);
  acStack_281[0x21] = 2;
  func_0x000107c2b054(acStack_281 + 0x29,&UNK_10f68e7a2);
  acStack_281[0x41] = 3;
  func_0x000107c2b054(acStack_281 + 0x49,&UNK_10f68e7b2);
  acStack_281[0x61] = 4;
  func_0x000107c2b054(auStack_218,&DAT_10f68e7b6);
  lVar13 = 0;
  lStack_2d8 = 0;
  ppppuStack_2e0 = (undefined8 *****)0x0;
  ppppuStack_2e8 = &ppppuStack_2e0;
  do {
    bVar2 = *(byte *)((long)&ppppuStack_2a0 + lVar13);
    pppppuVar10 = &ppppuStack_2e0;
    pppppuVar6 = &ppppuStack_2e0;
    pppppuVar11 = &ppppuStack_2e0;
    if ((undefined8 *****)ppppuStack_2e8 == &ppppuStack_2e0) {
LAB_10aaec73c:
      pppppuVar9 = &ppppuStack_2e8;
      if ((undefined8 *****)ppppuStack_2e0 != (undefined8 *****)0x0) {
        pppppuVar6 = pppppuVar10 + 1;
        pppppuVar9 = pppppuVar10;
        pppppuVar11 = pppppuVar10;
      }
      if (pppppuVar9[1] == (undefined8 ****)0x0) goto LAB_10aaec75c;
    }
    else {
      pppppuVar9 = &ppppuStack_2e0;
      pppppuVar3 = (undefined8 *****)ppppuStack_2e0;
      if ((undefined8 *****)ppppuStack_2e0 == (undefined8 *****)0x0) {
        do {
          pppppuVar10 = (undefined8 *****)pppppuVar9[2];
          bVar4 = (undefined8 *****)*pppppuVar10 == pppppuVar9;
          pppppuVar9 = pppppuVar10;
        } while (bVar4);
        if (*(byte *)(pppppuVar10 + 4) < bVar2) goto LAB_10aaec73c;
      }
      else {
        do {
          pppppuVar10 = pppppuVar3;
          pppppuVar3 = (undefined8 *****)pppppuVar10[1];
        } while ((undefined8 *****)pppppuVar10[1] != (undefined8 *****)0x0);
        pppppuVar9 = (undefined8 *****)ppppuStack_2e0;
        if (*(byte *)(pppppuVar10 + 4) < bVar2) goto LAB_10aaec73c;
        do {
          while (pppppuVar11 = pppppuVar9, bVar2 < *(byte *)(pppppuVar11 + 4)) {
            pppppuVar9 = (undefined8 *****)*pppppuVar11;
            pppppuVar6 = pppppuVar11;
            if ((undefined8 *****)*pppppuVar11 == (undefined8 *****)0x0) goto LAB_10aaec75c;
          }
          if (bVar2 <= *(byte *)(pppppuVar11 + 4)) goto LAB_10aaec7cc;
          pppppuVar9 = (undefined8 *****)pppppuVar11[1];
        } while ((undefined8 *****)pppppuVar11[1] != (undefined8 *****)0x0);
        pppppuVar6 = pppppuVar11 + 1;
      }
LAB_10aaec75c:
      ppppuVar5 = (undefined8 ****)0x40;
      __Znwm();
      *(byte *)(ppppuVar5 + 4) = bVar2;
      if (acStack_281[lVar13] < '\0') {
        func_0x000107c3192c(ppppuVar5 + 5,*(undefined8 *)((long)apppuStack_298 + lVar13),
                            *(undefined8 *)((long)apppuStack_298 + lVar13 + 8));
      }
      else {
        pppuVar14 = *(undefined8 ****)((long)apppuStack_298 + lVar13);
        ppppuVar5[6] = *(undefined8 ****)((long)apppuStack_298 + lVar13 + 8);
        ppppuVar5[5] = pppuVar14;
        ppppuVar5[7] = *(undefined8 ****)(&stack0xfffffffffffffd78 + lVar13);
      }
      *ppppuVar5 = (undefined8 ***)0x0;
      ppppuVar5[1] = (undefined8 ***)0x0;
      ppppuVar5[2] = pppppuVar11;
      *pppppuVar6 = ppppuVar5;
      if ((undefined8 *****)*ppppuStack_2e8 != (undefined8 *****)0x0) {
        ppppuVar5 = *pppppuVar6;
        ppppuStack_2e8 = (undefined8 ****)*ppppuStack_2e8;
      }
      func_0x000107c2b058(ppppuStack_2e0,ppppuVar5);
      lStack_2d8 = lStack_2d8 + 1;
    }
LAB_10aaec7cc:
    lVar13 = lVar13 + 0x20;
  } while (lVar13 != 0xa0);
  lVar13 = 0;
  do {
    if (acStack_201[lVar13] < '\0') {
      __ZdlPv(*(undefined8 *)((long)auStack_218 + lVar13));
    }
    lVar13 = lVar13 + -0x20;
  } while (lVar13 != -0xa0);
  if ((undefined8 *****)ppppuStack_2b0 != (undefined8 *****)0x0) {
    pppppuVar6 = &ppppuStack_2b0;
    pppppuVar11 = (undefined8 *****)ppppuStack_2b0;
    do {
      lVar13 = 8;
      if (*(byte *)(param_2 + 0x28) <= *(byte *)(pppppuVar11 + 4)) {
        lVar13 = 0;
        pppppuVar6 = pppppuVar11;
      }
      pppppuVar11 = *(undefined8 ******)((long)pppppuVar11 + lVar13);
    } while (pppppuVar11 != (undefined8 *****)0x0);
    if ((pppppuVar6 != &ppppuStack_2b0) && (*(byte *)(pppppuVar6 + 4) <= *(byte *)(param_2 + 0x28)))
    {
      if (*(char *)((long)pppppuVar6 + 0x3f) < '\0') {
        func_0x000107c3192c(&ppppuStack_2a0,pppppuVar6[5],pppppuVar6[6]);
      }
      else {
        apppuStack_298[0] = pppppuVar6[6];
        ppppuStack_2a0 = pppppuVar6[5];
        apppuStack_298[1] = pppppuVar6[7];
      }
      goto LAB_10aaec864;
    }
  }
  func_0x000107c2b054(&ppppuStack_2a0,&UNK_10f68e8d6);
LAB_10aaec864:
  pcVar12 = "false";
  pcVar1 = "true";
  if (*(char *)(param_2 + 0x2a) == '\0') {
    pcVar1 = pcVar12;
  }
  func_0x000107c2b054(&ppppuStack_300,pcVar1);
  __ZNSt3__19to_stringEf(&pppuStack_420,*(undefined4 *)(param_2 + 0x2c));
  ppppuVar5 = &pppuStack_420;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (ppppuVar5,0,&DAT_10f68e8ec,1);
  ppuStack_3f8 = ppppuVar5[1];
  ppppuStack_400 = (undefined8 ****)*ppppuVar5;
  ppuStack_3f0 = ppppuVar5[2];
  ppppuVar5[1] = (undefined8 ***)0x0;
  ppppuVar5[2] = (undefined8 ***)0x0;
  *ppppuVar5 = (undefined8 ***)0x0;
  pppppuVar6 = &ppppuStack_400;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppppuVar6,&DAT_10f68e8ee,1);
  pppuStack_3d8 = pppppuVar6[1];
  ppppuStack_3e0 = *pppppuVar6;
  pppuStack_3d0 = pppppuVar6[2];
  pppppuVar6[1] = (undefined8 ****)0x0;
  pppppuVar6[2] = (undefined8 ****)0x0;
  *pppppuVar6 = (undefined8 ****)0x0;
  __ZNSt3__19to_stringEf(&ppppuStack_440,*(undefined4 *)(param_2 + 0x30));
  pppppuVar6 = (undefined8 *****)ppppuStack_440;
  if (-1 < (long)uStack_430) {
    pppuStack_438 = (undefined8 ***)((ulong)uStack_430 >> 0x38);
    pppppuVar6 = &ppppuStack_440;
  }
  pppppuVar11 = &ppppuStack_3e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppppuVar11,pppppuVar6,pppuStack_438);
  pppuStack_3b8 = pppppuVar11[1];
  ppppuStack_3c0 = *pppppuVar11;
  pppuStack_3b0 = pppppuVar11[2];
  pppppuVar11[1] = (undefined8 ****)0x0;
  pppppuVar11[2] = (undefined8 ****)0x0;
  *pppppuVar11 = (undefined8 ****)0x0;
  pppppuVar6 = &ppppuStack_3c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppppuVar6,&DAT_10f68e8ee,1);
  pppuStack_398 = pppppuVar6[1];
  ppppuStack_3a0 = *pppppuVar6;
  pppuStack_390 = pppppuVar6[2];
  pppppuVar6[1] = (undefined8 ****)0x0;
  pppppuVar6[2] = (undefined8 ****)0x0;
  *pppppuVar6 = (undefined8 ****)0x0;
  __ZNSt3__19to_stringEf(&ppppuStack_460,*(undefined4 *)(param_2 + 0x34));
  pppppuVar6 = (undefined8 *****)ppppuStack_460;
  if (-1 < (long)uStack_450) {
    pppuStack_458 = (undefined8 ***)((ulong)uStack_450 >> 0x38);
    pppppuVar6 = &ppppuStack_460;
  }
  pppppuVar11 = &ppppuStack_3a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppppuVar11,pppppuVar6,pppuStack_458);
  pppuStack_378 = pppppuVar11[1];
  ppppuStack_380 = *pppppuVar11;
  pppuStack_370 = pppppuVar11[2];
  pppppuVar11[1] = (undefined8 ****)0x0;
  pppppuVar11[2] = (undefined8 ****)0x0;
  *pppppuVar11 = (undefined8 ****)0x0;
  pppppuVar6 = &ppppuStack_380;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppppuVar6,&DAT_10f68e8ee,1);
  pppuStack_358 = pppppuVar6[1];
  ppppuStack_360 = *pppppuVar6;
  pppuStack_350 = pppppuVar6[2];
  pppppuVar6[1] = (undefined8 ****)0x0;
  pppppuVar6[2] = (undefined8 ****)0x0;
  *pppppuVar6 = (undefined8 ****)0x0;
  __ZNSt3__19to_stringEf(&ppppuStack_480,*(undefined4 *)(param_2 + 0x38));
  pppppuVar6 = (undefined8 *****)ppppuStack_480;
  if (-1 < (long)uStack_470) {
    uStack_478 = uStack_470 >> 0x38;
    pppppuVar6 = &ppppuStack_480;
  }
  pppppuVar11 = &ppppuStack_360;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppppuVar11,pppppuVar6,uStack_478);
  pppuStack_338 = pppppuVar11[1];
  ppppuStack_340 = *pppppuVar11;
  pppuStack_330 = pppppuVar11[2];
  pppppuVar11[1] = (undefined8 ****)0x0;
  pppppuVar11[2] = (undefined8 ****)0x0;
  *pppppuVar11 = (undefined8 ****)0x0;
  pppppuVar6 = &ppppuStack_340;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppppuVar6,&DAT_10f684600,1);
  pppuStack_318 = pppppuVar6[1];
  ppppuStack_320 = *pppppuVar6;
  pppuStack_310 = pppppuVar6[2];
  pppppuVar6[1] = (undefined8 ****)0x0;
  pppppuVar6[2] = (undefined8 ****)0x0;
  *pppppuVar6 = (undefined8 ****)0x0;
  if ((long)pppuStack_330 < 0) {
    __ZdlPv(ppppuStack_340);
  }
  if (uStack_470._7_1_ < '\0') {
    __ZdlPv(ppppuStack_480);
  }
  if ((long)pppuStack_350 < 0) {
    __ZdlPv(ppppuStack_360);
  }
  if ((long)pppuStack_370 < 0) {
    __ZdlPv(ppppuStack_380);
  }
  if (uStack_450._7_1_ < '\0') {
    __ZdlPv(ppppuStack_460);
  }
  if ((long)pppuStack_390 < 0) {
    __ZdlPv(ppppuStack_3a0);
  }
  if ((long)pppuStack_3b0 < 0) {
    __ZdlPv(ppppuStack_3c0);
  }
  if (uStack_430._7_1_ < '\0') {
    __ZdlPv(ppppuStack_440);
  }
  if ((long)pppuStack_3d0 < 0) {
    __ZdlPv(ppppuStack_3e0);
  }
  if ((long)ppuStack_3f0 < 0) {
    __ZdlPv(ppppuStack_400);
  }
  if (uStack_410._7_1_ < '\0') {
    __ZdlPv(pppuStack_420);
  }
  pcVar1 = "true";
  if (*(char *)(param_2 + 0x3c) == '\0') {
    pcVar1 = pcVar12;
  }
  func_0x000107c2b054(&ppppuStack_340,pcVar1);
  FUN_10aaed7f8(&ppppuStack_360,&ppppuStack_2d0,*(undefined1 *)(param_2 + 0x3d));
  FUN_10aaed7f8(&ppppuStack_380,&ppppuStack_2d0,*(undefined1 *)(param_2 + 0x3e));
  FUN_10aaed7f8(&ppppuStack_3a0,&ppppuStack_2d0,*(undefined1 *)(param_2 + 0x3f));
  FUN_10aaed7f8(&ppppuStack_3c0,&ppppuStack_2d0,*(undefined1 *)(param_2 + 0x40));
  func_0x00010aaed868(&ppppuStack_3e0,&ppppuStack_2e8,*(undefined1 *)(param_2 + 0x41));
  func_0x00010aaed868(&ppppuStack_400,&ppppuStack_2e8,*(undefined1 *)(param_2 + 0x42));
  puVar7 = (undefined8 *)0x20;
  __Znwm();
  lStack_648 = -0x7fffffffffffffe0;
  uStack_650 = 0x18;
  *(undefined2 *)(puVar7 + 1) = 0x6574;
  *puVar7 = 0x617453646e656c42;
  *(undefined8 *)((long)puVar7 + 10) = 0x20646e656c42203a;
  puVar7[2] = 0x203a65646f6d2064;
  *(undefined1 *)(puVar7 + 3) = 0;
  ppppuVar5 = (undefined8 ****)apppuStack_298[0];
  pppppuVar6 = (undefined8 *****)ppppuStack_2a0;
  if (-1 < (long)apppuStack_298[1]) {
    ppppuVar5 = (undefined8 ****)((ulong)apppuStack_298[1] >> 0x38);
    pppppuVar6 = &ppppuStack_2a0;
  }
  ppuVar8 = &puStack_658;
  puStack_658 = puVar7;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar8,pppppuVar6,ppppuVar5);
  puStack_638 = ppuVar8[1];
  puStack_640 = *ppuVar8;
  puStack_630 = ppuVar8[2];
  ppuVar8[1] = (undefined8 *)0x0;
  ppuVar8[2] = (undefined8 *)0x0;
  *ppuVar8 = (undefined8 *)0x0;
  ppuVar8 = &puStack_640;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar8,&UNK_10f68e916,0x15);
  puStack_618 = ppuVar8[1];
  puStack_620 = *ppuVar8;
  puStack_610 = ppuVar8[2];
  ppuVar8[1] = (undefined8 *)0x0;
  ppuVar8[2] = (undefined8 *)0x0;
  *ppuVar8 = (undefined8 *)0x0;
  pppppuVar6 = (undefined8 *****)ppppuStack_300;
  if (-1 < (char)bStack_2e9) {
    uStack_2f8 = (ulong)bStack_2e9;
    pppppuVar6 = &ppppuStack_300;
  }
  ppuVar8 = &puStack_620;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar8,pppppuVar6,uStack_2f8);
  puStack_5f8 = ppuVar8[1];
  puStack_600 = *ppuVar8;
  puStack_5f0 = ppuVar8[2];
  ppuVar8[1] = (undefined8 *)0x0;
  ppuVar8[2] = (undefined8 *)0x0;
  *ppuVar8 = (undefined8 *)0x0;
  ppuVar8 = &puStack_600;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar8,&UNK_10f68e92c,0x12);
  uStack_5d8 = ppuVar8[1];
  uStack_5e0 = *ppuVar8;
  lStack_5d0 = (long)ppuVar8[2];
  ppuVar8[1] = (undefined8 *)0x0;
  ppuVar8[2] = (undefined8 *)0x0;
  *ppuVar8 = (undefined8 *)0x0;
  ppppuVar5 = (undefined8 ****)pppuStack_318;
  pppppuVar6 = (undefined8 *****)ppppuStack_320;
  if (-1 < (long)pppuStack_310) {
    ppppuVar5 = (undefined8 ****)((ulong)pppuStack_310 >> 0x38);
    pppppuVar6 = &ppppuStack_320;
  }
  puVar7 = &uStack_5e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,pppppuVar6,ppppuVar5);
  uStack_5b8 = puVar7[1];
  uStack_5c0 = *puVar7;
  lStack_5b0 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_5c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f68e93f,0xb);
  uStack_598 = puVar7[1];
  uStack_5a0 = *puVar7;
  lStack_590 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  ppppuVar5 = (undefined8 ****)pppuStack_338;
  pppppuVar6 = (undefined8 *****)ppppuStack_340;
  if (-1 < (long)pppuStack_330) {
    ppppuVar5 = (undefined8 ****)((ulong)pppuStack_330 >> 0x38);
    pppppuVar6 = &ppppuStack_340;
  }
  puVar7 = &uStack_5a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,pppppuVar6,ppppuVar5);
  uStack_578 = puVar7[1];
  uStack_580 = *puVar7;
  lStack_570 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_580;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f68e94b,0x15);
  uStack_558 = puVar7[1];
  uStack_560 = *puVar7;
  lStack_550 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  ppppuVar5 = (undefined8 ****)pppuStack_358;
  pppppuVar6 = (undefined8 *****)ppppuStack_360;
  if (-1 < (long)pppuStack_350) {
    ppppuVar5 = (undefined8 ****)((ulong)pppuStack_350 >> 0x38);
    pppppuVar6 = &ppppuStack_360;
  }
  puVar7 = &uStack_560;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,pppppuVar6,ppppuVar5);
  uStack_538 = puVar7[1];
  uStack_540 = *puVar7;
  lStack_530 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_540;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f68e961,0x1a);
  uStack_518 = puVar7[1];
  uStack_520 = *puVar7;
  lStack_510 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  ppppuVar5 = (undefined8 ****)pppuStack_378;
  pppppuVar6 = (undefined8 *****)ppppuStack_380;
  if (-1 < (long)pppuStack_370) {
    ppppuVar5 = (undefined8 ****)((ulong)pppuStack_370 >> 0x38);
    pppppuVar6 = &ppppuStack_380;
  }
  puVar7 = &uStack_520;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,pppppuVar6,ppppuVar5);
  uStack_4f8 = puVar7[1];
  uStack_500 = *puVar7;
  lStack_4f0 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_500;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f68e97c,0x17);
  uStack_4d8 = puVar7[1];
  uStack_4e0 = *puVar7;
  lStack_4d0 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  ppppuVar5 = (undefined8 ****)pppuStack_398;
  pppppuVar6 = (undefined8 *****)ppppuStack_3a0;
  if (-1 < (long)pppuStack_390) {
    ppppuVar5 = (undefined8 ****)((ulong)pppuStack_390 >> 0x38);
    pppppuVar6 = &ppppuStack_3a0;
  }
  puVar7 = &uStack_4e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,pppppuVar6,ppppuVar5);
  uStack_4b8 = puVar7[1];
  uStack_4c0 = *puVar7;
  lStack_4b0 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_4c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f68e994,0x1d);
  uStack_498 = puVar7[1];
  uStack_4a0 = *puVar7;
  lStack_490 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  ppppuVar5 = (undefined8 ****)pppuStack_3b8;
  pppppuVar6 = (undefined8 *****)ppppuStack_3c0;
  if (-1 < (long)pppuStack_3b0) {
    ppppuVar5 = (undefined8 ****)((ulong)pppuStack_3b0 >> 0x38);
    pppppuVar6 = &ppppuStack_3c0;
  }
  puVar7 = &uStack_4a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,pppppuVar6,ppppuVar5);
  uStack_478 = puVar7[1];
  ppppuStack_480 = (undefined8 ****)*puVar7;
  uStack_470 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  pppppuVar6 = &ppppuStack_480;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppppuVar6,&UNK_10f68e9b2,0x11);
  pppuStack_458 = pppppuVar6[1];
  ppppuStack_460 = *pppppuVar6;
  uStack_450 = pppppuVar6[2];
  pppppuVar6[1] = (undefined8 ****)0x0;
  pppppuVar6[2] = (undefined8 ****)0x0;
  *pppppuVar6 = (undefined8 ****)0x0;
  ppppuVar5 = (undefined8 ****)pppuStack_3d8;
  pppppuVar6 = (undefined8 *****)ppppuStack_3e0;
  if (-1 < (long)pppuStack_3d0) {
    ppppuVar5 = (undefined8 ****)((ulong)pppuStack_3d0 >> 0x38);
    pppppuVar6 = &ppppuStack_3e0;
  }
  pppppuVar11 = &ppppuStack_460;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppppuVar11,pppppuVar6,ppppuVar5);
  pppuStack_438 = pppppuVar11[1];
  ppppuStack_440 = *pppppuVar11;
  uStack_430 = pppppuVar11[2];
  pppppuVar11[1] = (undefined8 ****)0x0;
  pppppuVar11[2] = (undefined8 ****)0x0;
  *pppppuVar11 = (undefined8 ****)0x0;
  pppppuVar6 = &ppppuStack_440;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppppuVar6,&UNK_10f68e9c4,0x13);
  pppuStack_418 = pppppuVar6[1];
  pppuStack_420 = *pppppuVar6;
  uStack_410 = pppppuVar6[2];
  pppppuVar6[1] = (undefined8 ****)0x0;
  pppppuVar6[2] = (undefined8 ****)0x0;
  *pppppuVar6 = (undefined8 ****)0x0;
  pppuVar14 = (undefined8 ***)ppuStack_3f8;
  pppppuVar6 = (undefined8 *****)ppppuStack_400;
  if (-1 < (long)ppuStack_3f0) {
    pppuVar14 = (undefined8 ***)((ulong)ppuStack_3f0 >> 0x38);
    pppppuVar6 = &ppppuStack_400;
  }
  ppppuVar5 = &pppuStack_420;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppuVar5,pppppuVar6,pppuVar14);
  pppuVar14 = *ppppuVar5;
  param_1[1] = ppppuVar5[1];
  *param_1 = pppuVar14;
  param_1[2] = ppppuVar5[2];
  ppppuVar5[1] = (undefined8 ***)0x0;
  ppppuVar5[2] = (undefined8 ***)0x0;
  *ppppuVar5 = (undefined8 ***)0x0;
  if ((long)uStack_410 < 0) {
    __ZdlPv(pppuStack_420);
  }
  if ((long)uStack_430 < 0) {
    __ZdlPv(ppppuStack_440);
  }
  if ((long)uStack_450 < 0) {
    __ZdlPv(ppppuStack_460);
  }
  if ((long)uStack_470 < 0) {
    __ZdlPv(ppppuStack_480);
  }
  if (lStack_490 < 0) {
    __ZdlPv(uStack_4a0);
  }
  if (lStack_4b0 < 0) {
    __ZdlPv(uStack_4c0);
  }
  if (lStack_4d0 < 0) {
    __ZdlPv(uStack_4e0);
  }
  if (lStack_4f0 < 0) {
    __ZdlPv(uStack_500);
  }
  if (lStack_510 < 0) {
    __ZdlPv(uStack_520);
  }
  if (lStack_530 < 0) {
    __ZdlPv(uStack_540);
  }
  if (lStack_550 < 0) {
    __ZdlPv(uStack_560);
  }
  if (lStack_570 < 0) {
    __ZdlPv(uStack_580);
  }
  if (lStack_590 < 0) {
    __ZdlPv(uStack_5a0);
  }
  if (lStack_5b0 < 0) {
    __ZdlPv(uStack_5c0);
  }
  if (lStack_5d0 < 0) {
    __ZdlPv(uStack_5e0);
  }
  if ((long)puStack_5f0 < 0) {
    __ZdlPv(puStack_600);
  }
  if ((long)puStack_610 < 0) {
    __ZdlPv(puStack_620);
  }
  if ((long)puStack_630 < 0) {
    __ZdlPv(puStack_640);
  }
  if (lStack_648 < 0) {
    __ZdlPv(puStack_658);
  }
  if ((long)ppuStack_3f0 < 0) {
    __ZdlPv(ppppuStack_400);
  }
  if ((long)pppuStack_3d0 < 0) {
    __ZdlPv(ppppuStack_3e0);
  }
  if ((long)pppuStack_3b0 < 0) {
    __ZdlPv(ppppuStack_3c0);
  }
  if ((long)pppuStack_390 < 0) {
    __ZdlPv(ppppuStack_3a0);
  }
  if ((long)pppuStack_370 < 0) {
    __ZdlPv(ppppuStack_380);
  }
  if ((long)pppuStack_350 < 0) {
    __ZdlPv(ppppuStack_360);
  }
  if ((long)pppuStack_330 < 0) {
    __ZdlPv(ppppuStack_340);
  }
  if ((long)pppuStack_310 < 0) {
    __ZdlPv(ppppuStack_320);
  }
  if ((char)bStack_2e9 < '\0') {
    __ZdlPv(ppppuStack_300);
  }
  if ((long)apppuStack_298[1] < 0) {
    __ZdlPv(ppppuStack_2a0);
  }
  func_0x00010ab00214(ppppuStack_2e0);
  func_0x00010ab001cc(ppppuStack_2c8);
  pppppuVar6 = (undefined8 *****)ppppuStack_2b0;
  func_0x00010ab00184(ppppuStack_2b0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010ab00214(ppppuStack_2e0);
  func_0x00010ab001cc(ppppuStack_2c8);
  func_0x00010ab00184(ppppuStack_2b0);
  do {
    __Unwind_Resume(pppppuVar6);
    func_0x00010ab00184(pcVar12);
    puVar7 = auStack_98;
    lVar13 = -0x220;
    do {
      if (*(char *)((long)puVar7 + 0x17) < '\0') {
        __ZdlPv(*puVar7);
      }
      puVar7 = puVar7 + -4;
      lVar13 = lVar13 + 0x20;
    } while (lVar13 != 0);
    pcVar12 = (char *)0x0;
  } while( true );
}



/* Entry: 10aaed7f8; end: 10aaed8df;  */

/* WARNING: Possible PIC construction at 0x0001000537dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

undefined1  [16] FUN_10aaed7f8(long *param_1,long param_2,byte param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  auVar16._8_8_ = (long *)(param_2 + 8);
  plVar10 = (long *)*auVar16._8_8_;
  plVar9 = auVar16._8_8_;
  plVar3 = param_1;
  if (plVar10 != (long *)0x0) {
    do {
      lVar11 = 8;
      if (param_3 <= *(byte *)(plVar10 + 4)) {
        lVar11 = 0;
        plVar9 = plVar10;
      }
      plVar10 = *(long **)((long)plVar10 + lVar11);
    } while (plVar10 != (long *)0x0);
    if ((plVar9 != auVar16._8_8_) && (*(byte *)(plVar9 + 4) <= param_3)) {
      if (-1 < *(char *)((long)plVar9 + 0x3f)) {
        lVar12 = plVar9[6];
        lVar11 = plVar9[5];
        param_1[2] = plVar9[7];
        param_1[1] = lVar12;
        *param_1 = lVar11;
        auVar16._0_8_ = param_1;
        return auVar16;
      }
      puVar6 = (undefined *)plVar9[5];
      uVar1 = plVar9[6];
      if (0x16 < uVar1) {
        if (uVar1 < 0x7ffffffffffffff7) {
          puVar6 = (undefined *)0x19;
          if ((uVar1 | 7) != 0x17) {
            puVar6 = (undefined *)((uVar1 | 7) + 1);
          }
        }
        else {
          func_0x000104bd47d4();
        }
        puVar2 = puVar6;
        func_0x000107c60e20(puVar6);
        auVar13._8_8_ = puVar6;
        auVar13._0_8_ = puVar2;
        return auVar13;
      }
      *(char *)((long)param_1 + 0x17) = (char)uVar1;
      puVar2 = (undefined *)(uVar1 + 1);
      goto code_r0x000107c610b8;
    }
  }
  puVar6 = &UNK_10f68e8f2;
  puVar2 = puVar6;
  puVar7 = puVar6;
  func_0x000107c613d0();
  if ((undefined *)0x7ffffffffffffff7 < puVar2) {
    func_0x000107c2b040();
    if ((bRam00000001132ffc88 & 1) == 0) {
      puVar2 = (undefined *)0x1132ffc88;
      func_0x000107c60e48();
      if ((int)puVar2 != 0) {
        puVar4 = (undefined8 *)0x30;
        func_0x000107c60e20();
        uVar8 = 0x1132ffc28;
        uRam00000001132ffc38 = 0x8000000000000030;
        uRam00000001132ffc30 = 0x2c;
        puRam00000001132ffc28 = puVar4;
        puVar4[1] = 0x434948504152475f;
        *puVar4 = 0x45524f43534e454c;
        puVar4[3] = 0x525f595a414c5f54;
        puVar4[2] = 0x5845544e4f435f53;
        *(undefined8 *)((long)puVar4 + 0x24) = 0x54494e495f454352;
        *(undefined8 *)((long)puVar4 + 0x1c) = 0x554f5345525f595a;
        *(undefined1 *)((long)puVar4 + 0x2c) = 0;
        uRam00000001132ffc40 = 0;
        pcRam00000001132ffc48 = FUN_10a09e854;
        ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
        func_0x000107c60e34(0x10a08e670,0x1132ffc28,0x100000000);
        uVar5 = 0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
        auVar17._8_8_ = uVar8;
        auVar17._0_8_ = uVar5;
        return auVar17;
      }
    }
    auVar15._8_8_ = puVar7;
    auVar15._0_8_ = puVar2;
    return auVar15;
  }
  if (puVar2 < (undefined *)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)puVar2;
    if (puVar2 == (undefined *)0x0) {
      *(undefined1 *)param_1 = 0;
      auVar14._8_8_ = puVar7;
      auVar14._0_8_ = param_1;
      return auVar14;
    }
  }
  else {
    plVar9 = (long *)0x19;
    if (((ulong)puVar2 | 7) != 0x17) {
      plVar9 = (long *)(((ulong)puVar2 | 7) + 1);
    }
    plVar3 = plVar9;
    func_0x000107c60e20();
    param_1[1] = (long)puVar2;
    param_1[2] = (ulong)plVar9 | 0x8000000000000000;
    *param_1 = (long)plVar3;
  }
code_r0x000107c610b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)(plVar3,puVar6,puVar2);
  auVar18._8_8_ = puVar6;
  auVar18._0_8_ = plVar3;
  return auVar18;
}



/* Entry: 10aaed8e0; end: 10aaede5b;  */

void FUN_10aaed8e0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,long *param_6)

{
  long *plVar1;
  long *plVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  ppuVar3 = &puStack_70;
  plVar1 = param_6;
  (**(code **)(*param_6 + 0x58))(param_6,&PTR_s_opaque_110c44988,0);
  if ((int)plVar1 == 0) {
    ppuVar4 = &PTR_DAT_110c449a8;
    plVar1 = param_6;
    (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110c449a8,*(undefined1 *)(param_5 + 0x28));
    puStack_70 = &UNK_10f68e8d6;
    uStack_68 = 0x12;
    if (0x10 < ((uint)plVar1 & 0xff)) {
LAB_10aaedc04:
      FUN_10a0edfc4();
      (**(code **)(*ppuVar4 + 0x40))
                (ppuVar4,&PTR_DAT_110c449a8,*(undefined1 *)((long)ppuVar3 + 0x28));
      if (*(char *)((long)ppuVar3 + 0x28) == '\x0f') {
        (**(code **)(*ppuVar4 + 0x18))(ppuVar4,&PTR_DAT_110c449c8);
        puStack_e0 = &UNK_10f68f318;
        uStack_d8 = 10;
        (**(code **)(*ppuVar4 + 0x30))(ppuVar4,&PTR_DAT_110c45af8,&puStack_e0);
        (**(code **)(*ppuVar4 + 0x70))
                  (ppuVar4,&PTR_DAT_110c449e8,*(undefined1 *)((long)ppuVar3 + 0x29));
        (**(code **)(*ppuVar4 + 0x70))
                  (ppuVar4,&PTR_DAT_110c44a08,*(undefined1 *)((long)ppuVar3 + 0x2a));
        (**(code **)(*ppuVar4 + 0x90))
                  (ppuVar4,&PTR_DAT_110c44a28,(undefined1 *)((long)ppuVar3 + 0x2c));
        (**(code **)(*ppuVar4 + 0x18))(ppuVar4,&PTR_DAT_110c44a48);
        lVar8 = 0x1c;
        puVar6 = (undefined1 *)((long)ppuVar3 + 0x42);
        do {
          (**(code **)(*ppuVar4 + 0x10))(ppuVar4);
          (**(code **)(*ppuVar4 + 0x70))(ppuVar4,&PTR_DAT_110c44a68,puVar6[-6]);
          (**(code **)(*ppuVar4 + 0x40))(ppuVar4,&PTR_DAT_110c44a88,puVar6[-5]);
          (**(code **)(*ppuVar4 + 0x40))(ppuVar4,&PTR_DAT_110c44aa8,puVar6[-4]);
          (**(code **)(*ppuVar4 + 0x40))(ppuVar4,&PTR_DAT_110c44ac8,puVar6[-3]);
          (**(code **)(*ppuVar4 + 0x40))(ppuVar4,&PTR_DAT_110c44ae8,puVar6[-2]);
          (**(code **)(*ppuVar4 + 0x40))(ppuVar4,&PTR_DAT_110c44b08,puVar6[-1]);
          (**(code **)(*ppuVar4 + 0x40))(ppuVar4,&PTR_DAT_110c44b28,*puVar6);
          (**(code **)(*ppuVar4 + 0x20))(ppuVar4);
          lVar8 = lVar8 + -7;
          puVar6 = puVar6 + 7;
        } while (lVar8 != 0);
        (**(code **)(*ppuVar4 + 0x20))(ppuVar4);
        (**(code **)(*ppuVar4 + 0x20))(ppuVar4);
      }
      return;
    }
    lVar8 = (ulong)((uint)plVar1 & 0x1f) * 0x30;
    uVar10 = *(undefined8 *)(&UNK_10e4f4698 + lVar8);
    *(undefined8 *)(param_5 + 0x30) = *(undefined8 *)(&UNK_10e4f46a0 + lVar8);
    *(undefined8 *)(param_5 + 0x28) = uVar10;
    uVar10 = *(undefined8 *)(&UNK_10e4f46a8 + lVar8);
    *(undefined8 *)(param_5 + 0x40) = *(undefined8 *)(&UNK_10e4f46b0 + lVar8);
    *(undefined8 *)(param_5 + 0x38) = uVar10;
    uVar10 = *(undefined8 *)(&UNK_10e4f46b8 + lVar8);
    *(undefined8 *)(param_5 + 0x50) = *(undefined8 *)(&UNK_10e4f46c0 + lVar8);
    *(undefined8 *)(param_5 + 0x48) = uVar10;
    if (*(char *)(param_5 + 0x28) == '\x0f') {
      (**(code **)(*param_6 + 0x210))(param_6,&PTR_DAT_110c449c8);
      uVar9 = (undefined4)uVar10;
      plVar1 = param_6;
      (**(code **)(*param_6 + 0x58))(param_6,&PTR_DAT_110c449e8,0);
      *(char *)(param_5 + 0x29) = (char)plVar1;
      plVar1 = param_6;
      (**(code **)(*param_6 + 0x58))(param_6,&PTR_DAT_110c44a08,0);
      *(char *)(param_5 + 0x2a) = (char)plVar1;
      puStack_70 = (undefined *)0x0;
      uStack_68 = 0;
      (**(code **)(*param_6 + 0x110))(param_6,&PTR_DAT_110c44a28,&puStack_70);
      *(undefined4 *)(param_5 + 0x2c) = uVar9;
      *(undefined4 *)(param_5 + 0x30) = param_2;
      *(undefined4 *)(param_5 + 0x34) = param_3;
      *(undefined4 *)(param_5 + 0x38) = param_4;
      ppuVar4 = &PTR_DAT_110c44a48;
      (**(code **)(*param_6 + 0x210))(param_6);
      plVar1 = param_6;
      (**(code **)(*param_6 + 0x208))();
      puStack_70 = &UNK_10f68e9d8;
      uStack_68 = 0x5a;
      if (4 < (uint)plVar1) goto LAB_10aaedc04;
      uVar5 = 0;
      puVar7 = (undefined4 *)(param_5 + 0x3c);
      do {
        if (uVar5 < ((ulong)plVar1 & 0xffffffff)) {
          (**(code **)(*param_6 + 0x218))(param_6,uVar5);
          plVar2 = param_6;
          (**(code **)(*param_6 + 0x58))(param_6,&PTR_DAT_110c44a68,0);
          *(char *)puVar7 = (char)plVar2;
          plVar2 = param_6;
          (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110c44a88,0);
          *(char *)((long)puVar7 + 1) = (char)plVar2;
          plVar2 = param_6;
          (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110c44aa8,0);
          *(char *)((long)puVar7 + 2) = (char)plVar2;
          plVar2 = param_6;
          (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110c44ac8,0);
          *(char *)((long)puVar7 + 3) = (char)plVar2;
          plVar2 = param_6;
          (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110c44ae8,0);
          *(char *)(puVar7 + 1) = (char)plVar2;
          plVar2 = param_6;
          (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110c44b08,0);
          *(char *)((long)puVar7 + 5) = (char)plVar2;
          plVar2 = param_6;
          (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110c44b28,0);
          *(char *)((long)puVar7 + 6) = (char)plVar2;
          (**(code **)(*param_6 + 0x220))(param_6);
        }
        else {
          *(undefined4 *)((long)puVar7 + 3) = 0;
          *puVar7 = 0;
        }
        uVar5 = uVar5 + 1;
        puVar7 = (undefined4 *)((long)puVar7 + 7);
      } while (uVar5 != 4);
      (**(code **)(*param_6 + 0x220))(param_6);
      (**(code **)(*param_6 + 0x220))(param_6);
    }
  }
  else {
    *(undefined8 *)(param_5 + 0x30) = 0;
    *(undefined8 *)(param_5 + 0x28) = 6;
    *(undefined8 *)(param_5 + 0x40) = 0;
    *(undefined8 *)(param_5 + 0x38) = 0;
    *(undefined8 *)(param_5 + 0x50) = 0;
    *(undefined8 *)(param_5 + 0x48) = 0;
  }
  return;
}



/* Entry: 10aaede5c; end: 10aaedf2b;  */

/* WARNING: Possible PIC construction at 0x00010aaede78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010aaede7c) */
/* WARNING: Removing unreachable block (ram,0x00010aaede80) */
/* WARNING: Removing unreachable block (ram,0x00010aaedec4) */
/* WARNING: Removing unreachable block (ram,0x00010aaedeb0) */
/* WARNING: Removing unreachable block (ram,0x00010aaedeb4) */

bool FUN_10aaede5c(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  cVar1 = *(char *)(param_1 + 0x28);
  if ((cVar1 != '\x0f') && ((bRam000000011330a9e8 >> 1 & 1) != 0)) {
    func_0x00010ae06f08(1,2,&UNK_10f68ea6a,&UNK_10f68eaa0,0x237,&UNK_10f68eaef,in_x6,in_x7,param_1,
                        param_2,&stack0xfffffffffffffff0,0x10aaede7c);
  }
  return cVar1 == '\x0f';
}



/* Entry: 10aaedf2c; end: 10aaedf83;  */

void FUN_10aaedf2c(long param_1,ulong param_2,undefined1 param_3)

{
  code *pcVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x28);
  func_0x00010aaedecc();
  if (uVar2 != 0) {
    FUN_10aaedf84(param_2);
    if (3 < (uint)param_2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10aaedf84);
      (*pcVar1)();
    }
    *(undefined1 *)((param_1 - (param_2 & 0xffffffff)) + (param_2 & 0xffffffff) * 8 + 0x3c) =
         param_3;
  }
  return;
}



/* Entry: 10aaedf84; end: 10aaedff7;  */

void FUN_10aaedf84(uint param_1,undefined8 param_2,undefined1 param_3)

{
  code *pcVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined **ppuVar5;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  ppuVar5 = &puStack_30;
  lVar3 = 0;
  FUN_10a2421c8();
  plVar4 = *(long **)(lVar3 + 0x228);
  (**(code **)(*plVar4 + 0x68))();
  puStack_30 = &UNK_10f68ea33;
  uStack_28 = 0x36;
  if ((*(byte *)((long)plVar4 + 0x82) & 1) != 0) {
    puStack_30 = &UNK_10f68f360;
    uStack_28 = 0x42;
    if (param_1 < 4) {
      return;
    }
  }
  FUN_10a0edfc4();
  uVar2 = (uint)*(byte *)((long)ppuVar5 + 0x28);
  func_0x00010aaedecc();
  if (uVar2 != 0) {
    FUN_10aaedf84(param_2);
    if (3 < (uint)param_2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10aaee054);
      (*pcVar1)();
    }
    *(undefined1 *)((long)ppuVar5 + (ulong)((uint)param_2 * 7) + 0x3d) = param_3;
  }
  return;
}



/* Entry: 10aaedff8; end: 10aaee21f;  */

void FUN_10aaedff8(long param_1,undefined8 param_2,undefined1 param_3)

{
  code *pcVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x28);
  func_0x00010aaedecc();
  if (uVar2 != 0) {
    FUN_10aaedf84(param_2);
    if (3 < (uint)param_2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10aaee054);
      (*pcVar1)();
    }
    *(undefined1 *)(param_1 + (ulong)((uint)param_2 * 7) + 0x3d) = param_3;
  }
  return;
}



/* Entry: 10aaee220; end: 10aaee297;  */

undefined1  [16] FUN_10aaee220(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x11;
  auVar1._0_8_ = &UNK_10f68f3a3;
  return auVar1;
}



/* Entry: 10aaee298; end: 10aaee2eb;  */

void FUN_10aaee298(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000008;
  uStack_48 = 0xffffffff;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0x94;
  uStack_18 = 0xffffffff;
  FUN_10aaee2ec(param_1,&uStack_58);
  FUN_10ab00358();
  return;
}



/* Entry: 10aaee2ec; end: 10aaee3c3;  */

/* WARNING: Removing unreachable block (ram,0x00010aaee384) */

undefined1  [16] FUN_10aaee2ec(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f68f3a3,0x11);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10ab0025c(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10aaee3c4; end: 10aaee44b;  */

undefined8 * FUN_10aaee3c4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_1;
  uVar6 = param_2;
  func_0x00010a0fda30();
  FUN_10aa7093c(param_1,param_2,puVar4,uVar6);
  *param_1 = &PTR_FUN_110c44b58;
  param_1[2] = &PTR_DAT_110c44bf8;
  param_1[7] = &PTR_FUN_110c44c50;
  lVar5 = param_3[1];
  uVar6 = *param_3;
  param_1[0x1d] = param_3[1];
  param_1[0x1c] = uVar6;
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
  return param_1;
}



/* Entry: 10aaee44c; end: 10aaee48b;  */

void FUN_10aaee44c(undefined8 *param_1,long param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10a6eb8d4(&uStack_30,*(undefined8 *)(param_2 + 0x50),param_2 + 0xe0);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  return;
}



/* Entry: 10aaee48c; end: 10aaee59b;  */

void FUN_10aaee48c(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long *plStack_30;
  long *plStack_28;
  
  func_0x00010aa70acc();
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c44c60);
  if ((int)plVar4 != 0) {
    (**(code **)(*param_2 + 0xa0))(&lStack_48,param_2,&PTR_DAT_110c44c60);
    plVar4 = (long *)0x30;
    __Znwm();
    plVar4[2] = 0;
    *plVar4 = (long)&PTR_DAT_110995158;
    plVar4[1] = 0;
    plStack_30 = plVar4 + 3;
    plVar4[4] = lStack_40;
    plVar4[3] = lStack_48;
    plVar4[5] = lStack_38;
    lStack_48 = 0;
    lStack_40 = 0;
    lStack_38 = 0;
    plStack_28 = plVar4;
    FUN_10aaee59c(param_1 + 0xe0,&plStack_30);
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
    if (lStack_38 < 0) {
      __ZdlPv(lStack_48);
    }
  }
  return;
}



/* Entry: 10aaee59c; end: 10aaee643;  */

undefined8 * FUN_10aaee59c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10aaee644; end: 10aaee6cf;  */

undefined8 FUN_10aaee644(void)

{
  return 1;
}



/* Entry: 10aaee6d0; end: 10aaee7af;  */

void FUN_10aaee6d0(undefined8 param_1)

{
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puStack_a8 = (undefined *)0x0;
  puStack_a0 = (undefined1 *)0xffffffff00000001;
  uStack_98 = CONCAT44(uStack_98._4_4_,0xffffffff);
  puStack_90 = &UNK_10f68e3e8;
  uStack_88 = 0;
  puStack_80 = &UNK_10f68e3e8;
  uStack_78 = 0;
  uStack_70 = 0xad;
  uStack_68 = CONCAT44(uStack_68._4_4_,0xffffffff);
  FUN_10aaee7b0(param_1,&puStack_a8);
  puStack_b8 = &DAT_10f68eb93;
  puStack_c0 = &DAT_10f68eb8b;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_b0 = &DAT_10f68eba5;
  puStack_a8 = &UNK_10f68eb7d;
  uStack_98 = 3;
  puStack_80 = &UNK_10f68e3e8;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0xad;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  puStack_a0 = (undefined1 *)&puStack_c0;
  FUN_10ab00510();
  FUN_10ab009ec(param_1);
  return;
}



/* Entry: 10aaee7b0; end: 10aaee887;  */

/* WARNING: Removing unreachable block (ram,0x00010aaee848) */

undefined1  [16] FUN_10aaee7b0(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f68f3bc,0x18);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10ab00414(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10aaee888; end: 10aaee9ef;  */

undefined8 * FUN_10aaee888(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  
  puVar4 = param_1;
  uVar5 = param_2;
  func_0x00010a0fda30();
  FUN_10aa7093c(param_1,param_2,puVar4,uVar5);
  *param_1 = &PTR_DAT_110c44ca8;
  param_1[2] = &PTR_DAT_110c44d50;
  param_1[7] = &PTR_DAT_110c44da8;
  param_1[0x1c] = param_2;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  puVar4 = (undefined8 *)0x58;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110bf7fc8;
  puVar4[8] = 0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[5] = 0;
  *(undefined8 *)((long)puVar4 + 0x4d) = 0;
  *(undefined8 *)((long)puVar4 + 0x45) = 0;
  puVar4[4] = 0;
  puVar4[3] = 0;
  param_1[0x22] = puVar4 + 3;
  param_1[0x23] = puVar4;
  FUN_10a5cf1fc(param_1 + 0x22);
  lVar6 = *(long *)(param_1[0x1c] + 0x9d0);
  plVar7 = *(long **)(param_1[0x1c] + 0x9d8);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (lVar6 != 0) {
    *(undefined1 *)(*(long *)(lVar6 + 0x18) + 0x29) = 0;
  }
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  FUN_10a5ae998(param_1[0x22],&PTR_DAT_110c45900,param_1[0x1c],param_1);
  return param_1;
}



/* Entry: 10aaee9f0; end: 10aaeeadf;  */

undefined8 * FUN_10aaee9f0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  FUN_10aa7093c();
  *puVar1 = &PTR_DAT_110c44ca8;
  puVar1[2] = &PTR_DAT_110c44d50;
  puVar1[7] = &PTR_DAT_110c44da8;
  puVar1[0x1c] = param_2;
  puVar1[0x1e] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x20] = 0;
  puVar1[0x1f] = 0;
  *(undefined1 *)(puVar1 + 0x21) = 0;
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110bf7fc8;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  *(undefined8 *)((long)puVar1 + 0x4d) = 0;
  *(undefined8 *)((long)puVar1 + 0x45) = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  param_1[0x22] = puVar1 + 3;
  param_1[0x23] = puVar1;
  FUN_10a5cf1fc(param_1 + 0x22);
  FUN_10a5ae998(param_1[0x22],&PTR_DAT_110c45900,param_1[0x1c],param_1);
  return param_1;
}



/* Entry: 10aaeeae0; end: 10aaef10b;  */

/* WARNING: Removing unreachable block (ram,0x00010aaeecd4) */
/* WARNING: Removing unreachable block (ram,0x00010aaeec38) */

undefined *******
FUN_10aaeeae0(undefined8 ******param_1,undefined *******param_2,undefined *******param_3,
             undefined8 ******param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined ****ppppuVar4;
  undefined *******pppppppuVar5;
  undefined8 ****ppppuVar6;
  undefined *******pppppppuVar7;
  undefined *******pppppppuVar8;
  undefined *******pppppppuVar9;
  undefined *******pppppppuVar10;
  undefined ******ppppppuVar11;
  undefined ****ppppuVar12;
  undefined *****pppppuVar13;
  undefined8 ******ppppppuVar14;
  undefined8 ******ppppppuVar15;
  undefined *******unaff_x24;
  undefined ******ppppppuVar16;
  undefined ******ppppppuVar17;
  undefined *****pppppuStack_208;
  undefined ******ppppppuStack_200;
  undefined *****pppppuStack_1f8;
  undefined ******ppppppuStack_1f0;
  undefined *****pppppuStack_1e8;
  undefined *****pppppuStack_1e0;
  undefined *****pppppuStack_1d8;
  undefined *****pppppuStack_1d0;
  undefined *****pppppuStack_1c8;
  undefined ******ppppppuStack_1c0;
  long lStack_1a8;
  undefined8 *****pppppuStack_1a0;
  undefined ******ppppppuStack_198;
  undefined ******ppppppuStack_190;
  undefined ******ppppppuStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined8 *****pppppuStack_170;
  undefined8 uStack_168;
  undefined ******ppppppuStack_160;
  undefined8 *****pppppuStack_158;
  undefined *****pppppuStack_150;
  undefined ******ppppppuStack_148;
  undefined ******ppppppuStack_140;
  undefined ******ppppppuStack_138;
  undefined ****ppppuStack_130;
  undefined ****ppppuStack_128;
  undefined ****ppppuStack_118;
  undefined ******ppppppuStack_110;
  undefined ******ppppppuStack_108;
  undefined ******ppppppuStack_100;
  undefined ******ppppppuStack_f8;
  undefined ******ppppppuStack_f0;
  undefined ******ppppppuStack_e8;
  undefined ******ppppppuStack_e0;
  undefined ******ppppppuStack_d8;
  undefined **ppuStack_d0;
  undefined8 *****pppppuStack_c8;
  undefined8 uStack_c0;
  undefined ******ppppppuStack_b8;
  undefined *****pppppuStack_98;
  undefined ******ppppppuStack_90;
  undefined8 *****pppppuStack_88;
  undefined *****pppppuStack_80;
  undefined ******ppppppuStack_78;
  long lStack_58;
  
  ppppppuVar15 = &pppppuStack_170;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppuVar5 = (undefined *******)param_1[10];
  pppppppuVar10 = (undefined *******)0x4;
  FUN_10a3df7b0();
  if (((ulong)pppppppuVar5 & 1) == 0) {
    pppppppuVar5 = (undefined *******)&UNK_10f68ebad;
    FUN_10a00946c();
  }
  else {
    if (*param_2 == (undefined ******)0x0) {
      param_3 = (undefined *******)*param_4;
      pppppppuVar7 = (undefined *******)param_4[1];
      if (pppppppuVar7 != (undefined *******)0x0) {
        pppppppuVar9 = pppppppuVar7 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(pppppppuVar9,0x10);
          if (bVar2) {
            *pppppppuVar9 = (undefined ******)((long)*pppppppuVar9 + 1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      ppppppuStack_e8 = (undefined ******)param_3;
      ppppppuStack_e0 = (undefined ******)pppppppuVar7;
      if (param_3 != (undefined *******)0x0) {
        func_0x000107c2b054(&pppppuStack_98,&DAT_10f68ebd8);
        func_0x000107c2b054(&ppppppuStack_d8,&UNK_10f68ebdc);
        pppppppuVar10 = (undefined *******)&pppppuStack_98;
        pppppppuVar5 = param_3;
        FUN_10a7576b4(param_3,pppppppuVar10,&ppppppuStack_d8);
        if ((long)pppppuStack_c8 < 0) {
          pppppppuVar5 = (undefined *******)ppppppuStack_d8;
          __ZdlPv();
        }
      }
      if (pppppppuVar7 != (undefined *******)0x0) {
        pppppppuVar9 = pppppppuVar7 + 1;
        do {
          ppppppuVar11 = *pppppppuVar9;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(pppppppuVar9,0x10);
          if (bVar2) {
            *pppppppuVar9 = (undefined ******)((long)ppppppuVar11 + -1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        goto LAB_10aaeefc8;
      }
    }
    else {
      pppppppuVar7 = (undefined *******)(param_1 + 0x1f);
      if (*pppppppuVar7 == (undefined ******)0x0) {
        if (((ulong)param_1[0x21] & 1) == 0) {
          ppppuStack_118 = (undefined ****)(*param_2)[3];
          ppppppuStack_110 = (undefined ******)(*param_2)[4];
          if ((undefined *******)ppppppuStack_110 != (undefined *******)0x0) {
            pppppppuVar5 = (undefined *******)(ppppppuStack_110 + 1);
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(pppppppuVar5,0x10);
              if (bVar2) {
                *pppppppuVar5 = (undefined ******)((long)*pppppppuVar5 + 1);
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          if ((undefined *****)ppppuStack_118 == (undefined *****)0x0) {
            *(undefined1 *)(param_1 + 0x21) = 1;
            ppppuVar6 = param_1[0x1c][0x130];
            pppppuStack_150 = (undefined *****)*param_3;
            ppppppuStack_148 = param_3[1];
            if ((undefined *******)ppppppuStack_148 != (undefined *******)0x0) {
              pppppppuVar5 = (undefined *******)(ppppppuStack_148 + 1);
              do {
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(pppppppuVar5,0x10);
                if (bVar2) {
                  *pppppppuVar5 = (undefined ******)((long)*pppppppuVar5 + 1);
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
            uStack_168 = *param_4;
            pppppppuVar10 = (undefined *******)param_4[1];
            if (pppppppuVar10 != (undefined *******)0x0) {
              pppppppuVar5 = pppppppuVar10 + 1;
              do {
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(pppppppuVar5,0x10);
                if (bVar2) {
                  *pppppppuVar5 = (undefined ******)((long)*pppppppuVar5 + 1);
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
            pppppuStack_98 = (undefined *****)FUN_10ab00f0c;
            ppppppuStack_90 = (undefined ******)&PTR_FUN_110c45d30;
            if ((undefined *******)ppppppuStack_148 != (undefined *******)0x0) {
              pppppppuVar5 = (undefined *******)(ppppppuStack_148 + 1);
              do {
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(pppppppuVar5,0x10);
                if (bVar2) {
                  *pppppppuVar5 = (undefined ******)((long)*pppppppuVar5 + 1);
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
            ppppppuStack_d8 = (undefined ******)FUN_10ab010e0;
            ppuStack_d0 = &PTR_FUN_110c45d50;
            if (pppppppuVar10 != (undefined *******)0x0) {
              pppppppuVar5 = pppppppuVar10 + 1;
              do {
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(pppppppuVar5,0x10);
                if (bVar2) {
                  *pppppppuVar5 = (undefined ******)((long)*pppppppuVar5 + 1);
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
            ppppppuVar14 = &pppppuStack_158;
            param_3 = (undefined *******)&pppppuStack_98;
            unaff_x24 = &ppppppuStack_d8;
            pppppppuVar7 = param_2;
            pppppuStack_170 = param_1;
            ppppppuStack_160 = (undefined ******)pppppppuVar10;
            pppppuStack_158 = param_1;
            pppppuStack_c8 = param_1;
            uStack_c0 = uStack_168;
            ppppppuStack_b8 = (undefined ******)pppppppuVar10;
            pppppuStack_88 = param_1;
            pppppuStack_80 = pppppuStack_150;
            ppppppuStack_78 = ppppppuStack_148;
            FUN_10a877e60(ppppuVar6,param_2,&pppppuStack_98,&ppppppuStack_d8);
            (*(code *)*ppuStack_d0)(&ppuStack_d0);
            pppppppuVar5 = &ppppppuStack_90;
            (*(code *)*ppppppuStack_90)();
            if (pppppppuVar10 != (undefined *******)0x0) {
              pppppppuVar9 = pppppppuVar10 + 1;
              do {
                ppppppuVar11 = *pppppppuVar9;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(pppppppuVar9,0x10);
                if (bVar2) {
                  *pppppppuVar9 = (undefined ******)((long)ppppppuVar11 + -1);
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
              if (ppppppuVar11 == (undefined ******)0x0) {
                (*(code *)(*pppppppuVar10)[2])(pppppppuVar10);
                __ZNSt3__119__shared_weak_count14__release_weakEv();
                pppppppuVar5 = pppppppuVar10;
              }
            }
            pppppppuVar10 = (undefined *******)ppppppuStack_148;
            param_4 = &pppppuStack_170;
            if ((undefined *******)ppppppuStack_148 != (undefined *******)0x0) {
              pppppppuVar9 = (undefined *******)(ppppppuStack_148 + 1);
              do {
                ppppppuVar11 = *pppppppuVar9;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(pppppppuVar9,0x10);
                if (bVar2) {
                  *pppppppuVar9 = (undefined ******)((long)ppppppuVar11 + -1);
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
              param_4 = &pppppuStack_170;
              if (ppppppuVar11 == (undefined ******)0x0) {
                (*(code *)(*ppppppuStack_148)[2])(ppppppuStack_148);
                goto LAB_10aaeefa8;
              }
            }
          }
          else {
            ppppppuVar11 = *param_2;
            ppppuStack_128 = (undefined ****)ppppppuVar11[10];
            ppppuStack_130 = (undefined ****)ppppppuVar11[9];
            if (ppppppuVar11[10] != (undefined *****)0x0) {
              pppppuVar13 = ppppppuVar11[10] + 1;
              do {
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(pppppuVar13,0x10);
                if (bVar2) {
                  *pppppuVar13 = (undefined ****)((long)*pppppuVar13 + 1);
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
            FUN_10a74f474(ppppuStack_118 + 0xc0,&ppppuStack_130);
            ppppuVar4 = ppppuStack_128;
            if ((undefined *****)ppppuStack_128 != (undefined *****)0x0) {
              pppppuVar13 = (undefined *****)(ppppuStack_128 + 1);
              do {
                ppppuVar12 = *pppppuVar13;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(pppppuVar13,0x10);
                if (bVar2) {
                  *pppppuVar13 = (undefined ****)((long)ppppuVar12 + -1);
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
              if (ppppuVar12 == (undefined ****)0x0) {
                (*(code *)(*ppppuStack_128)[2])(ppppuStack_128);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar4);
              }
            }
            FUN_10ab00d24(&pppppuStack_98,ppppuStack_118,ppppppuStack_110,0);
            FUN_10aaef350(pppppppuVar7,&pppppuStack_98);
            param_2 = (undefined *******)ppppppuStack_90;
            if ((undefined *******)ppppppuStack_90 != (undefined *******)0x0) {
              pppppppuVar5 = (undefined *******)(ppppppuStack_90 + 1);
              do {
                ppppppuVar11 = *pppppppuVar5;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(pppppppuVar5,0x10);
                if (bVar2) {
                  *pppppppuVar5 = (undefined ******)((long)ppppppuVar11 + -1);
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
              if (ppppppuVar11 == (undefined ******)0x0) {
                (*(code *)(*ppppppuStack_90)[2])(ppppppuStack_90);
                __ZNSt3__119__shared_weak_count14__release_weakEv(param_2);
              }
            }
            pppppppuVar5 = (undefined *******)*param_3;
            pppppppuVar10 = (undefined *******)param_3[1];
            if (pppppppuVar10 != (undefined *******)0x0) {
              pppppppuVar9 = pppppppuVar10 + 1;
              do {
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(pppppppuVar9,0x10);
                if (bVar2) {
                  *pppppppuVar9 = (undefined ******)((long)*pppppppuVar9 + 1);
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
            ppppppuStack_140 = (undefined ******)pppppppuVar5;
            ppppppuStack_138 = (undefined ******)pppppppuVar10;
            FUN_10aaef10c();
            param_3 = pppppppuVar10;
            ppppppuVar14 = param_1;
            if (pppppppuVar10 != (undefined *******)0x0) {
              pppppppuVar9 = pppppppuVar10 + 1;
              do {
                ppppppuVar11 = *pppppppuVar9;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(pppppppuVar9,0x10);
                if (bVar2) {
                  *pppppppuVar9 = (undefined ******)((long)ppppppuVar11 + -1);
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
              if (ppppppuVar11 == (undefined ******)0x0) {
                (*(code *)(*pppppppuVar10)[2])(pppppppuVar10);
                ppppppuVar15 = param_4;
LAB_10aaeefa8:
                __ZNSt3__119__shared_weak_count14__release_weakEv();
                pppppppuVar5 = pppppppuVar10;
                param_4 = ppppppuVar15;
              }
            }
          }
          pppppppuVar10 = pppppppuVar7;
          param_1 = ppppppuVar14;
          if ((undefined *******)ppppppuStack_110 != (undefined *******)0x0) {
            pppppppuVar9 = (undefined *******)(ppppppuStack_110 + 1);
            do {
              ppppppuVar11 = *pppppppuVar9;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(pppppppuVar9,0x10);
              if (bVar2) {
                *pppppppuVar9 = (undefined ******)((long)ppppppuVar11 + -1);
                cVar1 = ExclusiveMonitorsStatus();
              }
              pppppppuVar7 = (undefined *******)ppppppuStack_110;
            } while (cVar1 != '\0');
            goto LAB_10aaeefc8;
          }
        }
        else {
          param_3 = (undefined *******)*param_4;
          pppppppuVar7 = (undefined *******)param_4[1];
          if (pppppppuVar7 != (undefined *******)0x0) {
            pppppppuVar9 = pppppppuVar7 + 1;
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(pppppppuVar9,0x10);
              if (bVar2) {
                *pppppppuVar9 = (undefined ******)((long)*pppppppuVar9 + 1);
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          ppppppuStack_108 = (undefined ******)param_3;
          ppppppuStack_100 = (undefined ******)pppppppuVar7;
          if (param_3 != (undefined *******)0x0) {
            func_0x000107c2b054(&pppppuStack_98,&DAT_10f68ebd8);
            func_0x000107c2b054(&ppppppuStack_d8,&UNK_10f68ebee);
            pppppppuVar10 = (undefined *******)&pppppuStack_98;
            pppppppuVar5 = param_3;
            FUN_10a7576b4(param_3,pppppppuVar10,&ppppppuStack_d8);
            if ((long)pppppuStack_c8 < 0) {
              pppppppuVar5 = (undefined *******)ppppppuStack_d8;
              __ZdlPv();
            }
          }
          if (pppppppuVar7 != (undefined *******)0x0) {
            pppppppuVar9 = pppppppuVar7 + 1;
            do {
              ppppppuVar11 = *pppppppuVar9;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(pppppppuVar9,0x10);
              if (bVar2) {
                *pppppppuVar9 = (undefined ******)((long)ppppppuVar11 + -1);
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
LAB_10aaeefc8:
            if (ppppppuVar11 == (undefined ******)0x0) {
              (*(code *)(*pppppppuVar7)[2])(pppppppuVar7);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              pppppppuVar5 = pppppppuVar7;
            }
          }
        }
      }
      else {
        pppppppuVar5 = (undefined *******)*param_3;
        param_3 = (undefined *******)param_3[1];
        if (param_3 != (undefined *******)0x0) {
          pppppppuVar10 = param_3 + 1;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(pppppppuVar10,0x10);
            if (bVar2) {
              *pppppppuVar10 = (undefined ******)((long)*pppppppuVar10 + 1);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        ppppppuStack_f8 = (undefined ******)pppppppuVar5;
        ppppppuStack_f0 = (undefined ******)param_3;
        FUN_10aaef10c();
        pppppppuVar10 = pppppppuVar7;
        if (param_3 != (undefined *******)0x0) {
          pppppppuVar9 = param_3 + 1;
          do {
            ppppppuVar11 = *pppppppuVar9;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(pppppppuVar9,0x10);
            if (bVar2) {
              *pppppppuVar9 = (undefined ******)((long)ppppppuVar11 + -1);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (ppppppuVar11 == (undefined ******)0x0) {
            pppppppuVar5 = param_3;
            (*(code *)(*param_3)[2])();
            pppppppuVar10 = pppppppuVar7;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(param_3);
              return param_3;
            }
            goto LAB_10aaef024;
          }
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return pppppppuVar5;
    }
  }
LAB_10aaef024:
  ___stack_chk_fail();
  (*(code *)*ppuStack_d0)(unaff_x24 + 1);
  (*(code *)*ppppppuStack_90)(param_3 + 1);
  FUN_10a0803a0(param_4 + 1);
  FUN_10a72646c(param_1 + 1);
  FUN_10a5ca2e0(&ppppuStack_118);
  pppppppuVar8 = pppppppuVar5;
  __Unwind_Resume();
  pcStack_178 = FUN_10aaef10c;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppuVar9 = pppppppuVar8;
  pppppppuVar7 = pppppppuVar10;
  pppppuStack_1a0 = param_1;
  ppppppuStack_198 = (undefined ******)param_2;
  ppppppuStack_190 = (undefined ******)param_3;
  ppppppuStack_188 = (undefined ******)pppppppuVar5;
  puStack_180 = &stack0xfffffffffffffff0;
  if (pppppppuVar8 != (undefined *******)0x0) {
    param_3 = pppppppuVar8;
    if (*(char *)(pppppppuVar8 + 8) == '\x01') {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
                    /* WARNING: Could not recover jumptable at 0x00010aaef1c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*pppppppuVar8)(pppppppuVar10,pppppppuVar8);
        return pppppppuVar10;
      }
      goto LAB_10aaef304;
    }
    if (*(char *)(pppppppuVar8 + 8) == '\x02') {
      param_2 = pppppppuVar8;
      pppppppuVar5 = pppppppuVar10;
      FUN_10a688b40();
      if (param_2 == (undefined *******)0x0) {
        pppppppuVar7 = (undefined *******)0x0;
        pppppppuVar9 = (undefined *******)0x0;
        if (pppppppuVar5 != (undefined *******)0x0) {
          pppppuStack_1d0 = (undefined *****)pppppppuVar8[1];
          pppppuStack_1d8 = (undefined *****)*pppppppuVar8;
          if (pppppppuVar8[1] != (undefined ******)0x0) {
            ppppppuVar11 = pppppppuVar8[1] + 1;
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar11,0x10);
              if (bVar2) {
                *ppppppuVar11 = (undefined *****)((long)*ppppppuVar11 + 1);
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          pppppuStack_1f8 = (undefined *****)*pppppppuVar10;
          pppppppuVar5 = (undefined *******)pppppppuVar10[1];
          if (pppppppuVar5 != (undefined *******)0x0) {
            pppppppuVar10 = pppppppuVar5 + 1;
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(pppppppuVar10,0x10);
              if (bVar2) {
                *pppppppuVar10 = (undefined ******)((long)*pppppppuVar10 + 1);
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          pppppuStack_1e8 = (undefined *****)FUN_10ab00cac;
          pppppuStack_1e0 = (undefined *****)&PTR_FUN_110c45cc8;
          pppppuStack_208 = (undefined *****)0x0;
          ppppppuStack_200 = (undefined ******)0x0;
          if (pppppppuVar5 != (undefined *******)0x0) {
            pppppppuVar10 = pppppppuVar5 + 1;
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(pppppppuVar10,0x10);
              if (bVar2) {
                *pppppppuVar10 = (undefined ******)((long)*pppppppuVar10 + 1);
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          param_3 = (undefined *******)&pppppuStack_208;
          param_2 = (undefined *******)&pppppuStack_1e8;
          pppppppuVar7 = (undefined *******)&pppppuStack_1e8;
          ppppppuStack_1f0 = (undefined ******)pppppppuVar5;
          pppppuStack_1c8 = pppppuStack_1f8;
          ppppppuStack_1c0 = (undefined ******)pppppppuVar5;
          FUN_10a4634ec();
          pppppppuVar9 = (undefined *******)&pppppuStack_1e0;
          (*(code *)*pppppuStack_1e0)();
          if (pppppppuVar5 != (undefined *******)0x0) {
            pppppppuVar10 = pppppppuVar5 + 1;
            do {
              ppppppuVar11 = *pppppppuVar10;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(pppppppuVar10,0x10);
              if (bVar2) {
                *pppppppuVar10 = (undefined ******)((long)ppppppuVar11 + -1);
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (ppppppuVar11 == (undefined ******)0x0) {
              (*(code *)(*pppppppuVar5)[2])(pppppppuVar5);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              pppppppuVar9 = pppppppuVar5;
            }
          }
          pppppppuVar5 = (undefined *******)ppppppuStack_200;
          if ((undefined *******)ppppppuStack_200 != (undefined *******)0x0) {
            pppppppuVar10 = (undefined *******)(ppppppuStack_200 + 1);
            do {
              ppppppuVar11 = *pppppppuVar10;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(pppppppuVar10,0x10);
              if (bVar2) {
                *pppppppuVar10 = (undefined ******)((long)ppppppuVar11 + -1);
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (ppppppuVar11 == (undefined ******)0x0) {
              (*(code *)(*ppppppuStack_200)[2])(ppppppuStack_200);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              pppppppuVar9 = pppppppuVar5;
            }
          }
        }
      }
      else {
        *param_2 = (undefined ******)CONCAT44((int)((ulong)*param_2 >> 0x20) + 1,(int)*param_2 + 1);
        pppppppuVar9 = (undefined *******)*pppppppuVar8;
        FUN_10ab00aa8();
        iVar3 = *(int *)((long)param_2 + 4) + -1;
        *(int *)((long)param_2 + 4) = iVar3;
        pppppppuVar7 = pppppppuVar10;
        if (iVar3 == 0) {
          *(undefined4 *)param_2 = 0;
        }
      }
    }
  }
  pppppppuVar8 = pppppppuVar9;
  pppppppuVar10 = pppppppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return pppppppuVar9;
  }
LAB_10aaef304:
  ___stack_chk_fail();
  (*(code *)*pppppuStack_1e0)(param_2 + 1);
  func_0x00010a725e70(param_3 + 2);
  func_0x00010a004dac(&pppppuStack_208);
  __Unwind_Resume();
  ppppppuVar17 = pppppppuVar10[1];
  ppppppuVar16 = *pppppppuVar10;
  *pppppppuVar10 = (undefined ******)0x0;
  pppppppuVar10[1] = (undefined ******)0x0;
  ppppppuVar11 = pppppppuVar8[1];
  pppppppuVar8[1] = ppppppuVar17;
  *pppppppuVar8 = ppppppuVar16;
  if (ppppppuVar11 != (undefined ******)0x0) {
    ppppppuVar16 = ppppppuVar11 + 1;
    do {
      pppppuVar13 = *ppppppuVar16;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar16,0x10);
      if (bVar2) {
        *ppppppuVar16 = (undefined *****)((long)pppppuVar13 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (pppppuVar13 == (undefined *****)0x0) {
      (*(code *)(*ppppppuVar11)[2])(ppppppuVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar11);
    }
  }
  return pppppppuVar8;
}



/* Entry: 10aaef10c; end: 10aaef34f;  */

undefined *** FUN_10aaef10c(undefined ***param_1,undefined ***param_2)

{
  undefined ***pppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined *puVar8;
  undefined ***unaff_x20;
  undefined **ppuVar9;
  undefined ***unaff_x21;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuStack_98;
  undefined ***pppuStack_90;
  undefined **ppuStack_88;
  undefined ***pppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined ***pppuStack_50;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar5 = param_1;
  pppuVar7 = param_2;
  if (param_1 != (undefined ***)0x0) {
    unaff_x20 = param_1;
    if (*(char *)(param_1 + 8) == '\x01') {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010aaef1c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*param_1)(param_2,param_1);
        return param_2;
      }
      goto LAB_10aaef304;
    }
    if (*(char *)(param_1 + 8) == '\x02') {
      unaff_x21 = param_1;
      pppuVar6 = param_2;
      FUN_10a688b40();
      if (unaff_x21 == (undefined ***)0x0) {
        pppuVar7 = (undefined ***)0x0;
        pppuVar5 = (undefined ***)0x0;
        if (pppuVar6 != (undefined ***)0x0) {
          ppuStack_60 = param_1[1];
          ppuStack_68 = *param_1;
          if (param_1[1] != (undefined **)0x0) {
            ppuVar9 = param_1[1] + 1;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
              if (bVar3) {
                *ppuVar9 = *ppuVar9 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          ppuStack_88 = *param_2;
          pppuVar6 = (undefined ***)param_2[1];
          if (pppuVar6 != (undefined ***)0x0) {
            pppuVar7 = pppuVar6 + 1;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
              if (bVar3) {
                *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          ppuStack_78 = (undefined **)FUN_10ab00cac;
          ppuStack_70 = &PTR_FUN_110c45cc8;
          ppuStack_98 = (undefined **)0x0;
          pppuStack_90 = (undefined ***)0x0;
          if (pppuVar6 != (undefined ***)0x0) {
            pppuVar7 = pppuVar6 + 1;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
              if (bVar3) {
                *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          unaff_x20 = &ppuStack_98;
          unaff_x21 = &ppuStack_78;
          pppuVar7 = &ppuStack_78;
          pppuStack_80 = pppuVar6;
          ppuStack_58 = ppuStack_88;
          pppuStack_50 = pppuVar6;
          FUN_10a4634ec();
          pppuVar5 = &ppuStack_70;
          (*(code *)*ppuStack_70)();
          if (pppuVar6 != (undefined ***)0x0) {
            pppuVar1 = pppuVar6 + 1;
            do {
              ppuVar9 = *pppuVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
              if (bVar3) {
                *pppuVar1 = (undefined **)((long)ppuVar9 + -1);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (ppuVar9 == (undefined **)0x0) {
              (*(code *)(*pppuVar6)[2])(pppuVar6);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              pppuVar5 = pppuVar6;
            }
          }
          pppuVar6 = pppuStack_90;
          if (pppuStack_90 != (undefined ***)0x0) {
            pppuVar1 = pppuStack_90 + 1;
            do {
              ppuVar9 = *pppuVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
              if (bVar3) {
                *pppuVar1 = (undefined **)((long)ppuVar9 + -1);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (ppuVar9 == (undefined **)0x0) {
              (*(code *)(*pppuStack_90)[2])(pppuStack_90);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              pppuVar5 = pppuVar6;
            }
          }
        }
      }
      else {
        *unaff_x21 = (undefined **)
                     CONCAT44((int)((ulong)*unaff_x21 >> 0x20) + 1,(int)*unaff_x21 + 1);
        pppuVar5 = (undefined ***)*param_1;
        FUN_10ab00aa8();
        iVar4 = *(int *)((long)unaff_x21 + 4) + -1;
        *(int *)((long)unaff_x21 + 4) = iVar4;
        pppuVar7 = param_2;
        if (iVar4 == 0) {
          *(undefined4 *)unaff_x21 = 0;
        }
      }
    }
  }
  param_1 = pppuVar5;
  param_2 = pppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return pppuVar5;
  }
LAB_10aaef304:
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(unaff_x21 + 1);
  func_0x00010a725e70(unaff_x20 + 2);
  func_0x00010a004dac(&ppuStack_98);
  __Unwind_Resume();
  ppuVar11 = param_2[1];
  ppuVar10 = *param_2;
  *param_2 = (undefined **)0x0;
  param_2[1] = (undefined **)0x0;
  ppuVar9 = param_1[1];
  param_1[1] = ppuVar11;
  *param_1 = ppuVar10;
  if (ppuVar9 != (undefined **)0x0) {
    ppuVar10 = ppuVar9 + 1;
    do {
      puVar8 = *ppuVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
      if (bVar3) {
        *ppuVar10 = puVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar8 == (undefined *)0x0) {
      (**(code **)(*ppuVar9 + 0x10))(ppuVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar9);
    }
  }
  return param_1;
}



/* Entry: 10aaef350; end: 10aaef3b3;  */

undefined8 * FUN_10aaef350(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10aaef3b4; end: 10aaef56f;  */

void FUN_10aaef3b4(long param_1,long *param_2)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (**(code **)(*param_2 + 0xa8))(&uStack_38,param_2,&PTR_DAT_110c3fbe8,&UNK_10f68c0c1,0);
  if (*(char *)(param_1 + 0x6f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x58));
  }
  *(undefined8 *)(param_1 + 0x60) = uStack_30;
  *(undefined8 *)(param_1 + 0x58) = uStack_38;
  *(undefined8 *)(param_1 + 0x68) = uStack_28;
  return;
}



/* Entry: 10aaef570; end: 10aaef637;  */

void FUN_10aaef570(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_10a003e74(param_1,&UNK_10f68ec1b,0x13);
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f68e3e8;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f68e3e8;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  uVar1 = param_1;
  FUN_10aaef638(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68ec2f;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000019;
  puStack_70 = &UNK_10f68e3e8;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10ab012fc();
  FUN_10ab01458(uVar1);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10aaef638; end: 10aaef70f;  */

/* WARNING: Removing unreachable block (ram,0x00010aaef6d0) */

undefined1  [16] FUN_10aaef638(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f68f3d5,0xb);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10ab01200(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10aaef710; end: 10aaef83b;  */

void FUN_10aaef710(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_10a003e74(param_1,&UNK_10f68ec1b,0x13);
  puStack_a8 = (undefined *)0x0;
  uStack_a0 = 0xffffffff00000001;
  uStack_98 = CONCAT44(uStack_98._4_4_,0xffffffff);
  puStack_90 = &UNK_10f68e3e8;
  uStack_88 = 0;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_70 = 0x177;
  uStack_68 = CONCAT44(uStack_68._4_4_,0xffffffff);
  uVar1 = param_1;
  FUN_10aaef83c(param_1,&puStack_a8);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f68ec38;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f68e3e8;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x177;
  uStack_5c = 0;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10ab01610();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f68ec50;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x4000000064;
  puStack_80 = &UNK_10f68e3e8;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_5c = 0x178;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010ab01788(uVar1,&puStack_a8);
  FUN_10ab01894(uVar1);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10aaef83c; end: 10aaef913;  */

/* WARNING: Removing unreachable block (ram,0x00010aaef8d4) */

undefined1  [16] FUN_10aaef83c(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f68f3e1,0x16);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10ab01514(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10aaef914; end: 10aaefcc7;  */

void FUN_10aaef914(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f68f3f8,0x19);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c459f8;
  pppuVar2 = (undefined8 ***)&UNK_10f68e3e8;
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
    ppuStack_b0 = &PTR_DAT_110c459f8;
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
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aaefca8;
    FUN_10a054dac(param_1,&UNK_10f68ec67,FUN_10ab01950,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aaefca8;
    FUN_10a054dac(param_1,&UNK_10f68ec75,FUN_10ab02350,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aaefca8;
    FUN_10a054dac(param_1,&UNK_10f68ec8f,FUN_10ab02c78,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aaefca8;
    FUN_10a054dac(param_1,&UNK_10f68ec9c,FUN_10ab02f78,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aaefca8;
    FUN_10a054dac(param_1,&UNK_10f68eca9,FUN_10ab03094,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aaefca8;
    FUN_10a054dac(param_1,&UNK_10f68ecb9,FUN_10ab03584,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f68eccb,FUN_10ab03670,0);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f68f3f8,0x19);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10aaefca8:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10aaefcac);
  (*pcVar6)();
}



/* Entry: 10aaefcc8; end: 10aaefddf;  */

void FUN_10aaefcc8(undefined8 param_1)

{
  undefined1 uStack_a9;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f68ecd7;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000019;
  puStack_80 = &UNK_10f68e3e8;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x92;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10aaefde0(param_1,&puStack_a8);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f68ece0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000019;
  puStack_80 = &UNK_10f68e3e8;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x92;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_a9 = 0;
  FUN_10aaefe38(param_1,&puStack_a8,&uStack_a9);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f68ece4;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000019;
  puStack_80 = &UNK_10f68e3e8;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x92;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_a9 = 1;
  FUN_10aaefe38(param_1,&puStack_a8,&uStack_a9);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10aaefde0; end: 10aaefe37;  */

ulong FUN_10aaefde0(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,*param_2);
  }
  return param_1;
}



/* Entry: 10aaefe38; end: 10aaefe8f;  */

ulong FUN_10aaefe38(ulong param_1,undefined8 *param_2,char *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10ab037f0(param_1,*param_2,(long)*param_3);
  }
  return param_1;
}



/* Entry: 10aaefe90; end: 10aaf0007;  */

void FUN_10aaefe90(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f68eced;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f68e3e8;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x177;
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
  puStack_a8 = &UNK_10f68ed05;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f68e3e8;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x177;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10aaf0008(param_1,&puStack_a8,0);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f68ed0f;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f68e3e8;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x177;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10aaf0008();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f68ed2a;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f68e3e8;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x177;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10aaf0008();
  FUN_10a003ff4();
  return;
}



/* Entry: 10aaf0008; end: 10aaf00af;  */

undefined8 * FUN_10aaf0008(undefined8 *param_1,undefined8 *param_2,char param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10aaf00b0);
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



/* Entry: 10aaf00b0; end: 10aaf01cb;  */

void FUN_10aaf00b0(undefined8 param_1)

{
  undefined1 uStack_a9;
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
  puStack_a8 = &UNK_10f68ed3c;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f68e3e8;
  uStack_78 = 0;
  puStack_70 = &UNK_10f68e3e8;
  uStack_68 = 0;
  uStack_60 = 0x92;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10aaf01cc(param_1,&puStack_a8);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f68ed4d;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f68e3e8;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x92;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_a9 = 0;
  FUN_10aaf0224(param_1,&puStack_a8,&uStack_a9);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f68ed58;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f68e3e8;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x92;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_a9 = 1;
  FUN_10aaf0224(param_1,&puStack_a8,&uStack_a9);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10aaf01cc; end: 10aaf0223;  */

ulong FUN_10aaf01cc(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,*param_2);
  }
  return param_1;
}



/* Entry: 10aaf0224; end: 10aaf027b;  */

ulong FUN_10aaf0224(ulong param_1,undefined8 *param_2,char *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x00010ab03864(param_1,*param_2,(long)*param_3);
  }
  return param_1;
}



/* Entry: 10aaf027c; end: 10aaf056f;  */

long * FUN_10aaf027c(long *param_1,long param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long ***ppplVar6;
  long ****pppplVar7;
  byte **ppbVar8;
  long *plVar9;
  undefined **ppuVar10;
  ulong uVar11;
  long lVar12;
  undefined **ppuVar13;
  long *plVar14;
  long lVar15;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined4 auStack_190 [2];
  undefined8 uStack_188;
  long lStack_178;
  long *plStack_170;
  long *plStack_168;
  undefined **ppuStack_160;
  long *plStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  long ***ppplStack_138;
  long **pplStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  byte *pbStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long **pplStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long *plStack_d8;
  long lStack_d0;
  long alStack_c8 [3];
  long *plStack_b0;
  long lStack_a8;
  undefined **ppuStack_a0;
  long *plStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  undefined4 auStack_50 [2];
  undefined8 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = param_1;
  lVar12 = param_2;
  func_0x00010a0fda30();
  FUN_10aa7093c(param_1,param_2,plVar4,lVar12);
  *param_1 = (long)&PTR_FUN_110c44dc8;
  param_1[2] = (long)&PTR_DAT_110c44e70;
  param_1[7] = (long)&PTR_DAT_110c44ec8;
  FUN_10aaf0570(param_1 + 0x1c,param_2);
  param_1[0x1e] = param_2;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 0x1f,*param_3,param_3[1]);
  }
  else {
    lVar15 = param_3[1];
    lVar12 = *param_3;
    param_1[0x21] = param_3[2];
    param_1[0x20] = lVar15;
    param_1[0x1f] = lVar12;
  }
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  FUN_10a05a5d4(param_1 + 0x26,&lStack_70);
  *(undefined1 *)(param_1 + 0x28) = 0;
  ppuVar13 = (undefined **)(param_1 + 0x29);
  param_1[0x2a] = 0;
  *ppuVar13 = (undefined *)0x0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x2e) = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  *(undefined8 *)((long)param_1 + 0x199) = 0;
  *(undefined8 *)((long)param_1 + 0x191) = 0;
  auStack_50[0] = 1;
  uStack_48 = 200;
  lStack_70 = 0;
  plStack_68 = (long *)0x0;
  lStack_60 = 0;
  FUN_10a504768(&lStack_70,auStack_50,&lStack_38,1);
  param_1[0x35] = 0;
  plStack_78 = plStack_68;
  lStack_80 = lStack_70;
  param_1[0x37] = (long)plStack_68;
  param_1[0x36] = lStack_70;
  param_1[0x38] = lStack_60;
  param_1[0x39] = 0;
  puVar3 = (undefined8 *)0x58;
  __Znwm();
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_DAT_110bf7fc8;
  puVar3[8] = 0;
  puVar3[7] = 0;
  ppuVar10 = (undefined **)(puVar3 + 5);
  puVar3[6] = 0;
  *ppuVar10 = (undefined *)0x0;
  *(undefined8 *)((long)puVar3 + 0x4d) = 0;
  *(undefined8 *)((long)puVar3 + 0x45) = 0;
  puVar3[4] = 0;
  puVar3[3] = 0;
  param_1[0x3a] = (long)(puVar3 + 3);
  param_1[0x3b] = (long)puVar3;
  plVar4 = param_1 + 0x3a;
  FUN_10a5cf1fc();
  param_1[0x42] = 0;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  if (param_2 != 0) {
    lStack_70 = *(long *)(param_1[0x1e] + 0x9d0);
    plVar14 = *(long **)(param_1[0x1e] + 0x9d8);
    if (plVar14 != (long *)0x0) {
      plVar4 = plVar14 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (lStack_70 != 0) {
      *(undefined1 *)(*(long *)(lStack_70 + 0x18) + 0x29) = 0;
    }
    plVar4 = (long *)param_1[0x3a];
    ppuVar10 = &PTR_DAT_110c459f8;
    plStack_68 = plVar14;
    FUN_10a5ae998(plVar4,&PTR_DAT_110c459f8,param_1[0x1e],param_1);
    if (plVar14 != (long *)0x0) {
      plVar5 = plVar14 + 1;
      do {
        lVar12 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar12 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        plVar4 = plVar14;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010ab03930(param_1 + 0x1c);
  func_0x00010aa71c88(param_1);
  plVar5 = plVar4;
  __Unwind_Resume();
  pcStack_88 = FUN_10aaf0570;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar14 = plVar5;
  ppuStack_a0 = ppuVar13;
  plStack_98 = param_1;
  puStack_90 = &stack0xfffffffffffffff0;
  if (((ppuVar10 == (undefined **)0x0) || (ppuVar10[0x20] == (undefined *)0x0)) ||
     (lVar12 = *(long *)(ppuVar10[0x20] + 0x268), lVar12 == 0)) {
LAB_10aaf05f8:
    *plVar5 = 0;
    plVar5[1] = 0;
    goto LAB_10aaf05fc;
  }
  plVar14 = (long *)(*(ulong *)(lVar12 + 0x50) & 0xfffffffffffffffc);
  if (*(char *)((long)plVar14 + 0x17) < '\0') {
    if (plVar14[1] == 0) goto LAB_10aaf05f8;
  }
  else if (*(char *)((long)plVar14 + 0x17) == '\0') goto LAB_10aaf05f8;
  plStack_b0 = (long *)0x0;
  func_0x0001094749d8(&plStack_d8,plVar14,alStack_c8,0,0);
  if (plStack_b0 == alStack_c8) {
    lVar12 = 0x20;
LAB_10aaf0628:
    (**(code **)(*plStack_b0 + lVar12))();
  }
  else if (plStack_b0 != (long *)0x0) {
    lVar12 = 0x28;
    goto LAB_10aaf0628;
  }
  if ((byte)plStack_d8 == 9) {
    ppuVar13 = &PTR_PTR_113306800;
    ppuVar10 = ppuVar13;
    FUN_10ae079a0(0,&PTR_PTR_113306800);
    FUN_10ae07cd4(ppuVar10,&PTR_PTR_113306800);
    *plVar5 = 0;
    plVar5[1] = 0;
  }
  else {
    pplStack_f8 = &plStack_d8;
    lStack_f0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0x8000000000000000;
    if ((byte)plStack_d8 == 1) {
      lVar12 = lStack_d0;
      FUN_109d21b74(lStack_d0,&PTR_DAT_110c45b18);
      lStack_f0 = lVar12;
LAB_10aaf06cc:
      lStack_110 = 0;
      uStack_108 = 0;
      uStack_100 = 0x8000000000000000;
      if ((byte)plStack_d8 == 1) {
        lStack_110 = lStack_d0 + 8;
      }
      else {
        if ((byte)plStack_d8 == 2) goto LAB_10aaf06f0;
        uStack_100 = 1;
      }
    }
    else {
      if ((byte)plStack_d8 != 2) {
        uStack_e0 = 1;
        goto LAB_10aaf06cc;
      }
      uStack_e8 = *(undefined8 *)(lStack_d0 + 8);
LAB_10aaf06f0:
      uStack_100 = 0x8000000000000000;
      lStack_110 = 0;
      uStack_108 = *(undefined8 *)(lStack_d0 + 8);
    }
    pbStack_118 = (byte *)&plStack_d8;
    ppplVar6 = &pplStack_f8;
    func_0x000109379420(ppplVar6,&pbStack_118);
    if (((ulong)ppplVar6 & 1) == 0) {
      ppplVar6 = &pplStack_f8;
      func_0x000109386768();
      if (*(char *)ppplVar6 != '\x01') goto LAB_10aaf081c;
      ppplVar6 = &pplStack_f8;
      func_0x000109386768(ppplVar6);
      FUN_10aafcf08(&pbStack_118,ppplVar6);
      pppplVar7 = (long ****)&pplStack_f8;
      func_0x000109386768();
      pplStack_130 = (long **)0x0;
      plStack_128 = (long *)0x0;
      uStack_120 = 0x8000000000000000;
      if (*(char *)pppplVar7 == '\x02') {
        plStack_128 = (long *)pppplVar7[1][1];
      }
      else if (*(char *)pppplVar7 == '\x01') {
        pplStack_130 = (long **)(pppplVar7[1] + 1);
      }
      else {
        uStack_120 = 1;
      }
      ppbVar8 = &pbStack_118;
      ppplStack_138 = (long ***)pppplVar7;
      func_0x000109379420(ppbVar8,&ppplStack_138);
      if (((ulong)ppbVar8 & 1) != 0) goto LAB_10aaf081c;
      ppbVar8 = &pbStack_118;
      func_0x000109386768();
      if (*(char *)ppbVar8 != '\x03') goto LAB_10aaf081c;
      func_0x000109386768(&pbStack_118);
      func_0x00010937c804(&ppplStack_138);
      ppplVar6 = (long ***)pplStack_130;
      if (-1 < (long)plStack_128) {
        ppplVar6 = (long ***)((ulong)plStack_128 >> 0x38);
      }
      if (ppplVar6 == (long ***)0x8) {
        pppplVar7 = (long ****)ppplStack_138;
        if (-1 < (long)plStack_128) {
          pppplVar7 = &ppplStack_138;
        }
        ppuVar13 = (undefined **)(ulong)(*pppplVar7 == (long ***)0x676e697473697865);
      }
      else {
        ppuVar13 = (undefined **)0x0;
      }
      if ((long)plStack_128 < 0) {
        __ZdlPv(ppplStack_138);
      }
    }
    else {
LAB_10aaf081c:
      ppuVar13 = (undefined **)0x0;
    }
    puVar3 = (undefined8 *)0x38;
    __Znwm();
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_FUN_110c45b48;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[3] = &PTR_FUN_110c45928;
    *(char *)(puVar3 + 6) = (char)ppuVar13;
    *plVar5 = (long)(puVar3 + 3);
    plVar5[1] = (long)puVar3;
  }
  plVar14 = &lStack_d0;
  func_0x000109380ffc(plVar14,(byte)plStack_d8);
LAB_10aaf05fc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return plVar14;
  }
  ___stack_chk_fail();
  uVar11 = (ulong)(byte)plStack_d8;
  func_0x000109380ffc(&lStack_d0);
  plVar5 = plVar14;
  __Unwind_Resume();
  pcStack_148 = FUN_10aaf08dc;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = plVar5;
  plStack_170 = plVar4;
  plStack_168 = param_1 + 0x2f;
  ppuStack_160 = ppuVar13;
  plStack_158 = plVar14;
  ppuStack_150 = &puStack_90;
  FUN_10aa7093c();
  *plVar9 = (long)&PTR_FUN_110c44dc8;
  plVar9[2] = (long)&PTR_DAT_110c44e70;
  plVar9[7] = (long)&PTR_DAT_110c44ec8;
  FUN_10aaf0570(plVar9 + 0x1c,uVar11);
  plVar5[0x1e] = uVar11;
  func_0x000107c2b054(plVar5 + 0x1f,&UNK_10f68e3e8);
  plVar5[0x23] = 0;
  plVar5[0x22] = 0;
  plVar5[0x25] = 0;
  plVar5[0x24] = 0;
  FUN_10a05a5d4(plVar5 + 0x26,&lStack_1b0);
  *(undefined1 *)(plVar5 + 0x28) = 0;
  plVar5[0x2a] = 0;
  plVar5[0x29] = 0;
  plVar5[0x2c] = 0;
  plVar5[0x2b] = 0;
  *(undefined4 *)(plVar5 + 0x2d) = 0x3f800000;
  *(undefined2 *)(plVar5 + 0x2e) = 0;
  plVar5[0x30] = 0;
  plVar5[0x2f] = 0;
  plVar5[0x32] = 0;
  plVar5[0x31] = 0;
  *(undefined8 *)((long)plVar5 + 0x199) = 0;
  *(undefined8 *)((long)plVar5 + 0x191) = 0;
  auStack_190[0] = 1;
  uStack_188 = 200;
  lStack_1b0 = 0;
  lStack_1a8 = 0;
  lStack_1a0 = 0;
  FUN_10a504768(&lStack_1b0,auStack_190,&lStack_178,1);
  plVar5[0x35] = 0;
  plVar5[0x37] = lStack_1a8;
  plVar5[0x36] = lStack_1b0;
  plVar5[0x38] = lStack_1a0;
  plVar5[0x39] = 0;
  puVar3 = (undefined8 *)0x58;
  __Znwm();
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_DAT_110bf7fc8;
  puVar3[8] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  puVar3[5] = 0;
  *(undefined8 *)((long)puVar3 + 0x4d) = 0;
  *(undefined8 *)((long)puVar3 + 0x45) = 0;
  puVar3[4] = 0;
  puVar3[3] = 0;
  plVar5[0x3a] = (long)(puVar3 + 3);
  plVar5[0x3b] = (long)puVar3;
  plVar4 = plVar5 + 0x3a;
  FUN_10a5cf1fc(plVar4);
  plVar5[0x42] = 0;
  plVar5[0x3f] = 0;
  plVar5[0x3e] = 0;
  plVar5[0x41] = 0;
  plVar5[0x40] = 0;
  plVar5[0x3d] = 0;
  plVar5[0x3c] = 0;
  if (uVar11 != 0) {
    plVar4 = (long *)plVar5[0x3a];
    FUN_10a5ae998(plVar4,&PTR_DAT_110c459f8,plVar5[0x1e],plVar5);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
    ___stack_chk_fail();
    func_0x00010ab03ae8(plVar5 + 0x41);
    func_0x00010a05a8c4(plVar5 + 0x3f);
    if (*(char *)((long)plVar5 + 0x1f7) < '\0') {
      __ZdlPv(plVar5[0x3c]);
    }
    func_0x00010a004e5c(plVar5 + 0x3a);
    if (plVar5[0x36] != 0) {
      plVar5[0x37] = plVar5[0x36];
      __ZdlPv();
    }
    FUN_10aafcfb8(plVar5 + 0x31);
    func_0x00010ab038d8(plVar5 + 0x2f);
    func_0x00010ab039e0(plVar5 + 0x29);
    func_0x00010a05a86c(plVar5 + 0x26);
    func_0x00010ab03988(plVar5 + 0x24);
    FUN_10a5ca2e0(plVar5 + 0x22);
    if (*(char *)((long)plVar5 + 0x10f) < '\0') {
      __ZdlPv(plVar5[0x1f]);
    }
    func_0x00010ab03930(plVar5 + 0x1c);
    do {
      func_0x00010aa71c88(plVar5);
      __Unwind_Resume(plVar4);
    } while( true );
  }
  return plVar5;
}



/* Entry: 10aaf0570; end: 10aaf08db;  */

long * FUN_10aaf0570(long *param_1,long param_2)

{
  bool bVar1;
  long *plVar2;
  long ***ppplVar3;
  long ****pppplVar4;
  byte **ppbVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined **ppuVar8;
  ulong uVar9;
  long lVar10;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  undefined4 auStack_110 [2];
  undefined8 uStack_108;
  long lStack_f8;
  long ***ppplStack_b8;
  long **pplStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  byte *pbStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long **pplStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  long lStack_50;
  long alStack_48 [3];
  long *plStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = param_1;
  if (((param_2 == 0) || (*(long *)(param_2 + 0x100) == 0)) ||
     (lVar10 = *(long *)(*(long *)(param_2 + 0x100) + 0x268), lVar10 == 0)) {
LAB_10aaf05f8:
    *param_1 = 0;
    param_1[1] = 0;
    goto LAB_10aaf05fc;
  }
  plVar2 = (long *)(*(ulong *)(lVar10 + 0x50) & 0xfffffffffffffffc);
  if (*(char *)((long)plVar2 + 0x17) < '\0') {
    if (plVar2[1] == 0) goto LAB_10aaf05f8;
  }
  else if (*(char *)((long)plVar2 + 0x17) == '\0') goto LAB_10aaf05f8;
  plStack_30 = (long *)0x0;
  func_0x0001094749d8(&plStack_58,plVar2,alStack_48,0,0);
  if (plStack_30 == alStack_48) {
    lVar10 = 0x20;
LAB_10aaf0628:
    (**(code **)(*plStack_30 + lVar10))();
  }
  else if (plStack_30 != (long *)0x0) {
    lVar10 = 0x28;
    goto LAB_10aaf0628;
  }
  if ((byte)plStack_58 == 9) {
    ppuVar8 = &PTR_PTR_113306800;
    FUN_10ae079a0(0,&PTR_PTR_113306800);
    FUN_10ae07cd4(ppuVar8,&PTR_PTR_113306800);
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    pplStack_78 = &plStack_58;
    lStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0x8000000000000000;
    if ((byte)plStack_58 == 1) {
      lVar10 = lStack_50;
      FUN_109d21b74(lStack_50,&PTR_DAT_110c45b18);
      lStack_70 = lVar10;
LAB_10aaf06cc:
      lStack_90 = 0;
      uStack_88 = 0;
      uStack_80 = 0x8000000000000000;
      if ((byte)plStack_58 == 1) {
        lStack_90 = lStack_50 + 8;
      }
      else {
        if ((byte)plStack_58 == 2) goto LAB_10aaf06f0;
        uStack_80 = 1;
      }
    }
    else {
      if ((byte)plStack_58 != 2) {
        uStack_60 = 1;
        goto LAB_10aaf06cc;
      }
      uStack_68 = *(undefined8 *)(lStack_50 + 8);
LAB_10aaf06f0:
      uStack_80 = 0x8000000000000000;
      lStack_90 = 0;
      uStack_88 = *(undefined8 *)(lStack_50 + 8);
    }
    pbStack_98 = (byte *)&plStack_58;
    ppplVar3 = &pplStack_78;
    func_0x000109379420(ppplVar3,&pbStack_98);
    if (((ulong)ppplVar3 & 1) == 0) {
      ppplVar3 = &pplStack_78;
      func_0x000109386768();
      if (*(char *)ppplVar3 != '\x01') goto LAB_10aaf081c;
      ppplVar3 = &pplStack_78;
      func_0x000109386768(ppplVar3);
      FUN_10aafcf08(&pbStack_98,ppplVar3);
      pppplVar4 = (long ****)&pplStack_78;
      func_0x000109386768();
      pplStack_b0 = (long **)0x0;
      plStack_a8 = (long *)0x0;
      uStack_a0 = 0x8000000000000000;
      if (*(char *)pppplVar4 == '\x02') {
        plStack_a8 = (long *)pppplVar4[1][1];
      }
      else if (*(char *)pppplVar4 == '\x01') {
        pplStack_b0 = (long **)(pppplVar4[1] + 1);
      }
      else {
        uStack_a0 = 1;
      }
      ppbVar5 = &pbStack_98;
      ppplStack_b8 = (long ***)pppplVar4;
      func_0x000109379420(ppbVar5,&ppplStack_b8);
      if (((ulong)ppbVar5 & 1) != 0) goto LAB_10aaf081c;
      ppbVar5 = &pbStack_98;
      func_0x000109386768();
      if (*(char *)ppbVar5 != '\x03') goto LAB_10aaf081c;
      func_0x000109386768(&pbStack_98);
      func_0x00010937c804(&ppplStack_b8);
      ppplVar3 = (long ***)pplStack_b0;
      if (-1 < (long)plStack_a8) {
        ppplVar3 = (long ***)((ulong)plStack_a8 >> 0x38);
      }
      if (ppplVar3 == (long ***)0x8) {
        pppplVar4 = (long ****)ppplStack_b8;
        if (-1 < (long)plStack_a8) {
          pppplVar4 = &ppplStack_b8;
        }
        bVar1 = *pppplVar4 == (long ***)0x676e697473697865;
      }
      else {
        bVar1 = false;
      }
      if ((long)plStack_a8 < 0) {
        __ZdlPv(ppplStack_b8);
      }
    }
    else {
LAB_10aaf081c:
      bVar1 = false;
    }
    puVar6 = (undefined8 *)0x38;
    __Znwm();
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_FUN_110c45b48;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[3] = &PTR_FUN_110c45928;
    *(bool *)(puVar6 + 6) = bVar1;
    *param_1 = (long)(puVar6 + 3);
    param_1[1] = (long)puVar6;
  }
  plVar2 = &lStack_50;
  func_0x000109380ffc(plVar2,(byte)plStack_58);
LAB_10aaf05fc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar2;
  }
  ___stack_chk_fail();
  uVar9 = (ulong)(byte)plStack_58;
  func_0x000109380ffc(&lStack_50);
  __Unwind_Resume();
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = plVar2;
  FUN_10aa7093c();
  *plVar7 = (long)&PTR_FUN_110c44dc8;
  plVar7[2] = (long)&PTR_DAT_110c44e70;
  plVar7[7] = (long)&PTR_DAT_110c44ec8;
  FUN_10aaf0570(plVar7 + 0x1c,uVar9);
  plVar2[0x1e] = uVar9;
  func_0x000107c2b054(plVar2 + 0x1f,&UNK_10f68e3e8);
  plVar2[0x23] = 0;
  plVar2[0x22] = 0;
  plVar2[0x25] = 0;
  plVar2[0x24] = 0;
  FUN_10a05a5d4(plVar2 + 0x26,&lStack_130);
  *(undefined1 *)(plVar2 + 0x28) = 0;
  plVar2[0x2a] = 0;
  plVar2[0x29] = 0;
  plVar2[0x2c] = 0;
  plVar2[0x2b] = 0;
  *(undefined4 *)(plVar2 + 0x2d) = 0x3f800000;
  *(undefined2 *)(plVar2 + 0x2e) = 0;
  plVar2[0x30] = 0;
  plVar2[0x2f] = 0;
  plVar2[0x32] = 0;
  plVar2[0x31] = 0;
  *(undefined8 *)((long)plVar2 + 0x199) = 0;
  *(undefined8 *)((long)plVar2 + 0x191) = 0;
  auStack_110[0] = 1;
  uStack_108 = 200;
  lStack_130 = 0;
  lStack_128 = 0;
  lStack_120 = 0;
  FUN_10a504768(&lStack_130,auStack_110,&lStack_f8,1);
  plVar2[0x35] = 0;
  plVar2[0x37] = lStack_128;
  plVar2[0x36] = lStack_130;
  plVar2[0x38] = lStack_120;
  plVar2[0x39] = 0;
  puVar6 = (undefined8 *)0x58;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_DAT_110bf7fc8;
  puVar6[8] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  puVar6[5] = 0;
  *(undefined8 *)((long)puVar6 + 0x4d) = 0;
  *(undefined8 *)((long)puVar6 + 0x45) = 0;
  puVar6[4] = 0;
  puVar6[3] = 0;
  plVar2[0x3a] = (long)(puVar6 + 3);
  plVar2[0x3b] = (long)puVar6;
  plVar7 = plVar2 + 0x3a;
  FUN_10a5cf1fc(plVar7);
  plVar2[0x42] = 0;
  plVar2[0x3f] = 0;
  plVar2[0x3e] = 0;
  plVar2[0x41] = 0;
  plVar2[0x40] = 0;
  plVar2[0x3d] = 0;
  plVar2[0x3c] = 0;
  if (uVar9 != 0) {
    plVar7 = (long *)plVar2[0x3a];
    FUN_10a5ae998(plVar7,&PTR_DAT_110c459f8,plVar2[0x1e],plVar2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
    ___stack_chk_fail();
    func_0x00010ab03ae8(plVar2 + 0x41);
    func_0x00010a05a8c4(plVar2 + 0x3f);
    if (*(char *)((long)plVar2 + 0x1f7) < '\0') {
      __ZdlPv(plVar2[0x3c]);
    }
    func_0x00010a004e5c(plVar2 + 0x3a);
    if (plVar2[0x36] != 0) {
      plVar2[0x37] = plVar2[0x36];
      __ZdlPv();
    }
    FUN_10aafcfb8(plVar2 + 0x31);
    func_0x00010ab038d8(plVar2 + 0x2f);
    func_0x00010ab039e0(plVar2 + 0x29);
    func_0x00010a05a86c(plVar2 + 0x26);
    func_0x00010ab03988(plVar2 + 0x24);
    FUN_10a5ca2e0(plVar2 + 0x22);
    if (*(char *)((long)plVar2 + 0x10f) < '\0') {
      __ZdlPv(plVar2[0x1f]);
    }
    func_0x00010ab03930(plVar2 + 0x1c);
    do {
      func_0x00010aa71c88(plVar2);
      __Unwind_Resume(plVar7);
    } while( true );
  }
  return plVar2;
}



/* Entry: 10aaf08dc; end: 10aaf0b2f;  */

undefined8 * FUN_10aaf08dc(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 auStack_50 [2];
  undefined8 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  FUN_10aa7093c();
  *puVar1 = &PTR_FUN_110c44dc8;
  puVar1[2] = &PTR_DAT_110c44e70;
  puVar1[7] = &PTR_DAT_110c44ec8;
  FUN_10aaf0570(puVar1 + 0x1c,param_2);
  param_1[0x1e] = param_2;
  func_0x000107c2b054(param_1 + 0x1f,&UNK_10f68e3e8);
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  FUN_10a05a5d4(param_1 + 0x26,&uStack_70);
  *(undefined1 *)(param_1 + 0x28) = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x2e) = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  *(undefined8 *)((long)param_1 + 0x199) = 0;
  *(undefined8 *)((long)param_1 + 0x191) = 0;
  auStack_50[0] = 1;
  uStack_48 = 200;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  FUN_10a504768(&uStack_70,auStack_50,&lStack_38,1);
  param_1[0x35] = 0;
  param_1[0x37] = uStack_68;
  param_1[0x36] = uStack_70;
  param_1[0x38] = uStack_60;
  param_1[0x39] = 0;
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110bf7fc8;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  *(undefined8 *)((long)puVar1 + 0x4d) = 0;
  *(undefined8 *)((long)puVar1 + 0x45) = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  param_1[0x3a] = puVar1 + 3;
  param_1[0x3b] = puVar1;
  puVar1 = param_1 + 0x3a;
  FUN_10a5cf1fc(puVar1);
  param_1[0x42] = 0;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)param_1[0x3a];
    FUN_10a5ae998(puVar1,&PTR_DAT_110c459f8,param_1[0x1e],param_1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010ab03ae8(param_1 + 0x41);
  func_0x00010a05a8c4(param_1 + 0x3f);
  if (*(char *)((long)param_1 + 0x1f7) < '\0') {
    __ZdlPv(param_1[0x3c]);
  }
  func_0x00010a004e5c(param_1 + 0x3a);
  if (param_1[0x36] != 0) {
    param_1[0x37] = param_1[0x36];
    __ZdlPv();
  }
  FUN_10aafcfb8(param_1 + 0x31);
  func_0x00010ab038d8(param_1 + 0x2f);
  func_0x00010ab039e0(param_1 + 0x29);
  func_0x00010a05a86c(param_1 + 0x26);
  func_0x00010ab03988(param_1 + 0x24);
  FUN_10a5ca2e0(param_1 + 0x22);
  if (*(char *)((long)param_1 + 0x10f) < '\0') {
    __ZdlPv(param_1[0x1f]);
  }
  func_0x00010ab03930(param_1 + 0x1c);
  do {
    func_0x00010aa71c88(param_1);
    __Unwind_Resume(puVar1);
  } while( true );
}



/* Entry: 10aaf0b30; end: 10aaf0c13;  */

void FUN_10aaf0b30(long param_1,long *param_2)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010aa70acc();
  (**(code **)(*param_2 + 0xa8))(&uStack_38,param_2,&PTR_s_sessionId_110c44ed8,&UNK_10f68e3e8,0);
  if (*(char *)(param_1 + 0x10f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xf8));
  }
  *(undefined8 *)(param_1 + 0x100) = uStack_30;
  *(undefined8 *)(param_1 + 0xf8) = uStack_38;
  *(undefined8 *)(param_1 + 0x108) = uStack_28;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c44ef8,0);
  *(char *)(param_1 + 0x1a0) = (char)param_2;
  return;
}



/* Entry: 10aaf0c14; end: 10aaf0d13;  */

void FUN_10aaf0c14(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_40;
  long *plStack_38;
  
  func_0x00010a6fb6ec(param_1 + 0x110);
  *(undefined1 *)(param_1 + 0x140) = 0;
  if (*(long *)(param_1 + 0x120) != 0) {
    if (((*(byte *)(*(long *)(param_1 + 0x120) + 0xa9) & 1) == 0) ||
       (*(char *)(param_1 + 0x1a0) != '\x01')) {
      plVar4 = *(long **)(param_1 + 0x120);
      (**(code **)(*plVar4 + 0x48))();
    }
    else {
      plVar4 = (long *)(param_1 + 0xf8);
    }
    lVar7 = param_1 + 0x148;
    lVar5 = lVar7;
    FUN_10ab03b40(lVar7,plVar4);
    if (lVar5 != 0) {
      if (*(long *)(lVar5 + 0x28) != 0) {
        uStack_40 = 0;
        plStack_38 = (long *)0x0;
        FUN_10aaf0d14(*(long *)(lVar5 + 0x28),param_1 + 0x110,&uStack_40);
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
      }
      FUN_10ab04134(lVar7,lVar5);
    }
  }
  return;
}


