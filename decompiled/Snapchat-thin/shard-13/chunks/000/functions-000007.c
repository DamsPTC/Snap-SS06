/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109ce3cac; end: 109ce3d5f;  */

void FUN_109ce3cac(ulong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  puVar1 = (undefined8 *)0x68;
  __Znwm();
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c31940(puVar1 + 2,param_2);
  *(undefined4 *)(puVar1 + 0xc) = 0;
  uVar2 = param_1;
  func_0x000107c31944(param_1,puVar1 + 2);
  puVar1[1] = uVar2;
  FUN_109ce3d60(param_1,puVar1);
  if ((param_1 & 1) != 0) {
    return;
  }
  func_0x000109cde37c(puVar1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 109ce3d60; end: 109ce40e7;  */

long * FUN_109ce3d60(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  
  plVar5 = param_1;
  func_0x000107c31944(param_1,param_2 + 2);
  param_2[1] = (long)plVar5;
  plVar10 = (long *)param_1[1];
  plVar8 = plVar5;
  if (plVar10 != (long *)0x0) {
    uVar11 = (long)plVar10 - 1;
    if (((ulong)plVar10 & uVar11) == 0) {
      plVar12 = (long *)(uVar11 & (ulong)plVar5);
    }
    else {
      plVar12 = plVar5;
      if (plVar10 <= plVar5) {
        uVar6 = 0;
        if (plVar10 != (long *)0x0) {
          uVar6 = (ulong)plVar5 / (ulong)plVar10;
        }
        plVar12 = (long *)((long)plVar5 - uVar6 * (long)plVar10);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar12 * 8);
    if (plVar3 != (long *)0x0) {
      for (plVar3 = (long *)*plVar3; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        plVar4 = (long *)plVar3[1];
        if (plVar4 == plVar5) {
          plVar8 = param_1;
          func_0x000104c4fbc4(param_1,plVar3 + 2,param_2 + 2);
          if (((ulong)plVar8 & 1) != 0) {
            return (long *)0x0;
          }
        }
        else {
          if (((ulong)plVar10 & uVar11) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar11);
          }
          else if (plVar10 <= plVar4) {
            uVar6 = 0;
            if (plVar10 != (long *)0x0) {
              uVar6 = (ulong)plVar4 / (ulong)plVar10;
            }
            plVar4 = (long *)((long)plVar4 - uVar6 * (long)plVar10);
          }
          if (plVar4 != plVar12) break;
        }
      }
    }
  }
  if ((plVar10 == (long *)0x0) ||
     (*(float *)(param_1 + 4) * (float)plVar10 < (float)(param_1[3] + 1))) {
    uVar11 = 1;
    if ((long *)0x2 < plVar10) {
      uVar11 = (ulong)(((ulong)plVar10 & (long)plVar10 - 1U) != 0);
    }
    plVar5 = (long *)(uVar11 | (long)plVar10 << 1);
    plVar10 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (plVar5 <= plVar10) {
      plVar5 = plVar10;
    }
    if ((long)plVar5 - 1U == 0) {
      plVar5 = (long *)0x2;
    }
    else if (((ulong)plVar5 & (long)plVar5 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
      plVar8 = plVar5;
    }
    plVar10 = (long *)param_1[1];
    if (plVar10 < plVar5) {
LAB_109ce3f2c:
      if ((ulong)plVar5 >> 0x3d != 0) {
        func_0x000104c4f740();
        plVar5 = (long *)*plVar8;
        *plVar8 = 0;
        if (plVar5 != (long *)0x0) {
          if ((char)plVar8[2] == '\x01') {
            func_0x000109cde37c(plVar5 + 2);
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(plVar5);
          return plVar5;
        }
        return plVar8;
      }
      lVar9 = (long)plVar5 << 3;
      __Znwm();
      lVar2 = *param_1;
      *param_1 = lVar9;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      plVar8 = (long *)0x0;
      param_1[1] = (long)plVar5;
      do {
        *(undefined8 *)(*param_1 + (long)plVar8 * 8) = 0;
        plVar8 = (long *)((long)plVar8 + 1);
      } while (plVar5 != plVar8);
      plVar8 = (long *)param_1[2];
      if (plVar8 != (long *)0x0) {
        plVar10 = (long *)plVar8[1];
        uVar11 = (long)plVar5 - 1;
        if (((ulong)plVar5 & uVar11) == 0) {
          plVar10 = (long *)((ulong)plVar10 & uVar11);
        }
        else if (plVar5 <= plVar10) {
          uVar6 = 0;
          if (plVar5 != (long *)0x0) {
            uVar6 = (ulong)plVar10 / (ulong)plVar5;
          }
          plVar10 = (long *)((long)plVar10 - uVar6 * (long)plVar5);
        }
        *(long **)(*param_1 + (long)plVar10 * 8) = param_1 + 2;
        plVar12 = (long *)*plVar8;
        while (plVar12 != (long *)0x0) {
          plVar3 = (long *)plVar12[1];
          if (((ulong)plVar5 & uVar11) == 0) {
            plVar3 = (long *)((ulong)plVar3 & uVar11);
          }
          else if (plVar5 <= plVar3) {
            uVar6 = 0;
            if (plVar5 != (long *)0x0) {
              uVar6 = (ulong)plVar3 / (ulong)plVar5;
            }
            plVar3 = (long *)((long)plVar3 - uVar6 * (long)plVar5);
          }
          plVar4 = plVar12;
          if (plVar3 != plVar10) {
            lVar9 = *param_1;
            if (*(long *)(lVar9 + (long)plVar3 * 8) == 0) {
              *(long **)(lVar9 + (long)plVar3 * 8) = plVar8;
              plVar10 = plVar3;
            }
            else {
              *plVar8 = *plVar12;
              *plVar12 = **(undefined8 **)(lVar9 + (long)plVar3 * 8);
              **(long **)(lVar9 + (long)plVar3 * 8) = (long)plVar12;
              plVar4 = plVar8;
            }
          }
          plVar8 = plVar4;
          plVar12 = (long *)*plVar4;
        }
      }
    }
    else if (plVar5 < plVar10) {
      plVar8 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((plVar10 < (long *)0x3) || (((ulong)plVar10 & (long)plVar10 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar8) {
        plVar8 = (long *)(1L << (-LZCOUNT((long)plVar8 + -1) & 0x3fU));
      }
      if (plVar5 <= plVar8) {
        plVar5 = plVar8;
      }
      if (plVar5 < plVar10) {
        if (plVar5 != (long *)0x0) goto LAB_109ce3f2c;
        lVar9 = *param_1;
        *param_1 = 0;
        if (lVar9 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
      }
    }
  }
  uVar11 = param_1[1];
  uVar7 = param_2[1];
  uVar6 = uVar11 - 1;
  if ((uVar11 & uVar6) == 0) {
    uVar7 = uVar6 & uVar7;
  }
  else if (uVar11 <= uVar7) {
    uVar1 = 0;
    if (uVar11 != 0) {
      uVar1 = uVar7 / uVar11;
    }
    uVar7 = uVar7 - uVar1 * uVar11;
  }
  lVar9 = *param_1;
  plVar8 = *(long **)(lVar9 + uVar7 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *param_2 = *plVar8;
    *plVar8 = (long)param_2;
    *(long **)(lVar9 + uVar7 * 8) = plVar8;
    if (*param_2 == 0) goto LAB_109ce3ff8;
    uVar7 = *(ulong *)(*param_2 + 8);
    if ((uVar11 & uVar6) == 0) {
      uVar7 = uVar7 & uVar6;
    }
    else if (uVar11 <= uVar7) {
      uVar6 = 0;
      if (uVar11 != 0) {
        uVar6 = uVar7 / uVar11;
      }
      uVar7 = uVar7 - uVar6 * uVar11;
    }
    plVar8 = (long *)(*param_1 + uVar7 * 8);
  }
  else {
    *param_2 = *plVar8;
  }
  *plVar8 = (long)param_2;
LAB_109ce3ff8:
  param_1[3] = param_1[3] + 1;
  return (long *)0x1;
}



/* Entry: 109ce40e8; end: 109ce412f;  */

void FUN_109ce40e8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000109cde37c(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 109ce4130; end: 109ce422b;  */

void FUN_109ce4130(ulong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0x68;
  __Znwm();
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c31940(puVar1 + 2,param_2);
  uVar3 = *param_3;
  puVar1[6] = param_3[1];
  puVar1[5] = uVar3;
  *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(param_3 + 2);
  *(undefined1 *)(puVar1 + 8) = 0;
  *(undefined1 *)(puVar1 + 0xb) = 0;
  if (*(char *)(param_3 + 6) == '\x01') {
    uVar3 = param_3[3];
    puVar1[9] = param_3[4];
    puVar1[8] = uVar3;
    puVar1[10] = param_3[5];
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[3] = 0;
    *(undefined1 *)(puVar1 + 0xb) = 1;
  }
  *(undefined4 *)(puVar1 + 0xc) = 1;
  uVar2 = param_1;
  func_0x000107c31944(param_1,puVar1 + 2);
  puVar1[1] = uVar2;
  FUN_109ce3d60(param_1,puVar1);
  if ((param_1 & 1) != 0) {
    return;
  }
  func_0x000109cde37c(puVar1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 109ce422c; end: 109ce4297;  */

void FUN_109ce422c(long *param_1,long *param_2)

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



/* Entry: 109ce4298; end: 109ce4397;  */

void FUN_109ce4298(undefined1 *param_1,long param_2,long param_3)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x60) == 1) {
    cVar1 = *(char *)(param_2 + 0x58);
    if (cVar1 == *(char *)(param_3 + 0x58)) {
      if (cVar1 != '\0') {
        FUN_109ce4398(param_2,param_3);
        FUN_109ce4398(param_2 + 0x28,param_3 + 0x28);
        *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_3 + 0x50);
      }
    }
    else if (cVar1 == '\0') {
      FUN_109ce422c(param_2,param_3);
      FUN_109ce422c(param_2 + 0x28,param_3 + 0x28);
      *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_3 + 0x50);
      *(undefined1 *)(param_2 + 0x58) = 1;
    }
    else {
      func_0x000109cde308(param_2 + 0x28);
      func_0x000109cde308(param_2);
      *(undefined1 *)(param_2 + 0x58) = 0;
    }
  }
  else {
    FUN_109cde278();
    *param_1 = 0;
    param_1[0x58] = 0;
    if (*(char *)(param_3 + 0x58) == '\x01') {
      FUN_109ce422c(param_1,param_3);
      FUN_109ce422c(param_1 + 0x28,param_3 + 0x28);
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_3 + 0x50);
      param_1[0x58] = 1;
    }
    *(undefined4 *)(param_1 + 0x60) = 1;
  }
  return;
}



/* Entry: 109ce4398; end: 109ce446f;  */

void FUN_109ce4398(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_1[3] != 0) {
    func_0x000109cde340(param_1,param_1[2]);
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
  lVar3 = *param_2;
  *param_2 = 0;
  lVar2 = *param_1;
  *param_1 = lVar3;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  lVar2 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = lVar2;
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar4 = *(ulong *)(lVar2 + 8);
    uVar5 = param_1[1];
    if ((uVar5 & uVar5 - 1) == 0) {
      uVar4 = uVar5 - 1 & uVar4;
    }
    else if (uVar5 <= uVar4) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar4 / uVar5;
      }
      uVar4 = uVar4 - uVar1 * uVar5;
    }
    *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 109ce4470; end: 109ce4473;  */

void FUN_109ce4470(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109ce4474; end: 109ce4487;  */

void FUN_109ce4474(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109ce4488; end: 109ce448f;  */

void FUN_109ce4488(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    __ZNSt3__15mutex6unlockEv(puVar1[3]);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      __ZdlPv(*puVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 109ce4490; end: 109ce44c7;  */

undefined8 FUN_109ce4490(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b3cfa0);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109ce44c8; end: 109ce44cb;  */

void FUN_109ce44c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109ce44cc; end: 109ce4637;  */

void FUN_109ce44cc(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    __ZNSt3__15mutex6unlockEv(param_2[3]);
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      __ZdlPv(*param_2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 109ce4638; end: 109ce48af;  */

void FUN_109ce4638(long *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  
  plVar2 = (long *)0x40;
  __Znwm();
  *plVar2 = 0;
  plVar2[1] = 0;
  func_0x000107c31940(plVar2 + 2,param_2);
  lVar8 = *param_3;
  plVar2[6] = param_3[1];
  plVar2[5] = lVar8;
  plVar2[7] = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  plVar7 = param_1;
  func_0x000107c31944(param_1,plVar2 + 2);
  plVar2[1] = (long)plVar7;
  plVar7 = param_1;
  func_0x000107c31944(param_1,plVar2 + 2);
  plVar2[1] = (long)plVar7;
  plVar9 = (long *)param_1[1];
  if (plVar9 != (long *)0x0) {
    uVar10 = (long)plVar9 - 1;
    if (((ulong)plVar9 & uVar10) == 0) {
      plVar11 = (long *)(uVar10 & (ulong)plVar7);
    }
    else {
      plVar11 = plVar7;
      if (plVar9 <= plVar7) {
        uVar5 = 0;
        if (plVar9 != (long *)0x0) {
          uVar5 = (ulong)plVar7 / (ulong)plVar9;
        }
        plVar11 = (long *)((long)plVar7 - uVar5 * (long)plVar9);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar11 * 8);
    if (plVar3 != (long *)0x0) {
      for (plVar3 = (long *)*plVar3; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        plVar4 = (long *)plVar3[1];
        if (plVar4 == plVar7) {
          plVar4 = param_1;
          func_0x000104c4fbc4(param_1,plVar3 + 2,plVar2 + 2);
          if (((ulong)plVar4 & 1) != 0) {
            func_0x000109ce45f4(plVar2 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR___ZdlPv_110352258)(plVar2);
            return;
          }
        }
        else {
          if (((ulong)plVar9 & uVar10) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar10);
          }
          else if (plVar9 <= plVar4) {
            uVar5 = 0;
            if (plVar9 != (long *)0x0) {
              uVar5 = (ulong)plVar4 / (ulong)plVar9;
            }
            plVar4 = (long *)((long)plVar4 - uVar5 * (long)plVar9);
          }
          if (plVar4 != plVar11) break;
        }
      }
    }
  }
  if ((plVar9 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar9 < (float)(param_1[3] + 1))
     ) {
    uVar10 = 1;
    if ((long *)0x2 < plVar9) {
      uVar10 = (ulong)(((ulong)plVar9 & (long)plVar9 - 1U) != 0);
    }
    uVar10 = uVar10 | (long)plVar9 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar10 <= uVar5) {
      uVar10 = uVar5;
    }
    FUN_109ce48b0(param_1,uVar10);
  }
  uVar10 = param_1[1];
  uVar6 = plVar2[1];
  uVar5 = uVar10 - 1;
  if ((uVar10 & uVar5) == 0) {
    uVar6 = uVar5 & uVar6;
  }
  else if (uVar10 <= uVar6) {
    uVar1 = 0;
    if (uVar10 != 0) {
      uVar1 = uVar6 / uVar10;
    }
    uVar6 = uVar6 - uVar1 * uVar10;
  }
  lVar8 = *param_1;
  plVar7 = *(long **)(lVar8 + uVar6 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_1 + 2;
    *plVar2 = *plVar7;
    *plVar7 = (long)plVar2;
    *(long **)(lVar8 + uVar6 * 8) = plVar7;
    if (*plVar2 == 0) goto LAB_109ce4848;
    uVar6 = *(ulong *)(*plVar2 + 8);
    if ((uVar10 & uVar5) == 0) {
      uVar6 = uVar6 & uVar5;
    }
    else if (uVar10 <= uVar6) {
      uVar5 = 0;
      if (uVar10 != 0) {
        uVar5 = uVar6 / uVar10;
      }
      uVar6 = uVar6 - uVar5 * uVar10;
    }
    plVar7 = (long *)(*param_1 + uVar6 * 8);
  }
  else {
    *plVar2 = *plVar7;
  }
  *plVar7 = (long)plVar2;
LAB_109ce4848:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 109ce48b0; end: 109ce4a7f;  */

void FUN_109ce48b0(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar4 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar4 = param_2;
  }
  plVar9 = (long *)param_1[1];
  if (plVar9 > param_2 || param_2 == plVar9) {
    if (plVar9 <= param_2) {
      return;
    }
    plVar4 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar9 < (long *)0x3) || (((ulong)plVar9 & (long)plVar9 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar4) {
      plVar4 = (long *)(1L << (-LZCOUNT((long)plVar4 + -1) & 0x3fU));
    }
    if (param_2 <= plVar4) {
      param_2 = plVar4;
    }
    if (plVar9 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
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
      plVar9 = (long *)plVar4[1];
      uVar5 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar5) == 0) {
        plVar9 = (long *)((ulong)plVar9 & uVar5);
      }
      else if (param_2 <= plVar9) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar9 / (ulong)param_2;
        }
        plVar9 = (long *)((long)plVar9 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar9 * 8) = param_1 + 2;
      plVar6 = (long *)*plVar4;
      while (plVar6 != (long *)0x0) {
        plVar8 = (long *)plVar6[1];
        if (((ulong)param_2 & uVar5) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar5);
        }
        else if (param_2 <= plVar8) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)param_2;
          }
          plVar8 = (long *)((long)plVar8 - uVar1 * (long)param_2);
        }
        plVar7 = plVar6;
        if (plVar8 != plVar9) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)plVar8 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar8 * 8) = plVar4;
            plVar9 = plVar8;
          }
          else {
            *plVar4 = *plVar6;
            *plVar6 = **(undefined8 **)(lVar2 + (long)plVar8 * 8);
            **(long **)(lVar2 + (long)plVar8 * 8) = (long)plVar6;
            plVar7 = plVar4;
          }
        }
        plVar4 = plVar7;
        plVar6 = (long *)*plVar7;
      }
    }
    return;
  }
  func_0x000104c4f740();
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 == 0) {
    return;
  }
  if ((char)plVar4[2] == '\x01') {
    func_0x000109ce45f4(lVar2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar2);
  return;
}



/* Entry: 109ce4a80; end: 109ce4ac7;  */

void FUN_109ce4a80(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000109ce45f4(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 109ce4ac8; end: 109ce4ad7;  */

void FUN_109ce4ac8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3cfc0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109ce4ad8; end: 109ce4af7;  */

void FUN_109ce4ad8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3cfc0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109ce4af8; end: 109ce4b47;  */

void FUN_109ce4af8(long param_1)

{
  __ZNSt3__15mutexD1Ev(param_1 + 0xb0);
  FUN_109ce4b4c(param_1 + 0x88);
  FUN_109ce4b4c(param_1 + 0x60);
  FUN_109ce4b4c(param_1 + 0x38);
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  _objc_release(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 109ce4b48; end: 109ce4b4b;  */

void FUN_109ce4b48(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109ce4b4c; end: 109ce4bdb;  */

long * FUN_109ce4b4c(long *param_1)

{
  long lVar1;
  
  func_0x000109ce45b8(param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109ce4bdc; end: 109ce4cbf;  */

long FUN_109ce4bdc(long *param_1,undefined8 param_2)

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



/* Entry: 109ce4cc0; end: 109ce4ce3;  */

void FUN_109ce4cc0(void)

{
  return;
}



/* Entry: 109ce4ce4; end: 109ce4d73;  */

void FUN_109ce4ce4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_110b3d000;
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_retain(uVar1);
  param_1[1] = uVar1;
  return;
}



/* Entry: 109ce4d74; end: 109ce4e93;  */

undefined8 * FUN_109ce4d74(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 auStack_48 [2];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if ((*(char *)(lRam0000000113833340 + 8) == '\x01') &&
     (*(char *)(lRam0000000113833380 + 8) == '\x01')) {
    (*pcRam0000000113833338)(auStack_48,param_2,param_3,0x113833338);
    *(undefined4 *)(param_1 + 2) = auStack_48[0];
    param_1[3] = uStack_40;
    param_1[4] = uStack_38;
  }
  return param_1;
}



/* Entry: 109ce4e94; end: 109ce4ec7;  */

undefined * FUN_109ce4e94(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
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
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [1024];
  long lStack_70;
  
  ppuVar6 = &PTR_PTR_1132fe9b8;
  ppuVar5 = ppuVar6;
  FUN_10ae079a0(0);
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined *)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar5[0x13],ppuVar5[0xf],
                  ppuVar5 + 0x14,0x400);
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
    puVar8 = ppuVar5[0x12];
    puVar7 = ppuVar5[0xb];
    uVar1 = 0;
    _clock_gettime_nsec_np();
    uVar2 = uVar1;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar5 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar5 + 0xe);
    uStack_8c0 = uVar2 & 0xffffffff;
    ppuStack_8b0 = ppuVar5 + 0x10;
    puVar3 = *ppuVar5;
    ppuVar6 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar7;
    puStack_8d8 = puVar8;
    uStack_8d0 = (ulong)(puVar8 != (undefined *)0x0);
    uStack_8c8 = uVar1;
    FUN_10ae0784c(puVar3,ppuVar6,&puStack_900,&puStack_918);
  }
  iVar4 = (int)ppuVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar4 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar3);
    return puVar3;
  }
  return puVar3;
}



/* Entry: 109ce4ec8; end: 109ce4fd3;  */

long FUN_109ce4ec8(long param_1)

{
  undefined4 auStack_48 [2];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((*(char *)(lRam0000000113833340 + 8) == '\x01') &&
     (*(char *)(lRam0000000113833380 + 8) == '\x01')) {
    auStack_48[0] = *(undefined4 *)(param_1 + 0x10);
    uStack_40 = *(undefined8 *)(param_1 + 0x18);
    uStack_38 = *(undefined8 *)(param_1 + 0x20);
    (*pcRam0000000113833378)(auStack_48,0x113833378);
  }
  return param_1;
}



/* Entry: 109ce4fd4; end: 109ce5007;  */

undefined * FUN_109ce4fd4(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
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
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [1024];
  long lStack_70;
  
  ppuVar6 = &PTR_PTR_1132fe9e8;
  ppuVar5 = ppuVar6;
  FUN_10ae079a0(0);
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined *)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar5[0x13],ppuVar5[0xf],
                  ppuVar5 + 0x14,0x400);
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
    puVar8 = ppuVar5[0x12];
    puVar7 = ppuVar5[0xb];
    uVar1 = 0;
    _clock_gettime_nsec_np();
    uVar2 = uVar1;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar5 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar5 + 0xe);
    uStack_8c0 = uVar2 & 0xffffffff;
    ppuStack_8b0 = ppuVar5 + 0x10;
    puVar3 = *ppuVar5;
    ppuVar6 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar7;
    puStack_8d8 = puVar8;
    uStack_8d0 = (ulong)(puVar8 != (undefined *)0x0);
    uStack_8c8 = uVar1;
    FUN_10ae0784c(puVar3,ppuVar6,&puStack_900,&puStack_918);
  }
  iVar4 = (int)ppuVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar4 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar3);
    return puVar3;
  }
  return puVar3;
}



/* Entry: 109ce5008; end: 109ce5027;  */

long FUN_109ce5008(undefined8 param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  func_0x000105277f8c(param_3);
  plVar3 = param_2;
  func_0x000105277f8c();
  plVar2 = param_2;
  func_0x000107c31944();
  plVar6 = (long *)param_2[1];
  if (plVar6 != (long *)0x0) {
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)(uVar7 & (ulong)plVar2);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar4 = *(long **)(*param_2 + (long)plVar8 * 8);
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)*plVar4;
      do {
        if (plVar4 == (long *)0x0) {
          return 0;
        }
        plVar5 = (long *)plVar4[1];
        if (plVar5 == plVar2) {
          plVar5 = param_2;
          func_0x000104c4fbc4(param_2,plVar4 + 2,plVar3);
          if (((ulong)plVar5 & 1) != 0) {
            return (long)plVar4;
          }
        }
        else {
          if (((ulong)plVar6 & uVar7) == 0) {
            plVar5 = (long *)((ulong)plVar5 & uVar7);
          }
          else if (plVar6 <= plVar5) {
            uVar1 = 0;
            if (plVar6 != (long *)0x0) {
              uVar1 = (ulong)plVar5 / (ulong)plVar6;
            }
            plVar5 = (long *)((long)plVar5 - uVar1 * (long)plVar6);
          }
          if (plVar5 != plVar8) {
            return 0;
          }
        }
        plVar4 = (long *)*plVar4;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 109ce5028; end: 109ce510b;  */

long FUN_109ce5028(long *param_1,undefined8 param_2)

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



/* Entry: 109ce510c; end: 109ce5297;  */

int * FUN_109ce510c(int *param_1,long param_2,ulong param_3,undefined8 param_4,int param_5)

{
  ushort uVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  code *pcVar13;
  int aiStack_a0 [4];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 auStack_70 [2];
  char cStack_59;
  int iStack_58;
  undefined4 uStack_54;
  char cStack_41;
  
  if (param_5 == 0) {
    iVar6 = param_1[0x18] * param_1[0x16] * param_1[0x19] * param_1[0x17];
  }
  else {
    iVar6 = param_1[6];
  }
  uVar7 = (uint)param_3;
  if ((uVar7 < 9) && ((0x107U >> (ulong)(uVar7 & 0x1f) & 1) != 0)) {
    pcVar13 = (code *)(&PTR_FUN_110b3d020)[param_3 & 0xffffffff];
  }
  else {
    if (1 < uVar7 - 3) {
      __ZNSt3__19to_stringEi(auStack_70,param_3);
      func_0x00010928a5e0(&iStack_58,&UNK_10f5a9a61,auStack_70);
      FUN_109cd45b4(&UNK_10f5a99ed,&UNK_10f5a9a10,&iStack_58);
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x109ce5248);
      (*pcVar13)();
    }
    if (uVar7 != 3) {
      puVar3 = &UNK_10f5a99ed;
      func_0x00010952d0c4(&UNK_10f5a99ed,&UNK_10f5a9a10,&UNK_10f5a9a22);
      if (cStack_41 < '\0') {
        __ZdlPv(CONCAT44(uStack_54,iStack_58));
      }
      if (cStack_59 < '\0') {
        __ZdlPv(auStack_70[0]);
      }
      __Unwind_Resume();
      if (puVar3[0x1a4] == '\x01') {
        if (*(int *)(puVar3 + 0x194) != 1) {
          if (*(int *)(puVar3 + 0x194) == 2) {
            return (int *)0x8;
          }
          pcStack_78 = FUN_109ce5298;
          piVar4 = (int *)&UNK_10f5a9955;
          puVar3 = &UNK_10f5a9976;
          puVar8 = &UNK_10f5a9986;
          puStack_80 = &stack0xfffffffffffffff0;
          func_0x00010952d0c4();
          piVar5 = aiStack_a0;
          uStack_88 = 0x109ce52ec;
          iVar6 = (int)puVar3;
          if (iVar6 < 0) {
            uVar11 = (ulong)iVar6;
            lVar10 = 0;
            puStack_90 = (undefined1 *)&puStack_80;
            FUN_10ae6a960(uVar11,0,&UNK_10f471d6a);
            func_0x00010956a96c();
            lVar9 = 0x26e;
          }
          else {
            lVar10 = (long)*(int *)(puVar8 + 0x18);
            uVar11 = (ulong)puVar3 & 0xffffffff;
            if (iVar6 < *(int *)(puVar8 + 0x18)) {
              *piVar4 = *(int *)(*(long *)(puVar8 + 0x20) + uVar11 * 4);
              return piVar4;
            }
            puStack_90 = (undefined1 *)&puStack_80;
            FUN_10ae6a960(uVar11,lVar10,&UNK_10f471e1f);
            func_0x00010956a96c();
            lVar9 = 0x26f;
          }
          iVar6 = 0xf5a9a7a;
          func_0x00010bdb2a88(aiStack_a0,&UNK_10f5a9a7a,lVar9,uVar11,lVar10);
          FUN_10ae6c700();
          uVar1 = *(ushort *)(*(long *)(lVar9 + 0x20) + (long)iVar6 * 2);
          uVar11 = (ulong)(uVar1 >> 10);
          *piVar5 = *(int *)(&UNK_10e039244 + uVar11 * 4) +
                    *(int *)(&UNK_10e037244 +
                            (ulong)((uVar1 & 0x3ff) + (uint)*(ushort *)(&UNK_10e039344 + uVar11 * 2)
                                   ) * 4);
          return piVar5;
        }
      }
      return (int *)0x0;
    }
    pcVar13 = FUN_109ce5460;
  }
  piVar4 = param_1;
  if (*(int *)(param_2 + 0x1c) < iVar6) {
    piVar4 = (int *)(param_2 + 0x18);
    func_0x000109311970(piVar4,*(undefined4 *)(param_2 + 0x18),iVar6);
  }
  if (0 < iVar6) {
    iVar12 = 0;
    do {
      piVar4 = &iStack_58;
      (*pcVar13)(piVar4,iVar12,param_1,param_4);
      iVar2 = *(int *)(param_2 + 0x18);
      *(int *)(param_2 + 0x18) = iVar2 + 1;
      *(int *)(*(long *)(param_2 + 0x20) + (long)iVar2 * 4) = iStack_58;
      iVar12 = iVar12 + 1;
    } while (iVar6 != iVar12);
  }
  return piVar4;
}



/* Entry: 109ce5298; end: 109ce5393;  */

int * FUN_109ce5298(long param_1)

{
  ushort uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int aiStack_30 [4];
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  if (*(char *)(param_1 + 0x1a4) == '\x01') {
    if (*(int *)(param_1 + 0x194) != 1) {
      if (*(int *)(param_1 + 0x194) == 2) {
        return (int *)0x8;
      }
      piVar2 = (int *)&UNK_10f5a9955;
      puVar5 = &UNK_10f5a9976;
      puVar6 = &UNK_10f5a9986;
      func_0x00010952d0c4();
      piVar3 = aiStack_30;
      uStack_18 = 0x109ce52ec;
      iVar4 = (int)puVar5;
      if (iVar4 < 0) {
        uVar9 = (ulong)iVar4;
        lVar8 = 0;
        puStack_20 = &stack0xfffffffffffffff0;
        FUN_10ae6a960(uVar9,0,&UNK_10f471d6a);
        func_0x00010956a96c();
        lVar7 = 0x26e;
      }
      else {
        lVar8 = (long)*(int *)(puVar6 + 0x18);
        uVar9 = (ulong)puVar5 & 0xffffffff;
        if (iVar4 < *(int *)(puVar6 + 0x18)) {
          *piVar2 = *(int *)(*(long *)(puVar6 + 0x20) + uVar9 * 4);
          return piVar2;
        }
        puStack_20 = &stack0xfffffffffffffff0;
        FUN_10ae6a960(uVar9,lVar8,&UNK_10f471e1f);
        func_0x00010956a96c();
        lVar7 = 0x26f;
      }
      iVar4 = 0xf5a9a7a;
      func_0x00010bdb2a88(aiStack_30,&UNK_10f5a9a7a,lVar7,uVar9,lVar8);
      FUN_10ae6c700();
      uVar1 = *(ushort *)(*(long *)(lVar7 + 0x20) + (long)iVar4 * 2);
      uVar9 = (ulong)(uVar1 >> 10);
      *piVar3 = *(int *)(&UNK_10e039244 + uVar9 * 4) +
                *(int *)(&UNK_10e037244 +
                        (ulong)((uVar1 & 0x3ff) + (uint)*(ushort *)(&UNK_10e039344 + uVar9 * 2)) * 4
                        );
      return piVar3;
    }
  }
  return (int *)0x0;
}



/* Entry: 109ce5394; end: 109ce53d7;  */

void FUN_109ce5394(int *param_1,int param_2,long param_3)

{
  ushort uVar1;
  ulong uVar2;
  
  uVar1 = *(ushort *)(*(long *)(param_3 + 0x20) + (long)param_2 * 2);
  uVar2 = (ulong)(uVar1 >> 10);
  *param_1 = *(int *)(&UNK_10e039244 + uVar2 * 4) +
             *(int *)(&UNK_10e037244 +
                     (ulong)((uVar1 & 0x3ff) + (uint)*(ushort *)(&UNK_10e039344 + uVar2 * 2)) * 4);
  return;
}



/* Entry: 109ce53d8; end: 109ce544b;  */

void FUN_109ce53d8(float *param_1,uint param_2,long param_3)

{
  float *pfVar1;
  ulong *puVar2;
  
  if (*(char *)(param_3 + 0x6c) == '\x01') {
    if (((int)param_2 < 0) || (*(int *)(param_3 + 0x18) <= (int)param_2)) {
      pfVar1 = (float *)&UNK_10f5a9b3c;
      FUN_109cd880c();
      *pfVar1 = (float)*(double *)(*(long *)(param_3 + 0x20) + (long)(int)param_2 * 8);
      return;
    }
    pfVar1 = (float *)(*(long *)(param_3 + 0x20) + (ulong)param_2 * 4);
  }
  else {
    pfVar1 = (float *)(param_3 + 0x70);
  }
  puVar2 = (ulong *)(*(ulong *)(param_3 + 0x50) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar2 + 0x17) < '\0') {
    puVar2 = (ulong *)*puVar2;
  }
  *param_1 = *pfVar1 * (float)(*(int *)((long)puVar2 + (long)(int)param_2 * 4) -
                              *(int *)(param_3 + 0x68));
  return;
}



/* Entry: 109ce544c; end: 109ce545f;  */

void FUN_109ce544c(float *param_1,int param_2,long param_3)

{
  *param_1 = (float)*(double *)(*(long *)(param_3 + 0x20) + (long)param_2 * 8);
  return;
}



/* Entry: 109ce5460; end: 109ce555b;  */

/* WARNING: Removing unreachable block (ram,0x000109ce6164) */

float * FUN_109ce5460(float *param_1,int param_2,long param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  code *pcVar4;
  int iVar5;
  int *piVar6;
  ulong *puVar7;
  uint uVar8;
  float *pfVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  undefined4 *unaff_x19;
  undefined8 *puVar15;
  long lVar16;
  float fVar17;
  undefined4 auStack_bc8 [2];
  undefined1 auStack_bc0 [24];
  undefined4 uStack_ba8;
  undefined1 auStack_ba0 [24];
  undefined4 uStack_b88;
  undefined1 auStack_b80 [24];
  undefined4 uStack_b68;
  undefined1 auStack_b60 [24];
  undefined4 uStack_b48;
  undefined1 auStack_b40 [24];
  undefined4 uStack_b28;
  undefined1 auStack_b20 [24];
  undefined4 uStack_b08;
  undefined1 auStack_b00 [24];
  undefined4 uStack_ae8;
  undefined1 auStack_ae0 [24];
  undefined4 uStack_ac8;
  undefined1 auStack_ac0 [24];
  undefined4 uStack_aa8;
  undefined1 auStack_aa0 [24];
  undefined4 uStack_a88;
  undefined1 auStack_a80 [24];
  undefined4 uStack_a68;
  undefined1 auStack_a60 [24];
  undefined4 uStack_a48;
  undefined1 auStack_a40 [24];
  undefined4 uStack_a28;
  undefined1 auStack_a20 [24];
  undefined4 uStack_a08;
  undefined1 auStack_a00 [24];
  undefined4 uStack_9e8;
  undefined1 auStack_9e0 [24];
  undefined4 uStack_9c8;
  undefined1 auStack_9c0 [24];
  undefined4 uStack_9a8;
  undefined1 auStack_9a0 [24];
  undefined4 uStack_988;
  undefined1 auStack_980 [24];
  undefined4 uStack_968;
  undefined1 auStack_960 [24];
  undefined4 uStack_948;
  undefined1 auStack_940 [24];
  undefined4 uStack_928;
  undefined1 auStack_920 [24];
  undefined4 uStack_908;
  undefined1 auStack_900 [24];
  undefined4 uStack_8e8;
  undefined1 auStack_8e0 [24];
  undefined4 uStack_8c8;
  undefined1 auStack_8c0 [24];
  undefined4 uStack_8a8;
  undefined1 auStack_8a0 [24];
  undefined4 uStack_888;
  undefined1 auStack_880 [24];
  undefined4 uStack_868;
  undefined1 auStack_860 [24];
  undefined4 uStack_848;
  undefined1 auStack_840 [24];
  undefined4 uStack_828;
  undefined1 auStack_820 [24];
  undefined4 uStack_808;
  undefined1 auStack_800 [24];
  undefined4 uStack_7e8;
  undefined1 auStack_7e0 [24];
  undefined4 uStack_7c8;
  undefined1 auStack_7c0 [24];
  undefined4 uStack_7a8;
  undefined1 auStack_7a0 [24];
  undefined4 uStack_788;
  undefined1 auStack_780 [24];
  undefined4 uStack_768;
  undefined1 auStack_760 [24];
  undefined4 uStack_748;
  undefined1 auStack_740 [24];
  undefined4 uStack_728;
  undefined1 auStack_720 [24];
  undefined4 uStack_708;
  undefined1 auStack_700 [24];
  undefined4 uStack_6e8;
  undefined1 auStack_6e0 [24];
  undefined4 uStack_6c8;
  undefined1 auStack_6c0 [24];
  undefined4 uStack_6a8;
  undefined1 auStack_6a0 [24];
  undefined4 uStack_688;
  undefined1 auStack_680 [24];
  undefined4 uStack_668;
  undefined1 auStack_660 [24];
  undefined4 uStack_648;
  undefined1 auStack_640 [24];
  undefined4 uStack_628;
  undefined1 auStack_620 [24];
  undefined4 uStack_608;
  undefined1 auStack_600 [24];
  undefined4 uStack_5e8;
  undefined1 auStack_5e0 [24];
  undefined4 uStack_5c8;
  undefined1 auStack_5c0 [24];
  undefined4 uStack_5a8;
  undefined1 auStack_5a0 [24];
  undefined4 uStack_588;
  undefined1 auStack_580 [24];
  undefined4 uStack_568;
  undefined1 auStack_560 [24];
  undefined4 uStack_548;
  undefined1 auStack_540 [24];
  undefined4 uStack_528;
  undefined1 auStack_520 [24];
  undefined4 uStack_508;
  undefined1 auStack_500 [24];
  undefined4 uStack_4e8;
  undefined1 auStack_4e0 [24];
  undefined4 uStack_4c8;
  undefined1 auStack_4c0 [24];
  undefined4 uStack_4a8;
  undefined1 auStack_4a0 [24];
  undefined4 uStack_488;
  undefined1 auStack_480 [24];
  undefined4 uStack_468;
  undefined1 auStack_460 [24];
  undefined4 uStack_448;
  undefined1 auStack_440 [24];
  undefined4 uStack_428;
  undefined1 auStack_420 [24];
  undefined4 uStack_408;
  undefined1 auStack_400 [24];
  undefined4 uStack_3e8;
  undefined1 auStack_3e0 [24];
  undefined4 uStack_3c8;
  undefined1 auStack_3c0 [24];
  undefined4 uStack_3a8;
  undefined1 auStack_3a0 [24];
  undefined4 uStack_388;
  undefined1 auStack_380 [24];
  undefined4 uStack_368;
  undefined1 auStack_360 [24];
  undefined4 uStack_348;
  undefined1 auStack_340 [24];
  undefined4 uStack_328;
  undefined1 auStack_320 [24];
  undefined4 uStack_308;
  undefined1 auStack_300 [24];
  undefined4 uStack_2e8;
  undefined1 auStack_2e0 [24];
  undefined4 uStack_2c8;
  undefined1 auStack_2c0 [24];
  undefined4 uStack_2a8;
  undefined1 auStack_2a0 [24];
  undefined4 uStack_288;
  undefined1 auStack_280 [24];
  undefined4 uStack_268;
  undefined1 auStack_260 [24];
  undefined4 uStack_248;
  undefined1 auStack_240 [24];
  undefined4 uStack_228;
  undefined1 auStack_220 [24];
  undefined4 uStack_208;
  undefined1 auStack_200 [24];
  undefined4 uStack_1e8;
  undefined1 auStack_1e0 [24];
  undefined4 uStack_1c8;
  undefined1 auStack_1c0 [24];
  undefined4 uStack_1a8;
  undefined1 auStack_1a0 [24];
  undefined4 uStack_188;
  undefined1 auStack_180 [24];
  undefined4 uStack_168;
  undefined1 auStack_160 [24];
  undefined4 uStack_148;
  undefined1 auStack_140 [24];
  undefined4 uStack_128;
  undefined1 auStack_120 [24];
  undefined4 uStack_108;
  undefined1 auStack_100 [24];
  undefined4 uStack_e8;
  undefined1 auStack_e0 [24];
  undefined4 uStack_c8;
  undefined1 auStack_c0 [24];
  undefined4 uStack_a8;
  undefined1 auStack_a0 [24];
  undefined4 uStack_88;
  undefined1 auStack_80 [24];
  undefined4 uStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  puVar7 = (ulong *)(*(ulong *)(param_3 + 0x50) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar7 + 0x17) < '\0') {
    puVar7 = (ulong *)*puVar7;
  }
  if (*param_4 == 2) {
    if ((*(byte *)(param_3 + 0x6c) & 1) == 0) {
      pfVar9 = (float *)(param_3 + 0x70);
    }
    else {
      iVar5 = *(int *)(param_3 + 100) * *(int *)(param_3 + 0x60);
      iVar1 = iVar5 * *(int *)(param_3 + 0x5c);
      if (iVar5 == 0 || iVar1 == 0) goto LAB_109ce5544;
      if (param_4[4] == 1) {
        iVar2 = 0;
        if (iVar1 != 0) {
          iVar2 = param_2 / iVar1;
        }
        uVar8 = 0;
        if (iVar5 != 0) {
          uVar8 = (param_2 - iVar2 * iVar1) / iVar5;
        }
      }
      else {
        uVar8 = 0;
        if (iVar1 != 0) {
          uVar8 = param_2 / iVar1;
        }
      }
      if (((int)uVar8 < 0) || (*(int *)(param_3 + 0x18) <= (int)uVar8)) goto LAB_109ce5550;
      pfVar9 = (float *)(*(long *)(param_3 + 0x20) + (ulong)uVar8 * 4);
    }
    fVar17 = *pfVar9 * (float)(int)((uint)*(byte *)((long)puVar7 + (long)param_2) -
                                   *(int *)(param_3 + 0x68));
LAB_109ce551c:
    *param_1 = fVar17;
    return param_1;
  }
  if (*param_4 == 1) {
    fVar17 = *(float *)(*(long *)(*(long *)(param_4 + 2) + 0x20) +
                       (ulong)*(byte *)((long)puVar7 + (long)param_2) * 4);
    goto LAB_109ce551c;
  }
  func_0x00010952d0c4(&UNK_10f5a99ed,&UNK_10f55aaab,&UNK_10f5a9b5e);
LAB_109ce5544:
  FUN_109cd880c(&UNK_10f5a9bc9);
LAB_109ce5550:
  piVar6 = (int *)&UNK_10f5a9b3c;
  FUN_109cd880c();
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001137e1b50 & 1) == 0) {
    iVar5 = 0x137e1b50;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      auStack_bc8[0] = 0;
      func_0x000107c31940(auStack_bc0,&UNK_10f5a56d0);
      uStack_ba8 = 1;
      func_0x000107c31940(auStack_ba0,&UNK_10f5a3b8e);
      uStack_b88 = 2;
      func_0x000107c31940(auStack_b80,&UNK_10f5a5316);
      uStack_b68 = 0x13;
      func_0x000107c31940(auStack_b60,&DAT_10f48702d);
      uStack_b48 = 3;
      func_0x000107c31940(auStack_b40,&UNK_10f5a3bb5);
      uStack_b28 = 4;
      func_0x000107c31940(auStack_b20,&UNK_10f5a39fa);
      uStack_b08 = 7;
      func_0x000107c31940(auStack_b00,&UNK_10f5a56f3);
      uStack_ae8 = 6;
      func_0x000107c31940(auStack_ae0,&UNK_10f5a56d4);
      uStack_ac8 = 8;
      func_0x000107c31940(auStack_ac0,&DAT_10f42625c);
      uStack_aa8 = 9;
      func_0x000107c31940(auStack_aa0,&UNK_10f5a5706);
      uStack_a88 = 10;
      func_0x000107c31940(auStack_a80,&UNK_10f5a570a);
      uStack_a68 = 0xb;
      func_0x000107c31940(auStack_a60,&UNK_10f5a571a);
      uStack_a48 = 0xc;
      func_0x000107c31940(auStack_a40,&UNK_10f5a5723);
      uStack_a28 = 0xe;
      func_0x000107c31940(auStack_a20,&UNK_10f5a48b5);
      uStack_a08 = 0xf;
      func_0x000107c31940(auStack_a00,&UNK_10f5a5127);
      uStack_9e8 = 0x10;
      func_0x000107c31940(auStack_9e0,&UNK_10f5a56bd);
      uStack_9c8 = 0x11;
      func_0x000107c31940(auStack_9c0,&UNK_10f5a483c);
      uStack_9a8 = 0x12;
      func_0x000107c31940(auStack_9a0,&UNK_10f5a5170);
      uStack_988 = 5;
      func_0x000107c31940(auStack_980,&UNK_10f491858);
      uStack_968 = 0xd;
      func_0x000107c31940(auStack_960,&UNK_10f5a56ae);
      uStack_948 = 0x14;
      func_0x000107c31940(auStack_940,&UNK_10f5a4b86);
      uStack_928 = 0x15;
      func_0x000107c31940(auStack_920,&UNK_10f596393);
      uStack_908 = 0x16;
      func_0x000107c31940(auStack_900,&UNK_10f5a4cb5);
      uStack_8e8 = 0x17;
      func_0x000107c31940(auStack_8e0,&UNK_10f5a523c);
      uStack_8c8 = 0x18;
      func_0x000107c31940(auStack_8c0,&UNK_10f5a5152);
      uStack_8a8 = 0x1a;
      func_0x000107c31940(auStack_8a0,&DAT_10f577b9e);
      uStack_888 = 0x1b;
      func_0x000107c31940(auStack_880,&DAT_10f3dd8e4);
      uStack_868 = 0x1c;
      func_0x000107c31940(auStack_860,&DAT_10f48d7c8);
      uStack_848 = 0x1d;
      func_0x000107c31940(auStack_840,&DAT_10f2da2c7);
      uStack_828 = 0x1e;
      func_0x000107c31940(auStack_820,&DAT_10f324ae5);
      uStack_808 = 0x1f;
      func_0x000107c31940(auStack_800,"exp");
      uStack_7e8 = 0x20;
      func_0x000107c31940(auStack_7e0,&DAT_10f3dd908);
      uStack_7c8 = 0x21;
      func_0x000107c31940(auStack_7c0,&DAT_10f3dd8e9);
      uStack_7a8 = 0x2c;
      func_0x000107c31940(auStack_7a0,&DAT_10f49182e);
      uStack_788 = 0x2d;
      func_0x000107c31940(auStack_780,&DAT_10f491680);
      uStack_768 = 0x22;
      func_0x000107c31940(auStack_760,&DAT_10f2e8c7d);
      uStack_748 = 0x23;
      func_0x000107c31940(auStack_740,&UNK_10f57e830);
      uStack_728 = 0x24;
      func_0x000107c31940(auStack_720,&UNK_10f5986df);
      uStack_708 = 0x25;
      func_0x000107c31940(auStack_700,&UNK_10f5a5823);
      uStack_6e8 = 0x26;
      func_0x000107c31940(auStack_6e0,&UNK_10f5a5818);
      uStack_6c8 = 0x28;
      func_0x000107c31940(auStack_6c0,&UNK_10f5a56fb);
      uStack_6a8 = 0x2a;
      func_0x000107c31940(auStack_6a0,&UNK_10f5a56dc);
      uStack_688 = 0x2b;
      func_0x000107c31940(auStack_680,&UNK_10f5a56e3);
      uStack_668 = 0x29;
      func_0x000107c31940(auStack_660,&UNK_10f5a56c5);
      uStack_648 = 0x2e;
      func_0x000107c31940(auStack_640,"slice");
      uStack_628 = 0x2f;
      func_0x000107c31940(auStack_620,&UNK_10f5a573a);
      uStack_608 = 0x30;
      func_0x000107c31940(auStack_600,&DAT_10f5a554f);
      uStack_5e8 = 0x31;
      func_0x000107c31940(auStack_5e0,&UNK_10f5a573f);
      uStack_5c8 = 0x32;
      func_0x000107c31940(auStack_5c0,&UNK_10f5a5732);
      uStack_5a8 = 0x33;
      func_0x000107c31940(auStack_5a0,&UNK_10f5a5573);
      uStack_588 = 0x34;
      func_0x000107c31940(auStack_580,&DAT_10f5a5592);
      uStack_568 = 0x35;
      func_0x000107c31940(auStack_560,&DAT_10f5a5597);
      uStack_548 = 0x36;
      func_0x000107c31940(auStack_540,&DAT_10f2dd06f);
      uStack_528 = 0x38;
      func_0x000107c31940(auStack_520,&UNK_10f5a5757);
      uStack_508 = 0x39;
      func_0x000107c31940(auStack_500,&UNK_10f5a574d);
      uStack_4e8 = 0x3a;
      func_0x000107c31940(auStack_4e0,&UNK_10f5a5762);
      uStack_4c8 = 0x37;
      func_0x000107c31940(auStack_4c0,&UNK_10f5a3b93);
      uStack_4a8 = 0x3b;
      func_0x000107c31940(auStack_4a0,&UNK_10f5a5773);
      uStack_488 = 0x3c;
      func_0x000107c31940(auStack_480,&UNK_10f5a5606);
      uStack_468 = 0x3d;
      func_0x000107c31940(auStack_460,&UNK_10f5a577e);
      uStack_448 = 0x3e;
      func_0x000107c31940(auStack_440,&UNK_10f5a5789);
      uStack_428 = 0x3f;
      func_0x000107c31940(auStack_420,&UNK_10f5a57a7);
      uStack_408 = 0x40;
      func_0x000107c31940(auStack_400,&UNK_10f5a5792);
      uStack_3e8 = 0x41;
      func_0x000107c31940(auStack_3e0,&UNK_10f5a579f);
      uStack_3c8 = 0x42;
      func_0x000107c31940(auStack_3c0,&UNK_10f5a57b7);
      uStack_3a8 = 0x43;
      func_0x000107c31940(auStack_3a0,&UNK_10f5a564b);
      uStack_388 = 0x44;
      func_0x000107c31940(auStack_380,&UNK_10f5a9bf1);
      uStack_368 = 0x45;
      func_0x000107c31940(auStack_360,"range");
      uStack_348 = 0x46;
      func_0x000107c31940(auStack_340,&UNK_10f5a57c1);
      uStack_328 = 0x47;
      func_0x000107c31940(auStack_320,&UNK_10f5a57c8);
      uStack_308 = 0x48;
      func_0x000107c31940(auStack_300,&UNK_10f5a57cc);
      uStack_2e8 = 0x49;
      func_0x000107c31940(auStack_2e0,&DAT_10f518d33);
      uStack_2c8 = 0x4a;
      func_0x000107c31940(auStack_2c0,&UNK_10f5a57bc);
      uStack_2a8 = 0x4b;
      func_0x000107c31940(auStack_2a0,&DAT_10f595cf3);
      uStack_288 = 0x4c;
      func_0x000107c31940(auStack_280,"square");
      uStack_268 = 0x4d;
      func_0x000107c31940(auStack_260,&UNK_10f5a57d2);
      uStack_248 = 0x4e;
      func_0x000107c31940(auStack_240,&UNK_10f5a9bfc);
      uStack_228 = 0x4f;
      func_0x000107c31940(auStack_220,&UNK_10f5a9c05);
      uStack_208 = 0x50;
      func_0x000107c31940(auStack_200,&UNK_10f466685);
      uStack_1e8 = 0x51;
      func_0x000107c31940(auStack_1e0,"select");
      uStack_1c8 = 0x52;
      func_0x000107c31940(auStack_1c0,"fill");
      uStack_1a8 = 0x53;
      func_0x000107c31940(auStack_1a0,&UNK_10f5a57d6);
      uStack_188 = 0x54;
      func_0x000107c31940(auStack_180,&UNK_10f5a57da);
      uStack_168 = 0x55;
      func_0x000107c31940(auStack_160,&UNK_10f5a57e6);
      uStack_148 = 0x56;
      func_0x000107c31940(auStack_140,&DAT_10f2c6059);
      uStack_128 = 0x57;
      func_0x000107c31940(auStack_120,&UNK_10f491797);
      uStack_108 = 0x58;
      func_0x000107c31940(auStack_100,&UNK_10f5a57ee);
      uStack_e8 = 0x59;
      func_0x000107c31940(auStack_e0,&UNK_10f5a57fd);
      uStack_c8 = 0x5a;
      func_0x000107c31940(auStack_c0,&UNK_10f5a5809);
      uStack_a8 = 0x5b;
      func_0x000107c31940(auStack_a0,&UNK_10f5a9c0f);
      uStack_88 = 0x5c;
      func_0x000107c31940(auStack_80,&UNK_10f5a9c1a);
      uStack_68 = 0x5d;
      func_0x000107c31940(auStack_60,&UNK_10f5a580e);
      unaff_x19 = auStack_bc8;
      FUN_109ce7250(auStack_bc8,0x5c);
      lVar16 = 0xb80;
      do {
        lVar16 = lVar16 + -0x20;
      } while (lVar16 != 0);
      ___cxa_guard_release(0x1137e1b50);
    }
  }
  if (uRam00000001137e1b68 != 0) {
    uVar10 = (ulong)*piVar6;
    uVar11 = uRam00000001137e1b68 - 1;
    if ((uRam00000001137e1b68 & uVar11) == 0) {
      uVar12 = uVar11 & uVar10;
    }
    else {
      uVar12 = uVar10;
      if (uRam00000001137e1b68 <= uVar10) {
        uVar12 = 0;
        if (uRam00000001137e1b68 != 0) {
          uVar12 = uVar10 / uRam00000001137e1b68;
        }
        uVar12 = uVar10 - uVar12 * uRam00000001137e1b68;
      }
    }
    plVar13 = *(long **)(lRam00000001137e1b60 + uVar12 * 8);
    if (plVar13 != (long *)0x0) {
      do {
        while( true ) {
          plVar13 = (long *)*plVar13;
          if (plVar13 == (long *)0x0) goto LAB_109ce5624;
          uVar14 = plVar13[1];
          if (uVar14 != uVar10) break;
          if (*(int *)(plVar13 + 2) == *piVar6) {
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
              ___stack_chk_fail();
              puVar15 = (undefined8 *)(unaff_x19 + 0x2da);
              lVar16 = -0xb80;
              do {
                if (*(char *)((long)puVar15 + 0x17) < '\0') {
                  __ZdlPv(*puVar15);
                }
                puVar15 = puVar15 + -4;
                lVar16 = lVar16 + 0x20;
              } while (lVar16 != 0);
              do {
                ___cxa_guard_abort(0x1137e1b50);
                __Unwind_Resume();
              } while( true );
            }
            return (float *)(plVar13 + 3);
          }
        }
        if ((uRam00000001137e1b68 & uVar11) == 0) {
          uVar14 = uVar14 & uVar11;
        }
        else if (uRam00000001137e1b68 <= uVar14) {
          uVar3 = 0;
          if (uRam00000001137e1b68 != 0) {
            uVar3 = uVar14 / uRam00000001137e1b68;
          }
          uVar14 = uVar14 - uVar3 * uRam00000001137e1b68;
        }
      } while (uVar14 == uVar12);
    }
  }
LAB_109ce5624:
  func_0x000109262df8(&UNK_10f639994);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109ce5634);
  (*pcVar4)();
}



/* Entry: 109ce555c; end: 109ce6363;  */

/* WARNING: Removing unreachable block (ram,0x000109ce6164) */

long FUN_109ce555c(int *param_1)

{
  ulong uVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined4 *unaff_x19;
  undefined8 *puVar9;
  long lVar10;
  undefined4 auStack_bb8 [2];
  undefined1 auStack_bb0 [24];
  undefined4 uStack_b98;
  undefined1 auStack_b90 [24];
  undefined4 uStack_b78;
  undefined1 auStack_b70 [24];
  undefined4 uStack_b58;
  undefined1 auStack_b50 [24];
  undefined4 uStack_b38;
  undefined1 auStack_b30 [24];
  undefined4 uStack_b18;
  undefined1 auStack_b10 [24];
  undefined4 uStack_af8;
  undefined1 auStack_af0 [24];
  undefined4 uStack_ad8;
  undefined1 auStack_ad0 [24];
  undefined4 uStack_ab8;
  undefined1 auStack_ab0 [24];
  undefined4 uStack_a98;
  undefined1 auStack_a90 [24];
  undefined4 uStack_a78;
  undefined1 auStack_a70 [24];
  undefined4 uStack_a58;
  undefined1 auStack_a50 [24];
  undefined4 uStack_a38;
  undefined1 auStack_a30 [24];
  undefined4 uStack_a18;
  undefined1 auStack_a10 [24];
  undefined4 uStack_9f8;
  undefined1 auStack_9f0 [24];
  undefined4 uStack_9d8;
  undefined1 auStack_9d0 [24];
  undefined4 uStack_9b8;
  undefined1 auStack_9b0 [24];
  undefined4 uStack_998;
  undefined1 auStack_990 [24];
  undefined4 uStack_978;
  undefined1 auStack_970 [24];
  undefined4 uStack_958;
  undefined1 auStack_950 [24];
  undefined4 uStack_938;
  undefined1 auStack_930 [24];
  undefined4 uStack_918;
  undefined1 auStack_910 [24];
  undefined4 uStack_8f8;
  undefined1 auStack_8f0 [24];
  undefined4 uStack_8d8;
  undefined1 auStack_8d0 [24];
  undefined4 uStack_8b8;
  undefined1 auStack_8b0 [24];
  undefined4 uStack_898;
  undefined1 auStack_890 [24];
  undefined4 uStack_878;
  undefined1 auStack_870 [24];
  undefined4 uStack_858;
  undefined1 auStack_850 [24];
  undefined4 uStack_838;
  undefined1 auStack_830 [24];
  undefined4 uStack_818;
  undefined1 auStack_810 [24];
  undefined4 uStack_7f8;
  undefined1 auStack_7f0 [24];
  undefined4 uStack_7d8;
  undefined1 auStack_7d0 [24];
  undefined4 uStack_7b8;
  undefined1 auStack_7b0 [24];
  undefined4 uStack_798;
  undefined1 auStack_790 [24];
  undefined4 uStack_778;
  undefined1 auStack_770 [24];
  undefined4 uStack_758;
  undefined1 auStack_750 [24];
  undefined4 uStack_738;
  undefined1 auStack_730 [24];
  undefined4 uStack_718;
  undefined1 auStack_710 [24];
  undefined4 uStack_6f8;
  undefined1 auStack_6f0 [24];
  undefined4 uStack_6d8;
  undefined1 auStack_6d0 [24];
  undefined4 uStack_6b8;
  undefined1 auStack_6b0 [24];
  undefined4 uStack_698;
  undefined1 auStack_690 [24];
  undefined4 uStack_678;
  undefined1 auStack_670 [24];
  undefined4 uStack_658;
  undefined1 auStack_650 [24];
  undefined4 uStack_638;
  undefined1 auStack_630 [24];
  undefined4 uStack_618;
  undefined1 auStack_610 [24];
  undefined4 uStack_5f8;
  undefined1 auStack_5f0 [24];
  undefined4 uStack_5d8;
  undefined1 auStack_5d0 [24];
  undefined4 uStack_5b8;
  undefined1 auStack_5b0 [24];
  undefined4 uStack_598;
  undefined1 auStack_590 [24];
  undefined4 uStack_578;
  undefined1 auStack_570 [24];
  undefined4 uStack_558;
  undefined1 auStack_550 [24];
  undefined4 uStack_538;
  undefined1 auStack_530 [24];
  undefined4 uStack_518;
  undefined1 auStack_510 [24];
  undefined4 uStack_4f8;
  undefined1 auStack_4f0 [24];
  undefined4 uStack_4d8;
  undefined1 auStack_4d0 [24];
  undefined4 uStack_4b8;
  undefined1 auStack_4b0 [24];
  undefined4 uStack_498;
  undefined1 auStack_490 [24];
  undefined4 uStack_478;
  undefined1 auStack_470 [24];
  undefined4 uStack_458;
  undefined1 auStack_450 [24];
  undefined4 uStack_438;
  undefined1 auStack_430 [24];
  undefined4 uStack_418;
  undefined1 auStack_410 [24];
  undefined4 uStack_3f8;
  undefined1 auStack_3f0 [24];
  undefined4 uStack_3d8;
  undefined1 auStack_3d0 [24];
  undefined4 uStack_3b8;
  undefined1 auStack_3b0 [24];
  undefined4 uStack_398;
  undefined1 auStack_390 [24];
  undefined4 uStack_378;
  undefined1 auStack_370 [24];
  undefined4 uStack_358;
  undefined1 auStack_350 [24];
  undefined4 uStack_338;
  undefined1 auStack_330 [24];
  undefined4 uStack_318;
  undefined1 auStack_310 [24];
  undefined4 uStack_2f8;
  undefined1 auStack_2f0 [24];
  undefined4 uStack_2d8;
  undefined1 auStack_2d0 [24];
  undefined4 uStack_2b8;
  undefined1 auStack_2b0 [24];
  undefined4 uStack_298;
  undefined1 auStack_290 [24];
  undefined4 uStack_278;
  undefined1 auStack_270 [24];
  undefined4 uStack_258;
  undefined1 auStack_250 [24];
  undefined4 uStack_238;
  undefined1 auStack_230 [24];
  undefined4 uStack_218;
  undefined1 auStack_210 [24];
  undefined4 uStack_1f8;
  undefined1 auStack_1f0 [24];
  undefined4 uStack_1d8;
  undefined1 auStack_1d0 [24];
  undefined4 uStack_1b8;
  undefined1 auStack_1b0 [24];
  undefined4 uStack_198;
  undefined1 auStack_190 [24];
  undefined4 uStack_178;
  undefined1 auStack_170 [24];
  undefined4 uStack_158;
  undefined1 auStack_150 [24];
  undefined4 uStack_138;
  undefined1 auStack_130 [24];
  undefined4 uStack_118;
  undefined1 auStack_110 [24];
  undefined4 uStack_f8;
  undefined1 auStack_f0 [24];
  undefined4 uStack_d8;
  undefined1 auStack_d0 [24];
  undefined4 uStack_b8;
  undefined1 auStack_b0 [24];
  undefined4 uStack_98;
  undefined1 auStack_90 [24];
  undefined4 uStack_78;
  undefined1 auStack_70 [24];
  undefined4 uStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001137e1b50 & 1) == 0) {
    iVar3 = 0x137e1b50;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      auStack_bb8[0] = 0;
      func_0x000107c31940(auStack_bb0,&UNK_10f5a56d0);
      uStack_b98 = 1;
      func_0x000107c31940(auStack_b90,&UNK_10f5a3b8e);
      uStack_b78 = 2;
      func_0x000107c31940(auStack_b70,&UNK_10f5a5316);
      uStack_b58 = 0x13;
      func_0x000107c31940(auStack_b50,&DAT_10f48702d);
      uStack_b38 = 3;
      func_0x000107c31940(auStack_b30,&UNK_10f5a3bb5);
      uStack_b18 = 4;
      func_0x000107c31940(auStack_b10,&UNK_10f5a39fa);
      uStack_af8 = 7;
      func_0x000107c31940(auStack_af0,&UNK_10f5a56f3);
      uStack_ad8 = 6;
      func_0x000107c31940(auStack_ad0,&UNK_10f5a56d4);
      uStack_ab8 = 8;
      func_0x000107c31940(auStack_ab0,&DAT_10f42625c);
      uStack_a98 = 9;
      func_0x000107c31940(auStack_a90,&UNK_10f5a5706);
      uStack_a78 = 10;
      func_0x000107c31940(auStack_a70,&UNK_10f5a570a);
      uStack_a58 = 0xb;
      func_0x000107c31940(auStack_a50,&UNK_10f5a571a);
      uStack_a38 = 0xc;
      func_0x000107c31940(auStack_a30,&UNK_10f5a5723);
      uStack_a18 = 0xe;
      func_0x000107c31940(auStack_a10,&UNK_10f5a48b5);
      uStack_9f8 = 0xf;
      func_0x000107c31940(auStack_9f0,&UNK_10f5a5127);
      uStack_9d8 = 0x10;
      func_0x000107c31940(auStack_9d0,&UNK_10f5a56bd);
      uStack_9b8 = 0x11;
      func_0x000107c31940(auStack_9b0,&UNK_10f5a483c);
      uStack_998 = 0x12;
      func_0x000107c31940(auStack_990,&UNK_10f5a5170);
      uStack_978 = 5;
      func_0x000107c31940(auStack_970,&UNK_10f491858);
      uStack_958 = 0xd;
      func_0x000107c31940(auStack_950,&UNK_10f5a56ae);
      uStack_938 = 0x14;
      func_0x000107c31940(auStack_930,&UNK_10f5a4b86);
      uStack_918 = 0x15;
      func_0x000107c31940(auStack_910,&UNK_10f596393);
      uStack_8f8 = 0x16;
      func_0x000107c31940(auStack_8f0,&UNK_10f5a4cb5);
      uStack_8d8 = 0x17;
      func_0x000107c31940(auStack_8d0,&UNK_10f5a523c);
      uStack_8b8 = 0x18;
      func_0x000107c31940(auStack_8b0,&UNK_10f5a5152);
      uStack_898 = 0x1a;
      func_0x000107c31940(auStack_890,&DAT_10f577b9e);
      uStack_878 = 0x1b;
      func_0x000107c31940(auStack_870,&DAT_10f3dd8e4);
      uStack_858 = 0x1c;
      func_0x000107c31940(auStack_850,&DAT_10f48d7c8);
      uStack_838 = 0x1d;
      func_0x000107c31940(auStack_830,&DAT_10f2da2c7);
      uStack_818 = 0x1e;
      func_0x000107c31940(auStack_810,&DAT_10f324ae5);
      uStack_7f8 = 0x1f;
      func_0x000107c31940(auStack_7f0,"exp");
      uStack_7d8 = 0x20;
      func_0x000107c31940(auStack_7d0,&DAT_10f3dd908);
      uStack_7b8 = 0x21;
      func_0x000107c31940(auStack_7b0,&DAT_10f3dd8e9);
      uStack_798 = 0x2c;
      func_0x000107c31940(auStack_790,&DAT_10f49182e);
      uStack_778 = 0x2d;
      func_0x000107c31940(auStack_770,&DAT_10f491680);
      uStack_758 = 0x22;
      func_0x000107c31940(auStack_750,&DAT_10f2e8c7d);
      uStack_738 = 0x23;
      func_0x000107c31940(auStack_730,&UNK_10f57e830);
      uStack_718 = 0x24;
      func_0x000107c31940(auStack_710,&UNK_10f5986df);
      uStack_6f8 = 0x25;
      func_0x000107c31940(auStack_6f0,&UNK_10f5a5823);
      uStack_6d8 = 0x26;
      func_0x000107c31940(auStack_6d0,&UNK_10f5a5818);
      uStack_6b8 = 0x28;
      func_0x000107c31940(auStack_6b0,&UNK_10f5a56fb);
      uStack_698 = 0x2a;
      func_0x000107c31940(auStack_690,&UNK_10f5a56dc);
      uStack_678 = 0x2b;
      func_0x000107c31940(auStack_670,&UNK_10f5a56e3);
      uStack_658 = 0x29;
      func_0x000107c31940(auStack_650,&UNK_10f5a56c5);
      uStack_638 = 0x2e;
      func_0x000107c31940(auStack_630,"slice");
      uStack_618 = 0x2f;
      func_0x000107c31940(auStack_610,&UNK_10f5a573a);
      uStack_5f8 = 0x30;
      func_0x000107c31940(auStack_5f0,&DAT_10f5a554f);
      uStack_5d8 = 0x31;
      func_0x000107c31940(auStack_5d0,&UNK_10f5a573f);
      uStack_5b8 = 0x32;
      func_0x000107c31940(auStack_5b0,&UNK_10f5a5732);
      uStack_598 = 0x33;
      func_0x000107c31940(auStack_590,&UNK_10f5a5573);
      uStack_578 = 0x34;
      func_0x000107c31940(auStack_570,&DAT_10f5a5592);
      uStack_558 = 0x35;
      func_0x000107c31940(auStack_550,&DAT_10f5a5597);
      uStack_538 = 0x36;
      func_0x000107c31940(auStack_530,&DAT_10f2dd06f);
      uStack_518 = 0x38;
      func_0x000107c31940(auStack_510,&UNK_10f5a5757);
      uStack_4f8 = 0x39;
      func_0x000107c31940(auStack_4f0,&UNK_10f5a574d);
      uStack_4d8 = 0x3a;
      func_0x000107c31940(auStack_4d0,&UNK_10f5a5762);
      uStack_4b8 = 0x37;
      func_0x000107c31940(auStack_4b0,&UNK_10f5a3b93);
      uStack_498 = 0x3b;
      func_0x000107c31940(auStack_490,&UNK_10f5a5773);
      uStack_478 = 0x3c;
      func_0x000107c31940(auStack_470,&UNK_10f5a5606);
      uStack_458 = 0x3d;
      func_0x000107c31940(auStack_450,&UNK_10f5a577e);
      uStack_438 = 0x3e;
      func_0x000107c31940(auStack_430,&UNK_10f5a5789);
      uStack_418 = 0x3f;
      func_0x000107c31940(auStack_410,&UNK_10f5a57a7);
      uStack_3f8 = 0x40;
      func_0x000107c31940(auStack_3f0,&UNK_10f5a5792);
      uStack_3d8 = 0x41;
      func_0x000107c31940(auStack_3d0,&UNK_10f5a579f);
      uStack_3b8 = 0x42;
      func_0x000107c31940(auStack_3b0,&UNK_10f5a57b7);
      uStack_398 = 0x43;
      func_0x000107c31940(auStack_390,&UNK_10f5a564b);
      uStack_378 = 0x44;
      func_0x000107c31940(auStack_370,&UNK_10f5a9bf1);
      uStack_358 = 0x45;
      func_0x000107c31940(auStack_350,"range");
      uStack_338 = 0x46;
      func_0x000107c31940(auStack_330,&UNK_10f5a57c1);
      uStack_318 = 0x47;
      func_0x000107c31940(auStack_310,&UNK_10f5a57c8);
      uStack_2f8 = 0x48;
      func_0x000107c31940(auStack_2f0,&UNK_10f5a57cc);
      uStack_2d8 = 0x49;
      func_0x000107c31940(auStack_2d0,&DAT_10f518d33);
      uStack_2b8 = 0x4a;
      func_0x000107c31940(auStack_2b0,&UNK_10f5a57bc);
      uStack_298 = 0x4b;
      func_0x000107c31940(auStack_290,&DAT_10f595cf3);
      uStack_278 = 0x4c;
      func_0x000107c31940(auStack_270,"square");
      uStack_258 = 0x4d;
      func_0x000107c31940(auStack_250,&UNK_10f5a57d2);
      uStack_238 = 0x4e;
      func_0x000107c31940(auStack_230,&UNK_10f5a9bfc);
      uStack_218 = 0x4f;
      func_0x000107c31940(auStack_210,&UNK_10f5a9c05);
      uStack_1f8 = 0x50;
      func_0x000107c31940(auStack_1f0,&UNK_10f466685);
      uStack_1d8 = 0x51;
      func_0x000107c31940(auStack_1d0,"select");
      uStack_1b8 = 0x52;
      func_0x000107c31940(auStack_1b0,"fill");
      uStack_198 = 0x53;
      func_0x000107c31940(auStack_190,&UNK_10f5a57d6);
      uStack_178 = 0x54;
      func_0x000107c31940(auStack_170,&UNK_10f5a57da);
      uStack_158 = 0x55;
      func_0x000107c31940(auStack_150,&UNK_10f5a57e6);
      uStack_138 = 0x56;
      func_0x000107c31940(auStack_130,&DAT_10f2c6059);
      uStack_118 = 0x57;
      func_0x000107c31940(auStack_110,&UNK_10f491797);
      uStack_f8 = 0x58;
      func_0x000107c31940(auStack_f0,&UNK_10f5a57ee);
      uStack_d8 = 0x59;
      func_0x000107c31940(auStack_d0,&UNK_10f5a57fd);
      uStack_b8 = 0x5a;
      func_0x000107c31940(auStack_b0,&UNK_10f5a5809);
      uStack_98 = 0x5b;
      func_0x000107c31940(auStack_90,&UNK_10f5a9c0f);
      uStack_78 = 0x5c;
      func_0x000107c31940(auStack_70,&UNK_10f5a9c1a);
      uStack_58 = 0x5d;
      func_0x000107c31940(auStack_50,&UNK_10f5a580e);
      unaff_x19 = auStack_bb8;
      FUN_109ce7250(auStack_bb8,0x5c);
      lVar10 = 0xb80;
      do {
        lVar10 = lVar10 + -0x20;
      } while (lVar10 != 0);
      ___cxa_guard_release(0x1137e1b50);
    }
  }
  if (uRam00000001137e1b68 != 0) {
    uVar4 = (ulong)*param_1;
    uVar5 = uRam00000001137e1b68 - 1;
    if ((uRam00000001137e1b68 & uVar5) == 0) {
      uVar6 = uVar5 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uRam00000001137e1b68 <= uVar4) {
        uVar6 = 0;
        if (uRam00000001137e1b68 != 0) {
          uVar6 = uVar4 / uRam00000001137e1b68;
        }
        uVar6 = uVar4 - uVar6 * uRam00000001137e1b68;
      }
    }
    plVar7 = *(long **)(lRam00000001137e1b60 + uVar6 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_109ce5624;
          uVar8 = plVar7[1];
          if (uVar8 != uVar4) break;
          if (*(int *)(plVar7 + 2) == *param_1) {
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
              return (long)(plVar7 + 3);
            }
            ___stack_chk_fail();
            puVar9 = (undefined8 *)(unaff_x19 + 0x2da);
            lVar10 = -0xb80;
            do {
              if (*(char *)((long)puVar9 + 0x17) < '\0') {
                __ZdlPv(*puVar9);
              }
              puVar9 = puVar9 + -4;
              lVar10 = lVar10 + 0x20;
            } while (lVar10 != 0);
            do {
              ___cxa_guard_abort(0x1137e1b50);
              __Unwind_Resume();
            } while( true );
          }
        }
        if ((uRam00000001137e1b68 & uVar5) == 0) {
          uVar8 = uVar8 & uVar5;
        }
        else if (uRam00000001137e1b68 <= uVar8) {
          uVar1 = 0;
          if (uRam00000001137e1b68 != 0) {
            uVar1 = uVar8 / uRam00000001137e1b68;
          }
          uVar8 = uVar8 - uVar1 * uRam00000001137e1b68;
        }
      } while (uVar8 == uVar6);
    }
  }
LAB_109ce5624:
  func_0x000109262df8(&UNK_10f639994);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109ce5634);
  (*pcVar2)();
}



/* Entry: 109ce6364; end: 109ce71b3;  */

/* WARNING: Removing unreachable block (ram,0x000109ce6f98) */

long * FUN_109ce6364(long param_1)

{
  ulong uVar1;
  long *plVar2;
  code *pcVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  char *pcVar9;
  ulong uVar10;
  long *plVar11;
  undefined1 auStack_bd8 [24];
  undefined4 uStack_bc0;
  undefined1 auStack_bb8 [24];
  undefined4 uStack_ba0;
  undefined1 auStack_b98 [24];
  undefined4 uStack_b80;
  undefined1 auStack_b78 [24];
  undefined4 uStack_b60;
  undefined1 auStack_b58 [24];
  undefined4 uStack_b40;
  undefined1 auStack_b38 [24];
  undefined4 uStack_b20;
  undefined1 auStack_b18 [24];
  undefined4 uStack_b00;
  undefined1 auStack_af8 [24];
  undefined4 uStack_ae0;
  undefined1 auStack_ad8 [24];
  undefined4 uStack_ac0;
  undefined1 auStack_ab8 [24];
  undefined4 uStack_aa0;
  undefined1 auStack_a98 [24];
  undefined4 uStack_a80;
  undefined1 auStack_a78 [24];
  undefined4 uStack_a60;
  undefined1 auStack_a58 [24];
  undefined4 uStack_a40;
  undefined1 auStack_a38 [24];
  undefined4 uStack_a20;
  undefined1 auStack_a18 [24];
  undefined4 uStack_a00;
  undefined1 auStack_9f8 [24];
  undefined4 uStack_9e0;
  undefined1 auStack_9d8 [24];
  undefined4 uStack_9c0;
  undefined1 auStack_9b8 [24];
  undefined4 uStack_9a0;
  undefined1 auStack_998 [24];
  undefined4 uStack_980;
  undefined1 auStack_978 [24];
  undefined4 uStack_960;
  undefined1 auStack_958 [24];
  undefined4 uStack_940;
  undefined1 auStack_938 [24];
  undefined4 uStack_920;
  undefined1 auStack_918 [24];
  undefined4 uStack_900;
  undefined1 auStack_8f8 [24];
  undefined4 uStack_8e0;
  undefined1 auStack_8d8 [24];
  undefined4 uStack_8c0;
  undefined1 auStack_8b8 [24];
  undefined4 uStack_8a0;
  undefined1 auStack_898 [24];
  undefined4 uStack_880;
  undefined1 auStack_878 [24];
  undefined4 uStack_860;
  undefined1 auStack_858 [24];
  undefined4 uStack_840;
  undefined1 auStack_838 [24];
  undefined4 uStack_820;
  undefined1 auStack_818 [24];
  undefined4 uStack_800;
  undefined1 auStack_7f8 [24];
  undefined4 uStack_7e0;
  undefined1 auStack_7d8 [24];
  undefined4 uStack_7c0;
  undefined1 auStack_7b8 [24];
  undefined4 uStack_7a0;
  undefined1 auStack_798 [24];
  undefined4 uStack_780;
  undefined1 auStack_778 [24];
  undefined4 uStack_760;
  undefined1 auStack_758 [24];
  undefined4 uStack_740;
  undefined1 auStack_738 [24];
  undefined4 uStack_720;
  undefined1 auStack_718 [24];
  undefined4 uStack_700;
  undefined1 auStack_6f8 [24];
  undefined4 uStack_6e0;
  undefined1 auStack_6d8 [24];
  undefined4 uStack_6c0;
  undefined1 auStack_6b8 [24];
  undefined4 uStack_6a0;
  undefined1 auStack_698 [24];
  undefined4 uStack_680;
  undefined1 auStack_678 [24];
  undefined4 uStack_660;
  undefined1 auStack_658 [24];
  undefined4 uStack_640;
  undefined1 auStack_638 [24];
  undefined4 uStack_620;
  undefined1 auStack_618 [24];
  undefined4 uStack_600;
  undefined1 auStack_5f8 [24];
  undefined4 uStack_5e0;
  undefined1 auStack_5d8 [24];
  undefined4 uStack_5c0;
  undefined1 auStack_5b8 [24];
  undefined4 uStack_5a0;
  undefined1 auStack_598 [24];
  undefined4 uStack_580;
  undefined1 auStack_578 [24];
  undefined4 uStack_560;
  undefined1 auStack_558 [24];
  undefined4 uStack_540;
  undefined1 auStack_538 [24];
  undefined4 uStack_520;
  undefined1 auStack_518 [24];
  undefined4 uStack_500;
  undefined1 auStack_4f8 [24];
  undefined4 uStack_4e0;
  undefined1 auStack_4d8 [24];
  undefined4 uStack_4c0;
  undefined1 auStack_4b8 [24];
  undefined4 uStack_4a0;
  undefined1 auStack_498 [24];
  undefined4 uStack_480;
  undefined1 auStack_478 [24];
  undefined4 uStack_460;
  undefined1 auStack_458 [24];
  undefined4 uStack_440;
  undefined1 auStack_438 [24];
  undefined4 uStack_420;
  undefined1 auStack_418 [24];
  undefined4 uStack_400;
  undefined1 auStack_3f8 [24];
  undefined4 uStack_3e0;
  undefined1 auStack_3d8 [24];
  undefined4 uStack_3c0;
  undefined1 auStack_3b8 [24];
  undefined4 uStack_3a0;
  undefined1 auStack_398 [24];
  undefined4 uStack_380;
  undefined1 auStack_378 [24];
  undefined4 uStack_360;
  undefined1 auStack_358 [24];
  undefined4 uStack_340;
  undefined1 auStack_338 [24];
  undefined4 uStack_320;
  undefined1 auStack_318 [24];
  undefined4 uStack_300;
  undefined1 auStack_2f8 [24];
  undefined4 uStack_2e0;
  undefined1 auStack_2d8 [24];
  undefined4 uStack_2c0;
  undefined1 auStack_2b8 [24];
  undefined4 uStack_2a0;
  undefined1 auStack_298 [24];
  undefined4 uStack_280;
  undefined1 auStack_278 [24];
  undefined4 uStack_260;
  undefined1 auStack_258 [24];
  undefined4 uStack_240;
  undefined1 auStack_238 [24];
  undefined4 uStack_220;
  undefined1 auStack_218 [24];
  undefined4 uStack_200;
  undefined1 auStack_1f8 [24];
  undefined4 uStack_1e0;
  undefined1 auStack_1d8 [24];
  undefined4 uStack_1c0;
  undefined1 auStack_1b8 [24];
  undefined4 uStack_1a0;
  undefined1 auStack_198 [24];
  undefined4 uStack_180;
  undefined1 auStack_178 [24];
  undefined4 uStack_160;
  undefined1 auStack_158 [24];
  undefined4 uStack_140;
  undefined1 auStack_138 [24];
  undefined4 uStack_120;
  undefined1 auStack_118 [24];
  undefined4 uStack_100;
  undefined1 auStack_f8 [24];
  undefined4 uStack_e0;
  undefined1 auStack_d8 [24];
  undefined4 uStack_c0;
  undefined1 auStack_b8 [24];
  undefined4 uStack_a0;
  undefined1 auStack_98 [24];
  undefined4 uStack_80;
  undefined1 auStack_78 [24];
  undefined4 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001137e1b58 & 1) == 0) {
    iVar4 = 0x137e1b58;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x000107c31940(auStack_bd8,&UNK_10f5a56d0);
      uStack_bc0 = 0;
      func_0x000107c31940(auStack_bb8,&UNK_10f5a3b8e);
      uStack_ba0 = 1;
      func_0x000107c31940(auStack_b98,&UNK_10f5a5316);
      uStack_b80 = 2;
      func_0x000107c31940(auStack_b78,&DAT_10f48702d);
      uStack_b60 = 0x13;
      func_0x000107c31940(auStack_b58,&UNK_10f5a3bb5);
      uStack_b40 = 3;
      func_0x000107c31940(auStack_b38,&UNK_10f5a39fa);
      uStack_b20 = 4;
      func_0x000107c31940(auStack_b18,&UNK_10f5a56f3);
      uStack_b00 = 7;
      func_0x000107c31940(auStack_af8,&UNK_10f5a56d4);
      uStack_ae0 = 6;
      func_0x000107c31940(auStack_ad8,&DAT_10f42625c);
      uStack_ac0 = 8;
      func_0x000107c31940(auStack_ab8,&UNK_10f5a5706);
      uStack_aa0 = 9;
      func_0x000107c31940(auStack_a98,&UNK_10f5a570a);
      uStack_a80 = 10;
      func_0x000107c31940(auStack_a78,&UNK_10f5a571a);
      uStack_a60 = 0xb;
      func_0x000107c31940(auStack_a58,&UNK_10f5a5723);
      uStack_a40 = 0xc;
      func_0x000107c31940(auStack_a38,&UNK_10f5a48b5);
      uStack_a20 = 0xe;
      func_0x000107c31940(auStack_a18,&UNK_10f5a5127);
      uStack_a00 = 0xf;
      func_0x000107c31940(auStack_9f8,&UNK_10f5a56bd);
      uStack_9e0 = 0x10;
      func_0x000107c31940(auStack_9d8,&UNK_10f5a483c);
      uStack_9c0 = 0x11;
      func_0x000107c31940(auStack_9b8,&UNK_10f5a5170);
      uStack_9a0 = 0x12;
      func_0x000107c31940(auStack_998,&UNK_10f491858);
      uStack_980 = 5;
      func_0x000107c31940(auStack_978,&UNK_10f5a56ae);
      uStack_960 = 0xd;
      func_0x000107c31940(auStack_958,&UNK_10f5a4b86);
      uStack_940 = 0x14;
      func_0x000107c31940(auStack_938,&UNK_10f596393);
      uStack_920 = 0x15;
      func_0x000107c31940(auStack_918,&UNK_10f5a4cb5);
      uStack_900 = 0x16;
      func_0x000107c31940(auStack_8f8,&UNK_10f5a523c);
      uStack_8e0 = 0x17;
      func_0x000107c31940(auStack_8d8,&UNK_10f5a5152);
      uStack_8c0 = 0x18;
      func_0x000107c31940(auStack_8b8,&DAT_10f577b9e);
      uStack_8a0 = 0x1a;
      func_0x000107c31940(auStack_898,&DAT_10f3dd8e4);
      uStack_880 = 0x1b;
      func_0x000107c31940(auStack_878,&DAT_10f48d7c8);
      uStack_860 = 0x1c;
      func_0x000107c31940(auStack_858,&DAT_10f2da2c7);
      uStack_840 = 0x1d;
      func_0x000107c31940(auStack_838,&DAT_10f324ae5);
      uStack_820 = 0x1e;
      func_0x000107c31940(auStack_818,"exp");
      uStack_800 = 0x1f;
      func_0x000107c31940(auStack_7f8,&DAT_10f3dd908);
      uStack_7e0 = 0x20;
      func_0x000107c31940(auStack_7d8,&DAT_10f3dd8e9);
      uStack_7c0 = 0x21;
      func_0x000107c31940(auStack_7b8,&DAT_10f2e8c7d);
      uStack_7a0 = 0x22;
      func_0x000107c31940(auStack_798,&DAT_10f49182e);
      uStack_780 = 0x2c;
      func_0x000107c31940(auStack_778,&DAT_10f491680);
      uStack_760 = 0x2d;
      func_0x000107c31940(auStack_758,&UNK_10f57e830);
      uStack_740 = 0x23;
      func_0x000107c31940(auStack_738,&UNK_10f5986df);
      uStack_720 = 0x24;
      func_0x000107c31940(auStack_718,&UNK_10f5a5823);
      uStack_700 = 0x25;
      func_0x000107c31940(auStack_6f8,&UNK_10f5a5818);
      uStack_6e0 = 0x26;
      func_0x000107c31940(auStack_6d8,&UNK_10f5a56fb);
      uStack_6c0 = 0x28;
      func_0x000107c31940(auStack_6b8,&UNK_10f5a56c5);
      uStack_6a0 = 0x29;
      func_0x000107c31940(auStack_698,&UNK_10f5a56dc);
      uStack_680 = 0x2a;
      func_0x000107c31940(auStack_678,&UNK_10f5a56e3);
      uStack_660 = 0x2b;
      func_0x000107c31940(auStack_658,"slice");
      uStack_640 = 0x2e;
      func_0x000107c31940(auStack_638,&UNK_10f5a573a);
      uStack_620 = 0x2f;
      func_0x000107c31940(auStack_618,&DAT_10f5a554f);
      uStack_600 = 0x30;
      func_0x000107c31940(auStack_5f8,&UNK_10f5a573f);
      uStack_5e0 = 0x31;
      func_0x000107c31940(auStack_5d8,&UNK_10f5a5732);
      uStack_5c0 = 0x32;
      func_0x000107c31940(auStack_5b8,&UNK_10f5a5573);
      uStack_5a0 = 0x33;
      func_0x000107c31940(auStack_598,&DAT_10f5a5592);
      uStack_580 = 0x34;
      func_0x000107c31940(auStack_578,&DAT_10f5a5597);
      uStack_560 = 0x35;
      func_0x000107c31940(auStack_558,&DAT_10f2dd06f);
      uStack_540 = 0x36;
      func_0x000107c31940(auStack_538,&UNK_10f5a5757);
      uStack_520 = 0x38;
      func_0x000107c31940(auStack_518,&UNK_10f5a574d);
      uStack_500 = 0x39;
      func_0x000107c31940(auStack_4f8,&UNK_10f5a5762);
      uStack_4e0 = 0x3a;
      func_0x000107c31940(auStack_4d8,&UNK_10f5a3b93);
      uStack_4c0 = 0x37;
      func_0x000107c31940(auStack_4b8,&UNK_10f5a5773);
      uStack_4a0 = 0x3b;
      func_0x000107c31940(auStack_498,&UNK_10f5a5606);
      uStack_480 = 0x3c;
      func_0x000107c31940(auStack_478,&UNK_10f5a577e);
      uStack_460 = 0x3d;
      func_0x000107c31940(auStack_458,&UNK_10f5a5789);
      uStack_440 = 0x3e;
      func_0x000107c31940(auStack_438,&UNK_10f5a57a7);
      uStack_420 = 0x3f;
      func_0x000107c31940(auStack_418,&UNK_10f5a5792);
      uStack_400 = 0x40;
      func_0x000107c31940(auStack_3f8,&UNK_10f5a579f);
      uStack_3e0 = 0x41;
      func_0x000107c31940(auStack_3d8,&UNK_10f5a57b7);
      uStack_3c0 = 0x42;
      func_0x000107c31940(auStack_3b8,&UNK_10f5a564b);
      uStack_3a0 = 0x43;
      func_0x000107c31940(auStack_398,&UNK_10f5a9bf1);
      uStack_380 = 0x44;
      func_0x000107c31940(auStack_378,"range");
      uStack_360 = 0x45;
      func_0x000107c31940(auStack_358,&UNK_10f5a57c1);
      uStack_340 = 0x46;
      func_0x000107c31940(auStack_338,&UNK_10f5a57c8);
      uStack_320 = 0x47;
      func_0x000107c31940(auStack_318,&UNK_10f5a57cc);
      uStack_300 = 0x48;
      func_0x000107c31940(auStack_2f8,&DAT_10f518d33);
      uStack_2e0 = 0x49;
      func_0x000107c31940(auStack_2d8,&UNK_10f5a57bc);
      uStack_2c0 = 0x4a;
      func_0x000107c31940(auStack_2b8,&DAT_10f595cf3);
      uStack_2a0 = 0x4b;
      func_0x000107c31940(auStack_298,"square");
      uStack_280 = 0x4c;
      func_0x000107c31940(auStack_278,&UNK_10f5a57d2);
      uStack_260 = 0x4d;
      func_0x000107c31940(auStack_258,&UNK_10f5a9bfc);
      uStack_240 = 0x4e;
      func_0x000107c31940(auStack_238,&UNK_10f5a9c05);
      uStack_220 = 0x4f;
      func_0x000107c31940(auStack_218,&UNK_10f466685);
      uStack_200 = 0x50;
      func_0x000107c31940(auStack_1f8,"select");
      uStack_1e0 = 0x51;
      func_0x000107c31940(auStack_1d8,"fill");
      uStack_1c0 = 0x52;
      func_0x000107c31940(auStack_1b8,&UNK_10f5a57d6);
      uStack_1a0 = 0x53;
      func_0x000107c31940(auStack_198,&UNK_10f5a57da);
      uStack_180 = 0x54;
      func_0x000107c31940(auStack_178,&UNK_10f5a57e6);
      uStack_160 = 0x55;
      func_0x000107c31940(auStack_158,&DAT_10f2c6059);
      uStack_140 = 0x56;
      func_0x000107c31940(auStack_138,&UNK_10f491797);
      uStack_120 = 0x57;
      func_0x000107c31940(auStack_118,&UNK_10f5a57ee);
      uStack_100 = 0x58;
      func_0x000107c31940(auStack_f8,&UNK_10f5a57fd);
      uStack_e0 = 0x59;
      func_0x000107c31940(auStack_d8,&UNK_10f5a5809);
      uStack_c0 = 0x5a;
      func_0x000107c31940(auStack_b8,&UNK_10f5a9c0f);
      uStack_a0 = 0x5b;
      func_0x000107c31940(auStack_98,&UNK_10f5a9c1a);
      uStack_80 = 0x5c;
      func_0x000107c31940(auStack_78,&UNK_10f5a580e);
      uStack_60 = 0x5d;
      FUN_109ce7744(auStack_bd8,0x5c);
      lVar8 = 0xb80;
      do {
        lVar8 = lVar8 + -0x20;
      } while (lVar8 != 0);
      ___cxa_atexit(FUN_109ce71b4,0x1137e1b88,0x100000000);
      ___cxa_guard_release(0x1137e1b58);
    }
  }
  plVar5 = (long *)0x1137e1b88;
  func_0x000107c31944(0x1137e1b88,param_1);
  plVar2 = plRam00000001137e1b90;
  if (plRam00000001137e1b90 != (long *)0x0) {
    uVar10 = (long)plRam00000001137e1b90 - 1;
    if (((ulong)plRam00000001137e1b90 & uVar10) == 0) {
      plVar11 = (long *)(uVar10 & (ulong)plVar5);
    }
    else {
      plVar11 = plVar5;
      if (plRam00000001137e1b90 <= plVar5) {
        uVar1 = 0;
        if (plRam00000001137e1b90 != (long *)0x0) {
          uVar1 = (ulong)plVar5 / (ulong)plRam00000001137e1b90;
        }
        plVar11 = (long *)((long)plVar5 - uVar1 * (long)plRam00000001137e1b90);
      }
    }
    plVar6 = *(long **)(lRam00000001137e1b88 + (long)plVar11 * 8);
    if (plVar6 != (long *)0x0) {
      for (plVar6 = (long *)*plVar6; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
        plVar7 = (long *)plVar6[1];
        if (plVar7 == plVar5) {
          plVar7 = (long *)0x1137e1b88;
          func_0x000104c4fbc4(0x1137e1b88,plVar6 + 2,param_1);
          if (((ulong)plVar7 & 1) != 0) {
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
              ___stack_chk_fail();
              lVar8 = -0xb80;
              pcVar9 = (char *)(param_1 + 0xb77);
              do {
                if (*pcVar9 < '\0') {
                  __ZdlPv(*(undefined8 *)(pcVar9 + -0x17));
                }
                lVar8 = lVar8 + 0x20;
                pcVar9 = pcVar9 + -0x20;
              } while (lVar8 != 0);
              ___cxa_guard_abort(0x1137e1b58);
              __Unwind_Resume();
              plVar2 = (long *)plVar7[2];
              while (plVar2 != (long *)0x0) {
                lVar8 = *plVar2;
                if (*(char *)((long)plVar2 + 0x27) < '\0') {
                  __ZdlPv(plVar2[2]);
                }
                __ZdlPv(plVar2);
                plVar2 = (long *)lVar8;
              }
              lVar8 = *plVar7;
              *plVar7 = 0;
              if (lVar8 != 0) {
                __ZdlPv();
              }
              return plVar7;
            }
            return plVar6 + 5;
          }
        }
        else {
          if (((ulong)plVar2 & uVar10) == 0) {
            plVar7 = (long *)((ulong)plVar7 & uVar10);
          }
          else if (plVar2 <= plVar7) {
            uVar1 = 0;
            if (plVar2 != (long *)0x0) {
              uVar1 = (ulong)plVar7 / (ulong)plVar2;
            }
            plVar7 = (long *)((long)plVar7 - uVar1 * (long)plVar2);
          }
          if (plVar7 != plVar11) break;
        }
      }
    }
  }
  func_0x000109262df8(&UNK_10f639994);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109ce6468);
  (*pcVar3)();
}



/* Entry: 109ce71b4; end: 109ce71b7;  */

long * FUN_109ce71b4(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (*(char *)((long)plVar1 + 0x27) < '\0') {
      __ZdlPv(plVar1[2]);
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



/* Entry: 109ce71b8; end: 109ce724f;  */

undefined8 * FUN_109ce71b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3d078;
  if ((*(char *)((long)param_1 + 0xd) == '\x01') && ((long *)param_1[2] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  return param_1;
}



/* Entry: 109ce7250; end: 109ce76ab;  */

void FUN_109ce7250(int *param_1,long param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong unaff_x27;
  long lVar17;
  
  uRam00000001137e1b68 = 0;
  lRam00000001137e1b60 = 0;
  uRam00000001137e1b78 = 0;
  plRam00000001137e1b70 = (long *)0x0;
  fRam00000001137e1b80 = 1.0;
  if (param_2 != 0) {
    uVar15 = 0;
    piVar1 = param_1 + param_2 * 8;
    do {
      uVar7 = uRam00000001137e1b68;
      iVar3 = *param_1;
      uVar16 = (ulong)iVar3;
      if (uRam00000001137e1b68 != 0) {
        uVar8 = uRam00000001137e1b68 - 1;
        if ((uRam00000001137e1b68 & uVar8) == 0) {
          unaff_x27 = uVar8 & uVar16;
        }
        else {
          unaff_x27 = uVar16;
          if (uRam00000001137e1b68 <= uVar16) {
            uVar11 = 0;
            if (uRam00000001137e1b68 != 0) {
              uVar11 = uVar16 / uRam00000001137e1b68;
            }
            unaff_x27 = uVar16 - uVar11 * uRam00000001137e1b68;
          }
        }
        plVar9 = *(long **)(lRam00000001137e1b60 + unaff_x27 * 8);
        if (plVar9 != (long *)0x0) {
          do {
            while( true ) {
              plVar9 = (long *)*plVar9;
              if (plVar9 == (long *)0x0) goto LAB_109ce7330;
              uVar11 = plVar9[1];
              if (uVar11 != uVar16) break;
              if (*(int *)(plVar9 + 2) == iVar3) goto LAB_109ce75fc;
            }
            if ((uRam00000001137e1b68 & uVar8) == 0) {
              uVar11 = uVar11 & uVar8;
            }
            else if (uRam00000001137e1b68 <= uVar11) {
              uVar14 = 0;
              if (uRam00000001137e1b68 != 0) {
                uVar14 = uVar11 / uRam00000001137e1b68;
              }
              uVar11 = uVar11 - uVar14 * uRam00000001137e1b68;
            }
          } while (uVar11 == unaff_x27);
        }
      }
LAB_109ce7330:
      plVar9 = (long *)0x30;
      __Znwm();
      *plVar9 = 0;
      plVar9[1] = uVar16;
      *(int *)(plVar9 + 2) = iVar3;
      if (*(char *)((long)param_1 + 0x1f) < '\0') {
        func_0x000107c3192c(plVar9 + 3,*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_1 + 4));
        uVar15 = uRam00000001137e1b78;
      }
      else {
        lVar17 = *(long *)(param_1 + 4);
        lVar6 = *(long *)(param_1 + 2);
        plVar9[5] = *(long *)(param_1 + 6);
        plVar9[4] = lVar17;
        plVar9[3] = lVar6;
      }
      if ((uVar7 == 0) || (fRam00000001137e1b80 * (float)uVar7 < (float)(uVar15 + 1))) {
        uVar8 = 1;
        if (2 < uVar7) {
          uVar8 = (ulong)((uVar7 & uVar7 - 1) != 0);
        }
        uVar8 = uVar8 | uVar7 << 1;
        uVar15 = (ulong)((float)(uVar15 + 1) / fRam00000001137e1b80);
        if (uVar8 <= uVar15) {
          uVar8 = uVar15;
        }
        if (uVar8 - 1 == 0) {
          uVar8 = 2;
        }
        else if ((uVar8 & uVar8 - 1) != 0) {
          __ZNSt3__112__next_primeEm();
        }
        uVar15 = uRam00000001137e1b68;
        if (uRam00000001137e1b68 < uVar8) {
LAB_109ce73f8:
          if (uVar8 >> 0x3d != 0) {
            func_0x000104c4f740();
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x109ce7674);
            (*pcVar5)();
          }
          lVar6 = uVar8 << 3;
          __Znwm();
          bVar2 = lRam00000001137e1b60 != 0;
          lRam00000001137e1b60 = lVar6;
          if (bVar2) {
            __ZdlPv();
          }
          uVar15 = 0;
          uRam00000001137e1b68 = uVar8;
          do {
            *(undefined8 *)(lRam00000001137e1b60 + uVar15 * 8) = 0;
            plVar10 = plRam00000001137e1b70;
            uVar15 = uVar15 + 1;
          } while (uVar8 != uVar15);
          uVar7 = uVar8;
          if (plRam00000001137e1b70 != (long *)0x0) {
            uVar15 = plRam00000001137e1b70[1];
            uVar11 = uVar8 - 1;
            if ((uVar8 & uVar11) == 0) {
              uVar15 = uVar15 & uVar11;
            }
            else if (uVar8 <= uVar15) {
              uVar14 = 0;
              if (uVar8 != 0) {
                uVar14 = uVar15 / uVar8;
              }
              uVar15 = uVar15 - uVar14 * uVar8;
            }
            *(undefined8 *)(lRam00000001137e1b60 + uVar15 * 8) = 0x1137e1b70;
            plVar12 = (long *)*plVar10;
            lVar6 = lRam00000001137e1b60;
            while (lRam00000001137e1b60 = lVar6, plVar12 != (long *)0x0) {
              uVar14 = plVar12[1];
              if ((uVar8 & uVar11) == 0) {
                uVar14 = uVar14 & uVar11;
              }
              else if (uVar8 <= uVar14) {
                uVar4 = 0;
                if (uVar8 != 0) {
                  uVar4 = uVar14 / uVar8;
                }
                uVar14 = uVar14 - uVar4 * uVar8;
              }
              plVar13 = plVar12;
              if (uVar14 != uVar15) {
                if (*(long *)(lVar6 + uVar14 * 8) == 0) {
                  *(long **)(lVar6 + uVar14 * 8) = plVar10;
                  uVar15 = uVar14;
                }
                else {
                  *plVar10 = *plVar12;
                  *plVar12 = **(long **)(lVar6 + uVar14 * 8);
                  **(undefined8 **)(lVar6 + uVar14 * 8) = plVar12;
                  plVar13 = plVar10;
                }
              }
              lVar6 = lRam00000001137e1b60;
              plVar10 = plVar13;
              plVar12 = (long *)*plVar13;
            }
          }
        }
        else {
          uVar7 = uRam00000001137e1b68;
          if (uVar8 < uRam00000001137e1b68) {
            uVar7 = (ulong)((float)uRam00000001137e1b78 / fRam00000001137e1b80);
            if ((uRam00000001137e1b68 < 3) ||
               ((uRam00000001137e1b68 & uRam00000001137e1b68 - 1) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if (1 < uVar7) {
              uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
            }
            lVar6 = lRam00000001137e1b60;
            if (uVar8 <= uVar7) {
              uVar8 = uVar7;
            }
            uVar7 = uRam00000001137e1b68;
            if (uVar8 < uVar15) {
              if (uVar8 != 0) goto LAB_109ce73f8;
              lRam00000001137e1b60 = 0;
              if (lVar6 != 0) {
                __ZdlPv();
              }
              uRam00000001137e1b68 = 0;
              uVar7 = 0;
            }
          }
        }
        if ((uVar7 & uVar7 - 1) == 0) {
          unaff_x27 = uVar7 - 1 & uVar16;
        }
        else {
          unaff_x27 = uVar16;
          if (uVar7 <= uVar16) {
            uVar15 = 0;
            if (uVar7 != 0) {
              uVar15 = uVar16 / uVar7;
            }
            unaff_x27 = uVar16 - uVar15 * uVar7;
          }
        }
      }
      lVar6 = lRam00000001137e1b60;
      plVar10 = *(long **)(lRam00000001137e1b60 + unaff_x27 * 8);
      if (plVar10 == (long *)0x0) {
        *plVar9 = (long)plRam00000001137e1b70;
        plRam00000001137e1b70 = plVar9;
        *(undefined8 *)(lVar6 + unaff_x27 * 8) = 0x1137e1b70;
        if (*plVar9 != 0) {
          uVar15 = *(ulong *)(*plVar9 + 8);
          if ((uVar7 & uVar7 - 1) == 0) {
            uVar15 = uVar15 & uVar7 - 1;
          }
          else if (uVar7 <= uVar15) {
            uVar16 = 0;
            if (uVar7 != 0) {
              uVar16 = uVar15 / uVar7;
            }
            uVar15 = uVar15 - uVar16 * uVar7;
          }
          *(long **)(lRam00000001137e1b60 + uVar15 * 8) = plVar9;
        }
      }
      else {
        *plVar9 = *plVar10;
        *plVar10 = (long)plVar9;
      }
      uVar15 = uRam00000001137e1b78 + 1;
      uRam00000001137e1b78 = uVar15;
LAB_109ce75fc:
      param_1 = param_1 + 8;
    } while (param_1 != piVar1);
  }
  return;
}



/* Entry: 109ce76ac; end: 109ce7743;  */

void FUN_109ce76ac(ulong param_1,long param_2)

{
  if (((param_1 & 1) != 0) && (*(char *)(param_2 + 0x2f) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_2 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 109ce7744; end: 109ce7bb3;  */

void FUN_109ce7744(long *param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  ulong unaff_x23;
  long lVar16;
  
  uRam00000001137e1b90 = 0;
  lRam00000001137e1b88 = 0;
  uRam00000001137e1ba0 = 0;
  plRam00000001137e1b98 = (long *)0x0;
  fRam00000001137e1ba8 = 1.0;
  if (param_2 != 0) {
    plVar1 = param_1 + param_2 * 4;
    do {
      uVar9 = 0x1137e1b88;
      func_0x000107c31944(0x1137e1b88,param_1);
      uVar10 = uRam00000001137e1b90;
      if (uRam00000001137e1b90 != 0) {
        uVar15 = uRam00000001137e1b90 - 1;
        if ((uRam00000001137e1b90 & uVar15) == 0) {
          unaff_x23 = uVar15 & uVar9;
        }
        else {
          unaff_x23 = uVar9;
          if (uRam00000001137e1b90 <= uVar9) {
            uVar7 = 0;
            if (uRam00000001137e1b90 != 0) {
              uVar7 = uVar9 / uRam00000001137e1b90;
            }
            unaff_x23 = uVar9 - uVar7 * uRam00000001137e1b90;
          }
        }
        plVar6 = *(long **)(lRam00000001137e1b88 + unaff_x23 * 8);
        if (plVar6 != (long *)0x0) {
          for (plVar6 = (long *)*plVar6; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
            uVar7 = plVar6[1];
            if (uVar7 == uVar9) {
              uVar7 = 0x1137e1b88;
              func_0x000104c4fbc4(0x1137e1b88,plVar6 + 2,param_1);
              if ((uVar7 & 1) != 0) goto LAB_109ce7afc;
            }
            else {
              if ((uVar10 & uVar15) == 0) {
                uVar7 = uVar7 & uVar15;
              }
              else if (uVar10 <= uVar7) {
                uVar8 = 0;
                if (uVar10 != 0) {
                  uVar8 = uVar7 / uVar10;
                }
                uVar7 = uVar7 - uVar8 * uVar10;
              }
              if (uVar7 != unaff_x23) break;
            }
          }
        }
      }
      plVar6 = (long *)0x30;
      __Znwm();
      *plVar6 = 0;
      plVar6[1] = uVar9;
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        func_0x000107c3192c(plVar6 + 2,*param_1,param_1[1]);
      }
      else {
        lVar16 = param_1[1];
        lVar5 = *param_1;
        plVar6[4] = param_1[2];
        plVar6[3] = lVar16;
        plVar6[2] = lVar5;
      }
      *(int *)(plVar6 + 5) = (int)param_1[3];
      if ((uVar10 == 0) ||
         (fRam00000001137e1ba8 * (float)uVar10 < (float)(uRam00000001137e1ba0 + 1))) {
        uVar15 = 1;
        if (2 < uVar10) {
          uVar15 = (ulong)((uVar10 & uVar10 - 1) != 0);
        }
        uVar15 = uVar15 | uVar10 << 1;
        uVar10 = (ulong)((float)(uRam00000001137e1ba0 + 1) / fRam00000001137e1ba8);
        if (uVar15 <= uVar10) {
          uVar15 = uVar10;
        }
        if (uVar15 - 1 == 0) {
          uVar15 = 2;
        }
        else if ((uVar15 & uVar15 - 1) != 0) {
          __ZNSt3__112__next_primeEm();
        }
        uVar7 = uRam00000001137e1b90;
        if (uRam00000001137e1b90 < uVar15) {
LAB_109ce7900:
          if (uVar15 >> 0x3d != 0) {
            func_0x000104c4f740();
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x109ce7b74);
            (*pcVar4)();
          }
          lVar5 = uVar15 << 3;
          __Znwm();
          bVar2 = lRam00000001137e1b88 != 0;
          lRam00000001137e1b88 = lVar5;
          if (bVar2) {
            __ZdlPv();
          }
          uVar10 = 0;
          uRam00000001137e1b90 = uVar15;
          do {
            *(undefined8 *)(lRam00000001137e1b88 + uVar10 * 8) = 0;
            plVar11 = plRam00000001137e1b98;
            uVar10 = uVar10 + 1;
          } while (uVar15 != uVar10);
          uVar10 = uVar15;
          if (plRam00000001137e1b98 != (long *)0x0) {
            uVar7 = plRam00000001137e1b98[1];
            uVar8 = uVar15 - 1;
            if ((uVar15 & uVar8) == 0) {
              uVar7 = uVar7 & uVar8;
            }
            else if (uVar15 <= uVar7) {
              uVar14 = 0;
              if (uVar15 != 0) {
                uVar14 = uVar7 / uVar15;
              }
              uVar7 = uVar7 - uVar14 * uVar15;
            }
            *(undefined8 *)(lRam00000001137e1b88 + uVar7 * 8) = 0x1137e1b98;
            plVar12 = (long *)*plVar11;
            lVar5 = lRam00000001137e1b88;
            while (lRam00000001137e1b88 = lVar5, plVar12 != (long *)0x0) {
              uVar14 = plVar12[1];
              if ((uVar15 & uVar8) == 0) {
                uVar14 = uVar14 & uVar8;
              }
              else if (uVar15 <= uVar14) {
                uVar3 = 0;
                if (uVar15 != 0) {
                  uVar3 = uVar14 / uVar15;
                }
                uVar14 = uVar14 - uVar3 * uVar15;
              }
              plVar13 = plVar12;
              if (uVar14 != uVar7) {
                if (*(long *)(lVar5 + uVar14 * 8) == 0) {
                  *(long **)(lVar5 + uVar14 * 8) = plVar11;
                  uVar7 = uVar14;
                }
                else {
                  *plVar11 = *plVar12;
                  *plVar12 = **(long **)(lVar5 + uVar14 * 8);
                  **(undefined8 **)(lVar5 + uVar14 * 8) = plVar12;
                  plVar13 = plVar11;
                }
              }
              lVar5 = lRam00000001137e1b88;
              plVar11 = plVar13;
              plVar12 = (long *)*plVar13;
            }
          }
        }
        else {
          uVar10 = uRam00000001137e1b90;
          if (uVar15 < uRam00000001137e1b90) {
            uVar10 = (ulong)((float)uRam00000001137e1ba0 / fRam00000001137e1ba8);
            if ((uRam00000001137e1b90 < 3) ||
               ((uRam00000001137e1b90 & uRam00000001137e1b90 - 1) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if (1 < uVar10) {
              uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
            }
            lVar5 = lRam00000001137e1b88;
            if (uVar15 <= uVar10) {
              uVar15 = uVar10;
            }
            uVar10 = uRam00000001137e1b90;
            if (uVar15 < uVar7) {
              if (uVar15 != 0) goto LAB_109ce7900;
              lRam00000001137e1b88 = 0;
              if (lVar5 != 0) {
                __ZdlPv();
              }
              uRam00000001137e1b90 = 0;
              uVar10 = 0;
            }
          }
        }
        if ((uVar10 & uVar10 - 1) == 0) {
          unaff_x23 = uVar10 - 1 & uVar9;
        }
        else {
          unaff_x23 = uVar9;
          if (uVar10 <= uVar9) {
            uVar15 = 0;
            if (uVar10 != 0) {
              uVar15 = uVar9 / uVar10;
            }
            unaff_x23 = uVar9 - uVar15 * uVar10;
          }
        }
      }
      lVar5 = lRam00000001137e1b88;
      plVar11 = *(long **)(lRam00000001137e1b88 + unaff_x23 * 8);
      if (plVar11 == (long *)0x0) {
        *plVar6 = (long)plRam00000001137e1b98;
        plRam00000001137e1b98 = plVar6;
        *(undefined8 *)(lVar5 + unaff_x23 * 8) = 0x1137e1b98;
        if (*plVar6 != 0) {
          uVar9 = *(ulong *)(*plVar6 + 8);
          if ((uVar10 & uVar10 - 1) == 0) {
            uVar9 = uVar9 & uVar10 - 1;
          }
          else if (uVar10 <= uVar9) {
            uVar15 = 0;
            if (uVar10 != 0) {
              uVar15 = uVar9 / uVar10;
            }
            uVar9 = uVar9 - uVar15 * uVar10;
          }
          *(long **)(lRam00000001137e1b88 + uVar9 * 8) = plVar6;
        }
      }
      else {
        *plVar6 = *plVar11;
        *plVar11 = (long)plVar6;
      }
      uRam00000001137e1ba0 = uRam00000001137e1ba0 + 1;
LAB_109ce7afc:
      param_1 = param_1 + 4;
    } while (param_1 != plVar1);
  }
  return;
}



/* Entry: 109ce7bb4; end: 109ce7be7;  */

void FUN_109ce7bb4(ulong param_1,long param_2)

{
  if (((param_1 & 1) != 0) && (*(char *)(param_2 + 0x27) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_2 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 109ce7be8; end: 109ce7c4b;  */

long * FUN_109ce7be8(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (*(char *)((long)plVar1 + 0x27) < '\0') {
      __ZdlPv(plVar1[2]);
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



/* Entry: 109ce7c4c; end: 109ce7c53;  */

void FUN_109ce7c4c(void)

{
  return;
}



/* Entry: 109ce7c54; end: 109ce8883;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109ce7c54(undefined8 param_1,long param_2,long param_3,int param_4,long param_5)

{
  ulong *puVar1;
  undefined8 *******pppppppuVar2;
  undefined8 *puVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  code *pcVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined4 uVar17;
  long *plStack_80;
  undefined8 *******apppppppuStack_78 [2];
  char cStack_61;
  undefined4 uStack_54;
  
  bVar5 = *(byte *)(param_5 + 0xa0);
  if (0x53 < param_4) {
    if (param_4 == 0x54) {
      if (bVar5 < 4) {
        puVar12 = &UNK_10f5a9c9e;
        goto LAB_109ce8820;
      }
      if (*(int *)(param_2 + 0x8c) == 0x82) {
        uVar15 = *(ulong *)(param_2 + 0x80);
      }
      else {
        func_0x000109c819a4(param_2);
        *(undefined4 *)(param_2 + 0x8c) = 0x82;
        uVar15 = *(ulong *)(param_2 + 8);
        if ((uVar15 & 1) != 0) {
          uVar15 = *(ulong *)(uVar15 & 0xfffffffffffffffe);
        }
        func_0x000109cbac30();
        *(ulong *)(param_2 + 0x80) = uVar15;
      }
      if (*(int *)(uVar15 + 0x1c) != 0x29) {
        func_0x000109c80a48(uVar15);
        *(undefined4 *)(uVar15 + 0x1c) = 0x29;
        uVar9 = *(ulong *)(uVar15 + 8);
        if ((uVar9 & 1) != 0) {
          uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
        }
        func_0x000109cb9f38();
        goto code_r0x000109ce8278;
      }
      goto code_r0x000109ce8254;
    }
    if (param_4 == 0x5a) {
      if (*(int *)(param_2 + 0x8c) == 0x31b) {
        uVar15 = *(ulong *)(param_2 + 0x80);
      }
      else {
        func_0x000109c819a4(param_2);
        *(undefined4 *)(param_2 + 0x8c) = 0x31b;
        uVar15 = *(ulong *)(param_2 + 8);
        if ((uVar15 & 1) != 0) {
          uVar15 = *(ulong *)(uVar15 & 0xfffffffffffffffe);
        }
        func_0x000109cb90ec();
        *(ulong *)(param_2 + 0x80) = uVar15;
      }
      iVar4 = *(int *)(param_3 + 0x1cc);
      if ((iVar4 == 2) || (iVar4 == 1)) {
        *(int *)(uVar15 + 0x10) = iVar4;
        return;
      }
      if (iVar4 == 0) {
        *(undefined4 *)(uVar15 + 0x10) = 0;
        return;
      }
      puVar12 = &UNK_10f5a9ce4;
      goto LAB_109ce8820;
    }
    if (param_4 == 0x5d) {
      uVar15 = *(ulong *)(param_2 + 0x70);
      puVar8 = (undefined8 *)0x90;
      __Znwm();
      *puVar8 = &PTR_DAT_110b354e0;
      puVar8[1] = 0;
      puVar8[3] = 0;
      puVar8[2] = 0;
      puVar8[0xe] = &DAT_11383d918;
      puVar8[5] = 0;
      puVar8[4] = 0;
      puVar8[7] = 0;
      puVar8[6] = 0;
      puVar8[9] = 0;
      puVar8[8] = 0;
      puVar8[0xb] = 0;
      puVar8[10] = 0;
      puVar8[0xd] = 0;
      puVar8[0xc] = 0;
      puVar8[0x11] = 0;
      *(undefined1 *)(puVar8 + 0xf) = 0;
      if (bVar5 < 4) {
        func_0x00010952d0c4(&UNK_10e03ebd6,&UNK_10f5a9c71,&UNK_10f5a9c9e);
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x109ce8808);
        (*pcVar7)();
      }
      puVar16 = (undefined8 *)(uVar15 & 0xfffffffffffffffc);
      uVar15 = puVar16[1];
      if (-1 < (char)*(byte *)((long)puVar16 + 0x17)) {
        uVar15 = (ulong)*(byte *)((long)puVar16 + 0x17);
      }
      func_0x000104c4f768(apppppppuStack_78,uVar15 + 0xc,&uStack_54);
      pppppppuVar2 = apppppppuStack_78[0];
      if (-1 < cStack_61) {
        pppppppuVar2 = apppppppuStack_78;
      }
      if (uVar15 != 0) {
        puVar3 = (undefined8 *)*puVar16;
        if (-1 < *(char *)((long)puVar16 + 0x17)) {
          puVar3 = puVar16;
        }
        _memmove(pppppppuVar2,puVar3,uVar15);
      }
      puVar16 = (undefined8 *)((long)pppppppuVar2 + uVar15);
      *puVar16 = 0x676953647261485f;
      *(undefined4 *)(puVar16 + 1) = 0x64696f6d;
      *(undefined1 *)((long)puVar16 + 0xc) = 0;
      uVar15 = puVar8[1];
      if ((uVar15 & 1) != 0) {
        uVar15 = *(ulong *)(uVar15 & 0xfffffffffffffffe);
      }
      func_0x000107c3024c(puVar8 + 0xe,apppppppuStack_78,uVar15);
      if (cStack_61 < '\0') {
        __ZdlPv(apppppppuStack_78[0]);
      }
      func_0x000107c303b4(puVar8 + 2);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
      if (*(int *)((long)puVar8 + 0x8c) == 0x82) {
        uVar15 = puVar8[0x10];
      }
      else {
        func_0x000109c819a4(puVar8);
        *(undefined4 *)((long)puVar8 + 0x8c) = 0x82;
        uVar15 = puVar8[1];
        if ((uVar15 & 1) != 0) {
          uVar15 = *(ulong *)(uVar15 & 0xfffffffffffffffe);
        }
        func_0x000109cbac30();
        puVar8[0x10] = uVar15;
      }
      if (*(int *)(uVar15 + 0x1c) == 0x29) {
        uVar9 = *(ulong *)(uVar15 + 0x10);
      }
      else {
        func_0x000109c80a48(uVar15);
        *(undefined4 *)(uVar15 + 0x1c) = 0x29;
        uVar9 = *(ulong *)(uVar15 + 8);
        if ((uVar9 & 1) != 0) {
          uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
        }
        func_0x000109cb9f38();
        *(ulong *)(uVar15 + 0x10) = uVar9;
      }
      *(undefined8 *)(uVar9 + 0x10) = 0x3f0000003e2aaaab;
      func_0x000107c303b4(puVar8 + 5);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
      func_0x000107c303b4(param_2 + 0x10);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
      if (*(int *)(param_2 + 0x8c) == 0xe7) {
        uVar15 = *(ulong *)(param_2 + 0x80);
      }
      else {
        func_0x000109c819a4(param_2);
        *(undefined4 *)(param_2 + 0x8c) = 0xe7;
        uVar15 = *(ulong *)(param_2 + 8);
        if ((uVar15 & 1) != 0) {
          uVar15 = *(ulong *)(uVar15 & 0xfffffffffffffffe);
        }
        func_0x000109cb88d8();
        *(ulong *)(param_2 + 0x80) = uVar15;
      }
      *(undefined4 *)(uVar15 + 0x10) = 0x3f800000;
      plVar10 = (long *)0x18;
      __Znwm();
      *(undefined4 *)(plVar10 + 1) = 0x54;
      *(undefined2 *)((long)plVar10 + 0xc) = 0x101;
      *plVar10 = (long)&PTR_FUN_110b3d078;
      plVar10[2] = (long)puVar8;
      plStack_80 = plVar10;
      FUN_109cf5eb0(param_5,&plStack_80);
      plVar10 = plStack_80;
      plStack_80 = (long *)0x0;
      if (plVar10 == (long *)0x0) {
        return;
      }
      (**(code **)(*plVar10 + 8))();
      return;
    }
    goto LAB_109ce87ac;
  }
  switch(param_4) {
  case 2:
    uVar15 = *(ulong *)(param_3 + 0x20);
    puVar1 = (ulong *)(param_3 + 0x20);
    if ((uVar15 & 1) != 0) {
      puVar1 = (ulong *)(uVar15 + 7);
    }
    uVar15 = *puVar1;
    if (1 < *(int *)(uVar15 + 0x18)) {
      if (*(int *)(param_2 + 0x8c) == 0x82) {
        uVar9 = *(ulong *)(param_2 + 0x80);
      }
      else {
        func_0x000109c819a4(param_2);
        *(undefined4 *)(param_2 + 0x8c) = 0x82;
        uVar9 = *(ulong *)(param_2 + 8);
        if ((uVar9 & 1) != 0) {
          uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
        }
        func_0x000109cbac30();
        *(ulong *)(param_2 + 0x80) = uVar9;
      }
      if (*(int *)(uVar9 + 0x1c) == 0x19) {
        uVar14 = *(ulong *)(uVar9 + 0x10);
      }
      else {
        func_0x000109c80a48(uVar9);
        *(undefined4 *)(uVar9 + 0x1c) = 0x19;
        uVar14 = *(ulong *)(uVar9 + 8);
        if ((uVar14 & 1) != 0) {
          uVar14 = *(ulong *)(uVar14 & 0xfffffffffffffffe);
        }
        func_0x000109cbab94();
        *(ulong *)(uVar9 + 0x10) = uVar14;
      }
      *(uint *)(uVar14 + 0x10) = *(uint *)(uVar14 + 0x10) | 1;
      uVar9 = *(ulong *)(uVar14 + 0x18);
      if (uVar9 == 0) {
        uVar9 = *(ulong *)(uVar14 + 8);
        if ((uVar9 & 1) != 0) {
          uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
        }
        func_0x000109cba3bc();
        *(ulong *)(uVar14 + 0x18) = uVar9;
      }
      iVar4 = *(int *)(uVar15 + 0x18);
      if (*(int *)(uVar9 + 0x1c) < iVar4) {
        func_0x000109311970(uVar9 + 0x18,*(undefined4 *)(uVar9 + 0x18),iVar4);
      }
      if (iVar4 < 1) {
        return;
      }
      iVar13 = 0;
      do {
        func_0x000109ce52ec(&uStack_54,iVar13,uVar15,apppppppuStack_78);
        iVar6 = *(int *)(uVar9 + 0x18);
        *(int *)(uVar9 + 0x18) = iVar6 + 1;
        *(undefined4 *)(*(long *)(uVar9 + 0x20) + (long)iVar6 * 4) = uStack_54;
        iVar13 = iVar13 + 1;
      } while (iVar4 != iVar13);
      return;
    }
    if (*(int *)(param_2 + 0x8c) == 0x82) {
      uVar14 = *(ulong *)(param_2 + 0x80);
    }
    else {
      func_0x000109c819a4(param_2);
      *(undefined4 *)(param_2 + 0x8c) = 0x82;
      uVar14 = *(ulong *)(param_2 + 8);
      if ((uVar14 & 1) != 0) {
        uVar14 = *(ulong *)(uVar14 & 0xfffffffffffffffe);
      }
      func_0x000109cbac30();
      *(ulong *)(param_2 + 0x80) = uVar14;
    }
    if (*(int *)(uVar14 + 0x1c) == 0xf) {
      uVar9 = *(ulong *)(uVar14 + 0x10);
    }
    else {
      func_0x000109c80a48(uVar14);
      *(undefined4 *)(uVar14 + 0x1c) = 0xf;
      uVar9 = *(ulong *)(uVar14 + 8);
      if ((uVar9 & 1) != 0) {
        uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
      }
      func_0x000109cba0ac();
      *(ulong *)(uVar14 + 0x10) = uVar9;
    }
    uVar17 = **(undefined4 **)(uVar15 + 0x20);
    goto code_r0x000109ce8180;
  case 3:
    if (*(int *)(param_2 + 0x8c) == 0x82) {
      uVar15 = *(ulong *)(param_2 + 0x80);
    }
    else {
      func_0x000109c819a4(param_2);
      *(undefined4 *)(param_2 + 0x8c) = 0x82;
      uVar15 = *(ulong *)(param_2 + 8);
      if ((uVar15 & 1) != 0) {
        uVar15 = *(ulong *)(uVar15 & 0xfffffffffffffffe);
      }
      func_0x000109cbac30();
      *(ulong *)(param_2 + 0x80) = uVar15;
    }
    if (*(int *)(uVar15 + 0x1c) == 10) {
      return;
    }
    func_0x000109c80a48(uVar15);
    *(undefined4 *)(uVar15 + 0x1c) = 10;
    uVar9 = *(ulong *)(uVar15 + 8);
    if ((uVar9 & 1) != 0) {
      uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
    }
    func_0x000109cba018();
    break;
  case 4:
    if (3 < bVar5) {
      if (*(int *)(param_2 + 0x8c) == 0x294) {
        uVar15 = *(ulong *)(param_2 + 0x80);
      }
      else {
        func_0x000109c819a4(param_2);
        *(undefined4 *)(param_2 + 0x8c) = 0x294;
        uVar15 = *(ulong *)(param_2 + 8);
        if ((uVar15 & 1) != 0) {
          uVar15 = *(ulong *)(uVar15 & 0xfffffffffffffffe);
        }
        func_0x000109cb9838();
        *(ulong *)(param_2 + 0x80) = uVar15;
      }
      *(undefined8 *)(uVar15 + 0x10) = 0x40c0000000000000;
      return;
    }
    if (1 < bVar5) {
      if (*(int *)(param_2 + 0x8c) == 500) {
        uVar15 = *(ulong *)(param_2 + 0x80);
      }
      else {
        func_0x000109c819a4(param_2);
        *(undefined4 *)(param_2 + 0x8c) = 500;
        uVar15 = *(ulong *)(param_2 + 8);
        if ((uVar15 & 1) != 0) {
          uVar15 = *(ulong *)(uVar15 & 0xfffffffffffffffe);
        }
        func_0x000109cba8f4();
        *(ulong *)(param_2 + 0x80) = uVar15;
      }
      uVar9 = *(ulong *)(uVar15 + 8);
      if ((uVar9 & 1) != 0) {
        uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
      }
      func_0x00010b4bf088(uVar15 + 0x48,&DAT_10f5a371d,4,uVar9);
      uVar9 = *(ulong *)(uVar15 + 8);
      if ((uVar9 & 1) != 0) {
        uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
      }
      func_0x00010b4bf088(uVar15 + 0x50,&UNK_10f5a9c63,0xd,uVar9);
      FUN_109ce8914(apppppppuStack_78,uVar15 + 0x28,&DAT_10f3c8c84);
      pppppppuVar2 = apppppppuStack_78[0];
      if (*(int *)((long)apppppppuStack_78[0] + 0x3c) != 10) {
        if (*(int *)((long)apppppppuStack_78[0] + 0x3c) == 0x14) {
          func_0x000107c30258(apppppppuStack_78[0] + 6);
        }
        *(undefined4 *)((long)pppppppuVar2 + 0x3c) = 10;
      }
      pppppppuVar2[6] = (undefined8 ******)0x0;
      FUN_109ce8914(apppppppuStack_78,uVar15 + 0x28,&DAT_10f3c8c7b);
      if (*(int *)((long)apppppppuStack_78[0] + 0x3c) != 10) {
        if (*(int *)((long)apppppppuStack_78[0] + 0x3c) == 0x14) {
          func_0x000107c30258(apppppppuStack_78[0] + 6);
        }
        *(undefined4 *)((long)apppppppuStack_78[0] + 0x3c) = 10;
      }
      apppppppuStack_78[0][6] = (undefined8 ******)0x4018000000000000;
      return;
    }
  default:
LAB_109ce87ac:
    puVar12 = &UNK_10f5a9c87;
LAB_109ce8820:
    puVar11 = &UNK_10e03ebd6;
    func_0x00010952d0c4(&UNK_10e03ebd6,&UNK_10f5a9c71,puVar12);
    plVar10 = plStack_80;
    plStack_80 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    __Unwind_Resume(puVar11);
    return;
  case 5:
    if (*(int *)(param_2 + 0x8c) == 0x82) {
      uVar15 = *(ulong *)(param_2 + 0x80);
    }
    else {
      func_0x000109c819a4(param_2);
      *(undefined4 *)(param_2 + 0x8c) = 0x82;
      uVar15 = *(ulong *)(param_2 + 8);
      if ((uVar15 & 1) != 0) {
        uVar15 = *(ulong *)(uVar15 & 0xfffffffffffffffe);
      }
      func_0x000109cbac30();
      *(ulong *)(param_2 + 0x80) = uVar15;
    }
    if (*(int *)(uVar15 + 0x1c) == 0x1e) {
      return;
    }
    func_0x000109c80a48(uVar15);
    *(undefined4 *)(uVar15 + 0x1c) = 0x1e;
    uVar9 = *(ulong *)(uVar15 + 8);
    if ((uVar9 & 1) != 0) {
      uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
    }
    func_0x000109cb9e60();
    break;
  case 7:
    if (*(int *)(param_2 + 0x8c) == 0x82) {
      uVar15 = *(ulong *)(param_2 + 0x80);
    }
    else {
      func_0x000109c819a4(param_2);
      *(undefined4 *)(param_2 + 0x8c) = 0x82;
      uVar15 = *(ulong *)(param_2 + 8);
      if ((uVar15 & 1) != 0) {
        uVar15 = *(ulong *)(uVar15 & 0xfffffffffffffffe);
      }
      func_0x000109cbac30();
      *(ulong *)(param_2 + 0x80) = uVar15;
    }
    if (*(int *)(uVar15 + 0x1c) == 0x28) {
      return;
    }
    func_0x000109c80a48(uVar15);
    *(undefined4 *)(uVar15 + 0x1c) = 0x28;
    uVar9 = *(ulong *)(uVar15 + 8);
    if ((uVar9 & 1) != 0) {
      uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
    }
    func_0x000109cb9f84();
    break;
  case 8:
    if (*(int *)(param_2 + 0x8c) == 0x82) {
      uVar15 = *(ulong *)(param_2 + 0x80);
    }
    else {
      func_0x000109c819a4(param_2);
      *(undefined4 *)(param_2 + 0x8c) = 0x82;
      uVar15 = *(ulong *)(param_2 + 8);
      if ((uVar15 & 1) != 0) {
        uVar15 = *(ulong *)(uVar15 & 0xfffffffffffffffe);
      }
      func_0x000109cbac30();
      *(ulong *)(param_2 + 0x80) = uVar15;
    }
    if (*(int *)(uVar15 + 0x1c) != 5) {
      func_0x000109c80a48(uVar15);
      *(undefined4 *)(uVar15 + 0x1c) = 5;
      uVar9 = *(ulong *)(uVar15 + 8);
      if ((uVar9 & 1) != 0) {
        uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
      }
      func_0x000109cba060();
code_r0x000109ce8278:
      *(ulong *)(uVar15 + 0x10) = uVar9;
      goto LAB_109ce827c;
    }
code_r0x000109ce8254:
    uVar9 = *(ulong *)(uVar15 + 0x10);
LAB_109ce827c:
    *(undefined4 *)(uVar9 + 0x10) = *(undefined4 *)(param_3 + 0x1e0);
    *(undefined4 *)(uVar9 + 0x14) = *(undefined4 *)(param_3 + 0x1e4);
    return;
  case 9:
    if (*(int *)(param_2 + 0x8c) == 0x82) {
      uVar15 = *(ulong *)(param_2 + 0x80);
    }
    else {
      func_0x000109c819a4(param_2);
      *(undefined4 *)(param_2 + 0x8c) = 0x82;
      uVar15 = *(ulong *)(param_2 + 8);
      if ((uVar15 & 1) != 0) {
        uVar15 = *(ulong *)(uVar15 & 0xfffffffffffffffe);
      }
      func_0x000109cbac30();
      *(ulong *)(param_2 + 0x80) = uVar15;
    }
    if (*(int *)(uVar15 + 0x1c) != 0x32) {
      func_0x000109c80a48(uVar15);
      *(undefined4 *)(uVar15 + 0x1c) = 0x32;
      uVar9 = *(ulong *)(uVar15 + 8);
      if ((uVar9 & 1) != 0) {
        uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
      }
      func_0x000109cba0f4();
      goto code_r0x000109ce8178;
    }
code_r0x000109ce8154:
    uVar9 = *(ulong *)(uVar15 + 0x10);
    goto code_r0x000109ce817c;
  case 10:
    if (*(int *)(param_2 + 0x8c) == 0x82) {
      uVar15 = *(ulong *)(param_2 + 0x80);
    }
    else {
      func_0x000109c819a4(param_2);
      *(undefined4 *)(param_2 + 0x8c) = 0x82;
      uVar15 = *(ulong *)(param_2 + 8);
      if ((uVar15 & 1) != 0) {
        uVar15 = *(ulong *)(uVar15 & 0xfffffffffffffffe);
      }
      func_0x000109cbac30();
      *(ulong *)(param_2 + 0x80) = uVar15;
    }
    if (*(int *)(uVar15 + 0x1c) == 0x14) goto code_r0x000109ce8154;
    func_0x000109c80a48(uVar15);
    *(undefined4 *)(uVar15 + 0x1c) = 0x14;
    uVar9 = *(ulong *)(uVar15 + 8);
    if ((uVar9 & 1) != 0) {
      uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
    }
    func_0x000109cb9e18();
code_r0x000109ce8178:
    *(ulong *)(uVar15 + 0x10) = uVar9;
code_r0x000109ce817c:
    uVar17 = *(undefined4 *)(param_3 + 0x1e0);
code_r0x000109ce8180:
    *(undefined4 *)(uVar9 + 0x10) = uVar17;
    return;
  case 0xb:
    if (*(int *)(param_2 + 0x8c) == 0x82) {
      uVar15 = *(ulong *)(param_2 + 0x80);
    }
    else {
      func_0x000109c819a4(param_2);
      *(undefined4 *)(param_2 + 0x8c) = 0x82;
      uVar15 = *(ulong *)(param_2 + 8);
      if ((uVar15 & 1) != 0) {
        uVar15 = *(ulong *)(uVar15 & 0xfffffffffffffffe);
      }
      func_0x000109cbac30();
      *(ulong *)(param_2 + 0x80) = uVar15;
    }
    if (*(int *)(uVar15 + 0x1c) == 0x3c) {
      return;
    }
    func_0x000109c80a48(uVar15);
    *(undefined4 *)(uVar15 + 0x1c) = 0x3c;
    uVar9 = *(ulong *)(uVar15 + 8);
    if ((uVar9 & 1) != 0) {
      uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
    }
    func_0x000109cb9ea8();
    break;
  case 0xc:
    if (*(int *)(param_2 + 0x8c) == 0x82) {
      uVar15 = *(ulong *)(param_2 + 0x80);
    }
    else {
      func_0x000109c819a4(param_2);
      *(undefined4 *)(param_2 + 0x8c) = 0x82;
      uVar15 = *(ulong *)(param_2 + 8);
      if ((uVar15 & 1) != 0) {
        uVar15 = *(ulong *)(uVar15 & 0xfffffffffffffffe);
      }
      func_0x000109cbac30();
      *(ulong *)(param_2 + 0x80) = uVar15;
    }
    if (*(int *)(uVar15 + 0x1c) == 0x46) {
      return;
    }
    func_0x000109c80a48(uVar15);
    *(undefined4 *)(uVar15 + 0x1c) = 0x46;
    uVar9 = *(ulong *)(uVar15 + 8);
    if ((uVar9 & 1) != 0) {
      uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
    }
    func_0x000109cb9ef0();
  }
  *(ulong *)(uVar15 + 0x10) = uVar9;
  return;
}



/* Entry: 109ce8884; end: 109ce8913;  */

void FUN_109ce8884(void)

{
  return;
}



/* Entry: 109ce8914; end: 109ce8a6f;  */

void FUN_109ce8914(undefined8 *param_1,int *param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar4 = param_3;
  _strlen(param_3);
  piVar1 = param_2;
  uVar2 = param_3;
  func_0x000107c27d5c(param_2,param_3,uVar4,0);
  if (piVar1 == (int *)0x0) {
    piVar1 = param_2;
    func_0x000107c27d60(param_2,*param_2 + 1);
    if ((int)piVar1 != 0) {
      uVar4 = param_3;
      _strlen(param_3);
      uVar2 = param_3;
      func_0x000107c27d5c(param_2,param_3,uVar4,0);
    }
    piVar1 = param_2;
    func_0x000107c27d64(param_2,0x40);
    lVar5 = *(long *)(param_2 + 6);
    func_0x000107c31940(&uStack_58,param_3);
    *(undefined8 *)(piVar1 + 4) = uStack_50;
    *(undefined8 *)(piVar1 + 2) = uStack_58;
    *(long *)(piVar1 + 6) = lStack_48;
    uStack_58 = 0;
    uStack_50 = 0;
    lStack_48 = 0;
    if (lVar5 != 0) {
      func_0x00010b4d8014(lVar5,piVar1 + 2,&UNK_104c611dc);
      if (lStack_48 < 0) {
        __ZdlPv(uStack_58);
      }
    }
    uVar4 = *(undefined8 *)(param_2 + 6);
    *(undefined ***)(piVar1 + 8) = &PTR_DAT_110b33be0;
    *(undefined8 *)(piVar1 + 10) = uVar4;
    piVar1[0xe] = 0;
    piVar1[0xf] = 0;
    func_0x000107c27d68(param_2,uVar2,piVar1);
    *param_2 = *param_2 + 1;
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  *param_1 = piVar1;
  param_1[1] = param_2;
  *(int *)(param_1 + 2) = (int)uVar2;
  *(undefined1 *)(param_1 + 3) = uVar3;
  return;
}



/* Entry: 109ce8a70; end: 109ce8fdf;  */

void FUN_109ce8a70(undefined8 param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  ulong *puVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  int *piVar9;
  ulong uVar10;
  int aiStack_60 [2];
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_44;
  
  if (*(byte *)(param_5 + 0xa0) < 4) {
    uVar8 = *(ulong *)(param_3 + 0x20);
    puVar1 = (ulong *)(param_3 + 0x20);
    if ((uVar8 & 1) != 0) {
      puVar1 = (ulong *)(uVar8 + 7);
    }
    uVar8 = *puVar1;
    if (*(int *)(uVar8 + 0x58) != 1) {
      func_0x00010952d0c4(&UNK_10e03ec4a,&UNK_10f5a9c71,&UNK_10f5a9d07);
LAB_109ce8fc4:
      func_0x00010952d0c4(&UNK_10f5a9d33,&UNK_10f5a9d42,&UNK_10f5a9d57);
      return;
    }
    if (*(int *)(param_2 + 0x8c) == 0x122) {
      uVar5 = *(ulong *)(param_2 + 0x80);
    }
    else {
      func_0x000109c819a4(param_2);
      *(undefined4 *)(param_2 + 0x8c) = 0x122;
      uVar5 = *(ulong *)(param_2 + 8);
      if ((uVar5 & 1) != 0) {
        uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
      }
      func_0x000109cba700();
      *(ulong *)(param_2 + 0x80) = uVar5;
    }
    iVar7 = *(int *)(uVar8 + 0x5c);
    piVar9 = (int *)(uVar5 + 0x18);
    iVar6 = *piVar9;
    iVar2 = *(int *)(uVar5 + 0x1c);
    if (iVar6 == iVar2) {
      func_0x0001087675dc(piVar9,iVar2,iVar2 + 1);
      iVar6 = *(int *)(uVar5 + 0x18);
      iVar2 = *(int *)(uVar5 + 0x1c);
    }
    lVar3 = *(long *)(uVar5 + 0x20);
    iVar4 = iVar6 + 1;
    *(int *)(uVar5 + 0x18) = iVar4;
    *(long *)(lVar3 + (long)iVar6 * 8) = (long)iVar7;
    iVar6 = *(int *)(uVar8 + 0x60);
    if (iVar4 == iVar2) {
      func_0x0001087675dc(piVar9,iVar2,iVar2 + 1);
      lVar3 = *(long *)(uVar5 + 0x20);
      iVar4 = *(int *)(uVar5 + 0x18);
      iVar2 = *(int *)(uVar5 + 0x1c);
    }
    iVar7 = iVar4 + 1;
    *piVar9 = iVar7;
    *(long *)(lVar3 + (long)iVar4 * 8) = (long)iVar6;
    iVar6 = *(int *)(uVar8 + 100);
    if (iVar7 == iVar2) {
      func_0x0001087675dc(piVar9,iVar2,iVar2 + 1);
      iVar7 = *(int *)(uVar5 + 0x18);
      lVar3 = *(long *)(uVar5 + 0x20);
    }
    *(int *)(uVar5 + 0x18) = iVar7 + 1;
    *(long *)(lVar3 + (long)iVar7 * 8) = (long)iVar6;
    *(uint *)(uVar5 + 0x10) = *(uint *)(uVar5 + 0x10) | 1;
    uVar10 = *(ulong *)(uVar5 + 0x30);
    if (uVar10 == 0) {
      uVar10 = *(ulong *)(uVar5 + 8);
      if ((uVar10 & 1) != 0) {
        uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
      }
      func_0x000109cba3bc();
      *(ulong *)(uVar5 + 0x30) = uVar10;
    }
    if ((*(byte *)(param_3 + 0x1a4) & 1) == 0) {
      iVar6 = *(int *)(uVar8 + 0x60) * *(int *)(uVar8 + 0x58) * *(int *)(uVar8 + 100) *
              *(int *)(uVar8 + 0x5c);
      if (*(int *)(uVar10 + 0x1c) < iVar6) {
        func_0x000109311970(uVar10 + 0x18,*(undefined4 *)(uVar10 + 0x18),iVar6);
      }
      if (0 < iVar6) {
        iVar2 = 0;
        lVar3 = *(long *)(uVar10 + 0x20);
        do {
          FUN_109ce5394(&uStack_44,iVar2,uVar8,aiStack_60);
          iVar7 = *(int *)(uVar10 + 0x18);
          *(int *)(uVar10 + 0x18) = iVar7 + 1;
          *(undefined4 *)(lVar3 + (long)iVar7 * 4) = uStack_44;
          iVar2 = iVar2 + 1;
        } while (iVar6 - iVar2 != 0);
      }
    }
    else {
      aiStack_60[0] = *(int *)(param_3 + 0x194);
      if (aiStack_60[0] != 2) goto LAB_109ce8fc4;
      uStack_58 = 0;
      uStack_50 = 5;
      iVar6 = *(int *)(uVar8 + 0x60) * *(int *)(uVar8 + 0x58) * *(int *)(uVar8 + 100) *
              *(int *)(uVar8 + 0x5c);
      if (*(int *)(uVar10 + 0x1c) < iVar6) {
        func_0x000109311970(uVar10 + 0x18,*(undefined4 *)(uVar10 + 0x18),iVar6);
      }
      if (0 < iVar6) {
        iVar2 = 0;
        do {
          FUN_109ce5460(&uStack_44,iVar2,uVar8,aiStack_60);
          iVar7 = *(int *)(uVar10 + 0x18);
          *(int *)(uVar10 + 0x18) = iVar7 + 1;
          *(undefined4 *)(*(long *)(uVar10 + 0x20) + (long)iVar7 * 4) = uStack_44;
          iVar2 = iVar2 + 1;
        } while (iVar6 - iVar2 != 0);
      }
    }
  }
  else {
    if (*(int *)(param_2 + 0x8c) == 0x42e) {
      uVar8 = *(ulong *)(param_2 + 0x80);
    }
    else {
      func_0x000109c819a4(param_2);
      *(undefined4 *)(param_2 + 0x8c) = 0x42e;
      uVar8 = *(ulong *)(param_2 + 8);
      if ((uVar8 & 1) != 0) {
        uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
      }
      func_0x000109cba6ac();
      *(ulong *)(param_2 + 0x80) = uVar8;
    }
    uVar5 = *(ulong *)(param_3 + 0x20);
    puVar1 = (ulong *)(param_3 + 0x20);
    if ((uVar5 & 1) != 0) {
      puVar1 = (ulong *)(uVar5 + 7);
    }
    uVar5 = *puVar1;
    iVar7 = *(int *)(uVar5 + 0x58);
    piVar9 = (int *)(uVar8 + 0x18);
    iVar6 = *piVar9;
    iVar2 = *(int *)(uVar8 + 0x1c);
    if (iVar6 == iVar2) {
      func_0x0001087675dc(piVar9,iVar2,iVar2 + 1);
      iVar6 = *(int *)(uVar8 + 0x18);
      iVar2 = *(int *)(uVar8 + 0x1c);
    }
    lVar3 = *(long *)(uVar8 + 0x20);
    iVar4 = iVar6 + 1;
    *(int *)(uVar8 + 0x18) = iVar4;
    *(long *)(lVar3 + (long)iVar6 * 8) = (long)iVar7;
    if (iVar4 == iVar2) {
      func_0x0001087675dc(piVar9,iVar2,iVar2 + 1);
      lVar3 = *(long *)(uVar8 + 0x20);
      iVar4 = *(int *)(uVar8 + 0x18);
      iVar2 = *(int *)(uVar8 + 0x1c);
    }
    iVar6 = iVar4 + 1;
    *piVar9 = iVar6;
    *(undefined8 *)(lVar3 + (long)iVar4 * 8) = 1;
    iVar7 = *(int *)(uVar5 + 0x5c);
    if (iVar6 == iVar2) {
      func_0x0001087675dc(piVar9,iVar2,iVar2 + 1);
      lVar3 = *(long *)(uVar8 + 0x20);
      iVar6 = *(int *)(uVar8 + 0x18);
      iVar2 = *(int *)(uVar8 + 0x1c);
    }
    iVar4 = iVar6 + 1;
    *piVar9 = iVar4;
    *(long *)(lVar3 + (long)iVar6 * 8) = (long)iVar7;
    iVar6 = *(int *)(uVar5 + 0x60);
    if (iVar4 == iVar2) {
      func_0x0001087675dc(piVar9,iVar2,iVar2 + 1);
      lVar3 = *(long *)(uVar8 + 0x20);
      iVar4 = *(int *)(uVar8 + 0x18);
      iVar2 = *(int *)(uVar8 + 0x1c);
    }
    iVar7 = iVar4 + 1;
    *piVar9 = iVar7;
    *(long *)(lVar3 + (long)iVar4 * 8) = (long)iVar6;
    iVar6 = *(int *)(uVar5 + 100);
    if (iVar7 == iVar2) {
      func_0x0001087675dc(piVar9,iVar2,iVar2 + 1);
      iVar7 = *(int *)(uVar8 + 0x18);
      lVar3 = *(long *)(uVar8 + 0x20);
    }
    *(int *)(uVar8 + 0x18) = iVar7 + 1;
    *(long *)(lVar3 + (long)iVar7 * 8) = (long)iVar6;
    *(uint *)(uVar8 + 0x10) = *(uint *)(uVar8 + 0x10) | 1;
    uVar10 = *(ulong *)(uVar8 + 0x30);
    if (uVar10 == 0) {
      uVar10 = *(ulong *)(uVar8 + 8);
      if ((uVar10 & 1) != 0) {
        uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
      }
      func_0x000109cba3bc();
      *(ulong *)(uVar8 + 0x30) = uVar10;
    }
    if ((*(byte *)(param_3 + 0x1a4) & 1) == 0) {
      iVar6 = *(int *)(uVar5 + 0x60) * *(int *)(uVar5 + 0x58) * *(int *)(uVar5 + 100) *
              *(int *)(uVar5 + 0x5c);
      if (*(int *)(uVar10 + 0x1c) < iVar6) {
        func_0x000109311970(uVar10 + 0x18,*(undefined4 *)(uVar10 + 0x18),iVar6);
      }
      if (0 < iVar6) {
        iVar2 = 0;
        lVar3 = *(long *)(uVar10 + 0x20);
        do {
          FUN_109ce5394(&uStack_44,iVar2,uVar5,aiStack_60);
          iVar7 = *(int *)(uVar10 + 0x18);
          *(int *)(uVar10 + 0x18) = iVar7 + 1;
          *(undefined4 *)(lVar3 + (long)iVar7 * 4) = uStack_44;
          iVar2 = iVar2 + 1;
        } while (iVar6 - iVar2 != 0);
      }
    }
    else {
      aiStack_60[0] = *(int *)(param_3 + 0x194);
      if (aiStack_60[0] != 2) goto LAB_109ce8fc4;
      uStack_58 = 0;
      uStack_50 = 5;
      iVar6 = *(int *)(uVar5 + 0x60) * *(int *)(uVar5 + 0x58) * *(int *)(uVar5 + 100) *
              *(int *)(uVar5 + 0x5c);
      if (*(int *)(uVar10 + 0x1c) < iVar6) {
        func_0x000109311970(uVar10 + 0x18,*(undefined4 *)(uVar10 + 0x18),iVar6);
      }
      if (0 < iVar6) {
        iVar2 = 0;
        do {
          FUN_109ce5460(&uStack_44,iVar2,uVar5,aiStack_60);
          iVar7 = *(int *)(uVar10 + 0x18);
          *(int *)(uVar10 + 0x18) = iVar7 + 1;
          *(undefined4 *)(*(long *)(uVar10 + 0x20) + (long)iVar7 * 4) = uStack_44;
          iVar2 = iVar2 + 1;
        } while (iVar6 - iVar2 != 0);
      }
    }
  }
  return;
}



/* Entry: 109ce8fe0; end: 109ce903b;  */

void FUN_109ce8fe0(void)

{
  return;
}



/* Entry: 109ce903c; end: 109ce90a7;  */

void FUN_109ce903c(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 in_w3;
  undefined1 auStack_40 [28];
  undefined4 uStack_24;
  
  puVar2 = &uStack_24;
  uStack_24 = in_w3;
  FUN_109ce555c(puVar2);
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_40,&UNK_10f5a9d91,puVar2);
  FUN_109cd45b4(&UNK_10e03ecb2,&UNK_10f5a9d7a,auStack_40);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109ce908c);
  (*pcVar1)();
}



/* Entry: 109ce90a8; end: 109ce9113;  */

void FUN_109ce90a8(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 in_w3;
  undefined1 auStack_40 [28];
  undefined4 uStack_24;
  
  puVar2 = &uStack_24;
  uStack_24 = in_w3;
  FUN_109ce555c(puVar2);
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_40,&UNK_10f5a9d91,puVar2);
  FUN_109cd45b4(&UNK_10e03ecb2,&UNK_10f5a9db5,auStack_40);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109ce90f8);
  (*pcVar1)();
}



/* Entry: 109ce9114; end: 109ce917b;  */

void FUN_109ce9114(void)

{
  code *pcVar1;
  undefined8 in_x3;
  undefined1 auStack_38 [24];
  
  FUN_109ce555c(in_x3);
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_38,&UNK_10f5a9d91,in_x3);
  FUN_109cd45b4(&UNK_10e03ecb2,&UNK_10f5a9dca,auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109ce9160);
  (*pcVar1)();
}



/* Entry: 109ce917c; end: 109ce9183;  */

void FUN_109ce917c(void)

{
  return;
}



/* Entry: 109ce9184; end: 109ce933b;  */

undefined1  [16] FUN_109ce9184(undefined8 *param_1,long param_2,int param_3)

{
  int iVar1;
  ulong *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  ulong uVar14;
  uint *puVar15;
  ulong uVar16;
  uint *puVar17;
  undefined4 uVar18;
  undefined *puVar19;
  ulong uVar20;
  ulong *puVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  if (0 < *(int *)(param_2 + 0x28)) {
    puVar21 = (ulong *)(param_2 + 0x20);
    uVar7 = 0x20;
    if (*(int *)(param_2 + 0x1b8) != 1) {
      uVar7 = 0x10;
    }
    uVar8 = 0x10;
    if ((*(uint *)(param_2 + 0x14) & 0x8000) != 0) {
      uVar8 = uVar7;
    }
    uVar20 = (ulong)uVar8;
    puVar2 = puVar21;
    if ((*puVar21 & 1) != 0) {
      puVar2 = (ulong *)(*puVar21 + 7);
    }
    uVar14 = *puVar2;
    uVar16 = uVar20;
    FUN_109ce9ccc(uVar14,uVar20,*(undefined4 *)(uVar14 + 0x74));
    if (1 < *(int *)(param_2 + 0x28)) {
      puVar2 = puVar21;
      if ((*puVar21 & 1) != 0) {
        puVar2 = (ulong *)(*puVar21 + 0xf);
      }
      uVar14 = *puVar2;
      if ((*(byte *)(uVar14 + 0x11) & 1) == 0) {
        uVar18 = 0x20;
      }
      else {
        uVar18 = *(undefined4 *)(uVar14 + 0x74);
      }
      FUN_109ce9ccc(uVar14,uVar20,uVar18);
      uVar16 = uVar20;
    }
    *(undefined1 *)(param_1 + 6) = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    if ((param_3 == 0x17) || (param_3 == 0x12)) {
      if ((*puVar21 & 1) != 0) {
        puVar21 = (ulong *)(*puVar21 + 7);
      }
      *(undefined4 *)param_1 = *(undefined4 *)(*puVar21 + 0x58);
      *(undefined1 *)(param_1 + 6) = 1;
    }
    else {
      if ((*puVar21 & 1) != 0) {
        puVar21 = (ulong *)(*puVar21 + 7);
      }
      *(undefined4 *)param_1 = *(undefined4 *)(*puVar21 + 0x5c);
    }
    uVar18 = *(undefined4 *)(param_2 + 0x1d4);
    if ((*(uint *)(param_2 + 0x14) & 0x800000) == 0) {
      uVar18 = 1;
    }
    uVar3 = *(undefined4 *)(param_2 + 0x1fc);
    if ((*(uint *)(param_2 + 0x18) & 4) == 0) {
      uVar3 = 1;
    }
    uVar6 = *(undefined4 *)(param_2 + 0x184);
    uVar12 = *(undefined4 *)(param_2 + 0x188);
    if ((*(uint *)(param_2 + 0x10) & 0x40) != 0) {
      uVar6 = *(undefined4 *)(param_2 + 0x120);
      uVar12 = *(undefined4 *)(param_2 + 0x120);
    }
    uVar4 = *(undefined4 *)(param_2 + 0x118);
    *(undefined4 *)((long)param_1 + 0xc) = uVar12;
    *(undefined4 *)(param_1 + 2) = uVar18;
    *(undefined4 *)((long)param_1 + 4) = uVar4;
    *(undefined4 *)(param_1 + 1) = uVar6;
    iVar5 = *(int *)(param_2 + 0x11c);
    iVar1 = *(int *)(param_2 + 0x17c);
    iVar13 = *(int *)(param_2 + 0x180);
    if (iVar5 != 0) {
      iVar1 = iVar5;
      iVar13 = iVar5;
    }
    uVar6 = *(undefined4 *)(param_2 + 0x1d0);
    *(undefined4 *)((long)param_1 + 0x14) = uVar18;
    *(undefined4 *)(param_1 + 3) = uVar3;
    *(int *)((long)param_1 + 0x24) = iVar13;
    *(undefined4 *)(param_1 + 5) = uVar6;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar3;
    *(int *)(param_1 + 4) = iVar1;
    *(undefined4 *)((long)param_1 + 0x34) = *(undefined4 *)(param_2 + 0x14c);
    *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x1a8);
    auVar22._8_8_ = uVar16;
    auVar22._0_8_ = uVar14;
    return auVar22;
  }
  puVar15 = (uint *)&UNK_10f5a9de0;
  puVar17 = puVar15;
  func_0x00010952d0c4(&UNK_10f5a9de0,&UNK_10f5a9de0,&UNK_10f5a9dee);
  uVar7 = puVar17[2];
  if ((char)puVar17[0xc] == '\x01') {
    uVar8 = puVar17[0xb];
    uVar9 = puVar17[0xd];
    if (uVar8 != 0 && uVar9 != 0) {
      puVar19 = &UNK_10f5a9eab;
      goto LAB_109ce9484;
    }
    uVar10 = *puVar15;
    uVar11 = puVar17[4];
    if (uVar9 - 2 < 3) {
      uVar20 = (ulong)(uVar11 * uVar10);
      uVar16 = (ulong)(puVar17[5] * puVar15[1]);
    }
    else if (uVar9 == 1) {
      uVar20 = (ulong)(uVar7 + uVar11 * (uVar10 - 1));
      uVar16 = (ulong)(puVar17[3] + puVar17[5] * (puVar15[1] - 1));
    }
    else {
      if (uVar9 != 0) {
        do {
          puVar19 = &UNK_10f5a9ee1;
LAB_109ce9484:
          func_0x00010952d0c4(&UNK_10f5a9e93,&UNK_10f5a9e93,puVar19);
        } while( true );
      }
      uVar20 = (ulong)(uVar7 + puVar17[8] * -2 + uVar11 * (uVar10 - 1) + uVar8);
      uVar16 = (ulong)(uVar8 + puVar17[9] * -2 + puVar17[3] + puVar17[5] * (puVar15[1] - 1));
    }
  }
  else {
    uVar8 = puVar17[6];
    if (uVar8 < 2) {
      uVar8 = 1;
    }
    uVar9 = puVar17[3];
    uVar20 = (ulong)*puVar15;
    FUN_109ce94a0(uVar20,puVar17[8],uVar8 * (uVar7 - 1) + 1,puVar17[4],puVar17[0xd]);
    uVar16 = (ulong)puVar15[1];
    FUN_109ce94a0(uVar16,puVar17[9],(uVar9 - 1) * uVar8 + 1,puVar17[5],puVar17[0xd]);
  }
  auVar23._0_8_ = uVar20 & 0xffffffff | uVar16 << 0x20;
  auVar23._12_4_ = puVar15[3];
  auVar23._8_4_ = puVar17[1];
  return auVar23;
}



/* Entry: 109ce933c; end: 109ce949f;  */

undefined1  [16] FUN_109ce933c(uint *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  iVar1 = *(int *)(param_2 + 8);
  if (*(char *)(param_2 + 0x30) == '\x01') {
    iVar2 = *(int *)(param_2 + 0x2c);
    iVar3 = *(int *)(param_2 + 0x34);
    if (iVar2 != 0 && iVar3 != 0) {
      puVar7 = &UNK_10f5a9eab;
      goto LAB_109ce9484;
    }
    uVar4 = *param_1;
    iVar5 = *(int *)(param_2 + 0x10);
    if (iVar3 - 2U < 3) {
      uVar8 = (ulong)(iVar5 * uVar4);
      uVar6 = (ulong)(*(int *)(param_2 + 0x14) * param_1[1]);
    }
    else if (iVar3 == 1) {
      uVar8 = (ulong)(iVar1 + iVar5 * (uVar4 - 1));
      uVar6 = (ulong)(*(int *)(param_2 + 0xc) + *(int *)(param_2 + 0x14) * (param_1[1] - 1));
    }
    else {
      if (iVar3 != 0) {
        do {
          puVar7 = &UNK_10f5a9ee1;
LAB_109ce9484:
          func_0x00010952d0c4(&UNK_10f5a9e93,&UNK_10f5a9e93,puVar7);
        } while( true );
      }
      uVar8 = (ulong)(iVar1 + *(int *)(param_2 + 0x20) * -2 + iVar5 * (uVar4 - 1) + iVar2);
      uVar6 = (ulong)(iVar2 + *(int *)(param_2 + 0x24) * -2 + *(int *)(param_2 + 0xc) +
                     *(int *)(param_2 + 0x14) * (param_1[1] - 1));
    }
  }
  else {
    uVar4 = *(uint *)(param_2 + 0x18);
    if (uVar4 < 2) {
      uVar4 = 1;
    }
    iVar2 = *(int *)(param_2 + 0xc);
    uVar8 = (ulong)*param_1;
    FUN_109ce94a0(uVar8,*(undefined4 *)(param_2 + 0x20),uVar4 * (iVar1 + -1) + 1,
                  *(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x34));
    uVar6 = (ulong)param_1[1];
    FUN_109ce94a0(uVar6,*(undefined4 *)(param_2 + 0x24),(iVar2 + -1) * uVar4 + 1,
                  *(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x34));
  }
  auVar9._0_8_ = uVar8 & 0xffffffff | uVar6 << 0x20;
  auVar9._12_4_ = param_1[3];
  auVar9._8_4_ = *(undefined4 *)(param_2 + 4);
  return auVar9;
}



/* Entry: 109ce94a0; end: 109ce958b;  */

uint FUN_109ce94a0(int param_1,int param_2,int param_3,uint param_4,undefined8 param_5)

{
  uint uVar1;
  code *pcVar2;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  if ((uint)param_5 - 2 < 3) {
    uVar1 = 0;
    if (param_4 != 0) {
      uVar1 = ((param_1 + param_4) - 1) / param_4;
    }
  }
  else {
    if (1 < (uint)param_5) {
      __ZNSt3__19to_stringEi(auStack_68,param_5);
      func_0x00010928a5e0(auStack_50,&UNK_10f5a9f1b,auStack_68);
      func_0x000109259240(auStack_38,auStack_50,&DAT_10f638984);
      FUN_109cd45b4(&UNK_10f5a9f05,&UNK_10f5a9f05,auStack_38);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x109ce9540);
      (*pcVar2)();
    }
    uVar1 = 0;
    if (param_4 != 0) {
      uVar1 = (uint)((param_1 + param_2 * 2) - param_3) / param_4;
    }
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}



/* Entry: 109ce958c; end: 109ce9593;  */

void FUN_109ce958c(void)

{
  return;
}



/* Entry: 109ce9594; end: 109ce9c7b;  */

void FUN_109ce9594(undefined8 param_1,long param_2,long param_3,undefined8 param_4,uint *param_5)

{
  ulong *puVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  ulong *puVar13;
  undefined1 auVar14 [16];
  undefined4 auStack_a8 [2];
  undefined **ppuStack_a0;
  undefined4 uStack_98;
  ulong uStack_90;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  int iStack_64;
  char cStack_60;
  undefined4 uStack_54;
  
  FUN_109ce9184(&uStack_90,param_3,param_4);
  if (*(int *)(param_2 + 0x8c) == 100) {
    uVar10 = *(ulong *)(param_2 + 0x80);
  }
  else {
    func_0x000109c819a4(param_2);
    *(undefined4 *)(param_2 + 0x8c) = 100;
    uVar10 = *(ulong *)(param_2 + 8);
    if ((uVar10 & 1) != 0) {
      uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
    }
    func_0x000109cba968();
    *(ulong *)(param_2 + 0x80) = uVar10;
  }
  if ((cStack_60 == '\x01') && (*(undefined1 *)(uVar10 + 0xa0) = 1, iStack_64 != 0)) {
    uVar7 = *(ulong *)(param_2 + 0x28);
    puVar1 = (ulong *)(param_2 + 0x28);
    if ((uVar7 & 1) != 0) {
      puVar1 = (ulong *)(uVar7 + 7);
    }
    FUN_109cf8a0c(param_5,*puVar1);
    uVar2 = param_5[1];
    piVar12 = (int *)(uVar10 + 0x60);
    iVar8 = *piVar12;
    iVar5 = *(int *)(uVar10 + 100);
    if (iVar8 == iVar5) {
      func_0x0001087675dc(piVar12,iVar5,iVar5 + 1);
      iVar8 = *(int *)(uVar10 + 0x60);
      iVar5 = *(int *)(uVar10 + 100);
    }
    lVar9 = *(long *)(uVar10 + 0x68);
    iVar6 = iVar8 + 1;
    *(int *)(uVar10 + 0x60) = iVar6;
    *(ulong *)(lVar9 + (long)iVar8 * 8) = (ulong)uVar2;
    uVar2 = *param_5;
    if (iVar6 == iVar5) {
      func_0x0001087675dc(piVar12,iVar5,iVar5 + 1);
      iVar6 = *(int *)(uVar10 + 0x60);
      lVar9 = *(long *)(uVar10 + 0x68);
    }
    *piVar12 = iVar6 + 1;
    *(ulong *)(lVar9 + (long)iVar6 * 8) = (ulong)uVar2;
  }
  auVar14._0_8_ = uStack_90 & 0xffffffff;
  auVar14._8_8_ = uStack_90 >> 0x20;
  auVar14 = NEON_ext(auVar14,auVar14,8,1);
  *(long *)(uVar10 + 0x90) = auVar14._8_8_;
  *(long *)(uVar10 + 0x88) = auVar14._0_8_;
  if ((int)param_4 == 0x17) {
    uVar7 = *(ulong *)(param_3 + 0x20);
    puVar1 = (ulong *)(param_3 + 0x20);
    if ((uVar7 & 1) != 0) {
      puVar1 = (ulong *)(uVar7 + 7);
    }
    uVar7 = (ulong)*(int *)(*puVar1 + 0x58);
  }
  else {
    uVar7 = (ulong)uStack_68;
  }
  piVar12 = (int *)(uVar10 + 0x30);
  iVar8 = *piVar12;
  *(ulong *)(uVar10 + 0x98) = uVar7;
  iVar5 = *(int *)(uVar10 + 0x34);
  if (iVar8 == iVar5) {
    func_0x0001087675dc(piVar12,iVar5,iVar5 + 1);
    iVar8 = *(int *)(uVar10 + 0x30);
    iVar5 = *(int *)(uVar10 + 0x34);
  }
  lVar9 = *(long *)(uVar10 + 0x38);
  iVar6 = iVar8 + 1;
  *(int *)(uVar10 + 0x30) = iVar6;
  *(ulong *)(lVar9 + (long)iVar8 * 8) = (ulong)uStack_7c;
  if (iVar6 == iVar5) {
    func_0x0001087675dc(piVar12,iVar5,iVar5 + 1);
    iVar6 = *(int *)(uVar10 + 0x30);
    lVar9 = *(long *)(uVar10 + 0x38);
  }
  piVar12 = (int *)(uVar10 + 0x48);
  iVar8 = *piVar12;
  *(int *)(uVar10 + 0x30) = iVar6 + 1;
  *(ulong *)(lVar9 + (long)iVar6 * 8) = (ulong)uStack_80;
  iVar5 = *(int *)(uVar10 + 0x4c);
  if (iVar8 == iVar5) {
    func_0x0001087675dc(piVar12,iVar5,iVar5 + 1);
    iVar8 = *(int *)(uVar10 + 0x48);
    iVar5 = *(int *)(uVar10 + 0x4c);
  }
  lVar9 = *(long *)(uVar10 + 0x50);
  iVar6 = iVar8 + 1;
  *(int *)(uVar10 + 0x48) = iVar6;
  *(ulong *)(lVar9 + (long)iVar8 * 8) = (ulong)uStack_74;
  if (iVar6 == iVar5) {
    func_0x0001087675dc(piVar12,iVar5,iVar5 + 1);
    iVar6 = *(int *)(uVar10 + 0x48);
    lVar9 = *(long *)(uVar10 + 0x50);
  }
  piVar12 = (int *)(uVar10 + 0x18);
  iVar8 = *piVar12;
  *(int *)(uVar10 + 0x48) = iVar6 + 1;
  *(ulong *)(lVar9 + (long)iVar6 * 8) = (ulong)uStack_78;
  iVar5 = *(int *)(uVar10 + 0x1c);
  if (iVar8 == iVar5) {
    func_0x0001087675dc(piVar12,iVar5,iVar5 + 1);
    iVar8 = *(int *)(uVar10 + 0x18);
    iVar5 = *(int *)(uVar10 + 0x1c);
  }
  lVar9 = *(long *)(uVar10 + 0x20);
  iVar6 = iVar8 + 1;
  *(int *)(uVar10 + 0x18) = iVar6;
  *(ulong *)(lVar9 + (long)iVar8 * 8) = (ulong)uStack_84;
  if (iVar6 == iVar5) {
    func_0x0001087675dc(piVar12,iVar5,iVar5 + 1);
    iVar6 = *(int *)(uVar10 + 0x18);
    lVar9 = *(long *)(uVar10 + 0x20);
  }
  *piVar12 = iVar6 + 1;
  *(ulong *)(lVar9 + (long)iVar6 * 8) = (ulong)uStack_88;
  iVar8 = *(int *)(param_3 + 0x14c);
  if (iVar8 < 2) {
    if (iVar8 == 0) {
      if (*(int *)(uVar10 + 0xb0) == 0x32) {
        uVar7 = *(ulong *)(uVar10 + 0xa8);
      }
      else {
        func_0x000109c91a9c(uVar10);
        *(undefined4 *)(uVar10 + 0xb0) = 0x32;
        uVar7 = *(ulong *)(uVar10 + 8);
        if ((uVar7 & 1) != 0) {
          uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
        }
        func_0x000109cba41c();
        *(ulong *)(uVar10 + 0xa8) = uVar7;
      }
      *(uint *)(uVar7 + 0x10) = *(uint *)(uVar7 + 0x10) | 1;
      uVar11 = *(ulong *)(uVar7 + 0x18);
      if (uVar11 == 0) {
        uVar11 = *(ulong *)(uVar7 + 8);
        if ((uVar11 & 1) != 0) {
          uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
        }
        func_0x000109cba36c();
        *(ulong *)(uVar7 + 0x18) = uVar11;
      }
      lVar9 = uVar11 + 0x10;
      func_0x000107c303b0(lVar9,&UNK_109cb9ae4);
      lVar4 = uVar11 + 0x10;
      func_0x000107c303b0(lVar4,&UNK_109cb9ae4);
      *(ulong *)(lVar9 + 0x10) = (ulong)uStack_6c;
      *(ulong *)(lVar9 + 0x18) = (ulong)uStack_6c;
      *(ulong *)(lVar4 + 0x10) = (ulong)uStack_70;
      *(ulong *)(lVar4 + 0x18) = (ulong)uStack_70;
    }
    else if ((iVar8 == 1) && (*(int *)(uVar10 + 0xb0) != 0x32)) {
      func_0x000109c91a9c(uVar10);
      *(undefined4 *)(uVar10 + 0xb0) = 0x32;
      uVar7 = *(ulong *)(uVar10 + 8);
      if ((uVar7 & 1) != 0) {
        uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
      }
      func_0x000109cba41c();
      *(ulong *)(uVar10 + 0xa8) = uVar7;
    }
    goto LAB_109ce98e8;
  }
  if (iVar8 != 2) {
    if (iVar8 == 3) {
      if (*(int *)(uVar10 + 0xb0) == 0x33) {
        uVar7 = *(ulong *)(uVar10 + 0xa8);
      }
      else {
        func_0x000109c91a9c(uVar10);
        *(undefined4 *)(uVar10 + 0xb0) = 0x33;
        uVar7 = *(ulong *)(uVar10 + 8);
        if ((uVar7 & 1) != 0) {
          uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
        }
        func_0x000109cb7b64();
        *(ulong *)(uVar10 + 0xa8) = uVar7;
      }
      *(undefined4 *)(uVar7 + 0x10) = 1;
      goto LAB_109ce98e8;
    }
    if (iVar8 != 4) goto LAB_109ce98e8;
  }
  if (*(int *)(uVar10 + 0xb0) == 0x33) {
    uVar7 = *(ulong *)(uVar10 + 0xa8);
  }
  else {
    func_0x000109c91a9c(uVar10);
    *(undefined4 *)(uVar10 + 0xb0) = 0x33;
    uVar7 = *(ulong *)(uVar10 + 8);
    if ((uVar7 & 1) != 0) {
      uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    }
    func_0x000109cb7b64();
    *(ulong *)(uVar10 + 0xa8) = uVar7;
  }
  *(undefined4 *)(uVar7 + 0x10) = 0;
LAB_109ce98e8:
  puVar13 = (ulong *)(param_3 + 0x20);
  bVar3 = *(byte *)(param_3 + 0x1a4);
  puVar1 = puVar13;
  if ((*puVar13 & 1) != 0) {
    puVar1 = (ulong *)(*puVar13 + 7);
  }
  uVar11 = *puVar1;
  *(uint *)(uVar10 + 0x10) = *(uint *)(uVar10 + 0x10) | 1;
  uVar7 = *(ulong *)(uVar10 + 0x78);
  if ((bVar3 & 1) == 0) {
    if (uVar7 == 0) {
      uVar7 = *(ulong *)(uVar10 + 8);
      if ((uVar7 & 1) != 0) {
        uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
      }
      func_0x000109cba3bc();
      *(ulong *)(uVar10 + 0x78) = uVar7;
    }
    iVar8 = *(int *)(uVar11 + 0x60) * *(int *)(uVar11 + 0x58) * *(int *)(uVar11 + 100) *
            *(int *)(uVar11 + 0x5c);
    if (*(int *)(uVar7 + 0x1c) < iVar8) {
      func_0x000109311970(uVar7 + 0x18,*(undefined4 *)(uVar7 + 0x18),iVar8);
    }
    if (0 < iVar8) {
      iVar5 = 0;
      lVar9 = *(long *)(uVar7 + 0x20);
      do {
        FUN_109ce5394(&uStack_54,iVar5,uVar11,auStack_a8);
        iVar6 = *(int *)(uVar7 + 0x18);
        *(int *)(uVar7 + 0x18) = iVar6 + 1;
        *(undefined4 *)(lVar9 + (long)iVar6 * 4) = uStack_54;
        iVar5 = iVar5 + 1;
      } while (iVar8 - iVar5 != 0);
    }
  }
  else {
    if (uVar7 == 0) {
      uVar7 = *(ulong *)(uVar10 + 8);
      if ((uVar7 & 1) != 0) {
        uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
      }
      func_0x000109cba3bc();
      *(ulong *)(uVar10 + 0x78) = uVar7;
    }
    auStack_a8[0] = *(undefined4 *)(param_3 + 0x194);
    ppuStack_a0 = &PTR_PTR_1132ec9b0;
    if (*(undefined ***)(param_3 + 0x110) != (undefined **)0x0) {
      ppuStack_a0 = *(undefined ***)(param_3 + 0x110);
    }
    if (*(char *)(param_3 + 0x1a4) == '\0') {
      ppuStack_a0 = (undefined **)0x0;
    }
    piVar12 = (int *)(*(ulong *)(param_3 + 0x100) & 0xfffffffffffffffc);
    FUN_109ce6364();
    iVar8 = *piVar12;
    if (iVar8 == 0x11) {
      uStack_98 = 0;
    }
    else if (iVar8 == 0x17) {
      uStack_98 = 2;
    }
    else {
      if (iVar8 != 0x12) {
        func_0x00010952d0c4(&UNK_10f5a9f36,&UNK_10f5a9f44,&UNK_10f5a9f50);
        return;
      }
      uStack_98 = 1;
    }
    iVar8 = *(int *)(uVar11 + 0x60) * *(int *)(uVar11 + 0x58) * *(int *)(uVar11 + 100) *
            *(int *)(uVar11 + 0x5c);
    if (*(int *)(uVar7 + 0x1c) < iVar8) {
      func_0x000109311970(uVar7 + 0x18,*(undefined4 *)(uVar7 + 0x18),iVar8);
    }
    if (0 < iVar8) {
      iVar5 = 0;
      do {
        FUN_109ce5460(&uStack_54,iVar5,uVar11,auStack_a8);
        iVar6 = *(int *)(uVar7 + 0x18);
        *(int *)(uVar7 + 0x18) = iVar6 + 1;
        *(undefined4 *)(*(long *)(uVar7 + 0x20) + (long)iVar6 * 4) = uStack_54;
        iVar5 = iVar5 + 1;
      } while (iVar8 - iVar5 != 0);
    }
  }
  if (1 < *(int *)(param_3 + 0x28)) {
    *(undefined1 *)(uVar10 + 0xa1) = 1;
    if ((*puVar13 & 1) != 0) {
      puVar13 = (ulong *)(*puVar13 + 0xf);
    }
    uVar11 = *puVar13;
    *(uint *)(uVar10 + 0x10) = *(uint *)(uVar10 + 0x10) | 2;
    uVar7 = *(ulong *)(uVar10 + 0x80);
    if (uVar7 == 0) {
      uVar7 = *(ulong *)(uVar10 + 8);
      if ((uVar7 & 1) != 0) {
        uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
      }
      func_0x000109cba3bc();
      *(ulong *)(uVar10 + 0x80) = uVar7;
    }
    FUN_109ce5298(param_3);
    auStack_a8[0] = 1;
    ppuStack_a0 = (undefined **)0x0;
    uStack_98 = 7;
    FUN_109ce510c(uVar11,uVar7,param_3,auStack_a8,0);
  }
  return;
}



/* Entry: 109ce9c7c; end: 109ce9ccb;  */

void FUN_109ce9c7c(void)

{
  return;
}



/* Entry: 109ce9ccc; end: 109ce9e4b;  */

void FUN_109ce9ccc(long param_1,int param_2,ulong param_3)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = (ulong)*(uint *)(param_1 + 0x58);
    if ((int)*(uint *)(param_1 + 0x58) < 1) {
      puVar2 = &UNK_10f5a9e07;
      goto LAB_109ce9e44;
    }
  }
  if ((uVar1 >> 4 & 1) != 0) {
    if ((int)*(uint *)(param_1 + 100) < 1) {
      puVar2 = &UNK_10f5a9e17;
      goto LAB_109ce9e44;
    }
    uVar3 = uVar3 * *(uint *)(param_1 + 100);
  }
  if ((uVar1 >> 3 & 1) != 0) {
    if ((int)*(uint *)(param_1 + 0x60) < 1) {
      puVar2 = &UNK_10f5a9e29;
      goto LAB_109ce9e44;
    }
    uVar3 = uVar3 * *(uint *)(param_1 + 0x60);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    if ((int)*(uint *)(param_1 + 0x5c) < 1) {
      puVar2 = &UNK_10f5a9e3c;
      goto LAB_109ce9e44;
    }
    uVar3 = uVar3 * *(uint *)(param_1 + 0x5c);
  }
  uVar4 = uVar3;
  if (0 < (int)*(uint *)(param_1 + 0x28)) {
    lVar7 = (ulong)*(uint *)(param_1 + 0x28) << 2;
    uVar4 = 1;
    piVar6 = *(int **)(param_1 + 0x30);
    do {
      uVar4 = (long)*piVar6 * (long)(int)uVar4;
      lVar7 = lVar7 + -4;
      piVar6 = piVar6 + 1;
    } while (lVar7 != 0);
    if ((1 < uVar3) && (uVar3 != uVar4)) {
      puVar2 = &UNK_10f5a9e51;
      goto LAB_109ce9e44;
    }
  }
  if ((uVar1 & 1) == 0) {
    if (param_2 != 0x20) {
      uVar4 = uVar4 + 1 >> 1;
    }
    if (uVar4 == (long)*(int *)(param_1 + 0x18)) {
      return;
    }
    puVar2 = &UNK_10f5a9e81;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 0x50) & 0xfffffffffffffffc;
    uVar3 = (ulong)*(char *)(uVar5 + 0x17);
    if ((long)uVar3 < 0) {
      uVar3 = *(ulong *)(uVar5 + 8);
    }
    if (uVar3 == uVar4 * (param_3 & 0xffffffff) >> 3) {
      return;
    }
    puVar2 = &UNK_10f5a9e65;
  }
LAB_109ce9e44:
  func_0x00010952d0c4(&UNK_10f5a9dfa,&UNK_10f5a9dfa,puVar2);
  return;
}



/* Entry: 109ce9e4c; end: 109ce9e53;  */

void FUN_109ce9e4c(void)

{
  return;
}



/* Entry: 109ce9e54; end: 109cea5af;  */

void FUN_109ce9e54(undefined8 param_1,ulong param_2,long param_3,undefined8 param_4,int *param_5)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  code *pcVar4;
  ulong uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined *puVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  long unaff_x26;
  ulong *puVar13;
  long lVar14;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  bVar1 = *(byte *)(param_5 + 0x28);
  iVar12 = *(int *)(param_3 + 0x144);
  if (iVar12 < 0xc) {
    if (9 < iVar12) {
      if (iVar12 == 10) {
        if (3 < bVar1) {
          if (*(int *)(param_2 + 0x8c) == 0x33e) {
            return;
          }
          func_0x000109c819a4(param_2);
          *(undefined4 *)(param_2 + 0x8c) = 0x33e;
          uVar5 = *(ulong *)(param_2 + 8);
          if ((uVar5 & 1) != 0) {
            uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
          }
          func_0x000109cb8fcc();
          goto LAB_109cea07c;
        }
      }
      else {
        if (iVar12 != 0xb) goto LAB_109cea0a0;
        if (3 < bVar1) {
          if (*(int *)(param_2 + 0x8c) == 0x340) {
            return;
          }
          func_0x000109c819a4(param_2);
          *(undefined4 *)(param_2 + 0x8c) = 0x340;
          uVar5 = *(ulong *)(param_2 + 8);
          if ((uVar5 & 1) != 0) {
            uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
          }
          func_0x000109cb9014();
          goto LAB_109cea07c;
        }
      }
      goto LAB_109cea4b4;
    }
    if (iVar12 == 8) {
      if (3 < bVar1) {
        if (*(int *)(param_2 + 0x8c) == 0x334) {
          return;
        }
        func_0x000109c819a4(param_2);
        *(undefined4 *)(param_2 + 0x8c) = 0x334;
        uVar5 = *(ulong *)(param_2 + 8);
        if ((uVar5 & 1) != 0) {
          uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
        }
        func_0x000109cb87a8();
LAB_109cea07c:
        *(ulong *)(param_2 + 0x80) = uVar5;
        return;
      }
      goto LAB_109cea4b4;
    }
    if (iVar12 == 9) {
      if (3 < bVar1) {
        if (*(int *)(param_2 + 0x8c) == 0x348) {
          return;
        }
        func_0x000109c819a4(param_2);
        *(undefined4 *)(param_2 + 0x8c) = 0x348;
        uVar5 = *(ulong *)(param_2 + 8);
        if ((uVar5 & 1) != 0) {
          uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
        }
        func_0x000109cb8d2c();
        goto LAB_109cea07c;
      }
      goto LAB_109cea4b4;
    }
LAB_109cea0a0:
    uVar5 = *(ulong *)(param_2 + 0x28);
    puVar13 = (ulong *)(param_2 + 0x28);
    if ((uVar5 & 1) != 0) {
      puVar13 = (ulong *)(uVar5 + 7);
    }
    piVar6 = param_5;
    FUN_109cf8a0c(param_5,*puVar13);
    uVar5 = *(ulong *)(param_2 + 0x10);
    puVar13 = (ulong *)(param_2 + 0x10);
    if ((uVar5 & 1) != 0) {
      puVar13 = (ulong *)(uVar5 + 7);
    }
    if (*(int *)(param_2 + 0x18) == 0) {
      uVar11 = *(uint *)(param_3 + 0x144);
      if ((uVar11 & 0xfffffffe) == 2) {
        bVar3 = false;
        bVar2 = true;
        goto LAB_109cea1b4;
      }
      if (bVar1 < 2) goto LAB_109cea240;
      bVar3 = false;
LAB_109cea1d4:
      bVar2 = true;
LAB_109cea1f4:
      if ((int)uVar11 < 3) {
        if (uVar11 == 0) {
          if (bVar2) {
LAB_109cea320:
            func_0x000109cea65c();
            *(undefined4 *)(param_2 + 0x10) = 0x3f800000;
            return;
          }
          if (3 < bVar1) {
            if (*(int *)(param_2 + 0x8c) != 900) {
              func_0x000109c819a4();
              *(undefined4 *)(param_2 + 0x8c) = 900;
              uVar5 = *(ulong *)(param_2 + 8);
              if ((uVar5 & 1) != 0) {
                uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
              }
              func_0x000109cb8920();
              *(ulong *)(param_2 + 0x80) = uVar5;
            }
            return;
          }
        }
        else {
          if (uVar11 != 1) {
            if (uVar11 != 2) goto LAB_109cea52c;
            if (3 < bVar1) {
              if (*(int *)(param_2 + 0x8c) != 0x389) {
                func_0x000109c819a4();
                *(undefined4 *)(param_2 + 0x8c) = 0x389;
                uVar5 = *(ulong *)(param_2 + 8);
                if ((uVar5 & 1) != 0) {
                  uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
                }
                func_0x000109cb7518();
                *(ulong *)(param_2 + 0x80) = uVar5;
              }
              return;
            }
            if (!bVar3) {
              uVar8 = 2;
              goto LAB_109cea428;
            }
            goto LAB_109cea548;
          }
          if (bVar2) {
            func_0x000109cea5b0();
LAB_109cea380:
            *(undefined4 *)(param_2 + 0x10) = 0;
            return;
          }
          if (3 < bVar1) {
            if (*(int *)(param_2 + 0x8c) != 0x370) {
              func_0x000109c819a4();
              *(undefined4 *)(param_2 + 0x8c) = 0x370;
              uVar5 = *(ulong *)(param_2 + 8);
              if ((uVar5 & 1) != 0) {
                uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
              }
              func_0x000109cb9dd0();
              *(ulong *)(param_2 + 0x80) = uVar5;
            }
            return;
          }
        }
      }
      else {
        if (uVar11 == 3) {
          if (3 < bVar1) {
            if (*(int *)(param_2 + 0x8c) != 0x37a) {
              func_0x000109c819a4();
              *(undefined4 *)(param_2 + 0x8c) = 0x37a;
              uVar5 = *(ulong *)(param_2 + 8);
              if ((uVar5 & 1) != 0) {
                uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
              }
              func_0x000109cb9590();
              *(ulong *)(param_2 + 0x80) = uVar5;
            }
            return;
          }
          if (!bVar3) {
            uVar8 = 3;
LAB_109cea428:
            if (*(int *)(param_2 + 0x8c) == 500) {
              uVar5 = *(ulong *)(param_2 + 0x80);
            }
            else {
              func_0x000109c819a4(param_2);
              *(undefined4 *)(param_2 + 0x8c) = 500;
              uVar5 = *(ulong *)(param_2 + 8);
              if ((uVar5 & 1) != 0) {
                uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
              }
              func_0x000109cba8f4();
              *(ulong *)(param_2 + 0x80) = uVar5;
            }
            uVar10 = *(ulong *)(uVar5 + 8);
            if ((uVar10 & 1) != 0) {
              uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
            }
            func_0x00010b4bf088(uVar5 + 0x48,&DAT_10f5a8ad0,7,uVar10);
            uVar10 = *(ulong *)(uVar5 + 8);
            if ((uVar10 & 1) != 0) {
              uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
            }
            func_0x00010b4bf088(uVar5 + 0x50,&UNK_10f5aa02b,0x10,uVar10);
            FUN_109ceaa3c(&stack0xffffffffffffffb0,uVar5 + 0x28,&DAT_10f5a8ac9);
            if (*(int *)(unaff_x26 + 0x3c) != 0x1e) {
              if (*(int *)(unaff_x26 + 0x3c) == 0x14) {
                func_0x000107c30258(unaff_x26 + 0x30);
              }
              *(undefined4 *)(unaff_x26 + 0x3c) = 0x1e;
            }
            *(undefined4 *)(unaff_x26 + 0x30) = uVar8;
            return;
          }
LAB_109cea548:
          puVar9 = &UNK_10f5a9fc1;
          goto LAB_109cea4cc;
        }
        if (uVar11 == 4) {
          if (bVar2) {
LAB_109cea708:
            if (*(int *)(param_2 + 0x8c) != 0x104) {
              func_0x000109c819a4();
              *(undefined4 *)(param_2 + 0x8c) = 0x104;
              uVar5 = *(ulong *)(param_2 + 8);
              if ((uVar5 & 1) != 0) {
                uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
              }
              func_0x000109cb8ae0();
              *(ulong *)(param_2 + 0x80) = uVar5;
            }
            return;
          }
          if (3 < bVar1) {
            if (*(int *)(param_2 + 0x8c) != 0x36b) {
              func_0x000109c819a4();
              *(undefined4 *)(param_2 + 0x8c) = 0x36b;
              uVar5 = *(ulong *)(param_2 + 8);
              if ((uVar5 & 1) != 0) {
                uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
              }
              func_0x000109cb8b28();
              *(ulong *)(param_2 + 0x80) = uVar5;
            }
            return;
          }
        }
        else {
          if (uVar11 != 5) goto LAB_109cea52c;
          if (bVar2) {
LAB_109cea7a8:
            if (*(int *)(param_2 + 0x8c) != 0x105) {
              func_0x000109c819a4();
              *(undefined4 *)(param_2 + 0x8c) = 0x105;
              uVar5 = *(ulong *)(param_2 + 8);
              if ((uVar5 & 1) != 0) {
                uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
              }
              func_0x000109cb89b0();
              *(ulong *)(param_2 + 0x80) = uVar5;
            }
            return;
          }
          if (3 < bVar1) {
            if (*(int *)(param_2 + 0x8c) != 0x366) {
              func_0x000109c819a4();
              *(undefined4 *)(param_2 + 0x8c) = 0x366;
              uVar5 = *(ulong *)(param_2 + 8);
              if ((uVar5 & 1) != 0) {
                uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
              }
              func_0x000109cb89f8();
              *(ulong *)(param_2 + 0x80) = uVar5;
            }
            return;
          }
        }
      }
      goto LAB_109cea4b4;
    }
    bVar3 = false;
    lVar14 = (long)*(int *)(param_2 + 0x18) << 3;
    bVar2 = true;
    do {
      piVar7 = param_5;
      FUN_109cf8a0c(param_5,*puVar13);
      if (((*piVar7 == *piVar6) && (piVar7[1] == piVar6[1])) && (piVar7[2] == piVar6[2])) {
        iVar12 = piVar6[3];
        if (piVar7[3] != iVar12) goto LAB_109cea140;
      }
      else {
        iVar12 = piVar6[3];
LAB_109cea140:
        if ((iVar12 != 1) || ((*piVar7 == *piVar6) == (piVar7[1] != piVar6[1]))) {
          bVar2 = false;
        }
        bVar3 = true;
      }
      puVar13 = puVar13 + 1;
      lVar14 = lVar14 + -8;
    } while (lVar14 != 0);
    uVar11 = *(uint *)(param_3 + 0x144);
    if ((uVar11 & 0xfffffffe) == 2) {
LAB_109cea1b4:
      if ((3 < bVar1) || (bVar3)) goto LAB_109cea1e0;
      bVar3 = false;
LAB_109cea1ec:
      if (1 < bVar1) goto LAB_109cea1f4;
      if (bVar2) goto LAB_109cea240;
      puVar9 = &UNK_10f5aa004;
    }
    else {
      if (!bVar2) {
        bVar2 = false;
LAB_109cea1e0:
        if (*(int *)(param_2 + 0x18) != 2) goto LAB_109cea4d4;
        goto LAB_109cea1ec;
      }
      if (1 < bVar1) goto LAB_109cea1d4;
LAB_109cea240:
      if ((int)uVar11 < 4) {
        if (uVar11 == 0) goto LAB_109cea320;
        if (uVar11 == 1) {
          if (*(int *)(param_2 + 0x8c) == 0xe6) {
            param_2 = *(ulong *)(param_2 + 0x80);
          }
          else {
            func_0x000109c819a4(param_2);
            *(undefined4 *)(param_2 + 0x8c) = 0xe6;
            uVar5 = *(ulong *)(param_2 + 8);
            if ((uVar5 & 1) != 0) {
              uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
            }
            func_0x000109cb9d88();
            *(ulong *)(param_2 + 0x80) = uVar5;
            param_2 = uVar5;
          }
          goto LAB_109cea380;
        }
      }
      else {
        if (uVar11 == 4) goto LAB_109cea708;
        if (uVar11 == 5) goto LAB_109cea7a8;
      }
LAB_109cea52c:
      puVar9 = &UNK_10f5a9fee;
    }
  }
  else {
    if (iVar12 < 0xe) {
      if (iVar12 == 0xc) {
        if (3 < bVar1) {
          if (*(int *)(param_2 + 0x8c) == 0x339) {
            return;
          }
          func_0x000109c819a4(param_2);
          *(undefined4 *)(param_2 + 0x8c) = 0x339;
          uVar5 = *(ulong *)(param_2 + 8);
          if ((uVar5 & 1) != 0) {
            uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
          }
          func_0x000109cb8e60();
          goto LAB_109cea07c;
        }
      }
      else {
        if (iVar12 != 0xd) goto LAB_109cea0a0;
        if (3 < bVar1) {
          if (*(int *)(param_2 + 0x8c) == 0x33b) {
            return;
          }
          func_0x000109c819a4(param_2);
          *(undefined4 *)(param_2 + 0x8c) = 0x33b;
          uVar5 = *(ulong *)(param_2 + 8);
          if ((uVar5 & 1) != 0) {
            uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
          }
          func_0x000109cb8ea8();
          goto LAB_109cea07c;
        }
      }
    }
    else if (iVar12 == 0xe) {
      if (3 < bVar1) {
        if (*(int *)(param_2 + 0x8c) == 0x357) {
          return;
        }
        func_0x000109c819a4(param_2);
        *(undefined4 *)(param_2 + 0x8c) = 0x357;
        uVar5 = *(ulong *)(param_2 + 8);
        if ((uVar5 & 1) != 0) {
          uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
        }
        func_0x000109cb8dbc();
        goto LAB_109cea07c;
      }
    }
    else {
      if (iVar12 != 0xf) goto LAB_109cea0a0;
      if (3 < bVar1) {
        if (*(int *)(param_2 + 0x8c) == 0x34d) {
          return;
        }
        func_0x000109c819a4(param_2);
        *(undefined4 *)(param_2 + 0x8c) = 0x34d;
        uVar5 = *(ulong *)(param_2 + 8);
        if ((uVar5 & 1) != 0) {
          uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
        }
        func_0x000109cb8ce4();
        goto LAB_109cea07c;
      }
    }
LAB_109cea4b4:
    puVar9 = &UNK_10f5a9c9e;
  }
LAB_109cea4cc:
  func_0x00010952d0c4(&UNK_10e03ed1d,&UNK_10f5a9c71,puVar9);
LAB_109cea4d4:
  __ZNSt3__19to_stringEi(auStack_a8);
  func_0x00010928a5e0(auStack_90,&UNK_10f5a9f67,auStack_a8);
  func_0x000109259240(auStack_78,auStack_90,&DAT_10f62a9de);
  FUN_109cd8934(auStack_78);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109cea510);
  (*pcVar4)();
}



/* Entry: 109cea5b0; end: 109cea897;  */

void FUN_109cea5b0(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x8c) != 0xe6) {
    func_0x000109c819a4(param_1);
    *(undefined4 *)(param_1 + 0x8c) = 0xe6;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x000109cb9d88();
    *(ulong *)(param_1 + 0x80) = uVar1;
  }
  return;
}



/* Entry: 109cea898; end: 109cea99b;  */

void FUN_109cea898(long param_1,undefined4 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long alStack_50 [4];
  
  if (*(int *)(param_1 + 0x8c) == 500) {
    uVar2 = *(ulong *)(param_1 + 0x80);
  }
  else {
    func_0x000109c819a4(param_1);
    *(undefined4 *)(param_1 + 0x8c) = 500;
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000109cba8f4();
    *(ulong *)(param_1 + 0x80) = uVar2;
  }
  uVar1 = *(ulong *)(uVar2 + 8);
  if ((uVar1 & 1) != 0) {
    uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
  }
  func_0x00010b4bf088(uVar2 + 0x48,&DAT_10f5a8ad0,7,uVar1);
  uVar1 = *(ulong *)(uVar2 + 8);
  if ((uVar1 & 1) != 0) {
    uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
  }
  func_0x00010b4bf088(uVar2 + 0x50,&UNK_10f5aa02b,0x10,uVar1);
  FUN_109ceaa3c(alStack_50,uVar2 + 0x28,&DAT_10f5a8ac9);
  if (*(int *)(alStack_50[0] + 0x3c) != 0x1e) {
    if (*(int *)(alStack_50[0] + 0x3c) == 0x14) {
      func_0x000107c30258(alStack_50[0] + 0x30);
    }
    *(undefined4 *)(alStack_50[0] + 0x3c) = 0x1e;
  }
  *(undefined4 *)(alStack_50[0] + 0x30) = param_2;
  return;
}



/* Entry: 109cea99c; end: 109cea9eb;  */

void FUN_109cea99c(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x8c) != 0x37a) {
    func_0x000109c819a4();
    *(undefined4 *)(param_1 + 0x8c) = 0x37a;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x000109cb9590();
    *(ulong *)(param_1 + 0x80) = uVar1;
  }
  return;
}



/* Entry: 109cea9ec; end: 109ceaa3b;  */

void FUN_109cea9ec(void)

{
  return;
}



/* Entry: 109ceaa3c; end: 109ceab97;  */

void FUN_109ceaa3c(undefined8 *param_1,int *param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar4 = param_3;
  _strlen(param_3);
  piVar1 = param_2;
  uVar2 = param_3;
  func_0x000107c27d5c(param_2,param_3,uVar4,0);
  if (piVar1 == (int *)0x0) {
    piVar1 = param_2;
    func_0x000107c27d60(param_2,*param_2 + 1);
    if ((int)piVar1 != 0) {
      uVar4 = param_3;
      _strlen(param_3);
      uVar2 = param_3;
      func_0x000107c27d5c(param_2,param_3,uVar4,0);
    }
    piVar1 = param_2;
    func_0x000107c27d64(param_2,0x40);
    lVar5 = *(long *)(param_2 + 6);
    func_0x000107c31940(&uStack_58,param_3);
    *(undefined8 *)(piVar1 + 4) = uStack_50;
    *(undefined8 *)(piVar1 + 2) = uStack_58;
    *(long *)(piVar1 + 6) = lStack_48;
    uStack_58 = 0;
    uStack_50 = 0;
    lStack_48 = 0;
    if (lVar5 != 0) {
      func_0x00010b4d8014(lVar5,piVar1 + 2,&UNK_104c611dc);
      if (lStack_48 < 0) {
        __ZdlPv(uStack_58);
      }
    }
    uVar4 = *(undefined8 *)(param_2 + 6);
    *(undefined ***)(piVar1 + 8) = &PTR_DAT_110b33be0;
    *(undefined8 *)(piVar1 + 10) = uVar4;
    piVar1[0xe] = 0;
    piVar1[0xf] = 0;
    func_0x000107c27d68(param_2,uVar2,piVar1);
    *param_2 = *param_2 + 1;
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  *param_1 = piVar1;
  param_1[1] = param_2;
  *(int *)(param_1 + 2) = (int)uVar2;
  *(undefined1 *)(param_1 + 3) = uVar3;
  return;
}



/* Entry: 109ceab98; end: 109cead5f;  */

void FUN_109ceab98(undefined8 param_1,long param_2,long param_3,undefined8 param_4,int *param_5)

{
  ulong *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  int iVar8;
  undefined1 auStack_50 [28];
  undefined4 uStack_34;
  
  uVar4 = *(ulong *)(param_2 + 0x10);
  puVar1 = (ulong *)(param_2 + 0x10);
  if ((uVar4 & 1) != 0) {
    puVar1 = (ulong *)(uVar4 + 7);
  }
  FUN_109cf8a0c(param_5,*puVar1);
  if (*param_5 == 1 && param_5[2] == 1) {
    if (*(int *)(param_2 + 0x8c) == 0x96) {
      uVar4 = *(ulong *)(param_2 + 0x80);
    }
    else {
      func_0x000109c819a4(param_2);
      *(undefined4 *)(param_2 + 0x8c) = 0x96;
      uVar4 = *(ulong *)(param_2 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      func_0x000109cba8a4();
      *(ulong *)(param_2 + 0x80) = uVar4;
    }
    *(undefined1 *)(uVar4 + 0x38) = 0;
    iVar2 = *(int *)(param_3 + 0x118);
    *(long *)(uVar4 + 0x30) = (long)iVar2;
    puVar6 = (ulong *)(param_3 + 0x20);
    puVar1 = puVar6;
    if ((*puVar6 & 1) != 0) {
      puVar1 = (ulong *)(*puVar6 + 7);
    }
    uVar5 = *puVar1;
    iVar8 = 0;
    if (iVar2 != 0) {
      iVar8 = (*(int *)(uVar5 + 100) * *(int *)(uVar5 + 0x58) * *(int *)(uVar5 + 0x60) *
              *(int *)(uVar5 + 0x5c)) / iVar2;
    }
    *(long *)(uVar4 + 0x28) = (long)iVar8;
    if ((*puVar6 & 1) != 0) {
      puVar6 = (ulong *)(*puVar6 + 7);
    }
    uVar7 = *puVar6;
    *(uint *)(uVar4 + 0x10) = *(uint *)(uVar4 + 0x10) | 1;
    uVar5 = *(ulong *)(uVar4 + 0x18);
    if (uVar5 == 0) {
      uVar5 = *(ulong *)(uVar4 + 8);
      if ((uVar5 & 1) != 0) {
        uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
      }
      func_0x000109cba3bc();
      *(ulong *)(uVar4 + 0x18) = uVar5;
    }
    iVar2 = *(int *)(uVar7 + 0x60) * *(int *)(uVar7 + 0x58) * *(int *)(uVar7 + 100) *
            *(int *)(uVar7 + 0x5c);
    if (*(int *)(uVar5 + 0x1c) < iVar2) {
      func_0x000109311970(uVar5 + 0x18,*(undefined4 *)(uVar5 + 0x18),iVar2);
    }
    if (0 < iVar2) {
      iVar8 = 0;
      do {
        func_0x000109ce52ec(&uStack_34,iVar8,uVar7,auStack_50);
        iVar3 = *(int *)(uVar5 + 0x18);
        *(int *)(uVar5 + 0x18) = iVar3 + 1;
        *(undefined4 *)(*(long *)(uVar5 + 0x20) + (long)iVar3 * 4) = uStack_34;
        iVar8 = iVar8 + 1;
      } while (iVar2 - iVar8 != 0);
    }
    return;
  }
  func_0x00010952d0c4(&UNK_10e03ed89,&UNK_10f5a9c71,&UNK_10f5aa03c);
  return;
}



/* Entry: 109cead60; end: 109cead87;  */

void FUN_109cead60(void)

{
  return;
}



/* Entry: 109cead88; end: 109ceadf3;  */

void FUN_109cead88(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 in_w3;
  undefined1 auStack_40 [28];
  undefined4 uStack_24;
  
  puVar2 = &uStack_24;
  uStack_24 = in_w3;
  FUN_109ce555c(puVar2);
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_40,&UNK_10f5a9d91,puVar2);
  FUN_109cd45b4(&UNK_10e03ecb2,&UNK_10f5aa08b,auStack_40);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109ceadd8);
  (*pcVar1)();
}



/* Entry: 109ceadf4; end: 109ceae33;  */

void FUN_109ceadf4(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 in_w3;
  undefined1 auStack_60 [28];
  undefined4 uStack_44;
  
  FUN_109ceaea0(&UNK_10e03ecb2,&UNK_10f5aa09f);
  FUN_109ceaea0(&UNK_10e03ecb2,&UNK_10f5aa0d3);
  puVar2 = &uStack_44;
  uStack_44 = in_w3;
  FUN_109ce555c(puVar2);
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_60,&UNK_10f5a9d91,puVar2);
  FUN_109cd45b4(&UNK_10e03ecb2,&UNK_10f5aa0e9,auStack_60);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109ceae84);
  (*pcVar1)();
}



/* Entry: 109ceae34; end: 109ceae9f;  */

void FUN_109ceae34(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 in_w3;
  undefined1 auStack_40 [28];
  undefined4 uStack_24;
  
  puVar2 = &uStack_24;
  uStack_24 = in_w3;
  FUN_109ce555c(puVar2);
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_40,&UNK_10f5a9d91,puVar2);
  FUN_109cd45b4(&UNK_10e03ecb2,&UNK_10f5aa0e9,auStack_40);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109ceae84);
  (*pcVar1)();
}



/* Entry: 109ceaea0; end: 109ceaf6b;  */

void FUN_109ceaea0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  uVar2 = 0x10;
  ___cxa_allocate_exception(0x10);
  func_0x000107c31940(auStack_48,param_1);
  func_0x000107c31940(auStack_60,param_2);
  FUN_109ceaf70(uVar2,auStack_48,auStack_60);
  ___cxa_throw(uVar2,&PTR_DAT_110b3d3f8,FUN_109ceaf6c);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109ceaf14);
  (*pcVar1)();
}



/* Entry: 109ceaf6c; end: 109ceaf6f;  */

void FUN_109ceaf6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 109ceaf70; end: 109ceb007;  */

undefined8 * FUN_109ceaf70(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 auStack_48 [2];
  char cStack_31;
  
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_48,&UNK_10f5aa0b9,param_3);
  func_0x00010952d1c4(param_1,param_2,param_3,auStack_48);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  *param_1 = &PTR_FUN_110b3d420;
  return param_1;
}



/* Entry: 109ceb008; end: 109ceb01b;  */

void FUN_109ceb008(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109ceb01c; end: 109ceb113;  */

undefined1  [16] FUN_109ceb01c(long *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x18) == 2) {
    if (*(int *)(lVar2 + 0x1c) == (int)((ulong)*(undefined8 *)(lVar2 + 8) >> 0x20)) {
      auVar3._0_8_ = *(undefined8 *)(lVar2 + 0x10);
      auVar3._8_8_ = *(undefined8 *)(lVar2 + 8);
      return auVar3;
    }
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_50,&UNK_10f5aa0fc,*(ulong *)(param_2 + 0xf8) & 0xfffffffffffffffc);
    func_0x000109259240(auStack_38,auStack_50,&UNK_10f5aa13d);
    FUN_109cd8934(auStack_38);
  }
  else {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_50,&UNK_10f5aa0fc,*(ulong *)(param_2 + 0xf8) & 0xfffffffffffffffc);
    func_0x000109259240(auStack_38,auStack_50,&UNK_10f5aa122);
    FUN_109cd8934(auStack_38);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109ceb0d8);
  (*pcVar1)();
}



/* Entry: 109ceb114; end: 109ceb11b;  */

void FUN_109ceb114(void)

{
  return;
}



/* Entry: 109ceb11c; end: 109ceb413;  */

void FUN_109ceb11c(undefined8 param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if (*(byte *)(param_5 + 0xa0) < 2) {
    func_0x00010952d0c4(&UNK_10e03ee1a,&UNK_10f5a9c71,&UNK_10f5aa163);
  }
  else if (((*(byte *)(param_3 + 0x18) >> 1 & 1) != 0) && (*(int *)(param_3 + 0x1f8) == 1)) {
    if (((*(byte *)(param_3 + 0x12) >> 3 & 1) != 0) && (*(int *)(param_3 + 0x154) == 0)) {
      if (*(int *)(param_2 + 0x8c) == 500) {
        uVar5 = *(ulong *)(param_2 + 0x80);
      }
      else {
        func_0x000109c819a4(param_2);
        *(undefined4 *)(param_2 + 0x8c) = 500;
        uVar5 = *(ulong *)(param_2 + 8);
        if ((uVar5 & 1) != 0) {
          uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
        }
        func_0x000109cba8f4();
        *(ulong *)(param_2 + 0x80) = uVar5;
      }
      uVar3 = *(ulong *)(uVar5 + 8);
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      func_0x00010b4bf088(uVar5 + 0x48,&DAT_10f5a8ad8,10,uVar3);
      uVar3 = *(ulong *)(uVar5 + 8);
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      func_0x00010b4bf088(uVar5 + 0x50,&UNK_10f5aa1a9,0x14,uVar3);
      FUN_109ceaa3c(&lStack_50,uVar5 + 0x28,&DAT_10f577b9e);
      if (*(int *)(lStack_50 + 0x3c) != 0x14) {
        *(undefined4 *)(lStack_50 + 0x3c) = 0x14;
        *(undefined **)(lStack_50 + 0x30) = &DAT_11383d918;
      }
      uVar3 = *(ulong *)(lStack_50 + 0x28);
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      func_0x00010b4bf088(lStack_50 + 0x30,&UNK_10f5aa1be,8,uVar3);
      puVar2 = &DAT_10f2dba38;
      lVar1 = uVar5 + 0x28;
      func_0x000107c27d5c(lVar1,&DAT_10f2dba38,7,0);
      if (lVar1 == 0) {
        lVar1 = uVar5 + 0x28;
        func_0x000107c27d60(lVar1,*(int *)(uVar5 + 0x28) + 1);
        if ((int)lVar1 != 0) {
          puVar2 = &DAT_10f2dba38;
          func_0x000107c27d5c(uVar5 + 0x28,&DAT_10f2dba38,7,0);
        }
        lVar1 = uVar5 + 0x28;
        func_0x000107c27d64(lVar1,0x40);
        lVar6 = *(long *)(uVar5 + 0x40);
        func_0x000107c31940(&lStack_50,&DAT_10f2dba38);
        *(undefined8 *)(lVar1 + 0x10) = uStack_48;
        *(long *)(lVar1 + 8) = lStack_50;
        *(long *)(lVar1 + 0x18) = uStack_40;
        lStack_50 = 0;
        uStack_48 = 0;
        uStack_40 = 0;
        if ((lVar6 != 0) && (func_0x00010b4d8014(lVar6,lVar1 + 8,&UNK_104c611dc), uStack_40 < 0)) {
          __ZdlPv(lStack_50);
        }
        uVar4 = *(undefined8 *)(uVar5 + 0x40);
        *(undefined ***)(lVar1 + 0x20) = &PTR_DAT_110b33be0;
        *(undefined8 *)(lVar1 + 0x28) = uVar4;
        *(undefined8 *)(lVar1 + 0x38) = 0;
        func_0x000107c27d68(uVar5 + 0x28,puVar2,lVar1);
        *(int *)(uVar5 + 0x28) = *(int *)(uVar5 + 0x28) + 1;
      }
      if (*(int *)(lVar1 + 0x3c) != 0x14) {
        *(undefined4 *)(lVar1 + 0x3c) = 0x14;
        *(undefined **)(lVar1 + 0x30) = &DAT_11383d918;
      }
      uVar5 = *(ulong *)(lVar1 + 0x28);
      if ((uVar5 & 1) != 0) {
        uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
      }
      func_0x00010b4bf088(lVar1 + 0x30,&DAT_10f571fae,8,uVar5);
      return;
    }
    goto LAB_109ceb3dc;
  }
  func_0x00010952d0c4(&DAT_10f5a8ad8,&UNK_10f5aa1c7,&UNK_10f5aa1dc);
LAB_109ceb3dc:
  puVar2 = &DAT_10f5a8ad8;
  func_0x00010952d0c4(&DAT_10f5a8ad8,&UNK_10f5aa1c7,&UNK_10f5aa20d);
  if (uStack_40._7_1_ < '\0') {
    __ZdlPv(lStack_50);
  }
  __Unwind_Resume(puVar2);
  return;
}



/* Entry: 109ceb414; end: 109ceb437;  */

void FUN_109ceb414(void)

{
  return;
}



/* Entry: 109ceb438; end: 109ceb547;  */

undefined1  [16] FUN_109ceb438(int *param_1,long param_2)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  if (0 < *(int *)(param_2 + 0x28)) {
    uVar3 = *(ulong *)(param_2 + 0x20);
    puVar1 = (ulong *)(param_2 + 0x20);
    if ((uVar3 & 1) != 0) {
      puVar1 = (ulong *)(uVar3 + 7);
    }
    if ((0 < *(int *)(*puVar1 + 100)) &&
       (param_1[1] * param_1[2] * *param_1 != *(int *)(*puVar1 + 100))) {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_68,&UNK_10f5aa238,*(ulong *)(param_2 + 0xf8) & 0xfffffffffffffffc);
      func_0x000109259240(auStack_50,auStack_68,&UNK_10f5aa24d);
      func_0x000109259240(auStack_38,auStack_50,&UNK_10f5aa251);
      FUN_109cd8934(auStack_38);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x109ceb4fc);
      (*pcVar2)();
    }
  }
  auVar4._12_4_ = param_1[3];
  auVar4._8_4_ = *(undefined4 *)(param_2 + 0x118);
  auVar4._0_8_ = 0x100000001;
  return auVar4;
}



/* Entry: 109ceb548; end: 109ceb8d7;  */

void FUN_109ceb548(undefined8 param_1,long param_2,long param_3,int param_4,long param_5)

{
  ulong *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  ulong *puVar9;
  long lVar10;
  undefined4 auStack_70 [2];
  undefined **ppuStack_68;
  undefined4 uStack_60;
  undefined4 uStack_54;
  
  if (param_4 == 0x31) {
    if (3 < *(byte *)(param_5 + 0xa0)) {
      if (*(int *)(param_2 + 0x8c) == 0x415) {
        uVar4 = *(ulong *)(param_2 + 0x80);
      }
      else {
        func_0x000109c819a4(param_2);
        *(undefined4 *)(param_2 + 0x8c) = 0x415;
        uVar4 = *(ulong *)(param_2 + 8);
        if ((uVar4 & 1) != 0) {
          uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
        }
        func_0x000109cbaaf8();
        *(ulong *)(param_2 + 0x80) = uVar4;
      }
      *(undefined1 *)(uVar4 + 0x3a) = 0;
      *(undefined2 *)(uVar4 + 0x38) = 0;
      return;
    }
    puVar5 = &UNK_10f5aa2d8;
  }
  else {
    if (*(int *)(param_2 + 0x8c) == 0x8c) {
      uVar4 = *(ulong *)(param_2 + 0x80);
    }
    else {
      func_0x000109c819a4(param_2);
      *(undefined4 *)(param_2 + 0x8c) = 0x8c;
      uVar4 = *(ulong *)(param_2 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      func_0x000109cba804();
      *(ulong *)(param_2 + 0x80) = uVar4;
    }
    if (*(int *)(param_3 + 0x28) < 1) {
      func_0x00010952d0c4(&UNK_10f5aa2a9,&UNK_10f5aa2b6,&UNK_10f5aa2c4);
    }
    else {
      puVar9 = (ulong *)(param_3 + 0x20);
      puVar1 = puVar9;
      if ((*puVar9 & 1) != 0) {
        puVar1 = (ulong *)(*puVar9 + 7);
      }
      uVar6 = *puVar1;
      iVar2 = *(int *)(uVar6 + 0x60);
      if (iVar2 == *(int *)(param_3 + 0x118)) {
        *(long *)(uVar4 + 0x28) = (long)*(int *)(uVar6 + 100);
        *(long *)(uVar4 + 0x30) = (long)iVar2;
        if ((*(byte *)(param_3 + 0x1a4) & 1) == 0) {
          *(uint *)(uVar4 + 0x10) = *(uint *)(uVar4 + 0x10) | 1;
          uVar7 = *(ulong *)(uVar4 + 0x18);
          if (uVar7 == 0) {
            uVar7 = *(ulong *)(uVar4 + 8);
            if ((uVar7 & 1) != 0) {
              uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
            }
            func_0x000109cba3bc();
            *(ulong *)(uVar4 + 0x18) = uVar7;
          }
          iVar2 = *(int *)(uVar6 + 0x60) * *(int *)(uVar6 + 0x58) * *(int *)(uVar6 + 100) *
                  *(int *)(uVar6 + 0x5c);
          if (*(int *)(uVar7 + 0x1c) < iVar2) {
            func_0x000109311970(uVar7 + 0x18,*(undefined4 *)(uVar7 + 0x18),iVar2);
          }
          if (0 < iVar2) {
            iVar8 = 0;
            lVar10 = *(long *)(uVar7 + 0x20);
            do {
              FUN_109ce5394(&uStack_54,iVar8,uVar6,auStack_70);
              iVar3 = *(int *)(uVar7 + 0x18);
              *(int *)(uVar7 + 0x18) = iVar3 + 1;
              *(undefined4 *)(lVar10 + (long)iVar3 * 4) = uStack_54;
              iVar8 = iVar8 + 1;
            } while (iVar2 - iVar8 != 0);
          }
        }
        else {
          auStack_70[0] = *(undefined4 *)(param_3 + 0x194);
          ppuStack_68 = &PTR_PTR_1132ec9b0;
          if (*(undefined ***)(param_3 + 0x110) != (undefined **)0x0) {
            ppuStack_68 = *(undefined ***)(param_3 + 0x110);
          }
          uStack_60 = 7;
          *(uint *)(uVar4 + 0x10) = *(uint *)(uVar4 + 0x10) | 1;
          uVar7 = *(ulong *)(uVar4 + 0x18);
          if (uVar7 == 0) {
            uVar7 = *(ulong *)(uVar4 + 8);
            if ((uVar7 & 1) != 0) {
              uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
            }
            func_0x000109cba3bc();
            *(ulong *)(uVar4 + 0x18) = uVar7;
          }
          iVar2 = *(int *)(uVar6 + 0x60) * *(int *)(uVar6 + 0x58) * *(int *)(uVar6 + 100) *
                  *(int *)(uVar6 + 0x5c);
          if (*(int *)(uVar7 + 0x1c) < iVar2) {
            func_0x000109311970(uVar7 + 0x18,*(undefined4 *)(uVar7 + 0x18),iVar2);
          }
          if (0 < iVar2) {
            iVar8 = 0;
            do {
              FUN_109ce5460(&uStack_54,iVar8,uVar6,auStack_70);
              iVar3 = *(int *)(uVar7 + 0x18);
              *(int *)(uVar7 + 0x18) = iVar3 + 1;
              *(undefined4 *)(*(long *)(uVar7 + 0x20) + (long)iVar3 * 4) = uStack_54;
              iVar8 = iVar8 + 1;
            } while (iVar2 - iVar8 != 0);
          }
        }
        if (*(int *)(param_3 + 0x28) < 2) {
          return;
        }
        *(undefined1 *)(uVar4 + 0x38) = 1;
        if ((*puVar9 & 1) != 0) {
          puVar9 = (ulong *)(*puVar9 + 0xf);
        }
        uVar7 = *puVar9;
        *(uint *)(uVar4 + 0x10) = *(uint *)(uVar4 + 0x10) | 2;
        uVar6 = *(ulong *)(uVar4 + 0x20);
        if (uVar6 == 0) {
          uVar6 = *(ulong *)(uVar4 + 8);
          if ((uVar6 & 1) != 0) {
            uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
          }
          func_0x000109cba3bc();
          *(ulong *)(uVar4 + 0x20) = uVar6;
        }
        FUN_109ce5298(param_3);
        auStack_70[0] = 1;
        ppuStack_68 = (undefined **)0x0;
        uStack_60 = 7;
        FUN_109ce510c(uVar7,uVar6,param_3,auStack_70,0);
        return;
      }
    }
    puVar5 = &UNK_10f5aa31e;
  }
  func_0x00010952d0c4(&UNK_10e03ee8e,&UNK_10f5a9c71,puVar5);
  return;
}



/* Entry: 109ceb8d8; end: 109ceb93f;  */

void FUN_109ceb8d8(void)

{
  return;
}



/* Entry: 109ceb940; end: 109ceb99f;  */

undefined8 * FUN_109ceb940(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3d598;
  FUN_109cedc80(param_1 + 1);
  return param_1;
}



/* Entry: 109ceb9a0; end: 109cecc23;  */

/* WARNING: Removing unreachable block (ram,0x000109cec870) */
/* WARNING: Removing unreachable block (ram,0x000109cec004) */
/* WARNING: Removing unreachable block (ram,0x000109cebdd8) */
/* WARNING: Removing unreachable block (ram,0x000109cec710) */
/* WARNING: Removing unreachable block (ram,0x000109cec5b0) */
/* WARNING: Removing unreachable block (ram,0x000109cec920) */
/* WARNING: Removing unreachable block (ram,0x000109cec7c0) */
/* WARNING: Removing unreachable block (ram,0x000109cec450) */
/* WARNING: Removing unreachable block (ram,0x000109cebc44) */
/* WARNING: Removing unreachable block (ram,0x000109cec500) */
/* WARNING: Removing unreachable block (ram,0x000109cec270) */
/* WARNING: Removing unreachable block (ram,0x000109cec660) */
/* WARNING: Removing unreachable block (ram,0x000109cec9f0) */

void FUN_109ceb9a0(undefined8 *param_1,long param_2,undefined4 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 uStack_84;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  char cStack_59;
  long *plStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  char cStack_31;
  
  uStack_84 = param_3;
  switch(param_3) {
  case 1:
    param_2 = param_2 + 8;
    func_0x000107c31940(&uStack_48,&DAT_10e03f888);
    lVar8 = param_2;
    FUN_109cedda8(param_2,&uStack_48);
    if (lVar8 == 0) {
      plVar5 = (long *)0x20;
      __Znwm();
      plVar5[1] = 0;
      plVar5[2] = 0;
      *plVar5 = (long)&PTR_FUN_110b3d668;
      plStack_58 = plVar5 + 3;
      *plStack_58 = (long)&PTR_DAT_110b3dc78;
      if (cStack_31 < '\0') {
        plStack_80 = plStack_58;
        plStack_78 = plVar5;
        func_0x000107c3192c(&uStack_70,uStack_48,uStack_40);
      }
      else {
        uStack_68 = uStack_40;
        uStack_70 = uStack_48;
        cStack_59 = cStack_31;
      }
      plStack_80 = (long *)0x0;
      plStack_78 = (long *)0x0;
      plStack_50 = plVar5;
      FUN_109cede8c(param_2,&uStack_70,&uStack_70);
      plVar5 = plStack_50;
      lVar8 = *(long *)(param_2 + 0x30);
      uVar9 = *(undefined8 *)(param_2 + 0x28);
      param_1[1] = *(undefined8 *)(param_2 + 0x30);
      *param_1 = uVar9;
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
      if (plStack_50 != (long *)0x0) {
        plVar1 = plStack_50 + 1;
        do {
          lVar8 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_50 + 0x10))(plStack_50);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      if (cStack_59 < '\0') {
        __ZdlPv(uStack_70);
      }
      plVar5 = plStack_78;
      if (plStack_78 != (long *)0x0) {
        plVar1 = plStack_78 + 1;
        do {
          lVar8 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
    }
    else {
      lVar7 = *(long *)(lVar8 + 0x30);
      uVar9 = *(undefined8 *)(lVar8 + 0x28);
      param_1[1] = *(undefined8 *)(lVar8 + 0x30);
      *param_1 = uVar9;
      if (lVar7 != 0) {
        plVar5 = (long *)(lVar7 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    if (cStack_31 < '\0') {
      __ZdlPv(uStack_48);
    }
    return;
  case 2:
  case 3:
  case 4:
  case 5:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0x54:
  case 0x5a:
  case 0x5d:
    func_0x000107c31940(&uStack_48,&DAT_10e03ec11);
    lVar8 = param_2 + 8;
    FUN_109cedda8(lVar8,&uStack_48);
    if (lVar8 != 0) {
      lVar7 = *(long *)(lVar8 + 0x30);
      uVar9 = *(undefined8 *)(lVar8 + 0x28);
      param_1[1] = *(undefined8 *)(lVar8 + 0x30);
      *param_1 = uVar9;
      if (lVar7 == 0) {
        return;
      }
      plVar5 = (long *)(lVar7 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      return;
    }
    plVar5 = (long *)0x20;
    __Znwm();
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_FUN_110b3d618;
    plStack_58 = plVar5 + 3;
    *plStack_58 = (long)&PTR_FUN_110b3d0d8;
    uStack_68 = uStack_40;
    uStack_70 = uStack_48;
    cStack_59 = cStack_31;
    plStack_80 = (long *)0x0;
    plStack_78 = (long *)0x0;
    param_2 = param_2 + 8;
    plStack_50 = plVar5;
    FUN_109cede8c(param_2,&uStack_70,&uStack_70);
    plVar5 = plStack_50;
    lVar8 = *(long *)(param_2 + 0x30);
    uVar9 = *(undefined8 *)(param_2 + 0x28);
    param_1[1] = *(undefined8 *)(param_2 + 0x30);
    *param_1 = uVar9;
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
    if (plStack_50 != (long *)0x0) {
      plVar1 = plStack_50 + 1;
      do {
        lVar8 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (cStack_59 < '\0') {
      __ZdlPv(uStack_70);
    }
    if (plStack_78 == (long *)0x0) {
      return;
    }
    plVar5 = plStack_78 + 1;
    do {
      lVar8 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 6:
  case 0xf:
  case 0x18:
    func_0x000107c31940(&uStack_48,&DAT_10e03f7ce);
    lVar8 = param_2 + 8;
    FUN_109cedda8(lVar8,&uStack_48);
    if (lVar8 != 0) {
      lVar7 = *(long *)(lVar8 + 0x30);
      uVar9 = *(undefined8 *)(lVar8 + 0x28);
      param_1[1] = *(undefined8 *)(lVar8 + 0x30);
      *param_1 = uVar9;
      if (lVar7 == 0) {
        return;
      }
      plVar5 = (long *)(lVar7 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      return;
    }
    plVar5 = (long *)0x20;
    __Znwm();
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_FUN_110b3d7f8;
    plStack_58 = plVar5 + 3;
    *plStack_58 = (long)&PTR_DAT_110b3db40;
    uStack_68 = uStack_40;
    uStack_70 = uStack_48;
    cStack_59 = cStack_31;
    plStack_80 = (long *)0x0;
    plStack_78 = (long *)0x0;
    param_2 = param_2 + 8;
    plStack_50 = plVar5;
    FUN_109cede8c(param_2,&uStack_70,&uStack_70);
    plVar5 = plStack_50;
    lVar8 = *(long *)(param_2 + 0x30);
    uVar9 = *(undefined8 *)(param_2 + 0x28);
    param_1[1] = *(undefined8 *)(param_2 + 0x30);
    *param_1 = uVar9;
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
    if (plStack_50 != (long *)0x0) {
      plVar1 = plStack_50 + 1;
      do {
        lVar8 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (cStack_59 < '\0') {
      __ZdlPv(uStack_70);
    }
    if (plStack_78 == (long *)0x0) {
      return;
    }
    plVar5 = plStack_78 + 1;
    do {
      lVar8 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 0xd:
  case 0x13:
  case 0x15:
  case 0x16:
  case 0x28:
  case 0x2e:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x38:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x40:
  case 0x41:
  case 0x44:
  case 0x4b:
    func_0x000107c31940(&uStack_48,&DAT_10e03fb13);
    lVar8 = param_2 + 8;
    FUN_109cedda8(lVar8,&uStack_48);
    if (lVar8 != 0) {
      lVar7 = *(long *)(lVar8 + 0x30);
      uVar9 = *(undefined8 *)(lVar8 + 0x28);
      param_1[1] = *(undefined8 *)(lVar8 + 0x30);
      *param_1 = uVar9;
      if (lVar7 == 0) {
        return;
      }
      plVar5 = (long *)(lVar7 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      return;
    }
    plVar5 = (long *)0x20;
    __Znwm();
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_FUN_110b3d708;
    plStack_58 = plVar5 + 3;
    *plStack_58 = (long)&PTR_DAT_110b3e080;
    uStack_68 = uStack_40;
    uStack_70 = uStack_48;
    cStack_59 = cStack_31;
    plStack_80 = (long *)0x0;
    plStack_78 = (long *)0x0;
    param_2 = param_2 + 8;
    plStack_50 = plVar5;
    FUN_109cede8c(param_2,&uStack_70,&uStack_70);
    plVar5 = plStack_50;
    lVar8 = *(long *)(param_2 + 0x30);
    uVar9 = *(undefined8 *)(param_2 + 0x28);
    param_1[1] = *(undefined8 *)(param_2 + 0x30);
    *param_1 = uVar9;
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
    if (plStack_50 != (long *)0x0) {
      plVar1 = plStack_50 + 1;
      do {
        lVar8 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (cStack_59 < '\0') {
      __ZdlPv(uStack_70);
    }
    if (plStack_78 == (long *)0x0) {
      return;
    }
    plVar5 = plStack_78 + 1;
    do {
      lVar8 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 0xe:
  case 0x31:
  case 0x3a:
  case 0x3f:
  case 0x47:
  case 0x48:
    func_0x000107c31940(&uStack_48,&DAT_10e03eecb);
    lVar8 = param_2 + 8;
    FUN_109cedda8(lVar8,&uStack_48);
    if (lVar8 != 0) {
      lVar7 = *(long *)(lVar8 + 0x30);
      uVar9 = *(undefined8 *)(lVar8 + 0x28);
      param_1[1] = *(undefined8 *)(lVar8 + 0x30);
      *param_1 = uVar9;
      if (lVar7 == 0) {
        return;
      }
      plVar5 = (long *)(lVar7 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      return;
    }
    plVar5 = (long *)0x20;
    __Znwm();
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_FUN_110b3d7a8;
    plStack_58 = plVar5 + 3;
    *plStack_58 = (long)&PTR_DAT_110b3d508;
    uStack_68 = uStack_40;
    uStack_70 = uStack_48;
    cStack_59 = cStack_31;
    plStack_80 = (long *)0x0;
    plStack_78 = (long *)0x0;
    param_2 = param_2 + 8;
    plStack_50 = plVar5;
    FUN_109cede8c(param_2,&uStack_70,&uStack_70);
    plVar5 = plStack_50;
    lVar8 = *(long *)(param_2 + 0x30);
    uVar9 = *(undefined8 *)(param_2 + 0x28);
    param_1[1] = *(undefined8 *)(param_2 + 0x30);
    *param_1 = uVar9;
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
    if (plStack_50 != (long *)0x0) {
      plVar1 = plStack_50 + 1;
      do {
        lVar8 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (cStack_59 < '\0') {
      __ZdlPv(uStack_70);
    }
    if (plStack_78 == (long *)0x0) {
      return;
    }
    plVar5 = plStack_78 + 1;
    do {
      lVar8 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 0x10:
  case 0x3b:
    func_0x000107c31940(&uStack_48,&DAT_10e03ed54);
    lVar8 = param_2 + 8;
    FUN_109cedda8(lVar8,&uStack_48);
    if (lVar8 != 0) {
      lVar7 = *(long *)(lVar8 + 0x30);
      uVar9 = *(undefined8 *)(lVar8 + 0x28);
      param_1[1] = *(undefined8 *)(lVar8 + 0x30);
      *param_1 = uVar9;
      if (lVar7 == 0) {
        return;
      }
      plVar5 = (long *)(lVar7 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      return;
    }
    plVar5 = (long *)0x20;
    __Znwm();
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_FUN_110b3d6b8;
    plStack_58 = plVar5 + 3;
    *plStack_58 = (long)&PTR_FUN_110b3d2d0;
    uStack_68 = uStack_40;
    uStack_70 = uStack_48;
    cStack_59 = cStack_31;
    plStack_80 = (long *)0x0;
    plStack_78 = (long *)0x0;
    param_2 = param_2 + 8;
    plStack_50 = plVar5;
    FUN_109cede8c(param_2,&uStack_70,&uStack_70);
    plVar5 = plStack_50;
    lVar8 = *(long *)(param_2 + 0x30);
    uVar9 = *(undefined8 *)(param_2 + 0x28);
    param_1[1] = *(undefined8 *)(param_2 + 0x30);
    *param_1 = uVar9;
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
    if (plStack_50 != (long *)0x0) {
      plVar1 = plStack_50 + 1;
      do {
        lVar8 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (cStack_59 < '\0') {
      __ZdlPv(uStack_70);
    }
    if (plStack_78 == (long *)0x0) {
      return;
    }
    plVar5 = plStack_78 + 1;
    do {
      lVar8 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 0x11:
  case 0x12:
  case 0x17:
    func_0x000107c31940(&uStack_48,&DAT_10e03eceb);
    lVar8 = param_2 + 8;
    FUN_109cedda8(lVar8,&uStack_48);
    if (lVar8 != 0) {
      lVar7 = *(long *)(lVar8 + 0x30);
      uVar9 = *(undefined8 *)(lVar8 + 0x28);
      param_1[1] = *(undefined8 *)(lVar8 + 0x30);
      *param_1 = uVar9;
      if (lVar7 == 0) {
        return;
      }
      plVar5 = (long *)(lVar7 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      return;
    }
    plVar5 = (long *)0x20;
    __Znwm();
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_FUN_110b3d5c8;
    plStack_58 = plVar5 + 3;
    *plStack_58 = (long)&PTR_FUN_110b3d228;
    uStack_68 = uStack_40;
    uStack_70 = uStack_48;
    cStack_59 = cStack_31;
    plStack_80 = (long *)0x0;
    plStack_78 = (long *)0x0;
    param_2 = param_2 + 8;
    plStack_50 = plVar5;
    FUN_109cede8c(param_2,&uStack_70,&uStack_70);
    plVar5 = plStack_50;
    lVar8 = *(long *)(param_2 + 0x30);
    uVar9 = *(undefined8 *)(param_2 + 0x28);
    param_1[1] = *(undefined8 *)(param_2 + 0x30);
    *param_1 = uVar9;
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
    if (plStack_50 != (long *)0x0) {
      plVar1 = plStack_50 + 1;
      do {
        lVar8 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (cStack_59 < '\0') {
      __ZdlPv(uStack_70);
    }
    if (plStack_78 == (long *)0x0) {
      return;
    }
    plVar5 = plStack_78 + 1;
    do {
      lVar8 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 0x14:
  case 0x37:
  case 0x45:
    func_0x000107c31940(&uStack_48,&DAT_10e03ec7f);
    lVar8 = param_2 + 8;
    FUN_109cedda8(lVar8,&uStack_48);
    if (lVar8 != 0) {
      lVar7 = *(long *)(lVar8 + 0x30);
      uVar9 = *(undefined8 *)(lVar8 + 0x28);
      param_1[1] = *(undefined8 *)(lVar8 + 0x30);
      *param_1 = uVar9;
      if (lVar7 == 0) {
        return;
      }
      plVar5 = (long *)(lVar7 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      return;
    }
    plVar5 = (long *)0x20;
    __Znwm();
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_FUN_110b3d758;
    plStack_58 = plVar5 + 3;
    *plStack_58 = (long)&PTR_DAT_110b3d180;
    uStack_68 = uStack_40;
    uStack_70 = uStack_48;
    cStack_59 = cStack_31;
    plStack_80 = (long *)0x0;
    plStack_78 = (long *)0x0;
    param_2 = param_2 + 8;
    plStack_50 = plVar5;
    FUN_109cede8c(param_2,&uStack_70,&uStack_70);
    plVar5 = plStack_50;
    lVar8 = *(long *)(param_2 + 0x30);
    uVar9 = *(undefined8 *)(param_2 + 0x28);
    param_1[1] = *(undefined8 *)(param_2 + 0x30);
    *param_1 = uVar9;
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
    if (plStack_50 != (long *)0x0) {
      plVar1 = plStack_50 + 1;
      do {
        lVar8 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (cStack_59 < '\0') {
      __ZdlPv(uStack_70);
    }
    if (plStack_78 == (long *)0x0) {
      return;
    }
    plVar5 = plStack_78 + 1;
    do {
      lVar8 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  default:
    puVar6 = &uStack_84;
    FUN_109ce555c(puVar6);
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (&uStack_70,&UNK_10f5aa36d,puVar6);
    FUN_109cd45b4(&UNK_10e03efc0,&UNK_10f5a928b,&uStack_70);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x109ceca48);
    (*pcVar4)();
  case 0x1a:
    param_2 = param_2 + 8;
    func_0x000107c31940(&uStack_48,&DAT_10e03fa66);
    lVar8 = param_2;
    FUN_109cedda8(param_2,&uStack_48);
    if (lVar8 == 0) {
      plVar5 = (long *)0x20;
      __Znwm();
      plVar5[1] = 0;
      plVar5[2] = 0;
      *plVar5 = (long)&PTR_FUN_110b3d848;
      plStack_58 = plVar5 + 3;
      *plStack_58 = (long)&PTR_DAT_110b3df30;
      if (cStack_31 < '\0') {
        plStack_80 = plStack_58;
        plStack_78 = plVar5;
        func_0x000107c3192c(&uStack_70,uStack_48,uStack_40);
      }
      else {
        uStack_68 = uStack_40;
        uStack_70 = uStack_48;
        cStack_59 = cStack_31;
      }
      plStack_80 = (long *)0x0;
      plStack_78 = (long *)0x0;
      plStack_50 = plVar5;
      FUN_109cede8c(param_2,&uStack_70,&uStack_70);
      plVar5 = plStack_50;
      lVar8 = *(long *)(param_2 + 0x30);
      uVar9 = *(undefined8 *)(param_2 + 0x28);
      param_1[1] = *(undefined8 *)(param_2 + 0x30);
      *param_1 = uVar9;
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
      if (plStack_50 != (long *)0x0) {
        plVar1 = plStack_50 + 1;
        do {
          lVar8 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_50 + 0x10))(plStack_50);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      if (cStack_59 < '\0') {
        __ZdlPv(uStack_70);
      }
      plVar5 = plStack_78;
      if (plStack_78 != (long *)0x0) {
        plVar1 = plStack_78 + 1;
        do {
          lVar8 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
    }
    else {
      lVar7 = *(long *)(lVar8 + 0x30);
      uVar9 = *(undefined8 *)(lVar8 + 0x28);
      param_1[1] = *(undefined8 *)(lVar8 + 0x30);
      *param_1 = uVar9;
      if (lVar7 != 0) {
        plVar5 = (long *)(lVar7 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    if (cStack_31 < '\0') {
      __ZdlPv(uStack_48);
    }
    return;
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x2c:
  case 0x2d:
  case 0x42:
  case 0x46:
  case 0x49:
  case 0x4a:
  case 0x4c:
  case 0x4d:
  case 0x50:
  case 0x52:
  case 0x53:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
    func_0x000107c31940(&uStack_48,&DAT_10e03fb9b);
    lVar8 = param_2 + 8;
    FUN_109cedda8(lVar8,&uStack_48);
    if (lVar8 != 0) {
      lVar7 = *(long *)(lVar8 + 0x30);
      uVar9 = *(undefined8 *)(lVar8 + 0x28);
      param_1[1] = *(undefined8 *)(lVar8 + 0x30);
      *param_1 = uVar9;
      if (lVar7 == 0) {
        return;
      }
      plVar5 = (long *)(lVar7 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      return;
    }
    plVar5 = (long *)0x20;
    __Znwm();
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_FUN_110b3d8e8;
    plStack_58 = plVar5 + 3;
    *plStack_58 = (long)&PTR_DAT_110b3e128;
    uStack_68 = uStack_40;
    uStack_70 = uStack_48;
    cStack_59 = cStack_31;
    plStack_80 = (long *)0x0;
    plStack_78 = (long *)0x0;
    param_2 = param_2 + 8;
    plStack_50 = plVar5;
    FUN_109cede8c(param_2,&uStack_70,&uStack_70);
    plVar5 = plStack_50;
    lVar8 = *(long *)(param_2 + 0x30);
    uVar9 = *(undefined8 *)(param_2 + 0x28);
    param_1[1] = *(undefined8 *)(param_2 + 0x30);
    *param_1 = uVar9;
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
    if (plStack_50 != (long *)0x0) {
      plVar1 = plStack_50 + 1;
      do {
        lVar8 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (cStack_59 < '\0') {
      __ZdlPv(uStack_70);
    }
    if (plStack_78 == (long *)0x0) {
      return;
    }
    plVar5 = plStack_78 + 1;
    do {
      lVar8 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 0x23:
  case 0x43:
    func_0x000107c31940(&uStack_48,&DAT_10e03f83d);
    lVar8 = param_2 + 8;
    FUN_109cedda8(lVar8,&uStack_48);
    if (lVar8 != 0) {
      lVar7 = *(long *)(lVar8 + 0x30);
      uVar9 = *(undefined8 *)(lVar8 + 0x28);
      param_1[1] = *(undefined8 *)(lVar8 + 0x30);
      *param_1 = uVar9;
      if (lVar7 == 0) {
        return;
      }
      plVar5 = (long *)(lVar7 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      return;
    }
    plVar5 = (long *)0x20;
    __Znwm();
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_FUN_110b3d898;
    plStack_58 = plVar5 + 3;
    *plStack_58 = (long)&PTR_DAT_110b3dbe8;
    uStack_68 = uStack_40;
    uStack_70 = uStack_48;
    cStack_59 = cStack_31;
    plStack_80 = (long *)0x0;
    plStack_78 = (long *)0x0;
    param_2 = param_2 + 8;
    plStack_50 = plVar5;
    FUN_109cede8c(param_2,&uStack_70,&uStack_70);
    plVar5 = plStack_50;
    lVar8 = *(long *)(param_2 + 0x30);
    uVar9 = *(undefined8 *)(param_2 + 0x28);
    param_1[1] = *(undefined8 *)(param_2 + 0x30);
    *param_1 = uVar9;
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
    if (plStack_50 != (long *)0x0) {
      plVar1 = plStack_50 + 1;
      do {
        lVar8 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (cStack_59 < '\0') {
      __ZdlPv(uStack_70);
    }
    if (plStack_78 == (long *)0x0) {
      return;
    }
    plVar5 = plStack_78 + 1;
    do {
      lVar8 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 0x24:
  case 0x2a:
  case 0x2b:
  case 0x39:
    func_0x000107c31940(&uStack_48,&DAT_10e03f99e);
    lVar8 = param_2 + 8;
    FUN_109cedda8(lVar8,&uStack_48);
    if (lVar8 != 0) {
      lVar7 = *(long *)(lVar8 + 0x30);
      uVar9 = *(undefined8 *)(lVar8 + 0x28);
      param_1[1] = *(undefined8 *)(lVar8 + 0x30);
      *param_1 = uVar9;
      if (lVar7 == 0) {
        return;
      }
      plVar5 = (long *)(lVar7 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      return;
    }
    plVar5 = (long *)0x20;
    __Znwm();
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_FUN_110b3d938;
    plStack_58 = plVar5 + 3;
    *plStack_58 = (long)&PTR_DAT_110b3de88;
    uStack_68 = uStack_40;
    uStack_70 = uStack_48;
    cStack_59 = cStack_31;
    plStack_80 = (long *)0x0;
    plStack_78 = (long *)0x0;
    param_2 = param_2 + 8;
    plStack_50 = plVar5;
    FUN_109cede8c(param_2,&uStack_70,&uStack_70);
    plVar5 = plStack_50;
    lVar8 = *(long *)(param_2 + 0x30);
    uVar9 = *(undefined8 *)(param_2 + 0x28);
    param_1[1] = *(undefined8 *)(param_2 + 0x30);
    *param_1 = uVar9;
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
    if (plStack_50 != (long *)0x0) {
      plVar1 = plStack_50 + 1;
      do {
        lVar8 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (cStack_59 < '\0') {
      __ZdlPv(uStack_70);
    }
    if (plStack_78 == (long *)0x0) {
      return;
    }
    plVar5 = plStack_78 + 1;
    do {
      lVar8 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 0x25:
  case 0x26:
    func_0x000107c31940(&uStack_48,&DAT_10e03f8ba);
    lVar8 = param_2 + 8;
    FUN_109cedda8(lVar8,&uStack_48);
    if (lVar8 != 0) {
      lVar7 = *(long *)(lVar8 + 0x30);
      uVar9 = *(undefined8 *)(lVar8 + 0x28);
      param_1[1] = *(undefined8 *)(lVar8 + 0x30);
      *param_1 = uVar9;
      if (lVar7 == 0) {
        return;
      }
      plVar5 = (long *)(lVar7 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      return;
    }
    plVar5 = (long *)0x20;
    __Znwm();
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_FUN_110b3d988;
    plStack_58 = plVar5 + 3;
    *plStack_58 = (long)&PTR_FUN_110b3dd20;
    uStack_68 = uStack_40;
    uStack_70 = uStack_48;
    cStack_59 = cStack_31;
    plStack_80 = (long *)0x0;
    plStack_78 = (long *)0x0;
    param_2 = param_2 + 8;
    plStack_50 = plVar5;
    FUN_109cede8c(param_2,&uStack_70,&uStack_70);
    plVar5 = plStack_50;
    lVar8 = *(long *)(param_2 + 0x30);
    uVar9 = *(undefined8 *)(param_2 + 0x28);
    param_1[1] = *(undefined8 *)(param_2 + 0x30);
    *param_1 = uVar9;
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
    if (plStack_50 != (long *)0x0) {
      plVar1 = plStack_50 + 1;
      do {
        lVar8 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (cStack_59 < '\0') {
      __ZdlPv(uStack_70);
    }
    if (plStack_78 == (long *)0x0) {
      return;
    }
    plVar5 = plStack_78 + 1;
    do {
      lVar8 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 0x29:
    param_2 = param_2 + 8;
    func_0x000107c31940(&uStack_48,&DAT_10e03ee55);
    lVar8 = param_2;
    FUN_109cedda8(param_2,&uStack_48);
    if (lVar8 == 0) {
      plVar5 = (long *)0x20;
      __Znwm();
      plVar5[1] = 0;
      plVar5[2] = 0;
      *plVar5 = (long)&PTR_FUN_110b3d9d8;
      plStack_58 = plVar5 + 3;
      *plStack_58 = (long)&PTR_FUN_110b3d460;
      if (cStack_31 < '\0') {
        plStack_80 = plStack_58;
        plStack_78 = plVar5;
        func_0x000107c3192c(&uStack_70,uStack_48,uStack_40);
      }
      else {
        uStack_68 = uStack_40;
        uStack_70 = uStack_48;
        cStack_59 = cStack_31;
      }
      plStack_80 = (long *)0x0;
      plStack_78 = (long *)0x0;
      plStack_50 = plVar5;
      FUN_109cede8c(param_2,&uStack_70,&uStack_70);
      plVar5 = plStack_50;
      lVar8 = *(long *)(param_2 + 0x30);
      uVar9 = *(undefined8 *)(param_2 + 0x28);
      param_1[1] = *(undefined8 *)(param_2 + 0x30);
      *param_1 = uVar9;
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
      if (plStack_50 != (long *)0x0) {
        plVar1 = plStack_50 + 1;
        do {
          lVar8 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_50 + 0x10))(plStack_50);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      if (cStack_59 < '\0') {
        __ZdlPv(uStack_70);
      }
      plVar5 = plStack_78;
      if (plStack_78 != (long *)0x0) {
        plVar1 = plStack_78 + 1;
        do {
          lVar8 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
    }
    else {
      lVar7 = *(long *)(lVar8 + 0x30);
      uVar9 = *(undefined8 *)(lVar8 + 0x28);
      param_1[1] = *(undefined8 *)(lVar8 + 0x30);
      *param_1 = uVar9;
      if (lVar7 != 0) {
        plVar5 = (long *)(lVar7 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    if (cStack_31 < '\0') {
      __ZdlPv(uStack_48);
    }
    return;
  case 0x2f:
  case 0x32:
    func_0x000107c31940(&uStack_48,&DAT_10e03f92e);
    lVar8 = param_2 + 8;
    FUN_109cedda8(lVar8,&uStack_48);
    if (lVar8 != 0) {
      lVar7 = *(long *)(lVar8 + 0x30);
      uVar9 = *(undefined8 *)(lVar8 + 0x28);
      param_1[1] = *(undefined8 *)(lVar8 + 0x30);
      *param_1 = uVar9;
      if (lVar7 == 0) {
        return;
      }
      plVar5 = (long *)(lVar7 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      return;
    }
    plVar5 = (long *)0x20;
    __Znwm();
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_FUN_110b3da28;
    plStack_58 = plVar5 + 3;
    *plStack_58 = (long)&PTR_DAT_110b3dde0;
    uStack_68 = uStack_40;
    uStack_70 = uStack_48;
    cStack_59 = cStack_31;
    plStack_80 = (long *)0x0;
    plStack_78 = (long *)0x0;
    param_2 = param_2 + 8;
    plStack_50 = plVar5;
    FUN_109cede8c(param_2,&uStack_70,&uStack_70);
    plVar5 = plStack_50;
    lVar8 = *(long *)(param_2 + 0x30);
    uVar9 = *(undefined8 *)(param_2 + 0x28);
    param_1[1] = *(undefined8 *)(param_2 + 0x30);
    *param_1 = uVar9;
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
    if (plStack_50 != (long *)0x0) {
      plVar1 = plStack_50 + 1;
      do {
        lVar8 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (cStack_59 < '\0') {
      __ZdlPv(uStack_70);
    }
    if (plStack_78 == (long *)0x0) {
      return;
    }
    plVar5 = plStack_78 + 1;
    do {
      lVar8 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 0x30:
    param_2 = param_2 + 8;
    func_0x000107c31940(&uStack_48,&DAT_10e03edc2);
    lVar8 = param_2;
    FUN_109cedda8(param_2,&uStack_48);
    if (lVar8 == 0) {
      plVar5 = (long *)0x20;
      __Znwm();
      plVar5[1] = 0;
      plVar5[2] = 0;
      *plVar5 = (long)&PTR_FUN_110b3da78;
      plStack_58 = plVar5 + 3;
      *plStack_58 = (long)&PTR_DAT_110b3d378;
      if (cStack_31 < '\0') {
        plStack_80 = plStack_58;
        plStack_78 = plVar5;
        func_0x000107c3192c(&uStack_70,uStack_48,uStack_40);
      }
      else {
        uStack_68 = uStack_40;
        uStack_70 = uStack_48;
        cStack_59 = cStack_31;
      }
      plStack_80 = (long *)0x0;
      plStack_78 = (long *)0x0;
      plStack_50 = plVar5;
      FUN_109cede8c(param_2,&uStack_70,&uStack_70);
      plVar5 = plStack_50;
      lVar8 = *(long *)(param_2 + 0x30);
      uVar9 = *(undefined8 *)(param_2 + 0x28);
      param_1[1] = *(undefined8 *)(param_2 + 0x30);
      *param_1 = uVar9;
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
      if (plStack_50 != (long *)0x0) {
        plVar1 = plStack_50 + 1;
        do {
          lVar8 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_50 + 0x10))(plStack_50);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      if (cStack_59 < '\0') {
        __ZdlPv(uStack_70);
      }
      plVar5 = plStack_78;
      if (plStack_78 != (long *)0x0) {
        plVar1 = plStack_78 + 1;
        do {
          lVar8 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
    }
    else {
      lVar7 = *(long *)(lVar8 + 0x30);
      uVar9 = *(undefined8 *)(lVar8 + 0x28);
      param_1[1] = *(undefined8 *)(lVar8 + 0x30);
      *param_1 = uVar9;
      if (lVar7 != 0) {
        plVar5 = (long *)(lVar7 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    if (cStack_31 < '\0') {
      __ZdlPv(uStack_48);
    }
    return;
  case 0x51:
    param_2 = param_2 + 8;
    func_0x000107c31940(&uStack_48,&DAT_10e03fa9a);
    lVar8 = param_2;
    FUN_109cedda8(param_2,&uStack_48);
    if (lVar8 == 0) {
      plVar5 = (long *)0x20;
      __Znwm();
      plVar5[1] = 0;
      plVar5[2] = 0;
      *plVar5 = (long)&PTR_FUN_110b3dac8;
      plStack_58 = plVar5 + 3;
      *plStack_58 = (long)&PTR_DAT_110b3dfc0;
      if (cStack_31 < '\0') {
        plStack_80 = plStack_58;
        plStack_78 = plVar5;
        func_0x000107c3192c(&uStack_70,uStack_48,uStack_40);
      }
      else {
        uStack_68 = uStack_40;
        uStack_70 = uStack_48;
        cStack_59 = cStack_31;
      }
      plStack_80 = (long *)0x0;
      plStack_78 = (long *)0x0;
      plStack_50 = plVar5;
      FUN_109cede8c(param_2,&uStack_70,&uStack_70);
      plVar5 = plStack_50;
      lVar8 = *(long *)(param_2 + 0x30);
      uVar9 = *(undefined8 *)(param_2 + 0x28);
      param_1[1] = *(undefined8 *)(param_2 + 0x30);
      *param_1 = uVar9;
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
      if (plStack_50 != (long *)0x0) {
        plVar1 = plStack_50 + 1;
        do {
          lVar8 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_50 + 0x10))(plStack_50);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      if (cStack_59 < '\0') {
        __ZdlPv(uStack_70);
      }
      plVar5 = plStack_78;
      if (plStack_78 != (long *)0x0) {
        plVar1 = plStack_78 + 1;
        do {
          lVar8 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
    }
    else {
      lVar7 = *(long *)(lVar8 + 0x30);
      uVar9 = *(undefined8 *)(lVar8 + 0x28);
      param_1[1] = *(undefined8 *)(lVar8 + 0x30);
      *param_1 = uVar9;
      if (lVar7 != 0) {
        plVar5 = (long *)(lVar7 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    if (cStack_31 < '\0') {
      __ZdlPv(uStack_48);
    }
    return;
  }
  plVar5 = plStack_78;
  if (lVar8 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
  return;
}



/* Entry: 109cecc24; end: 109cecdff;  */

/* WARNING: Removing unreachable block (ram,0x000109cecd70) */
/* WARNING: Removing unreachable block (ram,0x000109cecd74) */
/* WARNING: Removing unreachable block (ram,0x000109cecd7c) */
/* WARNING: Removing unreachable block (ram,0x000109cecd84) */
/* WARNING: Removing unreachable block (ram,0x000109cecd88) */

void FUN_109cecc24(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  char cStack_59;
  long *plStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  char cStack_31;
  
  func_0x000107c31940(&uStack_48,&DAT_10e03f888);
  lVar6 = param_2;
  FUN_109cedda8(param_2,&uStack_48);
  if (lVar6 == 0) {
    plVar4 = (long *)0x20;
    __Znwm();
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = (long)&PTR_FUN_110b3d668;
    plStack_58 = plVar4 + 3;
    *plStack_58 = (long)&PTR_DAT_110b3dc78;
    if (cStack_31 < '\0') {
      func_0x000107c3192c(&uStack_70,uStack_48,uStack_40);
    }
    else {
      uStack_68 = uStack_40;
      uStack_70 = uStack_48;
      cStack_59 = cStack_31;
    }
    plStack_50 = plVar4;
    FUN_109cede8c(param_2,&uStack_70,&uStack_70);
    plVar4 = plStack_50;
    lVar6 = *(long *)(param_2 + 0x30);
    uVar7 = *(undefined8 *)(param_2 + 0x28);
    param_1[1] = *(undefined8 *)(param_2 + 0x30);
    *param_1 = uVar7;
    if (lVar6 != 0) {
      plVar1 = (long *)(lVar6 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (plStack_50 != (long *)0x0) {
      plVar1 = plStack_50 + 1;
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
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (cStack_59 < '\0') {
      __ZdlPv(uStack_70);
    }
  }
  else {
    lVar5 = *(long *)(lVar6 + 0x30);
    uVar7 = *(undefined8 *)(lVar6 + 0x28);
    param_1[1] = *(undefined8 *)(lVar6 + 0x30);
    *param_1 = uVar7;
    if (lVar5 != 0) {
      plVar4 = (long *)(lVar5 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  if (cStack_31 < '\0') {
    __ZdlPv(uStack_48);
  }
  return;
}



/* Entry: 109cece00; end: 109cecfdb;  */

/* WARNING: Removing unreachable block (ram,0x000109cecf4c) */
/* WARNING: Removing unreachable block (ram,0x000109cecf50) */
/* WARNING: Removing unreachable block (ram,0x000109cecf58) */
/* WARNING: Removing unreachable block (ram,0x000109cecf60) */
/* WARNING: Removing unreachable block (ram,0x000109cecf64) */

void FUN_109cece00(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  char cStack_59;
  long *plStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  char cStack_31;
  
  func_0x000107c31940(&uStack_48,&DAT_10e03fa66);
  lVar6 = param_2;
  FUN_109cedda8(param_2,&uStack_48);
  if (lVar6 == 0) {
    plVar4 = (long *)0x20;
    __Znwm();
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = (long)&PTR_FUN_110b3d848;
    plStack_58 = plVar4 + 3;
    *plStack_58 = (long)&PTR_DAT_110b3df30;
    if (cStack_31 < '\0') {
      func_0x000107c3192c(&uStack_70,uStack_48,uStack_40);
    }
    else {
      uStack_68 = uStack_40;
      uStack_70 = uStack_48;
      cStack_59 = cStack_31;
    }
    plStack_50 = plVar4;
    FUN_109cede8c(param_2,&uStack_70,&uStack_70);
    plVar4 = plStack_50;
    lVar6 = *(long *)(param_2 + 0x30);
    uVar7 = *(undefined8 *)(param_2 + 0x28);
    param_1[1] = *(undefined8 *)(param_2 + 0x30);
    *param_1 = uVar7;
    if (lVar6 != 0) {
      plVar1 = (long *)(lVar6 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (plStack_50 != (long *)0x0) {
      plVar1 = plStack_50 + 1;
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
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (cStack_59 < '\0') {
      __ZdlPv(uStack_70);
    }
  }
  else {
    lVar5 = *(long *)(lVar6 + 0x30);
    uVar7 = *(undefined8 *)(lVar6 + 0x28);
    param_1[1] = *(undefined8 *)(lVar6 + 0x30);
    *param_1 = uVar7;
    if (lVar5 != 0) {
      plVar4 = (long *)(lVar5 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  if (cStack_31 < '\0') {
    __ZdlPv(uStack_48);
  }
  return;
}



/* Entry: 109cecfdc; end: 109ced1b7;  */

/* WARNING: Removing unreachable block (ram,0x000109ced128) */
/* WARNING: Removing unreachable block (ram,0x000109ced12c) */
/* WARNING: Removing unreachable block (ram,0x000109ced134) */
/* WARNING: Removing unreachable block (ram,0x000109ced13c) */
/* WARNING: Removing unreachable block (ram,0x000109ced140) */

void FUN_109cecfdc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  char cStack_59;
  long *plStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  char cStack_31;
  
  func_0x000107c31940(&uStack_48,&DAT_10e03ee55);
  lVar6 = param_2;
  FUN_109cedda8(param_2,&uStack_48);
  if (lVar6 == 0) {
    plVar4 = (long *)0x20;
    __Znwm();
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = (long)&PTR_FUN_110b3d9d8;
    plStack_58 = plVar4 + 3;
    *plStack_58 = (long)&PTR_FUN_110b3d460;
    if (cStack_31 < '\0') {
      func_0x000107c3192c(&uStack_70,uStack_48,uStack_40);
    }
    else {
      uStack_68 = uStack_40;
      uStack_70 = uStack_48;
      cStack_59 = cStack_31;
    }
    plStack_50 = plVar4;
    FUN_109cede8c(param_2,&uStack_70,&uStack_70);
    plVar4 = plStack_50;
    lVar6 = *(long *)(param_2 + 0x30);
    uVar7 = *(undefined8 *)(param_2 + 0x28);
    param_1[1] = *(undefined8 *)(param_2 + 0x30);
    *param_1 = uVar7;
    if (lVar6 != 0) {
      plVar1 = (long *)(lVar6 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (plStack_50 != (long *)0x0) {
      plVar1 = plStack_50 + 1;
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
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (cStack_59 < '\0') {
      __ZdlPv(uStack_70);
    }
  }
  else {
    lVar5 = *(long *)(lVar6 + 0x30);
    uVar7 = *(undefined8 *)(lVar6 + 0x28);
    param_1[1] = *(undefined8 *)(lVar6 + 0x30);
    *param_1 = uVar7;
    if (lVar5 != 0) {
      plVar4 = (long *)(lVar5 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  if (cStack_31 < '\0') {
    __ZdlPv(uStack_48);
  }
  return;
}



/* Entry: 109ced1b8; end: 109ced393;  */

/* WARNING: Removing unreachable block (ram,0x000109ced304) */
/* WARNING: Removing unreachable block (ram,0x000109ced308) */
/* WARNING: Removing unreachable block (ram,0x000109ced310) */
/* WARNING: Removing unreachable block (ram,0x000109ced318) */
/* WARNING: Removing unreachable block (ram,0x000109ced31c) */

void FUN_109ced1b8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  char cStack_59;
  long *plStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  char cStack_31;
  
  func_0x000107c31940(&uStack_48,&DAT_10e03edc2);
  lVar6 = param_2;
  FUN_109cedda8(param_2,&uStack_48);
  if (lVar6 == 0) {
    plVar4 = (long *)0x20;
    __Znwm();
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = (long)&PTR_FUN_110b3da78;
    plStack_58 = plVar4 + 3;
    *plStack_58 = (long)&PTR_DAT_110b3d378;
    if (cStack_31 < '\0') {
      func_0x000107c3192c(&uStack_70,uStack_48,uStack_40);
    }
    else {
      uStack_68 = uStack_40;
      uStack_70 = uStack_48;
      cStack_59 = cStack_31;
    }
    plStack_50 = plVar4;
    FUN_109cede8c(param_2,&uStack_70,&uStack_70);
    plVar4 = plStack_50;
    lVar6 = *(long *)(param_2 + 0x30);
    uVar7 = *(undefined8 *)(param_2 + 0x28);
    param_1[1] = *(undefined8 *)(param_2 + 0x30);
    *param_1 = uVar7;
    if (lVar6 != 0) {
      plVar1 = (long *)(lVar6 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (plStack_50 != (long *)0x0) {
      plVar1 = plStack_50 + 1;
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
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (cStack_59 < '\0') {
      __ZdlPv(uStack_70);
    }
  }
  else {
    lVar5 = *(long *)(lVar6 + 0x30);
    uVar7 = *(undefined8 *)(lVar6 + 0x28);
    param_1[1] = *(undefined8 *)(lVar6 + 0x30);
    *param_1 = uVar7;
    if (lVar5 != 0) {
      plVar4 = (long *)(lVar5 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  if (cStack_31 < '\0') {
    __ZdlPv(uStack_48);
  }
  return;
}



/* Entry: 109ced394; end: 109ced56f;  */

/* WARNING: Removing unreachable block (ram,0x000109ced4e0) */
/* WARNING: Removing unreachable block (ram,0x000109ced4e4) */
/* WARNING: Removing unreachable block (ram,0x000109ced4ec) */
/* WARNING: Removing unreachable block (ram,0x000109ced4f4) */
/* WARNING: Removing unreachable block (ram,0x000109ced4f8) */

void FUN_109ced394(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  char cStack_59;
  long *plStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  char cStack_31;
  
  func_0x000107c31940(&uStack_48,&DAT_10e03fa9a);
  lVar6 = param_2;
  FUN_109cedda8(param_2,&uStack_48);
  if (lVar6 == 0) {
    plVar4 = (long *)0x20;
    __Znwm();
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = (long)&PTR_FUN_110b3dac8;
    plStack_58 = plVar4 + 3;
    *plStack_58 = (long)&PTR_DAT_110b3dfc0;
    if (cStack_31 < '\0') {
      func_0x000107c3192c(&uStack_70,uStack_48,uStack_40);
    }
    else {
      uStack_68 = uStack_40;
      uStack_70 = uStack_48;
      cStack_59 = cStack_31;
    }
    plStack_50 = plVar4;
    FUN_109cede8c(param_2,&uStack_70,&uStack_70);
    plVar4 = plStack_50;
    lVar6 = *(long *)(param_2 + 0x30);
    uVar7 = *(undefined8 *)(param_2 + 0x28);
    param_1[1] = *(undefined8 *)(param_2 + 0x30);
    *param_1 = uVar7;
    if (lVar6 != 0) {
      plVar1 = (long *)(lVar6 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (plStack_50 != (long *)0x0) {
      plVar1 = plStack_50 + 1;
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
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (cStack_59 < '\0') {
      __ZdlPv(uStack_70);
    }
  }
  else {
    lVar5 = *(long *)(lVar6 + 0x30);
    uVar7 = *(undefined8 *)(lVar6 + 0x28);
    param_1[1] = *(undefined8 *)(lVar6 + 0x30);
    *param_1 = uVar7;
    if (lVar5 != 0) {
      plVar4 = (long *)(lVar5 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  if (cStack_31 < '\0') {
    __ZdlPv(uStack_48);
  }
  return;
}



/* Entry: 109ced570; end: 109ced967;  */

void FUN_109ced570(undefined8 *param_1,long *param_2,long param_3,undefined8 param_4,long param_5)

{
  ulong *puVar1;
  undefined **ppuVar2;
  ulong *puVar3;
  undefined1 uVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined4 uVar13;
  undefined *puVar14;
  long lVar15;
  ulong *puVar16;
  long lVar17;
  undefined1 auStack_e0 [28];
  undefined4 uStack_c4;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 *puStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  plVar6 = param_2;
  lVar7 = param_5;
  (**(code **)(*param_2 + 0x10))(param_2,*(undefined4 *)(param_3 + 8));
  uVar13 = (undefined4)lVar7;
  if (((ulong)plVar6 & 1) == 0) {
    puVar14 = &UNK_10e03ecb2;
    puVar11 = &UNK_10f5aa38f;
    puVar12 = &UNK_10f5aa397;
  }
  else if (*(char *)(param_3 + 0xc) == '\x01') {
    if ((int)param_4 == 2) {
      lVar7 = *(long *)(param_3 + 0x10);
      puStack_a0 = param_1;
      if (lVar7 != 0) {
        ___dynamic_cast(lVar7,&PTR_DAT_11087fc08,&PTR_DAT_110b2bd50,0);
        ppuVar2 = &PTR_PTR_1132eca28;
        if (*(undefined ***)(lVar7 + 0x48) != (undefined **)0x0) {
          ppuVar2 = *(undefined ***)(lVar7 + 0x48);
        }
        puVar8 = (undefined8 *)0x90;
        __Znwm();
        *puVar8 = &PTR_DAT_110b354e0;
        puVar8[1] = 0;
        puVar16 = puVar8 + 2;
        puVar8[3] = 0;
        *puVar16 = 0;
        puVar8[5] = 0;
        puVar8[4] = 0;
        puVar8[7] = 0;
        puVar8[6] = 0;
        puVar8[9] = 0;
        puVar8[8] = 0;
        puVar8[0xb] = 0;
        puVar8[10] = 0;
        puVar8[0xd] = 0;
        puVar8[0xc] = 0;
        puVar8[0xe] = &DAT_11383d918;
        puVar8[0x11] = 0;
        *(undefined1 *)(puVar8 + 0xf) = 0;
        func_0x000107c30248(puVar8 + 0xe,(ulong)ppuVar2[0x1f] & 0xfffffffffffffffc,0);
        if (*(int *)(lVar7 + 0x20) != 0) {
          lVar15 = (long)*(int *)(lVar7 + 0x20) << 3;
          do {
            func_0x000107c303b4(puVar16);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
            lVar15 = lVar15 + -8;
          } while (lVar15 != 0);
        }
        puVar1 = puVar8 + 5;
        if (*(int *)(lVar7 + 0x38) != 0) {
          lVar7 = (long)*(int *)(lVar7 + 0x38) << 3;
          do {
            func_0x000107c303b4(puVar1);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
            lVar7 = lVar7 + -8;
          } while (lVar7 != 0);
        }
        if (0 < *(int *)(puVar8 + 3)) {
          puVar3 = puVar16;
          if ((*puVar16 & 1) != 0) {
            puVar3 = (ulong *)(*puVar16 + 7);
          }
          lVar7 = param_5 + 0x78;
          FUN_109cedb48(lVar7,*puVar3);
          if (lVar7 == 0 && *(long *)(param_5 + 0x90) == 1) {
            lStack_78 = *(undefined8 *)(*(long *)(param_5 + 0x88) + 0x30);
            lStack_80 = *(long *)(*(long *)(param_5 + 0x88) + 0x28);
            FUN_109cedc2c(param_5 + 0x78);
            puVar3 = puVar16;
            if ((*puVar16 & 1) != 0) {
              puVar3 = (ulong *)(*puVar16 + 7);
            }
            func_0x000109cf8a4c(param_5,*puVar3,&lStack_80);
          }
        }
        lStack_80 = 0;
        lStack_78 = 0;
        uStack_70 = 0;
        FUN_109ced9f4(&lStack_80,(long)*(int *)(puVar8 + 3));
        if ((puVar8[2] & 1) != 0) {
          puVar16 = (ulong *)(puVar8[2] + 7);
        }
        if (*(int *)(puVar8 + 3) != 0) {
          lVar7 = (long)*(int *)(puVar8 + 3) << 3;
          do {
            lVar15 = param_5;
            func_0x000109cf8a0c(param_5,*puVar16);
            func_0x000109ceda80(&lStack_80,lVar15);
            lVar7 = lVar7 + -8;
            puVar16 = puVar16 + 1;
          } while (lVar7 != 0);
        }
        FUN_109d014cc(&lStack_98,param_3,&lStack_80,0);
        if (0 < (int)((ulong)(lStack_90 - lStack_98) >> 4)) {
          lVar15 = 0;
          lVar7 = 0;
          lVar17 = 8;
          do {
            puVar16 = puVar1;
            if ((*puVar1 & 1) != 0) {
              puVar16 = (ulong *)(*puVar1 + lVar17 + -1);
            }
            func_0x000109cf8a4c(param_5,*puVar16,lStack_98 + lVar15);
            lVar7 = lVar7 + 1;
            lVar15 = lVar15 + 0x10;
            lVar17 = lVar17 + 8;
          } while (lVar7 < (int)((ulong)(lStack_90 - lStack_98) >> 4));
        }
        if (lStack_98 != 0) {
          __ZdlPv();
        }
        if (lStack_80 != 0) {
          lStack_78 = lStack_80;
          __ZdlPv();
        }
        (**(code **)(*param_2 + 0x28))(param_2,puVar8,ppuVar2,*(undefined4 *)(param_3 + 8),param_5);
        uVar13 = *(undefined4 *)(param_3 + 8);
        uVar4 = *(undefined1 *)(param_3 + 0xc);
        puVar9 = (undefined8 *)0x18;
        __Znwm();
        *(undefined4 *)(puVar9 + 1) = uVar13;
        *(undefined1 *)((long)puVar9 + 0xc) = uVar4;
        *puVar9 = &PTR_FUN_110b3d078;
        *(undefined1 *)((long)puVar9 + 0xd) = 1;
        puVar9[2] = puVar8;
        *puStack_a0 = puVar9;
        return;
      }
      puVar14 = &UNK_10e03f766;
      puVar11 = &UNK_10f5aa42b;
      puVar12 = &UNK_10f5aa439;
    }
    else {
      puVar14 = &UNK_10e03ecb2;
      puVar11 = &UNK_10f5aa38f;
      puVar12 = &UNK_10f5aa3ce;
    }
  }
  else {
    puVar14 = &UNK_10e03ecb2;
    puVar11 = &UNK_10f5aa38f;
    puVar12 = &UNK_10f5aa3e9;
  }
  func_0x00010952d0c4(puVar14,puVar11,puVar12);
  if (lStack_80 != 0) {
    lStack_78 = lStack_80;
    __ZdlPv();
  }
  func_0x000109c82d78(param_4);
  __ZdlPv();
  __Unwind_Resume(puVar14);
  pcStack_a8 = FUN_109ced968;
  puVar10 = &uStack_c4;
  uStack_c4 = uVar13;
  puStack_c0 = puVar14;
  uStack_b8 = param_4;
  puStack_b0 = &stack0xfffffffffffffff0;
  FUN_109ce555c(puVar10);
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_e0,&UNK_10f5a9d91,puVar10);
  FUN_109cd45b4(&UNK_10e03ecb2,&UNK_10f5aa404,auStack_e0);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109ced9b8);
  (*pcVar5)();
}



/* Entry: 109ced968; end: 109ced9d3;  */

void FUN_109ced968(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 in_w3;
  undefined1 auStack_40 [28];
  undefined4 uStack_24;
  
  puVar2 = &uStack_24;
  uStack_24 = in_w3;
  FUN_109ce555c(puVar2);
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_40,&UNK_10f5a9d91,puVar2);
  FUN_109cd45b4(&UNK_10e03ecb2,&UNK_10f5aa404,auStack_40);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109ced9b8);
  (*pcVar1)();
}



/* Entry: 109ced9d4; end: 109ced9f3;  */

long * FUN_109ced9d4(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  long *plVar15;
  undefined8 uVar16;
  
  plVar3 = (long *)&UNK_10e03ecb2;
  puVar6 = (undefined8 *)&UNK_10f5aa417;
  FUN_109ceaea0();
  lVar7 = *plVar3;
  if (puVar6 <= (undefined8 *)(plVar3[2] - lVar7 >> 4)) {
    return plVar3;
  }
  if ((ulong)puVar6 >> 0x3c != 0) {
    func_0x0001096ca5d0();
    puVar13 = (undefined8 *)plVar3[1];
    if (puVar13 < (undefined8 *)plVar3[2]) {
      uVar16 = *puVar6;
      puVar13[1] = puVar6[1];
      *puVar13 = uVar16;
      puVar13 = puVar13 + 2;
      plVar5 = plVar3;
    }
    else {
      lVar7 = (long)puVar13 - *plVar3;
      uVar1 = (lVar7 >> 4) + 1;
      if (uVar1 >> 0x3c != 0) {
        func_0x0001096ca5d0();
        plVar5 = plVar3;
        func_0x000107c31944();
        plVar4 = (long *)plVar3[1];
        if (plVar4 != (long *)0x0) {
          puVar14 = (undefined *)((long)plVar4 + -1);
          if (((ulong)plVar4 & (ulong)puVar14) == 0) {
            plVar15 = (long *)((ulong)puVar14 & (ulong)plVar5);
          }
          else {
            plVar15 = plVar5;
            if (plVar4 <= plVar5) {
              uVar1 = 0;
              if (plVar4 != (long *)0x0) {
                uVar1 = (ulong)plVar5 / (ulong)plVar4;
              }
              plVar15 = (long *)((long)plVar5 - uVar1 * (long)plVar4);
            }
          }
          plVar9 = *(long **)(*plVar3 + (long)plVar15 * 8);
          if (plVar9 != (long *)0x0) {
            plVar9 = (long *)*plVar9;
            do {
              if (plVar9 == (long *)0x0) {
                return (long *)0x0;
              }
              plVar10 = (long *)plVar9[1];
              if (plVar5 == plVar10) {
                plVar10 = plVar3;
                func_0x000104c4fbc4(plVar3,plVar9 + 2,puVar6);
                if (((ulong)plVar10 & 1) != 0) {
                  return plVar9;
                }
              }
              else {
                if (((ulong)plVar4 & (ulong)puVar14) == 0) {
                  plVar10 = (long *)((ulong)plVar10 & (ulong)puVar14);
                }
                else if (plVar4 <= plVar10) {
                  uVar1 = 0;
                  if (plVar4 != (long *)0x0) {
                    uVar1 = (ulong)plVar10 / (ulong)plVar4;
                  }
                  plVar10 = (long *)((long)plVar10 - uVar1 * (long)plVar4);
                }
                if (plVar10 != plVar15) {
                  return (long *)0x0;
                }
              }
              plVar9 = (long *)*plVar9;
            } while( true );
          }
        }
        return (long *)0x0;
      }
      uVar8 = plVar3[2] - *plVar3;
      uVar12 = (long)uVar8 >> 3;
      if (uVar12 <= uVar1) {
        uVar12 = uVar1;
      }
      if (0x7fffffffffffffef < uVar8) {
        uVar12 = 0xfffffffffffffff;
      }
      plVar4 = plVar3;
      func_0x0001096ca5e4();
      puVar2 = (undefined8 *)((long)plVar4 + lVar7);
      uVar16 = *puVar6;
      puVar2[1] = puVar6[1];
      *puVar2 = uVar16;
      puVar13 = puVar2 + 2;
      lVar7 = (long)puVar2 - (plVar3[1] - *plVar3);
      _memcpy(lVar7);
      plVar5 = (long *)*plVar3;
      *plVar3 = lVar7;
      plVar3[1] = (long)puVar13;
      plVar3[2] = (long)(plVar4 + uVar12 * 2);
      if (plVar5 != (long *)0x0) {
        __ZdlPv();
      }
    }
    plVar3[1] = (long)puVar13;
    return plVar5;
  }
  lVar11 = plVar3[1];
  plVar5 = plVar3;
  func_0x0001096ca5e4();
  lVar7 = (long)plVar5 + (lVar11 - lVar7);
  lVar11 = lVar7 - (plVar3[1] - *plVar3);
  _memcpy(lVar11);
  plVar4 = (long *)*plVar3;
  *plVar3 = lVar11;
  plVar3[1] = lVar7;
  plVar3[2] = (long)(plVar5 + (long)puVar6 * 2);
  if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return plVar4;
  }
  return (long *)0x0;
}



/* Entry: 109ced9f4; end: 109cedb47;  */

long * FUN_109ced9f4(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  
  lVar4 = *param_1;
  if (param_2 <= (undefined8 *)(param_1[2] - lVar4 >> 4)) {
    return param_1;
  }
  if ((ulong)param_2 >> 0x3c != 0) {
    func_0x0001096ca5d0();
    puVar10 = (undefined8 *)param_1[1];
    if (puVar10 < (undefined8 *)param_1[2]) {
      uVar13 = *param_2;
      puVar10[1] = param_2[1];
      *puVar10 = uVar13;
      puVar10 = puVar10 + 2;
      plVar3 = param_1;
    }
    else {
      lVar4 = (long)puVar10 - *param_1;
      uVar11 = (lVar4 >> 4) + 1;
      if (uVar11 >> 0x3c != 0) {
        func_0x0001096ca5d0();
        plVar3 = param_1;
        func_0x000107c31944();
        plVar2 = (long *)param_1[1];
        if (plVar2 != (long *)0x0) {
          uVar11 = (long)plVar2 - 1;
          if (((ulong)plVar2 & uVar11) == 0) {
            plVar12 = (long *)(uVar11 & (ulong)plVar3);
          }
          else {
            plVar12 = plVar3;
            if (plVar2 <= plVar3) {
              uVar9 = 0;
              if (plVar2 != (long *)0x0) {
                uVar9 = (ulong)plVar3 / (ulong)plVar2;
              }
              plVar12 = (long *)((long)plVar3 - uVar9 * (long)plVar2);
            }
          }
          plVar6 = *(long **)(*param_1 + (long)plVar12 * 8);
          if (plVar6 != (long *)0x0) {
            plVar6 = (long *)*plVar6;
            do {
              if (plVar6 == (long *)0x0) {
                return (long *)0x0;
              }
              plVar7 = (long *)plVar6[1];
              if (plVar3 == plVar7) {
                plVar7 = param_1;
                func_0x000104c4fbc4(param_1,plVar6 + 2,param_2);
                if (((ulong)plVar7 & 1) != 0) {
                  return plVar6;
                }
              }
              else {
                if (((ulong)plVar2 & uVar11) == 0) {
                  plVar7 = (long *)((ulong)plVar7 & uVar11);
                }
                else if (plVar2 <= plVar7) {
                  uVar9 = 0;
                  if (plVar2 != (long *)0x0) {
                    uVar9 = (ulong)plVar7 / (ulong)plVar2;
                  }
                  plVar7 = (long *)((long)plVar7 - uVar9 * (long)plVar2);
                }
                if (plVar7 != plVar12) {
                  return (long *)0x0;
                }
              }
              plVar6 = (long *)*plVar6;
            } while( true );
          }
        }
        return (long *)0x0;
      }
      uVar5 = param_1[2] - *param_1;
      uVar9 = (long)uVar5 >> 3;
      if (uVar9 <= uVar11) {
        uVar9 = uVar11;
      }
      if (0x7fffffffffffffef < uVar5) {
        uVar9 = 0xfffffffffffffff;
      }
      plVar2 = param_1;
      func_0x0001096ca5e4();
      puVar1 = (undefined8 *)((long)plVar2 + lVar4);
      uVar13 = *param_2;
      puVar1[1] = param_2[1];
      *puVar1 = uVar13;
      puVar10 = puVar1 + 2;
      lVar4 = (long)puVar1 - (param_1[1] - *param_1);
      _memcpy(lVar4);
      plVar3 = (long *)*param_1;
      *param_1 = lVar4;
      param_1[1] = (long)puVar10;
      param_1[2] = (long)(plVar2 + uVar9 * 2);
      if (plVar3 != (long *)0x0) {
        __ZdlPv();
      }
    }
    param_1[1] = (long)puVar10;
    return plVar3;
  }
  lVar8 = param_1[1];
  plVar3 = param_1;
  func_0x0001096ca5e4();
  lVar4 = (long)plVar3 + (lVar8 - lVar4);
  lVar8 = lVar4 - (param_1[1] - *param_1);
  _memcpy(lVar8);
  plVar2 = (long *)*param_1;
  *param_1 = lVar8;
  param_1[1] = lVar4;
  param_1[2] = (long)(plVar3 + (long)param_2 * 2);
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return plVar2;
  }
  return (long *)0x0;
}



/* Entry: 109cedb48; end: 109cedc2b;  */

long FUN_109cedb48(long *param_1,undefined8 param_2)

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



/* Entry: 109cedc2c; end: 109cedc7f;  */

void FUN_109cedc2c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1[3] != 0) {
    func_0x0001094a86a4(param_1,param_1[2]);
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



/* Entry: 109cedc80; end: 109cedcdb;  */

long * FUN_109cedc80(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_109cedcdc(plVar1 + 2);
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



/* Entry: 109cedcdc; end: 109cedda7;  */

void FUN_109cedcdc(undefined8 *param_1)

{
  func_0x000109cedd50(param_1 + 3);
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}


