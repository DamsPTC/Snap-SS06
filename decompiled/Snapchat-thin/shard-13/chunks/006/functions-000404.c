/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a919a84; end: 10a919ce3;  */

long * FUN_10a919a84(long *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *unaff_x25;
  ulong uVar7;
  
  plVar5 = param_1;
  func_0x000107c2b05c();
  plVar6 = (long *)param_1[1];
  if (plVar6 != (long *)0x0) {
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      unaff_x25 = (long *)(uVar7 & (ulong)plVar5);
    }
    else {
      unaff_x25 = plVar5;
      if (plVar6 <= plVar5) {
        uVar4 = 0;
        if (plVar6 != (long *)0x0) {
          uVar4 = (ulong)plVar5 / (ulong)plVar6;
        }
        unaff_x25 = (long *)((long)plVar5 - uVar4 * (long)plVar6);
      }
    }
    plVar1 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar1 != (long *)0x0) {
      for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        plVar2 = (long *)plVar1[1];
        if (plVar2 == plVar5) {
          plVar2 = param_1;
          func_0x000107c2b068(param_1,plVar1 + 2,param_2);
          if (((ulong)plVar2 & 1) != 0) {
            return plVar1;
          }
        }
        else {
          if (((ulong)plVar6 & uVar7) == 0) {
            plVar2 = (long *)((ulong)plVar2 & uVar7);
          }
          else if (plVar6 <= plVar2) {
            uVar4 = 0;
            if (plVar6 != (long *)0x0) {
              uVar4 = (ulong)plVar2 / (ulong)plVar6;
            }
            plVar2 = (long *)((long)plVar2 - uVar4 * (long)plVar6);
          }
          if (plVar2 != unaff_x25) break;
        }
      }
    }
  }
  plVar1 = (long *)0x50;
  __Znwm();
  *plVar1 = 0;
  plVar1[1] = (long)plVar5;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar1 + 2,*param_3,param_3[1]);
  }
  else {
    lVar3 = *param_3;
    plVar1[3] = param_3[1];
    plVar1[2] = lVar3;
    plVar1[4] = param_3[2];
  }
  plVar1[8] = 0;
  plVar1[7] = 0;
  plVar1[6] = 0;
  plVar1[5] = 0;
  *(undefined4 *)(plVar1 + 9) = 0x3f800000;
  if ((plVar6 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar6 < (float)(param_1[3] + 1))
     ) {
    uVar7 = 1;
    if ((long *)0x2 < plVar6) {
      uVar7 = (ulong)(((ulong)plVar6 & (long)plVar6 - 1U) != 0);
    }
    uVar7 = uVar7 | (long)plVar6 << 1;
    uVar4 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar7 <= uVar4) {
      uVar7 = uVar4;
    }
    FUN_10a9198b4(param_1,uVar7);
    plVar6 = (long *)param_1[1];
    if (((ulong)plVar6 & (long)plVar6 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar6 - 1U & (ulong)plVar5);
    }
    else {
      unaff_x25 = plVar5;
      if (plVar6 <= plVar5) {
        uVar7 = 0;
        if (plVar6 != (long *)0x0) {
          uVar7 = (ulong)plVar5 / (ulong)plVar6;
        }
        unaff_x25 = (long *)((long)plVar5 - uVar7 * (long)plVar6);
      }
    }
  }
  lVar3 = *param_1;
  plVar5 = *(long **)(lVar3 + (long)unaff_x25 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *plVar1 = *plVar5;
    *plVar5 = (long)plVar1;
    *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar5;
    if (*plVar1 != 0) {
      plVar5 = *(long **)(*plVar1 + 8);
      if (((ulong)plVar6 & (long)plVar6 - 1U) == 0) {
        plVar5 = (long *)((ulong)plVar5 & (long)plVar6 - 1U);
      }
      else if (plVar6 <= plVar5) {
        uVar7 = 0;
        if (plVar6 != (long *)0x0) {
          uVar7 = (ulong)plVar5 / (ulong)plVar6;
        }
        plVar5 = (long *)((long)plVar5 - uVar7 * (long)plVar6);
      }
      *(long **)(*param_1 + (long)plVar5 * 8) = plVar1;
    }
  }
  else {
    *plVar1 = *plVar5;
    *plVar5 = (long)plVar1;
  }
  param_1[3] = param_1[3] + 1;
  return plVar1;
}



/* Entry: 10a919ce4; end: 10a919d2b;  */

void FUN_10a919ce4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a91953c(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a919d2c; end: 10a919efb;  */

void FUN_10a919d2c(long *param_1,long *param_2)

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
  plVar6 = param_2;
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
      plVar6 = (long *)plVar4[1];
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
      plVar9 = (long *)*plVar4;
      while (plVar9 != (long *)0x0) {
        plVar8 = (long *)plVar9[1];
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
        plVar7 = plVar9;
        if (plVar8 != plVar6) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)plVar8 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar8 * 8) = plVar4;
            plVar6 = plVar8;
          }
          else {
            *plVar4 = *plVar9;
            *plVar9 = **(undefined8 **)(lVar2 + (long)plVar8 * 8);
            **(long **)(lVar2 + (long)plVar8 * 8) = (long)plVar9;
            plVar7 = plVar4;
          }
        }
        plVar4 = plVar7;
        plVar9 = (long *)*plVar7;
      }
    }
    return;
  }
  func_0x000109ffded8();
  if ((((ulong)plVar4 & 1) != 0) && (*(char *)((long)plVar6 + 0x27) < '\0')) {
    __ZdlPv(plVar6[2]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar6);
  return;
}



/* Entry: 10a919efc; end: 10a919f2f;  */

void FUN_10a919efc(ulong param_1,long param_2)

{
  if (((param_1 & 1) != 0) && (*(char *)(param_2 + 0x27) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_2 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a919f30; end: 10a91a183;  */

long * FUN_10a919f30(long *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *unaff_x25;
  ulong uVar7;
  
  plVar5 = param_1;
  func_0x000107c2b05c();
  plVar6 = (long *)param_1[1];
  if (plVar6 != (long *)0x0) {
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      unaff_x25 = (long *)(uVar7 & (ulong)plVar5);
    }
    else {
      unaff_x25 = plVar5;
      if (plVar6 <= plVar5) {
        uVar4 = 0;
        if (plVar6 != (long *)0x0) {
          uVar4 = (ulong)plVar5 / (ulong)plVar6;
        }
        unaff_x25 = (long *)((long)plVar5 - uVar4 * (long)plVar6);
      }
    }
    plVar1 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar1 != (long *)0x0) {
      for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        plVar2 = (long *)plVar1[1];
        if (plVar2 == plVar5) {
          plVar2 = param_1;
          func_0x000107c2b068(param_1,plVar1 + 2,param_2);
          if (((ulong)plVar2 & 1) != 0) {
            return plVar1;
          }
        }
        else {
          if (((ulong)plVar6 & uVar7) == 0) {
            plVar2 = (long *)((ulong)plVar2 & uVar7);
          }
          else if (plVar6 <= plVar2) {
            uVar4 = 0;
            if (plVar6 != (long *)0x0) {
              uVar4 = (ulong)plVar2 / (ulong)plVar6;
            }
            plVar2 = (long *)((long)plVar2 - uVar4 * (long)plVar6);
          }
          if (plVar2 != unaff_x25) break;
        }
      }
    }
  }
  plVar1 = (long *)0x40;
  __Znwm();
  *plVar1 = 0;
  plVar1[1] = (long)plVar5;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar1 + 2,*param_3,param_3[1]);
  }
  else {
    lVar3 = *param_3;
    plVar1[3] = param_3[1];
    plVar1[2] = lVar3;
    plVar1[4] = param_3[2];
  }
  plVar1[6] = 1;
  plVar1[5] = 0;
  plVar1[7] = 0;
  if ((plVar6 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar6 < (float)(param_1[3] + 1))
     ) {
    uVar7 = 1;
    if ((long *)0x2 < plVar6) {
      uVar7 = (ulong)(((ulong)plVar6 & (long)plVar6 - 1U) != 0);
    }
    uVar7 = uVar7 | (long)plVar6 << 1;
    uVar4 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar7 <= uVar4) {
      uVar7 = uVar4;
    }
    FUN_10a919d2c(param_1,uVar7);
    plVar6 = (long *)param_1[1];
    if (((ulong)plVar6 & (long)plVar6 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar6 - 1U & (ulong)plVar5);
    }
    else {
      unaff_x25 = plVar5;
      if (plVar6 <= plVar5) {
        uVar7 = 0;
        if (plVar6 != (long *)0x0) {
          uVar7 = (ulong)plVar5 / (ulong)plVar6;
        }
        unaff_x25 = (long *)((long)plVar5 - uVar7 * (long)plVar6);
      }
    }
  }
  lVar3 = *param_1;
  plVar5 = *(long **)(lVar3 + (long)unaff_x25 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *plVar1 = *plVar5;
    *plVar5 = (long)plVar1;
    *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar5;
    if (*plVar1 != 0) {
      plVar5 = *(long **)(*plVar1 + 8);
      if (((ulong)plVar6 & (long)plVar6 - 1U) == 0) {
        plVar5 = (long *)((ulong)plVar5 & (long)plVar6 - 1U);
      }
      else if (plVar6 <= plVar5) {
        uVar7 = 0;
        if (plVar6 != (long *)0x0) {
          uVar7 = (ulong)plVar5 / (ulong)plVar6;
        }
        plVar5 = (long *)((long)plVar5 - uVar7 * (long)plVar6);
      }
      *(long **)(*param_1 + (long)plVar5 * 8) = plVar1;
    }
  }
  else {
    *plVar1 = *plVar5;
    *plVar5 = (long)plVar1;
  }
  param_1[3] = param_1[3] + 1;
  return plVar1;
}



/* Entry: 10a91a184; end: 10a91a187;  */

void FUN_10a91a184(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a91a188; end: 10a91a19b;  */

void FUN_10a91a188(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a91a19c; end: 10a91a1b7;  */

void FUN_10a91a19c(long param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10a91a1b8; end: 10a91a1f3;  */

long FUN_10a91a1b8(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba2110);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a91a1f4; end: 10a91a1f7;  */

void FUN_10a91a1f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a91a1f8; end: 10a91a24f;  */

long FUN_10a91a1f8(long param_1)

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



/* Entry: 10a91a250; end: 10a91a477;  */

void FUN_10a91a250(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  
  puVar5 = (undefined8 *)0xb0;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_110bddb70;
  *(undefined1 *)(puVar5 + 4) = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  puVar5[0xc] = param_3;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  puVar5[0xf] = 0;
  puVar7 = puVar5 + 3;
  *puVar7 = &PTR_DAT_110bdb308;
  puVar5[5] = &PTR_FUN_110bdb390;
  puVar5[10] = &PTR_FUN_110bdb3e8;
  puVar5[0xb] = param_2;
  puVar5[0x11] = 0;
  puVar5[0x10] = 0;
  puVar5[0x13] = 0;
  puVar5[0x12] = 0;
  puVar5[0x15] = 0;
  puVar5[0x14] = 0;
  *param_1 = puVar7;
  param_1[1] = puVar5;
  puVar6 = puVar5 + 8;
  puVar5[9] = 0;
  *puVar6 = 0;
  if ((puVar6 != (undefined8 *)0x0) &&
     ((lVar4 = puVar5[9], lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar8 = (long *)param_1[1];
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar8 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = puVar5[9];
    }
    *puVar6 = puVar7;
    puVar5[9] = plVar8;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
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
        (**(code **)(*plVar8 + 0x10))(plVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar8);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a91a478; end: 10a91a5a7;  */

undefined8 * FUN_10a91a478(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  plVar5 = param_1 + 1;
  plVar6 = plVar5;
  plVar1 = (long *)*plVar5;
joined_r0x00010a91a4a0:
  do {
    if (plVar1 == (long *)0x0) {
LAB_10a91a4f0:
      param_3 = (undefined8 *)*param_3;
      puVar3 = (undefined8 *)0x48;
      __Znwm();
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        func_0x000107c3192c(puVar3 + 4,*param_3,param_3[1]);
      }
      else {
        uVar8 = param_3[1];
        uVar7 = *param_3;
        puVar3[6] = param_3[2];
        puVar3[5] = uVar8;
        puVar3[4] = uVar7;
      }
      puVar3[7] = 0;
      puVar3[8] = 0;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = plVar6;
      *plVar5 = (long)puVar3;
      puVar4 = puVar3;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
        puVar4 = (undefined8 *)*plVar5;
      }
      func_0x000107c2b058(param_1[1],puVar4);
      param_1[2] = param_1[2] + 1;
      return puVar3;
    }
    uVar7 = param_2;
    FUN_10a003e3c(param_2,plVar1 + 4);
    plVar6 = plVar1;
    if (((uint)uVar7 >> 7 & 1) == 0) {
      plVar2 = plVar1 + 4;
      FUN_10a003e3c(plVar2,param_2);
      if (((uint)plVar2 >> 7 & 1) == 0) {
        if ((undefined8 *)*plVar5 != (undefined8 *)0x0) {
          return (undefined8 *)*plVar5;
        }
        goto LAB_10a91a4f0;
      }
      plVar5 = plVar1 + 1;
      plVar1 = (long *)*plVar5;
      goto joined_r0x00010a91a4a0;
    }
    plVar5 = plVar1;
    plVar1 = (long *)*plVar1;
  } while( true );
}



/* Entry: 10a91a5a8; end: 10a91a637;  */

void FUN_10a91a5a8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a910304(lVar1 + 0x20);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a91a638; end: 10a91a697;  */

void FUN_10a91a638(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = 1000;
  __Znwm();
  FUN_10a91a698();
  *param_1 = lVar5 + 0x18;
  param_1[1] = lVar5;
  if (((long *)(lVar5 + 0x58) != (long *)0x0) &&
     ((lVar4 = *(long *)(lVar5 + 0x60), lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
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
      lVar4 = *(long *)(lVar5 + 0x60);
    }
    *(long *)(lVar5 + 0x58) = lVar5 + 0x18;
    *(long **)(lVar5 + 0x60) = plVar6;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a91a698; end: 10a91a6eb;  */

undefined8 * FUN_10a91a698(undefined8 *param_1,undefined8 *param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110bbae38;
  FUN_10a1dcc50(param_1 + 3,*param_2,0,0);
  return param_1;
}



/* Entry: 10a91a6ec; end: 10a91a713;  */

void FUN_10a91a6ec(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10a91a714();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a91a714; end: 10a91a917;  */

/* WARNING: Removing unreachable block (ram,0x00010a91a8f0) */

long FUN_10a91a714(long param_1)

{
  long lVar1;
  char *pcVar2;
  
  lVar1 = -0x400;
  pcVar2 = (char *)(param_1 + 0x2ff7);
  do {
    if (*pcVar2 < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar2 + -0x17));
    }
    lVar1 = lVar1 + 0x20;
    pcVar2 = pcVar2 + -0x20;
  } while (lVar1 != 0);
  lVar1 = -0x400;
  pcVar2 = (char *)(param_1 + 0x2bf7);
  do {
    if (*pcVar2 < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar2 + -0x17));
    }
    lVar1 = lVar1 + 0x20;
    pcVar2 = pcVar2 + -0x20;
  } while (lVar1 != 0);
  lVar1 = -0x400;
  pcVar2 = (char *)(param_1 + 0x27f7);
  do {
    if (*pcVar2 < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar2 + -0x17));
    }
    lVar1 = lVar1 + 0x20;
    pcVar2 = pcVar2 + -0x20;
  } while (lVar1 != 0);
  lVar1 = -0x400;
  pcVar2 = (char *)(param_1 + 0x23f7);
  do {
    if (*pcVar2 < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar2 + -0x17));
    }
    lVar1 = lVar1 + 0x20;
    pcVar2 = pcVar2 + -0x20;
  } while (lVar1 != 0);
  lVar1 = -0x400;
  pcVar2 = (char *)(param_1 + 0x1ff7);
  do {
    if (*pcVar2 < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar2 + -0x17));
    }
    lVar1 = lVar1 + 0x20;
    pcVar2 = pcVar2 + -0x20;
  } while (lVar1 != 0);
  lVar1 = -0x400;
  pcVar2 = (char *)(param_1 + 0x1bf7);
  do {
    if (*pcVar2 < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar2 + -0x17));
    }
    lVar1 = lVar1 + 0x20;
    pcVar2 = pcVar2 + -0x20;
  } while (lVar1 != 0);
  lVar1 = -0x400;
  pcVar2 = (char *)(param_1 + 0x17f7);
  do {
    if (*pcVar2 < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar2 + -0x17));
    }
    lVar1 = lVar1 + 0x20;
    pcVar2 = pcVar2 + -0x20;
  } while (lVar1 != 0);
  lVar1 = -0x400;
  pcVar2 = (char *)(param_1 + 0x13f7);
  do {
    if (*pcVar2 < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar2 + -0x17));
    }
    lVar1 = lVar1 + 0x20;
    pcVar2 = pcVar2 + -0x20;
  } while (lVar1 != 0);
  lVar1 = 0;
  do {
    if (*(char *)(param_1 + lVar1 + 0xff7) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + lVar1 + 0xfe0));
    }
    lVar1 = lVar1 + -0x20;
  } while (lVar1 != -0x400);
  lVar1 = 0;
  do {
    if (*(char *)(param_1 + lVar1 + 0xbf7) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + lVar1 + 0xbe0));
    }
    lVar1 = lVar1 + -0x20;
  } while (lVar1 != -0x400);
  lVar1 = 0x400;
  do {
    if (*(char *)(param_1 + lVar1 + 0x3f7) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + lVar1 + 0x3e0));
    }
    lVar1 = lVar1 + -0x20;
  } while (lVar1 != 0);
  lVar1 = 0x400;
  do {
    lVar1 = lVar1 + -0x20;
  } while (lVar1 != 0);
  return param_1;
}



/* Entry: 10a91a918; end: 10a91a93f;  */

void FUN_10a91a918(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10a91a940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a91a940; end: 10a91aa33;  */

void FUN_10a91a940(long param_1)

{
  long lVar1;
  long lStack_28;
  
  func_0x00010a91a9c0(param_1 + 0xf8);
  lStack_28 = param_1 + 0xe0;
  FUN_10a91aa34(&lStack_28);
  lStack_28 = param_1 + 200;
  func_0x00010a91aaa4(&lStack_28);
  lVar1 = 0xa0;
  do {
    func_0x00010a05248c(param_1 + lVar1);
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x60);
  do {
    func_0x00010a05248c(param_1 + lVar1);
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x20);
  FUN_10a8ff960(param_1);
  return;
}



/* Entry: 10a91aa34; end: 10a91ab13;  */

void FUN_10a91aa34(long *param_1)

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
        lVar1 = lVar1 + -0x30;
        FUN_10a8ff960();
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



/* Entry: 10a91ab14; end: 10a91ab87;  */

long * FUN_10a91ab14(long *param_1)

{
  long lVar1;
  
  func_0x00010a91ab4c(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a91ab88; end: 10a91ab97;  */

void FUN_10a91ab88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2e530;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a91ab98; end: 10a91abb7;  */

void FUN_10a91ab98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2e530;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a91abb8; end: 10a91ac93;  */

void FUN_10a91abb8(long param_1)

{
  long lVar1;
  long lStack_28;
  
  FUN_10a8fd980(param_1 + 0x1568,param_1 + 0x70);
  FUN_10a0617bc(param_1 + 0x1578);
  func_0x00010a3f6208(param_1 + 0x1568);
  FUN_10a94130c(param_1 + 0x1430);
  if (*(long *)(param_1 + 0x340) != 0) {
    *(long *)(param_1 + 0x348) = *(long *)(param_1 + 0x340);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x328) != 0) {
    *(long *)(param_1 + 0x330) = *(long *)(param_1 + 0x328);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x310) != 0) {
    *(long *)(param_1 + 0x318) = *(long *)(param_1 + 0x310);
    __ZdlPv();
  }
  lVar1 = 0x288;
  do {
    if (*(long *)(param_1 + lVar1) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x88);
  FUN_10a90f668(param_1 + 0x78);
  lStack_28 = param_1 + 0x50;
  func_0x00010a190bd0(&lStack_28);
  lStack_28 = param_1 + 0x38;
  FUN_10a0d4a18(&lStack_28);
  func_0x00010a190e10(param_1 + 0x28);
  FUN_10a0617bc(param_1 + 0x18);
  return;
}



/* Entry: 10a91ac94; end: 10a91ac97;  */

void FUN_10a91ac94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a91ac98; end: 10a91ad7b;  */

void FUN_10a91ac98(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10a91a1f8(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a91ad7c; end: 10a91b187;  */

void FUN_10a91ad7c(long param_1)

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
  
  if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x90);
    FUN_10a4f3e88(param_1 + 0x98,param_1 + 0x88,param_1 + 0x80);
    *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x98);
    plVar5 = (long *)(*(long *)(param_1 + 0x98) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0xa8) = 1;
      lVar8 = *(long *)(param_1 + 0x90);
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
  plVar5 = *(long **)(param_1 + 0x90);
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
  plVar5 = *(long **)(param_1 + 0x98);
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
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x10) >> 1 & 1) == 0) {
    lVar8 = *(long *)(param_1 + 0x80);
    *(long *)(param_1 + 0xa0) = lVar8;
    *(undefined8 *)(param_1 + 0x80) = 0;
    if (((uint)*(undefined8 *)(lVar8 + 0x10) >> 5 & 1) == 0) {
      func_0x0001092af8bc(param_1 + 0xa0);
      if ((*(byte *)(*(long *)(param_1 + 0xa0) + 0xb0) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a91b0a8);
        (*pcVar4)();
      }
      FUN_10a9146a8(param_1 + 0x48,*(long *)(param_1 + 0xa0) + 0x98);
    }
    else {
      __ZNSt13exception_ptrC1ERKS_(&uStack_48,*(long *)(param_1 + 0xa0) + 0x90);
      FUN_10a914794(param_1 + 0x60,&uStack_48);
      __ZNSt13exception_ptrD1Ev(&uStack_48);
    }
    plVar5 = *(long **)(param_1 + 0xa0);
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
  }
  func_0x0001092ba100(param_1 + 0x10);
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
  func_0x000109d1a1d0(param_1 + 0x10);
  if ((3 < *(int *)(param_1 + 0x68)) && (*(undefined8 **)(param_1 + 0x70) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x70))();
  }
  if ((3 < *(int *)(param_1 + 0x50)) && (*(undefined8 **)(param_1 + 0x58) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x58))();
  }
  plVar5 = *(long **)(param_1 + 0x80);
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
  __ZdlPv(param_1);
  return;
}



/* Entry: 10a91b188; end: 10a91b37f;  */

void FUN_10a91b188(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x90);
  if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
    if (plVar5 == (long *)0x0) goto LAB_10a91b2dc;
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
    if ((uVar4 & 0x1fffffffc) != 4) goto LAB_10a91b2dc;
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
    plVar5 = *(long **)(param_1 + 0x98);
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
    plVar5 = *(long **)(param_1 + 0x88);
    if (plVar5 == (long *)0x0) goto LAB_10a91b2dc;
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
    if ((uVar4 & 0x1fffffffc) != 4) goto LAB_10a91b2dc;
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
LAB_10a91b2dc:
  func_0x000109d1a1d0(param_1 + 0x10);
  if ((3 < *(int *)(param_1 + 0x68)) && (*(undefined8 **)(param_1 + 0x70) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x70))();
  }
  if ((3 < *(int *)(param_1 + 0x50)) && (*(undefined8 **)(param_1 + 0x58) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x58))();
  }
  plVar5 = *(long **)(param_1 + 0x80);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a91b380; end: 10a91b7e3;  */

void FUN_10a91b380(long param_1)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0xe0) & 1) == 0) {
    *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x50);
    iVar2 = *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x90) = iVar2;
    if (iVar2 == 3) {
      *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x60);
    }
    else if (iVar2 == 2) {
      *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_1 + 0x60);
    }
    else if (3 < iVar2) {
      *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x60);
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x68);
    iVar2 = *(int *)(param_1 + 0x70);
    *(int *)(param_1 + 0xa8) = iVar2;
    if (iVar2 == 3) {
      *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x78);
    }
    else if (iVar2 == 2) {
      *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_1 + 0x78);
    }
    else if (3 < iVar2) {
      *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x78);
      *(undefined8 *)(param_1 + 0x78) = 0;
    }
    *(undefined4 *)(param_1 + 0x70) = 0;
    FUN_10a914f9c(param_1 + 0xd0,param_1 + 0xe1,param_1 + 0xd8,param_1 + 0x88);
    *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xd0);
    plVar6 = (long *)(*(long *)(param_1 + 0xd0) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0xe0) = 1;
      lVar9 = *(long *)(param_1 + 0xc0);
      plVar6 = (long *)(lVar9 + 0x10);
      uStack_28 = *(undefined8 *)(param_1 + 0x18);
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
            uStack_38 = 0;
            lStack_30 = param_1;
            func_0x000109d1b588(lVar9 + 0x18,&uStack_38);
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
  plVar6 = *(long **)(param_1 + 0xc0);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar6 + 0x12);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a91b6d0);
    (*pcVar5)();
  }
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
  plVar6 = *(long **)(param_1 + 0xd0);
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
  if ((3 < *(int *)(param_1 + 0xa8)) && (*(undefined8 **)(param_1 + 0xb0) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0xb0))();
  }
  if ((3 < *(int *)(param_1 + 0x90)) && (*(undefined8 **)(param_1 + 0x98) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x98))();
  }
  plVar6 = *(long **)(param_1 + 0xd8);
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
  func_0x0001092ba100(param_1 + 0x10);
  if ((3 < *(int *)(param_1 + 0x70)) && (*(undefined8 **)(param_1 + 0x78) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x78))();
  }
  if ((3 < *(int *)(param_1 + 0x58)) && (*(undefined8 **)(param_1 + 0x60) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x60))();
  }
  plVar6 = *(long **)(param_1 + 0x48);
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
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a91b7e4; end: 10a91b9b7;  */

void FUN_10a91b7e4(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0xe0) == '\x01') {
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
    plVar4 = *(long **)(param_1 + 0xd0);
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
    if ((3 < *(int *)(param_1 + 0xa8)) && (*(undefined8 **)(param_1 + 0xb0) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)(param_1 + 0xb0))();
    }
    if ((3 < *(int *)(param_1 + 0x90)) && (*(undefined8 **)(param_1 + 0x98) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)(param_1 + 0x98))();
    }
    plVar4 = *(long **)(param_1 + 0xd8);
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
  if ((3 < *(int *)(param_1 + 0x70)) && (*(undefined8 **)(param_1 + 0x78) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x78))();
  }
  if ((3 < *(int *)(param_1 + 0x58)) && (*(undefined8 **)(param_1 + 0x60) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x60))();
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



/* Entry: 10a91b9b8; end: 10a91ba3f;  */

undefined1  [16] FUN_10a91b9b8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x20;
  auVar1._0_8_ = &UNK_10f683a14;
  return auVar1;
}



/* Entry: 10a91ba40; end: 10a91bb27;  */

void FUN_10a91ba40(undefined8 param_1)

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
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f682e30;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f682e30;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a91bb28(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f682e31;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f682e30;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = (undefined *)0x0;
  uStack_38 = 0;
  FUN_10a93c5a0();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f682e3a;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f682e30;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f682e30;
  uStack_38 = 0;
  func_0x00010a93c89c(param_1,&puStack_98);
  FUN_10a93caa0(param_1);
  return;
}



/* Entry: 10a91bb28; end: 10a91bbff;  */

/* WARNING: Removing unreachable block (ram,0x00010a91bbc0) */

undefined1  [16] FUN_10a91bb28(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f683a14,0x20);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a93c4a4(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a91bc00; end: 10a91bc23;  */

long * FUN_10a91bc00(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plStack_40;
  long *plStack_38;
  
  if (*param_2 != 0) {
    lVar7 = param_2[1];
    lVar5 = *param_2;
    if (param_2[1] != 0) {
      plVar6 = (long *)(param_2[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar6 = *(long **)(param_1 + 0x2a0);
    *(long *)(param_1 + 0x2a0) = lVar7;
    *(long *)(param_1 + 0x298) = lVar5;
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6 + 1;
      do {
        lVar5 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    return (long *)(param_1 + 0x298);
  }
  plVar6 = (long *)&UNK_10f682e43;
  FUN_10a00946c();
  plVar6[0x5b] = (long)&PTR_FUN_110c383b8;
  plVar6[0x5d] = 0;
  plVar6[0x5c] = 0;
  *(undefined2 *)(plVar6 + 0x5e) = 0x100;
  plVar4 = plVar6;
  FUN_10a8cd590();
  *plVar4 = (long)&PTR_FUN_110c2e760;
  plVar4[2] = (long)&PTR_FUN_110c2e8a0;
  plVar4[5] = (long)&PTR_FUN_110c2e8d0;
  plVar4[0x5b] = (long)&PTR_FUN_110c2e978;
  plVar4[0x15] = (long)&PTR_FUN_110c2e928;
  plVar4 = (long *)0x50;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110bcfba8;
  plVar4[4] = 0;
  plVar4[5] = 0;
  *(undefined1 *)(plVar4 + 7) = 0;
  plStack_40 = plVar4 + 3;
  *plStack_40 = (long)&PTR_FUN_110c6a8d8;
  plVar4[6] = (long)&PTR_FUN_110c6a940;
  *(undefined8 *)((long)plVar4 + 0x44) = 0x3f8000003f800000;
  *(undefined8 *)((long)plVar4 + 0x3c) = 0xbf800000bf800000;
  plStack_38 = plVar4;
  FUN_10a91bc00(plVar6,&plStack_40);
  plVar4 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return plVar6;
}



/* Entry: 10a91bc24; end: 10a91bd5b;  */

undefined8 * FUN_10a91bc24(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long *plStack_30;
  long *plStack_28;
  
  param_1[0x5b] = &PTR_FUN_110c383b8;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  *(undefined2 *)(param_1 + 0x5e) = 0x100;
  puVar4 = param_1;
  FUN_10a8cd590(param_1,&PTR_PTR_110c2e9b8,param_2);
  *puVar4 = &PTR_FUN_110c2e760;
  puVar4[2] = &PTR_FUN_110c2e8a0;
  puVar4[5] = &PTR_FUN_110c2e8d0;
  puVar4[0x5b] = &PTR_FUN_110c2e978;
  puVar4[0x15] = &PTR_FUN_110c2e928;
  plVar5 = (long *)0x50;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110bcfba8;
  plVar5[4] = 0;
  plVar5[5] = 0;
  *(undefined1 *)(plVar5 + 7) = 0;
  plStack_30 = plVar5 + 3;
  *plStack_30 = (long)&PTR_FUN_110c6a8d8;
  plVar5[6] = (long)&PTR_FUN_110c6a940;
  *(undefined8 *)((long)plVar5 + 0x44) = 0x3f8000003f800000;
  *(undefined8 *)((long)plVar5 + 0x3c) = 0xbf800000bf800000;
  plStack_28 = plVar5;
  FUN_10a91bc00(param_1,&plStack_30);
  plVar5 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a91bd5c; end: 10a91bef3;  */

void FUN_10a91bd5c(undefined4 param_1,long param_2,long *param_3)

{
  long lVar1;
  
  FUN_10a8cdb40();
  (**(code **)(*param_3 + 0x40))(param_3,&PTR_s_angle_110c2f070);
  *(undefined4 *)(param_2 + 0x2a8) = param_1;
  lVar1 = 0;
  if (*(long *)(param_2 + 0x298) != 0) {
    lVar1 = *(long *)(param_2 + 0x298) + 0x18;
  }
                    /* WARNING: Could not recover jumptable at 0x00010a91bdbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x1f0))(param_3,&PTR_s_rect_110c2f090,lVar1);
  return;
}



/* Entry: 10a91bef4; end: 10a91bf8f;  */

undefined8 * FUN_10a91bef4(undefined8 *param_1,long param_2,undefined4 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = &PTR_FUN_110c2ea00;
  param_1[1] = &PTR_DAT_1108a5c28;
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[4] = *(undefined8 *)(param_2 + 0x18);
  param_1[3] = uVar6;
  param_1[2] = uVar5;
  lVar4 = *(long *)(param_2 + 0x28);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  param_1[6] = *(undefined8 *)(param_2 + 0x28);
  param_1[5] = uVar5;
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
  FUN_10a072330(param_1 + 7,param_2 + 0x30);
  *(undefined4 *)(param_1 + 0xb) = param_3;
  return param_1;
}



/* Entry: 10a91bf90; end: 10a91c043;  */

undefined8 FUN_10a91bf90(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [32];
  
  ppuStack_70 = &PTR_DAT_1108a5c28;
  uStack_60 = *(undefined8 *)(param_2 + 0x10);
  uStack_68 = *(undefined8 *)(param_2 + 8);
  uStack_58 = *(undefined8 *)(param_2 + 0x18);
  uStack_48 = *(undefined8 *)(param_2 + 0x28);
  uStack_50 = *(undefined8 *)(param_2 + 0x20);
  if (*(long *)(param_2 + 0x28) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x28) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10a072330(auStack_40,param_2 + 0x30);
  FUN_10a91bef4(param_1,&ppuStack_70,3);
  func_0x000105675c90(&ppuStack_70);
  return param_1;
}



/* Entry: 10a91c044; end: 10a91c087;  */

undefined4 FUN_10a91c044(long param_1)

{
  return *(undefined4 *)(param_1 + 0x58);
}



/* Entry: 10a91c088; end: 10a91c26f;  */

undefined8 * FUN_10a91c088(long param_1)

{
  int iVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  long *extraout_x8_01;
  int *piVar9;
  int *piVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined4 uStack_a4;
  long lStack_a0;
  long lStack_98;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  long lStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  iVar1 = *(int *)(param_1 + 0x20);
  piVar9 = (int *)&UNK_10e4e3f48;
  if (iVar1 < 9) {
    piVar10 = (int *)&UNK_10e4e3f50;
  }
  else {
    piVar10 = piVar9;
    piVar9 = (int *)&UNK_10e4e3f58;
  }
  if (iVar1 < 2) {
    piVar9 = piVar10;
  }
  if ((piVar9 != (int *)&UNK_10e4e3f58) && (*piVar9 <= iVar1)) {
    return (undefined8 *)(ulong)*(byte *)(piVar9 + 1);
  }
  puVar3 = (undefined8 *)&UNK_10f61d92d;
  func_0x0001093fd0ac();
  uStack_18 = 0x10a91c0f8;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar1 = *(int *)(puVar3 + 0xb);
  if (iVar1 == 3) {
    uStack_38 = NEON_rev64(puVar3[2],4);
    uStack_30 = *(undefined4 *)(puVar3 + 3);
    extraout_x8[1] = 0;
    extraout_x8[2] = 0;
    *extraout_x8 = 0;
    puVar5 = &uStack_2c;
    uVar6 = 3;
LAB_10a91c1b4:
    puVar3 = extraout_x8;
    puStack_20 = &stack0xfffffffffffffff0;
    FUN_10a14d944(extraout_x8,&uStack_38,puVar5,uVar6);
  }
  else {
    if (iVar1 == 2) {
      uStack_38 = CONCAT44(*(undefined4 *)(puVar3 + 3),*(undefined4 *)(puVar3 + 2));
      extraout_x8[1] = 0;
      extraout_x8[2] = 0;
      *extraout_x8 = 0;
      puVar5 = &uStack_30;
      uVar6 = 2;
      goto LAB_10a91c1b4;
    }
    if (iVar1 == 1) {
      uStack_38 = CONCAT44(uStack_38._4_4_,*(undefined4 *)(puVar3 + 3));
      extraout_x8[1] = 0;
      extraout_x8[2] = 0;
      *extraout_x8 = 0;
      puVar5 = (undefined4 *)((long)&uStack_38 + 4);
      uVar6 = 1;
      goto LAB_10a91c1b4;
    }
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    extraout_x8[2] = 0;
    puStack_20 = &stack0xfffffffffffffff0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  iVar1 = *(int *)((long)puVar3 + 0x24);
  piVar9 = (int *)&UNK_10e4e3f5c;
  if (iVar1 < 2) {
    piVar10 = (int *)&UNK_10e4e3f6c;
  }
  else {
    piVar10 = piVar9;
    piVar9 = (int *)&UNK_10e4e3f7c;
  }
  if (iVar1 < 1) {
    piVar9 = piVar10;
  }
  if ((piVar9 != (int *)&UNK_10e4e3f7c) && (*piVar9 <= iVar1)) {
    piVar9 = piVar9 + 1;
    lVar7 = (long)*(int *)(puVar3 + 0xb);
    piVar10 = piVar9 + lVar7;
    extraout_x8_00[1] = 0;
    extraout_x8_00[2] = 0;
    *extraout_x8_00 = 0;
    puVar3 = extraout_x8_00;
    if (lVar7 != 0) {
      FUN_109ffe268(extraout_x8_00,lVar7);
      piVar8 = (int *)extraout_x8_00[1];
      for (; piVar9 != piVar10; piVar9 = piVar9 + 1) {
        *piVar8 = *piVar9;
        piVar8 = piVar8 + 1;
      }
      extraout_x8_00[1] = piVar8;
    }
    return puVar3;
  }
  plVar4 = (long *)&UNK_10f61d92d;
  func_0x0001093fd0ac();
  (**(code **)(*plVar4 + 0x18))(&puStack_88);
  (**(code **)(*plVar4 + 0x20))(&lStack_a0,plVar4);
  uStack_a4 = 1;
  FUN_10a4094c0(extraout_x8_01,(long)(int)plVar4[0xb],&uStack_a4);
  if ((int)plVar4[0xb] < 2) {
    if (lStack_a0 == 0) goto LAB_10a91c358;
  }
  else {
    lVar7 = *extraout_x8_01;
    uVar11 = extraout_x8_01[1] - lVar7 >> 2;
    uVar12 = (int)plVar4[0xb] - 1;
    do {
      if (((((ulong)(lStack_98 - lStack_a0 >> 2) <= (ulong)uVar12) ||
           (uVar14 = (ulong)*(int *)(lStack_a0 + (ulong)uVar12 * 4), uVar11 <= uVar14)) ||
          ((ulong)((long)puStack_80 - (long)puStack_88 >> 2) <= uVar14)) ||
         (uVar13 = (ulong)*(int *)(lStack_a0 + (ulong)(uVar12 - 1) * 4), uVar11 <= uVar13)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a91c37c);
        (*pcVar2)();
      }
      *(int *)(lVar7 + uVar13 * 4) =
           *(int *)(lVar7 + uVar14 * 4) * *(int *)((long)puStack_88 + uVar14 * 4);
      uVar12 = uVar12 - 1;
    } while (0 < (int)uVar12);
  }
  lStack_98 = lStack_a0;
  __ZdlPv();
LAB_10a91c358:
  if (puStack_88 != (undefined8 *)0x0) {
    puStack_80 = puStack_88;
    __ZdlPv();
  }
  return puStack_88;
}



/* Entry: 10a91c270; end: 10a91c3af;  */

void FUN_10a91c270(long *param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 uStack_54;
  long lStack_50;
  long lStack_48;
  long lStack_38;
  long lStack_30;
  
  (**(code **)(*param_2 + 0x18))(&lStack_38);
  (**(code **)(*param_2 + 0x20))(&lStack_50,param_2);
  uStack_54 = 1;
  FUN_10a4094c0(param_1,(long)(int)param_2[0xb],&uStack_54);
  if ((int)param_2[0xb] < 2) {
    if (lStack_50 == 0) goto LAB_10a91c358;
  }
  else {
    lVar1 = *param_1;
    uVar3 = param_1[1] - lVar1 >> 2;
    uVar4 = (int)param_2[0xb] - 1;
    do {
      if (((((ulong)(lStack_48 - lStack_50 >> 2) <= (ulong)uVar4) ||
           (uVar6 = (ulong)*(int *)(lStack_50 + (ulong)uVar4 * 4), uVar3 <= uVar6)) ||
          ((ulong)(lStack_30 - lStack_38 >> 2) <= uVar6)) ||
         (uVar5 = (ulong)*(int *)(lStack_50 + (ulong)(uVar4 - 1) * 4), uVar3 <= uVar5)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a91c37c);
        (*pcVar2)();
      }
      *(int *)(lVar1 + uVar5 * 4) = *(int *)(lVar1 + uVar6 * 4) * *(int *)(lStack_38 + uVar6 * 4);
      uVar4 = uVar4 - 1;
    } while (0 < (int)uVar4);
  }
  lStack_48 = lStack_50;
  __ZdlPv();
LAB_10a91c358:
  if (lStack_38 != 0) {
    lStack_30 = lStack_38;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a91c3b0; end: 10a91c3bf;  */

undefined8 FUN_10a91c3b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10a91c3c0; end: 10a91c447;  */

void FUN_10a91c3c0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_80 [80];
  
  uVar1 = 0x60;
  __Znwm();
  FUN_109d0f438(auStack_80,param_2 + 8);
  FUN_10a91bef4(uVar1,auStack_80,*(undefined4 *)(param_2 + 0x58));
  *param_1 = uVar1;
  func_0x000105675c90(auStack_80);
  return;
}



/* Entry: 10a91c448; end: 10a91c5cf;  */

void FUN_10a91c448(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined **appuStack_d0 [4];
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [8];
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  uint uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  int *piStack_50;
  int *piStack_48;
  byte bStack_38;
  
  FUN_109d0eb9c(auStack_80,param_2 + 0x10,param_2 + 0x20);
  if ((bStack_38 & 1) == 0) {
    iStack_78 = iStack_70 * iStack_6c * iStack_74 * iStack_78;
  }
  else {
    iStack_78 = 1;
    for (; piStack_50 != piStack_48; piStack_50 = piStack_50 + 1) {
      iStack_78 = *piStack_50 * iStack_78;
    }
  }
  if (uStack_68 < 0xf) {
    if (*(int *)(&UNK_10e4e43d4 + (ulong)uStack_68 * 4) * iStack_78 != 0) {
      _bzero(uStack_60);
    }
    uVar5 = 0x60;
    __Znwm();
    appuStack_d0[0] = &PTR_DAT_1108a5c28;
    lStack_a8 = lStack_58;
    uStack_b0 = uStack_60;
    if (lStack_58 != 0) {
      plVar1 = (long *)(lStack_58 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a072330(auStack_a0,&piStack_50);
    FUN_10a91bef4(uVar5,appuStack_d0,*(undefined4 *)(param_2 + 0x58));
    *param_1 = uVar5;
    func_0x000105675c90(appuStack_d0);
    func_0x000105675c90(auStack_80);
    return;
  }
  func_0x00010952d0c4(&UNK_10dfd21d7,&UNK_10f57311a,&UNK_10f573129);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a91c590);
  (*pcVar4)();
}



/* Entry: 10a91c5d0; end: 10a91c647;  */

undefined8 FUN_10a91c5d0(void)

{
  return 0;
}



/* Entry: 10a91c648; end: 10a91cc13;  */

undefined *** FUN_10a91c648(undefined ***param_1)

{
  long *plVar1;
  undefined8 *******pppppppuVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined ***pppuVar8;
  undefined **ppuVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined **ppuVar14;
  undefined8 *******pppppppuVar15;
  undefined8 ******ppppppuVar16;
  undefined ***extraout_x8;
  undefined8 *extraout_x8_00;
  long lVar17;
  code **ppcVar18;
  undefined8 *****pppppuVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined ***pppuStack_1d8;
  undefined ***pppuStack_1d0;
  long *plStack_1c8;
  undefined8 uStack_1c0;
  undefined8 ******ppppppuStack_1b8;
  code **ppcStack_1b0;
  undefined ***pppuStack_1a8;
  undefined1 ***pppuStack_1a0;
  code *pcStack_198;
  code *pcStack_188;
  undefined **ppuStack_180;
  code **ppcStack_178;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 ******ppppppuStack_138;
  undefined8 *****pppppuStack_130;
  undefined ***pppuStack_128;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 ******ppppppuStack_108;
  undefined *puStack_100;
  undefined ***pppuStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 ******appppppuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 ******ppppppuStack_a0;
  undefined8 ******ppppppuStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000109887da8(appppppuStack_c8,&UNK_10f682e81,6);
  pppppppuVar15 = (undefined8 *******)appppppuStack_c8[0];
  if (-1 < cStack_b1) {
    pppppppuVar15 = appppppuStack_c8;
  }
  param_1[0x36] = &PTR_DAT_110c2f880;
  pppppppuVar2 = (undefined8 *******)&UNK_10f682e30;
  if (pppppppuVar15 != (undefined8 *******)0x0) {
    pppppppuVar2 = pppppppuVar15;
  }
  func_0x000107c2c4dc(param_1 + 0x37,pppppppuVar2);
  ppppppuStack_98 = (undefined8 ******)0x0;
  pcStack_90 = (code *)0x0;
  uStack_d8 = 0xffffffffffffffff;
  uStack_e0 = 0x100000019;
  uStack_80 = (undefined *)0xffffffffffffffff;
  uStack_88 = (undefined *)0x100000019;
  puStack_70 = (undefined *)0x0;
  puStack_78 = (undefined *)0x0;
  puStack_60 = (undefined *)0x0;
  puStack_68 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_54 = 0x16b;
  uStack_50 = 0xffffffff;
  puStack_48 = (undefined *)0x0;
  puStack_40 = (undefined *)0x0;
  ppppppuStack_a0 = pppppppuVar15;
  func_0x00010a052690(param_1 + 0x2d,&ppppppuStack_a0);
  pppuVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar8 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c2f880;
    uStack_a8 = 0;
    ppppppuStack_a0 = (undefined8 ******)&PTR_DAT_110b178e0;
    ppppppuStack_98 = (undefined8 ******)0x0;
    pcStack_90 = (code *)CONCAT71(pcStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppppppuVar15,&ppuStack_b0,&ppppppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appppppuStack_c8[0]);
  }
  pppuVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar8 & 1) == 0) {
    func_0x00010a06ba0c(param_1,FUN_10a93cb5c,2,1);
  }
  pppuVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar8 & 1) == 0) {
    if (((ulong)param_1[0xf] & 1) == 0) goto LAB_10a91cbe8;
    FUN_10a054dac(param_1,&DAT_10f648172,FUN_10a93ce10,1,param_1[8]);
  }
  pppuVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar8 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f682e62,FUN_10a93cf3c,0);
  }
  pppuVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar8 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f682e5c,FUN_10a93d06c,0);
  }
  pppuVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar8 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f682e6b,FUN_10a93d1d4,0);
  }
  pppuVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar8 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f56f78c,FUN_10a93d284,0);
  }
  pppuVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar8 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f2d0f2f,FUN_10a93d334,0);
  }
  pppuVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar8 & 1) == 0) {
    FUN_10a0605c4(param_1,"rank",FUN_10a93d3fc,0);
  }
  pppuVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar8 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f682e74,FUN_10a93d4c4,0);
  }
  pppuVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)pppuVar8 & 1) == 0) {
    FUN_10a0605c4(param_1,"data",FUN_10a93d58c,0);
  }
  param_1[0x36] = (undefined **)PTR___ZTIDn_1103469e8;
  ppuVar9 = param_1[0x2e];
  if (param_1[0x2d] != ppuVar9) {
    ppppppuStack_98 = (undefined8 ******)ppuVar9[-0xc];
    ppppppuStack_a0 = (undefined8 ******)ppuVar9[-0xd];
    puStack_78 = ppuVar9[-8];
    puVar20 = ppuVar9[-9];
    puVar21 = ppuVar9[-10];
    pcStack_90 = (code *)ppuVar9[-0xb];
    puStack_68 = ppuVar9[-6];
    puStack_70 = ppuVar9[-7];
    puStack_60 = ppuVar9[-5];
    puStack_40 = ppuVar9[-1];
    puStack_48 = ppuVar9[-2];
    puVar22 = ppuVar9[-3];
    uStack_58 = SUB84(ppuVar9[-4],0);
    uStack_54 = (undefined4)((ulong)ppuVar9[-4] >> 0x20);
    uStack_50 = SUB84(puVar22,0);
    uStack_4c = (undefined4)((ulong)puVar22 >> 0x20);
    param_1[0x2e] = ppuVar9 + -0xd;
    uStack_88._4_4_ = (undefined4)((ulong)puVar21 >> 0x20);
    uVar5 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)((ulong)puVar20 >> 0x20);
    uVar6 = uStack_80._4_4_;
    pppuVar8 = param_1;
    uStack_88 = puVar21;
    uStack_80 = puVar20;
    FUN_10a0051e8(param_1,(ulong)puVar21 & 0xffffffff,uVar5,(ulong)puVar22 & 0xffffffff,
                  (ulong)puVar20 & 0xffffffff,uVar6);
    if (((ulong)pppuVar8 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppppppuStack_a0,param_1 + 0x37,&UNK_10f682e81,6);
      FUN_10a05431c(param_1);
    }
    ppppppuStack_98 = (undefined8 ******)0x0;
    pcStack_90 = (code *)0x0;
    ppppppuStack_a0 = (undefined8 ******)&UNK_10f682e81;
    uStack_80 = (undefined *)uStack_d8;
    uStack_88 = (undefined *)uStack_e0;
    puStack_70 = (undefined *)0x0;
    puStack_78 = (undefined *)0x0;
    puStack_60 = (undefined *)0x0;
    puStack_68 = (undefined *)0x0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0xffffffff;
    puStack_48 = (undefined *)0x0;
    puStack_40 = (undefined *)0x0;
    func_0x00010a004eb4(param_1,&ppppppuStack_a0);
    pppuVar8 = param_1;
    FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)pppuVar8 & 1) == 0) {
      ppppppuStack_a0 = (undefined8 ******)FUN_10a93d6cc;
      ppppppuStack_98 = (undefined8 ******)&PTR_FUN_110c2f728;
      pcStack_90 = FUN_10a91cc14;
      if (param_1[2] == param_1[3]) goto LAB_10a91cbe8;
      FUN_10a0544d8(param_1,&UNK_10f682e88,&ppppppuStack_a0,1,param_1[3] + -1);
      (*(code *)*ppppppuStack_98)(&ppppppuStack_98);
    }
    appppppuStack_c8[0] = (undefined8 ******)&UNK_10f593a86;
    ppppppuStack_a0 = (undefined8 ******)&UNK_10f64f5cc;
    pcStack_90 = (code *)0x1;
    uStack_80 = (undefined *)uStack_d8;
    uStack_88 = (undefined *)uStack_e0;
    puStack_70 = (undefined *)0x0;
    puStack_78 = (undefined *)0x0;
    puStack_60 = (undefined *)0x0;
    puStack_68 = (undefined *)0x0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0xffffffff;
    puStack_48 = (undefined *)0x0;
    puStack_40 = (undefined *)0x0;
    ppppppuStack_98 = appppppuStack_c8;
    FUN_10a91cc84(param_1,&ppppppuStack_a0,FUN_10a91cd54);
    appppppuStack_c8[0] = (undefined8 ******)&UNK_10f593a86;
    ppppppuStack_a0 = (undefined8 ******)&UNK_10f682e9d;
    pcStack_90 = (code *)0x1;
    uStack_80 = (undefined *)uStack_d8;
    uStack_88 = (undefined *)uStack_e0;
    puStack_70 = (undefined *)0x0;
    puStack_78 = (undefined *)0x0;
    puStack_60 = (undefined *)0x0;
    puStack_68 = (undefined *)0x0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0xffffffff;
    puStack_48 = (undefined *)0x0;
    puStack_40 = (undefined *)0x0;
    pcVar7 = FUN_10a91ceb8;
    pppppppuVar15 = &ppppppuStack_a0;
    ppppppuStack_98 = appppppuStack_c8;
    FUN_10a91cc84(param_1);
    func_0x00010a004064();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return param_1;
    }
    ___stack_chk_fail();
    if (cStack_b1 < '\0') {
      __ZdlPv(appppppuStack_c8[0]);
    }
    __Unwind_Resume();
    uStack_110 = 0xffffffff;
    puStack_100 = &UNK_10f593a86;
    pcStack_e8 = FUN_10a91cc14;
    ppuStack_120 = &puStack_f0;
    pppppuStack_130 = *pppppppuVar15;
    ppppppuStack_108 = appppppuStack_c8;
    pppuStack_f8 = param_1;
    puStack_f0 = &stack0xfffffffffffffff0;
    if ((undefined8 ******)pppppuStack_130 != (undefined8 ******)0x0) {
      ppuVar9 = (undefined **)0x40;
      __Znwm();
      FUN_10a91d5dc();
      *extraout_x8 = ppuVar9;
      ppuVar14 = (undefined **)0x20;
      __Znwm();
      *ppuVar14 = (undefined *)&PTR_FUN_110c2f768;
      ppuVar14[1] = (undefined *)0x0;
      ppuVar14[2] = (undefined *)0x0;
      ppuVar14[3] = (undefined *)ppuVar9;
      extraout_x8[1] = ppuVar14;
      return extraout_x8;
    }
    pppuVar8 = (undefined ***)&UNK_10f682ec6;
    FUN_10a00946c();
    __ZdlPv(appppppuStack_c8);
    pppuVar10 = pppuVar8;
    __Unwind_Resume();
    uStack_140 = 0xffffffff;
    pcStack_118 = FUN_10a91cc84;
    lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppppppuVar16 = (undefined8 ******)(ulong)*(uint *)(pppppppuVar15 + 3);
    pppuVar11 = pppuVar10;
    ppppppuStack_138 = appppppuStack_c8;
    pppuStack_128 = pppuVar8;
    FUN_10a0051e8();
    ppcVar18 = (code **)pcVar7;
    if (((ulong)pppuVar11 & 1) == 0) {
      ppppppuVar16 = *pppppppuVar15;
      pcStack_188 = FUN_10a93d8e0;
      ppuStack_180 = &PTR_FUN_110c2f740;
      ppcStack_178 = (code **)pcVar7;
      if (pppuVar10[2] == pppuVar10[3]) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10a91cd50);
        (*pcVar7)();
      }
      ppcVar18 = &pcStack_188;
      FUN_10a0544d8(pppuVar10,ppppppuVar16,&pcStack_188,1,pppuVar10[3] + -1);
      pppuVar11 = &ppuStack_180;
      (*(code *)*ppuStack_180)();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
      return pppuVar10;
    }
    ___stack_chk_fail();
    uStack_1c0 = 0xffffffff;
    pcStack_198 = FUN_10a91cd54;
    pppppuVar19 = *ppppppuVar16;
    if (pppppuVar19 == (undefined8 *****)0x0) {
      *extraout_x8_00 = 0;
      extraout_x8_00[1] = 0;
    }
    else {
      ppuVar9 = pppuVar11[0x10e];
      uVar12 = 0x40;
      ppppppuStack_1b8 = pppppppuVar15;
      ppcStack_1b0 = ppcVar18;
      pppuStack_1a8 = pppuVar10;
      pppuStack_1a0 = &ppuStack_120;
      __Znwm(0x40);
      (*(code *)(*pppppuVar19[6])[8])(&pppuStack_1d8);
      pppuStack_1d0 = pppuStack_1d8;
      if (pppuStack_1d8 == (undefined ***)0x0) {
        plVar13 = (long *)0x0;
      }
      else {
        plVar13 = (long *)0x20;
        __Znwm();
        *plVar13 = (long)&PTR_DAT_110c2f7e0;
        plVar13[1] = 0;
        plVar13[2] = 0;
        plVar13[3] = (long)pppuStack_1d8;
      }
      pppuStack_1d8 = (undefined ***)0x0;
      plStack_1c8 = plVar13;
      FUN_10a91d01c(uVar12,ppuVar9,&pppuStack_1d0);
      FUN_10a93dcec(extraout_x8_00,uVar12);
      plVar13 = plStack_1c8;
      if (plStack_1c8 != (long *)0x0) {
        plVar1 = plStack_1c8 + 1;
        do {
          lVar17 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar17 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plStack_1c8 + 0x10))(plStack_1c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
      pppuVar11 = pppuStack_1d8;
      pppuStack_1d8 = (undefined ***)0x0;
      if (pppuVar11 != (undefined ***)0x0) {
        (*(code *)(*pppuVar11)[0xc])();
      }
    }
    return pppuVar11;
  }
LAB_10a91cbe8:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a91cbec);
  (*pcVar7)();
}



/* Entry: 10a91cc14; end: 10a91cc83;  */

undefined ***
FUN_10a91cc14(undefined ***param_1,undefined8 param_2,ulong *param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined **ppuVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  long *plVar10;
  undefined8 *extraout_x8;
  long lVar11;
  undefined ***pppuStack_f8;
  undefined ***pppuStack_f0;
  long *plStack_e8;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  long lStack_68;
  
  if (*param_3 != 0) {
    ppuVar5 = (undefined **)0x40;
    __Znwm();
    FUN_10a91d5dc();
    *param_1 = ppuVar5;
    ppuVar9 = (undefined **)0x20;
    __Znwm();
    *ppuVar9 = (undefined *)&PTR_FUN_110c2f768;
    ppuVar9[1] = (undefined *)0x0;
    ppuVar9[2] = (undefined *)0x0;
    ppuVar9[3] = (undefined *)ppuVar5;
    param_1[1] = ppuVar9;
    return param_1;
  }
  pppuVar6 = (undefined ***)&UNK_10f682ec6;
  FUN_10a00946c();
  __ZdlPv();
  __Unwind_Resume();
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = (long *)(ulong)(uint)param_3[3];
  pppuVar7 = pppuVar6;
  FUN_10a0051e8();
  if (((ulong)pppuVar7 & 1) == 0) {
    plVar10 = (long *)*param_3;
    pcStack_a8 = FUN_10a93d8e0;
    ppuStack_a0 = &PTR_FUN_110c2f740;
    uStack_98 = param_4;
    if (pppuVar6[2] == pppuVar6[3]) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a91cd50);
      (*pcVar4)();
    }
    FUN_10a0544d8(pppuVar6,plVar10,&pcStack_a8,1,pppuVar6[3] + -1);
    pppuVar7 = &ppuStack_a0;
    (*(code *)*ppuStack_a0)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pppuVar6;
  }
  ___stack_chk_fail();
  lVar11 = *plVar10;
  if (lVar11 == 0) {
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
  }
  else {
    ppuVar5 = pppuVar7[0x10e];
    uVar8 = 0x40;
    __Znwm(0x40);
    (**(code **)(**(long **)(lVar11 + 0x30) + 0x40))(&pppuStack_f8);
    pppuStack_f0 = pppuStack_f8;
    if (pppuStack_f8 == (undefined ***)0x0) {
      plVar10 = (long *)0x0;
    }
    else {
      plVar10 = (long *)0x20;
      __Znwm();
      *plVar10 = (long)&PTR_DAT_110c2f7e0;
      plVar10[1] = 0;
      plVar10[2] = 0;
      plVar10[3] = (long)pppuStack_f8;
    }
    pppuStack_f8 = (undefined ***)0x0;
    plStack_e8 = plVar10;
    FUN_10a91d01c(uVar8,ppuVar5,&pppuStack_f0);
    FUN_10a93dcec(extraout_x8,uVar8);
    plVar10 = plStack_e8;
    if (plStack_e8 != (long *)0x0) {
      plVar1 = plStack_e8 + 1;
      do {
        lVar11 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    pppuVar7 = pppuStack_f8;
    pppuStack_f8 = (undefined ***)0x0;
    if (pppuVar7 != (undefined ***)0x0) {
      (*(code *)(*pppuVar7)[0xc])();
    }
  }
  return pppuVar7;
}



/* Entry: 10a91cc84; end: 10a91cd53;  */

undefined *** FUN_10a91cc84(undefined ***param_1,ulong *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined ***pppuVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *extraout_x8;
  undefined **ppuVar8;
  long lVar9;
  undefined ***pppuStack_c8;
  undefined ***pppuStack_c0;
  long *plStack_b8;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = (long *)(ulong)(uint)param_2[3];
  pppuVar5 = param_1;
  FUN_10a0051e8(param_1,plVar7,*(undefined4 *)((long)param_2 + 0x1c),(int)param_2[10],
                (int)param_2[4],*(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)pppuVar5 & 1) == 0) {
    plVar7 = (long *)*param_2;
    pcStack_78 = FUN_10a93d8e0;
    ppuStack_70 = &PTR_FUN_110c2f740;
    uStack_68 = param_3;
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a91cd50);
      (*pcVar4)();
    }
    FUN_10a0544d8(param_1,plVar7,&pcStack_78,1,param_1[3] + -1);
    pppuVar5 = &ppuStack_70;
    (*(code *)*ppuStack_70)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar9 = *plVar7;
  if (lVar9 == 0) {
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
  }
  else {
    ppuVar8 = pppuVar5[0x10e];
    uVar6 = 0x40;
    __Znwm(0x40);
    (**(code **)(**(long **)(lVar9 + 0x30) + 0x40))(&pppuStack_c8);
    pppuStack_c0 = pppuStack_c8;
    if (pppuStack_c8 == (undefined ***)0x0) {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = (long *)0x20;
      __Znwm();
      *plVar7 = (long)&PTR_DAT_110c2f7e0;
      plVar7[1] = 0;
      plVar7[2] = 0;
      plVar7[3] = (long)pppuStack_c8;
    }
    pppuStack_c8 = (undefined ***)0x0;
    plStack_b8 = plVar7;
    FUN_10a91d01c(uVar6,ppuVar8,&pppuStack_c0);
    FUN_10a93dcec(extraout_x8,uVar6);
    plVar7 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar1 = plStack_b8 + 1;
      do {
        lVar9 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    pppuVar5 = pppuStack_c8;
    pppuStack_c8 = (undefined ***)0x0;
    if (pppuVar5 != (undefined ***)0x0) {
      (*(code *)(*pppuVar5)[0xc])();
    }
  }
  return pppuVar5;
}



/* Entry: 10a91cd54; end: 10a91ceb7;  */

void FUN_10a91cd54(undefined8 *param_1,long param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar7 = *param_3;
  if (lVar7 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x870);
    uVar4 = 0x40;
    __Znwm(0x40);
    (**(code **)(**(long **)(lVar7 + 0x30) + 0x40))(&plStack_48);
    plStack_40 = plStack_48;
    if (plStack_48 == (long *)0x0) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = (long *)0x20;
      __Znwm();
      *plVar5 = (long)&PTR_DAT_110c2f7e0;
      plVar5[1] = 0;
      plVar5[2] = 0;
      plVar5[3] = (long)plStack_48;
    }
    plStack_48 = (long *)0x0;
    plStack_38 = plVar5;
    FUN_10a91d01c(uVar4,uVar6,&plStack_40);
    FUN_10a93dcec(param_1,uVar4);
    plVar5 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    plVar5 = plStack_48;
    plStack_48 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x60))();
    }
  }
  return;
}



/* Entry: 10a91ceb8; end: 10a91d01b;  */

void FUN_10a91ceb8(undefined8 *param_1,long param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar7 = *param_3;
  if (lVar7 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x870);
    uVar4 = 0x40;
    __Znwm(0x40);
    (**(code **)(**(long **)(lVar7 + 0x30) + 0x48))(&plStack_48);
    plStack_40 = plStack_48;
    if (plStack_48 == (long *)0x0) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = (long *)0x20;
      __Znwm();
      *plVar5 = (long)&PTR_DAT_110c2f7e0;
      plVar5[1] = 0;
      plVar5[2] = 0;
      plVar5[3] = (long)plStack_48;
    }
    plStack_48 = (long *)0x0;
    plStack_38 = plVar5;
    FUN_10a91d01c(uVar4,uVar6,&plStack_40);
    FUN_10a93dcec(param_1,uVar4);
    plVar5 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    plVar5 = plStack_48;
    plStack_48 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x60))();
    }
  }
  return;
}



/* Entry: 10a91d01c; end: 10a91d0eb;  */

undefined8 * FUN_10a91d01c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar3 = *param_3;
  param_1[7] = param_3[1];
  param_1[6] = uVar3;
  *param_1 = &PTR_FUN_110c2ea78;
  *param_3 = 0;
  param_3[1] = 0;
  puVar2 = (undefined8 *)param_1[6];
  (**(code **)*puVar2)();
  if (0 < (int)puVar2) {
    FUN_10a91d0ec(param_1,param_2);
    return param_1;
  }
  FUN_10a00946c(&UNK_10f682ea7);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a91d0bc);
  (*pcVar1)();
}



/* Entry: 10a91d0ec; end: 10a91d5db;  */

int * FUN_10a91d0ec(long param_1,undefined **param_2,code **param_3)

{
  long *plVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  code *pcVar9;
  undefined **ppuVar10;
  long *plVar11;
  undefined **ppuVar12;
  int *piVar13;
  undefined **ppuVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  int *piVar19;
  code *pcVar20;
  ulong uVar21;
  code **ppcVar22;
  code **ppcVar23;
  undefined **unaff_x23;
  code **ppcVar24;
  undefined *puVar25;
  undefined8 unaff_x25;
  undefined **unaff_x26;
  long *plStack_1c8;
  long *plStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined **ppuStack_1a0;
  undefined8 uStack_198;
  code **ppcStack_190;
  undefined **ppuStack_188;
  code **ppcStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  undefined **ppuStack_138;
  code *pcStack_130;
  long *plStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_108;
  long lStack_100;
  int *piStack_f0;
  int *piStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar14 = param_2;
  (**(code **)(**(long **)(param_1 + 0x30) + 0x20))(&piStack_f0);
  (**(code **)(**(long **)(param_1 + 0x30) + 0x18))(&lStack_108);
  (**(code **)(**(long **)(param_1 + 0x30) + 0x28))(&lStack_120);
  if (((piStack_e8 == piStack_f0) ||
      (uVar16 = (ulong)*piStack_f0, (ulong)(lStack_100 - lStack_108 >> 2) <= uVar16)) ||
     ((ulong)(lStack_118 - lStack_120 >> 2) <= uVar16)) {
LAB_10a91d4ec:
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x10a91d4f0);
    (*pcVar9)();
  }
  iVar15 = *(int *)(lStack_108 + uVar16 * 4);
  ppcVar22 = (code **)(long)iVar15;
  iVar4 = *(int *)(lStack_120 + uVar16 * 4);
  ppcVar24 = (code **)(long)iVar4;
  ppuVar10 = *(undefined ***)(param_1 + 0x30);
  (**(code **)(*ppuVar10 + 0x30))();
  ppuVar12 = ppuVar10;
  if (ppuVar10 == (undefined **)0x0) {
    pcStack_a8 = (code *)0x0;
    ppuStack_a0 = (undefined **)0x0;
    ppuVar14 = (undefined **)(param_1 + 0x18);
    param_3 = &pcStack_a8;
    func_0x00010a924570(param_1 + 0x18);
    param_2 = ppuStack_a0;
    if (ppuStack_a0 != (undefined **)0x0) {
      ppuVar10 = ppuStack_a0 + 1;
      do {
        puVar25 = *ppuVar10;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
        if (bVar6) {
          *ppuVar10 = puVar25 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_10a91d468:
      if (puVar25 == (undefined *)0x0) {
        (**(code **)(*param_2 + 0x10))(param_2);
        __ZNSt3__119__shared_weak_count14__release_weakEv(param_2);
      }
    }
  }
  else {
    plVar11 = *(long **)(param_1 + 0x30);
    (**(code **)(*plVar11 + 0x10))();
    unaff_x23 = &puStack_c8;
    ppcVar23 = (code **)((long)iVar4 * (long)iVar15);
    if ((int)plVar11 == 1) {
      unaff_x25 = *(undefined8 *)(param_1 + 0x30);
      unaff_x26 = *(undefined ***)(param_1 + 0x38);
      if (unaff_x26 != (undefined **)0x0) {
        ppuVar14 = unaff_x26 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
          if (bVar6) {
            *ppuVar14 = *ppuVar14 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      puVar25 = param_2[0xd];
      uStack_150 = unaff_x25;
      ppuStack_148 = unaff_x26;
      __ZNSt3__115recursive_mutex4lockEv(param_2 + 0xe);
      if ((*(byte *)(*(long *)(puVar25 + 0xb8) + 0x1e0) & 1) == 0) goto LAB_10a91d4ec;
      uStack_150 = 0;
      ppuStack_148 = (undefined **)0x0;
      ppcVar24 = &pcStack_a8;
      pcStack_a8 = FUN_10a924cb4;
      ppuStack_a0 = &PTR_DAT_110c2f148;
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_98 = unaff_x25;
      ppuStack_90 = unaff_x26;
      func_0x00010a9245e8(&puStack_c8,*(undefined8 *)(*(long *)(puVar25 + 0xb8) + 0x50),ppuVar10,
                          ppcVar23,&pcStack_a8);
      ppuVar12 = (undefined **)0x38;
      __Znwm();
      ppuVar12[1] = (undefined *)0x0;
      ppuVar12[2] = (undefined *)0x0;
      *ppuVar12 = (undefined *)&PTR_DAT_110c2f8a8;
      ppcVar22 = (code **)(ppuVar12 + 3);
      ppuVar12[4] = puStack_c0;
      ppuVar12[3] = puStack_c8;
      ppuVar12[6] = puStack_b0;
      ppuVar12[5] = puStack_b8;
      puStack_b8 = (undefined *)0x0;
      puStack_b0 = (undefined *)0x0;
      (*(code *)*ppuStack_a0)(&ppuStack_a0);
      __ZNSt3__115recursive_mutex6unlockEv(param_2 + 0xe);
      if (*(int *)(param_1 + 0x28) == 1) {
        plVar11 = *(long **)(param_1 + 0x20);
        *(code ***)(param_1 + 0x18) = ppcVar22;
        *(undefined ***)(param_1 + 0x20) = ppuVar12;
        if (plVar11 != (long *)0x0) {
          plVar1 = plVar11 + 1;
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
            (**(code **)(*plVar11 + 0x10))(plVar11);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
      }
      else {
        FUN_10a92447c(param_1 + 0x18);
        *(code ***)(param_1 + 0x18) = ppcVar22;
        *(undefined ***)(param_1 + 0x20) = ppuVar12;
        *(undefined4 *)(param_1 + 0x28) = 1;
      }
      ppuVar14 = ppuVar10;
      param_3 = ppcVar23;
      param_2 = ppuStack_148;
      if (ppuStack_148 != (undefined **)0x0) {
        ppuVar10 = ppuStack_148 + 1;
        do {
          puVar25 = *ppuVar10;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
          if (bVar6) {
            *ppuVar10 = puVar25 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        goto LAB_10a91d468;
      }
    }
    else {
      ppcVar22 = ppcVar23;
      if ((int)plVar11 == 0) {
        unaff_x25 = *(undefined8 *)(param_1 + 0x30);
        unaff_x26 = *(undefined ***)(param_1 + 0x38);
        if (unaff_x26 != (undefined **)0x0) {
          ppuVar14 = unaff_x26 + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
            if (bVar6) {
              *ppuVar14 = *ppuVar14 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        puVar25 = param_2[0xd];
        uStack_140 = unaff_x25;
        ppuStack_138 = unaff_x26;
        __ZNSt3__115recursive_mutex4lockEv(param_2 + 0xe);
        if ((*(byte *)(*(long *)(puVar25 + 0xb8) + 0x1e0) & 1) == 0) goto LAB_10a91d4ec;
        uStack_140 = 0;
        ppuStack_138 = (undefined **)0x0;
        ppcVar24 = &pcStack_a8;
        pcStack_a8 = (code *)0x10a9245c0;
        ppuStack_a0 = &PTR_DAT_110c2f130;
        uStack_d8 = 0;
        uStack_d0 = 0;
        uStack_98 = unaff_x25;
        ppuStack_90 = unaff_x26;
        FUN_10a12d658(&puStack_c8,*(undefined8 *)(*(long *)(puVar25 + 0xb8) + 0x50),ppuVar10,
                      ppcVar23,&pcStack_a8);
        plVar11 = (long *)0x38;
        __Znwm();
        plVar11[4] = (long)puStack_c0;
        plVar11[3] = (long)puStack_c8;
        plVar11[1] = 0;
        plVar11[2] = 0;
        *plVar11 = (long)&PTR_FUN_110ba7a48;
        pcStack_130 = (code *)(plVar11 + 3);
        plVar11[6] = (long)puStack_b0;
        plVar11[5] = (long)puStack_b8;
        puStack_b8 = (undefined *)0x0;
        puStack_b0 = (undefined *)0x0;
        plStack_128 = plVar11;
        (*(code *)*ppuStack_a0)(&ppuStack_a0);
        __ZNSt3__115recursive_mutex6unlockEv(param_2 + 0xe);
        ppuVar14 = (undefined **)(param_1 + 0x18);
        param_3 = &pcStack_130;
        func_0x00010a924570(param_1 + 0x18);
        plVar11 = plStack_128;
        if (plStack_128 != (long *)0x0) {
          plVar1 = plStack_128 + 1;
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
            (**(code **)(*plStack_128 + 0x10))(plStack_128);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
        param_2 = ppuStack_138;
        if (ppuStack_138 != (undefined **)0x0) {
          ppuVar10 = ppuStack_138 + 1;
          do {
            puVar25 = *ppuVar10;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
            if (bVar6) {
              *ppuVar10 = puVar25 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          goto LAB_10a91d468;
        }
      }
    }
  }
  if (lStack_120 != 0) {
    lStack_118 = lStack_120;
    __ZdlPv();
  }
  if (lStack_108 != 0) {
    lStack_100 = lStack_108;
    __ZdlPv();
  }
  piVar13 = piStack_f0;
  if (piStack_f0 != (int *)0x0) {
    piStack_e8 = piStack_f0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return piVar13;
  }
  ___stack_chk_fail();
  FUN_10a12c460(&puStack_b8);
  (*(code *)*ppuStack_a0)(ppcVar24 + 1);
  func_0x00010a93dbf4(&uStack_d8);
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 0xe);
  func_0x00010a93dbf4(&uStack_150);
  if (lStack_120 != 0) {
    lStack_118 = lStack_120;
    __ZdlPv();
  }
  if (lStack_108 != 0) {
    lStack_100 = lStack_108;
    __ZdlPv();
  }
  if (piStack_f0 != (int *)0x0) {
    piStack_e8 = piStack_f0;
    __ZdlPv();
  }
  __Unwind_Resume(piVar13);
  pcStack_158 = FUN_10a91d5dc;
  pcVar9 = param_3[3];
  uVar16 = (long)param_3[4] - (long)pcVar9;
  ppuStack_1a0 = unaff_x26;
  uStack_198 = unaff_x25;
  ppcStack_190 = ppcVar24;
  ppuStack_188 = unaff_x23;
  ppcStack_180 = ppcVar22;
  ppuStack_178 = ppuVar12;
  ppuStack_168 = param_2;
  puStack_160 = &stack0xfffffffffffffff0;
  if (uVar16 == 0 || 0xc < uVar16) {
    FUN_10a00946c(&UNK_10f683a75);
LAB_10a91d848:
    FUN_10a00946c(&UNK_10f683ae0);
  }
  else {
    bVar3 = *(byte *)(param_3 + 6);
    uVar17 = 1;
    pcVar20 = pcVar9;
    do {
      uVar21 = CONCAT44(0,*(uint *)pcVar20);
      if ((int)*(uint *)pcVar20 < 1) {
        FUN_10a00946c(&UNK_10f683a94);
        goto LAB_10a91d820;
      }
      if (uVar17 != 0) {
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar17;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar21;
        if (SUB168(auVar7 * auVar8,8) != 0) goto LAB_10a91d820;
        uVar17 = uVar17 * uVar21;
      }
      pcVar20 = pcVar20 + 4;
    } while (pcVar20 != param_3[4]);
    if (1 < bVar3) goto LAB_10a91d848;
    if (uVar17 != 0) {
      if (uVar17 >> 0x3e == 0) {
        if (0x4000000 < uVar17) {
          piVar13 = (int *)&UNK_10f683abd;
          FUN_10a00946c();
          func_0x00010a93dbf4(&plStack_1c8);
          __Unwind_Resume();
          *(undefined ***)piVar13 = &PTR_FUN_110c2efa0;
          if (*(long *)(piVar13 + 6) != 0) {
            *(long *)(piVar13 + 8) = *(long *)(piVar13 + 6);
            __ZdlPv();
          }
          *(undefined ***)piVar13 = &PTR_DAT_110b17898;
          func_0x00010a004dac(piVar13 + 2);
          return piVar13;
        }
        goto LAB_10a91d66c;
      }
LAB_10a91d820:
      FUN_10a00946c(&UNK_10f6818f4);
LAB_10a91d82c:
      func_0x0001093fd0ac(&UNK_10f61d92d);
      goto LAB_10a91d874;
    }
LAB_10a91d66c:
    plVar11 = (long *)0x78;
    __Znwm();
    plVar11[1] = 0;
    plVar11[2] = 0;
    *plVar11 = (long)&PTR_DAT_110c2f0f0;
    plVar11[3] = (long)&PTR_FUN_110c2ea00;
    pbVar2 = &UNK_10e4e3f34;
    if (bVar3 == 0) {
      pbVar2 = &UNK_10e4e3f3c;
    }
    if ((pbVar2 == &UNK_10e4e3f44) || (bVar3 < *pbVar2)) goto LAB_10a91d82c;
    uStack_1a8 = *(undefined4 *)(pbVar2 + 4);
    uStack_1a4 = 1;
    uVar16 = uVar16 >> 2;
    if (uVar16 == 3) {
      pcVar20 = pcVar9 + 8;
      uVar17 = (ulong)*(uint *)(pcVar9 + 4);
      uStack_1b8 = (ulong)*(uint *)pcVar9 << 0x20;
    }
    else {
      if (uVar16 == 2) {
        pcVar20 = pcVar9 + 4;
        uVar17 = (ulong)*(uint *)pcVar9;
      }
      else {
        uVar17 = 1;
        pcVar20 = pcVar9;
        if (uVar16 != 1) {
          FUN_10a00946c(&UNK_10f683a35);
          goto LAB_10a91d874;
        }
      }
      uStack_1b8 = 0x100000000;
    }
    uStack_1b8 = uStack_1b8 | uVar17;
    uStack_1b0 = (ulong)*(uint *)pcVar20 | 0x100000000;
    FUN_109d0eb9c(plVar11 + 4,&uStack_1b8,&uStack_1a8);
    if ((*(byte *)(plVar11 + 0xd) & 1) == 0) {
      iVar15 = (int)plVar11[6] * *(int *)((long)plVar11 + 0x34) * *(int *)((long)plVar11 + 0x2c) *
               (int)plVar11[5];
    }
    else {
      iVar15 = 1;
      for (piVar19 = (int *)plVar11[10]; piVar19 != (int *)plVar11[0xb]; piVar19 = piVar19 + 1) {
        iVar15 = *piVar19 * iVar15;
      }
    }
    if (*(uint *)(plVar11 + 7) < 0xf) {
      if (*(int *)(&UNK_10e4e43d4 + (ulong)*(uint *)(plVar11 + 7) * 4) * iVar15 != 0) {
        _bzero(plVar11[8]);
      }
      *(int *)(plVar11 + 0xe) = (int)((ulong)((long)param_3[4] - (long)param_3[3]) >> 2);
      plStack_1c8 = plVar11 + 3;
      plStack_1c0 = plVar11;
      FUN_10a91d01c(piVar13,ppuVar14,&plStack_1c8);
      plVar11 = plStack_1c0;
      if (plStack_1c0 != (long *)0x0) {
        plVar1 = plStack_1c0 + 1;
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
          (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      return piVar13;
    }
  }
  func_0x00010952d0c4(&UNK_10dfd21d7,&UNK_10f57311a,&UNK_10f573129);
LAB_10a91d874:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10a91d878);
  (*pcVar9)();
}



/* Entry: 10a91d5dc; end: 10a91d8bb;  */

undefined8 * FUN_10a91d5dc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  byte *pbVar2;
  uint *puVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  code *pcVar9;
  long *plVar10;
  undefined8 *puVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  int *piVar15;
  long lVar16;
  uint *puVar17;
  ulong uVar18;
  long *plStack_78;
  long *plStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  puVar3 = *(uint **)(param_3 + 0x18);
  uVar14 = (long)*(uint **)(param_3 + 0x20) - (long)puVar3;
  if (uVar14 == 0 || 0xc < uVar14) {
    FUN_10a00946c(&UNK_10f683a75);
LAB_10a91d848:
    FUN_10a00946c(&UNK_10f683ae0);
  }
  else {
    bVar4 = *(byte *)(param_3 + 0x30);
    uVar13 = 1;
    puVar17 = puVar3;
    do {
      uVar18 = CONCAT44(0,*puVar17);
      if ((int)*puVar17 < 1) {
        FUN_10a00946c(&UNK_10f683a94);
        goto LAB_10a91d820;
      }
      if (uVar13 != 0) {
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar13;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar18;
        if (SUB168(auVar7 * auVar8,8) != 0) goto LAB_10a91d820;
        uVar13 = uVar13 * uVar18;
      }
      puVar17 = puVar17 + 1;
    } while (puVar17 != *(uint **)(param_3 + 0x20));
    if (1 < bVar4) goto LAB_10a91d848;
    if (uVar13 != 0) {
      if (uVar13 >> 0x3e == 0) {
        if (0x4000000 < uVar13) {
          puVar11 = (undefined8 *)&UNK_10f683abd;
          FUN_10a00946c();
          func_0x00010a93dbf4(&plStack_78);
          __Unwind_Resume();
          *puVar11 = &PTR_FUN_110c2efa0;
          if (puVar11[3] != 0) {
            puVar11[4] = puVar11[3];
            __ZdlPv();
          }
          *puVar11 = &PTR_DAT_110b17898;
          func_0x00010a004dac(puVar11 + 1);
          return puVar11;
        }
        goto LAB_10a91d66c;
      }
LAB_10a91d820:
      FUN_10a00946c(&UNK_10f6818f4);
LAB_10a91d82c:
      func_0x0001093fd0ac(&UNK_10f61d92d);
      goto LAB_10a91d874;
    }
LAB_10a91d66c:
    plVar10 = (long *)0x78;
    __Znwm();
    plVar10[1] = 0;
    plVar10[2] = 0;
    *plVar10 = (long)&PTR_DAT_110c2f0f0;
    plVar10[3] = (long)&PTR_FUN_110c2ea00;
    pbVar2 = &UNK_10e4e3f34;
    if (bVar4 == 0) {
      pbVar2 = &UNK_10e4e3f3c;
    }
    if ((pbVar2 == &UNK_10e4e3f44) || (bVar4 < *pbVar2)) goto LAB_10a91d82c;
    uStack_58 = *(undefined4 *)(pbVar2 + 4);
    uStack_54 = 1;
    uVar14 = uVar14 >> 2;
    if (uVar14 == 3) {
      puVar17 = puVar3 + 2;
      uVar13 = (ulong)puVar3[1];
      uStack_68 = (ulong)*puVar3 << 0x20;
    }
    else {
      if (uVar14 == 2) {
        puVar17 = puVar3 + 1;
        uVar13 = (ulong)*puVar3;
      }
      else {
        uVar13 = 1;
        puVar17 = puVar3;
        if (uVar14 != 1) {
          FUN_10a00946c(&UNK_10f683a35);
          goto LAB_10a91d874;
        }
      }
      uStack_68 = 0x100000000;
    }
    uStack_68 = uStack_68 | uVar13;
    uStack_60 = (ulong)*puVar17 | 0x100000000;
    FUN_109d0eb9c(plVar10 + 4,&uStack_68,&uStack_58);
    if ((*(byte *)(plVar10 + 0xd) & 1) == 0) {
      iVar12 = (int)plVar10[6] * *(int *)((long)plVar10 + 0x34) * *(int *)((long)plVar10 + 0x2c) *
               (int)plVar10[5];
    }
    else {
      iVar12 = 1;
      for (piVar15 = (int *)plVar10[10]; piVar15 != (int *)plVar10[0xb]; piVar15 = piVar15 + 1) {
        iVar12 = *piVar15 * iVar12;
      }
    }
    if (*(uint *)(plVar10 + 7) < 0xf) {
      if (*(int *)(&UNK_10e4e43d4 + (ulong)*(uint *)(plVar10 + 7) * 4) * iVar12 != 0) {
        _bzero(plVar10[8]);
      }
      *(int *)(plVar10 + 0xe) =
           (int)((ulong)(*(long *)(param_3 + 0x20) - *(long *)(param_3 + 0x18)) >> 2);
      plStack_78 = plVar10 + 3;
      plStack_70 = plVar10;
      FUN_10a91d01c(param_1,param_2,&plStack_78);
      plVar10 = plStack_70;
      if (plStack_70 != (long *)0x0) {
        plVar1 = plStack_70 + 1;
        do {
          lVar16 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar16 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plStack_70 + 0x10))(plStack_70);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      return param_1;
    }
  }
  func_0x00010952d0c4(&UNK_10dfd21d7,&UNK_10f57311a,&UNK_10f573129);
LAB_10a91d874:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10a91d878);
  (*pcVar9)();
}



/* Entry: 10a91d8bc; end: 10a91d8bf;  */

undefined8 * FUN_10a91d8bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2efa0;
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a91d8c0; end: 10a91d913;  */

undefined8 * FUN_10a91d8c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2ea78;
  func_0x00010a93dbf4(param_1 + 6);
  FUN_10a92447c(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a91d914; end: 10a91d917;  */

undefined8 * FUN_10a91d914(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2ea78;
  func_0x00010a93dbf4(param_1 + 6);
  FUN_10a92447c(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a91d918; end: 10a91d92b;  */

void FUN_10a91d918(void)

{
  FUN_10a91d8c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a91d92c; end: 10a91da4b;  */

void FUN_10a91d92c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  undefined1 uStack_31;
  
  uVar5 = 0x40;
  __Znwm(0x40);
  FUN_10a93dc4c(&uStack_60,&uStack_31,param_3);
  plStack_48 = plStack_58;
  uStack_50 = uStack_60;
  uStack_60 = 0;
  plStack_58 = (long *)0x0;
  FUN_10a91d01c(uVar5,param_2,&uStack_50);
  FUN_10a93dcec(param_1,uVar5);
  plVar4 = plStack_48;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a91da4c; end: 10a91da7b;  */

void FUN_10a91da4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a91da58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
  return;
}



/* Entry: 10a91da7c; end: 10a91dabf;  */

long FUN_10a91da7c(long param_1)

{
  code *pcVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined ***pppuVar5;
  long *plVar6;
  undefined8 extraout_x8;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  undefined **appuStack_1c8 [2];
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined1 auStack_1a8 [56];
  undefined8 uStack_170;
  char cStack_159;
  undefined **appuStack_148 [19];
  long lStack_b0;
  long lStack_a8;
  int *piStack_98;
  int *piStack_90;
  long lStack_80;
  long lStack_78;
  undefined1 uStack_61;
  
  lVar3 = *(long *)(param_1 + 0x30);
  if ((lVar3 != 0) && (___dynamic_cast(lVar3,&PTR_DAT_110c2eac0,&PTR_DAT_110c2ead0,0), lVar3 != 0))
  {
    return lVar3 + 8;
  }
  puVar4 = &UNK_10f682ef6;
  FUN_10a00946c();
  (**(code **)(**(long **)(puVar4 + 0x30) + 0x18))(&lStack_80);
  (**(code **)(**(long **)(puVar4 + 0x30) + 0x20))(&piStack_98);
  (**(code **)(**(long **)(puVar4 + 0x30) + 0x28))(&lStack_b0);
  if (piStack_90 != piStack_98) {
    if (((ulong)(long)*piStack_98 < (ulong)(lStack_78 - lStack_80 >> 2)) &&
       ((ulong)(long)*piStack_98 < (ulong)(lStack_a8 - lStack_b0 >> 2))) {
      FUN_109febc44(appuStack_1c8);
      pppuVar5 = &ppuStack_1b8;
      FUN_10a002568(pppuVar5,&UNK_10f682f16,0xd);
      plVar6 = *(long **)(puVar4 + 0x30);
      (**(code **)(*plVar6 + 0x10))();
      pbVar8 = &UNK_110c2f160;
      uVar2 = (uint)plVar6;
      if (uVar2 < 2) {
        pbVar7 = &UNK_110c2f178;
      }
      else {
        pbVar7 = pbVar8;
        pbVar8 = &UNK_110c2f190;
      }
      if (uVar2 == 0) {
        pbVar8 = pbVar7;
      }
      if ((pbVar8 == &UNK_110c2f190) || (uVar2 < *pbVar8)) {
        func_0x0001093fd0ac(&UNK_10f61d92d);
      }
      else {
        FUN_10a002568(pppuVar5,*(undefined8 *)(pbVar8 + 8),*(undefined8 *)(pbVar8 + 0x10));
        FUN_10a002568();
        plVar6 = *(long **)(puVar4 + 0x30);
        (**(code **)(*plVar6 + 0x50))();
        if ((int)plVar6 == 0) {
          FUN_10a002568(pppuVar5,&UNK_10f682f71,3);
          FUN_10a002568();
          if (lStack_78 != lStack_80) {
            uVar9 = 0;
            do {
              if (uVar9 != 0) {
                FUN_10a002568(&ppuStack_1b8,&DAT_10f68f19e,2);
              }
              if ((ulong)(lStack_78 - lStack_80 >> 2) <= uVar9) goto LAB_10a91dde0;
              __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi
                        (&ppuStack_1b8,*(undefined4 *)(lStack_80 + uVar9 * 4));
              uVar9 = uVar9 + 1;
            } while (uVar9 < (ulong)(lStack_78 - lStack_80 >> 2));
          }
          pppuVar5 = &ppuStack_1b8;
          FUN_10a002568(pppuVar5,&UNK_10f682f39,0xc);
          plVar6 = *(long **)(puVar4 + 0x30);
          (**(code **)(*plVar6 + 8))();
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(pppuVar5,plVar6);
          FUN_10a002568();
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
          FUN_10a002568();
          func_0x00010a002480(extraout_x8,&ppuStack_1b0,&uStack_61);
          appuStack_1c8[0] = &PTR_SUB_1108a5a38;
          ppuStack_1b8 = &PTR_DAT_1108a5a60;
          appuStack_148[0] = &PTR_DAT_1108a5a88;
          ppuStack_1b0 = &PTR_DAT_11088d7b0;
          if (cStack_159 < '\0') {
            __ZdlPv(uStack_170);
          }
          ppuStack_1b0 = (undefined **)
                         (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10
                         );
          __ZNSt3__16localeD1Ev(auStack_1a8);
          __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_1c8,&PTR_PTR_1108a5aa0);
          __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_148);
          if (lStack_b0 != 0) {
            lStack_a8 = lStack_b0;
            __ZdlPv();
          }
          if (piStack_98 != (int *)0x0) {
            piStack_90 = piStack_98;
            __ZdlPv();
          }
          if (lStack_80 != 0) {
            lStack_78 = lStack_80;
            __ZdlPv();
          }
          return lStack_80;
        }
        func_0x0001093fd0ac(&UNK_10f61d92d);
      }
    }
  }
LAB_10a91dde0:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a91dde4);
  (*pcVar1)();
}



/* Entry: 10a91dac0; end: 10a91de4b;  */

void FUN_10a91dac0(undefined8 param_1,long param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined ***pppuVar3;
  long *plVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  undefined **appuStack_1b8 [2];
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined1 auStack_198 [56];
  undefined8 uStack_160;
  char cStack_149;
  undefined **appuStack_138 [19];
  long lStack_a0;
  long lStack_98;
  int *piStack_88;
  int *piStack_80;
  long lStack_70;
  long lStack_68;
  undefined1 uStack_51;
  
  (**(code **)(**(long **)(param_2 + 0x30) + 0x18))(&lStack_70);
  (**(code **)(**(long **)(param_2 + 0x30) + 0x20))(&piStack_88);
  (**(code **)(**(long **)(param_2 + 0x30) + 0x28))(&lStack_a0);
  if (piStack_80 != piStack_88) {
    if (((ulong)(long)*piStack_88 < (ulong)(lStack_68 - lStack_70 >> 2)) &&
       ((ulong)(long)*piStack_88 < (ulong)(lStack_98 - lStack_a0 >> 2))) {
      FUN_109febc44(appuStack_1b8);
      pppuVar3 = &ppuStack_1a8;
      FUN_10a002568(pppuVar3,&UNK_10f682f16,0xd);
      plVar4 = *(long **)(param_2 + 0x30);
      (**(code **)(*plVar4 + 0x10))();
      pbVar6 = &UNK_110c2f160;
      uVar2 = (uint)plVar4;
      if (uVar2 < 2) {
        pbVar5 = &UNK_110c2f178;
      }
      else {
        pbVar5 = pbVar6;
        pbVar6 = &UNK_110c2f190;
      }
      if (uVar2 == 0) {
        pbVar6 = pbVar5;
      }
      if ((pbVar6 == &UNK_110c2f190) || (uVar2 < *pbVar6)) {
        func_0x0001093fd0ac(&UNK_10f61d92d);
      }
      else {
        FUN_10a002568(pppuVar3,*(undefined8 *)(pbVar6 + 8),*(undefined8 *)(pbVar6 + 0x10));
        FUN_10a002568();
        plVar4 = *(long **)(param_2 + 0x30);
        (**(code **)(*plVar4 + 0x50))();
        if ((int)plVar4 == 0) {
          FUN_10a002568(pppuVar3,&UNK_10f682f71,3);
          FUN_10a002568();
          if (lStack_68 != lStack_70) {
            uVar7 = 0;
            do {
              if (uVar7 != 0) {
                FUN_10a002568(&ppuStack_1a8,&DAT_10f68f19e,2);
              }
              if ((ulong)(lStack_68 - lStack_70 >> 2) <= uVar7) goto LAB_10a91dde0;
              __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi
                        (&ppuStack_1a8,*(undefined4 *)(lStack_70 + uVar7 * 4));
              uVar7 = uVar7 + 1;
            } while (uVar7 < (ulong)(lStack_68 - lStack_70 >> 2));
          }
          pppuVar3 = &ppuStack_1a8;
          FUN_10a002568(pppuVar3,&UNK_10f682f39,0xc);
          plVar4 = *(long **)(param_2 + 0x30);
          (**(code **)(*plVar4 + 8))();
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(pppuVar3,plVar4);
          FUN_10a002568();
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
          FUN_10a002568();
          func_0x00010a002480(param_1,&ppuStack_1a0,&uStack_51);
          appuStack_1b8[0] = &PTR_SUB_1108a5a38;
          ppuStack_1a8 = &PTR_DAT_1108a5a60;
          appuStack_138[0] = &PTR_DAT_1108a5a88;
          ppuStack_1a0 = &PTR_DAT_11088d7b0;
          if (cStack_149 < '\0') {
            __ZdlPv(uStack_160);
          }
          ppuStack_1a0 = (undefined **)
                         (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10
                         );
          __ZNSt3__16localeD1Ev(auStack_198);
          __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_1b8,&PTR_PTR_1108a5aa0);
          __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_138);
          if (lStack_a0 != 0) {
            lStack_98 = lStack_a0;
            __ZdlPv();
          }
          if (piStack_88 != (int *)0x0) {
            piStack_80 = piStack_88;
            __ZdlPv();
          }
          if (lStack_70 != 0) {
            lStack_68 = lStack_70;
            __ZdlPv();
          }
          return;
        }
        func_0x0001093fd0ac(&UNK_10f61d92d);
      }
    }
  }
LAB_10a91dde0:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a91dde4);
  (*pcVar1)();
}



/* Entry: 10a91de4c; end: 10a91df47;  */

void FUN_10a91de4c(undefined8 param_1)

{
  undefined1 uStack_99;
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
  puStack_98 = &UNK_10f682f52;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff0000016b;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a91df48(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f682f5b;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff0000016b;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_99 = 0;
  FUN_10a91dfa0(param_1,&puStack_98,&uStack_99);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f682f63;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff0000016b;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_99 = 1;
  FUN_10a91dfa0(param_1,&puStack_98,&uStack_99);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10a91df48; end: 10a91df9f;  */

ulong FUN_10a91df48(ulong param_1,undefined8 *param_2)

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



/* Entry: 10a91dfa0; end: 10a91dff7;  */

ulong FUN_10a91dfa0(ulong param_1,undefined8 *param_2,undefined1 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a93de28(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10a91dff8; end: 10a91e0af;  */

void FUN_10a91dff8(undefined8 param_1)

{
  undefined1 uStack_99;
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
  puStack_98 = &UNK_10f682f69;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff0000016b;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a91e0b0(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f682f71;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff0000016b;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_99 = 0;
  FUN_10a91e108(param_1,&puStack_98,&uStack_99);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10a91e0b0; end: 10a91e107;  */

ulong FUN_10a91e0b0(ulong param_1,undefined8 *param_2)

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



/* Entry: 10a91e108; end: 10a91e15f;  */

ulong FUN_10a91e108(ulong param_1,undefined8 *param_2,undefined1 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x00010a93de9c(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10a91e160; end: 10a91e1d7;  */

undefined1  [16] FUN_10a91e160(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 10;
  auVar1._0_8_ = &UNK_10f683afe;
  return auVar1;
}



/* Entry: 10a91e1d8; end: 10a91e30f;  */

void FUN_10a91e1d8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_98;
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
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  FUN_10a003e74(param_1,&UNK_10f682e81,6);
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_5c = 0x16b;
  uStack_58 = 0xffffffff;
  uVar1 = param_1;
  FUN_10a91e310(param_1,&puStack_98);
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = (undefined *)0x0;
  uStack_38 = 0;
  FUN_10a93e00c();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f682e5c;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f682e30;
  uStack_38 = 0;
  FUN_10a93e1ec(uVar1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f682e62;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f682e30;
  uStack_38 = 0;
  func_0x00010a93e51c(uVar1,&puStack_98);
  FUN_10a93e714(uVar1);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a91e310; end: 10a91e3e7;  */

/* WARNING: Removing unreachable block (ram,0x00010a91e3a8) */

undefined1  [16] FUN_10a91e310(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f683afe,10);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a93df10(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a91e3e8; end: 10a91e457;  */

undefined1  [16] FUN_10a91e3e8(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  auVar15._8_8_ = (int *)*param_2;
  piVar4 = (int *)param_2[1];
  piVar6 = auVar15._8_8_;
  if (auVar15._8_8_ != piVar4) {
    while (piVar2 = piVar6 + 1, 0 < *piVar6) {
      piVar6 = piVar2;
      if (piVar2 == piVar4) {
        puVar1 = (undefined8 *)(param_1 + 0x18);
        if (puVar1 == param_2) {
          auVar15._0_8_ = puVar1;
          return auVar15;
        }
        piVar6 = (int *)((long)piVar4 - (long)auVar15._8_8_ >> 2);
        uVar7 = *(ulong *)(param_1 + 0x28);
        puVar9 = (undefined8 *)*puVar1;
        if ((int *)((long)(uVar7 - (long)puVar9) >> 2) < piVar6) {
          puVar10 = puVar1;
          piVar2 = auVar15._8_8_;
          piVar3 = piVar4;
          piVar5 = piVar6;
          if (puVar9 != (undefined8 *)0x0) {
            *(undefined8 **)(param_1 + 0x20) = puVar9;
            __ZdlPv();
            uVar7 = 0;
            *puVar1 = 0;
            *(undefined8 *)(param_1 + 0x20) = 0;
            *(undefined8 *)(param_1 + 0x28) = 0;
            puVar10 = puVar9;
          }
          if ((ulong)piVar6 >> 0x3e != 0) {
            func_0x000109ffdfac();
            uVar7 = puVar10[2];
            puVar9 = (undefined8 *)*puVar10;
            puVar1 = puVar10;
            if ((int *)((long)(uVar7 - (long)puVar9) >> 4) < piVar5) {
              puVar11 = puVar10;
              piVar6 = piVar2;
              auVar15._8_8_ = piVar3;
              piVar4 = piVar5;
              if (puVar9 != (undefined8 *)0x0) {
                puVar10[1] = puVar9;
                __ZdlPv();
                uVar7 = 0;
                *puVar10 = 0;
                puVar10[1] = 0;
                puVar10[2] = 0;
                puVar11 = puVar9;
              }
              if ((ulong)piVar5 >> 0x3c != 0) {
                FUN_10a0e9b68();
                puVar1 = puVar11;
                if (piVar4 != (int *)0x0) {
                  FUN_10a0ea760();
                  puVar9 = (undefined8 *)puVar11[1];
                  for (; piVar6 != auVar15._8_8_; piVar6 = piVar6 + 2) {
                    *puVar9 = *(undefined8 *)piVar6;
                    puVar9 = puVar9 + 1;
                  }
                  puVar11[1] = puVar9;
                  piVar6 = piVar4;
                }
                auVar14._8_8_ = piVar6;
                auVar14._0_8_ = puVar1;
                return auVar14;
              }
              piVar6 = (int *)((long)uVar7 >> 3);
              if ((int *)((long)uVar7 >> 3) <= piVar5) {
                piVar6 = piVar5;
              }
              if (0x7fffffffffffffef < uVar7) {
                piVar6 = (int *)0xfffffffffffffff;
              }
              FUN_10a0e9b30(puVar10,piVar6);
              puVar9 = (undefined8 *)puVar10[1];
              lVar8 = (long)piVar3 - (long)piVar2;
              if (lVar8 != 0) {
                puVar1 = puVar9;
                _memmove(puVar9,piVar2,lVar8);
                piVar6 = piVar2;
              }
              lVar8 = (long)puVar9 + lVar8;
            }
            else {
              puVar11 = (undefined8 *)puVar10[1];
              if ((int *)((long)puVar11 - (long)puVar9 >> 4) < piVar5) {
                auVar15._8_8_ = (int *)((long)piVar2 + ((long)puVar11 - (long)puVar9));
                if (puVar11 != puVar9) {
                  _memmove(puVar9,piVar2);
                  puVar11 = (undefined8 *)puVar10[1];
                  puVar1 = puVar9;
                }
                lVar8 = (long)piVar3 - (long)auVar15._8_8_;
                piVar6 = piVar2;
                if (lVar8 != 0) {
                  puVar1 = puVar11;
                  _memmove(puVar11,auVar15._8_8_,lVar8);
                  piVar6 = auVar15._8_8_;
                }
                lVar8 = (long)puVar11 + lVar8;
              }
              else {
                lVar8 = (long)piVar3 - (long)piVar2;
                piVar6 = piVar2;
                if (lVar8 != 0) {
                  puVar1 = puVar9;
                  _memmove(puVar9,piVar2,lVar8);
                  piVar6 = piVar2;
                }
                lVar8 = (long)puVar9 + lVar8;
              }
            }
            puVar10[1] = lVar8;
            auVar13._8_8_ = piVar6;
            auVar13._0_8_ = puVar1;
            return auVar13;
          }
          piVar2 = (int *)((long)uVar7 >> 1);
          if ((int *)((long)uVar7 >> 1) <= piVar6) {
            piVar2 = piVar6;
          }
          if (0x7ffffffffffffffb < uVar7) {
            piVar2 = (int *)0x3fffffffffffffff;
          }
          FUN_109ffe268(puVar1,piVar2);
          puVar9 = *(undefined8 **)(param_1 + 0x20);
          lVar8 = (long)piVar4 - (long)auVar15._8_8_;
          if (lVar8 != 0) {
            puVar1 = puVar9;
            _memmove(puVar9,auVar15._8_8_,lVar8);
            piVar2 = auVar15._8_8_;
          }
          lVar8 = (long)puVar9 + lVar8;
        }
        else {
          puVar10 = *(undefined8 **)(param_1 + 0x20);
          if ((int *)((long)puVar10 - (long)puVar9 >> 2) < piVar6) {
            piVar6 = (int *)((long)auVar15._8_8_ + ((long)puVar10 - (long)puVar9));
            if (puVar10 != puVar9) {
              _memmove(puVar9,auVar15._8_8_);
              puVar10 = *(undefined8 **)(param_1 + 0x20);
              puVar1 = puVar9;
            }
            lVar8 = (long)piVar4 - (long)piVar6;
            piVar2 = auVar15._8_8_;
            if (lVar8 != 0) {
              puVar1 = puVar10;
              _memmove(puVar10,piVar6,lVar8);
              piVar2 = piVar6;
            }
            lVar8 = (long)puVar10 + lVar8;
          }
          else {
            lVar8 = (long)piVar4 - (long)auVar15._8_8_;
            piVar2 = auVar15._8_8_;
            if (lVar8 != 0) {
              puVar1 = puVar9;
              _memmove(puVar9,auVar15._8_8_,lVar8);
              piVar2 = auVar15._8_8_;
            }
            lVar8 = (long)puVar9 + lVar8;
          }
        }
        *(long *)(param_1 + 0x20) = lVar8;
        auVar12._8_8_ = piVar2;
        auVar12._0_8_ = puVar1;
        return auVar12;
      }
    }
    FUN_10a00946c(&UNK_10f682f9e);
  }
  FUN_10a00946c(&UNK_10f682f75);
  auVar16._8_8_ = 0xc;
  auVar16._0_8_ = &UNK_10f683b09;
  return auVar16;
}



/* Entry: 10a91e458; end: 10a91e4d3;  */

undefined1  [16] FUN_10a91e458(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xc;
  auVar1._0_8_ = &UNK_10f683b09;
  return auVar1;
}



/* Entry: 10a91e4d4; end: 10a91e59b;  */

void FUN_10a91e4d4(ulong param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined1 auStack_38 [24];
  
  FUN_10a8bcad0(&uStack_50,param_2);
  if (uStack_50 == 0 || uStack_48 == 0) {
    return;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uStack_50;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uStack_48;
  if (SUB168(auVar1 * auVar3,8) == 0) {
    uStack_50 = uStack_50 * uStack_48;
    if (uStack_50 == 0 || uStack_40 == 0) {
      return;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uStack_50;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uStack_40;
    if (SUB168(auVar2 * auVar4,8) == 0) {
      if (uStack_50 * uStack_40 < param_1 || uStack_50 * uStack_40 - param_1 == 0) {
        return;
      }
      goto LAB_10a91e558;
    }
  }
  FUN_10a00946c(&UNK_10f6818f4);
LAB_10a91e558:
  FUN_10a0ee900(auStack_38,&UNK_10f680cc5,0x23);
  FUN_10a0029c0(auStack_38);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a91e580);
  (*pcVar5)();
}



/* Entry: 10a91e59c; end: 10a91e917;  */

/* WARNING: Removing unreachable block (ram,0x00010a91e7c4) */
/* WARNING: Removing unreachable block (ram,0x00010a91e794) */
/* WARNING: Removing unreachable block (ram,0x00010a91e7b4) */
/* WARNING: Removing unreachable block (ram,0x00010a91e7e4) */

void FUN_10a91e59c(float *param_1,long param_2,long param_3,long param_4)

{
  undefined8 ****ppppuVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 ***pppuStack_120;
  ulong uStack_118;
  byte bStack_109;
  undefined8 ***pppuStack_108;
  ulong uStack_100;
  byte bStack_f1;
  undefined8 ***pppuStack_f0;
  ulong uStack_e8;
  byte bStack_d9;
  undefined8 auStack_d8 [2];
  char cStack_c1;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 auStack_a8 [3];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 auStack_78 [3];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  if ((param_2 == 0) || (param_2 == (long)*param_1)) {
    if ((param_3 == (long)param_1[1] || param_3 == 0) && param_4 == (long)param_1[2]) {
      return;
    }
    FUN_10a0ee900(auStack_d8,&UNK_10f683b3a,0x33);
    if (param_2 == 0) {
      func_0x000107c2b054(&pppuStack_f0,&DAT_10f31a219);
      goto LAB_10a91e668;
    }
  }
  else {
    FUN_10a0ee900(auStack_d8,&UNK_10f683b3a,0x33);
  }
  __ZNSt3__19to_stringEm(&pppuStack_f0,param_2);
LAB_10a91e668:
  ppppuVar1 = (undefined8 ****)pppuStack_f0;
  if (-1 < (char)bStack_d9) {
    uStack_e8 = (ulong)bStack_d9;
    ppppuVar1 = &pppuStack_f0;
  }
  puVar3 = auStack_d8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar3,ppppuVar1,uStack_e8);
  uStack_b8 = puVar3[1];
  uStack_c0 = *puVar3;
  lStack_b0 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  FUN_10a012db0(auStack_a8,&uStack_c0,&UNK_10f48d65e);
  if (param_3 == 0) {
    func_0x000107c2b054(&pppuStack_108,&DAT_10f31a203);
  }
  else {
    __ZNSt3__19to_stringEm(&pppuStack_108,1);
  }
  ppppuVar1 = (undefined8 ****)pppuStack_108;
  if (-1 < (char)bStack_f1) {
    uStack_100 = (ulong)bStack_f1;
    ppppuVar1 = &pppuStack_108;
  }
  puVar3 = auStack_a8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar3,ppppuVar1,uStack_100);
  uStack_88 = puVar3[1];
  uStack_90 = *puVar3;
  uStack_80 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  FUN_10a012db0(auStack_78,&uStack_90,&UNK_10f48d65e);
  __ZNSt3__19to_stringEm(&pppuStack_120,param_4);
  ppppuVar1 = (undefined8 ****)pppuStack_120;
  if (-1 < (char)bStack_109) {
    uStack_118 = (ulong)bStack_109;
    ppppuVar1 = &pppuStack_120;
  }
  puVar3 = auStack_78;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar3,ppppuVar1,uStack_118);
  uStack_58 = puVar3[1];
  uStack_60 = *puVar3;
  uStack_50 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  FUN_10a012db0(auStack_48,&uStack_60,&UNK_10f68393f);
  if ((char)bStack_109 < '\0') {
    __ZdlPv(pppuStack_120);
  }
  if ((char)bStack_f1 < '\0') {
    __ZdlPv(pppuStack_108);
  }
  if (lStack_b0 < 0) {
    __ZdlPv(uStack_c0);
  }
  if ((char)bStack_d9 < '\0') {
    __ZdlPv(pppuStack_f0);
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(auStack_d8[0]);
  }
  FUN_10a1084cc(auStack_48);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a91e828);
  (*pcVar2)();
}



/* Entry: 10a91e918; end: 10a91ea53;  */

void FUN_10a91e918(float param_1,float param_2,float param_3,float *param_4,ulong param_5,
                  int param_6,float *param_7,ulong param_8)

{
  code *pcVar1;
  float *pfVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_88 [24];
  
  if (param_8 < param_5) {
    FUN_10a0ee900(auStack_88,&UNK_10f683b6e,0x5d);
    FUN_10a0029c0(auStack_88);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a91ea38);
    (*pcVar1)();
  }
  if (param_6 == 0) {
    if (param_5 == 0) {
      return;
    }
    if (param_1 <= param_3) {
      param_1 = param_3;
    }
  }
  else {
    pfVar2 = param_4;
    uVar3 = param_5;
    fVar5 = param_3;
    if (param_5 == 0) {
      return;
    }
    do {
      param_1 = ABS(*pfVar2);
      if (ABS(*pfVar2) <= fVar5) {
        param_1 = fVar5;
      }
      uVar3 = uVar3 - 1;
      pfVar2 = pfVar2 + 1;
      fVar5 = param_1;
    } while (uVar3 != 0);
  }
  _log10f();
  fVar5 = 0.0;
  pfVar2 = param_7;
  uVar3 = param_5;
  do {
    fVar4 = ABS(*param_4);
    if (ABS(*param_4) <= param_3) {
      fVar4 = param_3;
    }
    _log10f();
    fVar4 = param_1 * -10.0 + fVar4 * 10.0;
    *pfVar2 = fVar4;
    if (fVar4 <= fVar5) {
      fVar4 = fVar5;
    }
    fVar5 = fVar4;
    uVar3 = uVar3 - 1;
    param_4 = param_4 + 1;
    pfVar2 = pfVar2 + 1;
  } while (uVar3 != 0);
  do {
    fVar4 = fVar5 - param_2;
    if (fVar5 - param_2 <= *param_7) {
      fVar4 = *param_7;
    }
    *param_7 = fVar4;
    param_5 = param_5 - 1;
    param_7 = param_7 + 1;
  } while (param_5 != 0);
  return;
}



/* Entry: 10a91ea54; end: 10a91eacf;  */

void FUN_10a91ea54(ulong param_1,long *param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined1 auStack_38 [24];
  
  uVar2 = param_2[1] * *param_2 * param_2[2];
  if (uVar2 < param_1 || uVar2 - param_1 == 0) {
    return;
  }
  FUN_10a0ee900(auStack_38,&UNK_10f680cc5,0x23);
  FUN_10a0029c0(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a91eab4);
  (*pcVar1)();
}



/* Entry: 10a91ead0; end: 10a91eb83;  */

void FUN_10a91ead0(ulong param_1,ulong *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_38 [24];
  
  uVar6 = *param_2;
  uVar7 = param_2[1];
  if (uVar6 == 0 || uVar7 == 0) {
    return;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar6;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar7;
  if (SUB168(auVar1 * auVar3,8) == 0) {
    uVar6 = uVar6 * uVar7;
    uVar7 = param_2[2];
    if (uVar6 == 0 || uVar7 == 0) {
      return;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar6;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar7;
    if (SUB168(auVar2 * auVar4,8) == 0) {
      if (uVar6 * uVar7 < param_1 || uVar6 * uVar7 - param_1 == 0) {
        return;
      }
      goto LAB_10a91eb44;
    }
  }
  FUN_10a00946c();
LAB_10a91eb44:
  FUN_10a0ee900(auStack_38,&UNK_10f683b6e,0x5d);
  FUN_10a0029c0(auStack_38);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a91eb68);
  (*pcVar5)();
}



/* Entry: 10a91eb84; end: 10a91f01f;  */

void FUN_10a91eb84(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6550ab;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f6833ad;
  uStack_68 = 0x130;
  uStack_58 = 0;
  uStack_50 = 0;
  puStack_60 = &UNK_10f682e30;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a004eb4(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6834de;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_48,uStack_78 & 0xffffffff,
                uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6834e9;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a91eed8(param_1,&puStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6834f2;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a91eed8();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f645239;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a91eed8();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6834fc;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a91eed8();
  FUN_10a003ff4();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f683507;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_48,uStack_78 & 0xffffffff,
                uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f683517;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a91ef7c(param_1,&puStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68351e;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a91ef7c();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f683528;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a91ef7c();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68352e;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a91ef7c();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f683535;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a91ef7c();
  FUN_10a003ff4();
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a91f020; end: 10a923fb7;  */

void FUN_10a91f020(long *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  long *plStack_68;
  long *plStack_60;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = (long *)0x30;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110c2f1a8;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plStack_98 = plVar4 + 3;
  *plStack_98 = (long)&PTR_FUN_110c2f010;
  plStack_90 = plVar4;
  FUN_10a003e74(param_1,&UNK_10f6550ab,10);
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a927a6c;
      ppuStack_70 = &PTR_FUN_110c2f1e8;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a927a6c;
      ppuStack_70 = &PTR_FUN_110c2f1e8;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&UNK_10f68353f,&pcStack_78,3,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a927f10;
      ppuStack_70 = &PTR_FUN_110c2f200;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a927f10;
      ppuStack_70 = &PTR_FUN_110c2f200;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&UNK_10f683547,&pcStack_78,4,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a9284b8;
      ppuStack_70 = &PTR_FUN_110c2f218;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a9284b8;
      ppuStack_70 = &PTR_FUN_110c2f218;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&UNK_10f683552,&pcStack_78,3,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a928a5c;
      ppuStack_70 = &PTR_FUN_110c2f230;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a928a5c;
      ppuStack_70 = &PTR_FUN_110c2f230;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&UNK_10f683559,&pcStack_78,4,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a928db8;
      ppuStack_70 = &PTR_FUN_110c2f248;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a928db8;
      ppuStack_70 = &PTR_FUN_110c2f248;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&UNK_10f5a56ae,&pcStack_78,6,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a9299e4;
      ppuStack_70 = &PTR_FUN_110c2f260;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a9299e4;
      ppuStack_70 = &PTR_FUN_110c2f260;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&UNK_10f5a4cb5,&pcStack_78,4,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a92a150;
      ppuStack_70 = &PTR_FUN_110c2f278;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a92a150;
      ppuStack_70 = &PTR_FUN_110c2f278;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&DAT_10f57e834,&pcStack_78,4,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a92a490;
      ppuStack_70 = &PTR_FUN_110c2f290;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a92a490;
      ppuStack_70 = &PTR_FUN_110c2f290;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&UNK_10f683561,&pcStack_78,4,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a92a878;
      ppuStack_70 = &PTR_FUN_110c2f2a8;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a92a878;
      ppuStack_70 = &PTR_FUN_110c2f2a8;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&UNK_10f5a2eca,&pcStack_78,6,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a92b1d8;
      ppuStack_70 = &PTR_FUN_110c2f2c0;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a92b1d8;
      ppuStack_70 = &PTR_FUN_110c2f2c0;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&UNK_10f683570,&pcStack_78,9,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a92bc70;
      ppuStack_70 = &PTR_FUN_110c2f2d8;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a92bc70;
      ppuStack_70 = &PTR_FUN_110c2f2d8;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&UNK_10f5a306f,&pcStack_78,0xd,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a92c940;
      ppuStack_70 = &PTR_FUN_110c2f2f0;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a92c940;
      ppuStack_70 = &PTR_FUN_110c2f2f0;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&UNK_10f683581,&pcStack_78,10,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,0x100,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a92d480;
      ppuStack_70 = &PTR_FUN_110c2f308;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a92d480;
      ppuStack_70 = &PTR_FUN_110c2f308;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&UNK_10f68358d,&pcStack_78,3,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a92d6b0;
      ppuStack_70 = &PTR_FUN_110c2f320;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a92d6b0;
      ppuStack_70 = &PTR_FUN_110c2f320;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&DAT_10f3dd8f1,&pcStack_78,3,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a92d91c;
      ppuStack_70 = &PTR_FUN_110c2f338;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a92d91c;
      ppuStack_70 = &PTR_FUN_110c2f338;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&DAT_10f3dd8ed,&pcStack_78,3,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a92db88;
      ppuStack_70 = &PTR_FUN_110c2f350;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a92db88;
      ppuStack_70 = &PTR_FUN_110c2f350;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&DAT_10f324ae5,&pcStack_78,3,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a92ddf4;
      ppuStack_70 = &PTR_FUN_110c2f368;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a92ddf4;
      ppuStack_70 = &PTR_FUN_110c2f368;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&DAT_10f3dd912,&pcStack_78,4,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a92e0a0;
      ppuStack_70 = &PTR_FUN_110c2f380;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a92e0a0;
      ppuStack_70 = &PTR_FUN_110c2f380;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&UNK_10f6835a0,&pcStack_78,3,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a92e2e4;
      ppuStack_70 = &PTR_FUN_110c2f398;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a92e2e4;
      ppuStack_70 = &PTR_FUN_110c2f398;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&UNK_10f6835aa,&pcStack_78,3,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a92e528;
      ppuStack_70 = &PTR_FUN_110c2f3b0;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a92e528;
      ppuStack_70 = &PTR_FUN_110c2f3b0;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&DAT_10f51b421,&pcStack_78,4,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a92e89c;
      ppuStack_70 = &PTR_FUN_110c2f3c8;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a92e89c;
      ppuStack_70 = &PTR_FUN_110c2f3c8;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&UNK_10f6835b4,&pcStack_78,3,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a92ea98;
      ppuStack_70 = &PTR_FUN_110c2f3e0;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a92ea98;
      ppuStack_70 = &PTR_FUN_110c2f3e0;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&UNK_10f6835be,&pcStack_78,6,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a92ed1c;
      ppuStack_70 = &PTR_FUN_110c2f3f8;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a92ed1c;
      ppuStack_70 = &PTR_FUN_110c2f3f8;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&UNK_10f6835d0,&pcStack_78,2,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a92ef38;
      ppuStack_70 = &PTR_FUN_110c2f410;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a92ef38;
      ppuStack_70 = &PTR_FUN_110c2f410;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&UNK_10f6835de,&pcStack_78,5,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a92f3a8;
      ppuStack_70 = &PTR_FUN_110c2f428;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a92f3a8;
      ppuStack_70 = &PTR_FUN_110c2f428;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&UNK_10f6835e9,&pcStack_78,5,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a92f7f4;
      ppuStack_70 = &PTR_FUN_110c2f440;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a92f7f4;
      ppuStack_70 = &PTR_FUN_110c2f440;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&UNK_10f6835f4,&pcStack_78,5,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a92fc40;
      ppuStack_70 = &PTR_FUN_110c2f458;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a92fc40;
      ppuStack_70 = &PTR_FUN_110c2f458;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&UNK_10f6835ff,&pcStack_78,5,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a93008c;
      ppuStack_70 = &PTR_FUN_110c2f470;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a93008c;
      ppuStack_70 = &PTR_FUN_110c2f470;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&UNK_10f68360a,&pcStack_78,6,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a93042c;
      ppuStack_70 = &PTR_FUN_110c2f488;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a93042c;
      ppuStack_70 = &PTR_FUN_110c2f488;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&UNK_10f683615,&pcStack_78,3,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a930604;
      ppuStack_70 = &PTR_FUN_110c2f4a0;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a930604;
      ppuStack_70 = &PTR_FUN_110c2f4a0;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&UNK_10f683621,&pcStack_78,4,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a9309b0;
      ppuStack_70 = &PTR_FUN_110c2f4b8;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a9309b0;
      ppuStack_70 = &PTR_FUN_110c2f4b8;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&UNK_10f68362e,&pcStack_78,4,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a930d10;
      ppuStack_70 = &PTR_FUN_110c2f4d0;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a930d10;
      ppuStack_70 = &PTR_FUN_110c2f4d0;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&UNK_10f68363d,&pcStack_78,4,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a9310a4;
      ppuStack_70 = &PTR_FUN_110c2f4e8;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a9310a4;
      ppuStack_70 = &PTR_FUN_110c2f4e8;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&UNK_10f68364b,&pcStack_78,5,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a931360;
      ppuStack_70 = &PTR_FUN_110c2f500;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a931360;
      ppuStack_70 = &PTR_FUN_110c2f500;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&UNK_10f683663,&pcStack_78,4,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a931938;
      ppuStack_70 = &PTR_FUN_110c2f518;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a931938;
      ppuStack_70 = &PTR_FUN_110c2f518;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&UNK_10f683674,&pcStack_78,4,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a931eec;
      ppuStack_70 = &PTR_FUN_110c2f530;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a931eec;
      ppuStack_70 = &PTR_FUN_110c2f530;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&UNK_10f683685,&pcStack_78,3,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a932114;
      ppuStack_70 = &PTR_FUN_110c2f548;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a932114;
      ppuStack_70 = &PTR_FUN_110c2f548;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&UNK_10f683696,&pcStack_78,2,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a932334;
      ppuStack_70 = &PTR_FUN_110c2f560;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a932334;
      ppuStack_70 = &PTR_FUN_110c2f560;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&DAT_10f47df80,&pcStack_78,9,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a932bec;
      ppuStack_70 = &PTR_FUN_110c2f578;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a932bec;
      ppuStack_70 = &PTR_FUN_110c2f578;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&DAT_10f47df79,&pcStack_78,9,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a933480;
      ppuStack_70 = &PTR_FUN_110c2f590;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a933480;
      ppuStack_70 = &PTR_FUN_110c2f590;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&UNK_10f59bebb,&pcStack_78,6,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a933f6c;
      ppuStack_70 = &PTR_FUN_110c2f5a8;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a933f6c;
      ppuStack_70 = &PTR_FUN_110c2f5a8;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&UNK_10f6836af,&pcStack_78,2,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a9343d0;
      ppuStack_70 = &PTR_FUN_110c2f5c0;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a9343d0;
      ppuStack_70 = &PTR_FUN_110c2f5c0;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&UNK_10f6836bb,&pcStack_78,2,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a9346b0;
      ppuStack_70 = &PTR_FUN_110c2f5d8;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a9346b0;
      ppuStack_70 = &PTR_FUN_110c2f5d8;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&UNK_10f6836d0,&pcStack_78,7,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a934ad0;
      ppuStack_70 = &PTR_FUN_110c2f5f0;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a934ad0;
      ppuStack_70 = &PTR_FUN_110c2f5f0;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&UNK_10f59c629,&pcStack_78,7,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a93565c;
      ppuStack_70 = &PTR_FUN_110c2f608;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a93565c;
      ppuStack_70 = &PTR_FUN_110c2f608;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&UNK_10f6836df,&pcStack_78,8,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a935a48;
      ppuStack_70 = &PTR_FUN_110c2f620;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a935a48;
      ppuStack_70 = &PTR_FUN_110c2f620;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&UNK_10f6836e8,&pcStack_78,4,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a935d74;
      ppuStack_70 = &PTR_FUN_110c2f638;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a935d74;
      ppuStack_70 = &PTR_FUN_110c2f638;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&UNK_10f5a26f0,&pcStack_78,4,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a9360a0;
      ppuStack_70 = &PTR_FUN_110c2f650;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a9360a0;
      ppuStack_70 = &PTR_FUN_110c2f650;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&UNK_10f6836f7,&pcStack_78,7,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a93671c;
      ppuStack_70 = &PTR_FUN_110c2f668;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a93671c;
      ppuStack_70 = &PTR_FUN_110c2f668;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&UNK_10f683706,&pcStack_78,5,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a936cbc;
      ppuStack_70 = &PTR_FUN_110c2f680;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a936cbc;
      ppuStack_70 = &PTR_FUN_110c2f680;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&UNK_10f683715,&pcStack_78,5,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a937274;
      ppuStack_70 = &PTR_FUN_110c2f698;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a937274;
      ppuStack_70 = &PTR_FUN_110c2f698;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) goto LAB_10a923ebc;
    FUN_10a0544d8(param_1,&UNK_10f68372f,&pcStack_78,4,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 == (long *)0x0) {
    plStack_88 = plStack_98;
    plStack_80 = (long *)0x0;
  }
  else {
    plVar7 = plStack_90 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plStack_98;
    plStack_80 = plStack_90;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar7 = plStack_80;
  plVar4 = plStack_88;
  plVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)plVar5 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      pcStack_78 = FUN_10a9375e0;
      ppuStack_70 = &PTR_FUN_110c2f6b0;
      plStack_68 = plVar4;
      plStack_60 = (long *)0x0;
    }
    else {
      plVar5 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pcStack_78 = FUN_10a9375e0;
      ppuStack_70 = &PTR_FUN_110c2f6b0;
      plStack_68 = plVar4;
      plStack_60 = plVar7;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_1[2] == param_1[3]) {
LAB_10a923ebc:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a923ec0);
      (*pcVar3)();
    }
    FUN_10a0544d8(param_1,&UNK_10f68373d,&pcStack_78,6,param_1[3] + -8);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    plVar7 = plStack_80;
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  func_0x00010a004064(param_1);
  plVar4 = plStack_90;
  if (plStack_90 != (long *)0x0) {
    plVar7 = plStack_90 + 1;
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
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      param_1 = plVar4;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a927a14(&plStack_88);
  do {
    FUN_10a927a14(&plStack_98);
    __Unwind_Resume(param_1);
  } while( true );
}



/* Entry: 10a923fb8; end: 10a9240cf;  */

void FUN_10a923fb8(undefined8 param_1)

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
  puStack_a8 = &UNK_10f683746;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f682e30;
  uStack_78 = 0;
  puStack_70 = &UNK_10f682e30;
  uStack_68 = 0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a9240d0(param_1,&puStack_a8);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f683750;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f682e30;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_a9 = 0;
  FUN_10a924128(param_1,&puStack_a8,&uStack_a9);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f68375a;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_a9 = 1;
  FUN_10a924128(param_1,&puStack_a8,&uStack_a9);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10a9240d0; end: 10a924127;  */

ulong FUN_10a9240d0(ulong param_1,undefined8 *param_2)

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



/* Entry: 10a924128; end: 10a92417f;  */

ulong FUN_10a924128(ulong param_1,undefined8 *param_2,undefined1 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a93f3d8(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10a924180; end: 10a924297;  */

undefined8 * FUN_10a924180(ulong *param_1,long param_2,ulong param_3)

{
  bool bVar1;
  int *piVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  code *pcVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined **ppuVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  float fVar20;
  undefined1 auStack_308 [16];
  undefined1 auStack_2f8 [272];
  undefined1 auStack_1e8 [8];
  undefined **appuStack_1e0 [2];
  undefined1 auStack_1d0 [272];
  undefined4 uStack_5c;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  
  uVar16 = param_1[2];
  if (param_3 < uVar16 << 1) {
    puVar8 = (undefined8 *)&UNK_10f683bcc;
    FUN_10a00946c();
    *puVar8 = &PTR_FUN_110c2eb00;
    puVar8[2] = &PTR_FUN_110c2c8c8;
    puVar8[5] = &PTR_FUN_110c2c8f8;
    puVar8[0x5b] = &PTR_FUN_110c2ec70;
    puVar18 = puVar8 + 0x15;
    *puVar18 = &PTR_FUN_110c2c950;
    func_0x00010a1f7460(puVar8 + 0x53);
    func_0x00010a05248c(puVar8 + 0x51);
    *puVar8 = &PTR_FUN_110c2ecc0;
    puVar8[2] = &PTR_FUN_110bb3968;
    puVar8[5] = &PTR_DAT_110bb3998;
    puVar8[0x5b] = &PTR_DAT_110c2ee20;
    *puVar18 = &PTR_DAT_110bb39f0;
    FUN_10a042c0c(puVar8 + 0x4d);
    func_0x00010a042c64(puVar8 + 0x48);
    func_0x00010a0523dc(puVar8 + 0x45);
    if (*(char *)(puVar8 + 0x3c) == '\x01') {
      func_0x00010a042d30(puVar8 + 0x3a);
    }
    puVar8[0x15] = &PTR_FUN_110b9f768;
    FUN_10a1c00f4(puVar18);
    *puVar8 = &PTR_DAT_110c2ee70;
    puVar8[2] = &PTR_FUN_110b9f848;
    puVar8[5] = &PTR_DAT_110b9f878;
    puVar8[0x5b] = &PTR_DAT_110c2ef40;
    FUN_10a042dcc(puVar8 + 0x13);
    *puVar8 = &PTR_DAT_110c60a00;
    puVar8[2] = &PTR_DAT_110c60a88;
    puVar8[5] = &PTR_DAT_110c60ab8;
    ppuVar15 = (undefined **)(puVar8 + 0xb);
    puVar19 = (undefined8 *)puVar8[0xc];
    for (puVar18 = (undefined8 *)*ppuVar15; puVar18 != puVar19; puVar18 = puVar18 + 1) {
      FUN_10a009538(auStack_308,&UNK_10f69ea0f);
      __ZNSt13runtime_errorC2ERKS_(appuStack_1e0,auStack_308);
      _memcpy(auStack_1d0,auStack_2f8,0x110);
      appuStack_1e0[0] = &PTR_FUN_110b99e70;
      FUN_10a05bde0(auStack_1e8,appuStack_1e0);
      __ZNSt13runtime_errorD2Ev(appuStack_1e0);
      func_0x000109d1b350(*puVar18,auStack_1e8);
      __ZNSt13exception_ptrD1Ev(auStack_1e8);
      __ZNSt13runtime_errorD2Ev(auStack_308);
    }
    FUN_10ac634b8(ppuVar15);
    plVar17 = puVar8 + 10;
    if ((*plVar17 != 0) && (*(undefined ***)(*(long *)(*plVar17 + 8) + 0x20) == &PTR_DAT_110b9f988))
    {
      FUN_10a5ae930();
    }
    FUN_10a3a743c(puVar8 + 3);
    if ((puVar8[0x12] != 0) && (lVar9 = *(long *)(puVar8[0x12] + 0x828), lVar9 != 0)) {
      FUN_10a1dfb2c(lVar9,puVar8);
    }
    if (*(char *)((long)puVar8 + 0x8f) < '\0') {
      __ZdlPv(puVar8[0xf]);
    }
    appuStack_1e0[0] = ppuVar15;
    FUN_10ac78cf4(appuStack_1e0);
    lVar9 = *plVar17;
    *plVar17 = 0;
    if (lVar9 != 0) {
      FUN_10ac7d690(plVar17);
    }
    if (puVar8[9] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    puVar8[5] = &PTR_DAT_110b17898;
    func_0x00010a004dac(puVar8 + 6);
    puVar8[2] = &PTR____cxa_pure_virtual_110bcfb60;
    func_0x00010a004e5c(puVar8 + 3);
    return puVar8;
  }
  uVar3 = *param_1;
  uVar5 = param_1[1];
  uStack_5c = 0xff7fffff;
  FUN_10a14e0c0(&puStack_58,uVar16,&uStack_5c);
  if (uVar3 != 0) {
    uVar10 = 0;
    do {
      if (uVar5 != 0) {
        uVar12 = 0;
        do {
          if (uVar16 != 0) {
            uVar4 = param_1[1];
            uVar6 = param_1[2];
            uVar13 = param_1[3];
            uVar11 = 0;
            uVar14 = 1;
            do {
              if ((ulong)((long)puStack_50 - (long)puStack_58 >> 2) <= uVar11) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x10a92428c);
                (*pcVar7)();
              }
              fVar20 = *(float *)(uVar13 + (uVar12 + uVar4 * uVar10) * uVar6 * 4 + uVar11 * 4);
              if (*(float *)((long)puStack_58 + uVar11 * 4) < fVar20) {
                *(float *)((long)puStack_58 + uVar11 * 4) = fVar20;
                piVar2 = (int *)(param_2 + uVar11 * 8);
                *piVar2 = (int)uVar12;
                piVar2[1] = (int)uVar10;
              }
              bVar1 = uVar14 < uVar16;
              uVar11 = uVar14;
              uVar14 = (ulong)((int)uVar14 + 1);
            } while (bVar1);
          }
          uVar12 = (ulong)((int)uVar12 + 1);
        } while (uVar12 < uVar5);
      }
      uVar10 = (ulong)((int)uVar10 + 1);
    } while (uVar10 < uVar3);
  }
  if (puStack_58 != (undefined8 *)0x0) {
    puStack_50 = puStack_58;
    __ZdlPv();
  }
  return puStack_58;
}



/* Entry: 10a924298; end: 10a9242a3;  */

undefined8 * FUN_10a924298(undefined8 *param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  *param_1 = &PTR_FUN_110c2eb00;
  param_1[2] = &PTR_FUN_110c2c8c8;
  param_1[5] = &PTR_FUN_110c2c8f8;
  param_1[0x5b] = &PTR_FUN_110c2ec70;
  puVar4 = param_1 + 0x15;
  *puVar4 = &PTR_FUN_110c2c950;
  func_0x00010a1f7460(param_1 + 0x53);
  func_0x00010a05248c(param_1 + 0x51);
  *param_1 = &PTR_FUN_110c2ecc0;
  param_1[2] = &PTR_FUN_110bb3968;
  param_1[5] = &PTR_DAT_110bb3998;
  param_1[0x5b] = &PTR_DAT_110c2ee20;
  *puVar4 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar4);
  *param_1 = &PTR_DAT_110c2ee70;
  param_1[2] = &PTR_FUN_110b9f848;
  param_1[5] = &PTR_DAT_110b9f878;
  param_1[0x5b] = &PTR_DAT_110c2ef40;
  FUN_10a042dcc(param_1 + 0x13);
  *param_1 = &PTR_DAT_110c60a00;
  param_1[2] = &PTR_DAT_110c60a88;
  param_1[5] = &PTR_DAT_110c60ab8;
  ppuVar2 = (undefined **)(param_1 + 0xb);
  puVar5 = (undefined8 *)param_1[0xc];
  for (puVar4 = (undefined8 *)*ppuVar2; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar4,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar2);
  plVar3 = param_1 + 10;
  if ((*plVar3 != 0) && (*(undefined ***)(*(long *)(*plVar3 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar1 = *(long *)(param_1[0x12] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar2;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar3;
  *plVar3 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar3);
  }
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 6);
  param_1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10a9242a4; end: 10a9242bf;  */

void FUN_10a9242a4(undefined8 param_1)

{
  FUN_10a5749b0(param_1,&PTR_PTR_110c2e9b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a9242c0; end: 10a9242d7;  */

long FUN_10a9242c0(long param_1)

{
  return param_1 + 0xa8;
}



/* Entry: 10a9242d8; end: 10a9242f7;  */

void FUN_10a9242d8(long param_1)

{
  FUN_10a5749b0(param_1 + -0x10,&PTR_PTR_110c2e9b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a9242f8; end: 10a924307;  */

undefined8 * FUN_10a9242f8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = param_1 + -5;
  *puVar1 = &PTR_FUN_110c2eb00;
  param_1[-3] = &PTR_FUN_110c2c8c8;
  *param_1 = &PTR_FUN_110c2c8f8;
  param_1[0x56] = &PTR_FUN_110c2ec70;
  puVar5 = param_1 + 0x10;
  *puVar5 = &PTR_FUN_110c2c950;
  func_0x00010a1f7460(param_1 + 0x4e);
  func_0x00010a05248c(param_1 + 0x4c);
  *puVar1 = &PTR_FUN_110c2ecc0;
  param_1[-3] = &PTR_FUN_110bb3968;
  *param_1 = &PTR_DAT_110bb3998;
  param_1[0x56] = &PTR_DAT_110c2ee20;
  *puVar5 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x48);
  func_0x00010a042c64(param_1 + 0x43);
  func_0x00010a0523dc(param_1 + 0x40);
  if (*(char *)(param_1 + 0x37) == '\x01') {
    func_0x00010a042d30(param_1 + 0x35);
  }
  param_1[0x10] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar5);
  *puVar1 = &PTR_DAT_110c2ee70;
  param_1[-3] = &PTR_FUN_110b9f848;
  *param_1 = &PTR_DAT_110b9f878;
  param_1[0x56] = &PTR_DAT_110c2ef40;
  FUN_10a042dcc(param_1 + 0xe);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-3] = &PTR_DAT_110c60a88;
  *param_1 = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + 6);
  puVar6 = (undefined8 *)param_1[7];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + 5;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -2);
  if ((param_1[0xd] != 0) && (lVar2 = *(long *)(param_1[0xd] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    __ZdlPv(param_1[10]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  param_1[-3] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -2);
  return puVar1;
}



/* Entry: 10a924308; end: 10a924327;  */

void FUN_10a924308(long param_1)

{
  FUN_10a5749b0(param_1 + -0x28,&PTR_PTR_110c2e9b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a924328; end: 10a924337;  */

undefined8 * FUN_10a924328(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = param_1 + -0x15;
  *puVar1 = &PTR_FUN_110c2eb00;
  param_1[-0x13] = &PTR_FUN_110c2c8c8;
  param_1[-0x10] = &PTR_FUN_110c2c8f8;
  param_1[0x46] = &PTR_FUN_110c2ec70;
  *param_1 = &PTR_FUN_110c2c950;
  func_0x00010a1f7460(param_1 + 0x3e);
  func_0x00010a05248c(param_1 + 0x3c);
  *puVar1 = &PTR_FUN_110c2ecc0;
  param_1[-0x13] = &PTR_FUN_110bb3968;
  param_1[-0x10] = &PTR_DAT_110bb3998;
  param_1[0x46] = &PTR_DAT_110c2ee20;
  *param_1 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x38);
  func_0x00010a042c64(param_1 + 0x33);
  func_0x00010a0523dc(param_1 + 0x30);
  if (*(char *)(param_1 + 0x27) == '\x01') {
    func_0x00010a042d30(param_1 + 0x25);
  }
  *param_1 = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1);
  *puVar1 = &PTR_DAT_110c2ee70;
  param_1[-0x13] = &PTR_FUN_110b9f848;
  param_1[-0x10] = &PTR_DAT_110b9f878;
  param_1[0x46] = &PTR_DAT_110c2ef40;
  FUN_10a042dcc(param_1 + -2);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-0x13] = &PTR_DAT_110c60a88;
  param_1[-0x10] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + -10);
  puVar6 = (undefined8 *)param_1[-9];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + -0xb;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x12);
  if ((param_1[-3] != 0) && (lVar2 = *(long *)(param_1[-3] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)param_1 + -0x19) < '\0') {
    __ZdlPv(param_1[-6]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[-0xc] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x10] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0xf);
  param_1[-0x13] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x12);
  return puVar1;
}



/* Entry: 10a924338; end: 10a924357;  */

void FUN_10a924338(long param_1)

{
  FUN_10a5749b0(param_1 + -0xa8,&PTR_PTR_110c2e9b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a924358; end: 10a92436f;  */

undefined8 * FUN_10a924358(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_FUN_110c2eb00;
  puVar1[2] = &PTR_FUN_110c2c8c8;
  puVar1[5] = &PTR_FUN_110c2c8f8;
  puVar1[0x5b] = &PTR_FUN_110c2ec70;
  puVar5 = puVar1 + 0x15;
  *puVar5 = &PTR_FUN_110c2c950;
  func_0x00010a1f7460(puVar1 + 0x53);
  func_0x00010a05248c(puVar1 + 0x51);
  *puVar1 = &PTR_FUN_110c2ecc0;
  puVar1[2] = &PTR_FUN_110bb3968;
  puVar1[5] = &PTR_DAT_110bb3998;
  puVar1[0x5b] = &PTR_DAT_110c2ee20;
  *puVar5 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(puVar1 + 0x4d);
  func_0x00010a042c64(puVar1 + 0x48);
  func_0x00010a0523dc(puVar1 + 0x45);
  if (*(char *)(puVar1 + 0x3c) == '\x01') {
    func_0x00010a042d30(puVar1 + 0x3a);
  }
  puVar1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar5);
  *puVar1 = &PTR_DAT_110c2ee70;
  puVar1[2] = &PTR_FUN_110b9f848;
  puVar1[5] = &PTR_DAT_110b9f878;
  puVar1[0x5b] = &PTR_DAT_110c2ef40;
  FUN_10a042dcc(puVar1 + 0x13);
  *puVar1 = &PTR_DAT_110c60a00;
  puVar1[2] = &PTR_DAT_110c60a88;
  puVar1[5] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(puVar1 + 0xb);
  puVar6 = (undefined8 *)puVar1[0xc];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = puVar1 + 10;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(puVar1 + 3);
  if ((puVar1[0x12] != 0) && (lVar2 = *(long *)(puVar1[0x12] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)puVar1 + 0x8f) < '\0') {
    __ZdlPv(puVar1[0xf]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (puVar1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puVar1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(puVar1 + 6);
  puVar1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(puVar1 + 3);
  return puVar1;
}



/* Entry: 10a924370; end: 10a924407;  */

void FUN_10a924370(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a5749b0((long)param_1 + lVar1,&PTR_PTR_110c2e9b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a924408; end: 10a92441b;  */

void FUN_10a924408(void)

{
  FUN_10a924520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a92441c; end: 10a92447b;  */

undefined8 * FUN_10a92441c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a92447c; end: 10a9244cf;  */

void FUN_10a92447c(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110c2f0d0)[*(uint *)(param_1 + 0x10)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return;
}



/* Entry: 10a9244d0; end: 10a9244ef;  */

long FUN_10a9244d0(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_2 + 8);
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
  return param_2;
}



/* Entry: 10a9244f0; end: 10a92450f;  */

void FUN_10a9244f0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c2f0f0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a924510; end: 10a92451f;  */

void FUN_10a924510(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a924518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x58))();
  return;
}


