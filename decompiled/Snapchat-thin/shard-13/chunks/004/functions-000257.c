/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a4fd9f0; end: 10a4fdabf;  */

void FUN_10a4fd9f0(long *param_1,long *param_2,long *param_3)

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
    if (param_3 != (long *)0x0) goto LAB_10a4fda18;
LAB_10a4fda54:
    plVar5 = param_1 + 2;
    *param_2 = *plVar5;
    *plVar5 = (long)param_2;
    *(long **)(*param_1 + uVar2 * 8) = plVar5;
    if (*param_2 == 0) goto LAB_10a4fdab0;
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
    if (param_3 == (long *)0x0) goto LAB_10a4fda54;
LAB_10a4fda18:
    *param_2 = *param_3;
    *param_3 = (long)param_2;
    if (*param_2 == 0) goto LAB_10a4fdab0;
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
    if (uVar4 == uVar2) goto LAB_10a4fdab0;
  }
  *(long **)(*param_1 + uVar4 * 8) = param_2;
LAB_10a4fdab0:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10a4fdac0; end: 10a4fdb8f;  */

long * FUN_10a4fdac0(long *param_1,long *param_2)

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
      if (param_2 < plVar10) goto LAB_10a4fdb08;
    }
    return plVar3;
  }
LAB_10a4fdb08:
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
      func_0x000109ffded8();
      plVar10 = (long *)0x28;
      __Znwm();
      lVar2 = *param_2;
      plVar10[3] = param_2[1];
      plVar10[2] = lVar2;
      *(int *)(plVar10 + 4) = (int)param_2[2];
      *plVar10 = 0;
      plVar10[1] = (ulong)*(byte *)(plVar10 + 2);
      plVar3 = param_1;
      FUN_10a4fd8a8(param_1,(ulong)*(byte *)(plVar10 + 2),plVar10 + 2);
      FUN_10a4fd9f0(param_1,plVar10,plVar3);
      return plVar10;
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
            } while (*(char *)(plVar10 + 2) == *(char *)(plVar9 + 2));
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



/* Entry: 10a4fdb90; end: 10a4fdcdb;  */

undefined8 * FUN_10a4fdb90(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*param_1;
    *param_1 = 0;
    if (puVar3 != (undefined8 *)0x0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if ((ulong)param_2 >> 0x3d != 0) {
      func_0x000109ffded8();
      puVar3 = (undefined8 *)0x28;
      __Znwm();
      uVar11 = *param_2;
      puVar3[3] = param_2[1];
      puVar3[2] = uVar11;
      *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(param_2 + 2);
      *puVar3 = 0;
      puVar3[1] = (ulong)*(byte *)(puVar3 + 2);
      plVar5 = param_1;
      FUN_10a4fd8a8(param_1,(ulong)*(byte *)(puVar3 + 2),puVar3 + 2);
      FUN_10a4fd9f0(param_1,puVar3,plVar5);
      return puVar3;
    }
    lVar2 = (long)param_2 << 3;
    __Znwm();
    puVar3 = (undefined8 *)*param_1;
    *param_1 = lVar2;
    if (puVar3 != (undefined8 *)0x0) {
      __ZdlPv();
    }
    puVar4 = (undefined8 *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)puVar4 * 8) = 0;
      puVar4 = (undefined8 *)((long)puVar4 + 1);
    } while (param_2 != puVar4);
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      puVar4 = (undefined8 *)plVar5[1];
      uVar7 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar7) == 0) {
        puVar4 = (undefined8 *)((ulong)puVar4 & uVar7);
      }
      else if (param_2 <= puVar4) {
        uVar1 = 0;
        if (param_2 != (undefined8 *)0x0) {
          uVar1 = (ulong)puVar4 / (ulong)param_2;
        }
        puVar4 = (undefined8 *)((long)puVar4 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)puVar4 * 8) = param_1 + 2;
      while (plVar6 = plVar5, plVar5 = (long *)*plVar6, plVar5 != (long *)0x0) {
        puVar8 = (undefined8 *)plVar5[1];
        if (((ulong)param_2 & uVar7) == 0) {
          puVar8 = (undefined8 *)((ulong)puVar8 & uVar7);
        }
        else if (param_2 <= puVar8) {
          uVar1 = 0;
          if (param_2 != (undefined8 *)0x0) {
            uVar1 = (ulong)puVar8 / (ulong)param_2;
          }
          puVar8 = (undefined8 *)((long)puVar8 - uVar1 * (long)param_2);
        }
        if (puVar8 != puVar4) {
          lVar2 = *param_1;
          plVar10 = plVar5;
          if (*(long *)(lVar2 + (long)puVar8 * 8) == 0) {
            *(long **)(lVar2 + (long)puVar8 * 8) = plVar6;
            puVar4 = puVar8;
          }
          else {
            do {
              plVar9 = plVar10;
              plVar10 = (long *)*plVar9;
              if (plVar10 == (long *)0x0) break;
            } while (*(char *)(plVar5 + 2) == *(char *)(plVar10 + 2));
            *plVar6 = (long)plVar10;
            *plVar9 = **(long **)(lVar2 + (long)puVar8 * 8);
            **(long **)(lVar2 + (long)puVar8 * 8) = (long)plVar5;
            plVar5 = plVar6;
          }
        }
      }
    }
  }
  return puVar3;
}



/* Entry: 10a4fdcdc; end: 10a4fdd5b;  */

undefined8 * FUN_10a4fdcdc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  uVar2 = *param_2;
  puVar1[3] = param_2[1];
  puVar1[2] = uVar2;
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_2 + 2);
  *puVar1 = 0;
  puVar1[1] = (ulong)*(byte *)(puVar1 + 2);
  uVar2 = param_1;
  FUN_10a4fd8a8(param_1,(ulong)*(byte *)(puVar1 + 2),puVar1 + 2);
  FUN_10a4fd9f0(param_1,puVar1,uVar2);
  return puVar1;
}



/* Entry: 10a4fdd5c; end: 10a4fdd93;  */

long * FUN_10a4fdd5c(long *param_1)

{
  long lVar1;
  
  FUN_10a4f1f9c(param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a4fdd94; end: 10a4fdeeb;  */

void FUN_10a4fdd94(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  
  puVar5 = (undefined8 *)0x20;
  __Znwm();
  puVar5[1] = 0;
  *puVar5 = &PTR_FUN_110be9d98;
  puVar5[2] = 0;
  puVar5[3] = 0;
  lVar2 = *(long *)(param_2 + 0x40);
  lVar3 = *(long *)(param_2 + 0x48);
  lVar7 = lVar3 - lVar2;
  if (lVar7 != 0) {
    uVar6 = (lVar7 >> 3) * 0x6db6db6db6db6db7;
    if (0x492492492492492 < uVar6) {
      FUN_10a4fe33c();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a4fde9c);
      (*pcVar4)();
    }
    FUN_10a4fe350();
    lVar7 = 0;
    puVar5[1] = uVar6;
    puVar5[2] = uVar6;
    puVar5[3] = uVar6 + param_3 * 0x38;
    do {
      puVar1 = (undefined8 *)(uVar6 + lVar7);
      *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(lVar2 + lVar7 + 8);
      *puVar1 = &PTR_FUN_110bef348;
      FUN_10a22ec14(puVar1 + 2,lVar2 + lVar7 + 0x10);
      lVar7 = lVar7 + 0x38;
    } while (lVar2 + lVar7 != lVar3);
    puVar5[2] = uVar6 + lVar7;
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 10a4fdeec; end: 10a4fe08b;  */

void FUN_10a4fdeec(long param_1,long param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar6 = *(undefined8 **)(param_1 + 0x48);
  if (puVar6 < *(undefined8 **)(param_1 + 0x50)) {
    *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(param_2 + 8);
    *puVar6 = &PTR_FUN_110bef348;
    FUN_10a2311c0(puVar6 + 2,param_2 + 0x10);
    puVar6 = puVar6 + 7;
LAB_10a4fe068:
    *(undefined8 **)(param_1 + 0x48) = puVar6;
    return;
  }
  lVar8 = (long)puVar6 - *(long *)(param_1 + 0x40);
  uVar5 = (lVar8 >> 3) * 0x6db6db6db6db6db7 + 1;
  if (uVar5 < 0x492492492492493) {
    lVar3 = (long)*(undefined8 **)(param_1 + 0x50) - *(long *)(param_1 + 0x40) >> 3;
    uVar4 = lVar3 * -0x2492492492492492;
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
      uVar4 = uVar5;
    }
    if (0x249249249249248 < (ulong)(lVar3 * 0x6db6db6db6db6db7)) {
      uVar4 = 0x492492492492492;
    }
    lVar3 = param_2;
    FUN_10a4fe350();
    puVar6 = (undefined8 *)(uVar4 + lVar8);
    *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(param_2 + 8);
    *puVar6 = &PTR_FUN_110bef348;
    FUN_10a2311c0(puVar6 + 2,param_2 + 0x10);
    puVar7 = *(undefined8 **)(param_1 + 0x40);
    puVar1 = *(undefined8 **)(param_1 + 0x48);
    lVar8 = (long)puVar6 + ((long)puVar7 - (long)puVar1);
    if ((long)puVar7 - (long)puVar1 != 0) {
      lVar10 = 0;
      do {
        puVar9 = (undefined8 *)(lVar8 + lVar10);
        *(undefined1 *)(puVar9 + 1) = *(undefined1 *)((long)puVar7 + lVar10 + 8);
        *puVar9 = &PTR_FUN_110bef348;
        FUN_10a2311c0(puVar9 + 2,(long)puVar7 + lVar10 + 0x10);
        lVar10 = lVar10 + 0x38;
      } while ((undefined8 *)((long)puVar7 + lVar10) != puVar1);
      do {
        puVar9 = puVar7 + 7;
        (**(code **)*puVar7)(puVar7);
        puVar7 = puVar9;
      } while (puVar9 != puVar1);
      puVar7 = *(undefined8 **)(param_1 + 0x40);
    }
    puVar6 = puVar6 + 7;
    *(long *)(param_1 + 0x40) = lVar8;
    *(undefined8 **)(param_1 + 0x48) = puVar6;
    *(ulong *)(param_1 + 0x50) = uVar4 + lVar3 * 0x38;
    if (puVar7 != (undefined8 *)0x0) {
      __ZdlPv(puVar7);
    }
    goto LAB_10a4fe068;
  }
  FUN_10a4fe33c();
  uVar4 = (ulong)(int)param_2;
  lVar8 = *(long *)(param_1 + 0x40);
  lVar3 = *(long *)(param_1 + 0x48);
  uVar5 = (lVar3 - lVar8 >> 3) * 0x6db6db6db6db6db7;
  if (uVar4 + 1 != uVar5) {
    if ((lVar8 == lVar3) || (uVar5 < uVar4 || uVar5 - uVar4 == 0)) goto LAB_10a4fe140;
    lVar8 = lVar8 + (long)(int)param_2 * 0x38;
    *(undefined1 *)(lVar8 + 8) = *(undefined1 *)(lVar3 + -0x30);
    FUN_10a2310cc(lVar8 + 0x10,lVar3 + -0x28);
    lVar8 = *(long *)(param_1 + 0x40);
    lVar3 = *(long *)(param_1 + 0x48);
    uVar5 = (lVar3 - lVar8 >> 3) * 0x6db6db6db6db6db7;
    if (uVar5 < uVar4 || uVar5 - uVar4 == 0) goto LAB_10a4fe140;
  }
  if (lVar8 != lVar3) {
    puVar6 = (undefined8 *)(lVar3 + -0x38);
    (**(code **)*puVar6)(puVar6);
    *(undefined8 **)(param_1 + 0x48) = puVar6;
    return;
  }
LAB_10a4fe140:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a4fe144);
  (*pcVar2)();
}



/* Entry: 10a4fe08c; end: 10a4fe143;  */

void FUN_10a4fe08c(long param_1,int param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  uVar6 = (ulong)param_2;
  lVar2 = *(long *)(param_1 + 0x40);
  lVar4 = *(long *)(param_1 + 0x48);
  uVar3 = (lVar4 - lVar2 >> 3) * 0x6db6db6db6db6db7;
  if (uVar6 + 1 != uVar3) {
    if ((lVar2 == lVar4) || (uVar3 < uVar6 || uVar3 - uVar6 == 0)) goto LAB_10a4fe140;
    lVar2 = lVar2 + (long)param_2 * 0x38;
    *(undefined1 *)(lVar2 + 8) = *(undefined1 *)(lVar4 + -0x30);
    FUN_10a2310cc(lVar2 + 0x10,lVar4 + -0x28);
    lVar2 = *(long *)(param_1 + 0x40);
    lVar4 = *(long *)(param_1 + 0x48);
    uVar3 = (lVar4 - lVar2 >> 3) * 0x6db6db6db6db6db7;
    if (uVar3 < uVar6 || uVar3 - uVar6 == 0) goto LAB_10a4fe140;
  }
  if (lVar2 != lVar4) {
    puVar5 = (undefined8 *)(lVar4 + -0x38);
    (**(code **)*puVar5)(puVar5);
    *(undefined8 **)(param_1 + 0x48) = puVar5;
    return;
  }
LAB_10a4fe140:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a4fe144);
  (*pcVar1)();
}



/* Entry: 10a4fe144; end: 10a4fe1a3;  */

undefined8 * FUN_10a4fe144(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110be9d98;
  FUN_10a4fe398(param_1 + 1);
  return param_1;
}



/* Entry: 10a4fe1a4; end: 10a4fe33b;  */

void FUN_10a4fe1a4(long param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long lStack_b0;
  long lStack_a8;
  code *pcStack_98;
  undefined **appuStack_90 [7];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a26d314(&lStack_b0,
                (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) * 0x6db6db6db6db6db7);
  lVar3 = lStack_a8 - lStack_b0;
  if (lVar3 != 0) {
    lVar9 = 0;
    uVar10 = 0;
    do {
      uVar7 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) * 0x6db6db6db6db6db7;
      if ((uVar7 < uVar10 || uVar7 - uVar10 == 0) ||
         (plVar2 = param_2,
         func_0x0001098ac018(param_2,&UNK_10e4bb2e7,0x26,*(long *)(param_1 + 8) + lVar9,2,1),
         (ulong)(lStack_a8 - lStack_b0 >> 2) <= uVar10)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a4fe2fc);
        (*pcVar1)();
      }
      *(int *)(lStack_b0 + uVar10 * 4) = (int)plVar2;
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 0x38;
    } while (lVar3 >> 2 != uVar10);
  }
  pcStack_98 = FUN_10a4fe410;
  appuStack_90[0] = &PTR_DAT_110be9dc8;
  func_0x0001098bb6d0(*param_2 + 0x18,&pcStack_98,&lStack_b0);
  (*(code *)*appuStack_90[0])(appuStack_90);
  lVar3 = lStack_b0;
  if (lStack_b0 != 0) {
    lStack_a8 = lStack_b0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    (*(code *)*appuStack_90[0])(appuStack_90);
    if (lStack_b0 != 0) {
      lStack_a8 = lStack_b0;
      __ZdlPv();
    }
    __Unwind_Resume(lVar3);
    puVar4 = (undefined8 *)&DAT_10f62a4d8;
    FUN_109ffde64();
    if ((undefined8 *)0x492492492492492 < puVar4) {
      func_0x000109ffded8();
      puVar8 = (undefined8 *)*puVar4;
      if (puVar8 == (undefined8 *)0x0) {
        return;
      }
      puVar6 = (undefined8 *)puVar4[1];
      puVar5 = puVar8;
      if (puVar6 != puVar8) {
        do {
          puVar6 = puVar6 + -7;
          (**(code **)*puVar6)(puVar6);
        } while (puVar6 != puVar8);
        puVar5 = (undefined8 *)*puVar4;
      }
      puVar4[1] = puVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(puVar5);
      return;
    }
    __Znwm((long)puVar4 * 0x38);
    return;
  }
  return;
}



/* Entry: 10a4fe33c; end: 10a4fe34f;  */

void FUN_10a4fe33c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (puVar1 < (undefined8 *)0x492492492492493) {
    __Znwm((long)puVar1 * 0x38);
    return;
  }
  func_0x000109ffded8();
  puVar4 = (undefined8 *)*puVar1;
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  puVar3 = (undefined8 *)puVar1[1];
  puVar2 = puVar4;
  if (puVar3 != puVar4) {
    do {
      puVar3 = puVar3 + -7;
      (**(code **)*puVar3)(puVar3);
    } while (puVar3 != puVar4);
    puVar2 = (undefined8 *)*puVar1;
  }
  puVar1[1] = puVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar2);
  return;
}



/* Entry: 10a4fe350; end: 10a4fe397;  */

void FUN_10a4fe350(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_1 < (undefined8 *)0x492492492492493) {
    __Znwm((long)param_1 * 0x38);
    return;
  }
  func_0x000109ffded8();
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = puVar3;
  if (puVar2 != puVar3) {
    do {
      puVar2 = puVar2 + -7;
      (**(code **)*puVar2)(puVar2);
    } while (puVar2 != puVar3);
    puVar1 = (undefined8 *)*param_1;
  }
  param_1[1] = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 10a4fe398; end: 10a4fe40f;  */

void FUN_10a4fe398(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = puVar3;
  if (puVar2 != puVar3) {
    do {
      puVar2 = puVar2 + -7;
      (**(code **)*puVar2)(puVar2);
    } while (puVar2 != puVar3);
    puVar1 = (undefined8 *)*param_1;
  }
  param_1[1] = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 10a4fe410; end: 10a4fe427;  */

void FUN_10a4fe410(void)

{
  return;
}



/* Entry: 10a4fe428; end: 10a4fe4bf;  */

undefined1 * FUN_10a4fe428(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined **ppuStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [40];
  
  uStack_60 = *(undefined1 *)(param_2 + 8);
  ppuStack_68 = &PTR_FUN_110bef348;
  FUN_10a22ec14(auStack_58,param_2 + 0x10);
  FUN_10a4d87e4(&ppuStack_68,*(undefined8 *)(param_1 + 0x20));
  puVar1 = auStack_58;
  FUN_10a28beec(puVar1,param_2 + 0x10);
  ppuStack_68 = &PTR_FUN_110bef348;
  func_0x00010a22fc28(auStack_58);
  return puVar1;
}



/* Entry: 10a4fe4c0; end: 10a4fe577;  */

void FUN_10a4fe4c0(undefined8 *param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = (undefined8 *)0x20;
  __Znwm();
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_110be9e30;
  puVar3[2] = 0;
  puVar3[3] = 0;
  lVar1 = *(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40);
  if (lVar1 != 0) {
    if (lVar1 < 0) {
      FUN_10a4fe874();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a4fe554);
      (*pcVar2)();
    }
    lVar4 = lVar1;
    __Znwm();
    puVar3[1] = lVar4;
    puVar3[3] = lVar4 + lVar1;
    _memcpy();
    puVar3[2] = lVar4 + lVar1;
  }
  *param_1 = puVar3;
  return;
}



/* Entry: 10a4fe578; end: 10a4fe64b;  */

void FUN_10a4fe578(long param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  
  puVar1 = *(undefined1 **)(param_1 + 0x48);
  if (puVar1 < *(undefined1 **)(param_1 + 0x50)) {
    puVar8 = puVar1 + 1;
    *puVar1 = *param_2;
LAB_10a4fe62c:
    *(undefined1 **)(param_1 + 0x48) = puVar8;
    return;
  }
  lVar5 = *(long *)(param_1 + 0x40);
  lVar6 = (long)puVar1 - lVar5;
  uVar7 = lVar6 + 1;
  if (-1 < (long)uVar7) {
    uVar3 = (long)*(undefined1 **)(param_1 + 0x50) - lVar5;
    uVar4 = uVar3 * 2;
    if (uVar4 < uVar7 || uVar4 - uVar7 == 0) {
      uVar4 = uVar7;
    }
    if (0x3ffffffffffffffe < uVar3) {
      uVar4 = 0x7fffffffffffffff;
    }
    if (uVar4 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar4;
      __Znwm();
    }
    puVar8 = (undefined1 *)(uVar7 + lVar6) + 1;
    *(undefined1 *)(uVar7 + lVar6) = *param_2;
    _memcpy(uVar7,lVar5,lVar6);
    *(ulong *)(param_1 + 0x40) = uVar7;
    *(undefined1 **)(param_1 + 0x48) = puVar8;
    *(ulong *)(param_1 + 0x50) = uVar7 + uVar4;
    if (lVar5 != 0) {
      __ZdlPv(lVar5);
    }
    goto LAB_10a4fe62c;
  }
  FUN_10a4fe874();
  uVar7 = (ulong)(int)param_2;
  lVar5 = *(long *)(param_1 + 0x40);
  lVar6 = *(long *)(param_1 + 0x48);
  if (uVar7 + 1 != lVar6 - lVar5) {
    if ((lVar5 == lVar6) || ((ulong)(lVar6 - lVar5) <= uVar7)) goto LAB_10a4fe690;
    *(undefined1 *)(lVar5 + uVar7) = *(undefined1 *)(lVar6 + -1);
  }
  if (lVar5 != lVar6) {
    *(long *)(param_1 + 0x48) = lVar6 + -1;
    return;
  }
LAB_10a4fe690:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a4fe694);
  (*pcVar2)();
}



/* Entry: 10a4fe64c; end: 10a4fe693;  */

void FUN_10a4fe64c(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  
  uVar4 = (ulong)param_2;
  lVar1 = *(long *)(param_1 + 0x40);
  lVar2 = *(long *)(param_1 + 0x48);
  if (uVar4 + 1 != lVar2 - lVar1) {
    if ((lVar1 == lVar2) || ((ulong)(lVar2 - lVar1) <= uVar4)) goto LAB_10a4fe690;
    *(undefined1 *)(lVar1 + uVar4) = *(undefined1 *)(lVar2 + -1);
  }
  if (lVar1 != lVar2) {
    *(long *)(param_1 + 0x48) = lVar2 + -1;
    return;
  }
LAB_10a4fe690:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a4fe694);
  (*pcVar3)();
}



/* Entry: 10a4fe694; end: 10a4fe70b;  */

undefined8 * FUN_10a4fe694(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110be9e30;
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a4fe70c; end: 10a4fe873;  */

void FUN_10a4fe70c(long param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lStack_a0;
  long lStack_98;
  code *pcStack_88;
  undefined **appuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a26d314(&lStack_a0,*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8));
  lVar3 = lStack_98 - lStack_a0;
  if (lVar3 != 0) {
    uVar4 = 0;
    do {
      if ((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) <= uVar4) {
LAB_10a4fe830:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a4fe834);
        (*pcVar1)();
      }
      plVar2 = param_2;
      func_0x0001098ac018(param_2,&UNK_10e4c8e94,0x23,*(long *)(param_1 + 8) + uVar4,2,1);
      if ((ulong)(lStack_98 - lStack_a0 >> 2) <= uVar4) goto LAB_10a4fe830;
      *(int *)(lStack_a0 + uVar4 * 4) = (int)plVar2;
      uVar4 = uVar4 + 1;
    } while (lVar3 >> 2 != uVar4);
  }
  pcStack_88 = FUN_10a4fe888;
  appuStack_80[0] = &PTR_DAT_110be9e60;
  func_0x0001098bb6d0(*param_2 + 0x18,&pcStack_88,&lStack_a0);
  (*(code *)*appuStack_80[0])(appuStack_80);
  lVar3 = lStack_a0;
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*appuStack_80[0])(appuStack_80);
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    __ZdlPv();
  }
  __Unwind_Resume(lVar3);
  FUN_109ffde64(&DAT_10f62a4d8);
  return;
}



/* Entry: 10a4fe874; end: 10a4fe887;  */

void FUN_10a4fe874(void)

{
  FUN_109ffde64(&DAT_10f62a4d8);
  return;
}



/* Entry: 10a4fe888; end: 10a4fe8c3;  */

void FUN_10a4fe888(void)

{
  return;
}



/* Entry: 10a4fe8c4; end: 10a4fe97b;  */

void FUN_10a4fe8c4(ulong *param_1,long param_2,long *param_3,undefined4 param_4,undefined4 *param_5,
                  long param_6)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lStack_50;
  long *plStack_48;
  
  plVar3 = &lStack_50;
  if (param_6 != 0) {
    lStack_50 = param_2;
    plStack_48 = param_3;
    func_0x0001098af634(&lStack_50,*param_5);
    if ((char)plVar3[3] != '\x01') {
      return;
    }
    FUN_10a26d738(param_3,param_4);
    puVar1 = (undefined8 *)0x113302320;
    if (*param_3 != -1) {
      puVar1 = (undefined8 *)(param_2 + *param_3);
    }
    if ((*(byte *)(plVar3 + 3) & 1) != 0) {
      if (*param_1 < (ulong)(plVar3[1] - *plVar3 >> 3)) {
        puVar4 = *(undefined8 **)(*plVar3 + *param_1 * 8);
        uVar5 = 0;
        if (puVar4 != (undefined8 *)0x0) {
          uVar5 = *puVar4;
        }
        *puVar1 = uVar5;
        return;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a4fe97c);
  (*pcVar2)();
}



/* Entry: 10a4fe97c; end: 10a4fe99f;  */

void FUN_10a4fe97c(void)

{
  return;
}



/* Entry: 10a4fe9a0; end: 10a4fea9b;  */

undefined8 ** FUN_10a4fe9a0(undefined8 **param_1,undefined8 *param_2,long *param_3)

{
  undefined8 **ppuVar1;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = *param_2;
  (**(code **)(param_2[1] + 0x10))(apuStack_70);
  lStack_88 = param_3[1];
  lStack_90 = *param_3;
  lStack_80 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  func_0x0001098aeecc(param_1,&uStack_78,&UNK_110bef618,&lStack_90);
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  ppuVar1 = apuStack_70;
  (*(code *)*apuStack_70[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  (*(code *)*apuStack_70[0])(apuStack_70);
  __Unwind_Resume();
  *ppuVar1 = (undefined8 *)0x0;
  return ppuVar1;
}



/* Entry: 10a4fea9c; end: 10a4feab7;  */

void FUN_10a4fea9c(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 10a4feab8; end: 10a4fee03;  */

undefined8 * FUN_10a4feab8(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar7 = *param_2;
  uVar10 = param_2[3];
  uVar9 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar10;
  param_1[2] = uVar9;
  uVar7 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar7;
  lVar5 = param_2[7];
  uVar7 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar7;
  param_1[10] = 0;
  param_1[8] = param_1 + 1;
  param_1[9] = param_1 + 10;
  param_1[0xb] = 0;
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (*(int *)((long)param_2 + 4) < 3) {
    puVar6 = (undefined8 *)param_2[9];
    puVar8 = (undefined8 *)param_1[9];
    *puVar8 = *puVar6;
    puVar8[1] = puVar6[1];
  }
  else {
    *(undefined4 *)((long)param_1 + 4) = 0;
    func_0x000109a84868(param_1,param_2);
  }
  uVar9 = param_2[0xd];
  uVar7 = param_2[0xc];
  uVar10 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar10;
  uVar10 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar10;
  lVar5 = param_2[0x13];
  uVar11 = param_2[0x13];
  uVar10 = param_2[0x12];
  param_1[0x16] = 0;
  param_1[0x13] = uVar11;
  param_1[0x12] = uVar10;
  param_1[0x14] = param_1 + 0xd;
  param_1[0x15] = param_1 + 0x16;
  param_1[0x17] = 0;
  param_1[0xd] = uVar9;
  param_1[0xc] = uVar7;
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (*(int *)((long)param_2 + 100) < 3) {
    puVar6 = (undefined8 *)param_2[0x15];
    puVar8 = (undefined8 *)param_1[0x15];
    *puVar8 = *puVar6;
    puVar8[1] = puVar6[1];
  }
  else {
    *(undefined4 *)((long)param_1 + 100) = 0;
    func_0x000109a84868(param_1 + 0xc);
  }
  uVar7 = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x18] = uVar7;
  uVar7 = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1a] = uVar7;
  uVar7 = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1c] = uVar7;
  lVar5 = param_2[0x1f];
  uVar7 = param_2[0x1e];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x1e] = uVar7;
  param_1[0x20] = param_1 + 0x19;
  param_1[0x21] = param_1 + 0x22;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (*(int *)((long)param_2 + 0xc4) < 3) {
    puVar6 = (undefined8 *)param_2[0x21];
    puVar8 = (undefined8 *)param_1[0x21];
    *puVar8 = *puVar6;
    puVar8[1] = puVar6[1];
  }
  else {
    *(undefined4 *)((long)param_1 + 0xc4) = 0;
    func_0x000109a84868(param_1 + 0x18);
  }
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
  uVar9 = param_2[0x26];
  uVar7 = param_2[0x25];
  uVar10 = param_2[0x27];
  uVar12 = param_2[0x2a];
  uVar11 = param_2[0x29];
  param_1[0x28] = param_2[0x28];
  param_1[0x27] = uVar10;
  param_1[0x2a] = uVar12;
  param_1[0x29] = uVar11;
  param_1[0x26] = uVar9;
  param_1[0x25] = uVar7;
  uVar9 = param_2[0x2c];
  uVar7 = param_2[0x2b];
  uVar11 = param_2[0x2e];
  uVar10 = param_2[0x2d];
  uVar13 = param_2[0x30];
  uVar12 = param_2[0x2f];
  uVar14 = *(undefined8 *)((long)param_2 + 0x184);
  *(undefined8 *)((long)param_1 + 0x18c) = *(undefined8 *)((long)param_2 + 0x18c);
  *(undefined8 *)((long)param_1 + 0x184) = uVar14;
  param_1[0x2e] = uVar11;
  param_1[0x2d] = uVar10;
  param_1[0x30] = uVar13;
  param_1[0x2f] = uVar12;
  param_1[0x2c] = uVar9;
  param_1[0x2b] = uVar7;
  lVar5 = param_2[0x34];
  param_1[0x33] = param_2[0x33];
  param_1[0x34] = lVar5;
  if (lVar5 != 0) {
    plVar2 = (long *)(lVar5 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar7 = param_2[0x35];
  uVar10 = param_2[0x38];
  uVar9 = param_2[0x37];
  param_1[0x36] = param_2[0x36];
  param_1[0x35] = uVar7;
  param_1[0x38] = uVar10;
  param_1[0x37] = uVar9;
  uVar9 = param_2[0x3a];
  uVar7 = param_2[0x39];
  uVar11 = param_2[0x3c];
  uVar10 = param_2[0x3b];
  uVar13 = param_2[0x3e];
  uVar12 = param_2[0x3d];
  *(undefined4 *)(param_1 + 0x3f) = *(undefined4 *)(param_2 + 0x3f);
  param_1[0x3c] = uVar11;
  param_1[0x3b] = uVar10;
  param_1[0x3e] = uVar13;
  param_1[0x3d] = uVar12;
  param_1[0x3a] = uVar9;
  param_1[0x39] = uVar7;
  *(undefined1 *)(param_1 + 0x41) = *(undefined1 *)(param_2 + 0x41);
  param_1[0x40] = &PTR_DAT_110ba5598;
  uVar7 = param_2[0x42];
  *(undefined1 *)(param_1 + 0x43) = *(undefined1 *)(param_2 + 0x43);
  param_1[0x42] = uVar7;
  uVar7 = param_2[0x44];
  uVar10 = param_2[0x47];
  uVar9 = param_2[0x46];
  param_1[0x45] = param_2[0x45];
  param_1[0x44] = uVar7;
  param_1[0x47] = uVar10;
  param_1[0x46] = uVar9;
  uVar7 = param_2[0x48];
  param_1[0x49] = param_2[0x49];
  param_1[0x48] = uVar7;
  lVar5 = param_2[0x4b];
  uVar7 = param_2[0x4a];
  param_1[0x4b] = param_2[0x4b];
  param_1[0x4a] = uVar7;
  param_1[0x4c] = param_1 + 0x45;
  param_1[0x4d] = param_1 + 0x4e;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (*(int *)((long)param_2 + 0x224) < 3) {
    puVar6 = (undefined8 *)param_2[0x4d];
    puVar8 = (undefined8 *)param_1[0x4d];
    *puVar8 = *puVar6;
    puVar8[1] = puVar6[1];
  }
  else {
    *(undefined4 *)((long)param_1 + 0x224) = 0;
    func_0x000109a84868(param_1 + 0x44,param_2 + 0x44);
  }
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x50);
  param_1[0x51] = param_2[0x51];
  lVar5 = param_2[0x52];
  param_1[0x52] = lVar5;
  if (lVar5 != 0) {
    plVar2 = (long *)(lVar5 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  return param_1;
}



/* Entry: 10a4fee04; end: 10a4fee9f;  */

long FUN_10a4fee04(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x38) + 0x14);
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
      func_0x000109a848d4(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (0 < *(int *)(param_1 + 4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x40);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 4));
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != param_1 + 0x50 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1;
}



/* Entry: 10a4feea0; end: 10a4ff0bf;  */

long FUN_10a4feea0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  func_0x00010a09db64(param_1 + 0x288);
  if (*(long *)(param_1 + 600) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 600) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x220);
    }
  }
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  if (0 < *(int *)(param_1 + 0x224)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x260);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x224));
  }
  lVar5 = *(long *)(param_1 + 0x268);
  if (lVar5 != param_1 + 0x270 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  func_0x00010a042d30(param_1 + 0x198);
  if (*(long *)(param_1 + 0xf8) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0xf8) + 0x14);
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
      func_0x000109a848d4(param_1 + 0xc0);
    }
  }
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  if (0 < *(int *)(param_1 + 0xc4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x100);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0xc4));
  }
  lVar5 = *(long *)(param_1 + 0x108);
  if (lVar5 != param_1 + 0x110 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x98) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x60);
    }
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (0 < *(int *)(param_1 + 100)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0xa0);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 100));
  }
  lVar5 = *(long *)(param_1 + 0xa8);
  if (lVar5 != param_1 + 0xb0 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x38) + 0x14);
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
      func_0x000109a848d4(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (0 < *(int *)(param_1 + 4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x40);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 4));
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != param_1 + 0x50 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1;
}



/* Entry: 10a4ff0c0; end: 10a4ff167;  */

long FUN_10a4ff0c0(long *param_1,undefined4 param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if ((bRam00000001133025a8 & 1) == 0) {
    iVar1 = 0x133025a8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(0x10a4c6070,0x1133025a0,0x100000000);
      ___cxa_guard_release(0x1133025a8);
    }
  }
  plVar2 = (long *)param_1[1];
  FUN_10a26d738(plVar2,param_2);
  if (*plVar2 == -1) {
    lVar3 = 0x1133025a0;
  }
  else {
    lVar3 = *param_1 + *plVar2;
  }
  return lVar3;
}



/* Entry: 10a4ff168; end: 10a4ff177;  */

void FUN_10a4ff168(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *extraout_x8;
  
  func_0x000105277f8c();
  puVar3 = (undefined8 *)0x20;
  __Znwm();
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_110be9f00;
  puVar3[2] = 0;
  puVar3[3] = 0;
  lVar1 = *(long *)(param_4 + 0x48) - *(long *)(param_4 + 0x40);
  if (lVar1 != 0) {
    uVar4 = (lVar1 >> 3) * -0x5555555555555555;
    if (0xaaaaaaaaaaaaaaa < uVar4) {
      FUN_10a4ff5e4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a4ff234);
      (*pcVar2)();
    }
    FUN_10a4ff5f8();
    puVar3[1] = uVar4;
    puVar3[3] = uVar4 + param_2 * 0x18;
    _memmove();
    puVar3[2] = uVar4 + lVar1;
  }
  *extraout_x8 = puVar3;
  return;
}



/* Entry: 10a4ff178; end: 10a4ff257;  */

void FUN_10a4ff178(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  puVar3 = (undefined8 *)0x20;
  __Znwm();
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_110be9f00;
  puVar3[2] = 0;
  puVar3[3] = 0;
  lVar1 = *(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40);
  if (lVar1 != 0) {
    uVar4 = (lVar1 >> 3) * -0x5555555555555555;
    if (0xaaaaaaaaaaaaaaa < uVar4) {
      FUN_10a4ff5e4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a4ff234);
      (*pcVar2)();
    }
    FUN_10a4ff5f8();
    puVar3[1] = uVar4;
    puVar3[3] = uVar4 + param_3 * 0x18;
    _memmove();
    puVar3[2] = uVar4 + lVar1;
  }
  *param_1 = puVar3;
  return;
}



/* Entry: 10a4ff258; end: 10a4ff34b;  */

void FUN_10a4ff258(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar5 = *(undefined8 **)(param_1 + 0x48);
  if (puVar5 < *(undefined8 **)(param_1 + 0x50)) {
    uVar10 = param_2[1];
    uVar9 = *param_2;
    puVar5[2] = param_2[2];
    puVar5[1] = uVar10;
    *puVar5 = uVar9;
    puVar5 = puVar5 + 3;
LAB_10a4ff334:
    *(undefined8 **)(param_1 + 0x48) = puVar5;
    return;
  }
  lVar8 = (long)puVar5 - *(long *)(param_1 + 0x40);
  uVar6 = (lVar8 >> 3) * -0x5555555555555555 + 1;
  if (uVar6 < 0xaaaaaaaaaaaaaab) {
    lVar4 = (long)*(undefined8 **)(param_1 + 0x50) - *(long *)(param_1 + 0x40) >> 3;
    uVar7 = lVar4 * 0x5555555555555556;
    if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
      uVar7 = uVar6;
    }
    if (0x555555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar7 = 0xaaaaaaaaaaaaaaa;
    }
    puVar3 = param_2;
    FUN_10a4ff5f8();
    puVar1 = (undefined8 *)(uVar7 + lVar8);
    uVar10 = param_2[1];
    uVar9 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[1] = uVar10;
    *puVar1 = uVar9;
    puVar5 = puVar1 + 3;
    lVar4 = (long)puVar1 - (*(long *)(param_1 + 0x48) - *(long *)(param_1 + 0x40));
    _memcpy(lVar4);
    lVar8 = *(long *)(param_1 + 0x40);
    *(long *)(param_1 + 0x40) = lVar4;
    *(undefined8 **)(param_1 + 0x48) = puVar5;
    *(ulong *)(param_1 + 0x50) = uVar7 + (long)puVar3 * 0x18;
    if (lVar8 != 0) {
      __ZdlPv();
    }
    goto LAB_10a4ff334;
  }
  FUN_10a4ff5e4();
  uVar6 = (ulong)(int)param_2;
  lVar8 = *(long *)(param_1 + 0x40);
  lVar4 = *(long *)(param_1 + 0x48);
  uVar7 = (lVar4 - lVar8 >> 3) * -0x5555555555555555;
  if (uVar6 + 1 != uVar7) {
    if ((lVar8 == lVar4) || (uVar7 < uVar6 || uVar7 - uVar6 == 0)) goto LAB_10a4ff3d0;
    puVar5 = (undefined8 *)(lVar8 + (long)(int)param_2 * 0x18);
    uVar10 = *(undefined8 *)(lVar4 + -0x10);
    uVar9 = *(undefined8 *)(lVar4 + -0x18);
    *(undefined1 *)(puVar5 + 2) = *(undefined1 *)(lVar4 + -8);
    puVar5[1] = uVar10;
    *puVar5 = uVar9;
    lVar8 = *(long *)(param_1 + 0x40);
    lVar4 = *(long *)(param_1 + 0x48);
    uVar7 = (lVar4 - lVar8 >> 3) * -0x5555555555555555;
    if (uVar7 < uVar6 || uVar7 - uVar6 == 0) goto LAB_10a4ff3d0;
  }
  if (lVar8 != lVar4) {
    *(long *)(param_1 + 0x48) = lVar4 + -0x18;
    return;
  }
LAB_10a4ff3d0:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a4ff3d4);
  (*pcVar2)();
}



/* Entry: 10a4ff34c; end: 10a4ff3d3;  */

void FUN_10a4ff34c(long param_1,int param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar5 = (ulong)param_2;
  lVar4 = *(long *)(param_1 + 0x40);
  lVar2 = *(long *)(param_1 + 0x48);
  uVar6 = (lVar2 - lVar4 >> 3) * -0x5555555555555555;
  if (uVar5 + 1 != uVar6) {
    if ((lVar4 == lVar2) || (uVar6 < uVar5 || uVar6 - uVar5 == 0)) goto LAB_10a4ff3d0;
    puVar3 = (undefined8 *)(lVar4 + (long)param_2 * 0x18);
    uVar8 = *(undefined8 *)(lVar2 + -0x10);
    uVar7 = *(undefined8 *)(lVar2 + -0x18);
    *(undefined1 *)(puVar3 + 2) = *(undefined1 *)(lVar2 + -8);
    puVar3[1] = uVar8;
    *puVar3 = uVar7;
    lVar4 = *(long *)(param_1 + 0x40);
    lVar2 = *(long *)(param_1 + 0x48);
    uVar6 = (lVar2 - lVar4 >> 3) * -0x5555555555555555;
    if (uVar6 < uVar5 || uVar6 - uVar5 == 0) goto LAB_10a4ff3d0;
  }
  if (lVar4 != lVar2) {
    *(long *)(param_1 + 0x48) = lVar2 + -0x18;
    return;
  }
LAB_10a4ff3d0:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a4ff3d4);
  (*pcVar1)();
}



/* Entry: 10a4ff3d4; end: 10a4ff44b;  */

undefined8 * FUN_10a4ff3d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110be9f00;
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a4ff44c; end: 10a4ff5e3;  */

void FUN_10a4ff44c(long param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lStack_b0;
  long lStack_a8;
  code *pcStack_98;
  undefined **appuStack_90 [7];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a26d314(&lStack_b0,
                (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) * -0x5555555555555555);
  lVar3 = lStack_a8 - lStack_b0;
  if (lVar3 != 0) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      uVar5 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) * -0x5555555555555555;
      if (uVar5 < uVar7 || uVar5 - uVar7 == 0) {
LAB_10a4ff5a0:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a4ff5a4);
        (*pcVar1)();
      }
      plVar2 = param_2;
      func_0x0001098ac018(param_2,&UNK_10e4c8f2d,0x26,*(long *)(param_1 + 8) + lVar6,2,1);
      if ((ulong)(lStack_a8 - lStack_b0 >> 2) <= uVar7) goto LAB_10a4ff5a0;
      *(int *)(lStack_b0 + uVar7 * 4) = (int)plVar2;
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x18;
    } while (lVar3 >> 2 != uVar7);
  }
  pcStack_98 = FUN_10a4ff63c;
  appuStack_90[0] = &PTR_DAT_110be9f30;
  func_0x0001098bb6d0(*param_2 + 0x18,&pcStack_98,&lStack_b0);
  (*(code *)*appuStack_90[0])(appuStack_90);
  lVar3 = lStack_b0;
  if (lStack_b0 != 0) {
    lStack_a8 = lStack_b0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*appuStack_90[0])(appuStack_90);
  if (lStack_b0 != 0) {
    lStack_a8 = lStack_b0;
    __ZdlPv();
  }
  __Unwind_Resume(lVar3);
  puVar4 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (puVar4 < (undefined *)0xaaaaaaaaaaaaaab) {
    __Znwm((long)puVar4 * 0x18);
    return;
  }
  func_0x000109ffded8();
  return;
}



/* Entry: 10a4ff5e4; end: 10a4ff5f7;  */

void FUN_10a4ff5e4(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (puVar1 < (undefined *)0xaaaaaaaaaaaaaab) {
    __Znwm((long)puVar1 * 0x18);
    return;
  }
  func_0x000109ffded8();
  return;
}



/* Entry: 10a4ff5f8; end: 10a4ff63b;  */

void FUN_10a4ff5f8(ulong param_1)

{
  if (param_1 < 0xaaaaaaaaaaaaaab) {
    __Znwm(param_1 * 0x18);
    return;
  }
  func_0x000109ffded8();
  return;
}



/* Entry: 10a4ff63c; end: 10a4ff6ab;  */

void FUN_10a4ff63c(void)

{
  return;
}



/* Entry: 10a4ff6ac; end: 10a4ff763;  */

void FUN_10a4ff6ac(long param_1,long *param_2,undefined4 param_3,undefined4 *param_4,long param_5,
                  long param_6)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lStack_50;
  long *plStack_48;
  
  plVar3 = &lStack_50;
  if (param_5 != 0) {
    lStack_50 = param_1;
    plStack_48 = param_2;
    func_0x0001098af634(&lStack_50,*param_4);
    if ((char)plVar3[3] != '\x01') {
      return;
    }
    FUN_10a26d738(param_2,param_3);
    puVar1 = (undefined8 *)0x1137eb1f8;
    if (*param_2 != -1) {
      puVar1 = (undefined8 *)(param_1 + *param_2);
    }
    if ((*(byte *)(plVar3 + 3) & 1) != 0) {
      if (*(ulong *)(param_6 + 0x10) < (ulong)(plVar3[1] - *plVar3 >> 3)) {
        puVar4 = *(undefined8 **)(*plVar3 + *(ulong *)(param_6 + 0x10) * 8);
        uVar5 = 0;
        if (puVar4 != (undefined8 *)0x0) {
          uVar5 = *puVar4;
        }
        *puVar1 = uVar5;
        return;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a4ff764);
  (*pcVar2)();
}



/* Entry: 10a4ff764; end: 10a4ff787;  */

void FUN_10a4ff764(void)

{
  return;
}



/* Entry: 10a4ff788; end: 10a4ff883;  */

undefined8 ** FUN_10a4ff788(undefined8 **param_1,undefined8 *param_2,long *param_3)

{
  undefined8 **ppuVar1;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = *param_2;
  (**(code **)(param_2[1] + 0x10))(apuStack_70);
  lStack_88 = param_3[1];
  lStack_90 = *param_3;
  lStack_80 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  func_0x0001098aeecc(param_1,&uStack_78,&UNK_110bef658,&lStack_90);
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  ppuVar1 = apuStack_70;
  (*(code *)*apuStack_70[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  (*(code *)*apuStack_70[0])(apuStack_70);
  __Unwind_Resume();
  *ppuVar1 = (undefined8 *)0x0;
  return ppuVar1;
}



/* Entry: 10a4ff884; end: 10a4ff89f;  */

void FUN_10a4ff884(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 10a4ff8a0; end: 10a4ff99b;  */

undefined8 ** FUN_10a4ff8a0(undefined8 **param_1,undefined8 *param_2,long *param_3)

{
  undefined8 **ppuVar1;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = *param_2;
  (**(code **)(param_2[1] + 0x10))(apuStack_70);
  lStack_88 = param_3[1];
  lStack_90 = *param_3;
  lStack_80 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  func_0x0001098aeecc(param_1,&uStack_78,&UNK_110bef380,&lStack_90);
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  ppuVar1 = apuStack_70;
  (*(code *)*apuStack_70[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  (*(code *)*apuStack_70[0])(apuStack_70);
  __Unwind_Resume();
  *ppuVar1 = (undefined8 *)0x0;
  return ppuVar1;
}



/* Entry: 10a4ff99c; end: 10a4ff9c3;  */

void FUN_10a4ff99c(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 10a4ff9c4; end: 10a4ffb8b;  */

undefined8 * FUN_10a4ff9c4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  
  *param_1 = &PTR_FUN_110c447c8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10a22cc2c(param_1 + 1,*(long *)(param_2 + 8),*(long *)(param_2 + 0x10),
                (*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8) >> 2) * -0x3333333333333333);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined1 *)(param_2 + 0x24);
  param_1[5] = 0;
  *(undefined1 *)((long)param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 4) = uVar2;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_10a4ffb8c(param_1 + 5,*(long *)(param_2 + 0x28),*(long *)(param_2 + 0x30),
                (*(long *)(param_2 + 0x30) - *(long *)(param_2 + 0x28) >> 5) * -0xf0f0f0f0f0f0f0f);
  lVar6 = *(long *)(param_2 + 0x48);
  uVar7 = *(undefined8 *)(param_2 + 0x40);
  param_1[9] = *(undefined8 *)(param_2 + 0x48);
  param_1[8] = uVar7;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar3 = *(undefined1 *)(param_2 + 0x50);
  lVar6 = *(long *)(param_2 + 0x60);
  uVar7 = *(undefined8 *)(param_2 + 0x58);
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  param_1[0xb] = uVar7;
  *(undefined1 *)(param_1 + 10) = uVar3;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar3 = *(undefined1 *)(param_2 + 0x70);
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0xe) = uVar3;
  param_1[0xd] = &PTR_FUN_110ba8440;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN_10a4fffbc(param_1 + 0xf,*(long *)(param_2 + 0x78),*(long *)(param_2 + 0x80),
                *(long *)(param_2 + 0x80) - *(long *)(param_2 + 0x78) >> 4);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  FUN_10a0cf0cc();
  return param_1;
}



/* Entry: 10a4ffb8c; end: 10a4ffc0f;  */

void FUN_10a4ffb8c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a4ffc10(param_1,param_4);
    lVar1 = param_1;
    FUN_10a4ffcb0(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a4ffc10; end: 10a4ffc57;  */

undefined1  [16]
FUN_10a4ffc10(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  if (param_2 < (undefined8 *)0x78787878787879) {
    plVar3 = param_1;
    FUN_10a4ffc6c();
    *param_1 = (long)plVar3;
    param_1[1] = (long)plVar3;
    param_1[2] = (long)(plVar3 + (long)param_2 * 0x44);
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = plVar3;
    return auVar8;
  }
  FUN_10a4ffc58();
  FUN_109ffde64(&DAT_10f62a4d8);
  if (param_2 < (undefined8 *)0x78787878787879) {
    lVar4 = (long)param_2 * 0x220;
    __Znwm(lVar4);
    auVar9._8_8_ = param_2;
    auVar9._0_8_ = lVar4;
    return auVar9;
  }
  func_0x000109ffded8();
  puVar5 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x44) {
    puVar5 = param_2 + 1;
    *param_4 = *param_2;
    FUN_10a14c0b0(param_4 + 1,puVar5);
    param_4[0x36] = &PTR_SUB_110b01d60;
    uVar7 = param_2[0x36];
    param_4[0x37] = param_2[0x37];
    param_4[0x36] = uVar7;
    if (param_4[0x37] != 0) {
      piVar6 = (int *)(param_4[0x37] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = *piVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_4[0x36] = &PTR_DAT_110b05358;
    param_4[0x38] = &PTR_SUB_110b01d60;
    uVar7 = param_2[0x38];
    param_4[0x39] = param_2[0x39];
    param_4[0x38] = uVar7;
    if (param_4[0x39] != 0) {
      piVar6 = (int *)(param_4[0x39] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = *piVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_4[0x38] = &PTR_DAT_110b05018;
    param_4[0x3a] = &PTR_SUB_110b01d60;
    uVar7 = param_2[0x3a];
    param_4[0x3b] = param_2[0x3b];
    param_4[0x3a] = uVar7;
    if (param_4[0x3b] != 0) {
      piVar6 = (int *)(param_4[0x3b] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = *piVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_4[0x3a] = &PTR_DAT_110b05018;
    param_4[0x3c] = &PTR_SUB_110b01d60;
    uVar7 = param_2[0x3c];
    param_4[0x3d] = param_2[0x3d];
    param_4[0x3c] = uVar7;
    if (param_4[0x3d] != 0) {
      piVar6 = (int *)(param_4[0x3d] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = *piVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_4[0x3c] = &PTR_DAT_110b05018;
    param_4[0x3e] = &PTR_SUB_110b01d60;
    uVar7 = param_2[0x3e];
    param_4[0x3f] = param_2[0x3f];
    param_4[0x3e] = uVar7;
    if (param_4[0x3f] != 0) {
      piVar6 = (int *)(param_4[0x3f] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = *piVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_4[0x3e] = &PTR_DAT_110b05018;
    param_4[0x40] = &PTR_SUB_110b01d60;
    uVar7 = param_2[0x40];
    param_4[0x41] = param_2[0x41];
    param_4[0x40] = uVar7;
    if (param_4[0x41] != 0) {
      piVar6 = (int *)(param_4[0x41] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = *piVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_4[0x40] = &PTR_DAT_110b05018;
    param_4[0x42] = &PTR_SUB_110b01d60;
    uVar7 = param_2[0x42];
    param_4[0x43] = param_2[0x43];
    param_4[0x42] = uVar7;
    if (param_4[0x43] != 0) {
      piVar6 = (int *)(param_4[0x43] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = *piVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_4[0x42] = &PTR_DAT_110b05018;
    param_4 = param_4 + 0x44;
  }
  auVar10._8_8_ = puVar5;
  auVar10._0_8_ = param_4;
  return auVar10;
}



/* Entry: 10a4ffc58; end: 10a4ffc6b;  */

undefined1  [16]
FUN_10a4ffc58(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  FUN_109ffde64(&DAT_10f62a4d8);
  if (param_2 < (undefined8 *)0x78787878787879) {
    lVar3 = (long)param_2 * 0x220;
    __Znwm(lVar3);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = lVar3;
    return auVar7;
  }
  func_0x000109ffded8();
  puVar4 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x44) {
    puVar4 = param_2 + 1;
    *param_4 = *param_2;
    FUN_10a14c0b0(param_4 + 1,puVar4);
    param_4[0x36] = &PTR_SUB_110b01d60;
    uVar6 = param_2[0x36];
    param_4[0x37] = param_2[0x37];
    param_4[0x36] = uVar6;
    if (param_4[0x37] != 0) {
      piVar5 = (int *)(param_4[0x37] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_4[0x36] = &PTR_DAT_110b05358;
    param_4[0x38] = &PTR_SUB_110b01d60;
    uVar6 = param_2[0x38];
    param_4[0x39] = param_2[0x39];
    param_4[0x38] = uVar6;
    if (param_4[0x39] != 0) {
      piVar5 = (int *)(param_4[0x39] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_4[0x38] = &PTR_DAT_110b05018;
    param_4[0x3a] = &PTR_SUB_110b01d60;
    uVar6 = param_2[0x3a];
    param_4[0x3b] = param_2[0x3b];
    param_4[0x3a] = uVar6;
    if (param_4[0x3b] != 0) {
      piVar5 = (int *)(param_4[0x3b] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_4[0x3a] = &PTR_DAT_110b05018;
    param_4[0x3c] = &PTR_SUB_110b01d60;
    uVar6 = param_2[0x3c];
    param_4[0x3d] = param_2[0x3d];
    param_4[0x3c] = uVar6;
    if (param_4[0x3d] != 0) {
      piVar5 = (int *)(param_4[0x3d] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_4[0x3c] = &PTR_DAT_110b05018;
    param_4[0x3e] = &PTR_SUB_110b01d60;
    uVar6 = param_2[0x3e];
    param_4[0x3f] = param_2[0x3f];
    param_4[0x3e] = uVar6;
    if (param_4[0x3f] != 0) {
      piVar5 = (int *)(param_4[0x3f] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_4[0x3e] = &PTR_DAT_110b05018;
    param_4[0x40] = &PTR_SUB_110b01d60;
    uVar6 = param_2[0x40];
    param_4[0x41] = param_2[0x41];
    param_4[0x40] = uVar6;
    if (param_4[0x41] != 0) {
      piVar5 = (int *)(param_4[0x41] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_4[0x40] = &PTR_DAT_110b05018;
    param_4[0x42] = &PTR_SUB_110b01d60;
    uVar6 = param_2[0x42];
    param_4[0x43] = param_2[0x43];
    param_4[0x42] = uVar6;
    if (param_4[0x43] != 0) {
      piVar5 = (int *)(param_4[0x43] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_4[0x42] = &PTR_DAT_110b05018;
    param_4 = param_4 + 0x44;
  }
  auVar8._8_8_ = puVar4;
  auVar8._0_8_ = param_4;
  return auVar8;
}



/* Entry: 10a4ffc6c; end: 10a4ffcaf;  */

undefined1  [16]
FUN_10a4ffc6c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (param_2 < (undefined8 *)0x78787878787879) {
    lVar3 = (long)param_2 * 0x220;
    __Znwm(lVar3);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = lVar3;
    return auVar7;
  }
  func_0x000109ffded8();
  puVar4 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x44) {
    puVar4 = param_2 + 1;
    *param_4 = *param_2;
    FUN_10a14c0b0(param_4 + 1,puVar4);
    param_4[0x36] = &PTR_SUB_110b01d60;
    uVar6 = param_2[0x36];
    param_4[0x37] = param_2[0x37];
    param_4[0x36] = uVar6;
    if (param_4[0x37] != 0) {
      piVar5 = (int *)(param_4[0x37] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_4[0x36] = &PTR_DAT_110b05358;
    param_4[0x38] = &PTR_SUB_110b01d60;
    uVar6 = param_2[0x38];
    param_4[0x39] = param_2[0x39];
    param_4[0x38] = uVar6;
    if (param_4[0x39] != 0) {
      piVar5 = (int *)(param_4[0x39] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_4[0x38] = &PTR_DAT_110b05018;
    param_4[0x3a] = &PTR_SUB_110b01d60;
    uVar6 = param_2[0x3a];
    param_4[0x3b] = param_2[0x3b];
    param_4[0x3a] = uVar6;
    if (param_4[0x3b] != 0) {
      piVar5 = (int *)(param_4[0x3b] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_4[0x3a] = &PTR_DAT_110b05018;
    param_4[0x3c] = &PTR_SUB_110b01d60;
    uVar6 = param_2[0x3c];
    param_4[0x3d] = param_2[0x3d];
    param_4[0x3c] = uVar6;
    if (param_4[0x3d] != 0) {
      piVar5 = (int *)(param_4[0x3d] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_4[0x3c] = &PTR_DAT_110b05018;
    param_4[0x3e] = &PTR_SUB_110b01d60;
    uVar6 = param_2[0x3e];
    param_4[0x3f] = param_2[0x3f];
    param_4[0x3e] = uVar6;
    if (param_4[0x3f] != 0) {
      piVar5 = (int *)(param_4[0x3f] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_4[0x3e] = &PTR_DAT_110b05018;
    param_4[0x40] = &PTR_SUB_110b01d60;
    uVar6 = param_2[0x40];
    param_4[0x41] = param_2[0x41];
    param_4[0x40] = uVar6;
    if (param_4[0x41] != 0) {
      piVar5 = (int *)(param_4[0x41] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_4[0x40] = &PTR_DAT_110b05018;
    param_4[0x42] = &PTR_SUB_110b01d60;
    uVar6 = param_2[0x42];
    param_4[0x43] = param_2[0x43];
    param_4[0x42] = uVar6;
    if (param_4[0x43] != 0) {
      piVar5 = (int *)(param_4[0x43] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_4[0x42] = &PTR_DAT_110b05018;
    param_4 = param_4 + 0x44;
  }
  auVar8._8_8_ = puVar4;
  auVar8._0_8_ = param_4;
  return auVar8;
}



/* Entry: 10a4ffcb0; end: 10a4ffeb3;  */

undefined8 *
FUN_10a4ffcb0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 uVar4;
  
  for (; param_2 != param_3; param_2 = param_2 + 0x44) {
    *param_4 = *param_2;
    FUN_10a14c0b0(param_4 + 1,param_2 + 1);
    param_4[0x36] = &PTR_SUB_110b01d60;
    uVar4 = param_2[0x36];
    param_4[0x37] = param_2[0x37];
    param_4[0x36] = uVar4;
    if (param_4[0x37] != 0) {
      piVar3 = (int *)(param_4[0x37] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_4[0x36] = &PTR_DAT_110b05358;
    param_4[0x38] = &PTR_SUB_110b01d60;
    uVar4 = param_2[0x38];
    param_4[0x39] = param_2[0x39];
    param_4[0x38] = uVar4;
    if (param_4[0x39] != 0) {
      piVar3 = (int *)(param_4[0x39] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_4[0x38] = &PTR_DAT_110b05018;
    param_4[0x3a] = &PTR_SUB_110b01d60;
    uVar4 = param_2[0x3a];
    param_4[0x3b] = param_2[0x3b];
    param_4[0x3a] = uVar4;
    if (param_4[0x3b] != 0) {
      piVar3 = (int *)(param_4[0x3b] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_4[0x3a] = &PTR_DAT_110b05018;
    param_4[0x3c] = &PTR_SUB_110b01d60;
    uVar4 = param_2[0x3c];
    param_4[0x3d] = param_2[0x3d];
    param_4[0x3c] = uVar4;
    if (param_4[0x3d] != 0) {
      piVar3 = (int *)(param_4[0x3d] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_4[0x3c] = &PTR_DAT_110b05018;
    param_4[0x3e] = &PTR_SUB_110b01d60;
    uVar4 = param_2[0x3e];
    param_4[0x3f] = param_2[0x3f];
    param_4[0x3e] = uVar4;
    if (param_4[0x3f] != 0) {
      piVar3 = (int *)(param_4[0x3f] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_4[0x3e] = &PTR_DAT_110b05018;
    param_4[0x40] = &PTR_SUB_110b01d60;
    uVar4 = param_2[0x40];
    param_4[0x41] = param_2[0x41];
    param_4[0x40] = uVar4;
    if (param_4[0x41] != 0) {
      piVar3 = (int *)(param_4[0x41] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_4[0x40] = &PTR_DAT_110b05018;
    param_4[0x42] = &PTR_SUB_110b01d60;
    uVar4 = param_2[0x42];
    param_4[0x43] = param_2[0x43];
    param_4[0x42] = uVar4;
    if (param_4[0x43] != 0) {
      piVar3 = (int *)(param_4[0x43] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_4[0x42] = &PTR_DAT_110b05018;
    param_4 = param_4 + 0x44;
  }
  return param_4;
}



/* Entry: 10a4ffeb4; end: 10a4fff4b;  */

undefined8 * FUN_10a4ffeb4(long param_1)

{
  long lStack_28;
  
  *(undefined ***)(param_1 + 0x210) = &PTR_SUB_110b01d60;
  func_0x000107c2acd4(param_1 + 0x210);
  *(undefined ***)(param_1 + 0x200) = &PTR_SUB_110b01d60;
  func_0x000107c2acd4(param_1 + 0x200);
  *(undefined ***)(param_1 + 0x1f0) = &PTR_SUB_110b01d60;
  func_0x000107c2acd4(param_1 + 0x1f0);
  *(undefined ***)(param_1 + 0x1e0) = &PTR_SUB_110b01d60;
  func_0x000107c2acd4(param_1 + 0x1e0);
  *(undefined ***)(param_1 + 0x1d0) = &PTR_SUB_110b01d60;
  func_0x000107c2acd4(param_1 + 0x1d0);
  *(undefined ***)(param_1 + 0x1c0) = &PTR_SUB_110b01d60;
  func_0x000107c2acd4(param_1 + 0x1c0);
  *(undefined ***)(param_1 + 0x1b0) = &PTR_SUB_110b01d60;
  func_0x000107c2acd4(param_1 + 0x1b0);
  *(undefined8 *)(param_1 + 8) = &PTR_FUN_110ba8488;
  func_0x00010a14e208(param_1 + 0x1a0);
  *(undefined ***)(param_1 + 0x148) = &PTR_FUN_110ba8440;
  lStack_28 = param_1 + 0x170;
  FUN_10a0426d8(&lStack_28);
  if (*(long *)(param_1 + 0x158) != 0) {
    *(long *)(param_1 + 0x160) = *(long *)(param_1 + 0x158);
    __ZdlPv();
  }
  *(undefined ***)(param_1 + 0xa8) = &PTR_SUB_110ba84d0;
  if (*(long *)(param_1 + 0x100) != 0) {
    *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x100);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xe8) != 0) {
    *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xe8);
    __ZdlPv();
  }
  *(undefined ***)(param_1 + 0x38) = &PTR_SUB_110ba84d0;
  if (*(long *)(param_1 + 0x90) != 0) {
    *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x90);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x78);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
    __ZdlPv();
  }
  return (undefined8 *)(param_1 + 8);
}



/* Entry: 10a4fff4c; end: 10a4fffbb;  */

void FUN_10a4fff4c(long *param_1)

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
        lVar2 = lVar2 + -0x220;
        FUN_10a4ffeb4(lVar2);
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



/* Entry: 10a4fffbc; end: 10a500033;  */

void FUN_10a4fffbc(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a14e018(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 10a500034; end: 10a50008b;  */

long FUN_10a500034(long param_1)

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



/* Entry: 10a50008c; end: 10a5000c3;  */

long * FUN_10a50008c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((long *)*param_1 != (long *)0x0) {
    (**(code **)(*(long *)*param_1 + 0x18))();
  }
  plVar5 = (long *)param_1[1];
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



/* Entry: 10a5000c4; end: 10a5000f3;  */

void FUN_10a5000c4(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x30);
  FUN_10a5000f4();
                    /* WARNING: Could not recover jumptable at 0x00010a5000f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10a5000f4; end: 10a500223;  */

void FUN_10a5000f4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lStack_48;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a5001e0);
    (*pcVar4)();
  }
  lVar7 = param_1[5];
  param_1[5] = 0;
  lVar6 = *param_1;
  uVar5 = 8;
  lStack_48 = lVar7;
  __Znwm(8);
  FUN_10a4eb7ec();
  FUN_10a5005a0(lVar6 + 0xb8,uVar5);
  plVar1 = (long *)(lVar7 + 0x10);
  do {
    lVar6 = *plVar1;
    if (lVar6 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(lVar7 + 0x18);
        goto LAB_10a500190;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar6 >> 1 & 1) != 0) {
LAB_10a500190:
      if ((char)param_1[4] == '\x01') {
        *(undefined1 *)(param_1 + 4) = 0;
      }
      lStack_48 = 0;
      if ((lVar7 != 0) && (func_0x0001092b4274(&lStack_48,lVar7), lStack_48 != 0)) {
        func_0x0001092b4274(&lStack_48);
      }
      return;
    }
  } while( true );
}



/* Entry: 10a500224; end: 10a50059f;  */

undefined8 * FUN_10a500224(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110be9f90;
  if (param_1[0x19] != 0) {
    func_0x0001092b4274();
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a5005a0; end: 10a5005e7;  */

void FUN_10a5005a0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x00010a4ec5f4(lVar1);
    FUN_10a52fad8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a5005e8; end: 10a500683;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a5005e8(long param_1)

{
  code *pcVar1;
  undefined1 auStack_38 [8];
  long alStack_30 [2];
  
  if (*(uint *)(param_1 + 0x50) < 2) {
    param_1 = param_1 + (ulong)*(uint *)(param_1 + 0x50) * 0x28;
    __ZNSt13exception_ptrC1ERKS_(alStack_30,param_1 + 0x20);
    alStack_30[1] = 0;
    __ZNSt13exception_ptraSERKS_(param_1 + 0x20,alStack_30 + 1);
    __ZNSt13exception_ptrD1Ev(alStack_30 + 1);
    if (alStack_30[0] == 0) {
      __ZNSt13exception_ptrD1Ev(alStack_30);
      return;
    }
    __ZNSt13exception_ptrC1ERKS_(auStack_38,alStack_30);
    __ZSt17rethrow_exceptionSt13exception_ptr(auStack_38);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a500668);
  (*pcVar1)();
}



/* Entry: 10a500684; end: 10a500983;  */

undefined8 * FUN_10a500684(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bef460;
  param_1[2] = &PTR_DAT_110bef4c0;
  func_0x00010a5007c4(param_1 + 0x41);
  func_0x00010a500748(param_1 + 0x3c);
  func_0x00010a500748(param_1 + 0x37);
  func_0x00010a500748(param_1 + 0x32);
  func_0x00010a50088c(param_1 + 0x2d);
  func_0x00010a500908(param_1 + 0x28);
  param_1[0x1b] = &PTR_FUN_110bef528;
  FUN_10a0d92c8(param_1 + 0x26);
  FUN_10a0d92c8(param_1 + 0x24);
  param_1[0x1d] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x1e);
  param_1[0x10] = &PTR_FUN_110bef4e0;
  FUN_10a0d92c8(param_1 + 0x19);
  param_1[0x12] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x13);
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  return param_1;
}



/* Entry: 10a500984; end: 10a500993;  */

void FUN_10a500984(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bea070;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a500994; end: 10a5009b3;  */

void FUN_10a500994(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bea070;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a5009b4; end: 10a5009db;  */

undefined8 * FUN_10a5009b4(long param_1)

{
  func_0x00010a500748(param_1 + 0x278);
  *(undefined8 *)(param_1 + 0x18) = &PTR_FUN_110bef460;
  *(undefined ***)(param_1 + 0x28) = &PTR_DAT_110bef4c0;
  func_0x00010a5007c4(param_1 + 0x220);
  func_0x00010a500748(param_1 + 0x1f8);
  func_0x00010a500748(param_1 + 0x1d0);
  func_0x00010a500748(param_1 + 0x1a8);
  func_0x00010a50088c(param_1 + 0x180);
  func_0x00010a500908(param_1 + 0x158);
  *(undefined ***)(param_1 + 0xf0) = &PTR_FUN_110bef528;
  FUN_10a0d92c8(param_1 + 0x148);
  FUN_10a0d92c8(param_1 + 0x138);
  *(undefined ***)(param_1 + 0x100) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x108);
  *(undefined ***)(param_1 + 0x98) = &PTR_FUN_110bef4e0;
  FUN_10a0d92c8(param_1 + 0xe0);
  *(undefined ***)(param_1 + 0xa8) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0xb0);
  if (*(char *)(param_1 + 0x4f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x38));
  }
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 10a5009dc; end: 10a5009df;  */

void FUN_10a5009dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a5009e0; end: 10a500c2b;  */

undefined8 * FUN_10a5009e0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 8);
  *param_1 = &PTR_FUN_110bef460;
  param_1[2] = &PTR_DAT_110bef4c0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  if (*(char *)(param_2 + 0x37) < '\0') {
    func_0x000107c3192c(param_1 + 4,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28))
    ;
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x28);
    uVar4 = *(undefined8 *)(param_2 + 0x20);
    param_1[6] = *(undefined8 *)(param_2 + 0x30);
    param_1[5] = uVar6;
    param_1[4] = uVar4;
  }
  uVar7 = *(undefined8 *)(param_2 + 0x50);
  uVar6 = *(undefined8 *)(param_2 + 0x48);
  uVar9 = *(undefined8 *)(param_2 + 0x60);
  uVar8 = *(undefined8 *)(param_2 + 0x58);
  uVar11 = *(undefined8 *)(param_2 + 0x70);
  uVar10 = *(undefined8 *)(param_2 + 0x68);
  uVar4 = *(undefined8 *)(param_2 + 0x78);
  uVar13 = *(undefined8 *)(param_2 + 0x40);
  uVar12 = *(undefined8 *)(param_2 + 0x38);
  param_1[0x10] = &PTR_FUN_110bef4e0;
  param_1[8] = uVar13;
  param_1[7] = uVar12;
  param_1[0xf] = uVar4;
  param_1[0xe] = uVar11;
  param_1[0xd] = uVar10;
  param_1[0xc] = uVar9;
  param_1[0xb] = uVar8;
  param_1[10] = uVar7;
  param_1[9] = uVar6;
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x88);
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x12] = &PTR_FUN_110c6a8d8;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = &PTR_FUN_110c6a940;
  *(undefined8 *)((long)param_1 + 0xb4) = *(undefined8 *)(param_2 + 0xb4);
  *(undefined8 *)((long)param_1 + 0xbc) = *(undefined8 *)(param_2 + 0xbc);
  lVar5 = *(long *)(param_2 + 0xd0);
  uVar4 = *(undefined8 *)(param_2 + 200);
  param_1[0x1a] = *(undefined8 *)(param_2 + 0xd0);
  param_1[0x19] = uVar4;
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
  param_1[0x1b] = &PTR_FUN_110bef528;
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0xe0);
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x1d] = &PTR_FUN_110c6a8d8;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = &PTR_FUN_110c6a940;
  *(undefined8 *)((long)param_1 + 0x10c) = *(undefined8 *)(param_2 + 0x10c);
  *(undefined8 *)((long)param_1 + 0x114) = *(undefined8 *)(param_2 + 0x114);
  lVar5 = *(long *)(param_2 + 0x128);
  uVar4 = *(undefined8 *)(param_2 + 0x120);
  param_1[0x25] = *(undefined8 *)(param_2 + 0x128);
  param_1[0x24] = uVar4;
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
  lVar5 = *(long *)(param_2 + 0x138);
  uVar4 = *(undefined8 *)(param_2 + 0x130);
  param_1[0x27] = *(undefined8 *)(param_2 + 0x138);
  param_1[0x26] = uVar4;
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
  FUN_10a500c2c(param_1 + 0x28,param_2 + 0x140);
  FUN_10a501230(param_1 + 0x2d,param_2 + 0x168);
  FUN_10a501c20(param_1 + 0x32,param_2 + 400);
  FUN_10a501c20(param_1 + 0x37,param_2 + 0x1b8);
  FUN_10a501c20(param_1 + 0x3c,param_2 + 0x1e0);
  FUN_10a501590(param_1 + 0x41,param_2 + 0x208);
  return param_1;
}



/* Entry: 10a500c2c; end: 10a500c9f;  */

undefined8 * FUN_10a500c2c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_10a500ca0(param_1,*(undefined8 *)(param_2 + 8));
  for (plVar1 = *(long **)(param_2 + 0x10); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    FUN_10a500eac(param_1,plVar1 + 2,plVar1 + 2);
  }
  return param_1;
}



/* Entry: 10a500ca0; end: 10a500d6f;  */

undefined1  [16] FUN_10a500ca0(long *param_1,long *param_2,undefined8 param_3)

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
LAB_10a500ce8:
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
                  goto LAB_10a5010a0;
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
        FUN_10a5010ec(aplStack_88,param_1,plVar8,param_3);
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
          FUN_10a500ca0(param_1,uVar5);
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
LAB_10a5010a0:
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
    if (param_2 < plVar12) goto LAB_10a500ce8;
  }
  auVar13._8_8_ = plVar4;
  auVar13._0_8_ = plVar8;
  return auVar13;
}



/* Entry: 10a500d70; end: 10a500eab;  */

undefined1  [16] FUN_10a500d70(long *param_1,ulong param_2,undefined8 param_3)

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
                goto LAB_10a5010a0;
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
      FUN_10a5010ec(aplStack_88,param_1,plVar9,param_3);
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
        FUN_10a500ca0(param_1,uVar13);
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
LAB_10a5010a0:
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



/* Entry: 10a500eac; end: 10a5010eb;  */

undefined1  [16] FUN_10a500eac(long *param_1,undefined8 param_2,undefined8 param_3)

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
            goto LAB_10a5010a0;
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
  FUN_10a5010ec(aplStack_68,param_1,plVar6,param_3);
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
    FUN_10a500ca0(param_1,uVar9);
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
LAB_10a5010a0:
  auVar10._8_8_ = uVar1;
  auVar10._0_8_ = plVar7;
  return auVar10;
}



/* Entry: 10a5010ec; end: 10a50116f;  */

void FUN_10a5010ec(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  FUN_10a501170(puVar1 + 2,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10a501170; end: 10a50122f;  */

undefined8 * FUN_10a501170(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar3;
    *param_1 = uVar2;
  }
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[3] = &PTR_FUN_110bef570;
  uVar1 = *(undefined4 *)((long)param_2 + 0x24);
  *(undefined4 *)((long)param_1 + 0x27) = *(undefined4 *)((long)param_2 + 0x27);
  *(undefined4 *)((long)param_1 + 0x24) = uVar1;
  return param_1;
}



/* Entry: 10a501230; end: 10a5012a3;  */

undefined8 * FUN_10a501230(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_10a2f96a0(param_1,*(undefined8 *)(param_2 + 8));
  for (plVar1 = *(long **)(param_2 + 0x10); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    FUN_10a5012a4(param_1,plVar1 + 2,plVar1 + 2);
  }
  return param_1;
}



/* Entry: 10a5012a4; end: 10a5014e3;  */

undefined1  [16] FUN_10a5012a4(long *param_1,undefined8 param_2,undefined8 param_3)

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
            goto LAB_10a501498;
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
  FUN_10a5014e4(aplStack_68,param_1,plVar6,param_3);
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
    FUN_10a2f96a0(param_1,uVar9);
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
LAB_10a501498:
  auVar10._8_8_ = uVar1;
  auVar10._0_8_ = plVar7;
  return auVar10;
}



/* Entry: 10a5014e4; end: 10a50158f;  */

void FUN_10a5014e4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    func_0x000107c3192c(puVar1 + 2,*param_4,param_4[1]);
  }
  else {
    uVar2 = *param_4;
    puVar1[3] = param_4[1];
    puVar1[2] = uVar2;
    puVar1[4] = param_4[2];
  }
  puVar1[5] = param_4[3];
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10a501590; end: 10a501603;  */

undefined8 * FUN_10a501590(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_10a501604(param_1,*(undefined8 *)(param_2 + 8));
  for (plVar1 = *(long **)(param_2 + 0x10); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    FUN_10a501810(param_1,plVar1 + 2,plVar1 + 2);
  }
  return param_1;
}



/* Entry: 10a501604; end: 10a5016d3;  */

undefined1  [16] FUN_10a501604(long *param_1,long *param_2,undefined8 param_3)

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
LAB_10a50164c:
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
                  goto LAB_10a501a04;
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
        FUN_10a501a44(aplStack_88,param_1,plVar8,param_3);
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
          FUN_10a501604(param_1,uVar5);
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
LAB_10a501a04:
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
    if (param_2 < plVar12) goto LAB_10a50164c;
  }
  auVar13._8_8_ = plVar4;
  auVar13._0_8_ = plVar8;
  return auVar13;
}



/* Entry: 10a5016d4; end: 10a50180f;  */

undefined1  [16] FUN_10a5016d4(long *param_1,ulong param_2,undefined8 param_3)

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
                goto LAB_10a501a04;
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
      FUN_10a501a44(aplStack_88,param_1,plVar9,param_3);
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
        FUN_10a501604(param_1,uVar13);
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
LAB_10a501a04:
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



/* Entry: 10a501810; end: 10a501a43;  */

undefined1  [16] FUN_10a501810(long *param_1,undefined8 param_2,undefined8 param_3)

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
            goto LAB_10a501a04;
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
  FUN_10a501a44(aplStack_68,param_1,plVar6,param_3);
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
    FUN_10a501604(param_1,uVar9);
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
LAB_10a501a04:
  auVar10._8_8_ = uVar1;
  auVar10._0_8_ = plVar7;
  return auVar10;
}



/* Entry: 10a501a44; end: 10a501aaf;  */

void FUN_10a501a44(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x80;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  FUN_10a501ab0(puVar1 + 2,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10a501ab0; end: 10a501b23;  */

undefined8 * FUN_10a501ab0(undefined8 *param_1,undefined8 *param_2)

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
  FUN_10a501b24(param_1 + 3,param_2 + 3);
  return param_1;
}



/* Entry: 10a501b24; end: 10a501bd7;  */

undefined8 * FUN_10a501b24(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10a4f10b4();
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_10a4f0f94();
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  uVar4 = *(undefined8 *)(param_2 + 0x48);
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  return param_1;
}



/* Entry: 10a501bd8; end: 10a501c1f;  */

void FUN_10a501bd8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a500838(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a501c20; end: 10a501c93;  */

undefined8 * FUN_10a501c20(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_10a2f9d10(param_1,*(undefined8 *)(param_2 + 8));
  for (plVar1 = *(long **)(param_2 + 0x10); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    FUN_10a501c94(param_1,plVar1 + 2,plVar1 + 2);
  }
  return param_1;
}



/* Entry: 10a501c94; end: 10a501ed3;  */

undefined1  [16] FUN_10a501c94(long *param_1,undefined8 param_2,undefined8 param_3)

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
            goto LAB_10a501e88;
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
  FUN_10a501ed4(aplStack_68,param_1,plVar6,param_3);
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
    FUN_10a2f9d10(param_1,uVar9);
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
LAB_10a501e88:
  auVar10._8_8_ = uVar1;
  auVar10._0_8_ = plVar7;
  return auVar10;
}



/* Entry: 10a501ed4; end: 10a501f87;  */

void FUN_10a501ed4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    func_0x000107c3192c(puVar1 + 2,*param_4,param_4[1]);
  }
  else {
    uVar2 = *param_4;
    puVar1[3] = param_4[1];
    puVar1[2] = uVar2;
    puVar1[4] = param_4[2];
  }
  puVar1[5] = param_4[3];
  *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_4 + 4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10a501f88; end: 10a501f97;  */

void FUN_10a501f88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bef410;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a501f98; end: 10a501fb7;  */

void FUN_10a501f98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bef410;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a501fb8; end: 10a501fc7;  */

void FUN_10a501fb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a501fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a501fc8; end: 10a502023;  */

long * FUN_10a501fc8(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_10a502024(plVar1 + 2);
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



/* Entry: 10a502024; end: 10a502117;  */

void FUN_10a502024(undefined8 *param_1)

{
  func_0x00010a1bb0e8(param_1 + 7);
  func_0x00010a1bb0e8(param_1 + 5);
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10a502118; end: 10a502367;  */

undefined1  [16]
FUN_10a502118(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long **pplVar4;
  long lVar5;
  long **pplVar6;
  ulong uVar7;
  long *plVar8;
  long **pplVar9;
  long **unaff_x27;
  ulong uVar10;
  undefined1 auVar11 [16];
  long *aplStack_78 [3];
  
  pplVar6 = aplStack_78;
  func_0x000107c2b05c(pplVar6,param_2 + 0x20);
  pplVar9 = (long **)param_1[1];
  if (pplVar9 != (long **)0x0) {
    uVar10 = (long)pplVar9 - 1;
    if (((ulong)pplVar9 & uVar10) == 0) {
      unaff_x27 = (long **)(uVar10 & (ulong)pplVar6);
    }
    else {
      unaff_x27 = pplVar6;
      if (pplVar9 <= pplVar6) {
        uVar7 = 0;
        if (pplVar9 != (long **)0x0) {
          uVar7 = (ulong)pplVar6 / (ulong)pplVar9;
        }
        unaff_x27 = (long **)((long)pplVar6 - uVar7 * (long)pplVar9);
      }
    }
    puVar3 = *(undefined8 **)(*param_1 + (long)unaff_x27 * 8);
    if (puVar3 != (undefined8 *)0x0) {
      for (plVar8 = (long *)*puVar3; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        pplVar4 = (long **)plVar8[1];
        if (pplVar4 == pplVar6) {
          plVar1 = plVar8 + 2;
          FUN_10a22f138(plVar1,param_2);
          if (((ulong)plVar1 & 1) != 0) {
            uVar2 = 0;
            goto LAB_10a502324;
          }
        }
        else {
          if (((ulong)pplVar9 & uVar10) == 0) {
            pplVar4 = (long **)((ulong)pplVar4 & uVar10);
          }
          else if (pplVar9 <= pplVar4) {
            uVar7 = 0;
            if (pplVar9 != (long **)0x0) {
              uVar7 = (ulong)pplVar4 / (ulong)pplVar9;
            }
            pplVar4 = (long **)((long)pplVar4 - uVar7 * (long)pplVar9);
          }
          if (pplVar4 != unaff_x27) break;
        }
      }
    }
  }
  FUN_10a502368(aplStack_78,param_1,pplVar6,param_3,param_4,param_5);
  if ((pplVar9 == (long **)0x0) ||
     (*(float *)(param_1 + 4) * (float)pplVar9 < (float)(param_1[3] + 1))) {
    uVar10 = 1;
    if ((long **)0x2 < pplVar9) {
      uVar10 = (ulong)(((ulong)pplVar9 & (long)pplVar9 - 1U) != 0);
    }
    uVar10 = uVar10 | (long)pplVar9 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar10 <= uVar7) {
      uVar10 = uVar7;
    }
    FUN_10a4f204c(param_1,uVar10);
    pplVar9 = (long **)param_1[1];
    if (((ulong)pplVar9 & (long)pplVar9 - 1U) == 0) {
      unaff_x27 = (long **)((long)pplVar9 - 1U & (ulong)pplVar6);
    }
    else {
      unaff_x27 = pplVar6;
      if (pplVar9 <= pplVar6) {
        uVar10 = 0;
        if (pplVar9 != (long **)0x0) {
          uVar10 = (ulong)pplVar6 / (ulong)pplVar9;
        }
        unaff_x27 = (long **)((long)pplVar6 - uVar10 * (long)pplVar9);
      }
    }
  }
  lVar5 = *param_1;
  plVar8 = *(long **)(lVar5 + (long)unaff_x27 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *aplStack_78[0] = *plVar8;
    *plVar8 = (long)aplStack_78[0];
    *(long **)(lVar5 + (long)unaff_x27 * 8) = plVar8;
    if (*aplStack_78[0] != 0) {
      pplVar6 = *(long ***)(*aplStack_78[0] + 8);
      if (((ulong)pplVar9 & (long)pplVar9 - 1U) == 0) {
        pplVar6 = (long **)((ulong)pplVar6 & (long)pplVar9 - 1U);
      }
      else if (pplVar9 <= pplVar6) {
        uVar10 = 0;
        if (pplVar9 != (long **)0x0) {
          uVar10 = (ulong)pplVar6 / (ulong)pplVar9;
        }
        pplVar6 = (long **)((long)pplVar6 - uVar10 * (long)pplVar9);
      }
      *(long **)(*param_1 + (long)pplVar6 * 8) = aplStack_78[0];
    }
  }
  else {
    *aplStack_78[0] = *plVar8;
    *plVar8 = (long)aplStack_78[0];
  }
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
  plVar8 = aplStack_78[0];
LAB_10a502324:
  auVar11._8_8_ = uVar2;
  auVar11._0_8_ = plVar8;
  return auVar11;
}



/* Entry: 10a502368; end: 10a5023ff;  */

void FUN_10a502368(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xe8;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  FUN_10a22f23c(puVar1 + 2,*param_5);
  puVar1[0x1c] = 0;
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  puVar1[0x17] = 0;
  puVar1[0x16] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  *(undefined4 *)(puVar1 + 0x17) = 0x3f800000;
  puVar1[0x19] = 0;
  puVar1[0x18] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1a] = 0;
  *(undefined4 *)(puVar1 + 0x1c) = 0x3f800000;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10a502400; end: 10a5025af;  */

void FUN_10a502400(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a4f1fd8(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a5025b0; end: 10a50261f;  */

void FUN_10a5025b0(long *param_1)

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
        lVar2 = lVar2 + -0x80;
        FUN_10a502620(lVar2);
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



/* Entry: 10a502620; end: 10a5028d7;  */

void FUN_10a502620(undefined8 *param_1)

{
  if ((*(char *)(param_1 + 0xf) == '\x01') && (*(char *)((long)param_1 + 0x77) < '\0')) {
    __ZdlPv(param_1[0xc]);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10a5028d8; end: 10a502947;  */

void FUN_10a5028d8(long *param_1)

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
        lVar2 = lVar2 + -0x50;
        FUN_10a502948(lVar2);
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



/* Entry: 10a502948; end: 10a502ab3;  */

void FUN_10a502948(long param_1)

{
  if (*(char *)(param_1 + 0x4f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x38));
  }
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  if (-1 < *(char *)(param_1 + 0x1f)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10a502ab4; end: 10a502adb;  */

void FUN_10a502ab4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10a502adc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}


